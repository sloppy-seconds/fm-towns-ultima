#include "p_game_funcs.h"
namespace p_game {
void f_000c72b0(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0c72b0  push ebp
    X86_AT(c, 0xc72b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c72b1  mov ebp, esp
    X86_AT(c, 0xc72b1u);
    c.r[5] = c.r[4];
    // 0c72b3  push edi
    X86_AT(c, 0xc72b3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c72b4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc72b4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c72b7  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc72b7u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c72ba  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc72bau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c72bd  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc72bdu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c72c0  dec edx
    X86_AT(c, 0xc72c0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c72c1  cmp edx, 3
    X86_AT(c, 0xc72c1u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c72c4  ja 0xc7318
    X86_AT(c, 0xc72c4u);
    if (x86_cc(c, 7)) { goto L_c7318; }
    X86_TICK(c, 7);
    // 0c72c6  jmp dword ptr cs:[edx*4 + 0xc72ce]
    X86_AT(c, 0xc72c6u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC72CEu)));
      switch (t) {
      case 0xc72deu: goto L_c72de;
      case 0xc72edu: goto L_c72ed;
      case 0xc72fcu: goto L_c72fc;
      case 0xc730bu: goto L_c730b;
      default: x86_jump(c, t); return; } }
L_c72de:
    X86_TICK(c, 19);
    // 0c72de  sub dword ptr [ecx], eax
    X86_AT(c, 0xc72deu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0c72e0  cmp dword ptr [ecx], 0
    X86_AT(c, 0xc72e0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1]))), 0x0u, 0, 4);
    // 0c72e3  jge 0xc7318
    X86_AT(c, 0xc72e3u);
    if (x86_cc(c, 13)) { goto L_c7318; }
    X86_TICK(c, 9);
    // 0c72e5  mov dword ptr [ecx], 0
    X86_AT(c, 0xc72e5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0c72eb  jmp 0xc7318
    X86_AT(c, 0xc72ebu);
    goto L_c7318;
L_c72ed:
    X86_TICK(c, 19);
    // 0c72ed  add dword ptr [ecx], eax
    X86_AT(c, 0xc72edu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0c72ef  cmp dword ptr [ecx], 0xa
    X86_AT(c, 0xc72efu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1]))), 0xAu, 0, 4);
    // 0c72f2  jle 0xc7318
    X86_AT(c, 0xc72f2u);
    if (x86_cc(c, 14)) { goto L_c7318; }
    X86_TICK(c, 9);
    // 0c72f4  mov dword ptr [ecx], 0xa
    X86_AT(c, 0xc72f4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), 0xAu);
    // 0c72fa  jmp 0xc7318
    X86_AT(c, 0xc72fau);
    goto L_c7318;
L_c72fc:
    X86_TICK(c, 19);
    // 0c72fc  sub dword ptr [edi], eax
    X86_AT(c, 0xc72fcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0c72fe  cmp dword ptr [edi], 0
    X86_AT(c, 0xc72feu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 4);
    // 0c7301  jge 0xc7318
    X86_AT(c, 0xc7301u);
    if (x86_cc(c, 13)) { goto L_c7318; }
    X86_TICK(c, 9);
    // 0c7303  mov dword ptr [edi], 0
    X86_AT(c, 0xc7303u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0c7309  jmp 0xc7318
    X86_AT(c, 0xc7309u);
    goto L_c7318;
L_c730b:
    X86_TICK(c, 19);
    // 0c730b  add dword ptr [edi], eax
    X86_AT(c, 0xc730bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0c730d  cmp dword ptr [edi], 0xa
    X86_AT(c, 0xc730du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 4);
    // 0c7310  jle 0xc7318
    X86_AT(c, 0xc7310u);
    if (x86_cc(c, 14)) { goto L_c7318; }
    X86_TICK(c, 2);
    // 0c7312  mov dword ptr [edi], 0xa
    X86_AT(c, 0xc7312u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), 0xAu);
L_c7318:
    X86_TICK(c, 20);
    // 0c7318  pop edi
    X86_AT(c, 0xc7318u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7319  leave 
    X86_AT(c, 0xc7319u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c731a  ret 
    X86_AT(c, 0xc731au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc72b0u, "ran off the end of a function");
}
void f_000c731c(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0c731c  push ebp
    X86_AT(c, 0xc731cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c731d  mov ebp, esp
    X86_AT(c, 0xc731du);
    c.r[5] = c.r[4];
    // 0c731f  push edi
    X86_AT(c, 0xc731fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7320  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc7320u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c7323  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc7323u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c7326  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc7326u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c7329  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc7329u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c732c  dec edx
    X86_AT(c, 0xc732cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c732d  cmp edx, 3
    X86_AT(c, 0xc732du);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c7330  ja 0xc7358
    X86_AT(c, 0xc7330u);
    if (x86_cc(c, 7)) { goto L_c7358; }
    X86_TICK(c, 7);
    // 0c7332  jmp dword ptr cs:[edx*4 + 0xc733a]
    X86_AT(c, 0xc7332u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC733Au)));
      switch (t) {
      case 0xc734au: goto L_c734a;
      case 0xc734eu: goto L_c734e;
      case 0xc7352u: goto L_c7352;
      case 0xc7356u: goto L_c7356;
      default: x86_jump(c, t); return; } }
L_c734a:
    X86_TICK(c, 14);
    // 0c734a  sub dword ptr [ecx], eax
    X86_AT(c, 0xc734au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0c734c  jmp 0xc7358
    X86_AT(c, 0xc734cu);
    goto L_c7358;
L_c734e:
    X86_TICK(c, 14);
    // 0c734e  add dword ptr [ecx], eax
    X86_AT(c, 0xc734eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0c7350  jmp 0xc7358
    X86_AT(c, 0xc7350u);
    goto L_c7358;
L_c7352:
    X86_TICK(c, 14);
    // 0c7352  sub dword ptr [edi], eax
    X86_AT(c, 0xc7352u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0c7354  jmp 0xc7358
    X86_AT(c, 0xc7354u);
    goto L_c7358;
L_c7356:
    X86_TICK(c, 7);
    // 0c7356  add dword ptr [edi], eax
    X86_AT(c, 0xc7356u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_c7358:
    X86_TICK(c, 20);
    // 0c7358  pop edi
    X86_AT(c, 0xc7358u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7359  leave 
    X86_AT(c, 0xc7359u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c735a  ret 
    X86_AT(c, 0xc735au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc731cu, "ran off the end of a function");
}
void f_000c735c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0c735c  push ebp
    X86_AT(c, 0xc735cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c735d  mov ebp, esp
    X86_AT(c, 0xc735du);
    c.r[5] = c.r[4];
    // 0c735f  push edi
    X86_AT(c, 0xc735fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7360  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc7360u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c7363  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc7363u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c7366  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xc7366u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0c736b  and eax, eax
    X86_AT(c, 0xc736bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c736d  je 0xc7376
    X86_AT(c, 0xc736du);
    if (x86_cc(c, 4)) { goto L_c7376; }
    X86_TICK(c, 7);
    // 0c736f  cmp eax, 0xff
    X86_AT(c, 0xc736fu);
    (void)x86_sub(c, c.r[0], 0xFFu, 0, 4);
    // 0c7374  jne 0xc738d
    X86_AT(c, 0xc7374u);
    if (x86_cc(c, 5)) { goto L_c738d; }
L_c7376:
    X86_TICK(c, 11);
    // 0c7376  cmp edi, dword ptr [0xa6048]
    X86_AT(c, 0xc7376u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xA6048u))), 0, 4);
    // 0c737c  jne 0xc738d
    X86_AT(c, 0xc737cu);
    if (x86_cc(c, 5)) { goto L_c738d; }
    X86_TICK(c, 11);
    // 0c737e  cmp edx, dword ptr [0xa604c]
    X86_AT(c, 0xc737eu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(0xA604Cu))), 0, 4);
    // 0c7384  jne 0xc738d
    X86_AT(c, 0xc7384u);
    if (x86_cc(c, 5)) { goto L_c738d; }
    X86_TICK(c, 9);
    // 0c7386  mov eax, 0xff
    X86_AT(c, 0xc7386u);
    c.r[0] = 0xFFu;
    // 0c738b  jmp 0xc73bb
    X86_AT(c, 0xc738bu);
    goto L_c73bb;
L_c738d:
    X86_TICK(c, 2);
    // 0c738d  sub ecx, ecx
    X86_AT(c, 0xc738du);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_c738f:
    X86_TICK(c, 7);
    // 0c738f  cmp ecx, 0x30
    X86_AT(c, 0xc738fu);
    (void)x86_sub(c, c.r[1], 0x30u, 0, 4);
    // 0c7392  jge 0xc73b6
    X86_AT(c, 0xc7392u);
    if (x86_cc(c, 13)) { goto L_c73b6; }
    X86_TICK(c, 12);
    // 0c7394  cmp byte ptr [ecx + 0xa5ce8], 0
    X86_AT(c, 0xc7394u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA5CE8u))), 0x0u, 0, 1);
    // 0c739b  je 0xc73b3
    X86_AT(c, 0xc739bu);
    if (x86_cc(c, 4)) { goto L_c73b3; }
    X86_TICK(c, 11);
    // 0c739d  cmp edi, dword ptr [ecx*4 + 0xa5d48]
    X86_AT(c, 0xc739du);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xA5D48u))), 0, 4);
    // 0c73a4  jne 0xc73b3
    X86_AT(c, 0xc73a4u);
    if (x86_cc(c, 5)) { goto L_c73b3; }
    X86_TICK(c, 11);
    // 0c73a6  cmp edx, dword ptr [ecx*4 + 0xa5e08]
    X86_AT(c, 0xc73a6u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xA5E08u))), 0, 4);
    // 0c73ad  jne 0xc73b3
    X86_AT(c, 0xc73adu);
    if (x86_cc(c, 5)) { goto L_c73b3; }
    X86_TICK(c, 9);
    // 0c73af  mov eax, ecx
    X86_AT(c, 0xc73afu);
    c.r[0] = c.r[1];
    // 0c73b1  jmp 0xc73bb
    X86_AT(c, 0xc73b1u);
    goto L_c73bb;
L_c73b3:
    X86_TICK(c, 9);
    // 0c73b3  inc ecx
    X86_AT(c, 0xc73b3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c73b4  jmp 0xc738f
    X86_AT(c, 0xc73b4u);
    X86_POLL(c, 0xc738fu); goto L_c738f;
L_c73b6:
    X86_TICK(c, 2);
    // 0c73b6  mov eax, 0xffffffff
    X86_AT(c, 0xc73b6u);
    c.r[0] = 0xFFFFFFFFu;
L_c73bb:
    X86_TICK(c, 20);
    // 0c73bb  pop edi
    X86_AT(c, 0xc73bbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c73bc  leave 
    X86_AT(c, 0xc73bcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c73bd  ret 
    X86_AT(c, 0xc73bdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc735cu, "ran off the end of a function");
}
void f_000c73c0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0c73c0  push ebp
    X86_AT(c, 0xc73c0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c73c1  mov ebp, esp
    X86_AT(c, 0xc73c1u);
    c.r[5] = c.r[4];
    // 0c73c3  sub esp, 0x20
    X86_AT(c, 0xc73c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0c73c6  push ebx
    X86_AT(c, 0xc73c6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c73c7  push esi
    X86_AT(c, 0xc73c7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c73c8  push edi
    X86_AT(c, 0xc73c8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c73c9  mov byte ptr [ebp - 0x1d], 0
    X86_AT(c, 0xc73c9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE3u)), 0x0u);
    // 0c73cd  push 7
    X86_AT(c, 0xc73cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c73cf  call 0xbb6b0
    X86_AT(c, 0xc73cfu);
    push32(c, 0xc73d4u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc73d4u);
    X86_TICK(c, 11);
    // 0c73d4  push 0x598c
    X86_AT(c, 0xc73d4u);
    { uint32_t v = 0x598Cu; push32(c, v); }
    // 0c73d9  push 7
    X86_AT(c, 0xc73d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c73db  call 0xba428
    X86_AT(c, 0xc73dbu);
    push32(c, 0xc73e0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc73e0u);
    X86_TICK(c, 14);
    // 0c73e0  add esp, 0xc
    X86_AT(c, 0xc73e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c73e3  cmp byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xc73e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x82u, 0, 1);
    // 0c73ea  je 0xc7428
    X86_AT(c, 0xc73eau);
    if (x86_cc(c, 4)) { goto L_c7428; }
    X86_TICK(c, 9);
    // 0c73ec  push 1
    X86_AT(c, 0xc73ecu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c73ee  call 0xb607c
    X86_AT(c, 0xc73eeu);
    push32(c, 0xc73f3u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc73f3u);
    X86_TICK(c, 9);
    // 0c73f3  push 7
    X86_AT(c, 0xc73f3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c73f5  call 0xbbb5c
    X86_AT(c, 0xc73f5u);
    push32(c, 0xc73fau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc73fau);
    X86_TICK(c, 11);
    // 0c73fa  push 0x59a4
    X86_AT(c, 0xc73fau);
    { uint32_t v = 0x59A4u; push32(c, v); }
    // 0c73ff  push 7
    X86_AT(c, 0xc73ffu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7401  call 0xba428
    X86_AT(c, 0xc7401u);
    push32(c, 0xc7406u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7406u);
    X86_TICK(c, 9);
    // 0c7406  push 7
    X86_AT(c, 0xc7406u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7408  call 0xbbb5c
    X86_AT(c, 0xc7408u);
    push32(c, 0xc740du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc740du);
    X86_TICK(c, 11);
    // 0c740d  push 0x59b8
    X86_AT(c, 0xc740du);
    { uint32_t v = 0x59B8u; push32(c, v); }
    // 0c7412  push 7
    X86_AT(c, 0xc7412u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7414  call 0xba428
    X86_AT(c, 0xc7414u);
    push32(c, 0xc7419u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7419u);
    X86_TICK(c, 9);
    // 0c7419  push 7
    X86_AT(c, 0xc7419u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c741b  call 0xbbb5c
    X86_AT(c, 0xc741bu);
    push32(c, 0xc7420u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7420u);
    X86_TICK(c, 9);
    // 0c7420  add esp, 0x20
    X86_AT(c, 0xc7420u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c7423  jmp 0xc7667
    X86_AT(c, 0xc7423u);
    goto L_c7667;
L_c7428:
    X86_TICK(c, 9);
    // 0c7428  push 7
    X86_AT(c, 0xc7428u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c742a  call 0xb7068
    X86_AT(c, 0xc742au);
    push32(c, 0xc742fu); x86_call_known(c, 0xb7068u, f_000b7068); X86_RET(c, 0xc742fu);
    X86_TICK(c, 11);
    // 0c742f  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc742fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c7432  add esp, 4
    X86_AT(c, 0xc7432u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7435  inc eax
    X86_AT(c, 0xc7435u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c7436  jne 0xc7453
    X86_AT(c, 0xc7436u);
    if (x86_cc(c, 5)) { goto L_c7453; }
    X86_TICK(c, 11);
    // 0c7438  push 0x59e4
    X86_AT(c, 0xc7438u);
    { uint32_t v = 0x59E4u; push32(c, v); }
    // 0c743d  push 7
    X86_AT(c, 0xc743du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c743f  call 0xba428
    X86_AT(c, 0xc743fu);
    push32(c, 0xc7444u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7444u);
    X86_TICK(c, 9);
    // 0c7444  push 7
    X86_AT(c, 0xc7444u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7446  call 0xbbb5c
    X86_AT(c, 0xc7446u);
    push32(c, 0xc744bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc744bu);
    X86_TICK(c, 9);
    // 0c744b  add esp, 0xc
    X86_AT(c, 0xc744bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c744e  jmp 0xc7667
    X86_AT(c, 0xc744eu);
    goto L_c7667;
L_c7453:
    X86_TICK(c, 9);
    // 0c7453  push 4
    X86_AT(c, 0xc7453u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c7455  call 0xb607c
    X86_AT(c, 0xc7455u);
    push32(c, 0xc745au); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc745au);
    X86_TICK(c, 37);
    // 0c745a  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xc745au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0c745f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc745fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c7462  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xc7462u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0c7467  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc7467u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0c746a  mov eax, 5
    X86_AT(c, 0xc746au);
    c.r[0] = 0x5u;
    // 0c746f  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xc746fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0c7472  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xc7472u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0c7475  mov edx, 0xffffffff
    X86_AT(c, 0xc7475u);
    c.r[2] = 0xFFFFFFFFu;
    // 0c747a  mov dword ptr [ebp - 0x1c], edx
    X86_AT(c, 0xc747au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[2]);
    // 0c747d  push edx
    X86_AT(c, 0xc747du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c747e  push 0x85
    X86_AT(c, 0xc747eu);
    { uint32_t v = 0x85u; push32(c, v); }
    // 0c7483  push eax
    X86_AT(c, 0xc7483u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7484  push eax
    X86_AT(c, 0xc7484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7485  call 0xb774c
    X86_AT(c, 0xc7485u);
    push32(c, 0xc748au); x86_call_known(c, 0xb774cu, f_000b774c); X86_RET(c, 0xc748au);
    X86_TICK(c, 7);
    // 0c748a  xchg ebx, eax
    X86_AT(c, 0xc748au);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c748b  mov dword ptr [ebp - 0x18], 0
    X86_AT(c, 0xc748bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x0u);
    // 0c7492  add esp, 0x14
    X86_AT(c, 0xc7492u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c7495:
    X86_TICK(c, 12);
    // 0c7495  cmp dword ptr [ebp - 0x18], 3
    X86_AT(c, 0xc7495u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0x3u, 0, 4);
    // 0c7499  jge 0xc7618
    X86_AT(c, 0xc7499u);
    if (x86_cc(c, 13)) { goto L_c7618; }
    X86_TICK(c, 22);
    // 0c749f  push 1
    X86_AT(c, 0xc749fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c74a1  push dword ptr [ebp - 4]
    X86_AT(c, 0xc74a1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c74a4  lea eax, [ebp - 0x14]
    X86_AT(c, 0xc74a4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0c74a7  push eax
    X86_AT(c, 0xc74a7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c74a8  lea ecx, [ebp - 0x10]
    X86_AT(c, 0xc74a8u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0c74ab  push ecx
    X86_AT(c, 0xc74abu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c74ac  call 0xc72b0
    X86_AT(c, 0xc74acu);
    push32(c, 0xc74b1u); x86_call_known(c, 0xc72b0u, f_000c72b0); X86_RET(c, 0xc74b1u);
    X86_TICK(c, 19);
    // 0c74b1  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xc74b1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0c74b4  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xc74b4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0c74b7  push ebx
    X86_AT(c, 0xc74b7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c74b8  call 0xb792c
    X86_AT(c, 0xc74b8u);
    push32(c, 0xc74bdu); x86_call_known(c, 0xb792cu, f_000b792c); X86_RET(c, 0xc74bdu);
    X86_TICK(c, 22);
    // 0c74bd  push 1
    X86_AT(c, 0xc74bdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c74bf  push dword ptr [ebp - 4]
    X86_AT(c, 0xc74bfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c74c2  lea eax, [ebp - 0xc]
    X86_AT(c, 0xc74c2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0c74c5  push eax
    X86_AT(c, 0xc74c5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c74c6  lea ecx, [ebp - 8]
    X86_AT(c, 0xc74c6u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c74c9  push ecx
    X86_AT(c, 0xc74c9u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c74ca  call 0xc7248
    X86_AT(c, 0xc74cau);
    push32(c, 0xc74cfu); x86_call_known(c, 0xc7248u, f_000c7248); X86_RET(c, 0xc74cfu);
    X86_TICK(c, 19);
    // 0c74cf  push 2
    X86_AT(c, 0xc74cfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c74d1  push dword ptr [0xa4a7a]
    X86_AT(c, 0xc74d1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0c74d7  push dword ptr [0xa4a76]
    X86_AT(c, 0xc74d7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0c74dd  call 0xbd068
    X86_AT(c, 0xc74ddu);
    push32(c, 0xc74e2u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xc74e2u);
    X86_TICK(c, 17);
    // 0c74e2  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc74e2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c74e5  push dword ptr [ebp - 8]
    X86_AT(c, 0xc74e5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c74e8  call 0xc735c
    X86_AT(c, 0xc74e8u);
    push32(c, 0xc74edu); x86_call_known(c, 0xc735cu, f_000c735c); X86_RET(c, 0xc74edu);
    X86_TICK(c, 12);
    // 0c74ed  add esp, 0x40
    X86_AT(c, 0xc74edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c74f0  xchg esi, eax
    X86_AT(c, 0xc74f0u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c74f1  cmp esi, 0xffffffff
    X86_AT(c, 0xc74f1u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c74f4  je 0xc7610
    X86_AT(c, 0xc74f4u);
    if (x86_cc(c, 4)) { goto L_c7610; }
    X86_TICK(c, 11);
    // 0c74fa  mov al, byte ptr [esi + 0xa5ce8]
    X86_AT(c, 0xc74fau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u))));
    // 0c7500  cmp al, 0x99
    X86_AT(c, 0xc7500u);
    (void)x86_sub(c, g8(c, 0), 0x99u, 0, 1);
    // 0c7502  je 0xc7610
    X86_AT(c, 0xc7502u);
    if (x86_cc(c, 4)) { goto L_c7610; }
    X86_TICK(c, 7);
    // 0c7508  cmp al, 0x9a
    X86_AT(c, 0xc7508u);
    (void)x86_sub(c, g8(c, 0), 0x9Au, 0, 1);
    // 0c750a  je 0xc7610
    X86_AT(c, 0xc750au);
    if (x86_cc(c, 4)) { goto L_c7610; }
    X86_TICK(c, 7);
    // 0c7510  cmp esi, 0xff
    X86_AT(c, 0xc7510u);
    (void)x86_sub(c, c.r[6], 0xFFu, 0, 4);
    // 0c7516  jne 0xc7526
    X86_AT(c, 0xc7516u);
    if (x86_cc(c, 5)) { goto L_c7526; }
    X86_TICK(c, 9);
    // 0c7518  push ebx
    X86_AT(c, 0xc7518u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7519  call 0xb78a4
    X86_AT(c, 0xc7519u);
    push32(c, 0xc751eu); x86_call_known(c, 0xb78a4u, f_000b78a4); X86_RET(c, 0xc751eu);
    X86_TICK(c, 9);
    // 0c751e  add esp, 4
    X86_AT(c, 0xc751eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7521  jmp 0xc7667
    X86_AT(c, 0xc7521u);
    goto L_c7667;
L_c7526:
    X86_TICK(c, 12);
    // 0c7526  cmp byte ptr [esi + 0xa5ce8], 0x86
    X86_AT(c, 0xc7526u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u))), 0x86u, 0, 1);
    // 0c752d  jne 0xc753e
    X86_AT(c, 0xc752du);
    if (x86_cc(c, 5)) { goto L_c753e; }
    X86_TICK(c, 9);
    // 0c752f  push 0x64
    X86_AT(c, 0xc752fu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0c7531  call 0xb61b4
    X86_AT(c, 0xc7531u);
    push32(c, 0xc7536u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc7536u);
    X86_TICK(c, 11);
    // 0c7536  add esp, 4
    X86_AT(c, 0xc7536u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7539  cmp eax, 0x32
    X86_AT(c, 0xc7539u);
    (void)x86_sub(c, c.r[0], 0x32u, 0, 4);
    // 0c753c  jmp 0xc754b
    X86_AT(c, 0xc753cu);
    goto L_c754b;
L_c753e:
    X86_TICK(c, 9);
    // 0c753e  push 0x64
    X86_AT(c, 0xc753eu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0c7540  call 0xb61b4
    X86_AT(c, 0xc7540u);
    push32(c, 0xc7545u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc7545u);
    X86_TICK(c, 4);
    // 0c7545  add esp, 4
    X86_AT(c, 0xc7545u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7548  cmp eax, 0x4b
    X86_AT(c, 0xc7548u);
    (void)x86_sub(c, c.r[0], 0x4Bu, 0, 4);
L_c754b:
    X86_TICK(c, 5);
    // 0c754b  jl 0xc7618
    X86_AT(c, 0xc754bu);
    if (x86_cc(c, 12)) { goto L_c7618; }
    X86_TICK(c, 11);
    // 0c7551  mov dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc7551u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), 0x0u);
    // 0c7558  push 8
    X86_AT(c, 0xc7558u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c755a  call 0xb607c
    X86_AT(c, 0xc755au);
    push32(c, 0xc755fu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc755fu);
    X86_TICK(c, 4);
    // 0c755f  sub edi, edi
    X86_AT(c, 0xc755fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c7561  add esp, 4
    X86_AT(c, 0xc7561u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c7564:
    X86_TICK(c, 7);
    // 0c7564  cmp edi, 6
    X86_AT(c, 0xc7564u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0c7567  jge 0xc7595
    X86_AT(c, 0xc7567u);
    if (x86_cc(c, 13)) { goto L_c7595; }
    X86_TICK(c, 23);
    // 0c7569  lea eax, [edi + 0x85]
    X86_AT(c, 0xc7569u);
    c.r[0] = (uint32_t)(c.r[7] + 0x85u);
    // 0c756f  push eax
    X86_AT(c, 0xc756fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7570  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xc7570u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0c7573  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xc7573u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0c7576  push ebx
    X86_AT(c, 0xc7576u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7577  call 0xb7984
    X86_AT(c, 0xc7577u);
    push32(c, 0xc757cu); x86_call_known(c, 0xb7984u, f_000b7984); X86_RET(c, 0xc757cu);
    X86_TICK(c, 19);
    // 0c757c  push 2
    X86_AT(c, 0xc757cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c757e  push dword ptr [0xa4a7a]
    X86_AT(c, 0xc757eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0c7584  push dword ptr [0xa4a76]
    X86_AT(c, 0xc7584u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0c758a  call 0xbd068
    X86_AT(c, 0xc758au);
    push32(c, 0xc758fu); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xc758fu);
    X86_TICK(c, 11);
    // 0c758f  inc edi
    X86_AT(c, 0xc758fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c7590  add esp, 0x1c
    X86_AT(c, 0xc7590u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c7593  jmp 0xc7564
    X86_AT(c, 0xc7593u);
    X86_POLL(c, 0xc7564u); goto L_c7564;
L_c7595:
    X86_TICK(c, 9);
    // 0c7595  push ebx
    X86_AT(c, 0xc7595u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7596  call 0xb78a4
    X86_AT(c, 0xc7596u);
    push32(c, 0xc759bu); x86_call_known(c, 0xb78a4u, f_000b78a4); X86_RET(c, 0xc759bu);
    X86_TICK(c, 21);
    // 0c759b  lea eax, [ebp - 0x1d]
    X86_AT(c, 0xc759bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE3u);
    // 0c759e  push eax
    X86_AT(c, 0xc759eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c759f  mov al, byte ptr [esi + 0xa5ce8]
    X86_AT(c, 0xc759fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u))));
    // 0c75a5  push eax
    X86_AT(c, 0xc75a5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c75a6  push 0x3c
    X86_AT(c, 0xc75a6u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0c75a8  push 0xad05c
    X86_AT(c, 0xc75a8u);
    { uint32_t v = 0xAD05Cu; push32(c, v); }
    // 0c75ad  call 0xba1b4
    X86_AT(c, 0xc75adu);
    push32(c, 0xc75b2u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc75b2u);
    X86_TICK(c, 11);
    // 0c75b2  push eax
    X86_AT(c, 0xc75b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c75b3  push 7
    X86_AT(c, 0xc75b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c75b5  call 0xbbba4
    X86_AT(c, 0xc75b5u);
    push32(c, 0xc75bau); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc75bau);
    X86_TICK(c, 11);
    // 0c75ba  push 0x59fc
    X86_AT(c, 0xc75bau);
    { uint32_t v = 0x59FCu; push32(c, v); }
    // 0c75bf  push 7
    X86_AT(c, 0xc75bfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c75c1  call 0xba428
    X86_AT(c, 0xc75c1u);
    push32(c, 0xc75c6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc75c6u);
    X86_TICK(c, 9);
    // 0c75c6  push 7
    X86_AT(c, 0xc75c6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c75c8  call 0xbbb5c
    X86_AT(c, 0xc75c8u);
    push32(c, 0xc75cdu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc75cdu);
    X86_TICK(c, 25);
    // 0c75cd  mov byte ptr [esi + 0xa5ce8], 0
    X86_AT(c, 0xc75cdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u)), 0x0u);
    // 0c75d4  mov eax, 0xffffffff
    X86_AT(c, 0xc75d4u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c75d9  mov dword ptr [esi*4 + 0xa5d48], eax
    X86_AT(c, 0xc75d9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA5D48u)), c.r[0]);
    // 0c75e0  mov dword ptr [esi*4 + 0xa5e08], eax
    X86_AT(c, 0xc75e0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA5E08u)), c.r[0]);
    // 0c75e7  push dword ptr [0xa4a7a]
    X86_AT(c, 0xc75e7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0c75ed  push dword ptr [0xa4a76]
    X86_AT(c, 0xc75edu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0c75f3  call 0xb7aa0
    X86_AT(c, 0xc75f3u);
    push32(c, 0xc75f8u); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xc75f8u);
    X86_TICK(c, 19);
    // 0c75f8  push 2
    X86_AT(c, 0xc75f8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c75fa  push dword ptr [0xa4a7a]
    X86_AT(c, 0xc75fau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0c7600  push dword ptr [0xa4a76]
    X86_AT(c, 0xc7600u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0c7606  call 0xbd068
    X86_AT(c, 0xc7606u);
    push32(c, 0xc760bu); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xc760bu);
    X86_TICK(c, 9);
    // 0c760b  add esp, 0x3c
    X86_AT(c, 0xc760bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c760e  jmp 0xc7667
    X86_AT(c, 0xc760eu);
    goto L_c7667;
L_c7610:
    X86_TICK(c, 13);
    // 0c7610  inc dword ptr [ebp - 0x18]
    X86_AT(c, 0xc7610u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c7613  jmp 0xc7495
    X86_AT(c, 0xc7613u);
    X86_POLL(c, 0xc7495u); goto L_c7495;
L_c7618:
    X86_TICK(c, 2);
    // 0c7618  sub edi, edi
    X86_AT(c, 0xc7618u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c761a:
    X86_TICK(c, 7);
    // 0c761a  cmp edi, 3
    X86_AT(c, 0xc761au);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0c761d  jge 0xc764b
    X86_AT(c, 0xc761du);
    if (x86_cc(c, 13)) { goto L_c764b; }
    X86_TICK(c, 23);
    // 0c761f  lea eax, [edi + 0x85]
    X86_AT(c, 0xc761fu);
    c.r[0] = (uint32_t)(c.r[7] + 0x85u);
    // 0c7625  push eax
    X86_AT(c, 0xc7625u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7626  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xc7626u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0c7629  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xc7629u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0c762c  push ebx
    X86_AT(c, 0xc762cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c762d  call 0xb7984
    X86_AT(c, 0xc762du);
    push32(c, 0xc7632u); x86_call_known(c, 0xb7984u, f_000b7984); X86_RET(c, 0xc7632u);
    X86_TICK(c, 19);
    // 0c7632  push 2
    X86_AT(c, 0xc7632u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c7634  push dword ptr [0xa4a7a]
    X86_AT(c, 0xc7634u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0c763a  push dword ptr [0xa4a76]
    X86_AT(c, 0xc763au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0c7640  call 0xbd068
    X86_AT(c, 0xc7640u);
    push32(c, 0xc7645u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xc7645u);
    X86_TICK(c, 11);
    // 0c7645  inc edi
    X86_AT(c, 0xc7645u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c7646  add esp, 0x1c
    X86_AT(c, 0xc7646u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c7649  jmp 0xc761a
    X86_AT(c, 0xc7649u);
    X86_POLL(c, 0xc761au); goto L_c761a;
L_c764b:
    X86_TICK(c, 9);
    // 0c764b  push ebx
    X86_AT(c, 0xc764bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c764c  call 0xb78a4
    X86_AT(c, 0xc764cu);
    push32(c, 0xc7651u); x86_call_known(c, 0xb78a4u, f_000b78a4); X86_RET(c, 0xc7651u);
    X86_TICK(c, 11);
    // 0c7651  push 0x5a24
    X86_AT(c, 0xc7651u);
    { uint32_t v = 0x5A24u; push32(c, v); }
    // 0c7656  push 7
    X86_AT(c, 0xc7656u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7658  call 0xba428
    X86_AT(c, 0xc7658u);
    push32(c, 0xc765du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc765du);
    X86_TICK(c, 9);
    // 0c765d  push 7
    X86_AT(c, 0xc765du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c765f  call 0xbbb5c
    X86_AT(c, 0xc765fu);
    push32(c, 0xc7664u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7664u);
    X86_TICK(c, 2);
    // 0c7664  add esp, 0x10
    X86_AT(c, 0xc7664u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c7667:
    X86_TICK(c, 28);
    // 0c7667  pop edi
    X86_AT(c, 0xc7667u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7668  pop esi
    X86_AT(c, 0xc7668u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c7669  pop ebx
    X86_AT(c, 0xc7669u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c766a  leave 
    X86_AT(c, 0xc766au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c766b  ret 
    X86_AT(c, 0xc766bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc73c0u, "ran off the end of a function");
}
void f_000c7667(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0c7667  pop edi
    X86_AT(c, 0xc7667u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7668  pop esi
    X86_AT(c, 0xc7668u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c7669  pop ebx
    X86_AT(c, 0xc7669u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c766a  leave 
    X86_AT(c, 0xc766au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c766b  ret 
    X86_AT(c, 0xc766bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7667u, "ran off the end of a function");
}
void f_000c766c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0c766c  push ebx
    X86_AT(c, 0xc766cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c766d  push esi
    X86_AT(c, 0xc766du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c766e  push edi
    X86_AT(c, 0xc766eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c766f  sub ebx, ebx
    X86_AT(c, 0xc766fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c7671  push 7
    X86_AT(c, 0xc7671u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7673  call 0xbb6b0
    X86_AT(c, 0xc7673u);
    push32(c, 0xc7678u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc7678u);
    X86_TICK(c, 11);
    // 0c7678  push 0x5a3c
    X86_AT(c, 0xc7678u);
    { uint32_t v = 0x5A3Cu; push32(c, v); }
    // 0c767d  push 7
    X86_AT(c, 0xc767du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c767f  call 0xba428
    X86_AT(c, 0xc767fu);
    push32(c, 0xc7684u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7684u);
    X86_TICK(c, 9);
    // 0c7684  push 7
    X86_AT(c, 0xc7684u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7686  call 0xbbb5c
    X86_AT(c, 0xc7686u);
    push32(c, 0xc768bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc768bu);
    X86_TICK(c, 11);
    // 0c768b  push 0x5a60
    X86_AT(c, 0xc768bu);
    { uint32_t v = 0x5A60u; push32(c, v); }
    // 0c7690  push 7
    X86_AT(c, 0xc7690u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7692  call 0xba428
    X86_AT(c, 0xc7692u);
    push32(c, 0xc7697u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7697u);
    X86_TICK(c, 11);
    // 0c7697  push ebx
    X86_AT(c, 0xc7697u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7698  push 7
    X86_AT(c, 0xc7698u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c769a  call 0xb6f28
    X86_AT(c, 0xc769au);
    push32(c, 0xc769fu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xc769fu);
    X86_TICK(c, 12);
    // 0c769f  xchg edi, eax
    X86_AT(c, 0xc769fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c76a0  add esp, 0x20
    X86_AT(c, 0xc76a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c76a3  cmp edi, 0xffffffff
    X86_AT(c, 0xc76a3u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c76a6  jne 0xc76c3
    X86_AT(c, 0xc76a6u);
    if (x86_cc(c, 5)) { goto L_c76c3; }
    X86_TICK(c, 11);
    // 0c76a8  push 0x5a70
    X86_AT(c, 0xc76a8u);
    { uint32_t v = 0x5A70u; push32(c, v); }
    // 0c76ad  push 7
    X86_AT(c, 0xc76adu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c76af  call 0xba428
    X86_AT(c, 0xc76afu);
    push32(c, 0xc76b4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc76b4u);
    X86_TICK(c, 9);
    // 0c76b4  push 7
    X86_AT(c, 0xc76b4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c76b6  call 0xbbb5c
    X86_AT(c, 0xc76b6u);
    push32(c, 0xc76bbu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc76bbu);
    X86_TICK(c, 9);
    // 0c76bb  add esp, 0xc
    X86_AT(c, 0xc76bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c76be  jmp 0xc7792
    X86_AT(c, 0xc76beu);
    goto L_c7792;
L_c76c3:
    X86_TICK(c, 12);
    // 0c76c3  lea eax, [edi + edi*2]
    X86_AT(c, 0xc76c3u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c76c6  lea edx, [eax*8]
    X86_AT(c, 0xc76c6u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c76cd  lea edx, [eax + edx*8]
    X86_AT(c, 0xc76cdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c76d0  mov ebx, dword ptr [edx + 0xa4ae9]
    X86_AT(c, 0xc76d0u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)));
    // 0c76d6  sub esi, esi
    X86_AT(c, 0xc76d6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c76d8:
    X86_TICK(c, 7);
    // 0c76d8  cmp esi, 4
    X86_AT(c, 0xc76d8u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0c76db  jge 0xc773c
    X86_AT(c, 0xc76dbu);
    if (x86_cc(c, 13)) { goto L_c773c; }
    X86_TICK(c, 7);
    // 0c76dd  cmp edi, esi
    X86_AT(c, 0xc76ddu);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0c76df  je 0xc7739
    X86_AT(c, 0xc76dfu);
    if (x86_cc(c, 4)) { goto L_c7739; }
    X86_TICK(c, 21);
    // 0c76e1  lea eax, [esi + esi*2]
    X86_AT(c, 0xc76e1u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0c76e4  lea edx, [eax*8]
    X86_AT(c, 0xc76e4u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c76eb  lea edx, [eax + edx*8]
    X86_AT(c, 0xc76ebu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c76ee  mov eax, ebx
    X86_AT(c, 0xc76eeu);
    c.r[0] = c.r[3];
    // 0c76f0  add eax, dword ptr [edx + 0xa4ae9]
    X86_AT(c, 0xc76f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u))), 0, 4); }
    // 0c76f6  cmp eax, 0x270f
    X86_AT(c, 0xc76f6u);
    (void)x86_sub(c, c.r[0], 0x270Fu, 0, 4);
    // 0c76fb  jle 0xc771c
    X86_AT(c, 0xc76fbu);
    if (x86_cc(c, 14)) { goto L_c771c; }
    X86_TICK(c, 9);
    // 0c76fd  push 0
    X86_AT(c, 0xc76fdu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c76ff  call 0xb607c
    X86_AT(c, 0xc76ffu);
    push32(c, 0xc7704u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc7704u);
    X86_TICK(c, 11);
    // 0c7704  push 0x5a88
    X86_AT(c, 0xc7704u);
    { uint32_t v = 0x5A88u; push32(c, v); }
    // 0c7709  push 7
    X86_AT(c, 0xc7709u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c770b  call 0xba428
    X86_AT(c, 0xc770bu);
    push32(c, 0xc7710u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7710u);
    X86_TICK(c, 9);
    // 0c7710  push 7
    X86_AT(c, 0xc7710u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7712  call 0xbbb5c
    X86_AT(c, 0xc7712u);
    push32(c, 0xc7717u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7717u);
    X86_TICK(c, 9);
    // 0c7717  add esp, 0x10
    X86_AT(c, 0xc7717u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c771a  jmp 0xc773c
    X86_AT(c, 0xc771au);
    goto L_c773c;
L_c771c:
    X86_TICK(c, 14);
    // 0c771c  lea eax, [esi + esi*2]
    X86_AT(c, 0xc771cu);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0c771f  lea edx, [eax*8]
    X86_AT(c, 0xc771fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c7726  lea edx, [eax + edx*8]
    X86_AT(c, 0xc7726u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c7729  add ebx, dword ptr [edx + 0xa4ae9]
    X86_AT(c, 0xc7729u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u))), 0, 4); }
    // 0c772f  mov dword ptr [edx + 0xa4ae9], 0
    X86_AT(c, 0xc772fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)), 0x0u);
L_c7739:
    X86_TICK(c, 9);
    // 0c7739  inc esi
    X86_AT(c, 0xc7739u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c773a  jmp 0xc76d8
    X86_AT(c, 0xc773au);
    X86_POLL(c, 0xc76d8u); goto L_c76d8;
L_c773c:
    X86_TICK(c, 17);
    // 0c773c  lea eax, [edi + edi*2]
    X86_AT(c, 0xc773cu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c773f  lea edx, [eax*8]
    X86_AT(c, 0xc773fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c7746  lea edx, [eax + edx*8]
    X86_AT(c, 0xc7746u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c7749  mov dword ptr [edx + 0xa4ae9], ebx
    X86_AT(c, 0xc7749u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)), c.r[3]);
    // 0c774f  push 0
    X86_AT(c, 0xc774fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7751  call 0xbe720
    X86_AT(c, 0xc7751u);
    push32(c, 0xc7756u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc7756u);
    X86_TICK(c, 9);
    // 0c7756  push 1
    X86_AT(c, 0xc7756u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c7758  call 0xbe720
    X86_AT(c, 0xc7758u);
    push32(c, 0xc775du); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc775du);
    X86_TICK(c, 9);
    // 0c775d  push 2
    X86_AT(c, 0xc775du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c775f  call 0xbe720
    X86_AT(c, 0xc775fu);
    push32(c, 0xc7764u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc7764u);
    X86_TICK(c, 9);
    // 0c7764  push 3
    X86_AT(c, 0xc7764u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7766  call 0xbe720
    X86_AT(c, 0xc7766u);
    push32(c, 0xc776bu); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc776bu);
    X86_TICK(c, 9);
    // 0c776b  push 7
    X86_AT(c, 0xc776bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c776d  call 0xbb6b0
    X86_AT(c, 0xc776du);
    push32(c, 0xc7772u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc7772u);
    X86_TICK(c, 13);
    // 0c7772  push 4
    X86_AT(c, 0xc7772u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c7774  push ebx
    X86_AT(c, 0xc7774u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7775  push 7
    X86_AT(c, 0xc7775u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7777  call 0xba404
    X86_AT(c, 0xc7777u);
    push32(c, 0xc777cu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc777cu);
    X86_TICK(c, 11);
    // 0c777c  push 0x5aac
    X86_AT(c, 0xc777cu);
    { uint32_t v = 0x5AACu; push32(c, v); }
    // 0c7781  push 7
    X86_AT(c, 0xc7781u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7783  call 0xba428
    X86_AT(c, 0xc7783u);
    push32(c, 0xc7788u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7788u);
    X86_TICK(c, 9);
    // 0c7788  push 7
    X86_AT(c, 0xc7788u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c778a  call 0xbbb5c
    X86_AT(c, 0xc778au);
    push32(c, 0xc778fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc778fu);
    X86_TICK(c, 2);
    // 0c778f  add esp, 0x2c
    X86_AT(c, 0xc778fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_c7792:
    X86_TICK(c, 22);
    // 0c7792  pop edi
    X86_AT(c, 0xc7792u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7793  pop esi
    X86_AT(c, 0xc7793u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c7794  pop ebx
    X86_AT(c, 0xc7794u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c7795  ret 
    X86_AT(c, 0xc7795u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc766cu, "ran off the end of a function");
}
void f_000c7798(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0c7798  push edi
    X86_AT(c, 0xc7798u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7799  push 7
    X86_AT(c, 0xc7799u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c779b  call 0xbb6b0
    X86_AT(c, 0xc779bu);
    push32(c, 0xc77a0u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc77a0u);
    X86_TICK(c, 11);
    // 0c77a0  push 0x5ad4
    X86_AT(c, 0xc77a0u);
    { uint32_t v = 0x5AD4u; push32(c, v); }
    // 0c77a5  push 7
    X86_AT(c, 0xc77a5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c77a7  call 0xba428
    X86_AT(c, 0xc77a7u);
    push32(c, 0xc77acu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc77acu);
    X86_TICK(c, 9);
    // 0c77ac  push 7
    X86_AT(c, 0xc77acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c77ae  call 0xbbb5c
    X86_AT(c, 0xc77aeu);
    push32(c, 0xc77b3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc77b3u);
    X86_TICK(c, 14);
    // 0c77b3  add esp, 0x10
    X86_AT(c, 0xc77b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c77b6  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xc77b6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0c77bd  je 0xc77c6
    X86_AT(c, 0xc77bdu);
    if (x86_cc(c, 4)) { goto L_c77c6; }
    X86_TICK(c, 9);
    // 0c77bf  push 0x5b04
    X86_AT(c, 0xc77bfu);
    { uint32_t v = 0x5B04u; push32(c, v); }
    // 0c77c4  jmp 0xc77f0
    X86_AT(c, 0xc77c4u);
    goto L_c77f0;
L_c77c6:
    X86_TICK(c, 11);
    // 0c77c6  push 0x5b2c
    X86_AT(c, 0xc77c6u);
    { uint32_t v = 0x5B2Cu; push32(c, v); }
    // 0c77cb  push 7
    X86_AT(c, 0xc77cbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c77cd  call 0xba428
    X86_AT(c, 0xc77cdu);
    push32(c, 0xc77d2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc77d2u);
    X86_TICK(c, 9);
    // 0c77d2  push 7
    X86_AT(c, 0xc77d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c77d4  call 0xbbb5c
    X86_AT(c, 0xc77d4u);
    push32(c, 0xc77d9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc77d9u);
    X86_TICK(c, 11);
    // 0c77d9  push 0
    X86_AT(c, 0xc77d9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c77db  push 7
    X86_AT(c, 0xc77dbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c77dd  call 0xb6f28
    X86_AT(c, 0xc77ddu);
    push32(c, 0xc77e2u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xc77e2u);
    X86_TICK(c, 12);
    // 0c77e2  xchg edi, eax
    X86_AT(c, 0xc77e2u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c77e3  add esp, 0x14
    X86_AT(c, 0xc77e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c77e6  cmp edi, 0xffffffff
    X86_AT(c, 0xc77e6u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c77e9  jne 0xc7803
    X86_AT(c, 0xc77e9u);
    if (x86_cc(c, 5)) { goto L_c7803; }
    X86_TICK(c, 2);
    // 0c77eb  push 0x5b58
    X86_AT(c, 0xc77ebu);
    { uint32_t v = 0x5B58u; push32(c, v); }
L_c77f0:
    X86_TICK(c, 9);
    // 0c77f0  push 7
    X86_AT(c, 0xc77f0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c77f2  call 0xba428
    X86_AT(c, 0xc77f2u);
    push32(c, 0xc77f7u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc77f7u);
    X86_TICK(c, 9);
    // 0c77f7  push 7
    X86_AT(c, 0xc77f7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c77f9  call 0xbbb5c
    X86_AT(c, 0xc77f9u);
    push32(c, 0xc77feu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc77feu);
    X86_TICK(c, 9);
    // 0c77fe  add esp, 0xc
    X86_AT(c, 0xc77feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c7801  jmp 0xc7855
    X86_AT(c, 0xc7801u);
    goto L_c7855;
L_c7803:
    X86_TICK(c, 18);
    // 0c7803  lea eax, [edi + edi*2]
    X86_AT(c, 0xc7803u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c7806  lea edx, [eax*8]
    X86_AT(c, 0xc7806u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c780d  lea edx, [eax + edx*8]
    X86_AT(c, 0xc780du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c7810  cmp dword ptr [edx + 0xa4ab5], 0
    X86_AT(c, 0xc7810u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB5u))), 0x0u, 0, 4);
    // 0c7817  jg 0xc7838
    X86_AT(c, 0xc7817u);
    if (x86_cc(c, 15)) { goto L_c7838; }
    X86_TICK(c, 9);
    // 0c7819  push 0
    X86_AT(c, 0xc7819u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c781b  call 0xb607c
    X86_AT(c, 0xc781bu);
    push32(c, 0xc7820u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc7820u);
    X86_TICK(c, 11);
    // 0c7820  push 0x5b70
    X86_AT(c, 0xc7820u);
    { uint32_t v = 0x5B70u; push32(c, v); }
    // 0c7825  push 7
    X86_AT(c, 0xc7825u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7827  call 0xba428
    X86_AT(c, 0xc7827u);
    push32(c, 0xc782cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc782cu);
    X86_TICK(c, 9);
    // 0c782c  push 7
    X86_AT(c, 0xc782cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c782e  call 0xbbb5c
    X86_AT(c, 0xc782eu);
    push32(c, 0xc7833u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7833u);
    X86_TICK(c, 9);
    // 0c7833  add esp, 0x10
    X86_AT(c, 0xc7833u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c7836  jmp 0xc7855
    X86_AT(c, 0xc7836u);
    goto L_c7855;
L_c7838:
    X86_TICK(c, 14);
    // 0c7838  lea eax, [edi + edi*2]
    X86_AT(c, 0xc7838u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c783b  lea edx, [eax*8]
    X86_AT(c, 0xc783bu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c7842  lea edx, [eax + edx*8]
    X86_AT(c, 0xc7842u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c7845  dec dword ptr [edx + 0xa4ab5]
    X86_AT(c, 0xc7845u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB5u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c784b  mov dword ptr [0xa4a9a], 0x30
    X86_AT(c, 0xc784bu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A9Au)), 0x30u);
L_c7855:
    X86_TICK(c, 14);
    // 0c7855  pop edi
    X86_AT(c, 0xc7855u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7856  ret 
    X86_AT(c, 0xc7856u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7798u, "ran off the end of a function");
}
void f_000c7858(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0c7858  push edi
    X86_AT(c, 0xc7858u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7859  push 7
    X86_AT(c, 0xc7859u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c785b  call 0xbb6b0
    X86_AT(c, 0xc785bu);
    push32(c, 0xc7860u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc7860u);
    X86_TICK(c, 11);
    // 0c7860  push 0x5bb0
    X86_AT(c, 0xc7860u);
    { uint32_t v = 0x5BB0u; push32(c, v); }
    // 0c7865  push 7
    X86_AT(c, 0xc7865u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7867  call 0xba428
    X86_AT(c, 0xc7867u);
    push32(c, 0xc786cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc786cu);
    X86_TICK(c, 9);
    // 0c786c  push 7
    X86_AT(c, 0xc786cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c786e  call 0xbbb5c
    X86_AT(c, 0xc786eu);
    push32(c, 0xc7873u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7873u);
    X86_TICK(c, 11);
    // 0c7873  push 0x5be0
    X86_AT(c, 0xc7873u);
    { uint32_t v = 0x5BE0u; push32(c, v); }
    // 0c7878  push 7
    X86_AT(c, 0xc7878u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c787a  call 0xba428
    X86_AT(c, 0xc787au);
    push32(c, 0xc787fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc787fu);
    X86_TICK(c, 9);
    // 0c787f  push 7
    X86_AT(c, 0xc787fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7881  call 0xbbb5c
    X86_AT(c, 0xc7881u);
    push32(c, 0xc7886u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7886u);
    X86_TICK(c, 11);
    // 0c7886  push 0
    X86_AT(c, 0xc7886u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7888  push 7
    X86_AT(c, 0xc7888u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c788a  call 0xb6f28
    X86_AT(c, 0xc788au);
    push32(c, 0xc788fu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xc788fu);
    X86_TICK(c, 12);
    // 0c788f  xchg edi, eax
    X86_AT(c, 0xc788fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c7890  add esp, 0x24
    X86_AT(c, 0xc7890u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0c7893  cmp edi, 0xffffffff
    X86_AT(c, 0xc7893u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c7896  jne 0xc78b0
    X86_AT(c, 0xc7896u);
    if (x86_cc(c, 5)) { goto L_c78b0; }
    X86_TICK(c, 11);
    // 0c7898  push 0x5c14
    X86_AT(c, 0xc7898u);
    { uint32_t v = 0x5C14u; push32(c, v); }
    // 0c789d  push 7
    X86_AT(c, 0xc789du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c789f  call 0xba428
    X86_AT(c, 0xc789fu);
    push32(c, 0xc78a4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc78a4u);
    X86_TICK(c, 9);
    // 0c78a4  push 7
    X86_AT(c, 0xc78a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c78a6  call 0xbbb5c
    X86_AT(c, 0xc78a6u);
    push32(c, 0xc78abu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc78abu);
    X86_TICK(c, 9);
    // 0c78ab  add esp, 0xc
    X86_AT(c, 0xc78abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c78ae  jmp 0xc7913
    X86_AT(c, 0xc78aeu);
    goto L_c7913;
L_c78b0:
    X86_TICK(c, 18);
    // 0c78b0  lea eax, [edi + edi*2]
    X86_AT(c, 0xc78b0u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c78b3  lea edx, [eax*8]
    X86_AT(c, 0xc78b3u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c78ba  lea edx, [eax + edx*8]
    X86_AT(c, 0xc78bau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c78bd  cmp dword ptr [edx + 0xa4af5], 0
    X86_AT(c, 0xc78bdu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF5u))), 0x0u, 0, 4);
    // 0c78c4  jg 0xc78e5
    X86_AT(c, 0xc78c4u);
    if (x86_cc(c, 15)) { goto L_c78e5; }
    X86_TICK(c, 9);
    // 0c78c6  push 0
    X86_AT(c, 0xc78c6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c78c8  call 0xb607c
    X86_AT(c, 0xc78c8u);
    push32(c, 0xc78cdu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc78cdu);
    X86_TICK(c, 11);
    // 0c78cd  push 0x5c2c
    X86_AT(c, 0xc78cdu);
    { uint32_t v = 0x5C2Cu; push32(c, v); }
    // 0c78d2  push 7
    X86_AT(c, 0xc78d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c78d4  call 0xba428
    X86_AT(c, 0xc78d4u);
    push32(c, 0xc78d9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc78d9u);
    X86_TICK(c, 9);
    // 0c78d9  push 7
    X86_AT(c, 0xc78d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c78db  call 0xbbb5c
    X86_AT(c, 0xc78dbu);
    push32(c, 0xc78e0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc78e0u);
    X86_TICK(c, 9);
    // 0c78e0  add esp, 0x10
    X86_AT(c, 0xc78e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c78e3  jmp 0xc7913
    X86_AT(c, 0xc78e3u);
    goto L_c7913;
L_c78e5:
    X86_TICK(c, 9);
    // 0c78e5  push 5
    X86_AT(c, 0xc78e5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c78e7  call 0xb607c
    X86_AT(c, 0xc78e7u);
    push32(c, 0xc78ecu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc78ecu);
    X86_TICK(c, 9);
    // 0c78ec  push 5
    X86_AT(c, 0xc78ecu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c78ee  call 0xbebbc
    X86_AT(c, 0xc78eeu);
    push32(c, 0xc78f3u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc78f3u);
    X86_TICK(c, 16);
    // 0c78f3  lea eax, [edi + edi*2]
    X86_AT(c, 0xc78f3u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c78f6  lea edx, [eax*8]
    X86_AT(c, 0xc78f6u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c78fd  lea edx, [eax + edx*8]
    X86_AT(c, 0xc78fdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c7900  dec dword ptr [edx + 0xa4af5]
    X86_AT(c, 0xc7900u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF5u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c7906  mov dword ptr [0xabf7c], 0xa
    X86_AT(c, 0xc7906u);
    wr32((c.sbase[3] + (uint32_t)(0xABF7Cu)), 0xAu);
    // 0c7910  add esp, 8
    X86_AT(c, 0xc7910u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c7913:
    X86_TICK(c, 14);
    // 0c7913  pop edi
    X86_AT(c, 0xc7913u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7914  ret 
    X86_AT(c, 0xc7914u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7858u, "ran off the end of a function");
}
void f_000c7918(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0c7918  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xc7918u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0c791c  lea eax, [ecx + ecx*2]
    X86_AT(c, 0xc791cu);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0c791f  lea edx, [eax*8]
    X86_AT(c, 0xc791fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c7926  lea edx, [eax + edx*8]
    X86_AT(c, 0xc7926u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c7929  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0xc7929u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0c792d  add dword ptr [edx + 0xa4ad5], eax
    X86_AT(c, 0xc792du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0c7933  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xc7933u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0c7939  cmp eax, dword ptr [edx + 0xa4ad5]
    X86_AT(c, 0xc7939u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u))), 0, 4);
    // 0c793f  jge 0xc7947
    X86_AT(c, 0xc793fu);
    if (x86_cc(c, 13)) { goto L_c7947; }
    X86_TICK(c, 2);
    // 0c7941  mov dword ptr [edx + 0xa4ad5], eax
    X86_AT(c, 0xc7941u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), c.r[0]);
L_c7947:
    X86_TICK(c, 10);
    // 0c7947  ret 
    X86_AT(c, 0xc7947u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7918u, "ran off the end of a function");
}
void f_000c7948(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0c7948  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xc7948u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0c794c  lea eax, [ecx + ecx*2]
    X86_AT(c, 0xc794cu);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0c794f  lea edx, [eax*8]
    X86_AT(c, 0xc794fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c7956  lea edx, [eax + edx*8]
    X86_AT(c, 0xc7956u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c7959  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0xc7959u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0c795d  add dword ptr [edx + 0xa4add], eax
    X86_AT(c, 0xc795du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ADDu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0c7963  cmp dword ptr [edx + 0xa4add], 0x9c4
    X86_AT(c, 0xc7963u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ADDu))), 0x9C4u, 0, 4);
    // 0c796d  jle 0xc7979
    X86_AT(c, 0xc796du);
    if (x86_cc(c, 14)) { goto L_c7979; }
    X86_TICK(c, 2);
    // 0c796f  mov dword ptr [edx + 0xa4add], 0x9c4
    X86_AT(c, 0xc796fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ADDu)), 0x9C4u);
L_c7979:
    X86_TICK(c, 10);
    // 0c7979  ret 
    X86_AT(c, 0xc7979u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7948u, "ran off the end of a function");
}
void f_000c797c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0c797c  push ebp
    X86_AT(c, 0xc797cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c797d  mov ebp, esp
    X86_AT(c, 0xc797du);
    c.r[5] = c.r[4];
    // 0c797f  push esi
    X86_AT(c, 0xc797fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c7980  push edi
    X86_AT(c, 0xc7980u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7981  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc7981u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c7984  cmp edi, 1
    X86_AT(c, 0xc7984u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c7987  jl 0xc79ef
    X86_AT(c, 0xc7987u);
    if (x86_cc(c, 12)) { goto L_c79ef; }
    X86_TICK(c, 9);
    // 0c7989  push 7
    X86_AT(c, 0xc7989u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c798b  call 0xbb6b0
    X86_AT(c, 0xc798bu);
    push32(c, 0xc7990u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc7990u);
    X86_TICK(c, 13);
    // 0c7990  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xc7990u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0c7995  push eax
    X86_AT(c, 0xc7995u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7996  call 0xb8a4c
    X86_AT(c, 0xc7996u);
    push32(c, 0xc799bu); x86_call_known(c, 0xb8a4cu, f_000b8a4c); X86_RET(c, 0xc799bu);
    X86_TICK(c, 35);
    // 0c799b  mov edx, edi
    X86_AT(c, 0xc799bu);
    c.r[2] = c.r[7];
    // 0c799d  imul edx, eax
    X86_AT(c, 0xc799du);
    c.r[2] = x86_imul2(c, c.r[2], c.r[0], 4);
    // 0c79a0  mov esi, edx
    X86_AT(c, 0xc79a0u);
    c.r[6] = c.r[2];
    // 0c79a2  push 0xb
    X86_AT(c, 0xc79a2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c79a4  call 0xb607c
    X86_AT(c, 0xc79a4u);
    push32(c, 0xc79a9u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc79a9u);
    X86_TICK(c, 9);
    // 0c79a9  push 5
    X86_AT(c, 0xc79a9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c79ab  call 0xbebbc
    X86_AT(c, 0xc79abu);
    push32(c, 0xc79b0u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc79b0u);
    X86_TICK(c, 11);
    // 0c79b0  push 0x5c74
    X86_AT(c, 0xc79b0u);
    { uint32_t v = 0x5C74u; push32(c, v); }
    // 0c79b5  push 7
    X86_AT(c, 0xc79b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c79b7  call 0xba428
    X86_AT(c, 0xc79b7u);
    push32(c, 0xc79bcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc79bcu);
    X86_TICK(c, 13);
    // 0c79bc  push 2
    X86_AT(c, 0xc79bcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c79be  push esi
    X86_AT(c, 0xc79beu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c79bf  push 7
    X86_AT(c, 0xc79bfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c79c1  call 0xba404
    X86_AT(c, 0xc79c1u);
    push32(c, 0xc79c6u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc79c6u);
    X86_TICK(c, 11);
    // 0c79c6  push 0x5c88
    X86_AT(c, 0xc79c6u);
    { uint32_t v = 0x5C88u; push32(c, v); }
    // 0c79cb  push 7
    X86_AT(c, 0xc79cbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c79cd  call 0xba428
    X86_AT(c, 0xc79cdu);
    push32(c, 0xc79d2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc79d2u);
    X86_TICK(c, 9);
    // 0c79d2  push 7
    X86_AT(c, 0xc79d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c79d4  call 0xbbb5c
    X86_AT(c, 0xc79d4u);
    push32(c, 0xc79d9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc79d9u);
    X86_TICK(c, 14);
    // 0c79d9  push esi
    X86_AT(c, 0xc79d9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c79da  push dword ptr [0xa4930]
    X86_AT(c, 0xc79dau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4930u))); push32(c, v); }
    // 0c79e0  call 0xc7948
    X86_AT(c, 0xc79e0u);
    push32(c, 0xc79e5u); x86_call_known(c, 0xc7948u, f_000c7948); X86_RET(c, 0xc79e5u);
    X86_TICK(c, 9);
    // 0c79e5  push 5
    X86_AT(c, 0xc79e5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c79e7  call 0xbebbc
    X86_AT(c, 0xc79e7u);
    push32(c, 0xc79ecu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc79ecu);
    X86_TICK(c, 2);
    // 0c79ec  add esp, 0x3c
    X86_AT(c, 0xc79ecu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
L_c79ef:
    X86_TICK(c, 24);
    // 0c79ef  pop edi
    X86_AT(c, 0xc79efu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c79f0  pop esi
    X86_AT(c, 0xc79f0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c79f1  leave 
    X86_AT(c, 0xc79f1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c79f2  ret 
    X86_AT(c, 0xc79f2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc797cu, "ran off the end of a function");
}
void f_000c79f4(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0c79f4  push ebp
    X86_AT(c, 0xc79f4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c79f5  mov ebp, esp
    X86_AT(c, 0xc79f5u);
    c.r[5] = c.r[4];
    // 0c79f7  push edi
    X86_AT(c, 0xc79f7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c79f8  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc79f8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c79fb  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc79fbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c79fe  lea eax, [edi + edi*2]
    X86_AT(c, 0xc79feu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c7a01  lea edx, [eax*8]
    X86_AT(c, 0xc7a01u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c7a08  lea edx, [eax + edx*8]
    X86_AT(c, 0xc7a08u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c7a0b  mov eax, ecx
    X86_AT(c, 0xc7a0bu);
    c.r[0] = c.r[1];
    // 0c7a0d  add eax, dword ptr [edx + 0xa4ae9]
    X86_AT(c, 0xc7a0du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u))), 0, 4); }
    // 0c7a13  cmp eax, 0x270f
    X86_AT(c, 0xc7a13u);
    (void)x86_sub(c, c.r[0], 0x270Fu, 0, 4);
    // 0c7a18  jle 0xc7a21
    X86_AT(c, 0xc7a18u);
    if (x86_cc(c, 14)) { goto L_c7a21; }
    X86_TICK(c, 9);
    // 0c7a1a  mov eax, 0xffffffff
    X86_AT(c, 0xc7a1au);
    c.r[0] = 0xFFFFFFFFu;
    // 0c7a1f  jmp 0xc7a36
    X86_AT(c, 0xc7a1fu);
    goto L_c7a36;
L_c7a21:
    X86_TICK(c, 15);
    // 0c7a21  lea eax, [edi + edi*2]
    X86_AT(c, 0xc7a21u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c7a24  lea edx, [eax*8]
    X86_AT(c, 0xc7a24u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c7a2b  lea edx, [eax + edx*8]
    X86_AT(c, 0xc7a2bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c7a2e  add dword ptr [edx + 0xa4ae9], ecx
    X86_AT(c, 0xc7a2eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 0c7a34  sub eax, eax
    X86_AT(c, 0xc7a34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c7a36:
    X86_TICK(c, 20);
    // 0c7a36  pop edi
    X86_AT(c, 0xc7a36u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7a37  leave 
    X86_AT(c, 0xc7a37u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c7a38  ret 
    X86_AT(c, 0xc7a38u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc79f4u, "ran off the end of a function");
}
void f_000c7a3c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0c7a3c  push ebp
    X86_AT(c, 0xc7a3cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c7a3d  mov ebp, esp
    X86_AT(c, 0xc7a3du);
    c.r[5] = c.r[4];
    // 0c7a3f  sub esp, 8
    X86_AT(c, 0xc7a3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c7a42  push ebx
    X86_AT(c, 0xc7a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7a43  push esi
    X86_AT(c, 0xc7a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c7a44  push edi
    X86_AT(c, 0xc7a44u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7a45  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc7a45u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c7a48  sub esi, esi
    X86_AT(c, 0xc7a48u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c7a4a  push 7
    X86_AT(c, 0xc7a4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7a4c  call 0xbb6b0
    X86_AT(c, 0xc7a4cu);
    push32(c, 0xc7a51u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc7a51u);
    X86_TICK(c, 26);
    // 0c7a51  lea eax, [edi + edi*2]
    X86_AT(c, 0xc7a51u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c7a54  lea edx, [eax*8]
    X86_AT(c, 0xc7a54u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c7a5b  lea edx, [eax + edx*8]
    X86_AT(c, 0xc7a5bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c7a5e  add esp, 4
    X86_AT(c, 0xc7a5eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7a61  movzx eax, byte ptr [edx + 0xa4acf]
    X86_AT(c, 0xc7a61u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACFu)));
    // 0c7a68  xchg edx, eax
    X86_AT(c, 0xc7a68u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0c7a69  sub edx, 0x41
    X86_AT(c, 0xc7a69u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0c7a6c  cmp edx, 0x16
    X86_AT(c, 0xc7a6cu);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0c7a6f  ja 0xc7b6e
    X86_AT(c, 0xc7a6fu);
    if (x86_cc(c, 7)) { goto L_c7b6e; }
    X86_TICK(c, 7);
    // 0c7a75  jmp dword ptr cs:[edx*4 + 0xc7a7d]
    X86_AT(c, 0xc7a75u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC7A7Du)));
      switch (t) {
      case 0xc7ad9u: goto L_c7ad9;
      case 0xc7b45u: goto L_c7b45;
      case 0xc7b58u: goto L_c7b58;
      case 0xc7b6eu: goto L_c7b6e;
      default: x86_jump(c, t); return; } }
L_c7ad9:
    X86_TICK(c, 11);
    // 0c7ad9  push 0x5c9c
    X86_AT(c, 0xc7ad9u);
    { uint32_t v = 0x5C9Cu; push32(c, v); }
    // 0c7ade  push 7
    X86_AT(c, 0xc7adeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7ae0  call 0xba428
    X86_AT(c, 0xc7ae0u);
    push32(c, 0xc7ae5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7ae5u);
    X86_TICK(c, 9);
    // 0c7ae5  push 7
    X86_AT(c, 0xc7ae5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7ae7  call 0xbbb5c
    X86_AT(c, 0xc7ae7u);
    push32(c, 0xc7aecu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7aecu);
    X86_TICK(c, 2);
    // 0c7aec  add esp, 0xc
    X86_AT(c, 0xc7aecu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c7aef:
    X86_TICK(c, 9);
    // 0c7aef  push 7
    X86_AT(c, 0xc7aefu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7af1  call 0xb9514
    X86_AT(c, 0xc7af1u);
    push32(c, 0xc7af6u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xc7af6u);
    X86_TICK(c, 12);
    // 0c7af6  xchg ebx, eax
    X86_AT(c, 0xc7af6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c7af7  add esp, 4
    X86_AT(c, 0xc7af7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7afa  cmp bl, 0x57
    X86_AT(c, 0xc7afau);
    (void)x86_sub(c, g8(c, 3), 0x57u, 0, 1);
    // 0c7afd  je 0xc7b19
    X86_AT(c, 0xc7afdu);
    if (x86_cc(c, 4)) { goto L_c7b19; }
    X86_TICK(c, 7);
    // 0c7aff  cmp bl, 0x43
    X86_AT(c, 0xc7affu);
    (void)x86_sub(c, g8(c, 3), 0x43u, 0, 1);
    // 0c7b02  je 0xc7b19
    X86_AT(c, 0xc7b02u);
    if (x86_cc(c, 4)) { goto L_c7b19; }
    X86_TICK(c, 7);
    // 0c7b04  cmp bl, 1
    X86_AT(c, 0xc7b04u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c7b07  je 0xc7b19
    X86_AT(c, 0xc7b07u);
    if (x86_cc(c, 4)) { goto L_c7b19; }
    X86_TICK(c, 7);
    // 0c7b09  and bl, bl
    X86_AT(c, 0xc7b09u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c7b0b  je 0xc7aef
    X86_AT(c, 0xc7b0bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc7aefu); goto L_c7aef; }
    X86_TICK(c, 9);
    // 0c7b0d  push 1
    X86_AT(c, 0xc7b0du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c7b0f  call 0xb607c
    X86_AT(c, 0xc7b0fu);
    push32(c, 0xc7b14u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc7b14u);
    X86_TICK(c, 9);
    // 0c7b14  add esp, 4
    X86_AT(c, 0xc7b14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7b17  jmp 0xc7aef
    X86_AT(c, 0xc7b17u);
    X86_POLL(c, 0xc7aefu); goto L_c7aef;
L_c7b19:
    X86_TICK(c, 9);
    // 0c7b19  push 7
    X86_AT(c, 0xc7b19u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7b1b  call 0xbb6b0
    X86_AT(c, 0xc7b1bu);
    push32(c, 0xc7b20u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc7b20u);
    X86_TICK(c, 9);
    // 0c7b20  add esp, 4
    X86_AT(c, 0xc7b20u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7b23  cmp bl, 1
    X86_AT(c, 0xc7b23u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c7b26  jne 0xc7b32
    X86_AT(c, 0xc7b26u);
    if (x86_cc(c, 5)) { goto L_c7b32; }
    X86_TICK(c, 9);
    // 0c7b28  push 0x5cd8
    X86_AT(c, 0xc7b28u);
    { uint32_t v = 0x5CD8u; push32(c, v); }
    // 0c7b2d  jmp 0xc7bdf
    X86_AT(c, 0xc7b2du);
    goto L_c7bdf;
L_c7b32:
    X86_TICK(c, 7);
    // 0c7b32  cmp bl, 0x57
    X86_AT(c, 0xc7b32u);
    (void)x86_sub(c, g8(c, 3), 0x57u, 0, 1);
    // 0c7b35  jne 0xc7b3e
    X86_AT(c, 0xc7b35u);
    if (x86_cc(c, 5)) { goto L_c7b3e; }
    X86_TICK(c, 9);
    // 0c7b37  push 0x5cf0
    X86_AT(c, 0xc7b37u);
    { uint32_t v = 0x5CF0u; push32(c, v); }
    // 0c7b3c  jmp 0xc7b5d
    X86_AT(c, 0xc7b3cu);
    goto L_c7b5d;
L_c7b3e:
    X86_TICK(c, 9);
    // 0c7b3e  push 0x5d1c
    X86_AT(c, 0xc7b3eu);
    { uint32_t v = 0x5D1Cu; push32(c, v); }
    // 0c7b43  jmp 0xc7b4a
    X86_AT(c, 0xc7b43u);
    goto L_c7b4a;
L_c7b45:
    X86_TICK(c, 2);
    // 0c7b45  push 0x5d48
    X86_AT(c, 0xc7b45u);
    { uint32_t v = 0x5D48u; push32(c, v); }
L_c7b4a:
    X86_TICK(c, 9);
    // 0c7b4a  push 7
    X86_AT(c, 0xc7b4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7b4c  call 0xba428
    X86_AT(c, 0xc7b4cu);
    push32(c, 0xc7b51u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7b51u);
    X86_TICK(c, 9);
    // 0c7b51  mov esi, 2
    X86_AT(c, 0xc7b51u);
    c.r[6] = 0x2u;
    // 0c7b56  jmp 0xc7b69
    X86_AT(c, 0xc7b56u);
    goto L_c7b69;
L_c7b58:
    X86_TICK(c, 2);
    // 0c7b58  push 0x5d74
    X86_AT(c, 0xc7b58u);
    { uint32_t v = 0x5D74u; push32(c, v); }
L_c7b5d:
    X86_TICK(c, 9);
    // 0c7b5d  push 7
    X86_AT(c, 0xc7b5du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7b5f  call 0xba428
    X86_AT(c, 0xc7b5fu);
    push32(c, 0xc7b64u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7b64u);
    X86_TICK(c, 2);
    // 0c7b64  mov esi, 1
    X86_AT(c, 0xc7b64u);
    c.r[6] = 0x1u;
L_c7b69:
    X86_TICK(c, 9);
    // 0c7b69  add esp, 8
    X86_AT(c, 0xc7b69u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c7b6c  jmp 0xc7b7f
    X86_AT(c, 0xc7b6cu);
    goto L_c7b7f;
L_c7b6e:
    X86_TICK(c, 9);
    // 0c7b6e  push 0
    X86_AT(c, 0xc7b6eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7b70  call 0xb607c
    X86_AT(c, 0xc7b70u);
    push32(c, 0xc7b75u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc7b75u);
    X86_TICK(c, 9);
    // 0c7b75  push 0x5da0
    X86_AT(c, 0xc7b75u);
    { uint32_t v = 0x5DA0u; push32(c, v); }
    // 0c7b7a  jmp 0xc7c2b
    X86_AT(c, 0xc7b7au);
    goto L_c7c2b;
L_c7b7f:
    X86_TICK(c, 9);
    // 0c7b7f  push 7
    X86_AT(c, 0xc7b7fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7b81  call 0xbbb5c
    X86_AT(c, 0xc7b81u);
    push32(c, 0xc7b86u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7b86u);
    X86_TICK(c, 9);
    // 0c7b86  push 0x5dc8
    X86_AT(c, 0xc7b86u);
    { uint32_t v = 0x5DC8u; push32(c, v); }
    // 0c7b8b  call 0xbc50c
    X86_AT(c, 0xc7b8bu);
    push32(c, 0xc7b90u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc7b90u);
    X86_TICK(c, 9);
    // 0c7b90  push 7
    X86_AT(c, 0xc7b90u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7b92  call 0xbb6b0
    X86_AT(c, 0xc7b92u);
    push32(c, 0xc7b97u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc7b97u);
    X86_TICK(c, 2);
    // 0c7b97  add esp, 0xc
    X86_AT(c, 0xc7b97u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c7b9a:
    X86_TICK(c, 9);
    // 0c7b9a  push 7
    X86_AT(c, 0xc7b9au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7b9c  call 0xb9514
    X86_AT(c, 0xc7b9cu);
    push32(c, 0xc7ba1u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xc7ba1u);
    X86_TICK(c, 12);
    // 0c7ba1  xchg ebx, eax
    X86_AT(c, 0xc7ba1u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c7ba2  add esp, 4
    X86_AT(c, 0xc7ba2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7ba5  cmp bl, 1
    X86_AT(c, 0xc7ba5u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c7ba8  je 0xc7bc4
    X86_AT(c, 0xc7ba8u);
    if (x86_cc(c, 4)) { goto L_c7bc4; }
    X86_TICK(c, 7);
    // 0c7baa  cmp bl, 0x41
    X86_AT(c, 0xc7baau);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0c7bad  jb 0xc7bb4
    X86_AT(c, 0xc7badu);
    if (x86_cc(c, 2)) { goto L_c7bb4; }
    X86_TICK(c, 7);
    // 0c7baf  cmp bl, 0x50
    X86_AT(c, 0xc7bafu);
    (void)x86_sub(c, g8(c, 3), 0x50u, 0, 1);
    // 0c7bb2  jbe 0xc7bc4
    X86_AT(c, 0xc7bb2u);
    if (x86_cc(c, 6)) { goto L_c7bc4; }
L_c7bb4:
    X86_TICK(c, 7);
    // 0c7bb4  and bl, bl
    X86_AT(c, 0xc7bb4u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c7bb6  je 0xc7b9a
    X86_AT(c, 0xc7bb6u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc7b9au); goto L_c7b9a; }
    X86_TICK(c, 9);
    // 0c7bb8  push 3
    X86_AT(c, 0xc7bb8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7bba  call 0xb607c
    X86_AT(c, 0xc7bbau);
    push32(c, 0xc7bbfu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc7bbfu);
    X86_TICK(c, 9);
    // 0c7bbf  add esp, 4
    X86_AT(c, 0xc7bbfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7bc2  jmp 0xc7b9a
    X86_AT(c, 0xc7bc2u);
    X86_POLL(c, 0xc7b9au); goto L_c7b9a;
L_c7bc4:
    X86_TICK(c, 9);
    // 0c7bc4  push 2
    X86_AT(c, 0xc7bc4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c7bc6  call 0xbbb5c
    X86_AT(c, 0xc7bc6u);
    push32(c, 0xc7bcbu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7bcbu);
    X86_TICK(c, 9);
    // 0c7bcb  push 7
    X86_AT(c, 0xc7bcbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7bcd  call 0xbb6b0
    X86_AT(c, 0xc7bcdu);
    push32(c, 0xc7bd2u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc7bd2u);
    X86_TICK(c, 9);
    // 0c7bd2  add esp, 8
    X86_AT(c, 0xc7bd2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c7bd5  cmp bl, 1
    X86_AT(c, 0xc7bd5u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c7bd8  jne 0xc7bf5
    X86_AT(c, 0xc7bd8u);
    if (x86_cc(c, 5)) { goto L_c7bf5; }
    X86_TICK(c, 2);
    // 0c7bda  push 0x5df0
    X86_AT(c, 0xc7bdau);
    { uint32_t v = 0x5DF0u; push32(c, v); }
L_c7bdf:
    X86_TICK(c, 9);
    // 0c7bdf  push 7
    X86_AT(c, 0xc7bdfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7be1  call 0xba428
    X86_AT(c, 0xc7be1u);
    push32(c, 0xc7be6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7be6u);
    X86_TICK(c, 9);
    // 0c7be6  push 7
    X86_AT(c, 0xc7be6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7be8  call 0xbbb5c
    X86_AT(c, 0xc7be8u);
    push32(c, 0xc7bedu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7bedu);
    X86_TICK(c, 9);
    // 0c7bed  add esp, 0xc
    X86_AT(c, 0xc7bedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c7bf0  jmp 0xc7cd5
    X86_AT(c, 0xc7bf0u);
    goto L_c7cd5;
L_c7bf5:
    X86_TICK(c, 26);
    // 0c7bf5  movzx ebx, bl
    X86_AT(c, 0xc7bf5u);
    c.r[3] = g8(c, 3);
    // 0c7bf8  lea eax, [ebx - 0x41]
    X86_AT(c, 0xc7bf8u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0c7bfb  lea eax, [eax + eax*4]
    X86_AT(c, 0xc7bfbu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0c7bfe  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc7bfeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c7c01  lea edx, [edi + edi*2]
    X86_AT(c, 0xc7c01u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c7c04  lea ecx, [edx*8]
    X86_AT(c, 0xc7c04u);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0c7c0b  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xc7c0bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0c7c0e  cmp eax, dword ptr [ecx + 0xa4ad1]
    X86_AT(c, 0xc7c0eu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AD1u))), 0, 4);
    // 0c7c14  jle 0xc7c41
    X86_AT(c, 0xc7c14u);
    if (x86_cc(c, 14)) { goto L_c7c41; }
    X86_TICK(c, 12);
    // 0c7c16  cmp dword ptr [0xa6134], 2
    X86_AT(c, 0xc7c16u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x2u, 0, 4);
    // 0c7c1d  je 0xc7c41
    X86_AT(c, 0xc7c1du);
    if (x86_cc(c, 4)) { goto L_c7c41; }
    X86_TICK(c, 9);
    // 0c7c1f  push 0
    X86_AT(c, 0xc7c1fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7c21  call 0xb607c
    X86_AT(c, 0xc7c21u);
    push32(c, 0xc7c26u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc7c26u);
    X86_TICK(c, 2);
    // 0c7c26  push 0x5e08
    X86_AT(c, 0xc7c26u);
    { uint32_t v = 0x5E08u; push32(c, v); }
L_c7c2b:
    X86_TICK(c, 9);
    // 0c7c2b  push 7
    X86_AT(c, 0xc7c2bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7c2d  call 0xba428
    X86_AT(c, 0xc7c2du);
    push32(c, 0xc7c32u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7c32u);
    X86_TICK(c, 9);
    // 0c7c32  push 7
    X86_AT(c, 0xc7c32u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7c34  call 0xbbb5c
    X86_AT(c, 0xc7c34u);
    push32(c, 0xc7c39u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7c39u);
    X86_TICK(c, 9);
    // 0c7c39  add esp, 0x10
    X86_AT(c, 0xc7c39u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c7c3c  jmp 0xc7cd5
    X86_AT(c, 0xc7c3cu);
    goto L_c7cd5;
L_c7c41:
    X86_TICK(c, 12);
    // 0c7c41  cmp dword ptr [0xa6134], 2
    X86_AT(c, 0xc7c41u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x2u, 0, 4);
    // 0c7c48  je 0xc7c60
    X86_AT(c, 0xc7c48u);
    if (x86_cc(c, 4)) { goto L_c7c60; }
    X86_TICK(c, 17);
    // 0c7c4a  lea eax, [edi + edi*2]
    X86_AT(c, 0xc7c4au);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c7c4d  lea edx, [eax*8]
    X86_AT(c, 0xc7c4du);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c7c54  lea edx, [eax + edx*8]
    X86_AT(c, 0xc7c54u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c7c57  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc7c57u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c7c5a  sub dword ptr [edx + 0xa4ad1], eax
    X86_AT(c, 0xc7c5au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD1u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_c7c60:
    X86_TICK(c, 18);
    // 0c7c60  lea eax, [edi + edi*2]
    X86_AT(c, 0xc7c60u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c7c63  lea edx, [eax*8]
    X86_AT(c, 0xc7c63u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c7c6a  lea edx, [eax + edx*8]
    X86_AT(c, 0xc7c6au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c7c6d  cmp dword ptr [edx + 0xa4ad1], 0
    X86_AT(c, 0xc7c6du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD1u))), 0x0u, 0, 4);
    // 0c7c74  jge 0xc7c80
    X86_AT(c, 0xc7c74u);
    if (x86_cc(c, 13)) { goto L_c7c80; }
    X86_TICK(c, 2);
    // 0c7c76  mov dword ptr [edx + 0xa4ad1], 0
    X86_AT(c, 0xc7c76u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD1u)), 0x0u);
L_c7c80:
    X86_TICK(c, 11);
    // 0c7c80  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xc7c80u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0c7c84  push 7
    X86_AT(c, 0xc7c84u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7c86  call 0xbb6b0
    X86_AT(c, 0xc7c86u);
    push32(c, 0xc7c8bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc7c8bu);
    X86_TICK(c, 9);
    // 0c7c8b  add esp, 4
    X86_AT(c, 0xc7c8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7c8e  cmp esi, 1
    X86_AT(c, 0xc7c8eu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0c7c91  jne 0xc7ca1
    X86_AT(c, 0xc7c91u);
    if (x86_cc(c, 5)) { goto L_c7ca1; }
    X86_TICK(c, 17);
    // 0c7c93  lea eax, [ebp - 1]
    X86_AT(c, 0xc7c93u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c7c96  push eax
    X86_AT(c, 0xc7c96u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7c97  push ebx
    X86_AT(c, 0xc7c97u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7c98  push 0x10
    X86_AT(c, 0xc7c98u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0c7c9a  push 0xabfdc
    X86_AT(c, 0xc7c9au);
    { uint32_t v = 0xABFDCu; push32(c, v); }
    // 0c7c9f  jmp 0xc7cad
    X86_AT(c, 0xc7c9fu);
    goto L_c7cad;
L_c7ca1:
    X86_TICK(c, 10);
    // 0c7ca1  lea eax, [ebp - 1]
    X86_AT(c, 0xc7ca1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c7ca4  push eax
    X86_AT(c, 0xc7ca4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7ca5  push ebx
    X86_AT(c, 0xc7ca5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7ca6  push 0x10
    X86_AT(c, 0xc7ca6u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0c7ca8  push 0xac81c
    X86_AT(c, 0xc7ca8u);
    { uint32_t v = 0xAC81Cu; push32(c, v); }
L_c7cad:
    X86_TICK(c, 7);
    // 0c7cad  call 0xba1b4
    X86_AT(c, 0xc7cadu);
    push32(c, 0xc7cb2u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc7cb2u);
    X86_TICK(c, 11);
    // 0c7cb2  push eax
    X86_AT(c, 0xc7cb2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7cb3  push 7
    X86_AT(c, 0xc7cb3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7cb5  call 0xbbba4
    X86_AT(c, 0xc7cb5u);
    push32(c, 0xc7cbau); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc7cbau);
    X86_TICK(c, 11);
    // 0c7cba  add esp, 0x18
    X86_AT(c, 0xc7cbau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c7cbd  push 7
    X86_AT(c, 0xc7cbdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7cbf  call 0xbbb5c
    X86_AT(c, 0xc7cbfu);
    push32(c, 0xc7cc4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7cc4u);
    X86_TICK(c, 9);
    // 0c7cc4  push edi
    X86_AT(c, 0xc7cc4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7cc5  call 0xbe720
    X86_AT(c, 0xc7cc5u);
    push32(c, 0xc7ccau); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc7ccau);
    X86_TICK(c, 13);
    // 0c7cca  push ebx
    X86_AT(c, 0xc7ccau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7ccb  push esi
    X86_AT(c, 0xc7ccbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c7ccc  push edi
    X86_AT(c, 0xc7cccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7ccd  call 0xc9940
    X86_AT(c, 0xc7ccdu);
    push32(c, 0xc7cd2u); x86_call_known(c, 0xc9940u, f_000c9940); X86_RET(c, 0xc7cd2u);
    X86_TICK(c, 2);
    // 0c7cd2  add esp, 0x14
    X86_AT(c, 0xc7cd2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c7cd5:
    X86_TICK(c, 28);
    // 0c7cd5  pop edi
    X86_AT(c, 0xc7cd5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7cd6  pop esi
    X86_AT(c, 0xc7cd6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c7cd7  pop ebx
    X86_AT(c, 0xc7cd7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c7cd8  leave 
    X86_AT(c, 0xc7cd8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c7cd9  ret 
    X86_AT(c, 0xc7cd9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7a3cu, "ran off the end of a function");
}
void f_000c7cd5(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0c7cd5  pop edi
    X86_AT(c, 0xc7cd5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7cd6  pop esi
    X86_AT(c, 0xc7cd6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c7cd7  pop ebx
    X86_AT(c, 0xc7cd7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c7cd8  leave 
    X86_AT(c, 0xc7cd8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c7cd9  ret 
    X86_AT(c, 0xc7cd9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7cd5u, "ran off the end of a function");
}
void f_000c7cdc(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0c7cdc  push ebp
    X86_AT(c, 0xc7cdcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c7cdd  mov ebp, esp
    X86_AT(c, 0xc7cddu);
    c.r[5] = c.r[4];
    // 0c7cdf  push ebx
    X86_AT(c, 0xc7cdfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7ce0  push esi
    X86_AT(c, 0xc7ce0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c7ce1  push edi
    X86_AT(c, 0xc7ce1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7ce2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc7ce2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c7ce5  sub ebx, ebx
    X86_AT(c, 0xc7ce5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c7ce7  mov esi, ebx
    X86_AT(c, 0xc7ce7u);
    c.r[6] = c.r[3];
L_c7ce9:
    X86_TICK(c, 7);
    // 0c7ce9  cmp esi, 8
    X86_AT(c, 0xc7ce9u);
    (void)x86_sub(c, c.r[6], 0x8u, 0, 4);
    // 0c7cec  jge 0xc7d1e
    X86_AT(c, 0xc7cecu);
    if (x86_cc(c, 13)) { goto L_c7d1e; }
    X86_TICK(c, 12);
    // 0c7cee  cmp dword ptr [esi*4 + 0xa49b5], 0
    X86_AT(c, 0xc7ceeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA49B5u))), 0x0u, 0, 4);
    // 0c7cf6  je 0xc7d1b
    X86_AT(c, 0xc7cf6u);
    if (x86_cc(c, 4)) { goto L_c7d1b; }
    X86_TICK(c, 9);
    // 0c7cf8  push 3
    X86_AT(c, 0xc7cf8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7cfa  call 0xb61b4
    X86_AT(c, 0xc7cfau);
    push32(c, 0xc7cffu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc7cffu);
    X86_TICK(c, 9);
    // 0c7cff  add esp, 4
    X86_AT(c, 0xc7cffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7d02  and eax, eax
    X86_AT(c, 0xc7d02u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c7d04  je 0xc7d1b
    X86_AT(c, 0xc7d04u);
    if (x86_cc(c, 4)) { goto L_c7d1b; }
    X86_TICK(c, 11);
    // 0c7d06  push edi
    X86_AT(c, 0xc7d06u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7d07  push esi
    X86_AT(c, 0xc7d07u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c7d08  call 0xc7d2c
    X86_AT(c, 0xc7d08u);
    push32(c, 0xc7d0du); x86_call_known(c, 0xc7d2cu, f_000c7d2c); X86_RET(c, 0xc7d0du);
    X86_TICK(c, 14);
    // 0c7d0d  add esp, 8
    X86_AT(c, 0xc7d0du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c7d10  cmp dword ptr [esi*4 + 0xa49b5], 0
    X86_AT(c, 0xc7d10u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA49B5u))), 0x0u, 0, 4);
    // 0c7d18  jne 0xc7d1b
    X86_AT(c, 0xc7d18u);
    if (x86_cc(c, 5)) { goto L_c7d1b; }
    X86_TICK(c, 2);
    // 0c7d1a  inc ebx
    X86_AT(c, 0xc7d1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_c7d1b:
    X86_TICK(c, 9);
    // 0c7d1b  inc esi
    X86_AT(c, 0xc7d1bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c7d1c  jmp 0xc7ce9
    X86_AT(c, 0xc7d1cu);
    X86_POLL(c, 0xc7ce9u); goto L_c7ce9;
L_c7d1e:
    X86_TICK(c, 9);
    // 0c7d1e  push ebx
    X86_AT(c, 0xc7d1eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7d1f  call 0xc797c
    X86_AT(c, 0xc7d1fu);
    push32(c, 0xc7d24u); x86_call_known(c, 0xc797cu, f_000c797c); X86_RET(c, 0xc7d24u);
    X86_TICK(c, 30);
    // 0c7d24  add esp, 4
    X86_AT(c, 0xc7d24u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7d27  pop edi
    X86_AT(c, 0xc7d27u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7d28  pop esi
    X86_AT(c, 0xc7d28u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c7d29  pop ebx
    X86_AT(c, 0xc7d29u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c7d2a  leave 
    X86_AT(c, 0xc7d2au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c7d2b  ret 
    X86_AT(c, 0xc7d2bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7cdcu, "ran off the end of a function");
}
void f_000c7d2c(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0c7d2c  push ebp
    X86_AT(c, 0xc7d2cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c7d2d  mov ebp, esp
    X86_AT(c, 0xc7d2du);
    c.r[5] = c.r[4];
    // 0c7d2f  push eax
    X86_AT(c, 0xc7d2fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7d30  push ebx
    X86_AT(c, 0xc7d30u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7d31  push esi
    X86_AT(c, 0xc7d31u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c7d32  push edi
    X86_AT(c, 0xc7d32u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7d33  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc7d33u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c7d36  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc7d36u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c7d39  push 8
    X86_AT(c, 0xc7d39u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c7d3b  call 0xb607c
    X86_AT(c, 0xc7d3bu);
    push32(c, 0xc7d40u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc7d40u);
    X86_TICK(c, 9);
    // 0c7d40  push 0xffffffff
    X86_AT(c, 0xc7d40u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c7d42  call 0xb7f6c
    X86_AT(c, 0xc7d42u);
    push32(c, 0xc7d47u); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xc7d47u);
    X86_TICK(c, 37);
    // 0c7d47  mov ebx, dword ptr [0x458a8]
    X86_AT(c, 0xc7d47u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x458A8u)));
    // 0c7d4d  inc dword ptr [0x458a8]
    X86_AT(c, 0xc7d4du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x458A8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c7d53  lea eax, [ebx + ebx*2]
    X86_AT(c, 0xc7d53u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 2);
    // 0c7d56  mov edx, dword ptr [edi*4 + 0xa4935]
    X86_AT(c, 0xc7d56u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4935u)));
    // 0c7d5d  mov dword ptr [eax*4 + 0x458ac], edx
    X86_AT(c, 0xc7d5du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458ACu)), c.r[2]);
    // 0c7d64  mov edx, dword ptr [edi*4 + 0xa4955]
    X86_AT(c, 0xc7d64u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4955u)));
    // 0c7d6b  mov dword ptr [eax*4 + 0x458b0], edx
    X86_AT(c, 0xc7d6bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B0u)), c.r[2]);
    // 0c7d72  mov dword ptr [eax*4 + 0x458b4], 0x8b
    X86_AT(c, 0xc7d72u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Bu);
    // 0c7d7d  push 0
    X86_AT(c, 0xc7d7du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7d7f  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc7d7fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c7d82  call 0xbdea8
    X86_AT(c, 0xc7d82u);
    push32(c, 0xc7d87u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xc7d87u);
    X86_TICK(c, 15);
    // 0c7d87  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc7d87u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c7d8a  mov dword ptr [eax*4 + 0x458b4], 0x8c
    X86_AT(c, 0xc7d8au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Cu);
    // 0c7d95  push 0
    X86_AT(c, 0xc7d95u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7d97  call 0xbdea8
    X86_AT(c, 0xc7d97u);
    push32(c, 0xc7d9cu); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xc7d9cu);
    X86_TICK(c, 15);
    // 0c7d9c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc7d9cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c7d9f  mov dword ptr [eax*4 + 0x458b4], 0x8d
    X86_AT(c, 0xc7d9fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Du);
    // 0c7daa  push 0
    X86_AT(c, 0xc7daau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7dac  call 0xbdea8
    X86_AT(c, 0xc7dacu);
    push32(c, 0xc7db1u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xc7db1u);
    X86_TICK(c, 15);
    // 0c7db1  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc7db1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c7db4  mov dword ptr [eax*4 + 0x458b4], 0x8e
    X86_AT(c, 0xc7db4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Eu);
    // 0c7dbf  push 0
    X86_AT(c, 0xc7dbfu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7dc1  call 0xbdea8
    X86_AT(c, 0xc7dc1u);
    push32(c, 0xc7dc6u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xc7dc6u);
    X86_TICK(c, 15);
    // 0c7dc6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc7dc6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c7dc9  mov dword ptr [eax*4 + 0x458b4], 0x8f
    X86_AT(c, 0xc7dc9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Fu);
    // 0c7dd4  push 0
    X86_AT(c, 0xc7dd4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7dd6  call 0xbdea8
    X86_AT(c, 0xc7dd6u);
    push32(c, 0xc7ddbu); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xc7ddbu);
    X86_TICK(c, 15);
    // 0c7ddb  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc7ddbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c7dde  mov dword ptr [eax*4 + 0x458b4], 0x90
    X86_AT(c, 0xc7ddeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x90u);
    // 0c7de9  push 0
    X86_AT(c, 0xc7de9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7deb  call 0xbdea8
    X86_AT(c, 0xc7debu);
    push32(c, 0xc7df0u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xc7df0u);
    X86_TICK(c, 14);
    // 0c7df0  add esp, 0x20
    X86_AT(c, 0xc7df0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c7df3  cmp byte ptr [0xa4934], 0x8a
    X86_AT(c, 0xc7df3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4934u))), 0x8Au, 0, 1);
    // 0c7dfa  je 0xc7e7c
    X86_AT(c, 0xc7dfau);
    if (x86_cc(c, 4)) { goto L_c7e7c; }
    X86_TICK(c, 9);
    // 0c7e00  push 7
    X86_AT(c, 0xc7e00u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7e02  call 0xbb6b0
    X86_AT(c, 0xc7e02u);
    push32(c, 0xc7e07u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc7e07u);
    X86_TICK(c, 9);
    // 0c7e07  add esp, 4
    X86_AT(c, 0xc7e07u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7e0a  and esi, esi
    X86_AT(c, 0xc7e0au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c7e0c  jl 0xc7e5b
    X86_AT(c, 0xc7e0cu);
    if (x86_cc(c, 12)) { goto L_c7e5b; }
    X86_TICK(c, 13);
    // 0c7e0e  push 4
    X86_AT(c, 0xc7e0eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c7e10  push esi
    X86_AT(c, 0xc7e10u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c7e11  push 7
    X86_AT(c, 0xc7e11u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7e13  call 0xba404
    X86_AT(c, 0xc7e13u);
    push32(c, 0xc7e18u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc7e18u);
    X86_TICK(c, 11);
    // 0c7e18  push 0x5e38
    X86_AT(c, 0xc7e18u);
    { uint32_t v = 0x5E38u; push32(c, v); }
    // 0c7e1d  push 7
    X86_AT(c, 0xc7e1du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7e1f  call 0xba428
    X86_AT(c, 0xc7e1fu);
    push32(c, 0xc7e24u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7e24u);
    X86_TICK(c, 9);
    // 0c7e24  push 7
    X86_AT(c, 0xc7e24u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7e26  call 0xbbb5c
    X86_AT(c, 0xc7e26u);
    push32(c, 0xc7e2bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7e2bu);
    X86_TICK(c, 16);
    // 0c7e2b  sub dword ptr [edi*4 + 0xa49b5], esi
    X86_AT(c, 0xc7e2bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0c7e32  add esp, 0x18
    X86_AT(c, 0xc7e32u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c7e35  and esi, esi
    X86_AT(c, 0xc7e35u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c7e37  jge 0xc7e44
    X86_AT(c, 0xc7e37u);
    if (x86_cc(c, 13)) { goto L_c7e44; }
    X86_TICK(c, 2);
    // 0c7e39  mov dword ptr [edi*4 + 0xa49b5], 0
    X86_AT(c, 0xc7e39u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u)), 0x0u);
L_c7e44:
    X86_TICK(c, 12);
    // 0c7e44  cmp dword ptr [edi*4 + 0xa49b5], 0
    X86_AT(c, 0xc7e44u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u))), 0x0u, 0, 4);
    // 0c7e4c  jg 0xc7e7c
    X86_AT(c, 0xc7e4cu);
    if (x86_cc(c, 15)) { goto L_c7e7c; }
    X86_TICK(c, 9);
    // 0c7e4e  mov dword ptr [edi*4 + 0xa49b5], 0
    X86_AT(c, 0xc7e4eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u)), 0x0u);
    // 0c7e59  jmp 0xc7e7c
    X86_AT(c, 0xc7e59u);
    goto L_c7e7c;
L_c7e5b:
    X86_TICK(c, 11);
    // 0c7e5b  push 0x5e60
    X86_AT(c, 0xc7e5bu);
    { uint32_t v = 0x5E60u; push32(c, v); }
    // 0c7e60  push 7
    X86_AT(c, 0xc7e60u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7e62  call 0xba428
    X86_AT(c, 0xc7e62u);
    push32(c, 0xc7e67u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7e67u);
    X86_TICK(c, 9);
    // 0c7e67  push 7
    X86_AT(c, 0xc7e67u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7e69  call 0xbbb5c
    X86_AT(c, 0xc7e69u);
    push32(c, 0xc7e6eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7e6eu);
    X86_TICK(c, 4);
    // 0c7e6e  mov dword ptr [edi*4 + 0xa49b5], 0
    X86_AT(c, 0xc7e6eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u)), 0x0u);
    // 0c7e79  add esp, 0xc
    X86_AT(c, 0xc7e79u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c7e7c:
    X86_TICK(c, 9);
    // 0c7e7c  push 0xffffffff
    X86_AT(c, 0xc7e7cu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c7e7e  call 0xb7f6c
    X86_AT(c, 0xc7e7eu);
    push32(c, 0xc7e83u); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xc7e83u);
    X86_TICK(c, 9);
    // 0c7e83  push 0
    X86_AT(c, 0xc7e83u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7e85  call 0xbdea8
    X86_AT(c, 0xc7e85u);
    push32(c, 0xc7e8au); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xc7e8au);
    X86_TICK(c, 30);
    // 0c7e8a  add esp, 8
    X86_AT(c, 0xc7e8au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c7e8d  pop edi
    X86_AT(c, 0xc7e8du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7e8e  pop esi
    X86_AT(c, 0xc7e8eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c7e8f  pop ebx
    X86_AT(c, 0xc7e8fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c7e90  leave 
    X86_AT(c, 0xc7e90u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c7e91  ret 
    X86_AT(c, 0xc7e91u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7d2cu, "ran off the end of a function");
}
void f_000c7e94(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0c7e94  push ebp
    X86_AT(c, 0xc7e94u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c7e95  mov ebp, esp
    X86_AT(c, 0xc7e95u);
    c.r[5] = c.r[4];
    // 0c7e97  push edi
    X86_AT(c, 0xc7e97u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7e98  push 7
    X86_AT(c, 0xc7e98u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7e9a  call 0xbb6b0
    X86_AT(c, 0xc7e9au);
    push32(c, 0xc7e9fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc7e9fu);
    X86_TICK(c, 11);
    // 0c7e9f  push 0x5e88
    X86_AT(c, 0xc7e9fu);
    { uint32_t v = 0x5E88u; push32(c, v); }
    // 0c7ea4  push 7
    X86_AT(c, 0xc7ea4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7ea6  call 0xba428
    X86_AT(c, 0xc7ea6u);
    push32(c, 0xc7eabu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7eabu);
    X86_TICK(c, 9);
    // 0c7eab  push 7
    X86_AT(c, 0xc7eabu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7ead  call 0xbbb5c
    X86_AT(c, 0xc7eadu);
    push32(c, 0xc7eb2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7eb2u);
    X86_TICK(c, 11);
    // 0c7eb2  push 0
    X86_AT(c, 0xc7eb2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7eb4  push 7
    X86_AT(c, 0xc7eb4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7eb6  call 0xb6f28
    X86_AT(c, 0xc7eb6u);
    push32(c, 0xc7ebbu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xc7ebbu);
    X86_TICK(c, 12);
    // 0c7ebb  xchg edi, eax
    X86_AT(c, 0xc7ebbu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c7ebc  add esp, 0x18
    X86_AT(c, 0xc7ebcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c7ebf  cmp edi, 0xffffffff
    X86_AT(c, 0xc7ebfu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c7ec2  jne 0xc7edc
    X86_AT(c, 0xc7ec2u);
    if (x86_cc(c, 5)) { goto L_c7edc; }
    X86_TICK(c, 11);
    // 0c7ec4  push 0x5eb0
    X86_AT(c, 0xc7ec4u);
    { uint32_t v = 0x5EB0u; push32(c, v); }
    // 0c7ec9  push 7
    X86_AT(c, 0xc7ec9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7ecb  call 0xba428
    X86_AT(c, 0xc7ecbu);
    push32(c, 0xc7ed0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7ed0u);
    X86_TICK(c, 9);
    // 0c7ed0  push 7
    X86_AT(c, 0xc7ed0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7ed2  call 0xbbb5c
    X86_AT(c, 0xc7ed2u);
    push32(c, 0xc7ed7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7ed7u);
    X86_TICK(c, 9);
    // 0c7ed7  add esp, 0xc
    X86_AT(c, 0xc7ed7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c7eda  jmp 0xc7f08
    X86_AT(c, 0xc7edau);
    goto L_c7f08;
L_c7edc:
    X86_TICK(c, 14);
    // 0c7edc  push dword ptr [ebp + 8]
    X86_AT(c, 0xc7edcu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c7edf  push edi
    X86_AT(c, 0xc7edfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7ee0  call 0xc7918
    X86_AT(c, 0xc7ee0u);
    push32(c, 0xc7ee5u); x86_call_known(c, 0xc7918u, f_000c7918); X86_RET(c, 0xc7ee5u);
    X86_TICK(c, 9);
    // 0c7ee5  push 5
    X86_AT(c, 0xc7ee5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7ee7  call 0xb607c
    X86_AT(c, 0xc7ee7u);
    push32(c, 0xc7eecu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc7eecu);
    X86_TICK(c, 9);
    // 0c7eec  push edi
    X86_AT(c, 0xc7eecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7eed  call 0xc7f0c
    X86_AT(c, 0xc7eedu);
    push32(c, 0xc7ef2u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc7ef2u);
    X86_TICK(c, 9);
    // 0c7ef2  push 5
    X86_AT(c, 0xc7ef2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7ef4  call 0xbebbc
    X86_AT(c, 0xc7ef4u);
    push32(c, 0xc7ef9u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc7ef9u);
    X86_TICK(c, 9);
    // 0c7ef9  push edi
    X86_AT(c, 0xc7ef9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7efa  call 0xc7f0c
    X86_AT(c, 0xc7efau);
    push32(c, 0xc7effu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc7effu);
    X86_TICK(c, 9);
    // 0c7eff  push edi
    X86_AT(c, 0xc7effu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7f00  call 0xbe720
    X86_AT(c, 0xc7f00u);
    push32(c, 0xc7f05u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc7f05u);
    X86_TICK(c, 2);
    // 0c7f05  add esp, 0x1c
    X86_AT(c, 0xc7f05u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_c7f08:
    X86_TICK(c, 20);
    // 0c7f08  pop edi
    X86_AT(c, 0xc7f08u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7f09  leave 
    X86_AT(c, 0xc7f09u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c7f0a  ret 
    X86_AT(c, 0xc7f0au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7e94u, "ran off the end of a function");
}
void f_000c7f0c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0c7f0c  push ebp
    X86_AT(c, 0xc7f0cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c7f0d  mov ebp, esp
    X86_AT(c, 0xc7f0du);
    c.r[5] = c.r[4];
    // 0c7f0f  push edi
    X86_AT(c, 0xc7f0fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7f10  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xc7f10u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c7f13  cmp edx, 3
    X86_AT(c, 0xc7f13u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c7f16  ja 0xc7f4a
    X86_AT(c, 0xc7f16u);
    if (x86_cc(c, 7)) { goto L_c7f4a; }
    X86_TICK(c, 7);
    // 0c7f18  jmp dword ptr cs:[edx*4 + 0xc7f20]
    X86_AT(c, 0xc7f18u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC7F20u)));
      switch (t) {
      case 0xc7f30u: goto L_c7f30;
      case 0xc7f37u: goto L_c7f37;
      case 0xc7f3eu: goto L_c7f3e;
      case 0xc7f45u: goto L_c7f45;
      default: x86_jump(c, t); return; } }
L_c7f30:
    X86_TICK(c, 9);
    // 0c7f30  mov edi, 0xa
    X86_AT(c, 0xc7f30u);
    c.r[7] = 0xAu;
    // 0c7f35  jmp 0xc7f4a
    X86_AT(c, 0xc7f35u);
    goto L_c7f4a;
L_c7f37:
    X86_TICK(c, 9);
    // 0c7f37  mov edi, 0xb
    X86_AT(c, 0xc7f37u);
    c.r[7] = 0xBu;
    // 0c7f3c  jmp 0xc7f4a
    X86_AT(c, 0xc7f3cu);
    goto L_c7f4a;
L_c7f3e:
    X86_TICK(c, 9);
    // 0c7f3e  mov edi, 0xc
    X86_AT(c, 0xc7f3eu);
    c.r[7] = 0xCu;
    // 0c7f43  jmp 0xc7f4a
    X86_AT(c, 0xc7f43u);
    goto L_c7f4a;
L_c7f45:
    X86_TICK(c, 2);
    // 0c7f45  mov edi, 0xd
    X86_AT(c, 0xc7f45u);
    c.r[7] = 0xDu;
L_c7f4a:
    X86_TICK(c, 17);
    // 0c7f4a  push 2
    X86_AT(c, 0xc7f4au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c7f4c  push 0x1f
    X86_AT(c, 0xc7f4cu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c7f4e  push 0
    X86_AT(c, 0xc7f4eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7f50  push 0
    X86_AT(c, 0xc7f50u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7f52  push edi
    X86_AT(c, 0xc7f52u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7f53  call 0xbc1c0
    X86_AT(c, 0xc7f53u);
    push32(c, 0xc7f58u); x86_call_known(c, 0xbc1c0u, f_000bc1c0); X86_RET(c, 0xc7f58u);
    X86_TICK(c, 22);
    // 0c7f58  add esp, 0x14
    X86_AT(c, 0xc7f58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c7f5b  pop edi
    X86_AT(c, 0xc7f5bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7f5c  leave 
    X86_AT(c, 0xc7f5cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c7f5d  ret 
    X86_AT(c, 0xc7f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7f0cu, "ran off the end of a function");
}
void f_000c7f60(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c7f60  push ebp
    X86_AT(c, 0xc7f60u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c7f61  mov ebp, esp
    X86_AT(c, 0xc7f61u);
    c.r[5] = c.r[4];
    // 0c7f63  sub esp, 8
    X86_AT(c, 0xc7f63u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c7f66  push ebx
    X86_AT(c, 0xc7f66u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7f67  push esi
    X86_AT(c, 0xc7f67u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c7f68  push edi
    X86_AT(c, 0xc7f68u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7f69  push 7
    X86_AT(c, 0xc7f69u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7f6b  call 0xbb6b0
    X86_AT(c, 0xc7f6bu);
    push32(c, 0xc7f70u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc7f70u);
    X86_TICK(c, 14);
    // 0c7f70  add esp, 4
    X86_AT(c, 0xc7f70u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7f73  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc7f73u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c7f7d  je 0xc7fa6
    X86_AT(c, 0xc7f7du);
    if (x86_cc(c, 4)) { goto L_c7fa6; }
    X86_TICK(c, 9);
    // 0c7f7f  push 3
    X86_AT(c, 0xc7f7fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7f81  call 0xb607c
    X86_AT(c, 0xc7f81u);
    push32(c, 0xc7f86u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc7f86u);
    X86_TICK(c, 11);
    // 0c7f86  push 0x5ec8
    X86_AT(c, 0xc7f86u);
    { uint32_t v = 0x5EC8u; push32(c, v); }
    // 0c7f8b  push 7
    X86_AT(c, 0xc7f8bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7f8d  call 0xba428
    X86_AT(c, 0xc7f8du);
    push32(c, 0xc7f92u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7f92u);
    X86_TICK(c, 9);
    // 0c7f92  push 7
    X86_AT(c, 0xc7f92u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7f94  call 0xbbb5c
    X86_AT(c, 0xc7f94u);
    push32(c, 0xc7f99u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7f99u);
    X86_TICK(c, 11);
    // 0c7f99  mov eax, 0xffffffff
    X86_AT(c, 0xc7f99u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c7f9e  add esp, 0x10
    X86_AT(c, 0xc7f9eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c7fa1  jmp 0xc80eb
    X86_AT(c, 0xc7fa1u);
    goto L_c80eb;
L_c7fa6:
    X86_TICK(c, 9);
    // 0c7fa6  push 7
    X86_AT(c, 0xc7fa6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7fa8  call 0xb7068
    X86_AT(c, 0xc7fa8u);
    push32(c, 0xc7fadu); x86_call_known(c, 0xb7068u, f_000b7068); X86_RET(c, 0xc7fadu);
    X86_TICK(c, 12);
    // 0c7fad  xchg esi, eax
    X86_AT(c, 0xc7fadu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c7fae  add esp, 4
    X86_AT(c, 0xc7faeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7fb1  cmp esi, 0xffffffff
    X86_AT(c, 0xc7fb1u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c7fb4  jne 0xc7fd6
    X86_AT(c, 0xc7fb4u);
    if (x86_cc(c, 5)) { goto L_c7fd6; }
    X86_TICK(c, 11);
    // 0c7fb6  push 0x5eec
    X86_AT(c, 0xc7fb6u);
    { uint32_t v = 0x5EECu; push32(c, v); }
    // 0c7fbb  push 7
    X86_AT(c, 0xc7fbbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7fbd  call 0xba428
    X86_AT(c, 0xc7fbdu);
    push32(c, 0xc7fc2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc7fc2u);
    X86_TICK(c, 9);
    // 0c7fc2  push 7
    X86_AT(c, 0xc7fc2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7fc4  call 0xbbb5c
    X86_AT(c, 0xc7fc4u);
    push32(c, 0xc7fc9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc7fc9u);
    X86_TICK(c, 11);
    // 0c7fc9  mov eax, 0xffffffff
    X86_AT(c, 0xc7fc9u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c7fce  add esp, 0xc
    X86_AT(c, 0xc7fceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c7fd1  jmp 0xc80eb
    X86_AT(c, 0xc7fd1u);
    goto L_c80eb;
L_c7fd6:
    X86_TICK(c, 9);
    // 0c7fd6  push 5
    X86_AT(c, 0xc7fd6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7fd8  call 0xb607c
    X86_AT(c, 0xc7fd8u);
    push32(c, 0xc7fddu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc7fddu);
    X86_TICK(c, 32);
    // 0c7fdd  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xc7fddu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0c7fe2  mov edx, dword ptr [eax*4 + 0xa49f5]
    X86_AT(c, 0xc7fe2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA49F5u)));
    // 0c7fe9  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc7fe9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c7fec  mov eax, dword ptr [eax*4 + 0xa4a05]
    X86_AT(c, 0xc7fecu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA4A05u)));
    // 0c7ff3  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc7ff3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c7ff6  mov ebx, dword ptr [0x458a8]
    X86_AT(c, 0xc7ff6u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x458A8u)));
    // 0c7ffc  inc dword ptr [0x458a8]
    X86_AT(c, 0xc7ffcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x458A8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c8002  lea eax, [ebx + ebx*2]
    X86_AT(c, 0xc8002u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 2);
    // 0c8005  mov dword ptr [eax*4 + 0x458b4], 0x8b
    X86_AT(c, 0xc8005u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Bu);
    // 0c8010  add esp, 4
    X86_AT(c, 0xc8010u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c8013:
    X86_TICK(c, 19);
    // 0c8013  push 1
    X86_AT(c, 0xc8013u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c8015  push esi
    X86_AT(c, 0xc8015u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8016  lea eax, [ebp - 8]
    X86_AT(c, 0xc8016u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c8019  push eax
    X86_AT(c, 0xc8019u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c801a  lea ecx, [ebp - 4]
    X86_AT(c, 0xc801au);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c801d  push ecx
    X86_AT(c, 0xc801du);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c801e  call 0xc731c
    X86_AT(c, 0xc801eu);
    push32(c, 0xc8023u); x86_call_known(c, 0xc731cu, f_000c731c); X86_RET(c, 0xc8023u);
    X86_TICK(c, 17);
    // 0c8023  push dword ptr [ebp - 8]
    X86_AT(c, 0xc8023u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c8026  push dword ptr [ebp - 4]
    X86_AT(c, 0xc8026u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c8029  call 0xc80f0
    X86_AT(c, 0xc8029u);
    push32(c, 0xc802eu); x86_call_known(c, 0xc80f0u, f_000c80f0); X86_RET(c, 0xc802eu);
    X86_TICK(c, 26);
    // 0c802e  xchg edi, eax
    X86_AT(c, 0xc802eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c802f  lea eax, [ebx + ebx*2]
    X86_AT(c, 0xc802fu);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 2);
    // 0c8032  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xc8032u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c8035  mov dword ptr [eax*4 + 0x458ac], edx
    X86_AT(c, 0xc8035u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458ACu)), c.r[2]);
    // 0c803c  mov ecx, dword ptr [ebp - 8]
    X86_AT(c, 0xc803cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c803f  mov dword ptr [eax*4 + 0x458b0], ecx
    X86_AT(c, 0xc803fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B0u)), c.r[1]);
    // 0c8046  add esp, 0x18
    X86_AT(c, 0xc8046u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c8049  and edx, edx
    X86_AT(c, 0xc8049u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0c804b  jl 0xc805b
    X86_AT(c, 0xc804bu);
    if (x86_cc(c, 12)) { goto L_c805b; }
    X86_TICK(c, 7);
    // 0c804d  cmp edx, 0xa
    X86_AT(c, 0xc804du);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0c8050  jg 0xc805b
    X86_AT(c, 0xc8050u);
    if (x86_cc(c, 15)) { goto L_c805b; }
    X86_TICK(c, 7);
    // 0c8052  and ecx, ecx
    X86_AT(c, 0xc8052u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0c8054  jl 0xc805b
    X86_AT(c, 0xc8054u);
    if (x86_cc(c, 12)) { goto L_c805b; }
    X86_TICK(c, 7);
    // 0c8056  cmp ecx, 0xa
    X86_AT(c, 0xc8056u);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 0c8059  jle 0xc8073
    X86_AT(c, 0xc8059u);
    if (x86_cc(c, 14)) { goto L_c8073; }
L_c805b:
    X86_TICK(c, 15);
    // 0c805b  lea eax, [ebx + ebx*2]
    X86_AT(c, 0xc805bu);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 2);
    // 0c805e  mov edx, 0xffffffff
    X86_AT(c, 0xc805eu);
    c.r[2] = 0xFFFFFFFFu;
    // 0c8063  mov dword ptr [eax*4 + 0x458ac], edx
    X86_AT(c, 0xc8063u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458ACu)), c.r[2]);
    // 0c806a  mov dword ptr [eax*4 + 0x458b0], edx
    X86_AT(c, 0xc806au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B0u)), c.r[2]);
    // 0c8071  jmp 0xc80bb
    X86_AT(c, 0xc8071u);
    goto L_c80bb;
L_c8073:
    X86_TICK(c, 9);
    // 0c8073  push 0
    X86_AT(c, 0xc8073u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c8075  call 0xbdea8
    X86_AT(c, 0xc8075u);
    push32(c, 0xc807au); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xc807au);
    X86_TICK(c, 9);
    // 0c807a  add esp, 4
    X86_AT(c, 0xc807au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c807d  cmp edi, 0xffffffff
    X86_AT(c, 0xc807du);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c8080  je 0xc8013
    X86_AT(c, 0xc8080u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc8013u); goto L_c8013; }
    X86_TICK(c, 9);
    // 0c8082  push 0xffffffff
    X86_AT(c, 0xc8082u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c8084  call 0xb7f6c
    X86_AT(c, 0xc8084u);
    push32(c, 0xc8089u); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xc8089u);
    X86_TICK(c, 14);
    // 0c8089  push dword ptr [ebp + 8]
    X86_AT(c, 0xc8089u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c808c  push edi
    X86_AT(c, 0xc808cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c808d  call 0xc7d2c
    X86_AT(c, 0xc808du);
    push32(c, 0xc8092u); x86_call_known(c, 0xc7d2cu, f_000c7d2c); X86_RET(c, 0xc8092u);
    X86_TICK(c, 9);
    // 0c8092  push 0xffffffff
    X86_AT(c, 0xc8092u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c8094  call 0xb7f6c
    X86_AT(c, 0xc8094u);
    push32(c, 0xc8099u); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xc8099u);
    X86_TICK(c, 9);
    // 0c8099  push 0
    X86_AT(c, 0xc8099u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c809b  call 0xbdea8
    X86_AT(c, 0xc809bu);
    push32(c, 0xc80a0u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xc80a0u);
    X86_TICK(c, 14);
    // 0c80a0  add esp, 0x14
    X86_AT(c, 0xc80a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c80a3  cmp dword ptr [edi*4 + 0xa49b5], 0
    X86_AT(c, 0xc80a3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u))), 0x0u, 0, 4);
    // 0c80ab  jne 0xc80b7
    X86_AT(c, 0xc80abu);
    if (x86_cc(c, 5)) { goto L_c80b7; }
    X86_TICK(c, 9);
    // 0c80ad  push 1
    X86_AT(c, 0xc80adu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c80af  call 0xc797c
    X86_AT(c, 0xc80afu);
    push32(c, 0xc80b4u); x86_call_known(c, 0xc797cu, f_000c797c); X86_RET(c, 0xc80b4u);
    X86_TICK(c, 2);
    // 0c80b4  add esp, 4
    X86_AT(c, 0xc80b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c80b7:
    X86_TICK(c, 9);
    // 0c80b7  mov eax, edi
    X86_AT(c, 0xc80b7u);
    c.r[0] = c.r[7];
    // 0c80b9  jmp 0xc80eb
    X86_AT(c, 0xc80b9u);
    goto L_c80eb;
L_c80bb:
    X86_TICK(c, 9);
    // 0c80bb  push 0xffffffff
    X86_AT(c, 0xc80bbu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c80bd  call 0xb7f6c
    X86_AT(c, 0xc80bdu);
    push32(c, 0xc80c2u); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xc80c2u);
    X86_TICK(c, 9);
    // 0c80c2  push 0
    X86_AT(c, 0xc80c2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c80c4  call 0xbdea8
    X86_AT(c, 0xc80c4u);
    push32(c, 0xc80c9u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xc80c9u);
    X86_TICK(c, 9);
    // 0c80c9  push 7
    X86_AT(c, 0xc80c9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c80cb  call 0xbb6b0
    X86_AT(c, 0xc80cbu);
    push32(c, 0xc80d0u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc80d0u);
    X86_TICK(c, 11);
    // 0c80d0  push 0x5f04
    X86_AT(c, 0xc80d0u);
    { uint32_t v = 0x5F04u; push32(c, v); }
    // 0c80d5  push 7
    X86_AT(c, 0xc80d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c80d7  call 0xba428
    X86_AT(c, 0xc80d7u);
    push32(c, 0xc80dcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc80dcu);
    X86_TICK(c, 9);
    // 0c80dc  push 7
    X86_AT(c, 0xc80dcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c80de  call 0xbbb5c
    X86_AT(c, 0xc80deu);
    push32(c, 0xc80e3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc80e3u);
    X86_TICK(c, 4);
    // 0c80e3  mov eax, 0xffffffff
    X86_AT(c, 0xc80e3u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c80e8  add esp, 0x18
    X86_AT(c, 0xc80e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c80eb:
    X86_TICK(c, 28);
    // 0c80eb  pop edi
    X86_AT(c, 0xc80ebu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c80ec  pop esi
    X86_AT(c, 0xc80ecu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c80ed  pop ebx
    X86_AT(c, 0xc80edu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c80ee  leave 
    X86_AT(c, 0xc80eeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c80ef  ret 
    X86_AT(c, 0xc80efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7f60u, "ran off the end of a function");
}
void f_000c80eb(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0c80eb  pop edi
    X86_AT(c, 0xc80ebu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c80ec  pop esi
    X86_AT(c, 0xc80ecu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c80ed  pop ebx
    X86_AT(c, 0xc80edu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c80ee  leave 
    X86_AT(c, 0xc80eeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c80ef  ret 
    X86_AT(c, 0xc80efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc80ebu, "ran off the end of a function");
}
void f_000c80f0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0c80f0  push ebp
    X86_AT(c, 0xc80f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c80f1  mov ebp, esp
    X86_AT(c, 0xc80f1u);
    c.r[5] = c.r[4];
    // 0c80f3  push edi
    X86_AT(c, 0xc80f3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c80f4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc80f4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c80f7  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc80f7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c80fa  sub ecx, ecx
    X86_AT(c, 0xc80fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_c80fc:
    X86_TICK(c, 7);
    // 0c80fc  cmp ecx, 8
    X86_AT(c, 0xc80fcu);
    (void)x86_sub(c, c.r[1], 0x8u, 0, 4);
    // 0c80ff  jge 0xc8124
    X86_AT(c, 0xc80ffu);
    if (x86_cc(c, 13)) { goto L_c8124; }
    X86_TICK(c, 12);
    // 0c8101  cmp dword ptr [ecx*4 + 0xa49b5], 0
    X86_AT(c, 0xc8101u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xA49B5u))), 0x0u, 0, 4);
    // 0c8109  je 0xc8121
    X86_AT(c, 0xc8109u);
    if (x86_cc(c, 4)) { goto L_c8121; }
    X86_TICK(c, 11);
    // 0c810b  cmp edi, dword ptr [ecx*4 + 0xa4935]
    X86_AT(c, 0xc810bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xA4935u))), 0, 4);
    // 0c8112  jne 0xc8121
    X86_AT(c, 0xc8112u);
    if (x86_cc(c, 5)) { goto L_c8121; }
    X86_TICK(c, 11);
    // 0c8114  cmp edx, dword ptr [ecx*4 + 0xa4955]
    X86_AT(c, 0xc8114u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xA4955u))), 0, 4);
    // 0c811b  jne 0xc8121
    X86_AT(c, 0xc811bu);
    if (x86_cc(c, 5)) { goto L_c8121; }
    X86_TICK(c, 9);
    // 0c811d  mov eax, ecx
    X86_AT(c, 0xc811du);
    c.r[0] = c.r[1];
    // 0c811f  jmp 0xc8129
    X86_AT(c, 0xc811fu);
    goto L_c8129;
L_c8121:
    X86_TICK(c, 9);
    // 0c8121  inc ecx
    X86_AT(c, 0xc8121u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c8122  jmp 0xc80fc
    X86_AT(c, 0xc8122u);
    X86_POLL(c, 0xc80fcu); goto L_c80fc;
L_c8124:
    X86_TICK(c, 2);
    // 0c8124  mov eax, 0xffffffff
    X86_AT(c, 0xc8124u);
    c.r[0] = 0xFFFFFFFFu;
L_c8129:
    X86_TICK(c, 20);
    // 0c8129  pop edi
    X86_AT(c, 0xc8129u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c812a  leave 
    X86_AT(c, 0xc812au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c812b  ret 
    X86_AT(c, 0xc812bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc80f0u, "ran off the end of a function");
}
void f_000c812c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0c812c  push ebx
    X86_AT(c, 0xc812cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c812d  push esi
    X86_AT(c, 0xc812du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c812e  push edi
    X86_AT(c, 0xc812eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c812f  push 0
    X86_AT(c, 0xc812fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c8131  call 0xba6b4
    X86_AT(c, 0xc8131u);
    push32(c, 0xc8136u); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xc8136u);
    X86_TICK(c, 7);
    // 0c8136  call 0xc59c4
    X86_AT(c, 0xc8136u);
    push32(c, 0xc813bu); x86_call_known(c, 0xc59c4u, f_000c59c4); X86_RET(c, 0xc813bu);
    X86_TICK(c, 2);
    // 0c813b  add esp, 4
    X86_AT(c, 0xc813bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c813e:
    X86_TICK(c, 9);
    // 0c813e  push 0xa
    X86_AT(c, 0xc813eu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c8140  call 0xb61b4
    X86_AT(c, 0xc8140u);
    push32(c, 0xc8145u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc8145u);
    X86_TICK(c, 12);
    // 0c8145  xchg edi, eax
    X86_AT(c, 0xc8145u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c8146  push 0xa
    X86_AT(c, 0xc8146u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c8148  call 0xb61b4
    X86_AT(c, 0xc8148u);
    push32(c, 0xc814du); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc814du);
    X86_TICK(c, 19);
    // 0c814d  xchg esi, eax
    X86_AT(c, 0xc814du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c814e  push esi
    X86_AT(c, 0xc814eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c814f  push edi
    X86_AT(c, 0xc814fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8150  push dword ptr [0xa4a52]
    X86_AT(c, 0xc8150u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A52u))); push32(c, v); }
    // 0c8156  call 0xc6038
    X86_AT(c, 0xc8156u);
    push32(c, 0xc815bu); x86_call_known(c, 0xc6038u, f_000c6038); X86_RET(c, 0xc815bu);
    X86_TICK(c, 12);
    // 0c815b  xchg ebx, eax
    X86_AT(c, 0xc815bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c815c  add esp, 0x14
    X86_AT(c, 0xc815cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c815f  and ebx, ebx
    X86_AT(c, 0xc815fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0c8161  je 0xc8172
    X86_AT(c, 0xc8161u);
    if (x86_cc(c, 4)) { goto L_c8172; }
    X86_TICK(c, 7);
    // 0c8163  cmp ebx, 0xf
    X86_AT(c, 0xc8163u);
    (void)x86_sub(c, c.r[3], 0xFu, 0, 4);
    // 0c8166  je 0xc8172
    X86_AT(c, 0xc8166u);
    if (x86_cc(c, 4)) { goto L_c8172; }
    X86_TICK(c, 7);
    // 0c8168  cmp ebx, 0xe
    X86_AT(c, 0xc8168u);
    (void)x86_sub(c, c.r[3], 0xEu, 0, 4);
    // 0c816b  je 0xc8172
    X86_AT(c, 0xc816bu);
    if (x86_cc(c, 4)) { goto L_c8172; }
    X86_TICK(c, 7);
    // 0c816d  cmp ebx, 0x10
    X86_AT(c, 0xc816du);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0c8170  jne 0xc813e
    X86_AT(c, 0xc8170u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc813eu); goto L_c813e; }
L_c8172:
    X86_TICK(c, 13);
    // 0c8172  mov dword ptr [0xa4a6e], edi
    X86_AT(c, 0xc8172u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Eu)), c.r[7]);
    // 0c8178  mov dword ptr [0xa4a72], esi
    X86_AT(c, 0xc8178u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A72u)), c.r[6]);
    // 0c817e  push 7
    X86_AT(c, 0xc817eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8180  call 0xbb6b0
    X86_AT(c, 0xc8180u);
    push32(c, 0xc8185u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc8185u);
    X86_TICK(c, 11);
    // 0c8185  push 0x5f1c
    X86_AT(c, 0xc8185u);
    { uint32_t v = 0x5F1Cu; push32(c, v); }
    // 0c818a  push 7
    X86_AT(c, 0xc818au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c818c  call 0xba428
    X86_AT(c, 0xc818cu);
    push32(c, 0xc8191u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8191u);
    X86_TICK(c, 9);
    // 0c8191  push 7
    X86_AT(c, 0xc8191u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8193  call 0xbbb5c
    X86_AT(c, 0xc8193u);
    push32(c, 0xc8198u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8198u);
    X86_TICK(c, 9);
    // 0c8198  push 2
    X86_AT(c, 0xc8198u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c819a  call 0xba6b4
    X86_AT(c, 0xc819au);
    push32(c, 0xc819fu); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xc819fu);
    X86_TICK(c, 24);
    // 0c819f  add esp, 0x14
    X86_AT(c, 0xc819fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c81a2  pop edi
    X86_AT(c, 0xc81a2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c81a3  pop esi
    X86_AT(c, 0xc81a3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c81a4  pop ebx
    X86_AT(c, 0xc81a4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c81a5  ret 
    X86_AT(c, 0xc81a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc812cu, "ran off the end of a function");
}
void f_000c81a8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c81a8  push 7
    X86_AT(c, 0xc81a8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c81aa  call 0xbb6b0
    X86_AT(c, 0xc81aau);
    push32(c, 0xc81afu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc81afu);
    X86_TICK(c, 14);
    // 0c81af  add esp, 4
    X86_AT(c, 0xc81afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c81b2  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc81b2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c81bc  je 0xc81cc
    X86_AT(c, 0xc81bcu);
    if (x86_cc(c, 4)) { goto L_c81cc; }
    X86_TICK(c, 9);
    // 0c81be  push 3
    X86_AT(c, 0xc81beu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c81c0  call 0xb607c
    X86_AT(c, 0xc81c0u);
    push32(c, 0xc81c5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc81c5u);
    X86_TICK(c, 9);
    // 0c81c5  push 0x5f44
    X86_AT(c, 0xc81c5u);
    { uint32_t v = 0x5F44u; push32(c, v); }
    // 0c81ca  jmp 0xc821f
    X86_AT(c, 0xc81cau);
    goto L_c821f;
L_c81cc:
    X86_TICK(c, 12);
    // 0c81cc  cmp word ptr [0xabf80], 0
    X86_AT(c, 0xc81ccu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xABF80u))), 0x0u, 0, 2);
    // 0c81d4  jne 0xc81e4
    X86_AT(c, 0xc81d4u);
    if (x86_cc(c, 5)) { goto L_c81e4; }
    X86_TICK(c, 9);
    // 0c81d6  push 3
    X86_AT(c, 0xc81d6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c81d8  call 0xb607c
    X86_AT(c, 0xc81d8u);
    push32(c, 0xc81ddu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc81ddu);
    X86_TICK(c, 9);
    // 0c81dd  push 0x5f68
    X86_AT(c, 0xc81ddu);
    { uint32_t v = 0x5F68u; push32(c, v); }
    // 0c81e2  jmp 0xc821f
    X86_AT(c, 0xc81e2u);
    goto L_c821f;
L_c81e4:
    X86_TICK(c, 12);
    // 0c81e4  cmp byte ptr [0xa4934], 0x90
    X86_AT(c, 0xc81e4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4934u))), 0x90u, 0, 1);
    // 0c81eb  je 0xc81fb
    X86_AT(c, 0xc81ebu);
    if (x86_cc(c, 4)) { goto L_c81fb; }
    X86_TICK(c, 9);
    // 0c81ed  push 3
    X86_AT(c, 0xc81edu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c81ef  call 0xb607c
    X86_AT(c, 0xc81efu);
    push32(c, 0xc81f4u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc81f4u);
    X86_TICK(c, 9);
    // 0c81f4  push 0x5f90
    X86_AT(c, 0xc81f4u);
    { uint32_t v = 0x5F90u; push32(c, v); }
    // 0c81f9  jmp 0xc821f
    X86_AT(c, 0xc81f9u);
    goto L_c821f;
L_c81fb:
    X86_TICK(c, 11);
    // 0c81fb  mov word ptr [0xabf80], 0
    X86_AT(c, 0xc81fbu);
    wr16((c.sbase[3] + (uint32_t)(0xABF80u)), 0x0u);
    // 0c8204  push 0xa
    X86_AT(c, 0xc8204u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c8206  call 0xb61b4
    X86_AT(c, 0xc8206u);
    push32(c, 0xc820bu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc820bu);
    X86_TICK(c, 9);
    // 0c820b  add esp, 4
    X86_AT(c, 0xc820bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c820e  cmp eax, 5
    X86_AT(c, 0xc820eu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c8211  jge 0xc8232
    X86_AT(c, 0xc8211u);
    if (x86_cc(c, 13)) { goto L_c8232; }
    X86_TICK(c, 9);
    // 0c8213  push 3
    X86_AT(c, 0xc8213u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8215  call 0xb607c
    X86_AT(c, 0xc8215u);
    push32(c, 0xc821au); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc821au);
    X86_TICK(c, 2);
    // 0c821a  push 0x5fb0
    X86_AT(c, 0xc821au);
    { uint32_t v = 0x5FB0u; push32(c, v); }
L_c821f:
    X86_TICK(c, 9);
    // 0c821f  push 7
    X86_AT(c, 0xc821fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8221  call 0xba428
    X86_AT(c, 0xc8221u);
    push32(c, 0xc8226u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8226u);
    X86_TICK(c, 9);
    // 0c8226  push 7
    X86_AT(c, 0xc8226u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8228  call 0xbbb5c
    X86_AT(c, 0xc8228u);
    push32(c, 0xc822du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc822du);
    X86_TICK(c, 9);
    // 0c822d  add esp, 0x10
    X86_AT(c, 0xc822du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8230  jmp 0xc824a
    X86_AT(c, 0xc8230u);
    goto L_c824a;
L_c8232:
    X86_TICK(c, 9);
    // 0c8232  push 5
    X86_AT(c, 0xc8232u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8234  call 0xb607c
    X86_AT(c, 0xc8234u);
    push32(c, 0xc8239u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8239u);
    X86_TICK(c, 9);
    // 0c8239  push 6
    X86_AT(c, 0xc8239u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c823b  call 0xbebbc
    X86_AT(c, 0xc823bu);
    push32(c, 0xc8240u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8240u);
    X86_TICK(c, 9);
    // 0c8240  push 0xffffffff
    X86_AT(c, 0xc8240u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c8242  call 0xc7cdc
    X86_AT(c, 0xc8242u);
    push32(c, 0xc8247u); x86_call_known(c, 0xc7cdcu, f_000c7cdc); X86_RET(c, 0xc8247u);
    X86_TICK(c, 2);
    // 0c8247  add esp, 0xc
    X86_AT(c, 0xc8247u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c824a:
    X86_TICK(c, 10);
    // 0c824a  ret 
    X86_AT(c, 0xc824au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc81a8u, "ran off the end of a function");
}
void f_000c824c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0c824c  push edi
    X86_AT(c, 0xc824cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c824d  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc824du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c8257  je 0xc8278
    X86_AT(c, 0xc8257u);
    if (x86_cc(c, 4)) { goto L_c8278; }
    X86_TICK(c, 9);
    // 0c8259  push 3
    X86_AT(c, 0xc8259u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c825b  call 0xb607c
    X86_AT(c, 0xc825bu);
    push32(c, 0xc8260u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8260u);
    X86_TICK(c, 11);
    // 0c8260  push 0x5fe0
    X86_AT(c, 0xc8260u);
    { uint32_t v = 0x5FE0u; push32(c, v); }
    // 0c8265  push 7
    X86_AT(c, 0xc8265u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8267  call 0xba428
    X86_AT(c, 0xc8267u);
    push32(c, 0xc826cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc826cu);
    X86_TICK(c, 9);
    // 0c826c  push 7
    X86_AT(c, 0xc826cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c826e  call 0xbbb5c
    X86_AT(c, 0xc826eu);
    push32(c, 0xc8273u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8273u);
    X86_TICK(c, 9);
    // 0c8273  add esp, 0x10
    X86_AT(c, 0xc8273u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8276  jmp 0xc829d
    X86_AT(c, 0xc8276u);
    goto L_c829d;
L_c8278:
    X86_TICK(c, 9);
    // 0c8278  push 0x28
    X86_AT(c, 0xc8278u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c827a  call 0xb61b4
    X86_AT(c, 0xc827au);
    push32(c, 0xc827fu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc827fu);
    X86_TICK(c, 12);
    // 0c827f  xchg edi, eax
    X86_AT(c, 0xc827fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c8280  add esp, 4
    X86_AT(c, 0xc8280u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c8283  cmp edi, 0x10
    X86_AT(c, 0xc8283u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0c8286  jge 0xc828d
    X86_AT(c, 0xc8286u);
    if (x86_cc(c, 13)) { goto L_c828d; }
    X86_TICK(c, 2);
    // 0c8288  mov edi, 0x10
    X86_AT(c, 0xc8288u);
    c.r[7] = 0x10u;
L_c828d:
    X86_TICK(c, 9);
    // 0c828d  push 0xa
    X86_AT(c, 0xc828du);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c828f  call 0xb607c
    X86_AT(c, 0xc828fu);
    push32(c, 0xc8294u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8294u);
    X86_TICK(c, 9);
    // 0c8294  push edi
    X86_AT(c, 0xc8294u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8295  call 0xc7f60
    X86_AT(c, 0xc8295u);
    push32(c, 0xc829au); x86_call_known(c, 0xc7f60u, f_000c7f60); X86_RET(c, 0xc829au);
    X86_TICK(c, 2);
    // 0c829a  add esp, 8
    X86_AT(c, 0xc829au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c829d:
    X86_TICK(c, 14);
    // 0c829d  pop edi
    X86_AT(c, 0xc829du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c829e  ret 
    X86_AT(c, 0xc829eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc824cu, "ran off the end of a function");
}
void f_000c82a0(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c82a0  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xc82a0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0c82a7  je 0xc82c8
    X86_AT(c, 0xc82a7u);
    if (x86_cc(c, 4)) { goto L_c82c8; }
    X86_TICK(c, 9);
    // 0c82a9  push 3
    X86_AT(c, 0xc82a9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c82ab  call 0xb607c
    X86_AT(c, 0xc82abu);
    push32(c, 0xc82b0u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc82b0u);
    X86_TICK(c, 11);
    // 0c82b0  push 0x6004
    X86_AT(c, 0xc82b0u);
    { uint32_t v = 0x6004u; push32(c, v); }
    // 0c82b5  push 7
    X86_AT(c, 0xc82b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c82b7  call 0xba428
    X86_AT(c, 0xc82b7u);
    push32(c, 0xc82bcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc82bcu);
    X86_TICK(c, 9);
    // 0c82bc  push 7
    X86_AT(c, 0xc82bcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c82be  call 0xbbb5c
    X86_AT(c, 0xc82beu);
    push32(c, 0xc82c3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc82c3u);
    X86_TICK(c, 9);
    // 0c82c3  add esp, 0x10
    X86_AT(c, 0xc82c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c82c6  jmp 0xc82e3
    X86_AT(c, 0xc82c6u);
    goto L_c82e3;
L_c82c8:
    X86_TICK(c, 9);
    // 0c82c8  push 5
    X86_AT(c, 0xc82c8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c82ca  call 0xb607c
    X86_AT(c, 0xc82cau);
    push32(c, 0xc82cfu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc82cfu);
    X86_TICK(c, 9);
    // 0c82cf  push 5
    X86_AT(c, 0xc82cfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c82d1  call 0xbebbc
    X86_AT(c, 0xc82d1u);
    push32(c, 0xc82d6u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc82d6u);
    X86_TICK(c, 4);
    // 0c82d6  mov dword ptr [0xa4a9a], 0x30
    X86_AT(c, 0xc82d6u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A9Au)), 0x30u);
    // 0c82e0  add esp, 8
    X86_AT(c, 0xc82e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c82e3:
    X86_TICK(c, 10);
    // 0c82e3  ret 
    X86_AT(c, 0xc82e3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc82a0u, "ran off the end of a function");
}
void f_000c82e4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c82e4  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xc82e4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0c82eb  je 0xc82fb
    X86_AT(c, 0xc82ebu);
    if (x86_cc(c, 4)) { goto L_c82fb; }
    X86_TICK(c, 9);
    // 0c82ed  push 3
    X86_AT(c, 0xc82edu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c82ef  call 0xb607c
    X86_AT(c, 0xc82efu);
    push32(c, 0xc82f4u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc82f4u);
    X86_TICK(c, 9);
    // 0c82f4  push 0x6028
    X86_AT(c, 0xc82f4u);
    { uint32_t v = 0x6028u; push32(c, v); }
    // 0c82f9  jmp 0xc8321
    X86_AT(c, 0xc82f9u);
    goto L_c8321;
L_c82fb:
    X86_TICK(c, 9);
    // 0c82fb  push 5
    X86_AT(c, 0xc82fbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c82fd  call 0xb607c
    X86_AT(c, 0xc82fdu);
    push32(c, 0xc8302u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8302u);
    X86_TICK(c, 9);
    // 0c8302  push 2
    X86_AT(c, 0xc8302u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c8304  call 0xbebbc
    X86_AT(c, 0xc8304u);
    push32(c, 0xc8309u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8309u);
    X86_TICK(c, 14);
    // 0c8309  add esp, 8
    X86_AT(c, 0xc8309u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c830c  cmp dword ptr [0xa4a52], 8
    X86_AT(c, 0xc830cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A52u))), 0x8u, 0, 4);
    // 0c8313  jl 0xc8334
    X86_AT(c, 0xc8313u);
    if (x86_cc(c, 12)) { goto L_c8334; }
    X86_TICK(c, 9);
    // 0c8315  push 3
    X86_AT(c, 0xc8315u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8317  call 0xb607c
    X86_AT(c, 0xc8317u);
    push32(c, 0xc831cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc831cu);
    X86_TICK(c, 2);
    // 0c831c  push 0x604c
    X86_AT(c, 0xc831cu);
    { uint32_t v = 0x604Cu; push32(c, v); }
L_c8321:
    X86_TICK(c, 9);
    // 0c8321  push 7
    X86_AT(c, 0xc8321u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8323  call 0xba428
    X86_AT(c, 0xc8323u);
    push32(c, 0xc8328u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8328u);
    X86_TICK(c, 9);
    // 0c8328  push 7
    X86_AT(c, 0xc8328u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c832a  call 0xbbb5c
    X86_AT(c, 0xc832au);
    push32(c, 0xc832fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc832fu);
    X86_TICK(c, 9);
    // 0c832f  add esp, 0x10
    X86_AT(c, 0xc832fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8332  jmp 0xc833f
    X86_AT(c, 0xc8332u);
    goto L_c833f;
L_c8334:
    X86_TICK(c, 13);
    // 0c8334  inc dword ptr [0xa4a52]
    X86_AT(c, 0xc8334u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA4A52u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c833a  call 0xc812c
    X86_AT(c, 0xc833au);
    push32(c, 0xc833fu); x86_call_known(c, 0xc812cu, f_000c812c); X86_RET(c, 0xc833fu);
L_c833f:
    X86_TICK(c, 10);
    // 0c833f  ret 
    X86_AT(c, 0xc833fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc82e4u, "ran off the end of a function");
}
void f_000c8340(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c8340  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xc8340u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0c8347  je 0xc8368
    X86_AT(c, 0xc8347u);
    if (x86_cc(c, 4)) { goto L_c8368; }
    X86_TICK(c, 9);
    // 0c8349  push 3
    X86_AT(c, 0xc8349u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c834b  call 0xb607c
    X86_AT(c, 0xc834bu);
    push32(c, 0xc8350u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8350u);
    X86_TICK(c, 11);
    // 0c8350  push 0x6068
    X86_AT(c, 0xc8350u);
    { uint32_t v = 0x6068u; push32(c, v); }
    // 0c8355  push 7
    X86_AT(c, 0xc8355u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8357  call 0xba428
    X86_AT(c, 0xc8357u);
    push32(c, 0xc835cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc835cu);
    X86_TICK(c, 9);
    // 0c835c  push 7
    X86_AT(c, 0xc835cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c835e  call 0xbbb5c
    X86_AT(c, 0xc835eu);
    push32(c, 0xc8363u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8363u);
    X86_TICK(c, 9);
    // 0c8363  add esp, 0x10
    X86_AT(c, 0xc8363u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8366  jmp 0xc8398
    X86_AT(c, 0xc8366u);
    goto L_c8398;
L_c8368:
    X86_TICK(c, 9);
    // 0c8368  push 5
    X86_AT(c, 0xc8368u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c836a  call 0xb607c
    X86_AT(c, 0xc836au);
    push32(c, 0xc836fu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc836fu);
    X86_TICK(c, 9);
    // 0c836f  push 2
    X86_AT(c, 0xc836fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c8371  call 0xbebbc
    X86_AT(c, 0xc8371u);
    push32(c, 0xc8376u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8376u);
    X86_TICK(c, 20);
    // 0c8376  dec dword ptr [0xa4a52]
    X86_AT(c, 0xc8376u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA4A52u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c837c  add esp, 8
    X86_AT(c, 0xc837cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c837f  cmp dword ptr [0xa4a52], 1
    X86_AT(c, 0xc837fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A52u))), 0x1u, 0, 4);
    // 0c8386  jge 0xc8393
    X86_AT(c, 0xc8386u);
    if (x86_cc(c, 13)) { goto L_c8393; }
    X86_TICK(c, 9);
    // 0c8388  mov word ptr [0xa8a18], 0
    X86_AT(c, 0xc8388u);
    wr16((c.sbase[3] + (uint32_t)(0xA8A18u)), 0x0u);
    // 0c8391  jmp 0xc8398
    X86_AT(c, 0xc8391u);
    goto L_c8398;
L_c8393:
    X86_TICK(c, 7);
    // 0c8393  call 0xc812c
    X86_AT(c, 0xc8393u);
    push32(c, 0xc8398u); x86_call_known(c, 0xc812cu, f_000c812c); X86_RET(c, 0xc8398u);
L_c8398:
    X86_TICK(c, 10);
    // 0c8398  ret 
    X86_AT(c, 0xc8398u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8340u, "ran off the end of a function");
}
void f_000c839c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c839c  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc839cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c83a6  je 0xc83c7
    X86_AT(c, 0xc83a6u);
    if (x86_cc(c, 4)) { goto L_c83c7; }
    X86_TICK(c, 9);
    // 0c83a8  push 3
    X86_AT(c, 0xc83a8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c83aa  call 0xb607c
    X86_AT(c, 0xc83aau);
    push32(c, 0xc83afu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc83afu);
    X86_TICK(c, 11);
    // 0c83af  push 0x608c
    X86_AT(c, 0xc83afu);
    { uint32_t v = 0x608Cu; push32(c, v); }
    // 0c83b4  push 7
    X86_AT(c, 0xc83b4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c83b6  call 0xba428
    X86_AT(c, 0xc83b6u);
    push32(c, 0xc83bbu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc83bbu);
    X86_TICK(c, 9);
    // 0c83bb  push 7
    X86_AT(c, 0xc83bbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c83bd  call 0xbbb5c
    X86_AT(c, 0xc83bdu);
    push32(c, 0xc83c2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc83c2u);
    X86_TICK(c, 9);
    // 0c83c2  add esp, 0x10
    X86_AT(c, 0xc83c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c83c5  jmp 0xc83d8
    X86_AT(c, 0xc83c5u);
    goto L_c83d8;
L_c83c7:
    X86_TICK(c, 9);
    // 0c83c7  push 0xa
    X86_AT(c, 0xc83c7u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c83c9  call 0xb607c
    X86_AT(c, 0xc83c9u);
    push32(c, 0xc83ceu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc83ceu);
    X86_TICK(c, 9);
    // 0c83ce  push 0x4b
    X86_AT(c, 0xc83ceu);
    { uint32_t v = 0x4Bu; push32(c, v); }
    // 0c83d0  call 0xc7f60
    X86_AT(c, 0xc83d0u);
    push32(c, 0xc83d5u); x86_call_known(c, 0xc7f60u, f_000c7f60); X86_RET(c, 0xc83d5u);
    X86_TICK(c, 2);
    // 0c83d5  add esp, 8
    X86_AT(c, 0xc83d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c83d8:
    X86_TICK(c, 10);
    // 0c83d8  ret 
    X86_AT(c, 0xc83d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc839cu, "ran off the end of a function");
}
void f_000c83dc(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0c83dc  push ebx
    X86_AT(c, 0xc83dcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c83dd  push esi
    X86_AT(c, 0xc83ddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c83de  push edi
    X86_AT(c, 0xc83deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c83df  push 2
    X86_AT(c, 0xc83dfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c83e1  call 0xb607c
    X86_AT(c, 0xc83e1u);
    push32(c, 0xc83e6u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc83e6u);
    X86_TICK(c, 14);
    // 0c83e6  add esp, 4
    X86_AT(c, 0xc83e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c83e9  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xc83e9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0c83f0  jne 0xc83fb
    X86_AT(c, 0xc83f0u);
    if (x86_cc(c, 5)) { goto L_c83fb; }
    X86_TICK(c, 12);
    // 0c83f2  cmp byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xc83f2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x82u, 0, 1);
    // 0c83f9  jne 0xc841a
    X86_AT(c, 0xc83f9u);
    if (x86_cc(c, 5)) { goto L_c841a; }
L_c83fb:
    X86_TICK(c, 9);
    // 0c83fb  push 3
    X86_AT(c, 0xc83fbu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c83fd  call 0xb607c
    X86_AT(c, 0xc83fdu);
    push32(c, 0xc8402u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8402u);
    X86_TICK(c, 11);
    // 0c8402  push 0x60b0
    X86_AT(c, 0xc8402u);
    { uint32_t v = 0x60B0u; push32(c, v); }
    // 0c8407  push 7
    X86_AT(c, 0xc8407u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8409  call 0xba428
    X86_AT(c, 0xc8409u);
    push32(c, 0xc840eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc840eu);
    X86_TICK(c, 9);
    // 0c840e  push 7
    X86_AT(c, 0xc840eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8410  call 0xbbb5c
    X86_AT(c, 0xc8410u);
    push32(c, 0xc8415u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8415u);
    X86_TICK(c, 9);
    // 0c8415  add esp, 0x10
    X86_AT(c, 0xc8415u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8418  jmp 0xc846d
    X86_AT(c, 0xc8418u);
    goto L_c846d;
L_c841a:
    X86_TICK(c, 9);
    // 0c841a  push 0x3f
    X86_AT(c, 0xc841au);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0c841c  call 0xb61b4
    X86_AT(c, 0xc841cu);
    push32(c, 0xc8421u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc8421u);
    X86_TICK(c, 12);
    // 0c8421  xchg edi, eax
    X86_AT(c, 0xc8421u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c8422  push 0x3f
    X86_AT(c, 0xc8422u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0c8424  call 0xb61b4
    X86_AT(c, 0xc8424u);
    push32(c, 0xc8429u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc8429u);
    X86_TICK(c, 14);
    // 0c8429  xchg esi, eax
    X86_AT(c, 0xc8429u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c842a  push esi
    X86_AT(c, 0xc842au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c842b  push edi
    X86_AT(c, 0xc842bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c842c  call 0xc8474
    X86_AT(c, 0xc842cu);
    push32(c, 0xc8431u); x86_call_known(c, 0xc8474u, f_000c8474); X86_RET(c, 0xc8431u);
    X86_TICK(c, 12);
    // 0c8431  movzx ebx, al
    X86_AT(c, 0xc8431u);
    c.r[3] = g8(c, 0);
    // 0c8434  add esp, 0x10
    X86_AT(c, 0xc8434u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8437  cmp ebx, 4
    X86_AT(c, 0xc8437u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0c843a  je 0xc8446
    X86_AT(c, 0xc843au);
    if (x86_cc(c, 4)) { goto L_c8446; }
    X86_TICK(c, 7);
    // 0c843c  cmp ebx, 3
    X86_AT(c, 0xc843cu);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0c843f  je 0xc8446
    X86_AT(c, 0xc843fu);
    if (x86_cc(c, 4)) { goto L_c8446; }
    X86_TICK(c, 7);
    // 0c8441  cmp ebx, 2
    X86_AT(c, 0xc8441u);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0c8444  jne 0xc841a
    X86_AT(c, 0xc8444u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc841au); goto L_c841a; }
L_c8446:
    X86_TICK(c, 7);
    // 0c8446  call 0xb71c4
    X86_AT(c, 0xc8446u);
    push32(c, 0xc844bu); x86_call_known(c, 0xb71c4u, f_000b71c4); X86_RET(c, 0xc844bu);
    X86_TICK(c, 17);
    // 0c844b  mov dword ptr [0xa4a66], edi
    X86_AT(c, 0xc844bu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), c.r[7]);
    // 0c8451  mov dword ptr [0xa4a76], edi
    X86_AT(c, 0xc8451u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A76u)), c.r[7]);
    // 0c8457  mov dword ptr [0xa4a6a], esi
    X86_AT(c, 0xc8457u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), c.r[6]);
    // 0c845d  mov dword ptr [0xa4a7a], esi
    X86_AT(c, 0xc845du);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Au)), c.r[6]);
    // 0c8463  push 1
    X86_AT(c, 0xc8463u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c8465  call 0xb61d4
    X86_AT(c, 0xc8465u);
    push32(c, 0xc846au); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xc846au);
    X86_TICK(c, 2);
    // 0c846a  add esp, 4
    X86_AT(c, 0xc846au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c846d:
    X86_TICK(c, 22);
    // 0c846d  pop edi
    X86_AT(c, 0xc846du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c846e  pop esi
    X86_AT(c, 0xc846eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c846f  pop ebx
    X86_AT(c, 0xc846fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c8470  ret 
    X86_AT(c, 0xc8470u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc83dcu, "ran off the end of a function");
}
void f_000c8474(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0c8474  push ebp
    X86_AT(c, 0xc8474u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8475  mov ebp, esp
    X86_AT(c, 0xc8475u);
    c.r[5] = c.r[4];
    // 0c8477  push ebx
    X86_AT(c, 0xc8477u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c8478  push esi
    X86_AT(c, 0xc8478u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8479  push edi
    X86_AT(c, 0xc8479u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c847a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc847au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c847d  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc847du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8480  cmp edi, dword ptr [0xa4a76]
    X86_AT(c, 0xc8480u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0, 4);
    // 0c8486  jne 0xc8497
    X86_AT(c, 0xc8486u);
    if (x86_cc(c, 5)) { goto L_c8497; }
    X86_TICK(c, 11);
    // 0c8488  cmp esi, dword ptr [0xa4a7a]
    X86_AT(c, 0xc8488u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0, 4);
    // 0c848e  jne 0xc8497
    X86_AT(c, 0xc848eu);
    if (x86_cc(c, 5)) { goto L_c8497; }
    X86_TICK(c, 9);
    // 0c8490  mov al, 0x9d
    X86_AT(c, 0xc8490u);
    s8(c, 0, 0x9Du);
    // 0c8492  jmp 0xc84f4
    X86_AT(c, 0xc8492u);
    goto L_c84f4;
L_c8497:
    X86_TICK(c, 11);
    // 0c8497  push esi
    X86_AT(c, 0xc8497u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8498  push edi
    X86_AT(c, 0xc8498u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8499  call 0xc735c
    X86_AT(c, 0xc8499u);
    push32(c, 0xc849eu); x86_call_known(c, 0xc735cu, f_000c735c); X86_RET(c, 0xc849eu);
    X86_TICK(c, 12);
    // 0c849e  xchg ebx, eax
    X86_AT(c, 0xc849eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c849f  add esp, 8
    X86_AT(c, 0xc849fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c84a2  cmp ebx, 0xff
    X86_AT(c, 0xc84a2u);
    (void)x86_sub(c, c.r[3], 0xFFu, 0, 4);
    // 0c84a8  jne 0xc84ae
    X86_AT(c, 0xc84a8u);
    if (x86_cc(c, 5)) { goto L_c84ae; }
    X86_TICK(c, 9);
    // 0c84aa  mov al, 0x83
    X86_AT(c, 0xc84aau);
    s8(c, 0, 0x83u);
    // 0c84ac  jmp 0xc84f4
    X86_AT(c, 0xc84acu);
    goto L_c84f4;
L_c84ae:
    X86_TICK(c, 7);
    // 0c84ae  cmp ebx, 0xffffffff
    X86_AT(c, 0xc84aeu);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0c84b1  je 0xc84bb
    X86_AT(c, 0xc84b1u);
    if (x86_cc(c, 4)) { goto L_c84bb; }
    X86_TICK(c, 11);
    // 0c84b3  mov al, byte ptr [ebx + 0xa5ce8]
    X86_AT(c, 0xc84b3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA5CE8u))));
    // 0c84b9  jmp 0xc84f4
    X86_AT(c, 0xc84b9u);
    goto L_c84f4;
L_c84bb:
    X86_TICK(c, 11);
    // 0c84bb  cmp edi, dword ptr [0xa6068]
    X86_AT(c, 0xc84bbu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xA6068u))), 0, 4);
    // 0c84c1  jne 0xc84cf
    X86_AT(c, 0xc84c1u);
    if (x86_cc(c, 5)) { goto L_c84cf; }
    X86_TICK(c, 11);
    // 0c84c3  cmp esi, dword ptr [0xa606c]
    X86_AT(c, 0xc84c3u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xA606Cu))), 0, 4);
    // 0c84c9  jne 0xc84cf
    X86_AT(c, 0xc84c9u);
    if (x86_cc(c, 5)) { goto L_c84cf; }
    X86_TICK(c, 9);
    // 0c84cb  mov al, 0xb
    X86_AT(c, 0xc84cbu);
    s8(c, 0, 0xBu);
    // 0c84cd  jmp 0xc84f4
    X86_AT(c, 0xc84cdu);
    goto L_c84f4;
L_c84cf:
    X86_TICK(c, 20);
    // 0c84cf  mov eax, esi
    X86_AT(c, 0xc84cfu);
    c.r[0] = c.r[6];
    // 0c84d1  shl eax, 6
    X86_AT(c, 0xc84d1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0c84d4  lea edx, [edi + eax*1]
    X86_AT(c, 0xc84d4u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c84d7  movzx ebx, byte ptr [edx + 0x8afa8]
    X86_AT(c, 0xc84d7u);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8AFA8u)));
    // 0c84de  cmp ebx, 0x12
    X86_AT(c, 0xc84deu);
    (void)x86_sub(c, c.r[3], 0x12u, 0, 4);
    // 0c84e1  jl 0xc84e8
    X86_AT(c, 0xc84e1u);
    if (x86_cc(c, 12)) { goto L_c84e8; }
    X86_TICK(c, 7);
    // 0c84e3  cmp ebx, 0x21
    X86_AT(c, 0xc84e3u);
    (void)x86_sub(c, c.r[3], 0x21u, 0, 4);
    // 0c84e6  jl 0xc84ed
    X86_AT(c, 0xc84e6u);
    if (x86_cc(c, 12)) { goto L_c84ed; }
L_c84e8:
    X86_TICK(c, 7);
    // 0c84e8  cmp ebx, 0xa
    X86_AT(c, 0xc84e8u);
    (void)x86_sub(c, c.r[3], 0xAu, 0, 4);
    // 0c84eb  jne 0xc84f2
    X86_AT(c, 0xc84ebu);
    if (x86_cc(c, 5)) { goto L_c84f2; }
L_c84ed:
    X86_TICK(c, 2);
    // 0c84ed  mov ebx, 1
    X86_AT(c, 0xc84edu);
    c.r[3] = 0x1u;
L_c84f2:
    X86_TICK(c, 2);
    // 0c84f2  mov eax, ebx
    X86_AT(c, 0xc84f2u);
    c.r[0] = c.r[3];
L_c84f4:
    X86_TICK(c, 28);
    // 0c84f4  pop edi
    X86_AT(c, 0xc84f4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c84f5  pop esi
    X86_AT(c, 0xc84f5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c84f6  pop ebx
    X86_AT(c, 0xc84f6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c84f7  leave 
    X86_AT(c, 0xc84f7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c84f8  ret 
    X86_AT(c, 0xc84f8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8474u, "ran off the end of a function");
}
void f_000c84fc(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0c84fc  push ebp
    X86_AT(c, 0xc84fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c84fd  mov ebp, esp
    X86_AT(c, 0xc84fdu);
    c.r[5] = c.r[4];
    // 0c84ff  push esi
    X86_AT(c, 0xc84ffu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8500  push edi
    X86_AT(c, 0xc8500u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8501  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc8501u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8504  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8504u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8507  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xc8507u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0c850c  and eax, eax
    X86_AT(c, 0xc850cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c850e  je 0xc8517
    X86_AT(c, 0xc850eu);
    if (x86_cc(c, 4)) { goto L_c8517; }
    X86_TICK(c, 7);
    // 0c8510  cmp eax, 0xff
    X86_AT(c, 0xc8510u);
    (void)x86_sub(c, c.r[0], 0xFFu, 0, 4);
    // 0c8515  jne 0xc852b
    X86_AT(c, 0xc8515u);
    if (x86_cc(c, 5)) { goto L_c852b; }
L_c8517:
    X86_TICK(c, 11);
    // 0c8517  cmp edi, dword ptr [0xa6048]
    X86_AT(c, 0xc8517u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xA6048u))), 0, 4);
    // 0c851d  jne 0xc852b
    X86_AT(c, 0xc851du);
    if (x86_cc(c, 5)) { goto L_c852b; }
    X86_TICK(c, 11);
    // 0c851f  cmp esi, dword ptr [0xa604c]
    X86_AT(c, 0xc851fu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xA604Cu))), 0, 4);
    // 0c8525  jne 0xc852b
    X86_AT(c, 0xc8525u);
    if (x86_cc(c, 5)) { goto L_c852b; }
    X86_TICK(c, 9);
    // 0c8527  mov al, 0x83
    X86_AT(c, 0xc8527u);
    s8(c, 0, 0x83u);
    // 0c8529  jmp 0xc8570
    X86_AT(c, 0xc8529u);
    goto L_c8570;
L_c852b:
    X86_TICK(c, 12);
    // 0c852b  cmp dword ptr [0xa4a56], 0xff
    X86_AT(c, 0xc852bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0xFFu, 0, 4);
    // 0c8535  jne 0xc854b
    X86_AT(c, 0xc8535u);
    if (x86_cc(c, 5)) { goto L_c854b; }
    X86_TICK(c, 11);
    // 0c8537  cmp edi, dword ptr [0xa6068]
    X86_AT(c, 0xc8537u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xA6068u))), 0, 4);
    // 0c853d  jne 0xc854b
    X86_AT(c, 0xc853du);
    if (x86_cc(c, 5)) { goto L_c854b; }
    X86_TICK(c, 11);
    // 0c853f  cmp esi, dword ptr [0xa606c]
    X86_AT(c, 0xc853fu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xA606Cu))), 0, 4);
    // 0c8545  jne 0xc854b
    X86_AT(c, 0xc8545u);
    if (x86_cc(c, 5)) { goto L_c854b; }
    X86_TICK(c, 9);
    // 0c8547  mov al, 0xb
    X86_AT(c, 0xc8547u);
    s8(c, 0, 0xBu);
    // 0c8549  jmp 0xc8570
    X86_AT(c, 0xc8549u);
    goto L_c8570;
L_c854b:
    X86_TICK(c, 20);
    // 0c854b  mov eax, esi
    X86_AT(c, 0xc854bu);
    c.r[0] = c.r[6];
    // 0c854d  shl eax, 6
    X86_AT(c, 0xc854du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0c8550  lea edx, [edi + eax*1]
    X86_AT(c, 0xc8550u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c8553  movzx ecx, byte ptr [edx + 0x8afa8]
    X86_AT(c, 0xc8553u);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8AFA8u)));
    // 0c855a  cmp ecx, 0x12
    X86_AT(c, 0xc855au);
    (void)x86_sub(c, c.r[1], 0x12u, 0, 4);
    // 0c855d  jl 0xc8564
    X86_AT(c, 0xc855du);
    if (x86_cc(c, 12)) { goto L_c8564; }
    X86_TICK(c, 7);
    // 0c855f  cmp ecx, 0x21
    X86_AT(c, 0xc855fu);
    (void)x86_sub(c, c.r[1], 0x21u, 0, 4);
    // 0c8562  jl 0xc8569
    X86_AT(c, 0xc8562u);
    if (x86_cc(c, 12)) { goto L_c8569; }
L_c8564:
    X86_TICK(c, 7);
    // 0c8564  cmp ecx, 0xa
    X86_AT(c, 0xc8564u);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 0c8567  jne 0xc856e
    X86_AT(c, 0xc8567u);
    if (x86_cc(c, 5)) { goto L_c856e; }
L_c8569:
    X86_TICK(c, 2);
    // 0c8569  mov ecx, 1
    X86_AT(c, 0xc8569u);
    c.r[1] = 0x1u;
L_c856e:
    X86_TICK(c, 2);
    // 0c856e  mov eax, ecx
    X86_AT(c, 0xc856eu);
    c.r[0] = c.r[1];
L_c8570:
    X86_TICK(c, 24);
    // 0c8570  pop edi
    X86_AT(c, 0xc8570u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8571  pop esi
    X86_AT(c, 0xc8571u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c8572  leave 
    X86_AT(c, 0xc8572u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8573  ret 
    X86_AT(c, 0xc8573u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc84fcu, "ran off the end of a function");
}
void f_000c8574(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0c8574  push ebp
    X86_AT(c, 0xc8574u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8575  mov ebp, esp
    X86_AT(c, 0xc8575u);
    c.r[5] = c.r[4];
    // 0c8577  push esi
    X86_AT(c, 0xc8577u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8578  push edi
    X86_AT(c, 0xc8578u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8579  mov edi, dword ptr [0xa4a76]
    X86_AT(c, 0xc8579u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0c857f  mov esi, dword ptr [0xa4a7a]
    X86_AT(c, 0xc857fu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0c8585  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xc8585u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8589  sub edx, 3
    X86_AT(c, 0xc8589u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0c858c  cmp edx, 4
    X86_AT(c, 0xc858cu);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0c858f  ja 0xc85d7
    X86_AT(c, 0xc858fu);
    if (x86_cc(c, 7)) { goto L_c85d7; }
    X86_TICK(c, 7);
    // 0c8591  jmp dword ptr cs:[edx*4 + 0xc8599]
    X86_AT(c, 0xc8591u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC8599u)));
      switch (t) {
      case 0xc85adu: goto L_c85ad;
      case 0xc85b9u: goto L_c85b9;
      case 0xc85c3u: goto L_c85c3;
      case 0xc85cfu: goto L_c85cf;
      case 0xc85d7u: goto L_c85d7;
      default: x86_jump(c, t); return; } }
L_c85ad:
    X86_TICK(c, 9);
    // 0c85ad  dec esi
    X86_AT(c, 0xc85adu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0c85ae  and esi, esi
    X86_AT(c, 0xc85aeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c85b0  jge 0xc85d7
    X86_AT(c, 0xc85b0u);
    if (x86_cc(c, 13)) { goto L_c85d7; }
    X86_TICK(c, 9);
    // 0c85b2  mov esi, 0x3f
    X86_AT(c, 0xc85b2u);
    c.r[6] = 0x3Fu;
    // 0c85b7  jmp 0xc85d7
    X86_AT(c, 0xc85b7u);
    goto L_c85d7;
L_c85b9:
    X86_TICK(c, 9);
    // 0c85b9  inc esi
    X86_AT(c, 0xc85b9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c85ba  cmp esi, 0x40
    X86_AT(c, 0xc85bau);
    (void)x86_sub(c, c.r[6], 0x40u, 0, 4);
    // 0c85bd  jl 0xc85d7
    X86_AT(c, 0xc85bdu);
    if (x86_cc(c, 12)) { goto L_c85d7; }
    X86_TICK(c, 9);
    // 0c85bf  sub esi, esi
    X86_AT(c, 0xc85bfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c85c1  jmp 0xc85d7
    X86_AT(c, 0xc85c1u);
    goto L_c85d7;
L_c85c3:
    X86_TICK(c, 9);
    // 0c85c3  dec edi
    X86_AT(c, 0xc85c3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0c85c4  and edi, edi
    X86_AT(c, 0xc85c4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c85c6  jge 0xc85d7
    X86_AT(c, 0xc85c6u);
    if (x86_cc(c, 13)) { goto L_c85d7; }
    X86_TICK(c, 9);
    // 0c85c8  mov edi, 0x3f
    X86_AT(c, 0xc85c8u);
    c.r[7] = 0x3Fu;
    // 0c85cd  jmp 0xc85d7
    X86_AT(c, 0xc85cdu);
    goto L_c85d7;
L_c85cf:
    X86_TICK(c, 9);
    // 0c85cf  inc edi
    X86_AT(c, 0xc85cfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c85d0  cmp edi, 0x40
    X86_AT(c, 0xc85d0u);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0c85d3  jl 0xc85d7
    X86_AT(c, 0xc85d3u);
    if (x86_cc(c, 12)) { goto L_c85d7; }
    X86_TICK(c, 2);
    // 0c85d5  sub edi, edi
    X86_AT(c, 0xc85d5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c85d7:
    X86_TICK(c, 12);
    // 0c85d7  cmp dword ptr [0xa6134], 2
    X86_AT(c, 0xc85d7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x2u, 0, 4);
    // 0c85de  je 0xc85e9
    X86_AT(c, 0xc85deu);
    if (x86_cc(c, 4)) { goto L_c85e9; }
    X86_TICK(c, 11);
    // 0c85e0  push esi
    X86_AT(c, 0xc85e0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c85e1  push edi
    X86_AT(c, 0xc85e1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c85e2  call 0xc85fc
    X86_AT(c, 0xc85e2u);
    push32(c, 0xc85e7u); x86_call_known(c, 0xc85fcu, f_000c85fc); X86_RET(c, 0xc85e7u);
    X86_TICK(c, 7);
    // 0c85e7  jmp 0xc85f2
    X86_AT(c, 0xc85e7u);
    goto L_c85f2;
L_c85e9:
    X86_TICK(c, 11);
    // 0c85e9  push esi
    X86_AT(c, 0xc85e9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c85ea  push edi
    X86_AT(c, 0xc85eau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c85eb  call 0xc85fc
    X86_AT(c, 0xc85ebu);
    push32(c, 0xc85f0u); x86_call_known(c, 0xc85fcu, f_000c85fc); X86_RET(c, 0xc85f0u);
    X86_TICK(c, 2);
    // 0c85f0  sub eax, eax
    X86_AT(c, 0xc85f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c85f2:
    X86_TICK(c, 26);
    // 0c85f2  add esp, 8
    X86_AT(c, 0xc85f2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c85f5  pop edi
    X86_AT(c, 0xc85f5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c85f6  pop esi
    X86_AT(c, 0xc85f6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c85f7  leave 
    X86_AT(c, 0xc85f7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c85f8  ret 
    X86_AT(c, 0xc85f8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8574u, "ran off the end of a function");
}
void f_000c85fc(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0c85fc  push ebp
    X86_AT(c, 0xc85fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c85fd  mov ebp, esp
    X86_AT(c, 0xc85fdu);
    c.r[5] = c.r[4];
    // 0c85ff  sub esp, 8
    X86_AT(c, 0xc85ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c8602  push ebx
    X86_AT(c, 0xc8602u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c8603  push esi
    X86_AT(c, 0xc8603u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8604  push edi
    X86_AT(c, 0xc8604u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8605  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc8605u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8608  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8608u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c860b  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xc860bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0c8612  push esi
    X86_AT(c, 0xc8612u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8613  push edi
    X86_AT(c, 0xc8613u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8614  call 0xc8474
    X86_AT(c, 0xc8614u);
    push32(c, 0xc8619u); x86_call_known(c, 0xc8474u, f_000c8474); X86_RET(c, 0xc8619u);
    X86_TICK(c, 12);
    // 0c8619  xchg ebx, eax
    X86_AT(c, 0xc8619u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c861a  push 7
    X86_AT(c, 0xc861au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c861c  call 0xbb6b0
    X86_AT(c, 0xc861cu);
    push32(c, 0xc8621u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc8621u);
    X86_TICK(c, 14);
    // 0c8621  add esp, 0xc
    X86_AT(c, 0xc8621u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8624  cmp byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xc8624u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x82u, 0, 1);
    // 0c862b  jne 0xc86a2
    X86_AT(c, 0xc862bu);
    if (x86_cc(c, 5)) { goto L_c86a2; }
    X86_TICK(c, 7);
    // 0c8631  cmp bl, 0x83
    X86_AT(c, 0xc8631u);
    (void)x86_sub(c, g8(c, 3), 0x83u, 0, 1);
    // 0c8634  jne 0xc8640
    X86_AT(c, 0xc8634u);
    if (x86_cc(c, 5)) { goto L_c8640; }
    X86_TICK(c, 9);
    // 0c8636  mov eax, 0x83
    X86_AT(c, 0xc8636u);
    c.r[0] = 0x83u;
    // 0c863b  jmp 0xc896c
    X86_AT(c, 0xc863bu);
    goto L_c896c;
L_c8640:
    X86_TICK(c, 7);
    // 0c8640  cmp bl, 1
    X86_AT(c, 0xc8640u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c8643  je 0xc8654
    X86_AT(c, 0xc8643u);
    if (x86_cc(c, 4)) { goto L_c8654; }
    X86_TICK(c, 7);
    // 0c8645  cmp bl, 0xa
    X86_AT(c, 0xc8645u);
    (void)x86_sub(c, g8(c, 3), 0xAu, 0, 1);
    // 0c8648  je 0xc8654
    X86_AT(c, 0xc8648u);
    if (x86_cc(c, 4)) { goto L_c8654; }
    X86_TICK(c, 7);
    // 0c864a  cmp bl, 0x11
    X86_AT(c, 0xc864au);
    (void)x86_sub(c, g8(c, 3), 0x11u, 0, 1);
    // 0c864d  jbe 0xc865e
    X86_AT(c, 0xc864du);
    if (x86_cc(c, 6)) { goto L_c865e; }
    X86_TICK(c, 7);
    // 0c864f  cmp bl, 0x21
    X86_AT(c, 0xc864fu);
    (void)x86_sub(c, g8(c, 3), 0x21u, 0, 1);
    // 0c8652  jae 0xc865e
    X86_AT(c, 0xc8652u);
    if (x86_cc(c, 3)) { goto L_c865e; }
L_c8654:
    X86_TICK(c, 9);
    // 0c8654  mov eax, 1
    X86_AT(c, 0xc8654u);
    c.r[0] = 0x1u;
    // 0c8659  jmp 0xc896c
    X86_AT(c, 0xc8659u);
    goto L_c896c;
L_c865e:
    X86_TICK(c, 9);
    // 0c865e  push 0
    X86_AT(c, 0xc865eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c8660  call 0xb607c
    X86_AT(c, 0xc8660u);
    push32(c, 0xc8665u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8665u);
    X86_TICK(c, 9);
    // 0c8665  push 7
    X86_AT(c, 0xc8665u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8667  call 0xbbb5c
    X86_AT(c, 0xc8667u);
    push32(c, 0xc866cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc866cu);
    X86_TICK(c, 13);
    // 0c866c  lea eax, [ebp - 4]
    X86_AT(c, 0xc866cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c866f  push eax
    X86_AT(c, 0xc866fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8670  push ebx
    X86_AT(c, 0xc8670u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c8671  call 0xc98d8
    X86_AT(c, 0xc8671u);
    push32(c, 0xc8676u); x86_call_known(c, 0xc98d8u, f_000c98d8); X86_RET(c, 0xc8676u);
    X86_TICK(c, 11);
    // 0c8676  push eax
    X86_AT(c, 0xc8676u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8677  push 7
    X86_AT(c, 0xc8677u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8679  call 0xbbba4
    X86_AT(c, 0xc8679u);
    push32(c, 0xc867eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc867eu);
    X86_TICK(c, 9);
    // 0c867e  push 7
    X86_AT(c, 0xc867eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8680  call 0xbbb5c
    X86_AT(c, 0xc8680u);
    push32(c, 0xc8685u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8685u);
    X86_TICK(c, 14);
    // 0c8685  add esp, 0x1c
    X86_AT(c, 0xc8685u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c8688  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xc8688u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0c868c  jne 0xc8698
    X86_AT(c, 0xc868cu);
    if (x86_cc(c, 5)) { goto L_c8698; }
    X86_TICK(c, 9);
    // 0c868e  push 0x60d4
    X86_AT(c, 0xc868eu);
    { uint32_t v = 0x60D4u; push32(c, v); }
    // 0c8693  jmp 0xc87c7
    X86_AT(c, 0xc8693u);
    goto L_c87c7;
L_c8698:
    X86_TICK(c, 9);
    // 0c8698  push 0x6100
    X86_AT(c, 0xc8698u);
    { uint32_t v = 0x6100u; push32(c, v); }
    // 0c869d  jmp 0xc87c7
    X86_AT(c, 0xc869du);
    goto L_c87c7;
L_c86a2:
    X86_TICK(c, 11);
    // 0c86a2  push esi
    X86_AT(c, 0xc86a2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c86a3  push edi
    X86_AT(c, 0xc86a3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c86a4  call 0xc735c
    X86_AT(c, 0xc86a4u);
    push32(c, 0xc86a9u); x86_call_known(c, 0xc735cu, f_000c735c); X86_RET(c, 0xc86a9u);
    X86_TICK(c, 11);
    // 0c86a9  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc86a9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c86ac  add esp, 8
    X86_AT(c, 0xc86acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c86af  cmp eax, 0xff
    X86_AT(c, 0xc86afu);
    (void)x86_sub(c, c.r[0], 0xFFu, 0, 4);
    // 0c86b4  jne 0xc86d6
    X86_AT(c, 0xc86b4u);
    if (x86_cc(c, 5)) { goto L_c86d6; }
    X86_TICK(c, 11);
    // 0c86b6  push 0x6128
    X86_AT(c, 0xc86b6u);
    { uint32_t v = 0x6128u; push32(c, v); }
    // 0c86bb  push 7
    X86_AT(c, 0xc86bbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c86bd  call 0xba428
    X86_AT(c, 0xc86bdu);
    push32(c, 0xc86c2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc86c2u);
    X86_TICK(c, 9);
    // 0c86c2  push 7
    X86_AT(c, 0xc86c2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c86c4  call 0xbbb5c
    X86_AT(c, 0xc86c4u);
    push32(c, 0xc86c9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc86c9u);
    X86_TICK(c, 11);
    // 0c86c9  mov eax, 0xffffffff
    X86_AT(c, 0xc86c9u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c86ce  add esp, 0xc
    X86_AT(c, 0xc86ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c86d1  jmp 0xc896c
    X86_AT(c, 0xc86d1u);
    goto L_c896c;
L_c86d6:
    X86_TICK(c, 11);
    // 0c86d6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc86d6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c86d9  cmp eax, 0xffffffff
    X86_AT(c, 0xc86d9u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0c86dc  je 0xc8759
    X86_AT(c, 0xc86dcu);
    if (x86_cc(c, 4)) { goto L_c8759; }
    X86_TICK(c, 11);
    // 0c86e2  mov bl, byte ptr [eax + 0xa5ce8]
    X86_AT(c, 0xc86e2u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA5CE8u))));
    // 0c86e8  cmp bl, 0x80
    X86_AT(c, 0xc86e8u);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 0c86eb  jne 0xc86f7
    X86_AT(c, 0xc86ebu);
    if (x86_cc(c, 5)) { goto L_c86f7; }
    X86_TICK(c, 9);
    // 0c86ed  mov eax, 0x80
    X86_AT(c, 0xc86edu);
    c.r[0] = 0x80u;
    // 0c86f2  jmp 0xc896c
    X86_AT(c, 0xc86f2u);
    goto L_c896c;
L_c86f7:
    X86_TICK(c, 7);
    // 0c86f7  cmp bl, 0x82
    X86_AT(c, 0xc86f7u);
    (void)x86_sub(c, g8(c, 3), 0x82u, 0, 1);
    // 0c86fa  jne 0xc8706
    X86_AT(c, 0xc86fau);
    if (x86_cc(c, 5)) { goto L_c8706; }
    X86_TICK(c, 9);
    // 0c86fc  mov eax, 0x82
    X86_AT(c, 0xc86fcu);
    c.r[0] = 0x82u;
    // 0c8701  jmp 0xc896c
    X86_AT(c, 0xc8701u);
    goto L_c896c;
L_c8706:
    X86_TICK(c, 7);
    // 0c8706  cmp bl, 0x81
    X86_AT(c, 0xc8706u);
    (void)x86_sub(c, g8(c, 3), 0x81u, 0, 1);
    // 0c8709  jne 0xc8715
    X86_AT(c, 0xc8709u);
    if (x86_cc(c, 5)) { goto L_c8715; }
    X86_TICK(c, 9);
    // 0c870b  mov eax, 0x81
    X86_AT(c, 0xc870bu);
    c.r[0] = 0x81u;
    // 0c8710  jmp 0xc896c
    X86_AT(c, 0xc8710u);
    goto L_c896c;
L_c8715:
    X86_TICK(c, 9);
    // 0c8715  push 0
    X86_AT(c, 0xc8715u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c8717  call 0xb607c
    X86_AT(c, 0xc8717u);
    push32(c, 0xc871cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc871cu);
    X86_TICK(c, 9);
    // 0c871c  push 7
    X86_AT(c, 0xc871cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c871e  call 0xbbb5c
    X86_AT(c, 0xc871eu);
    push32(c, 0xc8723u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8723u);
    X86_TICK(c, 13);
    // 0c8723  lea eax, [ebp - 4]
    X86_AT(c, 0xc8723u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c8726  push eax
    X86_AT(c, 0xc8726u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8727  push ebx
    X86_AT(c, 0xc8727u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c8728  call 0xc98d8
    X86_AT(c, 0xc8728u);
    push32(c, 0xc872du); x86_call_known(c, 0xc98d8u, f_000c98d8); X86_RET(c, 0xc872du);
    X86_TICK(c, 11);
    // 0c872d  push eax
    X86_AT(c, 0xc872du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c872e  push 7
    X86_AT(c, 0xc872eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8730  call 0xbbba4
    X86_AT(c, 0xc8730u);
    push32(c, 0xc8735u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc8735u);
    X86_TICK(c, 9);
    // 0c8735  push 7
    X86_AT(c, 0xc8735u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8737  call 0xbbb5c
    X86_AT(c, 0xc8737u);
    push32(c, 0xc873cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc873cu);
    X86_TICK(c, 14);
    // 0c873c  add esp, 0x1c
    X86_AT(c, 0xc873cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c873f  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xc873fu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0c8743  jne 0xc874f
    X86_AT(c, 0xc8743u);
    if (x86_cc(c, 5)) { goto L_c874f; }
    X86_TICK(c, 9);
    // 0c8745  push 0x616c
    X86_AT(c, 0xc8745u);
    { uint32_t v = 0x616Cu; push32(c, v); }
    // 0c874a  jmp 0xc87c7
    X86_AT(c, 0xc874au);
    goto L_c87c7;
L_c874f:
    X86_TICK(c, 9);
    // 0c874f  push 0x6198
    X86_AT(c, 0xc874fu);
    { uint32_t v = 0x6198u; push32(c, v); }
    // 0c8754  jmp 0xc87c7
    X86_AT(c, 0xc8754u);
    goto L_c87c7;
L_c8759:
    X86_TICK(c, 10);
    // 0c8759  movzx edx, bl
    X86_AT(c, 0xc8759u);
    c.r[2] = g8(c, 3);
    // 0c875c  cmp edx, 0xa
    X86_AT(c, 0xc875cu);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0c875f  ja 0xc8775
    X86_AT(c, 0xc875fu);
    if (x86_cc(c, 7)) { goto L_c8775; }
    X86_TICK(c, 7);
    // 0c8761  cmp edx, 0xa
    X86_AT(c, 0xc8761u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0c8764  je 0xc8784
    X86_AT(c, 0xc8764u);
    if (x86_cc(c, 4)) { goto L_c8784; }
    X86_TICK(c, 7);
    // 0c8766  cmp edx, 1
    X86_AT(c, 0xc8766u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c8769  je 0xc8784
    X86_AT(c, 0xc8769u);
    if (x86_cc(c, 4)) { goto L_c8784; }
    X86_TICK(c, 7);
    // 0c876b  cmp edx, 5
    X86_AT(c, 0xc876bu);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0c876e  je 0xc8784
    X86_AT(c, 0xc876eu);
    if (x86_cc(c, 4)) { goto L_c8784; }
    X86_TICK(c, 7);
    // 0c8770  jmp 0xc87e5
    X86_AT(c, 0xc8770u);
    goto L_c87e5;
L_c8775:
    X86_TICK(c, 7);
    // 0c8775  cmp edx, 0xc
    X86_AT(c, 0xc8775u);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0c8778  je 0xc8784
    X86_AT(c, 0xc8778u);
    if (x86_cc(c, 4)) { goto L_c8784; }
    X86_TICK(c, 7);
    // 0c877a  cmp edx, 0x11
    X86_AT(c, 0xc877au);
    (void)x86_sub(c, c.r[2], 0x11u, 0, 4);
    // 0c877d  je 0xc8784
    X86_AT(c, 0xc877du);
    if (x86_cc(c, 4)) { goto L_c8784; }
    X86_TICK(c, 7);
    // 0c877f  cmp edx, 0x24
    X86_AT(c, 0xc877fu);
    (void)x86_sub(c, c.r[2], 0x24u, 0, 4);
    // 0c8782  jne 0xc87e5
    X86_AT(c, 0xc8782u);
    if (x86_cc(c, 5)) { goto L_c87e5; }
L_c8784:
    X86_TICK(c, 11);
    // 0c8784  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xc8784u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0c878b  push 0
    X86_AT(c, 0xc878bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c878d  call 0xb607c
    X86_AT(c, 0xc878du);
    push32(c, 0xc8792u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8792u);
    X86_TICK(c, 9);
    // 0c8792  push 7
    X86_AT(c, 0xc8792u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8794  call 0xbbb5c
    X86_AT(c, 0xc8794u);
    push32(c, 0xc8799u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8799u);
    X86_TICK(c, 13);
    // 0c8799  lea eax, [ebp - 4]
    X86_AT(c, 0xc8799u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c879c  push eax
    X86_AT(c, 0xc879cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c879d  push ebx
    X86_AT(c, 0xc879du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c879e  call 0xc98d8
    X86_AT(c, 0xc879eu);
    push32(c, 0xc87a3u); x86_call_known(c, 0xc98d8u, f_000c98d8); X86_RET(c, 0xc87a3u);
    X86_TICK(c, 11);
    // 0c87a3  push eax
    X86_AT(c, 0xc87a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c87a4  push 7
    X86_AT(c, 0xc87a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c87a6  call 0xbbba4
    X86_AT(c, 0xc87a6u);
    push32(c, 0xc87abu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc87abu);
    X86_TICK(c, 9);
    // 0c87ab  push 7
    X86_AT(c, 0xc87abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c87ad  call 0xbbb5c
    X86_AT(c, 0xc87adu);
    push32(c, 0xc87b2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc87b2u);
    X86_TICK(c, 14);
    // 0c87b2  add esp, 0x1c
    X86_AT(c, 0xc87b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c87b5  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xc87b5u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0c87b9  jne 0xc87c2
    X86_AT(c, 0xc87b9u);
    if (x86_cc(c, 5)) { goto L_c87c2; }
    X86_TICK(c, 9);
    // 0c87bb  push 0x61c4
    X86_AT(c, 0xc87bbu);
    { uint32_t v = 0x61C4u; push32(c, v); }
    // 0c87c0  jmp 0xc87c7
    X86_AT(c, 0xc87c0u);
    goto L_c87c7;
L_c87c2:
    X86_TICK(c, 2);
    // 0c87c2  push 0x61f0
    X86_AT(c, 0xc87c2u);
    { uint32_t v = 0x61F0u; push32(c, v); }
L_c87c7:
    X86_TICK(c, 9);
    // 0c87c7  push 7
    X86_AT(c, 0xc87c7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c87c9  call 0xba428
    X86_AT(c, 0xc87c9u);
    push32(c, 0xc87ceu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc87ceu);
    X86_TICK(c, 11);
    // 0c87ce  add esp, 8
    X86_AT(c, 0xc87ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c87d1  push 7
    X86_AT(c, 0xc87d1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c87d3  call 0xbbb5c
    X86_AT(c, 0xc87d3u);
    push32(c, 0xc87d8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc87d8u);
    X86_TICK(c, 11);
    // 0c87d8  mov eax, 0xffffffff
    X86_AT(c, 0xc87d8u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c87dd  add esp, 4
    X86_AT(c, 0xc87ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c87e0  jmp 0xc896c
    X86_AT(c, 0xc87e0u);
    goto L_c896c;
L_c87e5:
    X86_TICK(c, 7);
    // 0c87e5  cmp bl, 0x25
    X86_AT(c, 0xc87e5u);
    (void)x86_sub(c, g8(c, 3), 0x25u, 0, 1);
    // 0c87e8  jb 0xc8816
    X86_AT(c, 0xc87e8u);
    if (x86_cc(c, 2)) { goto L_c8816; }
    X86_TICK(c, 7);
    // 0c87ea  cmp bl, 0x3f
    X86_AT(c, 0xc87eau);
    (void)x86_sub(c, g8(c, 3), 0x3Fu, 0, 1);
    // 0c87ed  ja 0xc8816
    X86_AT(c, 0xc87edu);
    if (x86_cc(c, 7)) { goto L_c8816; }
    X86_TICK(c, 9);
    // 0c87ef  push 7
    X86_AT(c, 0xc87efu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c87f1  call 0xbbb5c
    X86_AT(c, 0xc87f1u);
    push32(c, 0xc87f6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc87f6u);
    X86_TICK(c, 11);
    // 0c87f6  push 0x621c
    X86_AT(c, 0xc87f6u);
    { uint32_t v = 0x621Cu; push32(c, v); }
    // 0c87fb  push 7
    X86_AT(c, 0xc87fbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c87fd  call 0xba428
    X86_AT(c, 0xc87fdu);
    push32(c, 0xc8802u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8802u);
    X86_TICK(c, 9);
    // 0c8802  push 7
    X86_AT(c, 0xc8802u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8804  call 0xbbb5c
    X86_AT(c, 0xc8804u);
    push32(c, 0xc8809u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8809u);
    X86_TICK(c, 11);
    // 0c8809  mov eax, 0xffffffff
    X86_AT(c, 0xc8809u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c880e  add esp, 0x10
    X86_AT(c, 0xc880eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8811  jmp 0xc896c
    X86_AT(c, 0xc8811u);
    goto L_c896c;
L_c8816:
    X86_TICK(c, 7);
    // 0c8816  cmp bl, 0x22
    X86_AT(c, 0xc8816u);
    (void)x86_sub(c, g8(c, 3), 0x22u, 0, 1);
    // 0c8819  jne 0xc88ac
    X86_AT(c, 0xc8819u);
    if (x86_cc(c, 5)) { goto L_c88ac; }
    X86_TICK(c, 9);
    // 0c881f  push 8
    X86_AT(c, 0xc881fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c8821  call 0xb607c
    X86_AT(c, 0xc8821u);
    push32(c, 0xc8826u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8826u);
    X86_TICK(c, 7);
    // 0c8826  call 0xcaa9c
    X86_AT(c, 0xc8826u);
    push32(c, 0xc882bu); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xc882bu);
    X86_TICK(c, 8);
    // 0c882b  sub eax, eax
    X86_AT(c, 0xc882bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c882d  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc882du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c8830  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc8830u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c8833  add esp, 4
    X86_AT(c, 0xc8833u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c8836:
    X86_TICK(c, 11);
    // 0c8836  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc8836u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c8839  cmp eax, 4
    X86_AT(c, 0xc8839u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0c883c  jge 0xc88a2
    X86_AT(c, 0xc883cu);
    if (x86_cc(c, 13)) { goto L_c88a2; }
    X86_TICK(c, 17);
    // 0c883e  lea eax, [eax + eax*2]
    X86_AT(c, 0xc883eu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c8841  lea edx, [eax*8]
    X86_AT(c, 0xc8841u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c8848  lea edx, [eax + edx*8]
    X86_AT(c, 0xc8848u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c884b  mov al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xc884bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))));
    // 0c8851  cmp al, 0x44
    X86_AT(c, 0xc8851u);
    (void)x86_sub(c, g8(c, 0), 0x44u, 0, 1);
    // 0c8853  je 0xc889d
    X86_AT(c, 0xc8853u);
    if (x86_cc(c, 4)) { goto L_c889d; }
    X86_TICK(c, 7);
    // 0c8855  cmp al, 0x41
    X86_AT(c, 0xc8855u);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0c8857  je 0xc889d
    X86_AT(c, 0xc8857u);
    if (x86_cc(c, 4)) { goto L_c889d; }
    X86_TICK(c, 12);
    // 0c8859  cmp byte ptr [edx + 0xa4aaf], 0
    X86_AT(c, 0xc8859u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AAFu))), 0x0u, 0, 1);
    // 0c8860  jne 0xc889d
    X86_AT(c, 0xc8860u);
    if (x86_cc(c, 5)) { goto L_c889d; }
    X86_TICK(c, 14);
    // 0c8862  push 0x1f4
    X86_AT(c, 0xc8862u);
    { uint32_t v = 0x1F4u; push32(c, v); }
    // 0c8867  push dword ptr [ebp - 4]
    X86_AT(c, 0xc8867u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c886a  call 0xc9b10
    X86_AT(c, 0xc886au);
    push32(c, 0xc886fu); x86_call_known(c, 0xc9b10u, f_000c9b10); X86_RET(c, 0xc886fu);
    X86_TICK(c, 9);
    // 0c886f  push 8
    X86_AT(c, 0xc886fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c8871  call 0xb607c
    X86_AT(c, 0xc8871u);
    push32(c, 0xc8876u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8876u);
    X86_TICK(c, 12);
    // 0c8876  push dword ptr [ebp - 4]
    X86_AT(c, 0xc8876u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c8879  call 0xc7f0c
    X86_AT(c, 0xc8879u);
    push32(c, 0xc887eu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc887eu);
    X86_TICK(c, 9);
    // 0c887e  push 1
    X86_AT(c, 0xc887eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c8880  call 0xbebbc
    X86_AT(c, 0xc8880u);
    push32(c, 0xc8885u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8885u);
    X86_TICK(c, 12);
    // 0c8885  push dword ptr [ebp - 4]
    X86_AT(c, 0xc8885u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c8888  call 0xc7f0c
    X86_AT(c, 0xc8888u);
    push32(c, 0xc888du); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc888du);
    X86_TICK(c, 12);
    // 0c888d  push dword ptr [ebp - 4]
    X86_AT(c, 0xc888du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c8890  call 0xbe720
    X86_AT(c, 0xc8890u);
    push32(c, 0xc8895u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc8895u);
    X86_TICK(c, 7);
    // 0c8895  call 0xb75c0
    X86_AT(c, 0xc8895u);
    push32(c, 0xc889au); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xc889au);
    X86_TICK(c, 2);
    // 0c889a  add esp, 0x1c
    X86_AT(c, 0xc889au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_c889d:
    X86_TICK(c, 13);
    // 0c889d  inc dword ptr [ebp - 4]
    X86_AT(c, 0xc889du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c88a0  jmp 0xc8836
    X86_AT(c, 0xc88a0u);
    X86_POLL(c, 0xc8836u); goto L_c8836;
L_c88a2:
    X86_TICK(c, 9);
    // 0c88a2  mov eax, 0x22
    X86_AT(c, 0xc88a2u);
    c.r[0] = 0x22u;
    // 0c88a7  jmp 0xc896c
    X86_AT(c, 0xc88a7u);
    goto L_c896c;
L_c88ac:
    X86_TICK(c, 7);
    // 0c88ac  cmp bl, 0x21
    X86_AT(c, 0xc88acu);
    (void)x86_sub(c, g8(c, 3), 0x21u, 0, 1);
    // 0c88af  jne 0xc8941
    X86_AT(c, 0xc88afu);
    if (x86_cc(c, 5)) { goto L_c8941; }
    X86_TICK(c, 9);
    // 0c88b5  push 8
    X86_AT(c, 0xc88b5u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c88b7  call 0xb607c
    X86_AT(c, 0xc88b7u);
    push32(c, 0xc88bcu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc88bcu);
    X86_TICK(c, 7);
    // 0c88bc  call 0xcaa9c
    X86_AT(c, 0xc88bcu);
    push32(c, 0xc88c1u); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xc88c1u);
    X86_TICK(c, 8);
    // 0c88c1  sub eax, eax
    X86_AT(c, 0xc88c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c88c3  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc88c3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c88c6  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc88c6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c88c9  add esp, 4
    X86_AT(c, 0xc88c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c88cc:
    X86_TICK(c, 11);
    // 0c88cc  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc88ccu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c88cf  cmp eax, 4
    X86_AT(c, 0xc88cfu);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0c88d2  jge 0xc893a
    X86_AT(c, 0xc88d2u);
    if (x86_cc(c, 13)) { goto L_c893a; }
    X86_TICK(c, 17);
    // 0c88d4  lea eax, [eax + eax*2]
    X86_AT(c, 0xc88d4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c88d7  lea edx, [eax*8]
    X86_AT(c, 0xc88d7u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c88de  lea edx, [eax + edx*8]
    X86_AT(c, 0xc88deu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c88e1  mov al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xc88e1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))));
    // 0c88e7  cmp al, 0x44
    X86_AT(c, 0xc88e7u);
    (void)x86_sub(c, g8(c, 0), 0x44u, 0, 1);
    // 0c88e9  je 0xc8935
    X86_AT(c, 0xc88e9u);
    if (x86_cc(c, 4)) { goto L_c8935; }
    X86_TICK(c, 7);
    // 0c88eb  cmp al, 0x41
    X86_AT(c, 0xc88ebu);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0c88ed  je 0xc8935
    X86_AT(c, 0xc88edu);
    if (x86_cc(c, 4)) { goto L_c8935; }
    X86_TICK(c, 12);
    // 0c88ef  cmp byte ptr [edx + 0xa4ab0], 0
    X86_AT(c, 0xc88efu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB0u))), 0x0u, 0, 1);
    // 0c88f6  jne 0xc8935
    X86_AT(c, 0xc88f6u);
    if (x86_cc(c, 5)) { goto L_c8935; }
    X86_TICK(c, 14);
    // 0c88f8  push 0x3e8
    X86_AT(c, 0xc88f8u);
    { uint32_t v = 0x3E8u; push32(c, v); }
    // 0c88fd  push dword ptr [ebp - 4]
    X86_AT(c, 0xc88fdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c8900  call 0xc9b10
    X86_AT(c, 0xc8900u);
    push32(c, 0xc8905u); x86_call_known(c, 0xc9b10u, f_000c9b10); X86_RET(c, 0xc8905u);
    X86_TICK(c, 9);
    // 0c8905  push 8
    X86_AT(c, 0xc8905u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c8907  call 0xb607c
    X86_AT(c, 0xc8907u);
    push32(c, 0xc890cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc890cu);
    X86_TICK(c, 12);
    // 0c890c  push dword ptr [ebp - 4]
    X86_AT(c, 0xc890cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c890f  call 0xc7f0c
    X86_AT(c, 0xc890fu);
    push32(c, 0xc8914u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc8914u);
    X86_TICK(c, 9);
    // 0c8914  push 1
    X86_AT(c, 0xc8914u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c8916  call 0xbebbc
    X86_AT(c, 0xc8916u);
    push32(c, 0xc891bu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc891bu);
    X86_TICK(c, 12);
    // 0c891b  push dword ptr [ebp - 4]
    X86_AT(c, 0xc891bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c891e  call 0xc7f0c
    X86_AT(c, 0xc891eu);
    push32(c, 0xc8923u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc8923u);
    X86_TICK(c, 12);
    // 0c8923  push dword ptr [ebp - 4]
    X86_AT(c, 0xc8923u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c8926  call 0xbe720
    X86_AT(c, 0xc8926u);
    push32(c, 0xc892bu); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc892bu);
    X86_TICK(c, 7);
    // 0c892b  call 0xb75c0
    X86_AT(c, 0xc892bu);
    push32(c, 0xc8930u); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xc8930u);
    X86_TICK(c, 9);
    // 0c8930  add esp, 0x1c
    X86_AT(c, 0xc8930u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c8933  jmp 0xc893a
    X86_AT(c, 0xc8933u);
    goto L_c893a;
L_c8935:
    X86_TICK(c, 13);
    // 0c8935  inc dword ptr [ebp - 4]
    X86_AT(c, 0xc8935u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c8938  jmp 0xc88cc
    X86_AT(c, 0xc8938u);
    X86_POLL(c, 0xc88ccu); goto L_c88cc;
L_c893a:
    X86_TICK(c, 9);
    // 0c893a  mov eax, 0x21
    X86_AT(c, 0xc893au);
    c.r[0] = 0x21u;
    // 0c893f  jmp 0xc896c
    X86_AT(c, 0xc893fu);
    goto L_c896c;
L_c8941:
    X86_TICK(c, 12);
    // 0c8941  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xc8941u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0c8948  jne 0xc8961
    X86_AT(c, 0xc8948u);
    if (x86_cc(c, 5)) { goto L_c8961; }
    X86_TICK(c, 11);
    // 0c894a  cmp edi, dword ptr [0xa6068]
    X86_AT(c, 0xc894au);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xA6068u))), 0, 4);
    // 0c8950  jne 0xc8961
    X86_AT(c, 0xc8950u);
    if (x86_cc(c, 5)) { goto L_c8961; }
    X86_TICK(c, 11);
    // 0c8952  cmp esi, dword ptr [0xa606c]
    X86_AT(c, 0xc8952u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xA606Cu))), 0, 4);
    // 0c8958  jne 0xc8961
    X86_AT(c, 0xc8958u);
    if (x86_cc(c, 5)) { goto L_c8961; }
    X86_TICK(c, 9);
    // 0c895a  mov eax, 0xb
    X86_AT(c, 0xc895au);
    c.r[0] = 0xBu;
    // 0c895f  jmp 0xc896c
    X86_AT(c, 0xc895fu);
    goto L_c896c;
L_c8961:
    X86_TICK(c, 7);
    // 0c8961  and bl, bl
    X86_AT(c, 0xc8961u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c8963  jne 0xc8969
    X86_AT(c, 0xc8963u);
    if (x86_cc(c, 5)) { goto L_c8969; }
    X86_TICK(c, 9);
    // 0c8965  sub eax, eax
    X86_AT(c, 0xc8965u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c8967  jmp 0xc896c
    X86_AT(c, 0xc8967u);
    goto L_c896c;
L_c8969:
    X86_TICK(c, 3);
    // 0c8969  movzx eax, bl
    X86_AT(c, 0xc8969u);
    c.r[0] = g8(c, 3);
L_c896c:
    X86_TICK(c, 28);
    // 0c896c  pop edi
    X86_AT(c, 0xc896cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c896d  pop esi
    X86_AT(c, 0xc896du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c896e  pop ebx
    X86_AT(c, 0xc896eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c896f  leave 
    X86_AT(c, 0xc896fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8970  ret 
    X86_AT(c, 0xc8970u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc85fcu, "ran off the end of a function");
}
}

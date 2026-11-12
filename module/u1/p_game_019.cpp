#include "p_game_funcs.h"
namespace p_game {
void f_000e0208(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e0208  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xe0208u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e020c  add ecx, dword ptr [0xbef80]
    X86_AT(c, 0xe020cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xBEF80u))), 0, 4); }
    // 0e0212  cmp ecx, 0x254
    X86_AT(c, 0xe0212u);
    (void)x86_sub(c, c.r[1], 0x254u, 0, 4);
    // 0e0218  jle 0xe0221
    X86_AT(c, 0xe0218u);
    if (x86_cc(c, 14)) { goto L_e0221; }
    X86_TICK(c, 9);
    // 0e021a  mov eax, 0xc
    X86_AT(c, 0xe021au);
    c.r[0] = 0xCu;
    // 0e021f  jmp 0xe022f
    X86_AT(c, 0xe021fu);
    goto L_e022f;
L_e0221:
    X86_TICK(c, 7);
    // 0e0221  cmp ecx, 0xc
    X86_AT(c, 0xe0221u);
    (void)x86_sub(c, c.r[1], 0xCu, 0, 4);
    // 0e0224  jge 0xe022d
    X86_AT(c, 0xe0224u);
    if (x86_cc(c, 13)) { goto L_e022d; }
    X86_TICK(c, 9);
    // 0e0226  mov eax, 0x254
    X86_AT(c, 0xe0226u);
    c.r[0] = 0x254u;
    // 0e022b  jmp 0xe022f
    X86_AT(c, 0xe022bu);
    goto L_e022f;
L_e022d:
    X86_TICK(c, 2);
    // 0e022d  mov eax, ecx
    X86_AT(c, 0xe022du);
    c.r[0] = c.r[1];
L_e022f:
    X86_TICK(c, 10);
    // 0e022f  ret 
    X86_AT(c, 0xe022fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0208u, "ran off the end of a function");
}
void f_000e0230(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e0230  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xe0230u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e0234  add ecx, dword ptr [0xbef84]
    X86_AT(c, 0xe0234u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xBEF84u))), 0, 4); }
    // 0e023a  cmp ecx, 0x104
    X86_AT(c, 0xe023au);
    (void)x86_sub(c, c.r[1], 0x104u, 0, 4);
    // 0e0240  jle 0xe0249
    X86_AT(c, 0xe0240u);
    if (x86_cc(c, 14)) { goto L_e0249; }
    X86_TICK(c, 9);
    // 0e0242  mov eax, 0x33
    X86_AT(c, 0xe0242u);
    c.r[0] = 0x33u;
    // 0e0247  jmp 0xe0257
    X86_AT(c, 0xe0247u);
    goto L_e0257;
L_e0249:
    X86_TICK(c, 7);
    // 0e0249  cmp ecx, 0x33
    X86_AT(c, 0xe0249u);
    (void)x86_sub(c, c.r[1], 0x33u, 0, 4);
    // 0e024c  jge 0xe0255
    X86_AT(c, 0xe024cu);
    if (x86_cc(c, 13)) { goto L_e0255; }
    X86_TICK(c, 9);
    // 0e024e  mov eax, 0x104
    X86_AT(c, 0xe024eu);
    c.r[0] = 0x104u;
    // 0e0253  jmp 0xe0257
    X86_AT(c, 0xe0253u);
    goto L_e0257;
L_e0255:
    X86_TICK(c, 2);
    // 0e0255  mov eax, ecx
    X86_AT(c, 0xe0255u);
    c.r[0] = c.r[1];
L_e0257:
    X86_TICK(c, 10);
    // 0e0257  ret 
    X86_AT(c, 0xe0257u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0230u, "ran off the end of a function");
}
void f_000e0258(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e0258  mov dword ptr [0xbef80], 0
    X86_AT(c, 0xe0258u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF80u)), 0x0u);
    // 0e0262  mov dword ptr [0xbef84], 0
    X86_AT(c, 0xe0262u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF84u)), 0x0u);
    // 0e026c  call 0xdfbf8
    X86_AT(c, 0xe026cu);
    push32(c, 0xe0271u); x86_call_known(c, 0xdfbf8u, f_000dfbf8); X86_RET(c, 0xe0271u);
    X86_TICK(c, 7);
    // 0e0271  call 0xdfcc8
    X86_AT(c, 0xe0271u);
    push32(c, 0xe0276u); x86_call_known(c, 0xdfcc8u, f_000dfcc8); X86_RET(c, 0xe0276u);
    X86_TICK(c, 12);
    // 0e0276  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xe0276u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0e027d  je 0xe02de
    X86_AT(c, 0xe027du);
    if (x86_cc(c, 4)) { goto L_e02de; }
    X86_TICK(c, 9);
    // 0e027f  push 0xdbb4
    X86_AT(c, 0xe027fu);
    { uint32_t v = 0xDBB4u; push32(c, v); }
    // 0e0284  call 0xcc7bc
    X86_AT(c, 0xe0284u);
    push32(c, 0xe0289u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe0289u);
    X86_TICK(c, 9);
    // 0e0289  push 8
    X86_AT(c, 0xe0289u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e028b  call 0xc5ca4
    X86_AT(c, 0xe028bu);
    push32(c, 0xe0290u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe0290u);
    X86_TICK(c, 7);
    // 0e0290  call 0xdf778
    X86_AT(c, 0xe0290u);
    push32(c, 0xe0295u); x86_call_known(c, 0xdf778u, f_000df778); X86_RET(c, 0xe0295u);
    X86_TICK(c, 25);
    // 0e0295  cdq 
    X86_AT(c, 0xe0295u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e0296  sub eax, edx
    X86_AT(c, 0xe0296u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e0298  sar eax, 1
    X86_AT(c, 0xe0298u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e029a  cdq 
    X86_AT(c, 0xe029au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e029b  sub eax, edx
    X86_AT(c, 0xe029bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e029d  sar eax, 1
    X86_AT(c, 0xe029du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e029f  add eax, 5
    X86_AT(c, 0xe029fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5u, 0, 4); }
    // 0e02a2  push eax
    X86_AT(c, 0xe02a2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e02a3  call 0xdf7b0
    X86_AT(c, 0xe02a3u);
    push32(c, 0xe02a8u); x86_call_known(c, 0xdf7b0u, f_000df7b0); X86_RET(c, 0xe02a8u);
    X86_TICK(c, 7);
    // 0e02a8  call 0xdf778
    X86_AT(c, 0xe02a8u);
    push32(c, 0xe02adu); x86_call_known(c, 0xdf778u, f_000df778); X86_RET(c, 0xe02adu);
    X86_TICK(c, 9);
    // 0e02ad  add esp, 0xc
    X86_AT(c, 0xe02adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e02b0  and eax, eax
    X86_AT(c, 0xe02b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e02b2  jne 0xe02d2
    X86_AT(c, 0xe02b2u);
    if (x86_cc(c, 5)) { goto L_e02d2; }
    X86_TICK(c, 9);
    // 0e02b4  push 0xdbd4
    X86_AT(c, 0xe02b4u);
    { uint32_t v = 0xDBD4u; push32(c, v); }
    // 0e02b9  call 0xcc7bc
    X86_AT(c, 0xe02b9u);
    push32(c, 0xe02beu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe02beu);
    X86_TICK(c, 9);
    // 0e02be  push 0xdbf8
    X86_AT(c, 0xe02beu);
    { uint32_t v = 0xDBF8u; push32(c, v); }
    // 0e02c3  call 0xcc7bc
    X86_AT(c, 0xe02c3u);
    push32(c, 0xe02c8u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe02c8u);
    X86_TICK(c, 7);
    // 0e02c8  call 0xe0b30
    X86_AT(c, 0xe02c8u);
    push32(c, 0xe02cdu); x86_call_known(c, 0xe0b30u, f_000e0b30); X86_RET(c, 0xe02cdu);
    X86_TICK(c, 9);
    // 0e02cd  add esp, 8
    X86_AT(c, 0xe02cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e02d0  jmp 0xe02de
    X86_AT(c, 0xe02d0u);
    goto L_e02de;
L_e02d2:
    X86_TICK(c, 12);
    // 0e02d2  neg dword ptr [0xbef80]
    X86_AT(c, 0xe02d2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xBEF80u)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
    // 0e02d8  neg dword ptr [0xbef84]
    X86_AT(c, 0xe02d8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xBEF84u)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
L_e02de:
    X86_TICK(c, 10);
    // 0e02de  ret 
    X86_AT(c, 0xe02deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0258u, "ran off the end of a function");
}
void f_000e02e0(X86Cpu& c) {
    X86_TICK(c, 64);
    // 0e02e0  push ebp
    X86_AT(c, 0xe02e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e02e1  mov ebp, esp
    X86_AT(c, 0xe02e1u);
    c.r[5] = c.r[4];
    // 0e02e3  sub esp, 0x10
    X86_AT(c, 0xe02e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0e02e6  push ebx
    X86_AT(c, 0xe02e6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e02e7  push esi
    X86_AT(c, 0xe02e7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e02e8  push edi
    X86_AT(c, 0xe02e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e02e9  sub eax, eax
    X86_AT(c, 0xe02e9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e02eb  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe02ebu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0e02ee  xchg esi, eax
    X86_AT(c, 0xe02eeu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e02ef  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xe02efu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0e02f4  lea edx, [eax + eax*2]
    X86_AT(c, 0xe02f4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e02f7  lea edx, [eax + edx*8]
    X86_AT(c, 0xe02f7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0e02fa  lea edx, [eax + edx*4]
    X86_AT(c, 0xe02fau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e02fd  lea edx, [eax + edx*2]
    X86_AT(c, 0xe02fdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e0300  shl edx, 2
    X86_AT(c, 0xe0300u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0e0303  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xe0303u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0e030a  add eax, edx
    X86_AT(c, 0xe030au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e030c  add eax, 0xc0ae0
    X86_AT(c, 0xe030cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xC0AE0u, 0, 4); }
    // 0e0311  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe0311u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e0314  mov edi, esi
    X86_AT(c, 0xe0314u);
    c.r[7] = c.r[6];
L_e0316:
    X86_TICK(c, 7);
    // 0e0316  cmp edi, 4
    X86_AT(c, 0xe0316u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0e0319  jge 0xe0335
    X86_AT(c, 0xe0319u);
    if (x86_cc(c, 13)) { goto L_e0335; }
    X86_TICK(c, 20);
    // 0e031b  lea eax, [edi*8]
    X86_AT(c, 0xe031bu);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0e0322  lea eax, [eax + eax*2]
    X86_AT(c, 0xe0322u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e0325  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xe0325u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e0328  cmp dword ptr [edx + eax*1 + 0x1c], 0xffffffff
    X86_AT(c, 0xe0328u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] + 0x1Cu))), 0xFFFFFFFFu, 0, 4);
    // 0e032d  je 0xe0332
    X86_AT(c, 0xe032du);
    if (x86_cc(c, 4)) { goto L_e0332; }
    X86_TICK(c, 6);
    // 0e032f  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xe032fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_e0332:
    X86_TICK(c, 9);
    // 0e0332  inc edi
    X86_AT(c, 0xe0332u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e0333  jmp 0xe0316
    X86_AT(c, 0xe0333u);
    X86_POLL(c, 0xe0316u); goto L_e0316;
L_e0335:
    X86_TICK(c, 25);
    // 0e0335  mov eax, dword ptr [0xc03d4]
    X86_AT(c, 0xe0335u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0e033a  lea eax, [eax*8]
    X86_AT(c, 0xe033au);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0e0341  lea eax, [eax + eax*2]
    X86_AT(c, 0xe0341u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e0344  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xe0344u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e0347  lea eax, [edx + eax*1 + 0x14]
    X86_AT(c, 0xe0347u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] + 0x14u);
    // 0e034b  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe034bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e034e  push 0xdc68
    X86_AT(c, 0xe034eu);
    { uint32_t v = 0xDC68u; push32(c, v); }
    // 0e0353  call 0xcc7bc
    X86_AT(c, 0xe0353u);
    push32(c, 0xe0358u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe0358u);
    X86_TICK(c, 9);
    // 0e0358  push 0xdc98
    X86_AT(c, 0xe0358u);
    { uint32_t v = 0xDC98u; push32(c, v); }
    // 0e035d  call 0xcc7bc
    X86_AT(c, 0xe035du);
    push32(c, 0xe0362u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe0362u);
    X86_TICK(c, 20);
    // 0e0362  sub eax, eax
    X86_AT(c, 0xe0362u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e0364  mov dword ptr [0xbef84], eax
    X86_AT(c, 0xe0364u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF84u)), c.r[0]);
    // 0e0369  mov dword ptr [0xbef80], eax
    X86_AT(c, 0xe0369u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF80u)), c.r[0]);
    // 0e036e  add esp, 8
    X86_AT(c, 0xe036eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0371  cmp dword ptr [0xb032e], 4
    X86_AT(c, 0xe0371u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB032Eu))), 0x4u, 0, 4);
    // 0e0378  jge 0xe03b3
    X86_AT(c, 0xe0378u);
    if (x86_cc(c, 13)) { goto L_e03b3; }
    X86_TICK(c, 9);
    // 0e037a  push 0xdcb8
    X86_AT(c, 0xe037au);
    { uint32_t v = 0xDCB8u; push32(c, v); }
    // 0e037f  call 0xcc7bc
    X86_AT(c, 0xe037fu);
    push32(c, 0xe0384u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe0384u);
    X86_TICK(c, 11);
    // 0e0384  push 0xe
    X86_AT(c, 0xe0384u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e0386  push 0xdcbc
    X86_AT(c, 0xe0386u);
    { uint32_t v = 0xDCBCu; push32(c, v); }
    // 0e038b  call 0xcc830
    X86_AT(c, 0xe038bu);
    push32(c, 0xe0390u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xe0390u);
    X86_TICK(c, 11);
    // 0e0390  push 0xe
    X86_AT(c, 0xe0390u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e0392  push 0xdd08
    X86_AT(c, 0xe0392u);
    { uint32_t v = 0xDD08u; push32(c, v); }
    // 0e0397  call 0xcc830
    X86_AT(c, 0xe0397u);
    push32(c, 0xe039cu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xe039cu);
    X86_TICK(c, 9);
    // 0e039c  push 0xc8
    X86_AT(c, 0xe039cu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e03a1  call 0xd6660
    X86_AT(c, 0xe03a1u);
    push32(c, 0xe03a6u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe03a6u);
    X86_TICK(c, 7);
    // 0e03a6  call 0xe0b30
    X86_AT(c, 0xe03a6u);
    push32(c, 0xe03abu); x86_call_known(c, 0xe0b30u, f_000e0b30); X86_RET(c, 0xe03abu);
    X86_TICK(c, 9);
    // 0e03ab  add esp, 0x18
    X86_AT(c, 0xe03abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e03ae  jmp 0xe0540
    X86_AT(c, 0xe03aeu);
    goto L_e0540;
L_e03b3:
    X86_TICK(c, 12);
    // 0e03b3  cmp dword ptr [0xb031a], 0x1f4
    X86_AT(c, 0xe03b3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0x1F4u, 0, 4);
    // 0e03bd  jge 0xe03e5
    X86_AT(c, 0xe03bdu);
    if (x86_cc(c, 13)) { goto L_e03e5; }
    X86_TICK(c, 9);
    // 0e03bf  push 0xdd58
    X86_AT(c, 0xe03bfu);
    { uint32_t v = 0xDD58u; push32(c, v); }
    // 0e03c4  call 0xcc7bc
    X86_AT(c, 0xe03c4u);
    push32(c, 0xe03c9u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe03c9u);
    X86_TICK(c, 9);
    // 0e03c9  push 0xdda8
    X86_AT(c, 0xe03c9u);
    { uint32_t v = 0xDDA8u; push32(c, v); }
    // 0e03ce  call 0xcc7bc
    X86_AT(c, 0xe03ceu);
    push32(c, 0xe03d3u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe03d3u);
    X86_TICK(c, 9);
    // 0e03d3  push 0xde04
    X86_AT(c, 0xe03d3u);
    { uint32_t v = 0xDE04u; push32(c, v); }
    // 0e03d8  call 0xcc7bc
    X86_AT(c, 0xe03d8u);
    push32(c, 0xe03ddu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe03ddu);
    X86_TICK(c, 9);
    // 0e03dd  add esp, 0xc
    X86_AT(c, 0xe03ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e03e0  jmp 0xe0540
    X86_AT(c, 0xe03e0u);
    goto L_e0540;
L_e03e5:
    X86_TICK(c, 25);
    // 0e03e5  sub dword ptr [0xb031a], 0x1f4
    X86_AT(c, 0xe03e5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x1F4u, 0, 4)); }
    // 0e03ef  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe03efu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e03f2  push dword ptr [eax + 8]
    X86_AT(c, 0xe03f2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))); push32(c, v); }
    // 0e03f5  mov edx, eax
    X86_AT(c, 0xe03f5u);
    c.r[2] = c.r[0];
    // 0e03f7  call 0xdf668
    X86_AT(c, 0xe03f7u);
    push32(c, 0xe03fcu); x86_call_known(c, 0xdf668u, f_000df668); X86_RET(c, 0xe03fcu);
    X86_TICK(c, 14);
    // 0e03fc  mov dword ptr [edx + 0xc], eax
    X86_AT(c, 0xe03fcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)), c.r[0]);
    // 0e03ff  push dword ptr [edx + 8]
    X86_AT(c, 0xe03ffu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u))); push32(c, v); }
    // 0e0402  call 0xdf694
    X86_AT(c, 0xe0402u);
    push32(c, 0xe0407u); x86_call_known(c, 0xdf694u, f_000df694); X86_RET(c, 0xe0407u);
    X86_TICK(c, 16);
    // 0e0407  mov dword ptr [edx + 0x10], eax
    X86_AT(c, 0xe0407u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)), c.r[0]);
    // 0e040a  add esp, 8
    X86_AT(c, 0xe040au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e040d  cmp dword ptr [ebp - 0xc], 1
    X86_AT(c, 0xe040du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x1u, 0, 4);
    // 0e0411  jle 0xe0531
    X86_AT(c, 0xe0411u);
    if (x86_cc(c, 14)) { goto L_e0531; }
L_e0417:
    X86_TICK(c, 9);
    // 0e0417  push 0xde20
    X86_AT(c, 0xe0417u);
    { uint32_t v = 0xDE20u; push32(c, v); }
    // 0e041c  call 0xcc7bc
    X86_AT(c, 0xe041cu);
    push32(c, 0xe0421u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe0421u);
    X86_TICK(c, 2);
    // 0e0421  add esp, 4
    X86_AT(c, 0xe0421u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e0424:
    X86_TICK(c, 9);
    // 0e0424  push 7
    X86_AT(c, 0xe0424u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0426  call 0xc79a4
    X86_AT(c, 0xe0426u);
    push32(c, 0xe042bu); x86_call_known(c, 0xc79a4u, f_000c79a4); X86_RET(c, 0xe042bu);
    X86_TICK(c, 11);
    // 0e042b  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xe042bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0e042e  add esp, 4
    X86_AT(c, 0xe042eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e0431  and al, al
    X86_AT(c, 0xe0431u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e0433  je 0xe0424
    X86_AT(c, 0xe0433u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe0424u); goto L_e0424; }
    X86_TICK(c, 9);
    // 0e0435  push 0xde54
    X86_AT(c, 0xe0435u);
    { uint32_t v = 0xDE54u; push32(c, v); }
    // 0e043a  call 0xcc7bc
    X86_AT(c, 0xe043au);
    push32(c, 0xe043fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe043fu);
    X86_TICK(c, 9);
    // 0e043f  push 0xde56
    X86_AT(c, 0xe043fu);
    { uint32_t v = 0xDE56u; push32(c, v); }
    // 0e0444  call 0xcc7bc
    X86_AT(c, 0xe0444u);
    push32(c, 0xe0449u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe0449u);
    X86_TICK(c, 17);
    // 0e0449  add esp, 8
    X86_AT(c, 0xe0449u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e044c  movzx edx, byte ptr [ebp - 0xd]
    X86_AT(c, 0xe044cu);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)));
    // 0e0450  sub edx, 3
    X86_AT(c, 0xe0450u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0e0453  cmp edx, 4
    X86_AT(c, 0xe0453u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0e0456  ja 0xe0482
    X86_AT(c, 0xe0456u);
    if (x86_cc(c, 7)) { goto L_e0482; }
    X86_TICK(c, 7);
    // 0e0458  jmp dword ptr cs:[edx*4 + 0xe0460]
    X86_AT(c, 0xe0458u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE0460u)));
      switch (t) {
      case 0xe0474u: goto L_e0474;
      case 0xe0478u: goto L_e0478;
      case 0xe047cu: goto L_e047c;
      case 0xe0480u: goto L_e0480;
      case 0xe0482u: goto L_e0482;
      default: x86_jump(c, t); return; } }
L_e0474:
    X86_TICK(c, 9);
    // 0e0474  mov bl, 1
    X86_AT(c, 0xe0474u);
    s8(c, 3, 0x1u);
    // 0e0476  jmp 0xe0482
    X86_AT(c, 0xe0476u);
    goto L_e0482;
L_e0478:
    X86_TICK(c, 9);
    // 0e0478  mov bl, 2
    X86_AT(c, 0xe0478u);
    s8(c, 3, 0x2u);
    // 0e047a  jmp 0xe0482
    X86_AT(c, 0xe047au);
    goto L_e0482;
L_e047c:
    X86_TICK(c, 9);
    // 0e047c  mov bl, 3
    X86_AT(c, 0xe047cu);
    s8(c, 3, 0x3u);
    // 0e047e  jmp 0xe0482
    X86_AT(c, 0xe047eu);
    goto L_e0482;
L_e0480:
    X86_TICK(c, 2);
    // 0e0480  mov bl, 4
    X86_AT(c, 0xe0480u);
    s8(c, 3, 0x4u);
L_e0482:
    X86_TICK(c, 7);
    // 0e0482  cmp bl, 1
    X86_AT(c, 0xe0482u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e0485  jb 0xe0529
    X86_AT(c, 0xe0485u);
    if (x86_cc(c, 2)) { goto L_e0529; }
    X86_TICK(c, 7);
    // 0e048b  cmp bl, 4
    X86_AT(c, 0xe048bu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0e048e  ja 0xe0529
    X86_AT(c, 0xe048eu);
    if (x86_cc(c, 7)) { goto L_e0529; }
    X86_TICK(c, 14);
    // 0e0494  dec ebx
    X86_AT(c, 0xe0494u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0e0495  movzx ebx, bl
    X86_AT(c, 0xe0495u);
    c.r[3] = g8(c, 3);
    // 0e0498  push ebx
    X86_AT(c, 0xe0498u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0499  call 0xe0720
    X86_AT(c, 0xe0499u);
    push32(c, 0xe049eu); x86_call_known(c, 0xe0720u, f_000e0720); X86_RET(c, 0xe049eu);
    X86_TICK(c, 12);
    // 0e049e  xchg edi, eax
    X86_AT(c, 0xe049eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e049f  add esp, 4
    X86_AT(c, 0xe049fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e04a2  cmp edi, 0xffffffff
    X86_AT(c, 0xe04a2u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0e04a5  jne 0xe04c0
    X86_AT(c, 0xe04a5u);
    if (x86_cc(c, 5)) { goto L_e04c0; }
    X86_TICK(c, 9);
    // 0e04a7  push 0xde58
    X86_AT(c, 0xe04a7u);
    { uint32_t v = 0xDE58u; push32(c, v); }
    // 0e04ac  call 0xcc7bc
    X86_AT(c, 0xe04acu);
    push32(c, 0xe04b1u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe04b1u);
    X86_TICK(c, 9);
    // 0e04b1  push 0xde7c
    X86_AT(c, 0xe04b1u);
    { uint32_t v = 0xDE7Cu; push32(c, v); }
    // 0e04b6  call 0xcc7bc
    X86_AT(c, 0xe04b6u);
    push32(c, 0xe04bbu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe04bbu);
    X86_TICK(c, 9);
    // 0e04bb  add esp, 8
    X86_AT(c, 0xe04bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e04be  jmp 0xe0529
    X86_AT(c, 0xe04beu);
    goto L_e0529;
L_e04c0:
    X86_TICK(c, 66);
    // 0e04c0  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xe04c0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0e04c5  lea edx, [eax + eax*2]
    X86_AT(c, 0xe04c5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e04c8  lea edx, [eax + edx*8]
    X86_AT(c, 0xe04c8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0e04cb  lea edx, [eax + edx*4]
    X86_AT(c, 0xe04cbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e04ce  lea edx, [eax + edx*2]
    X86_AT(c, 0xe04ceu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e04d1  shl edx, 2
    X86_AT(c, 0xe04d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0e04d4  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xe04d4u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0e04db  add eax, edx
    X86_AT(c, 0xe04dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e04dd  lea edx, [edi*8]
    X86_AT(c, 0xe04ddu);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0e04e4  lea edx, [edx + edx*2]
    X86_AT(c, 0xe04e4u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0e04e7  add edx, eax
    X86_AT(c, 0xe04e7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e04e9  mov eax, dword ptr [edx + 0xc0b08]
    X86_AT(c, 0xe04e9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B08u)));
    // 0e04ef  mov dword ptr [0xc2da4], eax
    X86_AT(c, 0xe04efu);
    wr32((c.sbase[3] + (uint32_t)(0xC2DA4u)), c.r[0]);
    // 0e04f4  mov dword ptr [0xc03d4], edi
    X86_AT(c, 0xe04f4u);
    wr32((c.sbase[3] + (uint32_t)(0xC03D4u)), c.r[7]);
    // 0e04fa  mov esi, 1
    X86_AT(c, 0xe04fau);
    c.r[6] = 0x1u;
    // 0e04ff  push 0xdea8
    X86_AT(c, 0xe04ffu);
    { uint32_t v = 0xDEA8u; push32(c, v); }
    // 0e0504  push 7
    X86_AT(c, 0xe0504u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0506  call 0xc8cdc
    X86_AT(c, 0xe0506u);
    push32(c, 0xe050bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe050bu);
    X86_TICK(c, 17);
    // 0e050b  movzx ebx, bl
    X86_AT(c, 0xe050bu);
    c.r[3] = g8(c, 3);
    // 0e050e  push dword ptr [ebx*4 + 0xc2da8]
    X86_AT(c, 0xe050eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xC2DA8u))); push32(c, v); }
    // 0e0515  push 7
    X86_AT(c, 0xe0515u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0517  call 0xc8cdc
    X86_AT(c, 0xe0517u);
    push32(c, 0xe051cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe051cu);
    X86_TICK(c, 9);
    // 0e051c  push 0xded4
    X86_AT(c, 0xe051cu);
    { uint32_t v = 0xDED4u; push32(c, v); }
    // 0e0521  call 0xcc7bc
    X86_AT(c, 0xe0521u);
    push32(c, 0xe0526u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe0526u);
    X86_TICK(c, 2);
    // 0e0526  add esp, 0x14
    X86_AT(c, 0xe0526u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e0529:
    X86_TICK(c, 7);
    // 0e0529  and esi, esi
    X86_AT(c, 0xe0529u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e052b  je 0xe0417
    X86_AT(c, 0xe052bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe0417u); goto L_e0417; }
L_e0531:
    X86_TICK(c, 7);
    // 0e0531  call 0xdf658
    X86_AT(c, 0xe0531u);
    push32(c, 0xe0536u); x86_call_known(c, 0xdf658u, f_000df658); X86_RET(c, 0xe0536u);
    X86_TICK(c, 7);
    // 0e0536  call 0xdf660
    X86_AT(c, 0xe0536u);
    push32(c, 0xe053bu); x86_call_known(c, 0xdf660u, f_000df660); X86_RET(c, 0xe053bu);
    X86_TICK(c, 7);
    // 0e053b  call 0xdf5ec
    X86_AT(c, 0xe053bu);
    push32(c, 0xe0540u); x86_call_known(c, 0xdf5ecu, f_000df5ec); X86_RET(c, 0xe0540u);
L_e0540:
    X86_TICK(c, 28);
    // 0e0540  pop edi
    X86_AT(c, 0xe0540u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e0541  pop esi
    X86_AT(c, 0xe0541u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e0542  pop ebx
    X86_AT(c, 0xe0542u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e0543  leave 
    X86_AT(c, 0xe0543u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e0544  ret 
    X86_AT(c, 0xe0544u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe02e0u, "ran off the end of a function");
}
void f_000e0540(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e0540  pop edi
    X86_AT(c, 0xe0540u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e0541  pop esi
    X86_AT(c, 0xe0541u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e0542  pop ebx
    X86_AT(c, 0xe0542u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e0543  leave 
    X86_AT(c, 0xe0543u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e0544  ret 
    X86_AT(c, 0xe0544u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0540u, "ran off the end of a function");
}
void f_000e0548(X86Cpu& c) {
    X86_TICK(c, 63);
    // 0e0548  push ebp
    X86_AT(c, 0xe0548u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0549  mov ebp, esp
    X86_AT(c, 0xe0549u);
    c.r[5] = c.r[4];
    // 0e054b  push ebx
    X86_AT(c, 0xe054bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e054c  push esi
    X86_AT(c, 0xe054cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e054d  push edi
    X86_AT(c, 0xe054du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e054e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe054eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e0551  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xe0551u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0e0556  lea edx, [eax + eax*2]
    X86_AT(c, 0xe0556u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e0559  lea edx, [eax + edx*8]
    X86_AT(c, 0xe0559u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0e055c  lea edx, [eax + edx*4]
    X86_AT(c, 0xe055cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e055f  lea edx, [eax + edx*2]
    X86_AT(c, 0xe055fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e0562  shl edx, 2
    X86_AT(c, 0xe0562u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0e0565  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xe0565u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0e056c  add eax, edx
    X86_AT(c, 0xe056cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e056e  lea edx, [edi*8]
    X86_AT(c, 0xe056eu);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0e0575  lea edx, [edx + edx*2]
    X86_AT(c, 0xe0575u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0e0578  add edx, eax
    X86_AT(c, 0xe0578u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e057a  lea ebx, [edx + 0xc0af4]
    X86_AT(c, 0xe057au);
    c.r[3] = (uint32_t)(c.r[2] + 0xC0AF4u);
    // 0e0580  sub esi, esi
    X86_AT(c, 0xe0580u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e0582:
    X86_TICK(c, 7);
    // 0e0582  cmp esi, 4
    X86_AT(c, 0xe0582u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0e0585  jge 0xe05d1
    X86_AT(c, 0xe0585u);
    if (x86_cc(c, 13)) { goto L_e05d1; }
    X86_TICK(c, 21);
    // 0e0587  push edi
    X86_AT(c, 0xe0587u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0588  push dword ptr [0xc03d0]
    X86_AT(c, 0xe0588u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D0u))); push32(c, v); }
    // 0e058e  push dword ptr [0xc03cc]
    X86_AT(c, 0xe058eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03CCu))); push32(c, v); }
    // 0e0594  push esi
    X86_AT(c, 0xe0594u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0595  call 0xdf6b8
    X86_AT(c, 0xe0595u);
    push32(c, 0xe059au); x86_call_known(c, 0xdf6b8u, f_000df6b8); X86_RET(c, 0xe059au);
    X86_TICK(c, 13);
    // 0e059a  add esp, 0x10
    X86_AT(c, 0xe059au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e059d  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xe059du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0e059f  jne 0xe05ce
    X86_AT(c, 0xe059fu);
    if (x86_cc(c, 5)) { goto L_e05ce; }
    X86_TICK(c, 21);
    // 0e05a1  push edi
    X86_AT(c, 0xe05a1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e05a2  push dword ptr [0xc03d0]
    X86_AT(c, 0xe05a2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D0u))); push32(c, v); }
    // 0e05a8  push dword ptr [0xc03cc]
    X86_AT(c, 0xe05a8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03CCu))); push32(c, v); }
    // 0e05ae  push esi
    X86_AT(c, 0xe05aeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e05af  call 0xdf718
    X86_AT(c, 0xe05afu);
    push32(c, 0xe05b4u); x86_call_known(c, 0xdf718u, f_000df718); X86_RET(c, 0xe05b4u);
    X86_TICK(c, 13);
    // 0e05b4  add esp, 0x10
    X86_AT(c, 0xe05b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e05b7  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe05b7u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e05ba  jne 0xe05ce
    X86_AT(c, 0xe05bau);
    if (x86_cc(c, 5)) { goto L_e05ce; }
    X86_TICK(c, 9);
    // 0e05bc  push esi
    X86_AT(c, 0xe05bcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e05bd  call 0xdf61c
    X86_AT(c, 0xe05bdu);
    push32(c, 0xe05c2u); x86_call_known(c, 0xdf61cu, f_000df61c); X86_RET(c, 0xe05c2u);
    X86_TICK(c, 13);
    // 0e05c2  add esp, 4
    X86_AT(c, 0xe05c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e05c5  cmp eax, dword ptr [ebx + 0x14]
    X86_AT(c, 0xe05c5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))), 0, 4);
    // 0e05c8  je 0xe0717
    X86_AT(c, 0xe05c8u);
    if (x86_cc(c, 4)) { goto L_e0717; }
L_e05ce:
    X86_TICK(c, 9);
    // 0e05ce  inc esi
    X86_AT(c, 0xe05ceu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e05cf  jmp 0xe0582
    X86_AT(c, 0xe05cfu);
    X86_POLL(c, 0xe0582u); goto L_e0582;
L_e05d1:
    X86_TICK(c, 7);
    // 0e05d1  cmp esi, 4
    X86_AT(c, 0xe05d1u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0e05d4  jne 0xe0719
    X86_AT(c, 0xe05d4u);
    if (x86_cc(c, 5)) { goto L_e0719; }
    X86_TICK(c, 2);
    // 0e05da  sub esi, esi
    X86_AT(c, 0xe05dau);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e05dc:
    X86_TICK(c, 7);
    // 0e05dc  cmp esi, 4
    X86_AT(c, 0xe05dcu);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0e05df  jge 0xe070d
    X86_AT(c, 0xe05dfu);
    if (x86_cc(c, 13)) { goto L_e070d; }
    X86_TICK(c, 7);
    // 0e05e5  and esi, esi
    X86_AT(c, 0xe05e5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e05e7  je 0xe05f2
    X86_AT(c, 0xe05e7u);
    if (x86_cc(c, 4)) { goto L_e05f2; }
    X86_TICK(c, 7);
    // 0e05e9  cmp esi, 1
    X86_AT(c, 0xe05e9u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e05ec  jne 0xe0675
    X86_AT(c, 0xe05ecu);
    if (x86_cc(c, 5)) { goto L_e0675; }
L_e05f2:
    X86_TICK(c, 21);
    // 0e05f2  push edi
    X86_AT(c, 0xe05f2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e05f3  push dword ptr [0xc03d0]
    X86_AT(c, 0xe05f3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D0u))); push32(c, v); }
    // 0e05f9  push dword ptr [0xc03cc]
    X86_AT(c, 0xe05f9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03CCu))); push32(c, v); }
    // 0e05ff  push esi
    X86_AT(c, 0xe05ffu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0600  call 0xdf6b8
    X86_AT(c, 0xe0600u);
    push32(c, 0xe0605u); x86_call_known(c, 0xdf6b8u, f_000df6b8); X86_RET(c, 0xe0605u);
    X86_TICK(c, 13);
    // 0e0605  add esp, 0x10
    X86_AT(c, 0xe0605u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e0608  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xe0608u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0e060a  jne 0xe0675
    X86_AT(c, 0xe060au);
    if (x86_cc(c, 5)) { goto L_e0675; }
    X86_TICK(c, 21);
    // 0e060c  push edi
    X86_AT(c, 0xe060cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e060d  push dword ptr [0xc03d0]
    X86_AT(c, 0xe060du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D0u))); push32(c, v); }
    // 0e0613  push dword ptr [0xc03cc]
    X86_AT(c, 0xe0613u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03CCu))); push32(c, v); }
    // 0e0619  push esi
    X86_AT(c, 0xe0619u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e061a  call 0xdf718
    X86_AT(c, 0xe061au);
    push32(c, 0xe061fu); x86_call_known(c, 0xdf718u, f_000df718); X86_RET(c, 0xe061fu);
    X86_TICK(c, 15);
    // 0e061f  add esp, 0x10
    X86_AT(c, 0xe061fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e0622  sub eax, 7
    X86_AT(c, 0xe0622u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x7u, 0, 4); }
    // 0e0625  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe0625u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e0628  jge 0xe0675
    X86_AT(c, 0xe0628u);
    if (x86_cc(c, 13)) { goto L_e0675; }
    X86_TICK(c, 21);
    // 0e062a  push edi
    X86_AT(c, 0xe062au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e062b  push dword ptr [0xc03d0]
    X86_AT(c, 0xe062bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D0u))); push32(c, v); }
    // 0e0631  push dword ptr [0xc03cc]
    X86_AT(c, 0xe0631u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03CCu))); push32(c, v); }
    // 0e0637  push esi
    X86_AT(c, 0xe0637u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0638  call 0xdf718
    X86_AT(c, 0xe0638u);
    push32(c, 0xe063du); x86_call_known(c, 0xdf718u, f_000df718); X86_RET(c, 0xe063du);
    X86_TICK(c, 15);
    // 0e063d  add esp, 0x10
    X86_AT(c, 0xe063du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e0640  add eax, 7
    X86_AT(c, 0xe0640u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x7u, 0, 4); }
    // 0e0643  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe0643u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e0646  jle 0xe0675
    X86_AT(c, 0xe0646u);
    if (x86_cc(c, 14)) { goto L_e0675; }
    X86_TICK(c, 21);
    // 0e0648  push edi
    X86_AT(c, 0xe0648u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0649  push dword ptr [0xc03d0]
    X86_AT(c, 0xe0649u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D0u))); push32(c, v); }
    // 0e064f  push dword ptr [0xc03cc]
    X86_AT(c, 0xe064fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03CCu))); push32(c, v); }
    // 0e0655  push esi
    X86_AT(c, 0xe0655u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0656  call 0xdf718
    X86_AT(c, 0xe0656u);
    push32(c, 0xe065bu); x86_call_known(c, 0xdf718u, f_000df718); X86_RET(c, 0xe065bu);
    X86_TICK(c, 13);
    // 0e065b  add esp, 0x10
    X86_AT(c, 0xe065bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e065e  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe065eu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e0661  je 0xe0675
    X86_AT(c, 0xe0661u);
    if (x86_cc(c, 4)) { goto L_e0675; }
    X86_TICK(c, 9);
    // 0e0663  push esi
    X86_AT(c, 0xe0663u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0664  call 0xdf61c
    X86_AT(c, 0xe0664u);
    push32(c, 0xe0669u); x86_call_known(c, 0xdf61cu, f_000df61c); X86_RET(c, 0xe0669u);
    X86_TICK(c, 13);
    // 0e0669  add esp, 4
    X86_AT(c, 0xe0669u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e066c  cmp eax, dword ptr [ebx + 0x14]
    X86_AT(c, 0xe066cu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))), 0, 4);
    // 0e066f  je 0xe0700
    X86_AT(c, 0xe066fu);
    if (x86_cc(c, 4)) { goto L_e0700; }
L_e0675:
    X86_TICK(c, 7);
    // 0e0675  cmp esi, 2
    X86_AT(c, 0xe0675u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0e0678  je 0xe0683
    X86_AT(c, 0xe0678u);
    if (x86_cc(c, 4)) { goto L_e0683; }
    X86_TICK(c, 7);
    // 0e067a  cmp esi, 3
    X86_AT(c, 0xe067au);
    (void)x86_sub(c, c.r[6], 0x3u, 0, 4);
    // 0e067d  jne 0xe0707
    X86_AT(c, 0xe067du);
    if (x86_cc(c, 5)) { goto L_e0707; }
L_e0683:
    X86_TICK(c, 21);
    // 0e0683  push edi
    X86_AT(c, 0xe0683u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0684  push dword ptr [0xc03d0]
    X86_AT(c, 0xe0684u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D0u))); push32(c, v); }
    // 0e068a  push dword ptr [0xc03cc]
    X86_AT(c, 0xe068au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03CCu))); push32(c, v); }
    // 0e0690  push esi
    X86_AT(c, 0xe0690u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0691  call 0xdf6b8
    X86_AT(c, 0xe0691u);
    push32(c, 0xe0696u); x86_call_known(c, 0xdf6b8u, f_000df6b8); X86_RET(c, 0xe0696u);
    X86_TICK(c, 15);
    // 0e0696  add esp, 0x10
    X86_AT(c, 0xe0696u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e0699  sub eax, 7
    X86_AT(c, 0xe0699u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x7u, 0, 4); }
    // 0e069c  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xe069cu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0e069e  jge 0xe0707
    X86_AT(c, 0xe069eu);
    if (x86_cc(c, 13)) { goto L_e0707; }
    X86_TICK(c, 21);
    // 0e06a0  push edi
    X86_AT(c, 0xe06a0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e06a1  push dword ptr [0xc03d0]
    X86_AT(c, 0xe06a1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D0u))); push32(c, v); }
    // 0e06a7  push dword ptr [0xc03cc]
    X86_AT(c, 0xe06a7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03CCu))); push32(c, v); }
    // 0e06ad  push esi
    X86_AT(c, 0xe06adu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e06ae  call 0xdf6b8
    X86_AT(c, 0xe06aeu);
    push32(c, 0xe06b3u); x86_call_known(c, 0xdf6b8u, f_000df6b8); X86_RET(c, 0xe06b3u);
    X86_TICK(c, 15);
    // 0e06b3  add esp, 0x10
    X86_AT(c, 0xe06b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e06b6  add eax, 7
    X86_AT(c, 0xe06b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x7u, 0, 4); }
    // 0e06b9  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xe06b9u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0e06bb  jle 0xe0707
    X86_AT(c, 0xe06bbu);
    if (x86_cc(c, 14)) { goto L_e0707; }
    X86_TICK(c, 21);
    // 0e06bd  push edi
    X86_AT(c, 0xe06bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e06be  push dword ptr [0xc03d0]
    X86_AT(c, 0xe06beu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D0u))); push32(c, v); }
    // 0e06c4  push dword ptr [0xc03cc]
    X86_AT(c, 0xe06c4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03CCu))); push32(c, v); }
    // 0e06ca  push esi
    X86_AT(c, 0xe06cau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e06cb  call 0xdf6b8
    X86_AT(c, 0xe06cbu);
    push32(c, 0xe06d0u); x86_call_known(c, 0xdf6b8u, f_000df6b8); X86_RET(c, 0xe06d0u);
    X86_TICK(c, 13);
    // 0e06d0  add esp, 0x10
    X86_AT(c, 0xe06d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e06d3  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xe06d3u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0e06d5  je 0xe0707
    X86_AT(c, 0xe06d5u);
    if (x86_cc(c, 4)) { goto L_e0707; }
    X86_TICK(c, 21);
    // 0e06d7  push edi
    X86_AT(c, 0xe06d7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e06d8  push dword ptr [0xc03d0]
    X86_AT(c, 0xe06d8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D0u))); push32(c, v); }
    // 0e06de  push dword ptr [0xc03cc]
    X86_AT(c, 0xe06deu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03CCu))); push32(c, v); }
    // 0e06e4  push esi
    X86_AT(c, 0xe06e4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e06e5  call 0xdf718
    X86_AT(c, 0xe06e5u);
    push32(c, 0xe06eau); x86_call_known(c, 0xdf718u, f_000df718); X86_RET(c, 0xe06eau);
    X86_TICK(c, 13);
    // 0e06ea  add esp, 0x10
    X86_AT(c, 0xe06eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e06ed  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe06edu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e06f0  jne 0xe0707
    X86_AT(c, 0xe06f0u);
    if (x86_cc(c, 5)) { goto L_e0707; }
    X86_TICK(c, 9);
    // 0e06f2  push esi
    X86_AT(c, 0xe06f2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e06f3  call 0xdf61c
    X86_AT(c, 0xe06f3u);
    push32(c, 0xe06f8u); x86_call_known(c, 0xdf61cu, f_000df61c); X86_RET(c, 0xe06f8u);
    X86_TICK(c, 13);
    // 0e06f8  add esp, 4
    X86_AT(c, 0xe06f8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e06fb  cmp eax, dword ptr [ebx + 0x14]
    X86_AT(c, 0xe06fbu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))), 0, 4);
    // 0e06fe  jne 0xe0707
    X86_AT(c, 0xe06feu);
    if (x86_cc(c, 5)) { goto L_e0707; }
L_e0700:
    X86_TICK(c, 9);
    // 0e0700  mov esi, 5
    X86_AT(c, 0xe0700u);
    c.r[6] = 0x5u;
    // 0e0705  jmp 0xe0717
    X86_AT(c, 0xe0705u);
    goto L_e0717;
L_e0707:
    X86_TICK(c, 9);
    // 0e0707  inc esi
    X86_AT(c, 0xe0707u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e0708  jmp 0xe05dc
    X86_AT(c, 0xe0708u);
    X86_POLL(c, 0xe05dcu); goto L_e05dc;
L_e070d:
    X86_TICK(c, 7);
    // 0e070d  cmp esi, 4
    X86_AT(c, 0xe070du);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0e0710  jne 0xe0717
    X86_AT(c, 0xe0710u);
    if (x86_cc(c, 5)) { goto L_e0717; }
    X86_TICK(c, 2);
    // 0e0712  mov esi, 0xffffffff
    X86_AT(c, 0xe0712u);
    c.r[6] = 0xFFFFFFFFu;
L_e0717:
    X86_TICK(c, 2);
    // 0e0717  mov eax, esi
    X86_AT(c, 0xe0717u);
    c.r[0] = c.r[6];
L_e0719:
    X86_TICK(c, 28);
    // 0e0719  pop edi
    X86_AT(c, 0xe0719u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e071a  pop esi
    X86_AT(c, 0xe071au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e071b  pop ebx
    X86_AT(c, 0xe071bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e071c  leave 
    X86_AT(c, 0xe071cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e071d  ret 
    X86_AT(c, 0xe071du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0548u, "ran off the end of a function");
}
void f_000e0720(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e0720  push ebp
    X86_AT(c, 0xe0720u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0721  mov ebp, esp
    X86_AT(c, 0xe0721u);
    c.r[5] = c.r[4];
    // 0e0723  push ebx
    X86_AT(c, 0xe0723u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0724  push esi
    X86_AT(c, 0xe0724u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0725  push edi
    X86_AT(c, 0xe0725u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0726  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe0726u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e0729  sub esi, esi
    X86_AT(c, 0xe0729u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e072b:
    X86_TICK(c, 7);
    // 0e072b  cmp esi, 4
    X86_AT(c, 0xe072bu);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0e072e  jge 0xe0797
    X86_AT(c, 0xe072eu);
    if (x86_cc(c, 13)) { goto L_e0797; }
    X86_TICK(c, 68);
    // 0e0730  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xe0730u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0e0735  lea edx, [eax + eax*2]
    X86_AT(c, 0xe0735u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e0738  lea edx, [eax + edx*8]
    X86_AT(c, 0xe0738u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0e073b  lea edx, [eax + edx*4]
    X86_AT(c, 0xe073bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e073e  lea edx, [eax + edx*2]
    X86_AT(c, 0xe073eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e0741  shl edx, 2
    X86_AT(c, 0xe0741u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0e0744  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xe0744u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0e074b  add eax, edx
    X86_AT(c, 0xe074bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e074d  lea edx, [esi*8]
    X86_AT(c, 0xe074du);
    c.r[2] = (uint32_t)(c.r[6] * 8);
    // 0e0754  lea edx, [edx + edx*2]
    X86_AT(c, 0xe0754u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0e0757  add edx, eax
    X86_AT(c, 0xe0757u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e0759  lea ebx, [edx + 0xc0af4]
    X86_AT(c, 0xe0759u);
    c.r[3] = (uint32_t)(c.r[2] + 0xC0AF4u);
    // 0e075f  push esi
    X86_AT(c, 0xe075fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0760  push dword ptr [0xc03d0]
    X86_AT(c, 0xe0760u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D0u))); push32(c, v); }
    // 0e0766  push dword ptr [0xc03cc]
    X86_AT(c, 0xe0766u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03CCu))); push32(c, v); }
    // 0e076c  push edi
    X86_AT(c, 0xe076cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e076d  call 0xdf6b8
    X86_AT(c, 0xe076du);
    push32(c, 0xe0772u); x86_call_known(c, 0xdf6b8u, f_000df6b8); X86_RET(c, 0xe0772u);
    X86_TICK(c, 13);
    // 0e0772  add esp, 0x10
    X86_AT(c, 0xe0772u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e0775  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xe0775u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0e0777  jne 0xe0794
    X86_AT(c, 0xe0777u);
    if (x86_cc(c, 5)) { goto L_e0794; }
    X86_TICK(c, 21);
    // 0e0779  push esi
    X86_AT(c, 0xe0779u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e077a  push dword ptr [0xc03d0]
    X86_AT(c, 0xe077au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D0u))); push32(c, v); }
    // 0e0780  push dword ptr [0xc03cc]
    X86_AT(c, 0xe0780u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03CCu))); push32(c, v); }
    // 0e0786  push edi
    X86_AT(c, 0xe0786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0787  call 0xdf718
    X86_AT(c, 0xe0787u);
    push32(c, 0xe078cu); x86_call_known(c, 0xdf718u, f_000df718); X86_RET(c, 0xe078cu);
    X86_TICK(c, 13);
    // 0e078c  add esp, 0x10
    X86_AT(c, 0xe078cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e078f  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe078fu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e0792  je 0xe0797
    X86_AT(c, 0xe0792u);
    if (x86_cc(c, 4)) { goto L_e0797; }
L_e0794:
    X86_TICK(c, 9);
    // 0e0794  inc esi
    X86_AT(c, 0xe0794u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e0795  jmp 0xe072b
    X86_AT(c, 0xe0795u);
    X86_POLL(c, 0xe072bu); goto L_e072b;
L_e0797:
    X86_TICK(c, 7);
    // 0e0797  cmp esi, 4
    X86_AT(c, 0xe0797u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0e079a  jne 0xe07a1
    X86_AT(c, 0xe079au);
    if (x86_cc(c, 5)) { goto L_e07a1; }
    X86_TICK(c, 2);
    // 0e079c  mov esi, 0xffffffff
    X86_AT(c, 0xe079cu);
    c.r[6] = 0xFFFFFFFFu;
L_e07a1:
    X86_TICK(c, 30);
    // 0e07a1  mov eax, esi
    X86_AT(c, 0xe07a1u);
    c.r[0] = c.r[6];
    // 0e07a3  pop edi
    X86_AT(c, 0xe07a3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e07a4  pop esi
    X86_AT(c, 0xe07a4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e07a5  pop ebx
    X86_AT(c, 0xe07a5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e07a6  leave 
    X86_AT(c, 0xe07a6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e07a7  ret 
    X86_AT(c, 0xe07a7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0720u, "ran off the end of a function");
}
void f_000e07a8(X86Cpu& c) {
    X86_TICK(c, 69);
    // 0e07a8  push ebp
    X86_AT(c, 0xe07a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e07a9  mov ebp, esp
    X86_AT(c, 0xe07a9u);
    c.r[5] = c.r[4];
    // 0e07ab  sub esp, 8
    X86_AT(c, 0xe07abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e07ae  push ebx
    X86_AT(c, 0xe07aeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e07af  push esi
    X86_AT(c, 0xe07afu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e07b0  push edi
    X86_AT(c, 0xe07b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e07b1  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe07b1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0e07b8  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xe07b8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0e07bd  lea edx, [eax + eax*2]
    X86_AT(c, 0xe07bdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e07c0  lea edx, [eax + edx*8]
    X86_AT(c, 0xe07c0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0e07c3  lea edx, [eax + edx*4]
    X86_AT(c, 0xe07c3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e07c6  lea edx, [eax + edx*2]
    X86_AT(c, 0xe07c6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e07c9  shl edx, 2
    X86_AT(c, 0xe07c9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0e07cc  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xe07ccu);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0e07d3  add eax, edx
    X86_AT(c, 0xe07d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e07d5  add eax, 0xc0ae0
    X86_AT(c, 0xe07d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xC0AE0u, 0, 4); }
    // 0e07da  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe07dau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e07dd  cmp dword ptr [0xc03d8], 1
    X86_AT(c, 0xe07ddu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D8u))), 0x1u, 0, 4);
    // 0e07e4  jne 0xe07f0
    X86_AT(c, 0xe07e4u);
    if (x86_cc(c, 5)) { goto L_e07f0; }
    X86_TICK(c, 7);
    // 0e07e6  call 0xe0034
    X86_AT(c, 0xe07e6u);
    push32(c, 0xe07ebu); x86_call_known(c, 0xe0034u, f_000e0034); X86_RET(c, 0xe07ebu);
    X86_TICK(c, 7);
    // 0e07eb  jmp 0xe09c0
    X86_AT(c, 0xe07ebu);
    goto L_e09c0;
L_e07f0:
    X86_TICK(c, 29);
    // 0e07f0  mov eax, dword ptr [0xc03d4]
    X86_AT(c, 0xe07f0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0e07f5  lea eax, [eax*8]
    X86_AT(c, 0xe07f5u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0e07fc  lea eax, [eax + eax*2]
    X86_AT(c, 0xe07fcu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e07ff  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xe07ffu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e0802  lea esi, [edx + eax*1 + 0x14]
    X86_AT(c, 0xe0802u);
    c.r[6] = (uint32_t)(c.r[2] + c.r[0] + 0x14u);
    // 0e0806  mov edi, dword ptr [esi + 0x14]
    X86_AT(c, 0xe0806u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)));
    // 0e0809  cmp edi, dword ptr [0xc2da4]
    X86_AT(c, 0xe0809u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xC2DA4u))), 0, 4);
    // 0e080f  jne 0xe0827
    X86_AT(c, 0xe080fu);
    if (x86_cc(c, 5)) { goto L_e0827; }
    X86_TICK(c, 12);
    // 0e0811  cmp dword ptr [0xbef80], 0
    X86_AT(c, 0xe0811u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF80u))), 0x0u, 0, 4);
    // 0e0818  jne 0xe0827
    X86_AT(c, 0xe0818u);
    if (x86_cc(c, 5)) { goto L_e0827; }
    X86_TICK(c, 12);
    // 0e081a  cmp dword ptr [0xbef84], 0
    X86_AT(c, 0xe081au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF84u))), 0x0u, 0, 4);
    // 0e0821  jne 0xe0827
    X86_AT(c, 0xe0821u);
    if (x86_cc(c, 5)) { goto L_e0827; }
    X86_TICK(c, 9);
    // 0e0823  sub eax, eax
    X86_AT(c, 0xe0823u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e0825  jmp 0xe0829
    X86_AT(c, 0xe0825u);
    goto L_e0829;
L_e0827:
    X86_TICK(c, 2);
    // 0e0827  mov al, 1
    X86_AT(c, 0xe0827u);
    s8(c, 0, 0x1u);
L_e0829:
    X86_TICK(c, 10);
    // 0e0829  movzx ebx, al
    X86_AT(c, 0xe0829u);
    c.r[3] = g8(c, 0);
    // 0e082c  and ebx, ebx
    X86_AT(c, 0xe082cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e082e  jne 0xe083d
    X86_AT(c, 0xe082eu);
    if (x86_cc(c, 5)) { goto L_e083d; }
    X86_TICK(c, 12);
    // 0e0830  cmp dword ptr [0xbef88], 0
    X86_AT(c, 0xe0830u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF88u))), 0x0u, 0, 4);
    // 0e0837  je 0xe09ad
    X86_AT(c, 0xe0837u);
    if (x86_cc(c, 4)) { goto L_e09ad; }
L_e083d:
    X86_TICK(c, 7);
    // 0e083d  and ebx, ebx
    X86_AT(c, 0xe083du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e083f  jne 0xe0859
    X86_AT(c, 0xe083fu);
    if (x86_cc(c, 5)) { goto L_e0859; }
    X86_TICK(c, 29);
    // 0e0841  push 1
    X86_AT(c, 0xe0841u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e0843  push dword ptr [esi + 4]
    X86_AT(c, 0xe0843u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 0e0846  push dword ptr [esi]
    X86_AT(c, 0xe0846u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0e0848  push dword ptr [0xc2da4]
    X86_AT(c, 0xe0848u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DA4u))); push32(c, v); }
    // 0e084e  push dword ptr [esi + 8]
    X86_AT(c, 0xe084eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))); push32(c, v); }
    // 0e0851  call 0xdf8b4
    X86_AT(c, 0xe0851u);
    push32(c, 0xe0856u); x86_call_known(c, 0xdf8b4u, f_000df8b4); X86_RET(c, 0xe0856u);
    X86_TICK(c, 2);
    // 0e0856  add esp, 0x14
    X86_AT(c, 0xe0856u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e0859:
    X86_TICK(c, 7);
    // 0e0859  and ebx, ebx
    X86_AT(c, 0xe0859u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e085b  je 0xe089d
    X86_AT(c, 0xe085bu);
    if (x86_cc(c, 4)) { goto L_e089d; }
    X86_TICK(c, 12);
    // 0e085d  cmp dword ptr [0xbef88], 0
    X86_AT(c, 0xe085du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF88u))), 0x0u, 0, 4);
    // 0e0864  je 0xe0882
    X86_AT(c, 0xe0864u);
    if (x86_cc(c, 4)) { goto L_e0882; }
    X86_TICK(c, 31);
    // 0e0866  push 0
    X86_AT(c, 0xe0866u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e0868  push 0
    X86_AT(c, 0xe0868u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e086a  push dword ptr [esi + 4]
    X86_AT(c, 0xe086au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 0e086d  push dword ptr [esi]
    X86_AT(c, 0xe086du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0e086f  push dword ptr [0xc2da4]
    X86_AT(c, 0xe086fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DA4u))); push32(c, v); }
    // 0e0875  push dword ptr [esi + 8]
    X86_AT(c, 0xe0875u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))); push32(c, v); }
    // 0e0878  call 0xdfe00
    X86_AT(c, 0xe0878u);
    push32(c, 0xe087du); x86_call_known(c, 0xdfe00u, f_000dfe00); X86_RET(c, 0xe087du);
    X86_TICK(c, 9);
    // 0e087d  add esp, 0x18
    X86_AT(c, 0xe087du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e0880  jmp 0xe089d
    X86_AT(c, 0xe0880u);
    goto L_e089d;
L_e0882:
    X86_TICK(c, 29);
    // 0e0882  push 0
    X86_AT(c, 0xe0882u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e0884  push dword ptr [esi + 4]
    X86_AT(c, 0xe0884u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 0e0887  push dword ptr [esi]
    X86_AT(c, 0xe0887u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0e0889  push dword ptr [0xc2da4]
    X86_AT(c, 0xe0889u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DA4u))); push32(c, v); }
    // 0e088f  push dword ptr [esi + 8]
    X86_AT(c, 0xe088fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))); push32(c, v); }
    // 0e0892  call 0xdf8b4
    X86_AT(c, 0xe0892u);
    push32(c, 0xe0897u); x86_call_known(c, 0xdf8b4u, f_000df8b4); X86_RET(c, 0xe0897u);
    X86_TICK(c, 4);
    // 0e0897  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe0897u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e089a  add esp, 0x14
    X86_AT(c, 0xe089au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e089d:
    X86_TICK(c, 7);
    // 0e089d  and ebx, ebx
    X86_AT(c, 0xe089du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e089f  je 0xe09a4
    X86_AT(c, 0xe089fu);
    if (x86_cc(c, 4)) { goto L_e09a4; }
    X86_TICK(c, 12);
    // 0e08a5  push dword ptr [esi]
    X86_AT(c, 0xe08a5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0e08a7  call 0xe0208
    X86_AT(c, 0xe08a7u);
    push32(c, 0xe08acu); x86_call_known(c, 0xe0208u, f_000e0208); X86_RET(c, 0xe08acu);
    X86_TICK(c, 14);
    // 0e08ac  mov dword ptr [esi], eax
    X86_AT(c, 0xe08acu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0e08ae  push dword ptr [esi + 4]
    X86_AT(c, 0xe08aeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 0e08b1  call 0xe0230
    X86_AT(c, 0xe08b1u);
    push32(c, 0xe08b6u); x86_call_known(c, 0xe0230u, f_000e0230); X86_RET(c, 0xe08b6u);
    X86_TICK(c, 16);
    // 0e08b6  mov dword ptr [esi + 4], eax
    X86_AT(c, 0xe08b6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 0e08b9  add esp, 8
    X86_AT(c, 0xe08b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e08bc  cmp dword ptr [0xbef88], 0
    X86_AT(c, 0xe08bcu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF88u))), 0x0u, 0, 4);
    // 0e08c3  je 0xe08dd
    X86_AT(c, 0xe08c3u);
    if (x86_cc(c, 4)) { goto L_e08dd; }
    X86_TICK(c, 25);
    // 0e08c5  push 1
    X86_AT(c, 0xe08c5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e08c7  push 0
    X86_AT(c, 0xe08c7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e08c9  push eax
    X86_AT(c, 0xe08c9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e08ca  push dword ptr [esi]
    X86_AT(c, 0xe08cau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0e08cc  push edi
    X86_AT(c, 0xe08ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e08cd  push dword ptr [esi + 8]
    X86_AT(c, 0xe08cdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))); push32(c, v); }
    // 0e08d0  call 0xdfe00
    X86_AT(c, 0xe08d0u);
    push32(c, 0xe08d5u); x86_call_known(c, 0xdfe00u, f_000dfe00); X86_RET(c, 0xe08d5u);
    X86_TICK(c, 11);
    // 0e08d5  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe08d5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e08d8  add esp, 0x18
    X86_AT(c, 0xe08d8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e08db  jmp 0xe08f3
    X86_AT(c, 0xe08dbu);
    goto L_e08f3;
L_e08dd:
    X86_TICK(c, 26);
    // 0e08dd  push 1
    X86_AT(c, 0xe08ddu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e08df  push dword ptr [esi + 4]
    X86_AT(c, 0xe08dfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 0e08e2  push dword ptr [esi]
    X86_AT(c, 0xe08e2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0e08e4  push edi
    X86_AT(c, 0xe08e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e08e5  push dword ptr [esi + 8]
    X86_AT(c, 0xe08e5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))); push32(c, v); }
    // 0e08e8  call 0xdf8b4
    X86_AT(c, 0xe08e8u);
    push32(c, 0xe08edu); x86_call_known(c, 0xdf8b4u, f_000df8b4); X86_RET(c, 0xe08edu);
    X86_TICK(c, 4);
    // 0e08ed  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe08edu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e08f0  add esp, 0x14
    X86_AT(c, 0xe08f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e08f3:
    X86_TICK(c, 14);
    // 0e08f3  mov dword ptr [0xc2da4], edi
    X86_AT(c, 0xe08f3u);
    wr32((c.sbase[3] + (uint32_t)(0xC2DA4u)), c.r[7]);
    // 0e08f9  cmp dword ptr [ebp - 4], 1
    X86_AT(c, 0xe08f9u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x1u, 0, 4);
    // 0e08fd  jne 0xe0909
    X86_AT(c, 0xe08fdu);
    if (x86_cc(c, 5)) { goto L_e0909; }
    X86_TICK(c, 7);
    // 0e08ff  call 0xe0258
    X86_AT(c, 0xe08ffu);
    push32(c, 0xe0904u); x86_call_known(c, 0xe0258u, f_000e0258); X86_RET(c, 0xe0904u);
    X86_TICK(c, 7);
    // 0e0904  jmp 0xe097d
    X86_AT(c, 0xe0904u);
    goto L_e097d;
L_e0909:
    X86_TICK(c, 12);
    // 0e0909  push dword ptr [0xc03d4]
    X86_AT(c, 0xe0909u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D4u))); push32(c, v); }
    // 0e090f  call 0xe0548
    X86_AT(c, 0xe090fu);
    push32(c, 0xe0914u); x86_call_known(c, 0xe0548u, f_000e0548); X86_RET(c, 0xe0914u);
    X86_TICK(c, 9);
    // 0e0914  add esp, 4
    X86_AT(c, 0xe0914u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e0917  inc eax
    X86_AT(c, 0xe0917u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e0918  je 0xe0951
    X86_AT(c, 0xe0918u);
    if (x86_cc(c, 4)) { goto L_e0951; }
    X86_TICK(c, 12);
    // 0e091a  push dword ptr [0xc03d4]
    X86_AT(c, 0xe091au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D4u))); push32(c, v); }
    // 0e0920  call 0xe0548
    X86_AT(c, 0xe0920u);
    push32(c, 0xe0925u); x86_call_known(c, 0xe0548u, f_000e0548); X86_RET(c, 0xe0925u);
    X86_TICK(c, 9);
    // 0e0925  add esp, 4
    X86_AT(c, 0xe0925u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e0928  cmp eax, 5
    X86_AT(c, 0xe0928u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0e092b  je 0xe0951
    X86_AT(c, 0xe092bu);
    if (x86_cc(c, 4)) { goto L_e0951; }
    X86_TICK(c, 26);
    // 0e092d  push 1
    X86_AT(c, 0xe092du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e092f  push dword ptr [esi + 4]
    X86_AT(c, 0xe092fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 0e0932  push dword ptr [esi]
    X86_AT(c, 0xe0932u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0e0934  push edi
    X86_AT(c, 0xe0934u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0935  push dword ptr [esi + 8]
    X86_AT(c, 0xe0935u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))); push32(c, v); }
    // 0e0938  call 0xdf8b4
    X86_AT(c, 0xe0938u);
    push32(c, 0xe093du); x86_call_known(c, 0xdf8b4u, f_000df8b4); X86_RET(c, 0xe093du);
    X86_TICK(c, 7);
    // 0e093d  call 0xe02e0
    X86_AT(c, 0xe093du);
    push32(c, 0xe0942u); x86_call_known(c, 0xe02e0u, f_000e02e0); X86_RET(c, 0xe0942u);
    X86_TICK(c, 11);
    // 0e0942  mov dword ptr [0xbef88], 0
    X86_AT(c, 0xe0942u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF88u)), 0x0u);
    // 0e094c  add esp, 0x14
    X86_AT(c, 0xe094cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e094f  jmp 0xe097d
    X86_AT(c, 0xe094fu);
    goto L_e097d;
L_e0951:
    X86_TICK(c, 12);
    // 0e0951  push dword ptr [0xc03d4]
    X86_AT(c, 0xe0951u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D4u))); push32(c, v); }
    // 0e0957  call 0xe0548
    X86_AT(c, 0xe0957u);
    push32(c, 0xe095cu); x86_call_known(c, 0xe0548u, f_000e0548); X86_RET(c, 0xe095cu);
    X86_TICK(c, 9);
    // 0e095c  add esp, 4
    X86_AT(c, 0xe095cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e095f  cmp eax, 5
    X86_AT(c, 0xe095fu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0e0962  jne 0xe097d
    X86_AT(c, 0xe0962u);
    if (x86_cc(c, 5)) { goto L_e097d; }
    X86_TICK(c, 9);
    // 0e0964  push 0xdef0
    X86_AT(c, 0xe0964u);
    { uint32_t v = 0xDEF0u; push32(c, v); }
    // 0e0969  call 0xcc7bc
    X86_AT(c, 0xe0969u);
    push32(c, 0xe096eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe096eu);
    X86_TICK(c, 14);
    // 0e096e  neg dword ptr [0xbef80]
    X86_AT(c, 0xe096eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xBEF80u)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
    // 0e0974  neg dword ptr [0xbef84]
    X86_AT(c, 0xe0974u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xBEF84u)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
    // 0e097a  add esp, 4
    X86_AT(c, 0xe097au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e097d:
    X86_TICK(c, 12);
    // 0e097d  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xe097du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0e0984  je 0xe09a4
    X86_AT(c, 0xe0984u);
    if (x86_cc(c, 4)) { goto L_e09a4; }
    X86_TICK(c, 12);
    // 0e0986  cmp dword ptr [0xbef88], 0
    X86_AT(c, 0xe0986u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF88u))), 0x0u, 0, 4);
    // 0e098d  je 0xe09a4
    X86_AT(c, 0xe098du);
    if (x86_cc(c, 4)) { goto L_e09a4; }
    X86_TICK(c, 28);
    // 0e098f  push 1
    X86_AT(c, 0xe098fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e0991  push 1
    X86_AT(c, 0xe0991u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e0993  push dword ptr [esi + 4]
    X86_AT(c, 0xe0993u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 0e0996  push dword ptr [esi]
    X86_AT(c, 0xe0996u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0e0998  push edi
    X86_AT(c, 0xe0998u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0999  push dword ptr [esi + 8]
    X86_AT(c, 0xe0999u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))); push32(c, v); }
    // 0e099c  call 0xdfe00
    X86_AT(c, 0xe099cu);
    push32(c, 0xe09a1u); x86_call_known(c, 0xdfe00u, f_000dfe00); X86_RET(c, 0xe09a1u);
    X86_TICK(c, 2);
    // 0e09a1  add esp, 0x18
    X86_AT(c, 0xe09a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_e09a4:
    X86_TICK(c, 14);
    // 0e09a4  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xe09a4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0e09ab  jmp 0xe09c0
    X86_AT(c, 0xe09abu);
    goto L_e09c0;
L_e09ad:
    X86_TICK(c, 26);
    // 0e09ad  push 1
    X86_AT(c, 0xe09adu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e09af  push dword ptr [esi + 4]
    X86_AT(c, 0xe09afu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 0e09b2  push dword ptr [esi]
    X86_AT(c, 0xe09b2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0e09b4  push edi
    X86_AT(c, 0xe09b4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e09b5  push dword ptr [esi + 8]
    X86_AT(c, 0xe09b5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))); push32(c, v); }
    // 0e09b8  call 0xdf8b4
    X86_AT(c, 0xe09b8u);
    push32(c, 0xe09bdu); x86_call_known(c, 0xdf8b4u, f_000df8b4); X86_RET(c, 0xe09bdu);
    X86_TICK(c, 2);
    // 0e09bd  add esp, 0x14
    X86_AT(c, 0xe09bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e09c0:
    X86_TICK(c, 28);
    // 0e09c0  pop edi
    X86_AT(c, 0xe09c0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e09c1  pop esi
    X86_AT(c, 0xe09c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e09c2  pop ebx
    X86_AT(c, 0xe09c2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e09c3  leave 
    X86_AT(c, 0xe09c3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e09c4  ret 
    X86_AT(c, 0xe09c4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe07a8u, "ran off the end of a function");
}
void f_000e09c8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e09c8  call 0xde8c0
    X86_AT(c, 0xe09c8u);
    push32(c, 0xe09cdu); x86_call_known(c, 0xde8c0u, f_000de8c0); X86_RET(c, 0xe09cdu);
    X86_TICK(c, 9);
    // 0e09cd  push 0xf
    X86_AT(c, 0xe09cdu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e09cf  call 0xde55c
    X86_AT(c, 0xe09cfu);
    push32(c, 0xe09d4u); x86_call_known(c, 0xde55cu, f_000de55c); X86_RET(c, 0xe09d4u);
    X86_TICK(c, 12);
    // 0e09d4  add esp, 4
    X86_AT(c, 0xe09d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e09d7  ret 
    X86_AT(c, 0xe09d7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe09c8u, "ran off the end of a function");
}
void f_000e09d8(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0e09d8  push ebx
    X86_AT(c, 0xe09d8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e09d9  push esi
    X86_AT(c, 0xe09d9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e09da  push edi
    X86_AT(c, 0xe09dau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e09db  mov dword ptr [0xbef90], 0
    X86_AT(c, 0xe09dbu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x0u);
    // 0e09e5  push 9
    X86_AT(c, 0xe09e5u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e09e7  push 0xf
    X86_AT(c, 0xe09e7u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e09e9  push 0xb
    X86_AT(c, 0xe09e9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e09eb  push 0x17
    X86_AT(c, 0xe09ebu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0e09ed  push 0x4d
    X86_AT(c, 0xe09edu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0e09ef  push 0xf8
    X86_AT(c, 0xe09efu);
    { uint32_t v = 0xF8u; push32(c, v); }
    // 0e09f4  push 0x270
    X86_AT(c, 0xe09f4u);
    { uint32_t v = 0x270u; push32(c, v); }
    // 0e09f9  push 0x30
    X86_AT(c, 0xe09f9u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0e09fb  push 8
    X86_AT(c, 0xe09fbu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e09fd  push 4
    X86_AT(c, 0xe09fdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e09ff  call 0xc9fbc
    X86_AT(c, 0xe09ffu);
    push32(c, 0xe0a04u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xe0a04u);
    X86_TICK(c, 9);
    // 0e0a04  push 4
    X86_AT(c, 0xe0a04u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e0a06  call 0xca0a0
    X86_AT(c, 0xe0a06u);
    push32(c, 0xe0a0bu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe0a0bu);
    X86_TICK(c, 9);
    // 0e0a0b  push 4
    X86_AT(c, 0xe0a0bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e0a0d  call 0xca100
    X86_AT(c, 0xe0a0du);
    push32(c, 0xe0a12u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xe0a12u);
    X86_TICK(c, 14);
    // 0e0a12  add esp, 0x30
    X86_AT(c, 0xe0a12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0e0a15  cmp dword ptr [0xc03d8], 1
    X86_AT(c, 0xe0a15u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D8u))), 0x1u, 0, 4);
    // 0e0a1c  jne 0xe0a28
    X86_AT(c, 0xe0a1cu);
    if (x86_cc(c, 5)) { goto L_e0a28; }
    X86_TICK(c, 7);
    // 0e0a1e  call 0xe09c8
    X86_AT(c, 0xe0a1eu);
    push32(c, 0xe0a23u); x86_call_known(c, 0xe09c8u, f_000e09c8); X86_RET(c, 0xe0a23u);
    X86_TICK(c, 7);
    // 0e0a23  jmp 0xe0ada
    X86_AT(c, 0xe0a23u);
    goto L_e0ada;
L_e0a28:
    X86_TICK(c, 12);
    // 0e0a28  cmp dword ptr [0xc03cc], 3
    X86_AT(c, 0xe0a28u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03CCu))), 0x3u, 0, 4);
    // 0e0a2f  jne 0xe0a50
    X86_AT(c, 0xe0a2fu);
    if (x86_cc(c, 5)) { goto L_e0a50; }
    X86_TICK(c, 12);
    // 0e0a31  cmp dword ptr [0xc03d0], 3
    X86_AT(c, 0xe0a31u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x3u, 0, 4);
    // 0e0a38  jne 0xe0a50
    X86_AT(c, 0xe0a38u);
    if (x86_cc(c, 5)) { goto L_e0a50; }
    X86_TICK(c, 15);
    // 0e0a3a  push 0
    X86_AT(c, 0xe0a3au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e0a3c  push 0x8e
    X86_AT(c, 0xe0a3cu);
    { uint32_t v = 0x8Eu; push32(c, v); }
    // 0e0a41  push 0x70
    X86_AT(c, 0xe0a41u);
    { uint32_t v = 0x70u; push32(c, v); }
    // 0e0a43  push 0x473d8
    X86_AT(c, 0xe0a43u);
    { uint32_t v = 0x473D8u; push32(c, v); }
    // 0e0a48  call 0xc9a4c
    X86_AT(c, 0xe0a48u);
    push32(c, 0xe0a4du); x86_call_known(c, 0xc9a4cu, f_000c9a4c); X86_RET(c, 0xe0a4du);
    X86_TICK(c, 2);
    // 0e0a4d  add esp, 0x10
    X86_AT(c, 0xe0a4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e0a50:
    X86_TICK(c, 52);
    // 0e0a50  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xe0a50u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0e0a55  lea edx, [eax + eax*2]
    X86_AT(c, 0xe0a55u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e0a58  lea edx, [eax + edx*8]
    X86_AT(c, 0xe0a58u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0e0a5b  lea edx, [eax + edx*4]
    X86_AT(c, 0xe0a5bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e0a5e  lea edx, [eax + edx*2]
    X86_AT(c, 0xe0a5eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e0a61  shl edx, 2
    X86_AT(c, 0xe0a61u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0e0a64  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xe0a64u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0e0a6b  add eax, edx
    X86_AT(c, 0xe0a6bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e0a6d  lea esi, [eax + 0xc0ae0]
    X86_AT(c, 0xe0a6du);
    c.r[6] = (uint32_t)(c.r[0] + 0xC0AE0u);
    // 0e0a73  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xe0a73u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 0e0a76  and eax, eax
    X86_AT(c, 0xe0a76u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e0a78  je 0xe0a8d
    X86_AT(c, 0xe0a78u);
    if (x86_cc(c, 4)) { goto L_e0a8d; }
    X86_TICK(c, 18);
    // 0e0a7a  push 0
    X86_AT(c, 0xe0a7au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e0a7c  push dword ptr [esi + 8]
    X86_AT(c, 0xe0a7cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))); push32(c, v); }
    // 0e0a7f  push eax
    X86_AT(c, 0xe0a7fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0a80  push 0x46fd8
    X86_AT(c, 0xe0a80u);
    { uint32_t v = 0x46FD8u; push32(c, v); }
    // 0e0a85  call 0xc9a4c
    X86_AT(c, 0xe0a85u);
    push32(c, 0xe0a8au); x86_call_known(c, 0xc9a4cu, f_000c9a4c); X86_RET(c, 0xe0a8au);
    X86_TICK(c, 2);
    // 0e0a8a  add esp, 0x10
    X86_AT(c, 0xe0a8au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e0a8d:
    X86_TICK(c, 11);
    // 0e0a8d  mov eax, dword ptr [esi + 0xc]
    X86_AT(c, 0xe0a8du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
    // 0e0a90  and eax, eax
    X86_AT(c, 0xe0a90u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e0a92  je 0xe0aa7
    X86_AT(c, 0xe0a92u);
    if (x86_cc(c, 4)) { goto L_e0aa7; }
    X86_TICK(c, 18);
    // 0e0a94  push 0
    X86_AT(c, 0xe0a94u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e0a96  push dword ptr [esi + 0x10]
    X86_AT(c, 0xe0a96u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u))); push32(c, v); }
    // 0e0a99  push eax
    X86_AT(c, 0xe0a99u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0a9a  push 0x471d8
    X86_AT(c, 0xe0a9au);
    { uint32_t v = 0x471D8u; push32(c, v); }
    // 0e0a9f  call 0xc9a4c
    X86_AT(c, 0xe0a9fu);
    push32(c, 0xe0aa4u); x86_call_known(c, 0xc9a4cu, f_000c9a4c); X86_RET(c, 0xe0aa4u);
    X86_TICK(c, 2);
    // 0e0aa4  add esp, 0x10
    X86_AT(c, 0xe0aa4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e0aa7:
    X86_TICK(c, 2);
    // 0e0aa7  sub edi, edi
    X86_AT(c, 0xe0aa7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e0aa9:
    X86_TICK(c, 7);
    // 0e0aa9  cmp edi, 4
    X86_AT(c, 0xe0aa9u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0e0aac  jge 0xe0ada
    X86_AT(c, 0xe0aacu);
    if (x86_cc(c, 13)) { goto L_e0ada; }
    X86_TICK(c, 17);
    // 0e0aae  lea eax, [edi*8]
    X86_AT(c, 0xe0aaeu);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0e0ab5  lea eax, [eax + eax*2]
    X86_AT(c, 0xe0ab5u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e0ab8  lea ebx, [esi + eax*1 + 0x14]
    X86_AT(c, 0xe0ab8u);
    c.r[3] = (uint32_t)(c.r[6] + c.r[0] + 0x14u);
    // 0e0abc  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe0abcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e0abf  cmp eax, 0xffffffff
    X86_AT(c, 0xe0abfu);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0e0ac2  jle 0xe0ad7
    X86_AT(c, 0xe0ac2u);
    if (x86_cc(c, 14)) { goto L_e0ad7; }
    X86_TICK(c, 26);
    // 0e0ac4  push 1
    X86_AT(c, 0xe0ac4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e0ac6  push dword ptr [ebx + 4]
    X86_AT(c, 0xe0ac6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))); push32(c, v); }
    // 0e0ac9  push dword ptr [ebx]
    X86_AT(c, 0xe0ac9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0e0acb  push dword ptr [ebx + 0x14]
    X86_AT(c, 0xe0acbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))); push32(c, v); }
    // 0e0ace  push eax
    X86_AT(c, 0xe0aceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0acf  call 0xdf8b4
    X86_AT(c, 0xe0acfu);
    push32(c, 0xe0ad4u); x86_call_known(c, 0xdf8b4u, f_000df8b4); X86_RET(c, 0xe0ad4u);
    X86_TICK(c, 2);
    // 0e0ad4  add esp, 0x14
    X86_AT(c, 0xe0ad4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e0ad7:
    X86_TICK(c, 9);
    // 0e0ad7  inc edi
    X86_AT(c, 0xe0ad7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e0ad8  jmp 0xe0aa9
    X86_AT(c, 0xe0ad8u);
    X86_POLL(c, 0xe0aa9u); goto L_e0aa9;
L_e0ada:
    X86_TICK(c, 22);
    // 0e0ada  pop edi
    X86_AT(c, 0xe0adau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e0adb  pop esi
    X86_AT(c, 0xe0adbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e0adc  pop ebx
    X86_AT(c, 0xe0adcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e0add  ret 
    X86_AT(c, 0xe0addu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe09d8u, "ran off the end of a function");
}
void f_000e0ae0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e0ae0  push 0xdf14
    X86_AT(c, 0xe0ae0u);
    { uint32_t v = 0xDF14u; push32(c, v); }
    // 0e0ae5  call 0xcc7bc
    X86_AT(c, 0xe0ae5u);
    push32(c, 0xe0aeau); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe0aeau);
    X86_TICK(c, 9);
    // 0e0aea  push 1
    X86_AT(c, 0xe0aeau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e0aec  call 0xc5ca4
    X86_AT(c, 0xe0aecu);
    push32(c, 0xe0af1u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe0af1u);
    X86_TICK(c, 12);
    // 0e0af1  add esp, 8
    X86_AT(c, 0xe0af1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0af4  ret 
    X86_AT(c, 0xe0af4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0ae0u, "ran off the end of a function");
}
void f_000e0af8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e0af8  push ebp
    X86_AT(c, 0xe0af8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0af9  mov ebp, esp
    X86_AT(c, 0xe0af9u);
    c.r[5] = c.r[4];
    // 0e0afb  push eax
    X86_AT(c, 0xe0afbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0afc  sub eax, eax
    X86_AT(c, 0xe0afcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e0afe  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe0afeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e0b01  cmp eax, dword ptr [0xb02fe]
    X86_AT(c, 0xe0b01u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0, 4);
    // 0e0b07  jne 0xe0b22
    X86_AT(c, 0xe0b07u);
    if (x86_cc(c, 5)) { goto L_e0b22; }
    X86_TICK(c, 7);
    // 0e0b09  call 0xdf778
    X86_AT(c, 0xe0b09u);
    push32(c, 0xe0b0eu); x86_call_known(c, 0xdf778u, f_000df778); X86_RET(c, 0xe0b0eu);
    X86_TICK(c, 9);
    // 0e0b0e  push eax
    X86_AT(c, 0xe0b0eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0b0f  call 0xdf7b0
    X86_AT(c, 0xe0b0fu);
    push32(c, 0xe0b14u); x86_call_known(c, 0xdf7b0u, f_000df7b0); X86_RET(c, 0xe0b14u);
    X86_TICK(c, 7);
    // 0e0b14  call 0xdf824
    X86_AT(c, 0xe0b14u);
    push32(c, 0xe0b19u); x86_call_known(c, 0xdf824u, f_000df824); X86_RET(c, 0xe0b19u);
    X86_TICK(c, 9);
    // 0e0b19  push eax
    X86_AT(c, 0xe0b19u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0b1a  call 0xdf85c
    X86_AT(c, 0xe0b1au);
    push32(c, 0xe0b1fu); x86_call_known(c, 0xdf85cu, f_000df85c); X86_RET(c, 0xe0b1fu);
    X86_TICK(c, 2);
    // 0e0b1f  add esp, 8
    X86_AT(c, 0xe0b1fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e0b22:
    X86_TICK(c, 18);
    // 0e0b22  mov dword ptr [0xb52f8], 0
    X86_AT(c, 0xe0b22u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x0u);
    // 0e0b2c  leave 
    X86_AT(c, 0xe0b2cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e0b2d  ret 
    X86_AT(c, 0xe0b2du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0af8u, "ran off the end of a function");
}
void f_000e0b30(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e0b30  sub eax, eax
    X86_AT(c, 0xe0b30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e0b32  mov dword ptr [0xb02fe], eax
    X86_AT(c, 0xe0b32u);
    wr32((c.sbase[3] + (uint32_t)(0xB02FEu)), c.r[0]);
    // 0e0b37  mov dword ptr [0xb0322], eax
    X86_AT(c, 0xe0b37u);
    wr32((c.sbase[3] + (uint32_t)(0xB0322u)), c.r[0]);
    // 0e0b3c  call 0xe0af8
    X86_AT(c, 0xe0b3cu);
    push32(c, 0xe0b41u); x86_call_known(c, 0xe0af8u, f_000e0af8); X86_RET(c, 0xe0b41u);
    X86_TICK(c, 10);
    // 0e0b41  ret 
    X86_AT(c, 0xe0b41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0b30u, "ran off the end of a function");
}
void f_000e0b44(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0e0b44  push esi
    X86_AT(c, 0xe0b44u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0b45  push edi
    X86_AT(c, 0xe0b45u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0b46  mov edi, 0xa
    X86_AT(c, 0xe0b46u);
    c.r[7] = 0xAu;
    // 0e0b4b  sub esi, esi
    X86_AT(c, 0xe0b4bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e0b4d:
    X86_TICK(c, 9);
    // 0e0b4d  push 7
    X86_AT(c, 0xe0b4du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b4f  call 0xca3cc
    X86_AT(c, 0xe0b4fu);
    push32(c, 0xe0b54u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe0b54u);
    X86_TICK(c, 9);
    // 0e0b54  push 7
    X86_AT(c, 0xe0b54u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b56  call 0xca3cc
    X86_AT(c, 0xe0b56u);
    push32(c, 0xe0b5bu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe0b5bu);
    X86_TICK(c, 13);
    // 0e0b5b  push 2
    X86_AT(c, 0xe0b5bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0b5d  push edi
    X86_AT(c, 0xe0b5du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0b5e  push 7
    X86_AT(c, 0xe0b5eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b60  call 0xc8cb8
    X86_AT(c, 0xe0b60u);
    push32(c, 0xe0b65u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xe0b65u);
    X86_TICK(c, 9);
    // 0e0b65  add esp, 0x14
    X86_AT(c, 0xe0b65u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e0b68  and edi, edi
    X86_AT(c, 0xe0b68u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e0b6a  jle 0xe0b90
    X86_AT(c, 0xe0b6au);
    if (x86_cc(c, 14)) { goto L_e0b90; }
    X86_TICK(c, 11);
    // 0e0b6c  push 0xdf24
    X86_AT(c, 0xe0b6cu);
    { uint32_t v = 0xDF24u; push32(c, v); }
    // 0e0b71  push 7
    X86_AT(c, 0xe0b71u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b73  call 0xc8cdc
    X86_AT(c, 0xe0b73u);
    push32(c, 0xe0b78u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe0b78u);
    X86_TICK(c, 9);
    // 0e0b78  push 7
    X86_AT(c, 0xe0b78u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b7a  call 0xca3cc
    X86_AT(c, 0xe0b7au);
    push32(c, 0xe0b7fu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe0b7fu);
    X86_TICK(c, 9);
    // 0e0b7f  push 7
    X86_AT(c, 0xe0b7fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b81  call 0xca3cc
    X86_AT(c, 0xe0b81u);
    push32(c, 0xe0b86u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe0b86u);
    X86_TICK(c, 9);
    // 0e0b86  push 7
    X86_AT(c, 0xe0b86u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b88  call 0xca3cc
    X86_AT(c, 0xe0b88u);
    push32(c, 0xe0b8du); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe0b8du);
    X86_TICK(c, 2);
    // 0e0b8d  add esp, 0x14
    X86_AT(c, 0xe0b8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e0b90:
    X86_TICK(c, 7);
    // 0e0b90  and esi, esi
    X86_AT(c, 0xe0b90u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e0b92  jne 0xe0ba1
    X86_AT(c, 0xe0b92u);
    if (x86_cc(c, 5)) { goto L_e0ba1; }
    X86_TICK(c, 9);
    // 0e0b94  push 7
    X86_AT(c, 0xe0b94u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b96  call 0xc81e4
    X86_AT(c, 0xe0b96u);
    push32(c, 0xe0b9bu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xe0b9bu);
    X86_TICK(c, 5);
    // 0e0b9b  movzx esi, al
    X86_AT(c, 0xe0b9bu);
    c.r[6] = g8(c, 0);
    // 0e0b9e  add esp, 4
    X86_AT(c, 0xe0b9eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e0ba1:
    X86_TICK(c, 7);
    // 0e0ba1  and esi, esi
    X86_AT(c, 0xe0ba1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e0ba3  jne 0xe0baf
    X86_AT(c, 0xe0ba3u);
    if (x86_cc(c, 5)) { goto L_e0baf; }
    X86_TICK(c, 9);
    // 0e0ba5  push 0x28
    X86_AT(c, 0xe0ba5u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0e0ba7  call 0xd6660
    X86_AT(c, 0xe0ba7u);
    push32(c, 0xe0bacu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe0bacu);
    X86_TICK(c, 2);
    // 0e0bac  add esp, 4
    X86_AT(c, 0xe0bacu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e0baf:
    X86_TICK(c, 9);
    // 0e0baf  dec edi
    X86_AT(c, 0xe0bafu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0e0bb0  and edi, edi
    X86_AT(c, 0xe0bb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e0bb2  je 0xe0bb8
    X86_AT(c, 0xe0bb2u);
    if (x86_cc(c, 4)) { goto L_e0bb8; }
    X86_TICK(c, 7);
    // 0e0bb4  and esi, esi
    X86_AT(c, 0xe0bb4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e0bb6  je 0xe0b4d
    X86_AT(c, 0xe0bb6u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe0b4du); goto L_e0b4d; }
L_e0bb8:
    X86_TICK(c, 11);
    // 0e0bb8  push 0xdf30
    X86_AT(c, 0xe0bb8u);
    { uint32_t v = 0xDF30u; push32(c, v); }
    // 0e0bbd  push 7
    X86_AT(c, 0xe0bbdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0bbf  call 0xc8cdc
    X86_AT(c, 0xe0bbfu);
    push32(c, 0xe0bc4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe0bc4u);
    X86_TICK(c, 9);
    // 0e0bc4  push 7
    X86_AT(c, 0xe0bc4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0bc6  call 0xca3cc
    X86_AT(c, 0xe0bc6u);
    push32(c, 0xe0bcbu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe0bcbu);
    X86_TICK(c, 9);
    // 0e0bcb  push 7
    X86_AT(c, 0xe0bcbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0bcd  call 0xca3cc
    X86_AT(c, 0xe0bcdu);
    push32(c, 0xe0bd2u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe0bd2u);
    X86_TICK(c, 9);
    // 0e0bd2  push 7
    X86_AT(c, 0xe0bd2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0bd4  call 0xca3cc
    X86_AT(c, 0xe0bd4u);
    push32(c, 0xe0bd9u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe0bd9u);
    X86_TICK(c, 11);
    // 0e0bd9  push 0xdf34
    X86_AT(c, 0xe0bd9u);
    { uint32_t v = 0xDF34u; push32(c, v); }
    // 0e0bde  push 7
    X86_AT(c, 0xe0bdeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0be0  call 0xc8cdc
    X86_AT(c, 0xe0be0u);
    push32(c, 0xe0be5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe0be5u);
    X86_TICK(c, 9);
    // 0e0be5  push 7
    X86_AT(c, 0xe0be5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0be7  call 0xca3cc
    X86_AT(c, 0xe0be7u);
    push32(c, 0xe0becu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe0becu);
    X86_TICK(c, 11);
    // 0e0bec  push 0xdf58
    X86_AT(c, 0xe0becu);
    { uint32_t v = 0xDF58u; push32(c, v); }
    // 0e0bf1  push 7
    X86_AT(c, 0xe0bf1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0bf3  call 0xc8cdc
    X86_AT(c, 0xe0bf3u);
    push32(c, 0xe0bf8u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe0bf8u);
    X86_TICK(c, 9);
    // 0e0bf8  push 7
    X86_AT(c, 0xe0bf8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0bfa  call 0xca3cc
    X86_AT(c, 0xe0bfau);
    push32(c, 0xe0bffu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe0bffu);
    X86_TICK(c, 9);
    // 0e0bff  push 7
    X86_AT(c, 0xe0bffu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0c01  call 0xca3cc
    X86_AT(c, 0xe0c01u);
    push32(c, 0xe0c06u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe0c06u);
    X86_TICK(c, 20);
    // 0e0c06  add esp, 0x30
    X86_AT(c, 0xe0c06u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0e0c09  pop edi
    X86_AT(c, 0xe0c09u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e0c0a  pop esi
    X86_AT(c, 0xe0c0au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e0c0b  ret 
    X86_AT(c, 0xe0c0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0b44u, "ran off the end of a function");
}
void f_000e0c0c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e0c0c  push ebp
    X86_AT(c, 0xe0c0cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0c0d  mov ebp, esp
    X86_AT(c, 0xe0c0du);
    c.r[5] = c.r[4];
    // 0e0c0f  sub esp, 8
    X86_AT(c, 0xe0c0fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e0c12  push ebx
    X86_AT(c, 0xe0c12u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0c13  push esi
    X86_AT(c, 0xe0c13u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0c14  push edi
    X86_AT(c, 0xe0c14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0c15  sub esi, esi
    X86_AT(c, 0xe0c15u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e0c17  mov dword ptr [0xb52f8], 4
    X86_AT(c, 0xe0c17u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x4u);
    // 0e0c21  call 0xcbd48
    X86_AT(c, 0xe0c21u);
    push32(c, 0xe0c26u); x86_call_known(c, 0xcbd48u, f_000cbd48); X86_RET(c, 0xe0c26u);
    X86_TICK(c, 9);
    // 0e0c26  push 3
    X86_AT(c, 0xe0c26u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e0c28  call 0xc8f54
    X86_AT(c, 0xe0c28u);
    push32(c, 0xe0c2du); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xe0c2du);
    X86_TICK(c, 11);
    // 0e0c2d  push 0xd
    X86_AT(c, 0xe0c2du);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e0c2f  push 3
    X86_AT(c, 0xe0c2fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e0c31  call 0xca2d4
    X86_AT(c, 0xe0c31u);
    push32(c, 0xe0c36u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xe0c36u);
    X86_TICK(c, 11);
    // 0e0c36  push 0xd
    X86_AT(c, 0xe0c36u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e0c38  push 0xa
    X86_AT(c, 0xe0c38u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e0c3a  call 0xca2d4
    X86_AT(c, 0xe0c3au);
    push32(c, 0xe0c3fu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xe0c3fu);
    X86_TICK(c, 11);
    // 0e0c3f  push 0xd
    X86_AT(c, 0xe0c3fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e0c41  push 0xb
    X86_AT(c, 0xe0c41u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e0c43  call 0xca2d4
    X86_AT(c, 0xe0c43u);
    push32(c, 0xe0c48u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xe0c48u);
    X86_TICK(c, 9);
    // 0e0c48  push 0xd
    X86_AT(c, 0xe0c48u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e0c4a  call 0xc8e04
    X86_AT(c, 0xe0c4au);
    push32(c, 0xe0c4fu); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xe0c4fu);
    X86_TICK(c, 9);
    // 0e0c4f  push 0xd
    X86_AT(c, 0xe0c4fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e0c51  call 0xc8dd4
    X86_AT(c, 0xe0c51u);
    push32(c, 0xe0c56u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe0c56u);
    X86_TICK(c, 7);
    // 0e0c56  call 0xc56dc
    X86_AT(c, 0xe0c56u);
    push32(c, 0xe0c5bu); x86_call_known(c, 0xc56dcu, f_000c56dc); X86_RET(c, 0xe0c5bu);
    X86_TICK(c, 15);
    // 0e0c5b  push 0x18e
    X86_AT(c, 0xe0c5bu);
    { uint32_t v = 0x18Eu; push32(c, v); }
    // 0e0c60  push 0x169
    X86_AT(c, 0xe0c60u);
    { uint32_t v = 0x169u; push32(c, v); }
    // 0e0c65  push 0x2f
    X86_AT(c, 0xe0c65u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0e0c67  push 0xa
    X86_AT(c, 0xe0c67u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e0c69  call 0xc9588
    X86_AT(c, 0xe0c69u);
    push32(c, 0xe0c6eu); x86_call_known(c, 0xc9588u, f_000c9588); X86_RET(c, 0xe0c6eu);
    X86_TICK(c, 9);
    // 0e0c6e  push 0xd
    X86_AT(c, 0xe0c6eu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e0c70  call 0xc8e04
    X86_AT(c, 0xe0c70u);
    push32(c, 0xe0c75u); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xe0c75u);
    X86_TICK(c, 9);
    // 0e0c75  push 0xf
    X86_AT(c, 0xe0c75u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e0c77  call 0xc8dd4
    X86_AT(c, 0xe0c77u);
    push32(c, 0xe0c7cu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe0c7cu);
    X86_TICK(c, 11);
    // 0e0c7c  add esp, 0x3c
    X86_AT(c, 0xe0c7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e0c7f  push 2
    X86_AT(c, 0xe0c7fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0c81  call 0xc8f54
    X86_AT(c, 0xe0c81u);
    push32(c, 0xe0c86u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xe0c86u);
    X86_TICK(c, 9);
    // 0e0c86  push 0x64
    X86_AT(c, 0xe0c86u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0e0c88  call 0xd6660
    X86_AT(c, 0xe0c88u);
    push32(c, 0xe0c8du); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe0c8du);
    X86_TICK(c, 7);
    // 0e0c8d  call 0xe0b44
    X86_AT(c, 0xe0c8du);
    push32(c, 0xe0c92u); x86_call_known(c, 0xe0b44u, f_000e0b44); X86_RET(c, 0xe0c92u);
    X86_TICK(c, 9);
    // 0e0c92  push 7
    X86_AT(c, 0xe0c92u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0c94  call 0xca0a0
    X86_AT(c, 0xe0c94u);
    push32(c, 0xe0c99u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe0c99u);
    X86_TICK(c, 27);
    // 0e0c99  push 9
    X86_AT(c, 0xe0c99u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e0c9b  push 0xf
    X86_AT(c, 0xe0c9bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e0c9d  push 0xf
    X86_AT(c, 0xe0c9du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e0c9f  push 4
    X86_AT(c, 0xe0c9fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e0ca1  push 0x1c
    X86_AT(c, 0xe0ca1u);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0e0ca3  push 0x75
    X86_AT(c, 0xe0ca3u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0e0ca5  push 0x6e
    X86_AT(c, 0xe0ca5u);
    { uint32_t v = 0x6Eu; push32(c, v); }
    // 0e0ca7  push 0x12f
    X86_AT(c, 0xe0ca7u);
    { uint32_t v = 0x12Fu; push32(c, v); }
    // 0e0cac  push 0x100
    X86_AT(c, 0xe0cacu);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0e0cb1  push 0xb
    X86_AT(c, 0xe0cb1u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e0cb3  call 0xc9fbc
    X86_AT(c, 0xe0cb3u);
    push32(c, 0xe0cb8u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xe0cb8u);
    X86_TICK(c, 11);
    // 0e0cb8  add esp, 0x34
    X86_AT(c, 0xe0cb8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0e0cbb  push 0xb
    X86_AT(c, 0xe0cbbu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e0cbd  call 0xca0a0
    X86_AT(c, 0xe0cbdu);
    push32(c, 0xe0cc2u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe0cc2u);
    X86_TICK(c, 9);
    // 0e0cc2  push 0xb
    X86_AT(c, 0xe0cc2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e0cc4  call 0xca100
    X86_AT(c, 0xe0cc4u);
    push32(c, 0xe0cc9u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xe0cc9u);
    X86_TICK(c, 27);
    // 0e0cc9  push 9
    X86_AT(c, 0xe0cc9u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e0ccb  push 0xf
    X86_AT(c, 0xe0ccbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e0ccd  push 0xf
    X86_AT(c, 0xe0ccdu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e0ccf  push 5
    X86_AT(c, 0xe0ccfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e0cd1  push 0x1c
    X86_AT(c, 0xe0cd1u);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0e0cd3  push 0x75
    X86_AT(c, 0xe0cd3u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0e0cd5  push 0xf2
    X86_AT(c, 0xe0cd5u);
    { uint32_t v = 0xF2u; push32(c, v); }
    // 0e0cda  push 0x12f
    X86_AT(c, 0xe0cdau);
    { uint32_t v = 0x12Fu; push32(c, v); }
    // 0e0cdf  push 0xa
    X86_AT(c, 0xe0cdfu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e0ce1  push 0xc
    X86_AT(c, 0xe0ce1u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0ce3  call 0xc9fbc
    X86_AT(c, 0xe0ce3u);
    push32(c, 0xe0ce8u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xe0ce8u);
    X86_TICK(c, 9);
    // 0e0ce8  push 0xc
    X86_AT(c, 0xe0ce8u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0cea  call 0xca0a0
    X86_AT(c, 0xe0ceau);
    push32(c, 0xe0cefu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe0cefu);
    X86_TICK(c, 9);
    // 0e0cef  push 0xc
    X86_AT(c, 0xe0cefu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0cf1  call 0xca100
    X86_AT(c, 0xe0cf1u);
    push32(c, 0xe0cf6u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xe0cf6u);
    X86_TICK(c, 19);
    // 0e0cf6  mov dword ptr [ebp - 4], 0xb02ec
    X86_AT(c, 0xe0cf6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xB02ECu);
    // 0e0cfd  push 0x38
    X86_AT(c, 0xe0cfdu);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0e0cff  push 0x107
    X86_AT(c, 0xe0cffu);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0e0d04  push 0x12f
    X86_AT(c, 0xe0d04u);
    { uint32_t v = 0x12Fu; push32(c, v); }
    // 0e0d09  push 0xa
    X86_AT(c, 0xe0d09u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e0d0b  push 0xc
    X86_AT(c, 0xe0d0bu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0d0d  call 0xcab04
    X86_AT(c, 0xe0d0du);
    push32(c, 0xe0d12u); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xe0d12u);
    X86_TICK(c, 15);
    // 0e0d12  add esp, 0x4c
    X86_AT(c, 0xe0d12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4Cu, 0, 4); }
    // 0e0d15  push 0
    X86_AT(c, 0xe0d15u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e0d17  push 0
    X86_AT(c, 0xe0d17u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e0d19  push 0xc
    X86_AT(c, 0xe0d19u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0d1b  call 0xca9c8
    X86_AT(c, 0xe0d1bu);
    push32(c, 0xe0d20u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe0d20u);
    X86_TICK(c, 14);
    // 0e0d20  push dword ptr [ebp - 4]
    X86_AT(c, 0xe0d20u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0e0d23  push 0xc
    X86_AT(c, 0xe0d23u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0d25  call 0xca850
    X86_AT(c, 0xe0d25u);
    push32(c, 0xe0d2au); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xe0d2au);
    X86_TICK(c, 13);
    // 0e0d2a  push 1
    X86_AT(c, 0xe0d2au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e0d2c  push 2
    X86_AT(c, 0xe0d2cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0d2e  push 0xc
    X86_AT(c, 0xe0d2eu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0d30  call 0xca9c8
    X86_AT(c, 0xe0d30u);
    push32(c, 0xe0d35u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe0d35u);
    X86_TICK(c, 11);
    // 0e0d35  push 0xdf74
    X86_AT(c, 0xe0d35u);
    { uint32_t v = 0xDF74u; push32(c, v); }
    // 0e0d3a  push 0xc
    X86_AT(c, 0xe0d3au);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0d3c  call 0xca414
    X86_AT(c, 0xe0d3cu);
    push32(c, 0xe0d41u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xe0d41u);
    X86_TICK(c, 13);
    // 0e0d41  push 2
    X86_AT(c, 0xe0d41u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0d43  push 2
    X86_AT(c, 0xe0d43u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0d45  push 0xc
    X86_AT(c, 0xe0d45u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0d47  call 0xca9c8
    X86_AT(c, 0xe0d47u);
    push32(c, 0xe0d4cu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe0d4cu);
    X86_TICK(c, 11);
    // 0e0d4c  push 0xdf8c
    X86_AT(c, 0xe0d4cu);
    { uint32_t v = 0xDF8Cu; push32(c, v); }
    // 0e0d51  push 0xc
    X86_AT(c, 0xe0d51u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0d53  call 0xca414
    X86_AT(c, 0xe0d53u);
    push32(c, 0xe0d58u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xe0d58u);
    X86_TICK(c, 15);
    // 0e0d58  add esp, 0x3c
    X86_AT(c, 0xe0d58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e0d5b  push 3
    X86_AT(c, 0xe0d5bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e0d5d  push 2
    X86_AT(c, 0xe0d5du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0d5f  push 0xc
    X86_AT(c, 0xe0d5fu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0d61  call 0xca9c8
    X86_AT(c, 0xe0d61u);
    push32(c, 0xe0d66u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe0d66u);
    X86_TICK(c, 11);
    // 0e0d66  push 0xdfa4
    X86_AT(c, 0xe0d66u);
    { uint32_t v = 0xDFA4u; push32(c, v); }
    // 0e0d6b  push 0xc
    X86_AT(c, 0xe0d6bu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0d6d  call 0xca414
    X86_AT(c, 0xe0d6du);
    push32(c, 0xe0d72u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xe0d72u);
    X86_TICK(c, 15);
    // 0e0d72  add esp, 0x14
    X86_AT(c, 0xe0d72u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e0d75  push 4
    X86_AT(c, 0xe0d75u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e0d77  push 2
    X86_AT(c, 0xe0d77u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0d79  push 0xc
    X86_AT(c, 0xe0d79u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0d7b  call 0xca9c8
    X86_AT(c, 0xe0d7bu);
    push32(c, 0xe0d80u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe0d80u);
    X86_TICK(c, 11);
    // 0e0d80  push 0xdfbc
    X86_AT(c, 0xe0d80u);
    { uint32_t v = 0xDFBCu; push32(c, v); }
    // 0e0d85  push 0xc
    X86_AT(c, 0xe0d85u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0d87  call 0xca414
    X86_AT(c, 0xe0d87u);
    push32(c, 0xe0d8cu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xe0d8cu);
    X86_TICK(c, 9);
    // 0e0d8c  push 0xc
    X86_AT(c, 0xe0d8cu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0d8e  call 0xc8dd4
    X86_AT(c, 0xe0d8eu);
    push32(c, 0xe0d93u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe0d93u);
    X86_TICK(c, 13);
    // 0e0d93  push 5
    X86_AT(c, 0xe0d93u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e0d95  push 2
    X86_AT(c, 0xe0d95u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0d97  push 0xc
    X86_AT(c, 0xe0d97u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0d99  call 0xca9c8
    X86_AT(c, 0xe0d99u);
    push32(c, 0xe0d9eu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe0d9eu);
    X86_TICK(c, 11);
    // 0e0d9e  push 0xdfd4
    X86_AT(c, 0xe0d9eu);
    { uint32_t v = 0xDFD4u; push32(c, v); }
    // 0e0da3  push 0xc
    X86_AT(c, 0xe0da3u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e0da5  call 0xca414
    X86_AT(c, 0xe0da5u);
    push32(c, 0xe0daau); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xe0daau);
    X86_TICK(c, 9);
    // 0e0daa  push 0xf
    X86_AT(c, 0xe0daau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e0dac  call 0xc8dd4
    X86_AT(c, 0xe0dacu);
    push32(c, 0xe0db1u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe0db1u);
    X86_TICK(c, 31);
    // 0e0db1  push 0
    X86_AT(c, 0xe0db1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e0db3  push 0x14f
    X86_AT(c, 0xe0db3u);
    { uint32_t v = 0x14Fu; push32(c, v); }
    // 0e0db8  push 0xd0
    X86_AT(c, 0xe0db8u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0e0dbd  movzx eax, byte ptr [0xb02fc]
    X86_AT(c, 0xe0dbdu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB02FCu)));
    // 0e0dc4  add eax, eax
    X86_AT(c, 0xe0dc4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e0dc6  movzx eax, ax
    X86_AT(c, 0xe0dc6u);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0e0dc9  shl eax, 9
    X86_AT(c, 0xe0dc9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e0dcc  lea edx, [eax*1 + 0x54bf8]
    X86_AT(c, 0xe0dccu);
    c.r[2] = (uint32_t)(c.r[0] + 0x54BF8u);
    // 0e0dd3  push edx
    X86_AT(c, 0xe0dd3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e0dd4  call 0xc9a4c
    X86_AT(c, 0xe0dd4u);
    push32(c, 0xe0dd9u); x86_call_known(c, 0xc9a4cu, f_000c9a4c); X86_RET(c, 0xe0dd9u);
    X86_TICK(c, 11);
    // 0e0dd9  add esp, 0x40
    X86_AT(c, 0xe0dd9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e0ddc  push 1
    X86_AT(c, 0xe0ddcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e0dde  call 0xc71e0
    X86_AT(c, 0xe0ddeu);
    push32(c, 0xe0de3u); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xe0de3u);
    X86_TICK(c, 17);
    // 0e0de3  mov dword ptr [0xb52f4], 2
    X86_AT(c, 0xe0de3u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F4u)), 0x2u);
    // 0e0ded  mov eax, dword ptr [0xb0336]
    X86_AT(c, 0xe0dedu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0336u)));
    // 0e0df2  add eax, eax
    X86_AT(c, 0xe0df2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e0df4  push eax
    X86_AT(c, 0xe0df4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0df5  call 0xe78dc
    X86_AT(c, 0xe0df5u);
    push32(c, 0xe0dfau); x86_call_known(c, 0xe78dcu, f_000e78dc); X86_RET(c, 0xe0dfau);
    X86_TICK(c, 7);
    // 0e0dfa  call 0xdf34c
    X86_AT(c, 0xe0dfau);
    push32(c, 0xe0dffu); x86_call_known(c, 0xdf34cu, f_000df34c); X86_RET(c, 0xe0dffu);
    X86_TICK(c, 7);
    // 0e0dff  call 0xc5e0c
    X86_AT(c, 0xe0dffu);
    push32(c, 0xe0e04u); x86_call_known(c, 0xc5e0cu, f_000c5e0c); X86_RET(c, 0xe0e04u);
    X86_TICK(c, 15);
    // 0e0e04  add eax, dword ptr [0xb0336]
    X86_AT(c, 0xe0e04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0336u))), 0, 4); }
    // 0e0e0a  push eax
    X86_AT(c, 0xe0e0au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0e0b  call 0xe78dc
    X86_AT(c, 0xe0e0bu);
    push32(c, 0xe0e10u); x86_call_known(c, 0xe78dcu, f_000e78dc); X86_RET(c, 0xe0e10u);
    X86_TICK(c, 7);
    // 0e0e10  call 0xde408
    X86_AT(c, 0xe0e10u);
    push32(c, 0xe0e15u); x86_call_known(c, 0xde408u, f_000de408); X86_RET(c, 0xe0e15u);
    X86_TICK(c, 7);
    // 0e0e15  call 0xde8c0
    X86_AT(c, 0xe0e15u);
    push32(c, 0xe0e1au); x86_call_known(c, 0xde8c0u, f_000de8c0); X86_RET(c, 0xe0e1au);
    X86_TICK(c, 7);
    // 0e0e1a  call 0xe09d8
    X86_AT(c, 0xe0e1au);
    push32(c, 0xe0e1fu); x86_call_known(c, 0xe09d8u, f_000e09d8); X86_RET(c, 0xe0e1fu);
    X86_TICK(c, 7);
    // 0e0e1f  call 0xdf658
    X86_AT(c, 0xe0e1fu);
    push32(c, 0xe0e24u); x86_call_known(c, 0xdf658u, f_000df658); X86_RET(c, 0xe0e24u);
    X86_TICK(c, 7);
    // 0e0e24  call 0xdf660
    X86_AT(c, 0xe0e24u);
    push32(c, 0xe0e29u); x86_call_known(c, 0xdf660u, f_000df660); X86_RET(c, 0xe0e29u);
    X86_TICK(c, 7);
    // 0e0e29  call 0xdf5bc
    X86_AT(c, 0xe0e29u);
    push32(c, 0xe0e2eu); x86_call_known(c, 0xdf5bcu, f_000df5bc); X86_RET(c, 0xe0e2eu);
    X86_TICK(c, 9);
    // 0e0e2e  add esp, 0xc
    X86_AT(c, 0xe0e2eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e0e31  call 0xdf5ec
    X86_AT(c, 0xe0e31u);
    push32(c, 0xe0e36u); x86_call_known(c, 0xdf5ecu, f_000df5ec); X86_RET(c, 0xe0e36u);
    X86_TICK(c, 7);
    // 0e0e36  call 0xdf4b8
    X86_AT(c, 0xe0e36u);
    push32(c, 0xe0e3bu); x86_call_known(c, 0xdf4b8u, f_000df4b8); X86_RET(c, 0xe0e3bu);
L_e0e3b:
    X86_TICK(c, 7);
    // 0e0e3b  call 0xdf778
    X86_AT(c, 0xe0e3bu);
    push32(c, 0xe0e40u); x86_call_known(c, 0xdf778u, f_000df778); X86_RET(c, 0xe0e40u);
    X86_TICK(c, 7);
    // 0e0e40  and eax, eax
    X86_AT(c, 0xe0e40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e0e42  jne 0xe0e64
    X86_AT(c, 0xe0e42u);
    if (x86_cc(c, 5)) { goto L_e0e64; }
    X86_TICK(c, 13);
    // 0e0e44  sub eax, eax
    X86_AT(c, 0xe0e44u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e0e46  mov dword ptr [0xb042e], eax
    X86_AT(c, 0xe0e46u);
    wr32((c.sbase[3] + (uint32_t)(0xB042Eu)), c.r[0]);
    // 0e0e4b  mov dword ptr [0xb0432], eax
    X86_AT(c, 0xe0e4bu);
    wr32((c.sbase[3] + (uint32_t)(0xB0432u)), c.r[0]);
    // 0e0e50  call 0xdf658
    X86_AT(c, 0xe0e50u);
    push32(c, 0xe0e55u); x86_call_known(c, 0xdf658u, f_000df658); X86_RET(c, 0xe0e55u);
    X86_TICK(c, 7);
    // 0e0e55  call 0xdf660
    X86_AT(c, 0xe0e55u);
    push32(c, 0xe0e5au); x86_call_known(c, 0xdf660u, f_000df660); X86_RET(c, 0xe0e5au);
    X86_TICK(c, 7);
    // 0e0e5a  call 0xe0b30
    X86_AT(c, 0xe0e5au);
    push32(c, 0xe0e5fu); x86_call_known(c, 0xe0b30u, f_000e0b30); X86_RET(c, 0xe0e5fu);
    X86_TICK(c, 7);
    // 0e0e5f  jmp 0xe115d
    X86_AT(c, 0xe0e5fu);
    goto L_e115d;
L_e0e64:
    X86_TICK(c, 2);
    // 0e0e64  sub edi, edi
    X86_AT(c, 0xe0e64u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e0e66:
    X86_TICK(c, 7);
    // 0e0e66  call 0xe07a8
    X86_AT(c, 0xe0e66u);
    push32(c, 0xe0e6bu); x86_call_known(c, 0xe07a8u, f_000e07a8); X86_RET(c, 0xe0e6bu);
    X86_TICK(c, 9);
    // 0e0e6b  push 7
    X86_AT(c, 0xe0e6bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0e6d  call 0xcacd4
    X86_AT(c, 0xe0e6du);
    push32(c, 0xe0e72u); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xe0e72u);
    X86_TICK(c, 9);
    // 0e0e72  push 7
    X86_AT(c, 0xe0e72u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0e74  call 0xcad80
    X86_AT(c, 0xe0e74u);
    push32(c, 0xe0e79u); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xe0e79u);
    X86_TICK(c, 9);
    // 0e0e79  push 7
    X86_AT(c, 0xe0e79u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0e7b  call 0xca0a0
    X86_AT(c, 0xe0e7bu);
    push32(c, 0xe0e80u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe0e80u);
    X86_TICK(c, 14);
    // 0e0e80  add esp, 0xc
    X86_AT(c, 0xe0e80u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e0e83  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xe0e83u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0e0e8a  je 0xe0eb7
    X86_AT(c, 0xe0e8au);
    if (x86_cc(c, 4)) { goto L_e0eb7; }
    X86_TICK(c, 9);
    // 0e0e8c  push 7
    X86_AT(c, 0xe0e8cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0e8e  call 0xc7dc8
    X86_AT(c, 0xe0e8eu);
    push32(c, 0xe0e93u); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xe0e93u);
    X86_TICK(c, 19);
    // 0e0e93  xchg ebx, eax
    X86_AT(c, 0xe0e93u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e0e94  inc edi
    X86_AT(c, 0xe0e94u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e0e95  add esp, 4
    X86_AT(c, 0xe0e95u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e0e98  cmp dword ptr [0xc03d8], 0
    X86_AT(c, 0xe0e98u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D8u))), 0x0u, 0, 4);
    // 0e0e9f  jne 0xe0eab
    X86_AT(c, 0xe0e9fu);
    if (x86_cc(c, 5)) { goto L_e0eab; }
    X86_TICK(c, 9);
    // 0e0ea1  push 2
    X86_AT(c, 0xe0ea1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0ea3  call 0xd6660
    X86_AT(c, 0xe0ea3u);
    push32(c, 0xe0ea8u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe0ea8u);
    X86_TICK(c, 2);
    // 0e0ea8  add esp, 4
    X86_AT(c, 0xe0ea8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e0eab:
    X86_TICK(c, 7);
    // 0e0eab  and bl, bl
    X86_AT(c, 0xe0eabu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e0ead  jne 0xe0eb7
    X86_AT(c, 0xe0eadu);
    if (x86_cc(c, 5)) { goto L_e0eb7; }
    X86_TICK(c, 7);
    // 0e0eaf  cmp edi, 0x5dc
    X86_AT(c, 0xe0eafu);
    (void)x86_sub(c, c.r[7], 0x5DCu, 0, 4);
    // 0e0eb5  jl 0xe0e66
    X86_AT(c, 0xe0eb5u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xe0e66u); goto L_e0e66; }
L_e0eb7:
    X86_TICK(c, 7);
    // 0e0eb7  and bl, bl
    X86_AT(c, 0xe0eb7u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e0eb9  jne 0xe0ebd
    X86_AT(c, 0xe0eb9u);
    if (x86_cc(c, 5)) { goto L_e0ebd; }
    X86_TICK(c, 2);
    // 0e0ebb  mov bl, 0x20
    X86_AT(c, 0xe0ebbu);
    s8(c, 3, 0x20u);
L_e0ebd:
    X86_TICK(c, 7);
    // 0e0ebd  cmp bl, 0x31
    X86_AT(c, 0xe0ebdu);
    (void)x86_sub(c, g8(c, 3), 0x31u, 0, 1);
    // 0e0ec0  jb 0xe0ee1
    X86_AT(c, 0xe0ec0u);
    if (x86_cc(c, 2)) { goto L_e0ee1; }
    X86_TICK(c, 7);
    // 0e0ec2  cmp bl, 0x38
    X86_AT(c, 0xe0ec2u);
    (void)x86_sub(c, g8(c, 3), 0x38u, 0, 1);
    // 0e0ec5  ja 0xe0ee1
    X86_AT(c, 0xe0ec5u);
    if (x86_cc(c, 7)) { goto L_e0ee1; }
    X86_TICK(c, 12);
    // 0e0ec7  cmp dword ptr [0xc03d8], 1
    X86_AT(c, 0xe0ec7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D8u))), 0x1u, 0, 4);
    // 0e0ece  jne 0xe0ee1
    X86_AT(c, 0xe0eceu);
    if (x86_cc(c, 5)) { goto L_e0ee1; }
    X86_TICK(c, 14);
    // 0e0ed0  movzx ebx, bl
    X86_AT(c, 0xe0ed0u);
    c.r[3] = g8(c, 3);
    // 0e0ed3  lea eax, [ebx - 0x30]
    X86_AT(c, 0xe0ed3u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFD0u);
    // 0e0ed6  push eax
    X86_AT(c, 0xe0ed6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0ed7  call 0xddec8
    X86_AT(c, 0xe0ed7u);
    push32(c, 0xe0edcu); x86_call_known(c, 0xddec8u, f_000ddec8); X86_RET(c, 0xe0edcu);
    X86_TICK(c, 7);
    // 0e0edc  jmp 0xe1071
    X86_AT(c, 0xe0edcu);
    goto L_e1071;
L_e0ee1:
    X86_TICK(c, 12);
    // 0e0ee1  movzx edx, bl
    X86_AT(c, 0xe0ee1u);
    c.r[2] = g8(c, 3);
    // 0e0ee4  dec edx
    X86_AT(c, 0xe0ee4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e0ee5  cmp edx, 0x59
    X86_AT(c, 0xe0ee5u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0e0ee8  ja 0xe113b
    X86_AT(c, 0xe0ee8u);
    if (x86_cc(c, 7)) { goto L_e113b; }
    X86_TICK(c, 7);
    // 0e0eee  jmp dword ptr cs:[edx*4 + 0xe0ef6]
    X86_AT(c, 0xe0eeeu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE0EF6u)));
      switch (t) {
      case 0xe105eu: goto L_e105e;
      case 0xe1062u: goto L_e1062;
      case 0xe1066u: goto L_e1066;
      case 0xe106au: goto L_e106a;
      case 0xe1079u: goto L_e1079;
      case 0xe1083u: goto L_e1083;
      case 0xe108du: goto L_e108d;
      case 0xe1097u: goto L_e1097;
      case 0xe10a1u: goto L_e10a1;
      case 0xe10abu: goto L_e10ab;
      case 0xe10b5u: goto L_e10b5;
      case 0xe10bfu: goto L_e10bf;
      case 0xe10c9u: goto L_e10c9;
      case 0xe10d3u: goto L_e10d3;
      case 0xe10ddu: goto L_e10dd;
      case 0xe10e4u: goto L_e10e4;
      case 0xe10ebu: goto L_e10eb;
      case 0xe10f2u: goto L_e10f2;
      case 0xe10f9u: goto L_e10f9;
      case 0xe1100u: goto L_e1100;
      case 0xe1107u: goto L_e1107;
      case 0xe110eu: goto L_e110e;
      case 0xe1115u: goto L_e1115;
      case 0xe111cu: goto L_e111c;
      case 0xe112du: goto L_e112d;
      case 0xe1134u: goto L_e1134;
      case 0xe113bu: goto L_e113b;
      default: x86_jump(c, t); return; } }
L_e105e:
    X86_TICK(c, 9);
    // 0e105e  push 1
    X86_AT(c, 0xe105eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1060  jmp 0xe106c
    X86_AT(c, 0xe1060u);
    goto L_e106c;
L_e1062:
    X86_TICK(c, 9);
    // 0e1062  push 2
    X86_AT(c, 0xe1062u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1064  jmp 0xe106c
    X86_AT(c, 0xe1064u);
    goto L_e106c;
L_e1066:
    X86_TICK(c, 9);
    // 0e1066  push 3
    X86_AT(c, 0xe1066u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e1068  jmp 0xe106c
    X86_AT(c, 0xe1068u);
    goto L_e106c;
L_e106a:
    X86_TICK(c, 2);
    // 0e106a  push 4
    X86_AT(c, 0xe106au);
    { uint32_t v = 0x4u; push32(c, v); }
L_e106c:
    X86_TICK(c, 7);
    // 0e106c  call 0xde194
    X86_AT(c, 0xe106cu);
    push32(c, 0xe1071u); x86_call_known(c, 0xde194u, f_000de194); X86_RET(c, 0xe1071u);
L_e1071:
    X86_TICK(c, 9);
    // 0e1071  add esp, 4
    X86_AT(c, 0xe1071u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1074  jmp 0xe1140
    X86_AT(c, 0xe1074u);
    goto L_e1140;
L_e1079:
    X86_TICK(c, 7);
    // 0e1079  call 0xde268
    X86_AT(c, 0xe1079u);
    push32(c, 0xe107eu); x86_call_known(c, 0xde268u, f_000de268); X86_RET(c, 0xe107eu);
    X86_TICK(c, 7);
    // 0e107e  jmp 0xe1140
    X86_AT(c, 0xe107eu);
    goto L_e1140;
L_e1083:
    X86_TICK(c, 7);
    // 0e1083  call 0xde278
    X86_AT(c, 0xe1083u);
    push32(c, 0xe1088u); x86_call_known(c, 0xde278u, f_000de278); X86_RET(c, 0xe1088u);
    X86_TICK(c, 7);
    // 0e1088  jmp 0xe1140
    X86_AT(c, 0xe1088u);
    goto L_e1140;
L_e108d:
    X86_TICK(c, 7);
    // 0e108d  call 0xde288
    X86_AT(c, 0xe108du);
    push32(c, 0xe1092u); x86_call_known(c, 0xde288u, f_000de288); X86_RET(c, 0xe1092u);
    X86_TICK(c, 7);
    // 0e1092  jmp 0xe1140
    X86_AT(c, 0xe1092u);
    goto L_e1140;
L_e1097:
    X86_TICK(c, 7);
    // 0e1097  call 0xde298
    X86_AT(c, 0xe1097u);
    push32(c, 0xe109cu); x86_call_known(c, 0xde298u, f_000de298); X86_RET(c, 0xe109cu);
    X86_TICK(c, 7);
    // 0e109c  jmp 0xe1140
    X86_AT(c, 0xe109cu);
    goto L_e1140;
L_e10a1:
    X86_TICK(c, 7);
    // 0e10a1  call 0xde2a8
    X86_AT(c, 0xe10a1u);
    push32(c, 0xe10a6u); x86_call_known(c, 0xde2a8u, f_000de2a8); X86_RET(c, 0xe10a6u);
    X86_TICK(c, 7);
    // 0e10a6  jmp 0xe1140
    X86_AT(c, 0xe10a6u);
    goto L_e1140;
L_e10ab:
    X86_TICK(c, 7);
    // 0e10ab  call 0xddea0
    X86_AT(c, 0xe10abu);
    push32(c, 0xe10b0u); x86_call_known(c, 0xddea0u, f_000ddea0); X86_RET(c, 0xe10b0u);
    X86_TICK(c, 7);
    // 0e10b0  jmp 0xe1140
    X86_AT(c, 0xe10b0u);
    goto L_e1140;
L_e10b5:
    X86_TICK(c, 7);
    // 0e10b5  call 0xde2b8
    X86_AT(c, 0xe10b5u);
    push32(c, 0xe10bau); x86_call_known(c, 0xde2b8u, f_000de2b8); X86_RET(c, 0xe10bau);
    X86_TICK(c, 7);
    // 0e10ba  jmp 0xe1140
    X86_AT(c, 0xe10bau);
    goto L_e1140;
L_e10bf:
    X86_TICK(c, 7);
    // 0e10bf  call 0xdeaec
    X86_AT(c, 0xe10bfu);
    push32(c, 0xe10c4u); x86_call_known(c, 0xdeaecu, f_000deaec); X86_RET(c, 0xe10c4u);
    X86_TICK(c, 7);
    // 0e10c4  jmp 0xe1140
    X86_AT(c, 0xe10c4u);
    goto L_e1140;
L_e10c9:
    X86_TICK(c, 7);
    // 0e10c9  call 0xddcec
    X86_AT(c, 0xe10c9u);
    push32(c, 0xe10ceu); x86_call_known(c, 0xddcecu, f_000ddcec); X86_RET(c, 0xe10ceu);
    X86_TICK(c, 7);
    // 0e10ce  jmp 0xe1140
    X86_AT(c, 0xe10ceu);
    goto L_e1140;
L_e10d3:
    X86_TICK(c, 7);
    // 0e10d3  call 0xde2c8
    X86_AT(c, 0xe10d3u);
    push32(c, 0xe10d8u); x86_call_known(c, 0xde2c8u, f_000de2c8); X86_RET(c, 0xe10d8u);
    X86_TICK(c, 7);
    // 0e10d8  jmp 0xe1140
    X86_AT(c, 0xe10d8u);
    goto L_e1140;
L_e10dd:
    X86_TICK(c, 7);
    // 0e10dd  call 0xcfa5c
    X86_AT(c, 0xe10ddu);
    push32(c, 0xe10e2u); x86_call_known(c, 0xcfa5cu, f_000cfa5c); X86_RET(c, 0xe10e2u);
    X86_TICK(c, 7);
    // 0e10e2  jmp 0xe1140
    X86_AT(c, 0xe10e2u);
    goto L_e1140;
L_e10e4:
    X86_TICK(c, 7);
    // 0e10e4  call 0xde2d8
    X86_AT(c, 0xe10e4u);
    push32(c, 0xe10e9u); x86_call_known(c, 0xde2d8u, f_000de2d8); X86_RET(c, 0xe10e9u);
    X86_TICK(c, 7);
    // 0e10e9  jmp 0xe1140
    X86_AT(c, 0xe10e9u);
    goto L_e1140;
L_e10eb:
    X86_TICK(c, 7);
    // 0e10eb  call 0xde2e8
    X86_AT(c, 0xe10ebu);
    push32(c, 0xe10f0u); x86_call_known(c, 0xde2e8u, f_000de2e8); X86_RET(c, 0xe10f0u);
    X86_TICK(c, 7);
    // 0e10f0  jmp 0xe1140
    X86_AT(c, 0xe10f0u);
    goto L_e1140;
L_e10f2:
    X86_TICK(c, 7);
    // 0e10f2  call 0xde2f8
    X86_AT(c, 0xe10f2u);
    push32(c, 0xe10f7u); x86_call_known(c, 0xde2f8u, f_000de2f8); X86_RET(c, 0xe10f7u);
    X86_TICK(c, 7);
    // 0e10f7  jmp 0xe1140
    X86_AT(c, 0xe10f7u);
    goto L_e1140;
L_e10f9:
    X86_TICK(c, 7);
    // 0e10f9  call 0xde308
    X86_AT(c, 0xe10f9u);
    push32(c, 0xe10feu); x86_call_known(c, 0xde308u, f_000de308); X86_RET(c, 0xe10feu);
    X86_TICK(c, 7);
    // 0e10fe  jmp 0xe1140
    X86_AT(c, 0xe10feu);
    goto L_e1140;
L_e1100:
    X86_TICK(c, 7);
    // 0e1100  call 0xde318
    X86_AT(c, 0xe1100u);
    push32(c, 0xe1105u); x86_call_known(c, 0xde318u, f_000de318); X86_RET(c, 0xe1105u);
    X86_TICK(c, 7);
    // 0e1105  jmp 0xe1140
    X86_AT(c, 0xe1105u);
    goto L_e1140;
L_e1107:
    X86_TICK(c, 7);
    // 0e1107  call 0xde328
    X86_AT(c, 0xe1107u);
    push32(c, 0xe110cu); x86_call_known(c, 0xde328u, f_000de328); X86_RET(c, 0xe110cu);
    X86_TICK(c, 7);
    // 0e110c  jmp 0xe1140
    X86_AT(c, 0xe110cu);
    goto L_e1140;
L_e110e:
    X86_TICK(c, 7);
    // 0e110e  call 0xdd840
    X86_AT(c, 0xe110eu);
    push32(c, 0xe1113u); x86_call_known(c, 0xdd840u, f_000dd840); X86_RET(c, 0xe1113u);
    X86_TICK(c, 7);
    // 0e1113  jmp 0xe1140
    X86_AT(c, 0xe1113u);
    goto L_e1140;
L_e1115:
    X86_TICK(c, 7);
    // 0e1115  call 0xde338
    X86_AT(c, 0xe1115u);
    push32(c, 0xe111au); x86_call_known(c, 0xde338u, f_000de338); X86_RET(c, 0xe111au);
    X86_TICK(c, 7);
    // 0e111a  jmp 0xe1140
    X86_AT(c, 0xe111au);
    goto L_e1140;
L_e111c:
    X86_TICK(c, 7);
    // 0e111c  call 0xdd308
    X86_AT(c, 0xe111cu);
    push32(c, 0xe1121u); x86_call_known(c, 0xdd308u, f_000dd308); X86_RET(c, 0xe1121u);
    X86_TICK(c, 9);
    // 0e1121  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xe1121u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0e112b  jmp 0xe1140
    X86_AT(c, 0xe112bu);
    goto L_e1140;
L_e112d:
    X86_TICK(c, 7);
    // 0e112d  call 0xde348
    X86_AT(c, 0xe112du);
    push32(c, 0xe1132u); x86_call_known(c, 0xde348u, f_000de348); X86_RET(c, 0xe1132u);
    X86_TICK(c, 7);
    // 0e1132  jmp 0xe1140
    X86_AT(c, 0xe1132u);
    goto L_e1140;
L_e1134:
    X86_TICK(c, 9);
    // 0e1134  mov esi, 1
    X86_AT(c, 0xe1134u);
    c.r[6] = 0x1u;
    // 0e1139  jmp 0xe1140
    X86_AT(c, 0xe1139u);
    goto L_e1140;
L_e113b:
    X86_TICK(c, 7);
    // 0e113b  call 0xe0ae0
    X86_AT(c, 0xe113bu);
    push32(c, 0xe1140u); x86_call_known(c, 0xe0ae0u, f_000e0ae0); X86_RET(c, 0xe1140u);
L_e1140:
    X86_TICK(c, 12);
    // 0e1140  cmp dword ptr [0xbef90], 0
    X86_AT(c, 0xe1140u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF90u))), 0x0u, 0, 4);
    // 0e1147  je 0xe114e
    X86_AT(c, 0xe1147u);
    if (x86_cc(c, 4)) { goto L_e114e; }
    X86_TICK(c, 7);
    // 0e1149  call 0xe09d8
    X86_AT(c, 0xe1149u);
    push32(c, 0xe114eu); x86_call_known(c, 0xe09d8u, f_000e09d8); X86_RET(c, 0xe114eu);
L_e114e:
    X86_TICK(c, 12);
    // 0e114e  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xe114eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0e1155  jne 0xe0e3b
    X86_AT(c, 0xe1155u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe0e3bu); goto L_e0e3b; }
    X86_TICK(c, 2);
    // 0e115b  sub esi, esi
    X86_AT(c, 0xe115bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e115d:
    X86_TICK(c, 9);
    // 0e115d  push 7
    X86_AT(c, 0xe115du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e115f  call 0xca0a0
    X86_AT(c, 0xe115fu);
    push32(c, 0xe1164u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe1164u);
    X86_TICK(c, 11);
    // 0e1164  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xe1164u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0e116b  push 0xdfec
    X86_AT(c, 0xe116bu);
    { uint32_t v = 0xDFECu; push32(c, v); }
    // 0e1170  call 0xcba5c
    X86_AT(c, 0xe1170u);
    push32(c, 0xe1175u); x86_call_known(c, 0xcba5cu, f_000cba5c); X86_RET(c, 0xe1175u);
    X86_TICK(c, 9);
    // 0e1175  push 0
    X86_AT(c, 0xe1175u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1177  call 0xc71e0
    X86_AT(c, 0xe1177u);
    push32(c, 0xe117cu); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xe117cu);
    X86_TICK(c, 9);
    // 0e117c  push 1
    X86_AT(c, 0xe117cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e117e  call 0xc8f40
    X86_AT(c, 0xe117eu);
    push32(c, 0xe1183u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xe1183u);
    X86_TICK(c, 9);
    // 0e1183  push 0
    X86_AT(c, 0xe1183u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1185  call 0xc92e0
    X86_AT(c, 0xe1185u);
    push32(c, 0xe118au); x86_call_known(c, 0xc92e0u, f_000c92e0); X86_RET(c, 0xe118au);
    X86_TICK(c, 9);
    // 0e118a  push 0
    X86_AT(c, 0xe118au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e118c  call 0xc8f40
    X86_AT(c, 0xe118cu);
    push32(c, 0xe1191u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xe1191u);
    X86_TICK(c, 9);
    // 0e1191  push 0xd
    X86_AT(c, 0xe1191u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e1193  call 0xd66ec
    X86_AT(c, 0xe1193u);
    push32(c, 0xe1198u); x86_call_known(c, 0xd66ecu, f_000d66ec); X86_RET(c, 0xe1198u);
    X86_TICK(c, 7);
    // 0e1198  call 0xd3370
    X86_AT(c, 0xe1198u);
    push32(c, 0xe119du); x86_call_known(c, 0xd3370u, f_000d3370); X86_RET(c, 0xe119du);
    X86_TICK(c, 7);
    // 0e119d  call 0xd35c0
    X86_AT(c, 0xe119du);
    push32(c, 0xe11a2u); x86_call_known(c, 0xd35c0u, f_000d35c0); X86_RET(c, 0xe11a2u);
    X86_TICK(c, 9);
    // 0e11a2  push 2
    X86_AT(c, 0xe11a2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e11a4  call 0xc8f54
    X86_AT(c, 0xe11a4u);
    push32(c, 0xe11a9u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xe11a9u);
    X86_TICK(c, 7);
    // 0e11a9  call 0xd351c
    X86_AT(c, 0xe11a9u);
    push32(c, 0xe11aeu); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xe11aeu);
    X86_TICK(c, 7);
    // 0e11ae  call 0xcc700
    X86_AT(c, 0xe11aeu);
    push32(c, 0xe11b3u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xe11b3u);
    X86_TICK(c, 14);
    // 0e11b3  add esp, 0x20
    X86_AT(c, 0xe11b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e11b6  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xe11b6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0e11bd  jle 0xe11c8
    X86_AT(c, 0xe11bdu);
    if (x86_cc(c, 14)) { goto L_e11c8; }
    X86_TICK(c, 12);
    // 0e11bf  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xe11bfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0e11c6  jg 0xe11cf
    X86_AT(c, 0xe11c6u);
    if (x86_cc(c, 15)) { goto L_e11cf; }
L_e11c8:
    X86_TICK(c, 7);
    // 0e11c8  call 0xd2f10
    X86_AT(c, 0xe11c8u);
    push32(c, 0xe11cdu); x86_call_known(c, 0xd2f10u, f_000d2f10); X86_RET(c, 0xe11cdu);
    X86_TICK(c, 7);
    // 0e11cd  jmp 0xe1206
    X86_AT(c, 0xe11cdu);
    goto L_e1206;
L_e11cf:
    X86_TICK(c, 9);
    // 0e11cf  push 0x42b8c
    X86_AT(c, 0xe11cfu);
    { uint32_t v = 0x42B8Cu; push32(c, v); }
    // 0e11d4  call 0xcbf54
    X86_AT(c, 0xe11d4u);
    push32(c, 0xe11d9u); x86_call_known(c, 0xcbf54u, f_000cbf54); X86_RET(c, 0xe11d9u);
    X86_TICK(c, 9);
    // 0e11d9  push 1
    X86_AT(c, 0xe11d9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e11db  call 0xc5e44
    X86_AT(c, 0xe11dbu);
    push32(c, 0xe11e0u); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xe11e0u);
    X86_TICK(c, 9);
    // 0e11e0  push 7
    X86_AT(c, 0xe11e0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e11e2  call 0xcacd4
    X86_AT(c, 0xe11e2u);
    push32(c, 0xe11e7u); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xe11e7u);
    X86_TICK(c, 9);
    // 0e11e7  push 7
    X86_AT(c, 0xe11e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e11e9  call 0xca0a0
    X86_AT(c, 0xe11e9u);
    push32(c, 0xe11eeu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe11eeu);
    X86_TICK(c, 9);
    // 0e11ee  push 0x32
    X86_AT(c, 0xe11eeu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0e11f0  call 0xd6660
    X86_AT(c, 0xe11f0u);
    push32(c, 0xe11f5u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe11f5u);
    X86_TICK(c, 14);
    // 0e11f5  add esp, 0x14
    X86_AT(c, 0xe11f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e11f8  cmp dword ptr [0xb0332], 0
    X86_AT(c, 0xe11f8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0332u))), 0x0u, 0, 4);
    // 0e11ff  je 0xe1206
    X86_AT(c, 0xe11ffu);
    if (x86_cc(c, 4)) { goto L_e1206; }
    X86_TICK(c, 7);
    // 0e1201  call 0xce270
    X86_AT(c, 0xe1201u);
    push32(c, 0xe1206u); x86_call_known(c, 0xce270u, f_000ce270); X86_RET(c, 0xe1206u);
L_e1206:
    X86_TICK(c, 28);
    // 0e1206  pop edi
    X86_AT(c, 0xe1206u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1207  pop esi
    X86_AT(c, 0xe1207u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e1208  pop ebx
    X86_AT(c, 0xe1208u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e1209  leave 
    X86_AT(c, 0xe1209u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e120a  ret 
    X86_AT(c, 0xe120au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0c0cu, "ran off the end of a function");
}
void f_000e1140(X86Cpu& c) {
    goto L_e1140;
L_e0e3b:
    X86_TICK(c, 7);
    // 0e0e3b  call 0xdf778
    X86_AT(c, 0xe0e3bu);
    push32(c, 0xe0e40u); x86_call_known(c, 0xdf778u, f_000df778); X86_RET(c, 0xe0e40u);
    X86_TICK(c, 7);
    // 0e0e40  and eax, eax
    X86_AT(c, 0xe0e40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e0e42  jne 0xe0e64
    X86_AT(c, 0xe0e42u);
    if (x86_cc(c, 5)) { goto L_e0e64; }
    X86_TICK(c, 13);
    // 0e0e44  sub eax, eax
    X86_AT(c, 0xe0e44u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e0e46  mov dword ptr [0xb042e], eax
    X86_AT(c, 0xe0e46u);
    wr32((c.sbase[3] + (uint32_t)(0xB042Eu)), c.r[0]);
    // 0e0e4b  mov dword ptr [0xb0432], eax
    X86_AT(c, 0xe0e4bu);
    wr32((c.sbase[3] + (uint32_t)(0xB0432u)), c.r[0]);
    // 0e0e50  call 0xdf658
    X86_AT(c, 0xe0e50u);
    push32(c, 0xe0e55u); x86_call_known(c, 0xdf658u, f_000df658); X86_RET(c, 0xe0e55u);
    X86_TICK(c, 7);
    // 0e0e55  call 0xdf660
    X86_AT(c, 0xe0e55u);
    push32(c, 0xe0e5au); x86_call_known(c, 0xdf660u, f_000df660); X86_RET(c, 0xe0e5au);
    X86_TICK(c, 7);
    // 0e0e5a  call 0xe0b30
    X86_AT(c, 0xe0e5au);
    push32(c, 0xe0e5fu); x86_call_known(c, 0xe0b30u, f_000e0b30); X86_RET(c, 0xe0e5fu);
    X86_TICK(c, 7);
    // 0e0e5f  jmp 0xe115d
    X86_AT(c, 0xe0e5fu);
    goto L_e115d;
L_e0e64:
    X86_TICK(c, 2);
    // 0e0e64  sub edi, edi
    X86_AT(c, 0xe0e64u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e0e66:
    X86_TICK(c, 7);
    // 0e0e66  call 0xe07a8
    X86_AT(c, 0xe0e66u);
    push32(c, 0xe0e6bu); x86_call_known(c, 0xe07a8u, f_000e07a8); X86_RET(c, 0xe0e6bu);
    X86_TICK(c, 9);
    // 0e0e6b  push 7
    X86_AT(c, 0xe0e6bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0e6d  call 0xcacd4
    X86_AT(c, 0xe0e6du);
    push32(c, 0xe0e72u); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xe0e72u);
    X86_TICK(c, 9);
    // 0e0e72  push 7
    X86_AT(c, 0xe0e72u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0e74  call 0xcad80
    X86_AT(c, 0xe0e74u);
    push32(c, 0xe0e79u); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xe0e79u);
    X86_TICK(c, 9);
    // 0e0e79  push 7
    X86_AT(c, 0xe0e79u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0e7b  call 0xca0a0
    X86_AT(c, 0xe0e7bu);
    push32(c, 0xe0e80u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe0e80u);
    X86_TICK(c, 14);
    // 0e0e80  add esp, 0xc
    X86_AT(c, 0xe0e80u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e0e83  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xe0e83u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0e0e8a  je 0xe0eb7
    X86_AT(c, 0xe0e8au);
    if (x86_cc(c, 4)) { goto L_e0eb7; }
    X86_TICK(c, 9);
    // 0e0e8c  push 7
    X86_AT(c, 0xe0e8cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0e8e  call 0xc7dc8
    X86_AT(c, 0xe0e8eu);
    push32(c, 0xe0e93u); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xe0e93u);
    X86_TICK(c, 19);
    // 0e0e93  xchg ebx, eax
    X86_AT(c, 0xe0e93u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e0e94  inc edi
    X86_AT(c, 0xe0e94u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e0e95  add esp, 4
    X86_AT(c, 0xe0e95u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e0e98  cmp dword ptr [0xc03d8], 0
    X86_AT(c, 0xe0e98u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D8u))), 0x0u, 0, 4);
    // 0e0e9f  jne 0xe0eab
    X86_AT(c, 0xe0e9fu);
    if (x86_cc(c, 5)) { goto L_e0eab; }
    X86_TICK(c, 9);
    // 0e0ea1  push 2
    X86_AT(c, 0xe0ea1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0ea3  call 0xd6660
    X86_AT(c, 0xe0ea3u);
    push32(c, 0xe0ea8u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe0ea8u);
    X86_TICK(c, 2);
    // 0e0ea8  add esp, 4
    X86_AT(c, 0xe0ea8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e0eab:
    X86_TICK(c, 7);
    // 0e0eab  and bl, bl
    X86_AT(c, 0xe0eabu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e0ead  jne 0xe0eb7
    X86_AT(c, 0xe0eadu);
    if (x86_cc(c, 5)) { goto L_e0eb7; }
    X86_TICK(c, 7);
    // 0e0eaf  cmp edi, 0x5dc
    X86_AT(c, 0xe0eafu);
    (void)x86_sub(c, c.r[7], 0x5DCu, 0, 4);
    // 0e0eb5  jl 0xe0e66
    X86_AT(c, 0xe0eb5u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xe0e66u); goto L_e0e66; }
L_e0eb7:
    X86_TICK(c, 7);
    // 0e0eb7  and bl, bl
    X86_AT(c, 0xe0eb7u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e0eb9  jne 0xe0ebd
    X86_AT(c, 0xe0eb9u);
    if (x86_cc(c, 5)) { goto L_e0ebd; }
    X86_TICK(c, 2);
    // 0e0ebb  mov bl, 0x20
    X86_AT(c, 0xe0ebbu);
    s8(c, 3, 0x20u);
L_e0ebd:
    X86_TICK(c, 7);
    // 0e0ebd  cmp bl, 0x31
    X86_AT(c, 0xe0ebdu);
    (void)x86_sub(c, g8(c, 3), 0x31u, 0, 1);
    // 0e0ec0  jb 0xe0ee1
    X86_AT(c, 0xe0ec0u);
    if (x86_cc(c, 2)) { goto L_e0ee1; }
    X86_TICK(c, 7);
    // 0e0ec2  cmp bl, 0x38
    X86_AT(c, 0xe0ec2u);
    (void)x86_sub(c, g8(c, 3), 0x38u, 0, 1);
    // 0e0ec5  ja 0xe0ee1
    X86_AT(c, 0xe0ec5u);
    if (x86_cc(c, 7)) { goto L_e0ee1; }
    X86_TICK(c, 12);
    // 0e0ec7  cmp dword ptr [0xc03d8], 1
    X86_AT(c, 0xe0ec7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D8u))), 0x1u, 0, 4);
    // 0e0ece  jne 0xe0ee1
    X86_AT(c, 0xe0eceu);
    if (x86_cc(c, 5)) { goto L_e0ee1; }
    X86_TICK(c, 14);
    // 0e0ed0  movzx ebx, bl
    X86_AT(c, 0xe0ed0u);
    c.r[3] = g8(c, 3);
    // 0e0ed3  lea eax, [ebx - 0x30]
    X86_AT(c, 0xe0ed3u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFD0u);
    // 0e0ed6  push eax
    X86_AT(c, 0xe0ed6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0ed7  call 0xddec8
    X86_AT(c, 0xe0ed7u);
    push32(c, 0xe0edcu); x86_call_known(c, 0xddec8u, f_000ddec8); X86_RET(c, 0xe0edcu);
    X86_TICK(c, 7);
    // 0e0edc  jmp 0xe1071
    X86_AT(c, 0xe0edcu);
    goto L_e1071;
L_e0ee1:
    X86_TICK(c, 12);
    // 0e0ee1  movzx edx, bl
    X86_AT(c, 0xe0ee1u);
    c.r[2] = g8(c, 3);
    // 0e0ee4  dec edx
    X86_AT(c, 0xe0ee4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e0ee5  cmp edx, 0x59
    X86_AT(c, 0xe0ee5u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0e0ee8  ja 0xe113b
    X86_AT(c, 0xe0ee8u);
    if (x86_cc(c, 7)) { goto L_e113b; }
    X86_TICK(c, 7);
    // 0e0eee  jmp dword ptr cs:[edx*4 + 0xe0ef6]
    X86_AT(c, 0xe0eeeu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE0EF6u)));
      switch (t) {
      case 0xe105eu: goto L_e105e;
      case 0xe1062u: goto L_e1062;
      case 0xe1066u: goto L_e1066;
      case 0xe106au: goto L_e106a;
      case 0xe1079u: goto L_e1079;
      case 0xe1083u: goto L_e1083;
      case 0xe108du: goto L_e108d;
      case 0xe1097u: goto L_e1097;
      case 0xe10a1u: goto L_e10a1;
      case 0xe10abu: goto L_e10ab;
      case 0xe10b5u: goto L_e10b5;
      case 0xe10bfu: goto L_e10bf;
      case 0xe10c9u: goto L_e10c9;
      case 0xe10d3u: goto L_e10d3;
      case 0xe10ddu: goto L_e10dd;
      case 0xe10e4u: goto L_e10e4;
      case 0xe10ebu: goto L_e10eb;
      case 0xe10f2u: goto L_e10f2;
      case 0xe10f9u: goto L_e10f9;
      case 0xe1100u: goto L_e1100;
      case 0xe1107u: goto L_e1107;
      case 0xe110eu: goto L_e110e;
      case 0xe1115u: goto L_e1115;
      case 0xe111cu: goto L_e111c;
      case 0xe112du: goto L_e112d;
      case 0xe1134u: goto L_e1134;
      case 0xe113bu: goto L_e113b;
      default: x86_jump(c, t); return; } }
L_e105e:
    X86_TICK(c, 9);
    // 0e105e  push 1
    X86_AT(c, 0xe105eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1060  jmp 0xe106c
    X86_AT(c, 0xe1060u);
    goto L_e106c;
L_e1062:
    X86_TICK(c, 9);
    // 0e1062  push 2
    X86_AT(c, 0xe1062u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1064  jmp 0xe106c
    X86_AT(c, 0xe1064u);
    goto L_e106c;
L_e1066:
    X86_TICK(c, 9);
    // 0e1066  push 3
    X86_AT(c, 0xe1066u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e1068  jmp 0xe106c
    X86_AT(c, 0xe1068u);
    goto L_e106c;
L_e106a:
    X86_TICK(c, 2);
    // 0e106a  push 4
    X86_AT(c, 0xe106au);
    { uint32_t v = 0x4u; push32(c, v); }
L_e106c:
    X86_TICK(c, 7);
    // 0e106c  call 0xde194
    X86_AT(c, 0xe106cu);
    push32(c, 0xe1071u); x86_call_known(c, 0xde194u, f_000de194); X86_RET(c, 0xe1071u);
L_e1071:
    X86_TICK(c, 9);
    // 0e1071  add esp, 4
    X86_AT(c, 0xe1071u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1074  jmp 0xe1140
    X86_AT(c, 0xe1074u);
    goto L_e1140;
L_e1079:
    X86_TICK(c, 7);
    // 0e1079  call 0xde268
    X86_AT(c, 0xe1079u);
    push32(c, 0xe107eu); x86_call_known(c, 0xde268u, f_000de268); X86_RET(c, 0xe107eu);
    X86_TICK(c, 7);
    // 0e107e  jmp 0xe1140
    X86_AT(c, 0xe107eu);
    goto L_e1140;
L_e1083:
    X86_TICK(c, 7);
    // 0e1083  call 0xde278
    X86_AT(c, 0xe1083u);
    push32(c, 0xe1088u); x86_call_known(c, 0xde278u, f_000de278); X86_RET(c, 0xe1088u);
    X86_TICK(c, 7);
    // 0e1088  jmp 0xe1140
    X86_AT(c, 0xe1088u);
    goto L_e1140;
L_e108d:
    X86_TICK(c, 7);
    // 0e108d  call 0xde288
    X86_AT(c, 0xe108du);
    push32(c, 0xe1092u); x86_call_known(c, 0xde288u, f_000de288); X86_RET(c, 0xe1092u);
    X86_TICK(c, 7);
    // 0e1092  jmp 0xe1140
    X86_AT(c, 0xe1092u);
    goto L_e1140;
L_e1097:
    X86_TICK(c, 7);
    // 0e1097  call 0xde298
    X86_AT(c, 0xe1097u);
    push32(c, 0xe109cu); x86_call_known(c, 0xde298u, f_000de298); X86_RET(c, 0xe109cu);
    X86_TICK(c, 7);
    // 0e109c  jmp 0xe1140
    X86_AT(c, 0xe109cu);
    goto L_e1140;
L_e10a1:
    X86_TICK(c, 7);
    // 0e10a1  call 0xde2a8
    X86_AT(c, 0xe10a1u);
    push32(c, 0xe10a6u); x86_call_known(c, 0xde2a8u, f_000de2a8); X86_RET(c, 0xe10a6u);
    X86_TICK(c, 7);
    // 0e10a6  jmp 0xe1140
    X86_AT(c, 0xe10a6u);
    goto L_e1140;
L_e10ab:
    X86_TICK(c, 7);
    // 0e10ab  call 0xddea0
    X86_AT(c, 0xe10abu);
    push32(c, 0xe10b0u); x86_call_known(c, 0xddea0u, f_000ddea0); X86_RET(c, 0xe10b0u);
    X86_TICK(c, 7);
    // 0e10b0  jmp 0xe1140
    X86_AT(c, 0xe10b0u);
    goto L_e1140;
L_e10b5:
    X86_TICK(c, 7);
    // 0e10b5  call 0xde2b8
    X86_AT(c, 0xe10b5u);
    push32(c, 0xe10bau); x86_call_known(c, 0xde2b8u, f_000de2b8); X86_RET(c, 0xe10bau);
    X86_TICK(c, 7);
    // 0e10ba  jmp 0xe1140
    X86_AT(c, 0xe10bau);
    goto L_e1140;
L_e10bf:
    X86_TICK(c, 7);
    // 0e10bf  call 0xdeaec
    X86_AT(c, 0xe10bfu);
    push32(c, 0xe10c4u); x86_call_known(c, 0xdeaecu, f_000deaec); X86_RET(c, 0xe10c4u);
    X86_TICK(c, 7);
    // 0e10c4  jmp 0xe1140
    X86_AT(c, 0xe10c4u);
    goto L_e1140;
L_e10c9:
    X86_TICK(c, 7);
    // 0e10c9  call 0xddcec
    X86_AT(c, 0xe10c9u);
    push32(c, 0xe10ceu); x86_call_known(c, 0xddcecu, f_000ddcec); X86_RET(c, 0xe10ceu);
    X86_TICK(c, 7);
    // 0e10ce  jmp 0xe1140
    X86_AT(c, 0xe10ceu);
    goto L_e1140;
L_e10d3:
    X86_TICK(c, 7);
    // 0e10d3  call 0xde2c8
    X86_AT(c, 0xe10d3u);
    push32(c, 0xe10d8u); x86_call_known(c, 0xde2c8u, f_000de2c8); X86_RET(c, 0xe10d8u);
    X86_TICK(c, 7);
    // 0e10d8  jmp 0xe1140
    X86_AT(c, 0xe10d8u);
    goto L_e1140;
L_e10dd:
    X86_TICK(c, 7);
    // 0e10dd  call 0xcfa5c
    X86_AT(c, 0xe10ddu);
    push32(c, 0xe10e2u); x86_call_known(c, 0xcfa5cu, f_000cfa5c); X86_RET(c, 0xe10e2u);
    X86_TICK(c, 7);
    // 0e10e2  jmp 0xe1140
    X86_AT(c, 0xe10e2u);
    goto L_e1140;
L_e10e4:
    X86_TICK(c, 7);
    // 0e10e4  call 0xde2d8
    X86_AT(c, 0xe10e4u);
    push32(c, 0xe10e9u); x86_call_known(c, 0xde2d8u, f_000de2d8); X86_RET(c, 0xe10e9u);
    X86_TICK(c, 7);
    // 0e10e9  jmp 0xe1140
    X86_AT(c, 0xe10e9u);
    goto L_e1140;
L_e10eb:
    X86_TICK(c, 7);
    // 0e10eb  call 0xde2e8
    X86_AT(c, 0xe10ebu);
    push32(c, 0xe10f0u); x86_call_known(c, 0xde2e8u, f_000de2e8); X86_RET(c, 0xe10f0u);
    X86_TICK(c, 7);
    // 0e10f0  jmp 0xe1140
    X86_AT(c, 0xe10f0u);
    goto L_e1140;
L_e10f2:
    X86_TICK(c, 7);
    // 0e10f2  call 0xde2f8
    X86_AT(c, 0xe10f2u);
    push32(c, 0xe10f7u); x86_call_known(c, 0xde2f8u, f_000de2f8); X86_RET(c, 0xe10f7u);
    X86_TICK(c, 7);
    // 0e10f7  jmp 0xe1140
    X86_AT(c, 0xe10f7u);
    goto L_e1140;
L_e10f9:
    X86_TICK(c, 7);
    // 0e10f9  call 0xde308
    X86_AT(c, 0xe10f9u);
    push32(c, 0xe10feu); x86_call_known(c, 0xde308u, f_000de308); X86_RET(c, 0xe10feu);
    X86_TICK(c, 7);
    // 0e10fe  jmp 0xe1140
    X86_AT(c, 0xe10feu);
    goto L_e1140;
L_e1100:
    X86_TICK(c, 7);
    // 0e1100  call 0xde318
    X86_AT(c, 0xe1100u);
    push32(c, 0xe1105u); x86_call_known(c, 0xde318u, f_000de318); X86_RET(c, 0xe1105u);
    X86_TICK(c, 7);
    // 0e1105  jmp 0xe1140
    X86_AT(c, 0xe1105u);
    goto L_e1140;
L_e1107:
    X86_TICK(c, 7);
    // 0e1107  call 0xde328
    X86_AT(c, 0xe1107u);
    push32(c, 0xe110cu); x86_call_known(c, 0xde328u, f_000de328); X86_RET(c, 0xe110cu);
    X86_TICK(c, 7);
    // 0e110c  jmp 0xe1140
    X86_AT(c, 0xe110cu);
    goto L_e1140;
L_e110e:
    X86_TICK(c, 7);
    // 0e110e  call 0xdd840
    X86_AT(c, 0xe110eu);
    push32(c, 0xe1113u); x86_call_known(c, 0xdd840u, f_000dd840); X86_RET(c, 0xe1113u);
    X86_TICK(c, 7);
    // 0e1113  jmp 0xe1140
    X86_AT(c, 0xe1113u);
    goto L_e1140;
L_e1115:
    X86_TICK(c, 7);
    // 0e1115  call 0xde338
    X86_AT(c, 0xe1115u);
    push32(c, 0xe111au); x86_call_known(c, 0xde338u, f_000de338); X86_RET(c, 0xe111au);
    X86_TICK(c, 7);
    // 0e111a  jmp 0xe1140
    X86_AT(c, 0xe111au);
    goto L_e1140;
L_e111c:
    X86_TICK(c, 7);
    // 0e111c  call 0xdd308
    X86_AT(c, 0xe111cu);
    push32(c, 0xe1121u); x86_call_known(c, 0xdd308u, f_000dd308); X86_RET(c, 0xe1121u);
    X86_TICK(c, 9);
    // 0e1121  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xe1121u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0e112b  jmp 0xe1140
    X86_AT(c, 0xe112bu);
    goto L_e1140;
L_e112d:
    X86_TICK(c, 7);
    // 0e112d  call 0xde348
    X86_AT(c, 0xe112du);
    push32(c, 0xe1132u); x86_call_known(c, 0xde348u, f_000de348); X86_RET(c, 0xe1132u);
    X86_TICK(c, 7);
    // 0e1132  jmp 0xe1140
    X86_AT(c, 0xe1132u);
    goto L_e1140;
L_e1134:
    X86_TICK(c, 9);
    // 0e1134  mov esi, 1
    X86_AT(c, 0xe1134u);
    c.r[6] = 0x1u;
    // 0e1139  jmp 0xe1140
    X86_AT(c, 0xe1139u);
    goto L_e1140;
L_e113b:
    X86_TICK(c, 7);
    // 0e113b  call 0xe0ae0
    X86_AT(c, 0xe113bu);
    push32(c, 0xe1140u); x86_call_known(c, 0xe0ae0u, f_000e0ae0); X86_RET(c, 0xe1140u);
L_e1140:
    X86_TICK(c, 12);
    // 0e1140  cmp dword ptr [0xbef90], 0
    X86_AT(c, 0xe1140u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF90u))), 0x0u, 0, 4);
    // 0e1147  je 0xe114e
    X86_AT(c, 0xe1147u);
    if (x86_cc(c, 4)) { goto L_e114e; }
    X86_TICK(c, 7);
    // 0e1149  call 0xe09d8
    X86_AT(c, 0xe1149u);
    push32(c, 0xe114eu); x86_call_known(c, 0xe09d8u, f_000e09d8); X86_RET(c, 0xe114eu);
L_e114e:
    X86_TICK(c, 12);
    // 0e114e  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xe114eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0e1155  jne 0xe0e3b
    X86_AT(c, 0xe1155u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe0e3bu); goto L_e0e3b; }
    X86_TICK(c, 2);
    // 0e115b  sub esi, esi
    X86_AT(c, 0xe115bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e115d:
    X86_TICK(c, 9);
    // 0e115d  push 7
    X86_AT(c, 0xe115du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e115f  call 0xca0a0
    X86_AT(c, 0xe115fu);
    push32(c, 0xe1164u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe1164u);
    X86_TICK(c, 11);
    // 0e1164  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xe1164u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0e116b  push 0xdfec
    X86_AT(c, 0xe116bu);
    { uint32_t v = 0xDFECu; push32(c, v); }
    // 0e1170  call 0xcba5c
    X86_AT(c, 0xe1170u);
    push32(c, 0xe1175u); x86_call_known(c, 0xcba5cu, f_000cba5c); X86_RET(c, 0xe1175u);
    X86_TICK(c, 9);
    // 0e1175  push 0
    X86_AT(c, 0xe1175u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1177  call 0xc71e0
    X86_AT(c, 0xe1177u);
    push32(c, 0xe117cu); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xe117cu);
    X86_TICK(c, 9);
    // 0e117c  push 1
    X86_AT(c, 0xe117cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e117e  call 0xc8f40
    X86_AT(c, 0xe117eu);
    push32(c, 0xe1183u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xe1183u);
    X86_TICK(c, 9);
    // 0e1183  push 0
    X86_AT(c, 0xe1183u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1185  call 0xc92e0
    X86_AT(c, 0xe1185u);
    push32(c, 0xe118au); x86_call_known(c, 0xc92e0u, f_000c92e0); X86_RET(c, 0xe118au);
    X86_TICK(c, 9);
    // 0e118a  push 0
    X86_AT(c, 0xe118au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e118c  call 0xc8f40
    X86_AT(c, 0xe118cu);
    push32(c, 0xe1191u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xe1191u);
    X86_TICK(c, 9);
    // 0e1191  push 0xd
    X86_AT(c, 0xe1191u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e1193  call 0xd66ec
    X86_AT(c, 0xe1193u);
    push32(c, 0xe1198u); x86_call_known(c, 0xd66ecu, f_000d66ec); X86_RET(c, 0xe1198u);
    X86_TICK(c, 7);
    // 0e1198  call 0xd3370
    X86_AT(c, 0xe1198u);
    push32(c, 0xe119du); x86_call_known(c, 0xd3370u, f_000d3370); X86_RET(c, 0xe119du);
    X86_TICK(c, 7);
    // 0e119d  call 0xd35c0
    X86_AT(c, 0xe119du);
    push32(c, 0xe11a2u); x86_call_known(c, 0xd35c0u, f_000d35c0); X86_RET(c, 0xe11a2u);
    X86_TICK(c, 9);
    // 0e11a2  push 2
    X86_AT(c, 0xe11a2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e11a4  call 0xc8f54
    X86_AT(c, 0xe11a4u);
    push32(c, 0xe11a9u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xe11a9u);
    X86_TICK(c, 7);
    // 0e11a9  call 0xd351c
    X86_AT(c, 0xe11a9u);
    push32(c, 0xe11aeu); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xe11aeu);
    X86_TICK(c, 7);
    // 0e11ae  call 0xcc700
    X86_AT(c, 0xe11aeu);
    push32(c, 0xe11b3u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xe11b3u);
    X86_TICK(c, 14);
    // 0e11b3  add esp, 0x20
    X86_AT(c, 0xe11b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e11b6  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xe11b6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0e11bd  jle 0xe11c8
    X86_AT(c, 0xe11bdu);
    if (x86_cc(c, 14)) { goto L_e11c8; }
    X86_TICK(c, 12);
    // 0e11bf  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xe11bfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0e11c6  jg 0xe11cf
    X86_AT(c, 0xe11c6u);
    if (x86_cc(c, 15)) { goto L_e11cf; }
L_e11c8:
    X86_TICK(c, 7);
    // 0e11c8  call 0xd2f10
    X86_AT(c, 0xe11c8u);
    push32(c, 0xe11cdu); x86_call_known(c, 0xd2f10u, f_000d2f10); X86_RET(c, 0xe11cdu);
    X86_TICK(c, 7);
    // 0e11cd  jmp 0xe1206
    X86_AT(c, 0xe11cdu);
    goto L_e1206;
L_e11cf:
    X86_TICK(c, 9);
    // 0e11cf  push 0x42b8c
    X86_AT(c, 0xe11cfu);
    { uint32_t v = 0x42B8Cu; push32(c, v); }
    // 0e11d4  call 0xcbf54
    X86_AT(c, 0xe11d4u);
    push32(c, 0xe11d9u); x86_call_known(c, 0xcbf54u, f_000cbf54); X86_RET(c, 0xe11d9u);
    X86_TICK(c, 9);
    // 0e11d9  push 1
    X86_AT(c, 0xe11d9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e11db  call 0xc5e44
    X86_AT(c, 0xe11dbu);
    push32(c, 0xe11e0u); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xe11e0u);
    X86_TICK(c, 9);
    // 0e11e0  push 7
    X86_AT(c, 0xe11e0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e11e2  call 0xcacd4
    X86_AT(c, 0xe11e2u);
    push32(c, 0xe11e7u); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xe11e7u);
    X86_TICK(c, 9);
    // 0e11e7  push 7
    X86_AT(c, 0xe11e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e11e9  call 0xca0a0
    X86_AT(c, 0xe11e9u);
    push32(c, 0xe11eeu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe11eeu);
    X86_TICK(c, 9);
    // 0e11ee  push 0x32
    X86_AT(c, 0xe11eeu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0e11f0  call 0xd6660
    X86_AT(c, 0xe11f0u);
    push32(c, 0xe11f5u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe11f5u);
    X86_TICK(c, 14);
    // 0e11f5  add esp, 0x14
    X86_AT(c, 0xe11f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e11f8  cmp dword ptr [0xb0332], 0
    X86_AT(c, 0xe11f8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0332u))), 0x0u, 0, 4);
    // 0e11ff  je 0xe1206
    X86_AT(c, 0xe11ffu);
    if (x86_cc(c, 4)) { goto L_e1206; }
    X86_TICK(c, 7);
    // 0e1201  call 0xce270
    X86_AT(c, 0xe1201u);
    push32(c, 0xe1206u); x86_call_known(c, 0xce270u, f_000ce270); X86_RET(c, 0xe1206u);
L_e1206:
    X86_TICK(c, 28);
    // 0e1206  pop edi
    X86_AT(c, 0xe1206u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1207  pop esi
    X86_AT(c, 0xe1207u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e1208  pop ebx
    X86_AT(c, 0xe1208u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e1209  leave 
    X86_AT(c, 0xe1209u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e120a  ret 
    X86_AT(c, 0xe120au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1140u, "ran off the end of a function");
}
void f_000e120c(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0e120c  push ebp
    X86_AT(c, 0xe120cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e120d  mov ebp, esp
    X86_AT(c, 0xe120du);
    c.r[5] = c.r[4];
    // 0e120f  push eax
    X86_AT(c, 0xe120fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1210  push ebx
    X86_AT(c, 0xe1210u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1211  push esi
    X86_AT(c, 0xe1211u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e1212  push edi
    X86_AT(c, 0xe1212u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1213  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe1213u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e1216  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe1216u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e1219  mov ebx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe1219u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e121c  sub eax, eax
    X86_AT(c, 0xe121cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e121e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe121eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e1221  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe1221u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e1224  cmp eax, edx
    X86_AT(c, 0xe1224u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0e1226  je 0xe1234
    X86_AT(c, 0xe1226u);
    if (x86_cc(c, 4)) { goto L_e1234; }
    X86_TICK(c, 7);
    // 0e1228  cmp edx, 1
    X86_AT(c, 0xe1228u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0e122b  je 0xe1256
    X86_AT(c, 0xe122bu);
    if (x86_cc(c, 4)) { goto L_e1256; }
    X86_TICK(c, 7);
    // 0e122d  cmp edx, 2
    X86_AT(c, 0xe122du);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0e1230  je 0xe1278
    X86_AT(c, 0xe1230u);
    if (x86_cc(c, 4)) { goto L_e1278; }
    X86_TICK(c, 7);
    // 0e1232  jmp 0xe12a1
    X86_AT(c, 0xe1232u);
    goto L_e12a1;
L_e1234:
    X86_TICK(c, 34);
    // 0e1234  push 0
    X86_AT(c, 0xe1234u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1236  mov eax, ebx
    X86_AT(c, 0xe1236u);
    c.r[0] = c.r[3];
    // 0e1238  shl eax, 5
    X86_AT(c, 0xe1238u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0e123b  add eax, 0x25
    X86_AT(c, 0xe123bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x25u, 0, 4); }
    // 0e123e  push eax
    X86_AT(c, 0xe123eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e123f  mov eax, esi
    X86_AT(c, 0xe123fu);
    c.r[0] = c.r[6];
    // 0e1241  shl eax, 5
    X86_AT(c, 0xe1241u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0e1244  add eax, 0x10
    X86_AT(c, 0xe1244u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e1247  push eax
    X86_AT(c, 0xe1247u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1248  mov eax, edi
    X86_AT(c, 0xe1248u);
    c.r[0] = c.r[7];
    // 0e124a  shl eax, 9
    X86_AT(c, 0xe124au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e124d  lea edx, [eax*1 + 0x4cbf8]
    X86_AT(c, 0xe124du);
    c.r[2] = (uint32_t)(c.r[0] + 0x4CBF8u);
    // 0e1254  jmp 0xe1298
    X86_AT(c, 0xe1254u);
    goto L_e1298;
L_e1256:
    X86_TICK(c, 34);
    // 0e1256  push 0
    X86_AT(c, 0xe1256u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1258  mov eax, ebx
    X86_AT(c, 0xe1258u);
    c.r[0] = c.r[3];
    // 0e125a  shl eax, 5
    X86_AT(c, 0xe125au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0e125d  add eax, 0x25
    X86_AT(c, 0xe125du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x25u, 0, 4); }
    // 0e1260  push eax
    X86_AT(c, 0xe1260u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1261  mov eax, esi
    X86_AT(c, 0xe1261u);
    c.r[0] = c.r[6];
    // 0e1263  shl eax, 5
    X86_AT(c, 0xe1263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0e1266  add eax, 0x10
    X86_AT(c, 0xe1266u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e1269  push eax
    X86_AT(c, 0xe1269u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e126a  mov eax, edi
    X86_AT(c, 0xe126au);
    c.r[0] = c.r[7];
    // 0e126c  shl eax, 9
    X86_AT(c, 0xe126cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e126f  lea edx, [eax*1 + 0x54bf8]
    X86_AT(c, 0xe126fu);
    c.r[2] = (uint32_t)(c.r[0] + 0x54BF8u);
    // 0e1276  jmp 0xe1298
    X86_AT(c, 0xe1276u);
    goto L_e1298;
L_e1278:
    X86_TICK(c, 27);
    // 0e1278  push 0
    X86_AT(c, 0xe1278u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e127a  mov eax, ebx
    X86_AT(c, 0xe127au);
    c.r[0] = c.r[3];
    // 0e127c  shl eax, 5
    X86_AT(c, 0xe127cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0e127f  add eax, 0x25
    X86_AT(c, 0xe127fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x25u, 0, 4); }
    // 0e1282  push eax
    X86_AT(c, 0xe1282u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1283  mov eax, esi
    X86_AT(c, 0xe1283u);
    c.r[0] = c.r[6];
    // 0e1285  shl eax, 5
    X86_AT(c, 0xe1285u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0e1288  add eax, 0x10
    X86_AT(c, 0xe1288u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e128b  push eax
    X86_AT(c, 0xe128bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e128c  mov eax, edi
    X86_AT(c, 0xe128cu);
    c.r[0] = c.r[7];
    // 0e128e  shl eax, 9
    X86_AT(c, 0xe128eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e1291  lea edx, [eax*1 + 0x5cbf8]
    X86_AT(c, 0xe1291u);
    c.r[2] = (uint32_t)(c.r[0] + 0x5CBF8u);
L_e1298:
    X86_TICK(c, 9);
    // 0e1298  push edx
    X86_AT(c, 0xe1298u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e1299  call 0xc9a4c
    X86_AT(c, 0xe1299u);
    push32(c, 0xe129eu); x86_call_known(c, 0xc9a4cu, f_000c9a4c); X86_RET(c, 0xe129eu);
    X86_TICK(c, 2);
    // 0e129e  add esp, 0x10
    X86_AT(c, 0xe129eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e12a1:
    X86_TICK(c, 28);
    // 0e12a1  pop edi
    X86_AT(c, 0xe12a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e12a2  pop esi
    X86_AT(c, 0xe12a2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e12a3  pop ebx
    X86_AT(c, 0xe12a3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e12a4  leave 
    X86_AT(c, 0xe12a4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e12a5  ret 
    X86_AT(c, 0xe12a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe120cu, "ran off the end of a function");
}
void f_000e12a8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e12a8  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xe12a8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e12ac  and ecx, ecx
    X86_AT(c, 0xe12acu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0e12ae  jge 0xe12b7
    X86_AT(c, 0xe12aeu);
    if (x86_cc(c, 13)) { goto L_e12b7; }
    X86_TICK(c, 9);
    // 0e12b0  mov eax, 0xffffffff
    X86_AT(c, 0xe12b0u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e12b5  jmp 0xe12c4
    X86_AT(c, 0xe12b5u);
    goto L_e12c4;
L_e12b7:
    X86_TICK(c, 7);
    // 0e12b7  and ecx, ecx
    X86_AT(c, 0xe12b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0e12b9  jle 0xe12c2
    X86_AT(c, 0xe12b9u);
    if (x86_cc(c, 14)) { goto L_e12c2; }
    X86_TICK(c, 9);
    // 0e12bb  mov eax, 1
    X86_AT(c, 0xe12bbu);
    c.r[0] = 0x1u;
    // 0e12c0  jmp 0xe12c4
    X86_AT(c, 0xe12c0u);
    goto L_e12c4;
L_e12c2:
    X86_TICK(c, 2);
    // 0e12c2  sub eax, eax
    X86_AT(c, 0xe12c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e12c4:
    X86_TICK(c, 10);
    // 0e12c4  ret 
    X86_AT(c, 0xe12c4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe12a8u, "ran off the end of a function");
}
void f_000e12c8(X86Cpu& c) {
    X86_TICK(c, 2);
    // 0e12c8  push ebx
    X86_AT(c, 0xe12c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
L_e12c9:
    X86_TICK(c, 9);
    // 0e12c9  push 7
    X86_AT(c, 0xe12c9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e12cb  call 0xc81e4
    X86_AT(c, 0xe12cbu);
    push32(c, 0xe12d0u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xe12d0u);
    X86_TICK(c, 10);
    // 0e12d0  xchg ebx, eax
    X86_AT(c, 0xe12d0u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e12d1  call 0xe2274
    X86_AT(c, 0xe12d1u);
    push32(c, 0xe12d6u); x86_call_known(c, 0xe2274u, f_000e2274); X86_RET(c, 0xe12d6u);
    X86_TICK(c, 9);
    // 0e12d6  add esp, 4
    X86_AT(c, 0xe12d6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e12d9  and bl, bl
    X86_AT(c, 0xe12d9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e12db  je 0xe12e1
    X86_AT(c, 0xe12dbu);
    if (x86_cc(c, 4)) { goto L_e12e1; }
    X86_TICK(c, 9);
    // 0e12dd  push 1
    X86_AT(c, 0xe12ddu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e12df  jmp 0xe12e3
    X86_AT(c, 0xe12dfu);
    goto L_e12e3;
L_e12e1:
    X86_TICK(c, 2);
    // 0e12e1  push 3
    X86_AT(c, 0xe12e1u);
    { uint32_t v = 0x3u; push32(c, v); }
L_e12e3:
    X86_TICK(c, 7);
    // 0e12e3  call 0xd6660
    X86_AT(c, 0xe12e3u);
    push32(c, 0xe12e8u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe12e8u);
    X86_TICK(c, 9);
    // 0e12e8  add esp, 4
    X86_AT(c, 0xe12e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e12eb  and bl, bl
    X86_AT(c, 0xe12ebu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e12ed  je 0xe12c9
    X86_AT(c, 0xe12edu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe12c9u); goto L_e12c9; }
    X86_TICK(c, 16);
    // 0e12ef  mov eax, ebx
    X86_AT(c, 0xe12efu);
    c.r[0] = c.r[3];
    // 0e12f1  pop ebx
    X86_AT(c, 0xe12f1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e12f2  ret 
    X86_AT(c, 0xe12f2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe12c8u, "ran off the end of a function");
}
void f_000e12f4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e12f4  push 0xf9
    X86_AT(c, 0xe12f4u);
    { uint32_t v = 0xF9u; push32(c, v); }
    // 0e12f9  push 1
    X86_AT(c, 0xe12f9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e12fb  call 0xc5df0
    X86_AT(c, 0xe12fbu);
    push32(c, 0xe1300u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe1300u);
    X86_TICK(c, 13);
    // 0e1300  mov edx, dword ptr [0xb0316]
    X86_AT(c, 0xe1300u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB0316u)));
    // 0e1306  add edx, 0xa0
    X86_AT(c, 0xe1306u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xA0u, 0, 4); }
    // 0e130c  cmp edx, eax
    X86_AT(c, 0xe130cu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e130e  jg 0xe131d
    X86_AT(c, 0xe130eu);
    if (x86_cc(c, 15)) { goto L_e131d; }
    X86_TICK(c, 12);
    // 0e1310  cmp byte ptr [0xb02fc], 1
    X86_AT(c, 0xe1310u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB02FCu))), 0x1u, 0, 1);
    // 0e1317  je 0xe131d
    X86_AT(c, 0xe1317u);
    if (x86_cc(c, 4)) { goto L_e131d; }
    X86_TICK(c, 9);
    // 0e1319  sub eax, eax
    X86_AT(c, 0xe1319u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e131b  jmp 0xe131f
    X86_AT(c, 0xe131bu);
    goto L_e131f;
L_e131d:
    X86_TICK(c, 2);
    // 0e131d  mov al, 1
    X86_AT(c, 0xe131du);
    s8(c, 0, 0x1u);
L_e131f:
    X86_TICK(c, 15);
    // 0e131f  movzx eax, al
    X86_AT(c, 0xe131fu);
    c.r[0] = g8(c, 0);
    // 0e1322  add esp, 8
    X86_AT(c, 0xe1322u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1325  ret 
    X86_AT(c, 0xe1325u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe12f4u, "ran off the end of a function");
}
void f_000e1328(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e1328  push ebp
    X86_AT(c, 0xe1328u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1329  mov ebp, esp
    X86_AT(c, 0xe1329u);
    c.r[5] = c.r[4];
    // 0e132b  push eax
    X86_AT(c, 0xe132bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e132c  mov eax, dword ptr [0xc2db8]
    X86_AT(c, 0xe132cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DB8u)));
    // 0e1331  sub eax, dword ptr [0xc2dc0]
    X86_AT(c, 0xe1331u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DC0u))), 0, 4); }
    // 0e1337  and eax, eax
    X86_AT(c, 0xe1337u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1339  jge 0xe1348
    X86_AT(c, 0xe1339u);
    if (x86_cc(c, 13)) { goto L_e1348; }
    X86_TICK(c, 12);
    // 0e133b  mov eax, dword ptr [0xc2db8]
    X86_AT(c, 0xe133bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DB8u)));
    // 0e1340  sub eax, dword ptr [0xc2dc0]
    X86_AT(c, 0xe1340u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DC0u))), 0, 4); }
    // 0e1346  neg eax
    X86_AT(c, 0xe1346u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_e1348:
    X86_TICK(c, 19);
    // 0e1348  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe1348u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e134b  mov eax, dword ptr [0xc2dbc]
    X86_AT(c, 0xe134bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DBCu)));
    // 0e1350  sub eax, dword ptr [0xc2dc4]
    X86_AT(c, 0xe1350u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DC4u))), 0, 4); }
    // 0e1356  and eax, eax
    X86_AT(c, 0xe1356u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1358  jge 0xe1367
    X86_AT(c, 0xe1358u);
    if (x86_cc(c, 13)) { goto L_e1367; }
    X86_TICK(c, 12);
    // 0e135a  mov eax, dword ptr [0xc2dbc]
    X86_AT(c, 0xe135au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DBCu)));
    // 0e135f  sub eax, dword ptr [0xc2dc4]
    X86_AT(c, 0xe135fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DC4u))), 0, 4); }
    // 0e1365  neg eax
    X86_AT(c, 0xe1365u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_e1367:
    X86_TICK(c, 31);
    // 0e1367  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe1367u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0e136a  cmp eax, 7
    X86_AT(c, 0xe136au);
    (void)x86_sub(c, c.r[0], 0x7u, 0, 4);
    // 0e136d  setl al
    X86_AT(c, 0xe136du);
    s8(c, 0, x86_cc(c, 12) ? 1u : 0u);
    // 0e1370  movzx eax, al
    X86_AT(c, 0xe1370u);
    c.r[0] = g8(c, 0);
    // 0e1373  leave 
    X86_AT(c, 0xe1373u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1374  ret 
    X86_AT(c, 0xe1374u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1328u, "ran off the end of a function");
}
void f_000e1378(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e1378  push ebp
    X86_AT(c, 0xe1378u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1379  mov ebp, esp
    X86_AT(c, 0xe1379u);
    c.r[5] = c.r[4];
    // 0e137b  push eax
    X86_AT(c, 0xe137bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e137c  push ebx
    X86_AT(c, 0xe137cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e137d  push esi
    X86_AT(c, 0xe137du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e137e  push edi
    X86_AT(c, 0xe137eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e137f  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xe137fu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e1382  movzx ebx, bl
    X86_AT(c, 0xe1382u);
    c.r[3] = g8(c, 3);
    // 0e1385  push ebx
    X86_AT(c, 0xe1385u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1386  call 0xe222c
    X86_AT(c, 0xe1386u);
    push32(c, 0xe138bu); x86_call_known(c, 0xe222cu, f_000e222c); X86_RET(c, 0xe138bu);
    X86_TICK(c, 17);
    // 0e138b  add eax, dword ptr [0xc2db8]
    X86_AT(c, 0xe138bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DB8u))), 0, 4); }
    // 0e1391  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe1391u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e1394  push ebx
    X86_AT(c, 0xe1394u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1395  call 0xe2250
    X86_AT(c, 0xe1395u);
    push32(c, 0xe139au); x86_call_known(c, 0xe2250u, f_000e2250); X86_RET(c, 0xe139au);
    X86_TICK(c, 23);
    // 0e139a  xchg esi, eax
    X86_AT(c, 0xe139au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e139b  add esi, dword ptr [0xc2dbc]
    X86_AT(c, 0xe139bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DBCu))), 0, 4); }
    // 0e13a1  add esp, 8
    X86_AT(c, 0xe13a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e13a4  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xe13a4u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0e13a8  jl 0xe13cc
    X86_AT(c, 0xe13a8u);
    if (x86_cc(c, 12)) { goto L_e13cc; }
    X86_TICK(c, 12);
    // 0e13aa  cmp dword ptr [ebp - 4], 0x13
    X86_AT(c, 0xe13aau);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x13u, 0, 4);
    // 0e13ae  jge 0xe13cc
    X86_AT(c, 0xe13aeu);
    if (x86_cc(c, 13)) { goto L_e13cc; }
    X86_TICK(c, 7);
    // 0e13b0  and esi, esi
    X86_AT(c, 0xe13b0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e13b2  jl 0xe13cc
    X86_AT(c, 0xe13b2u);
    if (x86_cc(c, 12)) { goto L_e13cc; }
    X86_TICK(c, 7);
    // 0e13b4  cmp esi, 9
    X86_AT(c, 0xe13b4u);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0e13b7  jge 0xe13cc
    X86_AT(c, 0xe13b7u);
    if (x86_cc(c, 13)) { goto L_e13cc; }
    X86_TICK(c, 15);
    // 0e13b9  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe13b9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e13bc  cmp eax, dword ptr [0xc2dc0]
    X86_AT(c, 0xe13bcu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xC2DC0u))), 0, 4);
    // 0e13c2  jne 0xe13d3
    X86_AT(c, 0xe13c2u);
    if (x86_cc(c, 5)) { goto L_e13d3; }
    X86_TICK(c, 11);
    // 0e13c4  cmp esi, dword ptr [0xc2dc4]
    X86_AT(c, 0xe13c4u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xC2DC4u))), 0, 4);
    // 0e13ca  jne 0xe13d3
    X86_AT(c, 0xe13cau);
    if (x86_cc(c, 5)) { goto L_e13d3; }
L_e13cc:
    X86_TICK(c, 9);
    // 0e13cc  mov edi, 0x9a
    X86_AT(c, 0xe13ccu);
    c.r[7] = 0x9Au;
    // 0e13d1  jmp 0xe13e3
    X86_AT(c, 0xe13d1u);
    goto L_e13e3;
L_e13d3:
    X86_TICK(c, 14);
    // 0e13d3  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe13d3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e13d6  lea eax, [eax + eax*8]
    X86_AT(c, 0xe13d6u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e13d9  lea edx, [esi + eax*1]
    X86_AT(c, 0xe13d9u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0e13dc  movzx edi, byte ptr [edx + 0xc2de0]
    X86_AT(c, 0xe13dcu);
    c.r[7] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xC2DE0u)));
L_e13e3:
    X86_TICK(c, 7);
    // 0e13e3  and edi, edi
    X86_AT(c, 0xe13e3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e13e5  jne 0xe147b
    X86_AT(c, 0xe13e5u);
    if (x86_cc(c, 5)) { goto L_e147b; }
    X86_TICK(c, 15);
    // 0e13eb  movzx ebx, bl
    X86_AT(c, 0xe13ebu);
    c.r[3] = g8(c, 3);
    // 0e13ee  push dword ptr [ebx*4 + 0xaa274]
    X86_AT(c, 0xe13eeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xAA274u))); push32(c, v); }
    // 0e13f5  call 0xcc7bc
    X86_AT(c, 0xe13f5u);
    push32(c, 0xe13fau); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe13fau);
    X86_TICK(c, 21);
    // 0e13fa  push 0
    X86_AT(c, 0xe13fau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e13fc  push dword ptr [0xc2dbc]
    X86_AT(c, 0xe13fcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DBCu))); push32(c, v); }
    // 0e1402  push dword ptr [0xc2db8]
    X86_AT(c, 0xe1402u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DB8u))); push32(c, v); }
    // 0e1408  push 0
    X86_AT(c, 0xe1408u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e140a  call 0xe120c
    X86_AT(c, 0xe140au);
    push32(c, 0xe140fu); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe140fu);
    X86_TICK(c, 23);
    // 0e140f  mov eax, dword ptr [0xc2db8]
    X86_AT(c, 0xe140fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DB8u)));
    // 0e1414  lea eax, [eax + eax*8]
    X86_AT(c, 0xe1414u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e1417  add eax, dword ptr [0xc2dbc]
    X86_AT(c, 0xe1417u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DBCu))), 0, 4); }
    // 0e141d  mov byte ptr [eax + 0xc2de0], 0
    X86_AT(c, 0xe141du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u)), 0x0u);
    // 0e1424  push ebx
    X86_AT(c, 0xe1424u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1425  call 0xe222c
    X86_AT(c, 0xe1425u);
    push32(c, 0xe142au); x86_call_known(c, 0xe222cu, f_000e222c); X86_RET(c, 0xe142au);
    X86_TICK(c, 16);
    // 0e142a  add dword ptr [0xc2db8], eax
    X86_AT(c, 0xe142au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2DB8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e1430  push ebx
    X86_AT(c, 0xe1430u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1431  call 0xe2250
    X86_AT(c, 0xe1431u);
    push32(c, 0xe1436u); x86_call_known(c, 0xe2250u, f_000e2250); X86_RET(c, 0xe1436u);
    X86_TICK(c, 52);
    // 0e1436  add dword ptr [0xc2dbc], eax
    X86_AT(c, 0xe1436u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2DBCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e143c  mov eax, dword ptr [0xc2db8]
    X86_AT(c, 0xe143cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DB8u)));
    // 0e1441  lea eax, [eax + eax*8]
    X86_AT(c, 0xe1441u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e1444  add eax, dword ptr [0xc2dbc]
    X86_AT(c, 0xe1444u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DBCu))), 0, 4); }
    // 0e144a  mov dl, byte ptr [0x42b80]
    X86_AT(c, 0xe144au);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0x42B80u))));
    // 0e1450  mov byte ptr [eax + 0xc2de0], dl
    X86_AT(c, 0xe1450u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u)), g8(c, 2));
    // 0e1456  push 1
    X86_AT(c, 0xe1456u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1458  push dword ptr [0xc2dbc]
    X86_AT(c, 0xe1458u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DBCu))); push32(c, v); }
    // 0e145e  push dword ptr [0xc2db8]
    X86_AT(c, 0xe145eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DB8u))); push32(c, v); }
    // 0e1464  mov eax, dword ptr [0x42b80]
    X86_AT(c, 0xe1464u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x42B80u)));
    // 0e1469  lea eax, [eax*2 - 0x100]
    X86_AT(c, 0xe1469u);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0xFFFFFF00u);
    // 0e1470  push eax
    X86_AT(c, 0xe1470u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1471  call 0xe120c
    X86_AT(c, 0xe1471u);
    push32(c, 0xe1476u); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe1476u);
    X86_TICK(c, 9);
    // 0e1476  add esp, 0x2c
    X86_AT(c, 0xe1476u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0e1479  jmp 0xe14eb
    X86_AT(c, 0xe1479u);
    goto L_e14eb;
L_e147b:
    X86_TICK(c, 7);
    // 0e147b  cmp edi, 0xab
    X86_AT(c, 0xe147bu);
    (void)x86_sub(c, c.r[7], 0xABu, 0, 4);
    // 0e1481  jne 0xe1499
    X86_AT(c, 0xe1481u);
    if (x86_cc(c, 5)) { goto L_e1499; }
    X86_TICK(c, 9);
    // 0e1483  push 0xdffc
    X86_AT(c, 0xe1483u);
    { uint32_t v = 0xDFFCu; push32(c, v); }
    // 0e1488  call 0xcc7bc
    X86_AT(c, 0xe1488u);
    push32(c, 0xe148du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe148du);
    X86_TICK(c, 9);
    // 0e148d  push 0
    X86_AT(c, 0xe148du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e148f  call 0xc5ca4
    X86_AT(c, 0xe148fu);
    push32(c, 0xe1494u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe1494u);
    X86_TICK(c, 9);
    // 0e1494  add esp, 8
    X86_AT(c, 0xe1494u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1497  jmp 0xe14eb
    X86_AT(c, 0xe1497u);
    goto L_e14eb;
L_e1499:
    X86_TICK(c, 9);
    // 0e1499  push 0
    X86_AT(c, 0xe1499u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e149b  call 0xc5ca4
    X86_AT(c, 0xe149bu);
    push32(c, 0xe14a0u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe14a0u);
    X86_TICK(c, 11);
    // 0e14a0  push 0xf
    X86_AT(c, 0xe14a0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e14a2  push 0xe01c
    X86_AT(c, 0xe14a2u);
    { uint32_t v = 0xE01Cu; push32(c, v); }
    // 0e14a7  call 0xcc830
    X86_AT(c, 0xe14a7u);
    push32(c, 0xe14acu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xe14acu);
    X86_TICK(c, 60);
    // 0e14ac  mov eax, dword ptr [0xb02fe]
    X86_AT(c, 0xe14acu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB02FEu)));
    // 0e14b1  cdq 
    X86_AT(c, 0xe14b1u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e14b2  mov ecx, 0xa
    X86_AT(c, 0xe14b2u);
    c.r[1] = 0xAu;
    // 0e14b7  idiv ecx
    X86_AT(c, 0xe14b7u);
    x86_idiv(c, c.r[1], 4, 0xe14b7u);
    // 0e14b9  xchg edi, eax
    X86_AT(c, 0xe14b9u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e14ba  add esp, 0xc
    X86_AT(c, 0xe14bau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e14bd  and edi, edi
    X86_AT(c, 0xe14bdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e14bf  jne 0xe14c2
    X86_AT(c, 0xe14bfu);
    if (x86_cc(c, 5)) { goto L_e14c2; }
    X86_TICK(c, 2);
    // 0e14c1  inc edi
    X86_AT(c, 0xe14c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_e14c2:
    X86_TICK(c, 13);
    // 0e14c2  push 3
    X86_AT(c, 0xe14c2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e14c4  push edi
    X86_AT(c, 0xe14c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e14c5  push 7
    X86_AT(c, 0xe14c5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e14c7  call 0xc8cb8
    X86_AT(c, 0xe14c7u);
    push32(c, 0xe14ccu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xe14ccu);
    X86_TICK(c, 9);
    // 0e14cc  push 0xe03c
    X86_AT(c, 0xe14ccu);
    { uint32_t v = 0xE03Cu; push32(c, v); }
    // 0e14d1  call 0xcc7bc
    X86_AT(c, 0xe14d1u);
    push32(c, 0xe14d6u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe14d6u);
    X86_TICK(c, 9);
    // 0e14d6  push 8
    X86_AT(c, 0xe14d6u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e14d8  call 0xc5ca4
    X86_AT(c, 0xe14d8u);
    push32(c, 0xe14ddu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe14ddu);
    X86_TICK(c, 14);
    // 0e14dd  sub dword ptr [0xb02fe], edi
    X86_AT(c, 0xe14ddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0e14e3  call 0xcc628
    X86_AT(c, 0xe14e3u);
    push32(c, 0xe14e8u); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xe14e8u);
    X86_TICK(c, 2);
    // 0e14e8  add esp, 0x14
    X86_AT(c, 0xe14e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e14eb:
    X86_TICK(c, 7);
    // 0e14eb  call 0xe1cc0
    X86_AT(c, 0xe14ebu);
    push32(c, 0xe14f0u); x86_call_known(c, 0xe1cc0u, f_000e1cc0); X86_RET(c, 0xe14f0u);
    X86_TICK(c, 7);
    // 0e14f0  and eax, eax
    X86_AT(c, 0xe14f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e14f2  je 0xe150c
    X86_AT(c, 0xe14f2u);
    if (x86_cc(c, 4)) { goto L_e150c; }
    X86_TICK(c, 12);
    // 0e14f4  cmp dword ptr [0xc2dd8], 0
    X86_AT(c, 0xe14f4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DD8u))), 0x0u, 0, 4);
    // 0e14fb  jne 0xe150c
    X86_AT(c, 0xe14fbu);
    if (x86_cc(c, 5)) { goto L_e150c; }
    X86_TICK(c, 6);
    // 0e14fd  mov eax, 1
    X86_AT(c, 0xe14fdu);
    c.r[0] = 0x1u;
    // 0e1502  mov dword ptr [0xc2dd8], eax
    X86_AT(c, 0xe1502u);
    wr32((c.sbase[3] + (uint32_t)(0xC2DD8u)), c.r[0]);
    // 0e1507  mov dword ptr [0xc2e98], eax
    X86_AT(c, 0xe1507u);
    wr32((c.sbase[3] + (uint32_t)(0xC2E98u)), c.r[0]);
L_e150c:
    X86_TICK(c, 28);
    // 0e150c  pop edi
    X86_AT(c, 0xe150cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e150d  pop esi
    X86_AT(c, 0xe150du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e150e  pop ebx
    X86_AT(c, 0xe150eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e150f  leave 
    X86_AT(c, 0xe150fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1510  ret 
    X86_AT(c, 0xe1510u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1378u, "ran off the end of a function");
}
void f_000e1514(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0e1514  push ebp
    X86_AT(c, 0xe1514u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1515  mov ebp, esp
    X86_AT(c, 0xe1515u);
    c.r[5] = c.r[4];
    // 0e1517  sub esp, 0xc
    X86_AT(c, 0xe1517u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0e151a  push ebx
    X86_AT(c, 0xe151au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e151b  push esi
    X86_AT(c, 0xe151bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e151c  push edi
    X86_AT(c, 0xe151cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e151d  sub eax, eax
    X86_AT(c, 0xe151du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e151f  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe151fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e1522  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe1522u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e1525  mov dword ptr [ebp - 0xc], 1
    X86_AT(c, 0xe1525u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 0e152c  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe152cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e152f  call 0xc71dc
    X86_AT(c, 0xe152fu);
    push32(c, 0xe1534u); x86_call_known(c, 0xc71dcu, f_000c71dc); X86_RET(c, 0xe1534u);
    X86_TICK(c, 12);
    // 0e1534  push dword ptr [ebp + 8]
    X86_AT(c, 0xe1534u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e1537  call 0xe222c
    X86_AT(c, 0xe1537u);
    push32(c, 0xe153cu); x86_call_known(c, 0xe222cu, f_000e222c); X86_RET(c, 0xe153cu);
    X86_TICK(c, 14);
    // 0e153c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe153cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e153f  push dword ptr [ebp + 8]
    X86_AT(c, 0xe153fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e1542  call 0xe2250
    X86_AT(c, 0xe1542u);
    push32(c, 0xe1547u); x86_call_known(c, 0xe2250u, f_000e2250); X86_RET(c, 0xe1547u);
    X86_TICK(c, 4);
    // 0e1547  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe1547u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e154a  add esp, 0xc
    X86_AT(c, 0xe154au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e154d:
    X86_TICK(c, 87);
    // 0e154d  mov eax, 0xc2db8
    X86_AT(c, 0xe154du);
    c.r[0] = 0xC2DB8u;
    // 0e1552  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1552u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1555  imul edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe1555u);
    c.r[2] = x86_imul2(c, c.r[2], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 4);
    // 0e1559  mov esi, edx
    X86_AT(c, 0xe1559u);
    c.r[6] = c.r[2];
    // 0e155b  add esi, dword ptr [eax]
    X86_AT(c, 0xe155bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0, 4); }
    // 0e155d  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe155du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1560  imul edx, dword ptr [ebp - 8]
    X86_AT(c, 0xe1560u);
    c.r[2] = x86_imul2(c, c.r[2], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 4);
    // 0e1564  mov ebx, edx
    X86_AT(c, 0xe1564u);
    c.r[3] = c.r[2];
    // 0e1566  add ebx, dword ptr [eax + 4]
    X86_AT(c, 0xe1566u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 0, 4); }
    // 0e1569  lea edx, [esi + esi*8]
    X86_AT(c, 0xe1569u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[6] * 8);
    // 0e156c  add edx, ebx
    X86_AT(c, 0xe156cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[3], 0, 4); }
    // 0e156e  movzx edi, byte ptr [eax + edx*1 + 0x28]
    X86_AT(c, 0xe156eu);
    c.r[7] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x28u)));
    // 0e1573  and edi, edi
    X86_AT(c, 0xe1573u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e1575  jne 0xe1586
    X86_AT(c, 0xe1575u);
    if (x86_cc(c, 5)) { goto L_e1586; }
    X86_TICK(c, 11);
    // 0e1577  cmp esi, dword ptr [eax + 8]
    X86_AT(c, 0xe1577u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))), 0, 4);
    // 0e157a  jne 0xe1586
    X86_AT(c, 0xe157au);
    if (x86_cc(c, 5)) { goto L_e1586; }
    X86_TICK(c, 11);
    // 0e157c  cmp ebx, dword ptr [eax + 0xc]
    X86_AT(c, 0xe157cu);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))), 0, 4);
    // 0e157f  jne 0xe1586
    X86_AT(c, 0xe157fu);
    if (x86_cc(c, 5)) { goto L_e1586; }
    X86_TICK(c, 2);
    // 0e1581  mov edi, 0x9a
    X86_AT(c, 0xe1581u);
    c.r[7] = 0x9Au;
L_e1586:
    X86_TICK(c, 21);
    // 0e1586  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1586u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e1589  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1589u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e158c  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe158cu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0e158f  jg 0xe15ab
    X86_AT(c, 0xe158fu);
    if (x86_cc(c, 15)) { goto L_e15ab; }
    X86_TICK(c, 7);
    // 0e1591  cmp edi, 0x9a
    X86_AT(c, 0xe1591u);
    (void)x86_sub(c, c.r[7], 0x9Au, 0, 4);
    // 0e1597  je 0xe15ab
    X86_AT(c, 0xe1597u);
    if (x86_cc(c, 4)) { goto L_e15ab; }
    X86_TICK(c, 7);
    // 0e1599  and esi, esi
    X86_AT(c, 0xe1599u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e159b  jle 0xe15ab
    X86_AT(c, 0xe159bu);
    if (x86_cc(c, 14)) { goto L_e15ab; }
    X86_TICK(c, 7);
    // 0e159d  and ebx, ebx
    X86_AT(c, 0xe159du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e159f  jle 0xe15ab
    X86_AT(c, 0xe159fu);
    if (x86_cc(c, 14)) { goto L_e15ab; }
    X86_TICK(c, 7);
    // 0e15a1  cmp esi, 0x13
    X86_AT(c, 0xe15a1u);
    (void)x86_sub(c, c.r[6], 0x13u, 0, 4);
    // 0e15a4  jge 0xe15ab
    X86_AT(c, 0xe15a4u);
    if (x86_cc(c, 13)) { goto L_e15ab; }
    X86_TICK(c, 7);
    // 0e15a6  cmp ebx, 9
    X86_AT(c, 0xe15a6u);
    (void)x86_sub(c, c.r[3], 0x9u, 0, 4);
    // 0e15a9  jl 0xe154d
    X86_AT(c, 0xe15a9u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xe154du); goto L_e154d; }
L_e15ab:
    X86_TICK(c, 7);
    // 0e15ab  cmp edi, 0x9a
    X86_AT(c, 0xe15abu);
    (void)x86_sub(c, c.r[7], 0x9Au, 0, 4);
    // 0e15b1  je 0xe15ba
    X86_AT(c, 0xe15b1u);
    if (x86_cc(c, 4)) { goto L_e15ba; }
    X86_TICK(c, 9);
    // 0e15b3  push 0xe064
    X86_AT(c, 0xe15b3u);
    { uint32_t v = 0xE064u; push32(c, v); }
    // 0e15b8  jmp 0xe1607
    X86_AT(c, 0xe15b8u);
    goto L_e1607;
L_e15ba:
    X86_TICK(c, 11);
    // 0e15ba  push 0x64
    X86_AT(c, 0xe15bau);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0e15bc  push 1
    X86_AT(c, 0xe15bcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e15be  call 0xc5df0
    X86_AT(c, 0xe15beu);
    push32(c, 0xe15c3u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe15c3u);
    X86_TICK(c, 13);
    // 0e15c3  add esp, 8
    X86_AT(c, 0xe15c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e15c6  cmp eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xe15c6u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 4);
    // 0e15c9  jg 0xe1602
    X86_AT(c, 0xe15c9u);
    if (x86_cc(c, 15)) { goto L_e1602; }
    X86_TICK(c, 22);
    // 0e15cb  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe15cbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e15ce  sub dword ptr [0xc2dc8], eax
    X86_AT(c, 0xe15ceu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2DC8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0e15d4  push 0xf
    X86_AT(c, 0xe15d4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e15d6  push 0xe07c
    X86_AT(c, 0xe15d6u);
    { uint32_t v = 0xE07Cu; push32(c, v); }
    // 0e15db  call 0xcc830
    X86_AT(c, 0xe15dbu);
    push32(c, 0xe15e0u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xe15e0u);
    X86_TICK(c, 16);
    // 0e15e0  push 3
    X86_AT(c, 0xe15e0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e15e2  push dword ptr [ebp + 0x14]
    X86_AT(c, 0xe15e2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))); push32(c, v); }
    // 0e15e5  push 7
    X86_AT(c, 0xe15e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e15e7  call 0xc8cb8
    X86_AT(c, 0xe15e7u);
    push32(c, 0xe15ecu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xe15ecu);
    X86_TICK(c, 9);
    // 0e15ec  push 0xe0ac
    X86_AT(c, 0xe15ecu);
    { uint32_t v = 0xE0ACu; push32(c, v); }
    // 0e15f1  call 0xcc7bc
    X86_AT(c, 0xe15f1u);
    push32(c, 0xe15f6u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe15f6u);
    X86_TICK(c, 9);
    // 0e15f6  push 8
    X86_AT(c, 0xe15f6u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e15f8  call 0xc5ca4
    X86_AT(c, 0xe15f8u);
    push32(c, 0xe15fdu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe15fdu);
    X86_TICK(c, 9);
    // 0e15fd  add esp, 0x1c
    X86_AT(c, 0xe15fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0e1600  jmp 0xe160f
    X86_AT(c, 0xe1600u);
    goto L_e160f;
L_e1602:
    X86_TICK(c, 2);
    // 0e1602  push 0xe0d4
    X86_AT(c, 0xe1602u);
    { uint32_t v = 0xE0D4u; push32(c, v); }
L_e1607:
    X86_TICK(c, 7);
    // 0e1607  call 0xcc7bc
    X86_AT(c, 0xe1607u);
    push32(c, 0xe160cu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe160cu);
    X86_TICK(c, 2);
    // 0e160c  add esp, 4
    X86_AT(c, 0xe160cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e160f:
    X86_TICK(c, 28);
    // 0e160f  pop edi
    X86_AT(c, 0xe160fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1610  pop esi
    X86_AT(c, 0xe1610u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e1611  pop ebx
    X86_AT(c, 0xe1611u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e1612  leave 
    X86_AT(c, 0xe1612u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1613  ret 
    X86_AT(c, 0xe1613u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1514u, "ran off the end of a function");
}
void f_000e1614(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0e1614  push ebp
    X86_AT(c, 0xe1614u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1615  mov ebp, esp
    X86_AT(c, 0xe1615u);
    c.r[5] = c.r[4];
    // 0e1617  push ebx
    X86_AT(c, 0xe1617u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1618  push esi
    X86_AT(c, 0xe1618u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e1619  push edi
    X86_AT(c, 0xe1619u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e161a  cmp dword ptr [ebp + 0xc], 7
    X86_AT(c, 0xe161au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x7u, 0, 4);
    // 0e161e  jne 0xe1649
    X86_AT(c, 0xe161eu);
    if (x86_cc(c, 5)) { goto L_e1649; }
    X86_TICK(c, 33);
    // 0e1620  mov eax, dword ptr [0xb0326]
    X86_AT(c, 0xe1620u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0326u)));
    // 0e1625  mov ebx, dword ptr [eax*4 + 0xab014]
    X86_AT(c, 0xe1625u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB014u)));
    // 0e162c  mov esi, dword ptr [0xb0306]
    X86_AT(c, 0xe162cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB0306u)));
    // 0e1632  add esi, 0x32
    X86_AT(c, 0xe1632u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x32u, 0, 4); }
    // 0e1635  lea eax, [eax + eax*2]
    X86_AT(c, 0xe1635u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e1638  add eax, dword ptr [0xb0302]
    X86_AT(c, 0xe1638u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0302u))), 0, 4); }
    // 0e163e  push eax
    X86_AT(c, 0xe163eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e163f  push 2
    X86_AT(c, 0xe163fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1641  call 0xc5df0
    X86_AT(c, 0xe1641u);
    push32(c, 0xe1646u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe1646u);
    X86_TICK(c, 10);
    // 0e1646  xchg edi, eax
    X86_AT(c, 0xe1646u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e1647  jmp 0xe1669
    X86_AT(c, 0xe1647u);
    goto L_e1669;
L_e1649:
    X86_TICK(c, 23);
    // 0e1649  mov ebx, 3
    X86_AT(c, 0xe1649u);
    c.r[3] = 0x3u;
    // 0e164e  mov esi, 0x50
    X86_AT(c, 0xe164eu);
    c.r[6] = 0x50u;
    // 0e1653  mov eax, dword ptr [0xb0332]
    X86_AT(c, 0xe1653u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0e1658  lea eax, [eax + eax*4]
    X86_AT(c, 0xe1658u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e165b  add eax, eax
    X86_AT(c, 0xe165bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e165d  push eax
    X86_AT(c, 0xe165du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e165e  push 1
    X86_AT(c, 0xe165eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1660  call 0xc5df0
    X86_AT(c, 0xe1660u);
    push32(c, 0xe1665u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe1665u);
    X86_TICK(c, 5);
    // 0e1665  xchg edi, eax
    X86_AT(c, 0xe1665u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e1666  add edi, 0x1e
    X86_AT(c, 0xe1666u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x1Eu, 0, 4); }
L_e1669:
    X86_TICK(c, 25);
    // 0e1669  add esp, 8
    X86_AT(c, 0xe1669u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e166c  push esi
    X86_AT(c, 0xe166cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e166d  push edi
    X86_AT(c, 0xe166du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e166e  push ebx
    X86_AT(c, 0xe166eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e166f  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe166fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e1672  push dword ptr [ebp + 8]
    X86_AT(c, 0xe1672u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e1675  call 0xe1514
    X86_AT(c, 0xe1675u);
    push32(c, 0xe167au); x86_call_known(c, 0xe1514u, f_000e1514); X86_RET(c, 0xe167au);
    X86_TICK(c, 30);
    // 0e167a  add esp, 0x14
    X86_AT(c, 0xe167au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e167d  pop edi
    X86_AT(c, 0xe167du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e167e  pop esi
    X86_AT(c, 0xe167eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e167f  pop ebx
    X86_AT(c, 0xe167fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e1680  leave 
    X86_AT(c, 0xe1680u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1681  ret 
    X86_AT(c, 0xe1681u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1614u, "ran off the end of a function");
}
void f_000e1684(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e1684  push ebp
    X86_AT(c, 0xe1684u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1685  mov ebp, esp
    X86_AT(c, 0xe1685u);
    c.r[5] = c.r[4];
    // 0e1687  push esi
    X86_AT(c, 0xe1687u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e1688  push edi
    X86_AT(c, 0xe1688u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1689  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe1689u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e168c  cmp edi, 0xffffffff
    X86_AT(c, 0xe168cu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0e168f  jne 0xe169b
    X86_AT(c, 0xe168fu);
    if (x86_cc(c, 5)) { goto L_e169b; }
    X86_TICK(c, 7);
    // 0e1691  call 0xe12c8
    X86_AT(c, 0xe1691u);
    push32(c, 0xe1696u); x86_call_known(c, 0xe12c8u, f_000e12c8); X86_RET(c, 0xe1696u);
    X86_TICK(c, 10);
    // 0e1696  movzx esi, al
    X86_AT(c, 0xe1696u);
    c.r[6] = g8(c, 0);
    // 0e1699  jmp 0xe169d
    X86_AT(c, 0xe1699u);
    goto L_e169d;
L_e169b:
    X86_TICK(c, 2);
    // 0e169b  mov esi, edi
    X86_AT(c, 0xe169bu);
    c.r[6] = c.r[7];
L_e169d:
    X86_TICK(c, 7);
    // 0e169d  cmp esi, 3
    X86_AT(c, 0xe169du);
    (void)x86_sub(c, c.r[6], 0x3u, 0, 4);
    // 0e16a0  je 0xe16c0
    X86_AT(c, 0xe16a0u);
    if (x86_cc(c, 4)) { goto L_e16c0; }
    X86_TICK(c, 7);
    // 0e16a2  cmp esi, 7
    X86_AT(c, 0xe16a2u);
    (void)x86_sub(c, c.r[6], 0x7u, 0, 4);
    // 0e16a5  je 0xe16c0
    X86_AT(c, 0xe16a5u);
    if (x86_cc(c, 4)) { goto L_e16c0; }
    X86_TICK(c, 7);
    // 0e16a7  cmp esi, 5
    X86_AT(c, 0xe16a7u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0e16aa  je 0xe16c0
    X86_AT(c, 0xe16aau);
    if (x86_cc(c, 4)) { goto L_e16c0; }
    X86_TICK(c, 7);
    // 0e16ac  cmp esi, 6
    X86_AT(c, 0xe16acu);
    (void)x86_sub(c, c.r[6], 0x6u, 0, 4);
    // 0e16af  je 0xe16c0
    X86_AT(c, 0xe16afu);
    if (x86_cc(c, 4)) { goto L_e16c0; }
    X86_TICK(c, 9);
    // 0e16b1  push 0xe0ec
    X86_AT(c, 0xe16b1u);
    { uint32_t v = 0xE0ECu; push32(c, v); }
    // 0e16b6  call 0xcc7bc
    X86_AT(c, 0xe16b6u);
    push32(c, 0xe16bbu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe16bbu);
    X86_TICK(c, 9);
    // 0e16bb  add esp, 4
    X86_AT(c, 0xe16bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e16be  jmp 0xe16d8
    X86_AT(c, 0xe16beu);
    goto L_e16d8;
L_e16c0:
    X86_TICK(c, 12);
    // 0e16c0  push dword ptr [esi*4 + 0xaa274]
    X86_AT(c, 0xe16c0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xAA274u))); push32(c, v); }
    // 0e16c7  call 0xcc7bc
    X86_AT(c, 0xe16c7u);
    push32(c, 0xe16ccu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe16ccu);
    X86_TICK(c, 14);
    // 0e16cc  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe16ccu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e16cf  push esi
    X86_AT(c, 0xe16cfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e16d0  call 0xe1614
    X86_AT(c, 0xe16d0u);
    push32(c, 0xe16d5u); x86_call_known(c, 0xe1614u, f_000e1614); X86_RET(c, 0xe16d5u);
    X86_TICK(c, 2);
    // 0e16d5  add esp, 0xc
    X86_AT(c, 0xe16d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e16d8:
    X86_TICK(c, 24);
    // 0e16d8  pop edi
    X86_AT(c, 0xe16d8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e16d9  pop esi
    X86_AT(c, 0xe16d9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e16da  leave 
    X86_AT(c, 0xe16dau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e16db  ret 
    X86_AT(c, 0xe16dbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1684u, "ran off the end of a function");
}
void f_000e16dc(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e16dc  push ebp
    X86_AT(c, 0xe16dcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e16dd  mov ebp, esp
    X86_AT(c, 0xe16ddu);
    c.r[5] = c.r[4];
    // 0e16df  mov dword ptr [0xc2e98], 1
    X86_AT(c, 0xe16dfu);
    wr32((c.sbase[3] + (uint32_t)(0xC2E98u)), 0x1u);
    // 0e16e9  push 0xf
    X86_AT(c, 0xe16e9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e16eb  push 0xe108
    X86_AT(c, 0xe16ebu);
    { uint32_t v = 0xE108u; push32(c, v); }
    // 0e16f0  call 0xcc830
    X86_AT(c, 0xe16f0u);
    push32(c, 0xe16f5u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xe16f5u);
    X86_TICK(c, 18);
    // 0e16f5  mov eax, dword ptr [0xb0326]
    X86_AT(c, 0xe16f5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0326u)));
    // 0e16fa  push dword ptr [eax*4 + 0xab054]
    X86_AT(c, 0xe16fau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB054u))); push32(c, v); }
    // 0e1701  push 7
    X86_AT(c, 0xe1701u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e1703  call 0xc8cdc
    X86_AT(c, 0xe1703u);
    push32(c, 0xe1708u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe1708u);
    X86_TICK(c, 11);
    // 0e1708  push 0xe12c
    X86_AT(c, 0xe1708u);
    { uint32_t v = 0xE12Cu; push32(c, v); }
    // 0e170d  push 7
    X86_AT(c, 0xe170du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e170f  call 0xc8cdc
    X86_AT(c, 0xe170fu);
    push32(c, 0xe1714u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe1714u);
    X86_TICK(c, 18);
    // 0e1714  mov eax, dword ptr [0xb0326]
    X86_AT(c, 0xe1714u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0326u)));
    // 0e1719  add esp, 0x18
    X86_AT(c, 0xe1719u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e171c  cmp dword ptr [eax*4 + 0xab014], 0
    X86_AT(c, 0xe171cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB014u))), 0x0u, 0, 4);
    // 0e1724  jne 0xe173c
    X86_AT(c, 0xe1724u);
    if (x86_cc(c, 5)) { goto L_e173c; }
    X86_TICK(c, 9);
    // 0e1726  push 0xe138
    X86_AT(c, 0xe1726u);
    { uint32_t v = 0xE138u; push32(c, v); }
    // 0e172b  call 0xcc7bc
    X86_AT(c, 0xe172bu);
    push32(c, 0xe1730u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1730u);
    X86_TICK(c, 9);
    // 0e1730  push 1
    X86_AT(c, 0xe1730u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1732  call 0xc5ca4
    X86_AT(c, 0xe1732u);
    push32(c, 0xe1737u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe1737u);
    X86_TICK(c, 9);
    // 0e1737  add esp, 8
    X86_AT(c, 0xe1737u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e173a  jmp 0xe1755
    X86_AT(c, 0xe173au);
    goto L_e1755;
L_e173c:
    X86_TICK(c, 11);
    // 0e173c  push 0xe140
    X86_AT(c, 0xe173cu);
    { uint32_t v = 0xE140u; push32(c, v); }
    // 0e1741  push 7
    X86_AT(c, 0xe1741u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e1743  call 0xc8cdc
    X86_AT(c, 0xe1743u);
    push32(c, 0xe1748u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe1748u);
    X86_TICK(c, 14);
    // 0e1748  push 7
    X86_AT(c, 0xe1748u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e174a  push dword ptr [ebp + 8]
    X86_AT(c, 0xe174au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e174d  call 0xe1684
    X86_AT(c, 0xe174du);
    push32(c, 0xe1752u); x86_call_known(c, 0xe1684u, f_000e1684); X86_RET(c, 0xe1752u);
    X86_TICK(c, 2);
    // 0e1752  add esp, 0x10
    X86_AT(c, 0xe1752u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e1755:
    X86_TICK(c, 16);
    // 0e1755  leave 
    X86_AT(c, 0xe1755u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1756  ret 
    X86_AT(c, 0xe1756u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe16dcu, "ran off the end of a function");
}
}

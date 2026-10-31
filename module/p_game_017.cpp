#include "p_game_funcs.h"
namespace p_game {
void f_000f7f60(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0f7f60  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7f60u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7f65  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7f65u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7f68  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7f68u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7f6b  shl edx, 5
    X86_AT(c, 0xf7f6bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7f6e  sub edx, eax
    X86_AT(c, 0xf7f6eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7f70  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7f70u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7f76  call 0xe3b24
    X86_AT(c, 0xf7f76u);
    push32(c, 0xf7f7bu); f_000e3b24(c); X86_RET(c, 0xf7f7bu);
    X86_TICK(c, 25);
    // 0f7f7b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7f7bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7f80  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7f80u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7f83  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7f83u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7f86  shl edx, 5
    X86_AT(c, 0xf7f86u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7f89  sub edx, eax
    X86_AT(c, 0xf7f89u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7f8b  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7f8bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7f91  call 0xfd76c
    X86_AT(c, 0xf7f91u);
    push32(c, 0xf7f96u); f_000fd76c(c); X86_RET(c, 0xf7f96u);
    X86_TICK(c, 22);
    // 0f7f96  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7f96u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7f9b  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7f9bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7f9e  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7f9eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7fa1  shl edx, 5
    X86_AT(c, 0xf7fa1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7fa4  sub edx, eax
    X86_AT(c, 0xf7fa4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7fa6  mov dword ptr [edx + 0xcdf57], 5
    X86_AT(c, 0xf7fa6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)), 0x5u);
    // 0f7fb0  call 0xe3974
    X86_AT(c, 0xf7fb0u);
    push32(c, 0xf7fb5u); f_000e3974(c); X86_RET(c, 0xf7fb5u);
    X86_TICK(c, 30);
    // 0f7fb5  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7fb5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7fba  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7fbau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7fbd  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7fbdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7fc0  shl edx, 5
    X86_AT(c, 0xf7fc0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7fc3  sub edx, eax
    X86_AT(c, 0xf7fc3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7fc5  push dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xf7fc5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))); push32(c, v); }
    // 0f7fcb  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7fcbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7fd1  call 0xf3c40
    X86_AT(c, 0xf7fd1u);
    push32(c, 0xf7fd6u); f_000f3c40(c); X86_RET(c, 0xf7fd6u);
    X86_TICK(c, 7);
    // 0f7fd6  call 0xfa748
    X86_AT(c, 0xf7fd6u);
    push32(c, 0xf7fdbu); f_000fa748(c); X86_RET(c, 0xf7fdbu);
    X86_TICK(c, 12);
    // 0f7fdb  add esp, 0x10
    X86_AT(c, 0xf7fdbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f7fde  ret 
    X86_AT(c, 0xf7fdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7f60u, "ran off the end of a function");
}
void f_000f7fe0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f7fe0  push 7
    X86_AT(c, 0xf7fe0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7fe2  call 0xe693c
    X86_AT(c, 0xf7fe2u);
    push32(c, 0xf7fe7u); f_000e693c(c); X86_RET(c, 0xf7fe7u);
    X86_TICK(c, 11);
    // 0f7fe7  push 0xa3b4
    X86_AT(c, 0xf7fe7u);
    { uint32_t v = 0xA3B4u; push32(c, v); }
    // 0f7fec  push 7
    X86_AT(c, 0xf7fecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7fee  call 0xe5654
    X86_AT(c, 0xf7feeu);
    push32(c, 0xf7ff3u); f_000e5654(c); X86_RET(c, 0xf7ff3u);
    X86_TICK(c, 9);
    // 0f7ff3  push 7
    X86_AT(c, 0xf7ff3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7ff5  call 0xe6c68
    X86_AT(c, 0xf7ff5u);
    push32(c, 0xf7ffau); f_000e6c68(c); X86_RET(c, 0xf7ffau);
    X86_TICK(c, 26);
    // 0f7ffa  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7ffau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7fff  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7fffu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8002  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8002u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8005  shl edx, 5
    X86_AT(c, 0xf8005u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8008  sub edx, eax
    X86_AT(c, 0xf8008u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f800a  add esp, 0x10
    X86_AT(c, 0xf800au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f800d  mov edx, dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf800du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)));
    // 0f8013  cmp edx, 4
    X86_AT(c, 0xf8013u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0f8016  ja 0xf807f
    X86_AT(c, 0xf8016u);
    if (x86_cc(c, 7)) { goto L_f807f; }
    X86_TICK(c, 7);
    // 0f8018  jmp dword ptr cs:[edx*4 + 0xf8020]
    X86_AT(c, 0xf8018u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF8020u)));
      switch (t) {
      case 0xf8034u: goto L_f8034;
      case 0xf803bu: goto L_f803b;
      case 0xf8042u: goto L_f8042;
      case 0xf8069u: goto L_f8069;
      case 0xf8070u: goto L_f8070;
      default: x86_jump(c, t); return; } }
L_f8034:
    X86_TICK(c, 9);
    // 0f8034  push 0xa3e8
    X86_AT(c, 0xf8034u);
    { uint32_t v = 0xA3E8u; push32(c, v); }
    // 0f8039  jmp 0xf8075
    X86_AT(c, 0xf8039u);
    goto L_f8075;
L_f803b:
    X86_TICK(c, 9);
    // 0f803b  push 0xa418
    X86_AT(c, 0xf803bu);
    { uint32_t v = 0xA418u; push32(c, v); }
    // 0f8040  jmp 0xf8075
    X86_AT(c, 0xf8040u);
    goto L_f8075;
L_f8042:
    X86_TICK(c, 25);
    // 0f8042  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8042u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8047  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8047u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f804a  lea edx, [eax + edx*2]
    X86_AT(c, 0xf804au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f804d  shl edx, 5
    X86_AT(c, 0xf804du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8050  sub edx, eax
    X86_AT(c, 0xf8050u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8052  cmp dword ptr [edx + 0xcdf6b], 0x39
    X86_AT(c, 0xf8052u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0x39u, 0, 4);
    // 0f8059  je 0xf8062
    X86_AT(c, 0xf8059u);
    if (x86_cc(c, 4)) { goto L_f8062; }
    X86_TICK(c, 7);
    // 0f805b  call 0xf16c4
    X86_AT(c, 0xf805bu);
    push32(c, 0xf8060u); f_000f16c4(c); X86_RET(c, 0xf8060u);
    X86_TICK(c, 7);
    // 0f8060  jmp 0xf807f
    X86_AT(c, 0xf8060u);
    goto L_f807f;
L_f8062:
    X86_TICK(c, 9);
    // 0f8062  push 0xa454
    X86_AT(c, 0xf8062u);
    { uint32_t v = 0xA454u; push32(c, v); }
    // 0f8067  jmp 0xf8075
    X86_AT(c, 0xf8067u);
    goto L_f8075;
L_f8069:
    X86_TICK(c, 9);
    // 0f8069  push 0xa488
    X86_AT(c, 0xf8069u);
    { uint32_t v = 0xA488u; push32(c, v); }
    // 0f806e  jmp 0xf8075
    X86_AT(c, 0xf806eu);
    goto L_f8075;
L_f8070:
    X86_TICK(c, 2);
    // 0f8070  push 0xa4bc
    X86_AT(c, 0xf8070u);
    { uint32_t v = 0xA4BCu; push32(c, v); }
L_f8075:
    X86_TICK(c, 9);
    // 0f8075  push 7
    X86_AT(c, 0xf8075u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8077  call 0xe5654
    X86_AT(c, 0xf8077u);
    push32(c, 0xf807cu); f_000e5654(c); X86_RET(c, 0xf807cu);
    X86_TICK(c, 2);
    // 0f807c  add esp, 8
    X86_AT(c, 0xf807cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_f807f:
    X86_TICK(c, 9);
    // 0f807f  push 7
    X86_AT(c, 0xf807fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8081  call 0xe6c68
    X86_AT(c, 0xf8081u);
    push32(c, 0xf8086u); f_000e6c68(c); X86_RET(c, 0xf8086u);
    X86_TICK(c, 12);
    // 0f8086  add esp, 4
    X86_AT(c, 0xf8086u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f8089  ret 
    X86_AT(c, 0xf8089u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7fe0u, "ran off the end of a function");
}
void f_000f808c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0f808c  push ebp
    X86_AT(c, 0xf808cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f808d  mov ebp, esp
    X86_AT(c, 0xf808du);
    c.r[5] = c.r[4];
    // 0f808f  push eax
    X86_AT(c, 0xf808fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f8090  push ebx
    X86_AT(c, 0xf8090u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f8091  push esi
    X86_AT(c, 0xf8091u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8092  push edi
    X86_AT(c, 0xf8092u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8093  push 1
    X86_AT(c, 0xf8093u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f8095  call 0xe58cc
    X86_AT(c, 0xf8095u);
    push32(c, 0xf809au); f_000e58cc(c); X86_RET(c, 0xf809au);
    X86_TICK(c, 9);
    // 0f809a  push 1
    X86_AT(c, 0xf809au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f809c  call 0xe7810
    X86_AT(c, 0xf809cu);
    push32(c, 0xf80a1u); f_000e7810(c); X86_RET(c, 0xf80a1u);
    X86_TICK(c, 9);
    // 0f80a1  push 0
    X86_AT(c, 0xf80a1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f80a3  call 0xe58cc
    X86_AT(c, 0xf80a3u);
    push32(c, 0xf80a8u); f_000e58cc(c); X86_RET(c, 0xf80a8u);
    X86_TICK(c, 29);
    // 0f80a8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf80a8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f80ad  lea edx, [eax + eax*4]
    X86_AT(c, 0xf80adu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f80b0  lea edx, [eax + edx*2]
    X86_AT(c, 0xf80b0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f80b3  shl edx, 5
    X86_AT(c, 0xf80b3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f80b6  sub edx, eax
    X86_AT(c, 0xf80b6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f80b8  mov dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf80b8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)), 0x0u);
    // 0f80c2  push 0
    X86_AT(c, 0xf80c2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f80c4  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf80c4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f80ca  call 0xf3c40
    X86_AT(c, 0xf80cau);
    push32(c, 0xf80cfu); f_000f3c40(c); X86_RET(c, 0xf80cfu);
    X86_TICK(c, 37);
    // 0f80cf  mov dword ptr [0xcda6c], 0
    X86_AT(c, 0xf80cfu);
    wr32((c.sbase[3] + (uint32_t)(0xCDA6Cu)), 0x0u);
    // 0f80d9  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf80d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f80de  lea edx, [eax + eax*4]
    X86_AT(c, 0xf80deu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f80e1  lea edx, [eax + edx*2]
    X86_AT(c, 0xf80e1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f80e4  shl edx, 5
    X86_AT(c, 0xf80e4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f80e7  sub edx, eax
    X86_AT(c, 0xf80e7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f80e9  mov edi, dword ptr [edx + 0xcdf5b]
    X86_AT(c, 0xf80e9u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu)));
    // 0f80ef  mov esi, dword ptr [edx + 0xcdf5f]
    X86_AT(c, 0xf80efu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu)));
    // 0f80f5  add esp, 0x14
    X86_AT(c, 0xf80f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f80f8  cmp dword ptr [edx + 0xcde56], 1
    X86_AT(c, 0xf80f8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x1u, 0, 4);
    // 0f80ff  jne 0xf81be
    X86_AT(c, 0xf80ffu);
    if (x86_cc(c, 5)) { goto L_f81be; }
    X86_TICK(c, 15);
    // 0f8105  lea eax, [esi - 1]
    X86_AT(c, 0xf8105u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFFu);
    // 0f8108  push eax
    X86_AT(c, 0xf8108u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f8109  push edi
    X86_AT(c, 0xf8109u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f810a  mov ebx, eax
    X86_AT(c, 0xf810au);
    c.r[3] = c.r[0];
    // 0f810c  call 0xef8ac
    X86_AT(c, 0xf810cu);
    push32(c, 0xf8111u); f_000ef8ac(c); X86_RET(c, 0xf8111u);
    X86_TICK(c, 9);
    // 0f8111  add esp, 8
    X86_AT(c, 0xf8111u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f8114  dec eax
    X86_AT(c, 0xf8114u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f8115  je 0xf81bc
    X86_AT(c, 0xf8115u);
    if (x86_cc(c, 4)) { goto L_f81bc; }
    X86_TICK(c, 19);
    // 0f811b  lea eax, [esi - 1]
    X86_AT(c, 0xf811bu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFFu);
    // 0f811e  push eax
    X86_AT(c, 0xf811eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f811f  lea edx, [edi - 1]
    X86_AT(c, 0xf811fu);
    c.r[2] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0f8122  push edx
    X86_AT(c, 0xf8122u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f8123  mov ebx, eax
    X86_AT(c, 0xf8123u);
    c.r[3] = c.r[0];
    // 0f8125  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xf8125u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0f8128  call 0xef8ac
    X86_AT(c, 0xf8128u);
    push32(c, 0xf812du); f_000ef8ac(c); X86_RET(c, 0xf812du);
    X86_TICK(c, 9);
    // 0f812d  add esp, 8
    X86_AT(c, 0xf812du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f8130  dec eax
    X86_AT(c, 0xf8130u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f8131  je 0xf81b9
    X86_AT(c, 0xf8131u);
    if (x86_cc(c, 4)) { goto L_f81b9; }
    X86_TICK(c, 15);
    // 0f8137  push esi
    X86_AT(c, 0xf8137u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8138  lea eax, [edi - 1]
    X86_AT(c, 0xf8138u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0f813b  push eax
    X86_AT(c, 0xf813bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f813c  mov ebx, eax
    X86_AT(c, 0xf813cu);
    c.r[3] = c.r[0];
    // 0f813e  call 0xef8ac
    X86_AT(c, 0xf813eu);
    push32(c, 0xf8143u); f_000ef8ac(c); X86_RET(c, 0xf8143u);
    X86_TICK(c, 9);
    // 0f8143  add esp, 8
    X86_AT(c, 0xf8143u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f8146  dec eax
    X86_AT(c, 0xf8146u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f8147  je 0xf819d
    X86_AT(c, 0xf8147u);
    if (x86_cc(c, 4)) { goto L_f819d; }
    X86_TICK(c, 19);
    // 0f8149  lea eax, [esi + 1]
    X86_AT(c, 0xf8149u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0f814c  push eax
    X86_AT(c, 0xf814cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f814d  lea edx, [edi - 1]
    X86_AT(c, 0xf814du);
    c.r[2] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0f8150  push edx
    X86_AT(c, 0xf8150u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f8151  mov ebx, eax
    X86_AT(c, 0xf8151u);
    c.r[3] = c.r[0];
    // 0f8153  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xf8153u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0f8156  call 0xef8ac
    X86_AT(c, 0xf8156u);
    push32(c, 0xf815bu); f_000ef8ac(c); X86_RET(c, 0xf815bu);
    X86_TICK(c, 9);
    // 0f815b  add esp, 8
    X86_AT(c, 0xf815bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f815e  dec eax
    X86_AT(c, 0xf815eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f815f  je 0xf81b9
    X86_AT(c, 0xf815fu);
    if (x86_cc(c, 4)) { goto L_f81b9; }
    X86_TICK(c, 15);
    // 0f8161  lea eax, [esi + 1]
    X86_AT(c, 0xf8161u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0f8164  push eax
    X86_AT(c, 0xf8164u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f8165  push edi
    X86_AT(c, 0xf8165u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8166  mov ebx, eax
    X86_AT(c, 0xf8166u);
    c.r[3] = c.r[0];
    // 0f8168  call 0xef8ac
    X86_AT(c, 0xf8168u);
    push32(c, 0xf816du); f_000ef8ac(c); X86_RET(c, 0xf816du);
    X86_TICK(c, 9);
    // 0f816d  add esp, 8
    X86_AT(c, 0xf816du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f8170  dec eax
    X86_AT(c, 0xf8170u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f8171  je 0xf81bc
    X86_AT(c, 0xf8171u);
    if (x86_cc(c, 4)) { goto L_f81bc; }
    X86_TICK(c, 19);
    // 0f8173  lea eax, [esi + 1]
    X86_AT(c, 0xf8173u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0f8176  push eax
    X86_AT(c, 0xf8176u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f8177  lea edx, [edi + 1]
    X86_AT(c, 0xf8177u);
    c.r[2] = (uint32_t)(c.r[7] + 0x1u);
    // 0f817a  push edx
    X86_AT(c, 0xf817au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f817b  mov ebx, eax
    X86_AT(c, 0xf817bu);
    c.r[3] = c.r[0];
    // 0f817d  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xf817du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0f8180  call 0xef8ac
    X86_AT(c, 0xf8180u);
    push32(c, 0xf8185u); f_000ef8ac(c); X86_RET(c, 0xf8185u);
    X86_TICK(c, 9);
    // 0f8185  add esp, 8
    X86_AT(c, 0xf8185u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f8188  dec eax
    X86_AT(c, 0xf8188u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f8189  je 0xf81b9
    X86_AT(c, 0xf8189u);
    if (x86_cc(c, 4)) { goto L_f81b9; }
    X86_TICK(c, 15);
    // 0f818b  push esi
    X86_AT(c, 0xf818bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f818c  lea eax, [edi + 1]
    X86_AT(c, 0xf818cu);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0f818f  push eax
    X86_AT(c, 0xf818fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f8190  mov ebx, eax
    X86_AT(c, 0xf8190u);
    c.r[3] = c.r[0];
    // 0f8192  call 0xef8ac
    X86_AT(c, 0xf8192u);
    push32(c, 0xf8197u); f_000ef8ac(c); X86_RET(c, 0xf8197u);
    X86_TICK(c, 9);
    // 0f8197  add esp, 8
    X86_AT(c, 0xf8197u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f819a  dec eax
    X86_AT(c, 0xf819au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f819b  jne 0xf81a1
    X86_AT(c, 0xf819bu);
    if (x86_cc(c, 5)) { goto L_f81a1; }
L_f819d:
    X86_TICK(c, 9);
    // 0f819d  mov edi, ebx
    X86_AT(c, 0xf819du);
    c.r[7] = c.r[3];
    // 0f819f  jmp 0xf81be
    X86_AT(c, 0xf819fu);
    goto L_f81be;
L_f81a1:
    X86_TICK(c, 19);
    // 0f81a1  lea eax, [esi - 1]
    X86_AT(c, 0xf81a1u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFFu);
    // 0f81a4  push eax
    X86_AT(c, 0xf81a4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f81a5  lea edx, [edi + 1]
    X86_AT(c, 0xf81a5u);
    c.r[2] = (uint32_t)(c.r[7] + 0x1u);
    // 0f81a8  push edx
    X86_AT(c, 0xf81a8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f81a9  mov ebx, eax
    X86_AT(c, 0xf81a9u);
    c.r[3] = c.r[0];
    // 0f81ab  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xf81abu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0f81ae  call 0xef8ac
    X86_AT(c, 0xf81aeu);
    push32(c, 0xf81b3u); f_000ef8ac(c); X86_RET(c, 0xf81b3u);
    X86_TICK(c, 9);
    // 0f81b3  add esp, 8
    X86_AT(c, 0xf81b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f81b6  dec eax
    X86_AT(c, 0xf81b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f81b7  jne 0xf81be
    X86_AT(c, 0xf81b7u);
    if (x86_cc(c, 5)) { goto L_f81be; }
L_f81b9:
    X86_TICK(c, 4);
    // 0f81b9  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0xf81b9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_f81bc:
    X86_TICK(c, 2);
    // 0f81bc  mov esi, ebx
    X86_AT(c, 0xf81bcu);
    c.r[6] = c.r[3];
L_f81be:
    X86_TICK(c, 33);
    // 0f81be  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf81beu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f81c3  lea edx, [eax + eax*4]
    X86_AT(c, 0xf81c3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f81c6  lea edx, [eax + edx*2]
    X86_AT(c, 0xf81c6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f81c9  shl edx, 5
    X86_AT(c, 0xf81c9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f81cc  sub edx, eax
    X86_AT(c, 0xf81ccu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f81ce  mov dword ptr [edx + 0xcdf5b], edi
    X86_AT(c, 0xf81ceu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu)), c.r[7]);
    // 0f81d4  mov dword ptr [edx + 0xcdf6b], edi
    X86_AT(c, 0xf81d4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), c.r[7]);
    // 0f81da  mov dword ptr [edx + 0xcdf5f], esi
    X86_AT(c, 0xf81dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu)), c.r[6]);
    // 0f81e0  mov dword ptr [edx + 0xcdf6f], esi
    X86_AT(c, 0xf81e0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), c.r[6]);
    // 0f81e6  cmp dword ptr [edx + 0xcde99], 4
    X86_AT(c, 0xf81e6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))), 0x4u, 0, 4);
    // 0f81ed  jle 0xf81f3
    X86_AT(c, 0xf81edu);
    if (x86_cc(c, 14)) { goto L_f81f3; }
    X86_TICK(c, 9);
    // 0f81ef  push 7
    X86_AT(c, 0xf81efu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f81f1  jmp 0xf81f5
    X86_AT(c, 0xf81f1u);
    goto L_f81f5;
L_f81f3:
    X86_TICK(c, 2);
    // 0f81f3  push 0
    X86_AT(c, 0xf81f3u);
    { uint32_t v = 0x0u; push32(c, v); }
L_f81f5:
    X86_TICK(c, 7);
    // 0f81f5  call 0xe3188
    X86_AT(c, 0xf81f5u);
    push32(c, 0xf81fau); f_000e3188(c); X86_RET(c, 0xf81fau);
    X86_TICK(c, 9);
    // 0f81fa  add esp, 4
    X86_AT(c, 0xf81fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f81fd  call 0xe2c18
    X86_AT(c, 0xf81fdu);
    push32(c, 0xf8202u); f_000e2c18(c); X86_RET(c, 0xf8202u);
    X86_TICK(c, 7);
    // 0f8202  call 0xe2ea0
    X86_AT(c, 0xf8202u);
    push32(c, 0xf8207u); f_000e2ea0(c); X86_RET(c, 0xf8207u);
    X86_TICK(c, 9);
    // 0f8207  push 1
    X86_AT(c, 0xf8207u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f8209  call 0xe1a9c
    X86_AT(c, 0xf8209u);
    push32(c, 0xf820eu); f_000e1a9c(c); X86_RET(c, 0xf820eu);
    X86_TICK(c, 30);
    // 0f820e  add esp, 4
    X86_AT(c, 0xf820eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f8211  pop edi
    X86_AT(c, 0xf8211u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f8212  pop esi
    X86_AT(c, 0xf8212u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f8213  pop ebx
    X86_AT(c, 0xf8213u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f8214  leave 
    X86_AT(c, 0xf8214u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f8215  ret 
    X86_AT(c, 0xf8215u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf808cu, "ran off the end of a function");
}
void f_000f8218(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0f8218  push ebp
    X86_AT(c, 0xf8218u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f8219  mov ebp, esp
    X86_AT(c, 0xf8219u);
    c.r[5] = c.r[4];
    // 0f821b  sub esp, 0xc
    X86_AT(c, 0xf821bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0f821e  push ebx
    X86_AT(c, 0xf821eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f821f  push esi
    X86_AT(c, 0xf821fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8220  push edi
    X86_AT(c, 0xf8220u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8221  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xf8221u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0f8228  push 7
    X86_AT(c, 0xf8228u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f822a  call 0xe693c
    X86_AT(c, 0xf822au);
    push32(c, 0xf822fu); f_000e693c(c); X86_RET(c, 0xf822fu);
    X86_TICK(c, 11);
    // 0f822f  push 0xa4f0
    X86_AT(c, 0xf822fu);
    { uint32_t v = 0xA4F0u; push32(c, v); }
    // 0f8234  push 7
    X86_AT(c, 0xf8234u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8236  call 0xe5654
    X86_AT(c, 0xf8236u);
    push32(c, 0xf823bu); f_000e5654(c); X86_RET(c, 0xf823bu);
    X86_TICK(c, 9);
    // 0f823b  push 7
    X86_AT(c, 0xf823bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f823d  call 0xe26c8
    X86_AT(c, 0xf823du);
    push32(c, 0xf8242u); f_000e26c8(c); X86_RET(c, 0xf8242u);
    X86_TICK(c, 11);
    // 0f8242  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf8242u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f8245  add esp, 0x10
    X86_AT(c, 0xf8245u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f8248  inc eax
    X86_AT(c, 0xf8248u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f8249  jne 0xf8263
    X86_AT(c, 0xf8249u);
    if (x86_cc(c, 5)) { goto L_f8263; }
    X86_TICK(c, 11);
    // 0f824b  push 0xa50c
    X86_AT(c, 0xf824bu);
    { uint32_t v = 0xA50Cu; push32(c, v); }
    // 0f8250  push 7
    X86_AT(c, 0xf8250u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8252  call 0xe5654
    X86_AT(c, 0xf8252u);
    push32(c, 0xf8257u); f_000e5654(c); X86_RET(c, 0xf8257u);
    X86_TICK(c, 9);
    // 0f8257  push 7
    X86_AT(c, 0xf8257u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8259  call 0xe6c68
    X86_AT(c, 0xf8259u);
    push32(c, 0xf825eu); f_000e6c68(c); X86_RET(c, 0xf825eu);
    X86_TICK(c, 9);
    // 0f825e  add esp, 0xc
    X86_AT(c, 0xf825eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f8261  jmp 0xf82bd
    X86_AT(c, 0xf8261u);
    goto L_f82bd;
L_f8263:
    X86_TICK(c, 47);
    // 0f8263  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8263u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8268  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8268u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f826b  lea edx, [eax + edx*2]
    X86_AT(c, 0xf826bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f826e  shl edx, 5
    X86_AT(c, 0xf826eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8271  sub edx, eax
    X86_AT(c, 0xf8271u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8273  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf8273u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f8279  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf8279u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f827c  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf827cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f8282  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xf8282u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0f8285  push 1
    X86_AT(c, 0xf8285u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f8287  push dword ptr [ebp - 4]
    X86_AT(c, 0xf8287u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f828a  lea esi, [ebp - 0xc]
    X86_AT(c, 0xf828au);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f828d  push esi
    X86_AT(c, 0xf828du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f828e  lea edi, [ebp - 8]
    X86_AT(c, 0xf828eu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f8291  push edi
    X86_AT(c, 0xf8291u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8292  call 0xeea58
    X86_AT(c, 0xf8292u);
    push32(c, 0xf8297u); f_000eea58(c); X86_RET(c, 0xf8297u);
    X86_TICK(c, 17);
    // 0f8297  push dword ptr [esi]
    X86_AT(c, 0xf8297u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0f8299  push dword ptr [edi]
    X86_AT(c, 0xf8299u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0f829b  call 0xef8ac
    X86_AT(c, 0xf829bu);
    push32(c, 0xf82a0u); f_000ef8ac(c); X86_RET(c, 0xf82a0u);
    X86_TICK(c, 16);
    // 0f82a0  xchg ebx, eax
    X86_AT(c, 0xf82a0u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f82a1  lea esi, [ebp - 4]
    X86_AT(c, 0xf82a1u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f82a4  push esi
    X86_AT(c, 0xf82a4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f82a5  push ebx
    X86_AT(c, 0xf82a5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f82a6  call 0xefe68
    X86_AT(c, 0xf82a6u);
    push32(c, 0xf82abu); f_000efe68(c); X86_RET(c, 0xf82abu);
    X86_TICK(c, 11);
    // 0f82ab  push eax
    X86_AT(c, 0xf82abu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f82ac  push 7
    X86_AT(c, 0xf82acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f82ae  call 0xe6cb0
    X86_AT(c, 0xf82aeu);
    push32(c, 0xf82b3u); f_000e6cb0(c); X86_RET(c, 0xf82b3u);
    X86_TICK(c, 9);
    // 0f82b3  push 7
    X86_AT(c, 0xf82b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f82b5  call 0xe6c68
    X86_AT(c, 0xf82b5u);
    push32(c, 0xf82bau); f_000e6c68(c); X86_RET(c, 0xf82bau);
    X86_TICK(c, 2);
    // 0f82ba  add esp, 0x2c
    X86_AT(c, 0xf82bau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_f82bd:
    X86_TICK(c, 28);
    // 0f82bd  pop edi
    X86_AT(c, 0xf82bdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f82be  pop esi
    X86_AT(c, 0xf82beu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f82bf  pop ebx
    X86_AT(c, 0xf82bfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f82c0  leave 
    X86_AT(c, 0xf82c0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f82c1  ret 
    X86_AT(c, 0xf82c1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8218u, "ran off the end of a function");
}
void f_000f82c4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f82c4  push 7
    X86_AT(c, 0xf82c4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f82c6  call 0xe693c
    X86_AT(c, 0xf82c6u);
    push32(c, 0xf82cbu); f_000e693c(c); X86_RET(c, 0xf82cbu);
    X86_TICK(c, 14);
    // 0f82cb  add esp, 4
    X86_AT(c, 0xf82cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f82ce  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xf82ceu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0f82d5  je 0xf8322
    X86_AT(c, 0xf82d5u);
    if (x86_cc(c, 4)) { goto L_f8322; }
    X86_TICK(c, 25);
    // 0f82d7  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf82d7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f82dc  lea edx, [eax + eax*4]
    X86_AT(c, 0xf82dcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f82df  lea edx, [eax + edx*2]
    X86_AT(c, 0xf82dfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f82e2  shl edx, 5
    X86_AT(c, 0xf82e2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f82e5  sub edx, eax
    X86_AT(c, 0xf82e5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f82e7  cmp dword ptr [edx + 0xcdefb], 1
    X86_AT(c, 0xf82e7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEFBu))), 0x1u, 0, 4);
    // 0f82ee  jge 0xf8322
    X86_AT(c, 0xf82eeu);
    if (x86_cc(c, 13)) { goto L_f8322; }
    X86_TICK(c, 11);
    // 0f82f0  push 0xa524
    X86_AT(c, 0xf82f0u);
    { uint32_t v = 0xA524u; push32(c, v); }
    // 0f82f5  push 7
    X86_AT(c, 0xf82f5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f82f7  call 0xe5654
    X86_AT(c, 0xf82f7u);
    push32(c, 0xf82fcu); f_000e5654(c); X86_RET(c, 0xf82fcu);
    X86_TICK(c, 9);
    // 0f82fc  push 7
    X86_AT(c, 0xf82fcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f82fe  call 0xe6c68
    X86_AT(c, 0xf82feu);
    push32(c, 0xf8303u); f_000e6c68(c); X86_RET(c, 0xf8303u);
    X86_TICK(c, 9);
    // 0f8303  push 0
    X86_AT(c, 0xf8303u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f8305  call 0xe1944
    X86_AT(c, 0xf8305u);
    push32(c, 0xf830au); f_000e1944(c); X86_RET(c, 0xf830au);
    X86_TICK(c, 11);
    // 0f830a  push 0xa538
    X86_AT(c, 0xf830au);
    { uint32_t v = 0xA538u; push32(c, v); }
    // 0f830f  push 7
    X86_AT(c, 0xf830fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8311  call 0xe5654
    X86_AT(c, 0xf8311u);
    push32(c, 0xf8316u); f_000e5654(c); X86_RET(c, 0xf8316u);
    X86_TICK(c, 9);
    // 0f8316  push 7
    X86_AT(c, 0xf8316u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8318  call 0xe6c68
    X86_AT(c, 0xf8318u);
    push32(c, 0xf831du); f_000e6c68(c); X86_RET(c, 0xf831du);
    X86_TICK(c, 9);
    // 0f831d  add esp, 0x1c
    X86_AT(c, 0xf831du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f8320  jmp 0xf8380
    X86_AT(c, 0xf8320u);
    goto L_f8380;
L_f8322:
    X86_TICK(c, 11);
    // 0f8322  mov eax, dword ptr [0xcde44]
    X86_AT(c, 0xf8322u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCDE44u)));
    // 0f8327  cmp eax, 2
    X86_AT(c, 0xf8327u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0f832a  je 0xf8347
    X86_AT(c, 0xf832au);
    if (x86_cc(c, 4)) { goto L_f8347; }
    X86_TICK(c, 7);
    // 0f832c  cmp eax, 3
    X86_AT(c, 0xf832cu);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0f832f  je 0xf8347
    X86_AT(c, 0xf832fu);
    if (x86_cc(c, 4)) { goto L_f8347; }
    X86_TICK(c, 19);
    // 0f8331  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8331u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8336  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8336u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8339  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8339u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f833c  shl edx, 5
    X86_AT(c, 0xf833cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f833f  sub edx, eax
    X86_AT(c, 0xf833fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8341  dec dword ptr [edx + 0xcdefb]
    X86_AT(c, 0xf8341u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEFBu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_f8347:
    X86_TICK(c, 24);
    // 0f8347  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8347u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f834c  lea edx, [eax + eax*4]
    X86_AT(c, 0xf834cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f834f  lea edx, [eax + edx*2]
    X86_AT(c, 0xf834fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8352  shl edx, 5
    X86_AT(c, 0xf8352u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8355  sub edx, eax
    X86_AT(c, 0xf8355u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8357  mov eax, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xf8357u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0f835d  cmp eax, 5
    X86_AT(c, 0xf835du);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0f8360  je 0xf8367
    X86_AT(c, 0xf8360u);
    if (x86_cc(c, 4)) { goto L_f8367; }
    X86_TICK(c, 7);
    // 0f8362  cmp eax, 4
    X86_AT(c, 0xf8362u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0f8365  jne 0xf8373
    X86_AT(c, 0xf8365u);
    if (x86_cc(c, 5)) { goto L_f8373; }
L_f8367:
    X86_TICK(c, 9);
    // 0f8367  push 0xa564
    X86_AT(c, 0xf8367u);
    { uint32_t v = 0xA564u; push32(c, v); }
    // 0f836c  call 0xfb2e8
    X86_AT(c, 0xf836cu);
    push32(c, 0xf8371u); f_000fb2e8(c); X86_RET(c, 0xf8371u);
    X86_TICK(c, 7);
    // 0f8371  jmp 0xf837d
    X86_AT(c, 0xf8371u);
    goto L_f837d;
L_f8373:
    X86_TICK(c, 9);
    // 0f8373  push 0xa594
    X86_AT(c, 0xf8373u);
    { uint32_t v = 0xA594u; push32(c, v); }
    // 0f8378  call 0xfa4d4
    X86_AT(c, 0xf8378u);
    push32(c, 0xf837du); f_000fa4d4(c); X86_RET(c, 0xf837du);
L_f837d:
    X86_TICK(c, 2);
    // 0f837d  add esp, 4
    X86_AT(c, 0xf837du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f8380:
    X86_TICK(c, 10);
    // 0f8380  ret 
    X86_AT(c, 0xf8380u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf82c4u, "ran off the end of a function");
}
void f_000f8384(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f8384  push 7
    X86_AT(c, 0xf8384u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8386  call 0xe693c
    X86_AT(c, 0xf8386u);
    push32(c, 0xf838bu); f_000e693c(c); X86_RET(c, 0xf838bu);
    X86_TICK(c, 11);
    // 0f838b  push 0xa5c4
    X86_AT(c, 0xf838bu);
    { uint32_t v = 0xA5C4u; push32(c, v); }
    // 0f8390  push 7
    X86_AT(c, 0xf8390u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8392  call 0xe5654
    X86_AT(c, 0xf8392u);
    push32(c, 0xf8397u); f_000e5654(c); X86_RET(c, 0xf8397u);
    X86_TICK(c, 9);
    // 0f8397  push 7
    X86_AT(c, 0xf8397u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8399  call 0xe6c68
    X86_AT(c, 0xf8399u);
    push32(c, 0xf839eu); f_000e6c68(c); X86_RET(c, 0xf839eu);
    X86_TICK(c, 27);
    // 0f839e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf839eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f83a3  lea edx, [eax + eax*4]
    X86_AT(c, 0xf83a3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f83a6  lea edx, [eax + edx*2]
    X86_AT(c, 0xf83a6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f83a9  shl edx, 5
    X86_AT(c, 0xf83a9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f83ac  sub edx, eax
    X86_AT(c, 0xf83acu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f83ae  add esp, 0x10
    X86_AT(c, 0xf83aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f83b1  cmp dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf83b1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x0u, 0, 4);
    // 0f83b8  jne 0xf83c3
    X86_AT(c, 0xf83b8u);
    if (x86_cc(c, 5)) { goto L_f83c3; }
    X86_TICK(c, 12);
    // 0f83ba  cmp dword ptr [edx + 0xcde99], 4
    X86_AT(c, 0xf83bau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))), 0x4u, 0, 4);
    // 0f83c1  jle 0xf83e5
    X86_AT(c, 0xf83c1u);
    if (x86_cc(c, 14)) { goto L_f83e5; }
L_f83c3:
    X86_TICK(c, 9);
    // 0f83c3  push 3
    X86_AT(c, 0xf83c3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f83c5  call 0xe1944
    X86_AT(c, 0xf83c5u);
    push32(c, 0xf83cau); f_000e1944(c); X86_RET(c, 0xf83cau);
    X86_TICK(c, 11);
    // 0f83ca  push 0xa5f8
    X86_AT(c, 0xf83cau);
    { uint32_t v = 0xA5F8u; push32(c, v); }
    // 0f83cf  push 7
    X86_AT(c, 0xf83cfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f83d1  call 0xe5654
    X86_AT(c, 0xf83d1u);
    push32(c, 0xf83d6u); f_000e5654(c); X86_RET(c, 0xf83d6u);
    X86_TICK(c, 9);
    // 0f83d6  push 7
    X86_AT(c, 0xf83d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f83d8  call 0xe6c68
    X86_AT(c, 0xf83d8u);
    push32(c, 0xf83ddu); f_000e6c68(c); X86_RET(c, 0xf83ddu);
    X86_TICK(c, 9);
    // 0f83dd  add esp, 0x10
    X86_AT(c, 0xf83ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f83e0  jmp 0xf8471
    X86_AT(c, 0xf83e0u);
    goto L_f8471;
L_f83e5:
    X86_TICK(c, 11);
    // 0f83e5  push 0xa640
    X86_AT(c, 0xf83e5u);
    { uint32_t v = 0xA640u; push32(c, v); }
    // 0f83ea  push 7
    X86_AT(c, 0xf83eau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f83ec  call 0xe5654
    X86_AT(c, 0xf83ecu);
    push32(c, 0xf83f1u); f_000e5654(c); X86_RET(c, 0xf83f1u);
    X86_TICK(c, 9);
    // 0f83f1  push 7
    X86_AT(c, 0xf83f1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f83f3  call 0xe6c68
    X86_AT(c, 0xf83f3u);
    push32(c, 0xf83f8u); f_000e6c68(c); X86_RET(c, 0xf83f8u);
    X86_TICK(c, 25);
    // 0f83f8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf83f8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f83fd  lea edx, [eax + eax*4]
    X86_AT(c, 0xf83fdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8400  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8400u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8403  shl edx, 5
    X86_AT(c, 0xf8403u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8406  sub edx, eax
    X86_AT(c, 0xf8406u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8408  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf8408u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f840e  call 0xe3b24
    X86_AT(c, 0xf840eu);
    push32(c, 0xf8413u); f_000e3b24(c); X86_RET(c, 0xf8413u);
    X86_TICK(c, 25);
    // 0f8413  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8413u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8418  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8418u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f841b  lea edx, [eax + edx*2]
    X86_AT(c, 0xf841bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f841e  shl edx, 5
    X86_AT(c, 0xf841eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8421  sub edx, eax
    X86_AT(c, 0xf8421u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8423  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf8423u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f8429  call 0xfd76c
    X86_AT(c, 0xf8429u);
    push32(c, 0xf842eu); f_000fd76c(c); X86_RET(c, 0xf842eu);
    X86_TICK(c, 7);
    // 0f842e  call 0xefef8
    X86_AT(c, 0xf842eu);
    push32(c, 0xf8433u); f_000efef8(c); X86_RET(c, 0xf8433u);
    X86_TICK(c, 9);
    // 0f8433  push 7
    X86_AT(c, 0xf8433u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8435  call 0xe693c
    X86_AT(c, 0xf8435u);
    push32(c, 0xf843au); f_000e693c(c); X86_RET(c, 0xf843au);
    X86_TICK(c, 11);
    // 0f843a  push 0xa66c
    X86_AT(c, 0xf843au);
    { uint32_t v = 0xA66Cu; push32(c, v); }
    // 0f843f  push 7
    X86_AT(c, 0xf843fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8441  call 0xe5654
    X86_AT(c, 0xf8441u);
    push32(c, 0xf8446u); f_000e5654(c); X86_RET(c, 0xf8446u);
    X86_TICK(c, 9);
    // 0f8446  push 7
    X86_AT(c, 0xf8446u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8448  call 0xe6c68
    X86_AT(c, 0xf8448u);
    push32(c, 0xf844du); f_000e6c68(c); X86_RET(c, 0xf844du);
    X86_TICK(c, 11);
    // 0f844d  push 0xa694
    X86_AT(c, 0xf844du);
    { uint32_t v = 0xA694u; push32(c, v); }
    // 0f8452  push 7
    X86_AT(c, 0xf8452u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8454  call 0xe5654
    X86_AT(c, 0xf8454u);
    push32(c, 0xf8459u); f_000e5654(c); X86_RET(c, 0xf8459u);
    X86_TICK(c, 9);
    // 0f8459  push 7
    X86_AT(c, 0xf8459u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f845b  call 0xe2628
    X86_AT(c, 0xf845bu);
    push32(c, 0xf8460u); f_000e2628(c); X86_RET(c, 0xf8460u);
    X86_TICK(c, 9);
    // 0f8460  add esp, 0x30
    X86_AT(c, 0xf8460u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0f8463  cmp al, 0x59
    X86_AT(c, 0xf8463u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0f8465  jne 0xf8471
    X86_AT(c, 0xf8465u);
    if (x86_cc(c, 5)) { goto L_f8471; }
    X86_TICK(c, 2);
    // 0f8467  mov dword ptr [0xcde34], 0
    X86_AT(c, 0xf8467u);
    wr32((c.sbase[3] + (uint32_t)(0xCDE34u)), 0x0u);
L_f8471:
    X86_TICK(c, 10);
    // 0f8471  ret 
    X86_AT(c, 0xf8471u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8384u, "ran off the end of a function");
}
void f_000f8474(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0f8474  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8474u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8479  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8479u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f847c  lea edx, [eax + edx*2]
    X86_AT(c, 0xf847cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f847f  shl edx, 5
    X86_AT(c, 0xf847fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8482  sub edx, eax
    X86_AT(c, 0xf8482u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8484  mov eax, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xf8484u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0f848a  cmp eax, 2
    X86_AT(c, 0xf848au);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0f848d  je 0xf84ad
    X86_AT(c, 0xf848du);
    if (x86_cc(c, 4)) { goto L_f84ad; }
    X86_TICK(c, 7);
    // 0f848f  dec eax
    X86_AT(c, 0xf848fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f8490  je 0xf84ad
    X86_AT(c, 0xf8490u);
    if (x86_cc(c, 4)) { goto L_f84ad; }
    X86_TICK(c, 11);
    // 0f8492  push 0xa6c4
    X86_AT(c, 0xf8492u);
    { uint32_t v = 0xA6C4u; push32(c, v); }
    // 0f8497  push 7
    X86_AT(c, 0xf8497u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8499  call 0xe5654
    X86_AT(c, 0xf8499u);
    push32(c, 0xf849eu); f_000e5654(c); X86_RET(c, 0xf849eu);
    X86_TICK(c, 9);
    // 0f849e  push 7
    X86_AT(c, 0xf849eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f84a0  call 0xe6c68
    X86_AT(c, 0xf84a0u);
    push32(c, 0xf84a5u); f_000e6c68(c); X86_RET(c, 0xf84a5u);
    X86_TICK(c, 9);
    // 0f84a5  add esp, 0xc
    X86_AT(c, 0xf84a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f84a8  jmp 0xf856f
    X86_AT(c, 0xf84a8u);
    goto L_f856f;
L_f84ad:
    X86_TICK(c, 25);
    // 0f84ad  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf84adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f84b2  lea edx, [eax + eax*4]
    X86_AT(c, 0xf84b2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f84b5  lea edx, [eax + edx*2]
    X86_AT(c, 0xf84b5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f84b8  shl edx, 5
    X86_AT(c, 0xf84b8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f84bb  sub edx, eax
    X86_AT(c, 0xf84bbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f84bd  cmp dword ptr [edx + 0xcdf6b], 0x20
    X86_AT(c, 0xf84bdu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0x20u, 0, 4);
    // 0f84c4  jge 0xf8516
    X86_AT(c, 0xf84c4u);
    if (x86_cc(c, 13)) { goto L_f8516; }
    X86_TICK(c, 12);
    // 0f84c6  cmp dword ptr [edx + 0xcdf6f], 0x20
    X86_AT(c, 0xf84c6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))), 0x20u, 0, 4);
    // 0f84cd  jge 0xf84fc
    X86_AT(c, 0xf84cdu);
    if (x86_cc(c, 13)) { goto L_f84fc; }
    X86_TICK(c, 12);
    // 0f84cf  cmp dword ptr [edx + 0xcdf57], 2
    X86_AT(c, 0xf84cfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x2u, 0, 4);
    // 0f84d6  je 0xf84f2
    X86_AT(c, 0xf84d6u);
    if (x86_cc(c, 4)) { goto L_f84f2; }
    X86_TICK(c, 11);
    // 0f84d8  push 0xa6dc
    X86_AT(c, 0xf84d8u);
    { uint32_t v = 0xA6DCu; push32(c, v); }
    // 0f84dd  push 7
    X86_AT(c, 0xf84ddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f84df  call 0xe5654
    X86_AT(c, 0xf84dfu);
    push32(c, 0xf84e4u); f_000e5654(c); X86_RET(c, 0xf84e4u);
    X86_TICK(c, 9);
    // 0f84e4  push 7
    X86_AT(c, 0xf84e4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f84e6  call 0xe6c68
    X86_AT(c, 0xf84e6u);
    push32(c, 0xf84ebu); f_000e6c68(c); X86_RET(c, 0xf84ebu);
    X86_TICK(c, 9);
    // 0f84eb  push 0xa6f4
    X86_AT(c, 0xf84ebu);
    { uint32_t v = 0xA6F4u; push32(c, v); }
    // 0f84f0  jmp 0xf855e
    X86_AT(c, 0xf84f0u);
    goto L_f855e;
L_f84f2:
    X86_TICK(c, 7);
    // 0f84f2  call 0xf86a8
    X86_AT(c, 0xf84f2u);
    push32(c, 0xf84f7u); f_000f86a8(c); X86_RET(c, 0xf84f7u);
    X86_TICK(c, 7);
    // 0f84f7  jmp 0xf856f
    X86_AT(c, 0xf84f7u);
    goto L_f856f;
L_f84fc:
    X86_TICK(c, 11);
    // 0f84fc  push 0xa71c
    X86_AT(c, 0xf84fcu);
    { uint32_t v = 0xA71Cu; push32(c, v); }
    // 0f8501  push 7
    X86_AT(c, 0xf8501u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8503  call 0xe5654
    X86_AT(c, 0xf8503u);
    push32(c, 0xf8508u); f_000e5654(c); X86_RET(c, 0xf8508u);
    X86_TICK(c, 9);
    // 0f8508  push 7
    X86_AT(c, 0xf8508u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f850a  call 0xe6c68
    X86_AT(c, 0xf850au);
    push32(c, 0xf850fu); f_000e6c68(c); X86_RET(c, 0xf850fu);
    X86_TICK(c, 9);
    // 0f850f  push 0xa734
    X86_AT(c, 0xf850fu);
    { uint32_t v = 0xA734u; push32(c, v); }
    // 0f8514  jmp 0xf855e
    X86_AT(c, 0xf8514u);
    goto L_f855e;
L_f8516:
    X86_TICK(c, 25);
    // 0f8516  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8516u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f851b  lea edx, [eax + eax*4]
    X86_AT(c, 0xf851bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f851e  lea edx, [eax + edx*2]
    X86_AT(c, 0xf851eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8521  shl edx, 5
    X86_AT(c, 0xf8521u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8524  sub edx, eax
    X86_AT(c, 0xf8524u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8526  cmp dword ptr [edx + 0xcdf6f], 0x20
    X86_AT(c, 0xf8526u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))), 0x20u, 0, 4);
    // 0f852d  jge 0xf8546
    X86_AT(c, 0xf852du);
    if (x86_cc(c, 13)) { goto L_f8546; }
    X86_TICK(c, 12);
    // 0f852f  cmp dword ptr [edx + 0xcdf57], 2
    X86_AT(c, 0xf852fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x2u, 0, 4);
    // 0f8536  je 0xf853f
    X86_AT(c, 0xf8536u);
    if (x86_cc(c, 4)) { goto L_f853f; }
    X86_TICK(c, 7);
    // 0f8538  call 0xf8820
    X86_AT(c, 0xf8538u);
    push32(c, 0xf853du); f_000f8820(c); X86_RET(c, 0xf853du);
    X86_TICK(c, 7);
    // 0f853d  jmp 0xf856f
    X86_AT(c, 0xf853du);
    goto L_f856f;
L_f853f:
    X86_TICK(c, 7);
    // 0f853f  call 0xf8764
    X86_AT(c, 0xf853fu);
    push32(c, 0xf8544u); f_000f8764(c); X86_RET(c, 0xf8544u);
    X86_TICK(c, 7);
    // 0f8544  jmp 0xf856f
    X86_AT(c, 0xf8544u);
    goto L_f856f;
L_f8546:
    X86_TICK(c, 11);
    // 0f8546  push 0xa75c
    X86_AT(c, 0xf8546u);
    { uint32_t v = 0xA75Cu; push32(c, v); }
    // 0f854b  push 7
    X86_AT(c, 0xf854bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f854d  call 0xe5654
    X86_AT(c, 0xf854du);
    push32(c, 0xf8552u); f_000e5654(c); X86_RET(c, 0xf8552u);
    X86_TICK(c, 9);
    // 0f8552  push 7
    X86_AT(c, 0xf8552u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8554  call 0xe6c68
    X86_AT(c, 0xf8554u);
    push32(c, 0xf8559u); f_000e6c68(c); X86_RET(c, 0xf8559u);
    X86_TICK(c, 2);
    // 0f8559  push 0xa774
    X86_AT(c, 0xf8559u);
    { uint32_t v = 0xA774u; push32(c, v); }
L_f855e:
    X86_TICK(c, 9);
    // 0f855e  push 7
    X86_AT(c, 0xf855eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8560  call 0xe5654
    X86_AT(c, 0xf8560u);
    push32(c, 0xf8565u); f_000e5654(c); X86_RET(c, 0xf8565u);
    X86_TICK(c, 9);
    // 0f8565  push 7
    X86_AT(c, 0xf8565u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8567  call 0xe6c68
    X86_AT(c, 0xf8567u);
    push32(c, 0xf856cu); f_000e6c68(c); X86_RET(c, 0xf856cu);
    X86_TICK(c, 2);
    // 0f856c  add esp, 0x18
    X86_AT(c, 0xf856cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_f856f:
    X86_TICK(c, 10);
    // 0f856f  ret 
    X86_AT(c, 0xf856fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8474u, "ran off the end of a function");
}
void f_000f856f(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0f856f  ret 
    X86_AT(c, 0xf856fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf856fu, "ran off the end of a function");
}
void f_000f8570(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0f8570  push ebp
    X86_AT(c, 0xf8570u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f8571  mov ebp, esp
    X86_AT(c, 0xf8571u);
    c.r[5] = c.r[4];
    // 0f8573  sub esp, 8
    X86_AT(c, 0xf8573u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0f8576  push ebx
    X86_AT(c, 0xf8576u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f8577  push esi
    X86_AT(c, 0xf8577u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8578  push edi
    X86_AT(c, 0xf8578u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8579  push 7
    X86_AT(c, 0xf8579u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f857b  call 0xe26c8
    X86_AT(c, 0xf857bu);
    push32(c, 0xf8580u); f_000e26c8(c); X86_RET(c, 0xf8580u);
    X86_TICK(c, 12);
    // 0f8580  xchg esi, eax
    X86_AT(c, 0xf8580u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0f8581  add esp, 4
    X86_AT(c, 0xf8581u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f8584  cmp esi, 0xffffffff
    X86_AT(c, 0xf8584u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0f8587  jne 0xf85a6
    X86_AT(c, 0xf8587u);
    if (x86_cc(c, 5)) { goto L_f85a6; }
    X86_TICK(c, 11);
    // 0f8589  push 0xa79c
    X86_AT(c, 0xf8589u);
    { uint32_t v = 0xA79Cu; push32(c, v); }
    // 0f858e  push 7
    X86_AT(c, 0xf858eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8590  call 0xe5654
    X86_AT(c, 0xf8590u);
    push32(c, 0xf8595u); f_000e5654(c); X86_RET(c, 0xf8595u);
    X86_TICK(c, 9);
    // 0f8595  push 7
    X86_AT(c, 0xf8595u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8597  call 0xe6c68
    X86_AT(c, 0xf8597u);
    push32(c, 0xf859cu); f_000e6c68(c); X86_RET(c, 0xf859cu);
    X86_TICK(c, 11);
    // 0f859c  mov eax, 0xffffffff
    X86_AT(c, 0xf859cu);
    c.r[0] = 0xFFFFFFFFu;
    // 0f85a1  add esp, 0xc
    X86_AT(c, 0xf85a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f85a4  jmp 0xf8616
    X86_AT(c, 0xf85a4u);
    goto L_f8616;
L_f85a6:
    X86_TICK(c, 44);
    // 0f85a6  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf85a6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f85ab  lea edx, [eax + eax*4]
    X86_AT(c, 0xf85abu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f85ae  lea edx, [eax + edx*2]
    X86_AT(c, 0xf85aeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f85b1  shl edx, 5
    X86_AT(c, 0xf85b1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f85b4  sub edx, eax
    X86_AT(c, 0xf85b4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f85b6  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf85b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f85bc  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf85bcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f85bf  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf85bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f85c5  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf85c5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f85c8  push 1
    X86_AT(c, 0xf85c8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f85ca  push esi
    X86_AT(c, 0xf85cau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f85cb  lea ebx, [ebp - 8]
    X86_AT(c, 0xf85cbu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f85ce  push ebx
    X86_AT(c, 0xf85ceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f85cf  lea eax, [ebp - 4]
    X86_AT(c, 0xf85cfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f85d2  push eax
    X86_AT(c, 0xf85d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f85d3  call 0xeea58
    X86_AT(c, 0xf85d3u);
    push32(c, 0xf85d8u); f_000eea58(c); X86_RET(c, 0xf85d8u);
    X86_TICK(c, 17);
    // 0f85d8  push dword ptr [ebx]
    X86_AT(c, 0xf85d8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0f85da  push dword ptr [ebp - 4]
    X86_AT(c, 0xf85dau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f85dd  call 0xef8f4
    X86_AT(c, 0xf85ddu);
    push32(c, 0xf85e2u); f_000ef8f4(c); X86_RET(c, 0xf85e2u);
    X86_TICK(c, 12);
    // 0f85e2  xchg edi, eax
    X86_AT(c, 0xf85e2u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f85e3  add esp, 0x18
    X86_AT(c, 0xf85e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f85e6  cmp edi, 0x25
    X86_AT(c, 0xf85e6u);
    (void)x86_sub(c, c.r[7], 0x25u, 0, 4);
    // 0f85e9  jl 0xf85f0
    X86_AT(c, 0xf85e9u);
    if (x86_cc(c, 12)) { goto L_f85f0; }
    X86_TICK(c, 7);
    // 0f85eb  cmp edi, 0x3f
    X86_AT(c, 0xf85ebu);
    (void)x86_sub(c, c.r[7], 0x3Fu, 0, 4);
    // 0f85ee  jle 0xf8614
    X86_AT(c, 0xf85eeu);
    if (x86_cc(c, 14)) { goto L_f8614; }
L_f85f0:
    X86_TICK(c, 9);
    // 0f85f0  push 3
    X86_AT(c, 0xf85f0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f85f2  call 0xe1944
    X86_AT(c, 0xf85f2u);
    push32(c, 0xf85f7u); f_000e1944(c); X86_RET(c, 0xf85f7u);
    X86_TICK(c, 11);
    // 0f85f7  push 0xa7b4
    X86_AT(c, 0xf85f7u);
    { uint32_t v = 0xA7B4u; push32(c, v); }
    // 0f85fc  push 7
    X86_AT(c, 0xf85fcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f85fe  call 0xe5654
    X86_AT(c, 0xf85feu);
    push32(c, 0xf8603u); f_000e5654(c); X86_RET(c, 0xf8603u);
    X86_TICK(c, 9);
    // 0f8603  push 7
    X86_AT(c, 0xf8603u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8605  call 0xe6c68
    X86_AT(c, 0xf8605u);
    push32(c, 0xf860au); f_000e6c68(c); X86_RET(c, 0xf860au);
    X86_TICK(c, 11);
    // 0f860a  mov eax, 0xffffffff
    X86_AT(c, 0xf860au);
    c.r[0] = 0xFFFFFFFFu;
    // 0f860f  add esp, 0x10
    X86_AT(c, 0xf860fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f8612  jmp 0xf8616
    X86_AT(c, 0xf8612u);
    goto L_f8616;
L_f8614:
    X86_TICK(c, 2);
    // 0f8614  sub eax, eax
    X86_AT(c, 0xf8614u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_f8616:
    X86_TICK(c, 28);
    // 0f8616  pop edi
    X86_AT(c, 0xf8616u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f8617  pop esi
    X86_AT(c, 0xf8617u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f8618  pop ebx
    X86_AT(c, 0xf8618u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f8619  leave 
    X86_AT(c, 0xf8619u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f861a  ret 
    X86_AT(c, 0xf861au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8570u, "ran off the end of a function");
}
void f_000f861c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0f861c  push ebp
    X86_AT(c, 0xf861cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f861d  mov ebp, esp
    X86_AT(c, 0xf861du);
    c.r[5] = c.r[4];
    // 0f861f  push eax
    X86_AT(c, 0xf861fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f8620  cmp dword ptr [0xd4608], 0
    X86_AT(c, 0xf8620u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4608u))), 0x0u, 0, 4);
    // 0f8627  jne 0xf8639
    X86_AT(c, 0xf8627u);
    if (x86_cc(c, 5)) { goto L_f8639; }
    X86_TICK(c, 9);
    // 0f8629  push 0x20
    X86_AT(c, 0xf8629u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f862b  call 0xe1a7c
    X86_AT(c, 0xf862bu);
    push32(c, 0xf8630u); f_000e1a7c(c); X86_RET(c, 0xf8630u);
    X86_TICK(c, 9);
    // 0f8630  add esp, 4
    X86_AT(c, 0xf8630u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f8633  and eax, eax
    X86_AT(c, 0xf8633u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f8635  jne 0xf8699
    X86_AT(c, 0xf8635u);
    if (x86_cc(c, 5)) { goto L_f8699; }
    X86_TICK(c, 7);
    // 0f8637  jmp 0xf8695
    X86_AT(c, 0xf8637u);
    goto L_f8695;
L_f8639:
    X86_TICK(c, 25);
    // 0f8639  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8639u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f863e  lea edx, [eax + eax*4]
    X86_AT(c, 0xf863eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8641  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8641u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8644  shl edx, 5
    X86_AT(c, 0xf8644u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8647  sub edx, eax
    X86_AT(c, 0xf8647u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8649  cmp byte ptr [edx + 0xcde7b], 0x54
    X86_AT(c, 0xf8649u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu))), 0x54u, 0, 1);
    // 0f8650  jne 0xf8663
    X86_AT(c, 0xf8650u);
    if (x86_cc(c, 5)) { goto L_f8663; }
    X86_TICK(c, 9);
    // 0f8652  push 0xa
    X86_AT(c, 0xf8652u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f8654  call 0xe1a7c
    X86_AT(c, 0xf8654u);
    push32(c, 0xf8659u); f_000e1a7c(c); X86_RET(c, 0xf8659u);
    X86_TICK(c, 9);
    // 0f8659  add esp, 4
    X86_AT(c, 0xf8659u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f865c  cmp eax, 5
    X86_AT(c, 0xf865cu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0f865f  jge 0xf8699
    X86_AT(c, 0xf865fu);
    if (x86_cc(c, 13)) { goto L_f8699; }
    X86_TICK(c, 7);
    // 0f8661  jmp 0xf8695
    X86_AT(c, 0xf8661u);
    goto L_f8695;
L_f8663:
    X86_TICK(c, 9);
    // 0f8663  push 0xc
    X86_AT(c, 0xf8663u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f8665  call 0xe1a7c
    X86_AT(c, 0xf8665u);
    push32(c, 0xf866au); f_000e1a7c(c); X86_RET(c, 0xf866au);
    X86_TICK(c, 78);
    // 0f866a  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xf866au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8670  lea ecx, [edx + edx*4]
    X86_AT(c, 0xf8670u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0f8673  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xf8673u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0f8676  shl ecx, 5
    X86_AT(c, 0xf8676u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0f8679  sub ecx, edx
    X86_AT(c, 0xf8679u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f867b  add esp, 4
    X86_AT(c, 0xf867bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f867e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf867eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f8681  mov eax, dword ptr [ecx + 0xcde66]
    X86_AT(c, 0xf8681u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE66u)));
    // 0f8687  cdq 
    X86_AT(c, 0xf8687u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f8688  mov ecx, 0x14
    X86_AT(c, 0xf8688u);
    c.r[1] = 0x14u;
    // 0f868d  idiv ecx
    X86_AT(c, 0xf868du);
    x86_idiv(c, c.r[1], 4, 0xf868du);
    // 0f868f  inc eax
    X86_AT(c, 0xf868fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f8690  cmp eax, dword ptr [ebp - 4]
    X86_AT(c, 0xf8690u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0f8693  jle 0xf8699
    X86_AT(c, 0xf8693u);
    if (x86_cc(c, 14)) { goto L_f8699; }
L_f8695:
    X86_TICK(c, 9);
    // 0f8695  sub eax, eax
    X86_AT(c, 0xf8695u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8697  jmp 0xf86a3
    X86_AT(c, 0xf8697u);
    goto L_f86a3;
L_f8699:
    X86_TICK(c, 7);
    // 0f8699  call 0xf889c
    X86_AT(c, 0xf8699u);
    push32(c, 0xf869eu); f_000f889c(c); X86_RET(c, 0xf869eu);
    X86_TICK(c, 2);
    // 0f869e  mov eax, 0xffffffff
    X86_AT(c, 0xf869eu);
    c.r[0] = 0xFFFFFFFFu;
L_f86a3:
    X86_TICK(c, 16);
    // 0f86a3  leave 
    X86_AT(c, 0xf86a3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f86a4  ret 
    X86_AT(c, 0xf86a4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf861cu, "ran off the end of a function");
}
void f_000f86a8(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0f86a8  push ebp
    X86_AT(c, 0xf86a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f86a9  mov ebp, esp
    X86_AT(c, 0xf86a9u);
    c.r[5] = c.r[4];
    // 0f86ab  push eax
    X86_AT(c, 0xf86abu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f86ac  push ebx
    X86_AT(c, 0xf86acu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f86ad  push edi
    X86_AT(c, 0xf86adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f86ae  push 7
    X86_AT(c, 0xf86aeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f86b0  call 0xe693c
    X86_AT(c, 0xf86b0u);
    push32(c, 0xf86b5u); f_000e693c(c); X86_RET(c, 0xf86b5u);
    X86_TICK(c, 11);
    // 0f86b5  push 0xa7e8
    X86_AT(c, 0xf86b5u);
    { uint32_t v = 0xA7E8u; push32(c, v); }
    // 0f86ba  push 7
    X86_AT(c, 0xf86bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f86bc  call 0xe5654
    X86_AT(c, 0xf86bcu);
    push32(c, 0xf86c1u); f_000e5654(c); X86_RET(c, 0xf86c1u);
    X86_TICK(c, 9);
    // 0f86c1  push 7
    X86_AT(c, 0xf86c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f86c3  call 0xe6c68
    X86_AT(c, 0xf86c3u);
    push32(c, 0xf86c8u); f_000e6c68(c); X86_RET(c, 0xf86c8u);
    X86_TICK(c, 7);
    // 0f86c8  call 0xf8570
    X86_AT(c, 0xf86c8u);
    push32(c, 0xf86cdu); f_000f8570(c); X86_RET(c, 0xf86cdu);
    X86_TICK(c, 9);
    // 0f86cd  add esp, 0x10
    X86_AT(c, 0xf86cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f86d0  inc eax
    X86_AT(c, 0xf86d0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f86d1  je 0xf8760
    X86_AT(c, 0xf86d1u);
    if (x86_cc(c, 4)) { goto L_f8760; }
    X86_TICK(c, 7);
    // 0f86d7  call 0xf861c
    X86_AT(c, 0xf86d7u);
    push32(c, 0xf86dcu); f_000f861c(c); X86_RET(c, 0xf86dcu);
    X86_TICK(c, 7);
    // 0f86dc  inc eax
    X86_AT(c, 0xf86dcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f86dd  je 0xf8760
    X86_AT(c, 0xf86ddu);
    if (x86_cc(c, 4)) { goto L_f8760; }
    X86_TICK(c, 11);
    // 0f86e3  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf86e3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f86e7  push 7
    X86_AT(c, 0xf86e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f86e9  call 0xe1a7c
    X86_AT(c, 0xf86e9u);
    push32(c, 0xf86eeu); f_000e1a7c(c); X86_RET(c, 0xf86eeu);
    X86_TICK(c, 12);
    // 0f86ee  xchg edi, eax
    X86_AT(c, 0xf86eeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f86ef  add esp, 4
    X86_AT(c, 0xf86efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f86f2  and edi, edi
    X86_AT(c, 0xf86f2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f86f4  jne 0xf86fd
    X86_AT(c, 0xf86f4u);
    if (x86_cc(c, 5)) { goto L_f86fd; }
    X86_TICK(c, 7);
    // 0f86f6  call 0xf889c
    X86_AT(c, 0xf86f6u);
    push32(c, 0xf86fbu); f_000f889c(c); X86_RET(c, 0xf86fbu);
    X86_TICK(c, 7);
    // 0f86fb  jmp 0xf8760
    X86_AT(c, 0xf86fbu);
    goto L_f8760;
L_f86fd:
    X86_TICK(c, 21);
    // 0f86fd  mov ebx, edi
    X86_AT(c, 0xf86fdu);
    c.r[3] = c.r[7];
    // 0f86ff  add bl, 0x41
    X86_AT(c, 0xf86ffu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f8702  lea eax, [ebp - 1]
    X86_AT(c, 0xf8702u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f8705  push eax
    X86_AT(c, 0xf8705u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f8706  push ebx
    X86_AT(c, 0xf8706u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f8707  push 0xa
    X86_AT(c, 0xf8707u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f8709  push 0xcfbe8
    X86_AT(c, 0xf8709u);
    { uint32_t v = 0xCFBE8u; push32(c, v); }
    // 0f870e  call 0xe53e0
    X86_AT(c, 0xf870eu);
    push32(c, 0xf8713u); f_000e53e0(c); X86_RET(c, 0xf8713u);
    X86_TICK(c, 11);
    // 0f8713  push eax
    X86_AT(c, 0xf8713u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f8714  push 7
    X86_AT(c, 0xf8714u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8716  call 0xe6cb0
    X86_AT(c, 0xf8716u);
    push32(c, 0xf871bu); f_000e6cb0(c); X86_RET(c, 0xf871bu);
    X86_TICK(c, 11);
    // 0f871b  push 0xa810
    X86_AT(c, 0xf871bu);
    { uint32_t v = 0xA810u; push32(c, v); }
    // 0f8720  push 7
    X86_AT(c, 0xf8720u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8722  call 0xe5654
    X86_AT(c, 0xf8722u);
    push32(c, 0xf8727u); f_000e5654(c); X86_RET(c, 0xf8727u);
    X86_TICK(c, 33);
    // 0f8727  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8727u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f872c  lea edx, [eax + eax*4]
    X86_AT(c, 0xf872cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f872f  lea edx, [eax + edx*2]
    X86_AT(c, 0xf872fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8732  shl edx, 5
    X86_AT(c, 0xf8732u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8735  sub edx, eax
    X86_AT(c, 0xf8735u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8737  inc dword ptr [edx + edi*4 + 0xcdebf]
    X86_AT(c, 0xf8737u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEBFu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f873e  add esp, 0x20
    X86_AT(c, 0xf873eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f8741  cmp dword ptr [edx + edi*4 + 0xcdebf], 0x63
    X86_AT(c, 0xf8741u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEBFu))), 0x63u, 0, 4);
    // 0f8749  jle 0xf8756
    X86_AT(c, 0xf8749u);
    if (x86_cc(c, 14)) { goto L_f8756; }
    X86_TICK(c, 2);
    // 0f874b  mov dword ptr [edx + edi*4 + 0xcdebf], 0x63
    X86_AT(c, 0xf874bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEBFu)), 0x63u);
L_f8756:
    X86_TICK(c, 9);
    // 0f8756  push 7
    X86_AT(c, 0xf8756u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8758  call 0xe6c68
    X86_AT(c, 0xf8758u);
    push32(c, 0xf875du); f_000e6c68(c); X86_RET(c, 0xf875du);
    X86_TICK(c, 2);
    // 0f875d  add esp, 4
    X86_AT(c, 0xf875du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f8760:
    X86_TICK(c, 24);
    // 0f8760  pop edi
    X86_AT(c, 0xf8760u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f8761  pop ebx
    X86_AT(c, 0xf8761u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f8762  leave 
    X86_AT(c, 0xf8762u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f8763  ret 
    X86_AT(c, 0xf8763u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf86a8u, "ran off the end of a function");
}
void f_000f8764(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0f8764  push ebp
    X86_AT(c, 0xf8764u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f8765  mov ebp, esp
    X86_AT(c, 0xf8765u);
    c.r[5] = c.r[4];
    // 0f8767  push eax
    X86_AT(c, 0xf8767u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f8768  push ebx
    X86_AT(c, 0xf8768u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f8769  push edi
    X86_AT(c, 0xf8769u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f876a  push 7
    X86_AT(c, 0xf876au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f876c  call 0xe693c
    X86_AT(c, 0xf876cu);
    push32(c, 0xf8771u); f_000e693c(c); X86_RET(c, 0xf8771u);
    X86_TICK(c, 11);
    // 0f8771  push 0xa81c
    X86_AT(c, 0xf8771u);
    { uint32_t v = 0xA81Cu; push32(c, v); }
    // 0f8776  push 7
    X86_AT(c, 0xf8776u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8778  call 0xe5654
    X86_AT(c, 0xf8778u);
    push32(c, 0xf877du); f_000e5654(c); X86_RET(c, 0xf877du);
    X86_TICK(c, 9);
    // 0f877d  push 7
    X86_AT(c, 0xf877du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f877f  call 0xe6c68
    X86_AT(c, 0xf877fu);
    push32(c, 0xf8784u); f_000e6c68(c); X86_RET(c, 0xf8784u);
    X86_TICK(c, 7);
    // 0f8784  call 0xf8570
    X86_AT(c, 0xf8784u);
    push32(c, 0xf8789u); f_000f8570(c); X86_RET(c, 0xf8789u);
    X86_TICK(c, 9);
    // 0f8789  add esp, 0x10
    X86_AT(c, 0xf8789u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f878c  inc eax
    X86_AT(c, 0xf878cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f878d  je 0xf881c
    X86_AT(c, 0xf878du);
    if (x86_cc(c, 4)) { goto L_f881c; }
    X86_TICK(c, 7);
    // 0f8793  call 0xf861c
    X86_AT(c, 0xf8793u);
    push32(c, 0xf8798u); f_000f861c(c); X86_RET(c, 0xf8798u);
    X86_TICK(c, 7);
    // 0f8798  inc eax
    X86_AT(c, 0xf8798u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f8799  je 0xf881c
    X86_AT(c, 0xf8799u);
    if (x86_cc(c, 4)) { goto L_f881c; }
    X86_TICK(c, 11);
    // 0f879f  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf879fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f87a3  push 4
    X86_AT(c, 0xf87a3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f87a5  call 0xe1a7c
    X86_AT(c, 0xf87a5u);
    push32(c, 0xf87aau); f_000e1a7c(c); X86_RET(c, 0xf87aau);
    X86_TICK(c, 12);
    // 0f87aa  xchg edi, eax
    X86_AT(c, 0xf87aau);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f87ab  add esp, 4
    X86_AT(c, 0xf87abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f87ae  and edi, edi
    X86_AT(c, 0xf87aeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f87b0  jne 0xf87b9
    X86_AT(c, 0xf87b0u);
    if (x86_cc(c, 5)) { goto L_f87b9; }
    X86_TICK(c, 7);
    // 0f87b2  call 0xf889c
    X86_AT(c, 0xf87b2u);
    push32(c, 0xf87b7u); f_000f889c(c); X86_RET(c, 0xf87b7u);
    X86_TICK(c, 7);
    // 0f87b7  jmp 0xf881c
    X86_AT(c, 0xf87b7u);
    goto L_f881c;
L_f87b9:
    X86_TICK(c, 21);
    // 0f87b9  mov ebx, edi
    X86_AT(c, 0xf87b9u);
    c.r[3] = c.r[7];
    // 0f87bb  add bl, 0x41
    X86_AT(c, 0xf87bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f87be  lea eax, [ebp - 1]
    X86_AT(c, 0xf87beu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f87c1  push eax
    X86_AT(c, 0xf87c1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f87c2  push ebx
    X86_AT(c, 0xf87c2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f87c3  push 7
    X86_AT(c, 0xf87c3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f87c5  push 0xcf84c
    X86_AT(c, 0xf87c5u);
    { uint32_t v = 0xCF84Cu; push32(c, v); }
    // 0f87ca  call 0xe53e0
    X86_AT(c, 0xf87cau);
    push32(c, 0xf87cfu); f_000e53e0(c); X86_RET(c, 0xf87cfu);
    X86_TICK(c, 11);
    // 0f87cf  push eax
    X86_AT(c, 0xf87cfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f87d0  push 7
    X86_AT(c, 0xf87d0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f87d2  call 0xe6cb0
    X86_AT(c, 0xf87d2u);
    push32(c, 0xf87d7u); f_000e6cb0(c); X86_RET(c, 0xf87d7u);
    X86_TICK(c, 11);
    // 0f87d7  push 0xa844
    X86_AT(c, 0xf87d7u);
    { uint32_t v = 0xA844u; push32(c, v); }
    // 0f87dc  push 7
    X86_AT(c, 0xf87dcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f87de  call 0xe5654
    X86_AT(c, 0xf87deu);
    push32(c, 0xf87e3u); f_000e5654(c); X86_RET(c, 0xf87e3u);
    X86_TICK(c, 33);
    // 0f87e3  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf87e3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f87e8  lea edx, [eax + eax*4]
    X86_AT(c, 0xf87e8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f87eb  lea edx, [eax + edx*2]
    X86_AT(c, 0xf87ebu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f87ee  shl edx, 5
    X86_AT(c, 0xf87eeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f87f1  sub edx, eax
    X86_AT(c, 0xf87f1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f87f3  inc dword ptr [edx + edi*4 + 0xcdea2]
    X86_AT(c, 0xf87f3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEA2u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f87fa  add esp, 0x20
    X86_AT(c, 0xf87fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f87fd  cmp dword ptr [edx + edi*4 + 0xcdea2], 0x63
    X86_AT(c, 0xf87fdu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEA2u))), 0x63u, 0, 4);
    // 0f8805  jle 0xf8812
    X86_AT(c, 0xf8805u);
    if (x86_cc(c, 14)) { goto L_f8812; }
    X86_TICK(c, 2);
    // 0f8807  mov dword ptr [edx + edi*4 + 0xcdea2], 0x63
    X86_AT(c, 0xf8807u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEA2u)), 0x63u);
L_f8812:
    X86_TICK(c, 9);
    // 0f8812  push 7
    X86_AT(c, 0xf8812u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8814  call 0xe6c68
    X86_AT(c, 0xf8814u);
    push32(c, 0xf8819u); f_000e6c68(c); X86_RET(c, 0xf8819u);
    X86_TICK(c, 2);
    // 0f8819  add esp, 4
    X86_AT(c, 0xf8819u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f881c:
    X86_TICK(c, 24);
    // 0f881c  pop edi
    X86_AT(c, 0xf881cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f881d  pop ebx
    X86_AT(c, 0xf881du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f881e  leave 
    X86_AT(c, 0xf881eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f881f  ret 
    X86_AT(c, 0xf881fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8764u, "ran off the end of a function");
}
void f_000f8820(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0f8820  push edi
    X86_AT(c, 0xf8820u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8821  push 7
    X86_AT(c, 0xf8821u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8823  call 0xe693c
    X86_AT(c, 0xf8823u);
    push32(c, 0xf8828u); f_000e693c(c); X86_RET(c, 0xf8828u);
    X86_TICK(c, 11);
    // 0f8828  push 0xa850
    X86_AT(c, 0xf8828u);
    { uint32_t v = 0xA850u; push32(c, v); }
    // 0f882d  push 7
    X86_AT(c, 0xf882du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f882f  call 0xe5654
    X86_AT(c, 0xf882fu);
    push32(c, 0xf8834u); f_000e5654(c); X86_RET(c, 0xf8834u);
    X86_TICK(c, 9);
    // 0f8834  push 7
    X86_AT(c, 0xf8834u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8836  call 0xe6c68
    X86_AT(c, 0xf8836u);
    push32(c, 0xf883bu); f_000e6c68(c); X86_RET(c, 0xf883bu);
    X86_TICK(c, 7);
    // 0f883b  call 0xf8570
    X86_AT(c, 0xf883bu);
    push32(c, 0xf8840u); f_000f8570(c); X86_RET(c, 0xf8840u);
    X86_TICK(c, 9);
    // 0f8840  add esp, 0x10
    X86_AT(c, 0xf8840u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f8843  inc eax
    X86_AT(c, 0xf8843u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f8844  je 0xf8899
    X86_AT(c, 0xf8844u);
    if (x86_cc(c, 4)) { goto L_f8899; }
    X86_TICK(c, 7);
    // 0f8846  call 0xf861c
    X86_AT(c, 0xf8846u);
    push32(c, 0xf884bu); f_000f861c(c); X86_RET(c, 0xf884bu);
    X86_TICK(c, 7);
    // 0f884b  inc eax
    X86_AT(c, 0xf884bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f884c  je 0xf8899
    X86_AT(c, 0xf884cu);
    if (x86_cc(c, 4)) { goto L_f8899; }
    X86_TICK(c, 9);
    // 0f884e  push 2
    X86_AT(c, 0xf884eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f8850  call 0xe1a7c
    X86_AT(c, 0xf8850u);
    push32(c, 0xf8855u); f_000e1a7c(c); X86_RET(c, 0xf8855u);
    X86_TICK(c, 20);
    // 0f8855  xchg edi, eax
    X86_AT(c, 0xf8855u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f8856  lea edi, [edi + edi*4]
    X86_AT(c, 0xf8856u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0f8859  lea edi, [edi + edi*4]
    X86_AT(c, 0xf8859u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0f885c  lea edi, [edi*4 + 0x64]
    X86_AT(c, 0xf885cu);
    c.r[7] = (uint32_t)(c.r[7] * 4 + 0x64u);
    // 0f8863  push 0xa874
    X86_AT(c, 0xf8863u);
    { uint32_t v = 0xA874u; push32(c, v); }
    // 0f8868  push 7
    X86_AT(c, 0xf8868u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f886a  call 0xe5654
    X86_AT(c, 0xf886au);
    push32(c, 0xf886fu); f_000e5654(c); X86_RET(c, 0xf886fu);
    X86_TICK(c, 59);
    // 0f886f  push 3
    X86_AT(c, 0xf886fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f8871  mov eax, edi
    X86_AT(c, 0xf8871u);
    c.r[0] = c.r[7];
    // 0f8873  cdq 
    X86_AT(c, 0xf8873u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f8874  mov ecx, 0x64
    X86_AT(c, 0xf8874u);
    c.r[1] = 0x64u;
    // 0f8879  idiv ecx
    X86_AT(c, 0xf8879u);
    x86_idiv(c, c.r[1], 4, 0xf8879u);
    // 0f887b  push eax
    X86_AT(c, 0xf887bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f887c  push 7
    X86_AT(c, 0xf887cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f887e  call 0xe5630
    X86_AT(c, 0xf887eu);
    push32(c, 0xf8883u); f_000e5630(c); X86_RET(c, 0xf8883u);
    X86_TICK(c, 11);
    // 0f8883  push 0xa87c
    X86_AT(c, 0xf8883u);
    { uint32_t v = 0xA87Cu; push32(c, v); }
    // 0f8888  push 7
    X86_AT(c, 0xf8888u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f888a  call 0xe5654
    X86_AT(c, 0xf888au);
    push32(c, 0xf888fu); f_000e5654(c); X86_RET(c, 0xf888fu);
    X86_TICK(c, 9);
    // 0f888f  push 7
    X86_AT(c, 0xf888fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8891  call 0xe6c68
    X86_AT(c, 0xf8891u);
    push32(c, 0xf8896u); f_000e6c68(c); X86_RET(c, 0xf8896u);
    X86_TICK(c, 2);
    // 0f8896  add esp, 0x24
    X86_AT(c, 0xf8896u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_f8899:
    X86_TICK(c, 14);
    // 0f8899  pop edi
    X86_AT(c, 0xf8899u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f889a  ret 
    X86_AT(c, 0xf889au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8820u, "ran off the end of a function");
}
void f_000f889c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0f889c  push edi
    X86_AT(c, 0xf889cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f889d  push 7
    X86_AT(c, 0xf889du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f889f  call 0xe693c
    X86_AT(c, 0xf889fu);
    push32(c, 0xf88a4u); f_000e693c(c); X86_RET(c, 0xf88a4u);
    X86_TICK(c, 9);
    // 0f88a4  push 3
    X86_AT(c, 0xf88a4u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f88a6  call 0xe1944
    X86_AT(c, 0xf88a6u);
    push32(c, 0xf88abu); f_000e1944(c); X86_RET(c, 0xf88abu);
    X86_TICK(c, 11);
    // 0f88ab  push 0xa890
    X86_AT(c, 0xf88abu);
    { uint32_t v = 0xA890u; push32(c, v); }
    // 0f88b0  push 7
    X86_AT(c, 0xf88b0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f88b2  call 0xe5654
    X86_AT(c, 0xf88b2u);
    push32(c, 0xf88b7u); f_000e5654(c); X86_RET(c, 0xf88b7u);
    X86_TICK(c, 9);
    // 0f88b7  push 7
    X86_AT(c, 0xf88b7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f88b9  call 0xe6c68
    X86_AT(c, 0xf88b9u);
    push32(c, 0xf88beu); f_000e6c68(c); X86_RET(c, 0xf88beu);
    X86_TICK(c, 9);
    // 0f88be  push 0xa
    X86_AT(c, 0xf88beu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f88c0  call 0xe1a7c
    X86_AT(c, 0xf88c0u);
    push32(c, 0xf88c5u); f_000e1a7c(c); X86_RET(c, 0xf88c5u);
    X86_TICK(c, 9);
    // 0f88c5  add esp, 0x18
    X86_AT(c, 0xf88c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f88c8  cmp eax, 4
    X86_AT(c, 0xf88c8u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0f88cb  jl 0xf8910
    X86_AT(c, 0xf88cbu);
    if (x86_cc(c, 12)) { goto L_f8910; }
    X86_TICK(c, 2);
    // 0f88cd  sub edi, edi
    X86_AT(c, 0xf88cdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_f88cf:
    X86_TICK(c, 7);
    // 0f88cf  cmp edi, 8
    X86_AT(c, 0xf88cfu);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0f88d2  jge 0xf88e2
    X86_AT(c, 0xf88d2u);
    if (x86_cc(c, 13)) { goto L_f88e2; }
    X86_TICK(c, 11);
    // 0f88d4  mov dword ptr [edi*4 + 0xce508], 2
    X86_AT(c, 0xf88d4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE508u)), 0x2u);
    // 0f88df  inc edi
    X86_AT(c, 0xf88dfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f88e0  jmp 0xf88cf
    X86_AT(c, 0xf88e0u);
    X86_POLL(c, 0xf88cfu); goto L_f88cf;
L_f88e2:
    X86_TICK(c, 11);
    // 0f88e2  push 0xa8b4
    X86_AT(c, 0xf88e2u);
    { uint32_t v = 0xA8B4u; push32(c, v); }
    // 0f88e7  push 7
    X86_AT(c, 0xf88e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f88e9  call 0xe5654
    X86_AT(c, 0xf88e9u);
    push32(c, 0xf88eeu); f_000e5654(c); X86_RET(c, 0xf88eeu);
    X86_TICK(c, 9);
    // 0f88ee  push 7
    X86_AT(c, 0xf88eeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f88f0  call 0xe6c68
    X86_AT(c, 0xf88f0u);
    push32(c, 0xf88f5u); f_000e6c68(c); X86_RET(c, 0xf88f5u);
    X86_TICK(c, 11);
    // 0f88f5  mov dword ptr [0xd4608], 0
    X86_AT(c, 0xf88f5u);
    wr32((c.sbase[3] + (uint32_t)(0xD4608u)), 0x0u);
    // 0f88ff  push 2
    X86_AT(c, 0xf88ffu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f8901  call 0xe1944
    X86_AT(c, 0xf8901u);
    push32(c, 0xf8906u); f_000e1944(c); X86_RET(c, 0xf8906u);
    X86_TICK(c, 9);
    // 0f8906  push 2
    X86_AT(c, 0xf8906u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f8908  call 0xe9740
    X86_AT(c, 0xf8908u);
    push32(c, 0xf890du); f_000e9740(c); X86_RET(c, 0xf890du);
    X86_TICK(c, 2);
    // 0f890d  add esp, 0x14
    X86_AT(c, 0xf890du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_f8910:
    X86_TICK(c, 14);
    // 0f8910  pop edi
    X86_AT(c, 0xf8910u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f8911  ret 
    X86_AT(c, 0xf8911u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf889cu, "ran off the end of a function");
}
void f_000f8914(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0f8914  push ebp
    X86_AT(c, 0xf8914u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f8915  mov ebp, esp
    X86_AT(c, 0xf8915u);
    c.r[5] = c.r[4];
    // 0f8917  sub esp, 8
    X86_AT(c, 0xf8917u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0f891a  push ebx
    X86_AT(c, 0xf891au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f891b  push esi
    X86_AT(c, 0xf891bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f891c  push edi
    X86_AT(c, 0xf891cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f891d  push 7
    X86_AT(c, 0xf891du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f891f  call 0xe693c
    X86_AT(c, 0xf891fu);
    push32(c, 0xf8924u); f_000e693c(c); X86_RET(c, 0xf8924u);
    X86_TICK(c, 11);
    // 0f8924  push 0xa900
    X86_AT(c, 0xf8924u);
    { uint32_t v = 0xA900u; push32(c, v); }
    // 0f8929  push 7
    X86_AT(c, 0xf8929u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f892b  call 0xe5654
    X86_AT(c, 0xf892bu);
    push32(c, 0xf8930u); f_000e5654(c); X86_RET(c, 0xf8930u);
    X86_TICK(c, 9);
    // 0f8930  push 7
    X86_AT(c, 0xf8930u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8932  call 0xe6c68
    X86_AT(c, 0xf8932u);
    push32(c, 0xf8937u); f_000e6c68(c); X86_RET(c, 0xf8937u);
    X86_TICK(c, 27);
    // 0f8937  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8937u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f893c  lea edx, [eax + eax*4]
    X86_AT(c, 0xf893cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f893f  lea edx, [eax + edx*2]
    X86_AT(c, 0xf893fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8942  shl edx, 5
    X86_AT(c, 0xf8942u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8945  sub edx, eax
    X86_AT(c, 0xf8945u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8947  add esp, 0x10
    X86_AT(c, 0xf8947u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f894a  cmp dword ptr [edx + 0xcde95], 1
    X86_AT(c, 0xf894au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE95u))), 0x1u, 0, 4);
    // 0f8951  jge 0xf8964
    X86_AT(c, 0xf8951u);
    if (x86_cc(c, 13)) { goto L_f8964; }
    X86_TICK(c, 9);
    // 0f8953  push 0
    X86_AT(c, 0xf8953u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f8955  call 0xe1944
    X86_AT(c, 0xf8955u);
    push32(c, 0xf895au); f_000e1944(c); X86_RET(c, 0xf895au);
    X86_TICK(c, 9);
    // 0f895a  push 0xa920
    X86_AT(c, 0xf895au);
    { uint32_t v = 0xA920u; push32(c, v); }
    // 0f895f  jmp 0xf89ee
    X86_AT(c, 0xf895fu);
    goto L_f89ee;
L_f8964:
    X86_TICK(c, 9);
    // 0f8964  push 7
    X86_AT(c, 0xf8964u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8966  call 0xe26c8
    X86_AT(c, 0xf8966u);
    push32(c, 0xf896bu); f_000e26c8(c); X86_RET(c, 0xf896bu);
    X86_TICK(c, 12);
    // 0f896b  xchg edi, eax
    X86_AT(c, 0xf896bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f896c  push 7
    X86_AT(c, 0xf896cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f896e  call 0xe693c
    X86_AT(c, 0xf896eu);
    push32(c, 0xf8973u); f_000e693c(c); X86_RET(c, 0xf8973u);
    X86_TICK(c, 9);
    // 0f8973  add esp, 8
    X86_AT(c, 0xf8973u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f8976  cmp edi, 0xffffffff
    X86_AT(c, 0xf8976u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0f8979  jne 0xf8996
    X86_AT(c, 0xf8979u);
    if (x86_cc(c, 5)) { goto L_f8996; }
    X86_TICK(c, 11);
    // 0f897b  push 0xa94c
    X86_AT(c, 0xf897bu);
    { uint32_t v = 0xA94Cu; push32(c, v); }
    // 0f8980  push 7
    X86_AT(c, 0xf8980u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8982  call 0xe5654
    X86_AT(c, 0xf8982u);
    push32(c, 0xf8987u); f_000e5654(c); X86_RET(c, 0xf8987u);
    X86_TICK(c, 9);
    // 0f8987  push 7
    X86_AT(c, 0xf8987u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8989  call 0xe6c68
    X86_AT(c, 0xf8989u);
    push32(c, 0xf898eu); f_000e6c68(c); X86_RET(c, 0xf898eu);
    X86_TICK(c, 9);
    // 0f898e  add esp, 0xc
    X86_AT(c, 0xf898eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f8991  jmp 0xf8a5b
    X86_AT(c, 0xf8991u);
    goto L_f8a5b;
L_f8996:
    X86_TICK(c, 9);
    // 0f8996  push 7
    X86_AT(c, 0xf8996u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8998  call 0xe6c68
    X86_AT(c, 0xf8998u);
    push32(c, 0xf899du); f_000e6c68(c); X86_RET(c, 0xf899du);
    X86_TICK(c, 44);
    // 0f899d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf899du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f89a2  lea edx, [eax + eax*4]
    X86_AT(c, 0xf89a2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f89a5  lea edx, [eax + edx*2]
    X86_AT(c, 0xf89a5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f89a8  shl edx, 5
    X86_AT(c, 0xf89a8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f89ab  sub edx, eax
    X86_AT(c, 0xf89abu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f89ad  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf89adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f89b3  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf89b3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f89b6  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf89b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f89bc  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf89bcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f89bf  push 1
    X86_AT(c, 0xf89bfu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f89c1  push edi
    X86_AT(c, 0xf89c1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f89c2  lea esi, [ebp - 8]
    X86_AT(c, 0xf89c2u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f89c5  push esi
    X86_AT(c, 0xf89c5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f89c6  lea eax, [ebp - 4]
    X86_AT(c, 0xf89c6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f89c9  push eax
    X86_AT(c, 0xf89c9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f89ca  call 0xeea58
    X86_AT(c, 0xf89cau);
    push32(c, 0xf89cfu); f_000eea58(c); X86_RET(c, 0xf89cfu);
    X86_TICK(c, 17);
    // 0f89cf  push dword ptr [esi]
    X86_AT(c, 0xf89cfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0f89d1  push dword ptr [ebp - 4]
    X86_AT(c, 0xf89d1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f89d4  call 0xef8ac
    X86_AT(c, 0xf89d4u);
    push32(c, 0xf89d9u); f_000ef8ac(c); X86_RET(c, 0xf89d9u);
    X86_TICK(c, 12);
    // 0f89d9  xchg ebx, eax
    X86_AT(c, 0xf89d9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f89da  add esp, 0x1c
    X86_AT(c, 0xf89dau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f89dd  cmp bl, 0xc
    X86_AT(c, 0xf89ddu);
    (void)x86_sub(c, g8(c, 3), 0xCu, 0, 1);
    // 0f89e0  je 0xf8a01
    X86_AT(c, 0xf89e0u);
    if (x86_cc(c, 4)) { goto L_f8a01; }
    X86_TICK(c, 9);
    // 0f89e2  push 1
    X86_AT(c, 0xf89e2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f89e4  call 0xe1944
    X86_AT(c, 0xf89e4u);
    push32(c, 0xf89e9u); f_000e1944(c); X86_RET(c, 0xf89e9u);
    X86_TICK(c, 2);
    // 0f89e9  push 0xa964
    X86_AT(c, 0xf89e9u);
    { uint32_t v = 0xA964u; push32(c, v); }
L_f89ee:
    X86_TICK(c, 9);
    // 0f89ee  push 7
    X86_AT(c, 0xf89eeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f89f0  call 0xe5654
    X86_AT(c, 0xf89f0u);
    push32(c, 0xf89f5u); f_000e5654(c); X86_RET(c, 0xf89f5u);
    X86_TICK(c, 9);
    // 0f89f5  push 7
    X86_AT(c, 0xf89f5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f89f7  call 0xe6c68
    X86_AT(c, 0xf89f7u);
    push32(c, 0xf89fcu); f_000e6c68(c); X86_RET(c, 0xf89fcu);
    X86_TICK(c, 9);
    // 0f89fc  add esp, 0x10
    X86_AT(c, 0xf89fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f89ff  jmp 0xf8a5b
    X86_AT(c, 0xf89ffu);
    goto L_f8a5b;
L_f8a01:
    X86_TICK(c, 28);
    // 0f8a01  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8a01u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8a06  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8a06u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8a09  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8a09u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8a0c  shl edx, 5
    X86_AT(c, 0xf8a0cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8a0f  sub edx, eax
    X86_AT(c, 0xf8a0fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8a11  dec dword ptr [edx + 0xcde95]
    X86_AT(c, 0xf8a11u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE95u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0f8a17  push 9
    X86_AT(c, 0xf8a17u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f8a19  call 0xe1944
    X86_AT(c, 0xf8a19u);
    push32(c, 0xf8a1eu); f_000e1944(c); X86_RET(c, 0xf8a1eu);
    X86_TICK(c, 9);
    // 0f8a1e  push 2
    X86_AT(c, 0xf8a1eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f8a20  call 0xe9740
    X86_AT(c, 0xf8a20u);
    push32(c, 0xf8a25u); f_000e9740(c); X86_RET(c, 0xf8a25u);
    X86_TICK(c, 47);
    // 0f8a25  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf8a25u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f8a28  shl eax, 6
    X86_AT(c, 0xf8a28u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0f8a2b  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xf8a2bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0f8a2e  mov byte ptr [eax + 0xbd578], 9
    X86_AT(c, 0xf8a2eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBD578u)), 0x9u);
    // 0f8a35  push 4
    X86_AT(c, 0xf8a35u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f8a37  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8a37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8a3c  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8a3cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8a3f  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8a3fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8a42  shl edx, 5
    X86_AT(c, 0xf8a42u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8a45  sub edx, eax
    X86_AT(c, 0xf8a45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8a47  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf8a47u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f8a4d  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf8a4du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f8a53  call 0xe7f60
    X86_AT(c, 0xf8a53u);
    push32(c, 0xf8a58u); f_000e7f60(c); X86_RET(c, 0xf8a58u);
    X86_TICK(c, 2);
    // 0f8a58  add esp, 0x14
    X86_AT(c, 0xf8a58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_f8a5b:
    X86_TICK(c, 28);
    // 0f8a5b  pop edi
    X86_AT(c, 0xf8a5bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f8a5c  pop esi
    X86_AT(c, 0xf8a5cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f8a5d  pop ebx
    X86_AT(c, 0xf8a5du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f8a5e  leave 
    X86_AT(c, 0xf8a5eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f8a5f  ret 
    X86_AT(c, 0xf8a5fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8914u, "ran off the end of a function");
}
void f_000f8a60(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0f8a60  push ebx
    X86_AT(c, 0xf8a60u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f8a61  push esi
    X86_AT(c, 0xf8a61u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8a62  push edi
    X86_AT(c, 0xf8a62u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8a63  push 7
    X86_AT(c, 0xf8a63u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8a65  call 0xe693c
    X86_AT(c, 0xf8a65u);
    push32(c, 0xf8a6au); f_000e693c(c); X86_RET(c, 0xf8a6au);
    X86_TICK(c, 11);
    // 0f8a6a  push 0xa994
    X86_AT(c, 0xf8a6au);
    { uint32_t v = 0xA994u; push32(c, v); }
    // 0f8a6f  push 7
    X86_AT(c, 0xf8a6fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8a71  call 0xe5654
    X86_AT(c, 0xf8a71u);
    push32(c, 0xf8a76u); f_000e5654(c); X86_RET(c, 0xf8a76u);
    X86_TICK(c, 9);
    // 0f8a76  push 7
    X86_AT(c, 0xf8a76u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8a78  call 0xe6c68
    X86_AT(c, 0xf8a78u);
    push32(c, 0xf8a7du); f_000e6c68(c); X86_RET(c, 0xf8a7du);
    X86_TICK(c, 30);
    // 0f8a7d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8a7du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8a82  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8a82u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8a85  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8a85u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8a88  shl edx, 5
    X86_AT(c, 0xf8a88u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8a8b  sub edx, eax
    X86_AT(c, 0xf8a8bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8a8d  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf8a8du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f8a93  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf8a93u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f8a99  call 0xef8ac
    X86_AT(c, 0xf8a99u);
    push32(c, 0xf8a9eu); f_000ef8ac(c); X86_RET(c, 0xf8a9eu);
    X86_TICK(c, 38);
    // 0f8a9e  xchg ebx, eax
    X86_AT(c, 0xf8a9eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f8a9f  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8a9fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8aa4  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8aa4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8aa7  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8aa7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8aaa  shl edx, 5
    X86_AT(c, 0xf8aaau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8aad  sub edx, eax
    X86_AT(c, 0xf8aadu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8aaf  mov edi, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf8aafu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f8ab5  mov esi, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf8ab5u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f8abb  add esp, 0x18
    X86_AT(c, 0xf8abbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f8abe  cmp dword ptr [edx + 0xcde56], 0xec
    X86_AT(c, 0xf8abeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0xECu, 0, 4);
    // 0f8ac8  jne 0xf8adb
    X86_AT(c, 0xf8ac8u);
    if (x86_cc(c, 5)) { goto L_f8adb; }
    X86_TICK(c, 9);
    // 0f8aca  push 1
    X86_AT(c, 0xf8acau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f8acc  call 0xe1944
    X86_AT(c, 0xf8accu);
    push32(c, 0xf8ad1u); f_000e1944(c); X86_RET(c, 0xf8ad1u);
    X86_TICK(c, 9);
    // 0f8ad1  push 0xa9a8
    X86_AT(c, 0xf8ad1u);
    { uint32_t v = 0xA9A8u; push32(c, v); }
    // 0f8ad6  jmp 0xf8c61
    X86_AT(c, 0xf8ad6u);
    goto L_f8c61;
L_f8adb:
    X86_TICK(c, 7);
    // 0f8adb  cmp bl, 2
    X86_AT(c, 0xf8adbu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0f8ade  je 0xf8ae5
    X86_AT(c, 0xf8adeu);
    if (x86_cc(c, 4)) { goto L_f8ae5; }
    X86_TICK(c, 7);
    // 0f8ae0  cmp bl, 9
    X86_AT(c, 0xf8ae0u);
    (void)x86_sub(c, g8(c, 3), 0x9u, 0, 1);
    // 0f8ae3  jne 0xf8b47
    X86_AT(c, 0xf8ae3u);
    if (x86_cc(c, 5)) { goto L_f8b47; }
L_f8ae5:
    X86_TICK(c, 25);
    // 0f8ae5  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8ae5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8aea  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8aeau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8aed  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8aedu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8af0  shl edx, 5
    X86_AT(c, 0xf8af0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8af3  sub edx, eax
    X86_AT(c, 0xf8af3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8af5  cmp dword ptr [edx + 0xcde56], 2
    X86_AT(c, 0xf8af5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x2u, 0, 4);
    // 0f8afc  jne 0xf8b47
    X86_AT(c, 0xf8afcu);
    if (x86_cc(c, 5)) { goto L_f8b47; }
    X86_TICK(c, 12);
    // 0f8afe  cmp dword ptr [0x7a5d0], 2
    X86_AT(c, 0xf8afeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A5D0u))), 0x2u, 0, 4);
    // 0f8b05  jne 0xf8b0d
    X86_AT(c, 0xf8b05u);
    if (x86_cc(c, 5)) { goto L_f8b0d; }
    X86_TICK(c, 13);
    // 0f8b07  push esi
    X86_AT(c, 0xf8b07u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8b08  push edi
    X86_AT(c, 0xf8b08u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8b09  push 0x71
    X86_AT(c, 0xf8b09u);
    { uint32_t v = 0x71u; push32(c, v); }
    // 0f8b0b  jmp 0xf8b11
    X86_AT(c, 0xf8b0bu);
    goto L_f8b11;
L_f8b0d:
    X86_TICK(c, 6);
    // 0f8b0d  push esi
    X86_AT(c, 0xf8b0du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8b0e  push edi
    X86_AT(c, 0xf8b0eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8b0f  push 0x6f
    X86_AT(c, 0xf8b0fu);
    { uint32_t v = 0x6Fu; push32(c, v); }
L_f8b11:
    X86_TICK(c, 7);
    // 0f8b11  call 0xf3c24
    X86_AT(c, 0xf8b11u);
    push32(c, 0xf8b16u); f_000f3c24(c); X86_RET(c, 0xf8b16u);
    X86_TICK(c, 24);
    // 0f8b16  add esp, 0xc
    X86_AT(c, 0xf8b16u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f8b19  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8b19u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8b1e  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8b1eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8b21  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8b21u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8b24  shl edx, 5
    X86_AT(c, 0xf8b24u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8b27  sub edx, eax
    X86_AT(c, 0xf8b27u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8b29  mov dword ptr [edx + 0xcde56], 0xec
    X86_AT(c, 0xf8b29u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u)), 0xECu);
    // 0f8b33  call 0xe2c18
    X86_AT(c, 0xf8b33u);
    push32(c, 0xf8b38u); f_000e2c18(c); X86_RET(c, 0xf8b38u);
    X86_TICK(c, 9);
    // 0f8b38  mov dword ptr [0xd4a44], 2
    X86_AT(c, 0xf8b38u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A44u)), 0x2u);
    // 0f8b42  jmp 0xf8c72
    X86_AT(c, 0xf8b42u);
    goto L_f8c72;
L_f8b47:
    X86_TICK(c, 7);
    // 0f8b47  cmp bl, 1
    X86_AT(c, 0xf8b47u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f8b4a  jne 0xf8bae
    X86_AT(c, 0xf8b4au);
    if (x86_cc(c, 5)) { goto L_f8bae; }
    X86_TICK(c, 25);
    // 0f8b4c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8b4cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8b51  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8b51u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8b54  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8b54u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8b57  shl edx, 5
    X86_AT(c, 0xf8b57u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8b5a  sub edx, eax
    X86_AT(c, 0xf8b5au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8b5c  cmp dword ptr [edx + 0xcde56], 1
    X86_AT(c, 0xf8b5cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x1u, 0, 4);
    // 0f8b63  jne 0xf8bae
    X86_AT(c, 0xf8b63u);
    if (x86_cc(c, 5)) { goto L_f8bae; }
    X86_TICK(c, 12);
    // 0f8b65  cmp dword ptr [0x7a5d0], 2
    X86_AT(c, 0xf8b65u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A5D0u))), 0x2u, 0, 4);
    // 0f8b6c  jne 0xf8b74
    X86_AT(c, 0xf8b6cu);
    if (x86_cc(c, 5)) { goto L_f8b74; }
    X86_TICK(c, 13);
    // 0f8b6e  push esi
    X86_AT(c, 0xf8b6eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8b6f  push edi
    X86_AT(c, 0xf8b6fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8b70  push 0x75
    X86_AT(c, 0xf8b70u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0f8b72  jmp 0xf8b78
    X86_AT(c, 0xf8b72u);
    goto L_f8b78;
L_f8b74:
    X86_TICK(c, 6);
    // 0f8b74  push esi
    X86_AT(c, 0xf8b74u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8b75  push edi
    X86_AT(c, 0xf8b75u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8b76  push 0x73
    X86_AT(c, 0xf8b76u);
    { uint32_t v = 0x73u; push32(c, v); }
L_f8b78:
    X86_TICK(c, 7);
    // 0f8b78  call 0xf3c24
    X86_AT(c, 0xf8b78u);
    push32(c, 0xf8b7du); f_000f3c24(c); X86_RET(c, 0xf8b7du);
    X86_TICK(c, 24);
    // 0f8b7d  add esp, 0xc
    X86_AT(c, 0xf8b7du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f8b80  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8b80u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8b85  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8b85u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8b88  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8b88u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8b8b  shl edx, 5
    X86_AT(c, 0xf8b8bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8b8e  sub edx, eax
    X86_AT(c, 0xf8b8eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8b90  mov dword ptr [edx + 0xcde56], 0xec
    X86_AT(c, 0xf8b90u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u)), 0xECu);
    // 0f8b9a  call 0xe2c18
    X86_AT(c, 0xf8b9au);
    push32(c, 0xf8b9fu); f_000e2c18(c); X86_RET(c, 0xf8b9fu);
    X86_TICK(c, 9);
    // 0f8b9f  mov dword ptr [0xd4a44], 1
    X86_AT(c, 0xf8b9fu);
    wr32((c.sbase[3] + (uint32_t)(0xD4A44u)), 0x1u);
    // 0f8ba9  jmp 0xf8c72
    X86_AT(c, 0xf8ba9u);
    goto L_f8c72;
L_f8bae:
    X86_TICK(c, 7);
    // 0f8bae  cmp bl, 2
    X86_AT(c, 0xf8baeu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0f8bb1  je 0xf8bb8
    X86_AT(c, 0xf8bb1u);
    if (x86_cc(c, 4)) { goto L_f8bb8; }
    X86_TICK(c, 7);
    // 0f8bb3  cmp bl, 9
    X86_AT(c, 0xf8bb3u);
    (void)x86_sub(c, g8(c, 3), 0x9u, 0, 1);
    // 0f8bb6  jne 0xf8c08
    X86_AT(c, 0xf8bb6u);
    if (x86_cc(c, 5)) { goto L_f8c08; }
L_f8bb8:
    X86_TICK(c, 25);
    // 0f8bb8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8bb8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8bbd  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8bbdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8bc0  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8bc0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8bc3  shl edx, 5
    X86_AT(c, 0xf8bc3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8bc6  sub edx, eax
    X86_AT(c, 0xf8bc6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8bc8  cmp dword ptr [edx + 0xcde56], 3
    X86_AT(c, 0xf8bc8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x3u, 0, 4);
    // 0f8bcf  jne 0xf8c08
    X86_AT(c, 0xf8bcfu);
    if (x86_cc(c, 5)) { goto L_f8c08; }
    X86_TICK(c, 13);
    // 0f8bd1  push esi
    X86_AT(c, 0xf8bd1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8bd2  push edi
    X86_AT(c, 0xf8bd2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8bd3  push 0x194
    X86_AT(c, 0xf8bd3u);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f8bd8  call 0xf3c24
    X86_AT(c, 0xf8bd8u);
    push32(c, 0xf8bddu); f_000f3c24(c); X86_RET(c, 0xf8bddu);
    X86_TICK(c, 22);
    // 0f8bdd  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8bddu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8be2  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8be2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8be5  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8be5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8be8  shl edx, 5
    X86_AT(c, 0xf8be8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8beb  sub edx, eax
    X86_AT(c, 0xf8bebu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8bed  mov dword ptr [edx + 0xcde56], 0xec
    X86_AT(c, 0xf8bedu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u)), 0xECu);
    // 0f8bf7  call 0xe2c18
    X86_AT(c, 0xf8bf7u);
    push32(c, 0xf8bfcu); f_000e2c18(c); X86_RET(c, 0xf8bfcu);
    X86_TICK(c, 9);
    // 0f8bfc  mov dword ptr [0xd4a44], 3
    X86_AT(c, 0xf8bfcu);
    wr32((c.sbase[3] + (uint32_t)(0xD4A44u)), 0x3u);
    // 0f8c06  jmp 0xf8c50
    X86_AT(c, 0xf8c06u);
    goto L_f8c50;
L_f8c08:
    X86_TICK(c, 7);
    // 0f8c08  cmp bl, 2
    X86_AT(c, 0xf8c08u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0f8c0b  je 0xf8c12
    X86_AT(c, 0xf8c0bu);
    if (x86_cc(c, 4)) { goto L_f8c12; }
    X86_TICK(c, 7);
    // 0f8c0d  cmp bl, 9
    X86_AT(c, 0xf8c0du);
    (void)x86_sub(c, g8(c, 3), 0x9u, 0, 1);
    // 0f8c10  jne 0xf8c55
    X86_AT(c, 0xf8c10u);
    if (x86_cc(c, 5)) { goto L_f8c55; }
L_f8c12:
    X86_TICK(c, 25);
    // 0f8c12  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8c12u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8c17  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8c17u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8c1a  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8c1au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8c1d  shl edx, 5
    X86_AT(c, 0xf8c1du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8c20  sub edx, eax
    X86_AT(c, 0xf8c20u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8c22  cmp dword ptr [edx + 0xcde56], 4
    X86_AT(c, 0xf8c22u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x4u, 0, 4);
    // 0f8c29  jne 0xf8c55
    X86_AT(c, 0xf8c29u);
    if (x86_cc(c, 5)) { goto L_f8c55; }
    X86_TICK(c, 15);
    // 0f8c2b  mov dword ptr [edx + 0xcde56], 0xec
    X86_AT(c, 0xf8c2bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u)), 0xECu);
    // 0f8c35  push esi
    X86_AT(c, 0xf8c35u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8c36  push edi
    X86_AT(c, 0xf8c36u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8c37  push 0x196
    X86_AT(c, 0xf8c37u);
    { uint32_t v = 0x196u; push32(c, v); }
    // 0f8c3c  call 0xf3c24
    X86_AT(c, 0xf8c3cu);
    push32(c, 0xf8c41u); f_000f3c24(c); X86_RET(c, 0xf8c41u);
    X86_TICK(c, 7);
    // 0f8c41  call 0xe2c18
    X86_AT(c, 0xf8c41u);
    push32(c, 0xf8c46u); f_000e2c18(c); X86_RET(c, 0xf8c46u);
    X86_TICK(c, 2);
    // 0f8c46  mov dword ptr [0xd4a44], 4
    X86_AT(c, 0xf8c46u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A44u)), 0x4u);
L_f8c50:
    X86_TICK(c, 9);
    // 0f8c50  add esp, 0xc
    X86_AT(c, 0xf8c50u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f8c53  jmp 0xf8c72
    X86_AT(c, 0xf8c53u);
    goto L_f8c72;
L_f8c55:
    X86_TICK(c, 9);
    // 0f8c55  push 3
    X86_AT(c, 0xf8c55u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f8c57  call 0xe1944
    X86_AT(c, 0xf8c57u);
    push32(c, 0xf8c5cu); f_000e1944(c); X86_RET(c, 0xf8c5cu);
    X86_TICK(c, 2);
    // 0f8c5c  push 0xa9c8
    X86_AT(c, 0xf8c5cu);
    { uint32_t v = 0xA9C8u; push32(c, v); }
L_f8c61:
    X86_TICK(c, 9);
    // 0f8c61  push 7
    X86_AT(c, 0xf8c61u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8c63  call 0xe5654
    X86_AT(c, 0xf8c63u);
    push32(c, 0xf8c68u); f_000e5654(c); X86_RET(c, 0xf8c68u);
    X86_TICK(c, 9);
    // 0f8c68  push 7
    X86_AT(c, 0xf8c68u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8c6a  call 0xe6c68
    X86_AT(c, 0xf8c6au);
    push32(c, 0xf8c6fu); f_000e6c68(c); X86_RET(c, 0xf8c6fu);
    X86_TICK(c, 2);
    // 0f8c6f  add esp, 0x10
    X86_AT(c, 0xf8c6fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f8c72:
    X86_TICK(c, 22);
    // 0f8c72  pop edi
    X86_AT(c, 0xf8c72u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f8c73  pop esi
    X86_AT(c, 0xf8c73u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f8c74  pop ebx
    X86_AT(c, 0xf8c74u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f8c75  ret 
    X86_AT(c, 0xf8c75u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8a60u, "ran off the end of a function");
}
void f_000f8c72(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0f8c72  pop edi
    X86_AT(c, 0xf8c72u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f8c73  pop esi
    X86_AT(c, 0xf8c73u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f8c74  pop ebx
    X86_AT(c, 0xf8c74u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f8c75  ret 
    X86_AT(c, 0xf8c75u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8c72u, "ran off the end of a function");
}
void f_000f8c78(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f8c78  push 7
    X86_AT(c, 0xf8c78u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8c7a  call 0xe693c
    X86_AT(c, 0xf8c7au);
    push32(c, 0xf8c7fu); f_000e693c(c); X86_RET(c, 0xf8c7fu);
    X86_TICK(c, 11);
    // 0f8c7f  push 0xa9f0
    X86_AT(c, 0xf8c7fu);
    { uint32_t v = 0xA9F0u; push32(c, v); }
    // 0f8c84  push 7
    X86_AT(c, 0xf8c84u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8c86  call 0xe5654
    X86_AT(c, 0xf8c86u);
    push32(c, 0xf8c8bu); f_000e5654(c); X86_RET(c, 0xf8c8bu);
    X86_TICK(c, 9);
    // 0f8c8b  push 7
    X86_AT(c, 0xf8c8bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f8c8d  call 0xe6c68
    X86_AT(c, 0xf8c8du);
    push32(c, 0xf8c92u); f_000e6c68(c); X86_RET(c, 0xf8c92u);
    X86_TICK(c, 7);
    // 0f8c92  call 0xefff8
    X86_AT(c, 0xf8c92u);
    push32(c, 0xf8c97u); f_000efff8(c); X86_RET(c, 0xf8c97u);
    X86_TICK(c, 12);
    // 0f8c97  add esp, 0x10
    X86_AT(c, 0xf8c97u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f8c9a  ret 
    X86_AT(c, 0xf8c9au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8c78u, "ran off the end of a function");
}
void f_000f8c9c(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0f8c9c  push ebp
    X86_AT(c, 0xf8c9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f8c9d  mov ebp, esp
    X86_AT(c, 0xf8c9du);
    c.r[5] = c.r[4];
    // 0f8c9f  push eax
    X86_AT(c, 0xf8c9fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f8ca0  push ebx
    X86_AT(c, 0xf8ca0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f8ca1  push esi
    X86_AT(c, 0xf8ca1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8ca2  push edi
    X86_AT(c, 0xf8ca2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8ca3  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf8ca3u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f8ca6  mov esi, dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xf8ca6u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)));
    // 0f8cad  mov eax, dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xf8cadu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)));
    // 0f8cb4  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf8cb4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f8cb7  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xf8cb7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8cbd  lea ecx, [edx + edx*4]
    X86_AT(c, 0xf8cbdu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0f8cc0  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xf8cc0u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0f8cc3  shl ecx, 5
    X86_AT(c, 0xf8cc3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0f8cc6  sub ecx, edx
    X86_AT(c, 0xf8cc6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f8cc8  cmp esi, dword ptr [ecx + 0xcdf6b]
    X86_AT(c, 0xf8cc8u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDF6Bu))), 0, 4);
    // 0f8cce  jne 0xf8cdc
    X86_AT(c, 0xf8cceu);
    if (x86_cc(c, 5)) { goto L_f8cdc; }
    X86_TICK(c, 11);
    // 0f8cd0  cmp eax, dword ptr [ecx + 0xcdf6f]
    X86_AT(c, 0xf8cd0u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDF6Fu))), 0, 4);
    // 0f8cd6  je 0xf8d41
    X86_AT(c, 0xf8cd6u);
    if (x86_cc(c, 4)) { goto L_f8d41; }
L_f8cdc:
    X86_TICK(c, 14);
    // 0f8cdc  push dword ptr [ebp - 4]
    X86_AT(c, 0xf8cdcu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f8cdf  push esi
    X86_AT(c, 0xf8cdfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8ce0  call 0xef920
    X86_AT(c, 0xf8ce0u);
    push32(c, 0xf8ce5u); f_000ef920(c); X86_RET(c, 0xf8ce5u);
    X86_TICK(c, 9);
    // 0f8ce5  add esp, 8
    X86_AT(c, 0xf8ce5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f8ce8  and eax, eax
    X86_AT(c, 0xf8ce8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f8cea  jne 0xf8d41
    X86_AT(c, 0xf8ceau);
    if (x86_cc(c, 5)) { goto L_f8d41; }
    X86_TICK(c, 14);
    // 0f8cf0  push dword ptr [ebp - 4]
    X86_AT(c, 0xf8cf0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f8cf3  push esi
    X86_AT(c, 0xf8cf3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8cf4  call 0xef8f4
    X86_AT(c, 0xf8cf4u);
    push32(c, 0xf8cf9u); f_000ef8f4(c); X86_RET(c, 0xf8cf9u);
    X86_TICK(c, 16);
    // 0f8cf9  xchg ebx, eax
    X86_AT(c, 0xf8cf9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f8cfa  add esp, 8
    X86_AT(c, 0xf8cfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f8cfd  mov al, byte ptr [edi + 0xce3c8]
    X86_AT(c, 0xf8cfdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u))));
    // 0f8d03  cmp al, 0x2c
    X86_AT(c, 0xf8d03u);
    (void)x86_sub(c, g8(c, 0), 0x2Cu, 0, 1);
    // 0f8d05  je 0xf8d0b
    X86_AT(c, 0xf8d05u);
    if (x86_cc(c, 4)) { goto L_f8d0b; }
    X86_TICK(c, 7);
    // 0f8d07  cmp al, 0x48
    X86_AT(c, 0xf8d07u);
    (void)x86_sub(c, g8(c, 0), 0x48u, 0, 1);
    // 0f8d09  jne 0xf8d21
    X86_AT(c, 0xf8d09u);
    if (x86_cc(c, 5)) { goto L_f8d21; }
L_f8d0b:
    X86_TICK(c, 7);
    // 0f8d0b  cmp bl, 1
    X86_AT(c, 0xf8d0bu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f8d0e  je 0xf8d3d
    X86_AT(c, 0xf8d0eu);
    if (x86_cc(c, 4)) { goto L_f8d3d; }
    X86_TICK(c, 7);
    // 0f8d10  cmp bl, 0xa
    X86_AT(c, 0xf8d10u);
    (void)x86_sub(c, g8(c, 3), 0xAu, 0, 1);
    // 0f8d13  je 0xf8d3d
    X86_AT(c, 0xf8d13u);
    if (x86_cc(c, 4)) { goto L_f8d3d; }
    X86_TICK(c, 7);
    // 0f8d15  cmp bl, 0x12
    X86_AT(c, 0xf8d15u);
    (void)x86_sub(c, g8(c, 3), 0x12u, 0, 1);
    // 0f8d18  jb 0xf8d41
    X86_AT(c, 0xf8d18u);
    if (x86_cc(c, 2)) { goto L_f8d41; }
    X86_TICK(c, 7);
    // 0f8d1a  cmp bl, 0x21
    X86_AT(c, 0xf8d1au);
    (void)x86_sub(c, g8(c, 3), 0x21u, 0, 1);
    // 0f8d1d  jae 0xf8d41
    X86_AT(c, 0xf8d1du);
    if (x86_cc(c, 3)) { goto L_f8d41; }
    X86_TICK(c, 7);
    // 0f8d1f  jmp 0xf8d3d
    X86_AT(c, 0xf8d1fu);
    goto L_f8d3d;
L_f8d21:
    X86_TICK(c, 10);
    // 0f8d21  movzx edx, bl
    X86_AT(c, 0xf8d21u);
    c.r[2] = g8(c, 3);
    // 0f8d24  cmp edx, 2
    X86_AT(c, 0xf8d24u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0f8d27  je 0xf8d3d
    X86_AT(c, 0xf8d27u);
    if (x86_cc(c, 4)) { goto L_f8d3d; }
    X86_TICK(c, 7);
    // 0f8d29  cmp edx, 3
    X86_AT(c, 0xf8d29u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0f8d2c  je 0xf8d3d
    X86_AT(c, 0xf8d2cu);
    if (x86_cc(c, 4)) { goto L_f8d3d; }
    X86_TICK(c, 7);
    // 0f8d2e  cmp edx, 4
    X86_AT(c, 0xf8d2eu);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0f8d31  je 0xf8d3d
    X86_AT(c, 0xf8d31u);
    if (x86_cc(c, 4)) { goto L_f8d3d; }
    X86_TICK(c, 7);
    // 0f8d33  cmp edx, 9
    X86_AT(c, 0xf8d33u);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0f8d36  je 0xf8d3d
    X86_AT(c, 0xf8d36u);
    if (x86_cc(c, 4)) { goto L_f8d3d; }
    X86_TICK(c, 7);
    // 0f8d38  cmp edx, 0x21
    X86_AT(c, 0xf8d38u);
    (void)x86_sub(c, c.r[2], 0x21u, 0, 4);
    // 0f8d3b  jne 0xf8d41
    X86_AT(c, 0xf8d3bu);
    if (x86_cc(c, 5)) { goto L_f8d41; }
L_f8d3d:
    X86_TICK(c, 9);
    // 0f8d3d  sub eax, eax
    X86_AT(c, 0xf8d3du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8d3f  jmp 0xf8d46
    X86_AT(c, 0xf8d3fu);
    goto L_f8d46;
L_f8d41:
    X86_TICK(c, 2);
    // 0f8d41  mov eax, 0xffffffff
    X86_AT(c, 0xf8d41u);
    c.r[0] = 0xFFFFFFFFu;
L_f8d46:
    X86_TICK(c, 28);
    // 0f8d46  pop edi
    X86_AT(c, 0xf8d46u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f8d47  pop esi
    X86_AT(c, 0xf8d47u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f8d48  pop ebx
    X86_AT(c, 0xf8d48u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f8d49  leave 
    X86_AT(c, 0xf8d49u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f8d4a  ret 
    X86_AT(c, 0xf8d4au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8c9cu, "ran off the end of a function");
}
void f_000f8d4c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0f8d4c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8d4cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8d51  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8d51u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8d54  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8d54u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8d57  shl edx, 5
    X86_AT(c, 0xf8d57u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8d5a  sub edx, eax
    X86_AT(c, 0xf8d5au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8d5c  cmp dword ptr [edx + 0xcde56], 0xec
    X86_AT(c, 0xf8d5cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0xECu, 0, 4);
    // 0f8d66  je 0xf8d96
    X86_AT(c, 0xf8d66u);
    if (x86_cc(c, 4)) { goto L_f8d96; }
    X86_TICK(c, 11);
    // 0f8d68  mov al, byte ptr [0xd460c]
    X86_AT(c, 0xf8d68u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD460Cu))));
    // 0f8d6d  cmp al, 5
    X86_AT(c, 0xf8d6du);
    (void)x86_sub(c, g8(c, 0), 0x5u, 0, 1);
    // 0f8d6f  je 0xf8d81
    X86_AT(c, 0xf8d6fu);
    if (x86_cc(c, 4)) { goto L_f8d81; }
    X86_TICK(c, 7);
    // 0f8d71  cmp al, 6
    X86_AT(c, 0xf8d71u);
    (void)x86_sub(c, g8(c, 0), 0x6u, 0, 1);
    // 0f8d73  je 0xf8d81
    X86_AT(c, 0xf8d73u);
    if (x86_cc(c, 4)) { goto L_f8d81; }
    X86_TICK(c, 7);
    // 0f8d75  cmp al, 3
    X86_AT(c, 0xf8d75u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0f8d77  je 0xf8d81
    X86_AT(c, 0xf8d77u);
    if (x86_cc(c, 4)) { goto L_f8d81; }
    X86_TICK(c, 7);
    // 0f8d79  cmp al, 7
    X86_AT(c, 0xf8d79u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 0f8d7b  je 0xf8d81
    X86_AT(c, 0xf8d7bu);
    if (x86_cc(c, 4)) { goto L_f8d81; }
    X86_TICK(c, 7);
    // 0f8d7d  cmp al, 0x41
    X86_AT(c, 0xf8d7du);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0f8d7f  jne 0xf8da0
    X86_AT(c, 0xf8d7fu);
    if (x86_cc(c, 5)) { goto L_f8da0; }
L_f8d81:
    X86_TICK(c, 12);
    // 0f8d81  cmp dword ptr [0xd4600], 0
    X86_AT(c, 0xf8d81u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4600u))), 0x0u, 0, 4);
    // 0f8d88  jne 0xf8d96
    X86_AT(c, 0xf8d88u);
    if (x86_cc(c, 5)) { goto L_f8d96; }
    X86_TICK(c, 9);
    // 0f8d8a  mov dword ptr [0xd4600], 1
    X86_AT(c, 0xf8d8au);
    wr32((c.sbase[3] + (uint32_t)(0xD4600u)), 0x1u);
    // 0f8d94  jmp 0xf8da0
    X86_AT(c, 0xf8d94u);
    goto L_f8da0;
L_f8d96:
    X86_TICK(c, 2);
    // 0f8d96  mov dword ptr [0xd4600], 0
    X86_AT(c, 0xf8d96u);
    wr32((c.sbase[3] + (uint32_t)(0xD4600u)), 0x0u);
L_f8da0:
    X86_TICK(c, 12);
    // 0f8da0  cmp dword ptr [0xd1424], 0
    X86_AT(c, 0xf8da0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD1424u))), 0x0u, 0, 4);
    // 0f8da7  jne 0xf8dbc
    X86_AT(c, 0xf8da7u);
    if (x86_cc(c, 5)) { goto L_f8dbc; }
    X86_TICK(c, 12);
    // 0f8da9  cmp dword ptr [0xd4600], 0
    X86_AT(c, 0xf8da9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4600u))), 0x0u, 0, 4);
    // 0f8db0  jne 0xf8dbc
    X86_AT(c, 0xf8db0u);
    if (x86_cc(c, 5)) { goto L_f8dbc; }
    X86_TICK(c, 7);
    // 0f8db2  call 0xf931c
    X86_AT(c, 0xf8db2u);
    push32(c, 0xf8db7u); f_000f931c(c); X86_RET(c, 0xf8db7u);
    X86_TICK(c, 7);
    // 0f8db7  call 0xf91ac
    X86_AT(c, 0xf8db7u);
    push32(c, 0xf8dbcu); f_000f91ac(c); X86_RET(c, 0xf8dbcu);
L_f8dbc:
    X86_TICK(c, 11);
    // 0f8dbc  mov eax, dword ptr [0xd1424]
    X86_AT(c, 0xf8dbcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD1424u)));
    // 0f8dc1  and eax, eax
    X86_AT(c, 0xf8dc1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f8dc3  jle 0xf8dcb
    X86_AT(c, 0xf8dc3u);
    if (x86_cc(c, 14)) { goto L_f8dcb; }
    X86_TICK(c, 6);
    // 0f8dc5  dec dword ptr [0xd1424]
    X86_AT(c, 0xf8dc5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xD1424u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_f8dcb:
    X86_TICK(c, 9);
    // 0f8dcb  push 0
    X86_AT(c, 0xf8dcbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f8dcd  call 0xe1a9c
    X86_AT(c, 0xf8dcdu);
    push32(c, 0xf8dd2u); f_000e1a9c(c); X86_RET(c, 0xf8dd2u);
    X86_TICK(c, 12);
    // 0f8dd2  add esp, 4
    X86_AT(c, 0xf8dd2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f8dd5  ret 
    X86_AT(c, 0xf8dd5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8d4cu, "ran off the end of a function");
}
void f_000f8dd8(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0f8dd8  push ebp
    X86_AT(c, 0xf8dd8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f8dd9  mov ebp, esp
    X86_AT(c, 0xf8dd9u);
    c.r[5] = c.r[4];
    // 0f8ddb  push esi
    X86_AT(c, 0xf8ddbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8ddc  push edi
    X86_AT(c, 0xf8ddcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8ddd  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xf8dddu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0f8de0  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xf8de0u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0f8de3  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8de3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8de8  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8de8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8deb  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8debu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8dee  shl edx, 5
    X86_AT(c, 0xf8deeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8df1  sub edx, eax
    X86_AT(c, 0xf8df1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8df3  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xf8df3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f8df6  mov ecx, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf8df6u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f8dfc  sub ecx, dword ptr [eax*4 + 0xce408]
    X86_AT(c, 0xf8dfcu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xCE408u))), 0, 4); }
    // 0f8e03  and ecx, ecx
    X86_AT(c, 0xf8e03u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0f8e05  jge 0xf8e19
    X86_AT(c, 0xf8e05u);
    if (x86_cc(c, 13)) { goto L_f8e19; }
    X86_TICK(c, 9);
    // 0f8e07  neg ecx
    X86_AT(c, 0xf8e07u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 0f8e09  cmp ecx, 3
    X86_AT(c, 0xf8e09u);
    (void)x86_sub(c, c.r[1], 0x3u, 0, 4);
    // 0f8e0c  jle 0xf8e30
    X86_AT(c, 0xf8e0cu);
    if (x86_cc(c, 14)) { goto L_f8e30; }
    X86_TICK(c, 7);
    // 0f8e0e  cmp ecx, 0x3d
    X86_AT(c, 0xf8e0eu);
    (void)x86_sub(c, c.r[1], 0x3Du, 0, 4);
    // 0f8e11  jge 0xf8e93
    X86_AT(c, 0xf8e11u);
    if (x86_cc(c, 13)) { goto L_f8e93; }
    X86_TICK(c, 7);
    // 0f8e17  jmp 0xf8e1e
    X86_AT(c, 0xf8e17u);
    goto L_f8e1e;
L_f8e19:
    X86_TICK(c, 7);
    // 0f8e19  cmp ecx, 3
    X86_AT(c, 0xf8e19u);
    (void)x86_sub(c, c.r[1], 0x3u, 0, 4);
    // 0f8e1c  jg 0xf8e27
    X86_AT(c, 0xf8e1cu);
    if (x86_cc(c, 15)) { goto L_f8e27; }
L_f8e1e:
    X86_TICK(c, 11);
    // 0f8e1e  mov eax, 5
    X86_AT(c, 0xf8e1eu);
    c.r[0] = 0x5u;
    // 0f8e23  sub eax, ecx
    X86_AT(c, 0xf8e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0f8e25  jmp 0xf8e33
    X86_AT(c, 0xf8e25u);
    goto L_f8e33;
L_f8e27:
    X86_TICK(c, 7);
    // 0f8e27  cmp ecx, 0x3d
    X86_AT(c, 0xf8e27u);
    (void)x86_sub(c, c.r[1], 0x3Du, 0, 4);
    // 0f8e2a  jge 0xf8e93
    X86_AT(c, 0xf8e2au);
    if (x86_cc(c, 13)) { goto L_f8e93; }
L_f8e30:
    X86_TICK(c, 2);
    // 0f8e30  lea eax, [ecx + 5]
    X86_AT(c, 0xf8e30u);
    c.r[0] = (uint32_t)(c.r[1] + 0x5u);
L_f8e33:
    X86_TICK(c, 9);
    // 0f8e33  mov dword ptr [edi], eax
    X86_AT(c, 0xf8e33u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0f8e35  cmp ecx, 3
    X86_AT(c, 0xf8e35u);
    (void)x86_sub(c, c.r[1], 0x3u, 0, 4);
    // 0f8e38  jle 0xf8e3f
    X86_AT(c, 0xf8e38u);
    if (x86_cc(c, 14)) { goto L_f8e3f; }
    X86_TICK(c, 7);
    // 0f8e3a  cmp ecx, 0x3d
    X86_AT(c, 0xf8e3au);
    (void)x86_sub(c, c.r[1], 0x3Du, 0, 4);
    // 0f8e3d  jl 0xf8e93
    X86_AT(c, 0xf8e3du);
    if (x86_cc(c, 12)) { goto L_f8e93; }
L_f8e3f:
    X86_TICK(c, 34);
    // 0f8e3f  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8e3fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8e44  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8e44u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8e47  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8e47u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8e4a  shl edx, 5
    X86_AT(c, 0xf8e4au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8e4d  sub edx, eax
    X86_AT(c, 0xf8e4du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8e4f  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xf8e4fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f8e52  mov ecx, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf8e52u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f8e58  sub ecx, dword ptr [eax*4 + 0xce488]
    X86_AT(c, 0xf8e58u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xCE488u))), 0, 4); }
    // 0f8e5f  and ecx, ecx
    X86_AT(c, 0xf8e5fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0f8e61  jge 0xf8e71
    X86_AT(c, 0xf8e61u);
    if (x86_cc(c, 13)) { goto L_f8e71; }
    X86_TICK(c, 9);
    // 0f8e63  neg ecx
    X86_AT(c, 0xf8e63u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 0f8e65  cmp ecx, 3
    X86_AT(c, 0xf8e65u);
    (void)x86_sub(c, c.r[1], 0x3u, 0, 4);
    // 0f8e68  jle 0xf8e84
    X86_AT(c, 0xf8e68u);
    if (x86_cc(c, 14)) { goto L_f8e84; }
    X86_TICK(c, 7);
    // 0f8e6a  cmp ecx, 0x3d
    X86_AT(c, 0xf8e6au);
    (void)x86_sub(c, c.r[1], 0x3Du, 0, 4);
    // 0f8e6d  jge 0xf8e93
    X86_AT(c, 0xf8e6du);
    if (x86_cc(c, 13)) { goto L_f8e93; }
    X86_TICK(c, 7);
    // 0f8e6f  jmp 0xf8e76
    X86_AT(c, 0xf8e6fu);
    goto L_f8e76;
L_f8e71:
    X86_TICK(c, 7);
    // 0f8e71  cmp ecx, 3
    X86_AT(c, 0xf8e71u);
    (void)x86_sub(c, c.r[1], 0x3u, 0, 4);
    // 0f8e74  jg 0xf8e7f
    X86_AT(c, 0xf8e74u);
    if (x86_cc(c, 15)) { goto L_f8e7f; }
L_f8e76:
    X86_TICK(c, 11);
    // 0f8e76  mov eax, 5
    X86_AT(c, 0xf8e76u);
    c.r[0] = 0x5u;
    // 0f8e7b  sub eax, ecx
    X86_AT(c, 0xf8e7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0f8e7d  jmp 0xf8e87
    X86_AT(c, 0xf8e7du);
    goto L_f8e87;
L_f8e7f:
    X86_TICK(c, 7);
    // 0f8e7f  cmp ecx, 0x3d
    X86_AT(c, 0xf8e7fu);
    (void)x86_sub(c, c.r[1], 0x3Du, 0, 4);
    // 0f8e82  jge 0xf8e93
    X86_AT(c, 0xf8e82u);
    if (x86_cc(c, 13)) { goto L_f8e93; }
L_f8e84:
    X86_TICK(c, 2);
    // 0f8e84  lea eax, [ecx + 5]
    X86_AT(c, 0xf8e84u);
    c.r[0] = (uint32_t)(c.r[1] + 0x5u);
L_f8e87:
    X86_TICK(c, 9);
    // 0f8e87  mov dword ptr [esi], eax
    X86_AT(c, 0xf8e87u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0f8e89  cmp ecx, 3
    X86_AT(c, 0xf8e89u);
    (void)x86_sub(c, c.r[1], 0x3u, 0, 4);
    // 0f8e8c  jle 0xf8e9a
    X86_AT(c, 0xf8e8cu);
    if (x86_cc(c, 14)) { goto L_f8e9a; }
    X86_TICK(c, 7);
    // 0f8e8e  cmp ecx, 0x3d
    X86_AT(c, 0xf8e8eu);
    (void)x86_sub(c, c.r[1], 0x3Du, 0, 4);
    // 0f8e91  jge 0xf8e9a
    X86_AT(c, 0xf8e91u);
    if (x86_cc(c, 13)) { goto L_f8e9a; }
L_f8e93:
    X86_TICK(c, 9);
    // 0f8e93  mov eax, 0xffffffff
    X86_AT(c, 0xf8e93u);
    c.r[0] = 0xFFFFFFFFu;
    // 0f8e98  jmp 0xf8e9c
    X86_AT(c, 0xf8e98u);
    goto L_f8e9c;
L_f8e9a:
    X86_TICK(c, 2);
    // 0f8e9a  sub eax, eax
    X86_AT(c, 0xf8e9au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_f8e9c:
    X86_TICK(c, 24);
    // 0f8e9c  pop edi
    X86_AT(c, 0xf8e9cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f8e9d  pop esi
    X86_AT(c, 0xf8e9du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f8e9e  leave 
    X86_AT(c, 0xf8e9eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f8e9f  ret 
    X86_AT(c, 0xf8e9fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8dd8u, "ran off the end of a function");
}
void f_000f8ea0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0f8ea0  push ebp
    X86_AT(c, 0xf8ea0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f8ea1  mov ebp, esp
    X86_AT(c, 0xf8ea1u);
    c.r[5] = c.r[4];
    // 0f8ea3  sub esp, 0x10
    X86_AT(c, 0xf8ea3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0f8ea6  push ebx
    X86_AT(c, 0xf8ea6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f8ea7  push esi
    X86_AT(c, 0xf8ea7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8ea8  push edi
    X86_AT(c, 0xf8ea8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8ea9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf8ea9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f8eac  push 9
    X86_AT(c, 0xf8eacu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f8eae  call 0xe1a7c
    X86_AT(c, 0xf8eaeu);
    push32(c, 0xf8eb3u); f_000e1a7c(c); X86_RET(c, 0xf8eb3u);
    X86_TICK(c, 9);
    // 0f8eb3  add esp, 4
    X86_AT(c, 0xf8eb3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f8eb6  cmp eax, 5
    X86_AT(c, 0xf8eb6u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0f8eb9  jl 0xf8f03
    X86_AT(c, 0xf8eb9u);
    if (x86_cc(c, 12)) { goto L_f8f03; }
    X86_TICK(c, 19);
    // 0f8ebb  sub eax, eax
    X86_AT(c, 0xf8ebbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8ebd  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf8ebdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f8ec0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf8ec0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f8ec3  movzx edx, byte ptr [edi + 0xce3c8]
    X86_AT(c, 0xf8ec3u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u)));
    // 0f8eca  cmp edx, 0xf8
    X86_AT(c, 0xf8ecau);
    (void)x86_sub(c, c.r[2], 0xF8u, 0, 4);
    // 0f8ed0  je 0xf8eee
    X86_AT(c, 0xf8ed0u);
    if (x86_cc(c, 4)) { goto L_f8eee; }
    X86_TICK(c, 7);
    // 0f8ed2  cmp edx, 0x34
    X86_AT(c, 0xf8ed2u);
    (void)x86_sub(c, c.r[2], 0x34u, 0, 4);
    // 0f8ed5  je 0xf8eee
    X86_AT(c, 0xf8ed5u);
    if (x86_cc(c, 4)) { goto L_f8eee; }
    X86_TICK(c, 7);
    // 0f8ed7  cmp edx, 0x38
    X86_AT(c, 0xf8ed7u);
    (void)x86_sub(c, c.r[2], 0x38u, 0, 4);
    // 0f8eda  je 0xf8eee
    X86_AT(c, 0xf8edau);
    if (x86_cc(c, 4)) { goto L_f8eee; }
    X86_TICK(c, 7);
    // 0f8edc  cmp edx, 0x3c
    X86_AT(c, 0xf8edcu);
    (void)x86_sub(c, c.r[2], 0x3Cu, 0, 4);
    // 0f8edf  je 0xf8eee
    X86_AT(c, 0xf8edfu);
    if (x86_cc(c, 4)) { goto L_f8eee; }
    X86_TICK(c, 7);
    // 0f8ee1  cmp edx, 0x48
    X86_AT(c, 0xf8ee1u);
    (void)x86_sub(c, c.r[2], 0x48u, 0, 4);
    // 0f8ee4  je 0xf8eee
    X86_AT(c, 0xf8ee4u);
    if (x86_cc(c, 4)) { goto L_f8eee; }
    X86_TICK(c, 7);
    // 0f8ee6  cmp edx, 0xe0
    X86_AT(c, 0xf8ee6u);
    (void)x86_sub(c, c.r[2], 0xE0u, 0, 4);
    // 0f8eec  jne 0xf8f03
    X86_AT(c, 0xf8eecu);
    if (x86_cc(c, 5)) { goto L_f8f03; }
L_f8eee:
    X86_TICK(c, 17);
    // 0f8eee  lea eax, [ebp - 8]
    X86_AT(c, 0xf8eeeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f8ef1  push eax
    X86_AT(c, 0xf8ef1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f8ef2  lea eax, [ebp - 4]
    X86_AT(c, 0xf8ef2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f8ef5  push eax
    X86_AT(c, 0xf8ef5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f8ef6  push edi
    X86_AT(c, 0xf8ef6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f8ef7  call 0xf8dd8
    X86_AT(c, 0xf8ef7u);
    push32(c, 0xf8efcu); f_000f8dd8(c); X86_RET(c, 0xf8efcu);
    X86_TICK(c, 9);
    // 0f8efc  add esp, 0xc
    X86_AT(c, 0xf8efcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f8eff  and eax, eax
    X86_AT(c, 0xf8effu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f8f01  je 0xf8f0d
    X86_AT(c, 0xf8f01u);
    if (x86_cc(c, 4)) { goto L_f8f0d; }
L_f8f03:
    X86_TICK(c, 9);
    // 0f8f03  mov eax, 0xffffffff
    X86_AT(c, 0xf8f03u);
    c.r[0] = 0xFFFFFFFFu;
    // 0f8f08  jmp 0xf91a7
    X86_AT(c, 0xf8f08u);
    goto L_f91a7;
L_f8f0d:
    X86_TICK(c, 12);
    // 0f8f0d  cmp dword ptr [ebp - 4], 5
    X86_AT(c, 0xf8f0du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x5u, 0, 4);
    // 0f8f11  jge 0xf8f1c
    X86_AT(c, 0xf8f11u);
    if (x86_cc(c, 13)) { goto L_f8f1c; }
    X86_TICK(c, 9);
    // 0f8f13  mov dword ptr [ebp - 0xc], 1
    X86_AT(c, 0xf8f13u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 0f8f1a  jmp 0xf8f32
    X86_AT(c, 0xf8f1au);
    goto L_f8f32;
L_f8f1c:
    X86_TICK(c, 12);
    // 0f8f1c  cmp dword ptr [ebp - 4], 5
    X86_AT(c, 0xf8f1cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x5u, 0, 4);
    // 0f8f20  jle 0xf8f2b
    X86_AT(c, 0xf8f20u);
    if (x86_cc(c, 14)) { goto L_f8f2b; }
    X86_TICK(c, 9);
    // 0f8f22  mov dword ptr [ebp - 0xc], 0xffffffff
    X86_AT(c, 0xf8f22u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0xFFFFFFFFu);
    // 0f8f29  jmp 0xf8f32
    X86_AT(c, 0xf8f29u);
    goto L_f8f32;
L_f8f2b:
    X86_TICK(c, 2);
    // 0f8f2b  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xf8f2bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_f8f32:
    X86_TICK(c, 12);
    // 0f8f32  cmp dword ptr [ebp - 8], 5
    X86_AT(c, 0xf8f32u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x5u, 0, 4);
    // 0f8f36  jge 0xf8f41
    X86_AT(c, 0xf8f36u);
    if (x86_cc(c, 13)) { goto L_f8f41; }
    X86_TICK(c, 9);
    // 0f8f38  mov dword ptr [ebp - 0x10], 1
    X86_AT(c, 0xf8f38u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x1u);
    // 0f8f3f  jmp 0xf8f57
    X86_AT(c, 0xf8f3fu);
    goto L_f8f57;
L_f8f41:
    X86_TICK(c, 12);
    // 0f8f41  cmp dword ptr [ebp - 8], 5
    X86_AT(c, 0xf8f41u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x5u, 0, 4);
    // 0f8f45  jle 0xf8f50
    X86_AT(c, 0xf8f45u);
    if (x86_cc(c, 14)) { goto L_f8f50; }
    X86_TICK(c, 9);
    // 0f8f47  mov dword ptr [ebp - 0x10], 0xffffffff
    X86_AT(c, 0xf8f47u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0xFFFFFFFFu);
    // 0f8f4e  jmp 0xf8f57
    X86_AT(c, 0xf8f4eu);
    goto L_f8f57;
L_f8f50:
    X86_TICK(c, 2);
    // 0f8f50  mov dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xf8f50u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x0u);
L_f8f57:
    X86_TICK(c, 11);
    // 0f8f57  mov al, byte ptr [edi + 0xce3c8]
    X86_AT(c, 0xf8f57u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u))));
    // 0f8f5d  cmp al, 0x48
    X86_AT(c, 0xf8f5du);
    (void)x86_sub(c, g8(c, 0), 0x48u, 0, 1);
    // 0f8f5f  je 0xf8f65
    X86_AT(c, 0xf8f5fu);
    if (x86_cc(c, 4)) { goto L_f8f65; }
    X86_TICK(c, 7);
    // 0f8f61  cmp al, 0xe0
    X86_AT(c, 0xf8f61u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 0f8f63  jne 0xf8f72
    X86_AT(c, 0xf8f63u);
    if (x86_cc(c, 5)) { goto L_f8f72; }
L_f8f65:
    X86_TICK(c, 9);
    // 0f8f65  push 4
    X86_AT(c, 0xf8f65u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f8f67  call 0xe1944
    X86_AT(c, 0xf8f67u);
    push32(c, 0xf8f6cu); f_000e1944(c); X86_RET(c, 0xf8f6cu);
    X86_TICK(c, 11);
    // 0f8f6c  push 0xffffffff
    X86_AT(c, 0xf8f6cu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f8f6e  push 0x7e
    X86_AT(c, 0xf8f6eu);
    { uint32_t v = 0x7Eu; push32(c, v); }
    // 0f8f70  jmp 0xf8f80
    X86_AT(c, 0xf8f70u);
    goto L_f8f80;
L_f8f72:
    X86_TICK(c, 9);
    // 0f8f72  push 5
    X86_AT(c, 0xf8f72u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f8f74  call 0xe1944
    X86_AT(c, 0xf8f74u);
    push32(c, 0xf8f79u); f_000e1944(c); X86_RET(c, 0xf8f79u);
    X86_TICK(c, 4);
    // 0f8f79  push 0xffffffff
    X86_AT(c, 0xf8f79u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f8f7b  push 0x84
    X86_AT(c, 0xf8f7bu);
    { uint32_t v = 0x84u; push32(c, v); }
L_f8f80:
    X86_TICK(c, 17);
    // 0f8f80  push dword ptr [ebp - 8]
    X86_AT(c, 0xf8f80u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0f8f83  push dword ptr [ebp - 4]
    X86_AT(c, 0xf8f83u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f8f86  call 0xe2e10
    X86_AT(c, 0xf8f86u);
    push32(c, 0xf8f8bu); f_000e2e10(c); X86_RET(c, 0xf8f8bu);
    X86_TICK(c, 12);
    // 0f8f8b  xchg esi, eax
    X86_AT(c, 0xf8f8bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0f8f8c  add esp, 0x14
    X86_AT(c, 0xf8f8cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f8f8f  call 0xe2ea0
    X86_AT(c, 0xf8f8fu);
    push32(c, 0xf8f94u); f_000e2ea0(c); X86_RET(c, 0xf8f94u);
    X86_TICK(c, 32);
    // 0f8f94  push 2
    X86_AT(c, 0xf8f94u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f8f96  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8f96u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8f9b  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8f9bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8f9e  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8f9eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8fa1  shl edx, 5
    X86_AT(c, 0xf8fa1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8fa4  sub edx, eax
    X86_AT(c, 0xf8fa4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8fa6  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf8fa6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f8fac  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf8facu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f8fb2  call 0xe7f60
    X86_AT(c, 0xf8fb2u);
    push32(c, 0xf8fb7u); f_000e7f60(c); X86_RET(c, 0xf8fb7u);
    X86_TICK(c, 4);
    // 0f8fb7  sub ebx, ebx
    X86_AT(c, 0xf8fb7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0f8fb9  add esp, 0xc
    X86_AT(c, 0xf8fb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f8fbc:
    X86_TICK(c, 7);
    // 0f8fbc  cmp ebx, 3
    X86_AT(c, 0xf8fbcu);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0f8fbf  jge 0xf9143
    X86_AT(c, 0xf8fbfu);
    if (x86_cc(c, 13)) { goto L_f9143; }
    X86_TICK(c, 41);
    // 0f8fc5  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xf8fc5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0f8fc8  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xf8fc8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0f8fcb  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xf8fcbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0f8fce  add dword ptr [ebp - 8], eax
    X86_AT(c, 0xf8fceu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0f8fd1  push dword ptr [ebp - 8]
    X86_AT(c, 0xf8fd1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0f8fd4  push dword ptr [ebp - 4]
    X86_AT(c, 0xf8fd4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f8fd7  push esi
    X86_AT(c, 0xf8fd7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f8fd8  call 0xe2f00
    X86_AT(c, 0xf8fd8u);
    push32(c, 0xf8fddu); f_000e2f00(c); X86_RET(c, 0xf8fddu);
    X86_TICK(c, 7);
    // 0f8fdd  call 0xe2ea0
    X86_AT(c, 0xf8fddu);
    push32(c, 0xf8fe2u); f_000e2ea0(c); X86_RET(c, 0xf8fe2u);
    X86_TICK(c, 32);
    // 0f8fe2  push 2
    X86_AT(c, 0xf8fe2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f8fe4  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf8fe4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f8fe9  lea edx, [eax + eax*4]
    X86_AT(c, 0xf8fe9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f8fec  lea edx, [eax + edx*2]
    X86_AT(c, 0xf8fecu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f8fef  shl edx, 5
    X86_AT(c, 0xf8fefu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f8ff2  sub edx, eax
    X86_AT(c, 0xf8ff2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f8ff4  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf8ff4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f8ffa  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf8ffau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f9000  call 0xe7f60
    X86_AT(c, 0xf9000u);
    push32(c, 0xf9005u); f_000e7f60(c); X86_RET(c, 0xf9005u);
    X86_TICK(c, 27);
    // 0f9005  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf9005u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f9008  lea edx, [eax + eax*8]
    X86_AT(c, 0xf9008u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0f900b  lea eax, [edx + eax*2]
    X86_AT(c, 0xf900bu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0f900e  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xf900eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0f9011  add esp, 0x18
    X86_AT(c, 0xf9011u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f9014  mov al, byte ptr [eax + 0xbe578]
    X86_AT(c, 0xf9014u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBE578u))));
    // 0f901a  cmp al, 5
    X86_AT(c, 0xf901au);
    (void)x86_sub(c, g8(c, 0), 0x5u, 0, 1);
    // 0f901c  je 0xf9022
    X86_AT(c, 0xf901cu);
    if (x86_cc(c, 4)) { goto L_f9022; }
    X86_TICK(c, 7);
    // 0f901e  cmp al, 0x24
    X86_AT(c, 0xf901eu);
    (void)x86_sub(c, g8(c, 0), 0x24u, 0, 1);
    // 0f9020  jne 0xf9032
    X86_AT(c, 0xf9020u);
    if (x86_cc(c, 5)) { goto L_f9032; }
L_f9022:
    X86_TICK(c, 9);
    // 0f9022  push esi
    X86_AT(c, 0xf9022u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f9023  call 0xe2df4
    X86_AT(c, 0xf9023u);
    push32(c, 0xf9028u); f_000e2df4(c); X86_RET(c, 0xf9028u);
    X86_TICK(c, 7);
    // 0f9028  call 0xe2ea0
    X86_AT(c, 0xf9028u);
    push32(c, 0xf902du); f_000e2ea0(c); X86_RET(c, 0xf902du);
    X86_TICK(c, 7);
    // 0f902d  jmp 0xf91a2
    X86_AT(c, 0xf902du);
    goto L_f91a2;
L_f9032:
    X86_TICK(c, 12);
    // 0f9032  cmp dword ptr [ebp - 4], 5
    X86_AT(c, 0xf9032u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x5u, 0, 4);
    // 0f9036  jne 0xf913d
    X86_AT(c, 0xf9036u);
    if (x86_cc(c, 5)) { goto L_f913d; }
    X86_TICK(c, 12);
    // 0f903c  cmp dword ptr [ebp - 8], 5
    X86_AT(c, 0xf903cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x5u, 0, 4);
    // 0f9040  jne 0xf913d
    X86_AT(c, 0xf9040u);
    if (x86_cc(c, 5)) { goto L_f913d; }
    X86_TICK(c, 9);
    // 0f9046  push esi
    X86_AT(c, 0xf9046u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f9047  call 0xe2df4
    X86_AT(c, 0xf9047u);
    push32(c, 0xf904cu); f_000e2df4(c); X86_RET(c, 0xf904cu);
    X86_TICK(c, 30);
    // 0f904c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf904cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9051  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9051u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9054  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9054u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9057  shl edx, 5
    X86_AT(c, 0xf9057u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f905a  sub edx, eax
    X86_AT(c, 0xf905au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f905c  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf905cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f9062  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf9062u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f9068  call 0xe305c
    X86_AT(c, 0xf9068u);
    push32(c, 0xf906du); f_000e305c(c); X86_RET(c, 0xf906du);
    X86_TICK(c, 32);
    // 0f906d  push 2
    X86_AT(c, 0xf906du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f906f  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf906fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9074  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9074u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9077  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9077u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f907a  shl edx, 5
    X86_AT(c, 0xf907au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f907d  sub edx, eax
    X86_AT(c, 0xf907du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f907f  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf907fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f9085  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf9085u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f908b  call 0xe7f60
    X86_AT(c, 0xf908bu);
    push32(c, 0xf9090u); f_000e7f60(c); X86_RET(c, 0xf9090u);
    X86_TICK(c, 15);
    // 0f9090  add esp, 0x18
    X86_AT(c, 0xf9090u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f9093  movzx edx, byte ptr [edi + 0xce3c8]
    X86_AT(c, 0xf9093u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u)));
    // 0f909a  cmp edx, 0xf8
    X86_AT(c, 0xf909au);
    (void)x86_sub(c, c.r[2], 0xF8u, 0, 4);
    // 0f90a0  je 0xf90fe
    X86_AT(c, 0xf90a0u);
    if (x86_cc(c, 4)) { goto L_f90fe; }
    X86_TICK(c, 7);
    // 0f90a2  cmp edx, 0x34
    X86_AT(c, 0xf90a2u);
    (void)x86_sub(c, c.r[2], 0x34u, 0, 4);
    // 0f90a5  je 0xf90f0
    X86_AT(c, 0xf90a5u);
    if (x86_cc(c, 4)) { goto L_f90f0; }
    X86_TICK(c, 7);
    // 0f90a7  cmp edx, 0x38
    X86_AT(c, 0xf90a7u);
    (void)x86_sub(c, c.r[2], 0x38u, 0, 4);
    // 0f90aa  je 0xf90f7
    X86_AT(c, 0xf90aau);
    if (x86_cc(c, 4)) { goto L_f90f7; }
    X86_TICK(c, 7);
    // 0f90ac  cmp edx, 0x3c
    X86_AT(c, 0xf90acu);
    (void)x86_sub(c, c.r[2], 0x3Cu, 0, 4);
    // 0f90af  je 0xf9115
    X86_AT(c, 0xf90afu);
    if (x86_cc(c, 4)) { goto L_f9115; }
    X86_TICK(c, 7);
    // 0f90b1  cmp edx, 0x48
    X86_AT(c, 0xf90b1u);
    (void)x86_sub(c, c.r[2], 0x48u, 0, 4);
    // 0f90b4  je 0xf90c3
    X86_AT(c, 0xf90b4u);
    if (x86_cc(c, 4)) { goto L_f90c3; }
    X86_TICK(c, 7);
    // 0f90b6  cmp edx, 0xe0
    X86_AT(c, 0xf90b6u);
    (void)x86_sub(c, c.r[2], 0xE0u, 0, 4);
    // 0f90bc  je 0xf911c
    X86_AT(c, 0xf90bcu);
    if (x86_cc(c, 4)) { goto L_f911c; }
    X86_TICK(c, 7);
    // 0f90be  jmp 0xf9139
    X86_AT(c, 0xf90beu);
    goto L_f9139;
L_f90c3:
    X86_TICK(c, 9);
    // 0f90c3  push 8
    X86_AT(c, 0xf90c3u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f90c5  call 0xe1944
    X86_AT(c, 0xf90c5u);
    push32(c, 0xf90cau); f_000e1944(c); X86_RET(c, 0xf90cau);
    X86_TICK(c, 9);
    // 0f90ca  push 7
    X86_AT(c, 0xf90cau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f90cc  call 0xe693c
    X86_AT(c, 0xf90ccu);
    push32(c, 0xf90d1u); f_000e693c(c); X86_RET(c, 0xf90d1u);
    X86_TICK(c, 11);
    // 0f90d1  push 0xaa10
    X86_AT(c, 0xf90d1u);
    { uint32_t v = 0xAA10u; push32(c, v); }
    // 0f90d6  push 7
    X86_AT(c, 0xf90d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f90d8  call 0xe5654
    X86_AT(c, 0xf90d8u);
    push32(c, 0xf90ddu); f_000e5654(c); X86_RET(c, 0xf90ddu);
    X86_TICK(c, 9);
    // 0f90dd  push 7
    X86_AT(c, 0xf90ddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f90df  call 0xe6c68
    X86_AT(c, 0xf90dfu);
    push32(c, 0xf90e4u); f_000e6c68(c); X86_RET(c, 0xf90e4u);
    X86_TICK(c, 9);
    // 0f90e4  push 0x10
    X86_AT(c, 0xf90e4u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0f90e6  call 0xeff44
    X86_AT(c, 0xf90e6u);
    push32(c, 0xf90ebu); f_000eff44(c); X86_RET(c, 0xf90ebu);
    X86_TICK(c, 9);
    // 0f90eb  add esp, 0x18
    X86_AT(c, 0xf90ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f90ee  jmp 0xf9139
    X86_AT(c, 0xf90eeu);
    goto L_f9139;
L_f90f0:
    X86_TICK(c, 7);
    // 0f90f0  call 0xf9bfc
    X86_AT(c, 0xf90f0u);
    push32(c, 0xf90f5u); f_000f9bfc(c); X86_RET(c, 0xf90f5u);
    X86_TICK(c, 7);
    // 0f90f5  jmp 0xf9139
    X86_AT(c, 0xf90f5u);
    goto L_f9139;
L_f90f7:
    X86_TICK(c, 7);
    // 0f90f7  call 0xf9b60
    X86_AT(c, 0xf90f7u);
    push32(c, 0xf90fcu); f_000f9b60(c); X86_RET(c, 0xf90fcu);
    X86_TICK(c, 7);
    // 0f90fc  jmp 0xf9139
    X86_AT(c, 0xf90fcu);
    goto L_f9139;
L_f90fe:
    X86_TICK(c, 11);
    // 0f90fe  push 0xaa44
    X86_AT(c, 0xf90feu);
    { uint32_t v = 0xAA44u; push32(c, v); }
    // 0f9103  push 7
    X86_AT(c, 0xf9103u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9105  call 0xe5654
    X86_AT(c, 0xf9105u);
    push32(c, 0xf910au); f_000e5654(c); X86_RET(c, 0xf910au);
    X86_TICK(c, 9);
    // 0f910a  push 7
    X86_AT(c, 0xf910au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f910c  call 0xe6c68
    X86_AT(c, 0xf910cu);
    push32(c, 0xf9111u); f_000e6c68(c); X86_RET(c, 0xf9111u);
    X86_TICK(c, 9);
    // 0f9111  push 0xa
    X86_AT(c, 0xf9111u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f9113  jmp 0xf9131
    X86_AT(c, 0xf9113u);
    goto L_f9131;
L_f9115:
    X86_TICK(c, 7);
    // 0f9115  call 0xf9c98
    X86_AT(c, 0xf9115u);
    push32(c, 0xf911au); f_000f9c98(c); X86_RET(c, 0xf911au);
    X86_TICK(c, 7);
    // 0f911a  jmp 0xf9139
    X86_AT(c, 0xf911au);
    goto L_f9139;
L_f911c:
    X86_TICK(c, 11);
    // 0f911c  push 0xaa6c
    X86_AT(c, 0xf911cu);
    { uint32_t v = 0xAA6Cu; push32(c, v); }
    // 0f9121  push 7
    X86_AT(c, 0xf9121u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9123  call 0xe5654
    X86_AT(c, 0xf9123u);
    push32(c, 0xf9128u); f_000e5654(c); X86_RET(c, 0xf9128u);
    X86_TICK(c, 9);
    // 0f9128  push 7
    X86_AT(c, 0xf9128u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f912a  call 0xe6c68
    X86_AT(c, 0xf912au);
    push32(c, 0xf912fu); f_000e6c68(c); X86_RET(c, 0xf912fu);
    X86_TICK(c, 2);
    // 0f912f  push 0x32
    X86_AT(c, 0xf912fu);
    { uint32_t v = 0x32u; push32(c, v); }
L_f9131:
    X86_TICK(c, 7);
    // 0f9131  call 0xeff44
    X86_AT(c, 0xf9131u);
    push32(c, 0xf9136u); f_000eff44(c); X86_RET(c, 0xf9136u);
    X86_TICK(c, 2);
    // 0f9136  add esp, 0x10
    X86_AT(c, 0xf9136u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f9139:
    X86_TICK(c, 9);
    // 0f9139  sub eax, eax
    X86_AT(c, 0xf9139u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f913b  jmp 0xf91a7
    X86_AT(c, 0xf913bu);
    goto L_f91a7;
L_f913d:
    X86_TICK(c, 9);
    // 0f913d  inc ebx
    X86_AT(c, 0xf913du);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0f913e  jmp 0xf8fbc
    X86_AT(c, 0xf913eu);
    X86_POLL(c, 0xf8fbcu); goto L_f8fbc;
L_f9143:
    X86_TICK(c, 2);
    // 0f9143  sub ebx, ebx
    X86_AT(c, 0xf9143u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_f9145:
    X86_TICK(c, 7);
    // 0f9145  cmp ebx, 3
    X86_AT(c, 0xf9145u);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0f9148  jge 0xf919c
    X86_AT(c, 0xf9148u);
    if (x86_cc(c, 13)) { goto L_f919c; }
    X86_TICK(c, 12);
    // 0f914a  cmp byte ptr [edi + 0xce3c8], 0x48
    X86_AT(c, 0xf914au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u))), 0x48u, 0, 1);
    // 0f9151  jne 0xf9158
    X86_AT(c, 0xf9151u);
    if (x86_cc(c, 5)) { goto L_f9158; }
    X86_TICK(c, 9);
    // 0f9153  lea eax, [ebx + 0x7f]
    X86_AT(c, 0xf9153u);
    c.r[0] = (uint32_t)(c.r[3] + 0x7Fu);
    // 0f9156  jmp 0xf915e
    X86_AT(c, 0xf9156u);
    goto L_f915e;
L_f9158:
    X86_TICK(c, 2);
    // 0f9158  lea eax, [ebx + 0x85]
    X86_AT(c, 0xf9158u);
    c.r[0] = (uint32_t)(c.r[3] + 0x85u);
L_f915e:
    X86_TICK(c, 21);
    // 0f915e  push eax
    X86_AT(c, 0xf915eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f915f  push dword ptr [ebp - 8]
    X86_AT(c, 0xf915fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0f9162  push dword ptr [ebp - 4]
    X86_AT(c, 0xf9162u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f9165  push esi
    X86_AT(c, 0xf9165u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f9166  call 0xe2f48
    X86_AT(c, 0xf9166u);
    push32(c, 0xf916bu); f_000e2f48(c); X86_RET(c, 0xf916bu);
    X86_TICK(c, 9);
    // 0f916b  add esp, 0x10
    X86_AT(c, 0xf916bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f916e  call 0xe2ea0
    X86_AT(c, 0xf916eu);
    push32(c, 0xf9173u); f_000e2ea0(c); X86_RET(c, 0xf9173u);
    X86_TICK(c, 32);
    // 0f9173  push 2
    X86_AT(c, 0xf9173u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f9175  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9175u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f917a  lea edx, [eax + eax*4]
    X86_AT(c, 0xf917au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f917d  lea edx, [eax + edx*2]
    X86_AT(c, 0xf917du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9180  shl edx, 5
    X86_AT(c, 0xf9180u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9183  sub edx, eax
    X86_AT(c, 0xf9183u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9185  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf9185u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f918b  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf918bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f9191  call 0xe7f60
    X86_AT(c, 0xf9191u);
    push32(c, 0xf9196u); f_000e7f60(c); X86_RET(c, 0xf9196u);
    X86_TICK(c, 11);
    // 0f9196  inc ebx
    X86_AT(c, 0xf9196u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0f9197  add esp, 0xc
    X86_AT(c, 0xf9197u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f919a  jmp 0xf9145
    X86_AT(c, 0xf919au);
    X86_POLL(c, 0xf9145u); goto L_f9145;
L_f919c:
    X86_TICK(c, 9);
    // 0f919c  push esi
    X86_AT(c, 0xf919cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f919d  call 0xe2df4
    X86_AT(c, 0xf919du);
    push32(c, 0xf91a2u); f_000e2df4(c); X86_RET(c, 0xf91a2u);
L_f91a2:
    X86_TICK(c, 4);
    // 0f91a2  sub eax, eax
    X86_AT(c, 0xf91a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f91a4  add esp, 4
    X86_AT(c, 0xf91a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f91a7:
    X86_TICK(c, 28);
    // 0f91a7  pop edi
    X86_AT(c, 0xf91a7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f91a8  pop esi
    X86_AT(c, 0xf91a8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f91a9  pop ebx
    X86_AT(c, 0xf91a9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f91aa  leave 
    X86_AT(c, 0xf91aau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f91ab  ret 
    X86_AT(c, 0xf91abu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8ea0u, "ran off the end of a function");
}
void f_000f91ac(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0f91ac  push ebp
    X86_AT(c, 0xf91acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f91ad  mov ebp, esp
    X86_AT(c, 0xf91adu);
    c.r[5] = c.r[4];
    // 0f91af  sub esp, 0x10
    X86_AT(c, 0xf91afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0f91b2  push ebx
    X86_AT(c, 0xf91b2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f91b3  push esi
    X86_AT(c, 0xf91b3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f91b4  push edi
    X86_AT(c, 0xf91b4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f91b5  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf91b5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f91ba  lea edx, [eax + eax*4]
    X86_AT(c, 0xf91bau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f91bd  lea edx, [eax + edx*2]
    X86_AT(c, 0xf91bdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f91c0  shl edx, 5
    X86_AT(c, 0xf91c0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f91c3  sub edx, eax
    X86_AT(c, 0xf91c3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f91c5  cmp dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf91c5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x0u, 0, 4);
    // 0f91cc  jne 0xf9315
    X86_AT(c, 0xf91ccu);
    if (x86_cc(c, 5)) { goto L_f9315; }
    X86_TICK(c, 9);
    // 0f91d2  push 0x87
    X86_AT(c, 0xf91d2u);
    { uint32_t v = 0x87u; push32(c, v); }
    // 0f91d7  call 0xe1a7c
    X86_AT(c, 0xf91d7u);
    push32(c, 0xf91dcu); f_000e1a7c(c); X86_RET(c, 0xf91dcu);
    X86_TICK(c, 9);
    // 0f91dc  add esp, 4
    X86_AT(c, 0xf91dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f91df  cmp eax, 0x80
    X86_AT(c, 0xf91dfu);
    (void)x86_sub(c, c.r[0], 0x80u, 0, 4);
    // 0f91e4  jge 0xf9315
    X86_AT(c, 0xf91e4u);
    if (x86_cc(c, 13)) { goto L_f9315; }
    X86_TICK(c, 25);
    // 0f91ea  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf91eau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f91ef  lea edx, [eax + eax*4]
    X86_AT(c, 0xf91efu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f91f2  lea edx, [eax + edx*2]
    X86_AT(c, 0xf91f2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f91f5  shl edx, 5
    X86_AT(c, 0xf91f5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f91f8  sub edx, eax
    X86_AT(c, 0xf91f8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f91fa  cmp dword ptr [edx + 0xcde99], 4
    X86_AT(c, 0xf91fau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))), 0x4u, 0, 4);
    // 0f9201  jg 0xf920c
    X86_AT(c, 0xf9201u);
    if (x86_cc(c, 15)) { goto L_f920c; }
    X86_TICK(c, 9);
    // 0f9203  mov dword ptr [ebp - 0xc], 0xc
    X86_AT(c, 0xf9203u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0xCu);
    // 0f920a  jmp 0xf9213
    X86_AT(c, 0xf920au);
    goto L_f9213;
L_f920c:
    X86_TICK(c, 2);
    // 0f920c  mov dword ptr [ebp - 0xc], 6
    X86_AT(c, 0xf920cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x6u);
L_f9213:
    X86_TICK(c, 2);
    // 0f9213  sub edi, edi
    X86_AT(c, 0xf9213u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_f9215:
    X86_TICK(c, 11);
    // 0f9215  cmp edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xf9215u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4);
    // 0f9218  jge 0xf9315
    X86_AT(c, 0xf9218u);
    if (x86_cc(c, 13)) { goto L_f9315; }
    X86_TICK(c, 12);
    // 0f921e  cmp byte ptr [edi + 0xce3c8], 0
    X86_AT(c, 0xf921eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u))), 0x0u, 0, 1);
    // 0f9225  jne 0xf930f
    X86_AT(c, 0xf9225u);
    if (x86_cc(c, 5)) { goto L_f930f; }
    X86_TICK(c, 7);
    // 0f922b  call 0xf9ad8
    X86_AT(c, 0xf922bu);
    push32(c, 0xf9230u); f_000f9ad8(c); X86_RET(c, 0xf9230u);
    X86_TICK(c, 16);
    // 0f9230  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf9230u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f9233  mov dl, byte ptr [eax + 0xd4a04]
    X86_AT(c, 0xf9233u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4A04u))));
    // 0f9239  mov byte ptr [edi + 0xce3c8], dl
    X86_AT(c, 0xf9239u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u)), g8(c, 2));
    // 0f923f  mov al, byte ptr [eax + 0xd4a10]
    X86_AT(c, 0xf923fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4A10u))));
    // 0f9245  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xf9245u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0f9248  sub ebx, ebx
    X86_AT(c, 0xf9248u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_f924a:
    X86_TICK(c, 9);
    // 0f924a  push 0x3f
    X86_AT(c, 0xf924au);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0f924c  call 0xe1a7c
    X86_AT(c, 0xf924cu);
    push32(c, 0xf9251u); f_000e1a7c(c); X86_RET(c, 0xf9251u);
    X86_TICK(c, 12);
    // 0f9251  xchg esi, eax
    X86_AT(c, 0xf9251u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0f9252  push 0x3f
    X86_AT(c, 0xf9252u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0f9254  call 0xe1a7c
    X86_AT(c, 0xf9254u);
    push32(c, 0xf9259u); f_000e1a7c(c); X86_RET(c, 0xf9259u);
    X86_TICK(c, 13);
    // 0f9259  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf9259u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f925c  push eax
    X86_AT(c, 0xf925cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f925d  push esi
    X86_AT(c, 0xf925du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f925e  call 0xef8ac
    X86_AT(c, 0xf925eu);
    push32(c, 0xf9263u); f_000ef8ac(c); X86_RET(c, 0xf9263u);
    X86_TICK(c, 15);
    // 0f9263  add esp, 0x10
    X86_AT(c, 0xf9263u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f9266  movzx edx, byte ptr [ebp - 0xd]
    X86_AT(c, 0xf9266u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)));
    // 0f926a  cmp eax, edx
    X86_AT(c, 0xf926au);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0f926c  je 0xf9274
    X86_AT(c, 0xf926cu);
    if (x86_cc(c, 4)) { goto L_f9274; }
    X86_TICK(c, 9);
    // 0f926e  inc ebx
    X86_AT(c, 0xf926eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0f926f  cmp ebx, 8
    X86_AT(c, 0xf926fu);
    (void)x86_sub(c, c.r[3], 0x8u, 0, 4);
    // 0f9272  jle 0xf924a
    X86_AT(c, 0xf9272u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xf924au); goto L_f924a; }
L_f9274:
    X86_TICK(c, 24);
    // 0f9274  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9274u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9279  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9279u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f927c  lea edx, [eax + edx*2]
    X86_AT(c, 0xf927cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f927f  shl edx, 5
    X86_AT(c, 0xf927fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9282  sub edx, eax
    X86_AT(c, 0xf9282u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9284  cmp esi, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf9284u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0, 4);
    // 0f928a  je 0xf929c
    X86_AT(c, 0xf928au);
    if (x86_cc(c, 4)) { goto L_f929c; }
    X86_TICK(c, 15);
    // 0f928c  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf928cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f9292  cmp eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf9292u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4);
    // 0f9295  je 0xf929c
    X86_AT(c, 0xf9295u);
    if (x86_cc(c, 4)) { goto L_f929c; }
    X86_TICK(c, 7);
    // 0f9297  cmp ebx, 8
    X86_AT(c, 0xf9297u);
    (void)x86_sub(c, c.r[3], 0x8u, 0, 4);
    // 0f929a  jle 0xf92a5
    X86_AT(c, 0xf929au);
    if (x86_cc(c, 14)) { goto L_f92a5; }
L_f929c:
    X86_TICK(c, 9);
    // 0f929c  mov byte ptr [edi + 0xce3c8], 0
    X86_AT(c, 0xf929cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u)), 0x0u);
    // 0f92a3  jmp 0xf930f
    X86_AT(c, 0xf92a3u);
    goto L_f930f;
L_f92a5:
    X86_TICK(c, 35);
    // 0f92a5  mov dword ptr [edi*4 + 0xce408], esi
    X86_AT(c, 0xf92a5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)), c.r[6]);
    // 0f92ac  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf92acu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f92af  mov dword ptr [edi*4 + 0xce488], eax
    X86_AT(c, 0xf92afu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)), c.r[0]);
    // 0f92b6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xf92b6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0f92b9  mov al, byte ptr [eax*4 + 0xd4a1c]
    X86_AT(c, 0xf92b9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xD4A1Cu))));
    // 0f92c0  mov byte ptr [edi + 0xce3e8], al
    X86_AT(c, 0xf92c0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3E8u)), g8(c, 0));
    // 0f92c6  mov dword ptr [edi*4 + 0xce508], 2
    X86_AT(c, 0xf92c6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE508u)), 0x2u);
    // 0f92d1  mov dword ptr [edi*4 + 0xce69c], 0xffffffff
    X86_AT(c, 0xf92d1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE69Cu)), 0xFFFFFFFFu);
    // 0f92dc  mov al, byte ptr [edi + 0xce3c8]
    X86_AT(c, 0xf92dcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u))));
    // 0f92e2  push eax
    X86_AT(c, 0xf92e2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f92e3  call 0xe35e0
    X86_AT(c, 0xf92e3u);
    push32(c, 0xf92e8u); f_000e35e0(c); X86_RET(c, 0xf92e8u);
    X86_TICK(c, 27);
    // 0f92e8  mov dword ptr [edi*4 + 0xce608], eax
    X86_AT(c, 0xf92e8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE608u)), c.r[0]);
    // 0f92ef  push dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xf92efu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u))); push32(c, v); }
    // 0f92f6  push dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xf92f6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u))); push32(c, v); }
    // 0f92fd  movzx eax, byte ptr [edi + 0xce3e8]
    X86_AT(c, 0xf92fdu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3E8u)));
    // 0f9304  push eax
    X86_AT(c, 0xf9304u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f9305  call 0xf3c24
    X86_AT(c, 0xf9305u);
    push32(c, 0xf930au); f_000f3c24(c); X86_RET(c, 0xf930au);
    X86_TICK(c, 9);
    // 0f930a  add esp, 0x10
    X86_AT(c, 0xf930au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f930d  jmp 0xf9315
    X86_AT(c, 0xf930du);
    goto L_f9315;
L_f930f:
    X86_TICK(c, 9);
    // 0f930f  inc edi
    X86_AT(c, 0xf930fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f9310  jmp 0xf9215
    X86_AT(c, 0xf9310u);
    X86_POLL(c, 0xf9215u); goto L_f9215;
L_f9315:
    X86_TICK(c, 28);
    // 0f9315  pop edi
    X86_AT(c, 0xf9315u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f9316  pop esi
    X86_AT(c, 0xf9316u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f9317  pop ebx
    X86_AT(c, 0xf9317u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f9318  leave 
    X86_AT(c, 0xf9318u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f9319  ret 
    X86_AT(c, 0xf9319u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf91acu, "ran off the end of a function");
}
void f_000f931c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0f931c  push ebp
    X86_AT(c, 0xf931cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f931d  mov ebp, esp
    X86_AT(c, 0xf931du);
    c.r[5] = c.r[4];
    // 0f931f  sub esp, 0x10
    X86_AT(c, 0xf931fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0f9322  push ebx
    X86_AT(c, 0xf9322u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f9323  push esi
    X86_AT(c, 0xf9323u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f9324  push edi
    X86_AT(c, 0xf9324u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9325  sub eax, eax
    X86_AT(c, 0xf9325u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9327  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xf9327u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0f932a  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xf932au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0f932d  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf932du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f9330  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf9330u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f9333  xchg edi, eax
    X86_AT(c, 0xf9333u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_f9334:
    X86_TICK(c, 7);
    // 0f9334  cmp edi, 0x20
    X86_AT(c, 0xf9334u);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0f9337  jge 0xf95d9
    X86_AT(c, 0xf9337u);
    if (x86_cc(c, 13)) { goto L_f95d9; }
    X86_TICK(c, 25);
    // 0f933d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf933du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9342  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9342u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9345  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9345u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9348  shl edx, 5
    X86_AT(c, 0xf9348u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f934b  sub edx, eax
    X86_AT(c, 0xf934bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f934d  cmp dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf934du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x0u, 0, 4);
    // 0f9354  jne 0xf93a0
    X86_AT(c, 0xf9354u);
    if (x86_cc(c, 5)) { goto L_f93a0; }
    X86_TICK(c, 25);
    // 0f9356  lea eax, [ebp - 0x10]
    X86_AT(c, 0xf9356u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0f9359  push eax
    X86_AT(c, 0xf9359u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f935a  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf935au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f935d  push eax
    X86_AT(c, 0xf935du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f935e  lea ebx, [ebp - 8]
    X86_AT(c, 0xf935eu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f9361  push ebx
    X86_AT(c, 0xf9361u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f9362  lea esi, [ebp - 4]
    X86_AT(c, 0xf9362u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f9365  push esi
    X86_AT(c, 0xf9365u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f9366  push edi
    X86_AT(c, 0xf9366u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9367  call 0xefd94
    X86_AT(c, 0xf9367u);
    push32(c, 0xf936cu); f_000efd94(c); X86_RET(c, 0xf936cu);
    X86_TICK(c, 30);
    // 0f936c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf936cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9371  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9371u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9374  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9374u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9377  shl edx, 5
    X86_AT(c, 0xf9377u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f937a  sub edx, eax
    X86_AT(c, 0xf937au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f937c  add esp, 0x14
    X86_AT(c, 0xf937cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f937f  mov eax, dword ptr [esi]
    X86_AT(c, 0xf937fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0f9381  cmp eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf9381u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0, 4);
    // 0f9387  jne 0xf94a8
    X86_AT(c, 0xf9387u);
    if (x86_cc(c, 5)) { goto L_f94a8; }
    X86_TICK(c, 15);
    // 0f938d  mov eax, dword ptr [ebx]
    X86_AT(c, 0xf938du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0f938f  cmp eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf938fu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))), 0, 4);
    // 0f9395  jne 0xf94a8
    X86_AT(c, 0xf9395u);
    if (x86_cc(c, 5)) { goto L_f94a8; }
    X86_TICK(c, 7);
    // 0f939b  jmp 0xf949a
    X86_AT(c, 0xf939bu);
    goto L_f949a;
L_f93a0:
    X86_TICK(c, 12);
    // 0f93a0  cmp byte ptr [edi + 0xce3c8], 0x40
    X86_AT(c, 0xf93a0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u))), 0x40u, 0, 1);
    // 0f93a7  jne 0xf93b2
    X86_AT(c, 0xf93a7u);
    if (x86_cc(c, 5)) { goto L_f93b2; }
    X86_TICK(c, 9);
    // 0f93a9  push edi
    X86_AT(c, 0xf93a9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f93aa  call 0xf9d38
    X86_AT(c, 0xf93aau);
    push32(c, 0xf93afu); f_000f9d38(c); X86_RET(c, 0xf93afu);
    X86_TICK(c, 2);
    // 0f93af  add esp, 4
    X86_AT(c, 0xf93afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f93b2:
    X86_TICK(c, 12);
    // 0f93b2  cmp dword ptr [edi*4 + 0xce508], 0
    X86_AT(c, 0xf93b2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE508u))), 0x0u, 0, 4);
    // 0f93ba  je 0xf95d3
    X86_AT(c, 0xf93bau);
    if (x86_cc(c, 4)) { goto L_f95d3; }
    X86_TICK(c, 12);
    // 0f93c0  cmp dword ptr [edi*4 + 0xce508], 3
    X86_AT(c, 0xf93c0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE508u))), 0x3u, 0, 4);
    // 0f93c8  jne 0xf944f
    X86_AT(c, 0xf93c8u);
    if (x86_cc(c, 5)) { goto L_f944f; }
    X86_TICK(c, 9);
    // 0f93ce  push 9
    X86_AT(c, 0xf93ceu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f93d0  call 0xe1a7c
    X86_AT(c, 0xf93d0u);
    push32(c, 0xf93d5u); f_000e1a7c(c); X86_RET(c, 0xf93d5u);
    X86_TICK(c, 9);
    // 0f93d5  add esp, 4
    X86_AT(c, 0xf93d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f93d8  cmp eax, 5
    X86_AT(c, 0xf93d8u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0f93db  jl 0xf95d3
    X86_AT(c, 0xf93dbu);
    if (x86_cc(c, 12)) { goto L_f95d3; }
    X86_TICK(c, 9);
    // 0f93e1  push 0x62
    X86_AT(c, 0xf93e1u);
    { uint32_t v = 0x62u; push32(c, v); }
    // 0f93e3  call 0xe1a7c
    X86_AT(c, 0xf93e3u);
    push32(c, 0xf93e8u); f_000e1a7c(c); X86_RET(c, 0xf93e8u);
    X86_TICK(c, 63);
    // 0f93e8  cdq 
    X86_AT(c, 0xf93e8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f93e9  mov ecx, 3
    X86_AT(c, 0xf93e9u);
    c.r[1] = 0x3u;
    // 0f93ee  idiv ecx
    X86_AT(c, 0xf93eeu);
    x86_idiv(c, c.r[1], 4, 0xf93eeu);
    // 0f93f0  dec edx
    X86_AT(c, 0xf93f0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0f93f1  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xf93f1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0f93f4  add esp, 4
    X86_AT(c, 0xf93f4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f93f7  add edx, dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xf93f7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u))), 0, 4); }
    // 0f93fe  cmp edx, 0x3e
    X86_AT(c, 0xf93feu);
    (void)x86_sub(c, c.r[2], 0x3Eu, 0, 4);
    // 0f9401  jg 0xf95d3
    X86_AT(c, 0xf9401u);
    if (x86_cc(c, 15)) { goto L_f95d3; }
    X86_TICK(c, 7);
    // 0f9407  dec edx
    X86_AT(c, 0xf9407u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0f9408  jl 0xf95d3
    X86_AT(c, 0xf9408u);
    if (x86_cc(c, 12)) { goto L_f95d3; }
    X86_TICK(c, 9);
    // 0f940e  push 0x62
    X86_AT(c, 0xf940eu);
    { uint32_t v = 0x62u; push32(c, v); }
    // 0f9410  call 0xe1a7c
    X86_AT(c, 0xf9410u);
    push32(c, 0xf9415u); f_000e1a7c(c); X86_RET(c, 0xf9415u);
    X86_TICK(c, 63);
    // 0f9415  cdq 
    X86_AT(c, 0xf9415u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f9416  mov ecx, 3
    X86_AT(c, 0xf9416u);
    c.r[1] = 0x3u;
    // 0f941b  idiv ecx
    X86_AT(c, 0xf941bu);
    x86_idiv(c, c.r[1], 4, 0xf941bu);
    // 0f941d  dec edx
    X86_AT(c, 0xf941du);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0f941e  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xf941eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0f9421  add esp, 4
    X86_AT(c, 0xf9421u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f9424  add edx, dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xf9424u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u))), 0, 4); }
    // 0f942b  cmp edx, 0x3e
    X86_AT(c, 0xf942bu);
    (void)x86_sub(c, c.r[2], 0x3Eu, 0, 4);
    // 0f942e  jg 0xf95d3
    X86_AT(c, 0xf942eu);
    if (x86_cc(c, 15)) { goto L_f95d3; }
    X86_TICK(c, 7);
    // 0f9434  cmp edx, 1
    X86_AT(c, 0xf9434u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0f9437  jl 0xf95d3
    X86_AT(c, 0xf9437u);
    if (x86_cc(c, 12)) { goto L_f95d3; }
    X86_TICK(c, 21);
    // 0f943d  mov eax, dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xf943du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)));
    // 0f9444  add eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xf9444u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0f9447  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf9447u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f944a  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xf944au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0f944d  jmp 0xf94a8
    X86_AT(c, 0xf944du);
    goto L_f94a8;
L_f944f:
    X86_TICK(c, 25);
    // 0f944f  lea eax, [ebp - 0x10]
    X86_AT(c, 0xf944fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0f9452  push eax
    X86_AT(c, 0xf9452u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f9453  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf9453u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f9456  push eax
    X86_AT(c, 0xf9456u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f9457  lea ebx, [ebp - 8]
    X86_AT(c, 0xf9457u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f945a  push ebx
    X86_AT(c, 0xf945au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f945b  lea esi, [ebp - 4]
    X86_AT(c, 0xf945bu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f945e  push esi
    X86_AT(c, 0xf945eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f945f  push edi
    X86_AT(c, 0xf945fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9460  call 0xefd94
    X86_AT(c, 0xf9460u);
    push32(c, 0xf9465u); f_000efd94(c); X86_RET(c, 0xf9465u);
    X86_TICK(c, 30);
    // 0f9465  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9465u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f946a  lea edx, [eax + eax*4]
    X86_AT(c, 0xf946au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f946d  lea edx, [eax + edx*2]
    X86_AT(c, 0xf946du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9470  shl edx, 5
    X86_AT(c, 0xf9470u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9473  sub edx, eax
    X86_AT(c, 0xf9473u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9475  add esp, 0x14
    X86_AT(c, 0xf9475u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f9478  mov eax, dword ptr [esi]
    X86_AT(c, 0xf9478u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0f947a  cmp eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf947au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0, 4);
    // 0f9480  jne 0xf94a8
    X86_AT(c, 0xf9480u);
    if (x86_cc(c, 5)) { goto L_f94a8; }
    X86_TICK(c, 15);
    // 0f9482  mov eax, dword ptr [ebx]
    X86_AT(c, 0xf9482u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0f9484  cmp eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf9484u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))), 0, 4);
    // 0f948a  jne 0xf94a8
    X86_AT(c, 0xf948au);
    if (x86_cc(c, 5)) { goto L_f94a8; }
    X86_TICK(c, 12);
    // 0f948c  cmp dword ptr [edi*4 + 0xce508], 2
    X86_AT(c, 0xf948cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE508u))), 0x2u, 0, 4);
    // 0f9494  jne 0xf95d9
    X86_AT(c, 0xf9494u);
    if (x86_cc(c, 5)) { goto L_f95d9; }
L_f949a:
    X86_TICK(c, 9);
    // 0f949a  push edi
    X86_AT(c, 0xf949au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f949b  call 0xf9dfc
    X86_AT(c, 0xf949bu);
    push32(c, 0xf94a0u); f_000f9dfc(c); X86_RET(c, 0xf94a0u);
    X86_TICK(c, 9);
    // 0f94a0  add esp, 4
    X86_AT(c, 0xf94a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f94a3  jmp 0xf95d9
    X86_AT(c, 0xf94a3u);
    goto L_f95d9;
L_f94a8:
    X86_TICK(c, 33);
    // 0f94a8  mov eax, dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xf94a8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)));
    // 0f94af  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xf94afu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0f94b2  mov eax, dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xf94b2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)));
    // 0f94b9  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xf94b9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0f94bc  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xf94bcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0f94bf  mov dword ptr [edi*4 + 0xce408], eax
    X86_AT(c, 0xf94bfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)), c.r[0]);
    // 0f94c6  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf94c6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f94c9  mov dword ptr [edi*4 + 0xce488], eax
    X86_AT(c, 0xf94c9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)), c.r[0]);
    // 0f94d0  push edi
    X86_AT(c, 0xf94d0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f94d1  call 0xf8c9c
    X86_AT(c, 0xf94d1u);
    push32(c, 0xf94d6u); f_000f8c9c(c); X86_RET(c, 0xf94d6u);
    X86_TICK(c, 9);
    // 0f94d6  add esp, 4
    X86_AT(c, 0xf94d6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f94d9  and eax, eax
    X86_AT(c, 0xf94d9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f94db  je 0xf9545
    X86_AT(c, 0xf94dbu);
    if (x86_cc(c, 4)) { goto L_f9545; }
    X86_TICK(c, 15);
    // 0f94dd  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xf94ddu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0f94e0  mov dword ptr [edi*4 + 0xce488], eax
    X86_AT(c, 0xf94e0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)), c.r[0]);
    // 0f94e7  push edi
    X86_AT(c, 0xf94e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f94e8  call 0xf8c9c
    X86_AT(c, 0xf94e8u);
    push32(c, 0xf94edu); f_000f8c9c(c); X86_RET(c, 0xf94edu);
    X86_TICK(c, 9);
    // 0f94ed  add esp, 4
    X86_AT(c, 0xf94edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f94f0  and eax, eax
    X86_AT(c, 0xf94f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f94f2  je 0xf9545
    X86_AT(c, 0xf94f2u);
    if (x86_cc(c, 4)) { goto L_f9545; }
    X86_TICK(c, 21);
    // 0f94f4  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xf94f4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0f94f7  mov dword ptr [edi*4 + 0xce408], eax
    X86_AT(c, 0xf94f7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)), c.r[0]);
    // 0f94fe  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf94feu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f9501  mov dword ptr [edi*4 + 0xce488], eax
    X86_AT(c, 0xf9501u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)), c.r[0]);
    // 0f9508  push edi
    X86_AT(c, 0xf9508u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9509  call 0xf8c9c
    X86_AT(c, 0xf9509u);
    push32(c, 0xf950eu); f_000f8c9c(c); X86_RET(c, 0xf950eu);
    X86_TICK(c, 9);
    // 0f950e  add esp, 4
    X86_AT(c, 0xf950eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f9511  and eax, eax
    X86_AT(c, 0xf9511u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f9513  je 0xf9545
    X86_AT(c, 0xf9513u);
    if (x86_cc(c, 4)) { goto L_f9545; }
    X86_TICK(c, 24);
    // 0f9515  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xf9515u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0f9518  mov dword ptr [edi*4 + 0xce408], eax
    X86_AT(c, 0xf9518u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)), c.r[0]);
    // 0f951f  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xf951fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0f9522  mov dword ptr [edi*4 + 0xce488], eax
    X86_AT(c, 0xf9522u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)), c.r[0]);
    // 0f9529  cmp dword ptr [edi*4 + 0xce508], 2
    X86_AT(c, 0xf9529u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE508u))), 0x2u, 0, 4);
    // 0f9531  jne 0xf95d3
    X86_AT(c, 0xf9531u);
    if (x86_cc(c, 5)) { goto L_f95d3; }
    X86_TICK(c, 9);
    // 0f9537  push edi
    X86_AT(c, 0xf9537u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9538  call 0xf8ea0
    X86_AT(c, 0xf9538u);
    push32(c, 0xf953du); f_000f8ea0(c); X86_RET(c, 0xf953du);
    X86_TICK(c, 9);
    // 0f953d  add esp, 4
    X86_AT(c, 0xf953du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f9540  jmp 0xf95d3
    X86_AT(c, 0xf9540u);
    goto L_f95d3;
L_f9545:
    X86_TICK(c, 36);
    // 0f9545  mov eax, dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xf9545u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)));
    // 0f954c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf954cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f954f  mov eax, dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xf954fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)));
    // 0f9556  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf9556u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f9559  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xf9559u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0f955c  mov dword ptr [edi*4 + 0xce408], eax
    X86_AT(c, 0xf955cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)), c.r[0]);
    // 0f9563  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xf9563u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0f9566  mov dword ptr [edi*4 + 0xce488], eax
    X86_AT(c, 0xf9566u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)), c.r[0]);
    // 0f956d  cmp dword ptr [edi*4 + 0xce508], 2
    X86_AT(c, 0xf956du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE508u))), 0x2u, 0, 4);
    // 0f9575  jne 0xf9593
    X86_AT(c, 0xf9575u);
    if (x86_cc(c, 5)) { goto L_f9593; }
    X86_TICK(c, 9);
    // 0f9577  push 9
    X86_AT(c, 0xf9577u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f9579  call 0xe1a7c
    X86_AT(c, 0xf9579u);
    push32(c, 0xf957eu); f_000e1a7c(c); X86_RET(c, 0xf957eu);
    X86_TICK(c, 9);
    // 0f957e  add esp, 4
    X86_AT(c, 0xf957eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f9581  cmp eax, 3
    X86_AT(c, 0xf9581u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0f9584  jge 0xf9593
    X86_AT(c, 0xf9584u);
    if (x86_cc(c, 13)) { goto L_f9593; }
    X86_TICK(c, 9);
    // 0f9586  push edi
    X86_AT(c, 0xf9586u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9587  call 0xf8ea0
    X86_AT(c, 0xf9587u);
    push32(c, 0xf958cu); f_000f8ea0(c); X86_RET(c, 0xf958cu);
    X86_TICK(c, 9);
    // 0f958c  add esp, 4
    X86_AT(c, 0xf958cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f958f  and eax, eax
    X86_AT(c, 0xf958fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f9591  je 0xf95d3
    X86_AT(c, 0xf9591u);
    if (x86_cc(c, 4)) { goto L_f95d3; }
L_f9593:
    X86_TICK(c, 12);
    // 0f9593  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xf9593u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0f959a  je 0xf95d3
    X86_AT(c, 0xf959au);
    if (x86_cc(c, 4)) { goto L_f95d3; }
    X86_TICK(c, 31);
    // 0f959c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xf959cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0f959f  mov dword ptr [edi*4 + 0xce408], eax
    X86_AT(c, 0xf959fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)), c.r[0]);
    // 0f95a6  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf95a6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f95a9  mov dword ptr [edi*4 + 0xce488], eax
    X86_AT(c, 0xf95a9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)), c.r[0]);
    // 0f95b0  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xf95b0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0f95b3  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xf95b3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0f95b6  push 0
    X86_AT(c, 0xf95b6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f95b8  call 0xf3c24
    X86_AT(c, 0xf95b8u);
    push32(c, 0xf95bdu); f_000f3c24(c); X86_RET(c, 0xf95bdu);
    X86_TICK(c, 25);
    // 0f95bd  push dword ptr [ebp - 8]
    X86_AT(c, 0xf95bdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0f95c0  push dword ptr [ebp - 4]
    X86_AT(c, 0xf95c0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f95c3  movzx eax, byte ptr [edi + 0xce3e8]
    X86_AT(c, 0xf95c3u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3E8u)));
    // 0f95ca  push eax
    X86_AT(c, 0xf95cau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f95cb  call 0xf3c24
    X86_AT(c, 0xf95cbu);
    push32(c, 0xf95d0u); f_000f3c24(c); X86_RET(c, 0xf95d0u);
    X86_TICK(c, 2);
    // 0f95d0  add esp, 0x18
    X86_AT(c, 0xf95d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_f95d3:
    X86_TICK(c, 9);
    // 0f95d3  inc edi
    X86_AT(c, 0xf95d3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f95d4  jmp 0xf9334
    X86_AT(c, 0xf95d4u);
    X86_POLL(c, 0xf9334u); goto L_f9334;
L_f95d9:
    X86_TICK(c, 28);
    // 0f95d9  pop edi
    X86_AT(c, 0xf95d9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f95da  pop esi
    X86_AT(c, 0xf95dau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f95db  pop ebx
    X86_AT(c, 0xf95dbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f95dc  leave 
    X86_AT(c, 0xf95dcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f95dd  ret 
    X86_AT(c, 0xf95ddu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf931cu, "ran off the end of a function");
}
void f_000f95e0(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0f95e0  push ebp
    X86_AT(c, 0xf95e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f95e1  mov ebp, esp
    X86_AT(c, 0xf95e1u);
    c.r[5] = c.r[4];
    // 0f95e3  sub esp, 0xc
    X86_AT(c, 0xf95e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0f95e6  push ebx
    X86_AT(c, 0xf95e6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f95e7  push esi
    X86_AT(c, 0xf95e7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f95e8  push edi
    X86_AT(c, 0xf95e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f95e9  push 0xaa9c
    X86_AT(c, 0xf95e9u);
    { uint32_t v = 0xAA9Cu; push32(c, v); }
    // 0f95ee  call 0xe75f8
    X86_AT(c, 0xf95eeu);
    push32(c, 0xf95f3u); f_000e75f8(c); X86_RET(c, 0xf95f3u);
    X86_TICK(c, 4);
    // 0f95f3  sub edi, edi
    X86_AT(c, 0xf95f3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0f95f5  add esp, 4
    X86_AT(c, 0xf95f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f95f8:
    X86_TICK(c, 7);
    // 0f95f8  cmp edi, 0x20
    X86_AT(c, 0xf95f8u);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0f95fb  jge 0xf9635
    X86_AT(c, 0xf95fbu);
    if (x86_cc(c, 13)) { goto L_f9635; }
    X86_TICK(c, 25);
    // 0f95fd  sub eax, eax
    X86_AT(c, 0xf95fdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f95ff  mov byte ptr [edi + 0xce3c8], al
    X86_AT(c, 0xf95ffu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u)), g8(c, 0));
    // 0f9605  mov dword ptr [edi*4 + 0xce408], eax
    X86_AT(c, 0xf9605u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)), c.r[0]);
    // 0f960c  mov dword ptr [edi*4 + 0xce488], eax
    X86_AT(c, 0xf960cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)), c.r[0]);
    // 0f9613  mov byte ptr [edi + 0xce3e8], al
    X86_AT(c, 0xf9613u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3E8u)), g8(c, 0));
    // 0f9619  mov dword ptr [edi*4 + 0xce508], eax
    X86_AT(c, 0xf9619u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE508u)), c.r[0]);
    // 0f9620  mov dword ptr [edi*4 + 0xce588], eax
    X86_AT(c, 0xf9620u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE588u)), c.r[0]);
    // 0f9627  mov dword ptr [edi*4 + 0xce69c], 0xffffffff
    X86_AT(c, 0xf9627u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE69Cu)), 0xFFFFFFFFu);
    // 0f9632  inc edi
    X86_AT(c, 0xf9632u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f9633  jmp 0xf95f8
    X86_AT(c, 0xf9633u);
    X86_POLL(c, 0xf95f8u); goto L_f95f8;
L_f9635:
    X86_TICK(c, 31);
    // 0f9635  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9635u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f963a  lea edx, [eax + eax*4]
    X86_AT(c, 0xf963au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f963d  lea edx, [eax + edx*2]
    X86_AT(c, 0xf963du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9640  shl edx, 5
    X86_AT(c, 0xf9640u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9643  sub edx, eax
    X86_AT(c, 0xf9643u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9645  mov eax, 0x2c
    X86_AT(c, 0xf9645u);
    c.r[0] = 0x2Cu;
    // 0f964a  mov dword ptr [edx + 0xcdf6b], eax
    X86_AT(c, 0xf964au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), c.r[0]);
    // 0f9650  mov dword ptr [edx + 0xcdf5b], eax
    X86_AT(c, 0xf9650u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu)), c.r[0]);
    // 0f9656  mov eax, 0x14
    X86_AT(c, 0xf9656u);
    c.r[0] = 0x14u;
    // 0f965b  mov dword ptr [edx + 0xcdf6f], eax
    X86_AT(c, 0xf965bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), c.r[0]);
    // 0f9661  mov dword ptr [edx + 0xcdf5f], eax
    X86_AT(c, 0xf9661u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu)), c.r[0]);
    // 0f9667  mov dword ptr [edx + 0xcdf9f], 0x1d
    X86_AT(c, 0xf9667u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Fu)), 0x1Du);
    // 0f9671  mov dword ptr [edx + 0xcdfa3], 0x38
    X86_AT(c, 0xf9671u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDFA3u)), 0x38u);
    // 0f967b  sub edi, edi
    X86_AT(c, 0xf967bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_f967d:
    X86_TICK(c, 7);
    // 0f967d  cmp edi, 0xc
    X86_AT(c, 0xf967du);
    (void)x86_sub(c, c.r[7], 0xCu, 0, 4);
    // 0f9680  jge 0xf976f
    X86_AT(c, 0xf9680u);
    if (x86_cc(c, 13)) { goto L_f976f; }
    X86_TICK(c, 12);
    // 0f9686  cmp byte ptr [edi + 0xce3c8], 0
    X86_AT(c, 0xf9686u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u))), 0x0u, 0, 1);
    // 0f968d  jne 0xf9769
    X86_AT(c, 0xf968du);
    if (x86_cc(c, 5)) { goto L_f9769; }
    X86_TICK(c, 9);
    // 0f9693  push 0xc
    X86_AT(c, 0xf9693u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f9695  call 0xf9aac
    X86_AT(c, 0xf9695u);
    push32(c, 0xf969au); f_000f9aac(c); X86_RET(c, 0xf969au);
    X86_TICK(c, 12);
    // 0f969a  xchg esi, eax
    X86_AT(c, 0xf969au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0f969b  add esp, 4
    X86_AT(c, 0xf969bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f969e  and esi, esi
    X86_AT(c, 0xf969eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0f96a0  jl 0xf9769
    X86_AT(c, 0xf96a0u);
    if (x86_cc(c, 12)) { goto L_f9769; }
    X86_TICK(c, 7);
    // 0f96a6  cmp esi, 0xc
    X86_AT(c, 0xf96a6u);
    (void)x86_sub(c, c.r[6], 0xCu, 0, 4);
    // 0f96a9  jg 0xf9769
    X86_AT(c, 0xf96a9u);
    if (x86_cc(c, 15)) { goto L_f9769; }
    X86_TICK(c, 14);
    // 0f96af  mov al, byte ptr [esi + 0xd4a04]
    X86_AT(c, 0xf96afu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xD4A04u))));
    // 0f96b5  mov byte ptr [edi + 0xce3c8], al
    X86_AT(c, 0xf96b5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u)), g8(c, 0));
    // 0f96bb  mov al, byte ptr [esi + 0xd4a10]
    X86_AT(c, 0xf96bbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xD4A10u))));
    // 0f96c1  mov byte ptr [ebp - 9], al
    X86_AT(c, 0xf96c1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 0f96c4  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xf96c4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_f96cb:
    X86_TICK(c, 9);
    // 0f96cb  push 0x3f
    X86_AT(c, 0xf96cbu);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0f96cd  call 0xe1a7c
    X86_AT(c, 0xf96cdu);
    push32(c, 0xf96d2u); f_000e1a7c(c); X86_RET(c, 0xf96d2u);
    X86_TICK(c, 12);
    // 0f96d2  xchg ebx, eax
    X86_AT(c, 0xf96d2u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f96d3  push 0x3f
    X86_AT(c, 0xf96d3u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0f96d5  call 0xe1a7c
    X86_AT(c, 0xf96d5u);
    push32(c, 0xf96dau); f_000e1a7c(c); X86_RET(c, 0xf96dau);
    X86_TICK(c, 13);
    // 0f96da  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf96dau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f96dd  push eax
    X86_AT(c, 0xf96ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f96de  push ebx
    X86_AT(c, 0xf96deu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f96df  call 0xef8ac
    X86_AT(c, 0xf96dfu);
    push32(c, 0xf96e4u); f_000ef8ac(c); X86_RET(c, 0xf96e4u);
    X86_TICK(c, 15);
    // 0f96e4  add esp, 0x10
    X86_AT(c, 0xf96e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f96e7  movzx edx, byte ptr [ebp - 9]
    X86_AT(c, 0xf96e7u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)));
    // 0f96eb  cmp eax, edx
    X86_AT(c, 0xf96ebu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0f96ed  je 0xf96f8
    X86_AT(c, 0xf96edu);
    if (x86_cc(c, 4)) { goto L_f96f8; }
    X86_TICK(c, 18);
    // 0f96ef  inc dword ptr [ebp - 8]
    X86_AT(c, 0xf96efu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f96f2  cmp dword ptr [ebp - 8], 0x40
    X86_AT(c, 0xf96f2u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x40u, 0, 4);
    // 0f96f6  jle 0xf96cb
    X86_AT(c, 0xf96f6u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xf96cbu); goto L_f96cb; }
L_f96f8:
    X86_TICK(c, 24);
    // 0f96f8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf96f8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f96fd  lea edx, [eax + eax*4]
    X86_AT(c, 0xf96fdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9700  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9700u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9703  shl edx, 5
    X86_AT(c, 0xf9703u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9706  sub edx, eax
    X86_AT(c, 0xf9706u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9708  cmp ebx, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf9708u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0, 4);
    // 0f970e  je 0xf9721
    X86_AT(c, 0xf970eu);
    if (x86_cc(c, 4)) { goto L_f9721; }
    X86_TICK(c, 15);
    // 0f9710  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf9710u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f9716  cmp eax, dword ptr [ebp - 4]
    X86_AT(c, 0xf9716u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0f9719  je 0xf9721
    X86_AT(c, 0xf9719u);
    if (x86_cc(c, 4)) { goto L_f9721; }
    X86_TICK(c, 12);
    // 0f971b  cmp dword ptr [ebp - 8], 0x40
    X86_AT(c, 0xf971bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x40u, 0, 4);
    // 0f971f  jle 0xf972a
    X86_AT(c, 0xf971fu);
    if (x86_cc(c, 14)) { goto L_f972a; }
L_f9721:
    X86_TICK(c, 9);
    // 0f9721  mov byte ptr [edi + 0xce3c8], 0
    X86_AT(c, 0xf9721u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u)), 0x0u);
    // 0f9728  jmp 0xf9769
    X86_AT(c, 0xf9728u);
    goto L_f9769;
L_f972a:
    X86_TICK(c, 29);
    // 0f972a  mov dword ptr [edi*4 + 0xce408], ebx
    X86_AT(c, 0xf972au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)), c.r[3]);
    // 0f9731  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xf9731u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0f9734  mov dword ptr [edi*4 + 0xce488], eax
    X86_AT(c, 0xf9734u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)), c.r[0]);
    // 0f973b  mov al, byte ptr [esi*4 + 0xd4a1c]
    X86_AT(c, 0xf973bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xD4A1Cu))));
    // 0f9742  mov byte ptr [edi + 0xce3e8], al
    X86_AT(c, 0xf9742u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3E8u)), g8(c, 0));
    // 0f9748  mov dword ptr [edi*4 + 0xce508], 2
    X86_AT(c, 0xf9748u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE508u)), 0x2u);
    // 0f9753  mov al, byte ptr [edi + 0xce3c8]
    X86_AT(c, 0xf9753u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u))));
    // 0f9759  push eax
    X86_AT(c, 0xf9759u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f975a  call 0xe35e0
    X86_AT(c, 0xf975au);
    push32(c, 0xf975fu); f_000e35e0(c); X86_RET(c, 0xf975fu);
    X86_TICK(c, 4);
    // 0f975f  mov dword ptr [edi*4 + 0xce608], eax
    X86_AT(c, 0xf975fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE608u)), c.r[0]);
    // 0f9766  add esp, 4
    X86_AT(c, 0xf9766u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f9769:
    X86_TICK(c, 9);
    // 0f9769  inc edi
    X86_AT(c, 0xf9769u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f976a  jmp 0xf967d
    X86_AT(c, 0xf976au);
    X86_POLL(c, 0xf967du); goto L_f967d;
L_f976f:
    X86_TICK(c, 9);
    // 0f976f  push 2
    X86_AT(c, 0xf976fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f9771  call 0xe6c68
    X86_AT(c, 0xf9771u);
    push32(c, 0xf9776u); f_000e6c68(c); X86_RET(c, 0xf9776u);
    X86_TICK(c, 30);
    // 0f9776  add esp, 4
    X86_AT(c, 0xf9776u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f9779  pop edi
    X86_AT(c, 0xf9779u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f977a  pop esi
    X86_AT(c, 0xf977au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f977b  pop ebx
    X86_AT(c, 0xf977bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f977c  leave 
    X86_AT(c, 0xf977cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f977d  ret 
    X86_AT(c, 0xf977du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf95e0u, "ran off the end of a function");
}
}

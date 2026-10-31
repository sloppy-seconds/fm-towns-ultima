#include "p_game_funcs.h"
namespace p_game {
void f_000e6e28(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e6e28  push ebp
    X86_AT(c, 0xe6e28u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6e29  mov ebp, esp
    X86_AT(c, 0xe6e29u);
    c.r[5] = c.r[4];
    // 0e6e2b  push ebx
    X86_AT(c, 0xe6e2bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6e2c  push esi
    X86_AT(c, 0xe6e2cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6e2d  push edi
    X86_AT(c, 0xe6e2du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6e2e  sub esi, esi
    X86_AT(c, 0xe6e2eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e6e30  movzx edx, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe6e30u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6e34  sub edx, 0x20
    X86_AT(c, 0xe6e34u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0e6e37  cmp edx, 0x3a
    X86_AT(c, 0xe6e37u);
    (void)x86_sub(c, c.r[2], 0x3Au, 0, 4);
    // 0e6e3a  ja 0xe7076
    X86_AT(c, 0xe6e3au);
    if (x86_cc(c, 7)) { goto L_e7076; }
    X86_TICK(c, 7);
    // 0e6e40  jmp dword ptr cs:[edx*4 + 0xe6e48]
    X86_AT(c, 0xe6e40u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE6E48u)));
      switch (t) {
      case 0xe6f34u: goto L_e6f34;
      case 0xe6f3du: goto L_e6f3d;
      case 0xe6f46u: goto L_e6f46;
      case 0xe6f4fu: goto L_e6f4f;
      case 0xe6f58u: goto L_e6f58;
      case 0xe6f61u: goto L_e6f61;
      case 0xe6f6au: goto L_e6f6a;
      case 0xe6f73u: goto L_e6f73;
      case 0xe6f7cu: goto L_e6f7c;
      case 0xe6f85u: goto L_e6f85;
      case 0xe6f8eu: goto L_e6f8e;
      case 0xe6f97u: goto L_e6f97;
      case 0xe6fa0u: goto L_e6fa0;
      case 0xe6fa9u: goto L_e6fa9;
      case 0xe6fb2u: goto L_e6fb2;
      case 0xe6fbbu: goto L_e6fbb;
      case 0xe6fc4u: goto L_e6fc4;
      case 0xe6fcdu: goto L_e6fcd;
      case 0xe6fd6u: goto L_e6fd6;
      case 0xe6fdfu: goto L_e6fdf;
      case 0xe6fe8u: goto L_e6fe8;
      case 0xe6ff1u: goto L_e6ff1;
      case 0xe6ffau: goto L_e6ffa;
      case 0xe7003u: goto L_e7003;
      case 0xe700cu: goto L_e700c;
      case 0xe7015u: goto L_e7015;
      case 0xe701eu: goto L_e701e;
      case 0xe7024u: goto L_e7024;
      case 0xe702au: goto L_e702a;
      case 0xe7030u: goto L_e7030;
      case 0xe7036u: goto L_e7036;
      case 0xe703cu: goto L_e703c;
      case 0xe7042u: goto L_e7042;
      case 0xe7048u: goto L_e7048;
      case 0xe704eu: goto L_e704e;
      case 0xe7054u: goto L_e7054;
      case 0xe705au: goto L_e705a;
      case 0xe7060u: goto L_e7060;
      case 0xe7066u: goto L_e7066;
      case 0xe706cu: goto L_e706c;
      case 0xe7072u: goto L_e7072;
      case 0xe7076u: goto L_e7076;
      default: x86_jump(c, t); return; } }
L_e6f34:
    X86_TICK(c, 9);
    // 0e6f34  mov si, 0x4081
    X86_AT(c, 0xe6f34u);
    s16(c, 6, 0x4081u);
    // 0e6f38  jmp 0xe7076
    X86_AT(c, 0xe6f38u);
    goto L_e7076;
L_e6f3d:
    X86_TICK(c, 9);
    // 0e6f3d  mov si, 0x4681
    X86_AT(c, 0xe6f3du);
    s16(c, 6, 0x4681u);
    // 0e6f41  jmp 0xe7076
    X86_AT(c, 0xe6f41u);
    goto L_e7076;
L_e6f46:
    X86_TICK(c, 9);
    // 0e6f46  mov si, 0x75eb
    X86_AT(c, 0xe6f46u);
    s16(c, 6, 0x75EBu);
    // 0e6f4a  jmp 0xe7076
    X86_AT(c, 0xe6f4au);
    goto L_e7076;
L_e6f4f:
    X86_TICK(c, 9);
    // 0e6f4f  mov si, 0x74eb
    X86_AT(c, 0xe6f4fu);
    s16(c, 6, 0x74EBu);
    // 0e6f53  jmp 0xe7076
    X86_AT(c, 0xe6f53u);
    goto L_e7076;
L_e6f58:
    X86_TICK(c, 9);
    // 0e6f58  mov si, 0x5e81
    X86_AT(c, 0xe6f58u);
    s16(c, 6, 0x5E81u);
    // 0e6f5c  jmp 0xe7076
    X86_AT(c, 0xe6f5cu);
    goto L_e7076;
L_e6f61:
    X86_TICK(c, 9);
    // 0e6f61  mov si, 0x80eb
    X86_AT(c, 0xe6f61u);
    s16(c, 6, 0x80EBu);
    // 0e6f65  jmp 0xe7076
    X86_AT(c, 0xe6f65u);
    goto L_e7076;
L_e6f6a:
    X86_TICK(c, 9);
    // 0e6f6a  mov si, 0x76eb
    X86_AT(c, 0xe6f6au);
    s16(c, 6, 0x76EBu);
    // 0e6f6e  jmp 0xe7076
    X86_AT(c, 0xe6f6eu);
    goto L_e7076;
L_e6f73:
    X86_TICK(c, 9);
    // 0e6f73  mov si, 0x77eb
    X86_AT(c, 0xe6f73u);
    s16(c, 6, 0x77EBu);
    // 0e6f77  jmp 0xe7076
    X86_AT(c, 0xe6f77u);
    goto L_e7076;
L_e6f7c:
    X86_TICK(c, 9);
    // 0e6f7c  mov si, 0x78eb
    X86_AT(c, 0xe6f7cu);
    s16(c, 6, 0x78EBu);
    // 0e6f80  jmp 0xe7076
    X86_AT(c, 0xe6f80u);
    goto L_e7076;
L_e6f85:
    X86_TICK(c, 9);
    // 0e6f85  mov si, 0x79eb
    X86_AT(c, 0xe6f85u);
    s16(c, 6, 0x79EBu);
    // 0e6f89  jmp 0xe7076
    X86_AT(c, 0xe6f89u);
    goto L_e7076;
L_e6f8e:
    X86_TICK(c, 9);
    // 0e6f8e  mov si, 0x7aeb
    X86_AT(c, 0xe6f8eu);
    s16(c, 6, 0x7AEBu);
    // 0e6f92  jmp 0xe7076
    X86_AT(c, 0xe6f92u);
    goto L_e7076;
L_e6f97:
    X86_TICK(c, 9);
    // 0e6f97  mov si, 0x7beb
    X86_AT(c, 0xe6f97u);
    s16(c, 6, 0x7BEBu);
    // 0e6f9b  jmp 0xe7076
    X86_AT(c, 0xe6f9bu);
    goto L_e7076;
L_e6fa0:
    X86_TICK(c, 9);
    // 0e6fa0  mov si, 0x7ceb
    X86_AT(c, 0xe6fa0u);
    s16(c, 6, 0x7CEBu);
    // 0e6fa4  jmp 0xe7076
    X86_AT(c, 0xe6fa4u);
    goto L_e7076;
L_e6fa9:
    X86_TICK(c, 9);
    // 0e6fa9  mov si, 0x7deb
    X86_AT(c, 0xe6fa9u);
    s16(c, 6, 0x7DEBu);
    // 0e6fad  jmp 0xe7076
    X86_AT(c, 0xe6fadu);
    goto L_e7076;
L_e6fb2:
    X86_TICK(c, 9);
    // 0e6fb2  mov si, 0x7eeb
    X86_AT(c, 0xe6fb2u);
    s16(c, 6, 0x7EEBu);
    // 0e6fb6  jmp 0xe7076
    X86_AT(c, 0xe6fb6u);
    goto L_e7076;
L_e6fbb:
    X86_TICK(c, 9);
    // 0e6fbb  mov si, 0x40eb
    X86_AT(c, 0xe6fbbu);
    s16(c, 6, 0x40EBu);
    // 0e6fbf  jmp 0xe7076
    X86_AT(c, 0xe6fbfu);
    goto L_e7076;
L_e6fc4:
    X86_TICK(c, 9);
    // 0e6fc4  mov si, 0x41eb
    X86_AT(c, 0xe6fc4u);
    s16(c, 6, 0x41EBu);
    // 0e6fc8  jmp 0xe7076
    X86_AT(c, 0xe6fc8u);
    goto L_e7076;
L_e6fcd:
    X86_TICK(c, 9);
    // 0e6fcd  mov si, 0x42eb
    X86_AT(c, 0xe6fcdu);
    s16(c, 6, 0x42EBu);
    // 0e6fd1  jmp 0xe7076
    X86_AT(c, 0xe6fd1u);
    goto L_e7076;
L_e6fd6:
    X86_TICK(c, 9);
    // 0e6fd6  mov si, 0x43eb
    X86_AT(c, 0xe6fd6u);
    s16(c, 6, 0x43EBu);
    // 0e6fda  jmp 0xe7076
    X86_AT(c, 0xe6fdau);
    goto L_e7076;
L_e6fdf:
    X86_TICK(c, 9);
    // 0e6fdf  mov si, 0x44eb
    X86_AT(c, 0xe6fdfu);
    s16(c, 6, 0x44EBu);
    // 0e6fe3  jmp 0xe7076
    X86_AT(c, 0xe6fe3u);
    goto L_e7076;
L_e6fe8:
    X86_TICK(c, 9);
    // 0e6fe8  mov si, 0x45eb
    X86_AT(c, 0xe6fe8u);
    s16(c, 6, 0x45EBu);
    // 0e6fec  jmp 0xe7076
    X86_AT(c, 0xe6fecu);
    goto L_e7076;
L_e6ff1:
    X86_TICK(c, 9);
    // 0e6ff1  mov si, 0x46eb
    X86_AT(c, 0xe6ff1u);
    s16(c, 6, 0x46EBu);
    // 0e6ff5  jmp 0xe7076
    X86_AT(c, 0xe6ff5u);
    goto L_e7076;
L_e6ffa:
    X86_TICK(c, 9);
    // 0e6ffa  mov si, 0x47eb
    X86_AT(c, 0xe6ffau);
    s16(c, 6, 0x47EBu);
    // 0e6ffe  jmp 0xe7076
    X86_AT(c, 0xe6ffeu);
    goto L_e7076;
L_e7003:
    X86_TICK(c, 9);
    // 0e7003  mov si, 0x48eb
    X86_AT(c, 0xe7003u);
    s16(c, 6, 0x48EBu);
    // 0e7007  jmp 0xe7076
    X86_AT(c, 0xe7007u);
    goto L_e7076;
L_e700c:
    X86_TICK(c, 9);
    // 0e700c  mov si, 0x49eb
    X86_AT(c, 0xe700cu);
    s16(c, 6, 0x49EBu);
    // 0e7010  jmp 0xe7076
    X86_AT(c, 0xe7010u);
    goto L_e7076;
L_e7015:
    X86_TICK(c, 9);
    // 0e7015  mov si, 0x4aeb
    X86_AT(c, 0xe7015u);
    s16(c, 6, 0x4AEBu);
    // 0e7019  jmp 0xe7076
    X86_AT(c, 0xe7019u);
    goto L_e7076;
L_e701e:
    X86_TICK(c, 9);
    // 0e701e  mov si, 0x4beb
    X86_AT(c, 0xe701eu);
    s16(c, 6, 0x4BEBu);
    // 0e7022  jmp 0xe7076
    X86_AT(c, 0xe7022u);
    goto L_e7076;
L_e7024:
    X86_TICK(c, 9);
    // 0e7024  mov si, 0x4ceb
    X86_AT(c, 0xe7024u);
    s16(c, 6, 0x4CEBu);
    // 0e7028  jmp 0xe7076
    X86_AT(c, 0xe7028u);
    goto L_e7076;
L_e702a:
    X86_TICK(c, 9);
    // 0e702a  mov si, 0x4deb
    X86_AT(c, 0xe702au);
    s16(c, 6, 0x4DEBu);
    // 0e702e  jmp 0xe7076
    X86_AT(c, 0xe702eu);
    goto L_e7076;
L_e7030:
    X86_TICK(c, 9);
    // 0e7030  mov si, 0x4eeb
    X86_AT(c, 0xe7030u);
    s16(c, 6, 0x4EEBu);
    // 0e7034  jmp 0xe7076
    X86_AT(c, 0xe7034u);
    goto L_e7076;
L_e7036:
    X86_TICK(c, 9);
    // 0e7036  mov si, 0x4feb
    X86_AT(c, 0xe7036u);
    s16(c, 6, 0x4FEBu);
    // 0e703a  jmp 0xe7076
    X86_AT(c, 0xe703au);
    goto L_e7076;
L_e703c:
    X86_TICK(c, 9);
    // 0e703c  mov si, 0x50eb
    X86_AT(c, 0xe703cu);
    s16(c, 6, 0x50EBu);
    // 0e7040  jmp 0xe7076
    X86_AT(c, 0xe7040u);
    goto L_e7076;
L_e7042:
    X86_TICK(c, 9);
    // 0e7042  mov si, 0x51eb
    X86_AT(c, 0xe7042u);
    s16(c, 6, 0x51EBu);
    // 0e7046  jmp 0xe7076
    X86_AT(c, 0xe7046u);
    goto L_e7076;
L_e7048:
    X86_TICK(c, 9);
    // 0e7048  mov si, 0x52eb
    X86_AT(c, 0xe7048u);
    s16(c, 6, 0x52EBu);
    // 0e704c  jmp 0xe7076
    X86_AT(c, 0xe704cu);
    goto L_e7076;
L_e704e:
    X86_TICK(c, 9);
    // 0e704e  mov si, 0x53eb
    X86_AT(c, 0xe704eu);
    s16(c, 6, 0x53EBu);
    // 0e7052  jmp 0xe7076
    X86_AT(c, 0xe7052u);
    goto L_e7076;
L_e7054:
    X86_TICK(c, 9);
    // 0e7054  mov si, 0x54eb
    X86_AT(c, 0xe7054u);
    s16(c, 6, 0x54EBu);
    // 0e7058  jmp 0xe7076
    X86_AT(c, 0xe7058u);
    goto L_e7076;
L_e705a:
    X86_TICK(c, 9);
    // 0e705a  mov si, 0x55eb
    X86_AT(c, 0xe705au);
    s16(c, 6, 0x55EBu);
    // 0e705e  jmp 0xe7076
    X86_AT(c, 0xe705eu);
    goto L_e7076;
L_e7060:
    X86_TICK(c, 9);
    // 0e7060  mov si, 0x56eb
    X86_AT(c, 0xe7060u);
    s16(c, 6, 0x56EBu);
    // 0e7064  jmp 0xe7076
    X86_AT(c, 0xe7064u);
    goto L_e7076;
L_e7066:
    X86_TICK(c, 9);
    // 0e7066  mov si, 0x57eb
    X86_AT(c, 0xe7066u);
    s16(c, 6, 0x57EBu);
    // 0e706a  jmp 0xe7076
    X86_AT(c, 0xe706au);
    goto L_e7076;
L_e706c:
    X86_TICK(c, 9);
    // 0e706c  mov si, 0x58eb
    X86_AT(c, 0xe706cu);
    s16(c, 6, 0x58EBu);
    // 0e7070  jmp 0xe7076
    X86_AT(c, 0xe7070u);
    goto L_e7076;
L_e7072:
    X86_TICK(c, 2);
    // 0e7072  mov si, 0x59eb
    X86_AT(c, 0xe7072u);
    s16(c, 6, 0x59EBu);
L_e7076:
    X86_TICK(c, 7);
    // 0e7076  and si, si
    X86_AT(c, 0xe7076u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0e7079  je 0xe70e4
    X86_AT(c, 0xe7079u);
    if (x86_cc(c, 4)) { goto L_e70e4; }
    X86_TICK(c, 67);
    // 0e707b  mov eax, 0x7a7d0
    X86_AT(c, 0xe707bu);
    c.r[0] = 0x7A7D0u;
    // 0e7080  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe7080u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e7083  lea edx, [edx + edx*2]
    X86_AT(c, 0xe7083u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0e7086  lea ecx, [edx + edx*8]
    X86_AT(c, 0xe7086u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0e7089  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xe7089u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0e708c  lea edi, [eax + ecx*1 + 0x714]
    X86_AT(c, 0xe708cu);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x714u);
    // 0e7093  mov dx, word ptr [edi + 1]
    X86_AT(c, 0xe7093u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e7097  add dx, 4
    X86_AT(c, 0xe7097u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 0e709b  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0xe709bu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 0e709e  shl ebx, 3
    X86_AT(c, 0xe709eu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 0e70a1  add ebx, edx
    X86_AT(c, 0xe70a1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e70a3  mov word ptr [eax + 0x53440], bx
    X86_AT(c, 0xe70a3u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x53440u)), (c.r[3] & 0xFFFFu));
    // 0e70aa  mov dx, word ptr [edi + 5]
    X86_AT(c, 0xe70aau);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0e70ae  add dx, 0x11
    X86_AT(c, 0xe70aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 0e70b2  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xe70b2u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0e70b5  shl ebx, 4
    X86_AT(c, 0xe70b5u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0e70b8  add ebx, edx
    X86_AT(c, 0xe70b8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e70ba  mov word ptr [eax + 0x53442], bx
    X86_AT(c, 0xe70bau);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x53442u)), (c.r[3] & 0xFFFFu));
    // 0e70c1  mov word ptr [eax + 0x53444], 2
    X86_AT(c, 0xe70c1u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x53444u)), 0x2u);
    // 0e70ca  mov word ptr [eax + 0x53446], si
    X86_AT(c, 0xe70cau);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x53446u)), (c.r[6] & 0xFFFFu));
    // 0e70d1  lea edx, [eax + 0x53440]
    X86_AT(c, 0xe70d1u);
    c.r[2] = (uint32_t)(c.r[0] + 0x53440u);
    // 0e70d7  push edx
    X86_AT(c, 0xe70d7u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e70d8  add eax, 8
    X86_AT(c, 0xe70d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e70db  push eax
    X86_AT(c, 0xe70dbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e70dc  call 0xa7d
    X86_AT(c, 0xe70dcu);
    push32(c, 0xe70e1u); f_00000a7d(c); X86_RET(c, 0xe70e1u);
    X86_TICK(c, 2);
    // 0e70e1  add esp, 8
    X86_AT(c, 0xe70e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e70e4:
    X86_TICK(c, 28);
    // 0e70e4  pop edi
    X86_AT(c, 0xe70e4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e70e5  pop esi
    X86_AT(c, 0xe70e5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e70e6  pop ebx
    X86_AT(c, 0xe70e6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e70e7  leave 
    X86_AT(c, 0xe70e7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e70e8  ret 
    X86_AT(c, 0xe70e8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6e28u, "ran off the end of a function");
}
void f_000e7076(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e7076  and si, si
    X86_AT(c, 0xe7076u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0e7079  je 0xe70e4
    X86_AT(c, 0xe7079u);
    if (x86_cc(c, 4)) { goto L_e70e4; }
    X86_TICK(c, 67);
    // 0e707b  mov eax, 0x7a7d0
    X86_AT(c, 0xe707bu);
    c.r[0] = 0x7A7D0u;
    // 0e7080  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe7080u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e7083  lea edx, [edx + edx*2]
    X86_AT(c, 0xe7083u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0e7086  lea ecx, [edx + edx*8]
    X86_AT(c, 0xe7086u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0e7089  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xe7089u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0e708c  lea edi, [eax + ecx*1 + 0x714]
    X86_AT(c, 0xe708cu);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x714u);
    // 0e7093  mov dx, word ptr [edi + 1]
    X86_AT(c, 0xe7093u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e7097  add dx, 4
    X86_AT(c, 0xe7097u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 0e709b  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0xe709bu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 0e709e  shl ebx, 3
    X86_AT(c, 0xe709eu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 0e70a1  add ebx, edx
    X86_AT(c, 0xe70a1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e70a3  mov word ptr [eax + 0x53440], bx
    X86_AT(c, 0xe70a3u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x53440u)), (c.r[3] & 0xFFFFu));
    // 0e70aa  mov dx, word ptr [edi + 5]
    X86_AT(c, 0xe70aau);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0e70ae  add dx, 0x11
    X86_AT(c, 0xe70aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 0e70b2  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xe70b2u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0e70b5  shl ebx, 4
    X86_AT(c, 0xe70b5u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0e70b8  add ebx, edx
    X86_AT(c, 0xe70b8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e70ba  mov word ptr [eax + 0x53442], bx
    X86_AT(c, 0xe70bau);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x53442u)), (c.r[3] & 0xFFFFu));
    // 0e70c1  mov word ptr [eax + 0x53444], 2
    X86_AT(c, 0xe70c1u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x53444u)), 0x2u);
    // 0e70ca  mov word ptr [eax + 0x53446], si
    X86_AT(c, 0xe70cau);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x53446u)), (c.r[6] & 0xFFFFu));
    // 0e70d1  lea edx, [eax + 0x53440]
    X86_AT(c, 0xe70d1u);
    c.r[2] = (uint32_t)(c.r[0] + 0x53440u);
    // 0e70d7  push edx
    X86_AT(c, 0xe70d7u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e70d8  add eax, 8
    X86_AT(c, 0xe70d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e70db  push eax
    X86_AT(c, 0xe70dbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e70dc  call 0xa7d
    X86_AT(c, 0xe70dcu);
    push32(c, 0xe70e1u); f_00000a7d(c); X86_RET(c, 0xe70e1u);
    X86_TICK(c, 2);
    // 0e70e1  add esp, 8
    X86_AT(c, 0xe70e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e70e4:
    X86_TICK(c, 28);
    // 0e70e4  pop edi
    X86_AT(c, 0xe70e4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e70e5  pop esi
    X86_AT(c, 0xe70e5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e70e6  pop ebx
    X86_AT(c, 0xe70e6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e70e7  leave 
    X86_AT(c, 0xe70e7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e70e8  ret 
    X86_AT(c, 0xe70e8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7076u, "ran off the end of a function");
}
void f_000e70ec(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0e70ec  push ebp
    X86_AT(c, 0xe70ecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e70ed  mov ebp, esp
    X86_AT(c, 0xe70edu);
    c.r[5] = c.r[4];
    // 0e70ef  push ebx
    X86_AT(c, 0xe70efu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e70f0  push esi
    X86_AT(c, 0xe70f0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e70f1  push edi
    X86_AT(c, 0xe70f1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e70f2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe70f2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e70f5  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe70f5u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e70f8  lea eax, [edi + edi*2]
    X86_AT(c, 0xe70f8u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e70fb  lea edx, [eax + eax*8]
    X86_AT(c, 0xe70fbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e70fe  lea edx, [eax + edx*2]
    X86_AT(c, 0xe70feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e7101  lea ebx, [edx + 0x7aee4]
    X86_AT(c, 0xe7101u);
    c.r[3] = (uint32_t)(c.r[2] + 0x7AEE4u);
L_e7107:
    X86_TICK(c, 12);
    // 0e7107  cmp byte ptr [esi], 0
    X86_AT(c, 0xe7107u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6]))), 0x0u, 0, 1);
    // 0e710a  je 0xe7145
    X86_AT(c, 0xe710au);
    if (x86_cc(c, 4)) { goto L_e7145; }
    X86_TICK(c, 17);
    // 0e710c  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0xe710cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0e710f  inc eax
    X86_AT(c, 0xe710fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e7110  cmp eax, dword ptr [ebx + 0x11]
    X86_AT(c, 0xe7110u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u))), 0, 4);
    // 0e7113  jle 0xe7132
    X86_AT(c, 0xe7113u);
    if (x86_cc(c, 14)) { goto L_e7132; }
    X86_TICK(c, 17);
    // 0e7115  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xe7115u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0e711c  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xe711cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0e711f  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0xe711fu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 0e7122  jne 0xe712f
    X86_AT(c, 0xe7122u);
    if (x86_cc(c, 5)) { goto L_e712f; }
    X86_TICK(c, 9);
    // 0e7124  push edi
    X86_AT(c, 0xe7124u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7125  call 0xe6bc8
    X86_AT(c, 0xe7125u);
    push32(c, 0xe712au); f_000e6bc8(c); X86_RET(c, 0xe712au);
    X86_TICK(c, 9);
    // 0e712a  add esp, 4
    X86_AT(c, 0xe712au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e712d  jmp 0xe7132
    X86_AT(c, 0xe712du);
    goto L_e7132;
L_e712f:
    X86_TICK(c, 6);
    // 0e712f  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0xe712fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_e7132:
    X86_TICK(c, 15);
    // 0e7132  mov al, byte ptr [esi]
    X86_AT(c, 0xe7132u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e7134  push eax
    X86_AT(c, 0xe7134u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7135  push edi
    X86_AT(c, 0xe7135u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7136  call 0xe6e28
    X86_AT(c, 0xe7136u);
    push32(c, 0xe713bu); f_000e6e28(c); X86_RET(c, 0xe713bu);
    X86_TICK(c, 18);
    // 0e713b  add dword ptr [ebx + 0x19], 2
    X86_AT(c, 0xe713bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x2u, 0, 4)); }
    // 0e713f  inc esi
    X86_AT(c, 0xe713fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e7140  add esp, 8
    X86_AT(c, 0xe7140u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e7143  jmp 0xe7107
    X86_AT(c, 0xe7143u);
    X86_POLL(c, 0xe7107u); goto L_e7107;
L_e7145:
    X86_TICK(c, 28);
    // 0e7145  pop edi
    X86_AT(c, 0xe7145u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7146  pop esi
    X86_AT(c, 0xe7146u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7147  pop ebx
    X86_AT(c, 0xe7147u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e7148  leave 
    X86_AT(c, 0xe7148u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7149  ret 
    X86_AT(c, 0xe7149u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe70ecu, "ran off the end of a function");
}
void f_000e714c(X86Cpu& c) {
    X86_TICK(c, 73);
    // 0e714c  push ebp
    X86_AT(c, 0xe714cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e714d  mov ebp, esp
    X86_AT(c, 0xe714du);
    c.r[5] = c.r[4];
    // 0e714f  sub esp, 8
    X86_AT(c, 0xe714fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e7152  push edi
    X86_AT(c, 0xe7152u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7153  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe7153u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e7156  lea eax, [eax + eax*2]
    X86_AT(c, 0xe7156u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e7159  lea edx, [eax + eax*8]
    X86_AT(c, 0xe7159u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e715c  lea edx, [eax + edx*2]
    X86_AT(c, 0xe715cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e715f  lea edi, [edx + 0x7aee4]
    X86_AT(c, 0xe715fu);
    c.r[7] = (uint32_t)(c.r[2] + 0x7AEE4u);
    // 0e7165  mov ax, word ptr [edi + 1]
    X86_AT(c, 0xe7165u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e7169  add ax, 4
    X86_AT(c, 0xe7169u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0e716d  mov edx, dword ptr [edi + 0x19]
    X86_AT(c, 0xe716du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 0e7170  shl edx, 3
    X86_AT(c, 0xe7170u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0e7173  add edx, eax
    X86_AT(c, 0xe7173u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e7175  mov word ptr [ebp - 8], dx
    X86_AT(c, 0xe7175u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 0e7179  mov ax, word ptr [edi + 5]
    X86_AT(c, 0xe7179u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0e717d  add ax, 0x11
    X86_AT(c, 0xe717du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0e7181  mov edx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xe7181u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0e7184  shl edx, 4
    X86_AT(c, 0xe7184u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0e7187  add edx, eax
    X86_AT(c, 0xe7187u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e7189  mov word ptr [ebp - 6], dx
    X86_AT(c, 0xe7189u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[2] & 0xFFFFu));
    // 0e718d  sub eax, eax
    X86_AT(c, 0xe718du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e718f  mov word ptr [ebp - 4], ax
    X86_AT(c, 0xe718fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 0e7193  lea edx, [ebp - 8]
    X86_AT(c, 0xe7193u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e7196  push edx
    X86_AT(c, 0xe7196u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e7197  push eax
    X86_AT(c, 0xe7197u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7198  push 0x7a7d8
    X86_AT(c, 0xe7198u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e719d  call 0xac5
    X86_AT(c, 0xe719du);
    push32(c, 0xe71a2u); f_00000ac5(c); X86_RET(c, 0xe71a2u);
    X86_TICK(c, 18);
    // 0e71a2  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe71a2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e71a5  push 0x10
    X86_AT(c, 0xe71a5u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0e71a7  push 0x10
    X86_AT(c, 0xe71a7u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0e71a9  push 0x7a7d8
    X86_AT(c, 0xe71a9u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e71ae  call 0xb5d
    X86_AT(c, 0xe71aeu);
    push32(c, 0xe71b3u); f_00000b5d(c); X86_RET(c, 0xe71b3u);
    X86_TICK(c, 22);
    // 0e71b3  add esp, 0x1c
    X86_AT(c, 0xe71b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0e71b6  pop edi
    X86_AT(c, 0xe71b6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e71b7  leave 
    X86_AT(c, 0xe71b7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e71b8  ret 
    X86_AT(c, 0xe71b8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe714cu, "ran off the end of a function");
}
void f_000e71bc(X86Cpu& c) {
    X86_TICK(c, 83);
    // 0e71bc  push ebp
    X86_AT(c, 0xe71bcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e71bd  mov ebp, esp
    X86_AT(c, 0xe71bdu);
    c.r[5] = c.r[4];
    // 0e71bf  push esi
    X86_AT(c, 0xe71bfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e71c0  push edi
    X86_AT(c, 0xe71c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e71c1  mov eax, 0x7a7d0
    X86_AT(c, 0xe71c1u);
    c.r[0] = 0x7A7D0u;
    // 0e71c6  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe71c6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e71c9  lea edx, [edx + edx*2]
    X86_AT(c, 0xe71c9u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0e71cc  lea ecx, [edx + edx*8]
    X86_AT(c, 0xe71ccu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0e71cf  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xe71cfu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0e71d2  lea edi, [eax + ecx*1 + 0x714]
    X86_AT(c, 0xe71d2u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x714u);
    // 0e71d9  mov dx, word ptr [edi + 1]
    X86_AT(c, 0xe71d9u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e71dd  add dx, 4
    X86_AT(c, 0xe71ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 0e71e1  mov esi, dword ptr [edi + 0x19]
    X86_AT(c, 0xe71e1u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 0e71e4  shl esi, 3
    X86_AT(c, 0xe71e4u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0e71e7  add esi, edx
    X86_AT(c, 0xe71e7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e71e9  mov word ptr [eax + 0x5344c], si
    X86_AT(c, 0xe71e9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5344Cu)), (c.r[6] & 0xFFFFu));
    // 0e71f0  mov dx, word ptr [edi + 5]
    X86_AT(c, 0xe71f0u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0e71f4  add dx, 0x11
    X86_AT(c, 0xe71f4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 0e71f8  mov esi, dword ptr [edi + 0x1d]
    X86_AT(c, 0xe71f8u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0e71fb  shl esi, 4
    X86_AT(c, 0xe71fbu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 0e71fe  add esi, edx
    X86_AT(c, 0xe71feu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e7200  mov word ptr [eax + 0x5344e], si
    X86_AT(c, 0xe7200u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5344Eu)), (c.r[6] & 0xFFFFu));
    // 0e7207  mov word ptr [eax + 0x53450], 2
    X86_AT(c, 0xe7207u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x53450u)), 0x2u);
    // 0e7210  mov edx, dword ptr [eax]
    X86_AT(c, 0xe7210u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e7212  mov dx, word ptr [eax + edx*2 + 0x53458]
    X86_AT(c, 0xe7212u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 2 + 0x53458u))));
    // 0e721a  mov word ptr [eax + 0x53452], dx
    X86_AT(c, 0xe721au);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x53452u)), (c.r[2] & 0xFFFFu));
    // 0e7221  lea edx, [eax + 0x5344c]
    X86_AT(c, 0xe7221u);
    c.r[2] = (uint32_t)(c.r[0] + 0x5344Cu);
    // 0e7227  push edx
    X86_AT(c, 0xe7227u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e7228  add eax, 8
    X86_AT(c, 0xe7228u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e722b  push eax
    X86_AT(c, 0xe722bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e722c  call 0xa7d
    X86_AT(c, 0xe722cu);
    push32(c, 0xe7231u); f_00000a7d(c); X86_RET(c, 0xe7231u);
    X86_TICK(c, 26);
    // 0e7231  add esp, 8
    X86_AT(c, 0xe7231u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e7234  pop edi
    X86_AT(c, 0xe7234u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7235  pop esi
    X86_AT(c, 0xe7235u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7236  leave 
    X86_AT(c, 0xe7236u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7237  ret 
    X86_AT(c, 0xe7237u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe71bcu, "ran off the end of a function");
}
void f_000e7238(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e7238  inc dword ptr [0x7aee0]
    X86_AT(c, 0xe7238u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x7AEE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e723e  cmp dword ptr [0x7aee0], 0x1e
    X86_AT(c, 0xe723eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7AEE0u))), 0x1Eu, 0, 4);
    // 0e7245  jl 0xe725c
    X86_AT(c, 0xe7245u);
    if (x86_cc(c, 12)) { goto L_e725c; }
    X86_TICK(c, 24);
    // 0e7247  sub eax, eax
    X86_AT(c, 0xe7247u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e7249  mov dword ptr [0x7aee0], eax
    X86_AT(c, 0xe7249u);
    wr32((c.sbase[3] + (uint32_t)(0x7AEE0u)), c.r[0]);
    // 0e724e  mov edx, 0x7a7d0
    X86_AT(c, 0xe724eu);
    c.r[2] = 0x7A7D0u;
    // 0e7253  inc dword ptr [edx]
    X86_AT(c, 0xe7253u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e7255  cmp dword ptr [edx], 4
    X86_AT(c, 0xe7255u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2]))), 0x4u, 0, 4);
    // 0e7258  jne 0xe725c
    X86_AT(c, 0xe7258u);
    if (x86_cc(c, 5)) { goto L_e725c; }
    X86_TICK(c, 2);
    // 0e725a  mov dword ptr [edx], eax
    X86_AT(c, 0xe725au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_e725c:
    X86_TICK(c, 10);
    // 0e725c  ret 
    X86_AT(c, 0xe725cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7238u, "ran off the end of a function");
}
void f_000e7260(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0e7260  push ebp
    X86_AT(c, 0xe7260u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e7261  mov ebp, esp
    X86_AT(c, 0xe7261u);
    c.r[5] = c.r[4];
    // 0e7263  push ebx
    X86_AT(c, 0xe7263u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e7264  push esi
    X86_AT(c, 0xe7264u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7265  push edi
    X86_AT(c, 0xe7265u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7266  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe7266u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e7269  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe7269u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e726c  mov ebx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe726cu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e726f  and esi, esi
    X86_AT(c, 0xe726fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e7271  jl 0xe72a5
    X86_AT(c, 0xe7271u);
    if (x86_cc(c, 12)) { goto L_e72a5; }
    X86_TICK(c, 19);
    // 0e7273  mov eax, 0x7a7d0
    X86_AT(c, 0xe7273u);
    c.r[0] = 0x7A7D0u;
    // 0e7278  lea edx, [edi + edi*2]
    X86_AT(c, 0xe7278u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e727b  lea ecx, [edx + edx*8]
    X86_AT(c, 0xe727bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0e727e  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xe727eu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0e7281  cmp esi, dword ptr [eax + ecx*1 + 0x725]
    X86_AT(c, 0xe7281u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x725u))), 0, 4);
    // 0e7288  jg 0xe72a5
    X86_AT(c, 0xe7288u);
    if (x86_cc(c, 15)) { goto L_e72a5; }
    X86_TICK(c, 7);
    // 0e728a  and ebx, ebx
    X86_AT(c, 0xe728au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e728c  jl 0xe72a5
    X86_AT(c, 0xe728cu);
    if (x86_cc(c, 12)) { goto L_e72a5; }
    X86_TICK(c, 11);
    // 0e728e  cmp ebx, dword ptr [eax + ecx*1 + 0x729]
    X86_AT(c, 0xe728eu);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x729u))), 0, 4);
    // 0e7295  jg 0xe72a5
    X86_AT(c, 0xe7295u);
    if (x86_cc(c, 15)) { goto L_e72a5; }
    X86_TICK(c, 4);
    // 0e7297  mov dword ptr [eax + ecx*1 + 0x72d], esi
    X86_AT(c, 0xe7297u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x72Du)), c.r[6]);
    // 0e729e  mov dword ptr [eax + ecx*1 + 0x731], ebx
    X86_AT(c, 0xe729eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x731u)), c.r[3]);
L_e72a5:
    X86_TICK(c, 28);
    // 0e72a5  pop edi
    X86_AT(c, 0xe72a5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e72a6  pop esi
    X86_AT(c, 0xe72a6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e72a7  pop ebx
    X86_AT(c, 0xe72a7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e72a8  leave 
    X86_AT(c, 0xe72a8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e72a9  ret 
    X86_AT(c, 0xe72a9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7260u, "ran off the end of a function");
}
void f_000e72ac(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e72ac  push ebp
    X86_AT(c, 0xe72acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e72ad  mov ebp, esp
    X86_AT(c, 0xe72adu);
    c.r[5] = c.r[4];
    // 0e72af  push ebx
    X86_AT(c, 0xe72afu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e72b0  push esi
    X86_AT(c, 0xe72b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e72b1  push edi
    X86_AT(c, 0xe72b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e72b2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe72b2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e72b5  push 4
    X86_AT(c, 0xe72b5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e72b7  call 0xe58b8
    X86_AT(c, 0xe72b7u);
    push32(c, 0xe72bcu); f_000e58b8(c); X86_RET(c, 0xe72bcu);
    X86_TICK(c, 11);
    // 0e72bc  push 0x422
    X86_AT(c, 0xe72bcu);
    { uint32_t v = 0x422u; push32(c, v); }
    // 0e72c1  push 0x7a7d8
    X86_AT(c, 0xe72c1u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e72c6  call 0x2c5
    X86_AT(c, 0xe72c6u);
    push32(c, 0xe72cbu); f_000002c5(c); X86_RET(c, 0xe72cbu);
    X86_TICK(c, 9);
    // 0e72cb  push 0xf
    X86_AT(c, 0xe72cbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e72cd  call 0xe5748
    X86_AT(c, 0xe72cdu);
    push32(c, 0xe72d2u); f_000e5748(c); X86_RET(c, 0xe72d2u);
    X86_TICK(c, 9);
    // 0e72d2  push 0xf
    X86_AT(c, 0xe72d2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e72d4  call 0xe5778
    X86_AT(c, 0xe72d4u);
    push32(c, 0xe72d9u); f_000e5778(c); X86_RET(c, 0xe72d9u);
    X86_TICK(c, 87);
    // 0e72d9  lea eax, [edi + edi*2]
    X86_AT(c, 0xe72d9u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e72dc  lea edx, [eax + eax*8]
    X86_AT(c, 0xe72dcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e72df  lea edx, [eax + edx*2]
    X86_AT(c, 0xe72dfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e72e2  mov ax, word ptr [edx + 0x7aee5]
    X86_AT(c, 0xe72e2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AEE5u))));
    // 0e72e9  add ax, 4
    X86_AT(c, 0xe72e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0e72ed  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe72edu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e72f0  shl esi, 3
    X86_AT(c, 0xe72f0u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0e72f3  add esi, eax
    X86_AT(c, 0xe72f3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e72f5  mov word ptr [0x7add8], si
    X86_AT(c, 0xe72f5u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADD8u)), (c.r[6] & 0xFFFFu));
    // 0e72fc  mov ax, word ptr [edx + 0x7aee9]
    X86_AT(c, 0xe72fcu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AEE9u))));
    // 0e7303  add ax, 2
    X86_AT(c, 0xe7303u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0e7307  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe7307u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e730a  shl esi, 4
    X86_AT(c, 0xe730au);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 0e730d  add esi, eax
    X86_AT(c, 0xe730du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e730f  mov word ptr [0x7adda], si
    X86_AT(c, 0xe730fu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDAu)), (c.r[6] & 0xFFFFu));
    // 0e7316  mov ax, word ptr [edx + 0x7aee5]
    X86_AT(c, 0xe7316u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AEE5u))));
    // 0e731d  add ax, 0xb
    X86_AT(c, 0xe731du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xBu, 0, 2)); }
    // 0e7321  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe7321u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e7324  shl esi, 3
    X86_AT(c, 0xe7324u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0e7327  add esi, eax
    X86_AT(c, 0xe7327u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e7329  mov word ptr [0x7addc], si
    X86_AT(c, 0xe7329u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), (c.r[6] & 0xFFFFu));
    // 0e7330  mov ax, word ptr [edx + 0x7aee9]
    X86_AT(c, 0xe7330u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AEE9u))));
    // 0e7337  add ax, 0x11
    X86_AT(c, 0xe7337u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0e733b  mov esi, dword ptr [ebp + 0x18]
    X86_AT(c, 0xe733bu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0e733e  shl esi, 4
    X86_AT(c, 0xe733eu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 0e7341  add esi, eax
    X86_AT(c, 0xe7341u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e7343  mov word ptr [0x7adde], si
    X86_AT(c, 0xe7343u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), (c.r[6] & 0xFFFFu));
    // 0e734a  push 0x7add8
    X86_AT(c, 0xe734au);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e734f  push 0x7a7d8
    X86_AT(c, 0xe734fu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e7354  mov ebx, edx
    X86_AT(c, 0xe7354u);
    c.r[3] = c.r[2];
    // 0e7356  call 0x8bd
    X86_AT(c, 0xe7356u);
    push32(c, 0xe735bu); f_000008bd(c); X86_RET(c, 0xe735bu);
    X86_TICK(c, 12);
    // 0e735b  push dword ptr [ebx + 0x7af09]
    X86_AT(c, 0xe735bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AF09u))); push32(c, v); }
    // 0e7361  call 0xe5748
    X86_AT(c, 0xe7361u);
    push32(c, 0xe7366u); f_000e5748(c); X86_RET(c, 0xe7366u);
    X86_TICK(c, 12);
    // 0e7366  push dword ptr [ebx + 0x7af15]
    X86_AT(c, 0xe7366u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AF15u))); push32(c, v); }
    // 0e736c  call 0xe5778
    X86_AT(c, 0xe736cu);
    push32(c, 0xe7371u); f_000e5778(c); X86_RET(c, 0xe7371u);
    X86_TICK(c, 15);
    // 0e7371  movsx eax, word ptr [0x7a7d4]
    X86_AT(c, 0xe7371u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7A7D4u)));
    // 0e7378  push eax
    X86_AT(c, 0xe7378u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7379  call 0xe58b8
    X86_AT(c, 0xe7379u);
    push32(c, 0xe737eu); f_000e58b8(c); X86_RET(c, 0xe737eu);
    X86_TICK(c, 19);
    // 0e737e  add esp, 0x28
    X86_AT(c, 0xe737eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0e7381  movsx eax, word ptr [0x7aedc]
    X86_AT(c, 0xe7381u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7AEDCu)));
    // 0e7388  push eax
    X86_AT(c, 0xe7388u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7389  push 0x7a7d8
    X86_AT(c, 0xe7389u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e738e  call 0x2c5
    X86_AT(c, 0xe738eu);
    push32(c, 0xe7393u); f_000002c5(c); X86_RET(c, 0xe7393u);
    X86_TICK(c, 30);
    // 0e7393  add esp, 8
    X86_AT(c, 0xe7393u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e7396  pop edi
    X86_AT(c, 0xe7396u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7397  pop esi
    X86_AT(c, 0xe7397u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7398  pop ebx
    X86_AT(c, 0xe7398u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e7399  leave 
    X86_AT(c, 0xe7399u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e739a  ret 
    X86_AT(c, 0xe739au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe72acu, "ran off the end of a function");
}
void f_000e739c(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0e739c  push ebp
    X86_AT(c, 0xe739cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e739d  mov ebp, esp
    X86_AT(c, 0xe739du);
    c.r[5] = c.r[4];
    // 0e739f  push ebx
    X86_AT(c, 0xe739fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e73a0  push edi
    X86_AT(c, 0xe73a0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e73a1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe73a1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e73a4  lea eax, [edi + edi*2]
    X86_AT(c, 0xe73a4u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e73a7  lea edx, [eax + eax*8]
    X86_AT(c, 0xe73a7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e73aa  lea edx, [eax + edx*2]
    X86_AT(c, 0xe73aau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e73ad  push dword ptr [edx + 0x7af15]
    X86_AT(c, 0xe73adu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AF15u))); push32(c, v); }
    // 0e73b3  mov ebx, edx
    X86_AT(c, 0xe73b3u);
    c.r[3] = c.r[2];
    // 0e73b5  call 0xe5748
    X86_AT(c, 0xe73b5u);
    push32(c, 0xe73bau); f_000e5748(c); X86_RET(c, 0xe73bau);
    X86_TICK(c, 12);
    // 0e73ba  push dword ptr [ebx + 0x7af15]
    X86_AT(c, 0xe73bau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AF15u))); push32(c, v); }
    // 0e73c0  call 0xe5778
    X86_AT(c, 0xe73c0u);
    push32(c, 0xe73c5u); f_000e5778(c); X86_RET(c, 0xe73c5u);
    X86_TICK(c, 79);
    // 0e73c5  mov ax, word ptr [ebx + 0x7aee5]
    X86_AT(c, 0xe73c5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AEE5u))));
    // 0e73cc  add ax, 4
    X86_AT(c, 0xe73ccu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0e73d0  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe73d0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e73d3  shl edx, 3
    X86_AT(c, 0xe73d3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0e73d6  add edx, eax
    X86_AT(c, 0xe73d6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e73d8  mov word ptr [0x7add8], dx
    X86_AT(c, 0xe73d8u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADD8u)), (c.r[2] & 0xFFFFu));
    // 0e73df  mov ax, word ptr [ebx + 0x7aee9]
    X86_AT(c, 0xe73dfu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AEE9u))));
    // 0e73e6  add ax, 2
    X86_AT(c, 0xe73e6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0e73ea  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe73eau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e73ed  shl edx, 4
    X86_AT(c, 0xe73edu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0e73f0  add edx, eax
    X86_AT(c, 0xe73f0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e73f2  mov word ptr [0x7adda], dx
    X86_AT(c, 0xe73f2u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDAu)), (c.r[2] & 0xFFFFu));
    // 0e73f9  mov ax, word ptr [ebx + 0x7aee5]
    X86_AT(c, 0xe73f9u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AEE5u))));
    // 0e7400  add ax, 0xb
    X86_AT(c, 0xe7400u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xBu, 0, 2)); }
    // 0e7404  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe7404u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e7407  shl edx, 3
    X86_AT(c, 0xe7407u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0e740a  add edx, eax
    X86_AT(c, 0xe740au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e740c  mov word ptr [0x7addc], dx
    X86_AT(c, 0xe740cu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), (c.r[2] & 0xFFFFu));
    // 0e7413  mov ax, word ptr [ebx + 0x7aee9]
    X86_AT(c, 0xe7413u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AEE9u))));
    // 0e741a  add ax, 0x11
    X86_AT(c, 0xe741au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0e741e  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xe741eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0e7421  shl edx, 4
    X86_AT(c, 0xe7421u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0e7424  add edx, eax
    X86_AT(c, 0xe7424u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e7426  mov word ptr [0x7adde], dx
    X86_AT(c, 0xe7426u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), (c.r[2] & 0xFFFFu));
    // 0e742d  push 0x7add8
    X86_AT(c, 0xe742du);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e7432  push 0x7a7d8
    X86_AT(c, 0xe7432u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e7437  call 0x8bd
    X86_AT(c, 0xe7437u);
    push32(c, 0xe743cu); f_000008bd(c); X86_RET(c, 0xe743cu);
    X86_TICK(c, 15);
    // 0e743c  movsx eax, word ptr [0x7a7d4]
    X86_AT(c, 0xe743cu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7A7D4u)));
    // 0e7443  push eax
    X86_AT(c, 0xe7443u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7444  call 0xe58b8
    X86_AT(c, 0xe7444u);
    push32(c, 0xe7449u); f_000e58b8(c); X86_RET(c, 0xe7449u);
    X86_TICK(c, 12);
    // 0e7449  push dword ptr [ebx + 0x7af09]
    X86_AT(c, 0xe7449u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AF09u))); push32(c, v); }
    // 0e744f  call 0xe5748
    X86_AT(c, 0xe744fu);
    push32(c, 0xe7454u); f_000e5748(c); X86_RET(c, 0xe7454u);
    X86_TICK(c, 26);
    // 0e7454  add esp, 0x18
    X86_AT(c, 0xe7454u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e7457  pop edi
    X86_AT(c, 0xe7457u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7458  pop ebx
    X86_AT(c, 0xe7458u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e7459  leave 
    X86_AT(c, 0xe7459u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e745a  ret 
    X86_AT(c, 0xe745au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe739cu, "ran off the end of a function");
}
void f_000e745c(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0e745c  push ebp
    X86_AT(c, 0xe745cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e745d  mov ebp, esp
    X86_AT(c, 0xe745du);
    c.r[5] = c.r[4];
    // 0e745f  push ebx
    X86_AT(c, 0xe745fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e7460  push edi
    X86_AT(c, 0xe7460u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7461  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe7461u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e7464  lea eax, [edi + edi*2]
    X86_AT(c, 0xe7464u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e7467  lea edx, [eax + eax*8]
    X86_AT(c, 0xe7467u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e746a  lea edx, [eax + edx*2]
    X86_AT(c, 0xe746au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e746d  cmp dword ptr [edx + 0x7af19], 0xffffffff
    X86_AT(c, 0xe746du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AF19u))), 0xFFFFFFFFu, 0, 4);
    // 0e7474  jne 0xe7492
    X86_AT(c, 0xe7474u);
    if (x86_cc(c, 5)) { goto L_e7492; }
    X86_TICK(c, 11);
    // 0e7476  push 9
    X86_AT(c, 0xe7476u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e7478  mov ebx, edx
    X86_AT(c, 0xe7478u);
    c.r[3] = c.r[2];
    // 0e747a  call 0xe58b8
    X86_AT(c, 0xe747au);
    push32(c, 0xe747fu); f_000e58b8(c); X86_RET(c, 0xe747fu);
    X86_TICK(c, 9);
    // 0e747f  push 0xb
    X86_AT(c, 0xe747fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e7481  call 0xe5760
    X86_AT(c, 0xe7481u);
    push32(c, 0xe7486u); f_000e5760(c); X86_RET(c, 0xe7486u);
    X86_TICK(c, 9);
    // 0e7486  mov dword ptr [ebx + 0x7af19], 0
    X86_AT(c, 0xe7486u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AF19u)), 0x0u);
    // 0e7490  jmp 0xe74bf
    X86_AT(c, 0xe7490u);
    goto L_e74bf;
L_e7492:
    X86_TICK(c, 15);
    // 0e7492  movsx eax, word ptr [0x7a7d4]
    X86_AT(c, 0xe7492u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7A7D4u)));
    // 0e7499  push eax
    X86_AT(c, 0xe7499u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e749a  call 0xe58b8
    X86_AT(c, 0xe749au);
    push32(c, 0xe749fu); f_000e58b8(c); X86_RET(c, 0xe749fu);
    X86_TICK(c, 20);
    // 0e749f  lea eax, [edi + edi*2]
    X86_AT(c, 0xe749fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e74a2  lea edx, [eax + eax*8]
    X86_AT(c, 0xe74a2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e74a5  lea edx, [eax + edx*2]
    X86_AT(c, 0xe74a5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e74a8  push dword ptr [edx + 0x7af15]
    X86_AT(c, 0xe74a8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AF15u))); push32(c, v); }
    // 0e74ae  mov ebx, edx
    X86_AT(c, 0xe74aeu);
    c.r[3] = c.r[2];
    // 0e74b0  call 0xe5760
    X86_AT(c, 0xe74b0u);
    push32(c, 0xe74b5u); f_000e5760(c); X86_RET(c, 0xe74b5u);
    X86_TICK(c, 2);
    // 0e74b5  mov dword ptr [ebx + 0x7af19], 0xffffffff
    X86_AT(c, 0xe74b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AF19u)), 0xFFFFFFFFu);
L_e74bf:
    X86_TICK(c, 36);
    // 0e74bf  add esp, 8
    X86_AT(c, 0xe74bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e74c2  lea eax, [edi + edi*2]
    X86_AT(c, 0xe74c2u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e74c5  lea edx, [eax + eax*8]
    X86_AT(c, 0xe74c5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e74c8  lea edx, [eax + edx*2]
    X86_AT(c, 0xe74c8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e74cb  mov eax, dword ptr [edx + 0x7af19]
    X86_AT(c, 0xe74cbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AF19u)));
    // 0e74d1  pop edi
    X86_AT(c, 0xe74d1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e74d2  pop ebx
    X86_AT(c, 0xe74d2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e74d3  leave 
    X86_AT(c, 0xe74d3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e74d4  ret 
    X86_AT(c, 0xe74d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe745cu, "ran off the end of a function");
}
void f_000e74d8(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0e74d8  push ebp
    X86_AT(c, 0xe74d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e74d9  mov ebp, esp
    X86_AT(c, 0xe74d9u);
    c.r[5] = c.r[4];
    // 0e74db  push edi
    X86_AT(c, 0xe74dbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e74dc  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe74dcu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e74df  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe74dfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e74e2  lea eax, [eax + eax*2]
    X86_AT(c, 0xe74e2u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e74e5  lea edx, [eax + eax*8]
    X86_AT(c, 0xe74e5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e74e8  lea edx, [eax + edx*2]
    X86_AT(c, 0xe74e8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e74eb  mov dword ptr [edx + 0x7af09], edi
    X86_AT(c, 0xe74ebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AF09u)), c.r[7]);
    // 0e74f1  push edi
    X86_AT(c, 0xe74f1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e74f2  call 0xe5748
    X86_AT(c, 0xe74f2u);
    push32(c, 0xe74f7u); f_000e5748(c); X86_RET(c, 0xe74f7u);
    X86_TICK(c, 22);
    // 0e74f7  add esp, 4
    X86_AT(c, 0xe74f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e74fa  pop edi
    X86_AT(c, 0xe74fau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e74fb  leave 
    X86_AT(c, 0xe74fbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e74fc  ret 
    X86_AT(c, 0xe74fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe74d8u, "ran off the end of a function");
}
void f_000e7514(X86Cpu& c) {
    X86_TICK(c, 56);
    // 0e7514  push ebp
    X86_AT(c, 0xe7514u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e7515  mov ebp, esp
    X86_AT(c, 0xe7515u);
    c.r[5] = c.r[4];
    // 0e7517  push edi
    X86_AT(c, 0xe7517u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7518  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe7518u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e751b  lea eax, [edi + edi*2]
    X86_AT(c, 0xe751bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e751e  lea edx, [eax + eax*8]
    X86_AT(c, 0xe751eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e7521  lea edx, [eax + edx*2]
    X86_AT(c, 0xe7521u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e7524  mov eax, dword ptr [edx + 0x7aefd]
    X86_AT(c, 0xe7524u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AEFDu)));
    // 0e752a  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe752au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e752d  mov dword ptr [ecx], eax
    X86_AT(c, 0xe752du);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0e752f  mov eax, dword ptr [edx + 0x7af01]
    X86_AT(c, 0xe752fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AF01u)));
    // 0e7535  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe7535u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e7538  mov dword ptr [edx], eax
    X86_AT(c, 0xe7538u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0e753a  pop edi
    X86_AT(c, 0xe753au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e753b  leave 
    X86_AT(c, 0xe753bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e753c  ret 
    X86_AT(c, 0xe753cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7514u, "ran off the end of a function");
}
void f_000e7540(X86Cpu& c) {
    X86_TICK(c, 56);
    // 0e7540  push ebp
    X86_AT(c, 0xe7540u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e7541  mov ebp, esp
    X86_AT(c, 0xe7541u);
    c.r[5] = c.r[4];
    // 0e7543  push edi
    X86_AT(c, 0xe7543u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7544  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe7544u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e7547  lea eax, [edi + edi*2]
    X86_AT(c, 0xe7547u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e754a  lea edx, [eax + eax*8]
    X86_AT(c, 0xe754au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e754d  lea edx, [eax + edx*2]
    X86_AT(c, 0xe754du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e7550  mov eax, dword ptr [edx + 0x7aef5]
    X86_AT(c, 0xe7550u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AEF5u)));
    // 0e7556  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe7556u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e7559  mov dword ptr [ecx], eax
    X86_AT(c, 0xe7559u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0e755b  mov eax, dword ptr [edx + 0x7aef9]
    X86_AT(c, 0xe755bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AEF9u)));
    // 0e7561  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe7561u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e7564  mov dword ptr [edx], eax
    X86_AT(c, 0xe7564u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0e7566  pop edi
    X86_AT(c, 0xe7566u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7567  leave 
    X86_AT(c, 0xe7567u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7568  ret 
    X86_AT(c, 0xe7568u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7540u, "ran off the end of a function");
}
void f_000e756c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0e756c  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xe756cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e7570  lea eax, [eax + eax*2]
    X86_AT(c, 0xe7570u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e7573  lea edx, [eax + eax*8]
    X86_AT(c, 0xe7573u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e7576  lea edx, [eax + edx*2]
    X86_AT(c, 0xe7576u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e7579  mov dword ptr [edx + 0x7af05], 0
    X86_AT(c, 0xe7579u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AF05u)), 0x0u);
    // 0e7583  ret 
    X86_AT(c, 0xe7583u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe756cu, "ran off the end of a function");
}
void f_000e7584(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0e7584  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xe7584u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e7588  lea eax, [eax + eax*2]
    X86_AT(c, 0xe7588u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e758b  lea edx, [eax + eax*8]
    X86_AT(c, 0xe758bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e758e  lea edx, [eax + edx*2]
    X86_AT(c, 0xe758eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e7591  mov dword ptr [edx + 0x7af05], 0xffffffff
    X86_AT(c, 0xe7591u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AF05u)), 0xFFFFFFFFu);
    // 0e759b  ret 
    X86_AT(c, 0xe759bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7584u, "ran off the end of a function");
}
void f_000e759c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e759c  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xe759cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e75a0  lea eax, [eax + eax*2]
    X86_AT(c, 0xe75a0u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e75a3  lea edx, [eax + eax*8]
    X86_AT(c, 0xe75a3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e75a6  lea edx, [eax + edx*2]
    X86_AT(c, 0xe75a6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e75a9  mov eax, dword ptr [edx + 0x7af05]
    X86_AT(c, 0xe75a9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AF05u)));
    // 0e75af  ret 
    X86_AT(c, 0xe75afu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe759cu, "ran off the end of a function");
}
void f_000e75c4(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e75c4  push 0xe
    X86_AT(c, 0xe75c4u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e75c6  push 0xf
    X86_AT(c, 0xe75c6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e75c8  push 0xf
    X86_AT(c, 0xe75c8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e75ca  push 0
    X86_AT(c, 0xe75cau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e75cc  push 0x4d
    X86_AT(c, 0xe75ccu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0e75ce  push 0x14
    X86_AT(c, 0xe75ceu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0e75d0  push 0x260
    X86_AT(c, 0xe75d0u);
    { uint32_t v = 0x260u; push32(c, v); }
    // 0e75d5  push 0x1b0
    X86_AT(c, 0xe75d5u);
    { uint32_t v = 0x1B0u; push32(c, v); }
    // 0e75da  push 0x10
    X86_AT(c, 0xe75dau);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0e75dc  push 2
    X86_AT(c, 0xe75dcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e75de  call 0xe6858
    X86_AT(c, 0xe75deu);
    push32(c, 0xe75e3u); f_000e6858(c); X86_RET(c, 0xe75e3u);
    X86_TICK(c, 9);
    // 0e75e3  push 2
    X86_AT(c, 0xe75e3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e75e5  call 0xe693c
    X86_AT(c, 0xe75e5u);
    push32(c, 0xe75eau); f_000e693c(c); X86_RET(c, 0xe75eau);
    X86_TICK(c, 9);
    // 0e75ea  push 2
    X86_AT(c, 0xe75eau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e75ec  call 0xe699c
    X86_AT(c, 0xe75ecu);
    push32(c, 0xe75f1u); f_000e699c(c); X86_RET(c, 0xe75f1u);
    X86_TICK(c, 12);
    // 0e75f1  add esp, 0x30
    X86_AT(c, 0xe75f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0e75f4  ret 
    X86_AT(c, 0xe75f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe75c4u, "ran off the end of a function");
}
void f_000e75f8(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e75f8  push ebp
    X86_AT(c, 0xe75f8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e75f9  mov ebp, esp
    X86_AT(c, 0xe75f9u);
    c.r[5] = c.r[4];
    // 0e75fb  push 2
    X86_AT(c, 0xe75fbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e75fd  call 0xe693c
    X86_AT(c, 0xe75fdu);
    push32(c, 0xe7602u); f_000e693c(c); X86_RET(c, 0xe7602u);
    X86_TICK(c, 9);
    // 0e7602  push 2
    X86_AT(c, 0xe7602u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e7604  call 0xe6c68
    X86_AT(c, 0xe7604u);
    push32(c, 0xe7609u); f_000e6c68(c); X86_RET(c, 0xe7609u);
    X86_TICK(c, 14);
    // 0e7609  push dword ptr [ebp + 8]
    X86_AT(c, 0xe7609u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e760c  push 2
    X86_AT(c, 0xe760cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e760e  call 0xe5654
    X86_AT(c, 0xe760eu);
    push32(c, 0xe7613u); f_000e5654(c); X86_RET(c, 0xe7613u);
    X86_TICK(c, 16);
    // 0e7613  leave 
    X86_AT(c, 0xe7613u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7614  ret 
    X86_AT(c, 0xe7614u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe75f8u, "ran off the end of a function");
}
void f_000e7618(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0e7618  push ebp
    X86_AT(c, 0xe7618u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e7619  mov ebp, esp
    X86_AT(c, 0xe7619u);
    c.r[5] = c.r[4];
    // 0e761b  push edi
    X86_AT(c, 0xe761bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e761c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe761cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e761f  lea eax, [eax + eax*2]
    X86_AT(c, 0xe761fu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e7622  lea edx, [eax + eax*8]
    X86_AT(c, 0xe7622u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e7625  lea edx, [eax + edx*2]
    X86_AT(c, 0xe7625u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e7628  lea edi, [edx + 0x7aee4]
    X86_AT(c, 0xe7628u);
    c.r[7] = (uint32_t)(c.r[2] + 0x7AEE4u);
    // 0e762e  push 6
    X86_AT(c, 0xe762eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e7630  push 0x7a7d8
    X86_AT(c, 0xe7630u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e7635  call 0x27d
    X86_AT(c, 0xe7635u);
    push32(c, 0xe763au); f_0000027d(c); X86_RET(c, 0xe763au);
    X86_TICK(c, 73);
    // 0e763a  mov eax, dword ptr [0x7b374]
    X86_AT(c, 0xe763au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x7B374u)));
    // 0e763f  mov dword ptr [0x7add8], eax
    X86_AT(c, 0xe763fu);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), c.r[0]);
    // 0e7644  mov word ptr [0x7addc], 0x14
    X86_AT(c, 0xe7644u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x14u);
    // 0e764d  mov ax, word ptr [edi + 1]
    X86_AT(c, 0xe764du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e7651  add ax, 2
    X86_AT(c, 0xe7651u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0e7655  mov word ptr [0x7adde], ax
    X86_AT(c, 0xe7655u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), (c.r[0] & 0xFFFFu));
    // 0e765b  mov ax, word ptr [edi + 5]
    X86_AT(c, 0xe765bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0e765f  add ax, 2
    X86_AT(c, 0xe765fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0e7663  mov edx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xe7663u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0e7666  shl edx, 4
    X86_AT(c, 0xe7666u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0e7669  add edx, eax
    X86_AT(c, 0xe7669u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e766b  mov word ptr [0x7ade0], dx
    X86_AT(c, 0xe766bu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), (c.r[2] & 0xFFFFu));
    // 0e7672  mov ax, word ptr [edi + 1]
    X86_AT(c, 0xe7672u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e7676  add ax, 0x11
    X86_AT(c, 0xe7676u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0e767a  mov word ptr [0x7ade2], ax
    X86_AT(c, 0xe767au);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), (c.r[0] & 0xFFFFu));
    // 0e7680  mov ax, word ptr [edi + 5]
    X86_AT(c, 0xe7680u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0e7684  add ax, 2
    X86_AT(c, 0xe7684u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0e7688  mov edx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xe7688u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0e768b  shl edx, 4
    X86_AT(c, 0xe768bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0e768e  add edx, eax
    X86_AT(c, 0xe768eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e7690  add dx, 0xf
    X86_AT(c, 0xe7690u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xFu, 0, 2)); }
    // 0e7694  mov word ptr [0x7ade4], dx
    X86_AT(c, 0xe7694u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE4u)), (c.r[2] & 0xFFFFu));
    // 0e769b  push 0x7add8
    X86_AT(c, 0xe769bu);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e76a0  push 0
    X86_AT(c, 0xe76a0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e76a2  push 0x7a7d8
    X86_AT(c, 0xe76a2u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e76a7  call 0x5c4
    X86_AT(c, 0xe76a7u);
    push32(c, 0xe76acu); f_000005c4(c); X86_RET(c, 0xe76acu);
    X86_TICK(c, 19);
    // 0e76ac  mov dword ptr [edi + 0x19], 2
    X86_AT(c, 0xe76acu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)), 0x2u);
    // 0e76b3  movsx eax, word ptr [0x7a7d4]
    X86_AT(c, 0xe76b3u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7A7D4u)));
    // 0e76ba  push eax
    X86_AT(c, 0xe76bau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e76bb  push 0x7a7d8
    X86_AT(c, 0xe76bbu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e76c0  call 0x27d
    X86_AT(c, 0xe76c0u);
    push32(c, 0xe76c5u); f_0000027d(c); X86_RET(c, 0xe76c5u);
    X86_TICK(c, 22);
    // 0e76c5  add esp, 0x1c
    X86_AT(c, 0xe76c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0e76c8  pop edi
    X86_AT(c, 0xe76c8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e76c9  leave 
    X86_AT(c, 0xe76c9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e76ca  ret 
    X86_AT(c, 0xe76cau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7618u, "ran off the end of a function");
}
void f_000e76cc(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e76cc  push ebp
    X86_AT(c, 0xe76ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e76cd  mov ebp, esp
    X86_AT(c, 0xe76cdu);
    c.r[5] = c.r[4];
    // 0e76cf  push ebx
    X86_AT(c, 0xe76cfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e76d0  push esi
    X86_AT(c, 0xe76d0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e76d1  push edi
    X86_AT(c, 0xe76d1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e76d2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe76d2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e76d5  mov dword ptr [0x7add8], 7
    X86_AT(c, 0xe76d5u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0x7u);
    // 0e76df  mov esi, 1
    X86_AT(c, 0xe76dfu);
    c.r[6] = 0x1u;
L_e76e4:
    X86_TICK(c, 7);
    // 0e76e4  cmp esi, 0xf
    X86_AT(c, 0xe76e4u);
    (void)x86_sub(c, c.r[6], 0xFu, 0, 4);
    // 0e76e7  jge 0xe7804
    X86_AT(c, 0xe76e7u);
    if (x86_cc(c, 13)) { goto L_e7804; }
    X86_TICK(c, 99);
    // 0e76ed  mov dword ptr [0x7addc], 1
    X86_AT(c, 0xe76edu);
    wr32((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x1u);
    // 0e76f7  mov eax, esi
    X86_AT(c, 0xe76f7u);
    c.r[0] = c.r[6];
    // 0e76f9  shl eax, 4
    X86_AT(c, 0xe76f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0e76fc  dec eax
    X86_AT(c, 0xe76fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e76fd  mov byte ptr [0x7ade0], al
    X86_AT(c, 0xe76fdu);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE0u)), g8(c, 0));
    // 0e7702  sub edx, edx
    X86_AT(c, 0xe7702u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e7704  mov byte ptr [0x7ade1], dl
    X86_AT(c, 0xe7704u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE1u)), g8(c, 2));
    // 0e770a  mov byte ptr [0x7ade2], dl
    X86_AT(c, 0xe770au);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE2u)), g8(c, 2));
    // 0e7710  mov byte ptr [0x7ade3], dl
    X86_AT(c, 0xe7710u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE3u)), g8(c, 2));
    // 0e7716  mov dword ptr [0x7ade4], 2
    X86_AT(c, 0xe7716u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADE4u)), 0x2u);
    // 0e7720  mov byte ptr [0x7ade8], dl
    X86_AT(c, 0xe7720u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE8u)), g8(c, 2));
    // 0e7726  mov byte ptr [0x7ade9], al
    X86_AT(c, 0xe7726u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE9u)), g8(c, 0));
    // 0e772b  mov byte ptr [0x7adea], dl
    X86_AT(c, 0xe772bu);
    wr8((c.sbase[3] + (uint32_t)(0x7ADEAu)), g8(c, 2));
    // 0e7731  mov byte ptr [0x7adeb], dl
    X86_AT(c, 0xe7731u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADEBu)), g8(c, 2));
    // 0e7737  mov dword ptr [0x7adec], 3
    X86_AT(c, 0xe7737u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADECu)), 0x3u);
    // 0e7741  mov byte ptr [0x7adf0], dl
    X86_AT(c, 0xe7741u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADF0u)), g8(c, 2));
    // 0e7747  mov byte ptr [0x7adf1], dl
    X86_AT(c, 0xe7747u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADF1u)), g8(c, 2));
    // 0e774d  mov byte ptr [0x7adf2], dl
    X86_AT(c, 0xe774du);
    wr8((c.sbase[3] + (uint32_t)(0x7ADF2u)), g8(c, 2));
    // 0e7753  mov byte ptr [0x7adf3], dl
    X86_AT(c, 0xe7753u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADF3u)), g8(c, 2));
    // 0e7759  mov dword ptr [0x7adf4], 4
    X86_AT(c, 0xe7759u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADF4u)), 0x4u);
    // 0e7763  mov byte ptr [0x7adf8], dl
    X86_AT(c, 0xe7763u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADF8u)), g8(c, 2));
    // 0e7769  mov byte ptr [0x7adf9], dl
    X86_AT(c, 0xe7769u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADF9u)), g8(c, 2));
    // 0e776f  mov byte ptr [0x7adfa], al
    X86_AT(c, 0xe776fu);
    wr8((c.sbase[3] + (uint32_t)(0x7ADFAu)), g8(c, 0));
    // 0e7774  mov byte ptr [0x7adfb], dl
    X86_AT(c, 0xe7774u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADFBu)), g8(c, 2));
    // 0e777a  mov dword ptr [0x7adfc], 5
    X86_AT(c, 0xe777au);
    wr32((c.sbase[3] + (uint32_t)(0x7ADFCu)), 0x5u);
    // 0e7784  mov byte ptr [0x7ae00], al
    X86_AT(c, 0xe7784u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE00u)), g8(c, 0));
    // 0e7789  mov byte ptr [0x7ae01], dl
    X86_AT(c, 0xe7789u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE01u)), g8(c, 2));
    // 0e778f  mov byte ptr [0x7ae02], al
    X86_AT(c, 0xe778fu);
    wr8((c.sbase[3] + (uint32_t)(0x7AE02u)), g8(c, 0));
    // 0e7794  mov byte ptr [0x7ae03], dl
    X86_AT(c, 0xe7794u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE03u)), g8(c, 2));
    // 0e779a  mov dword ptr [0x7ae04], 6
    X86_AT(c, 0xe779au);
    wr32((c.sbase[3] + (uint32_t)(0x7AE04u)), 0x6u);
    // 0e77a4  mov byte ptr [0x7ae08], dl
    X86_AT(c, 0xe77a4u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE08u)), g8(c, 2));
    // 0e77aa  mov byte ptr [0x7ae09], al
    X86_AT(c, 0xe77aau);
    wr8((c.sbase[3] + (uint32_t)(0x7AE09u)), g8(c, 0));
    // 0e77af  mov eax, esi
    X86_AT(c, 0xe77afu);
    c.r[0] = c.r[6];
    // 0e77b1  shl eax, 4
    X86_AT(c, 0xe77b1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0e77b4  dec eax
    X86_AT(c, 0xe77b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e77b5  mov byte ptr [0x7ae0a], al
    X86_AT(c, 0xe77b5u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE0Au)), g8(c, 0));
    // 0e77ba  mov byte ptr [0x7ae0b], 0
    X86_AT(c, 0xe77bau);
    wr8((c.sbase[3] + (uint32_t)(0x7AE0Bu)), 0x0u);
    // 0e77c1  mov dword ptr [0x7ae0c], 7
    X86_AT(c, 0xe77c1u);
    wr32((c.sbase[3] + (uint32_t)(0x7AE0Cu)), 0x7u);
    // 0e77cb  mov byte ptr [0x7ae10], al
    X86_AT(c, 0xe77cbu);
    wr8((c.sbase[3] + (uint32_t)(0x7AE10u)), g8(c, 0));
    // 0e77d0  mov byte ptr [0x7ae11], al
    X86_AT(c, 0xe77d0u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE11u)), g8(c, 0));
    // 0e77d5  mov byte ptr [0x7ae12], al
    X86_AT(c, 0xe77d5u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE12u)), g8(c, 0));
    // 0e77da  mov byte ptr [0x7ae13], 0
    X86_AT(c, 0xe77dau);
    wr8((c.sbase[3] + (uint32_t)(0x7AE13u)), 0x0u);
    // 0e77e1  push 0x7add8
    X86_AT(c, 0xe77e1u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e77e6  push 1
    X86_AT(c, 0xe77e6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e77e8  push 0x7a7d8
    X86_AT(c, 0xe77e8u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e77ed  call 0x19c
    X86_AT(c, 0xe77edu);
    push32(c, 0xe77f2u); f_0000019c(c); X86_RET(c, 0xe77f2u);
    X86_TICK(c, 4);
    // 0e77f2  sub ebx, ebx
    X86_AT(c, 0xe77f2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e77f4  add esp, 0xc
    X86_AT(c, 0xe77f4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e77f7:
    X86_TICK(c, 7);
    // 0e77f7  cmp edi, ebx
    X86_AT(c, 0xe77f7u);
    (void)x86_sub(c, c.r[7], c.r[3], 0, 4);
    // 0e77f9  jle 0xe77fe
    X86_AT(c, 0xe77f9u);
    if (x86_cc(c, 14)) { goto L_e77fe; }
    X86_TICK(c, 9);
    // 0e77fb  inc ebx
    X86_AT(c, 0xe77fbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e77fc  jmp 0xe77f7
    X86_AT(c, 0xe77fcu);
    X86_POLL(c, 0xe77f7u); goto L_e77f7;
L_e77fe:
    X86_TICK(c, 9);
    // 0e77fe  inc esi
    X86_AT(c, 0xe77feu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e77ff  jmp 0xe76e4
    X86_AT(c, 0xe77ffu);
    X86_POLL(c, 0xe76e4u); goto L_e76e4;
L_e7804:
    X86_TICK(c, 7);
    // 0e7804  call 0xe5690
    X86_AT(c, 0xe7804u);
    push32(c, 0xe7809u); f_000e5690(c); X86_RET(c, 0xe7809u);
    X86_TICK(c, 28);
    // 0e7809  pop edi
    X86_AT(c, 0xe7809u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e780a  pop esi
    X86_AT(c, 0xe780au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e780b  pop ebx
    X86_AT(c, 0xe780bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e780c  leave 
    X86_AT(c, 0xe780cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e780d  ret 
    X86_AT(c, 0xe780du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe76ccu, "ran off the end of a function");
}
void f_000e7810(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e7810  push ebp
    X86_AT(c, 0xe7810u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e7811  mov ebp, esp
    X86_AT(c, 0xe7811u);
    c.r[5] = c.r[4];
    // 0e7813  push esi
    X86_AT(c, 0xe7813u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7814  push edi
    X86_AT(c, 0xe7814u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7815  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe7815u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e7818  mov dword ptr [0x7add8], 7
    X86_AT(c, 0xe7818u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0x7u);
    // 0e7822  mov esi, 0xf
    X86_AT(c, 0xe7822u);
    c.r[6] = 0xFu;
L_e7827:
    X86_TICK(c, 7);
    // 0e7827  and esi, esi
    X86_AT(c, 0xe7827u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e7829  jle 0xe7944
    X86_AT(c, 0xe7829u);
    if (x86_cc(c, 14)) { goto L_e7944; }
    X86_TICK(c, 101);
    // 0e782f  mov dword ptr [0x7addc], 1
    X86_AT(c, 0xe782fu);
    wr32((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x1u);
    // 0e7839  mov eax, esi
    X86_AT(c, 0xe7839u);
    c.r[0] = c.r[6];
    // 0e783b  shl eax, 4
    X86_AT(c, 0xe783bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0e783e  dec eax
    X86_AT(c, 0xe783eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e783f  mov byte ptr [0x7ade0], al
    X86_AT(c, 0xe783fu);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE0u)), g8(c, 0));
    // 0e7844  sub edx, edx
    X86_AT(c, 0xe7844u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e7846  mov byte ptr [0x7ade1], dl
    X86_AT(c, 0xe7846u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE1u)), g8(c, 2));
    // 0e784c  mov byte ptr [0x7ade2], dl
    X86_AT(c, 0xe784cu);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE2u)), g8(c, 2));
    // 0e7852  mov byte ptr [0x7ade3], dl
    X86_AT(c, 0xe7852u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE3u)), g8(c, 2));
    // 0e7858  mov dword ptr [0x7ade4], 2
    X86_AT(c, 0xe7858u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADE4u)), 0x2u);
    // 0e7862  mov byte ptr [0x7ade8], dl
    X86_AT(c, 0xe7862u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE8u)), g8(c, 2));
    // 0e7868  mov byte ptr [0x7ade9], al
    X86_AT(c, 0xe7868u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE9u)), g8(c, 0));
    // 0e786d  mov byte ptr [0x7adea], dl
    X86_AT(c, 0xe786du);
    wr8((c.sbase[3] + (uint32_t)(0x7ADEAu)), g8(c, 2));
    // 0e7873  mov byte ptr [0x7adeb], dl
    X86_AT(c, 0xe7873u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADEBu)), g8(c, 2));
    // 0e7879  mov dword ptr [0x7adec], 3
    X86_AT(c, 0xe7879u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADECu)), 0x3u);
    // 0e7883  mov byte ptr [0x7adf0], dl
    X86_AT(c, 0xe7883u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADF0u)), g8(c, 2));
    // 0e7889  mov byte ptr [0x7adf1], dl
    X86_AT(c, 0xe7889u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADF1u)), g8(c, 2));
    // 0e788f  mov byte ptr [0x7adf2], dl
    X86_AT(c, 0xe788fu);
    wr8((c.sbase[3] + (uint32_t)(0x7ADF2u)), g8(c, 2));
    // 0e7895  mov byte ptr [0x7adf3], dl
    X86_AT(c, 0xe7895u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADF3u)), g8(c, 2));
    // 0e789b  mov dword ptr [0x7adf4], 4
    X86_AT(c, 0xe789bu);
    wr32((c.sbase[3] + (uint32_t)(0x7ADF4u)), 0x4u);
    // 0e78a5  mov byte ptr [0x7adf8], dl
    X86_AT(c, 0xe78a5u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADF8u)), g8(c, 2));
    // 0e78ab  mov byte ptr [0x7adf9], dl
    X86_AT(c, 0xe78abu);
    wr8((c.sbase[3] + (uint32_t)(0x7ADF9u)), g8(c, 2));
    // 0e78b1  mov byte ptr [0x7adfa], al
    X86_AT(c, 0xe78b1u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADFAu)), g8(c, 0));
    // 0e78b6  mov byte ptr [0x7adfb], dl
    X86_AT(c, 0xe78b6u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADFBu)), g8(c, 2));
    // 0e78bc  mov dword ptr [0x7adfc], 5
    X86_AT(c, 0xe78bcu);
    wr32((c.sbase[3] + (uint32_t)(0x7ADFCu)), 0x5u);
    // 0e78c6  mov byte ptr [0x7ae00], al
    X86_AT(c, 0xe78c6u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE00u)), g8(c, 0));
    // 0e78cb  mov byte ptr [0x7ae01], dl
    X86_AT(c, 0xe78cbu);
    wr8((c.sbase[3] + (uint32_t)(0x7AE01u)), g8(c, 2));
    // 0e78d1  mov byte ptr [0x7ae02], al
    X86_AT(c, 0xe78d1u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE02u)), g8(c, 0));
    // 0e78d6  mov byte ptr [0x7ae03], dl
    X86_AT(c, 0xe78d6u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE03u)), g8(c, 2));
    // 0e78dc  mov dword ptr [0x7ae04], 6
    X86_AT(c, 0xe78dcu);
    wr32((c.sbase[3] + (uint32_t)(0x7AE04u)), 0x6u);
    // 0e78e6  mov byte ptr [0x7ae08], dl
    X86_AT(c, 0xe78e6u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE08u)), g8(c, 2));
    // 0e78ec  mov byte ptr [0x7ae09], al
    X86_AT(c, 0xe78ecu);
    wr8((c.sbase[3] + (uint32_t)(0x7AE09u)), g8(c, 0));
    // 0e78f1  mov byte ptr [0x7ae0a], al
    X86_AT(c, 0xe78f1u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE0Au)), g8(c, 0));
    // 0e78f6  sub eax, eax
    X86_AT(c, 0xe78f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e78f8  mov byte ptr [0x7ae0b], al
    X86_AT(c, 0xe78f8u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE0Bu)), g8(c, 0));
    // 0e78fd  mov dword ptr [0x7ae0c], 7
    X86_AT(c, 0xe78fdu);
    wr32((c.sbase[3] + (uint32_t)(0x7AE0Cu)), 0x7u);
    // 0e7907  mov edx, esi
    X86_AT(c, 0xe7907u);
    c.r[2] = c.r[6];
    // 0e7909  shl edx, 4
    X86_AT(c, 0xe7909u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0e790c  dec edx
    X86_AT(c, 0xe790cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e790d  mov byte ptr [0x7ae10], dl
    X86_AT(c, 0xe790du);
    wr8((c.sbase[3] + (uint32_t)(0x7AE10u)), g8(c, 2));
    // 0e7913  mov byte ptr [0x7ae11], dl
    X86_AT(c, 0xe7913u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE11u)), g8(c, 2));
    // 0e7919  mov byte ptr [0x7ae12], dl
    X86_AT(c, 0xe7919u);
    wr8((c.sbase[3] + (uint32_t)(0x7AE12u)), g8(c, 2));
    // 0e791f  mov byte ptr [0x7ae13], al
    X86_AT(c, 0xe791fu);
    wr8((c.sbase[3] + (uint32_t)(0x7AE13u)), g8(c, 0));
    // 0e7924  push 0x7add8
    X86_AT(c, 0xe7924u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e7929  push 1
    X86_AT(c, 0xe7929u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e792b  push 0x7a7d8
    X86_AT(c, 0xe792bu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e7930  call 0x19c
    X86_AT(c, 0xe7930u);
    push32(c, 0xe7935u); f_0000019c(c); X86_RET(c, 0xe7935u);
    X86_TICK(c, 9);
    // 0e7935  push edi
    X86_AT(c, 0xe7935u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7936  call 0xe9740
    X86_AT(c, 0xe7936u);
    push32(c, 0xe793bu); f_000e9740(c); X86_RET(c, 0xe793bu);
    X86_TICK(c, 11);
    // 0e793b  dec esi
    X86_AT(c, 0xe793bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e793c  add esp, 0x10
    X86_AT(c, 0xe793cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e793f  jmp 0xe7827
    X86_AT(c, 0xe793fu);
    X86_POLL(c, 0xe7827u); goto L_e7827;
L_e7944:
    X86_TICK(c, 9);
    // 0e7944  push 0
    X86_AT(c, 0xe7944u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e7946  call 0xe5c6c
    X86_AT(c, 0xe7946u);
    push32(c, 0xe794bu); f_000e5c6c(c); X86_RET(c, 0xe794bu);
    X86_TICK(c, 7);
    // 0e794b  call 0xe5690
    X86_AT(c, 0xe794bu);
    push32(c, 0xe7950u); f_000e5690(c); X86_RET(c, 0xe7950u);
    X86_TICK(c, 26);
    // 0e7950  add esp, 4
    X86_AT(c, 0xe7950u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e7953  pop edi
    X86_AT(c, 0xe7953u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7954  pop esi
    X86_AT(c, 0xe7954u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7955  leave 
    X86_AT(c, 0xe7955u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7956  ret 
    X86_AT(c, 0xe7956u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7810u, "ran off the end of a function");
}
void f_000e7958(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e7958  push ebp
    X86_AT(c, 0xe7958u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e7959  mov ebp, esp
    X86_AT(c, 0xe7959u);
    c.r[5] = c.r[4];
    // 0e795b  sub esp, 0x30
    X86_AT(c, 0xe795bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0e795e  push esi
    X86_AT(c, 0xe795eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e795f  push edi
    X86_AT(c, 0xe795fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7960  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xe7960u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_e7967:
    X86_TICK(c, 12);
    // 0e7967  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xe7967u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0e796b  jge 0xe7b05
    X86_AT(c, 0xe796bu);
    if (x86_cc(c, 13)) { goto L_e7b05; }
    X86_TICK(c, 4);
    // 0e7971  mov esi, 0x7b578
    X86_AT(c, 0xe7971u);
    c.r[6] = 0x7B578u;
    // 0e7976  sub edi, edi
    X86_AT(c, 0xe7976u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7978:
    X86_TICK(c, 7);
    // 0e7978  cmp edi, 8
    X86_AT(c, 0xe7978u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0e797b  jge 0xe798b
    X86_AT(c, 0xe797bu);
    if (x86_cc(c, 13)) { goto L_e798b; }
    X86_TICK(c, 15);
    // 0e797d  mov eax, dword ptr [esi + edi*4 + 0x1e0]
    X86_AT(c, 0xe797du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x1E0u)));
    // 0e7984  mov dword ptr [ebp + edi*4 - 0x20], eax
    X86_AT(c, 0xe7984u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)), c.r[0]);
    // 0e7988  inc edi
    X86_AT(c, 0xe7988u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7989  jmp 0xe7978
    X86_AT(c, 0xe7989u);
    X86_POLL(c, 0xe7978u); goto L_e7978;
L_e798b:
    X86_TICK(c, 2);
    // 0e798b  mov edi, 0x77
    X86_AT(c, 0xe798bu);
    c.r[7] = 0x77u;
L_e7990:
    X86_TICK(c, 7);
    // 0e7990  and edi, edi
    X86_AT(c, 0xe7990u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e7992  jl 0xe799e
    X86_AT(c, 0xe7992u);
    if (x86_cc(c, 12)) { goto L_e799e; }
    X86_TICK(c, 15);
    // 0e7994  mov eax, dword ptr [esi + edi*4]
    X86_AT(c, 0xe7994u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)));
    // 0e7997  mov dword ptr [esi + edi*4 + 0x20], eax
    X86_AT(c, 0xe7997u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x20u)), c.r[0]);
    // 0e799b  dec edi
    X86_AT(c, 0xe799bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0e799c  jmp 0xe7990
    X86_AT(c, 0xe799cu);
    X86_POLL(c, 0xe7990u); goto L_e7990;
L_e799e:
    X86_TICK(c, 2);
    // 0e799e  sub edi, edi
    X86_AT(c, 0xe799eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e79a0:
    X86_TICK(c, 7);
    // 0e79a0  cmp edi, 8
    X86_AT(c, 0xe79a0u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0e79a3  jge 0xe79af
    X86_AT(c, 0xe79a3u);
    if (x86_cc(c, 13)) { goto L_e79af; }
    X86_TICK(c, 15);
    // 0e79a5  mov eax, dword ptr [ebp + edi*4 - 0x20]
    X86_AT(c, 0xe79a5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)));
    // 0e79a9  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xe79a9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0e79ac  inc edi
    X86_AT(c, 0xe79acu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e79ad  jmp 0xe79a0
    X86_AT(c, 0xe79adu);
    X86_POLL(c, 0xe79a0u); goto L_e79a0;
L_e79af:
    X86_TICK(c, 13);
    // 0e79af  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xe79afu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0e79b2  shl eax, 9
    X86_AT(c, 0xe79b2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e79b5  add eax, 0xb5578
    X86_AT(c, 0xe79b5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB5578u, 0, 4); }
    // 0e79ba  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xe79bau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0e79bd  sub edi, edi
    X86_AT(c, 0xe79bdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e79bf:
    X86_TICK(c, 7);
    // 0e79bf  cmp edi, 0x80
    X86_AT(c, 0xe79bfu);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0e79c5  jge 0xe79d4
    X86_AT(c, 0xe79c5u);
    if (x86_cc(c, 13)) { goto L_e79d4; }
    X86_TICK(c, 29);
    // 0e79c7  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xe79c7u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0e79c8  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xe79c8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0e79cb  add dword ptr [ebp - 0x28], 4
    X86_AT(c, 0xe79cbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e79cf  mov dword ptr [edx], eax
    X86_AT(c, 0xe79cfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0e79d1  inc edi
    X86_AT(c, 0xe79d1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e79d2  jmp 0xe79bf
    X86_AT(c, 0xe79d2u);
    X86_POLL(c, 0xe79bfu); goto L_e79bf;
L_e79d4:
    X86_TICK(c, 4);
    // 0e79d4  mov esi, 0x7c778
    X86_AT(c, 0xe79d4u);
    c.r[6] = 0x7C778u;
    // 0e79d9  sub edi, edi
    X86_AT(c, 0xe79d9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e79db:
    X86_TICK(c, 7);
    // 0e79db  cmp edi, 8
    X86_AT(c, 0xe79dbu);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0e79de  jge 0xe79ee
    X86_AT(c, 0xe79deu);
    if (x86_cc(c, 13)) { goto L_e79ee; }
    X86_TICK(c, 15);
    // 0e79e0  mov eax, dword ptr [esi + edi*4 + 0x1e0]
    X86_AT(c, 0xe79e0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x1E0u)));
    // 0e79e7  mov dword ptr [ebp + edi*4 - 0x20], eax
    X86_AT(c, 0xe79e7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)), c.r[0]);
    // 0e79eb  inc edi
    X86_AT(c, 0xe79ebu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e79ec  jmp 0xe79db
    X86_AT(c, 0xe79ecu);
    X86_POLL(c, 0xe79dbu); goto L_e79db;
L_e79ee:
    X86_TICK(c, 2);
    // 0e79ee  mov edi, 0x77
    X86_AT(c, 0xe79eeu);
    c.r[7] = 0x77u;
L_e79f3:
    X86_TICK(c, 7);
    // 0e79f3  and edi, edi
    X86_AT(c, 0xe79f3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e79f5  jl 0xe7a01
    X86_AT(c, 0xe79f5u);
    if (x86_cc(c, 12)) { goto L_e7a01; }
    X86_TICK(c, 15);
    // 0e79f7  mov eax, dword ptr [esi + edi*4]
    X86_AT(c, 0xe79f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)));
    // 0e79fa  mov dword ptr [esi + edi*4 + 0x20], eax
    X86_AT(c, 0xe79fau);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x20u)), c.r[0]);
    // 0e79fe  dec edi
    X86_AT(c, 0xe79feu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0e79ff  jmp 0xe79f3
    X86_AT(c, 0xe79ffu);
    X86_POLL(c, 0xe79f3u); goto L_e79f3;
L_e7a01:
    X86_TICK(c, 2);
    // 0e7a01  sub edi, edi
    X86_AT(c, 0xe7a01u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7a03:
    X86_TICK(c, 7);
    // 0e7a03  cmp edi, 8
    X86_AT(c, 0xe7a03u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0e7a06  jge 0xe7a12
    X86_AT(c, 0xe7a06u);
    if (x86_cc(c, 13)) { goto L_e7a12; }
    X86_TICK(c, 15);
    // 0e7a08  mov eax, dword ptr [ebp + edi*4 - 0x20]
    X86_AT(c, 0xe7a08u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)));
    // 0e7a0c  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xe7a0cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0e7a0f  inc edi
    X86_AT(c, 0xe7a0fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7a10  jmp 0xe7a03
    X86_AT(c, 0xe7a10u);
    X86_POLL(c, 0xe7a03u); goto L_e7a03;
L_e7a12:
    X86_TICK(c, 13);
    // 0e7a12  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xe7a12u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0e7a15  shl eax, 9
    X86_AT(c, 0xe7a15u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e7a18  add eax, 0xb7578
    X86_AT(c, 0xe7a18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB7578u, 0, 4); }
    // 0e7a1d  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xe7a1du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0e7a20  sub edi, edi
    X86_AT(c, 0xe7a20u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7a22:
    X86_TICK(c, 7);
    // 0e7a22  cmp edi, 0x80
    X86_AT(c, 0xe7a22u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0e7a28  jge 0xe7a37
    X86_AT(c, 0xe7a28u);
    if (x86_cc(c, 13)) { goto L_e7a37; }
    X86_TICK(c, 29);
    // 0e7a2a  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xe7a2au);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0e7a2b  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xe7a2bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0e7a2e  add dword ptr [ebp - 0x28], 4
    X86_AT(c, 0xe7a2eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e7a32  mov dword ptr [edx], eax
    X86_AT(c, 0xe7a32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0e7a34  inc edi
    X86_AT(c, 0xe7a34u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7a35  jmp 0xe7a22
    X86_AT(c, 0xe7a35u);
    X86_POLL(c, 0xe7a22u); goto L_e7a22;
L_e7a37:
    X86_TICK(c, 4);
    // 0e7a37  mov esi, 0x7f778
    X86_AT(c, 0xe7a37u);
    c.r[6] = 0x7F778u;
    // 0e7a3c  sub edi, edi
    X86_AT(c, 0xe7a3cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7a3e:
    X86_TICK(c, 7);
    // 0e7a3e  cmp edi, 8
    X86_AT(c, 0xe7a3eu);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0e7a41  jge 0xe7a51
    X86_AT(c, 0xe7a41u);
    if (x86_cc(c, 13)) { goto L_e7a51; }
    X86_TICK(c, 15);
    // 0e7a43  mov eax, dword ptr [esi + edi*4 + 0x1e0]
    X86_AT(c, 0xe7a43u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x1E0u)));
    // 0e7a4a  mov dword ptr [ebp + edi*4 - 0x20], eax
    X86_AT(c, 0xe7a4au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)), c.r[0]);
    // 0e7a4e  inc edi
    X86_AT(c, 0xe7a4eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7a4f  jmp 0xe7a3e
    X86_AT(c, 0xe7a4fu);
    X86_POLL(c, 0xe7a3eu); goto L_e7a3e;
L_e7a51:
    X86_TICK(c, 2);
    // 0e7a51  mov edi, 0x77
    X86_AT(c, 0xe7a51u);
    c.r[7] = 0x77u;
L_e7a56:
    X86_TICK(c, 7);
    // 0e7a56  and edi, edi
    X86_AT(c, 0xe7a56u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e7a58  jl 0xe7a64
    X86_AT(c, 0xe7a58u);
    if (x86_cc(c, 12)) { goto L_e7a64; }
    X86_TICK(c, 15);
    // 0e7a5a  mov eax, dword ptr [esi + edi*4]
    X86_AT(c, 0xe7a5au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)));
    // 0e7a5d  mov dword ptr [esi + edi*4 + 0x20], eax
    X86_AT(c, 0xe7a5du);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x20u)), c.r[0]);
    // 0e7a61  dec edi
    X86_AT(c, 0xe7a61u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0e7a62  jmp 0xe7a56
    X86_AT(c, 0xe7a62u);
    X86_POLL(c, 0xe7a56u); goto L_e7a56;
L_e7a64:
    X86_TICK(c, 2);
    // 0e7a64  sub edi, edi
    X86_AT(c, 0xe7a64u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7a66:
    X86_TICK(c, 7);
    // 0e7a66  cmp edi, 8
    X86_AT(c, 0xe7a66u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0e7a69  jge 0xe7a75
    X86_AT(c, 0xe7a69u);
    if (x86_cc(c, 13)) { goto L_e7a75; }
    X86_TICK(c, 15);
    // 0e7a6b  mov eax, dword ptr [ebp + edi*4 - 0x20]
    X86_AT(c, 0xe7a6bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)));
    // 0e7a6f  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xe7a6fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0e7a72  inc edi
    X86_AT(c, 0xe7a72u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7a73  jmp 0xe7a66
    X86_AT(c, 0xe7a73u);
    X86_POLL(c, 0xe7a66u); goto L_e7a66;
L_e7a75:
    X86_TICK(c, 13);
    // 0e7a75  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xe7a75u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0e7a78  shl eax, 9
    X86_AT(c, 0xe7a78u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e7a7b  add eax, 0xb9578
    X86_AT(c, 0xe7a7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB9578u, 0, 4); }
    // 0e7a80  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xe7a80u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0e7a83  sub edi, edi
    X86_AT(c, 0xe7a83u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7a85:
    X86_TICK(c, 7);
    // 0e7a85  cmp edi, 0x80
    X86_AT(c, 0xe7a85u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0e7a8b  jge 0xe7a9a
    X86_AT(c, 0xe7a8bu);
    if (x86_cc(c, 13)) { goto L_e7a9a; }
    X86_TICK(c, 29);
    // 0e7a8d  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xe7a8du);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0e7a8e  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xe7a8eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0e7a91  add dword ptr [ebp - 0x28], 4
    X86_AT(c, 0xe7a91u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e7a95  mov dword ptr [edx], eax
    X86_AT(c, 0xe7a95u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0e7a97  inc edi
    X86_AT(c, 0xe7a97u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7a98  jmp 0xe7a85
    X86_AT(c, 0xe7a98u);
    X86_POLL(c, 0xe7a85u); goto L_e7a85;
L_e7a9a:
    X86_TICK(c, 4);
    // 0e7a9a  mov esi, 0x7f978
    X86_AT(c, 0xe7a9au);
    c.r[6] = 0x7F978u;
    // 0e7a9f  sub edi, edi
    X86_AT(c, 0xe7a9fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7aa1:
    X86_TICK(c, 7);
    // 0e7aa1  cmp edi, 8
    X86_AT(c, 0xe7aa1u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0e7aa4  jge 0xe7ab4
    X86_AT(c, 0xe7aa4u);
    if (x86_cc(c, 13)) { goto L_e7ab4; }
    X86_TICK(c, 15);
    // 0e7aa6  mov eax, dword ptr [esi + edi*4 + 0x1e0]
    X86_AT(c, 0xe7aa6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x1E0u)));
    // 0e7aad  mov dword ptr [ebp + edi*4 - 0x20], eax
    X86_AT(c, 0xe7aadu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)), c.r[0]);
    // 0e7ab1  inc edi
    X86_AT(c, 0xe7ab1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7ab2  jmp 0xe7aa1
    X86_AT(c, 0xe7ab2u);
    X86_POLL(c, 0xe7aa1u); goto L_e7aa1;
L_e7ab4:
    X86_TICK(c, 2);
    // 0e7ab4  mov edi, 0x77
    X86_AT(c, 0xe7ab4u);
    c.r[7] = 0x77u;
L_e7ab9:
    X86_TICK(c, 7);
    // 0e7ab9  and edi, edi
    X86_AT(c, 0xe7ab9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e7abb  jl 0xe7ac7
    X86_AT(c, 0xe7abbu);
    if (x86_cc(c, 12)) { goto L_e7ac7; }
    X86_TICK(c, 15);
    // 0e7abd  mov eax, dword ptr [esi + edi*4]
    X86_AT(c, 0xe7abdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)));
    // 0e7ac0  mov dword ptr [esi + edi*4 + 0x20], eax
    X86_AT(c, 0xe7ac0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x20u)), c.r[0]);
    // 0e7ac4  dec edi
    X86_AT(c, 0xe7ac4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0e7ac5  jmp 0xe7ab9
    X86_AT(c, 0xe7ac5u);
    X86_POLL(c, 0xe7ab9u); goto L_e7ab9;
L_e7ac7:
    X86_TICK(c, 2);
    // 0e7ac7  sub edi, edi
    X86_AT(c, 0xe7ac7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7ac9:
    X86_TICK(c, 7);
    // 0e7ac9  cmp edi, 8
    X86_AT(c, 0xe7ac9u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0e7acc  jge 0xe7ad8
    X86_AT(c, 0xe7accu);
    if (x86_cc(c, 13)) { goto L_e7ad8; }
    X86_TICK(c, 15);
    // 0e7ace  mov eax, dword ptr [ebp + edi*4 - 0x20]
    X86_AT(c, 0xe7aceu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)));
    // 0e7ad2  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xe7ad2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0e7ad5  inc edi
    X86_AT(c, 0xe7ad5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7ad6  jmp 0xe7ac9
    X86_AT(c, 0xe7ad6u);
    X86_POLL(c, 0xe7ac9u); goto L_e7ac9;
L_e7ad8:
    X86_TICK(c, 13);
    // 0e7ad8  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xe7ad8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0e7adb  shl eax, 9
    X86_AT(c, 0xe7adbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e7ade  add eax, 0xbb578
    X86_AT(c, 0xe7adeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xBB578u, 0, 4); }
    // 0e7ae3  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xe7ae3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0e7ae6  sub edi, edi
    X86_AT(c, 0xe7ae6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7ae8:
    X86_TICK(c, 7);
    // 0e7ae8  cmp edi, 0x80
    X86_AT(c, 0xe7ae8u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0e7aee  jge 0xe7afd
    X86_AT(c, 0xe7aeeu);
    if (x86_cc(c, 13)) { goto L_e7afd; }
    X86_TICK(c, 29);
    // 0e7af0  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xe7af0u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0e7af1  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xe7af1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0e7af4  add dword ptr [ebp - 0x28], 4
    X86_AT(c, 0xe7af4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e7af8  mov dword ptr [edx], eax
    X86_AT(c, 0xe7af8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0e7afa  inc edi
    X86_AT(c, 0xe7afau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7afb  jmp 0xe7ae8
    X86_AT(c, 0xe7afbu);
    X86_POLL(c, 0xe7ae8u); goto L_e7ae8;
L_e7afd:
    X86_TICK(c, 13);
    // 0e7afd  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xe7afdu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e7b00  jmp 0xe7967
    X86_AT(c, 0xe7b00u);
    X86_POLL(c, 0xe7967u); goto L_e7967;
L_e7b05:
    X86_TICK(c, 6);
    // 0e7b05  mov ecx, 0x93978
    X86_AT(c, 0xe7b05u);
    c.r[1] = 0x93978u;
    // 0e7b0a  mov dword ptr [ebp - 0x2c], 0x7b778
    X86_AT(c, 0xe7b0au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x7B778u);
    // 0e7b11  sub edi, edi
    X86_AT(c, 0xe7b11u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7b13:
    X86_TICK(c, 7);
    // 0e7b13  cmp edi, 0x20
    X86_AT(c, 0xe7b13u);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0e7b16  jge 0xe7b63
    X86_AT(c, 0xe7b16u);
    if (x86_cc(c, 13)) { goto L_e7b63; }
    X86_TICK(c, 2);
    // 0e7b18  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xe7b18u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_e7b1f:
    X86_TICK(c, 12);
    // 0e7b1f  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xe7b1fu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0e7b23  jge 0xe7b60
    X86_AT(c, 0xe7b23u);
    if (x86_cc(c, 13)) { goto L_e7b60; }
    X86_TICK(c, 15);
    // 0e7b25  mov al, byte ptr [ecx]
    X86_AT(c, 0xe7b25u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0e7b27  and al, 0xf
    X86_AT(c, 0xe7b27u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0e7b29  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xe7b29u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0e7b2c  and al, al
    X86_AT(c, 0xe7b2cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e7b2e  jne 0xe7b3a
    X86_AT(c, 0xe7b2eu);
    if (x86_cc(c, 5)) { goto L_e7b3a; }
    X86_TICK(c, 12);
    // 0e7b30  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe7b30u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0e7b33  mov al, byte ptr [eax]
    X86_AT(c, 0xe7b33u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e7b35  and al, 0xf
    X86_AT(c, 0xe7b35u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0e7b37  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xe7b37u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_e7b3a:
    X86_TICK(c, 15);
    // 0e7b3a  mov al, byte ptr [ecx]
    X86_AT(c, 0xe7b3au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0e7b3c  and al, 0xf0
    X86_AT(c, 0xe7b3cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e7b3e  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xe7b3eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0e7b41  and al, al
    X86_AT(c, 0xe7b41u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e7b43  jne 0xe7b4f
    X86_AT(c, 0xe7b43u);
    if (x86_cc(c, 5)) { goto L_e7b4f; }
    X86_TICK(c, 12);
    // 0e7b45  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe7b45u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0e7b48  mov al, byte ptr [eax]
    X86_AT(c, 0xe7b48u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e7b4a  and al, 0xf0
    X86_AT(c, 0xe7b4au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e7b4c  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xe7b4cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_e7b4f:
    X86_TICK(c, 33);
    // 0e7b4f  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xe7b4fu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0e7b52  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xe7b52u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0e7b55  mov byte ptr [ecx], al
    X86_AT(c, 0xe7b55u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0e7b57  inc ecx
    X86_AT(c, 0xe7b57u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e7b58  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe7b58u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e7b5b  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xe7b5bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e7b5e  jmp 0xe7b1f
    X86_AT(c, 0xe7b5eu);
    X86_POLL(c, 0xe7b1fu); goto L_e7b1f;
L_e7b60:
    X86_TICK(c, 9);
    // 0e7b60  inc edi
    X86_AT(c, 0xe7b60u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7b61  jmp 0xe7b13
    X86_AT(c, 0xe7b61u);
    X86_POLL(c, 0xe7b13u); goto L_e7b13;
L_e7b63:
    X86_TICK(c, 6);
    // 0e7b63  mov ecx, 0x93b78
    X86_AT(c, 0xe7b63u);
    c.r[1] = 0x93B78u;
    // 0e7b68  mov dword ptr [ebp - 0x2c], 0x7b778
    X86_AT(c, 0xe7b68u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x7B778u);
    // 0e7b6f  sub edi, edi
    X86_AT(c, 0xe7b6fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7b71:
    X86_TICK(c, 7);
    // 0e7b71  cmp edi, 0x20
    X86_AT(c, 0xe7b71u);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0e7b74  jge 0xe7bc1
    X86_AT(c, 0xe7b74u);
    if (x86_cc(c, 13)) { goto L_e7bc1; }
    X86_TICK(c, 2);
    // 0e7b76  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xe7b76u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_e7b7d:
    X86_TICK(c, 12);
    // 0e7b7d  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xe7b7du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0e7b81  jge 0xe7bbe
    X86_AT(c, 0xe7b81u);
    if (x86_cc(c, 13)) { goto L_e7bbe; }
    X86_TICK(c, 15);
    // 0e7b83  mov al, byte ptr [ecx]
    X86_AT(c, 0xe7b83u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0e7b85  and al, 0xf
    X86_AT(c, 0xe7b85u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0e7b87  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xe7b87u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0e7b8a  and al, al
    X86_AT(c, 0xe7b8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e7b8c  jne 0xe7b98
    X86_AT(c, 0xe7b8cu);
    if (x86_cc(c, 5)) { goto L_e7b98; }
    X86_TICK(c, 12);
    // 0e7b8e  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe7b8eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0e7b91  mov al, byte ptr [eax]
    X86_AT(c, 0xe7b91u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e7b93  and al, 0xf
    X86_AT(c, 0xe7b93u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0e7b95  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xe7b95u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_e7b98:
    X86_TICK(c, 15);
    // 0e7b98  mov al, byte ptr [ecx]
    X86_AT(c, 0xe7b98u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0e7b9a  and al, 0xf0
    X86_AT(c, 0xe7b9au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e7b9c  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xe7b9cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0e7b9f  and al, al
    X86_AT(c, 0xe7b9fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e7ba1  jne 0xe7bad
    X86_AT(c, 0xe7ba1u);
    if (x86_cc(c, 5)) { goto L_e7bad; }
    X86_TICK(c, 12);
    // 0e7ba3  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe7ba3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0e7ba6  mov al, byte ptr [eax]
    X86_AT(c, 0xe7ba6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e7ba8  and al, 0xf0
    X86_AT(c, 0xe7ba8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e7baa  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xe7baau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_e7bad:
    X86_TICK(c, 33);
    // 0e7bad  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xe7badu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0e7bb0  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xe7bb0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0e7bb3  mov byte ptr [ecx], al
    X86_AT(c, 0xe7bb3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0e7bb5  inc ecx
    X86_AT(c, 0xe7bb5u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e7bb6  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe7bb6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e7bb9  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xe7bb9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e7bbc  jmp 0xe7b7d
    X86_AT(c, 0xe7bbcu);
    X86_POLL(c, 0xe7b7du); goto L_e7b7d;
L_e7bbe:
    X86_TICK(c, 9);
    // 0e7bbe  inc edi
    X86_AT(c, 0xe7bbeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7bbf  jmp 0xe7b71
    X86_AT(c, 0xe7bbfu);
    X86_POLL(c, 0xe7b71u); goto L_e7b71;
L_e7bc1:
    X86_TICK(c, 6);
    // 0e7bc1  mov ecx, 0x93578
    X86_AT(c, 0xe7bc1u);
    c.r[1] = 0x93578u;
    // 0e7bc6  mov dword ptr [ebp - 0x2c], 0x7b778
    X86_AT(c, 0xe7bc6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x7B778u);
    // 0e7bcd  sub edi, edi
    X86_AT(c, 0xe7bcdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7bcf:
    X86_TICK(c, 7);
    // 0e7bcf  cmp edi, 0x20
    X86_AT(c, 0xe7bcfu);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0e7bd2  jge 0xe7c1f
    X86_AT(c, 0xe7bd2u);
    if (x86_cc(c, 13)) { goto L_e7c1f; }
    X86_TICK(c, 2);
    // 0e7bd4  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xe7bd4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_e7bdb:
    X86_TICK(c, 12);
    // 0e7bdb  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xe7bdbu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0e7bdf  jge 0xe7c1c
    X86_AT(c, 0xe7bdfu);
    if (x86_cc(c, 13)) { goto L_e7c1c; }
    X86_TICK(c, 15);
    // 0e7be1  mov al, byte ptr [ecx]
    X86_AT(c, 0xe7be1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0e7be3  and al, 0xf
    X86_AT(c, 0xe7be3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0e7be5  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xe7be5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0e7be8  and al, al
    X86_AT(c, 0xe7be8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e7bea  jne 0xe7bf6
    X86_AT(c, 0xe7beau);
    if (x86_cc(c, 5)) { goto L_e7bf6; }
    X86_TICK(c, 12);
    // 0e7bec  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe7becu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0e7bef  mov al, byte ptr [eax]
    X86_AT(c, 0xe7befu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e7bf1  and al, 0xf
    X86_AT(c, 0xe7bf1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0e7bf3  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xe7bf3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_e7bf6:
    X86_TICK(c, 15);
    // 0e7bf6  mov al, byte ptr [ecx]
    X86_AT(c, 0xe7bf6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0e7bf8  and al, 0xf0
    X86_AT(c, 0xe7bf8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e7bfa  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xe7bfau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0e7bfd  and al, al
    X86_AT(c, 0xe7bfdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e7bff  jne 0xe7c0b
    X86_AT(c, 0xe7bffu);
    if (x86_cc(c, 5)) { goto L_e7c0b; }
    X86_TICK(c, 12);
    // 0e7c01  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe7c01u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0e7c04  mov al, byte ptr [eax]
    X86_AT(c, 0xe7c04u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e7c06  and al, 0xf0
    X86_AT(c, 0xe7c06u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e7c08  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xe7c08u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_e7c0b:
    X86_TICK(c, 33);
    // 0e7c0b  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xe7c0bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0e7c0e  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xe7c0eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0e7c11  mov byte ptr [ecx], al
    X86_AT(c, 0xe7c11u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0e7c13  inc ecx
    X86_AT(c, 0xe7c13u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e7c14  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe7c14u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e7c17  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xe7c17u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e7c1a  jmp 0xe7bdb
    X86_AT(c, 0xe7c1au);
    X86_POLL(c, 0xe7bdbu); goto L_e7bdb;
L_e7c1c:
    X86_TICK(c, 9);
    // 0e7c1c  inc edi
    X86_AT(c, 0xe7c1cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7c1d  jmp 0xe7bcf
    X86_AT(c, 0xe7c1du);
    X86_POLL(c, 0xe7bcfu); goto L_e7bcf;
L_e7c1f:
    X86_TICK(c, 6);
    // 0e7c1f  mov ecx, 0x93778
    X86_AT(c, 0xe7c1fu);
    c.r[1] = 0x93778u;
    // 0e7c24  mov dword ptr [ebp - 0x2c], 0x7b778
    X86_AT(c, 0xe7c24u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x7B778u);
    // 0e7c2b  sub edi, edi
    X86_AT(c, 0xe7c2bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7c2d:
    X86_TICK(c, 7);
    // 0e7c2d  cmp edi, 0x20
    X86_AT(c, 0xe7c2du);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0e7c30  jge 0xe7c7d
    X86_AT(c, 0xe7c30u);
    if (x86_cc(c, 13)) { goto L_e7c7d; }
    X86_TICK(c, 2);
    // 0e7c32  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xe7c32u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_e7c39:
    X86_TICK(c, 12);
    // 0e7c39  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xe7c39u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0e7c3d  jge 0xe7c7a
    X86_AT(c, 0xe7c3du);
    if (x86_cc(c, 13)) { goto L_e7c7a; }
    X86_TICK(c, 15);
    // 0e7c3f  mov al, byte ptr [ecx]
    X86_AT(c, 0xe7c3fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0e7c41  and al, 0xf
    X86_AT(c, 0xe7c41u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0e7c43  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xe7c43u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0e7c46  and al, al
    X86_AT(c, 0xe7c46u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e7c48  jne 0xe7c54
    X86_AT(c, 0xe7c48u);
    if (x86_cc(c, 5)) { goto L_e7c54; }
    X86_TICK(c, 12);
    // 0e7c4a  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe7c4au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0e7c4d  mov al, byte ptr [eax]
    X86_AT(c, 0xe7c4du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e7c4f  and al, 0xf
    X86_AT(c, 0xe7c4fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0e7c51  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xe7c51u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_e7c54:
    X86_TICK(c, 15);
    // 0e7c54  mov al, byte ptr [ecx]
    X86_AT(c, 0xe7c54u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0e7c56  and al, 0xf0
    X86_AT(c, 0xe7c56u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e7c58  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xe7c58u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0e7c5b  and al, al
    X86_AT(c, 0xe7c5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e7c5d  jne 0xe7c69
    X86_AT(c, 0xe7c5du);
    if (x86_cc(c, 5)) { goto L_e7c69; }
    X86_TICK(c, 12);
    // 0e7c5f  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe7c5fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0e7c62  mov al, byte ptr [eax]
    X86_AT(c, 0xe7c62u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e7c64  and al, 0xf0
    X86_AT(c, 0xe7c64u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e7c66  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xe7c66u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_e7c69:
    X86_TICK(c, 33);
    // 0e7c69  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xe7c69u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0e7c6c  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xe7c6cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0e7c6f  mov byte ptr [ecx], al
    X86_AT(c, 0xe7c6fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0e7c71  inc ecx
    X86_AT(c, 0xe7c71u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e7c72  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe7c72u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e7c75  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xe7c75u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e7c78  jmp 0xe7c39
    X86_AT(c, 0xe7c78u);
    X86_POLL(c, 0xe7c39u); goto L_e7c39;
L_e7c7a:
    X86_TICK(c, 9);
    // 0e7c7a  inc edi
    X86_AT(c, 0xe7c7au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7c7b  jmp 0xe7c2d
    X86_AT(c, 0xe7c7bu);
    X86_POLL(c, 0xe7c2du); goto L_e7c2d;
L_e7c7d:
    X86_TICK(c, 24);
    // 0e7c7d  pop edi
    X86_AT(c, 0xe7c7du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7c7e  pop esi
    X86_AT(c, 0xe7c7eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7c7f  leave 
    X86_AT(c, 0xe7c7fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7c80  ret 
    X86_AT(c, 0xe7c80u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7958u, "ran off the end of a function");
}
void f_000e7c84(X86Cpu& c) {
    X86_TICK(c, 157);
    // 0e7c84  push ebp
    X86_AT(c, 0xe7c84u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e7c85  mov ebp, esp
    X86_AT(c, 0xe7c85u);
    c.r[5] = c.r[4];
    // 0e7c87  sub esp, 8
    X86_AT(c, 0xe7c87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e7c8a  push ebx
    X86_AT(c, 0xe7c8au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e7c8b  push esi
    X86_AT(c, 0xe7c8bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7c8c  push edi
    X86_AT(c, 0xe7c8cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7c8d  mov dword ptr [ebp - 8], 0x7b578
    X86_AT(c, 0xe7c8du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x7B578u);
    // 0e7c94  mov eax, 0x7a7d0
    X86_AT(c, 0xe7c94u);
    c.r[0] = 0x7A7D0u;
    // 0e7c99  mov edx, dword ptr [0xcdc30]
    X86_AT(c, 0xe7c99u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCDC30u)));
    // 0e7c9f  shl edx, 9
    X86_AT(c, 0xe7c9fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[2] = r; }
    // 0e7ca2  lea esi, [eax + edx*1 + 0x3ada8]
    X86_AT(c, 0xe7ca2u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[2] + 0x3ADA8u);
    // 0e7ca9  mov ecx, dword ptr [ebp - 8]
    X86_AT(c, 0xe7ca9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e7cac  push esi
    X86_AT(c, 0xe7cacu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7cad  push edi
    X86_AT(c, 0xe7cadu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7cae  mov edi, ecx
    X86_AT(c, 0xe7caeu);
    c.r[7] = c.r[1];
    // 0e7cb0  mov ecx, 0x80
    X86_AT(c, 0xe7cb0u);
    c.r[1] = 0x80u;
    // 0e7cb5  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xe7cb5u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0e7cb7  pop edi
    X86_AT(c, 0xe7cb7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7cb8  pop esi
    X86_AT(c, 0xe7cb8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7cb9  lea ecx, [eax + 0x1fa8]
    X86_AT(c, 0xe7cb9u);
    c.r[1] = (uint32_t)(c.r[0] + 0x1FA8u);
    // 0e7cbf  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0xe7cbfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0e7cc2  lea esi, [eax + edx*1 + 0x3cda8]
    X86_AT(c, 0xe7cc2u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[2] + 0x3CDA8u);
    // 0e7cc9  push esi
    X86_AT(c, 0xe7cc9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7cca  push edi
    X86_AT(c, 0xe7ccau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7ccb  mov edi, ecx
    X86_AT(c, 0xe7ccbu);
    c.r[7] = c.r[1];
    // 0e7ccd  mov ecx, 0x80
    X86_AT(c, 0xe7ccdu);
    c.r[1] = 0x80u;
    // 0e7cd2  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xe7cd2u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0e7cd4  pop edi
    X86_AT(c, 0xe7cd4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7cd5  pop esi
    X86_AT(c, 0xe7cd5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7cd6  lea ecx, [eax + 0x4fa8]
    X86_AT(c, 0xe7cd6u);
    c.r[1] = (uint32_t)(c.r[0] + 0x4FA8u);
    // 0e7cdc  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0xe7cdcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0e7cdf  lea esi, [eax + edx*1 + 0x3eda8]
    X86_AT(c, 0xe7cdfu);
    c.r[6] = (uint32_t)(c.r[0] + c.r[2] + 0x3EDA8u);
    // 0e7ce6  push esi
    X86_AT(c, 0xe7ce6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7ce7  push edi
    X86_AT(c, 0xe7ce7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7ce8  mov edi, ecx
    X86_AT(c, 0xe7ce8u);
    c.r[7] = c.r[1];
    // 0e7cea  mov ecx, 0x80
    X86_AT(c, 0xe7ceau);
    c.r[1] = 0x80u;
    // 0e7cef  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xe7cefu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0e7cf1  pop edi
    X86_AT(c, 0xe7cf1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7cf2  pop esi
    X86_AT(c, 0xe7cf2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7cf3  lea ecx, [eax + 0x51a8]
    X86_AT(c, 0xe7cf3u);
    c.r[1] = (uint32_t)(c.r[0] + 0x51A8u);
    // 0e7cf9  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0xe7cf9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0e7cfc  lea esi, [eax + edx*1 + 0x40da8]
    X86_AT(c, 0xe7cfcu);
    c.r[6] = (uint32_t)(c.r[0] + c.r[2] + 0x40DA8u);
    // 0e7d03  push esi
    X86_AT(c, 0xe7d03u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7d04  push edi
    X86_AT(c, 0xe7d04u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7d05  mov edi, ecx
    X86_AT(c, 0xe7d05u);
    c.r[7] = c.r[1];
    // 0e7d07  mov ecx, 0x80
    X86_AT(c, 0xe7d07u);
    c.r[1] = 0x80u;
    // 0e7d0c  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xe7d0cu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0e7d0e  pop edi
    X86_AT(c, 0xe7d0eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7d0f  pop esi
    X86_AT(c, 0xe7d0fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7d10  inc dword ptr [0xcdc30]
    X86_AT(c, 0xe7d10u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xCDC30u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e7d16  cmp dword ptr [0xcdc30], 0x10
    X86_AT(c, 0xe7d16u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDC30u))), 0x10u, 0, 4);
    // 0e7d1d  jne 0xe7d29
    X86_AT(c, 0xe7d1du);
    if (x86_cc(c, 5)) { goto L_e7d29; }
    X86_TICK(c, 2);
    // 0e7d1f  mov dword ptr [0xcdc30], 0
    X86_AT(c, 0xe7d1fu);
    wr32((c.sbase[3] + (uint32_t)(0xCDC30u)), 0x0u);
L_e7d29:
    X86_TICK(c, 6);
    // 0e7d29  mov dword ptr [ebp - 8], 0x7d778
    X86_AT(c, 0xe7d29u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x7D778u);
    // 0e7d30  mov esi, 0xb3378
    X86_AT(c, 0xe7d30u);
    c.r[6] = 0xB3378u;
    // 0e7d35  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe7d35u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_e7d3c:
    X86_TICK(c, 12);
    // 0e7d3c  cmp dword ptr [ebp - 4], 0xf
    X86_AT(c, 0xe7d3cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xFu, 0, 4);
    // 0e7d40  jge 0xe7d6c
    X86_AT(c, 0xe7d40u);
    if (x86_cc(c, 13)) { goto L_e7d6c; }
    X86_TICK(c, 4);
    // 0e7d42  mov ebx, 0x7c778
    X86_AT(c, 0xe7d42u);
    c.r[3] = 0x7C778u;
    // 0e7d47  sub edi, edi
    X86_AT(c, 0xe7d47u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7d49:
    X86_TICK(c, 7);
    // 0e7d49  cmp edi, 0x80
    X86_AT(c, 0xe7d49u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0e7d4f  jge 0xe7d67
    X86_AT(c, 0xe7d4fu);
    if (x86_cc(c, 13)) { goto L_e7d67; }
    X86_TICK(c, 36);
    // 0e7d51  mov eax, dword ptr [esi]
    X86_AT(c, 0xe7d51u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e7d53  or eax, dword ptr [ebx]
    X86_AT(c, 0xe7d53u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 4); }
    // 0e7d55  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xe7d55u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e7d58  mov dword ptr [edx], eax
    X86_AT(c, 0xe7d58u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0e7d5a  add dword ptr [ebp - 8], 4
    X86_AT(c, 0xe7d5au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e7d5e  add esi, 4
    X86_AT(c, 0xe7d5eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e7d61  add ebx, 4
    X86_AT(c, 0xe7d61u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e7d64  inc edi
    X86_AT(c, 0xe7d64u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7d65  jmp 0xe7d49
    X86_AT(c, 0xe7d65u);
    X86_POLL(c, 0xe7d49u); goto L_e7d49;
L_e7d67:
    X86_TICK(c, 13);
    // 0e7d67  inc dword ptr [ebp - 4]
    X86_AT(c, 0xe7d67u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e7d6a  jmp 0xe7d3c
    X86_AT(c, 0xe7d6au);
    X86_POLL(c, 0xe7d3cu); goto L_e7d3c;
L_e7d6c:
    X86_TICK(c, 12);
    // 0e7d6c  cmp word ptr [0xcda66], 0
    X86_AT(c, 0xe7d6cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDA66u))), 0x0u, 0, 2);
    // 0e7d74  jne 0xe7d99
    X86_AT(c, 0xe7d74u);
    if (x86_cc(c, 5)) { goto L_e7d99; }
    X86_TICK(c, 13);
    // 0e7d76  mov eax, 0x93978
    X86_AT(c, 0xe7d76u);
    c.r[0] = 0x93978u;
    // 0e7d7b  cmp eax, dword ptr [0xcd9a8]
    X86_AT(c, 0xe7d7bu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xCD9A8u))), 0, 4);
    // 0e7d81  jne 0xe7d8f
    X86_AT(c, 0xe7d81u);
    if (x86_cc(c, 5)) { goto L_e7d8f; }
    X86_TICK(c, 9);
    // 0e7d83  mov dword ptr [0xcd9a8], 0x93b78
    X86_AT(c, 0xe7d83u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9A8u)), 0x93B78u);
    // 0e7d8d  jmp 0xe7d99
    X86_AT(c, 0xe7d8du);
    goto L_e7d99;
L_e7d8f:
    X86_TICK(c, 2);
    // 0e7d8f  mov dword ptr [0xcd9a8], 0x93978
    X86_AT(c, 0xe7d8fu);
    wr32((c.sbase[3] + (uint32_t)(0xCD9A8u)), 0x93978u);
L_e7d99:
    X86_TICK(c, 12);
    // 0e7d99  cmp word ptr [0xcda68], 0
    X86_AT(c, 0xe7d99u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDA68u))), 0x0u, 0, 2);
    // 0e7da1  jne 0xe7dc6
    X86_AT(c, 0xe7da1u);
    if (x86_cc(c, 5)) { goto L_e7dc6; }
    X86_TICK(c, 13);
    // 0e7da3  mov eax, 0x93578
    X86_AT(c, 0xe7da3u);
    c.r[0] = 0x93578u;
    // 0e7da8  cmp eax, dword ptr [0xcd9a4]
    X86_AT(c, 0xe7da8u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xCD9A4u))), 0, 4);
    // 0e7dae  jne 0xe7dbc
    X86_AT(c, 0xe7daeu);
    if (x86_cc(c, 5)) { goto L_e7dbc; }
    X86_TICK(c, 9);
    // 0e7db0  mov dword ptr [0xcd9a4], 0x93778
    X86_AT(c, 0xe7db0u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9A4u)), 0x93778u);
    // 0e7dba  jmp 0xe7dc6
    X86_AT(c, 0xe7dbau);
    goto L_e7dc6;
L_e7dbc:
    X86_TICK(c, 2);
    // 0e7dbc  mov dword ptr [0xcd9a4], 0x93578
    X86_AT(c, 0xe7dbcu);
    wr32((c.sbase[3] + (uint32_t)(0xCD9A4u)), 0x93578u);
L_e7dc6:
    X86_TICK(c, 18);
    // 0e7dc6  dec word ptr [0xcda66]
    X86_AT(c, 0xe7dc6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xCDA66u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0e7dcd  cmp word ptr [0xcda66], 0xffff
    X86_AT(c, 0xe7dcdu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDA66u))), 0xFFFFu, 0, 2);
    // 0e7dd5  jne 0xe7de0
    X86_AT(c, 0xe7dd5u);
    if (x86_cc(c, 5)) { goto L_e7de0; }
    X86_TICK(c, 2);
    // 0e7dd7  mov word ptr [0xcda66], 4
    X86_AT(c, 0xe7dd7u);
    wr16((c.sbase[3] + (uint32_t)(0xCDA66u)), 0x4u);
L_e7de0:
    X86_TICK(c, 18);
    // 0e7de0  dec word ptr [0xcda68]
    X86_AT(c, 0xe7de0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xCDA68u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0e7de7  cmp word ptr [0xcda68], 0xffff
    X86_AT(c, 0xe7de7u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDA68u))), 0xFFFFu, 0, 2);
    // 0e7def  jne 0xe7dfa
    X86_AT(c, 0xe7defu);
    if (x86_cc(c, 5)) { goto L_e7dfa; }
    X86_TICK(c, 2);
    // 0e7df1  mov word ptr [0xcda68], 3
    X86_AT(c, 0xe7df1u);
    wr16((c.sbase[3] + (uint32_t)(0xCDA68u)), 0x3u);
L_e7dfa:
    X86_TICK(c, 18);
    // 0e7dfa  dec word ptr [0xcda6a]
    X86_AT(c, 0xe7dfau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xCDA6Au)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0e7e01  cmp word ptr [0xcda6a], 0xffff
    X86_AT(c, 0xe7e01u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDA6Au))), 0xFFFFu, 0, 2);
    // 0e7e09  jne 0xe7e14
    X86_AT(c, 0xe7e09u);
    if (x86_cc(c, 5)) { goto L_e7e14; }
    X86_TICK(c, 2);
    // 0e7e0b  mov word ptr [0xcda6a], 2
    X86_AT(c, 0xe7e0bu);
    wr16((c.sbase[3] + (uint32_t)(0xCDA6Au)), 0x2u);
L_e7e14:
    X86_TICK(c, 28);
    // 0e7e14  pop edi
    X86_AT(c, 0xe7e14u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7e15  pop esi
    X86_AT(c, 0xe7e15u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7e16  pop ebx
    X86_AT(c, 0xe7e16u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e7e17  leave 
    X86_AT(c, 0xe7e17u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7e18  ret 
    X86_AT(c, 0xe7e18u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7c84u, "ran off the end of a function");
}
void f_000e7e1c(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0e7e1c  push ebp
    X86_AT(c, 0xe7e1cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e7e1d  mov ebp, esp
    X86_AT(c, 0xe7e1du);
    c.r[5] = c.r[4];
    // 0e7e1f  sub esp, 0xc
    X86_AT(c, 0xe7e1fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0e7e22  push ebx
    X86_AT(c, 0xe7e22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e7e23  push esi
    X86_AT(c, 0xe7e23u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7e24  push edi
    X86_AT(c, 0xe7e24u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7e25  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe7e25u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e7e28  push eax
    X86_AT(c, 0xe7e28u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7e29  lea eax, [ebp - 8]
    X86_AT(c, 0xe7e29u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e7e2c  push eax
    X86_AT(c, 0xe7e2cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7e2d  lea eax, [ebp - 4]
    X86_AT(c, 0xe7e2du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e7e30  push eax
    X86_AT(c, 0xe7e30u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7e31  push 0x8000
    X86_AT(c, 0xe7e31u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0e7e36  push 0x7b378
    X86_AT(c, 0xe7e36u);
    { uint32_t v = 0x7B378u; push32(c, v); }
    // 0e7e3b  push 0x20ec
    X86_AT(c, 0xe7e3bu);
    { uint32_t v = 0x20ECu; push32(c, v); }
    // 0e7e40  call 0xe6460
    X86_AT(c, 0xe7e40u);
    push32(c, 0xe7e45u); f_000e6460(c); X86_RET(c, 0xe7e45u);
    X86_TICK(c, 8);
    // 0e7e45  mov esi, 0xb3378
    X86_AT(c, 0xe7e45u);
    c.r[6] = 0xB3378u;
    // 0e7e4a  mov ebx, 0x7d778
    X86_AT(c, 0xe7e4au);
    c.r[3] = 0x7D778u;
    // 0e7e4f  sub edi, edi
    X86_AT(c, 0xe7e4fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e7e51  add esp, 0x18
    X86_AT(c, 0xe7e51u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_e7e54:
    X86_TICK(c, 7);
    // 0e7e54  cmp edi, 0x780
    X86_AT(c, 0xe7e54u);
    (void)x86_sub(c, c.r[7], 0x780u, 0, 4);
    // 0e7e5a  jge 0xe7e65
    X86_AT(c, 0xe7e5au);
    if (x86_cc(c, 13)) { goto L_e7e65; }
    X86_TICK(c, 15);
    // 0e7e5c  mov eax, dword ptr [ebx + edi*4]
    X86_AT(c, 0xe7e5cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7] * 4)));
    // 0e7e5f  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xe7e5fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0e7e62  inc edi
    X86_AT(c, 0xe7e62u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7e63  jmp 0xe7e54
    X86_AT(c, 0xe7e63u);
    X86_POLL(c, 0xe7e54u); goto L_e7e54;
L_e7e65:
    X86_TICK(c, 25);
    // 0e7e65  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe7e65u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e7e68  push eax
    X86_AT(c, 0xe7e68u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7e69  lea ecx, [ebp - 8]
    X86_AT(c, 0xe7e69u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e7e6c  push ecx
    X86_AT(c, 0xe7e6cu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e7e6d  lea edx, [ebp - 4]
    X86_AT(c, 0xe7e6du);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e7e70  push edx
    X86_AT(c, 0xe7e70u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e7e71  push 0x8000
    X86_AT(c, 0xe7e71u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0e7e76  push 0x83378
    X86_AT(c, 0xe7e76u);
    { uint32_t v = 0x83378u; push32(c, v); }
    // 0e7e7b  push 0x2100
    X86_AT(c, 0xe7e7bu);
    { uint32_t v = 0x2100u; push32(c, v); }
    // 0e7e80  call 0xe6460
    X86_AT(c, 0xe7e80u);
    push32(c, 0xe7e85u); f_000e6460(c); X86_RET(c, 0xe7e85u);
    X86_TICK(c, 25);
    // 0e7e85  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe7e85u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e7e88  push eax
    X86_AT(c, 0xe7e88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7e89  lea ecx, [ebp - 8]
    X86_AT(c, 0xe7e89u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e7e8c  push ecx
    X86_AT(c, 0xe7e8cu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e7e8d  lea edx, [ebp - 4]
    X86_AT(c, 0xe7e8du);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e7e90  push edx
    X86_AT(c, 0xe7e90u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e7e91  push 0x8000
    X86_AT(c, 0xe7e91u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0e7e96  push 0x8b378
    X86_AT(c, 0xe7e96u);
    { uint32_t v = 0x8B378u; push32(c, v); }
    // 0e7e9b  push 0x2114
    X86_AT(c, 0xe7e9bu);
    { uint32_t v = 0x2114u; push32(c, v); }
    // 0e7ea0  call 0xe6460
    X86_AT(c, 0xe7ea0u);
    push32(c, 0xe7ea5u); f_000e6460(c); X86_RET(c, 0xe7ea5u);
    X86_TICK(c, 25);
    // 0e7ea5  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe7ea5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e7ea8  push eax
    X86_AT(c, 0xe7ea8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7ea9  lea ecx, [ebp - 8]
    X86_AT(c, 0xe7ea9u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e7eac  push ecx
    X86_AT(c, 0xe7eacu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e7ead  lea edx, [ebp - 4]
    X86_AT(c, 0xe7eadu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e7eb0  push edx
    X86_AT(c, 0xe7eb0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e7eb1  push 0x8000
    X86_AT(c, 0xe7eb1u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0e7eb6  push 0x93378
    X86_AT(c, 0xe7eb6u);
    { uint32_t v = 0x93378u; push32(c, v); }
    // 0e7ebb  push 0x2128
    X86_AT(c, 0xe7ebbu);
    { uint32_t v = 0x2128u; push32(c, v); }
    // 0e7ec0  call 0xe6460
    X86_AT(c, 0xe7ec0u);
    push32(c, 0xe7ec5u); f_000e6460(c); X86_RET(c, 0xe7ec5u);
    X86_TICK(c, 27);
    // 0e7ec5  add esp, 0x48
    X86_AT(c, 0xe7ec5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0e7ec8  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe7ec8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e7ecb  push eax
    X86_AT(c, 0xe7ecbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7ecc  lea ecx, [ebp - 8]
    X86_AT(c, 0xe7eccu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e7ecf  push ecx
    X86_AT(c, 0xe7ecfu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e7ed0  lea edx, [ebp - 4]
    X86_AT(c, 0xe7ed0u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e7ed3  push edx
    X86_AT(c, 0xe7ed3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e7ed4  push 0x8000
    X86_AT(c, 0xe7ed4u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0e7ed9  push 0x9b378
    X86_AT(c, 0xe7ed9u);
    { uint32_t v = 0x9B378u; push32(c, v); }
    // 0e7ede  push 0x213c
    X86_AT(c, 0xe7edeu);
    { uint32_t v = 0x213Cu; push32(c, v); }
    // 0e7ee3  call 0xe6460
    X86_AT(c, 0xe7ee3u);
    push32(c, 0xe7ee8u); f_000e6460(c); X86_RET(c, 0xe7ee8u);
    X86_TICK(c, 25);
    // 0e7ee8  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe7ee8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e7eeb  push eax
    X86_AT(c, 0xe7eebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7eec  lea ecx, [ebp - 8]
    X86_AT(c, 0xe7eecu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e7eef  push ecx
    X86_AT(c, 0xe7eefu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e7ef0  lea edx, [ebp - 4]
    X86_AT(c, 0xe7ef0u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e7ef3  push edx
    X86_AT(c, 0xe7ef3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e7ef4  push 0x8000
    X86_AT(c, 0xe7ef4u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0e7ef9  push 0xa3378
    X86_AT(c, 0xe7ef9u);
    { uint32_t v = 0xA3378u; push32(c, v); }
    // 0e7efe  push 0x2150
    X86_AT(c, 0xe7efeu);
    { uint32_t v = 0x2150u; push32(c, v); }
    // 0e7f03  call 0xe6460
    X86_AT(c, 0xe7f03u);
    push32(c, 0xe7f08u); f_000e6460(c); X86_RET(c, 0xe7f08u);
    X86_TICK(c, 25);
    // 0e7f08  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe7f08u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e7f0b  push eax
    X86_AT(c, 0xe7f0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7f0c  lea eax, [ebp - 8]
    X86_AT(c, 0xe7f0cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e7f0f  push eax
    X86_AT(c, 0xe7f0fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7f10  lea eax, [ebp - 4]
    X86_AT(c, 0xe7f10u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e7f13  push eax
    X86_AT(c, 0xe7f13u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7f14  push 0x8000
    X86_AT(c, 0xe7f14u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0e7f19  push 0xab378
    X86_AT(c, 0xe7f19u);
    { uint32_t v = 0xAB378u; push32(c, v); }
    // 0e7f1e  push 0x2164
    X86_AT(c, 0xe7f1eu);
    { uint32_t v = 0x2164u; push32(c, v); }
    // 0e7f23  call 0xe6460
    X86_AT(c, 0xe7f23u);
    push32(c, 0xe7f28u); f_000e6460(c); X86_RET(c, 0xe7f28u);
    X86_TICK(c, 4);
    // 0e7f28  add esp, 0x48
    X86_AT(c, 0xe7f28u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0e7f2b  sub edi, edi
    X86_AT(c, 0xe7f2bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7f2d:
    X86_TICK(c, 7);
    // 0e7f2d  cmp edi, 0x200
    X86_AT(c, 0xe7f2du);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0e7f33  jge 0xe7f3f
    X86_AT(c, 0xe7f33u);
    if (x86_cc(c, 13)) { goto L_e7f3f; }
    X86_TICK(c, 11);
    // 0e7f35  mov byte ptr [edi + 0xb5178], 0x99
    X86_AT(c, 0xe7f35u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xB5178u)), 0x99u);
    // 0e7f3c  inc edi
    X86_AT(c, 0xe7f3cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7f3d  jmp 0xe7f2d
    X86_AT(c, 0xe7f3du);
    X86_POLL(c, 0xe7f2du); goto L_e7f2d;
L_e7f3f:
    X86_TICK(c, 2);
    // 0e7f3f  sub edi, edi
    X86_AT(c, 0xe7f3fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7f41:
    X86_TICK(c, 7);
    // 0e7f41  cmp edi, 0x200
    X86_AT(c, 0xe7f41u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0e7f47  jge 0xe7f53
    X86_AT(c, 0xe7f47u);
    if (x86_cc(c, 13)) { goto L_e7f53; }
    X86_TICK(c, 11);
    // 0e7f49  mov byte ptr [edi + 0xb5378], 0
    X86_AT(c, 0xe7f49u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xB5378u)), 0x0u);
    // 0e7f50  inc edi
    X86_AT(c, 0xe7f50u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7f51  jmp 0xe7f41
    X86_AT(c, 0xe7f51u);
    X86_POLL(c, 0xe7f41u); goto L_e7f41;
L_e7f53:
    X86_TICK(c, 7);
    // 0e7f53  call 0xe8800
    X86_AT(c, 0xe7f53u);
    push32(c, 0xe7f58u); f_000e8800(c); X86_RET(c, 0xe7f58u);
    X86_TICK(c, 28);
    // 0e7f58  pop edi
    X86_AT(c, 0xe7f58u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7f59  pop esi
    X86_AT(c, 0xe7f59u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7f5a  pop ebx
    X86_AT(c, 0xe7f5au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e7f5b  leave 
    X86_AT(c, 0xe7f5bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7f5c  ret 
    X86_AT(c, 0xe7f5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7e1cu, "ran off the end of a function");
}
void f_000e7f60(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e7f60  push ebp
    X86_AT(c, 0xe7f60u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e7f61  mov ebp, esp
    X86_AT(c, 0xe7f61u);
    c.r[5] = c.r[4];
    // 0e7f63  sub esp, 0x18
    X86_AT(c, 0xe7f63u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x18u, 0, 4); }
    // 0e7f66  push ebx
    X86_AT(c, 0xe7f66u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e7f67  push esi
    X86_AT(c, 0xe7f67u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7f68  push edi
    X86_AT(c, 0xe7f68u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7f69  cmp dword ptr [0xcda6c], 0
    X86_AT(c, 0xe7f69u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDA6Cu))), 0x0u, 0, 4);
    // 0e7f70  je 0xe7f88
    X86_AT(c, 0xe7f70u);
    if (x86_cc(c, 4)) { goto L_e7f88; }
    X86_TICK(c, 22);
    // 0e7f72  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xe7f72u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0e7f75  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe7f75u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e7f78  push dword ptr [ebp + 8]
    X86_AT(c, 0xe7f78u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e7f7b  call 0xe820c
    X86_AT(c, 0xe7f7bu);
    push32(c, 0xe7f80u); f_000e820c(c); X86_RET(c, 0xe7f80u);
    X86_TICK(c, 9);
    // 0e7f80  add esp, 0xc
    X86_AT(c, 0xe7f80u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e7f83  jmp 0xe8204
    X86_AT(c, 0xe7f83u);
    goto L_e8204;
L_e7f88:
    X86_TICK(c, 11);
    // 0e7f88  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe7f88u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e7f8b  cmp eax, 1
    X86_AT(c, 0xe7f8bu);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0e7f8e  je 0xe7f99
    X86_AT(c, 0xe7f8eu);
    if (x86_cc(c, 4)) { goto L_e7f99; }
    X86_TICK(c, 7);
    // 0e7f90  cmp eax, 4
    X86_AT(c, 0xe7f90u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0e7f93  jne 0xe8026
    X86_AT(c, 0xe7f93u);
    if (x86_cc(c, 5)) { goto L_e8026; }
L_e7f99:
    X86_TICK(c, 22);
    // 0e7f99  sub eax, eax
    X86_AT(c, 0xe7f99u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e7f9b  mov word ptr [0xcda74], ax
    X86_AT(c, 0xe7f9bu);
    wr16((c.sbase[3] + (uint32_t)(0xCDA74u)), (c.r[0] & 0xFFFFu));
    // 0e7fa1  sub dword ptr [ebp + 8], 5
    X86_AT(c, 0xe7fa1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0e7fa5  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe7fa5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e7fa8  cmp eax, edx
    X86_AT(c, 0xe7fa8u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0e7faa  jle 0xe7fb0
    X86_AT(c, 0xe7faau);
    if (x86_cc(c, 14)) { goto L_e7fb0; }
    X86_TICK(c, 7);
    // 0e7fac  add dword ptr [ebp + 8], 0x40
    X86_AT(c, 0xe7facu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x40u, 0, 4)); }
L_e7fb0:
    X86_TICK(c, 18);
    // 0e7fb0  sub dword ptr [ebp + 0xc], 5
    X86_AT(c, 0xe7fb0u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0e7fb4  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe7fb4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e7fb7  and eax, eax
    X86_AT(c, 0xe7fb7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e7fb9  jge 0xe7fbf
    X86_AT(c, 0xe7fb9u);
    if (x86_cc(c, 13)) { goto L_e7fbf; }
    X86_TICK(c, 7);
    // 0e7fbb  add dword ptr [ebp + 0xc], 0x40
    X86_AT(c, 0xe7fbbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x40u, 0, 4)); }
L_e7fbf:
    X86_TICK(c, 2);
    // 0e7fbf  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe7fbfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_e7fc6:
    X86_TICK(c, 12);
    // 0e7fc6  cmp dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xe7fc6u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xBu, 0, 4);
    // 0e7fca  jge 0xe8026
    X86_AT(c, 0xe7fcau);
    if (x86_cc(c, 13)) { goto L_e8026; }
    X86_TICK(c, 8);
    // 0e7fcc  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe7fccu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e7fcf  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe7fcfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e7fd2  sub edi, edi
    X86_AT(c, 0xe7fd2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e7fd4:
    X86_TICK(c, 7);
    // 0e7fd4  cmp edi, 0xb
    X86_AT(c, 0xe7fd4u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0e7fd7  jge 0xe800f
    X86_AT(c, 0xe7fd7u);
    if (x86_cc(c, 13)) { goto L_e800f; }
    X86_TICK(c, 41);
    // 0e7fd9  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe7fd9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e7fdc  shl eax, 6
    X86_AT(c, 0xe7fdcu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0e7fdf  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe7fdfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0e7fe2  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe7fe2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e7fe5  lea ecx, [edx + edx*8]
    X86_AT(c, 0xe7fe5u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0e7fe8  lea edx, [ecx + edx*2]
    X86_AT(c, 0xe7fe8u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0e7feb  lea ecx, [edi + edx*1]
    X86_AT(c, 0xe7febu);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0e7fee  mov al, byte ptr [eax + 0xbd578]
    X86_AT(c, 0xe7feeu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBD578u))));
    // 0e7ff4  mov byte ptr [ecx + 0xbe578], al
    X86_AT(c, 0xe7ff4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xBE578u)), g8(c, 0));
    // 0e7ffa  cmp dword ptr [ebp - 8], 0x3f
    X86_AT(c, 0xe7ffau);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x3Fu, 0, 4);
    // 0e7ffe  jne 0xe8009
    X86_AT(c, 0xe7ffeu);
    if (x86_cc(c, 5)) { goto L_e8009; }
    X86_TICK(c, 9);
    // 0e8000  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xe8000u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0e8007  jmp 0xe800c
    X86_AT(c, 0xe8007u);
    goto L_e800c;
L_e8009:
    X86_TICK(c, 6);
    // 0e8009  inc dword ptr [ebp - 8]
    X86_AT(c, 0xe8009u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_e800c:
    X86_TICK(c, 9);
    // 0e800c  inc edi
    X86_AT(c, 0xe800cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e800d  jmp 0xe7fd4
    X86_AT(c, 0xe800du);
    X86_POLL(c, 0xe7fd4u); goto L_e7fd4;
L_e800f:
    X86_TICK(c, 12);
    // 0e800f  cmp dword ptr [ebp + 0xc], 0x3f
    X86_AT(c, 0xe800fu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x3Fu, 0, 4);
    // 0e8013  jne 0xe801e
    X86_AT(c, 0xe8013u);
    if (x86_cc(c, 5)) { goto L_e801e; }
    X86_TICK(c, 9);
    // 0e8015  mov dword ptr [ebp + 0xc], 0
    X86_AT(c, 0xe8015u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)), 0x0u);
    // 0e801c  jmp 0xe8021
    X86_AT(c, 0xe801cu);
    goto L_e8021;
L_e801e:
    X86_TICK(c, 6);
    // 0e801e  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0xe801eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_e8021:
    X86_TICK(c, 13);
    // 0e8021  inc dword ptr [ebp - 4]
    X86_AT(c, 0xe8021u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e8024  jmp 0xe7fc6
    X86_AT(c, 0xe8024u);
    X86_POLL(c, 0xe7fc6u); goto L_e7fc6;
L_e8026:
    X86_TICK(c, 12);
    // 0e8026  cmp dword ptr [ebp + 0x10], 2
    X86_AT(c, 0xe8026u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x2u, 0, 4);
    // 0e802a  je 0xe8031
    X86_AT(c, 0xe802au);
    if (x86_cc(c, 4)) { goto L_e8031; }
    X86_TICK(c, 7);
    // 0e802c  call 0xe7c84
    X86_AT(c, 0xe802cu);
    push32(c, 0xe8031u); f_000e7c84(c); X86_RET(c, 0xe8031u);
L_e8031:
    X86_TICK(c, 2);
    // 0e8031  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe8031u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_e8038:
    X86_TICK(c, 12);
    // 0e8038  cmp dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xe8038u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xBu, 0, 4);
    // 0e803c  jge 0xe80ec
    X86_AT(c, 0xe803cu);
    if (x86_cc(c, 13)) { goto L_e80ec; }
    X86_TICK(c, 2);
    // 0e8042  sub edi, edi
    X86_AT(c, 0xe8042u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e8044:
    X86_TICK(c, 7);
    // 0e8044  cmp edi, 0xb
    X86_AT(c, 0xe8044u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0e8047  jge 0xe80e4
    X86_AT(c, 0xe8047u);
    if (x86_cc(c, 13)) { goto L_e80e4; }
    X86_TICK(c, 72);
    // 0e804d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe804du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e8050  lea edx, [eax + eax*8]
    X86_AT(c, 0xe8050u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e8053  lea eax, [edx + eax*2]
    X86_AT(c, 0xe8053u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0e8056  add eax, edi
    X86_AT(c, 0xe8056u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0e8058  mov al, byte ptr [eax + 0xbe578]
    X86_AT(c, 0xe8058u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBE578u))));
    // 0e805e  mov byte ptr [ebp - 0x11], al
    X86_AT(c, 0xe805eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu)), g8(c, 0));
    // 0e8061  mov edx, edi
    X86_AT(c, 0xe8061u);
    c.r[2] = c.r[7];
    // 0e8063  shl edx, 5
    X86_AT(c, 0xe8063u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e8066  xchg edx, eax
    X86_AT(c, 0xe8066u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0e8067  cdq 
    X86_AT(c, 0xe8067u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e8068  sub eax, edx
    X86_AT(c, 0xe8068u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e806a  sar eax, 1
    X86_AT(c, 0xe806au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e806c  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe806cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e806f  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xe806fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0e8072  lea eax, [edx + edx*4]
    X86_AT(c, 0xe8072u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0e8075  lea eax, [edx + eax*2]
    X86_AT(c, 0xe8075u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0e8078  shl eax, 0xa
    X86_AT(c, 0xe8078u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0e807b  cdq 
    X86_AT(c, 0xe807bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e807c  sub eax, edx
    X86_AT(c, 0xe807cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e807e  sar eax, 1
    X86_AT(c, 0xe807eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e8080  add eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xe8080u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0, 4); }
    // 0e8083  lea ebx, [eax + 0xbe5f4]
    X86_AT(c, 0xe8083u);
    c.r[3] = (uint32_t)(c.r[0] + 0xBE5F4u);
    // 0e8089  movzx edx, byte ptr [ebp - 0x11]
    X86_AT(c, 0xe8089u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu)));
    // 0e808d  cmp edx, 7
    X86_AT(c, 0xe808du);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0e8090  je 0xe809f
    X86_AT(c, 0xe8090u);
    if (x86_cc(c, 4)) { goto L_e809f; }
    X86_TICK(c, 7);
    // 0e8092  cmp edx, 8
    X86_AT(c, 0xe8092u);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0e8095  jne 0xe80a7
    X86_AT(c, 0xe8095u);
    if (x86_cc(c, 5)) { goto L_e80a7; }
    X86_TICK(c, 11);
    // 0e8097  mov esi, dword ptr [0xcd9a8]
    X86_AT(c, 0xe8097u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xCD9A8u)));
    // 0e809d  jmp 0xe80b4
    X86_AT(c, 0xe809du);
    goto L_e80b4;
L_e809f:
    X86_TICK(c, 11);
    // 0e809f  mov esi, dword ptr [0xcd9a4]
    X86_AT(c, 0xe809fu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xCD9A4u)));
    // 0e80a5  jmp 0xe80b4
    X86_AT(c, 0xe80a5u);
    goto L_e80b4;
L_e80a7:
    X86_TICK(c, 11);
    // 0e80a7  movzx eax, byte ptr [ebp - 0x11]
    X86_AT(c, 0xe80a7u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu)));
    // 0e80ab  shl eax, 9
    X86_AT(c, 0xe80abu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e80ae  lea esi, [eax + 0x7b378]
    X86_AT(c, 0xe80aeu);
    c.r[6] = (uint32_t)(c.r[0] + 0x7B378u);
L_e80b4:
    X86_TICK(c, 2);
    // 0e80b4  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xe80b4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_e80bb:
    X86_TICK(c, 11);
    // 0e80bb  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe80bbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e80be  cmp eax, 0x20
    X86_AT(c, 0xe80beu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0e80c1  jge 0xe80de
    X86_AT(c, 0xe80c1u);
    if (x86_cc(c, 13)) { goto L_e80de; }
    X86_TICK(c, 40);
    // 0e80c3  push esi
    X86_AT(c, 0xe80c3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e80c4  push edi
    X86_AT(c, 0xe80c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e80c5  mov edi, ebx
    X86_AT(c, 0xe80c5u);
    c.r[7] = c.r[3];
    // 0e80c7  mov ecx, 4
    X86_AT(c, 0xe80c7u);
    c.r[1] = 0x4u;
    // 0e80cc  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xe80ccu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0e80ce  pop edi
    X86_AT(c, 0xe80ceu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e80cf  pop esi
    X86_AT(c, 0xe80cfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e80d0  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xe80d0u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e80d3  add ebx, 0xb0
    X86_AT(c, 0xe80d3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0e80d9  add esi, 0x10
    X86_AT(c, 0xe80d9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e80dc  jmp 0xe80bb
    X86_AT(c, 0xe80dcu);
    X86_POLL(c, 0xe80bbu); goto L_e80bb;
L_e80de:
    X86_TICK(c, 9);
    // 0e80de  inc edi
    X86_AT(c, 0xe80deu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e80df  jmp 0xe8044
    X86_AT(c, 0xe80dfu);
    X86_POLL(c, 0xe8044u); goto L_e8044;
L_e80e4:
    X86_TICK(c, 13);
    // 0e80e4  inc dword ptr [ebp - 4]
    X86_AT(c, 0xe80e4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e80e7  jmp 0xe8038
    X86_AT(c, 0xe80e7u);
    X86_POLL(c, 0xe8038u); goto L_e8038;
L_e80ec:
    X86_TICK(c, 7);
    // 0e80ec  call 0xe866c
    X86_AT(c, 0xe80ecu);
    push32(c, 0xe80f1u); f_000e866c(c); X86_RET(c, 0xe80f1u);
    X86_TICK(c, 9);
    // 0e80f1  push 1
    X86_AT(c, 0xe80f1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e80f3  call 0xe58cc
    X86_AT(c, 0xe80f3u);
    push32(c, 0xe80f8u); f_000e58cc(c); X86_RET(c, 0xe80f8u);
    X86_TICK(c, 14);
    // 0e80f8  add esp, 4
    X86_AT(c, 0xe80f8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e80fb  cmp dword ptr [ebp + 0x10], 1
    X86_AT(c, 0xe80fbu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 4);
    // 0e80ff  jne 0xe81af
    X86_AT(c, 0xe80ffu);
    if (x86_cc(c, 5)) { goto L_e81af; }
    X86_TICK(c, 6);
    // 0e8105  mov dword ptr [0x7add8], 1
    X86_AT(c, 0xe8105u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0x1u);
    // 0e810f  mov byte ptr [0x7ade3], 0
    X86_AT(c, 0xe810fu);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE3u)), 0x0u);
    // 0e8116  mov dword ptr [ebp - 0x10], 1
    X86_AT(c, 0xe8116u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x1u);
L_e811d:
    X86_TICK(c, 12);
    // 0e811d  cmp dword ptr [ebp - 0x10], 8
    X86_AT(c, 0xe811du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x8u, 0, 4);
    // 0e8121  jge 0xe8158
    X86_AT(c, 0xe8121u);
    if (x86_cc(c, 13)) { goto L_e8158; }
    X86_TICK(c, 27);
    // 0e8123  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe8123u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0e8126  mov dword ptr [0x7addc], eax
    X86_AT(c, 0xe8126u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADDCu)), c.r[0]);
    // 0e812b  sub edx, edx
    X86_AT(c, 0xe812bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e812d  mov byte ptr [0x7ade0], dl
    X86_AT(c, 0xe812du);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE0u)), g8(c, 2));
    // 0e8133  mov byte ptr [0x7ade1], dl
    X86_AT(c, 0xe8133u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE1u)), g8(c, 2));
    // 0e8139  mov byte ptr [0x7ade2], dl
    X86_AT(c, 0xe8139u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE2u)), g8(c, 2));
    // 0e813f  push 0x7add8
    X86_AT(c, 0xe813fu);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e8144  push 1
    X86_AT(c, 0xe8144u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e8146  push 0x7a7d8
    X86_AT(c, 0xe8146u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e814b  call 0x19c
    X86_AT(c, 0xe814bu);
    push32(c, 0xe8150u); f_0000019c(c); X86_RET(c, 0xe8150u);
    X86_TICK(c, 15);
    // 0e8150  inc dword ptr [ebp - 0x10]
    X86_AT(c, 0xe8150u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e8153  add esp, 0xc
    X86_AT(c, 0xe8153u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e8156  jmp 0xe811d
    X86_AT(c, 0xe8156u);
    X86_POLL(c, 0xe811du); goto L_e811d;
L_e8158:
    X86_TICK(c, 25);
    // 0e8158  mov dword ptr [0x7add8], 0xbe5f4
    X86_AT(c, 0xe8158u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0xBE5F4u);
    // 0e8162  mov word ptr [0x7addc], 0x14
    X86_AT(c, 0xe8162u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x14u);
    // 0e816b  mov word ptr [0x7adde], 0x40
    X86_AT(c, 0xe816bu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), 0x40u);
    // 0e8174  mov word ptr [0x7ade0], 0x60
    X86_AT(c, 0xe8174u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), 0x60u);
    // 0e817d  mov word ptr [0x7ade2], 0x19f
    X86_AT(c, 0xe817du);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), 0x19Fu);
    // 0e8186  mov word ptr [0x7ade4], 0x1bf
    X86_AT(c, 0xe8186u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE4u)), 0x1BFu);
    // 0e818f  push 0x7add8
    X86_AT(c, 0xe818fu);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e8194  push 0
    X86_AT(c, 0xe8194u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8196  push 0x7a7d8
    X86_AT(c, 0xe8196u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e819b  call 0x5c4
    X86_AT(c, 0xe819bu);
    push32(c, 0xe81a0u); f_000005c4(c); X86_RET(c, 0xe81a0u);
    X86_TICK(c, 9);
    // 0e81a0  push 0x1194
    X86_AT(c, 0xe81a0u);
    { uint32_t v = 0x1194u; push32(c, v); }
    // 0e81a5  call 0xe76cc
    X86_AT(c, 0xe81a5u);
    push32(c, 0xe81aau); f_000e76cc(c); X86_RET(c, 0xe81aau);
    X86_TICK(c, 9);
    // 0e81aa  add esp, 0x10
    X86_AT(c, 0xe81aau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e81ad  jmp 0xe81fa
    X86_AT(c, 0xe81adu);
    goto L_e81fa;
L_e81af:
    X86_TICK(c, 25);
    // 0e81af  mov dword ptr [0x7add8], 0xbe5f4
    X86_AT(c, 0xe81afu);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0xBE5F4u);
    // 0e81b9  mov word ptr [0x7addc], 0x14
    X86_AT(c, 0xe81b9u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x14u);
    // 0e81c2  mov word ptr [0x7adde], 0x40
    X86_AT(c, 0xe81c2u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), 0x40u);
    // 0e81cb  mov word ptr [0x7ade0], 0x60
    X86_AT(c, 0xe81cbu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), 0x60u);
    // 0e81d4  mov word ptr [0x7ade2], 0x19f
    X86_AT(c, 0xe81d4u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), 0x19Fu);
    // 0e81dd  mov word ptr [0x7ade4], 0x1bf
    X86_AT(c, 0xe81ddu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE4u)), 0x1BFu);
    // 0e81e6  push 0x7add8
    X86_AT(c, 0xe81e6u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e81eb  push 0
    X86_AT(c, 0xe81ebu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e81ed  push 0x7a7d8
    X86_AT(c, 0xe81edu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e81f2  call 0x5c4
    X86_AT(c, 0xe81f2u);
    push32(c, 0xe81f7u); f_000005c4(c); X86_RET(c, 0xe81f7u);
    X86_TICK(c, 2);
    // 0e81f7  add esp, 0xc
    X86_AT(c, 0xe81f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e81fa:
    X86_TICK(c, 9);
    // 0e81fa  push 0
    X86_AT(c, 0xe81fau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e81fc  call 0xe58cc
    X86_AT(c, 0xe81fcu);
    push32(c, 0xe8201u); f_000e58cc(c); X86_RET(c, 0xe8201u);
    X86_TICK(c, 2);
    // 0e8201  add esp, 4
    X86_AT(c, 0xe8201u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e8204:
    X86_TICK(c, 28);
    // 0e8204  pop edi
    X86_AT(c, 0xe8204u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8205  pop esi
    X86_AT(c, 0xe8205u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8206  pop ebx
    X86_AT(c, 0xe8206u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e8207  leave 
    X86_AT(c, 0xe8207u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8208  ret 
    X86_AT(c, 0xe8208u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7f60u, "ran off the end of a function");
}
void f_000e820c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e820c  push ebp
    X86_AT(c, 0xe820cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e820d  mov ebp, esp
    X86_AT(c, 0xe820du);
    c.r[5] = c.r[4];
    // 0e820f  sub esp, 0x18
    X86_AT(c, 0xe820fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x18u, 0, 4); }
    // 0e8212  push ebx
    X86_AT(c, 0xe8212u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8213  push esi
    X86_AT(c, 0xe8213u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8214  push edi
    X86_AT(c, 0xe8214u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8215  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe8215u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e8218  cmp eax, 1
    X86_AT(c, 0xe8218u);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0e821b  je 0xe8226
    X86_AT(c, 0xe821bu);
    if (x86_cc(c, 4)) { goto L_e8226; }
    X86_TICK(c, 7);
    // 0e821d  cmp eax, 4
    X86_AT(c, 0xe821du);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0e8220  jne 0xe82a5
    X86_AT(c, 0xe8220u);
    if (x86_cc(c, 5)) { goto L_e82a5; }
L_e8226:
    X86_TICK(c, 21);
    // 0e8226  sub eax, eax
    X86_AT(c, 0xe8226u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e8228  mov word ptr [0xcda74], ax
    X86_AT(c, 0xe8228u);
    wr16((c.sbase[3] + (uint32_t)(0xCDA74u)), (c.r[0] & 0xFFFFu));
    // 0e822e  sub dword ptr [ebp + 8], 5
    X86_AT(c, 0xe822eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0e8232  sub dword ptr [ebp + 0xc], 5
    X86_AT(c, 0xe8232u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0e8236  xchg esi, eax
    X86_AT(c, 0xe8236u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_e8237:
    X86_TICK(c, 7);
    // 0e8237  cmp esi, 0xb
    X86_AT(c, 0xe8237u);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0e823a  jge 0xe82a5
    X86_AT(c, 0xe823au);
    if (x86_cc(c, 13)) { goto L_e82a5; }
    X86_TICK(c, 8);
    // 0e8240  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe8240u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8243  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe8243u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e8246  sub edi, edi
    X86_AT(c, 0xe8246u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e8248:
    X86_TICK(c, 7);
    // 0e8248  cmp edi, 0xb
    X86_AT(c, 0xe8248u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0e824b  jge 0xe829f
    X86_AT(c, 0xe824bu);
    if (x86_cc(c, 13)) { goto L_e829f; }
    X86_TICK(c, 11);
    // 0e824d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe824du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e8250  and eax, eax
    X86_AT(c, 0xe8250u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e8252  jl 0xe8265
    X86_AT(c, 0xe8252u);
    if (x86_cc(c, 12)) { goto L_e8265; }
    X86_TICK(c, 11);
    // 0e8254  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe8254u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e8257  and edx, edx
    X86_AT(c, 0xe8257u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0e8259  jl 0xe8265
    X86_AT(c, 0xe8259u);
    if (x86_cc(c, 12)) { goto L_e8265; }
    X86_TICK(c, 7);
    // 0e825b  cmp eax, 0x40
    X86_AT(c, 0xe825bu);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 0e825e  jge 0xe8265
    X86_AT(c, 0xe825eu);
    if (x86_cc(c, 13)) { goto L_e8265; }
    X86_TICK(c, 7);
    // 0e8260  cmp edx, 0x40
    X86_AT(c, 0xe8260u);
    (void)x86_sub(c, c.r[2], 0x40u, 0, 4);
    // 0e8263  jl 0xe8279
    X86_AT(c, 0xe8263u);
    if (x86_cc(c, 12)) { goto L_e8279; }
L_e8265:
    X86_TICK(c, 17);
    // 0e8265  mov eax, esi
    X86_AT(c, 0xe8265u);
    c.r[0] = c.r[6];
    // 0e8267  lea edx, [eax + eax*8]
    X86_AT(c, 0xe8267u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e826a  lea eax, [edx + eax*2]
    X86_AT(c, 0xe826au);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0e826d  lea edx, [edi + eax*1]
    X86_AT(c, 0xe826du);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0e8270  mov byte ptr [edx + 0xbe578], 2
    X86_AT(c, 0xe8270u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBE578u)), 0x2u);
    // 0e8277  jmp 0xe8299
    X86_AT(c, 0xe8277u);
    goto L_e8299;
L_e8279:
    X86_TICK(c, 27);
    // 0e8279  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe8279u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e827c  shl eax, 6
    X86_AT(c, 0xe827cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0e827f  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe827fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0e8282  mov edx, esi
    X86_AT(c, 0xe8282u);
    c.r[2] = c.r[6];
    // 0e8284  lea ecx, [edx + edx*8]
    X86_AT(c, 0xe8284u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0e8287  lea edx, [ecx + edx*2]
    X86_AT(c, 0xe8287u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0e828a  lea ecx, [edi + edx*1]
    X86_AT(c, 0xe828au);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0e828d  mov al, byte ptr [eax + 0xbd578]
    X86_AT(c, 0xe828du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBD578u))));
    // 0e8293  mov byte ptr [ecx + 0xbe578], al
    X86_AT(c, 0xe8293u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xBE578u)), g8(c, 0));
L_e8299:
    X86_TICK(c, 15);
    // 0e8299  inc dword ptr [ebp - 4]
    X86_AT(c, 0xe8299u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e829c  inc edi
    X86_AT(c, 0xe829cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e829d  jmp 0xe8248
    X86_AT(c, 0xe829du);
    X86_POLL(c, 0xe8248u); goto L_e8248;
L_e829f:
    X86_TICK(c, 15);
    // 0e829f  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0xe829fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e82a2  inc esi
    X86_AT(c, 0xe82a2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e82a3  jmp 0xe8237
    X86_AT(c, 0xe82a3u);
    X86_POLL(c, 0xe8237u); goto L_e8237;
L_e82a5:
    X86_TICK(c, 12);
    // 0e82a5  cmp dword ptr [ebp + 0x10], 2
    X86_AT(c, 0xe82a5u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x2u, 0, 4);
    // 0e82a9  je 0xe82b0
    X86_AT(c, 0xe82a9u);
    if (x86_cc(c, 4)) { goto L_e82b0; }
    X86_TICK(c, 7);
    // 0e82ab  call 0xe7c84
    X86_AT(c, 0xe82abu);
    push32(c, 0xe82b0u); f_000e7c84(c); X86_RET(c, 0xe82b0u);
L_e82b0:
    X86_TICK(c, 2);
    // 0e82b0  sub esi, esi
    X86_AT(c, 0xe82b0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e82b2:
    X86_TICK(c, 7);
    // 0e82b2  cmp esi, 0xb
    X86_AT(c, 0xe82b2u);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0e82b5  jge 0xe8350
    X86_AT(c, 0xe82b5u);
    if (x86_cc(c, 13)) { goto L_e8350; }
    X86_TICK(c, 2);
    // 0e82bb  sub edi, edi
    X86_AT(c, 0xe82bbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e82bd:
    X86_TICK(c, 7);
    // 0e82bd  cmp edi, 0xb
    X86_AT(c, 0xe82bdu);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0e82c0  jge 0xe834a
    X86_AT(c, 0xe82c0u);
    if (x86_cc(c, 13)) { goto L_e834a; }
    X86_TICK(c, 69);
    // 0e82c6  mov eax, 0x7a7d0
    X86_AT(c, 0xe82c6u);
    c.r[0] = 0x7A7D0u;
    // 0e82cb  mov edx, esi
    X86_AT(c, 0xe82cbu);
    c.r[2] = c.r[6];
    // 0e82cd  lea ecx, [edx + edx*8]
    X86_AT(c, 0xe82cdu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0e82d0  lea edx, [ecx + edx*2]
    X86_AT(c, 0xe82d0u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0e82d3  add edx, edi
    X86_AT(c, 0xe82d3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[7], 0, 4); }
    // 0e82d5  mov dl, byte ptr [eax + edx*1 + 0x43da8]
    X86_AT(c, 0xe82d5u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x43DA8u))));
    // 0e82dc  mov byte ptr [ebp - 0x11], dl
    X86_AT(c, 0xe82dcu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu)), g8(c, 2));
    // 0e82df  mov eax, edi
    X86_AT(c, 0xe82dfu);
    c.r[0] = c.r[7];
    // 0e82e1  shl eax, 5
    X86_AT(c, 0xe82e1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0e82e4  cdq 
    X86_AT(c, 0xe82e4u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e82e5  sub eax, edx
    X86_AT(c, 0xe82e5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e82e7  sar eax, 1
    X86_AT(c, 0xe82e7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e82e9  mov edx, esi
    X86_AT(c, 0xe82e9u);
    c.r[2] = c.r[6];
    // 0e82eb  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xe82ebu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0e82ee  lea eax, [edx + edx*4]
    X86_AT(c, 0xe82eeu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0e82f1  lea eax, [edx + eax*2]
    X86_AT(c, 0xe82f1u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0e82f4  shl eax, 0xa
    X86_AT(c, 0xe82f4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0e82f7  cdq 
    X86_AT(c, 0xe82f7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e82f8  sub eax, edx
    X86_AT(c, 0xe82f8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e82fa  sar eax, 1
    X86_AT(c, 0xe82fau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e82fc  add eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xe82fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0, 4); }
    // 0e82ff  lea ebx, [eax + 0xbe5f4]
    X86_AT(c, 0xe82ffu);
    c.r[3] = (uint32_t)(c.r[0] + 0xBE5F4u);
    // 0e8305  movzx eax, byte ptr [ebp - 0x11]
    X86_AT(c, 0xe8305u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu)));
    // 0e8309  shl eax, 9
    X86_AT(c, 0xe8309u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e830c  add eax, 0x7b378
    X86_AT(c, 0xe830cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x7B378u, 0, 4); }
    // 0e8311  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe8311u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e8314  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xe8314u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_e831b:
    X86_TICK(c, 11);
    // 0e831b  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe831bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e831e  cmp eax, 0x20
    X86_AT(c, 0xe831eu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0e8321  jge 0xe8344
    X86_AT(c, 0xe8321u);
    if (x86_cc(c, 13)) { goto L_e8344; }
    X86_TICK(c, 51);
    // 0e8323  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xe8323u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e8326  push esi
    X86_AT(c, 0xe8326u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8327  push edi
    X86_AT(c, 0xe8327u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8328  mov esi, edx
    X86_AT(c, 0xe8328u);
    c.r[6] = c.r[2];
    // 0e832a  mov edi, ebx
    X86_AT(c, 0xe832au);
    c.r[7] = c.r[3];
    // 0e832c  mov ecx, 4
    X86_AT(c, 0xe832cu);
    c.r[1] = 0x4u;
    // 0e8331  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xe8331u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0e8333  pop edi
    X86_AT(c, 0xe8333u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8334  pop esi
    X86_AT(c, 0xe8334u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8335  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xe8335u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e8338  add ebx, 0xb0
    X86_AT(c, 0xe8338u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0e833e  add dword ptr [ebp - 8], 0x10
    X86_AT(c, 0xe833eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x10u, 0, 4)); }
    // 0e8342  jmp 0xe831b
    X86_AT(c, 0xe8342u);
    X86_POLL(c, 0xe831bu); goto L_e831b;
L_e8344:
    X86_TICK(c, 9);
    // 0e8344  inc edi
    X86_AT(c, 0xe8344u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e8345  jmp 0xe82bd
    X86_AT(c, 0xe8345u);
    X86_POLL(c, 0xe82bdu); goto L_e82bd;
L_e834a:
    X86_TICK(c, 9);
    // 0e834a  inc esi
    X86_AT(c, 0xe834au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e834b  jmp 0xe82b2
    X86_AT(c, 0xe834bu);
    X86_POLL(c, 0xe82b2u); goto L_e82b2;
L_e8350:
    X86_TICK(c, 7);
    // 0e8350  call 0xe866c
    X86_AT(c, 0xe8350u);
    push32(c, 0xe8355u); f_000e866c(c); X86_RET(c, 0xe8355u);
    X86_TICK(c, 9);
    // 0e8355  push 1
    X86_AT(c, 0xe8355u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e8357  call 0xe58cc
    X86_AT(c, 0xe8357u);
    push32(c, 0xe835cu); f_000e58cc(c); X86_RET(c, 0xe835cu);
    X86_TICK(c, 14);
    // 0e835c  add esp, 4
    X86_AT(c, 0xe835cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e835f  cmp dword ptr [ebp + 0x10], 1
    X86_AT(c, 0xe835fu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 4);
    // 0e8363  jne 0xe8413
    X86_AT(c, 0xe8363u);
    if (x86_cc(c, 5)) { goto L_e8413; }
    X86_TICK(c, 6);
    // 0e8369  mov dword ptr [0x7add8], 1
    X86_AT(c, 0xe8369u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0x1u);
    // 0e8373  mov byte ptr [0x7ade3], 0
    X86_AT(c, 0xe8373u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE3u)), 0x0u);
    // 0e837a  mov dword ptr [ebp - 0x10], 1
    X86_AT(c, 0xe837au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x1u);
L_e8381:
    X86_TICK(c, 12);
    // 0e8381  cmp dword ptr [ebp - 0x10], 8
    X86_AT(c, 0xe8381u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x8u, 0, 4);
    // 0e8385  jge 0xe83bc
    X86_AT(c, 0xe8385u);
    if (x86_cc(c, 13)) { goto L_e83bc; }
    X86_TICK(c, 27);
    // 0e8387  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe8387u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0e838a  mov dword ptr [0x7addc], eax
    X86_AT(c, 0xe838au);
    wr32((c.sbase[3] + (uint32_t)(0x7ADDCu)), c.r[0]);
    // 0e838f  sub edx, edx
    X86_AT(c, 0xe838fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e8391  mov byte ptr [0x7ade0], dl
    X86_AT(c, 0xe8391u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE0u)), g8(c, 2));
    // 0e8397  mov byte ptr [0x7ade1], dl
    X86_AT(c, 0xe8397u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE1u)), g8(c, 2));
    // 0e839d  mov byte ptr [0x7ade2], dl
    X86_AT(c, 0xe839du);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE2u)), g8(c, 2));
    // 0e83a3  push 0x7add8
    X86_AT(c, 0xe83a3u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e83a8  push 1
    X86_AT(c, 0xe83a8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e83aa  push 0x7a7d8
    X86_AT(c, 0xe83aau);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e83af  call 0x19c
    X86_AT(c, 0xe83afu);
    push32(c, 0xe83b4u); f_0000019c(c); X86_RET(c, 0xe83b4u);
    X86_TICK(c, 15);
    // 0e83b4  inc dword ptr [ebp - 0x10]
    X86_AT(c, 0xe83b4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e83b7  add esp, 0xc
    X86_AT(c, 0xe83b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e83ba  jmp 0xe8381
    X86_AT(c, 0xe83bau);
    X86_POLL(c, 0xe8381u); goto L_e8381;
L_e83bc:
    X86_TICK(c, 25);
    // 0e83bc  mov dword ptr [0x7add8], 0xbe5f4
    X86_AT(c, 0xe83bcu);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0xBE5F4u);
    // 0e83c6  mov word ptr [0x7addc], 0x14
    X86_AT(c, 0xe83c6u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x14u);
    // 0e83cf  mov word ptr [0x7adde], 0x40
    X86_AT(c, 0xe83cfu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), 0x40u);
    // 0e83d8  mov word ptr [0x7ade0], 0x60
    X86_AT(c, 0xe83d8u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), 0x60u);
    // 0e83e1  mov word ptr [0x7ade2], 0x19f
    X86_AT(c, 0xe83e1u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), 0x19Fu);
    // 0e83ea  mov word ptr [0x7ade4], 0x1bf
    X86_AT(c, 0xe83eau);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE4u)), 0x1BFu);
    // 0e83f3  push 0x7add8
    X86_AT(c, 0xe83f3u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e83f8  push 0
    X86_AT(c, 0xe83f8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e83fa  push 0x7a7d8
    X86_AT(c, 0xe83fau);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e83ff  call 0x5c4
    X86_AT(c, 0xe83ffu);
    push32(c, 0xe8404u); f_000005c4(c); X86_RET(c, 0xe8404u);
    X86_TICK(c, 9);
    // 0e8404  push 0x1194
    X86_AT(c, 0xe8404u);
    { uint32_t v = 0x1194u; push32(c, v); }
    // 0e8409  call 0xe76cc
    X86_AT(c, 0xe8409u);
    push32(c, 0xe840eu); f_000e76cc(c); X86_RET(c, 0xe840eu);
    X86_TICK(c, 9);
    // 0e840e  add esp, 0x10
    X86_AT(c, 0xe840eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e8411  jmp 0xe845e
    X86_AT(c, 0xe8411u);
    goto L_e845e;
L_e8413:
    X86_TICK(c, 25);
    // 0e8413  mov dword ptr [0x7add8], 0xbe5f4
    X86_AT(c, 0xe8413u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0xBE5F4u);
    // 0e841d  mov word ptr [0x7addc], 0x14
    X86_AT(c, 0xe841du);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x14u);
    // 0e8426  mov word ptr [0x7adde], 0x40
    X86_AT(c, 0xe8426u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), 0x40u);
    // 0e842f  mov word ptr [0x7ade0], 0x60
    X86_AT(c, 0xe842fu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), 0x60u);
    // 0e8438  mov word ptr [0x7ade2], 0x19f
    X86_AT(c, 0xe8438u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), 0x19Fu);
    // 0e8441  mov word ptr [0x7ade4], 0x1bf
    X86_AT(c, 0xe8441u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE4u)), 0x1BFu);
    // 0e844a  push 0x7add8
    X86_AT(c, 0xe844au);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e844f  push 0
    X86_AT(c, 0xe844fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8451  push 0x7a7d8
    X86_AT(c, 0xe8451u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e8456  call 0x5c4
    X86_AT(c, 0xe8456u);
    push32(c, 0xe845bu); f_000005c4(c); X86_RET(c, 0xe845bu);
    X86_TICK(c, 2);
    // 0e845b  add esp, 0xc
    X86_AT(c, 0xe845bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e845e:
    X86_TICK(c, 9);
    // 0e845e  push 0
    X86_AT(c, 0xe845eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8460  call 0xe58cc
    X86_AT(c, 0xe8460u);
    push32(c, 0xe8465u); f_000e58cc(c); X86_RET(c, 0xe8465u);
    X86_TICK(c, 30);
    // 0e8465  add esp, 4
    X86_AT(c, 0xe8465u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e8468  pop edi
    X86_AT(c, 0xe8468u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8469  pop esi
    X86_AT(c, 0xe8469u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e846a  pop ebx
    X86_AT(c, 0xe846au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e846b  leave 
    X86_AT(c, 0xe846bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e846c  ret 
    X86_AT(c, 0xe846cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe820cu, "ran off the end of a function");
}
void f_000e8470(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e8470  mov word ptr [0xcda74], 0xffff
    X86_AT(c, 0xe8470u);
    wr16((c.sbase[3] + (uint32_t)(0xCDA74u)), 0xFFFFu);
    // 0e8479  push 0
    X86_AT(c, 0xe8479u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e847b  push 0x18d
    X86_AT(c, 0xe847bu);
    { uint32_t v = 0x18Du; push32(c, v); }
    // 0e8480  push 0x168
    X86_AT(c, 0xe8480u);
    { uint32_t v = 0x168u; push32(c, v); }
    // 0e8485  push 0x30
    X86_AT(c, 0xe8485u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0e8487  push 0xb
    X86_AT(c, 0xe8487u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e8489  call 0xe5e58
    X86_AT(c, 0xe8489u);
    push32(c, 0xe848eu); f_000e5e58(c); X86_RET(c, 0xe848eu);
    X86_TICK(c, 9);
    // 0e848e  push 0
    X86_AT(c, 0xe848eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8490  call 0xe58e0
    X86_AT(c, 0xe8490u);
    push32(c, 0xe8495u); f_000e58e0(c); X86_RET(c, 0xe8495u);
    X86_TICK(c, 9);
    // 0e8495  push 1
    X86_AT(c, 0xe8495u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e8497  call 0xe58cc
    X86_AT(c, 0xe8497u);
    push32(c, 0xe849cu); f_000e58cc(c); X86_RET(c, 0xe849cu);
    X86_TICK(c, 17);
    // 0e849c  push 0
    X86_AT(c, 0xe849cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e849e  push 0x1bf
    X86_AT(c, 0xe849eu);
    { uint32_t v = 0x1BFu; push32(c, v); }
    // 0e84a3  push 0x19f
    X86_AT(c, 0xe84a3u);
    { uint32_t v = 0x19Fu; push32(c, v); }
    // 0e84a8  push 0x60
    X86_AT(c, 0xe84a8u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0e84aa  push 0x40
    X86_AT(c, 0xe84aau);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e84ac  call 0xe5e58
    X86_AT(c, 0xe84acu);
    push32(c, 0xe84b1u); f_000e5e58(c); X86_RET(c, 0xe84b1u);
    X86_TICK(c, 9);
    // 0e84b1  push 0
    X86_AT(c, 0xe84b1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e84b3  call 0xe58cc
    X86_AT(c, 0xe84b3u);
    push32(c, 0xe84b8u); f_000e58cc(c); X86_RET(c, 0xe84b8u);
    X86_TICK(c, 9);
    // 0e84b8  push 2
    X86_AT(c, 0xe84b8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e84ba  call 0xe58e0
    X86_AT(c, 0xe84bau);
    push32(c, 0xe84bfu); f_000e58e0(c); X86_RET(c, 0xe84bfu);
    X86_TICK(c, 12);
    // 0e84bf  add esp, 0x38
    X86_AT(c, 0xe84bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0e84c2  ret 
    X86_AT(c, 0xe84c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8470u, "ran off the end of a function");
}
void f_000e84c4(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0e84c4  push ebp
    X86_AT(c, 0xe84c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e84c5  mov ebp, esp
    X86_AT(c, 0xe84c5u);
    c.r[5] = c.r[4];
    // 0e84c7  push ebx
    X86_AT(c, 0xe84c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e84c8  push esi
    X86_AT(c, 0xe84c8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e84c9  push edi
    X86_AT(c, 0xe84c9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e84ca  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe84cau);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e84cd  mov esi, dword ptr [edi]
    X86_AT(c, 0xe84cdu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0e84cf  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe84cfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e84d2  mov ebx, dword ptr [eax]
    X86_AT(c, 0xe84d2u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e84d4  movzx edx, byte ptr [ebp + 0x10]
    X86_AT(c, 0xe84d4u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e84d8  sub edx, 3
    X86_AT(c, 0xe84d8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0e84db  cmp edx, 4
    X86_AT(c, 0xe84dbu);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0e84de  ja 0xe8524
    X86_AT(c, 0xe84deu);
    if (x86_cc(c, 7)) { goto L_e8524; }
    X86_TICK(c, 7);
    // 0e84e0  jmp dword ptr cs:[edx*4 + 0xe84e8]
    X86_AT(c, 0xe84e0u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE84E8u)));
      switch (t) {
      case 0xe84fcu: goto L_e84fc;
      case 0xe8506u: goto L_e8506;
      case 0xe8511u: goto L_e8511;
      case 0xe851cu: goto L_e851c;
      case 0xe8524u: goto L_e8524;
      default: x86_jump(c, t); return; } }
L_e84fc:
    X86_TICK(c, 9);
    // 0e84fc  dec ebx
    X86_AT(c, 0xe84fcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0e84fd  and ebx, ebx
    X86_AT(c, 0xe84fdu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e84ff  jge 0xe8524
    X86_AT(c, 0xe84ffu);
    if (x86_cc(c, 13)) { goto L_e8524; }
    X86_TICK(c, 9);
    // 0e8501  add ebx, 0x40
    X86_AT(c, 0xe8501u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e8504  jmp 0xe8524
    X86_AT(c, 0xe8504u);
    goto L_e8524;
L_e8506:
    X86_TICK(c, 9);
    // 0e8506  inc ebx
    X86_AT(c, 0xe8506u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e8507  cmp ebx, 0x3f
    X86_AT(c, 0xe8507u);
    (void)x86_sub(c, c.r[3], 0x3Fu, 0, 4);
    // 0e850a  jle 0xe8524
    X86_AT(c, 0xe850au);
    if (x86_cc(c, 14)) { goto L_e8524; }
    X86_TICK(c, 9);
    // 0e850c  sub ebx, 0x40
    X86_AT(c, 0xe850cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x40u, 0, 4); }
    // 0e850f  jmp 0xe8524
    X86_AT(c, 0xe850fu);
    goto L_e8524;
L_e8511:
    X86_TICK(c, 9);
    // 0e8511  inc esi
    X86_AT(c, 0xe8511u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e8512  cmp esi, 0x3f
    X86_AT(c, 0xe8512u);
    (void)x86_sub(c, c.r[6], 0x3Fu, 0, 4);
    // 0e8515  jle 0xe8524
    X86_AT(c, 0xe8515u);
    if (x86_cc(c, 14)) { goto L_e8524; }
    X86_TICK(c, 9);
    // 0e8517  sub esi, 0x40
    X86_AT(c, 0xe8517u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x40u, 0, 4); }
    // 0e851a  jmp 0xe8524
    X86_AT(c, 0xe851au);
    goto L_e8524;
L_e851c:
    X86_TICK(c, 9);
    // 0e851c  dec esi
    X86_AT(c, 0xe851cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e851d  and esi, esi
    X86_AT(c, 0xe851du);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e851f  jge 0xe8524
    X86_AT(c, 0xe851fu);
    if (x86_cc(c, 13)) { goto L_e8524; }
    X86_TICK(c, 2);
    // 0e8521  add esi, 0x40
    X86_AT(c, 0xe8521u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x40u, 0, 4); }
L_e8524:
    X86_TICK(c, 11);
    // 0e8524  push ebx
    X86_AT(c, 0xe8524u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8525  push esi
    X86_AT(c, 0xe8525u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8526  call 0xe854c
    X86_AT(c, 0xe8526u);
    push32(c, 0xe852bu); f_000e854c(c); X86_RET(c, 0xe852bu);
    X86_TICK(c, 11);
    // 0e852b  push ebx
    X86_AT(c, 0xe852bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e852c  push esi
    X86_AT(c, 0xe852cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e852d  call 0xe305c
    X86_AT(c, 0xe852du);
    push32(c, 0xe8532u); f_000e305c(c); X86_RET(c, 0xe8532u);
    X86_TICK(c, 13);
    // 0e8532  push 0
    X86_AT(c, 0xe8532u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8534  push ebx
    X86_AT(c, 0xe8534u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8535  push esi
    X86_AT(c, 0xe8535u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8536  call 0xe7f60
    X86_AT(c, 0xe8536u);
    push32(c, 0xe853bu); f_000e7f60(c); X86_RET(c, 0xe853bu);
    X86_TICK(c, 38);
    // 0e853b  mov dword ptr [edi], esi
    X86_AT(c, 0xe853bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[6]);
    // 0e853d  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe853du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e8540  mov dword ptr [eax], ebx
    X86_AT(c, 0xe8540u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[3]);
    // 0e8542  add esp, 0x1c
    X86_AT(c, 0xe8542u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0e8545  pop edi
    X86_AT(c, 0xe8545u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8546  pop esi
    X86_AT(c, 0xe8546u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8547  pop ebx
    X86_AT(c, 0xe8547u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e8548  leave 
    X86_AT(c, 0xe8548u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8549  ret 
    X86_AT(c, 0xe8549u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe84c4u, "ran off the end of a function");
}
void f_000e854c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e854c  push ebp
    X86_AT(c, 0xe854cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e854d  mov ebp, esp
    X86_AT(c, 0xe854du);
    c.r[5] = c.r[4];
    // 0e854f  push eax
    X86_AT(c, 0xe854fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8550  push ebx
    X86_AT(c, 0xe8550u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8551  push esi
    X86_AT(c, 0xe8551u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8552  push edi
    X86_AT(c, 0xe8552u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8553  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe8553u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e8556  cmp dword ptr [0xcda6c], 0
    X86_AT(c, 0xe8556u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDA6Cu))), 0x0u, 0, 4);
    // 0e855d  je 0xe8570
    X86_AT(c, 0xe855du);
    if (x86_cc(c, 4)) { goto L_e8570; }
    X86_TICK(c, 14);
    // 0e855f  push edi
    X86_AT(c, 0xe855fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8560  push dword ptr [ebp + 8]
    X86_AT(c, 0xe8560u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e8563  call 0xe85e0
    X86_AT(c, 0xe8563u);
    push32(c, 0xe8568u); f_000e85e0(c); X86_RET(c, 0xe8568u);
    X86_TICK(c, 9);
    // 0e8568  add esp, 8
    X86_AT(c, 0xe8568u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e856b  jmp 0xe85db
    X86_AT(c, 0xe856bu);
    goto L_e85db;
L_e8570:
    X86_TICK(c, 18);
    // 0e8570  sub dword ptr [ebp + 8], 5
    X86_AT(c, 0xe8570u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0e8574  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe8574u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8577  and eax, eax
    X86_AT(c, 0xe8577u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e8579  jge 0xe857f
    X86_AT(c, 0xe8579u);
    if (x86_cc(c, 13)) { goto L_e857f; }
    X86_TICK(c, 7);
    // 0e857b  add dword ptr [ebp + 8], 0x40
    X86_AT(c, 0xe857bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x40u, 0, 4)); }
L_e857f:
    X86_TICK(c, 9);
    // 0e857f  sub edi, 5
    X86_AT(c, 0xe857fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x5u, 0, 4); }
    // 0e8582  and edi, edi
    X86_AT(c, 0xe8582u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e8584  jge 0xe8589
    X86_AT(c, 0xe8584u);
    if (x86_cc(c, 13)) { goto L_e8589; }
    X86_TICK(c, 2);
    // 0e8586  add edi, 0x40
    X86_AT(c, 0xe8586u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x40u, 0, 4); }
L_e8589:
    X86_TICK(c, 2);
    // 0e8589  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe8589u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_e8590:
    X86_TICK(c, 12);
    // 0e8590  cmp dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xe8590u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xBu, 0, 4);
    // 0e8594  jge 0xe85db
    X86_AT(c, 0xe8594u);
    if (x86_cc(c, 13)) { goto L_e85db; }
    X86_TICK(c, 6);
    // 0e8596  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xe8596u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8599  sub esi, esi
    X86_AT(c, 0xe8599u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e859b:
    X86_TICK(c, 7);
    // 0e859b  cmp esi, 0xb
    X86_AT(c, 0xe859bu);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0e859e  jge 0xe85cc
    X86_AT(c, 0xe859eu);
    if (x86_cc(c, 13)) { goto L_e85cc; }
    X86_TICK(c, 30);
    // 0e85a0  mov eax, edi
    X86_AT(c, 0xe85a0u);
    c.r[0] = c.r[7];
    // 0e85a2  shl eax, 6
    X86_AT(c, 0xe85a2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0e85a5  add eax, ebx
    X86_AT(c, 0xe85a5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[3], 0, 4); }
    // 0e85a7  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe85a7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e85aa  lea ecx, [edx + edx*8]
    X86_AT(c, 0xe85aau);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0e85ad  lea edx, [ecx + edx*2]
    X86_AT(c, 0xe85adu);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0e85b0  lea ecx, [esi + edx*1]
    X86_AT(c, 0xe85b0u);
    c.r[1] = (uint32_t)(c.r[6] + c.r[2]);
    // 0e85b3  mov al, byte ptr [eax + 0xbd578]
    X86_AT(c, 0xe85b3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBD578u))));
    // 0e85b9  mov byte ptr [ecx + 0xbe578], al
    X86_AT(c, 0xe85b9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xBE578u)), g8(c, 0));
    // 0e85bf  cmp ebx, 0x3f
    X86_AT(c, 0xe85bfu);
    (void)x86_sub(c, c.r[3], 0x3Fu, 0, 4);
    // 0e85c2  jne 0xe85c8
    X86_AT(c, 0xe85c2u);
    if (x86_cc(c, 5)) { goto L_e85c8; }
    X86_TICK(c, 9);
    // 0e85c4  sub ebx, ebx
    X86_AT(c, 0xe85c4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e85c6  jmp 0xe85c9
    X86_AT(c, 0xe85c6u);
    goto L_e85c9;
L_e85c8:
    X86_TICK(c, 2);
    // 0e85c8  inc ebx
    X86_AT(c, 0xe85c8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_e85c9:
    X86_TICK(c, 9);
    // 0e85c9  inc esi
    X86_AT(c, 0xe85c9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e85ca  jmp 0xe859b
    X86_AT(c, 0xe85cau);
    X86_POLL(c, 0xe859bu); goto L_e859b;
L_e85cc:
    X86_TICK(c, 7);
    // 0e85cc  cmp edi, 0x3f
    X86_AT(c, 0xe85ccu);
    (void)x86_sub(c, c.r[7], 0x3Fu, 0, 4);
    // 0e85cf  jne 0xe85d5
    X86_AT(c, 0xe85cfu);
    if (x86_cc(c, 5)) { goto L_e85d5; }
    X86_TICK(c, 9);
    // 0e85d1  sub edi, edi
    X86_AT(c, 0xe85d1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e85d3  jmp 0xe85d6
    X86_AT(c, 0xe85d3u);
    goto L_e85d6;
L_e85d5:
    X86_TICK(c, 2);
    // 0e85d5  inc edi
    X86_AT(c, 0xe85d5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_e85d6:
    X86_TICK(c, 13);
    // 0e85d6  inc dword ptr [ebp - 4]
    X86_AT(c, 0xe85d6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e85d9  jmp 0xe8590
    X86_AT(c, 0xe85d9u);
    X86_POLL(c, 0xe8590u); goto L_e8590;
L_e85db:
    X86_TICK(c, 28);
    // 0e85db  pop edi
    X86_AT(c, 0xe85dbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e85dc  pop esi
    X86_AT(c, 0xe85dcu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e85dd  pop ebx
    X86_AT(c, 0xe85ddu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e85de  leave 
    X86_AT(c, 0xe85deu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e85df  ret 
    X86_AT(c, 0xe85dfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe854cu, "ran off the end of a function");
}
void f_000e85e0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e85e0  push ebp
    X86_AT(c, 0xe85e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e85e1  mov ebp, esp
    X86_AT(c, 0xe85e1u);
    c.r[5] = c.r[4];
    // 0e85e3  push eax
    X86_AT(c, 0xe85e3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e85e4  push ebx
    X86_AT(c, 0xe85e4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e85e5  push esi
    X86_AT(c, 0xe85e5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e85e6  push edi
    X86_AT(c, 0xe85e6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e85e7  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe85e7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e85ea  sub dword ptr [ebp + 8], 5
    X86_AT(c, 0xe85eau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0e85ee  sub edi, 5
    X86_AT(c, 0xe85eeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x5u, 0, 4); }
    // 0e85f1  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe85f1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_e85f8:
    X86_TICK(c, 12);
    // 0e85f8  cmp dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xe85f8u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xBu, 0, 4);
    // 0e85fc  jge 0xe8659
    X86_AT(c, 0xe85fcu);
    if (x86_cc(c, 13)) { goto L_e8659; }
    X86_TICK(c, 6);
    // 0e85fe  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xe85feu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8601  sub esi, esi
    X86_AT(c, 0xe8601u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e8603:
    X86_TICK(c, 7);
    // 0e8603  cmp esi, 0xb
    X86_AT(c, 0xe8603u);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0e8606  jge 0xe8653
    X86_AT(c, 0xe8606u);
    if (x86_cc(c, 13)) { goto L_e8653; }
    X86_TICK(c, 7);
    // 0e8608  and ebx, ebx
    X86_AT(c, 0xe8608u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e860a  jl 0xe861a
    X86_AT(c, 0xe860au);
    if (x86_cc(c, 12)) { goto L_e861a; }
    X86_TICK(c, 7);
    // 0e860c  and edi, edi
    X86_AT(c, 0xe860cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e860e  jl 0xe861a
    X86_AT(c, 0xe860eu);
    if (x86_cc(c, 12)) { goto L_e861a; }
    X86_TICK(c, 7);
    // 0e8610  cmp ebx, 0x40
    X86_AT(c, 0xe8610u);
    (void)x86_sub(c, c.r[3], 0x40u, 0, 4);
    // 0e8613  jge 0xe861a
    X86_AT(c, 0xe8613u);
    if (x86_cc(c, 13)) { goto L_e861a; }
    X86_TICK(c, 7);
    // 0e8615  cmp edi, 0x40
    X86_AT(c, 0xe8615u);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0e8618  jl 0xe862f
    X86_AT(c, 0xe8618u);
    if (x86_cc(c, 12)) { goto L_e862f; }
L_e861a:
    X86_TICK(c, 19);
    // 0e861a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe861au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e861d  lea edx, [eax + eax*8]
    X86_AT(c, 0xe861du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e8620  lea eax, [edx + eax*2]
    X86_AT(c, 0xe8620u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0e8623  lea edx, [esi + eax*1]
    X86_AT(c, 0xe8623u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0e8626  mov byte ptr [edx + 0xbe578], 2
    X86_AT(c, 0xe8626u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBE578u)), 0x2u);
    // 0e862d  jmp 0xe864f
    X86_AT(c, 0xe862du);
    goto L_e864f;
L_e862f:
    X86_TICK(c, 23);
    // 0e862f  mov eax, edi
    X86_AT(c, 0xe862fu);
    c.r[0] = c.r[7];
    // 0e8631  shl eax, 6
    X86_AT(c, 0xe8631u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0e8634  lea edx, [ebx + eax*1]
    X86_AT(c, 0xe8634u);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 0e8637  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe8637u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e863a  lea ecx, [eax + eax*8]
    X86_AT(c, 0xe863au);
    c.r[1] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e863d  lea eax, [ecx + eax*2]
    X86_AT(c, 0xe863du);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 2);
    // 0e8640  lea ecx, [esi + eax*1]
    X86_AT(c, 0xe8640u);
    c.r[1] = (uint32_t)(c.r[6] + c.r[0]);
    // 0e8643  mov al, byte ptr [edx + 0xbd578]
    X86_AT(c, 0xe8643u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBD578u))));
    // 0e8649  mov byte ptr [ecx + 0xbe578], al
    X86_AT(c, 0xe8649u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xBE578u)), g8(c, 0));
L_e864f:
    X86_TICK(c, 11);
    // 0e864f  inc ebx
    X86_AT(c, 0xe864fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e8650  inc esi
    X86_AT(c, 0xe8650u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e8651  jmp 0xe8603
    X86_AT(c, 0xe8651u);
    X86_POLL(c, 0xe8603u); goto L_e8603;
L_e8653:
    X86_TICK(c, 15);
    // 0e8653  inc edi
    X86_AT(c, 0xe8653u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e8654  inc dword ptr [ebp - 4]
    X86_AT(c, 0xe8654u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e8657  jmp 0xe85f8
    X86_AT(c, 0xe8657u);
    X86_POLL(c, 0xe85f8u); goto L_e85f8;
L_e8659:
    X86_TICK(c, 28);
    // 0e8659  pop edi
    X86_AT(c, 0xe8659u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e865a  pop esi
    X86_AT(c, 0xe865au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e865b  pop ebx
    X86_AT(c, 0xe865bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e865c  leave 
    X86_AT(c, 0xe865cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e865d  ret 
    X86_AT(c, 0xe865du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe85e0u, "ran off the end of a function");
}
}

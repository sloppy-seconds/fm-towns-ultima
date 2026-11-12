#include "p_game_funcs.h"
namespace p_game {
void f_000d1d40(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d1d40  mov word ptr [0xa492c], 0xffff
    X86_AT(c, 0xd1d40u);
    wr16((c.sbase[3] + (uint32_t)(0xA492Cu)), 0xFFFFu);
    // 0d1d49  call 0xc9bcc
    X86_AT(c, 0xd1d49u);
    push32(c, 0xd1d4eu); x86_call_known(c, 0xc9bccu, f_000c9bcc); X86_RET(c, 0xd1d4eu);
    X86_TICK(c, 9);
    // 0d1d4e  push 7
    X86_AT(c, 0xd1d4eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d50  call 0xbb6b0
    X86_AT(c, 0xd1d50u);
    push32(c, 0xd1d55u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1d55u);
    X86_TICK(c, 9);
    // 0d1d55  push 7
    X86_AT(c, 0xd1d55u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d57  call 0xbc52c
    X86_AT(c, 0xd1d57u);
    push32(c, 0xd1d5cu); x86_call_known(c, 0xbc52cu, f_000bc52c); X86_RET(c, 0xd1d5cu);
    X86_TICK(c, 7);
    // 0d1d5c  call 0xcaab4
    X86_AT(c, 0xd1d5cu);
    push32(c, 0xd1d61u); x86_call_known(c, 0xcaab4u, f_000caab4); X86_RET(c, 0xd1d61u);
    X86_TICK(c, 2);
    // 0d1d61  add esp, 8
    X86_AT(c, 0xd1d61u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d1d64:
    X86_TICK(c, 9);
    // 0d1d64  push 7
    X86_AT(c, 0xd1d64u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d66  call 0xb9514
    X86_AT(c, 0xd1d66u);
    push32(c, 0xd1d6bu); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd1d6bu);
    X86_TICK(c, 11);
    // 0d1d6b  mov byte ptr [0xb04b4], al
    X86_AT(c, 0xd1d6bu);
    wr8((c.sbase[3] + (uint32_t)(0xB04B4u)), g8(c, 0));
    // 0d1d70  add esp, 4
    X86_AT(c, 0xd1d70u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1d73  and al, al
    X86_AT(c, 0xd1d73u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d1d75  je 0xd1d64
    X86_AT(c, 0xd1d75u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd1d64u); goto L_d1d64; }
    X86_TICK(c, 15);
    // 0d1d77  movzx edx, byte ptr [0xb04b4]
    X86_AT(c, 0xd1d77u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(0xB04B4u)));
    // 0d1d7e  dec edx
    X86_AT(c, 0xd1d7eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d1d7f  cmp edx, 0x59
    X86_AT(c, 0xd1d7fu);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0d1d82  ja 0xd2066
    X86_AT(c, 0xd1d82u);
    if (x86_cc(c, 7)) { goto L_d2066; }
    X86_TICK(c, 7);
    // 0d1d88  jmp dword ptr cs:[edx*4 + 0xd1d90]
    X86_AT(c, 0xd1d88u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD1D90u)));
      switch (t) {
      case 0xd1ef8u: goto L_d1ef8;
      case 0xd1effu: goto L_d1eff;
      case 0xd1f06u: goto L_d1f06;
      case 0xd1f0du: goto L_d1f0d;
      case 0xd1f28u: goto L_d1f28;
      case 0xd1f32u: goto L_d1f32;
      case 0xd1f3cu: goto L_d1f3c;
      case 0xd1f46u: goto L_d1f46;
      case 0xd1f50u: goto L_d1f50;
      case 0xd1f5au: goto L_d1f5a;
      case 0xd1f64u: goto L_d1f64;
      case 0xd1f6eu: goto L_d1f6e;
      case 0xd1f78u: goto L_d1f78;
      case 0xd1f82u: goto L_d1f82;
      case 0xd1fa6u: goto L_d1fa6;
      case 0xd1fb0u: goto L_d1fb0;
      case 0xd1fbau: goto L_d1fba;
      case 0xd1fc4u: goto L_d1fc4;
      case 0xd1fceu: goto L_d1fce;
      case 0xd1fd8u: goto L_d1fd8;
      case 0xd1fe2u: goto L_d1fe2;
      case 0xd1fecu: goto L_d1fec;
      case 0xd1ff6u: goto L_d1ff6;
      case 0xd2000u: goto L_d2000;
      case 0xd200au: goto L_d200a;
      case 0xd203cu: goto L_d203c;
      case 0xd2043u: goto L_d2043;
      case 0xd204au: goto L_d204a;
      case 0xd2051u: goto L_d2051;
      case 0xd2058u: goto L_d2058;
      case 0xd205fu: goto L_d205f;
      case 0xd2066u: goto L_d2066;
      default: x86_jump(c, t); return; } }
L_d1ef8:
    X86_TICK(c, 7);
    // 0d1ef8  call 0xd21d8
    X86_AT(c, 0xd1ef8u);
    push32(c, 0xd1efdu); x86_call_known(c, 0xd21d8u, f_000d21d8); X86_RET(c, 0xd1efdu);
    X86_TICK(c, 7);
    // 0d1efd  jmp 0xd1f12
    X86_AT(c, 0xd1efdu);
    goto L_d1f12;
L_d1eff:
    X86_TICK(c, 7);
    // 0d1eff  call 0xd216c
    X86_AT(c, 0xd1effu);
    push32(c, 0xd1f04u); x86_call_known(c, 0xd216cu, f_000d216c); X86_RET(c, 0xd1f04u);
    X86_TICK(c, 7);
    // 0d1f04  jmp 0xd1f12
    X86_AT(c, 0xd1f04u);
    goto L_d1f12;
L_d1f06:
    X86_TICK(c, 7);
    // 0d1f06  call 0xd20a4
    X86_AT(c, 0xd1f06u);
    push32(c, 0xd1f0bu); x86_call_known(c, 0xd20a4u, f_000d20a4); X86_RET(c, 0xd1f0bu);
    X86_TICK(c, 7);
    // 0d1f0b  jmp 0xd1f12
    X86_AT(c, 0xd1f0bu);
    goto L_d1f12;
L_d1f0d:
    X86_TICK(c, 7);
    // 0d1f0d  call 0xd2108
    X86_AT(c, 0xd1f0du);
    push32(c, 0xd1f12u); x86_call_known(c, 0xd2108u, f_000d2108); X86_RET(c, 0xd1f12u);
L_d1f12:
    X86_TICK(c, 9);
    // 0d1f12  push 0
    X86_AT(c, 0xd1f12u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1f14  call 0xb6698
    X86_AT(c, 0xd1f14u);
    push32(c, 0xd1f19u); x86_call_known(c, 0xb6698u, f_000b6698); X86_RET(c, 0xd1f19u);
    X86_TICK(c, 9);
    // 0d1f19  push 7
    X86_AT(c, 0xd1f19u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1f1b  call 0xbbb5c
    X86_AT(c, 0xd1f1bu);
    push32(c, 0xd1f20u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1f20u);
    X86_TICK(c, 9);
    // 0d1f20  add esp, 8
    X86_AT(c, 0xd1f20u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1f23  jmp 0xd2083
    X86_AT(c, 0xd1f23u);
    goto L_d2083;
L_d1f28:
    X86_TICK(c, 7);
    // 0d1f28  call 0xcd7c4
    X86_AT(c, 0xd1f28u);
    push32(c, 0xd1f2du); x86_call_known(c, 0xcd7c4u, f_000cd7c4); X86_RET(c, 0xd1f2du);
    X86_TICK(c, 7);
    // 0d1f2d  jmp 0xd2083
    X86_AT(c, 0xd1f2du);
    goto L_d2083;
L_d1f32:
    X86_TICK(c, 7);
    // 0d1f32  call 0xd2388
    X86_AT(c, 0xd1f32u);
    push32(c, 0xd1f37u); x86_call_known(c, 0xd2388u, f_000d2388); X86_RET(c, 0xd1f37u);
    X86_TICK(c, 7);
    // 0d1f37  jmp 0xd2083
    X86_AT(c, 0xd1f37u);
    goto L_d2083;
L_d1f3c:
    X86_TICK(c, 7);
    // 0d1f3c  call 0xd24a0
    X86_AT(c, 0xd1f3cu);
    push32(c, 0xd1f41u); x86_call_known(c, 0xd24a0u, f_000d24a0); X86_RET(c, 0xd1f41u);
    X86_TICK(c, 7);
    // 0d1f41  jmp 0xd2083
    X86_AT(c, 0xd1f41u);
    goto L_d2083;
L_d1f46:
    X86_TICK(c, 7);
    // 0d1f46  call 0xd3208
    X86_AT(c, 0xd1f46u);
    push32(c, 0xd1f4bu); x86_call_known(c, 0xd3208u, f_000d3208); X86_RET(c, 0xd1f4bu);
    X86_TICK(c, 7);
    // 0d1f4b  jmp 0xd2083
    X86_AT(c, 0xd1f4bu);
    goto L_d2083;
L_d1f50:
    X86_TICK(c, 7);
    // 0d1f50  call 0xd34f0
    X86_AT(c, 0xd1f50u);
    push32(c, 0xd1f55u); x86_call_known(c, 0xd34f0u, f_000d34f0); X86_RET(c, 0xd1f55u);
    X86_TICK(c, 7);
    // 0d1f55  jmp 0xd2083
    X86_AT(c, 0xd1f55u);
    goto L_d2083;
L_d1f5a:
    X86_TICK(c, 7);
    // 0d1f5a  call 0xd33cc
    X86_AT(c, 0xd1f5au);
    push32(c, 0xd1f5fu); x86_call_known(c, 0xd33ccu, f_000d33cc); X86_RET(c, 0xd1f5fu);
    X86_TICK(c, 7);
    // 0d1f5f  jmp 0xd2083
    X86_AT(c, 0xd1f5fu);
    goto L_d2083;
L_d1f64:
    X86_TICK(c, 7);
    // 0d1f64  call 0xd260c
    X86_AT(c, 0xd1f64u);
    push32(c, 0xd1f69u); x86_call_known(c, 0xd260cu, f_000d260c); X86_RET(c, 0xd1f69u);
    X86_TICK(c, 7);
    // 0d1f69  jmp 0xd2083
    X86_AT(c, 0xd1f69u);
    goto L_d2083;
L_d1f6e:
    X86_TICK(c, 7);
    // 0d1f6e  call 0xd2bbc
    X86_AT(c, 0xd1f6eu);
    push32(c, 0xd1f73u); x86_call_known(c, 0xd2bbcu, f_000d2bbc); X86_RET(c, 0xd1f73u);
    X86_TICK(c, 7);
    // 0d1f73  jmp 0xd2083
    X86_AT(c, 0xd1f73u);
    goto L_d2083;
L_d1f78:
    X86_TICK(c, 7);
    // 0d1f78  call 0xd2c60
    X86_AT(c, 0xd1f78u);
    push32(c, 0xd1f7du); x86_call_known(c, 0xd2c60u, f_000d2c60); X86_RET(c, 0xd1f7du);
    X86_TICK(c, 7);
    // 0d1f7d  jmp 0xd2083
    X86_AT(c, 0xd1f7du);
    goto L_d2083;
L_d1f82:
    X86_TICK(c, 11);
    // 0d1f82  push 0xc5dc
    X86_AT(c, 0xd1f82u);
    { uint32_t v = 0xC5DCu; push32(c, v); }
    // 0d1f87  push 7
    X86_AT(c, 0xd1f87u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1f89  call 0xba428
    X86_AT(c, 0xd1f89u);
    push32(c, 0xd1f8eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1f8eu);
    X86_TICK(c, 9);
    // 0d1f8e  push 7
    X86_AT(c, 0xd1f8eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1f90  call 0xbbb5c
    X86_AT(c, 0xd1f90u);
    push32(c, 0xd1f95u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1f95u);
    X86_TICK(c, 9);
    // 0d1f95  push 3
    X86_AT(c, 0xd1f95u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1f97  call 0xb607c
    X86_AT(c, 0xd1f97u);
    push32(c, 0xd1f9cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1f9cu);
    X86_TICK(c, 9);
    // 0d1f9c  push 0xc5fc
    X86_AT(c, 0xd1f9cu);
    { uint32_t v = 0xC5FCu; push32(c, v); }
    // 0d1fa1  jmp 0xd2029
    X86_AT(c, 0xd1fa1u);
    goto L_d2029;
L_d1fa6:
    X86_TICK(c, 7);
    // 0d1fa6  call 0xd2b30
    X86_AT(c, 0xd1fa6u);
    push32(c, 0xd1fabu); x86_call_known(c, 0xd2b30u, f_000d2b30); X86_RET(c, 0xd1fabu);
    X86_TICK(c, 7);
    // 0d1fab  jmp 0xd2083
    X86_AT(c, 0xd1fabu);
    goto L_d2083;
L_d1fb0:
    X86_TICK(c, 7);
    // 0d1fb0  call 0xcce38
    X86_AT(c, 0xd1fb0u);
    push32(c, 0xd1fb5u); x86_call_known(c, 0xcce38u, f_000cce38); X86_RET(c, 0xd1fb5u);
    X86_TICK(c, 7);
    // 0d1fb5  jmp 0xd2083
    X86_AT(c, 0xd1fb5u);
    goto L_d2083;
L_d1fba:
    X86_TICK(c, 7);
    // 0d1fba  call 0xd30a0
    X86_AT(c, 0xd1fbau);
    push32(c, 0xd1fbfu); x86_call_known(c, 0xd30a0u, f_000d30a0); X86_RET(c, 0xd1fbfu);
    X86_TICK(c, 7);
    // 0d1fbf  jmp 0xd2083
    X86_AT(c, 0xd1fbfu);
    goto L_d2083;
L_d1fc4:
    X86_TICK(c, 7);
    // 0d1fc4  call 0xc7798
    X86_AT(c, 0xd1fc4u);
    push32(c, 0xd1fc9u); x86_call_known(c, 0xc7798u, f_000c7798); X86_RET(c, 0xd1fc9u);
    X86_TICK(c, 7);
    // 0d1fc9  jmp 0xd2083
    X86_AT(c, 0xd1fc9u);
    goto L_d2083;
L_d1fce:
    X86_TICK(c, 7);
    // 0d1fce  call 0xd2e7c
    X86_AT(c, 0xd1fceu);
    push32(c, 0xd1fd3u); x86_call_known(c, 0xd2e7cu, f_000d2e7c); X86_RET(c, 0xd1fd3u);
    X86_TICK(c, 7);
    // 0d1fd3  jmp 0xd2083
    X86_AT(c, 0xd1fd3u);
    goto L_d2083;
L_d1fd8:
    X86_TICK(c, 7);
    // 0d1fd8  call 0xcc940
    X86_AT(c, 0xd1fd8u);
    push32(c, 0xd1fddu); x86_call_known(c, 0xcc940u, f_000cc940); X86_RET(c, 0xd1fddu);
    X86_TICK(c, 7);
    // 0d1fdd  jmp 0xd2083
    X86_AT(c, 0xd1fddu);
    goto L_d2083;
L_d1fe2:
    X86_TICK(c, 7);
    // 0d1fe2  call 0xccc5c
    X86_AT(c, 0xd1fe2u);
    push32(c, 0xd1fe7u); x86_call_known(c, 0xccc5cu, f_000ccc5c); X86_RET(c, 0xd1fe7u);
    X86_TICK(c, 7);
    // 0d1fe7  jmp 0xd2083
    X86_AT(c, 0xd1fe7u);
    goto L_d2083;
L_d1fec:
    X86_TICK(c, 7);
    // 0d1fec  call 0xd25c0
    X86_AT(c, 0xd1fecu);
    push32(c, 0xd1ff1u); x86_call_known(c, 0xd25c0u, f_000d25c0); X86_RET(c, 0xd1ff1u);
    X86_TICK(c, 7);
    // 0d1ff1  jmp 0xd2083
    X86_AT(c, 0xd1ff1u);
    goto L_d2083;
L_d1ff6:
    X86_TICK(c, 7);
    // 0d1ff6  call 0xc73c0
    X86_AT(c, 0xd1ff6u);
    push32(c, 0xd1ffbu); x86_call_known(c, 0xc73c0u, f_000c73c0); X86_RET(c, 0xd1ffbu);
    X86_TICK(c, 7);
    // 0d1ffb  jmp 0xd2083
    X86_AT(c, 0xd1ffbu);
    goto L_d2083;
L_d2000:
    X86_TICK(c, 7);
    // 0d2000  call 0xc766c
    X86_AT(c, 0xd2000u);
    push32(c, 0xd2005u); x86_call_known(c, 0xc766cu, f_000c766c); X86_RET(c, 0xd2005u);
    X86_TICK(c, 7);
    // 0d2005  jmp 0xd2083
    X86_AT(c, 0xd2005u);
    goto L_d2083;
L_d200a:
    X86_TICK(c, 11);
    // 0d200a  push 0xc624
    X86_AT(c, 0xd200au);
    { uint32_t v = 0xC624u; push32(c, v); }
    // 0d200f  push 7
    X86_AT(c, 0xd200fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2011  call 0xba428
    X86_AT(c, 0xd2011u);
    push32(c, 0xd2016u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2016u);
    X86_TICK(c, 9);
    // 0d2016  push 7
    X86_AT(c, 0xd2016u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2018  call 0xbbb5c
    X86_AT(c, 0xd2018u);
    push32(c, 0xd201du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd201du);
    X86_TICK(c, 9);
    // 0d201d  push 3
    X86_AT(c, 0xd201du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d201f  call 0xb607c
    X86_AT(c, 0xd201fu);
    push32(c, 0xd2024u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd2024u);
    X86_TICK(c, 2);
    // 0d2024  push 0xc644
    X86_AT(c, 0xd2024u);
    { uint32_t v = 0xC644u; push32(c, v); }
L_d2029:
    X86_TICK(c, 9);
    // 0d2029  push 7
    X86_AT(c, 0xd2029u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d202b  call 0xba428
    X86_AT(c, 0xd202bu);
    push32(c, 0xd2030u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2030u);
    X86_TICK(c, 9);
    // 0d2030  push 7
    X86_AT(c, 0xd2030u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2032  call 0xbbb5c
    X86_AT(c, 0xd2032u);
    push32(c, 0xd2037u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2037u);
    X86_TICK(c, 9);
    // 0d2037  add esp, 0x1c
    X86_AT(c, 0xd2037u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d203a  jmp 0xd2083
    X86_AT(c, 0xd203au);
    goto L_d2083;
L_d203c:
    X86_TICK(c, 7);
    // 0d203c  call 0xc7858
    X86_AT(c, 0xd203cu);
    push32(c, 0xd2041u); x86_call_known(c, 0xc7858u, f_000c7858); X86_RET(c, 0xd2041u);
    X86_TICK(c, 7);
    // 0d2041  jmp 0xd2083
    X86_AT(c, 0xd2041u);
    goto L_d2083;
L_d2043:
    X86_TICK(c, 7);
    // 0d2043  call 0xcd320
    X86_AT(c, 0xd2043u);
    push32(c, 0xd2048u); x86_call_known(c, 0xcd320u, f_000cd320); X86_RET(c, 0xd2048u);
    X86_TICK(c, 7);
    // 0d2048  jmp 0xd2083
    X86_AT(c, 0xd2048u);
    goto L_d2083;
L_d204a:
    X86_TICK(c, 7);
    // 0d204a  call 0xd2db4
    X86_AT(c, 0xd204au);
    push32(c, 0xd204fu); x86_call_known(c, 0xd2db4u, f_000d2db4); X86_RET(c, 0xd204fu);
    X86_TICK(c, 7);
    // 0d204f  jmp 0xd2083
    X86_AT(c, 0xd204fu);
    goto L_d2083;
L_d2051:
    X86_TICK(c, 7);
    // 0d2051  call 0xd2f18
    X86_AT(c, 0xd2051u);
    push32(c, 0xd2056u); x86_call_known(c, 0xd2f18u, f_000d2f18); X86_RET(c, 0xd2056u);
    X86_TICK(c, 7);
    // 0d2056  jmp 0xd2083
    X86_AT(c, 0xd2056u);
    goto L_d2083;
L_d2058:
    X86_TICK(c, 7);
    // 0d2058  call 0xcaef8
    X86_AT(c, 0xd2058u);
    push32(c, 0xd205du); x86_call_known(c, 0xcaef8u, f_000caef8); X86_RET(c, 0xd205du);
    X86_TICK(c, 7);
    // 0d205d  jmp 0xd2083
    X86_AT(c, 0xd205du);
    goto L_d2083;
L_d205f:
    X86_TICK(c, 7);
    // 0d205f  call 0xcb3b4
    X86_AT(c, 0xd205fu);
    push32(c, 0xd2064u); x86_call_known(c, 0xcb3b4u, f_000cb3b4); X86_RET(c, 0xd2064u);
    X86_TICK(c, 7);
    // 0d2064  jmp 0xd2083
    X86_AT(c, 0xd2064u);
    goto L_d2083;
L_d2066:
    X86_TICK(c, 9);
    // 0d2066  push 1
    X86_AT(c, 0xd2066u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2068  call 0xb607c
    X86_AT(c, 0xd2068u);
    push32(c, 0xd206du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd206du);
    X86_TICK(c, 11);
    // 0d206d  push 0xc66c
    X86_AT(c, 0xd206du);
    { uint32_t v = 0xC66Cu; push32(c, v); }
    // 0d2072  push 7
    X86_AT(c, 0xd2072u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2074  call 0xba428
    X86_AT(c, 0xd2074u);
    push32(c, 0xd2079u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2079u);
    X86_TICK(c, 9);
    // 0d2079  push 7
    X86_AT(c, 0xd2079u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d207b  call 0xbbb5c
    X86_AT(c, 0xd207bu);
    push32(c, 0xd2080u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2080u);
    X86_TICK(c, 2);
    // 0d2080  add esp, 0x10
    X86_AT(c, 0xd2080u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d2083:
    X86_TICK(c, 12);
    // 0d2083  cmp dword ptr [0xa4920], 0
    X86_AT(c, 0xd2083u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4920u))), 0x0u, 0, 4);
    // 0d208a  je 0xd20a0
    X86_AT(c, 0xd208au);
    if (x86_cc(c, 4)) { goto L_d20a0; }
    X86_TICK(c, 12);
    // 0d208c  cmp word ptr [0xa492c], 0xffff
    X86_AT(c, 0xd208cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA492Cu))), 0xFFFFu, 0, 2);
    // 0d2094  jne 0xd20a0
    X86_AT(c, 0xd2094u);
    if (x86_cc(c, 5)) { goto L_d20a0; }
    X86_TICK(c, 7);
    // 0d2096  call 0xd2244
    X86_AT(c, 0xd2096u);
    push32(c, 0xd209bu); x86_call_known(c, 0xd2244u, f_000d2244); X86_RET(c, 0xd209bu);
    X86_TICK(c, 7);
    // 0d209b  call 0xd3bcc
    X86_AT(c, 0xd209bu);
    push32(c, 0xd20a0u); x86_call_known(c, 0xd3bccu, f_000d3bcc); X86_RET(c, 0xd20a0u);
L_d20a0:
    X86_TICK(c, 10);
    // 0d20a0  ret 
    X86_AT(c, 0xd20a0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1d40u, "ran off the end of a function");
}
void f_000d2083(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d2083  cmp dword ptr [0xa4920], 0
    X86_AT(c, 0xd2083u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4920u))), 0x0u, 0, 4);
    // 0d208a  je 0xd20a0
    X86_AT(c, 0xd208au);
    if (x86_cc(c, 4)) { goto L_d20a0; }
    X86_TICK(c, 12);
    // 0d208c  cmp word ptr [0xa492c], 0xffff
    X86_AT(c, 0xd208cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA492Cu))), 0xFFFFu, 0, 2);
    // 0d2094  jne 0xd20a0
    X86_AT(c, 0xd2094u);
    if (x86_cc(c, 5)) { goto L_d20a0; }
    X86_TICK(c, 7);
    // 0d2096  call 0xd2244
    X86_AT(c, 0xd2096u);
    push32(c, 0xd209bu); x86_call_known(c, 0xd2244u, f_000d2244); X86_RET(c, 0xd209bu);
    X86_TICK(c, 7);
    // 0d209b  call 0xd3bcc
    X86_AT(c, 0xd209bu);
    push32(c, 0xd20a0u); x86_call_known(c, 0xd3bccu, f_000d3bcc); X86_RET(c, 0xd20a0u);
L_d20a0:
    X86_TICK(c, 10);
    // 0d20a0  ret 
    X86_AT(c, 0xd20a0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2083u, "ran off the end of a function");
}
void f_000d20a4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d20a4  push 7
    X86_AT(c, 0xd20a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d20a6  call 0xbb6b0
    X86_AT(c, 0xd20a6u);
    push32(c, 0xd20abu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd20abu);
    X86_TICK(c, 11);
    // 0d20ab  push 0xc680
    X86_AT(c, 0xd20abu);
    { uint32_t v = 0xC680u; push32(c, v); }
    // 0d20b0  push 7
    X86_AT(c, 0xd20b0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d20b2  call 0xba428
    X86_AT(c, 0xd20b2u);
    push32(c, 0xd20b7u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd20b7u);
    X86_TICK(c, 14);
    // 0d20b7  add esp, 0xc
    X86_AT(c, 0xd20b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d20ba  cmp dword ptr [0x9c53c], 0xffffffff
    X86_AT(c, 0xd20bau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x9C53Cu))), 0xFFFFFFFFu, 0, 4);
    // 0d20c1  jne 0xd20d8
    X86_AT(c, 0xd20c1u);
    if (x86_cc(c, 5)) { goto L_d20d8; }
    X86_TICK(c, 12);
    // 0d20c3  cmp dword ptr [0xa4a7a], 0
    X86_AT(c, 0xd20c3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0x0u, 0, 4);
    // 0d20ca  jne 0xd20d8
    X86_AT(c, 0xd20cau);
    if (x86_cc(c, 5)) { goto L_d20d8; }
    X86_TICK(c, 9);
    // 0d20cc  push 0
    X86_AT(c, 0xd20ccu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d20ce  call 0xb607c
    X86_AT(c, 0xd20ceu);
    push32(c, 0xd20d3u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd20d3u);
    X86_TICK(c, 9);
    // 0d20d3  add esp, 4
    X86_AT(c, 0xd20d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d20d6  jmp 0xd2106
    X86_AT(c, 0xd20d6u);
    goto L_d2106;
L_d20d8:
    X86_TICK(c, 9);
    // 0d20d8  push 1
    X86_AT(c, 0xd20d8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d20da  call 0xca900
    X86_AT(c, 0xd20dau);
    push32(c, 0xd20dfu); x86_call_known(c, 0xca900u, f_000ca900); X86_RET(c, 0xd20dfu);
    X86_TICK(c, 9);
    // 0d20df  add esp, 4
    X86_AT(c, 0xd20dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d20e2  inc eax
    X86_AT(c, 0xd20e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d20e3  je 0xd2106
    X86_AT(c, 0xd20e3u);
    if (x86_cc(c, 4)) { goto L_d2106; }
    X86_TICK(c, 9);
    // 0d20e5  push 5
    X86_AT(c, 0xd20e5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d20e7  call 0xc8574
    X86_AT(c, 0xd20e7u);
    push32(c, 0xd20ecu); x86_call_known(c, 0xc8574u, f_000c8574); X86_RET(c, 0xd20ecu);
    X86_TICK(c, 9);
    // 0d20ec  add esp, 4
    X86_AT(c, 0xd20ecu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d20ef  inc eax
    X86_AT(c, 0xd20efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d20f0  je 0xd2106
    X86_AT(c, 0xd20f0u);
    if (x86_cc(c, 4)) { goto L_d2106; }
    X86_TICK(c, 13);
    // 0d20f2  push 5
    X86_AT(c, 0xd20f2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d20f4  push 0xa4a7a
    X86_AT(c, 0xd20f4u);
    { uint32_t v = 0xA4A7Au; push32(c, v); }
    // 0d20f9  push 0xa4a76
    X86_AT(c, 0xd20f9u);
    { uint32_t v = 0xA4A76u; push32(c, v); }
    // 0d20fe  call 0xbd628
    X86_AT(c, 0xd20feu);
    push32(c, 0xd2103u); x86_call_known(c, 0xbd628u, f_000bd628); X86_RET(c, 0xd2103u);
    X86_TICK(c, 2);
    // 0d2103  add esp, 0xc
    X86_AT(c, 0xd2103u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d2106:
    X86_TICK(c, 10);
    // 0d2106  ret 
    X86_AT(c, 0xd2106u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd20a4u, "ran off the end of a function");
}
void f_000d2108(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d2108  push 7
    X86_AT(c, 0xd2108u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d210a  call 0xbb6b0
    X86_AT(c, 0xd210au);
    push32(c, 0xd210fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd210fu);
    X86_TICK(c, 11);
    // 0d210f  push 0xc694
    X86_AT(c, 0xd210fu);
    { uint32_t v = 0xC694u; push32(c, v); }
    // 0d2114  push 7
    X86_AT(c, 0xd2114u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2116  call 0xba428
    X86_AT(c, 0xd2116u);
    push32(c, 0xd211bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd211bu);
    X86_TICK(c, 14);
    // 0d211b  add esp, 0xc
    X86_AT(c, 0xd211bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d211e  cmp dword ptr [0x9c53c], 0xffffffff
    X86_AT(c, 0xd211eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x9C53Cu))), 0xFFFFFFFFu, 0, 4);
    // 0d2125  jne 0xd213c
    X86_AT(c, 0xd2125u);
    if (x86_cc(c, 5)) { goto L_d213c; }
    X86_TICK(c, 12);
    // 0d2127  cmp dword ptr [0xa4a7a], 0x3f
    X86_AT(c, 0xd2127u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0x3Fu, 0, 4);
    // 0d212e  jne 0xd213c
    X86_AT(c, 0xd212eu);
    if (x86_cc(c, 5)) { goto L_d213c; }
    X86_TICK(c, 9);
    // 0d2130  push 0
    X86_AT(c, 0xd2130u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2132  call 0xb607c
    X86_AT(c, 0xd2132u);
    push32(c, 0xd2137u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd2137u);
    X86_TICK(c, 9);
    // 0d2137  add esp, 4
    X86_AT(c, 0xd2137u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d213a  jmp 0xd216a
    X86_AT(c, 0xd213au);
    goto L_d216a;
L_d213c:
    X86_TICK(c, 9);
    // 0d213c  push 3
    X86_AT(c, 0xd213cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d213e  call 0xca900
    X86_AT(c, 0xd213eu);
    push32(c, 0xd2143u); x86_call_known(c, 0xca900u, f_000ca900); X86_RET(c, 0xd2143u);
    X86_TICK(c, 9);
    // 0d2143  add esp, 4
    X86_AT(c, 0xd2143u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d2146  inc eax
    X86_AT(c, 0xd2146u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d2147  je 0xd216a
    X86_AT(c, 0xd2147u);
    if (x86_cc(c, 4)) { goto L_d216a; }
    X86_TICK(c, 9);
    // 0d2149  push 6
    X86_AT(c, 0xd2149u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d214b  call 0xc8574
    X86_AT(c, 0xd214bu);
    push32(c, 0xd2150u); x86_call_known(c, 0xc8574u, f_000c8574); X86_RET(c, 0xd2150u);
    X86_TICK(c, 9);
    // 0d2150  add esp, 4
    X86_AT(c, 0xd2150u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d2153  inc eax
    X86_AT(c, 0xd2153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d2154  je 0xd216a
    X86_AT(c, 0xd2154u);
    if (x86_cc(c, 4)) { goto L_d216a; }
    X86_TICK(c, 13);
    // 0d2156  push 6
    X86_AT(c, 0xd2156u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d2158  push 0xa4a7a
    X86_AT(c, 0xd2158u);
    { uint32_t v = 0xA4A7Au; push32(c, v); }
    // 0d215d  push 0xa4a76
    X86_AT(c, 0xd215du);
    { uint32_t v = 0xA4A76u; push32(c, v); }
    // 0d2162  call 0xbd628
    X86_AT(c, 0xd2162u);
    push32(c, 0xd2167u); x86_call_known(c, 0xbd628u, f_000bd628); X86_RET(c, 0xd2167u);
    X86_TICK(c, 2);
    // 0d2167  add esp, 0xc
    X86_AT(c, 0xd2167u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d216a:
    X86_TICK(c, 10);
    // 0d216a  ret 
    X86_AT(c, 0xd216au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2108u, "ran off the end of a function");
}
void f_000d216c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d216c  push 7
    X86_AT(c, 0xd216cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d216e  call 0xbb6b0
    X86_AT(c, 0xd216eu);
    push32(c, 0xd2173u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2173u);
    X86_TICK(c, 11);
    // 0d2173  push 0xc6a8
    X86_AT(c, 0xd2173u);
    { uint32_t v = 0xC6A8u; push32(c, v); }
    // 0d2178  push 7
    X86_AT(c, 0xd2178u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d217a  call 0xba428
    X86_AT(c, 0xd217au);
    push32(c, 0xd217fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd217fu);
    X86_TICK(c, 14);
    // 0d217f  add esp, 0xc
    X86_AT(c, 0xd217fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2182  cmp dword ptr [0x9c53c], 0xffffffff
    X86_AT(c, 0xd2182u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x9C53Cu))), 0xFFFFFFFFu, 0, 4);
    // 0d2189  jne 0xd21a0
    X86_AT(c, 0xd2189u);
    if (x86_cc(c, 5)) { goto L_d21a0; }
    X86_TICK(c, 12);
    // 0d218b  cmp dword ptr [0xa4a76], 0x3f
    X86_AT(c, 0xd218bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0x3Fu, 0, 4);
    // 0d2192  jne 0xd21a0
    X86_AT(c, 0xd2192u);
    if (x86_cc(c, 5)) { goto L_d21a0; }
    X86_TICK(c, 9);
    // 0d2194  push 0
    X86_AT(c, 0xd2194u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2196  call 0xb607c
    X86_AT(c, 0xd2196u);
    push32(c, 0xd219bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd219bu);
    X86_TICK(c, 9);
    // 0d219b  add esp, 4
    X86_AT(c, 0xd219bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d219e  jmp 0xd21d5
    X86_AT(c, 0xd219eu);
    goto L_d21d5;
L_d21a0:
    X86_TICK(c, 9);
    // 0d21a0  push 2
    X86_AT(c, 0xd21a0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d21a2  call 0xb8ca0
    X86_AT(c, 0xd21a2u);
    push32(c, 0xd21a7u); x86_call_known(c, 0xb8ca0u, f_000b8ca0); X86_RET(c, 0xd21a7u);
    X86_TICK(c, 9);
    // 0d21a7  push 2
    X86_AT(c, 0xd21a7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d21a9  call 0xca900
    X86_AT(c, 0xd21a9u);
    push32(c, 0xd21aeu); x86_call_known(c, 0xca900u, f_000ca900); X86_RET(c, 0xd21aeu);
    X86_TICK(c, 9);
    // 0d21ae  add esp, 8
    X86_AT(c, 0xd21aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d21b1  inc eax
    X86_AT(c, 0xd21b1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d21b2  je 0xd21d5
    X86_AT(c, 0xd21b2u);
    if (x86_cc(c, 4)) { goto L_d21d5; }
    X86_TICK(c, 9);
    // 0d21b4  push 7
    X86_AT(c, 0xd21b4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d21b6  call 0xc8574
    X86_AT(c, 0xd21b6u);
    push32(c, 0xd21bbu); x86_call_known(c, 0xc8574u, f_000c8574); X86_RET(c, 0xd21bbu);
    X86_TICK(c, 9);
    // 0d21bb  add esp, 4
    X86_AT(c, 0xd21bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d21be  inc eax
    X86_AT(c, 0xd21beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d21bf  je 0xd21d5
    X86_AT(c, 0xd21bfu);
    if (x86_cc(c, 4)) { goto L_d21d5; }
    X86_TICK(c, 13);
    // 0d21c1  push 7
    X86_AT(c, 0xd21c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d21c3  push 0xa4a7a
    X86_AT(c, 0xd21c3u);
    { uint32_t v = 0xA4A7Au; push32(c, v); }
    // 0d21c8  push 0xa4a76
    X86_AT(c, 0xd21c8u);
    { uint32_t v = 0xA4A76u; push32(c, v); }
    // 0d21cd  call 0xbd628
    X86_AT(c, 0xd21cdu);
    push32(c, 0xd21d2u); x86_call_known(c, 0xbd628u, f_000bd628); X86_RET(c, 0xd21d2u);
    X86_TICK(c, 2);
    // 0d21d2  add esp, 0xc
    X86_AT(c, 0xd21d2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d21d5:
    X86_TICK(c, 10);
    // 0d21d5  ret 
    X86_AT(c, 0xd21d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd216cu, "ran off the end of a function");
}
void f_000d21d8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d21d8  push 7
    X86_AT(c, 0xd21d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d21da  call 0xbb6b0
    X86_AT(c, 0xd21dau);
    push32(c, 0xd21dfu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd21dfu);
    X86_TICK(c, 11);
    // 0d21df  push 0xc6bc
    X86_AT(c, 0xd21dfu);
    { uint32_t v = 0xC6BCu; push32(c, v); }
    // 0d21e4  push 7
    X86_AT(c, 0xd21e4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d21e6  call 0xba428
    X86_AT(c, 0xd21e6u);
    push32(c, 0xd21ebu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd21ebu);
    X86_TICK(c, 14);
    // 0d21eb  add esp, 0xc
    X86_AT(c, 0xd21ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d21ee  cmp dword ptr [0x9c53c], 0xffffffff
    X86_AT(c, 0xd21eeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x9C53Cu))), 0xFFFFFFFFu, 0, 4);
    // 0d21f5  jne 0xd220c
    X86_AT(c, 0xd21f5u);
    if (x86_cc(c, 5)) { goto L_d220c; }
    X86_TICK(c, 12);
    // 0d21f7  cmp dword ptr [0xa4a76], 0
    X86_AT(c, 0xd21f7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0x0u, 0, 4);
    // 0d21fe  jne 0xd220c
    X86_AT(c, 0xd21feu);
    if (x86_cc(c, 5)) { goto L_d220c; }
    X86_TICK(c, 9);
    // 0d2200  push 0
    X86_AT(c, 0xd2200u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2202  call 0xb607c
    X86_AT(c, 0xd2202u);
    push32(c, 0xd2207u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd2207u);
    X86_TICK(c, 9);
    // 0d2207  add esp, 4
    X86_AT(c, 0xd2207u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d220a  jmp 0xd2241
    X86_AT(c, 0xd220au);
    goto L_d2241;
L_d220c:
    X86_TICK(c, 9);
    // 0d220c  push 4
    X86_AT(c, 0xd220cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d220e  call 0xb8ca0
    X86_AT(c, 0xd220eu);
    push32(c, 0xd2213u); x86_call_known(c, 0xb8ca0u, f_000b8ca0); X86_RET(c, 0xd2213u);
    X86_TICK(c, 9);
    // 0d2213  push 4
    X86_AT(c, 0xd2213u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d2215  call 0xca900
    X86_AT(c, 0xd2215u);
    push32(c, 0xd221au); x86_call_known(c, 0xca900u, f_000ca900); X86_RET(c, 0xd221au);
    X86_TICK(c, 9);
    // 0d221a  add esp, 8
    X86_AT(c, 0xd221au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d221d  inc eax
    X86_AT(c, 0xd221du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d221e  je 0xd2241
    X86_AT(c, 0xd221eu);
    if (x86_cc(c, 4)) { goto L_d2241; }
    X86_TICK(c, 9);
    // 0d2220  push 3
    X86_AT(c, 0xd2220u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d2222  call 0xc8574
    X86_AT(c, 0xd2222u);
    push32(c, 0xd2227u); x86_call_known(c, 0xc8574u, f_000c8574); X86_RET(c, 0xd2227u);
    X86_TICK(c, 9);
    // 0d2227  add esp, 4
    X86_AT(c, 0xd2227u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d222a  inc eax
    X86_AT(c, 0xd222au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d222b  je 0xd2241
    X86_AT(c, 0xd222bu);
    if (x86_cc(c, 4)) { goto L_d2241; }
    X86_TICK(c, 13);
    // 0d222d  push 3
    X86_AT(c, 0xd222du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d222f  push 0xa4a7a
    X86_AT(c, 0xd222fu);
    { uint32_t v = 0xA4A7Au; push32(c, v); }
    // 0d2234  push 0xa4a76
    X86_AT(c, 0xd2234u);
    { uint32_t v = 0xA4A76u; push32(c, v); }
    // 0d2239  call 0xbd628
    X86_AT(c, 0xd2239u);
    push32(c, 0xd223eu); x86_call_known(c, 0xbd628u, f_000bd628); X86_RET(c, 0xd223eu);
    X86_TICK(c, 2);
    // 0d223e  add esp, 0xc
    X86_AT(c, 0xd223eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d2241:
    X86_TICK(c, 10);
    // 0d2241  ret 
    X86_AT(c, 0xd2241u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd21d8u, "ran off the end of a function");
}
void f_000d2244(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d2244  push edi
    X86_AT(c, 0xd2244u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2245  push 1
    X86_AT(c, 0xd2245u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2247  call 0xcc934
    X86_AT(c, 0xd2247u);
    push32(c, 0xd224cu); x86_call_known(c, 0xcc934u, f_000cc934); X86_RET(c, 0xd224cu);
    X86_TICK(c, 14);
    // 0d224c  add esp, 4
    X86_AT(c, 0xd224cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d224f  cmp dword ptr [0xa4a56], 2
    X86_AT(c, 0xd224fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x2u, 0, 4);
    // 0d2256  jne 0xd2279
    X86_AT(c, 0xd2256u);
    if (x86_cc(c, 5)) { goto L_d2279; }
    X86_TICK(c, 11);
    // 0d2258  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd2258u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d225d  and eax, eax
    X86_AT(c, 0xd225du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d225f  je 0xd2274
    X86_AT(c, 0xd225fu);
    if (x86_cc(c, 4)) { goto L_d2274; }
    X86_TICK(c, 7);
    // 0d2261  cmp eax, 0x3f
    X86_AT(c, 0xd2261u);
    (void)x86_sub(c, c.r[0], 0x3Fu, 0, 4);
    // 0d2264  je 0xd2274
    X86_AT(c, 0xd2264u);
    if (x86_cc(c, 4)) { goto L_d2274; }
    X86_TICK(c, 11);
    // 0d2266  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd2266u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d226b  and eax, eax
    X86_AT(c, 0xd226bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d226d  je 0xd2274
    X86_AT(c, 0xd226du);
    if (x86_cc(c, 4)) { goto L_d2274; }
    X86_TICK(c, 7);
    // 0d226f  cmp eax, 0x3f
    X86_AT(c, 0xd226fu);
    (void)x86_sub(c, c.r[0], 0x3Fu, 0, 4);
    // 0d2272  jne 0xd2279
    X86_AT(c, 0xd2272u);
    if (x86_cc(c, 5)) { goto L_d2279; }
L_d2274:
    X86_TICK(c, 7);
    // 0d2274  call 0xd290c
    X86_AT(c, 0xd2274u);
    push32(c, 0xd2279u); x86_call_known(c, 0xd290cu, f_000d290c); X86_RET(c, 0xd2279u);
L_d2279:
    X86_TICK(c, 12);
    // 0d2279  cmp dword ptr [0xa4a56], 3
    X86_AT(c, 0xd2279u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x3u, 0, 4);
    // 0d2280  jne 0xd22a3
    X86_AT(c, 0xd2280u);
    if (x86_cc(c, 5)) { goto L_d22a3; }
    X86_TICK(c, 11);
    // 0d2282  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd2282u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d2287  and eax, eax
    X86_AT(c, 0xd2287u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d2289  je 0xd229e
    X86_AT(c, 0xd2289u);
    if (x86_cc(c, 4)) { goto L_d229e; }
    X86_TICK(c, 7);
    // 0d228b  cmp eax, 0x3f
    X86_AT(c, 0xd228bu);
    (void)x86_sub(c, c.r[0], 0x3Fu, 0, 4);
    // 0d228e  je 0xd229e
    X86_AT(c, 0xd228eu);
    if (x86_cc(c, 4)) { goto L_d229e; }
    X86_TICK(c, 11);
    // 0d2290  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd2290u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d2295  and eax, eax
    X86_AT(c, 0xd2295u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d2297  je 0xd229e
    X86_AT(c, 0xd2297u);
    if (x86_cc(c, 4)) { goto L_d229e; }
    X86_TICK(c, 7);
    // 0d2299  cmp eax, 0x3f
    X86_AT(c, 0xd2299u);
    (void)x86_sub(c, c.r[0], 0x3Fu, 0, 4);
    // 0d229c  jne 0xd22a3
    X86_AT(c, 0xd229cu);
    if (x86_cc(c, 5)) { goto L_d22a3; }
L_d229e:
    X86_TICK(c, 7);
    // 0d229e  call 0xd290c
    X86_AT(c, 0xd229eu);
    push32(c, 0xd22a3u); x86_call_known(c, 0xd290cu, f_000d290c); X86_RET(c, 0xd22a3u);
L_d22a3:
    X86_TICK(c, 7);
    // 0d22a3  call 0xca6d0
    X86_AT(c, 0xd22a3u);
    push32(c, 0xd22a8u); x86_call_known(c, 0xca6d0u, f_000ca6d0); X86_RET(c, 0xd22a8u);
    X86_TICK(c, 15);
    // 0d22a8  mov eax, dword ptr [0xa6068]
    X86_AT(c, 0xd22a8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6068u)));
    // 0d22ad  cmp eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd22adu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0, 4);
    // 0d22b3  jne 0xd22c7
    X86_AT(c, 0xd22b3u);
    if (x86_cc(c, 5)) { goto L_d22c7; }
    X86_TICK(c, 15);
    // 0d22b5  mov eax, dword ptr [0xa606c]
    X86_AT(c, 0xd22b5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA606Cu)));
    // 0d22ba  cmp eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd22bau);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0, 4);
    // 0d22c0  jne 0xd22c7
    X86_AT(c, 0xd22c0u);
    if (x86_cc(c, 5)) { goto L_d22c7; }
    X86_TICK(c, 7);
    // 0d22c2  call 0xc7190
    X86_AT(c, 0xd22c2u);
    push32(c, 0xd22c7u); x86_call_known(c, 0xc7190u, f_000c7190); X86_RET(c, 0xd22c7u);
L_d22c7:
    X86_TICK(c, 7);
    // 0d22c7  call 0xd34f8
    X86_AT(c, 0xd22c7u);
    push32(c, 0xd22ccu); x86_call_known(c, 0xd34f8u, f_000d34f8); X86_RET(c, 0xd22ccu);
    X86_TICK(c, 15);
    // 0d22cc  mov eax, dword ptr [0xa6068]
    X86_AT(c, 0xd22ccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6068u)));
    // 0d22d1  cmp eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd22d1u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0, 4);
    // 0d22d7  jne 0xd22eb
    X86_AT(c, 0xd22d7u);
    if (x86_cc(c, 5)) { goto L_d22eb; }
    X86_TICK(c, 15);
    // 0d22d9  mov eax, dword ptr [0xa606c]
    X86_AT(c, 0xd22d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA606Cu)));
    // 0d22de  cmp eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd22deu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0, 4);
    // 0d22e4  jne 0xd22eb
    X86_AT(c, 0xd22e4u);
    if (x86_cc(c, 5)) { goto L_d22eb; }
    X86_TICK(c, 7);
    // 0d22e6  call 0xc7190
    X86_AT(c, 0xd22e6u);
    push32(c, 0xd22ebu); x86_call_known(c, 0xc7190u, f_000c7190); X86_RET(c, 0xd22ebu);
L_d22eb:
    X86_TICK(c, 15);
    // 0d22eb  mov eax, dword ptr [0xa6048]
    X86_AT(c, 0xd22ebu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6048u)));
    // 0d22f0  cmp eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd22f0u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0, 4);
    // 0d22f6  jne 0xd230a
    X86_AT(c, 0xd22f6u);
    if (x86_cc(c, 5)) { goto L_d230a; }
    X86_TICK(c, 15);
    // 0d22f8  mov eax, dword ptr [0xa604c]
    X86_AT(c, 0xd22f8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA604Cu)));
    // 0d22fd  cmp eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd22fdu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0, 4);
    // 0d2303  jne 0xd230a
    X86_AT(c, 0xd2303u);
    if (x86_cc(c, 5)) { goto L_d230a; }
    X86_TICK(c, 7);
    // 0d2305  call 0xd381c
    X86_AT(c, 0xd2305u);
    push32(c, 0xd230au); x86_call_known(c, 0xd381cu, f_000d381c); X86_RET(c, 0xd230au);
L_d230a:
    X86_TICK(c, 12);
    // 0d230a  cmp dword ptr [0xa4a56], 3
    X86_AT(c, 0xd230au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x3u, 0, 4);
    // 0d2311  jne 0xd2322
    X86_AT(c, 0xd2311u);
    if (x86_cc(c, 5)) { goto L_d2322; }
    X86_TICK(c, 9);
    // 0d2313  mov dword ptr [0xabf7c], 0
    X86_AT(c, 0xd2313u);
    wr32((c.sbase[3] + (uint32_t)(0xABF7Cu)), 0x0u);
    // 0d231d  call 0xd23a8
    X86_AT(c, 0xd231du);
    push32(c, 0xd2322u); x86_call_known(c, 0xd23a8u, f_000d23a8); X86_RET(c, 0xd2322u);
L_d2322:
    X86_TICK(c, 9);
    // 0d2322  push 0
    X86_AT(c, 0xd2322u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2324  call 0xb6698
    X86_AT(c, 0xd2324u);
    push32(c, 0xd2329u); x86_call_known(c, 0xb6698u, f_000b6698); X86_RET(c, 0xd2329u);
    X86_TICK(c, 4);
    // 0d2329  sub edi, edi
    X86_AT(c, 0xd2329u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d232b  add esp, 4
    X86_AT(c, 0xd232bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d232e:
    X86_TICK(c, 7);
    // 0d232e  cmp edi, 0x30
    X86_AT(c, 0xd232eu);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0d2331  jge 0xd2383
    X86_AT(c, 0xd2331u);
    if (x86_cc(c, 13)) { goto L_d2383; }
    X86_TICK(c, 11);
    // 0d2333  mov al, byte ptr [edi + 0xa5ce8]
    X86_AT(c, 0xd2333u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u))));
    // 0d2339  cmp al, 0x80
    X86_AT(c, 0xd2339u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0d233b  je 0xd2349
    X86_AT(c, 0xd233bu);
    if (x86_cc(c, 4)) { goto L_d2349; }
    X86_TICK(c, 7);
    // 0d233d  cmp al, 0x82
    X86_AT(c, 0xd233du);
    (void)x86_sub(c, g8(c, 0), 0x82u, 0, 1);
    // 0d233f  je 0xd2349
    X86_AT(c, 0xd233fu);
    if (x86_cc(c, 4)) { goto L_d2349; }
    X86_TICK(c, 7);
    // 0d2341  cmp al, 0xa1
    X86_AT(c, 0xd2341u);
    (void)x86_sub(c, g8(c, 0), 0xA1u, 0, 1);
    // 0d2343  je 0xd2349
    X86_AT(c, 0xd2343u);
    if (x86_cc(c, 4)) { goto L_d2349; }
    X86_TICK(c, 7);
    // 0d2345  cmp al, 0x81
    X86_AT(c, 0xd2345u);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0d2347  jne 0xd2380
    X86_AT(c, 0xd2347u);
    if (x86_cc(c, 5)) { goto L_d2380; }
L_d2349:
    X86_TICK(c, 11);
    // 0d2349  mov eax, dword ptr [edi*4 + 0xa6074]
    X86_AT(c, 0xd2349u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)));
    // 0d2350  and eax, eax
    X86_AT(c, 0xd2350u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d2352  jle 0xd2380
    X86_AT(c, 0xd2352u);
    if (x86_cc(c, 14)) { goto L_d2380; }
    X86_TICK(c, 18);
    // 0d2354  dec dword ptr [edi*4 + 0xa6074]
    X86_AT(c, 0xd2354u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d235b  cmp dword ptr [edi*4 + 0xa6074], 0
    X86_AT(c, 0xd235bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u))), 0x0u, 0, 4);
    // 0d2363  jne 0xd2380
    X86_AT(c, 0xd2363u);
    if (x86_cc(c, 5)) { goto L_d2380; }
    X86_TICK(c, 19);
    // 0d2365  mov byte ptr [edi + 0xa5ce8], 0
    X86_AT(c, 0xd2365u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), 0x0u);
    // 0d236c  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd236cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d2372  push dword ptr [0xa4a76]
    X86_AT(c, 0xd2372u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d2378  call 0xb7aa0
    X86_AT(c, 0xd2378u);
    push32(c, 0xd237du); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xd237du);
    X86_TICK(c, 2);
    // 0d237d  add esp, 8
    X86_AT(c, 0xd237du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d2380:
    X86_TICK(c, 9);
    // 0d2380  inc edi
    X86_AT(c, 0xd2380u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d2381  jmp 0xd232e
    X86_AT(c, 0xd2381u);
    X86_POLL(c, 0xd232eu); goto L_d232e;
L_d2383:
    X86_TICK(c, 14);
    // 0d2383  pop edi
    X86_AT(c, 0xd2383u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2384  ret 
    X86_AT(c, 0xd2384u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2244u, "ran off the end of a function");
}
void f_000d2388(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d2388  push 7
    X86_AT(c, 0xd2388u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d238a  call 0xbb6b0
    X86_AT(c, 0xd238au);
    push32(c, 0xd238fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd238fu);
    X86_TICK(c, 11);
    // 0d238f  push 0xc6d0
    X86_AT(c, 0xd238fu);
    { uint32_t v = 0xC6D0u; push32(c, v); }
    // 0d2394  push 7
    X86_AT(c, 0xd2394u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2396  call 0xba428
    X86_AT(c, 0xd2396u);
    push32(c, 0xd239bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd239bu);
    X86_TICK(c, 9);
    // 0d239b  push 7
    X86_AT(c, 0xd239bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d239d  call 0xbbb5c
    X86_AT(c, 0xd239du);
    push32(c, 0xd23a2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd23a2u);
    X86_TICK(c, 12);
    // 0d23a2  add esp, 0x10
    X86_AT(c, 0xd23a2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d23a5  ret 
    X86_AT(c, 0xd23a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2388u, "ran off the end of a function");
}
void f_000d23a8(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d23a8  push ebx
    X86_AT(c, 0xd23a8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d23a9  push esi
    X86_AT(c, 0xd23a9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d23aa  push edi
    X86_AT(c, 0xd23aau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d23ab  push 0xa
    X86_AT(c, 0xd23abu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d23ad  call 0xb61b4
    X86_AT(c, 0xd23adu);
    push32(c, 0xd23b2u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd23b2u);
    X86_TICK(c, 12);
    // 0d23b2  xchg edi, eax
    X86_AT(c, 0xd23b2u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d23b3  push 0xa
    X86_AT(c, 0xd23b3u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d23b5  call 0xb61b4
    X86_AT(c, 0xd23b5u);
    push32(c, 0xd23bau); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd23bau);
    X86_TICK(c, 12);
    // 0d23ba  xchg esi, eax
    X86_AT(c, 0xd23bau);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d23bb  add esp, 8
    X86_AT(c, 0xd23bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d23be  cmp edi, 5
    X86_AT(c, 0xd23beu);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0d23c1  jne 0xd23d2
    X86_AT(c, 0xd23c1u);
    if (x86_cc(c, 5)) { goto L_d23d2; }
    X86_TICK(c, 7);
    // 0d23c3  cmp esi, 5
    X86_AT(c, 0xd23c3u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0d23c6  jne 0xd23d2
    X86_AT(c, 0xd23c6u);
    if (x86_cc(c, 5)) { goto L_d23d2; }
    X86_TICK(c, 7);
    // 0d23c8  call 0xd37ac
    X86_AT(c, 0xd23c8u);
    push32(c, 0xd23cdu); x86_call_known(c, 0xd37acu, f_000d37ac); X86_RET(c, 0xd23cdu);
    X86_TICK(c, 7);
    // 0d23cd  jmp 0xd249c
    X86_AT(c, 0xd23cdu);
    goto L_d249c;
L_d23d2:
    X86_TICK(c, 20);
    // 0d23d2  mov eax, esi
    X86_AT(c, 0xd23d2u);
    c.r[0] = c.r[6];
    // 0d23d4  lea edx, [eax + eax*8]
    X86_AT(c, 0xd23d4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0d23d7  lea eax, [edx + eax*2]
    X86_AT(c, 0xd23d7u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0d23da  lea edx, [edi + eax*1]
    X86_AT(c, 0xd23dau);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0d23dd  cmp byte ptr [edx + 0x8cfa8], 9
    X86_AT(c, 0xd23ddu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8CFA8u))), 0x9u, 0, 1);
    // 0d23e4  jne 0xd249c
    X86_AT(c, 0xd23e4u);
    if (x86_cc(c, 5)) { goto L_d249c; }
    X86_TICK(c, 2);
    // 0d23ea  sub ebx, ebx
    X86_AT(c, 0xd23eau);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_d23ec:
    X86_TICK(c, 7);
    // 0d23ec  cmp ebx, 0x30
    X86_AT(c, 0xd23ecu);
    (void)x86_sub(c, c.r[3], 0x30u, 0, 4);
    // 0d23ef  jge 0xd241b
    X86_AT(c, 0xd23efu);
    if (x86_cc(c, 13)) { goto L_d241b; }
    X86_TICK(c, 16);
    // 0d23f1  lea eax, [ebx*8]
    X86_AT(c, 0xd23f1u);
    c.r[0] = (uint32_t)(c.r[3] * 8);
    // 0d23f8  lea eax, [eax + eax*2]
    X86_AT(c, 0xd23f8u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d23fb  cmp dword ptr [eax + 0x45990], 1
    X86_AT(c, 0xd23fbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x45990u))), 0x1u, 0, 4);
    // 0d2402  jne 0xd2418
    X86_AT(c, 0xd2402u);
    if (x86_cc(c, 5)) { goto L_d2418; }
    X86_TICK(c, 11);
    // 0d2404  cmp edi, dword ptr [eax + 0x45994]
    X86_AT(c, 0xd2404u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x45994u))), 0, 4);
    // 0d240a  jne 0xd2418
    X86_AT(c, 0xd240au);
    if (x86_cc(c, 5)) { goto L_d2418; }
    X86_TICK(c, 11);
    // 0d240c  cmp esi, dword ptr [eax + 0x45998]
    X86_AT(c, 0xd240cu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x45998u))), 0, 4);
    // 0d2412  je 0xd249c
    X86_AT(c, 0xd2412u);
    if (x86_cc(c, 4)) { goto L_d249c; }
L_d2418:
    X86_TICK(c, 9);
    // 0d2418  inc ebx
    X86_AT(c, 0xd2418u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d2419  jmp 0xd23ec
    X86_AT(c, 0xd2419u);
    X86_POLL(c, 0xd23ecu); goto L_d23ec;
L_d241b:
    X86_TICK(c, 15);
    // 0d241b  push 0xffffffff
    X86_AT(c, 0xd241bu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d241d  push 0x8e
    X86_AT(c, 0xd241du);
    { uint32_t v = 0x8Eu; push32(c, v); }
    // 0d2422  push esi
    X86_AT(c, 0xd2422u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2423  push edi
    X86_AT(c, 0xd2423u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2424  call 0xb774c
    X86_AT(c, 0xd2424u);
    push32(c, 0xd2429u); x86_call_known(c, 0xb774cu, f_000b774c); X86_RET(c, 0xd2429u);
    X86_TICK(c, 22);
    // 0d2429  xchg ebx, eax
    X86_AT(c, 0xd2429u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d242a  push 2
    X86_AT(c, 0xd242au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d242c  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd242cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d2432  push dword ptr [0xa4a76]
    X86_AT(c, 0xd2432u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d2438  call 0xbd068
    X86_AT(c, 0xd2438u);
    push32(c, 0xd243du); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd243du);
    X86_TICK(c, 15);
    // 0d243d  push 0x8f
    X86_AT(c, 0xd243du);
    { uint32_t v = 0x8Fu; push32(c, v); }
    // 0d2442  push esi
    X86_AT(c, 0xd2442u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2443  push edi
    X86_AT(c, 0xd2443u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2444  push ebx
    X86_AT(c, 0xd2444u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2445  call 0xb7984
    X86_AT(c, 0xd2445u);
    push32(c, 0xd244au); x86_call_known(c, 0xb7984u, f_000b7984); X86_RET(c, 0xd244au);
    X86_TICK(c, 19);
    // 0d244a  push 2
    X86_AT(c, 0xd244au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d244c  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd244cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d2452  push dword ptr [0xa4a76]
    X86_AT(c, 0xd2452u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d2458  call 0xbd068
    X86_AT(c, 0xd2458u);
    push32(c, 0xd245du); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd245du);
    X86_TICK(c, 15);
    // 0d245d  push 0x90
    X86_AT(c, 0xd245du);
    { uint32_t v = 0x90u; push32(c, v); }
    // 0d2462  push esi
    X86_AT(c, 0xd2462u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2463  push edi
    X86_AT(c, 0xd2463u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2464  push ebx
    X86_AT(c, 0xd2464u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2465  call 0xb7984
    X86_AT(c, 0xd2465u);
    push32(c, 0xd246au); x86_call_known(c, 0xb7984u, f_000b7984); X86_RET(c, 0xd246au);
    X86_TICK(c, 21);
    // 0d246a  add esp, 0x48
    X86_AT(c, 0xd246au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0d246d  push 2
    X86_AT(c, 0xd246du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d246f  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd246fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d2475  push dword ptr [0xa4a76]
    X86_AT(c, 0xd2475u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d247b  call 0xbd068
    X86_AT(c, 0xd247bu);
    push32(c, 0xd2480u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd2480u);
    X86_TICK(c, 9);
    // 0d2480  push ebx
    X86_AT(c, 0xd2480u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2481  call 0xb78a4
    X86_AT(c, 0xd2481u);
    push32(c, 0xd2486u); x86_call_known(c, 0xb78a4u, f_000b78a4); X86_RET(c, 0xd2486u);
    X86_TICK(c, 19);
    // 0d2486  push 2
    X86_AT(c, 0xd2486u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d2488  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd2488u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d248e  push dword ptr [0xa4a76]
    X86_AT(c, 0xd248eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d2494  call 0xbd068
    X86_AT(c, 0xd2494u);
    push32(c, 0xd2499u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd2499u);
    X86_TICK(c, 2);
    // 0d2499  add esp, 0x1c
    X86_AT(c, 0xd2499u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_d249c:
    X86_TICK(c, 22);
    // 0d249c  pop edi
    X86_AT(c, 0xd249cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d249d  pop esi
    X86_AT(c, 0xd249du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d249e  pop ebx
    X86_AT(c, 0xd249eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d249f  ret 
    X86_AT(c, 0xd249fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd23a8u, "ran off the end of a function");
}
void f_000d24a0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d24a0  push ebx
    X86_AT(c, 0xd24a0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d24a1  push edi
    X86_AT(c, 0xd24a1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d24a2  push 7
    X86_AT(c, 0xd24a2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d24a4  call 0xbb6b0
    X86_AT(c, 0xd24a4u);
    push32(c, 0xd24a9u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd24a9u);
    X86_TICK(c, 14);
    // 0d24a9  add esp, 4
    X86_AT(c, 0xd24a9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d24ac  cmp byte ptr [0xa4a49], 0x9d
    X86_AT(c, 0xd24acu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x9Du, 0, 1);
    // 0d24b3  je 0xd24d9
    X86_AT(c, 0xd24b3u);
    if (x86_cc(c, 4)) { goto L_d24d9; }
    X86_TICK(c, 11);
    // 0d24b5  push 0xc6e8
    X86_AT(c, 0xd24b5u);
    { uint32_t v = 0xC6E8u; push32(c, v); }
    // 0d24ba  push 7
    X86_AT(c, 0xd24bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d24bc  call 0xba428
    X86_AT(c, 0xd24bcu);
    push32(c, 0xd24c1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd24c1u);
    X86_TICK(c, 9);
    // 0d24c1  push 7
    X86_AT(c, 0xd24c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d24c3  call 0xbbb5c
    X86_AT(c, 0xd24c3u);
    push32(c, 0xd24c8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd24c8u);
    X86_TICK(c, 9);
    // 0d24c8  push 1
    X86_AT(c, 0xd24c8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d24ca  call 0xb607c
    X86_AT(c, 0xd24cau);
    push32(c, 0xd24cfu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd24cfu);
    X86_TICK(c, 9);
    // 0d24cf  push 0xc6fc
    X86_AT(c, 0xd24cfu);
    { uint32_t v = 0xC6FCu; push32(c, v); }
    // 0d24d4  jmp 0xd25ab
    X86_AT(c, 0xd24d4u);
    goto L_d25ab;
L_d24d9:
    X86_TICK(c, 17);
    // 0d24d9  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd24d9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d24df  push dword ptr [0xa4a76]
    X86_AT(c, 0xd24dfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d24e5  call 0xc735c
    X86_AT(c, 0xd24e5u);
    push32(c, 0xd24eau); x86_call_known(c, 0xc735cu, f_000c735c); X86_RET(c, 0xd24eau);
    X86_TICK(c, 16);
    // 0d24ea  xchg edi, eax
    X86_AT(c, 0xd24eau);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d24eb  mov bl, byte ptr [edi + 0xa5ce8]
    X86_AT(c, 0xd24ebu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u))));
    // 0d24f1  add esp, 8
    X86_AT(c, 0xd24f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d24f4  cmp bl, 0x81
    X86_AT(c, 0xd24f4u);
    (void)x86_sub(c, g8(c, 3), 0x81u, 0, 1);
    // 0d24f7  jne 0xd255c
    X86_AT(c, 0xd24f7u);
    if (x86_cc(c, 5)) { goto L_d255c; }
    X86_TICK(c, 11);
    // 0d24f9  push 0xc728
    X86_AT(c, 0xd24f9u);
    { uint32_t v = 0xC728u; push32(c, v); }
    // 0d24fe  push 7
    X86_AT(c, 0xd24feu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2500  call 0xba428
    X86_AT(c, 0xd2500u);
    push32(c, 0xd2505u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2505u);
    X86_TICK(c, 9);
    // 0d2505  push 7
    X86_AT(c, 0xd2505u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2507  call 0xbbb5c
    X86_AT(c, 0xd2507u);
    push32(c, 0xd250cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd250cu);
    X86_TICK(c, 14);
    // 0d250c  add esp, 0xc
    X86_AT(c, 0xd250cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d250f  cmp dword ptr [0xa4a56], 0xff
    X86_AT(c, 0xd250fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0xFFu, 0, 4);
    // 0d2519  jne 0xd2547
    X86_AT(c, 0xd2519u);
    if (x86_cc(c, 5)) { goto L_d2547; }
    X86_TICK(c, 11);
    // 0d251b  mov dword ptr [0xabf7c], 0
    X86_AT(c, 0xd251bu);
    wr32((c.sbase[3] + (uint32_t)(0xABF7Cu)), 0x0u);
    // 0d2525  push 1
    X86_AT(c, 0xd2525u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2527  call 0xb607c
    X86_AT(c, 0xd2527u);
    push32(c, 0xd252cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd252cu);
    X86_TICK(c, 11);
    // 0d252c  push 0xc754
    X86_AT(c, 0xd252cu);
    { uint32_t v = 0xC754u; push32(c, v); }
    // 0d2531  push 7
    X86_AT(c, 0xd2531u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2533  call 0xba428
    X86_AT(c, 0xd2533u);
    push32(c, 0xd2538u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2538u);
    X86_TICK(c, 9);
    // 0d2538  push 7
    X86_AT(c, 0xd2538u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d253a  call 0xbbb5c
    X86_AT(c, 0xd253au);
    push32(c, 0xd253fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd253fu);
    X86_TICK(c, 9);
    // 0d253f  add esp, 0x10
    X86_AT(c, 0xd253fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d2542  jmp 0xd25bc
    X86_AT(c, 0xd2542u);
    goto L_d25bc;
L_d2547:
    X86_TICK(c, 11);
    // 0d2547  mov byte ptr [edi + 0xa5ce8], 0
    X86_AT(c, 0xd2547u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), 0x0u);
    // 0d254e  mov byte ptr [0xa4a49], 0x81
    X86_AT(c, 0xd254eu);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x81u);
    // 0d2555  call 0xb75c0
    X86_AT(c, 0xd2555u);
    push32(c, 0xd255au); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xd255au);
    X86_TICK(c, 7);
    // 0d255a  jmp 0xd25bc
    X86_AT(c, 0xd255au);
    goto L_d25bc;
L_d255c:
    X86_TICK(c, 7);
    // 0d255c  cmp bl, 0x82
    X86_AT(c, 0xd255cu);
    (void)x86_sub(c, g8(c, 3), 0x82u, 0, 1);
    // 0d255f  jne 0xd258c
    X86_AT(c, 0xd255fu);
    if (x86_cc(c, 5)) { goto L_d258c; }
    X86_TICK(c, 11);
    // 0d2561  push 0xc768
    X86_AT(c, 0xd2561u);
    { uint32_t v = 0xC768u; push32(c, v); }
    // 0d2566  push 7
    X86_AT(c, 0xd2566u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2568  call 0xba428
    X86_AT(c, 0xd2568u);
    push32(c, 0xd256du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd256du);
    X86_TICK(c, 9);
    // 0d256d  push 7
    X86_AT(c, 0xd256du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d256f  call 0xbbb5c
    X86_AT(c, 0xd256fu);
    push32(c, 0xd2574u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2574u);
    X86_TICK(c, 11);
    // 0d2574  mov byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xd2574u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x82u);
    // 0d257b  mov byte ptr [edi + 0xa5ce8], 0
    X86_AT(c, 0xd257bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), 0x0u);
    // 0d2582  call 0xb75c0
    X86_AT(c, 0xd2582u);
    push32(c, 0xd2587u); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xd2587u);
    X86_TICK(c, 9);
    // 0d2587  add esp, 0xc
    X86_AT(c, 0xd2587u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d258a  jmp 0xd25bc
    X86_AT(c, 0xd258au);
    goto L_d25bc;
L_d258c:
    X86_TICK(c, 11);
    // 0d258c  push 0xc794
    X86_AT(c, 0xd258cu);
    { uint32_t v = 0xC794u; push32(c, v); }
    // 0d2591  push 7
    X86_AT(c, 0xd2591u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2593  call 0xba428
    X86_AT(c, 0xd2593u);
    push32(c, 0xd2598u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2598u);
    X86_TICK(c, 9);
    // 0d2598  push 7
    X86_AT(c, 0xd2598u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d259a  call 0xbbb5c
    X86_AT(c, 0xd259au);
    push32(c, 0xd259fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd259fu);
    X86_TICK(c, 9);
    // 0d259f  push 1
    X86_AT(c, 0xd259fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d25a1  call 0xb607c
    X86_AT(c, 0xd25a1u);
    push32(c, 0xd25a6u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd25a6u);
    X86_TICK(c, 2);
    // 0d25a6  push 0xc7a8
    X86_AT(c, 0xd25a6u);
    { uint32_t v = 0xC7A8u; push32(c, v); }
L_d25ab:
    X86_TICK(c, 9);
    // 0d25ab  push 7
    X86_AT(c, 0xd25abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d25ad  call 0xba428
    X86_AT(c, 0xd25adu);
    push32(c, 0xd25b2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd25b2u);
    X86_TICK(c, 9);
    // 0d25b2  push 7
    X86_AT(c, 0xd25b2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d25b4  call 0xbbb5c
    X86_AT(c, 0xd25b4u);
    push32(c, 0xd25b9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd25b9u);
    X86_TICK(c, 2);
    // 0d25b9  add esp, 0x1c
    X86_AT(c, 0xd25b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_d25bc:
    X86_TICK(c, 18);
    // 0d25bc  pop edi
    X86_AT(c, 0xd25bcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d25bd  pop ebx
    X86_AT(c, 0xd25bdu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d25be  ret 
    X86_AT(c, 0xd25beu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd24a0u, "ran off the end of a function");
}
void f_000d25c0(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d25c0  push edi
    X86_AT(c, 0xd25c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d25c1  push 7
    X86_AT(c, 0xd25c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d25c3  call 0xbb6b0
    X86_AT(c, 0xd25c3u);
    push32(c, 0xd25c8u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd25c8u);
    X86_TICK(c, 11);
    // 0d25c8  push 0xc7bc
    X86_AT(c, 0xd25c8u);
    { uint32_t v = 0xC7BCu; push32(c, v); }
    // 0d25cd  push 7
    X86_AT(c, 0xd25cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d25cf  call 0xba428
    X86_AT(c, 0xd25cfu);
    push32(c, 0xd25d4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd25d4u);
    X86_TICK(c, 11);
    // 0d25d4  push 0
    X86_AT(c, 0xd25d4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d25d6  push 7
    X86_AT(c, 0xd25d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d25d8  call 0xb6f28
    X86_AT(c, 0xd25d8u);
    push32(c, 0xd25ddu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd25ddu);
    X86_TICK(c, 12);
    // 0d25dd  xchg edi, eax
    X86_AT(c, 0xd25ddu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d25de  add esp, 0x14
    X86_AT(c, 0xd25deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d25e1  cmp edi, 0xffffffff
    X86_AT(c, 0xd25e1u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d25e4  jne 0xd25fe
    X86_AT(c, 0xd25e4u);
    if (x86_cc(c, 5)) { goto L_d25fe; }
    X86_TICK(c, 11);
    // 0d25e6  push 0xc7fc
    X86_AT(c, 0xd25e6u);
    { uint32_t v = 0xC7FCu; push32(c, v); }
    // 0d25eb  push 7
    X86_AT(c, 0xd25ebu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d25ed  call 0xba428
    X86_AT(c, 0xd25edu);
    push32(c, 0xd25f2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd25f2u);
    X86_TICK(c, 9);
    // 0d25f2  push 7
    X86_AT(c, 0xd25f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d25f4  call 0xbbb5c
    X86_AT(c, 0xd25f4u);
    push32(c, 0xd25f9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd25f9u);
    X86_TICK(c, 9);
    // 0d25f9  add esp, 0xc
    X86_AT(c, 0xd25f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d25fc  jmp 0xd2607
    X86_AT(c, 0xd25fcu);
    goto L_d2607;
L_d25fe:
    X86_TICK(c, 9);
    // 0d25fe  push edi
    X86_AT(c, 0xd25feu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d25ff  call 0xc7a3c
    X86_AT(c, 0xd25ffu);
    push32(c, 0xd2604u); x86_call_known(c, 0xc7a3cu, f_000c7a3c); X86_RET(c, 0xd2604u);
    X86_TICK(c, 2);
    // 0d2604  add esp, 4
    X86_AT(c, 0xd2604u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d2607:
    X86_TICK(c, 14);
    // 0d2607  pop edi
    X86_AT(c, 0xd2607u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2608  ret 
    X86_AT(c, 0xd2608u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd25c0u, "ran off the end of a function");
}
void f_000d260c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d260c  push ebx
    X86_AT(c, 0xd260cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d260d  push esi
    X86_AT(c, 0xd260du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d260e  push edi
    X86_AT(c, 0xd260eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d260f  push 7
    X86_AT(c, 0xd260fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2611  call 0xbb6b0
    X86_AT(c, 0xd2611u);
    push32(c, 0xd2616u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2616u);
    X86_TICK(c, 11);
    // 0d2616  push 0xc814
    X86_AT(c, 0xd2616u);
    { uint32_t v = 0xC814u; push32(c, v); }
    // 0d261b  push 7
    X86_AT(c, 0xd261bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d261d  call 0xba428
    X86_AT(c, 0xd261du);
    push32(c, 0xd2622u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2622u);
    X86_TICK(c, 9);
    // 0d2622  push 7
    X86_AT(c, 0xd2622u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2624  call 0xbbb5c
    X86_AT(c, 0xd2624u);
    push32(c, 0xd2629u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2629u);
    X86_TICK(c, 14);
    // 0d2629  add esp, 0x10
    X86_AT(c, 0xd2629u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d262c  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xd262cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0d2633  jne 0xd270f
    X86_AT(c, 0xd2633u);
    if (x86_cc(c, 5)) { goto L_d270f; }
    X86_TICK(c, 4);
    // 0d2639  mov esi, 0xffffffff
    X86_AT(c, 0xd2639u);
    c.r[6] = 0xFFFFFFFFu;
    // 0d263e  sub edi, edi
    X86_AT(c, 0xd263eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d2640:
    X86_TICK(c, 7);
    // 0d2640  cmp edi, 0x13
    X86_AT(c, 0xd2640u);
    (void)x86_sub(c, c.r[7], 0x13u, 0, 4);
    // 0d2643  jge 0xd2666
    X86_AT(c, 0xd2643u);
    if (x86_cc(c, 13)) { goto L_d2666; }
    X86_TICK(c, 15);
    // 0d2645  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd2645u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d264a  cmp eax, dword ptr [edi*8 + 0xb04b8]
    X86_AT(c, 0xd264au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] * 8 + 0xB04B8u))), 0, 4);
    // 0d2651  jne 0xd2663
    X86_AT(c, 0xd2651u);
    if (x86_cc(c, 5)) { goto L_d2663; }
    X86_TICK(c, 15);
    // 0d2653  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd2653u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d2658  cmp eax, dword ptr [edi*8 + 0xb04bc]
    X86_AT(c, 0xd2658u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] * 8 + 0xB04BCu))), 0, 4);
    // 0d265f  jne 0xd2663
    X86_AT(c, 0xd265fu);
    if (x86_cc(c, 5)) { goto L_d2663; }
    X86_TICK(c, 2);
    // 0d2661  mov esi, edi
    X86_AT(c, 0xd2661u);
    c.r[6] = c.r[7];
L_d2663:
    X86_TICK(c, 9);
    // 0d2663  inc edi
    X86_AT(c, 0xd2663u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d2664  jmp 0xd2640
    X86_AT(c, 0xd2664u);
    X86_POLL(c, 0xd2640u); goto L_d2640;
L_d2666:
    X86_TICK(c, 7);
    // 0d2666  cmp esi, 0xffffffff
    X86_AT(c, 0xd2666u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0d2669  je 0xd270f
    X86_AT(c, 0xd2669u);
    if (x86_cc(c, 4)) { goto L_d270f; }
    X86_TICK(c, 17);
    // 0d266f  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd266fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d2675  push dword ptr [0xa4a76]
    X86_AT(c, 0xd2675u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d267b  call 0xc84fc
    X86_AT(c, 0xd267bu);
    push32(c, 0xd2680u); x86_call_known(c, 0xc84fcu, f_000c84fc); X86_RET(c, 0xd2680u);
    X86_TICK(c, 12);
    // 0d2680  xchg ebx, eax
    X86_AT(c, 0xd2680u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d2681  add esp, 8
    X86_AT(c, 0xd2681u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d2684  cmp bl, 6
    X86_AT(c, 0xd2684u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d2687  jne 0xd26ab
    X86_AT(c, 0xd2687u);
    if (x86_cc(c, 5)) { goto L_d26ab; }
    X86_TICK(c, 23);
    // 0d2689  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd2689u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d268e  mov dword ptr [0xa4a66], eax
    X86_AT(c, 0xd268eu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), c.r[0]);
    // 0d2693  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd2693u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d2698  mov dword ptr [0xa4a6a], eax
    X86_AT(c, 0xd2698u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), c.r[0]);
    // 0d269d  lea eax, [esi - 0xb]
    X86_AT(c, 0xd269du);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFF5u);
    // 0d26a0  push eax
    X86_AT(c, 0xd26a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d26a1  call 0xc56dc
    X86_AT(c, 0xd26a1u);
    push32(c, 0xd26a6u); x86_call_known(c, 0xc56dcu, f_000c56dc); X86_RET(c, 0xd26a6u);
    X86_TICK(c, 7);
    // 0d26a6  jmp 0xd273f
    X86_AT(c, 0xd26a6u);
    goto L_d273f;
L_d26ab:
    X86_TICK(c, 7);
    // 0d26ab  cmp bl, 7
    X86_AT(c, 0xd26abu);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d26ae  jne 0xd26ca
    X86_AT(c, 0xd26aeu);
    if (x86_cc(c, 5)) { goto L_d26ca; }
    X86_TICK(c, 23);
    // 0d26b0  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd26b0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d26b5  mov dword ptr [0xa4a66], eax
    X86_AT(c, 0xd26b5u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), c.r[0]);
    // 0d26ba  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd26bau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d26bf  mov dword ptr [0xa4a6a], eax
    X86_AT(c, 0xd26bfu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), c.r[0]);
    // 0d26c4  lea eax, [esi - 1]
    X86_AT(c, 0xd26c4u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFFu);
    // 0d26c7  push eax
    X86_AT(c, 0xd26c7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d26c8  jmp 0xd26e3
    X86_AT(c, 0xd26c8u);
    goto L_d26e3;
L_d26ca:
    X86_TICK(c, 12);
    // 0d26ca  cmp dword ptr [0xa6058], 0
    X86_AT(c, 0xd26cau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6058u))), 0x0u, 0, 4);
    // 0d26d1  jne 0xd26ea
    X86_AT(c, 0xd26d1u);
    if (x86_cc(c, 5)) { goto L_d26ea; }
    X86_TICK(c, 12);
    // 0d26d3  cmp dword ptr [0xa605c], 0
    X86_AT(c, 0xd26d3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA605Cu))), 0x0u, 0, 4);
    // 0d26da  jne 0xd26ea
    X86_AT(c, 0xd26dau);
    if (x86_cc(c, 5)) { goto L_d26ea; }
    X86_TICK(c, 7);
    // 0d26dc  cmp esi, 8
    X86_AT(c, 0xd26dcu);
    (void)x86_sub(c, c.r[6], 0x8u, 0, 4);
    // 0d26df  jne 0xd26ea
    X86_AT(c, 0xd26dfu);
    if (x86_cc(c, 5)) { goto L_d26ea; }
    X86_TICK(c, 2);
    // 0d26e1  push 7
    X86_AT(c, 0xd26e1u);
    { uint32_t v = 0x7u; push32(c, v); }
L_d26e3:
    X86_TICK(c, 7);
    // 0d26e3  call 0xd276c
    X86_AT(c, 0xd26e3u);
    push32(c, 0xd26e8u); x86_call_known(c, 0xd276cu, f_000d276c); X86_RET(c, 0xd26e8u);
    X86_TICK(c, 7);
    // 0d26e8  jmp 0xd273f
    X86_AT(c, 0xd26e8u);
    goto L_d273f;
L_d26ea:
    X86_TICK(c, 12);
    // 0d26ea  cmp dword ptr [0xa4a76], 0xa
    X86_AT(c, 0xd26eau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0xAu, 0, 4);
    // 0d26f1  jne 0xd2703
    X86_AT(c, 0xd26f1u);
    if (x86_cc(c, 5)) { goto L_d2703; }
    X86_TICK(c, 12);
    // 0d26f3  cmp dword ptr [0xa4a7a], 0x35
    X86_AT(c, 0xd26f3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0x35u, 0, 4);
    // 0d26fa  jne 0xd2703
    X86_AT(c, 0xd26fau);
    if (x86_cc(c, 5)) { goto L_d2703; }
    X86_TICK(c, 7);
    // 0d26fc  call 0xd2a5c
    X86_AT(c, 0xd26fcu);
    push32(c, 0xd2701u); x86_call_known(c, 0xd2a5cu, f_000d2a5c); X86_RET(c, 0xd2701u);
    X86_TICK(c, 7);
    // 0d2701  jmp 0xd2768
    X86_AT(c, 0xd2701u);
    goto L_d2768;
L_d2703:
    X86_TICK(c, 7);
    // 0d2703  cmp bl, 8
    X86_AT(c, 0xd2703u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 0d2706  jne 0xd270f
    X86_AT(c, 0xd2706u);
    if (x86_cc(c, 5)) { goto L_d270f; }
    X86_TICK(c, 7);
    // 0d2708  call 0xd29bc
    X86_AT(c, 0xd2708u);
    push32(c, 0xd270du); x86_call_known(c, 0xd29bcu, f_000d29bc); X86_RET(c, 0xd270du);
    X86_TICK(c, 7);
    // 0d270d  jmp 0xd2768
    X86_AT(c, 0xd270du);
    goto L_d2768;
L_d270f:
    X86_TICK(c, 12);
    // 0d270f  cmp dword ptr [0xa4a56], 0xff
    X86_AT(c, 0xd270fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0xFFu, 0, 4);
    // 0d2719  jne 0xd2744
    X86_AT(c, 0xd2719u);
    if (x86_cc(c, 5)) { goto L_d2744; }
    X86_TICK(c, 17);
    // 0d271b  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd271bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d2721  push dword ptr [0xa4a76]
    X86_AT(c, 0xd2721u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d2727  call 0xc84fc
    X86_AT(c, 0xd2727u);
    push32(c, 0xd272cu); x86_call_known(c, 0xc84fcu, f_000c84fc); X86_RET(c, 0xd272cu);
    X86_TICK(c, 9);
    // 0d272c  add esp, 8
    X86_AT(c, 0xd272cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d272f  and al, al
    X86_AT(c, 0xd272fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d2731  jne 0xd2744
    X86_AT(c, 0xd2731u);
    if (x86_cc(c, 5)) { goto L_d2744; }
    X86_TICK(c, 7);
    // 0d2733  call 0xc93d4
    X86_AT(c, 0xd2733u);
    push32(c, 0xd2738u); x86_call_known(c, 0xc93d4u, f_000c93d4); X86_RET(c, 0xd2738u);
    X86_TICK(c, 9);
    // 0d2738  push 3
    X86_AT(c, 0xd2738u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d273a  call 0xb84e0
    X86_AT(c, 0xd273au);
    push32(c, 0xd273fu); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xd273fu);
L_d273f:
    X86_TICK(c, 9);
    // 0d273f  add esp, 4
    X86_AT(c, 0xd273fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d2742  jmp 0xd2768
    X86_AT(c, 0xd2742u);
    goto L_d2768;
L_d2744:
    X86_TICK(c, 9);
    // 0d2744  push 7
    X86_AT(c, 0xd2744u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2746  call 0xbb6b0
    X86_AT(c, 0xd2746u);
    push32(c, 0xd274bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd274bu);
    X86_TICK(c, 9);
    // 0d274b  push 1
    X86_AT(c, 0xd274bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d274d  call 0xb607c
    X86_AT(c, 0xd274du);
    push32(c, 0xd2752u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd2752u);
    X86_TICK(c, 11);
    // 0d2752  push 0xc828
    X86_AT(c, 0xd2752u);
    { uint32_t v = 0xC828u; push32(c, v); }
    // 0d2757  push 7
    X86_AT(c, 0xd2757u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2759  call 0xba428
    X86_AT(c, 0xd2759u);
    push32(c, 0xd275eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd275eu);
    X86_TICK(c, 9);
    // 0d275e  push 7
    X86_AT(c, 0xd275eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2760  call 0xbbb5c
    X86_AT(c, 0xd2760u);
    push32(c, 0xd2765u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2765u);
    X86_TICK(c, 2);
    // 0d2765  add esp, 0x14
    X86_AT(c, 0xd2765u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d2768:
    X86_TICK(c, 22);
    // 0d2768  pop edi
    X86_AT(c, 0xd2768u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2769  pop esi
    X86_AT(c, 0xd2769u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d276a  pop ebx
    X86_AT(c, 0xd276au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d276b  ret 
    X86_AT(c, 0xd276bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd260cu, "ran off the end of a function");
}
void f_000d276c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0d276c  push ebp
    X86_AT(c, 0xd276cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d276d  mov ebp, esp
    X86_AT(c, 0xd276du);
    c.r[5] = c.r[4];
    // 0d276f  push edi
    X86_AT(c, 0xd276fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2770  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd2770u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d2773  push 7
    X86_AT(c, 0xd2773u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2775  call 0xbb6b0
    X86_AT(c, 0xd2775u);
    push32(c, 0xd277au); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd277au);
    X86_TICK(c, 25);
    // 0d277a  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd277au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d277f  mov dword ptr [0xa4a66], eax
    X86_AT(c, 0xd277fu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), c.r[0]);
    // 0d2784  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd2784u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d2789  mov dword ptr [0xa4a6a], eax
    X86_AT(c, 0xd2789u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), c.r[0]);
    // 0d278e  mov dword ptr [0xa4a76], 6
    X86_AT(c, 0xd278eu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A76u)), 0x6u);
    // 0d2798  mov dword ptr [0xa4a7a], 0x20
    X86_AT(c, 0xd2798u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Au)), 0x20u);
    // 0d27a2  mov dword ptr [0x9c53c], 0xffffffff
    X86_AT(c, 0xd27a2u);
    wr32((c.sbase[3] + (uint32_t)(0x9C53Cu)), 0xFFFFFFFFu);
    // 0d27ac  call 0xb73c0
    X86_AT(c, 0xd27acu);
    push32(c, 0xd27b1u); x86_call_known(c, 0xb73c0u, f_000b73c0); X86_RET(c, 0xd27b1u);
    X86_TICK(c, 9);
    // 0d27b1  push 8
    X86_AT(c, 0xd27b1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d27b3  call 0xb84e0
    X86_AT(c, 0xd27b3u);
    push32(c, 0xd27b8u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xd27b8u);
    X86_TICK(c, 13);
    // 0d27b8  mov dword ptr [0xa4a56], 2
    X86_AT(c, 0xd27b8u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x2u);
    // 0d27c2  push 0xc83c
    X86_AT(c, 0xd27c2u);
    { uint32_t v = 0xC83Cu; push32(c, v); }
    // 0d27c7  push 7
    X86_AT(c, 0xd27c7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d27c9  call 0xba428
    X86_AT(c, 0xd27c9u);
    push32(c, 0xd27ceu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd27ceu);
    X86_TICK(c, 9);
    // 0d27ce  push 7
    X86_AT(c, 0xd27ceu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d27d0  call 0xbbb5c
    X86_AT(c, 0xd27d0u);
    push32(c, 0xd27d5u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd27d5u);
    X86_TICK(c, 9);
    // 0d27d5  push 7
    X86_AT(c, 0xd27d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d27d7  call 0xbb6b0
    X86_AT(c, 0xd27d7u);
    push32(c, 0xd27dcu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd27dcu);
    X86_TICK(c, 11);
    // 0d27dc  add esp, 0x18
    X86_AT(c, 0xd27dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d27df  lea edx, [edi - 1]
    X86_AT(c, 0xd27dfu);
    c.r[2] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0d27e2  cmp edx, 9
    X86_AT(c, 0xd27e2u);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0d27e5  ja 0xd28d6
    X86_AT(c, 0xd27e5u);
    if (x86_cc(c, 7)) { goto L_d28d6; }
    X86_TICK(c, 7);
    // 0d27eb  jmp dword ptr cs:[edx*4 + 0xd27f3]
    X86_AT(c, 0xd27ebu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD27F3u)));
      switch (t) {
      case 0xd281bu: goto L_d281b;
      case 0xd282fu: goto L_d282f;
      case 0xd2843u: goto L_d2843;
      case 0xd2857u: goto L_d2857;
      case 0xd2868u: goto L_d2868;
      case 0xd2879u: goto L_d2879;
      case 0xd288au: goto L_d288a;
      case 0xd289bu: goto L_d289b;
      case 0xd28acu: goto L_d28ac;
      case 0xd28bdu: goto L_d28bd;
      default: x86_jump(c, t); return; } }
L_d281b:
    X86_TICK(c, 9);
    // 0d281b  push 0xc84c
    X86_AT(c, 0xd281bu);
    { uint32_t v = 0xC84Cu; push32(c, v); }
    // 0d2820  call 0xbd018
    X86_AT(c, 0xd2820u);
    push32(c, 0xd2825u); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd2825u);
    X86_TICK(c, 9);
    // 0d2825  push 0xc85c
    X86_AT(c, 0xd2825u);
    { uint32_t v = 0xC85Cu; push32(c, v); }
    // 0d282a  jmp 0xd28cc
    X86_AT(c, 0xd282au);
    goto L_d28cc;
L_d282f:
    X86_TICK(c, 9);
    // 0d282f  push 0xc890
    X86_AT(c, 0xd282fu);
    { uint32_t v = 0xC890u; push32(c, v); }
    // 0d2834  call 0xbd018
    X86_AT(c, 0xd2834u);
    push32(c, 0xd2839u); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd2839u);
    X86_TICK(c, 9);
    // 0d2839  push 0xc8a0
    X86_AT(c, 0xd2839u);
    { uint32_t v = 0xC8A0u; push32(c, v); }
    // 0d283e  jmp 0xd28cc
    X86_AT(c, 0xd283eu);
    goto L_d28cc;
L_d2843:
    X86_TICK(c, 9);
    // 0d2843  push 0xc8cc
    X86_AT(c, 0xd2843u);
    { uint32_t v = 0xC8CCu; push32(c, v); }
    // 0d2848  call 0xbd018
    X86_AT(c, 0xd2848u);
    push32(c, 0xd284du); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd284du);
    X86_TICK(c, 9);
    // 0d284d  push 0xc8dc
    X86_AT(c, 0xd284du);
    { uint32_t v = 0xC8DCu; push32(c, v); }
    // 0d2852  jmp 0xd28cc
    X86_AT(c, 0xd2852u);
    goto L_d28cc;
L_d2857:
    X86_TICK(c, 9);
    // 0d2857  push 0xc904
    X86_AT(c, 0xd2857u);
    { uint32_t v = 0xC904u; push32(c, v); }
    // 0d285c  call 0xbd018
    X86_AT(c, 0xd285cu);
    push32(c, 0xd2861u); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd2861u);
    X86_TICK(c, 9);
    // 0d2861  push 0xc918
    X86_AT(c, 0xd2861u);
    { uint32_t v = 0xC918u; push32(c, v); }
    // 0d2866  jmp 0xd28cc
    X86_AT(c, 0xd2866u);
    goto L_d28cc;
L_d2868:
    X86_TICK(c, 9);
    // 0d2868  push 0xc954
    X86_AT(c, 0xd2868u);
    { uint32_t v = 0xC954u; push32(c, v); }
    // 0d286d  call 0xbd018
    X86_AT(c, 0xd286du);
    push32(c, 0xd2872u); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd2872u);
    X86_TICK(c, 9);
    // 0d2872  push 0xc968
    X86_AT(c, 0xd2872u);
    { uint32_t v = 0xC968u; push32(c, v); }
    // 0d2877  jmp 0xd28cc
    X86_AT(c, 0xd2877u);
    goto L_d28cc;
L_d2879:
    X86_TICK(c, 9);
    // 0d2879  push 0xc9a4
    X86_AT(c, 0xd2879u);
    { uint32_t v = 0xC9A4u; push32(c, v); }
    // 0d287e  call 0xbd018
    X86_AT(c, 0xd287eu);
    push32(c, 0xd2883u); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd2883u);
    X86_TICK(c, 9);
    // 0d2883  push 0xc9b4
    X86_AT(c, 0xd2883u);
    { uint32_t v = 0xC9B4u; push32(c, v); }
    // 0d2888  jmp 0xd28cc
    X86_AT(c, 0xd2888u);
    goto L_d28cc;
L_d288a:
    X86_TICK(c, 9);
    // 0d288a  push 0xc9d8
    X86_AT(c, 0xd288au);
    { uint32_t v = 0xC9D8u; push32(c, v); }
    // 0d288f  call 0xbd018
    X86_AT(c, 0xd288fu);
    push32(c, 0xd2894u); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd2894u);
    X86_TICK(c, 9);
    // 0d2894  push 0xc9e8
    X86_AT(c, 0xd2894u);
    { uint32_t v = 0xC9E8u; push32(c, v); }
    // 0d2899  jmp 0xd28cc
    X86_AT(c, 0xd2899u);
    goto L_d28cc;
L_d289b:
    X86_TICK(c, 9);
    // 0d289b  push 0xca10
    X86_AT(c, 0xd289bu);
    { uint32_t v = 0xCA10u; push32(c, v); }
    // 0d28a0  call 0xbd018
    X86_AT(c, 0xd28a0u);
    push32(c, 0xd28a5u); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd28a5u);
    X86_TICK(c, 9);
    // 0d28a5  push 0xca20
    X86_AT(c, 0xd28a5u);
    { uint32_t v = 0xCA20u; push32(c, v); }
    // 0d28aa  jmp 0xd28cc
    X86_AT(c, 0xd28aau);
    goto L_d28cc;
L_d28ac:
    X86_TICK(c, 9);
    // 0d28ac  push 0xca58
    X86_AT(c, 0xd28acu);
    { uint32_t v = 0xCA58u; push32(c, v); }
    // 0d28b1  call 0xbd018
    X86_AT(c, 0xd28b1u);
    push32(c, 0xd28b6u); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd28b6u);
    X86_TICK(c, 9);
    // 0d28b6  push 0xca68
    X86_AT(c, 0xd28b6u);
    { uint32_t v = 0xCA68u; push32(c, v); }
    // 0d28bb  jmp 0xd28cc
    X86_AT(c, 0xd28bbu);
    goto L_d28cc;
L_d28bd:
    X86_TICK(c, 9);
    // 0d28bd  push 0xcaa0
    X86_AT(c, 0xd28bdu);
    { uint32_t v = 0xCAA0u; push32(c, v); }
    // 0d28c2  call 0xbd018
    X86_AT(c, 0xd28c2u);
    push32(c, 0xd28c7u); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd28c7u);
    X86_TICK(c, 2);
    // 0d28c7  push 0xcab0
    X86_AT(c, 0xd28c7u);
    { uint32_t v = 0xCAB0u; push32(c, v); }
L_d28cc:
    X86_TICK(c, 9);
    // 0d28cc  push 7
    X86_AT(c, 0xd28ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d28ce  call 0xba428
    X86_AT(c, 0xd28ceu);
    push32(c, 0xd28d3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd28d3u);
    X86_TICK(c, 2);
    // 0d28d3  add esp, 0xc
    X86_AT(c, 0xd28d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d28d6:
    X86_TICK(c, 7);
    // 0d28d6  call 0xd2b00
    X86_AT(c, 0xd28d6u);
    push32(c, 0xd28dbu); x86_call_known(c, 0xd2b00u, f_000d2b00); X86_RET(c, 0xd28dbu);
    X86_TICK(c, 9);
    // 0d28db  push edi
    X86_AT(c, 0xd28dbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d28dc  call 0xd47b4
    X86_AT(c, 0xd28dcu);
    push32(c, 0xd28e1u); x86_call_known(c, 0xd47b4u, f_000d47b4); X86_RET(c, 0xd28e1u);
    X86_TICK(c, 9);
    // 0d28e1  push 7
    X86_AT(c, 0xd28e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d28e3  call 0xbbb5c
    X86_AT(c, 0xd28e3u);
    push32(c, 0xd28e8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd28e8u);
    X86_TICK(c, 17);
    // 0d28e8  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd28e8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d28ee  push dword ptr [0xa4a76]
    X86_AT(c, 0xd28eeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d28f4  call 0xb7aa0
    X86_AT(c, 0xd28f4u);
    push32(c, 0xd28f9u); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xd28f9u);
    X86_TICK(c, 7);
    // 0d28f9  call 0xb7818
    X86_AT(c, 0xd28f9u);
    push32(c, 0xd28feu); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xd28feu);
    X86_TICK(c, 9);
    // 0d28fe  push 1
    X86_AT(c, 0xd28feu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2900  call 0xb61d4
    X86_AT(c, 0xd2900u);
    push32(c, 0xd2905u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd2905u);
    X86_TICK(c, 22);
    // 0d2905  add esp, 0x14
    X86_AT(c, 0xd2905u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d2908  pop edi
    X86_AT(c, 0xd2908u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2909  leave 
    X86_AT(c, 0xd2909u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d290a  ret 
    X86_AT(c, 0xd290au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd276cu, "ran off the end of a function");
}
void f_000d28cc(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d28cc  push 7
    X86_AT(c, 0xd28ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d28ce  call 0xba428
    X86_AT(c, 0xd28ceu);
    push32(c, 0xd28d3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd28d3u);
    X86_TICK(c, 9);
    // 0d28d3  add esp, 0xc
    X86_AT(c, 0xd28d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d28d6  call 0xd2b00
    X86_AT(c, 0xd28d6u);
    push32(c, 0xd28dbu); x86_call_known(c, 0xd2b00u, f_000d2b00); X86_RET(c, 0xd28dbu);
    X86_TICK(c, 9);
    // 0d28db  push edi
    X86_AT(c, 0xd28dbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d28dc  call 0xd47b4
    X86_AT(c, 0xd28dcu);
    push32(c, 0xd28e1u); x86_call_known(c, 0xd47b4u, f_000d47b4); X86_RET(c, 0xd28e1u);
    X86_TICK(c, 9);
    // 0d28e1  push 7
    X86_AT(c, 0xd28e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d28e3  call 0xbbb5c
    X86_AT(c, 0xd28e3u);
    push32(c, 0xd28e8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd28e8u);
    X86_TICK(c, 17);
    // 0d28e8  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd28e8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d28ee  push dword ptr [0xa4a76]
    X86_AT(c, 0xd28eeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d28f4  call 0xb7aa0
    X86_AT(c, 0xd28f4u);
    push32(c, 0xd28f9u); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xd28f9u);
    X86_TICK(c, 7);
    // 0d28f9  call 0xb7818
    X86_AT(c, 0xd28f9u);
    push32(c, 0xd28feu); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xd28feu);
    X86_TICK(c, 9);
    // 0d28fe  push 1
    X86_AT(c, 0xd28feu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2900  call 0xb61d4
    X86_AT(c, 0xd2900u);
    push32(c, 0xd2905u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd2905u);
    X86_TICK(c, 22);
    // 0d2905  add esp, 0x14
    X86_AT(c, 0xd2905u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d2908  pop edi
    X86_AT(c, 0xd2908u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2909  leave 
    X86_AT(c, 0xd2909u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d290a  ret 
    X86_AT(c, 0xd290au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd28ccu, "ran off the end of a function");
}
void f_000d290c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0d290c  push ebp
    X86_AT(c, 0xd290cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d290d  mov ebp, esp
    X86_AT(c, 0xd290du);
    c.r[5] = c.r[4];
    // 0d290f  sub esp, 8
    X86_AT(c, 0xd290fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d2912  push ebx
    X86_AT(c, 0xd2912u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2913  push esi
    X86_AT(c, 0xd2913u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2914  push edi
    X86_AT(c, 0xd2914u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2915  mov ebx, 0xffffffff
    X86_AT(c, 0xd2915u);
    c.r[3] = 0xFFFFFFFFu;
    // 0d291a  cmp dword ptr [0xa4a56], 3
    X86_AT(c, 0xd291au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x3u, 0, 4);
    // 0d2921  jne 0xd2925
    X86_AT(c, 0xd2921u);
    if (x86_cc(c, 5)) { goto L_d2925; }
    X86_TICK(c, 2);
    // 0d2923  sub ebx, ebx
    X86_AT(c, 0xd2923u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_d2925:
    X86_TICK(c, 27);
    // 0d2925  sub eax, eax
    X86_AT(c, 0xd2925u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d2927  mov dword ptr [0xa4a56], eax
    X86_AT(c, 0xd2927u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), c.r[0]);
    // 0d292c  mov edx, dword ptr [0xa4a66]
    X86_AT(c, 0xd292cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA4A66u)));
    // 0d2932  mov dword ptr [0xa4a76], edx
    X86_AT(c, 0xd2932u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A76u)), c.r[2]);
    // 0d2938  mov edx, dword ptr [0xa4a6a]
    X86_AT(c, 0xd2938u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA4A6Au)));
    // 0d293e  mov dword ptr [0xa4a7a], edx
    X86_AT(c, 0xd293eu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Au)), c.r[2]);
    // 0d2944  mov dword ptr [0x9c53c], eax
    X86_AT(c, 0xd2944u);
    wr32((c.sbase[3] + (uint32_t)(0x9C53Cu)), c.r[0]);
    // 0d2949  push eax
    X86_AT(c, 0xd2949u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d294a  call 0xb84e0
    X86_AT(c, 0xd294au);
    push32(c, 0xd294fu); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xd294fu);
    X86_TICK(c, 9);
    // 0d294f  push 0xcad4
    X86_AT(c, 0xd294fu);
    { uint32_t v = 0xCAD4u; push32(c, v); }
    // 0d2954  call 0xbd018
    X86_AT(c, 0xd2954u);
    push32(c, 0xd2959u); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd2959u);
    X86_TICK(c, 29);
    // 0d2959  mov byte ptr [0x8bcf2], 8
    X86_AT(c, 0xd2959u);
    wr8((c.sbase[3] + (uint32_t)(0x8BCF2u)), 0x8u);
    // 0d2960  mov edi, dword ptr [0xa6058]
    X86_AT(c, 0xd2960u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xA6058u)));
    // 0d2966  mov esi, dword ptr [0xa605c]
    X86_AT(c, 0xd2966u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xA605Cu)));
    // 0d296c  mov eax, dword ptr [0xa6060]
    X86_AT(c, 0xd296cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6060u)));
    // 0d2971  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd2971u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d2974  mov ecx, dword ptr [0xa6064]
    X86_AT(c, 0xd2974u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xA6064u)));
    // 0d297a  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0xd297au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0d297d  call 0xd2b18
    X86_AT(c, 0xd297du);
    push32(c, 0xd2982u); x86_call_known(c, 0xd2b18u, f_000d2b18); X86_RET(c, 0xd2982u);
    X86_TICK(c, 23);
    // 0d2982  mov dword ptr [0xa6058], edi
    X86_AT(c, 0xd2982u);
    wr32((c.sbase[3] + (uint32_t)(0xA6058u)), c.r[7]);
    // 0d2988  mov dword ptr [0xa605c], esi
    X86_AT(c, 0xd2988u);
    wr32((c.sbase[3] + (uint32_t)(0xA605Cu)), c.r[6]);
    // 0d298e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd298eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d2991  mov dword ptr [0xa6060], eax
    X86_AT(c, 0xd2991u);
    wr32((c.sbase[3] + (uint32_t)(0xA6060u)), c.r[0]);
    // 0d2996  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd2996u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d2999  mov dword ptr [0xa6064], eax
    X86_AT(c, 0xd2999u);
    wr32((c.sbase[3] + (uint32_t)(0xA6064u)), c.r[0]);
    // 0d299e  call 0xb8d28
    X86_AT(c, 0xd299eu);
    push32(c, 0xd29a3u); x86_call_known(c, 0xb8d28u, f_000b8d28); X86_RET(c, 0xd29a3u);
    X86_TICK(c, 7);
    // 0d29a3  call 0xb75c0
    X86_AT(c, 0xd29a3u);
    push32(c, 0xd29a8u); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xd29a8u);
    X86_TICK(c, 7);
    // 0d29a8  call 0xb7818
    X86_AT(c, 0xd29a8u);
    push32(c, 0xd29adu); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xd29adu);
    X86_TICK(c, 9);
    // 0d29ad  push 1
    X86_AT(c, 0xd29adu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d29af  call 0xb61d4
    X86_AT(c, 0xd29afu);
    push32(c, 0xd29b4u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd29b4u);
    X86_TICK(c, 30);
    // 0d29b4  add esp, 0xc
    X86_AT(c, 0xd29b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d29b7  pop edi
    X86_AT(c, 0xd29b7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d29b8  pop esi
    X86_AT(c, 0xd29b8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d29b9  pop ebx
    X86_AT(c, 0xd29b9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d29ba  leave 
    X86_AT(c, 0xd29bau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d29bb  ret 
    X86_AT(c, 0xd29bbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd290cu, "ran off the end of a function");
}
void f_000d29bc(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0d29bc  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd29bcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d29c1  mov dword ptr [0xa4a66], eax
    X86_AT(c, 0xd29c1u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), c.r[0]);
    // 0d29c6  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd29c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d29cb  mov dword ptr [0xa4a6a], eax
    X86_AT(c, 0xd29cbu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), c.r[0]);
    // 0d29d0  mov dword ptr [0xa4a76], 0x20
    X86_AT(c, 0xd29d0u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A76u)), 0x20u);
    // 0d29da  mov dword ptr [0xa4a7a], 0x3b
    X86_AT(c, 0xd29dau);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Au)), 0x3Bu);
    // 0d29e4  mov dword ptr [0x9c53c], 0xffffffff
    X86_AT(c, 0xd29e4u);
    wr32((c.sbase[3] + (uint32_t)(0x9C53Cu)), 0xFFFFFFFFu);
    // 0d29ee  call 0xb73c0
    X86_AT(c, 0xd29eeu);
    push32(c, 0xd29f3u); x86_call_known(c, 0xb73c0u, f_000b73c0); X86_RET(c, 0xd29f3u);
    X86_TICK(c, 9);
    // 0d29f3  push 6
    X86_AT(c, 0xd29f3u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d29f5  call 0xb84e0
    X86_AT(c, 0xd29f5u);
    push32(c, 0xd29fau); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xd29fau);
    X86_TICK(c, 11);
    // 0d29fa  mov dword ptr [0xa4a56], 2
    X86_AT(c, 0xd29fau);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x2u);
    // 0d2a04  push 0xcae8
    X86_AT(c, 0xd2a04u);
    { uint32_t v = 0xCAE8u; push32(c, v); }
    // 0d2a09  call 0xbd018
    X86_AT(c, 0xd2a09u);
    push32(c, 0xd2a0eu); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd2a0eu);
    X86_TICK(c, 9);
    // 0d2a0e  push 7
    X86_AT(c, 0xd2a0eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2a10  call 0xbb6b0
    X86_AT(c, 0xd2a10u);
    push32(c, 0xd2a15u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2a15u);
    X86_TICK(c, 11);
    // 0d2a15  push 0xcafc
    X86_AT(c, 0xd2a15u);
    { uint32_t v = 0xCAFCu; push32(c, v); }
    // 0d2a1a  push 7
    X86_AT(c, 0xd2a1au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2a1c  call 0xba428
    X86_AT(c, 0xd2a1cu);
    push32(c, 0xd2a21u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2a21u);
    X86_TICK(c, 9);
    // 0d2a21  push 7
    X86_AT(c, 0xd2a21u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2a23  call 0xbbb5c
    X86_AT(c, 0xd2a23u);
    push32(c, 0xd2a28u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2a28u);
    X86_TICK(c, 9);
    // 0d2a28  push 7
    X86_AT(c, 0xd2a28u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2a2a  call 0xbb6b0
    X86_AT(c, 0xd2a2au);
    push32(c, 0xd2a2fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2a2fu);
    X86_TICK(c, 7);
    // 0d2a2f  call 0xd2b00
    X86_AT(c, 0xd2a2fu);
    push32(c, 0xd2a34u); x86_call_known(c, 0xd2b00u, f_000d2b00); X86_RET(c, 0xd2a34u);
    X86_TICK(c, 9);
    // 0d2a34  push 0
    X86_AT(c, 0xd2a34u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2a36  call 0xd47b4
    X86_AT(c, 0xd2a36u);
    push32(c, 0xd2a3bu); x86_call_known(c, 0xd47b4u, f_000d47b4); X86_RET(c, 0xd2a3bu);
    X86_TICK(c, 17);
    // 0d2a3b  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd2a3bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d2a41  push dword ptr [0xa4a76]
    X86_AT(c, 0xd2a41u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d2a47  call 0xb7aa0
    X86_AT(c, 0xd2a47u);
    push32(c, 0xd2a4cu); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xd2a4cu);
    X86_TICK(c, 7);
    // 0d2a4c  call 0xb7818
    X86_AT(c, 0xd2a4cu);
    push32(c, 0xd2a51u); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xd2a51u);
    X86_TICK(c, 9);
    // 0d2a51  push 1
    X86_AT(c, 0xd2a51u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2a53  call 0xb61d4
    X86_AT(c, 0xd2a53u);
    push32(c, 0xd2a58u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd2a58u);
    X86_TICK(c, 12);
    // 0d2a58  add esp, 0x2c
    X86_AT(c, 0xd2a58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d2a5b  ret 
    X86_AT(c, 0xd2a5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd29bcu, "ran off the end of a function");
}
void f_000d2a5c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d2a5c  push 7
    X86_AT(c, 0xd2a5cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2a5e  call 0xbb6b0
    X86_AT(c, 0xd2a5eu);
    push32(c, 0xd2a63u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2a63u);
    X86_TICK(c, 27);
    // 0d2a63  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd2a63u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d2a68  mov dword ptr [0xa4a66], eax
    X86_AT(c, 0xd2a68u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), c.r[0]);
    // 0d2a6d  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd2a6du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d2a72  mov dword ptr [0xa4a6a], eax
    X86_AT(c, 0xd2a72u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), c.r[0]);
    // 0d2a77  mov dword ptr [0xa4a76], 0x20
    X86_AT(c, 0xd2a77u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A76u)), 0x20u);
    // 0d2a81  mov dword ptr [0xa4a7a], 0x3e
    X86_AT(c, 0xd2a81u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Au)), 0x3Eu);
    // 0d2a8b  mov dword ptr [0x9c53c], 0xffffffff
    X86_AT(c, 0xd2a8bu);
    wr32((c.sbase[3] + (uint32_t)(0x9C53Cu)), 0xFFFFFFFFu);
    // 0d2a95  mov dword ptr [0xa4a56], 3
    X86_AT(c, 0xd2a95u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x3u);
    // 0d2a9f  call 0xb73c0
    X86_AT(c, 0xd2a9fu);
    push32(c, 0xd2aa4u); x86_call_known(c, 0xb73c0u, f_000b73c0); X86_RET(c, 0xd2aa4u);
    X86_TICK(c, 9);
    // 0d2aa4  push 0xcb1c
    X86_AT(c, 0xd2aa4u);
    { uint32_t v = 0xCB1Cu; push32(c, v); }
    // 0d2aa9  call 0xbd018
    X86_AT(c, 0xd2aa9u);
    push32(c, 0xd2aaeu); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd2aaeu);
    X86_TICK(c, 11);
    // 0d2aae  push 0xcb2c
    X86_AT(c, 0xd2aaeu);
    { uint32_t v = 0xCB2Cu; push32(c, v); }
    // 0d2ab3  push 7
    X86_AT(c, 0xd2ab3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2ab5  call 0xba428
    X86_AT(c, 0xd2ab5u);
    push32(c, 0xd2abau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2abau);
    X86_TICK(c, 9);
    // 0d2aba  push 7
    X86_AT(c, 0xd2abau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2abc  call 0xbbb5c
    X86_AT(c, 0xd2abcu);
    push32(c, 0xd2ac1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2ac1u);
    X86_TICK(c, 9);
    // 0d2ac1  push 3
    X86_AT(c, 0xd2ac1u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d2ac3  call 0xb84e0
    X86_AT(c, 0xd2ac3u);
    push32(c, 0xd2ac8u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xd2ac8u);
    X86_TICK(c, 7);
    // 0d2ac8  call 0xd2b00
    X86_AT(c, 0xd2ac8u);
    push32(c, 0xd2acdu); x86_call_known(c, 0xd2b00u, f_000d2b00); X86_RET(c, 0xd2acdu);
    X86_TICK(c, 9);
    // 0d2acd  push 0xffffffff
    X86_AT(c, 0xd2acdu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d2acf  call 0xd47b4
    X86_AT(c, 0xd2acfu);
    push32(c, 0xd2ad4u); x86_call_known(c, 0xd47b4u, f_000d47b4); X86_RET(c, 0xd2ad4u);
    X86_TICK(c, 17);
    // 0d2ad4  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd2ad4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d2ada  push dword ptr [0xa4a76]
    X86_AT(c, 0xd2adau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d2ae0  call 0xb7aa0
    X86_AT(c, 0xd2ae0u);
    push32(c, 0xd2ae5u); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xd2ae5u);
    X86_TICK(c, 9);
    // 0d2ae5  mov word ptr [0xaef90], 0
    X86_AT(c, 0xd2ae5u);
    wr16((c.sbase[3] + (uint32_t)(0xAEF90u)), 0x0u);
    // 0d2aee  call 0xb7818
    X86_AT(c, 0xd2aeeu);
    push32(c, 0xd2af3u); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xd2af3u);
    X86_TICK(c, 9);
    // 0d2af3  push 1
    X86_AT(c, 0xd2af3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2af5  call 0xb61d4
    X86_AT(c, 0xd2af5u);
    push32(c, 0xd2afau); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd2afau);
    X86_TICK(c, 12);
    // 0d2afa  add esp, 0x28
    X86_AT(c, 0xd2afau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d2afd  ret 
    X86_AT(c, 0xd2afdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2a5cu, "ran off the end of a function");
}
void f_000d2b00(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0d2b00  push esi
    X86_AT(c, 0xd2b00u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2b01  push edi
    X86_AT(c, 0xd2b01u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2b02  mov esi, 0xa5ce8
    X86_AT(c, 0xd2b02u);
    c.r[6] = 0xA5CE8u;
    // 0d2b07  mov edi, 0xb0550
    X86_AT(c, 0xd2b07u);
    c.r[7] = 0xB0550u;
    // 0d2b0c  mov ecx, 0x113
    X86_AT(c, 0xd2b0cu);
    c.r[1] = 0x113u;
    // 0d2b11  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xd2b11u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0d2b13  pop edi
    X86_AT(c, 0xd2b13u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2b14  pop esi
    X86_AT(c, 0xd2b14u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2b15  ret 
    X86_AT(c, 0xd2b15u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2b00u, "ran off the end of a function");
}
void f_000d2b18(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0d2b18  push esi
    X86_AT(c, 0xd2b18u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2b19  push edi
    X86_AT(c, 0xd2b19u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2b1a  mov esi, 0xb0550
    X86_AT(c, 0xd2b1au);
    c.r[6] = 0xB0550u;
    // 0d2b1f  mov edi, 0xa5ce8
    X86_AT(c, 0xd2b1fu);
    c.r[7] = 0xA5CE8u;
    // 0d2b24  mov ecx, 0x113
    X86_AT(c, 0xd2b24u);
    c.r[1] = 0x113u;
    // 0d2b29  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xd2b29u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0d2b2b  pop edi
    X86_AT(c, 0xd2b2bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2b2c  pop esi
    X86_AT(c, 0xd2b2cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2b2d  ret 
    X86_AT(c, 0xd2b2du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2b18u, "ran off the end of a function");
}
void f_000d2b30(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d2b30  push esi
    X86_AT(c, 0xd2b30u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2b31  push edi
    X86_AT(c, 0xd2b31u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2b32  push 7
    X86_AT(c, 0xd2b32u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2b34  call 0xbb6b0
    X86_AT(c, 0xd2b34u);
    push32(c, 0xd2b39u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2b39u);
    X86_TICK(c, 11);
    // 0d2b39  push 0xcb58
    X86_AT(c, 0xd2b39u);
    { uint32_t v = 0xCB58u; push32(c, v); }
    // 0d2b3e  push 7
    X86_AT(c, 0xd2b3eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2b40  call 0xba428
    X86_AT(c, 0xd2b40u);
    push32(c, 0xd2b45u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2b45u);
    X86_TICK(c, 11);
    // 0d2b45  push 0
    X86_AT(c, 0xd2b45u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2b47  push 7
    X86_AT(c, 0xd2b47u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2b49  call 0xb6f28
    X86_AT(c, 0xd2b49u);
    push32(c, 0xd2b4eu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd2b4eu);
    X86_TICK(c, 12);
    // 0d2b4e  xchg edi, eax
    X86_AT(c, 0xd2b4eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d2b4f  push 7
    X86_AT(c, 0xd2b4fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2b51  call 0xbb6b0
    X86_AT(c, 0xd2b51u);
    push32(c, 0xd2b56u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2b56u);
    X86_TICK(c, 9);
    // 0d2b56  add esp, 0x18
    X86_AT(c, 0xd2b56u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d2b59  cmp edi, 0xffffffff
    X86_AT(c, 0xd2b59u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d2b5c  jne 0xd2b65
    X86_AT(c, 0xd2b5cu);
    if (x86_cc(c, 5)) { goto L_d2b65; }
    X86_TICK(c, 9);
    // 0d2b5e  push 0xcbac
    X86_AT(c, 0xd2b5eu);
    { uint32_t v = 0xCBACu; push32(c, v); }
    // 0d2b63  jmp 0xd2b96
    X86_AT(c, 0xd2b63u);
    goto L_d2b96;
L_d2b65:
    X86_TICK(c, 9);
    // 0d2b65  push 7
    X86_AT(c, 0xd2b65u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2b67  call 0xbbb5c
    X86_AT(c, 0xd2b67u);
    push32(c, 0xd2b6cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2b6cu);
    X86_TICK(c, 11);
    // 0d2b6c  push 0xcbc4
    X86_AT(c, 0xd2b6cu);
    { uint32_t v = 0xCBC4u; push32(c, v); }
    // 0d2b71  push 7
    X86_AT(c, 0xd2b71u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2b73  call 0xba428
    X86_AT(c, 0xd2b73u);
    push32(c, 0xd2b78u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2b78u);
    X86_TICK(c, 11);
    // 0d2b78  push 0
    X86_AT(c, 0xd2b78u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2b7a  push 7
    X86_AT(c, 0xd2b7au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2b7c  call 0xb6f28
    X86_AT(c, 0xd2b7cu);
    push32(c, 0xd2b81u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd2b81u);
    X86_TICK(c, 12);
    // 0d2b81  xchg esi, eax
    X86_AT(c, 0xd2b81u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d2b82  push 7
    X86_AT(c, 0xd2b82u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2b84  call 0xbb6b0
    X86_AT(c, 0xd2b84u);
    push32(c, 0xd2b89u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2b89u);
    X86_TICK(c, 9);
    // 0d2b89  add esp, 0x18
    X86_AT(c, 0xd2b89u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d2b8c  cmp edi, 0xffffffff
    X86_AT(c, 0xd2b8cu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d2b8f  jne 0xd2ba6
    X86_AT(c, 0xd2b8fu);
    if (x86_cc(c, 5)) { goto L_d2ba6; }
    X86_TICK(c, 2);
    // 0d2b91  push 0xcbe8
    X86_AT(c, 0xd2b91u);
    { uint32_t v = 0xCBE8u; push32(c, v); }
L_d2b96:
    X86_TICK(c, 9);
    // 0d2b96  push 7
    X86_AT(c, 0xd2b96u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2b98  call 0xba428
    X86_AT(c, 0xd2b98u);
    push32(c, 0xd2b9du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2b9du);
    X86_TICK(c, 9);
    // 0d2b9d  push 7
    X86_AT(c, 0xd2b9du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2b9f  call 0xbbb5c
    X86_AT(c, 0xd2b9fu);
    push32(c, 0xd2ba4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2ba4u);
    X86_TICK(c, 7);
    // 0d2ba4  jmp 0xd2bb4
    X86_AT(c, 0xd2ba4u);
    goto L_d2bb4;
L_d2ba6:
    X86_TICK(c, 9);
    // 0d2ba6  push 7
    X86_AT(c, 0xd2ba6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2ba8  call 0xbbb5c
    X86_AT(c, 0xd2ba8u);
    push32(c, 0xd2badu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2badu);
    X86_TICK(c, 11);
    // 0d2bad  push esi
    X86_AT(c, 0xd2badu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2bae  push edi
    X86_AT(c, 0xd2baeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2baf  call 0xcc140
    X86_AT(c, 0xd2bafu);
    push32(c, 0xd2bb4u); x86_call_known(c, 0xcc140u, f_000cc140); X86_RET(c, 0xd2bb4u);
L_d2bb4:
    X86_TICK(c, 20);
    // 0d2bb4  add esp, 0xc
    X86_AT(c, 0xd2bb4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2bb7  pop edi
    X86_AT(c, 0xd2bb7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2bb8  pop esi
    X86_AT(c, 0xd2bb8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2bb9  ret 
    X86_AT(c, 0xd2bb9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2b30u, "ran off the end of a function");
}
void f_000d2bbc(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d2bbc  push ebp
    X86_AT(c, 0xd2bbcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d2bbd  mov ebp, esp
    X86_AT(c, 0xd2bbdu);
    c.r[5] = c.r[4];
    // 0d2bbf  sub esp, 0xc
    X86_AT(c, 0xd2bbfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0d2bc2  push ebx
    X86_AT(c, 0xd2bc2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2bc3  push esi
    X86_AT(c, 0xd2bc3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2bc4  push edi
    X86_AT(c, 0xd2bc4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2bc5  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd2bc5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d2bcc  push 7
    X86_AT(c, 0xd2bccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2bce  call 0xbb6b0
    X86_AT(c, 0xd2bceu);
    push32(c, 0xd2bd3u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2bd3u);
    X86_TICK(c, 11);
    // 0d2bd3  push 0xcc00
    X86_AT(c, 0xd2bd3u);
    { uint32_t v = 0xCC00u; push32(c, v); }
    // 0d2bd8  push 7
    X86_AT(c, 0xd2bd8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2bda  call 0xba428
    X86_AT(c, 0xd2bdau);
    push32(c, 0xd2bdfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2bdfu);
    X86_TICK(c, 9);
    // 0d2bdf  push 7
    X86_AT(c, 0xd2bdfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2be1  call 0xb7068
    X86_AT(c, 0xd2be1u);
    push32(c, 0xd2be6u); x86_call_known(c, 0xb7068u, f_000b7068); X86_RET(c, 0xd2be6u);
    X86_TICK(c, 11);
    // 0d2be6  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd2be6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d2be9  add esp, 0x10
    X86_AT(c, 0xd2be9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d2bec  inc eax
    X86_AT(c, 0xd2becu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d2bed  jne 0xd2c07
    X86_AT(c, 0xd2bedu);
    if (x86_cc(c, 5)) { goto L_d2c07; }
    X86_TICK(c, 11);
    // 0d2bef  push 0xcc14
    X86_AT(c, 0xd2befu);
    { uint32_t v = 0xCC14u; push32(c, v); }
    // 0d2bf4  push 7
    X86_AT(c, 0xd2bf4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2bf6  call 0xba428
    X86_AT(c, 0xd2bf6u);
    push32(c, 0xd2bfbu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2bfbu);
    X86_TICK(c, 9);
    // 0d2bfb  push 7
    X86_AT(c, 0xd2bfbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2bfd  call 0xbbb5c
    X86_AT(c, 0xd2bfdu);
    push32(c, 0xd2c02u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2c02u);
    X86_TICK(c, 9);
    // 0d2c02  add esp, 0xc
    X86_AT(c, 0xd2c02u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2c05  jmp 0xd2c5b
    X86_AT(c, 0xd2c05u);
    goto L_d2c5b;
L_d2c07:
    X86_TICK(c, 34);
    // 0d2c07  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd2c07u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d2c0c  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd2c0cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d2c0f  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd2c0fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d2c14  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd2c14u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d2c17  push 1
    X86_AT(c, 0xd2c17u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2c19  push dword ptr [ebp - 4]
    X86_AT(c, 0xd2c19u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d2c1c  lea esi, [ebp - 0xc]
    X86_AT(c, 0xd2c1cu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0d2c1f  push esi
    X86_AT(c, 0xd2c1fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2c20  lea edi, [ebp - 8]
    X86_AT(c, 0xd2c20u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d2c23  push edi
    X86_AT(c, 0xd2c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2c24  call 0xc7248
    X86_AT(c, 0xd2c24u);
    push32(c, 0xd2c29u); x86_call_known(c, 0xc7248u, f_000c7248); X86_RET(c, 0xd2c29u);
    X86_TICK(c, 17);
    // 0d2c29  push dword ptr [esi]
    X86_AT(c, 0xd2c29u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0d2c2b  push dword ptr [edi]
    X86_AT(c, 0xd2c2bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0d2c2d  call 0xc8474
    X86_AT(c, 0xd2c2du);
    push32(c, 0xd2c32u); x86_call_known(c, 0xc8474u, f_000c8474); X86_RET(c, 0xd2c32u);
    X86_TICK(c, 14);
    // 0d2c32  xchg ebx, eax
    X86_AT(c, 0xd2c32u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d2c33  push 0xcc2c
    X86_AT(c, 0xd2c33u);
    { uint32_t v = 0xCC2Cu; push32(c, v); }
    // 0d2c38  push 7
    X86_AT(c, 0xd2c38u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2c3a  call 0xbbba4
    X86_AT(c, 0xd2c3au);
    push32(c, 0xd2c3fu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd2c3fu);
    X86_TICK(c, 13);
    // 0d2c3f  lea esi, [ebp - 4]
    X86_AT(c, 0xd2c3fu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d2c42  push esi
    X86_AT(c, 0xd2c42u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2c43  push ebx
    X86_AT(c, 0xd2c43u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2c44  call 0xc98d8
    X86_AT(c, 0xd2c44u);
    push32(c, 0xd2c49u); x86_call_known(c, 0xc98d8u, f_000c98d8); X86_RET(c, 0xd2c49u);
    X86_TICK(c, 11);
    // 0d2c49  push eax
    X86_AT(c, 0xd2c49u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2c4a  push 7
    X86_AT(c, 0xd2c4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2c4c  call 0xbbba4
    X86_AT(c, 0xd2c4cu);
    push32(c, 0xd2c51u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd2c51u);
    X86_TICK(c, 9);
    // 0d2c51  push 7
    X86_AT(c, 0xd2c51u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2c53  call 0xbbb5c
    X86_AT(c, 0xd2c53u);
    push32(c, 0xd2c58u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2c58u);
    X86_TICK(c, 2);
    // 0d2c58  add esp, 0x34
    X86_AT(c, 0xd2c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
L_d2c5b:
    X86_TICK(c, 28);
    // 0d2c5b  pop edi
    X86_AT(c, 0xd2c5bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2c5c  pop esi
    X86_AT(c, 0xd2c5cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2c5d  pop ebx
    X86_AT(c, 0xd2c5du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d2c5e  leave 
    X86_AT(c, 0xd2c5eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d2c5f  ret 
    X86_AT(c, 0xd2c5fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2bbcu, "ran off the end of a function");
}
void f_000d2c60(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d2c60  push ebp
    X86_AT(c, 0xd2c60u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d2c61  mov ebp, esp
    X86_AT(c, 0xd2c61u);
    c.r[5] = c.r[4];
    // 0d2c63  sub esp, 0xc4
    X86_AT(c, 0xd2c63u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xC4u, 0, 4); }
    // 0d2c69  push ebx
    X86_AT(c, 0xd2c69u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2c6a  push esi
    X86_AT(c, 0xd2c6au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2c6b  push edi
    X86_AT(c, 0xd2c6bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2c6c  push 7
    X86_AT(c, 0xd2c6cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2c6e  call 0xbb6b0
    X86_AT(c, 0xd2c6eu);
    push32(c, 0xd2c73u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2c73u);
    X86_TICK(c, 11);
    // 0d2c73  push 0xcc34
    X86_AT(c, 0xd2c73u);
    { uint32_t v = 0xCC34u; push32(c, v); }
    // 0d2c78  push 7
    X86_AT(c, 0xd2c78u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2c7a  call 0xba428
    X86_AT(c, 0xd2c7au);
    push32(c, 0xd2c7fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2c7fu);
    X86_TICK(c, 11);
    // 0d2c7f  push 0xffffffff
    X86_AT(c, 0xd2c7fu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d2c81  push 7
    X86_AT(c, 0xd2c81u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2c83  call 0xb6f28
    X86_AT(c, 0xd2c83u);
    push32(c, 0xd2c88u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd2c88u);
    X86_TICK(c, 12);
    // 0d2c88  xchg edi, eax
    X86_AT(c, 0xd2c88u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d2c89  push 7
    X86_AT(c, 0xd2c89u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2c8b  call 0xbb6b0
    X86_AT(c, 0xd2c8bu);
    push32(c, 0xd2c90u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2c90u);
    X86_TICK(c, 9);
    // 0d2c90  add esp, 0x18
    X86_AT(c, 0xd2c90u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d2c93  cmp edi, 0xffffffff
    X86_AT(c, 0xd2c93u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d2c96  jne 0xd2ca2
    X86_AT(c, 0xd2c96u);
    if (x86_cc(c, 5)) { goto L_d2ca2; }
    X86_TICK(c, 9);
    // 0d2c98  push 0xcc98
    X86_AT(c, 0xd2c98u);
    { uint32_t v = 0xCC98u; push32(c, v); }
    // 0d2c9d  jmp 0xd2d9c
    X86_AT(c, 0xd2c9du);
    goto L_d2d9c;
L_d2ca2:
    X86_TICK(c, 9);
    // 0d2ca2  push 7
    X86_AT(c, 0xd2ca2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2ca4  call 0xbbb5c
    X86_AT(c, 0xd2ca4u);
    push32(c, 0xd2ca9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2ca9u);
    X86_TICK(c, 2);
    // 0d2ca9  add esp, 4
    X86_AT(c, 0xd2ca9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d2cac:
    X86_TICK(c, 11);
    // 0d2cac  push 0xccb0
    X86_AT(c, 0xd2cacu);
    { uint32_t v = 0xCCB0u; push32(c, v); }
    // 0d2cb1  push 7
    X86_AT(c, 0xd2cb1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2cb3  call 0xba428
    X86_AT(c, 0xd2cb3u);
    push32(c, 0xd2cb8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2cb8u);
    X86_TICK(c, 11);
    // 0d2cb8  push 0xffffffff
    X86_AT(c, 0xd2cb8u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d2cba  push 7
    X86_AT(c, 0xd2cbau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2cbc  call 0xb6f28
    X86_AT(c, 0xd2cbcu);
    push32(c, 0xd2cc1u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd2cc1u);
    X86_TICK(c, 12);
    // 0d2cc1  xchg esi, eax
    X86_AT(c, 0xd2cc1u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d2cc2  push 7
    X86_AT(c, 0xd2cc2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2cc4  call 0xbb6b0
    X86_AT(c, 0xd2cc4u);
    push32(c, 0xd2cc9u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2cc9u);
    X86_TICK(c, 9);
    // 0d2cc9  add esp, 0x14
    X86_AT(c, 0xd2cc9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d2ccc  cmp esi, 0xffffffff
    X86_AT(c, 0xd2cccu);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0d2ccf  jne 0xd2cdb
    X86_AT(c, 0xd2ccfu);
    if (x86_cc(c, 5)) { goto L_d2cdb; }
    X86_TICK(c, 9);
    // 0d2cd1  push 0xcce4
    X86_AT(c, 0xd2cd1u);
    { uint32_t v = 0xCCE4u; push32(c, v); }
    // 0d2cd6  jmp 0xd2d9c
    X86_AT(c, 0xd2cd6u);
    goto L_d2d9c;
L_d2cdb:
    X86_TICK(c, 9);
    // 0d2cdb  push 7
    X86_AT(c, 0xd2cdbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2cdd  call 0xbbb5c
    X86_AT(c, 0xd2cddu);
    push32(c, 0xd2ce2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2ce2u);
    X86_TICK(c, 9);
    // 0d2ce2  add esp, 4
    X86_AT(c, 0xd2ce2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d2ce5  cmp esi, edi
    X86_AT(c, 0xd2ce5u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0d2ce7  jne 0xd2d08
    X86_AT(c, 0xd2ce7u);
    if (x86_cc(c, 5)) { goto L_d2d08; }
    X86_TICK(c, 9);
    // 0d2ce9  push 3
    X86_AT(c, 0xd2ce9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d2ceb  call 0xb607c
    X86_AT(c, 0xd2cebu);
    push32(c, 0xd2cf0u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd2cf0u);
    X86_TICK(c, 11);
    // 0d2cf0  push 0xccfc
    X86_AT(c, 0xd2cf0u);
    { uint32_t v = 0xCCFCu; push32(c, v); }
    // 0d2cf5  push 7
    X86_AT(c, 0xd2cf5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2cf7  call 0xba428
    X86_AT(c, 0xd2cf7u);
    push32(c, 0xd2cfcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2cfcu);
    X86_TICK(c, 9);
    // 0d2cfc  push 7
    X86_AT(c, 0xd2cfcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2cfe  call 0xbbb5c
    X86_AT(c, 0xd2cfeu);
    push32(c, 0xd2d03u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2d03u);
    X86_TICK(c, 9);
    // 0d2d03  add esp, 0x10
    X86_AT(c, 0xd2d03u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d2d06  jmp 0xd2cac
    X86_AT(c, 0xd2d06u);
    X86_POLL(c, 0xd2cacu); goto L_d2cac;
L_d2d08:
    X86_TICK(c, 156);
    // 0d2d08  mov ebx, dword ptr [edi*4 + 0xa4a7e]
    X86_AT(c, 0xd2d08u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A7Eu)));
    // 0d2d0f  mov eax, dword ptr [esi*4 + 0xa4a7e]
    X86_AT(c, 0xd2d0fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA4A7Eu)));
    // 0d2d16  mov dword ptr [edi*4 + 0xa4a7e], eax
    X86_AT(c, 0xd2d16u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A7Eu)), c.r[0]);
    // 0d2d1d  mov dword ptr [esi*4 + 0xa4a7e], ebx
    X86_AT(c, 0xd2d1du);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA4A7Eu)), c.r[3]);
    // 0d2d24  lea eax, [edi + edi*2]
    X86_AT(c, 0xd2d24u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d2d27  lea edx, [eax*8]
    X86_AT(c, 0xd2d27u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d2d2e  lea edx, [eax + edx*8]
    X86_AT(c, 0xd2d2eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d2d31  lea eax, [edx*1 + 0xa4aa0]
    X86_AT(c, 0xd2d31u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4AA0u);
    // 0d2d38  lea edx, [ebp - 0xc4]
    X86_AT(c, 0xd2d38u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFF3Cu);
    // 0d2d3e  push esi
    X86_AT(c, 0xd2d3eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2d3f  push edi
    X86_AT(c, 0xd2d3fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2d40  mov esi, eax
    X86_AT(c, 0xd2d40u);
    c.r[6] = c.r[0];
    // 0d2d42  mov edi, edx
    X86_AT(c, 0xd2d42u);
    c.r[7] = c.r[2];
    // 0d2d44  mov ecx, 0x30
    X86_AT(c, 0xd2d44u);
    c.r[1] = 0x30u;
    // 0d2d49  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xd2d49u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0d2d4b  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xd2d4bu);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0d2d4d  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd2d4du);
    x86_string(c, 0, 1, 0, 4, 3);
    // 0d2d4e  pop edi
    X86_AT(c, 0xd2d4eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2d4f  pop esi
    X86_AT(c, 0xd2d4fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2d50  lea ecx, [esi + esi*2]
    X86_AT(c, 0xd2d50u);
    c.r[1] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0d2d53  lea edx, [ecx*8]
    X86_AT(c, 0xd2d53u);
    c.r[2] = (uint32_t)(c.r[1] * 8);
    // 0d2d5a  lea edx, [ecx + edx*8]
    X86_AT(c, 0xd2d5au);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 8);
    // 0d2d5d  add edx, 0xa4aa0
    X86_AT(c, 0xd2d5du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xA4AA0u, 0, 4); }
    // 0d2d63  push esi
    X86_AT(c, 0xd2d63u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2d64  push edi
    X86_AT(c, 0xd2d64u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2d65  mov esi, edx
    X86_AT(c, 0xd2d65u);
    c.r[6] = c.r[2];
    // 0d2d67  mov edi, eax
    X86_AT(c, 0xd2d67u);
    c.r[7] = c.r[0];
    // 0d2d69  mov ecx, 0x30
    X86_AT(c, 0xd2d69u);
    c.r[1] = 0x30u;
    // 0d2d6e  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xd2d6eu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0d2d70  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xd2d70u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0d2d72  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd2d72u);
    x86_string(c, 0, 1, 0, 4, 3);
    // 0d2d73  pop edi
    X86_AT(c, 0xd2d73u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2d74  pop esi
    X86_AT(c, 0xd2d74u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2d75  lea eax, [ebp - 0xc4]
    X86_AT(c, 0xd2d75u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF3Cu);
    // 0d2d7b  push esi
    X86_AT(c, 0xd2d7bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2d7c  push edi
    X86_AT(c, 0xd2d7cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2d7d  mov esi, eax
    X86_AT(c, 0xd2d7du);
    c.r[6] = c.r[0];
    // 0d2d7f  mov edi, edx
    X86_AT(c, 0xd2d7fu);
    c.r[7] = c.r[2];
    // 0d2d81  mov ecx, 0x30
    X86_AT(c, 0xd2d81u);
    c.r[1] = 0x30u;
    // 0d2d86  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xd2d86u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0d2d88  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xd2d88u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0d2d8a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd2d8au);
    x86_string(c, 0, 1, 0, 4, 3);
    // 0d2d8b  pop edi
    X86_AT(c, 0xd2d8bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2d8c  pop esi
    X86_AT(c, 0xd2d8cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2d8d  call 0xbe4b0
    X86_AT(c, 0xd2d8du);
    push32(c, 0xd2d92u); x86_call_known(c, 0xbe4b0u, f_000be4b0); X86_RET(c, 0xd2d92u);
    X86_TICK(c, 7);
    // 0d2d92  call 0xb75c0
    X86_AT(c, 0xd2d92u);
    push32(c, 0xd2d97u); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xd2d97u);
    X86_TICK(c, 2);
    // 0d2d97  push 0xcd30
    X86_AT(c, 0xd2d97u);
    { uint32_t v = 0xCD30u; push32(c, v); }
L_d2d9c:
    X86_TICK(c, 9);
    // 0d2d9c  push 7
    X86_AT(c, 0xd2d9cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2d9e  call 0xba428
    X86_AT(c, 0xd2d9eu);
    push32(c, 0xd2da3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2da3u);
    X86_TICK(c, 9);
    // 0d2da3  push 7
    X86_AT(c, 0xd2da3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2da5  call 0xbbb5c
    X86_AT(c, 0xd2da5u);
    push32(c, 0xd2daau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2daau);
    X86_TICK(c, 30);
    // 0d2daa  add esp, 0xc
    X86_AT(c, 0xd2daau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2dad  pop edi
    X86_AT(c, 0xd2dadu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2dae  pop esi
    X86_AT(c, 0xd2daeu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2daf  pop ebx
    X86_AT(c, 0xd2dafu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d2db0  leave 
    X86_AT(c, 0xd2db0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d2db1  ret 
    X86_AT(c, 0xd2db1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2c60u, "ran off the end of a function");
}
void f_000d2d9c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d2d9c  push 7
    X86_AT(c, 0xd2d9cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2d9e  call 0xba428
    X86_AT(c, 0xd2d9eu);
    push32(c, 0xd2da3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2da3u);
    X86_TICK(c, 9);
    // 0d2da3  push 7
    X86_AT(c, 0xd2da3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2da5  call 0xbbb5c
    X86_AT(c, 0xd2da5u);
    push32(c, 0xd2daau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2daau);
    X86_TICK(c, 30);
    // 0d2daa  add esp, 0xc
    X86_AT(c, 0xd2daau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2dad  pop edi
    X86_AT(c, 0xd2dadu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2dae  pop esi
    X86_AT(c, 0xd2daeu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2daf  pop ebx
    X86_AT(c, 0xd2dafu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d2db0  leave 
    X86_AT(c, 0xd2db0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d2db1  ret 
    X86_AT(c, 0xd2db1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2d9cu, "ran off the end of a function");
}
void f_000d2db4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d2db4  push edi
    X86_AT(c, 0xd2db4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2db5  push 7
    X86_AT(c, 0xd2db5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2db7  call 0xbb6b0
    X86_AT(c, 0xd2db7u);
    push32(c, 0xd2dbcu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2dbcu);
    X86_TICK(c, 11);
    // 0d2dbc  push 0xcd54
    X86_AT(c, 0xd2dbcu);
    { uint32_t v = 0xCD54u; push32(c, v); }
    // 0d2dc1  push 7
    X86_AT(c, 0xd2dc1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2dc3  call 0xba428
    X86_AT(c, 0xd2dc3u);
    push32(c, 0xd2dc8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2dc8u);
    X86_TICK(c, 11);
    // 0d2dc8  push 0xffffffff
    X86_AT(c, 0xd2dc8u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d2dca  push 7
    X86_AT(c, 0xd2dcau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2dcc  call 0xb6f28
    X86_AT(c, 0xd2dccu);
    push32(c, 0xd2dd1u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd2dd1u);
    X86_TICK(c, 12);
    // 0d2dd1  xchg edi, eax
    X86_AT(c, 0xd2dd1u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d2dd2  push 7
    X86_AT(c, 0xd2dd2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2dd4  call 0xbb6b0
    X86_AT(c, 0xd2dd4u);
    push32(c, 0xd2dd9u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2dd9u);
    X86_TICK(c, 9);
    // 0d2dd9  add esp, 0x18
    X86_AT(c, 0xd2dd9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d2ddc  cmp edi, 0xffffffff
    X86_AT(c, 0xd2ddcu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d2ddf  jne 0xd2dfc
    X86_AT(c, 0xd2ddfu);
    if (x86_cc(c, 5)) { goto L_d2dfc; }
    X86_TICK(c, 11);
    // 0d2de1  push 0xcdb0
    X86_AT(c, 0xd2de1u);
    { uint32_t v = 0xCDB0u; push32(c, v); }
    // 0d2de6  push 7
    X86_AT(c, 0xd2de6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2de8  call 0xba428
    X86_AT(c, 0xd2de8u);
    push32(c, 0xd2dedu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2dedu);
    X86_TICK(c, 9);
    // 0d2ded  push 7
    X86_AT(c, 0xd2dedu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2def  call 0xbbb5c
    X86_AT(c, 0xd2defu);
    push32(c, 0xd2df4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2df4u);
    X86_TICK(c, 9);
    // 0d2df4  add esp, 0xc
    X86_AT(c, 0xd2df4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2df7  jmp 0xd2e7a
    X86_AT(c, 0xd2df7u);
    goto L_d2e7a;
L_d2dfc:
    X86_TICK(c, 9);
    // 0d2dfc  push 7
    X86_AT(c, 0xd2dfcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2dfe  call 0xbbb5c
    X86_AT(c, 0xd2dfeu);
    push32(c, 0xd2e03u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2e03u);
    X86_TICK(c, 20);
    // 0d2e03  lea eax, [edi + edi*2]
    X86_AT(c, 0xd2e03u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d2e06  lea edx, [eax*8]
    X86_AT(c, 0xd2e06u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d2e0d  lea edx, [eax + edx*8]
    X86_AT(c, 0xd2e0du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d2e10  add esp, 4
    X86_AT(c, 0xd2e10u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d2e13  cmp dword ptr [edx + 0xa4aed], 1
    X86_AT(c, 0xd2e13u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AEDu))), 0x1u, 0, 4);
    // 0d2e1a  jge 0xd2e3b
    X86_AT(c, 0xd2e1au);
    if (x86_cc(c, 13)) { goto L_d2e3b; }
    X86_TICK(c, 9);
    // 0d2e1c  push 0
    X86_AT(c, 0xd2e1cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2e1e  call 0xb607c
    X86_AT(c, 0xd2e1eu);
    push32(c, 0xd2e23u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd2e23u);
    X86_TICK(c, 11);
    // 0d2e23  push 0xcdc8
    X86_AT(c, 0xd2e23u);
    { uint32_t v = 0xCDC8u; push32(c, v); }
    // 0d2e28  push 7
    X86_AT(c, 0xd2e28u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2e2a  call 0xba428
    X86_AT(c, 0xd2e2au);
    push32(c, 0xd2e2fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2e2fu);
    X86_TICK(c, 9);
    // 0d2e2f  push 7
    X86_AT(c, 0xd2e2fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2e31  call 0xbbb5c
    X86_AT(c, 0xd2e31u);
    push32(c, 0xd2e36u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2e36u);
    X86_TICK(c, 9);
    // 0d2e36  add esp, 0x10
    X86_AT(c, 0xd2e36u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d2e39  jmp 0xd2e7a
    X86_AT(c, 0xd2e39u);
    goto L_d2e7a;
L_d2e3b:
    X86_TICK(c, 19);
    // 0d2e3b  lea eax, [edi + edi*2]
    X86_AT(c, 0xd2e3bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d2e3e  lea edx, [eax*8]
    X86_AT(c, 0xd2e3eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d2e45  lea edx, [eax + edx*8]
    X86_AT(c, 0xd2e45u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d2e48  dec dword ptr [edx + 0xa4aed]
    X86_AT(c, 0xd2e48u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AEDu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d2e4e  call 0xb8d84
    X86_AT(c, 0xd2e4eu);
    push32(c, 0xd2e53u); x86_call_known(c, 0xb8d84u, f_000b8d84); X86_RET(c, 0xd2e53u);
    X86_TICK(c, 12);
    // 0d2e53  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xd2e53u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0d2e5a  jne 0xd2e68
    X86_AT(c, 0xd2e5au);
    if (x86_cc(c, 5)) { goto L_d2e68; }
    X86_TICK(c, 9);
    // 0d2e5c  push 0xcdf8
    X86_AT(c, 0xd2e5cu);
    { uint32_t v = 0xCDF8u; push32(c, v); }
    // 0d2e61  call 0xc6064
    X86_AT(c, 0xd2e61u);
    push32(c, 0xd2e66u); x86_call_known(c, 0xc6064u, f_000c6064); X86_RET(c, 0xd2e66u);
    X86_TICK(c, 7);
    // 0d2e66  jmp 0xd2e72
    X86_AT(c, 0xd2e66u);
    goto L_d2e72;
L_d2e68:
    X86_TICK(c, 9);
    // 0d2e68  push 0xce14
    X86_AT(c, 0xd2e68u);
    { uint32_t v = 0xCE14u; push32(c, v); }
    // 0d2e6d  call 0xc5488
    X86_AT(c, 0xd2e6du);
    push32(c, 0xd2e72u); x86_call_known(c, 0xc5488u, f_000c5488); X86_RET(c, 0xd2e72u);
L_d2e72:
    X86_TICK(c, 9);
    // 0d2e72  add esp, 4
    X86_AT(c, 0xd2e72u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d2e75  call 0xb8d78
    X86_AT(c, 0xd2e75u);
    push32(c, 0xd2e7au); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd2e7au);
L_d2e7a:
    X86_TICK(c, 14);
    // 0d2e7a  pop edi
    X86_AT(c, 0xd2e7au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2e7b  ret 
    X86_AT(c, 0xd2e7bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2db4u, "ran off the end of a function");
}
void f_000d2e7c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d2e7c  push 7
    X86_AT(c, 0xd2e7cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2e7e  call 0xbb6b0
    X86_AT(c, 0xd2e7eu);
    push32(c, 0xd2e83u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2e83u);
    X86_TICK(c, 11);
    // 0d2e83  push 0xce30
    X86_AT(c, 0xd2e83u);
    { uint32_t v = 0xCE30u; push32(c, v); }
    // 0d2e88  push 7
    X86_AT(c, 0xd2e88u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2e8a  call 0xba428
    X86_AT(c, 0xd2e8au);
    push32(c, 0xd2e8fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2e8fu);
    X86_TICK(c, 9);
    // 0d2e8f  push 7
    X86_AT(c, 0xd2e8fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2e91  call 0xbbb5c
    X86_AT(c, 0xd2e91u);
    push32(c, 0xd2e96u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2e96u);
    X86_TICK(c, 14);
    // 0d2e96  add esp, 0x10
    X86_AT(c, 0xd2e96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d2e99  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xd2e99u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0d2ea0  je 0xd2ec1
    X86_AT(c, 0xd2ea0u);
    if (x86_cc(c, 4)) { goto L_d2ec1; }
    X86_TICK(c, 9);
    // 0d2ea2  push 3
    X86_AT(c, 0xd2ea2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d2ea4  call 0xb607c
    X86_AT(c, 0xd2ea4u);
    push32(c, 0xd2ea9u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd2ea9u);
    X86_TICK(c, 11);
    // 0d2ea9  push 0xce64
    X86_AT(c, 0xd2ea9u);
    { uint32_t v = 0xCE64u; push32(c, v); }
    // 0d2eae  push 7
    X86_AT(c, 0xd2eaeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2eb0  call 0xba428
    X86_AT(c, 0xd2eb0u);
    push32(c, 0xd2eb5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2eb5u);
    X86_TICK(c, 9);
    // 0d2eb5  push 7
    X86_AT(c, 0xd2eb5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2eb7  call 0xbbb5c
    X86_AT(c, 0xd2eb7u);
    push32(c, 0xd2ebcu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2ebcu);
    X86_TICK(c, 9);
    // 0d2ebc  add esp, 0x10
    X86_AT(c, 0xd2ebcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d2ebf  jmp 0xd2f17
    X86_AT(c, 0xd2ebfu);
    goto L_d2f17;
L_d2ec1:
    X86_TICK(c, 11);
    // 0d2ec1  push 0xceac
    X86_AT(c, 0xd2ec1u);
    { uint32_t v = 0xCEACu; push32(c, v); }
    // 0d2ec6  push 7
    X86_AT(c, 0xd2ec6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2ec8  call 0xba428
    X86_AT(c, 0xd2ec8u);
    push32(c, 0xd2ecdu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2ecdu);
    X86_TICK(c, 9);
    // 0d2ecd  push 7
    X86_AT(c, 0xd2ecdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2ecf  call 0xbbb5c
    X86_AT(c, 0xd2ecfu);
    push32(c, 0xd2ed4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2ed4u);
    X86_TICK(c, 7);
    // 0d2ed4  call 0xc9aec
    X86_AT(c, 0xd2ed4u);
    push32(c, 0xd2ed9u); x86_call_known(c, 0xc9aecu, f_000c9aec); X86_RET(c, 0xd2ed9u);
    X86_TICK(c, 9);
    // 0d2ed9  push 7
    X86_AT(c, 0xd2ed9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2edb  call 0xbb6b0
    X86_AT(c, 0xd2edbu);
    push32(c, 0xd2ee0u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2ee0u);
    X86_TICK(c, 11);
    // 0d2ee0  push 0xced4
    X86_AT(c, 0xd2ee0u);
    { uint32_t v = 0xCED4u; push32(c, v); }
    // 0d2ee5  push 7
    X86_AT(c, 0xd2ee5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2ee7  call 0xba428
    X86_AT(c, 0xd2ee7u);
    push32(c, 0xd2eecu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2eecu);
    X86_TICK(c, 9);
    // 0d2eec  push 7
    X86_AT(c, 0xd2eecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2eee  call 0xbbb5c
    X86_AT(c, 0xd2eeeu);
    push32(c, 0xd2ef3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2ef3u);
    X86_TICK(c, 11);
    // 0d2ef3  push 0xcefc
    X86_AT(c, 0xd2ef3u);
    { uint32_t v = 0xCEFCu; push32(c, v); }
    // 0d2ef8  push 7
    X86_AT(c, 0xd2ef8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2efa  call 0xba428
    X86_AT(c, 0xd2efau);
    push32(c, 0xd2effu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2effu);
    X86_TICK(c, 9);
    // 0d2eff  push 7
    X86_AT(c, 0xd2effu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2f01  call 0xb6e88
    X86_AT(c, 0xd2f01u);
    push32(c, 0xd2f06u); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xd2f06u);
    X86_TICK(c, 9);
    // 0d2f06  add esp, 0x28
    X86_AT(c, 0xd2f06u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d2f09  cmp al, 0x59
    X86_AT(c, 0xd2f09u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0d2f0b  jne 0xd2f17
    X86_AT(c, 0xd2f0bu);
    if (x86_cc(c, 5)) { goto L_d2f17; }
    X86_TICK(c, 2);
    // 0d2f0d  mov dword ptr [0xa4920], 0
    X86_AT(c, 0xd2f0du);
    wr32((c.sbase[3] + (uint32_t)(0xA4920u)), 0x0u);
L_d2f17:
    X86_TICK(c, 10);
    // 0d2f17  ret 
    X86_AT(c, 0xd2f17u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2e7cu, "ran off the end of a function");
}
void f_000d2f18(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d2f18  push ebx
    X86_AT(c, 0xd2f18u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2f19  push esi
    X86_AT(c, 0xd2f19u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2f1a  push edi
    X86_AT(c, 0xd2f1au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2f1b  push 7
    X86_AT(c, 0xd2f1bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2f1d  call 0xbb6b0
    X86_AT(c, 0xd2f1du);
    push32(c, 0xd2f22u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2f22u);
    X86_TICK(c, 14);
    // 0d2f22  add esp, 4
    X86_AT(c, 0xd2f22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d2f25  cmp dword ptr [0xa4a56], 2
    X86_AT(c, 0xd2f25u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x2u, 0, 4);
    // 0d2f2c  je 0xd2f63
    X86_AT(c, 0xd2f2cu);
    if (x86_cc(c, 4)) { goto L_d2f63; }
    X86_TICK(c, 11);
    // 0d2f2e  push 0xcf2c
    X86_AT(c, 0xd2f2eu);
    { uint32_t v = 0xCF2Cu; push32(c, v); }
    // 0d2f33  push 7
    X86_AT(c, 0xd2f33u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2f35  call 0xba428
    X86_AT(c, 0xd2f35u);
    push32(c, 0xd2f3au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2f3au);
    X86_TICK(c, 9);
    // 0d2f3a  push 7
    X86_AT(c, 0xd2f3au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2f3c  call 0xbbb5c
    X86_AT(c, 0xd2f3cu);
    push32(c, 0xd2f41u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2f41u);
    X86_TICK(c, 9);
    // 0d2f41  push 1
    X86_AT(c, 0xd2f41u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2f43  call 0xb607c
    X86_AT(c, 0xd2f43u);
    push32(c, 0xd2f48u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd2f48u);
    X86_TICK(c, 11);
    // 0d2f48  push 0xcf54
    X86_AT(c, 0xd2f48u);
    { uint32_t v = 0xCF54u; push32(c, v); }
    // 0d2f4d  push 7
    X86_AT(c, 0xd2f4du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2f4f  call 0xba428
    X86_AT(c, 0xd2f4fu);
    push32(c, 0xd2f54u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2f54u);
    X86_TICK(c, 9);
    // 0d2f54  push 7
    X86_AT(c, 0xd2f54u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2f56  call 0xbbb5c
    X86_AT(c, 0xd2f56u);
    push32(c, 0xd2f5bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2f5bu);
    X86_TICK(c, 9);
    // 0d2f5b  add esp, 0x1c
    X86_AT(c, 0xd2f5bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d2f5e  jmp 0xd309a
    X86_AT(c, 0xd2f5eu);
    goto L_d309a;
L_d2f63:
    X86_TICK(c, 11);
    // 0d2f63  push 0xcf7c
    X86_AT(c, 0xd2f63u);
    { uint32_t v = 0xCF7Cu; push32(c, v); }
    // 0d2f68  push 7
    X86_AT(c, 0xd2f68u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2f6a  call 0xba428
    X86_AT(c, 0xd2f6au);
    push32(c, 0xd2f6fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2f6fu);
    X86_TICK(c, 11);
    // 0d2f6f  push 0xffffffff
    X86_AT(c, 0xd2f6fu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d2f71  push 7
    X86_AT(c, 0xd2f71u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2f73  call 0xb6f28
    X86_AT(c, 0xd2f73u);
    push32(c, 0xd2f78u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd2f78u);
    X86_TICK(c, 12);
    // 0d2f78  xchg esi, eax
    X86_AT(c, 0xd2f78u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d2f79  push 7
    X86_AT(c, 0xd2f79u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2f7b  call 0xbb6b0
    X86_AT(c, 0xd2f7bu);
    push32(c, 0xd2f80u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd2f80u);
    X86_TICK(c, 9);
    // 0d2f80  add esp, 0x14
    X86_AT(c, 0xd2f80u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d2f83  cmp esi, 0xffffffff
    X86_AT(c, 0xd2f83u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0d2f86  jne 0xd2f92
    X86_AT(c, 0xd2f86u);
    if (x86_cc(c, 5)) { goto L_d2f92; }
    X86_TICK(c, 9);
    // 0d2f88  push 0xcfcc
    X86_AT(c, 0xd2f88u);
    { uint32_t v = 0xCFCCu; push32(c, v); }
    // 0d2f8d  jmp 0xd3062
    X86_AT(c, 0xd2f8du);
    goto L_d3062;
L_d2f92:
    X86_TICK(c, 9);
    // 0d2f92  push 7
    X86_AT(c, 0xd2f92u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2f94  call 0xbbb5c
    X86_AT(c, 0xd2f94u);
    push32(c, 0xd2f99u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2f99u);
    X86_TICK(c, 17);
    // 0d2f99  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd2f99u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d2f9f  push dword ptr [0xa4a76]
    X86_AT(c, 0xd2f9fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d2fa5  call 0xc735c
    X86_AT(c, 0xd2fa5u);
    push32(c, 0xd2faau); x86_call_known(c, 0xc735cu, f_000c735c); X86_RET(c, 0xd2faau);
    X86_TICK(c, 12);
    // 0d2faa  xchg ebx, eax
    X86_AT(c, 0xd2faau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d2fab  add esp, 0xc
    X86_AT(c, 0xd2fabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2fae  cmp ebx, 0xffffffff
    X86_AT(c, 0xd2faeu);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0d2fb1  je 0xd2fbc
    X86_AT(c, 0xd2fb1u);
    if (x86_cc(c, 4)) { goto L_d2fbc; }
    X86_TICK(c, 12);
    // 0d2fb3  cmp byte ptr [ebx + 0xa5ce8], 0x80
    X86_AT(c, 0xd2fb3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA5CE8u))), 0x80u, 0, 1);
    // 0d2fba  je 0xd2fdb
    X86_AT(c, 0xd2fbau);
    if (x86_cc(c, 4)) { goto L_d2fdb; }
L_d2fbc:
    X86_TICK(c, 9);
    // 0d2fbc  push 1
    X86_AT(c, 0xd2fbcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2fbe  call 0xb607c
    X86_AT(c, 0xd2fbeu);
    push32(c, 0xd2fc3u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd2fc3u);
    X86_TICK(c, 11);
    // 0d2fc3  push 0xcfe4
    X86_AT(c, 0xd2fc3u);
    { uint32_t v = 0xCFE4u; push32(c, v); }
    // 0d2fc8  push 7
    X86_AT(c, 0xd2fc8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2fca  call 0xba428
    X86_AT(c, 0xd2fcau);
    push32(c, 0xd2fcfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd2fcfu);
    X86_TICK(c, 9);
    // 0d2fcf  push 7
    X86_AT(c, 0xd2fcfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2fd1  call 0xbbb5c
    X86_AT(c, 0xd2fd1u);
    push32(c, 0xd2fd6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd2fd6u);
    X86_TICK(c, 7);
    // 0d2fd6  jmp 0xd3097
    X86_AT(c, 0xd2fd6u);
    goto L_d3097;
L_d2fdb:
    X86_TICK(c, 9);
    // 0d2fdb  push esi
    X86_AT(c, 0xd2fdbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2fdc  call 0xc71e4
    X86_AT(c, 0xd2fdcu);
    push32(c, 0xd2fe1u); x86_call_known(c, 0xc71e4u, f_000c71e4); X86_RET(c, 0xd2fe1u);
    X86_TICK(c, 9);
    // 0d2fe1  add esp, 4
    X86_AT(c, 0xd2fe1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d2fe4  inc eax
    X86_AT(c, 0xd2fe4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d2fe5  je 0xd3075
    X86_AT(c, 0xd2fe5u);
    if (x86_cc(c, 4)) { goto L_d3075; }
    X86_TICK(c, 9);
    // 0d2feb  push 0xf
    X86_AT(c, 0xd2febu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d2fed  call 0xb61b4
    X86_AT(c, 0xd2fedu);
    push32(c, 0xd2ff2u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd2ff2u);
    X86_TICK(c, 9);
    // 0d2ff2  add esp, 4
    X86_AT(c, 0xd2ff2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d2ff5  cmp eax, 3
    X86_AT(c, 0xd2ff5u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0d2ff8  jge 0xd305d
    X86_AT(c, 0xd2ff8u);
    if (x86_cc(c, 13)) { goto L_d305d; }
    X86_TICK(c, 9);
    // 0d2ffa  push 0
    X86_AT(c, 0xd2ffau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2ffc  call 0xb607c
    X86_AT(c, 0xd2ffcu);
    push32(c, 0xd3001u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd3001u);
    X86_TICK(c, 4);
    // 0d3001  sub edi, edi
    X86_AT(c, 0xd3001u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d3003  add esp, 4
    X86_AT(c, 0xd3003u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d3006:
    X86_TICK(c, 7);
    // 0d3006  cmp edi, 0x30
    X86_AT(c, 0xd3006u);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0d3009  jge 0xd3022
    X86_AT(c, 0xd3009u);
    if (x86_cc(c, 13)) { goto L_d3022; }
    X86_TICK(c, 12);
    // 0d300b  cmp byte ptr [edi + 0xa5ce8], 0x89
    X86_AT(c, 0xd300bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u))), 0x89u, 0, 1);
    // 0d3012  jne 0xd301f
    X86_AT(c, 0xd3012u);
    if (x86_cc(c, 5)) { goto L_d301f; }
    X86_TICK(c, 2);
    // 0d3014  mov dword ptr [edi*4 + 0xa5ec8], 3
    X86_AT(c, 0xd3014u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u)), 0x3u);
L_d301f:
    X86_TICK(c, 9);
    // 0d301f  inc edi
    X86_AT(c, 0xd301fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d3020  jmp 0xd3006
    X86_AT(c, 0xd3020u);
    X86_POLL(c, 0xd3006u); goto L_d3006;
L_d3022:
    X86_TICK(c, 9);
    // 0d3022  push 2
    X86_AT(c, 0xd3022u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d3024  call 0xbebbc
    X86_AT(c, 0xd3024u);
    push32(c, 0xd3029u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd3029u);
    X86_TICK(c, 9);
    // 0d3029  push 3
    X86_AT(c, 0xd3029u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d302b  call 0xb607c
    X86_AT(c, 0xd302bu);
    push32(c, 0xd3030u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd3030u);
    X86_TICK(c, 9);
    // 0d3030  push 2
    X86_AT(c, 0xd3030u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d3032  call 0xbebbc
    X86_AT(c, 0xd3032u);
    push32(c, 0xd3037u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd3037u);
    X86_TICK(c, 9);
    // 0d3037  push 3
    X86_AT(c, 0xd3037u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d3039  call 0xb607c
    X86_AT(c, 0xd3039u);
    push32(c, 0xd303eu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd303eu);
    X86_TICK(c, 11);
    // 0d303e  push 0xcff8
    X86_AT(c, 0xd303eu);
    { uint32_t v = 0xCFF8u; push32(c, v); }
    // 0d3043  push 7
    X86_AT(c, 0xd3043u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3045  call 0xba428
    X86_AT(c, 0xd3045u);
    push32(c, 0xd304au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd304au);
    X86_TICK(c, 9);
    // 0d304a  push 7
    X86_AT(c, 0xd304au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d304c  call 0xbbb5c
    X86_AT(c, 0xd304cu);
    push32(c, 0xd3051u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd3051u);
    X86_TICK(c, 9);
    // 0d3051  push 5
    X86_AT(c, 0xd3051u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d3053  call 0xbebbc
    X86_AT(c, 0xd3053u);
    push32(c, 0xd3058u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd3058u);
    X86_TICK(c, 9);
    // 0d3058  add esp, 0x20
    X86_AT(c, 0xd3058u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d305b  jmp 0xd309a
    X86_AT(c, 0xd305bu);
    goto L_d309a;
L_d305d:
    X86_TICK(c, 2);
    // 0d305d  push 0xd044
    X86_AT(c, 0xd305du);
    { uint32_t v = 0xD044u; push32(c, v); }
L_d3062:
    X86_TICK(c, 9);
    // 0d3062  push 7
    X86_AT(c, 0xd3062u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3064  call 0xba428
    X86_AT(c, 0xd3064u);
    push32(c, 0xd3069u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd3069u);
    X86_TICK(c, 9);
    // 0d3069  push 7
    X86_AT(c, 0xd3069u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d306b  call 0xbbb5c
    X86_AT(c, 0xd306bu);
    push32(c, 0xd3070u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd3070u);
    X86_TICK(c, 9);
    // 0d3070  add esp, 0xc
    X86_AT(c, 0xd3070u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d3073  jmp 0xd309a
    X86_AT(c, 0xd3073u);
    goto L_d309a;
L_d3075:
    X86_TICK(c, 9);
    // 0d3075  push 2
    X86_AT(c, 0xd3075u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d3077  call 0xb607c
    X86_AT(c, 0xd3077u);
    push32(c, 0xd307cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd307cu);
    X86_TICK(c, 9);
    // 0d307c  push 2
    X86_AT(c, 0xd307cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d307e  call 0xbebbc
    X86_AT(c, 0xd307eu);
    push32(c, 0xd3083u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd3083u);
    X86_TICK(c, 13);
    // 0d3083  sub eax, eax
    X86_AT(c, 0xd3083u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d3085  mov byte ptr [ebx + 0xa5ce8], al
    X86_AT(c, 0xd3085u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA5CE8u)), g8(c, 0));
    // 0d308b  push eax
    X86_AT(c, 0xd308bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d308c  call 0xb61d4
    X86_AT(c, 0xd308cu);
    push32(c, 0xd3091u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd3091u);
    X86_TICK(c, 9);
    // 0d3091  push esi
    X86_AT(c, 0xd3091u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3092  call 0xcd148
    X86_AT(c, 0xd3092u);
    push32(c, 0xd3097u); x86_call_known(c, 0xcd148u, f_000cd148); X86_RET(c, 0xd3097u);
L_d3097:
    X86_TICK(c, 2);
    // 0d3097  add esp, 0x10
    X86_AT(c, 0xd3097u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d309a:
    X86_TICK(c, 22);
    // 0d309a  pop edi
    X86_AT(c, 0xd309au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d309b  pop esi
    X86_AT(c, 0xd309bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d309c  pop ebx
    X86_AT(c, 0xd309cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d309d  ret 
    X86_AT(c, 0xd309du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2f18u, "ran off the end of a function");
}
void f_000d30a0(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d30a0  push ebp
    X86_AT(c, 0xd30a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d30a1  mov ebp, esp
    X86_AT(c, 0xd30a1u);
    c.r[5] = c.r[4];
    // 0d30a3  sub esp, 8
    X86_AT(c, 0xd30a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d30a6  push ebx
    X86_AT(c, 0xd30a6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d30a7  push esi
    X86_AT(c, 0xd30a7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d30a8  push edi
    X86_AT(c, 0xd30a8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d30a9  push 7
    X86_AT(c, 0xd30a9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d30ab  call 0xbb6b0
    X86_AT(c, 0xd30abu);
    push32(c, 0xd30b0u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd30b0u);
    X86_TICK(c, 11);
    // 0d30b0  push 0xd06c
    X86_AT(c, 0xd30b0u);
    { uint32_t v = 0xD06Cu; push32(c, v); }
    // 0d30b5  push 7
    X86_AT(c, 0xd30b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d30b7  call 0xba428
    X86_AT(c, 0xd30b7u);
    push32(c, 0xd30bcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd30bcu);
    X86_TICK(c, 11);
    // 0d30bc  push 0xffffffff
    X86_AT(c, 0xd30bcu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d30be  push 7
    X86_AT(c, 0xd30beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d30c0  call 0xb6f28
    X86_AT(c, 0xd30c0u);
    push32(c, 0xd30c5u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd30c5u);
    X86_TICK(c, 12);
    // 0d30c5  xchg edi, eax
    X86_AT(c, 0xd30c5u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d30c6  push 7
    X86_AT(c, 0xd30c6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d30c8  call 0xbb6b0
    X86_AT(c, 0xd30c8u);
    push32(c, 0xd30cdu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd30cdu);
    X86_TICK(c, 9);
    // 0d30cd  add esp, 0x18
    X86_AT(c, 0xd30cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d30d0  cmp edi, 0xffffffff
    X86_AT(c, 0xd30d0u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d30d3  jne 0xd30dc
    X86_AT(c, 0xd30d3u);
    if (x86_cc(c, 5)) { goto L_d30dc; }
    X86_TICK(c, 9);
    // 0d30d5  push 0xd0b0
    X86_AT(c, 0xd30d5u);
    { uint32_t v = 0xD0B0u; push32(c, v); }
    // 0d30da  jmp 0xd3126
    X86_AT(c, 0xd30dau);
    goto L_d3126;
L_d30dc:
    X86_TICK(c, 9);
    // 0d30dc  push 7
    X86_AT(c, 0xd30dcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d30de  call 0xbbb5c
    X86_AT(c, 0xd30deu);
    push32(c, 0xd30e3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd30e3u);
    X86_TICK(c, 20);
    // 0d30e3  lea eax, [edi + edi*2]
    X86_AT(c, 0xd30e3u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d30e6  lea edx, [eax*8]
    X86_AT(c, 0xd30e6u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d30ed  lea edx, [eax + edx*8]
    X86_AT(c, 0xd30edu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d30f0  add esp, 4
    X86_AT(c, 0xd30f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d30f3  cmp dword ptr [edx + 0xa4af1], 1
    X86_AT(c, 0xd30f3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF1u))), 0x1u, 0, 4);
    // 0d30fa  jge 0xd310a
    X86_AT(c, 0xd30fau);
    if (x86_cc(c, 13)) { goto L_d310a; }
    X86_TICK(c, 9);
    // 0d30fc  push 0
    X86_AT(c, 0xd30fcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d30fe  call 0xb607c
    X86_AT(c, 0xd30feu);
    push32(c, 0xd3103u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd3103u);
    X86_TICK(c, 9);
    // 0d3103  push 0xd0c8
    X86_AT(c, 0xd3103u);
    { uint32_t v = 0xD0C8u; push32(c, v); }
    // 0d3108  jmp 0xd3180
    X86_AT(c, 0xd3108u);
    goto L_d3180;
L_d310a:
    X86_TICK(c, 9);
    // 0d310a  push 7
    X86_AT(c, 0xd310au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d310c  call 0xb7068
    X86_AT(c, 0xd310cu);
    push32(c, 0xd3111u); x86_call_known(c, 0xb7068u, f_000b7068); X86_RET(c, 0xd3111u);
    X86_TICK(c, 12);
    // 0d3111  xchg esi, eax
    X86_AT(c, 0xd3111u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d3112  push 7
    X86_AT(c, 0xd3112u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3114  call 0xbb6b0
    X86_AT(c, 0xd3114u);
    push32(c, 0xd3119u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd3119u);
    X86_TICK(c, 9);
    // 0d3119  add esp, 8
    X86_AT(c, 0xd3119u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d311c  cmp esi, 0xffffffff
    X86_AT(c, 0xd311cu);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0d311f  jne 0xd3139
    X86_AT(c, 0xd311fu);
    if (x86_cc(c, 5)) { goto L_d3139; }
    X86_TICK(c, 2);
    // 0d3121  push 0xd0f4
    X86_AT(c, 0xd3121u);
    { uint32_t v = 0xD0F4u; push32(c, v); }
L_d3126:
    X86_TICK(c, 9);
    // 0d3126  push 7
    X86_AT(c, 0xd3126u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3128  call 0xba428
    X86_AT(c, 0xd3128u);
    push32(c, 0xd312du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd312du);
    X86_TICK(c, 9);
    // 0d312d  push 7
    X86_AT(c, 0xd312du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d312f  call 0xbbb5c
    X86_AT(c, 0xd312fu);
    push32(c, 0xd3134u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd3134u);
    X86_TICK(c, 7);
    // 0d3134  jmp 0xd31fd
    X86_AT(c, 0xd3134u);
    goto L_d31fd;
L_d3139:
    X86_TICK(c, 9);
    // 0d3139  push 7
    X86_AT(c, 0xd3139u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d313b  call 0xbbb5c
    X86_AT(c, 0xd313bu);
    push32(c, 0xd3140u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd3140u);
    X86_TICK(c, 31);
    // 0d3140  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd3140u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d3145  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd3145u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d3148  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd3148u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d314d  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd314du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d3150  push 1
    X86_AT(c, 0xd3150u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3152  push esi
    X86_AT(c, 0xd3152u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3153  lea eax, [ebp - 8]
    X86_AT(c, 0xd3153u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d3156  push eax
    X86_AT(c, 0xd3156u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d3157  lea ecx, [ebp - 4]
    X86_AT(c, 0xd3157u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d315a  push ecx
    X86_AT(c, 0xd315au);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d315b  call 0xc7248
    X86_AT(c, 0xd315bu);
    push32(c, 0xd3160u); x86_call_known(c, 0xc7248u, f_000c7248); X86_RET(c, 0xd3160u);
    X86_TICK(c, 17);
    // 0d3160  push dword ptr [ebp - 8]
    X86_AT(c, 0xd3160u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0d3163  push dword ptr [ebp - 4]
    X86_AT(c, 0xd3163u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d3166  call 0xc8474
    X86_AT(c, 0xd3166u);
    push32(c, 0xd316bu); x86_call_known(c, 0xc8474u, f_000c8474); X86_RET(c, 0xd316bu);
    X86_TICK(c, 12);
    // 0d316b  xchg ebx, eax
    X86_AT(c, 0xd316bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d316c  add esp, 0x1c
    X86_AT(c, 0xd316cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d316f  cmp bl, 0xc
    X86_AT(c, 0xd316fu);
    (void)x86_sub(c, g8(c, 3), 0xCu, 0, 1);
    // 0d3172  je 0xd3193
    X86_AT(c, 0xd3172u);
    if (x86_cc(c, 4)) { goto L_d3193; }
    X86_TICK(c, 9);
    // 0d3174  push 1
    X86_AT(c, 0xd3174u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3176  call 0xb607c
    X86_AT(c, 0xd3176u);
    push32(c, 0xd317bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd317bu);
    X86_TICK(c, 2);
    // 0d317b  push 0xd10c
    X86_AT(c, 0xd317bu);
    { uint32_t v = 0xD10Cu; push32(c, v); }
L_d3180:
    X86_TICK(c, 9);
    // 0d3180  push 7
    X86_AT(c, 0xd3180u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3182  call 0xba428
    X86_AT(c, 0xd3182u);
    push32(c, 0xd3187u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd3187u);
    X86_TICK(c, 9);
    // 0d3187  push 7
    X86_AT(c, 0xd3187u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3189  call 0xbbb5c
    X86_AT(c, 0xd3189u);
    push32(c, 0xd318eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd318eu);
    X86_TICK(c, 9);
    // 0d318e  add esp, 0x10
    X86_AT(c, 0xd318eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d3191  jmp 0xd3200
    X86_AT(c, 0xd3191u);
    goto L_d3200;
L_d3193:
    X86_TICK(c, 21);
    // 0d3193  lea eax, [edi + edi*2]
    X86_AT(c, 0xd3193u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d3196  lea edx, [eax*8]
    X86_AT(c, 0xd3196u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d319d  lea edx, [eax + edx*8]
    X86_AT(c, 0xd319du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d31a0  dec dword ptr [edx + 0xa4af1]
    X86_AT(c, 0xd31a0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF1u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d31a6  push 9
    X86_AT(c, 0xd31a6u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d31a8  call 0xb607c
    X86_AT(c, 0xd31a8u);
    push32(c, 0xd31adu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd31adu);
    X86_TICK(c, 9);
    // 0d31ad  push 2
    X86_AT(c, 0xd31adu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d31af  call 0xbebbc
    X86_AT(c, 0xd31afu);
    push32(c, 0xd31b4u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd31b4u);
    X86_TICK(c, 14);
    // 0d31b4  add esp, 8
    X86_AT(c, 0xd31b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d31b7  cmp dword ptr [0xa4a56], 0xff
    X86_AT(c, 0xd31b7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0xFFu, 0, 4);
    // 0d31c1  jne 0xd31da
    X86_AT(c, 0xd31c1u);
    if (x86_cc(c, 5)) { goto L_d31da; }
    X86_TICK(c, 11);
    // 0d31c3  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd31c3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d31c6  cmp eax, 0x3d
    X86_AT(c, 0xd31c6u);
    (void)x86_sub(c, c.r[0], 0x3Du, 0, 4);
    // 0d31c9  jne 0xd31da
    X86_AT(c, 0xd31c9u);
    if (x86_cc(c, 5)) { goto L_d31da; }
    X86_TICK(c, 18);
    // 0d31cb  shl eax, 6
    X86_AT(c, 0xd31cbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0d31ce  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd31ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d31d1  mov byte ptr [eax + 0x8afa8], 0x14
    X86_AT(c, 0xd31d1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AFA8u)), 0x14u);
    // 0d31d8  jmp 0xd31ea
    X86_AT(c, 0xd31d8u);
    goto L_d31ea;
L_d31da:
    X86_TICK(c, 15);
    // 0d31da  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd31dau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d31dd  shl eax, 6
    X86_AT(c, 0xd31ddu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0d31e0  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd31e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d31e3  mov byte ptr [eax + 0x8afa8], 9
    X86_AT(c, 0xd31e3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AFA8u)), 0x9u);
L_d31ea:
    X86_TICK(c, 19);
    // 0d31ea  push 4
    X86_AT(c, 0xd31eau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d31ec  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd31ecu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d31f2  push dword ptr [0xa4a76]
    X86_AT(c, 0xd31f2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d31f8  call 0xbd068
    X86_AT(c, 0xd31f8u);
    push32(c, 0xd31fdu); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd31fdu);
L_d31fd:
    X86_TICK(c, 2);
    // 0d31fd  add esp, 0xc
    X86_AT(c, 0xd31fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d3200:
    X86_TICK(c, 28);
    // 0d3200  pop edi
    X86_AT(c, 0xd3200u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3201  pop esi
    X86_AT(c, 0xd3201u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3202  pop ebx
    X86_AT(c, 0xd3202u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3203  leave 
    X86_AT(c, 0xd3203u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3204  ret 
    X86_AT(c, 0xd3204u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd30a0u, "ran off the end of a function");
}
void f_000d3208(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d3208  push ebx
    X86_AT(c, 0xd3208u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3209  push esi
    X86_AT(c, 0xd3209u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d320a  push edi
    X86_AT(c, 0xd320au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d320b  push 7
    X86_AT(c, 0xd320bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d320d  call 0xbb6b0
    X86_AT(c, 0xd320du);
    push32(c, 0xd3212u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd3212u);
    X86_TICK(c, 11);
    // 0d3212  push 0xd13c
    X86_AT(c, 0xd3212u);
    { uint32_t v = 0xD13Cu; push32(c, v); }
    // 0d3217  push 7
    X86_AT(c, 0xd3217u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3219  call 0xba428
    X86_AT(c, 0xd3219u);
    push32(c, 0xd321eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd321eu);
    X86_TICK(c, 9);
    // 0d321e  push 7
    X86_AT(c, 0xd321eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3220  call 0xbbb5c
    X86_AT(c, 0xd3220u);
    push32(c, 0xd3225u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd3225u);
    X86_TICK(c, 17);
    // 0d3225  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd3225u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d322b  push dword ptr [0xa4a76]
    X86_AT(c, 0xd322bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d3231  call 0xc84fc
    X86_AT(c, 0xd3231u);
    push32(c, 0xd3236u); x86_call_known(c, 0xc84fcu, f_000c84fc); X86_RET(c, 0xd3236u);
    X86_TICK(c, 17);
    // 0d3236  xchg ebx, eax
    X86_AT(c, 0xd3236u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d3237  add esp, 0x18
    X86_AT(c, 0xd3237u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d323a  cmp byte ptr [0xa4a49], 0x9d
    X86_AT(c, 0xd323au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x9Du, 0, 1);
    // 0d3241  jne 0xd3254
    X86_AT(c, 0xd3241u);
    if (x86_cc(c, 5)) { goto L_d3254; }
    X86_TICK(c, 9);
    // 0d3243  push 1
    X86_AT(c, 0xd3243u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3245  call 0xb607c
    X86_AT(c, 0xd3245u);
    push32(c, 0xd324au); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd324au);
    X86_TICK(c, 9);
    // 0d324a  push 0xd150
    X86_AT(c, 0xd324au);
    { uint32_t v = 0xD150u; push32(c, v); }
    // 0d324f  jmp 0xd33b6
    X86_AT(c, 0xd324fu);
    goto L_d33b6;
L_d3254:
    X86_TICK(c, 7);
    // 0d3254  cmp bl, 2
    X86_AT(c, 0xd3254u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0d3257  jne 0xd32fc
    X86_AT(c, 0xd3257u);
    if (x86_cc(c, 5)) { goto L_d32fc; }
    X86_TICK(c, 12);
    // 0d325d  cmp byte ptr [0xa4a49], 0x81
    X86_AT(c, 0xd325du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x81u, 0, 1);
    // 0d3264  jne 0xd32fc
    X86_AT(c, 0xd3264u);
    if (x86_cc(c, 5)) { goto L_d32fc; }
    X86_TICK(c, 2);
    // 0d326a  sub edi, edi
    X86_AT(c, 0xd326au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d326c:
    X86_TICK(c, 7);
    // 0d326c  cmp edi, 0x30
    X86_AT(c, 0xd326cu);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0d326f  jge 0xd327d
    X86_AT(c, 0xd326fu);
    if (x86_cc(c, 13)) { goto L_d327d; }
    X86_TICK(c, 12);
    // 0d3271  cmp byte ptr [edi + 0xa5ce8], 0
    X86_AT(c, 0xd3271u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u))), 0x0u, 0, 1);
    // 0d3278  je 0xd327d
    X86_AT(c, 0xd3278u);
    if (x86_cc(c, 4)) { goto L_d327d; }
    X86_TICK(c, 9);
    // 0d327a  inc edi
    X86_AT(c, 0xd327au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d327b  jmp 0xd326c
    X86_AT(c, 0xd327bu);
    X86_POLL(c, 0xd326cu); goto L_d326c;
L_d327d:
    X86_TICK(c, 7);
    // 0d327d  cmp edi, 0x30
    X86_AT(c, 0xd327du);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0d3280  jge 0xd339c
    X86_AT(c, 0xd3280u);
    if (x86_cc(c, 13)) { goto L_d339c; }
    X86_TICK(c, 35);
    // 0d3286  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd3286u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d328b  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd328bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d3292  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd3292u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d3297  mov dword ptr [edi*4 + 0xa5e08], eax
    X86_AT(c, 0xd3297u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[0]);
    // 0d329e  mov byte ptr [edi + 0xa5ce8], 0x81
    X86_AT(c, 0xd329eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), 0x81u);
    // 0d32a5  mov byte ptr [edi + 0xa5d18], 0x71
    X86_AT(c, 0xd32a5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5D18u)), 0x71u);
    // 0d32ac  sub eax, eax
    X86_AT(c, 0xd32acu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d32ae  mov dword ptr [edi*4 + 0xa5ec8], eax
    X86_AT(c, 0xd32aeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u)), c.r[0]);
    // 0d32b5  mov dword ptr [edi*4 + 0xa5f88], 0x51
    X86_AT(c, 0xd32b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5F88u)), 0x51u);
    // 0d32c0  mov dword ptr [edi*4 + 0xa6074], 0xffffffff
    X86_AT(c, 0xd32c0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)), 0xFFFFFFFFu);
    // 0d32cb  cmp eax, dword ptr [0xa4a56]
    X86_AT(c, 0xd32cbu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0, 4);
    // 0d32d1  jne 0xd339c
    X86_AT(c, 0xd32d1u);
    if (x86_cc(c, 5)) { goto L_d339c; }
    X86_TICK(c, 3);
    // 0d32d7  xchg esi, eax
    X86_AT(c, 0xd32d7u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_d32d8:
    X86_TICK(c, 7);
    // 0d32d8  cmp esi, 0x30
    X86_AT(c, 0xd32d8u);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0d32db  jge 0xd339c
    X86_AT(c, 0xd32dbu);
    if (x86_cc(c, 13)) { goto L_d339c; }
    X86_TICK(c, 12);
    // 0d32e1  cmp byte ptr [esi + 0xa5ce8], 0x81
    X86_AT(c, 0xd32e1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u))), 0x81u, 0, 1);
    // 0d32e8  jne 0xd32f9
    X86_AT(c, 0xd32e8u);
    if (x86_cc(c, 5)) { goto L_d32f9; }
    X86_TICK(c, 7);
    // 0d32ea  cmp edi, esi
    X86_AT(c, 0xd32eau);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0d32ec  je 0xd32f9
    X86_AT(c, 0xd32ecu);
    if (x86_cc(c, 4)) { goto L_d32f9; }
    X86_TICK(c, 2);
    // 0d32ee  mov dword ptr [esi*4 + 0xa6074], 8
    X86_AT(c, 0xd32eeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA6074u)), 0x8u);
L_d32f9:
    X86_TICK(c, 9);
    // 0d32f9  inc esi
    X86_AT(c, 0xd32f9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d32fa  jmp 0xd32d8
    X86_AT(c, 0xd32fau);
    X86_POLL(c, 0xd32d8u); goto L_d32d8;
L_d32fc:
    X86_TICK(c, 7);
    // 0d32fc  cmp bl, 1
    X86_AT(c, 0xd32fcu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d32ff  jne 0xd33aa
    X86_AT(c, 0xd32ffu);
    if (x86_cc(c, 5)) { goto L_d33aa; }
    X86_TICK(c, 12);
    // 0d3305  cmp byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xd3305u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x82u, 0, 1);
    // 0d330c  jne 0xd33aa
    X86_AT(c, 0xd330cu);
    if (x86_cc(c, 5)) { goto L_d33aa; }
    X86_TICK(c, 2);
    // 0d3312  sub edi, edi
    X86_AT(c, 0xd3312u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d3314:
    X86_TICK(c, 7);
    // 0d3314  cmp edi, 0x30
    X86_AT(c, 0xd3314u);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0d3317  jge 0xd3325
    X86_AT(c, 0xd3317u);
    if (x86_cc(c, 13)) { goto L_d3325; }
    X86_TICK(c, 12);
    // 0d3319  cmp byte ptr [edi + 0xa5ce8], 0
    X86_AT(c, 0xd3319u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u))), 0x0u, 0, 1);
    // 0d3320  je 0xd3325
    X86_AT(c, 0xd3320u);
    if (x86_cc(c, 4)) { goto L_d3325; }
    X86_TICK(c, 9);
    // 0d3322  inc edi
    X86_AT(c, 0xd3322u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d3323  jmp 0xd3314
    X86_AT(c, 0xd3323u);
    X86_POLL(c, 0xd3314u); goto L_d3314;
L_d3325:
    X86_TICK(c, 7);
    // 0d3325  cmp edi, 0x30
    X86_AT(c, 0xd3325u);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0d3328  jge 0xd339c
    X86_AT(c, 0xd3328u);
    if (x86_cc(c, 13)) { goto L_d339c; }
    X86_TICK(c, 35);
    // 0d332e  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd332eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d3333  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd3333u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d333a  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd333au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d333f  mov dword ptr [edi*4 + 0xa5e08], eax
    X86_AT(c, 0xd333fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[0]);
    // 0d3346  mov byte ptr [edi + 0xa5ce8], 0x82
    X86_AT(c, 0xd3346u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), 0x82u);
    // 0d334d  mov byte ptr [edi + 0xa5d18], 0x75
    X86_AT(c, 0xd334du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5D18u)), 0x75u);
    // 0d3354  sub eax, eax
    X86_AT(c, 0xd3354u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d3356  mov dword ptr [edi*4 + 0xa5ec8], eax
    X86_AT(c, 0xd3356u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u)), c.r[0]);
    // 0d335d  mov dword ptr [edi*4 + 0xa5f88], 0x52
    X86_AT(c, 0xd335du);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5F88u)), 0x52u);
    // 0d3368  mov dword ptr [edi*4 + 0xa6074], 0xffffffff
    X86_AT(c, 0xd3368u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)), 0xFFFFFFFFu);
    // 0d3373  cmp eax, dword ptr [0xa4a56]
    X86_AT(c, 0xd3373u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0, 4);
    // 0d3379  jne 0xd339c
    X86_AT(c, 0xd3379u);
    if (x86_cc(c, 5)) { goto L_d339c; }
    X86_TICK(c, 3);
    // 0d337b  xchg esi, eax
    X86_AT(c, 0xd337bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_d337c:
    X86_TICK(c, 7);
    // 0d337c  cmp esi, 0x30
    X86_AT(c, 0xd337cu);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0d337f  jge 0xd339c
    X86_AT(c, 0xd337fu);
    if (x86_cc(c, 13)) { goto L_d339c; }
    X86_TICK(c, 12);
    // 0d3381  cmp byte ptr [esi + 0xa5ce8], 0x82
    X86_AT(c, 0xd3381u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u))), 0x82u, 0, 1);
    // 0d3388  jne 0xd3399
    X86_AT(c, 0xd3388u);
    if (x86_cc(c, 5)) { goto L_d3399; }
    X86_TICK(c, 7);
    // 0d338a  cmp edi, esi
    X86_AT(c, 0xd338au);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0d338c  je 0xd3399
    X86_AT(c, 0xd338cu);
    if (x86_cc(c, 4)) { goto L_d3399; }
    X86_TICK(c, 2);
    // 0d338e  mov dword ptr [esi*4 + 0xa6074], 8
    X86_AT(c, 0xd338eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA6074u)), 0x8u);
L_d3399:
    X86_TICK(c, 9);
    // 0d3399  inc esi
    X86_AT(c, 0xd3399u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d339a  jmp 0xd337c
    X86_AT(c, 0xd339au);
    X86_POLL(c, 0xd337cu); goto L_d337c;
L_d339c:
    X86_TICK(c, 9);
    // 0d339c  mov byte ptr [0xa4a49], 0x9d
    X86_AT(c, 0xd339cu);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x9Du);
    // 0d33a3  call 0xb75c0
    X86_AT(c, 0xd33a3u);
    push32(c, 0xd33a8u); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xd33a8u);
    X86_TICK(c, 7);
    // 0d33a8  jmp 0xd33c7
    X86_AT(c, 0xd33a8u);
    goto L_d33c7;
L_d33aa:
    X86_TICK(c, 9);
    // 0d33aa  push 3
    X86_AT(c, 0xd33aau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d33ac  call 0xb607c
    X86_AT(c, 0xd33acu);
    push32(c, 0xd33b1u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd33b1u);
    X86_TICK(c, 2);
    // 0d33b1  push 0xd170
    X86_AT(c, 0xd33b1u);
    { uint32_t v = 0xD170u; push32(c, v); }
L_d33b6:
    X86_TICK(c, 9);
    // 0d33b6  push 7
    X86_AT(c, 0xd33b6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d33b8  call 0xba428
    X86_AT(c, 0xd33b8u);
    push32(c, 0xd33bdu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd33bdu);
    X86_TICK(c, 9);
    // 0d33bd  push 7
    X86_AT(c, 0xd33bdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d33bf  call 0xbbb5c
    X86_AT(c, 0xd33bfu);
    push32(c, 0xd33c4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd33c4u);
    X86_TICK(c, 2);
    // 0d33c4  add esp, 0x10
    X86_AT(c, 0xd33c4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d33c7:
    X86_TICK(c, 22);
    // 0d33c7  pop edi
    X86_AT(c, 0xd33c7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d33c8  pop esi
    X86_AT(c, 0xd33c8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d33c9  pop ebx
    X86_AT(c, 0xd33c9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d33ca  ret 
    X86_AT(c, 0xd33cau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3208u, "ran off the end of a function");
}
void f_000d33cc(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d33cc  push edi
    X86_AT(c, 0xd33ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d33cd  push 7
    X86_AT(c, 0xd33cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d33cf  call 0xbb6b0
    X86_AT(c, 0xd33cfu);
    push32(c, 0xd33d4u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd33d4u);
    X86_TICK(c, 11);
    // 0d33d4  push 0xd198
    X86_AT(c, 0xd33d4u);
    { uint32_t v = 0xD198u; push32(c, v); }
    // 0d33d9  push 7
    X86_AT(c, 0xd33d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d33db  call 0xba428
    X86_AT(c, 0xd33dbu);
    push32(c, 0xd33e0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd33e0u);
    X86_TICK(c, 11);
    // 0d33e0  push 0xffffffff
    X86_AT(c, 0xd33e0u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d33e2  push 7
    X86_AT(c, 0xd33e2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d33e4  call 0xb6f28
    X86_AT(c, 0xd33e4u);
    push32(c, 0xd33e9u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd33e9u);
    X86_TICK(c, 12);
    // 0d33e9  xchg edi, eax
    X86_AT(c, 0xd33e9u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d33ea  push 7
    X86_AT(c, 0xd33eau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d33ec  call 0xbb6b0
    X86_AT(c, 0xd33ecu);
    push32(c, 0xd33f1u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd33f1u);
    X86_TICK(c, 9);
    // 0d33f1  add esp, 0x18
    X86_AT(c, 0xd33f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d33f4  cmp edi, 0xffffffff
    X86_AT(c, 0xd33f4u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d33f7  jne 0xd3414
    X86_AT(c, 0xd33f7u);
    if (x86_cc(c, 5)) { goto L_d3414; }
    X86_TICK(c, 11);
    // 0d33f9  push 0xd1f4
    X86_AT(c, 0xd33f9u);
    { uint32_t v = 0xD1F4u; push32(c, v); }
    // 0d33fe  push 7
    X86_AT(c, 0xd33feu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3400  call 0xba428
    X86_AT(c, 0xd3400u);
    push32(c, 0xd3405u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd3405u);
    X86_TICK(c, 9);
    // 0d3405  push 7
    X86_AT(c, 0xd3405u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3407  call 0xbbb5c
    X86_AT(c, 0xd3407u);
    push32(c, 0xd340cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd340cu);
    X86_TICK(c, 9);
    // 0d340c  add esp, 0xc
    X86_AT(c, 0xd340cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d340f  jmp 0xd34ed
    X86_AT(c, 0xd340fu);
    goto L_d34ed;
L_d3414:
    X86_TICK(c, 9);
    // 0d3414  push 7
    X86_AT(c, 0xd3414u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3416  call 0xbbb5c
    X86_AT(c, 0xd3416u);
    push32(c, 0xd341bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd341bu);
    X86_TICK(c, 7);
    // 0d341b  call 0xb8d84
    X86_AT(c, 0xd341bu);
    push32(c, 0xd3420u); x86_call_known(c, 0xb8d84u, f_000b8d84); X86_RET(c, 0xd3420u);
    X86_TICK(c, 7);
    // 0d3420  call 0xbd5d0
    X86_AT(c, 0xd3420u);
    push32(c, 0xd3425u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xd3425u);
    X86_TICK(c, 29);
    // 0d3425  mov word ptr [0x9c544], 0xffff
    X86_AT(c, 0xd3425u);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), 0xFFFFu);
    // 0d342e  push 0xa
    X86_AT(c, 0xd342eu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d3430  push 0xf
    X86_AT(c, 0xd3430u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d3432  push 0xf
    X86_AT(c, 0xd3432u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d3434  push 0x12
    X86_AT(c, 0xd3434u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0d3436  push 0x26
    X86_AT(c, 0xd3436u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0d3438  push 0x140
    X86_AT(c, 0xd3438u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0d343d  push 0x140
    X86_AT(c, 0xd343du);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0d3442  push 0x3f
    X86_AT(c, 0xd3442u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0d3444  push 0x1a
    X86_AT(c, 0xd3444u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0d3446  push 6
    X86_AT(c, 0xd3446u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d3448  call 0xbb5cc
    X86_AT(c, 0xd3448u);
    push32(c, 0xd344du); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xd344du);
    X86_TICK(c, 9);
    // 0d344d  push 6
    X86_AT(c, 0xd344du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d344f  call 0xbb6b0
    X86_AT(c, 0xd344fu);
    push32(c, 0xd3454u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd3454u);
    X86_TICK(c, 9);
    // 0d3454  push 6
    X86_AT(c, 0xd3454u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d3456  call 0xbb710
    X86_AT(c, 0xd3456u);
    push32(c, 0xd345bu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xd345bu);
    X86_TICK(c, 13);
    // 0d345b  push 0
    X86_AT(c, 0xd345bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d345d  push 4
    X86_AT(c, 0xd345du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d345f  push 6
    X86_AT(c, 0xd345fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d3461  call 0xbc174
    X86_AT(c, 0xd3461u);
    push32(c, 0xd3466u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd3466u);
    X86_TICK(c, 13);
    // 0d3466  add esp, 0x40
    X86_AT(c, 0xd3466u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d3469  push 0xd
    X86_AT(c, 0xd3469u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d346b  push 6
    X86_AT(c, 0xd346bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d346d  call 0xbc3ec
    X86_AT(c, 0xd346du);
    push32(c, 0xd3472u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xd3472u);
    X86_TICK(c, 11);
    // 0d3472  push 0xd20c
    X86_AT(c, 0xd3472u);
    { uint32_t v = 0xD20Cu; push32(c, v); }
    // 0d3477  push 6
    X86_AT(c, 0xd3477u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d3479  call 0xbbba4
    X86_AT(c, 0xd3479u);
    push32(c, 0xd347eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd347eu);
    X86_TICK(c, 11);
    // 0d347e  push 0xb
    X86_AT(c, 0xd347eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d3480  push 6
    X86_AT(c, 0xd3480u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d3482  call 0xbc3ec
    X86_AT(c, 0xd3482u);
    push32(c, 0xd3487u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xd3487u);
    X86_TICK(c, 11);
    // 0d3487  push 0xd214
    X86_AT(c, 0xd3487u);
    { uint32_t v = 0xD214u; push32(c, v); }
    // 0d348c  push 6
    X86_AT(c, 0xd348cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d348e  call 0xba428
    X86_AT(c, 0xd348eu);
    push32(c, 0xd3493u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd3493u);
    X86_TICK(c, 11);
    // 0d3493  push 0xd
    X86_AT(c, 0xd3493u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d3495  push 6
    X86_AT(c, 0xd3495u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d3497  call 0xbc3ec
    X86_AT(c, 0xd3497u);
    push32(c, 0xd349cu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xd349cu);
    X86_TICK(c, 11);
    // 0d349c  push 0xd240
    X86_AT(c, 0xd349cu);
    { uint32_t v = 0xD240u; push32(c, v); }
    // 0d34a1  push 6
    X86_AT(c, 0xd34a1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d34a3  call 0xbbba4
    X86_AT(c, 0xd34a3u);
    push32(c, 0xd34a8u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd34a8u);
    X86_TICK(c, 11);
    // 0d34a8  push 0xf
    X86_AT(c, 0xd34a8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d34aa  push 6
    X86_AT(c, 0xd34aau);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d34ac  call 0xbc3ec
    X86_AT(c, 0xd34acu);
    push32(c, 0xd34b1u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xd34b1u);
    X86_TICK(c, 9);
    // 0d34b1  push 6
    X86_AT(c, 0xd34b1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d34b3  call 0xbb6b0
    X86_AT(c, 0xd34b3u);
    push32(c, 0xd34b8u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd34b8u);
    X86_TICK(c, 11);
    // 0d34b8  add esp, 0x3c
    X86_AT(c, 0xd34b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d34bb  push edi
    X86_AT(c, 0xd34bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d34bc  call 0xc9d1c
    X86_AT(c, 0xd34bcu);
    push32(c, 0xd34c1u); x86_call_known(c, 0xc9d1cu, f_000c9d1c); X86_RET(c, 0xd34c1u);
    X86_TICK(c, 13);
    // 0d34c1  add esp, 4
    X86_AT(c, 0xd34c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d34c4  push 0
    X86_AT(c, 0xd34c4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d34c6  push 6
    X86_AT(c, 0xd34c6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d34c8  call 0xbba64
    X86_AT(c, 0xd34c8u);
    push32(c, 0xd34cdu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd34cdu);
    X86_TICK(c, 7);
    // 0d34cd  call 0xbd5d0
    X86_AT(c, 0xd34cdu);
    push32(c, 0xd34d2u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xd34d2u);
    X86_TICK(c, 7);
    // 0d34d2  call 0xb8d78
    X86_AT(c, 0xd34d2u);
    push32(c, 0xd34d7u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd34d7u);
    X86_TICK(c, 14);
    // 0d34d7  add esp, 8
    X86_AT(c, 0xd34d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d34da  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xd34dau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0d34e1  je 0xd34ed
    X86_AT(c, 0xd34e1u);
    if (x86_cc(c, 4)) { goto L_d34ed; }
    X86_TICK(c, 9);
    // 0d34e3  push 1
    X86_AT(c, 0xd34e3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d34e5  call 0xb61d4
    X86_AT(c, 0xd34e5u);
    push32(c, 0xd34eau); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd34eau);
    X86_TICK(c, 2);
    // 0d34ea  add esp, 4
    X86_AT(c, 0xd34eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d34ed:
    X86_TICK(c, 14);
    // 0d34ed  pop edi
    X86_AT(c, 0xd34edu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d34ee  ret 
    X86_AT(c, 0xd34eeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd33ccu, "ran off the end of a function");
}
void f_000d34f0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0d34f0  call 0xce000
    X86_AT(c, 0xd34f0u);
    push32(c, 0xd34f5u); x86_call_known(c, 0xce000u, f_000ce000); X86_RET(c, 0xd34f5u);
    X86_TICK(c, 10);
    // 0d34f5  ret 
    X86_AT(c, 0xd34f5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd34f0u, "ran off the end of a function");
}
void f_000d34f8(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0d34f8  push ebp
    X86_AT(c, 0xd34f8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d34f9  mov ebp, esp
    X86_AT(c, 0xd34f9u);
    c.r[5] = c.r[4];
    // 0d34fb  push eax
    X86_AT(c, 0xd34fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d34fc  push esi
    X86_AT(c, 0xd34fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d34fd  push edi
    X86_AT(c, 0xd34fdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d34fe  mov esi, dword ptr [0xa6058]
    X86_AT(c, 0xd34feu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xA6058u)));
    // 0d3504  mov eax, dword ptr [0xa605c]
    X86_AT(c, 0xd3504u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA605Cu)));
    // 0d3509  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd3509u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d350c  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xd350cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0d3513  jne 0xd363a
    X86_AT(c, 0xd3513u);
    if (x86_cc(c, 5)) { goto L_d363a; }
    X86_TICK(c, 18);
    // 0d3519  dec dword ptr [0xa6060]
    X86_AT(c, 0xd3519u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA6060u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d351f  cmp dword ptr [0xa6060], 0
    X86_AT(c, 0xd351fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6060u))), 0x0u, 0, 4);
    // 0d3526  jge 0xd354b
    X86_AT(c, 0xd3526u);
    if (x86_cc(c, 13)) { goto L_d354b; }
    X86_TICK(c, 20);
    // 0d3528  mov dword ptr [0xa6060], 0xb
    X86_AT(c, 0xd3528u);
    wr32((c.sbase[3] + (uint32_t)(0xA6060u)), 0xBu);
    // 0d3532  inc dword ptr [0xa6058]
    X86_AT(c, 0xd3532u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA6058u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d3538  cmp dword ptr [0xa6058], 7
    X86_AT(c, 0xd3538u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6058u))), 0x7u, 0, 4);
    // 0d353f  jle 0xd354b
    X86_AT(c, 0xd353fu);
    if (x86_cc(c, 14)) { goto L_d354b; }
    X86_TICK(c, 2);
    // 0d3541  mov dword ptr [0xa6058], 0
    X86_AT(c, 0xd3541u);
    wr32((c.sbase[3] + (uint32_t)(0xA6058u)), 0x0u);
L_d354b:
    X86_TICK(c, 18);
    // 0d354b  dec dword ptr [0xa6064]
    X86_AT(c, 0xd354bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA6064u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d3551  cmp dword ptr [0xa6064], 0
    X86_AT(c, 0xd3551u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6064u))), 0x0u, 0, 4);
    // 0d3558  jge 0xd357d
    X86_AT(c, 0xd3558u);
    if (x86_cc(c, 13)) { goto L_d357d; }
    X86_TICK(c, 20);
    // 0d355a  mov dword ptr [0xa6064], 3
    X86_AT(c, 0xd355au);
    wr32((c.sbase[3] + (uint32_t)(0xA6064u)), 0x3u);
    // 0d3564  inc dword ptr [0xa605c]
    X86_AT(c, 0xd3564u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA605Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d356a  cmp dword ptr [0xa605c], 7
    X86_AT(c, 0xd356au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA605Cu))), 0x7u, 0, 4);
    // 0d3571  jle 0xd357d
    X86_AT(c, 0xd3571u);
    if (x86_cc(c, 14)) { goto L_d357d; }
    X86_TICK(c, 2);
    // 0d3573  mov dword ptr [0xa605c], 0
    X86_AT(c, 0xd3573u);
    wr32((c.sbase[3] + (uint32_t)(0xA605Cu)), 0x0u);
L_d357d:
    X86_TICK(c, 21);
    // 0d357d  mov eax, dword ptr [0xa6060]
    X86_AT(c, 0xd357du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6060u)));
    // 0d3582  cdq 
    X86_AT(c, 0xd3582u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d3583  sub eax, edx
    X86_AT(c, 0xd3583u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d3585  sar eax, 1
    X86_AT(c, 0xd3585u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d3587  xchg edi, eax
    X86_AT(c, 0xd3587u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d3588  cmp edi, 3
    X86_AT(c, 0xd3588u);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0d358b  jle 0xd3595
    X86_AT(c, 0xd358bu);
    if (x86_cc(c, 14)) { goto L_d3595; }
    X86_TICK(c, 7);
    // 0d358d  mov eax, 5
    X86_AT(c, 0xd358du);
    c.r[0] = 0x5u;
    // 0d3592  sub eax, edi
    X86_AT(c, 0xd3592u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d3594  xchg edi, eax
    X86_AT(c, 0xd3594u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_d3595:
    X86_TICK(c, 20);
    // 0d3595  mov eax, edi
    X86_AT(c, 0xd3595u);
    c.r[0] = c.r[7];
    // 0d3597  shl eax, 9
    X86_AT(c, 0xd3597u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0d359a  add eax, 0x5fda8
    X86_AT(c, 0xd359au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5FDA8u, 0, 4); }
    // 0d359f  mov dword ptr [0x9c48c], eax
    X86_AT(c, 0xd359fu);
    wr32((c.sbase[3] + (uint32_t)(0x9C48Cu)), c.r[0]);
    // 0d35a4  mov eax, dword ptr [0xa6058]
    X86_AT(c, 0xd35a4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6058u)));
    // 0d35a9  cmp esi, eax
    X86_AT(c, 0xd35a9u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0d35ab  je 0xd35c6
    X86_AT(c, 0xd35abu);
    if (x86_cc(c, 4)) { goto L_d35c6; }
    X86_TICK(c, 12);
    // 0d35ad  mov edx, dword ptr [eax*8 + 0xaef4c]
    X86_AT(c, 0xd35adu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 8 + 0xAEF4Cu)));
    // 0d35b4  mov dword ptr [0xa6068], edx
    X86_AT(c, 0xd35b4u);
    wr32((c.sbase[3] + (uint32_t)(0xA6068u)), c.r[2]);
    // 0d35ba  mov eax, dword ptr [eax*8 + 0xaef50]
    X86_AT(c, 0xd35bau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 8 + 0xAEF50u)));
    // 0d35c1  mov dword ptr [0xa606c], eax
    X86_AT(c, 0xd35c1u);
    wr32((c.sbase[3] + (uint32_t)(0xA606Cu)), c.r[0]);
L_d35c6:
    X86_TICK(c, 12);
    // 0d35c6  cmp dword ptr [0xa6058], 0
    X86_AT(c, 0xd35c6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6058u))), 0x0u, 0, 4);
    // 0d35cd  jne 0xd360a
    X86_AT(c, 0xd35cdu);
    if (x86_cc(c, 5)) { goto L_d360a; }
    X86_TICK(c, 12);
    // 0d35cf  cmp dword ptr [0xa605c], 0
    X86_AT(c, 0xd35cfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA605Cu))), 0x0u, 0, 4);
    // 0d35d6  jne 0xd360a
    X86_AT(c, 0xd35d6u);
    if (x86_cc(c, 5)) { goto L_d360a; }
    X86_TICK(c, 14);
    // 0d35d8  mov byte ptr [0x8bd0d], 7
    X86_AT(c, 0xd35d8u);
    wr8((c.sbase[3] + (uint32_t)(0x8BD0Du)), 0x7u);
    // 0d35df  cmp dword ptr [0xb04b0], 0xffffffff
    X86_AT(c, 0xd35dfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB04B0u))), 0xFFFFFFFFu, 0, 4);
    // 0d35e6  jne 0xd35fe
    X86_AT(c, 0xd35e6u);
    if (x86_cc(c, 5)) { goto L_d35fe; }
    X86_TICK(c, 19);
    // 0d35e8  push 4
    X86_AT(c, 0xd35e8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d35ea  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd35eau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d35f0  push dword ptr [0xa4a76]
    X86_AT(c, 0xd35f0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d35f6  call 0xbd068
    X86_AT(c, 0xd35f6u);
    push32(c, 0xd35fbu); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd35fbu);
    X86_TICK(c, 2);
    // 0d35fb  add esp, 0xc
    X86_AT(c, 0xd35fbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d35fe:
    X86_TICK(c, 9);
    // 0d35fe  mov dword ptr [0xb04b0], 0
    X86_AT(c, 0xd35feu);
    wr32((c.sbase[3] + (uint32_t)(0xB04B0u)), 0x0u);
    // 0d3608  jmp 0xd363a
    X86_AT(c, 0xd3608u);
    goto L_d363a;
L_d360a:
    X86_TICK(c, 12);
    // 0d360a  cmp dword ptr [0xb04b0], 0
    X86_AT(c, 0xd360au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB04B0u))), 0x0u, 0, 4);
    // 0d3611  jne 0xd3633
    X86_AT(c, 0xd3611u);
    if (x86_cc(c, 5)) { goto L_d3633; }
    X86_TICK(c, 19);
    // 0d3613  push 4
    X86_AT(c, 0xd3613u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d3615  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd3615u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d361b  push dword ptr [0xa4a76]
    X86_AT(c, 0xd361bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d3621  call 0xbd068
    X86_AT(c, 0xd3621u);
    push32(c, 0xd3626u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd3626u);
    X86_TICK(c, 4);
    // 0d3626  mov dword ptr [0xb04b0], 0xffffffff
    X86_AT(c, 0xd3626u);
    wr32((c.sbase[3] + (uint32_t)(0xB04B0u)), 0xFFFFFFFFu);
    // 0d3630  add esp, 0xc
    X86_AT(c, 0xd3630u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d3633:
    X86_TICK(c, 2);
    // 0d3633  mov byte ptr [0x8bd0d], 4
    X86_AT(c, 0xd3633u);
    wr8((c.sbase[3] + (uint32_t)(0x8BD0Du)), 0x4u);
L_d363a:
    X86_TICK(c, 9);
    // 0d363a  push 8
    X86_AT(c, 0xd363au);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d363c  call 0xbb6b0
    X86_AT(c, 0xd363cu);
    push32(c, 0xd3641u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd3641u);
    X86_TICK(c, 13);
    // 0d3641  push 0
    X86_AT(c, 0xd3641u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3643  push 1
    X86_AT(c, 0xd3643u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3645  push 8
    X86_AT(c, 0xd3645u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d3647  call 0xbc174
    X86_AT(c, 0xd3647u);
    push32(c, 0xd364cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd364cu);
    X86_TICK(c, 20);
    // 0d364c  mov eax, dword ptr [0xa6058]
    X86_AT(c, 0xd364cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6058u)));
    // 0d3651  shl eax, 5
    X86_AT(c, 0xd3651u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0d3654  add eax, 0xb099c
    X86_AT(c, 0xd3654u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB099Cu, 0, 4); }
    // 0d3659  push eax
    X86_AT(c, 0xd3659u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d365a  push 8
    X86_AT(c, 0xd365au);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d365c  call 0xbc040
    X86_AT(c, 0xd365cu);
    push32(c, 0xd3661u); x86_call_known(c, 0xbc040u, f_000bc040); X86_RET(c, 0xd3661u);
    X86_TICK(c, 13);
    // 0d3661  push 0
    X86_AT(c, 0xd3661u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3663  push 4
    X86_AT(c, 0xd3663u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d3665  push 8
    X86_AT(c, 0xd3665u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d3667  call 0xbc174
    X86_AT(c, 0xd3667u);
    push32(c, 0xd366cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd366cu);
    X86_TICK(c, 20);
    // 0d366c  mov eax, dword ptr [0xa605c]
    X86_AT(c, 0xd366cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA605Cu)));
    // 0d3671  shl eax, 5
    X86_AT(c, 0xd3671u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0d3674  add eax, 0xb099c
    X86_AT(c, 0xd3674u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB099Cu, 0, 4); }
    // 0d3679  push eax
    X86_AT(c, 0xd3679u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d367a  push 8
    X86_AT(c, 0xd367au);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d367c  call 0xbc040
    X86_AT(c, 0xd367cu);
    push32(c, 0xd3681u); x86_call_known(c, 0xbc040u, f_000bc040); X86_RET(c, 0xd3681u);
    X86_TICK(c, 26);
    // 0d3681  add esp, 0x2c
    X86_AT(c, 0xd3681u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d3684  pop edi
    X86_AT(c, 0xd3684u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3685  pop esi
    X86_AT(c, 0xd3685u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3686  leave 
    X86_AT(c, 0xd3686u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3687  ret 
    X86_AT(c, 0xd3687u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd34f8u, "ran off the end of a function");
}
}

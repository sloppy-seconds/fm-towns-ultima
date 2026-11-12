#include "p_game_funcs.h"
namespace p_game {
void f_000d5aa4(X86Cpu& c) {
    goto L_d5aa4;
L_d5722:
    X86_TICK(c, 12);
    // 0d5722  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd5722u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d5729  jle 0xd5ae0
    X86_AT(c, 0xd5729u);
    if (x86_cc(c, 14)) { goto L_d5ae0; }
    X86_TICK(c, 12);
    // 0d572f  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xd572fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0d5736  jle 0xd5ae0
    X86_AT(c, 0xd5736u);
    if (x86_cc(c, 14)) { goto L_d5ae0; }
    X86_TICK(c, 11);
    // 0d573c  sub edi, edi
    X86_AT(c, 0xd573cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d573e  push 7
    X86_AT(c, 0xd573eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5740  call 0xca0a0
    X86_AT(c, 0xd5740u);
    push32(c, 0xd5745u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd5745u);
    X86_TICK(c, 2);
    // 0d5745  add esp, 4
    X86_AT(c, 0xd5745u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d5748:
    X86_TICK(c, 9);
    // 0d5748  push 7
    X86_AT(c, 0xd5748u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d574a  call 0xcad80
    X86_AT(c, 0xd574au);
    push32(c, 0xd574fu); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xd574fu);
    X86_TICK(c, 9);
    // 0d574f  push 7
    X86_AT(c, 0xd574fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5751  call 0xc7dc8
    X86_AT(c, 0xd5751u);
    push32(c, 0xd5756u); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xd5756u);
    X86_TICK(c, 14);
    // 0d5756  xchg ebx, eax
    X86_AT(c, 0xd5756u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d5757  inc edi
    X86_AT(c, 0xd5757u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d5758  add esp, 8
    X86_AT(c, 0xd5758u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d575b  and bl, bl
    X86_AT(c, 0xd575bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d575d  jne 0xd5767
    X86_AT(c, 0xd575du);
    if (x86_cc(c, 5)) { goto L_d5767; }
    X86_TICK(c, 7);
    // 0d575f  cmp edi, 0x5dc
    X86_AT(c, 0xd575fu);
    (void)x86_sub(c, c.r[7], 0x5DCu, 0, 4);
    // 0d5765  jl 0xd5748
    X86_AT(c, 0xd5765u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xd5748u); goto L_d5748; }
L_d5767:
    X86_TICK(c, 7);
    // 0d5767  and bl, bl
    X86_AT(c, 0xd5767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d5769  jne 0xd576d
    X86_AT(c, 0xd5769u);
    if (x86_cc(c, 5)) { goto L_d576d; }
    X86_TICK(c, 2);
    // 0d576b  mov bl, 0x20
    X86_AT(c, 0xd576bu);
    s8(c, 3, 0x20u);
L_d576d:
    X86_TICK(c, 12);
    // 0d576d  movzx edx, bl
    X86_AT(c, 0xd576du);
    c.r[2] = g8(c, 3);
    // 0d5770  dec edx
    X86_AT(c, 0xd5770u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d5771  cmp edx, 0x59
    X86_AT(c, 0xd5771u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0d5774  ja 0xd5a90
    X86_AT(c, 0xd5774u);
    if (x86_cc(c, 7)) { goto L_d5a90; }
    X86_TICK(c, 7);
    // 0d577a  jmp dword ptr cs:[edx*4 + 0xd5782]
    X86_AT(c, 0xd577au);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD5782u)));
      switch (t) {
      case 0xd58eau: goto L_d58ea;
      case 0xd5915u: goto L_d5915;
      case 0xd593cu: goto L_d593c;
      case 0xd5977u: goto L_d5977;
      case 0xd59b9u: goto L_d59b9;
      case 0xd59c8u: goto L_d59c8;
      case 0xd59d2u: goto L_d59d2;
      case 0xd59dcu: goto L_d59dc;
      case 0xd59e6u: goto L_d59e6;
      case 0xd59f0u: goto L_d59f0;
      case 0xd59fau: goto L_d59fa;
      case 0xd5a04u: goto L_d5a04;
      case 0xd5a0eu: goto L_d5a0e;
      case 0xd5a18u: goto L_d5a18;
      case 0xd5a22u: goto L_d5a22;
      case 0xd5a2cu: goto L_d5a2c;
      case 0xd5a36u: goto L_d5a36;
      case 0xd5a40u: goto L_d5a40;
      case 0xd5a47u: goto L_d5a47;
      case 0xd5a4eu: goto L_d5a4e;
      case 0xd5a55u: goto L_d5a55;
      case 0xd5a5cu: goto L_d5a5c;
      case 0xd5a63u: goto L_d5a63;
      case 0xd5a6au: goto L_d5a6a;
      case 0xd5a71u: goto L_d5a71;
      case 0xd5a78u: goto L_d5a78;
      case 0xd5a89u: goto L_d5a89;
      case 0xd5a90u: goto L_d5a90;
      default: x86_jump(c, t); return; } }
L_d58ea:
    X86_TICK(c, 12);
    // 0d58ea  movzx ebx, bl
    X86_AT(c, 0xd58eau);
    c.r[3] = g8(c, 3);
    // 0d58ed  push ebx
    X86_AT(c, 0xd58edu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d58ee  call 0xd386c
    X86_AT(c, 0xd58eeu);
    push32(c, 0xd58f3u); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd58f3u);
    X86_TICK(c, 9);
    // 0d58f3  add esp, 4
    X86_AT(c, 0xd58f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d58f6  dec eax
    X86_AT(c, 0xd58f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d58f7  jne 0xd596e
    X86_AT(c, 0xd58f7u);
    if (x86_cc(c, 5)) { goto L_d596e; }
    X86_TICK(c, 17);
    // 0d58fd  push dword ptr [0xb033e]
    X86_AT(c, 0xd58fdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d5903  push dword ptr [0xb033a]
    X86_AT(c, 0xd5903u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5909  call 0xcf89c
    X86_AT(c, 0xd5909u);
    push32(c, 0xd590eu); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd590eu);
    X86_TICK(c, 11);
    // 0d590e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd590eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d5911  push 3
    X86_AT(c, 0xd5911u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d5913  jmp 0xd5961
    X86_AT(c, 0xd5913u);
    goto L_d5961;
L_d5915:
    X86_TICK(c, 12);
    // 0d5915  movzx ebx, bl
    X86_AT(c, 0xd5915u);
    c.r[3] = g8(c, 3);
    // 0d5918  push ebx
    X86_AT(c, 0xd5918u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5919  call 0xd386c
    X86_AT(c, 0xd5919u);
    push32(c, 0xd591eu); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd591eu);
    X86_TICK(c, 9);
    // 0d591e  add esp, 4
    X86_AT(c, 0xd591eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5921  dec eax
    X86_AT(c, 0xd5921u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5922  jne 0xd596e
    X86_AT(c, 0xd5922u);
    if (x86_cc(c, 5)) { goto L_d596e; }
    X86_TICK(c, 17);
    // 0d5924  push dword ptr [0xb033e]
    X86_AT(c, 0xd5924u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d592a  push dword ptr [0xb033a]
    X86_AT(c, 0xd592au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5930  call 0xcf89c
    X86_AT(c, 0xd5930u);
    push32(c, 0xd5935u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd5935u);
    X86_TICK(c, 11);
    // 0d5935  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd5935u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d5938  push 7
    X86_AT(c, 0xd5938u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d593a  jmp 0xd5961
    X86_AT(c, 0xd593au);
    goto L_d5961;
L_d593c:
    X86_TICK(c, 12);
    // 0d593c  movzx ebx, bl
    X86_AT(c, 0xd593cu);
    c.r[3] = g8(c, 3);
    // 0d593f  push ebx
    X86_AT(c, 0xd593fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5940  call 0xd386c
    X86_AT(c, 0xd5940u);
    push32(c, 0xd5945u); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd5945u);
    X86_TICK(c, 9);
    // 0d5945  add esp, 4
    X86_AT(c, 0xd5945u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5948  dec eax
    X86_AT(c, 0xd5948u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5949  jne 0xd596e
    X86_AT(c, 0xd5949u);
    if (x86_cc(c, 5)) { goto L_d596e; }
    X86_TICK(c, 17);
    // 0d594b  push dword ptr [0xb033e]
    X86_AT(c, 0xd594bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d5951  push dword ptr [0xb033a]
    X86_AT(c, 0xd5951u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5957  call 0xcf89c
    X86_AT(c, 0xd5957u);
    push32(c, 0xd595cu); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd595cu);
    X86_TICK(c, 4);
    // 0d595c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd595cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d595f  push 5
    X86_AT(c, 0xd595fu);
    { uint32_t v = 0x5u; push32(c, v); }
L_d5961:
    X86_TICK(c, 7);
    // 0d5961  call 0xd448c
    X86_AT(c, 0xd5961u);
    push32(c, 0xd5966u); x86_call_known(c, 0xd448cu, f_000d448c); X86_RET(c, 0xd5966u);
    X86_TICK(c, 9);
    // 0d5966  add esp, 0xc
    X86_AT(c, 0xd5966u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d5969  jmp 0xd5aa4
    X86_AT(c, 0xd5969u);
    goto L_d5aa4;
L_d596e:
    X86_TICK(c, 9);
    // 0d596e  push 0
    X86_AT(c, 0xd596eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5970  call 0xc5ca4
    X86_AT(c, 0xd5970u);
    push32(c, 0xd5975u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd5975u);
    X86_TICK(c, 7);
    // 0d5975  jmp 0xd59c0
    X86_AT(c, 0xd5975u);
    goto L_d59c0;
L_d5977:
    X86_TICK(c, 12);
    // 0d5977  movzx ebx, bl
    X86_AT(c, 0xd5977u);
    c.r[3] = g8(c, 3);
    // 0d597a  push ebx
    X86_AT(c, 0xd597au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d597b  call 0xd386c
    X86_AT(c, 0xd597bu);
    push32(c, 0xd5980u); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd5980u);
    X86_TICK(c, 9);
    // 0d5980  add esp, 4
    X86_AT(c, 0xd5980u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5983  dec eax
    X86_AT(c, 0xd5983u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5984  jne 0xd59a6
    X86_AT(c, 0xd5984u);
    if (x86_cc(c, 5)) { goto L_d59a6; }
    X86_TICK(c, 17);
    // 0d5986  push dword ptr [0xb033e]
    X86_AT(c, 0xd5986u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d598c  push dword ptr [0xb033a]
    X86_AT(c, 0xd598cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5992  call 0xcf89c
    X86_AT(c, 0xd5992u);
    push32(c, 0xd5997u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd5997u);
    X86_TICK(c, 11);
    // 0d5997  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd5997u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d599a  push 6
    X86_AT(c, 0xd599au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d599c  call 0xd448c
    X86_AT(c, 0xd599cu);
    push32(c, 0xd59a1u); x86_call_known(c, 0xd448cu, f_000d448c); X86_RET(c, 0xd59a1u);
    X86_TICK(c, 9);
    // 0d59a1  add esp, 0xc
    X86_AT(c, 0xd59a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d59a4  jmp 0xd59b0
    X86_AT(c, 0xd59a4u);
    goto L_d59b0;
L_d59a6:
    X86_TICK(c, 9);
    // 0d59a6  push 0
    X86_AT(c, 0xd59a6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d59a8  call 0xc5ca4
    X86_AT(c, 0xd59a8u);
    push32(c, 0xd59adu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd59adu);
    X86_TICK(c, 2);
    // 0d59ad  add esp, 4
    X86_AT(c, 0xd59adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d59b0:
    X86_TICK(c, 9);
    // 0d59b0  push 0
    X86_AT(c, 0xd59b0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d59b2  call 0xc60ac
    X86_AT(c, 0xd59b2u);
    push32(c, 0xd59b7u); x86_call_known(c, 0xc60acu, f_000c60ac); X86_RET(c, 0xd59b7u);
    X86_TICK(c, 7);
    // 0d59b7  jmp 0xd59c0
    X86_AT(c, 0xd59b7u);
    goto L_d59c0;
L_d59b9:
    X86_TICK(c, 9);
    // 0d59b9  push 0xffffffff
    X86_AT(c, 0xd59b9u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d59bb  call 0xcf580
    X86_AT(c, 0xd59bbu);
    push32(c, 0xd59c0u); x86_call_known(c, 0xcf580u, f_000cf580); X86_RET(c, 0xd59c0u);
L_d59c0:
    X86_TICK(c, 9);
    // 0d59c0  add esp, 4
    X86_AT(c, 0xd59c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d59c3  jmp 0xd5aa4
    X86_AT(c, 0xd59c3u);
    goto L_d5aa4;
L_d59c8:
    X86_TICK(c, 7);
    // 0d59c8  call 0xcc9e0
    X86_AT(c, 0xd59c8u);
    push32(c, 0xd59cdu); x86_call_known(c, 0xcc9e0u, f_000cc9e0); X86_RET(c, 0xd59cdu);
    X86_TICK(c, 7);
    // 0d59cd  jmp 0xd5aa4
    X86_AT(c, 0xd59cdu);
    goto L_d5aa4;
L_d59d2:
    X86_TICK(c, 7);
    // 0d59d2  call 0xcd1a8
    X86_AT(c, 0xd59d2u);
    push32(c, 0xd59d7u); x86_call_known(c, 0xcd1a8u, f_000cd1a8); X86_RET(c, 0xd59d7u);
    X86_TICK(c, 7);
    // 0d59d7  jmp 0xd5aa4
    X86_AT(c, 0xd59d7u);
    goto L_d5aa4;
L_d59dc:
    X86_TICK(c, 7);
    // 0d59dc  call 0xcd824
    X86_AT(c, 0xd59dcu);
    push32(c, 0xd59e1u); x86_call_known(c, 0xcd824u, f_000cd824); X86_RET(c, 0xd59e1u);
    X86_TICK(c, 7);
    // 0d59e1  jmp 0xd5aa4
    X86_AT(c, 0xd59e1u);
    goto L_d5aa4;
L_d59e6:
    X86_TICK(c, 7);
    // 0d59e6  call 0xd4c30
    X86_AT(c, 0xd59e6u);
    push32(c, 0xd59ebu); x86_call_known(c, 0xd4c30u, f_000d4c30); X86_RET(c, 0xd59ebu);
    X86_TICK(c, 7);
    // 0d59eb  jmp 0xd5aa4
    X86_AT(c, 0xd59ebu);
    goto L_d5aa4;
L_d59f0:
    X86_TICK(c, 7);
    // 0d59f0  call 0xcd8c0
    X86_AT(c, 0xd59f0u);
    push32(c, 0xd59f5u); x86_call_known(c, 0xcd8c0u, f_000cd8c0); X86_RET(c, 0xd59f5u);
    X86_TICK(c, 7);
    // 0d59f5  jmp 0xd5aa4
    X86_AT(c, 0xd59f5u);
    goto L_d5aa4;
L_d59fa:
    X86_TICK(c, 7);
    // 0d59fa  call 0xcfa18
    X86_AT(c, 0xd59fau);
    push32(c, 0xd59ffu); x86_call_known(c, 0xcfa18u, f_000cfa18); X86_RET(c, 0xd59ffu);
    X86_TICK(c, 7);
    // 0d59ff  jmp 0xd5aa4
    X86_AT(c, 0xd59ffu);
    goto L_d5aa4;
L_d5a04:
    X86_TICK(c, 7);
    // 0d5a04  call 0xcd938
    X86_AT(c, 0xd5a04u);
    push32(c, 0xd5a09u); x86_call_known(c, 0xcd938u, f_000cd938); X86_RET(c, 0xd5a09u);
    X86_TICK(c, 7);
    // 0d5a09  jmp 0xd5aa4
    X86_AT(c, 0xd5a09u);
    goto L_d5aa4;
L_d5a0e:
    X86_TICK(c, 7);
    // 0d5a0e  call 0xcd9f0
    X86_AT(c, 0xd5a0eu);
    push32(c, 0xd5a13u); x86_call_known(c, 0xcd9f0u, f_000cd9f0); X86_RET(c, 0xd5a13u);
    X86_TICK(c, 7);
    // 0d5a13  jmp 0xd5aa4
    X86_AT(c, 0xd5a13u);
    goto L_d5aa4;
L_d5a18:
    X86_TICK(c, 7);
    // 0d5a18  call 0xce424
    X86_AT(c, 0xd5a18u);
    push32(c, 0xd5a1du); x86_call_known(c, 0xce424u, f_000ce424); X86_RET(c, 0xd5a1du);
    X86_TICK(c, 7);
    // 0d5a1d  jmp 0xd5aa4
    X86_AT(c, 0xd5a1du);
    goto L_d5aa4;
L_d5a22:
    X86_TICK(c, 7);
    // 0d5a22  call 0xdc4d4
    X86_AT(c, 0xd5a22u);
    push32(c, 0xd5a27u); x86_call_known(c, 0xdc4d4u, f_000dc4d4); X86_RET(c, 0xd5a27u);
    X86_TICK(c, 7);
    // 0d5a27  jmp 0xd5aa4
    X86_AT(c, 0xd5a27u);
    goto L_d5aa4;
L_d5a2c:
    X86_TICK(c, 7);
    // 0d5a2c  call 0xcfa5c
    X86_AT(c, 0xd5a2cu);
    push32(c, 0xd5a31u); x86_call_known(c, 0xcfa5cu, f_000cfa5c); X86_RET(c, 0xd5a31u);
    X86_TICK(c, 7);
    // 0d5a31  jmp 0xd5aa4
    X86_AT(c, 0xd5a31u);
    goto L_d5aa4;
L_d5a36:
    X86_TICK(c, 7);
    // 0d5a36  call 0xcdbe8
    X86_AT(c, 0xd5a36u);
    push32(c, 0xd5a3bu); x86_call_known(c, 0xcdbe8u, f_000cdbe8); X86_RET(c, 0xd5a3bu);
    X86_TICK(c, 7);
    // 0d5a3b  jmp 0xd5aa4
    X86_AT(c, 0xd5a3bu);
    goto L_d5aa4;
L_d5a40:
    X86_TICK(c, 7);
    // 0d5a40  call 0xcdfdc
    X86_AT(c, 0xd5a40u);
    push32(c, 0xd5a45u); x86_call_known(c, 0xcdfdcu, f_000cdfdc); X86_RET(c, 0xd5a45u);
    X86_TICK(c, 7);
    // 0d5a45  jmp 0xd5aa4
    X86_AT(c, 0xd5a45u);
    goto L_d5aa4;
L_d5a47:
    X86_TICK(c, 7);
    // 0d5a47  call 0xcfc24
    X86_AT(c, 0xd5a47u);
    push32(c, 0xd5a4cu); x86_call_known(c, 0xcfc24u, f_000cfc24); X86_RET(c, 0xd5a4cu);
    X86_TICK(c, 7);
    // 0d5a4c  jmp 0xd5aa4
    X86_AT(c, 0xd5a4cu);
    goto L_d5aa4;
L_d5a4e:
    X86_TICK(c, 7);
    // 0d5a4e  call 0xcff4c
    X86_AT(c, 0xd5a4eu);
    push32(c, 0xd5a53u); x86_call_known(c, 0xcff4cu, f_000cff4c); X86_RET(c, 0xd5a53u);
    X86_TICK(c, 7);
    // 0d5a53  jmp 0xd5aa4
    X86_AT(c, 0xd5a53u);
    goto L_d5aa4;
L_d5a55:
    X86_TICK(c, 7);
    // 0d5a55  call 0xd20ec
    X86_AT(c, 0xd5a55u);
    push32(c, 0xd5a5au); x86_call_known(c, 0xd20ecu, f_000d20ec); X86_RET(c, 0xd5a5au);
    X86_TICK(c, 7);
    // 0d5a5a  jmp 0xd5aa4
    X86_AT(c, 0xd5a5au);
    goto L_d5aa4;
L_d5a5c:
    X86_TICK(c, 7);
    // 0d5a5c  call 0xce1d0
    X86_AT(c, 0xd5a5cu);
    push32(c, 0xd5a61u); x86_call_known(c, 0xce1d0u, f_000ce1d0); X86_RET(c, 0xd5a61u);
    X86_TICK(c, 7);
    // 0d5a61  jmp 0xd5aa4
    X86_AT(c, 0xd5a61u);
    goto L_d5aa4;
L_d5a63:
    X86_TICK(c, 7);
    // 0d5a63  call 0xce258
    X86_AT(c, 0xd5a63u);
    push32(c, 0xd5a68u); x86_call_known(c, 0xce258u, f_000ce258); X86_RET(c, 0xd5a68u);
    X86_TICK(c, 7);
    // 0d5a68  jmp 0xd5aa4
    X86_AT(c, 0xd5a68u);
    goto L_d5aa4;
L_d5a6a:
    X86_TICK(c, 7);
    // 0d5a6a  call 0xce270
    X86_AT(c, 0xd5a6au);
    push32(c, 0xd5a6fu); x86_call_known(c, 0xce270u, f_000ce270); X86_RET(c, 0xd5a6fu);
    X86_TICK(c, 7);
    // 0d5a6f  jmp 0xd5aa4
    X86_AT(c, 0xd5a6fu);
    goto L_d5aa4;
L_d5a71:
    X86_TICK(c, 7);
    // 0d5a71  call 0xce57c
    X86_AT(c, 0xd5a71u);
    push32(c, 0xd5a76u); x86_call_known(c, 0xce57cu, f_000ce57c); X86_RET(c, 0xd5a76u);
    X86_TICK(c, 7);
    // 0d5a76  jmp 0xd5aa4
    X86_AT(c, 0xd5a76u);
    goto L_d5aa4;
L_d5a78:
    X86_TICK(c, 7);
    // 0d5a78  call 0xd238c
    X86_AT(c, 0xd5a78u);
    push32(c, 0xd5a7du); x86_call_known(c, 0xd238cu, f_000d238c); X86_RET(c, 0xd5a7du);
    X86_TICK(c, 9);
    // 0d5a7d  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xd5a7du);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0d5a87  jmp 0xd5aa4
    X86_AT(c, 0xd5a87u);
    goto L_d5aa4;
L_d5a89:
    X86_TICK(c, 7);
    // 0d5a89  call 0xcdcf8
    X86_AT(c, 0xd5a89u);
    push32(c, 0xd5a8eu); x86_call_known(c, 0xcdcf8u, f_000cdcf8); X86_RET(c, 0xd5a8eu);
    X86_TICK(c, 7);
    // 0d5a8e  jmp 0xd5aa4
    X86_AT(c, 0xd5a8eu);
    goto L_d5aa4;
L_d5a90:
    X86_TICK(c, 9);
    // 0d5a90  push 0x9cac
    X86_AT(c, 0xd5a90u);
    { uint32_t v = 0x9CACu; push32(c, v); }
    // 0d5a95  call 0xcc7bc
    X86_AT(c, 0xd5a95u);
    push32(c, 0xd5a9au); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd5a9au);
    X86_TICK(c, 9);
    // 0d5a9a  push 1
    X86_AT(c, 0xd5a9au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d5a9c  call 0xc5ca4
    X86_AT(c, 0xd5a9cu);
    push32(c, 0xd5aa1u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd5aa1u);
    X86_TICK(c, 2);
    // 0d5aa1  add esp, 8
    X86_AT(c, 0xd5aa1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d5aa4:
    X86_TICK(c, 9);
    // 0d5aa4  push 3
    X86_AT(c, 0xd5aa4u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d5aa6  call 0xca3cc
    X86_AT(c, 0xd5aa6u);
    push32(c, 0xd5aabu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd5aabu);
    X86_TICK(c, 14);
    // 0d5aab  add esp, 4
    X86_AT(c, 0xd5aabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5aae  cmp byte ptr [0x92494], 0
    X86_AT(c, 0xd5aaeu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x92494u))), 0x0u, 0, 1);
    // 0d5ab5  jne 0xd5ac3
    X86_AT(c, 0xd5ab5u);
    if (x86_cc(c, 5)) { goto L_d5ac3; }
    X86_TICK(c, 9);
    // 0d5ab7  mov dword ptr [0xb52f8], 6
    X86_AT(c, 0xd5ab7u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x6u);
    // 0d5ac1  jmp 0xd5ae0
    X86_AT(c, 0xd5ac1u);
    goto L_d5ae0;
L_d5ac3:
    X86_TICK(c, 13);
    // 0d5ac3  inc dword ptr [0xaa2dc]
    X86_AT(c, 0xd5ac3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d5ac9  call 0xd32d4
    X86_AT(c, 0xd5ac9u);
    push32(c, 0xd5aceu); x86_call_known(c, 0xd32d4u, f_000d32d4); X86_RET(c, 0xd5aceu);
    X86_TICK(c, 7);
    // 0d5ace  call 0xd3334
    X86_AT(c, 0xd5aceu);
    push32(c, 0xd5ad3u); x86_call_known(c, 0xd3334u, f_000d3334); X86_RET(c, 0xd5ad3u);
    X86_TICK(c, 12);
    // 0d5ad3  cmp dword ptr [0xb52f8], 2
    X86_AT(c, 0xd5ad3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x2u, 0, 4);
    // 0d5ada  je 0xd5722
    X86_AT(c, 0xd5adau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd5722u); goto L_d5722; }
L_d5ae0:
    X86_TICK(c, 23);
    // 0d5ae0  mov eax, dword ptr [0xaa0e4]
    X86_AT(c, 0xd5ae0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E4u)));
    // 0d5ae5  mov dword ptr [0xb033a], eax
    X86_AT(c, 0xd5ae5u);
    wr32((c.sbase[3] + (uint32_t)(0xB033Au)), c.r[0]);
    // 0d5aea  mov eax, dword ptr [0xaa0e8]
    X86_AT(c, 0xd5aeau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E8u)));
    // 0d5aef  mov dword ptr [0xb033e], eax
    X86_AT(c, 0xd5aefu);
    wr32((c.sbase[3] + (uint32_t)(0xB033Eu)), c.r[0]);
    // 0d5af4  mov dword ptr [0xb52f8], 0
    X86_AT(c, 0xd5af4u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x0u);
    // 0d5afe  push 0x9cbc
    X86_AT(c, 0xd5afeu);
    { uint32_t v = 0x9CBCu; push32(c, v); }
    // 0d5b03  call 0xcba5c
    X86_AT(c, 0xd5b03u);
    push32(c, 0xd5b08u); x86_call_known(c, 0xcba5cu, f_000cba5c); X86_RET(c, 0xd5b08u);
    X86_TICK(c, 14);
    // 0d5b08  add esp, 4
    X86_AT(c, 0xd5b08u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5b0b  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd5b0bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d5b12  jle 0xd5b1d
    X86_AT(c, 0xd5b12u);
    if (x86_cc(c, 14)) { goto L_d5b1d; }
    X86_TICK(c, 12);
    // 0d5b14  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xd5b14u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0d5b1b  jg 0xd5b24
    X86_AT(c, 0xd5b1bu);
    if (x86_cc(c, 15)) { goto L_d5b24; }
L_d5b1d:
    X86_TICK(c, 7);
    // 0d5b1d  call 0xd2f10
    X86_AT(c, 0xd5b1du);
    push32(c, 0xd5b22u); x86_call_known(c, 0xd2f10u, f_000d2f10); X86_RET(c, 0xd5b22u);
    X86_TICK(c, 7);
    // 0d5b22  jmp 0xd5b78
    X86_AT(c, 0xd5b22u);
    goto L_d5b78;
L_d5b24:
    X86_TICK(c, 9);
    // 0d5b24  push 0
    X86_AT(c, 0xd5b24u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5b26  call 0xc71e0
    X86_AT(c, 0xd5b26u);
    push32(c, 0xd5b2bu); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xd5b2bu);
    X86_TICK(c, 9);
    // 0d5b2b  push 0x42b8c
    X86_AT(c, 0xd5b2bu);
    { uint32_t v = 0x42B8Cu; push32(c, v); }
    // 0d5b30  call 0xcbf54
    X86_AT(c, 0xd5b30u);
    push32(c, 0xd5b35u); x86_call_known(c, 0xcbf54u, f_000cbf54); X86_RET(c, 0xd5b35u);
    X86_TICK(c, 7);
    // 0d5b35  call 0xc6a28
    X86_AT(c, 0xd5b35u);
    push32(c, 0xd5b3au); x86_call_known(c, 0xc6a28u, f_000c6a28); X86_RET(c, 0xd5b3au);
    X86_TICK(c, 4);
    // 0d5b3a  sub esi, esi
    X86_AT(c, 0xd5b3au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d5b3c  add esp, 8
    X86_AT(c, 0xd5b3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d5b3f:
    X86_TICK(c, 11);
    // 0d5b3f  cmp esi, dword ptr [0xaa0ec]
    X86_AT(c, 0xd5b3fu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xAA0ECu))), 0, 4);
    // 0d5b45  jge 0xd5b59
    X86_AT(c, 0xd5b45u);
    if (x86_cc(c, 13)) { goto L_d5b59; }
    X86_TICK(c, 12);
    // 0d5b47  push dword ptr [esi*4 + 0xaa0f0]
    X86_AT(c, 0xd5b47u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xAA0F0u))); push32(c, v); }
    // 0d5b4e  call 0xd5464
    X86_AT(c, 0xd5b4eu);
    push32(c, 0xd5b53u); x86_call_known(c, 0xd5464u, f_000d5464); X86_RET(c, 0xd5b53u);
    X86_TICK(c, 11);
    // 0d5b53  inc esi
    X86_AT(c, 0xd5b53u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d5b54  add esp, 4
    X86_AT(c, 0xd5b54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5b57  jmp 0xd5b3f
    X86_AT(c, 0xd5b57u);
    X86_POLL(c, 0xd5b3fu); goto L_d5b3f;
L_d5b59:
    X86_TICK(c, 9);
    // 0d5b59  push 1
    X86_AT(c, 0xd5b59u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d5b5b  call 0xc5e44
    X86_AT(c, 0xd5b5bu);
    push32(c, 0xd5b60u); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xd5b60u);
    X86_TICK(c, 9);
    // 0d5b60  push 7
    X86_AT(c, 0xd5b60u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5b62  call 0xcacd4
    X86_AT(c, 0xd5b62u);
    push32(c, 0xd5b67u); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xd5b67u);
    X86_TICK(c, 9);
    // 0d5b67  push 7
    X86_AT(c, 0xd5b67u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5b69  call 0xca0a0
    X86_AT(c, 0xd5b69u);
    push32(c, 0xd5b6eu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd5b6eu);
    X86_TICK(c, 9);
    // 0d5b6e  push 7
    X86_AT(c, 0xd5b6eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5b70  call 0xcad80
    X86_AT(c, 0xd5b70u);
    push32(c, 0xd5b75u); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xd5b75u);
    X86_TICK(c, 2);
    // 0d5b75  add esp, 0x10
    X86_AT(c, 0xd5b75u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d5b78:
    X86_TICK(c, 28);
    // 0d5b78  pop edi
    X86_AT(c, 0xd5b78u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d5b79  pop esi
    X86_AT(c, 0xd5b79u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d5b7a  pop ebx
    X86_AT(c, 0xd5b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d5b7b  leave 
    X86_AT(c, 0xd5b7bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d5b7c  ret 
    X86_AT(c, 0xd5b7cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5aa4u, "ran off the end of a function");
}
void f_000d5b80(X86Cpu& c) {
    X86_TICK(c, 43);
    // 0d5b80  push ebp
    X86_AT(c, 0xd5b80u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d5b81  mov ebp, esp
    X86_AT(c, 0xd5b81u);
    c.r[5] = c.r[4];
    // 0d5b83  sub esp, 8
    X86_AT(c, 0xd5b83u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d5b86  push ebx
    X86_AT(c, 0xd5b86u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5b87  push esi
    X86_AT(c, 0xd5b87u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d5b88  push edi
    X86_AT(c, 0xd5b88u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d5b89  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xd5b89u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0d5b90  mov eax, dword ptr [0xb033a]
    X86_AT(c, 0xd5b90u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0d5b95  mov dword ptr [0xaa0e4], eax
    X86_AT(c, 0xd5b95u);
    wr32((c.sbase[3] + (uint32_t)(0xAA0E4u)), c.r[0]);
    // 0d5b9a  mov eax, dword ptr [0xb033e]
    X86_AT(c, 0xd5b9au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0d5b9f  mov dword ptr [0xaa0e8], eax
    X86_AT(c, 0xd5b9fu);
    wr32((c.sbase[3] + (uint32_t)(0xAA0E8u)), c.r[0]);
    // 0d5ba4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd5ba4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d5ba7  dec eax
    X86_AT(c, 0xd5ba7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5ba8  mov edx, eax
    X86_AT(c, 0xd5ba8u);
    c.r[2] = c.r[0];
    // 0d5baa  and eax, 7
    X86_AT(c, 0xd5baau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0d5baf  and edx, edx
    X86_AT(c, 0xd5bafu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0d5bb1  jge 0xd5bb6
    X86_AT(c, 0xd5bb1u);
    if (x86_cc(c, 13)) { goto L_d5bb6; }
    X86_TICK(c, 2);
    // 0d5bb3  sub eax, 8
    X86_AT(c, 0xd5bb3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x8u, 0, 4); }
L_d5bb6:
    X86_TICK(c, 9);
    // 0d5bb6  add eax, 2
    X86_AT(c, 0xd5bb6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0d5bb9  cmp eax, 5
    X86_AT(c, 0xd5bb9u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0d5bbc  jl 0xd5bca
    X86_AT(c, 0xd5bbcu);
    if (x86_cc(c, 12)) { goto L_d5bca; }
    X86_TICK(c, 9);
    // 0d5bbe  mov dword ptr [0xb033a], 0x4a
    X86_AT(c, 0xd5bbeu);
    wr32((c.sbase[3] + (uint32_t)(0xB033Au)), 0x4Au);
    // 0d5bc8  jmp 0xd5bd4
    X86_AT(c, 0xd5bc8u);
    goto L_d5bd4;
L_d5bca:
    X86_TICK(c, 2);
    // 0d5bca  mov dword ptr [0xb033a], 0x18
    X86_AT(c, 0xd5bcau);
    wr32((c.sbase[3] + (uint32_t)(0xB033Au)), 0x18u);
L_d5bd4:
    X86_TICK(c, 17);
    // 0d5bd4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd5bd4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d5bd7  dec eax
    X86_AT(c, 0xd5bd7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5bd8  mov edx, eax
    X86_AT(c, 0xd5bd8u);
    c.r[2] = c.r[0];
    // 0d5bda  and eax, 7
    X86_AT(c, 0xd5bdau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0d5bdf  and edx, edx
    X86_AT(c, 0xd5bdfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0d5be1  jge 0xd5be6
    X86_AT(c, 0xd5be1u);
    if (x86_cc(c, 13)) { goto L_d5be6; }
    X86_TICK(c, 2);
    // 0d5be3  sub eax, 8
    X86_AT(c, 0xd5be3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x8u, 0, 4); }
L_d5be6:
    X86_TICK(c, 56);
    // 0d5be6  add eax, 2
    X86_AT(c, 0xd5be6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0d5be9  cdq 
    X86_AT(c, 0xd5be9u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d5bea  mov ecx, 5
    X86_AT(c, 0xd5beau);
    c.r[1] = 0x5u;
    // 0d5bef  idiv ecx
    X86_AT(c, 0xd5befu);
    x86_idiv(c, c.r[1], 4, 0xd5befu);
    // 0d5bf1  lea edx, [edx + edx*4]
    X86_AT(c, 0xd5bf1u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0d5bf4  lea edx, [edx + edx*2]
    X86_AT(c, 0xd5bf4u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0d5bf7  lea edx, [edx + edx*1 + 0x16]
    X86_AT(c, 0xd5bf7u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] + 0x16u);
    // 0d5bfb  mov dword ptr [0xb033e], edx
    X86_AT(c, 0xd5bfbu);
    wr32((c.sbase[3] + (uint32_t)(0xB033Eu)), c.r[2]);
    // 0d5c01  sub esi, esi
    X86_AT(c, 0xd5c01u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_d5c03:
    X86_TICK(c, 7);
    // 0d5c03  cmp esi, 0x10
    X86_AT(c, 0xd5c03u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0d5c06  jg 0xd5c16
    X86_AT(c, 0xd5c06u);
    if (x86_cc(c, 15)) { goto L_d5c16; }
    X86_TICK(c, 11);
    // 0d5c08  mov dword ptr [esi*4 + 0xaa0f0], 0
    X86_AT(c, 0xd5c08u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xAA0F0u)), 0x0u);
    // 0d5c13  inc esi
    X86_AT(c, 0xd5c13u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d5c14  jmp 0xd5c03
    X86_AT(c, 0xd5c14u);
    X86_POLL(c, 0xd5c03u); goto L_d5c03;
L_d5c16:
    X86_TICK(c, 21);
    // 0d5c16  mov dword ptr [0xaa0ec], 0
    X86_AT(c, 0xd5c16u);
    wr32((c.sbase[3] + (uint32_t)(0xAA0ECu)), 0x0u);
    // 0d5c20  mov dword ptr [0xaaea0], 0
    X86_AT(c, 0xd5c20u);
    wr32((c.sbase[3] + (uint32_t)(0xAAEA0u)), 0x0u);
    // 0d5c2a  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd5c2au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d5c2d  dec eax
    X86_AT(c, 0xd5c2du);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5c2e  mov edx, eax
    X86_AT(c, 0xd5c2eu);
    c.r[2] = c.r[0];
    // 0d5c30  and eax, 7
    X86_AT(c, 0xd5c30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0d5c35  and edx, edx
    X86_AT(c, 0xd5c35u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0d5c37  jge 0xd5c3c
    X86_AT(c, 0xd5c37u);
    if (x86_cc(c, 13)) { goto L_d5c3c; }
    X86_TICK(c, 2);
    // 0d5c39  sub eax, 8
    X86_AT(c, 0xd5c39u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x8u, 0, 4); }
L_d5c3c:
    X86_TICK(c, 13);
    // 0d5c3c  add eax, 2
    X86_AT(c, 0xd5c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0d5c3f  mov dword ptr [0xaae98], eax
    X86_AT(c, 0xd5c3fu);
    wr32((c.sbase[3] + (uint32_t)(0xAAE98u)), c.r[0]);
    // 0d5c44  mov dword ptr [0xb52f8], 1
    X86_AT(c, 0xd5c44u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x1u);
    // 0d5c4e  call 0xd395c
    X86_AT(c, 0xd5c4eu);
    push32(c, 0xd5c53u); x86_call_known(c, 0xd395cu, f_000d395c); X86_RET(c, 0xd5c53u);
    X86_TICK(c, 15);
    // 0d5c53  mov dword ptr [0xb2304], 0x13
    X86_AT(c, 0xd5c53u);
    wr32((c.sbase[3] + (uint32_t)(0xB2304u)), 0x13u);
    // 0d5c5d  mov dword ptr [0xb2308], 0x11
    X86_AT(c, 0xd5c5du);
    wr32((c.sbase[3] + (uint32_t)(0xB2308u)), 0x11u);
    // 0d5c67  mov dword ptr [0xbef90], 0
    X86_AT(c, 0xd5c67u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x0u);
    // 0d5c71  push 0x9ccc
    X86_AT(c, 0xd5c71u);
    { uint32_t v = 0x9CCCu; push32(c, v); }
    // 0d5c76  call 0xcba5c
    X86_AT(c, 0xd5c76u);
    push32(c, 0xd5c7bu); x86_call_known(c, 0xcba5cu, f_000cba5c); X86_RET(c, 0xd5c7bu);
    X86_TICK(c, 9);
    // 0d5c7b  push 8
    X86_AT(c, 0xd5c7bu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d5c7d  call 0xc71e0
    X86_AT(c, 0xd5c7du);
    push32(c, 0xd5c82u); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xd5c82u);
    X86_TICK(c, 9);
    // 0d5c82  push 0x42b8c
    X86_AT(c, 0xd5c82u);
    { uint32_t v = 0x42B8Cu; push32(c, v); }
    // 0d5c87  call 0xcbf54
    X86_AT(c, 0xd5c87u);
    push32(c, 0xd5c8cu); x86_call_known(c, 0xcbf54u, f_000cbf54); X86_RET(c, 0xd5c8cu);
    X86_TICK(c, 7);
    // 0d5c8c  call 0xc6a28
    X86_AT(c, 0xd5c8cu);
    push32(c, 0xd5c91u); x86_call_known(c, 0xc6a28u, f_000c6a28); X86_RET(c, 0xd5c91u);
    X86_TICK(c, 9);
    // 0d5c91  push 1
    X86_AT(c, 0xd5c91u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d5c93  call 0xc5e44
    X86_AT(c, 0xd5c93u);
    push32(c, 0xd5c98u); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xd5c98u);
    X86_TICK(c, 9);
    // 0d5c98  push 7
    X86_AT(c, 0xd5c98u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5c9a  call 0xcacd4
    X86_AT(c, 0xd5c9au);
    push32(c, 0xd5c9fu); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xd5c9fu);
    X86_TICK(c, 7);
    // 0d5c9f  call 0xd35c0
    X86_AT(c, 0xd5c9fu);
    push32(c, 0xd5ca4u); x86_call_known(c, 0xd35c0u, f_000d35c0); X86_RET(c, 0xd5ca4u);
    X86_TICK(c, 2);
    // 0d5ca4  add esp, 0x14
    X86_AT(c, 0xd5ca4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d5ca7:
    X86_TICK(c, 12);
    // 0d5ca7  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd5ca7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d5cae  jle 0xd6065
    X86_AT(c, 0xd5caeu);
    if (x86_cc(c, 14)) { goto L_d6065; }
    X86_TICK(c, 12);
    // 0d5cb4  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xd5cb4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0d5cbb  jle 0xd6065
    X86_AT(c, 0xd5cbbu);
    if (x86_cc(c, 14)) { goto L_d6065; }
    X86_TICK(c, 11);
    // 0d5cc1  sub edi, edi
    X86_AT(c, 0xd5cc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d5cc3  push 7
    X86_AT(c, 0xd5cc3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5cc5  call 0xca0a0
    X86_AT(c, 0xd5cc5u);
    push32(c, 0xd5ccau); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd5ccau);
    X86_TICK(c, 2);
    // 0d5cca  add esp, 4
    X86_AT(c, 0xd5ccau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d5ccd:
    X86_TICK(c, 9);
    // 0d5ccd  push 7
    X86_AT(c, 0xd5ccdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5ccf  call 0xcad80
    X86_AT(c, 0xd5ccfu);
    push32(c, 0xd5cd4u); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xd5cd4u);
    X86_TICK(c, 9);
    // 0d5cd4  push 7
    X86_AT(c, 0xd5cd4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5cd6  call 0xc7dc8
    X86_AT(c, 0xd5cd6u);
    push32(c, 0xd5cdbu); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xd5cdbu);
    X86_TICK(c, 14);
    // 0d5cdb  xchg ebx, eax
    X86_AT(c, 0xd5cdbu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d5cdc  inc edi
    X86_AT(c, 0xd5cdcu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d5cdd  add esp, 8
    X86_AT(c, 0xd5cddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d5ce0  and bl, bl
    X86_AT(c, 0xd5ce0u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d5ce2  jne 0xd5cec
    X86_AT(c, 0xd5ce2u);
    if (x86_cc(c, 5)) { goto L_d5cec; }
    X86_TICK(c, 7);
    // 0d5ce4  cmp edi, 0x5dc
    X86_AT(c, 0xd5ce4u);
    (void)x86_sub(c, c.r[7], 0x5DCu, 0, 4);
    // 0d5cea  jl 0xd5ccd
    X86_AT(c, 0xd5ceau);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xd5ccdu); goto L_d5ccd; }
L_d5cec:
    X86_TICK(c, 7);
    // 0d5cec  and bl, bl
    X86_AT(c, 0xd5cecu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d5cee  jne 0xd5cf2
    X86_AT(c, 0xd5ceeu);
    if (x86_cc(c, 5)) { goto L_d5cf2; }
    X86_TICK(c, 2);
    // 0d5cf0  mov bl, 0x20
    X86_AT(c, 0xd5cf0u);
    s8(c, 3, 0x20u);
L_d5cf2:
    X86_TICK(c, 12);
    // 0d5cf2  movzx edx, bl
    X86_AT(c, 0xd5cf2u);
    c.r[2] = g8(c, 3);
    // 0d5cf5  dec edx
    X86_AT(c, 0xd5cf5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d5cf6  cmp edx, 0x59
    X86_AT(c, 0xd5cf6u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0d5cf9  ja 0xd6015
    X86_AT(c, 0xd5cf9u);
    if (x86_cc(c, 7)) { goto L_d6015; }
    X86_TICK(c, 7);
    // 0d5cff  jmp dword ptr cs:[edx*4 + 0xd5d07]
    X86_AT(c, 0xd5cffu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD5D07u)));
      switch (t) {
      case 0xd5e6fu: goto L_d5e6f;
      case 0xd5e9au: goto L_d5e9a;
      case 0xd5ec1u: goto L_d5ec1;
      case 0xd5efcu: goto L_d5efc;
      case 0xd5f3eu: goto L_d5f3e;
      case 0xd5f4du: goto L_d5f4d;
      case 0xd5f57u: goto L_d5f57;
      case 0xd5f61u: goto L_d5f61;
      case 0xd5f6bu: goto L_d5f6b;
      case 0xd5f75u: goto L_d5f75;
      case 0xd5f7fu: goto L_d5f7f;
      case 0xd5f89u: goto L_d5f89;
      case 0xd5f93u: goto L_d5f93;
      case 0xd5f9du: goto L_d5f9d;
      case 0xd5fa7u: goto L_d5fa7;
      case 0xd5fb1u: goto L_d5fb1;
      case 0xd5fbbu: goto L_d5fbb;
      case 0xd5fc5u: goto L_d5fc5;
      case 0xd5fccu: goto L_d5fcc;
      case 0xd5fd3u: goto L_d5fd3;
      case 0xd5fdau: goto L_d5fda;
      case 0xd5fe1u: goto L_d5fe1;
      case 0xd5fe8u: goto L_d5fe8;
      case 0xd5fefu: goto L_d5fef;
      case 0xd5ff6u: goto L_d5ff6;
      case 0xd5ffdu: goto L_d5ffd;
      case 0xd600eu: goto L_d600e;
      case 0xd6015u: goto L_d6015;
      default: x86_jump(c, t); return; } }
L_d5e6f:
    X86_TICK(c, 12);
    // 0d5e6f  movzx ebx, bl
    X86_AT(c, 0xd5e6fu);
    c.r[3] = g8(c, 3);
    // 0d5e72  push ebx
    X86_AT(c, 0xd5e72u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5e73  call 0xd386c
    X86_AT(c, 0xd5e73u);
    push32(c, 0xd5e78u); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd5e78u);
    X86_TICK(c, 9);
    // 0d5e78  add esp, 4
    X86_AT(c, 0xd5e78u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5e7b  dec eax
    X86_AT(c, 0xd5e7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5e7c  jne 0xd5ef3
    X86_AT(c, 0xd5e7cu);
    if (x86_cc(c, 5)) { goto L_d5ef3; }
    X86_TICK(c, 17);
    // 0d5e82  push dword ptr [0xb033e]
    X86_AT(c, 0xd5e82u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d5e88  push dword ptr [0xb033a]
    X86_AT(c, 0xd5e88u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5e8e  call 0xcf89c
    X86_AT(c, 0xd5e8eu);
    push32(c, 0xd5e93u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd5e93u);
    X86_TICK(c, 11);
    // 0d5e93  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd5e93u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d5e96  push 3
    X86_AT(c, 0xd5e96u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d5e98  jmp 0xd5ee6
    X86_AT(c, 0xd5e98u);
    goto L_d5ee6;
L_d5e9a:
    X86_TICK(c, 12);
    // 0d5e9a  movzx ebx, bl
    X86_AT(c, 0xd5e9au);
    c.r[3] = g8(c, 3);
    // 0d5e9d  push ebx
    X86_AT(c, 0xd5e9du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5e9e  call 0xd386c
    X86_AT(c, 0xd5e9eu);
    push32(c, 0xd5ea3u); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd5ea3u);
    X86_TICK(c, 9);
    // 0d5ea3  add esp, 4
    X86_AT(c, 0xd5ea3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5ea6  dec eax
    X86_AT(c, 0xd5ea6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5ea7  jne 0xd5ef3
    X86_AT(c, 0xd5ea7u);
    if (x86_cc(c, 5)) { goto L_d5ef3; }
    X86_TICK(c, 17);
    // 0d5ea9  push dword ptr [0xb033e]
    X86_AT(c, 0xd5ea9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d5eaf  push dword ptr [0xb033a]
    X86_AT(c, 0xd5eafu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5eb5  call 0xcf89c
    X86_AT(c, 0xd5eb5u);
    push32(c, 0xd5ebau); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd5ebau);
    X86_TICK(c, 11);
    // 0d5eba  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd5ebau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d5ebd  push 7
    X86_AT(c, 0xd5ebdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5ebf  jmp 0xd5ee6
    X86_AT(c, 0xd5ebfu);
    goto L_d5ee6;
L_d5ec1:
    X86_TICK(c, 12);
    // 0d5ec1  movzx ebx, bl
    X86_AT(c, 0xd5ec1u);
    c.r[3] = g8(c, 3);
    // 0d5ec4  push ebx
    X86_AT(c, 0xd5ec4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5ec5  call 0xd386c
    X86_AT(c, 0xd5ec5u);
    push32(c, 0xd5ecau); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd5ecau);
    X86_TICK(c, 9);
    // 0d5eca  add esp, 4
    X86_AT(c, 0xd5ecau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5ecd  dec eax
    X86_AT(c, 0xd5ecdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5ece  jne 0xd5ef3
    X86_AT(c, 0xd5eceu);
    if (x86_cc(c, 5)) { goto L_d5ef3; }
    X86_TICK(c, 17);
    // 0d5ed0  push dword ptr [0xb033e]
    X86_AT(c, 0xd5ed0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d5ed6  push dword ptr [0xb033a]
    X86_AT(c, 0xd5ed6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5edc  call 0xcf89c
    X86_AT(c, 0xd5edcu);
    push32(c, 0xd5ee1u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd5ee1u);
    X86_TICK(c, 4);
    // 0d5ee1  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd5ee1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d5ee4  push 5
    X86_AT(c, 0xd5ee4u);
    { uint32_t v = 0x5u; push32(c, v); }
L_d5ee6:
    X86_TICK(c, 7);
    // 0d5ee6  call 0xd448c
    X86_AT(c, 0xd5ee6u);
    push32(c, 0xd5eebu); x86_call_known(c, 0xd448cu, f_000d448c); X86_RET(c, 0xd5eebu);
    X86_TICK(c, 9);
    // 0d5eeb  add esp, 0xc
    X86_AT(c, 0xd5eebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d5eee  jmp 0xd6029
    X86_AT(c, 0xd5eeeu);
    goto L_d6029;
L_d5ef3:
    X86_TICK(c, 9);
    // 0d5ef3  push 0
    X86_AT(c, 0xd5ef3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5ef5  call 0xc5ca4
    X86_AT(c, 0xd5ef5u);
    push32(c, 0xd5efau); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd5efau);
    X86_TICK(c, 7);
    // 0d5efa  jmp 0xd5f45
    X86_AT(c, 0xd5efau);
    goto L_d5f45;
L_d5efc:
    X86_TICK(c, 12);
    // 0d5efc  movzx ebx, bl
    X86_AT(c, 0xd5efcu);
    c.r[3] = g8(c, 3);
    // 0d5eff  push ebx
    X86_AT(c, 0xd5effu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5f00  call 0xd386c
    X86_AT(c, 0xd5f00u);
    push32(c, 0xd5f05u); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd5f05u);
    X86_TICK(c, 9);
    // 0d5f05  add esp, 4
    X86_AT(c, 0xd5f05u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5f08  dec eax
    X86_AT(c, 0xd5f08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5f09  jne 0xd5f2b
    X86_AT(c, 0xd5f09u);
    if (x86_cc(c, 5)) { goto L_d5f2b; }
    X86_TICK(c, 17);
    // 0d5f0b  push dword ptr [0xb033e]
    X86_AT(c, 0xd5f0bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d5f11  push dword ptr [0xb033a]
    X86_AT(c, 0xd5f11u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5f17  call 0xcf89c
    X86_AT(c, 0xd5f17u);
    push32(c, 0xd5f1cu); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd5f1cu);
    X86_TICK(c, 11);
    // 0d5f1c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd5f1cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d5f1f  push 6
    X86_AT(c, 0xd5f1fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d5f21  call 0xd448c
    X86_AT(c, 0xd5f21u);
    push32(c, 0xd5f26u); x86_call_known(c, 0xd448cu, f_000d448c); X86_RET(c, 0xd5f26u);
    X86_TICK(c, 9);
    // 0d5f26  add esp, 0xc
    X86_AT(c, 0xd5f26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d5f29  jmp 0xd5f35
    X86_AT(c, 0xd5f29u);
    goto L_d5f35;
L_d5f2b:
    X86_TICK(c, 9);
    // 0d5f2b  push 0
    X86_AT(c, 0xd5f2bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5f2d  call 0xc5ca4
    X86_AT(c, 0xd5f2du);
    push32(c, 0xd5f32u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd5f32u);
    X86_TICK(c, 2);
    // 0d5f32  add esp, 4
    X86_AT(c, 0xd5f32u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d5f35:
    X86_TICK(c, 9);
    // 0d5f35  push 0
    X86_AT(c, 0xd5f35u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5f37  call 0xc60ac
    X86_AT(c, 0xd5f37u);
    push32(c, 0xd5f3cu); x86_call_known(c, 0xc60acu, f_000c60ac); X86_RET(c, 0xd5f3cu);
    X86_TICK(c, 7);
    // 0d5f3c  jmp 0xd5f45
    X86_AT(c, 0xd5f3cu);
    goto L_d5f45;
L_d5f3e:
    X86_TICK(c, 9);
    // 0d5f3e  push 0xffffffff
    X86_AT(c, 0xd5f3eu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d5f40  call 0xcf580
    X86_AT(c, 0xd5f40u);
    push32(c, 0xd5f45u); x86_call_known(c, 0xcf580u, f_000cf580); X86_RET(c, 0xd5f45u);
L_d5f45:
    X86_TICK(c, 9);
    // 0d5f45  add esp, 4
    X86_AT(c, 0xd5f45u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5f48  jmp 0xd6029
    X86_AT(c, 0xd5f48u);
    goto L_d6029;
L_d5f4d:
    X86_TICK(c, 7);
    // 0d5f4d  call 0xcc9e0
    X86_AT(c, 0xd5f4du);
    push32(c, 0xd5f52u); x86_call_known(c, 0xcc9e0u, f_000cc9e0); X86_RET(c, 0xd5f52u);
    X86_TICK(c, 7);
    // 0d5f52  jmp 0xd6029
    X86_AT(c, 0xd5f52u);
    goto L_d6029;
L_d5f57:
    X86_TICK(c, 7);
    // 0d5f57  call 0xcd1a8
    X86_AT(c, 0xd5f57u);
    push32(c, 0xd5f5cu); x86_call_known(c, 0xcd1a8u, f_000cd1a8); X86_RET(c, 0xd5f5cu);
    X86_TICK(c, 7);
    // 0d5f5c  jmp 0xd6029
    X86_AT(c, 0xd5f5cu);
    goto L_d6029;
L_d5f61:
    X86_TICK(c, 7);
    // 0d5f61  call 0xcd824
    X86_AT(c, 0xd5f61u);
    push32(c, 0xd5f66u); x86_call_known(c, 0xcd824u, f_000cd824); X86_RET(c, 0xd5f66u);
    X86_TICK(c, 7);
    // 0d5f66  jmp 0xd6029
    X86_AT(c, 0xd5f66u);
    goto L_d6029;
L_d5f6b:
    X86_TICK(c, 7);
    // 0d5f6b  call 0xd4c30
    X86_AT(c, 0xd5f6bu);
    push32(c, 0xd5f70u); x86_call_known(c, 0xd4c30u, f_000d4c30); X86_RET(c, 0xd5f70u);
    X86_TICK(c, 7);
    // 0d5f70  jmp 0xd6029
    X86_AT(c, 0xd5f70u);
    goto L_d6029;
L_d5f75:
    X86_TICK(c, 7);
    // 0d5f75  call 0xcd8c0
    X86_AT(c, 0xd5f75u);
    push32(c, 0xd5f7au); x86_call_known(c, 0xcd8c0u, f_000cd8c0); X86_RET(c, 0xd5f7au);
    X86_TICK(c, 7);
    // 0d5f7a  jmp 0xd6029
    X86_AT(c, 0xd5f7au);
    goto L_d6029;
L_d5f7f:
    X86_TICK(c, 7);
    // 0d5f7f  call 0xcfa18
    X86_AT(c, 0xd5f7fu);
    push32(c, 0xd5f84u); x86_call_known(c, 0xcfa18u, f_000cfa18); X86_RET(c, 0xd5f84u);
    X86_TICK(c, 7);
    // 0d5f84  jmp 0xd6029
    X86_AT(c, 0xd5f84u);
    goto L_d6029;
L_d5f89:
    X86_TICK(c, 7);
    // 0d5f89  call 0xcd938
    X86_AT(c, 0xd5f89u);
    push32(c, 0xd5f8eu); x86_call_known(c, 0xcd938u, f_000cd938); X86_RET(c, 0xd5f8eu);
    X86_TICK(c, 7);
    // 0d5f8e  jmp 0xd6029
    X86_AT(c, 0xd5f8eu);
    goto L_d6029;
L_d5f93:
    X86_TICK(c, 7);
    // 0d5f93  call 0xcd9f0
    X86_AT(c, 0xd5f93u);
    push32(c, 0xd5f98u); x86_call_known(c, 0xcd9f0u, f_000cd9f0); X86_RET(c, 0xd5f98u);
    X86_TICK(c, 7);
    // 0d5f98  jmp 0xd6029
    X86_AT(c, 0xd5f98u);
    goto L_d6029;
L_d5f9d:
    X86_TICK(c, 7);
    // 0d5f9d  call 0xce424
    X86_AT(c, 0xd5f9du);
    push32(c, 0xd5fa2u); x86_call_known(c, 0xce424u, f_000ce424); X86_RET(c, 0xd5fa2u);
    X86_TICK(c, 7);
    // 0d5fa2  jmp 0xd6029
    X86_AT(c, 0xd5fa2u);
    goto L_d6029;
L_d5fa7:
    X86_TICK(c, 7);
    // 0d5fa7  call 0xdc4d4
    X86_AT(c, 0xd5fa7u);
    push32(c, 0xd5facu); x86_call_known(c, 0xdc4d4u, f_000dc4d4); X86_RET(c, 0xd5facu);
    X86_TICK(c, 7);
    // 0d5fac  jmp 0xd6029
    X86_AT(c, 0xd5facu);
    goto L_d6029;
L_d5fb1:
    X86_TICK(c, 7);
    // 0d5fb1  call 0xcfa5c
    X86_AT(c, 0xd5fb1u);
    push32(c, 0xd5fb6u); x86_call_known(c, 0xcfa5cu, f_000cfa5c); X86_RET(c, 0xd5fb6u);
    X86_TICK(c, 7);
    // 0d5fb6  jmp 0xd6029
    X86_AT(c, 0xd5fb6u);
    goto L_d6029;
L_d5fbb:
    X86_TICK(c, 7);
    // 0d5fbb  call 0xcdbe8
    X86_AT(c, 0xd5fbbu);
    push32(c, 0xd5fc0u); x86_call_known(c, 0xcdbe8u, f_000cdbe8); X86_RET(c, 0xd5fc0u);
    X86_TICK(c, 7);
    // 0d5fc0  jmp 0xd6029
    X86_AT(c, 0xd5fc0u);
    goto L_d6029;
L_d5fc5:
    X86_TICK(c, 7);
    // 0d5fc5  call 0xcdfdc
    X86_AT(c, 0xd5fc5u);
    push32(c, 0xd5fcau); x86_call_known(c, 0xcdfdcu, f_000cdfdc); X86_RET(c, 0xd5fcau);
    X86_TICK(c, 7);
    // 0d5fca  jmp 0xd6029
    X86_AT(c, 0xd5fcau);
    goto L_d6029;
L_d5fcc:
    X86_TICK(c, 7);
    // 0d5fcc  call 0xcfc24
    X86_AT(c, 0xd5fccu);
    push32(c, 0xd5fd1u); x86_call_known(c, 0xcfc24u, f_000cfc24); X86_RET(c, 0xd5fd1u);
    X86_TICK(c, 7);
    // 0d5fd1  jmp 0xd6029
    X86_AT(c, 0xd5fd1u);
    goto L_d6029;
L_d5fd3:
    X86_TICK(c, 7);
    // 0d5fd3  call 0xcff4c
    X86_AT(c, 0xd5fd3u);
    push32(c, 0xd5fd8u); x86_call_known(c, 0xcff4cu, f_000cff4c); X86_RET(c, 0xd5fd8u);
    X86_TICK(c, 7);
    // 0d5fd8  jmp 0xd6029
    X86_AT(c, 0xd5fd8u);
    goto L_d6029;
L_d5fda:
    X86_TICK(c, 7);
    // 0d5fda  call 0xd20ec
    X86_AT(c, 0xd5fdau);
    push32(c, 0xd5fdfu); x86_call_known(c, 0xd20ecu, f_000d20ec); X86_RET(c, 0xd5fdfu);
    X86_TICK(c, 7);
    // 0d5fdf  jmp 0xd6029
    X86_AT(c, 0xd5fdfu);
    goto L_d6029;
L_d5fe1:
    X86_TICK(c, 7);
    // 0d5fe1  call 0xce1d0
    X86_AT(c, 0xd5fe1u);
    push32(c, 0xd5fe6u); x86_call_known(c, 0xce1d0u, f_000ce1d0); X86_RET(c, 0xd5fe6u);
    X86_TICK(c, 7);
    // 0d5fe6  jmp 0xd6029
    X86_AT(c, 0xd5fe6u);
    goto L_d6029;
L_d5fe8:
    X86_TICK(c, 7);
    // 0d5fe8  call 0xce258
    X86_AT(c, 0xd5fe8u);
    push32(c, 0xd5fedu); x86_call_known(c, 0xce258u, f_000ce258); X86_RET(c, 0xd5fedu);
    X86_TICK(c, 7);
    // 0d5fed  jmp 0xd6029
    X86_AT(c, 0xd5fedu);
    goto L_d6029;
L_d5fef:
    X86_TICK(c, 7);
    // 0d5fef  call 0xce270
    X86_AT(c, 0xd5fefu);
    push32(c, 0xd5ff4u); x86_call_known(c, 0xce270u, f_000ce270); X86_RET(c, 0xd5ff4u);
    X86_TICK(c, 7);
    // 0d5ff4  jmp 0xd6029
    X86_AT(c, 0xd5ff4u);
    goto L_d6029;
L_d5ff6:
    X86_TICK(c, 7);
    // 0d5ff6  call 0xce57c
    X86_AT(c, 0xd5ff6u);
    push32(c, 0xd5ffbu); x86_call_known(c, 0xce57cu, f_000ce57c); X86_RET(c, 0xd5ffbu);
    X86_TICK(c, 7);
    // 0d5ffb  jmp 0xd6029
    X86_AT(c, 0xd5ffbu);
    goto L_d6029;
L_d5ffd:
    X86_TICK(c, 7);
    // 0d5ffd  call 0xd238c
    X86_AT(c, 0xd5ffdu);
    push32(c, 0xd6002u); x86_call_known(c, 0xd238cu, f_000d238c); X86_RET(c, 0xd6002u);
    X86_TICK(c, 9);
    // 0d6002  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xd6002u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0d600c  jmp 0xd6029
    X86_AT(c, 0xd600cu);
    goto L_d6029;
L_d600e:
    X86_TICK(c, 7);
    // 0d600e  call 0xcdcf8
    X86_AT(c, 0xd600eu);
    push32(c, 0xd6013u); x86_call_known(c, 0xcdcf8u, f_000cdcf8); X86_RET(c, 0xd6013u);
    X86_TICK(c, 7);
    // 0d6013  jmp 0xd6029
    X86_AT(c, 0xd6013u);
    goto L_d6029;
L_d6015:
    X86_TICK(c, 9);
    // 0d6015  push 0x9ce0
    X86_AT(c, 0xd6015u);
    { uint32_t v = 0x9CE0u; push32(c, v); }
    // 0d601a  call 0xcc7bc
    X86_AT(c, 0xd601au);
    push32(c, 0xd601fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd601fu);
    X86_TICK(c, 9);
    // 0d601f  push 1
    X86_AT(c, 0xd601fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6021  call 0xc5ca4
    X86_AT(c, 0xd6021u);
    push32(c, 0xd6026u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd6026u);
    X86_TICK(c, 2);
    // 0d6026  add esp, 8
    X86_AT(c, 0xd6026u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d6029:
    X86_TICK(c, 9);
    // 0d6029  push 3
    X86_AT(c, 0xd6029u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d602b  call 0xca3cc
    X86_AT(c, 0xd602bu);
    push32(c, 0xd6030u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd6030u);
    X86_TICK(c, 14);
    // 0d6030  add esp, 4
    X86_AT(c, 0xd6030u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d6033  cmp byte ptr [0x92494], 0
    X86_AT(c, 0xd6033u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x92494u))), 0x0u, 0, 1);
    // 0d603a  jne 0xd6048
    X86_AT(c, 0xd603au);
    if (x86_cc(c, 5)) { goto L_d6048; }
    X86_TICK(c, 9);
    // 0d603c  mov dword ptr [0xb52f8], 6
    X86_AT(c, 0xd603cu);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x6u);
    // 0d6046  jmp 0xd6065
    X86_AT(c, 0xd6046u);
    goto L_d6065;
L_d6048:
    X86_TICK(c, 13);
    // 0d6048  inc dword ptr [0xaa2dc]
    X86_AT(c, 0xd6048u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d604e  call 0xd32d4
    X86_AT(c, 0xd604eu);
    push32(c, 0xd6053u); x86_call_known(c, 0xd32d4u, f_000d32d4); X86_RET(c, 0xd6053u);
    X86_TICK(c, 7);
    // 0d6053  call 0xd3334
    X86_AT(c, 0xd6053u);
    push32(c, 0xd6058u); x86_call_known(c, 0xd3334u, f_000d3334); X86_RET(c, 0xd6058u);
    X86_TICK(c, 12);
    // 0d6058  cmp dword ptr [0xb52f8], 1
    X86_AT(c, 0xd6058u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x1u, 0, 4);
    // 0d605f  je 0xd5ca7
    X86_AT(c, 0xd605fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd5ca7u); goto L_d5ca7; }
L_d6065:
    X86_TICK(c, 23);
    // 0d6065  mov eax, dword ptr [0xaa0e4]
    X86_AT(c, 0xd6065u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E4u)));
    // 0d606a  mov dword ptr [0xb033a], eax
    X86_AT(c, 0xd606au);
    wr32((c.sbase[3] + (uint32_t)(0xB033Au)), c.r[0]);
    // 0d606f  mov eax, dword ptr [0xaa0e8]
    X86_AT(c, 0xd606fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E8u)));
    // 0d6074  mov dword ptr [0xb033e], eax
    X86_AT(c, 0xd6074u);
    wr32((c.sbase[3] + (uint32_t)(0xB033Eu)), c.r[0]);
    // 0d6079  mov dword ptr [0xb52f8], 0
    X86_AT(c, 0xd6079u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x0u);
    // 0d6083  push 0x9cf0
    X86_AT(c, 0xd6083u);
    { uint32_t v = 0x9CF0u; push32(c, v); }
    // 0d6088  call 0xcba5c
    X86_AT(c, 0xd6088u);
    push32(c, 0xd608du); x86_call_known(c, 0xcba5cu, f_000cba5c); X86_RET(c, 0xd608du);
    X86_TICK(c, 14);
    // 0d608d  add esp, 4
    X86_AT(c, 0xd608du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d6090  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd6090u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d6097  jle 0xd60a2
    X86_AT(c, 0xd6097u);
    if (x86_cc(c, 14)) { goto L_d60a2; }
    X86_TICK(c, 12);
    // 0d6099  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xd6099u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0d60a0  jg 0xd60a9
    X86_AT(c, 0xd60a0u);
    if (x86_cc(c, 15)) { goto L_d60a9; }
L_d60a2:
    X86_TICK(c, 7);
    // 0d60a2  call 0xd2f10
    X86_AT(c, 0xd60a2u);
    push32(c, 0xd60a7u); x86_call_known(c, 0xd2f10u, f_000d2f10); X86_RET(c, 0xd60a7u);
    X86_TICK(c, 7);
    // 0d60a7  jmp 0xd60fd
    X86_AT(c, 0xd60a7u);
    goto L_d60fd;
L_d60a9:
    X86_TICK(c, 9);
    // 0d60a9  push 0
    X86_AT(c, 0xd60a9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d60ab  call 0xc71e0
    X86_AT(c, 0xd60abu);
    push32(c, 0xd60b0u); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xd60b0u);
    X86_TICK(c, 9);
    // 0d60b0  push 0x42b8c
    X86_AT(c, 0xd60b0u);
    { uint32_t v = 0x42B8Cu; push32(c, v); }
    // 0d60b5  call 0xcbf54
    X86_AT(c, 0xd60b5u);
    push32(c, 0xd60bau); x86_call_known(c, 0xcbf54u, f_000cbf54); X86_RET(c, 0xd60bau);
    X86_TICK(c, 7);
    // 0d60ba  call 0xc6a28
    X86_AT(c, 0xd60bau);
    push32(c, 0xd60bfu); x86_call_known(c, 0xc6a28u, f_000c6a28); X86_RET(c, 0xd60bfu);
    X86_TICK(c, 4);
    // 0d60bf  sub esi, esi
    X86_AT(c, 0xd60bfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d60c1  add esp, 8
    X86_AT(c, 0xd60c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d60c4:
    X86_TICK(c, 11);
    // 0d60c4  cmp esi, dword ptr [0xaa0ec]
    X86_AT(c, 0xd60c4u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xAA0ECu))), 0, 4);
    // 0d60ca  jge 0xd60de
    X86_AT(c, 0xd60cau);
    if (x86_cc(c, 13)) { goto L_d60de; }
    X86_TICK(c, 12);
    // 0d60cc  push dword ptr [esi*4 + 0xaa0f0]
    X86_AT(c, 0xd60ccu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xAA0F0u))); push32(c, v); }
    // 0d60d3  call 0xd5464
    X86_AT(c, 0xd60d3u);
    push32(c, 0xd60d8u); x86_call_known(c, 0xd5464u, f_000d5464); X86_RET(c, 0xd60d8u);
    X86_TICK(c, 11);
    // 0d60d8  inc esi
    X86_AT(c, 0xd60d8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d60d9  add esp, 4
    X86_AT(c, 0xd60d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d60dc  jmp 0xd60c4
    X86_AT(c, 0xd60dcu);
    X86_POLL(c, 0xd60c4u); goto L_d60c4;
L_d60de:
    X86_TICK(c, 9);
    // 0d60de  push 1
    X86_AT(c, 0xd60deu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d60e0  call 0xc5e44
    X86_AT(c, 0xd60e0u);
    push32(c, 0xd60e5u); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xd60e5u);
    X86_TICK(c, 9);
    // 0d60e5  push 7
    X86_AT(c, 0xd60e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d60e7  call 0xcacd4
    X86_AT(c, 0xd60e7u);
    push32(c, 0xd60ecu); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xd60ecu);
    X86_TICK(c, 9);
    // 0d60ec  push 7
    X86_AT(c, 0xd60ecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d60ee  call 0xca0a0
    X86_AT(c, 0xd60eeu);
    push32(c, 0xd60f3u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd60f3u);
    X86_TICK(c, 9);
    // 0d60f3  push 7
    X86_AT(c, 0xd60f3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d60f5  call 0xcad80
    X86_AT(c, 0xd60f5u);
    push32(c, 0xd60fau); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xd60fau);
    X86_TICK(c, 2);
    // 0d60fa  add esp, 0x10
    X86_AT(c, 0xd60fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d60fd:
    X86_TICK(c, 28);
    // 0d60fd  pop edi
    X86_AT(c, 0xd60fdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d60fe  pop esi
    X86_AT(c, 0xd60feu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d60ff  pop ebx
    X86_AT(c, 0xd60ffu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d6100  leave 
    X86_AT(c, 0xd6100u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d6101  ret 
    X86_AT(c, 0xd6101u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5b80u, "ran off the end of a function");
}
void f_000d6029(X86Cpu& c) {
    goto L_d6029;
L_d5ca7:
    X86_TICK(c, 12);
    // 0d5ca7  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd5ca7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d5cae  jle 0xd6065
    X86_AT(c, 0xd5caeu);
    if (x86_cc(c, 14)) { goto L_d6065; }
    X86_TICK(c, 12);
    // 0d5cb4  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xd5cb4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0d5cbb  jle 0xd6065
    X86_AT(c, 0xd5cbbu);
    if (x86_cc(c, 14)) { goto L_d6065; }
    X86_TICK(c, 11);
    // 0d5cc1  sub edi, edi
    X86_AT(c, 0xd5cc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d5cc3  push 7
    X86_AT(c, 0xd5cc3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5cc5  call 0xca0a0
    X86_AT(c, 0xd5cc5u);
    push32(c, 0xd5ccau); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd5ccau);
    X86_TICK(c, 2);
    // 0d5cca  add esp, 4
    X86_AT(c, 0xd5ccau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d5ccd:
    X86_TICK(c, 9);
    // 0d5ccd  push 7
    X86_AT(c, 0xd5ccdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5ccf  call 0xcad80
    X86_AT(c, 0xd5ccfu);
    push32(c, 0xd5cd4u); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xd5cd4u);
    X86_TICK(c, 9);
    // 0d5cd4  push 7
    X86_AT(c, 0xd5cd4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5cd6  call 0xc7dc8
    X86_AT(c, 0xd5cd6u);
    push32(c, 0xd5cdbu); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xd5cdbu);
    X86_TICK(c, 14);
    // 0d5cdb  xchg ebx, eax
    X86_AT(c, 0xd5cdbu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d5cdc  inc edi
    X86_AT(c, 0xd5cdcu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d5cdd  add esp, 8
    X86_AT(c, 0xd5cddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d5ce0  and bl, bl
    X86_AT(c, 0xd5ce0u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d5ce2  jne 0xd5cec
    X86_AT(c, 0xd5ce2u);
    if (x86_cc(c, 5)) { goto L_d5cec; }
    X86_TICK(c, 7);
    // 0d5ce4  cmp edi, 0x5dc
    X86_AT(c, 0xd5ce4u);
    (void)x86_sub(c, c.r[7], 0x5DCu, 0, 4);
    // 0d5cea  jl 0xd5ccd
    X86_AT(c, 0xd5ceau);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xd5ccdu); goto L_d5ccd; }
L_d5cec:
    X86_TICK(c, 7);
    // 0d5cec  and bl, bl
    X86_AT(c, 0xd5cecu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d5cee  jne 0xd5cf2
    X86_AT(c, 0xd5ceeu);
    if (x86_cc(c, 5)) { goto L_d5cf2; }
    X86_TICK(c, 2);
    // 0d5cf0  mov bl, 0x20
    X86_AT(c, 0xd5cf0u);
    s8(c, 3, 0x20u);
L_d5cf2:
    X86_TICK(c, 12);
    // 0d5cf2  movzx edx, bl
    X86_AT(c, 0xd5cf2u);
    c.r[2] = g8(c, 3);
    // 0d5cf5  dec edx
    X86_AT(c, 0xd5cf5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d5cf6  cmp edx, 0x59
    X86_AT(c, 0xd5cf6u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0d5cf9  ja 0xd6015
    X86_AT(c, 0xd5cf9u);
    if (x86_cc(c, 7)) { goto L_d6015; }
    X86_TICK(c, 7);
    // 0d5cff  jmp dword ptr cs:[edx*4 + 0xd5d07]
    X86_AT(c, 0xd5cffu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD5D07u)));
      switch (t) {
      case 0xd5e6fu: goto L_d5e6f;
      case 0xd5e9au: goto L_d5e9a;
      case 0xd5ec1u: goto L_d5ec1;
      case 0xd5efcu: goto L_d5efc;
      case 0xd5f3eu: goto L_d5f3e;
      case 0xd5f4du: goto L_d5f4d;
      case 0xd5f57u: goto L_d5f57;
      case 0xd5f61u: goto L_d5f61;
      case 0xd5f6bu: goto L_d5f6b;
      case 0xd5f75u: goto L_d5f75;
      case 0xd5f7fu: goto L_d5f7f;
      case 0xd5f89u: goto L_d5f89;
      case 0xd5f93u: goto L_d5f93;
      case 0xd5f9du: goto L_d5f9d;
      case 0xd5fa7u: goto L_d5fa7;
      case 0xd5fb1u: goto L_d5fb1;
      case 0xd5fbbu: goto L_d5fbb;
      case 0xd5fc5u: goto L_d5fc5;
      case 0xd5fccu: goto L_d5fcc;
      case 0xd5fd3u: goto L_d5fd3;
      case 0xd5fdau: goto L_d5fda;
      case 0xd5fe1u: goto L_d5fe1;
      case 0xd5fe8u: goto L_d5fe8;
      case 0xd5fefu: goto L_d5fef;
      case 0xd5ff6u: goto L_d5ff6;
      case 0xd5ffdu: goto L_d5ffd;
      case 0xd600eu: goto L_d600e;
      case 0xd6015u: goto L_d6015;
      default: x86_jump(c, t); return; } }
L_d5e6f:
    X86_TICK(c, 12);
    // 0d5e6f  movzx ebx, bl
    X86_AT(c, 0xd5e6fu);
    c.r[3] = g8(c, 3);
    // 0d5e72  push ebx
    X86_AT(c, 0xd5e72u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5e73  call 0xd386c
    X86_AT(c, 0xd5e73u);
    push32(c, 0xd5e78u); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd5e78u);
    X86_TICK(c, 9);
    // 0d5e78  add esp, 4
    X86_AT(c, 0xd5e78u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5e7b  dec eax
    X86_AT(c, 0xd5e7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5e7c  jne 0xd5ef3
    X86_AT(c, 0xd5e7cu);
    if (x86_cc(c, 5)) { goto L_d5ef3; }
    X86_TICK(c, 17);
    // 0d5e82  push dword ptr [0xb033e]
    X86_AT(c, 0xd5e82u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d5e88  push dword ptr [0xb033a]
    X86_AT(c, 0xd5e88u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5e8e  call 0xcf89c
    X86_AT(c, 0xd5e8eu);
    push32(c, 0xd5e93u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd5e93u);
    X86_TICK(c, 11);
    // 0d5e93  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd5e93u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d5e96  push 3
    X86_AT(c, 0xd5e96u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d5e98  jmp 0xd5ee6
    X86_AT(c, 0xd5e98u);
    goto L_d5ee6;
L_d5e9a:
    X86_TICK(c, 12);
    // 0d5e9a  movzx ebx, bl
    X86_AT(c, 0xd5e9au);
    c.r[3] = g8(c, 3);
    // 0d5e9d  push ebx
    X86_AT(c, 0xd5e9du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5e9e  call 0xd386c
    X86_AT(c, 0xd5e9eu);
    push32(c, 0xd5ea3u); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd5ea3u);
    X86_TICK(c, 9);
    // 0d5ea3  add esp, 4
    X86_AT(c, 0xd5ea3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5ea6  dec eax
    X86_AT(c, 0xd5ea6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5ea7  jne 0xd5ef3
    X86_AT(c, 0xd5ea7u);
    if (x86_cc(c, 5)) { goto L_d5ef3; }
    X86_TICK(c, 17);
    // 0d5ea9  push dword ptr [0xb033e]
    X86_AT(c, 0xd5ea9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d5eaf  push dword ptr [0xb033a]
    X86_AT(c, 0xd5eafu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5eb5  call 0xcf89c
    X86_AT(c, 0xd5eb5u);
    push32(c, 0xd5ebau); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd5ebau);
    X86_TICK(c, 11);
    // 0d5eba  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd5ebau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d5ebd  push 7
    X86_AT(c, 0xd5ebdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5ebf  jmp 0xd5ee6
    X86_AT(c, 0xd5ebfu);
    goto L_d5ee6;
L_d5ec1:
    X86_TICK(c, 12);
    // 0d5ec1  movzx ebx, bl
    X86_AT(c, 0xd5ec1u);
    c.r[3] = g8(c, 3);
    // 0d5ec4  push ebx
    X86_AT(c, 0xd5ec4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5ec5  call 0xd386c
    X86_AT(c, 0xd5ec5u);
    push32(c, 0xd5ecau); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd5ecau);
    X86_TICK(c, 9);
    // 0d5eca  add esp, 4
    X86_AT(c, 0xd5ecau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5ecd  dec eax
    X86_AT(c, 0xd5ecdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5ece  jne 0xd5ef3
    X86_AT(c, 0xd5eceu);
    if (x86_cc(c, 5)) { goto L_d5ef3; }
    X86_TICK(c, 17);
    // 0d5ed0  push dword ptr [0xb033e]
    X86_AT(c, 0xd5ed0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d5ed6  push dword ptr [0xb033a]
    X86_AT(c, 0xd5ed6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5edc  call 0xcf89c
    X86_AT(c, 0xd5edcu);
    push32(c, 0xd5ee1u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd5ee1u);
    X86_TICK(c, 4);
    // 0d5ee1  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd5ee1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d5ee4  push 5
    X86_AT(c, 0xd5ee4u);
    { uint32_t v = 0x5u; push32(c, v); }
L_d5ee6:
    X86_TICK(c, 7);
    // 0d5ee6  call 0xd448c
    X86_AT(c, 0xd5ee6u);
    push32(c, 0xd5eebu); x86_call_known(c, 0xd448cu, f_000d448c); X86_RET(c, 0xd5eebu);
    X86_TICK(c, 9);
    // 0d5eeb  add esp, 0xc
    X86_AT(c, 0xd5eebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d5eee  jmp 0xd6029
    X86_AT(c, 0xd5eeeu);
    goto L_d6029;
L_d5ef3:
    X86_TICK(c, 9);
    // 0d5ef3  push 0
    X86_AT(c, 0xd5ef3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5ef5  call 0xc5ca4
    X86_AT(c, 0xd5ef5u);
    push32(c, 0xd5efau); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd5efau);
    X86_TICK(c, 7);
    // 0d5efa  jmp 0xd5f45
    X86_AT(c, 0xd5efau);
    goto L_d5f45;
L_d5efc:
    X86_TICK(c, 12);
    // 0d5efc  movzx ebx, bl
    X86_AT(c, 0xd5efcu);
    c.r[3] = g8(c, 3);
    // 0d5eff  push ebx
    X86_AT(c, 0xd5effu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5f00  call 0xd386c
    X86_AT(c, 0xd5f00u);
    push32(c, 0xd5f05u); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd5f05u);
    X86_TICK(c, 9);
    // 0d5f05  add esp, 4
    X86_AT(c, 0xd5f05u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5f08  dec eax
    X86_AT(c, 0xd5f08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5f09  jne 0xd5f2b
    X86_AT(c, 0xd5f09u);
    if (x86_cc(c, 5)) { goto L_d5f2b; }
    X86_TICK(c, 17);
    // 0d5f0b  push dword ptr [0xb033e]
    X86_AT(c, 0xd5f0bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d5f11  push dword ptr [0xb033a]
    X86_AT(c, 0xd5f11u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5f17  call 0xcf89c
    X86_AT(c, 0xd5f17u);
    push32(c, 0xd5f1cu); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd5f1cu);
    X86_TICK(c, 11);
    // 0d5f1c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd5f1cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d5f1f  push 6
    X86_AT(c, 0xd5f1fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d5f21  call 0xd448c
    X86_AT(c, 0xd5f21u);
    push32(c, 0xd5f26u); x86_call_known(c, 0xd448cu, f_000d448c); X86_RET(c, 0xd5f26u);
    X86_TICK(c, 9);
    // 0d5f26  add esp, 0xc
    X86_AT(c, 0xd5f26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d5f29  jmp 0xd5f35
    X86_AT(c, 0xd5f29u);
    goto L_d5f35;
L_d5f2b:
    X86_TICK(c, 9);
    // 0d5f2b  push 0
    X86_AT(c, 0xd5f2bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5f2d  call 0xc5ca4
    X86_AT(c, 0xd5f2du);
    push32(c, 0xd5f32u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd5f32u);
    X86_TICK(c, 2);
    // 0d5f32  add esp, 4
    X86_AT(c, 0xd5f32u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d5f35:
    X86_TICK(c, 9);
    // 0d5f35  push 0
    X86_AT(c, 0xd5f35u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5f37  call 0xc60ac
    X86_AT(c, 0xd5f37u);
    push32(c, 0xd5f3cu); x86_call_known(c, 0xc60acu, f_000c60ac); X86_RET(c, 0xd5f3cu);
    X86_TICK(c, 7);
    // 0d5f3c  jmp 0xd5f45
    X86_AT(c, 0xd5f3cu);
    goto L_d5f45;
L_d5f3e:
    X86_TICK(c, 9);
    // 0d5f3e  push 0xffffffff
    X86_AT(c, 0xd5f3eu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d5f40  call 0xcf580
    X86_AT(c, 0xd5f40u);
    push32(c, 0xd5f45u); x86_call_known(c, 0xcf580u, f_000cf580); X86_RET(c, 0xd5f45u);
L_d5f45:
    X86_TICK(c, 9);
    // 0d5f45  add esp, 4
    X86_AT(c, 0xd5f45u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5f48  jmp 0xd6029
    X86_AT(c, 0xd5f48u);
    goto L_d6029;
L_d5f4d:
    X86_TICK(c, 7);
    // 0d5f4d  call 0xcc9e0
    X86_AT(c, 0xd5f4du);
    push32(c, 0xd5f52u); x86_call_known(c, 0xcc9e0u, f_000cc9e0); X86_RET(c, 0xd5f52u);
    X86_TICK(c, 7);
    // 0d5f52  jmp 0xd6029
    X86_AT(c, 0xd5f52u);
    goto L_d6029;
L_d5f57:
    X86_TICK(c, 7);
    // 0d5f57  call 0xcd1a8
    X86_AT(c, 0xd5f57u);
    push32(c, 0xd5f5cu); x86_call_known(c, 0xcd1a8u, f_000cd1a8); X86_RET(c, 0xd5f5cu);
    X86_TICK(c, 7);
    // 0d5f5c  jmp 0xd6029
    X86_AT(c, 0xd5f5cu);
    goto L_d6029;
L_d5f61:
    X86_TICK(c, 7);
    // 0d5f61  call 0xcd824
    X86_AT(c, 0xd5f61u);
    push32(c, 0xd5f66u); x86_call_known(c, 0xcd824u, f_000cd824); X86_RET(c, 0xd5f66u);
    X86_TICK(c, 7);
    // 0d5f66  jmp 0xd6029
    X86_AT(c, 0xd5f66u);
    goto L_d6029;
L_d5f6b:
    X86_TICK(c, 7);
    // 0d5f6b  call 0xd4c30
    X86_AT(c, 0xd5f6bu);
    push32(c, 0xd5f70u); x86_call_known(c, 0xd4c30u, f_000d4c30); X86_RET(c, 0xd5f70u);
    X86_TICK(c, 7);
    // 0d5f70  jmp 0xd6029
    X86_AT(c, 0xd5f70u);
    goto L_d6029;
L_d5f75:
    X86_TICK(c, 7);
    // 0d5f75  call 0xcd8c0
    X86_AT(c, 0xd5f75u);
    push32(c, 0xd5f7au); x86_call_known(c, 0xcd8c0u, f_000cd8c0); X86_RET(c, 0xd5f7au);
    X86_TICK(c, 7);
    // 0d5f7a  jmp 0xd6029
    X86_AT(c, 0xd5f7au);
    goto L_d6029;
L_d5f7f:
    X86_TICK(c, 7);
    // 0d5f7f  call 0xcfa18
    X86_AT(c, 0xd5f7fu);
    push32(c, 0xd5f84u); x86_call_known(c, 0xcfa18u, f_000cfa18); X86_RET(c, 0xd5f84u);
    X86_TICK(c, 7);
    // 0d5f84  jmp 0xd6029
    X86_AT(c, 0xd5f84u);
    goto L_d6029;
L_d5f89:
    X86_TICK(c, 7);
    // 0d5f89  call 0xcd938
    X86_AT(c, 0xd5f89u);
    push32(c, 0xd5f8eu); x86_call_known(c, 0xcd938u, f_000cd938); X86_RET(c, 0xd5f8eu);
    X86_TICK(c, 7);
    // 0d5f8e  jmp 0xd6029
    X86_AT(c, 0xd5f8eu);
    goto L_d6029;
L_d5f93:
    X86_TICK(c, 7);
    // 0d5f93  call 0xcd9f0
    X86_AT(c, 0xd5f93u);
    push32(c, 0xd5f98u); x86_call_known(c, 0xcd9f0u, f_000cd9f0); X86_RET(c, 0xd5f98u);
    X86_TICK(c, 7);
    // 0d5f98  jmp 0xd6029
    X86_AT(c, 0xd5f98u);
    goto L_d6029;
L_d5f9d:
    X86_TICK(c, 7);
    // 0d5f9d  call 0xce424
    X86_AT(c, 0xd5f9du);
    push32(c, 0xd5fa2u); x86_call_known(c, 0xce424u, f_000ce424); X86_RET(c, 0xd5fa2u);
    X86_TICK(c, 7);
    // 0d5fa2  jmp 0xd6029
    X86_AT(c, 0xd5fa2u);
    goto L_d6029;
L_d5fa7:
    X86_TICK(c, 7);
    // 0d5fa7  call 0xdc4d4
    X86_AT(c, 0xd5fa7u);
    push32(c, 0xd5facu); x86_call_known(c, 0xdc4d4u, f_000dc4d4); X86_RET(c, 0xd5facu);
    X86_TICK(c, 7);
    // 0d5fac  jmp 0xd6029
    X86_AT(c, 0xd5facu);
    goto L_d6029;
L_d5fb1:
    X86_TICK(c, 7);
    // 0d5fb1  call 0xcfa5c
    X86_AT(c, 0xd5fb1u);
    push32(c, 0xd5fb6u); x86_call_known(c, 0xcfa5cu, f_000cfa5c); X86_RET(c, 0xd5fb6u);
    X86_TICK(c, 7);
    // 0d5fb6  jmp 0xd6029
    X86_AT(c, 0xd5fb6u);
    goto L_d6029;
L_d5fbb:
    X86_TICK(c, 7);
    // 0d5fbb  call 0xcdbe8
    X86_AT(c, 0xd5fbbu);
    push32(c, 0xd5fc0u); x86_call_known(c, 0xcdbe8u, f_000cdbe8); X86_RET(c, 0xd5fc0u);
    X86_TICK(c, 7);
    // 0d5fc0  jmp 0xd6029
    X86_AT(c, 0xd5fc0u);
    goto L_d6029;
L_d5fc5:
    X86_TICK(c, 7);
    // 0d5fc5  call 0xcdfdc
    X86_AT(c, 0xd5fc5u);
    push32(c, 0xd5fcau); x86_call_known(c, 0xcdfdcu, f_000cdfdc); X86_RET(c, 0xd5fcau);
    X86_TICK(c, 7);
    // 0d5fca  jmp 0xd6029
    X86_AT(c, 0xd5fcau);
    goto L_d6029;
L_d5fcc:
    X86_TICK(c, 7);
    // 0d5fcc  call 0xcfc24
    X86_AT(c, 0xd5fccu);
    push32(c, 0xd5fd1u); x86_call_known(c, 0xcfc24u, f_000cfc24); X86_RET(c, 0xd5fd1u);
    X86_TICK(c, 7);
    // 0d5fd1  jmp 0xd6029
    X86_AT(c, 0xd5fd1u);
    goto L_d6029;
L_d5fd3:
    X86_TICK(c, 7);
    // 0d5fd3  call 0xcff4c
    X86_AT(c, 0xd5fd3u);
    push32(c, 0xd5fd8u); x86_call_known(c, 0xcff4cu, f_000cff4c); X86_RET(c, 0xd5fd8u);
    X86_TICK(c, 7);
    // 0d5fd8  jmp 0xd6029
    X86_AT(c, 0xd5fd8u);
    goto L_d6029;
L_d5fda:
    X86_TICK(c, 7);
    // 0d5fda  call 0xd20ec
    X86_AT(c, 0xd5fdau);
    push32(c, 0xd5fdfu); x86_call_known(c, 0xd20ecu, f_000d20ec); X86_RET(c, 0xd5fdfu);
    X86_TICK(c, 7);
    // 0d5fdf  jmp 0xd6029
    X86_AT(c, 0xd5fdfu);
    goto L_d6029;
L_d5fe1:
    X86_TICK(c, 7);
    // 0d5fe1  call 0xce1d0
    X86_AT(c, 0xd5fe1u);
    push32(c, 0xd5fe6u); x86_call_known(c, 0xce1d0u, f_000ce1d0); X86_RET(c, 0xd5fe6u);
    X86_TICK(c, 7);
    // 0d5fe6  jmp 0xd6029
    X86_AT(c, 0xd5fe6u);
    goto L_d6029;
L_d5fe8:
    X86_TICK(c, 7);
    // 0d5fe8  call 0xce258
    X86_AT(c, 0xd5fe8u);
    push32(c, 0xd5fedu); x86_call_known(c, 0xce258u, f_000ce258); X86_RET(c, 0xd5fedu);
    X86_TICK(c, 7);
    // 0d5fed  jmp 0xd6029
    X86_AT(c, 0xd5fedu);
    goto L_d6029;
L_d5fef:
    X86_TICK(c, 7);
    // 0d5fef  call 0xce270
    X86_AT(c, 0xd5fefu);
    push32(c, 0xd5ff4u); x86_call_known(c, 0xce270u, f_000ce270); X86_RET(c, 0xd5ff4u);
    X86_TICK(c, 7);
    // 0d5ff4  jmp 0xd6029
    X86_AT(c, 0xd5ff4u);
    goto L_d6029;
L_d5ff6:
    X86_TICK(c, 7);
    // 0d5ff6  call 0xce57c
    X86_AT(c, 0xd5ff6u);
    push32(c, 0xd5ffbu); x86_call_known(c, 0xce57cu, f_000ce57c); X86_RET(c, 0xd5ffbu);
    X86_TICK(c, 7);
    // 0d5ffb  jmp 0xd6029
    X86_AT(c, 0xd5ffbu);
    goto L_d6029;
L_d5ffd:
    X86_TICK(c, 7);
    // 0d5ffd  call 0xd238c
    X86_AT(c, 0xd5ffdu);
    push32(c, 0xd6002u); x86_call_known(c, 0xd238cu, f_000d238c); X86_RET(c, 0xd6002u);
    X86_TICK(c, 9);
    // 0d6002  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xd6002u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0d600c  jmp 0xd6029
    X86_AT(c, 0xd600cu);
    goto L_d6029;
L_d600e:
    X86_TICK(c, 7);
    // 0d600e  call 0xcdcf8
    X86_AT(c, 0xd600eu);
    push32(c, 0xd6013u); x86_call_known(c, 0xcdcf8u, f_000cdcf8); X86_RET(c, 0xd6013u);
    X86_TICK(c, 7);
    // 0d6013  jmp 0xd6029
    X86_AT(c, 0xd6013u);
    goto L_d6029;
L_d6015:
    X86_TICK(c, 9);
    // 0d6015  push 0x9ce0
    X86_AT(c, 0xd6015u);
    { uint32_t v = 0x9CE0u; push32(c, v); }
    // 0d601a  call 0xcc7bc
    X86_AT(c, 0xd601au);
    push32(c, 0xd601fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd601fu);
    X86_TICK(c, 9);
    // 0d601f  push 1
    X86_AT(c, 0xd601fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6021  call 0xc5ca4
    X86_AT(c, 0xd6021u);
    push32(c, 0xd6026u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd6026u);
    X86_TICK(c, 2);
    // 0d6026  add esp, 8
    X86_AT(c, 0xd6026u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d6029:
    X86_TICK(c, 9);
    // 0d6029  push 3
    X86_AT(c, 0xd6029u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d602b  call 0xca3cc
    X86_AT(c, 0xd602bu);
    push32(c, 0xd6030u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd6030u);
    X86_TICK(c, 14);
    // 0d6030  add esp, 4
    X86_AT(c, 0xd6030u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d6033  cmp byte ptr [0x92494], 0
    X86_AT(c, 0xd6033u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x92494u))), 0x0u, 0, 1);
    // 0d603a  jne 0xd6048
    X86_AT(c, 0xd603au);
    if (x86_cc(c, 5)) { goto L_d6048; }
    X86_TICK(c, 9);
    // 0d603c  mov dword ptr [0xb52f8], 6
    X86_AT(c, 0xd603cu);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x6u);
    // 0d6046  jmp 0xd6065
    X86_AT(c, 0xd6046u);
    goto L_d6065;
L_d6048:
    X86_TICK(c, 13);
    // 0d6048  inc dword ptr [0xaa2dc]
    X86_AT(c, 0xd6048u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d604e  call 0xd32d4
    X86_AT(c, 0xd604eu);
    push32(c, 0xd6053u); x86_call_known(c, 0xd32d4u, f_000d32d4); X86_RET(c, 0xd6053u);
    X86_TICK(c, 7);
    // 0d6053  call 0xd3334
    X86_AT(c, 0xd6053u);
    push32(c, 0xd6058u); x86_call_known(c, 0xd3334u, f_000d3334); X86_RET(c, 0xd6058u);
    X86_TICK(c, 12);
    // 0d6058  cmp dword ptr [0xb52f8], 1
    X86_AT(c, 0xd6058u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x1u, 0, 4);
    // 0d605f  je 0xd5ca7
    X86_AT(c, 0xd605fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd5ca7u); goto L_d5ca7; }
L_d6065:
    X86_TICK(c, 23);
    // 0d6065  mov eax, dword ptr [0xaa0e4]
    X86_AT(c, 0xd6065u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E4u)));
    // 0d606a  mov dword ptr [0xb033a], eax
    X86_AT(c, 0xd606au);
    wr32((c.sbase[3] + (uint32_t)(0xB033Au)), c.r[0]);
    // 0d606f  mov eax, dword ptr [0xaa0e8]
    X86_AT(c, 0xd606fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E8u)));
    // 0d6074  mov dword ptr [0xb033e], eax
    X86_AT(c, 0xd6074u);
    wr32((c.sbase[3] + (uint32_t)(0xB033Eu)), c.r[0]);
    // 0d6079  mov dword ptr [0xb52f8], 0
    X86_AT(c, 0xd6079u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x0u);
    // 0d6083  push 0x9cf0
    X86_AT(c, 0xd6083u);
    { uint32_t v = 0x9CF0u; push32(c, v); }
    // 0d6088  call 0xcba5c
    X86_AT(c, 0xd6088u);
    push32(c, 0xd608du); x86_call_known(c, 0xcba5cu, f_000cba5c); X86_RET(c, 0xd608du);
    X86_TICK(c, 14);
    // 0d608d  add esp, 4
    X86_AT(c, 0xd608du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d6090  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd6090u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d6097  jle 0xd60a2
    X86_AT(c, 0xd6097u);
    if (x86_cc(c, 14)) { goto L_d60a2; }
    X86_TICK(c, 12);
    // 0d6099  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xd6099u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0d60a0  jg 0xd60a9
    X86_AT(c, 0xd60a0u);
    if (x86_cc(c, 15)) { goto L_d60a9; }
L_d60a2:
    X86_TICK(c, 7);
    // 0d60a2  call 0xd2f10
    X86_AT(c, 0xd60a2u);
    push32(c, 0xd60a7u); x86_call_known(c, 0xd2f10u, f_000d2f10); X86_RET(c, 0xd60a7u);
    X86_TICK(c, 7);
    // 0d60a7  jmp 0xd60fd
    X86_AT(c, 0xd60a7u);
    goto L_d60fd;
L_d60a9:
    X86_TICK(c, 9);
    // 0d60a9  push 0
    X86_AT(c, 0xd60a9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d60ab  call 0xc71e0
    X86_AT(c, 0xd60abu);
    push32(c, 0xd60b0u); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xd60b0u);
    X86_TICK(c, 9);
    // 0d60b0  push 0x42b8c
    X86_AT(c, 0xd60b0u);
    { uint32_t v = 0x42B8Cu; push32(c, v); }
    // 0d60b5  call 0xcbf54
    X86_AT(c, 0xd60b5u);
    push32(c, 0xd60bau); x86_call_known(c, 0xcbf54u, f_000cbf54); X86_RET(c, 0xd60bau);
    X86_TICK(c, 7);
    // 0d60ba  call 0xc6a28
    X86_AT(c, 0xd60bau);
    push32(c, 0xd60bfu); x86_call_known(c, 0xc6a28u, f_000c6a28); X86_RET(c, 0xd60bfu);
    X86_TICK(c, 4);
    // 0d60bf  sub esi, esi
    X86_AT(c, 0xd60bfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d60c1  add esp, 8
    X86_AT(c, 0xd60c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d60c4:
    X86_TICK(c, 11);
    // 0d60c4  cmp esi, dword ptr [0xaa0ec]
    X86_AT(c, 0xd60c4u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xAA0ECu))), 0, 4);
    // 0d60ca  jge 0xd60de
    X86_AT(c, 0xd60cau);
    if (x86_cc(c, 13)) { goto L_d60de; }
    X86_TICK(c, 12);
    // 0d60cc  push dword ptr [esi*4 + 0xaa0f0]
    X86_AT(c, 0xd60ccu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xAA0F0u))); push32(c, v); }
    // 0d60d3  call 0xd5464
    X86_AT(c, 0xd60d3u);
    push32(c, 0xd60d8u); x86_call_known(c, 0xd5464u, f_000d5464); X86_RET(c, 0xd60d8u);
    X86_TICK(c, 11);
    // 0d60d8  inc esi
    X86_AT(c, 0xd60d8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d60d9  add esp, 4
    X86_AT(c, 0xd60d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d60dc  jmp 0xd60c4
    X86_AT(c, 0xd60dcu);
    X86_POLL(c, 0xd60c4u); goto L_d60c4;
L_d60de:
    X86_TICK(c, 9);
    // 0d60de  push 1
    X86_AT(c, 0xd60deu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d60e0  call 0xc5e44
    X86_AT(c, 0xd60e0u);
    push32(c, 0xd60e5u); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xd60e5u);
    X86_TICK(c, 9);
    // 0d60e5  push 7
    X86_AT(c, 0xd60e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d60e7  call 0xcacd4
    X86_AT(c, 0xd60e7u);
    push32(c, 0xd60ecu); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xd60ecu);
    X86_TICK(c, 9);
    // 0d60ec  push 7
    X86_AT(c, 0xd60ecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d60ee  call 0xca0a0
    X86_AT(c, 0xd60eeu);
    push32(c, 0xd60f3u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd60f3u);
    X86_TICK(c, 9);
    // 0d60f3  push 7
    X86_AT(c, 0xd60f3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d60f5  call 0xcad80
    X86_AT(c, 0xd60f5u);
    push32(c, 0xd60fau); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xd60fau);
    X86_TICK(c, 2);
    // 0d60fa  add esp, 0x10
    X86_AT(c, 0xd60fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d60fd:
    X86_TICK(c, 28);
    // 0d60fd  pop edi
    X86_AT(c, 0xd60fdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d60fe  pop esi
    X86_AT(c, 0xd60feu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d60ff  pop ebx
    X86_AT(c, 0xd60ffu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d6100  leave 
    X86_AT(c, 0xd6100u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d6101  ret 
    X86_AT(c, 0xd6101u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6029u, "ran off the end of a function");
}
void f_000d6104(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0d6104  push ebp
    X86_AT(c, 0xd6104u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d6105  mov ebp, esp
    X86_AT(c, 0xd6105u);
    c.r[5] = c.r[4];
    // 0d6107  push eax
    X86_AT(c, 0xd6107u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6108  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xd6108u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0d610f  push 0xa
    X86_AT(c, 0xd610fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d6111  push 0xf
    X86_AT(c, 0xd6111u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d6113  push 0xb
    X86_AT(c, 0xd6113u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d6115  push 0x12
    X86_AT(c, 0xd6115u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0d6117  push 0x29
    X86_AT(c, 0xd6117u);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0d6119  push 0x13c
    X86_AT(c, 0xd6119u);
    { uint32_t v = 0x13Cu; push32(c, v); }
    // 0d611e  push 0x15c
    X86_AT(c, 0xd611eu);
    { uint32_t v = 0x15Cu; push32(c, v); }
    // 0d6123  push 0x41
    X86_AT(c, 0xd6123u);
    { uint32_t v = 0x41u; push32(c, v); }
    // 0d6125  push 0xc
    X86_AT(c, 0xd6125u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d6127  push 4
    X86_AT(c, 0xd6127u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6129  call 0xc9fbc
    X86_AT(c, 0xd6129u);
    push32(c, 0xd612eu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd612eu);
    X86_TICK(c, 9);
    // 0d612e  push 4
    X86_AT(c, 0xd612eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6130  call 0xca100
    X86_AT(c, 0xd6130u);
    push32(c, 0xd6135u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd6135u);
    X86_TICK(c, 7);
    // 0d6135  call 0xd2124
    X86_AT(c, 0xd6135u);
    push32(c, 0xd613au); x86_call_known(c, 0xd2124u, f_000d2124); X86_RET(c, 0xd613au);
    X86_TICK(c, 9);
    // 0d613a  push 4
    X86_AT(c, 0xd613au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d613c  call 0xca0a0
    X86_AT(c, 0xd613cu);
    push32(c, 0xd6141u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd6141u);
    X86_TICK(c, 13);
    // 0d6141  add esp, 0x30
    X86_AT(c, 0xd6141u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d6144  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd6144u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d6147  cmp edx, 7
    X86_AT(c, 0xd6147u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0d614a  ja 0xd6438
    X86_AT(c, 0xd614au);
    if (x86_cc(c, 7)) { goto L_d6438; }
    X86_TICK(c, 7);
    // 0d6150  jmp dword ptr cs:[edx*4 + 0xd6158]
    X86_AT(c, 0xd6150u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD6158u)));
      switch (t) {
      case 0xd6178u: goto L_d6178;
      case 0xd61b5u: goto L_d61b5;
      case 0xd6211u: goto L_d6211;
      case 0xd6258u: goto L_d6258;
      case 0xd6350u: goto L_d6350;
      case 0xd63c1u: goto L_d63c1;
      case 0xd63e6u: goto L_d63e6;
      case 0xd640bu: goto L_d640b;
      default: x86_jump(c, t); return; } }
L_d6178:
    X86_TICK(c, 11);
    // 0d6178  push 2
    X86_AT(c, 0xd6178u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d617a  push 2
    X86_AT(c, 0xd617au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d617c  call 0xcc814
    X86_AT(c, 0xd617cu);
    push32(c, 0xd6181u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6181u);
    X86_TICK(c, 11);
    // 0d6181  push 0x9d00
    X86_AT(c, 0xd6181u);
    { uint32_t v = 0x9D00u; push32(c, v); }
    // 0d6186  push 4
    X86_AT(c, 0xd6186u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6188  call 0xc8cdc
    X86_AT(c, 0xd6188u);
    push32(c, 0xd618du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd618du);
    X86_TICK(c, 11);
    // 0d618d  push 3
    X86_AT(c, 0xd618du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d618f  push 2
    X86_AT(c, 0xd618fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6191  call 0xcc814
    X86_AT(c, 0xd6191u);
    push32(c, 0xd6196u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6196u);
    X86_TICK(c, 11);
    // 0d6196  push 0x9d28
    X86_AT(c, 0xd6196u);
    { uint32_t v = 0x9D28u; push32(c, v); }
    // 0d619b  push 4
    X86_AT(c, 0xd619bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d619d  call 0xc8cdc
    X86_AT(c, 0xd619du);
    push32(c, 0xd61a2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd61a2u);
    X86_TICK(c, 11);
    // 0d61a2  push 4
    X86_AT(c, 0xd61a2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d61a4  push 2
    X86_AT(c, 0xd61a4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d61a6  call 0xcc814
    X86_AT(c, 0xd61a6u);
    push32(c, 0xd61abu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd61abu);
    X86_TICK(c, 9);
    // 0d61ab  push 0x9d74
    X86_AT(c, 0xd61abu);
    { uint32_t v = 0x9D74u; push32(c, v); }
    // 0d61b0  jmp 0xd6249
    X86_AT(c, 0xd61b0u);
    goto L_d6249;
L_d61b5:
    X86_TICK(c, 11);
    // 0d61b5  push 2
    X86_AT(c, 0xd61b5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d61b7  push 2
    X86_AT(c, 0xd61b7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d61b9  call 0xcc814
    X86_AT(c, 0xd61b9u);
    push32(c, 0xd61beu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd61beu);
    X86_TICK(c, 11);
    // 0d61be  push 0x9d88
    X86_AT(c, 0xd61beu);
    { uint32_t v = 0x9D88u; push32(c, v); }
    // 0d61c3  push 4
    X86_AT(c, 0xd61c3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d61c5  call 0xc8cdc
    X86_AT(c, 0xd61c5u);
    push32(c, 0xd61cau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd61cau);
    X86_TICK(c, 11);
    // 0d61ca  push 3
    X86_AT(c, 0xd61cau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d61cc  push 2
    X86_AT(c, 0xd61ccu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d61ce  call 0xcc814
    X86_AT(c, 0xd61ceu);
    push32(c, 0xd61d3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd61d3u);
    X86_TICK(c, 11);
    // 0d61d3  push 0x9db0
    X86_AT(c, 0xd61d3u);
    { uint32_t v = 0x9DB0u; push32(c, v); }
    // 0d61d8  push 4
    X86_AT(c, 0xd61d8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d61da  call 0xc8cdc
    X86_AT(c, 0xd61dau);
    push32(c, 0xd61dfu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd61dfu);
    X86_TICK(c, 11);
    // 0d61df  push 5
    X86_AT(c, 0xd61dfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d61e1  push 2
    X86_AT(c, 0xd61e1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d61e3  call 0xcc814
    X86_AT(c, 0xd61e3u);
    push32(c, 0xd61e8u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd61e8u);
    X86_TICK(c, 11);
    // 0d61e8  push 0x9de0
    X86_AT(c, 0xd61e8u);
    { uint32_t v = 0x9DE0u; push32(c, v); }
    // 0d61ed  push 4
    X86_AT(c, 0xd61edu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d61ef  call 0xc8cdc
    X86_AT(c, 0xd61efu);
    push32(c, 0xd61f4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd61f4u);
    X86_TICK(c, 11);
    // 0d61f4  push 6
    X86_AT(c, 0xd61f4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d61f6  push 2
    X86_AT(c, 0xd61f6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d61f8  call 0xcc814
    X86_AT(c, 0xd61f8u);
    push32(c, 0xd61fdu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd61fdu);
    X86_TICK(c, 11);
    // 0d61fd  push 0x9e28
    X86_AT(c, 0xd61fdu);
    { uint32_t v = 0x9E28u; push32(c, v); }
    // 0d6202  push 4
    X86_AT(c, 0xd6202u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6204  call 0xc8cdc
    X86_AT(c, 0xd6204u);
    push32(c, 0xd6209u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6209u);
    X86_TICK(c, 9);
    // 0d6209  add esp, 0x40
    X86_AT(c, 0xd6209u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d620c  jmp 0xd6438
    X86_AT(c, 0xd620cu);
    goto L_d6438;
L_d6211:
    X86_TICK(c, 11);
    // 0d6211  push 2
    X86_AT(c, 0xd6211u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6213  push 2
    X86_AT(c, 0xd6213u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6215  call 0xcc814
    X86_AT(c, 0xd6215u);
    push32(c, 0xd621au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd621au);
    X86_TICK(c, 11);
    // 0d621a  push 0x9e64
    X86_AT(c, 0xd621au);
    { uint32_t v = 0x9E64u; push32(c, v); }
    // 0d621f  push 4
    X86_AT(c, 0xd621fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6221  call 0xc8cdc
    X86_AT(c, 0xd6221u);
    push32(c, 0xd6226u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6226u);
    X86_TICK(c, 11);
    // 0d6226  push 4
    X86_AT(c, 0xd6226u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6228  push 2
    X86_AT(c, 0xd6228u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d622a  call 0xcc814
    X86_AT(c, 0xd622au);
    push32(c, 0xd622fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd622fu);
    X86_TICK(c, 11);
    // 0d622f  push 0x9ea8
    X86_AT(c, 0xd622fu);
    { uint32_t v = 0x9EA8u; push32(c, v); }
    // 0d6234  push 4
    X86_AT(c, 0xd6234u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6236  call 0xc8cdc
    X86_AT(c, 0xd6236u);
    push32(c, 0xd623bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd623bu);
    X86_TICK(c, 11);
    // 0d623b  push 5
    X86_AT(c, 0xd623bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d623d  push 2
    X86_AT(c, 0xd623du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d623f  call 0xcc814
    X86_AT(c, 0xd623fu);
    push32(c, 0xd6244u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6244u);
    X86_TICK(c, 2);
    // 0d6244  push 0x9ef0
    X86_AT(c, 0xd6244u);
    { uint32_t v = 0x9EF0u; push32(c, v); }
L_d6249:
    X86_TICK(c, 9);
    // 0d6249  push 4
    X86_AT(c, 0xd6249u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d624b  call 0xc8cdc
    X86_AT(c, 0xd624bu);
    push32(c, 0xd6250u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6250u);
    X86_TICK(c, 9);
    // 0d6250  add esp, 0x30
    X86_AT(c, 0xd6250u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d6253  jmp 0xd6438
    X86_AT(c, 0xd6253u);
    goto L_d6438;
L_d6258:
    X86_TICK(c, 11);
    // 0d6258  push 2
    X86_AT(c, 0xd6258u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d625a  push 2
    X86_AT(c, 0xd625au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d625c  call 0xcc814
    X86_AT(c, 0xd625cu);
    push32(c, 0xd6261u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6261u);
    X86_TICK(c, 11);
    // 0d6261  push 0x9f30
    X86_AT(c, 0xd6261u);
    { uint32_t v = 0x9F30u; push32(c, v); }
    // 0d6266  push 4
    X86_AT(c, 0xd6266u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6268  call 0xc8cdc
    X86_AT(c, 0xd6268u);
    push32(c, 0xd626du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd626du);
    X86_TICK(c, 11);
    // 0d626d  push 3
    X86_AT(c, 0xd626du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d626f  push 2
    X86_AT(c, 0xd626fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6271  call 0xcc814
    X86_AT(c, 0xd6271u);
    push32(c, 0xd6276u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6276u);
    X86_TICK(c, 11);
    // 0d6276  push 0x9f50
    X86_AT(c, 0xd6276u);
    { uint32_t v = 0x9F50u; push32(c, v); }
    // 0d627b  push 4
    X86_AT(c, 0xd627bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d627d  call 0xc8cdc
    X86_AT(c, 0xd627du);
    push32(c, 0xd6282u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6282u);
    X86_TICK(c, 11);
    // 0d6282  push 5
    X86_AT(c, 0xd6282u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d6284  push 2
    X86_AT(c, 0xd6284u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6286  call 0xcc814
    X86_AT(c, 0xd6286u);
    push32(c, 0xd628bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd628bu);
    X86_TICK(c, 11);
    // 0d628b  push 0x9f94
    X86_AT(c, 0xd628bu);
    { uint32_t v = 0x9F94u; push32(c, v); }
    // 0d6290  push 4
    X86_AT(c, 0xd6290u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6292  call 0xc8cdc
    X86_AT(c, 0xd6292u);
    push32(c, 0xd6297u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6297u);
    X86_TICK(c, 11);
    // 0d6297  push 6
    X86_AT(c, 0xd6297u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d6299  push 2
    X86_AT(c, 0xd6299u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d629b  call 0xcc814
    X86_AT(c, 0xd629bu);
    push32(c, 0xd62a0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd62a0u);
    X86_TICK(c, 11);
    // 0d62a0  push 0x9fcc
    X86_AT(c, 0xd62a0u);
    { uint32_t v = 0x9FCCu; push32(c, v); }
    // 0d62a5  push 4
    X86_AT(c, 0xd62a5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d62a7  call 0xc8cdc
    X86_AT(c, 0xd62a7u);
    push32(c, 0xd62acu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd62acu);
    X86_TICK(c, 13);
    // 0d62ac  add esp, 0x40
    X86_AT(c, 0xd62acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d62af  push 7
    X86_AT(c, 0xd62afu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d62b1  push 2
    X86_AT(c, 0xd62b1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d62b3  call 0xcc814
    X86_AT(c, 0xd62b3u);
    push32(c, 0xd62b8u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd62b8u);
    X86_TICK(c, 11);
    // 0d62b8  push 0xa010
    X86_AT(c, 0xd62b8u);
    { uint32_t v = 0xA010u; push32(c, v); }
    // 0d62bd  push 4
    X86_AT(c, 0xd62bdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d62bf  call 0xc8cdc
    X86_AT(c, 0xd62bfu);
    push32(c, 0xd62c4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd62c4u);
    X86_TICK(c, 11);
    // 0d62c4  push 8
    X86_AT(c, 0xd62c4u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d62c6  push 2
    X86_AT(c, 0xd62c6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d62c8  call 0xcc814
    X86_AT(c, 0xd62c8u);
    push32(c, 0xd62cdu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd62cdu);
    X86_TICK(c, 11);
    // 0d62cd  push 0xa050
    X86_AT(c, 0xd62cdu);
    { uint32_t v = 0xA050u; push32(c, v); }
    // 0d62d2  push 4
    X86_AT(c, 0xd62d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d62d4  call 0xc8cdc
    X86_AT(c, 0xd62d4u);
    push32(c, 0xd62d9u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd62d9u);
    X86_TICK(c, 11);
    // 0d62d9  push 9
    X86_AT(c, 0xd62d9u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d62db  push 2
    X86_AT(c, 0xd62dbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d62dd  call 0xcc814
    X86_AT(c, 0xd62ddu);
    push32(c, 0xd62e2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd62e2u);
    X86_TICK(c, 11);
    // 0d62e2  push 0xa08c
    X86_AT(c, 0xd62e2u);
    { uint32_t v = 0xA08Cu; push32(c, v); }
    // 0d62e7  push 4
    X86_AT(c, 0xd62e7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d62e9  call 0xc8cdc
    X86_AT(c, 0xd62e9u);
    push32(c, 0xd62eeu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd62eeu);
    X86_TICK(c, 11);
    // 0d62ee  push 0xa
    X86_AT(c, 0xd62eeu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d62f0  push 2
    X86_AT(c, 0xd62f0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d62f2  call 0xcc814
    X86_AT(c, 0xd62f2u);
    push32(c, 0xd62f7u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd62f7u);
    X86_TICK(c, 11);
    // 0d62f7  push 0xa0cc
    X86_AT(c, 0xd62f7u);
    { uint32_t v = 0xA0CCu; push32(c, v); }
    // 0d62fc  push 4
    X86_AT(c, 0xd62fcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d62fe  call 0xc8cdc
    X86_AT(c, 0xd62feu);
    push32(c, 0xd6303u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6303u);
    X86_TICK(c, 13);
    // 0d6303  add esp, 0x40
    X86_AT(c, 0xd6303u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d6306  push 0xc
    X86_AT(c, 0xd6306u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d6308  push 2
    X86_AT(c, 0xd6308u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d630a  call 0xcc814
    X86_AT(c, 0xd630au);
    push32(c, 0xd630fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd630fu);
    X86_TICK(c, 13);
    // 0d630f  add esp, 8
    X86_AT(c, 0xd630fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d6312  push 0xa108
    X86_AT(c, 0xd6312u);
    { uint32_t v = 0xA108u; push32(c, v); }
    // 0d6317  push 4
    X86_AT(c, 0xd6317u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6319  call 0xc8cdc
    X86_AT(c, 0xd6319u);
    push32(c, 0xd631eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd631eu);
    X86_TICK(c, 11);
    // 0d631e  push 0xd
    X86_AT(c, 0xd631eu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d6320  push 2
    X86_AT(c, 0xd6320u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6322  call 0xcc814
    X86_AT(c, 0xd6322u);
    push32(c, 0xd6327u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6327u);
    X86_TICK(c, 11);
    // 0d6327  push 0xa128
    X86_AT(c, 0xd6327u);
    { uint32_t v = 0xA128u; push32(c, v); }
    // 0d632c  push 4
    X86_AT(c, 0xd632cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d632e  call 0xc8cdc
    X86_AT(c, 0xd632eu);
    push32(c, 0xd6333u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6333u);
    X86_TICK(c, 11);
    // 0d6333  push 0xe
    X86_AT(c, 0xd6333u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d6335  push 2
    X86_AT(c, 0xd6335u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6337  call 0xcc814
    X86_AT(c, 0xd6337u);
    push32(c, 0xd633cu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd633cu);
    X86_TICK(c, 11);
    // 0d633c  push 0xa174
    X86_AT(c, 0xd633cu);
    { uint32_t v = 0xA174u; push32(c, v); }
    // 0d6341  push 4
    X86_AT(c, 0xd6341u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6343  call 0xc8cdc
    X86_AT(c, 0xd6343u);
    push32(c, 0xd6348u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6348u);
    X86_TICK(c, 9);
    // 0d6348  add esp, 0x28
    X86_AT(c, 0xd6348u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d634b  jmp 0xd6438
    X86_AT(c, 0xd634bu);
    goto L_d6438;
L_d6350:
    X86_TICK(c, 11);
    // 0d6350  push 2
    X86_AT(c, 0xd6350u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6352  push 2
    X86_AT(c, 0xd6352u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6354  call 0xcc814
    X86_AT(c, 0xd6354u);
    push32(c, 0xd6359u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6359u);
    X86_TICK(c, 11);
    // 0d6359  push 0xa194
    X86_AT(c, 0xd6359u);
    { uint32_t v = 0xA194u; push32(c, v); }
    // 0d635e  push 4
    X86_AT(c, 0xd635eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6360  call 0xc8cdc
    X86_AT(c, 0xd6360u);
    push32(c, 0xd6365u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6365u);
    X86_TICK(c, 11);
    // 0d6365  push 4
    X86_AT(c, 0xd6365u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6367  push 2
    X86_AT(c, 0xd6367u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6369  call 0xcc814
    X86_AT(c, 0xd6369u);
    push32(c, 0xd636eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd636eu);
    X86_TICK(c, 11);
    // 0d636e  push 0xa1dc
    X86_AT(c, 0xd636eu);
    { uint32_t v = 0xA1DCu; push32(c, v); }
    // 0d6373  push 4
    X86_AT(c, 0xd6373u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6375  call 0xc8cdc
    X86_AT(c, 0xd6375u);
    push32(c, 0xd637au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd637au);
    X86_TICK(c, 11);
    // 0d637a  push 6
    X86_AT(c, 0xd637au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d637c  push 2
    X86_AT(c, 0xd637cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d637e  call 0xcc814
    X86_AT(c, 0xd637eu);
    push32(c, 0xd6383u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6383u);
    X86_TICK(c, 11);
    // 0d6383  push 0xa224
    X86_AT(c, 0xd6383u);
    { uint32_t v = 0xA224u; push32(c, v); }
    // 0d6388  push 4
    X86_AT(c, 0xd6388u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d638a  call 0xc8cdc
    X86_AT(c, 0xd638au);
    push32(c, 0xd638fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd638fu);
    X86_TICK(c, 11);
    // 0d638f  push 7
    X86_AT(c, 0xd638fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d6391  push 2
    X86_AT(c, 0xd6391u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6393  call 0xcc814
    X86_AT(c, 0xd6393u);
    push32(c, 0xd6398u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6398u);
    X86_TICK(c, 11);
    // 0d6398  push 0xa270
    X86_AT(c, 0xd6398u);
    { uint32_t v = 0xA270u; push32(c, v); }
    // 0d639d  push 4
    X86_AT(c, 0xd639du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d639f  call 0xc8cdc
    X86_AT(c, 0xd639fu);
    push32(c, 0xd63a4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd63a4u);
    X86_TICK(c, 13);
    // 0d63a4  add esp, 0x40
    X86_AT(c, 0xd63a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d63a7  push 8
    X86_AT(c, 0xd63a7u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d63a9  push 2
    X86_AT(c, 0xd63a9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d63ab  call 0xcc814
    X86_AT(c, 0xd63abu);
    push32(c, 0xd63b0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd63b0u);
    X86_TICK(c, 11);
    // 0d63b0  push 0xa2b0
    X86_AT(c, 0xd63b0u);
    { uint32_t v = 0xA2B0u; push32(c, v); }
    // 0d63b5  push 4
    X86_AT(c, 0xd63b5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d63b7  call 0xc8cdc
    X86_AT(c, 0xd63b7u);
    push32(c, 0xd63bcu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd63bcu);
    X86_TICK(c, 9);
    // 0d63bc  add esp, 0x10
    X86_AT(c, 0xd63bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d63bf  jmp 0xd6438
    X86_AT(c, 0xd63bfu);
    goto L_d6438;
L_d63c1:
    X86_TICK(c, 11);
    // 0d63c1  push 2
    X86_AT(c, 0xd63c1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d63c3  push 2
    X86_AT(c, 0xd63c3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d63c5  call 0xcc814
    X86_AT(c, 0xd63c5u);
    push32(c, 0xd63cau); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd63cau);
    X86_TICK(c, 11);
    // 0d63ca  push 0xa2cc
    X86_AT(c, 0xd63cau);
    { uint32_t v = 0xA2CCu; push32(c, v); }
    // 0d63cf  push 4
    X86_AT(c, 0xd63cfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d63d1  call 0xc8cdc
    X86_AT(c, 0xd63d1u);
    push32(c, 0xd63d6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd63d6u);
    X86_TICK(c, 11);
    // 0d63d6  push 4
    X86_AT(c, 0xd63d6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d63d8  push 2
    X86_AT(c, 0xd63d8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d63da  call 0xcc814
    X86_AT(c, 0xd63dau);
    push32(c, 0xd63dfu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd63dfu);
    X86_TICK(c, 9);
    // 0d63df  push 0xa314
    X86_AT(c, 0xd63dfu);
    { uint32_t v = 0xA314u; push32(c, v); }
    // 0d63e4  jmp 0xd642e
    X86_AT(c, 0xd63e4u);
    goto L_d642e;
L_d63e6:
    X86_TICK(c, 11);
    // 0d63e6  push 2
    X86_AT(c, 0xd63e6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d63e8  push 2
    X86_AT(c, 0xd63e8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d63ea  call 0xcc814
    X86_AT(c, 0xd63eau);
    push32(c, 0xd63efu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd63efu);
    X86_TICK(c, 11);
    // 0d63ef  push 0xa364
    X86_AT(c, 0xd63efu);
    { uint32_t v = 0xA364u; push32(c, v); }
    // 0d63f4  push 4
    X86_AT(c, 0xd63f4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d63f6  call 0xc8cdc
    X86_AT(c, 0xd63f6u);
    push32(c, 0xd63fbu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd63fbu);
    X86_TICK(c, 11);
    // 0d63fb  push 4
    X86_AT(c, 0xd63fbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d63fd  push 2
    X86_AT(c, 0xd63fdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d63ff  call 0xcc814
    X86_AT(c, 0xd63ffu);
    push32(c, 0xd6404u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6404u);
    X86_TICK(c, 9);
    // 0d6404  push 0xa3ac
    X86_AT(c, 0xd6404u);
    { uint32_t v = 0xA3ACu; push32(c, v); }
    // 0d6409  jmp 0xd642e
    X86_AT(c, 0xd6409u);
    goto L_d642e;
L_d640b:
    X86_TICK(c, 11);
    // 0d640b  push 2
    X86_AT(c, 0xd640bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d640d  push 2
    X86_AT(c, 0xd640du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d640f  call 0xcc814
    X86_AT(c, 0xd640fu);
    push32(c, 0xd6414u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6414u);
    X86_TICK(c, 11);
    // 0d6414  push 0xa3fc
    X86_AT(c, 0xd6414u);
    { uint32_t v = 0xA3FCu; push32(c, v); }
    // 0d6419  push 4
    X86_AT(c, 0xd6419u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d641b  call 0xc8cdc
    X86_AT(c, 0xd641bu);
    push32(c, 0xd6420u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6420u);
    X86_TICK(c, 11);
    // 0d6420  push 4
    X86_AT(c, 0xd6420u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6422  push 2
    X86_AT(c, 0xd6422u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6424  call 0xcc814
    X86_AT(c, 0xd6424u);
    push32(c, 0xd6429u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6429u);
    X86_TICK(c, 2);
    // 0d6429  push 0xa440
    X86_AT(c, 0xd6429u);
    { uint32_t v = 0xA440u; push32(c, v); }
L_d642e:
    X86_TICK(c, 9);
    // 0d642e  push 4
    X86_AT(c, 0xd642eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6430  call 0xc8cdc
    X86_AT(c, 0xd6430u);
    push32(c, 0xd6435u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6435u);
    X86_TICK(c, 2);
    // 0d6435  add esp, 0x20
    X86_AT(c, 0xd6435u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_d6438:
    X86_TICK(c, 16);
    // 0d6438  leave 
    X86_AT(c, 0xd6438u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d6439  ret 
    X86_AT(c, 0xd6439u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6104u, "ran off the end of a function");
}
void f_000d6438(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0d6438  leave 
    X86_AT(c, 0xd6438u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d6439  ret 
    X86_AT(c, 0xd6439u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6438u, "ran off the end of a function");
}
void f_000d643c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0d643c  push ebp
    X86_AT(c, 0xd643cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d643d  mov ebp, esp
    X86_AT(c, 0xd643du);
    c.r[5] = c.r[4];
    // 0d643f  push edi
    X86_AT(c, 0xd643fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6440  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd6440u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d6443  mov eax, 8
    X86_AT(c, 0xd6443u);
    c.r[0] = 0x8u;
    // 0d6448  sub eax, edi
    X86_AT(c, 0xd6448u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d644a  cmp dword ptr [eax*4 + 0xb0346], 1
    X86_AT(c, 0xd644au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0346u))), 0x1u, 0, 4);
    // 0d6452  jne 0xd647c
    X86_AT(c, 0xd6452u);
    if (x86_cc(c, 5)) { goto L_d647c; }
    X86_TICK(c, 11);
    // 0d6454  mov dword ptr [eax*4 + 0xb0346], 2
    X86_AT(c, 0xd6454u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0346u)), 0x2u);
    // 0d645f  push 0x32
    X86_AT(c, 0xd645fu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0d6461  call 0xd6660
    X86_AT(c, 0xd6461u);
    push32(c, 0xd6466u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd6466u);
    X86_TICK(c, 11);
    // 0d6466  push 0xb
    X86_AT(c, 0xd6466u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d6468  push 0xa484
    X86_AT(c, 0xd6468u);
    { uint32_t v = 0xA484u; push32(c, v); }
    // 0d646d  call 0xcc830
    X86_AT(c, 0xd646du);
    push32(c, 0xd6472u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd6472u);
    X86_TICK(c, 9);
    // 0d6472  push 0x32
    X86_AT(c, 0xd6472u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0d6474  call 0xd6660
    X86_AT(c, 0xd6474u);
    push32(c, 0xd6479u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd6479u);
    X86_TICK(c, 2);
    // 0d6479  add esp, 0x10
    X86_AT(c, 0xd6479u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d647c:
    X86_TICK(c, 20);
    // 0d647c  pop edi
    X86_AT(c, 0xd647cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d647d  leave 
    X86_AT(c, 0xd647du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d647e  ret 
    X86_AT(c, 0xd647eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd643cu, "ran off the end of a function");
}
void f_000d6480(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0d6480  push ebp
    X86_AT(c, 0xd6480u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d6481  mov ebp, esp
    X86_AT(c, 0xd6481u);
    c.r[5] = c.r[4];
    // 0d6483  sub esp, 8
    X86_AT(c, 0xd6483u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d6486  push ebx
    X86_AT(c, 0xd6486u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d6487  push esi
    X86_AT(c, 0xd6487u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d6488  push edi
    X86_AT(c, 0xd6488u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6489  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd6489u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d648c  mov ebx, 1
    X86_AT(c, 0xd648cu);
    c.r[3] = 0x1u;
    // 0d6491  sub edi, 0x29
    X86_AT(c, 0xd6491u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x29u, 0, 4); }
    // 0d6494  push edi
    X86_AT(c, 0xd6494u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6495  call 0xd6104
    X86_AT(c, 0xd6495u);
    push32(c, 0xd649au); x86_call_known(c, 0xd6104u, f_000d6104); X86_RET(c, 0xd649au);
    X86_TICK(c, 9);
    // 0d649a  add esp, 4
    X86_AT(c, 0xd649au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d649d  test edi, ebx
    X86_AT(c, 0xd649du);
    (void)x86_logic(c, c.r[7] & c.r[3], 4);
    // 0d649f  je 0xd64aa
    X86_AT(c, 0xd649fu);
    if (x86_cc(c, 4)) { goto L_d64aa; }
    X86_TICK(c, 9);
    // 0d64a1  push edi
    X86_AT(c, 0xd64a1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d64a2  call 0xd643c
    X86_AT(c, 0xd64a2u);
    push32(c, 0xd64a7u); x86_call_known(c, 0xd643cu, f_000d643c); X86_RET(c, 0xd64a7u);
    X86_TICK(c, 2);
    // 0d64a7  add esp, 4
    X86_AT(c, 0xd64a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d64aa:
    X86_TICK(c, 11);
    // 0d64aa  cmp edi, dword ptr [0xb0422]
    X86_AT(c, 0xd64aau);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xB0422u))), 0, 4);
    // 0d64b0  je 0xd6575
    X86_AT(c, 0xd64b0u);
    if (x86_cc(c, 4)) { goto L_d6575; }
    X86_TICK(c, 13);
    // 0d64b6  mov dword ptr [0xb0422], edi
    X86_AT(c, 0xd64b6u);
    wr32((c.sbase[3] + (uint32_t)(0xB0422u)), c.r[7]);
    // 0d64bc  mov esi, dword ptr [edi*4 + 0xaa238]
    X86_AT(c, 0xd64bcu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xAA238u)));
    // 0d64c3  and esi, esi
    X86_AT(c, 0xd64c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d64c5  jne 0xd655d
    X86_AT(c, 0xd64c5u);
    if (x86_cc(c, 5)) { goto L_d655d; }
    X86_TICK(c, 7);
    // 0d64cb  cmp edi, 2
    X86_AT(c, 0xd64cbu);
    (void)x86_sub(c, c.r[7], 0x2u, 0, 4);
    // 0d64ce  jne 0xd655d
    X86_AT(c, 0xd64ceu);
    if (x86_cc(c, 5)) { goto L_d655d; }
    X86_TICK(c, 2);
    // 0d64d4  sub esi, esi
    X86_AT(c, 0xd64d4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_d64d6:
    X86_TICK(c, 14);
    // 0d64d6  inc esi
    X86_AT(c, 0xd64d6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d64d7  cmp dword ptr [esi*4 + 0xb0392], 0
    X86_AT(c, 0xd64d7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB0392u))), 0x0u, 0, 4);
    // 0d64df  jne 0xd64d6
    X86_AT(c, 0xd64dfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd64d6u); goto L_d64d6; }
    X86_TICK(c, 7);
    // 0d64e1  cmp esi, 0xf
    X86_AT(c, 0xd64e1u);
    (void)x86_sub(c, c.r[6], 0xFu, 0, 4);
    // 0d64e4  jg 0xd6575
    X86_AT(c, 0xd64e4u);
    if (x86_cc(c, 15)) { goto L_d6575; }
    X86_TICK(c, 17);
    // 0d64ea  inc dword ptr [esi*4 + 0xb0392]
    X86_AT(c, 0xd64eau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB0392u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d64f1  push 0xf
    X86_AT(c, 0xd64f1u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d64f3  push 2
    X86_AT(c, 0xd64f3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d64f5  call 0xcc814
    X86_AT(c, 0xd64f5u);
    push32(c, 0xd64fau); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd64fau);
    X86_TICK(c, 11);
    // 0d64fa  push 0xa4c8
    X86_AT(c, 0xd64fau);
    { uint32_t v = 0xA4C8u; push32(c, v); }
    // 0d64ff  push 4
    X86_AT(c, 0xd64ffu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6501  call 0xc8cdc
    X86_AT(c, 0xd6501u);
    push32(c, 0xd6506u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6506u);
    X86_TICK(c, 17);
    // 0d6506  mov eax, dword ptr [esi*4 + 0xab054]
    X86_AT(c, 0xd6506u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xAB054u)));
    // 0d650d  mov al, byte ptr [eax]
    X86_AT(c, 0xd650du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d650f  push eax
    X86_AT(c, 0xd650fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6510  call 0xcf864
    X86_AT(c, 0xd6510u);
    push32(c, 0xd6515u); x86_call_known(c, 0xcf864u, f_000cf864); X86_RET(c, 0xd6515u);
    X86_TICK(c, 9);
    // 0d6515  add esp, 0x14
    X86_AT(c, 0xd6515u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d6518  and eax, eax
    X86_AT(c, 0xd6518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d651a  je 0xd652b
    X86_AT(c, 0xd651au);
    if (x86_cc(c, 4)) { goto L_d652b; }
    X86_TICK(c, 11);
    // 0d651c  push 0xa4ec
    X86_AT(c, 0xd651cu);
    { uint32_t v = 0xA4ECu; push32(c, v); }
    // 0d6521  push 4
    X86_AT(c, 0xd6521u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6523  call 0xc8cdc
    X86_AT(c, 0xd6523u);
    push32(c, 0xd6528u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6528u);
    X86_TICK(c, 2);
    // 0d6528  add esp, 8
    X86_AT(c, 0xd6528u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d652b:
    X86_TICK(c, 11);
    // 0d652b  push 0x10
    X86_AT(c, 0xd652bu);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0d652d  push 2
    X86_AT(c, 0xd652du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d652f  call 0xcc814
    X86_AT(c, 0xd652fu);
    push32(c, 0xd6534u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6534u);
    X86_TICK(c, 14);
    // 0d6534  push dword ptr [esi*4 + 0xa1de8]
    X86_AT(c, 0xd6534u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA1DE8u))); push32(c, v); }
    // 0d653b  push 4
    X86_AT(c, 0xd653bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d653d  call 0xc8cdc
    X86_AT(c, 0xd653du);
    push32(c, 0xd6542u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6542u);
    X86_TICK(c, 11);
    // 0d6542  push 0xa4f4
    X86_AT(c, 0xd6542u);
    { uint32_t v = 0xA4F4u; push32(c, v); }
    // 0d6547  push 4
    X86_AT(c, 0xd6547u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6549  call 0xc8cdc
    X86_AT(c, 0xd6549u);
    push32(c, 0xd654eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd654eu);
    X86_TICK(c, 9);
    // 0d654e  push 4
    X86_AT(c, 0xd654eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6550  call 0xca3cc
    X86_AT(c, 0xd6550u);
    push32(c, 0xd6555u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd6555u);
    X86_TICK(c, 9);
    // 0d6555  add esp, 0x1c
    X86_AT(c, 0xd6555u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d6558  jmp 0xd65fd
    X86_AT(c, 0xd6558u);
    goto L_d65fd;
L_d655d:
    X86_TICK(c, 7);
    // 0d655d  cmp edi, 6
    X86_AT(c, 0xd655du);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0d6560  je 0xd65fd
    X86_AT(c, 0xd6560u);
    if (x86_cc(c, 4)) { goto L_d65fd; }
    X86_TICK(c, 13);
    // 0d6566  mov eax, dword ptr [esi*4 + 0xb02fe]
    X86_AT(c, 0xd6566u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB02FEu)));
    // 0d656d  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd656du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d6570  cmp eax, 0x63
    X86_AT(c, 0xd6570u);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d6573  jne 0xd657c
    X86_AT(c, 0xd6573u);
    if (x86_cc(c, 5)) { goto L_d657c; }
L_d6575:
    X86_TICK(c, 9);
    // 0d6575  sub ebx, ebx
    X86_AT(c, 0xd6575u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0d6577  jmp 0xd65fd
    X86_AT(c, 0xd6577u);
    goto L_d65fd;
L_d657c:
    X86_TICK(c, 65);
    // 0d657c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd657cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d657f  add eax, 8
    X86_AT(c, 0xd657fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d6582  cdq 
    X86_AT(c, 0xd6582u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d6583  mov ecx, 0xa
    X86_AT(c, 0xd6583u);
    c.r[1] = 0xAu;
    // 0d6588  idiv ecx
    X86_AT(c, 0xd6588u);
    x86_idiv(c, c.r[1], 4, 0xd6588u);
    // 0d658a  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd658au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d658d  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd658du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d6590  cmp eax, 0x63
    X86_AT(c, 0xd6590u);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d6593  jle 0xd65a0
    X86_AT(c, 0xd6593u);
    if (x86_cc(c, 14)) { goto L_d65a0; }
    X86_TICK(c, 10);
    // 0d6595  mov eax, 0x63
    X86_AT(c, 0xd6595u);
    c.r[0] = 0x63u;
    // 0d659a  sub eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd659au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d659d  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd659du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_d65a0:
    X86_TICK(c, 11);
    // 0d65a0  push 0xf
    X86_AT(c, 0xd65a0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d65a2  push 2
    X86_AT(c, 0xd65a2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d65a4  call 0xcc814
    X86_AT(c, 0xd65a4u);
    push32(c, 0xd65a9u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd65a9u);
    X86_TICK(c, 11);
    // 0d65a9  push 0xa504
    X86_AT(c, 0xd65a9u);
    { uint32_t v = 0xA504u; push32(c, v); }
    // 0d65ae  push 4
    X86_AT(c, 0xd65aeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d65b0  call 0xc8cdc
    X86_AT(c, 0xd65b0u);
    push32(c, 0xd65b5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd65b5u);
    X86_TICK(c, 11);
    // 0d65b5  push 0x10
    X86_AT(c, 0xd65b5u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0d65b7  push 2
    X86_AT(c, 0xd65b7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d65b9  call 0xcc814
    X86_AT(c, 0xd65b9u);
    push32(c, 0xd65beu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd65beu);
    X86_TICK(c, 16);
    // 0d65be  push 2
    X86_AT(c, 0xd65beu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d65c0  push dword ptr [ebp - 8]
    X86_AT(c, 0xd65c0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0d65c3  push 4
    X86_AT(c, 0xd65c3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d65c5  call 0xc8cb8
    X86_AT(c, 0xd65c5u);
    push32(c, 0xd65cau); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd65cau);
    X86_TICK(c, 11);
    // 0d65ca  push 0xa524
    X86_AT(c, 0xd65cau);
    { uint32_t v = 0xA524u; push32(c, v); }
    // 0d65cf  push 4
    X86_AT(c, 0xd65cfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d65d1  call 0xc8cdc
    X86_AT(c, 0xd65d1u);
    push32(c, 0xd65d6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd65d6u);
    X86_TICK(c, 14);
    // 0d65d6  push dword ptr [esi*4 + 0xa1eb8]
    X86_AT(c, 0xd65d6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA1EB8u))); push32(c, v); }
    // 0d65dd  push 4
    X86_AT(c, 0xd65ddu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d65df  call 0xc8cdc
    X86_AT(c, 0xd65dfu);
    push32(c, 0xd65e4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd65e4u);
    X86_TICK(c, 11);
    // 0d65e4  push 0xa534
    X86_AT(c, 0xd65e4u);
    { uint32_t v = 0xA534u; push32(c, v); }
    // 0d65e9  push 4
    X86_AT(c, 0xd65e9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d65eb  call 0xc8cdc
    X86_AT(c, 0xd65ebu);
    push32(c, 0xd65f0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd65f0u);
    X86_TICK(c, 13);
    // 0d65f0  add esp, 0x3c
    X86_AT(c, 0xd65f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d65f3  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd65f3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d65f6  add dword ptr [esi*4 + 0xb02fe], eax
    X86_AT(c, 0xd65f6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_d65fd:
    X86_TICK(c, 7);
    // 0d65fd  cmp edi, 6
    X86_AT(c, 0xd65fdu);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0d6600  jne 0xd6604
    X86_AT(c, 0xd6600u);
    if (x86_cc(c, 5)) { goto L_d6604; }
    X86_TICK(c, 2);
    // 0d6602  sub ebx, ebx
    X86_AT(c, 0xd6602u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_d6604:
    X86_TICK(c, 7);
    // 0d6604  and ebx, ebx
    X86_AT(c, 0xd6604u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d6606  jne 0xd6625
    X86_AT(c, 0xd6606u);
    if (x86_cc(c, 5)) { goto L_d6625; }
    X86_TICK(c, 7);
    // 0d6608  cmp edi, 6
    X86_AT(c, 0xd6608u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0d660b  je 0xd6625
    X86_AT(c, 0xd660bu);
    if (x86_cc(c, 4)) { goto L_d6625; }
    X86_TICK(c, 11);
    // 0d660d  push 0x10
    X86_AT(c, 0xd660du);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0d660f  push 2
    X86_AT(c, 0xd660fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6611  call 0xcc814
    X86_AT(c, 0xd6611u);
    push32(c, 0xd6616u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6616u);
    X86_TICK(c, 11);
    // 0d6616  push 0xa540
    X86_AT(c, 0xd6616u);
    { uint32_t v = 0xA540u; push32(c, v); }
    // 0d661b  push 4
    X86_AT(c, 0xd661bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d661d  call 0xc8cdc
    X86_AT(c, 0xd661du);
    push32(c, 0xd6622u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6622u);
    X86_TICK(c, 2);
    // 0d6622  add esp, 0x10
    X86_AT(c, 0xd6622u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d6625:
    X86_TICK(c, 7);
    // 0d6625  call 0xcf604
    X86_AT(c, 0xd6625u);
    push32(c, 0xd662au); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd662au);
    X86_TICK(c, 11);
    // 0d662a  push 0
    X86_AT(c, 0xd662au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d662c  push 4
    X86_AT(c, 0xd662cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d662e  call 0xca2d4
    X86_AT(c, 0xd662eu);
    push32(c, 0xd6633u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd6633u);
    X86_TICK(c, 9);
    // 0d6633  add esp, 8
    X86_AT(c, 0xd6633u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d6636  cmp edi, 6
    X86_AT(c, 0xd6636u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0d6639  je 0xd664a
    X86_AT(c, 0xd6639u);
    if (x86_cc(c, 4)) { goto L_d664a; }
    X86_TICK(c, 11);
    // 0d663b  push 0xa58e
    X86_AT(c, 0xd663bu);
    { uint32_t v = 0xA58Eu; push32(c, v); }
    // 0d6640  push 7
    X86_AT(c, 0xd6640u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d6642  call 0xc8cdc
    X86_AT(c, 0xd6642u);
    push32(c, 0xd6647u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6647u);
    X86_TICK(c, 2);
    // 0d6647  add esp, 8
    X86_AT(c, 0xd6647u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d664a:
    X86_TICK(c, 9);
    // 0d664a  push 7
    X86_AT(c, 0xd664au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d664c  call 0xca3cc
    X86_AT(c, 0xd664cu);
    push32(c, 0xd6651u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd6651u);
    X86_TICK(c, 7);
    // 0d6651  call 0xcc700
    X86_AT(c, 0xd6651u);
    push32(c, 0xd6656u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xd6656u);
    X86_TICK(c, 30);
    // 0d6656  add esp, 4
    X86_AT(c, 0xd6656u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d6659  pop edi
    X86_AT(c, 0xd6659u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d665a  pop esi
    X86_AT(c, 0xd665au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d665b  pop ebx
    X86_AT(c, 0xd665bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d665c  leave 
    X86_AT(c, 0xd665cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d665d  ret 
    X86_AT(c, 0xd665du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6480u, "ran off the end of a function");
}
void f_000d65fd(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0d65fd  cmp edi, 6
    X86_AT(c, 0xd65fdu);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0d6600  jne 0xd6604
    X86_AT(c, 0xd6600u);
    if (x86_cc(c, 5)) { goto L_d6604; }
    X86_TICK(c, 2);
    // 0d6602  sub ebx, ebx
    X86_AT(c, 0xd6602u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_d6604:
    X86_TICK(c, 7);
    // 0d6604  and ebx, ebx
    X86_AT(c, 0xd6604u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d6606  jne 0xd6625
    X86_AT(c, 0xd6606u);
    if (x86_cc(c, 5)) { goto L_d6625; }
    X86_TICK(c, 7);
    // 0d6608  cmp edi, 6
    X86_AT(c, 0xd6608u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0d660b  je 0xd6625
    X86_AT(c, 0xd660bu);
    if (x86_cc(c, 4)) { goto L_d6625; }
    X86_TICK(c, 11);
    // 0d660d  push 0x10
    X86_AT(c, 0xd660du);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0d660f  push 2
    X86_AT(c, 0xd660fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6611  call 0xcc814
    X86_AT(c, 0xd6611u);
    push32(c, 0xd6616u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd6616u);
    X86_TICK(c, 11);
    // 0d6616  push 0xa540
    X86_AT(c, 0xd6616u);
    { uint32_t v = 0xA540u; push32(c, v); }
    // 0d661b  push 4
    X86_AT(c, 0xd661bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d661d  call 0xc8cdc
    X86_AT(c, 0xd661du);
    push32(c, 0xd6622u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6622u);
    X86_TICK(c, 2);
    // 0d6622  add esp, 0x10
    X86_AT(c, 0xd6622u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d6625:
    X86_TICK(c, 7);
    // 0d6625  call 0xcf604
    X86_AT(c, 0xd6625u);
    push32(c, 0xd662au); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd662au);
    X86_TICK(c, 11);
    // 0d662a  push 0
    X86_AT(c, 0xd662au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d662c  push 4
    X86_AT(c, 0xd662cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d662e  call 0xca2d4
    X86_AT(c, 0xd662eu);
    push32(c, 0xd6633u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd6633u);
    X86_TICK(c, 9);
    // 0d6633  add esp, 8
    X86_AT(c, 0xd6633u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d6636  cmp edi, 6
    X86_AT(c, 0xd6636u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0d6639  je 0xd664a
    X86_AT(c, 0xd6639u);
    if (x86_cc(c, 4)) { goto L_d664a; }
    X86_TICK(c, 11);
    // 0d663b  push 0xa58e
    X86_AT(c, 0xd663bu);
    { uint32_t v = 0xA58Eu; push32(c, v); }
    // 0d6640  push 7
    X86_AT(c, 0xd6640u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d6642  call 0xc8cdc
    X86_AT(c, 0xd6642u);
    push32(c, 0xd6647u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6647u);
    X86_TICK(c, 2);
    // 0d6647  add esp, 8
    X86_AT(c, 0xd6647u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d664a:
    X86_TICK(c, 9);
    // 0d664a  push 7
    X86_AT(c, 0xd664au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d664c  call 0xca3cc
    X86_AT(c, 0xd664cu);
    push32(c, 0xd6651u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd6651u);
    X86_TICK(c, 7);
    // 0d6651  call 0xcc700
    X86_AT(c, 0xd6651u);
    push32(c, 0xd6656u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xd6656u);
    X86_TICK(c, 30);
    // 0d6656  add esp, 4
    X86_AT(c, 0xd6656u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d6659  pop edi
    X86_AT(c, 0xd6659u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d665a  pop esi
    X86_AT(c, 0xd665au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d665b  pop ebx
    X86_AT(c, 0xd665bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d665c  leave 
    X86_AT(c, 0xd665cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d665d  ret 
    X86_AT(c, 0xd665du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd65fdu, "ran off the end of a function");
}
void f_000d6660(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d6660  push ebp
    X86_AT(c, 0xd6660u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d6661  mov ebp, esp
    X86_AT(c, 0xd6661u);
    c.r[5] = c.r[4];
    // 0d6663  push edi
    X86_AT(c, 0xd6663u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6664  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd6664u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d6667  sub ecx, ecx
    X86_AT(c, 0xd6667u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_d6669:
    X86_TICK(c, 24);
    // 0d6669  mov eax, edi
    X86_AT(c, 0xd6669u);
    c.r[0] = c.r[7];
    // 0d666b  lea edx, [eax + eax*4]
    X86_AT(c, 0xd666bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d666e  shl edx, 3
    X86_AT(c, 0xd666eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0d6671  sub edx, eax
    X86_AT(c, 0xd6671u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d6673  shl edx, 4
    X86_AT(c, 0xd6673u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0d6676  add edx, eax
    X86_AT(c, 0xd6676u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d6678  shl edx, 3
    X86_AT(c, 0xd6678u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0d667b  cmp edx, ecx
    X86_AT(c, 0xd667bu);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0d667d  jle 0xd6682
    X86_AT(c, 0xd667du);
    if (x86_cc(c, 14)) { goto L_d6682; }
    X86_TICK(c, 9);
    // 0d667f  inc ecx
    X86_AT(c, 0xd667fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d6680  jmp 0xd6669
    X86_AT(c, 0xd6680u);
    X86_POLL(c, 0xd6669u); goto L_d6669;
L_d6682:
    X86_TICK(c, 20);
    // 0d6682  pop edi
    X86_AT(c, 0xd6682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d6683  leave 
    X86_AT(c, 0xd6683u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d6684  ret 
    X86_AT(c, 0xd6684u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6660u, "ran off the end of a function");
}
void f_000d6688(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d6688  push ebp
    X86_AT(c, 0xd6688u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d6689  mov ebp, esp
    X86_AT(c, 0xd6689u);
    c.r[5] = c.r[4];
    // 0d668b  push edi
    X86_AT(c, 0xd668bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d668c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd668cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d668f  push 0
    X86_AT(c, 0xd668fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d6691  push 0
    X86_AT(c, 0xd6691u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d6693  push 0xa590
    X86_AT(c, 0xd6693u);
    { uint32_t v = 0xA590u; push32(c, v); }
    // 0d6698  call 0xc9cb4
    X86_AT(c, 0xd6698u);
    push32(c, 0xd669du); x86_call_known(c, 0xc9cb4u, f_000c9cb4); X86_RET(c, 0xd669du);
    X86_TICK(c, 9);
    // 0d669d  push 0xe
    X86_AT(c, 0xd669du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d669f  call 0xc8dd4
    X86_AT(c, 0xd669fu);
    push32(c, 0xd66a4u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xd66a4u);
    X86_TICK(c, 9);
    // 0d66a4  push 0xb
    X86_AT(c, 0xd66a4u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d66a6  call 0xc8dec
    X86_AT(c, 0xd66a6u);
    push32(c, 0xd66abu); x86_call_known(c, 0xc8decu, f_000c8dec); X86_RET(c, 0xd66abu);
    X86_TICK(c, 9);
    // 0d66ab  push 1
    X86_AT(c, 0xd66abu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d66ad  call 0xc8e9c
    X86_AT(c, 0xd66adu);
    push32(c, 0xd66b2u); x86_call_known(c, 0xc8e9cu, f_000c8e9c); X86_RET(c, 0xd66b2u);
    X86_TICK(c, 24);
    // 0d66b2  push edi
    X86_AT(c, 0xd66b2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d66b3  push 0x13
    X86_AT(c, 0xd66b3u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0d66b5  mov edx, 0xffffffff
    X86_AT(c, 0xd66b5u);
    c.r[2] = 0xFFFFFFFFu;
    // 0d66ba  sub eax, eax
    X86_AT(c, 0xd66bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d66bc  push edi
    X86_AT(c, 0xd66bcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d66bd  mov ecx, edx
    X86_AT(c, 0xd66bdu);
    c.r[1] = c.r[2];
    // 0d66bf  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd66bfu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d66c1  jne 0xd66c6
    X86_AT(c, 0xd66c1u);
    if (x86_cc(c, 5)) { goto L_d66c6; }
    X86_TICK(c, 4);
    // 0d66c3  inc ecx
    X86_AT(c, 0xd66c3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d66c4  sub edx, ecx
    X86_AT(c, 0xd66c4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d66c6:
    X86_TICK(c, 27);
    // 0d66c6  pop edi
    X86_AT(c, 0xd66c6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d66c7  shl edx, 3
    X86_AT(c, 0xd66c7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0d66ca  mov eax, 0x280
    X86_AT(c, 0xd66cau);
    c.r[0] = 0x280u;
    // 0d66cf  sub eax, edx
    X86_AT(c, 0xd66cfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d66d1  cdq 
    X86_AT(c, 0xd66d1u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d66d2  sub eax, edx
    X86_AT(c, 0xd66d2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d66d4  sar eax, 1
    X86_AT(c, 0xd66d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d66d6  push eax
    X86_AT(c, 0xd66d6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d66d7  call 0xca1ec
    X86_AT(c, 0xd66d7u);
    push32(c, 0xd66dcu); x86_call_known(c, 0xca1ecu, f_000ca1ec); X86_RET(c, 0xd66dcu);
    X86_TICK(c, 9);
    // 0d66dc  push 0
    X86_AT(c, 0xd66dcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d66de  call 0xc8e9c
    X86_AT(c, 0xd66deu);
    push32(c, 0xd66e3u); x86_call_known(c, 0xc8e9cu, f_000c8e9c); X86_RET(c, 0xd66e3u);
    X86_TICK(c, 22);
    // 0d66e3  add esp, 0x28
    X86_AT(c, 0xd66e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d66e6  pop edi
    X86_AT(c, 0xd66e6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d66e7  leave 
    X86_AT(c, 0xd66e7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d66e8  ret 
    X86_AT(c, 0xd66e8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6688u, "ran off the end of a function");
}
void f_000d66ec(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0d66ec  push ebp
    X86_AT(c, 0xd66ecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d66ed  mov ebp, esp
    X86_AT(c, 0xd66edu);
    c.r[5] = c.r[4];
    // 0d66ef  push dword ptr [ebp + 8]
    X86_AT(c, 0xd66efu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d66f2  push 0x190
    X86_AT(c, 0xd66f2u);
    { uint32_t v = 0x190u; push32(c, v); }
    // 0d66f7  push 0x280
    X86_AT(c, 0xd66f7u);
    { uint32_t v = 0x280u; push32(c, v); }
    // 0d66fc  push 0x18
    X86_AT(c, 0xd66fcu);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0d66fe  push 0
    X86_AT(c, 0xd66feu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d6700  call 0xc9664
    X86_AT(c, 0xd6700u);
    push32(c, 0xd6705u); x86_call_known(c, 0xc9664u, f_000c9664); X86_RET(c, 0xd6705u);
    X86_TICK(c, 16);
    // 0d6705  leave 
    X86_AT(c, 0xd6705u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d6706  ret 
    X86_AT(c, 0xd6706u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd66ecu, "ran off the end of a function");
}
void f_000d6708(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d6708  push ebp
    X86_AT(c, 0xd6708u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d6709  mov ebp, esp
    X86_AT(c, 0xd6709u);
    c.r[5] = c.r[4];
    // 0d670b  call 0xc9204
    X86_AT(c, 0xd670bu);
    push32(c, 0xd6710u); x86_call_known(c, 0xc9204u, f_000c9204); X86_RET(c, 0xd6710u);
    X86_TICK(c, 7);
    // 0d6710  call 0xc797c
    X86_AT(c, 0xd6710u);
    push32(c, 0xd6715u); x86_call_known(c, 0xc797cu, f_000c797c); X86_RET(c, 0xd6715u);
    X86_TICK(c, 9);
    // 0d6715  push 0
    X86_AT(c, 0xd6715u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d6717  call 0xc9108
    X86_AT(c, 0xd6717u);
    push32(c, 0xd671cu); x86_call_known(c, 0xc9108u, f_000c9108); X86_RET(c, 0xd671cu);
    X86_TICK(c, 9);
    // 0d671c  push 1
    X86_AT(c, 0xd671cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d671e  call 0xc9108
    X86_AT(c, 0xd671eu);
    push32(c, 0xd6723u); x86_call_known(c, 0xc9108u, f_000c9108); X86_RET(c, 0xd6723u);
    X86_TICK(c, 9);
    // 0d6723  push 3
    X86_AT(c, 0xd6723u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d6725  call 0xc8f54
    X86_AT(c, 0xd6725u);
    push32(c, 0xd672au); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd672au);
    X86_TICK(c, 9);
    // 0d672a  push 1
    X86_AT(c, 0xd672au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d672c  call 0xc8f40
    X86_AT(c, 0xd672cu);
    push32(c, 0xd6731u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xd6731u);
    X86_TICK(c, 7);
    // 0d6731  call 0xc8d18
    X86_AT(c, 0xd6731u);
    push32(c, 0xd6736u); x86_call_known(c, 0xc8d18u, f_000c8d18); X86_RET(c, 0xd6736u);
    X86_TICK(c, 9);
    // 0d6736  push 1
    X86_AT(c, 0xd6736u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6738  call 0xc90b0
    X86_AT(c, 0xd6738u);
    push32(c, 0xd673du); x86_call_known(c, 0xc90b0u, f_000c90b0); X86_RET(c, 0xd673du);
    X86_TICK(c, 9);
    // 0d673d  push 0
    X86_AT(c, 0xd673du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d673f  call 0xc8f40
    X86_AT(c, 0xd673fu);
    push32(c, 0xd6744u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xd6744u);
    X86_TICK(c, 9);
    // 0d6744  push 0
    X86_AT(c, 0xd6744u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d6746  call 0xc90b0
    X86_AT(c, 0xd6746u);
    push32(c, 0xd674bu); x86_call_known(c, 0xc90b0u, f_000c90b0); X86_RET(c, 0xd674bu);
    X86_TICK(c, 7);
    // 0d674b  call 0xc8d18
    X86_AT(c, 0xd674bu);
    push32(c, 0xd6750u); x86_call_known(c, 0xc8d18u, f_000c8d18); X86_RET(c, 0xd6750u);
    X86_TICK(c, 12);
    // 0d6750  push dword ptr [ebp + 8]
    X86_AT(c, 0xd6750u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d6753  call 0xd66ec
    X86_AT(c, 0xd6753u);
    push32(c, 0xd6758u); x86_call_known(c, 0xd66ecu, f_000d66ec); X86_RET(c, 0xd6758u);
    X86_TICK(c, 7);
    // 0d6758  call 0xcad2c
    X86_AT(c, 0xd6758u);
    push32(c, 0xd675du); x86_call_known(c, 0xcad2cu, f_000cad2c); X86_RET(c, 0xd675du);
    X86_TICK(c, 9);
    // 0d675d  push 0xa5a4
    X86_AT(c, 0xd675du);
    { uint32_t v = 0xA5A4u; push32(c, v); }
    // 0d6762  call 0xd6688
    X86_AT(c, 0xd6762u);
    push32(c, 0xd6767u); x86_call_known(c, 0xd6688u, f_000d6688); X86_RET(c, 0xd6767u);
    X86_TICK(c, 7);
    // 0d6767  call 0xc6044
    X86_AT(c, 0xd6767u);
    push32(c, 0xd676cu); x86_call_known(c, 0xc6044u, f_000c6044); X86_RET(c, 0xd676cu);
    X86_TICK(c, 9);
    // 0d676c  push 2
    X86_AT(c, 0xd676cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d676e  call 0xc8f54
    X86_AT(c, 0xd676eu);
    push32(c, 0xd6773u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd6773u);
    X86_TICK(c, 7);
    // 0d6773  call 0xc5a34
    X86_AT(c, 0xd6773u);
    push32(c, 0xd6778u); x86_call_known(c, 0xc5a34u, f_000c5a34); X86_RET(c, 0xd6778u);
    X86_TICK(c, 7);
    // 0d6778  call 0xc4854
    X86_AT(c, 0xd6778u);
    push32(c, 0xd677du); x86_call_known(c, 0xc4854u, f_000c4854); X86_RET(c, 0xd677du);
    X86_TICK(c, 9);
    // 0d677d  push 0xca9a0
    X86_AT(c, 0xd677du);
    { uint32_t v = 0xCA9A0u; push32(c, v); }
    // 0d6782  call 0xc5db8
    X86_AT(c, 0xd6782u);
    push32(c, 0xd6787u); x86_call_known(c, 0xc5db8u, f_000c5db8); X86_RET(c, 0xd6787u);
    X86_TICK(c, 20);
    // 0d6787  sub eax, eax
    X86_AT(c, 0xd6787u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d6789  add esp, 0x2c
    X86_AT(c, 0xd6789u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d678c  leave 
    X86_AT(c, 0xd678cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d678d  ret 
    X86_AT(c, 0xd678du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6708u, "ran off the end of a function");
}
void f_000d6790(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d6790  push 0
    X86_AT(c, 0xd6790u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d6792  call 0xc8f40
    X86_AT(c, 0xd6792u);
    push32(c, 0xd6797u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xd6797u);
    X86_TICK(c, 9);
    // 0d6797  push 0
    X86_AT(c, 0xd6797u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d6799  call 0xc92e0
    X86_AT(c, 0xd6799u);
    push32(c, 0xd679eu); x86_call_known(c, 0xc92e0u, f_000c92e0); X86_RET(c, 0xd679eu);
    X86_TICK(c, 9);
    // 0d679e  push 1
    X86_AT(c, 0xd679eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d67a0  call 0xc8f40
    X86_AT(c, 0xd67a0u);
    push32(c, 0xd67a5u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xd67a5u);
    X86_TICK(c, 9);
    // 0d67a5  push 0
    X86_AT(c, 0xd67a5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d67a7  call 0xc92e0
    X86_AT(c, 0xd67a7u);
    push32(c, 0xd67acu); x86_call_known(c, 0xc92e0u, f_000c92e0); X86_RET(c, 0xd67acu);
    X86_TICK(c, 7);
    // 0d67ac  call 0xc56dc
    X86_AT(c, 0xd67acu);
    push32(c, 0xd67b1u); x86_call_known(c, 0xc56dcu, f_000c56dc); X86_RET(c, 0xd67b1u);
    X86_TICK(c, 7);
    // 0d67b1  call 0xc4ed4
    X86_AT(c, 0xd67b1u);
    push32(c, 0xd67b6u); x86_call_known(c, 0xc4ed4u, f_000c4ed4); X86_RET(c, 0xd67b6u);
    X86_TICK(c, 7);
    // 0d67b6  call 0xc5abc
    X86_AT(c, 0xd67b6u);
    push32(c, 0xd67bbu); x86_call_known(c, 0xc5abcu, f_000c5abc); X86_RET(c, 0xd67bbu);
    X86_TICK(c, 7);
    // 0d67bb  call 0xc51c8
    X86_AT(c, 0xd67bbu);
    push32(c, 0xd67c0u); x86_call_known(c, 0xc51c8u, f_000c51c8); X86_RET(c, 0xd67c0u);
    X86_TICK(c, 12);
    // 0d67c0  add esp, 0x10
    X86_AT(c, 0xd67c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d67c3  ret 
    X86_AT(c, 0xd67c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6790u, "ran off the end of a function");
}
void f_000d67c4(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0d67c4  push ebp
    X86_AT(c, 0xd67c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d67c5  mov ebp, esp
    X86_AT(c, 0xd67c5u);
    c.r[5] = c.r[4];
    // 0d67c7  sub esp, 0x10
    X86_AT(c, 0xd67c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0d67ca  push ebx
    X86_AT(c, 0xd67cau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d67cb  push esi
    X86_AT(c, 0xd67cbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d67cc  push edi
    X86_AT(c, 0xd67ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d67cd  sub eax, eax
    X86_AT(c, 0xd67cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d67cf  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd67cfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d67d2  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd67d2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d67d5  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd67d5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d67d8  cmp dword ptr [0xb1344], 0xffffffff
    X86_AT(c, 0xd67d8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB1344u))), 0xFFFFFFFFu, 0, 4);
    // 0d67df  jne 0xd6933
    X86_AT(c, 0xd67dfu);
    if (x86_cc(c, 5)) { goto L_d6933; }
    X86_TICK(c, 11);
    // 0d67e5  mov dword ptr [0xb1344], eax
    X86_AT(c, 0xd67e5u);
    wr32((c.sbase[3] + (uint32_t)(0xB1344u)), c.r[0]);
    // 0d67ea  push eax
    X86_AT(c, 0xd67eau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d67eb  call 0xc8f54
    X86_AT(c, 0xd67ebu);
    push32(c, 0xd67f0u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd67f0u);
    X86_TICK(c, 9);
    // 0d67f0  push 1
    X86_AT(c, 0xd67f0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d67f2  call 0xc8f40
    X86_AT(c, 0xd67f2u);
    push32(c, 0xd67f7u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xd67f7u);
    X86_TICK(c, 11);
    // 0d67f7  add esp, 8
    X86_AT(c, 0xd67f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d67fa  push 0
    X86_AT(c, 0xd67fau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d67fc  call 0xc92e0
    X86_AT(c, 0xd67fcu);
    push32(c, 0xd6801u); x86_call_known(c, 0xc92e0u, f_000c92e0); X86_RET(c, 0xd6801u);
    X86_TICK(c, 27);
    // 0d6801  push 0xa
    X86_AT(c, 0xd6801u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d6803  push 0xb
    X86_AT(c, 0xd6803u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d6805  push 0xf
    X86_AT(c, 0xd6805u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d6807  push 0xc
    X86_AT(c, 0xd6807u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d6809  push 0x45
    X86_AT(c, 0xd6809u);
    { uint32_t v = 0x45u; push32(c, v); }
    // 0d680b  push 0xe6
    X86_AT(c, 0xd680bu);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0d6810  push 0x236
    X86_AT(c, 0xd6810u);
    { uint32_t v = 0x236u; push32(c, v); }
    // 0d6815  push 0x63
    X86_AT(c, 0xd6815u);
    { uint32_t v = 0x63u; push32(c, v); }
    // 0d6817  push 0x5c
    X86_AT(c, 0xd6817u);
    { uint32_t v = 0x5Cu; push32(c, v); }
    // 0d6819  push 1
    X86_AT(c, 0xd6819u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d681b  call 0xc9fbc
    X86_AT(c, 0xd681bu);
    push32(c, 0xd6820u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd6820u);
    X86_TICK(c, 9);
    // 0d6820  push 1
    X86_AT(c, 0xd6820u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6822  call 0xca100
    X86_AT(c, 0xd6822u);
    push32(c, 0xd6827u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd6827u);
    X86_TICK(c, 11);
    // 0d6827  push 0xd
    X86_AT(c, 0xd6827u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d6829  push 1
    X86_AT(c, 0xd6829u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d682b  call 0xcac40
    X86_AT(c, 0xd682bu);
    push32(c, 0xd6830u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd6830u);
    X86_TICK(c, 9);
    // 0d6830  push 1
    X86_AT(c, 0xd6830u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6832  call 0xca0a0
    X86_AT(c, 0xd6832u);
    push32(c, 0xd6837u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd6837u);
    X86_TICK(c, 15);
    // 0d6837  add esp, 0x3c
    X86_AT(c, 0xd6837u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d683a  push 1
    X86_AT(c, 0xd683au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d683c  push 0x17
    X86_AT(c, 0xd683cu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0d683e  push 1
    X86_AT(c, 0xd683eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6840  call 0xca9c8
    X86_AT(c, 0xd6840u);
    push32(c, 0xd6845u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd6845u);
    X86_TICK(c, 11);
    // 0d6845  push 0xa5cc
    X86_AT(c, 0xd6845u);
    { uint32_t v = 0xA5CCu; push32(c, v); }
    // 0d684a  push 1
    X86_AT(c, 0xd684au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d684c  call 0xca414
    X86_AT(c, 0xd684cu);
    push32(c, 0xd6851u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd6851u);
    X86_TICK(c, 13);
    // 0d6851  push 3
    X86_AT(c, 0xd6851u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d6853  push 0x17
    X86_AT(c, 0xd6853u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0d6855  push 1
    X86_AT(c, 0xd6855u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6857  call 0xca9c8
    X86_AT(c, 0xd6857u);
    push32(c, 0xd685cu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd685cu);
    X86_TICK(c, 11);
    // 0d685c  push 0xa5e4
    X86_AT(c, 0xd685cu);
    { uint32_t v = 0xA5E4u; push32(c, v); }
    // 0d6861  push 1
    X86_AT(c, 0xd6861u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6863  call 0xca414
    X86_AT(c, 0xd6863u);
    push32(c, 0xd6868u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd6868u);
    X86_TICK(c, 11);
    // 0d6868  push 0xf
    X86_AT(c, 0xd6868u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d686a  push 1
    X86_AT(c, 0xd686au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d686c  call 0xcac40
    X86_AT(c, 0xd686cu);
    push32(c, 0xd6871u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd6871u);
    X86_TICK(c, 9);
    // 0d6871  push 1
    X86_AT(c, 0xd6871u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6873  call 0xca0a0
    X86_AT(c, 0xd6873u);
    push32(c, 0xd6878u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd6878u);
    X86_TICK(c, 13);
    // 0d6878  push 2
    X86_AT(c, 0xd6878u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d687a  push 0x18
    X86_AT(c, 0xd687au);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0d687c  push 1
    X86_AT(c, 0xd687cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d687e  call 0xca9c8
    X86_AT(c, 0xd687eu);
    push32(c, 0xd6883u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd6883u);
    X86_TICK(c, 13);
    // 0d6883  add esp, 0x40
    X86_AT(c, 0xd6883u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d6886  push 0xb1154
    X86_AT(c, 0xd6886u);
    { uint32_t v = 0xB1154u; push32(c, v); }
    // 0d688b  push 1
    X86_AT(c, 0xd688bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d688d  call 0xc8cdc
    X86_AT(c, 0xd688du);
    push32(c, 0xd6892u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6892u);
    X86_TICK(c, 13);
    // 0d6892  push 5
    X86_AT(c, 0xd6892u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d6894  push 3
    X86_AT(c, 0xd6894u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d6896  push 1
    X86_AT(c, 0xd6896u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6898  call 0xca9c8
    X86_AT(c, 0xd6898u);
    push32(c, 0xd689du); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd689du);
    X86_TICK(c, 11);
    // 0d689d  push 0xb1180
    X86_AT(c, 0xd689du);
    { uint32_t v = 0xB1180u; push32(c, v); }
    // 0d68a2  push 1
    X86_AT(c, 0xd68a2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d68a4  call 0xca414
    X86_AT(c, 0xd68a4u);
    push32(c, 0xd68a9u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd68a9u);
    X86_TICK(c, 15);
    // 0d68a9  add esp, 0x1c
    X86_AT(c, 0xd68a9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d68ac  push 6
    X86_AT(c, 0xd68acu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d68ae  push 8
    X86_AT(c, 0xd68aeu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d68b0  push 1
    X86_AT(c, 0xd68b0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d68b2  call 0xca9c8
    X86_AT(c, 0xd68b2u);
    push32(c, 0xd68b7u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd68b7u);
    X86_TICK(c, 11);
    // 0d68b7  push 0xb11c0
    X86_AT(c, 0xd68b7u);
    { uint32_t v = 0xB11C0u; push32(c, v); }
    // 0d68bc  push 1
    X86_AT(c, 0xd68bcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d68be  call 0xca414
    X86_AT(c, 0xd68beu);
    push32(c, 0xd68c3u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd68c3u);
    X86_TICK(c, 13);
    // 0d68c3  push 7
    X86_AT(c, 0xd68c3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d68c5  push 6
    X86_AT(c, 0xd68c5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d68c7  push 1
    X86_AT(c, 0xd68c7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d68c9  call 0xca9c8
    X86_AT(c, 0xd68c9u);
    push32(c, 0xd68ceu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd68ceu);
    X86_TICK(c, 11);
    // 0d68ce  push 0xb11f4
    X86_AT(c, 0xd68ceu);
    { uint32_t v = 0xB11F4u; push32(c, v); }
    // 0d68d3  push 1
    X86_AT(c, 0xd68d3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d68d5  call 0xca414
    X86_AT(c, 0xd68d5u);
    push32(c, 0xd68dau); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd68dau);
    X86_TICK(c, 13);
    // 0d68da  push 9
    X86_AT(c, 0xd68dau);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d68dc  push 0xd
    X86_AT(c, 0xd68dcu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d68de  push 1
    X86_AT(c, 0xd68deu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d68e0  call 0xca9c8
    X86_AT(c, 0xd68e0u);
    push32(c, 0xd68e5u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd68e5u);
    X86_TICK(c, 11);
    // 0d68e5  push 0xb1230
    X86_AT(c, 0xd68e5u);
    { uint32_t v = 0xB1230u; push32(c, v); }
    // 0d68ea  push 1
    X86_AT(c, 0xd68eau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d68ec  call 0xc8cdc
    X86_AT(c, 0xd68ecu);
    push32(c, 0xd68f1u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd68f1u);
    X86_TICK(c, 15);
    // 0d68f1  add esp, 0x3c
    X86_AT(c, 0xd68f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d68f4  push 0xb
    X86_AT(c, 0xd68f4u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d68f6  push 6
    X86_AT(c, 0xd68f6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d68f8  push 1
    X86_AT(c, 0xd68f8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d68fa  call 0xca9c8
    X86_AT(c, 0xd68fau);
    push32(c, 0xd68ffu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd68ffu);
    X86_TICK(c, 11);
    // 0d68ff  push 0xb1280
    X86_AT(c, 0xd68ffu);
    { uint32_t v = 0xB1280u; push32(c, v); }
    // 0d6904  push 1
    X86_AT(c, 0xd6904u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6906  call 0xc8cdc
    X86_AT(c, 0xd6906u);
    push32(c, 0xd690bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd690bu);
    X86_TICK(c, 13);
    // 0d690b  push 0xc
    X86_AT(c, 0xd690bu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d690d  push 6
    X86_AT(c, 0xd690du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d690f  push 1
    X86_AT(c, 0xd690fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6911  call 0xca9c8
    X86_AT(c, 0xd6911u);
    push32(c, 0xd6916u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd6916u);
    X86_TICK(c, 11);
    // 0d6916  push 0xb12ec
    X86_AT(c, 0xd6916u);
    { uint32_t v = 0xB12ECu; push32(c, v); }
    // 0d691b  push 1
    X86_AT(c, 0xd691bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d691d  call 0xc8cdc
    X86_AT(c, 0xd691du);
    push32(c, 0xd6922u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd6922u);
    X86_TICK(c, 9);
    // 0d6922  push 2
    X86_AT(c, 0xd6922u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6924  call 0xc8f54
    X86_AT(c, 0xd6924u);
    push32(c, 0xd6929u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd6929u);
    X86_TICK(c, 9);
    // 0d6929  push 0
    X86_AT(c, 0xd6929u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d692b  call 0xc8f40
    X86_AT(c, 0xd692bu);
    push32(c, 0xd6930u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xd6930u);
    X86_TICK(c, 2);
    // 0d6930  add esp, 0x30
    X86_AT(c, 0xd6930u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_d6933:
    X86_TICK(c, 9);
    // 0d6933  push 0x13ee0
    X86_AT(c, 0xd6933u);
    { uint32_t v = 0x13EE0u; push32(c, v); }
    // 0d6938  call 0xe77d8
    X86_AT(c, 0xd6938u);
    push32(c, 0xd693du); x86_call_known(c, 0xe77d8u, f_000e77d8); X86_RET(c, 0xd693du);
    X86_TICK(c, 12);
    // 0d693d  add esp, 4
    X86_AT(c, 0xd693du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d6940  xchg esi, eax
    X86_AT(c, 0xd6940u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d6941  and esi, esi
    X86_AT(c, 0xd6941u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d6943  je 0xd6b34
    X86_AT(c, 0xd6943u);
    if (x86_cc(c, 4)) { goto L_d6b34; }
    X86_TICK(c, 31);
    // 0d6949  lea ebx, [esi + 0x89c0]
    X86_AT(c, 0xd6949u);
    c.r[3] = (uint32_t)(c.r[6] + 0x89C0u);
    // 0d694f  lea eax, [ebx + 0x3c60]
    X86_AT(c, 0xd694fu);
    c.r[0] = (uint32_t)(c.r[3] + 0x3C60u);
    // 0d6955  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xd6955u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0d6958  lea ecx, [ebp - 0xc]
    X86_AT(c, 0xd6958u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0d695b  push ecx
    X86_AT(c, 0xd695bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d695c  lea edx, [ebp - 8]
    X86_AT(c, 0xd695cu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d695f  push edx
    X86_AT(c, 0xd695fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d6960  lea ecx, [ebp - 4]
    X86_AT(c, 0xd6960u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d6963  push ecx
    X86_AT(c, 0xd6963u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d6964  push 0x89c0
    X86_AT(c, 0xd6964u);
    { uint32_t v = 0x89C0u; push32(c, v); }
    // 0d6969  push esi
    X86_AT(c, 0xd6969u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d696a  push 0xa5fc
    X86_AT(c, 0xd696au);
    { uint32_t v = 0xA5FCu; push32(c, v); }
    // 0d696f  call 0xc9bc4
    X86_AT(c, 0xd696fu);
    push32(c, 0xd6974u); x86_call_known(c, 0xc9bc4u, f_000c9bc4); X86_RET(c, 0xd6974u);
    X86_TICK(c, 25);
    // 0d6974  lea eax, [ebp - 0xc]
    X86_AT(c, 0xd6974u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0d6977  push eax
    X86_AT(c, 0xd6977u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6978  lea ecx, [ebp - 8]
    X86_AT(c, 0xd6978u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d697b  push ecx
    X86_AT(c, 0xd697bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d697c  lea edx, [ebp - 4]
    X86_AT(c, 0xd697cu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d697f  push edx
    X86_AT(c, 0xd697fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d6980  push 0x3c60
    X86_AT(c, 0xd6980u);
    { uint32_t v = 0x3C60u; push32(c, v); }
    // 0d6985  push ebx
    X86_AT(c, 0xd6985u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d6986  push 0xa610
    X86_AT(c, 0xd6986u);
    { uint32_t v = 0xA610u; push32(c, v); }
    // 0d698b  call 0xc9bc4
    X86_AT(c, 0xd698bu);
    push32(c, 0xd6990u); x86_call_known(c, 0xc9bc4u, f_000c9bc4); X86_RET(c, 0xd6990u);
    X86_TICK(c, 28);
    // 0d6990  lea eax, [ebp - 0xc]
    X86_AT(c, 0xd6990u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0d6993  push eax
    X86_AT(c, 0xd6993u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6994  lea ecx, [ebp - 8]
    X86_AT(c, 0xd6994u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d6997  push ecx
    X86_AT(c, 0xd6997u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d6998  lea ecx, [ebp - 4]
    X86_AT(c, 0xd6998u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d699b  push ecx
    X86_AT(c, 0xd699bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d699c  push 0x3c60
    X86_AT(c, 0xd699cu);
    { uint32_t v = 0x3C60u; push32(c, v); }
    // 0d69a1  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xd69a1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0d69a4  push 0xa624
    X86_AT(c, 0xd69a4u);
    { uint32_t v = 0xA624u; push32(c, v); }
    // 0d69a9  call 0xc9bc4
    X86_AT(c, 0xd69a9u);
    push32(c, 0xd69aeu); x86_call_known(c, 0xc9bc4u, f_000c9bc4); X86_RET(c, 0xd69aeu);
    X86_TICK(c, 10);
    // 0d69ae  add esp, 0x48
    X86_AT(c, 0xd69aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0d69b1  mov eax, dword ptr [0x43eb8]
    X86_AT(c, 0xd69b1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x43EB8u)));
    // 0d69b6  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd69b6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d69b9  sub edi, edi
    X86_AT(c, 0xd69b9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d69bb:
    X86_TICK(c, 7);
    // 0d69bb  cmp edi, 0x2710
    X86_AT(c, 0xd69bbu);
    (void)x86_sub(c, c.r[7], 0x2710u, 0, 4);
    // 0d69c1  jge 0xd6a0d
    X86_AT(c, 0xd69c1u);
    if (x86_cc(c, 13)) { goto L_d6a0d; }
    X86_TICK(c, 9);
    // 0d69c3  push 1
    X86_AT(c, 0xd69c3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d69c5  call 0xc81e4
    X86_AT(c, 0xd69c5u);
    push32(c, 0xd69cau); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd69cau);
    X86_TICK(c, 9);
    // 0d69ca  add esp, 4
    X86_AT(c, 0xd69cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d69cd  and al, al
    X86_AT(c, 0xd69cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d69cf  je 0xd69dd
    X86_AT(c, 0xd69cfu);
    if (x86_cc(c, 4)) { goto L_d69dd; }
    X86_TICK(c, 9);
    // 0d69d1  push 2
    X86_AT(c, 0xd69d1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d69d3  call 0xca3cc
    X86_AT(c, 0xd69d3u);
    push32(c, 0xd69d8u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd69d8u);
    X86_TICK(c, 7);
    // 0d69d8  jmp 0xd6b2b
    X86_AT(c, 0xd69d8u);
    goto L_d6b2b;
L_d69dd:
    X86_TICK(c, 7);
    // 0d69dd  and edi, edi
    X86_AT(c, 0xd69ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d69df  je 0xd69ec
    X86_AT(c, 0xd69dfu);
    if (x86_cc(c, 4)) { goto L_d69ec; }
    X86_TICK(c, 15);
    // 0d69e1  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd69e1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0d69e4  cmp eax, dword ptr [0x43eb8]
    X86_AT(c, 0xd69e4u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0, 4);
    // 0d69ea  je 0xd6a0a
    X86_AT(c, 0xd69eau);
    if (x86_cc(c, 4)) { goto L_d6a0a; }
L_d69ec:
    X86_TICK(c, 9);
    // 0d69ec  push 2
    X86_AT(c, 0xd69ecu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d69ee  call 0xca3cc
    X86_AT(c, 0xd69eeu);
    push32(c, 0xd69f3u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd69f3u);
    X86_TICK(c, 11);
    // 0d69f3  push 0xa638
    X86_AT(c, 0xd69f3u);
    { uint32_t v = 0xA638u; push32(c, v); }
    // 0d69f8  push 2
    X86_AT(c, 0xd69f8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d69fa  call 0xc8cdc
    X86_AT(c, 0xd69fau);
    push32(c, 0xd69ffu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd69ffu);
    X86_TICK(c, 8);
    // 0d69ff  mov eax, dword ptr [0x43eb8]
    X86_AT(c, 0xd69ffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x43EB8u)));
    // 0d6a04  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd6a04u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d6a07  add esp, 0xc
    X86_AT(c, 0xd6a07u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d6a0a:
    X86_TICK(c, 9);
    // 0d6a0a  inc edi
    X86_AT(c, 0xd6a0au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d6a0b  jmp 0xd69bb
    X86_AT(c, 0xd6a0bu);
    X86_POLL(c, 0xd69bbu); goto L_d69bb;
L_d6a0d:
    X86_TICK(c, 9);
    // 0d6a0d  push 2
    X86_AT(c, 0xd6a0du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6a0f  call 0xca3cc
    X86_AT(c, 0xd6a0fu);
    push32(c, 0xd6a14u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd6a14u);
    X86_TICK(c, 9);
    // 0d6a14  push 0
    X86_AT(c, 0xd6a14u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d6a16  call 0xc8f54
    X86_AT(c, 0xd6a16u);
    push32(c, 0xd6a1bu); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd6a1bu);
    X86_TICK(c, 9);
    // 0d6a1b  push 1
    X86_AT(c, 0xd6a1bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6a1d  call 0xc8f40
    X86_AT(c, 0xd6a1du);
    push32(c, 0xd6a22u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xd6a22u);
    X86_TICK(c, 11);
    // 0d6a22  push 9
    X86_AT(c, 0xd6a22u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d6a24  push 1
    X86_AT(c, 0xd6a24u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d6a26  call 0xca2d4
    X86_AT(c, 0xd6a26u);
    push32(c, 0xd6a2bu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd6a2bu);
    X86_TICK(c, 9);
    // 0d6a2b  push 0
    X86_AT(c, 0xd6a2bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d6a2d  call 0xc92e0
    X86_AT(c, 0xd6a2du);
    push32(c, 0xd6a32u); x86_call_known(c, 0xc92e0u, f_000c92e0); X86_RET(c, 0xd6a32u);
    X86_TICK(c, 15);
    // 0d6a32  mov dword ptr [0xb1344], 0xffffffff
    X86_AT(c, 0xd6a32u);
    wr32((c.sbase[3] + (uint32_t)(0xB1344u)), 0xFFFFFFFFu);
    // 0d6a3c  push 0x5b
    X86_AT(c, 0xd6a3cu);
    { uint32_t v = 0x5Bu; push32(c, v); }
    // 0d6a3e  push 0x1be
    X86_AT(c, 0xd6a3eu);
    { uint32_t v = 0x1BEu; push32(c, v); }
    // 0d6a43  push 0xa66c
    X86_AT(c, 0xd6a43u);
    { uint32_t v = 0xA66Cu; push32(c, v); }
    // 0d6a48  call 0xc9cb4
    X86_AT(c, 0xd6a48u);
    push32(c, 0xd6a4du); x86_call_known(c, 0xc9cb4u, f_000c9cb4); X86_RET(c, 0xd6a4du);
    X86_TICK(c, 13);
    // 0d6a4d  push 0x53
    X86_AT(c, 0xd6a4du);
    { uint32_t v = 0x53u; push32(c, v); }
    // 0d6a4f  push 0x3e
    X86_AT(c, 0xd6a4fu);
    { uint32_t v = 0x3Eu; push32(c, v); }
    // 0d6a51  push 0xa680
    X86_AT(c, 0xd6a51u);
    { uint32_t v = 0xA680u; push32(c, v); }
    // 0d6a56  call 0xc9cb4
    X86_AT(c, 0xd6a56u);
    push32(c, 0xd6a5bu); x86_call_known(c, 0xc9cb4u, f_000c9cb4); X86_RET(c, 0xd6a5bu);
    X86_TICK(c, 17);
    // 0d6a5b  push 0xe8
    X86_AT(c, 0xd6a5bu);
    { uint32_t v = 0xE8u; push32(c, v); }
    // 0d6a60  push 0x130
    X86_AT(c, 0xd6a60u);
    { uint32_t v = 0x130u; push32(c, v); }
    // 0d6a65  push 0xe3
    X86_AT(c, 0xd6a65u);
    { uint32_t v = 0xE3u; push32(c, v); }
    // 0d6a6a  push 0x17e
    X86_AT(c, 0xd6a6au);
    { uint32_t v = 0x17Eu; push32(c, v); }
    // 0d6a6f  push esi
    X86_AT(c, 0xd6a6fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d6a70  call 0xc99ec
    X86_AT(c, 0xd6a70u);
    push32(c, 0xd6a75u); x86_call_known(c, 0xc99ecu, f_000c99ec); X86_RET(c, 0xd6a75u);
    X86_TICK(c, 11);
    // 0d6a75  add esp, 0x44
    X86_AT(c, 0xd6a75u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0d6a78  push 3
    X86_AT(c, 0xd6a78u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d6a7a  call 0xc7588
    X86_AT(c, 0xd6a7au);
    push32(c, 0xd6a7fu); x86_call_known(c, 0xc7588u, f_000c7588); X86_RET(c, 0xd6a7fu);
    X86_TICK(c, 9);
    // 0d6a7f  push 2
    X86_AT(c, 0xd6a7fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d6a81  call 0xc8f54
    X86_AT(c, 0xd6a81u);
    push32(c, 0xd6a86u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd6a86u);
    X86_TICK(c, 2);
    // 0d6a86  add esp, 8
    X86_AT(c, 0xd6a86u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d6a89:
    X86_TICK(c, 17);
    // 0d6a89  push 0xe8
    X86_AT(c, 0xd6a89u);
    { uint32_t v = 0xE8u; push32(c, v); }
    // 0d6a8e  push 0x130
    X86_AT(c, 0xd6a8eu);
    { uint32_t v = 0x130u; push32(c, v); }
    // 0d6a93  push 0xe3
    X86_AT(c, 0xd6a93u);
    { uint32_t v = 0xE3u; push32(c, v); }
    // 0d6a98  push 0x17e
    X86_AT(c, 0xd6a98u);
    { uint32_t v = 0x17Eu; push32(c, v); }
    // 0d6a9d  push esi
    X86_AT(c, 0xd6a9du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d6a9e  call 0xc99ec
    X86_AT(c, 0xd6a9eu);
    push32(c, 0xd6aa3u); x86_call_known(c, 0xc99ecu, f_000c99ec); X86_RET(c, 0xd6aa3u);
    X86_TICK(c, 9);
    // 0d6aa3  push 0xa
    X86_AT(c, 0xd6aa3u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d6aa5  call 0xd6660
    X86_AT(c, 0xd6aa5u);
    push32(c, 0xd6aaau); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd6aaau);
    X86_TICK(c, 17);
    // 0d6aaa  push 0xb8
    X86_AT(c, 0xd6aaau);
    { uint32_t v = 0xB8u; push32(c, v); }
    // 0d6aaf  push 0xa8
    X86_AT(c, 0xd6aafu);
    { uint32_t v = 0xA8u; push32(c, v); }
    // 0d6ab4  push 0xe3
    X86_AT(c, 0xd6ab4u);
    { uint32_t v = 0xE3u; push32(c, v); }
    // 0d6ab9  push 0x17e
    X86_AT(c, 0xd6ab9u);
    { uint32_t v = 0x17Eu; push32(c, v); }
    // 0d6abe  push ebx
    X86_AT(c, 0xd6abeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d6abf  call 0xc99ec
    X86_AT(c, 0xd6abfu);
    push32(c, 0xd6ac4u); x86_call_known(c, 0xc99ecu, f_000c99ec); X86_RET(c, 0xd6ac4u);
    X86_TICK(c, 9);
    // 0d6ac4  push 0xa
    X86_AT(c, 0xd6ac4u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d6ac6  call 0xd6660
    X86_AT(c, 0xd6ac6u);
    push32(c, 0xd6acbu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd6acbu);
    X86_TICK(c, 20);
    // 0d6acb  push 0xb8
    X86_AT(c, 0xd6acbu);
    { uint32_t v = 0xB8u; push32(c, v); }
    // 0d6ad0  push 0xa8
    X86_AT(c, 0xd6ad0u);
    { uint32_t v = 0xA8u; push32(c, v); }
    // 0d6ad5  push 0xe3
    X86_AT(c, 0xd6ad5u);
    { uint32_t v = 0xE3u; push32(c, v); }
    // 0d6ada  push 0x17e
    X86_AT(c, 0xd6adau);
    { uint32_t v = 0x17Eu; push32(c, v); }
    // 0d6adf  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xd6adfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0d6ae2  call 0xc99ec
    X86_AT(c, 0xd6ae2u);
    push32(c, 0xd6ae7u); x86_call_known(c, 0xc99ecu, f_000c99ec); X86_RET(c, 0xd6ae7u);
    X86_TICK(c, 11);
    // 0d6ae7  add esp, 0x44
    X86_AT(c, 0xd6ae7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0d6aea  push 0xa
    X86_AT(c, 0xd6aeau);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d6aec  call 0xd6660
    X86_AT(c, 0xd6aecu);
    push32(c, 0xd6af1u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd6af1u);
    X86_TICK(c, 17);
    // 0d6af1  push 0xb8
    X86_AT(c, 0xd6af1u);
    { uint32_t v = 0xB8u; push32(c, v); }
    // 0d6af6  push 0xa8
    X86_AT(c, 0xd6af6u);
    { uint32_t v = 0xA8u; push32(c, v); }
    // 0d6afb  push 0xe3
    X86_AT(c, 0xd6afbu);
    { uint32_t v = 0xE3u; push32(c, v); }
    // 0d6b00  push 0x17e
    X86_AT(c, 0xd6b00u);
    { uint32_t v = 0x17Eu; push32(c, v); }
    // 0d6b05  push ebx
    X86_AT(c, 0xd6b05u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d6b06  call 0xc99ec
    X86_AT(c, 0xd6b06u);
    push32(c, 0xd6b0bu); x86_call_known(c, 0xc99ecu, f_000c99ec); X86_RET(c, 0xd6b0bu);
    X86_TICK(c, 9);
    // 0d6b0b  push 0xa
    X86_AT(c, 0xd6b0bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d6b0d  call 0xd6660
    X86_AT(c, 0xd6b0du);
    push32(c, 0xd6b12u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd6b12u);
    X86_TICK(c, 9);
    // 0d6b12  push 4
    X86_AT(c, 0xd6b12u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d6b14  call 0xc81e4
    X86_AT(c, 0xd6b14u);
    push32(c, 0xd6b19u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd6b19u);
    X86_TICK(c, 9);
    // 0d6b19  add esp, 0x20
    X86_AT(c, 0xd6b19u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d6b1c  and al, al
    X86_AT(c, 0xd6b1cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d6b1e  je 0xd6a89
    X86_AT(c, 0xd6b1eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd6a89u); goto L_d6a89; }
    X86_TICK(c, 9);
    // 0d6b24  push 0
    X86_AT(c, 0xd6b24u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d6b26  call 0xc8f40
    X86_AT(c, 0xd6b26u);
    push32(c, 0xd6b2bu); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xd6b2bu);
L_d6b2b:
    X86_TICK(c, 9);
    // 0d6b2b  push esi
    X86_AT(c, 0xd6b2bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d6b2c  call 0xe77c4
    X86_AT(c, 0xd6b2cu);
    push32(c, 0xd6b31u); x86_call_known(c, 0xe77c4u, f_000e77c4); X86_RET(c, 0xd6b31u);
    X86_TICK(c, 2);
    // 0d6b31  add esp, 8
    X86_AT(c, 0xd6b31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d6b34:
    X86_TICK(c, 28);
    // 0d6b34  pop edi
    X86_AT(c, 0xd6b34u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d6b35  pop esi
    X86_AT(c, 0xd6b35u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d6b36  pop ebx
    X86_AT(c, 0xd6b36u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d6b37  leave 
    X86_AT(c, 0xd6b37u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d6b38  ret 
    X86_AT(c, 0xd6b38u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd67c4u, "ran off the end of a function");
}
void f_000d6b3c(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0d6b3c  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xd6b3cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
L_d6b40:
    X86_TICK(c, 11);
    // 0d6b40  mov al, byte ptr [ecx]
    X86_AT(c, 0xd6b40u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0d6b42  cmp al, 0x3d
    X86_AT(c, 0xd6b42u);
    (void)x86_sub(c, g8(c, 0), 0x3Du, 0, 1);
    // 0d6b44  je 0xd6b4d
    X86_AT(c, 0xd6b44u);
    if (x86_cc(c, 4)) { goto L_d6b4d; }
    X86_TICK(c, 7);
    // 0d6b46  and al, al
    X86_AT(c, 0xd6b46u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d6b48  je 0xd6b4d
    X86_AT(c, 0xd6b48u);
    if (x86_cc(c, 4)) { goto L_d6b4d; }
    X86_TICK(c, 9);
    // 0d6b4a  inc ecx
    X86_AT(c, 0xd6b4au);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d6b4b  jmp 0xd6b40
    X86_AT(c, 0xd6b4bu);
    X86_POLL(c, 0xd6b40u); goto L_d6b40;
L_d6b4d:
    X86_TICK(c, 14);
    // 0d6b4d  inc ecx
    X86_AT(c, 0xd6b4du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d6b4e  mov eax, ecx
    X86_AT(c, 0xd6b4eu);
    c.r[0] = c.r[1];
    // 0d6b50  ret 
    X86_AT(c, 0xd6b50u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6b3cu, "ran off the end of a function");
}
void f_000d6b54(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d6b54  push ebp
    X86_AT(c, 0xd6b54u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d6b55  mov ebp, esp
    X86_AT(c, 0xd6b55u);
    c.r[5] = c.r[4];
    // 0d6b57  sub esp, 0x5c
    X86_AT(c, 0xd6b57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x5Cu, 0, 4); }
    // 0d6b5a  push ebx
    X86_AT(c, 0xd6b5au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d6b5b  push esi
    X86_AT(c, 0xd6b5bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d6b5c  push edi
    X86_AT(c, 0xd6b5cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6b5d  sub esi, esi
    X86_AT(c, 0xd6b5du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_d6b5f:
    X86_TICK(c, 7);
    // 0d6b5f  cmp esi, 4
    X86_AT(c, 0xd6b5fu);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0d6b62  jge 0xd6b74
    X86_AT(c, 0xd6b62u);
    if (x86_cc(c, 13)) { goto L_d6b74; }
    X86_TICK(c, 33);
    // 0d6b64  imul eax, esi, 0x21a
    X86_AT(c, 0xd6b64u);
    c.r[0] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d6b6a  mov byte ptr [eax + 0xb0508], 0
    X86_AT(c, 0xd6b6au);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0508u)), 0x0u);
    // 0d6b71  inc esi
    X86_AT(c, 0xd6b71u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d6b72  jmp 0xd6b5f
    X86_AT(c, 0xd6b72u);
    X86_POLL(c, 0xd6b5fu); goto L_d6b5f;
L_d6b74:
    X86_TICK(c, 11);
    // 0d6b74  push 0xa692
    X86_AT(c, 0xd6b74u);
    { uint32_t v = 0xA692u; push32(c, v); }
    // 0d6b79  push 0xa698
    X86_AT(c, 0xd6b79u);
    { uint32_t v = 0xA698u; push32(c, v); }
    // 0d6b7e  call 0xe6e04
    X86_AT(c, 0xd6b7eu);
    push32(c, 0xd6b83u); x86_call_known(c, 0xe6e04u, f_000e6e04); X86_RET(c, 0xd6b83u);
    X86_TICK(c, 12);
    // 0d6b83  add esp, 8
    X86_AT(c, 0xd6b83u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d6b86  xchg edi, eax
    X86_AT(c, 0xd6b86u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d6b87  and edi, edi
    X86_AT(c, 0xd6b87u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d6b89  je 0xd6ba6
    X86_AT(c, 0xd6b89u);
    if (x86_cc(c, 4)) { goto L_d6ba6; }
    X86_TICK(c, 15);
    // 0d6b8b  push edi
    X86_AT(c, 0xd6b8bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6b8c  push 0x4f
    X86_AT(c, 0xd6b8cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6b8e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6b8eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6b91  push eax
    X86_AT(c, 0xd6b91u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6b92  call 0xe665c
    X86_AT(c, 0xd6b92u);
    push32(c, 0xd6b97u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6b97u);
    X86_TICK(c, 14);
    // 0d6b97  add esp, 0xc
    X86_AT(c, 0xd6b97u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d6b9a  cmp byte ptr [ebp - 0x50], 0x52
    X86_AT(c, 0xd6b9au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB0u))), 0x52u, 0, 1);
    // 0d6b9e  jne 0xd6ba6
    X86_AT(c, 0xd6b9eu);
    if (x86_cc(c, 5)) { goto L_d6ba6; }
    X86_TICK(c, 12);
    // 0d6ba0  cmp byte ptr [ebp - 0x4f], 0x6f
    X86_AT(c, 0xd6ba0u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB1u))), 0x6Fu, 0, 1);
    // 0d6ba4  je 0xd6bb5
    X86_AT(c, 0xd6ba4u);
    if (x86_cc(c, 4)) { goto L_d6bb5; }
L_d6ba6:
    X86_TICK(c, 11);
    // 0d6ba6  mov eax, 0xffffffff
    X86_AT(c, 0xd6ba6u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d6bab  mov dword ptr [0xb1348], eax
    X86_AT(c, 0xd6babu);
    wr32((c.sbase[3] + (uint32_t)(0xB1348u)), c.r[0]);
    // 0d6bb0  jmp 0xd79c0
    X86_AT(c, 0xd6bb0u);
    goto L_d79c0;
L_d6bb5:
    X86_TICK(c, 15);
    // 0d6bb5  push edi
    X86_AT(c, 0xd6bb5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6bb6  push 0x4f
    X86_AT(c, 0xd6bb6u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6bb8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6bb8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6bbb  push eax
    X86_AT(c, 0xd6bbbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6bbc  call 0xe665c
    X86_AT(c, 0xd6bbcu);
    push32(c, 0xd6bc1u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6bc1u);
    X86_TICK(c, 11);
    // 0d6bc1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6bc1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6bc4  push eax
    X86_AT(c, 0xd6bc4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6bc5  call 0xd6b3c
    X86_AT(c, 0xd6bc5u);
    push32(c, 0xd6bcau); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6bcau);
    X86_TICK(c, 14);
    // 0d6bca  add esp, 0x10
    X86_AT(c, 0xd6bcau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d6bcd  cmp byte ptr [eax], 0x45
    X86_AT(c, 0xd6bcdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x45u, 0, 1);
    // 0d6bd0  jne 0xd6bde
    X86_AT(c, 0xd6bd0u);
    if (x86_cc(c, 5)) { goto L_d6bde; }
    X86_TICK(c, 9);
    // 0d6bd2  mov dword ptr [0x43eb8], 0
    X86_AT(c, 0xd6bd2u);
    wr32((c.sbase[3] + (uint32_t)(0x43EB8u)), 0x0u);
    // 0d6bdc  jmp 0xd6be8
    X86_AT(c, 0xd6bdcu);
    goto L_d6be8;
L_d6bde:
    X86_TICK(c, 2);
    // 0d6bde  mov dword ptr [0x43eb8], 0xffffffff
    X86_AT(c, 0xd6bdeu);
    wr32((c.sbase[3] + (uint32_t)(0x43EB8u)), 0xFFFFFFFFu);
L_d6be8:
    X86_TICK(c, 2);
    // 0d6be8  sub esi, esi
    X86_AT(c, 0xd6be8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_d6bea:
    X86_TICK(c, 7);
    // 0d6bea  cmp esi, 4
    X86_AT(c, 0xd6beau);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0d6bed  jge 0xd79b0
    X86_AT(c, 0xd6bedu);
    if (x86_cc(c, 13)) { goto L_d79b0; }
    X86_TICK(c, 15);
    // 0d6bf3  push edi
    X86_AT(c, 0xd6bf3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6bf4  push 0x4f
    X86_AT(c, 0xd6bf4u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6bf6  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6bf6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6bf9  push eax
    X86_AT(c, 0xd6bf9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6bfa  call 0xe665c
    X86_AT(c, 0xd6bfau);
    push32(c, 0xd6bffu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6bffu);
    X86_TICK(c, 11);
    // 0d6bff  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6bffu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6c02  push eax
    X86_AT(c, 0xd6c02u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6c03  call 0xd6b3c
    X86_AT(c, 0xd6c03u);
    push32(c, 0xd6c08u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6c08u);
    X86_TICK(c, 6);
    // 0d6c08  mov dword ptr [ebp - 0x58], eax
    X86_AT(c, 0xd6c08u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[0]);
    // 0d6c0b  mov dword ptr [ebp - 0x54], 0
    X86_AT(c, 0xd6c0bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu)), 0x0u);
    // 0d6c12  add esp, 0x10
    X86_AT(c, 0xd6c12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d6c15:
    X86_TICK(c, 15);
    // 0d6c15  mov eax, dword ptr [ebp - 0x58]
    X86_AT(c, 0xd6c15u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0d6c18  mov dl, byte ptr [eax]
    X86_AT(c, 0xd6c18u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d6c1a  cmp dl, 0xa
    X86_AT(c, 0xd6c1au);
    (void)x86_sub(c, g8(c, 2), 0xAu, 0, 1);
    // 0d6c1d  je 0xd6c3a
    X86_AT(c, 0xd6c1du);
    if (x86_cc(c, 4)) { goto L_d6c3a; }
    X86_TICK(c, 7);
    // 0d6c1f  and dl, dl
    X86_AT(c, 0xd6c1fu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 0d6c21  je 0xd6c3a
    X86_AT(c, 0xd6c21u);
    if (x86_cc(c, 4)) { goto L_d6c3a; }
    X86_TICK(c, 49);
    // 0d6c23  imul ecx, esi, 0x21a
    X86_AT(c, 0xd6c23u);
    c.r[1] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d6c29  add ecx, dword ptr [ebp - 0x54]
    X86_AT(c, 0xd6c29u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu))), 0, 4); }
    // 0d6c2c  mov byte ptr [ecx + 0xb0508], dl
    X86_AT(c, 0xd6c2cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xB0508u)), g8(c, 2));
    // 0d6c32  inc dword ptr [ebp - 0x54]
    X86_AT(c, 0xd6c32u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d6c35  inc dword ptr [ebp - 0x58]
    X86_AT(c, 0xd6c35u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d6c38  jmp 0xd6c15
    X86_AT(c, 0xd6c38u);
    X86_POLL(c, 0xd6c15u); goto L_d6c15;
L_d6c3a:
    X86_TICK(c, 47);
    // 0d6c3a  imul eax, esi, 0x21a
    X86_AT(c, 0xd6c3au);
    c.r[0] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d6c40  mov dword ptr [ebp - 0x5c], eax
    X86_AT(c, 0xd6c40u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)), c.r[0]);
    // 0d6c43  add eax, dword ptr [ebp - 0x54]
    X86_AT(c, 0xd6c43u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu))), 0, 4); }
    // 0d6c46  mov byte ptr [eax + 0xb0508], 0
    X86_AT(c, 0xd6c46u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0508u)), 0x0u);
    // 0d6c4d  push edi
    X86_AT(c, 0xd6c4du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6c4e  push 0x4f
    X86_AT(c, 0xd6c4eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6c50  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6c50u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6c53  push eax
    X86_AT(c, 0xd6c53u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6c54  call 0xe665c
    X86_AT(c, 0xd6c54u);
    push32(c, 0xd6c59u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6c59u);
    X86_TICK(c, 13);
    // 0d6c59  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6c59u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6c5c  push eax
    X86_AT(c, 0xd6c5cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6c5d  mov edx, eax
    X86_AT(c, 0xd6c5du);
    c.r[2] = c.r[0];
    // 0d6c5f  call 0xd6b3c
    X86_AT(c, 0xd6c5fu);
    push32(c, 0xd6c64u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6c64u);
    X86_TICK(c, 9);
    // 0d6c64  push eax
    X86_AT(c, 0xd6c64u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6c65  call 0xc7930
    X86_AT(c, 0xd6c65u);
    push32(c, 0xd6c6au); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6c6au);
    X86_TICK(c, 21);
    // 0d6c6a  mov ecx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6c6au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6c6d  mov byte ptr [ecx + 0xb0517], al
    X86_AT(c, 0xd6c6du);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xB0517u)), g8(c, 0));
    // 0d6c73  push edi
    X86_AT(c, 0xd6c73u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6c74  push 0x4f
    X86_AT(c, 0xd6c74u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6c76  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6c76u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6c79  push eax
    X86_AT(c, 0xd6c79u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6c7a  call 0xe665c
    X86_AT(c, 0xd6c7au);
    push32(c, 0xd6c7fu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6c7fu);
    X86_TICK(c, 13);
    // 0d6c7f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6c7fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6c82  push eax
    X86_AT(c, 0xd6c82u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6c83  mov edx, eax
    X86_AT(c, 0xd6c83u);
    c.r[2] = c.r[0];
    // 0d6c85  call 0xd6b3c
    X86_AT(c, 0xd6c85u);
    push32(c, 0xd6c8au); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6c8au);
    X86_TICK(c, 9);
    // 0d6c8a  push eax
    X86_AT(c, 0xd6c8au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6c8b  call 0xc7930
    X86_AT(c, 0xd6c8bu);
    push32(c, 0xd6c90u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6c90u);
    X86_TICK(c, 21);
    // 0d6c90  mov ecx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6c90u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6c93  mov byte ptr [ecx + 0xb0518], al
    X86_AT(c, 0xd6c93u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xB0518u)), g8(c, 0));
    // 0d6c99  push edi
    X86_AT(c, 0xd6c99u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6c9a  push 0x4f
    X86_AT(c, 0xd6c9au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6c9c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6c9cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6c9f  push eax
    X86_AT(c, 0xd6c9fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6ca0  call 0xe665c
    X86_AT(c, 0xd6ca0u);
    push32(c, 0xd6ca5u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6ca5u);
    X86_TICK(c, 13);
    // 0d6ca5  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6ca5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6ca8  push eax
    X86_AT(c, 0xd6ca8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6ca9  mov edx, eax
    X86_AT(c, 0xd6ca9u);
    c.r[2] = c.r[0];
    // 0d6cab  call 0xd6b3c
    X86_AT(c, 0xd6cabu);
    push32(c, 0xd6cb0u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6cb0u);
    X86_TICK(c, 9);
    // 0d6cb0  push eax
    X86_AT(c, 0xd6cb0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6cb1  call 0xc7930
    X86_AT(c, 0xd6cb1u);
    push32(c, 0xd6cb6u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6cb6u);
    X86_TICK(c, 23);
    // 0d6cb6  add esp, 0x3c
    X86_AT(c, 0xd6cb6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d6cb9  mov ecx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6cb9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6cbc  mov byte ptr [ecx + 0xb0519], al
    X86_AT(c, 0xd6cbcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xB0519u)), g8(c, 0));
    // 0d6cc2  push edi
    X86_AT(c, 0xd6cc2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6cc3  push 0x4f
    X86_AT(c, 0xd6cc3u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6cc5  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6cc5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6cc8  push eax
    X86_AT(c, 0xd6cc8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6cc9  call 0xe665c
    X86_AT(c, 0xd6cc9u);
    push32(c, 0xd6cceu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6cceu);
    X86_TICK(c, 13);
    // 0d6cce  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6cceu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6cd1  push eax
    X86_AT(c, 0xd6cd1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6cd2  mov edx, eax
    X86_AT(c, 0xd6cd2u);
    c.r[2] = c.r[0];
    // 0d6cd4  call 0xd6b3c
    X86_AT(c, 0xd6cd4u);
    push32(c, 0xd6cd9u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6cd9u);
    X86_TICK(c, 9);
    // 0d6cd9  push eax
    X86_AT(c, 0xd6cd9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6cda  call 0xc7930
    X86_AT(c, 0xd6cdau);
    push32(c, 0xd6cdfu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6cdfu);
    X86_TICK(c, 21);
    // 0d6cdf  mov ecx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6cdfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6ce2  mov dword ptr [ecx + 0xb051a], eax
    X86_AT(c, 0xd6ce2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xB051Au)), c.r[0]);
    // 0d6ce8  push edi
    X86_AT(c, 0xd6ce8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6ce9  push 0x4f
    X86_AT(c, 0xd6ce9u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6ceb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6cebu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6cee  push eax
    X86_AT(c, 0xd6ceeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6cef  call 0xe665c
    X86_AT(c, 0xd6cefu);
    push32(c, 0xd6cf4u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6cf4u);
    X86_TICK(c, 13);
    // 0d6cf4  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6cf4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6cf7  push eax
    X86_AT(c, 0xd6cf7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6cf8  mov edx, eax
    X86_AT(c, 0xd6cf8u);
    c.r[2] = c.r[0];
    // 0d6cfa  call 0xd6b3c
    X86_AT(c, 0xd6cfau);
    push32(c, 0xd6cffu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6cffu);
    X86_TICK(c, 9);
    // 0d6cff  push eax
    X86_AT(c, 0xd6cffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6d00  call 0xc7930
    X86_AT(c, 0xd6d00u);
    push32(c, 0xd6d05u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6d05u);
    X86_TICK(c, 21);
    // 0d6d05  mov ecx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6d05u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6d08  mov dword ptr [ecx + 0xb051e], eax
    X86_AT(c, 0xd6d08u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xB051Eu)), c.r[0]);
    // 0d6d0e  push edi
    X86_AT(c, 0xd6d0eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6d0f  push 0x4f
    X86_AT(c, 0xd6d0fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6d11  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6d11u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6d14  push eax
    X86_AT(c, 0xd6d14u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6d15  call 0xe665c
    X86_AT(c, 0xd6d15u);
    push32(c, 0xd6d1au); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6d1au);
    X86_TICK(c, 13);
    // 0d6d1a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6d1au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6d1d  push eax
    X86_AT(c, 0xd6d1du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6d1e  mov edx, eax
    X86_AT(c, 0xd6d1eu);
    c.r[2] = c.r[0];
    // 0d6d20  call 0xd6b3c
    X86_AT(c, 0xd6d20u);
    push32(c, 0xd6d25u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6d25u);
    X86_TICK(c, 9);
    // 0d6d25  push eax
    X86_AT(c, 0xd6d25u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6d26  call 0xc7930
    X86_AT(c, 0xd6d26u);
    push32(c, 0xd6d2bu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6d2bu);
    X86_TICK(c, 23);
    // 0d6d2b  add esp, 0x3c
    X86_AT(c, 0xd6d2bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d6d2e  mov ecx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6d2eu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6d31  mov dword ptr [ecx + 0xb0522], eax
    X86_AT(c, 0xd6d31u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xB0522u)), c.r[0]);
    // 0d6d37  push edi
    X86_AT(c, 0xd6d37u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6d38  push 0x4f
    X86_AT(c, 0xd6d38u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6d3a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6d3au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6d3d  push eax
    X86_AT(c, 0xd6d3du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6d3e  call 0xe665c
    X86_AT(c, 0xd6d3eu);
    push32(c, 0xd6d43u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6d43u);
    X86_TICK(c, 15);
    // 0d6d43  add esp, 0xc
    X86_AT(c, 0xd6d43u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d6d46  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6d46u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6d49  push eax
    X86_AT(c, 0xd6d49u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6d4a  mov edx, eax
    X86_AT(c, 0xd6d4au);
    c.r[2] = c.r[0];
    // 0d6d4c  call 0xd6b3c
    X86_AT(c, 0xd6d4cu);
    push32(c, 0xd6d51u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6d51u);
    X86_TICK(c, 9);
    // 0d6d51  push eax
    X86_AT(c, 0xd6d51u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6d52  call 0xc7930
    X86_AT(c, 0xd6d52u);
    push32(c, 0xd6d57u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6d57u);
    X86_TICK(c, 43);
    // 0d6d57  mov edx, 0xb01a8
    X86_AT(c, 0xd6d57u);
    c.r[2] = 0xB01A8u;
    // 0d6d5c  imul ecx, esi, 0x21a
    X86_AT(c, 0xd6d5cu);
    c.r[1] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d6d62  mov dword ptr [edx + ecx*1 + 0x37e], eax
    X86_AT(c, 0xd6d62u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] + 0x37Eu)), c.r[0]);
    // 0d6d69  push edi
    X86_AT(c, 0xd6d69u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6d6a  push 0x4f
    X86_AT(c, 0xd6d6au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6d6c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6d6cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6d6f  push eax
    X86_AT(c, 0xd6d6fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6d70  mov dword ptr [ebp - 0x5c], ecx
    X86_AT(c, 0xd6d70u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)), c.r[1]);
    // 0d6d73  call 0xe665c
    X86_AT(c, 0xd6d73u);
    push32(c, 0xd6d78u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6d78u);
    X86_TICK(c, 13);
    // 0d6d78  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6d78u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6d7b  push eax
    X86_AT(c, 0xd6d7bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6d7c  mov edx, eax
    X86_AT(c, 0xd6d7cu);
    c.r[2] = c.r[0];
    // 0d6d7e  call 0xd6b3c
    X86_AT(c, 0xd6d7eu);
    push32(c, 0xd6d83u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6d83u);
    X86_TICK(c, 9);
    // 0d6d83  push eax
    X86_AT(c, 0xd6d83u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6d84  call 0xc7930
    X86_AT(c, 0xd6d84u);
    push32(c, 0xd6d89u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6d89u);
    X86_TICK(c, 21);
    // 0d6d89  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6d89u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6d8c  mov dword ptr [edx + 0xb052a], eax
    X86_AT(c, 0xd6d8cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB052Au)), c.r[0]);
    // 0d6d92  push edi
    X86_AT(c, 0xd6d92u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6d93  push 0x4f
    X86_AT(c, 0xd6d93u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6d95  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6d95u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6d98  push eax
    X86_AT(c, 0xd6d98u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6d99  call 0xe665c
    X86_AT(c, 0xd6d99u);
    push32(c, 0xd6d9eu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6d9eu);
    X86_TICK(c, 13);
    // 0d6d9e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6d9eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6da1  push eax
    X86_AT(c, 0xd6da1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6da2  mov edx, eax
    X86_AT(c, 0xd6da2u);
    c.r[2] = c.r[0];
    // 0d6da4  call 0xd6b3c
    X86_AT(c, 0xd6da4u);
    push32(c, 0xd6da9u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6da9u);
    X86_TICK(c, 9);
    // 0d6da9  push eax
    X86_AT(c, 0xd6da9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6daa  call 0xc7930
    X86_AT(c, 0xd6daau);
    push32(c, 0xd6dafu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6dafu);
    X86_TICK(c, 21);
    // 0d6daf  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6dafu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6db2  mov dword ptr [edx + 0xb052e], eax
    X86_AT(c, 0xd6db2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB052Eu)), c.r[0]);
    // 0d6db8  push edi
    X86_AT(c, 0xd6db8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6db9  push 0x4f
    X86_AT(c, 0xd6db9u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6dbb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6dbbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6dbe  push eax
    X86_AT(c, 0xd6dbeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6dbf  call 0xe665c
    X86_AT(c, 0xd6dbfu);
    push32(c, 0xd6dc4u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6dc4u);
    X86_TICK(c, 15);
    // 0d6dc4  add esp, 0x3c
    X86_AT(c, 0xd6dc4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d6dc7  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6dc7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6dca  push eax
    X86_AT(c, 0xd6dcau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6dcb  mov edx, eax
    X86_AT(c, 0xd6dcbu);
    c.r[2] = c.r[0];
    // 0d6dcd  call 0xd6b3c
    X86_AT(c, 0xd6dcdu);
    push32(c, 0xd6dd2u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6dd2u);
    X86_TICK(c, 9);
    // 0d6dd2  push eax
    X86_AT(c, 0xd6dd2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6dd3  call 0xc7930
    X86_AT(c, 0xd6dd3u);
    push32(c, 0xd6dd8u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6dd8u);
    X86_TICK(c, 21);
    // 0d6dd8  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6dd8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6ddb  mov dword ptr [edx + 0xb0532], eax
    X86_AT(c, 0xd6ddbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0532u)), c.r[0]);
    // 0d6de1  push edi
    X86_AT(c, 0xd6de1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6de2  push 0x4f
    X86_AT(c, 0xd6de2u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6de4  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6de4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6de7  push eax
    X86_AT(c, 0xd6de7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6de8  call 0xe665c
    X86_AT(c, 0xd6de8u);
    push32(c, 0xd6dedu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6dedu);
    X86_TICK(c, 13);
    // 0d6ded  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6dedu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6df0  push eax
    X86_AT(c, 0xd6df0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6df1  mov edx, eax
    X86_AT(c, 0xd6df1u);
    c.r[2] = c.r[0];
    // 0d6df3  call 0xd6b3c
    X86_AT(c, 0xd6df3u);
    push32(c, 0xd6df8u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6df8u);
    X86_TICK(c, 9);
    // 0d6df8  push eax
    X86_AT(c, 0xd6df8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6df9  call 0xc7930
    X86_AT(c, 0xd6df9u);
    push32(c, 0xd6dfeu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6dfeu);
    X86_TICK(c, 21);
    // 0d6dfe  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6dfeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6e01  mov dword ptr [edx + 0xb0536], eax
    X86_AT(c, 0xd6e01u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0536u)), c.r[0]);
    // 0d6e07  push edi
    X86_AT(c, 0xd6e07u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6e08  push 0x4f
    X86_AT(c, 0xd6e08u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6e0a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6e0au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6e0d  push eax
    X86_AT(c, 0xd6e0du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6e0e  call 0xe665c
    X86_AT(c, 0xd6e0eu);
    push32(c, 0xd6e13u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6e13u);
    X86_TICK(c, 13);
    // 0d6e13  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6e13u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6e16  push eax
    X86_AT(c, 0xd6e16u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6e17  mov edx, eax
    X86_AT(c, 0xd6e17u);
    c.r[2] = c.r[0];
    // 0d6e19  call 0xd6b3c
    X86_AT(c, 0xd6e19u);
    push32(c, 0xd6e1eu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6e1eu);
    X86_TICK(c, 9);
    // 0d6e1e  push eax
    X86_AT(c, 0xd6e1eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6e1f  call 0xc7930
    X86_AT(c, 0xd6e1fu);
    push32(c, 0xd6e24u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6e24u);
    X86_TICK(c, 21);
    // 0d6e24  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6e24u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6e27  mov dword ptr [edx + 0xb053a], eax
    X86_AT(c, 0xd6e27u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB053Au)), c.r[0]);
    // 0d6e2d  push edi
    X86_AT(c, 0xd6e2du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6e2e  push 0x4f
    X86_AT(c, 0xd6e2eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6e30  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6e30u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6e33  push eax
    X86_AT(c, 0xd6e33u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6e34  call 0xe665c
    X86_AT(c, 0xd6e34u);
    push32(c, 0xd6e39u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6e39u);
    X86_TICK(c, 15);
    // 0d6e39  add esp, 0x3c
    X86_AT(c, 0xd6e39u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d6e3c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6e3cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6e3f  push eax
    X86_AT(c, 0xd6e3fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6e40  mov edx, eax
    X86_AT(c, 0xd6e40u);
    c.r[2] = c.r[0];
    // 0d6e42  call 0xd6b3c
    X86_AT(c, 0xd6e42u);
    push32(c, 0xd6e47u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6e47u);
    X86_TICK(c, 9);
    // 0d6e47  push eax
    X86_AT(c, 0xd6e47u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6e48  call 0xc7930
    X86_AT(c, 0xd6e48u);
    push32(c, 0xd6e4du); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6e4du);
    X86_TICK(c, 21);
    // 0d6e4d  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6e4du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6e50  mov dword ptr [edx + 0xb053e], eax
    X86_AT(c, 0xd6e50u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB053Eu)), c.r[0]);
    // 0d6e56  push edi
    X86_AT(c, 0xd6e56u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6e57  push 0x4f
    X86_AT(c, 0xd6e57u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6e59  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6e59u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6e5c  push eax
    X86_AT(c, 0xd6e5cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6e5d  call 0xe665c
    X86_AT(c, 0xd6e5du);
    push32(c, 0xd6e62u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6e62u);
    X86_TICK(c, 11);
    // 0d6e62  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6e62u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6e65  push eax
    X86_AT(c, 0xd6e65u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6e66  call 0xd6b3c
    X86_AT(c, 0xd6e66u);
    push32(c, 0xd6e6bu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6e6bu);
    X86_TICK(c, 9);
    // 0d6e6b  push eax
    X86_AT(c, 0xd6e6bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6e6c  call 0xc7930
    X86_AT(c, 0xd6e6cu);
    push32(c, 0xd6e71u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6e71u);
    X86_TICK(c, 23);
    // 0d6e71  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6e71u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6e74  mov dword ptr [edx + 0xb0542], eax
    X86_AT(c, 0xd6e74u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0542u)), c.r[0]);
    // 0d6e7a  add esp, 0x1c
    X86_AT(c, 0xd6e7au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d6e7d  push edi
    X86_AT(c, 0xd6e7du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6e7e  push 0x4f
    X86_AT(c, 0xd6e7eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6e80  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6e80u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6e83  push eax
    X86_AT(c, 0xd6e83u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6e84  call 0xe665c
    X86_AT(c, 0xd6e84u);
    push32(c, 0xd6e89u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6e89u);
    X86_TICK(c, 13);
    // 0d6e89  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6e89u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6e8c  push eax
    X86_AT(c, 0xd6e8cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6e8d  mov edx, eax
    X86_AT(c, 0xd6e8du);
    c.r[2] = c.r[0];
    // 0d6e8f  call 0xd6b3c
    X86_AT(c, 0xd6e8fu);
    push32(c, 0xd6e94u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6e94u);
    X86_TICK(c, 9);
    // 0d6e94  push eax
    X86_AT(c, 0xd6e94u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6e95  call 0xc7930
    X86_AT(c, 0xd6e95u);
    push32(c, 0xd6e9au); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6e9au);
    X86_TICK(c, 43);
    // 0d6e9a  mov edx, 0xb01a8
    X86_AT(c, 0xd6e9au);
    c.r[2] = 0xB01A8u;
    // 0d6e9f  imul ecx, esi, 0x21a
    X86_AT(c, 0xd6e9fu);
    c.r[1] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d6ea5  mov dword ptr [edx + ecx*1 + 0x39e], eax
    X86_AT(c, 0xd6ea5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] + 0x39Eu)), c.r[0]);
    // 0d6eac  push edi
    X86_AT(c, 0xd6eacu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6ead  push 0x4f
    X86_AT(c, 0xd6eadu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6eaf  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6eafu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6eb2  push eax
    X86_AT(c, 0xd6eb2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6eb3  mov dword ptr [ebp - 0x5c], ecx
    X86_AT(c, 0xd6eb3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)), c.r[1]);
    // 0d6eb6  call 0xe665c
    X86_AT(c, 0xd6eb6u);
    push32(c, 0xd6ebbu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6ebbu);
    X86_TICK(c, 13);
    // 0d6ebb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6ebbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6ebe  push eax
    X86_AT(c, 0xd6ebeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6ebf  mov edx, eax
    X86_AT(c, 0xd6ebfu);
    c.r[2] = c.r[0];
    // 0d6ec1  call 0xd6b3c
    X86_AT(c, 0xd6ec1u);
    push32(c, 0xd6ec6u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6ec6u);
    X86_TICK(c, 9);
    // 0d6ec6  push eax
    X86_AT(c, 0xd6ec6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6ec7  call 0xc7930
    X86_AT(c, 0xd6ec7u);
    push32(c, 0xd6eccu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6eccu);
    X86_TICK(c, 21);
    // 0d6ecc  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6eccu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6ecf  mov dword ptr [edx + 0xb054a], eax
    X86_AT(c, 0xd6ecfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB054Au)), c.r[0]);
    // 0d6ed5  push edi
    X86_AT(c, 0xd6ed5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6ed6  push 0x4f
    X86_AT(c, 0xd6ed6u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6ed8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6ed8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6edb  push eax
    X86_AT(c, 0xd6edbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6edc  call 0xe665c
    X86_AT(c, 0xd6edcu);
    push32(c, 0xd6ee1u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6ee1u);
    X86_TICK(c, 13);
    // 0d6ee1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6ee1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6ee4  push eax
    X86_AT(c, 0xd6ee4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6ee5  mov edx, eax
    X86_AT(c, 0xd6ee5u);
    c.r[2] = c.r[0];
    // 0d6ee7  call 0xd6b3c
    X86_AT(c, 0xd6ee7u);
    push32(c, 0xd6eecu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6eecu);
    X86_TICK(c, 9);
    // 0d6eec  push eax
    X86_AT(c, 0xd6eecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6eed  call 0xc7930
    X86_AT(c, 0xd6eedu);
    push32(c, 0xd6ef2u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6ef2u);
    X86_TICK(c, 23);
    // 0d6ef2  add esp, 0x3c
    X86_AT(c, 0xd6ef2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d6ef5  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6ef5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6ef8  mov dword ptr [edx + 0xb054e], eax
    X86_AT(c, 0xd6ef8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB054Eu)), c.r[0]);
    // 0d6efe  push edi
    X86_AT(c, 0xd6efeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6eff  push 0x4f
    X86_AT(c, 0xd6effu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6f01  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6f01u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6f04  push eax
    X86_AT(c, 0xd6f04u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6f05  call 0xe665c
    X86_AT(c, 0xd6f05u);
    push32(c, 0xd6f0au); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6f0au);
    X86_TICK(c, 13);
    // 0d6f0a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6f0au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6f0d  push eax
    X86_AT(c, 0xd6f0du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6f0e  mov edx, eax
    X86_AT(c, 0xd6f0eu);
    c.r[2] = c.r[0];
    // 0d6f10  call 0xd6b3c
    X86_AT(c, 0xd6f10u);
    push32(c, 0xd6f15u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6f15u);
    X86_TICK(c, 9);
    // 0d6f15  push eax
    X86_AT(c, 0xd6f15u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6f16  call 0xc7930
    X86_AT(c, 0xd6f16u);
    push32(c, 0xd6f1bu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6f1bu);
    X86_TICK(c, 21);
    // 0d6f1b  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6f1bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6f1e  mov dword ptr [edx + 0xb0552], eax
    X86_AT(c, 0xd6f1eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0552u)), c.r[0]);
    // 0d6f24  push edi
    X86_AT(c, 0xd6f24u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6f25  push 0x4f
    X86_AT(c, 0xd6f25u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6f27  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6f27u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6f2a  push eax
    X86_AT(c, 0xd6f2au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6f2b  call 0xe665c
    X86_AT(c, 0xd6f2bu);
    push32(c, 0xd6f30u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6f30u);
    X86_TICK(c, 13);
    // 0d6f30  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6f30u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6f33  push eax
    X86_AT(c, 0xd6f33u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6f34  mov edx, eax
    X86_AT(c, 0xd6f34u);
    c.r[2] = c.r[0];
    // 0d6f36  call 0xd6b3c
    X86_AT(c, 0xd6f36u);
    push32(c, 0xd6f3bu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6f3bu);
    X86_TICK(c, 9);
    // 0d6f3b  push eax
    X86_AT(c, 0xd6f3bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6f3c  call 0xc7930
    X86_AT(c, 0xd6f3cu);
    push32(c, 0xd6f41u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6f41u);
    X86_TICK(c, 21);
    // 0d6f41  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6f41u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6f44  mov dword ptr [edx + 0xb0556], eax
    X86_AT(c, 0xd6f44u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0556u)), c.r[0]);
    // 0d6f4a  push edi
    X86_AT(c, 0xd6f4au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6f4b  push 0x4f
    X86_AT(c, 0xd6f4bu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6f4d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6f4du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6f50  push eax
    X86_AT(c, 0xd6f50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6f51  call 0xe665c
    X86_AT(c, 0xd6f51u);
    push32(c, 0xd6f56u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6f56u);
    X86_TICK(c, 13);
    // 0d6f56  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6f56u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6f59  push eax
    X86_AT(c, 0xd6f59u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6f5a  mov edx, eax
    X86_AT(c, 0xd6f5au);
    c.r[2] = c.r[0];
    // 0d6f5c  call 0xd6b3c
    X86_AT(c, 0xd6f5cu);
    push32(c, 0xd6f61u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6f61u);
    X86_TICK(c, 9);
    // 0d6f61  push eax
    X86_AT(c, 0xd6f61u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6f62  call 0xc7930
    X86_AT(c, 0xd6f62u);
    push32(c, 0xd6f67u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6f67u);
    X86_TICK(c, 23);
    // 0d6f67  add esp, 0x3c
    X86_AT(c, 0xd6f67u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d6f6a  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6f6au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6f6d  mov dword ptr [edx + 0xb055a], eax
    X86_AT(c, 0xd6f6du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB055Au)), c.r[0]);
    // 0d6f73  push edi
    X86_AT(c, 0xd6f73u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6f74  push 0x4f
    X86_AT(c, 0xd6f74u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6f76  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6f76u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6f79  push eax
    X86_AT(c, 0xd6f79u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6f7a  call 0xe665c
    X86_AT(c, 0xd6f7au);
    push32(c, 0xd6f7fu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6f7fu);
    X86_TICK(c, 13);
    // 0d6f7f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6f7fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6f82  push eax
    X86_AT(c, 0xd6f82u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6f83  mov edx, eax
    X86_AT(c, 0xd6f83u);
    c.r[2] = c.r[0];
    // 0d6f85  call 0xd6b3c
    X86_AT(c, 0xd6f85u);
    push32(c, 0xd6f8au); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6f8au);
    X86_TICK(c, 9);
    // 0d6f8a  push eax
    X86_AT(c, 0xd6f8au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6f8b  call 0xc7930
    X86_AT(c, 0xd6f8bu);
    push32(c, 0xd6f90u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6f90u);
    X86_TICK(c, 21);
    // 0d6f90  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6f90u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6f93  mov dword ptr [edx + 0xb055e], eax
    X86_AT(c, 0xd6f93u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB055Eu)), c.r[0]);
    // 0d6f99  push edi
    X86_AT(c, 0xd6f99u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6f9a  push 0x4f
    X86_AT(c, 0xd6f9au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6f9c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6f9cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6f9f  push eax
    X86_AT(c, 0xd6f9fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6fa0  call 0xe665c
    X86_AT(c, 0xd6fa0u);
    push32(c, 0xd6fa5u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6fa5u);
    X86_TICK(c, 15);
    // 0d6fa5  add esp, 0x20
    X86_AT(c, 0xd6fa5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d6fa8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6fa8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6fab  push eax
    X86_AT(c, 0xd6fabu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6fac  mov edx, eax
    X86_AT(c, 0xd6facu);
    c.r[2] = c.r[0];
    // 0d6fae  call 0xd6b3c
    X86_AT(c, 0xd6faeu);
    push32(c, 0xd6fb3u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6fb3u);
    X86_TICK(c, 9);
    // 0d6fb3  push eax
    X86_AT(c, 0xd6fb3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6fb4  call 0xc7930
    X86_AT(c, 0xd6fb4u);
    push32(c, 0xd6fb9u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6fb9u);
    X86_TICK(c, 43);
    // 0d6fb9  mov edx, 0xb01a8
    X86_AT(c, 0xd6fb9u);
    c.r[2] = 0xB01A8u;
    // 0d6fbe  imul ecx, esi, 0x21a
    X86_AT(c, 0xd6fbeu);
    c.r[1] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d6fc4  mov dword ptr [edx + ecx*1 + 0x3be], eax
    X86_AT(c, 0xd6fc4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] + 0x3BEu)), c.r[0]);
    // 0d6fcb  push edi
    X86_AT(c, 0xd6fcbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6fcc  push 0x4f
    X86_AT(c, 0xd6fccu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6fce  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6fceu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6fd1  push eax
    X86_AT(c, 0xd6fd1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6fd2  mov dword ptr [ebp - 0x5c], ecx
    X86_AT(c, 0xd6fd2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)), c.r[1]);
    // 0d6fd5  call 0xe665c
    X86_AT(c, 0xd6fd5u);
    push32(c, 0xd6fdau); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd6fdau);
    X86_TICK(c, 13);
    // 0d6fda  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6fdau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6fdd  push eax
    X86_AT(c, 0xd6fddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6fde  mov edx, eax
    X86_AT(c, 0xd6fdeu);
    c.r[2] = c.r[0];
    // 0d6fe0  call 0xd6b3c
    X86_AT(c, 0xd6fe0u);
    push32(c, 0xd6fe5u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd6fe5u);
    X86_TICK(c, 9);
    // 0d6fe5  push eax
    X86_AT(c, 0xd6fe5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6fe6  call 0xc7930
    X86_AT(c, 0xd6fe6u);
    push32(c, 0xd6febu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd6febu);
    X86_TICK(c, 21);
    // 0d6feb  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd6febu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d6fee  mov dword ptr [edx + 0xb056a], eax
    X86_AT(c, 0xd6feeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB056Au)), c.r[0]);
    // 0d6ff4  push edi
    X86_AT(c, 0xd6ff4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d6ff5  push 0x4f
    X86_AT(c, 0xd6ff5u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d6ff7  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd6ff7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d6ffa  push eax
    X86_AT(c, 0xd6ffau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6ffb  call 0xe665c
    X86_AT(c, 0xd6ffbu);
    push32(c, 0xd7000u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7000u);
    X86_TICK(c, 13);
    // 0d7000  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7000u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7003  push eax
    X86_AT(c, 0xd7003u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7004  mov edx, eax
    X86_AT(c, 0xd7004u);
    c.r[2] = c.r[0];
    // 0d7006  call 0xd6b3c
    X86_AT(c, 0xd7006u);
    push32(c, 0xd700bu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd700bu);
    X86_TICK(c, 9);
    // 0d700b  push eax
    X86_AT(c, 0xd700bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d700c  call 0xc7930
    X86_AT(c, 0xd700cu);
    push32(c, 0xd7011u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7011u);
    X86_TICK(c, 21);
    // 0d7011  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7011u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7014  mov dword ptr [edx + 0xb056e], eax
    X86_AT(c, 0xd7014u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB056Eu)), c.r[0]);
    // 0d701a  push edi
    X86_AT(c, 0xd701au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d701b  push 0x4f
    X86_AT(c, 0xd701bu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d701d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd701du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7020  push eax
    X86_AT(c, 0xd7020u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7021  call 0xe665c
    X86_AT(c, 0xd7021u);
    push32(c, 0xd7026u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7026u);
    X86_TICK(c, 15);
    // 0d7026  add esp, 0x3c
    X86_AT(c, 0xd7026u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7029  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7029u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d702c  push eax
    X86_AT(c, 0xd702cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d702d  mov edx, eax
    X86_AT(c, 0xd702du);
    c.r[2] = c.r[0];
    // 0d702f  call 0xd6b3c
    X86_AT(c, 0xd702fu);
    push32(c, 0xd7034u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7034u);
    X86_TICK(c, 9);
    // 0d7034  push eax
    X86_AT(c, 0xd7034u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7035  call 0xc7930
    X86_AT(c, 0xd7035u);
    push32(c, 0xd703au); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd703au);
    X86_TICK(c, 21);
    // 0d703a  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd703au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d703d  mov dword ptr [edx + 0xb0572], eax
    X86_AT(c, 0xd703du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0572u)), c.r[0]);
    // 0d7043  push edi
    X86_AT(c, 0xd7043u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7044  push 0x4f
    X86_AT(c, 0xd7044u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7046  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7046u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7049  push eax
    X86_AT(c, 0xd7049u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d704a  call 0xe665c
    X86_AT(c, 0xd704au);
    push32(c, 0xd704fu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd704fu);
    X86_TICK(c, 13);
    // 0d704f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd704fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7052  push eax
    X86_AT(c, 0xd7052u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7053  mov edx, eax
    X86_AT(c, 0xd7053u);
    c.r[2] = c.r[0];
    // 0d7055  call 0xd6b3c
    X86_AT(c, 0xd7055u);
    push32(c, 0xd705au); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd705au);
    X86_TICK(c, 9);
    // 0d705a  push eax
    X86_AT(c, 0xd705au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d705b  call 0xc7930
    X86_AT(c, 0xd705bu);
    push32(c, 0xd7060u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7060u);
    X86_TICK(c, 21);
    // 0d7060  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7060u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7063  mov dword ptr [edx + 0xb0576], eax
    X86_AT(c, 0xd7063u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0576u)), c.r[0]);
    // 0d7069  push edi
    X86_AT(c, 0xd7069u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d706a  push 0x4f
    X86_AT(c, 0xd706au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d706c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd706cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d706f  push eax
    X86_AT(c, 0xd706fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7070  call 0xe665c
    X86_AT(c, 0xd7070u);
    push32(c, 0xd7075u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7075u);
    X86_TICK(c, 13);
    // 0d7075  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7075u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7078  push eax
    X86_AT(c, 0xd7078u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7079  mov edx, eax
    X86_AT(c, 0xd7079u);
    c.r[2] = c.r[0];
    // 0d707b  call 0xd6b3c
    X86_AT(c, 0xd707bu);
    push32(c, 0xd7080u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7080u);
    X86_TICK(c, 9);
    // 0d7080  push eax
    X86_AT(c, 0xd7080u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7081  call 0xc7930
    X86_AT(c, 0xd7081u);
    push32(c, 0xd7086u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7086u);
    X86_TICK(c, 21);
    // 0d7086  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7086u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7089  mov dword ptr [edx + 0xb057a], eax
    X86_AT(c, 0xd7089u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB057Au)), c.r[0]);
    // 0d708f  push edi
    X86_AT(c, 0xd708fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7090  push 0x4f
    X86_AT(c, 0xd7090u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7092  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7092u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7095  push eax
    X86_AT(c, 0xd7095u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7096  call 0xe665c
    X86_AT(c, 0xd7096u);
    push32(c, 0xd709bu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd709bu);
    X86_TICK(c, 15);
    // 0d709b  add esp, 0x3c
    X86_AT(c, 0xd709bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d709e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd709eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d70a1  push eax
    X86_AT(c, 0xd70a1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d70a2  mov edx, eax
    X86_AT(c, 0xd70a2u);
    c.r[2] = c.r[0];
    // 0d70a4  call 0xd6b3c
    X86_AT(c, 0xd70a4u);
    push32(c, 0xd70a9u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd70a9u);
    X86_TICK(c, 9);
    // 0d70a9  push eax
    X86_AT(c, 0xd70a9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d70aa  call 0xc7930
    X86_AT(c, 0xd70aau);
    push32(c, 0xd70afu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd70afu);
    X86_TICK(c, 21);
    // 0d70af  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd70afu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d70b2  mov dword ptr [edx + 0xb057e], eax
    X86_AT(c, 0xd70b2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB057Eu)), c.r[0]);
    // 0d70b8  push edi
    X86_AT(c, 0xd70b8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d70b9  push 0x4f
    X86_AT(c, 0xd70b9u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d70bb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd70bbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d70be  push eax
    X86_AT(c, 0xd70beu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d70bf  call 0xe665c
    X86_AT(c, 0xd70bfu);
    push32(c, 0xd70c4u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd70c4u);
    X86_TICK(c, 11);
    // 0d70c4  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd70c4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d70c7  push eax
    X86_AT(c, 0xd70c7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d70c8  call 0xd6b3c
    X86_AT(c, 0xd70c8u);
    push32(c, 0xd70cdu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd70cdu);
    X86_TICK(c, 9);
    // 0d70cd  push eax
    X86_AT(c, 0xd70cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d70ce  call 0xc7930
    X86_AT(c, 0xd70ceu);
    push32(c, 0xd70d3u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd70d3u);
    X86_TICK(c, 23);
    // 0d70d3  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd70d3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d70d6  mov dword ptr [edx + 0xb0582], eax
    X86_AT(c, 0xd70d6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0582u)), c.r[0]);
    // 0d70dc  add esp, 0x1c
    X86_AT(c, 0xd70dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d70df  push edi
    X86_AT(c, 0xd70dfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d70e0  push 0x4f
    X86_AT(c, 0xd70e0u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d70e2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd70e2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d70e5  push eax
    X86_AT(c, 0xd70e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d70e6  call 0xe665c
    X86_AT(c, 0xd70e6u);
    push32(c, 0xd70ebu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd70ebu);
    X86_TICK(c, 13);
    // 0d70eb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd70ebu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d70ee  push eax
    X86_AT(c, 0xd70eeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d70ef  mov edx, eax
    X86_AT(c, 0xd70efu);
    c.r[2] = c.r[0];
    // 0d70f1  call 0xd6b3c
    X86_AT(c, 0xd70f1u);
    push32(c, 0xd70f6u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd70f6u);
    X86_TICK(c, 9);
    // 0d70f6  push eax
    X86_AT(c, 0xd70f6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d70f7  call 0xc7930
    X86_AT(c, 0xd70f7u);
    push32(c, 0xd70fcu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd70fcu);
    X86_TICK(c, 41);
    // 0d70fc  imul edx, esi, 0x21a
    X86_AT(c, 0xd70fcu);
    c.r[2] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d7102  mov dword ptr [edx + 0xb0586], eax
    X86_AT(c, 0xd7102u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0586u)), c.r[0]);
    // 0d7108  push edi
    X86_AT(c, 0xd7108u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7109  push 0x4f
    X86_AT(c, 0xd7109u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d710b  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd710bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d710e  push eax
    X86_AT(c, 0xd710eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d710f  mov dword ptr [ebp - 0x5c], edx
    X86_AT(c, 0xd710fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)), c.r[2]);
    // 0d7112  call 0xe665c
    X86_AT(c, 0xd7112u);
    push32(c, 0xd7117u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7117u);
    X86_TICK(c, 13);
    // 0d7117  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7117u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d711a  push eax
    X86_AT(c, 0xd711au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d711b  mov edx, eax
    X86_AT(c, 0xd711bu);
    c.r[2] = c.r[0];
    // 0d711d  call 0xd6b3c
    X86_AT(c, 0xd711du);
    push32(c, 0xd7122u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7122u);
    X86_TICK(c, 9);
    // 0d7122  push eax
    X86_AT(c, 0xd7122u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7123  call 0xc7930
    X86_AT(c, 0xd7123u);
    push32(c, 0xd7128u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7128u);
    X86_TICK(c, 21);
    // 0d7128  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7128u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d712b  mov dword ptr [edx + 0xb058a], eax
    X86_AT(c, 0xd712bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB058Au)), c.r[0]);
    // 0d7131  push edi
    X86_AT(c, 0xd7131u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7132  push 0x4f
    X86_AT(c, 0xd7132u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7134  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7134u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7137  push eax
    X86_AT(c, 0xd7137u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7138  call 0xe665c
    X86_AT(c, 0xd7138u);
    push32(c, 0xd713du); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd713du);
    X86_TICK(c, 13);
    // 0d713d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd713du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7140  push eax
    X86_AT(c, 0xd7140u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7141  mov edx, eax
    X86_AT(c, 0xd7141u);
    c.r[2] = c.r[0];
    // 0d7143  call 0xd6b3c
    X86_AT(c, 0xd7143u);
    push32(c, 0xd7148u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7148u);
    X86_TICK(c, 9);
    // 0d7148  push eax
    X86_AT(c, 0xd7148u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7149  call 0xc7930
    X86_AT(c, 0xd7149u);
    push32(c, 0xd714eu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd714eu);
    X86_TICK(c, 23);
    // 0d714e  add esp, 0x3c
    X86_AT(c, 0xd714eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7151  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7151u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7154  mov dword ptr [edx + 0xb058e], eax
    X86_AT(c, 0xd7154u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB058Eu)), c.r[0]);
    // 0d715a  push edi
    X86_AT(c, 0xd715au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d715b  push 0x4f
    X86_AT(c, 0xd715bu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d715d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd715du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7160  push eax
    X86_AT(c, 0xd7160u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7161  call 0xe665c
    X86_AT(c, 0xd7161u);
    push32(c, 0xd7166u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7166u);
    X86_TICK(c, 13);
    // 0d7166  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7166u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7169  push eax
    X86_AT(c, 0xd7169u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d716a  mov edx, eax
    X86_AT(c, 0xd716au);
    c.r[2] = c.r[0];
    // 0d716c  call 0xd6b3c
    X86_AT(c, 0xd716cu);
    push32(c, 0xd7171u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7171u);
    X86_TICK(c, 9);
    // 0d7171  push eax
    X86_AT(c, 0xd7171u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7172  call 0xc7930
    X86_AT(c, 0xd7172u);
    push32(c, 0xd7177u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7177u);
    X86_TICK(c, 21);
    // 0d7177  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7177u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d717a  mov dword ptr [edx + 0xb0592], eax
    X86_AT(c, 0xd717au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0592u)), c.r[0]);
    // 0d7180  push edi
    X86_AT(c, 0xd7180u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7181  push 0x4f
    X86_AT(c, 0xd7181u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7183  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7183u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7186  push eax
    X86_AT(c, 0xd7186u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7187  call 0xe665c
    X86_AT(c, 0xd7187u);
    push32(c, 0xd718cu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd718cu);
    X86_TICK(c, 13);
    // 0d718c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd718cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d718f  push eax
    X86_AT(c, 0xd718fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7190  mov edx, eax
    X86_AT(c, 0xd7190u);
    c.r[2] = c.r[0];
    // 0d7192  call 0xd6b3c
    X86_AT(c, 0xd7192u);
    push32(c, 0xd7197u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7197u);
    X86_TICK(c, 9);
    // 0d7197  push eax
    X86_AT(c, 0xd7197u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7198  call 0xc7930
    X86_AT(c, 0xd7198u);
    push32(c, 0xd719du); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd719du);
    X86_TICK(c, 21);
    // 0d719d  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd719du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d71a0  mov dword ptr [edx + 0xb0596], eax
    X86_AT(c, 0xd71a0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0596u)), c.r[0]);
    // 0d71a6  push edi
    X86_AT(c, 0xd71a6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d71a7  push 0x4f
    X86_AT(c, 0xd71a7u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d71a9  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd71a9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d71ac  push eax
    X86_AT(c, 0xd71acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d71ad  call 0xe665c
    X86_AT(c, 0xd71adu);
    push32(c, 0xd71b2u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd71b2u);
    X86_TICK(c, 13);
    // 0d71b2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd71b2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d71b5  push eax
    X86_AT(c, 0xd71b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d71b6  mov edx, eax
    X86_AT(c, 0xd71b6u);
    c.r[2] = c.r[0];
    // 0d71b8  call 0xd6b3c
    X86_AT(c, 0xd71b8u);
    push32(c, 0xd71bdu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd71bdu);
    X86_TICK(c, 9);
    // 0d71bd  push eax
    X86_AT(c, 0xd71bdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d71be  call 0xc7930
    X86_AT(c, 0xd71beu);
    push32(c, 0xd71c3u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd71c3u);
    X86_TICK(c, 23);
    // 0d71c3  add esp, 0x3c
    X86_AT(c, 0xd71c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d71c6  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd71c6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d71c9  mov dword ptr [edx + 0xb059a], eax
    X86_AT(c, 0xd71c9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB059Au)), c.r[0]);
    // 0d71cf  push edi
    X86_AT(c, 0xd71cfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d71d0  push 0x4f
    X86_AT(c, 0xd71d0u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d71d2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd71d2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d71d5  push eax
    X86_AT(c, 0xd71d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d71d6  call 0xe665c
    X86_AT(c, 0xd71d6u);
    push32(c, 0xd71dbu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd71dbu);
    X86_TICK(c, 13);
    // 0d71db  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd71dbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d71de  push eax
    X86_AT(c, 0xd71deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d71df  mov edx, eax
    X86_AT(c, 0xd71dfu);
    c.r[2] = c.r[0];
    // 0d71e1  call 0xd6b3c
    X86_AT(c, 0xd71e1u);
    push32(c, 0xd71e6u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd71e6u);
    X86_TICK(c, 9);
    // 0d71e6  push eax
    X86_AT(c, 0xd71e6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d71e7  call 0xc7930
    X86_AT(c, 0xd71e7u);
    push32(c, 0xd71ecu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd71ecu);
    X86_TICK(c, 21);
    // 0d71ec  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd71ecu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d71ef  mov dword ptr [edx + 0xb059e], eax
    X86_AT(c, 0xd71efu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB059Eu)), c.r[0]);
    // 0d71f5  push edi
    X86_AT(c, 0xd71f5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d71f6  push 0x4f
    X86_AT(c, 0xd71f6u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d71f8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd71f8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d71fb  push eax
    X86_AT(c, 0xd71fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d71fc  call 0xe665c
    X86_AT(c, 0xd71fcu);
    push32(c, 0xd7201u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7201u);
    X86_TICK(c, 15);
    // 0d7201  add esp, 0x20
    X86_AT(c, 0xd7201u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d7204  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7204u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7207  push eax
    X86_AT(c, 0xd7207u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7208  mov edx, eax
    X86_AT(c, 0xd7208u);
    c.r[2] = c.r[0];
    // 0d720a  call 0xd6b3c
    X86_AT(c, 0xd720au);
    push32(c, 0xd720fu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd720fu);
    X86_TICK(c, 9);
    // 0d720f  push eax
    X86_AT(c, 0xd720fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7210  call 0xc7930
    X86_AT(c, 0xd7210u);
    push32(c, 0xd7215u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7215u);
    X86_TICK(c, 43);
    // 0d7215  mov edx, 0xb01a8
    X86_AT(c, 0xd7215u);
    c.r[2] = 0xB01A8u;
    // 0d721a  imul ecx, esi, 0x21a
    X86_AT(c, 0xd721au);
    c.r[1] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d7220  mov dword ptr [edx + ecx*1 + 0x3fa], eax
    X86_AT(c, 0xd7220u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] + 0x3FAu)), c.r[0]);
    // 0d7227  push edi
    X86_AT(c, 0xd7227u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7228  push 0x4f
    X86_AT(c, 0xd7228u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d722a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd722au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d722d  push eax
    X86_AT(c, 0xd722du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d722e  mov dword ptr [ebp - 0x5c], ecx
    X86_AT(c, 0xd722eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)), c.r[1]);
    // 0d7231  call 0xe665c
    X86_AT(c, 0xd7231u);
    push32(c, 0xd7236u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7236u);
    X86_TICK(c, 13);
    // 0d7236  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7236u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7239  push eax
    X86_AT(c, 0xd7239u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d723a  mov edx, eax
    X86_AT(c, 0xd723au);
    c.r[2] = c.r[0];
    // 0d723c  call 0xd6b3c
    X86_AT(c, 0xd723cu);
    push32(c, 0xd7241u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7241u);
    X86_TICK(c, 9);
    // 0d7241  push eax
    X86_AT(c, 0xd7241u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7242  call 0xc7930
    X86_AT(c, 0xd7242u);
    push32(c, 0xd7247u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7247u);
    X86_TICK(c, 21);
    // 0d7247  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7247u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d724a  mov dword ptr [edx + 0xb05a6], eax
    X86_AT(c, 0xd724au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05A6u)), c.r[0]);
    // 0d7250  push edi
    X86_AT(c, 0xd7250u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7251  push 0x4f
    X86_AT(c, 0xd7251u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7253  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7253u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7256  push eax
    X86_AT(c, 0xd7256u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7257  call 0xe665c
    X86_AT(c, 0xd7257u);
    push32(c, 0xd725cu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd725cu);
    X86_TICK(c, 13);
    // 0d725c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd725cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d725f  push eax
    X86_AT(c, 0xd725fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7260  mov edx, eax
    X86_AT(c, 0xd7260u);
    c.r[2] = c.r[0];
    // 0d7262  call 0xd6b3c
    X86_AT(c, 0xd7262u);
    push32(c, 0xd7267u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7267u);
    X86_TICK(c, 9);
    // 0d7267  push eax
    X86_AT(c, 0xd7267u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7268  call 0xc7930
    X86_AT(c, 0xd7268u);
    push32(c, 0xd726du); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd726du);
    X86_TICK(c, 21);
    // 0d726d  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd726du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7270  mov dword ptr [edx + 0xb05aa], eax
    X86_AT(c, 0xd7270u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05AAu)), c.r[0]);
    // 0d7276  push edi
    X86_AT(c, 0xd7276u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7277  push 0x4f
    X86_AT(c, 0xd7277u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7279  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7279u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d727c  push eax
    X86_AT(c, 0xd727cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d727d  call 0xe665c
    X86_AT(c, 0xd727du);
    push32(c, 0xd7282u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7282u);
    X86_TICK(c, 15);
    // 0d7282  add esp, 0x3c
    X86_AT(c, 0xd7282u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7285  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7285u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7288  push eax
    X86_AT(c, 0xd7288u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7289  mov edx, eax
    X86_AT(c, 0xd7289u);
    c.r[2] = c.r[0];
    // 0d728b  call 0xd6b3c
    X86_AT(c, 0xd728bu);
    push32(c, 0xd7290u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7290u);
    X86_TICK(c, 9);
    // 0d7290  push eax
    X86_AT(c, 0xd7290u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7291  call 0xc7930
    X86_AT(c, 0xd7291u);
    push32(c, 0xd7296u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7296u);
    X86_TICK(c, 21);
    // 0d7296  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7296u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7299  mov dword ptr [edx + 0xb05ae], eax
    X86_AT(c, 0xd7299u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05AEu)), c.r[0]);
    // 0d729f  push edi
    X86_AT(c, 0xd729fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d72a0  push 0x4f
    X86_AT(c, 0xd72a0u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d72a2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd72a2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d72a5  push eax
    X86_AT(c, 0xd72a5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d72a6  call 0xe665c
    X86_AT(c, 0xd72a6u);
    push32(c, 0xd72abu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd72abu);
    X86_TICK(c, 13);
    // 0d72ab  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd72abu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d72ae  push eax
    X86_AT(c, 0xd72aeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d72af  mov edx, eax
    X86_AT(c, 0xd72afu);
    c.r[2] = c.r[0];
    // 0d72b1  call 0xd6b3c
    X86_AT(c, 0xd72b1u);
    push32(c, 0xd72b6u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd72b6u);
    X86_TICK(c, 9);
    // 0d72b6  push eax
    X86_AT(c, 0xd72b6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d72b7  call 0xc7930
    X86_AT(c, 0xd72b7u);
    push32(c, 0xd72bcu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd72bcu);
    X86_TICK(c, 21);
    // 0d72bc  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd72bcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d72bf  mov dword ptr [edx + 0xb05b2], eax
    X86_AT(c, 0xd72bfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05B2u)), c.r[0]);
    // 0d72c5  push edi
    X86_AT(c, 0xd72c5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d72c6  push 0x4f
    X86_AT(c, 0xd72c6u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d72c8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd72c8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d72cb  push eax
    X86_AT(c, 0xd72cbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d72cc  call 0xe665c
    X86_AT(c, 0xd72ccu);
    push32(c, 0xd72d1u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd72d1u);
    X86_TICK(c, 13);
    // 0d72d1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd72d1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d72d4  push eax
    X86_AT(c, 0xd72d4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d72d5  mov edx, eax
    X86_AT(c, 0xd72d5u);
    c.r[2] = c.r[0];
    // 0d72d7  call 0xd6b3c
    X86_AT(c, 0xd72d7u);
    push32(c, 0xd72dcu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd72dcu);
    X86_TICK(c, 9);
    // 0d72dc  push eax
    X86_AT(c, 0xd72dcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d72dd  call 0xc7930
    X86_AT(c, 0xd72ddu);
    push32(c, 0xd72e2u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd72e2u);
    X86_TICK(c, 21);
    // 0d72e2  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd72e2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d72e5  mov dword ptr [edx + 0xb05b6], eax
    X86_AT(c, 0xd72e5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05B6u)), c.r[0]);
    // 0d72eb  push edi
    X86_AT(c, 0xd72ebu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d72ec  push 0x4f
    X86_AT(c, 0xd72ecu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d72ee  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd72eeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d72f1  push eax
    X86_AT(c, 0xd72f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d72f2  call 0xe665c
    X86_AT(c, 0xd72f2u);
    push32(c, 0xd72f7u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd72f7u);
    X86_TICK(c, 15);
    // 0d72f7  add esp, 0x3c
    X86_AT(c, 0xd72f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d72fa  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd72fau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d72fd  push eax
    X86_AT(c, 0xd72fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d72fe  mov edx, eax
    X86_AT(c, 0xd72feu);
    c.r[2] = c.r[0];
    // 0d7300  call 0xd6b3c
    X86_AT(c, 0xd7300u);
    push32(c, 0xd7305u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7305u);
    X86_TICK(c, 9);
    // 0d7305  push eax
    X86_AT(c, 0xd7305u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7306  call 0xc7930
    X86_AT(c, 0xd7306u);
    push32(c, 0xd730bu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd730bu);
    X86_TICK(c, 21);
    // 0d730b  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd730bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d730e  mov dword ptr [edx + 0xb05ba], eax
    X86_AT(c, 0xd730eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05BAu)), c.r[0]);
    // 0d7314  push edi
    X86_AT(c, 0xd7314u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7315  push 0x4f
    X86_AT(c, 0xd7315u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7317  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7317u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d731a  push eax
    X86_AT(c, 0xd731au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d731b  call 0xe665c
    X86_AT(c, 0xd731bu);
    push32(c, 0xd7320u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7320u);
    X86_TICK(c, 11);
    // 0d7320  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7320u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7323  push eax
    X86_AT(c, 0xd7323u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7324  call 0xd6b3c
    X86_AT(c, 0xd7324u);
    push32(c, 0xd7329u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7329u);
    X86_TICK(c, 9);
    // 0d7329  push eax
    X86_AT(c, 0xd7329u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d732a  call 0xc7930
    X86_AT(c, 0xd732au);
    push32(c, 0xd732fu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd732fu);
    X86_TICK(c, 23);
    // 0d732f  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd732fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7332  mov dword ptr [edx + 0xb05be], eax
    X86_AT(c, 0xd7332u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05BEu)), c.r[0]);
    // 0d7338  add esp, 0x1c
    X86_AT(c, 0xd7338u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d733b  push edi
    X86_AT(c, 0xd733bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d733c  push 0x4f
    X86_AT(c, 0xd733cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d733e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd733eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7341  push eax
    X86_AT(c, 0xd7341u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7342  call 0xe665c
    X86_AT(c, 0xd7342u);
    push32(c, 0xd7347u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7347u);
    X86_TICK(c, 13);
    // 0d7347  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7347u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d734a  push eax
    X86_AT(c, 0xd734au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d734b  mov edx, eax
    X86_AT(c, 0xd734bu);
    c.r[2] = c.r[0];
    // 0d734d  call 0xd6b3c
    X86_AT(c, 0xd734du);
    push32(c, 0xd7352u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7352u);
    X86_TICK(c, 9);
    // 0d7352  push eax
    X86_AT(c, 0xd7352u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7353  call 0xc7930
    X86_AT(c, 0xd7353u);
    push32(c, 0xd7358u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7358u);
    X86_TICK(c, 41);
    // 0d7358  imul edx, esi, 0x21a
    X86_AT(c, 0xd7358u);
    c.r[2] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d735e  mov dword ptr [edx + 0xb05c2], eax
    X86_AT(c, 0xd735eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05C2u)), c.r[0]);
    // 0d7364  push edi
    X86_AT(c, 0xd7364u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7365  push 0x4f
    X86_AT(c, 0xd7365u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7367  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7367u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d736a  push eax
    X86_AT(c, 0xd736au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d736b  mov dword ptr [ebp - 0x5c], edx
    X86_AT(c, 0xd736bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)), c.r[2]);
    // 0d736e  call 0xe665c
    X86_AT(c, 0xd736eu);
    push32(c, 0xd7373u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7373u);
    X86_TICK(c, 13);
    // 0d7373  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7373u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7376  push eax
    X86_AT(c, 0xd7376u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7377  mov edx, eax
    X86_AT(c, 0xd7377u);
    c.r[2] = c.r[0];
    // 0d7379  call 0xd6b3c
    X86_AT(c, 0xd7379u);
    push32(c, 0xd737eu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd737eu);
    X86_TICK(c, 9);
    // 0d737e  push eax
    X86_AT(c, 0xd737eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d737f  call 0xc7930
    X86_AT(c, 0xd737fu);
    push32(c, 0xd7384u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7384u);
    X86_TICK(c, 21);
    // 0d7384  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7384u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7387  mov dword ptr [edx + 0xb05c6], eax
    X86_AT(c, 0xd7387u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05C6u)), c.r[0]);
    // 0d738d  push edi
    X86_AT(c, 0xd738du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d738e  push 0x4f
    X86_AT(c, 0xd738eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7390  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7390u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7393  push eax
    X86_AT(c, 0xd7393u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7394  call 0xe665c
    X86_AT(c, 0xd7394u);
    push32(c, 0xd7399u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7399u);
    X86_TICK(c, 13);
    // 0d7399  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7399u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d739c  push eax
    X86_AT(c, 0xd739cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d739d  mov edx, eax
    X86_AT(c, 0xd739du);
    c.r[2] = c.r[0];
    // 0d739f  call 0xd6b3c
    X86_AT(c, 0xd739fu);
    push32(c, 0xd73a4u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd73a4u);
    X86_TICK(c, 9);
    // 0d73a4  push eax
    X86_AT(c, 0xd73a4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d73a5  call 0xc7930
    X86_AT(c, 0xd73a5u);
    push32(c, 0xd73aau); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd73aau);
    X86_TICK(c, 23);
    // 0d73aa  add esp, 0x3c
    X86_AT(c, 0xd73aau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d73ad  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd73adu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d73b0  mov dword ptr [edx + 0xb05ca], eax
    X86_AT(c, 0xd73b0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05CAu)), c.r[0]);
    // 0d73b6  push edi
    X86_AT(c, 0xd73b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d73b7  push 0x4f
    X86_AT(c, 0xd73b7u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d73b9  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd73b9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d73bc  push eax
    X86_AT(c, 0xd73bcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d73bd  call 0xe665c
    X86_AT(c, 0xd73bdu);
    push32(c, 0xd73c2u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd73c2u);
    X86_TICK(c, 13);
    // 0d73c2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd73c2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d73c5  push eax
    X86_AT(c, 0xd73c5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d73c6  mov edx, eax
    X86_AT(c, 0xd73c6u);
    c.r[2] = c.r[0];
    // 0d73c8  call 0xd6b3c
    X86_AT(c, 0xd73c8u);
    push32(c, 0xd73cdu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd73cdu);
    X86_TICK(c, 9);
    // 0d73cd  push eax
    X86_AT(c, 0xd73cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d73ce  call 0xc7930
    X86_AT(c, 0xd73ceu);
    push32(c, 0xd73d3u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd73d3u);
    X86_TICK(c, 21);
    // 0d73d3  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd73d3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d73d6  mov dword ptr [edx + 0xb05ce], eax
    X86_AT(c, 0xd73d6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05CEu)), c.r[0]);
    // 0d73dc  push edi
    X86_AT(c, 0xd73dcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d73dd  push 0x4f
    X86_AT(c, 0xd73ddu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d73df  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd73dfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d73e2  push eax
    X86_AT(c, 0xd73e2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d73e3  call 0xe665c
    X86_AT(c, 0xd73e3u);
    push32(c, 0xd73e8u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd73e8u);
    X86_TICK(c, 13);
    // 0d73e8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd73e8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d73eb  push eax
    X86_AT(c, 0xd73ebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d73ec  mov edx, eax
    X86_AT(c, 0xd73ecu);
    c.r[2] = c.r[0];
    // 0d73ee  call 0xd6b3c
    X86_AT(c, 0xd73eeu);
    push32(c, 0xd73f3u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd73f3u);
    X86_TICK(c, 9);
    // 0d73f3  push eax
    X86_AT(c, 0xd73f3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d73f4  call 0xc7930
    X86_AT(c, 0xd73f4u);
    push32(c, 0xd73f9u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd73f9u);
    X86_TICK(c, 21);
    // 0d73f9  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd73f9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d73fc  mov dword ptr [edx + 0xb05d2], eax
    X86_AT(c, 0xd73fcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05D2u)), c.r[0]);
    // 0d7402  push edi
    X86_AT(c, 0xd7402u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7403  push 0x4f
    X86_AT(c, 0xd7403u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7405  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7405u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7408  push eax
    X86_AT(c, 0xd7408u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7409  call 0xe665c
    X86_AT(c, 0xd7409u);
    push32(c, 0xd740eu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd740eu);
    X86_TICK(c, 13);
    // 0d740e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd740eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7411  push eax
    X86_AT(c, 0xd7411u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7412  mov edx, eax
    X86_AT(c, 0xd7412u);
    c.r[2] = c.r[0];
    // 0d7414  call 0xd6b3c
    X86_AT(c, 0xd7414u);
    push32(c, 0xd7419u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7419u);
    X86_TICK(c, 9);
    // 0d7419  push eax
    X86_AT(c, 0xd7419u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d741a  call 0xc7930
    X86_AT(c, 0xd741au);
    push32(c, 0xd741fu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd741fu);
    X86_TICK(c, 23);
    // 0d741f  add esp, 0x3c
    X86_AT(c, 0xd741fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7422  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7422u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7425  mov dword ptr [edx + 0xb05d6], eax
    X86_AT(c, 0xd7425u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05D6u)), c.r[0]);
    // 0d742b  push edi
    X86_AT(c, 0xd742bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d742c  push 0x4f
    X86_AT(c, 0xd742cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d742e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd742eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7431  push eax
    X86_AT(c, 0xd7431u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7432  call 0xe665c
    X86_AT(c, 0xd7432u);
    push32(c, 0xd7437u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7437u);
    X86_TICK(c, 13);
    // 0d7437  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7437u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d743a  push eax
    X86_AT(c, 0xd743au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d743b  mov edx, eax
    X86_AT(c, 0xd743bu);
    c.r[2] = c.r[0];
    // 0d743d  call 0xd6b3c
    X86_AT(c, 0xd743du);
    push32(c, 0xd7442u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7442u);
    X86_TICK(c, 9);
    // 0d7442  push eax
    X86_AT(c, 0xd7442u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7443  call 0xc7930
    X86_AT(c, 0xd7443u);
    push32(c, 0xd7448u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7448u);
    X86_TICK(c, 21);
    // 0d7448  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7448u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d744b  mov dword ptr [edx + 0xb05da], eax
    X86_AT(c, 0xd744bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05DAu)), c.r[0]);
    // 0d7451  push edi
    X86_AT(c, 0xd7451u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7452  push 0x4f
    X86_AT(c, 0xd7452u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7454  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7454u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7457  push eax
    X86_AT(c, 0xd7457u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7458  call 0xe665c
    X86_AT(c, 0xd7458u);
    push32(c, 0xd745du); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd745du);
    X86_TICK(c, 15);
    // 0d745d  add esp, 0x20
    X86_AT(c, 0xd745du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d7460  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7460u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7463  push eax
    X86_AT(c, 0xd7463u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7464  mov edx, eax
    X86_AT(c, 0xd7464u);
    c.r[2] = c.r[0];
    // 0d7466  call 0xd6b3c
    X86_AT(c, 0xd7466u);
    push32(c, 0xd746bu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd746bu);
    X86_TICK(c, 9);
    // 0d746b  push eax
    X86_AT(c, 0xd746bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d746c  call 0xc7930
    X86_AT(c, 0xd746cu);
    push32(c, 0xd7471u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7471u);
    X86_TICK(c, 43);
    // 0d7471  mov edx, 0xb01a8
    X86_AT(c, 0xd7471u);
    c.r[2] = 0xB01A8u;
    // 0d7476  imul ecx, esi, 0x21a
    X86_AT(c, 0xd7476u);
    c.r[1] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d747c  mov dword ptr [edx + ecx*1 + 0x436], eax
    X86_AT(c, 0xd747cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] + 0x436u)), c.r[0]);
    // 0d7483  push edi
    X86_AT(c, 0xd7483u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7484  push 0x4f
    X86_AT(c, 0xd7484u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7486  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7486u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7489  push eax
    X86_AT(c, 0xd7489u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d748a  mov dword ptr [ebp - 0x5c], ecx
    X86_AT(c, 0xd748au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)), c.r[1]);
    // 0d748d  call 0xe665c
    X86_AT(c, 0xd748du);
    push32(c, 0xd7492u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7492u);
    X86_TICK(c, 13);
    // 0d7492  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7492u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7495  push eax
    X86_AT(c, 0xd7495u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7496  mov edx, eax
    X86_AT(c, 0xd7496u);
    c.r[2] = c.r[0];
    // 0d7498  call 0xd6b3c
    X86_AT(c, 0xd7498u);
    push32(c, 0xd749du); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd749du);
    X86_TICK(c, 9);
    // 0d749d  push eax
    X86_AT(c, 0xd749du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d749e  call 0xc7930
    X86_AT(c, 0xd749eu);
    push32(c, 0xd74a3u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd74a3u);
    X86_TICK(c, 21);
    // 0d74a3  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd74a3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d74a6  mov dword ptr [edx + 0xb05e2], eax
    X86_AT(c, 0xd74a6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05E2u)), c.r[0]);
    // 0d74ac  push edi
    X86_AT(c, 0xd74acu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d74ad  push 0x4f
    X86_AT(c, 0xd74adu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d74af  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd74afu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d74b2  push eax
    X86_AT(c, 0xd74b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d74b3  call 0xe665c
    X86_AT(c, 0xd74b3u);
    push32(c, 0xd74b8u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd74b8u);
    X86_TICK(c, 13);
    // 0d74b8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd74b8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d74bb  push eax
    X86_AT(c, 0xd74bbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d74bc  mov edx, eax
    X86_AT(c, 0xd74bcu);
    c.r[2] = c.r[0];
    // 0d74be  call 0xd6b3c
    X86_AT(c, 0xd74beu);
    push32(c, 0xd74c3u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd74c3u);
    X86_TICK(c, 9);
    // 0d74c3  push eax
    X86_AT(c, 0xd74c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d74c4  call 0xc7930
    X86_AT(c, 0xd74c4u);
    push32(c, 0xd74c9u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd74c9u);
    X86_TICK(c, 21);
    // 0d74c9  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd74c9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d74cc  mov dword ptr [edx + 0xb05e6], eax
    X86_AT(c, 0xd74ccu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05E6u)), c.r[0]);
    // 0d74d2  push edi
    X86_AT(c, 0xd74d2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d74d3  push 0x4f
    X86_AT(c, 0xd74d3u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d74d5  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd74d5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d74d8  push eax
    X86_AT(c, 0xd74d8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d74d9  call 0xe665c
    X86_AT(c, 0xd74d9u);
    push32(c, 0xd74deu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd74deu);
    X86_TICK(c, 15);
    // 0d74de  add esp, 0x3c
    X86_AT(c, 0xd74deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d74e1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd74e1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d74e4  push eax
    X86_AT(c, 0xd74e4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d74e5  mov edx, eax
    X86_AT(c, 0xd74e5u);
    c.r[2] = c.r[0];
    // 0d74e7  call 0xd6b3c
    X86_AT(c, 0xd74e7u);
    push32(c, 0xd74ecu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd74ecu);
    X86_TICK(c, 9);
    // 0d74ec  push eax
    X86_AT(c, 0xd74ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d74ed  call 0xc7930
    X86_AT(c, 0xd74edu);
    push32(c, 0xd74f2u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd74f2u);
    X86_TICK(c, 21);
    // 0d74f2  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd74f2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d74f5  mov dword ptr [edx + 0xb05ea], eax
    X86_AT(c, 0xd74f5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05EAu)), c.r[0]);
    // 0d74fb  push edi
    X86_AT(c, 0xd74fbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d74fc  push 0x4f
    X86_AT(c, 0xd74fcu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d74fe  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd74feu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7501  push eax
    X86_AT(c, 0xd7501u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7502  call 0xe665c
    X86_AT(c, 0xd7502u);
    push32(c, 0xd7507u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7507u);
    X86_TICK(c, 13);
    // 0d7507  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7507u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d750a  push eax
    X86_AT(c, 0xd750au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d750b  mov edx, eax
    X86_AT(c, 0xd750bu);
    c.r[2] = c.r[0];
    // 0d750d  call 0xd6b3c
    X86_AT(c, 0xd750du);
    push32(c, 0xd7512u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7512u);
    X86_TICK(c, 9);
    // 0d7512  push eax
    X86_AT(c, 0xd7512u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7513  call 0xc7930
    X86_AT(c, 0xd7513u);
    push32(c, 0xd7518u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7518u);
    X86_TICK(c, 21);
    // 0d7518  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7518u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d751b  mov dword ptr [edx + 0xb05ee], eax
    X86_AT(c, 0xd751bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05EEu)), c.r[0]);
    // 0d7521  push edi
    X86_AT(c, 0xd7521u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7522  push 0x4f
    X86_AT(c, 0xd7522u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7524  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7524u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7527  push eax
    X86_AT(c, 0xd7527u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7528  call 0xe665c
    X86_AT(c, 0xd7528u);
    push32(c, 0xd752du); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd752du);
    X86_TICK(c, 13);
    // 0d752d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd752du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7530  push eax
    X86_AT(c, 0xd7530u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7531  mov edx, eax
    X86_AT(c, 0xd7531u);
    c.r[2] = c.r[0];
    // 0d7533  call 0xd6b3c
    X86_AT(c, 0xd7533u);
    push32(c, 0xd7538u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7538u);
    X86_TICK(c, 9);
    // 0d7538  push eax
    X86_AT(c, 0xd7538u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7539  call 0xc7930
    X86_AT(c, 0xd7539u);
    push32(c, 0xd753eu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd753eu);
    X86_TICK(c, 21);
    // 0d753e  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd753eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7541  mov dword ptr [edx + 0xb05f2], eax
    X86_AT(c, 0xd7541u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05F2u)), c.r[0]);
    // 0d7547  push edi
    X86_AT(c, 0xd7547u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7548  push 0x4f
    X86_AT(c, 0xd7548u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d754a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd754au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d754d  push eax
    X86_AT(c, 0xd754du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d754e  call 0xe665c
    X86_AT(c, 0xd754eu);
    push32(c, 0xd7553u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7553u);
    X86_TICK(c, 15);
    // 0d7553  add esp, 0x3c
    X86_AT(c, 0xd7553u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7556  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7556u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7559  push eax
    X86_AT(c, 0xd7559u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d755a  mov edx, eax
    X86_AT(c, 0xd755au);
    c.r[2] = c.r[0];
    // 0d755c  call 0xd6b3c
    X86_AT(c, 0xd755cu);
    push32(c, 0xd7561u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7561u);
    X86_TICK(c, 9);
    // 0d7561  push eax
    X86_AT(c, 0xd7561u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7562  call 0xc7930
    X86_AT(c, 0xd7562u);
    push32(c, 0xd7567u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7567u);
    X86_TICK(c, 21);
    // 0d7567  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7567u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d756a  mov dword ptr [edx + 0xb05f6], eax
    X86_AT(c, 0xd756au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05F6u)), c.r[0]);
    // 0d7570  push edi
    X86_AT(c, 0xd7570u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7571  push 0x4f
    X86_AT(c, 0xd7571u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7573  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7573u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7576  push eax
    X86_AT(c, 0xd7576u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7577  call 0xe665c
    X86_AT(c, 0xd7577u);
    push32(c, 0xd757cu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd757cu);
    X86_TICK(c, 11);
    // 0d757c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd757cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d757f  push eax
    X86_AT(c, 0xd757fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7580  call 0xd6b3c
    X86_AT(c, 0xd7580u);
    push32(c, 0xd7585u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7585u);
    X86_TICK(c, 9);
    // 0d7585  push eax
    X86_AT(c, 0xd7585u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7586  call 0xc7930
    X86_AT(c, 0xd7586u);
    push32(c, 0xd758bu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd758bu);
    X86_TICK(c, 23);
    // 0d758b  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd758bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d758e  mov dword ptr [edx + 0xb05fa], eax
    X86_AT(c, 0xd758eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05FAu)), c.r[0]);
    // 0d7594  add esp, 0x1c
    X86_AT(c, 0xd7594u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d7597  push edi
    X86_AT(c, 0xd7597u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7598  push 0x4f
    X86_AT(c, 0xd7598u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d759a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd759au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d759d  push eax
    X86_AT(c, 0xd759du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d759e  call 0xe665c
    X86_AT(c, 0xd759eu);
    push32(c, 0xd75a3u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd75a3u);
    X86_TICK(c, 13);
    // 0d75a3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd75a3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d75a6  push eax
    X86_AT(c, 0xd75a6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d75a7  mov edx, eax
    X86_AT(c, 0xd75a7u);
    c.r[2] = c.r[0];
    // 0d75a9  call 0xd6b3c
    X86_AT(c, 0xd75a9u);
    push32(c, 0xd75aeu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd75aeu);
    X86_TICK(c, 9);
    // 0d75ae  push eax
    X86_AT(c, 0xd75aeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d75af  call 0xc7930
    X86_AT(c, 0xd75afu);
    push32(c, 0xd75b4u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd75b4u);
    X86_TICK(c, 41);
    // 0d75b4  imul edx, esi, 0x21a
    X86_AT(c, 0xd75b4u);
    c.r[2] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d75ba  mov dword ptr [edx + 0xb05fe], eax
    X86_AT(c, 0xd75bau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB05FEu)), c.r[0]);
    // 0d75c0  push edi
    X86_AT(c, 0xd75c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d75c1  push 0x4f
    X86_AT(c, 0xd75c1u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d75c3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd75c3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d75c6  push eax
    X86_AT(c, 0xd75c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d75c7  mov dword ptr [ebp - 0x5c], edx
    X86_AT(c, 0xd75c7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)), c.r[2]);
    // 0d75ca  call 0xe665c
    X86_AT(c, 0xd75cau);
    push32(c, 0xd75cfu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd75cfu);
    X86_TICK(c, 13);
    // 0d75cf  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd75cfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d75d2  push eax
    X86_AT(c, 0xd75d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d75d3  mov edx, eax
    X86_AT(c, 0xd75d3u);
    c.r[2] = c.r[0];
    // 0d75d5  call 0xd6b3c
    X86_AT(c, 0xd75d5u);
    push32(c, 0xd75dau); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd75dau);
    X86_TICK(c, 9);
    // 0d75da  push eax
    X86_AT(c, 0xd75dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d75db  call 0xc7930
    X86_AT(c, 0xd75dbu);
    push32(c, 0xd75e0u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd75e0u);
    X86_TICK(c, 21);
    // 0d75e0  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd75e0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d75e3  mov dword ptr [edx + 0xb0602], eax
    X86_AT(c, 0xd75e3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0602u)), c.r[0]);
    // 0d75e9  push edi
    X86_AT(c, 0xd75e9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d75ea  push 0x4f
    X86_AT(c, 0xd75eau);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d75ec  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd75ecu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d75ef  push eax
    X86_AT(c, 0xd75efu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d75f0  call 0xe665c
    X86_AT(c, 0xd75f0u);
    push32(c, 0xd75f5u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd75f5u);
    X86_TICK(c, 13);
    // 0d75f5  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd75f5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d75f8  push eax
    X86_AT(c, 0xd75f8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d75f9  mov edx, eax
    X86_AT(c, 0xd75f9u);
    c.r[2] = c.r[0];
    // 0d75fb  call 0xd6b3c
    X86_AT(c, 0xd75fbu);
    push32(c, 0xd7600u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7600u);
    X86_TICK(c, 9);
    // 0d7600  push eax
    X86_AT(c, 0xd7600u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7601  call 0xc7930
    X86_AT(c, 0xd7601u);
    push32(c, 0xd7606u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7606u);
    X86_TICK(c, 23);
    // 0d7606  add esp, 0x3c
    X86_AT(c, 0xd7606u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7609  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7609u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d760c  mov dword ptr [edx + 0xb0606], eax
    X86_AT(c, 0xd760cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0606u)), c.r[0]);
    // 0d7612  push edi
    X86_AT(c, 0xd7612u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7613  push 0x4f
    X86_AT(c, 0xd7613u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7615  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7615u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7618  push eax
    X86_AT(c, 0xd7618u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7619  call 0xe665c
    X86_AT(c, 0xd7619u);
    push32(c, 0xd761eu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd761eu);
    X86_TICK(c, 13);
    // 0d761e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd761eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7621  push eax
    X86_AT(c, 0xd7621u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7622  mov edx, eax
    X86_AT(c, 0xd7622u);
    c.r[2] = c.r[0];
    // 0d7624  call 0xd6b3c
    X86_AT(c, 0xd7624u);
    push32(c, 0xd7629u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7629u);
    X86_TICK(c, 9);
    // 0d7629  push eax
    X86_AT(c, 0xd7629u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d762a  call 0xc7930
    X86_AT(c, 0xd762au);
    push32(c, 0xd762fu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd762fu);
    X86_TICK(c, 21);
    // 0d762f  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd762fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7632  mov dword ptr [edx + 0xb060a], eax
    X86_AT(c, 0xd7632u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB060Au)), c.r[0]);
    // 0d7638  push edi
    X86_AT(c, 0xd7638u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7639  push 0x4f
    X86_AT(c, 0xd7639u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d763b  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd763bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d763e  push eax
    X86_AT(c, 0xd763eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d763f  call 0xe665c
    X86_AT(c, 0xd763fu);
    push32(c, 0xd7644u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7644u);
    X86_TICK(c, 13);
    // 0d7644  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7644u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7647  push eax
    X86_AT(c, 0xd7647u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7648  mov edx, eax
    X86_AT(c, 0xd7648u);
    c.r[2] = c.r[0];
    // 0d764a  call 0xd6b3c
    X86_AT(c, 0xd764au);
    push32(c, 0xd764fu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd764fu);
    X86_TICK(c, 9);
    // 0d764f  push eax
    X86_AT(c, 0xd764fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7650  call 0xc7930
    X86_AT(c, 0xd7650u);
    push32(c, 0xd7655u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7655u);
    X86_TICK(c, 21);
    // 0d7655  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7655u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7658  mov dword ptr [edx + 0xb060e], eax
    X86_AT(c, 0xd7658u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB060Eu)), c.r[0]);
    // 0d765e  push edi
    X86_AT(c, 0xd765eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d765f  push 0x4f
    X86_AT(c, 0xd765fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7661  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7661u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7664  push eax
    X86_AT(c, 0xd7664u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7665  call 0xe665c
    X86_AT(c, 0xd7665u);
    push32(c, 0xd766au); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd766au);
    X86_TICK(c, 13);
    // 0d766a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd766au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d766d  push eax
    X86_AT(c, 0xd766du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d766e  mov edx, eax
    X86_AT(c, 0xd766eu);
    c.r[2] = c.r[0];
    // 0d7670  call 0xd6b3c
    X86_AT(c, 0xd7670u);
    push32(c, 0xd7675u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7675u);
    X86_TICK(c, 9);
    // 0d7675  push eax
    X86_AT(c, 0xd7675u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7676  call 0xc7930
    X86_AT(c, 0xd7676u);
    push32(c, 0xd767bu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd767bu);
    X86_TICK(c, 23);
    // 0d767b  add esp, 0x3c
    X86_AT(c, 0xd767bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d767e  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd767eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7681  mov dword ptr [edx + 0xb0612], eax
    X86_AT(c, 0xd7681u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0612u)), c.r[0]);
    // 0d7687  push edi
    X86_AT(c, 0xd7687u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7688  push 0x4f
    X86_AT(c, 0xd7688u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d768a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd768au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d768d  push eax
    X86_AT(c, 0xd768du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d768e  call 0xe665c
    X86_AT(c, 0xd768eu);
    push32(c, 0xd7693u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7693u);
    X86_TICK(c, 13);
    // 0d7693  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7693u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7696  push eax
    X86_AT(c, 0xd7696u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7697  mov edx, eax
    X86_AT(c, 0xd7697u);
    c.r[2] = c.r[0];
    // 0d7699  call 0xd6b3c
    X86_AT(c, 0xd7699u);
    push32(c, 0xd769eu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd769eu);
    X86_TICK(c, 9);
    // 0d769e  push eax
    X86_AT(c, 0xd769eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d769f  call 0xc7930
    X86_AT(c, 0xd769fu);
    push32(c, 0xd76a4u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd76a4u);
    X86_TICK(c, 21);
    // 0d76a4  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd76a4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d76a7  mov dword ptr [edx + 0xb0616], eax
    X86_AT(c, 0xd76a7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0616u)), c.r[0]);
    // 0d76ad  push edi
    X86_AT(c, 0xd76adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d76ae  push 0x4f
    X86_AT(c, 0xd76aeu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d76b0  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd76b0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d76b3  push eax
    X86_AT(c, 0xd76b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d76b4  call 0xe665c
    X86_AT(c, 0xd76b4u);
    push32(c, 0xd76b9u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd76b9u);
    X86_TICK(c, 15);
    // 0d76b9  add esp, 0x20
    X86_AT(c, 0xd76b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d76bc  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd76bcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d76bf  push eax
    X86_AT(c, 0xd76bfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d76c0  mov edx, eax
    X86_AT(c, 0xd76c0u);
    c.r[2] = c.r[0];
    // 0d76c2  call 0xd6b3c
    X86_AT(c, 0xd76c2u);
    push32(c, 0xd76c7u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd76c7u);
    X86_TICK(c, 9);
    // 0d76c7  push eax
    X86_AT(c, 0xd76c7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d76c8  call 0xc7930
    X86_AT(c, 0xd76c8u);
    push32(c, 0xd76cdu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd76cdu);
    X86_TICK(c, 43);
    // 0d76cd  mov edx, 0xb01a8
    X86_AT(c, 0xd76cdu);
    c.r[2] = 0xB01A8u;
    // 0d76d2  imul ecx, esi, 0x21a
    X86_AT(c, 0xd76d2u);
    c.r[1] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d76d8  mov dword ptr [edx + ecx*1 + 0x472], eax
    X86_AT(c, 0xd76d8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] + 0x472u)), c.r[0]);
    // 0d76df  push edi
    X86_AT(c, 0xd76dfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d76e0  push 0x4f
    X86_AT(c, 0xd76e0u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d76e2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd76e2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d76e5  push eax
    X86_AT(c, 0xd76e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d76e6  mov dword ptr [ebp - 0x5c], ecx
    X86_AT(c, 0xd76e6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)), c.r[1]);
    // 0d76e9  call 0xe665c
    X86_AT(c, 0xd76e9u);
    push32(c, 0xd76eeu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd76eeu);
    X86_TICK(c, 13);
    // 0d76ee  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd76eeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d76f1  push eax
    X86_AT(c, 0xd76f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d76f2  mov edx, eax
    X86_AT(c, 0xd76f2u);
    c.r[2] = c.r[0];
    // 0d76f4  call 0xd6b3c
    X86_AT(c, 0xd76f4u);
    push32(c, 0xd76f9u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd76f9u);
    X86_TICK(c, 9);
    // 0d76f9  push eax
    X86_AT(c, 0xd76f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d76fa  call 0xc7930
    X86_AT(c, 0xd76fau);
    push32(c, 0xd76ffu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd76ffu);
    X86_TICK(c, 21);
    // 0d76ff  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd76ffu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7702  mov dword ptr [edx + 0xb061e], eax
    X86_AT(c, 0xd7702u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB061Eu)), c.r[0]);
    // 0d7708  push edi
    X86_AT(c, 0xd7708u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7709  push 0x4f
    X86_AT(c, 0xd7709u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d770b  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd770bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d770e  push eax
    X86_AT(c, 0xd770eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d770f  call 0xe665c
    X86_AT(c, 0xd770fu);
    push32(c, 0xd7714u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7714u);
    X86_TICK(c, 13);
    // 0d7714  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7714u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7717  push eax
    X86_AT(c, 0xd7717u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7718  mov edx, eax
    X86_AT(c, 0xd7718u);
    c.r[2] = c.r[0];
    // 0d771a  call 0xd6b3c
    X86_AT(c, 0xd771au);
    push32(c, 0xd771fu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd771fu);
    X86_TICK(c, 9);
    // 0d771f  push eax
    X86_AT(c, 0xd771fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7720  call 0xc7930
    X86_AT(c, 0xd7720u);
    push32(c, 0xd7725u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7725u);
    X86_TICK(c, 21);
    // 0d7725  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7725u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7728  mov dword ptr [edx + 0xb0622], eax
    X86_AT(c, 0xd7728u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0622u)), c.r[0]);
    // 0d772e  push edi
    X86_AT(c, 0xd772eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d772f  push 0x4f
    X86_AT(c, 0xd772fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7731  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7731u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7734  push eax
    X86_AT(c, 0xd7734u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7735  call 0xe665c
    X86_AT(c, 0xd7735u);
    push32(c, 0xd773au); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd773au);
    X86_TICK(c, 15);
    // 0d773a  add esp, 0x3c
    X86_AT(c, 0xd773au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d773d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd773du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7740  push eax
    X86_AT(c, 0xd7740u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7741  mov edx, eax
    X86_AT(c, 0xd7741u);
    c.r[2] = c.r[0];
    // 0d7743  call 0xd6b3c
    X86_AT(c, 0xd7743u);
    push32(c, 0xd7748u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7748u);
    X86_TICK(c, 9);
    // 0d7748  push eax
    X86_AT(c, 0xd7748u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7749  call 0xc7930
    X86_AT(c, 0xd7749u);
    push32(c, 0xd774eu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd774eu);
    X86_TICK(c, 21);
    // 0d774e  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd774eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7751  mov dword ptr [edx + 0xb0626], eax
    X86_AT(c, 0xd7751u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0626u)), c.r[0]);
    // 0d7757  push edi
    X86_AT(c, 0xd7757u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7758  push 0x4f
    X86_AT(c, 0xd7758u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d775a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd775au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d775d  push eax
    X86_AT(c, 0xd775du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d775e  call 0xe665c
    X86_AT(c, 0xd775eu);
    push32(c, 0xd7763u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7763u);
    X86_TICK(c, 13);
    // 0d7763  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7763u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7766  push eax
    X86_AT(c, 0xd7766u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7767  mov edx, eax
    X86_AT(c, 0xd7767u);
    c.r[2] = c.r[0];
    // 0d7769  call 0xd6b3c
    X86_AT(c, 0xd7769u);
    push32(c, 0xd776eu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd776eu);
    X86_TICK(c, 9);
    // 0d776e  push eax
    X86_AT(c, 0xd776eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d776f  call 0xc7930
    X86_AT(c, 0xd776fu);
    push32(c, 0xd7774u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7774u);
    X86_TICK(c, 21);
    // 0d7774  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7774u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7777  mov dword ptr [edx + 0xb062a], eax
    X86_AT(c, 0xd7777u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB062Au)), c.r[0]);
    // 0d777d  push edi
    X86_AT(c, 0xd777du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d777e  push 0x4f
    X86_AT(c, 0xd777eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7780  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7780u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7783  push eax
    X86_AT(c, 0xd7783u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7784  call 0xe665c
    X86_AT(c, 0xd7784u);
    push32(c, 0xd7789u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7789u);
    X86_TICK(c, 13);
    // 0d7789  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7789u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d778c  push eax
    X86_AT(c, 0xd778cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d778d  mov edx, eax
    X86_AT(c, 0xd778du);
    c.r[2] = c.r[0];
    // 0d778f  call 0xd6b3c
    X86_AT(c, 0xd778fu);
    push32(c, 0xd7794u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7794u);
    X86_TICK(c, 9);
    // 0d7794  push eax
    X86_AT(c, 0xd7794u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7795  call 0xc7930
    X86_AT(c, 0xd7795u);
    push32(c, 0xd779au); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd779au);
    X86_TICK(c, 21);
    // 0d779a  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd779au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d779d  mov dword ptr [edx + 0xb062e], eax
    X86_AT(c, 0xd779du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB062Eu)), c.r[0]);
    // 0d77a3  push edi
    X86_AT(c, 0xd77a3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d77a4  push 0x4f
    X86_AT(c, 0xd77a4u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d77a6  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd77a6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d77a9  push eax
    X86_AT(c, 0xd77a9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d77aa  call 0xe665c
    X86_AT(c, 0xd77aau);
    push32(c, 0xd77afu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd77afu);
    X86_TICK(c, 15);
    // 0d77af  add esp, 0x3c
    X86_AT(c, 0xd77afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d77b2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd77b2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d77b5  push eax
    X86_AT(c, 0xd77b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d77b6  mov edx, eax
    X86_AT(c, 0xd77b6u);
    c.r[2] = c.r[0];
    // 0d77b8  call 0xd6b3c
    X86_AT(c, 0xd77b8u);
    push32(c, 0xd77bdu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd77bdu);
    X86_TICK(c, 9);
    // 0d77bd  push eax
    X86_AT(c, 0xd77bdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d77be  call 0xc7930
    X86_AT(c, 0xd77beu);
    push32(c, 0xd77c3u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd77c3u);
    X86_TICK(c, 21);
    // 0d77c3  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd77c3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d77c6  mov dword ptr [edx + 0xb0632], eax
    X86_AT(c, 0xd77c6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0632u)), c.r[0]);
    // 0d77cc  push edi
    X86_AT(c, 0xd77ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d77cd  push 0x4f
    X86_AT(c, 0xd77cdu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d77cf  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd77cfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d77d2  push eax
    X86_AT(c, 0xd77d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d77d3  call 0xe665c
    X86_AT(c, 0xd77d3u);
    push32(c, 0xd77d8u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd77d8u);
    X86_TICK(c, 11);
    // 0d77d8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd77d8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d77db  push eax
    X86_AT(c, 0xd77dbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d77dc  call 0xd6b3c
    X86_AT(c, 0xd77dcu);
    push32(c, 0xd77e1u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd77e1u);
    X86_TICK(c, 9);
    // 0d77e1  push eax
    X86_AT(c, 0xd77e1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d77e2  call 0xc7930
    X86_AT(c, 0xd77e2u);
    push32(c, 0xd77e7u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd77e7u);
    X86_TICK(c, 23);
    // 0d77e7  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd77e7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d77ea  mov dword ptr [edx + 0xb0636], eax
    X86_AT(c, 0xd77eau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0636u)), c.r[0]);
    // 0d77f0  add esp, 0x1c
    X86_AT(c, 0xd77f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d77f3  push edi
    X86_AT(c, 0xd77f3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d77f4  push 0x4f
    X86_AT(c, 0xd77f4u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d77f6  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd77f6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d77f9  push eax
    X86_AT(c, 0xd77f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d77fa  call 0xe665c
    X86_AT(c, 0xd77fau);
    push32(c, 0xd77ffu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd77ffu);
    X86_TICK(c, 13);
    // 0d77ff  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd77ffu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7802  push eax
    X86_AT(c, 0xd7802u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7803  mov edx, eax
    X86_AT(c, 0xd7803u);
    c.r[2] = c.r[0];
    // 0d7805  call 0xd6b3c
    X86_AT(c, 0xd7805u);
    push32(c, 0xd780au); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd780au);
    X86_TICK(c, 9);
    // 0d780a  push eax
    X86_AT(c, 0xd780au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d780b  call 0xc7930
    X86_AT(c, 0xd780bu);
    push32(c, 0xd7810u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7810u);
    X86_TICK(c, 41);
    // 0d7810  imul edx, esi, 0x21a
    X86_AT(c, 0xd7810u);
    c.r[2] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d7816  mov dword ptr [edx + 0xb063a], eax
    X86_AT(c, 0xd7816u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB063Au)), c.r[0]);
    // 0d781c  push edi
    X86_AT(c, 0xd781cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d781d  push 0x4f
    X86_AT(c, 0xd781du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d781f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd781fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7822  push eax
    X86_AT(c, 0xd7822u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7823  mov dword ptr [ebp - 0x5c], edx
    X86_AT(c, 0xd7823u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)), c.r[2]);
    // 0d7826  call 0xe665c
    X86_AT(c, 0xd7826u);
    push32(c, 0xd782bu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd782bu);
    X86_TICK(c, 13);
    // 0d782b  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd782bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d782e  push eax
    X86_AT(c, 0xd782eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d782f  mov edx, eax
    X86_AT(c, 0xd782fu);
    c.r[2] = c.r[0];
    // 0d7831  call 0xd6b3c
    X86_AT(c, 0xd7831u);
    push32(c, 0xd7836u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7836u);
    X86_TICK(c, 9);
    // 0d7836  push eax
    X86_AT(c, 0xd7836u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7837  call 0xc7930
    X86_AT(c, 0xd7837u);
    push32(c, 0xd783cu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd783cu);
    X86_TICK(c, 21);
    // 0d783c  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd783cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d783f  mov dword ptr [edx + 0xb063e], eax
    X86_AT(c, 0xd783fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB063Eu)), c.r[0]);
    // 0d7845  push edi
    X86_AT(c, 0xd7845u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7846  push 0x4f
    X86_AT(c, 0xd7846u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7848  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7848u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d784b  push eax
    X86_AT(c, 0xd784bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d784c  call 0xe665c
    X86_AT(c, 0xd784cu);
    push32(c, 0xd7851u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7851u);
    X86_TICK(c, 13);
    // 0d7851  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7851u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7854  push eax
    X86_AT(c, 0xd7854u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7855  mov edx, eax
    X86_AT(c, 0xd7855u);
    c.r[2] = c.r[0];
    // 0d7857  call 0xd6b3c
    X86_AT(c, 0xd7857u);
    push32(c, 0xd785cu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd785cu);
    X86_TICK(c, 9);
    // 0d785c  push eax
    X86_AT(c, 0xd785cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d785d  call 0xc7930
    X86_AT(c, 0xd785du);
    push32(c, 0xd7862u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7862u);
    X86_TICK(c, 23);
    // 0d7862  add esp, 0x3c
    X86_AT(c, 0xd7862u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7865  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd7865u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d7868  mov dword ptr [edx + 0xb0642], eax
    X86_AT(c, 0xd7868u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0642u)), c.r[0]);
    // 0d786e  push edi
    X86_AT(c, 0xd786eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d786f  push 0x4f
    X86_AT(c, 0xd786fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7871  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7871u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7874  push eax
    X86_AT(c, 0xd7874u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7875  call 0xe665c
    X86_AT(c, 0xd7875u);
    push32(c, 0xd787au); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd787au);
    X86_TICK(c, 13);
    // 0d787a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd787au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d787d  push eax
    X86_AT(c, 0xd787du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d787e  mov edx, eax
    X86_AT(c, 0xd787eu);
    c.r[2] = c.r[0];
    // 0d7880  call 0xd6b3c
    X86_AT(c, 0xd7880u);
    push32(c, 0xd7885u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7885u);
    X86_TICK(c, 9);
    // 0d7885  push eax
    X86_AT(c, 0xd7885u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7886  call 0xc7930
    X86_AT(c, 0xd7886u);
    push32(c, 0xd788bu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd788bu);
    X86_TICK(c, 21);
    // 0d788b  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd788bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d788e  mov dword ptr [edx + 0xb0646], eax
    X86_AT(c, 0xd788eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0646u)), c.r[0]);
    // 0d7894  push edi
    X86_AT(c, 0xd7894u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7895  push 0x4f
    X86_AT(c, 0xd7895u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7897  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7897u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d789a  push eax
    X86_AT(c, 0xd789au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d789b  call 0xe665c
    X86_AT(c, 0xd789bu);
    push32(c, 0xd78a0u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd78a0u);
    X86_TICK(c, 13);
    // 0d78a0  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd78a0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d78a3  push eax
    X86_AT(c, 0xd78a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78a4  mov edx, eax
    X86_AT(c, 0xd78a4u);
    c.r[2] = c.r[0];
    // 0d78a6  call 0xd6b3c
    X86_AT(c, 0xd78a6u);
    push32(c, 0xd78abu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd78abu);
    X86_TICK(c, 9);
    // 0d78ab  push eax
    X86_AT(c, 0xd78abu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78ac  call 0xc7930
    X86_AT(c, 0xd78acu);
    push32(c, 0xd78b1u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd78b1u);
    X86_TICK(c, 21);
    // 0d78b1  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd78b1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d78b4  mov dword ptr [edx + 0xb064a], eax
    X86_AT(c, 0xd78b4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB064Au)), c.r[0]);
    // 0d78ba  push edi
    X86_AT(c, 0xd78bau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d78bb  push 0x4f
    X86_AT(c, 0xd78bbu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d78bd  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd78bdu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d78c0  push eax
    X86_AT(c, 0xd78c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78c1  call 0xe665c
    X86_AT(c, 0xd78c1u);
    push32(c, 0xd78c6u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd78c6u);
    X86_TICK(c, 11);
    // 0d78c6  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd78c6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d78c9  push eax
    X86_AT(c, 0xd78c9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78ca  call 0xd6b3c
    X86_AT(c, 0xd78cau);
    push32(c, 0xd78cfu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd78cfu);
    X86_TICK(c, 9);
    // 0d78cf  push eax
    X86_AT(c, 0xd78cfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78d0  call 0xc7930
    X86_AT(c, 0xd78d0u);
    push32(c, 0xd78d5u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd78d5u);
    X86_TICK(c, 10);
    // 0d78d5  add esp, 0x3c
    X86_AT(c, 0xd78d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d78d8  mov edx, dword ptr [ebp - 0x5c]
    X86_AT(c, 0xd78d8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA4u)));
    // 0d78db  mov dword ptr [edx + 0xb064e], eax
    X86_AT(c, 0xd78dbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB064Eu)), c.r[0]);
    // 0d78e1  sub ebx, ebx
    X86_AT(c, 0xd78e1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_d78e3:
    X86_TICK(c, 7);
    // 0d78e3  cmp ebx, 0x10
    X86_AT(c, 0xd78e3u);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0d78e6  jg 0xd7916
    X86_AT(c, 0xd78e6u);
    if (x86_cc(c, 15)) { goto L_d7916; }
    X86_TICK(c, 15);
    // 0d78e8  push edi
    X86_AT(c, 0xd78e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d78e9  push 0x4f
    X86_AT(c, 0xd78e9u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d78eb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd78ebu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d78ee  push eax
    X86_AT(c, 0xd78eeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78ef  call 0xe665c
    X86_AT(c, 0xd78efu);
    push32(c, 0xd78f4u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd78f4u);
    X86_TICK(c, 11);
    // 0d78f4  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd78f4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d78f7  push eax
    X86_AT(c, 0xd78f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78f8  call 0xd6b3c
    X86_AT(c, 0xd78f8u);
    push32(c, 0xd78fdu); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd78fdu);
    X86_TICK(c, 9);
    // 0d78fd  push eax
    X86_AT(c, 0xd78fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78fe  call 0xc7930
    X86_AT(c, 0xd78feu);
    push32(c, 0xd7903u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7903u);
    X86_TICK(c, 35);
    // 0d7903  imul edx, esi, 0x21a
    X86_AT(c, 0xd7903u);
    c.r[2] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d7909  mov dword ptr [edx + ebx*4 + 0xb0652], eax
    X86_AT(c, 0xd7909u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[3] * 4 + 0xB0652u)), c.r[0]);
    // 0d7910  inc ebx
    X86_AT(c, 0xd7910u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d7911  add esp, 0x14
    X86_AT(c, 0xd7911u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d7914  jmp 0xd78e3
    X86_AT(c, 0xd7914u);
    X86_POLL(c, 0xd78e3u); goto L_d78e3;
L_d7916:
    X86_TICK(c, 2);
    // 0d7916  sub ebx, ebx
    X86_AT(c, 0xd7916u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_d7918:
    X86_TICK(c, 7);
    // 0d7918  cmp ebx, 0x10
    X86_AT(c, 0xd7918u);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0d791b  jg 0xd794b
    X86_AT(c, 0xd791bu);
    if (x86_cc(c, 15)) { goto L_d794b; }
    X86_TICK(c, 15);
    // 0d791d  push edi
    X86_AT(c, 0xd791du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d791e  push 0x4f
    X86_AT(c, 0xd791eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7920  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7920u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7923  push eax
    X86_AT(c, 0xd7923u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7924  call 0xe665c
    X86_AT(c, 0xd7924u);
    push32(c, 0xd7929u); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd7929u);
    X86_TICK(c, 11);
    // 0d7929  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7929u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d792c  push eax
    X86_AT(c, 0xd792cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d792d  call 0xd6b3c
    X86_AT(c, 0xd792du);
    push32(c, 0xd7932u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7932u);
    X86_TICK(c, 9);
    // 0d7932  push eax
    X86_AT(c, 0xd7932u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7933  call 0xc7930
    X86_AT(c, 0xd7933u);
    push32(c, 0xd7938u); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd7938u);
    X86_TICK(c, 35);
    // 0d7938  imul edx, esi, 0x21a
    X86_AT(c, 0xd7938u);
    c.r[2] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d793e  mov dword ptr [edx + ebx*4 + 0xb0696], eax
    X86_AT(c, 0xd793eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[3] * 4 + 0xB0696u)), c.r[0]);
    // 0d7945  inc ebx
    X86_AT(c, 0xd7945u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d7946  add esp, 0x14
    X86_AT(c, 0xd7946u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d7949  jmp 0xd7918
    X86_AT(c, 0xd7949u);
    X86_POLL(c, 0xd7918u); goto L_d7918;
L_d794b:
    X86_TICK(c, 2);
    // 0d794b  sub ebx, ebx
    X86_AT(c, 0xd794bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_d794d:
    X86_TICK(c, 7);
    // 0d794d  cmp ebx, 0x10
    X86_AT(c, 0xd794du);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0d7950  jg 0xd7980
    X86_AT(c, 0xd7950u);
    if (x86_cc(c, 15)) { goto L_d7980; }
    X86_TICK(c, 15);
    // 0d7952  push edi
    X86_AT(c, 0xd7952u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7953  push 0x4f
    X86_AT(c, 0xd7953u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7955  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7955u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7958  push eax
    X86_AT(c, 0xd7958u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7959  call 0xe665c
    X86_AT(c, 0xd7959u);
    push32(c, 0xd795eu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd795eu);
    X86_TICK(c, 11);
    // 0d795e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd795eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7961  push eax
    X86_AT(c, 0xd7961u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7962  call 0xd6b3c
    X86_AT(c, 0xd7962u);
    push32(c, 0xd7967u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7967u);
    X86_TICK(c, 9);
    // 0d7967  push eax
    X86_AT(c, 0xd7967u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7968  call 0xc7930
    X86_AT(c, 0xd7968u);
    push32(c, 0xd796du); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd796du);
    X86_TICK(c, 35);
    // 0d796d  imul edx, esi, 0x21a
    X86_AT(c, 0xd796du);
    c.r[2] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d7973  mov dword ptr [edx + ebx*4 + 0xb06da], eax
    X86_AT(c, 0xd7973u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[3] * 4 + 0xB06DAu)), c.r[0]);
    // 0d797a  inc ebx
    X86_AT(c, 0xd797au);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d797b  add esp, 0x14
    X86_AT(c, 0xd797bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d797e  jmp 0xd794d
    X86_AT(c, 0xd797eu);
    X86_POLL(c, 0xd794du); goto L_d794d;
L_d7980:
    X86_TICK(c, 15);
    // 0d7980  push edi
    X86_AT(c, 0xd7980u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7981  push 0x4f
    X86_AT(c, 0xd7981u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d7983  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd7983u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d7986  push eax
    X86_AT(c, 0xd7986u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7987  call 0xe665c
    X86_AT(c, 0xd7987u);
    push32(c, 0xd798cu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd798cu);
    X86_TICK(c, 11);
    // 0d798c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xd798cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0d798f  push eax
    X86_AT(c, 0xd798fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7990  call 0xd6b3c
    X86_AT(c, 0xd7990u);
    push32(c, 0xd7995u); x86_call_known(c, 0xd6b3cu, f_000d6b3c); X86_RET(c, 0xd7995u);
    X86_TICK(c, 9);
    // 0d7995  push eax
    X86_AT(c, 0xd7995u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7996  call 0xc7930
    X86_AT(c, 0xd7996u);
    push32(c, 0xd799bu); x86_call_known(c, 0xc7930u, f_000c7930); X86_RET(c, 0xd799bu);
    X86_TICK(c, 35);
    // 0d799b  imul edx, esi, 0x21a
    X86_AT(c, 0xd799bu);
    c.r[2] = x86_imul2(c, c.r[6], 0x21Au, 4);
    // 0d79a1  mov dword ptr [edx + 0xb071e], eax
    X86_AT(c, 0xd79a1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB071Eu)), c.r[0]);
    // 0d79a7  inc esi
    X86_AT(c, 0xd79a7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d79a8  add esp, 0x14
    X86_AT(c, 0xd79a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d79ab  jmp 0xd6bea
    X86_AT(c, 0xd79abu);
    X86_POLL(c, 0xd6beau); goto L_d6bea;
L_d79b0:
    X86_TICK(c, 9);
    // 0d79b0  push edi
    X86_AT(c, 0xd79b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d79b1  call 0xe7300
    X86_AT(c, 0xd79b1u);
    push32(c, 0xd79b6u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xd79b6u);
    X86_TICK(c, 6);
    // 0d79b6  sub eax, eax
    X86_AT(c, 0xd79b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d79b8  mov dword ptr [0xb1348], eax
    X86_AT(c, 0xd79b8u);
    wr32((c.sbase[3] + (uint32_t)(0xB1348u)), c.r[0]);
    // 0d79bd  add esp, 4
    X86_AT(c, 0xd79bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d79c0:
    X86_TICK(c, 28);
    // 0d79c0  pop edi
    X86_AT(c, 0xd79c0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d79c1  pop esi
    X86_AT(c, 0xd79c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d79c2  pop ebx
    X86_AT(c, 0xd79c2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d79c3  leave 
    X86_AT(c, 0xd79c3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d79c4  ret 
    X86_AT(c, 0xd79c4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6b54u, "ran off the end of a function");
}
}

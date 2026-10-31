#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00000280(X86Cpu& c) {
    X86_TICK(c, 50);
    // 000280  push fs
    X86_AT(c, 0x280u);
    push32(c, c.sreg[4]);
    // 000282  push es
    X86_AT(c, 0x282u);
    push32(c, c.sreg[0]);
    // 000283  push ds
    X86_AT(c, 0x283u);
    push32(c, c.sreg[3]);
    // 000284  mov dword ptr gs:[edi + 0x200], 0
    X86_AT(c, 0x284u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x200u)), 0x0u);
    // 00028f  mov dword ptr gs:[edi + 0x10], 1
    X86_AT(c, 0x28fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x10u)), 0x1u);
    // 000297  pushfd 
    X86_AT(c, 0x297u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 000298  cld 
    X86_AT(c, 0x298u);
    c.fl &= ~X86_DF;
    // 000299  pushal 
    X86_AT(c, 0x299u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 00029a  mov ebp, edi
    X86_AT(c, 0x29au);
    c.r[5] = c.r[7];
    // 00029c  mov byte ptr [esp + 0x1d], 0
    X86_AT(c, 0x29cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x1Du)), 0x0u);
    // 0002a1  movzx edi, ah
    X86_AT(c, 0x2a1u);
    c.r[7] = g8(c, 4);
    // 0002a4  call dword ptr cs:[edi*4 + 0x2b4]
    X86_AT(c, 0x2a4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x2B4u))); push32(c, 0x2acu);
      switch (t) {
      case 0x450u: f_00000450(c); break;
      case 0x678u: f_00000678(c); break;
      case 0xc20u: f_00000c20(c); break;
      case 0xd94u: f_00000d94(c); break;
      case 0x17b0u: f_000017b0(c); break;
      case 0x17e8u: f_000017e8(c); break;
      case 0x1834u: f_00001834(c); break;
      case 0x19b8u: f_000019b8(c); break;
      case 0x1abcu: f_00001abc(c); break;
      case 0x1b2cu: f_00001b2c(c); break;
      case 0x1c6cu: f_00001c6c(c); break;
      case 0x1d0cu: f_00001d0c(c); break;
      case 0x1da8u: f_00001da8(c); break;
      case 0x1dd0u: f_00001dd0(c); break;
      case 0x1de8u: f_00001de8(c); break;
      case 0x1e04u: f_00001e04(c); break;
      case 0x1e28u: f_00001e28(c); break;
      case 0x1e64u: f_00001e64(c); break;
      case 0x1ea0u: f_00001ea0(c); break;
      case 0x1eb0u: f_00001eb0(c); break;
      case 0x1ee8u: f_00001ee8(c); break;
      case 0x1ef4u: f_00001ef4(c); break;
      case 0x1f0cu: f_00001f0c(c); break;
      case 0x1f1cu: f_00001f1c(c); break;
      case 0x1f30u: f_00001f30(c); break;
      case 0x1f44u: f_00001f44(c); break;
      case 0x1f50u: f_00001f50(c); break;
      case 0x1f70u: f_00001f70(c); break;
      case 0x1f7cu: f_00001f7c(c); break;
      case 0x1fd4u: f_00001fd4(c); break;
      case 0x2018u: f_00002018(c); break;
      case 0x206cu: f_0000206c(c); break;
      case 0x20e8u: f_000020e8(c); break;
      case 0x20f8u: f_000020f8(c); break;
      case 0x210cu: f_0000210c(c); break;
      case 0x2178u: f_00002178(c); break;
      case 0x2234u: f_00002234(c); break;
      case 0x2294u: f_00002294(c); break;
      case 0x2400u: f_00002400(c); break;
      case 0x244cu: f_0000244c(c); break;
      case 0x245cu: f_0000245c(c); break;
      case 0x2568u: f_00002568(c); break;
      case 0x2680u: f_00002680(c); break;
      case 0x285cu: f_0000285c(c); break;
      case 0x29a8u: f_000029a8(c); break;
      case 0x2a3cu: f_00002a3c(c); break;
      case 0x2af8u: f_00002af8(c); break;
      case 0x2b8cu: f_00002b8c(c); break;
      case 0x2ce8u: f_00002ce8(c); break;
      case 0x2d58u: f_00002d58(c); break;
      case 0x2d78u: f_00002d78(c); break;
      case 0x2e80u: f_00002e80(c); break;
      case 0x30d4u: f_000030d4(c); break;
      case 0x3178u: f_00003178(c); break;
      case 0x31b4u: f_000031b4(c); break;
      case 0x3290u: f_00003290(c); break;
      case 0x333cu: f_0000333c(c); break;
      case 0x336cu: f_0000336c(c); break;
      case 0x33d8u: f_000033d8(c); break;
      case 0x33e8u: f_000033e8(c); break;
      case 0x3464u: f_00003464(c); break;
      case 0x3480u: f_00003480(c); break;
      case 0x34ecu: f_000034ec(c); break;
      case 0x34fcu: f_000034fc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2acu); }
    X86_TICK(c, 48);
    // 0002ac  popal 
    X86_AT(c, 0x2acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x280u, "ran off the end of a function");
}
void f_00000282(X86Cpu& c) {
    X86_TICK(c, 48);
    // 000282  push es
    X86_AT(c, 0x282u);
    push32(c, c.sreg[0]);
    // 000283  push ds
    X86_AT(c, 0x283u);
    push32(c, c.sreg[3]);
    // 000284  mov dword ptr gs:[edi + 0x200], 0
    X86_AT(c, 0x284u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x200u)), 0x0u);
    // 00028f  mov dword ptr gs:[edi + 0x10], 1
    X86_AT(c, 0x28fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x10u)), 0x1u);
    // 000297  pushfd 
    X86_AT(c, 0x297u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 000298  cld 
    X86_AT(c, 0x298u);
    c.fl &= ~X86_DF;
    // 000299  pushal 
    X86_AT(c, 0x299u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 00029a  mov ebp, edi
    X86_AT(c, 0x29au);
    c.r[5] = c.r[7];
    // 00029c  mov byte ptr [esp + 0x1d], 0
    X86_AT(c, 0x29cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x1Du)), 0x0u);
    // 0002a1  movzx edi, ah
    X86_AT(c, 0x2a1u);
    c.r[7] = g8(c, 4);
    // 0002a4  call dword ptr cs:[edi*4 + 0x2b4]
    X86_AT(c, 0x2a4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x2B4u))); push32(c, 0x2acu);
      switch (t) {
      case 0x450u: f_00000450(c); break;
      case 0x678u: f_00000678(c); break;
      case 0xc20u: f_00000c20(c); break;
      case 0xd94u: f_00000d94(c); break;
      case 0x17b0u: f_000017b0(c); break;
      case 0x17e8u: f_000017e8(c); break;
      case 0x1834u: f_00001834(c); break;
      case 0x19b8u: f_000019b8(c); break;
      case 0x1abcu: f_00001abc(c); break;
      case 0x1b2cu: f_00001b2c(c); break;
      case 0x1c6cu: f_00001c6c(c); break;
      case 0x1d0cu: f_00001d0c(c); break;
      case 0x1da8u: f_00001da8(c); break;
      case 0x1dd0u: f_00001dd0(c); break;
      case 0x1de8u: f_00001de8(c); break;
      case 0x1e04u: f_00001e04(c); break;
      case 0x1e28u: f_00001e28(c); break;
      case 0x1e64u: f_00001e64(c); break;
      case 0x1ea0u: f_00001ea0(c); break;
      case 0x1eb0u: f_00001eb0(c); break;
      case 0x1ee8u: f_00001ee8(c); break;
      case 0x1ef4u: f_00001ef4(c); break;
      case 0x1f0cu: f_00001f0c(c); break;
      case 0x1f1cu: f_00001f1c(c); break;
      case 0x1f30u: f_00001f30(c); break;
      case 0x1f44u: f_00001f44(c); break;
      case 0x1f50u: f_00001f50(c); break;
      case 0x1f70u: f_00001f70(c); break;
      case 0x1f7cu: f_00001f7c(c); break;
      case 0x1fd4u: f_00001fd4(c); break;
      case 0x2018u: f_00002018(c); break;
      case 0x206cu: f_0000206c(c); break;
      case 0x20e8u: f_000020e8(c); break;
      case 0x20f8u: f_000020f8(c); break;
      case 0x210cu: f_0000210c(c); break;
      case 0x2178u: f_00002178(c); break;
      case 0x2234u: f_00002234(c); break;
      case 0x2294u: f_00002294(c); break;
      case 0x2400u: f_00002400(c); break;
      case 0x244cu: f_0000244c(c); break;
      case 0x245cu: f_0000245c(c); break;
      case 0x2568u: f_00002568(c); break;
      case 0x2680u: f_00002680(c); break;
      case 0x285cu: f_0000285c(c); break;
      case 0x29a8u: f_000029a8(c); break;
      case 0x2a3cu: f_00002a3c(c); break;
      case 0x2af8u: f_00002af8(c); break;
      case 0x2b8cu: f_00002b8c(c); break;
      case 0x2ce8u: f_00002ce8(c); break;
      case 0x2d58u: f_00002d58(c); break;
      case 0x2d78u: f_00002d78(c); break;
      case 0x2e80u: f_00002e80(c); break;
      case 0x30d4u: f_000030d4(c); break;
      case 0x3178u: f_00003178(c); break;
      case 0x31b4u: f_000031b4(c); break;
      case 0x3290u: f_00003290(c); break;
      case 0x333cu: f_0000333c(c); break;
      case 0x336cu: f_0000336c(c); break;
      case 0x33d8u: f_000033d8(c); break;
      case 0x33e8u: f_000033e8(c); break;
      case 0x3464u: f_00003464(c); break;
      case 0x3480u: f_00003480(c); break;
      case 0x34ecu: f_000034ec(c); break;
      case 0x34fcu: f_000034fc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2acu); }
    X86_TICK(c, 48);
    // 0002ac  popal 
    X86_AT(c, 0x2acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x282u, "ran off the end of a function");
}
void f_00000283(X86Cpu& c) {
    X86_TICK(c, 46);
    // 000283  push ds
    X86_AT(c, 0x283u);
    push32(c, c.sreg[3]);
    // 000284  mov dword ptr gs:[edi + 0x200], 0
    X86_AT(c, 0x284u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x200u)), 0x0u);
    // 00028f  mov dword ptr gs:[edi + 0x10], 1
    X86_AT(c, 0x28fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x10u)), 0x1u);
    // 000297  pushfd 
    X86_AT(c, 0x297u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 000298  cld 
    X86_AT(c, 0x298u);
    c.fl &= ~X86_DF;
    // 000299  pushal 
    X86_AT(c, 0x299u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 00029a  mov ebp, edi
    X86_AT(c, 0x29au);
    c.r[5] = c.r[7];
    // 00029c  mov byte ptr [esp + 0x1d], 0
    X86_AT(c, 0x29cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x1Du)), 0x0u);
    // 0002a1  movzx edi, ah
    X86_AT(c, 0x2a1u);
    c.r[7] = g8(c, 4);
    // 0002a4  call dword ptr cs:[edi*4 + 0x2b4]
    X86_AT(c, 0x2a4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x2B4u))); push32(c, 0x2acu);
      switch (t) {
      case 0x450u: f_00000450(c); break;
      case 0x678u: f_00000678(c); break;
      case 0xc20u: f_00000c20(c); break;
      case 0xd94u: f_00000d94(c); break;
      case 0x17b0u: f_000017b0(c); break;
      case 0x17e8u: f_000017e8(c); break;
      case 0x1834u: f_00001834(c); break;
      case 0x19b8u: f_000019b8(c); break;
      case 0x1abcu: f_00001abc(c); break;
      case 0x1b2cu: f_00001b2c(c); break;
      case 0x1c6cu: f_00001c6c(c); break;
      case 0x1d0cu: f_00001d0c(c); break;
      case 0x1da8u: f_00001da8(c); break;
      case 0x1dd0u: f_00001dd0(c); break;
      case 0x1de8u: f_00001de8(c); break;
      case 0x1e04u: f_00001e04(c); break;
      case 0x1e28u: f_00001e28(c); break;
      case 0x1e64u: f_00001e64(c); break;
      case 0x1ea0u: f_00001ea0(c); break;
      case 0x1eb0u: f_00001eb0(c); break;
      case 0x1ee8u: f_00001ee8(c); break;
      case 0x1ef4u: f_00001ef4(c); break;
      case 0x1f0cu: f_00001f0c(c); break;
      case 0x1f1cu: f_00001f1c(c); break;
      case 0x1f30u: f_00001f30(c); break;
      case 0x1f44u: f_00001f44(c); break;
      case 0x1f50u: f_00001f50(c); break;
      case 0x1f70u: f_00001f70(c); break;
      case 0x1f7cu: f_00001f7c(c); break;
      case 0x1fd4u: f_00001fd4(c); break;
      case 0x2018u: f_00002018(c); break;
      case 0x206cu: f_0000206c(c); break;
      case 0x20e8u: f_000020e8(c); break;
      case 0x20f8u: f_000020f8(c); break;
      case 0x210cu: f_0000210c(c); break;
      case 0x2178u: f_00002178(c); break;
      case 0x2234u: f_00002234(c); break;
      case 0x2294u: f_00002294(c); break;
      case 0x2400u: f_00002400(c); break;
      case 0x244cu: f_0000244c(c); break;
      case 0x245cu: f_0000245c(c); break;
      case 0x2568u: f_00002568(c); break;
      case 0x2680u: f_00002680(c); break;
      case 0x285cu: f_0000285c(c); break;
      case 0x29a8u: f_000029a8(c); break;
      case 0x2a3cu: f_00002a3c(c); break;
      case 0x2af8u: f_00002af8(c); break;
      case 0x2b8cu: f_00002b8c(c); break;
      case 0x2ce8u: f_00002ce8(c); break;
      case 0x2d58u: f_00002d58(c); break;
      case 0x2d78u: f_00002d78(c); break;
      case 0x2e80u: f_00002e80(c); break;
      case 0x30d4u: f_000030d4(c); break;
      case 0x3178u: f_00003178(c); break;
      case 0x31b4u: f_000031b4(c); break;
      case 0x3290u: f_00003290(c); break;
      case 0x333cu: f_0000333c(c); break;
      case 0x336cu: f_0000336c(c); break;
      case 0x33d8u: f_000033d8(c); break;
      case 0x33e8u: f_000033e8(c); break;
      case 0x3464u: f_00003464(c); break;
      case 0x3480u: f_00003480(c); break;
      case 0x34ecu: f_000034ec(c); break;
      case 0x34fcu: f_000034fc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2acu); }
    X86_TICK(c, 48);
    // 0002ac  popal 
    X86_AT(c, 0x2acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x283u, "ran off the end of a function");
}
void f_00000284(X86Cpu& c) {
    X86_TICK(c, 44);
    // 000284  mov dword ptr gs:[edi + 0x200], 0
    X86_AT(c, 0x284u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x200u)), 0x0u);
    // 00028f  mov dword ptr gs:[edi + 0x10], 1
    X86_AT(c, 0x28fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x10u)), 0x1u);
    // 000297  pushfd 
    X86_AT(c, 0x297u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 000298  cld 
    X86_AT(c, 0x298u);
    c.fl &= ~X86_DF;
    // 000299  pushal 
    X86_AT(c, 0x299u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 00029a  mov ebp, edi
    X86_AT(c, 0x29au);
    c.r[5] = c.r[7];
    // 00029c  mov byte ptr [esp + 0x1d], 0
    X86_AT(c, 0x29cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x1Du)), 0x0u);
    // 0002a1  movzx edi, ah
    X86_AT(c, 0x2a1u);
    c.r[7] = g8(c, 4);
    // 0002a4  call dword ptr cs:[edi*4 + 0x2b4]
    X86_AT(c, 0x2a4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x2B4u))); push32(c, 0x2acu);
      switch (t) {
      case 0x450u: f_00000450(c); break;
      case 0x678u: f_00000678(c); break;
      case 0xc20u: f_00000c20(c); break;
      case 0xd94u: f_00000d94(c); break;
      case 0x17b0u: f_000017b0(c); break;
      case 0x17e8u: f_000017e8(c); break;
      case 0x1834u: f_00001834(c); break;
      case 0x19b8u: f_000019b8(c); break;
      case 0x1abcu: f_00001abc(c); break;
      case 0x1b2cu: f_00001b2c(c); break;
      case 0x1c6cu: f_00001c6c(c); break;
      case 0x1d0cu: f_00001d0c(c); break;
      case 0x1da8u: f_00001da8(c); break;
      case 0x1dd0u: f_00001dd0(c); break;
      case 0x1de8u: f_00001de8(c); break;
      case 0x1e04u: f_00001e04(c); break;
      case 0x1e28u: f_00001e28(c); break;
      case 0x1e64u: f_00001e64(c); break;
      case 0x1ea0u: f_00001ea0(c); break;
      case 0x1eb0u: f_00001eb0(c); break;
      case 0x1ee8u: f_00001ee8(c); break;
      case 0x1ef4u: f_00001ef4(c); break;
      case 0x1f0cu: f_00001f0c(c); break;
      case 0x1f1cu: f_00001f1c(c); break;
      case 0x1f30u: f_00001f30(c); break;
      case 0x1f44u: f_00001f44(c); break;
      case 0x1f50u: f_00001f50(c); break;
      case 0x1f70u: f_00001f70(c); break;
      case 0x1f7cu: f_00001f7c(c); break;
      case 0x1fd4u: f_00001fd4(c); break;
      case 0x2018u: f_00002018(c); break;
      case 0x206cu: f_0000206c(c); break;
      case 0x20e8u: f_000020e8(c); break;
      case 0x20f8u: f_000020f8(c); break;
      case 0x210cu: f_0000210c(c); break;
      case 0x2178u: f_00002178(c); break;
      case 0x2234u: f_00002234(c); break;
      case 0x2294u: f_00002294(c); break;
      case 0x2400u: f_00002400(c); break;
      case 0x244cu: f_0000244c(c); break;
      case 0x245cu: f_0000245c(c); break;
      case 0x2568u: f_00002568(c); break;
      case 0x2680u: f_00002680(c); break;
      case 0x285cu: f_0000285c(c); break;
      case 0x29a8u: f_000029a8(c); break;
      case 0x2a3cu: f_00002a3c(c); break;
      case 0x2af8u: f_00002af8(c); break;
      case 0x2b8cu: f_00002b8c(c); break;
      case 0x2ce8u: f_00002ce8(c); break;
      case 0x2d58u: f_00002d58(c); break;
      case 0x2d78u: f_00002d78(c); break;
      case 0x2e80u: f_00002e80(c); break;
      case 0x30d4u: f_000030d4(c); break;
      case 0x3178u: f_00003178(c); break;
      case 0x31b4u: f_000031b4(c); break;
      case 0x3290u: f_00003290(c); break;
      case 0x333cu: f_0000333c(c); break;
      case 0x336cu: f_0000336c(c); break;
      case 0x33d8u: f_000033d8(c); break;
      case 0x33e8u: f_000033e8(c); break;
      case 0x3464u: f_00003464(c); break;
      case 0x3480u: f_00003480(c); break;
      case 0x34ecu: f_000034ec(c); break;
      case 0x34fcu: f_000034fc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2acu); }
    X86_TICK(c, 48);
    // 0002ac  popal 
    X86_AT(c, 0x2acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x284u, "ran off the end of a function");
}
void f_0000028f(X86Cpu& c) {
    X86_TICK(c, 42);
    // 00028f  mov dword ptr gs:[edi + 0x10], 1
    X86_AT(c, 0x28fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x10u)), 0x1u);
    // 000297  pushfd 
    X86_AT(c, 0x297u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 000298  cld 
    X86_AT(c, 0x298u);
    c.fl &= ~X86_DF;
    // 000299  pushal 
    X86_AT(c, 0x299u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 00029a  mov ebp, edi
    X86_AT(c, 0x29au);
    c.r[5] = c.r[7];
    // 00029c  mov byte ptr [esp + 0x1d], 0
    X86_AT(c, 0x29cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x1Du)), 0x0u);
    // 0002a1  movzx edi, ah
    X86_AT(c, 0x2a1u);
    c.r[7] = g8(c, 4);
    // 0002a4  call dword ptr cs:[edi*4 + 0x2b4]
    X86_AT(c, 0x2a4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x2B4u))); push32(c, 0x2acu);
      switch (t) {
      case 0x450u: f_00000450(c); break;
      case 0x678u: f_00000678(c); break;
      case 0xc20u: f_00000c20(c); break;
      case 0xd94u: f_00000d94(c); break;
      case 0x17b0u: f_000017b0(c); break;
      case 0x17e8u: f_000017e8(c); break;
      case 0x1834u: f_00001834(c); break;
      case 0x19b8u: f_000019b8(c); break;
      case 0x1abcu: f_00001abc(c); break;
      case 0x1b2cu: f_00001b2c(c); break;
      case 0x1c6cu: f_00001c6c(c); break;
      case 0x1d0cu: f_00001d0c(c); break;
      case 0x1da8u: f_00001da8(c); break;
      case 0x1dd0u: f_00001dd0(c); break;
      case 0x1de8u: f_00001de8(c); break;
      case 0x1e04u: f_00001e04(c); break;
      case 0x1e28u: f_00001e28(c); break;
      case 0x1e64u: f_00001e64(c); break;
      case 0x1ea0u: f_00001ea0(c); break;
      case 0x1eb0u: f_00001eb0(c); break;
      case 0x1ee8u: f_00001ee8(c); break;
      case 0x1ef4u: f_00001ef4(c); break;
      case 0x1f0cu: f_00001f0c(c); break;
      case 0x1f1cu: f_00001f1c(c); break;
      case 0x1f30u: f_00001f30(c); break;
      case 0x1f44u: f_00001f44(c); break;
      case 0x1f50u: f_00001f50(c); break;
      case 0x1f70u: f_00001f70(c); break;
      case 0x1f7cu: f_00001f7c(c); break;
      case 0x1fd4u: f_00001fd4(c); break;
      case 0x2018u: f_00002018(c); break;
      case 0x206cu: f_0000206c(c); break;
      case 0x20e8u: f_000020e8(c); break;
      case 0x20f8u: f_000020f8(c); break;
      case 0x210cu: f_0000210c(c); break;
      case 0x2178u: f_00002178(c); break;
      case 0x2234u: f_00002234(c); break;
      case 0x2294u: f_00002294(c); break;
      case 0x2400u: f_00002400(c); break;
      case 0x244cu: f_0000244c(c); break;
      case 0x245cu: f_0000245c(c); break;
      case 0x2568u: f_00002568(c); break;
      case 0x2680u: f_00002680(c); break;
      case 0x285cu: f_0000285c(c); break;
      case 0x29a8u: f_000029a8(c); break;
      case 0x2a3cu: f_00002a3c(c); break;
      case 0x2af8u: f_00002af8(c); break;
      case 0x2b8cu: f_00002b8c(c); break;
      case 0x2ce8u: f_00002ce8(c); break;
      case 0x2d58u: f_00002d58(c); break;
      case 0x2d78u: f_00002d78(c); break;
      case 0x2e80u: f_00002e80(c); break;
      case 0x30d4u: f_000030d4(c); break;
      case 0x3178u: f_00003178(c); break;
      case 0x31b4u: f_000031b4(c); break;
      case 0x3290u: f_00003290(c); break;
      case 0x333cu: f_0000333c(c); break;
      case 0x336cu: f_0000336c(c); break;
      case 0x33d8u: f_000033d8(c); break;
      case 0x33e8u: f_000033e8(c); break;
      case 0x3464u: f_00003464(c); break;
      case 0x3480u: f_00003480(c); break;
      case 0x34ecu: f_000034ec(c); break;
      case 0x34fcu: f_000034fc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2acu); }
    X86_TICK(c, 48);
    // 0002ac  popal 
    X86_AT(c, 0x2acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x28fu, "ran off the end of a function");
}
void f_00000297(X86Cpu& c) {
    X86_TICK(c, 40);
    // 000297  pushfd 
    X86_AT(c, 0x297u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 000298  cld 
    X86_AT(c, 0x298u);
    c.fl &= ~X86_DF;
    // 000299  pushal 
    X86_AT(c, 0x299u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 00029a  mov ebp, edi
    X86_AT(c, 0x29au);
    c.r[5] = c.r[7];
    // 00029c  mov byte ptr [esp + 0x1d], 0
    X86_AT(c, 0x29cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x1Du)), 0x0u);
    // 0002a1  movzx edi, ah
    X86_AT(c, 0x2a1u);
    c.r[7] = g8(c, 4);
    // 0002a4  call dword ptr cs:[edi*4 + 0x2b4]
    X86_AT(c, 0x2a4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x2B4u))); push32(c, 0x2acu);
      switch (t) {
      case 0x450u: f_00000450(c); break;
      case 0x678u: f_00000678(c); break;
      case 0xc20u: f_00000c20(c); break;
      case 0xd94u: f_00000d94(c); break;
      case 0x17b0u: f_000017b0(c); break;
      case 0x17e8u: f_000017e8(c); break;
      case 0x1834u: f_00001834(c); break;
      case 0x19b8u: f_000019b8(c); break;
      case 0x1abcu: f_00001abc(c); break;
      case 0x1b2cu: f_00001b2c(c); break;
      case 0x1c6cu: f_00001c6c(c); break;
      case 0x1d0cu: f_00001d0c(c); break;
      case 0x1da8u: f_00001da8(c); break;
      case 0x1dd0u: f_00001dd0(c); break;
      case 0x1de8u: f_00001de8(c); break;
      case 0x1e04u: f_00001e04(c); break;
      case 0x1e28u: f_00001e28(c); break;
      case 0x1e64u: f_00001e64(c); break;
      case 0x1ea0u: f_00001ea0(c); break;
      case 0x1eb0u: f_00001eb0(c); break;
      case 0x1ee8u: f_00001ee8(c); break;
      case 0x1ef4u: f_00001ef4(c); break;
      case 0x1f0cu: f_00001f0c(c); break;
      case 0x1f1cu: f_00001f1c(c); break;
      case 0x1f30u: f_00001f30(c); break;
      case 0x1f44u: f_00001f44(c); break;
      case 0x1f50u: f_00001f50(c); break;
      case 0x1f70u: f_00001f70(c); break;
      case 0x1f7cu: f_00001f7c(c); break;
      case 0x1fd4u: f_00001fd4(c); break;
      case 0x2018u: f_00002018(c); break;
      case 0x206cu: f_0000206c(c); break;
      case 0x20e8u: f_000020e8(c); break;
      case 0x20f8u: f_000020f8(c); break;
      case 0x210cu: f_0000210c(c); break;
      case 0x2178u: f_00002178(c); break;
      case 0x2234u: f_00002234(c); break;
      case 0x2294u: f_00002294(c); break;
      case 0x2400u: f_00002400(c); break;
      case 0x244cu: f_0000244c(c); break;
      case 0x245cu: f_0000245c(c); break;
      case 0x2568u: f_00002568(c); break;
      case 0x2680u: f_00002680(c); break;
      case 0x285cu: f_0000285c(c); break;
      case 0x29a8u: f_000029a8(c); break;
      case 0x2a3cu: f_00002a3c(c); break;
      case 0x2af8u: f_00002af8(c); break;
      case 0x2b8cu: f_00002b8c(c); break;
      case 0x2ce8u: f_00002ce8(c); break;
      case 0x2d58u: f_00002d58(c); break;
      case 0x2d78u: f_00002d78(c); break;
      case 0x2e80u: f_00002e80(c); break;
      case 0x30d4u: f_000030d4(c); break;
      case 0x3178u: f_00003178(c); break;
      case 0x31b4u: f_000031b4(c); break;
      case 0x3290u: f_00003290(c); break;
      case 0x333cu: f_0000333c(c); break;
      case 0x336cu: f_0000336c(c); break;
      case 0x33d8u: f_000033d8(c); break;
      case 0x33e8u: f_000033e8(c); break;
      case 0x3464u: f_00003464(c); break;
      case 0x3480u: f_00003480(c); break;
      case 0x34ecu: f_000034ec(c); break;
      case 0x34fcu: f_000034fc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2acu); }
    X86_TICK(c, 48);
    // 0002ac  popal 
    X86_AT(c, 0x2acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x297u, "ran off the end of a function");
}
void f_00000298(X86Cpu& c) {
    X86_TICK(c, 34);
    // 000298  cld 
    X86_AT(c, 0x298u);
    c.fl &= ~X86_DF;
    // 000299  pushal 
    X86_AT(c, 0x299u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 00029a  mov ebp, edi
    X86_AT(c, 0x29au);
    c.r[5] = c.r[7];
    // 00029c  mov byte ptr [esp + 0x1d], 0
    X86_AT(c, 0x29cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x1Du)), 0x0u);
    // 0002a1  movzx edi, ah
    X86_AT(c, 0x2a1u);
    c.r[7] = g8(c, 4);
    // 0002a4  call dword ptr cs:[edi*4 + 0x2b4]
    X86_AT(c, 0x2a4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x2B4u))); push32(c, 0x2acu);
      switch (t) {
      case 0x450u: f_00000450(c); break;
      case 0x678u: f_00000678(c); break;
      case 0xc20u: f_00000c20(c); break;
      case 0xd94u: f_00000d94(c); break;
      case 0x17b0u: f_000017b0(c); break;
      case 0x17e8u: f_000017e8(c); break;
      case 0x1834u: f_00001834(c); break;
      case 0x19b8u: f_000019b8(c); break;
      case 0x1abcu: f_00001abc(c); break;
      case 0x1b2cu: f_00001b2c(c); break;
      case 0x1c6cu: f_00001c6c(c); break;
      case 0x1d0cu: f_00001d0c(c); break;
      case 0x1da8u: f_00001da8(c); break;
      case 0x1dd0u: f_00001dd0(c); break;
      case 0x1de8u: f_00001de8(c); break;
      case 0x1e04u: f_00001e04(c); break;
      case 0x1e28u: f_00001e28(c); break;
      case 0x1e64u: f_00001e64(c); break;
      case 0x1ea0u: f_00001ea0(c); break;
      case 0x1eb0u: f_00001eb0(c); break;
      case 0x1ee8u: f_00001ee8(c); break;
      case 0x1ef4u: f_00001ef4(c); break;
      case 0x1f0cu: f_00001f0c(c); break;
      case 0x1f1cu: f_00001f1c(c); break;
      case 0x1f30u: f_00001f30(c); break;
      case 0x1f44u: f_00001f44(c); break;
      case 0x1f50u: f_00001f50(c); break;
      case 0x1f70u: f_00001f70(c); break;
      case 0x1f7cu: f_00001f7c(c); break;
      case 0x1fd4u: f_00001fd4(c); break;
      case 0x2018u: f_00002018(c); break;
      case 0x206cu: f_0000206c(c); break;
      case 0x20e8u: f_000020e8(c); break;
      case 0x20f8u: f_000020f8(c); break;
      case 0x210cu: f_0000210c(c); break;
      case 0x2178u: f_00002178(c); break;
      case 0x2234u: f_00002234(c); break;
      case 0x2294u: f_00002294(c); break;
      case 0x2400u: f_00002400(c); break;
      case 0x244cu: f_0000244c(c); break;
      case 0x245cu: f_0000245c(c); break;
      case 0x2568u: f_00002568(c); break;
      case 0x2680u: f_00002680(c); break;
      case 0x285cu: f_0000285c(c); break;
      case 0x29a8u: f_000029a8(c); break;
      case 0x2a3cu: f_00002a3c(c); break;
      case 0x2af8u: f_00002af8(c); break;
      case 0x2b8cu: f_00002b8c(c); break;
      case 0x2ce8u: f_00002ce8(c); break;
      case 0x2d58u: f_00002d58(c); break;
      case 0x2d78u: f_00002d78(c); break;
      case 0x2e80u: f_00002e80(c); break;
      case 0x30d4u: f_000030d4(c); break;
      case 0x3178u: f_00003178(c); break;
      case 0x31b4u: f_000031b4(c); break;
      case 0x3290u: f_00003290(c); break;
      case 0x333cu: f_0000333c(c); break;
      case 0x336cu: f_0000336c(c); break;
      case 0x33d8u: f_000033d8(c); break;
      case 0x33e8u: f_000033e8(c); break;
      case 0x3464u: f_00003464(c); break;
      case 0x3480u: f_00003480(c); break;
      case 0x34ecu: f_000034ec(c); break;
      case 0x34fcu: f_000034fc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2acu); }
    X86_TICK(c, 48);
    // 0002ac  popal 
    X86_AT(c, 0x2acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x298u, "ran off the end of a function");
}
void f_00000299(X86Cpu& c) {
    X86_TICK(c, 32);
    // 000299  pushal 
    X86_AT(c, 0x299u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 00029a  mov ebp, edi
    X86_AT(c, 0x29au);
    c.r[5] = c.r[7];
    // 00029c  mov byte ptr [esp + 0x1d], 0
    X86_AT(c, 0x29cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x1Du)), 0x0u);
    // 0002a1  movzx edi, ah
    X86_AT(c, 0x2a1u);
    c.r[7] = g8(c, 4);
    // 0002a4  call dword ptr cs:[edi*4 + 0x2b4]
    X86_AT(c, 0x2a4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x2B4u))); push32(c, 0x2acu);
      switch (t) {
      case 0x450u: f_00000450(c); break;
      case 0x678u: f_00000678(c); break;
      case 0xc20u: f_00000c20(c); break;
      case 0xd94u: f_00000d94(c); break;
      case 0x17b0u: f_000017b0(c); break;
      case 0x17e8u: f_000017e8(c); break;
      case 0x1834u: f_00001834(c); break;
      case 0x19b8u: f_000019b8(c); break;
      case 0x1abcu: f_00001abc(c); break;
      case 0x1b2cu: f_00001b2c(c); break;
      case 0x1c6cu: f_00001c6c(c); break;
      case 0x1d0cu: f_00001d0c(c); break;
      case 0x1da8u: f_00001da8(c); break;
      case 0x1dd0u: f_00001dd0(c); break;
      case 0x1de8u: f_00001de8(c); break;
      case 0x1e04u: f_00001e04(c); break;
      case 0x1e28u: f_00001e28(c); break;
      case 0x1e64u: f_00001e64(c); break;
      case 0x1ea0u: f_00001ea0(c); break;
      case 0x1eb0u: f_00001eb0(c); break;
      case 0x1ee8u: f_00001ee8(c); break;
      case 0x1ef4u: f_00001ef4(c); break;
      case 0x1f0cu: f_00001f0c(c); break;
      case 0x1f1cu: f_00001f1c(c); break;
      case 0x1f30u: f_00001f30(c); break;
      case 0x1f44u: f_00001f44(c); break;
      case 0x1f50u: f_00001f50(c); break;
      case 0x1f70u: f_00001f70(c); break;
      case 0x1f7cu: f_00001f7c(c); break;
      case 0x1fd4u: f_00001fd4(c); break;
      case 0x2018u: f_00002018(c); break;
      case 0x206cu: f_0000206c(c); break;
      case 0x20e8u: f_000020e8(c); break;
      case 0x20f8u: f_000020f8(c); break;
      case 0x210cu: f_0000210c(c); break;
      case 0x2178u: f_00002178(c); break;
      case 0x2234u: f_00002234(c); break;
      case 0x2294u: f_00002294(c); break;
      case 0x2400u: f_00002400(c); break;
      case 0x244cu: f_0000244c(c); break;
      case 0x245cu: f_0000245c(c); break;
      case 0x2568u: f_00002568(c); break;
      case 0x2680u: f_00002680(c); break;
      case 0x285cu: f_0000285c(c); break;
      case 0x29a8u: f_000029a8(c); break;
      case 0x2a3cu: f_00002a3c(c); break;
      case 0x2af8u: f_00002af8(c); break;
      case 0x2b8cu: f_00002b8c(c); break;
      case 0x2ce8u: f_00002ce8(c); break;
      case 0x2d58u: f_00002d58(c); break;
      case 0x2d78u: f_00002d78(c); break;
      case 0x2e80u: f_00002e80(c); break;
      case 0x30d4u: f_000030d4(c); break;
      case 0x3178u: f_00003178(c); break;
      case 0x31b4u: f_000031b4(c); break;
      case 0x3290u: f_00003290(c); break;
      case 0x333cu: f_0000333c(c); break;
      case 0x336cu: f_0000336c(c); break;
      case 0x33d8u: f_000033d8(c); break;
      case 0x33e8u: f_000033e8(c); break;
      case 0x3464u: f_00003464(c); break;
      case 0x3480u: f_00003480(c); break;
      case 0x34ecu: f_000034ec(c); break;
      case 0x34fcu: f_000034fc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2acu); }
    X86_TICK(c, 48);
    // 0002ac  popal 
    X86_AT(c, 0x2acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x299u, "ran off the end of a function");
}
void f_0000029a(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00029a  mov ebp, edi
    X86_AT(c, 0x29au);
    c.r[5] = c.r[7];
    // 00029c  mov byte ptr [esp + 0x1d], 0
    X86_AT(c, 0x29cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x1Du)), 0x0u);
    // 0002a1  movzx edi, ah
    X86_AT(c, 0x2a1u);
    c.r[7] = g8(c, 4);
    // 0002a4  call dword ptr cs:[edi*4 + 0x2b4]
    X86_AT(c, 0x2a4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x2B4u))); push32(c, 0x2acu);
      switch (t) {
      case 0x450u: f_00000450(c); break;
      case 0x678u: f_00000678(c); break;
      case 0xc20u: f_00000c20(c); break;
      case 0xd94u: f_00000d94(c); break;
      case 0x17b0u: f_000017b0(c); break;
      case 0x17e8u: f_000017e8(c); break;
      case 0x1834u: f_00001834(c); break;
      case 0x19b8u: f_000019b8(c); break;
      case 0x1abcu: f_00001abc(c); break;
      case 0x1b2cu: f_00001b2c(c); break;
      case 0x1c6cu: f_00001c6c(c); break;
      case 0x1d0cu: f_00001d0c(c); break;
      case 0x1da8u: f_00001da8(c); break;
      case 0x1dd0u: f_00001dd0(c); break;
      case 0x1de8u: f_00001de8(c); break;
      case 0x1e04u: f_00001e04(c); break;
      case 0x1e28u: f_00001e28(c); break;
      case 0x1e64u: f_00001e64(c); break;
      case 0x1ea0u: f_00001ea0(c); break;
      case 0x1eb0u: f_00001eb0(c); break;
      case 0x1ee8u: f_00001ee8(c); break;
      case 0x1ef4u: f_00001ef4(c); break;
      case 0x1f0cu: f_00001f0c(c); break;
      case 0x1f1cu: f_00001f1c(c); break;
      case 0x1f30u: f_00001f30(c); break;
      case 0x1f44u: f_00001f44(c); break;
      case 0x1f50u: f_00001f50(c); break;
      case 0x1f70u: f_00001f70(c); break;
      case 0x1f7cu: f_00001f7c(c); break;
      case 0x1fd4u: f_00001fd4(c); break;
      case 0x2018u: f_00002018(c); break;
      case 0x206cu: f_0000206c(c); break;
      case 0x20e8u: f_000020e8(c); break;
      case 0x20f8u: f_000020f8(c); break;
      case 0x210cu: f_0000210c(c); break;
      case 0x2178u: f_00002178(c); break;
      case 0x2234u: f_00002234(c); break;
      case 0x2294u: f_00002294(c); break;
      case 0x2400u: f_00002400(c); break;
      case 0x244cu: f_0000244c(c); break;
      case 0x245cu: f_0000245c(c); break;
      case 0x2568u: f_00002568(c); break;
      case 0x2680u: f_00002680(c); break;
      case 0x285cu: f_0000285c(c); break;
      case 0x29a8u: f_000029a8(c); break;
      case 0x2a3cu: f_00002a3c(c); break;
      case 0x2af8u: f_00002af8(c); break;
      case 0x2b8cu: f_00002b8c(c); break;
      case 0x2ce8u: f_00002ce8(c); break;
      case 0x2d58u: f_00002d58(c); break;
      case 0x2d78u: f_00002d78(c); break;
      case 0x2e80u: f_00002e80(c); break;
      case 0x30d4u: f_000030d4(c); break;
      case 0x3178u: f_00003178(c); break;
      case 0x31b4u: f_000031b4(c); break;
      case 0x3290u: f_00003290(c); break;
      case 0x333cu: f_0000333c(c); break;
      case 0x336cu: f_0000336c(c); break;
      case 0x33d8u: f_000033d8(c); break;
      case 0x33e8u: f_000033e8(c); break;
      case 0x3464u: f_00003464(c); break;
      case 0x3480u: f_00003480(c); break;
      case 0x34ecu: f_000034ec(c); break;
      case 0x34fcu: f_000034fc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2acu); }
    X86_TICK(c, 48);
    // 0002ac  popal 
    X86_AT(c, 0x2acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x29au, "ran off the end of a function");
}
void f_0000029c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00029c  mov byte ptr [esp + 0x1d], 0
    X86_AT(c, 0x29cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x1Du)), 0x0u);
    // 0002a1  movzx edi, ah
    X86_AT(c, 0x2a1u);
    c.r[7] = g8(c, 4);
    // 0002a4  call dword ptr cs:[edi*4 + 0x2b4]
    X86_AT(c, 0x2a4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x2B4u))); push32(c, 0x2acu);
      switch (t) {
      case 0x450u: f_00000450(c); break;
      case 0x678u: f_00000678(c); break;
      case 0xc20u: f_00000c20(c); break;
      case 0xd94u: f_00000d94(c); break;
      case 0x17b0u: f_000017b0(c); break;
      case 0x17e8u: f_000017e8(c); break;
      case 0x1834u: f_00001834(c); break;
      case 0x19b8u: f_000019b8(c); break;
      case 0x1abcu: f_00001abc(c); break;
      case 0x1b2cu: f_00001b2c(c); break;
      case 0x1c6cu: f_00001c6c(c); break;
      case 0x1d0cu: f_00001d0c(c); break;
      case 0x1da8u: f_00001da8(c); break;
      case 0x1dd0u: f_00001dd0(c); break;
      case 0x1de8u: f_00001de8(c); break;
      case 0x1e04u: f_00001e04(c); break;
      case 0x1e28u: f_00001e28(c); break;
      case 0x1e64u: f_00001e64(c); break;
      case 0x1ea0u: f_00001ea0(c); break;
      case 0x1eb0u: f_00001eb0(c); break;
      case 0x1ee8u: f_00001ee8(c); break;
      case 0x1ef4u: f_00001ef4(c); break;
      case 0x1f0cu: f_00001f0c(c); break;
      case 0x1f1cu: f_00001f1c(c); break;
      case 0x1f30u: f_00001f30(c); break;
      case 0x1f44u: f_00001f44(c); break;
      case 0x1f50u: f_00001f50(c); break;
      case 0x1f70u: f_00001f70(c); break;
      case 0x1f7cu: f_00001f7c(c); break;
      case 0x1fd4u: f_00001fd4(c); break;
      case 0x2018u: f_00002018(c); break;
      case 0x206cu: f_0000206c(c); break;
      case 0x20e8u: f_000020e8(c); break;
      case 0x20f8u: f_000020f8(c); break;
      case 0x210cu: f_0000210c(c); break;
      case 0x2178u: f_00002178(c); break;
      case 0x2234u: f_00002234(c); break;
      case 0x2294u: f_00002294(c); break;
      case 0x2400u: f_00002400(c); break;
      case 0x244cu: f_0000244c(c); break;
      case 0x245cu: f_0000245c(c); break;
      case 0x2568u: f_00002568(c); break;
      case 0x2680u: f_00002680(c); break;
      case 0x285cu: f_0000285c(c); break;
      case 0x29a8u: f_000029a8(c); break;
      case 0x2a3cu: f_00002a3c(c); break;
      case 0x2af8u: f_00002af8(c); break;
      case 0x2b8cu: f_00002b8c(c); break;
      case 0x2ce8u: f_00002ce8(c); break;
      case 0x2d58u: f_00002d58(c); break;
      case 0x2d78u: f_00002d78(c); break;
      case 0x2e80u: f_00002e80(c); break;
      case 0x30d4u: f_000030d4(c); break;
      case 0x3178u: f_00003178(c); break;
      case 0x31b4u: f_000031b4(c); break;
      case 0x3290u: f_00003290(c); break;
      case 0x333cu: f_0000333c(c); break;
      case 0x336cu: f_0000336c(c); break;
      case 0x33d8u: f_000033d8(c); break;
      case 0x33e8u: f_000033e8(c); break;
      case 0x3464u: f_00003464(c); break;
      case 0x3480u: f_00003480(c); break;
      case 0x34ecu: f_000034ec(c); break;
      case 0x34fcu: f_000034fc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2acu); }
    X86_TICK(c, 48);
    // 0002ac  popal 
    X86_AT(c, 0x2acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x29cu, "ran off the end of a function");
}
void f_000002a1(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0002a1  movzx edi, ah
    X86_AT(c, 0x2a1u);
    c.r[7] = g8(c, 4);
    // 0002a4  call dword ptr cs:[edi*4 + 0x2b4]
    X86_AT(c, 0x2a4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x2B4u))); push32(c, 0x2acu);
      switch (t) {
      case 0x450u: f_00000450(c); break;
      case 0x678u: f_00000678(c); break;
      case 0xc20u: f_00000c20(c); break;
      case 0xd94u: f_00000d94(c); break;
      case 0x17b0u: f_000017b0(c); break;
      case 0x17e8u: f_000017e8(c); break;
      case 0x1834u: f_00001834(c); break;
      case 0x19b8u: f_000019b8(c); break;
      case 0x1abcu: f_00001abc(c); break;
      case 0x1b2cu: f_00001b2c(c); break;
      case 0x1c6cu: f_00001c6c(c); break;
      case 0x1d0cu: f_00001d0c(c); break;
      case 0x1da8u: f_00001da8(c); break;
      case 0x1dd0u: f_00001dd0(c); break;
      case 0x1de8u: f_00001de8(c); break;
      case 0x1e04u: f_00001e04(c); break;
      case 0x1e28u: f_00001e28(c); break;
      case 0x1e64u: f_00001e64(c); break;
      case 0x1ea0u: f_00001ea0(c); break;
      case 0x1eb0u: f_00001eb0(c); break;
      case 0x1ee8u: f_00001ee8(c); break;
      case 0x1ef4u: f_00001ef4(c); break;
      case 0x1f0cu: f_00001f0c(c); break;
      case 0x1f1cu: f_00001f1c(c); break;
      case 0x1f30u: f_00001f30(c); break;
      case 0x1f44u: f_00001f44(c); break;
      case 0x1f50u: f_00001f50(c); break;
      case 0x1f70u: f_00001f70(c); break;
      case 0x1f7cu: f_00001f7c(c); break;
      case 0x1fd4u: f_00001fd4(c); break;
      case 0x2018u: f_00002018(c); break;
      case 0x206cu: f_0000206c(c); break;
      case 0x20e8u: f_000020e8(c); break;
      case 0x20f8u: f_000020f8(c); break;
      case 0x210cu: f_0000210c(c); break;
      case 0x2178u: f_00002178(c); break;
      case 0x2234u: f_00002234(c); break;
      case 0x2294u: f_00002294(c); break;
      case 0x2400u: f_00002400(c); break;
      case 0x244cu: f_0000244c(c); break;
      case 0x245cu: f_0000245c(c); break;
      case 0x2568u: f_00002568(c); break;
      case 0x2680u: f_00002680(c); break;
      case 0x285cu: f_0000285c(c); break;
      case 0x29a8u: f_000029a8(c); break;
      case 0x2a3cu: f_00002a3c(c); break;
      case 0x2af8u: f_00002af8(c); break;
      case 0x2b8cu: f_00002b8c(c); break;
      case 0x2ce8u: f_00002ce8(c); break;
      case 0x2d58u: f_00002d58(c); break;
      case 0x2d78u: f_00002d78(c); break;
      case 0x2e80u: f_00002e80(c); break;
      case 0x30d4u: f_000030d4(c); break;
      case 0x3178u: f_00003178(c); break;
      case 0x31b4u: f_000031b4(c); break;
      case 0x3290u: f_00003290(c); break;
      case 0x333cu: f_0000333c(c); break;
      case 0x336cu: f_0000336c(c); break;
      case 0x33d8u: f_000033d8(c); break;
      case 0x33e8u: f_000033e8(c); break;
      case 0x3464u: f_00003464(c); break;
      case 0x3480u: f_00003480(c); break;
      case 0x34ecu: f_000034ec(c); break;
      case 0x34fcu: f_000034fc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2acu); }
    X86_TICK(c, 48);
    // 0002ac  popal 
    X86_AT(c, 0x2acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x2a1u, "ran off the end of a function");
}
void f_000002a4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0002a4  call dword ptr cs:[edi*4 + 0x2b4]
    X86_AT(c, 0x2a4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x2B4u))); push32(c, 0x2acu);
      switch (t) {
      case 0x450u: f_00000450(c); break;
      case 0x678u: f_00000678(c); break;
      case 0xc20u: f_00000c20(c); break;
      case 0xd94u: f_00000d94(c); break;
      case 0x17b0u: f_000017b0(c); break;
      case 0x17e8u: f_000017e8(c); break;
      case 0x1834u: f_00001834(c); break;
      case 0x19b8u: f_000019b8(c); break;
      case 0x1abcu: f_00001abc(c); break;
      case 0x1b2cu: f_00001b2c(c); break;
      case 0x1c6cu: f_00001c6c(c); break;
      case 0x1d0cu: f_00001d0c(c); break;
      case 0x1da8u: f_00001da8(c); break;
      case 0x1dd0u: f_00001dd0(c); break;
      case 0x1de8u: f_00001de8(c); break;
      case 0x1e04u: f_00001e04(c); break;
      case 0x1e28u: f_00001e28(c); break;
      case 0x1e64u: f_00001e64(c); break;
      case 0x1ea0u: f_00001ea0(c); break;
      case 0x1eb0u: f_00001eb0(c); break;
      case 0x1ee8u: f_00001ee8(c); break;
      case 0x1ef4u: f_00001ef4(c); break;
      case 0x1f0cu: f_00001f0c(c); break;
      case 0x1f1cu: f_00001f1c(c); break;
      case 0x1f30u: f_00001f30(c); break;
      case 0x1f44u: f_00001f44(c); break;
      case 0x1f50u: f_00001f50(c); break;
      case 0x1f70u: f_00001f70(c); break;
      case 0x1f7cu: f_00001f7c(c); break;
      case 0x1fd4u: f_00001fd4(c); break;
      case 0x2018u: f_00002018(c); break;
      case 0x206cu: f_0000206c(c); break;
      case 0x20e8u: f_000020e8(c); break;
      case 0x20f8u: f_000020f8(c); break;
      case 0x210cu: f_0000210c(c); break;
      case 0x2178u: f_00002178(c); break;
      case 0x2234u: f_00002234(c); break;
      case 0x2294u: f_00002294(c); break;
      case 0x2400u: f_00002400(c); break;
      case 0x244cu: f_0000244c(c); break;
      case 0x245cu: f_0000245c(c); break;
      case 0x2568u: f_00002568(c); break;
      case 0x2680u: f_00002680(c); break;
      case 0x285cu: f_0000285c(c); break;
      case 0x29a8u: f_000029a8(c); break;
      case 0x2a3cu: f_00002a3c(c); break;
      case 0x2af8u: f_00002af8(c); break;
      case 0x2b8cu: f_00002b8c(c); break;
      case 0x2ce8u: f_00002ce8(c); break;
      case 0x2d58u: f_00002d58(c); break;
      case 0x2d78u: f_00002d78(c); break;
      case 0x2e80u: f_00002e80(c); break;
      case 0x30d4u: f_000030d4(c); break;
      case 0x3178u: f_00003178(c); break;
      case 0x31b4u: f_000031b4(c); break;
      case 0x3290u: f_00003290(c); break;
      case 0x333cu: f_0000333c(c); break;
      case 0x336cu: f_0000336c(c); break;
      case 0x33d8u: f_000033d8(c); break;
      case 0x33e8u: f_000033e8(c); break;
      case 0x3464u: f_00003464(c); break;
      case 0x3480u: f_00003480(c); break;
      case 0x34ecu: f_000034ec(c); break;
      case 0x34fcu: f_000034fc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2acu); }
    X86_TICK(c, 48);
    // 0002ac  popal 
    X86_AT(c, 0x2acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x2a4u, "ran off the end of a function");
}
void f_000002ac(X86Cpu& c) {
    X86_TICK(c, 48);
    // 0002ac  popal 
    X86_AT(c, 0x2acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x2acu, "ran off the end of a function");
}
void f_000002ad(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0002ad  popfd 
    X86_AT(c, 0x2adu);
    x86_popfd(c, 4);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x2adu, "ran off the end of a function");
}
void f_000002ae(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0002ae  pop ds
    X86_AT(c, 0x2aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x2aeu, "ran off the end of a function");
}
void f_000002af(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0002af  pop es
    X86_AT(c, 0x2afu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x2afu, "ran off the end of a function");
}
void f_000002b0(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0002b0  pop fs
    X86_AT(c, 0x2b0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x2b0u, "ran off the end of a function");
}
void f_000002b2(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0002b2  retf 
    X86_AT(c, 0x2b2u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x2b2u, "ran off the end of a function");
}
void f_00000450(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
    x86_fault(c, 0x450u, "ran off the end of a function");
}
void f_00000452(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
    x86_fault(c, 0x452u, "ran off the end of a function");
}
void f_00000458(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x458u, "ran off the end of a function");
}
void f_0000045a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x45au, "ran off the end of a function");
}
void f_00000460(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x460u, "ran off the end of a function");
}
void f_00000463(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x463u, "ran off the end of a function");
}
void f_00000469(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x469u, "ran off the end of a function");
}
void f_0000046d(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x46du, "ran off the end of a function");
}
void f_0000046f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x46fu, "ran off the end of a function");
}
void f_00000471(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x471u, "ran off the end of a function");
}
void f_00000473(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x473u, "ran off the end of a function");
}
void f_00000477(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x477u, "ran off the end of a function");
}
void f_00000479(X86Cpu& c) {
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x479u, "ran off the end of a function");
}
void f_0000047a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x47au, "ran off the end of a function");
}
void f_0000047f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x47fu, "ran off the end of a function");
}
void f_00000484(X86Cpu& c) {
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x484u, "ran off the end of a function");
}
void f_00000485(X86Cpu& c) {
    X86_TICK(c, 13);
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x485u, "ran off the end of a function");
}
void f_0000048e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x48eu, "ran off the end of a function");
}
void f_00000496(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x496u, "ran off the end of a function");
}
void f_0000049b(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49bu, "ran off the end of a function");
}
void f_0000049c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49cu, "ran off the end of a function");
}
void f_0000049d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49du, "ran off the end of a function");
}
void f_0000049f(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49fu, "ran off the end of a function");
}
void f_000004a1(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a1u, "ran off the end of a function");
}
void f_000004a6(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a6u, "ran off the end of a function");
}
void f_000004a8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a8u, "ran off the end of a function");
}
void f_000004ac(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4acu, "ran off the end of a function");
}
void f_000004ae(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4aeu, "ran off the end of a function");
}
void f_000004b2(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b2u, "ran off the end of a function");
}
void f_000004b4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b4u, "ran off the end of a function");
}
void f_000004b8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b8u, "ran off the end of a function");
}
void f_000004ba(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4bau, "ran off the end of a function");
}
void f_000004bc(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4bcu, "ran off the end of a function");
}
void f_000004c0(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c0u, "ran off the end of a function");
}
void f_000004c2(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c2u, "ran off the end of a function");
}
void f_000004c5(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c5u, "ran off the end of a function");
}
void f_000004ca(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4cau, "ran off the end of a function");
}
void f_000004cf(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4cfu, "ran off the end of a function");
}
void f_000004d4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d4u, "ran off the end of a function");
}
void f_000004d8(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d8u, "ran off the end of a function");
}
void f_000004da(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4dau, "ran off the end of a function");
}
void f_000004df(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4dfu, "ran off the end of a function");
}
void f_000004e4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e4u, "ran off the end of a function");
}
void f_000004e7(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e7u, "ran off the end of a function");
}
void f_000004e9(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e9u, "ran off the end of a function");
}
void f_000004ee(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4eeu, "ran off the end of a function");
}
void f_000004ef(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4efu, "ran off the end of a function");
}
void f_000004f4(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4f4u, "ran off the end of a function");
}
void f_00000514(X86Cpu& c) {
    X86_TICK(c, 33);
    // 000514  push eax
    X86_AT(c, 0x514u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000515  movzx eax, al
    X86_AT(c, 0x515u);
    c.r[0] = g8(c, 0);
    // 000518  lea eax, [eax + eax*2]
    X86_AT(c, 0x518u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 00051b  lea edi, [edi + eax*4]
    X86_AT(c, 0x51bu);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 00051e  pop eax
    X86_AT(c, 0x51eu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00051f  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x51fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 000524  mov word ptr gs:[ebp + edi*1 + 4], ds
    X86_AT(c, 0x524u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (uint32_t)c.sreg[3]);
    // 000529  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x529u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 00052f  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x52fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 000535  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x535u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 00053b  ret 
    X86_AT(c, 0x53bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x514u, "ran off the end of a function");
}
void f_0000053c(X86Cpu& c) {
    X86_TICK(c, 50);
    // 00053c  push esi
    X86_AT(c, 0x53cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00053d  mov ch, dl
    X86_AT(c, 0x53du);
    s8(c, 5, g8(c, 2));
    // 00053f  movzx edx, dx
    X86_AT(c, 0x53fu);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 000542  lea edx, [edx + edx*4]
    X86_AT(c, 0x542u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 000545  lea esi, [edx*2 + 0x598]
    X86_AT(c, 0x545u);
    c.r[6] = (uint32_t)(c.r[2] * 2 + 0x598u);
    // 00054c  mov dx, word ptr cs:[esi]
    X86_AT(c, 0x54cu);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[6]))));
    // 000550  mov bx, word ptr cs:[esi + 2]
    X86_AT(c, 0x550u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[6] + 0x2u))));
    // 000555  mov cl, byte ptr cs:[esi + 8]
    X86_AT(c, 0x555u);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[6] + 0x8u))));
    // 000559  push eax
    X86_AT(c, 0x559u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00055a  movzx eax, al
    X86_AT(c, 0x55au);
    c.r[0] = g8(c, 0);
    // 00055d  lea eax, [eax + eax*2]
    X86_AT(c, 0x55du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000560  lea edi, [edi + eax*4]
    X86_AT(c, 0x560u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 000563  movzx esi, byte ptr [esp]
    X86_AT(c, 0x563u);
    c.r[6] = rd8((c.sbase[2] + (uint32_t)(c.r[4])));
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53cu, "ran off the end of a function");
}
void f_0000053d(X86Cpu& c) {
    X86_TICK(c, 48);
    // 00053d  mov ch, dl
    X86_AT(c, 0x53du);
    s8(c, 5, g8(c, 2));
    // 00053f  movzx edx, dx
    X86_AT(c, 0x53fu);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 000542  lea edx, [edx + edx*4]
    X86_AT(c, 0x542u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 000545  lea esi, [edx*2 + 0x598]
    X86_AT(c, 0x545u);
    c.r[6] = (uint32_t)(c.r[2] * 2 + 0x598u);
    // 00054c  mov dx, word ptr cs:[esi]
    X86_AT(c, 0x54cu);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[6]))));
    // 000550  mov bx, word ptr cs:[esi + 2]
    X86_AT(c, 0x550u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[6] + 0x2u))));
    // 000555  mov cl, byte ptr cs:[esi + 8]
    X86_AT(c, 0x555u);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[6] + 0x8u))));
    // 000559  push eax
    X86_AT(c, 0x559u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00055a  movzx eax, al
    X86_AT(c, 0x55au);
    c.r[0] = g8(c, 0);
    // 00055d  lea eax, [eax + eax*2]
    X86_AT(c, 0x55du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000560  lea edi, [edi + eax*4]
    X86_AT(c, 0x560u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 000563  movzx esi, byte ptr [esp]
    X86_AT(c, 0x563u);
    c.r[6] = rd8((c.sbase[2] + (uint32_t)(c.r[4])));
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53du, "ran off the end of a function");
}
void f_0000053f(X86Cpu& c) {
    X86_TICK(c, 46);
    // 00053f  movzx edx, dx
    X86_AT(c, 0x53fu);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 000542  lea edx, [edx + edx*4]
    X86_AT(c, 0x542u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 000545  lea esi, [edx*2 + 0x598]
    X86_AT(c, 0x545u);
    c.r[6] = (uint32_t)(c.r[2] * 2 + 0x598u);
    // 00054c  mov dx, word ptr cs:[esi]
    X86_AT(c, 0x54cu);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[6]))));
    // 000550  mov bx, word ptr cs:[esi + 2]
    X86_AT(c, 0x550u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[6] + 0x2u))));
    // 000555  mov cl, byte ptr cs:[esi + 8]
    X86_AT(c, 0x555u);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[6] + 0x8u))));
    // 000559  push eax
    X86_AT(c, 0x559u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00055a  movzx eax, al
    X86_AT(c, 0x55au);
    c.r[0] = g8(c, 0);
    // 00055d  lea eax, [eax + eax*2]
    X86_AT(c, 0x55du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000560  lea edi, [edi + eax*4]
    X86_AT(c, 0x560u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 000563  movzx esi, byte ptr [esp]
    X86_AT(c, 0x563u);
    c.r[6] = rd8((c.sbase[2] + (uint32_t)(c.r[4])));
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53fu, "ran off the end of a function");
}
void f_00000542(X86Cpu& c) {
    X86_TICK(c, 43);
    // 000542  lea edx, [edx + edx*4]
    X86_AT(c, 0x542u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 000545  lea esi, [edx*2 + 0x598]
    X86_AT(c, 0x545u);
    c.r[6] = (uint32_t)(c.r[2] * 2 + 0x598u);
    // 00054c  mov dx, word ptr cs:[esi]
    X86_AT(c, 0x54cu);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[6]))));
    // 000550  mov bx, word ptr cs:[esi + 2]
    X86_AT(c, 0x550u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[6] + 0x2u))));
    // 000555  mov cl, byte ptr cs:[esi + 8]
    X86_AT(c, 0x555u);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[6] + 0x8u))));
    // 000559  push eax
    X86_AT(c, 0x559u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00055a  movzx eax, al
    X86_AT(c, 0x55au);
    c.r[0] = g8(c, 0);
    // 00055d  lea eax, [eax + eax*2]
    X86_AT(c, 0x55du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000560  lea edi, [edi + eax*4]
    X86_AT(c, 0x560u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 000563  movzx esi, byte ptr [esp]
    X86_AT(c, 0x563u);
    c.r[6] = rd8((c.sbase[2] + (uint32_t)(c.r[4])));
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x542u, "ran off the end of a function");
}
void f_00000545(X86Cpu& c) {
    X86_TICK(c, 41);
    // 000545  lea esi, [edx*2 + 0x598]
    X86_AT(c, 0x545u);
    c.r[6] = (uint32_t)(c.r[2] * 2 + 0x598u);
    // 00054c  mov dx, word ptr cs:[esi]
    X86_AT(c, 0x54cu);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[6]))));
    // 000550  mov bx, word ptr cs:[esi + 2]
    X86_AT(c, 0x550u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[6] + 0x2u))));
    // 000555  mov cl, byte ptr cs:[esi + 8]
    X86_AT(c, 0x555u);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[6] + 0x8u))));
    // 000559  push eax
    X86_AT(c, 0x559u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00055a  movzx eax, al
    X86_AT(c, 0x55au);
    c.r[0] = g8(c, 0);
    // 00055d  lea eax, [eax + eax*2]
    X86_AT(c, 0x55du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000560  lea edi, [edi + eax*4]
    X86_AT(c, 0x560u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 000563  movzx esi, byte ptr [esp]
    X86_AT(c, 0x563u);
    c.r[6] = rd8((c.sbase[2] + (uint32_t)(c.r[4])));
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x545u, "ran off the end of a function");
}
void f_0000054c(X86Cpu& c) {
    X86_TICK(c, 39);
    // 00054c  mov dx, word ptr cs:[esi]
    X86_AT(c, 0x54cu);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[6]))));
    // 000550  mov bx, word ptr cs:[esi + 2]
    X86_AT(c, 0x550u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[6] + 0x2u))));
    // 000555  mov cl, byte ptr cs:[esi + 8]
    X86_AT(c, 0x555u);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[6] + 0x8u))));
    // 000559  push eax
    X86_AT(c, 0x559u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00055a  movzx eax, al
    X86_AT(c, 0x55au);
    c.r[0] = g8(c, 0);
    // 00055d  lea eax, [eax + eax*2]
    X86_AT(c, 0x55du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000560  lea edi, [edi + eax*4]
    X86_AT(c, 0x560u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 000563  movzx esi, byte ptr [esp]
    X86_AT(c, 0x563u);
    c.r[6] = rd8((c.sbase[2] + (uint32_t)(c.r[4])));
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x54cu, "ran off the end of a function");
}
void f_00000550(X86Cpu& c) {
    X86_TICK(c, 35);
    // 000550  mov bx, word ptr cs:[esi + 2]
    X86_AT(c, 0x550u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[6] + 0x2u))));
    // 000555  mov cl, byte ptr cs:[esi + 8]
    X86_AT(c, 0x555u);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[6] + 0x8u))));
    // 000559  push eax
    X86_AT(c, 0x559u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00055a  movzx eax, al
    X86_AT(c, 0x55au);
    c.r[0] = g8(c, 0);
    // 00055d  lea eax, [eax + eax*2]
    X86_AT(c, 0x55du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000560  lea edi, [edi + eax*4]
    X86_AT(c, 0x560u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 000563  movzx esi, byte ptr [esp]
    X86_AT(c, 0x563u);
    c.r[6] = rd8((c.sbase[2] + (uint32_t)(c.r[4])));
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x550u, "ran off the end of a function");
}
void f_00000555(X86Cpu& c) {
    X86_TICK(c, 31);
    // 000555  mov cl, byte ptr cs:[esi + 8]
    X86_AT(c, 0x555u);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[6] + 0x8u))));
    // 000559  push eax
    X86_AT(c, 0x559u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00055a  movzx eax, al
    X86_AT(c, 0x55au);
    c.r[0] = g8(c, 0);
    // 00055d  lea eax, [eax + eax*2]
    X86_AT(c, 0x55du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000560  lea edi, [edi + eax*4]
    X86_AT(c, 0x560u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 000563  movzx esi, byte ptr [esp]
    X86_AT(c, 0x563u);
    c.r[6] = rd8((c.sbase[2] + (uint32_t)(c.r[4])));
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x555u, "ran off the end of a function");
}
void f_00000559(X86Cpu& c) {
    X86_TICK(c, 27);
    // 000559  push eax
    X86_AT(c, 0x559u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00055a  movzx eax, al
    X86_AT(c, 0x55au);
    c.r[0] = g8(c, 0);
    // 00055d  lea eax, [eax + eax*2]
    X86_AT(c, 0x55du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000560  lea edi, [edi + eax*4]
    X86_AT(c, 0x560u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 000563  movzx esi, byte ptr [esp]
    X86_AT(c, 0x563u);
    c.r[6] = rd8((c.sbase[2] + (uint32_t)(c.r[4])));
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x559u, "ran off the end of a function");
}
void f_0000055a(X86Cpu& c) {
    X86_TICK(c, 25);
    // 00055a  movzx eax, al
    X86_AT(c, 0x55au);
    c.r[0] = g8(c, 0);
    // 00055d  lea eax, [eax + eax*2]
    X86_AT(c, 0x55du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000560  lea edi, [edi + eax*4]
    X86_AT(c, 0x560u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 000563  movzx esi, byte ptr [esp]
    X86_AT(c, 0x563u);
    c.r[6] = rd8((c.sbase[2] + (uint32_t)(c.r[4])));
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x55au, "ran off the end of a function");
}
void f_0000055d(X86Cpu& c) {
    X86_TICK(c, 22);
    // 00055d  lea eax, [eax + eax*2]
    X86_AT(c, 0x55du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000560  lea edi, [edi + eax*4]
    X86_AT(c, 0x560u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 000563  movzx esi, byte ptr [esp]
    X86_AT(c, 0x563u);
    c.r[6] = rd8((c.sbase[2] + (uint32_t)(c.r[4])));
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x55du, "ran off the end of a function");
}
void f_00000560(X86Cpu& c) {
    X86_TICK(c, 20);
    // 000560  lea edi, [edi + eax*4]
    X86_AT(c, 0x560u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 000563  movzx esi, byte ptr [esp]
    X86_AT(c, 0x563u);
    c.r[6] = rd8((c.sbase[2] + (uint32_t)(c.r[4])));
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x560u, "ran off the end of a function");
}
void f_00000563(X86Cpu& c) {
    X86_TICK(c, 18);
    // 000563  movzx esi, byte ptr [esp]
    X86_AT(c, 0x563u);
    c.r[6] = rd8((c.sbase[2] + (uint32_t)(c.r[4])));
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x563u, "ran off the end of a function");
}
void f_00000567(X86Cpu& c) {
    X86_TICK(c, 12);
    // 000567  shl esi, 0x12
    X86_AT(c, 0x567u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x12u, 4, w); if (w) c.r[6] = r; }
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x567u, "ran off the end of a function");
}
void f_0000056a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00056a  mov ax, 0x120
    X86_AT(c, 0x56au);
    s16(c, 0, 0x120u);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x56au, "ran off the end of a function");
}
void f_0000056e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00056e  cmp ch, 0xc
    X86_AT(c, 0x56eu);
    (void)x86_sub(c, g8(c, 5), 0xCu, 0, 1);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x56eu, "ran off the end of a function");
}
void f_00000571(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000571  jb 0x577
    X86_AT(c, 0x571u);
    if (x86_cc(c, 2)) { goto L_577; }
    X86_TICK(c, 2);
    // 000573  add ax, 8
    X86_AT(c, 0x573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x8u, 0, 2)); }
L_577:
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x571u, "ran off the end of a function");
}
void f_00000577(X86Cpu& c) {
    X86_TICK(c, 28);
    // 000577  mov dword ptr gs:[ebp + edi*1], esi
    X86_AT(c, 0x577u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])), c.r[6]);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x577u, "ran off the end of a function");
}
void f_0000057c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00057c  mov word ptr gs:[ebp + edi*1 + 4], ax
    X86_AT(c, 0x57cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57cu, "ran off the end of a function");
}
void f_00000582(X86Cpu& c) {
    X86_TICK(c, 24);
    // 000582  mov word ptr gs:[ebp + edi*1 + 6], cx
    X86_AT(c, 0x582u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u)), (c.r[1] & 0xFFFFu));
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x582u, "ran off the end of a function");
}
void f_00000588(X86Cpu& c) {
    X86_TICK(c, 22);
    // 000588  mov word ptr gs:[ebp + edi*1 + 8], dx
    X86_AT(c, 0x588u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x588u, "ran off the end of a function");
}
void f_0000058e(X86Cpu& c) {
    X86_TICK(c, 20);
    // 00058e  mov word ptr gs:[ebp + edi*1 + 0xa], bx
    X86_AT(c, 0x58eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0xAu)), (c.r[3] & 0xFFFFu));
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58eu, "ran off the end of a function");
}
void f_00000594(X86Cpu& c) {
    X86_TICK(c, 18);
    // 000594  pop eax
    X86_AT(c, 0x594u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x594u, "ran off the end of a function");
}
void f_00000595(X86Cpu& c) {
    X86_TICK(c, 14);
    // 000595  pop esi
    X86_AT(c, 0x595u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x595u, "ran off the end of a function");
}
void f_00000596(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000596  ret 
    X86_AT(c, 0x596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x596u, "ran off the end of a function");
}
void f_00000658(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000658  call 0x17d8
    X86_AT(c, 0x658u);
    push32(c, 0x65du); f_000017d8(c); X86_RET(c, 0x65du);
L_65d:
    X86_TICK(c, 45);
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
    // 000675  jne 0x65d
    X86_AT(c, 0x675u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x65du); goto L_65d; }
    X86_TICK(c, 10);
    // 000677  ret 
    X86_AT(c, 0x677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x658u, "ran off the end of a function");
}
void f_0000065d(X86Cpu& c) {
L_65d:
    X86_TICK(c, 45);
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
    // 000675  jne 0x65d
    X86_AT(c, 0x675u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x65du); goto L_65d; }
    X86_TICK(c, 10);
    // 000677  ret 
    X86_AT(c, 0x677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x65du, "ran off the end of a function");
}
void f_00000661(X86Cpu& c) {
    goto L_661;
L_65d:
    X86_TICK(c, 2);
    // 00065d  mov dx, 0x440
    X86_AT(c, 0x65du);
    s16(c, 2, 0x440u);
L_661:
    X86_TICK(c, 43);
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
    // 000675  jne 0x65d
    X86_AT(c, 0x675u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x65du); goto L_65d; }
    X86_TICK(c, 10);
    // 000677  ret 
    X86_AT(c, 0x677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x661u, "ran off the end of a function");
}
void f_00000663(X86Cpu& c) {
    goto L_663;
L_65d:
    X86_TICK(c, 4);
    // 00065d  mov dx, 0x440
    X86_AT(c, 0x65du);
    s16(c, 2, 0x440u);
    // 000661  mov al, bl
    X86_AT(c, 0x661u);
    s8(c, 0, g8(c, 3));
L_663:
    X86_TICK(c, 41);
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
    // 000675  jne 0x65d
    X86_AT(c, 0x675u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x65du); goto L_65d; }
    X86_TICK(c, 10);
    // 000677  ret 
    X86_AT(c, 0x677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x663u, "ran off the end of a function");
}
void f_00000664(X86Cpu& c) {
    goto L_664;
L_65d:
    X86_TICK(c, 16);
    // 00065d  mov dx, 0x440
    X86_AT(c, 0x65du);
    s16(c, 2, 0x440u);
    // 000661  mov al, bl
    X86_AT(c, 0x661u);
    s8(c, 0, g8(c, 3));
    // 000663  out dx, al
    X86_AT(c, 0x663u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_664:
    X86_TICK(c, 29);
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
    // 000675  jne 0x65d
    X86_AT(c, 0x675u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x65du); goto L_65d; }
    X86_TICK(c, 10);
    // 000677  ret 
    X86_AT(c, 0x677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x664u, "ran off the end of a function");
}
void f_00000668(X86Cpu& c) {
    goto L_668;
L_65d:
    X86_TICK(c, 18);
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
L_668:
    X86_TICK(c, 27);
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
    // 000675  jne 0x65d
    X86_AT(c, 0x675u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x65du); goto L_65d; }
    X86_TICK(c, 10);
    // 000677  ret 
    X86_AT(c, 0x677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x668u, "ran off the end of a function");
}
}

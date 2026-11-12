#include "p_game_funcs.h"
namespace p_game {
void f_000d3688(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d3688  push ebx
    X86_AT(c, 0xd3688u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3689  push 7
    X86_AT(c, 0xd3689u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d368b  call 0xbb6b0
    X86_AT(c, 0xd368bu);
    push32(c, 0xd3690u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd3690u);
    X86_TICK(c, 7);
    // 0d3690  call 0xb90e8
    X86_AT(c, 0xd3690u);
    push32(c, 0xd3695u); x86_call_known(c, 0xb90e8u, f_000b90e8); X86_RET(c, 0xd3695u);
    X86_TICK(c, 9);
    // 0d3695  push 7
    X86_AT(c, 0xd3695u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3697  call 0xbc52c
    X86_AT(c, 0xd3697u);
    push32(c, 0xd369cu); x86_call_known(c, 0xbc52cu, f_000bc52c); X86_RET(c, 0xd369cu);
    X86_TICK(c, 2);
    // 0d369c  add esp, 8
    X86_AT(c, 0xd369cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d369f:
    X86_TICK(c, 9);
    // 0d369f  push 7
    X86_AT(c, 0xd369fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d36a1  call 0xb9514
    X86_AT(c, 0xd36a1u);
    push32(c, 0xd36a6u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd36a6u);
    X86_TICK(c, 12);
    // 0d36a6  xchg ebx, eax
    X86_AT(c, 0xd36a6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d36a7  add esp, 4
    X86_AT(c, 0xd36a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d36aa  and bl, bl
    X86_AT(c, 0xd36aau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d36ac  je 0xd369f
    X86_AT(c, 0xd36acu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd369fu); goto L_d369f; }
    X86_TICK(c, 10);
    // 0d36ae  movzx edx, bl
    X86_AT(c, 0xd36aeu);
    c.r[2] = g8(c, 3);
    // 0d36b1  cmp edx, 0x20
    X86_AT(c, 0xd36b1u);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 0d36b4  ja 0xd36ed
    X86_AT(c, 0xd36b4u);
    if (x86_cc(c, 7)) { goto L_d36ed; }
    X86_TICK(c, 7);
    // 0d36b6  cmp edx, 0x20
    X86_AT(c, 0xd36b6u);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 0d36b9  je 0xd3747
    X86_AT(c, 0xd36b9u);
    if (x86_cc(c, 4)) { goto L_d3747; }
    X86_TICK(c, 9);
    // 0d36bf  dec edx
    X86_AT(c, 0xd36bfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d36c0  cmp edx, 6
    X86_AT(c, 0xd36c0u);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0d36c3  ja 0xd379b
    X86_AT(c, 0xd36c3u);
    if (x86_cc(c, 7)) { goto L_d379b; }
    X86_TICK(c, 7);
    // 0d36c9  jmp dword ptr cs:[edx*4 + 0xd36d1]
    X86_AT(c, 0xd36c9u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD36D1u)));
      switch (t) {
      case 0xd3747u: goto L_d3747;
      case 0xd374eu: goto L_d374e;
      case 0xd3755u: goto L_d3755;
      case 0xd375cu: goto L_d375c;
      case 0xd3763u: goto L_d3763;
      case 0xd379bu: goto L_d379b;
      default: x86_jump(c, t); return; } }
L_d36ed:
    X86_TICK(c, 7);
    // 0d36ed  cmp edx, 0x41
    X86_AT(c, 0xd36edu);
    (void)x86_sub(c, c.r[2], 0x41u, 0, 4);
    // 0d36f0  je 0xd3794
    X86_AT(c, 0xd36f0u);
    if (x86_cc(c, 4)) { goto L_d3794; }
    X86_TICK(c, 7);
    // 0d36f6  cmp edx, 0x43
    X86_AT(c, 0xd36f6u);
    (void)x86_sub(c, c.r[2], 0x43u, 0, 4);
    // 0d36f9  je 0xd378d
    X86_AT(c, 0xd36f9u);
    if (x86_cc(c, 4)) { goto L_d378d; }
    X86_TICK(c, 9);
    // 0d36ff  sub edx, 0x4e
    X86_AT(c, 0xd36ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x4Eu, 0, 4); }
    // 0d3702  cmp edx, 0xc
    X86_AT(c, 0xd3702u);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0d3705  ja 0xd379b
    X86_AT(c, 0xd3705u);
    if (x86_cc(c, 7)) { goto L_d379b; }
    X86_TICK(c, 7);
    // 0d370b  jmp dword ptr cs:[edx*4 + 0xd3713]
    X86_AT(c, 0xd370bu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD3713u)));
      switch (t) {
      case 0xd376au: goto L_d376a;
      case 0xd3771u: goto L_d3771;
      case 0xd3778u: goto L_d3778;
      case 0xd377fu: goto L_d377f;
      case 0xd3786u: goto L_d3786;
      case 0xd379bu: goto L_d379b;
      default: x86_jump(c, t); return; } }
L_d3747:
    X86_TICK(c, 7);
    // 0d3747  call 0xce2c8
    X86_AT(c, 0xd3747u);
    push32(c, 0xd374cu); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd374cu);
    X86_TICK(c, 7);
    // 0d374c  jmp 0xd37a7
    X86_AT(c, 0xd374cu);
    goto L_d37a7;
L_d374e:
    X86_TICK(c, 7);
    // 0d374e  call 0xcdf60
    X86_AT(c, 0xd374eu);
    push32(c, 0xd3753u); x86_call_known(c, 0xcdf60u, f_000cdf60); X86_RET(c, 0xd3753u);
    X86_TICK(c, 7);
    // 0d3753  jmp 0xd37a7
    X86_AT(c, 0xd3753u);
    goto L_d37a7;
L_d3755:
    X86_TICK(c, 7);
    // 0d3755  call 0xcdf88
    X86_AT(c, 0xd3755u);
    push32(c, 0xd375au); x86_call_known(c, 0xcdf88u, f_000cdf88); X86_RET(c, 0xd375au);
    X86_TICK(c, 7);
    // 0d375a  jmp 0xd37a7
    X86_AT(c, 0xd375au);
    goto L_d37a7;
L_d375c:
    X86_TICK(c, 7);
    // 0d375c  call 0xcdfd8
    X86_AT(c, 0xd375cu);
    push32(c, 0xd3761u); x86_call_known(c, 0xcdfd8u, f_000cdfd8); X86_RET(c, 0xd3761u);
    X86_TICK(c, 7);
    // 0d3761  jmp 0xd37a7
    X86_AT(c, 0xd3761u);
    goto L_d37a7;
L_d3763:
    X86_TICK(c, 7);
    // 0d3763  call 0xcdfb0
    X86_AT(c, 0xd3763u);
    push32(c, 0xd3768u); x86_call_known(c, 0xcdfb0u, f_000cdfb0); X86_RET(c, 0xd3768u);
    X86_TICK(c, 7);
    // 0d3768  jmp 0xd37a7
    X86_AT(c, 0xd3768u);
    goto L_d37a7;
L_d376a:
    X86_TICK(c, 7);
    // 0d376a  call 0xce000
    X86_AT(c, 0xd376au);
    push32(c, 0xd376fu); x86_call_known(c, 0xce000u, f_000ce000); X86_RET(c, 0xd376fu);
    X86_TICK(c, 7);
    // 0d376f  jmp 0xd37a7
    X86_AT(c, 0xd376fu);
    goto L_d37a7;
L_d3771:
    X86_TICK(c, 7);
    // 0d3771  call 0xce0fc
    X86_AT(c, 0xd3771u);
    push32(c, 0xd3776u); x86_call_known(c, 0xce0fcu, f_000ce0fc); X86_RET(c, 0xd3776u);
    X86_TICK(c, 7);
    // 0d3776  jmp 0xd37a7
    X86_AT(c, 0xd3776u);
    goto L_d37a7;
L_d3778:
    X86_TICK(c, 7);
    // 0d3778  call 0xce128
    X86_AT(c, 0xd3778u);
    push32(c, 0xd377du); x86_call_known(c, 0xce128u, f_000ce128); X86_RET(c, 0xd377du);
    X86_TICK(c, 7);
    // 0d377d  jmp 0xd37a7
    X86_AT(c, 0xd377du);
    goto L_d37a7;
L_d377f:
    X86_TICK(c, 7);
    // 0d377f  call 0xce154
    X86_AT(c, 0xd377fu);
    push32(c, 0xd3784u); x86_call_known(c, 0xce154u, f_000ce154); X86_RET(c, 0xd3784u);
    X86_TICK(c, 7);
    // 0d3784  jmp 0xd37a7
    X86_AT(c, 0xd3784u);
    goto L_d37a7;
L_d3786:
    X86_TICK(c, 7);
    // 0d3786  call 0xce24c
    X86_AT(c, 0xd3786u);
    push32(c, 0xd378bu); x86_call_known(c, 0xce24cu, f_000ce24c); X86_RET(c, 0xd378bu);
    X86_TICK(c, 7);
    // 0d378b  jmp 0xd37a7
    X86_AT(c, 0xd378bu);
    goto L_d37a7;
L_d378d:
    X86_TICK(c, 7);
    // 0d378d  call 0xce220
    X86_AT(c, 0xd378du);
    push32(c, 0xd3792u); x86_call_known(c, 0xce220u, f_000ce220); X86_RET(c, 0xd3792u);
    X86_TICK(c, 7);
    // 0d3792  jmp 0xd37a7
    X86_AT(c, 0xd3792u);
    goto L_d37a7;
L_d3794:
    X86_TICK(c, 7);
    // 0d3794  call 0xce314
    X86_AT(c, 0xd3794u);
    push32(c, 0xd3799u); x86_call_known(c, 0xce314u, f_000ce314); X86_RET(c, 0xd3799u);
    X86_TICK(c, 7);
    // 0d3799  jmp 0xd37a7
    X86_AT(c, 0xd3799u);
    goto L_d37a7;
L_d379b:
    X86_TICK(c, 7);
    // 0d379b  call 0xce2e8
    X86_AT(c, 0xd379bu);
    push32(c, 0xd37a0u); x86_call_known(c, 0xce2e8u, f_000ce2e8); X86_RET(c, 0xd37a0u);
    X86_TICK(c, 9);
    // 0d37a0  mov eax, 0xffffffff
    X86_AT(c, 0xd37a0u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d37a5  jmp 0xd37a9
    X86_AT(c, 0xd37a5u);
    goto L_d37a9;
L_d37a7:
    X86_TICK(c, 2);
    // 0d37a7  sub eax, eax
    X86_AT(c, 0xd37a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d37a9:
    X86_TICK(c, 14);
    // 0d37a9  pop ebx
    X86_AT(c, 0xd37a9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d37aa  ret 
    X86_AT(c, 0xd37aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3688u, "ran off the end of a function");
}
void f_000d37ac(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0d37ac  push esi
    X86_AT(c, 0xd37acu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d37ad  push edi
    X86_AT(c, 0xd37adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d37ae  push 0xffffffff
    X86_AT(c, 0xd37aeu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d37b0  push 0x85
    X86_AT(c, 0xd37b0u);
    { uint32_t v = 0x85u; push32(c, v); }
    // 0d37b5  push 5
    X86_AT(c, 0xd37b5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d37b7  push 5
    X86_AT(c, 0xd37b7u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d37b9  call 0xb774c
    X86_AT(c, 0xd37b9u);
    push32(c, 0xd37beu); x86_call_known(c, 0xb774cu, f_000b774c); X86_RET(c, 0xd37beu);
    X86_TICK(c, 7);
    // 0d37be  xchg edi, eax
    X86_AT(c, 0xd37beu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d37bf  mov esi, 1
    X86_AT(c, 0xd37bfu);
    c.r[6] = 0x1u;
    // 0d37c4  add esp, 0x10
    X86_AT(c, 0xd37c4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d37c7:
    X86_TICK(c, 7);
    // 0d37c7  cmp esi, 6
    X86_AT(c, 0xd37c7u);
    (void)x86_sub(c, c.r[6], 0x6u, 0, 4);
    // 0d37ca  jge 0xd37f6
    X86_AT(c, 0xd37cau);
    if (x86_cc(c, 13)) { goto L_d37f6; }
    X86_TICK(c, 17);
    // 0d37cc  lea eax, [esi + 0x85]
    X86_AT(c, 0xd37ccu);
    c.r[0] = (uint32_t)(c.r[6] + 0x85u);
    // 0d37d2  push eax
    X86_AT(c, 0xd37d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d37d3  push 5
    X86_AT(c, 0xd37d3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d37d5  push 5
    X86_AT(c, 0xd37d5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d37d7  push edi
    X86_AT(c, 0xd37d7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d37d8  call 0xb7984
    X86_AT(c, 0xd37d8u);
    push32(c, 0xd37ddu); x86_call_known(c, 0xb7984u, f_000b7984); X86_RET(c, 0xd37ddu);
    X86_TICK(c, 19);
    // 0d37dd  push 2
    X86_AT(c, 0xd37ddu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d37df  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd37dfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d37e5  push dword ptr [0xa4a76]
    X86_AT(c, 0xd37e5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d37eb  call 0xbd068
    X86_AT(c, 0xd37ebu);
    push32(c, 0xd37f0u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd37f0u);
    X86_TICK(c, 11);
    // 0d37f0  inc esi
    X86_AT(c, 0xd37f0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d37f1  add esp, 0x1c
    X86_AT(c, 0xd37f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d37f4  jmp 0xd37c7
    X86_AT(c, 0xd37f4u);
    X86_POLL(c, 0xd37c7u); goto L_d37c7;
L_d37f6:
    X86_TICK(c, 9);
    // 0d37f6  push edi
    X86_AT(c, 0xd37f6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d37f7  call 0xb78a4
    X86_AT(c, 0xd37f7u);
    push32(c, 0xd37fcu); x86_call_known(c, 0xb78a4u, f_000b78a4); X86_RET(c, 0xd37fcu);
    X86_TICK(c, 19);
    // 0d37fc  push 2
    X86_AT(c, 0xd37fcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d37fe  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd37feu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d3804  push dword ptr [0xa4a76]
    X86_AT(c, 0xd3804u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d380a  call 0xbd068
    X86_AT(c, 0xd380au);
    push32(c, 0xd380fu); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd380fu);
    X86_TICK(c, 7);
    // 0d380f  call 0xcd64c
    X86_AT(c, 0xd380fu);
    push32(c, 0xd3814u); x86_call_known(c, 0xcd64cu, f_000cd64c); X86_RET(c, 0xd3814u);
    X86_TICK(c, 20);
    // 0d3814  add esp, 0x10
    X86_AT(c, 0xd3814u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d3817  pop edi
    X86_AT(c, 0xd3817u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3818  pop esi
    X86_AT(c, 0xd3818u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3819  ret 
    X86_AT(c, 0xd3819u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd37acu, "ran off the end of a function");
}
void f_000d381c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d381c  push ebp
    X86_AT(c, 0xd381cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d381d  mov ebp, esp
    X86_AT(c, 0xd381du);
    c.r[5] = c.r[4];
    // 0d381f  push eax
    X86_AT(c, 0xd381fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d3820  push ebx
    X86_AT(c, 0xd3820u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3821  push esi
    X86_AT(c, 0xd3821u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3822  push edi
    X86_AT(c, 0xd3822u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3823  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xd3823u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0d3828  and eax, eax
    X86_AT(c, 0xd3828u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d382a  je 0xd3837
    X86_AT(c, 0xd382au);
    if (x86_cc(c, 4)) { goto L_d3837; }
    X86_TICK(c, 7);
    // 0d382c  cmp eax, 0xff
    X86_AT(c, 0xd382cu);
    (void)x86_sub(c, c.r[0], 0xFFu, 0, 4);
    // 0d3831  jne 0xd3ab1
    X86_AT(c, 0xd3831u);
    if (x86_cc(c, 5)) { goto L_d3ab1; }
L_d3837:
    X86_TICK(c, 9);
    // 0d3837  push 0xb
    X86_AT(c, 0xd3837u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d3839  call 0xb607c
    X86_AT(c, 0xd3839u);
    push32(c, 0xd383eu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd383eu);
    X86_TICK(c, 9);
    // 0d383e  push 1
    X86_AT(c, 0xd383eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3840  call 0xba6a0
    X86_AT(c, 0xd3840u);
    push32(c, 0xd3845u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xd3845u);
    X86_TICK(c, 9);
    // 0d3845  push 1
    X86_AT(c, 0xd3845u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3847  call 0xbc724
    X86_AT(c, 0xd3847u);
    push32(c, 0xd384cu); x86_call_known(c, 0xbc724u, f_000bc724); X86_RET(c, 0xd384cu);
    X86_TICK(c, 9);
    // 0d384c  push 0
    X86_AT(c, 0xd384cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d384e  call 0xba6a0
    X86_AT(c, 0xd384eu);
    push32(c, 0xd3853u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xd3853u);
    X86_TICK(c, 9);
    // 0d3853  push 5
    X86_AT(c, 0xd3853u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d3855  call 0xbebbc
    X86_AT(c, 0xd3855u);
    push32(c, 0xd385au); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd385au);
    X86_TICK(c, 9);
    // 0d385a  push 7
    X86_AT(c, 0xd385au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d385c  call 0xbb6b0
    X86_AT(c, 0xd385cu);
    push32(c, 0xd3861u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd3861u);
    X86_TICK(c, 9);
    // 0d3861  push 0xb
    X86_AT(c, 0xd3861u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d3863  call 0xba51c
    X86_AT(c, 0xd3863u);
    push32(c, 0xd3868u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xd3868u);
    X86_TICK(c, 9);
    // 0d3868  push 7
    X86_AT(c, 0xd3868u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d386a  call 0xbbb5c
    X86_AT(c, 0xd386au);
    push32(c, 0xd386fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd386fu);
    X86_TICK(c, 11);
    // 0d386f  push 0xd248
    X86_AT(c, 0xd386fu);
    { uint32_t v = 0xD248u; push32(c, v); }
    // 0d3874  push 7
    X86_AT(c, 0xd3874u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3876  call 0xba428
    X86_AT(c, 0xd3876u);
    push32(c, 0xd387bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd387bu);
    X86_TICK(c, 7);
    // 0d387b  call 0xbd5d0
    X86_AT(c, 0xd387bu);
    push32(c, 0xd3880u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xd3880u);
    X86_TICK(c, 7);
    // 0d3880  call 0xb5aac
    X86_AT(c, 0xd3880u);
    push32(c, 0xd3885u); x86_call_known(c, 0xb5aacu, f_000b5aac); X86_RET(c, 0xd3885u);
    X86_TICK(c, 11);
    // 0d3885  push 0xd2c0
    X86_AT(c, 0xd3885u);
    { uint32_t v = 0xD2C0u; push32(c, v); }
    // 0d388a  push 7
    X86_AT(c, 0xd388au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d388c  call 0xba428
    X86_AT(c, 0xd388cu);
    push32(c, 0xd3891u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd3891u);
    X86_TICK(c, 9);
    // 0d3891  push 7
    X86_AT(c, 0xd3891u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3893  call 0xbbb5c
    X86_AT(c, 0xd3893u);
    push32(c, 0xd3898u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd3898u);
    X86_TICK(c, 11);
    // 0d3898  push 0xd31c
    X86_AT(c, 0xd3898u);
    { uint32_t v = 0xD31Cu; push32(c, v); }
    // 0d389d  push 7
    X86_AT(c, 0xd389du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d389f  call 0xba428
    X86_AT(c, 0xd389fu);
    push32(c, 0xd38a4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd38a4u);
    X86_TICK(c, 11);
    // 0d38a4  add esp, 0x3c
    X86_AT(c, 0xd38a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d38a7  push 7
    X86_AT(c, 0xd38a7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d38a9  call 0xc9890
    X86_AT(c, 0xd38a9u);
    push32(c, 0xd38aeu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd38aeu);
    X86_TICK(c, 9);
    // 0d38ae  push 7
    X86_AT(c, 0xd38aeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d38b0  call 0xbb6b0
    X86_AT(c, 0xd38b0u);
    push32(c, 0xd38b5u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd38b5u);
    X86_TICK(c, 14);
    // 0d38b5  add esp, 8
    X86_AT(c, 0xd38b5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d38b8  cmp dword ptr [0xa4a56], 0xff
    X86_AT(c, 0xd38b8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0xFFu, 0, 4);
    // 0d38c2  jne 0xd397b
    X86_AT(c, 0xd38c2u);
    if (x86_cc(c, 5)) { goto L_d397b; }
    X86_TICK(c, 7);
    // 0d38c8  call 0xbe01c
    X86_AT(c, 0xd38c8u);
    push32(c, 0xd38cdu); x86_call_known(c, 0xbe01cu, f_000be01c); X86_RET(c, 0xd38cdu);
    X86_TICK(c, 7);
    // 0d38cd  call 0xbc86c
    X86_AT(c, 0xd38cdu);
    push32(c, 0xd38d2u); x86_call_known(c, 0xbc86cu, f_000bc86c); X86_RET(c, 0xd38d2u);
    X86_TICK(c, 11);
    // 0d38d2  mov dword ptr [0x9c53c], 0
    X86_AT(c, 0xd38d2u);
    wr32((c.sbase[3] + (uint32_t)(0x9C53Cu)), 0x0u);
    // 0d38dc  push 7
    X86_AT(c, 0xd38dcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d38de  call 0xbbb5c
    X86_AT(c, 0xd38deu);
    push32(c, 0xd38e3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd38e3u);
    X86_TICK(c, 11);
    // 0d38e3  push 0xd360
    X86_AT(c, 0xd38e3u);
    { uint32_t v = 0xD360u; push32(c, v); }
    // 0d38e8  push 7
    X86_AT(c, 0xd38e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d38ea  call 0xba428
    X86_AT(c, 0xd38eau);
    push32(c, 0xd38efu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd38efu);
    X86_TICK(c, 9);
    // 0d38ef  push 7
    X86_AT(c, 0xd38efu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d38f1  call 0xbbb5c
    X86_AT(c, 0xd38f1u);
    push32(c, 0xd38f6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd38f6u);
    X86_TICK(c, 11);
    // 0d38f6  add esp, 0x10
    X86_AT(c, 0xd38f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d38f9  push 0
    X86_AT(c, 0xd38f9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d38fb  call 0xb84e0
    X86_AT(c, 0xd38fbu);
    push32(c, 0xd3900u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xd3900u);
    X86_TICK(c, 9);
    // 0d3900  push 0xd388
    X86_AT(c, 0xd3900u);
    { uint32_t v = 0xD388u; push32(c, v); }
    // 0d3905  call 0xbd018
    X86_AT(c, 0xd3905u);
    push32(c, 0xd390au); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd390au);
    X86_TICK(c, 11);
    // 0d390a  push 0xd39c
    X86_AT(c, 0xd390au);
    { uint32_t v = 0xD39Cu; push32(c, v); }
    // 0d390f  push 7
    X86_AT(c, 0xd390fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3911  call 0xba428
    X86_AT(c, 0xd3911u);
    push32(c, 0xd3916u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd3916u);
    X86_TICK(c, 9);
    // 0d3916  push 7
    X86_AT(c, 0xd3916u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3918  call 0xbbb5c
    X86_AT(c, 0xd3918u);
    push32(c, 0xd391du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd391du);
    X86_TICK(c, 25);
    // 0d391d  mov edi, dword ptr [0xa6058]
    X86_AT(c, 0xd391du);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xA6058u)));
    // 0d3923  mov esi, dword ptr [0xa605c]
    X86_AT(c, 0xd3923u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xA605Cu)));
    // 0d3929  mov eax, dword ptr [0xa6060]
    X86_AT(c, 0xd3929u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6060u)));
    // 0d392e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd392eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d3931  mov ebx, dword ptr [0xa6064]
    X86_AT(c, 0xd3931u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xA6064u)));
    // 0d3937  call 0xd2b18
    X86_AT(c, 0xd3937u);
    push32(c, 0xd393cu); x86_call_known(c, 0xd2b18u, f_000d2b18); X86_RET(c, 0xd393cu);
    X86_TICK(c, 23);
    // 0d393c  mov dword ptr [0xa6058], edi
    X86_AT(c, 0xd393cu);
    wr32((c.sbase[3] + (uint32_t)(0xA6058u)), c.r[7]);
    // 0d3942  mov dword ptr [0xa605c], esi
    X86_AT(c, 0xd3942u);
    wr32((c.sbase[3] + (uint32_t)(0xA605Cu)), c.r[6]);
    // 0d3948  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd3948u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d394b  mov dword ptr [0xa6060], eax
    X86_AT(c, 0xd394bu);
    wr32((c.sbase[3] + (uint32_t)(0xA6060u)), c.r[0]);
    // 0d3950  mov dword ptr [0xa6064], ebx
    X86_AT(c, 0xd3950u);
    wr32((c.sbase[3] + (uint32_t)(0xA6064u)), c.r[3]);
    // 0d3956  mov dword ptr [0xa4a56], 0
    X86_AT(c, 0xd3956u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x0u);
    // 0d3960  mov byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xd3960u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x82u);
    // 0d3967  call 0xb75c0
    X86_AT(c, 0xd3967u);
    push32(c, 0xd396cu); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xd396cu);
    X86_TICK(c, 9);
    // 0d396c  push 1
    X86_AT(c, 0xd396cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d396e  call 0xb61d4
    X86_AT(c, 0xd396eu);
    push32(c, 0xd3973u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd3973u);
    X86_TICK(c, 9);
    // 0d3973  add esp, 0x18
    X86_AT(c, 0xd3973u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d3976  jmp 0xd3ab1
    X86_AT(c, 0xd3976u);
    goto L_d3ab1;
L_d397b:
    X86_TICK(c, 23);
    // 0d397b  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd397bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d3980  mov dword ptr [0xa4a66], eax
    X86_AT(c, 0xd3980u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), c.r[0]);
    // 0d3985  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd3985u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d398a  mov dword ptr [0xa4a6a], eax
    X86_AT(c, 0xd398au);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), c.r[0]);
    // 0d398f  mov dword ptr [0xa6048], 3
    X86_AT(c, 0xd398fu);
    wr32((c.sbase[3] + (uint32_t)(0xA6048u)), 0x3u);
    // 0d3999  push 0x36
    X86_AT(c, 0xd3999u);
    { uint32_t v = 0x36u; push32(c, v); }
    // 0d399b  call 0xb61b4
    X86_AT(c, 0xd399bu);
    push32(c, 0xd39a0u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd39a0u);
    X86_TICK(c, 11);
    // 0d39a0  add eax, 7
    X86_AT(c, 0xd39a0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x7u, 0, 4); }
    // 0d39a3  mov dword ptr [0xa604c], eax
    X86_AT(c, 0xd39a3u);
    wr32((c.sbase[3] + (uint32_t)(0xA604Cu)), c.r[0]);
    // 0d39a8  call 0xd2b00
    X86_AT(c, 0xd39a8u);
    push32(c, 0xd39adu); x86_call_known(c, 0xd2b00u, f_000d2b00); X86_RET(c, 0xd39adu);
    X86_TICK(c, 9);
    // 0d39ad  push 7
    X86_AT(c, 0xd39adu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d39af  call 0xbbb5c
    X86_AT(c, 0xd39afu);
    push32(c, 0xd39b4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd39b4u);
    X86_TICK(c, 11);
    // 0d39b4  push 0xd3c0
    X86_AT(c, 0xd39b4u);
    { uint32_t v = 0xD3C0u; push32(c, v); }
    // 0d39b9  push 7
    X86_AT(c, 0xd39b9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d39bb  call 0xba428
    X86_AT(c, 0xd39bbu);
    push32(c, 0xd39c0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd39c0u);
    X86_TICK(c, 9);
    // 0d39c0  push 0xa
    X86_AT(c, 0xd39c0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d39c2  call 0xbebbc
    X86_AT(c, 0xd39c2u);
    push32(c, 0xd39c7u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd39c7u);
    X86_TICK(c, 11);
    // 0d39c7  push 0xd3e0
    X86_AT(c, 0xd39c7u);
    { uint32_t v = 0xD3E0u; push32(c, v); }
    // 0d39cc  push 7
    X86_AT(c, 0xd39ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d39ce  call 0xba428
    X86_AT(c, 0xd39ceu);
    push32(c, 0xd39d3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd39d3u);
    X86_TICK(c, 9);
    // 0d39d3  push 7
    X86_AT(c, 0xd39d3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d39d5  call 0xbbb5c
    X86_AT(c, 0xd39d5u);
    push32(c, 0xd39dau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd39dau);
    X86_TICK(c, 9);
    // 0d39da  push 0xd3f4
    X86_AT(c, 0xd39dau);
    { uint32_t v = 0xD3F4u; push32(c, v); }
    // 0d39df  call 0xbd018
    X86_AT(c, 0xd39dfu);
    push32(c, 0xd39e4u); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xd39e4u);
    X86_TICK(c, 7);
    // 0d39e4  call 0xbdfc4
    X86_AT(c, 0xd39e4u);
    push32(c, 0xd39e9u); x86_call_known(c, 0xbdfc4u, f_000bdfc4); X86_RET(c, 0xd39e9u);
    X86_TICK(c, 7);
    // 0d39e9  call 0xbe164
    X86_AT(c, 0xd39e9u);
    push32(c, 0xd39eeu); x86_call_known(c, 0xbe164u, f_000be164); X86_RET(c, 0xd39eeu);
    X86_TICK(c, 7);
    // 0d39ee  call 0xbc86c
    X86_AT(c, 0xd39eeu);
    push32(c, 0xd39f3u); x86_call_known(c, 0xbc86cu, f_000bc86c); X86_RET(c, 0xd39f3u);
    X86_TICK(c, 11);
    // 0d39f3  push 0xd408
    X86_AT(c, 0xd39f3u);
    { uint32_t v = 0xD408u; push32(c, v); }
    // 0d39f8  push 7
    X86_AT(c, 0xd39f8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d39fa  call 0xba428
    X86_AT(c, 0xd39fau);
    push32(c, 0xd39ffu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd39ffu);
    X86_TICK(c, 9);
    // 0d39ff  push 7
    X86_AT(c, 0xd39ffu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3a01  call 0xbbb5c
    X86_AT(c, 0xd3a01u);
    push32(c, 0xd3a06u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd3a06u);
    X86_TICK(c, 9);
    // 0d3a06  push 3
    X86_AT(c, 0xd3a06u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d3a08  call 0xb84e0
    X86_AT(c, 0xd3a08u);
    push32(c, 0xd3a0du); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xd3a0du);
    X86_TICK(c, 11);
    // 0d3a0d  push 0xd43c
    X86_AT(c, 0xd3a0du);
    { uint32_t v = 0xD43Cu; push32(c, v); }
    // 0d3a12  push 7
    X86_AT(c, 0xd3a12u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3a14  call 0xba428
    X86_AT(c, 0xd3a14u);
    push32(c, 0xd3a19u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd3a19u);
    X86_TICK(c, 11);
    // 0d3a19  add esp, 0x3c
    X86_AT(c, 0xd3a19u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d3a1c  push 7
    X86_AT(c, 0xd3a1cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3a1e  call 0xbbb5c
    X86_AT(c, 0xd3a1eu);
    push32(c, 0xd3a23u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd3a23u);
    X86_TICK(c, 33);
    // 0d3a23  mov byte ptr [0xa4a49], 0x9d
    X86_AT(c, 0xd3a23u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x9Du);
    // 0d3a2a  mov eax, 0x20
    X86_AT(c, 0xd3a2au);
    c.r[0] = 0x20u;
    // 0d3a2f  mov dword ptr [0xa4a76], eax
    X86_AT(c, 0xd3a2fu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A76u)), c.r[0]);
    // 0d3a34  mov dword ptr [0xa4a66], eax
    X86_AT(c, 0xd3a34u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), c.r[0]);
    // 0d3a39  mov eax, 0x36
    X86_AT(c, 0xd3a39u);
    c.r[0] = 0x36u;
    // 0d3a3e  mov dword ptr [0xa4a7a], eax
    X86_AT(c, 0xd3a3eu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Au)), c.r[0]);
    // 0d3a43  mov dword ptr [0xa4a6a], eax
    X86_AT(c, 0xd3a43u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), c.r[0]);
    // 0d3a48  add esp, 4
    X86_AT(c, 0xd3a48u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3a4b  mov dword ptr [0xa6048], 0x20
    X86_AT(c, 0xd3a4bu);
    wr32((c.sbase[3] + (uint32_t)(0xA6048u)), 0x20u);
    // 0d3a55  mov dword ptr [0xa604c], 0x3a
    X86_AT(c, 0xd3a55u);
    wr32((c.sbase[3] + (uint32_t)(0xA604Cu)), 0x3Au);
    // 0d3a5f  mov dword ptr [0x9c53c], 0xffffffff
    X86_AT(c, 0xd3a5fu);
    wr32((c.sbase[3] + (uint32_t)(0x9C53Cu)), 0xFFFFFFFFu);
    // 0d3a69  mov dword ptr [0xa4a56], 0xff
    X86_AT(c, 0xd3a69u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0xFFu);
    // 0d3a73  push 0x7f
    X86_AT(c, 0xd3a73u);
    { uint32_t v = 0x7Fu; push32(c, v); }
    // 0d3a75  call 0xd47b4
    X86_AT(c, 0xd3a75u);
    push32(c, 0xd3a7au); x86_call_known(c, 0xd47b4u, f_000d47b4); X86_RET(c, 0xd3a7au);
    X86_TICK(c, 9);
    // 0d3a7a  push 1
    X86_AT(c, 0xd3a7au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3a7c  call 0xb61d4
    X86_AT(c, 0xd3a7cu);
    push32(c, 0xd3a81u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd3a81u);
    X86_TICK(c, 11);
    // 0d3a81  push 0xd4dc
    X86_AT(c, 0xd3a81u);
    { uint32_t v = 0xD4DCu; push32(c, v); }
    // 0d3a86  push 7
    X86_AT(c, 0xd3a86u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3a88  call 0xba428
    X86_AT(c, 0xd3a88u);
    push32(c, 0xd3a8du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd3a8du);
    X86_TICK(c, 9);
    // 0d3a8d  push 7
    X86_AT(c, 0xd3a8du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3a8f  call 0xbbb5c
    X86_AT(c, 0xd3a8fu);
    push32(c, 0xd3a94u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd3a94u);
    X86_TICK(c, 9);
    // 0d3a94  push 7
    X86_AT(c, 0xd3a94u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3a96  call 0xc9890
    X86_AT(c, 0xd3a96u);
    push32(c, 0xd3a9bu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd3a9bu);
    X86_TICK(c, 11);
    // 0d3a9b  push 0xd520
    X86_AT(c, 0xd3a9bu);
    { uint32_t v = 0xD520u; push32(c, v); }
    // 0d3aa0  push 7
    X86_AT(c, 0xd3aa0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3aa2  call 0xba428
    X86_AT(c, 0xd3aa2u);
    push32(c, 0xd3aa7u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd3aa7u);
    X86_TICK(c, 9);
    // 0d3aa7  push 7
    X86_AT(c, 0xd3aa7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3aa9  call 0xbbb5c
    X86_AT(c, 0xd3aa9u);
    push32(c, 0xd3aaeu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd3aaeu);
    X86_TICK(c, 2);
    // 0d3aae  add esp, 0x24
    X86_AT(c, 0xd3aaeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_d3ab1:
    X86_TICK(c, 28);
    // 0d3ab1  pop edi
    X86_AT(c, 0xd3ab1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3ab2  pop esi
    X86_AT(c, 0xd3ab2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3ab3  pop ebx
    X86_AT(c, 0xd3ab3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3ab4  leave 
    X86_AT(c, 0xd3ab4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3ab5  ret 
    X86_AT(c, 0xd3ab5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd381cu, "ran off the end of a function");
}
void f_000d3ab8(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0d3ab8  push ebp
    X86_AT(c, 0xd3ab8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3ab9  mov ebp, esp
    X86_AT(c, 0xd3ab9u);
    c.r[5] = c.r[4];
    // 0d3abb  sub esp, 8
    X86_AT(c, 0xd3abbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d3abe  push ebx
    X86_AT(c, 0xd3abeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3abf  push esi
    X86_AT(c, 0xd3abfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3ac0  push edi
    X86_AT(c, 0xd3ac0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3ac1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd3ac1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d3ac4  mov ebx, dword ptr [edi*4 + 0xa5d48]
    X86_AT(c, 0xd3ac4u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)));
    // 0d3acb  mov eax, dword ptr [edi*4 + 0xa5e08]
    X86_AT(c, 0xd3acbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)));
    // 0d3ad2  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd3ad2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d3ad5  cmp ebx, dword ptr [0xa4a76]
    X86_AT(c, 0xd3ad5u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0, 4);
    // 0d3adb  jne 0xd3ae9
    X86_AT(c, 0xd3adbu);
    if (x86_cc(c, 5)) { goto L_d3ae9; }
    X86_TICK(c, 11);
    // 0d3add  cmp eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd3addu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0, 4);
    // 0d3ae3  je 0xd3bbf
    X86_AT(c, 0xd3ae3u);
    if (x86_cc(c, 4)) { goto L_d3bbf; }
L_d3ae9:
    X86_TICK(c, 11);
    // 0d3ae9  cmp ebx, dword ptr [0xa6048]
    X86_AT(c, 0xd3ae9u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(0xA6048u))), 0, 4);
    // 0d3aef  jne 0xd3aff
    X86_AT(c, 0xd3aefu);
    if (x86_cc(c, 5)) { goto L_d3aff; }
    X86_TICK(c, 15);
    // 0d3af1  mov eax, dword ptr [0xa604c]
    X86_AT(c, 0xd3af1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA604Cu)));
    // 0d3af6  cmp eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd3af6u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4);
    // 0d3af9  je 0xd3bbf
    X86_AT(c, 0xd3af9u);
    if (x86_cc(c, 4)) { goto L_d3bbf; }
L_d3aff:
    X86_TICK(c, 2);
    // 0d3aff  sub esi, esi
    X86_AT(c, 0xd3affu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_d3b01:
    X86_TICK(c, 7);
    // 0d3b01  cmp esi, 0x30
    X86_AT(c, 0xd3b01u);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0d3b04  jge 0xd3b2f
    X86_AT(c, 0xd3b04u);
    if (x86_cc(c, 13)) { goto L_d3b2f; }
    X86_TICK(c, 7);
    // 0d3b06  cmp edi, esi
    X86_AT(c, 0xd3b06u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0d3b08  je 0xd3b2c
    X86_AT(c, 0xd3b08u);
    if (x86_cc(c, 4)) { goto L_d3b2c; }
    X86_TICK(c, 12);
    // 0d3b0a  cmp byte ptr [esi + 0xa5ce8], 0
    X86_AT(c, 0xd3b0au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u))), 0x0u, 0, 1);
    // 0d3b11  je 0xd3b2c
    X86_AT(c, 0xd3b11u);
    if (x86_cc(c, 4)) { goto L_d3b2c; }
    X86_TICK(c, 11);
    // 0d3b13  cmp ebx, dword ptr [esi*4 + 0xa5d48]
    X86_AT(c, 0xd3b13u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA5D48u))), 0, 4);
    // 0d3b1a  jne 0xd3b2c
    X86_AT(c, 0xd3b1au);
    if (x86_cc(c, 5)) { goto L_d3b2c; }
    X86_TICK(c, 15);
    // 0d3b1c  mov eax, dword ptr [esi*4 + 0xa5e08]
    X86_AT(c, 0xd3b1cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA5E08u)));
    // 0d3b23  cmp eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd3b23u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4);
    // 0d3b26  je 0xd3bbf
    X86_AT(c, 0xd3b26u);
    if (x86_cc(c, 4)) { goto L_d3bbf; }
L_d3b2c:
    X86_TICK(c, 9);
    // 0d3b2c  inc esi
    X86_AT(c, 0xd3b2cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d3b2d  jmp 0xd3b01
    X86_AT(c, 0xd3b2du);
    X86_POLL(c, 0xd3b01u); goto L_d3b01;
L_d3b2f:
    X86_TICK(c, 17);
    // 0d3b2f  push dword ptr [edi*4 + 0xa5e08]
    X86_AT(c, 0xd3b2fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u))); push32(c, v); }
    // 0d3b36  push dword ptr [edi*4 + 0xa5d48]
    X86_AT(c, 0xd3b36u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u))); push32(c, v); }
    // 0d3b3d  call 0xc84fc
    X86_AT(c, 0xd3b3du);
    push32(c, 0xd3b42u); x86_call_known(c, 0xc84fcu, f_000c84fc); X86_RET(c, 0xd3b42u);
    X86_TICK(c, 16);
    // 0d3b42  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xd3b42u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0d3b45  add esp, 8
    X86_AT(c, 0xd3b45u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3b48  cmp byte ptr [edi + 0xa5ce8], 0x9e
    X86_AT(c, 0xd3b48u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u))), 0x9Eu, 0, 1);
    // 0d3b4f  jne 0xd3b55
    X86_AT(c, 0xd3b4fu);
    if (x86_cc(c, 5)) { goto L_d3b55; }
    X86_TICK(c, 9);
    // 0d3b51  cmp al, 2
    X86_AT(c, 0xd3b51u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0d3b53  jmp 0xd3b67
    X86_AT(c, 0xd3b53u);
    goto L_d3b67;
L_d3b55:
    X86_TICK(c, 11);
    // 0d3b55  mov al, byte ptr [edi + 0xa5ce8]
    X86_AT(c, 0xd3b55u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u))));
    // 0d3b5b  cmp al, 0x87
    X86_AT(c, 0xd3b5bu);
    (void)x86_sub(c, g8(c, 0), 0x87u, 0, 1);
    // 0d3b5d  jae 0xd3b6b
    X86_AT(c, 0xd3b5du);
    if (x86_cc(c, 3)) { goto L_d3b6b; }
    X86_TICK(c, 7);
    // 0d3b5f  cmp al, 0x84
    X86_AT(c, 0xd3b5fu);
    (void)x86_sub(c, g8(c, 0), 0x84u, 0, 1);
    // 0d3b61  jb 0xd3b6b
    X86_AT(c, 0xd3b61u);
    if (x86_cc(c, 2)) { goto L_d3b6b; }
    X86_TICK(c, 7);
    // 0d3b63  cmp byte ptr [ebp - 1], 1
    X86_AT(c, 0xd3b63u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x1u, 0, 1);
L_d3b67:
    X86_TICK(c, 5);
    // 0d3b67  jne 0xd3bbf
    X86_AT(c, 0xd3b67u);
    if (x86_cc(c, 5)) { goto L_d3bbf; }
    X86_TICK(c, 7);
    // 0d3b69  jmp 0xd3bbb
    X86_AT(c, 0xd3b69u);
    goto L_d3bbb;
L_d3b6b:
    X86_TICK(c, 15);
    // 0d3b6b  movzx edx, byte ptr [ebp - 1]
    X86_AT(c, 0xd3b6bu);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0d3b6f  sub edx, 2
    X86_AT(c, 0xd3b6fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0d3b72  cmp edx, 0xe
    X86_AT(c, 0xd3b72u);
    (void)x86_sub(c, c.r[2], 0xEu, 0, 4);
    // 0d3b75  ja 0xd3bbf
    X86_AT(c, 0xd3b75u);
    if (x86_cc(c, 7)) { goto L_d3bbf; }
    X86_TICK(c, 7);
    // 0d3b77  jmp dword ptr cs:[edx*4 + 0xd3b7f]
    X86_AT(c, 0xd3b77u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD3B7Fu)));
      switch (t) {
      case 0xd3bbbu: goto L_d3bbb;
      case 0xd3bbfu: goto L_d3bbf;
      default: x86_jump(c, t); return; } }
L_d3bbb:
    X86_TICK(c, 9);
    // 0d3bbb  sub eax, eax
    X86_AT(c, 0xd3bbbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d3bbd  jmp 0xd3bc4
    X86_AT(c, 0xd3bbdu);
    goto L_d3bc4;
L_d3bbf:
    X86_TICK(c, 2);
    // 0d3bbf  mov eax, 0xffffffff
    X86_AT(c, 0xd3bbfu);
    c.r[0] = 0xFFFFFFFFu;
L_d3bc4:
    X86_TICK(c, 28);
    // 0d3bc4  pop edi
    X86_AT(c, 0xd3bc4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3bc5  pop esi
    X86_AT(c, 0xd3bc5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3bc6  pop ebx
    X86_AT(c, 0xd3bc6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3bc7  leave 
    X86_AT(c, 0xd3bc7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3bc8  ret 
    X86_AT(c, 0xd3bc8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3ab8u, "ran off the end of a function");
}
void f_000d3bcc(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d3bcc  cmp byte ptr [0xa4a49], 0x9d
    X86_AT(c, 0xd3bccu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x9Du, 0, 1);
    // 0d3bd3  je 0xd3c03
    X86_AT(c, 0xd3bd3u);
    if (x86_cc(c, 4)) { goto L_d3c03; }
    X86_TICK(c, 11);
    // 0d3bd5  mov al, byte ptr [0xb04b4]
    X86_AT(c, 0xd3bd5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB04B4u))));
    // 0d3bda  cmp al, 5
    X86_AT(c, 0xd3bdau);
    (void)x86_sub(c, g8(c, 0), 0x5u, 0, 1);
    // 0d3bdc  je 0xd3bee
    X86_AT(c, 0xd3bdcu);
    if (x86_cc(c, 4)) { goto L_d3bee; }
    X86_TICK(c, 7);
    // 0d3bde  cmp al, 6
    X86_AT(c, 0xd3bdeu);
    (void)x86_sub(c, g8(c, 0), 0x6u, 0, 1);
    // 0d3be0  je 0xd3bee
    X86_AT(c, 0xd3be0u);
    if (x86_cc(c, 4)) { goto L_d3bee; }
    X86_TICK(c, 7);
    // 0d3be2  cmp al, 3
    X86_AT(c, 0xd3be2u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d3be4  je 0xd3bee
    X86_AT(c, 0xd3be4u);
    if (x86_cc(c, 4)) { goto L_d3bee; }
    X86_TICK(c, 7);
    // 0d3be6  cmp al, 7
    X86_AT(c, 0xd3be6u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 0d3be8  je 0xd3bee
    X86_AT(c, 0xd3be8u);
    if (x86_cc(c, 4)) { goto L_d3bee; }
    X86_TICK(c, 7);
    // 0d3bea  dec al
    X86_AT(c, 0xd3beau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0d3bec  jne 0xd3c0d
    X86_AT(c, 0xd3becu);
    if (x86_cc(c, 5)) { goto L_d3c0d; }
L_d3bee:
    X86_TICK(c, 12);
    // 0d3bee  cmp dword ptr [0xb04ac], 0
    X86_AT(c, 0xd3beeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB04ACu))), 0x0u, 0, 4);
    // 0d3bf5  jne 0xd3c03
    X86_AT(c, 0xd3bf5u);
    if (x86_cc(c, 5)) { goto L_d3c03; }
    X86_TICK(c, 9);
    // 0d3bf7  mov dword ptr [0xb04ac], 1
    X86_AT(c, 0xd3bf7u);
    wr32((c.sbase[3] + (uint32_t)(0xB04ACu)), 0x1u);
    // 0d3c01  jmp 0xd3c0d
    X86_AT(c, 0xd3c01u);
    goto L_d3c0d;
L_d3c03:
    X86_TICK(c, 2);
    // 0d3c03  mov dword ptr [0xb04ac], 0
    X86_AT(c, 0xd3c03u);
    wr32((c.sbase[3] + (uint32_t)(0xB04ACu)), 0x0u);
L_d3c0d:
    X86_TICK(c, 12);
    // 0d3c0d  cmp dword ptr [0xabf7c], 0
    X86_AT(c, 0xd3c0du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xABF7Cu))), 0x0u, 0, 4);
    // 0d3c14  jne 0xd3c29
    X86_AT(c, 0xd3c14u);
    if (x86_cc(c, 5)) { goto L_d3c29; }
    X86_TICK(c, 12);
    // 0d3c16  cmp dword ptr [0xb04ac], 0
    X86_AT(c, 0xd3c16u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB04ACu))), 0x0u, 0, 4);
    // 0d3c1d  jne 0xd3c29
    X86_AT(c, 0xd3c1du);
    if (x86_cc(c, 5)) { goto L_d3c29; }
    X86_TICK(c, 7);
    // 0d3c1f  call 0xd3ee0
    X86_AT(c, 0xd3c1fu);
    push32(c, 0xd3c24u); x86_call_known(c, 0xd3ee0u, f_000d3ee0); X86_RET(c, 0xd3c24u);
    X86_TICK(c, 7);
    // 0d3c24  call 0xd3dd0
    X86_AT(c, 0xd3c24u);
    push32(c, 0xd3c29u); x86_call_known(c, 0xd3dd0u, f_000d3dd0); X86_RET(c, 0xd3c29u);
L_d3c29:
    X86_TICK(c, 11);
    // 0d3c29  mov eax, dword ptr [0xabf7c]
    X86_AT(c, 0xd3c29u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xABF7Cu)));
    // 0d3c2e  and eax, eax
    X86_AT(c, 0xd3c2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d3c30  je 0xd3c38
    X86_AT(c, 0xd3c30u);
    if (x86_cc(c, 4)) { goto L_d3c38; }
    X86_TICK(c, 6);
    // 0d3c32  dec dword ptr [0xabf7c]
    X86_AT(c, 0xd3c32u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xABF7Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_d3c38:
    X86_TICK(c, 9);
    // 0d3c38  push 0
    X86_AT(c, 0xd3c38u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3c3a  call 0xb61d4
    X86_AT(c, 0xd3c3au);
    push32(c, 0xd3c3fu); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd3c3fu);
    X86_TICK(c, 12);
    // 0d3c3f  add esp, 4
    X86_AT(c, 0xd3c3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3c42  ret 
    X86_AT(c, 0xd3c42u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3bccu, "ran off the end of a function");
}
void f_000d3c44(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d3c44  push ebp
    X86_AT(c, 0xd3c44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3c45  mov ebp, esp
    X86_AT(c, 0xd3c45u);
    c.r[5] = c.r[4];
    // 0d3c47  sub esp, 0xc
    X86_AT(c, 0xd3c47u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0d3c4a  push ebx
    X86_AT(c, 0xd3c4au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3c4b  push esi
    X86_AT(c, 0xd3c4bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3c4c  push edi
    X86_AT(c, 0xd3c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3c4d  push 9
    X86_AT(c, 0xd3c4du);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d3c4f  call 0xb61b4
    X86_AT(c, 0xd3c4fu);
    push32(c, 0xd3c54u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd3c54u);
    X86_TICK(c, 9);
    // 0d3c54  add esp, 4
    X86_AT(c, 0xd3c54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3c57  cmp eax, 5
    X86_AT(c, 0xd3c57u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0d3c5a  jl 0xd3dc9
    X86_AT(c, 0xd3c5au);
    if (x86_cc(c, 12)) { goto L_d3dc9; }
    X86_TICK(c, 15);
    // 0d3c60  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd3c60u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d3c63  mov eax, dword ptr [eax*4 + 0x45e10]
    X86_AT(c, 0xd3c63u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x45E10u)));
    // 0d3c6a  and eax, eax
    X86_AT(c, 0xd3c6au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d3c6c  je 0xd3dc9
    X86_AT(c, 0xd3c6cu);
    if (x86_cc(c, 4)) { goto L_d3dc9; }
    X86_TICK(c, 19);
    // 0d3c72  lea eax, [eax*8]
    X86_AT(c, 0xd3c72u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0d3c79  lea eax, [eax + eax*2]
    X86_AT(c, 0xd3c79u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d3c7c  mov edi, dword ptr [eax + 0x45994]
    X86_AT(c, 0xd3c7cu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x45994u)));
    // 0d3c82  mov esi, dword ptr [eax + 0x45998]
    X86_AT(c, 0xd3c82u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x45998u)));
    // 0d3c88  cmp edi, 5
    X86_AT(c, 0xd3c88u);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0d3c8b  jge 0xd3c96
    X86_AT(c, 0xd3c8bu);
    if (x86_cc(c, 13)) { goto L_d3c96; }
    X86_TICK(c, 9);
    // 0d3c8d  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xd3c8du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0d3c94  jmp 0xd3cab
    X86_AT(c, 0xd3c94u);
    goto L_d3cab;
L_d3c96:
    X86_TICK(c, 7);
    // 0d3c96  cmp edi, 5
    X86_AT(c, 0xd3c96u);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0d3c99  jle 0xd3ca4
    X86_AT(c, 0xd3c99u);
    if (x86_cc(c, 14)) { goto L_d3ca4; }
    X86_TICK(c, 9);
    // 0d3c9b  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xd3c9bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0d3ca2  jmp 0xd3cab
    X86_AT(c, 0xd3ca2u);
    goto L_d3cab;
L_d3ca4:
    X86_TICK(c, 2);
    // 0d3ca4  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd3ca4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_d3cab:
    X86_TICK(c, 7);
    // 0d3cab  cmp esi, 5
    X86_AT(c, 0xd3cabu);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0d3cae  jge 0xd3cb9
    X86_AT(c, 0xd3caeu);
    if (x86_cc(c, 13)) { goto L_d3cb9; }
    X86_TICK(c, 9);
    // 0d3cb0  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xd3cb0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0d3cb7  jmp 0xd3cce
    X86_AT(c, 0xd3cb7u);
    goto L_d3cce;
L_d3cb9:
    X86_TICK(c, 7);
    // 0d3cb9  cmp esi, 5
    X86_AT(c, 0xd3cb9u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0d3cbc  jle 0xd3cc7
    X86_AT(c, 0xd3cbcu);
    if (x86_cc(c, 14)) { goto L_d3cc7; }
    X86_TICK(c, 9);
    // 0d3cbe  mov dword ptr [ebp - 8], 0xffffffff
    X86_AT(c, 0xd3cbeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFFFFFu);
    // 0d3cc5  jmp 0xd3cce
    X86_AT(c, 0xd3cc5u);
    goto L_d3cce;
L_d3cc7:
    X86_TICK(c, 2);
    // 0d3cc7  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xd3cc7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_d3cce:
    X86_TICK(c, 9);
    // 0d3cce  push 4
    X86_AT(c, 0xd3cceu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d3cd0  call 0xb607c
    X86_AT(c, 0xd3cd0u);
    push32(c, 0xd3cd5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd3cd5u);
    X86_TICK(c, 9);
    // 0d3cd5  push 5
    X86_AT(c, 0xd3cd5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d3cd7  call 0xbebbc
    X86_AT(c, 0xd3cd7u);
    push32(c, 0xd3cdcu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd3cdcu);
    X86_TICK(c, 15);
    // 0d3cdc  push 0xffffffff
    X86_AT(c, 0xd3cdcu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d3cde  push 0x85
    X86_AT(c, 0xd3cdeu);
    { uint32_t v = 0x85u; push32(c, v); }
    // 0d3ce3  push esi
    X86_AT(c, 0xd3ce3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3ce4  push edi
    X86_AT(c, 0xd3ce4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3ce5  call 0xb774c
    X86_AT(c, 0xd3ce5u);
    push32(c, 0xd3ceau); x86_call_known(c, 0xb774cu, f_000b774c); X86_RET(c, 0xd3ceau);
    X86_TICK(c, 6);
    // 0d3cea  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd3ceau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d3ced  sub ebx, ebx
    X86_AT(c, 0xd3cedu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0d3cef  add esp, 0x18
    X86_AT(c, 0xd3cefu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_d3cf2:
    X86_TICK(c, 7);
    // 0d3cf2  cmp ebx, 3
    X86_AT(c, 0xd3cf2u);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0d3cf5  jge 0xd3d8d
    X86_AT(c, 0xd3cf5u);
    if (x86_cc(c, 13)) { goto L_d3d8d; }
    X86_TICK(c, 28);
    // 0d3cfb  add edi, dword ptr [ebp - 4]
    X86_AT(c, 0xd3cfbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d3cfe  add esi, dword ptr [ebp - 8]
    X86_AT(c, 0xd3cfeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0d3d01  push esi
    X86_AT(c, 0xd3d01u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3d02  push edi
    X86_AT(c, 0xd3d02u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3d03  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xd3d03u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0d3d06  call 0xb792c
    X86_AT(c, 0xd3d06u);
    push32(c, 0xd3d0bu); x86_call_known(c, 0xb792cu, f_000b792c); X86_RET(c, 0xd3d0bu);
    X86_TICK(c, 19);
    // 0d3d0b  push 2
    X86_AT(c, 0xd3d0bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d3d0d  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd3d0du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d3d13  push dword ptr [0xa4a76]
    X86_AT(c, 0xd3d13u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d3d19  call 0xbd068
    X86_AT(c, 0xd3d19u);
    push32(c, 0xd3d1eu); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd3d1eu);
    X86_TICK(c, 21);
    // 0d3d1e  mov eax, esi
    X86_AT(c, 0xd3d1eu);
    c.r[0] = c.r[6];
    // 0d3d20  lea edx, [eax + eax*8]
    X86_AT(c, 0xd3d20u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0d3d23  lea eax, [edx + eax*2]
    X86_AT(c, 0xd3d23u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0d3d26  lea edx, [edi + eax*1]
    X86_AT(c, 0xd3d26u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0d3d29  add esp, 0x18
    X86_AT(c, 0xd3d29u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d3d2c  mov al, byte ptr [edx + 0x8cfa8]
    X86_AT(c, 0xd3d2cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8CFA8u))));
    // 0d3d32  cmp al, 5
    X86_AT(c, 0xd3d32u);
    (void)x86_sub(c, g8(c, 0), 0x5u, 0, 1);
    // 0d3d34  je 0xd3dbe
    X86_AT(c, 0xd3d34u);
    if (x86_cc(c, 4)) { goto L_d3dbe; }
    X86_TICK(c, 7);
    // 0d3d3a  cmp al, 0x24
    X86_AT(c, 0xd3d3au);
    (void)x86_sub(c, g8(c, 0), 0x24u, 0, 1);
    // 0d3d3c  je 0xd3dbe
    X86_AT(c, 0xd3d3cu);
    if (x86_cc(c, 4)) { goto L_d3dbe; }
    X86_TICK(c, 7);
    // 0d3d42  cmp edi, 5
    X86_AT(c, 0xd3d42u);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0d3d45  jne 0xd3d87
    X86_AT(c, 0xd3d45u);
    if (x86_cc(c, 5)) { goto L_d3d87; }
    X86_TICK(c, 7);
    // 0d3d47  cmp esi, 5
    X86_AT(c, 0xd3d47u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0d3d4a  jne 0xd3d87
    X86_AT(c, 0xd3d4au);
    if (x86_cc(c, 5)) { goto L_d3d87; }
    X86_TICK(c, 12);
    // 0d3d4c  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xd3d4cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0d3d4f  call 0xb78a4
    X86_AT(c, 0xd3d4fu);
    push32(c, 0xd3d54u); x86_call_known(c, 0xb78a4u, f_000b78a4); X86_RET(c, 0xd3d54u);
    X86_TICK(c, 7);
    // 0d3d54  call 0xd37ac
    X86_AT(c, 0xd3d54u);
    push32(c, 0xd3d59u); x86_call_known(c, 0xd37acu, f_000d37ac); X86_RET(c, 0xd3d59u);
    X86_TICK(c, 17);
    // 0d3d59  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd3d59u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d3d5f  push dword ptr [0xa4a76]
    X86_AT(c, 0xd3d5fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d3d65  call 0xb7aa0
    X86_AT(c, 0xd3d65u);
    push32(c, 0xd3d6au); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xd3d6au);
    X86_TICK(c, 19);
    // 0d3d6a  push 2
    X86_AT(c, 0xd3d6au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d3d6c  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd3d6cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d3d72  push dword ptr [0xa4a76]
    X86_AT(c, 0xd3d72u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d3d78  call 0xbd068
    X86_AT(c, 0xd3d78u);
    push32(c, 0xd3d7du); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd3d7du);
    X86_TICK(c, 7);
    // 0d3d7d  call 0xc9bcc
    X86_AT(c, 0xd3d7du);
    push32(c, 0xd3d82u); x86_call_known(c, 0xc9bccu, f_000c9bcc); X86_RET(c, 0xd3d82u);
    X86_TICK(c, 9);
    // 0d3d82  add esp, 0x18
    X86_AT(c, 0xd3d82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d3d85  jmp 0xd3dc9
    X86_AT(c, 0xd3d85u);
    goto L_d3dc9;
L_d3d87:
    X86_TICK(c, 9);
    // 0d3d87  inc ebx
    X86_AT(c, 0xd3d87u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d3d88  jmp 0xd3cf2
    X86_AT(c, 0xd3d88u);
    X86_POLL(c, 0xd3cf2u); goto L_d3cf2;
L_d3d8d:
    X86_TICK(c, 2);
    // 0d3d8d  sub ebx, ebx
    X86_AT(c, 0xd3d8du);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_d3d8f:
    X86_TICK(c, 7);
    // 0d3d8f  cmp ebx, 3
    X86_AT(c, 0xd3d8fu);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0d3d92  jge 0xd3dbe
    X86_AT(c, 0xd3d92u);
    if (x86_cc(c, 13)) { goto L_d3dbe; }
    X86_TICK(c, 20);
    // 0d3d94  lea eax, [ebx + 0x85]
    X86_AT(c, 0xd3d94u);
    c.r[0] = (uint32_t)(c.r[3] + 0x85u);
    // 0d3d9a  push eax
    X86_AT(c, 0xd3d9au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d3d9b  push esi
    X86_AT(c, 0xd3d9bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3d9c  push edi
    X86_AT(c, 0xd3d9cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3d9d  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xd3d9du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0d3da0  call 0xb7984
    X86_AT(c, 0xd3da0u);
    push32(c, 0xd3da5u); x86_call_known(c, 0xb7984u, f_000b7984); X86_RET(c, 0xd3da5u);
    X86_TICK(c, 19);
    // 0d3da5  push 2
    X86_AT(c, 0xd3da5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d3da7  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd3da7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d3dad  push dword ptr [0xa4a76]
    X86_AT(c, 0xd3dadu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d3db3  call 0xbd068
    X86_AT(c, 0xd3db3u);
    push32(c, 0xd3db8u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd3db8u);
    X86_TICK(c, 11);
    // 0d3db8  inc ebx
    X86_AT(c, 0xd3db8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d3db9  add esp, 0x1c
    X86_AT(c, 0xd3db9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d3dbc  jmp 0xd3d8f
    X86_AT(c, 0xd3dbcu);
    X86_POLL(c, 0xd3d8fu); goto L_d3d8f;
L_d3dbe:
    X86_TICK(c, 12);
    // 0d3dbe  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xd3dbeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0d3dc1  call 0xb78a4
    X86_AT(c, 0xd3dc1u);
    push32(c, 0xd3dc6u); x86_call_known(c, 0xb78a4u, f_000b78a4); X86_RET(c, 0xd3dc6u);
    X86_TICK(c, 2);
    // 0d3dc6  add esp, 4
    X86_AT(c, 0xd3dc6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d3dc9:
    X86_TICK(c, 28);
    // 0d3dc9  pop edi
    X86_AT(c, 0xd3dc9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3dca  pop esi
    X86_AT(c, 0xd3dcau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3dcb  pop ebx
    X86_AT(c, 0xd3dcbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3dcc  leave 
    X86_AT(c, 0xd3dccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3dcd  ret 
    X86_AT(c, 0xd3dcdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3c44u, "ran off the end of a function");
}
void f_000d3dd0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0d3dd0  push ebp
    X86_AT(c, 0xd3dd0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3dd1  mov ebp, esp
    X86_AT(c, 0xd3dd1u);
    c.r[5] = c.r[4];
    // 0d3dd3  sub esp, 8
    X86_AT(c, 0xd3dd3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d3dd6  push ebx
    X86_AT(c, 0xd3dd6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3dd7  push esi
    X86_AT(c, 0xd3dd7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3dd8  push edi
    X86_AT(c, 0xd3dd8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3dd9  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xd3dd9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0d3de0  jne 0xd3ed8
    X86_AT(c, 0xd3de0u);
    if (x86_cc(c, 5)) { goto L_d3ed8; }
    X86_TICK(c, 9);
    // 0d3de6  push 0x87
    X86_AT(c, 0xd3de6u);
    { uint32_t v = 0x87u; push32(c, v); }
    // 0d3deb  call 0xb61b4
    X86_AT(c, 0xd3debu);
    push32(c, 0xd3df0u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd3df0u);
    X86_TICK(c, 9);
    // 0d3df0  add esp, 4
    X86_AT(c, 0xd3df0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3df3  cmp eax, 0x80
    X86_AT(c, 0xd3df3u);
    (void)x86_sub(c, c.r[0], 0x80u, 0, 4);
    // 0d3df8  jge 0xd3ed8
    X86_AT(c, 0xd3df8u);
    if (x86_cc(c, 13)) { goto L_d3ed8; }
    X86_TICK(c, 2);
    // 0d3dfe  sub edi, edi
    X86_AT(c, 0xd3dfeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d3e00:
    X86_TICK(c, 7);
    // 0d3e00  cmp edi, 0x10
    X86_AT(c, 0xd3e00u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0d3e03  jge 0xd3ed8
    X86_AT(c, 0xd3e03u);
    if (x86_cc(c, 13)) { goto L_d3ed8; }
    X86_TICK(c, 12);
    // 0d3e09  cmp byte ptr [edi + 0xa5ce8], 0
    X86_AT(c, 0xd3e09u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u))), 0x0u, 0, 1);
    // 0d3e10  jne 0xd3ed2
    X86_AT(c, 0xd3e10u);
    if (x86_cc(c, 5)) { goto L_d3ed2; }
    X86_TICK(c, 9);
    // 0d3e16  push 0xc
    X86_AT(c, 0xd3e16u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d3e18  call 0xd4788
    X86_AT(c, 0xd3e18u);
    push32(c, 0xd3e1du); x86_call_known(c, 0xd4788u, f_000d4788); X86_RET(c, 0xd3e1du);
    X86_TICK(c, 12);
    // 0d3e1d  xchg esi, eax
    X86_AT(c, 0xd3e1du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d3e1e  add esp, 4
    X86_AT(c, 0xd3e1eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3e21  and esi, esi
    X86_AT(c, 0xd3e21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d3e23  jl 0xd3ed2
    X86_AT(c, 0xd3e23u);
    if (x86_cc(c, 12)) { goto L_d3ed2; }
    X86_TICK(c, 7);
    // 0d3e29  cmp esi, 0xc
    X86_AT(c, 0xd3e29u);
    (void)x86_sub(c, c.r[6], 0xCu, 0, 4);
    // 0d3e2c  jg 0xd3ed2
    X86_AT(c, 0xd3e2cu);
    if (x86_cc(c, 15)) { goto L_d3ed2; }
    X86_TICK(c, 6);
    // 0d3e32  mov al, byte ptr [esi + 0xb0aac]
    X86_AT(c, 0xd3e32u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xB0AACu))));
    // 0d3e38  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xd3e38u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
L_d3e3b:
    X86_TICK(c, 9);
    // 0d3e3b  push 0x3f
    X86_AT(c, 0xd3e3bu);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0d3e3d  call 0xb61b4
    X86_AT(c, 0xd3e3du);
    push32(c, 0xd3e42u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd3e42u);
    X86_TICK(c, 11);
    // 0d3e42  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd3e42u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d3e45  push 0x3f
    X86_AT(c, 0xd3e45u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0d3e47  call 0xb61b4
    X86_AT(c, 0xd3e47u);
    push32(c, 0xd3e4cu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd3e4cu);
    X86_TICK(c, 17);
    // 0d3e4c  xchg ebx, eax
    X86_AT(c, 0xd3e4cu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d3e4d  push ebx
    X86_AT(c, 0xd3e4du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3e4e  push dword ptr [ebp - 4]
    X86_AT(c, 0xd3e4eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d3e51  call 0xc8474
    X86_AT(c, 0xd3e51u);
    push32(c, 0xd3e56u); x86_call_known(c, 0xc8474u, f_000c8474); X86_RET(c, 0xd3e56u);
    X86_TICK(c, 13);
    // 0d3e56  add esp, 0x10
    X86_AT(c, 0xd3e56u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d3e59  cmp al, byte ptr [ebp - 5]
    X86_AT(c, 0xd3e59u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0, 1);
    // 0d3e5c  jne 0xd3e3b
    X86_AT(c, 0xd3e5cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd3e3bu); goto L_d3e3b; }
    X86_TICK(c, 15);
    // 0d3e5e  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd3e5eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d3e63  cmp eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd3e63u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0d3e66  je 0xd3e70
    X86_AT(c, 0xd3e66u);
    if (x86_cc(c, 4)) { goto L_d3e70; }
    X86_TICK(c, 11);
    // 0d3e68  cmp ebx, dword ptr [0xa4a7a]
    X86_AT(c, 0xd3e68u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0, 4);
    // 0d3e6e  jne 0xd3e79
    X86_AT(c, 0xd3e6eu);
    if (x86_cc(c, 5)) { goto L_d3e79; }
L_d3e70:
    X86_TICK(c, 9);
    // 0d3e70  mov byte ptr [edi + 0xa5ce8], 0
    X86_AT(c, 0xd3e70u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), 0x0u);
    // 0d3e77  jmp 0xd3ed2
    X86_AT(c, 0xd3e77u);
    goto L_d3ed2;
L_d3e79:
    X86_TICK(c, 17);
    // 0d3e79  push dword ptr [0xa4a7a]
    X86_AT(c, 0xd3e79u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0d3e7f  push dword ptr [0xa4a76]
    X86_AT(c, 0xd3e7fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0d3e85  call 0xb7aa0
    X86_AT(c, 0xd3e85u);
    push32(c, 0xd3e8au); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xd3e8au);
    X86_TICK(c, 7);
    // 0d3e8a  call 0xb7818
    X86_AT(c, 0xd3e8au);
    push32(c, 0xd3e8fu); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xd3e8fu);
    X86_TICK(c, 26);
    // 0d3e8f  mov al, byte ptr [esi + 0xb0a9c]
    X86_AT(c, 0xd3e8fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xB0A9Cu))));
    // 0d3e95  mov byte ptr [edi + 0xa5ce8], al
    X86_AT(c, 0xd3e95u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), g8(c, 0));
    // 0d3e9b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd3e9bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d3e9e  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd3e9eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d3ea5  mov dword ptr [edi*4 + 0xa5e08], ebx
    X86_AT(c, 0xd3ea5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[3]);
    // 0d3eac  mov al, byte ptr [esi*4 + 0xb0abc]
    X86_AT(c, 0xd3eacu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB0ABCu))));
    // 0d3eb3  mov byte ptr [edi + 0xa5d18], al
    X86_AT(c, 0xd3eb3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5D18u)), g8(c, 0));
    // 0d3eb9  mov dword ptr [edi*4 + 0xa5ec8], 3
    X86_AT(c, 0xd3eb9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u)), 0x3u);
    // 0d3ec4  mov dword ptr [edi*4 + 0xa6074], 0xffffffff
    X86_AT(c, 0xd3ec4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)), 0xFFFFFFFFu);
    // 0d3ecf  add esp, 8
    X86_AT(c, 0xd3ecfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d3ed2:
    X86_TICK(c, 9);
    // 0d3ed2  inc edi
    X86_AT(c, 0xd3ed2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d3ed3  jmp 0xd3e00
    X86_AT(c, 0xd3ed3u);
    X86_POLL(c, 0xd3e00u); goto L_d3e00;
L_d3ed8:
    X86_TICK(c, 28);
    // 0d3ed8  pop edi
    X86_AT(c, 0xd3ed8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3ed9  pop esi
    X86_AT(c, 0xd3ed9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3eda  pop ebx
    X86_AT(c, 0xd3edau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3edb  leave 
    X86_AT(c, 0xd3edbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3edc  ret 
    X86_AT(c, 0xd3edcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3dd0u, "ran off the end of a function");
}
void f_000d3ee0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d3ee0  push ebp
    X86_AT(c, 0xd3ee0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3ee1  mov ebp, esp
    X86_AT(c, 0xd3ee1u);
    c.r[5] = c.r[4];
    // 0d3ee3  sub esp, 0x10
    X86_AT(c, 0xd3ee3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0d3ee6  push ebx
    X86_AT(c, 0xd3ee6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3ee7  push esi
    X86_AT(c, 0xd3ee7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3ee8  push edi
    X86_AT(c, 0xd3ee8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3ee9  sub edi, edi
    X86_AT(c, 0xd3ee9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d3eeb:
    X86_TICK(c, 7);
    // 0d3eeb  cmp edi, 0x2f
    X86_AT(c, 0xd3eebu);
    (void)x86_sub(c, c.r[7], 0x2Fu, 0, 4);
    // 0d3eee  jge 0xd40dd
    X86_AT(c, 0xd3eeeu);
    if (x86_cc(c, 13)) { goto L_d40dd; }
    X86_TICK(c, 21);
    // 0d3ef4  sub eax, eax
    X86_AT(c, 0xd3ef4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d3ef6  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xd3ef6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0d3ef9  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd3ef9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d3efc  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd3efcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d3eff  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd3effu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d3f02  cmp eax, dword ptr [edi*4 + 0xa5ec8]
    X86_AT(c, 0xd3f02u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u))), 0, 4);
    // 0d3f09  je 0xd40d7
    X86_AT(c, 0xd3f09u);
    if (x86_cc(c, 4)) { goto L_d40d7; }
    X86_TICK(c, 11);
    // 0d3f0f  mov dl, byte ptr [edi + 0xa5ce8]
    X86_AT(c, 0xd3f0fu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u))));
    // 0d3f15  cmp al, dl
    X86_AT(c, 0xd3f15u);
    (void)x86_sub(c, g8(c, 0), g8(c, 2), 0, 1);
    // 0d3f17  je 0xd40d7
    X86_AT(c, 0xd3f17u);
    if (x86_cc(c, 4)) { goto L_d40d7; }
    X86_TICK(c, 7);
    // 0d3f1d  cmp dl, 0x80
    X86_AT(c, 0xd3f1du);
    (void)x86_sub(c, g8(c, 2), 0x80u, 0, 1);
    // 0d3f20  je 0xd40d7
    X86_AT(c, 0xd3f20u);
    if (x86_cc(c, 4)) { goto L_d40d7; }
    X86_TICK(c, 7);
    // 0d3f26  cmp dl, 0x81
    X86_AT(c, 0xd3f26u);
    (void)x86_sub(c, g8(c, 2), 0x81u, 0, 1);
    // 0d3f29  je 0xd40d7
    X86_AT(c, 0xd3f29u);
    if (x86_cc(c, 4)) { goto L_d40d7; }
    X86_TICK(c, 7);
    // 0d3f2f  cmp dl, 0xa1
    X86_AT(c, 0xd3f2fu);
    (void)x86_sub(c, g8(c, 2), 0xA1u, 0, 1);
    // 0d3f32  je 0xd40d7
    X86_AT(c, 0xd3f32u);
    if (x86_cc(c, 4)) { goto L_d40d7; }
    X86_TICK(c, 11);
    // 0d3f38  cmp eax, dword ptr [0xa4a56]
    X86_AT(c, 0xd3f38u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0, 4);
    // 0d3f3e  je 0xd3fc9
    X86_AT(c, 0xd3f3eu);
    if (x86_cc(c, 4)) { goto L_d3fc9; }
    X86_TICK(c, 12);
    // 0d3f44  cmp dword ptr [edi*4 + 0xa5ec8], 1
    X86_AT(c, 0xd3f44u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u))), 0x1u, 0, 4);
    // 0d3f4c  jne 0xd3fbf
    X86_AT(c, 0xd3f4cu);
    if (x86_cc(c, 5)) { goto L_d3fbf; }
    X86_TICK(c, 9);
    // 0d3f4e  push 9
    X86_AT(c, 0xd3f4eu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d3f50  call 0xb61b4
    X86_AT(c, 0xd3f50u);
    push32(c, 0xd3f55u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd3f55u);
    X86_TICK(c, 9);
    // 0d3f55  add esp, 4
    X86_AT(c, 0xd3f55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3f58  cmp eax, 5
    X86_AT(c, 0xd3f58u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0d3f5b  jl 0xd40d7
    X86_AT(c, 0xd3f5bu);
    if (x86_cc(c, 12)) { goto L_d40d7; }
    X86_TICK(c, 9);
    // 0d3f61  push 2
    X86_AT(c, 0xd3f61u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d3f63  call 0xb61b4
    X86_AT(c, 0xd3f63u);
    push32(c, 0xd3f68u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd3f68u);
    X86_TICK(c, 19);
    // 0d3f68  dec eax
    X86_AT(c, 0xd3f68u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d3f69  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd3f69u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d3f6c  add esp, 4
    X86_AT(c, 0xd3f6cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3f6f  add eax, dword ptr [edi*4 + 0xa5d48]
    X86_AT(c, 0xd3f6fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u))), 0, 4); }
    // 0d3f76  cmp eax, 0x3e
    X86_AT(c, 0xd3f76u);
    (void)x86_sub(c, c.r[0], 0x3Eu, 0, 4);
    // 0d3f79  jg 0xd40d7
    X86_AT(c, 0xd3f79u);
    if (x86_cc(c, 15)) { goto L_d40d7; }
    X86_TICK(c, 7);
    // 0d3f7f  dec eax
    X86_AT(c, 0xd3f7fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d3f80  jl 0xd40d7
    X86_AT(c, 0xd3f80u);
    if (x86_cc(c, 12)) { goto L_d40d7; }
    X86_TICK(c, 9);
    // 0d3f86  push 2
    X86_AT(c, 0xd3f86u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d3f88  call 0xb61b4
    X86_AT(c, 0xd3f88u);
    push32(c, 0xd3f8du); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd3f8du);
    X86_TICK(c, 19);
    // 0d3f8d  dec eax
    X86_AT(c, 0xd3f8du);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d3f8e  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xd3f8eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0d3f91  add esp, 4
    X86_AT(c, 0xd3f91u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3f94  add eax, dword ptr [edi*4 + 0xa5e08]
    X86_AT(c, 0xd3f94u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u))), 0, 4); }
    // 0d3f9b  cmp eax, 0x3e
    X86_AT(c, 0xd3f9bu);
    (void)x86_sub(c, c.r[0], 0x3Eu, 0, 4);
    // 0d3f9e  jg 0xd40d7
    X86_AT(c, 0xd3f9eu);
    if (x86_cc(c, 15)) { goto L_d40d7; }
    X86_TICK(c, 7);
    // 0d3fa4  cmp eax, 1
    X86_AT(c, 0xd3fa4u);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0d3fa7  jl 0xd40d7
    X86_AT(c, 0xd3fa7u);
    if (x86_cc(c, 12)) { goto L_d40d7; }
    X86_TICK(c, 21);
    // 0d3fad  mov edx, dword ptr [edi*4 + 0xa5d48]
    X86_AT(c, 0xd3fadu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)));
    // 0d3fb4  add edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd3fb4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0d3fb7  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xd3fb7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0d3fba  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd3fbau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d3fbd  jmp 0xd4027
    X86_AT(c, 0xd3fbdu);
    goto L_d4027;
L_d3fbf:
    X86_TICK(c, 12);
    // 0d3fbf  cmp dword ptr [edi*4 + 0xa5ec8], 3
    X86_AT(c, 0xd3fbfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u))), 0x3u, 0, 4);
    // 0d3fc7  jne 0xd4004
    X86_AT(c, 0xd3fc7u);
    if (x86_cc(c, 5)) { goto L_d4004; }
L_d3fc9:
    X86_TICK(c, 25);
    // 0d3fc9  lea eax, [ebp - 0x10]
    X86_AT(c, 0xd3fc9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0d3fcc  push eax
    X86_AT(c, 0xd3fccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d3fcd  lea eax, [ebp - 0xc]
    X86_AT(c, 0xd3fcdu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0d3fd0  push eax
    X86_AT(c, 0xd3fd0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d3fd1  lea ebx, [ebp - 8]
    X86_AT(c, 0xd3fd1u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d3fd4  push ebx
    X86_AT(c, 0xd3fd4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3fd5  lea esi, [ebp - 4]
    X86_AT(c, 0xd3fd5u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d3fd8  push esi
    X86_AT(c, 0xd3fd8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3fd9  push edi
    X86_AT(c, 0xd3fd9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3fda  call 0xc9344
    X86_AT(c, 0xd3fdau);
    push32(c, 0xd3fdfu); x86_call_known(c, 0xc9344u, f_000c9344); X86_RET(c, 0xd3fdfu);
    X86_TICK(c, 17);
    // 0d3fdf  add esp, 0x14
    X86_AT(c, 0xd3fdfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d3fe2  mov eax, dword ptr [esi]
    X86_AT(c, 0xd3fe2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0d3fe4  cmp eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd3fe4u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0, 4);
    // 0d3fea  jne 0xd4027
    X86_AT(c, 0xd3feau);
    if (x86_cc(c, 5)) { goto L_d4027; }
    X86_TICK(c, 15);
    // 0d3fec  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd3fecu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d3fee  cmp eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd3feeu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0, 4);
    // 0d3ff4  jne 0xd4027
    X86_AT(c, 0xd3ff4u);
    if (x86_cc(c, 5)) { goto L_d4027; }
    X86_TICK(c, 9);
    // 0d3ff6  push edi
    X86_AT(c, 0xd3ff6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3ff7  call 0xcd8a4
    X86_AT(c, 0xd3ff7u);
    push32(c, 0xd3ffcu); x86_call_known(c, 0xcd8a4u, f_000cd8a4); X86_RET(c, 0xd3ffcu);
    X86_TICK(c, 9);
    // 0d3ffc  add esp, 4
    X86_AT(c, 0xd3ffcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3fff  jmp 0xd40dd
    X86_AT(c, 0xd3fffu);
    goto L_d40dd;
L_d4004:
    X86_TICK(c, 12);
    // 0d4004  cmp dword ptr [edi*4 + 0xa5ec8], 3
    X86_AT(c, 0xd4004u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u))), 0x3u, 0, 4);
    // 0d400c  jne 0xd4027
    X86_AT(c, 0xd400cu);
    if (x86_cc(c, 5)) { goto L_d4027; }
    X86_TICK(c, 25);
    // 0d400e  lea eax, [ebp - 0x10]
    X86_AT(c, 0xd400eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0d4011  push eax
    X86_AT(c, 0xd4011u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4012  lea eax, [ebp - 0xc]
    X86_AT(c, 0xd4012u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0d4015  push eax
    X86_AT(c, 0xd4015u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4016  lea eax, [ebp - 8]
    X86_AT(c, 0xd4016u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d4019  push eax
    X86_AT(c, 0xd4019u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d401a  lea eax, [ebp - 4]
    X86_AT(c, 0xd401au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d401d  push eax
    X86_AT(c, 0xd401du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d401e  push edi
    X86_AT(c, 0xd401eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d401f  call 0xc9344
    X86_AT(c, 0xd401fu);
    push32(c, 0xd4024u); x86_call_known(c, 0xc9344u, f_000c9344); X86_RET(c, 0xd4024u);
    X86_TICK(c, 2);
    // 0d4024  add esp, 0x14
    X86_AT(c, 0xd4024u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d4027:
    X86_TICK(c, 33);
    // 0d4027  mov eax, dword ptr [edi*4 + 0xa5d48]
    X86_AT(c, 0xd4027u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)));
    // 0d402e  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd402eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d4031  mov eax, dword ptr [edi*4 + 0xa5e08]
    X86_AT(c, 0xd4031u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)));
    // 0d4038  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xd4038u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0d403b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd403bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d403e  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd403eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d4045  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd4045u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d4048  mov dword ptr [edi*4 + 0xa5e08], eax
    X86_AT(c, 0xd4048u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[0]);
    // 0d404f  push edi
    X86_AT(c, 0xd404fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4050  call 0xd3ab8
    X86_AT(c, 0xd4050u);
    push32(c, 0xd4055u); x86_call_known(c, 0xd3ab8u, f_000d3ab8); X86_RET(c, 0xd4055u);
    X86_TICK(c, 9);
    // 0d4055  add esp, 4
    X86_AT(c, 0xd4055u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d4058  and eax, eax
    X86_AT(c, 0xd4058u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d405a  je 0xd4094
    X86_AT(c, 0xd405au);
    if (x86_cc(c, 4)) { goto L_d4094; }
    X86_TICK(c, 15);
    // 0d405c  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd405cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0d405f  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd405fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d4066  push edi
    X86_AT(c, 0xd4066u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4067  call 0xd3ab8
    X86_AT(c, 0xd4067u);
    push32(c, 0xd406cu); x86_call_known(c, 0xd3ab8u, f_000d3ab8); X86_RET(c, 0xd406cu);
    X86_TICK(c, 9);
    // 0d406c  add esp, 4
    X86_AT(c, 0xd406cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d406f  and eax, eax
    X86_AT(c, 0xd406fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d4071  je 0xd4094
    X86_AT(c, 0xd4071u);
    if (x86_cc(c, 4)) { goto L_d4094; }
    X86_TICK(c, 21);
    // 0d4073  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd4073u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d4076  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd4076u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d407d  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd407du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0d4080  mov dword ptr [edi*4 + 0xa5e08], eax
    X86_AT(c, 0xd4080u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[0]);
    // 0d4087  push edi
    X86_AT(c, 0xd4087u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4088  call 0xd3ab8
    X86_AT(c, 0xd4088u);
    push32(c, 0xd408du); x86_call_known(c, 0xd3ab8u, f_000d3ab8); X86_RET(c, 0xd408du);
    X86_TICK(c, 9);
    // 0d408d  add esp, 4
    X86_AT(c, 0xd408du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d4090  and eax, eax
    X86_AT(c, 0xd4090u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d4092  jne 0xd40ac
    X86_AT(c, 0xd4092u);
    if (x86_cc(c, 5)) { goto L_d40ac; }
L_d4094:
    X86_TICK(c, 9);
    // 0d4094  push 9
    X86_AT(c, 0xd4094u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d4096  call 0xb61b4
    X86_AT(c, 0xd4096u);
    push32(c, 0xd409bu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd409bu);
    X86_TICK(c, 9);
    // 0d409b  add esp, 4
    X86_AT(c, 0xd409bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d409e  cmp eax, 3
    X86_AT(c, 0xd409eu);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0d40a1  jl 0xd40ac
    X86_AT(c, 0xd40a1u);
    if (x86_cc(c, 12)) { goto L_d40ac; }
    X86_TICK(c, 12);
    // 0d40a3  cmp dword ptr [0xa6134], 2
    X86_AT(c, 0xd40a3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x2u, 0, 4);
    // 0d40aa  jne 0xd40c0
    X86_AT(c, 0xd40aau);
    if (x86_cc(c, 5)) { goto L_d40c0; }
L_d40ac:
    X86_TICK(c, 12);
    // 0d40ac  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd40acu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0d40af  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd40afu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d40b6  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd40b6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0d40b9  mov dword ptr [edi*4 + 0xa5e08], eax
    X86_AT(c, 0xd40b9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[0]);
L_d40c0:
    X86_TICK(c, 11);
    // 0d40c0  mov al, byte ptr [edi + 0xa5ce8]
    X86_AT(c, 0xd40c0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u))));
    // 0d40c6  cmp al, 0x95
    X86_AT(c, 0xd40c6u);
    (void)x86_sub(c, g8(c, 0), 0x95u, 0, 1);
    // 0d40c8  je 0xd40ce
    X86_AT(c, 0xd40c8u);
    if (x86_cc(c, 4)) { goto L_d40ce; }
    X86_TICK(c, 7);
    // 0d40ca  cmp al, 0x86
    X86_AT(c, 0xd40cau);
    (void)x86_sub(c, g8(c, 0), 0x86u, 0, 1);
    // 0d40cc  jne 0xd40d7
    X86_AT(c, 0xd40ccu);
    if (x86_cc(c, 5)) { goto L_d40d7; }
L_d40ce:
    X86_TICK(c, 9);
    // 0d40ce  push edi
    X86_AT(c, 0xd40ceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d40cf  call 0xd3c44
    X86_AT(c, 0xd40cfu);
    push32(c, 0xd40d4u); x86_call_known(c, 0xd3c44u, f_000d3c44); X86_RET(c, 0xd40d4u);
    X86_TICK(c, 2);
    // 0d40d4  add esp, 4
    X86_AT(c, 0xd40d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d40d7:
    X86_TICK(c, 9);
    // 0d40d7  inc edi
    X86_AT(c, 0xd40d7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d40d8  jmp 0xd3eeb
    X86_AT(c, 0xd40d8u);
    X86_POLL(c, 0xd3eebu); goto L_d3eeb;
L_d40dd:
    X86_TICK(c, 28);
    // 0d40dd  pop edi
    X86_AT(c, 0xd40ddu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d40de  pop esi
    X86_AT(c, 0xd40deu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d40df  pop ebx
    X86_AT(c, 0xd40dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d40e0  leave 
    X86_AT(c, 0xd40e0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d40e1  ret 
    X86_AT(c, 0xd40e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3ee0u, "ran off the end of a function");
}
void f_000d40e4(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d40e4  push ebp
    X86_AT(c, 0xd40e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d40e5  mov ebp, esp
    X86_AT(c, 0xd40e5u);
    c.r[5] = c.r[4];
    // 0d40e7  sub esp, 0xc
    X86_AT(c, 0xd40e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0d40ea  push ebx
    X86_AT(c, 0xd40eau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d40eb  push esi
    X86_AT(c, 0xd40ebu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d40ec  push edi
    X86_AT(c, 0xd40ecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d40ed  push 0xd600
    X86_AT(c, 0xd40edu);
    { uint32_t v = 0xD600u; push32(c, v); }
    // 0d40f2  call 0xbc50c
    X86_AT(c, 0xd40f2u);
    push32(c, 0xd40f7u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xd40f7u);
    X86_TICK(c, 4);
    // 0d40f7  sub edi, edi
    X86_AT(c, 0xd40f7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d40f9  add esp, 4
    X86_AT(c, 0xd40f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d40fc:
    X86_TICK(c, 7);
    // 0d40fc  cmp edi, 0x30
    X86_AT(c, 0xd40fcu);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0d40ff  jge 0xd4139
    X86_AT(c, 0xd40ffu);
    if (x86_cc(c, 13)) { goto L_d4139; }
    X86_TICK(c, 25);
    // 0d4101  sub eax, eax
    X86_AT(c, 0xd4101u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d4103  mov byte ptr [edi + 0xa5ce8], al
    X86_AT(c, 0xd4103u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), g8(c, 0));
    // 0d4109  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd4109u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d4110  mov dword ptr [edi*4 + 0xa5e08], eax
    X86_AT(c, 0xd4110u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[0]);
    // 0d4117  mov byte ptr [edi + 0xa5d18], al
    X86_AT(c, 0xd4117u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5D18u)), g8(c, 0));
    // 0d411d  mov dword ptr [edi*4 + 0xa5ec8], eax
    X86_AT(c, 0xd411du);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u)), c.r[0]);
    // 0d4124  mov dword ptr [edi*4 + 0xa5f88], eax
    X86_AT(c, 0xd4124u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5F88u)), c.r[0]);
    // 0d412b  mov dword ptr [edi*4 + 0xa6074], 0xffffffff
    X86_AT(c, 0xd412bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)), 0xFFFFFFFFu);
    // 0d4136  inc edi
    X86_AT(c, 0xd4136u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d4137  jmp 0xd40fc
    X86_AT(c, 0xd4137u);
    X86_POLL(c, 0xd40fcu); goto L_d40fc;
L_d4139:
    X86_TICK(c, 67);
    // 0d4139  mov eax, 0x2c
    X86_AT(c, 0xd4139u);
    c.r[0] = 0x2Cu;
    // 0d413e  mov dword ptr [0xa4a76], eax
    X86_AT(c, 0xd413eu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A76u)), c.r[0]);
    // 0d4143  mov dword ptr [0xa4a66], eax
    X86_AT(c, 0xd4143u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), c.r[0]);
    // 0d4148  mov eax, 0x14
    X86_AT(c, 0xd4148u);
    c.r[0] = 0x14u;
    // 0d414d  mov dword ptr [0xa4a7a], eax
    X86_AT(c, 0xd414du);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Au)), c.r[0]);
    // 0d4152  mov dword ptr [0xa4a6a], eax
    X86_AT(c, 0xd4152u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), c.r[0]);
    // 0d4157  mov dword ptr [0xa6048], 2
    X86_AT(c, 0xd4157u);
    wr32((c.sbase[3] + (uint32_t)(0xA6048u)), 0x2u);
    // 0d4161  mov dword ptr [0xa604c], 0x3e
    X86_AT(c, 0xd4161u);
    wr32((c.sbase[3] + (uint32_t)(0xA604Cu)), 0x3Eu);
    // 0d416b  mov eax, 8
    X86_AT(c, 0xd416bu);
    c.r[0] = 0x8u;
    // 0d4170  mov dword ptr [0xa6068], eax
    X86_AT(c, 0xd4170u);
    wr32((c.sbase[3] + (uint32_t)(0xA6068u)), c.r[0]);
    // 0d4175  mov dword ptr [0xa606c], eax
    X86_AT(c, 0xd4175u);
    wr32((c.sbase[3] + (uint32_t)(0xA606Cu)), c.r[0]);
    // 0d417a  mov byte ptr [0xa5ce8], 0x99
    X86_AT(c, 0xd417au);
    wr8((c.sbase[3] + (uint32_t)(0xA5CE8u)), 0x99u);
    // 0d4181  mov eax, 0xa
    X86_AT(c, 0xd4181u);
    c.r[0] = 0xAu;
    // 0d4186  mov dword ptr [0xa5d48], eax
    X86_AT(c, 0xd4186u);
    wr32((c.sbase[3] + (uint32_t)(0xA5D48u)), c.r[0]);
    // 0d418b  mov dword ptr [0xa5e08], 0x39
    X86_AT(c, 0xd418bu);
    wr32((c.sbase[3] + (uint32_t)(0xA5E08u)), 0x39u);
    // 0d4195  mov byte ptr [0xa5d18], 0x81
    X86_AT(c, 0xd4195u);
    wr8((c.sbase[3] + (uint32_t)(0xA5D18u)), 0x81u);
    // 0d419c  sub edx, edx
    X86_AT(c, 0xd419cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d419e  mov dword ptr [0xa5ec8], edx
    X86_AT(c, 0xd419eu);
    wr32((c.sbase[3] + (uint32_t)(0xA5EC8u)), c.r[2]);
    // 0d41a4  mov dword ptr [0xa5f88], edx
    X86_AT(c, 0xd41a4u);
    wr32((c.sbase[3] + (uint32_t)(0xA5F88u)), c.r[2]);
    // 0d41aa  mov byte ptr [0xa5ce9], 0x9a
    X86_AT(c, 0xd41aau);
    wr8((c.sbase[3] + (uint32_t)(0xA5CE9u)), 0x9Au);
    // 0d41b1  mov dword ptr [0xa5d4c], eax
    X86_AT(c, 0xd41b1u);
    wr32((c.sbase[3] + (uint32_t)(0xA5D4Cu)), c.r[0]);
    // 0d41b6  mov dword ptr [0xa5e0c], 0x3a
    X86_AT(c, 0xd41b6u);
    wr32((c.sbase[3] + (uint32_t)(0xA5E0Cu)), 0x3Au);
    // 0d41c0  mov byte ptr [0xa5d19], 0x83
    X86_AT(c, 0xd41c0u);
    wr8((c.sbase[3] + (uint32_t)(0xA5D19u)), 0x83u);
    // 0d41c7  mov dword ptr [0xa5ecc], edx
    X86_AT(c, 0xd41c7u);
    wr32((c.sbase[3] + (uint32_t)(0xA5ECCu)), c.r[2]);
    // 0d41cd  mov dword ptr [0xa5f8c], edx
    X86_AT(c, 0xd41cdu);
    wr32((c.sbase[3] + (uint32_t)(0xA5F8Cu)), c.r[2]);
    // 0d41d3  mov byte ptr [0xa5cea], 0x86
    X86_AT(c, 0xd41d3u);
    wr8((c.sbase[3] + (uint32_t)(0xA5CEAu)), 0x86u);
    // 0d41da  mov dword ptr [0xa5d50], 0x36
    X86_AT(c, 0xd41dau);
    wr32((c.sbase[3] + (uint32_t)(0xA5D50u)), 0x36u);
    // 0d41e4  mov dword ptr [0xa5e10], 0x1c
    X86_AT(c, 0xd41e4u);
    wr32((c.sbase[3] + (uint32_t)(0xA5E10u)), 0x1Cu);
    // 0d41ee  mov byte ptr [0xa5d1a], 0x7c
    X86_AT(c, 0xd41eeu);
    wr8((c.sbase[3] + (uint32_t)(0xA5D1Au)), 0x7Cu);
    // 0d41f5  mov eax, 3
    X86_AT(c, 0xd41f5u);
    c.r[0] = 0x3u;
    // 0d41fa  mov dword ptr [0xa5ed0], eax
    X86_AT(c, 0xd41fau);
    wr32((c.sbase[3] + (uint32_t)(0xA5ED0u)), c.r[0]);
    // 0d41ff  mov dword ptr [0xa5f90], edx
    X86_AT(c, 0xd41ffu);
    wr32((c.sbase[3] + (uint32_t)(0xA5F90u)), c.r[2]);
    // 0d4205  xchg edi, eax
    X86_AT(c, 0xd4205u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_d4206:
    X86_TICK(c, 7);
    // 0d4206  cmp edi, 0x1c
    X86_AT(c, 0xd4206u);
    (void)x86_sub(c, c.r[7], 0x1Cu, 0, 4);
    // 0d4209  jge 0xd42ce
    X86_AT(c, 0xd4209u);
    if (x86_cc(c, 13)) { goto L_d42ce; }
    X86_TICK(c, 12);
    // 0d420f  cmp byte ptr [edi + 0xa5ce8], 0
    X86_AT(c, 0xd420fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u))), 0x0u, 0, 1);
    // 0d4216  jne 0xd42c8
    X86_AT(c, 0xd4216u);
    if (x86_cc(c, 5)) { goto L_d42c8; }
    X86_TICK(c, 9);
    // 0d421c  push 0xc
    X86_AT(c, 0xd421cu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d421e  call 0xd4788
    X86_AT(c, 0xd421eu);
    push32(c, 0xd4223u); x86_call_known(c, 0xd4788u, f_000d4788); X86_RET(c, 0xd4223u);
    X86_TICK(c, 12);
    // 0d4223  xchg esi, eax
    X86_AT(c, 0xd4223u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d4224  add esp, 4
    X86_AT(c, 0xd4224u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d4227  and esi, esi
    X86_AT(c, 0xd4227u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d4229  jl 0xd42c8
    X86_AT(c, 0xd4229u);
    if (x86_cc(c, 12)) { goto L_d42c8; }
    X86_TICK(c, 7);
    // 0d422f  cmp esi, 0xc
    X86_AT(c, 0xd422fu);
    (void)x86_sub(c, c.r[6], 0xCu, 0, 4);
    // 0d4232  jg 0xd42c8
    X86_AT(c, 0xd4232u);
    if (x86_cc(c, 15)) { goto L_d42c8; }
    X86_TICK(c, 14);
    // 0d4238  mov al, byte ptr [esi + 0xb0a9c]
    X86_AT(c, 0xd4238u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xB0A9Cu))));
    // 0d423e  mov byte ptr [edi + 0xa5ce8], al
    X86_AT(c, 0xd423eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), g8(c, 0));
    // 0d4244  mov al, byte ptr [esi + 0xb0aac]
    X86_AT(c, 0xd4244u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xB0AACu))));
    // 0d424a  mov byte ptr [ebp - 9], al
    X86_AT(c, 0xd424au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 0d424d  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xd424du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_d4254:
    X86_TICK(c, 9);
    // 0d4254  push 0x3f
    X86_AT(c, 0xd4254u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0d4256  call 0xb61b4
    X86_AT(c, 0xd4256u);
    push32(c, 0xd425bu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd425bu);
    X86_TICK(c, 12);
    // 0d425b  xchg ebx, eax
    X86_AT(c, 0xd425bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d425c  push 0x3f
    X86_AT(c, 0xd425cu);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0d425e  call 0xb61b4
    X86_AT(c, 0xd425eu);
    push32(c, 0xd4263u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd4263u);
    X86_TICK(c, 13);
    // 0d4263  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd4263u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d4266  push eax
    X86_AT(c, 0xd4266u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4267  push ebx
    X86_AT(c, 0xd4267u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4268  call 0xc8474
    X86_AT(c, 0xd4268u);
    push32(c, 0xd426du); x86_call_known(c, 0xc8474u, f_000c8474); X86_RET(c, 0xd426du);
    X86_TICK(c, 13);
    // 0d426d  add esp, 0x10
    X86_AT(c, 0xd426du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d4270  cmp al, byte ptr [ebp - 9]
    X86_AT(c, 0xd4270u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0, 1);
    // 0d4273  je 0xd427e
    X86_AT(c, 0xd4273u);
    if (x86_cc(c, 4)) { goto L_d427e; }
    X86_TICK(c, 18);
    // 0d4275  inc dword ptr [ebp - 8]
    X86_AT(c, 0xd4275u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d4278  cmp dword ptr [ebp - 8], 0x40
    X86_AT(c, 0xd4278u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x40u, 0, 4);
    // 0d427c  jle 0xd4254
    X86_AT(c, 0xd427cu);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd4254u); goto L_d4254; }
L_d427e:
    X86_TICK(c, 11);
    // 0d427e  cmp ebx, dword ptr [0xa4a76]
    X86_AT(c, 0xd427eu);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0, 4);
    // 0d4284  je 0xd4296
    X86_AT(c, 0xd4284u);
    if (x86_cc(c, 4)) { goto L_d4296; }
    X86_TICK(c, 15);
    // 0d4286  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xd4286u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d428b  cmp eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd428bu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0d428e  je 0xd4296
    X86_AT(c, 0xd428eu);
    if (x86_cc(c, 4)) { goto L_d4296; }
    X86_TICK(c, 12);
    // 0d4290  cmp dword ptr [ebp - 8], 0x40
    X86_AT(c, 0xd4290u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x40u, 0, 4);
    // 0d4294  jle 0xd429f
    X86_AT(c, 0xd4294u);
    if (x86_cc(c, 14)) { goto L_d429f; }
L_d4296:
    X86_TICK(c, 9);
    // 0d4296  mov byte ptr [edi + 0xa5ce8], 0
    X86_AT(c, 0xd4296u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), 0x0u);
    // 0d429d  jmp 0xd42c8
    X86_AT(c, 0xd429du);
    goto L_d42c8;
L_d429f:
    X86_TICK(c, 16);
    // 0d429f  mov dword ptr [edi*4 + 0xa5d48], ebx
    X86_AT(c, 0xd429fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[3]);
    // 0d42a6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd42a6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d42a9  mov dword ptr [edi*4 + 0xa5e08], eax
    X86_AT(c, 0xd42a9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[0]);
    // 0d42b0  mov al, byte ptr [esi*4 + 0xb0abc]
    X86_AT(c, 0xd42b0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB0ABCu))));
    // 0d42b7  mov byte ptr [edi + 0xa5d18], al
    X86_AT(c, 0xd42b7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5D18u)), g8(c, 0));
    // 0d42bd  mov dword ptr [edi*4 + 0xa5ec8], 3
    X86_AT(c, 0xd42bdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u)), 0x3u);
L_d42c8:
    X86_TICK(c, 9);
    // 0d42c8  inc edi
    X86_AT(c, 0xd42c8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d42c9  jmp 0xd4206
    X86_AT(c, 0xd42c9u);
    X86_POLL(c, 0xd4206u); goto L_d4206;
L_d42ce:
    X86_TICK(c, 9);
    // 0d42ce  push 2
    X86_AT(c, 0xd42ceu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d42d0  call 0xbbb5c
    X86_AT(c, 0xd42d0u);
    push32(c, 0xd42d5u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd42d5u);
    X86_TICK(c, 30);
    // 0d42d5  add esp, 4
    X86_AT(c, 0xd42d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d42d8  pop edi
    X86_AT(c, 0xd42d8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d42d9  pop esi
    X86_AT(c, 0xd42d9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d42da  pop ebx
    X86_AT(c, 0xd42dau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d42db  leave 
    X86_AT(c, 0xd42dbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d42dc  ret 
    X86_AT(c, 0xd42dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd40e4u, "ran off the end of a function");
}
void f_000d42e0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d42e0  push 0
    X86_AT(c, 0xd42e0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d42e2  push 1
    X86_AT(c, 0xd42e2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d42e4  push 8
    X86_AT(c, 0xd42e4u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d42e6  call 0xbc174
    X86_AT(c, 0xd42e6u);
    push32(c, 0xd42ebu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd42ebu);
    X86_TICK(c, 20);
    // 0d42eb  mov eax, dword ptr [0xa6058]
    X86_AT(c, 0xd42ebu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6058u)));
    // 0d42f0  shl eax, 5
    X86_AT(c, 0xd42f0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0d42f3  add eax, 0xb099c
    X86_AT(c, 0xd42f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB099Cu, 0, 4); }
    // 0d42f8  push eax
    X86_AT(c, 0xd42f8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d42f9  push 8
    X86_AT(c, 0xd42f9u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d42fb  call 0xbc040
    X86_AT(c, 0xd42fbu);
    push32(c, 0xd4300u); x86_call_known(c, 0xbc040u, f_000bc040); X86_RET(c, 0xd4300u);
    X86_TICK(c, 13);
    // 0d4300  push 0
    X86_AT(c, 0xd4300u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4302  push 4
    X86_AT(c, 0xd4302u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d4304  push 8
    X86_AT(c, 0xd4304u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d4306  call 0xbc174
    X86_AT(c, 0xd4306u);
    push32(c, 0xd430bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd430bu);
    X86_TICK(c, 20);
    // 0d430b  mov eax, dword ptr [0xa605c]
    X86_AT(c, 0xd430bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA605Cu)));
    // 0d4310  shl eax, 5
    X86_AT(c, 0xd4310u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0d4313  add eax, 0xb099c
    X86_AT(c, 0xd4313u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB099Cu, 0, 4); }
    // 0d4318  push eax
    X86_AT(c, 0xd4318u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4319  push 8
    X86_AT(c, 0xd4319u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d431b  call 0xbc040
    X86_AT(c, 0xd431bu);
    push32(c, 0xd4320u); x86_call_known(c, 0xbc040u, f_000bc040); X86_RET(c, 0xd4320u);
    X86_TICK(c, 12);
    // 0d4320  add esp, 0x28
    X86_AT(c, 0xd4320u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d4323  ret 
    X86_AT(c, 0xd4323u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd42e0u, "ran off the end of a function");
}
void f_000d4324(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d4324  push ebp
    X86_AT(c, 0xd4324u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d4325  mov ebp, esp
    X86_AT(c, 0xd4325u);
    c.r[5] = c.r[4];
    // 0d4327  push edi
    X86_AT(c, 0xd4327u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4328  push 2
    X86_AT(c, 0xd4328u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d432a  call 0xb607c
    X86_AT(c, 0xd432au);
    push32(c, 0xd432fu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd432fu);
    X86_TICK(c, 9);
    // 0d432f  push 3
    X86_AT(c, 0xd432fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4331  call 0xbebbc
    X86_AT(c, 0xd4331u);
    push32(c, 0xd4336u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd4336u);
    X86_TICK(c, 9);
    // 0d4336  push 2
    X86_AT(c, 0xd4336u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d4338  call 0xb607c
    X86_AT(c, 0xd4338u);
    push32(c, 0xd433du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd433du);
    X86_TICK(c, 9);
    // 0d433d  push 8
    X86_AT(c, 0xd433du);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d433f  call 0xbebbc
    X86_AT(c, 0xd433fu);
    push32(c, 0xd4344u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd4344u);
    X86_TICK(c, 9);
    // 0d4344  push 8
    X86_AT(c, 0xd4344u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d4346  call 0xb607c
    X86_AT(c, 0xd4346u);
    push32(c, 0xd434bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd434bu);
    X86_TICK(c, 9);
    // 0d434b  push 3
    X86_AT(c, 0xd434bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d434d  call 0xbebbc
    X86_AT(c, 0xd434du);
    push32(c, 0xd4352u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd4352u);
    X86_TICK(c, 23);
    // 0d4352  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd4352u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d4355  mov edi, dword ptr [eax*4 + 0x45ea8]
    X86_AT(c, 0xd4355u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x45EA8u)));
    // 0d435c  lea eax, [edi*8]
    X86_AT(c, 0xd435cu);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0d4363  lea eax, [eax + eax*2]
    X86_AT(c, 0xd4363u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d4366  mov dword ptr [eax + 0x4599c], 0x98
    X86_AT(c, 0xd4366u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4599Cu)), 0x98u);
    // 0d4370  mov dword ptr [eax + 0x459a0], 0xffffffff
    X86_AT(c, 0xd4370u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x459A0u)), 0xFFFFFFFFu);
    // 0d437a  call 0xb7818
    X86_AT(c, 0xd437au);
    push32(c, 0xd437fu); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xd437fu);
    X86_TICK(c, 9);
    // 0d437f  push 0
    X86_AT(c, 0xd437fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4381  call 0xb61d4
    X86_AT(c, 0xd4381u);
    push32(c, 0xd4386u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd4386u);
    X86_TICK(c, 22);
    // 0d4386  add esp, 0x1c
    X86_AT(c, 0xd4386u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d4389  pop edi
    X86_AT(c, 0xd4389u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d438a  leave 
    X86_AT(c, 0xd438au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d438b  ret 
    X86_AT(c, 0xd438bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4324u, "ran off the end of a function");
}
void f_000d438c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0d438c  push ebp
    X86_AT(c, 0xd438cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d438d  mov ebp, esp
    X86_AT(c, 0xd438du);
    c.r[5] = c.r[4];
    // 0d438f  sub esp, 0x18
    X86_AT(c, 0xd438fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x18u, 0, 4); }
    // 0d4392  push ebx
    X86_AT(c, 0xd4392u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4393  push esi
    X86_AT(c, 0xd4393u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d4394  push edi
    X86_AT(c, 0xd4394u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4395  call 0xb5aac
    X86_AT(c, 0xd4395u);
    push32(c, 0xd439au); x86_call_known(c, 0xb5aacu, f_000b5aac); X86_RET(c, 0xd439au);
    X86_TICK(c, 14);
    // 0d439a  mov byte ptr [0x8b288], 9
    X86_AT(c, 0xd439au);
    wr8((c.sbase[3] + (uint32_t)(0x8B288u)), 0x9u);
    // 0d43a1  cmp dword ptr [0xa4a76], 0x20
    X86_AT(c, 0xd43a1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0x20u, 0, 4);
    // 0d43a8  jl 0xd43b0
    X86_AT(c, 0xd43a8u);
    if (x86_cc(c, 12)) { goto L_d43b0; }
    X86_TICK(c, 9);
    // 0d43aa  mov byte ptr [ebp - 0xd], 3
    X86_AT(c, 0xd43aau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x3u);
    // 0d43ae  jmp 0xd43b4
    X86_AT(c, 0xd43aeu);
    goto L_d43b4;
L_d43b0:
    X86_TICK(c, 2);
    // 0d43b0  mov byte ptr [ebp - 0xd], 7
    X86_AT(c, 0xd43b0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x7u);
L_d43b4:
    X86_TICK(c, 2);
    // 0d43b4  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xd43b4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_d43bb:
    X86_TICK(c, 12);
    // 0d43bb  cmp dword ptr [ebp - 0xc], 3
    X86_AT(c, 0xd43bbu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x3u, 0, 4);
    // 0d43bf  jge 0xd43d7
    X86_AT(c, 0xd43bfu);
    if (x86_cc(c, 13)) { goto L_d43d7; }
    X86_TICK(c, 9);
    // 0d43c1  push 8
    X86_AT(c, 0xd43c1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d43c3  call 0xb607c
    X86_AT(c, 0xd43c3u);
    push32(c, 0xd43c8u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd43c8u);
    X86_TICK(c, 9);
    // 0d43c8  push 3
    X86_AT(c, 0xd43c8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d43ca  call 0xbebbc
    X86_AT(c, 0xd43cau);
    push32(c, 0xd43cfu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd43cfu);
    X86_TICK(c, 15);
    // 0d43cf  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xd43cfu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d43d2  add esp, 8
    X86_AT(c, 0xd43d2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d43d5  jmp 0xd43bb
    X86_AT(c, 0xd43d5u);
    X86_POLL(c, 0xd43bbu); goto L_d43bb;
L_d43d7:
    X86_TICK(c, 9);
    // 0d43d7  push 4
    X86_AT(c, 0xd43d7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d43d9  call 0xb61d4
    X86_AT(c, 0xd43d9u);
    push32(c, 0xd43deu); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd43deu);
    X86_TICK(c, 9);
    // 0d43de  push 7
    X86_AT(c, 0xd43deu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d43e0  call 0xbb6b0
    X86_AT(c, 0xd43e0u);
    push32(c, 0xd43e5u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd43e5u);
    X86_TICK(c, 11);
    // 0d43e5  push 0xd648
    X86_AT(c, 0xd43e5u);
    { uint32_t v = 0xD648u; push32(c, v); }
    // 0d43ea  push 7
    X86_AT(c, 0xd43eau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d43ec  call 0xba428
    X86_AT(c, 0xd43ecu);
    push32(c, 0xd43f1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd43f1u);
    X86_TICK(c, 9);
    // 0d43f1  push 7
    X86_AT(c, 0xd43f1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d43f3  call 0xbbb5c
    X86_AT(c, 0xd43f3u);
    push32(c, 0xd43f8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd43f8u);
    X86_TICK(c, 9);
    // 0d43f8  push 7
    X86_AT(c, 0xd43f8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d43fa  call 0xc9890
    X86_AT(c, 0xd43fau);
    push32(c, 0xd43ffu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd43ffu);
    X86_TICK(c, 2);
    // 0d43ff  add esp, 0x18
    X86_AT(c, 0xd43ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_d4402:
    X86_TICK(c, 12);
    // 0d4402  cmp dword ptr [0xa4a76], 0x20
    X86_AT(c, 0xd4402u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0x20u, 0, 4);
    // 0d4409  je 0xd4429
    X86_AT(c, 0xd4409u);
    if (x86_cc(c, 4)) { goto L_d4429; }
    X86_TICK(c, 16);
    // 0d440b  push dword ptr [ebp - 0xd]
    X86_AT(c, 0xd440bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))); push32(c, v); }
    // 0d440e  push 0xa4a7a
    X86_AT(c, 0xd440eu);
    { uint32_t v = 0xA4A7Au; push32(c, v); }
    // 0d4413  push 0xa4a76
    X86_AT(c, 0xd4413u);
    { uint32_t v = 0xA4A76u; push32(c, v); }
    // 0d4418  call 0xbd628
    X86_AT(c, 0xd4418u);
    push32(c, 0xd441du); x86_call_known(c, 0xbd628u, f_000bd628); X86_RET(c, 0xd441du);
    X86_TICK(c, 9);
    // 0d441d  push 0x14
    X86_AT(c, 0xd441du);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0d441f  call 0xbebbc
    X86_AT(c, 0xd441fu);
    push32(c, 0xd4424u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd4424u);
    X86_TICK(c, 9);
    // 0d4424  add esp, 0x10
    X86_AT(c, 0xd4424u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d4427  jmp 0xd4402
    X86_AT(c, 0xd4427u);
    X86_POLL(c, 0xd4402u); goto L_d4402;
L_d4429:
    X86_TICK(c, 12);
    // 0d4429  cmp dword ptr [0xa4a7a], 0xb
    X86_AT(c, 0xd4429u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0xBu, 0, 4);
    // 0d4430  je 0xd444f
    X86_AT(c, 0xd4430u);
    if (x86_cc(c, 4)) { goto L_d444f; }
    X86_TICK(c, 13);
    // 0d4432  push 5
    X86_AT(c, 0xd4432u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d4434  push 0xa4a7a
    X86_AT(c, 0xd4434u);
    { uint32_t v = 0xA4A7Au; push32(c, v); }
    // 0d4439  push 0xa4a76
    X86_AT(c, 0xd4439u);
    { uint32_t v = 0xA4A76u; push32(c, v); }
    // 0d443e  call 0xbd628
    X86_AT(c, 0xd443eu);
    push32(c, 0xd4443u); x86_call_known(c, 0xbd628u, f_000bd628); X86_RET(c, 0xd4443u);
    X86_TICK(c, 9);
    // 0d4443  push 0x14
    X86_AT(c, 0xd4443u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0d4445  call 0xbebbc
    X86_AT(c, 0xd4445u);
    push32(c, 0xd444au); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd444au);
    X86_TICK(c, 9);
    // 0d444a  add esp, 0x10
    X86_AT(c, 0xd444au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d444d  jmp 0xd4429
    X86_AT(c, 0xd444du);
    X86_POLL(c, 0xd4429u); goto L_d4429;
L_d444f:
    X86_TICK(c, 9);
    // 0d444f  push 0xa
    X86_AT(c, 0xd444fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d4451  call 0xbebbc
    X86_AT(c, 0xd4451u);
    push32(c, 0xd4456u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd4456u);
    X86_TICK(c, 2);
    // 0d4456  add esp, 4
    X86_AT(c, 0xd4456u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d4459:
    X86_TICK(c, 12);
    // 0d4459  cmp dword ptr [0xa4a7a], 8
    X86_AT(c, 0xd4459u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0x8u, 0, 4);
    // 0d4460  je 0xd447f
    X86_AT(c, 0xd4460u);
    if (x86_cc(c, 4)) { goto L_d447f; }
    X86_TICK(c, 13);
    // 0d4462  push 5
    X86_AT(c, 0xd4462u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d4464  push 0xa4a7a
    X86_AT(c, 0xd4464u);
    { uint32_t v = 0xA4A7Au; push32(c, v); }
    // 0d4469  push 0xa4a76
    X86_AT(c, 0xd4469u);
    { uint32_t v = 0xA4A76u; push32(c, v); }
    // 0d446e  call 0xbd628
    X86_AT(c, 0xd446eu);
    push32(c, 0xd4473u); x86_call_known(c, 0xbd628u, f_000bd628); X86_RET(c, 0xd4473u);
    X86_TICK(c, 9);
    // 0d4473  push 0x14
    X86_AT(c, 0xd4473u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0d4475  call 0xbebbc
    X86_AT(c, 0xd4475u);
    push32(c, 0xd447au); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd447au);
    X86_TICK(c, 9);
    // 0d447a  add esp, 0x10
    X86_AT(c, 0xd447au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d447d  jmp 0xd4459
    X86_AT(c, 0xd447du);
    X86_POLL(c, 0xd4459u); goto L_d4459;
L_d447f:
    X86_TICK(c, 9);
    // 0d447f  push 7
    X86_AT(c, 0xd447fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4481  call 0xbb6b0
    X86_AT(c, 0xd4481u);
    push32(c, 0xd4486u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd4486u);
    X86_TICK(c, 14);
    // 0d4486  push dword ptr [0xb3004]
    X86_AT(c, 0xd4486u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB3004u))); push32(c, v); }
    // 0d448c  push 7
    X86_AT(c, 0xd448cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d448e  call 0xba428
    X86_AT(c, 0xd448eu);
    push32(c, 0xd4493u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd4493u);
    X86_TICK(c, 9);
    // 0d4493  push 7
    X86_AT(c, 0xd4493u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4495  call 0xbbb5c
    X86_AT(c, 0xd4495u);
    push32(c, 0xd449au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd449au);
    X86_TICK(c, 9);
    // 0d449a  push 7
    X86_AT(c, 0xd449au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d449c  call 0xc9890
    X86_AT(c, 0xd449cu);
    push32(c, 0xd44a1u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd44a1u);
    X86_TICK(c, 14);
    // 0d44a1  push dword ptr [0xb3008]
    X86_AT(c, 0xd44a1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB3008u))); push32(c, v); }
    // 0d44a7  push 7
    X86_AT(c, 0xd44a7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d44a9  call 0xba428
    X86_AT(c, 0xd44a9u);
    push32(c, 0xd44aeu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd44aeu);
    X86_TICK(c, 9);
    // 0d44ae  push 7
    X86_AT(c, 0xd44aeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d44b0  call 0xbbb5c
    X86_AT(c, 0xd44b0u);
    push32(c, 0xd44b5u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd44b5u);
    X86_TICK(c, 9);
    // 0d44b5  push 7
    X86_AT(c, 0xd44b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d44b7  call 0xc9890
    X86_AT(c, 0xd44b7u);
    push32(c, 0xd44bcu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd44bcu);
    X86_TICK(c, 21);
    // 0d44bc  mov eax, dword ptr [0x45eb8]
    X86_AT(c, 0xd44bcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x45EB8u)));
    // 0d44c1  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd44c1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d44c4  lea eax, [eax*8]
    X86_AT(c, 0xd44c4u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0d44cb  lea eax, [eax + eax*2]
    X86_AT(c, 0xd44cbu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d44ce  mov dword ptr [eax + 0x4599c], 0x94
    X86_AT(c, 0xd44ceu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4599Cu)), 0x94u);
    // 0d44d8  mov dword ptr [eax + 0x459a0], 0xffffffff
    X86_AT(c, 0xd44d8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x459A0u)), 0xFFFFFFFFu);
    // 0d44e2  call 0xb7818
    X86_AT(c, 0xd44e2u);
    push32(c, 0xd44e7u); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xd44e7u);
    X86_TICK(c, 9);
    // 0d44e7  push 0
    X86_AT(c, 0xd44e7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d44e9  call 0xb61d4
    X86_AT(c, 0xd44e9u);
    push32(c, 0xd44eeu); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd44eeu);
    X86_TICK(c, 14);
    // 0d44ee  push dword ptr [0xb300c]
    X86_AT(c, 0xd44eeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB300Cu))); push32(c, v); }
    // 0d44f4  push 7
    X86_AT(c, 0xd44f4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d44f6  call 0xba428
    X86_AT(c, 0xd44f6u);
    push32(c, 0xd44fbu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd44fbu);
    X86_TICK(c, 9);
    // 0d44fb  push 7
    X86_AT(c, 0xd44fbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d44fd  call 0xbbb5c
    X86_AT(c, 0xd44fdu);
    push32(c, 0xd4502u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd4502u);
    X86_TICK(c, 9);
    // 0d4502  push 7
    X86_AT(c, 0xd4502u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4504  call 0xc9890
    X86_AT(c, 0xd4504u);
    push32(c, 0xd4509u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd4509u);
    X86_TICK(c, 14);
    // 0d4509  push dword ptr [0xb3010]
    X86_AT(c, 0xd4509u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB3010u))); push32(c, v); }
    // 0d450f  push 7
    X86_AT(c, 0xd450fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4511  call 0xba428
    X86_AT(c, 0xd4511u);
    push32(c, 0xd4516u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd4516u);
    X86_TICK(c, 11);
    // 0d4516  add esp, 0x40
    X86_AT(c, 0xd4516u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d4519  push 7
    X86_AT(c, 0xd4519u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d451b  call 0xbbb5c
    X86_AT(c, 0xd451bu);
    push32(c, 0xd4520u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd4520u);
    X86_TICK(c, 9);
    // 0d4520  push 7
    X86_AT(c, 0xd4520u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4522  call 0xc9890
    X86_AT(c, 0xd4522u);
    push32(c, 0xd4527u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd4527u);
    X86_TICK(c, 14);
    // 0d4527  push dword ptr [0xb3014]
    X86_AT(c, 0xd4527u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB3014u))); push32(c, v); }
    // 0d452d  push 7
    X86_AT(c, 0xd452du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d452f  call 0xba428
    X86_AT(c, 0xd452fu);
    push32(c, 0xd4534u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd4534u);
    X86_TICK(c, 9);
    // 0d4534  push 7
    X86_AT(c, 0xd4534u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4536  call 0xbbb5c
    X86_AT(c, 0xd4536u);
    push32(c, 0xd453bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd453bu);
    X86_TICK(c, 11);
    // 0d453b  add esp, 0x14
    X86_AT(c, 0xd453bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d453e  push 7
    X86_AT(c, 0xd453eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4540  call 0xc9890
    X86_AT(c, 0xd4540u);
    push32(c, 0xd4545u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd4545u);
    X86_TICK(c, 23);
    // 0d4545  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xd4545u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0d454a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd454au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d454d  mov edx, dword ptr [0xa4a7a]
    X86_AT(c, 0xd454du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0d4553  dec edx
    X86_AT(c, 0xd4553u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d4554  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xd4554u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0d4557  push 4
    X86_AT(c, 0xd4557u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d4559  call 0xb61d4
    X86_AT(c, 0xd4559u);
    push32(c, 0xd455eu); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd455eu);
    X86_TICK(c, 24);
    // 0d455e  push 4
    X86_AT(c, 0xd455eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d4560  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd4560u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d4563  inc eax
    X86_AT(c, 0xd4563u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d4564  push eax
    X86_AT(c, 0xd4564u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4565  push dword ptr [ebp - 4]
    X86_AT(c, 0xd4565u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d4568  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd4568u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d456b  call 0xbd068
    X86_AT(c, 0xd456bu);
    push32(c, 0xd4570u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd4570u);
    X86_TICK(c, 9);
    // 0d4570  push 7
    X86_AT(c, 0xd4570u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4572  call 0xc9890
    X86_AT(c, 0xd4572u);
    push32(c, 0xd4577u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd4577u);
    X86_TICK(c, 9);
    // 0d4577  push 0xa
    X86_AT(c, 0xd4577u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d4579  call 0xb607c
    X86_AT(c, 0xd4579u);
    push32(c, 0xd457eu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd457eu);
    X86_TICK(c, 9);
    // 0d457e  push 3
    X86_AT(c, 0xd457eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4580  call 0xbebbc
    X86_AT(c, 0xd4580u);
    push32(c, 0xd4585u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd4585u);
    X86_TICK(c, 34);
    // 0d4585  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd4585u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d4588  shl eax, 6
    X86_AT(c, 0xd4588u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0d458b  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd458bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d458e  mov byte ptr [eax + 0x8afa8], 0x22
    X86_AT(c, 0xd458eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AFA8u)), 0x22u);
    // 0d4595  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4595u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4598  push dword ptr [ebp - 4]
    X86_AT(c, 0xd4598u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d459b  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xd459bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0d459e  call 0xb7aa0
    X86_AT(c, 0xd459eu);
    push32(c, 0xd45a3u); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xd45a3u);
    X86_TICK(c, 19);
    // 0d45a3  push 4
    X86_AT(c, 0xd45a3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d45a5  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd45a5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d45a8  push dword ptr [ebp - 4]
    X86_AT(c, 0xd45a8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d45ab  call 0xbd068
    X86_AT(c, 0xd45abu);
    push32(c, 0xd45b0u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd45b0u);
    X86_TICK(c, 9);
    // 0d45b0  push 0xa
    X86_AT(c, 0xd45b0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d45b2  call 0xb607c
    X86_AT(c, 0xd45b2u);
    push32(c, 0xd45b7u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd45b7u);
    X86_TICK(c, 9);
    // 0d45b7  push 3
    X86_AT(c, 0xd45b7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d45b9  call 0xbebbc
    X86_AT(c, 0xd45b9u);
    push32(c, 0xd45beu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd45beu);
    X86_TICK(c, 11);
    // 0d45be  add esp, 0x3c
    X86_AT(c, 0xd45beu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d45c1  push 8
    X86_AT(c, 0xd45c1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d45c3  call 0xb607c
    X86_AT(c, 0xd45c3u);
    push32(c, 0xd45c8u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd45c8u);
    X86_TICK(c, 9);
    // 0d45c8  push 3
    X86_AT(c, 0xd45c8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d45ca  call 0xbebbc
    X86_AT(c, 0xd45cau);
    push32(c, 0xd45cfu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd45cfu);
    X86_TICK(c, 29);
    // 0d45cf  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xd45cfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0d45d2  mov byte ptr [eax + 0x8af28], 0x22
    X86_AT(c, 0xd45d2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AF28u)), 0x22u);
    // 0d45d9  mov byte ptr [eax + 0x8af67], 0x22
    X86_AT(c, 0xd45d9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AF67u)), 0x22u);
    // 0d45e0  mov byte ptr [eax + 0x8af69], 0x22
    X86_AT(c, 0xd45e0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AF69u)), 0x22u);
    // 0d45e7  mov byte ptr [eax + 0x8afa8], 0x22
    X86_AT(c, 0xd45e7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AFA8u)), 0x22u);
    // 0d45ee  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd45eeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d45f1  push dword ptr [ebp - 4]
    X86_AT(c, 0xd45f1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d45f4  call 0xb7aa0
    X86_AT(c, 0xd45f4u);
    push32(c, 0xd45f9u); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xd45f9u);
    X86_TICK(c, 19);
    // 0d45f9  push 4
    X86_AT(c, 0xd45f9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d45fb  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd45fbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d45fe  push dword ptr [ebp - 4]
    X86_AT(c, 0xd45feu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d4601  call 0xbd068
    X86_AT(c, 0xd4601u);
    push32(c, 0xd4606u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd4606u);
    X86_TICK(c, 11);
    // 0d4606  add esp, 0x1c
    X86_AT(c, 0xd4606u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d4609  push 0xa
    X86_AT(c, 0xd4609u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d460b  call 0xb607c
    X86_AT(c, 0xd460bu);
    push32(c, 0xd4610u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd4610u);
    X86_TICK(c, 9);
    // 0d4610  push 3
    X86_AT(c, 0xd4610u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4612  call 0xbebbc
    X86_AT(c, 0xd4612u);
    push32(c, 0xd4617u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd4617u);
    X86_TICK(c, 9);
    // 0d4617  push 8
    X86_AT(c, 0xd4617u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d4619  call 0xb607c
    X86_AT(c, 0xd4619u);
    push32(c, 0xd461eu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd461eu);
    X86_TICK(c, 9);
    // 0d461e  push 3
    X86_AT(c, 0xd461eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4620  call 0xbebbc
    X86_AT(c, 0xd4620u);
    push32(c, 0xd4625u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd4625u);
    X86_TICK(c, 45);
    // 0d4625  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd4625u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d4628  shl eax, 6
    X86_AT(c, 0xd4628u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0d462b  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd462bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d462e  mov dl, 0x22
    X86_AT(c, 0xd462eu);
    s8(c, 2, 0x22u);
    // 0d4630  mov byte ptr [eax + 0x8aee8], dl
    X86_AT(c, 0xd4630u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AEE8u)), g8(c, 2));
    // 0d4636  mov byte ptr [eax + 0x8af66], dl
    X86_AT(c, 0xd4636u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AF66u)), g8(c, 2));
    // 0d463c  mov byte ptr [eax + 0x8af6a], dl
    X86_AT(c, 0xd463cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AF6Au)), g8(c, 2));
    // 0d4642  mov byte ptr [eax + 0x8afe8], dl
    X86_AT(c, 0xd4642u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AFE8u)), g8(c, 2));
    // 0d4648  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd4648u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d464b  inc eax
    X86_AT(c, 0xd464bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d464c  push eax
    X86_AT(c, 0xd464cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d464d  push dword ptr [ebp - 4]
    X86_AT(c, 0xd464du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d4650  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd4650u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d4653  call 0xb7aa0
    X86_AT(c, 0xd4653u);
    push32(c, 0xd4658u); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xd4658u);
    X86_TICK(c, 19);
    // 0d4658  push 4
    X86_AT(c, 0xd4658u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d465a  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd465au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d465d  push dword ptr [ebp - 4]
    X86_AT(c, 0xd465du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d4660  call 0xbd068
    X86_AT(c, 0xd4660u);
    push32(c, 0xd4665u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd4665u);
    X86_TICK(c, 9);
    // 0d4665  push 0xa
    X86_AT(c, 0xd4665u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d4667  call 0xb607c
    X86_AT(c, 0xd4667u);
    push32(c, 0xd466cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd466cu);
    X86_TICK(c, 9);
    // 0d466c  push 3
    X86_AT(c, 0xd466cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d466e  call 0xbebbc
    X86_AT(c, 0xd466eu);
    push32(c, 0xd4673u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd4673u);
    X86_TICK(c, 4);
    // 0d4673  mov edi, 1
    X86_AT(c, 0xd4673u);
    c.r[7] = 0x1u;
    // 0d4678  add esp, 0x2c
    X86_AT(c, 0xd4678u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_d467b:
    X86_TICK(c, 7);
    // 0d467b  cmp edi, 5
    X86_AT(c, 0xd467bu);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0d467e  jge 0xd46e1
    X86_AT(c, 0xd467eu);
    if (x86_cc(c, 13)) { goto L_d46e1; }
    X86_TICK(c, 6);
    // 0d4680  mov esi, dword ptr [ebp - 8]
    X86_AT(c, 0xd4680u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d4683  sub esi, edi
    X86_AT(c, 0xd4683u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
L_d4685:
    X86_TICK(c, 13);
    // 0d4685  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd4685u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d4688  add eax, edi
    X86_AT(c, 0xd4688u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0d468a  cmp eax, esi
    X86_AT(c, 0xd468au);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0d468c  jl 0xd46b0
    X86_AT(c, 0xd468cu);
    if (x86_cc(c, 12)) { goto L_d46b0; }
    X86_TICK(c, 6);
    // 0d468e  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0xd468eu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d4691  sub ebx, edi
    X86_AT(c, 0xd4691u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[7], 0, 4); }
L_d4693:
    X86_TICK(c, 15);
    // 0d4693  mov eax, edi
    X86_AT(c, 0xd4693u);
    c.r[0] = c.r[7];
    // 0d4695  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd4695u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d4698  cmp eax, ebx
    X86_AT(c, 0xd4698u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0d469a  jl 0xd46ad
    X86_AT(c, 0xd469au);
    if (x86_cc(c, 12)) { goto L_d46ad; }
    X86_TICK(c, 18);
    // 0d469c  mov eax, esi
    X86_AT(c, 0xd469cu);
    c.r[0] = c.r[6];
    // 0d469e  shl eax, 6
    X86_AT(c, 0xd469eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0d46a1  add eax, ebx
    X86_AT(c, 0xd46a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[3], 0, 4); }
    // 0d46a3  mov byte ptr [eax + 0x8af68], 0x22
    X86_AT(c, 0xd46a3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AF68u)), 0x22u);
    // 0d46aa  inc ebx
    X86_AT(c, 0xd46aau);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d46ab  jmp 0xd4693
    X86_AT(c, 0xd46abu);
    X86_POLL(c, 0xd4693u); goto L_d4693;
L_d46ad:
    X86_TICK(c, 9);
    // 0d46ad  inc esi
    X86_AT(c, 0xd46adu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d46ae  jmp 0xd4685
    X86_AT(c, 0xd46aeu);
    X86_POLL(c, 0xd4685u); goto L_d4685;
L_d46b0:
    X86_TICK(c, 22);
    // 0d46b0  push 4
    X86_AT(c, 0xd46b0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d46b2  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd46b2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d46b5  inc eax
    X86_AT(c, 0xd46b5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d46b6  push eax
    X86_AT(c, 0xd46b6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d46b7  push dword ptr [ebp - 4]
    X86_AT(c, 0xd46b7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d46ba  call 0xbd068
    X86_AT(c, 0xd46bau);
    push32(c, 0xd46bfu); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xd46bfu);
    X86_TICK(c, 9);
    // 0d46bf  push 0xa
    X86_AT(c, 0xd46bfu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d46c1  call 0xb607c
    X86_AT(c, 0xd46c1u);
    push32(c, 0xd46c6u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd46c6u);
    X86_TICK(c, 9);
    // 0d46c6  push 2
    X86_AT(c, 0xd46c6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d46c8  call 0xbebbc
    X86_AT(c, 0xd46c8u);
    push32(c, 0xd46cdu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd46cdu);
    X86_TICK(c, 9);
    // 0d46cd  push 8
    X86_AT(c, 0xd46cdu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d46cf  call 0xb607c
    X86_AT(c, 0xd46cfu);
    push32(c, 0xd46d4u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd46d4u);
    X86_TICK(c, 9);
    // 0d46d4  push 2
    X86_AT(c, 0xd46d4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d46d6  call 0xbebbc
    X86_AT(c, 0xd46d6u);
    push32(c, 0xd46dbu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd46dbu);
    X86_TICK(c, 11);
    // 0d46db  inc edi
    X86_AT(c, 0xd46dbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d46dc  add esp, 0x1c
    X86_AT(c, 0xd46dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d46df  jmp 0xd467b
    X86_AT(c, 0xd46dfu);
    X86_POLL(c, 0xd467bu); goto L_d467b;
L_d46e1:
    X86_TICK(c, 14);
    // 0d46e1  push dword ptr [0xb3018]
    X86_AT(c, 0xd46e1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB3018u))); push32(c, v); }
    // 0d46e7  push 7
    X86_AT(c, 0xd46e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d46e9  call 0xba428
    X86_AT(c, 0xd46e9u);
    push32(c, 0xd46eeu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd46eeu);
    X86_TICK(c, 9);
    // 0d46ee  push 7
    X86_AT(c, 0xd46eeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d46f0  call 0xbbb5c
    X86_AT(c, 0xd46f0u);
    push32(c, 0xd46f5u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd46f5u);
    X86_TICK(c, 9);
    // 0d46f5  push 7
    X86_AT(c, 0xd46f5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d46f7  call 0xc9890
    X86_AT(c, 0xd46f7u);
    push32(c, 0xd46fcu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd46fcu);
    X86_TICK(c, 14);
    // 0d46fc  push dword ptr [0xb301c]
    X86_AT(c, 0xd46fcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB301Cu))); push32(c, v); }
    // 0d4702  push 7
    X86_AT(c, 0xd4702u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4704  call 0xba428
    X86_AT(c, 0xd4704u);
    push32(c, 0xd4709u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd4709u);
    X86_TICK(c, 9);
    // 0d4709  push 7
    X86_AT(c, 0xd4709u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d470b  call 0xbbb5c
    X86_AT(c, 0xd470bu);
    push32(c, 0xd4710u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd4710u);
    X86_TICK(c, 9);
    // 0d4710  push 7
    X86_AT(c, 0xd4710u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4712  call 0xc9890
    X86_AT(c, 0xd4712u);
    push32(c, 0xd4717u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd4717u);
    X86_TICK(c, 14);
    // 0d4717  push dword ptr [0xb3020]
    X86_AT(c, 0xd4717u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB3020u))); push32(c, v); }
    // 0d471d  push 7
    X86_AT(c, 0xd471du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d471f  call 0xba428
    X86_AT(c, 0xd471fu);
    push32(c, 0xd4724u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd4724u);
    X86_TICK(c, 9);
    // 0d4724  push 7
    X86_AT(c, 0xd4724u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4726  call 0xbbb5c
    X86_AT(c, 0xd4726u);
    push32(c, 0xd472bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd472bu);
    X86_TICK(c, 9);
    // 0d472b  push 7
    X86_AT(c, 0xd472bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d472d  call 0xc9890
    X86_AT(c, 0xd472du);
    push32(c, 0xd4732u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd4732u);
    X86_TICK(c, 9);
    // 0d4732  push 0xa
    X86_AT(c, 0xd4732u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d4734  call 0xb607c
    X86_AT(c, 0xd4734u);
    push32(c, 0xd4739u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd4739u);
    X86_TICK(c, 9);
    // 0d4739  push 4
    X86_AT(c, 0xd4739u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d473b  call 0xbebbc
    X86_AT(c, 0xd473bu);
    push32(c, 0xd4740u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd4740u);
    X86_TICK(c, 9);
    // 0d4740  push 0xa
    X86_AT(c, 0xd4740u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d4742  call 0xb607c
    X86_AT(c, 0xd4742u);
    push32(c, 0xd4747u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd4747u);
    X86_TICK(c, 11);
    // 0d4747  add esp, 0x3c
    X86_AT(c, 0xd4747u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d474a  push 4
    X86_AT(c, 0xd474au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d474c  call 0xbebbc
    X86_AT(c, 0xd474cu);
    push32(c, 0xd4751u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd4751u);
    X86_TICK(c, 9);
    // 0d4751  push 0xa
    X86_AT(c, 0xd4751u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d4753  call 0xb607c
    X86_AT(c, 0xd4753u);
    push32(c, 0xd4758u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd4758u);
    X86_TICK(c, 9);
    // 0d4758  push 6
    X86_AT(c, 0xd4758u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d475a  call 0xbebbc
    X86_AT(c, 0xd475au);
    push32(c, 0xd475fu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd475fu);
    X86_TICK(c, 9);
    // 0d475f  push 1
    X86_AT(c, 0xd475fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d4761  call 0xba6a0
    X86_AT(c, 0xd4761u);
    push32(c, 0xd4766u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xd4766u);
    X86_TICK(c, 9);
    // 0d4766  push 3
    X86_AT(c, 0xd4766u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4768  call 0xbc724
    X86_AT(c, 0xd4768u);
    push32(c, 0xd476du); x86_call_known(c, 0xbc724u, f_000bc724); X86_RET(c, 0xd476du);
    X86_TICK(c, 9);
    // 0d476d  push 0
    X86_AT(c, 0xd476du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d476f  call 0xba6a0
    X86_AT(c, 0xd476fu);
    push32(c, 0xd4774u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xd4774u);
    X86_TICK(c, 32);
    // 0d4774  mov word ptr [0x9c544], 0xffff
    X86_AT(c, 0xd4774u);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), 0xFFFFu);
    // 0d477d  add esp, 0x18
    X86_AT(c, 0xd477du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d4780  pop edi
    X86_AT(c, 0xd4780u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d4781  pop esi
    X86_AT(c, 0xd4781u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d4782  pop ebx
    X86_AT(c, 0xd4782u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4783  leave 
    X86_AT(c, 0xd4783u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4784  ret 
    X86_AT(c, 0xd4784u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd438cu, "ran off the end of a function");
}
void f_000d4788(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d4788  push ebp
    X86_AT(c, 0xd4788u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d4789  mov ebp, esp
    X86_AT(c, 0xd4789u);
    c.r[5] = c.r[4];
    // 0d478b  push ebx
    X86_AT(c, 0xd478bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d478c  push esi
    X86_AT(c, 0xd478cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d478d  push edi
    X86_AT(c, 0xd478du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d478e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd478eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d4791  push edi
    X86_AT(c, 0xd4791u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4792  call 0xb61b4
    X86_AT(c, 0xd4792u);
    push32(c, 0xd4797u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd4797u);
    X86_TICK(c, 12);
    // 0d4797  xchg esi, eax
    X86_AT(c, 0xd4797u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d4798  push edi
    X86_AT(c, 0xd4798u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4799  call 0xb61b4
    X86_AT(c, 0xd4799u);
    push32(c, 0xd479eu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xd479eu);
    X86_TICK(c, 12);
    // 0d479e  xchg ebx, eax
    X86_AT(c, 0xd479eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d479f  add esp, 8
    X86_AT(c, 0xd479fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d47a2  cmp ebx, esi
    X86_AT(c, 0xd47a2u);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 0d47a4  jg 0xd47aa
    X86_AT(c, 0xd47a4u);
    if (x86_cc(c, 15)) { goto L_d47aa; }
    X86_TICK(c, 9);
    // 0d47a6  mov eax, ebx
    X86_AT(c, 0xd47a6u);
    c.r[0] = c.r[3];
    // 0d47a8  jmp 0xd47ac
    X86_AT(c, 0xd47a8u);
    goto L_d47ac;
L_d47aa:
    X86_TICK(c, 2);
    // 0d47aa  mov eax, esi
    X86_AT(c, 0xd47aau);
    c.r[0] = c.r[6];
L_d47ac:
    X86_TICK(c, 28);
    // 0d47ac  pop edi
    X86_AT(c, 0xd47acu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d47ad  pop esi
    X86_AT(c, 0xd47adu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d47ae  pop ebx
    X86_AT(c, 0xd47aeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d47af  leave 
    X86_AT(c, 0xd47afu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d47b0  ret 
    X86_AT(c, 0xd47b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4788u, "ran off the end of a function");
}
void f_000d47b4(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d47b4  push ebp
    X86_AT(c, 0xd47b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d47b5  mov ebp, esp
    X86_AT(c, 0xd47b5u);
    c.r[5] = c.r[4];
    // 0d47b7  push ebx
    X86_AT(c, 0xd47b7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d47b8  push esi
    X86_AT(c, 0xd47b8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d47b9  push edi
    X86_AT(c, 0xd47b9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d47ba  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd47bau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d47bd  cmp edx, 0x7f
    X86_AT(c, 0xd47bdu);
    (void)x86_sub(c, c.r[2], 0x7Fu, 0, 4);
    // 0d47c0  je 0xd48a4
    X86_AT(c, 0xd47c0u);
    if (x86_cc(c, 4)) { goto L_d48a4; }
    X86_TICK(c, 9);
    // 0d47c6  inc edx
    X86_AT(c, 0xd47c6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0d47c7  cmp edx, 0xb
    X86_AT(c, 0xd47c7u);
    (void)x86_sub(c, c.r[2], 0xBu, 0, 4);
    // 0d47ca  ja 0xd48ae
    X86_AT(c, 0xd47cau);
    if (x86_cc(c, 7)) { goto L_d48ae; }
    X86_TICK(c, 7);
    // 0d47d0  jmp dword ptr cs:[edx*4 + 0xd47d8]
    X86_AT(c, 0xd47d0u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD47D8u)));
      switch (t) {
      case 0xd4808u: goto L_d4808;
      case 0xd4817u: goto L_d4817;
      case 0xd4826u: goto L_d4826;
      case 0xd4835u: goto L_d4835;
      case 0xd4844u: goto L_d4844;
      case 0xd4850u: goto L_d4850;
      case 0xd485cu: goto L_d485c;
      case 0xd4868u: goto L_d4868;
      case 0xd4874u: goto L_d4874;
      case 0xd4880u: goto L_d4880;
      case 0xd488cu: goto L_d488c;
      case 0xd4898u: goto L_d4898;
      default: x86_jump(c, t); return; } }
L_d4808:
    X86_TICK(c, 11);
    // 0d4808  mov esi, 0xb1144
    X86_AT(c, 0xd4808u);
    c.r[6] = 0xB1144u;
    // 0d480d  mov ebx, 0xb2c74
    X86_AT(c, 0xd480du);
    c.r[3] = 0xB2C74u;
    // 0d4812  jmp 0xd48ae
    X86_AT(c, 0xd4812u);
    goto L_d48ae;
L_d4817:
    X86_TICK(c, 11);
    // 0d4817  mov esi, 0xb0da8
    X86_AT(c, 0xd4817u);
    c.r[6] = 0xB0DA8u;
    // 0d481c  mov ebx, 0xb2c50
    X86_AT(c, 0xd481cu);
    c.r[3] = 0xB2C50u;
    // 0d4821  jmp 0xd48ae
    X86_AT(c, 0xd4821u);
    goto L_d48ae;
L_d4826:
    X86_TICK(c, 11);
    // 0d4826  mov esi, 0xb0af0
    X86_AT(c, 0xd4826u);
    c.r[6] = 0xB0AF0u;
    // 0d482b  mov ebx, 0xb2bd8
    X86_AT(c, 0xd482bu);
    c.r[3] = 0xB2BD8u;
    // 0d4830  jmp 0xd48ae
    X86_AT(c, 0xd4830u);
    goto L_d48ae;
L_d4835:
    X86_TICK(c, 11);
    // 0d4835  mov esi, 0xb13fc
    X86_AT(c, 0xd4835u);
    c.r[6] = 0xB13FCu;
    // 0d483a  mov ebx, 0xb2c80
    X86_AT(c, 0xd483au);
    c.r[3] = 0xB2C80u;
    // 0d483f  jmp 0xd48ae
    X86_AT(c, 0xd483fu);
    goto L_d48ae;
L_d4844:
    X86_TICK(c, 11);
    // 0d4844  mov esi, 0xb16b4
    X86_AT(c, 0xd4844u);
    c.r[6] = 0xB16B4u;
    // 0d4849  mov ebx, 0xb2c8c
    X86_AT(c, 0xd4849u);
    c.r[3] = 0xB2C8Cu;
    // 0d484e  jmp 0xd48ae
    X86_AT(c, 0xd484eu);
    goto L_d48ae;
L_d4850:
    X86_TICK(c, 11);
    // 0d4850  mov esi, 0xb1884
    X86_AT(c, 0xd4850u);
    c.r[6] = 0xB1884u;
    // 0d4855  mov ebx, 0xb2c98
    X86_AT(c, 0xd4855u);
    c.r[3] = 0xB2C98u;
    // 0d485a  jmp 0xd48ae
    X86_AT(c, 0xd485au);
    goto L_d48ae;
L_d485c:
    X86_TICK(c, 11);
    // 0d485c  mov esi, 0xb1b3c
    X86_AT(c, 0xd485cu);
    c.r[6] = 0xB1B3Cu;
    // 0d4861  mov ebx, 0xb2cbc
    X86_AT(c, 0xd4861u);
    c.r[3] = 0xB2CBCu;
    // 0d4866  jmp 0xd48ae
    X86_AT(c, 0xd4866u);
    goto L_d48ae;
L_d4868:
    X86_TICK(c, 11);
    // 0d4868  mov esi, 0xb1df4
    X86_AT(c, 0xd4868u);
    c.r[6] = 0xB1DF4u;
    // 0d486d  mov ebx, 0xb2ce0
    X86_AT(c, 0xd486du);
    c.r[3] = 0xB2CE0u;
    // 0d4872  jmp 0xd48ae
    X86_AT(c, 0xd4872u);
    goto L_d48ae;
L_d4874:
    X86_TICK(c, 11);
    // 0d4874  mov esi, 0xb2080
    X86_AT(c, 0xd4874u);
    c.r[6] = 0xB2080u;
    // 0d4879  mov ebx, 0xb2d10
    X86_AT(c, 0xd4879u);
    c.r[3] = 0xB2D10u;
    // 0d487e  jmp 0xd48ae
    X86_AT(c, 0xd487eu);
    goto L_d48ae;
L_d4880:
    X86_TICK(c, 11);
    // 0d4880  mov esi, 0xb2360
    X86_AT(c, 0xd4880u);
    c.r[6] = 0xB2360u;
    // 0d4885  mov ebx, 0xb2d34
    X86_AT(c, 0xd4885u);
    c.r[3] = 0xB2D34u;
    // 0d488a  jmp 0xd48ae
    X86_AT(c, 0xd488au);
    goto L_d48ae;
L_d488c:
    X86_TICK(c, 11);
    // 0d488c  mov esi, 0xb2600
    X86_AT(c, 0xd488cu);
    c.r[6] = 0xB2600u;
    // 0d4891  mov ebx, 0xb2d94
    X86_AT(c, 0xd4891u);
    c.r[3] = 0xB2D94u;
    // 0d4896  jmp 0xd48ae
    X86_AT(c, 0xd4896u);
    goto L_d48ae;
L_d4898:
    X86_TICK(c, 11);
    // 0d4898  mov esi, 0xb28a0
    X86_AT(c, 0xd4898u);
    c.r[6] = 0xB28A0u;
    // 0d489d  mov ebx, 0xb2dac
    X86_AT(c, 0xd489du);
    c.r[3] = 0xB2DACu;
    // 0d48a2  jmp 0xd48ae
    X86_AT(c, 0xd48a2u);
    goto L_d48ae;
L_d48a4:
    X86_TICK(c, 4);
    // 0d48a4  mov esi, 0xb2b58
    X86_AT(c, 0xd48a4u);
    c.r[6] = 0xB2B58u;
    // 0d48a9  mov ebx, 0xb2e18
    X86_AT(c, 0xd48a9u);
    c.r[3] = 0xB2E18u;
L_d48ae:
    X86_TICK(c, 2);
    // 0d48ae  sub edi, edi
    X86_AT(c, 0xd48aeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d48b0:
    X86_TICK(c, 7);
    // 0d48b0  cmp edi, 0x30
    X86_AT(c, 0xd48b0u);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0d48b3  jge 0xd48dc
    X86_AT(c, 0xd48b3u);
    if (x86_cc(c, 13)) { goto L_d48dc; }
    X86_TICK(c, 21);
    // 0d48b5  sub eax, eax
    X86_AT(c, 0xd48b5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d48b7  mov byte ptr [edi + 0xa5ce8], al
    X86_AT(c, 0xd48b7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), g8(c, 0));
    // 0d48bd  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd48bdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d48c4  mov dword ptr [edi*4 + 0xa5e08], eax
    X86_AT(c, 0xd48c4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[0]);
    // 0d48cb  mov dword ptr [edi*4 + 0xa5ec8], eax
    X86_AT(c, 0xd48cbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u)), c.r[0]);
    // 0d48d2  mov dword ptr [edi*4 + 0xa6074], eax
    X86_AT(c, 0xd48d2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)), c.r[0]);
    // 0d48d9  inc edi
    X86_AT(c, 0xd48d9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d48da  jmp 0xd48b0
    X86_AT(c, 0xd48dau);
    X86_POLL(c, 0xd48b0u); goto L_d48b0;
L_d48dc:
    X86_TICK(c, 7);
    // 0d48dc  call 0xb8d28
    X86_AT(c, 0xd48dcu);
    push32(c, 0xd48e1u); x86_call_known(c, 0xb8d28u, f_000b8d28); X86_RET(c, 0xd48e1u);
    X86_TICK(c, 2);
    // 0d48e1  sub edi, edi
    X86_AT(c, 0xd48e1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d48e3:
    X86_TICK(c, 11);
    // 0d48e3  mov al, byte ptr [esi]
    X86_AT(c, 0xd48e3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0d48e5  cmp al, 0xff
    X86_AT(c, 0xd48e5u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0d48e7  je 0xd4931
    X86_AT(c, 0xd48e7u);
    if (x86_cc(c, 4)) { goto L_d4931; }
    X86_TICK(c, 45);
    // 0d48e9  mov byte ptr [edi + 0xa5ce8], al
    X86_AT(c, 0xd48e9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), g8(c, 0));
    // 0d48ef  mov al, byte ptr [esi + 0x11]
    X86_AT(c, 0xd48efu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x11u))));
    // 0d48f2  mov byte ptr [edi + 0xa5d18], al
    X86_AT(c, 0xd48f2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5D18u)), g8(c, 0));
    // 0d48f8  mov eax, dword ptr [esi + 1]
    X86_AT(c, 0xd48f8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u)));
    // 0d48fb  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd48fbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d4902  mov eax, dword ptr [esi + 5]
    X86_AT(c, 0xd4902u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x5u)));
    // 0d4905  mov dword ptr [edi*4 + 0xa5e08], eax
    X86_AT(c, 0xd4905u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[0]);
    // 0d490c  mov eax, dword ptr [esi + 9]
    X86_AT(c, 0xd490cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x9u)));
    // 0d490f  mov dword ptr [edi*4 + 0xa5ec8], eax
    X86_AT(c, 0xd490fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u)), c.r[0]);
    // 0d4916  mov eax, dword ptr [esi + 0xd]
    X86_AT(c, 0xd4916u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xDu)));
    // 0d4919  mov dword ptr [edi*4 + 0xa5f88], eax
    X86_AT(c, 0xd4919u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5F88u)), c.r[0]);
    // 0d4920  mov dword ptr [edi*4 + 0xa6074], 0
    X86_AT(c, 0xd4920u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)), 0x0u);
    // 0d492b  inc edi
    X86_AT(c, 0xd492bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d492c  add esi, 0x15
    X86_AT(c, 0xd492cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x15u, 0, 4); }
    // 0d492f  jmp 0xd48e3
    X86_AT(c, 0xd492fu);
    X86_POLL(c, 0xd48e3u); goto L_d48e3;
L_d4931:
    X86_TICK(c, 12);
    // 0d4931  cmp dword ptr [ebx], 0xff
    X86_AT(c, 0xd4931u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0xFFu, 0, 4);
    // 0d4937  je 0xd497b
    X86_AT(c, 0xd4937u);
    if (x86_cc(c, 4)) { goto L_d497b; }
    X86_TICK(c, 35);
    // 0d4939  mov byte ptr [edi + 0xa5ce8], 0x80
    X86_AT(c, 0xd4939u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), 0x80u);
    // 0d4940  mov byte ptr [edi + 0xa5d18], 0x70
    X86_AT(c, 0xd4940u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5D18u)), 0x70u);
    // 0d4947  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd4947u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d4949  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd4949u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d4950  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd4950u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d4953  mov dword ptr [edi*4 + 0xa5e08], eax
    X86_AT(c, 0xd4953u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[0]);
    // 0d495a  sub eax, eax
    X86_AT(c, 0xd495au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d495c  mov dword ptr [edi*4 + 0xa5ec8], eax
    X86_AT(c, 0xd495cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u)), c.r[0]);
    // 0d4963  mov dword ptr [edi*4 + 0xa5f88], eax
    X86_AT(c, 0xd4963u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5F88u)), c.r[0]);
    // 0d496a  mov dword ptr [edi*4 + 0xa6074], 0xffffffff
    X86_AT(c, 0xd496au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)), 0xFFFFFFFFu);
    // 0d4975  inc edi
    X86_AT(c, 0xd4975u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d4976  add ebx, 0xc
    X86_AT(c, 0xd4976u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d4979  jmp 0xd4931
    X86_AT(c, 0xd4979u);
    X86_POLL(c, 0xd4931u); goto L_d4931;
L_d497b:
    X86_TICK(c, 28);
    // 0d497b  pop edi
    X86_AT(c, 0xd497bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d497c  pop esi
    X86_AT(c, 0xd497cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d497d  pop ebx
    X86_AT(c, 0xd497du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d497e  leave 
    X86_AT(c, 0xd497eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d497f  ret 
    X86_AT(c, 0xd497fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd47b4u, "ran off the end of a function");
}
void f_000d48ae(X86Cpu& c) {
    X86_TICK(c, 2);
    // 0d48ae  sub edi, edi
    X86_AT(c, 0xd48aeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d48b0:
    X86_TICK(c, 7);
    // 0d48b0  cmp edi, 0x30
    X86_AT(c, 0xd48b0u);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0d48b3  jge 0xd48dc
    X86_AT(c, 0xd48b3u);
    if (x86_cc(c, 13)) { goto L_d48dc; }
    X86_TICK(c, 21);
    // 0d48b5  sub eax, eax
    X86_AT(c, 0xd48b5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d48b7  mov byte ptr [edi + 0xa5ce8], al
    X86_AT(c, 0xd48b7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), g8(c, 0));
    // 0d48bd  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd48bdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d48c4  mov dword ptr [edi*4 + 0xa5e08], eax
    X86_AT(c, 0xd48c4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[0]);
    // 0d48cb  mov dword ptr [edi*4 + 0xa5ec8], eax
    X86_AT(c, 0xd48cbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u)), c.r[0]);
    // 0d48d2  mov dword ptr [edi*4 + 0xa6074], eax
    X86_AT(c, 0xd48d2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)), c.r[0]);
    // 0d48d9  inc edi
    X86_AT(c, 0xd48d9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d48da  jmp 0xd48b0
    X86_AT(c, 0xd48dau);
    X86_POLL(c, 0xd48b0u); goto L_d48b0;
L_d48dc:
    X86_TICK(c, 7);
    // 0d48dc  call 0xb8d28
    X86_AT(c, 0xd48dcu);
    push32(c, 0xd48e1u); x86_call_known(c, 0xb8d28u, f_000b8d28); X86_RET(c, 0xd48e1u);
    X86_TICK(c, 2);
    // 0d48e1  sub edi, edi
    X86_AT(c, 0xd48e1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d48e3:
    X86_TICK(c, 11);
    // 0d48e3  mov al, byte ptr [esi]
    X86_AT(c, 0xd48e3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0d48e5  cmp al, 0xff
    X86_AT(c, 0xd48e5u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0d48e7  je 0xd4931
    X86_AT(c, 0xd48e7u);
    if (x86_cc(c, 4)) { goto L_d4931; }
    X86_TICK(c, 45);
    // 0d48e9  mov byte ptr [edi + 0xa5ce8], al
    X86_AT(c, 0xd48e9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), g8(c, 0));
    // 0d48ef  mov al, byte ptr [esi + 0x11]
    X86_AT(c, 0xd48efu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x11u))));
    // 0d48f2  mov byte ptr [edi + 0xa5d18], al
    X86_AT(c, 0xd48f2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5D18u)), g8(c, 0));
    // 0d48f8  mov eax, dword ptr [esi + 1]
    X86_AT(c, 0xd48f8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u)));
    // 0d48fb  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd48fbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d4902  mov eax, dword ptr [esi + 5]
    X86_AT(c, 0xd4902u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x5u)));
    // 0d4905  mov dword ptr [edi*4 + 0xa5e08], eax
    X86_AT(c, 0xd4905u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[0]);
    // 0d490c  mov eax, dword ptr [esi + 9]
    X86_AT(c, 0xd490cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x9u)));
    // 0d490f  mov dword ptr [edi*4 + 0xa5ec8], eax
    X86_AT(c, 0xd490fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u)), c.r[0]);
    // 0d4916  mov eax, dword ptr [esi + 0xd]
    X86_AT(c, 0xd4916u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xDu)));
    // 0d4919  mov dword ptr [edi*4 + 0xa5f88], eax
    X86_AT(c, 0xd4919u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5F88u)), c.r[0]);
    // 0d4920  mov dword ptr [edi*4 + 0xa6074], 0
    X86_AT(c, 0xd4920u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)), 0x0u);
    // 0d492b  inc edi
    X86_AT(c, 0xd492bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d492c  add esi, 0x15
    X86_AT(c, 0xd492cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x15u, 0, 4); }
    // 0d492f  jmp 0xd48e3
    X86_AT(c, 0xd492fu);
    X86_POLL(c, 0xd48e3u); goto L_d48e3;
L_d4931:
    X86_TICK(c, 12);
    // 0d4931  cmp dword ptr [ebx], 0xff
    X86_AT(c, 0xd4931u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0xFFu, 0, 4);
    // 0d4937  je 0xd497b
    X86_AT(c, 0xd4937u);
    if (x86_cc(c, 4)) { goto L_d497b; }
    X86_TICK(c, 35);
    // 0d4939  mov byte ptr [edi + 0xa5ce8], 0x80
    X86_AT(c, 0xd4939u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), 0x80u);
    // 0d4940  mov byte ptr [edi + 0xa5d18], 0x70
    X86_AT(c, 0xd4940u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5D18u)), 0x70u);
    // 0d4947  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd4947u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d4949  mov dword ptr [edi*4 + 0xa5d48], eax
    X86_AT(c, 0xd4949u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u)), c.r[0]);
    // 0d4950  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd4950u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d4953  mov dword ptr [edi*4 + 0xa5e08], eax
    X86_AT(c, 0xd4953u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u)), c.r[0]);
    // 0d495a  sub eax, eax
    X86_AT(c, 0xd495au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d495c  mov dword ptr [edi*4 + 0xa5ec8], eax
    X86_AT(c, 0xd495cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u)), c.r[0]);
    // 0d4963  mov dword ptr [edi*4 + 0xa5f88], eax
    X86_AT(c, 0xd4963u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5F88u)), c.r[0]);
    // 0d496a  mov dword ptr [edi*4 + 0xa6074], 0xffffffff
    X86_AT(c, 0xd496au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)), 0xFFFFFFFFu);
    // 0d4975  inc edi
    X86_AT(c, 0xd4975u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d4976  add ebx, 0xc
    X86_AT(c, 0xd4976u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d4979  jmp 0xd4931
    X86_AT(c, 0xd4979u);
    X86_POLL(c, 0xd4931u); goto L_d4931;
L_d497b:
    X86_TICK(c, 28);
    // 0d497b  pop edi
    X86_AT(c, 0xd497bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d497c  pop esi
    X86_AT(c, 0xd497cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d497d  pop ebx
    X86_AT(c, 0xd497du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d497e  leave 
    X86_AT(c, 0xd497eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d497f  ret 
    X86_AT(c, 0xd497fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd48aeu, "ran off the end of a function");
}
void f_000d49c3(X86Cpu& c) {
    X86_TICK(c, 51);
    // 0d49c3  enter 0, 0
    X86_AT(c, 0xd49c3u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d49c7  pushal 
    X86_AT(c, 0xd49c7u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d49c8  pushfd 
    X86_AT(c, 0xd49c8u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0d49c9  cli 
    X86_AT(c, 0xd49c9u);
    c.fl &= ~X86_IF;
    // 0d49ca  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd49cau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d49cd  mov dword ptr [0xb3164], eax
    X86_AT(c, 0xd49cdu);
    wr32((c.sbase[3] + (uint32_t)(0xB3164u)), c.r[0]);
    // 0d49d2  mov word ptr [0xb3168], ds
    X86_AT(c, 0xd49d2u);
    wr16((c.sbase[3] + (uint32_t)(0xB3168u)), (uint32_t)c.sreg[3]);
    // 0d49d8  mov bl, 0
    X86_AT(c, 0xd49d8u);
    s8(c, 3, 0x0u);
    // 0d49da  xor ah, ah
    X86_AT(c, 0xd49dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0d49dc  call 0xd4fcc
    X86_AT(c, 0xd49dcu);
    push32(c, 0xd49e1u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd49e1u);
    X86_TICK(c, 7);
    // 0d49e1  and al, al
    X86_AT(c, 0xd49e1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d49e3  jne 0xd4a21
    X86_AT(c, 0xd49e3u);
    if (x86_cc(c, 5)) { goto L_d4a21; }
    X86_TICK(c, 7);
    // 0d49e9  call 0xd4d78
    X86_AT(c, 0xd49e9u);
    push32(c, 0xd49eeu); x86_call_known(c, 0xd4d78u, f_000d4d78); X86_RET(c, 0xd49eeu);
    X86_TICK(c, 7);
    // 0d49ee  and al, al
    X86_AT(c, 0xd49eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d49f0  jne 0xd4a21
    X86_AT(c, 0xd49f0u);
    if (x86_cc(c, 5)) { goto L_d4a21; }
    X86_TICK(c, 13);
    // 0d49f6  mov bl, 0xff
    X86_AT(c, 0xd49f6u);
    s8(c, 3, 0xFFu);
    // 0d49f8  mov ecx, 1
    X86_AT(c, 0xd49f8u);
    c.r[1] = 0x1u;
    // 0d49fd  mov ah, 0x15
    X86_AT(c, 0xd49fdu);
    s8(c, 4, 0x15u);
    // 0d49ff  call 0xd4fcc
    X86_AT(c, 0xd49ffu);
    push32(c, 0xd4a04u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4a04u);
    X86_TICK(c, 11);
    // 0d4a04  mov bl, 0
    X86_AT(c, 0xd4a04u);
    s8(c, 3, 0x0u);
    // 0d4a06  mov ah, 0x15
    X86_AT(c, 0xd4a06u);
    s8(c, 4, 0x15u);
    // 0d4a08  call 0xd4fcc
    X86_AT(c, 0xd4a08u);
    push32(c, 0xd4a0du); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4a0du);
    X86_TICK(c, 13);
    // 0d4a0d  mov bl, 0xff
    X86_AT(c, 0xd4a0du);
    s8(c, 3, 0xFFu);
    // 0d4a0f  mov ecx, 0xdd
    X86_AT(c, 0xd4a0fu);
    c.r[1] = 0xDDu;
    // 0d4a14  mov ah, 0x16
    X86_AT(c, 0xd4a14u);
    s8(c, 4, 0x16u);
    // 0d4a16  call 0xd4fcc
    X86_AT(c, 0xd4a16u);
    push32(c, 0xd4a1bu); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4a1bu);
    X86_TICK(c, 48);
    // 0d4a1b  popfd 
    X86_AT(c, 0xd4a1bu);
    x86_popfd(c, 4);
    // 0d4a1c  popal 
    X86_AT(c, 0xd4a1cu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d4a1d  leave 
    X86_AT(c, 0xd4a1du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4a1e  xor eax, eax
    X86_AT(c, 0xd4a1eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d4a20  ret 
    X86_AT(c, 0xd4a20u);
    c.eip = pop32(c); return;
L_d4a21:
    X86_TICK(c, 48);
    // 0d4a21  popfd 
    X86_AT(c, 0xd4a21u);
    x86_popfd(c, 4);
    // 0d4a22  popal 
    X86_AT(c, 0xd4a22u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d4a23  leave 
    X86_AT(c, 0xd4a23u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4a24  mov eax, 1
    X86_AT(c, 0xd4a24u);
    c.r[0] = 0x1u;
    // 0d4a29  ret 
    X86_AT(c, 0xd4a29u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd49c3u, "ran off the end of a function");
}
void f_000d4a2a(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0d4a2a  enter 0, 0
    X86_AT(c, 0xd4a2au);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d4a2e  push ebx
    X86_AT(c, 0xd4a2eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4a2f  mov bl, 0
    X86_AT(c, 0xd4a2fu);
    s8(c, 3, 0x0u);
    // 0d4a31  xor ah, ah
    X86_AT(c, 0xd4a31u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0d4a33  call 0xd4fcc
    X86_AT(c, 0xd4a33u);
    push32(c, 0xd4a38u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4a38u);
    X86_TICK(c, 13);
    // 0d4a38  xor bh, bh
    X86_AT(c, 0xd4a38u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 0d4a3a  mov dx, 0x2c00
    X86_AT(c, 0xd4a3au);
    s16(c, 2, 0x2C00u);
    // 0d4a3e  mov ah, 0x11
    X86_AT(c, 0xd4a3eu);
    s8(c, 4, 0x11u);
    // 0d4a40  call 0xd4fcc
    X86_AT(c, 0xd4a40u);
    push32(c, 0xd4a45u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4a45u);
    X86_TICK(c, 7);
    // 0d4a45  call 0xd4e32
    X86_AT(c, 0xd4a45u);
    push32(c, 0xd4a4au); x86_call_known(c, 0xd4e32u, f_000d4e32); X86_RET(c, 0xd4a4au);
    X86_TICK(c, 22);
    // 0d4a4a  xor eax, eax
    X86_AT(c, 0xd4a4au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d4a4c  pop ebx
    X86_AT(c, 0xd4a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4a4d  leave 
    X86_AT(c, 0xd4a4du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4a4e  ret 
    X86_AT(c, 0xd4a4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4a2au, "ran off the end of a function");
}
void f_000d4a81(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d4a81  enter 0, 0
    X86_AT(c, 0xd4a81u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d4a85  push ebx
    X86_AT(c, 0xd4a85u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4a86  push edx
    X86_AT(c, 0xd4a86u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d4a87  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xd4a87u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d4a8a  mov dl, byte ptr [ebp + 0xc]
    X86_AT(c, 0xd4a8au);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0d4a8d  mov ah, 3
    X86_AT(c, 0xd4a8du);
    s8(c, 4, 0x3u);
    // 0d4a8f  call 0xd4fcc
    X86_AT(c, 0xd4a8fu);
    push32(c, 0xd4a94u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4a94u);
    X86_TICK(c, 27);
    // 0d4a94  movzx eax, al
    X86_AT(c, 0xd4a94u);
    c.r[0] = g8(c, 0);
    // 0d4a97  pop edx
    X86_AT(c, 0xd4a97u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d4a98  pop ebx
    X86_AT(c, 0xd4a98u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4a99  leave 
    X86_AT(c, 0xd4a99u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4a9a  ret 
    X86_AT(c, 0xd4a9au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4a81u, "ran off the end of a function");
}
void f_000d4a9b(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d4a9b  enter 0, 0
    X86_AT(c, 0xd4a9bu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d4a9f  push ebx
    X86_AT(c, 0xd4a9fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4aa0  push edx
    X86_AT(c, 0xd4aa0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d4aa1  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xd4aa1u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d4aa4  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0xd4aa4u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0d4aa7  mov ah, 4
    X86_AT(c, 0xd4aa7u);
    s8(c, 4, 0x4u);
    // 0d4aa9  call 0xd4fcc
    X86_AT(c, 0xd4aa9u);
    push32(c, 0xd4aaeu); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4aaeu);
    X86_TICK(c, 27);
    // 0d4aae  movzx eax, al
    X86_AT(c, 0xd4aaeu);
    c.r[0] = g8(c, 0);
    // 0d4ab1  pop edx
    X86_AT(c, 0xd4ab1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d4ab2  pop ebx
    X86_AT(c, 0xd4ab2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4ab3  leave 
    X86_AT(c, 0xd4ab3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4ab4  ret 
    X86_AT(c, 0xd4ab4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4a9bu, "ran off the end of a function");
}
void f_000d4ab5(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0d4ab5  enter 0, 0
    X86_AT(c, 0xd4ab5u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d4ab9  push ebx
    X86_AT(c, 0xd4ab9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4aba  push edx
    X86_AT(c, 0xd4abau);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d4abb  push esi
    X86_AT(c, 0xd4abbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d4abc  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xd4abcu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d4abf  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0xd4abfu);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0d4ac2  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd4ac2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d4ac5  mov ah, 5
    X86_AT(c, 0xd4ac5u);
    s8(c, 4, 0x5u);
    // 0d4ac7  call 0xd4fcc
    X86_AT(c, 0xd4ac7u);
    push32(c, 0xd4accu); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4accu);
    X86_TICK(c, 31);
    // 0d4acc  movzx eax, al
    X86_AT(c, 0xd4accu);
    c.r[0] = g8(c, 0);
    // 0d4acf  pop esi
    X86_AT(c, 0xd4acfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d4ad0  pop edx
    X86_AT(c, 0xd4ad0u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d4ad1  pop ebx
    X86_AT(c, 0xd4ad1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4ad2  leave 
    X86_AT(c, 0xd4ad2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4ad3  ret 
    X86_AT(c, 0xd4ad3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4ab5u, "ran off the end of a function");
}
void f_000d4ba5(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d4ba5  enter 0, 0
    X86_AT(c, 0xd4ba5u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d4ba9  push ebx
    X86_AT(c, 0xd4ba9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4baa  push ecx
    X86_AT(c, 0xd4baau);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d4bab  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xd4babu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d4bae  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd4baeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d4bb1  mov ah, 0x15
    X86_AT(c, 0xd4bb1u);
    s8(c, 4, 0x15u);
    // 0d4bb3  call 0xd4fcc
    X86_AT(c, 0xd4bb3u);
    push32(c, 0xd4bb8u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4bb8u);
    X86_TICK(c, 27);
    // 0d4bb8  movzx eax, al
    X86_AT(c, 0xd4bb8u);
    c.r[0] = g8(c, 0);
    // 0d4bbb  pop ecx
    X86_AT(c, 0xd4bbbu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0d4bbc  pop ebx
    X86_AT(c, 0xd4bbcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4bbd  leave 
    X86_AT(c, 0xd4bbdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4bbe  ret 
    X86_AT(c, 0xd4bbeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4ba5u, "ran off the end of a function");
}
void f_000d4c23(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d4c23  enter 0, 0
    X86_AT(c, 0xd4c23u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d4c27  push ebx
    X86_AT(c, 0xd4c27u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4c28  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xd4c28u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d4c2b  mov ah, 0x21
    X86_AT(c, 0xd4c2bu);
    s8(c, 4, 0x21u);
    // 0d4c2d  call 0xd4fcc
    X86_AT(c, 0xd4c2du);
    push32(c, 0xd4c32u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4c32u);
    X86_TICK(c, 23);
    // 0d4c32  movzx eax, al
    X86_AT(c, 0xd4c32u);
    c.r[0] = g8(c, 0);
    // 0d4c35  pop ebx
    X86_AT(c, 0xd4c35u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4c36  leave 
    X86_AT(c, 0xd4c36u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4c37  ret 
    X86_AT(c, 0xd4c37u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4c23u, "ran off the end of a function");
}
void f_000d4c4d(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d4c4d  enter 0, 0
    X86_AT(c, 0xd4c4du);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d4c51  push edx
    X86_AT(c, 0xd4c51u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d4c52  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd4c52u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d4c55  mov ah, 0x23
    X86_AT(c, 0xd4c55u);
    s8(c, 4, 0x23u);
    // 0d4c57  call 0xd4fcc
    X86_AT(c, 0xd4c57u);
    push32(c, 0xd4c5cu); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4c5cu);
    X86_TICK(c, 23);
    // 0d4c5c  movzx eax, al
    X86_AT(c, 0xd4c5cu);
    c.r[0] = g8(c, 0);
    // 0d4c5f  pop edx
    X86_AT(c, 0xd4c5fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d4c60  leave 
    X86_AT(c, 0xd4c60u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4c61  ret 
    X86_AT(c, 0xd4c61u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4c4du, "ran off the end of a function");
}
void f_000d4cbc(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0d4cbc  enter 0, 0
    X86_AT(c, 0xd4cbcu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d4cc0  push ebx
    X86_AT(c, 0xd4cc0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4cc1  push edx
    X86_AT(c, 0xd4cc1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d4cc2  push esi
    X86_AT(c, 0xd4cc2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d4cc3  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xd4cc3u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d4cc6  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0xd4cc6u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0d4cc9  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0xd4cc9u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0d4ccc  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xd4cccu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0d4ccf  mov ah, 0x25
    X86_AT(c, 0xd4ccfu);
    s8(c, 4, 0x25u);
    // 0d4cd1  call 0xd4fcc
    X86_AT(c, 0xd4cd1u);
    push32(c, 0xd4cd6u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4cd6u);
    X86_TICK(c, 31);
    // 0d4cd6  movzx eax, al
    X86_AT(c, 0xd4cd6u);
    c.r[0] = g8(c, 0);
    // 0d4cd9  pop esi
    X86_AT(c, 0xd4cd9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d4cda  pop edx
    X86_AT(c, 0xd4cdau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d4cdb  pop ebx
    X86_AT(c, 0xd4cdbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4cdc  leave 
    X86_AT(c, 0xd4cdcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4cdd  ret 
    X86_AT(c, 0xd4cddu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4cbcu, "ran off the end of a function");
}
void f_000d4ce9(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d4ce9  enter 0, 0
    X86_AT(c, 0xd4ce9u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d4ced  push ebx
    X86_AT(c, 0xd4cedu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4cee  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xd4ceeu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d4cf1  mov ah, 0x27
    X86_AT(c, 0xd4cf1u);
    s8(c, 4, 0x27u);
    // 0d4cf3  call 0xd4fcc
    X86_AT(c, 0xd4cf3u);
    push32(c, 0xd4cf8u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4cf8u);
    X86_TICK(c, 23);
    // 0d4cf8  movzx eax, al
    X86_AT(c, 0xd4cf8u);
    c.r[0] = g8(c, 0);
    // 0d4cfb  pop ebx
    X86_AT(c, 0xd4cfbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4cfc  leave 
    X86_AT(c, 0xd4cfcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4cfd  ret 
    X86_AT(c, 0xd4cfdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4ce9u, "ran off the end of a function");
}
void f_000d4d20(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0d4d20  enter 0, 0
    X86_AT(c, 0xd4d20u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d4d24  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd4d24u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d4d27  mov dword ptr [0xb3174], eax
    X86_AT(c, 0xd4d27u);
    wr32((c.sbase[3] + (uint32_t)(0xB3174u)), c.r[0]);
    // 0d4d2c  xor eax, eax
    X86_AT(c, 0xd4d2cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d4d2e  leave 
    X86_AT(c, 0xd4d2eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4d2f  ret 
    X86_AT(c, 0xd4d2fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4d20u, "ran off the end of a function");
}
void f_000d4d30(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0d4d30  enter 0, 0
    X86_AT(c, 0xd4d30u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d4d34  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd4d34u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d4d37  mov dword ptr [0xb3178], eax
    X86_AT(c, 0xd4d37u);
    wr32((c.sbase[3] + (uint32_t)(0xB3178u)), c.r[0]);
    // 0d4d3c  xor eax, eax
    X86_AT(c, 0xd4d3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d4d3e  leave 
    X86_AT(c, 0xd4d3eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4d3f  ret 
    X86_AT(c, 0xd4d3fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4d30u, "ran off the end of a function");
}
void f_000d4d40(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d4d40  mov eax, dword ptr [0xb3174]
    X86_AT(c, 0xd4d40u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB3174u)));
    // 0d4d45  ret 
    X86_AT(c, 0xd4d45u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4d40u, "ran off the end of a function");
}
void f_000d4d46(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d4d46  mov eax, dword ptr [0xb3178]
    X86_AT(c, 0xd4d46u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB3178u)));
    // 0d4d4b  ret 
    X86_AT(c, 0xd4d4bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4d46u, "ran off the end of a function");
}
void f_000d4d4c(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0d4d4c  enter 0, 0
    X86_AT(c, 0xd4d4cu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d4d50  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd4d50u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d4d53  mov dword ptr [0xb317c], eax
    X86_AT(c, 0xd4d53u);
    wr32((c.sbase[3] + (uint32_t)(0xB317Cu)), c.r[0]);
    // 0d4d58  xor eax, eax
    X86_AT(c, 0xd4d58u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d4d5a  leave 
    X86_AT(c, 0xd4d5au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4d5b  ret 
    X86_AT(c, 0xd4d5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4d4cu, "ran off the end of a function");
}
void f_000d4d5c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d4d5c  mov eax, dword ptr [0xb317c]
    X86_AT(c, 0xd4d5cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB317Cu)));
    // 0d4d61  ret 
    X86_AT(c, 0xd4d61u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4d5cu, "ran off the end of a function");
}
void f_000d4d78(X86Cpu& c) {
    X86_TICK(c, 87);
    // 0d4d78  push es
    X86_AT(c, 0xd4d78u);
    push32(c, c.sreg[0]);
    // 0d4d79  pushal 
    X86_AT(c, 0xd4d79u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d4d7a  pushfd 
    X86_AT(c, 0xd4d7au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0d4d7b  cli 
    X86_AT(c, 0xd4d7bu);
    c.fl &= ~X86_IF;
    // 0d4d7c  mov word ptr [0xb3187], 0
    X86_AT(c, 0xd4d7cu);
    wr16((c.sbase[3] + (uint32_t)(0xB3187u)), 0x0u);
    // 0d4d85  mov byte ptr [0xb3186], 0
    X86_AT(c, 0xd4d85u);
    wr8((c.sbase[3] + (uint32_t)(0xB3186u)), 0x0u);
    // 0d4d8c  mov byte ptr [0xb3185], 0
    X86_AT(c, 0xd4d8cu);
    wr8((c.sbase[3] + (uint32_t)(0xB3185u)), 0x0u);
    // 0d4d93  lea eax, [0xd4fef]
    X86_AT(c, 0xd4d93u);
    c.r[0] = (uint32_t)(0xD4FEFu);
    // 0d4d99  mov dword ptr [0xb3174], eax
    X86_AT(c, 0xd4d99u);
    wr32((c.sbase[3] + (uint32_t)(0xB3174u)), c.r[0]);
    // 0d4d9e  mov dword ptr [0xb317c], eax
    X86_AT(c, 0xd4d9eu);
    wr32((c.sbase[3] + (uint32_t)(0xB317Cu)), c.r[0]);
    // 0d4da3  mov dword ptr [0xb3178], eax
    X86_AT(c, 0xd4da3u);
    wr32((c.sbase[3] + (uint32_t)(0xB3178u)), c.r[0]);
    // 0d4da8  mov dword ptr [0xb3180], eax
    X86_AT(c, 0xd4da8u);
    wr32((c.sbase[3] + (uint32_t)(0xB3180u)), c.r[0]);
    // 0d4dad  mov byte ptr [0xb3184], 0
    X86_AT(c, 0xd4dadu);
    wr8((c.sbase[3] + (uint32_t)(0xB3184u)), 0x0u);
    // 0d4db4  mov cl, 0x4d
    X86_AT(c, 0xd4db4u);
    s8(c, 1, 0x4Du);
    // 0d4db6  mov ax, 0x2502
    X86_AT(c, 0xd4db6u);
    s16(c, 0, 0x2502u);
    // 0d4dba  int 0x21
    X86_AT(c, 0xd4dbau);
    x86_int(c, 0x21, 0xd4dbcu);
    X86_TICK(c, 5);
    // 0d4dbc  jb 0xd4e28
    X86_AT(c, 0xd4dbcu);
    if (x86_cc(c, 2)) { goto L_d4e28; }
    X86_TICK(c, 47);
    // 0d4dc2  mov eax, es
    X86_AT(c, 0xd4dc2u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 0d4dc4  mov dword ptr [0xb316a], ebx
    X86_AT(c, 0xd4dc4u);
    wr32((c.sbase[3] + (uint32_t)(0xB316Au)), c.r[3]);
    // 0d4dca  mov word ptr [0xb316e], ax
    X86_AT(c, 0xd4dcau);
    wr16((c.sbase[3] + (uint32_t)(0xB316Eu)), (c.r[0] & 0xFFFFu));
    // 0d4dd0  mov cl, 0x4d
    X86_AT(c, 0xd4dd0u);
    s8(c, 1, 0x4Du);
    // 0d4dd2  mov ax, 0x2503
    X86_AT(c, 0xd4dd2u);
    s16(c, 0, 0x2503u);
    // 0d4dd6  int 0x21
    X86_AT(c, 0xd4dd6u);
    x86_int(c, 0x21, 0xd4dd8u);
    X86_TICK(c, 5);
    // 0d4dd8  jb 0xd4e28
    X86_AT(c, 0xd4dd8u);
    if (x86_cc(c, 2)) { goto L_d4e28; }
    X86_TICK(c, 51);
    // 0d4dde  mov dword ptr [0xb3170], ebx
    X86_AT(c, 0xd4ddeu);
    wr32((c.sbase[3] + (uint32_t)(0xB3170u)), c.r[3]);
    // 0d4de4  push ds
    X86_AT(c, 0xd4de4u);
    push32(c, c.sreg[3]);
    // 0d4de5  mov eax, cs
    X86_AT(c, 0xd4de5u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 0d4de7  mov ds, eax
    X86_AT(c, 0xd4de7u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d4de9  mov cl, 0x4d
    X86_AT(c, 0xd4de9u);
    s8(c, 1, 0x4Du);
    // 0d4deb  lea edx, [0xd4e78]
    X86_AT(c, 0xd4debu);
    c.r[2] = (uint32_t)(0xD4E78u);
    // 0d4df1  mov ax, 0x2506
    X86_AT(c, 0xd4df1u);
    s16(c, 0, 0x2506u);
    // 0d4df5  int 0x21
    X86_AT(c, 0xd4df5u);
    x86_int(c, 0x21, 0xd4df7u);
    X86_TICK(c, 9);
    // 0d4df7  pop ds
    X86_AT(c, 0xd4df7u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d4df8  jb 0xd4e28
    X86_AT(c, 0xd4df8u);
    if (x86_cc(c, 2)) { goto L_d4e28; }
    X86_TICK(c, 11);
    // 0d4dfe  mov bl, 0
    X86_AT(c, 0xd4dfeu);
    s8(c, 3, 0x0u);
    // 0d4e00  mov ah, 0x15
    X86_AT(c, 0xd4e00u);
    s8(c, 4, 0x15u);
    // 0d4e02  call 0xd4fcc
    X86_AT(c, 0xd4e02u);
    push32(c, 0xd4e07u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4e07u);
    X86_TICK(c, 11);
    // 0d4e07  mov bl, 0
    X86_AT(c, 0xd4e07u);
    s8(c, 3, 0x0u);
    // 0d4e09  mov ah, 0x16
    X86_AT(c, 0xd4e09u);
    s8(c, 4, 0x16u);
    // 0d4e0b  call 0xd4fcc
    X86_AT(c, 0xd4e0bu);
    push32(c, 0xd4e10u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4e10u);
    X86_TICK(c, 19);
    // 0d4e10  in al, 0x12
    X86_AT(c, 0xd4e10u);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 0d4e12  jmp 0xd4e14
    X86_AT(c, 0xd4e12u);
    goto L_d4e14;
L_d4e14:
    X86_TICK(c, 7);
    // 0d4e14  jmp 0xd4e16
    X86_AT(c, 0xd4e14u);
    goto L_d4e16;
L_d4e16:
    X86_TICK(c, 7);
    // 0d4e16  jmp 0xd4e18
    X86_AT(c, 0xd4e16u);
    goto L_d4e18;
L_d4e18:
    X86_TICK(c, 66);
    // 0d4e18  mov dl, 0x20
    X86_AT(c, 0xd4e18u);
    s8(c, 2, 0x20u);
    // 0d4e1a  xor dl, 0xff
    X86_AT(c, 0xd4e1au);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0d4e1d  and al, dl
    X86_AT(c, 0xd4e1du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0d4e1f  out 0x12, al
    X86_AT(c, 0xd4e1fu);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 0d4e21  popfd 
    X86_AT(c, 0xd4e21u);
    x86_popfd(c, 4);
    // 0d4e22  popal 
    X86_AT(c, 0xd4e22u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d4e23  pop es
    X86_AT(c, 0xd4e23u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d4e24  xor eax, eax
    X86_AT(c, 0xd4e24u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d4e26  clc 
    X86_AT(c, 0xd4e26u);
    c.fl &= ~X86_CF;
    // 0d4e27  ret 
    X86_AT(c, 0xd4e27u);
    c.eip = pop32(c); return;
L_d4e28:
    X86_TICK(c, 48);
    // 0d4e28  popfd 
    X86_AT(c, 0xd4e28u);
    x86_popfd(c, 4);
    // 0d4e29  popal 
    X86_AT(c, 0xd4e29u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d4e2a  pop es
    X86_AT(c, 0xd4e2au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d4e2b  mov eax, 2
    X86_AT(c, 0xd4e2bu);
    c.r[0] = 0x2u;
    // 0d4e30  stc 
    X86_AT(c, 0xd4e30u);
    c.fl |= X86_CF;
    // 0d4e31  ret 
    X86_AT(c, 0xd4e31u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4d78u, "ran off the end of a function");
}
void f_000d4e32(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0d4e32  pushal 
    X86_AT(c, 0xd4e32u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d4e33  pushf 
    X86_AT(c, 0xd4e33u);
    push16(c, c.fl & 0xFFFFu);
    // 0d4e35  cli 
    X86_AT(c, 0xd4e35u);
    c.fl &= ~X86_IF;
    // 0d4e36  mov bl, 0
    X86_AT(c, 0xd4e36u);
    s8(c, 3, 0x0u);
    // 0d4e38  mov ah, 0x15
    X86_AT(c, 0xd4e38u);
    s8(c, 4, 0x15u);
    // 0d4e3a  call 0xd4fcc
    X86_AT(c, 0xd4e3au);
    push32(c, 0xd4e3fu); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4e3fu);
    X86_TICK(c, 11);
    // 0d4e3f  mov bl, 0
    X86_AT(c, 0xd4e3fu);
    s8(c, 3, 0x0u);
    // 0d4e41  mov ah, 0x16
    X86_AT(c, 0xd4e41u);
    s8(c, 4, 0x16u);
    // 0d4e43  call 0xd4fcc
    X86_AT(c, 0xd4e43u);
    push32(c, 0xd4e48u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4e48u);
    X86_TICK(c, 19);
    // 0d4e48  in al, 0x12
    X86_AT(c, 0xd4e48u);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 0d4e4a  jmp 0xd4e4c
    X86_AT(c, 0xd4e4au);
    goto L_d4e4c;
L_d4e4c:
    X86_TICK(c, 7);
    // 0d4e4c  jmp 0xd4e4e
    X86_AT(c, 0xd4e4cu);
    goto L_d4e4e;
L_d4e4e:
    X86_TICK(c, 7);
    // 0d4e4e  jmp 0xd4e50
    X86_AT(c, 0xd4e4eu);
    goto L_d4e50;
L_d4e50:
    X86_TICK(c, 71);
    // 0d4e50  or al, 0x20
    X86_AT(c, 0xd4e50u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 0d4e52  out 0x12, al
    X86_AT(c, 0xd4e52u);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 0d4e54  push ds
    X86_AT(c, 0xd4e54u);
    push32(c, c.sreg[3]);
    // 0d4e55  mov cl, 0x4d
    X86_AT(c, 0xd4e55u);
    s8(c, 1, 0x4Du);
    // 0d4e57  mov edx, dword ptr [0xb316a]
    X86_AT(c, 0xd4e57u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB316Au)));
    // 0d4e5d  mov ax, word ptr [0xb316e]
    X86_AT(c, 0xd4e5du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB316Eu))));
    // 0d4e63  mov ebx, dword ptr [0xb3170]
    X86_AT(c, 0xd4e63u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xB3170u)));
    // 0d4e69  mov ds, eax
    X86_AT(c, 0xd4e69u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d4e6b  mov ax, 0x2507
    X86_AT(c, 0xd4e6bu);
    s16(c, 0, 0x2507u);
    // 0d4e6f  int 0x21
    X86_AT(c, 0xd4e6fu);
    x86_int(c, 0x21, 0xd4e71u);
    X86_TICK(c, 46);
    // 0d4e71  xor eax, eax
    X86_AT(c, 0xd4e71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d4e73  pop ds
    X86_AT(c, 0xd4e73u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d4e74  popf 
    X86_AT(c, 0xd4e74u);
    x86_popfd(c, 2);
    // 0d4e76  popal 
    X86_AT(c, 0xd4e76u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d4e77  ret 
    X86_AT(c, 0xd4e77u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4e32u, "ran off the end of a function");
}
void f_000d4e78(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0d4e78  push eax
    X86_AT(c, 0xd4e78u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4e79  push ds
    X86_AT(c, 0xd4e79u);
    push32(c, c.sreg[3]);
    // 0d4e7a  mov ax, 0x14
    X86_AT(c, 0xd4e7au);
    s16(c, 0, 0x14u);
    // 0d4e7e  mov ds, eax
    X86_AT(c, 0xd4e7eu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d4e80  cld 
    X86_AT(c, 0xd4e80u);
    c.fl &= ~X86_DF;
    // 0d4e81  cmp word ptr [0xb3187], 0
    X86_AT(c, 0xd4e81u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB3187u))), 0x0u, 0, 2);
    // 0d4e89  jne 0xd4e9f
    X86_AT(c, 0xd4e89u);
    if (x86_cc(c, 5)) { goto L_d4e9f; }
    X86_TICK(c, 8);
    // 0d4e8b  mov dword ptr [0xb3189], esp
    X86_AT(c, 0xd4e8bu);
    wr32((c.sbase[3] + (uint32_t)(0xB3189u)), c.r[4]);
    // 0d4e91  mov word ptr [0xb318d], ss
    X86_AT(c, 0xd4e91u);
    wr16((c.sbase[3] + (uint32_t)(0xB318Du)), (uint32_t)c.sreg[2]);
    // 0d4e97  mov ss, eax
    X86_AT(c, 0xd4e97u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d4e99  lea esp, [0xb358f]
    X86_AT(c, 0xd4e99u);
    c.r[4] = (uint32_t)(0xB358Fu);
L_d4e9f:
    X86_TICK(c, 57);
    // 0d4e9f  inc word ptr [0xb3187]
    X86_AT(c, 0xd4e9fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB3187u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0d4ea6  sti 
    X86_AT(c, 0xd4ea6u);
    c.fl |= X86_IF;
    // 0d4ea7  push es
    X86_AT(c, 0xd4ea7u);
    push32(c, c.sreg[0]);
    // 0d4ea8  push fs
    X86_AT(c, 0xd4ea8u);
    push32(c, c.sreg[4]);
    // 0d4eaa  push gs
    X86_AT(c, 0xd4eaau);
    push32(c, c.sreg[5]);
    // 0d4eac  pushal 
    X86_AT(c, 0xd4eacu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d4ead  mov es, eax
    X86_AT(c, 0xd4eadu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d4eaf  mov dx, 0x4e9
    X86_AT(c, 0xd4eafu);
    s16(c, 2, 0x4E9u);
    // 0d4eb3  in al, dx
    X86_AT(c, 0xd4eb3u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0d4eb4  push eax
    X86_AT(c, 0xd4eb4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4eb5  test al, 1
    X86_AT(c, 0xd4eb5u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0d4eb7  je 0xd4f01
    X86_AT(c, 0xd4eb7u);
    if (x86_cc(c, 4)) { goto L_d4f01; }
    X86_TICK(c, 9);
    // 0d4ebd  mov ah, 0x10
    X86_AT(c, 0xd4ebdu);
    s8(c, 4, 0x10u);
    // 0d4ebf  call 0xd4fcc
    X86_AT(c, 0xd4ebfu);
    push32(c, 0xd4ec4u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4ec4u);
    X86_TICK(c, 7);
    // 0d4ec4  test dl, 1
    X86_AT(c, 0xd4ec4u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 0d4ec7  je 0xd4ed8
    X86_AT(c, 0xd4ec7u);
    if (x86_cc(c, 4)) { goto L_d4ed8; }
    X86_TICK(c, 11);
    // 0d4ec9  push edx
    X86_AT(c, 0xd4ec9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d4eca  mov ah, 0x17
    X86_AT(c, 0xd4ecau);
    s8(c, 4, 0x17u);
    // 0d4ecc  call 0xd4fcc
    X86_AT(c, 0xd4eccu);
    push32(c, 0xd4ed1u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4ed1u);
    X86_TICK(c, 7);
    // 0d4ed1  call dword ptr [0xb3174]
    X86_AT(c, 0xd4ed1u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB3174u))); push32(c, 0xd4ed7u); x86_call(c, t); X86_RET(c, 0xd4ed7u); }
    X86_TICK(c, 4);
    // 0d4ed7  pop edx
    X86_AT(c, 0xd4ed7u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_d4ed8:
    X86_TICK(c, 7);
    // 0d4ed8  test dl, 2
    X86_AT(c, 0xd4ed8u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 0d4edb  je 0xd4f01
    X86_AT(c, 0xd4edbu);
    if (x86_cc(c, 4)) { goto L_d4f01; }
    X86_TICK(c, 11);
    // 0d4edd  push edx
    X86_AT(c, 0xd4eddu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d4ede  mov ah, 0x18
    X86_AT(c, 0xd4edeu);
    s8(c, 4, 0x18u);
    // 0d4ee0  call 0xd4fcc
    X86_AT(c, 0xd4ee0u);
    push32(c, 0xd4ee5u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4ee5u);
    X86_TICK(c, 11);
    // 0d4ee5  mov byte ptr [0xb3185], 0xff
    X86_AT(c, 0xd4ee5u);
    wr8((c.sbase[3] + (uint32_t)(0xB3185u)), 0xFFu);
    // 0d4eec  mov ah, 0x50
    X86_AT(c, 0xd4eecu);
    s8(c, 4, 0x50u);
    // 0d4eee  call 0xd4fcc
    X86_AT(c, 0xd4eeeu);
    push32(c, 0xd4ef3u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4ef3u);
    X86_TICK(c, 9);
    // 0d4ef3  mov byte ptr [0xb3185], 0
    X86_AT(c, 0xd4ef3u);
    wr8((c.sbase[3] + (uint32_t)(0xB3185u)), 0x0u);
    // 0d4efa  call dword ptr [0xb3178]
    X86_AT(c, 0xd4efau);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB3178u))); push32(c, 0xd4f00u); x86_call(c, t); X86_RET(c, 0xd4f00u); }
    X86_TICK(c, 4);
    // 0d4f00  pop edx
    X86_AT(c, 0xd4f00u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_d4f01:
    X86_TICK(c, 11);
    // 0d4f01  pop eax
    X86_AT(c, 0xd4f01u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d4f02  test al, 8
    X86_AT(c, 0xd4f02u);
    (void)x86_logic(c, g8(c, 0) & 0x8u, 1);
    // 0d4f04  je 0xd4f1d
    X86_AT(c, 0xd4f04u);
    if (x86_cc(c, 4)) { goto L_d4f1d; }
    X86_TICK(c, 13);
    // 0d4f06  push edx
    X86_AT(c, 0xd4f06u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d4f07  mov byte ptr [0xb3185], 0xff
    X86_AT(c, 0xd4f07u);
    wr8((c.sbase[3] + (uint32_t)(0xB3185u)), 0xFFu);
    // 0d4f0e  mov ah, 0x51
    X86_AT(c, 0xd4f0eu);
    s8(c, 4, 0x51u);
    // 0d4f10  call 0xd4fcc
    X86_AT(c, 0xd4f10u);
    push32(c, 0xd4f15u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd4f15u);
    X86_TICK(c, 6);
    // 0d4f15  mov byte ptr [0xb3185], 0
    X86_AT(c, 0xd4f15u);
    wr8((c.sbase[3] + (uint32_t)(0xB3185u)), 0x0u);
    // 0d4f1c  pop edx
    X86_AT(c, 0xd4f1cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_d4f1d:
    X86_TICK(c, 9);
    // 0d4f1d  cli 
    X86_AT(c, 0xd4f1du);
    c.fl &= ~X86_IF;
    // 0d4f1e  call 0xd4f81
    X86_AT(c, 0xd4f1eu);
    push32(c, 0xd4f23u); x86_call_known(c, 0xd4f81u, f_000d4f81); X86_RET(c, 0xd4f23u);
    X86_TICK(c, 12);
    // 0d4f23  cmp byte ptr [0xb3186], 0
    X86_AT(c, 0xd4f23u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB3186u))), 0x0u, 0, 1);
    // 0d4f2a  jne 0xd4f5c
    X86_AT(c, 0xd4f2au);
    if (x86_cc(c, 5)) { goto L_d4f5c; }
    X86_TICK(c, 9);
    // 0d4f2c  mov byte ptr [0xb3186], 0xff
    X86_AT(c, 0xd4f2cu);
    wr8((c.sbase[3] + (uint32_t)(0xB3186u)), 0xFFu);
    // 0d4f33  test dl, 1
    X86_AT(c, 0xd4f33u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 0d4f36  je 0xd4f40
    X86_AT(c, 0xd4f36u);
    if (x86_cc(c, 4)) { goto L_d4f40; }
    X86_TICK(c, 9);
    // 0d4f38  push edx
    X86_AT(c, 0xd4f38u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d4f39  call dword ptr [0xb317c]
    X86_AT(c, 0xd4f39u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB317Cu))); push32(c, 0xd4f3fu); x86_call(c, t); X86_RET(c, 0xd4f3fu); }
    X86_TICK(c, 4);
    // 0d4f3f  pop edx
    X86_AT(c, 0xd4f3fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_d4f40:
    X86_TICK(c, 7);
    // 0d4f40  test dl, 2
    X86_AT(c, 0xd4f40u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 0d4f43  je 0xd4f54
    X86_AT(c, 0xd4f43u);
    if (x86_cc(c, 4)) { goto L_d4f54; }
    X86_TICK(c, 12);
    // 0d4f45  xor byte ptr [0xb3184], 0xff
    X86_AT(c, 0xd4f45u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB3184u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0d4f4c  je 0xd4f54
    X86_AT(c, 0xd4f4cu);
    if (x86_cc(c, 4)) { goto L_d4f54; }
    X86_TICK(c, 7);
    // 0d4f4e  call dword ptr [0xb3180]
    X86_AT(c, 0xd4f4eu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB3180u))); push32(c, 0xd4f54u); x86_call(c, t); X86_RET(c, 0xd4f54u); }
L_d4f54:
    X86_TICK(c, 4);
    // 0d4f54  cli 
    X86_AT(c, 0xd4f54u);
    c.fl &= ~X86_IF;
    // 0d4f55  mov byte ptr [0xb3186], 0
    X86_AT(c, 0xd4f55u);
    wr8((c.sbase[3] + (uint32_t)(0xB3186u)), 0x0u);
L_d4f5c:
    X86_TICK(c, 49);
    // 0d4f5c  popal 
    X86_AT(c, 0xd4f5cu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d4f5d  pop gs
    X86_AT(c, 0xd4f5du);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0d4f5f  pop fs
    X86_AT(c, 0xd4f5fu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0d4f61  pop es
    X86_AT(c, 0xd4f61u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d4f62  cli 
    X86_AT(c, 0xd4f62u);
    c.fl &= ~X86_IF;
    // 0d4f63  dec word ptr [0xb3187]
    X86_AT(c, 0xd4f63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB3187u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0d4f6a  jne 0xd4f78
    X86_AT(c, 0xd4f6au);
    if (x86_cc(c, 5)) { goto L_d4f78; }
    X86_TICK(c, 8);
    // 0d4f6c  mov esp, dword ptr [0xb3189]
    X86_AT(c, 0xd4f6cu);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0xB3189u)));
    // 0d4f72  mov ss, word ptr [0xb318d]
    X86_AT(c, 0xd4f72u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0xB318Du))) & 0xFFFFu);
L_d4f78:
    X86_TICK(c, 14);
    // 0d4f78  pop ds
    X86_AT(c, 0xd4f78u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d4f79  pop eax
    X86_AT(c, 0xd4f79u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d4f7a  iretd 
    X86_AT(c, 0xd4f7au);
    x86_iret(c, 4); return;
    x86_fault(c, 0xd4e78u, "ran off the end of a function");
}
void f_000d4f7b(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d4f7b  mov al, byte ptr [0xb3185]
    X86_AT(c, 0xd4f7bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB3185u))));
    // 0d4f80  ret 
    X86_AT(c, 0xd4f80u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4f7bu, "ran off the end of a function");
}
void f_000d4f81(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d4f81  push ax
    X86_AT(c, 0xd4f81u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d4f83  mov al, 0xb
    X86_AT(c, 0xd4f83u);
    s8(c, 0, 0xBu);
    // 0d4f85  out 0, al
    X86_AT(c, 0xd4f85u);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 0d4f87  jmp 0xd4f89
    X86_AT(c, 0xd4f87u);
    goto L_d4f89;
L_d4f89:
    X86_TICK(c, 7);
    // 0d4f89  jmp 0xd4f8b
    X86_AT(c, 0xd4f89u);
    goto L_d4f8b;
L_d4f8b:
    X86_TICK(c, 7);
    // 0d4f8b  jmp 0xd4f8d
    X86_AT(c, 0xd4f8bu);
    goto L_d4f8d;
L_d4f8d:
    X86_TICK(c, 19);
    // 0d4f8d  in al, 0
    X86_AT(c, 0xd4f8du);
    s8(c, 0, x86_in(c, 0x0u, 1));
    // 0d4f8f  jmp 0xd4f91
    X86_AT(c, 0xd4f8fu);
    goto L_d4f91;
L_d4f91:
    X86_TICK(c, 7);
    // 0d4f91  jmp 0xd4f93
    X86_AT(c, 0xd4f91u);
    goto L_d4f93;
L_d4f93:
    X86_TICK(c, 7);
    // 0d4f93  jmp 0xd4f95
    X86_AT(c, 0xd4f93u);
    goto L_d4f95;
L_d4f95:
    X86_TICK(c, 7);
    // 0d4f95  test al, 0x7f
    X86_AT(c, 0xd4f95u);
    (void)x86_logic(c, g8(c, 0) & 0x7Fu, 1);
    // 0d4f97  je 0xd4f9f
    X86_AT(c, 0xd4f97u);
    if (x86_cc(c, 4)) { goto L_d4f9f; }
    X86_TICK(c, 21);
    // 0d4f99  mov al, 0x20
    X86_AT(c, 0xd4f99u);
    s8(c, 0, 0x20u);
    // 0d4f9b  out 0, al
    X86_AT(c, 0xd4f9bu);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 0d4f9d  jmp 0xd4fc3
    X86_AT(c, 0xd4f9du);
    goto L_d4fc3;
L_d4f9f:
    X86_TICK(c, 21);
    // 0d4f9f  mov al, 0x20
    X86_AT(c, 0xd4f9fu);
    s8(c, 0, 0x20u);
    // 0d4fa1  out 0x10, al
    X86_AT(c, 0xd4fa1u);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 0d4fa3  jmp 0xd4fa5
    X86_AT(c, 0xd4fa3u);
    goto L_d4fa5;
L_d4fa5:
    X86_TICK(c, 7);
    // 0d4fa5  jmp 0xd4fa7
    X86_AT(c, 0xd4fa5u);
    goto L_d4fa7;
L_d4fa7:
    X86_TICK(c, 7);
    // 0d4fa7  jmp 0xd4fa9
    X86_AT(c, 0xd4fa7u);
    goto L_d4fa9;
L_d4fa9:
    X86_TICK(c, 21);
    // 0d4fa9  mov al, 0xb
    X86_AT(c, 0xd4fa9u);
    s8(c, 0, 0xBu);
    // 0d4fab  out 0x10, al
    X86_AT(c, 0xd4fabu);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 0d4fad  jmp 0xd4faf
    X86_AT(c, 0xd4fadu);
    goto L_d4faf;
L_d4faf:
    X86_TICK(c, 7);
    // 0d4faf  jmp 0xd4fb1
    X86_AT(c, 0xd4fafu);
    goto L_d4fb1;
L_d4fb1:
    X86_TICK(c, 7);
    // 0d4fb1  jmp 0xd4fb3
    X86_AT(c, 0xd4fb1u);
    goto L_d4fb3;
L_d4fb3:
    X86_TICK(c, 19);
    // 0d4fb3  in al, 0x10
    X86_AT(c, 0xd4fb3u);
    s8(c, 0, x86_in(c, 0x10u, 1));
    // 0d4fb5  jmp 0xd4fb7
    X86_AT(c, 0xd4fb5u);
    goto L_d4fb7;
L_d4fb7:
    X86_TICK(c, 7);
    // 0d4fb7  jmp 0xd4fb9
    X86_AT(c, 0xd4fb7u);
    goto L_d4fb9;
L_d4fb9:
    X86_TICK(c, 7);
    // 0d4fb9  jmp 0xd4fbb
    X86_AT(c, 0xd4fb9u);
    goto L_d4fbb;
L_d4fbb:
    X86_TICK(c, 7);
    // 0d4fbb  or al, al
    X86_AT(c, 0xd4fbbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 0d4fbd  jne 0xd4fc3
    X86_AT(c, 0xd4fbdu);
    if (x86_cc(c, 5)) { goto L_d4fc3; }
    X86_TICK(c, 14);
    // 0d4fbf  mov al, 0x20
    X86_AT(c, 0xd4fbfu);
    s8(c, 0, 0x20u);
    // 0d4fc1  out 0, al
    X86_AT(c, 0xd4fc1u);
    x86_out(c, 0x0u, 1, g8(c, 0));
L_d4fc3:
    X86_TICK(c, 7);
    // 0d4fc3  jmp 0xd4fc5
    X86_AT(c, 0xd4fc3u);
    goto L_d4fc5;
L_d4fc5:
    X86_TICK(c, 7);
    // 0d4fc5  jmp 0xd4fc7
    X86_AT(c, 0xd4fc5u);
    goto L_d4fc7;
L_d4fc7:
    X86_TICK(c, 7);
    // 0d4fc7  jmp 0xd4fc9
    X86_AT(c, 0xd4fc7u);
    goto L_d4fc9;
L_d4fc9:
    X86_TICK(c, 14);
    // 0d4fc9  pop ax
    X86_AT(c, 0xd4fc9u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d4fcb  ret 
    X86_AT(c, 0xd4fcbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4f81u, "ran off the end of a function");
}
void f_000d4fcc(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0d4fcc  push fs
    X86_AT(c, 0xd4fccu);
    push32(c, c.sreg[4]);
    // 0d4fce  push gs
    X86_AT(c, 0xd4fceu);
    push32(c, c.sreg[5]);
    // 0d4fd0  push edi
    X86_AT(c, 0xd4fd0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4fd1  lgs edi, fword ptr [0xb3164]
    X86_AT(c, 0xd4fd1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB3164u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 5, s); c.r[7] = o; }
    // 0d4fd8  push ax
    X86_AT(c, 0xd4fd8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d4fda  mov ax, 0x110
    X86_AT(c, 0xd4fdau);
    s16(c, 0, 0x110u);
    // 0d4fde  mov fs, eax
    X86_AT(c, 0xd4fdeu);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d4fe0  pop ax
    X86_AT(c, 0xd4fe0u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d4fe2  lcall fword ptr fs:[0x80]
    X86_AT(c, 0xd4fe2u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0xd4fe9u); }
    X86_RET(c, 0xd4fe9u);
    X86_TICK(c, 22);
    // 0d4fe9  pop edi
    X86_AT(c, 0xd4fe9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d4fea  pop gs
    X86_AT(c, 0xd4feau);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0d4fec  pop fs
    X86_AT(c, 0xd4fecu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0d4fee  ret 
    X86_AT(c, 0xd4feeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4fccu, "ran off the end of a function");
}
void f_000d4fef(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0d4fef  ret 
    X86_AT(c, 0xd4fefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4fefu, "ran off the end of a function");
}
void f_000d5050(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0d5050  enter 0, 0
    X86_AT(c, 0xd5050u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d5054  push ebx
    X86_AT(c, 0xd5054u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5055  push edx
    X86_AT(c, 0xd5055u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d5056  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xd5056u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d5059  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0xd5059u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0d505c  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0xd505cu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0d505f  mov ah, 0x43
    X86_AT(c, 0xd505fu);
    s8(c, 4, 0x43u);
    // 0d5061  call 0xd50ed
    X86_AT(c, 0xd5061u);
    push32(c, 0xd5066u); x86_call_known(c, 0xd50edu, f_000d50ed); X86_RET(c, 0xd5066u);
    X86_TICK(c, 27);
    // 0d5066  movzx eax, al
    X86_AT(c, 0xd5066u);
    c.r[0] = g8(c, 0);
    // 0d5069  pop edx
    X86_AT(c, 0xd5069u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d506a  pop ebx
    X86_AT(c, 0xd506au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d506b  leave 
    X86_AT(c, 0xd506bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d506c  ret 
    X86_AT(c, 0xd506cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5050u, "ran off the end of a function");
}
void f_000d506d(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d506d  mov ah, 0x44
    X86_AT(c, 0xd506du);
    s8(c, 4, 0x44u);
    // 0d506f  call 0xd50ed
    X86_AT(c, 0xd506fu);
    push32(c, 0xd5074u); x86_call_known(c, 0xd50edu, f_000d50ed); X86_RET(c, 0xd5074u);
    X86_TICK(c, 13);
    // 0d5074  movzx eax, al
    X86_AT(c, 0xd5074u);
    c.r[0] = g8(c, 0);
    // 0d5077  ret 
    X86_AT(c, 0xd5077u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd506du, "ran off the end of a function");
}
}

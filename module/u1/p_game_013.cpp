#include "p_game_funcs.h"
namespace p_game {
void f_000d89fa(X86Cpu& c) {
L_d89fa:
    X86_TICK(c, 11);
    // 0d89fa  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xd89fau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d89fd  cmp edx, 0xa
    X86_AT(c, 0xd89fdu);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8a00  ja 0xd89fa
    X86_AT(c, 0xd8a00u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8a02  jmp dword ptr cs:[edx*4 + 0xd8a0a]
    X86_AT(c, 0xd8a02u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD8A0Au)));
      switch (t) {
      case 0xd8a36u: goto L_d8a36;
      case 0xd8b3fu: goto L_d8b3f;
      case 0xd8c59u: goto L_d8c59;
      case 0xd8d73u: goto L_d8d73;
      case 0xd8e8du: goto L_d8e8d;
      case 0xd8faau: goto L_d8faa;
      case 0xd90c4u: goto L_d90c4;
      case 0xd9345u: goto L_d9345;
      case 0xd952du: goto L_d952d;
      case 0xd982cu: goto L_d982c;
      case 0xd98ddu: goto L_d98dd;
      default: x86_jump(c, t); return; } }
L_d8a36:
    X86_TICK(c, 11);
    // 0d8a36  push 0xe
    X86_AT(c, 0xd8a36u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8a38  push 4
    X86_AT(c, 0xd8a38u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8a3a  call 0xcac40
    X86_AT(c, 0xd8a3au);
    push32(c, 0xd8a3fu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8a3fu);
    X86_TICK(c, 2);
    // 0d8a3f  add esp, 8
    X86_AT(c, 0xd8a3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8a42:
    X86_TICK(c, 11);
    // 0d8a42  push 5
    X86_AT(c, 0xd8a42u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8a44  push 0x28
    X86_AT(c, 0xd8a44u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8a46  call 0xcc814
    X86_AT(c, 0xd8a46u);
    push32(c, 0xd8a4bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8a4bu);
    X86_TICK(c, 13);
    // 0d8a4b  push 2
    X86_AT(c, 0xd8a4bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8a4d  push esi
    X86_AT(c, 0xd8a4du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8a4e  push 4
    X86_AT(c, 0xd8a4eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8a50  call 0xc8cb8
    X86_AT(c, 0xd8a50u);
    push32(c, 0xd8a55u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8a55u);
    X86_TICK(c, 11);
    // 0d8a55  push 6
    X86_AT(c, 0xd8a55u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d8a57  push 0x34
    X86_AT(c, 0xd8a57u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8a59  call 0xcc814
    X86_AT(c, 0xd8a59u);
    push32(c, 0xd8a5eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8a5eu);
    X86_TICK(c, 40);
    // 0d8a5e  push 2
    X86_AT(c, 0xd8a5eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8a60  imul eax, edi, 0x21a
    X86_AT(c, 0xd8a60u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8a66  push dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8a66u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu))); push32(c, v); }
    // 0d8a6c  push 4
    X86_AT(c, 0xd8a6cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8a6e  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8a6eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8a71  call 0xc8cb8
    X86_AT(c, 0xd8a71u);
    push32(c, 0xd8a76u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8a76u);
    X86_TICK(c, 9);
    // 0d8a76  push 4
    X86_AT(c, 0xd8a76u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8a78  call 0xc81e4
    X86_AT(c, 0xd8a78u);
    push32(c, 0xd8a7du); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8a7du);
    X86_TICK(c, 12);
    // 0d8a7d  xchg ebx, eax
    X86_AT(c, 0xd8a7du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8a7e  add esp, 0x2c
    X86_AT(c, 0xd8a7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8a81  cmp bl, 5
    X86_AT(c, 0xd8a81u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8a84  je 0xd8ae2
    X86_AT(c, 0xd8a84u);
    if (x86_cc(c, 4)) { goto L_d8ae2; }
    X86_TICK(c, 7);
    // 0d8a86  cmp bl, 6
    X86_AT(c, 0xd8a86u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8a89  je 0xd8ae2
    X86_AT(c, 0xd8a89u);
    if (x86_cc(c, 4)) { goto L_d8ae2; }
    X86_TICK(c, 7);
    // 0d8a8b  cmp bl, 4
    X86_AT(c, 0xd8a8bu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8a8e  je 0xd8ae2
    X86_AT(c, 0xd8a8eu);
    if (x86_cc(c, 4)) { goto L_d8ae2; }
    X86_TICK(c, 7);
    // 0d8a90  cmp bl, 1
    X86_AT(c, 0xd8a90u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8a93  je 0xd8ae2
    X86_AT(c, 0xd8a93u);
    if (x86_cc(c, 4)) { goto L_d8ae2; }
    X86_TICK(c, 7);
    // 0d8a95  cmp bl, 7
    X86_AT(c, 0xd8a95u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8a98  jne 0xd8ab3
    X86_AT(c, 0xd8a98u);
    if (x86_cc(c, 5)) { goto L_d8ab3; }
    X86_TICK(c, 15);
    // 0d8a9a  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8a9au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8a9d  mov edx, dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8a9du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)));
    // 0d8aa3  cmp edx, 0x19
    X86_AT(c, 0xd8aa3u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8aa6  je 0xd8a42
    X86_AT(c, 0xd8aa6u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 7);
    // 0d8aa8  and esi, esi
    X86_AT(c, 0xd8aa8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8aaa  je 0xd8a42
    X86_AT(c, 0xd8aaau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 8);
    // 0d8aac  inc dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8aacu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8ab2  dec esi
    X86_AT(c, 0xd8ab2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8ab3:
    X86_TICK(c, 7);
    // 0d8ab3  cmp bl, 3
    X86_AT(c, 0xd8ab3u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8ab6  jne 0xd8a42
    X86_AT(c, 0xd8ab6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 33);
    // 0d8ab8  imul eax, edi, 0x21a
    X86_AT(c, 0xd8ab8u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8abe  mov edx, dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8abeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)));
    // 0d8ac4  cmp edx, 0xa
    X86_AT(c, 0xd8ac4u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8ac7  je 0xd8a42
    X86_AT(c, 0xd8ac7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 7);
    // 0d8acd  cmp esi, 0x1e
    X86_AT(c, 0xd8acdu);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8ad0  je 0xd8a42
    X86_AT(c, 0xd8ad0u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 15);
    // 0d8ad6  dec dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8ad6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8adc  inc esi
    X86_AT(c, 0xd8adcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8add  jmp 0xd8a42
    X86_AT(c, 0xd8addu);
    X86_POLL(c, 0xd8a42u); goto L_d8a42;
L_d8ae2:
    X86_TICK(c, 11);
    // 0d8ae2  push 0xb
    X86_AT(c, 0xd8ae2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8ae4  push 4
    X86_AT(c, 0xd8ae4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8ae6  call 0xcac40
    X86_AT(c, 0xd8ae6u);
    push32(c, 0xd8aebu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8aebu);
    X86_TICK(c, 11);
    // 0d8aeb  push 5
    X86_AT(c, 0xd8aebu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8aed  push 0x28
    X86_AT(c, 0xd8aedu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8aef  call 0xcc814
    X86_AT(c, 0xd8aefu);
    push32(c, 0xd8af4u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8af4u);
    X86_TICK(c, 13);
    // 0d8af4  push 2
    X86_AT(c, 0xd8af4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8af6  push esi
    X86_AT(c, 0xd8af6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8af7  push 4
    X86_AT(c, 0xd8af7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8af9  call 0xc8cb8
    X86_AT(c, 0xd8af9u);
    push32(c, 0xd8afeu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8afeu);
    X86_TICK(c, 11);
    // 0d8afe  push 6
    X86_AT(c, 0xd8afeu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d8b00  push 0x34
    X86_AT(c, 0xd8b00u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8b02  call 0xcc814
    X86_AT(c, 0xd8b02u);
    push32(c, 0xd8b07u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8b07u);
    X86_TICK(c, 38);
    // 0d8b07  push 2
    X86_AT(c, 0xd8b07u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8b09  imul eax, edi, 0x21a
    X86_AT(c, 0xd8b09u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8b0f  push dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8b0fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu))); push32(c, v); }
    // 0d8b15  push 4
    X86_AT(c, 0xd8b15u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b17  call 0xc8cb8
    X86_AT(c, 0xd8b17u);
    push32(c, 0xd8b1cu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8b1cu);
    X86_TICK(c, 9);
    // 0d8b1c  add esp, 0x30
    X86_AT(c, 0xd8b1cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8b1f  cmp bl, 1
    X86_AT(c, 0xd8b1fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8b22  je 0xd985e
    X86_AT(c, 0xd8b22u);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8b28  cmp bl, 6
    X86_AT(c, 0xd8b28u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8b2b  je 0xd8d47
    X86_AT(c, 0xd8b2bu);
    if (x86_cc(c, 4)) { goto L_d8d47; }
    X86_TICK(c, 7);
    // 0d8b31  cmp bl, 4
    X86_AT(c, 0xd8b31u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8b34  jne 0xd89fa
    X86_AT(c, 0xd8b34u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8b3a  jmp 0xd8d47
    X86_AT(c, 0xd8b3au);
    goto L_d8d47;
L_d8b3f:
    X86_TICK(c, 11);
    // 0d8b3f  push 0xe
    X86_AT(c, 0xd8b3fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8b41  push 4
    X86_AT(c, 0xd8b41u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b43  call 0xcac40
    X86_AT(c, 0xd8b43u);
    push32(c, 0xd8b48u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8b48u);
    X86_TICK(c, 2);
    // 0d8b48  add esp, 8
    X86_AT(c, 0xd8b48u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8b4b:
    X86_TICK(c, 11);
    // 0d8b4b  push 5
    X86_AT(c, 0xd8b4bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8b4d  push 0x28
    X86_AT(c, 0xd8b4du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8b4f  call 0xcc814
    X86_AT(c, 0xd8b4fu);
    push32(c, 0xd8b54u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8b54u);
    X86_TICK(c, 13);
    // 0d8b54  push 2
    X86_AT(c, 0xd8b54u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8b56  push esi
    X86_AT(c, 0xd8b56u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8b57  push 4
    X86_AT(c, 0xd8b57u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b59  call 0xc8cb8
    X86_AT(c, 0xd8b59u);
    push32(c, 0xd8b5eu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8b5eu);
    X86_TICK(c, 11);
    // 0d8b5e  push 7
    X86_AT(c, 0xd8b5eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d8b60  push 0x34
    X86_AT(c, 0xd8b60u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8b62  call 0xcc814
    X86_AT(c, 0xd8b62u);
    push32(c, 0xd8b67u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8b67u);
    X86_TICK(c, 40);
    // 0d8b67  push 2
    X86_AT(c, 0xd8b67u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8b69  imul eax, edi, 0x21a
    X86_AT(c, 0xd8b69u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8b6f  push dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8b6fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u))); push32(c, v); }
    // 0d8b75  push 4
    X86_AT(c, 0xd8b75u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b77  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8b77u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8b7a  call 0xc8cb8
    X86_AT(c, 0xd8b7au);
    push32(c, 0xd8b7fu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8b7fu);
    X86_TICK(c, 9);
    // 0d8b7f  push 4
    X86_AT(c, 0xd8b7fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b81  call 0xc81e4
    X86_AT(c, 0xd8b81u);
    push32(c, 0xd8b86u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8b86u);
    X86_TICK(c, 12);
    // 0d8b86  xchg ebx, eax
    X86_AT(c, 0xd8b86u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8b87  add esp, 0x2c
    X86_AT(c, 0xd8b87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8b8a  cmp bl, 5
    X86_AT(c, 0xd8b8au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8b8d  je 0xd8beb
    X86_AT(c, 0xd8b8du);
    if (x86_cc(c, 4)) { goto L_d8beb; }
    X86_TICK(c, 7);
    // 0d8b8f  cmp bl, 6
    X86_AT(c, 0xd8b8fu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8b92  je 0xd8beb
    X86_AT(c, 0xd8b92u);
    if (x86_cc(c, 4)) { goto L_d8beb; }
    X86_TICK(c, 7);
    // 0d8b94  cmp bl, 4
    X86_AT(c, 0xd8b94u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8b97  je 0xd8beb
    X86_AT(c, 0xd8b97u);
    if (x86_cc(c, 4)) { goto L_d8beb; }
    X86_TICK(c, 7);
    // 0d8b99  cmp bl, 1
    X86_AT(c, 0xd8b99u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8b9c  je 0xd8beb
    X86_AT(c, 0xd8b9cu);
    if (x86_cc(c, 4)) { goto L_d8beb; }
    X86_TICK(c, 7);
    // 0d8b9e  cmp bl, 7
    X86_AT(c, 0xd8b9eu);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8ba1  jne 0xd8bbc
    X86_AT(c, 0xd8ba1u);
    if (x86_cc(c, 5)) { goto L_d8bbc; }
    X86_TICK(c, 15);
    // 0d8ba3  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8ba3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8ba6  mov edx, dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8ba6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)));
    // 0d8bac  cmp edx, 0x19
    X86_AT(c, 0xd8bacu);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8baf  je 0xd8b4b
    X86_AT(c, 0xd8bafu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 7);
    // 0d8bb1  and esi, esi
    X86_AT(c, 0xd8bb1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8bb3  je 0xd8b4b
    X86_AT(c, 0xd8bb3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 8);
    // 0d8bb5  inc dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8bb5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8bbb  dec esi
    X86_AT(c, 0xd8bbbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8bbc:
    X86_TICK(c, 7);
    // 0d8bbc  cmp bl, 3
    X86_AT(c, 0xd8bbcu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8bbf  jne 0xd8b4b
    X86_AT(c, 0xd8bbfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 33);
    // 0d8bc1  imul eax, edi, 0x21a
    X86_AT(c, 0xd8bc1u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8bc7  mov edx, dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8bc7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)));
    // 0d8bcd  cmp edx, 0xa
    X86_AT(c, 0xd8bcdu);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8bd0  je 0xd8b4b
    X86_AT(c, 0xd8bd0u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 7);
    // 0d8bd6  cmp esi, 0x1e
    X86_AT(c, 0xd8bd6u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8bd9  je 0xd8b4b
    X86_AT(c, 0xd8bd9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 15);
    // 0d8bdf  dec dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8bdfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8be5  inc esi
    X86_AT(c, 0xd8be5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8be6  jmp 0xd8b4b
    X86_AT(c, 0xd8be6u);
    X86_POLL(c, 0xd8b4bu); goto L_d8b4b;
L_d8beb:
    X86_TICK(c, 11);
    // 0d8beb  push 0xb
    X86_AT(c, 0xd8bebu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8bed  push 4
    X86_AT(c, 0xd8bedu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8bef  call 0xcac40
    X86_AT(c, 0xd8befu);
    push32(c, 0xd8bf4u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8bf4u);
    X86_TICK(c, 11);
    // 0d8bf4  push 5
    X86_AT(c, 0xd8bf4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8bf6  push 0x28
    X86_AT(c, 0xd8bf6u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8bf8  call 0xcc814
    X86_AT(c, 0xd8bf8u);
    push32(c, 0xd8bfdu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8bfdu);
    X86_TICK(c, 13);
    // 0d8bfd  push 2
    X86_AT(c, 0xd8bfdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8bff  push esi
    X86_AT(c, 0xd8bffu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8c00  push 4
    X86_AT(c, 0xd8c00u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c02  call 0xc8cb8
    X86_AT(c, 0xd8c02u);
    push32(c, 0xd8c07u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8c07u);
    X86_TICK(c, 11);
    // 0d8c07  push 7
    X86_AT(c, 0xd8c07u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d8c09  push 0x34
    X86_AT(c, 0xd8c09u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8c0b  call 0xcc814
    X86_AT(c, 0xd8c0bu);
    push32(c, 0xd8c10u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8c10u);
    X86_TICK(c, 38);
    // 0d8c10  push 2
    X86_AT(c, 0xd8c10u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8c12  imul eax, edi, 0x21a
    X86_AT(c, 0xd8c12u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8c18  push dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8c18u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u))); push32(c, v); }
    // 0d8c1e  push 4
    X86_AT(c, 0xd8c1eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c20  call 0xc8cb8
    X86_AT(c, 0xd8c20u);
    push32(c, 0xd8c25u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8c25u);
    X86_TICK(c, 9);
    // 0d8c25  add esp, 0x30
    X86_AT(c, 0xd8c25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8c28  cmp bl, 5
    X86_AT(c, 0xd8c28u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8c2b  jne 0xd8c39
    X86_AT(c, 0xd8c2bu);
    if (x86_cc(c, 5)) { goto L_d8c39; }
    X86_TICK(c, 9);
    // 0d8c2d  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd8c2du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d8c34  jmp 0xd89fa
    X86_AT(c, 0xd8c34u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8c39:
    X86_TICK(c, 7);
    // 0d8c39  cmp bl, 1
    X86_AT(c, 0xd8c39u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8c3c  je 0xd985e
    X86_AT(c, 0xd8c3cu);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8c42  cmp bl, 6
    X86_AT(c, 0xd8c42u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8c45  je 0xd8e61
    X86_AT(c, 0xd8c45u);
    if (x86_cc(c, 4)) { goto L_d8e61; }
    X86_TICK(c, 7);
    // 0d8c4b  cmp bl, 4
    X86_AT(c, 0xd8c4bu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8c4e  jne 0xd89fa
    X86_AT(c, 0xd8c4eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8c54  jmp 0xd8e61
    X86_AT(c, 0xd8c54u);
    goto L_d8e61;
L_d8c59:
    X86_TICK(c, 11);
    // 0d8c59  push 0xe
    X86_AT(c, 0xd8c59u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8c5b  push 4
    X86_AT(c, 0xd8c5bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c5d  call 0xcac40
    X86_AT(c, 0xd8c5du);
    push32(c, 0xd8c62u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8c62u);
    X86_TICK(c, 2);
    // 0d8c62  add esp, 8
    X86_AT(c, 0xd8c62u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8c65:
    X86_TICK(c, 11);
    // 0d8c65  push 5
    X86_AT(c, 0xd8c65u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8c67  push 0x28
    X86_AT(c, 0xd8c67u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8c69  call 0xcc814
    X86_AT(c, 0xd8c69u);
    push32(c, 0xd8c6eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8c6eu);
    X86_TICK(c, 13);
    // 0d8c6e  push 2
    X86_AT(c, 0xd8c6eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8c70  push esi
    X86_AT(c, 0xd8c70u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8c71  push 4
    X86_AT(c, 0xd8c71u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c73  call 0xc8cb8
    X86_AT(c, 0xd8c73u);
    push32(c, 0xd8c78u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8c78u);
    X86_TICK(c, 11);
    // 0d8c78  push 8
    X86_AT(c, 0xd8c78u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d8c7a  push 0x34
    X86_AT(c, 0xd8c7au);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8c7c  call 0xcc814
    X86_AT(c, 0xd8c7cu);
    push32(c, 0xd8c81u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8c81u);
    X86_TICK(c, 40);
    // 0d8c81  push 2
    X86_AT(c, 0xd8c81u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8c83  imul eax, edi, 0x21a
    X86_AT(c, 0xd8c83u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8c89  push dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8c89u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u))); push32(c, v); }
    // 0d8c8f  push 4
    X86_AT(c, 0xd8c8fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c91  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8c91u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8c94  call 0xc8cb8
    X86_AT(c, 0xd8c94u);
    push32(c, 0xd8c99u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8c99u);
    X86_TICK(c, 9);
    // 0d8c99  push 4
    X86_AT(c, 0xd8c99u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c9b  call 0xc81e4
    X86_AT(c, 0xd8c9bu);
    push32(c, 0xd8ca0u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8ca0u);
    X86_TICK(c, 12);
    // 0d8ca0  xchg ebx, eax
    X86_AT(c, 0xd8ca0u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8ca1  add esp, 0x2c
    X86_AT(c, 0xd8ca1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8ca4  cmp bl, 5
    X86_AT(c, 0xd8ca4u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8ca7  je 0xd8d05
    X86_AT(c, 0xd8ca7u);
    if (x86_cc(c, 4)) { goto L_d8d05; }
    X86_TICK(c, 7);
    // 0d8ca9  cmp bl, 6
    X86_AT(c, 0xd8ca9u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8cac  je 0xd8d05
    X86_AT(c, 0xd8cacu);
    if (x86_cc(c, 4)) { goto L_d8d05; }
    X86_TICK(c, 7);
    // 0d8cae  cmp bl, 4
    X86_AT(c, 0xd8caeu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8cb1  je 0xd8d05
    X86_AT(c, 0xd8cb1u);
    if (x86_cc(c, 4)) { goto L_d8d05; }
    X86_TICK(c, 7);
    // 0d8cb3  cmp bl, 1
    X86_AT(c, 0xd8cb3u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8cb6  je 0xd8d05
    X86_AT(c, 0xd8cb6u);
    if (x86_cc(c, 4)) { goto L_d8d05; }
    X86_TICK(c, 7);
    // 0d8cb8  cmp bl, 7
    X86_AT(c, 0xd8cb8u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8cbb  jne 0xd8cd6
    X86_AT(c, 0xd8cbbu);
    if (x86_cc(c, 5)) { goto L_d8cd6; }
    X86_TICK(c, 15);
    // 0d8cbd  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8cbdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8cc0  mov edx, dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8cc0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u)));
    // 0d8cc6  cmp edx, 0x19
    X86_AT(c, 0xd8cc6u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8cc9  je 0xd8c65
    X86_AT(c, 0xd8cc9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 7);
    // 0d8ccb  and esi, esi
    X86_AT(c, 0xd8ccbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8ccd  je 0xd8c65
    X86_AT(c, 0xd8ccdu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 8);
    // 0d8ccf  inc dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8ccfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8cd5  dec esi
    X86_AT(c, 0xd8cd5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8cd6:
    X86_TICK(c, 7);
    // 0d8cd6  cmp bl, 3
    X86_AT(c, 0xd8cd6u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8cd9  jne 0xd8c65
    X86_AT(c, 0xd8cd9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 33);
    // 0d8cdb  imul eax, edi, 0x21a
    X86_AT(c, 0xd8cdbu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8ce1  mov edx, dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8ce1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u)));
    // 0d8ce7  cmp edx, 0xa
    X86_AT(c, 0xd8ce7u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8cea  je 0xd8c65
    X86_AT(c, 0xd8ceau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 7);
    // 0d8cf0  cmp esi, 0x1e
    X86_AT(c, 0xd8cf0u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8cf3  je 0xd8c65
    X86_AT(c, 0xd8cf3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 15);
    // 0d8cf9  dec dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8cf9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8cff  inc esi
    X86_AT(c, 0xd8cffu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8d00  jmp 0xd8c65
    X86_AT(c, 0xd8d00u);
    X86_POLL(c, 0xd8c65u); goto L_d8c65;
L_d8d05:
    X86_TICK(c, 11);
    // 0d8d05  push 0xb
    X86_AT(c, 0xd8d05u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8d07  push 4
    X86_AT(c, 0xd8d07u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d09  call 0xcac40
    X86_AT(c, 0xd8d09u);
    push32(c, 0xd8d0eu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8d0eu);
    X86_TICK(c, 11);
    // 0d8d0e  push 5
    X86_AT(c, 0xd8d0eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8d10  push 0x28
    X86_AT(c, 0xd8d10u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8d12  call 0xcc814
    X86_AT(c, 0xd8d12u);
    push32(c, 0xd8d17u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8d17u);
    X86_TICK(c, 13);
    // 0d8d17  push 2
    X86_AT(c, 0xd8d17u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8d19  push esi
    X86_AT(c, 0xd8d19u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8d1a  push 4
    X86_AT(c, 0xd8d1au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d1c  call 0xc8cb8
    X86_AT(c, 0xd8d1cu);
    push32(c, 0xd8d21u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8d21u);
    X86_TICK(c, 11);
    // 0d8d21  push 8
    X86_AT(c, 0xd8d21u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d8d23  push 0x34
    X86_AT(c, 0xd8d23u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8d25  call 0xcc814
    X86_AT(c, 0xd8d25u);
    push32(c, 0xd8d2au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8d2au);
    X86_TICK(c, 38);
    // 0d8d2a  push 2
    X86_AT(c, 0xd8d2au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8d2c  imul eax, edi, 0x21a
    X86_AT(c, 0xd8d2cu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8d32  push dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8d32u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u))); push32(c, v); }
    // 0d8d38  push 4
    X86_AT(c, 0xd8d38u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d3a  call 0xc8cb8
    X86_AT(c, 0xd8d3au);
    push32(c, 0xd8d3fu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8d3fu);
    X86_TICK(c, 9);
    // 0d8d3f  add esp, 0x30
    X86_AT(c, 0xd8d3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8d42  cmp bl, 5
    X86_AT(c, 0xd8d42u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8d45  jne 0xd8d53
    X86_AT(c, 0xd8d45u);
    if (x86_cc(c, 5)) { goto L_d8d53; }
L_d8d47:
    X86_TICK(c, 9);
    // 0d8d47  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xd8d47u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0d8d4e  jmp 0xd89fa
    X86_AT(c, 0xd8d4eu);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8d53:
    X86_TICK(c, 7);
    // 0d8d53  cmp bl, 1
    X86_AT(c, 0xd8d53u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8d56  je 0xd985e
    X86_AT(c, 0xd8d56u);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8d5c  cmp bl, 6
    X86_AT(c, 0xd8d5cu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8d5f  je 0xd8f7b
    X86_AT(c, 0xd8d5fu);
    if (x86_cc(c, 4)) { goto L_d8f7b; }
    X86_TICK(c, 7);
    // 0d8d65  cmp bl, 4
    X86_AT(c, 0xd8d65u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8d68  jne 0xd89fa
    X86_AT(c, 0xd8d68u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8d6e  jmp 0xd8f7b
    X86_AT(c, 0xd8d6eu);
    goto L_d8f7b;
L_d8d73:
    X86_TICK(c, 11);
    // 0d8d73  push 0xe
    X86_AT(c, 0xd8d73u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8d75  push 4
    X86_AT(c, 0xd8d75u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d77  call 0xcac40
    X86_AT(c, 0xd8d77u);
    push32(c, 0xd8d7cu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8d7cu);
    X86_TICK(c, 2);
    // 0d8d7c  add esp, 8
    X86_AT(c, 0xd8d7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8d7f:
    X86_TICK(c, 11);
    // 0d8d7f  push 5
    X86_AT(c, 0xd8d7fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8d81  push 0x28
    X86_AT(c, 0xd8d81u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8d83  call 0xcc814
    X86_AT(c, 0xd8d83u);
    push32(c, 0xd8d88u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8d88u);
    X86_TICK(c, 13);
    // 0d8d88  push 2
    X86_AT(c, 0xd8d88u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8d8a  push esi
    X86_AT(c, 0xd8d8au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8d8b  push 4
    X86_AT(c, 0xd8d8bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d8d  call 0xc8cb8
    X86_AT(c, 0xd8d8du);
    push32(c, 0xd8d92u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8d92u);
    X86_TICK(c, 11);
    // 0d8d92  push 9
    X86_AT(c, 0xd8d92u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d8d94  push 0x34
    X86_AT(c, 0xd8d94u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8d96  call 0xcc814
    X86_AT(c, 0xd8d96u);
    push32(c, 0xd8d9bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8d9bu);
    X86_TICK(c, 40);
    // 0d8d9b  push 2
    X86_AT(c, 0xd8d9bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8d9d  imul eax, edi, 0x21a
    X86_AT(c, 0xd8d9du);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8da3  push dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8da3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au))); push32(c, v); }
    // 0d8da9  push 4
    X86_AT(c, 0xd8da9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8dab  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8dabu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8dae  call 0xc8cb8
    X86_AT(c, 0xd8daeu);
    push32(c, 0xd8db3u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8db3u);
    X86_TICK(c, 9);
    // 0d8db3  push 4
    X86_AT(c, 0xd8db3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8db5  call 0xc81e4
    X86_AT(c, 0xd8db5u);
    push32(c, 0xd8dbau); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8dbau);
    X86_TICK(c, 12);
    // 0d8dba  xchg ebx, eax
    X86_AT(c, 0xd8dbau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8dbb  add esp, 0x2c
    X86_AT(c, 0xd8dbbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8dbe  cmp bl, 5
    X86_AT(c, 0xd8dbeu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8dc1  je 0xd8e1f
    X86_AT(c, 0xd8dc1u);
    if (x86_cc(c, 4)) { goto L_d8e1f; }
    X86_TICK(c, 7);
    // 0d8dc3  cmp bl, 6
    X86_AT(c, 0xd8dc3u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8dc6  je 0xd8e1f
    X86_AT(c, 0xd8dc6u);
    if (x86_cc(c, 4)) { goto L_d8e1f; }
    X86_TICK(c, 7);
    // 0d8dc8  cmp bl, 4
    X86_AT(c, 0xd8dc8u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8dcb  je 0xd8e1f
    X86_AT(c, 0xd8dcbu);
    if (x86_cc(c, 4)) { goto L_d8e1f; }
    X86_TICK(c, 7);
    // 0d8dcd  cmp bl, 1
    X86_AT(c, 0xd8dcdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8dd0  je 0xd8e1f
    X86_AT(c, 0xd8dd0u);
    if (x86_cc(c, 4)) { goto L_d8e1f; }
    X86_TICK(c, 7);
    // 0d8dd2  cmp bl, 7
    X86_AT(c, 0xd8dd2u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8dd5  jne 0xd8df0
    X86_AT(c, 0xd8dd5u);
    if (x86_cc(c, 5)) { goto L_d8df0; }
    X86_TICK(c, 15);
    // 0d8dd7  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8dd7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8dda  mov edx, dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8ddau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au)));
    // 0d8de0  cmp edx, 0x19
    X86_AT(c, 0xd8de0u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8de3  je 0xd8d7f
    X86_AT(c, 0xd8de3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 7);
    // 0d8de5  and esi, esi
    X86_AT(c, 0xd8de5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8de7  je 0xd8d7f
    X86_AT(c, 0xd8de7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 8);
    // 0d8de9  inc dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8de9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8def  dec esi
    X86_AT(c, 0xd8defu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8df0:
    X86_TICK(c, 7);
    // 0d8df0  cmp bl, 3
    X86_AT(c, 0xd8df0u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8df3  jne 0xd8d7f
    X86_AT(c, 0xd8df3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 33);
    // 0d8df5  imul eax, edi, 0x21a
    X86_AT(c, 0xd8df5u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8dfb  mov edx, dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8dfbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au)));
    // 0d8e01  cmp edx, 0xa
    X86_AT(c, 0xd8e01u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8e04  je 0xd8d7f
    X86_AT(c, 0xd8e04u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 7);
    // 0d8e0a  cmp esi, 0x1e
    X86_AT(c, 0xd8e0au);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8e0d  je 0xd8d7f
    X86_AT(c, 0xd8e0du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 15);
    // 0d8e13  dec dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8e13u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8e19  inc esi
    X86_AT(c, 0xd8e19u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8e1a  jmp 0xd8d7f
    X86_AT(c, 0xd8e1au);
    X86_POLL(c, 0xd8d7fu); goto L_d8d7f;
L_d8e1f:
    X86_TICK(c, 11);
    // 0d8e1f  push 0xb
    X86_AT(c, 0xd8e1fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8e21  push 4
    X86_AT(c, 0xd8e21u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8e23  call 0xcac40
    X86_AT(c, 0xd8e23u);
    push32(c, 0xd8e28u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8e28u);
    X86_TICK(c, 11);
    // 0d8e28  push 5
    X86_AT(c, 0xd8e28u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8e2a  push 0x28
    X86_AT(c, 0xd8e2au);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8e2c  call 0xcc814
    X86_AT(c, 0xd8e2cu);
    push32(c, 0xd8e31u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8e31u);
    X86_TICK(c, 13);
    // 0d8e31  push 2
    X86_AT(c, 0xd8e31u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8e33  push esi
    X86_AT(c, 0xd8e33u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8e34  push 4
    X86_AT(c, 0xd8e34u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8e36  call 0xc8cb8
    X86_AT(c, 0xd8e36u);
    push32(c, 0xd8e3bu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8e3bu);
    X86_TICK(c, 11);
    // 0d8e3b  push 9
    X86_AT(c, 0xd8e3bu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d8e3d  push 0x34
    X86_AT(c, 0xd8e3du);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8e3f  call 0xcc814
    X86_AT(c, 0xd8e3fu);
    push32(c, 0xd8e44u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8e44u);
    X86_TICK(c, 38);
    // 0d8e44  push 2
    X86_AT(c, 0xd8e44u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8e46  imul eax, edi, 0x21a
    X86_AT(c, 0xd8e46u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8e4c  push dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8e4cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au))); push32(c, v); }
    // 0d8e52  push 4
    X86_AT(c, 0xd8e52u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8e54  call 0xc8cb8
    X86_AT(c, 0xd8e54u);
    push32(c, 0xd8e59u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8e59u);
    X86_TICK(c, 9);
    // 0d8e59  add esp, 0x30
    X86_AT(c, 0xd8e59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8e5c  cmp bl, 5
    X86_AT(c, 0xd8e5cu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8e5f  jne 0xd8e6d
    X86_AT(c, 0xd8e5fu);
    if (x86_cc(c, 5)) { goto L_d8e6d; }
L_d8e61:
    X86_TICK(c, 9);
    // 0d8e61  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xd8e61u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0d8e68  jmp 0xd89fa
    X86_AT(c, 0xd8e68u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8e6d:
    X86_TICK(c, 7);
    // 0d8e6d  cmp bl, 1
    X86_AT(c, 0xd8e6du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8e70  je 0xd985e
    X86_AT(c, 0xd8e70u);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8e76  cmp bl, 6
    X86_AT(c, 0xd8e76u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8e79  je 0xd9098
    X86_AT(c, 0xd8e79u);
    if (x86_cc(c, 4)) { goto L_d9098; }
    X86_TICK(c, 7);
    // 0d8e7f  cmp bl, 4
    X86_AT(c, 0xd8e7fu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8e82  jne 0xd89fa
    X86_AT(c, 0xd8e82u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8e88  jmp 0xd9098
    X86_AT(c, 0xd8e88u);
    goto L_d9098;
L_d8e8d:
    X86_TICK(c, 11);
    // 0d8e8d  push 0xe
    X86_AT(c, 0xd8e8du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8e8f  push 4
    X86_AT(c, 0xd8e8fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8e91  call 0xcac40
    X86_AT(c, 0xd8e91u);
    push32(c, 0xd8e96u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8e96u);
    X86_TICK(c, 2);
    // 0d8e96  add esp, 8
    X86_AT(c, 0xd8e96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8e99:
    X86_TICK(c, 11);
    // 0d8e99  push 5
    X86_AT(c, 0xd8e99u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8e9b  push 0x28
    X86_AT(c, 0xd8e9bu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8e9d  call 0xcc814
    X86_AT(c, 0xd8e9du);
    push32(c, 0xd8ea2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8ea2u);
    X86_TICK(c, 13);
    // 0d8ea2  push 2
    X86_AT(c, 0xd8ea2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8ea4  push esi
    X86_AT(c, 0xd8ea4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8ea5  push 4
    X86_AT(c, 0xd8ea5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8ea7  call 0xc8cb8
    X86_AT(c, 0xd8ea7u);
    push32(c, 0xd8eacu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8eacu);
    X86_TICK(c, 11);
    // 0d8eac  push 0xa
    X86_AT(c, 0xd8eacu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d8eae  push 0x34
    X86_AT(c, 0xd8eaeu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8eb0  call 0xcc814
    X86_AT(c, 0xd8eb0u);
    push32(c, 0xd8eb5u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8eb5u);
    X86_TICK(c, 40);
    // 0d8eb5  push 2
    X86_AT(c, 0xd8eb5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8eb7  imul eax, edi, 0x21a
    X86_AT(c, 0xd8eb7u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8ebd  push dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8ebdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu))); push32(c, v); }
    // 0d8ec3  push 4
    X86_AT(c, 0xd8ec3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8ec5  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8ec5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8ec8  call 0xc8cb8
    X86_AT(c, 0xd8ec8u);
    push32(c, 0xd8ecdu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8ecdu);
    X86_TICK(c, 9);
    // 0d8ecd  push 4
    X86_AT(c, 0xd8ecdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8ecf  call 0xc81e4
    X86_AT(c, 0xd8ecfu);
    push32(c, 0xd8ed4u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8ed4u);
    X86_TICK(c, 12);
    // 0d8ed4  xchg ebx, eax
    X86_AT(c, 0xd8ed4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8ed5  add esp, 0x2c
    X86_AT(c, 0xd8ed5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8ed8  cmp bl, 5
    X86_AT(c, 0xd8ed8u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8edb  je 0xd8f39
    X86_AT(c, 0xd8edbu);
    if (x86_cc(c, 4)) { goto L_d8f39; }
    X86_TICK(c, 7);
    // 0d8edd  cmp bl, 6
    X86_AT(c, 0xd8eddu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8ee0  je 0xd8f39
    X86_AT(c, 0xd8ee0u);
    if (x86_cc(c, 4)) { goto L_d8f39; }
    X86_TICK(c, 7);
    // 0d8ee2  cmp bl, 4
    X86_AT(c, 0xd8ee2u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8ee5  je 0xd8f39
    X86_AT(c, 0xd8ee5u);
    if (x86_cc(c, 4)) { goto L_d8f39; }
    X86_TICK(c, 7);
    // 0d8ee7  cmp bl, 1
    X86_AT(c, 0xd8ee7u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8eea  je 0xd8f39
    X86_AT(c, 0xd8eeau);
    if (x86_cc(c, 4)) { goto L_d8f39; }
    X86_TICK(c, 7);
    // 0d8eec  cmp bl, 7
    X86_AT(c, 0xd8eecu);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8eef  jne 0xd8f0a
    X86_AT(c, 0xd8eefu);
    if (x86_cc(c, 5)) { goto L_d8f0a; }
    X86_TICK(c, 15);
    // 0d8ef1  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8ef1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8ef4  mov edx, dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8ef4u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)));
    // 0d8efa  cmp edx, 0x19
    X86_AT(c, 0xd8efau);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8efd  je 0xd8e99
    X86_AT(c, 0xd8efdu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 7);
    // 0d8eff  and esi, esi
    X86_AT(c, 0xd8effu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8f01  je 0xd8e99
    X86_AT(c, 0xd8f01u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 8);
    // 0d8f03  inc dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8f03u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8f09  dec esi
    X86_AT(c, 0xd8f09u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8f0a:
    X86_TICK(c, 7);
    // 0d8f0a  cmp bl, 3
    X86_AT(c, 0xd8f0au);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8f0d  jne 0xd8e99
    X86_AT(c, 0xd8f0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 33);
    // 0d8f0f  imul eax, edi, 0x21a
    X86_AT(c, 0xd8f0fu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8f15  mov edx, dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8f15u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)));
    // 0d8f1b  cmp edx, 0xa
    X86_AT(c, 0xd8f1bu);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8f1e  je 0xd8e99
    X86_AT(c, 0xd8f1eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 7);
    // 0d8f24  cmp esi, 0x1e
    X86_AT(c, 0xd8f24u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8f27  je 0xd8e99
    X86_AT(c, 0xd8f27u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 15);
    // 0d8f2d  dec dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8f2du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8f33  inc esi
    X86_AT(c, 0xd8f33u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8f34  jmp 0xd8e99
    X86_AT(c, 0xd8f34u);
    X86_POLL(c, 0xd8e99u); goto L_d8e99;
L_d8f39:
    X86_TICK(c, 11);
    // 0d8f39  push 0xb
    X86_AT(c, 0xd8f39u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8f3b  push 4
    X86_AT(c, 0xd8f3bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8f3d  call 0xcac40
    X86_AT(c, 0xd8f3du);
    push32(c, 0xd8f42u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8f42u);
    X86_TICK(c, 11);
    // 0d8f42  push 5
    X86_AT(c, 0xd8f42u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8f44  push 0x28
    X86_AT(c, 0xd8f44u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8f46  call 0xcc814
    X86_AT(c, 0xd8f46u);
    push32(c, 0xd8f4bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8f4bu);
    X86_TICK(c, 13);
    // 0d8f4b  push 2
    X86_AT(c, 0xd8f4bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8f4d  push esi
    X86_AT(c, 0xd8f4du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8f4e  push 4
    X86_AT(c, 0xd8f4eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8f50  call 0xc8cb8
    X86_AT(c, 0xd8f50u);
    push32(c, 0xd8f55u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8f55u);
    X86_TICK(c, 11);
    // 0d8f55  push 0xa
    X86_AT(c, 0xd8f55u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d8f57  push 0x34
    X86_AT(c, 0xd8f57u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8f59  call 0xcc814
    X86_AT(c, 0xd8f59u);
    push32(c, 0xd8f5eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8f5eu);
    X86_TICK(c, 38);
    // 0d8f5e  push 2
    X86_AT(c, 0xd8f5eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8f60  imul eax, edi, 0x21a
    X86_AT(c, 0xd8f60u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8f66  push dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8f66u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu))); push32(c, v); }
    // 0d8f6c  push 4
    X86_AT(c, 0xd8f6cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8f6e  call 0xc8cb8
    X86_AT(c, 0xd8f6eu);
    push32(c, 0xd8f73u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8f73u);
    X86_TICK(c, 9);
    // 0d8f73  add esp, 0x30
    X86_AT(c, 0xd8f73u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8f76  cmp bl, 5
    X86_AT(c, 0xd8f76u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8f79  jne 0xd8f87
    X86_AT(c, 0xd8f79u);
    if (x86_cc(c, 5)) { goto L_d8f87; }
L_d8f7b:
    X86_TICK(c, 9);
    // 0d8f7b  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xd8f7bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0d8f82  jmp 0xd89fa
    X86_AT(c, 0xd8f82u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8f87:
    X86_TICK(c, 7);
    // 0d8f87  cmp bl, 1
    X86_AT(c, 0xd8f87u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8f8a  je 0xd985e
    X86_AT(c, 0xd8f8au);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8f90  cmp bl, 6
    X86_AT(c, 0xd8f90u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8f93  je 0xd8f9e
    X86_AT(c, 0xd8f93u);
    if (x86_cc(c, 4)) { goto L_d8f9e; }
    X86_TICK(c, 7);
    // 0d8f95  cmp bl, 4
    X86_AT(c, 0xd8f95u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8f98  jne 0xd89fa
    X86_AT(c, 0xd8f98u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
L_d8f9e:
    X86_TICK(c, 9);
    // 0d8f9e  mov dword ptr [ebp - 4], 5
    X86_AT(c, 0xd8f9eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x5u);
    // 0d8fa5  jmp 0xd89fa
    X86_AT(c, 0xd8fa5u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8faa:
    X86_TICK(c, 11);
    // 0d8faa  push 0xe
    X86_AT(c, 0xd8faau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8fac  push 4
    X86_AT(c, 0xd8facu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8fae  call 0xcac40
    X86_AT(c, 0xd8faeu);
    push32(c, 0xd8fb3u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8fb3u);
    X86_TICK(c, 2);
    // 0d8fb3  add esp, 8
    X86_AT(c, 0xd8fb3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8fb6:
    X86_TICK(c, 11);
    // 0d8fb6  push 5
    X86_AT(c, 0xd8fb6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8fb8  push 0x28
    X86_AT(c, 0xd8fb8u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8fba  call 0xcc814
    X86_AT(c, 0xd8fbau);
    push32(c, 0xd8fbfu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8fbfu);
    X86_TICK(c, 13);
    // 0d8fbf  push 2
    X86_AT(c, 0xd8fbfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8fc1  push esi
    X86_AT(c, 0xd8fc1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8fc2  push 4
    X86_AT(c, 0xd8fc2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8fc4  call 0xc8cb8
    X86_AT(c, 0xd8fc4u);
    push32(c, 0xd8fc9u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8fc9u);
    X86_TICK(c, 11);
    // 0d8fc9  push 0xb
    X86_AT(c, 0xd8fc9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8fcb  push 0x34
    X86_AT(c, 0xd8fcbu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8fcd  call 0xcc814
    X86_AT(c, 0xd8fcdu);
    push32(c, 0xd8fd2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8fd2u);
    X86_TICK(c, 40);
    // 0d8fd2  push 2
    X86_AT(c, 0xd8fd2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8fd4  imul eax, edi, 0x21a
    X86_AT(c, 0xd8fd4u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8fda  push dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd8fdau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u))); push32(c, v); }
    // 0d8fe0  push 4
    X86_AT(c, 0xd8fe0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8fe2  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8fe2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8fe5  call 0xc8cb8
    X86_AT(c, 0xd8fe5u);
    push32(c, 0xd8feau); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8feau);
    X86_TICK(c, 9);
    // 0d8fea  push 4
    X86_AT(c, 0xd8feau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8fec  call 0xc81e4
    X86_AT(c, 0xd8fecu);
    push32(c, 0xd8ff1u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8ff1u);
    X86_TICK(c, 12);
    // 0d8ff1  xchg ebx, eax
    X86_AT(c, 0xd8ff1u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8ff2  add esp, 0x2c
    X86_AT(c, 0xd8ff2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8ff5  cmp bl, 5
    X86_AT(c, 0xd8ff5u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8ff8  je 0xd9056
    X86_AT(c, 0xd8ff8u);
    if (x86_cc(c, 4)) { goto L_d9056; }
    X86_TICK(c, 7);
    // 0d8ffa  cmp bl, 6
    X86_AT(c, 0xd8ffau);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8ffd  je 0xd9056
    X86_AT(c, 0xd8ffdu);
    if (x86_cc(c, 4)) { goto L_d9056; }
    X86_TICK(c, 7);
    // 0d8fff  cmp bl, 4
    X86_AT(c, 0xd8fffu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d9002  je 0xd9056
    X86_AT(c, 0xd9002u);
    if (x86_cc(c, 4)) { goto L_d9056; }
    X86_TICK(c, 7);
    // 0d9004  cmp bl, 1
    X86_AT(c, 0xd9004u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d9007  je 0xd9056
    X86_AT(c, 0xd9007u);
    if (x86_cc(c, 4)) { goto L_d9056; }
    X86_TICK(c, 7);
    // 0d9009  cmp bl, 7
    X86_AT(c, 0xd9009u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d900c  jne 0xd9027
    X86_AT(c, 0xd900cu);
    if (x86_cc(c, 5)) { goto L_d9027; }
    X86_TICK(c, 15);
    // 0d900e  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd900eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d9011  mov edx, dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9011u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)));
    // 0d9017  cmp edx, 0x19
    X86_AT(c, 0xd9017u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d901a  je 0xd8fb6
    X86_AT(c, 0xd901au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 7);
    // 0d901c  and esi, esi
    X86_AT(c, 0xd901cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d901e  je 0xd8fb6
    X86_AT(c, 0xd901eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 8);
    // 0d9020  inc dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9020u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d9026  dec esi
    X86_AT(c, 0xd9026u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d9027:
    X86_TICK(c, 7);
    // 0d9027  cmp bl, 3
    X86_AT(c, 0xd9027u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d902a  jne 0xd8fb6
    X86_AT(c, 0xd902au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 33);
    // 0d902c  imul eax, edi, 0x21a
    X86_AT(c, 0xd902cu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9032  mov edx, dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9032u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)));
    // 0d9038  cmp edx, 0xa
    X86_AT(c, 0xd9038u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d903b  je 0xd8fb6
    X86_AT(c, 0xd903bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 7);
    // 0d9041  cmp esi, 0x1e
    X86_AT(c, 0xd9041u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d9044  je 0xd8fb6
    X86_AT(c, 0xd9044u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 15);
    // 0d904a  dec dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd904au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d9050  inc esi
    X86_AT(c, 0xd9050u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d9051  jmp 0xd8fb6
    X86_AT(c, 0xd9051u);
    X86_POLL(c, 0xd8fb6u); goto L_d8fb6;
L_d9056:
    X86_TICK(c, 11);
    // 0d9056  push 0xb
    X86_AT(c, 0xd9056u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d9058  push 4
    X86_AT(c, 0xd9058u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d905a  call 0xcac40
    X86_AT(c, 0xd905au);
    push32(c, 0xd905fu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd905fu);
    X86_TICK(c, 11);
    // 0d905f  push 5
    X86_AT(c, 0xd905fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9061  push 0x28
    X86_AT(c, 0xd9061u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9063  call 0xcc814
    X86_AT(c, 0xd9063u);
    push32(c, 0xd9068u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9068u);
    X86_TICK(c, 13);
    // 0d9068  push 2
    X86_AT(c, 0xd9068u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d906a  push esi
    X86_AT(c, 0xd906au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d906b  push 4
    X86_AT(c, 0xd906bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d906d  call 0xc8cb8
    X86_AT(c, 0xd906du);
    push32(c, 0xd9072u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd9072u);
    X86_TICK(c, 11);
    // 0d9072  push 0xb
    X86_AT(c, 0xd9072u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d9074  push 0x34
    X86_AT(c, 0xd9074u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d9076  call 0xcc814
    X86_AT(c, 0xd9076u);
    push32(c, 0xd907bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd907bu);
    X86_TICK(c, 38);
    // 0d907b  push 2
    X86_AT(c, 0xd907bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d907d  imul eax, edi, 0x21a
    X86_AT(c, 0xd907du);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9083  push dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9083u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u))); push32(c, v); }
    // 0d9089  push 4
    X86_AT(c, 0xd9089u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d908b  call 0xc8cb8
    X86_AT(c, 0xd908bu);
    push32(c, 0xd9090u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd9090u);
    X86_TICK(c, 9);
    // 0d9090  add esp, 0x30
    X86_AT(c, 0xd9090u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d9093  cmp bl, 5
    X86_AT(c, 0xd9093u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d9096  jne 0xd90a4
    X86_AT(c, 0xd9096u);
    if (x86_cc(c, 5)) { goto L_d90a4; }
L_d9098:
    X86_TICK(c, 9);
    // 0d9098  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xd9098u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0d909f  jmp 0xd89fa
    X86_AT(c, 0xd909fu);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d90a4:
    X86_TICK(c, 7);
    // 0d90a4  cmp bl, 1
    X86_AT(c, 0xd90a4u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d90a7  je 0xd985e
    X86_AT(c, 0xd90a7u);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d90ad  cmp bl, 6
    X86_AT(c, 0xd90adu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d90b0  je 0xd9962
    X86_AT(c, 0xd90b0u);
    if (x86_cc(c, 4)) { goto L_d9962; }
    X86_TICK(c, 7);
    // 0d90b6  cmp bl, 4
    X86_AT(c, 0xd90b6u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d90b9  jne 0xd89fa
    X86_AT(c, 0xd90b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d90bf  jmp 0xd9962
    X86_AT(c, 0xd90bfu);
    goto L_d9962;
L_d90c4:
    X86_TICK(c, 27);
    // 0d90c4  push 0xa
    X86_AT(c, 0xd90c4u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d90c6  push 0xf
    X86_AT(c, 0xd90c6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d90c8  push 0xb
    X86_AT(c, 0xd90c8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d90ca  push 5
    X86_AT(c, 0xd90cau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90cc  push 0x19
    X86_AT(c, 0xd90ccu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0d90ce  push 0x54
    X86_AT(c, 0xd90ceu);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0d90d0  push 0xd0
    X86_AT(c, 0xd90d0u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d90d5  push 0x128
    X86_AT(c, 0xd90d5u);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0d90da  push 0xd0
    X86_AT(c, 0xd90dau);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d90df  push 5
    X86_AT(c, 0xd90dfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90e1  call 0xc9fbc
    X86_AT(c, 0xd90e1u);
    push32(c, 0xd90e6u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd90e6u);
    X86_TICK(c, 9);
    // 0d90e6  push 5
    X86_AT(c, 0xd90e6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90e8  call 0xca0a0
    X86_AT(c, 0xd90e8u);
    push32(c, 0xd90edu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd90edu);
    X86_TICK(c, 9);
    // 0d90ed  push 5
    X86_AT(c, 0xd90edu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90ef  call 0xca100
    X86_AT(c, 0xd90efu);
    push32(c, 0xd90f4u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd90f4u);
    X86_TICK(c, 9);
    // 0d90f4  push 5
    X86_AT(c, 0xd90f4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90f6  call 0xca0a0
    X86_AT(c, 0xd90f6u);
    push32(c, 0xd90fbu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd90fbu);
    X86_TICK(c, 13);
    // 0d90fb  push 0
    X86_AT(c, 0xd90fbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d90fd  push 4
    X86_AT(c, 0xd90fdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d90ff  push 5
    X86_AT(c, 0xd90ffu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9101  call 0xca9c8
    X86_AT(c, 0xd9101u);
    push32(c, 0xd9106u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9106u);
    X86_TICK(c, 13);
    // 0d9106  add esp, 0x40
    X86_AT(c, 0xd9106u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d9109  push 0xb3d8
    X86_AT(c, 0xd9109u);
    { uint32_t v = 0xB3D8u; push32(c, v); }
    // 0d910e  push 5
    X86_AT(c, 0xd910eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9110  call 0xc8cdc
    X86_AT(c, 0xd9110u);
    push32(c, 0xd9115u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9115u);
    X86_TICK(c, 13);
    // 0d9115  push 1
    X86_AT(c, 0xd9115u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d9117  push 6
    X86_AT(c, 0xd9117u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d9119  push 5
    X86_AT(c, 0xd9119u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d911b  call 0xca9c8
    X86_AT(c, 0xd911bu);
    push32(c, 0xd9120u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9120u);
    X86_TICK(c, 11);
    // 0d9120  push 0xb3f4
    X86_AT(c, 0xd9120u);
    { uint32_t v = 0xB3F4u; push32(c, v); }
    // 0d9125  push 5
    X86_AT(c, 0xd9125u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9127  call 0xc8cdc
    X86_AT(c, 0xd9127u);
    push32(c, 0xd912cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd912cu);
    X86_TICK(c, 13);
    // 0d912c  push 2
    X86_AT(c, 0xd912cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d912e  push 6
    X86_AT(c, 0xd912eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d9130  push 5
    X86_AT(c, 0xd9130u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9132  call 0xca9c8
    X86_AT(c, 0xd9132u);
    push32(c, 0xd9137u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9137u);
    X86_TICK(c, 11);
    // 0d9137  push 0xb40c
    X86_AT(c, 0xd9137u);
    { uint32_t v = 0xB40Cu; push32(c, v); }
    // 0d913c  push 5
    X86_AT(c, 0xd913cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d913e  call 0xc8cdc
    X86_AT(c, 0xd913eu);
    push32(c, 0xd9143u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9143u);
    X86_TICK(c, 13);
    // 0d9143  push 3
    X86_AT(c, 0xd9143u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d9145  push 6
    X86_AT(c, 0xd9145u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d9147  push 5
    X86_AT(c, 0xd9147u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9149  call 0xca9c8
    X86_AT(c, 0xd9149u);
    push32(c, 0xd914eu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd914eu);
    X86_TICK(c, 13);
    // 0d914e  add esp, 0x3c
    X86_AT(c, 0xd914eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d9151  push 0xb424
    X86_AT(c, 0xd9151u);
    { uint32_t v = 0xB424u; push32(c, v); }
    // 0d9156  push 5
    X86_AT(c, 0xd9156u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9158  call 0xc8cdc
    X86_AT(c, 0xd9158u);
    push32(c, 0xd915du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd915du);
    X86_TICK(c, 13);
    // 0d915d  push 4
    X86_AT(c, 0xd915du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d915f  push 6
    X86_AT(c, 0xd915fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d9161  push 5
    X86_AT(c, 0xd9161u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9163  call 0xca9c8
    X86_AT(c, 0xd9163u);
    push32(c, 0xd9168u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9168u);
    X86_TICK(c, 11);
    // 0d9168  push 0xb440
    X86_AT(c, 0xd9168u);
    { uint32_t v = 0xB440u; push32(c, v); }
    // 0d916d  push 5
    X86_AT(c, 0xd916du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d916f  call 0xc8cdc
    X86_AT(c, 0xd916fu);
    push32(c, 0xd9174u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9174u);
    X86_TICK(c, 9);
    // 0d9174  push 4
    X86_AT(c, 0xd9174u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9176  call 0xca0a0
    X86_AT(c, 0xd9176u);
    push32(c, 0xd917bu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd917bu);
    X86_TICK(c, 13);
    // 0d917b  add esp, 0x20
    X86_AT(c, 0xd917bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d917e  push 0xc
    X86_AT(c, 0xd917eu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d9180  push 0x28
    X86_AT(c, 0xd9180u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9182  call 0xcc814
    X86_AT(c, 0xd9182u);
    push32(c, 0xd9187u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9187u);
    X86_TICK(c, 11);
    // 0d9187  push 0xb45c
    X86_AT(c, 0xd9187u);
    { uint32_t v = 0xB45Cu; push32(c, v); }
    // 0d918c  push 4
    X86_AT(c, 0xd918cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d918e  call 0xca414
    X86_AT(c, 0xd918eu);
    push32(c, 0xd9193u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd9193u);
    X86_TICK(c, 2);
    // 0d9193  add esp, 0x10
    X86_AT(c, 0xd9193u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d9196:
    X86_TICK(c, 11);
    // 0d9196  push 0xc
    X86_AT(c, 0xd9196u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d9198  push 0x28
    X86_AT(c, 0xd9198u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d919a  call 0xcc814
    X86_AT(c, 0xd919au);
    push32(c, 0xd919fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd919fu);
    X86_TICK(c, 9);
    // 0d919f  push 4
    X86_AT(c, 0xd919fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d91a1  call 0xc79a4
    X86_AT(c, 0xd91a1u);
    push32(c, 0xd91a6u); x86_call_known(c, 0xc79a4u, f_000c79a4); X86_RET(c, 0xd91a6u);
    X86_TICK(c, 12);
    // 0d91a6  xchg ebx, eax
    X86_AT(c, 0xd91a6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d91a7  add esp, 0xc
    X86_AT(c, 0xd91a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d91aa  cmp bl, 5
    X86_AT(c, 0xd91aau);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d91ad  je 0xd929e
    X86_AT(c, 0xd91adu);
    if (x86_cc(c, 4)) { goto L_d929e; }
    X86_TICK(c, 7);
    // 0d91b3  cmp bl, 6
    X86_AT(c, 0xd91b3u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d91b6  je 0xd929e
    X86_AT(c, 0xd91b6u);
    if (x86_cc(c, 4)) { goto L_d929e; }
    X86_TICK(c, 7);
    // 0d91bc  cmp bl, 1
    X86_AT(c, 0xd91bcu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d91bf  je 0xd929e
    X86_AT(c, 0xd91bfu);
    if (x86_cc(c, 4)) { goto L_d929e; }
    X86_TICK(c, 17);
    // 0d91c5  lea eax, [ebp - 0x2d]
    X86_AT(c, 0xd91c5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD3u);
    // 0d91c8  push eax
    X86_AT(c, 0xd91c8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d91c9  push ebx
    X86_AT(c, 0xd91c9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d91ca  push 4
    X86_AT(c, 0xd91cau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d91cc  push 0xb1568
    X86_AT(c, 0xd91ccu);
    { uint32_t v = 0xB1568u; push32(c, v); }
    // 0d91d1  call 0xc8a68
    X86_AT(c, 0xd91d1u);
    push32(c, 0xd91d6u); x86_call_known(c, 0xc8a68u, f_000c8a68); X86_RET(c, 0xd91d6u);
    X86_TICK(c, 11);
    // 0d91d6  mov dword ptr [ebp - 0x40], eax
    X86_AT(c, 0xd91d6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)), c.r[0]);
    // 0d91d9  push 4
    X86_AT(c, 0xd91d9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d91db  call 0xca0a0
    X86_AT(c, 0xd91dbu);
    push32(c, 0xd91e0u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd91e0u);
    X86_TICK(c, 14);
    // 0d91e0  add esp, 0x14
    X86_AT(c, 0xd91e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d91e3  cmp dword ptr [ebp - 0x40], 0
    X86_AT(c, 0xd91e3u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u))), 0x0u, 0, 4);
    // 0d91e7  je 0xd9196
    X86_AT(c, 0xd91e7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd9196u); goto L_d9196; }
    X86_TICK(c, 11);
    // 0d91e9  push 0xc
    X86_AT(c, 0xd91e9u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d91eb  push 0x28
    X86_AT(c, 0xd91ebu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d91ed  call 0xcc814
    X86_AT(c, 0xd91edu);
    push32(c, 0xd91f2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd91f2u);
    X86_TICK(c, 14);
    // 0d91f2  push dword ptr [ebp - 0x40]
    X86_AT(c, 0xd91f2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u))); push32(c, v); }
    // 0d91f5  push 4
    X86_AT(c, 0xd91f5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d91f7  call 0xca414
    X86_AT(c, 0xd91f7u);
    push32(c, 0xd91fcu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd91fcu);
    X86_TICK(c, 27);
    // 0d91fc  sub eax, eax
    X86_AT(c, 0xd91fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d91fe  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xd91feu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0d9201  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xd9201u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 0d9204  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xd9204u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0d9207  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xd9207u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0d920a  add esp, 0x10
    X86_AT(c, 0xd920au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d920d  movzx edx, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xd920du);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)));
    // 0d9211  sub edx, 0x42
    X86_AT(c, 0xd9211u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x42u, 0, 4); }
    // 0d9214  cmp edx, 6
    X86_AT(c, 0xd9214u);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0d9217  ja 0xd929e
    X86_AT(c, 0xd9217u);
    if (x86_cc(c, 7)) { goto L_d929e; }
    X86_TICK(c, 7);
    // 0d921d  jmp dword ptr cs:[edx*4 + 0xd9225]
    X86_AT(c, 0xd921du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD9225u)));
      switch (t) {
      case 0xd9241u: goto L_d9241;
      case 0xd9257u: goto L_d9257;
      case 0xd926du: goto L_d926d;
      case 0xd9283u: goto L_d9283;
      case 0xd929eu: goto L_d929e;
      default: x86_jump(c, t); return; } }
L_d9241:
    X86_TICK(c, 33);
    // 0d9241  imul eax, edi, 0x21a
    X86_AT(c, 0xd9241u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9247  mov byte ptr [eax + 0xb0517], 0
    X86_AT(c, 0xd9247u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u)), 0x0u);
    // 0d924e  mov dword ptr [ebp - 0x28], 5
    X86_AT(c, 0xd924eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), 0x5u);
    // 0d9255  jmp 0xd929e
    X86_AT(c, 0xd9255u);
    goto L_d929e;
L_d9257:
    X86_TICK(c, 33);
    // 0d9257  imul eax, edi, 0x21a
    X86_AT(c, 0xd9257u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d925d  mov byte ptr [eax + 0xb0517], 1
    X86_AT(c, 0xd925du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u)), 0x1u);
    // 0d9264  mov dword ptr [ebp - 0x18], 5
    X86_AT(c, 0xd9264u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x5u);
    // 0d926b  jmp 0xd929e
    X86_AT(c, 0xd926bu);
    goto L_d929e;
L_d926d:
    X86_TICK(c, 33);
    // 0d926d  imul eax, edi, 0x21a
    X86_AT(c, 0xd926du);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9273  mov byte ptr [eax + 0xb0517], 2
    X86_AT(c, 0xd9273u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u)), 0x2u);
    // 0d927a  mov dword ptr [ebp - 0x10], 5
    X86_AT(c, 0xd927au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x5u);
    // 0d9281  jmp 0xd929e
    X86_AT(c, 0xd9281u);
    goto L_d929e;
L_d9283:
    X86_TICK(c, 28);
    // 0d9283  imul eax, edi, 0x21a
    X86_AT(c, 0xd9283u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9289  mov byte ptr [eax + 0xb0517], 3
    X86_AT(c, 0xd9289u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u)), 0x3u);
    // 0d9290  mov dword ptr [ebp - 0x10], 0xfffffffb
    X86_AT(c, 0xd9290u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0xFFFFFFFBu);
    // 0d9297  mov dword ptr [ebp - 0x20], 0xa
    X86_AT(c, 0xd9297u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), 0xAu);
L_d929e:
    X86_TICK(c, 7);
    // 0d929e  cmp bl, 5
    X86_AT(c, 0xd929eu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d92a1  jne 0xd92dc
    X86_AT(c, 0xd92a1u);
    if (x86_cc(c, 5)) { goto L_d92dc; }
    X86_TICK(c, 15);
    // 0d92a3  mov eax, 5
    X86_AT(c, 0xd92a3u);
    c.r[0] = 0x5u;
    // 0d92a8  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd92a8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d92ab  push 0xd
    X86_AT(c, 0xd92abu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d92ad  push eax
    X86_AT(c, 0xd92adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d92ae  call 0xca2d4
    X86_AT(c, 0xd92aeu);
    push32(c, 0xd92b3u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd92b3u);
    X86_TICK(c, 9);
    // 0d92b3  push 4
    X86_AT(c, 0xd92b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d92b5  call 0xca0a0
    X86_AT(c, 0xd92b5u);
    push32(c, 0xd92bau); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd92bau);
    X86_TICK(c, 11);
    // 0d92ba  push 0xc
    X86_AT(c, 0xd92bau);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d92bc  push 0x28
    X86_AT(c, 0xd92bcu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d92be  call 0xcc814
    X86_AT(c, 0xd92beu);
    push32(c, 0xd92c3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd92c3u);
    X86_TICK(c, 35);
    // 0d92c3  imul eax, edi, 0x21a
    X86_AT(c, 0xd92c3u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d92c9  add esp, 0x14
    X86_AT(c, 0xd92c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d92cc  mov al, byte ptr [eax + 0xb0517]
    X86_AT(c, 0xd92ccu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u))));
    // 0d92d2  cmp al, 3
    X86_AT(c, 0xd92d2u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d92d4  ja 0xd972f
    X86_AT(c, 0xd92d4u);
    if (x86_cc(c, 7)) { goto L_d972f; }
    X86_TICK(c, 7);
    // 0d92da  jmp 0xd9318
    X86_AT(c, 0xd92dau);
    goto L_d9318;
L_d92dc:
    X86_TICK(c, 7);
    // 0d92dc  cmp bl, 6
    X86_AT(c, 0xd92dcu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d92df  jne 0xd9327
    X86_AT(c, 0xd92dfu);
    if (x86_cc(c, 5)) { goto L_d9327; }
    X86_TICK(c, 13);
    // 0d92e1  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xd92e1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0d92e8  push 0xd
    X86_AT(c, 0xd92e8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d92ea  push 5
    X86_AT(c, 0xd92eau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d92ec  call 0xca2d4
    X86_AT(c, 0xd92ecu);
    push32(c, 0xd92f1u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd92f1u);
    X86_TICK(c, 9);
    // 0d92f1  push 4
    X86_AT(c, 0xd92f1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d92f3  call 0xca0a0
    X86_AT(c, 0xd92f3u);
    push32(c, 0xd92f8u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd92f8u);
    X86_TICK(c, 11);
    // 0d92f8  push 0xc
    X86_AT(c, 0xd92f8u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d92fa  push 0x28
    X86_AT(c, 0xd92fau);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d92fc  call 0xcc814
    X86_AT(c, 0xd92fcu);
    push32(c, 0xd9301u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9301u);
    X86_TICK(c, 35);
    // 0d9301  imul eax, edi, 0x21a
    X86_AT(c, 0xd9301u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9307  add esp, 0x14
    X86_AT(c, 0xd9307u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d930a  mov al, byte ptr [eax + 0xb0517]
    X86_AT(c, 0xd930au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u))));
    // 0d9310  cmp al, 3
    X86_AT(c, 0xd9310u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d9312  ja 0xd9962
    X86_AT(c, 0xd9312u);
    if (x86_cc(c, 7)) { goto L_d9962; }
L_d9318:
    X86_TICK(c, 15);
    // 0d9318  movzx eax, al
    X86_AT(c, 0xd9318u);
    c.r[0] = g8(c, 0);
    // 0d931b  push dword ptr [eax*4 + 0xa1e34]
    X86_AT(c, 0xd931bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E34u))); push32(c, v); }
    // 0d9322  jmp 0xd9723
    X86_AT(c, 0xd9322u);
    goto L_d9723;
L_d9327:
    X86_TICK(c, 7);
    // 0d9327  cmp bl, 1
    X86_AT(c, 0xd9327u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d932a  je 0xd97b2
    X86_AT(c, 0xd932au);
    if (x86_cc(c, 4)) { goto L_d97b2; }
    X86_TICK(c, 11);
    // 0d9330  push 0xd
    X86_AT(c, 0xd9330u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d9332  push 5
    X86_AT(c, 0xd9332u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9334  call 0xca2d4
    X86_AT(c, 0xd9334u);
    push32(c, 0xd9339u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd9339u);
    X86_TICK(c, 9);
    // 0d9339  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xd9339u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0d9340  jmp 0xd97a5
    X86_AT(c, 0xd9340u);
    goto L_d97a5;
L_d9345:
    X86_TICK(c, 27);
    // 0d9345  push 0xa
    X86_AT(c, 0xd9345u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d9347  push 0xf
    X86_AT(c, 0xd9347u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d9349  push 0xb
    X86_AT(c, 0xd9349u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d934b  push 2
    X86_AT(c, 0xd934bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d934d  push 0x19
    X86_AT(c, 0xd934du);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0d934f  push 0x34
    X86_AT(c, 0xd934fu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d9351  push 0xd0
    X86_AT(c, 0xd9351u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d9356  push 0x128
    X86_AT(c, 0xd9356u);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0d935b  push 0xd0
    X86_AT(c, 0xd935bu);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d9360  push 5
    X86_AT(c, 0xd9360u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9362  call 0xc9fbc
    X86_AT(c, 0xd9362u);
    push32(c, 0xd9367u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd9367u);
    X86_TICK(c, 9);
    // 0d9367  push 5
    X86_AT(c, 0xd9367u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9369  call 0xca0a0
    X86_AT(c, 0xd9369u);
    push32(c, 0xd936eu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd936eu);
    X86_TICK(c, 9);
    // 0d936e  push 5
    X86_AT(c, 0xd936eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9370  call 0xca100
    X86_AT(c, 0xd9370u);
    push32(c, 0xd9375u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd9375u);
    X86_TICK(c, 9);
    // 0d9375  push 5
    X86_AT(c, 0xd9375u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9377  call 0xca0a0
    X86_AT(c, 0xd9377u);
    push32(c, 0xd937cu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd937cu);
    X86_TICK(c, 13);
    // 0d937c  push 0
    X86_AT(c, 0xd937cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d937e  push 4
    X86_AT(c, 0xd937eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9380  push 5
    X86_AT(c, 0xd9380u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9382  call 0xca9c8
    X86_AT(c, 0xd9382u);
    push32(c, 0xd9387u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9387u);
    X86_TICK(c, 13);
    // 0d9387  add esp, 0x40
    X86_AT(c, 0xd9387u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d938a  push 0xb470
    X86_AT(c, 0xd938au);
    { uint32_t v = 0xB470u; push32(c, v); }
    // 0d938f  push 5
    X86_AT(c, 0xd938fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9391  call 0xc8cdc
    X86_AT(c, 0xd9391u);
    push32(c, 0xd9396u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9396u);
    X86_TICK(c, 13);
    // 0d9396  push 1
    X86_AT(c, 0xd9396u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d9398  push 6
    X86_AT(c, 0xd9398u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d939a  push 5
    X86_AT(c, 0xd939au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d939c  call 0xca9c8
    X86_AT(c, 0xd939cu);
    push32(c, 0xd93a1u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd93a1u);
    X86_TICK(c, 11);
    // 0d93a1  push 0xb488
    X86_AT(c, 0xd93a1u);
    { uint32_t v = 0xB488u; push32(c, v); }
    // 0d93a6  push 5
    X86_AT(c, 0xd93a6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d93a8  call 0xc8cdc
    X86_AT(c, 0xd93a8u);
    push32(c, 0xd93adu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd93adu);
    X86_TICK(c, 13);
    // 0d93ad  push 2
    X86_AT(c, 0xd93adu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d93af  push 6
    X86_AT(c, 0xd93afu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d93b1  push 5
    X86_AT(c, 0xd93b1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d93b3  call 0xca9c8
    X86_AT(c, 0xd93b3u);
    push32(c, 0xd93b8u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd93b8u);
    X86_TICK(c, 11);
    // 0d93b8  push 0xb4a0
    X86_AT(c, 0xd93b8u);
    { uint32_t v = 0xB4A0u; push32(c, v); }
    // 0d93bd  push 5
    X86_AT(c, 0xd93bdu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d93bf  call 0xc8cdc
    X86_AT(c, 0xd93bfu);
    push32(c, 0xd93c4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd93c4u);
    X86_TICK(c, 9);
    // 0d93c4  push 4
    X86_AT(c, 0xd93c4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d93c6  call 0xca0a0
    X86_AT(c, 0xd93c6u);
    push32(c, 0xd93cbu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd93cbu);
    X86_TICK(c, 11);
    // 0d93cb  push 0xd
    X86_AT(c, 0xd93cbu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d93cd  push 0x28
    X86_AT(c, 0xd93cdu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d93cf  call 0xcc814
    X86_AT(c, 0xd93cfu);
    push32(c, 0xd93d4u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd93d4u);
    X86_TICK(c, 13);
    // 0d93d4  add esp, 0x3c
    X86_AT(c, 0xd93d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d93d7  push 0xb4bc
    X86_AT(c, 0xd93d7u);
    { uint32_t v = 0xB4BCu; push32(c, v); }
    // 0d93dc  push 4
    X86_AT(c, 0xd93dcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d93de  call 0xca414
    X86_AT(c, 0xd93deu);
    push32(c, 0xd93e3u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd93e3u);
    X86_TICK(c, 2);
    // 0d93e3  add esp, 8
    X86_AT(c, 0xd93e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d93e6:
    X86_TICK(c, 11);
    // 0d93e6  push 0xd
    X86_AT(c, 0xd93e6u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d93e8  push 0x28
    X86_AT(c, 0xd93e8u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d93ea  call 0xcc814
    X86_AT(c, 0xd93eau);
    push32(c, 0xd93efu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd93efu);
    X86_TICK(c, 9);
    // 0d93ef  push 4
    X86_AT(c, 0xd93efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d93f1  call 0xc79a4
    X86_AT(c, 0xd93f1u);
    push32(c, 0xd93f6u); x86_call_known(c, 0xc79a4u, f_000c79a4); X86_RET(c, 0xd93f6u);
    X86_TICK(c, 12);
    // 0d93f6  xchg ebx, eax
    X86_AT(c, 0xd93f6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d93f7  add esp, 0xc
    X86_AT(c, 0xd93f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d93fa  cmp bl, 5
    X86_AT(c, 0xd93fau);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d93fd  je 0xd9486
    X86_AT(c, 0xd93fdu);
    if (x86_cc(c, 4)) { goto L_d9486; }
    X86_TICK(c, 7);
    // 0d9403  cmp bl, 6
    X86_AT(c, 0xd9403u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d9406  je 0xd9486
    X86_AT(c, 0xd9406u);
    if (x86_cc(c, 4)) { goto L_d9486; }
    X86_TICK(c, 7);
    // 0d940c  cmp bl, 1
    X86_AT(c, 0xd940cu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d940f  je 0xd9486
    X86_AT(c, 0xd940fu);
    if (x86_cc(c, 4)) { goto L_d9486; }
    X86_TICK(c, 17);
    // 0d9415  lea eax, [ebp - 0x2d]
    X86_AT(c, 0xd9415u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD3u);
    // 0d9418  push eax
    X86_AT(c, 0xd9418u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9419  push ebx
    X86_AT(c, 0xd9419u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d941a  push 3
    X86_AT(c, 0xd941au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d941c  push 0xb1988
    X86_AT(c, 0xd941cu);
    { uint32_t v = 0xB1988u; push32(c, v); }
    // 0d9421  call 0xc8a68
    X86_AT(c, 0xd9421u);
    push32(c, 0xd9426u); x86_call_known(c, 0xc8a68u, f_000c8a68); X86_RET(c, 0xd9426u);
    X86_TICK(c, 11);
    // 0d9426  mov dword ptr [ebp - 0x44], eax
    X86_AT(c, 0xd9426u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu)), c.r[0]);
    // 0d9429  add esp, 0x10
    X86_AT(c, 0xd9429u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d942c  and eax, eax
    X86_AT(c, 0xd942cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d942e  je 0xd93e6
    X86_AT(c, 0xd942eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd93e6u); goto L_d93e6; }
    X86_TICK(c, 11);
    // 0d9430  push 0xd
    X86_AT(c, 0xd9430u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d9432  push 0x28
    X86_AT(c, 0xd9432u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9434  call 0xcc814
    X86_AT(c, 0xd9434u);
    push32(c, 0xd9439u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9439u);
    X86_TICK(c, 14);
    // 0d9439  push dword ptr [ebp - 0x44]
    X86_AT(c, 0xd9439u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu))); push32(c, v); }
    // 0d943c  push 4
    X86_AT(c, 0xd943cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d943e  call 0xca414
    X86_AT(c, 0xd943eu);
    push32(c, 0xd9443u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd9443u);
    X86_TICK(c, 15);
    // 0d9443  add esp, 0x10
    X86_AT(c, 0xd9443u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d9446  movzx edx, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xd9446u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)));
    // 0d944a  cmp edx, 0x46
    X86_AT(c, 0xd944au);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0d944d  je 0xd946a
    X86_AT(c, 0xd944du);
    if (x86_cc(c, 4)) { goto L_d946a; }
    X86_TICK(c, 7);
    // 0d944f  cmp edx, 0x4d
    X86_AT(c, 0xd944fu);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0d9452  je 0xd945b
    X86_AT(c, 0xd9452u);
    if (x86_cc(c, 4)) { goto L_d945b; }
    X86_TICK(c, 7);
    // 0d9454  cmp edx, 0x4f
    X86_AT(c, 0xd9454u);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0d9457  je 0xd9479
    X86_AT(c, 0xd9457u);
    if (x86_cc(c, 4)) { goto L_d9479; }
    X86_TICK(c, 7);
    // 0d9459  jmp 0xd9486
    X86_AT(c, 0xd9459u);
    goto L_d9486;
L_d945b:
    X86_TICK(c, 31);
    // 0d945b  imul eax, edi, 0x21a
    X86_AT(c, 0xd945bu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9461  mov byte ptr [eax + 0xb0519], 0
    X86_AT(c, 0xd9461u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u)), 0x0u);
    // 0d9468  jmp 0xd9486
    X86_AT(c, 0xd9468u);
    goto L_d9486;
L_d946a:
    X86_TICK(c, 31);
    // 0d946a  imul eax, edi, 0x21a
    X86_AT(c, 0xd946au);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9470  mov byte ptr [eax + 0xb0519], 1
    X86_AT(c, 0xd9470u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u)), 0x1u);
    // 0d9477  jmp 0xd9486
    X86_AT(c, 0xd9477u);
    goto L_d9486;
L_d9479:
    X86_TICK(c, 24);
    // 0d9479  imul eax, edi, 0x21a
    X86_AT(c, 0xd9479u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d947f  mov byte ptr [eax + 0xb0519], 2
    X86_AT(c, 0xd947fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u)), 0x2u);
L_d9486:
    X86_TICK(c, 7);
    // 0d9486  cmp bl, 5
    X86_AT(c, 0xd9486u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d9489  jne 0xd94d1
    X86_AT(c, 0xd9489u);
    if (x86_cc(c, 5)) { goto L_d94d1; }
    X86_TICK(c, 13);
    // 0d948b  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xd948bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0d9492  push 0xd
    X86_AT(c, 0xd9492u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d9494  push 5
    X86_AT(c, 0xd9494u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9496  call 0xca2d4
    X86_AT(c, 0xd9496u);
    push32(c, 0xd949bu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd949bu);
    X86_TICK(c, 9);
    // 0d949b  push 4
    X86_AT(c, 0xd949bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d949d  call 0xca0a0
    X86_AT(c, 0xd949du);
    push32(c, 0xd94a2u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd94a2u);
    X86_TICK(c, 11);
    // 0d94a2  push 0xd
    X86_AT(c, 0xd94a2u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d94a4  push 0x28
    X86_AT(c, 0xd94a4u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d94a6  call 0xcc814
    X86_AT(c, 0xd94a6u);
    push32(c, 0xd94abu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd94abu);
    X86_TICK(c, 35);
    // 0d94ab  imul eax, edi, 0x21a
    X86_AT(c, 0xd94abu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d94b1  add esp, 0x14
    X86_AT(c, 0xd94b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d94b4  mov al, byte ptr [eax + 0xb0519]
    X86_AT(c, 0xd94b4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u))));
    // 0d94ba  cmp al, 2
    X86_AT(c, 0xd94bau);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0d94bc  ja 0xd972f
    X86_AT(c, 0xd94bcu);
    if (x86_cc(c, 7)) { goto L_d972f; }
L_d94c2:
    X86_TICK(c, 15);
    // 0d94c2  movzx eax, al
    X86_AT(c, 0xd94c2u);
    c.r[0] = g8(c, 0);
    // 0d94c5  push dword ptr [eax*4 + 0xa1e28]
    X86_AT(c, 0xd94c5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E28u))); push32(c, v); }
    // 0d94cc  jmp 0xd9723
    X86_AT(c, 0xd94ccu);
    goto L_d9723;
L_d94d1:
    X86_TICK(c, 7);
    // 0d94d1  cmp bl, 6
    X86_AT(c, 0xd94d1u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d94d4  jne 0xd950f
    X86_AT(c, 0xd94d4u);
    if (x86_cc(c, 5)) { goto L_d950f; }
    X86_TICK(c, 13);
    // 0d94d6  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xd94d6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0d94dd  push 0xd
    X86_AT(c, 0xd94ddu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d94df  push 5
    X86_AT(c, 0xd94dfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d94e1  call 0xca2d4
    X86_AT(c, 0xd94e1u);
    push32(c, 0xd94e6u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd94e6u);
    X86_TICK(c, 9);
    // 0d94e6  push 4
    X86_AT(c, 0xd94e6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d94e8  call 0xca0a0
    X86_AT(c, 0xd94e8u);
    push32(c, 0xd94edu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd94edu);
    X86_TICK(c, 11);
    // 0d94ed  push 0xd
    X86_AT(c, 0xd94edu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d94ef  push 0x28
    X86_AT(c, 0xd94efu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d94f1  call 0xcc814
    X86_AT(c, 0xd94f1u);
    push32(c, 0xd94f6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd94f6u);
    X86_TICK(c, 35);
    // 0d94f6  imul eax, edi, 0x21a
    X86_AT(c, 0xd94f6u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d94fc  add esp, 0x14
    X86_AT(c, 0xd94fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d94ff  mov al, byte ptr [eax + 0xb0519]
    X86_AT(c, 0xd94ffu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u))));
    // 0d9505  cmp al, 2
    X86_AT(c, 0xd9505u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0d9507  ja 0xd97e4
    X86_AT(c, 0xd9507u);
    if (x86_cc(c, 7)) { goto L_d97e4; }
    X86_TICK(c, 7);
    // 0d950d  jmp 0xd94c2
    X86_AT(c, 0xd950du);
    X86_POLL(c, 0xd94c2u); goto L_d94c2;
L_d950f:
    X86_TICK(c, 7);
    // 0d950f  cmp bl, 1
    X86_AT(c, 0xd950fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d9512  je 0xd97b2
    X86_AT(c, 0xd9512u);
    if (x86_cc(c, 4)) { goto L_d97b2; }
    X86_TICK(c, 11);
    // 0d9518  push 0xd
    X86_AT(c, 0xd9518u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d951a  push 5
    X86_AT(c, 0xd951au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d951c  call 0xca2d4
    X86_AT(c, 0xd951cu);
    push32(c, 0xd9521u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd9521u);
    X86_TICK(c, 9);
    // 0d9521  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xd9521u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0d9528  jmp 0xd97a5
    X86_AT(c, 0xd9528u);
    goto L_d97a5;
L_d952d:
    X86_TICK(c, 27);
    // 0d952d  push 0xa
    X86_AT(c, 0xd952du);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d952f  push 0xf
    X86_AT(c, 0xd952fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d9531  push 0xb
    X86_AT(c, 0xd9531u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d9533  push 7
    X86_AT(c, 0xd9533u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d9535  push 0x2f
    X86_AT(c, 0xd9535u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0d9537  push 0x54
    X86_AT(c, 0xd9537u);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0d9539  push 0xd0
    X86_AT(c, 0xd9539u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d953e  push 0x128
    X86_AT(c, 0xd953eu);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0d9543  push 0xd0
    X86_AT(c, 0xd9543u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d9548  push 5
    X86_AT(c, 0xd9548u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d954a  call 0xc9fbc
    X86_AT(c, 0xd954au);
    push32(c, 0xd954fu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd954fu);
    X86_TICK(c, 9);
    // 0d954f  push 5
    X86_AT(c, 0xd954fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9551  call 0xca0a0
    X86_AT(c, 0xd9551u);
    push32(c, 0xd9556u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd9556u);
    X86_TICK(c, 9);
    // 0d9556  push 5
    X86_AT(c, 0xd9556u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9558  call 0xca100
    X86_AT(c, 0xd9558u);
    push32(c, 0xd955du); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd955du);
    X86_TICK(c, 9);
    // 0d955d  push 5
    X86_AT(c, 0xd955du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d955f  call 0xca0a0
    X86_AT(c, 0xd955fu);
    push32(c, 0xd9564u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd9564u);
    X86_TICK(c, 13);
    // 0d9564  push 0
    X86_AT(c, 0xd9564u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d9566  push 4
    X86_AT(c, 0xd9566u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9568  push 5
    X86_AT(c, 0xd9568u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d956a  call 0xca9c8
    X86_AT(c, 0xd956au);
    push32(c, 0xd956fu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd956fu);
    X86_TICK(c, 13);
    // 0d956f  add esp, 0x40
    X86_AT(c, 0xd956fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d9572  push 0xb4d0
    X86_AT(c, 0xd9572u);
    { uint32_t v = 0xB4D0u; push32(c, v); }
    // 0d9577  push 5
    X86_AT(c, 0xd9577u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9579  call 0xc8cdc
    X86_AT(c, 0xd9579u);
    push32(c, 0xd957eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd957eu);
    X86_TICK(c, 13);
    // 0d957e  push 1
    X86_AT(c, 0xd957eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d9580  push 5
    X86_AT(c, 0xd9580u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9582  push 5
    X86_AT(c, 0xd9582u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9584  call 0xca9c8
    X86_AT(c, 0xd9584u);
    push32(c, 0xd9589u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9589u);
    X86_TICK(c, 11);
    // 0d9589  push 0xb4ec
    X86_AT(c, 0xd9589u);
    { uint32_t v = 0xB4ECu; push32(c, v); }
    // 0d958e  push 5
    X86_AT(c, 0xd958eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9590  call 0xc8cdc
    X86_AT(c, 0xd9590u);
    push32(c, 0xd9595u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9595u);
    X86_TICK(c, 13);
    // 0d9595  push 2
    X86_AT(c, 0xd9595u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d9597  push 5
    X86_AT(c, 0xd9597u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9599  push 5
    X86_AT(c, 0xd9599u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d959b  call 0xca9c8
    X86_AT(c, 0xd959bu);
    push32(c, 0xd95a0u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd95a0u);
    X86_TICK(c, 11);
    // 0d95a0  push 0xb514
    X86_AT(c, 0xd95a0u);
    { uint32_t v = 0xB514u; push32(c, v); }
    // 0d95a5  push 5
    X86_AT(c, 0xd95a5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95a7  call 0xc8cdc
    X86_AT(c, 0xd95a7u);
    push32(c, 0xd95acu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd95acu);
    X86_TICK(c, 13);
    // 0d95ac  push 3
    X86_AT(c, 0xd95acu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d95ae  push 5
    X86_AT(c, 0xd95aeu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95b0  push 5
    X86_AT(c, 0xd95b0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95b2  call 0xca9c8
    X86_AT(c, 0xd95b2u);
    push32(c, 0xd95b7u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd95b7u);
    X86_TICK(c, 13);
    // 0d95b7  add esp, 0x3c
    X86_AT(c, 0xd95b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d95ba  push 0xb53c
    X86_AT(c, 0xd95bau);
    { uint32_t v = 0xB53Cu; push32(c, v); }
    // 0d95bf  push 5
    X86_AT(c, 0xd95bfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95c1  call 0xc8cdc
    X86_AT(c, 0xd95c1u);
    push32(c, 0xd95c6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd95c6u);
    X86_TICK(c, 13);
    // 0d95c6  push 4
    X86_AT(c, 0xd95c6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d95c8  push 5
    X86_AT(c, 0xd95c8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95ca  push 5
    X86_AT(c, 0xd95cau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95cc  call 0xca9c8
    X86_AT(c, 0xd95ccu);
    push32(c, 0xd95d1u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd95d1u);
    X86_TICK(c, 11);
    // 0d95d1  push 0xb564
    X86_AT(c, 0xd95d1u);
    { uint32_t v = 0xB564u; push32(c, v); }
    // 0d95d6  push 5
    X86_AT(c, 0xd95d6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95d8  call 0xc8cdc
    X86_AT(c, 0xd95d8u);
    push32(c, 0xd95ddu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd95ddu);
    X86_TICK(c, 9);
    // 0d95dd  push 4
    X86_AT(c, 0xd95ddu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d95df  call 0xca0a0
    X86_AT(c, 0xd95dfu);
    push32(c, 0xd95e4u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd95e4u);
    X86_TICK(c, 13);
    // 0d95e4  add esp, 0x20
    X86_AT(c, 0xd95e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d95e7  push 0xe
    X86_AT(c, 0xd95e7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d95e9  push 0x28
    X86_AT(c, 0xd95e9u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d95eb  call 0xcc814
    X86_AT(c, 0xd95ebu);
    push32(c, 0xd95f0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd95f0u);
    X86_TICK(c, 11);
    // 0d95f0  push 0xb58c
    X86_AT(c, 0xd95f0u);
    { uint32_t v = 0xB58Cu; push32(c, v); }
    // 0d95f5  push 4
    X86_AT(c, 0xd95f5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d95f7  call 0xca414
    X86_AT(c, 0xd95f7u);
    push32(c, 0xd95fcu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd95fcu);
    X86_TICK(c, 2);
    // 0d95fc  add esp, 0x10
    X86_AT(c, 0xd95fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d95ff:
    X86_TICK(c, 11);
    // 0d95ff  push 0xe
    X86_AT(c, 0xd95ffu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d9601  push 0x28
    X86_AT(c, 0xd9601u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9603  call 0xcc814
    X86_AT(c, 0xd9603u);
    push32(c, 0xd9608u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9608u);
    X86_TICK(c, 9);
    // 0d9608  push 4
    X86_AT(c, 0xd9608u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d960a  call 0xc79a4
    X86_AT(c, 0xd960au);
    push32(c, 0xd960fu); x86_call_known(c, 0xc79a4u, f_000c79a4); X86_RET(c, 0xd960fu);
    X86_TICK(c, 12);
    // 0d960f  xchg ebx, eax
    X86_AT(c, 0xd960fu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d9610  add esp, 0xc
    X86_AT(c, 0xd9610u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d9613  cmp bl, 5
    X86_AT(c, 0xd9613u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d9616  je 0xd96e1
    X86_AT(c, 0xd9616u);
    if (x86_cc(c, 4)) { goto L_d96e1; }
    X86_TICK(c, 7);
    // 0d961c  cmp bl, 6
    X86_AT(c, 0xd961cu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d961f  je 0xd96e1
    X86_AT(c, 0xd961fu);
    if (x86_cc(c, 4)) { goto L_d96e1; }
    X86_TICK(c, 7);
    // 0d9625  cmp bl, 1
    X86_AT(c, 0xd9625u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d9628  je 0xd96e1
    X86_AT(c, 0xd9628u);
    if (x86_cc(c, 4)) { goto L_d96e1; }
    X86_TICK(c, 17);
    // 0d962e  lea eax, [ebp - 0x2d]
    X86_AT(c, 0xd962eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD3u);
    // 0d9631  push eax
    X86_AT(c, 0xd9631u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9632  push ebx
    X86_AT(c, 0xd9632u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9633  push 4
    X86_AT(c, 0xd9633u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9635  push 0xb1778
    X86_AT(c, 0xd9635u);
    { uint32_t v = 0xB1778u; push32(c, v); }
    // 0d963a  call 0xc8a68
    X86_AT(c, 0xd963au);
    push32(c, 0xd963fu); x86_call_known(c, 0xc8a68u, f_000c8a68); X86_RET(c, 0xd963fu);
    X86_TICK(c, 11);
    // 0d963f  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xd963fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0d9642  add esp, 0x10
    X86_AT(c, 0xd9642u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d9645  and eax, eax
    X86_AT(c, 0xd9645u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d9647  je 0xd95ff
    X86_AT(c, 0xd9647u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd95ffu); goto L_d95ff; }
    X86_TICK(c, 11);
    // 0d9649  push 0xe
    X86_AT(c, 0xd9649u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d964b  push 0x28
    X86_AT(c, 0xd964bu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d964d  call 0xcc814
    X86_AT(c, 0xd964du);
    push32(c, 0xd9652u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9652u);
    X86_TICK(c, 14);
    // 0d9652  push dword ptr [ebp - 0x48]
    X86_AT(c, 0xd9652u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))); push32(c, v); }
    // 0d9655  push 4
    X86_AT(c, 0xd9655u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9657  call 0xca414
    X86_AT(c, 0xd9657u);
    push32(c, 0xd965cu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd965cu);
    X86_TICK(c, 25);
    // 0d965c  sub eax, eax
    X86_AT(c, 0xd965cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d965e  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xd965eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0d9661  mov dword ptr [ebp - 0x24], eax
    X86_AT(c, 0xd9661u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[0]);
    // 0d9664  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xd9664u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0d9667  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd9667u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d966a  add esp, 0x10
    X86_AT(c, 0xd966au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d966d  movzx edx, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xd966du);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)));
    // 0d9671  cmp edx, 0x43
    X86_AT(c, 0xd9671u);
    (void)x86_sub(c, c.r[2], 0x43u, 0, 4);
    // 0d9674  je 0xd96a1
    X86_AT(c, 0xd9674u);
    if (x86_cc(c, 4)) { goto L_d96a1; }
    X86_TICK(c, 7);
    // 0d9676  cmp edx, 0x46
    X86_AT(c, 0xd9676u);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0d9679  je 0xd9687
    X86_AT(c, 0xd9679u);
    if (x86_cc(c, 4)) { goto L_d9687; }
    X86_TICK(c, 7);
    // 0d967b  cmp edx, 0x54
    X86_AT(c, 0xd967bu);
    (void)x86_sub(c, c.r[2], 0x54u, 0, 4);
    // 0d967e  je 0xd96cd
    X86_AT(c, 0xd967eu);
    if (x86_cc(c, 4)) { goto L_d96cd; }
    X86_TICK(c, 7);
    // 0d9680  cmp edx, 0x57
    X86_AT(c, 0xd9680u);
    (void)x86_sub(c, c.r[2], 0x57u, 0, 4);
    // 0d9683  je 0xd96b7
    X86_AT(c, 0xd9683u);
    if (x86_cc(c, 4)) { goto L_d96b7; }
    X86_TICK(c, 7);
    // 0d9685  jmp 0xd96e1
    X86_AT(c, 0xd9685u);
    goto L_d96e1;
L_d9687:
    X86_TICK(c, 37);
    // 0d9687  imul eax, edi, 0x21a
    X86_AT(c, 0xd9687u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d968d  mov byte ptr [eax + 0xb0518], 0
    X86_AT(c, 0xd968du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u)), 0x0u);
    // 0d9694  mov eax, 0xa
    X86_AT(c, 0xd9694u);
    c.r[0] = 0xAu;
    // 0d9699  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd9699u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d969c  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xd969cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0d969f  jmp 0xd96e1
    X86_AT(c, 0xd969fu);
    goto L_d96e1;
L_d96a1:
    X86_TICK(c, 33);
    // 0d96a1  imul eax, edi, 0x21a
    X86_AT(c, 0xd96a1u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d96a7  mov byte ptr [eax + 0xb0518], 1
    X86_AT(c, 0xd96a7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u)), 0x1u);
    // 0d96ae  mov dword ptr [ebp - 0x24], 0xa
    X86_AT(c, 0xd96aeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0xAu);
    // 0d96b5  jmp 0xd96e1
    X86_AT(c, 0xd96b5u);
    goto L_d96e1;
L_d96b7:
    X86_TICK(c, 33);
    // 0d96b7  imul eax, edi, 0x21a
    X86_AT(c, 0xd96b7u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d96bd  mov byte ptr [eax + 0xb0518], 2
    X86_AT(c, 0xd96bdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u)), 0x2u);
    // 0d96c4  mov dword ptr [ebp - 0x2c], 0xa
    X86_AT(c, 0xd96c4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0xAu);
    // 0d96cb  jmp 0xd96e1
    X86_AT(c, 0xd96cbu);
    goto L_d96e1;
L_d96cd:
    X86_TICK(c, 26);
    // 0d96cd  imul eax, edi, 0x21a
    X86_AT(c, 0xd96cdu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d96d3  mov byte ptr [eax + 0xb0518], 3
    X86_AT(c, 0xd96d3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u)), 0x3u);
    // 0d96da  mov dword ptr [ebp - 0x1c], 0xa
    X86_AT(c, 0xd96dau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), 0xAu);
L_d96e1:
    X86_TICK(c, 7);
    // 0d96e1  cmp bl, 5
    X86_AT(c, 0xd96e1u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d96e4  jne 0xd973a
    X86_AT(c, 0xd96e4u);
    if (x86_cc(c, 5)) { goto L_d973a; }
    X86_TICK(c, 13);
    // 0d96e6  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xd96e6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0d96ed  push 0xd
    X86_AT(c, 0xd96edu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d96ef  push 5
    X86_AT(c, 0xd96efu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d96f1  call 0xca2d4
    X86_AT(c, 0xd96f1u);
    push32(c, 0xd96f6u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd96f6u);
    X86_TICK(c, 9);
    // 0d96f6  push 4
    X86_AT(c, 0xd96f6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d96f8  call 0xca0a0
    X86_AT(c, 0xd96f8u);
    push32(c, 0xd96fdu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd96fdu);
    X86_TICK(c, 11);
    // 0d96fd  push 0xe
    X86_AT(c, 0xd96fdu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d96ff  push 0x28
    X86_AT(c, 0xd96ffu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9701  call 0xcc814
    X86_AT(c, 0xd9701u);
    push32(c, 0xd9706u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9706u);
    X86_TICK(c, 35);
    // 0d9706  imul eax, edi, 0x21a
    X86_AT(c, 0xd9706u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d970c  add esp, 0x14
    X86_AT(c, 0xd970cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d970f  mov al, byte ptr [eax + 0xb0518]
    X86_AT(c, 0xd970fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u))));
    // 0d9715  cmp al, 3
    X86_AT(c, 0xd9715u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d9717  ja 0xd972f
    X86_AT(c, 0xd9717u);
    if (x86_cc(c, 7)) { goto L_d972f; }
    X86_TICK(c, 8);
    // 0d9719  movzx eax, al
    X86_AT(c, 0xd9719u);
    c.r[0] = g8(c, 0);
    // 0d971c  push dword ptr [eax*4 + 0xa1ed4]
    X86_AT(c, 0xd971cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1ED4u))); push32(c, v); }
L_d9723:
    X86_TICK(c, 9);
    // 0d9723  push 4
    X86_AT(c, 0xd9723u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9725  call 0xc8cdc
    X86_AT(c, 0xd9725u);
    push32(c, 0xd972au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd972au);
    X86_TICK(c, 7);
    // 0d972a  jmp 0xd97a5
    X86_AT(c, 0xd972au);
    goto L_d97a5;
L_d972f:
    X86_TICK(c, 11);
    // 0d972f  push 0x20
    X86_AT(c, 0xd972fu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0d9731  push 4
    X86_AT(c, 0xd9731u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9733  call 0xca58c
    X86_AT(c, 0xd9733u);
    push32(c, 0xd9738u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xd9738u);
    X86_TICK(c, 7);
    // 0d9738  jmp 0xd97a5
    X86_AT(c, 0xd9738u);
    goto L_d97a5;
L_d973a:
    X86_TICK(c, 7);
    // 0d973a  cmp bl, 6
    X86_AT(c, 0xd973au);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d973d  jne 0xd97ad
    X86_AT(c, 0xd973du);
    if (x86_cc(c, 5)) { goto L_d97ad; }
    X86_TICK(c, 11);
    // 0d973f  push 0xd
    X86_AT(c, 0xd973fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d9741  push 5
    X86_AT(c, 0xd9741u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9743  call 0xca2d4
    X86_AT(c, 0xd9743u);
    push32(c, 0xd9748u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd9748u);
    X86_TICK(c, 9);
    // 0d9748  push 4
    X86_AT(c, 0xd9748u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d974a  call 0xca0a0
    X86_AT(c, 0xd974au);
    push32(c, 0xd974fu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd974fu);
    X86_TICK(c, 11);
    // 0d974f  push 0xe
    X86_AT(c, 0xd974fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d9751  push 0x28
    X86_AT(c, 0xd9751u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9753  call 0xcc814
    X86_AT(c, 0xd9753u);
    push32(c, 0xd9758u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9758u);
    X86_TICK(c, 13);
    // 0d9758  add esp, 0x14
    X86_AT(c, 0xd9758u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d975b  mov eax, dword ptr [ebp - 0x48]
    X86_AT(c, 0xd975bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)));
    // 0d975e  and eax, eax
    X86_AT(c, 0xd975eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d9760  je 0xd976d
    X86_AT(c, 0xd9760u);
    if (x86_cc(c, 4)) { goto L_d976d; }
    X86_TICK(c, 11);
    // 0d9762  push eax
    X86_AT(c, 0xd9762u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9763  push 4
    X86_AT(c, 0xd9763u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9765  call 0xca414
    X86_AT(c, 0xd9765u);
    push32(c, 0xd976au); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd976au);
    X86_TICK(c, 2);
    // 0d976a  add esp, 8
    X86_AT(c, 0xd976au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d976d:
    X86_TICK(c, 11);
    // 0d976d  push 0x20
    X86_AT(c, 0xd976du);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0d976f  push 4
    X86_AT(c, 0xd976fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9771  call 0xca58c
    X86_AT(c, 0xd9771u);
    push32(c, 0xd9776u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xd9776u);
    X86_TICK(c, 35);
    // 0d9776  imul eax, edi, 0x21a
    X86_AT(c, 0xd9776u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d977c  add esp, 8
    X86_AT(c, 0xd977cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d977f  mov al, byte ptr [eax + 0xb0518]
    X86_AT(c, 0xd977fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u))));
    // 0d9785  cmp al, 3
    X86_AT(c, 0xd9785u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d9787  ja 0xd9814
    X86_AT(c, 0xd9787u);
    if (x86_cc(c, 7)) { goto L_d9814; }
    X86_TICK(c, 17);
    // 0d978d  movzx eax, al
    X86_AT(c, 0xd978du);
    c.r[0] = g8(c, 0);
    // 0d9790  push dword ptr [eax*4 + 0xa1ed4]
    X86_AT(c, 0xd9790u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1ED4u))); push32(c, v); }
    // 0d9797  push 4
    X86_AT(c, 0xd9797u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9799  call 0xc8cdc
    X86_AT(c, 0xd9799u);
    push32(c, 0xd979eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd979eu);
    X86_TICK(c, 2);
    // 0d979e  mov dword ptr [ebp - 4], 9
    X86_AT(c, 0xd979eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x9u);
L_d97a5:
    X86_TICK(c, 9);
    // 0d97a5  add esp, 8
    X86_AT(c, 0xd97a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d97a8  jmp 0xd89fa
    X86_AT(c, 0xd97a8u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d97ad:
    X86_TICK(c, 7);
    // 0d97ad  cmp bl, 1
    X86_AT(c, 0xd97adu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d97b0  jne 0xd97c8
    X86_AT(c, 0xd97b0u);
    if (x86_cc(c, 5)) { goto L_d97c8; }
L_d97b2:
    X86_TICK(c, 11);
    // 0d97b2  push 0xd
    X86_AT(c, 0xd97b2u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d97b4  push 5
    X86_AT(c, 0xd97b4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d97b6  call 0xca2d4
    X86_AT(c, 0xd97b6u);
    push32(c, 0xd97bbu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd97bbu);
    X86_TICK(c, 11);
    // 0d97bb  mov eax, 0xffffffff
    X86_AT(c, 0xd97bbu);
    c.r[0] = 0xFFFFFFFFu;
    // 0d97c0  add esp, 8
    X86_AT(c, 0xd97c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d97c3  jmp 0xd9a1b
    X86_AT(c, 0xd97c3u);
    goto L_d9a1b;
L_d97c8:
    X86_TICK(c, 11);
    // 0d97c8  push 0xd
    X86_AT(c, 0xd97c8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d97ca  push 5
    X86_AT(c, 0xd97cau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d97cc  call 0xca2d4
    X86_AT(c, 0xd97ccu);
    push32(c, 0xd97d1u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd97d1u);
    X86_TICK(c, 35);
    // 0d97d1  imul eax, edi, 0x21a
    X86_AT(c, 0xd97d1u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d97d7  add esp, 8
    X86_AT(c, 0xd97d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d97da  mov al, byte ptr [eax + 0xb0519]
    X86_AT(c, 0xd97dau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u))));
    // 0d97e0  cmp al, 3
    X86_AT(c, 0xd97e0u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d97e2  jbe 0xd97f0
    X86_AT(c, 0xd97e2u);
    if (x86_cc(c, 6)) { goto L_d97f0; }
L_d97e4:
    X86_TICK(c, 9);
    // 0d97e4  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xd97e4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0d97eb  jmp 0xd89fa
    X86_AT(c, 0xd97ebu);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d97f0:
    X86_TICK(c, 33);
    // 0d97f0  imul eax, edi, 0x21a
    X86_AT(c, 0xd97f0u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d97f6  mov al, byte ptr [eax + 0xb0517]
    X86_AT(c, 0xd97f6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u))));
    // 0d97fc  cmp al, 4
    X86_AT(c, 0xd97fcu);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 0d97fe  ja 0xd9962
    X86_AT(c, 0xd97feu);
    if (x86_cc(c, 7)) { goto L_d9962; }
    X86_TICK(c, 33);
    // 0d9804  imul eax, edi, 0x21a
    X86_AT(c, 0xd9804u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d980a  mov al, byte ptr [eax + 0xb0518]
    X86_AT(c, 0xd980au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u))));
    // 0d9810  cmp al, 4
    X86_AT(c, 0xd9810u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 0d9812  jbe 0xd9820
    X86_AT(c, 0xd9812u);
    if (x86_cc(c, 6)) { goto L_d9820; }
L_d9814:
    X86_TICK(c, 9);
    // 0d9814  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xd9814u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0d981b  jmp 0xd89fa
    X86_AT(c, 0xd981bu);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d9820:
    X86_TICK(c, 9);
    // 0d9820  mov dword ptr [ebp - 4], 9
    X86_AT(c, 0xd9820u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x9u);
    // 0d9827  jmp 0xd89fa
    X86_AT(c, 0xd9827u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d982c:
    X86_TICK(c, 11);
    // 0d982c  push 0xf
    X86_AT(c, 0xd982cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d982e  push 0x28
    X86_AT(c, 0xd982eu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9830  call 0xcc814
    X86_AT(c, 0xd9830u);
    push32(c, 0xd9835u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9835u);
    X86_TICK(c, 11);
    // 0d9835  push 0xb5a4
    X86_AT(c, 0xd9835u);
    { uint32_t v = 0xB5A4u; push32(c, v); }
    // 0d983a  push 4
    X86_AT(c, 0xd983au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d983c  call 0xca414
    X86_AT(c, 0xd983cu);
    push32(c, 0xd9841u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd9841u);
    X86_TICK(c, 11);
    // 0d9841  push 0xf
    X86_AT(c, 0xd9841u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d9843  push 0x28
    X86_AT(c, 0xd9843u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9845  call 0xcc814
    X86_AT(c, 0xd9845u);
    push32(c, 0xd984au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd984au);
    X86_TICK(c, 15);
    // 0d984a  push 0xf
    X86_AT(c, 0xd984au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d984c  lea eax, [ebp - 0x3c]
    X86_AT(c, 0xd984cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC4u);
    // 0d984f  push eax
    X86_AT(c, 0xd984fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9850  push 4
    X86_AT(c, 0xd9850u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9852  call 0xc85e4
    X86_AT(c, 0xd9852u);
    push32(c, 0xd9857u); x86_call_known(c, 0xc85e4u, f_000c85e4); X86_RET(c, 0xd9857u);
    X86_TICK(c, 9);
    // 0d9857  add esp, 0x24
    X86_AT(c, 0xd9857u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0d985a  and eax, eax
    X86_AT(c, 0xd985au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d985c  jne 0xd9868
    X86_AT(c, 0xd985cu);
    if (x86_cc(c, 5)) { goto L_d9868; }
L_d985e:
    X86_TICK(c, 9);
    // 0d985e  mov eax, 0xffffffff
    X86_AT(c, 0xd985eu);
    c.r[0] = 0xFFFFFFFFu;
    // 0d9863  jmp 0xd9a1b
    X86_AT(c, 0xd9863u);
    goto L_d9a1b;
L_d9868:
    X86_TICK(c, 2);
    // 0d9868  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xd9868u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_d986f:
    X86_TICK(c, 16);
    // 0d986f  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd986fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d9872  cmp byte ptr [ebp + eax*1 - 0x3c], 0x20
    X86_AT(c, 0xd9872u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFC4u))), 0x20u, 0, 1);
    // 0d9877  jne 0xd987e
    X86_AT(c, 0xd9877u);
    if (x86_cc(c, 5)) { goto L_d987e; }
    X86_TICK(c, 13);
    // 0d9879  inc dword ptr [ebp - 8]
    X86_AT(c, 0xd9879u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d987c  jmp 0xd986f
    X86_AT(c, 0xd987cu);
    X86_POLL(c, 0xd986fu); goto L_d986f;
L_d987e:
    X86_TICK(c, 2);
    // 0d987e  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xd987eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_d9885:
    X86_TICK(c, 45);
    // 0d9885  imul eax, edi, 0x21a
    X86_AT(c, 0xd9885u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d988b  add eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd988bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0d988e  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xd988eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d9891  mov cl, byte ptr [ebp + edx*1 - 0x3c]
    X86_AT(c, 0xd9891u);
    s8(c, 1, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[2] + 0xFFFFFFC4u))));
    // 0d9895  mov byte ptr [eax + 0xb0508], cl
    X86_AT(c, 0xd9895u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0508u)), g8(c, 1));
    // 0d989b  and cl, cl
    X86_AT(c, 0xd989bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0d989d  je 0xd98a7
    X86_AT(c, 0xd989du);
    if (x86_cc(c, 4)) { goto L_d98a7; }
    X86_TICK(c, 19);
    // 0d989f  inc dword ptr [ebp - 8]
    X86_AT(c, 0xd989fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d98a2  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xd98a2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d98a5  jmp 0xd9885
    X86_AT(c, 0xd98a5u);
    X86_POLL(c, 0xd9885u); goto L_d9885;
L_d98a7:
    X86_TICK(c, 11);
    // 0d98a7  push 0xf
    X86_AT(c, 0xd98a7u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d98a9  push 0x28
    X86_AT(c, 0xd98a9u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d98ab  call 0xcc814
    X86_AT(c, 0xd98abu);
    push32(c, 0xd98b0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd98b0u);
    X86_TICK(c, 35);
    // 0d98b0  imul eax, edi, 0x21a
    X86_AT(c, 0xd98b0u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d98b6  lea edx, [eax*1 + 0xb0508]
    X86_AT(c, 0xd98b6u);
    c.r[2] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0d98bd  push edx
    X86_AT(c, 0xd98bdu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d98be  push 4
    X86_AT(c, 0xd98beu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d98c0  call 0xca850
    X86_AT(c, 0xd98c0u);
    push32(c, 0xd98c5u); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xd98c5u);
    X86_TICK(c, 9);
    // 0d98c5  add esp, 0x10
    X86_AT(c, 0xd98c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d98c8  cmp bl, 5
    X86_AT(c, 0xd98c8u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d98cb  je 0xd9962
    X86_AT(c, 0xd98cbu);
    if (x86_cc(c, 4)) { goto L_d9962; }
    X86_TICK(c, 9);
    // 0d98d1  mov dword ptr [ebp - 4], 0xa
    X86_AT(c, 0xd98d1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xAu);
    // 0d98d8  jmp 0xd89fa
    X86_AT(c, 0xd98d8u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d98dd:
    X86_TICK(c, 11);
    // 0d98dd  push 3
    X86_AT(c, 0xd98ddu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d98df  push 0xf
    X86_AT(c, 0xd98dfu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d98e1  call 0xcc814
    X86_AT(c, 0xd98e1u);
    push32(c, 0xd98e6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd98e6u);
    X86_TICK(c, 11);
    // 0d98e6  push 0xb5c4
    X86_AT(c, 0xd98e6u);
    { uint32_t v = 0xB5C4u; push32(c, v); }
    // 0d98eb  push 4
    X86_AT(c, 0xd98ebu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d98ed  call 0xc8cdc
    X86_AT(c, 0xd98edu);
    push32(c, 0xd98f2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd98f2u);
    X86_TICK(c, 11);
    // 0d98f2  push 3
    X86_AT(c, 0xd98f2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d98f4  push 0xf
    X86_AT(c, 0xd98f4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d98f6  call 0xcc814
    X86_AT(c, 0xd98f6u);
    push32(c, 0xd98fbu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd98fbu);
    X86_TICK(c, 35);
    // 0d98fb  imul eax, edi, 0x21a
    X86_AT(c, 0xd98fbu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9901  lea edx, [eax*1 + 0xb0508]
    X86_AT(c, 0xd9901u);
    c.r[2] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0d9908  push edx
    X86_AT(c, 0xd9908u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d9909  push 4
    X86_AT(c, 0xd9909u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d990b  call 0xca850
    X86_AT(c, 0xd990bu);
    push32(c, 0xd9910u); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xd9910u);
    X86_TICK(c, 11);
    // 0d9910  push 4
    X86_AT(c, 0xd9910u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9912  push 0xf
    X86_AT(c, 0xd9912u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d9914  call 0xcc814
    X86_AT(c, 0xd9914u);
    push32(c, 0xd9919u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9919u);
    X86_TICK(c, 11);
    // 0d9919  push 0xb600
    X86_AT(c, 0xd9919u);
    { uint32_t v = 0xB600u; push32(c, v); }
    // 0d991e  push 4
    X86_AT(c, 0xd991eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9920  call 0xc8cdc
    X86_AT(c, 0xd9920u);
    push32(c, 0xd9925u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9925u);
    X86_TICK(c, 9);
    // 0d9925  push 0xb640
    X86_AT(c, 0xd9925u);
    { uint32_t v = 0xB640u; push32(c, v); }
    // 0d992a  call 0xcad60
    X86_AT(c, 0xd992au);
    push32(c, 0xd992fu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xd992fu);
    X86_TICK(c, 2);
    // 0d992f  add esp, 0x34
    X86_AT(c, 0xd992fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
L_d9932:
    X86_TICK(c, 9);
    // 0d9932  push 4
    X86_AT(c, 0xd9932u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9934  call 0xc81e4
    X86_AT(c, 0xd9934u);
    push32(c, 0xd9939u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd9939u);
    X86_TICK(c, 11);
    // 0d9939  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xd9939u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0d993c  add esp, 4
    X86_AT(c, 0xd993cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d993f  cmp al, 0x59
    X86_AT(c, 0xd993fu);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0d9941  je 0xd994b
    X86_AT(c, 0xd9941u);
    if (x86_cc(c, 4)) { goto L_d994b; }
    X86_TICK(c, 7);
    // 0d9943  cmp al, 0x4e
    X86_AT(c, 0xd9943u);
    (void)x86_sub(c, g8(c, 0), 0x4Eu, 0, 1);
    // 0d9945  je 0xd994b
    X86_AT(c, 0xd9945u);
    if (x86_cc(c, 4)) { goto L_d994b; }
    X86_TICK(c, 7);
    // 0d9947  dec al
    X86_AT(c, 0xd9947u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0d9949  jne 0xd9932
    X86_AT(c, 0xd9949u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd9932u); goto L_d9932; }
L_d994b:
    X86_TICK(c, 9);
    // 0d994b  push 2
    X86_AT(c, 0xd994bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d994d  call 0xca3cc
    X86_AT(c, 0xd994du);
    push32(c, 0xd9952u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd9952u);
    X86_TICK(c, 9);
    // 0d9952  push 4
    X86_AT(c, 0xd9952u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9954  call 0xca0a0
    X86_AT(c, 0xd9954u);
    push32(c, 0xd9959u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd9959u);
    X86_TICK(c, 14);
    // 0d9959  add esp, 8
    X86_AT(c, 0xd9959u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d995c  cmp byte ptr [ebp - 0x2d], 0x59
    X86_AT(c, 0xd995cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))), 0x59u, 0, 1);
    // 0d9960  je 0xd996e
    X86_AT(c, 0xd9960u);
    if (x86_cc(c, 4)) { goto L_d996e; }
L_d9962:
    X86_TICK(c, 9);
    // 0d9962  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xd9962u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0d9969  jmp 0xd89fa
    X86_AT(c, 0xd9969u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d996e:
    X86_TICK(c, 103);
    // 0d996e  imul eax, edi, 0x21a
    X86_AT(c, 0xd996eu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9974  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd9974u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0d9977  add edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd9977u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 0d997a  add dword ptr [eax + 0xb051e], edx
    X86_AT(c, 0xd997au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d9980  mov edx, dword ptr [ebp - 0x18]
    X86_AT(c, 0xd9980u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0d9983  add edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xd9983u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0, 4); }
    // 0d9986  add dword ptr [eax + 0xb0522], edx
    X86_AT(c, 0xd9986u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d998c  mov edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0xd998cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0d998f  add edx, dword ptr [ebp - 0x24]
    X86_AT(c, 0xd998fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0, 4); }
    // 0d9992  add dword ptr [eax + 0xb052e], edx
    X86_AT(c, 0xd9992u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d9998  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xd9998u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0d999b  add edx, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xd999bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))), 0, 4); }
    // 0d999e  add dword ptr [eax + 0xb0532], edx
    X86_AT(c, 0xd999eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d99a4  push 6
    X86_AT(c, 0xd99a4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d99a6  push 0x34
    X86_AT(c, 0xd99a6u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d99a8  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd99a8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d99ab  call 0xcc814
    X86_AT(c, 0xd99abu);
    push32(c, 0xd99b0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd99b0u);
    X86_TICK(c, 20);
    // 0d99b0  push 2
    X86_AT(c, 0xd99b0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d99b2  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd99b2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d99b5  push dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd99b5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu))); push32(c, v); }
    // 0d99bb  push 4
    X86_AT(c, 0xd99bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d99bd  call 0xc8cb8
    X86_AT(c, 0xd99bdu);
    push32(c, 0xd99c2u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd99c2u);
    X86_TICK(c, 11);
    // 0d99c2  push 7
    X86_AT(c, 0xd99c2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d99c4  push 0x34
    X86_AT(c, 0xd99c4u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d99c6  call 0xcc814
    X86_AT(c, 0xd99c6u);
    push32(c, 0xd99cbu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd99cbu);
    X86_TICK(c, 20);
    // 0d99cb  push 2
    X86_AT(c, 0xd99cbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d99cd  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd99cdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d99d0  push dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd99d0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u))); push32(c, v); }
    // 0d99d6  push 4
    X86_AT(c, 0xd99d6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d99d8  call 0xc8cb8
    X86_AT(c, 0xd99d8u);
    push32(c, 0xd99ddu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd99ddu);
    X86_TICK(c, 11);
    // 0d99dd  push 0xa
    X86_AT(c, 0xd99ddu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d99df  push 0x34
    X86_AT(c, 0xd99dfu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d99e1  call 0xcc814
    X86_AT(c, 0xd99e1u);
    push32(c, 0xd99e6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd99e6u);
    X86_TICK(c, 20);
    // 0d99e6  push 2
    X86_AT(c, 0xd99e6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d99e8  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd99e8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d99eb  push dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd99ebu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu))); push32(c, v); }
    // 0d99f1  push 4
    X86_AT(c, 0xd99f1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d99f3  call 0xc8cb8
    X86_AT(c, 0xd99f3u);
    push32(c, 0xd99f8u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd99f8u);
    X86_TICK(c, 13);
    // 0d99f8  add esp, 0x3c
    X86_AT(c, 0xd99f8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d99fb  push 0xb
    X86_AT(c, 0xd99fbu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d99fd  push 0x34
    X86_AT(c, 0xd99fdu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d99ff  call 0xcc814
    X86_AT(c, 0xd99ffu);
    push32(c, 0xd9a04u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9a04u);
    X86_TICK(c, 20);
    // 0d9a04  push 2
    X86_AT(c, 0xd9a04u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d9a06  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd9a06u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d9a09  push dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9a09u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u))); push32(c, v); }
    // 0d9a0f  push 4
    X86_AT(c, 0xd9a0fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9a11  call 0xc8cb8
    X86_AT(c, 0xd9a11u);
    push32(c, 0xd9a16u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd9a16u);
    X86_TICK(c, 4);
    // 0d9a16  sub eax, eax
    X86_AT(c, 0xd9a16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d9a18  add esp, 0x14
    X86_AT(c, 0xd9a18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d9a1b:
    X86_TICK(c, 28);
    // 0d9a1b  pop edi
    X86_AT(c, 0xd9a1bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9a1c  pop esi
    X86_AT(c, 0xd9a1cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d9a1d  pop ebx
    X86_AT(c, 0xd9a1du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d9a1e  leave 
    X86_AT(c, 0xd9a1eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9a1f  ret 
    X86_AT(c, 0xd9a1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd89fau, "ran off the end of a function");
}
void f_000d9723(X86Cpu& c) {
    goto L_d9723;
L_d89fa:
    X86_TICK(c, 11);
    // 0d89fa  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xd89fau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d89fd  cmp edx, 0xa
    X86_AT(c, 0xd89fdu);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8a00  ja 0xd89fa
    X86_AT(c, 0xd8a00u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8a02  jmp dword ptr cs:[edx*4 + 0xd8a0a]
    X86_AT(c, 0xd8a02u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD8A0Au)));
      switch (t) {
      case 0xd8a36u: goto L_d8a36;
      case 0xd8b3fu: goto L_d8b3f;
      case 0xd8c59u: goto L_d8c59;
      case 0xd8d73u: goto L_d8d73;
      case 0xd8e8du: goto L_d8e8d;
      case 0xd8faau: goto L_d8faa;
      case 0xd90c4u: goto L_d90c4;
      case 0xd9345u: goto L_d9345;
      case 0xd952du: goto L_d952d;
      case 0xd982cu: goto L_d982c;
      case 0xd98ddu: goto L_d98dd;
      default: x86_jump(c, t); return; } }
L_d8a36:
    X86_TICK(c, 11);
    // 0d8a36  push 0xe
    X86_AT(c, 0xd8a36u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8a38  push 4
    X86_AT(c, 0xd8a38u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8a3a  call 0xcac40
    X86_AT(c, 0xd8a3au);
    push32(c, 0xd8a3fu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8a3fu);
    X86_TICK(c, 2);
    // 0d8a3f  add esp, 8
    X86_AT(c, 0xd8a3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8a42:
    X86_TICK(c, 11);
    // 0d8a42  push 5
    X86_AT(c, 0xd8a42u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8a44  push 0x28
    X86_AT(c, 0xd8a44u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8a46  call 0xcc814
    X86_AT(c, 0xd8a46u);
    push32(c, 0xd8a4bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8a4bu);
    X86_TICK(c, 13);
    // 0d8a4b  push 2
    X86_AT(c, 0xd8a4bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8a4d  push esi
    X86_AT(c, 0xd8a4du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8a4e  push 4
    X86_AT(c, 0xd8a4eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8a50  call 0xc8cb8
    X86_AT(c, 0xd8a50u);
    push32(c, 0xd8a55u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8a55u);
    X86_TICK(c, 11);
    // 0d8a55  push 6
    X86_AT(c, 0xd8a55u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d8a57  push 0x34
    X86_AT(c, 0xd8a57u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8a59  call 0xcc814
    X86_AT(c, 0xd8a59u);
    push32(c, 0xd8a5eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8a5eu);
    X86_TICK(c, 40);
    // 0d8a5e  push 2
    X86_AT(c, 0xd8a5eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8a60  imul eax, edi, 0x21a
    X86_AT(c, 0xd8a60u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8a66  push dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8a66u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu))); push32(c, v); }
    // 0d8a6c  push 4
    X86_AT(c, 0xd8a6cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8a6e  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8a6eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8a71  call 0xc8cb8
    X86_AT(c, 0xd8a71u);
    push32(c, 0xd8a76u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8a76u);
    X86_TICK(c, 9);
    // 0d8a76  push 4
    X86_AT(c, 0xd8a76u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8a78  call 0xc81e4
    X86_AT(c, 0xd8a78u);
    push32(c, 0xd8a7du); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8a7du);
    X86_TICK(c, 12);
    // 0d8a7d  xchg ebx, eax
    X86_AT(c, 0xd8a7du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8a7e  add esp, 0x2c
    X86_AT(c, 0xd8a7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8a81  cmp bl, 5
    X86_AT(c, 0xd8a81u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8a84  je 0xd8ae2
    X86_AT(c, 0xd8a84u);
    if (x86_cc(c, 4)) { goto L_d8ae2; }
    X86_TICK(c, 7);
    // 0d8a86  cmp bl, 6
    X86_AT(c, 0xd8a86u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8a89  je 0xd8ae2
    X86_AT(c, 0xd8a89u);
    if (x86_cc(c, 4)) { goto L_d8ae2; }
    X86_TICK(c, 7);
    // 0d8a8b  cmp bl, 4
    X86_AT(c, 0xd8a8bu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8a8e  je 0xd8ae2
    X86_AT(c, 0xd8a8eu);
    if (x86_cc(c, 4)) { goto L_d8ae2; }
    X86_TICK(c, 7);
    // 0d8a90  cmp bl, 1
    X86_AT(c, 0xd8a90u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8a93  je 0xd8ae2
    X86_AT(c, 0xd8a93u);
    if (x86_cc(c, 4)) { goto L_d8ae2; }
    X86_TICK(c, 7);
    // 0d8a95  cmp bl, 7
    X86_AT(c, 0xd8a95u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8a98  jne 0xd8ab3
    X86_AT(c, 0xd8a98u);
    if (x86_cc(c, 5)) { goto L_d8ab3; }
    X86_TICK(c, 15);
    // 0d8a9a  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8a9au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8a9d  mov edx, dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8a9du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)));
    // 0d8aa3  cmp edx, 0x19
    X86_AT(c, 0xd8aa3u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8aa6  je 0xd8a42
    X86_AT(c, 0xd8aa6u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 7);
    // 0d8aa8  and esi, esi
    X86_AT(c, 0xd8aa8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8aaa  je 0xd8a42
    X86_AT(c, 0xd8aaau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 8);
    // 0d8aac  inc dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8aacu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8ab2  dec esi
    X86_AT(c, 0xd8ab2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8ab3:
    X86_TICK(c, 7);
    // 0d8ab3  cmp bl, 3
    X86_AT(c, 0xd8ab3u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8ab6  jne 0xd8a42
    X86_AT(c, 0xd8ab6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 33);
    // 0d8ab8  imul eax, edi, 0x21a
    X86_AT(c, 0xd8ab8u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8abe  mov edx, dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8abeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)));
    // 0d8ac4  cmp edx, 0xa
    X86_AT(c, 0xd8ac4u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8ac7  je 0xd8a42
    X86_AT(c, 0xd8ac7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 7);
    // 0d8acd  cmp esi, 0x1e
    X86_AT(c, 0xd8acdu);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8ad0  je 0xd8a42
    X86_AT(c, 0xd8ad0u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 15);
    // 0d8ad6  dec dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8ad6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8adc  inc esi
    X86_AT(c, 0xd8adcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8add  jmp 0xd8a42
    X86_AT(c, 0xd8addu);
    X86_POLL(c, 0xd8a42u); goto L_d8a42;
L_d8ae2:
    X86_TICK(c, 11);
    // 0d8ae2  push 0xb
    X86_AT(c, 0xd8ae2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8ae4  push 4
    X86_AT(c, 0xd8ae4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8ae6  call 0xcac40
    X86_AT(c, 0xd8ae6u);
    push32(c, 0xd8aebu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8aebu);
    X86_TICK(c, 11);
    // 0d8aeb  push 5
    X86_AT(c, 0xd8aebu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8aed  push 0x28
    X86_AT(c, 0xd8aedu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8aef  call 0xcc814
    X86_AT(c, 0xd8aefu);
    push32(c, 0xd8af4u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8af4u);
    X86_TICK(c, 13);
    // 0d8af4  push 2
    X86_AT(c, 0xd8af4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8af6  push esi
    X86_AT(c, 0xd8af6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8af7  push 4
    X86_AT(c, 0xd8af7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8af9  call 0xc8cb8
    X86_AT(c, 0xd8af9u);
    push32(c, 0xd8afeu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8afeu);
    X86_TICK(c, 11);
    // 0d8afe  push 6
    X86_AT(c, 0xd8afeu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d8b00  push 0x34
    X86_AT(c, 0xd8b00u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8b02  call 0xcc814
    X86_AT(c, 0xd8b02u);
    push32(c, 0xd8b07u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8b07u);
    X86_TICK(c, 38);
    // 0d8b07  push 2
    X86_AT(c, 0xd8b07u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8b09  imul eax, edi, 0x21a
    X86_AT(c, 0xd8b09u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8b0f  push dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8b0fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu))); push32(c, v); }
    // 0d8b15  push 4
    X86_AT(c, 0xd8b15u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b17  call 0xc8cb8
    X86_AT(c, 0xd8b17u);
    push32(c, 0xd8b1cu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8b1cu);
    X86_TICK(c, 9);
    // 0d8b1c  add esp, 0x30
    X86_AT(c, 0xd8b1cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8b1f  cmp bl, 1
    X86_AT(c, 0xd8b1fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8b22  je 0xd985e
    X86_AT(c, 0xd8b22u);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8b28  cmp bl, 6
    X86_AT(c, 0xd8b28u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8b2b  je 0xd8d47
    X86_AT(c, 0xd8b2bu);
    if (x86_cc(c, 4)) { goto L_d8d47; }
    X86_TICK(c, 7);
    // 0d8b31  cmp bl, 4
    X86_AT(c, 0xd8b31u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8b34  jne 0xd89fa
    X86_AT(c, 0xd8b34u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8b3a  jmp 0xd8d47
    X86_AT(c, 0xd8b3au);
    goto L_d8d47;
L_d8b3f:
    X86_TICK(c, 11);
    // 0d8b3f  push 0xe
    X86_AT(c, 0xd8b3fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8b41  push 4
    X86_AT(c, 0xd8b41u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b43  call 0xcac40
    X86_AT(c, 0xd8b43u);
    push32(c, 0xd8b48u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8b48u);
    X86_TICK(c, 2);
    // 0d8b48  add esp, 8
    X86_AT(c, 0xd8b48u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8b4b:
    X86_TICK(c, 11);
    // 0d8b4b  push 5
    X86_AT(c, 0xd8b4bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8b4d  push 0x28
    X86_AT(c, 0xd8b4du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8b4f  call 0xcc814
    X86_AT(c, 0xd8b4fu);
    push32(c, 0xd8b54u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8b54u);
    X86_TICK(c, 13);
    // 0d8b54  push 2
    X86_AT(c, 0xd8b54u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8b56  push esi
    X86_AT(c, 0xd8b56u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8b57  push 4
    X86_AT(c, 0xd8b57u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b59  call 0xc8cb8
    X86_AT(c, 0xd8b59u);
    push32(c, 0xd8b5eu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8b5eu);
    X86_TICK(c, 11);
    // 0d8b5e  push 7
    X86_AT(c, 0xd8b5eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d8b60  push 0x34
    X86_AT(c, 0xd8b60u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8b62  call 0xcc814
    X86_AT(c, 0xd8b62u);
    push32(c, 0xd8b67u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8b67u);
    X86_TICK(c, 40);
    // 0d8b67  push 2
    X86_AT(c, 0xd8b67u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8b69  imul eax, edi, 0x21a
    X86_AT(c, 0xd8b69u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8b6f  push dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8b6fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u))); push32(c, v); }
    // 0d8b75  push 4
    X86_AT(c, 0xd8b75u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b77  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8b77u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8b7a  call 0xc8cb8
    X86_AT(c, 0xd8b7au);
    push32(c, 0xd8b7fu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8b7fu);
    X86_TICK(c, 9);
    // 0d8b7f  push 4
    X86_AT(c, 0xd8b7fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b81  call 0xc81e4
    X86_AT(c, 0xd8b81u);
    push32(c, 0xd8b86u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8b86u);
    X86_TICK(c, 12);
    // 0d8b86  xchg ebx, eax
    X86_AT(c, 0xd8b86u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8b87  add esp, 0x2c
    X86_AT(c, 0xd8b87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8b8a  cmp bl, 5
    X86_AT(c, 0xd8b8au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8b8d  je 0xd8beb
    X86_AT(c, 0xd8b8du);
    if (x86_cc(c, 4)) { goto L_d8beb; }
    X86_TICK(c, 7);
    // 0d8b8f  cmp bl, 6
    X86_AT(c, 0xd8b8fu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8b92  je 0xd8beb
    X86_AT(c, 0xd8b92u);
    if (x86_cc(c, 4)) { goto L_d8beb; }
    X86_TICK(c, 7);
    // 0d8b94  cmp bl, 4
    X86_AT(c, 0xd8b94u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8b97  je 0xd8beb
    X86_AT(c, 0xd8b97u);
    if (x86_cc(c, 4)) { goto L_d8beb; }
    X86_TICK(c, 7);
    // 0d8b99  cmp bl, 1
    X86_AT(c, 0xd8b99u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8b9c  je 0xd8beb
    X86_AT(c, 0xd8b9cu);
    if (x86_cc(c, 4)) { goto L_d8beb; }
    X86_TICK(c, 7);
    // 0d8b9e  cmp bl, 7
    X86_AT(c, 0xd8b9eu);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8ba1  jne 0xd8bbc
    X86_AT(c, 0xd8ba1u);
    if (x86_cc(c, 5)) { goto L_d8bbc; }
    X86_TICK(c, 15);
    // 0d8ba3  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8ba3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8ba6  mov edx, dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8ba6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)));
    // 0d8bac  cmp edx, 0x19
    X86_AT(c, 0xd8bacu);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8baf  je 0xd8b4b
    X86_AT(c, 0xd8bafu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 7);
    // 0d8bb1  and esi, esi
    X86_AT(c, 0xd8bb1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8bb3  je 0xd8b4b
    X86_AT(c, 0xd8bb3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 8);
    // 0d8bb5  inc dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8bb5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8bbb  dec esi
    X86_AT(c, 0xd8bbbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8bbc:
    X86_TICK(c, 7);
    // 0d8bbc  cmp bl, 3
    X86_AT(c, 0xd8bbcu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8bbf  jne 0xd8b4b
    X86_AT(c, 0xd8bbfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 33);
    // 0d8bc1  imul eax, edi, 0x21a
    X86_AT(c, 0xd8bc1u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8bc7  mov edx, dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8bc7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)));
    // 0d8bcd  cmp edx, 0xa
    X86_AT(c, 0xd8bcdu);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8bd0  je 0xd8b4b
    X86_AT(c, 0xd8bd0u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 7);
    // 0d8bd6  cmp esi, 0x1e
    X86_AT(c, 0xd8bd6u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8bd9  je 0xd8b4b
    X86_AT(c, 0xd8bd9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 15);
    // 0d8bdf  dec dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8bdfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8be5  inc esi
    X86_AT(c, 0xd8be5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8be6  jmp 0xd8b4b
    X86_AT(c, 0xd8be6u);
    X86_POLL(c, 0xd8b4bu); goto L_d8b4b;
L_d8beb:
    X86_TICK(c, 11);
    // 0d8beb  push 0xb
    X86_AT(c, 0xd8bebu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8bed  push 4
    X86_AT(c, 0xd8bedu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8bef  call 0xcac40
    X86_AT(c, 0xd8befu);
    push32(c, 0xd8bf4u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8bf4u);
    X86_TICK(c, 11);
    // 0d8bf4  push 5
    X86_AT(c, 0xd8bf4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8bf6  push 0x28
    X86_AT(c, 0xd8bf6u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8bf8  call 0xcc814
    X86_AT(c, 0xd8bf8u);
    push32(c, 0xd8bfdu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8bfdu);
    X86_TICK(c, 13);
    // 0d8bfd  push 2
    X86_AT(c, 0xd8bfdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8bff  push esi
    X86_AT(c, 0xd8bffu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8c00  push 4
    X86_AT(c, 0xd8c00u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c02  call 0xc8cb8
    X86_AT(c, 0xd8c02u);
    push32(c, 0xd8c07u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8c07u);
    X86_TICK(c, 11);
    // 0d8c07  push 7
    X86_AT(c, 0xd8c07u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d8c09  push 0x34
    X86_AT(c, 0xd8c09u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8c0b  call 0xcc814
    X86_AT(c, 0xd8c0bu);
    push32(c, 0xd8c10u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8c10u);
    X86_TICK(c, 38);
    // 0d8c10  push 2
    X86_AT(c, 0xd8c10u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8c12  imul eax, edi, 0x21a
    X86_AT(c, 0xd8c12u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8c18  push dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8c18u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u))); push32(c, v); }
    // 0d8c1e  push 4
    X86_AT(c, 0xd8c1eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c20  call 0xc8cb8
    X86_AT(c, 0xd8c20u);
    push32(c, 0xd8c25u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8c25u);
    X86_TICK(c, 9);
    // 0d8c25  add esp, 0x30
    X86_AT(c, 0xd8c25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8c28  cmp bl, 5
    X86_AT(c, 0xd8c28u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8c2b  jne 0xd8c39
    X86_AT(c, 0xd8c2bu);
    if (x86_cc(c, 5)) { goto L_d8c39; }
    X86_TICK(c, 9);
    // 0d8c2d  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd8c2du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d8c34  jmp 0xd89fa
    X86_AT(c, 0xd8c34u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8c39:
    X86_TICK(c, 7);
    // 0d8c39  cmp bl, 1
    X86_AT(c, 0xd8c39u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8c3c  je 0xd985e
    X86_AT(c, 0xd8c3cu);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8c42  cmp bl, 6
    X86_AT(c, 0xd8c42u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8c45  je 0xd8e61
    X86_AT(c, 0xd8c45u);
    if (x86_cc(c, 4)) { goto L_d8e61; }
    X86_TICK(c, 7);
    // 0d8c4b  cmp bl, 4
    X86_AT(c, 0xd8c4bu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8c4e  jne 0xd89fa
    X86_AT(c, 0xd8c4eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8c54  jmp 0xd8e61
    X86_AT(c, 0xd8c54u);
    goto L_d8e61;
L_d8c59:
    X86_TICK(c, 11);
    // 0d8c59  push 0xe
    X86_AT(c, 0xd8c59u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8c5b  push 4
    X86_AT(c, 0xd8c5bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c5d  call 0xcac40
    X86_AT(c, 0xd8c5du);
    push32(c, 0xd8c62u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8c62u);
    X86_TICK(c, 2);
    // 0d8c62  add esp, 8
    X86_AT(c, 0xd8c62u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8c65:
    X86_TICK(c, 11);
    // 0d8c65  push 5
    X86_AT(c, 0xd8c65u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8c67  push 0x28
    X86_AT(c, 0xd8c67u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8c69  call 0xcc814
    X86_AT(c, 0xd8c69u);
    push32(c, 0xd8c6eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8c6eu);
    X86_TICK(c, 13);
    // 0d8c6e  push 2
    X86_AT(c, 0xd8c6eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8c70  push esi
    X86_AT(c, 0xd8c70u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8c71  push 4
    X86_AT(c, 0xd8c71u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c73  call 0xc8cb8
    X86_AT(c, 0xd8c73u);
    push32(c, 0xd8c78u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8c78u);
    X86_TICK(c, 11);
    // 0d8c78  push 8
    X86_AT(c, 0xd8c78u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d8c7a  push 0x34
    X86_AT(c, 0xd8c7au);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8c7c  call 0xcc814
    X86_AT(c, 0xd8c7cu);
    push32(c, 0xd8c81u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8c81u);
    X86_TICK(c, 40);
    // 0d8c81  push 2
    X86_AT(c, 0xd8c81u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8c83  imul eax, edi, 0x21a
    X86_AT(c, 0xd8c83u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8c89  push dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8c89u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u))); push32(c, v); }
    // 0d8c8f  push 4
    X86_AT(c, 0xd8c8fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c91  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8c91u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8c94  call 0xc8cb8
    X86_AT(c, 0xd8c94u);
    push32(c, 0xd8c99u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8c99u);
    X86_TICK(c, 9);
    // 0d8c99  push 4
    X86_AT(c, 0xd8c99u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c9b  call 0xc81e4
    X86_AT(c, 0xd8c9bu);
    push32(c, 0xd8ca0u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8ca0u);
    X86_TICK(c, 12);
    // 0d8ca0  xchg ebx, eax
    X86_AT(c, 0xd8ca0u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8ca1  add esp, 0x2c
    X86_AT(c, 0xd8ca1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8ca4  cmp bl, 5
    X86_AT(c, 0xd8ca4u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8ca7  je 0xd8d05
    X86_AT(c, 0xd8ca7u);
    if (x86_cc(c, 4)) { goto L_d8d05; }
    X86_TICK(c, 7);
    // 0d8ca9  cmp bl, 6
    X86_AT(c, 0xd8ca9u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8cac  je 0xd8d05
    X86_AT(c, 0xd8cacu);
    if (x86_cc(c, 4)) { goto L_d8d05; }
    X86_TICK(c, 7);
    // 0d8cae  cmp bl, 4
    X86_AT(c, 0xd8caeu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8cb1  je 0xd8d05
    X86_AT(c, 0xd8cb1u);
    if (x86_cc(c, 4)) { goto L_d8d05; }
    X86_TICK(c, 7);
    // 0d8cb3  cmp bl, 1
    X86_AT(c, 0xd8cb3u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8cb6  je 0xd8d05
    X86_AT(c, 0xd8cb6u);
    if (x86_cc(c, 4)) { goto L_d8d05; }
    X86_TICK(c, 7);
    // 0d8cb8  cmp bl, 7
    X86_AT(c, 0xd8cb8u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8cbb  jne 0xd8cd6
    X86_AT(c, 0xd8cbbu);
    if (x86_cc(c, 5)) { goto L_d8cd6; }
    X86_TICK(c, 15);
    // 0d8cbd  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8cbdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8cc0  mov edx, dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8cc0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u)));
    // 0d8cc6  cmp edx, 0x19
    X86_AT(c, 0xd8cc6u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8cc9  je 0xd8c65
    X86_AT(c, 0xd8cc9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 7);
    // 0d8ccb  and esi, esi
    X86_AT(c, 0xd8ccbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8ccd  je 0xd8c65
    X86_AT(c, 0xd8ccdu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 8);
    // 0d8ccf  inc dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8ccfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8cd5  dec esi
    X86_AT(c, 0xd8cd5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8cd6:
    X86_TICK(c, 7);
    // 0d8cd6  cmp bl, 3
    X86_AT(c, 0xd8cd6u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8cd9  jne 0xd8c65
    X86_AT(c, 0xd8cd9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 33);
    // 0d8cdb  imul eax, edi, 0x21a
    X86_AT(c, 0xd8cdbu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8ce1  mov edx, dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8ce1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u)));
    // 0d8ce7  cmp edx, 0xa
    X86_AT(c, 0xd8ce7u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8cea  je 0xd8c65
    X86_AT(c, 0xd8ceau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 7);
    // 0d8cf0  cmp esi, 0x1e
    X86_AT(c, 0xd8cf0u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8cf3  je 0xd8c65
    X86_AT(c, 0xd8cf3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 15);
    // 0d8cf9  dec dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8cf9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8cff  inc esi
    X86_AT(c, 0xd8cffu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8d00  jmp 0xd8c65
    X86_AT(c, 0xd8d00u);
    X86_POLL(c, 0xd8c65u); goto L_d8c65;
L_d8d05:
    X86_TICK(c, 11);
    // 0d8d05  push 0xb
    X86_AT(c, 0xd8d05u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8d07  push 4
    X86_AT(c, 0xd8d07u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d09  call 0xcac40
    X86_AT(c, 0xd8d09u);
    push32(c, 0xd8d0eu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8d0eu);
    X86_TICK(c, 11);
    // 0d8d0e  push 5
    X86_AT(c, 0xd8d0eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8d10  push 0x28
    X86_AT(c, 0xd8d10u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8d12  call 0xcc814
    X86_AT(c, 0xd8d12u);
    push32(c, 0xd8d17u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8d17u);
    X86_TICK(c, 13);
    // 0d8d17  push 2
    X86_AT(c, 0xd8d17u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8d19  push esi
    X86_AT(c, 0xd8d19u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8d1a  push 4
    X86_AT(c, 0xd8d1au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d1c  call 0xc8cb8
    X86_AT(c, 0xd8d1cu);
    push32(c, 0xd8d21u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8d21u);
    X86_TICK(c, 11);
    // 0d8d21  push 8
    X86_AT(c, 0xd8d21u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d8d23  push 0x34
    X86_AT(c, 0xd8d23u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8d25  call 0xcc814
    X86_AT(c, 0xd8d25u);
    push32(c, 0xd8d2au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8d2au);
    X86_TICK(c, 38);
    // 0d8d2a  push 2
    X86_AT(c, 0xd8d2au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8d2c  imul eax, edi, 0x21a
    X86_AT(c, 0xd8d2cu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8d32  push dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8d32u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u))); push32(c, v); }
    // 0d8d38  push 4
    X86_AT(c, 0xd8d38u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d3a  call 0xc8cb8
    X86_AT(c, 0xd8d3au);
    push32(c, 0xd8d3fu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8d3fu);
    X86_TICK(c, 9);
    // 0d8d3f  add esp, 0x30
    X86_AT(c, 0xd8d3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8d42  cmp bl, 5
    X86_AT(c, 0xd8d42u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8d45  jne 0xd8d53
    X86_AT(c, 0xd8d45u);
    if (x86_cc(c, 5)) { goto L_d8d53; }
L_d8d47:
    X86_TICK(c, 9);
    // 0d8d47  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xd8d47u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0d8d4e  jmp 0xd89fa
    X86_AT(c, 0xd8d4eu);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8d53:
    X86_TICK(c, 7);
    // 0d8d53  cmp bl, 1
    X86_AT(c, 0xd8d53u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8d56  je 0xd985e
    X86_AT(c, 0xd8d56u);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8d5c  cmp bl, 6
    X86_AT(c, 0xd8d5cu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8d5f  je 0xd8f7b
    X86_AT(c, 0xd8d5fu);
    if (x86_cc(c, 4)) { goto L_d8f7b; }
    X86_TICK(c, 7);
    // 0d8d65  cmp bl, 4
    X86_AT(c, 0xd8d65u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8d68  jne 0xd89fa
    X86_AT(c, 0xd8d68u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8d6e  jmp 0xd8f7b
    X86_AT(c, 0xd8d6eu);
    goto L_d8f7b;
L_d8d73:
    X86_TICK(c, 11);
    // 0d8d73  push 0xe
    X86_AT(c, 0xd8d73u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8d75  push 4
    X86_AT(c, 0xd8d75u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d77  call 0xcac40
    X86_AT(c, 0xd8d77u);
    push32(c, 0xd8d7cu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8d7cu);
    X86_TICK(c, 2);
    // 0d8d7c  add esp, 8
    X86_AT(c, 0xd8d7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8d7f:
    X86_TICK(c, 11);
    // 0d8d7f  push 5
    X86_AT(c, 0xd8d7fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8d81  push 0x28
    X86_AT(c, 0xd8d81u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8d83  call 0xcc814
    X86_AT(c, 0xd8d83u);
    push32(c, 0xd8d88u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8d88u);
    X86_TICK(c, 13);
    // 0d8d88  push 2
    X86_AT(c, 0xd8d88u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8d8a  push esi
    X86_AT(c, 0xd8d8au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8d8b  push 4
    X86_AT(c, 0xd8d8bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d8d  call 0xc8cb8
    X86_AT(c, 0xd8d8du);
    push32(c, 0xd8d92u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8d92u);
    X86_TICK(c, 11);
    // 0d8d92  push 9
    X86_AT(c, 0xd8d92u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d8d94  push 0x34
    X86_AT(c, 0xd8d94u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8d96  call 0xcc814
    X86_AT(c, 0xd8d96u);
    push32(c, 0xd8d9bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8d9bu);
    X86_TICK(c, 40);
    // 0d8d9b  push 2
    X86_AT(c, 0xd8d9bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8d9d  imul eax, edi, 0x21a
    X86_AT(c, 0xd8d9du);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8da3  push dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8da3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au))); push32(c, v); }
    // 0d8da9  push 4
    X86_AT(c, 0xd8da9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8dab  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8dabu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8dae  call 0xc8cb8
    X86_AT(c, 0xd8daeu);
    push32(c, 0xd8db3u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8db3u);
    X86_TICK(c, 9);
    // 0d8db3  push 4
    X86_AT(c, 0xd8db3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8db5  call 0xc81e4
    X86_AT(c, 0xd8db5u);
    push32(c, 0xd8dbau); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8dbau);
    X86_TICK(c, 12);
    // 0d8dba  xchg ebx, eax
    X86_AT(c, 0xd8dbau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8dbb  add esp, 0x2c
    X86_AT(c, 0xd8dbbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8dbe  cmp bl, 5
    X86_AT(c, 0xd8dbeu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8dc1  je 0xd8e1f
    X86_AT(c, 0xd8dc1u);
    if (x86_cc(c, 4)) { goto L_d8e1f; }
    X86_TICK(c, 7);
    // 0d8dc3  cmp bl, 6
    X86_AT(c, 0xd8dc3u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8dc6  je 0xd8e1f
    X86_AT(c, 0xd8dc6u);
    if (x86_cc(c, 4)) { goto L_d8e1f; }
    X86_TICK(c, 7);
    // 0d8dc8  cmp bl, 4
    X86_AT(c, 0xd8dc8u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8dcb  je 0xd8e1f
    X86_AT(c, 0xd8dcbu);
    if (x86_cc(c, 4)) { goto L_d8e1f; }
    X86_TICK(c, 7);
    // 0d8dcd  cmp bl, 1
    X86_AT(c, 0xd8dcdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8dd0  je 0xd8e1f
    X86_AT(c, 0xd8dd0u);
    if (x86_cc(c, 4)) { goto L_d8e1f; }
    X86_TICK(c, 7);
    // 0d8dd2  cmp bl, 7
    X86_AT(c, 0xd8dd2u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8dd5  jne 0xd8df0
    X86_AT(c, 0xd8dd5u);
    if (x86_cc(c, 5)) { goto L_d8df0; }
    X86_TICK(c, 15);
    // 0d8dd7  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8dd7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8dda  mov edx, dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8ddau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au)));
    // 0d8de0  cmp edx, 0x19
    X86_AT(c, 0xd8de0u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8de3  je 0xd8d7f
    X86_AT(c, 0xd8de3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 7);
    // 0d8de5  and esi, esi
    X86_AT(c, 0xd8de5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8de7  je 0xd8d7f
    X86_AT(c, 0xd8de7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 8);
    // 0d8de9  inc dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8de9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8def  dec esi
    X86_AT(c, 0xd8defu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8df0:
    X86_TICK(c, 7);
    // 0d8df0  cmp bl, 3
    X86_AT(c, 0xd8df0u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8df3  jne 0xd8d7f
    X86_AT(c, 0xd8df3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 33);
    // 0d8df5  imul eax, edi, 0x21a
    X86_AT(c, 0xd8df5u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8dfb  mov edx, dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8dfbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au)));
    // 0d8e01  cmp edx, 0xa
    X86_AT(c, 0xd8e01u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8e04  je 0xd8d7f
    X86_AT(c, 0xd8e04u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 7);
    // 0d8e0a  cmp esi, 0x1e
    X86_AT(c, 0xd8e0au);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8e0d  je 0xd8d7f
    X86_AT(c, 0xd8e0du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 15);
    // 0d8e13  dec dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8e13u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8e19  inc esi
    X86_AT(c, 0xd8e19u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8e1a  jmp 0xd8d7f
    X86_AT(c, 0xd8e1au);
    X86_POLL(c, 0xd8d7fu); goto L_d8d7f;
L_d8e1f:
    X86_TICK(c, 11);
    // 0d8e1f  push 0xb
    X86_AT(c, 0xd8e1fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8e21  push 4
    X86_AT(c, 0xd8e21u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8e23  call 0xcac40
    X86_AT(c, 0xd8e23u);
    push32(c, 0xd8e28u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8e28u);
    X86_TICK(c, 11);
    // 0d8e28  push 5
    X86_AT(c, 0xd8e28u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8e2a  push 0x28
    X86_AT(c, 0xd8e2au);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8e2c  call 0xcc814
    X86_AT(c, 0xd8e2cu);
    push32(c, 0xd8e31u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8e31u);
    X86_TICK(c, 13);
    // 0d8e31  push 2
    X86_AT(c, 0xd8e31u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8e33  push esi
    X86_AT(c, 0xd8e33u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8e34  push 4
    X86_AT(c, 0xd8e34u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8e36  call 0xc8cb8
    X86_AT(c, 0xd8e36u);
    push32(c, 0xd8e3bu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8e3bu);
    X86_TICK(c, 11);
    // 0d8e3b  push 9
    X86_AT(c, 0xd8e3bu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d8e3d  push 0x34
    X86_AT(c, 0xd8e3du);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8e3f  call 0xcc814
    X86_AT(c, 0xd8e3fu);
    push32(c, 0xd8e44u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8e44u);
    X86_TICK(c, 38);
    // 0d8e44  push 2
    X86_AT(c, 0xd8e44u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8e46  imul eax, edi, 0x21a
    X86_AT(c, 0xd8e46u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8e4c  push dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8e4cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au))); push32(c, v); }
    // 0d8e52  push 4
    X86_AT(c, 0xd8e52u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8e54  call 0xc8cb8
    X86_AT(c, 0xd8e54u);
    push32(c, 0xd8e59u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8e59u);
    X86_TICK(c, 9);
    // 0d8e59  add esp, 0x30
    X86_AT(c, 0xd8e59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8e5c  cmp bl, 5
    X86_AT(c, 0xd8e5cu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8e5f  jne 0xd8e6d
    X86_AT(c, 0xd8e5fu);
    if (x86_cc(c, 5)) { goto L_d8e6d; }
L_d8e61:
    X86_TICK(c, 9);
    // 0d8e61  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xd8e61u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0d8e68  jmp 0xd89fa
    X86_AT(c, 0xd8e68u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8e6d:
    X86_TICK(c, 7);
    // 0d8e6d  cmp bl, 1
    X86_AT(c, 0xd8e6du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8e70  je 0xd985e
    X86_AT(c, 0xd8e70u);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8e76  cmp bl, 6
    X86_AT(c, 0xd8e76u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8e79  je 0xd9098
    X86_AT(c, 0xd8e79u);
    if (x86_cc(c, 4)) { goto L_d9098; }
    X86_TICK(c, 7);
    // 0d8e7f  cmp bl, 4
    X86_AT(c, 0xd8e7fu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8e82  jne 0xd89fa
    X86_AT(c, 0xd8e82u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8e88  jmp 0xd9098
    X86_AT(c, 0xd8e88u);
    goto L_d9098;
L_d8e8d:
    X86_TICK(c, 11);
    // 0d8e8d  push 0xe
    X86_AT(c, 0xd8e8du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8e8f  push 4
    X86_AT(c, 0xd8e8fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8e91  call 0xcac40
    X86_AT(c, 0xd8e91u);
    push32(c, 0xd8e96u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8e96u);
    X86_TICK(c, 2);
    // 0d8e96  add esp, 8
    X86_AT(c, 0xd8e96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8e99:
    X86_TICK(c, 11);
    // 0d8e99  push 5
    X86_AT(c, 0xd8e99u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8e9b  push 0x28
    X86_AT(c, 0xd8e9bu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8e9d  call 0xcc814
    X86_AT(c, 0xd8e9du);
    push32(c, 0xd8ea2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8ea2u);
    X86_TICK(c, 13);
    // 0d8ea2  push 2
    X86_AT(c, 0xd8ea2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8ea4  push esi
    X86_AT(c, 0xd8ea4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8ea5  push 4
    X86_AT(c, 0xd8ea5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8ea7  call 0xc8cb8
    X86_AT(c, 0xd8ea7u);
    push32(c, 0xd8eacu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8eacu);
    X86_TICK(c, 11);
    // 0d8eac  push 0xa
    X86_AT(c, 0xd8eacu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d8eae  push 0x34
    X86_AT(c, 0xd8eaeu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8eb0  call 0xcc814
    X86_AT(c, 0xd8eb0u);
    push32(c, 0xd8eb5u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8eb5u);
    X86_TICK(c, 40);
    // 0d8eb5  push 2
    X86_AT(c, 0xd8eb5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8eb7  imul eax, edi, 0x21a
    X86_AT(c, 0xd8eb7u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8ebd  push dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8ebdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu))); push32(c, v); }
    // 0d8ec3  push 4
    X86_AT(c, 0xd8ec3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8ec5  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8ec5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8ec8  call 0xc8cb8
    X86_AT(c, 0xd8ec8u);
    push32(c, 0xd8ecdu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8ecdu);
    X86_TICK(c, 9);
    // 0d8ecd  push 4
    X86_AT(c, 0xd8ecdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8ecf  call 0xc81e4
    X86_AT(c, 0xd8ecfu);
    push32(c, 0xd8ed4u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8ed4u);
    X86_TICK(c, 12);
    // 0d8ed4  xchg ebx, eax
    X86_AT(c, 0xd8ed4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8ed5  add esp, 0x2c
    X86_AT(c, 0xd8ed5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8ed8  cmp bl, 5
    X86_AT(c, 0xd8ed8u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8edb  je 0xd8f39
    X86_AT(c, 0xd8edbu);
    if (x86_cc(c, 4)) { goto L_d8f39; }
    X86_TICK(c, 7);
    // 0d8edd  cmp bl, 6
    X86_AT(c, 0xd8eddu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8ee0  je 0xd8f39
    X86_AT(c, 0xd8ee0u);
    if (x86_cc(c, 4)) { goto L_d8f39; }
    X86_TICK(c, 7);
    // 0d8ee2  cmp bl, 4
    X86_AT(c, 0xd8ee2u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8ee5  je 0xd8f39
    X86_AT(c, 0xd8ee5u);
    if (x86_cc(c, 4)) { goto L_d8f39; }
    X86_TICK(c, 7);
    // 0d8ee7  cmp bl, 1
    X86_AT(c, 0xd8ee7u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8eea  je 0xd8f39
    X86_AT(c, 0xd8eeau);
    if (x86_cc(c, 4)) { goto L_d8f39; }
    X86_TICK(c, 7);
    // 0d8eec  cmp bl, 7
    X86_AT(c, 0xd8eecu);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8eef  jne 0xd8f0a
    X86_AT(c, 0xd8eefu);
    if (x86_cc(c, 5)) { goto L_d8f0a; }
    X86_TICK(c, 15);
    // 0d8ef1  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8ef1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8ef4  mov edx, dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8ef4u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)));
    // 0d8efa  cmp edx, 0x19
    X86_AT(c, 0xd8efau);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8efd  je 0xd8e99
    X86_AT(c, 0xd8efdu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 7);
    // 0d8eff  and esi, esi
    X86_AT(c, 0xd8effu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8f01  je 0xd8e99
    X86_AT(c, 0xd8f01u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 8);
    // 0d8f03  inc dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8f03u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8f09  dec esi
    X86_AT(c, 0xd8f09u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8f0a:
    X86_TICK(c, 7);
    // 0d8f0a  cmp bl, 3
    X86_AT(c, 0xd8f0au);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8f0d  jne 0xd8e99
    X86_AT(c, 0xd8f0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 33);
    // 0d8f0f  imul eax, edi, 0x21a
    X86_AT(c, 0xd8f0fu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8f15  mov edx, dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8f15u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)));
    // 0d8f1b  cmp edx, 0xa
    X86_AT(c, 0xd8f1bu);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8f1e  je 0xd8e99
    X86_AT(c, 0xd8f1eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 7);
    // 0d8f24  cmp esi, 0x1e
    X86_AT(c, 0xd8f24u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8f27  je 0xd8e99
    X86_AT(c, 0xd8f27u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 15);
    // 0d8f2d  dec dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8f2du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8f33  inc esi
    X86_AT(c, 0xd8f33u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8f34  jmp 0xd8e99
    X86_AT(c, 0xd8f34u);
    X86_POLL(c, 0xd8e99u); goto L_d8e99;
L_d8f39:
    X86_TICK(c, 11);
    // 0d8f39  push 0xb
    X86_AT(c, 0xd8f39u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8f3b  push 4
    X86_AT(c, 0xd8f3bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8f3d  call 0xcac40
    X86_AT(c, 0xd8f3du);
    push32(c, 0xd8f42u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8f42u);
    X86_TICK(c, 11);
    // 0d8f42  push 5
    X86_AT(c, 0xd8f42u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8f44  push 0x28
    X86_AT(c, 0xd8f44u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8f46  call 0xcc814
    X86_AT(c, 0xd8f46u);
    push32(c, 0xd8f4bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8f4bu);
    X86_TICK(c, 13);
    // 0d8f4b  push 2
    X86_AT(c, 0xd8f4bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8f4d  push esi
    X86_AT(c, 0xd8f4du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8f4e  push 4
    X86_AT(c, 0xd8f4eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8f50  call 0xc8cb8
    X86_AT(c, 0xd8f50u);
    push32(c, 0xd8f55u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8f55u);
    X86_TICK(c, 11);
    // 0d8f55  push 0xa
    X86_AT(c, 0xd8f55u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d8f57  push 0x34
    X86_AT(c, 0xd8f57u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8f59  call 0xcc814
    X86_AT(c, 0xd8f59u);
    push32(c, 0xd8f5eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8f5eu);
    X86_TICK(c, 38);
    // 0d8f5e  push 2
    X86_AT(c, 0xd8f5eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8f60  imul eax, edi, 0x21a
    X86_AT(c, 0xd8f60u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8f66  push dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8f66u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu))); push32(c, v); }
    // 0d8f6c  push 4
    X86_AT(c, 0xd8f6cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8f6e  call 0xc8cb8
    X86_AT(c, 0xd8f6eu);
    push32(c, 0xd8f73u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8f73u);
    X86_TICK(c, 9);
    // 0d8f73  add esp, 0x30
    X86_AT(c, 0xd8f73u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8f76  cmp bl, 5
    X86_AT(c, 0xd8f76u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8f79  jne 0xd8f87
    X86_AT(c, 0xd8f79u);
    if (x86_cc(c, 5)) { goto L_d8f87; }
L_d8f7b:
    X86_TICK(c, 9);
    // 0d8f7b  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xd8f7bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0d8f82  jmp 0xd89fa
    X86_AT(c, 0xd8f82u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8f87:
    X86_TICK(c, 7);
    // 0d8f87  cmp bl, 1
    X86_AT(c, 0xd8f87u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8f8a  je 0xd985e
    X86_AT(c, 0xd8f8au);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8f90  cmp bl, 6
    X86_AT(c, 0xd8f90u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8f93  je 0xd8f9e
    X86_AT(c, 0xd8f93u);
    if (x86_cc(c, 4)) { goto L_d8f9e; }
    X86_TICK(c, 7);
    // 0d8f95  cmp bl, 4
    X86_AT(c, 0xd8f95u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8f98  jne 0xd89fa
    X86_AT(c, 0xd8f98u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
L_d8f9e:
    X86_TICK(c, 9);
    // 0d8f9e  mov dword ptr [ebp - 4], 5
    X86_AT(c, 0xd8f9eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x5u);
    // 0d8fa5  jmp 0xd89fa
    X86_AT(c, 0xd8fa5u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8faa:
    X86_TICK(c, 11);
    // 0d8faa  push 0xe
    X86_AT(c, 0xd8faau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8fac  push 4
    X86_AT(c, 0xd8facu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8fae  call 0xcac40
    X86_AT(c, 0xd8faeu);
    push32(c, 0xd8fb3u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8fb3u);
    X86_TICK(c, 2);
    // 0d8fb3  add esp, 8
    X86_AT(c, 0xd8fb3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8fb6:
    X86_TICK(c, 11);
    // 0d8fb6  push 5
    X86_AT(c, 0xd8fb6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8fb8  push 0x28
    X86_AT(c, 0xd8fb8u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8fba  call 0xcc814
    X86_AT(c, 0xd8fbau);
    push32(c, 0xd8fbfu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8fbfu);
    X86_TICK(c, 13);
    // 0d8fbf  push 2
    X86_AT(c, 0xd8fbfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8fc1  push esi
    X86_AT(c, 0xd8fc1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8fc2  push 4
    X86_AT(c, 0xd8fc2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8fc4  call 0xc8cb8
    X86_AT(c, 0xd8fc4u);
    push32(c, 0xd8fc9u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8fc9u);
    X86_TICK(c, 11);
    // 0d8fc9  push 0xb
    X86_AT(c, 0xd8fc9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8fcb  push 0x34
    X86_AT(c, 0xd8fcbu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8fcd  call 0xcc814
    X86_AT(c, 0xd8fcdu);
    push32(c, 0xd8fd2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8fd2u);
    X86_TICK(c, 40);
    // 0d8fd2  push 2
    X86_AT(c, 0xd8fd2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8fd4  imul eax, edi, 0x21a
    X86_AT(c, 0xd8fd4u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8fda  push dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd8fdau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u))); push32(c, v); }
    // 0d8fe0  push 4
    X86_AT(c, 0xd8fe0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8fe2  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8fe2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8fe5  call 0xc8cb8
    X86_AT(c, 0xd8fe5u);
    push32(c, 0xd8feau); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8feau);
    X86_TICK(c, 9);
    // 0d8fea  push 4
    X86_AT(c, 0xd8feau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8fec  call 0xc81e4
    X86_AT(c, 0xd8fecu);
    push32(c, 0xd8ff1u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8ff1u);
    X86_TICK(c, 12);
    // 0d8ff1  xchg ebx, eax
    X86_AT(c, 0xd8ff1u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8ff2  add esp, 0x2c
    X86_AT(c, 0xd8ff2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8ff5  cmp bl, 5
    X86_AT(c, 0xd8ff5u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8ff8  je 0xd9056
    X86_AT(c, 0xd8ff8u);
    if (x86_cc(c, 4)) { goto L_d9056; }
    X86_TICK(c, 7);
    // 0d8ffa  cmp bl, 6
    X86_AT(c, 0xd8ffau);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8ffd  je 0xd9056
    X86_AT(c, 0xd8ffdu);
    if (x86_cc(c, 4)) { goto L_d9056; }
    X86_TICK(c, 7);
    // 0d8fff  cmp bl, 4
    X86_AT(c, 0xd8fffu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d9002  je 0xd9056
    X86_AT(c, 0xd9002u);
    if (x86_cc(c, 4)) { goto L_d9056; }
    X86_TICK(c, 7);
    // 0d9004  cmp bl, 1
    X86_AT(c, 0xd9004u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d9007  je 0xd9056
    X86_AT(c, 0xd9007u);
    if (x86_cc(c, 4)) { goto L_d9056; }
    X86_TICK(c, 7);
    // 0d9009  cmp bl, 7
    X86_AT(c, 0xd9009u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d900c  jne 0xd9027
    X86_AT(c, 0xd900cu);
    if (x86_cc(c, 5)) { goto L_d9027; }
    X86_TICK(c, 15);
    // 0d900e  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd900eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d9011  mov edx, dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9011u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)));
    // 0d9017  cmp edx, 0x19
    X86_AT(c, 0xd9017u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d901a  je 0xd8fb6
    X86_AT(c, 0xd901au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 7);
    // 0d901c  and esi, esi
    X86_AT(c, 0xd901cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d901e  je 0xd8fb6
    X86_AT(c, 0xd901eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 8);
    // 0d9020  inc dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9020u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d9026  dec esi
    X86_AT(c, 0xd9026u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d9027:
    X86_TICK(c, 7);
    // 0d9027  cmp bl, 3
    X86_AT(c, 0xd9027u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d902a  jne 0xd8fb6
    X86_AT(c, 0xd902au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 33);
    // 0d902c  imul eax, edi, 0x21a
    X86_AT(c, 0xd902cu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9032  mov edx, dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9032u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)));
    // 0d9038  cmp edx, 0xa
    X86_AT(c, 0xd9038u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d903b  je 0xd8fb6
    X86_AT(c, 0xd903bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 7);
    // 0d9041  cmp esi, 0x1e
    X86_AT(c, 0xd9041u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d9044  je 0xd8fb6
    X86_AT(c, 0xd9044u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 15);
    // 0d904a  dec dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd904au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d9050  inc esi
    X86_AT(c, 0xd9050u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d9051  jmp 0xd8fb6
    X86_AT(c, 0xd9051u);
    X86_POLL(c, 0xd8fb6u); goto L_d8fb6;
L_d9056:
    X86_TICK(c, 11);
    // 0d9056  push 0xb
    X86_AT(c, 0xd9056u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d9058  push 4
    X86_AT(c, 0xd9058u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d905a  call 0xcac40
    X86_AT(c, 0xd905au);
    push32(c, 0xd905fu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd905fu);
    X86_TICK(c, 11);
    // 0d905f  push 5
    X86_AT(c, 0xd905fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9061  push 0x28
    X86_AT(c, 0xd9061u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9063  call 0xcc814
    X86_AT(c, 0xd9063u);
    push32(c, 0xd9068u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9068u);
    X86_TICK(c, 13);
    // 0d9068  push 2
    X86_AT(c, 0xd9068u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d906a  push esi
    X86_AT(c, 0xd906au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d906b  push 4
    X86_AT(c, 0xd906bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d906d  call 0xc8cb8
    X86_AT(c, 0xd906du);
    push32(c, 0xd9072u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd9072u);
    X86_TICK(c, 11);
    // 0d9072  push 0xb
    X86_AT(c, 0xd9072u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d9074  push 0x34
    X86_AT(c, 0xd9074u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d9076  call 0xcc814
    X86_AT(c, 0xd9076u);
    push32(c, 0xd907bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd907bu);
    X86_TICK(c, 38);
    // 0d907b  push 2
    X86_AT(c, 0xd907bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d907d  imul eax, edi, 0x21a
    X86_AT(c, 0xd907du);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9083  push dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9083u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u))); push32(c, v); }
    // 0d9089  push 4
    X86_AT(c, 0xd9089u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d908b  call 0xc8cb8
    X86_AT(c, 0xd908bu);
    push32(c, 0xd9090u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd9090u);
    X86_TICK(c, 9);
    // 0d9090  add esp, 0x30
    X86_AT(c, 0xd9090u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d9093  cmp bl, 5
    X86_AT(c, 0xd9093u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d9096  jne 0xd90a4
    X86_AT(c, 0xd9096u);
    if (x86_cc(c, 5)) { goto L_d90a4; }
L_d9098:
    X86_TICK(c, 9);
    // 0d9098  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xd9098u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0d909f  jmp 0xd89fa
    X86_AT(c, 0xd909fu);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d90a4:
    X86_TICK(c, 7);
    // 0d90a4  cmp bl, 1
    X86_AT(c, 0xd90a4u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d90a7  je 0xd985e
    X86_AT(c, 0xd90a7u);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d90ad  cmp bl, 6
    X86_AT(c, 0xd90adu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d90b0  je 0xd9962
    X86_AT(c, 0xd90b0u);
    if (x86_cc(c, 4)) { goto L_d9962; }
    X86_TICK(c, 7);
    // 0d90b6  cmp bl, 4
    X86_AT(c, 0xd90b6u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d90b9  jne 0xd89fa
    X86_AT(c, 0xd90b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d90bf  jmp 0xd9962
    X86_AT(c, 0xd90bfu);
    goto L_d9962;
L_d90c4:
    X86_TICK(c, 27);
    // 0d90c4  push 0xa
    X86_AT(c, 0xd90c4u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d90c6  push 0xf
    X86_AT(c, 0xd90c6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d90c8  push 0xb
    X86_AT(c, 0xd90c8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d90ca  push 5
    X86_AT(c, 0xd90cau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90cc  push 0x19
    X86_AT(c, 0xd90ccu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0d90ce  push 0x54
    X86_AT(c, 0xd90ceu);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0d90d0  push 0xd0
    X86_AT(c, 0xd90d0u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d90d5  push 0x128
    X86_AT(c, 0xd90d5u);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0d90da  push 0xd0
    X86_AT(c, 0xd90dau);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d90df  push 5
    X86_AT(c, 0xd90dfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90e1  call 0xc9fbc
    X86_AT(c, 0xd90e1u);
    push32(c, 0xd90e6u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd90e6u);
    X86_TICK(c, 9);
    // 0d90e6  push 5
    X86_AT(c, 0xd90e6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90e8  call 0xca0a0
    X86_AT(c, 0xd90e8u);
    push32(c, 0xd90edu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd90edu);
    X86_TICK(c, 9);
    // 0d90ed  push 5
    X86_AT(c, 0xd90edu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90ef  call 0xca100
    X86_AT(c, 0xd90efu);
    push32(c, 0xd90f4u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd90f4u);
    X86_TICK(c, 9);
    // 0d90f4  push 5
    X86_AT(c, 0xd90f4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90f6  call 0xca0a0
    X86_AT(c, 0xd90f6u);
    push32(c, 0xd90fbu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd90fbu);
    X86_TICK(c, 13);
    // 0d90fb  push 0
    X86_AT(c, 0xd90fbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d90fd  push 4
    X86_AT(c, 0xd90fdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d90ff  push 5
    X86_AT(c, 0xd90ffu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9101  call 0xca9c8
    X86_AT(c, 0xd9101u);
    push32(c, 0xd9106u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9106u);
    X86_TICK(c, 13);
    // 0d9106  add esp, 0x40
    X86_AT(c, 0xd9106u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d9109  push 0xb3d8
    X86_AT(c, 0xd9109u);
    { uint32_t v = 0xB3D8u; push32(c, v); }
    // 0d910e  push 5
    X86_AT(c, 0xd910eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9110  call 0xc8cdc
    X86_AT(c, 0xd9110u);
    push32(c, 0xd9115u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9115u);
    X86_TICK(c, 13);
    // 0d9115  push 1
    X86_AT(c, 0xd9115u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d9117  push 6
    X86_AT(c, 0xd9117u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d9119  push 5
    X86_AT(c, 0xd9119u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d911b  call 0xca9c8
    X86_AT(c, 0xd911bu);
    push32(c, 0xd9120u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9120u);
    X86_TICK(c, 11);
    // 0d9120  push 0xb3f4
    X86_AT(c, 0xd9120u);
    { uint32_t v = 0xB3F4u; push32(c, v); }
    // 0d9125  push 5
    X86_AT(c, 0xd9125u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9127  call 0xc8cdc
    X86_AT(c, 0xd9127u);
    push32(c, 0xd912cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd912cu);
    X86_TICK(c, 13);
    // 0d912c  push 2
    X86_AT(c, 0xd912cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d912e  push 6
    X86_AT(c, 0xd912eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d9130  push 5
    X86_AT(c, 0xd9130u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9132  call 0xca9c8
    X86_AT(c, 0xd9132u);
    push32(c, 0xd9137u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9137u);
    X86_TICK(c, 11);
    // 0d9137  push 0xb40c
    X86_AT(c, 0xd9137u);
    { uint32_t v = 0xB40Cu; push32(c, v); }
    // 0d913c  push 5
    X86_AT(c, 0xd913cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d913e  call 0xc8cdc
    X86_AT(c, 0xd913eu);
    push32(c, 0xd9143u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9143u);
    X86_TICK(c, 13);
    // 0d9143  push 3
    X86_AT(c, 0xd9143u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d9145  push 6
    X86_AT(c, 0xd9145u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d9147  push 5
    X86_AT(c, 0xd9147u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9149  call 0xca9c8
    X86_AT(c, 0xd9149u);
    push32(c, 0xd914eu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd914eu);
    X86_TICK(c, 13);
    // 0d914e  add esp, 0x3c
    X86_AT(c, 0xd914eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d9151  push 0xb424
    X86_AT(c, 0xd9151u);
    { uint32_t v = 0xB424u; push32(c, v); }
    // 0d9156  push 5
    X86_AT(c, 0xd9156u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9158  call 0xc8cdc
    X86_AT(c, 0xd9158u);
    push32(c, 0xd915du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd915du);
    X86_TICK(c, 13);
    // 0d915d  push 4
    X86_AT(c, 0xd915du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d915f  push 6
    X86_AT(c, 0xd915fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d9161  push 5
    X86_AT(c, 0xd9161u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9163  call 0xca9c8
    X86_AT(c, 0xd9163u);
    push32(c, 0xd9168u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9168u);
    X86_TICK(c, 11);
    // 0d9168  push 0xb440
    X86_AT(c, 0xd9168u);
    { uint32_t v = 0xB440u; push32(c, v); }
    // 0d916d  push 5
    X86_AT(c, 0xd916du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d916f  call 0xc8cdc
    X86_AT(c, 0xd916fu);
    push32(c, 0xd9174u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9174u);
    X86_TICK(c, 9);
    // 0d9174  push 4
    X86_AT(c, 0xd9174u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9176  call 0xca0a0
    X86_AT(c, 0xd9176u);
    push32(c, 0xd917bu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd917bu);
    X86_TICK(c, 13);
    // 0d917b  add esp, 0x20
    X86_AT(c, 0xd917bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d917e  push 0xc
    X86_AT(c, 0xd917eu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d9180  push 0x28
    X86_AT(c, 0xd9180u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9182  call 0xcc814
    X86_AT(c, 0xd9182u);
    push32(c, 0xd9187u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9187u);
    X86_TICK(c, 11);
    // 0d9187  push 0xb45c
    X86_AT(c, 0xd9187u);
    { uint32_t v = 0xB45Cu; push32(c, v); }
    // 0d918c  push 4
    X86_AT(c, 0xd918cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d918e  call 0xca414
    X86_AT(c, 0xd918eu);
    push32(c, 0xd9193u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd9193u);
    X86_TICK(c, 2);
    // 0d9193  add esp, 0x10
    X86_AT(c, 0xd9193u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d9196:
    X86_TICK(c, 11);
    // 0d9196  push 0xc
    X86_AT(c, 0xd9196u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d9198  push 0x28
    X86_AT(c, 0xd9198u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d919a  call 0xcc814
    X86_AT(c, 0xd919au);
    push32(c, 0xd919fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd919fu);
    X86_TICK(c, 9);
    // 0d919f  push 4
    X86_AT(c, 0xd919fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d91a1  call 0xc79a4
    X86_AT(c, 0xd91a1u);
    push32(c, 0xd91a6u); x86_call_known(c, 0xc79a4u, f_000c79a4); X86_RET(c, 0xd91a6u);
    X86_TICK(c, 12);
    // 0d91a6  xchg ebx, eax
    X86_AT(c, 0xd91a6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d91a7  add esp, 0xc
    X86_AT(c, 0xd91a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d91aa  cmp bl, 5
    X86_AT(c, 0xd91aau);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d91ad  je 0xd929e
    X86_AT(c, 0xd91adu);
    if (x86_cc(c, 4)) { goto L_d929e; }
    X86_TICK(c, 7);
    // 0d91b3  cmp bl, 6
    X86_AT(c, 0xd91b3u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d91b6  je 0xd929e
    X86_AT(c, 0xd91b6u);
    if (x86_cc(c, 4)) { goto L_d929e; }
    X86_TICK(c, 7);
    // 0d91bc  cmp bl, 1
    X86_AT(c, 0xd91bcu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d91bf  je 0xd929e
    X86_AT(c, 0xd91bfu);
    if (x86_cc(c, 4)) { goto L_d929e; }
    X86_TICK(c, 17);
    // 0d91c5  lea eax, [ebp - 0x2d]
    X86_AT(c, 0xd91c5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD3u);
    // 0d91c8  push eax
    X86_AT(c, 0xd91c8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d91c9  push ebx
    X86_AT(c, 0xd91c9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d91ca  push 4
    X86_AT(c, 0xd91cau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d91cc  push 0xb1568
    X86_AT(c, 0xd91ccu);
    { uint32_t v = 0xB1568u; push32(c, v); }
    // 0d91d1  call 0xc8a68
    X86_AT(c, 0xd91d1u);
    push32(c, 0xd91d6u); x86_call_known(c, 0xc8a68u, f_000c8a68); X86_RET(c, 0xd91d6u);
    X86_TICK(c, 11);
    // 0d91d6  mov dword ptr [ebp - 0x40], eax
    X86_AT(c, 0xd91d6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)), c.r[0]);
    // 0d91d9  push 4
    X86_AT(c, 0xd91d9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d91db  call 0xca0a0
    X86_AT(c, 0xd91dbu);
    push32(c, 0xd91e0u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd91e0u);
    X86_TICK(c, 14);
    // 0d91e0  add esp, 0x14
    X86_AT(c, 0xd91e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d91e3  cmp dword ptr [ebp - 0x40], 0
    X86_AT(c, 0xd91e3u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u))), 0x0u, 0, 4);
    // 0d91e7  je 0xd9196
    X86_AT(c, 0xd91e7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd9196u); goto L_d9196; }
    X86_TICK(c, 11);
    // 0d91e9  push 0xc
    X86_AT(c, 0xd91e9u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d91eb  push 0x28
    X86_AT(c, 0xd91ebu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d91ed  call 0xcc814
    X86_AT(c, 0xd91edu);
    push32(c, 0xd91f2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd91f2u);
    X86_TICK(c, 14);
    // 0d91f2  push dword ptr [ebp - 0x40]
    X86_AT(c, 0xd91f2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u))); push32(c, v); }
    // 0d91f5  push 4
    X86_AT(c, 0xd91f5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d91f7  call 0xca414
    X86_AT(c, 0xd91f7u);
    push32(c, 0xd91fcu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd91fcu);
    X86_TICK(c, 27);
    // 0d91fc  sub eax, eax
    X86_AT(c, 0xd91fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d91fe  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xd91feu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0d9201  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xd9201u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 0d9204  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xd9204u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0d9207  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xd9207u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0d920a  add esp, 0x10
    X86_AT(c, 0xd920au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d920d  movzx edx, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xd920du);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)));
    // 0d9211  sub edx, 0x42
    X86_AT(c, 0xd9211u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x42u, 0, 4); }
    // 0d9214  cmp edx, 6
    X86_AT(c, 0xd9214u);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0d9217  ja 0xd929e
    X86_AT(c, 0xd9217u);
    if (x86_cc(c, 7)) { goto L_d929e; }
    X86_TICK(c, 7);
    // 0d921d  jmp dword ptr cs:[edx*4 + 0xd9225]
    X86_AT(c, 0xd921du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD9225u)));
      switch (t) {
      case 0xd9241u: goto L_d9241;
      case 0xd9257u: goto L_d9257;
      case 0xd926du: goto L_d926d;
      case 0xd9283u: goto L_d9283;
      case 0xd929eu: goto L_d929e;
      default: x86_jump(c, t); return; } }
L_d9241:
    X86_TICK(c, 33);
    // 0d9241  imul eax, edi, 0x21a
    X86_AT(c, 0xd9241u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9247  mov byte ptr [eax + 0xb0517], 0
    X86_AT(c, 0xd9247u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u)), 0x0u);
    // 0d924e  mov dword ptr [ebp - 0x28], 5
    X86_AT(c, 0xd924eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), 0x5u);
    // 0d9255  jmp 0xd929e
    X86_AT(c, 0xd9255u);
    goto L_d929e;
L_d9257:
    X86_TICK(c, 33);
    // 0d9257  imul eax, edi, 0x21a
    X86_AT(c, 0xd9257u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d925d  mov byte ptr [eax + 0xb0517], 1
    X86_AT(c, 0xd925du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u)), 0x1u);
    // 0d9264  mov dword ptr [ebp - 0x18], 5
    X86_AT(c, 0xd9264u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x5u);
    // 0d926b  jmp 0xd929e
    X86_AT(c, 0xd926bu);
    goto L_d929e;
L_d926d:
    X86_TICK(c, 33);
    // 0d926d  imul eax, edi, 0x21a
    X86_AT(c, 0xd926du);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9273  mov byte ptr [eax + 0xb0517], 2
    X86_AT(c, 0xd9273u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u)), 0x2u);
    // 0d927a  mov dword ptr [ebp - 0x10], 5
    X86_AT(c, 0xd927au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x5u);
    // 0d9281  jmp 0xd929e
    X86_AT(c, 0xd9281u);
    goto L_d929e;
L_d9283:
    X86_TICK(c, 28);
    // 0d9283  imul eax, edi, 0x21a
    X86_AT(c, 0xd9283u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9289  mov byte ptr [eax + 0xb0517], 3
    X86_AT(c, 0xd9289u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u)), 0x3u);
    // 0d9290  mov dword ptr [ebp - 0x10], 0xfffffffb
    X86_AT(c, 0xd9290u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0xFFFFFFFBu);
    // 0d9297  mov dword ptr [ebp - 0x20], 0xa
    X86_AT(c, 0xd9297u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), 0xAu);
L_d929e:
    X86_TICK(c, 7);
    // 0d929e  cmp bl, 5
    X86_AT(c, 0xd929eu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d92a1  jne 0xd92dc
    X86_AT(c, 0xd92a1u);
    if (x86_cc(c, 5)) { goto L_d92dc; }
    X86_TICK(c, 15);
    // 0d92a3  mov eax, 5
    X86_AT(c, 0xd92a3u);
    c.r[0] = 0x5u;
    // 0d92a8  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd92a8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d92ab  push 0xd
    X86_AT(c, 0xd92abu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d92ad  push eax
    X86_AT(c, 0xd92adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d92ae  call 0xca2d4
    X86_AT(c, 0xd92aeu);
    push32(c, 0xd92b3u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd92b3u);
    X86_TICK(c, 9);
    // 0d92b3  push 4
    X86_AT(c, 0xd92b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d92b5  call 0xca0a0
    X86_AT(c, 0xd92b5u);
    push32(c, 0xd92bau); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd92bau);
    X86_TICK(c, 11);
    // 0d92ba  push 0xc
    X86_AT(c, 0xd92bau);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d92bc  push 0x28
    X86_AT(c, 0xd92bcu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d92be  call 0xcc814
    X86_AT(c, 0xd92beu);
    push32(c, 0xd92c3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd92c3u);
    X86_TICK(c, 35);
    // 0d92c3  imul eax, edi, 0x21a
    X86_AT(c, 0xd92c3u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d92c9  add esp, 0x14
    X86_AT(c, 0xd92c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d92cc  mov al, byte ptr [eax + 0xb0517]
    X86_AT(c, 0xd92ccu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u))));
    // 0d92d2  cmp al, 3
    X86_AT(c, 0xd92d2u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d92d4  ja 0xd972f
    X86_AT(c, 0xd92d4u);
    if (x86_cc(c, 7)) { goto L_d972f; }
    X86_TICK(c, 7);
    // 0d92da  jmp 0xd9318
    X86_AT(c, 0xd92dau);
    goto L_d9318;
L_d92dc:
    X86_TICK(c, 7);
    // 0d92dc  cmp bl, 6
    X86_AT(c, 0xd92dcu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d92df  jne 0xd9327
    X86_AT(c, 0xd92dfu);
    if (x86_cc(c, 5)) { goto L_d9327; }
    X86_TICK(c, 13);
    // 0d92e1  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xd92e1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0d92e8  push 0xd
    X86_AT(c, 0xd92e8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d92ea  push 5
    X86_AT(c, 0xd92eau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d92ec  call 0xca2d4
    X86_AT(c, 0xd92ecu);
    push32(c, 0xd92f1u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd92f1u);
    X86_TICK(c, 9);
    // 0d92f1  push 4
    X86_AT(c, 0xd92f1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d92f3  call 0xca0a0
    X86_AT(c, 0xd92f3u);
    push32(c, 0xd92f8u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd92f8u);
    X86_TICK(c, 11);
    // 0d92f8  push 0xc
    X86_AT(c, 0xd92f8u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d92fa  push 0x28
    X86_AT(c, 0xd92fau);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d92fc  call 0xcc814
    X86_AT(c, 0xd92fcu);
    push32(c, 0xd9301u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9301u);
    X86_TICK(c, 35);
    // 0d9301  imul eax, edi, 0x21a
    X86_AT(c, 0xd9301u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9307  add esp, 0x14
    X86_AT(c, 0xd9307u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d930a  mov al, byte ptr [eax + 0xb0517]
    X86_AT(c, 0xd930au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u))));
    // 0d9310  cmp al, 3
    X86_AT(c, 0xd9310u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d9312  ja 0xd9962
    X86_AT(c, 0xd9312u);
    if (x86_cc(c, 7)) { goto L_d9962; }
L_d9318:
    X86_TICK(c, 15);
    // 0d9318  movzx eax, al
    X86_AT(c, 0xd9318u);
    c.r[0] = g8(c, 0);
    // 0d931b  push dword ptr [eax*4 + 0xa1e34]
    X86_AT(c, 0xd931bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E34u))); push32(c, v); }
    // 0d9322  jmp 0xd9723
    X86_AT(c, 0xd9322u);
    goto L_d9723;
L_d9327:
    X86_TICK(c, 7);
    // 0d9327  cmp bl, 1
    X86_AT(c, 0xd9327u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d932a  je 0xd97b2
    X86_AT(c, 0xd932au);
    if (x86_cc(c, 4)) { goto L_d97b2; }
    X86_TICK(c, 11);
    // 0d9330  push 0xd
    X86_AT(c, 0xd9330u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d9332  push 5
    X86_AT(c, 0xd9332u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9334  call 0xca2d4
    X86_AT(c, 0xd9334u);
    push32(c, 0xd9339u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd9339u);
    X86_TICK(c, 9);
    // 0d9339  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xd9339u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0d9340  jmp 0xd97a5
    X86_AT(c, 0xd9340u);
    goto L_d97a5;
L_d9345:
    X86_TICK(c, 27);
    // 0d9345  push 0xa
    X86_AT(c, 0xd9345u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d9347  push 0xf
    X86_AT(c, 0xd9347u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d9349  push 0xb
    X86_AT(c, 0xd9349u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d934b  push 2
    X86_AT(c, 0xd934bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d934d  push 0x19
    X86_AT(c, 0xd934du);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0d934f  push 0x34
    X86_AT(c, 0xd934fu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d9351  push 0xd0
    X86_AT(c, 0xd9351u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d9356  push 0x128
    X86_AT(c, 0xd9356u);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0d935b  push 0xd0
    X86_AT(c, 0xd935bu);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d9360  push 5
    X86_AT(c, 0xd9360u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9362  call 0xc9fbc
    X86_AT(c, 0xd9362u);
    push32(c, 0xd9367u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd9367u);
    X86_TICK(c, 9);
    // 0d9367  push 5
    X86_AT(c, 0xd9367u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9369  call 0xca0a0
    X86_AT(c, 0xd9369u);
    push32(c, 0xd936eu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd936eu);
    X86_TICK(c, 9);
    // 0d936e  push 5
    X86_AT(c, 0xd936eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9370  call 0xca100
    X86_AT(c, 0xd9370u);
    push32(c, 0xd9375u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd9375u);
    X86_TICK(c, 9);
    // 0d9375  push 5
    X86_AT(c, 0xd9375u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9377  call 0xca0a0
    X86_AT(c, 0xd9377u);
    push32(c, 0xd937cu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd937cu);
    X86_TICK(c, 13);
    // 0d937c  push 0
    X86_AT(c, 0xd937cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d937e  push 4
    X86_AT(c, 0xd937eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9380  push 5
    X86_AT(c, 0xd9380u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9382  call 0xca9c8
    X86_AT(c, 0xd9382u);
    push32(c, 0xd9387u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9387u);
    X86_TICK(c, 13);
    // 0d9387  add esp, 0x40
    X86_AT(c, 0xd9387u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d938a  push 0xb470
    X86_AT(c, 0xd938au);
    { uint32_t v = 0xB470u; push32(c, v); }
    // 0d938f  push 5
    X86_AT(c, 0xd938fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9391  call 0xc8cdc
    X86_AT(c, 0xd9391u);
    push32(c, 0xd9396u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9396u);
    X86_TICK(c, 13);
    // 0d9396  push 1
    X86_AT(c, 0xd9396u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d9398  push 6
    X86_AT(c, 0xd9398u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d939a  push 5
    X86_AT(c, 0xd939au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d939c  call 0xca9c8
    X86_AT(c, 0xd939cu);
    push32(c, 0xd93a1u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd93a1u);
    X86_TICK(c, 11);
    // 0d93a1  push 0xb488
    X86_AT(c, 0xd93a1u);
    { uint32_t v = 0xB488u; push32(c, v); }
    // 0d93a6  push 5
    X86_AT(c, 0xd93a6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d93a8  call 0xc8cdc
    X86_AT(c, 0xd93a8u);
    push32(c, 0xd93adu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd93adu);
    X86_TICK(c, 13);
    // 0d93ad  push 2
    X86_AT(c, 0xd93adu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d93af  push 6
    X86_AT(c, 0xd93afu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d93b1  push 5
    X86_AT(c, 0xd93b1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d93b3  call 0xca9c8
    X86_AT(c, 0xd93b3u);
    push32(c, 0xd93b8u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd93b8u);
    X86_TICK(c, 11);
    // 0d93b8  push 0xb4a0
    X86_AT(c, 0xd93b8u);
    { uint32_t v = 0xB4A0u; push32(c, v); }
    // 0d93bd  push 5
    X86_AT(c, 0xd93bdu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d93bf  call 0xc8cdc
    X86_AT(c, 0xd93bfu);
    push32(c, 0xd93c4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd93c4u);
    X86_TICK(c, 9);
    // 0d93c4  push 4
    X86_AT(c, 0xd93c4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d93c6  call 0xca0a0
    X86_AT(c, 0xd93c6u);
    push32(c, 0xd93cbu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd93cbu);
    X86_TICK(c, 11);
    // 0d93cb  push 0xd
    X86_AT(c, 0xd93cbu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d93cd  push 0x28
    X86_AT(c, 0xd93cdu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d93cf  call 0xcc814
    X86_AT(c, 0xd93cfu);
    push32(c, 0xd93d4u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd93d4u);
    X86_TICK(c, 13);
    // 0d93d4  add esp, 0x3c
    X86_AT(c, 0xd93d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d93d7  push 0xb4bc
    X86_AT(c, 0xd93d7u);
    { uint32_t v = 0xB4BCu; push32(c, v); }
    // 0d93dc  push 4
    X86_AT(c, 0xd93dcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d93de  call 0xca414
    X86_AT(c, 0xd93deu);
    push32(c, 0xd93e3u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd93e3u);
    X86_TICK(c, 2);
    // 0d93e3  add esp, 8
    X86_AT(c, 0xd93e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d93e6:
    X86_TICK(c, 11);
    // 0d93e6  push 0xd
    X86_AT(c, 0xd93e6u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d93e8  push 0x28
    X86_AT(c, 0xd93e8u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d93ea  call 0xcc814
    X86_AT(c, 0xd93eau);
    push32(c, 0xd93efu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd93efu);
    X86_TICK(c, 9);
    // 0d93ef  push 4
    X86_AT(c, 0xd93efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d93f1  call 0xc79a4
    X86_AT(c, 0xd93f1u);
    push32(c, 0xd93f6u); x86_call_known(c, 0xc79a4u, f_000c79a4); X86_RET(c, 0xd93f6u);
    X86_TICK(c, 12);
    // 0d93f6  xchg ebx, eax
    X86_AT(c, 0xd93f6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d93f7  add esp, 0xc
    X86_AT(c, 0xd93f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d93fa  cmp bl, 5
    X86_AT(c, 0xd93fau);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d93fd  je 0xd9486
    X86_AT(c, 0xd93fdu);
    if (x86_cc(c, 4)) { goto L_d9486; }
    X86_TICK(c, 7);
    // 0d9403  cmp bl, 6
    X86_AT(c, 0xd9403u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d9406  je 0xd9486
    X86_AT(c, 0xd9406u);
    if (x86_cc(c, 4)) { goto L_d9486; }
    X86_TICK(c, 7);
    // 0d940c  cmp bl, 1
    X86_AT(c, 0xd940cu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d940f  je 0xd9486
    X86_AT(c, 0xd940fu);
    if (x86_cc(c, 4)) { goto L_d9486; }
    X86_TICK(c, 17);
    // 0d9415  lea eax, [ebp - 0x2d]
    X86_AT(c, 0xd9415u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD3u);
    // 0d9418  push eax
    X86_AT(c, 0xd9418u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9419  push ebx
    X86_AT(c, 0xd9419u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d941a  push 3
    X86_AT(c, 0xd941au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d941c  push 0xb1988
    X86_AT(c, 0xd941cu);
    { uint32_t v = 0xB1988u; push32(c, v); }
    // 0d9421  call 0xc8a68
    X86_AT(c, 0xd9421u);
    push32(c, 0xd9426u); x86_call_known(c, 0xc8a68u, f_000c8a68); X86_RET(c, 0xd9426u);
    X86_TICK(c, 11);
    // 0d9426  mov dword ptr [ebp - 0x44], eax
    X86_AT(c, 0xd9426u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu)), c.r[0]);
    // 0d9429  add esp, 0x10
    X86_AT(c, 0xd9429u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d942c  and eax, eax
    X86_AT(c, 0xd942cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d942e  je 0xd93e6
    X86_AT(c, 0xd942eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd93e6u); goto L_d93e6; }
    X86_TICK(c, 11);
    // 0d9430  push 0xd
    X86_AT(c, 0xd9430u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d9432  push 0x28
    X86_AT(c, 0xd9432u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9434  call 0xcc814
    X86_AT(c, 0xd9434u);
    push32(c, 0xd9439u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9439u);
    X86_TICK(c, 14);
    // 0d9439  push dword ptr [ebp - 0x44]
    X86_AT(c, 0xd9439u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu))); push32(c, v); }
    // 0d943c  push 4
    X86_AT(c, 0xd943cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d943e  call 0xca414
    X86_AT(c, 0xd943eu);
    push32(c, 0xd9443u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd9443u);
    X86_TICK(c, 15);
    // 0d9443  add esp, 0x10
    X86_AT(c, 0xd9443u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d9446  movzx edx, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xd9446u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)));
    // 0d944a  cmp edx, 0x46
    X86_AT(c, 0xd944au);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0d944d  je 0xd946a
    X86_AT(c, 0xd944du);
    if (x86_cc(c, 4)) { goto L_d946a; }
    X86_TICK(c, 7);
    // 0d944f  cmp edx, 0x4d
    X86_AT(c, 0xd944fu);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0d9452  je 0xd945b
    X86_AT(c, 0xd9452u);
    if (x86_cc(c, 4)) { goto L_d945b; }
    X86_TICK(c, 7);
    // 0d9454  cmp edx, 0x4f
    X86_AT(c, 0xd9454u);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0d9457  je 0xd9479
    X86_AT(c, 0xd9457u);
    if (x86_cc(c, 4)) { goto L_d9479; }
    X86_TICK(c, 7);
    // 0d9459  jmp 0xd9486
    X86_AT(c, 0xd9459u);
    goto L_d9486;
L_d945b:
    X86_TICK(c, 31);
    // 0d945b  imul eax, edi, 0x21a
    X86_AT(c, 0xd945bu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9461  mov byte ptr [eax + 0xb0519], 0
    X86_AT(c, 0xd9461u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u)), 0x0u);
    // 0d9468  jmp 0xd9486
    X86_AT(c, 0xd9468u);
    goto L_d9486;
L_d946a:
    X86_TICK(c, 31);
    // 0d946a  imul eax, edi, 0x21a
    X86_AT(c, 0xd946au);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9470  mov byte ptr [eax + 0xb0519], 1
    X86_AT(c, 0xd9470u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u)), 0x1u);
    // 0d9477  jmp 0xd9486
    X86_AT(c, 0xd9477u);
    goto L_d9486;
L_d9479:
    X86_TICK(c, 24);
    // 0d9479  imul eax, edi, 0x21a
    X86_AT(c, 0xd9479u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d947f  mov byte ptr [eax + 0xb0519], 2
    X86_AT(c, 0xd947fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u)), 0x2u);
L_d9486:
    X86_TICK(c, 7);
    // 0d9486  cmp bl, 5
    X86_AT(c, 0xd9486u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d9489  jne 0xd94d1
    X86_AT(c, 0xd9489u);
    if (x86_cc(c, 5)) { goto L_d94d1; }
    X86_TICK(c, 13);
    // 0d948b  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xd948bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0d9492  push 0xd
    X86_AT(c, 0xd9492u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d9494  push 5
    X86_AT(c, 0xd9494u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9496  call 0xca2d4
    X86_AT(c, 0xd9496u);
    push32(c, 0xd949bu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd949bu);
    X86_TICK(c, 9);
    // 0d949b  push 4
    X86_AT(c, 0xd949bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d949d  call 0xca0a0
    X86_AT(c, 0xd949du);
    push32(c, 0xd94a2u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd94a2u);
    X86_TICK(c, 11);
    // 0d94a2  push 0xd
    X86_AT(c, 0xd94a2u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d94a4  push 0x28
    X86_AT(c, 0xd94a4u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d94a6  call 0xcc814
    X86_AT(c, 0xd94a6u);
    push32(c, 0xd94abu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd94abu);
    X86_TICK(c, 35);
    // 0d94ab  imul eax, edi, 0x21a
    X86_AT(c, 0xd94abu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d94b1  add esp, 0x14
    X86_AT(c, 0xd94b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d94b4  mov al, byte ptr [eax + 0xb0519]
    X86_AT(c, 0xd94b4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u))));
    // 0d94ba  cmp al, 2
    X86_AT(c, 0xd94bau);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0d94bc  ja 0xd972f
    X86_AT(c, 0xd94bcu);
    if (x86_cc(c, 7)) { goto L_d972f; }
L_d94c2:
    X86_TICK(c, 15);
    // 0d94c2  movzx eax, al
    X86_AT(c, 0xd94c2u);
    c.r[0] = g8(c, 0);
    // 0d94c5  push dword ptr [eax*4 + 0xa1e28]
    X86_AT(c, 0xd94c5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E28u))); push32(c, v); }
    // 0d94cc  jmp 0xd9723
    X86_AT(c, 0xd94ccu);
    goto L_d9723;
L_d94d1:
    X86_TICK(c, 7);
    // 0d94d1  cmp bl, 6
    X86_AT(c, 0xd94d1u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d94d4  jne 0xd950f
    X86_AT(c, 0xd94d4u);
    if (x86_cc(c, 5)) { goto L_d950f; }
    X86_TICK(c, 13);
    // 0d94d6  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xd94d6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0d94dd  push 0xd
    X86_AT(c, 0xd94ddu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d94df  push 5
    X86_AT(c, 0xd94dfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d94e1  call 0xca2d4
    X86_AT(c, 0xd94e1u);
    push32(c, 0xd94e6u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd94e6u);
    X86_TICK(c, 9);
    // 0d94e6  push 4
    X86_AT(c, 0xd94e6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d94e8  call 0xca0a0
    X86_AT(c, 0xd94e8u);
    push32(c, 0xd94edu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd94edu);
    X86_TICK(c, 11);
    // 0d94ed  push 0xd
    X86_AT(c, 0xd94edu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d94ef  push 0x28
    X86_AT(c, 0xd94efu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d94f1  call 0xcc814
    X86_AT(c, 0xd94f1u);
    push32(c, 0xd94f6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd94f6u);
    X86_TICK(c, 35);
    // 0d94f6  imul eax, edi, 0x21a
    X86_AT(c, 0xd94f6u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d94fc  add esp, 0x14
    X86_AT(c, 0xd94fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d94ff  mov al, byte ptr [eax + 0xb0519]
    X86_AT(c, 0xd94ffu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u))));
    // 0d9505  cmp al, 2
    X86_AT(c, 0xd9505u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0d9507  ja 0xd97e4
    X86_AT(c, 0xd9507u);
    if (x86_cc(c, 7)) { goto L_d97e4; }
    X86_TICK(c, 7);
    // 0d950d  jmp 0xd94c2
    X86_AT(c, 0xd950du);
    X86_POLL(c, 0xd94c2u); goto L_d94c2;
L_d950f:
    X86_TICK(c, 7);
    // 0d950f  cmp bl, 1
    X86_AT(c, 0xd950fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d9512  je 0xd97b2
    X86_AT(c, 0xd9512u);
    if (x86_cc(c, 4)) { goto L_d97b2; }
    X86_TICK(c, 11);
    // 0d9518  push 0xd
    X86_AT(c, 0xd9518u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d951a  push 5
    X86_AT(c, 0xd951au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d951c  call 0xca2d4
    X86_AT(c, 0xd951cu);
    push32(c, 0xd9521u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd9521u);
    X86_TICK(c, 9);
    // 0d9521  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xd9521u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0d9528  jmp 0xd97a5
    X86_AT(c, 0xd9528u);
    goto L_d97a5;
L_d952d:
    X86_TICK(c, 27);
    // 0d952d  push 0xa
    X86_AT(c, 0xd952du);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d952f  push 0xf
    X86_AT(c, 0xd952fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d9531  push 0xb
    X86_AT(c, 0xd9531u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d9533  push 7
    X86_AT(c, 0xd9533u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d9535  push 0x2f
    X86_AT(c, 0xd9535u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0d9537  push 0x54
    X86_AT(c, 0xd9537u);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0d9539  push 0xd0
    X86_AT(c, 0xd9539u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d953e  push 0x128
    X86_AT(c, 0xd953eu);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0d9543  push 0xd0
    X86_AT(c, 0xd9543u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d9548  push 5
    X86_AT(c, 0xd9548u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d954a  call 0xc9fbc
    X86_AT(c, 0xd954au);
    push32(c, 0xd954fu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd954fu);
    X86_TICK(c, 9);
    // 0d954f  push 5
    X86_AT(c, 0xd954fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9551  call 0xca0a0
    X86_AT(c, 0xd9551u);
    push32(c, 0xd9556u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd9556u);
    X86_TICK(c, 9);
    // 0d9556  push 5
    X86_AT(c, 0xd9556u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9558  call 0xca100
    X86_AT(c, 0xd9558u);
    push32(c, 0xd955du); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd955du);
    X86_TICK(c, 9);
    // 0d955d  push 5
    X86_AT(c, 0xd955du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d955f  call 0xca0a0
    X86_AT(c, 0xd955fu);
    push32(c, 0xd9564u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd9564u);
    X86_TICK(c, 13);
    // 0d9564  push 0
    X86_AT(c, 0xd9564u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d9566  push 4
    X86_AT(c, 0xd9566u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9568  push 5
    X86_AT(c, 0xd9568u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d956a  call 0xca9c8
    X86_AT(c, 0xd956au);
    push32(c, 0xd956fu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd956fu);
    X86_TICK(c, 13);
    // 0d956f  add esp, 0x40
    X86_AT(c, 0xd956fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d9572  push 0xb4d0
    X86_AT(c, 0xd9572u);
    { uint32_t v = 0xB4D0u; push32(c, v); }
    // 0d9577  push 5
    X86_AT(c, 0xd9577u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9579  call 0xc8cdc
    X86_AT(c, 0xd9579u);
    push32(c, 0xd957eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd957eu);
    X86_TICK(c, 13);
    // 0d957e  push 1
    X86_AT(c, 0xd957eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d9580  push 5
    X86_AT(c, 0xd9580u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9582  push 5
    X86_AT(c, 0xd9582u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9584  call 0xca9c8
    X86_AT(c, 0xd9584u);
    push32(c, 0xd9589u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9589u);
    X86_TICK(c, 11);
    // 0d9589  push 0xb4ec
    X86_AT(c, 0xd9589u);
    { uint32_t v = 0xB4ECu; push32(c, v); }
    // 0d958e  push 5
    X86_AT(c, 0xd958eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9590  call 0xc8cdc
    X86_AT(c, 0xd9590u);
    push32(c, 0xd9595u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9595u);
    X86_TICK(c, 13);
    // 0d9595  push 2
    X86_AT(c, 0xd9595u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d9597  push 5
    X86_AT(c, 0xd9597u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9599  push 5
    X86_AT(c, 0xd9599u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d959b  call 0xca9c8
    X86_AT(c, 0xd959bu);
    push32(c, 0xd95a0u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd95a0u);
    X86_TICK(c, 11);
    // 0d95a0  push 0xb514
    X86_AT(c, 0xd95a0u);
    { uint32_t v = 0xB514u; push32(c, v); }
    // 0d95a5  push 5
    X86_AT(c, 0xd95a5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95a7  call 0xc8cdc
    X86_AT(c, 0xd95a7u);
    push32(c, 0xd95acu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd95acu);
    X86_TICK(c, 13);
    // 0d95ac  push 3
    X86_AT(c, 0xd95acu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d95ae  push 5
    X86_AT(c, 0xd95aeu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95b0  push 5
    X86_AT(c, 0xd95b0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95b2  call 0xca9c8
    X86_AT(c, 0xd95b2u);
    push32(c, 0xd95b7u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd95b7u);
    X86_TICK(c, 13);
    // 0d95b7  add esp, 0x3c
    X86_AT(c, 0xd95b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d95ba  push 0xb53c
    X86_AT(c, 0xd95bau);
    { uint32_t v = 0xB53Cu; push32(c, v); }
    // 0d95bf  push 5
    X86_AT(c, 0xd95bfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95c1  call 0xc8cdc
    X86_AT(c, 0xd95c1u);
    push32(c, 0xd95c6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd95c6u);
    X86_TICK(c, 13);
    // 0d95c6  push 4
    X86_AT(c, 0xd95c6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d95c8  push 5
    X86_AT(c, 0xd95c8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95ca  push 5
    X86_AT(c, 0xd95cau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95cc  call 0xca9c8
    X86_AT(c, 0xd95ccu);
    push32(c, 0xd95d1u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd95d1u);
    X86_TICK(c, 11);
    // 0d95d1  push 0xb564
    X86_AT(c, 0xd95d1u);
    { uint32_t v = 0xB564u; push32(c, v); }
    // 0d95d6  push 5
    X86_AT(c, 0xd95d6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95d8  call 0xc8cdc
    X86_AT(c, 0xd95d8u);
    push32(c, 0xd95ddu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd95ddu);
    X86_TICK(c, 9);
    // 0d95dd  push 4
    X86_AT(c, 0xd95ddu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d95df  call 0xca0a0
    X86_AT(c, 0xd95dfu);
    push32(c, 0xd95e4u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd95e4u);
    X86_TICK(c, 13);
    // 0d95e4  add esp, 0x20
    X86_AT(c, 0xd95e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d95e7  push 0xe
    X86_AT(c, 0xd95e7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d95e9  push 0x28
    X86_AT(c, 0xd95e9u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d95eb  call 0xcc814
    X86_AT(c, 0xd95ebu);
    push32(c, 0xd95f0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd95f0u);
    X86_TICK(c, 11);
    // 0d95f0  push 0xb58c
    X86_AT(c, 0xd95f0u);
    { uint32_t v = 0xB58Cu; push32(c, v); }
    // 0d95f5  push 4
    X86_AT(c, 0xd95f5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d95f7  call 0xca414
    X86_AT(c, 0xd95f7u);
    push32(c, 0xd95fcu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd95fcu);
    X86_TICK(c, 2);
    // 0d95fc  add esp, 0x10
    X86_AT(c, 0xd95fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d95ff:
    X86_TICK(c, 11);
    // 0d95ff  push 0xe
    X86_AT(c, 0xd95ffu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d9601  push 0x28
    X86_AT(c, 0xd9601u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9603  call 0xcc814
    X86_AT(c, 0xd9603u);
    push32(c, 0xd9608u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9608u);
    X86_TICK(c, 9);
    // 0d9608  push 4
    X86_AT(c, 0xd9608u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d960a  call 0xc79a4
    X86_AT(c, 0xd960au);
    push32(c, 0xd960fu); x86_call_known(c, 0xc79a4u, f_000c79a4); X86_RET(c, 0xd960fu);
    X86_TICK(c, 12);
    // 0d960f  xchg ebx, eax
    X86_AT(c, 0xd960fu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d9610  add esp, 0xc
    X86_AT(c, 0xd9610u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d9613  cmp bl, 5
    X86_AT(c, 0xd9613u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d9616  je 0xd96e1
    X86_AT(c, 0xd9616u);
    if (x86_cc(c, 4)) { goto L_d96e1; }
    X86_TICK(c, 7);
    // 0d961c  cmp bl, 6
    X86_AT(c, 0xd961cu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d961f  je 0xd96e1
    X86_AT(c, 0xd961fu);
    if (x86_cc(c, 4)) { goto L_d96e1; }
    X86_TICK(c, 7);
    // 0d9625  cmp bl, 1
    X86_AT(c, 0xd9625u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d9628  je 0xd96e1
    X86_AT(c, 0xd9628u);
    if (x86_cc(c, 4)) { goto L_d96e1; }
    X86_TICK(c, 17);
    // 0d962e  lea eax, [ebp - 0x2d]
    X86_AT(c, 0xd962eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD3u);
    // 0d9631  push eax
    X86_AT(c, 0xd9631u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9632  push ebx
    X86_AT(c, 0xd9632u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9633  push 4
    X86_AT(c, 0xd9633u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9635  push 0xb1778
    X86_AT(c, 0xd9635u);
    { uint32_t v = 0xB1778u; push32(c, v); }
    // 0d963a  call 0xc8a68
    X86_AT(c, 0xd963au);
    push32(c, 0xd963fu); x86_call_known(c, 0xc8a68u, f_000c8a68); X86_RET(c, 0xd963fu);
    X86_TICK(c, 11);
    // 0d963f  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xd963fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0d9642  add esp, 0x10
    X86_AT(c, 0xd9642u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d9645  and eax, eax
    X86_AT(c, 0xd9645u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d9647  je 0xd95ff
    X86_AT(c, 0xd9647u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd95ffu); goto L_d95ff; }
    X86_TICK(c, 11);
    // 0d9649  push 0xe
    X86_AT(c, 0xd9649u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d964b  push 0x28
    X86_AT(c, 0xd964bu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d964d  call 0xcc814
    X86_AT(c, 0xd964du);
    push32(c, 0xd9652u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9652u);
    X86_TICK(c, 14);
    // 0d9652  push dword ptr [ebp - 0x48]
    X86_AT(c, 0xd9652u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))); push32(c, v); }
    // 0d9655  push 4
    X86_AT(c, 0xd9655u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9657  call 0xca414
    X86_AT(c, 0xd9657u);
    push32(c, 0xd965cu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd965cu);
    X86_TICK(c, 25);
    // 0d965c  sub eax, eax
    X86_AT(c, 0xd965cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d965e  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xd965eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0d9661  mov dword ptr [ebp - 0x24], eax
    X86_AT(c, 0xd9661u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[0]);
    // 0d9664  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xd9664u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0d9667  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd9667u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d966a  add esp, 0x10
    X86_AT(c, 0xd966au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d966d  movzx edx, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xd966du);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)));
    // 0d9671  cmp edx, 0x43
    X86_AT(c, 0xd9671u);
    (void)x86_sub(c, c.r[2], 0x43u, 0, 4);
    // 0d9674  je 0xd96a1
    X86_AT(c, 0xd9674u);
    if (x86_cc(c, 4)) { goto L_d96a1; }
    X86_TICK(c, 7);
    // 0d9676  cmp edx, 0x46
    X86_AT(c, 0xd9676u);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0d9679  je 0xd9687
    X86_AT(c, 0xd9679u);
    if (x86_cc(c, 4)) { goto L_d9687; }
    X86_TICK(c, 7);
    // 0d967b  cmp edx, 0x54
    X86_AT(c, 0xd967bu);
    (void)x86_sub(c, c.r[2], 0x54u, 0, 4);
    // 0d967e  je 0xd96cd
    X86_AT(c, 0xd967eu);
    if (x86_cc(c, 4)) { goto L_d96cd; }
    X86_TICK(c, 7);
    // 0d9680  cmp edx, 0x57
    X86_AT(c, 0xd9680u);
    (void)x86_sub(c, c.r[2], 0x57u, 0, 4);
    // 0d9683  je 0xd96b7
    X86_AT(c, 0xd9683u);
    if (x86_cc(c, 4)) { goto L_d96b7; }
    X86_TICK(c, 7);
    // 0d9685  jmp 0xd96e1
    X86_AT(c, 0xd9685u);
    goto L_d96e1;
L_d9687:
    X86_TICK(c, 37);
    // 0d9687  imul eax, edi, 0x21a
    X86_AT(c, 0xd9687u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d968d  mov byte ptr [eax + 0xb0518], 0
    X86_AT(c, 0xd968du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u)), 0x0u);
    // 0d9694  mov eax, 0xa
    X86_AT(c, 0xd9694u);
    c.r[0] = 0xAu;
    // 0d9699  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd9699u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d969c  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xd969cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0d969f  jmp 0xd96e1
    X86_AT(c, 0xd969fu);
    goto L_d96e1;
L_d96a1:
    X86_TICK(c, 33);
    // 0d96a1  imul eax, edi, 0x21a
    X86_AT(c, 0xd96a1u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d96a7  mov byte ptr [eax + 0xb0518], 1
    X86_AT(c, 0xd96a7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u)), 0x1u);
    // 0d96ae  mov dword ptr [ebp - 0x24], 0xa
    X86_AT(c, 0xd96aeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0xAu);
    // 0d96b5  jmp 0xd96e1
    X86_AT(c, 0xd96b5u);
    goto L_d96e1;
L_d96b7:
    X86_TICK(c, 33);
    // 0d96b7  imul eax, edi, 0x21a
    X86_AT(c, 0xd96b7u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d96bd  mov byte ptr [eax + 0xb0518], 2
    X86_AT(c, 0xd96bdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u)), 0x2u);
    // 0d96c4  mov dword ptr [ebp - 0x2c], 0xa
    X86_AT(c, 0xd96c4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0xAu);
    // 0d96cb  jmp 0xd96e1
    X86_AT(c, 0xd96cbu);
    goto L_d96e1;
L_d96cd:
    X86_TICK(c, 26);
    // 0d96cd  imul eax, edi, 0x21a
    X86_AT(c, 0xd96cdu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d96d3  mov byte ptr [eax + 0xb0518], 3
    X86_AT(c, 0xd96d3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u)), 0x3u);
    // 0d96da  mov dword ptr [ebp - 0x1c], 0xa
    X86_AT(c, 0xd96dau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), 0xAu);
L_d96e1:
    X86_TICK(c, 7);
    // 0d96e1  cmp bl, 5
    X86_AT(c, 0xd96e1u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d96e4  jne 0xd973a
    X86_AT(c, 0xd96e4u);
    if (x86_cc(c, 5)) { goto L_d973a; }
    X86_TICK(c, 13);
    // 0d96e6  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xd96e6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0d96ed  push 0xd
    X86_AT(c, 0xd96edu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d96ef  push 5
    X86_AT(c, 0xd96efu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d96f1  call 0xca2d4
    X86_AT(c, 0xd96f1u);
    push32(c, 0xd96f6u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd96f6u);
    X86_TICK(c, 9);
    // 0d96f6  push 4
    X86_AT(c, 0xd96f6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d96f8  call 0xca0a0
    X86_AT(c, 0xd96f8u);
    push32(c, 0xd96fdu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd96fdu);
    X86_TICK(c, 11);
    // 0d96fd  push 0xe
    X86_AT(c, 0xd96fdu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d96ff  push 0x28
    X86_AT(c, 0xd96ffu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9701  call 0xcc814
    X86_AT(c, 0xd9701u);
    push32(c, 0xd9706u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9706u);
    X86_TICK(c, 35);
    // 0d9706  imul eax, edi, 0x21a
    X86_AT(c, 0xd9706u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d970c  add esp, 0x14
    X86_AT(c, 0xd970cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d970f  mov al, byte ptr [eax + 0xb0518]
    X86_AT(c, 0xd970fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u))));
    // 0d9715  cmp al, 3
    X86_AT(c, 0xd9715u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d9717  ja 0xd972f
    X86_AT(c, 0xd9717u);
    if (x86_cc(c, 7)) { goto L_d972f; }
    X86_TICK(c, 8);
    // 0d9719  movzx eax, al
    X86_AT(c, 0xd9719u);
    c.r[0] = g8(c, 0);
    // 0d971c  push dword ptr [eax*4 + 0xa1ed4]
    X86_AT(c, 0xd971cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1ED4u))); push32(c, v); }
L_d9723:
    X86_TICK(c, 9);
    // 0d9723  push 4
    X86_AT(c, 0xd9723u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9725  call 0xc8cdc
    X86_AT(c, 0xd9725u);
    push32(c, 0xd972au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd972au);
    X86_TICK(c, 7);
    // 0d972a  jmp 0xd97a5
    X86_AT(c, 0xd972au);
    goto L_d97a5;
L_d972f:
    X86_TICK(c, 11);
    // 0d972f  push 0x20
    X86_AT(c, 0xd972fu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0d9731  push 4
    X86_AT(c, 0xd9731u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9733  call 0xca58c
    X86_AT(c, 0xd9733u);
    push32(c, 0xd9738u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xd9738u);
    X86_TICK(c, 7);
    // 0d9738  jmp 0xd97a5
    X86_AT(c, 0xd9738u);
    goto L_d97a5;
L_d973a:
    X86_TICK(c, 7);
    // 0d973a  cmp bl, 6
    X86_AT(c, 0xd973au);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d973d  jne 0xd97ad
    X86_AT(c, 0xd973du);
    if (x86_cc(c, 5)) { goto L_d97ad; }
    X86_TICK(c, 11);
    // 0d973f  push 0xd
    X86_AT(c, 0xd973fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d9741  push 5
    X86_AT(c, 0xd9741u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9743  call 0xca2d4
    X86_AT(c, 0xd9743u);
    push32(c, 0xd9748u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd9748u);
    X86_TICK(c, 9);
    // 0d9748  push 4
    X86_AT(c, 0xd9748u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d974a  call 0xca0a0
    X86_AT(c, 0xd974au);
    push32(c, 0xd974fu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd974fu);
    X86_TICK(c, 11);
    // 0d974f  push 0xe
    X86_AT(c, 0xd974fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d9751  push 0x28
    X86_AT(c, 0xd9751u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9753  call 0xcc814
    X86_AT(c, 0xd9753u);
    push32(c, 0xd9758u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9758u);
    X86_TICK(c, 13);
    // 0d9758  add esp, 0x14
    X86_AT(c, 0xd9758u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d975b  mov eax, dword ptr [ebp - 0x48]
    X86_AT(c, 0xd975bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)));
    // 0d975e  and eax, eax
    X86_AT(c, 0xd975eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d9760  je 0xd976d
    X86_AT(c, 0xd9760u);
    if (x86_cc(c, 4)) { goto L_d976d; }
    X86_TICK(c, 11);
    // 0d9762  push eax
    X86_AT(c, 0xd9762u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9763  push 4
    X86_AT(c, 0xd9763u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9765  call 0xca414
    X86_AT(c, 0xd9765u);
    push32(c, 0xd976au); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd976au);
    X86_TICK(c, 2);
    // 0d976a  add esp, 8
    X86_AT(c, 0xd976au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d976d:
    X86_TICK(c, 11);
    // 0d976d  push 0x20
    X86_AT(c, 0xd976du);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0d976f  push 4
    X86_AT(c, 0xd976fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9771  call 0xca58c
    X86_AT(c, 0xd9771u);
    push32(c, 0xd9776u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xd9776u);
    X86_TICK(c, 35);
    // 0d9776  imul eax, edi, 0x21a
    X86_AT(c, 0xd9776u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d977c  add esp, 8
    X86_AT(c, 0xd977cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d977f  mov al, byte ptr [eax + 0xb0518]
    X86_AT(c, 0xd977fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u))));
    // 0d9785  cmp al, 3
    X86_AT(c, 0xd9785u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d9787  ja 0xd9814
    X86_AT(c, 0xd9787u);
    if (x86_cc(c, 7)) { goto L_d9814; }
    X86_TICK(c, 17);
    // 0d978d  movzx eax, al
    X86_AT(c, 0xd978du);
    c.r[0] = g8(c, 0);
    // 0d9790  push dword ptr [eax*4 + 0xa1ed4]
    X86_AT(c, 0xd9790u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1ED4u))); push32(c, v); }
    // 0d9797  push 4
    X86_AT(c, 0xd9797u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9799  call 0xc8cdc
    X86_AT(c, 0xd9799u);
    push32(c, 0xd979eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd979eu);
    X86_TICK(c, 2);
    // 0d979e  mov dword ptr [ebp - 4], 9
    X86_AT(c, 0xd979eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x9u);
L_d97a5:
    X86_TICK(c, 9);
    // 0d97a5  add esp, 8
    X86_AT(c, 0xd97a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d97a8  jmp 0xd89fa
    X86_AT(c, 0xd97a8u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d97ad:
    X86_TICK(c, 7);
    // 0d97ad  cmp bl, 1
    X86_AT(c, 0xd97adu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d97b0  jne 0xd97c8
    X86_AT(c, 0xd97b0u);
    if (x86_cc(c, 5)) { goto L_d97c8; }
L_d97b2:
    X86_TICK(c, 11);
    // 0d97b2  push 0xd
    X86_AT(c, 0xd97b2u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d97b4  push 5
    X86_AT(c, 0xd97b4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d97b6  call 0xca2d4
    X86_AT(c, 0xd97b6u);
    push32(c, 0xd97bbu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd97bbu);
    X86_TICK(c, 11);
    // 0d97bb  mov eax, 0xffffffff
    X86_AT(c, 0xd97bbu);
    c.r[0] = 0xFFFFFFFFu;
    // 0d97c0  add esp, 8
    X86_AT(c, 0xd97c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d97c3  jmp 0xd9a1b
    X86_AT(c, 0xd97c3u);
    goto L_d9a1b;
L_d97c8:
    X86_TICK(c, 11);
    // 0d97c8  push 0xd
    X86_AT(c, 0xd97c8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d97ca  push 5
    X86_AT(c, 0xd97cau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d97cc  call 0xca2d4
    X86_AT(c, 0xd97ccu);
    push32(c, 0xd97d1u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd97d1u);
    X86_TICK(c, 35);
    // 0d97d1  imul eax, edi, 0x21a
    X86_AT(c, 0xd97d1u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d97d7  add esp, 8
    X86_AT(c, 0xd97d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d97da  mov al, byte ptr [eax + 0xb0519]
    X86_AT(c, 0xd97dau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u))));
    // 0d97e0  cmp al, 3
    X86_AT(c, 0xd97e0u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d97e2  jbe 0xd97f0
    X86_AT(c, 0xd97e2u);
    if (x86_cc(c, 6)) { goto L_d97f0; }
L_d97e4:
    X86_TICK(c, 9);
    // 0d97e4  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xd97e4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0d97eb  jmp 0xd89fa
    X86_AT(c, 0xd97ebu);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d97f0:
    X86_TICK(c, 33);
    // 0d97f0  imul eax, edi, 0x21a
    X86_AT(c, 0xd97f0u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d97f6  mov al, byte ptr [eax + 0xb0517]
    X86_AT(c, 0xd97f6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u))));
    // 0d97fc  cmp al, 4
    X86_AT(c, 0xd97fcu);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 0d97fe  ja 0xd9962
    X86_AT(c, 0xd97feu);
    if (x86_cc(c, 7)) { goto L_d9962; }
    X86_TICK(c, 33);
    // 0d9804  imul eax, edi, 0x21a
    X86_AT(c, 0xd9804u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d980a  mov al, byte ptr [eax + 0xb0518]
    X86_AT(c, 0xd980au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u))));
    // 0d9810  cmp al, 4
    X86_AT(c, 0xd9810u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 0d9812  jbe 0xd9820
    X86_AT(c, 0xd9812u);
    if (x86_cc(c, 6)) { goto L_d9820; }
L_d9814:
    X86_TICK(c, 9);
    // 0d9814  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xd9814u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0d981b  jmp 0xd89fa
    X86_AT(c, 0xd981bu);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d9820:
    X86_TICK(c, 9);
    // 0d9820  mov dword ptr [ebp - 4], 9
    X86_AT(c, 0xd9820u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x9u);
    // 0d9827  jmp 0xd89fa
    X86_AT(c, 0xd9827u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d982c:
    X86_TICK(c, 11);
    // 0d982c  push 0xf
    X86_AT(c, 0xd982cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d982e  push 0x28
    X86_AT(c, 0xd982eu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9830  call 0xcc814
    X86_AT(c, 0xd9830u);
    push32(c, 0xd9835u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9835u);
    X86_TICK(c, 11);
    // 0d9835  push 0xb5a4
    X86_AT(c, 0xd9835u);
    { uint32_t v = 0xB5A4u; push32(c, v); }
    // 0d983a  push 4
    X86_AT(c, 0xd983au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d983c  call 0xca414
    X86_AT(c, 0xd983cu);
    push32(c, 0xd9841u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd9841u);
    X86_TICK(c, 11);
    // 0d9841  push 0xf
    X86_AT(c, 0xd9841u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d9843  push 0x28
    X86_AT(c, 0xd9843u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9845  call 0xcc814
    X86_AT(c, 0xd9845u);
    push32(c, 0xd984au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd984au);
    X86_TICK(c, 15);
    // 0d984a  push 0xf
    X86_AT(c, 0xd984au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d984c  lea eax, [ebp - 0x3c]
    X86_AT(c, 0xd984cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC4u);
    // 0d984f  push eax
    X86_AT(c, 0xd984fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9850  push 4
    X86_AT(c, 0xd9850u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9852  call 0xc85e4
    X86_AT(c, 0xd9852u);
    push32(c, 0xd9857u); x86_call_known(c, 0xc85e4u, f_000c85e4); X86_RET(c, 0xd9857u);
    X86_TICK(c, 9);
    // 0d9857  add esp, 0x24
    X86_AT(c, 0xd9857u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0d985a  and eax, eax
    X86_AT(c, 0xd985au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d985c  jne 0xd9868
    X86_AT(c, 0xd985cu);
    if (x86_cc(c, 5)) { goto L_d9868; }
L_d985e:
    X86_TICK(c, 9);
    // 0d985e  mov eax, 0xffffffff
    X86_AT(c, 0xd985eu);
    c.r[0] = 0xFFFFFFFFu;
    // 0d9863  jmp 0xd9a1b
    X86_AT(c, 0xd9863u);
    goto L_d9a1b;
L_d9868:
    X86_TICK(c, 2);
    // 0d9868  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xd9868u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_d986f:
    X86_TICK(c, 16);
    // 0d986f  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd986fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d9872  cmp byte ptr [ebp + eax*1 - 0x3c], 0x20
    X86_AT(c, 0xd9872u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFC4u))), 0x20u, 0, 1);
    // 0d9877  jne 0xd987e
    X86_AT(c, 0xd9877u);
    if (x86_cc(c, 5)) { goto L_d987e; }
    X86_TICK(c, 13);
    // 0d9879  inc dword ptr [ebp - 8]
    X86_AT(c, 0xd9879u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d987c  jmp 0xd986f
    X86_AT(c, 0xd987cu);
    X86_POLL(c, 0xd986fu); goto L_d986f;
L_d987e:
    X86_TICK(c, 2);
    // 0d987e  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xd987eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_d9885:
    X86_TICK(c, 45);
    // 0d9885  imul eax, edi, 0x21a
    X86_AT(c, 0xd9885u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d988b  add eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd988bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0d988e  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xd988eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d9891  mov cl, byte ptr [ebp + edx*1 - 0x3c]
    X86_AT(c, 0xd9891u);
    s8(c, 1, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[2] + 0xFFFFFFC4u))));
    // 0d9895  mov byte ptr [eax + 0xb0508], cl
    X86_AT(c, 0xd9895u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0508u)), g8(c, 1));
    // 0d989b  and cl, cl
    X86_AT(c, 0xd989bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0d989d  je 0xd98a7
    X86_AT(c, 0xd989du);
    if (x86_cc(c, 4)) { goto L_d98a7; }
    X86_TICK(c, 19);
    // 0d989f  inc dword ptr [ebp - 8]
    X86_AT(c, 0xd989fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d98a2  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xd98a2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d98a5  jmp 0xd9885
    X86_AT(c, 0xd98a5u);
    X86_POLL(c, 0xd9885u); goto L_d9885;
L_d98a7:
    X86_TICK(c, 11);
    // 0d98a7  push 0xf
    X86_AT(c, 0xd98a7u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d98a9  push 0x28
    X86_AT(c, 0xd98a9u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d98ab  call 0xcc814
    X86_AT(c, 0xd98abu);
    push32(c, 0xd98b0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd98b0u);
    X86_TICK(c, 35);
    // 0d98b0  imul eax, edi, 0x21a
    X86_AT(c, 0xd98b0u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d98b6  lea edx, [eax*1 + 0xb0508]
    X86_AT(c, 0xd98b6u);
    c.r[2] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0d98bd  push edx
    X86_AT(c, 0xd98bdu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d98be  push 4
    X86_AT(c, 0xd98beu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d98c0  call 0xca850
    X86_AT(c, 0xd98c0u);
    push32(c, 0xd98c5u); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xd98c5u);
    X86_TICK(c, 9);
    // 0d98c5  add esp, 0x10
    X86_AT(c, 0xd98c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d98c8  cmp bl, 5
    X86_AT(c, 0xd98c8u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d98cb  je 0xd9962
    X86_AT(c, 0xd98cbu);
    if (x86_cc(c, 4)) { goto L_d9962; }
    X86_TICK(c, 9);
    // 0d98d1  mov dword ptr [ebp - 4], 0xa
    X86_AT(c, 0xd98d1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xAu);
    // 0d98d8  jmp 0xd89fa
    X86_AT(c, 0xd98d8u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d98dd:
    X86_TICK(c, 11);
    // 0d98dd  push 3
    X86_AT(c, 0xd98ddu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d98df  push 0xf
    X86_AT(c, 0xd98dfu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d98e1  call 0xcc814
    X86_AT(c, 0xd98e1u);
    push32(c, 0xd98e6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd98e6u);
    X86_TICK(c, 11);
    // 0d98e6  push 0xb5c4
    X86_AT(c, 0xd98e6u);
    { uint32_t v = 0xB5C4u; push32(c, v); }
    // 0d98eb  push 4
    X86_AT(c, 0xd98ebu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d98ed  call 0xc8cdc
    X86_AT(c, 0xd98edu);
    push32(c, 0xd98f2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd98f2u);
    X86_TICK(c, 11);
    // 0d98f2  push 3
    X86_AT(c, 0xd98f2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d98f4  push 0xf
    X86_AT(c, 0xd98f4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d98f6  call 0xcc814
    X86_AT(c, 0xd98f6u);
    push32(c, 0xd98fbu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd98fbu);
    X86_TICK(c, 35);
    // 0d98fb  imul eax, edi, 0x21a
    X86_AT(c, 0xd98fbu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9901  lea edx, [eax*1 + 0xb0508]
    X86_AT(c, 0xd9901u);
    c.r[2] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0d9908  push edx
    X86_AT(c, 0xd9908u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d9909  push 4
    X86_AT(c, 0xd9909u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d990b  call 0xca850
    X86_AT(c, 0xd990bu);
    push32(c, 0xd9910u); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xd9910u);
    X86_TICK(c, 11);
    // 0d9910  push 4
    X86_AT(c, 0xd9910u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9912  push 0xf
    X86_AT(c, 0xd9912u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d9914  call 0xcc814
    X86_AT(c, 0xd9914u);
    push32(c, 0xd9919u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9919u);
    X86_TICK(c, 11);
    // 0d9919  push 0xb600
    X86_AT(c, 0xd9919u);
    { uint32_t v = 0xB600u; push32(c, v); }
    // 0d991e  push 4
    X86_AT(c, 0xd991eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9920  call 0xc8cdc
    X86_AT(c, 0xd9920u);
    push32(c, 0xd9925u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9925u);
    X86_TICK(c, 9);
    // 0d9925  push 0xb640
    X86_AT(c, 0xd9925u);
    { uint32_t v = 0xB640u; push32(c, v); }
    // 0d992a  call 0xcad60
    X86_AT(c, 0xd992au);
    push32(c, 0xd992fu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xd992fu);
    X86_TICK(c, 2);
    // 0d992f  add esp, 0x34
    X86_AT(c, 0xd992fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
L_d9932:
    X86_TICK(c, 9);
    // 0d9932  push 4
    X86_AT(c, 0xd9932u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9934  call 0xc81e4
    X86_AT(c, 0xd9934u);
    push32(c, 0xd9939u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd9939u);
    X86_TICK(c, 11);
    // 0d9939  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xd9939u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0d993c  add esp, 4
    X86_AT(c, 0xd993cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d993f  cmp al, 0x59
    X86_AT(c, 0xd993fu);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0d9941  je 0xd994b
    X86_AT(c, 0xd9941u);
    if (x86_cc(c, 4)) { goto L_d994b; }
    X86_TICK(c, 7);
    // 0d9943  cmp al, 0x4e
    X86_AT(c, 0xd9943u);
    (void)x86_sub(c, g8(c, 0), 0x4Eu, 0, 1);
    // 0d9945  je 0xd994b
    X86_AT(c, 0xd9945u);
    if (x86_cc(c, 4)) { goto L_d994b; }
    X86_TICK(c, 7);
    // 0d9947  dec al
    X86_AT(c, 0xd9947u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0d9949  jne 0xd9932
    X86_AT(c, 0xd9949u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd9932u); goto L_d9932; }
L_d994b:
    X86_TICK(c, 9);
    // 0d994b  push 2
    X86_AT(c, 0xd994bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d994d  call 0xca3cc
    X86_AT(c, 0xd994du);
    push32(c, 0xd9952u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd9952u);
    X86_TICK(c, 9);
    // 0d9952  push 4
    X86_AT(c, 0xd9952u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9954  call 0xca0a0
    X86_AT(c, 0xd9954u);
    push32(c, 0xd9959u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd9959u);
    X86_TICK(c, 14);
    // 0d9959  add esp, 8
    X86_AT(c, 0xd9959u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d995c  cmp byte ptr [ebp - 0x2d], 0x59
    X86_AT(c, 0xd995cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))), 0x59u, 0, 1);
    // 0d9960  je 0xd996e
    X86_AT(c, 0xd9960u);
    if (x86_cc(c, 4)) { goto L_d996e; }
L_d9962:
    X86_TICK(c, 9);
    // 0d9962  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xd9962u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0d9969  jmp 0xd89fa
    X86_AT(c, 0xd9969u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d996e:
    X86_TICK(c, 103);
    // 0d996e  imul eax, edi, 0x21a
    X86_AT(c, 0xd996eu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9974  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd9974u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0d9977  add edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd9977u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 0d997a  add dword ptr [eax + 0xb051e], edx
    X86_AT(c, 0xd997au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d9980  mov edx, dword ptr [ebp - 0x18]
    X86_AT(c, 0xd9980u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0d9983  add edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xd9983u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0, 4); }
    // 0d9986  add dword ptr [eax + 0xb0522], edx
    X86_AT(c, 0xd9986u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d998c  mov edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0xd998cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0d998f  add edx, dword ptr [ebp - 0x24]
    X86_AT(c, 0xd998fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0, 4); }
    // 0d9992  add dword ptr [eax + 0xb052e], edx
    X86_AT(c, 0xd9992u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d9998  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xd9998u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0d999b  add edx, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xd999bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))), 0, 4); }
    // 0d999e  add dword ptr [eax + 0xb0532], edx
    X86_AT(c, 0xd999eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d99a4  push 6
    X86_AT(c, 0xd99a4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d99a6  push 0x34
    X86_AT(c, 0xd99a6u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d99a8  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd99a8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d99ab  call 0xcc814
    X86_AT(c, 0xd99abu);
    push32(c, 0xd99b0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd99b0u);
    X86_TICK(c, 20);
    // 0d99b0  push 2
    X86_AT(c, 0xd99b0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d99b2  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd99b2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d99b5  push dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd99b5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu))); push32(c, v); }
    // 0d99bb  push 4
    X86_AT(c, 0xd99bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d99bd  call 0xc8cb8
    X86_AT(c, 0xd99bdu);
    push32(c, 0xd99c2u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd99c2u);
    X86_TICK(c, 11);
    // 0d99c2  push 7
    X86_AT(c, 0xd99c2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d99c4  push 0x34
    X86_AT(c, 0xd99c4u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d99c6  call 0xcc814
    X86_AT(c, 0xd99c6u);
    push32(c, 0xd99cbu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd99cbu);
    X86_TICK(c, 20);
    // 0d99cb  push 2
    X86_AT(c, 0xd99cbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d99cd  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd99cdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d99d0  push dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd99d0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u))); push32(c, v); }
    // 0d99d6  push 4
    X86_AT(c, 0xd99d6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d99d8  call 0xc8cb8
    X86_AT(c, 0xd99d8u);
    push32(c, 0xd99ddu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd99ddu);
    X86_TICK(c, 11);
    // 0d99dd  push 0xa
    X86_AT(c, 0xd99ddu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d99df  push 0x34
    X86_AT(c, 0xd99dfu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d99e1  call 0xcc814
    X86_AT(c, 0xd99e1u);
    push32(c, 0xd99e6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd99e6u);
    X86_TICK(c, 20);
    // 0d99e6  push 2
    X86_AT(c, 0xd99e6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d99e8  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd99e8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d99eb  push dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd99ebu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu))); push32(c, v); }
    // 0d99f1  push 4
    X86_AT(c, 0xd99f1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d99f3  call 0xc8cb8
    X86_AT(c, 0xd99f3u);
    push32(c, 0xd99f8u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd99f8u);
    X86_TICK(c, 13);
    // 0d99f8  add esp, 0x3c
    X86_AT(c, 0xd99f8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d99fb  push 0xb
    X86_AT(c, 0xd99fbu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d99fd  push 0x34
    X86_AT(c, 0xd99fdu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d99ff  call 0xcc814
    X86_AT(c, 0xd99ffu);
    push32(c, 0xd9a04u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9a04u);
    X86_TICK(c, 20);
    // 0d9a04  push 2
    X86_AT(c, 0xd9a04u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d9a06  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd9a06u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d9a09  push dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9a09u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u))); push32(c, v); }
    // 0d9a0f  push 4
    X86_AT(c, 0xd9a0fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9a11  call 0xc8cb8
    X86_AT(c, 0xd9a11u);
    push32(c, 0xd9a16u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd9a16u);
    X86_TICK(c, 4);
    // 0d9a16  sub eax, eax
    X86_AT(c, 0xd9a16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d9a18  add esp, 0x14
    X86_AT(c, 0xd9a18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d9a1b:
    X86_TICK(c, 28);
    // 0d9a1b  pop edi
    X86_AT(c, 0xd9a1bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9a1c  pop esi
    X86_AT(c, 0xd9a1cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d9a1d  pop ebx
    X86_AT(c, 0xd9a1du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d9a1e  leave 
    X86_AT(c, 0xd9a1eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9a1f  ret 
    X86_AT(c, 0xd9a1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd9723u, "ran off the end of a function");
}
}

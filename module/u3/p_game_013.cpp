#include "p_game_funcs.h"
namespace p_game {
void f_000c5bec(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0c5bec  push ebx
    X86_AT(c, 0xc5becu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c5bed  push edi
    X86_AT(c, 0xc5bedu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5bee  push 7
    X86_AT(c, 0xc5beeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5bf0  call 0xbc52c
    X86_AT(c, 0xc5bf0u);
    push32(c, 0xc5bf5u); x86_call_known(c, 0xbc52cu, f_000bc52c); X86_RET(c, 0xc5bf5u);
    X86_TICK(c, 9);
    // 0c5bf5  push 7
    X86_AT(c, 0xc5bf5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5bf7  call 0xbb6b0
    X86_AT(c, 0xc5bf7u);
    push32(c, 0xc5bfcu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc5bfcu);
    X86_TICK(c, 2);
    // 0c5bfc  add esp, 8
    X86_AT(c, 0xc5bfcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c5bff:
    X86_TICK(c, 9);
    // 0c5bff  push 7
    X86_AT(c, 0xc5bffu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5c01  call 0xb9514
    X86_AT(c, 0xc5c01u);
    push32(c, 0xc5c06u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xc5c06u);
    X86_TICK(c, 12);
    // 0c5c06  xchg ebx, eax
    X86_AT(c, 0xc5c06u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c5c07  add esp, 4
    X86_AT(c, 0xc5c07u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5c0a  and bl, bl
    X86_AT(c, 0xc5c0au);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c5c0c  je 0xc5bff
    X86_AT(c, 0xc5c0cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc5bffu); goto L_c5bff; }
    X86_TICK(c, 14);
    // 0c5c0e  mov edi, 0xffffffff
    X86_AT(c, 0xc5c0eu);
    c.r[7] = 0xFFFFFFFFu;
    // 0c5c13  movzx edx, bl
    X86_AT(c, 0xc5c13u);
    c.r[2] = g8(c, 3);
    // 0c5c16  dec edx
    X86_AT(c, 0xc5c16u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c5c17  cmp edx, 0x59
    X86_AT(c, 0xc5c17u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0c5c1a  ja 0xc5e38
    X86_AT(c, 0xc5c1au);
    if (x86_cc(c, 7)) { goto L_c5e38; }
    X86_TICK(c, 7);
    // 0c5c20  jmp dword ptr cs:[edx*4 + 0xc5c28]
    X86_AT(c, 0xc5c20u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC5C28u)));
      switch (t) {
      case 0xc5d90u: goto L_c5d90;
      case 0xc5d9au: goto L_c5d9a;
      case 0xc5da4u: goto L_c5da4;
      case 0xc5dabu: goto L_c5dab;
      case 0xc5db5u: goto L_c5db5;
      case 0xc5dbfu: goto L_c5dbf;
      case 0xc5dc9u: goto L_c5dc9;
      case 0xc5dd3u: goto L_c5dd3;
      case 0xc5dddu: goto L_c5ddd;
      case 0xc5de4u: goto L_c5de4;
      case 0xc5debu: goto L_c5deb;
      case 0xc5df2u: goto L_c5df2;
      case 0xc5df9u: goto L_c5df9;
      case 0xc5e00u: goto L_c5e00;
      case 0xc5e07u: goto L_c5e07;
      case 0xc5e0eu: goto L_c5e0e;
      case 0xc5e15u: goto L_c5e15;
      case 0xc5e1cu: goto L_c5e1c;
      case 0xc5e23u: goto L_c5e23;
      case 0xc5e2au: goto L_c5e2a;
      case 0xc5e31u: goto L_c5e31;
      case 0xc5e38u: goto L_c5e38;
      default: x86_jump(c, t); return; } }
L_c5d90:
    X86_TICK(c, 9);
    // 0c5d90  mov edi, 2
    X86_AT(c, 0xc5d90u);
    c.r[7] = 0x2u;
    // 0c5d95  jmp 0xc5e3d
    X86_AT(c, 0xc5d95u);
    goto L_c5e3d;
L_c5d9a:
    X86_TICK(c, 9);
    // 0c5d9a  mov edi, 1
    X86_AT(c, 0xc5d9au);
    c.r[7] = 0x1u;
    // 0c5d9f  jmp 0xc5e3d
    X86_AT(c, 0xc5d9fu);
    goto L_c5e3d;
L_c5da4:
    X86_TICK(c, 9);
    // 0c5da4  sub edi, edi
    X86_AT(c, 0xc5da4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c5da6  jmp 0xc5e3d
    X86_AT(c, 0xc5da6u);
    goto L_c5e3d;
L_c5dab:
    X86_TICK(c, 9);
    // 0c5dab  mov edi, 3
    X86_AT(c, 0xc5dabu);
    c.r[7] = 0x3u;
    // 0c5db0  jmp 0xc5e3d
    X86_AT(c, 0xc5db0u);
    goto L_c5e3d;
L_c5db5:
    X86_TICK(c, 7);
    // 0c5db5  call 0xd2388
    X86_AT(c, 0xc5db5u);
    push32(c, 0xc5dbau); x86_call_known(c, 0xd2388u, f_000d2388); X86_RET(c, 0xc5dbau);
    X86_TICK(c, 7);
    // 0c5dba  jmp 0xc5e3d
    X86_AT(c, 0xc5dbau);
    goto L_c5e3d;
L_c5dbf:
    X86_TICK(c, 7);
    // 0c5dbf  call 0xd25c0
    X86_AT(c, 0xc5dbfu);
    push32(c, 0xc5dc4u); x86_call_known(c, 0xd25c0u, f_000d25c0); X86_RET(c, 0xc5dc4u);
    X86_TICK(c, 7);
    // 0c5dc4  jmp 0xc5e3d
    X86_AT(c, 0xc5dc4u);
    goto L_c5e3d;
L_c5dc9:
    X86_TICK(c, 7);
    // 0c5dc9  call 0xcd320
    X86_AT(c, 0xc5dc9u);
    push32(c, 0xc5dceu); x86_call_known(c, 0xcd320u, f_000cd320); X86_RET(c, 0xc5dceu);
    X86_TICK(c, 7);
    // 0c5dce  jmp 0xc5e3d
    X86_AT(c, 0xc5dceu);
    goto L_c5e3d;
L_c5dd3:
    X86_TICK(c, 7);
    // 0c5dd3  call 0xd2b30
    X86_AT(c, 0xc5dd3u);
    push32(c, 0xc5dd8u); x86_call_known(c, 0xd2b30u, f_000d2b30); X86_RET(c, 0xc5dd8u);
    X86_TICK(c, 7);
    // 0c5dd8  jmp 0xc5e3d
    X86_AT(c, 0xc5dd8u);
    goto L_c5e3d;
L_c5ddd:
    X86_TICK(c, 7);
    // 0c5ddd  call 0xc7798
    X86_AT(c, 0xc5dddu);
    push32(c, 0xc5de2u); x86_call_known(c, 0xc7798u, f_000c7798); X86_RET(c, 0xc5de2u);
    X86_TICK(c, 7);
    // 0c5de2  jmp 0xc5e3d
    X86_AT(c, 0xc5de2u);
    goto L_c5e3d;
L_c5de4:
    X86_TICK(c, 7);
    // 0c5de4  call 0xc766c
    X86_AT(c, 0xc5de4u);
    push32(c, 0xc5de9u); x86_call_known(c, 0xc766cu, f_000c766c); X86_RET(c, 0xc5de9u);
    X86_TICK(c, 7);
    // 0c5de9  jmp 0xc5e3d
    X86_AT(c, 0xc5de9u);
    goto L_c5e3d;
L_c5deb:
    X86_TICK(c, 7);
    // 0c5deb  call 0xd2c60
    X86_AT(c, 0xc5debu);
    push32(c, 0xc5df0u); x86_call_known(c, 0xd2c60u, f_000d2c60); X86_RET(c, 0xc5df0u);
    X86_TICK(c, 7);
    // 0c5df0  jmp 0xc5e3d
    X86_AT(c, 0xc5df0u);
    goto L_c5e3d;
L_c5df2:
    X86_TICK(c, 7);
    // 0c5df2  call 0xc7858
    X86_AT(c, 0xc5df2u);
    push32(c, 0xc5df7u); x86_call_known(c, 0xc7858u, f_000c7858); X86_RET(c, 0xc5df7u);
    X86_TICK(c, 7);
    // 0c5df7  jmp 0xc5e3d
    X86_AT(c, 0xc5df7u);
    goto L_c5e3d;
L_c5df9:
    X86_TICK(c, 7);
    // 0c5df9  call 0xcb3b4
    X86_AT(c, 0xc5df9u);
    push32(c, 0xc5dfeu); x86_call_known(c, 0xcb3b4u, f_000cb3b4); X86_RET(c, 0xc5dfeu);
    X86_TICK(c, 7);
    // 0c5dfe  jmp 0xc5e3d
    X86_AT(c, 0xc5dfeu);
    goto L_c5e3d;
L_c5e00:
    X86_TICK(c, 7);
    // 0c5e00  call 0xd2db4
    X86_AT(c, 0xc5e00u);
    push32(c, 0xc5e05u); x86_call_known(c, 0xd2db4u, f_000d2db4); X86_RET(c, 0xc5e05u);
    X86_TICK(c, 7);
    // 0c5e05  jmp 0xc5e3d
    X86_AT(c, 0xc5e05u);
    goto L_c5e3d;
L_c5e07:
    X86_TICK(c, 7);
    // 0c5e07  call 0xcc940
    X86_AT(c, 0xc5e07u);
    push32(c, 0xc5e0cu); x86_call_known(c, 0xcc940u, f_000cc940); X86_RET(c, 0xc5e0cu);
    X86_TICK(c, 7);
    // 0c5e0c  jmp 0xc5e3d
    X86_AT(c, 0xc5e0cu);
    goto L_c5e3d;
L_c5e0e:
    X86_TICK(c, 7);
    // 0c5e0e  call 0xd34f0
    X86_AT(c, 0xc5e0eu);
    push32(c, 0xc5e13u); x86_call_known(c, 0xd34f0u, f_000d34f0); X86_RET(c, 0xc5e13u);
    X86_TICK(c, 7);
    // 0c5e13  jmp 0xc5e3d
    X86_AT(c, 0xc5e13u);
    goto L_c5e3d;
L_c5e15:
    X86_TICK(c, 7);
    // 0c5e15  call 0xccc5c
    X86_AT(c, 0xc5e15u);
    push32(c, 0xc5e1au); x86_call_known(c, 0xccc5cu, f_000ccc5c); X86_RET(c, 0xc5e1au);
    X86_TICK(c, 7);
    // 0c5e1a  jmp 0xc5e3d
    X86_AT(c, 0xc5e1au);
    goto L_c5e3d;
L_c5e1c:
    X86_TICK(c, 7);
    // 0c5e1c  call 0xcaef8
    X86_AT(c, 0xc5e1cu);
    push32(c, 0xc5e21u); x86_call_known(c, 0xcaef8u, f_000caef8); X86_RET(c, 0xc5e21u);
    X86_TICK(c, 7);
    // 0c5e21  jmp 0xc5e3d
    X86_AT(c, 0xc5e21u);
    goto L_c5e3d;
L_c5e23:
    X86_TICK(c, 7);
    // 0c5e23  call 0xd33cc
    X86_AT(c, 0xc5e23u);
    push32(c, 0xc5e28u); x86_call_known(c, 0xd33ccu, f_000d33cc); X86_RET(c, 0xc5e28u);
    X86_TICK(c, 7);
    // 0c5e28  jmp 0xc5e3d
    X86_AT(c, 0xc5e28u);
    goto L_c5e3d;
L_c5e2a:
    X86_TICK(c, 7);
    // 0c5e2a  call 0xcd6c8
    X86_AT(c, 0xc5e2au);
    push32(c, 0xc5e2fu); x86_call_known(c, 0xcd6c8u, f_000cd6c8); X86_RET(c, 0xc5e2fu);
    X86_TICK(c, 7);
    // 0c5e2f  jmp 0xc5e3d
    X86_AT(c, 0xc5e2fu);
    goto L_c5e3d;
L_c5e31:
    X86_TICK(c, 7);
    // 0c5e31  call 0xcd750
    X86_AT(c, 0xc5e31u);
    push32(c, 0xc5e36u); x86_call_known(c, 0xcd750u, f_000cd750); X86_RET(c, 0xc5e36u);
    X86_TICK(c, 7);
    // 0c5e36  jmp 0xc5e3d
    X86_AT(c, 0xc5e36u);
    goto L_c5e3d;
L_c5e38:
    X86_TICK(c, 7);
    // 0c5e38  call 0xc5e44
    X86_AT(c, 0xc5e38u);
    push32(c, 0xc5e3du); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xc5e3du);
L_c5e3d:
    X86_TICK(c, 20);
    // 0c5e3d  mov eax, edi
    X86_AT(c, 0xc5e3du);
    c.r[0] = c.r[7];
    // 0c5e3f  pop edi
    X86_AT(c, 0xc5e3fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5e40  pop ebx
    X86_AT(c, 0xc5e40u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c5e41  ret 
    X86_AT(c, 0xc5e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5becu, "ran off the end of a function");
}
void f_000c5e3d(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0c5e3d  mov eax, edi
    X86_AT(c, 0xc5e3du);
    c.r[0] = c.r[7];
    // 0c5e3f  pop edi
    X86_AT(c, 0xc5e3fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5e40  pop ebx
    X86_AT(c, 0xc5e40u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c5e41  ret 
    X86_AT(c, 0xc5e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5e3du, "ran off the end of a function");
}
void f_000c5e44(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c5e44  push 7
    X86_AT(c, 0xc5e44u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5e46  call 0xbb6b0
    X86_AT(c, 0xc5e46u);
    push32(c, 0xc5e4bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc5e4bu);
    X86_TICK(c, 9);
    // 0c5e4b  push 3
    X86_AT(c, 0xc5e4bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c5e4d  call 0xb607c
    X86_AT(c, 0xc5e4du);
    push32(c, 0xc5e52u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc5e52u);
    X86_TICK(c, 11);
    // 0c5e52  push 0x4d60
    X86_AT(c, 0xc5e52u);
    { uint32_t v = 0x4D60u; push32(c, v); }
    // 0c5e57  push 7
    X86_AT(c, 0xc5e57u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5e59  call 0xba428
    X86_AT(c, 0xc5e59u);
    push32(c, 0xc5e5eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc5e5eu);
    X86_TICK(c, 9);
    // 0c5e5e  push 7
    X86_AT(c, 0xc5e5eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5e60  call 0xbbb5c
    X86_AT(c, 0xc5e60u);
    push32(c, 0xc5e65u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc5e65u);
    X86_TICK(c, 9);
    // 0c5e65  push 2
    X86_AT(c, 0xc5e65u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c5e67  call 0xbebbc
    X86_AT(c, 0xc5e67u);
    push32(c, 0xc5e6cu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc5e6cu);
    X86_TICK(c, 12);
    // 0c5e6c  add esp, 0x18
    X86_AT(c, 0xc5e6cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c5e6f  ret 
    X86_AT(c, 0xc5e6fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5e44u, "ran off the end of a function");
}
void f_000c5e70(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0c5e70  mov ecx, 0x8cfa8
    X86_AT(c, 0xc5e70u);
    c.r[1] = 0x8CFA8u;
    // 0c5e75  sub eax, eax
    X86_AT(c, 0xc5e75u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5e77:
    X86_TICK(c, 7);
    // 0c5e77  cmp eax, 0xb
    X86_AT(c, 0xc5e77u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0c5e7a  jge 0xc5e83
    X86_AT(c, 0xc5e7au);
    if (x86_cc(c, 13)) { goto L_c5e83; }
    X86_TICK(c, 13);
    // 0c5e7c  mov byte ptr [ecx], 0x26
    X86_AT(c, 0xc5e7cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x26u);
    // 0c5e7f  inc ecx
    X86_AT(c, 0xc5e7fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5e80  inc eax
    X86_AT(c, 0xc5e80u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5e81  jmp 0xc5e77
    X86_AT(c, 0xc5e81u);
    X86_POLL(c, 0xc5e77u); goto L_c5e77;
L_c5e83:
    X86_TICK(c, 2);
    // 0c5e83  sub eax, eax
    X86_AT(c, 0xc5e83u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5e85:
    X86_TICK(c, 7);
    // 0c5e85  cmp eax, 0xb
    X86_AT(c, 0xc5e85u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0c5e88  jge 0xc5e91
    X86_AT(c, 0xc5e88u);
    if (x86_cc(c, 13)) { goto L_c5e91; }
    X86_TICK(c, 13);
    // 0c5e8a  mov byte ptr [ecx], 0x27
    X86_AT(c, 0xc5e8au);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x27u);
    // 0c5e8d  inc ecx
    X86_AT(c, 0xc5e8du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5e8e  inc eax
    X86_AT(c, 0xc5e8eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5e8f  jmp 0xc5e85
    X86_AT(c, 0xc5e8fu);
    X86_POLL(c, 0xc5e85u); goto L_c5e85;
L_c5e91:
    X86_TICK(c, 2);
    // 0c5e91  sub eax, eax
    X86_AT(c, 0xc5e91u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5e93:
    X86_TICK(c, 7);
    // 0c5e93  cmp eax, 0xb
    X86_AT(c, 0xc5e93u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0c5e96  jge 0xc5e9f
    X86_AT(c, 0xc5e96u);
    if (x86_cc(c, 13)) { goto L_c5e9f; }
    X86_TICK(c, 13);
    // 0c5e98  mov byte ptr [ecx], 0x37
    X86_AT(c, 0xc5e98u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x37u);
    // 0c5e9b  inc ecx
    X86_AT(c, 0xc5e9bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5e9c  inc eax
    X86_AT(c, 0xc5e9cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5e9d  jmp 0xc5e93
    X86_AT(c, 0xc5e9du);
    X86_POLL(c, 0xc5e93u); goto L_c5e93;
L_c5e9f:
    X86_TICK(c, 2);
    // 0c5e9f  sub eax, eax
    X86_AT(c, 0xc5e9fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5ea1:
    X86_TICK(c, 7);
    // 0c5ea1  cmp eax, 0xb
    X86_AT(c, 0xc5ea1u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0c5ea4  jge 0xc5ead
    X86_AT(c, 0xc5ea4u);
    if (x86_cc(c, 13)) { goto L_c5ead; }
    X86_TICK(c, 13);
    // 0c5ea6  mov byte ptr [ecx], 0
    X86_AT(c, 0xc5ea6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0c5ea9  inc ecx
    X86_AT(c, 0xc5ea9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5eaa  inc eax
    X86_AT(c, 0xc5eaau);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5eab  jmp 0xc5ea1
    X86_AT(c, 0xc5eabu);
    X86_POLL(c, 0xc5ea1u); goto L_c5ea1;
L_c5ead:
    X86_TICK(c, 2);
    // 0c5ead  sub eax, eax
    X86_AT(c, 0xc5eadu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5eaf:
    X86_TICK(c, 7);
    // 0c5eaf  cmp eax, 0xb
    X86_AT(c, 0xc5eafu);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0c5eb2  jge 0xc5ebb
    X86_AT(c, 0xc5eb2u);
    if (x86_cc(c, 13)) { goto L_c5ebb; }
    X86_TICK(c, 13);
    // 0c5eb4  mov byte ptr [ecx], 0
    X86_AT(c, 0xc5eb4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0c5eb7  inc ecx
    X86_AT(c, 0xc5eb7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5eb8  inc eax
    X86_AT(c, 0xc5eb8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5eb9  jmp 0xc5eaf
    X86_AT(c, 0xc5eb9u);
    X86_POLL(c, 0xc5eafu); goto L_c5eaf;
L_c5ebb:
    X86_TICK(c, 2);
    // 0c5ebb  sub eax, eax
    X86_AT(c, 0xc5ebbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5ebd:
    X86_TICK(c, 7);
    // 0c5ebd  cmp eax, 0xb
    X86_AT(c, 0xc5ebdu);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0c5ec0  jge 0xc5ec9
    X86_AT(c, 0xc5ec0u);
    if (x86_cc(c, 13)) { goto L_c5ec9; }
    X86_TICK(c, 13);
    // 0c5ec2  mov byte ptr [ecx], 0
    X86_AT(c, 0xc5ec2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0c5ec5  inc ecx
    X86_AT(c, 0xc5ec5u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5ec6  inc eax
    X86_AT(c, 0xc5ec6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5ec7  jmp 0xc5ebd
    X86_AT(c, 0xc5ec7u);
    X86_POLL(c, 0xc5ebdu); goto L_c5ebd;
L_c5ec9:
    X86_TICK(c, 2);
    // 0c5ec9  sub eax, eax
    X86_AT(c, 0xc5ec9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5ecb:
    X86_TICK(c, 7);
    // 0c5ecb  cmp eax, 0xb
    X86_AT(c, 0xc5ecbu);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0c5ece  jge 0xc5ed7
    X86_AT(c, 0xc5eceu);
    if (x86_cc(c, 13)) { goto L_c5ed7; }
    X86_TICK(c, 13);
    // 0c5ed0  mov byte ptr [ecx], 7
    X86_AT(c, 0xc5ed0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x7u);
    // 0c5ed3  inc ecx
    X86_AT(c, 0xc5ed3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5ed4  inc eax
    X86_AT(c, 0xc5ed4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5ed5  jmp 0xc5ecb
    X86_AT(c, 0xc5ed5u);
    X86_POLL(c, 0xc5ecbu); goto L_c5ecb;
L_c5ed7:
    X86_TICK(c, 2);
    // 0c5ed7  sub eax, eax
    X86_AT(c, 0xc5ed7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5ed9:
    X86_TICK(c, 7);
    // 0c5ed9  cmp eax, 0xb
    X86_AT(c, 0xc5ed9u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0c5edc  jge 0xc5ee5
    X86_AT(c, 0xc5edcu);
    if (x86_cc(c, 13)) { goto L_c5ee5; }
    X86_TICK(c, 13);
    // 0c5ede  mov byte ptr [ecx], 6
    X86_AT(c, 0xc5edeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x6u);
    // 0c5ee1  inc ecx
    X86_AT(c, 0xc5ee1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5ee2  inc eax
    X86_AT(c, 0xc5ee2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5ee3  jmp 0xc5ed9
    X86_AT(c, 0xc5ee3u);
    X86_POLL(c, 0xc5ed9u); goto L_c5ed9;
L_c5ee5:
    X86_TICK(c, 2);
    // 0c5ee5  sub eax, eax
    X86_AT(c, 0xc5ee5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5ee7:
    X86_TICK(c, 7);
    // 0c5ee7  cmp eax, 0xb
    X86_AT(c, 0xc5ee7u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0c5eea  jge 0xc5ef3
    X86_AT(c, 0xc5eeau);
    if (x86_cc(c, 13)) { goto L_c5ef3; }
    X86_TICK(c, 13);
    // 0c5eec  mov byte ptr [ecx], 5
    X86_AT(c, 0xc5eecu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x5u);
    // 0c5eef  inc ecx
    X86_AT(c, 0xc5eefu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5ef0  inc eax
    X86_AT(c, 0xc5ef0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5ef1  jmp 0xc5ee7
    X86_AT(c, 0xc5ef1u);
    X86_POLL(c, 0xc5ee7u); goto L_c5ee7;
L_c5ef3:
    X86_TICK(c, 2);
    // 0c5ef3  sub eax, eax
    X86_AT(c, 0xc5ef3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5ef5:
    X86_TICK(c, 7);
    // 0c5ef5  cmp eax, 0xb
    X86_AT(c, 0xc5ef5u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0c5ef8  jge 0xc5f01
    X86_AT(c, 0xc5ef8u);
    if (x86_cc(c, 13)) { goto L_c5f01; }
    X86_TICK(c, 13);
    // 0c5efa  mov byte ptr [ecx], 4
    X86_AT(c, 0xc5efau);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x4u);
    // 0c5efd  inc ecx
    X86_AT(c, 0xc5efdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5efe  inc eax
    X86_AT(c, 0xc5efeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5eff  jmp 0xc5ef5
    X86_AT(c, 0xc5effu);
    X86_POLL(c, 0xc5ef5u); goto L_c5ef5;
L_c5f01:
    X86_TICK(c, 2);
    // 0c5f01  sub eax, eax
    X86_AT(c, 0xc5f01u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5f03:
    X86_TICK(c, 7);
    // 0c5f03  cmp eax, 0xb
    X86_AT(c, 0xc5f03u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0c5f06  jge 0xc5f0f
    X86_AT(c, 0xc5f06u);
    if (x86_cc(c, 13)) { goto L_c5f0f; }
    X86_TICK(c, 13);
    // 0c5f08  mov byte ptr [ecx], 2
    X86_AT(c, 0xc5f08u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x2u);
    // 0c5f0b  inc ecx
    X86_AT(c, 0xc5f0bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5f0c  inc eax
    X86_AT(c, 0xc5f0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5f0d  jmp 0xc5f03
    X86_AT(c, 0xc5f0du);
    X86_POLL(c, 0xc5f03u); goto L_c5f03;
L_c5f0f:
    X86_TICK(c, 10);
    // 0c5f0f  ret 
    X86_AT(c, 0xc5f0fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5e70u, "ran off the end of a function");
}
void f_000c5f10(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0c5f10  push ebp
    X86_AT(c, 0xc5f10u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5f11  mov ebp, esp
    X86_AT(c, 0xc5f11u);
    c.r[5] = c.r[4];
    // 0c5f13  sub esp, 0xc
    X86_AT(c, 0xc5f13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0c5f16  push ebx
    X86_AT(c, 0xc5f16u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c5f17  push esi
    X86_AT(c, 0xc5f17u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c5f18  push edi
    X86_AT(c, 0xc5f18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5f19  sub eax, eax
    X86_AT(c, 0xc5f19u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c5f1b  mov dword ptr [0xa8a1c], eax
    X86_AT(c, 0xc5f1bu);
    wr32((c.sbase[3] + (uint32_t)(0xA8A1Cu)), c.r[0]);
    // 0c5f20  cmp eax, dword ptr [0xa6654]
    X86_AT(c, 0xc5f20u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA6654u))), 0, 4);
    // 0c5f26  jne 0xc5f3a
    X86_AT(c, 0xc5f26u);
    if (x86_cc(c, 5)) { goto L_c5f3a; }
    X86_TICK(c, 9);
    // 0c5f28  push 0x4d98
    X86_AT(c, 0xc5f28u);
    { uint32_t v = 0x4D98u; push32(c, v); }
    // 0c5f2d  call 0xbc50c
    X86_AT(c, 0xc5f2du);
    push32(c, 0xc5f32u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc5f32u);
    X86_TICK(c, 9);
    // 0c5f32  add esp, 4
    X86_AT(c, 0xc5f32u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5f35  jmp 0xc5fd9
    X86_AT(c, 0xc5f35u);
    goto L_c5fd9;
L_c5f3a:
    X86_TICK(c, 39);
    // 0c5f3a  mov edi, dword ptr [0xa6654]
    X86_AT(c, 0xc5f3au);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xA6654u)));
    // 0c5f40  mov dword ptr [0xa8a1c], edi
    X86_AT(c, 0xc5f40u);
    wr32((c.sbase[3] + (uint32_t)(0xA8A1Cu)), c.r[7]);
    // 0c5f46  sub eax, eax
    X86_AT(c, 0xc5f46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c5f48  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc5f48u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0c5f4b  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc5f4bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c5f4e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc5f4eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c5f51  lea ebx, [ebp - 0xc]
    X86_AT(c, 0xc5f51u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0c5f54  push ebx
    X86_AT(c, 0xc5f54u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c5f55  lea esi, [ebp - 8]
    X86_AT(c, 0xc5f55u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c5f58  push esi
    X86_AT(c, 0xc5f58u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c5f59  lea eax, [ebp - 4]
    X86_AT(c, 0xc5f59u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c5f5c  push eax
    X86_AT(c, 0xc5f5cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5f5d  push 0xf200
    X86_AT(c, 0xc5f5du);
    { uint32_t v = 0xF200u; push32(c, v); }
    // 0c5f62  push edi
    X86_AT(c, 0xc5f62u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5f63  push 0x4dd0
    X86_AT(c, 0xc5f63u);
    { uint32_t v = 0x4DD0u; push32(c, v); }
    // 0c5f68  call 0xbb1f0
    X86_AT(c, 0xc5f68u);
    push32(c, 0xc5f6du); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xc5f6du);
    X86_TICK(c, 25);
    // 0c5f6d  add edi, 0xf200
    X86_AT(c, 0xc5f6du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF200u, 0, 4); }
    // 0c5f73  mov dword ptr [0xa8a20], edi
    X86_AT(c, 0xc5f73u);
    wr32((c.sbase[3] + (uint32_t)(0xA8A20u)), c.r[7]);
    // 0c5f79  push ebx
    X86_AT(c, 0xc5f79u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c5f7a  push esi
    X86_AT(c, 0xc5f7au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c5f7b  lea eax, [ebp - 4]
    X86_AT(c, 0xc5f7bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c5f7e  push eax
    X86_AT(c, 0xc5f7eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5f7f  push 0xf200
    X86_AT(c, 0xc5f7fu);
    { uint32_t v = 0xF200u; push32(c, v); }
    // 0c5f84  push edi
    X86_AT(c, 0xc5f84u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5f85  push 0x4de4
    X86_AT(c, 0xc5f85u);
    { uint32_t v = 0x4DE4u; push32(c, v); }
    // 0c5f8a  call 0xbb1f0
    X86_AT(c, 0xc5f8au);
    push32(c, 0xc5f8fu); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xc5f8fu);
    X86_TICK(c, 25);
    // 0c5f8f  add edi, 0xf200
    X86_AT(c, 0xc5f8fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF200u, 0, 4); }
    // 0c5f95  mov dword ptr [0xa8a24], edi
    X86_AT(c, 0xc5f95u);
    wr32((c.sbase[3] + (uint32_t)(0xA8A24u)), c.r[7]);
    // 0c5f9b  push ebx
    X86_AT(c, 0xc5f9bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c5f9c  push esi
    X86_AT(c, 0xc5f9cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c5f9d  lea eax, [ebp - 4]
    X86_AT(c, 0xc5f9du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c5fa0  push eax
    X86_AT(c, 0xc5fa0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5fa1  push 0xf200
    X86_AT(c, 0xc5fa1u);
    { uint32_t v = 0xF200u; push32(c, v); }
    // 0c5fa6  push edi
    X86_AT(c, 0xc5fa6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5fa7  push 0x4df4
    X86_AT(c, 0xc5fa7u);
    { uint32_t v = 0x4DF4u; push32(c, v); }
    // 0c5fac  call 0xbb1f0
    X86_AT(c, 0xc5facu);
    push32(c, 0xc5fb1u); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xc5fb1u);
    X86_TICK(c, 27);
    // 0c5fb1  add esp, 0x48
    X86_AT(c, 0xc5fb1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0c5fb4  add edi, 0xf200
    X86_AT(c, 0xc5fb4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF200u, 0, 4); }
    // 0c5fba  mov dword ptr [0xa8a28], edi
    X86_AT(c, 0xc5fbau);
    wr32((c.sbase[3] + (uint32_t)(0xA8A28u)), c.r[7]);
    // 0c5fc0  push ebx
    X86_AT(c, 0xc5fc0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c5fc1  push esi
    X86_AT(c, 0xc5fc1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c5fc2  lea ebx, [ebp - 4]
    X86_AT(c, 0xc5fc2u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c5fc5  push ebx
    X86_AT(c, 0xc5fc5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c5fc6  push 0xf200
    X86_AT(c, 0xc5fc6u);
    { uint32_t v = 0xF200u; push32(c, v); }
    // 0c5fcb  push edi
    X86_AT(c, 0xc5fcbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5fcc  push 0x4e04
    X86_AT(c, 0xc5fccu);
    { uint32_t v = 0x4E04u; push32(c, v); }
    // 0c5fd1  call 0xbb1f0
    X86_AT(c, 0xc5fd1u);
    push32(c, 0xc5fd6u); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xc5fd6u);
    X86_TICK(c, 2);
    // 0c5fd6  add esp, 0x18
    X86_AT(c, 0xc5fd6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c5fd9:
    X86_TICK(c, 28);
    // 0c5fd9  pop edi
    X86_AT(c, 0xc5fd9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5fda  pop esi
    X86_AT(c, 0xc5fdau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c5fdb  pop ebx
    X86_AT(c, 0xc5fdbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c5fdc  leave 
    X86_AT(c, 0xc5fdcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5fdd  ret 
    X86_AT(c, 0xc5fddu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5f10u, "ran off the end of a function");
}
void f_000c5fe0(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0c5fe0  mov eax, dword ptr [0xa6654]
    X86_AT(c, 0xc5fe0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6654u)));
    // 0c5fe5  and eax, eax
    X86_AT(c, 0xc5fe5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5fe7  je 0xc5ff2
    X86_AT(c, 0xc5fe7u);
    if (x86_cc(c, 4)) { goto L_c5ff2; }
    X86_TICK(c, 9);
    // 0c5fe9  push eax
    X86_AT(c, 0xc5fe9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5fea  call 0xd8800
    X86_AT(c, 0xc5feau);
    push32(c, 0xc5fefu); x86_call_known(c, 0xd8800u, f_000d8800); X86_RET(c, 0xc5fefu);
    X86_TICK(c, 2);
    // 0c5fef  add esp, 4
    X86_AT(c, 0xc5fefu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c5ff2:
    X86_TICK(c, 10);
    // 0c5ff2  ret 
    X86_AT(c, 0xc5ff2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5fe0u, "ran off the end of a function");
}
void f_000c5ff4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0c5ff4  push ebp
    X86_AT(c, 0xc5ff4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5ff5  mov ebp, esp
    X86_AT(c, 0xc5ff5u);
    c.r[5] = c.r[4];
    // 0c5ff7  push edi
    X86_AT(c, 0xc5ff7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5ff8  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc5ff8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c5ffb  and edi, edi
    X86_AT(c, 0xc5ffbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c5ffd  je 0xc6032
    X86_AT(c, 0xc5ffdu);
    if (x86_cc(c, 4)) { goto L_c6032; }
    X86_TICK(c, 9);
    // 0c5fff  push 1
    X86_AT(c, 0xc5fffu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c6001  call 0xba6a0
    X86_AT(c, 0xc6001u);
    push32(c, 0xc6006u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xc6006u);
    X86_TICK(c, 9);
    // 0c6006  push 0
    X86_AT(c, 0xc6006u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c6008  call 0xba6b4
    X86_AT(c, 0xc6008u);
    push32(c, 0xc600du); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xc600du);
    X86_TICK(c, 17);
    // 0c600d  push 0x160
    X86_AT(c, 0xc600du);
    { uint32_t v = 0x160u; push32(c, v); }
    // 0c6012  push 0x160
    X86_AT(c, 0xc6012u);
    { uint32_t v = 0x160u; push32(c, v); }
    // 0c6017  push 0x60
    X86_AT(c, 0xc6017u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0c6019  push 0x40
    X86_AT(c, 0xc6019u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0c601b  push edi
    X86_AT(c, 0xc601bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c601c  call 0xbb018
    X86_AT(c, 0xc601cu);
    push32(c, 0xc6021u); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xc6021u);
    X86_TICK(c, 9);
    // 0c6021  push 2
    X86_AT(c, 0xc6021u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6023  call 0xba6b4
    X86_AT(c, 0xc6023u);
    push32(c, 0xc6028u); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xc6028u);
    X86_TICK(c, 9);
    // 0c6028  push 0
    X86_AT(c, 0xc6028u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c602a  call 0xba6a0
    X86_AT(c, 0xc602au);
    push32(c, 0xc602fu); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xc602fu);
    X86_TICK(c, 2);
    // 0c602f  add esp, 0x24
    X86_AT(c, 0xc602fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_c6032:
    X86_TICK(c, 20);
    // 0c6032  pop edi
    X86_AT(c, 0xc6032u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6033  leave 
    X86_AT(c, 0xc6033u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6034  ret 
    X86_AT(c, 0xc6034u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5ff4u, "ran off the end of a function");
}
void f_000c6038(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0c6038  mov eax, dword ptr [esp + 0xc]
    X86_AT(c, 0xc6038u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0c603c  shl eax, 4
    X86_AT(c, 0xc603cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c603f  add eax, dword ptr [esp + 8]
    X86_AT(c, 0xc603fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u))), 0, 4); }
    // 0c6043  movzx eax, byte ptr [eax + 0xa9234]
    X86_AT(c, 0xc6043u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA9234u)));
    // 0c604a  ret 
    X86_AT(c, 0xc604au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6038u, "ran off the end of a function");
}
void f_000c604c(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0c604c  mov eax, dword ptr [esp + 0x10]
    X86_AT(c, 0xc604cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 0c6050  shl eax, 4
    X86_AT(c, 0xc6050u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c6053  add eax, dword ptr [esp + 0xc]
    X86_AT(c, 0xc6053u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))), 0, 4); }
    // 0c6057  mov dl, byte ptr [esp + 4]
    X86_AT(c, 0xc6057u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 0c605b  mov byte ptr [eax + 0xa9234], dl
    X86_AT(c, 0xc605bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA9234u)), g8(c, 2));
    // 0c6061  ret 
    X86_AT(c, 0xc6061u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc604cu, "ran off the end of a function");
}
void f_000c6064(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c6064  push ebp
    X86_AT(c, 0xc6064u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6065  mov ebp, esp
    X86_AT(c, 0xc6065u);
    c.r[5] = c.r[4];
    // 0c6067  sub esp, 0xc
    X86_AT(c, 0xc6067u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0c606a  push ebx
    X86_AT(c, 0xc606au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c606b  push esi
    X86_AT(c, 0xc606bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c606c  push edi
    X86_AT(c, 0xc606cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c606d  push 7
    X86_AT(c, 0xc606du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c606f  call 0xbb6b0
    X86_AT(c, 0xc606fu);
    push32(c, 0xc6074u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc6074u);
    X86_TICK(c, 14);
    // 0c6074  push dword ptr [ebp + 8]
    X86_AT(c, 0xc6074u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c6077  push 7
    X86_AT(c, 0xc6077u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6079  call 0xba428
    X86_AT(c, 0xc6079u);
    push32(c, 0xc607eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc607eu);
    X86_TICK(c, 9);
    // 0c607e  push 7
    X86_AT(c, 0xc607eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6080  call 0xbbb5c
    X86_AT(c, 0xc6080u);
    push32(c, 0xc6085u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6085u);
    X86_TICK(c, 7);
    // 0c6085  call 0xbd5d0
    X86_AT(c, 0xc6085u);
    push32(c, 0xc608au); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xc608au);
    X86_TICK(c, 19);
    // 0c608a  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xc608au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0c608f  dec eax
    X86_AT(c, 0xc608fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c6090  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc6090u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c6093  sub eax, eax
    X86_AT(c, 0xc6093u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c6095  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc6095u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c6098  xchg ebx, eax
    X86_AT(c, 0xc6098u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c6099  mov esi, ebx
    X86_AT(c, 0xc6099u);
    c.r[6] = c.r[3];
    // 0c609b  add esp, 0x10
    X86_AT(c, 0xc609bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c609e:
    X86_TICK(c, 7);
    // 0c609e  cmp esi, 0x11
    X86_AT(c, 0xc609eu);
    (void)x86_sub(c, c.r[6], 0x11u, 0, 4);
    // 0c60a1  jge 0xc61af
    X86_AT(c, 0xc60a1u);
    if (x86_cc(c, 13)) { goto L_c61af; }
    X86_TICK(c, 9);
    // 0c60a7  mov dword ptr [ebp - 0xc], esi
    X86_AT(c, 0xc60a7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[6]);
    // 0c60aa  cmp esi, 0x10
    X86_AT(c, 0xc60aau);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0c60ad  jne 0xc60b6
    X86_AT(c, 0xc60adu);
    if (x86_cc(c, 5)) { goto L_c60b6; }
    X86_TICK(c, 2);
    // 0c60af  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xc60afu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_c60b6:
    X86_TICK(c, 2);
    // 0c60b6  sub edi, edi
    X86_AT(c, 0xc60b6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c60b8:
    X86_TICK(c, 7);
    // 0c60b8  cmp edi, 0x11
    X86_AT(c, 0xc60b8u);
    (void)x86_sub(c, c.r[7], 0x11u, 0, 4);
    // 0c60bb  jge 0xc61a9
    X86_AT(c, 0xc60bbu);
    if (x86_cc(c, 13)) { goto L_c61a9; }
    X86_TICK(c, 7);
    // 0c60c1  cmp edi, 0x10
    X86_AT(c, 0xc60c1u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0c60c4  je 0xc60d7
    X86_AT(c, 0xc60c4u);
    if (x86_cc(c, 4)) { goto L_c60d7; }
    X86_TICK(c, 20);
    // 0c60c6  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc60c6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c60c9  shl eax, 4
    X86_AT(c, 0xc60c9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c60cc  lea edx, [edi + eax*1]
    X86_AT(c, 0xc60ccu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c60cf  mov al, byte ptr [edx + 0xa9234]
    X86_AT(c, 0xc60cfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA9234u))));
    // 0c60d5  jmp 0xc60e3
    X86_AT(c, 0xc60d5u);
    goto L_c60e3;
L_c60d7:
    X86_TICK(c, 11);
    // 0c60d7  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc60d7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c60da  shl eax, 4
    X86_AT(c, 0xc60dau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c60dd  mov al, byte ptr [eax + 0xa9234]
    X86_AT(c, 0xc60ddu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA9234u))));
L_c60e3:
    X86_TICK(c, 10);
    // 0c60e3  movzx edx, al
    X86_AT(c, 0xc60e3u);
    c.r[2] = g8(c, 0);
    // 0c60e6  cmp edx, 0x10
    X86_AT(c, 0xc60e6u);
    (void)x86_sub(c, c.r[2], 0x10u, 0, 4);
    // 0c60e9  ja 0xc6162
    X86_AT(c, 0xc60e9u);
    if (x86_cc(c, 7)) { goto L_c6162; }
    X86_TICK(c, 7);
    // 0c60ef  jmp dword ptr cs:[edx*4 + 0xc60f7]
    X86_AT(c, 0xc60efu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC60F7u)));
      switch (t) {
      case 0xc613bu: goto L_c613b;
      case 0xc613fu: goto L_c613f;
      case 0xc6146u: goto L_c6146;
      case 0xc614du: goto L_c614d;
      case 0xc6154u: goto L_c6154;
      case 0xc615bu: goto L_c615b;
      case 0xc6162u: goto L_c6162;
      default: x86_jump(c, t); return; } }
L_c613b:
    X86_TICK(c, 9);
    // 0c613b  sub ebx, ebx
    X86_AT(c, 0xc613bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c613d  jmp 0xc6167
    X86_AT(c, 0xc613du);
    goto L_c6167;
L_c613f:
    X86_TICK(c, 9);
    // 0c613f  mov ebx, 1
    X86_AT(c, 0xc613fu);
    c.r[3] = 0x1u;
    // 0c6144  jmp 0xc6167
    X86_AT(c, 0xc6144u);
    goto L_c6167;
L_c6146:
    X86_TICK(c, 9);
    // 0c6146  mov ebx, 2
    X86_AT(c, 0xc6146u);
    c.r[3] = 0x2u;
    // 0c614b  jmp 0xc6167
    X86_AT(c, 0xc614bu);
    goto L_c6167;
L_c614d:
    X86_TICK(c, 9);
    // 0c614d  mov ebx, 5
    X86_AT(c, 0xc614du);
    c.r[3] = 0x5u;
    // 0c6152  jmp 0xc6167
    X86_AT(c, 0xc6152u);
    goto L_c6167;
L_c6154:
    X86_TICK(c, 9);
    // 0c6154  mov ebx, 4
    X86_AT(c, 0xc6154u);
    c.r[3] = 0x4u;
    // 0c6159  jmp 0xc6167
    X86_AT(c, 0xc6159u);
    goto L_c6167;
L_c615b:
    X86_TICK(c, 9);
    // 0c615b  mov ebx, 6
    X86_AT(c, 0xc615bu);
    c.r[3] = 0x6u;
    // 0c6160  jmp 0xc6167
    X86_AT(c, 0xc6160u);
    goto L_c6167;
L_c6162:
    X86_TICK(c, 2);
    // 0c6162  mov ebx, 3
    X86_AT(c, 0xc6162u);
    c.r[3] = 0x3u;
L_c6167:
    X86_TICK(c, 38);
    // 0c6167  push 0x10
    X86_AT(c, 0xc6167u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0c6169  push 0x10
    X86_AT(c, 0xc6169u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0c616b  mov eax, esi
    X86_AT(c, 0xc616bu);
    c.r[0] = c.r[6];
    // 0c616d  shl eax, 4
    X86_AT(c, 0xc616du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c6170  add eax, 0x57
    X86_AT(c, 0xc6170u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x57u, 0, 4); }
    // 0c6173  push eax
    X86_AT(c, 0xc6173u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c6174  mov eax, edi
    X86_AT(c, 0xc6174u);
    c.r[0] = c.r[7];
    // 0c6176  shl eax, 4
    X86_AT(c, 0xc6176u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c6179  add eax, 0x32
    X86_AT(c, 0xc6179u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x32u, 0, 4); }
    // 0c617c  push eax
    X86_AT(c, 0xc617cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c617d  mov eax, ebx
    X86_AT(c, 0xc617du);
    c.r[0] = c.r[3];
    // 0c617f  shl eax, 7
    X86_AT(c, 0xc617fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0c6182  add eax, 0xa98b0
    X86_AT(c, 0xc6182u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xA98B0u, 0, 4); }
    // 0c6187  push eax
    X86_AT(c, 0xc6187u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c6188  call 0xbb018
    X86_AT(c, 0xc6188u);
    push32(c, 0xc618du); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xc618du);
    X86_TICK(c, 13);
    // 0c618d  add esp, 0x14
    X86_AT(c, 0xc618du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c6190  cmp esi, dword ptr [0xa4a72]
    X86_AT(c, 0xc6190u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xA4A72u))), 0, 4);
    // 0c6196  jne 0xc61a3
    X86_AT(c, 0xc6196u);
    if (x86_cc(c, 5)) { goto L_c61a3; }
    X86_TICK(c, 11);
    // 0c6198  cmp edi, dword ptr [0xa4a6e]
    X86_AT(c, 0xc6198u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))), 0, 4);
    // 0c619e  jne 0xc61a3
    X86_AT(c, 0xc619eu);
    if (x86_cc(c, 5)) { goto L_c61a3; }
    X86_TICK(c, 2);
    // 0c61a0  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0xc61a0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
L_c61a3:
    X86_TICK(c, 9);
    // 0c61a3  inc edi
    X86_AT(c, 0xc61a3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c61a4  jmp 0xc60b8
    X86_AT(c, 0xc61a4u);
    X86_POLL(c, 0xc60b8u); goto L_c60b8;
L_c61a9:
    X86_TICK(c, 9);
    // 0c61a9  inc esi
    X86_AT(c, 0xc61a9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c61aa  jmp 0xc609e
    X86_AT(c, 0xc61aau);
    X86_POLL(c, 0xc609eu); goto L_c609e;
L_c61af:
    X86_TICK(c, 9);
    // 0c61af  push 0x4e14
    X86_AT(c, 0xc61afu);
    { uint32_t v = 0x4E14u; push32(c, v); }
    // 0c61b4  call 0xbc50c
    X86_AT(c, 0xc61b4u);
    push32(c, 0xc61b9u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc61b9u);
    X86_TICK(c, 4);
    // 0c61b9  sub ebx, ebx
    X86_AT(c, 0xc61b9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c61bb  add esp, 4
    X86_AT(c, 0xc61bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c61be:
    X86_TICK(c, 9);
    // 0c61be  push 7
    X86_AT(c, 0xc61beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c61c0  call 0xb9930
    X86_AT(c, 0xc61c0u);
    push32(c, 0xc61c5u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc61c5u);
    X86_TICK(c, 9);
    // 0c61c5  add esp, 4
    X86_AT(c, 0xc61c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c61c8  and al, al
    X86_AT(c, 0xc61c8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c61ca  jne 0xc6242
    X86_AT(c, 0xc61cau);
    if (x86_cc(c, 5)) { goto L_c6242; }
    X86_TICK(c, 7);
    // 0c61d0  and ebx, ebx
    X86_AT(c, 0xc61d0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0c61d2  jne 0xc6204
    X86_AT(c, 0xc61d2u);
    if (x86_cc(c, 5)) { goto L_c6204; }
    X86_TICK(c, 44);
    // 0c61d4  push 0x10
    X86_AT(c, 0xc61d4u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0c61d6  push 0x10
    X86_AT(c, 0xc61d6u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0c61d8  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc61d8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c61dd  shl eax, 4
    X86_AT(c, 0xc61ddu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c61e0  add eax, 0x57
    X86_AT(c, 0xc61e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x57u, 0, 4); }
    // 0c61e3  push eax
    X86_AT(c, 0xc61e3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c61e4  mov eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc61e4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu)));
    // 0c61e9  shl eax, 4
    X86_AT(c, 0xc61e9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c61ec  add eax, 0x32
    X86_AT(c, 0xc61ecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x32u, 0, 4); }
    // 0c61ef  push eax
    X86_AT(c, 0xc61efu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c61f0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc61f0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c61f3  shl eax, 7
    X86_AT(c, 0xc61f3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0c61f6  add eax, 0xa98b0
    X86_AT(c, 0xc61f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xA98B0u, 0, 4); }
    // 0c61fb  push eax
    X86_AT(c, 0xc61fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c61fc  call 0xbb018
    X86_AT(c, 0xc61fcu);
    push32(c, 0xc6201u); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xc6201u);
    X86_TICK(c, 2);
    // 0c6201  add esp, 0x14
    X86_AT(c, 0xc6201u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c6204:
    X86_TICK(c, 7);
    // 0c6204  cmp ebx, 0x64
    X86_AT(c, 0xc6204u);
    (void)x86_sub(c, c.r[3], 0x64u, 0, 4);
    // 0c6207  jne 0xc6232
    X86_AT(c, 0xc6207u);
    if (x86_cc(c, 5)) { goto L_c6232; }
    X86_TICK(c, 35);
    // 0c6209  push 0x10
    X86_AT(c, 0xc6209u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0c620b  push 0x10
    X86_AT(c, 0xc620bu);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0c620d  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc620du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c6212  shl eax, 4
    X86_AT(c, 0xc6212u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c6215  add eax, 0x57
    X86_AT(c, 0xc6215u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x57u, 0, 4); }
    // 0c6218  push eax
    X86_AT(c, 0xc6218u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c6219  mov eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc6219u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu)));
    // 0c621e  shl eax, 4
    X86_AT(c, 0xc621eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c6221  add eax, 0x32
    X86_AT(c, 0xc6221u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x32u, 0, 4); }
    // 0c6224  push eax
    X86_AT(c, 0xc6224u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c6225  push 0xa9cb0
    X86_AT(c, 0xc6225u);
    { uint32_t v = 0xA9CB0u; push32(c, v); }
    // 0c622a  call 0xbb018
    X86_AT(c, 0xc622au);
    push32(c, 0xc622fu); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xc622fu);
    X86_TICK(c, 2);
    // 0c622f  add esp, 0x14
    X86_AT(c, 0xc622fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c6232:
    X86_TICK(c, 9);
    // 0c6232  inc ebx
    X86_AT(c, 0xc6232u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c6233  cmp ebx, 0xc8
    X86_AT(c, 0xc6233u);
    (void)x86_sub(c, c.r[3], 0xC8u, 0, 4);
    // 0c6239  jne 0xc61be
    X86_AT(c, 0xc6239u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc61beu); goto L_c61be; }
    X86_TICK(c, 9);
    // 0c623b  sub ebx, ebx
    X86_AT(c, 0xc623bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c623d  jmp 0xc61be
    X86_AT(c, 0xc623du);
    X86_POLL(c, 0xc61beu); goto L_c61be;
L_c6242:
    X86_TICK(c, 9);
    // 0c6242  push 2
    X86_AT(c, 0xc6242u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6244  call 0xbbb5c
    X86_AT(c, 0xc6244u);
    push32(c, 0xc6249u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6249u);
    X86_TICK(c, 7);
    // 0c6249  call 0xbd5d0
    X86_AT(c, 0xc6249u);
    push32(c, 0xc624eu); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xc624eu);
    X86_TICK(c, 14);
    // 0c624e  add esp, 4
    X86_AT(c, 0xc624eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6251  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xc6251u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0c6258  je 0xc6264
    X86_AT(c, 0xc6258u);
    if (x86_cc(c, 4)) { goto L_c6264; }
    X86_TICK(c, 9);
    // 0c625a  push 1
    X86_AT(c, 0xc625au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c625c  call 0xb61d4
    X86_AT(c, 0xc625cu);
    push32(c, 0xc6261u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xc6261u);
    X86_TICK(c, 2);
    // 0c6261  add esp, 4
    X86_AT(c, 0xc6261u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c6264:
    X86_TICK(c, 28);
    // 0c6264  pop edi
    X86_AT(c, 0xc6264u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6265  pop esi
    X86_AT(c, 0xc6265u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6266  pop ebx
    X86_AT(c, 0xc6266u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c6267  leave 
    X86_AT(c, 0xc6267u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6268  ret 
    X86_AT(c, 0xc6268u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6064u, "ran off the end of a function");
}
void f_000c626c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0c626c  push ebp
    X86_AT(c, 0xc626cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c626d  mov ebp, esp
    X86_AT(c, 0xc626du);
    c.r[5] = c.r[4];
    // 0c626f  sub esp, 0x1c
    X86_AT(c, 0xc626fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x1Cu, 0, 4); }
    // 0c6272  push ebx
    X86_AT(c, 0xc6272u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c6273  push esi
    X86_AT(c, 0xc6273u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c6274  push edi
    X86_AT(c, 0xc6274u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6275  cmp word ptr [0xa9e94], 0
    X86_AT(c, 0xc6275u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA9E94u))), 0x0u, 0, 2);
    // 0c627d  jne 0xc6382
    X86_AT(c, 0xc627du);
    if (x86_cc(c, 5)) { goto L_c6382; }
    X86_TICK(c, 2);
    // 0c6283  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xc6283u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_c628a:
    X86_TICK(c, 12);
    // 0c628a  cmp dword ptr [ebp - 8], 4
    X86_AT(c, 0xc628au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x4u, 0, 4);
    // 0c628e  jge 0xc6382
    X86_AT(c, 0xc628eu);
    if (x86_cc(c, 13)) { goto L_c6382; }
    X86_TICK(c, 2);
    // 0c6294  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xc6294u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_c629b:
    X86_TICK(c, 12);
    // 0c629b  cmp dword ptr [ebp - 0xc], 0xb
    X86_AT(c, 0xc629bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0xBu, 0, 4);
    // 0c629f  jge 0xc637a
    X86_AT(c, 0xc629fu);
    if (x86_cc(c, 13)) { goto L_c637a; }
    X86_TICK(c, 2);
    // 0c62a5  sub esi, esi
    X86_AT(c, 0xc62a5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c62a7:
    X86_TICK(c, 7);
    // 0c62a7  cmp esi, 0xb
    X86_AT(c, 0xc62a7u);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0c62aa  jge 0xc6372
    X86_AT(c, 0xc62aau);
    if (x86_cc(c, 13)) { goto L_c6372; }
    X86_TICK(c, 33);
    // 0c62b0  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc62b0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c62b3  lea edx, [eax + eax*4]
    X86_AT(c, 0xc62b3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0c62b6  lea edx, [edx + edx*2]
    X86_AT(c, 0xc62b6u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c62b9  lea edx, [eax + edx*8]
    X86_AT(c, 0xc62b9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c62bc  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc62bcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c62bf  lea ecx, [eax + eax*8]
    X86_AT(c, 0xc62bfu);
    c.r[1] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c62c2  lea eax, [ecx + eax*2]
    X86_AT(c, 0xc62c2u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 2);
    // 0c62c5  add eax, edx
    X86_AT(c, 0xc62c5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c62c7  add eax, esi
    X86_AT(c, 0xc62c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0c62c9  mov al, byte ptr [eax + 0xa9cb0]
    X86_AT(c, 0xc62c9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA9CB0u))));
    // 0c62cf  and al, al
    X86_AT(c, 0xc62cfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c62d1  je 0xc636c
    X86_AT(c, 0xc62d1u);
    if (x86_cc(c, 4)) { goto L_c636c; }
    X86_TICK(c, 60);
    // 0c62d7  mov edx, esi
    X86_AT(c, 0xc62d7u);
    c.r[2] = c.r[6];
    // 0c62d9  shl edx, 5
    X86_AT(c, 0xc62d9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c62dc  mov byte ptr [ebp - 0x18], al
    X86_AT(c, 0xc62dcu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), g8(c, 0));
    // 0c62df  xchg edx, eax
    X86_AT(c, 0xc62dfu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0c62e0  cdq 
    X86_AT(c, 0xc62e0u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c62e1  sub eax, edx
    X86_AT(c, 0xc62e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0c62e3  sar eax, 1
    X86_AT(c, 0xc62e3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0c62e5  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc62e5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c62e8  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc62e8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c62eb  lea eax, [edx + edx*4]
    X86_AT(c, 0xc62ebu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0c62ee  lea eax, [edx + eax*2]
    X86_AT(c, 0xc62eeu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0c62f1  shl eax, 0xa
    X86_AT(c, 0xc62f1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0c62f4  cdq 
    X86_AT(c, 0xc62f4u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c62f5  sub eax, edx
    X86_AT(c, 0xc62f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0c62f7  sar eax, 1
    X86_AT(c, 0xc62f7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0c62f9  add eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc62f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0, 4); }
    // 0c62fc  lea ebx, [eax*1 + 0x8d0a0]
    X86_AT(c, 0xc62fcu);
    c.r[3] = (uint32_t)(c.r[0] + 0x8D0A0u);
    // 0c6303  movzx eax, byte ptr [ebp - 0x18]
    X86_AT(c, 0xc6303u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0c6307  shl eax, 9
    X86_AT(c, 0xc6307u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0c630a  add eax, 0x76da8
    X86_AT(c, 0xc630au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x76DA8u, 0, 4); }
    // 0c630f  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xc630fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0c6312  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xc6312u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_c6319:
    X86_TICK(c, 12);
    // 0c6319  cmp dword ptr [ebp - 4], 0x20
    X86_AT(c, 0xc6319u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x20u, 0, 4);
    // 0c631d  jge 0xc636c
    X86_AT(c, 0xc631du);
    if (x86_cc(c, 13)) { goto L_c636c; }
    X86_TICK(c, 2);
    // 0c631f  sub edi, edi
    X86_AT(c, 0xc631fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c6321:
    X86_TICK(c, 7);
    // 0c6321  cmp edi, 0x10
    X86_AT(c, 0xc6321u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0c6324  jge 0xc6361
    X86_AT(c, 0xc6324u);
    if (x86_cc(c, 13)) { goto L_c6361; }
    X86_TICK(c, 19);
    // 0c6326  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc6326u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0c6329  mov al, byte ptr [eax]
    X86_AT(c, 0xc6329u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0c632b  and al, 0xf
    X86_AT(c, 0xc632bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0c632d  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xc632du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0c6330  and al, al
    X86_AT(c, 0xc6330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c6332  jne 0xc633c
    X86_AT(c, 0xc6332u);
    if (x86_cc(c, 5)) { goto L_c633c; }
    X86_TICK(c, 8);
    // 0c6334  mov al, byte ptr [ebx + edi*1]
    X86_AT(c, 0xc6334u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7]))));
    // 0c6337  and al, 0xf
    X86_AT(c, 0xc6337u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0c6339  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xc6339u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
L_c633c:
    X86_TICK(c, 25);
    // 0c633c  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc633cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0c633f  inc dword ptr [ebp - 0x14]
    X86_AT(c, 0xc633fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c6342  mov al, byte ptr [eax]
    X86_AT(c, 0xc6342u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0c6344  and al, 0xf0
    X86_AT(c, 0xc6344u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0c6346  mov byte ptr [ebp - 0xe], al
    X86_AT(c, 0xc6346u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 0));
    // 0c6349  and al, al
    X86_AT(c, 0xc6349u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c634b  jne 0xc6355
    X86_AT(c, 0xc634bu);
    if (x86_cc(c, 5)) { goto L_c6355; }
    X86_TICK(c, 8);
    // 0c634d  mov al, byte ptr [ebx + edi*1]
    X86_AT(c, 0xc634du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7]))));
    // 0c6350  and al, 0xf0
    X86_AT(c, 0xc6350u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0c6352  mov byte ptr [ebp - 0xe], al
    X86_AT(c, 0xc6352u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 0));
L_c6355:
    X86_TICK(c, 21);
    // 0c6355  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xc6355u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0c6358  add al, byte ptr [ebp - 0xe]
    X86_AT(c, 0xc6358u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0, 1)); }
    // 0c635b  mov byte ptr [ebx + edi*1], al
    X86_AT(c, 0xc635bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7])), g8(c, 0));
    // 0c635e  inc edi
    X86_AT(c, 0xc635eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c635f  jmp 0xc6321
    X86_AT(c, 0xc635fu);
    X86_POLL(c, 0xc6321u); goto L_c6321;
L_c6361:
    X86_TICK(c, 15);
    // 0c6361  inc dword ptr [ebp - 4]
    X86_AT(c, 0xc6361u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c6364  add ebx, 0xb0
    X86_AT(c, 0xc6364u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0c636a  jmp 0xc6319
    X86_AT(c, 0xc636au);
    X86_POLL(c, 0xc6319u); goto L_c6319;
L_c636c:
    X86_TICK(c, 9);
    // 0c636c  inc esi
    X86_AT(c, 0xc636cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c636d  jmp 0xc62a7
    X86_AT(c, 0xc636du);
    X86_POLL(c, 0xc62a7u); goto L_c62a7;
L_c6372:
    X86_TICK(c, 13);
    // 0c6372  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xc6372u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c6375  jmp 0xc629b
    X86_AT(c, 0xc6375u);
    X86_POLL(c, 0xc629bu); goto L_c629b;
L_c637a:
    X86_TICK(c, 13);
    // 0c637a  inc dword ptr [ebp - 8]
    X86_AT(c, 0xc637au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c637d  jmp 0xc628a
    X86_AT(c, 0xc637du);
    X86_POLL(c, 0xc628au); goto L_c628a;
L_c6382:
    X86_TICK(c, 28);
    // 0c6382  pop edi
    X86_AT(c, 0xc6382u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6383  pop esi
    X86_AT(c, 0xc6383u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6384  pop ebx
    X86_AT(c, 0xc6384u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c6385  leave 
    X86_AT(c, 0xc6385u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6386  ret 
    X86_AT(c, 0xc6386u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc626cu, "ran off the end of a function");
}
void f_000c6388(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0c6388  push ebp
    X86_AT(c, 0xc6388u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6389  mov ebp, esp
    X86_AT(c, 0xc6389u);
    c.r[5] = c.r[4];
    // 0c638b  push eax
    X86_AT(c, 0xc638bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c638c  push ebx
    X86_AT(c, 0xc638cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c638d  push esi
    X86_AT(c, 0xc638du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c638e  push edi
    X86_AT(c, 0xc638eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c638f  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc638fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c6394  shl eax, 4
    X86_AT(c, 0xc6394u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c6397  add eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc6397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))), 0, 4); }
    // 0c639d  mov bl, byte ptr [eax + 0xa9234]
    X86_AT(c, 0xc639du);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA9234u))));
    // 0c63a3  push 7
    X86_AT(c, 0xc63a3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c63a5  call 0xbb6b0
    X86_AT(c, 0xc63a5u);
    push32(c, 0xc63aau); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc63aau);
    X86_TICK(c, 14);
    // 0c63aa  add esp, 4
    X86_AT(c, 0xc63aau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c63ad  movzx edx, bl
    X86_AT(c, 0xc63adu);
    c.r[2] = g8(c, 3);
    // 0c63b0  sub edx, 5
    X86_AT(c, 0xc63b0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x5u, 0, 4); }
    // 0c63b3  cmp edx, 0xf
    X86_AT(c, 0xc63b3u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0c63b6  ja 0xc6d1a
    X86_AT(c, 0xc63b6u);
    if (x86_cc(c, 7)) { goto L_c6d1a; }
    X86_TICK(c, 7);
    // 0c63bc  jmp dword ptr cs:[edx*4 + 0xc63c4]
    X86_AT(c, 0xc63bcu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC63C4u)));
      switch (t) {
      case 0xc6404u: goto L_c6404;
      case 0xc64aeu: goto L_c64ae;
      case 0xc6597u: goto L_c6597;
      case 0xc664eu: goto L_c664e;
      case 0xc672bu: goto L_c672b;
      case 0xc67b5u: goto L_c67b5;
      case 0xc6843u: goto L_c6843;
      case 0xc6878u: goto L_c6878;
      case 0xc69ecu: goto L_c69ec;
      case 0xc6b80u: goto L_c6b80;
      case 0xc6d1au: goto L_c6d1a;
      default: x86_jump(c, t); return; } }
L_c6404:
    X86_TICK(c, 20);
    // 0c6404  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xc6404u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0c6409  mov dword ptr [0xa4a5a], eax
    X86_AT(c, 0xc6409u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A5Au)), c.r[0]);
    // 0c640e  mov dword ptr [0xa4a56], 4
    X86_AT(c, 0xc640eu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x4u);
    // 0c6418  push dword ptr [0xa8a1c]
    X86_AT(c, 0xc6418u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA8A1Cu))); push32(c, v); }
    // 0c641e  call 0xc5ff4
    X86_AT(c, 0xc641eu);
    push32(c, 0xc6423u); x86_call_known(c, 0xc5ff4u, f_000c5ff4); X86_RET(c, 0xc6423u);
    X86_TICK(c, 11);
    // 0c6423  push 0x4e48
    X86_AT(c, 0xc6423u);
    { uint32_t v = 0x4E48u; push32(c, v); }
    // 0c6428  push 7
    X86_AT(c, 0xc6428u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c642a  call 0xba428
    X86_AT(c, 0xc642au);
    push32(c, 0xc642fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc642fu);
    X86_TICK(c, 9);
    // 0c642f  push 7
    X86_AT(c, 0xc642fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6431  call 0xbbb5c
    X86_AT(c, 0xc6431u);
    push32(c, 0xc6436u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6436u);
    X86_TICK(c, 11);
    // 0c6436  push 0x4e98
    X86_AT(c, 0xc6436u);
    { uint32_t v = 0x4E98u; push32(c, v); }
    // 0c643b  push 7
    X86_AT(c, 0xc643bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c643d  call 0xba428
    X86_AT(c, 0xc643du);
    push32(c, 0xc6442u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6442u);
    X86_TICK(c, 9);
    // 0c6442  push 7
    X86_AT(c, 0xc6442u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6444  call 0xb6e88
    X86_AT(c, 0xc6444u);
    push32(c, 0xc6449u); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xc6449u);
    X86_TICK(c, 9);
    // 0c6449  add esp, 0x1c
    X86_AT(c, 0xc6449u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c644c  cmp al, 0x59
    X86_AT(c, 0xc644cu);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0c644e  jne 0xc6aa4
    X86_AT(c, 0xc644eu);
    if (x86_cc(c, 5)) { goto L_c6aa4; }
    X86_TICK(c, 9);
    // 0c6454  push 1
    X86_AT(c, 0xc6454u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c6456  call 0xb84e0
    X86_AT(c, 0xc6456u);
    push32(c, 0xc645bu); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc645bu);
    X86_TICK(c, 11);
    // 0c645b  push 0x4ec4
    X86_AT(c, 0xc645bu);
    { uint32_t v = 0x4EC4u; push32(c, v); }
    // 0c6460  push 7
    X86_AT(c, 0xc6460u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6462  call 0xba428
    X86_AT(c, 0xc6462u);
    push32(c, 0xc6467u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6467u);
    X86_TICK(c, 9);
    // 0c6467  push 7
    X86_AT(c, 0xc6467u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6469  call 0xbbb5c
    X86_AT(c, 0xc6469u);
    push32(c, 0xc646eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc646eu);
    X86_TICK(c, 11);
    // 0c646e  push 0
    X86_AT(c, 0xc646eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c6470  push 7
    X86_AT(c, 0xc6470u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6472  call 0xb6f28
    X86_AT(c, 0xc6472u);
    push32(c, 0xc6477u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xc6477u);
    X86_TICK(c, 12);
    // 0c6477  xchg edi, eax
    X86_AT(c, 0xc6477u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c6478  add esp, 0x18
    X86_AT(c, 0xc6478u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c647b  cmp edi, 0xffffffff
    X86_AT(c, 0xc647bu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c647e  je 0xc6a6a
    X86_AT(c, 0xc647eu);
    if (x86_cc(c, 4)) { goto L_c6a6a; }
    X86_TICK(c, 9);
    // 0c6484  push 5
    X86_AT(c, 0xc6484u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c6486  call 0xb607c
    X86_AT(c, 0xc6486u);
    push32(c, 0xc648bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc648bu);
    X86_TICK(c, 21);
    // 0c648b  lea eax, [edi + edi*2]
    X86_AT(c, 0xc648bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c648e  lea edx, [eax*8]
    X86_AT(c, 0xc648eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c6495  lea edx, [eax + edx*8]
    X86_AT(c, 0xc6495u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c6498  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xc6498u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0c649e  mov dword ptr [edx + 0xa4ad5], eax
    X86_AT(c, 0xc649eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), c.r[0]);
    // 0c64a4  push 0x4ef0
    X86_AT(c, 0xc64a4u);
    { uint32_t v = 0x4EF0u; push32(c, v); }
    // 0c64a9  jmp 0xc66fe
    X86_AT(c, 0xc64a9u);
    goto L_c66fe;
L_c64ae:
    X86_TICK(c, 20);
    // 0c64ae  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xc64aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0c64b3  mov dword ptr [0xa4a5a], eax
    X86_AT(c, 0xc64b3u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A5Au)), c.r[0]);
    // 0c64b8  mov dword ptr [0xa4a56], 4
    X86_AT(c, 0xc64b8u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x4u);
    // 0c64c2  push dword ptr [0xa8a1c]
    X86_AT(c, 0xc64c2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA8A1Cu))); push32(c, v); }
    // 0c64c8  call 0xc5ff4
    X86_AT(c, 0xc64c8u);
    push32(c, 0xc64cdu); x86_call_known(c, 0xc5ff4u, f_000c5ff4); X86_RET(c, 0xc64cdu);
    X86_TICK(c, 11);
    // 0c64cd  push 0x4f24
    X86_AT(c, 0xc64cdu);
    { uint32_t v = 0x4F24u; push32(c, v); }
    // 0c64d2  push 7
    X86_AT(c, 0xc64d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c64d4  call 0xba428
    X86_AT(c, 0xc64d4u);
    push32(c, 0xc64d9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc64d9u);
    X86_TICK(c, 9);
    // 0c64d9  push 7
    X86_AT(c, 0xc64d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c64db  call 0xbbb5c
    X86_AT(c, 0xc64dbu);
    push32(c, 0xc64e0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc64e0u);
    X86_TICK(c, 11);
    // 0c64e0  push 0x4f74
    X86_AT(c, 0xc64e0u);
    { uint32_t v = 0x4F74u; push32(c, v); }
    // 0c64e5  push 7
    X86_AT(c, 0xc64e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c64e7  call 0xba428
    X86_AT(c, 0xc64e7u);
    push32(c, 0xc64ecu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc64ecu);
    X86_TICK(c, 9);
    // 0c64ec  push 7
    X86_AT(c, 0xc64ecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c64ee  call 0xb6e88
    X86_AT(c, 0xc64eeu);
    push32(c, 0xc64f3u); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xc64f3u);
    X86_TICK(c, 9);
    // 0c64f3  add esp, 0x1c
    X86_AT(c, 0xc64f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c64f6  cmp al, 0x59
    X86_AT(c, 0xc64f6u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0c64f8  jne 0xc6aa4
    X86_AT(c, 0xc64f8u);
    if (x86_cc(c, 5)) { goto L_c6aa4; }
    X86_TICK(c, 9);
    // 0c64fe  push 1
    X86_AT(c, 0xc64feu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c6500  call 0xb84e0
    X86_AT(c, 0xc6500u);
    push32(c, 0xc6505u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc6505u);
    X86_TICK(c, 11);
    // 0c6505  push 0x4fa0
    X86_AT(c, 0xc6505u);
    { uint32_t v = 0x4FA0u; push32(c, v); }
    // 0c650a  push 7
    X86_AT(c, 0xc650au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c650c  call 0xba428
    X86_AT(c, 0xc650cu);
    push32(c, 0xc6511u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6511u);
    X86_TICK(c, 9);
    // 0c6511  push 7
    X86_AT(c, 0xc6511u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6513  call 0xbbb5c
    X86_AT(c, 0xc6513u);
    push32(c, 0xc6518u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6518u);
    X86_TICK(c, 11);
    // 0c6518  push 0
    X86_AT(c, 0xc6518u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c651a  push 7
    X86_AT(c, 0xc651au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c651c  call 0xb6f28
    X86_AT(c, 0xc651cu);
    push32(c, 0xc6521u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xc6521u);
    X86_TICK(c, 12);
    // 0c6521  xchg edi, eax
    X86_AT(c, 0xc6521u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c6522  add esp, 0x18
    X86_AT(c, 0xc6522u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c6525  cmp edi, 0xffffffff
    X86_AT(c, 0xc6525u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c6528  je 0xc6a6a
    X86_AT(c, 0xc6528u);
    if (x86_cc(c, 4)) { goto L_c6a6a; }
    X86_TICK(c, 18);
    // 0c652e  lea eax, [edi + edi*2]
    X86_AT(c, 0xc652eu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c6531  lea edx, [eax*8]
    X86_AT(c, 0xc6531u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c6538  lea edx, [eax + edx*8]
    X86_AT(c, 0xc6538u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c653b  cmp byte ptr [edx + 0xa4abd], 0x50
    X86_AT(c, 0xc653bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x50u, 0, 1);
    // 0c6542  jne 0xc656b
    X86_AT(c, 0xc6542u);
    if (x86_cc(c, 5)) { goto L_c656b; }
    X86_TICK(c, 11);
    // 0c6544  push 5
    X86_AT(c, 0xc6544u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c6546  mov esi, edx
    X86_AT(c, 0xc6546u);
    c.r[6] = c.r[2];
    // 0c6548  call 0xb607c
    X86_AT(c, 0xc6548u);
    push32(c, 0xc654du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc654du);
    X86_TICK(c, 13);
    // 0c654d  mov byte ptr [esi + 0xa4abd], 0x47
    X86_AT(c, 0xc654du);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA4ABDu)), 0x47u);
    // 0c6554  push 0x4fcc
    X86_AT(c, 0xc6554u);
    { uint32_t v = 0x4FCCu; push32(c, v); }
    // 0c6559  push 7
    X86_AT(c, 0xc6559u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c655b  call 0xba428
    X86_AT(c, 0xc655bu);
    push32(c, 0xc6560u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6560u);
    X86_TICK(c, 9);
    // 0c6560  push edi
    X86_AT(c, 0xc6560u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6561  call 0xbe720
    X86_AT(c, 0xc6561u);
    push32(c, 0xc6566u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc6566u);
    X86_TICK(c, 9);
    // 0c6566  add esp, 0x10
    X86_AT(c, 0xc6566u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c6569  jmp 0xc657a
    X86_AT(c, 0xc6569u);
    goto L_c657a;
L_c656b:
    X86_TICK(c, 11);
    // 0c656b  push 0x5000
    X86_AT(c, 0xc656bu);
    { uint32_t v = 0x5000u; push32(c, v); }
    // 0c6570  push 7
    X86_AT(c, 0xc6570u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6572  call 0xba428
    X86_AT(c, 0xc6572u);
    push32(c, 0xc6577u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6577u);
    X86_TICK(c, 2);
    // 0c6577  add esp, 8
    X86_AT(c, 0xc6577u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c657a:
    X86_TICK(c, 9);
    // 0c657a  push 7
    X86_AT(c, 0xc657au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c657c  call 0xbbb5c
    X86_AT(c, 0xc657cu);
    push32(c, 0xc6581u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6581u);
    X86_TICK(c, 9);
    // 0c6581  push 2
    X86_AT(c, 0xc6581u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6583  call 0xb84e0
    X86_AT(c, 0xc6583u);
    push32(c, 0xc6588u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc6588u);
    X86_TICK(c, 9);
    // 0c6588  mov dword ptr [0xa4a56], 1
    X86_AT(c, 0xc6588u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x1u);
    // 0c6592  jmp 0xc69e4
    X86_AT(c, 0xc6592u);
    goto L_c69e4;
L_c6597:
    X86_TICK(c, 20);
    // 0c6597  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xc6597u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0c659c  mov dword ptr [0xa4a5a], eax
    X86_AT(c, 0xc659cu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A5Au)), c.r[0]);
    // 0c65a1  mov dword ptr [0xa4a56], 4
    X86_AT(c, 0xc65a1u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x4u);
    // 0c65ab  push dword ptr [0xa8a1c]
    X86_AT(c, 0xc65abu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA8A1Cu))); push32(c, v); }
    // 0c65b1  call 0xc5ff4
    X86_AT(c, 0xc65b1u);
    push32(c, 0xc65b6u); x86_call_known(c, 0xc5ff4u, f_000c5ff4); X86_RET(c, 0xc65b6u);
    X86_TICK(c, 11);
    // 0c65b6  push 0x5038
    X86_AT(c, 0xc65b6u);
    { uint32_t v = 0x5038u; push32(c, v); }
    // 0c65bb  push 7
    X86_AT(c, 0xc65bbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c65bd  call 0xba428
    X86_AT(c, 0xc65bdu);
    push32(c, 0xc65c2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc65c2u);
    X86_TICK(c, 9);
    // 0c65c2  push 7
    X86_AT(c, 0xc65c2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c65c4  call 0xbbb5c
    X86_AT(c, 0xc65c4u);
    push32(c, 0xc65c9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc65c9u);
    X86_TICK(c, 11);
    // 0c65c9  push 0x5088
    X86_AT(c, 0xc65c9u);
    { uint32_t v = 0x5088u; push32(c, v); }
    // 0c65ce  push 7
    X86_AT(c, 0xc65ceu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c65d0  call 0xba428
    X86_AT(c, 0xc65d0u);
    push32(c, 0xc65d5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc65d5u);
    X86_TICK(c, 9);
    // 0c65d5  push 7
    X86_AT(c, 0xc65d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c65d7  call 0xb6e88
    X86_AT(c, 0xc65d7u);
    push32(c, 0xc65dcu); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xc65dcu);
    X86_TICK(c, 9);
    // 0c65dc  add esp, 0x1c
    X86_AT(c, 0xc65dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c65df  cmp al, 0x59
    X86_AT(c, 0xc65dfu);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0c65e1  jne 0xc6aa4
    X86_AT(c, 0xc65e1u);
    if (x86_cc(c, 5)) { goto L_c6aa4; }
    X86_TICK(c, 9);
    // 0c65e7  push 1
    X86_AT(c, 0xc65e7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c65e9  call 0xb84e0
    X86_AT(c, 0xc65e9u);
    push32(c, 0xc65eeu); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc65eeu);
    X86_TICK(c, 11);
    // 0c65ee  push 0x50b4
    X86_AT(c, 0xc65eeu);
    { uint32_t v = 0x50B4u; push32(c, v); }
    // 0c65f3  push 7
    X86_AT(c, 0xc65f3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c65f5  call 0xba428
    X86_AT(c, 0xc65f5u);
    push32(c, 0xc65fau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc65fau);
    X86_TICK(c, 9);
    // 0c65fa  push 7
    X86_AT(c, 0xc65fau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c65fc  call 0xbbb5c
    X86_AT(c, 0xc65fcu);
    push32(c, 0xc6601u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6601u);
    X86_TICK(c, 11);
    // 0c6601  push 0
    X86_AT(c, 0xc6601u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c6603  push 7
    X86_AT(c, 0xc6603u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6605  call 0xb6f28
    X86_AT(c, 0xc6605u);
    push32(c, 0xc660au); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xc660au);
    X86_TICK(c, 12);
    // 0c660a  xchg edi, eax
    X86_AT(c, 0xc660au);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c660b  add esp, 0x18
    X86_AT(c, 0xc660bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c660e  cmp edi, 0xffffffff
    X86_AT(c, 0xc660eu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c6611  jne 0xc6629
    X86_AT(c, 0xc6611u);
    if (x86_cc(c, 5)) { goto L_c6629; }
    X86_TICK(c, 11);
    // 0c6613  mov dword ptr [0xa4a56], 1
    X86_AT(c, 0xc6613u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x1u);
    // 0c661d  push 2
    X86_AT(c, 0xc661du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c661f  call 0xb84e0
    X86_AT(c, 0xc661fu);
    push32(c, 0xc6624u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc6624u);
    X86_TICK(c, 7);
    // 0c6624  jmp 0xc6a7b
    X86_AT(c, 0xc6624u);
    goto L_c6a7b;
L_c6629:
    X86_TICK(c, 9);
    // 0c6629  push 5
    X86_AT(c, 0xc6629u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c662b  call 0xb607c
    X86_AT(c, 0xc662bu);
    push32(c, 0xc6630u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc6630u);
    X86_TICK(c, 17);
    // 0c6630  lea eax, [edi + edi*2]
    X86_AT(c, 0xc6630u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c6633  lea edx, [eax*8]
    X86_AT(c, 0xc6633u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c663a  lea edx, [eax + edx*8]
    X86_AT(c, 0xc663au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c663d  mov byte ptr [edx + 0xa4abd], 0x50
    X86_AT(c, 0xc663du);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x50u);
    // 0c6644  push 0x50e0
    X86_AT(c, 0xc6644u);
    { uint32_t v = 0x50E0u; push32(c, v); }
    // 0c6649  jmp 0xc66fe
    X86_AT(c, 0xc6649u);
    goto L_c66fe;
L_c664e:
    X86_TICK(c, 20);
    // 0c664e  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xc664eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0c6653  mov dword ptr [0xa4a5a], eax
    X86_AT(c, 0xc6653u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A5Au)), c.r[0]);
    // 0c6658  mov dword ptr [0xa4a56], 4
    X86_AT(c, 0xc6658u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x4u);
    // 0c6662  push dword ptr [0xa8a1c]
    X86_AT(c, 0xc6662u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA8A1Cu))); push32(c, v); }
    // 0c6668  call 0xc5ff4
    X86_AT(c, 0xc6668u);
    push32(c, 0xc666du); x86_call_known(c, 0xc5ff4u, f_000c5ff4); X86_RET(c, 0xc666du);
    X86_TICK(c, 11);
    // 0c666d  push 0x510c
    X86_AT(c, 0xc666du);
    { uint32_t v = 0x510Cu; push32(c, v); }
    // 0c6672  push 7
    X86_AT(c, 0xc6672u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6674  call 0xba428
    X86_AT(c, 0xc6674u);
    push32(c, 0xc6679u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6679u);
    X86_TICK(c, 9);
    // 0c6679  push 7
    X86_AT(c, 0xc6679u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c667b  call 0xbbb5c
    X86_AT(c, 0xc667bu);
    push32(c, 0xc6680u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6680u);
    X86_TICK(c, 11);
    // 0c6680  push 0x515c
    X86_AT(c, 0xc6680u);
    { uint32_t v = 0x515Cu; push32(c, v); }
    // 0c6685  push 7
    X86_AT(c, 0xc6685u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6687  call 0xba428
    X86_AT(c, 0xc6687u);
    push32(c, 0xc668cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc668cu);
    X86_TICK(c, 9);
    // 0c668c  push 7
    X86_AT(c, 0xc668cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c668e  call 0xb6e88
    X86_AT(c, 0xc668eu);
    push32(c, 0xc6693u); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xc6693u);
    X86_TICK(c, 9);
    // 0c6693  add esp, 0x1c
    X86_AT(c, 0xc6693u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c6696  cmp al, 0x59
    X86_AT(c, 0xc6696u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0c6698  jne 0xc6aa4
    X86_AT(c, 0xc6698u);
    if (x86_cc(c, 5)) { goto L_c6aa4; }
    X86_TICK(c, 9);
    // 0c669e  push 1
    X86_AT(c, 0xc669eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c66a0  call 0xb84e0
    X86_AT(c, 0xc66a0u);
    push32(c, 0xc66a5u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc66a5u);
    X86_TICK(c, 11);
    // 0c66a5  push 0x5188
    X86_AT(c, 0xc66a5u);
    { uint32_t v = 0x5188u; push32(c, v); }
    // 0c66aa  push 7
    X86_AT(c, 0xc66aau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c66ac  call 0xba428
    X86_AT(c, 0xc66acu);
    push32(c, 0xc66b1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc66b1u);
    X86_TICK(c, 9);
    // 0c66b1  push 7
    X86_AT(c, 0xc66b1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c66b3  call 0xbbb5c
    X86_AT(c, 0xc66b3u);
    push32(c, 0xc66b8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc66b8u);
    X86_TICK(c, 11);
    // 0c66b8  push 0
    X86_AT(c, 0xc66b8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c66ba  push 7
    X86_AT(c, 0xc66bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c66bc  call 0xb6f28
    X86_AT(c, 0xc66bcu);
    push32(c, 0xc66c1u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xc66c1u);
    X86_TICK(c, 12);
    // 0c66c1  xchg edi, eax
    X86_AT(c, 0xc66c1u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c66c2  add esp, 0x18
    X86_AT(c, 0xc66c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c66c5  cmp edi, 0xffffffff
    X86_AT(c, 0xc66c5u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c66c8  je 0xc6a6a
    X86_AT(c, 0xc66c8u);
    if (x86_cc(c, 4)) { goto L_c6a6a; }
    X86_TICK(c, 9);
    // 0c66ce  push 5
    X86_AT(c, 0xc66ceu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c66d0  call 0xb607c
    X86_AT(c, 0xc66d0u);
    push32(c, 0xc66d5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc66d5u);
    X86_TICK(c, 27);
    // 0c66d5  lea eax, [edi + edi*2]
    X86_AT(c, 0xc66d5u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c66d8  lea edx, [eax*8]
    X86_AT(c, 0xc66d8u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c66df  lea edx, [eax + edx*8]
    X86_AT(c, 0xc66dfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c66e2  mov eax, dword ptr [edx + 0xa4ad5]
    X86_AT(c, 0xc66e2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)));
    // 0c66e8  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc66e8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c66eb  cdq 
    X86_AT(c, 0xc66ebu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c66ec  sub eax, edx
    X86_AT(c, 0xc66ecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0c66ee  sar eax, 1
    X86_AT(c, 0xc66eeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0c66f0  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xc66f0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c66f3  mov dword ptr [edx + 0xa4ad5], eax
    X86_AT(c, 0xc66f3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), c.r[0]);
    // 0c66f9  push 0x51b4
    X86_AT(c, 0xc66f9u);
    { uint32_t v = 0x51B4u; push32(c, v); }
L_c66fe:
    X86_TICK(c, 9);
    // 0c66fe  push 7
    X86_AT(c, 0xc66feu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6700  call 0xba428
    X86_AT(c, 0xc6700u);
    push32(c, 0xc6705u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6705u);
    X86_TICK(c, 9);
    // 0c6705  push 7
    X86_AT(c, 0xc6705u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6707  call 0xbbb5c
    X86_AT(c, 0xc6707u);
    push32(c, 0xc670cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc670cu);
    X86_TICK(c, 9);
    // 0c670c  push edi
    X86_AT(c, 0xc670cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c670d  call 0xbe720
    X86_AT(c, 0xc670du);
    push32(c, 0xc6712u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc6712u);
    X86_TICK(c, 9);
    // 0c6712  push 2
    X86_AT(c, 0xc6712u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6714  call 0xb84e0
    X86_AT(c, 0xc6714u);
    push32(c, 0xc6719u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc6719u);
    X86_TICK(c, 11);
    // 0c6719  mov dword ptr [0xa4a56], 1
    X86_AT(c, 0xc6719u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x1u);
    // 0c6723  add esp, 0x18
    X86_AT(c, 0xc6723u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c6726  jmp 0xc6d1a
    X86_AT(c, 0xc6726u);
    goto L_c6d1a;
L_c672b:
    X86_TICK(c, 9);
    // 0c672b  push 0xc
    X86_AT(c, 0xc672bu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c672d  call 0xb607c
    X86_AT(c, 0xc672du);
    push32(c, 0xc6732u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc6732u);
    X86_TICK(c, 9);
    // 0c6732  push 2
    X86_AT(c, 0xc6732u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6734  call 0xbebbc
    X86_AT(c, 0xc6734u);
    push32(c, 0xc6739u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc6739u);
    X86_TICK(c, 24);
    // 0c6739  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc6739u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c673e  shl eax, 4
    X86_AT(c, 0xc673eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c6741  add eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc6741u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))), 0, 4); }
    // 0c6747  mov byte ptr [eax + 0xa9234], 0
    X86_AT(c, 0xc6747u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA9234u)), 0x0u);
    // 0c674e  push 9
    X86_AT(c, 0xc674eu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c6750  call 0xb61b4
    X86_AT(c, 0xc6750u);
    push32(c, 0xc6755u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc6755u);
    X86_TICK(c, 9);
    // 0c6755  add esp, 0xc
    X86_AT(c, 0xc6755u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c6758  cmp eax, 2
    X86_AT(c, 0xc6758u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0c675b  jge 0xc6792
    X86_AT(c, 0xc675bu);
    if (x86_cc(c, 13)) { goto L_c6792; }
    X86_TICK(c, 13);
    // 0c675d  mov dword ptr [0xa4a9a], 0
    X86_AT(c, 0xc675du);
    wr32((c.sbase[3] + (uint32_t)(0xA4A9Au)), 0x0u);
    // 0c6767  push 0x51f4
    X86_AT(c, 0xc6767u);
    { uint32_t v = 0x51F4u; push32(c, v); }
    // 0c676c  push 7
    X86_AT(c, 0xc676cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c676e  call 0xba428
    X86_AT(c, 0xc676eu);
    push32(c, 0xc6773u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6773u);
    X86_TICK(c, 9);
    // 0c6773  push 7
    X86_AT(c, 0xc6773u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6775  call 0xbbb5c
    X86_AT(c, 0xc6775u);
    push32(c, 0xc677au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc677au);
    X86_TICK(c, 11);
    // 0c677a  push 0x522c
    X86_AT(c, 0xc677au);
    { uint32_t v = 0x522Cu; push32(c, v); }
    // 0c677f  push 7
    X86_AT(c, 0xc677fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6781  call 0xba428
    X86_AT(c, 0xc6781u);
    push32(c, 0xc6786u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6786u);
    X86_TICK(c, 9);
    // 0c6786  push 7
    X86_AT(c, 0xc6786u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6788  call 0xbbb5c
    X86_AT(c, 0xc6788u);
    push32(c, 0xc678du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc678du);
    X86_TICK(c, 9);
    // 0c678d  add esp, 0x18
    X86_AT(c, 0xc678du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c6790  jmp 0xc67a9
    X86_AT(c, 0xc6790u);
    goto L_c67a9;
L_c6792:
    X86_TICK(c, 13);
    // 0c6792  mov eax, 0x526a
    X86_AT(c, 0xc6792u);
    c.r[0] = 0x526Au;
    // 0c6797  push eax
    X86_AT(c, 0xc6797u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c6798  push 7
    X86_AT(c, 0xc6798u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c679a  call 0xba428
    X86_AT(c, 0xc679au);
    push32(c, 0xc679fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc679fu);
    X86_TICK(c, 9);
    // 0c679f  push 7
    X86_AT(c, 0xc679fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c67a1  call 0xbbb5c
    X86_AT(c, 0xc67a1u);
    push32(c, 0xc67a6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc67a6u);
    X86_TICK(c, 2);
    // 0c67a6  add esp, 0xc
    X86_AT(c, 0xc67a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c67a9:
    X86_TICK(c, 9);
    // 0c67a9  push 5
    X86_AT(c, 0xc67a9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c67ab  call 0xbebbc
    X86_AT(c, 0xc67abu);
    push32(c, 0xc67b0u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc67b0u);
    X86_TICK(c, 7);
    // 0c67b0  jmp 0xc6a7b
    X86_AT(c, 0xc67b0u);
    goto L_c6a7b;
L_c67b5:
    X86_TICK(c, 24);
    // 0c67b5  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc67b5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c67ba  shl eax, 4
    X86_AT(c, 0xc67bau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c67bd  add eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc67bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))), 0, 4); }
    // 0c67c3  mov byte ptr [eax + 0xa9234], 0
    X86_AT(c, 0xc67c3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA9234u)), 0x0u);
    // 0c67ca  push 3
    X86_AT(c, 0xc67cau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c67cc  call 0xb61b4
    X86_AT(c, 0xc67ccu);
    push32(c, 0xc67d1u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc67d1u);
    X86_TICK(c, 29);
    // 0c67d1  mov edi, eax
    X86_AT(c, 0xc67d1u);
    c.r[7] = c.r[0];
    // 0c67d3  lea eax, [eax + eax*2]
    X86_AT(c, 0xc67d3u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c67d6  lea edx, [eax*8]
    X86_AT(c, 0xc67d6u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c67dd  lea edx, [eax + edx*8]
    X86_AT(c, 0xc67ddu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c67e0  sub dword ptr [edx + 0xa4ae5], 0x64
    X86_AT(c, 0xc67e0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x64u, 0, 4)); }
    // 0c67e7  add esp, 4
    X86_AT(c, 0xc67e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c67ea  cmp dword ptr [edx + 0xa4ae5], 0
    X86_AT(c, 0xc67eau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u))), 0x0u, 0, 4);
    // 0c67f1  jge 0xc67fd
    X86_AT(c, 0xc67f1u);
    if (x86_cc(c, 13)) { goto L_c67fd; }
    X86_TICK(c, 2);
    // 0c67f3  mov dword ptr [edx + 0xa4ae5], 0
    X86_AT(c, 0xc67f3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u)), 0x0u);
L_c67fd:
    X86_TICK(c, 9);
    // 0c67fd  push 7
    X86_AT(c, 0xc67fdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c67ff  call 0xb607c
    X86_AT(c, 0xc67ffu);
    push32(c, 0xc6804u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc6804u);
    X86_TICK(c, 9);
    // 0c6804  push edi
    X86_AT(c, 0xc6804u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6805  call 0xbe720
    X86_AT(c, 0xc6805u);
    push32(c, 0xc680au); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc680au);
    X86_TICK(c, 9);
    // 0c680a  push 2
    X86_AT(c, 0xc680au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c680c  call 0xbebbc
    X86_AT(c, 0xc680cu);
    push32(c, 0xc6811u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc6811u);
    X86_TICK(c, 11);
    // 0c6811  push 0x52a4
    X86_AT(c, 0xc6811u);
    { uint32_t v = 0x52A4u; push32(c, v); }
    // 0c6816  push 7
    X86_AT(c, 0xc6816u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6818  call 0xba428
    X86_AT(c, 0xc6818u);
    push32(c, 0xc681du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc681du);
    X86_TICK(c, 9);
    // 0c681d  push 7
    X86_AT(c, 0xc681du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c681f  call 0xbbb5c
    X86_AT(c, 0xc681fu);
    push32(c, 0xc6824u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6824u);
    X86_TICK(c, 11);
    // 0c6824  push 0x52ec
    X86_AT(c, 0xc6824u);
    { uint32_t v = 0x52ECu; push32(c, v); }
    // 0c6829  push 7
    X86_AT(c, 0xc6829u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c682b  call 0xba428
    X86_AT(c, 0xc682bu);
    push32(c, 0xc6830u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6830u);
    X86_TICK(c, 9);
    // 0c6830  push 7
    X86_AT(c, 0xc6830u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6832  call 0xbbb5c
    X86_AT(c, 0xc6832u);
    push32(c, 0xc6837u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6837u);
    X86_TICK(c, 9);
    // 0c6837  push 2
    X86_AT(c, 0xc6837u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6839  call 0xbebbc
    X86_AT(c, 0xc6839u);
    push32(c, 0xc683eu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc683eu);
    X86_TICK(c, 7);
    // 0c683e  jmp 0xc6b78
    X86_AT(c, 0xc683eu);
    goto L_c6b78;
L_c6843:
    X86_TICK(c, 26);
    // 0c6843  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc6843u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c6848  shl eax, 4
    X86_AT(c, 0xc6848u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c684b  add eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc684bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))), 0, 4); }
    // 0c6851  mov byte ptr [eax + 0xa9234], 0
    X86_AT(c, 0xc6851u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA9234u)), 0x0u);
    // 0c6858  push 0x5314
    X86_AT(c, 0xc6858u);
    { uint32_t v = 0x5314u; push32(c, v); }
    // 0c685d  push 7
    X86_AT(c, 0xc685du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c685f  call 0xba428
    X86_AT(c, 0xc685fu);
    push32(c, 0xc6864u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6864u);
    X86_TICK(c, 9);
    // 0c6864  push 7
    X86_AT(c, 0xc6864u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6866  call 0xbbb5c
    X86_AT(c, 0xc6866u);
    push32(c, 0xc686bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc686bu);
    X86_TICK(c, 7);
    // 0c686b  call 0xcf7b8
    X86_AT(c, 0xc686bu);
    push32(c, 0xc6870u); x86_call_known(c, 0xcf7b8u, f_000cf7b8); X86_RET(c, 0xc6870u);
    X86_TICK(c, 9);
    // 0c6870  add esp, 0xc
    X86_AT(c, 0xc6870u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c6873  jmp 0xc6d1a
    X86_AT(c, 0xc6873u);
    goto L_c6d1a;
L_c6878:
    X86_TICK(c, 15);
    // 0c6878  movsx edx, word ptr [0xa8a2e]
    X86_AT(c, 0xc6878u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xA8A2Eu)));
    // 0c687f  dec edx
    X86_AT(c, 0xc687fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c6880  cmp edx, 6
    X86_AT(c, 0xc6880u);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0c6883  ja 0xc69d6
    X86_AT(c, 0xc6883u);
    if (x86_cc(c, 7)) { goto L_c69d6; }
    X86_TICK(c, 7);
    // 0c6889  jmp dword ptr cs:[edx*4 + 0xc6891]
    X86_AT(c, 0xc6889u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC6891u)));
      switch (t) {
      case 0xc68adu: goto L_c68ad;
      case 0xc68d8u: goto L_c68d8;
      case 0xc6903u: goto L_c6903;
      case 0xc692eu: goto L_c692e;
      case 0xc6956u: goto L_c6956;
      case 0xc697eu: goto L_c697e;
      case 0xc69a6u: goto L_c69a6;
      default: x86_jump(c, t); return; } }
L_c68ad:
    X86_TICK(c, 11);
    // 0c68ad  push 0x5324
    X86_AT(c, 0xc68adu);
    { uint32_t v = 0x5324u; push32(c, v); }
    // 0c68b2  push 7
    X86_AT(c, 0xc68b2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c68b4  call 0xba428
    X86_AT(c, 0xc68b4u);
    push32(c, 0xc68b9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc68b9u);
    X86_TICK(c, 9);
    // 0c68b9  push 7
    X86_AT(c, 0xc68b9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c68bb  call 0xbbb5c
    X86_AT(c, 0xc68bbu);
    push32(c, 0xc68c0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc68c0u);
    X86_TICK(c, 9);
    // 0c68c0  push 0xe
    X86_AT(c, 0xc68c0u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c68c2  call 0xba51c
    X86_AT(c, 0xc68c2u);
    push32(c, 0xc68c7u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xc68c7u);
    X86_TICK(c, 16);
    // 0c68c7  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xc68c7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0c68cc  push dword ptr [eax*4 + 0xaa908]
    X86_AT(c, 0xc68ccu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAA908u))); push32(c, v); }
    // 0c68d3  jmp 0xc69cc
    X86_AT(c, 0xc68d3u);
    goto L_c69cc;
L_c68d8:
    X86_TICK(c, 11);
    // 0c68d8  push 0x5374
    X86_AT(c, 0xc68d8u);
    { uint32_t v = 0x5374u; push32(c, v); }
    // 0c68dd  push 7
    X86_AT(c, 0xc68ddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c68df  call 0xba428
    X86_AT(c, 0xc68dfu);
    push32(c, 0xc68e4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc68e4u);
    X86_TICK(c, 9);
    // 0c68e4  push 7
    X86_AT(c, 0xc68e4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c68e6  call 0xbbb5c
    X86_AT(c, 0xc68e6u);
    push32(c, 0xc68ebu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc68ebu);
    X86_TICK(c, 9);
    // 0c68eb  push 0xe
    X86_AT(c, 0xc68ebu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c68ed  call 0xba51c
    X86_AT(c, 0xc68edu);
    push32(c, 0xc68f2u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xc68f2u);
    X86_TICK(c, 16);
    // 0c68f2  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xc68f2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0c68f7  push dword ptr [eax*4 + 0xaa8c8]
    X86_AT(c, 0xc68f7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAA8C8u))); push32(c, v); }
    // 0c68fe  jmp 0xc69cc
    X86_AT(c, 0xc68feu);
    goto L_c69cc;
L_c6903:
    X86_TICK(c, 11);
    // 0c6903  push 0x53c4
    X86_AT(c, 0xc6903u);
    { uint32_t v = 0x53C4u; push32(c, v); }
    // 0c6908  push 7
    X86_AT(c, 0xc6908u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c690a  call 0xba428
    X86_AT(c, 0xc690au);
    push32(c, 0xc690fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc690fu);
    X86_TICK(c, 9);
    // 0c690f  push 7
    X86_AT(c, 0xc690fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6911  call 0xbbb5c
    X86_AT(c, 0xc6911u);
    push32(c, 0xc6916u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6916u);
    X86_TICK(c, 9);
    // 0c6916  push 0xe
    X86_AT(c, 0xc6916u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c6918  call 0xba51c
    X86_AT(c, 0xc6918u);
    push32(c, 0xc691du); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xc691du);
    X86_TICK(c, 16);
    // 0c691d  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xc691du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0c6922  push dword ptr [eax*4 + 0xaa8e8]
    X86_AT(c, 0xc6922u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAA8E8u))); push32(c, v); }
    // 0c6929  jmp 0xc69cc
    X86_AT(c, 0xc6929u);
    goto L_c69cc;
L_c692e:
    X86_TICK(c, 11);
    // 0c692e  push 0x5420
    X86_AT(c, 0xc692eu);
    { uint32_t v = 0x5420u; push32(c, v); }
    // 0c6933  push 7
    X86_AT(c, 0xc6933u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6935  call 0xba428
    X86_AT(c, 0xc6935u);
    push32(c, 0xc693au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc693au);
    X86_TICK(c, 9);
    // 0c693a  push 7
    X86_AT(c, 0xc693au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c693c  call 0xbbb5c
    X86_AT(c, 0xc693cu);
    push32(c, 0xc6941u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6941u);
    X86_TICK(c, 9);
    // 0c6941  push 0xe
    X86_AT(c, 0xc6941u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c6943  call 0xba51c
    X86_AT(c, 0xc6943u);
    push32(c, 0xc6948u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xc6948u);
    X86_TICK(c, 16);
    // 0c6948  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xc6948u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0c694d  push dword ptr [eax*4 + 0xaa8a8]
    X86_AT(c, 0xc694du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAA8A8u))); push32(c, v); }
    // 0c6954  jmp 0xc69cc
    X86_AT(c, 0xc6954u);
    goto L_c69cc;
L_c6956:
    X86_TICK(c, 11);
    // 0c6956  push 0x547c
    X86_AT(c, 0xc6956u);
    { uint32_t v = 0x547Cu; push32(c, v); }
    // 0c695b  push 7
    X86_AT(c, 0xc695bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c695d  call 0xba428
    X86_AT(c, 0xc695du);
    push32(c, 0xc6962u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6962u);
    X86_TICK(c, 9);
    // 0c6962  push 7
    X86_AT(c, 0xc6962u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6964  call 0xbbb5c
    X86_AT(c, 0xc6964u);
    push32(c, 0xc6969u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6969u);
    X86_TICK(c, 9);
    // 0c6969  push 0xe
    X86_AT(c, 0xc6969u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c696b  call 0xba51c
    X86_AT(c, 0xc696bu);
    push32(c, 0xc6970u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xc6970u);
    X86_TICK(c, 16);
    // 0c6970  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xc6970u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0c6975  push dword ptr [eax*4 + 0xaa928]
    X86_AT(c, 0xc6975u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAA928u))); push32(c, v); }
    // 0c697c  jmp 0xc69cc
    X86_AT(c, 0xc697cu);
    goto L_c69cc;
L_c697e:
    X86_TICK(c, 11);
    // 0c697e  push 0x54b4
    X86_AT(c, 0xc697eu);
    { uint32_t v = 0x54B4u; push32(c, v); }
    // 0c6983  push 7
    X86_AT(c, 0xc6983u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6985  call 0xba428
    X86_AT(c, 0xc6985u);
    push32(c, 0xc698au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc698au);
    X86_TICK(c, 9);
    // 0c698a  push 7
    X86_AT(c, 0xc698au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c698c  call 0xbbb5c
    X86_AT(c, 0xc698cu);
    push32(c, 0xc6991u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6991u);
    X86_TICK(c, 9);
    // 0c6991  push 0xe
    X86_AT(c, 0xc6991u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c6993  call 0xba51c
    X86_AT(c, 0xc6993u);
    push32(c, 0xc6998u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xc6998u);
    X86_TICK(c, 16);
    // 0c6998  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xc6998u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0c699d  push dword ptr [eax*4 + 0xaa948]
    X86_AT(c, 0xc699du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAA948u))); push32(c, v); }
    // 0c69a4  jmp 0xc69cc
    X86_AT(c, 0xc69a4u);
    goto L_c69cc;
L_c69a6:
    X86_TICK(c, 11);
    // 0c69a6  push 0x54ec
    X86_AT(c, 0xc69a6u);
    { uint32_t v = 0x54ECu; push32(c, v); }
    // 0c69ab  push 7
    X86_AT(c, 0xc69abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c69ad  call 0xba428
    X86_AT(c, 0xc69adu);
    push32(c, 0xc69b2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc69b2u);
    X86_TICK(c, 9);
    // 0c69b2  push 7
    X86_AT(c, 0xc69b2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c69b4  call 0xbbb5c
    X86_AT(c, 0xc69b4u);
    push32(c, 0xc69b9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc69b9u);
    X86_TICK(c, 9);
    // 0c69b9  push 0xe
    X86_AT(c, 0xc69b9u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c69bb  call 0xba51c
    X86_AT(c, 0xc69bbu);
    push32(c, 0xc69c0u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xc69c0u);
    X86_TICK(c, 9);
    // 0c69c0  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xc69c0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0c69c5  push dword ptr [eax*4 + 0xaa968]
    X86_AT(c, 0xc69c5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAA968u))); push32(c, v); }
L_c69cc:
    X86_TICK(c, 9);
    // 0c69cc  push 7
    X86_AT(c, 0xc69ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c69ce  call 0xba428
    X86_AT(c, 0xc69ceu);
    push32(c, 0xc69d3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc69d3u);
    X86_TICK(c, 2);
    // 0c69d3  add esp, 0x18
    X86_AT(c, 0xc69d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c69d6:
    X86_TICK(c, 9);
    // 0c69d6  push 7
    X86_AT(c, 0xc69d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c69d8  call 0xbb6b0
    X86_AT(c, 0xc69d8u);
    push32(c, 0xc69ddu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc69ddu);
    X86_TICK(c, 9);
    // 0c69dd  push 7
    X86_AT(c, 0xc69ddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c69df  call 0xbbb5c
    X86_AT(c, 0xc69dfu);
    push32(c, 0xc69e4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc69e4u);
L_c69e4:
    X86_TICK(c, 9);
    // 0c69e4  add esp, 8
    X86_AT(c, 0xc69e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c69e7  jmp 0xc6d1a
    X86_AT(c, 0xc69e7u);
    goto L_c6d1a;
L_c69ec:
    X86_TICK(c, 12);
    // 0c69ec  push dword ptr [0xa8a24]
    X86_AT(c, 0xc69ecu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA8A24u))); push32(c, v); }
    // 0c69f2  call 0xc5ff4
    X86_AT(c, 0xc69f2u);
    push32(c, 0xc69f7u); x86_call_known(c, 0xc5ff4u, f_000c5ff4); X86_RET(c, 0xc69f7u);
    X86_TICK(c, 11);
    // 0c69f7  push 0x5524
    X86_AT(c, 0xc69f7u);
    { uint32_t v = 0x5524u; push32(c, v); }
    // 0c69fc  push 7
    X86_AT(c, 0xc69fcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c69fe  call 0xba428
    X86_AT(c, 0xc69feu);
    push32(c, 0xc6a03u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6a03u);
    X86_TICK(c, 9);
    // 0c6a03  push 7
    X86_AT(c, 0xc6a03u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6a05  call 0xbbb5c
    X86_AT(c, 0xc6a05u);
    push32(c, 0xc6a0au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6a0au);
    X86_TICK(c, 11);
    // 0c6a0a  push 0x556c
    X86_AT(c, 0xc6a0au);
    { uint32_t v = 0x556Cu; push32(c, v); }
    // 0c6a0f  push 7
    X86_AT(c, 0xc6a0fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6a11  call 0xba428
    X86_AT(c, 0xc6a11u);
    push32(c, 0xc6a16u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6a16u);
    X86_TICK(c, 9);
    // 0c6a16  push 7
    X86_AT(c, 0xc6a16u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6a18  call 0xbbb5c
    X86_AT(c, 0xc6a18u);
    push32(c, 0xc6a1du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6a1du);
    X86_TICK(c, 11);
    // 0c6a1d  push 0x55b8
    X86_AT(c, 0xc6a1du);
    { uint32_t v = 0x55B8u; push32(c, v); }
    // 0c6a22  push 7
    X86_AT(c, 0xc6a22u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6a24  call 0xba428
    X86_AT(c, 0xc6a24u);
    push32(c, 0xc6a29u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6a29u);
    X86_TICK(c, 9);
    // 0c6a29  push 7
    X86_AT(c, 0xc6a29u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6a2b  call 0xb6e88
    X86_AT(c, 0xc6a2bu);
    push32(c, 0xc6a30u); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xc6a30u);
    X86_TICK(c, 9);
    // 0c6a30  add esp, 0x28
    X86_AT(c, 0xc6a30u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c6a33  cmp al, 0x59
    X86_AT(c, 0xc6a33u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0c6a35  jne 0xc6aa4
    X86_AT(c, 0xc6a35u);
    if (x86_cc(c, 5)) { goto L_c6aa4; }
    X86_TICK(c, 9);
    // 0c6a37  push 1
    X86_AT(c, 0xc6a37u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c6a39  call 0xb84e0
    X86_AT(c, 0xc6a39u);
    push32(c, 0xc6a3eu); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc6a3eu);
    X86_TICK(c, 9);
    // 0c6a3e  push 7
    X86_AT(c, 0xc6a3eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6a40  call 0xbbb5c
    X86_AT(c, 0xc6a40u);
    push32(c, 0xc6a45u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6a45u);
    X86_TICK(c, 11);
    // 0c6a45  push 0x5600
    X86_AT(c, 0xc6a45u);
    { uint32_t v = 0x5600u; push32(c, v); }
    // 0c6a4a  push 7
    X86_AT(c, 0xc6a4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6a4c  call 0xba428
    X86_AT(c, 0xc6a4cu);
    push32(c, 0xc6a51u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6a51u);
    X86_TICK(c, 9);
    // 0c6a51  push 7
    X86_AT(c, 0xc6a51u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6a53  call 0xbbb5c
    X86_AT(c, 0xc6a53u);
    push32(c, 0xc6a58u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6a58u);
    X86_TICK(c, 11);
    // 0c6a58  push 0
    X86_AT(c, 0xc6a58u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c6a5a  push 7
    X86_AT(c, 0xc6a5au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6a5c  call 0xb6f28
    X86_AT(c, 0xc6a5cu);
    push32(c, 0xc6a61u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xc6a61u);
    X86_TICK(c, 12);
    // 0c6a61  xchg edi, eax
    X86_AT(c, 0xc6a61u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c6a62  add esp, 0x1c
    X86_AT(c, 0xc6a62u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c6a65  cmp edi, 0xffffffff
    X86_AT(c, 0xc6a65u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c6a68  jne 0xc6a83
    X86_AT(c, 0xc6a68u);
    if (x86_cc(c, 5)) { goto L_c6a83; }
L_c6a6a:
    X86_TICK(c, 9);
    // 0c6a6a  push 2
    X86_AT(c, 0xc6a6au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6a6c  call 0xb84e0
    X86_AT(c, 0xc6a6cu);
    push32(c, 0xc6a71u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc6a71u);
    X86_TICK(c, 2);
    // 0c6a71  mov dword ptr [0xa4a56], 1
    X86_AT(c, 0xc6a71u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x1u);
L_c6a7b:
    X86_TICK(c, 9);
    // 0c6a7b  add esp, 4
    X86_AT(c, 0xc6a7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6a7e  jmp 0xc6d1a
    X86_AT(c, 0xc6a7eu);
    goto L_c6d1a;
L_c6a83:
    X86_TICK(c, 11);
    // 0c6a83  push 0x1e
    X86_AT(c, 0xc6a83u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0c6a85  push edi
    X86_AT(c, 0xc6a85u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6a86  call 0xc9b10
    X86_AT(c, 0xc6a86u);
    push32(c, 0xc6a8bu); x86_call_known(c, 0xc9b10u, f_000c9b10); X86_RET(c, 0xc6a8bu);
    X86_TICK(c, 20);
    // 0c6a8b  lea eax, [edi + edi*2]
    X86_AT(c, 0xc6a8bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c6a8e  lea edx, [eax*8]
    X86_AT(c, 0xc6a8eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c6a95  lea edx, [eax + edx*8]
    X86_AT(c, 0xc6a95u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c6a98  add esp, 8
    X86_AT(c, 0xc6a98u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c6a9b  cmp byte ptr [edx + 0xa4abd], 0x44
    X86_AT(c, 0xc6a9bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x44u, 0, 1);
    // 0c6aa2  jne 0xc6ab3
    X86_AT(c, 0xc6aa2u);
    if (x86_cc(c, 5)) { goto L_c6ab3; }
L_c6aa4:
    X86_TICK(c, 9);
    // 0c6aa4  mov dword ptr [0xa4a56], 1
    X86_AT(c, 0xc6aa4u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x1u);
    // 0c6aae  jmp 0xc6d1a
    X86_AT(c, 0xc6aaeu);
    goto L_c6d1a;
L_c6ab3:
    X86_TICK(c, 12);
    // 0c6ab3  movzx edx, bl
    X86_AT(c, 0xc6ab3u);
    c.r[2] = g8(c, 3);
    // 0c6ab6  sub edx, 0x11
    X86_AT(c, 0xc6ab6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x11u, 0, 4); }
    // 0c6ab9  cmp edx, 3
    X86_AT(c, 0xc6ab9u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c6abc  ja 0xc6b2c
    X86_AT(c, 0xc6abcu);
    if (x86_cc(c, 7)) { goto L_c6b2c; }
    X86_TICK(c, 7);
    // 0c6abe  jmp dword ptr cs:[edx*4 + 0xc6ac6]
    X86_AT(c, 0xc6abeu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC6AC6u)));
      switch (t) {
      case 0xc6ad6u: goto L_c6ad6;
      case 0xc6aecu: goto L_c6aec;
      case 0xc6b02u: goto L_c6b02;
      case 0xc6b18u: goto L_c6b18;
      default: x86_jump(c, t); return; } }
L_c6ad6:
    X86_TICK(c, 15);
    // 0c6ad6  lea eax, [edi + edi*2]
    X86_AT(c, 0xc6ad6u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c6ad9  lea edx, [eax*8]
    X86_AT(c, 0xc6ad9u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c6ae0  lea edx, [eax + edx*8]
    X86_AT(c, 0xc6ae0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c6ae3  mov byte ptr [edx + 0xa4aad], 1
    X86_AT(c, 0xc6ae3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AADu)), 0x1u);
    // 0c6aea  jmp 0xc6b2c
    X86_AT(c, 0xc6aeau);
    goto L_c6b2c;
L_c6aec:
    X86_TICK(c, 15);
    // 0c6aec  lea eax, [edi + edi*2]
    X86_AT(c, 0xc6aecu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c6aef  lea edx, [eax*8]
    X86_AT(c, 0xc6aefu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c6af6  lea edx, [eax + edx*8]
    X86_AT(c, 0xc6af6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c6af9  mov byte ptr [edx + 0xa4aaf], 1
    X86_AT(c, 0xc6af9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AAFu)), 0x1u);
    // 0c6b00  jmp 0xc6b2c
    X86_AT(c, 0xc6b00u);
    goto L_c6b2c;
L_c6b02:
    X86_TICK(c, 15);
    // 0c6b02  lea eax, [edi + edi*2]
    X86_AT(c, 0xc6b02u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c6b05  lea edx, [eax*8]
    X86_AT(c, 0xc6b05u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c6b0c  lea edx, [eax + edx*8]
    X86_AT(c, 0xc6b0cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c6b0f  mov byte ptr [edx + 0xa4aae], 1
    X86_AT(c, 0xc6b0fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AAEu)), 0x1u);
    // 0c6b16  jmp 0xc6b2c
    X86_AT(c, 0xc6b16u);
    goto L_c6b2c;
L_c6b18:
    X86_TICK(c, 8);
    // 0c6b18  lea eax, [edi + edi*2]
    X86_AT(c, 0xc6b18u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c6b1b  lea edx, [eax*8]
    X86_AT(c, 0xc6b1bu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c6b22  lea edx, [eax + edx*8]
    X86_AT(c, 0xc6b22u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c6b25  mov byte ptr [edx + 0xa4ab0], 1
    X86_AT(c, 0xc6b25u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB0u)), 0x1u);
L_c6b2c:
    X86_TICK(c, 9);
    // 0c6b2c  push 5
    X86_AT(c, 0xc6b2cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c6b2e  call 0xb607c
    X86_AT(c, 0xc6b2eu);
    push32(c, 0xc6b33u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc6b33u);
    X86_TICK(c, 9);
    // 0c6b33  push 2
    X86_AT(c, 0xc6b33u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6b35  call 0xbebbc
    X86_AT(c, 0xc6b35u);
    push32(c, 0xc6b3au); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc6b3au);
    X86_TICK(c, 11);
    // 0c6b3a  push 0x5634
    X86_AT(c, 0xc6b3au);
    { uint32_t v = 0x5634u; push32(c, v); }
    // 0c6b3f  push 7
    X86_AT(c, 0xc6b3fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6b41  call 0xba428
    X86_AT(c, 0xc6b41u);
    push32(c, 0xc6b46u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6b46u);
    X86_TICK(c, 9);
    // 0c6b46  push 7
    X86_AT(c, 0xc6b46u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6b48  call 0xbbb5c
    X86_AT(c, 0xc6b48u);
    push32(c, 0xc6b4du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6b4du);
    X86_TICK(c, 11);
    // 0c6b4d  push 0x567c
    X86_AT(c, 0xc6b4du);
    { uint32_t v = 0x567Cu; push32(c, v); }
    // 0c6b52  push 7
    X86_AT(c, 0xc6b52u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6b54  call 0xba428
    X86_AT(c, 0xc6b54u);
    push32(c, 0xc6b59u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6b59u);
    X86_TICK(c, 9);
    // 0c6b59  push 7
    X86_AT(c, 0xc6b59u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6b5b  call 0xbbb5c
    X86_AT(c, 0xc6b5bu);
    push32(c, 0xc6b60u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6b60u);
    X86_TICK(c, 9);
    // 0c6b60  push 2
    X86_AT(c, 0xc6b60u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6b62  call 0xbebbc
    X86_AT(c, 0xc6b62u);
    push32(c, 0xc6b67u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc6b67u);
    X86_TICK(c, 11);
    // 0c6b67  mov dword ptr [0xa4a56], 1
    X86_AT(c, 0xc6b67u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x1u);
    // 0c6b71  push 2
    X86_AT(c, 0xc6b71u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6b73  call 0xb84e0
    X86_AT(c, 0xc6b73u);
    push32(c, 0xc6b78u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc6b78u);
L_c6b78:
    X86_TICK(c, 9);
    // 0c6b78  add esp, 0x28
    X86_AT(c, 0xc6b78u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c6b7b  jmp 0xc6d1a
    X86_AT(c, 0xc6b7bu);
    goto L_c6d1a;
L_c6b80:
    X86_TICK(c, 32);
    // 0c6b80  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xc6b80u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0c6b85  mov dword ptr [0xa4a5a], eax
    X86_AT(c, 0xc6b85u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A5Au)), c.r[0]);
    // 0c6b8a  mov dword ptr [0xa4a56], 4
    X86_AT(c, 0xc6b8au);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x4u);
    // 0c6b94  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc6b94u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c6b99  shl eax, 4
    X86_AT(c, 0xc6b99u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c6b9c  add eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc6b9cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))), 0, 4); }
    // 0c6ba2  mov byte ptr [eax + 0xa9234], 0
    X86_AT(c, 0xc6ba2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA9234u)), 0x0u);
    // 0c6ba9  push 1
    X86_AT(c, 0xc6ba9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c6bab  call 0xb84e0
    X86_AT(c, 0xc6babu);
    push32(c, 0xc6bb0u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc6bb0u);
    X86_TICK(c, 12);
    // 0c6bb0  push dword ptr [0xa8a20]
    X86_AT(c, 0xc6bb0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA8A20u))); push32(c, v); }
    // 0c6bb6  call 0xc5ff4
    X86_AT(c, 0xc6bb6u);
    push32(c, 0xc6bbbu); x86_call_known(c, 0xc5ff4u, f_000c5ff4); X86_RET(c, 0xc6bbbu);
    X86_TICK(c, 11);
    // 0c6bbb  push 0x56c4
    X86_AT(c, 0xc6bbbu);
    { uint32_t v = 0x56C4u; push32(c, v); }
    // 0c6bc0  push 7
    X86_AT(c, 0xc6bc0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6bc2  call 0xba428
    X86_AT(c, 0xc6bc2u);
    push32(c, 0xc6bc7u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6bc7u);
    X86_TICK(c, 9);
    // 0c6bc7  push 7
    X86_AT(c, 0xc6bc7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6bc9  call 0xbbb5c
    X86_AT(c, 0xc6bc9u);
    push32(c, 0xc6bceu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6bceu);
    X86_TICK(c, 9);
    // 0c6bce  push 0x5704
    X86_AT(c, 0xc6bceu);
    { uint32_t v = 0x5704u; push32(c, v); }
    // 0c6bd3  call 0xbc50c
    X86_AT(c, 0xc6bd3u);
    push32(c, 0xc6bd8u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc6bd8u);
    X86_TICK(c, 2);
    // 0c6bd8  add esp, 0x18
    X86_AT(c, 0xc6bd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c6bdb:
    X86_TICK(c, 9);
    // 0c6bdb  push 7
    X86_AT(c, 0xc6bdbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6bdd  call 0xb9930
    X86_AT(c, 0xc6bddu);
    push32(c, 0xc6be2u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc6be2u);
    X86_TICK(c, 9);
    // 0c6be2  add esp, 4
    X86_AT(c, 0xc6be2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6be5  and al, al
    X86_AT(c, 0xc6be5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c6be7  je 0xc6bdb
    X86_AT(c, 0xc6be7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc6bdbu); goto L_c6bdb; }
    X86_TICK(c, 9);
    // 0c6be9  push 7
    X86_AT(c, 0xc6be9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6beb  call 0xbb6b0
    X86_AT(c, 0xc6bebu);
    push32(c, 0xc6bf0u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc6bf0u);
    X86_TICK(c, 11);
    // 0c6bf0  push 0x5750
    X86_AT(c, 0xc6bf0u);
    { uint32_t v = 0x5750u; push32(c, v); }
    // 0c6bf5  push 7
    X86_AT(c, 0xc6bf5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6bf7  call 0xba428
    X86_AT(c, 0xc6bf7u);
    push32(c, 0xc6bfcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6bfcu);
    X86_TICK(c, 9);
    // 0c6bfc  push 7
    X86_AT(c, 0xc6bfcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6bfe  call 0xbbb5c
    X86_AT(c, 0xc6bfeu);
    push32(c, 0xc6c03u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6c03u);
    X86_TICK(c, 2);
    // 0c6c03  add esp, 0x10
    X86_AT(c, 0xc6c03u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c6c06:
    X86_TICK(c, 9);
    // 0c6c06  push 7
    X86_AT(c, 0xc6c06u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6c08  call 0xb9930
    X86_AT(c, 0xc6c08u);
    push32(c, 0xc6c0du); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc6c0du);
    X86_TICK(c, 9);
    // 0c6c0d  add esp, 4
    X86_AT(c, 0xc6c0du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6c10  and al, al
    X86_AT(c, 0xc6c10u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c6c12  je 0xc6c06
    X86_AT(c, 0xc6c12u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc6c06u); goto L_c6c06; }
    X86_TICK(c, 11);
    // 0c6c14  push 0x57a8
    X86_AT(c, 0xc6c14u);
    { uint32_t v = 0x57A8u; push32(c, v); }
    // 0c6c19  push 7
    X86_AT(c, 0xc6c19u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6c1b  call 0xba428
    X86_AT(c, 0xc6c1bu);
    push32(c, 0xc6c20u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6c20u);
    X86_TICK(c, 9);
    // 0c6c20  push 7
    X86_AT(c, 0xc6c20u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6c22  call 0xbbb5c
    X86_AT(c, 0xc6c22u);
    push32(c, 0xc6c27u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6c27u);
    X86_TICK(c, 2);
    // 0c6c27  add esp, 0xc
    X86_AT(c, 0xc6c27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c6c2a:
    X86_TICK(c, 9);
    // 0c6c2a  push 7
    X86_AT(c, 0xc6c2au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6c2c  call 0xb9930
    X86_AT(c, 0xc6c2cu);
    push32(c, 0xc6c31u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc6c31u);
    X86_TICK(c, 9);
    // 0c6c31  add esp, 4
    X86_AT(c, 0xc6c31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6c34  and al, al
    X86_AT(c, 0xc6c34u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c6c36  je 0xc6c2a
    X86_AT(c, 0xc6c36u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc6c2au); goto L_c6c2a; }
    X86_TICK(c, 11);
    // 0c6c38  push 0x57e4
    X86_AT(c, 0xc6c38u);
    { uint32_t v = 0x57E4u; push32(c, v); }
    // 0c6c3d  push 7
    X86_AT(c, 0xc6c3du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6c3f  call 0xba428
    X86_AT(c, 0xc6c3fu);
    push32(c, 0xc6c44u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6c44u);
    X86_TICK(c, 9);
    // 0c6c44  push 7
    X86_AT(c, 0xc6c44u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6c46  call 0xbbb5c
    X86_AT(c, 0xc6c46u);
    push32(c, 0xc6c4bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6c4bu);
    X86_TICK(c, 2);
    // 0c6c4b  add esp, 0xc
    X86_AT(c, 0xc6c4bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c6c4e:
    X86_TICK(c, 9);
    // 0c6c4e  push 7
    X86_AT(c, 0xc6c4eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6c50  call 0xb9930
    X86_AT(c, 0xc6c50u);
    push32(c, 0xc6c55u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc6c55u);
    X86_TICK(c, 9);
    // 0c6c55  add esp, 4
    X86_AT(c, 0xc6c55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6c58  and al, al
    X86_AT(c, 0xc6c58u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c6c5a  je 0xc6c4e
    X86_AT(c, 0xc6c5au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc6c4eu); goto L_c6c4e; }
    X86_TICK(c, 11);
    // 0c6c5c  push 0x5818
    X86_AT(c, 0xc6c5cu);
    { uint32_t v = 0x5818u; push32(c, v); }
    // 0c6c61  push 7
    X86_AT(c, 0xc6c61u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6c63  call 0xba428
    X86_AT(c, 0xc6c63u);
    push32(c, 0xc6c68u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6c68u);
    X86_TICK(c, 9);
    // 0c6c68  push 7
    X86_AT(c, 0xc6c68u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6c6a  call 0xbbb5c
    X86_AT(c, 0xc6c6au);
    push32(c, 0xc6c6fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6c6fu);
    X86_TICK(c, 2);
    // 0c6c6f  add esp, 0xc
    X86_AT(c, 0xc6c6fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c6c72:
    X86_TICK(c, 9);
    // 0c6c72  push 7
    X86_AT(c, 0xc6c72u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6c74  call 0xb9930
    X86_AT(c, 0xc6c74u);
    push32(c, 0xc6c79u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc6c79u);
    X86_TICK(c, 9);
    // 0c6c79  add esp, 4
    X86_AT(c, 0xc6c79u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6c7c  and al, al
    X86_AT(c, 0xc6c7cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c6c7e  je 0xc6c72
    X86_AT(c, 0xc6c7eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc6c72u); goto L_c6c72; }
    X86_TICK(c, 11);
    // 0c6c80  push 0x584c
    X86_AT(c, 0xc6c80u);
    { uint32_t v = 0x584Cu; push32(c, v); }
    // 0c6c85  push 7
    X86_AT(c, 0xc6c85u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6c87  call 0xba428
    X86_AT(c, 0xc6c87u);
    push32(c, 0xc6c8cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6c8cu);
    X86_TICK(c, 9);
    // 0c6c8c  push 7
    X86_AT(c, 0xc6c8cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6c8e  call 0xbbb5c
    X86_AT(c, 0xc6c8eu);
    push32(c, 0xc6c93u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6c93u);
    X86_TICK(c, 2);
    // 0c6c93  add esp, 0xc
    X86_AT(c, 0xc6c93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c6c96:
    X86_TICK(c, 9);
    // 0c6c96  push 7
    X86_AT(c, 0xc6c96u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6c98  call 0xb9930
    X86_AT(c, 0xc6c98u);
    push32(c, 0xc6c9du); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc6c9du);
    X86_TICK(c, 9);
    // 0c6c9d  add esp, 4
    X86_AT(c, 0xc6c9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6ca0  and al, al
    X86_AT(c, 0xc6ca0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c6ca2  je 0xc6c96
    X86_AT(c, 0xc6ca2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc6c96u); goto L_c6c96; }
    X86_TICK(c, 11);
    // 0c6ca4  push 0x5884
    X86_AT(c, 0xc6ca4u);
    { uint32_t v = 0x5884u; push32(c, v); }
    // 0c6ca9  push 7
    X86_AT(c, 0xc6ca9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6cab  call 0xba428
    X86_AT(c, 0xc6cabu);
    push32(c, 0xc6cb0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6cb0u);
    X86_TICK(c, 9);
    // 0c6cb0  push 7
    X86_AT(c, 0xc6cb0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6cb2  call 0xbbb5c
    X86_AT(c, 0xc6cb2u);
    push32(c, 0xc6cb7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6cb7u);
    X86_TICK(c, 2);
    // 0c6cb7  add esp, 0xc
    X86_AT(c, 0xc6cb7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c6cba:
    X86_TICK(c, 9);
    // 0c6cba  push 7
    X86_AT(c, 0xc6cbau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6cbc  call 0xb9930
    X86_AT(c, 0xc6cbcu);
    push32(c, 0xc6cc1u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc6cc1u);
    X86_TICK(c, 9);
    // 0c6cc1  add esp, 4
    X86_AT(c, 0xc6cc1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6cc4  and al, al
    X86_AT(c, 0xc6cc4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c6cc6  je 0xc6cba
    X86_AT(c, 0xc6cc6u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc6cbau); goto L_c6cba; }
    X86_TICK(c, 11);
    // 0c6cc8  push 0x58e8
    X86_AT(c, 0xc6cc8u);
    { uint32_t v = 0x58E8u; push32(c, v); }
    // 0c6ccd  push 7
    X86_AT(c, 0xc6ccdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6ccf  call 0xba428
    X86_AT(c, 0xc6ccfu);
    push32(c, 0xc6cd4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6cd4u);
    X86_TICK(c, 9);
    // 0c6cd4  push 7
    X86_AT(c, 0xc6cd4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6cd6  call 0xbbb5c
    X86_AT(c, 0xc6cd6u);
    push32(c, 0xc6cdbu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6cdbu);
    X86_TICK(c, 2);
    // 0c6cdb  add esp, 0xc
    X86_AT(c, 0xc6cdbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c6cde:
    X86_TICK(c, 9);
    // 0c6cde  push 7
    X86_AT(c, 0xc6cdeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6ce0  call 0xb9930
    X86_AT(c, 0xc6ce0u);
    push32(c, 0xc6ce5u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc6ce5u);
    X86_TICK(c, 9);
    // 0c6ce5  add esp, 4
    X86_AT(c, 0xc6ce5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6ce8  and al, al
    X86_AT(c, 0xc6ce8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c6cea  je 0xc6cde
    X86_AT(c, 0xc6ceau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc6cdeu); goto L_c6cde; }
    X86_TICK(c, 11);
    // 0c6cec  push 0x5938
    X86_AT(c, 0xc6cecu);
    { uint32_t v = 0x5938u; push32(c, v); }
    // 0c6cf1  push 7
    X86_AT(c, 0xc6cf1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6cf3  call 0xba428
    X86_AT(c, 0xc6cf3u);
    push32(c, 0xc6cf8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6cf8u);
    X86_TICK(c, 9);
    // 0c6cf8  push 7
    X86_AT(c, 0xc6cf8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6cfa  call 0xbbb5c
    X86_AT(c, 0xc6cfau);
    push32(c, 0xc6cffu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6cffu);
    X86_TICK(c, 9);
    // 0c6cff  push 2
    X86_AT(c, 0xc6cffu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6d01  call 0xbbb5c
    X86_AT(c, 0xc6d01u);
    push32(c, 0xc6d06u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc6d06u);
    X86_TICK(c, 9);
    // 0c6d06  push 7
    X86_AT(c, 0xc6d06u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6d08  call 0xbb6b0
    X86_AT(c, 0xc6d08u);
    push32(c, 0xc6d0du); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc6d0du);
    X86_TICK(c, 4);
    // 0c6d0d  mov dword ptr [0xa4a56], 1
    X86_AT(c, 0xc6d0du);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x1u);
    // 0c6d17  add esp, 0x14
    X86_AT(c, 0xc6d17u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c6d1a:
    X86_TICK(c, 30);
    // 0c6d1a  mov eax, 0xffffffff
    X86_AT(c, 0xc6d1au);
    c.r[0] = 0xFFFFFFFFu;
    // 0c6d1f  pop edi
    X86_AT(c, 0xc6d1fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6d20  pop esi
    X86_AT(c, 0xc6d20u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6d21  pop ebx
    X86_AT(c, 0xc6d21u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c6d22  leave 
    X86_AT(c, 0xc6d22u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6d23  ret 
    X86_AT(c, 0xc6d23u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6388u, "ran off the end of a function");
}
void f_000c66fe(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c66fe  push 7
    X86_AT(c, 0xc66feu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6700  call 0xba428
    X86_AT(c, 0xc6700u);
    push32(c, 0xc6705u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc6705u);
    X86_TICK(c, 9);
    // 0c6705  push 7
    X86_AT(c, 0xc6705u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c6707  call 0xbbb5c
    X86_AT(c, 0xc6707u);
    push32(c, 0xc670cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc670cu);
    X86_TICK(c, 9);
    // 0c670c  push edi
    X86_AT(c, 0xc670cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c670d  call 0xbe720
    X86_AT(c, 0xc670du);
    push32(c, 0xc6712u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc6712u);
    X86_TICK(c, 9);
    // 0c6712  push 2
    X86_AT(c, 0xc6712u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6714  call 0xb84e0
    X86_AT(c, 0xc6714u);
    push32(c, 0xc6719u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc6719u);
    X86_TICK(c, 11);
    // 0c6719  mov dword ptr [0xa4a56], 1
    X86_AT(c, 0xc6719u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x1u);
    // 0c6723  add esp, 0x18
    X86_AT(c, 0xc6723u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c6726  jmp 0xc6d1a
    X86_AT(c, 0xc6726u);
    goto L_c6d1a;
L_c6d1a:
    X86_TICK(c, 30);
    // 0c6d1a  mov eax, 0xffffffff
    X86_AT(c, 0xc6d1au);
    c.r[0] = 0xFFFFFFFFu;
    // 0c6d1f  pop edi
    X86_AT(c, 0xc6d1fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6d20  pop esi
    X86_AT(c, 0xc6d20u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6d21  pop ebx
    X86_AT(c, 0xc6d21u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c6d22  leave 
    X86_AT(c, 0xc6d22u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6d23  ret 
    X86_AT(c, 0xc6d23u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc66feu, "ran off the end of a function");
}
void f_000c69cc(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c69cc  push 7
    X86_AT(c, 0xc69ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c69ce  call 0xba428
    X86_AT(c, 0xc69ceu);
    push32(c, 0xc69d3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc69d3u);
    X86_TICK(c, 11);
    // 0c69d3  add esp, 0x18
    X86_AT(c, 0xc69d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c69d6  push 7
    X86_AT(c, 0xc69d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c69d8  call 0xbb6b0
    X86_AT(c, 0xc69d8u);
    push32(c, 0xc69ddu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc69ddu);
    X86_TICK(c, 9);
    // 0c69dd  push 7
    X86_AT(c, 0xc69ddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c69df  call 0xbbb5c
    X86_AT(c, 0xc69dfu);
    push32(c, 0xc69e4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc69e4u);
    X86_TICK(c, 9);
    // 0c69e4  add esp, 8
    X86_AT(c, 0xc69e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c69e7  jmp 0xc6d1a
    X86_AT(c, 0xc69e7u);
    goto L_c6d1a;
L_c6d1a:
    X86_TICK(c, 30);
    // 0c6d1a  mov eax, 0xffffffff
    X86_AT(c, 0xc6d1au);
    c.r[0] = 0xFFFFFFFFu;
    // 0c6d1f  pop edi
    X86_AT(c, 0xc6d1fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6d20  pop esi
    X86_AT(c, 0xc6d20u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6d21  pop ebx
    X86_AT(c, 0xc6d21u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c6d22  leave 
    X86_AT(c, 0xc6d22u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6d23  ret 
    X86_AT(c, 0xc6d23u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc69ccu, "ran off the end of a function");
}
void f_000c6a7b(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c6a7b  add esp, 4
    X86_AT(c, 0xc6a7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6a7e  jmp 0xc6d1a
    X86_AT(c, 0xc6a7eu);
    goto L_c6d1a;
L_c6d1a:
    X86_TICK(c, 30);
    // 0c6d1a  mov eax, 0xffffffff
    X86_AT(c, 0xc6d1au);
    c.r[0] = 0xFFFFFFFFu;
    // 0c6d1f  pop edi
    X86_AT(c, 0xc6d1fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6d20  pop esi
    X86_AT(c, 0xc6d20u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6d21  pop ebx
    X86_AT(c, 0xc6d21u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c6d22  leave 
    X86_AT(c, 0xc6d22u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6d23  ret 
    X86_AT(c, 0xc6d23u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6a7bu, "ran off the end of a function");
}
void f_000c6d1a(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0c6d1a  mov eax, 0xffffffff
    X86_AT(c, 0xc6d1au);
    c.r[0] = 0xFFFFFFFFu;
    // 0c6d1f  pop edi
    X86_AT(c, 0xc6d1fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6d20  pop esi
    X86_AT(c, 0xc6d20u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6d21  pop ebx
    X86_AT(c, 0xc6d21u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c6d22  leave 
    X86_AT(c, 0xc6d22u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6d23  ret 
    X86_AT(c, 0xc6d23u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6d1au, "ran off the end of a function");
}
void f_000c6d24(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0c6d24  push ebp
    X86_AT(c, 0xc6d24u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6d25  mov ebp, esp
    X86_AT(c, 0xc6d25u);
    c.r[5] = c.r[4];
    // 0c6d27  sub esp, 0x24
    X86_AT(c, 0xc6d27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 0c6d2a  push ebx
    X86_AT(c, 0xc6d2au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c6d2b  push esi
    X86_AT(c, 0xc6d2bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c6d2c  push edi
    X86_AT(c, 0xc6d2cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6d2d  mov dword ptr [ebp - 0x24], 0xffffffff
    X86_AT(c, 0xc6d2du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0xFFFFFFFFu);
    // 0c6d34  sub ebx, ebx
    X86_AT(c, 0xc6d34u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_c6d36:
    X86_TICK(c, 7);
    // 0c6d36  cmp ebx, 4
    X86_AT(c, 0xc6d36u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0c6d39  jge 0xc6e60
    X86_AT(c, 0xc6d39u);
    if (x86_cc(c, 13)) { goto L_c6e60; }
    X86_TICK(c, 2);
    // 0c6d3f  sub esi, esi
    X86_AT(c, 0xc6d3fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c6d41:
    X86_TICK(c, 7);
    // 0c6d41  cmp esi, 5
    X86_AT(c, 0xc6d41u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0c6d44  jge 0xc6e5a
    X86_AT(c, 0xc6d44u);
    if (x86_cc(c, 13)) { goto L_c6e5a; }
    X86_TICK(c, 22);
    // 0c6d4a  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xc6d4au);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0c6d4d  lea edx, [esi + eax*1]
    X86_AT(c, 0xc6d4du);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0c6d50  mov al, byte ptr [edx + 0xa9334]
    X86_AT(c, 0xc6d50u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA9334u))));
    // 0c6d56  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xc6d56u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0c6d59  movzx edx, al
    X86_AT(c, 0xc6d59u);
    c.r[2] = g8(c, 0);
    // 0c6d5c  sub edx, 4
    X86_AT(c, 0xc6d5cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x4u, 0, 4); }
    // 0c6d5f  cmp edx, 0xc
    X86_AT(c, 0xc6d5fu);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0c6d62  ja 0xc6e54
    X86_AT(c, 0xc6d62u);
    if (x86_cc(c, 7)) { goto L_c6e54; }
    X86_TICK(c, 7);
    // 0c6d68  jmp dword ptr cs:[edx*4 + 0xc6d70]
    X86_AT(c, 0xc6d68u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC6D70u)));
      switch (t) {
      case 0xc6da4u: goto L_c6da4;
      case 0xc6db3u: goto L_c6db3;
      case 0xc6dc2u: goto L_c6dc2;
      case 0xc6dd1u: goto L_c6dd1;
      case 0xc6e54u: goto L_c6e54;
      default: x86_jump(c, t); return; } }
L_c6da4:
    X86_TICK(c, 15);
    // 0c6da4  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xc6da4u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0c6da7  lea edx, [esi + eax*1]
    X86_AT(c, 0xc6da7u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0c6daa  mov edi, dword ptr [edx*4 + 0xaaa00]
    X86_AT(c, 0xc6daau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xAAA00u)));
    // 0c6db1  jmp 0xc6dde
    X86_AT(c, 0xc6db1u);
    goto L_c6dde;
L_c6db3:
    X86_TICK(c, 15);
    // 0c6db3  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xc6db3u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0c6db6  lea edx, [esi + eax*1]
    X86_AT(c, 0xc6db6u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0c6db9  mov edi, dword ptr [edx*4 + 0xaaad4]
    X86_AT(c, 0xc6db9u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xAAAD4u)));
    // 0c6dc0  jmp 0xc6dde
    X86_AT(c, 0xc6dc0u);
    goto L_c6dde;
L_c6dc2:
    X86_TICK(c, 15);
    // 0c6dc2  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xc6dc2u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0c6dc5  lea edx, [esi + eax*1]
    X86_AT(c, 0xc6dc5u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0c6dc8  mov edi, dword ptr [edx*4 + 0xaaba8]
    X86_AT(c, 0xc6dc8u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xAABA8u)));
    // 0c6dcf  jmp 0xc6dde
    X86_AT(c, 0xc6dcfu);
    goto L_c6dde;
L_c6dd1:
    X86_TICK(c, 8);
    // 0c6dd1  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xc6dd1u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0c6dd4  lea edx, [esi + eax*1]
    X86_AT(c, 0xc6dd4u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0c6dd7  mov edi, dword ptr [edx*4 + 0xaaca0]
    X86_AT(c, 0xc6dd7u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xAACA0u)));
L_c6dde:
    X86_TICK(c, 52);
    // 0c6dde  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xc6ddeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
    // 0c6de5  movzx eax, byte ptr [edi]
    X86_AT(c, 0xc6de5u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0c6de8  inc edi
    X86_AT(c, 0xc6de8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c6de9  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc6de9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c6dec  movzx eax, byte ptr [edi]
    X86_AT(c, 0xc6decu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0c6def  inc edi
    X86_AT(c, 0xc6defu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c6df0  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc6df0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c6df3  movzx eax, byte ptr [edi]
    X86_AT(c, 0xc6df3u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0c6df6  inc edi
    X86_AT(c, 0xc6df6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c6df7  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xc6df7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0c6dfa  movzx eax, byte ptr [edi]
    X86_AT(c, 0xc6dfau);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0c6dfd  inc edi
    X86_AT(c, 0xc6dfdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c6dfe  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc6dfeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0c6e01  movzx eax, byte ptr [edi]
    X86_AT(c, 0xc6e01u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0c6e04  inc edi
    X86_AT(c, 0xc6e04u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c6e05  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xc6e05u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
L_c6e08:
    X86_TICK(c, 12);
    // 0c6e08  cmp dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xc6e08u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x0u, 0, 4);
    // 0c6e0c  jle 0xc6e54
    X86_AT(c, 0xc6e0cu);
    if (x86_cc(c, 14)) { goto L_c6e54; }
    X86_TICK(c, 12);
    // 0c6e0e  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc6e0eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c6e11  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xc6e11u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 0c6e14  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc6e14u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c6e17  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xc6e17u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
L_c6e1a:
    X86_TICK(c, 11);
    // 0c6e1a  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xc6e1au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0c6e1d  and eax, eax
    X86_AT(c, 0xc6e1du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c6e1f  jle 0xc6e4c
    X86_AT(c, 0xc6e1fu);
    if (x86_cc(c, 14)) { goto L_c6e4c; }
    X86_TICK(c, 53);
    // 0c6e21  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc6e21u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0c6e24  lea ecx, [edx + edx*4]
    X86_AT(c, 0xc6e24u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0c6e27  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xc6e27u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0c6e2a  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xc6e2au);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0c6e2d  mov edx, dword ptr [ebp - 0x18]
    X86_AT(c, 0xc6e2du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0c6e30  lea eax, [edx + edx*8]
    X86_AT(c, 0xc6e30u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0c6e33  lea edx, [eax + edx*2]
    X86_AT(c, 0xc6e33u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c6e36  add edx, ecx
    X86_AT(c, 0xc6e36u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0c6e38  add edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc6e38u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 0c6e3b  mov al, byte ptr [edi]
    X86_AT(c, 0xc6e3bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0c6e3d  inc edi
    X86_AT(c, 0xc6e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c6e3e  mov byte ptr [edx + 0xa9cb0], al
    X86_AT(c, 0xc6e3eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA9CB0u)), g8(c, 0));
    // 0c6e44  inc dword ptr [ebp - 0x14]
    X86_AT(c, 0xc6e44u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c6e47  dec dword ptr [ebp - 0x20]
    X86_AT(c, 0xc6e47u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c6e4a  jmp 0xc6e1a
    X86_AT(c, 0xc6e4au);
    X86_POLL(c, 0xc6e1au); goto L_c6e1a;
L_c6e4c:
    X86_TICK(c, 19);
    // 0c6e4c  dec dword ptr [ebp - 0x10]
    X86_AT(c, 0xc6e4cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c6e4f  inc dword ptr [ebp - 0x18]
    X86_AT(c, 0xc6e4fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c6e52  jmp 0xc6e08
    X86_AT(c, 0xc6e52u);
    X86_POLL(c, 0xc6e08u); goto L_c6e08;
L_c6e54:
    X86_TICK(c, 9);
    // 0c6e54  inc esi
    X86_AT(c, 0xc6e54u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c6e55  jmp 0xc6d41
    X86_AT(c, 0xc6e55u);
    X86_POLL(c, 0xc6d41u); goto L_c6d41;
L_c6e5a:
    X86_TICK(c, 9);
    // 0c6e5a  inc ebx
    X86_AT(c, 0xc6e5au);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c6e5b  jmp 0xc6d36
    X86_AT(c, 0xc6e5bu);
    X86_POLL(c, 0xc6d36u); goto L_c6d36;
L_c6e60:
    X86_TICK(c, 32);
    // 0c6e60  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xc6e60u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0c6e63  pop edi
    X86_AT(c, 0xc6e63u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6e64  pop esi
    X86_AT(c, 0xc6e64u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6e65  pop ebx
    X86_AT(c, 0xc6e65u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c6e66  leave 
    X86_AT(c, 0xc6e66u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6e67  ret 
    X86_AT(c, 0xc6e67u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6d24u, "ran off the end of a function");
}
void f_000c6e68(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0c6e68  push ebp
    X86_AT(c, 0xc6e68u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6e69  mov ebp, esp
    X86_AT(c, 0xc6e69u);
    c.r[5] = c.r[4];
    // 0c6e6b  sub esp, 0x10
    X86_AT(c, 0xc6e6bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0c6e6e  push ebx
    X86_AT(c, 0xc6e6eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c6e6f  push esi
    X86_AT(c, 0xc6e6fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c6e70  push edi
    X86_AT(c, 0xc6e70u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6e71  mov ebx, 0xa9cb0
    X86_AT(c, 0xc6e71u);
    c.r[3] = 0xA9CB0u;
    // 0c6e76  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xc6e76u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_c6e7d:
    X86_TICK(c, 11);
    // 0c6e7d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc6e7du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c6e80  cmp eax, 0x1e4
    X86_AT(c, 0xc6e80u);
    (void)x86_sub(c, c.r[0], 0x1E4u, 0, 4);
    // 0c6e85  jge 0xc6e90
    X86_AT(c, 0xc6e85u);
    if (x86_cc(c, 13)) { goto L_c6e90; }
    X86_TICK(c, 17);
    // 0c6e87  mov byte ptr [ebx], 0
    X86_AT(c, 0xc6e87u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3])), 0x0u);
    // 0c6e8a  inc ebx
    X86_AT(c, 0xc6e8au);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c6e8b  inc dword ptr [ebp - 4]
    X86_AT(c, 0xc6e8bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c6e8e  jmp 0xc6e7d
    X86_AT(c, 0xc6e8eu);
    X86_POLL(c, 0xc6e7du); goto L_c6e7d;
L_c6e90:
    X86_TICK(c, 9);
    // 0c6e90  mov word ptr [0xa9e94], 0xffff
    X86_AT(c, 0xc6e90u);
    wr16((c.sbase[3] + (uint32_t)(0xA9E94u)), 0xFFFFu);
    // 0c6e99  call 0xc6d24
    X86_AT(c, 0xc6e99u);
    push32(c, 0xc6e9eu); x86_call_known(c, 0xc6d24u, f_000c6d24); X86_RET(c, 0xc6e9eu);
    X86_TICK(c, 7);
    // 0c6e9e  and eax, eax
    X86_AT(c, 0xc6e9eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c6ea0  jne 0xc6eab
    X86_AT(c, 0xc6ea0u);
    if (x86_cc(c, 5)) { goto L_c6eab; }
    X86_TICK(c, 2);
    // 0c6ea2  mov word ptr [0xa9e94], 0
    X86_AT(c, 0xc6ea2u);
    wr16((c.sbase[3] + (uint32_t)(0xA9E94u)), 0x0u);
L_c6eab:
    X86_TICK(c, 19);
    // 0c6eab  mov al, byte ptr [0xa9335]
    X86_AT(c, 0xc6eabu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA9335u))));
    // 0c6eb0  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xc6eb0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0c6eb3  mov dl, byte ptr [0xa9337]
    X86_AT(c, 0xc6eb3u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xA9337u))));
    // 0c6eb9  mov byte ptr [ebp - 0xe], dl
    X86_AT(c, 0xc6eb9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 2));
    // 0c6ebc  dec al
    X86_AT(c, 0xc6ebcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0c6ebe  jne 0xc6ecd
    X86_AT(c, 0xc6ebeu);
    if (x86_cc(c, 5)) { goto L_c6ecd; }
    X86_TICK(c, 7);
    // 0c6ec0  dec dl
    X86_AT(c, 0xc6ec0u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0c6ec2  jne 0xc6ecd
    X86_AT(c, 0xc6ec2u);
    if (x86_cc(c, 5)) { goto L_c6ecd; }
    X86_TICK(c, 9);
    // 0c6ec4  mov byte ptr [ebp - 0xf], 0x43
    X86_AT(c, 0xc6ec4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x43u);
    // 0c6ec8  jmp 0xc6fbf
    X86_AT(c, 0xc6ec8u);
    goto L_c6fbf;
L_c6ecd:
    X86_TICK(c, 12);
    // 0c6ecd  cmp byte ptr [ebp - 0xd], 1
    X86_AT(c, 0xc6ecdu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x1u, 0, 1);
    // 0c6ed1  jne 0xc6edd
    X86_AT(c, 0xc6ed1u);
    if (x86_cc(c, 5)) { goto L_c6edd; }
    X86_TICK(c, 12);
    // 0c6ed3  cmp byte ptr [ebp - 0xe], 2
    X86_AT(c, 0xc6ed3u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x2u, 0, 1);
    // 0c6ed7  je 0xc6fa3
    X86_AT(c, 0xc6ed7u);
    if (x86_cc(c, 4)) { goto L_c6fa3; }
L_c6edd:
    X86_TICK(c, 12);
    // 0c6edd  cmp byte ptr [ebp - 0xd], 2
    X86_AT(c, 0xc6eddu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x2u, 0, 1);
    // 0c6ee1  jne 0xc6eed
    X86_AT(c, 0xc6ee1u);
    if (x86_cc(c, 5)) { goto L_c6eed; }
    X86_TICK(c, 12);
    // 0c6ee3  cmp byte ptr [ebp - 0xe], 1
    X86_AT(c, 0xc6ee3u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x1u, 0, 1);
    // 0c6ee7  je 0xc6fb5
    X86_AT(c, 0xc6ee7u);
    if (x86_cc(c, 4)) { goto L_c6fb5; }
L_c6eed:
    X86_TICK(c, 12);
    // 0c6eed  cmp byte ptr [ebp - 0xd], 2
    X86_AT(c, 0xc6eedu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x2u, 0, 1);
    // 0c6ef1  jne 0xc6efd
    X86_AT(c, 0xc6ef1u);
    if (x86_cc(c, 5)) { goto L_c6efd; }
    X86_TICK(c, 12);
    // 0c6ef3  cmp byte ptr [ebp - 0xe], 2
    X86_AT(c, 0xc6ef3u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x2u, 0, 1);
    // 0c6ef7  je 0xc6f91
    X86_AT(c, 0xc6ef7u);
    if (x86_cc(c, 4)) { goto L_c6f91; }
L_c6efd:
    X86_TICK(c, 12);
    // 0c6efd  cmp byte ptr [ebp - 0xd], 0
    X86_AT(c, 0xc6efdu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x0u, 0, 1);
    // 0c6f01  jne 0xc6f0d
    X86_AT(c, 0xc6f01u);
    if (x86_cc(c, 5)) { goto L_c6f0d; }
    X86_TICK(c, 12);
    // 0c6f03  cmp byte ptr [ebp - 0xe], 2
    X86_AT(c, 0xc6f03u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x2u, 0, 1);
    // 0c6f07  je 0xc6f64
    X86_AT(c, 0xc6f07u);
    if (x86_cc(c, 4)) { goto L_c6f64; }
L_c6f0d:
    X86_TICK(c, 12);
    // 0c6f0d  cmp byte ptr [ebp - 0xd], 2
    X86_AT(c, 0xc6f0du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x2u, 0, 1);
    // 0c6f11  jne 0xc6f22
    X86_AT(c, 0xc6f11u);
    if (x86_cc(c, 5)) { goto L_c6f22; }
    X86_TICK(c, 12);
    // 0c6f13  cmp byte ptr [ebp - 0xe], 0
    X86_AT(c, 0xc6f13u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x0u, 0, 1);
    // 0c6f17  jne 0xc6f22
    X86_AT(c, 0xc6f17u);
    if (x86_cc(c, 5)) { goto L_c6f22; }
    X86_TICK(c, 9);
    // 0c6f19  mov byte ptr [ebp - 0xf], 0x2d
    X86_AT(c, 0xc6f19u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x2Du);
    // 0c6f1d  jmp 0xc6fbf
    X86_AT(c, 0xc6f1du);
    goto L_c6fbf;
L_c6f22:
    X86_TICK(c, 12);
    // 0c6f22  cmp byte ptr [ebp - 0xd], 0
    X86_AT(c, 0xc6f22u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x0u, 0, 1);
    // 0c6f26  jne 0xc6f37
    X86_AT(c, 0xc6f26u);
    if (x86_cc(c, 5)) { goto L_c6f37; }
    X86_TICK(c, 12);
    // 0c6f28  cmp byte ptr [ebp - 0xe], 1
    X86_AT(c, 0xc6f28u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x1u, 0, 1);
    // 0c6f2c  jne 0xc6f37
    X86_AT(c, 0xc6f2cu);
    if (x86_cc(c, 5)) { goto L_c6f37; }
    X86_TICK(c, 9);
    // 0c6f2e  mov byte ptr [ebp - 0xf], 0x4b
    X86_AT(c, 0xc6f2eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x4Bu);
    // 0c6f32  jmp 0xc6fbf
    X86_AT(c, 0xc6f32u);
    goto L_c6fbf;
L_c6f37:
    X86_TICK(c, 12);
    // 0c6f37  cmp byte ptr [ebp - 0xd], 1
    X86_AT(c, 0xc6f37u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x1u, 0, 1);
    // 0c6f3b  jne 0xc6f4c
    X86_AT(c, 0xc6f3bu);
    if (x86_cc(c, 5)) { goto L_c6f4c; }
    X86_TICK(c, 12);
    // 0c6f3d  cmp byte ptr [ebp - 0xe], 0
    X86_AT(c, 0xc6f3du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x0u, 0, 1);
    // 0c6f41  jne 0xc6f4c
    X86_AT(c, 0xc6f41u);
    if (x86_cc(c, 5)) { goto L_c6f4c; }
    X86_TICK(c, 9);
    // 0c6f43  mov byte ptr [ebp - 0xf], 0x4a
    X86_AT(c, 0xc6f43u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x4Au);
    // 0c6f47  jmp 0xc6fbf
    X86_AT(c, 0xc6f47u);
    goto L_c6fbf;
L_c6f4c:
    X86_TICK(c, 12);
    // 0c6f4c  cmp byte ptr [ebp - 0xd], 3
    X86_AT(c, 0xc6f4cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x3u, 0, 1);
    // 0c6f50  jne 0xc6f58
    X86_AT(c, 0xc6f50u);
    if (x86_cc(c, 5)) { goto L_c6f58; }
    X86_TICK(c, 12);
    // 0c6f52  cmp byte ptr [ebp - 0xe], 0
    X86_AT(c, 0xc6f52u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x0u, 0, 1);
    // 0c6f56  je 0xc6f91
    X86_AT(c, 0xc6f56u);
    if (x86_cc(c, 4)) { goto L_c6f91; }
L_c6f58:
    X86_TICK(c, 12);
    // 0c6f58  cmp byte ptr [ebp - 0xd], 0
    X86_AT(c, 0xc6f58u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x0u, 0, 1);
    // 0c6f5c  jne 0xc6f6d
    X86_AT(c, 0xc6f5cu);
    if (x86_cc(c, 5)) { goto L_c6f6d; }
    X86_TICK(c, 12);
    // 0c6f5e  cmp byte ptr [ebp - 0xe], 3
    X86_AT(c, 0xc6f5eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x3u, 0, 1);
    // 0c6f62  jne 0xc6f6d
    X86_AT(c, 0xc6f62u);
    if (x86_cc(c, 5)) { goto L_c6f6d; }
L_c6f64:
    X86_TICK(c, 9);
    // 0c6f64  mov byte ptr [ebp - 0xf], 0x2e
    X86_AT(c, 0xc6f64u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x2Eu);
    // 0c6f68  jmp 0xc6fbf
    X86_AT(c, 0xc6f68u);
    goto L_c6fbf;
L_c6f6d:
    X86_TICK(c, 12);
    // 0c6f6d  cmp byte ptr [ebp - 0xd], 3
    X86_AT(c, 0xc6f6du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x3u, 0, 1);
    // 0c6f71  jne 0xc6f79
    X86_AT(c, 0xc6f71u);
    if (x86_cc(c, 5)) { goto L_c6f79; }
    X86_TICK(c, 12);
    // 0c6f73  cmp byte ptr [ebp - 0xe], 2
    X86_AT(c, 0xc6f73u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x2u, 0, 1);
    // 0c6f77  je 0xc6f91
    X86_AT(c, 0xc6f77u);
    if (x86_cc(c, 4)) { goto L_c6f91; }
L_c6f79:
    X86_TICK(c, 12);
    // 0c6f79  cmp byte ptr [ebp - 0xd], 2
    X86_AT(c, 0xc6f79u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x2u, 0, 1);
    // 0c6f7d  jne 0xc6f85
    X86_AT(c, 0xc6f7du);
    if (x86_cc(c, 5)) { goto L_c6f85; }
    X86_TICK(c, 12);
    // 0c6f7f  cmp byte ptr [ebp - 0xe], 3
    X86_AT(c, 0xc6f7fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x3u, 0, 1);
    // 0c6f83  je 0xc6f91
    X86_AT(c, 0xc6f83u);
    if (x86_cc(c, 4)) { goto L_c6f91; }
L_c6f85:
    X86_TICK(c, 12);
    // 0c6f85  cmp byte ptr [ebp - 0xd], 3
    X86_AT(c, 0xc6f85u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x3u, 0, 1);
    // 0c6f89  jne 0xc6f97
    X86_AT(c, 0xc6f89u);
    if (x86_cc(c, 5)) { goto L_c6f97; }
    X86_TICK(c, 12);
    // 0c6f8b  cmp byte ptr [ebp - 0xe], 3
    X86_AT(c, 0xc6f8bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x3u, 0, 1);
    // 0c6f8f  jne 0xc6f97
    X86_AT(c, 0xc6f8fu);
    if (x86_cc(c, 5)) { goto L_c6f97; }
L_c6f91:
    X86_TICK(c, 9);
    // 0c6f91  mov byte ptr [ebp - 0xf], 0x2f
    X86_AT(c, 0xc6f91u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x2Fu);
    // 0c6f95  jmp 0xc6fbf
    X86_AT(c, 0xc6f95u);
    goto L_c6fbf;
L_c6f97:
    X86_TICK(c, 12);
    // 0c6f97  cmp byte ptr [ebp - 0xd], 1
    X86_AT(c, 0xc6f97u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x1u, 0, 1);
    // 0c6f9b  jne 0xc6fa9
    X86_AT(c, 0xc6f9bu);
    if (x86_cc(c, 5)) { goto L_c6fa9; }
    X86_TICK(c, 12);
    // 0c6f9d  cmp byte ptr [ebp - 0xe], 3
    X86_AT(c, 0xc6f9du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x3u, 0, 1);
    // 0c6fa1  jne 0xc6fa9
    X86_AT(c, 0xc6fa1u);
    if (x86_cc(c, 5)) { goto L_c6fa9; }
L_c6fa3:
    X86_TICK(c, 9);
    // 0c6fa3  mov byte ptr [ebp - 0xf], 0x75
    X86_AT(c, 0xc6fa3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x75u);
    // 0c6fa7  jmp 0xc6fbf
    X86_AT(c, 0xc6fa7u);
    goto L_c6fbf;
L_c6fa9:
    X86_TICK(c, 12);
    // 0c6fa9  cmp byte ptr [ebp - 0xd], 3
    X86_AT(c, 0xc6fa9u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x3u, 0, 1);
    // 0c6fad  jne 0xc6fbb
    X86_AT(c, 0xc6fadu);
    if (x86_cc(c, 5)) { goto L_c6fbb; }
    X86_TICK(c, 12);
    // 0c6faf  cmp byte ptr [ebp - 0xe], 1
    X86_AT(c, 0xc6fafu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x1u, 0, 1);
    // 0c6fb3  jne 0xc6fbb
    X86_AT(c, 0xc6fb3u);
    if (x86_cc(c, 5)) { goto L_c6fbb; }
L_c6fb5:
    X86_TICK(c, 9);
    // 0c6fb5  mov byte ptr [ebp - 0xf], 0x7d
    X86_AT(c, 0xc6fb5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x7Du);
    // 0c6fb9  jmp 0xc6fbf
    X86_AT(c, 0xc6fb9u);
    goto L_c6fbf;
L_c6fbb:
    X86_TICK(c, 2);
    // 0c6fbb  mov byte ptr [ebp - 0xf], 0
    X86_AT(c, 0xc6fbbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x0u);
L_c6fbf:
    X86_TICK(c, 8);
    // 0c6fbf  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0xc6fbfu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0c6fc2  mov byte ptr [0x8cfe4], al
    X86_AT(c, 0xc6fc2u);
    wr8((c.sbase[3] + (uint32_t)(0x8CFE4u)), g8(c, 0));
    // 0c6fc7  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xc6fc7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_c6fce:
    X86_TICK(c, 12);
    // 0c6fce  cmp dword ptr [ebp - 0xc], 4
    X86_AT(c, 0xc6fceu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x4u, 0, 4);
    // 0c6fd2  jge 0xc7189
    X86_AT(c, 0xc6fd2u);
    if (x86_cc(c, 13)) { goto L_c7189; }
    X86_TICK(c, 2);
    // 0c6fd8  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xc6fd8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_c6fdf:
    X86_TICK(c, 11);
    // 0c6fdf  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc6fdfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c6fe2  cmp eax, 5
    X86_AT(c, 0xc6fe2u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c6fe5  jge 0xc7181
    X86_AT(c, 0xc6fe5u);
    if (x86_cc(c, 13)) { goto L_c7181; }
    X86_TICK(c, 28);
    // 0c6feb  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc6febu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c6fee  lea edx, [edx + edx*4]
    X86_AT(c, 0xc6feeu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0c6ff1  add edx, dword ptr [eax*4 + 0xa9e98]
    X86_AT(c, 0xc6ff1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA9E98u))), 0, 4); }
    // 0c6ff8  mov al, byte ptr [edx + 0xa9334]
    X86_AT(c, 0xc6ff8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA9334u))));
    // 0c6ffe  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xc6ffeu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0c7001  movzx edx, al
    X86_AT(c, 0xc7001u);
    c.r[2] = g8(c, 0);
    // 0c7004  cmp edx, 1
    X86_AT(c, 0xc7004u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c7007  je 0xc7029
    X86_AT(c, 0xc7007u);
    if (x86_cc(c, 4)) { goto L_c7029; }
    X86_TICK(c, 7);
    // 0c7009  cmp edx, 2
    X86_AT(c, 0xc7009u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0c700c  je 0xc7017
    X86_AT(c, 0xc700cu);
    if (x86_cc(c, 4)) { goto L_c7017; }
    X86_TICK(c, 7);
    // 0c700e  cmp edx, 3
    X86_AT(c, 0xc700eu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c7011  jne 0xc7179
    X86_AT(c, 0xc7011u);
    if (x86_cc(c, 5)) { goto L_c7179; }
L_c7017:
    X86_TICK(c, 23);
    // 0c7017  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc7017u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c701a  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc701au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c701d  lea edx, [edx + edx*4]
    X86_AT(c, 0xc701du);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0c7020  add edx, dword ptr [eax*4 + 0xa9e98]
    X86_AT(c, 0xc7020u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA9E98u))), 0, 4); }
    // 0c7027  jmp 0xc703c
    X86_AT(c, 0xc7027u);
    goto L_c703c;
L_c7029:
    X86_TICK(c, 18);
    // 0c7029  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc7029u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c702c  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc702cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c702f  lea edx, [edx + edx*4]
    X86_AT(c, 0xc702fu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0c7032  add edx, dword ptr [eax*4 + 0xa9e98]
    X86_AT(c, 0xc7032u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA9E98u))), 0, 4); }
    // 0c7039  add edx, 0x14
    X86_AT(c, 0xc7039u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x14u, 0, 4); }
L_c703c:
    X86_TICK(c, 12);
    // 0c703c  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc703cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c703f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc703fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c7042  mov ebx, dword ptr [eax*4 + 0xabedc]
    X86_AT(c, 0xc7042u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xABEDCu)));
    // 0c7049  sub esi, esi
    X86_AT(c, 0xc7049u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c704b:
    X86_TICK(c, 7);
    // 0c704b  cmp esi, 0xb
    X86_AT(c, 0xc704bu);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0c704e  jge 0xc7179
    X86_AT(c, 0xc704eu);
    if (x86_cc(c, 13)) { goto L_c7179; }
    X86_TICK(c, 2);
    // 0c7054  sub edi, edi
    X86_AT(c, 0xc7054u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c7056:
    X86_TICK(c, 7);
    // 0c7056  cmp edi, 0xb
    X86_AT(c, 0xc7056u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0c7059  jge 0xc7173
    X86_AT(c, 0xc7059u);
    if (x86_cc(c, 13)) { goto L_c7173; }
    X86_TICK(c, 11);
    // 0c705f  mov al, byte ptr [ebx]
    X86_AT(c, 0xc705fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0c7061  and al, al
    X86_AT(c, 0xc7061u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c7063  je 0xc716c
    X86_AT(c, 0xc7063u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 20);
    // 0c7069  mov edx, esi
    X86_AT(c, 0xc7069u);
    c.r[2] = c.r[6];
    // 0c706b  lea ecx, [edx + edx*8]
    X86_AT(c, 0xc706bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0c706e  lea edx, [ecx + edx*2]
    X86_AT(c, 0xc706eu);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0c7071  lea ecx, [edi + edx*1]
    X86_AT(c, 0xc7071u);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0c7074  mov byte ptr [ecx + 0x8cfa8], al
    X86_AT(c, 0xc7074u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0x8CFA8u)), g8(c, 0));
    // 0c707a  movzx edx, al
    X86_AT(c, 0xc707au);
    c.r[2] = g8(c, 0);
    // 0c707d  cmp edx, 0x42
    X86_AT(c, 0xc707du);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0c7080  ja 0xc70b4
    X86_AT(c, 0xc7080u);
    if (x86_cc(c, 7)) { goto L_c70b4; }
    X86_TICK(c, 7);
    // 0c7082  cmp edx, 0x42
    X86_AT(c, 0xc7082u);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0c7085  je 0xc716c
    X86_AT(c, 0xc7085u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c708b  cmp edx, 1
    X86_AT(c, 0xc708bu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c708e  je 0xc716c
    X86_AT(c, 0xc708eu);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c7094  cmp edx, 3
    X86_AT(c, 0xc7094u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c7097  je 0xc716c
    X86_AT(c, 0xc7097u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c709d  cmp edx, 0xc
    X86_AT(c, 0xc709du);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0c70a0  je 0xc716c
    X86_AT(c, 0xc70a0u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c70a6  cmp edx, 0xd
    X86_AT(c, 0xc70a6u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0c70a9  je 0xc716c
    X86_AT(c, 0xc70a9u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 9);
    // 0c70af  cmp edx, 0x36
    X86_AT(c, 0xc70afu);
    (void)x86_sub(c, c.r[2], 0x36u, 0, 4);
    // 0c70b2  jmp 0xc70ce
    X86_AT(c, 0xc70b2u);
    goto L_c70ce;
L_c70b4:
    X86_TICK(c, 7);
    // 0c70b4  cmp edx, 0x58
    X86_AT(c, 0xc70b4u);
    (void)x86_sub(c, c.r[2], 0x58u, 0, 4);
    // 0c70b7  ja 0xc70d6
    X86_AT(c, 0xc70b7u);
    if (x86_cc(c, 7)) { goto L_c70d6; }
    X86_TICK(c, 7);
    // 0c70b9  cmp edx, 0x58
    X86_AT(c, 0xc70b9u);
    (void)x86_sub(c, c.r[2], 0x58u, 0, 4);
    // 0c70bc  je 0xc716c
    X86_AT(c, 0xc70bcu);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c70c2  cmp edx, 0x4a
    X86_AT(c, 0xc70c2u);
    (void)x86_sub(c, c.r[2], 0x4Au, 0, 4);
    // 0c70c5  je 0xc716c
    X86_AT(c, 0xc70c5u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 2);
    // 0c70cb  cmp edx, 0x51
    X86_AT(c, 0xc70cbu);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
L_c70ce:
    X86_TICK(c, 5);
    // 0c70ce  je 0xc716c
    X86_AT(c, 0xc70ceu);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c70d4  jmp 0xc7104
    X86_AT(c, 0xc70d4u);
    goto L_c7104;
L_c70d6:
    X86_TICK(c, 7);
    // 0c70d6  cmp edx, 0x59
    X86_AT(c, 0xc70d6u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0c70d9  je 0xc716c
    X86_AT(c, 0xc70d9u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c70df  cmp edx, 0x61
    X86_AT(c, 0xc70dfu);
    (void)x86_sub(c, c.r[2], 0x61u, 0, 4);
    // 0c70e2  je 0xc716c
    X86_AT(c, 0xc70e2u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c70e8  cmp edx, 0x80
    X86_AT(c, 0xc70e8u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0c70ee  jne 0xc7104
    X86_AT(c, 0xc70eeu);
    if (x86_cc(c, 5)) { goto L_c7104; }
    X86_TICK(c, 17);
    // 0c70f0  mov eax, esi
    X86_AT(c, 0xc70f0u);
    c.r[0] = c.r[6];
    // 0c70f2  lea edx, [eax + eax*8]
    X86_AT(c, 0xc70f2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c70f5  lea eax, [edx + eax*2]
    X86_AT(c, 0xc70f5u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0c70f8  lea edx, [edi + eax*1]
    X86_AT(c, 0xc70f8u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c70fb  mov byte ptr [edx + 0x8cfa8], 0x2c
    X86_AT(c, 0xc70fbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8CFA8u)), 0x2Cu);
    // 0c7102  jmp 0xc716c
    X86_AT(c, 0xc7102u);
    goto L_c716c;
L_c7104:
    X86_TICK(c, 11);
    // 0c7104  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc7104u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c7107  cmp edx, 3
    X86_AT(c, 0xc7107u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c710a  ja 0xc716c
    X86_AT(c, 0xc710au);
    if (x86_cc(c, 7)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c710c  jmp dword ptr cs:[edx*4 + 0xc7114]
    X86_AT(c, 0xc710cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC7114u)));
      switch (t) {
      case 0xc7124u: goto L_c7124;
      case 0xc7136u: goto L_c7136;
      case 0xc7148u: goto L_c7148;
      case 0xc715au: goto L_c715a;
      default: x86_jump(c, t); return; } }
L_c7124:
    X86_TICK(c, 10);
    // 0c7124  mov eax, esi
    X86_AT(c, 0xc7124u);
    c.r[0] = c.r[6];
    // 0c7126  lea edx, [eax + eax*8]
    X86_AT(c, 0xc7126u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c7129  lea eax, [edx + eax*2]
    X86_AT(c, 0xc7129u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0c712c  lea edx, [edi + eax*1]
    X86_AT(c, 0xc712cu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c712f  mov byte ptr [edx + 0xa9e1b], 0
    X86_AT(c, 0xc712fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA9E1Bu)), 0x0u);
L_c7136:
    X86_TICK(c, 10);
    // 0c7136  mov eax, esi
    X86_AT(c, 0xc7136u);
    c.r[0] = c.r[6];
    // 0c7138  lea edx, [eax + eax*8]
    X86_AT(c, 0xc7138u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c713b  lea eax, [edx + eax*2]
    X86_AT(c, 0xc713bu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0c713e  lea edx, [edi + eax*1]
    X86_AT(c, 0xc713eu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c7141  mov byte ptr [edx + 0xa9da2], 0
    X86_AT(c, 0xc7141u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA9DA2u)), 0x0u);
L_c7148:
    X86_TICK(c, 10);
    // 0c7148  mov eax, esi
    X86_AT(c, 0xc7148u);
    c.r[0] = c.r[6];
    // 0c714a  lea edx, [eax + eax*8]
    X86_AT(c, 0xc714au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c714d  lea eax, [edx + eax*2]
    X86_AT(c, 0xc714du);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0c7150  lea edx, [edi + eax*1]
    X86_AT(c, 0xc7150u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c7153  mov byte ptr [edx + 0xa9d29], 0
    X86_AT(c, 0xc7153u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA9D29u)), 0x0u);
L_c715a:
    X86_TICK(c, 10);
    // 0c715a  mov eax, esi
    X86_AT(c, 0xc715au);
    c.r[0] = c.r[6];
    // 0c715c  lea edx, [eax + eax*8]
    X86_AT(c, 0xc715cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c715f  lea eax, [edx + eax*2]
    X86_AT(c, 0xc715fu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0c7162  lea edx, [edi + eax*1]
    X86_AT(c, 0xc7162u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c7165  mov byte ptr [edx + 0xa9cb0], 0
    X86_AT(c, 0xc7165u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA9CB0u)), 0x0u);
L_c716c:
    X86_TICK(c, 11);
    // 0c716c  inc ebx
    X86_AT(c, 0xc716cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c716d  inc edi
    X86_AT(c, 0xc716du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c716e  jmp 0xc7056
    X86_AT(c, 0xc716eu);
    X86_POLL(c, 0xc7056u); goto L_c7056;
L_c7173:
    X86_TICK(c, 9);
    // 0c7173  inc esi
    X86_AT(c, 0xc7173u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c7174  jmp 0xc704b
    X86_AT(c, 0xc7174u);
    X86_POLL(c, 0xc704bu); goto L_c704b;
L_c7179:
    X86_TICK(c, 13);
    // 0c7179  inc dword ptr [ebp - 8]
    X86_AT(c, 0xc7179u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c717c  jmp 0xc6fdf
    X86_AT(c, 0xc717cu);
    X86_POLL(c, 0xc6fdfu); goto L_c6fdf;
L_c7181:
    X86_TICK(c, 13);
    // 0c7181  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xc7181u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c7184  jmp 0xc6fce
    X86_AT(c, 0xc7184u);
    X86_POLL(c, 0xc6fceu); goto L_c6fce;
L_c7189:
    X86_TICK(c, 28);
    // 0c7189  pop edi
    X86_AT(c, 0xc7189u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c718a  pop esi
    X86_AT(c, 0xc718au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c718b  pop ebx
    X86_AT(c, 0xc718bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c718c  leave 
    X86_AT(c, 0xc718cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c718d  ret 
    X86_AT(c, 0xc718du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6e68u, "ran off the end of a function");
}
void f_000c6fbf(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0c6fbf  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0xc6fbfu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0c6fc2  mov byte ptr [0x8cfe4], al
    X86_AT(c, 0xc6fc2u);
    wr8((c.sbase[3] + (uint32_t)(0x8CFE4u)), g8(c, 0));
    // 0c6fc7  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xc6fc7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_c6fce:
    X86_TICK(c, 12);
    // 0c6fce  cmp dword ptr [ebp - 0xc], 4
    X86_AT(c, 0xc6fceu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x4u, 0, 4);
    // 0c6fd2  jge 0xc7189
    X86_AT(c, 0xc6fd2u);
    if (x86_cc(c, 13)) { goto L_c7189; }
    X86_TICK(c, 2);
    // 0c6fd8  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xc6fd8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_c6fdf:
    X86_TICK(c, 11);
    // 0c6fdf  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc6fdfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c6fe2  cmp eax, 5
    X86_AT(c, 0xc6fe2u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c6fe5  jge 0xc7181
    X86_AT(c, 0xc6fe5u);
    if (x86_cc(c, 13)) { goto L_c7181; }
    X86_TICK(c, 28);
    // 0c6feb  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc6febu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c6fee  lea edx, [edx + edx*4]
    X86_AT(c, 0xc6feeu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0c6ff1  add edx, dword ptr [eax*4 + 0xa9e98]
    X86_AT(c, 0xc6ff1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA9E98u))), 0, 4); }
    // 0c6ff8  mov al, byte ptr [edx + 0xa9334]
    X86_AT(c, 0xc6ff8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA9334u))));
    // 0c6ffe  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xc6ffeu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0c7001  movzx edx, al
    X86_AT(c, 0xc7001u);
    c.r[2] = g8(c, 0);
    // 0c7004  cmp edx, 1
    X86_AT(c, 0xc7004u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c7007  je 0xc7029
    X86_AT(c, 0xc7007u);
    if (x86_cc(c, 4)) { goto L_c7029; }
    X86_TICK(c, 7);
    // 0c7009  cmp edx, 2
    X86_AT(c, 0xc7009u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0c700c  je 0xc7017
    X86_AT(c, 0xc700cu);
    if (x86_cc(c, 4)) { goto L_c7017; }
    X86_TICK(c, 7);
    // 0c700e  cmp edx, 3
    X86_AT(c, 0xc700eu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c7011  jne 0xc7179
    X86_AT(c, 0xc7011u);
    if (x86_cc(c, 5)) { goto L_c7179; }
L_c7017:
    X86_TICK(c, 23);
    // 0c7017  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc7017u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c701a  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc701au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c701d  lea edx, [edx + edx*4]
    X86_AT(c, 0xc701du);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0c7020  add edx, dword ptr [eax*4 + 0xa9e98]
    X86_AT(c, 0xc7020u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA9E98u))), 0, 4); }
    // 0c7027  jmp 0xc703c
    X86_AT(c, 0xc7027u);
    goto L_c703c;
L_c7029:
    X86_TICK(c, 18);
    // 0c7029  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc7029u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c702c  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc702cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c702f  lea edx, [edx + edx*4]
    X86_AT(c, 0xc702fu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0c7032  add edx, dword ptr [eax*4 + 0xa9e98]
    X86_AT(c, 0xc7032u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA9E98u))), 0, 4); }
    // 0c7039  add edx, 0x14
    X86_AT(c, 0xc7039u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x14u, 0, 4); }
L_c703c:
    X86_TICK(c, 12);
    // 0c703c  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc703cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c703f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc703fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c7042  mov ebx, dword ptr [eax*4 + 0xabedc]
    X86_AT(c, 0xc7042u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xABEDCu)));
    // 0c7049  sub esi, esi
    X86_AT(c, 0xc7049u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c704b:
    X86_TICK(c, 7);
    // 0c704b  cmp esi, 0xb
    X86_AT(c, 0xc704bu);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0c704e  jge 0xc7179
    X86_AT(c, 0xc704eu);
    if (x86_cc(c, 13)) { goto L_c7179; }
    X86_TICK(c, 2);
    // 0c7054  sub edi, edi
    X86_AT(c, 0xc7054u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c7056:
    X86_TICK(c, 7);
    // 0c7056  cmp edi, 0xb
    X86_AT(c, 0xc7056u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0c7059  jge 0xc7173
    X86_AT(c, 0xc7059u);
    if (x86_cc(c, 13)) { goto L_c7173; }
    X86_TICK(c, 11);
    // 0c705f  mov al, byte ptr [ebx]
    X86_AT(c, 0xc705fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0c7061  and al, al
    X86_AT(c, 0xc7061u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c7063  je 0xc716c
    X86_AT(c, 0xc7063u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 20);
    // 0c7069  mov edx, esi
    X86_AT(c, 0xc7069u);
    c.r[2] = c.r[6];
    // 0c706b  lea ecx, [edx + edx*8]
    X86_AT(c, 0xc706bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0c706e  lea edx, [ecx + edx*2]
    X86_AT(c, 0xc706eu);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0c7071  lea ecx, [edi + edx*1]
    X86_AT(c, 0xc7071u);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0c7074  mov byte ptr [ecx + 0x8cfa8], al
    X86_AT(c, 0xc7074u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0x8CFA8u)), g8(c, 0));
    // 0c707a  movzx edx, al
    X86_AT(c, 0xc707au);
    c.r[2] = g8(c, 0);
    // 0c707d  cmp edx, 0x42
    X86_AT(c, 0xc707du);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0c7080  ja 0xc70b4
    X86_AT(c, 0xc7080u);
    if (x86_cc(c, 7)) { goto L_c70b4; }
    X86_TICK(c, 7);
    // 0c7082  cmp edx, 0x42
    X86_AT(c, 0xc7082u);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0c7085  je 0xc716c
    X86_AT(c, 0xc7085u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c708b  cmp edx, 1
    X86_AT(c, 0xc708bu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c708e  je 0xc716c
    X86_AT(c, 0xc708eu);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c7094  cmp edx, 3
    X86_AT(c, 0xc7094u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c7097  je 0xc716c
    X86_AT(c, 0xc7097u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c709d  cmp edx, 0xc
    X86_AT(c, 0xc709du);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0c70a0  je 0xc716c
    X86_AT(c, 0xc70a0u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c70a6  cmp edx, 0xd
    X86_AT(c, 0xc70a6u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0c70a9  je 0xc716c
    X86_AT(c, 0xc70a9u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 9);
    // 0c70af  cmp edx, 0x36
    X86_AT(c, 0xc70afu);
    (void)x86_sub(c, c.r[2], 0x36u, 0, 4);
    // 0c70b2  jmp 0xc70ce
    X86_AT(c, 0xc70b2u);
    goto L_c70ce;
L_c70b4:
    X86_TICK(c, 7);
    // 0c70b4  cmp edx, 0x58
    X86_AT(c, 0xc70b4u);
    (void)x86_sub(c, c.r[2], 0x58u, 0, 4);
    // 0c70b7  ja 0xc70d6
    X86_AT(c, 0xc70b7u);
    if (x86_cc(c, 7)) { goto L_c70d6; }
    X86_TICK(c, 7);
    // 0c70b9  cmp edx, 0x58
    X86_AT(c, 0xc70b9u);
    (void)x86_sub(c, c.r[2], 0x58u, 0, 4);
    // 0c70bc  je 0xc716c
    X86_AT(c, 0xc70bcu);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c70c2  cmp edx, 0x4a
    X86_AT(c, 0xc70c2u);
    (void)x86_sub(c, c.r[2], 0x4Au, 0, 4);
    // 0c70c5  je 0xc716c
    X86_AT(c, 0xc70c5u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 2);
    // 0c70cb  cmp edx, 0x51
    X86_AT(c, 0xc70cbu);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
L_c70ce:
    X86_TICK(c, 5);
    // 0c70ce  je 0xc716c
    X86_AT(c, 0xc70ceu);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c70d4  jmp 0xc7104
    X86_AT(c, 0xc70d4u);
    goto L_c7104;
L_c70d6:
    X86_TICK(c, 7);
    // 0c70d6  cmp edx, 0x59
    X86_AT(c, 0xc70d6u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0c70d9  je 0xc716c
    X86_AT(c, 0xc70d9u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c70df  cmp edx, 0x61
    X86_AT(c, 0xc70dfu);
    (void)x86_sub(c, c.r[2], 0x61u, 0, 4);
    // 0c70e2  je 0xc716c
    X86_AT(c, 0xc70e2u);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c70e8  cmp edx, 0x80
    X86_AT(c, 0xc70e8u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0c70ee  jne 0xc7104
    X86_AT(c, 0xc70eeu);
    if (x86_cc(c, 5)) { goto L_c7104; }
    X86_TICK(c, 17);
    // 0c70f0  mov eax, esi
    X86_AT(c, 0xc70f0u);
    c.r[0] = c.r[6];
    // 0c70f2  lea edx, [eax + eax*8]
    X86_AT(c, 0xc70f2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c70f5  lea eax, [edx + eax*2]
    X86_AT(c, 0xc70f5u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0c70f8  lea edx, [edi + eax*1]
    X86_AT(c, 0xc70f8u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c70fb  mov byte ptr [edx + 0x8cfa8], 0x2c
    X86_AT(c, 0xc70fbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8CFA8u)), 0x2Cu);
    // 0c7102  jmp 0xc716c
    X86_AT(c, 0xc7102u);
    goto L_c716c;
L_c7104:
    X86_TICK(c, 11);
    // 0c7104  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc7104u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c7107  cmp edx, 3
    X86_AT(c, 0xc7107u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c710a  ja 0xc716c
    X86_AT(c, 0xc710au);
    if (x86_cc(c, 7)) { goto L_c716c; }
    X86_TICK(c, 7);
    // 0c710c  jmp dword ptr cs:[edx*4 + 0xc7114]
    X86_AT(c, 0xc710cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC7114u)));
      switch (t) {
      case 0xc7124u: goto L_c7124;
      case 0xc7136u: goto L_c7136;
      case 0xc7148u: goto L_c7148;
      case 0xc715au: goto L_c715a;
      default: x86_jump(c, t); return; } }
L_c7124:
    X86_TICK(c, 10);
    // 0c7124  mov eax, esi
    X86_AT(c, 0xc7124u);
    c.r[0] = c.r[6];
    // 0c7126  lea edx, [eax + eax*8]
    X86_AT(c, 0xc7126u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c7129  lea eax, [edx + eax*2]
    X86_AT(c, 0xc7129u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0c712c  lea edx, [edi + eax*1]
    X86_AT(c, 0xc712cu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c712f  mov byte ptr [edx + 0xa9e1b], 0
    X86_AT(c, 0xc712fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA9E1Bu)), 0x0u);
L_c7136:
    X86_TICK(c, 10);
    // 0c7136  mov eax, esi
    X86_AT(c, 0xc7136u);
    c.r[0] = c.r[6];
    // 0c7138  lea edx, [eax + eax*8]
    X86_AT(c, 0xc7138u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c713b  lea eax, [edx + eax*2]
    X86_AT(c, 0xc713bu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0c713e  lea edx, [edi + eax*1]
    X86_AT(c, 0xc713eu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c7141  mov byte ptr [edx + 0xa9da2], 0
    X86_AT(c, 0xc7141u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA9DA2u)), 0x0u);
L_c7148:
    X86_TICK(c, 10);
    // 0c7148  mov eax, esi
    X86_AT(c, 0xc7148u);
    c.r[0] = c.r[6];
    // 0c714a  lea edx, [eax + eax*8]
    X86_AT(c, 0xc714au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c714d  lea eax, [edx + eax*2]
    X86_AT(c, 0xc714du);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0c7150  lea edx, [edi + eax*1]
    X86_AT(c, 0xc7150u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c7153  mov byte ptr [edx + 0xa9d29], 0
    X86_AT(c, 0xc7153u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA9D29u)), 0x0u);
L_c715a:
    X86_TICK(c, 10);
    // 0c715a  mov eax, esi
    X86_AT(c, 0xc715au);
    c.r[0] = c.r[6];
    // 0c715c  lea edx, [eax + eax*8]
    X86_AT(c, 0xc715cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c715f  lea eax, [edx + eax*2]
    X86_AT(c, 0xc715fu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0c7162  lea edx, [edi + eax*1]
    X86_AT(c, 0xc7162u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c7165  mov byte ptr [edx + 0xa9cb0], 0
    X86_AT(c, 0xc7165u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA9CB0u)), 0x0u);
L_c716c:
    X86_TICK(c, 11);
    // 0c716c  inc ebx
    X86_AT(c, 0xc716cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c716d  inc edi
    X86_AT(c, 0xc716du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c716e  jmp 0xc7056
    X86_AT(c, 0xc716eu);
    X86_POLL(c, 0xc7056u); goto L_c7056;
L_c7173:
    X86_TICK(c, 9);
    // 0c7173  inc esi
    X86_AT(c, 0xc7173u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c7174  jmp 0xc704b
    X86_AT(c, 0xc7174u);
    X86_POLL(c, 0xc704bu); goto L_c704b;
L_c7179:
    X86_TICK(c, 13);
    // 0c7179  inc dword ptr [ebp - 8]
    X86_AT(c, 0xc7179u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c717c  jmp 0xc6fdf
    X86_AT(c, 0xc717cu);
    X86_POLL(c, 0xc6fdfu); goto L_c6fdf;
L_c7181:
    X86_TICK(c, 13);
    // 0c7181  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xc7181u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c7184  jmp 0xc6fce
    X86_AT(c, 0xc7184u);
    X86_POLL(c, 0xc6fceu); goto L_c6fce;
L_c7189:
    X86_TICK(c, 28);
    // 0c7189  pop edi
    X86_AT(c, 0xc7189u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c718a  pop esi
    X86_AT(c, 0xc718au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c718b  pop ebx
    X86_AT(c, 0xc718bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c718c  leave 
    X86_AT(c, 0xc718cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c718d  ret 
    X86_AT(c, 0xc718du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6fbfu, "ran off the end of a function");
}
void f_000c7190(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c7190  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xc7190u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0c7197  jne 0xc71e2
    X86_AT(c, 0xc7197u);
    if (x86_cc(c, 5)) { goto L_c71e2; }
    X86_TICK(c, 29);
    // 0c7199  mov eax, dword ptr [0xa605c]
    X86_AT(c, 0xc7199u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA605Cu)));
    // 0c719e  mov edx, dword ptr [eax*8 + 0xaef4c]
    X86_AT(c, 0xc719eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 8 + 0xAEF4Cu)));
    // 0c71a5  mov dword ptr [0xa4a66], edx
    X86_AT(c, 0xc71a5u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), c.r[2]);
    // 0c71ab  mov dword ptr [0xa4a76], edx
    X86_AT(c, 0xc71abu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A76u)), c.r[2]);
    // 0c71b1  mov eax, dword ptr [eax*8 + 0xaef50]
    X86_AT(c, 0xc71b1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 8 + 0xAEF50u)));
    // 0c71b8  mov dword ptr [0xa4a6a], eax
    X86_AT(c, 0xc71b8u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), c.r[0]);
    // 0c71bd  mov dword ptr [0xa4a7a], eax
    X86_AT(c, 0xc71bdu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Au)), c.r[0]);
    // 0c71c2  push 5
    X86_AT(c, 0xc71c2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c71c4  call 0xb607c
    X86_AT(c, 0xc71c4u);
    push32(c, 0xc71c9u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc71c9u);
    X86_TICK(c, 7);
    // 0c71c9  call 0xb71c4
    X86_AT(c, 0xc71c9u);
    push32(c, 0xc71ceu); x86_call_known(c, 0xb71c4u, f_000b71c4); X86_RET(c, 0xc71ceu);
    X86_TICK(c, 7);
    // 0c71ce  call 0xb8d28
    X86_AT(c, 0xc71ceu);
    push32(c, 0xc71d3u); x86_call_known(c, 0xb8d28u, f_000b8d28); X86_RET(c, 0xc71d3u);
    X86_TICK(c, 7);
    // 0c71d3  call 0xb7818
    X86_AT(c, 0xc71d3u);
    push32(c, 0xc71d8u); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xc71d8u);
    X86_TICK(c, 9);
    // 0c71d8  push 1
    X86_AT(c, 0xc71d8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c71da  call 0xb61d4
    X86_AT(c, 0xc71dau);
    push32(c, 0xc71dfu); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xc71dfu);
    X86_TICK(c, 2);
    // 0c71df  add esp, 8
    X86_AT(c, 0xc71dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c71e2:
    X86_TICK(c, 10);
    // 0c71e2  ret 
    X86_AT(c, 0xc71e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7190u, "ran off the end of a function");
}
void f_000c71e4(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0c71e4  push ebp
    X86_AT(c, 0xc71e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c71e5  mov ebp, esp
    X86_AT(c, 0xc71e5u);
    c.r[5] = c.r[4];
    // 0c71e7  push ebx
    X86_AT(c, 0xc71e7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c71e8  push esi
    X86_AT(c, 0xc71e8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c71e9  push edi
    X86_AT(c, 0xc71e9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c71ea  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc71eau);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c71ed  lea eax, [edi + edi*2]
    X86_AT(c, 0xc71edu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c71f0  lea edx, [eax*8]
    X86_AT(c, 0xc71f0u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c71f7  lea edx, [eax + edx*8]
    X86_AT(c, 0xc71f7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c71fa  mov esi, dword ptr [edx + 0xa4ac2]
    X86_AT(c, 0xc71fau);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AC2u)));
    // 0c7200  mov bl, byte ptr [edx + 0xa4ace]
    X86_AT(c, 0xc7200u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACEu))));
    // 0c7206  movzx edx, bl
    X86_AT(c, 0xc7206u);
    c.r[2] = g8(c, 3);
    // 0c7209  cmp edx, 0x42
    X86_AT(c, 0xc7209u);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0c720c  je 0xc721f
    X86_AT(c, 0xc720cu);
    if (x86_cc(c, 4)) { goto L_c721f; }
    X86_TICK(c, 7);
    // 0c720e  cmp edx, 0x49
    X86_AT(c, 0xc720eu);
    (void)x86_sub(c, c.r[2], 0x49u, 0, 4);
    // 0c7211  je 0xc721f
    X86_AT(c, 0xc7211u);
    if (x86_cc(c, 4)) { goto L_c721f; }
    X86_TICK(c, 7);
    // 0c7213  cmp edx, 0x52
    X86_AT(c, 0xc7213u);
    (void)x86_sub(c, c.r[2], 0x52u, 0, 4);
    // 0c7216  je 0xc721f
    X86_AT(c, 0xc7216u);
    if (x86_cc(c, 4)) { goto L_c721f; }
    X86_TICK(c, 7);
    // 0c7218  cmp edx, 0x54
    X86_AT(c, 0xc7218u);
    (void)x86_sub(c, c.r[2], 0x54u, 0, 4);
    // 0c721b  je 0xc7224
    X86_AT(c, 0xc721bu);
    if (x86_cc(c, 4)) { goto L_c7224; }
    X86_TICK(c, 7);
    // 0c721d  jmp 0xc7227
    X86_AT(c, 0xc721du);
    goto L_c7227;
L_c721f:
    X86_TICK(c, 9);
    // 0c721f  add esi, 0x28
    X86_AT(c, 0xc721fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c7222  jmp 0xc7227
    X86_AT(c, 0xc7222u);
    goto L_c7227;
L_c7224:
    X86_TICK(c, 2);
    // 0c7224  add esi, 0x50
    X86_AT(c, 0xc7224u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x50u, 0, 4); }
L_c7227:
    X86_TICK(c, 9);
    // 0c7227  push 0x80
    X86_AT(c, 0xc7227u);
    { uint32_t v = 0x80u; push32(c, v); }
    // 0c722c  call 0xb61b4
    X86_AT(c, 0xc722cu);
    push32(c, 0xc7231u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc7231u);
    X86_TICK(c, 9);
    // 0c7231  add esp, 4
    X86_AT(c, 0xc7231u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7234  cmp eax, esi
    X86_AT(c, 0xc7234u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0c7236  jg 0xc723f
    X86_AT(c, 0xc7236u);
    if (x86_cc(c, 15)) { goto L_c723f; }
    X86_TICK(c, 9);
    // 0c7238  mov eax, 0xffffffff
    X86_AT(c, 0xc7238u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c723d  jmp 0xc7241
    X86_AT(c, 0xc723du);
    goto L_c7241;
L_c723f:
    X86_TICK(c, 2);
    // 0c723f  sub eax, eax
    X86_AT(c, 0xc723fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c7241:
    X86_TICK(c, 28);
    // 0c7241  pop edi
    X86_AT(c, 0xc7241u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7242  pop esi
    X86_AT(c, 0xc7242u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c7243  pop ebx
    X86_AT(c, 0xc7243u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c7244  leave 
    X86_AT(c, 0xc7244u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c7245  ret 
    X86_AT(c, 0xc7245u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc71e4u, "ran off the end of a function");
}
void f_000c7248(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0c7248  push ebp
    X86_AT(c, 0xc7248u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c7249  mov ebp, esp
    X86_AT(c, 0xc7249u);
    c.r[5] = c.r[4];
    // 0c724b  push esi
    X86_AT(c, 0xc724bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c724c  push edi
    X86_AT(c, 0xc724cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c724d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc724du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c7250  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc7250u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c7253  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc7253u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c7256  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc7256u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c7259  dec edx
    X86_AT(c, 0xc7259u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c725a  cmp edx, 3
    X86_AT(c, 0xc725au);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c725d  ja 0xc72ab
    X86_AT(c, 0xc725du);
    if (x86_cc(c, 7)) { goto L_c72ab; }
    X86_TICK(c, 7);
    // 0c725f  jmp dword ptr cs:[edx*4 + 0xc7267]
    X86_AT(c, 0xc725fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC7267u)));
      switch (t) {
      case 0xc7277u: goto L_c7277;
      case 0xc7284u: goto L_c7284;
      case 0xc7292u: goto L_c7292;
      case 0xc729fu: goto L_c729f;
      default: x86_jump(c, t); return; } }
L_c7277:
    X86_TICK(c, 18);
    // 0c7277  sub dword ptr [esi], ecx
    X86_AT(c, 0xc7277u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0c7279  mov eax, dword ptr [esi]
    X86_AT(c, 0xc7279u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0c727b  and eax, eax
    X86_AT(c, 0xc727bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c727d  jge 0xc72ab
    X86_AT(c, 0xc727du);
    if (x86_cc(c, 13)) { goto L_c72ab; }
    X86_TICK(c, 14);
    // 0c727f  add dword ptr [esi], 0x40
    X86_AT(c, 0xc727fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x40u, 0, 4)); }
    // 0c7282  jmp 0xc72ab
    X86_AT(c, 0xc7282u);
    goto L_c72ab;
L_c7284:
    X86_TICK(c, 18);
    // 0c7284  add dword ptr [esi], ecx
    X86_AT(c, 0xc7284u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 0c7286  mov eax, dword ptr [esi]
    X86_AT(c, 0xc7286u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0c7288  cmp eax, 0x40
    X86_AT(c, 0xc7288u);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 0c728b  jl 0xc72ab
    X86_AT(c, 0xc728bu);
    if (x86_cc(c, 12)) { goto L_c72ab; }
    X86_TICK(c, 14);
    // 0c728d  sub dword ptr [esi], 0x40
    X86_AT(c, 0xc728du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x40u, 0, 4)); }
    // 0c7290  jmp 0xc72ab
    X86_AT(c, 0xc7290u);
    goto L_c72ab;
L_c7292:
    X86_TICK(c, 18);
    // 0c7292  sub dword ptr [edi], ecx
    X86_AT(c, 0xc7292u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0c7294  mov eax, dword ptr [edi]
    X86_AT(c, 0xc7294u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0c7296  and eax, eax
    X86_AT(c, 0xc7296u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c7298  jge 0xc72ab
    X86_AT(c, 0xc7298u);
    if (x86_cc(c, 13)) { goto L_c72ab; }
    X86_TICK(c, 14);
    // 0c729a  add dword ptr [edi], 0x40
    X86_AT(c, 0xc729au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x40u, 0, 4)); }
    // 0c729d  jmp 0xc72ab
    X86_AT(c, 0xc729du);
    goto L_c72ab;
L_c729f:
    X86_TICK(c, 18);
    // 0c729f  add dword ptr [edi], ecx
    X86_AT(c, 0xc729fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 0c72a1  mov eax, dword ptr [edi]
    X86_AT(c, 0xc72a1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0c72a3  cmp eax, 0x40
    X86_AT(c, 0xc72a3u);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 0c72a6  jl 0xc72ab
    X86_AT(c, 0xc72a6u);
    if (x86_cc(c, 12)) { goto L_c72ab; }
    X86_TICK(c, 7);
    // 0c72a8  sub dword ptr [edi], 0x40
    X86_AT(c, 0xc72a8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x40u, 0, 4)); }
L_c72ab:
    X86_TICK(c, 24);
    // 0c72ab  pop edi
    X86_AT(c, 0xc72abu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c72ac  pop esi
    X86_AT(c, 0xc72acu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c72ad  leave 
    X86_AT(c, 0xc72adu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c72ae  ret 
    X86_AT(c, 0xc72aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7248u, "ran off the end of a function");
}
}

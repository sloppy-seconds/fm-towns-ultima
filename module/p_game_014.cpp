#include "p_game_funcs.h"
namespace p_game {
void f_000f3bd9(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f3bd9  sub eax, eax
    X86_AT(c, 0xf3bd9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3bdb  jmp 0xf3c06
    X86_AT(c, 0xf3bdbu);
    goto L_f3c06;
L_f3c06:
    X86_TICK(c, 18);
    // 0f3c06  pop edi
    X86_AT(c, 0xf3c06u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f3c07  pop esi
    X86_AT(c, 0xf3c07u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f3c08  ret 
    X86_AT(c, 0xf3c08u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf3bd9u, "ran off the end of a function");
}
void f_000f3c06(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0f3c06  pop edi
    X86_AT(c, 0xf3c06u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f3c07  pop esi
    X86_AT(c, 0xf3c07u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f3c08  ret 
    X86_AT(c, 0xf3c08u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf3c06u, "ran off the end of a function");
}
void f_000f3c0c(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0f3c0c  mov eax, dword ptr [esp + 0xc]
    X86_AT(c, 0xf3c0cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0f3c10  shl eax, 6
    X86_AT(c, 0xf3c10u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0f3c13  add eax, dword ptr [esp + 8]
    X86_AT(c, 0xf3c13u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u))), 0, 4); }
    // 0f3c17  mov dl, byte ptr [esp + 4]
    X86_AT(c, 0xf3c17u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 0f3c1b  mov byte ptr [eax + 0xbd578], dl
    X86_AT(c, 0xf3c1bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBD578u)), g8(c, 2));
    // 0f3c21  ret 
    X86_AT(c, 0xf3c21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf3c0cu, "ran off the end of a function");
}
void f_000f3c24(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0f3c24  mov eax, dword ptr [esp + 0xc]
    X86_AT(c, 0xf3c24u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0f3c28  shl eax, 7
    X86_AT(c, 0xf3c28u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0f3c2b  mov edx, dword ptr [esp + 8]
    X86_AT(c, 0xf3c2bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0f3c2f  mov cx, word ptr [esp + 4]
    X86_AT(c, 0xf3c2fu);
    s16(c, 1, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 0f3c34  mov word ptr [eax + edx*2 + 0x77e90], cx
    X86_AT(c, 0xf3c34u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 2 + 0x77E90u)), (c.r[1] & 0xFFFFu));
    // 0f3c3c  ret 
    X86_AT(c, 0xf3c3cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf3c24u, "ran off the end of a function");
}
void f_000f3c40(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0f3c40  push ebp
    X86_AT(c, 0xf3c40u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f3c41  mov ebp, esp
    X86_AT(c, 0xf3c41u);
    c.r[5] = c.r[4];
    // 0f3c43  push ebx
    X86_AT(c, 0xf3c43u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f3c44  push esi
    X86_AT(c, 0xf3c44u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f3c45  push edi
    X86_AT(c, 0xf3c45u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f3c46  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf3c46u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f3c49  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xf3c49u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0f3c4c  sub ebx, ebx
    X86_AT(c, 0xf3c4cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0f3c4e  mov edx, esi
    X86_AT(c, 0xf3c4eu);
    c.r[2] = c.r[6];
    // 0f3c50  cmp edx, 5
    X86_AT(c, 0xf3c50u);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0f3c53  ja 0xf44ff
    X86_AT(c, 0xf3c53u);
    if (x86_cc(c, 7)) { goto L_f44ff; }
    X86_TICK(c, 7);
    // 0f3c59  jmp dword ptr cs:[edx*4 + 0xf3c61]
    X86_AT(c, 0xf3c59u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF3C61u)));
      switch (t) {
      case 0xf3c79u: goto L_f3c79;
      case 0xf3cd5u: goto L_f3cd5;
      case 0xf3fc7u: goto L_f3fc7;
      case 0xf4163u: goto L_f4163;
      case 0xf4442u: goto L_f4442;
      case 0xf44c5u: goto L_f44c5;
      default: x86_jump(c, t); return; } }
L_f3c79:
    X86_TICK(c, 11);
    // 0f3c79  push 0
    X86_AT(c, 0xf3c79u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f3c7b  push edi
    X86_AT(c, 0xf3c7bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f3c7c  call 0xfd448
    X86_AT(c, 0xf3c7cu);
    push32(c, 0xf3c81u); f_000fd448(c); X86_RET(c, 0xf3c81u);
    X86_TICK(c, 9);
    // 0f3c81  push edi
    X86_AT(c, 0xf3c81u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f3c82  call 0xe3a84
    X86_AT(c, 0xf3c82u);
    push32(c, 0xf3c87u); f_000e3a84(c); X86_RET(c, 0xf3c87u);
    X86_TICK(c, 14);
    // 0f3c87  add esp, 0xc
    X86_AT(c, 0xf3c87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f3c8a  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xf3c8au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0f3c91  jne 0xf3ccd
    X86_AT(c, 0xf3c91u);
    if (x86_cc(c, 5)) { goto L_f3ccd; }
    X86_TICK(c, 7);
    // 0f3c93  cmp edi, 2
    X86_AT(c, 0xf3c93u);
    (void)x86_sub(c, c.r[7], 0x2u, 0, 4);
    // 0f3c96  jne 0xf3ccd
    X86_AT(c, 0xf3c96u);
    if (x86_cc(c, 5)) { goto L_f3ccd; }
    X86_TICK(c, 13);
    // 0f3c98  push 0x14
    X86_AT(c, 0xf3c98u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0f3c9a  push 0x22
    X86_AT(c, 0xf3c9au);
    { uint32_t v = 0x22u; push32(c, v); }
    // 0f3c9c  push 0x194
    X86_AT(c, 0xf3c9cu);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f3ca1  call 0xf3c24
    X86_AT(c, 0xf3ca1u);
    push32(c, 0xf3ca6u); f_000f3c24(c); X86_RET(c, 0xf3ca6u);
    X86_TICK(c, 13);
    // 0f3ca6  push 0x15
    X86_AT(c, 0xf3ca6u);
    { uint32_t v = 0x15u; push32(c, v); }
    // 0f3ca8  push 0x23
    X86_AT(c, 0xf3ca8u);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0f3caa  push 0x196
    X86_AT(c, 0xf3caau);
    { uint32_t v = 0x196u; push32(c, v); }
    // 0f3caf  call 0xf3c24
    X86_AT(c, 0xf3cafu);
    push32(c, 0xf3cb4u); f_000f3c24(c); X86_RET(c, 0xf3cb4u);
    X86_TICK(c, 13);
    // 0f3cb4  push 0x16
    X86_AT(c, 0xf3cb4u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0f3cb6  push 0x21
    X86_AT(c, 0xf3cb6u);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f3cb8  push 0x75
    X86_AT(c, 0xf3cb8u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0f3cba  call 0xf3c24
    X86_AT(c, 0xf3cbau);
    push32(c, 0xf3cbfu); f_000f3c24(c); X86_RET(c, 0xf3cbfu);
    X86_TICK(c, 13);
    // 0f3cbf  push 0x15
    X86_AT(c, 0xf3cbfu);
    { uint32_t v = 0x15u; push32(c, v); }
    // 0f3cc1  push 0x24
    X86_AT(c, 0xf3cc1u);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0f3cc3  push 0x71
    X86_AT(c, 0xf3cc3u);
    { uint32_t v = 0x71u; push32(c, v); }
    // 0f3cc5  call 0xf3c24
    X86_AT(c, 0xf3cc5u);
    push32(c, 0xf3ccau); f_000f3c24(c); X86_RET(c, 0xf3ccau);
    X86_TICK(c, 2);
    // 0f3cca  add esp, 0x30
    X86_AT(c, 0xf3ccau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_f3ccd:
    X86_TICK(c, 9);
    // 0f3ccd  lea ebx, [edi + 0x1c]
    X86_AT(c, 0xf3ccdu);
    c.r[3] = (uint32_t)(c.r[7] + 0x1Cu);
    // 0f3cd0  jmp 0xf44ff
    X86_AT(c, 0xf3cd0u);
    goto L_f44ff;
L_f3cd5:
    X86_TICK(c, 9);
    // 0f3cd5  lea edx, [edi - 1]
    X86_AT(c, 0xf3cd5u);
    c.r[2] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0f3cd8  cmp edx, 0xa
    X86_AT(c, 0xf3cd8u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0f3cdb  ja 0xf44ff
    X86_AT(c, 0xf3cdbu);
    if (x86_cc(c, 7)) { goto L_f44ff; }
    X86_TICK(c, 7);
    // 0f3ce1  jmp dword ptr cs:[edx*4 + 0xf3ce9]
    X86_AT(c, 0xf3ce1u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF3CE9u)));
      switch (t) {
      case 0xf3d15u: goto L_f3d15;
      case 0xf3d2bu: goto L_f3d2b;
      case 0xf3d4bu: goto L_f3d4b;
      case 0xf3d8cu: goto L_f3d8c;
      case 0xf3f3du: goto L_f3f3d;
      case 0xf3f81u: goto L_f3f81;
      case 0xf3fa4u: goto L_f3fa4;
      case 0xf44ffu: goto L_f44ff;
      default: x86_jump(c, t); return; } }
L_f3d15:
    X86_TICK(c, 11);
    // 0f3d15  push 1
    X86_AT(c, 0xf3d15u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3d17  push 1
    X86_AT(c, 0xf3d17u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3d19  call 0xfd448
    X86_AT(c, 0xf3d19u);
    push32(c, 0xf3d1eu); f_000fd448(c); X86_RET(c, 0xf3d1eu);
    X86_TICK(c, 9);
    // 0f3d1e  push 0xffffffff
    X86_AT(c, 0xf3d1eu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f3d20  call 0xe3a84
    X86_AT(c, 0xf3d20u);
    push32(c, 0xf3d25u); f_000e3a84(c); X86_RET(c, 0xf3d25u);
    X86_TICK(c, 11);
    // 0f3d25  push 1
    X86_AT(c, 0xf3d25u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3d27  push 1
    X86_AT(c, 0xf3d27u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3d29  jmp 0xf3d3f
    X86_AT(c, 0xf3d29u);
    goto L_f3d3f;
L_f3d2b:
    X86_TICK(c, 11);
    // 0f3d2b  push 1
    X86_AT(c, 0xf3d2bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3d2d  push 2
    X86_AT(c, 0xf3d2du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f3d2f  call 0xfd448
    X86_AT(c, 0xf3d2fu);
    push32(c, 0xf3d34u); f_000fd448(c); X86_RET(c, 0xf3d34u);
    X86_TICK(c, 9);
    // 0f3d34  push 0xffffffff
    X86_AT(c, 0xf3d34u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f3d36  call 0xe3a84
    X86_AT(c, 0xf3d36u);
    push32(c, 0xf3d3bu); f_000e3a84(c); X86_RET(c, 0xf3d3bu);
    X86_TICK(c, 4);
    // 0f3d3b  push 1
    X86_AT(c, 0xf3d3bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3d3d  push 2
    X86_AT(c, 0xf3d3du);
    { uint32_t v = 0x2u; push32(c, v); }
L_f3d3f:
    X86_TICK(c, 7);
    // 0f3d3f  call 0xfcf5c
    X86_AT(c, 0xf3d3fu);
    push32(c, 0xf3d44u); f_000fcf5c(c); X86_RET(c, 0xf3d44u);
    X86_TICK(c, 9);
    // 0f3d44  mov ebx, edi
    X86_AT(c, 0xf3d44u);
    c.r[3] = c.r[7];
    // 0f3d46  jmp 0xf443a
    X86_AT(c, 0xf3d46u);
    goto L_f443a;
L_f3d4b:
    X86_TICK(c, 11);
    // 0f3d4b  push 1
    X86_AT(c, 0xf3d4bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3d4d  push 3
    X86_AT(c, 0xf3d4du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f3d4f  call 0xfd448
    X86_AT(c, 0xf3d4fu);
    push32(c, 0xf3d54u); f_000fd448(c); X86_RET(c, 0xf3d54u);
    X86_TICK(c, 9);
    // 0f3d54  push 0xffffffff
    X86_AT(c, 0xf3d54u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f3d56  call 0xe3a84
    X86_AT(c, 0xf3d56u);
    push32(c, 0xf3d5bu); f_000e3a84(c); X86_RET(c, 0xf3d5bu);
    X86_TICK(c, 11);
    // 0f3d5b  push 1
    X86_AT(c, 0xf3d5bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3d5d  push 3
    X86_AT(c, 0xf3d5du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f3d5f  call 0xfcf5c
    X86_AT(c, 0xf3d5fu);
    push32(c, 0xf3d64u); f_000fcf5c(c); X86_RET(c, 0xf3d64u);
    X86_TICK(c, 13);
    // 0f3d64  push 0x17
    X86_AT(c, 0xf3d64u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0f3d66  push 0xe
    X86_AT(c, 0xf3d66u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f3d68  push 0x73
    X86_AT(c, 0xf3d68u);
    { uint32_t v = 0x73u; push32(c, v); }
    // 0f3d6a  call 0xf3c24
    X86_AT(c, 0xf3d6au);
    push32(c, 0xf3d6fu); f_000f3c24(c); X86_RET(c, 0xf3d6fu);
    X86_TICK(c, 13);
    // 0f3d6f  push 0x19
    X86_AT(c, 0xf3d6fu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f3d71  push 0xe
    X86_AT(c, 0xf3d71u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f3d73  push 0x73
    X86_AT(c, 0xf3d73u);
    { uint32_t v = 0x73u; push32(c, v); }
    // 0f3d75  call 0xf3c24
    X86_AT(c, 0xf3d75u);
    push32(c, 0xf3d7au); f_000f3c24(c); X86_RET(c, 0xf3d7au);
    X86_TICK(c, 13);
    // 0f3d7a  push 0x1b
    X86_AT(c, 0xf3d7au);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0f3d7c  push 0xe
    X86_AT(c, 0xf3d7cu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f3d7e  push 0x73
    X86_AT(c, 0xf3d7eu);
    { uint32_t v = 0x73u; push32(c, v); }
    // 0f3d80  call 0xf3c24
    X86_AT(c, 0xf3d80u);
    push32(c, 0xf3d85u); f_000f3c24(c); X86_RET(c, 0xf3d85u);
    X86_TICK(c, 9);
    // 0f3d85  mov ebx, edi
    X86_AT(c, 0xf3d85u);
    c.r[3] = c.r[7];
    // 0f3d87  jmp 0xf40fe
    X86_AT(c, 0xf3d87u);
    goto L_f40fe;
L_f3d8c:
    X86_TICK(c, 11);
    // 0f3d8c  push 1
    X86_AT(c, 0xf3d8cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3d8e  push 4
    X86_AT(c, 0xf3d8eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f3d90  call 0xfd448
    X86_AT(c, 0xf3d90u);
    push32(c, 0xf3d95u); f_000fd448(c); X86_RET(c, 0xf3d95u);
    X86_TICK(c, 9);
    // 0f3d95  push 0xffffffff
    X86_AT(c, 0xf3d95u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f3d97  call 0xe3a84
    X86_AT(c, 0xf3d97u);
    push32(c, 0xf3d9cu); f_000e3a84(c); X86_RET(c, 0xf3d9cu);
    X86_TICK(c, 11);
    // 0f3d9c  push 1
    X86_AT(c, 0xf3d9cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3d9e  push 4
    X86_AT(c, 0xf3d9eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f3da0  call 0xfcf5c
    X86_AT(c, 0xf3da0u);
    push32(c, 0xf3da5u); f_000fcf5c(c); X86_RET(c, 0xf3da5u);
    X86_TICK(c, 13);
    // 0f3da5  push 9
    X86_AT(c, 0xf3da5u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f3da7  push 4
    X86_AT(c, 0xf3da7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f3da9  push 0x194
    X86_AT(c, 0xf3da9u);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f3dae  call 0xf3c24
    X86_AT(c, 0xf3daeu);
    push32(c, 0xf3db3u); f_000f3c24(c); X86_RET(c, 0xf3db3u);
    X86_TICK(c, 13);
    // 0f3db3  push 0xb
    X86_AT(c, 0xf3db3u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f3db5  push 3
    X86_AT(c, 0xf3db5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f3db7  push 0x194
    X86_AT(c, 0xf3db7u);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f3dbc  call 0xf3c24
    X86_AT(c, 0xf3dbcu);
    push32(c, 0xf3dc1u); f_000f3c24(c); X86_RET(c, 0xf3dc1u);
    X86_TICK(c, 13);
    // 0f3dc1  push 0xb
    X86_AT(c, 0xf3dc1u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f3dc3  push 4
    X86_AT(c, 0xf3dc3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f3dc5  push 0x194
    X86_AT(c, 0xf3dc5u);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f3dca  call 0xf3c24
    X86_AT(c, 0xf3dcau);
    push32(c, 0xf3dcfu); f_000f3c24(c); X86_RET(c, 0xf3dcfu);
    X86_TICK(c, 13);
    // 0f3dcf  push 0xb
    X86_AT(c, 0xf3dcfu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f3dd1  push 5
    X86_AT(c, 0xf3dd1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f3dd3  push 0x194
    X86_AT(c, 0xf3dd3u);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f3dd8  call 0xf3c24
    X86_AT(c, 0xf3dd8u);
    push32(c, 0xf3dddu); f_000f3c24(c); X86_RET(c, 0xf3dddu);
    X86_TICK(c, 15);
    // 0f3ddd  add esp, 0x44
    X86_AT(c, 0xf3dddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0f3de0  push 9
    X86_AT(c, 0xf3de0u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f3de2  push 9
    X86_AT(c, 0xf3de2u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f3de4  push 0x194
    X86_AT(c, 0xf3de4u);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f3de9  call 0xf3c24
    X86_AT(c, 0xf3de9u);
    push32(c, 0xf3deeu); f_000f3c24(c); X86_RET(c, 0xf3deeu);
    X86_TICK(c, 13);
    // 0f3dee  push 9
    X86_AT(c, 0xf3deeu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f3df0  push 0xa
    X86_AT(c, 0xf3df0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f3df2  push 0x194
    X86_AT(c, 0xf3df2u);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f3df7  call 0xf3c24
    X86_AT(c, 0xf3df7u);
    push32(c, 0xf3dfcu); f_000f3c24(c); X86_RET(c, 0xf3dfcu);
    X86_TICK(c, 13);
    // 0f3dfc  push 9
    X86_AT(c, 0xf3dfcu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f3dfe  push 0xb
    X86_AT(c, 0xf3dfeu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f3e00  push 0x194
    X86_AT(c, 0xf3e00u);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f3e05  call 0xf3c24
    X86_AT(c, 0xf3e05u);
    push32(c, 0xf3e0au); f_000f3c24(c); X86_RET(c, 0xf3e0au);
    X86_TICK(c, 13);
    // 0f3e0a  push 0xb
    X86_AT(c, 0xf3e0au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f3e0c  push 9
    X86_AT(c, 0xf3e0cu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f3e0e  push 0x194
    X86_AT(c, 0xf3e0eu);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f3e13  call 0xf3c24
    X86_AT(c, 0xf3e13u);
    push32(c, 0xf3e18u); f_000f3c24(c); X86_RET(c, 0xf3e18u);
    X86_TICK(c, 13);
    // 0f3e18  push 0xb
    X86_AT(c, 0xf3e18u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f3e1a  push 0xa
    X86_AT(c, 0xf3e1au);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f3e1c  push 0x194
    X86_AT(c, 0xf3e1cu);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f3e21  call 0xf3c24
    X86_AT(c, 0xf3e21u);
    push32(c, 0xf3e26u); f_000f3c24(c); X86_RET(c, 0xf3e26u);
    X86_TICK(c, 15);
    // 0f3e26  add esp, 0x3c
    X86_AT(c, 0xf3e26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f3e29  push 0xb
    X86_AT(c, 0xf3e29u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f3e2b  push 0xb
    X86_AT(c, 0xf3e2bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f3e2d  push 0x194
    X86_AT(c, 0xf3e2du);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f3e32  call 0xf3c24
    X86_AT(c, 0xf3e32u);
    push32(c, 0xf3e37u); f_000f3c24(c); X86_RET(c, 0xf3e37u);
    X86_TICK(c, 13);
    // 0f3e37  push 3
    X86_AT(c, 0xf3e37u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f3e39  push 0x21
    X86_AT(c, 0xf3e39u);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f3e3b  push 0x196
    X86_AT(c, 0xf3e3bu);
    { uint32_t v = 0x196u; push32(c, v); }
    // 0f3e40  call 0xf3c24
    X86_AT(c, 0xf3e40u);
    push32(c, 0xf3e45u); f_000f3c24(c); X86_RET(c, 0xf3e45u);
    X86_TICK(c, 13);
    // 0f3e45  push 3
    X86_AT(c, 0xf3e45u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f3e47  push 0x26
    X86_AT(c, 0xf3e47u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f3e49  push 0x196
    X86_AT(c, 0xf3e49u);
    { uint32_t v = 0x196u; push32(c, v); }
    // 0f3e4e  call 0xf3c24
    X86_AT(c, 0xf3e4eu);
    push32(c, 0xf3e53u); f_000f3c24(c); X86_RET(c, 0xf3e53u);
    X86_TICK(c, 13);
    // 0f3e53  push 3
    X86_AT(c, 0xf3e53u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f3e55  push 0x2b
    X86_AT(c, 0xf3e55u);
    { uint32_t v = 0x2Bu; push32(c, v); }
    // 0f3e57  push 0x196
    X86_AT(c, 0xf3e57u);
    { uint32_t v = 0x196u; push32(c, v); }
    // 0f3e5c  call 0xf3c24
    X86_AT(c, 0xf3e5cu);
    push32(c, 0xf3e61u); f_000f3c24(c); X86_RET(c, 0xf3e61u);
    X86_TICK(c, 15);
    // 0f3e61  add esp, 0x30
    X86_AT(c, 0xf3e61u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0f3e64  push 0xc
    X86_AT(c, 0xf3e64u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f3e66  push 0x22
    X86_AT(c, 0xf3e66u);
    { uint32_t v = 0x22u; push32(c, v); }
    // 0f3e68  push 0x75
    X86_AT(c, 0xf3e68u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0f3e6a  call 0xf3c24
    X86_AT(c, 0xf3e6au);
    push32(c, 0xf3e6fu); f_000f3c24(c); X86_RET(c, 0xf3e6fu);
    X86_TICK(c, 13);
    // 0f3e6f  push 0xe
    X86_AT(c, 0xf3e6fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f3e71  push 0x22
    X86_AT(c, 0xf3e71u);
    { uint32_t v = 0x22u; push32(c, v); }
    // 0f3e73  push 0x75
    X86_AT(c, 0xf3e73u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0f3e75  call 0xf3c24
    X86_AT(c, 0xf3e75u);
    push32(c, 0xf3e7au); f_000f3c24(c); X86_RET(c, 0xf3e7au);
    X86_TICK(c, 13);
    // 0f3e7a  push 0x10
    X86_AT(c, 0xf3e7au);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0f3e7c  push 0x22
    X86_AT(c, 0xf3e7cu);
    { uint32_t v = 0x22u; push32(c, v); }
    // 0f3e7e  push 0x75
    X86_AT(c, 0xf3e7eu);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0f3e80  call 0xf3c24
    X86_AT(c, 0xf3e80u);
    push32(c, 0xf3e85u); f_000f3c24(c); X86_RET(c, 0xf3e85u);
    X86_TICK(c, 13);
    // 0f3e85  push 0x1e
    X86_AT(c, 0xf3e85u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0f3e87  push 0x20
    X86_AT(c, 0xf3e87u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f3e89  push 0x198
    X86_AT(c, 0xf3e89u);
    { uint32_t v = 0x198u; push32(c, v); }
    // 0f3e8e  call 0xf3c24
    X86_AT(c, 0xf3e8eu);
    push32(c, 0xf3e93u); f_000f3c24(c); X86_RET(c, 0xf3e93u);
    X86_TICK(c, 13);
    // 0f3e93  push 0x1f
    X86_AT(c, 0xf3e93u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f3e95  push 0x1f
    X86_AT(c, 0xf3e95u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f3e97  push 0x198
    X86_AT(c, 0xf3e97u);
    { uint32_t v = 0x198u; push32(c, v); }
    // 0f3e9c  call 0xf3c24
    X86_AT(c, 0xf3e9cu);
    push32(c, 0xf3ea1u); f_000f3c24(c); X86_RET(c, 0xf3ea1u);
    X86_TICK(c, 15);
    // 0f3ea1  add esp, 0x3c
    X86_AT(c, 0xf3ea1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f3ea4  push 0x1f
    X86_AT(c, 0xf3ea4u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f3ea6  push 0x21
    X86_AT(c, 0xf3ea6u);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f3ea8  push 0x198
    X86_AT(c, 0xf3ea8u);
    { uint32_t v = 0x198u; push32(c, v); }
    // 0f3ead  call 0xf3c24
    X86_AT(c, 0xf3eadu);
    push32(c, 0xf3eb2u); f_000f3c24(c); X86_RET(c, 0xf3eb2u);
    X86_TICK(c, 13);
    // 0f3eb2  push 0x20
    X86_AT(c, 0xf3eb2u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f3eb4  push 0x1e
    X86_AT(c, 0xf3eb4u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0f3eb6  push 0x198
    X86_AT(c, 0xf3eb6u);
    { uint32_t v = 0x198u; push32(c, v); }
    // 0f3ebb  call 0xf3c24
    X86_AT(c, 0xf3ebbu);
    push32(c, 0xf3ec0u); f_000f3c24(c); X86_RET(c, 0xf3ec0u);
    X86_TICK(c, 13);
    // 0f3ec0  push 0x20
    X86_AT(c, 0xf3ec0u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f3ec2  push 0x20
    X86_AT(c, 0xf3ec2u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f3ec4  push 0x198
    X86_AT(c, 0xf3ec4u);
    { uint32_t v = 0x198u; push32(c, v); }
    // 0f3ec9  call 0xf3c24
    X86_AT(c, 0xf3ec9u);
    push32(c, 0xf3eceu); f_000f3c24(c); X86_RET(c, 0xf3eceu);
    X86_TICK(c, 13);
    // 0f3ece  push 0x21
    X86_AT(c, 0xf3eceu);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f3ed0  push 0x1f
    X86_AT(c, 0xf3ed0u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f3ed2  push 0x198
    X86_AT(c, 0xf3ed2u);
    { uint32_t v = 0x198u; push32(c, v); }
    // 0f3ed7  call 0xf3c24
    X86_AT(c, 0xf3ed7u);
    push32(c, 0xf3edcu); f_000f3c24(c); X86_RET(c, 0xf3edcu);
    X86_TICK(c, 13);
    // 0f3edc  push 0x1e
    X86_AT(c, 0xf3edcu);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0f3ede  push 0x1f
    X86_AT(c, 0xf3edeu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f3ee0  push 0x199
    X86_AT(c, 0xf3ee0u);
    { uint32_t v = 0x199u; push32(c, v); }
    // 0f3ee5  call 0xf3c24
    X86_AT(c, 0xf3ee5u);
    push32(c, 0xf3eeau); f_000f3c24(c); X86_RET(c, 0xf3eeau);
    X86_TICK(c, 15);
    // 0f3eea  add esp, 0x3c
    X86_AT(c, 0xf3eeau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f3eed  push 0x1f
    X86_AT(c, 0xf3eedu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f3eef  push 0x1e
    X86_AT(c, 0xf3eefu);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0f3ef1  push 0x199
    X86_AT(c, 0xf3ef1u);
    { uint32_t v = 0x199u; push32(c, v); }
    // 0f3ef6  call 0xf3c24
    X86_AT(c, 0xf3ef6u);
    push32(c, 0xf3efbu); f_000f3c24(c); X86_RET(c, 0xf3efbu);
    X86_TICK(c, 13);
    // 0f3efb  push 0x1f
    X86_AT(c, 0xf3efbu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f3efd  push 0x20
    X86_AT(c, 0xf3efdu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f3eff  push 0x199
    X86_AT(c, 0xf3effu);
    { uint32_t v = 0x199u; push32(c, v); }
    // 0f3f04  call 0xf3c24
    X86_AT(c, 0xf3f04u);
    push32(c, 0xf3f09u); f_000f3c24(c); X86_RET(c, 0xf3f09u);
    X86_TICK(c, 13);
    // 0f3f09  push 0x20
    X86_AT(c, 0xf3f09u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f3f0b  push 0x1f
    X86_AT(c, 0xf3f0bu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f3f0d  push 0x199
    X86_AT(c, 0xf3f0du);
    { uint32_t v = 0x199u; push32(c, v); }
    // 0f3f12  call 0xf3c24
    X86_AT(c, 0xf3f12u);
    push32(c, 0xf3f17u); f_000f3c24(c); X86_RET(c, 0xf3f17u);
    X86_TICK(c, 13);
    // 0f3f17  push 0x20
    X86_AT(c, 0xf3f17u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f3f19  push 0x21
    X86_AT(c, 0xf3f19u);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f3f1b  push 0x199
    X86_AT(c, 0xf3f1bu);
    { uint32_t v = 0x199u; push32(c, v); }
    // 0f3f20  call 0xf3c24
    X86_AT(c, 0xf3f20u);
    push32(c, 0xf3f25u); f_000f3c24(c); X86_RET(c, 0xf3f25u);
    X86_TICK(c, 13);
    // 0f3f25  push 0x21
    X86_AT(c, 0xf3f25u);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f3f27  push 0x20
    X86_AT(c, 0xf3f27u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f3f29  push 0x199
    X86_AT(c, 0xf3f29u);
    { uint32_t v = 0x199u; push32(c, v); }
    // 0f3f2e  call 0xf3c24
    X86_AT(c, 0xf3f2eu);
    push32(c, 0xf3f33u); f_000f3c24(c); X86_RET(c, 0xf3f33u);
    X86_TICK(c, 11);
    // 0f3f33  add esp, 0x3c
    X86_AT(c, 0xf3f33u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f3f36  mov ebx, edi
    X86_AT(c, 0xf3f36u);
    c.r[3] = c.r[7];
    // 0f3f38  jmp 0xf44ff
    X86_AT(c, 0xf3f38u);
    goto L_f44ff;
L_f3f3d:
    X86_TICK(c, 11);
    // 0f3f3d  push 1
    X86_AT(c, 0xf3f3du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3f3f  push 5
    X86_AT(c, 0xf3f3fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f3f41  call 0xfd448
    X86_AT(c, 0xf3f41u);
    push32(c, 0xf3f46u); f_000fd448(c); X86_RET(c, 0xf3f46u);
    X86_TICK(c, 9);
    // 0f3f46  push 0xffffffff
    X86_AT(c, 0xf3f46u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f3f48  call 0xe3a84
    X86_AT(c, 0xf3f48u);
    push32(c, 0xf3f4du); f_000e3a84(c); X86_RET(c, 0xf3f4du);
    X86_TICK(c, 11);
    // 0f3f4d  push 1
    X86_AT(c, 0xf3f4du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3f4f  push 5
    X86_AT(c, 0xf3f4fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f3f51  call 0xfcf5c
    X86_AT(c, 0xf3f51u);
    push32(c, 0xf3f56u); f_000fcf5c(c); X86_RET(c, 0xf3f56u);
    X86_TICK(c, 13);
    // 0f3f56  push 0x24
    X86_AT(c, 0xf3f56u);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0f3f58  push 0x2a
    X86_AT(c, 0xf3f58u);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0f3f5a  push 0x75
    X86_AT(c, 0xf3f5au);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0f3f5c  call 0xf3c24
    X86_AT(c, 0xf3f5cu);
    push32(c, 0xf3f61u); f_000f3c24(c); X86_RET(c, 0xf3f61u);
    X86_TICK(c, 13);
    // 0f3f61  push 0x26
    X86_AT(c, 0xf3f61u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f3f63  push 0x2a
    X86_AT(c, 0xf3f63u);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0f3f65  push 0x75
    X86_AT(c, 0xf3f65u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0f3f67  call 0xf3c24
    X86_AT(c, 0xf3f67u);
    push32(c, 0xf3f6cu); f_000f3c24(c); X86_RET(c, 0xf3f6cu);
    X86_TICK(c, 13);
    // 0f3f6c  push 0x28
    X86_AT(c, 0xf3f6cu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0f3f6e  push 0x2a
    X86_AT(c, 0xf3f6eu);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0f3f70  push 0x75
    X86_AT(c, 0xf3f70u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0f3f72  call 0xf3c24
    X86_AT(c, 0xf3f72u);
    push32(c, 0xf3f77u); f_000f3c24(c); X86_RET(c, 0xf3f77u);
    X86_TICK(c, 9);
    // 0f3f77  mov ebx, 5
    X86_AT(c, 0xf3f77u);
    c.r[3] = 0x5u;
    // 0f3f7c  jmp 0xf40fe
    X86_AT(c, 0xf3f7cu);
    goto L_f40fe;
L_f3f81:
    X86_TICK(c, 11);
    // 0f3f81  push 1
    X86_AT(c, 0xf3f81u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3f83  push 6
    X86_AT(c, 0xf3f83u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f3f85  call 0xfd448
    X86_AT(c, 0xf3f85u);
    push32(c, 0xf3f8au); f_000fd448(c); X86_RET(c, 0xf3f8au);
    X86_TICK(c, 9);
    // 0f3f8a  push 0xffffffff
    X86_AT(c, 0xf3f8au);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f3f8c  call 0xe3a84
    X86_AT(c, 0xf3f8cu);
    push32(c, 0xf3f91u); f_000e3a84(c); X86_RET(c, 0xf3f91u);
    X86_TICK(c, 11);
    // 0f3f91  push 1
    X86_AT(c, 0xf3f91u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3f93  push 6
    X86_AT(c, 0xf3f93u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f3f95  call 0xfcf5c
    X86_AT(c, 0xf3f95u);
    push32(c, 0xf3f9au); f_000fcf5c(c); X86_RET(c, 0xf3f9au);
    X86_TICK(c, 9);
    // 0f3f9a  mov ebx, 6
    X86_AT(c, 0xf3f9au);
    c.r[3] = 0x6u;
    // 0f3f9f  jmp 0xf443a
    X86_AT(c, 0xf3f9fu);
    goto L_f443a;
L_f3fa4:
    X86_TICK(c, 11);
    // 0f3fa4  push 1
    X86_AT(c, 0xf3fa4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3fa6  push 7
    X86_AT(c, 0xf3fa6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3fa8  call 0xfd448
    X86_AT(c, 0xf3fa8u);
    push32(c, 0xf3fadu); f_000fd448(c); X86_RET(c, 0xf3fadu);
    X86_TICK(c, 9);
    // 0f3fad  push 0xffffffff
    X86_AT(c, 0xf3fadu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f3faf  call 0xe3a84
    X86_AT(c, 0xf3fafu);
    push32(c, 0xf3fb4u); f_000e3a84(c); X86_RET(c, 0xf3fb4u);
    X86_TICK(c, 11);
    // 0f3fb4  push 1
    X86_AT(c, 0xf3fb4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f3fb6  push 7
    X86_AT(c, 0xf3fb6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3fb8  call 0xfcf5c
    X86_AT(c, 0xf3fb8u);
    push32(c, 0xf3fbdu); f_000fcf5c(c); X86_RET(c, 0xf3fbdu);
    X86_TICK(c, 9);
    // 0f3fbd  mov ebx, 7
    X86_AT(c, 0xf3fbdu);
    c.r[3] = 0x7u;
    // 0f3fc2  jmp 0xf443a
    X86_AT(c, 0xf3fc2u);
    goto L_f443a;
L_f3fc7:
    X86_TICK(c, 9);
    // 0f3fc7  lea edx, [edi - 2]
    X86_AT(c, 0xf3fc7u);
    c.r[2] = (uint32_t)(c.r[7] + 0xFFFFFFFEu);
    // 0f3fca  cmp edx, 0xb
    X86_AT(c, 0xf3fcau);
    (void)x86_sub(c, c.r[2], 0xBu, 0, 4);
    // 0f3fcd  ja 0xf44ff
    X86_AT(c, 0xf3fcdu);
    if (x86_cc(c, 7)) { goto L_f44ff; }
    X86_TICK(c, 7);
    // 0f3fd3  jmp dword ptr cs:[edx*4 + 0xf3fdb]
    X86_AT(c, 0xf3fd3u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF3FDBu)));
      switch (t) {
      case 0xf400bu: goto L_f400b;
      case 0xf402eu: goto L_f402e;
      case 0xf409cu: goto L_f409c;
      case 0xf40bfu: goto L_f40bf;
      case 0xf4106u: goto L_f4106;
      case 0xf44ffu: goto L_f44ff;
      default: x86_jump(c, t); return; } }
L_f400b:
    X86_TICK(c, 11);
    // 0f400b  push 2
    X86_AT(c, 0xf400bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f400d  push 2
    X86_AT(c, 0xf400du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f400f  call 0xfd448
    X86_AT(c, 0xf400fu);
    push32(c, 0xf4014u); f_000fd448(c); X86_RET(c, 0xf4014u);
    X86_TICK(c, 9);
    // 0f4014  push 0xffffffff
    X86_AT(c, 0xf4014u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f4016  call 0xe3a84
    X86_AT(c, 0xf4016u);
    push32(c, 0xf401bu); f_000e3a84(c); X86_RET(c, 0xf401bu);
    X86_TICK(c, 11);
    // 0f401b  push 2
    X86_AT(c, 0xf401bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f401d  push 2
    X86_AT(c, 0xf401du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f401f  call 0xfcf5c
    X86_AT(c, 0xf401fu);
    push32(c, 0xf4024u); f_000fcf5c(c); X86_RET(c, 0xf4024u);
    X86_TICK(c, 9);
    // 0f4024  mov ebx, 9
    X86_AT(c, 0xf4024u);
    c.r[3] = 0x9u;
    // 0f4029  jmp 0xf443a
    X86_AT(c, 0xf4029u);
    goto L_f443a;
L_f402e:
    X86_TICK(c, 11);
    // 0f402e  push 2
    X86_AT(c, 0xf402eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4030  push 3
    X86_AT(c, 0xf4030u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f4032  call 0xfd448
    X86_AT(c, 0xf4032u);
    push32(c, 0xf4037u); f_000fd448(c); X86_RET(c, 0xf4037u);
    X86_TICK(c, 9);
    // 0f4037  push 0xffffffff
    X86_AT(c, 0xf4037u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f4039  call 0xe3a84
    X86_AT(c, 0xf4039u);
    push32(c, 0xf403eu); f_000e3a84(c); X86_RET(c, 0xf403eu);
    X86_TICK(c, 11);
    // 0f403e  push 2
    X86_AT(c, 0xf403eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4040  push 3
    X86_AT(c, 0xf4040u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f4042  call 0xfcf5c
    X86_AT(c, 0xf4042u);
    push32(c, 0xf4047u); f_000fcf5c(c); X86_RET(c, 0xf4047u);
    X86_TICK(c, 13);
    // 0f4047  push 0xb
    X86_AT(c, 0xf4047u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f4049  push 4
    X86_AT(c, 0xf4049u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f404b  push 0x194
    X86_AT(c, 0xf404bu);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f4050  call 0xf3c24
    X86_AT(c, 0xf4050u);
    push32(c, 0xf4055u); f_000f3c24(c); X86_RET(c, 0xf4055u);
    X86_TICK(c, 13);
    // 0f4055  push 0x32
    X86_AT(c, 0xf4055u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0f4057  push 0x3a
    X86_AT(c, 0xf4057u);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0f4059  push 0x71
    X86_AT(c, 0xf4059u);
    { uint32_t v = 0x71u; push32(c, v); }
    // 0f405b  call 0xf3c24
    X86_AT(c, 0xf405bu);
    push32(c, 0xf4060u); f_000f3c24(c); X86_RET(c, 0xf4060u);
    X86_TICK(c, 13);
    // 0f4060  push 0x34
    X86_AT(c, 0xf4060u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0f4062  push 0x3a
    X86_AT(c, 0xf4062u);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0f4064  push 0x71
    X86_AT(c, 0xf4064u);
    { uint32_t v = 0x71u; push32(c, v); }
    // 0f4066  call 0xf3c24
    X86_AT(c, 0xf4066u);
    push32(c, 0xf406bu); f_000f3c24(c); X86_RET(c, 0xf406bu);
    X86_TICK(c, 13);
    // 0f406b  push 0x36
    X86_AT(c, 0xf406bu);
    { uint32_t v = 0x36u; push32(c, v); }
    // 0f406d  push 0x3a
    X86_AT(c, 0xf406du);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0f406f  push 0x71
    X86_AT(c, 0xf406fu);
    { uint32_t v = 0x71u; push32(c, v); }
    // 0f4071  call 0xf3c24
    X86_AT(c, 0xf4071u);
    push32(c, 0xf4076u); f_000f3c24(c); X86_RET(c, 0xf4076u);
    X86_TICK(c, 15);
    // 0f4076  add esp, 0x44
    X86_AT(c, 0xf4076u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0f4079  push 0x38
    X86_AT(c, 0xf4079u);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0f407b  push 0x3a
    X86_AT(c, 0xf407bu);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0f407d  push 0x71
    X86_AT(c, 0xf407du);
    { uint32_t v = 0x71u; push32(c, v); }
    // 0f407f  call 0xf3c24
    X86_AT(c, 0xf407fu);
    push32(c, 0xf4084u); f_000f3c24(c); X86_RET(c, 0xf4084u);
    X86_TICK(c, 13);
    // 0f4084  push 0x3a
    X86_AT(c, 0xf4084u);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0f4086  push 0x3a
    X86_AT(c, 0xf4086u);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0f4088  push 0x71
    X86_AT(c, 0xf4088u);
    { uint32_t v = 0x71u; push32(c, v); }
    // 0f408a  call 0xf3c24
    X86_AT(c, 0xf408au);
    push32(c, 0xf408fu); f_000f3c24(c); X86_RET(c, 0xf408fu);
    X86_TICK(c, 11);
    // 0f408f  mov ebx, 0xa
    X86_AT(c, 0xf408fu);
    c.r[3] = 0xAu;
    // 0f4094  add esp, 0x18
    X86_AT(c, 0xf4094u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f4097  jmp 0xf44ff
    X86_AT(c, 0xf4097u);
    goto L_f44ff;
L_f409c:
    X86_TICK(c, 11);
    // 0f409c  push 1
    X86_AT(c, 0xf409cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f409e  push 8
    X86_AT(c, 0xf409eu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f40a0  call 0xfd448
    X86_AT(c, 0xf40a0u);
    push32(c, 0xf40a5u); f_000fd448(c); X86_RET(c, 0xf40a5u);
    X86_TICK(c, 9);
    // 0f40a5  push 0xffffffff
    X86_AT(c, 0xf40a5u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f40a7  call 0xe3a84
    X86_AT(c, 0xf40a7u);
    push32(c, 0xf40acu); f_000e3a84(c); X86_RET(c, 0xf40acu);
    X86_TICK(c, 11);
    // 0f40ac  push 1
    X86_AT(c, 0xf40acu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f40ae  push 8
    X86_AT(c, 0xf40aeu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f40b0  call 0xfcf5c
    X86_AT(c, 0xf40b0u);
    push32(c, 0xf40b5u); f_000fcf5c(c); X86_RET(c, 0xf40b5u);
    X86_TICK(c, 9);
    // 0f40b5  mov ebx, 0xb
    X86_AT(c, 0xf40b5u);
    c.r[3] = 0xBu;
    // 0f40ba  jmp 0xf443a
    X86_AT(c, 0xf40bau);
    goto L_f443a;
L_f40bf:
    X86_TICK(c, 11);
    // 0f40bf  push 2
    X86_AT(c, 0xf40bfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f40c1  push 8
    X86_AT(c, 0xf40c1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f40c3  call 0xfd448
    X86_AT(c, 0xf40c3u);
    push32(c, 0xf40c8u); f_000fd448(c); X86_RET(c, 0xf40c8u);
    X86_TICK(c, 9);
    // 0f40c8  push 0xffffffff
    X86_AT(c, 0xf40c8u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f40ca  call 0xe3a84
    X86_AT(c, 0xf40cau);
    push32(c, 0xf40cfu); f_000e3a84(c); X86_RET(c, 0xf40cfu);
    X86_TICK(c, 11);
    // 0f40cf  push 2
    X86_AT(c, 0xf40cfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f40d1  push 8
    X86_AT(c, 0xf40d1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f40d3  call 0xfcf5c
    X86_AT(c, 0xf40d3u);
    push32(c, 0xf40d8u); f_000fcf5c(c); X86_RET(c, 0xf40d8u);
    X86_TICK(c, 13);
    // 0f40d8  push 0x36
    X86_AT(c, 0xf40d8u);
    { uint32_t v = 0x36u; push32(c, v); }
    // 0f40da  push 0x30
    X86_AT(c, 0xf40dau);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0f40dc  push 0x6f
    X86_AT(c, 0xf40dcu);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0f40de  call 0xf3c24
    X86_AT(c, 0xf40deu);
    push32(c, 0xf40e3u); f_000f3c24(c); X86_RET(c, 0xf40e3u);
    X86_TICK(c, 13);
    // 0f40e3  push 0x38
    X86_AT(c, 0xf40e3u);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0f40e5  push 0x30
    X86_AT(c, 0xf40e5u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0f40e7  push 0x6f
    X86_AT(c, 0xf40e7u);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0f40e9  call 0xf3c24
    X86_AT(c, 0xf40e9u);
    push32(c, 0xf40eeu); f_000f3c24(c); X86_RET(c, 0xf40eeu);
    X86_TICK(c, 13);
    // 0f40ee  push 0x3a
    X86_AT(c, 0xf40eeu);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0f40f0  push 0x30
    X86_AT(c, 0xf40f0u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0f40f2  push 0x6f
    X86_AT(c, 0xf40f2u);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0f40f4  call 0xf3c24
    X86_AT(c, 0xf40f4u);
    push32(c, 0xf40f9u); f_000f3c24(c); X86_RET(c, 0xf40f9u);
    X86_TICK(c, 2);
    // 0f40f9  mov ebx, 0xc
    X86_AT(c, 0xf40f9u);
    c.r[3] = 0xCu;
L_f40fe:
    X86_TICK(c, 9);
    // 0f40fe  add esp, 0x38
    X86_AT(c, 0xf40feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0f4101  jmp 0xf44ff
    X86_AT(c, 0xf4101u);
    goto L_f44ff;
L_f4106:
    X86_TICK(c, 11);
    // 0f4106  push 2
    X86_AT(c, 0xf4106u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4108  push 9
    X86_AT(c, 0xf4108u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f410a  call 0xfd448
    X86_AT(c, 0xf410au);
    push32(c, 0xf410fu); f_000fd448(c); X86_RET(c, 0xf410fu);
    X86_TICK(c, 9);
    // 0f410f  push 0xffffffff
    X86_AT(c, 0xf410fu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f4111  call 0xe3a84
    X86_AT(c, 0xf4111u);
    push32(c, 0xf4116u); f_000e3a84(c); X86_RET(c, 0xf4116u);
    X86_TICK(c, 11);
    // 0f4116  push 2
    X86_AT(c, 0xf4116u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4118  push 9
    X86_AT(c, 0xf4118u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f411a  call 0xfcf5c
    X86_AT(c, 0xf411au);
    push32(c, 0xf411fu); f_000fcf5c(c); X86_RET(c, 0xf411fu);
    X86_TICK(c, 13);
    // 0f411f  push 0x33
    X86_AT(c, 0xf411fu);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f4121  push 0x37
    X86_AT(c, 0xf4121u);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0f4123  push 0x73
    X86_AT(c, 0xf4123u);
    { uint32_t v = 0x73u; push32(c, v); }
    // 0f4125  call 0xf3c24
    X86_AT(c, 0xf4125u);
    push32(c, 0xf412au); f_000f3c24(c); X86_RET(c, 0xf412au);
    X86_TICK(c, 13);
    // 0f412a  push 0x35
    X86_AT(c, 0xf412au);
    { uint32_t v = 0x35u; push32(c, v); }
    // 0f412c  push 0x37
    X86_AT(c, 0xf412cu);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0f412e  push 0x73
    X86_AT(c, 0xf412eu);
    { uint32_t v = 0x73u; push32(c, v); }
    // 0f4130  call 0xf3c24
    X86_AT(c, 0xf4130u);
    push32(c, 0xf4135u); f_000f3c24(c); X86_RET(c, 0xf4135u);
    X86_TICK(c, 13);
    // 0f4135  push 0x2f
    X86_AT(c, 0xf4135u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0f4137  push 0x3c
    X86_AT(c, 0xf4137u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0f4139  push 0x6f
    X86_AT(c, 0xf4139u);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0f413b  call 0xf3c24
    X86_AT(c, 0xf413bu);
    push32(c, 0xf4140u); f_000f3c24(c); X86_RET(c, 0xf4140u);
    X86_TICK(c, 13);
    // 0f4140  push 0x31
    X86_AT(c, 0xf4140u);
    { uint32_t v = 0x31u; push32(c, v); }
    // 0f4142  push 0x3c
    X86_AT(c, 0xf4142u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0f4144  push 0x6f
    X86_AT(c, 0xf4144u);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0f4146  call 0xf3c24
    X86_AT(c, 0xf4146u);
    push32(c, 0xf414bu); f_000f3c24(c); X86_RET(c, 0xf414bu);
    X86_TICK(c, 15);
    // 0f414b  add esp, 0x44
    X86_AT(c, 0xf414bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0f414e  push 0x33
    X86_AT(c, 0xf414eu);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f4150  push 0x3c
    X86_AT(c, 0xf4150u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0f4152  push 0x6f
    X86_AT(c, 0xf4152u);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0f4154  call 0xf3c24
    X86_AT(c, 0xf4154u);
    push32(c, 0xf4159u); f_000f3c24(c); X86_RET(c, 0xf4159u);
    X86_TICK(c, 9);
    // 0f4159  mov ebx, 0xd
    X86_AT(c, 0xf4159u);
    c.r[3] = 0xDu;
    // 0f415e  jmp 0xf434a
    X86_AT(c, 0xf415eu);
    goto L_f434a;
L_f4163:
    X86_TICK(c, 9);
    // 0f4163  mov edx, edi
    X86_AT(c, 0xf4163u);
    c.r[2] = c.r[7];
    // 0f4165  cmp edx, 0xd
    X86_AT(c, 0xf4165u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0f4168  ja 0xf44ff
    X86_AT(c, 0xf4168u);
    if (x86_cc(c, 7)) { goto L_f44ff; }
    X86_TICK(c, 7);
    // 0f416e  jmp dword ptr cs:[edx*4 + 0xf4176]
    X86_AT(c, 0xf416eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF4176u)));
      switch (t) {
      case 0xf41aeu: goto L_f41ae;
      case 0xf4352u: goto L_f4352;
      case 0xf43fcu: goto L_f43fc;
      case 0xf441cu: goto L_f441c;
      case 0xf44ffu: goto L_f44ff;
      default: x86_jump(c, t); return; } }
L_f41ae:
    X86_TICK(c, 11);
    // 0f41ae  push 3
    X86_AT(c, 0xf41aeu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f41b0  push 0
    X86_AT(c, 0xf41b0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f41b2  call 0xfd448
    X86_AT(c, 0xf41b2u);
    push32(c, 0xf41b7u); f_000fd448(c); X86_RET(c, 0xf41b7u);
    X86_TICK(c, 9);
    // 0f41b7  push 0xffffffff
    X86_AT(c, 0xf41b7u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f41b9  call 0xe3a84
    X86_AT(c, 0xf41b9u);
    push32(c, 0xf41beu); f_000e3a84(c); X86_RET(c, 0xf41beu);
    X86_TICK(c, 11);
    // 0f41be  push 3
    X86_AT(c, 0xf41beu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f41c0  push 0
    X86_AT(c, 0xf41c0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f41c2  call 0xfcf5c
    X86_AT(c, 0xf41c2u);
    push32(c, 0xf41c7u); f_000fcf5c(c); X86_RET(c, 0xf41c7u);
    X86_TICK(c, 13);
    // 0f41c7  push 0xe
    X86_AT(c, 0xf41c7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f41c9  push 0x2b
    X86_AT(c, 0xf41c9u);
    { uint32_t v = 0x2Bu; push32(c, v); }
    // 0f41cb  push 0x13c
    X86_AT(c, 0xf41cbu);
    { uint32_t v = 0x13Cu; push32(c, v); }
    // 0f41d0  call 0xf3c24
    X86_AT(c, 0xf41d0u);
    push32(c, 0xf41d5u); f_000f3c24(c); X86_RET(c, 0xf41d5u);
    X86_TICK(c, 13);
    // 0f41d5  push 0x10
    X86_AT(c, 0xf41d5u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0f41d7  push 0x2b
    X86_AT(c, 0xf41d7u);
    { uint32_t v = 0x2Bu; push32(c, v); }
    // 0f41d9  push 0x160
    X86_AT(c, 0xf41d9u);
    { uint32_t v = 0x160u; push32(c, v); }
    // 0f41de  call 0xf3c24
    X86_AT(c, 0xf41deu);
    push32(c, 0xf41e3u); f_000f3c24(c); X86_RET(c, 0xf41e3u);
    X86_TICK(c, 13);
    // 0f41e3  push 0x12
    X86_AT(c, 0xf41e3u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0f41e5  push 0x2b
    X86_AT(c, 0xf41e5u);
    { uint32_t v = 0x2Bu; push32(c, v); }
    // 0f41e7  push 0x154
    X86_AT(c, 0xf41e7u);
    { uint32_t v = 0x154u; push32(c, v); }
    // 0f41ec  call 0xf3c24
    X86_AT(c, 0xf41ecu);
    push32(c, 0xf41f1u); f_000f3c24(c); X86_RET(c, 0xf41f1u);
    X86_TICK(c, 13);
    // 0f41f1  push 0x14
    X86_AT(c, 0xf41f1u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0f41f3  push 0x2b
    X86_AT(c, 0xf41f3u);
    { uint32_t v = 0x2Bu; push32(c, v); }
    // 0f41f5  push 0x162
    X86_AT(c, 0xf41f5u);
    { uint32_t v = 0x162u; push32(c, v); }
    // 0f41fa  call 0xf3c24
    X86_AT(c, 0xf41fau);
    push32(c, 0xf41ffu); f_000f3c24(c); X86_RET(c, 0xf41ffu);
    X86_TICK(c, 15);
    // 0f41ff  add esp, 0x44
    X86_AT(c, 0xf41ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0f4202  push 0xe
    X86_AT(c, 0xf4202u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f4204  push 0x2d
    X86_AT(c, 0xf4204u);
    { uint32_t v = 0x2Du; push32(c, v); }
    // 0f4206  push 0x13c
    X86_AT(c, 0xf4206u);
    { uint32_t v = 0x13Cu; push32(c, v); }
    // 0f420b  call 0xf3c24
    X86_AT(c, 0xf420bu);
    push32(c, 0xf4210u); f_000f3c24(c); X86_RET(c, 0xf4210u);
    X86_TICK(c, 13);
    // 0f4210  push 0x10
    X86_AT(c, 0xf4210u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0f4212  push 0x2d
    X86_AT(c, 0xf4212u);
    { uint32_t v = 0x2Du; push32(c, v); }
    // 0f4214  push 0x160
    X86_AT(c, 0xf4214u);
    { uint32_t v = 0x160u; push32(c, v); }
    // 0f4219  call 0xf3c24
    X86_AT(c, 0xf4219u);
    push32(c, 0xf421eu); f_000f3c24(c); X86_RET(c, 0xf421eu);
    X86_TICK(c, 13);
    // 0f421e  push 0x12
    X86_AT(c, 0xf421eu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0f4220  push 0x2d
    X86_AT(c, 0xf4220u);
    { uint32_t v = 0x2Du; push32(c, v); }
    // 0f4222  push 0x154
    X86_AT(c, 0xf4222u);
    { uint32_t v = 0x154u; push32(c, v); }
    // 0f4227  call 0xf3c24
    X86_AT(c, 0xf4227u);
    push32(c, 0xf422cu); f_000f3c24(c); X86_RET(c, 0xf422cu);
    X86_TICK(c, 13);
    // 0f422c  push 0x14
    X86_AT(c, 0xf422cu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0f422e  push 0x2d
    X86_AT(c, 0xf422eu);
    { uint32_t v = 0x2Du; push32(c, v); }
    // 0f4230  push 0x162
    X86_AT(c, 0xf4230u);
    { uint32_t v = 0x162u; push32(c, v); }
    // 0f4235  call 0xf3c24
    X86_AT(c, 0xf4235u);
    push32(c, 0xf423au); f_000f3c24(c); X86_RET(c, 0xf423au);
    X86_TICK(c, 13);
    // 0f423a  push 0x19
    X86_AT(c, 0xf423au);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f423c  push 0x2b
    X86_AT(c, 0xf423cu);
    { uint32_t v = 0x2Bu; push32(c, v); }
    // 0f423e  push 0x13a
    X86_AT(c, 0xf423eu);
    { uint32_t v = 0x13Au; push32(c, v); }
    // 0f4243  call 0xf3c24
    X86_AT(c, 0xf4243u);
    push32(c, 0xf4248u); f_000f3c24(c); X86_RET(c, 0xf4248u);
    X86_TICK(c, 15);
    // 0f4248  add esp, 0x3c
    X86_AT(c, 0xf4248u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f424b  push 0x19
    X86_AT(c, 0xf424bu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f424d  push 0x2d
    X86_AT(c, 0xf424du);
    { uint32_t v = 0x2Du; push32(c, v); }
    // 0f424f  push 0x138
    X86_AT(c, 0xf424fu);
    { uint32_t v = 0x138u; push32(c, v); }
    // 0f4254  call 0xf3c24
    X86_AT(c, 0xf4254u);
    push32(c, 0xf4259u); f_000f3c24(c); X86_RET(c, 0xf4259u);
    X86_TICK(c, 13);
    // 0f4259  push 0x19
    X86_AT(c, 0xf4259u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f425b  push 0x2f
    X86_AT(c, 0xf425bu);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0f425d  push 0x16a
    X86_AT(c, 0xf425du);
    { uint32_t v = 0x16Au; push32(c, v); }
    // 0f4262  call 0xf3c24
    X86_AT(c, 0xf4262u);
    push32(c, 0xf4267u); f_000f3c24(c); X86_RET(c, 0xf4267u);
    X86_TICK(c, 13);
    // 0f4267  push 0x19
    X86_AT(c, 0xf4267u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f4269  push 0x31
    X86_AT(c, 0xf4269u);
    { uint32_t v = 0x31u; push32(c, v); }
    // 0f426b  push 0x136
    X86_AT(c, 0xf426bu);
    { uint32_t v = 0x136u; push32(c, v); }
    // 0f4270  call 0xf3c24
    X86_AT(c, 0xf4270u);
    push32(c, 0xf4275u); f_000f3c24(c); X86_RET(c, 0xf4275u);
    X86_TICK(c, 15);
    // 0f4275  add esp, 0x24
    X86_AT(c, 0xf4275u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0f4278  push 0x1b
    X86_AT(c, 0xf4278u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0f427a  push 0x2b
    X86_AT(c, 0xf427au);
    { uint32_t v = 0x2Bu; push32(c, v); }
    // 0f427c  push 0x12e
    X86_AT(c, 0xf427cu);
    { uint32_t v = 0x12Eu; push32(c, v); }
    // 0f4281  call 0xf3c24
    X86_AT(c, 0xf4281u);
    push32(c, 0xf4286u); f_000f3c24(c); X86_RET(c, 0xf4286u);
    X86_TICK(c, 13);
    // 0f4286  push 0x1b
    X86_AT(c, 0xf4286u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0f4288  push 0x2d
    X86_AT(c, 0xf4288u);
    { uint32_t v = 0x2Du; push32(c, v); }
    // 0f428a  push 0x110
    X86_AT(c, 0xf428au);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0f428f  call 0xf3c24
    X86_AT(c, 0xf428fu);
    push32(c, 0xf4294u); f_000f3c24(c); X86_RET(c, 0xf4294u);
    X86_TICK(c, 13);
    // 0f4294  push 0x1b
    X86_AT(c, 0xf4294u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0f4296  push 0x2f
    X86_AT(c, 0xf4296u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0f4298  push 0x132
    X86_AT(c, 0xf4298u);
    { uint32_t v = 0x132u; push32(c, v); }
    // 0f429d  call 0xf3c24
    X86_AT(c, 0xf429du);
    push32(c, 0xf42a2u); f_000f3c24(c); X86_RET(c, 0xf42a2u);
    X86_TICK(c, 13);
    // 0f42a2  push 0x1b
    X86_AT(c, 0xf42a2u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0f42a4  push 0x31
    X86_AT(c, 0xf42a4u);
    { uint32_t v = 0x31u; push32(c, v); }
    // 0f42a6  push 0x12c
    X86_AT(c, 0xf42a6u);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0f42ab  call 0xf3c24
    X86_AT(c, 0xf42abu);
    push32(c, 0xf42b0u); f_000f3c24(c); X86_RET(c, 0xf42b0u);
    X86_TICK(c, 13);
    // 0f42b0  push 0x18
    X86_AT(c, 0xf42b0u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0f42b2  push 0x24
    X86_AT(c, 0xf42b2u);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0f42b4  push 0x16f
    X86_AT(c, 0xf42b4u);
    { uint32_t v = 0x16Fu; push32(c, v); }
    // 0f42b9  call 0xf3c24
    X86_AT(c, 0xf42b9u);
    push32(c, 0xf42beu); f_000f3c24(c); X86_RET(c, 0xf42beu);
    X86_TICK(c, 15);
    // 0f42be  add esp, 0x3c
    X86_AT(c, 0xf42beu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f42c1  push 0x18
    X86_AT(c, 0xf42c1u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0f42c3  push 0x25
    X86_AT(c, 0xf42c3u);
    { uint32_t v = 0x25u; push32(c, v); }
    // 0f42c5  push 0x18c
    X86_AT(c, 0xf42c5u);
    { uint32_t v = 0x18Cu; push32(c, v); }
    // 0f42ca  call 0xf3c24
    X86_AT(c, 0xf42cau);
    push32(c, 0xf42cfu); f_000f3c24(c); X86_RET(c, 0xf42cfu);
    X86_TICK(c, 13);
    // 0f42cf  push 0x18
    X86_AT(c, 0xf42cfu);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0f42d1  push 0x26
    X86_AT(c, 0xf42d1u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f42d3  push 0x194
    X86_AT(c, 0xf42d3u);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f42d8  call 0xf3c24
    X86_AT(c, 0xf42d8u);
    push32(c, 0xf42ddu); f_000f3c24(c); X86_RET(c, 0xf42ddu);
    X86_TICK(c, 13);
    // 0f42dd  push 0x18
    X86_AT(c, 0xf42ddu);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0f42df  push 0x27
    X86_AT(c, 0xf42dfu);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0f42e1  push 0x196
    X86_AT(c, 0xf42e1u);
    { uint32_t v = 0x196u; push32(c, v); }
    // 0f42e6  call 0xf3c24
    X86_AT(c, 0xf42e6u);
    push32(c, 0xf42ebu); f_000f3c24(c); X86_RET(c, 0xf42ebu);
    X86_TICK(c, 13);
    // 0f42eb  push 0x1b
    X86_AT(c, 0xf42ebu);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0f42ed  push 0x29
    X86_AT(c, 0xf42edu);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0f42ef  push 0x199
    X86_AT(c, 0xf42efu);
    { uint32_t v = 0x199u; push32(c, v); }
    // 0f42f4  call 0xf3c24
    X86_AT(c, 0xf42f4u);
    push32(c, 0xf42f9u); f_000f3c24(c); X86_RET(c, 0xf42f9u);
    X86_TICK(c, 13);
    // 0f42f9  push 0x1b
    X86_AT(c, 0xf42f9u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0f42fb  push 0x24
    X86_AT(c, 0xf42fbu);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0f42fd  push 0x198
    X86_AT(c, 0xf42fdu);
    { uint32_t v = 0x198u; push32(c, v); }
    // 0f4302  call 0xf3c24
    X86_AT(c, 0xf4302u);
    push32(c, 0xf4307u); f_000f3c24(c); X86_RET(c, 0xf4307u);
    X86_TICK(c, 15);
    // 0f4307  add esp, 0x3c
    X86_AT(c, 0xf4307u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f430a  push 0x19
    X86_AT(c, 0xf430au);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f430c  push 0xf
    X86_AT(c, 0xf430cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f430e  push 0x177
    X86_AT(c, 0xf430eu);
    { uint32_t v = 0x177u; push32(c, v); }
    // 0f4313  call 0xf3c24
    X86_AT(c, 0xf4313u);
    push32(c, 0xf4318u); f_000f3c24(c); X86_RET(c, 0xf4318u);
    X86_TICK(c, 13);
    // 0f4318  push 0x19
    X86_AT(c, 0xf4318u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f431a  push 0x14
    X86_AT(c, 0xf431au);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0f431c  push 0x177
    X86_AT(c, 0xf431cu);
    { uint32_t v = 0x177u; push32(c, v); }
    // 0f4321  call 0xf3c24
    X86_AT(c, 0xf4321u);
    push32(c, 0xf4326u); f_000f3c24(c); X86_RET(c, 0xf4326u);
    X86_TICK(c, 13);
    // 0f4326  push 0x19
    X86_AT(c, 0xf4326u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f4328  push 0x15
    X86_AT(c, 0xf4328u);
    { uint32_t v = 0x15u; push32(c, v); }
    // 0f432a  push 0x177
    X86_AT(c, 0xf432au);
    { uint32_t v = 0x177u; push32(c, v); }
    // 0f432f  call 0xf3c24
    X86_AT(c, 0xf432fu);
    push32(c, 0xf4334u); f_000f3c24(c); X86_RET(c, 0xf4334u);
    X86_TICK(c, 15);
    // 0f4334  add esp, 0x24
    X86_AT(c, 0xf4334u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0f4337  push 0x19
    X86_AT(c, 0xf4337u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f4339  push 0x1a
    X86_AT(c, 0xf4339u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0f433b  push 0x177
    X86_AT(c, 0xf433bu);
    { uint32_t v = 0x177u; push32(c, v); }
    // 0f4340  call 0xf3c24
    X86_AT(c, 0xf4340u);
    push32(c, 0xf4345u); f_000f3c24(c); X86_RET(c, 0xf4345u);
    X86_TICK(c, 2);
    // 0f4345  mov ebx, 0xe
    X86_AT(c, 0xf4345u);
    c.r[3] = 0xEu;
L_f434a:
    X86_TICK(c, 9);
    // 0f434a  add esp, 0xc
    X86_AT(c, 0xf434au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f434d  jmp 0xf44ff
    X86_AT(c, 0xf434du);
    goto L_f44ff;
L_f4352:
    X86_TICK(c, 11);
    // 0f4352  push 3
    X86_AT(c, 0xf4352u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f4354  push 2
    X86_AT(c, 0xf4354u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4356  call 0xfd448
    X86_AT(c, 0xf4356u);
    push32(c, 0xf435bu); f_000fd448(c); X86_RET(c, 0xf435bu);
    X86_TICK(c, 9);
    // 0f435b  push 0xffffffff
    X86_AT(c, 0xf435bu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f435d  call 0xe3a84
    X86_AT(c, 0xf435du);
    push32(c, 0xf4362u); f_000e3a84(c); X86_RET(c, 0xf4362u);
    X86_TICK(c, 13);
    // 0f4362  push 0xb
    X86_AT(c, 0xf4362u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f4364  push 0xf
    X86_AT(c, 0xf4364u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f4366  push 0x198
    X86_AT(c, 0xf4366u);
    { uint32_t v = 0x198u; push32(c, v); }
    // 0f436b  call 0xf3c24
    X86_AT(c, 0xf436bu);
    push32(c, 0xf4370u); f_000f3c24(c); X86_RET(c, 0xf4370u);
    X86_TICK(c, 13);
    // 0f4370  push 0xb
    X86_AT(c, 0xf4370u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f4372  push 0x10
    X86_AT(c, 0xf4372u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0f4374  push 0x199
    X86_AT(c, 0xf4374u);
    { uint32_t v = 0x199u; push32(c, v); }
    // 0f4379  call 0xf3c24
    X86_AT(c, 0xf4379u);
    push32(c, 0xf437eu); f_000f3c24(c); X86_RET(c, 0xf437eu);
    X86_TICK(c, 13);
    // 0f437e  push 0xb
    X86_AT(c, 0xf437eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f4380  push 0x11
    X86_AT(c, 0xf4380u);
    { uint32_t v = 0x11u; push32(c, v); }
    // 0f4382  push 0x198
    X86_AT(c, 0xf4382u);
    { uint32_t v = 0x198u; push32(c, v); }
    // 0f4387  call 0xf3c24
    X86_AT(c, 0xf4387u);
    push32(c, 0xf438cu); f_000f3c24(c); X86_RET(c, 0xf438cu);
    X86_TICK(c, 13);
    // 0f438c  push 0xb
    X86_AT(c, 0xf438cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f438e  push 0x14
    X86_AT(c, 0xf438eu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0f4390  push 0x199
    X86_AT(c, 0xf4390u);
    { uint32_t v = 0x199u; push32(c, v); }
    // 0f4395  call 0xf3c24
    X86_AT(c, 0xf4395u);
    push32(c, 0xf439au); f_000f3c24(c); X86_RET(c, 0xf439au);
    X86_TICK(c, 15);
    // 0f439a  add esp, 0x3c
    X86_AT(c, 0xf439au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f439d  push 0xc
    X86_AT(c, 0xf439du);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f439f  push 0x15
    X86_AT(c, 0xf439fu);
    { uint32_t v = 0x15u; push32(c, v); }
    // 0f43a1  push 0x198
    X86_AT(c, 0xf43a1u);
    { uint32_t v = 0x198u; push32(c, v); }
    // 0f43a6  call 0xf3c24
    X86_AT(c, 0xf43a6u);
    push32(c, 0xf43abu); f_000f3c24(c); X86_RET(c, 0xf43abu);
    X86_TICK(c, 13);
    // 0f43ab  push 0xc
    X86_AT(c, 0xf43abu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f43ad  push 0xf
    X86_AT(c, 0xf43adu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f43af  push 0x199
    X86_AT(c, 0xf43afu);
    { uint32_t v = 0x199u; push32(c, v); }
    // 0f43b4  call 0xf3c24
    X86_AT(c, 0xf43b4u);
    push32(c, 0xf43b9u); f_000f3c24(c); X86_RET(c, 0xf43b9u);
    X86_TICK(c, 13);
    // 0f43b9  push 0xc
    X86_AT(c, 0xf43b9u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f43bb  push 0x10
    X86_AT(c, 0xf43bbu);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0f43bd  push 0x198
    X86_AT(c, 0xf43bdu);
    { uint32_t v = 0x198u; push32(c, v); }
    // 0f43c2  call 0xf3c24
    X86_AT(c, 0xf43c2u);
    push32(c, 0xf43c7u); f_000f3c24(c); X86_RET(c, 0xf43c7u);
    X86_TICK(c, 13);
    // 0f43c7  push 0xe
    X86_AT(c, 0xf43c7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f43c9  push 0xf
    X86_AT(c, 0xf43c9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f43cb  push 0x199
    X86_AT(c, 0xf43cbu);
    { uint32_t v = 0x199u; push32(c, v); }
    // 0f43d0  call 0xf3c24
    X86_AT(c, 0xf43d0u);
    push32(c, 0xf43d5u); f_000f3c24(c); X86_RET(c, 0xf43d5u);
    X86_TICK(c, 13);
    // 0f43d5  push 0xf
    X86_AT(c, 0xf43d5u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f43d7  push 0x13
    X86_AT(c, 0xf43d7u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0f43d9  push 0x198
    X86_AT(c, 0xf43d9u);
    { uint32_t v = 0x198u; push32(c, v); }
    // 0f43de  call 0xf3c24
    X86_AT(c, 0xf43deu);
    push32(c, 0xf43e3u); f_000f3c24(c); X86_RET(c, 0xf43e3u);
    X86_TICK(c, 13);
    // 0f43e3  add esp, 0x3c
    X86_AT(c, 0xf43e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f43e6  push 3
    X86_AT(c, 0xf43e6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f43e8  push 2
    X86_AT(c, 0xf43e8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f43ea  call 0xfcf5c
    X86_AT(c, 0xf43eau);
    push32(c, 0xf43efu); f_000fcf5c(c); X86_RET(c, 0xf43efu);
    X86_TICK(c, 11);
    // 0f43ef  mov ebx, 0xf
    X86_AT(c, 0xf43efu);
    c.r[3] = 0xFu;
    // 0f43f4  add esp, 8
    X86_AT(c, 0xf43f4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f43f7  jmp 0xf44ff
    X86_AT(c, 0xf43f7u);
    goto L_f44ff;
L_f43fc:
    X86_TICK(c, 11);
    // 0f43fc  push 3
    X86_AT(c, 0xf43fcu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f43fe  push 3
    X86_AT(c, 0xf43feu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f4400  call 0xfd448
    X86_AT(c, 0xf4400u);
    push32(c, 0xf4405u); f_000fd448(c); X86_RET(c, 0xf4405u);
    X86_TICK(c, 9);
    // 0f4405  push 0xffffffff
    X86_AT(c, 0xf4405u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f4407  call 0xe3a84
    X86_AT(c, 0xf4407u);
    push32(c, 0xf440cu); f_000e3a84(c); X86_RET(c, 0xf440cu);
    X86_TICK(c, 11);
    // 0f440c  push 3
    X86_AT(c, 0xf440cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f440e  push 3
    X86_AT(c, 0xf440eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f4410  call 0xfcf5c
    X86_AT(c, 0xf4410u);
    push32(c, 0xf4415u); f_000fcf5c(c); X86_RET(c, 0xf4415u);
    X86_TICK(c, 9);
    // 0f4415  mov ebx, 0x10
    X86_AT(c, 0xf4415u);
    c.r[3] = 0x10u;
    // 0f441a  jmp 0xf443a
    X86_AT(c, 0xf441au);
    goto L_f443a;
L_f441c:
    X86_TICK(c, 11);
    // 0f441c  push 3
    X86_AT(c, 0xf441cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f441e  push 9
    X86_AT(c, 0xf441eu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f4420  call 0xfd448
    X86_AT(c, 0xf4420u);
    push32(c, 0xf4425u); f_000fd448(c); X86_RET(c, 0xf4425u);
    X86_TICK(c, 9);
    // 0f4425  push 0xffffffff
    X86_AT(c, 0xf4425u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f4427  call 0xe3a84
    X86_AT(c, 0xf4427u);
    push32(c, 0xf442cu); f_000e3a84(c); X86_RET(c, 0xf442cu);
    X86_TICK(c, 11);
    // 0f442c  push 3
    X86_AT(c, 0xf442cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f442e  push 9
    X86_AT(c, 0xf442eu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f4430  call 0xfcf5c
    X86_AT(c, 0xf4430u);
    push32(c, 0xf4435u); f_000fcf5c(c); X86_RET(c, 0xf4435u);
    X86_TICK(c, 2);
    // 0f4435  mov ebx, 0x11
    X86_AT(c, 0xf4435u);
    c.r[3] = 0x11u;
L_f443a:
    X86_TICK(c, 9);
    // 0f443a  add esp, 0x14
    X86_AT(c, 0xf443au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f443d  jmp 0xf44ff
    X86_AT(c, 0xf443du);
    goto L_f44ff;
L_f4442:
    X86_TICK(c, 26);
    // 0f4442  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf4442u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f4447  lea edx, [eax + eax*4]
    X86_AT(c, 0xf4447u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f444a  lea edx, [eax + edx*2]
    X86_AT(c, 0xf444au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f444d  shl edx, 5
    X86_AT(c, 0xf444du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f4450  sub edx, eax
    X86_AT(c, 0xf4450u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f4452  mov edx, dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf4452u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)));
    // 0f4458  sub edx, 2
    X86_AT(c, 0xf4458u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0f445b  cmp edx, 0xa
    X86_AT(c, 0xf445bu);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0f445e  ja 0xf44ff
    X86_AT(c, 0xf445eu);
    if (x86_cc(c, 7)) { goto L_f44ff; }
    X86_TICK(c, 7);
    // 0f4464  jmp dword ptr cs:[edx*4 + 0xf446c]
    X86_AT(c, 0xf4464u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF446Cu)));
      switch (t) {
      case 0xf4498u: goto L_f4498;
      case 0xf44a2u: goto L_f44a2;
      case 0xf44a9u: goto L_f44a9;
      case 0xf44b0u: goto L_f44b0;
      case 0xf44b7u: goto L_f44b7;
      case 0xf44beu: goto L_f44be;
      case 0xf44ffu: goto L_f44ff;
      default: x86_jump(c, t); return; } }
L_f4498:
    X86_TICK(c, 9);
    // 0f4498  mov ebx, 0x15
    X86_AT(c, 0xf4498u);
    c.r[3] = 0x15u;
    // 0f449d  jmp 0xf44ff
    X86_AT(c, 0xf449du);
    goto L_f44ff;
L_f44a2:
    X86_TICK(c, 9);
    // 0f44a2  mov ebx, 0x16
    X86_AT(c, 0xf44a2u);
    c.r[3] = 0x16u;
    // 0f44a7  jmp 0xf44ff
    X86_AT(c, 0xf44a7u);
    goto L_f44ff;
L_f44a9:
    X86_TICK(c, 9);
    // 0f44a9  mov ebx, 0x17
    X86_AT(c, 0xf44a9u);
    c.r[3] = 0x17u;
    // 0f44ae  jmp 0xf44ff
    X86_AT(c, 0xf44aeu);
    goto L_f44ff;
L_f44b0:
    X86_TICK(c, 9);
    // 0f44b0  mov ebx, 0x19
    X86_AT(c, 0xf44b0u);
    c.r[3] = 0x19u;
    // 0f44b5  jmp 0xf44ff
    X86_AT(c, 0xf44b5u);
    goto L_f44ff;
L_f44b7:
    X86_TICK(c, 9);
    // 0f44b7  mov ebx, 0x1a
    X86_AT(c, 0xf44b7u);
    c.r[3] = 0x1Au;
    // 0f44bc  jmp 0xf44ff
    X86_AT(c, 0xf44bcu);
    goto L_f44ff;
L_f44be:
    X86_TICK(c, 9);
    // 0f44be  mov ebx, 0x1b
    X86_AT(c, 0xf44beu);
    c.r[3] = 0x1Bu;
    // 0f44c3  jmp 0xf44ff
    X86_AT(c, 0xf44c3u);
    goto L_f44ff;
L_f44c5:
    X86_TICK(c, 24);
    // 0f44c5  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf44c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f44ca  lea edx, [eax + eax*4]
    X86_AT(c, 0xf44cau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f44cd  lea edx, [eax + edx*2]
    X86_AT(c, 0xf44cdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f44d0  shl edx, 5
    X86_AT(c, 0xf44d0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f44d3  sub edx, eax
    X86_AT(c, 0xf44d3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f44d5  mov edx, dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf44d5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)));
    // 0f44db  cmp edx, 2
    X86_AT(c, 0xf44dbu);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0f44de  je 0xf44ec
    X86_AT(c, 0xf44deu);
    if (x86_cc(c, 4)) { goto L_f44ec; }
    X86_TICK(c, 7);
    // 0f44e0  cmp edx, 3
    X86_AT(c, 0xf44e0u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0f44e3  je 0xf44f3
    X86_AT(c, 0xf44e3u);
    if (x86_cc(c, 4)) { goto L_f44f3; }
    X86_TICK(c, 7);
    // 0f44e5  cmp edx, 8
    X86_AT(c, 0xf44e5u);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0f44e8  je 0xf44fa
    X86_AT(c, 0xf44e8u);
    if (x86_cc(c, 4)) { goto L_f44fa; }
    X86_TICK(c, 7);
    // 0f44ea  jmp 0xf44ff
    X86_AT(c, 0xf44eau);
    goto L_f44ff;
L_f44ec:
    X86_TICK(c, 9);
    // 0f44ec  mov ebx, 0x12
    X86_AT(c, 0xf44ecu);
    c.r[3] = 0x12u;
    // 0f44f1  jmp 0xf44ff
    X86_AT(c, 0xf44f1u);
    goto L_f44ff;
L_f44f3:
    X86_TICK(c, 9);
    // 0f44f3  mov ebx, 0x13
    X86_AT(c, 0xf44f3u);
    c.r[3] = 0x13u;
    // 0f44f8  jmp 0xf44ff
    X86_AT(c, 0xf44f8u);
    goto L_f44ff;
L_f44fa:
    X86_TICK(c, 2);
    // 0f44fa  mov ebx, 0x14
    X86_AT(c, 0xf44fau);
    c.r[3] = 0x14u;
L_f44ff:
    X86_TICK(c, 9);
    // 0f44ff  push ebx
    X86_AT(c, 0xf44ffu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f4500  call 0xe3a58
    X86_AT(c, 0xf4500u);
    push32(c, 0xf4505u); f_000e3a58(c); X86_RET(c, 0xf4505u);
    X86_TICK(c, 7);
    // 0f4505  call 0xfb78c
    X86_AT(c, 0xf4505u);
    push32(c, 0xf450au); f_000fb78c(c); X86_RET(c, 0xf450au);
    X86_TICK(c, 9);
    // 0f450a  add esp, 4
    X86_AT(c, 0xf450au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f450d  cmp esi, 2
    X86_AT(c, 0xf450du);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0f4510  je 0xf451c
    X86_AT(c, 0xf4510u);
    if (x86_cc(c, 4)) { goto L_f451c; }
    X86_TICK(c, 7);
    // 0f4512  cmp esi, 1
    X86_AT(c, 0xf4512u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0f4515  je 0xf451c
    X86_AT(c, 0xf4515u);
    if (x86_cc(c, 4)) { goto L_f451c; }
    X86_TICK(c, 7);
    // 0f4517  cmp esi, 3
    X86_AT(c, 0xf4517u);
    (void)x86_sub(c, c.r[6], 0x3u, 0, 4);
    // 0f451a  jne 0xf4521
    X86_AT(c, 0xf451au);
    if (x86_cc(c, 5)) { goto L_f4521; }
L_f451c:
    X86_TICK(c, 7);
    // 0f451c  call 0xf6a98
    X86_AT(c, 0xf451cu);
    push32(c, 0xf4521u); f_000f6a98(c); X86_RET(c, 0xf4521u);
L_f4521:
    X86_TICK(c, 25);
    // 0f4521  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf4521u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f4526  lea edx, [eax + eax*4]
    X86_AT(c, 0xf4526u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f4529  lea edx, [eax + edx*2]
    X86_AT(c, 0xf4529u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f452c  shl edx, 5
    X86_AT(c, 0xf452cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f452f  sub edx, eax
    X86_AT(c, 0xf452fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f4531  cmp dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf4531u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x0u, 0, 4);
    // 0f4538  jne 0xf475e
    X86_AT(c, 0xf4538u);
    if (x86_cc(c, 5)) { goto L_f475e; }
    X86_TICK(c, 9);
    // 0f453e  mov edx, edi
    X86_AT(c, 0xf453eu);
    c.r[2] = c.r[7];
    // 0f4540  cmp edx, 0xd
    X86_AT(c, 0xf4540u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0f4543  ja 0xf475e
    X86_AT(c, 0xf4543u);
    if (x86_cc(c, 7)) { goto L_f475e; }
    X86_TICK(c, 7);
    // 0f4549  jmp dword ptr cs:[edx*4 + 0xf4551]
    X86_AT(c, 0xf4549u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF4551u)));
      switch (t) {
      case 0xf4589u: goto L_f4589;
      case 0xf45aau: goto L_f45aa;
      case 0xf45d6u: goto L_f45d6;
      case 0xf4639u: goto L_f4639;
      case 0xf4691u: goto L_f4691;
      case 0xf46c8u: goto L_f46c8;
      case 0xf46d0u: goto L_f46d0;
      case 0xf46d4u: goto L_f46d4;
      case 0xf46e3u: goto L_f46e3;
      case 0xf46f4u: goto L_f46f4;
      case 0xf4700u: goto L_f4700;
      case 0xf4714u: goto L_f4714;
      case 0xf472bu: goto L_f472b;
      case 0xf473eu: goto L_f473e;
      default: x86_jump(c, t); return; } }
L_f4589:
    X86_TICK(c, 9);
    // 0f4589  push 0
    X86_AT(c, 0xf4589u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f458b  call 0xe8b90
    X86_AT(c, 0xf458bu);
    push32(c, 0xf4590u); f_000e8b90(c); X86_RET(c, 0xf4590u);
    X86_TICK(c, 13);
    // 0f4590  push 0x20
    X86_AT(c, 0xf4590u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f4592  push 0x20
    X86_AT(c, 0xf4592u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f4594  push 8
    X86_AT(c, 0xf4594u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f4596  call 0xf3c0c
    X86_AT(c, 0xf4596u);
    push32(c, 0xf459bu); f_000f3c0c(c); X86_RET(c, 0xf459bu);
    X86_TICK(c, 13);
    // 0f459b  push 0x37
    X86_AT(c, 0xf459bu);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0f459d  push 0x20
    X86_AT(c, 0xf459du);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f459f  push 0xf
    X86_AT(c, 0xf459fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f45a1  call 0xf3c0c
    X86_AT(c, 0xf45a1u);
    push32(c, 0xf45a6u); f_000f3c0c(c); X86_RET(c, 0xf45a6u);
    X86_TICK(c, 9);
    // 0f45a6  push 0
    X86_AT(c, 0xf45a6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f45a8  jmp 0xf45c9
    X86_AT(c, 0xf45a8u);
    goto L_f45c9;
L_f45aa:
    X86_TICK(c, 9);
    // 0f45aa  push 0
    X86_AT(c, 0xf45aau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f45ac  call 0xe8b90
    X86_AT(c, 0xf45acu);
    push32(c, 0xf45b1u); f_000e8b90(c); X86_RET(c, 0xf45b1u);
    X86_TICK(c, 13);
    // 0f45b1  push 0x37
    X86_AT(c, 0xf45b1u);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0f45b3  push 0x14
    X86_AT(c, 0xf45b3u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0f45b5  push 0xd
    X86_AT(c, 0xf45b5u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f45b7  call 0xf3c0c
    X86_AT(c, 0xf45b7u);
    push32(c, 0xf45bcu); f_000f3c0c(c); X86_RET(c, 0xf45bcu);
    X86_TICK(c, 13);
    // 0f45bc  push 0x3a
    X86_AT(c, 0xf45bcu);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0f45be  push 0x21
    X86_AT(c, 0xf45beu);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f45c0  push 0xf
    X86_AT(c, 0xf45c0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f45c2  call 0xf3c0c
    X86_AT(c, 0xf45c2u);
    push32(c, 0xf45c7u); f_000f3c0c(c); X86_RET(c, 0xf45c7u);
    X86_TICK(c, 2);
    // 0f45c7  push 1
    X86_AT(c, 0xf45c7u);
    { uint32_t v = 0x1u; push32(c, v); }
L_f45c9:
    X86_TICK(c, 7);
    // 0f45c9  call 0xf76bc
    X86_AT(c, 0xf45c9u);
    push32(c, 0xf45ceu); f_000f76bc(c); X86_RET(c, 0xf45ceu);
    X86_TICK(c, 9);
    // 0f45ce  add esp, 0x20
    X86_AT(c, 0xf45ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f45d1  jmp 0xf475e
    X86_AT(c, 0xf45d1u);
    goto L_f475e;
L_f45d6:
    X86_TICK(c, 9);
    // 0f45d6  push 0
    X86_AT(c, 0xf45d6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f45d8  call 0xe8b90
    X86_AT(c, 0xf45d8u);
    push32(c, 0xf45ddu); f_000e8b90(c); X86_RET(c, 0xf45ddu);
    X86_TICK(c, 13);
    // 0f45dd  push 0x16
    X86_AT(c, 0xf45ddu);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0f45df  push 0x23
    X86_AT(c, 0xf45dfu);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0f45e1  push 8
    X86_AT(c, 0xf45e1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f45e3  call 0xf3c0c
    X86_AT(c, 0xf45e3u);
    push32(c, 0xf45e8u); f_000f3c0c(c); X86_RET(c, 0xf45e8u);
    X86_TICK(c, 13);
    // 0f45e8  push 0x2e
    X86_AT(c, 0xf45e8u);
    { uint32_t v = 0x2Eu; push32(c, v); }
    // 0f45ea  push 0x26
    X86_AT(c, 0xf45eau);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f45ec  push 0xd
    X86_AT(c, 0xf45ecu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f45ee  call 0xf3c0c
    X86_AT(c, 0xf45eeu);
    push32(c, 0xf45f3u); f_000f3c0c(c); X86_RET(c, 0xf45f3u);
    X86_TICK(c, 13);
    // 0f45f3  push 0x1d
    X86_AT(c, 0xf45f3u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0f45f5  push 0x24
    X86_AT(c, 0xf45f5u);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0f45f7  push 7
    X86_AT(c, 0xf45f7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f45f9  call 0xf3c0c
    X86_AT(c, 0xf45f9u);
    push32(c, 0xf45feu); f_000f3c0c(c); X86_RET(c, 0xf45feu);
    X86_TICK(c, 13);
    // 0f45fe  push 0x28
    X86_AT(c, 0xf45feu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0f4600  push 0x18
    X86_AT(c, 0xf4600u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0f4602  push 0xe
    X86_AT(c, 0xf4602u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f4604  call 0xf3c0c
    X86_AT(c, 0xf4604u);
    push32(c, 0xf4609u); f_000f3c0c(c); X86_RET(c, 0xf4609u);
    X86_TICK(c, 13);
    // 0f4609  push 5
    X86_AT(c, 0xf4609u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f460b  push 0x19
    X86_AT(c, 0xf460bu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f460d  push 6
    X86_AT(c, 0xf460du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f460f  call 0xf3c0c
    X86_AT(c, 0xf460fu);
    push32(c, 0xf4614u); f_000f3c0c(c); X86_RET(c, 0xf4614u);
    X86_TICK(c, 15);
    // 0f4614  add esp, 0x40
    X86_AT(c, 0xf4614u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f4617  push 0x33
    X86_AT(c, 0xf4617u);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f4619  push 0x39
    X86_AT(c, 0xf4619u);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0f461b  push 0xf
    X86_AT(c, 0xf461bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f461d  call 0xf3c0c
    X86_AT(c, 0xf461du);
    push32(c, 0xf4622u); f_000f3c0c(c); X86_RET(c, 0xf4622u);
    X86_TICK(c, 13);
    // 0f4622  push 0x1d
    X86_AT(c, 0xf4622u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0f4624  push 0x3b
    X86_AT(c, 0xf4624u);
    { uint32_t v = 0x3Bu; push32(c, v); }
    // 0f4626  push 0xf
    X86_AT(c, 0xf4626u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f4628  call 0xf3c0c
    X86_AT(c, 0xf4628u);
    push32(c, 0xf462du); f_000f3c0c(c); X86_RET(c, 0xf462du);
    X86_TICK(c, 9);
    // 0f462d  push 2
    X86_AT(c, 0xf462du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f462f  call 0xf76bc
    X86_AT(c, 0xf462fu);
    push32(c, 0xf4634u); f_000f76bc(c); X86_RET(c, 0xf4634u);
    X86_TICK(c, 7);
    // 0f4634  jmp 0xf475b
    X86_AT(c, 0xf4634u);
    goto L_f475b;
L_f4639:
    X86_TICK(c, 9);
    // 0f4639  push 0
    X86_AT(c, 0xf4639u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f463b  call 0xe8b90
    X86_AT(c, 0xf463bu);
    push32(c, 0xf4640u); f_000e8b90(c); X86_RET(c, 0xf4640u);
    X86_TICK(c, 13);
    // 0f4640  push 0x16
    X86_AT(c, 0xf4640u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0f4642  push 0x23
    X86_AT(c, 0xf4642u);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0f4644  push 8
    X86_AT(c, 0xf4644u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f4646  call 0xf3c0c
    X86_AT(c, 0xf4646u);
    push32(c, 0xf464bu); f_000f3c0c(c); X86_RET(c, 0xf464bu);
    X86_TICK(c, 13);
    // 0f464b  push 0x14
    X86_AT(c, 0xf464bu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0f464d  push 0x22
    X86_AT(c, 0xf464du);
    { uint32_t v = 0x22u; push32(c, v); }
    // 0f464f  push 0xd
    X86_AT(c, 0xf464fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f4651  call 0xf3c0c
    X86_AT(c, 0xf4651u);
    push32(c, 0xf4656u); f_000f3c0c(c); X86_RET(c, 0xf4656u);
    X86_TICK(c, 13);
    // 0f4656  push 0x1a
    X86_AT(c, 0xf4656u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0f4658  push 0xf
    X86_AT(c, 0xf4658u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f465a  push 7
    X86_AT(c, 0xf465au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f465c  call 0xf3c0c
    X86_AT(c, 0xf465cu);
    push32(c, 0xf4661u); f_000f3c0c(c); X86_RET(c, 0xf4661u);
    X86_TICK(c, 13);
    // 0f4661  push 0x1f
    X86_AT(c, 0xf4661u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f4663  push 0x26
    X86_AT(c, 0xf4663u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f4665  push 0xe
    X86_AT(c, 0xf4665u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f4667  call 0xf3c0c
    X86_AT(c, 0xf4667u);
    push32(c, 0xf466cu); f_000f3c0c(c); X86_RET(c, 0xf466cu);
    X86_TICK(c, 13);
    // 0f466c  push 5
    X86_AT(c, 0xf466cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f466e  push 0x19
    X86_AT(c, 0xf466eu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f4670  push 6
    X86_AT(c, 0xf4670u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4672  call 0xf3c0c
    X86_AT(c, 0xf4672u);
    push32(c, 0xf4677u); f_000f3c0c(c); X86_RET(c, 0xf4677u);
    X86_TICK(c, 15);
    // 0f4677  add esp, 0x40
    X86_AT(c, 0xf4677u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f467a  push 0x33
    X86_AT(c, 0xf467au);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f467c  push 0x39
    X86_AT(c, 0xf467cu);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0f467e  push 0xf
    X86_AT(c, 0xf467eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f4680  call 0xf3c0c
    X86_AT(c, 0xf4680u);
    push32(c, 0xf4685u); f_000f3c0c(c); X86_RET(c, 0xf4685u);
    X86_TICK(c, 9);
    // 0f4685  push 3
    X86_AT(c, 0xf4685u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f4687  call 0xf76bc
    X86_AT(c, 0xf4687u);
    push32(c, 0xf468cu); f_000f76bc(c); X86_RET(c, 0xf468cu);
    X86_TICK(c, 7);
    // 0f468c  jmp 0xf4726
    X86_AT(c, 0xf468cu);
    goto L_f4726;
L_f4691:
    X86_TICK(c, 9);
    // 0f4691  push 0
    X86_AT(c, 0xf4691u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f4693  call 0xe8b90
    X86_AT(c, 0xf4693u);
    push32(c, 0xf4698u); f_000e8b90(c); X86_RET(c, 0xf4698u);
    X86_TICK(c, 13);
    // 0f4698  push 0xe
    X86_AT(c, 0xf4698u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f469a  push 0x2c
    X86_AT(c, 0xf469au);
    { uint32_t v = 0x2Cu; push32(c, v); }
    // 0f469c  push 0xd
    X86_AT(c, 0xf469cu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f469e  call 0xf3c0c
    X86_AT(c, 0xf469eu);
    push32(c, 0xf46a3u); f_000f3c0c(c); X86_RET(c, 0xf46a3u);
    X86_TICK(c, 13);
    // 0f46a3  push 5
    X86_AT(c, 0xf46a3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f46a5  push 0x19
    X86_AT(c, 0xf46a5u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f46a7  push 6
    X86_AT(c, 0xf46a7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f46a9  call 0xf3c0c
    X86_AT(c, 0xf46a9u);
    push32(c, 0xf46aeu); f_000f3c0c(c); X86_RET(c, 0xf46aeu);
    X86_TICK(c, 13);
    // 0f46ae  push 0x33
    X86_AT(c, 0xf46aeu);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f46b0  push 0x39
    X86_AT(c, 0xf46b0u);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0f46b2  push 0xf
    X86_AT(c, 0xf46b2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f46b4  call 0xf3c0c
    X86_AT(c, 0xf46b4u);
    push32(c, 0xf46b9u); f_000f3c0c(c); X86_RET(c, 0xf46b9u);
    X86_TICK(c, 9);
    // 0f46b9  push 4
    X86_AT(c, 0xf46b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f46bb  call 0xf76bc
    X86_AT(c, 0xf46bbu);
    push32(c, 0xf46c0u); f_000f76bc(c); X86_RET(c, 0xf46c0u);
    X86_TICK(c, 9);
    // 0f46c0  add esp, 0x2c
    X86_AT(c, 0xf46c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0f46c3  jmp 0xf475e
    X86_AT(c, 0xf46c3u);
    goto L_f475e;
L_f46c8:
    X86_TICK(c, 13);
    // 0f46c8  push 0xb
    X86_AT(c, 0xf46c8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f46ca  push 0x2a
    X86_AT(c, 0xf46cau);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0f46cc  push 6
    X86_AT(c, 0xf46ccu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f46ce  jmp 0xf46da
    X86_AT(c, 0xf46ceu);
    goto L_f46da;
L_f46d0:
    X86_TICK(c, 9);
    // 0f46d0  push 1
    X86_AT(c, 0xf46d0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f46d2  jmp 0xf46f6
    X86_AT(c, 0xf46d2u);
    goto L_f46f6;
L_f46d4:
    X86_TICK(c, 6);
    // 0f46d4  push 0x1f
    X86_AT(c, 0xf46d4u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f46d6  push 0x20
    X86_AT(c, 0xf46d6u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f46d8  push 7
    X86_AT(c, 0xf46d8u);
    { uint32_t v = 0x7u; push32(c, v); }
L_f46da:
    X86_TICK(c, 7);
    // 0f46da  call 0xf3c0c
    X86_AT(c, 0xf46dau);
    push32(c, 0xf46dfu); f_000f3c0c(c); X86_RET(c, 0xf46dfu);
    X86_TICK(c, 9);
    // 0f46df  push 1
    X86_AT(c, 0xf46dfu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f46e1  jmp 0xf4721
    X86_AT(c, 0xf46e1u);
    goto L_f4721;
L_f46e3:
    X86_TICK(c, 13);
    // 0f46e3  push 0x19
    X86_AT(c, 0xf46e3u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f46e5  push 0x32
    X86_AT(c, 0xf46e5u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0f46e7  push 0xe
    X86_AT(c, 0xf46e7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f46e9  call 0xf3c0c
    X86_AT(c, 0xf46e9u);
    push32(c, 0xf46eeu); f_000f3c0c(c); X86_RET(c, 0xf46eeu);
    X86_TICK(c, 11);
    // 0f46ee  push 0x28
    X86_AT(c, 0xf46eeu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0f46f0  push 0xe
    X86_AT(c, 0xf46f0u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f46f2  jmp 0xf473a
    X86_AT(c, 0xf46f2u);
    goto L_f473a;
L_f46f4:
    X86_TICK(c, 2);
    // 0f46f4  push 2
    X86_AT(c, 0xf46f4u);
    { uint32_t v = 0x2u; push32(c, v); }
L_f46f6:
    X86_TICK(c, 7);
    // 0f46f6  call 0xe8b90
    X86_AT(c, 0xf46f6u);
    push32(c, 0xf46fbu); f_000e8b90(c); X86_RET(c, 0xf46fbu);
    X86_TICK(c, 9);
    // 0f46fb  add esp, 4
    X86_AT(c, 0xf46fbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f46fe  jmp 0xf475e
    X86_AT(c, 0xf46feu);
    goto L_f475e;
L_f4700:
    X86_TICK(c, 9);
    // 0f4700  push 2
    X86_AT(c, 0xf4700u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4702  call 0xe8b90
    X86_AT(c, 0xf4702u);
    push32(c, 0xf4707u); f_000e8b90(c); X86_RET(c, 0xf4707u);
    X86_TICK(c, 13);
    // 0f4707  push 0x27
    X86_AT(c, 0xf4707u);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0f4709  push 0x1b
    X86_AT(c, 0xf4709u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0f470b  push 0xd
    X86_AT(c, 0xf470bu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f470d  call 0xf3c0c
    X86_AT(c, 0xf470du);
    push32(c, 0xf4712u); f_000f3c0c(c); X86_RET(c, 0xf4712u);
    X86_TICK(c, 7);
    // 0f4712  jmp 0xf4726
    X86_AT(c, 0xf4712u);
    goto L_f4726;
L_f4714:
    X86_TICK(c, 13);
    // 0f4714  push 0x1f
    X86_AT(c, 0xf4714u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f4716  push 0x1f
    X86_AT(c, 0xf4716u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f4718  push 0xd
    X86_AT(c, 0xf4718u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f471a  call 0xf3c0c
    X86_AT(c, 0xf471au);
    push32(c, 0xf471fu); f_000f3c0c(c); X86_RET(c, 0xf471fu);
    X86_TICK(c, 2);
    // 0f471f  push 2
    X86_AT(c, 0xf471fu);
    { uint32_t v = 0x2u; push32(c, v); }
L_f4721:
    X86_TICK(c, 7);
    // 0f4721  call 0xe8b90
    X86_AT(c, 0xf4721u);
    push32(c, 0xf4726u); f_000e8b90(c); X86_RET(c, 0xf4726u);
L_f4726:
    X86_TICK(c, 9);
    // 0f4726  add esp, 0x10
    X86_AT(c, 0xf4726u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f4729  jmp 0xf475e
    X86_AT(c, 0xf4729u);
    goto L_f475e;
L_f472b:
    X86_TICK(c, 13);
    // 0f472b  push 0x20
    X86_AT(c, 0xf472bu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f472d  push 0x26
    X86_AT(c, 0xf472du);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f472f  push 7
    X86_AT(c, 0xf472fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f4731  call 0xf3c0c
    X86_AT(c, 0xf4731u);
    push32(c, 0xf4736u); f_000f3c0c(c); X86_RET(c, 0xf4736u);
    X86_TICK(c, 4);
    // 0f4736  push 0x21
    X86_AT(c, 0xf4736u);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f4738  push 0x1d
    X86_AT(c, 0xf4738u);
    { uint32_t v = 0x1Du; push32(c, v); }
L_f473a:
    X86_TICK(c, 9);
    // 0f473a  push 6
    X86_AT(c, 0xf473au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f473c  jmp 0xf474f
    X86_AT(c, 0xf473cu);
    goto L_f474f;
L_f473e:
    X86_TICK(c, 13);
    // 0f473e  push 0xc
    X86_AT(c, 0xf473eu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f4740  push 0xc
    X86_AT(c, 0xf4740u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f4742  push 8
    X86_AT(c, 0xf4742u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f4744  call 0xf3c0c
    X86_AT(c, 0xf4744u);
    push32(c, 0xf4749u); f_000f3c0c(c); X86_RET(c, 0xf4749u);
    X86_TICK(c, 6);
    // 0f4749  push 0x1f
    X86_AT(c, 0xf4749u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f474b  push 8
    X86_AT(c, 0xf474bu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f474d  push 7
    X86_AT(c, 0xf474du);
    { uint32_t v = 0x7u; push32(c, v); }
L_f474f:
    X86_TICK(c, 7);
    // 0f474f  call 0xf3c0c
    X86_AT(c, 0xf474fu);
    push32(c, 0xf4754u); f_000f3c0c(c); X86_RET(c, 0xf4754u);
    X86_TICK(c, 9);
    // 0f4754  push 2
    X86_AT(c, 0xf4754u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4756  call 0xe8b90
    X86_AT(c, 0xf4756u);
    push32(c, 0xf475bu); f_000e8b90(c); X86_RET(c, 0xf475bu);
L_f475b:
    X86_TICK(c, 2);
    // 0f475b  add esp, 0x1c
    X86_AT(c, 0xf475bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_f475e:
    X86_TICK(c, 28);
    // 0f475e  pop edi
    X86_AT(c, 0xf475eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f475f  pop esi
    X86_AT(c, 0xf475fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f4760  pop ebx
    X86_AT(c, 0xf4760u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f4761  leave 
    X86_AT(c, 0xf4761u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f4762  ret 
    X86_AT(c, 0xf4762u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf3c40u, "ran off the end of a function");
}
void f_000f40fe(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f40fe  add esp, 0x38
    X86_AT(c, 0xf40feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0f4101  jmp 0xf44ff
    X86_AT(c, 0xf4101u);
    goto L_f44ff;
L_f44ff:
    X86_TICK(c, 9);
    // 0f44ff  push ebx
    X86_AT(c, 0xf44ffu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f4500  call 0xe3a58
    X86_AT(c, 0xf4500u);
    push32(c, 0xf4505u); f_000e3a58(c); X86_RET(c, 0xf4505u);
    X86_TICK(c, 7);
    // 0f4505  call 0xfb78c
    X86_AT(c, 0xf4505u);
    push32(c, 0xf450au); f_000fb78c(c); X86_RET(c, 0xf450au);
    X86_TICK(c, 9);
    // 0f450a  add esp, 4
    X86_AT(c, 0xf450au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f450d  cmp esi, 2
    X86_AT(c, 0xf450du);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0f4510  je 0xf451c
    X86_AT(c, 0xf4510u);
    if (x86_cc(c, 4)) { goto L_f451c; }
    X86_TICK(c, 7);
    // 0f4512  cmp esi, 1
    X86_AT(c, 0xf4512u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0f4515  je 0xf451c
    X86_AT(c, 0xf4515u);
    if (x86_cc(c, 4)) { goto L_f451c; }
    X86_TICK(c, 7);
    // 0f4517  cmp esi, 3
    X86_AT(c, 0xf4517u);
    (void)x86_sub(c, c.r[6], 0x3u, 0, 4);
    // 0f451a  jne 0xf4521
    X86_AT(c, 0xf451au);
    if (x86_cc(c, 5)) { goto L_f4521; }
L_f451c:
    X86_TICK(c, 7);
    // 0f451c  call 0xf6a98
    X86_AT(c, 0xf451cu);
    push32(c, 0xf4521u); f_000f6a98(c); X86_RET(c, 0xf4521u);
L_f4521:
    X86_TICK(c, 25);
    // 0f4521  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf4521u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f4526  lea edx, [eax + eax*4]
    X86_AT(c, 0xf4526u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f4529  lea edx, [eax + edx*2]
    X86_AT(c, 0xf4529u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f452c  shl edx, 5
    X86_AT(c, 0xf452cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f452f  sub edx, eax
    X86_AT(c, 0xf452fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f4531  cmp dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf4531u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x0u, 0, 4);
    // 0f4538  jne 0xf475e
    X86_AT(c, 0xf4538u);
    if (x86_cc(c, 5)) { goto L_f475e; }
    X86_TICK(c, 9);
    // 0f453e  mov edx, edi
    X86_AT(c, 0xf453eu);
    c.r[2] = c.r[7];
    // 0f4540  cmp edx, 0xd
    X86_AT(c, 0xf4540u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0f4543  ja 0xf475e
    X86_AT(c, 0xf4543u);
    if (x86_cc(c, 7)) { goto L_f475e; }
    X86_TICK(c, 7);
    // 0f4549  jmp dword ptr cs:[edx*4 + 0xf4551]
    X86_AT(c, 0xf4549u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF4551u)));
      switch (t) {
      case 0xf4589u: goto L_f4589;
      case 0xf45aau: goto L_f45aa;
      case 0xf45d6u: goto L_f45d6;
      case 0xf4639u: goto L_f4639;
      case 0xf4691u: goto L_f4691;
      case 0xf46c8u: goto L_f46c8;
      case 0xf46d0u: goto L_f46d0;
      case 0xf46d4u: goto L_f46d4;
      case 0xf46e3u: goto L_f46e3;
      case 0xf46f4u: goto L_f46f4;
      case 0xf4700u: goto L_f4700;
      case 0xf4714u: goto L_f4714;
      case 0xf472bu: goto L_f472b;
      case 0xf473eu: goto L_f473e;
      default: x86_jump(c, t); return; } }
L_f4589:
    X86_TICK(c, 9);
    // 0f4589  push 0
    X86_AT(c, 0xf4589u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f458b  call 0xe8b90
    X86_AT(c, 0xf458bu);
    push32(c, 0xf4590u); f_000e8b90(c); X86_RET(c, 0xf4590u);
    X86_TICK(c, 13);
    // 0f4590  push 0x20
    X86_AT(c, 0xf4590u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f4592  push 0x20
    X86_AT(c, 0xf4592u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f4594  push 8
    X86_AT(c, 0xf4594u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f4596  call 0xf3c0c
    X86_AT(c, 0xf4596u);
    push32(c, 0xf459bu); f_000f3c0c(c); X86_RET(c, 0xf459bu);
    X86_TICK(c, 13);
    // 0f459b  push 0x37
    X86_AT(c, 0xf459bu);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0f459d  push 0x20
    X86_AT(c, 0xf459du);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f459f  push 0xf
    X86_AT(c, 0xf459fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f45a1  call 0xf3c0c
    X86_AT(c, 0xf45a1u);
    push32(c, 0xf45a6u); f_000f3c0c(c); X86_RET(c, 0xf45a6u);
    X86_TICK(c, 9);
    // 0f45a6  push 0
    X86_AT(c, 0xf45a6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f45a8  jmp 0xf45c9
    X86_AT(c, 0xf45a8u);
    goto L_f45c9;
L_f45aa:
    X86_TICK(c, 9);
    // 0f45aa  push 0
    X86_AT(c, 0xf45aau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f45ac  call 0xe8b90
    X86_AT(c, 0xf45acu);
    push32(c, 0xf45b1u); f_000e8b90(c); X86_RET(c, 0xf45b1u);
    X86_TICK(c, 13);
    // 0f45b1  push 0x37
    X86_AT(c, 0xf45b1u);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0f45b3  push 0x14
    X86_AT(c, 0xf45b3u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0f45b5  push 0xd
    X86_AT(c, 0xf45b5u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f45b7  call 0xf3c0c
    X86_AT(c, 0xf45b7u);
    push32(c, 0xf45bcu); f_000f3c0c(c); X86_RET(c, 0xf45bcu);
    X86_TICK(c, 13);
    // 0f45bc  push 0x3a
    X86_AT(c, 0xf45bcu);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0f45be  push 0x21
    X86_AT(c, 0xf45beu);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f45c0  push 0xf
    X86_AT(c, 0xf45c0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f45c2  call 0xf3c0c
    X86_AT(c, 0xf45c2u);
    push32(c, 0xf45c7u); f_000f3c0c(c); X86_RET(c, 0xf45c7u);
    X86_TICK(c, 2);
    // 0f45c7  push 1
    X86_AT(c, 0xf45c7u);
    { uint32_t v = 0x1u; push32(c, v); }
L_f45c9:
    X86_TICK(c, 7);
    // 0f45c9  call 0xf76bc
    X86_AT(c, 0xf45c9u);
    push32(c, 0xf45ceu); f_000f76bc(c); X86_RET(c, 0xf45ceu);
    X86_TICK(c, 9);
    // 0f45ce  add esp, 0x20
    X86_AT(c, 0xf45ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f45d1  jmp 0xf475e
    X86_AT(c, 0xf45d1u);
    goto L_f475e;
L_f45d6:
    X86_TICK(c, 9);
    // 0f45d6  push 0
    X86_AT(c, 0xf45d6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f45d8  call 0xe8b90
    X86_AT(c, 0xf45d8u);
    push32(c, 0xf45ddu); f_000e8b90(c); X86_RET(c, 0xf45ddu);
    X86_TICK(c, 13);
    // 0f45dd  push 0x16
    X86_AT(c, 0xf45ddu);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0f45df  push 0x23
    X86_AT(c, 0xf45dfu);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0f45e1  push 8
    X86_AT(c, 0xf45e1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f45e3  call 0xf3c0c
    X86_AT(c, 0xf45e3u);
    push32(c, 0xf45e8u); f_000f3c0c(c); X86_RET(c, 0xf45e8u);
    X86_TICK(c, 13);
    // 0f45e8  push 0x2e
    X86_AT(c, 0xf45e8u);
    { uint32_t v = 0x2Eu; push32(c, v); }
    // 0f45ea  push 0x26
    X86_AT(c, 0xf45eau);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f45ec  push 0xd
    X86_AT(c, 0xf45ecu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f45ee  call 0xf3c0c
    X86_AT(c, 0xf45eeu);
    push32(c, 0xf45f3u); f_000f3c0c(c); X86_RET(c, 0xf45f3u);
    X86_TICK(c, 13);
    // 0f45f3  push 0x1d
    X86_AT(c, 0xf45f3u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0f45f5  push 0x24
    X86_AT(c, 0xf45f5u);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0f45f7  push 7
    X86_AT(c, 0xf45f7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f45f9  call 0xf3c0c
    X86_AT(c, 0xf45f9u);
    push32(c, 0xf45feu); f_000f3c0c(c); X86_RET(c, 0xf45feu);
    X86_TICK(c, 13);
    // 0f45fe  push 0x28
    X86_AT(c, 0xf45feu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0f4600  push 0x18
    X86_AT(c, 0xf4600u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0f4602  push 0xe
    X86_AT(c, 0xf4602u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f4604  call 0xf3c0c
    X86_AT(c, 0xf4604u);
    push32(c, 0xf4609u); f_000f3c0c(c); X86_RET(c, 0xf4609u);
    X86_TICK(c, 13);
    // 0f4609  push 5
    X86_AT(c, 0xf4609u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f460b  push 0x19
    X86_AT(c, 0xf460bu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f460d  push 6
    X86_AT(c, 0xf460du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f460f  call 0xf3c0c
    X86_AT(c, 0xf460fu);
    push32(c, 0xf4614u); f_000f3c0c(c); X86_RET(c, 0xf4614u);
    X86_TICK(c, 15);
    // 0f4614  add esp, 0x40
    X86_AT(c, 0xf4614u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f4617  push 0x33
    X86_AT(c, 0xf4617u);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f4619  push 0x39
    X86_AT(c, 0xf4619u);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0f461b  push 0xf
    X86_AT(c, 0xf461bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f461d  call 0xf3c0c
    X86_AT(c, 0xf461du);
    push32(c, 0xf4622u); f_000f3c0c(c); X86_RET(c, 0xf4622u);
    X86_TICK(c, 13);
    // 0f4622  push 0x1d
    X86_AT(c, 0xf4622u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0f4624  push 0x3b
    X86_AT(c, 0xf4624u);
    { uint32_t v = 0x3Bu; push32(c, v); }
    // 0f4626  push 0xf
    X86_AT(c, 0xf4626u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f4628  call 0xf3c0c
    X86_AT(c, 0xf4628u);
    push32(c, 0xf462du); f_000f3c0c(c); X86_RET(c, 0xf462du);
    X86_TICK(c, 9);
    // 0f462d  push 2
    X86_AT(c, 0xf462du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f462f  call 0xf76bc
    X86_AT(c, 0xf462fu);
    push32(c, 0xf4634u); f_000f76bc(c); X86_RET(c, 0xf4634u);
    X86_TICK(c, 7);
    // 0f4634  jmp 0xf475b
    X86_AT(c, 0xf4634u);
    goto L_f475b;
L_f4639:
    X86_TICK(c, 9);
    // 0f4639  push 0
    X86_AT(c, 0xf4639u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f463b  call 0xe8b90
    X86_AT(c, 0xf463bu);
    push32(c, 0xf4640u); f_000e8b90(c); X86_RET(c, 0xf4640u);
    X86_TICK(c, 13);
    // 0f4640  push 0x16
    X86_AT(c, 0xf4640u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0f4642  push 0x23
    X86_AT(c, 0xf4642u);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0f4644  push 8
    X86_AT(c, 0xf4644u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f4646  call 0xf3c0c
    X86_AT(c, 0xf4646u);
    push32(c, 0xf464bu); f_000f3c0c(c); X86_RET(c, 0xf464bu);
    X86_TICK(c, 13);
    // 0f464b  push 0x14
    X86_AT(c, 0xf464bu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0f464d  push 0x22
    X86_AT(c, 0xf464du);
    { uint32_t v = 0x22u; push32(c, v); }
    // 0f464f  push 0xd
    X86_AT(c, 0xf464fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f4651  call 0xf3c0c
    X86_AT(c, 0xf4651u);
    push32(c, 0xf4656u); f_000f3c0c(c); X86_RET(c, 0xf4656u);
    X86_TICK(c, 13);
    // 0f4656  push 0x1a
    X86_AT(c, 0xf4656u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0f4658  push 0xf
    X86_AT(c, 0xf4658u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f465a  push 7
    X86_AT(c, 0xf465au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f465c  call 0xf3c0c
    X86_AT(c, 0xf465cu);
    push32(c, 0xf4661u); f_000f3c0c(c); X86_RET(c, 0xf4661u);
    X86_TICK(c, 13);
    // 0f4661  push 0x1f
    X86_AT(c, 0xf4661u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f4663  push 0x26
    X86_AT(c, 0xf4663u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f4665  push 0xe
    X86_AT(c, 0xf4665u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f4667  call 0xf3c0c
    X86_AT(c, 0xf4667u);
    push32(c, 0xf466cu); f_000f3c0c(c); X86_RET(c, 0xf466cu);
    X86_TICK(c, 13);
    // 0f466c  push 5
    X86_AT(c, 0xf466cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f466e  push 0x19
    X86_AT(c, 0xf466eu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f4670  push 6
    X86_AT(c, 0xf4670u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4672  call 0xf3c0c
    X86_AT(c, 0xf4672u);
    push32(c, 0xf4677u); f_000f3c0c(c); X86_RET(c, 0xf4677u);
    X86_TICK(c, 15);
    // 0f4677  add esp, 0x40
    X86_AT(c, 0xf4677u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f467a  push 0x33
    X86_AT(c, 0xf467au);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f467c  push 0x39
    X86_AT(c, 0xf467cu);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0f467e  push 0xf
    X86_AT(c, 0xf467eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f4680  call 0xf3c0c
    X86_AT(c, 0xf4680u);
    push32(c, 0xf4685u); f_000f3c0c(c); X86_RET(c, 0xf4685u);
    X86_TICK(c, 9);
    // 0f4685  push 3
    X86_AT(c, 0xf4685u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f4687  call 0xf76bc
    X86_AT(c, 0xf4687u);
    push32(c, 0xf468cu); f_000f76bc(c); X86_RET(c, 0xf468cu);
    X86_TICK(c, 7);
    // 0f468c  jmp 0xf4726
    X86_AT(c, 0xf468cu);
    goto L_f4726;
L_f4691:
    X86_TICK(c, 9);
    // 0f4691  push 0
    X86_AT(c, 0xf4691u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f4693  call 0xe8b90
    X86_AT(c, 0xf4693u);
    push32(c, 0xf4698u); f_000e8b90(c); X86_RET(c, 0xf4698u);
    X86_TICK(c, 13);
    // 0f4698  push 0xe
    X86_AT(c, 0xf4698u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f469a  push 0x2c
    X86_AT(c, 0xf469au);
    { uint32_t v = 0x2Cu; push32(c, v); }
    // 0f469c  push 0xd
    X86_AT(c, 0xf469cu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f469e  call 0xf3c0c
    X86_AT(c, 0xf469eu);
    push32(c, 0xf46a3u); f_000f3c0c(c); X86_RET(c, 0xf46a3u);
    X86_TICK(c, 13);
    // 0f46a3  push 5
    X86_AT(c, 0xf46a3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f46a5  push 0x19
    X86_AT(c, 0xf46a5u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f46a7  push 6
    X86_AT(c, 0xf46a7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f46a9  call 0xf3c0c
    X86_AT(c, 0xf46a9u);
    push32(c, 0xf46aeu); f_000f3c0c(c); X86_RET(c, 0xf46aeu);
    X86_TICK(c, 13);
    // 0f46ae  push 0x33
    X86_AT(c, 0xf46aeu);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f46b0  push 0x39
    X86_AT(c, 0xf46b0u);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0f46b2  push 0xf
    X86_AT(c, 0xf46b2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f46b4  call 0xf3c0c
    X86_AT(c, 0xf46b4u);
    push32(c, 0xf46b9u); f_000f3c0c(c); X86_RET(c, 0xf46b9u);
    X86_TICK(c, 9);
    // 0f46b9  push 4
    X86_AT(c, 0xf46b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f46bb  call 0xf76bc
    X86_AT(c, 0xf46bbu);
    push32(c, 0xf46c0u); f_000f76bc(c); X86_RET(c, 0xf46c0u);
    X86_TICK(c, 9);
    // 0f46c0  add esp, 0x2c
    X86_AT(c, 0xf46c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0f46c3  jmp 0xf475e
    X86_AT(c, 0xf46c3u);
    goto L_f475e;
L_f46c8:
    X86_TICK(c, 13);
    // 0f46c8  push 0xb
    X86_AT(c, 0xf46c8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f46ca  push 0x2a
    X86_AT(c, 0xf46cau);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0f46cc  push 6
    X86_AT(c, 0xf46ccu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f46ce  jmp 0xf46da
    X86_AT(c, 0xf46ceu);
    goto L_f46da;
L_f46d0:
    X86_TICK(c, 9);
    // 0f46d0  push 1
    X86_AT(c, 0xf46d0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f46d2  jmp 0xf46f6
    X86_AT(c, 0xf46d2u);
    goto L_f46f6;
L_f46d4:
    X86_TICK(c, 6);
    // 0f46d4  push 0x1f
    X86_AT(c, 0xf46d4u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f46d6  push 0x20
    X86_AT(c, 0xf46d6u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f46d8  push 7
    X86_AT(c, 0xf46d8u);
    { uint32_t v = 0x7u; push32(c, v); }
L_f46da:
    X86_TICK(c, 7);
    // 0f46da  call 0xf3c0c
    X86_AT(c, 0xf46dau);
    push32(c, 0xf46dfu); f_000f3c0c(c); X86_RET(c, 0xf46dfu);
    X86_TICK(c, 9);
    // 0f46df  push 1
    X86_AT(c, 0xf46dfu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f46e1  jmp 0xf4721
    X86_AT(c, 0xf46e1u);
    goto L_f4721;
L_f46e3:
    X86_TICK(c, 13);
    // 0f46e3  push 0x19
    X86_AT(c, 0xf46e3u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f46e5  push 0x32
    X86_AT(c, 0xf46e5u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0f46e7  push 0xe
    X86_AT(c, 0xf46e7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f46e9  call 0xf3c0c
    X86_AT(c, 0xf46e9u);
    push32(c, 0xf46eeu); f_000f3c0c(c); X86_RET(c, 0xf46eeu);
    X86_TICK(c, 11);
    // 0f46ee  push 0x28
    X86_AT(c, 0xf46eeu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0f46f0  push 0xe
    X86_AT(c, 0xf46f0u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f46f2  jmp 0xf473a
    X86_AT(c, 0xf46f2u);
    goto L_f473a;
L_f46f4:
    X86_TICK(c, 2);
    // 0f46f4  push 2
    X86_AT(c, 0xf46f4u);
    { uint32_t v = 0x2u; push32(c, v); }
L_f46f6:
    X86_TICK(c, 7);
    // 0f46f6  call 0xe8b90
    X86_AT(c, 0xf46f6u);
    push32(c, 0xf46fbu); f_000e8b90(c); X86_RET(c, 0xf46fbu);
    X86_TICK(c, 9);
    // 0f46fb  add esp, 4
    X86_AT(c, 0xf46fbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f46fe  jmp 0xf475e
    X86_AT(c, 0xf46feu);
    goto L_f475e;
L_f4700:
    X86_TICK(c, 9);
    // 0f4700  push 2
    X86_AT(c, 0xf4700u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4702  call 0xe8b90
    X86_AT(c, 0xf4702u);
    push32(c, 0xf4707u); f_000e8b90(c); X86_RET(c, 0xf4707u);
    X86_TICK(c, 13);
    // 0f4707  push 0x27
    X86_AT(c, 0xf4707u);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0f4709  push 0x1b
    X86_AT(c, 0xf4709u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0f470b  push 0xd
    X86_AT(c, 0xf470bu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f470d  call 0xf3c0c
    X86_AT(c, 0xf470du);
    push32(c, 0xf4712u); f_000f3c0c(c); X86_RET(c, 0xf4712u);
    X86_TICK(c, 7);
    // 0f4712  jmp 0xf4726
    X86_AT(c, 0xf4712u);
    goto L_f4726;
L_f4714:
    X86_TICK(c, 13);
    // 0f4714  push 0x1f
    X86_AT(c, 0xf4714u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f4716  push 0x1f
    X86_AT(c, 0xf4716u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f4718  push 0xd
    X86_AT(c, 0xf4718u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f471a  call 0xf3c0c
    X86_AT(c, 0xf471au);
    push32(c, 0xf471fu); f_000f3c0c(c); X86_RET(c, 0xf471fu);
    X86_TICK(c, 2);
    // 0f471f  push 2
    X86_AT(c, 0xf471fu);
    { uint32_t v = 0x2u; push32(c, v); }
L_f4721:
    X86_TICK(c, 7);
    // 0f4721  call 0xe8b90
    X86_AT(c, 0xf4721u);
    push32(c, 0xf4726u); f_000e8b90(c); X86_RET(c, 0xf4726u);
L_f4726:
    X86_TICK(c, 9);
    // 0f4726  add esp, 0x10
    X86_AT(c, 0xf4726u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f4729  jmp 0xf475e
    X86_AT(c, 0xf4729u);
    goto L_f475e;
L_f472b:
    X86_TICK(c, 13);
    // 0f472b  push 0x20
    X86_AT(c, 0xf472bu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f472d  push 0x26
    X86_AT(c, 0xf472du);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f472f  push 7
    X86_AT(c, 0xf472fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f4731  call 0xf3c0c
    X86_AT(c, 0xf4731u);
    push32(c, 0xf4736u); f_000f3c0c(c); X86_RET(c, 0xf4736u);
    X86_TICK(c, 4);
    // 0f4736  push 0x21
    X86_AT(c, 0xf4736u);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f4738  push 0x1d
    X86_AT(c, 0xf4738u);
    { uint32_t v = 0x1Du; push32(c, v); }
L_f473a:
    X86_TICK(c, 9);
    // 0f473a  push 6
    X86_AT(c, 0xf473au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f473c  jmp 0xf474f
    X86_AT(c, 0xf473cu);
    goto L_f474f;
L_f473e:
    X86_TICK(c, 13);
    // 0f473e  push 0xc
    X86_AT(c, 0xf473eu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f4740  push 0xc
    X86_AT(c, 0xf4740u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f4742  push 8
    X86_AT(c, 0xf4742u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f4744  call 0xf3c0c
    X86_AT(c, 0xf4744u);
    push32(c, 0xf4749u); f_000f3c0c(c); X86_RET(c, 0xf4749u);
    X86_TICK(c, 6);
    // 0f4749  push 0x1f
    X86_AT(c, 0xf4749u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f474b  push 8
    X86_AT(c, 0xf474bu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f474d  push 7
    X86_AT(c, 0xf474du);
    { uint32_t v = 0x7u; push32(c, v); }
L_f474f:
    X86_TICK(c, 7);
    // 0f474f  call 0xf3c0c
    X86_AT(c, 0xf474fu);
    push32(c, 0xf4754u); f_000f3c0c(c); X86_RET(c, 0xf4754u);
    X86_TICK(c, 9);
    // 0f4754  push 2
    X86_AT(c, 0xf4754u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4756  call 0xe8b90
    X86_AT(c, 0xf4756u);
    push32(c, 0xf475bu); f_000e8b90(c); X86_RET(c, 0xf475bu);
L_f475b:
    X86_TICK(c, 2);
    // 0f475b  add esp, 0x1c
    X86_AT(c, 0xf475bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_f475e:
    X86_TICK(c, 28);
    // 0f475e  pop edi
    X86_AT(c, 0xf475eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f475f  pop esi
    X86_AT(c, 0xf475fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f4760  pop ebx
    X86_AT(c, 0xf4760u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f4761  leave 
    X86_AT(c, 0xf4761u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f4762  ret 
    X86_AT(c, 0xf4762u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf40feu, "ran off the end of a function");
}
void f_000f443a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f443a  add esp, 0x14
    X86_AT(c, 0xf443au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f443d  jmp 0xf44ff
    X86_AT(c, 0xf443du);
    goto L_f44ff;
L_f44ff:
    X86_TICK(c, 9);
    // 0f44ff  push ebx
    X86_AT(c, 0xf44ffu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f4500  call 0xe3a58
    X86_AT(c, 0xf4500u);
    push32(c, 0xf4505u); f_000e3a58(c); X86_RET(c, 0xf4505u);
    X86_TICK(c, 7);
    // 0f4505  call 0xfb78c
    X86_AT(c, 0xf4505u);
    push32(c, 0xf450au); f_000fb78c(c); X86_RET(c, 0xf450au);
    X86_TICK(c, 9);
    // 0f450a  add esp, 4
    X86_AT(c, 0xf450au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f450d  cmp esi, 2
    X86_AT(c, 0xf450du);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0f4510  je 0xf451c
    X86_AT(c, 0xf4510u);
    if (x86_cc(c, 4)) { goto L_f451c; }
    X86_TICK(c, 7);
    // 0f4512  cmp esi, 1
    X86_AT(c, 0xf4512u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0f4515  je 0xf451c
    X86_AT(c, 0xf4515u);
    if (x86_cc(c, 4)) { goto L_f451c; }
    X86_TICK(c, 7);
    // 0f4517  cmp esi, 3
    X86_AT(c, 0xf4517u);
    (void)x86_sub(c, c.r[6], 0x3u, 0, 4);
    // 0f451a  jne 0xf4521
    X86_AT(c, 0xf451au);
    if (x86_cc(c, 5)) { goto L_f4521; }
L_f451c:
    X86_TICK(c, 7);
    // 0f451c  call 0xf6a98
    X86_AT(c, 0xf451cu);
    push32(c, 0xf4521u); f_000f6a98(c); X86_RET(c, 0xf4521u);
L_f4521:
    X86_TICK(c, 25);
    // 0f4521  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf4521u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f4526  lea edx, [eax + eax*4]
    X86_AT(c, 0xf4526u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f4529  lea edx, [eax + edx*2]
    X86_AT(c, 0xf4529u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f452c  shl edx, 5
    X86_AT(c, 0xf452cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f452f  sub edx, eax
    X86_AT(c, 0xf452fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f4531  cmp dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf4531u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x0u, 0, 4);
    // 0f4538  jne 0xf475e
    X86_AT(c, 0xf4538u);
    if (x86_cc(c, 5)) { goto L_f475e; }
    X86_TICK(c, 9);
    // 0f453e  mov edx, edi
    X86_AT(c, 0xf453eu);
    c.r[2] = c.r[7];
    // 0f4540  cmp edx, 0xd
    X86_AT(c, 0xf4540u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0f4543  ja 0xf475e
    X86_AT(c, 0xf4543u);
    if (x86_cc(c, 7)) { goto L_f475e; }
    X86_TICK(c, 7);
    // 0f4549  jmp dword ptr cs:[edx*4 + 0xf4551]
    X86_AT(c, 0xf4549u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF4551u)));
      switch (t) {
      case 0xf4589u: goto L_f4589;
      case 0xf45aau: goto L_f45aa;
      case 0xf45d6u: goto L_f45d6;
      case 0xf4639u: goto L_f4639;
      case 0xf4691u: goto L_f4691;
      case 0xf46c8u: goto L_f46c8;
      case 0xf46d0u: goto L_f46d0;
      case 0xf46d4u: goto L_f46d4;
      case 0xf46e3u: goto L_f46e3;
      case 0xf46f4u: goto L_f46f4;
      case 0xf4700u: goto L_f4700;
      case 0xf4714u: goto L_f4714;
      case 0xf472bu: goto L_f472b;
      case 0xf473eu: goto L_f473e;
      default: x86_jump(c, t); return; } }
L_f4589:
    X86_TICK(c, 9);
    // 0f4589  push 0
    X86_AT(c, 0xf4589u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f458b  call 0xe8b90
    X86_AT(c, 0xf458bu);
    push32(c, 0xf4590u); f_000e8b90(c); X86_RET(c, 0xf4590u);
    X86_TICK(c, 13);
    // 0f4590  push 0x20
    X86_AT(c, 0xf4590u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f4592  push 0x20
    X86_AT(c, 0xf4592u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f4594  push 8
    X86_AT(c, 0xf4594u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f4596  call 0xf3c0c
    X86_AT(c, 0xf4596u);
    push32(c, 0xf459bu); f_000f3c0c(c); X86_RET(c, 0xf459bu);
    X86_TICK(c, 13);
    // 0f459b  push 0x37
    X86_AT(c, 0xf459bu);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0f459d  push 0x20
    X86_AT(c, 0xf459du);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f459f  push 0xf
    X86_AT(c, 0xf459fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f45a1  call 0xf3c0c
    X86_AT(c, 0xf45a1u);
    push32(c, 0xf45a6u); f_000f3c0c(c); X86_RET(c, 0xf45a6u);
    X86_TICK(c, 9);
    // 0f45a6  push 0
    X86_AT(c, 0xf45a6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f45a8  jmp 0xf45c9
    X86_AT(c, 0xf45a8u);
    goto L_f45c9;
L_f45aa:
    X86_TICK(c, 9);
    // 0f45aa  push 0
    X86_AT(c, 0xf45aau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f45ac  call 0xe8b90
    X86_AT(c, 0xf45acu);
    push32(c, 0xf45b1u); f_000e8b90(c); X86_RET(c, 0xf45b1u);
    X86_TICK(c, 13);
    // 0f45b1  push 0x37
    X86_AT(c, 0xf45b1u);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0f45b3  push 0x14
    X86_AT(c, 0xf45b3u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0f45b5  push 0xd
    X86_AT(c, 0xf45b5u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f45b7  call 0xf3c0c
    X86_AT(c, 0xf45b7u);
    push32(c, 0xf45bcu); f_000f3c0c(c); X86_RET(c, 0xf45bcu);
    X86_TICK(c, 13);
    // 0f45bc  push 0x3a
    X86_AT(c, 0xf45bcu);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0f45be  push 0x21
    X86_AT(c, 0xf45beu);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f45c0  push 0xf
    X86_AT(c, 0xf45c0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f45c2  call 0xf3c0c
    X86_AT(c, 0xf45c2u);
    push32(c, 0xf45c7u); f_000f3c0c(c); X86_RET(c, 0xf45c7u);
    X86_TICK(c, 2);
    // 0f45c7  push 1
    X86_AT(c, 0xf45c7u);
    { uint32_t v = 0x1u; push32(c, v); }
L_f45c9:
    X86_TICK(c, 7);
    // 0f45c9  call 0xf76bc
    X86_AT(c, 0xf45c9u);
    push32(c, 0xf45ceu); f_000f76bc(c); X86_RET(c, 0xf45ceu);
    X86_TICK(c, 9);
    // 0f45ce  add esp, 0x20
    X86_AT(c, 0xf45ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f45d1  jmp 0xf475e
    X86_AT(c, 0xf45d1u);
    goto L_f475e;
L_f45d6:
    X86_TICK(c, 9);
    // 0f45d6  push 0
    X86_AT(c, 0xf45d6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f45d8  call 0xe8b90
    X86_AT(c, 0xf45d8u);
    push32(c, 0xf45ddu); f_000e8b90(c); X86_RET(c, 0xf45ddu);
    X86_TICK(c, 13);
    // 0f45dd  push 0x16
    X86_AT(c, 0xf45ddu);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0f45df  push 0x23
    X86_AT(c, 0xf45dfu);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0f45e1  push 8
    X86_AT(c, 0xf45e1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f45e3  call 0xf3c0c
    X86_AT(c, 0xf45e3u);
    push32(c, 0xf45e8u); f_000f3c0c(c); X86_RET(c, 0xf45e8u);
    X86_TICK(c, 13);
    // 0f45e8  push 0x2e
    X86_AT(c, 0xf45e8u);
    { uint32_t v = 0x2Eu; push32(c, v); }
    // 0f45ea  push 0x26
    X86_AT(c, 0xf45eau);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f45ec  push 0xd
    X86_AT(c, 0xf45ecu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f45ee  call 0xf3c0c
    X86_AT(c, 0xf45eeu);
    push32(c, 0xf45f3u); f_000f3c0c(c); X86_RET(c, 0xf45f3u);
    X86_TICK(c, 13);
    // 0f45f3  push 0x1d
    X86_AT(c, 0xf45f3u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0f45f5  push 0x24
    X86_AT(c, 0xf45f5u);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0f45f7  push 7
    X86_AT(c, 0xf45f7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f45f9  call 0xf3c0c
    X86_AT(c, 0xf45f9u);
    push32(c, 0xf45feu); f_000f3c0c(c); X86_RET(c, 0xf45feu);
    X86_TICK(c, 13);
    // 0f45fe  push 0x28
    X86_AT(c, 0xf45feu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0f4600  push 0x18
    X86_AT(c, 0xf4600u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0f4602  push 0xe
    X86_AT(c, 0xf4602u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f4604  call 0xf3c0c
    X86_AT(c, 0xf4604u);
    push32(c, 0xf4609u); f_000f3c0c(c); X86_RET(c, 0xf4609u);
    X86_TICK(c, 13);
    // 0f4609  push 5
    X86_AT(c, 0xf4609u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f460b  push 0x19
    X86_AT(c, 0xf460bu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f460d  push 6
    X86_AT(c, 0xf460du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f460f  call 0xf3c0c
    X86_AT(c, 0xf460fu);
    push32(c, 0xf4614u); f_000f3c0c(c); X86_RET(c, 0xf4614u);
    X86_TICK(c, 15);
    // 0f4614  add esp, 0x40
    X86_AT(c, 0xf4614u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f4617  push 0x33
    X86_AT(c, 0xf4617u);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f4619  push 0x39
    X86_AT(c, 0xf4619u);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0f461b  push 0xf
    X86_AT(c, 0xf461bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f461d  call 0xf3c0c
    X86_AT(c, 0xf461du);
    push32(c, 0xf4622u); f_000f3c0c(c); X86_RET(c, 0xf4622u);
    X86_TICK(c, 13);
    // 0f4622  push 0x1d
    X86_AT(c, 0xf4622u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0f4624  push 0x3b
    X86_AT(c, 0xf4624u);
    { uint32_t v = 0x3Bu; push32(c, v); }
    // 0f4626  push 0xf
    X86_AT(c, 0xf4626u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f4628  call 0xf3c0c
    X86_AT(c, 0xf4628u);
    push32(c, 0xf462du); f_000f3c0c(c); X86_RET(c, 0xf462du);
    X86_TICK(c, 9);
    // 0f462d  push 2
    X86_AT(c, 0xf462du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f462f  call 0xf76bc
    X86_AT(c, 0xf462fu);
    push32(c, 0xf4634u); f_000f76bc(c); X86_RET(c, 0xf4634u);
    X86_TICK(c, 7);
    // 0f4634  jmp 0xf475b
    X86_AT(c, 0xf4634u);
    goto L_f475b;
L_f4639:
    X86_TICK(c, 9);
    // 0f4639  push 0
    X86_AT(c, 0xf4639u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f463b  call 0xe8b90
    X86_AT(c, 0xf463bu);
    push32(c, 0xf4640u); f_000e8b90(c); X86_RET(c, 0xf4640u);
    X86_TICK(c, 13);
    // 0f4640  push 0x16
    X86_AT(c, 0xf4640u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0f4642  push 0x23
    X86_AT(c, 0xf4642u);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0f4644  push 8
    X86_AT(c, 0xf4644u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f4646  call 0xf3c0c
    X86_AT(c, 0xf4646u);
    push32(c, 0xf464bu); f_000f3c0c(c); X86_RET(c, 0xf464bu);
    X86_TICK(c, 13);
    // 0f464b  push 0x14
    X86_AT(c, 0xf464bu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0f464d  push 0x22
    X86_AT(c, 0xf464du);
    { uint32_t v = 0x22u; push32(c, v); }
    // 0f464f  push 0xd
    X86_AT(c, 0xf464fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f4651  call 0xf3c0c
    X86_AT(c, 0xf4651u);
    push32(c, 0xf4656u); f_000f3c0c(c); X86_RET(c, 0xf4656u);
    X86_TICK(c, 13);
    // 0f4656  push 0x1a
    X86_AT(c, 0xf4656u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0f4658  push 0xf
    X86_AT(c, 0xf4658u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f465a  push 7
    X86_AT(c, 0xf465au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f465c  call 0xf3c0c
    X86_AT(c, 0xf465cu);
    push32(c, 0xf4661u); f_000f3c0c(c); X86_RET(c, 0xf4661u);
    X86_TICK(c, 13);
    // 0f4661  push 0x1f
    X86_AT(c, 0xf4661u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f4663  push 0x26
    X86_AT(c, 0xf4663u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f4665  push 0xe
    X86_AT(c, 0xf4665u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f4667  call 0xf3c0c
    X86_AT(c, 0xf4667u);
    push32(c, 0xf466cu); f_000f3c0c(c); X86_RET(c, 0xf466cu);
    X86_TICK(c, 13);
    // 0f466c  push 5
    X86_AT(c, 0xf466cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f466e  push 0x19
    X86_AT(c, 0xf466eu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f4670  push 6
    X86_AT(c, 0xf4670u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4672  call 0xf3c0c
    X86_AT(c, 0xf4672u);
    push32(c, 0xf4677u); f_000f3c0c(c); X86_RET(c, 0xf4677u);
    X86_TICK(c, 15);
    // 0f4677  add esp, 0x40
    X86_AT(c, 0xf4677u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f467a  push 0x33
    X86_AT(c, 0xf467au);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f467c  push 0x39
    X86_AT(c, 0xf467cu);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0f467e  push 0xf
    X86_AT(c, 0xf467eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f4680  call 0xf3c0c
    X86_AT(c, 0xf4680u);
    push32(c, 0xf4685u); f_000f3c0c(c); X86_RET(c, 0xf4685u);
    X86_TICK(c, 9);
    // 0f4685  push 3
    X86_AT(c, 0xf4685u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f4687  call 0xf76bc
    X86_AT(c, 0xf4687u);
    push32(c, 0xf468cu); f_000f76bc(c); X86_RET(c, 0xf468cu);
    X86_TICK(c, 7);
    // 0f468c  jmp 0xf4726
    X86_AT(c, 0xf468cu);
    goto L_f4726;
L_f4691:
    X86_TICK(c, 9);
    // 0f4691  push 0
    X86_AT(c, 0xf4691u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f4693  call 0xe8b90
    X86_AT(c, 0xf4693u);
    push32(c, 0xf4698u); f_000e8b90(c); X86_RET(c, 0xf4698u);
    X86_TICK(c, 13);
    // 0f4698  push 0xe
    X86_AT(c, 0xf4698u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f469a  push 0x2c
    X86_AT(c, 0xf469au);
    { uint32_t v = 0x2Cu; push32(c, v); }
    // 0f469c  push 0xd
    X86_AT(c, 0xf469cu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f469e  call 0xf3c0c
    X86_AT(c, 0xf469eu);
    push32(c, 0xf46a3u); f_000f3c0c(c); X86_RET(c, 0xf46a3u);
    X86_TICK(c, 13);
    // 0f46a3  push 5
    X86_AT(c, 0xf46a3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f46a5  push 0x19
    X86_AT(c, 0xf46a5u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f46a7  push 6
    X86_AT(c, 0xf46a7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f46a9  call 0xf3c0c
    X86_AT(c, 0xf46a9u);
    push32(c, 0xf46aeu); f_000f3c0c(c); X86_RET(c, 0xf46aeu);
    X86_TICK(c, 13);
    // 0f46ae  push 0x33
    X86_AT(c, 0xf46aeu);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f46b0  push 0x39
    X86_AT(c, 0xf46b0u);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0f46b2  push 0xf
    X86_AT(c, 0xf46b2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f46b4  call 0xf3c0c
    X86_AT(c, 0xf46b4u);
    push32(c, 0xf46b9u); f_000f3c0c(c); X86_RET(c, 0xf46b9u);
    X86_TICK(c, 9);
    // 0f46b9  push 4
    X86_AT(c, 0xf46b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f46bb  call 0xf76bc
    X86_AT(c, 0xf46bbu);
    push32(c, 0xf46c0u); f_000f76bc(c); X86_RET(c, 0xf46c0u);
    X86_TICK(c, 9);
    // 0f46c0  add esp, 0x2c
    X86_AT(c, 0xf46c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0f46c3  jmp 0xf475e
    X86_AT(c, 0xf46c3u);
    goto L_f475e;
L_f46c8:
    X86_TICK(c, 13);
    // 0f46c8  push 0xb
    X86_AT(c, 0xf46c8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f46ca  push 0x2a
    X86_AT(c, 0xf46cau);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0f46cc  push 6
    X86_AT(c, 0xf46ccu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f46ce  jmp 0xf46da
    X86_AT(c, 0xf46ceu);
    goto L_f46da;
L_f46d0:
    X86_TICK(c, 9);
    // 0f46d0  push 1
    X86_AT(c, 0xf46d0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f46d2  jmp 0xf46f6
    X86_AT(c, 0xf46d2u);
    goto L_f46f6;
L_f46d4:
    X86_TICK(c, 6);
    // 0f46d4  push 0x1f
    X86_AT(c, 0xf46d4u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f46d6  push 0x20
    X86_AT(c, 0xf46d6u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f46d8  push 7
    X86_AT(c, 0xf46d8u);
    { uint32_t v = 0x7u; push32(c, v); }
L_f46da:
    X86_TICK(c, 7);
    // 0f46da  call 0xf3c0c
    X86_AT(c, 0xf46dau);
    push32(c, 0xf46dfu); f_000f3c0c(c); X86_RET(c, 0xf46dfu);
    X86_TICK(c, 9);
    // 0f46df  push 1
    X86_AT(c, 0xf46dfu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f46e1  jmp 0xf4721
    X86_AT(c, 0xf46e1u);
    goto L_f4721;
L_f46e3:
    X86_TICK(c, 13);
    // 0f46e3  push 0x19
    X86_AT(c, 0xf46e3u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f46e5  push 0x32
    X86_AT(c, 0xf46e5u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0f46e7  push 0xe
    X86_AT(c, 0xf46e7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f46e9  call 0xf3c0c
    X86_AT(c, 0xf46e9u);
    push32(c, 0xf46eeu); f_000f3c0c(c); X86_RET(c, 0xf46eeu);
    X86_TICK(c, 11);
    // 0f46ee  push 0x28
    X86_AT(c, 0xf46eeu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0f46f0  push 0xe
    X86_AT(c, 0xf46f0u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f46f2  jmp 0xf473a
    X86_AT(c, 0xf46f2u);
    goto L_f473a;
L_f46f4:
    X86_TICK(c, 2);
    // 0f46f4  push 2
    X86_AT(c, 0xf46f4u);
    { uint32_t v = 0x2u; push32(c, v); }
L_f46f6:
    X86_TICK(c, 7);
    // 0f46f6  call 0xe8b90
    X86_AT(c, 0xf46f6u);
    push32(c, 0xf46fbu); f_000e8b90(c); X86_RET(c, 0xf46fbu);
    X86_TICK(c, 9);
    // 0f46fb  add esp, 4
    X86_AT(c, 0xf46fbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f46fe  jmp 0xf475e
    X86_AT(c, 0xf46feu);
    goto L_f475e;
L_f4700:
    X86_TICK(c, 9);
    // 0f4700  push 2
    X86_AT(c, 0xf4700u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4702  call 0xe8b90
    X86_AT(c, 0xf4702u);
    push32(c, 0xf4707u); f_000e8b90(c); X86_RET(c, 0xf4707u);
    X86_TICK(c, 13);
    // 0f4707  push 0x27
    X86_AT(c, 0xf4707u);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0f4709  push 0x1b
    X86_AT(c, 0xf4709u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0f470b  push 0xd
    X86_AT(c, 0xf470bu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f470d  call 0xf3c0c
    X86_AT(c, 0xf470du);
    push32(c, 0xf4712u); f_000f3c0c(c); X86_RET(c, 0xf4712u);
    X86_TICK(c, 7);
    // 0f4712  jmp 0xf4726
    X86_AT(c, 0xf4712u);
    goto L_f4726;
L_f4714:
    X86_TICK(c, 13);
    // 0f4714  push 0x1f
    X86_AT(c, 0xf4714u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f4716  push 0x1f
    X86_AT(c, 0xf4716u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f4718  push 0xd
    X86_AT(c, 0xf4718u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f471a  call 0xf3c0c
    X86_AT(c, 0xf471au);
    push32(c, 0xf471fu); f_000f3c0c(c); X86_RET(c, 0xf471fu);
    X86_TICK(c, 2);
    // 0f471f  push 2
    X86_AT(c, 0xf471fu);
    { uint32_t v = 0x2u; push32(c, v); }
L_f4721:
    X86_TICK(c, 7);
    // 0f4721  call 0xe8b90
    X86_AT(c, 0xf4721u);
    push32(c, 0xf4726u); f_000e8b90(c); X86_RET(c, 0xf4726u);
L_f4726:
    X86_TICK(c, 9);
    // 0f4726  add esp, 0x10
    X86_AT(c, 0xf4726u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f4729  jmp 0xf475e
    X86_AT(c, 0xf4729u);
    goto L_f475e;
L_f472b:
    X86_TICK(c, 13);
    // 0f472b  push 0x20
    X86_AT(c, 0xf472bu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f472d  push 0x26
    X86_AT(c, 0xf472du);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f472f  push 7
    X86_AT(c, 0xf472fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f4731  call 0xf3c0c
    X86_AT(c, 0xf4731u);
    push32(c, 0xf4736u); f_000f3c0c(c); X86_RET(c, 0xf4736u);
    X86_TICK(c, 4);
    // 0f4736  push 0x21
    X86_AT(c, 0xf4736u);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f4738  push 0x1d
    X86_AT(c, 0xf4738u);
    { uint32_t v = 0x1Du; push32(c, v); }
L_f473a:
    X86_TICK(c, 9);
    // 0f473a  push 6
    X86_AT(c, 0xf473au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f473c  jmp 0xf474f
    X86_AT(c, 0xf473cu);
    goto L_f474f;
L_f473e:
    X86_TICK(c, 13);
    // 0f473e  push 0xc
    X86_AT(c, 0xf473eu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f4740  push 0xc
    X86_AT(c, 0xf4740u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f4742  push 8
    X86_AT(c, 0xf4742u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f4744  call 0xf3c0c
    X86_AT(c, 0xf4744u);
    push32(c, 0xf4749u); f_000f3c0c(c); X86_RET(c, 0xf4749u);
    X86_TICK(c, 6);
    // 0f4749  push 0x1f
    X86_AT(c, 0xf4749u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f474b  push 8
    X86_AT(c, 0xf474bu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f474d  push 7
    X86_AT(c, 0xf474du);
    { uint32_t v = 0x7u; push32(c, v); }
L_f474f:
    X86_TICK(c, 7);
    // 0f474f  call 0xf3c0c
    X86_AT(c, 0xf474fu);
    push32(c, 0xf4754u); f_000f3c0c(c); X86_RET(c, 0xf4754u);
    X86_TICK(c, 9);
    // 0f4754  push 2
    X86_AT(c, 0xf4754u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4756  call 0xe8b90
    X86_AT(c, 0xf4756u);
    push32(c, 0xf475bu); f_000e8b90(c); X86_RET(c, 0xf475bu);
L_f475b:
    X86_TICK(c, 2);
    // 0f475b  add esp, 0x1c
    X86_AT(c, 0xf475bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_f475e:
    X86_TICK(c, 28);
    // 0f475e  pop edi
    X86_AT(c, 0xf475eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f475f  pop esi
    X86_AT(c, 0xf475fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f4760  pop ebx
    X86_AT(c, 0xf4760u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f4761  leave 
    X86_AT(c, 0xf4761u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f4762  ret 
    X86_AT(c, 0xf4762u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf443au, "ran off the end of a function");
}
void f_000f44ff(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f44ff  push ebx
    X86_AT(c, 0xf44ffu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f4500  call 0xe3a58
    X86_AT(c, 0xf4500u);
    push32(c, 0xf4505u); f_000e3a58(c); X86_RET(c, 0xf4505u);
    X86_TICK(c, 7);
    // 0f4505  call 0xfb78c
    X86_AT(c, 0xf4505u);
    push32(c, 0xf450au); f_000fb78c(c); X86_RET(c, 0xf450au);
    X86_TICK(c, 9);
    // 0f450a  add esp, 4
    X86_AT(c, 0xf450au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f450d  cmp esi, 2
    X86_AT(c, 0xf450du);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0f4510  je 0xf451c
    X86_AT(c, 0xf4510u);
    if (x86_cc(c, 4)) { goto L_f451c; }
    X86_TICK(c, 7);
    // 0f4512  cmp esi, 1
    X86_AT(c, 0xf4512u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0f4515  je 0xf451c
    X86_AT(c, 0xf4515u);
    if (x86_cc(c, 4)) { goto L_f451c; }
    X86_TICK(c, 7);
    // 0f4517  cmp esi, 3
    X86_AT(c, 0xf4517u);
    (void)x86_sub(c, c.r[6], 0x3u, 0, 4);
    // 0f451a  jne 0xf4521
    X86_AT(c, 0xf451au);
    if (x86_cc(c, 5)) { goto L_f4521; }
L_f451c:
    X86_TICK(c, 7);
    // 0f451c  call 0xf6a98
    X86_AT(c, 0xf451cu);
    push32(c, 0xf4521u); f_000f6a98(c); X86_RET(c, 0xf4521u);
L_f4521:
    X86_TICK(c, 25);
    // 0f4521  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf4521u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f4526  lea edx, [eax + eax*4]
    X86_AT(c, 0xf4526u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f4529  lea edx, [eax + edx*2]
    X86_AT(c, 0xf4529u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f452c  shl edx, 5
    X86_AT(c, 0xf452cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f452f  sub edx, eax
    X86_AT(c, 0xf452fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f4531  cmp dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf4531u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x0u, 0, 4);
    // 0f4538  jne 0xf475e
    X86_AT(c, 0xf4538u);
    if (x86_cc(c, 5)) { goto L_f475e; }
    X86_TICK(c, 9);
    // 0f453e  mov edx, edi
    X86_AT(c, 0xf453eu);
    c.r[2] = c.r[7];
    // 0f4540  cmp edx, 0xd
    X86_AT(c, 0xf4540u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0f4543  ja 0xf475e
    X86_AT(c, 0xf4543u);
    if (x86_cc(c, 7)) { goto L_f475e; }
    X86_TICK(c, 7);
    // 0f4549  jmp dword ptr cs:[edx*4 + 0xf4551]
    X86_AT(c, 0xf4549u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF4551u)));
      switch (t) {
      case 0xf4589u: goto L_f4589;
      case 0xf45aau: goto L_f45aa;
      case 0xf45d6u: goto L_f45d6;
      case 0xf4639u: goto L_f4639;
      case 0xf4691u: goto L_f4691;
      case 0xf46c8u: goto L_f46c8;
      case 0xf46d0u: goto L_f46d0;
      case 0xf46d4u: goto L_f46d4;
      case 0xf46e3u: goto L_f46e3;
      case 0xf46f4u: goto L_f46f4;
      case 0xf4700u: goto L_f4700;
      case 0xf4714u: goto L_f4714;
      case 0xf472bu: goto L_f472b;
      case 0xf473eu: goto L_f473e;
      default: x86_jump(c, t); return; } }
L_f4589:
    X86_TICK(c, 9);
    // 0f4589  push 0
    X86_AT(c, 0xf4589u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f458b  call 0xe8b90
    X86_AT(c, 0xf458bu);
    push32(c, 0xf4590u); f_000e8b90(c); X86_RET(c, 0xf4590u);
    X86_TICK(c, 13);
    // 0f4590  push 0x20
    X86_AT(c, 0xf4590u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f4592  push 0x20
    X86_AT(c, 0xf4592u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f4594  push 8
    X86_AT(c, 0xf4594u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f4596  call 0xf3c0c
    X86_AT(c, 0xf4596u);
    push32(c, 0xf459bu); f_000f3c0c(c); X86_RET(c, 0xf459bu);
    X86_TICK(c, 13);
    // 0f459b  push 0x37
    X86_AT(c, 0xf459bu);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0f459d  push 0x20
    X86_AT(c, 0xf459du);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f459f  push 0xf
    X86_AT(c, 0xf459fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f45a1  call 0xf3c0c
    X86_AT(c, 0xf45a1u);
    push32(c, 0xf45a6u); f_000f3c0c(c); X86_RET(c, 0xf45a6u);
    X86_TICK(c, 9);
    // 0f45a6  push 0
    X86_AT(c, 0xf45a6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f45a8  jmp 0xf45c9
    X86_AT(c, 0xf45a8u);
    goto L_f45c9;
L_f45aa:
    X86_TICK(c, 9);
    // 0f45aa  push 0
    X86_AT(c, 0xf45aau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f45ac  call 0xe8b90
    X86_AT(c, 0xf45acu);
    push32(c, 0xf45b1u); f_000e8b90(c); X86_RET(c, 0xf45b1u);
    X86_TICK(c, 13);
    // 0f45b1  push 0x37
    X86_AT(c, 0xf45b1u);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0f45b3  push 0x14
    X86_AT(c, 0xf45b3u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0f45b5  push 0xd
    X86_AT(c, 0xf45b5u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f45b7  call 0xf3c0c
    X86_AT(c, 0xf45b7u);
    push32(c, 0xf45bcu); f_000f3c0c(c); X86_RET(c, 0xf45bcu);
    X86_TICK(c, 13);
    // 0f45bc  push 0x3a
    X86_AT(c, 0xf45bcu);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0f45be  push 0x21
    X86_AT(c, 0xf45beu);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f45c0  push 0xf
    X86_AT(c, 0xf45c0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f45c2  call 0xf3c0c
    X86_AT(c, 0xf45c2u);
    push32(c, 0xf45c7u); f_000f3c0c(c); X86_RET(c, 0xf45c7u);
    X86_TICK(c, 2);
    // 0f45c7  push 1
    X86_AT(c, 0xf45c7u);
    { uint32_t v = 0x1u; push32(c, v); }
L_f45c9:
    X86_TICK(c, 7);
    // 0f45c9  call 0xf76bc
    X86_AT(c, 0xf45c9u);
    push32(c, 0xf45ceu); f_000f76bc(c); X86_RET(c, 0xf45ceu);
    X86_TICK(c, 9);
    // 0f45ce  add esp, 0x20
    X86_AT(c, 0xf45ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f45d1  jmp 0xf475e
    X86_AT(c, 0xf45d1u);
    goto L_f475e;
L_f45d6:
    X86_TICK(c, 9);
    // 0f45d6  push 0
    X86_AT(c, 0xf45d6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f45d8  call 0xe8b90
    X86_AT(c, 0xf45d8u);
    push32(c, 0xf45ddu); f_000e8b90(c); X86_RET(c, 0xf45ddu);
    X86_TICK(c, 13);
    // 0f45dd  push 0x16
    X86_AT(c, 0xf45ddu);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0f45df  push 0x23
    X86_AT(c, 0xf45dfu);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0f45e1  push 8
    X86_AT(c, 0xf45e1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f45e3  call 0xf3c0c
    X86_AT(c, 0xf45e3u);
    push32(c, 0xf45e8u); f_000f3c0c(c); X86_RET(c, 0xf45e8u);
    X86_TICK(c, 13);
    // 0f45e8  push 0x2e
    X86_AT(c, 0xf45e8u);
    { uint32_t v = 0x2Eu; push32(c, v); }
    // 0f45ea  push 0x26
    X86_AT(c, 0xf45eau);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f45ec  push 0xd
    X86_AT(c, 0xf45ecu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f45ee  call 0xf3c0c
    X86_AT(c, 0xf45eeu);
    push32(c, 0xf45f3u); f_000f3c0c(c); X86_RET(c, 0xf45f3u);
    X86_TICK(c, 13);
    // 0f45f3  push 0x1d
    X86_AT(c, 0xf45f3u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0f45f5  push 0x24
    X86_AT(c, 0xf45f5u);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0f45f7  push 7
    X86_AT(c, 0xf45f7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f45f9  call 0xf3c0c
    X86_AT(c, 0xf45f9u);
    push32(c, 0xf45feu); f_000f3c0c(c); X86_RET(c, 0xf45feu);
    X86_TICK(c, 13);
    // 0f45fe  push 0x28
    X86_AT(c, 0xf45feu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0f4600  push 0x18
    X86_AT(c, 0xf4600u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0f4602  push 0xe
    X86_AT(c, 0xf4602u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f4604  call 0xf3c0c
    X86_AT(c, 0xf4604u);
    push32(c, 0xf4609u); f_000f3c0c(c); X86_RET(c, 0xf4609u);
    X86_TICK(c, 13);
    // 0f4609  push 5
    X86_AT(c, 0xf4609u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f460b  push 0x19
    X86_AT(c, 0xf460bu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f460d  push 6
    X86_AT(c, 0xf460du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f460f  call 0xf3c0c
    X86_AT(c, 0xf460fu);
    push32(c, 0xf4614u); f_000f3c0c(c); X86_RET(c, 0xf4614u);
    X86_TICK(c, 15);
    // 0f4614  add esp, 0x40
    X86_AT(c, 0xf4614u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f4617  push 0x33
    X86_AT(c, 0xf4617u);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f4619  push 0x39
    X86_AT(c, 0xf4619u);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0f461b  push 0xf
    X86_AT(c, 0xf461bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f461d  call 0xf3c0c
    X86_AT(c, 0xf461du);
    push32(c, 0xf4622u); f_000f3c0c(c); X86_RET(c, 0xf4622u);
    X86_TICK(c, 13);
    // 0f4622  push 0x1d
    X86_AT(c, 0xf4622u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0f4624  push 0x3b
    X86_AT(c, 0xf4624u);
    { uint32_t v = 0x3Bu; push32(c, v); }
    // 0f4626  push 0xf
    X86_AT(c, 0xf4626u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f4628  call 0xf3c0c
    X86_AT(c, 0xf4628u);
    push32(c, 0xf462du); f_000f3c0c(c); X86_RET(c, 0xf462du);
    X86_TICK(c, 9);
    // 0f462d  push 2
    X86_AT(c, 0xf462du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f462f  call 0xf76bc
    X86_AT(c, 0xf462fu);
    push32(c, 0xf4634u); f_000f76bc(c); X86_RET(c, 0xf4634u);
    X86_TICK(c, 7);
    // 0f4634  jmp 0xf475b
    X86_AT(c, 0xf4634u);
    goto L_f475b;
L_f4639:
    X86_TICK(c, 9);
    // 0f4639  push 0
    X86_AT(c, 0xf4639u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f463b  call 0xe8b90
    X86_AT(c, 0xf463bu);
    push32(c, 0xf4640u); f_000e8b90(c); X86_RET(c, 0xf4640u);
    X86_TICK(c, 13);
    // 0f4640  push 0x16
    X86_AT(c, 0xf4640u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0f4642  push 0x23
    X86_AT(c, 0xf4642u);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0f4644  push 8
    X86_AT(c, 0xf4644u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f4646  call 0xf3c0c
    X86_AT(c, 0xf4646u);
    push32(c, 0xf464bu); f_000f3c0c(c); X86_RET(c, 0xf464bu);
    X86_TICK(c, 13);
    // 0f464b  push 0x14
    X86_AT(c, 0xf464bu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0f464d  push 0x22
    X86_AT(c, 0xf464du);
    { uint32_t v = 0x22u; push32(c, v); }
    // 0f464f  push 0xd
    X86_AT(c, 0xf464fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f4651  call 0xf3c0c
    X86_AT(c, 0xf4651u);
    push32(c, 0xf4656u); f_000f3c0c(c); X86_RET(c, 0xf4656u);
    X86_TICK(c, 13);
    // 0f4656  push 0x1a
    X86_AT(c, 0xf4656u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0f4658  push 0xf
    X86_AT(c, 0xf4658u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f465a  push 7
    X86_AT(c, 0xf465au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f465c  call 0xf3c0c
    X86_AT(c, 0xf465cu);
    push32(c, 0xf4661u); f_000f3c0c(c); X86_RET(c, 0xf4661u);
    X86_TICK(c, 13);
    // 0f4661  push 0x1f
    X86_AT(c, 0xf4661u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f4663  push 0x26
    X86_AT(c, 0xf4663u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f4665  push 0xe
    X86_AT(c, 0xf4665u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f4667  call 0xf3c0c
    X86_AT(c, 0xf4667u);
    push32(c, 0xf466cu); f_000f3c0c(c); X86_RET(c, 0xf466cu);
    X86_TICK(c, 13);
    // 0f466c  push 5
    X86_AT(c, 0xf466cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f466e  push 0x19
    X86_AT(c, 0xf466eu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f4670  push 6
    X86_AT(c, 0xf4670u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4672  call 0xf3c0c
    X86_AT(c, 0xf4672u);
    push32(c, 0xf4677u); f_000f3c0c(c); X86_RET(c, 0xf4677u);
    X86_TICK(c, 15);
    // 0f4677  add esp, 0x40
    X86_AT(c, 0xf4677u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f467a  push 0x33
    X86_AT(c, 0xf467au);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f467c  push 0x39
    X86_AT(c, 0xf467cu);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0f467e  push 0xf
    X86_AT(c, 0xf467eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f4680  call 0xf3c0c
    X86_AT(c, 0xf4680u);
    push32(c, 0xf4685u); f_000f3c0c(c); X86_RET(c, 0xf4685u);
    X86_TICK(c, 9);
    // 0f4685  push 3
    X86_AT(c, 0xf4685u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f4687  call 0xf76bc
    X86_AT(c, 0xf4687u);
    push32(c, 0xf468cu); f_000f76bc(c); X86_RET(c, 0xf468cu);
    X86_TICK(c, 7);
    // 0f468c  jmp 0xf4726
    X86_AT(c, 0xf468cu);
    goto L_f4726;
L_f4691:
    X86_TICK(c, 9);
    // 0f4691  push 0
    X86_AT(c, 0xf4691u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f4693  call 0xe8b90
    X86_AT(c, 0xf4693u);
    push32(c, 0xf4698u); f_000e8b90(c); X86_RET(c, 0xf4698u);
    X86_TICK(c, 13);
    // 0f4698  push 0xe
    X86_AT(c, 0xf4698u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f469a  push 0x2c
    X86_AT(c, 0xf469au);
    { uint32_t v = 0x2Cu; push32(c, v); }
    // 0f469c  push 0xd
    X86_AT(c, 0xf469cu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f469e  call 0xf3c0c
    X86_AT(c, 0xf469eu);
    push32(c, 0xf46a3u); f_000f3c0c(c); X86_RET(c, 0xf46a3u);
    X86_TICK(c, 13);
    // 0f46a3  push 5
    X86_AT(c, 0xf46a3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f46a5  push 0x19
    X86_AT(c, 0xf46a5u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f46a7  push 6
    X86_AT(c, 0xf46a7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f46a9  call 0xf3c0c
    X86_AT(c, 0xf46a9u);
    push32(c, 0xf46aeu); f_000f3c0c(c); X86_RET(c, 0xf46aeu);
    X86_TICK(c, 13);
    // 0f46ae  push 0x33
    X86_AT(c, 0xf46aeu);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0f46b0  push 0x39
    X86_AT(c, 0xf46b0u);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0f46b2  push 0xf
    X86_AT(c, 0xf46b2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f46b4  call 0xf3c0c
    X86_AT(c, 0xf46b4u);
    push32(c, 0xf46b9u); f_000f3c0c(c); X86_RET(c, 0xf46b9u);
    X86_TICK(c, 9);
    // 0f46b9  push 4
    X86_AT(c, 0xf46b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f46bb  call 0xf76bc
    X86_AT(c, 0xf46bbu);
    push32(c, 0xf46c0u); f_000f76bc(c); X86_RET(c, 0xf46c0u);
    X86_TICK(c, 9);
    // 0f46c0  add esp, 0x2c
    X86_AT(c, 0xf46c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0f46c3  jmp 0xf475e
    X86_AT(c, 0xf46c3u);
    goto L_f475e;
L_f46c8:
    X86_TICK(c, 13);
    // 0f46c8  push 0xb
    X86_AT(c, 0xf46c8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f46ca  push 0x2a
    X86_AT(c, 0xf46cau);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0f46cc  push 6
    X86_AT(c, 0xf46ccu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f46ce  jmp 0xf46da
    X86_AT(c, 0xf46ceu);
    goto L_f46da;
L_f46d0:
    X86_TICK(c, 9);
    // 0f46d0  push 1
    X86_AT(c, 0xf46d0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f46d2  jmp 0xf46f6
    X86_AT(c, 0xf46d2u);
    goto L_f46f6;
L_f46d4:
    X86_TICK(c, 6);
    // 0f46d4  push 0x1f
    X86_AT(c, 0xf46d4u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f46d6  push 0x20
    X86_AT(c, 0xf46d6u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f46d8  push 7
    X86_AT(c, 0xf46d8u);
    { uint32_t v = 0x7u; push32(c, v); }
L_f46da:
    X86_TICK(c, 7);
    // 0f46da  call 0xf3c0c
    X86_AT(c, 0xf46dau);
    push32(c, 0xf46dfu); f_000f3c0c(c); X86_RET(c, 0xf46dfu);
    X86_TICK(c, 9);
    // 0f46df  push 1
    X86_AT(c, 0xf46dfu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f46e1  jmp 0xf4721
    X86_AT(c, 0xf46e1u);
    goto L_f4721;
L_f46e3:
    X86_TICK(c, 13);
    // 0f46e3  push 0x19
    X86_AT(c, 0xf46e3u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0f46e5  push 0x32
    X86_AT(c, 0xf46e5u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0f46e7  push 0xe
    X86_AT(c, 0xf46e7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f46e9  call 0xf3c0c
    X86_AT(c, 0xf46e9u);
    push32(c, 0xf46eeu); f_000f3c0c(c); X86_RET(c, 0xf46eeu);
    X86_TICK(c, 11);
    // 0f46ee  push 0x28
    X86_AT(c, 0xf46eeu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0f46f0  push 0xe
    X86_AT(c, 0xf46f0u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f46f2  jmp 0xf473a
    X86_AT(c, 0xf46f2u);
    goto L_f473a;
L_f46f4:
    X86_TICK(c, 2);
    // 0f46f4  push 2
    X86_AT(c, 0xf46f4u);
    { uint32_t v = 0x2u; push32(c, v); }
L_f46f6:
    X86_TICK(c, 7);
    // 0f46f6  call 0xe8b90
    X86_AT(c, 0xf46f6u);
    push32(c, 0xf46fbu); f_000e8b90(c); X86_RET(c, 0xf46fbu);
    X86_TICK(c, 9);
    // 0f46fb  add esp, 4
    X86_AT(c, 0xf46fbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f46fe  jmp 0xf475e
    X86_AT(c, 0xf46feu);
    goto L_f475e;
L_f4700:
    X86_TICK(c, 9);
    // 0f4700  push 2
    X86_AT(c, 0xf4700u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4702  call 0xe8b90
    X86_AT(c, 0xf4702u);
    push32(c, 0xf4707u); f_000e8b90(c); X86_RET(c, 0xf4707u);
    X86_TICK(c, 13);
    // 0f4707  push 0x27
    X86_AT(c, 0xf4707u);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0f4709  push 0x1b
    X86_AT(c, 0xf4709u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0f470b  push 0xd
    X86_AT(c, 0xf470bu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f470d  call 0xf3c0c
    X86_AT(c, 0xf470du);
    push32(c, 0xf4712u); f_000f3c0c(c); X86_RET(c, 0xf4712u);
    X86_TICK(c, 7);
    // 0f4712  jmp 0xf4726
    X86_AT(c, 0xf4712u);
    goto L_f4726;
L_f4714:
    X86_TICK(c, 13);
    // 0f4714  push 0x1f
    X86_AT(c, 0xf4714u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f4716  push 0x1f
    X86_AT(c, 0xf4716u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f4718  push 0xd
    X86_AT(c, 0xf4718u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f471a  call 0xf3c0c
    X86_AT(c, 0xf471au);
    push32(c, 0xf471fu); f_000f3c0c(c); X86_RET(c, 0xf471fu);
    X86_TICK(c, 2);
    // 0f471f  push 2
    X86_AT(c, 0xf471fu);
    { uint32_t v = 0x2u; push32(c, v); }
L_f4721:
    X86_TICK(c, 7);
    // 0f4721  call 0xe8b90
    X86_AT(c, 0xf4721u);
    push32(c, 0xf4726u); f_000e8b90(c); X86_RET(c, 0xf4726u);
L_f4726:
    X86_TICK(c, 9);
    // 0f4726  add esp, 0x10
    X86_AT(c, 0xf4726u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f4729  jmp 0xf475e
    X86_AT(c, 0xf4729u);
    goto L_f475e;
L_f472b:
    X86_TICK(c, 13);
    // 0f472b  push 0x20
    X86_AT(c, 0xf472bu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f472d  push 0x26
    X86_AT(c, 0xf472du);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f472f  push 7
    X86_AT(c, 0xf472fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f4731  call 0xf3c0c
    X86_AT(c, 0xf4731u);
    push32(c, 0xf4736u); f_000f3c0c(c); X86_RET(c, 0xf4736u);
    X86_TICK(c, 4);
    // 0f4736  push 0x21
    X86_AT(c, 0xf4736u);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0f4738  push 0x1d
    X86_AT(c, 0xf4738u);
    { uint32_t v = 0x1Du; push32(c, v); }
L_f473a:
    X86_TICK(c, 9);
    // 0f473a  push 6
    X86_AT(c, 0xf473au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f473c  jmp 0xf474f
    X86_AT(c, 0xf473cu);
    goto L_f474f;
L_f473e:
    X86_TICK(c, 13);
    // 0f473e  push 0xc
    X86_AT(c, 0xf473eu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f4740  push 0xc
    X86_AT(c, 0xf4740u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0f4742  push 8
    X86_AT(c, 0xf4742u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f4744  call 0xf3c0c
    X86_AT(c, 0xf4744u);
    push32(c, 0xf4749u); f_000f3c0c(c); X86_RET(c, 0xf4749u);
    X86_TICK(c, 6);
    // 0f4749  push 0x1f
    X86_AT(c, 0xf4749u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f474b  push 8
    X86_AT(c, 0xf474bu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f474d  push 7
    X86_AT(c, 0xf474du);
    { uint32_t v = 0x7u; push32(c, v); }
L_f474f:
    X86_TICK(c, 7);
    // 0f474f  call 0xf3c0c
    X86_AT(c, 0xf474fu);
    push32(c, 0xf4754u); f_000f3c0c(c); X86_RET(c, 0xf4754u);
    X86_TICK(c, 9);
    // 0f4754  push 2
    X86_AT(c, 0xf4754u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4756  call 0xe8b90
    X86_AT(c, 0xf4756u);
    push32(c, 0xf475bu); f_000e8b90(c); X86_RET(c, 0xf475bu);
L_f475b:
    X86_TICK(c, 2);
    // 0f475b  add esp, 0x1c
    X86_AT(c, 0xf475bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_f475e:
    X86_TICK(c, 28);
    // 0f475e  pop edi
    X86_AT(c, 0xf475eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f475f  pop esi
    X86_AT(c, 0xf475fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f4760  pop ebx
    X86_AT(c, 0xf4760u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f4761  leave 
    X86_AT(c, 0xf4761u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f4762  ret 
    X86_AT(c, 0xf4762u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf44ffu, "ran off the end of a function");
}
void f_000f475e(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0f475e  pop edi
    X86_AT(c, 0xf475eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f475f  pop esi
    X86_AT(c, 0xf475fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f4760  pop ebx
    X86_AT(c, 0xf4760u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f4761  leave 
    X86_AT(c, 0xf4761u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f4762  ret 
    X86_AT(c, 0xf4762u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf475eu, "ran off the end of a function");
}
void f_000f4768(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0f4768  push ebp
    X86_AT(c, 0xf4768u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f4769  mov ebp, esp
    X86_AT(c, 0xf4769u);
    c.r[5] = c.r[4];
    // 0f476b  push ebx
    X86_AT(c, 0xf476bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f476c  push esi
    X86_AT(c, 0xf476cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f476d  push edi
    X86_AT(c, 0xf476du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f476e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf476eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f4771  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xf4771u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0f4774  sub ebx, ebx
    X86_AT(c, 0xf4774u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_f4776:
    X86_TICK(c, 7);
    // 0f4776  cmp ebx, 0x17
    X86_AT(c, 0xf4776u);
    (void)x86_sub(c, c.r[3], 0x17u, 0, 4);
    // 0f4779  jge 0xf479a
    X86_AT(c, 0xf4779u);
    if (x86_cc(c, 13)) { goto L_f479a; }
    X86_TICK(c, 19);
    // 0f477b  lea eax, [ebx*4]
    X86_AT(c, 0xf477bu);
    c.r[0] = (uint32_t)(c.r[3] * 4);
    // 0f4782  lea edx, [eax*8]
    X86_AT(c, 0xf4782u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0f4789  lea edx, [eax + edx*4]
    X86_AT(c, 0xf4789u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0f478c  movzx eax, byte ptr [edx + 0xd39a4]
    X86_AT(c, 0xf478cu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD39A4u)));
    // 0f4793  cmp eax, esi
    X86_AT(c, 0xf4793u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0f4795  je 0xf479a
    X86_AT(c, 0xf4795u);
    if (x86_cc(c, 4)) { goto L_f479a; }
    X86_TICK(c, 9);
    // 0f4797  inc ebx
    X86_AT(c, 0xf4797u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0f4798  jmp 0xf4776
    X86_AT(c, 0xf4798u);
    X86_POLL(c, 0xf4776u); goto L_f4776;
L_f479a:
    X86_TICK(c, 7);
    // 0f479a  cmp ebx, 0x17
    X86_AT(c, 0xf479au);
    (void)x86_sub(c, c.r[3], 0x17u, 0, 4);
    // 0f479d  jne 0xf47a6
    X86_AT(c, 0xf479du);
    if (x86_cc(c, 5)) { goto L_f47a6; }
    X86_TICK(c, 9);
    // 0f479f  push 0x6f44
    X86_AT(c, 0xf479fu);
    { uint32_t v = 0x6F44u; push32(c, v); }
    // 0f47a4  jmp 0xf47e0
    X86_AT(c, 0xf47a4u);
    goto L_f47e0;
L_f47a6:
    X86_TICK(c, 12);
    // 0f47a6  cmp dword ptr [0x7a6b4], 0
    X86_AT(c, 0xf47a6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A6B4u))), 0x0u, 0, 4);
    // 0f47ad  jne 0xf47c8
    X86_AT(c, 0xf47adu);
    if (x86_cc(c, 5)) { goto L_f47c8; }
    X86_TICK(c, 15);
    // 0f47af  lea eax, [ebx*4]
    X86_AT(c, 0xf47afu);
    c.r[0] = (uint32_t)(c.r[3] * 4);
    // 0f47b6  lea edx, [eax*8]
    X86_AT(c, 0xf47b6u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0f47bd  lea edx, [eax + edx*4]
    X86_AT(c, 0xf47bdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0f47c0  add edx, 0xd39a5
    X86_AT(c, 0xf47c0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xD39A5u, 0, 4); }
    // 0f47c6  jmp 0xf47df
    X86_AT(c, 0xf47c6u);
    goto L_f47df;
L_f47c8:
    X86_TICK(c, 8);
    // 0f47c8  lea eax, [ebx*4]
    X86_AT(c, 0xf47c8u);
    c.r[0] = (uint32_t)(c.r[3] * 4);
    // 0f47cf  lea edx, [eax*8]
    X86_AT(c, 0xf47cfu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0f47d6  lea edx, [eax + edx*4]
    X86_AT(c, 0xf47d6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0f47d9  add edx, 0xd39e6
    X86_AT(c, 0xf47d9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xD39E6u, 0, 4); }
L_f47df:
    X86_TICK(c, 2);
    // 0f47df  push edx
    X86_AT(c, 0xf47dfu);
    { uint32_t v = c.r[2]; push32(c, v); }
L_f47e0:
    X86_TICK(c, 9);
    // 0f47e0  push edi
    X86_AT(c, 0xf47e0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f47e1  call 0xe6cb0
    X86_AT(c, 0xf47e1u);
    push32(c, 0xf47e6u); f_000e6cb0(c); X86_RET(c, 0xf47e6u);
    X86_TICK(c, 30);
    // 0f47e6  add esp, 8
    X86_AT(c, 0xf47e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f47e9  pop edi
    X86_AT(c, 0xf47e9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f47ea  pop esi
    X86_AT(c, 0xf47eau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f47eb  pop ebx
    X86_AT(c, 0xf47ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f47ec  leave 
    X86_AT(c, 0xf47ecu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f47ed  ret 
    X86_AT(c, 0xf47edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4768u, "ran off the end of a function");
}
void f_000f47f0(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0f47f0  push ebp
    X86_AT(c, 0xf47f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f47f1  mov ebp, esp
    X86_AT(c, 0xf47f1u);
    c.r[5] = c.r[4];
    // 0f47f3  sub esp, 8
    X86_AT(c, 0xf47f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0f47f6  push ebx
    X86_AT(c, 0xf47f6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f47f7  push esi
    X86_AT(c, 0xf47f7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f47f8  push edi
    X86_AT(c, 0xf47f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f47f9  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xf47f9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0f47fe  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf47feu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f4801  mov eax, dword ptr [0xd4a50]
    X86_AT(c, 0xf4801u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0f4806  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf4806u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f4809  mov eax, 5
    X86_AT(c, 0xf4809u);
    c.r[0] = 0x5u;
    // 0f480e  mov dword ptr [0xd4a4c], eax
    X86_AT(c, 0xf480eu);
    wr32((c.sbase[3] + (uint32_t)(0xD4A4Cu)), c.r[0]);
    // 0f4813  mov dword ptr [0xd4a50], eax
    X86_AT(c, 0xf4813u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A50u)), c.r[0]);
    // 0f4818  mov esi, dword ptr [0xd4a68]
    X86_AT(c, 0xf4818u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xD4A68u)));
    // 0f481e  mov edi, 0x12
    X86_AT(c, 0xf481eu);
    c.r[7] = 0x12u;
L_f4823:
    X86_TICK(c, 7);
    // 0f4823  cmp edi, 0x1b
    X86_AT(c, 0xf4823u);
    (void)x86_sub(c, c.r[7], 0x1Bu, 0, 4);
    // 0f4826  jg 0xf48bc
    X86_AT(c, 0xf4826u);
    if (x86_cc(c, 15)) { goto L_f48bc; }
    X86_TICK(c, 9);
    // 0f482c  push edi
    X86_AT(c, 0xf482cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f482d  call 0xe3a58
    X86_AT(c, 0xf482du);
    push32(c, 0xf4832u); f_000e3a58(c); X86_RET(c, 0xf4832u);
    X86_TICK(c, 7);
    // 0f4832  call 0xfb78c
    X86_AT(c, 0xf4832u);
    push32(c, 0xf4837u); f_000fb78c(c); X86_RET(c, 0xf4837u);
    X86_TICK(c, 4);
    // 0f4837  mov dword ptr [0xd4a68], 1
    X86_AT(c, 0xf4837u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A68u)), 0x1u);
    // 0f4841  add esp, 4
    X86_AT(c, 0xf4841u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f4844:
    X86_TICK(c, 12);
    // 0f4844  cmp dword ptr [0xd4a68], 0x11
    X86_AT(c, 0xf4844u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A68u))), 0x11u, 0, 4);
    // 0f484b  jge 0xf48b2
    X86_AT(c, 0xf484bu);
    if (x86_cc(c, 13)) { goto L_f48b2; }
    X86_TICK(c, 7);
    // 0f484d  call 0xfb7ac
    X86_AT(c, 0xf484du);
    push32(c, 0xf4852u); f_000fb7ac(c); X86_RET(c, 0xf4852u);
    X86_TICK(c, 9);
    // 0f4852  push 7
    X86_AT(c, 0xf4852u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f4854  call 0xe693c
    X86_AT(c, 0xf4854u);
    push32(c, 0xf4859u); f_000e693c(c); X86_RET(c, 0xf4859u);
    X86_TICK(c, 11);
    // 0f4859  push 0x6f4c
    X86_AT(c, 0xf4859u);
    { uint32_t v = 0x6F4Cu; push32(c, v); }
    // 0f485e  push 7
    X86_AT(c, 0xf485eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f4860  call 0xe6cb0
    X86_AT(c, 0xf4860u);
    push32(c, 0xf4865u); f_000e6cb0(c); X86_RET(c, 0xf4865u);
    X86_TICK(c, 13);
    // 0f4865  push 2
    X86_AT(c, 0xf4865u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4867  push edi
    X86_AT(c, 0xf4867u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f4868  push 7
    X86_AT(c, 0xf4868u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f486a  call 0xe5630
    X86_AT(c, 0xf486au);
    push32(c, 0xf486fu); f_000e5630(c); X86_RET(c, 0xf486fu);
    X86_TICK(c, 11);
    // 0f486f  push 0x6f54
    X86_AT(c, 0xf486fu);
    { uint32_t v = 0x6F54u; push32(c, v); }
    // 0f4874  push 7
    X86_AT(c, 0xf4874u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f4876  call 0xe6cb0
    X86_AT(c, 0xf4876u);
    push32(c, 0xf487bu); f_000e6cb0(c); X86_RET(c, 0xf487bu);
    X86_TICK(c, 16);
    // 0f487b  push 2
    X86_AT(c, 0xf487bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f487d  push dword ptr [0xd4a68]
    X86_AT(c, 0xf487du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD4A68u))); push32(c, v); }
    // 0f4883  push 7
    X86_AT(c, 0xf4883u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f4885  call 0xe5630
    X86_AT(c, 0xf4885u);
    push32(c, 0xf488au); f_000e5630(c); X86_RET(c, 0xf488au);
    X86_TICK(c, 9);
    // 0f488a  push 7
    X86_AT(c, 0xf488au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f488c  call 0xe6c68
    X86_AT(c, 0xf488cu);
    push32(c, 0xf4891u); f_000e6c68(c); X86_RET(c, 0xf4891u);
    X86_TICK(c, 9);
    // 0f4891  push 0x6f5c
    X86_AT(c, 0xf4891u);
    { uint32_t v = 0x6F5Cu; push32(c, v); }
    // 0f4896  call 0xfb2e8
    X86_AT(c, 0xf4896u);
    push32(c, 0xf489bu); f_000fb2e8(c); X86_RET(c, 0xf489bu);
    X86_TICK(c, 9);
    // 0f489b  push 7
    X86_AT(c, 0xf489bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f489d  call 0xefeb0
    X86_AT(c, 0xf489du);
    push32(c, 0xf48a2u); f_000efeb0(c); X86_RET(c, 0xf48a2u);
    X86_TICK(c, 12);
    // 0f48a2  add esp, 0x38
    X86_AT(c, 0xf48a2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0f48a5  xchg ebx, eax
    X86_AT(c, 0xf48a5u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f48a6  and ebx, ebx
    X86_AT(c, 0xf48a6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0f48a8  jne 0xf48b2
    X86_AT(c, 0xf48a8u);
    if (x86_cc(c, 5)) { goto L_f48b2; }
    X86_TICK(c, 13);
    // 0f48aa  inc dword ptr [0xd4a68]
    X86_AT(c, 0xf48aau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xD4A68u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f48b0  jmp 0xf4844
    X86_AT(c, 0xf48b0u);
    X86_POLL(c, 0xf4844u); goto L_f4844;
L_f48b2:
    X86_TICK(c, 7);
    // 0f48b2  and ebx, ebx
    X86_AT(c, 0xf48b2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0f48b4  jne 0xf48bc
    X86_AT(c, 0xf48b4u);
    if (x86_cc(c, 5)) { goto L_f48bc; }
    X86_TICK(c, 9);
    // 0f48b6  inc edi
    X86_AT(c, 0xf48b6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f48b7  jmp 0xf4823
    X86_AT(c, 0xf48b7u);
    X86_POLL(c, 0xf4823u); goto L_f4823;
L_f48bc:
    X86_TICK(c, 38);
    // 0f48bc  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xf48bcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0f48bf  mov dword ptr [0xd4a4c], eax
    X86_AT(c, 0xf48bfu);
    wr32((c.sbase[3] + (uint32_t)(0xD4A4Cu)), c.r[0]);
    // 0f48c4  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf48c4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f48c7  mov dword ptr [0xd4a50], eax
    X86_AT(c, 0xf48c7u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A50u)), c.r[0]);
    // 0f48cc  mov dword ptr [0xd4a68], esi
    X86_AT(c, 0xf48ccu);
    wr32((c.sbase[3] + (uint32_t)(0xD4A68u)), c.r[6]);
    // 0f48d2  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf48d2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f48d7  lea edx, [eax + eax*4]
    X86_AT(c, 0xf48d7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f48da  lea edx, [eax + edx*2]
    X86_AT(c, 0xf48dau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f48dd  shl edx, 5
    X86_AT(c, 0xf48ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f48e0  sub edx, eax
    X86_AT(c, 0xf48e0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f48e2  mov eax, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xf48e2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0f48e8  cmp eax, 5
    X86_AT(c, 0xf48e8u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0f48eb  je 0xf48fc
    X86_AT(c, 0xf48ebu);
    if (x86_cc(c, 4)) { goto L_f48fc; }
    X86_TICK(c, 7);
    // 0f48ed  cmp eax, 4
    X86_AT(c, 0xf48edu);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0f48f0  je 0xf48fc
    X86_AT(c, 0xf48f0u);
    if (x86_cc(c, 4)) { goto L_f48fc; }
    X86_TICK(c, 9);
    // 0f48f2  push 1
    X86_AT(c, 0xf48f2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f48f4  call 0xe1a9c
    X86_AT(c, 0xf48f4u);
    push32(c, 0xf48f9u); f_000e1a9c(c); X86_RET(c, 0xf48f9u);
    X86_TICK(c, 2);
    // 0f48f9  add esp, 4
    X86_AT(c, 0xf48f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f48fc:
    X86_TICK(c, 28);
    // 0f48fc  pop edi
    X86_AT(c, 0xf48fcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f48fd  pop esi
    X86_AT(c, 0xf48fdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f48fe  pop ebx
    X86_AT(c, 0xf48feu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f48ff  leave 
    X86_AT(c, 0xf48ffu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f4900  ret 
    X86_AT(c, 0xf4900u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf47f0u, "ran off the end of a function");
}
void f_000f4904(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0f4904  push ebp
    X86_AT(c, 0xf4904u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f4905  mov ebp, esp
    X86_AT(c, 0xf4905u);
    c.r[5] = c.r[4];
    // 0f4907  push edi
    X86_AT(c, 0xf4907u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f4908  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf4908u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f490b  push edi
    X86_AT(c, 0xf490bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f490c  call 0xe693c
    X86_AT(c, 0xf490cu);
    push32(c, 0xf4911u); f_000e693c(c); X86_RET(c, 0xf4911u);
    X86_TICK(c, 29);
    // 0f4911  push 7
    X86_AT(c, 0xf4911u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f4913  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf4913u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f4918  lea edx, [eax + eax*4]
    X86_AT(c, 0xf4918u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f491b  lea edx, [eax + edx*2]
    X86_AT(c, 0xf491bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f491e  shl edx, 5
    X86_AT(c, 0xf491eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f4921  sub edx, eax
    X86_AT(c, 0xf4921u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f4923  push dword ptr [edx + 0xcdf53]
    X86_AT(c, 0xf4923u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF53u))); push32(c, v); }
    // 0f4929  push edi
    X86_AT(c, 0xf4929u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f492a  call 0xe5630
    X86_AT(c, 0xf492au);
    push32(c, 0xf492fu); f_000e5630(c); X86_RET(c, 0xf492fu);
    X86_TICK(c, 11);
    // 0f492f  push 0x770c
    X86_AT(c, 0xf492fu);
    { uint32_t v = 0x770Cu; push32(c, v); }
    // 0f4934  push 7
    X86_AT(c, 0xf4934u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f4936  call 0xe6cb0
    X86_AT(c, 0xf4936u);
    push32(c, 0xf493bu); f_000e6cb0(c); X86_RET(c, 0xf493bu);
    X86_TICK(c, 22);
    // 0f493b  add esp, 0x18
    X86_AT(c, 0xf493bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f493e  pop edi
    X86_AT(c, 0xf493eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f493f  leave 
    X86_AT(c, 0xf493fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f4940  ret 
    X86_AT(c, 0xf4940u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4904u, "ran off the end of a function");
}
void f_000f4944(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0f4944  call 0xf0c70
    X86_AT(c, 0xf4944u);
    push32(c, 0xf4949u); f_000f0c70(c); X86_RET(c, 0xf4949u);
    X86_TICK(c, 9);
    // 0f4949  push 8
    X86_AT(c, 0xf4949u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f494b  call 0xe1944
    X86_AT(c, 0xf494bu);
    push32(c, 0xf4950u); f_000e1944(c); X86_RET(c, 0xf4950u);
    X86_TICK(c, 9);
    // 0f4950  push 2
    X86_AT(c, 0xf4950u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4952  call 0xe9740
    X86_AT(c, 0xf4952u);
    push32(c, 0xf4957u); f_000e9740(c); X86_RET(c, 0xf4957u);
    X86_TICK(c, 7);
    // 0f4957  call 0xf0c70
    X86_AT(c, 0xf4957u);
    push32(c, 0xf495cu); f_000f0c70(c); X86_RET(c, 0xf495cu);
    X86_TICK(c, 9);
    // 0f495c  push 8
    X86_AT(c, 0xf495cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f495e  call 0xe1944
    X86_AT(c, 0xf495eu);
    push32(c, 0xf4963u); f_000e1944(c); X86_RET(c, 0xf4963u);
    X86_TICK(c, 9);
    // 0f4963  push 2
    X86_AT(c, 0xf4963u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4965  call 0xe9740
    X86_AT(c, 0xf4965u);
    push32(c, 0xf496au); f_000e9740(c); X86_RET(c, 0xf496au);
    X86_TICK(c, 7);
    // 0f496a  call 0xf0c70
    X86_AT(c, 0xf496au);
    push32(c, 0xf496fu); f_000f0c70(c); X86_RET(c, 0xf496fu);
    X86_TICK(c, 9);
    // 0f496f  push 8
    X86_AT(c, 0xf496fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f4971  call 0xe1944
    X86_AT(c, 0xf4971u);
    push32(c, 0xf4976u); f_000e1944(c); X86_RET(c, 0xf4976u);
    X86_TICK(c, 9);
    // 0f4976  push 4
    X86_AT(c, 0xf4976u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f4978  call 0xe9740
    X86_AT(c, 0xf4978u);
    push32(c, 0xf497du); f_000e9740(c); X86_RET(c, 0xf497du);
    X86_TICK(c, 7);
    // 0f497d  call 0xe137c
    X86_AT(c, 0xf497du);
    push32(c, 0xf4982u); f_000e137c(c); X86_RET(c, 0xf4982u);
    X86_TICK(c, 7);
    // 0f4982  call 0xe8470
    X86_AT(c, 0xf4982u);
    push32(c, 0xf4987u); f_000e8470(c); X86_RET(c, 0xf4987u);
    X86_TICK(c, 7);
    // 0f4987  call 0xf4e98
    X86_AT(c, 0xf4987u);
    push32(c, 0xf498cu); f_000f4e98(c); X86_RET(c, 0xf498cu);
    X86_TICK(c, 9);
    // 0f498c  push 0xd
    X86_AT(c, 0xf498cu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f498e  call 0xe5778
    X86_AT(c, 0xf498eu);
    push32(c, 0xf4993u); f_000e5778(c); X86_RET(c, 0xf4993u);
    X86_TICK(c, 9);
    // 0f4993  push 0xd
    X86_AT(c, 0xf4993u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f4995  call 0xe5748
    X86_AT(c, 0xf4995u);
    push32(c, 0xf499au); f_000e5748(c); X86_RET(c, 0xf499au);
    X86_TICK(c, 15);
    // 0f499a  push 0x193
    X86_AT(c, 0xf499au);
    { uint32_t v = 0x193u; push32(c, v); }
    // 0f499f  push 0x16e
    X86_AT(c, 0xf499fu);
    { uint32_t v = 0x16Eu; push32(c, v); }
    // 0f49a4  push 0x2e
    X86_AT(c, 0xf49a4u);
    { uint32_t v = 0x2Eu; push32(c, v); }
    // 0f49a6  push 9
    X86_AT(c, 0xf49a6u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f49a8  call 0xe5df4
    X86_AT(c, 0xf49a8u);
    push32(c, 0xf49adu); f_000e5df4(c); X86_RET(c, 0xf49adu);
    X86_TICK(c, 9);
    // 0f49ad  push 0xf
    X86_AT(c, 0xf49adu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f49af  call 0xe9740
    X86_AT(c, 0xf49afu);
    push32(c, 0xf49b4u); f_000e9740(c); X86_RET(c, 0xf49b4u);
    X86_TICK(c, 11);
    // 0f49b4  push 0xd
    X86_AT(c, 0xf49b4u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f49b6  push 8
    X86_AT(c, 0xf49b6u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f49b8  call 0xe6b70
    X86_AT(c, 0xf49b8u);
    push32(c, 0xf49bdu); f_000e6b70(c); X86_RET(c, 0xf49bdu);
    X86_TICK(c, 11);
    // 0f49bd  add esp, 0x3c
    X86_AT(c, 0xf49bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f49c0  push 0xf
    X86_AT(c, 0xf49c0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f49c2  call 0xe9740
    X86_AT(c, 0xf49c2u);
    push32(c, 0xf49c7u); f_000e9740(c); X86_RET(c, 0xf49c7u);
    X86_TICK(c, 11);
    // 0f49c7  push 0xd
    X86_AT(c, 0xf49c7u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f49c9  push 0xa
    X86_AT(c, 0xf49c9u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f49cb  call 0xe6b70
    X86_AT(c, 0xf49cbu);
    push32(c, 0xf49d0u); f_000e6b70(c); X86_RET(c, 0xf49d0u);
    X86_TICK(c, 9);
    // 0f49d0  push 0xf
    X86_AT(c, 0xf49d0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f49d2  call 0xe9740
    X86_AT(c, 0xf49d2u);
    push32(c, 0xf49d7u); f_000e9740(c); X86_RET(c, 0xf49d7u);
    X86_TICK(c, 11);
    // 0f49d7  push 0xd
    X86_AT(c, 0xf49d7u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f49d9  push 0xb
    X86_AT(c, 0xf49d9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f49db  call 0xe6b70
    X86_AT(c, 0xf49dbu);
    push32(c, 0xf49e0u); f_000e6b70(c); X86_RET(c, 0xf49e0u);
    X86_TICK(c, 9);
    // 0f49e0  push 0xf
    X86_AT(c, 0xf49e0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f49e2  call 0xe9740
    X86_AT(c, 0xf49e2u);
    push32(c, 0xf49e7u); f_000e9740(c); X86_RET(c, 0xf49e7u);
    X86_TICK(c, 11);
    // 0f49e7  push 0xd
    X86_AT(c, 0xf49e7u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f49e9  push 7
    X86_AT(c, 0xf49e9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f49eb  call 0xe6b70
    X86_AT(c, 0xf49ebu);
    push32(c, 0xf49f0u); f_000e6b70(c); X86_RET(c, 0xf49f0u);
    X86_TICK(c, 29);
    // 0f49f0  add esp, 0x24
    X86_AT(c, 0xf49f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0f49f3  push 0
    X86_AT(c, 0xf49f3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f49f5  push 0xb
    X86_AT(c, 0xf49f5u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f49f7  push 0xf
    X86_AT(c, 0xf49f7u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f49f9  push 0x18
    X86_AT(c, 0xf49f9u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0f49fb  push 0x27
    X86_AT(c, 0xf49fbu);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0f49fd  push 0x194
    X86_AT(c, 0xf49fdu);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0f4a02  push 0x140
    X86_AT(c, 0xf4a02u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0f4a07  push 0x16
    X86_AT(c, 0xf4a07u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0f4a09  push 0x138
    X86_AT(c, 0xf4a09u);
    { uint32_t v = 0x138u; push32(c, v); }
    // 0f4a0e  push 6
    X86_AT(c, 0xf4a0eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4a10  call 0xe6858
    X86_AT(c, 0xf4a10u);
    push32(c, 0xf4a15u); f_000e6858(c); X86_RET(c, 0xf4a15u);
    X86_TICK(c, 9);
    // 0f4a15  push 0xf
    X86_AT(c, 0xf4a15u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f4a17  call 0xe9740
    X86_AT(c, 0xf4a17u);
    push32(c, 0xf4a1cu); f_000e9740(c); X86_RET(c, 0xf4a1cu);
    X86_TICK(c, 9);
    // 0f4a1c  push 6
    X86_AT(c, 0xf4a1cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4a1e  call 0xe699c
    X86_AT(c, 0xf4a1eu);
    push32(c, 0xf4a23u); f_000e699c(c); X86_RET(c, 0xf4a23u);
    X86_TICK(c, 9);
    // 0f4a23  push 9
    X86_AT(c, 0xf4a23u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f4a25  call 0xe3530
    X86_AT(c, 0xf4a25u);
    push32(c, 0xf4a2au); f_000e3530(c); X86_RET(c, 0xf4a2au);
    X86_TICK(c, 9);
    // 0f4a2a  push 1
    X86_AT(c, 0xf4a2au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f4a2c  call 0xf5014
    X86_AT(c, 0xf4a2cu);
    push32(c, 0xf4a31u); f_000f5014(c); X86_RET(c, 0xf4a31u);
    X86_TICK(c, 9);
    // 0f4a31  push 6
    X86_AT(c, 0xf4a31u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4a33  call 0xe693c
    X86_AT(c, 0xf4a33u);
    push32(c, 0xf4a38u); f_000e693c(c); X86_RET(c, 0xf4a38u);
    X86_TICK(c, 11);
    // 0f4a38  add esp, 0x3c
    X86_AT(c, 0xf4a38u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f4a3b  push 6
    X86_AT(c, 0xf4a3bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4a3d  call 0xe6c68
    X86_AT(c, 0xf4a3du);
    push32(c, 0xf4a42u); f_000e6c68(c); X86_RET(c, 0xf4a42u);
    X86_TICK(c, 9);
    // 0f4a42  push 6
    X86_AT(c, 0xf4a42u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4a44  call 0xe6c68
    X86_AT(c, 0xf4a44u);
    push32(c, 0xf4a49u); f_000e6c68(c); X86_RET(c, 0xf4a49u);
    X86_TICK(c, 9);
    // 0f4a49  push 6
    X86_AT(c, 0xf4a49u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4a4b  call 0xe6c68
    X86_AT(c, 0xf4a4bu);
    push32(c, 0xf4a50u); f_000e6c68(c); X86_RET(c, 0xf4a50u);
    X86_TICK(c, 9);
    // 0f4a50  push 6
    X86_AT(c, 0xf4a50u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4a52  call 0xe6c68
    X86_AT(c, 0xf4a52u);
    push32(c, 0xf4a57u); f_000e6c68(c); X86_RET(c, 0xf4a57u);
    X86_TICK(c, 9);
    // 0f4a57  push 6
    X86_AT(c, 0xf4a57u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4a59  call 0xe6c68
    X86_AT(c, 0xf4a59u);
    push32(c, 0xf4a5eu); f_000e6c68(c); X86_RET(c, 0xf4a5eu);
    X86_TICK(c, 11);
    // 0f4a5e  push 0x771c
    X86_AT(c, 0xf4a5eu);
    { uint32_t v = 0x771Cu; push32(c, v); }
    // 0f4a63  push 6
    X86_AT(c, 0xf4a63u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4a65  call 0xe6cb0
    X86_AT(c, 0xf4a65u);
    push32(c, 0xf4a6au); f_000e6cb0(c); X86_RET(c, 0xf4a6au);
    X86_TICK(c, 9);
    // 0f4a6a  push 6
    X86_AT(c, 0xf4a6au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4a6c  call 0xe6c68
    X86_AT(c, 0xf4a6cu);
    push32(c, 0xf4a71u); f_000e6c68(c); X86_RET(c, 0xf4a71u);
    X86_TICK(c, 9);
    // 0f4a71  push 6
    X86_AT(c, 0xf4a71u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4a73  call 0xe6c68
    X86_AT(c, 0xf4a73u);
    push32(c, 0xf4a78u); f_000e6c68(c); X86_RET(c, 0xf4a78u);
    X86_TICK(c, 9);
    // 0f4a78  push 0xc8
    X86_AT(c, 0xf4a78u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0f4a7d  call 0xe9740
    X86_AT(c, 0xf4a7du);
    push32(c, 0xf4a82u); f_000e9740(c); X86_RET(c, 0xf4a82u);
    X86_TICK(c, 11);
    // 0f4a82  push 0x773c
    X86_AT(c, 0xf4a82u);
    { uint32_t v = 0x773Cu; push32(c, v); }
    // 0f4a87  push 6
    X86_AT(c, 0xf4a87u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4a89  call 0xe6cb0
    X86_AT(c, 0xf4a89u);
    push32(c, 0xf4a8eu); f_000e6cb0(c); X86_RET(c, 0xf4a8eu);
    X86_TICK(c, 9);
    // 0f4a8e  push 6
    X86_AT(c, 0xf4a8eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4a90  call 0xe6c68
    X86_AT(c, 0xf4a90u);
    push32(c, 0xf4a95u); f_000e6c68(c); X86_RET(c, 0xf4a95u);
    X86_TICK(c, 9);
    // 0f4a95  push 0x96
    X86_AT(c, 0xf4a95u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4a9a  call 0xe9740
    X86_AT(c, 0xf4a9au);
    push32(c, 0xf4a9fu); f_000e9740(c); X86_RET(c, 0xf4a9fu);
    X86_TICK(c, 11);
    // 0f4a9f  push 0x7764
    X86_AT(c, 0xf4a9fu);
    { uint32_t v = 0x7764u; push32(c, v); }
    // 0f4aa4  push 6
    X86_AT(c, 0xf4aa4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4aa6  call 0xe6cb0
    X86_AT(c, 0xf4aa6u);
    push32(c, 0xf4aabu); f_000e6cb0(c); X86_RET(c, 0xf4aabu);
    X86_TICK(c, 11);
    // 0f4aab  add esp, 0x40
    X86_AT(c, 0xf4aabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f4aae  push 6
    X86_AT(c, 0xf4aaeu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4ab0  call 0xe6c68
    X86_AT(c, 0xf4ab0u);
    push32(c, 0xf4ab5u); f_000e6c68(c); X86_RET(c, 0xf4ab5u);
    X86_TICK(c, 9);
    // 0f4ab5  push 0x96
    X86_AT(c, 0xf4ab5u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4aba  call 0xe9740
    X86_AT(c, 0xf4abau);
    push32(c, 0xf4abfu); f_000e9740(c); X86_RET(c, 0xf4abfu);
    X86_TICK(c, 11);
    // 0f4abf  push 0x778c
    X86_AT(c, 0xf4abfu);
    { uint32_t v = 0x778Cu; push32(c, v); }
    // 0f4ac4  push 6
    X86_AT(c, 0xf4ac4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4ac6  call 0xe6cb0
    X86_AT(c, 0xf4ac6u);
    push32(c, 0xf4acbu); f_000e6cb0(c); X86_RET(c, 0xf4acbu);
    X86_TICK(c, 9);
    // 0f4acb  push 6
    X86_AT(c, 0xf4acbu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4acd  call 0xe6c68
    X86_AT(c, 0xf4acdu);
    push32(c, 0xf4ad2u); f_000e6c68(c); X86_RET(c, 0xf4ad2u);
    X86_TICK(c, 9);
    // 0f4ad2  push 0x96
    X86_AT(c, 0xf4ad2u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4ad7  call 0xe9740
    X86_AT(c, 0xf4ad7u);
    push32(c, 0xf4adcu); f_000e9740(c); X86_RET(c, 0xf4adcu);
    X86_TICK(c, 11);
    // 0f4adc  push 0x77b4
    X86_AT(c, 0xf4adcu);
    { uint32_t v = 0x77B4u; push32(c, v); }
    // 0f4ae1  push 6
    X86_AT(c, 0xf4ae1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4ae3  call 0xe6cb0
    X86_AT(c, 0xf4ae3u);
    push32(c, 0xf4ae8u); f_000e6cb0(c); X86_RET(c, 0xf4ae8u);
    X86_TICK(c, 9);
    // 0f4ae8  push 6
    X86_AT(c, 0xf4ae8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4aea  call 0xe6c68
    X86_AT(c, 0xf4aeau);
    push32(c, 0xf4aefu); f_000e6c68(c); X86_RET(c, 0xf4aefu);
    X86_TICK(c, 9);
    // 0f4aef  push 6
    X86_AT(c, 0xf4aefu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4af1  call 0xe6c68
    X86_AT(c, 0xf4af1u);
    push32(c, 0xf4af6u); f_000e6c68(c); X86_RET(c, 0xf4af6u);
    X86_TICK(c, 9);
    // 0f4af6  push 0x96
    X86_AT(c, 0xf4af6u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4afb  call 0xe9740
    X86_AT(c, 0xf4afbu);
    push32(c, 0xf4b00u); f_000e9740(c); X86_RET(c, 0xf4b00u);
    X86_TICK(c, 9);
    // 0f4b00  push 0x96
    X86_AT(c, 0xf4b00u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4b05  call 0xe9740
    X86_AT(c, 0xf4b05u);
    push32(c, 0xf4b0au); f_000e9740(c); X86_RET(c, 0xf4b0au);
    X86_TICK(c, 11);
    // 0f4b0a  push 0x77c0
    X86_AT(c, 0xf4b0au);
    { uint32_t v = 0x77C0u; push32(c, v); }
    // 0f4b0f  push 6
    X86_AT(c, 0xf4b0fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4b11  call 0xe6cb0
    X86_AT(c, 0xf4b11u);
    push32(c, 0xf4b16u); f_000e6cb0(c); X86_RET(c, 0xf4b16u);
    X86_TICK(c, 9);
    // 0f4b16  push 6
    X86_AT(c, 0xf4b16u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4b18  call 0xe6c68
    X86_AT(c, 0xf4b18u);
    push32(c, 0xf4b1du); f_000e6c68(c); X86_RET(c, 0xf4b1du);
    X86_TICK(c, 11);
    // 0f4b1d  add esp, 0x3c
    X86_AT(c, 0xf4b1du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f4b20  push 0x96
    X86_AT(c, 0xf4b20u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4b25  call 0xe9740
    X86_AT(c, 0xf4b25u);
    push32(c, 0xf4b2au); f_000e9740(c); X86_RET(c, 0xf4b2au);
    X86_TICK(c, 11);
    // 0f4b2a  push 0x77e8
    X86_AT(c, 0xf4b2au);
    { uint32_t v = 0x77E8u; push32(c, v); }
    // 0f4b2f  push 6
    X86_AT(c, 0xf4b2fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4b31  call 0xe6cb0
    X86_AT(c, 0xf4b31u);
    push32(c, 0xf4b36u); f_000e6cb0(c); X86_RET(c, 0xf4b36u);
    X86_TICK(c, 9);
    // 0f4b36  push 6
    X86_AT(c, 0xf4b36u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4b38  call 0xe6c68
    X86_AT(c, 0xf4b38u);
    push32(c, 0xf4b3du); f_000e6c68(c); X86_RET(c, 0xf4b3du);
    X86_TICK(c, 9);
    // 0f4b3d  push 0x96
    X86_AT(c, 0xf4b3du);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4b42  call 0xe9740
    X86_AT(c, 0xf4b42u);
    push32(c, 0xf4b47u); f_000e9740(c); X86_RET(c, 0xf4b47u);
    X86_TICK(c, 11);
    // 0f4b47  push 0x7810
    X86_AT(c, 0xf4b47u);
    { uint32_t v = 0x7810u; push32(c, v); }
    // 0f4b4c  push 6
    X86_AT(c, 0xf4b4cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4b4e  call 0xe6cb0
    X86_AT(c, 0xf4b4eu);
    push32(c, 0xf4b53u); f_000e6cb0(c); X86_RET(c, 0xf4b53u);
    X86_TICK(c, 9);
    // 0f4b53  push 6
    X86_AT(c, 0xf4b53u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4b55  call 0xe6c68
    X86_AT(c, 0xf4b55u);
    push32(c, 0xf4b5au); f_000e6c68(c); X86_RET(c, 0xf4b5au);
    X86_TICK(c, 9);
    // 0f4b5a  push 0x96
    X86_AT(c, 0xf4b5au);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4b5f  call 0xe9740
    X86_AT(c, 0xf4b5fu);
    push32(c, 0xf4b64u); f_000e9740(c); X86_RET(c, 0xf4b64u);
    X86_TICK(c, 11);
    // 0f4b64  push 0x7834
    X86_AT(c, 0xf4b64u);
    { uint32_t v = 0x7834u; push32(c, v); }
    // 0f4b69  push 6
    X86_AT(c, 0xf4b69u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4b6b  call 0xe6cb0
    X86_AT(c, 0xf4b6bu);
    push32(c, 0xf4b70u); f_000e6cb0(c); X86_RET(c, 0xf4b70u);
    X86_TICK(c, 9);
    // 0f4b70  push 6
    X86_AT(c, 0xf4b70u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4b72  call 0xe6c68
    X86_AT(c, 0xf4b72u);
    push32(c, 0xf4b77u); f_000e6c68(c); X86_RET(c, 0xf4b77u);
    X86_TICK(c, 9);
    // 0f4b77  push 0x96
    X86_AT(c, 0xf4b77u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4b7c  call 0xe9740
    X86_AT(c, 0xf4b7cu);
    push32(c, 0xf4b81u); f_000e9740(c); X86_RET(c, 0xf4b81u);
    X86_TICK(c, 13);
    // 0f4b81  add esp, 0x34
    X86_AT(c, 0xf4b81u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0f4b84  push 0x785c
    X86_AT(c, 0xf4b84u);
    { uint32_t v = 0x785Cu; push32(c, v); }
    // 0f4b89  push 6
    X86_AT(c, 0xf4b89u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4b8b  call 0xe6cb0
    X86_AT(c, 0xf4b8bu);
    push32(c, 0xf4b90u); f_000e6cb0(c); X86_RET(c, 0xf4b90u);
    X86_TICK(c, 9);
    // 0f4b90  push 6
    X86_AT(c, 0xf4b90u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4b92  call 0xe6c68
    X86_AT(c, 0xf4b92u);
    push32(c, 0xf4b97u); f_000e6c68(c); X86_RET(c, 0xf4b97u);
    X86_TICK(c, 9);
    // 0f4b97  push 0x96
    X86_AT(c, 0xf4b97u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4b9c  call 0xe9740
    X86_AT(c, 0xf4b9cu);
    push32(c, 0xf4ba1u); f_000e9740(c); X86_RET(c, 0xf4ba1u);
    X86_TICK(c, 11);
    // 0f4ba1  push 0x7878
    X86_AT(c, 0xf4ba1u);
    { uint32_t v = 0x7878u; push32(c, v); }
    // 0f4ba6  push 6
    X86_AT(c, 0xf4ba6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4ba8  call 0xe6cb0
    X86_AT(c, 0xf4ba8u);
    push32(c, 0xf4badu); f_000e6cb0(c); X86_RET(c, 0xf4badu);
    X86_TICK(c, 9);
    // 0f4bad  push 6
    X86_AT(c, 0xf4badu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4baf  call 0xe6c68
    X86_AT(c, 0xf4bafu);
    push32(c, 0xf4bb4u); f_000e6c68(c); X86_RET(c, 0xf4bb4u);
    X86_TICK(c, 9);
    // 0f4bb4  push 0x96
    X86_AT(c, 0xf4bb4u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4bb9  call 0xe9740
    X86_AT(c, 0xf4bb9u);
    push32(c, 0xf4bbeu); f_000e9740(c); X86_RET(c, 0xf4bbeu);
    X86_TICK(c, 11);
    // 0f4bbe  push 0x78a0
    X86_AT(c, 0xf4bbeu);
    { uint32_t v = 0x78A0u; push32(c, v); }
    // 0f4bc3  push 6
    X86_AT(c, 0xf4bc3u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4bc5  call 0xe6cb0
    X86_AT(c, 0xf4bc5u);
    push32(c, 0xf4bcau); f_000e6cb0(c); X86_RET(c, 0xf4bcau);
    X86_TICK(c, 9);
    // 0f4bca  push 6
    X86_AT(c, 0xf4bcau);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4bcc  call 0xe6c68
    X86_AT(c, 0xf4bccu);
    push32(c, 0xf4bd1u); f_000e6c68(c); X86_RET(c, 0xf4bd1u);
    X86_TICK(c, 9);
    // 0f4bd1  push 0x12c
    X86_AT(c, 0xf4bd1u);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0f4bd6  call 0xe9740
    X86_AT(c, 0xf4bd6u);
    push32(c, 0xf4bdbu); f_000e9740(c); X86_RET(c, 0xf4bdbu);
    X86_TICK(c, 9);
    // 0f4bdb  push 6
    X86_AT(c, 0xf4bdbu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4bdd  call 0xe6c68
    X86_AT(c, 0xf4bddu);
    push32(c, 0xf4be2u); f_000e6c68(c); X86_RET(c, 0xf4be2u);
    X86_TICK(c, 9);
    // 0f4be2  push 6
    X86_AT(c, 0xf4be2u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4be4  call 0xe6c68
    X86_AT(c, 0xf4be4u);
    push32(c, 0xf4be9u); f_000e6c68(c); X86_RET(c, 0xf4be9u);
    X86_TICK(c, 9);
    // 0f4be9  push 6
    X86_AT(c, 0xf4be9u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4beb  call 0xe6c68
    X86_AT(c, 0xf4bebu);
    push32(c, 0xf4bf0u); f_000e6c68(c); X86_RET(c, 0xf4bf0u);
    X86_TICK(c, 11);
    // 0f4bf0  add esp, 0x3c
    X86_AT(c, 0xf4bf0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f4bf3  push 2
    X86_AT(c, 0xf4bf3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4bf5  call 0xf5014
    X86_AT(c, 0xf4bf5u);
    push32(c, 0xf4bfau); f_000f5014(c); X86_RET(c, 0xf4bfau);
    X86_TICK(c, 11);
    // 0f4bfa  push 0x78c0
    X86_AT(c, 0xf4bfau);
    { uint32_t v = 0x78C0u; push32(c, v); }
    // 0f4bff  push 6
    X86_AT(c, 0xf4bffu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4c01  call 0xe6cb0
    X86_AT(c, 0xf4c01u);
    push32(c, 0xf4c06u); f_000e6cb0(c); X86_RET(c, 0xf4c06u);
    X86_TICK(c, 9);
    // 0f4c06  push 6
    X86_AT(c, 0xf4c06u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4c08  call 0xe6c68
    X86_AT(c, 0xf4c08u);
    push32(c, 0xf4c0du); f_000e6c68(c); X86_RET(c, 0xf4c0du);
    X86_TICK(c, 9);
    // 0f4c0d  push 0x96
    X86_AT(c, 0xf4c0du);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4c12  call 0xe9740
    X86_AT(c, 0xf4c12u);
    push32(c, 0xf4c17u); f_000e9740(c); X86_RET(c, 0xf4c17u);
    X86_TICK(c, 11);
    // 0f4c17  push 0x78e8
    X86_AT(c, 0xf4c17u);
    { uint32_t v = 0x78E8u; push32(c, v); }
    // 0f4c1c  push 6
    X86_AT(c, 0xf4c1cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4c1e  call 0xe6cb0
    X86_AT(c, 0xf4c1eu);
    push32(c, 0xf4c23u); f_000e6cb0(c); X86_RET(c, 0xf4c23u);
    X86_TICK(c, 9);
    // 0f4c23  push 6
    X86_AT(c, 0xf4c23u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4c25  call 0xe6c68
    X86_AT(c, 0xf4c25u);
    push32(c, 0xf4c2au); f_000e6c68(c); X86_RET(c, 0xf4c2au);
    X86_TICK(c, 9);
    // 0f4c2a  push 0x96
    X86_AT(c, 0xf4c2au);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4c2f  call 0xe9740
    X86_AT(c, 0xf4c2fu);
    push32(c, 0xf4c34u); f_000e9740(c); X86_RET(c, 0xf4c34u);
    X86_TICK(c, 11);
    // 0f4c34  push 0x7910
    X86_AT(c, 0xf4c34u);
    { uint32_t v = 0x7910u; push32(c, v); }
    // 0f4c39  push 6
    X86_AT(c, 0xf4c39u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4c3b  call 0xe6cb0
    X86_AT(c, 0xf4c3bu);
    push32(c, 0xf4c40u); f_000e6cb0(c); X86_RET(c, 0xf4c40u);
    X86_TICK(c, 9);
    // 0f4c40  push 6
    X86_AT(c, 0xf4c40u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4c42  call 0xe6c68
    X86_AT(c, 0xf4c42u);
    push32(c, 0xf4c47u); f_000e6c68(c); X86_RET(c, 0xf4c47u);
    X86_TICK(c, 9);
    // 0f4c47  push 0x96
    X86_AT(c, 0xf4c47u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4c4c  call 0xe9740
    X86_AT(c, 0xf4c4cu);
    push32(c, 0xf4c51u); f_000e9740(c); X86_RET(c, 0xf4c51u);
    X86_TICK(c, 13);
    // 0f4c51  add esp, 0x34
    X86_AT(c, 0xf4c51u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0f4c54  push 0x7934
    X86_AT(c, 0xf4c54u);
    { uint32_t v = 0x7934u; push32(c, v); }
    // 0f4c59  push 6
    X86_AT(c, 0xf4c59u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4c5b  call 0xe6cb0
    X86_AT(c, 0xf4c5bu);
    push32(c, 0xf4c60u); f_000e6cb0(c); X86_RET(c, 0xf4c60u);
    X86_TICK(c, 9);
    // 0f4c60  push 6
    X86_AT(c, 0xf4c60u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4c62  call 0xe6c68
    X86_AT(c, 0xf4c62u);
    push32(c, 0xf4c67u); f_000e6c68(c); X86_RET(c, 0xf4c67u);
    X86_TICK(c, 9);
    // 0f4c67  push 0x96
    X86_AT(c, 0xf4c67u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4c6c  call 0xe9740
    X86_AT(c, 0xf4c6cu);
    push32(c, 0xf4c71u); f_000e9740(c); X86_RET(c, 0xf4c71u);
    X86_TICK(c, 11);
    // 0f4c71  push 0x795c
    X86_AT(c, 0xf4c71u);
    { uint32_t v = 0x795Cu; push32(c, v); }
    // 0f4c76  push 6
    X86_AT(c, 0xf4c76u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4c78  call 0xe6cb0
    X86_AT(c, 0xf4c78u);
    push32(c, 0xf4c7du); f_000e6cb0(c); X86_RET(c, 0xf4c7du);
    X86_TICK(c, 9);
    // 0f4c7d  push 6
    X86_AT(c, 0xf4c7du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4c7f  call 0xe6c68
    X86_AT(c, 0xf4c7fu);
    push32(c, 0xf4c84u); f_000e6c68(c); X86_RET(c, 0xf4c84u);
    X86_TICK(c, 9);
    // 0f4c84  push 0x96
    X86_AT(c, 0xf4c84u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4c89  call 0xe9740
    X86_AT(c, 0xf4c89u);
    push32(c, 0xf4c8eu); f_000e9740(c); X86_RET(c, 0xf4c8eu);
    X86_TICK(c, 11);
    // 0f4c8e  push 0x7984
    X86_AT(c, 0xf4c8eu);
    { uint32_t v = 0x7984u; push32(c, v); }
    // 0f4c93  push 6
    X86_AT(c, 0xf4c93u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4c95  call 0xe6cb0
    X86_AT(c, 0xf4c95u);
    push32(c, 0xf4c9au); f_000e6cb0(c); X86_RET(c, 0xf4c9au);
    X86_TICK(c, 9);
    // 0f4c9a  push 6
    X86_AT(c, 0xf4c9au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4c9c  call 0xe6c68
    X86_AT(c, 0xf4c9cu);
    push32(c, 0xf4ca1u); f_000e6c68(c); X86_RET(c, 0xf4ca1u);
    X86_TICK(c, 9);
    // 0f4ca1  push 0x96
    X86_AT(c, 0xf4ca1u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4ca6  call 0xe9740
    X86_AT(c, 0xf4ca6u);
    push32(c, 0xf4cabu); f_000e9740(c); X86_RET(c, 0xf4cabu);
    X86_TICK(c, 11);
    // 0f4cab  push 0x79ac
    X86_AT(c, 0xf4cabu);
    { uint32_t v = 0x79ACu; push32(c, v); }
    // 0f4cb0  push 6
    X86_AT(c, 0xf4cb0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4cb2  call 0xe6cb0
    X86_AT(c, 0xf4cb2u);
    push32(c, 0xf4cb7u); f_000e6cb0(c); X86_RET(c, 0xf4cb7u);
    X86_TICK(c, 11);
    // 0f4cb7  push 0x79b8
    X86_AT(c, 0xf4cb7u);
    { uint32_t v = 0x79B8u; push32(c, v); }
    // 0f4cbc  push 6
    X86_AT(c, 0xf4cbcu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4cbe  call 0xe6cb0
    X86_AT(c, 0xf4cbeu);
    push32(c, 0xf4cc3u); f_000e6cb0(c); X86_RET(c, 0xf4cc3u);
    X86_TICK(c, 11);
    // 0f4cc3  add esp, 0x40
    X86_AT(c, 0xf4cc3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f4cc6  push 6
    X86_AT(c, 0xf4cc6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4cc8  call 0xe6c68
    X86_AT(c, 0xf4cc8u);
    push32(c, 0xf4ccdu); f_000e6c68(c); X86_RET(c, 0xf4ccdu);
    X86_TICK(c, 9);
    // 0f4ccd  push 6
    X86_AT(c, 0xf4ccdu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4ccf  call 0xe6c68
    X86_AT(c, 0xf4ccfu);
    push32(c, 0xf4cd4u); f_000e6c68(c); X86_RET(c, 0xf4cd4u);
    X86_TICK(c, 9);
    // 0f4cd4  push 6
    X86_AT(c, 0xf4cd4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4cd6  call 0xe6c68
    X86_AT(c, 0xf4cd6u);
    push32(c, 0xf4cdbu); f_000e6c68(c); X86_RET(c, 0xf4cdbu);
    X86_TICK(c, 9);
    // 0f4cdb  push 0x12c
    X86_AT(c, 0xf4cdbu);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0f4ce0  call 0xe9740
    X86_AT(c, 0xf4ce0u);
    push32(c, 0xf4ce5u); f_000e9740(c); X86_RET(c, 0xf4ce5u);
    X86_TICK(c, 9);
    // 0f4ce5  push 3
    X86_AT(c, 0xf4ce5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f4ce7  call 0xf5014
    X86_AT(c, 0xf4ce7u);
    push32(c, 0xf4cecu); f_000f5014(c); X86_RET(c, 0xf4cecu);
    X86_TICK(c, 11);
    // 0f4cec  push 0x79d8
    X86_AT(c, 0xf4cecu);
    { uint32_t v = 0x79D8u; push32(c, v); }
    // 0f4cf1  push 6
    X86_AT(c, 0xf4cf1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4cf3  call 0xe6cb0
    X86_AT(c, 0xf4cf3u);
    push32(c, 0xf4cf8u); f_000e6cb0(c); X86_RET(c, 0xf4cf8u);
    X86_TICK(c, 9);
    // 0f4cf8  push 6
    X86_AT(c, 0xf4cf8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4cfa  call 0xe6c68
    X86_AT(c, 0xf4cfau);
    push32(c, 0xf4cffu); f_000e6c68(c); X86_RET(c, 0xf4cffu);
    X86_TICK(c, 9);
    // 0f4cff  push 0x96
    X86_AT(c, 0xf4cffu);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4d04  call 0xe9740
    X86_AT(c, 0xf4d04u);
    push32(c, 0xf4d09u); f_000e9740(c); X86_RET(c, 0xf4d09u);
    X86_TICK(c, 11);
    // 0f4d09  push 0x7a00
    X86_AT(c, 0xf4d09u);
    { uint32_t v = 0x7A00u; push32(c, v); }
    // 0f4d0e  push 6
    X86_AT(c, 0xf4d0eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4d10  call 0xe6cb0
    X86_AT(c, 0xf4d10u);
    push32(c, 0xf4d15u); f_000e6cb0(c); X86_RET(c, 0xf4d15u);
    X86_TICK(c, 9);
    // 0f4d15  push 6
    X86_AT(c, 0xf4d15u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4d17  call 0xe6c68
    X86_AT(c, 0xf4d17u);
    push32(c, 0xf4d1cu); f_000e6c68(c); X86_RET(c, 0xf4d1cu);
    X86_TICK(c, 11);
    // 0f4d1c  add esp, 0x30
    X86_AT(c, 0xf4d1cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0f4d1f  push 0x96
    X86_AT(c, 0xf4d1fu);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4d24  call 0xe9740
    X86_AT(c, 0xf4d24u);
    push32(c, 0xf4d29u); f_000e9740(c); X86_RET(c, 0xf4d29u);
    X86_TICK(c, 11);
    // 0f4d29  push 0x7a28
    X86_AT(c, 0xf4d29u);
    { uint32_t v = 0x7A28u; push32(c, v); }
    // 0f4d2e  push 6
    X86_AT(c, 0xf4d2eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4d30  call 0xe6cb0
    X86_AT(c, 0xf4d30u);
    push32(c, 0xf4d35u); f_000e6cb0(c); X86_RET(c, 0xf4d35u);
    X86_TICK(c, 9);
    // 0f4d35  push 6
    X86_AT(c, 0xf4d35u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4d37  call 0xe6c68
    X86_AT(c, 0xf4d37u);
    push32(c, 0xf4d3cu); f_000e6c68(c); X86_RET(c, 0xf4d3cu);
    X86_TICK(c, 9);
    // 0f4d3c  push 6
    X86_AT(c, 0xf4d3cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4d3e  call 0xe6c68
    X86_AT(c, 0xf4d3eu);
    push32(c, 0xf4d43u); f_000e6c68(c); X86_RET(c, 0xf4d43u);
    X86_TICK(c, 9);
    // 0f4d43  push 6
    X86_AT(c, 0xf4d43u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4d45  call 0xe6c68
    X86_AT(c, 0xf4d45u);
    push32(c, 0xf4d4au); f_000e6c68(c); X86_RET(c, 0xf4d4au);
    X86_TICK(c, 9);
    // 0f4d4a  push 6
    X86_AT(c, 0xf4d4au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4d4c  call 0xe6c68
    X86_AT(c, 0xf4d4cu);
    push32(c, 0xf4d51u); f_000e6c68(c); X86_RET(c, 0xf4d51u);
    X86_TICK(c, 9);
    // 0f4d51  push 6
    X86_AT(c, 0xf4d51u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4d53  call 0xe6c68
    X86_AT(c, 0xf4d53u);
    push32(c, 0xf4d58u); f_000e6c68(c); X86_RET(c, 0xf4d58u);
    X86_TICK(c, 9);
    // 0f4d58  push 0x12c
    X86_AT(c, 0xf4d58u);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0f4d5d  call 0xe9740
    X86_AT(c, 0xf4d5du);
    push32(c, 0xf4d62u); f_000e9740(c); X86_RET(c, 0xf4d62u);
    X86_TICK(c, 9);
    // 0f4d62  push 4
    X86_AT(c, 0xf4d62u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f4d64  call 0xf5014
    X86_AT(c, 0xf4d64u);
    push32(c, 0xf4d69u); f_000f5014(c); X86_RET(c, 0xf4d69u);
    X86_TICK(c, 11);
    // 0f4d69  push 0x7a44
    X86_AT(c, 0xf4d69u);
    { uint32_t v = 0x7A44u; push32(c, v); }
    // 0f4d6e  push 6
    X86_AT(c, 0xf4d6eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4d70  call 0xe6cb0
    X86_AT(c, 0xf4d70u);
    push32(c, 0xf4d75u); f_000e6cb0(c); X86_RET(c, 0xf4d75u);
    X86_TICK(c, 9);
    // 0f4d75  push 6
    X86_AT(c, 0xf4d75u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4d77  call 0xe6c68
    X86_AT(c, 0xf4d77u);
    push32(c, 0xf4d7cu); f_000e6c68(c); X86_RET(c, 0xf4d7cu);
    X86_TICK(c, 9);
    // 0f4d7c  push 0x96
    X86_AT(c, 0xf4d7cu);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4d81  call 0xe9740
    X86_AT(c, 0xf4d81u);
    push32(c, 0xf4d86u); f_000e9740(c); X86_RET(c, 0xf4d86u);
    X86_TICK(c, 11);
    // 0f4d86  push 0x7a6c
    X86_AT(c, 0xf4d86u);
    { uint32_t v = 0x7A6Cu; push32(c, v); }
    // 0f4d8b  push 6
    X86_AT(c, 0xf4d8bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4d8d  call 0xe6cb0
    X86_AT(c, 0xf4d8du);
    push32(c, 0xf4d92u); f_000e6cb0(c); X86_RET(c, 0xf4d92u);
    X86_TICK(c, 11);
    // 0f4d92  add esp, 0x40
    X86_AT(c, 0xf4d92u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f4d95  push 6
    X86_AT(c, 0xf4d95u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4d97  call 0xe6c68
    X86_AT(c, 0xf4d97u);
    push32(c, 0xf4d9cu); f_000e6c68(c); X86_RET(c, 0xf4d9cu);
    X86_TICK(c, 9);
    // 0f4d9c  push 0x96
    X86_AT(c, 0xf4d9cu);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4da1  call 0xe9740
    X86_AT(c, 0xf4da1u);
    push32(c, 0xf4da6u); f_000e9740(c); X86_RET(c, 0xf4da6u);
    X86_TICK(c, 11);
    // 0f4da6  push 0x7a94
    X86_AT(c, 0xf4da6u);
    { uint32_t v = 0x7A94u; push32(c, v); }
    // 0f4dab  push 6
    X86_AT(c, 0xf4dabu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4dad  call 0xe6cb0
    X86_AT(c, 0xf4dadu);
    push32(c, 0xf4db2u); f_000e6cb0(c); X86_RET(c, 0xf4db2u);
    X86_TICK(c, 9);
    // 0f4db2  push 6
    X86_AT(c, 0xf4db2u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4db4  call 0xe6c68
    X86_AT(c, 0xf4db4u);
    push32(c, 0xf4db9u); f_000e6c68(c); X86_RET(c, 0xf4db9u);
    X86_TICK(c, 9);
    // 0f4db9  push 0x28
    X86_AT(c, 0xf4db9u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0f4dbb  call 0xe9740
    X86_AT(c, 0xf4dbbu);
    push32(c, 0xf4dc0u); f_000e9740(c); X86_RET(c, 0xf4dc0u);
    X86_TICK(c, 11);
    // 0f4dc0  push 0x7ab0
    X86_AT(c, 0xf4dc0u);
    { uint32_t v = 0x7AB0u; push32(c, v); }
    // 0f4dc5  push 6
    X86_AT(c, 0xf4dc5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4dc7  call 0xe6cb0
    X86_AT(c, 0xf4dc7u);
    push32(c, 0xf4dccu); f_000e6cb0(c); X86_RET(c, 0xf4dccu);
    X86_TICK(c, 9);
    // 0f4dcc  push 6
    X86_AT(c, 0xf4dccu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4dce  call 0xe6c68
    X86_AT(c, 0xf4dceu);
    push32(c, 0xf4dd3u); f_000e6c68(c); X86_RET(c, 0xf4dd3u);
    X86_TICK(c, 9);
    // 0f4dd3  push 0x96
    X86_AT(c, 0xf4dd3u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4dd8  call 0xe9740
    X86_AT(c, 0xf4dd8u);
    push32(c, 0xf4dddu); f_000e9740(c); X86_RET(c, 0xf4dddu);
    X86_TICK(c, 11);
    // 0f4ddd  push 0x7ad4
    X86_AT(c, 0xf4dddu);
    { uint32_t v = 0x7AD4u; push32(c, v); }
    // 0f4de2  push 6
    X86_AT(c, 0xf4de2u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4de4  call 0xe6cb0
    X86_AT(c, 0xf4de4u);
    push32(c, 0xf4de9u); f_000e6cb0(c); X86_RET(c, 0xf4de9u);
    X86_TICK(c, 11);
    // 0f4de9  add esp, 0x30
    X86_AT(c, 0xf4de9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0f4dec  push 6
    X86_AT(c, 0xf4decu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4dee  call 0xe6c68
    X86_AT(c, 0xf4deeu);
    push32(c, 0xf4df3u); f_000e6c68(c); X86_RET(c, 0xf4df3u);
    X86_TICK(c, 9);
    // 0f4df3  push 0x96
    X86_AT(c, 0xf4df3u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0f4df8  call 0xe9740
    X86_AT(c, 0xf4df8u);
    push32(c, 0xf4dfdu); f_000e9740(c); X86_RET(c, 0xf4dfdu);
    X86_TICK(c, 11);
    // 0f4dfd  push 0x7afc
    X86_AT(c, 0xf4dfdu);
    { uint32_t v = 0x7AFCu; push32(c, v); }
    // 0f4e02  push 6
    X86_AT(c, 0xf4e02u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4e04  call 0xe6cb0
    X86_AT(c, 0xf4e04u);
    push32(c, 0xf4e09u); f_000e6cb0(c); X86_RET(c, 0xf4e09u);
    X86_TICK(c, 9);
    // 0f4e09  push 6
    X86_AT(c, 0xf4e09u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4e0b  call 0xe6c68
    X86_AT(c, 0xf4e0bu);
    push32(c, 0xf4e10u); f_000e6c68(c); X86_RET(c, 0xf4e10u);
    X86_TICK(c, 9);
    // 0f4e10  push 6
    X86_AT(c, 0xf4e10u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4e12  call 0xe6c68
    X86_AT(c, 0xf4e12u);
    push32(c, 0xf4e17u); f_000e6c68(c); X86_RET(c, 0xf4e17u);
    X86_TICK(c, 9);
    // 0f4e17  push 6
    X86_AT(c, 0xf4e17u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4e19  call 0xe6c68
    X86_AT(c, 0xf4e19u);
    push32(c, 0xf4e1eu); f_000e6c68(c); X86_RET(c, 0xf4e1eu);
    X86_TICK(c, 11);
    // 0f4e1e  push 0x7b14
    X86_AT(c, 0xf4e1eu);
    { uint32_t v = 0x7B14u; push32(c, v); }
    // 0f4e23  push 6
    X86_AT(c, 0xf4e23u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4e25  call 0xe6cb0
    X86_AT(c, 0xf4e25u);
    push32(c, 0xf4e2au); f_000e6cb0(c); X86_RET(c, 0xf4e2au);
    X86_TICK(c, 9);
    // 0f4e2a  push 6
    X86_AT(c, 0xf4e2au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4e2c  call 0xe6c68
    X86_AT(c, 0xf4e2cu);
    push32(c, 0xf4e31u); f_000e6c68(c); X86_RET(c, 0xf4e31u);
    X86_TICK(c, 9);
    // 0f4e31  push 6
    X86_AT(c, 0xf4e31u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4e33  call 0xe6c68
    X86_AT(c, 0xf4e33u);
    push32(c, 0xf4e38u); f_000e6c68(c); X86_RET(c, 0xf4e38u);
    X86_TICK(c, 9);
    // 0f4e38  push 6
    X86_AT(c, 0xf4e38u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4e3a  call 0xe6c68
    X86_AT(c, 0xf4e3au);
    push32(c, 0xf4e3fu); f_000e6c68(c); X86_RET(c, 0xf4e3fu);
    X86_TICK(c, 9);
    // 0f4e3f  push 6
    X86_AT(c, 0xf4e3fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4e41  call 0xe6c68
    X86_AT(c, 0xf4e41u);
    push32(c, 0xf4e46u); f_000e6c68(c); X86_RET(c, 0xf4e46u);
    X86_TICK(c, 9);
    // 0f4e46  push 6
    X86_AT(c, 0xf4e46u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f4e48  call 0xe6c68
    X86_AT(c, 0xf4e48u);
    push32(c, 0xf4e4du); f_000e6c68(c); X86_RET(c, 0xf4e4du);
    X86_TICK(c, 9);
    // 0f4e4d  push 5
    X86_AT(c, 0xf4e4du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f4e4f  call 0xf5014
    X86_AT(c, 0xf4e4fu);
    push32(c, 0xf4e54u); f_000f5014(c); X86_RET(c, 0xf4e54u);
    X86_TICK(c, 11);
    // 0f4e54  add esp, 0x3c
    X86_AT(c, 0xf4e54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f4e57  push 0x3e8
    X86_AT(c, 0xf4e57u);
    { uint32_t v = 0x3E8u; push32(c, v); }
    // 0f4e5c  call 0xe9740
    X86_AT(c, 0xf4e5cu);
    push32(c, 0xf4e61u); f_000e9740(c); X86_RET(c, 0xf4e61u);
    X86_TICK(c, 9);
    // 0f4e61  push 2
    X86_AT(c, 0xf4e61u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4e63  call 0xe6c68
    X86_AT(c, 0xf4e63u);
    push32(c, 0xf4e68u); f_000e6c68(c); X86_RET(c, 0xf4e68u);
    X86_TICK(c, 11);
    // 0f4e68  push 0x7b34
    X86_AT(c, 0xf4e68u);
    { uint32_t v = 0x7B34u; push32(c, v); }
    // 0f4e6d  push 2
    X86_AT(c, 0xf4e6du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4e6f  call 0xe5654
    X86_AT(c, 0xf4e6fu);
    push32(c, 0xf4e74u); f_000e5654(c); X86_RET(c, 0xf4e74u);
    X86_TICK(c, 2);
    // 0f4e74  add esp, 0x10
    X86_AT(c, 0xf4e74u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f4e77:
    X86_TICK(c, 9);
    // 0f4e77  push 2
    X86_AT(c, 0xf4e77u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f4e79  call 0xe4b60
    X86_AT(c, 0xf4e79u);
    push32(c, 0xf4e7eu); f_000e4b60(c); X86_RET(c, 0xf4e7eu);
    X86_TICK(c, 9);
    // 0f4e7e  add esp, 4
    X86_AT(c, 0xf4e7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f4e81  and al, al
    X86_AT(c, 0xf4e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0f4e83  je 0xf4e77
    X86_AT(c, 0xf4e83u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf4e77u); goto L_f4e77; }
    X86_TICK(c, 7);
    // 0f4e85  call 0xe9874
    X86_AT(c, 0xf4e85u);
    push32(c, 0xf4e8au); f_000e9874(c); X86_RET(c, 0xf4e8au);
    X86_TICK(c, 9);
    // 0f4e8a  push 0
    X86_AT(c, 0xf4e8au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f4e8c  call 0x1019e4
    X86_AT(c, 0xf4e8cu);
    push32(c, 0xf4e91u); f_001019e4(c); X86_RET(c, 0xf4e91u);
    X86_TICK(c, 12);
    // 0f4e91  add esp, 4
    X86_AT(c, 0xf4e91u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f4e94  ret 
    X86_AT(c, 0xf4e94u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4944u, "ran off the end of a function");
}
}

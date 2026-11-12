#include "p_game_funcs.h"
namespace p_game {
void f_00090e43(X86Cpu& c) {
    X86_TICK(c, 19);
    // 090e43  pushfd 
    X86_AT(c, 0x90e43u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 090e44  cli 
    X86_AT(c, 0x90e44u);
    c.fl &= ~X86_IF;
    // 090e45  mov bl, 0
    X86_AT(c, 0x90e45u);
    s8(c, 3, 0x0u);
    // 090e47  mov ah, 0x15
    X86_AT(c, 0x90e47u);
    s8(c, 4, 0x15u);
    // 090e49  call 0x8f774
    X86_AT(c, 0x90e49u);
    push32(c, 0x90e4eu); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x90e4eu);
    X86_TICK(c, 13);
    // 090e4e  mov eax, dword ptr [0x898fe]
    X86_AT(c, 0x90e4eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x898FEu)));
    // 090e53  push eax
    X86_AT(c, 0x90e53u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090e54  call 0x8f4c8
    X86_AT(c, 0x90e54u);
    push32(c, 0x90e59u); x86_call_known(c, 0x8f4c8u, f_0008f4c8); X86_RET(c, 0x90e59u);
    X86_TICK(c, 15);
    // 090e59  add esp, 4
    X86_AT(c, 0x90e59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 090e5c  mov eax, dword ptr [0x89902]
    X86_AT(c, 0x90e5cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89902u)));
    // 090e61  push eax
    X86_AT(c, 0x90e61u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090e62  call 0x8f4f4
    X86_AT(c, 0x90e62u);
    push32(c, 0x90e67u); x86_call_known(c, 0x8f4f4u, f_0008f4f4); X86_RET(c, 0x90e67u);
    X86_TICK(c, 18);
    // 090e67  add esp, 4
    X86_AT(c, 0x90e67u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 090e6a  popfd 
    X86_AT(c, 0x90e6au);
    x86_popfd(c, 4);
    // 090e6b  ret 
    X86_AT(c, 0x90e6bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90e43u, "ran off the end of a function");
}
void f_00090e6c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 090e6c  pushal 
    X86_AT(c, 0x90e6cu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 090e6d  lea esi, [0x89915]
    X86_AT(c, 0x90e6du);
    c.r[6] = (uint32_t)(0x89915u);
    // 090e73  lea eax, [0x89a95]
    X86_AT(c, 0x90e73u);
    c.r[0] = (uint32_t)(0x89A95u);
    // 090e79  mov bx, 0xe50
    X86_AT(c, 0x90e79u);
    s16(c, 3, 0xE50u);
    // 090e7d  mov ecx, 4
    X86_AT(c, 0x90e7du);
    c.r[1] = 0x4u;
    // 090e82  mov dx, 1
    X86_AT(c, 0x90e82u);
    s16(c, 2, 0x1u);
L_90e86:
    X86_TICK(c, 82);
    // 090e86  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0x90e86u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 090e8c  mov dword ptr [esi], eax
    X86_AT(c, 0x90e8cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 090e8e  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x90e8eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 090e91  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0x90e91u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 090e94  add eax, 0x10
    X86_AT(c, 0x90e94u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 090e99  mov dword ptr [esi + 4], eax
    X86_AT(c, 0x90e99u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 090e9c  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0x90e9cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 090ea0  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0x90ea0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 090ea3  inc bx
    X86_AT(c, 0x90ea3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 090ea5  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0x90ea5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 090ea9  add bx, 2
    X86_AT(c, 0x90ea9u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 090ead  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0x90eadu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 090eb1  inc bx
    X86_AT(c, 0x90eb1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 090eb3  shl dl, 1
    X86_AT(c, 0x90eb3u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 090eb5  add esi, 0x20
    X86_AT(c, 0x90eb5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 090eb8  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0x90eb8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 090ebe  mov dword ptr [esi], eax
    X86_AT(c, 0x90ebeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 090ec0  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x90ec0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 090ec3  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0x90ec3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 090ec6  add eax, 0x10
    X86_AT(c, 0x90ec6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 090ecb  mov dword ptr [esi + 4], eax
    X86_AT(c, 0x90ecbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 090ece  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0x90eceu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 090ed2  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0x90ed2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 090ed5  inc bx
    X86_AT(c, 0x90ed5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 090ed7  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0x90ed7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 090edb  inc bx
    X86_AT(c, 0x90edbu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 090edd  inc bx
    X86_AT(c, 0x90eddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 090edf  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0x90edfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 090ee3  sub word ptr [esi + 0x14], 4
    X86_AT(c, 0x90ee3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, 0x4u, 0, 2)); }
    // 090ee8  inc bx
    X86_AT(c, 0x90ee8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 090eea  shl dl, 1
    X86_AT(c, 0x90eeau);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 090eec  add esi, 0x20
    X86_AT(c, 0x90eecu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 090eef  loop 0x90e86
    X86_AT(c, 0x90eefu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90e86u); goto L_90e86; }
    X86_TICK(c, 34);
    // 090ef1  popal 
    X86_AT(c, 0x90ef1u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 090ef2  ret 
    X86_AT(c, 0x90ef2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90e6cu, "ran off the end of a function");
}
void f_00090ef3(X86Cpu& c) {
    X86_TICK(c, 28);
    // 090ef3  pushal 
    X86_AT(c, 0x90ef3u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 090ef4  lea esi, [0x89a15]
    X86_AT(c, 0x90ef4u);
    c.r[6] = (uint32_t)(0x89A15u);
    // 090efa  lea eax, [0x89b15]
    X86_AT(c, 0x90efau);
    c.r[0] = (uint32_t)(0x89B15u);
    // 090f00  mov bx, 0xe50
    X86_AT(c, 0x90f00u);
    s16(c, 3, 0xE50u);
    // 090f04  mov ecx, 4
    X86_AT(c, 0x90f04u);
    c.r[1] = 0x4u;
    // 090f09  mov dx, 1
    X86_AT(c, 0x90f09u);
    s16(c, 2, 0x1u);
L_90f0d:
    X86_TICK(c, 44);
    // 090f0d  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0x90f0du);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 090f13  mov dword ptr [esi], eax
    X86_AT(c, 0x90f13u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 090f15  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x90f15u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 090f18  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0x90f18u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 090f1b  add eax, 0x40
    X86_AT(c, 0x90f1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x40u, 0, 4); }
    // 090f20  mov dword ptr [esi + 4], eax
    X86_AT(c, 0x90f20u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 090f23  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0x90f23u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 090f27  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0x90f27u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 090f2a  inc bx
    X86_AT(c, 0x90f2au);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 090f2c  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0x90f2cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 090f30  add bx, 2
    X86_AT(c, 0x90f30u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 090f34  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0x90f34u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 090f38  inc bx
    X86_AT(c, 0x90f38u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 090f3a  shl dl, 1
    X86_AT(c, 0x90f3au);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 090f3c  add bx, 4
    X86_AT(c, 0x90f3cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x4u, 0, 2)); }
    // 090f40  add esi, 0x20
    X86_AT(c, 0x90f40u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 090f43  loop 0x90f0d
    X86_AT(c, 0x90f43u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90f0du); goto L_90f0d; }
    X86_TICK(c, 34);
    // 090f45  popal 
    X86_AT(c, 0x90f45u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 090f46  ret 
    X86_AT(c, 0x90f46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90ef3u, "ran off the end of a function");
}
void f_00090f47(X86Cpu& c) {
    X86_TICK(c, 24);
    // 090f47  pushal 
    X86_AT(c, 0x90f47u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 090f48  xor cx, cx
    X86_AT(c, 0x90f48u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
    // 090f4b  lea esi, [0x89a15]
    X86_AT(c, 0x90f4bu);
    c.r[6] = (uint32_t)(0x89A15u);
    // 090f51  lea edi, [0x89915]
    X86_AT(c, 0x90f51u);
    c.r[7] = (uint32_t)(0x89915u);
L_90f57:
    X86_TICK(c, 16);
    // 090f57  mov dx, cx
    X86_AT(c, 0x90f57u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 090f5a  shl dx, 3
    X86_AT(c, 0x90f5au);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 090f5e  add dx, 0xe51
    X86_AT(c, 0x90f5eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE51u, 0, 2)); }
    // 090f63  mov al, 0
    X86_AT(c, 0x90f63u);
    s8(c, 0, 0x0u);
    // 090f65  call 0x9100d
    X86_AT(c, 0x90f65u);
    push32(c, 0x90f6au); x86_call_known(c, 0x9100du, f_0009100d); X86_RET(c, 0x90f6au);
    X86_TICK(c, 7);
    // 090f6a  call 0x9100d
    X86_AT(c, 0x90f6au);
    push32(c, 0x90f6fu); x86_call_known(c, 0x9100du, f_0009100d); X86_RET(c, 0x90f6fu);
    X86_TICK(c, 7);
    // 090f6f  call 0x9100d
    X86_AT(c, 0x90f6fu);
    push32(c, 0x90f74u); x86_call_known(c, 0x9100du, f_0009100d); X86_RET(c, 0x90f74u);
    X86_TICK(c, 9);
    // 090f74  mov al, 0x40
    X86_AT(c, 0x90f74u);
    s8(c, 0, 0x40u);
    // 090f76  call 0x9100d
    X86_AT(c, 0x90f76u);
    push32(c, 0x90f7bu); x86_call_known(c, 0x9100du, f_0009100d); X86_RET(c, 0x90f7bu);
    X86_TICK(c, 9);
    // 090f7b  mov al, 0x4e
    X86_AT(c, 0x90f7bu);
    s8(c, 0, 0x4Eu);
    // 090f7d  call 0x9100d
    X86_AT(c, 0x90f7du);
    push32(c, 0x90f82u); x86_call_known(c, 0x9100du, f_0009100d); X86_RET(c, 0x90f82u);
    X86_TICK(c, 9);
    // 090f82  mov al, 0x37
    X86_AT(c, 0x90f82u);
    s8(c, 0, 0x37u);
    // 090f84  call 0x9100d
    X86_AT(c, 0x90f84u);
    push32(c, 0x90f89u); x86_call_known(c, 0x9100du, f_0009100d); X86_RET(c, 0x90f89u);
    X86_TICK(c, 25);
    // 090f89  mov byte ptr [esi + 0x18], 0
    X86_AT(c, 0x90f89u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0x0u);
    // 090f8d  mov byte ptr [edi + 0x18], 0
    X86_AT(c, 0x90f8du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0x0u);
    // 090f91  mov byte ptr [edi + 0x38], 0
    X86_AT(c, 0x90f91u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x0u);
    // 090f95  in al, dx
    X86_AT(c, 0x90f95u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 090f96  cmp al, 0xff
    X86_AT(c, 0x90f96u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 090f98  je 0x90faa
    X86_AT(c, 0x90f98u);
    if (x86_cc(c, 4)) { goto L_90faa; }
    X86_TICK(c, 6);
    // 090f9e  mov byte ptr [esi + 0x18], 0xff
    X86_AT(c, 0x90f9eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0xFFu);
    // 090fa2  mov byte ptr [edi + 0x18], 0xff
    X86_AT(c, 0x90fa2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0xFFu);
    // 090fa6  mov byte ptr [edi + 0x38], 0xff
    X86_AT(c, 0x90fa6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0xFFu);
L_90faa:
    X86_TICK(c, 31);
    // 090faa  add esi, 0x20
    X86_AT(c, 0x90faau);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 090fad  add edi, 0x40
    X86_AT(c, 0x90fadu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x40u, 0, 4); }
    // 090fb0  add dx, 2
    X86_AT(c, 0x90fb0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 090fb4  mov al, 1
    X86_AT(c, 0x90fb4u);
    s8(c, 0, 0x1u);
    // 090fb6  out dx, al
    X86_AT(c, 0x90fb6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090fb7  add dx, 2
    X86_AT(c, 0x90fb7u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 090fbb  mov al, 0
    X86_AT(c, 0x90fbbu);
    s8(c, 0, 0x0u);
    // 090fbd  call 0x9100d
    X86_AT(c, 0x90fbdu);
    push32(c, 0x90fc2u); x86_call_known(c, 0x9100du, f_0009100d); X86_RET(c, 0x90fc2u);
    X86_TICK(c, 7);
    // 090fc2  call 0x9100d
    X86_AT(c, 0x90fc2u);
    push32(c, 0x90fc7u); x86_call_known(c, 0x9100du, f_0009100d); X86_RET(c, 0x90fc7u);
    X86_TICK(c, 7);
    // 090fc7  call 0x9100d
    X86_AT(c, 0x90fc7u);
    push32(c, 0x90fccu); x86_call_known(c, 0x9100du, f_0009100d); X86_RET(c, 0x90fccu);
    X86_TICK(c, 9);
    // 090fcc  mov al, 0x40
    X86_AT(c, 0x90fccu);
    s8(c, 0, 0x40u);
    // 090fce  call 0x9100d
    X86_AT(c, 0x90fceu);
    push32(c, 0x90fd3u); x86_call_known(c, 0x9100du, f_0009100d); X86_RET(c, 0x90fd3u);
    X86_TICK(c, 9);
    // 090fd3  mov al, 0x4e
    X86_AT(c, 0x90fd3u);
    s8(c, 0, 0x4Eu);
    // 090fd5  call 0x9100d
    X86_AT(c, 0x90fd5u);
    push32(c, 0x90fdau); x86_call_known(c, 0x9100du, f_0009100d); X86_RET(c, 0x90fdau);
    X86_TICK(c, 9);
    // 090fda  mov al, 0x33
    X86_AT(c, 0x90fdau);
    s8(c, 0, 0x33u);
    // 090fdc  call 0x9100d
    X86_AT(c, 0x90fdcu);
    push32(c, 0x90fe1u); x86_call_known(c, 0x9100du, f_0009100d); X86_RET(c, 0x90fe1u);
    X86_TICK(c, 9);
    // 090fe1  inc cx
    X86_AT(c, 0x90fe1u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 090fe3  cmp cx, 4
    X86_AT(c, 0x90fe3u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4u, 0, 2);
    // 090fe7  jb 0x90f57
    X86_AT(c, 0x90fe7u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x90f57u); goto L_90f57; }
    X86_TICK(c, 16);
    // 090fed  mov byte ptr [0x898e9], 0
    X86_AT(c, 0x90fedu);
    wr8((c.sbase[3] + (uint32_t)(0x898E9u)), 0x0u);
    // 090ff4  lea esi, [0x89a15]
    X86_AT(c, 0x90ff4u);
    c.r[6] = (uint32_t)(0x89A15u);
    // 090ffa  cmp byte ptr [esi + 0x18], 0
    X86_AT(c, 0x90ffau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u))), 0x0u, 0, 1);
    // 090ffe  je 0x9100b
    X86_AT(c, 0x90ffeu);
    if (x86_cc(c, 4)) { goto L_9100b; }
    X86_TICK(c, 2);
    // 091004  mov byte ptr [0x898e9], 1
    X86_AT(c, 0x91004u);
    wr8((c.sbase[3] + (uint32_t)(0x898E9u)), 0x1u);
L_9100b:
    X86_TICK(c, 34);
    // 09100b  popal 
    X86_AT(c, 0x9100bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 09100c  ret 
    X86_AT(c, 0x9100cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90f47u, "ran off the end of a function");
}
void f_0009100d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 09100d  jmp 0x9100f
    X86_AT(c, 0x9100du);
    goto L_9100f;
L_9100f:
    X86_TICK(c, 19);
    // 09100f  out dx, al
    X86_AT(c, 0x9100fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091010  jmp 0x91012
    X86_AT(c, 0x91010u);
    goto L_91012;
L_91012:
    X86_TICK(c, 10);
    // 091012  ret 
    X86_AT(c, 0x91012u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9100du, "ran off the end of a function");
}
void f_00091013(X86Cpu& c) {
    X86_TICK(c, 28);
    // 091013  pushal 
    X86_AT(c, 0x91013u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 091014  pushf 
    X86_AT(c, 0x91014u);
    push16(c, c.fl & 0xFFFFu);
    // 091016  cli 
    X86_AT(c, 0x91016u);
    c.fl &= ~X86_IF;
    // 091017  mov ecx, 4
    X86_AT(c, 0x91017u);
    c.r[1] = 0x4u;
L_9101c:
    X86_TICK(c, 34);
    // 09101c  mov dx, cx
    X86_AT(c, 0x9101cu);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 09101f  dec dx
    X86_AT(c, 0x9101fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 091021  shl dx, 3
    X86_AT(c, 0x91021u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 091025  add dx, 0xe53
    X86_AT(c, 0x91025u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE53u, 0, 2)); }
    // 09102a  mov al, 0
    X86_AT(c, 0x9102au);
    s8(c, 0, 0x0u);
    // 09102c  out dx, al
    X86_AT(c, 0x9102cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 09102d  loop 0x9101c
    X86_AT(c, 0x9102du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x9101cu); goto L_9101c; }
    X86_TICK(c, 40);
    // 09102f  popf 
    X86_AT(c, 0x9102fu);
    x86_popfd(c, 2);
    // 091031  popal 
    X86_AT(c, 0x91031u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091032  ret 
    X86_AT(c, 0x91032u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91013u, "ran off the end of a function");
}
void f_00091033(X86Cpu& c) {
    X86_TICK(c, 23);
    // 091033  push ax
    X86_AT(c, 0x91033u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 091035  push dx
    X86_AT(c, 0x91035u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 091037  pushf 
    X86_AT(c, 0x91037u);
    push16(c, c.fl & 0xFFFFu);
    // 091039  cli 
    X86_AT(c, 0x91039u);
    c.fl &= ~X86_IF;
    // 09103a  mov ax, word ptr [0x896be]
    X86_AT(c, 0x9103au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x896BEu))));
    // 091040  call 0x910a2
    X86_AT(c, 0x91040u);
    push32(c, 0x91045u); x86_call_known(c, 0x910a2u, f_000910a2); X86_RET(c, 0x91045u);
    X86_TICK(c, 46);
    // 091045  mov al, byte ptr [0x898e6]
    X86_AT(c, 0x91045u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x898E6u))));
    // 09104a  or al, 1
    X86_AT(c, 0x9104au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x1u, 1)); }
    // 09104c  mov dx, 0xe73
    X86_AT(c, 0x9104cu);
    s16(c, 2, 0xE73u);
    // 091050  out dx, al
    X86_AT(c, 0x91050u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091051  mov byte ptr [0x898e6], al
    X86_AT(c, 0x91051u);
    wr8((c.sbase[3] + (uint32_t)(0x898E6u)), g8(c, 0));
    // 091056  popf 
    X86_AT(c, 0x91056u);
    x86_popfd(c, 2);
    // 091058  pop dx
    X86_AT(c, 0x91058u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 09105a  pop ax
    X86_AT(c, 0x9105au);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 09105c  ret 
    X86_AT(c, 0x9105cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91033u, "ran off the end of a function");
}
void f_00091074(X86Cpu& c) {
    X86_TICK(c, 46);
    // 091074  pushf 
    X86_AT(c, 0x91074u);
    push16(c, c.fl & 0xFFFFu);
    // 091076  cli 
    X86_AT(c, 0x91076u);
    c.fl &= ~X86_IF;
    // 091077  mov al, byte ptr [0x898e6]
    X86_AT(c, 0x91077u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x898E6u))));
    // 09107c  and al, 0xfe
    X86_AT(c, 0x9107cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFEu, 1)); }
    // 09107e  mov dx, 0xe73
    X86_AT(c, 0x9107eu);
    s16(c, 2, 0xE73u);
    // 091082  out dx, al
    X86_AT(c, 0x91082u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091083  mov byte ptr [0x898e6], al
    X86_AT(c, 0x91083u);
    wr8((c.sbase[3] + (uint32_t)(0x898E6u)), g8(c, 0));
    // 091088  popf 
    X86_AT(c, 0x91088u);
    x86_popfd(c, 2);
    // 09108a  ret 
    X86_AT(c, 0x9108au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91074u, "ran off the end of a function");
}
void f_000910a2(X86Cpu& c) {
    X86_TICK(c, 80);
    // 0910a2  push dx
    X86_AT(c, 0x910a2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0910a4  pushf 
    X86_AT(c, 0x910a4u);
    push16(c, c.fl & 0xFFFFu);
    // 0910a6  cli 
    X86_AT(c, 0x910a6u);
    c.fl &= ~X86_IF;
    // 0910a7  mov dx, 0xe77
    X86_AT(c, 0x910a7u);
    s16(c, 2, 0xE77u);
    // 0910ab  push ax
    X86_AT(c, 0x910abu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0910ad  mov al, 0x30
    X86_AT(c, 0x910adu);
    s8(c, 0, 0x30u);
    // 0910af  out dx, al
    X86_AT(c, 0x910afu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0910b0  pop ax
    X86_AT(c, 0x910b0u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0910b2  mov dx, 0xe74
    X86_AT(c, 0x910b2u);
    s16(c, 2, 0xE74u);
    // 0910b6  out dx, al
    X86_AT(c, 0x910b6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0910b7  mov al, ah
    X86_AT(c, 0x910b7u);
    s8(c, 0, g8(c, 4));
    // 0910b9  out dx, al
    X86_AT(c, 0x910b9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0910ba  popf 
    X86_AT(c, 0x910bau);
    x86_popfd(c, 2);
    // 0910bc  pop dx
    X86_AT(c, 0x910bcu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0910be  ret 
    X86_AT(c, 0x910beu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x910a2u, "ran off the end of a function");
}
void f_000910bf(X86Cpu& c) {
    X86_TICK(c, 57);
    // 0910bf  mov dx, 0xe77
    X86_AT(c, 0x910bfu);
    s16(c, 2, 0xE77u);
    // 0910c3  mov al, 0
    X86_AT(c, 0x910c3u);
    s8(c, 0, 0x0u);
    // 0910c5  out dx, al
    X86_AT(c, 0x910c5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0910c6  mov dx, 0xe74
    X86_AT(c, 0x910c6u);
    s16(c, 2, 0xE74u);
    // 0910ca  in al, dx
    X86_AT(c, 0x910cau);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0910cb  mov ah, al
    X86_AT(c, 0x910cbu);
    s8(c, 4, g8(c, 0));
    // 0910cd  in al, dx
    X86_AT(c, 0x910cdu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0910ce  xchg ah, al
    X86_AT(c, 0x910ceu);
    { uint32_t t = g8(c, 4); s8(c, 4, g8(c, 0)); s8(c, 0, t); }
    // 0910d0  ret 
    X86_AT(c, 0x910d0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x910bfu, "ran off the end of a function");
}
void f_000910d1(X86Cpu& c) {
    X86_TICK(c, 82);
    // 0910d1  push dx
    X86_AT(c, 0x910d1u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0910d3  mov dx, 0xe77
    X86_AT(c, 0x910d3u);
    s16(c, 2, 0xE77u);
    // 0910d7  pushf 
    X86_AT(c, 0x910d7u);
    push16(c, c.fl & 0xFFFFu);
    // 0910d9  cli 
    X86_AT(c, 0x910d9u);
    c.fl &= ~X86_IF;
    // 0910da  push ax
    X86_AT(c, 0x910dau);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0910dc  mov al, 0x70
    X86_AT(c, 0x910dcu);
    s8(c, 0, 0x70u);
    // 0910de  out dx, al
    X86_AT(c, 0x910deu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0910df  nop 
    X86_AT(c, 0x910dfu);
    // 0910e0  mov dx, 0xe75
    X86_AT(c, 0x910e0u);
    s16(c, 2, 0xE75u);
    // 0910e4  pop ax
    X86_AT(c, 0x910e4u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0910e6  out dx, al
    X86_AT(c, 0x910e6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0910e7  mov al, ah
    X86_AT(c, 0x910e7u);
    s8(c, 0, g8(c, 4));
    // 0910e9  out dx, al
    X86_AT(c, 0x910e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0910ea  popf 
    X86_AT(c, 0x910eau);
    x86_popfd(c, 2);
    // 0910ec  pop dx
    X86_AT(c, 0x910ecu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0910ee  ret 
    X86_AT(c, 0x910eeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x910d1u, "ran off the end of a function");
}
void f_0009110f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 09110f  cmp byte ptr [0x898e9], 0
    X86_AT(c, 0x9110fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x898E9u))), 0x0u, 0, 1);
    // 091116  jne 0x91178
    X86_AT(c, 0x91116u);
    if (x86_cc(c, 5)) { goto L_91178; }
    X86_TICK(c, 13);
    // 09111c  push eax
    X86_AT(c, 0x9111cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09111d  push ebx
    X86_AT(c, 0x9111du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09111e  movzx ebx, al
    X86_AT(c, 0x9111eu);
    c.r[3] = g8(c, 0);
    // 091121  mov ax, word ptr cs:[ebx*2 + 0x90984]
    X86_AT(c, 0x91121u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90984u))));
    // 09112a  mov bx, 0x10
    X86_AT(c, 0x9112au);
    s16(c, 3, 0x10u);
L_9112e:
    X86_TICK(c, 7);
    // 09112e  cmp ax, 0x7d
    X86_AT(c, 0x9112eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Du, 0, 2);
    // 091132  ja 0x9113c
    X86_AT(c, 0x91132u);
    if (x86_cc(c, 7)) { goto L_9113c; }
    X86_TICK(c, 13);
    // 091134  shl ax, 1
    X86_AT(c, 0x91134u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 091137  shl bx, 1
    X86_AT(c, 0x91137u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 09113a  jmp 0x9112e
    X86_AT(c, 0x9113au);
    X86_POLL(c, 0x9112eu); goto L_9112e;
L_9113c:
    X86_TICK(c, 7);
    // 09113c  cmp ax, 0x3ff
    X86_AT(c, 0x9113cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3FFu, 0, 2);
    // 091140  jb 0x9114e
    X86_AT(c, 0x91140u);
    if (x86_cc(c, 2)) { goto L_9114e; }
    X86_TICK(c, 13);
    // 091146  shr ax, 1
    X86_AT(c, 0x91146u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 091149  shr bx, 1
    X86_AT(c, 0x91149u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 09114c  jmp 0x9113c
    X86_AT(c, 0x9114cu);
    X86_POLL(c, 0x9113cu); goto L_9113c;
L_9114e:
    X86_TICK(c, 31);
    // 09114e  pushf 
    X86_AT(c, 0x9114eu);
    push16(c, c.fl & 0xFFFFu);
    // 091150  cli 
    X86_AT(c, 0x91150u);
    c.fl &= ~X86_IF;
    // 091151  mov word ptr [0x896be], ax
    X86_AT(c, 0x91151u);
    wr16((c.sbase[3] + (uint32_t)(0x896BEu)), (c.r[0] & 0xFFFFu));
    // 091157  mov word ptr [0x896b7], bx
    X86_AT(c, 0x91157u);
    wr16((c.sbase[3] + (uint32_t)(0x896B7u)), (c.r[3] & 0xFFFFu));
    // 09115e  mov ecx, eax
    X86_AT(c, 0x9115eu);
    c.r[1] = c.r[0];
    // 091160  sub ecx, 2
    X86_AT(c, 0x91160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 091163  neg ecx
    X86_AT(c, 0x91163u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 091165  mov bl, 0xff
    X86_AT(c, 0x91165u);
    s8(c, 3, 0xFFu);
    // 091167  push ecx
    X86_AT(c, 0x91167u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 091168  push ebx
    X86_AT(c, 0x91168u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 091169  call 0x8f34d
    X86_AT(c, 0x91169u);
    push32(c, 0x9116eu); x86_call_known(c, 0x8f34du, f_0008f34d); X86_RET(c, 0x9116eu);
    X86_TICK(c, 15);
    // 09116e  add esp, 8
    X86_AT(c, 0x9116eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 091171  popf 
    X86_AT(c, 0x91171u);
    x86_popfd(c, 2);
    // 091173  jmp 0x911ac
    X86_AT(c, 0x91173u);
    goto L_911ac;
L_91178:
    X86_TICK(c, 13);
    // 091178  push eax
    X86_AT(c, 0x91178u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091179  push ebx
    X86_AT(c, 0x91179u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09117a  movzx ebx, al
    X86_AT(c, 0x9117au);
    c.r[3] = g8(c, 0);
    // 09117d  mov ax, word ptr cs:[ebx*2 + 0x90782]
    X86_AT(c, 0x9117du);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90782u))));
    // 091186  mov bx, 0x10
    X86_AT(c, 0x91186u);
    s16(c, 3, 0x10u);
L_9118a:
    X86_TICK(c, 7);
    // 09118a  cmp ax, 0x450
    X86_AT(c, 0x9118au);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x450u, 0, 2);
    // 09118e  ja 0x9119c
    X86_AT(c, 0x9118eu);
    if (x86_cc(c, 7)) { goto L_9119c; }
    X86_TICK(c, 13);
    // 091194  shl ax, 1
    X86_AT(c, 0x91194u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 091197  shl bx, 1
    X86_AT(c, 0x91197u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 09119a  jmp 0x9118a
    X86_AT(c, 0x9119au);
    X86_POLL(c, 0x9118au); goto L_9118a;
L_9119c:
    X86_TICK(c, 18);
    // 09119c  pushfd 
    X86_AT(c, 0x9119cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 09119d  cli 
    X86_AT(c, 0x9119du);
    c.fl &= ~X86_IF;
    // 09119e  mov word ptr [0x896be], ax
    X86_AT(c, 0x9119eu);
    wr16((c.sbase[3] + (uint32_t)(0x896BEu)), (c.r[0] & 0xFFFFu));
    // 0911a4  mov word ptr [0x896b7], bx
    X86_AT(c, 0x911a4u);
    wr16((c.sbase[3] + (uint32_t)(0x896B7u)), (c.r[3] & 0xFFFFu));
    // 0911ab  popfd 
    X86_AT(c, 0x911abu);
    x86_popfd(c, 4);
L_911ac:
    X86_TICK(c, 18);
    // 0911ac  pop ebx
    X86_AT(c, 0x911acu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0911ad  pop eax
    X86_AT(c, 0x911adu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0911ae  ret 
    X86_AT(c, 0x911aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9110fu, "ran off the end of a function");
}
void f_000911af(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0911af  push eax
    X86_AT(c, 0x911afu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0911b0  push ds
    X86_AT(c, 0x911b0u);
    push32(c, c.sreg[3]);
    // 0911b1  push es
    X86_AT(c, 0x911b1u);
    push32(c, c.sreg[0]);
    // 0911b2  mov ax, 0x14
    X86_AT(c, 0x911b2u);
    s16(c, 0, 0x14u);
    // 0911b6  mov ds, eax
    X86_AT(c, 0x911b6u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0911b8  mov es, eax
    X86_AT(c, 0x911b8u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0911ba  cld 
    X86_AT(c, 0x911bau);
    c.fl &= ~X86_DF;
    // 0911bb  cmp byte ptr [0x89908], 0
    X86_AT(c, 0x911bbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89908u))), 0x0u, 0, 1);
    // 0911c2  jne 0x911de
    X86_AT(c, 0x911c2u);
    if (x86_cc(c, 5)) { goto L_911de; }
    X86_TICK(c, 10);
    // 0911c8  mov dword ptr [0x8990f], esp
    X86_AT(c, 0x911c8u);
    wr32((c.sbase[3] + (uint32_t)(0x8990Fu)), c.r[4]);
    // 0911ce  mov word ptr [0x89913], ss
    X86_AT(c, 0x911ceu);
    wr16((c.sbase[3] + (uint32_t)(0x89913u)), (uint32_t)c.sreg[2]);
    // 0911d4  mov eax, ds
    X86_AT(c, 0x911d4u);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0911d6  mov ss, eax
    X86_AT(c, 0x911d6u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0911d8  lea esp, [0x8a215]
    X86_AT(c, 0x911d8u);
    c.r[4] = (uint32_t)(0x8A215u);
L_911de:
    X86_TICK(c, 53);
    // 0911de  inc byte ptr [0x89908]
    X86_AT(c, 0x911deu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89908u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0911e4  sti 
    X86_AT(c, 0x911e4u);
    c.fl |= X86_IF;
    // 0911e5  push fs
    X86_AT(c, 0x911e5u);
    push32(c, c.sreg[4]);
    // 0911e7  push gs
    X86_AT(c, 0x911e7u);
    push32(c, c.sreg[5]);
    // 0911e9  pushal 
    X86_AT(c, 0x911e9u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0911ea  mov dx, 0xe70
    X86_AT(c, 0x911eau);
    s16(c, 2, 0xE70u);
    // 0911ee  in ax, dx
    X86_AT(c, 0x911eeu);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 0911f0  xor ax, 0xffff
    X86_AT(c, 0x911f0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0xFFFFu, 2)); }
    // 0911f4  call 0x912ba
    X86_AT(c, 0x911f4u);
    push32(c, 0x911f9u); x86_call_known(c, 0x912bau, f_000912ba); X86_RET(c, 0x911f9u);
    X86_TICK(c, 7);
    // 0911f9  call 0x912d6
    X86_AT(c, 0x911f9u);
    push32(c, 0x911feu); x86_call_known(c, 0x912d6u, f_000912d6); X86_RET(c, 0x911feu);
    X86_TICK(c, 7);
    // 0911fe  call 0x912f6
    X86_AT(c, 0x911feu);
    push32(c, 0x91203u); x86_call_known(c, 0x912f6u, f_000912f6); X86_RET(c, 0x91203u);
    X86_TICK(c, 7);
    // 091203  call 0x8f729
    X86_AT(c, 0x91203u);
    push32(c, 0x91208u); x86_call_known(c, 0x8f729u, f_0008f729); X86_RET(c, 0x91208u);
    X86_TICK(c, 45);
    // 091208  popal 
    X86_AT(c, 0x91208u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091209  pop gs
    X86_AT(c, 0x91209u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 09120b  pop fs
    X86_AT(c, 0x9120bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 09120d  cli 
    X86_AT(c, 0x9120du);
    c.fl &= ~X86_IF;
    // 09120e  dec byte ptr [0x89908]
    X86_AT(c, 0x9120eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89908u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 091214  jne 0x91226
    X86_AT(c, 0x91214u);
    if (x86_cc(c, 5)) { goto L_91226; }
    X86_TICK(c, 8);
    // 09121a  mov esp, dword ptr [0x8990f]
    X86_AT(c, 0x9121au);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x8990Fu)));
    // 091220  mov ss, word ptr [0x89913]
    X86_AT(c, 0x91220u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x89913u))) & 0xFFFFu);
L_91226:
    X86_TICK(c, 18);
    // 091226  pop es
    X86_AT(c, 0x91226u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 091227  pop ds
    X86_AT(c, 0x91227u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 091228  pop eax
    X86_AT(c, 0x91228u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 091229  iretd 
    X86_AT(c, 0x91229u);
    x86_iret(c, 4); return;
    x86_fault(c, 0x911afu, "ran off the end of a function");
}
void f_0009122a(X86Cpu& c) {
    X86_TICK(c, 26);
    // 09122a  push eax
    X86_AT(c, 0x9122au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09122b  push ds
    X86_AT(c, 0x9122bu);
    push32(c, c.sreg[3]);
    // 09122c  push es
    X86_AT(c, 0x9122cu);
    push32(c, c.sreg[0]);
    // 09122d  mov ax, 0x14
    X86_AT(c, 0x9122du);
    s16(c, 0, 0x14u);
    // 091231  mov ds, eax
    X86_AT(c, 0x91231u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 091233  mov es, eax
    X86_AT(c, 0x91233u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 091235  cld 
    X86_AT(c, 0x91235u);
    c.fl &= ~X86_DF;
    // 091236  cmp byte ptr [0x89907], 0
    X86_AT(c, 0x91236u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89907u))), 0x0u, 0, 1);
    // 09123d  jne 0x91259
    X86_AT(c, 0x9123du);
    if (x86_cc(c, 5)) { goto L_91259; }
    X86_TICK(c, 10);
    // 091243  mov dword ptr [0x89909], esp
    X86_AT(c, 0x91243u);
    wr32((c.sbase[3] + (uint32_t)(0x89909u)), c.r[4]);
    // 091249  mov word ptr [0x8990d], ss
    X86_AT(c, 0x91249u);
    wr16((c.sbase[3] + (uint32_t)(0x8990Du)), (uint32_t)c.sreg[2]);
    // 09124f  mov eax, ds
    X86_AT(c, 0x9124fu);
    c.r[0] = (uint32_t)c.sreg[3];
    // 091251  mov ss, eax
    X86_AT(c, 0x91251u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 091253  lea esp, [0x8a015]
    X86_AT(c, 0x91253u);
    c.r[4] = (uint32_t)(0x8A015u);
L_91259:
    X86_TICK(c, 51);
    // 091259  inc byte ptr [0x89907]
    X86_AT(c, 0x91259u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89907u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 09125f  sti 
    X86_AT(c, 0x9125fu);
    c.fl |= X86_IF;
    // 091260  push fs
    X86_AT(c, 0x91260u);
    push32(c, c.sreg[4]);
    // 091262  push gs
    X86_AT(c, 0x91262u);
    push32(c, c.sreg[5]);
    // 091264  pushal 
    X86_AT(c, 0x91264u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 091265  mov dx, 0xe73
    X86_AT(c, 0x91265u);
    s16(c, 2, 0xE73u);
    // 091269  in al, dx
    X86_AT(c, 0x91269u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 09126a  test al, 1
    X86_AT(c, 0x9126au);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 09126c  je 0x91273
    X86_AT(c, 0x9126cu);
    if (x86_cc(c, 4)) { goto L_91273; }
    X86_TICK(c, 7);
    // 09126e  call 0x9131f
    X86_AT(c, 0x9126eu);
    push32(c, 0x91273u); x86_call_known(c, 0x9131fu, f_0009131f); X86_RET(c, 0x91273u);
L_91273:
    X86_TICK(c, 7);
    // 091273  test al, 2
    X86_AT(c, 0x91273u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 091275  je 0x9127c
    X86_AT(c, 0x91275u);
    if (x86_cc(c, 4)) { goto L_9127c; }
    X86_TICK(c, 7);
    // 091277  call 0x91394
    X86_AT(c, 0x91277u);
    push32(c, 0x9127cu); x86_call_known(c, 0x91394u, f_00091394); X86_RET(c, 0x9127cu);
L_9127c:
    X86_TICK(c, 9);
    // 09127c  cli 
    X86_AT(c, 0x9127cu);
    c.fl &= ~X86_IF;
    // 09127d  call 0x8f729
    X86_AT(c, 0x9127du);
    push32(c, 0x91282u); x86_call_known(c, 0x8f729u, f_0008f729); X86_RET(c, 0x91282u);
    X86_TICK(c, 7);
    // 091282  test al, 1
    X86_AT(c, 0x91282u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 091284  je 0x91298
    X86_AT(c, 0x91284u);
    if (x86_cc(c, 4)) { goto L_91298; }
    X86_TICK(c, 7);
    // 091286  call 0x8f723
    X86_AT(c, 0x91286u);
    push32(c, 0x9128bu); x86_call_known(c, 0x8f723u, f_0008f723); X86_RET(c, 0x9128bu);
    X86_TICK(c, 7);
    // 09128b  or al, al
    X86_AT(c, 0x9128bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 09128d  jne 0x91298
    X86_AT(c, 0x9128du);
    if (x86_cc(c, 5)) { goto L_91298; }
    X86_TICK(c, 7);
    // 091293  call 0x914c0
    X86_AT(c, 0x91293u);
    push32(c, 0x91298u); x86_call_known(c, 0x914c0u, f_000914c0); X86_RET(c, 0x91298u);
L_91298:
    X86_TICK(c, 45);
    // 091298  popal 
    X86_AT(c, 0x91298u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091299  pop gs
    X86_AT(c, 0x91299u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 09129b  pop fs
    X86_AT(c, 0x9129bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 09129d  cli 
    X86_AT(c, 0x9129du);
    c.fl &= ~X86_IF;
    // 09129e  dec byte ptr [0x89907]
    X86_AT(c, 0x9129eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89907u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0912a4  jne 0x912b6
    X86_AT(c, 0x912a4u);
    if (x86_cc(c, 5)) { goto L_912b6; }
    X86_TICK(c, 8);
    // 0912aa  mov esp, dword ptr [0x89909]
    X86_AT(c, 0x912aau);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x89909u)));
    // 0912b0  mov ss, word ptr [0x8990d]
    X86_AT(c, 0x912b0u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x8990Du))) & 0xFFFFu);
L_912b6:
    X86_TICK(c, 18);
    // 0912b6  pop es
    X86_AT(c, 0x912b6u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0912b7  pop ds
    X86_AT(c, 0x912b7u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0912b8  pop eax
    X86_AT(c, 0x912b8u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0912b9  iretd 
    X86_AT(c, 0x912b9u);
    x86_iret(c, 4); return;
    x86_fault(c, 0x9122au, "ran off the end of a function");
}
void f_000912ba(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0912ba  push ax
    X86_AT(c, 0x912bau);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0912bc  mov al, ah
    X86_AT(c, 0x912bcu);
    s8(c, 0, g8(c, 4));
    // 0912be  and al, 0xf
    X86_AT(c, 0x912beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0912c0  je 0x912d3
    X86_AT(c, 0x912c0u);
    if (x86_cc(c, 4)) { goto L_912d3; }
    X86_TICK(c, 2);
    // 0912c2  xor ecx, ecx
    X86_AT(c, 0x912c2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_912c4:
    X86_TICK(c, 8);
    // 0912c4  shr al, 1
    X86_AT(c, 0x912c4u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0912c6  jae 0x912cd
    X86_AT(c, 0x912c6u);
    if (x86_cc(c, 3)) { goto L_912cd; }
    X86_TICK(c, 7);
    // 0912c8  call 0x913f2
    X86_AT(c, 0x912c8u);
    push32(c, 0x912cdu); x86_call_known(c, 0x913f2u, f_000913f2); X86_RET(c, 0x912cdu);
L_912cd:
    X86_TICK(c, 9);
    // 0912cd  inc ecx
    X86_AT(c, 0x912cdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0912ce  cmp ecx, 4
    X86_AT(c, 0x912ceu);
    (void)x86_sub(c, c.r[1], 0x4u, 0, 4);
    // 0912d1  jb 0x912c4
    X86_AT(c, 0x912d1u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x912c4u); goto L_912c4; }
L_912d3:
    X86_TICK(c, 14);
    // 0912d3  pop ax
    X86_AT(c, 0x912d3u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0912d5  ret 
    X86_AT(c, 0x912d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x912bau, "ran off the end of a function");
}
void f_000912d6(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0912d6  push ax
    X86_AT(c, 0x912d6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0912d8  or al, al
    X86_AT(c, 0x912d8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 0912da  je 0x912f3
    X86_AT(c, 0x912dau);
    if (x86_cc(c, 4)) { goto L_912f3; }
    X86_TICK(c, 2);
    // 0912dc  xor ecx, ecx
    X86_AT(c, 0x912dcu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_912de:
    X86_TICK(c, 8);
    // 0912de  shr al, 1
    X86_AT(c, 0x912deu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0912e0  jae 0x912eb
    X86_AT(c, 0x912e0u);
    if (x86_cc(c, 3)) { goto L_912eb; }
    X86_TICK(c, 7);
    // 0912e6  call 0x91452
    X86_AT(c, 0x912e6u);
    push32(c, 0x912ebu); x86_call_known(c, 0x91452u, f_00091452); X86_RET(c, 0x912ebu);
L_912eb:
    X86_TICK(c, 9);
    // 0912eb  inc cx
    X86_AT(c, 0x912ebu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 0912ed  cmp cx, 8
    X86_AT(c, 0x912edu);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x8u, 0, 2);
    // 0912f1  jb 0x912de
    X86_AT(c, 0x912f1u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x912deu); goto L_912de; }
L_912f3:
    X86_TICK(c, 14);
    // 0912f3  pop ax
    X86_AT(c, 0x912f3u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0912f5  ret 
    X86_AT(c, 0x912f5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x912d6u, "ran off the end of a function");
}
void f_000912f6(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0912f6  push ax
    X86_AT(c, 0x912f6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0912f8  mov al, ah
    X86_AT(c, 0x912f8u);
    s8(c, 0, g8(c, 4));
    // 0912fa  and al, 0xf0
    X86_AT(c, 0x912fau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0912fc  and al, byte ptr [0x898e7]
    X86_AT(c, 0x912fcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0x898E7u))), 1)); }
    // 091302  je 0x9131c
    X86_AT(c, 0x91302u);
    if (x86_cc(c, 4)) { goto L_9131c; }
    X86_TICK(c, 31);
    // 091304  or byte ptr [0x898e8], al
    X86_AT(c, 0x91304u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x898E8u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 09130a  xor al, 0xff
    X86_AT(c, 0x9130au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 09130c  and al, byte ptr [0x898e7]
    X86_AT(c, 0x9130cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0x898E7u))), 1)); }
    // 091312  mov dx, 0xe71
    X86_AT(c, 0x91312u);
    s16(c, 2, 0xE71u);
    // 091316  out dx, al
    X86_AT(c, 0x91316u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091317  mov byte ptr [0x898e7], al
    X86_AT(c, 0x91317u);
    wr8((c.sbase[3] + (uint32_t)(0x898E7u)), g8(c, 0));
L_9131c:
    X86_TICK(c, 14);
    // 09131c  pop ax
    X86_AT(c, 0x9131cu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 09131e  ret 
    X86_AT(c, 0x9131eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x912f6u, "ran off the end of a function");
}
void f_0009131f(X86Cpu& c) {
    X86_TICK(c, 9);
    // 09131f  push ax
    X86_AT(c, 0x9131fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 091321  call 0x910bf
    X86_AT(c, 0x91321u);
    push32(c, 0x91326u); x86_call_known(c, 0x910bfu, f_000910bf); X86_RET(c, 0x91326u);
    X86_TICK(c, 8);
    // 091326  sub ax, 8
    X86_AT(c, 0x91326u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x8u, 0, 2)); }
    // 09132a  mov dx, word ptr [0x896be]
    X86_AT(c, 0x9132au);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x896BEu))));
    // 091331  xor cx, cx
    X86_AT(c, 0x91331u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
L_91334:
    X86_TICK(c, 9);
    // 091334  inc cx
    X86_AT(c, 0x91334u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 091336  add ax, dx
    X86_AT(c, 0x91336u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 091339  jae 0x91334
    X86_AT(c, 0x91339u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x91334u); goto L_91334; }
    X86_TICK(c, 7);
    // 09133b  call 0x910a2
    X86_AT(c, 0x9133bu);
    push32(c, 0x91340u); x86_call_known(c, 0x910a2u, f_000910a2); X86_RET(c, 0x91340u);
    X86_TICK(c, 53);
    // 091340  mov ax, word ptr [0x896b7]
    X86_AT(c, 0x91340u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x896B7u))));
    // 091346  mul cl
    X86_AT(c, 0x91346u);
    x86_mul(c, g8(c, 1), 1);
    // 091348  add ax, word ptr [0x896b5]
    X86_AT(c, 0x91348u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0x896B5u))), 0, 2)); }
    // 09134f  mov cx, ax
    X86_AT(c, 0x9134fu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 091352  and cx, 0xf
    X86_AT(c, 0x91352u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 091356  mov word ptr [0x896b5], cx
    X86_AT(c, 0x91356u);
    wr16((c.sbase[3] + (uint32_t)(0x896B5u)), (c.r[1] & 0xFFFFu));
    // 09135d  shr ax, 4
    X86_AT(c, 0x9135du);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 091361  sub byte ptr [0x896b4], al
    X86_AT(c, 0x91361u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896B4u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 091367  jns 0x91378
    X86_AT(c, 0x91367u);
    if (x86_cc(c, 9)) { goto L_91378; }
L_91369:
    X86_TICK(c, 18);
    // 091369  inc byte ptr [0x896b3]
    X86_AT(c, 0x91369u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896B3u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 09136f  add byte ptr [0x896b4], 4
    X86_AT(c, 0x9136fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896B4u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 091376  jae 0x91369
    X86_AT(c, 0x91376u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x91369u); goto L_91369; }
L_91378:
    X86_TICK(c, 12);
    // 091378  cmp byte ptr [0x896a6], 0
    X86_AT(c, 0x91378u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896A6u))), 0x0u, 0, 1);
    // 09137f  je 0x91391
    X86_AT(c, 0x9137fu);
    if (x86_cc(c, 4)) { goto L_91391; }
    X86_TICK(c, 12);
    // 091381  cmp byte ptr [0x896a8], 0
    X86_AT(c, 0x91381u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896A8u))), 0x0u, 0, 1);
    // 091388  jne 0x91391
    X86_AT(c, 0x91388u);
    if (x86_cc(c, 5)) { goto L_91391; }
    X86_TICK(c, 7);
    // 09138a  add word ptr [0x896b9], ax
    X86_AT(c, 0x9138au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896B9u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_91391:
    X86_TICK(c, 14);
    // 091391  pop ax
    X86_AT(c, 0x91391u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 091393  ret 
    X86_AT(c, 0x91393u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9131fu, "ran off the end of a function");
}
void f_00091394(X86Cpu& c) {
    X86_TICK(c, 11);
    // 091394  push ax
    X86_AT(c, 0x91394u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 091396  mov ax, 0xffff
    X86_AT(c, 0x91396u);
    s16(c, 0, 0xFFFFu);
    // 09139a  call 0x910d1
    X86_AT(c, 0x9139au);
    push32(c, 0x9139fu); x86_call_known(c, 0x910d1u, f_000910d1); X86_RET(c, 0x9139fu);
    X86_TICK(c, 14);
    // 09139f  pop ax
    X86_AT(c, 0x9139fu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0913a1  ret 
    X86_AT(c, 0x913a1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91394u, "ran off the end of a function");
}
void f_000913a2(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0913a2  mov ax, word ptr [0x896b7]
    X86_AT(c, 0x913a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x896B7u))));
    // 0913a8  add ax, word ptr [0x896b5]
    X86_AT(c, 0x913a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0x896B5u))), 0, 2)); }
    // 0913af  mov cx, ax
    X86_AT(c, 0x913afu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 0913b2  and cx, 0xf
    X86_AT(c, 0x913b2u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 0913b6  mov word ptr [0x896b5], cx
    X86_AT(c, 0x913b6u);
    wr16((c.sbase[3] + (uint32_t)(0x896B5u)), (c.r[1] & 0xFFFFu));
    // 0913bd  shr ax, 4
    X86_AT(c, 0x913bdu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 0913c1  sub byte ptr [0x896b4], al
    X86_AT(c, 0x913c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896B4u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 0913c7  jns 0x913d8
    X86_AT(c, 0x913c7u);
    if (x86_cc(c, 9)) { goto L_913d8; }
L_913c9:
    X86_TICK(c, 18);
    // 0913c9  inc byte ptr [0x896b3]
    X86_AT(c, 0x913c9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896B3u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0913cf  add byte ptr [0x896b4], 4
    X86_AT(c, 0x913cfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896B4u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 0913d6  jae 0x913c9
    X86_AT(c, 0x913d6u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x913c9u); goto L_913c9; }
L_913d8:
    X86_TICK(c, 12);
    // 0913d8  cmp byte ptr [0x896a6], 0
    X86_AT(c, 0x913d8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896A6u))), 0x0u, 0, 1);
    // 0913df  je 0x913f1
    X86_AT(c, 0x913dfu);
    if (x86_cc(c, 4)) { goto L_913f1; }
    X86_TICK(c, 12);
    // 0913e1  cmp byte ptr [0x896a8], 0
    X86_AT(c, 0x913e1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896A8u))), 0x0u, 0, 1);
    // 0913e8  jne 0x913f1
    X86_AT(c, 0x913e8u);
    if (x86_cc(c, 5)) { goto L_913f1; }
    X86_TICK(c, 7);
    // 0913ea  add word ptr [0x896b9], ax
    X86_AT(c, 0x913eau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896B9u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_913f1:
    X86_TICK(c, 10);
    // 0913f1  ret 
    X86_AT(c, 0x913f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x913a2u, "ran off the end of a function");
}
void f_000913f2(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0913f2  push ax
    X86_AT(c, 0x913f2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0913f4  mov ebx, ecx
    X86_AT(c, 0x913f4u);
    c.r[3] = c.r[1];
    // 0913f6  shl ebx, 5
    X86_AT(c, 0x913f6u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0913f9  lea ebx, [ebx + 0x89a15]
    X86_AT(c, 0x913f9u);
    c.r[3] = (uint32_t)(c.r[3] + 0x89A15u);
    // 0913ff  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0x913ffu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
    // 091403  in al, dx
    X86_AT(c, 0x91403u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 091404  test al, 4
    X86_AT(c, 0x91404u);
    (void)x86_logic(c, g8(c, 0) & 0x4u, 1);
    // 091406  je 0x91420
    X86_AT(c, 0x91406u);
    if (x86_cc(c, 4)) { goto L_91420; }
    X86_TICK(c, 6);
    // 091408  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0x91408u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 09140c  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0x9140cu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_91410:
    X86_TICK(c, 19);
    // 091410  in al, dx
    X86_AT(c, 0x91410u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 091411  test al, 1
    X86_AT(c, 0x91411u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 091413  jne 0x91410
    X86_AT(c, 0x91413u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x91410u); goto L_91410; }
    X86_TICK(c, 24);
    // 091415  push dx
    X86_AT(c, 0x91415u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 091417  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0x91417u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 09141b  mov al, 0x37
    X86_AT(c, 0x9141bu);
    s8(c, 0, 0x37u);
    // 09141d  out dx, al
    X86_AT(c, 0x9141du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 09141e  pop dx
    X86_AT(c, 0x9141eu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_91420:
    X86_TICK(c, 19);
    // 091420  in al, dx
    X86_AT(c, 0x91420u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 091421  test al, 2
    X86_AT(c, 0x91421u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 091423  jne 0x91420
    X86_AT(c, 0x91423u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x91420u); goto L_91420; }
    X86_TICK(c, 21);
    // 091425  dec dx
    X86_AT(c, 0x91425u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 091427  in al, dx
    X86_AT(c, 0x91427u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 091428  cmp al, 0xf8
    X86_AT(c, 0x91428u);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 09142a  jb 0x91430
    X86_AT(c, 0x9142au);
    if (x86_cc(c, 2)) { goto L_91430; }
    X86_TICK(c, 9);
    // 09142c  mov bl, cl
    X86_AT(c, 0x9142cu);
    s8(c, 3, g8(c, 1));
    // 09142e  jmp 0x9144f
    X86_AT(c, 0x9142eu);
    goto L_9144f;
L_91430:
    X86_TICK(c, 12);
    // 091430  cmp word ptr [ebx + 0x10], 0x40
    X86_AT(c, 0x91430u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x40u, 0, 2);
    // 091435  jb 0x9143d
    X86_AT(c, 0x91435u);
    if (x86_cc(c, 2)) { goto L_9143d; }
    X86_TICK(c, 9);
    // 091437  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0x91437u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 09143b  jmp 0x9144f
    X86_AT(c, 0x9143bu);
    goto L_9144f;
L_9143d:
    X86_TICK(c, 28);
    // 09143d  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0x9143du);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091440  stosb byte ptr es:[edi], al
    X86_AT(c, 0x91440u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 091441  inc word ptr [ebx + 0x10]
    X86_AT(c, 0x91441u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 091445  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x91445u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091448  jne 0x9144c
    X86_AT(c, 0x91448u);
    if (x86_cc(c, 5)) { goto L_9144c; }
    X86_TICK(c, 4);
    // 09144a  mov edi, dword ptr [ebx]
    X86_AT(c, 0x9144au);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_9144c:
    X86_TICK(c, 2);
    // 09144c  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0x9144cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
L_9144f:
    X86_TICK(c, 14);
    // 09144f  pop ax
    X86_AT(c, 0x9144fu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 091451  ret 
    X86_AT(c, 0x91451u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x913f2u, "ran off the end of a function");
}
void f_00091452(X86Cpu& c) {
    X86_TICK(c, 20);
    // 091452  push ax
    X86_AT(c, 0x91452u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 091454  mov ebx, ecx
    X86_AT(c, 0x91454u);
    c.r[3] = c.r[1];
    // 091456  shl ebx, 5
    X86_AT(c, 0x91456u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 091459  lea ebx, [ebx + 0x89915]
    X86_AT(c, 0x91459u);
    c.r[3] = (uint32_t)(c.r[3] + 0x89915u);
    // 09145f  dec word ptr [ebx + 0x10]
    X86_AT(c, 0x9145fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 091463  js 0x914a4
    X86_AT(c, 0x91463u);
    if (x86_cc(c, 8)) { goto L_914a4; }
    X86_TICK(c, 4);
    // 091469  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0x91469u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_9146d:
    X86_TICK(c, 37);
    // 09146d  mov al, 1
    X86_AT(c, 0x9146du);
    s8(c, 0, 0x1u);
    // 09146f  out dx, al
    X86_AT(c, 0x9146fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091470  nop 
    X86_AT(c, 0x91470u);
    // 091471  nop 
    X86_AT(c, 0x91471u);
    // 091472  in al, dx
    X86_AT(c, 0x91472u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 091473  test al, 1
    X86_AT(c, 0x91473u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 091475  jne 0x9146d
    X86_AT(c, 0x91475u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9146du); goto L_9146d; }
    X86_TICK(c, 35);
    // 091477  out dx, al
    X86_AT(c, 0x91477u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091478  nop 
    X86_AT(c, 0x91478u);
    // 091479  nop 
    X86_AT(c, 0x91479u);
    // 09147a  in al, dx
    X86_AT(c, 0x9147au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 09147b  test al, 1
    X86_AT(c, 0x9147bu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 09147d  jne 0x9146d
    X86_AT(c, 0x9147du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9146du); goto L_9146d; }
    X86_TICK(c, 60);
    // 09147f  push dx
    X86_AT(c, 0x9147fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 091481  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0x91481u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 091484  lodsb al, byte ptr [esi]
    X86_AT(c, 0x91484u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 091485  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0x91485u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 091489  dec dx
    X86_AT(c, 0x91489u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 09148b  out dx, al
    X86_AT(c, 0x9148bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 09148c  pop dx
    X86_AT(c, 0x9148cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 09148e  mov al, 1
    X86_AT(c, 0x9148eu);
    s8(c, 0, 0x1u);
    // 091490  out dx, al
    X86_AT(c, 0x91490u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091491  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0x91491u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091494  jne 0x9149c
    X86_AT(c, 0x91494u);
    if (x86_cc(c, 5)) { goto L_9149c; }
    X86_TICK(c, 4);
    // 09149a  mov esi, dword ptr [ebx]
    X86_AT(c, 0x9149au);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_9149c:
    X86_TICK(c, 9);
    // 09149c  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0x9149cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 09149f  jmp 0x914bd
    X86_AT(c, 0x9149fu);
    goto L_914bd;
L_914a4:
    X86_TICK(c, 34);
    // 0914a4  inc word ptr [ebx + 0x10]
    X86_AT(c, 0x914a4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0914a8  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0x914a8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 0914ab  xor al, 0xff
    X86_AT(c, 0x914abu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0914ad  and al, byte ptr [0x898e5]
    X86_AT(c, 0x914adu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0x898E5u))), 1)); }
    // 0914b3  mov byte ptr [0x898e5], al
    X86_AT(c, 0x914b3u);
    wr8((c.sbase[3] + (uint32_t)(0x898E5u)), g8(c, 0));
    // 0914b8  mov dx, 0xe70
    X86_AT(c, 0x914b8u);
    s16(c, 2, 0xE70u);
    // 0914bc  out dx, al
    X86_AT(c, 0x914bcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_914bd:
    X86_TICK(c, 14);
    // 0914bd  pop ax
    X86_AT(c, 0x914bdu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0914bf  ret 
    X86_AT(c, 0x914bfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91452u, "ran off the end of a function");
}
void f_000914c0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0914c0  cli 
    X86_AT(c, 0x914c0u);
    c.fl &= ~X86_IF;
    // 0914c1  cmp byte ptr [0x89906], 0
    X86_AT(c, 0x914c1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89906u))), 0x0u, 0, 1);
    // 0914c8  jne 0x91520
    X86_AT(c, 0x914c8u);
    if (x86_cc(c, 5)) { goto L_91520; }
    X86_TICK(c, 14);
    // 0914ca  mov byte ptr [0x89906], 0xff
    X86_AT(c, 0x914cau);
    wr8((c.sbase[3] + (uint32_t)(0x89906u)), 0xFFu);
    // 0914d1  cmp byte ptr [0x89907], 0
    X86_AT(c, 0x914d1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89907u))), 0x0u, 0, 1);
    // 0914d8  jne 0x914f4
    X86_AT(c, 0x914d8u);
    if (x86_cc(c, 5)) { goto L_914f4; }
    X86_TICK(c, 10);
    // 0914de  mov dword ptr [0x89909], esp
    X86_AT(c, 0x914deu);
    wr32((c.sbase[3] + (uint32_t)(0x89909u)), c.r[4]);
    // 0914e4  mov word ptr [0x8990d], ss
    X86_AT(c, 0x914e4u);
    wr16((c.sbase[3] + (uint32_t)(0x8990Du)), (uint32_t)c.sreg[2]);
    // 0914ea  mov eax, ds
    X86_AT(c, 0x914eau);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0914ec  mov ss, eax
    X86_AT(c, 0x914ecu);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0914ee  lea esp, [0x8a015]
    X86_AT(c, 0x914eeu);
    c.r[4] = (uint32_t)(0x8A015u);
L_914f4:
    X86_TICK(c, 15);
    // 0914f4  inc byte ptr [0x89907]
    X86_AT(c, 0x914f4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89907u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0914fa  sti 
    X86_AT(c, 0x914fau);
    c.fl |= X86_IF;
    // 0914fb  call 0x9018e
    X86_AT(c, 0x914fbu);
    push32(c, 0x91500u); x86_call_known(c, 0x9018eu, f_0009018e); X86_RET(c, 0x91500u);
    X86_TICK(c, 13);
    // 091500  cli 
    X86_AT(c, 0x91500u);
    c.fl &= ~X86_IF;
    // 091501  dec byte ptr [0x89907]
    X86_AT(c, 0x91501u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89907u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 091507  jne 0x91519
    X86_AT(c, 0x91507u);
    if (x86_cc(c, 5)) { goto L_91519; }
    X86_TICK(c, 8);
    // 09150d  mov esp, dword ptr [0x89909]
    X86_AT(c, 0x9150du);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x89909u)));
    // 091513  mov ss, word ptr [0x8990d]
    X86_AT(c, 0x91513u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x8990Du))) & 0xFFFFu);
L_91519:
    X86_TICK(c, 2);
    // 091519  mov byte ptr [0x89906], 0
    X86_AT(c, 0x91519u);
    wr8((c.sbase[3] + (uint32_t)(0x89906u)), 0x0u);
L_91520:
    X86_TICK(c, 10);
    // 091520  ret 
    X86_AT(c, 0x91520u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x914c0u, "ran off the end of a function");
}
void f_00091530(X86Cpu& c) {
    X86_TICK(c, 70);
    // 091530  push es
    X86_AT(c, 0x91530u);
    push32(c, c.sreg[0]);
    // 091531  pushal 
    X86_AT(c, 0x91531u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 091532  push ds
    X86_AT(c, 0x91532u);
    push32(c, c.sreg[3]);
    // 091533  pop es
    X86_AT(c, 0x91533u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 091534  cld 
    X86_AT(c, 0x91534u);
    c.fl &= ~X86_DF;
    // 091535  xor eax, eax
    X86_AT(c, 0x91535u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 091537  mov byte ptr [0x8a220], al
    X86_AT(c, 0x91537u);
    wr8((c.sbase[3] + (uint32_t)(0x8A220u)), g8(c, 0));
    // 09153c  mov byte ptr [0x8a221], al
    X86_AT(c, 0x9153cu);
    wr8((c.sbase[3] + (uint32_t)(0x8A221u)), g8(c, 0));
    // 091541  mov byte ptr [0x8a222], al
    X86_AT(c, 0x91541u);
    wr8((c.sbase[3] + (uint32_t)(0x8A222u)), g8(c, 0));
    // 091546  mov byte ptr [0x8a223], al
    X86_AT(c, 0x91546u);
    wr8((c.sbase[3] + (uint32_t)(0x8A223u)), g8(c, 0));
    // 09154b  mov byte ptr [0x8a224], al
    X86_AT(c, 0x9154bu);
    wr8((c.sbase[3] + (uint32_t)(0x8A224u)), g8(c, 0));
    // 091550  lea edi, [0x8a225]
    X86_AT(c, 0x91550u);
    c.r[7] = (uint32_t)(0x8A225u);
    // 091556  mov ecx, 4
    X86_AT(c, 0x91556u);
    c.r[1] = 0x4u;
    // 09155b  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9155bu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 09155d  not eax
    X86_AT(c, 0x9155du);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 09155f  lea edi, [0x8a235]
    X86_AT(c, 0x9155fu);
    c.r[7] = (uint32_t)(0x8A235u);
    // 091565  mov ecx, 4
    X86_AT(c, 0x91565u);
    c.r[1] = 0x4u;
    // 09156a  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9156au);
    x86_string(c, 2, 4, 243, 4, 3);
    // 09156c  xor al, al
    X86_AT(c, 0x9156cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 09156e  mov ecx, 0x80
    X86_AT(c, 0x9156eu);
    c.r[1] = 0x80u;
    // 091573  lea edi, [0x8a245]
    X86_AT(c, 0x91573u);
    c.r[7] = (uint32_t)(0x8A245u);
L_91579:
    X86_TICK(c, 21);
    // 091579  mov byte ptr [edi], ah
    X86_AT(c, 0x91579u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 4));
    // 09157b  mov byte ptr [edi + 1], ah
    X86_AT(c, 0x9157bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 4));
    // 09157e  mov byte ptr [edi + 2], al
    X86_AT(c, 0x9157eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 0));
    // 091581  mov byte ptr [edi + 3], al
    X86_AT(c, 0x91581u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 0));
    // 091584  add edi, 4
    X86_AT(c, 0x91584u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 091587  loop 0x91579
    X86_AT(c, 0x91587u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x91579u); goto L_91579; }
    X86_TICK(c, 6);
    // 091589  mov ecx, 6
    X86_AT(c, 0x91589u);
    c.r[1] = 0x6u;
    // 09158e  xor dl, dl
    X86_AT(c, 0x9158eu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 091590  mov bl, 0
    X86_AT(c, 0x91590u);
    s8(c, 3, 0x0u);
L_91592:
    X86_TICK(c, 7);
    // 091592  call 0x915b2
    X86_AT(c, 0x91592u);
    push32(c, 0x91597u); x86_call_known(c, 0x915b2u, f_000915b2); X86_RET(c, 0x91597u);
    X86_TICK(c, 15);
    // 091597  inc dl
    X86_AT(c, 0x91597u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 091599  inc bl
    X86_AT(c, 0x91599u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 09159b  loop 0x91592
    X86_AT(c, 0x9159bu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x91592u); goto L_91592; }
    X86_TICK(c, 4);
    // 09159d  mov ecx, 8
    X86_AT(c, 0x9159du);
    c.r[1] = 0x8u;
    // 0915a2  mov bl, 0x40
    X86_AT(c, 0x915a2u);
    s8(c, 3, 0x40u);
L_915a4:
    X86_TICK(c, 7);
    // 0915a4  call 0x915b2
    X86_AT(c, 0x915a4u);
    push32(c, 0x915a9u); x86_call_known(c, 0x915b2u, f_000915b2); X86_RET(c, 0x915a9u);
    X86_TICK(c, 15);
    // 0915a9  inc dl
    X86_AT(c, 0x915a9u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0915ab  inc bl
    X86_AT(c, 0x915abu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 0915ad  loop 0x915a4
    X86_AT(c, 0x915adu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x915a4u); goto L_915a4; }
    X86_TICK(c, 38);
    // 0915af  popal 
    X86_AT(c, 0x915afu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0915b0  pop es
    X86_AT(c, 0x915b0u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0915b1  ret 
    X86_AT(c, 0x915b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91530u, "ran off the end of a function");
}
void f_000915b2(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0915b2  pushal 
    X86_AT(c, 0x915b2u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0915b3  cmp dl, 0x10
    X86_AT(c, 0x915b3u);
    (void)x86_sub(c, g8(c, 2), 0x10u, 0, 1);
    // 0915b6  jae 0x91650
    X86_AT(c, 0x915b6u);
    if (x86_cc(c, 3)) { goto L_91650; }
    X86_TICK(c, 7);
    // 0915bc  cmp bl, 0x80
    X86_AT(c, 0x915bcu);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 0915bf  jae 0x91650
    X86_AT(c, 0x915bfu);
    if (x86_cc(c, 3)) { goto L_91650; }
    X86_TICK(c, 16);
    // 0915c5  movzx ebx, bl
    X86_AT(c, 0x915c5u);
    c.r[3] = g8(c, 3);
    // 0915c8  lea edi, [ebx*4 + 0x8a245]
    X86_AT(c, 0x915c8u);
    c.r[7] = (uint32_t)(c.r[3] * 4 + 0x8A245u);
    // 0915cf  mov al, byte ptr [edi]
    X86_AT(c, 0x915cfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0915d1  cmp al, dl
    X86_AT(c, 0x915d1u);
    (void)x86_sub(c, g8(c, 0), g8(c, 2), 0, 1);
    // 0915d3  je 0x9164c
    X86_AT(c, 0x915d3u);
    if (x86_cc(c, 4)) { goto L_9164c; }
    X86_TICK(c, 7);
    // 0915d9  cmp al, 0xff
    X86_AT(c, 0x915d9u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0915db  je 0x9162d
    X86_AT(c, 0x915dbu);
    if (x86_cc(c, 4)) { goto L_9162d; }
    X86_TICK(c, 16);
    // 0915e1  movzx eax, al
    X86_AT(c, 0x915e1u);
    c.r[0] = g8(c, 0);
    // 0915e4  lea esi, [eax + 0x8a235]
    X86_AT(c, 0x915e4u);
    c.r[6] = (uint32_t)(c.r[0] + 0x8A235u);
    // 0915ea  mov al, byte ptr [esi]
    X86_AT(c, 0x915eau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0915ec  cmp al, bl
    X86_AT(c, 0x915ecu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0915ee  je 0x91609
    X86_AT(c, 0x915eeu);
    if (x86_cc(c, 4)) { goto L_91609; }
L_915f0:
    X86_TICK(c, 18);
    // 0915f0  movzx eax, al
    X86_AT(c, 0x915f0u);
    c.r[0] = g8(c, 0);
    // 0915f3  lea esi, [eax*4 + 0x8a245]
    X86_AT(c, 0x915f3u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0x8A245u);
    // 0915fa  lea esi, [esi + 1]
    X86_AT(c, 0x915fau);
    c.r[6] = (uint32_t)(c.r[6] + 0x1u);
    // 0915fd  mov al, byte ptr [esi]
    X86_AT(c, 0x915fdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0915ff  cmp al, bl
    X86_AT(c, 0x915ffu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 091601  je 0x91609
    X86_AT(c, 0x91601u);
    if (x86_cc(c, 4)) { goto L_91609; }
    X86_TICK(c, 7);
    // 091603  cmp al, 0xff
    X86_AT(c, 0x91603u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 091605  je 0x91650
    X86_AT(c, 0x91605u);
    if (x86_cc(c, 4)) { goto L_91650; }
    X86_TICK(c, 7);
    // 091607  jmp 0x915f0
    X86_AT(c, 0x91607u);
    X86_POLL(c, 0x915f0u); goto L_915f0;
L_91609:
    X86_TICK(c, 28);
    // 091609  push edx
    X86_AT(c, 0x91609u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 09160a  pushf 
    X86_AT(c, 0x9160au);
    push16(c, c.fl & 0xFFFFu);
    // 09160c  cli 
    X86_AT(c, 0x9160cu);
    c.fl &= ~X86_IF;
    // 09160d  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0x9160du);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 091610  mov byte ptr [esi], dl
    X86_AT(c, 0x91610u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 2));
    // 091612  cmp byte ptr [edi + 2], 0
    X86_AT(c, 0x91612u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 0x0u, 0, 1);
    // 091616  je 0x9161f
    X86_AT(c, 0x91616u);
    if (x86_cc(c, 4)) { goto L_9161f; }
    X86_TICK(c, 9);
    // 091618  mov ah, 2
    X86_AT(c, 0x91618u);
    s8(c, 4, 0x2u);
    // 09161a  call 0x8f774
    X86_AT(c, 0x9161au);
    push32(c, 0x9161fu); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x9161fu);
L_9161f:
    X86_TICK(c, 16);
    // 09161f  mov byte ptr [edi], 0xff
    X86_AT(c, 0x9161fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFu);
    // 091622  mov byte ptr [edi + 1], 0xff
    X86_AT(c, 0x91622u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0xFFu);
    // 091626  mov byte ptr [edi + 2], 0
    X86_AT(c, 0x91626u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 09162a  popf 
    X86_AT(c, 0x9162au);
    x86_popfd(c, 2);
    // 09162c  pop edx
    X86_AT(c, 0x9162cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_9162d:
    X86_TICK(c, 33);
    // 09162d  movzx edx, dl
    X86_AT(c, 0x9162du);
    c.r[2] = g8(c, 2);
    // 091630  lea esi, [edx + 0x8a235]
    X86_AT(c, 0x91630u);
    c.r[6] = (uint32_t)(c.r[2] + 0x8A235u);
    // 091636  pushf 
    X86_AT(c, 0x91636u);
    push16(c, c.fl & 0xFFFFu);
    // 091638  cli 
    X86_AT(c, 0x91638u);
    c.fl &= ~X86_IF;
    // 091639  mov al, byte ptr [esi]
    X86_AT(c, 0x91639u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 09163b  mov byte ptr [esi], bl
    X86_AT(c, 0x9163bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 3));
    // 09163d  mov byte ptr [edi], dl
    X86_AT(c, 0x9163du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 2));
    // 09163f  mov byte ptr [edi + 1], al
    X86_AT(c, 0x9163fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 091642  mov byte ptr [edi + 2], 0
    X86_AT(c, 0x91642u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 091646  mov byte ptr [edi + 3], 0
    X86_AT(c, 0x91646u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x0u);
    // 09164a  popf 
    X86_AT(c, 0x9164au);
    x86_popfd(c, 2);
L_9164c:
    X86_TICK(c, 36);
    // 09164c  popal 
    X86_AT(c, 0x9164cu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 09164d  xor al, al
    X86_AT(c, 0x9164du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 09164f  ret 
    X86_AT(c, 0x9164fu);
    c.eip = pop32(c); return;
L_91650:
    X86_TICK(c, 36);
    // 091650  popal 
    X86_AT(c, 0x91650u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091651  mov al, 3
    X86_AT(c, 0x91651u);
    s8(c, 0, 0x3u);
    // 091653  ret 
    X86_AT(c, 0x91653u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x915b2u, "ran off the end of a function");
}
void f_00091654(X86Cpu& c) {
    X86_TICK(c, 25);
    // 091654  pushal 
    X86_AT(c, 0x91654u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 091655  cmp al, 0x80
    X86_AT(c, 0x91655u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 091657  jb 0x9166b
    X86_AT(c, 0x91657u);
    if (x86_cc(c, 2)) { goto L_9166b; }
    X86_TICK(c, 7);
    // 091659  cmp al, 0xf0
    X86_AT(c, 0x91659u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 09165b  jae 0x91693
    X86_AT(c, 0x9165bu);
    if (x86_cc(c, 3)) { goto L_91693; }
    X86_TICK(c, 11);
    // 09165d  mov byte ptr [0x8a220], al
    X86_AT(c, 0x9165du);
    wr8((c.sbase[3] + (uint32_t)(0x8A220u)), g8(c, 0));
    // 091662  mov byte ptr [0x8a221], 1
    X86_AT(c, 0x91662u);
    wr8((c.sbase[3] + (uint32_t)(0x8A221u)), 0x1u);
    // 091669  jmp 0x91691
    X86_AT(c, 0x91669u);
    goto L_91691;
L_9166b:
    X86_TICK(c, 13);
    // 09166b  movzx ebx, byte ptr [0x8a220]
    X86_AT(c, 0x9166bu);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0x8A220u)));
    // 091672  cmp ebx, 0x80
    X86_AT(c, 0x91672u);
    (void)x86_sub(c, c.r[3], 0x80u, 0, 4);
    // 091678  jb 0x91691
    X86_AT(c, 0x91678u);
    if (x86_cc(c, 2)) { goto L_91691; }
    X86_TICK(c, 14);
    // 09167e  sub ebx, 0x80
    X86_AT(c, 0x9167eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 091684  shr ebx, 4
    X86_AT(c, 0x91684u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 091687  lea ebx, [ebx*4 + 0x916a3]
    X86_AT(c, 0x91687u);
    c.r[3] = (uint32_t)(c.r[3] * 4 + 0x916A3u);
    // 09168e  call dword ptr cs:[ebx]
    X86_AT(c, 0x9168eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3]))); push32(c, 0x91691u); x86_call(c, t); X86_RET(c, 0x91691u); }
L_91691:
    X86_TICK(c, 34);
    // 091691  popal 
    X86_AT(c, 0x91691u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091692  ret 
    X86_AT(c, 0x91692u);
    c.eip = pop32(c); return;
L_91693:
    X86_TICK(c, 38);
    // 091693  mov byte ptr [0x8a221], 1
    X86_AT(c, 0x91693u);
    wr8((c.sbase[3] + (uint32_t)(0x8A221u)), 0x1u);
    // 09169a  mov byte ptr [0x8a220], 0
    X86_AT(c, 0x9169au);
    wr8((c.sbase[3] + (uint32_t)(0x8A220u)), 0x0u);
    // 0916a1  popal 
    X86_AT(c, 0x916a1u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0916a2  ret 
    X86_AT(c, 0x916a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91654u, "ran off the end of a function");
}
void f_000917cb(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0917cb  mov al, byte ptr [0x8a220]
    X86_AT(c, 0x917cbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A220u))));
    // 0917d0  and eax, 0xf
    X86_AT(c, 0x917d0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 0917d5  mov bl, byte ptr [eax + 0x8a235]
    X86_AT(c, 0x917d5u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A235u))));
    // 0917db  cmp bl, 0xff
    X86_AT(c, 0x917dbu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0917de  je 0x9182c
    X86_AT(c, 0x917deu);
    if (x86_cc(c, 4)) { goto L_9182c; }
    X86_TICK(c, 4);
    // 0917e4  mov dl, byte ptr [0x8a222]
    X86_AT(c, 0x917e4u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0x8A222u))));
L_917ea:
    X86_TICK(c, 16);
    // 0917ea  movzx eax, bl
    X86_AT(c, 0x917eau);
    c.r[0] = g8(c, 3);
    // 0917ed  lea esi, [eax*4 + 0x8a245]
    X86_AT(c, 0x917edu);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0x8A245u);
    // 0917f4  cmp dl, byte ptr [esi + 2]
    X86_AT(c, 0x917f4u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))), 0, 1);
    // 0917f7  je 0x91806
    X86_AT(c, 0x917f7u);
    if (x86_cc(c, 4)) { goto L_91806; }
    X86_TICK(c, 11);
    // 0917f9  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0x917f9u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 0917fc  cmp bl, 0xff
    X86_AT(c, 0x917fcu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0917ff  jne 0x917ea
    X86_AT(c, 0x917ffu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x917eau); goto L_917ea; }
    X86_TICK(c, 7);
    // 091801  jmp 0x9182c
    X86_AT(c, 0x91801u);
    goto L_9182c;
L_91806:
    X86_TICK(c, 18);
    // 091806  mov al, byte ptr [0x8a220]
    X86_AT(c, 0x91806u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A220u))));
    // 09180b  and eax, 0xf
    X86_AT(c, 0x9180bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 091810  cmp byte ptr [eax + 0x8a225], 0
    X86_AT(c, 0x91810u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A225u))), 0x0u, 0, 1);
    // 091817  jne 0x91826
    X86_AT(c, 0x91817u);
    if (x86_cc(c, 5)) { goto L_91826; }
    X86_TICK(c, 11);
    // 091819  mov byte ptr [esi + 2], 0
    X86_AT(c, 0x91819u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), 0x0u);
    // 09181d  mov ah, 2
    X86_AT(c, 0x9181du);
    s8(c, 4, 0x2u);
    // 09181f  call 0x8f774
    X86_AT(c, 0x9181fu);
    push32(c, 0x91824u); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x91824u);
    X86_TICK(c, 12);
    // 091824  clc 
    X86_AT(c, 0x91824u);
    c.fl &= ~X86_CF;
    // 091825  ret 
    X86_AT(c, 0x91825u);
    c.eip = pop32(c); return;
L_91826:
    X86_TICK(c, 19);
    // 091826  or byte ptr [esi + 2], 0x80
    X86_AT(c, 0x91826u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 09182a  clc 
    X86_AT(c, 0x9182au);
    c.fl &= ~X86_CF;
    // 09182b  ret 
    X86_AT(c, 0x9182bu);
    c.eip = pop32(c); return;
L_9182c:
    X86_TICK(c, 12);
    // 09182c  stc 
    X86_AT(c, 0x9182cu);
    c.fl |= X86_CF;
    // 09182d  ret 
    X86_AT(c, 0x9182du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x917cbu, "ran off the end of a function");
}
void f_00091a28(X86Cpu& c) {
    X86_TICK(c, 28);
    // 091a28  push ebp
    X86_AT(c, 0x91a28u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 091a29  mov ebp, esp
    X86_AT(c, 0x91a29u);
    c.r[5] = c.r[4];
    // 091a2b  sub esp, 0xb4
    X86_AT(c, 0x91a2bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xB4u, 0, 4); }
    // 091a31  push ebx
    X86_AT(c, 0x91a31u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 091a32  push esi
    X86_AT(c, 0x91a32u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091a33  push edi
    X86_AT(c, 0x91a33u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091a34  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x91a34u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 091a37  cmp byte ptr [eax], 0
    X86_AT(c, 0x91a37u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 091a3a  je 0x91ad9
    X86_AT(c, 0x91a3au);
    if (x86_cc(c, 4)) { goto L_91ad9; }
    X86_TICK(c, 14);
    // 091a40  push 0x18b0
    X86_AT(c, 0x91a40u);
    { uint32_t v = 0x18B0u; push32(c, v); }
    // 091a45  push dword ptr [ebp + 8]
    X86_AT(c, 0x91a45u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 091a48  call 0x9247c
    X86_AT(c, 0x91a48u);
    push32(c, 0x91a4du); x86_call_known(c, 0x9247cu, f_0009247c); X86_RET(c, 0x91a4du);
    X86_TICK(c, 12);
    // 091a4d  add esp, 8
    X86_AT(c, 0x91a4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 091a50  xchg edi, eax
    X86_AT(c, 0x91a50u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 091a51  and edi, edi
    X86_AT(c, 0x91a51u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 091a53  jne 0x91ae0
    X86_AT(c, 0x91a53u);
    if (x86_cc(c, 5)) { goto L_91ae0; }
    X86_TICK(c, 9);
    // 091a59  push 0x18b4
    X86_AT(c, 0x91a59u);
    { uint32_t v = 0x18B4u; push32(c, v); }
    // 091a5e  call 0x92ebc
    X86_AT(c, 0x91a5eu);
    push32(c, 0x91a63u); x86_call_known(c, 0x92ebcu, f_00092ebc); X86_RET(c, 0x91a63u);
    X86_TICK(c, 11);
    // 091a63  add esp, 4
    X86_AT(c, 0x91a63u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 091a66  mov dword ptr [ebp - 0x34], eax
    X86_AT(c, 0x91a66u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)), c.r[0]);
    // 091a69  and eax, eax
    X86_AT(c, 0x91a69u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 091a6b  je 0x91ad9
    X86_AT(c, 0x91a6bu);
    if (x86_cc(c, 4)) { goto L_91ad9; }
    X86_TICK(c, 16);
    // 091a6d  push dword ptr [ebp - 0x34]
    X86_AT(c, 0x91a6du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu))); push32(c, v); }
    // 091a70  lea eax, [ebp - 0xb4]
    X86_AT(c, 0x91a70u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 091a76  push eax
    X86_AT(c, 0x91a76u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091a77  call 0x92fb4
    X86_AT(c, 0x91a77u);
    push32(c, 0x91a7cu); x86_call_known(c, 0x92fb4u, f_00092fb4); X86_RET(c, 0x91a7cu);
    X86_TICK(c, 4);
    // 091a7c  sub esi, esi
    X86_AT(c, 0x91a7cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 091a7e  add esp, 8
    X86_AT(c, 0x91a7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_91a81:
    X86_TICK(c, 12);
    // 091a81  cmp byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0x91a81u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu))), 0x0u, 0, 1);
    // 091a89  je 0x91a8e
    X86_AT(c, 0x91a89u);
    if (x86_cc(c, 4)) { goto L_91a8e; }
    X86_TICK(c, 9);
    // 091a8b  inc esi
    X86_AT(c, 0x91a8bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 091a8c  jmp 0x91a81
    X86_AT(c, 0x91a8cu);
    X86_POLL(c, 0x91a81u); goto L_91a81;
L_91a8e:
    X86_TICK(c, 12);
    // 091a8e  cmp byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0x91a8eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu))), 0x5Cu, 0, 1);
    // 091a96  je 0x91aa1
    X86_AT(c, 0x91a96u);
    if (x86_cc(c, 4)) { goto L_91aa1; }
    X86_TICK(c, 4);
    // 091a98  inc esi
    X86_AT(c, 0x91a98u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 091a99  mov byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0x91a99u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), 0x5Cu);
L_91aa1:
    X86_TICK(c, 2);
    // 091aa1  sub ebx, ebx
    X86_AT(c, 0x91aa1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_91aa3:
    X86_TICK(c, 15);
    // 091aa3  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x91aa3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 091aa6  mov al, byte ptr [eax + ebx*1]
    X86_AT(c, 0x91aa6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3]))));
    // 091aa9  and al, al
    X86_AT(c, 0x91aa9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 091aab  je 0x91ab8
    X86_AT(c, 0x91aabu);
    if (x86_cc(c, 4)) { goto L_91ab8; }
    X86_TICK(c, 13);
    // 091aad  inc esi
    X86_AT(c, 0x91aadu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 091aae  mov byte ptr [ebp + esi*1 - 0xb5], al
    X86_AT(c, 0x91aaeu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), g8(c, 0));
    // 091ab5  inc ebx
    X86_AT(c, 0x91ab5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 091ab6  jmp 0x91aa3
    X86_AT(c, 0x91ab6u);
    X86_POLL(c, 0x91aa3u); goto L_91aa3;
L_91ab8:
    X86_TICK(c, 15);
    // 091ab8  mov byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0x91ab8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu)), 0x0u);
    // 091ac0  push 0x18bc
    X86_AT(c, 0x91ac0u);
    { uint32_t v = 0x18BCu; push32(c, v); }
    // 091ac5  lea eax, [ebp - 0xb4]
    X86_AT(c, 0x91ac5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 091acb  push eax
    X86_AT(c, 0x91acbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091acc  call 0x9247c
    X86_AT(c, 0x91accu);
    push32(c, 0x91ad1u); x86_call_known(c, 0x9247cu, f_0009247c); X86_RET(c, 0x91ad1u);
    X86_TICK(c, 12);
    // 091ad1  add esp, 8
    X86_AT(c, 0x91ad1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 091ad4  xchg edi, eax
    X86_AT(c, 0x91ad4u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 091ad5  and edi, edi
    X86_AT(c, 0x91ad5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 091ad7  jne 0x91ae0
    X86_AT(c, 0x91ad7u);
    if (x86_cc(c, 5)) { goto L_91ae0; }
L_91ad9:
    X86_TICK(c, 9);
    // 091ad9  mov eax, 1
    X86_AT(c, 0x91ad9u);
    c.r[0] = 0x1u;
    // 091ade  jmp 0x91b3f
    X86_AT(c, 0x91adeu);
    goto L_91b3f;
L_91ae0:
    X86_TICK(c, 18);
    // 091ae0  push edi
    X86_AT(c, 0x91ae0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091ae1  push 8
    X86_AT(c, 0x91ae1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 091ae3  push 1
    X86_AT(c, 0x91ae3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 091ae5  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x91ae5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 091ae8  call 0x921a0
    X86_AT(c, 0x91ae8u);
    push32(c, 0x91aedu); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x91aedu);
    X86_TICK(c, 9);
    // 091aed  add esp, 0x10
    X86_AT(c, 0x91aedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 091af0  cmp eax, 8
    X86_AT(c, 0x91af0u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 091af3  jl 0x91b15
    X86_AT(c, 0x91af3u);
    if (x86_cc(c, 12)) { goto L_91b15; }
    X86_TICK(c, 2);
    // 091af5  sub esi, esi
    X86_AT(c, 0x91af5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_91af7:
    X86_TICK(c, 7);
    // 091af7  cmp esi, 0x80
    X86_AT(c, 0x91af7u);
    (void)x86_sub(c, c.r[6], 0x80u, 0, 4);
    // 091afd  jge 0x91b34
    X86_AT(c, 0x91afdu);
    if (x86_cc(c, 13)) { goto L_91b34; }
    X86_TICK(c, 17);
    // 091aff  push edi
    X86_AT(c, 0x91affu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091b00  push 0x30
    X86_AT(c, 0x91b00u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 091b02  push 1
    X86_AT(c, 0x91b02u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 091b04  lea eax, [ebp - 0x30]
    X86_AT(c, 0x91b04u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 091b07  push eax
    X86_AT(c, 0x91b07u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091b08  call 0x921a0
    X86_AT(c, 0x91b08u);
    push32(c, 0x91b0du); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x91b0du);
    X86_TICK(c, 9);
    // 091b0d  add esp, 0x10
    X86_AT(c, 0x91b0du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 091b10  cmp eax, 0x30
    X86_AT(c, 0x91b10u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 091b13  jge 0x91b22
    X86_AT(c, 0x91b13u);
    if (x86_cc(c, 13)) { goto L_91b22; }
L_91b15:
    X86_TICK(c, 9);
    // 091b15  push edi
    X86_AT(c, 0x91b15u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091b16  call 0x92978
    X86_AT(c, 0x91b16u);
    push32(c, 0x91b1bu); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x91b1bu);
    X86_TICK(c, 9);
    // 091b1b  mov eax, 2
    X86_AT(c, 0x91b1bu);
    c.r[0] = 0x2u;
    // 091b20  jmp 0x91b3c
    X86_AT(c, 0x91b20u);
    goto L_91b3c;
L_91b22:
    X86_TICK(c, 15);
    // 091b22  lea eax, [ebp - 0x30]
    X86_AT(c, 0x91b22u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 091b25  push eax
    X86_AT(c, 0x91b25u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091b26  push esi
    X86_AT(c, 0x91b26u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091b27  push 0
    X86_AT(c, 0x91b27u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 091b29  call 0x8f25d
    X86_AT(c, 0x91b29u);
    push32(c, 0x91b2eu); x86_call_known(c, 0x8f25du, f_0008f25d); X86_RET(c, 0x91b2eu);
    X86_TICK(c, 11);
    // 091b2e  inc esi
    X86_AT(c, 0x91b2eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 091b2f  add esp, 0xc
    X86_AT(c, 0x91b2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 091b32  jmp 0x91af7
    X86_AT(c, 0x91b32u);
    X86_POLL(c, 0x91af7u); goto L_91af7;
L_91b34:
    X86_TICK(c, 9);
    // 091b34  push edi
    X86_AT(c, 0x91b34u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091b35  call 0x92978
    X86_AT(c, 0x91b35u);
    push32(c, 0x91b3au); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x91b3au);
    X86_TICK(c, 2);
    // 091b3a  sub eax, eax
    X86_AT(c, 0x91b3au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_91b3c:
    X86_TICK(c, 2);
    // 091b3c  add esp, 4
    X86_AT(c, 0x91b3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_91b3f:
    X86_TICK(c, 28);
    // 091b3f  pop edi
    X86_AT(c, 0x91b3fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091b40  pop esi
    X86_AT(c, 0x91b40u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 091b41  pop ebx
    X86_AT(c, 0x91b41u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 091b42  leave 
    X86_AT(c, 0x91b42u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 091b43  ret 
    X86_AT(c, 0x91b43u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91a28u, "ran off the end of a function");
}
void f_00091d38(X86Cpu& c) {
    X86_TICK(c, 42);
    // 091d38  enter 0x14, 0
    X86_AT(c, 0x91d38u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 091d3c  push ebx
    X86_AT(c, 0x91d3cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 091d3d  push esi
    X86_AT(c, 0x91d3du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091d3e  push edi
    X86_AT(c, 0x91d3eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091d3f  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x91d3fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 091d42  mov ax, word ptr [0x8a7de]
    X86_AT(c, 0x91d42u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A7DEu))));
    // 091d48  mov word ptr [ebp - 0xe], ax
    X86_AT(c, 0x91d48u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), (c.r[0] & 0xFFFFu));
    // 091d4c  sub eax, eax
    X86_AT(c, 0x91d4cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 091d4e  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x91d4eu);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
    // 091d54  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x91d54u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 091d57  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x91d57u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 091d5b  je 0x9204d
    X86_AT(c, 0x91d5bu);
    if (x86_cc(c, 4)) { goto L_9204d; }
    X86_TICK(c, 9);
    // 091d61  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x91d61u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 091d64  jmp 0x9202e
    X86_AT(c, 0x91d64u);
    goto L_9202e;
L_91d69:
    X86_TICK(c, 12);
    // 091d69  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x91d69u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 091d6d  je 0x91f66
    X86_AT(c, 0x91d6du);
    if (x86_cc(c, 4)) { goto L_91f66; }
    X86_TICK(c, 12);
    // 091d73  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x91d73u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 091d77  jne 0x91dbe
    X86_AT(c, 0x91d77u);
    if (x86_cc(c, 5)) { goto L_91dbe; }
    X86_TICK(c, 12);
    // 091d79  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x91d79u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 091d7e  jne 0x91dbe
    X86_AT(c, 0x91d7eu);
    if (x86_cc(c, 5)) { goto L_91dbe; }
    X86_TICK(c, 12);
    // 091d80  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91d80u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 091d84  jne 0x92004
    X86_AT(c, 0x91d84u);
    if (x86_cc(c, 5)) { goto L_92004; }
    X86_TICK(c, 33);
    // 091d8a  mov al, byte ptr [0x8a44a]
    X86_AT(c, 0x91d8au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A44Au))));
    // 091d8f  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x91d8fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091d92  mov byte ptr [edx], al
    X86_AT(c, 0x91d92u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 091d94  push 0x1ff
    X86_AT(c, 0x91d94u);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 091d99  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91d99u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091d9c  inc eax
    X86_AT(c, 0x91d9cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091d9d  push eax
    X86_AT(c, 0x91d9du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091d9e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91d9eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091da1  push eax
    X86_AT(c, 0x91da1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091da2  call 0x94c80
    X86_AT(c, 0x91da2u);
    push32(c, 0x91da7u); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x91da7u);
    X86_TICK(c, 11);
    // 091da7  inc eax
    X86_AT(c, 0x91da7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091da8  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91da8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 091dab  dec eax
    X86_AT(c, 0x91dabu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 091dac  jne 0x91df6
    X86_AT(c, 0x91dacu);
    if (x86_cc(c, 5)) { goto L_91df6; }
    X86_TICK(c, 15);
    // 091dae  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91daeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091db1  mov dword ptr [ebx], eax
    X86_AT(c, 0x91db1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 091db3  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x91db3u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 091db9  jmp 0x92004
    X86_AT(c, 0x91db9u);
    goto L_92004;
L_91dbe:
    X86_TICK(c, 12);
    // 091dbe  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91dbeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091dc2  jne 0x91e3b
    X86_AT(c, 0x91dc2u);
    if (x86_cc(c, 5)) { goto L_91e3b; }
    X86_TICK(c, 12);
    // 091dc8  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x91dc8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 091dcc  jne 0x92036
    X86_AT(c, 0x91dccu);
    if (x86_cc(c, 5)) { goto L_92036; }
    X86_TICK(c, 12);
    // 091dd2  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91dd2u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 091dd6  jne 0x91dec
    X86_AT(c, 0x91dd6u);
    if (x86_cc(c, 5)) { goto L_91dec; }
    X86_TICK(c, 20);
    // 091dd8  push 0x200
    X86_AT(c, 0x91dd8u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 091ddd  push dword ptr [ebx + 8]
    X86_AT(c, 0x91dddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 091de0  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91de0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091de3  push eax
    X86_AT(c, 0x91de3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091de4  call 0x94c80
    X86_AT(c, 0x91de4u);
    push32(c, 0x91de9u); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x91de9u);
    X86_TICK(c, 2);
    // 091de9  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91de9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_91dec:
    X86_TICK(c, 12);
    // 091dec  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91decu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091df0  je 0x92036
    X86_AT(c, 0x91df0u);
    if (x86_cc(c, 4)) { goto L_92036; }
L_91df6:
    X86_TICK(c, 28);
    // 091df6  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91df6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091df9  mov al, 0x1a
    X86_AT(c, 0x91df9u);
    s8(c, 0, 0x1Au);
    // 091dfb  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x91dfbu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091dfe  push edi
    X86_AT(c, 0x91dfeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091dff  mov edi, ecx
    X86_AT(c, 0x91dffu);
    c.r[7] = c.r[1];
    // 091e01  mov ecx, edx
    X86_AT(c, 0x91e01u);
    c.r[1] = c.r[2];
    // 091e03  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x91e03u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 091e05  jne 0x91e0a
    X86_AT(c, 0x91e05u);
    if (x86_cc(c, 5)) { goto L_91e0a; }
    X86_TICK(c, 4);
    // 091e07  inc ecx
    X86_AT(c, 0x91e07u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 091e08  sub edx, ecx
    X86_AT(c, 0x91e08u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_91e0a:
    X86_TICK(c, 17);
    // 091e0a  pop edi
    X86_AT(c, 0x91e0au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091e0b  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x91e0bu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 091e0f  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91e0fu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091e12  je 0x91e30
    X86_AT(c, 0x91e12u);
    if (x86_cc(c, 4)) { goto L_91e30; }
    X86_TICK(c, 32);
    // 091e14  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91e14u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 091e18  push 1
    X86_AT(c, 0x91e18u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 091e1a  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x91e1au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 091e1d  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91e1du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 091e20  push edx
    X86_AT(c, 0x91e20u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 091e21  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91e21u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091e24  push eax
    X86_AT(c, 0x91e24u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091e25  call 0x94d58
    X86_AT(c, 0x91e25u);
    push32(c, 0x91e2au); x86_call_known(c, 0x94d58u, f_00094d58); X86_RET(c, 0x91e2au);
    X86_TICK(c, 6);
    // 091e2a  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x91e2au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 091e2d  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91e2du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_91e30:
    X86_TICK(c, 8);
    // 091e30  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91e30u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091e33  mov dword ptr [ebx], eax
    X86_AT(c, 0x91e33u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 091e35  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x91e35u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_91e3b:
    X86_TICK(c, 12);
    // 091e3b  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91e3bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091e3f  jle 0x9202e
    X86_AT(c, 0x91e3fu);
    if (x86_cc(c, 14)) { goto L_9202e; }
    X86_TICK(c, 11);
    // 091e45  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91e45u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 091e49  cmp ax, 0xffff
    X86_AT(c, 0x91e49u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 091e4d  je 0x91e5d
    X86_AT(c, 0x91e4du);
    if (x86_cc(c, 4)) { goto L_91e5d; }
    X86_TICK(c, 20);
    // 091e4f  movsx eax, ax
    X86_AT(c, 0x91e4fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 091e52  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91e52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 091e55  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x91e55u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 091e57  jge 0x91ef4
    X86_AT(c, 0x91e57u);
    if (x86_cc(c, 13)) { goto L_91ef4; }
L_91e5d:
    X86_TICK(c, 30);
    // 091e5d  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91e5du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091e60  mov al, byte ptr [0x8a44a]
    X86_AT(c, 0x91e60u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A44Au))));
    // 091e65  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x91e65u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091e67  push edi
    X86_AT(c, 0x91e67u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091e68  mov edi, ecx
    X86_AT(c, 0x91e68u);
    c.r[7] = c.r[1];
    // 091e6a  mov ecx, edx
    X86_AT(c, 0x91e6au);
    c.r[1] = c.r[2];
    // 091e6c  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x91e6cu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 091e6e  jne 0x91e73
    X86_AT(c, 0x91e6eu);
    if (x86_cc(c, 5)) { goto L_91e73; }
    X86_TICK(c, 4);
    // 091e70  inc ecx
    X86_AT(c, 0x91e70u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 091e71  sub edx, ecx
    X86_AT(c, 0x91e71u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_91e73:
    X86_TICK(c, 13);
    // 091e73  pop edi
    X86_AT(c, 0x91e73u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091e74  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x91e74u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 091e78  jmp 0x91ead
    X86_AT(c, 0x91e78u);
    goto L_91ead;
L_91e7a:
    X86_TICK(c, 59);
    // 091e7a  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91e7au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091e7e  add eax, dword ptr [ebx]
    X86_AT(c, 0x91e7eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 091e80  inc eax
    X86_AT(c, 0x91e80u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091e81  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x91e81u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 091e85  inc edx
    X86_AT(c, 0x91e85u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 091e86  movsx edx, dx
    X86_AT(c, 0x91e86u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 091e89  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x91e89u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091e8c  sub ecx, edx
    X86_AT(c, 0x91e8cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 091e8e  mov edx, ecx
    X86_AT(c, 0x91e8eu);
    c.r[2] = c.r[1];
    // 091e90  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x91e90u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 091e93  mov al, byte ptr [0x8a44a]
    X86_AT(c, 0x91e93u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A44Au))));
    // 091e98  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x91e98u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 091e9b  push edi
    X86_AT(c, 0x91e9bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091e9c  mov edi, ecx
    X86_AT(c, 0x91e9cu);
    c.r[7] = c.r[1];
    // 091e9e  mov ecx, edx
    X86_AT(c, 0x91e9eu);
    c.r[1] = c.r[2];
    // 091ea0  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x91ea0u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 091ea2  jne 0x91ea7
    X86_AT(c, 0x91ea2u);
    if (x86_cc(c, 5)) { goto L_91ea7; }
    X86_TICK(c, 4);
    // 091ea4  inc ecx
    X86_AT(c, 0x91ea4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 091ea5  sub edx, ecx
    X86_AT(c, 0x91ea5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_91ea7:
    X86_TICK(c, 13);
    // 091ea7  pop edi
    X86_AT(c, 0x91ea7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091ea8  inc edx
    X86_AT(c, 0x91ea8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 091ea9  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x91ea9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_91ead:
    X86_TICK(c, 19);
    // 091ead  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91eadu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091eb1  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91eb1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091eb4  dec edx
    X86_AT(c, 0x91eb4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 091eb5  cmp edx, eax
    X86_AT(c, 0x91eb5u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 091eb7  jle 0x91ec6
    X86_AT(c, 0x91eb7u);
    if (x86_cc(c, 14)) { goto L_91ec6; }
    X86_TICK(c, 23);
    // 091eb9  add eax, dword ptr [ebx]
    X86_AT(c, 0x91eb9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 091ebb  inc eax
    X86_AT(c, 0x91ebbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091ebc  mov al, byte ptr [eax]
    X86_AT(c, 0x91ebcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 091ebe  cmp al, byte ptr [0x8a44b]
    X86_AT(c, 0x91ebeu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A44Bu))), 0, 1);
    // 091ec4  jne 0x91e7a
    X86_AT(c, 0x91ec4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x91e7au); goto L_91e7a; }
L_91ec6:
    X86_TICK(c, 17);
    // 091ec6  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91ec6u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091eca  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x91ecau);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091ecd  jne 0x91ed7
    X86_AT(c, 0x91ecdu);
    if (x86_cc(c, 5)) { goto L_91ed7; }
    X86_TICK(c, 9);
    // 091ecf  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x91ecfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 091ed5  jmp 0x91ef4
    X86_AT(c, 0x91ed5u);
    goto L_91ef4;
L_91ed7:
    X86_TICK(c, 19);
    // 091ed7  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91ed7u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091edb  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91edbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091ede  dec edx
    X86_AT(c, 0x91edeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 091edf  cmp edx, eax
    X86_AT(c, 0x91edfu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 091ee1  jne 0x91eeb
    X86_AT(c, 0x91ee1u);
    if (x86_cc(c, 5)) { goto L_91eeb; }
    X86_TICK(c, 9);
    // 091ee3  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x91ee3u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 091ee9  jmp 0x91ef4
    X86_AT(c, 0x91ee9u);
    goto L_91ef4;
L_91eeb:
    X86_TICK(c, 17);
    // 091eeb  mov eax, dword ptr [ebx]
    X86_AT(c, 0x91eebu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091eed  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91eedu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 091ef0  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x91ef0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_91ef4:
    X86_TICK(c, 12);
    // 091ef4  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x91ef4u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 091efa  je 0x92004
    X86_AT(c, 0x91efau);
    if (x86_cc(c, 4)) { goto L_92004; }
    X86_TICK(c, 12);
    // 091f00  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x91f00u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 091f05  jne 0x91f15
    X86_AT(c, 0x91f05u);
    if (x86_cc(c, 5)) { goto L_91f15; }
    X86_TICK(c, 11);
    // 091f07  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x91f07u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091f0a  jl 0x91f5f
    X86_AT(c, 0x91f0au);
    if (x86_cc(c, 12)) { goto L_91f5f; }
    X86_TICK(c, 13);
    // 091f0c  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x91f0cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091f0f  dec esi
    X86_AT(c, 0x91f0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 091f10  jmp 0x92010
    X86_AT(c, 0x91f10u);
    goto L_92010;
L_91f15:
    X86_TICK(c, 25);
    // 091f15  mov eax, dword ptr [ebx]
    X86_AT(c, 0x91f15u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091f17  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91f17u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 091f1a  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x91f1au);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091f1e  sub esi, eax
    X86_AT(c, 0x91f1eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 091f20  cmp edi, esi
    X86_AT(c, 0x91f20u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 091f22  jbe 0x91f5f
    X86_AT(c, 0x91f22u);
    if (x86_cc(c, 6)) { goto L_91f5f; }
    X86_TICK(c, 87);
    // 091f24  mov ecx, esi
    X86_AT(c, 0x91f24u);
    c.r[1] = c.r[6];
    // 091f26  mov eax, dword ptr [ebx]
    X86_AT(c, 0x91f26u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091f28  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x91f28u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 091f2b  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x91f2bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 091f2e  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x91f2eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 091f31  lea edx, [edx + edi*1]
    X86_AT(c, 0x91f31u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 091f34  push esi
    X86_AT(c, 0x91f34u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091f35  push edi
    X86_AT(c, 0x91f35u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091f36  mov esi, eax
    X86_AT(c, 0x91f36u);
    c.r[6] = c.r[0];
    // 091f38  mov edi, edx
    X86_AT(c, 0x91f38u);
    c.r[7] = c.r[2];
    // 091f3a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x91f3au);
    x86_string(c, 0, 1, 243, 4, 3);
    // 091f3c  pop edi
    X86_AT(c, 0x91f3cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091f3d  pop esi
    X86_AT(c, 0x91f3du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 091f3e  add edi, esi
    X86_AT(c, 0x91f3eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 091f40  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x91f40u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 091f43  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x91f43u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 091f47  lea eax, [esi + 1]
    X86_AT(c, 0x91f47u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 091f4a  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x91f4au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091f4d  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x91f4du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 091f50  sub edi, eax
    X86_AT(c, 0x91f50u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 091f52  lea eax, [esi + 2]
    X86_AT(c, 0x91f52u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 091f55  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x91f55u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 091f58  add dword ptr [ebx], eax
    X86_AT(c, 0x91f58u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091f5a  jmp 0x9202e
    X86_AT(c, 0x91f5au);
    goto L_9202e;
L_91f5f:
    X86_TICK(c, 9);
    // 091f5f  mov esi, edi
    X86_AT(c, 0x91f5fu);
    c.r[6] = c.r[7];
    // 091f61  jmp 0x92010
    X86_AT(c, 0x91f61u);
    goto L_92010;
L_91f66:
    X86_TICK(c, 13);
    // 091f66  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x91f66u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 091f6c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x91f6cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091f6f  cmp edi, eax
    X86_AT(c, 0x91f6fu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 091f71  jl 0x91f97
    X86_AT(c, 0x91f71u);
    if (x86_cc(c, 12)) { goto L_91f97; }
    X86_TICK(c, 7);
    // 091f73  and eax, eax
    X86_AT(c, 0x91f73u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 091f75  jle 0x91f97
    X86_AT(c, 0x91f75u);
    if (x86_cc(c, 14)) { goto L_91f97; }
    X86_TICK(c, 53);
    // 091f77  xchg ecx, eax
    X86_AT(c, 0x91f77u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 091f78  mov eax, dword ptr [ebx]
    X86_AT(c, 0x91f78u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091f7a  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x91f7au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 091f7d  push esi
    X86_AT(c, 0x91f7du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091f7e  push edi
    X86_AT(c, 0x91f7eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091f7f  mov esi, eax
    X86_AT(c, 0x91f7fu);
    c.r[6] = c.r[0];
    // 091f81  mov edi, edx
    X86_AT(c, 0x91f81u);
    c.r[7] = c.r[2];
    // 091f83  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x91f83u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 091f85  pop edi
    X86_AT(c, 0x91f85u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091f86  pop esi
    X86_AT(c, 0x91f86u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 091f87  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x91f87u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 091f8a  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x91f8au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091f8d  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x91f8du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091f90  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x91f90u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_91f97:
    X86_TICK(c, 7);
    // 091f97  cmp edi, 0x200
    X86_AT(c, 0x91f97u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 091f9d  jb 0x91fd5
    X86_AT(c, 0x91f9du);
    if (x86_cc(c, 2)) { goto L_91fd5; }
    X86_TICK(c, 10);
    // 091f9f  mov esi, edi
    X86_AT(c, 0x91f9fu);
    c.r[6] = c.r[7];
    // 091fa1  shr esi, 9
    X86_AT(c, 0x91fa1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 091fa4  shl esi, 9
    X86_AT(c, 0x91fa4u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 091fa7  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x91fa7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_91fae:
    X86_TICK(c, 27);
    // 091fae  push esi
    X86_AT(c, 0x91faeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091faf  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x91fafu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 091fb2  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x91fb2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 091fb5  push eax
    X86_AT(c, 0x91fb5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091fb6  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91fb6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091fb9  push eax
    X86_AT(c, 0x91fb9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091fba  call 0x94c80
    X86_AT(c, 0x91fbau);
    push32(c, 0x91fbfu); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x91fbfu);
    X86_TICK(c, 25);
    // 091fbf  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x91fbfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 091fc2  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x91fc2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091fc5  sub esi, eax
    X86_AT(c, 0x91fc5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 091fc7  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x91fc7u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091fca  and esi, esi
    X86_AT(c, 0x91fcau);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 091fcc  je 0x91fd2
    X86_AT(c, 0x91fccu);
    if (x86_cc(c, 4)) { goto L_91fd2; }
    X86_TICK(c, 7);
    // 091fce  and eax, eax
    X86_AT(c, 0x91fceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 091fd0  jne 0x91fae
    X86_AT(c, 0x91fd0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x91faeu); goto L_91fae; }
L_91fd2:
    X86_TICK(c, 6);
    // 091fd2  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x91fd2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_91fd5:
    X86_TICK(c, 7);
    // 091fd5  and edi, edi
    X86_AT(c, 0x91fd5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 091fd7  jbe 0x9202e
    X86_AT(c, 0x91fd7u);
    if (x86_cc(c, 6)) { goto L_9202e; }
    X86_TICK(c, 12);
    // 091fd9  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91fd9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091fdd  jne 0x91ffe
    X86_AT(c, 0x91fddu);
    if (x86_cc(c, 5)) { goto L_91ffe; }
    X86_TICK(c, 12);
    // 091fdf  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x91fdfu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 091fe3  jne 0x92036
    X86_AT(c, 0x91fe3u);
    if (x86_cc(c, 5)) { goto L_92036; }
    X86_TICK(c, 20);
    // 091fe5  push 0x200
    X86_AT(c, 0x91fe5u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 091fea  push dword ptr [ebx + 8]
    X86_AT(c, 0x91feau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 091fed  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91fedu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091ff0  push eax
    X86_AT(c, 0x91ff0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091ff1  call 0x94c80
    X86_AT(c, 0x91ff1u);
    push32(c, 0x91ff6u); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x91ff6u);
    X86_TICK(c, 8);
    // 091ff6  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91ff6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 091ff9  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91ff9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091ffc  mov dword ptr [ebx], eax
    X86_AT(c, 0x91ffcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_91ffe:
    X86_TICK(c, 12);
    // 091ffe  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91ffeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092002  jle 0x92036
    X86_AT(c, 0x92002u);
    if (x86_cc(c, 14)) { goto L_92036; }
L_92004:
    X86_TICK(c, 13);
    // 092004  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x92004u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092007  mov edx, edi
    X86_AT(c, 0x92007u);
    c.r[2] = c.r[7];
    // 092009  cmp edx, eax
    X86_AT(c, 0x92009u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 09200b  jl 0x9200e
    X86_AT(c, 0x9200bu);
    if (x86_cc(c, 12)) { goto L_9200e; }
    X86_TICK(c, 3);
    // 09200d  xchg edx, eax
    X86_AT(c, 0x9200du);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_9200e:
    X86_TICK(c, 2);
    // 09200e  mov esi, edx
    X86_AT(c, 0x9200eu);
    c.r[6] = c.r[2];
L_92010:
    X86_TICK(c, 62);
    // 092010  mov ecx, esi
    X86_AT(c, 0x92010u);
    c.r[1] = c.r[6];
    // 092012  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92012u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092014  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92014u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092017  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x92017u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 09201a  push esi
    X86_AT(c, 0x9201au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09201b  push edi
    X86_AT(c, 0x9201bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09201c  mov esi, eax
    X86_AT(c, 0x9201cu);
    c.r[6] = c.r[0];
    // 09201e  mov edi, edx
    X86_AT(c, 0x9201eu);
    c.r[7] = c.r[2];
    // 092020  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92020u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092022  pop edi
    X86_AT(c, 0x92022u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092023  pop esi
    X86_AT(c, 0x92023u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092024  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x92024u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 092027  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x92027u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 09202a  sub edi, esi
    X86_AT(c, 0x9202au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 09202c  add dword ptr [ebx], esi
    X86_AT(c, 0x9202cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_9202e:
    X86_TICK(c, 7);
    // 09202e  and edi, edi
    X86_AT(c, 0x9202eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092030  ja 0x91d69
    X86_AT(c, 0x92030u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x91d69u); goto L_91d69; }
L_92036:
    X86_TICK(c, 12);
    // 092036  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x92036u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 09203a  jne 0x92040
    X86_AT(c, 0x9203au);
    if (x86_cc(c, 5)) { goto L_92040; }
    X86_TICK(c, 7);
    // 09203c  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x9203cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_92040:
    X86_TICK(c, 13);
    // 092040  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92040u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092043  mov dword ptr [0x8a450], eax
    X86_AT(c, 0x92043u);
    wr32((c.sbase[3] + (uint32_t)(0x8A450u)), c.r[0]);
    // 092048  jmp 0x92178
    X86_AT(c, 0x92048u);
    goto L_92178;
L_9204d:
    X86_TICK(c, 14);
    // 09204d  mov dword ptr [0x8a450], 0
    X86_AT(c, 0x9204du);
    wr32((c.sbase[3] + (uint32_t)(0x8A450u)), 0x0u);
    // 092057  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x92057u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 09205b  je 0x92163
    X86_AT(c, 0x9205bu);
    if (x86_cc(c, 4)) { goto L_92163; }
    X86_TICK(c, 12);
    // 092061  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x92061u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 092065  jne 0x92167
    X86_AT(c, 0x92065u);
    if (x86_cc(c, 5)) { goto L_92167; }
    X86_TICK(c, 7);
    // 09206b  jmp 0x92135
    X86_AT(c, 0x9206bu);
    goto L_92135;
L_92070:
    X86_TICK(c, 19);
    // 092070  push 1
    X86_AT(c, 0x92070u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092072  lea eax, [ebp - 0xf]
    X86_AT(c, 0x92072u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 092075  push eax
    X86_AT(c, 0x92075u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092076  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92076u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092079  push edx
    X86_AT(c, 0x92079u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 09207a  call 0x94c80
    X86_AT(c, 0x9207au);
    push32(c, 0x9207fu); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x9207fu);
    X86_TICK(c, 10);
    // 09207f  xchg esi, eax
    X86_AT(c, 0x9207fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 092080  and esi, esi
    X86_AT(c, 0x92080u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092082  je 0x920da
    X86_AT(c, 0x92082u);
    if (x86_cc(c, 4)) { goto L_920da; }
    X86_TICK(c, 12);
    // 092084  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x92084u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 092088  je 0x920da
    X86_AT(c, 0x92088u);
    if (x86_cc(c, 4)) { goto L_920da; }
L_9208a:
    X86_TICK(c, 15);
    // 09208a  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x9208au);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 09208d  cmp al, byte ptr [0x8a44a]
    X86_AT(c, 0x9208du);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A44Au))), 0, 1);
    // 092093  jne 0x92124
    X86_AT(c, 0x92093u);
    if (x86_cc(c, 5)) { goto L_92124; }
    X86_TICK(c, 13);
    // 092099  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92099u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 09209c  push eax
    X86_AT(c, 0x9209cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09209d  call 0x94d10
    X86_AT(c, 0x9209du);
    push32(c, 0x920a2u); x86_call_known(c, 0x94d10u, f_00094d10); X86_RET(c, 0x920a2u);
    X86_TICK(c, 7);
    // 0920a2  dec al
    X86_AT(c, 0x920a2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0920a4  je 0x920ee
    X86_AT(c, 0x920a4u);
    if (x86_cc(c, 4)) { goto L_920ee; }
    X86_TICK(c, 19);
    // 0920a6  push 1
    X86_AT(c, 0x920a6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0920a8  lea eax, [ebp - 0xf]
    X86_AT(c, 0x920a8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 0920ab  push eax
    X86_AT(c, 0x920abu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0920ac  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x920acu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0920af  push edx
    X86_AT(c, 0x920afu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0920b0  call 0x94c80
    X86_AT(c, 0x920b0u);
    push32(c, 0x920b5u); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x920b5u);
    X86_TICK(c, 10);
    // 0920b5  xchg esi, eax
    X86_AT(c, 0x920b5u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0920b6  and esi, esi
    X86_AT(c, 0x920b6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0920b8  je 0x920c0
    X86_AT(c, 0x920b8u);
    if (x86_cc(c, 4)) { goto L_920c0; }
    X86_TICK(c, 12);
    // 0920ba  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x920bau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 0920be  jne 0x920e3
    X86_AT(c, 0x920beu);
    if (x86_cc(c, 5)) { goto L_920e3; }
L_920c0:
    X86_TICK(c, 28);
    // 0920c0  mov al, byte ptr [0x8a44a]
    X86_AT(c, 0x920c0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A44Au))));
    // 0920c5  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x920c5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0920c8  mov byte ptr [edx], al
    X86_AT(c, 0x920c8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0920ca  inc dword ptr [0x8a450]
    X86_AT(c, 0x920cau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A450u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0920d0  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x920d0u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 0920d4  jne 0x92167
    X86_AT(c, 0x920d4u);
    if (x86_cc(c, 5)) { goto L_92167; }
L_920da:
    X86_TICK(c, 14);
    // 0920da  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x920dau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 0920de  jmp 0x92167
    X86_AT(c, 0x920deu);
    goto L_92167;
L_920e3:
    X86_TICK(c, 15);
    // 0920e3  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x920e3u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0920e6  cmp al, byte ptr [0x8a44b]
    X86_AT(c, 0x920e6u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A44Bu))), 0, 1);
    // 0920ec  jne 0x920f6
    X86_AT(c, 0x920ecu);
    if (x86_cc(c, 5)) { goto L_920f6; }
L_920ee:
    X86_TICK(c, 13);
    // 0920ee  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x920eeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0920f1  mov byte ptr [eax], 0xa
    X86_AT(c, 0x920f1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 0920f4  jmp 0x9212c
    X86_AT(c, 0x920f4u);
    goto L_9212c;
L_920f6:
    X86_TICK(c, 33);
    // 0920f6  mov al, byte ptr [0x8a44a]
    X86_AT(c, 0x920f6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A44Au))));
    // 0920fb  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x920fbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0920fe  mov byte ptr [edx], al
    X86_AT(c, 0x920feu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 092100  inc dword ptr [0x8a450]
    X86_AT(c, 0x92100u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A450u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092106  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0x92106u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092109  cmp edi, dword ptr [0x8a450]
    X86_AT(c, 0x92109u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x8A450u))), 0, 4);
    // 09210f  jne 0x9208a
    X86_AT(c, 0x9210fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9208au); goto L_9208a; }
    X86_TICK(c, 17);
    // 092115  push 1
    X86_AT(c, 0x92115u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092117  push 0xffffffff
    X86_AT(c, 0x92117u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 092119  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92119u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 09211c  push eax
    X86_AT(c, 0x9211cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09211d  call 0x94d58
    X86_AT(c, 0x9211du);
    push32(c, 0x92122u); x86_call_known(c, 0x94d58u, f_00094d58); X86_RET(c, 0x92122u);
    X86_TICK(c, 7);
    // 092122  jmp 0x92167
    X86_AT(c, 0x92122u);
    goto L_92167;
L_92124:
    X86_TICK(c, 10);
    // 092124  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x92124u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 092127  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92127u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09212a  mov byte ptr [edx], al
    X86_AT(c, 0x9212au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
L_9212c:
    X86_TICK(c, 12);
    // 09212c  inc dword ptr [0x8a450]
    X86_AT(c, 0x9212cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A450u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092132  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0x92132u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_92135:
    X86_TICK(c, 11);
    // 092135  cmp edi, dword ptr [0x8a450]
    X86_AT(c, 0x92135u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x8A450u))), 0, 4);
    // 09213b  jbe 0x92167
    X86_AT(c, 0x9213bu);
    if (x86_cc(c, 6)) { goto L_92167; }
    X86_TICK(c, 7);
    // 09213d  jmp 0x92070
    X86_AT(c, 0x9213du);
    X86_POLL(c, 0x92070u); goto L_92070;
L_92142:
    X86_TICK(c, 27);
    // 092142  push edi
    X86_AT(c, 0x92142u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092143  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92143u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092146  add eax, dword ptr [0x8a450]
    X86_AT(c, 0x92146u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A450u))), 0, 4); }
    // 09214c  push eax
    X86_AT(c, 0x9214cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09214d  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9214du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092150  push eax
    X86_AT(c, 0x92150u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092151  call 0x94c80
    X86_AT(c, 0x92151u);
    push32(c, 0x92156u); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x92156u);
    X86_TICK(c, 10);
    // 092156  xchg esi, eax
    X86_AT(c, 0x92156u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 092157  and esi, esi
    X86_AT(c, 0x92157u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092159  je 0x92167
    X86_AT(c, 0x92159u);
    if (x86_cc(c, 4)) { goto L_92167; }
    X86_TICK(c, 9);
    // 09215b  add dword ptr [0x8a450], esi
    X86_AT(c, 0x9215bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A450u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 092161  sub edi, esi
    X86_AT(c, 0x92161u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
L_92163:
    X86_TICK(c, 7);
    // 092163  and edi, edi
    X86_AT(c, 0x92163u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092165  ja 0x92142
    X86_AT(c, 0x92165u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x92142u); goto L_92142; }
L_92167:
    X86_TICK(c, 12);
    // 092167  cmp dword ptr [0x8a450], 0
    X86_AT(c, 0x92167u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A450u))), 0x0u, 0, 4);
    // 09216e  jne 0x92178
    X86_AT(c, 0x9216eu);
    if (x86_cc(c, 5)) { goto L_92178; }
    X86_TICK(c, 7);
    // 092170  and edi, edi
    X86_AT(c, 0x92170u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092172  jbe 0x92178
    X86_AT(c, 0x92172u);
    if (x86_cc(c, 6)) { goto L_92178; }
    X86_TICK(c, 7);
    // 092174  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x92174u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_92178:
    X86_TICK(c, 12);
    // 092178  cmp word ptr [0x8a7de], 0
    X86_AT(c, 0x92178u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A7DEu))), 0x0u, 0, 2);
    // 092180  je 0x92188
    X86_AT(c, 0x92180u);
    if (x86_cc(c, 4)) { goto L_92188; }
    X86_TICK(c, 14);
    // 092182  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x92182u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 092186  jmp 0x92192
    X86_AT(c, 0x92186u);
    goto L_92192;
L_92188:
    X86_TICK(c, 6);
    // 092188  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x92188u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 09218c  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x9218cu);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
L_92192:
    X86_TICK(c, 28);
    // 092192  pop edi
    X86_AT(c, 0x92192u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092193  pop esi
    X86_AT(c, 0x92193u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092194  pop ebx
    X86_AT(c, 0x92194u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092195  leave 
    X86_AT(c, 0x92195u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092196  ret 0xc
    X86_AT(c, 0x92196u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x91d38u, "ran off the end of a function");
}
void f_00092010(X86Cpu& c) {
    goto L_92010;
L_91d69:
    X86_TICK(c, 12);
    // 091d69  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x91d69u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 091d6d  je 0x91f66
    X86_AT(c, 0x91d6du);
    if (x86_cc(c, 4)) { goto L_91f66; }
    X86_TICK(c, 12);
    // 091d73  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x91d73u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 091d77  jne 0x91dbe
    X86_AT(c, 0x91d77u);
    if (x86_cc(c, 5)) { goto L_91dbe; }
    X86_TICK(c, 12);
    // 091d79  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x91d79u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 091d7e  jne 0x91dbe
    X86_AT(c, 0x91d7eu);
    if (x86_cc(c, 5)) { goto L_91dbe; }
    X86_TICK(c, 12);
    // 091d80  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91d80u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 091d84  jne 0x92004
    X86_AT(c, 0x91d84u);
    if (x86_cc(c, 5)) { goto L_92004; }
    X86_TICK(c, 33);
    // 091d8a  mov al, byte ptr [0x8a44a]
    X86_AT(c, 0x91d8au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A44Au))));
    // 091d8f  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x91d8fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091d92  mov byte ptr [edx], al
    X86_AT(c, 0x91d92u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 091d94  push 0x1ff
    X86_AT(c, 0x91d94u);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 091d99  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91d99u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091d9c  inc eax
    X86_AT(c, 0x91d9cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091d9d  push eax
    X86_AT(c, 0x91d9du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091d9e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91d9eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091da1  push eax
    X86_AT(c, 0x91da1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091da2  call 0x94c80
    X86_AT(c, 0x91da2u);
    push32(c, 0x91da7u); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x91da7u);
    X86_TICK(c, 11);
    // 091da7  inc eax
    X86_AT(c, 0x91da7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091da8  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91da8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 091dab  dec eax
    X86_AT(c, 0x91dabu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 091dac  jne 0x91df6
    X86_AT(c, 0x91dacu);
    if (x86_cc(c, 5)) { goto L_91df6; }
    X86_TICK(c, 15);
    // 091dae  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91daeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091db1  mov dword ptr [ebx], eax
    X86_AT(c, 0x91db1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 091db3  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x91db3u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 091db9  jmp 0x92004
    X86_AT(c, 0x91db9u);
    goto L_92004;
L_91dbe:
    X86_TICK(c, 12);
    // 091dbe  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91dbeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091dc2  jne 0x91e3b
    X86_AT(c, 0x91dc2u);
    if (x86_cc(c, 5)) { goto L_91e3b; }
    X86_TICK(c, 12);
    // 091dc8  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x91dc8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 091dcc  jne 0x92036
    X86_AT(c, 0x91dccu);
    if (x86_cc(c, 5)) { goto L_92036; }
    X86_TICK(c, 12);
    // 091dd2  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91dd2u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 091dd6  jne 0x91dec
    X86_AT(c, 0x91dd6u);
    if (x86_cc(c, 5)) { goto L_91dec; }
    X86_TICK(c, 20);
    // 091dd8  push 0x200
    X86_AT(c, 0x91dd8u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 091ddd  push dword ptr [ebx + 8]
    X86_AT(c, 0x91dddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 091de0  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91de0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091de3  push eax
    X86_AT(c, 0x91de3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091de4  call 0x94c80
    X86_AT(c, 0x91de4u);
    push32(c, 0x91de9u); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x91de9u);
    X86_TICK(c, 2);
    // 091de9  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91de9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_91dec:
    X86_TICK(c, 12);
    // 091dec  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91decu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091df0  je 0x92036
    X86_AT(c, 0x91df0u);
    if (x86_cc(c, 4)) { goto L_92036; }
L_91df6:
    X86_TICK(c, 28);
    // 091df6  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91df6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091df9  mov al, 0x1a
    X86_AT(c, 0x91df9u);
    s8(c, 0, 0x1Au);
    // 091dfb  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x91dfbu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091dfe  push edi
    X86_AT(c, 0x91dfeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091dff  mov edi, ecx
    X86_AT(c, 0x91dffu);
    c.r[7] = c.r[1];
    // 091e01  mov ecx, edx
    X86_AT(c, 0x91e01u);
    c.r[1] = c.r[2];
    // 091e03  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x91e03u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 091e05  jne 0x91e0a
    X86_AT(c, 0x91e05u);
    if (x86_cc(c, 5)) { goto L_91e0a; }
    X86_TICK(c, 4);
    // 091e07  inc ecx
    X86_AT(c, 0x91e07u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 091e08  sub edx, ecx
    X86_AT(c, 0x91e08u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_91e0a:
    X86_TICK(c, 17);
    // 091e0a  pop edi
    X86_AT(c, 0x91e0au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091e0b  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x91e0bu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 091e0f  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91e0fu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091e12  je 0x91e30
    X86_AT(c, 0x91e12u);
    if (x86_cc(c, 4)) { goto L_91e30; }
    X86_TICK(c, 32);
    // 091e14  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91e14u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 091e18  push 1
    X86_AT(c, 0x91e18u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 091e1a  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x91e1au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 091e1d  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91e1du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 091e20  push edx
    X86_AT(c, 0x91e20u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 091e21  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91e21u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091e24  push eax
    X86_AT(c, 0x91e24u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091e25  call 0x94d58
    X86_AT(c, 0x91e25u);
    push32(c, 0x91e2au); x86_call_known(c, 0x94d58u, f_00094d58); X86_RET(c, 0x91e2au);
    X86_TICK(c, 6);
    // 091e2a  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x91e2au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 091e2d  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91e2du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_91e30:
    X86_TICK(c, 8);
    // 091e30  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91e30u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091e33  mov dword ptr [ebx], eax
    X86_AT(c, 0x91e33u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 091e35  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x91e35u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_91e3b:
    X86_TICK(c, 12);
    // 091e3b  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91e3bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091e3f  jle 0x9202e
    X86_AT(c, 0x91e3fu);
    if (x86_cc(c, 14)) { goto L_9202e; }
    X86_TICK(c, 11);
    // 091e45  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91e45u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 091e49  cmp ax, 0xffff
    X86_AT(c, 0x91e49u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 091e4d  je 0x91e5d
    X86_AT(c, 0x91e4du);
    if (x86_cc(c, 4)) { goto L_91e5d; }
    X86_TICK(c, 20);
    // 091e4f  movsx eax, ax
    X86_AT(c, 0x91e4fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 091e52  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91e52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 091e55  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x91e55u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 091e57  jge 0x91ef4
    X86_AT(c, 0x91e57u);
    if (x86_cc(c, 13)) { goto L_91ef4; }
L_91e5d:
    X86_TICK(c, 30);
    // 091e5d  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91e5du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091e60  mov al, byte ptr [0x8a44a]
    X86_AT(c, 0x91e60u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A44Au))));
    // 091e65  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x91e65u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091e67  push edi
    X86_AT(c, 0x91e67u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091e68  mov edi, ecx
    X86_AT(c, 0x91e68u);
    c.r[7] = c.r[1];
    // 091e6a  mov ecx, edx
    X86_AT(c, 0x91e6au);
    c.r[1] = c.r[2];
    // 091e6c  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x91e6cu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 091e6e  jne 0x91e73
    X86_AT(c, 0x91e6eu);
    if (x86_cc(c, 5)) { goto L_91e73; }
    X86_TICK(c, 4);
    // 091e70  inc ecx
    X86_AT(c, 0x91e70u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 091e71  sub edx, ecx
    X86_AT(c, 0x91e71u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_91e73:
    X86_TICK(c, 13);
    // 091e73  pop edi
    X86_AT(c, 0x91e73u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091e74  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x91e74u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 091e78  jmp 0x91ead
    X86_AT(c, 0x91e78u);
    goto L_91ead;
L_91e7a:
    X86_TICK(c, 59);
    // 091e7a  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91e7au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091e7e  add eax, dword ptr [ebx]
    X86_AT(c, 0x91e7eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 091e80  inc eax
    X86_AT(c, 0x91e80u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091e81  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x91e81u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 091e85  inc edx
    X86_AT(c, 0x91e85u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 091e86  movsx edx, dx
    X86_AT(c, 0x91e86u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 091e89  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x91e89u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091e8c  sub ecx, edx
    X86_AT(c, 0x91e8cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 091e8e  mov edx, ecx
    X86_AT(c, 0x91e8eu);
    c.r[2] = c.r[1];
    // 091e90  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x91e90u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 091e93  mov al, byte ptr [0x8a44a]
    X86_AT(c, 0x91e93u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A44Au))));
    // 091e98  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x91e98u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 091e9b  push edi
    X86_AT(c, 0x91e9bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091e9c  mov edi, ecx
    X86_AT(c, 0x91e9cu);
    c.r[7] = c.r[1];
    // 091e9e  mov ecx, edx
    X86_AT(c, 0x91e9eu);
    c.r[1] = c.r[2];
    // 091ea0  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x91ea0u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 091ea2  jne 0x91ea7
    X86_AT(c, 0x91ea2u);
    if (x86_cc(c, 5)) { goto L_91ea7; }
    X86_TICK(c, 4);
    // 091ea4  inc ecx
    X86_AT(c, 0x91ea4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 091ea5  sub edx, ecx
    X86_AT(c, 0x91ea5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_91ea7:
    X86_TICK(c, 13);
    // 091ea7  pop edi
    X86_AT(c, 0x91ea7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091ea8  inc edx
    X86_AT(c, 0x91ea8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 091ea9  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x91ea9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_91ead:
    X86_TICK(c, 19);
    // 091ead  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91eadu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091eb1  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91eb1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091eb4  dec edx
    X86_AT(c, 0x91eb4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 091eb5  cmp edx, eax
    X86_AT(c, 0x91eb5u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 091eb7  jle 0x91ec6
    X86_AT(c, 0x91eb7u);
    if (x86_cc(c, 14)) { goto L_91ec6; }
    X86_TICK(c, 23);
    // 091eb9  add eax, dword ptr [ebx]
    X86_AT(c, 0x91eb9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 091ebb  inc eax
    X86_AT(c, 0x91ebbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091ebc  mov al, byte ptr [eax]
    X86_AT(c, 0x91ebcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 091ebe  cmp al, byte ptr [0x8a44b]
    X86_AT(c, 0x91ebeu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A44Bu))), 0, 1);
    // 091ec4  jne 0x91e7a
    X86_AT(c, 0x91ec4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x91e7au); goto L_91e7a; }
L_91ec6:
    X86_TICK(c, 17);
    // 091ec6  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91ec6u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091eca  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x91ecau);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091ecd  jne 0x91ed7
    X86_AT(c, 0x91ecdu);
    if (x86_cc(c, 5)) { goto L_91ed7; }
    X86_TICK(c, 9);
    // 091ecf  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x91ecfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 091ed5  jmp 0x91ef4
    X86_AT(c, 0x91ed5u);
    goto L_91ef4;
L_91ed7:
    X86_TICK(c, 19);
    // 091ed7  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91ed7u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091edb  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91edbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091ede  dec edx
    X86_AT(c, 0x91edeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 091edf  cmp edx, eax
    X86_AT(c, 0x91edfu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 091ee1  jne 0x91eeb
    X86_AT(c, 0x91ee1u);
    if (x86_cc(c, 5)) { goto L_91eeb; }
    X86_TICK(c, 9);
    // 091ee3  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x91ee3u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 091ee9  jmp 0x91ef4
    X86_AT(c, 0x91ee9u);
    goto L_91ef4;
L_91eeb:
    X86_TICK(c, 17);
    // 091eeb  mov eax, dword ptr [ebx]
    X86_AT(c, 0x91eebu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091eed  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91eedu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 091ef0  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x91ef0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_91ef4:
    X86_TICK(c, 12);
    // 091ef4  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x91ef4u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 091efa  je 0x92004
    X86_AT(c, 0x91efau);
    if (x86_cc(c, 4)) { goto L_92004; }
    X86_TICK(c, 12);
    // 091f00  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x91f00u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 091f05  jne 0x91f15
    X86_AT(c, 0x91f05u);
    if (x86_cc(c, 5)) { goto L_91f15; }
    X86_TICK(c, 11);
    // 091f07  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x91f07u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091f0a  jl 0x91f5f
    X86_AT(c, 0x91f0au);
    if (x86_cc(c, 12)) { goto L_91f5f; }
    X86_TICK(c, 13);
    // 091f0c  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x91f0cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091f0f  dec esi
    X86_AT(c, 0x91f0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 091f10  jmp 0x92010
    X86_AT(c, 0x91f10u);
    goto L_92010;
L_91f15:
    X86_TICK(c, 25);
    // 091f15  mov eax, dword ptr [ebx]
    X86_AT(c, 0x91f15u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091f17  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91f17u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 091f1a  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x91f1au);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091f1e  sub esi, eax
    X86_AT(c, 0x91f1eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 091f20  cmp edi, esi
    X86_AT(c, 0x91f20u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 091f22  jbe 0x91f5f
    X86_AT(c, 0x91f22u);
    if (x86_cc(c, 6)) { goto L_91f5f; }
    X86_TICK(c, 87);
    // 091f24  mov ecx, esi
    X86_AT(c, 0x91f24u);
    c.r[1] = c.r[6];
    // 091f26  mov eax, dword ptr [ebx]
    X86_AT(c, 0x91f26u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091f28  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x91f28u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 091f2b  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x91f2bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 091f2e  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x91f2eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 091f31  lea edx, [edx + edi*1]
    X86_AT(c, 0x91f31u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 091f34  push esi
    X86_AT(c, 0x91f34u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091f35  push edi
    X86_AT(c, 0x91f35u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091f36  mov esi, eax
    X86_AT(c, 0x91f36u);
    c.r[6] = c.r[0];
    // 091f38  mov edi, edx
    X86_AT(c, 0x91f38u);
    c.r[7] = c.r[2];
    // 091f3a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x91f3au);
    x86_string(c, 0, 1, 243, 4, 3);
    // 091f3c  pop edi
    X86_AT(c, 0x91f3cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091f3d  pop esi
    X86_AT(c, 0x91f3du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 091f3e  add edi, esi
    X86_AT(c, 0x91f3eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 091f40  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x91f40u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 091f43  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x91f43u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 091f47  lea eax, [esi + 1]
    X86_AT(c, 0x91f47u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 091f4a  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x91f4au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091f4d  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x91f4du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 091f50  sub edi, eax
    X86_AT(c, 0x91f50u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 091f52  lea eax, [esi + 2]
    X86_AT(c, 0x91f52u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 091f55  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x91f55u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 091f58  add dword ptr [ebx], eax
    X86_AT(c, 0x91f58u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091f5a  jmp 0x9202e
    X86_AT(c, 0x91f5au);
    goto L_9202e;
L_91f5f:
    X86_TICK(c, 9);
    // 091f5f  mov esi, edi
    X86_AT(c, 0x91f5fu);
    c.r[6] = c.r[7];
    // 091f61  jmp 0x92010
    X86_AT(c, 0x91f61u);
    goto L_92010;
L_91f66:
    X86_TICK(c, 13);
    // 091f66  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x91f66u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 091f6c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x91f6cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091f6f  cmp edi, eax
    X86_AT(c, 0x91f6fu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 091f71  jl 0x91f97
    X86_AT(c, 0x91f71u);
    if (x86_cc(c, 12)) { goto L_91f97; }
    X86_TICK(c, 7);
    // 091f73  and eax, eax
    X86_AT(c, 0x91f73u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 091f75  jle 0x91f97
    X86_AT(c, 0x91f75u);
    if (x86_cc(c, 14)) { goto L_91f97; }
    X86_TICK(c, 53);
    // 091f77  xchg ecx, eax
    X86_AT(c, 0x91f77u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 091f78  mov eax, dword ptr [ebx]
    X86_AT(c, 0x91f78u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091f7a  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x91f7au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 091f7d  push esi
    X86_AT(c, 0x91f7du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091f7e  push edi
    X86_AT(c, 0x91f7eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091f7f  mov esi, eax
    X86_AT(c, 0x91f7fu);
    c.r[6] = c.r[0];
    // 091f81  mov edi, edx
    X86_AT(c, 0x91f81u);
    c.r[7] = c.r[2];
    // 091f83  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x91f83u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 091f85  pop edi
    X86_AT(c, 0x91f85u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091f86  pop esi
    X86_AT(c, 0x91f86u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 091f87  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x91f87u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 091f8a  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x91f8au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091f8d  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x91f8du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091f90  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x91f90u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_91f97:
    X86_TICK(c, 7);
    // 091f97  cmp edi, 0x200
    X86_AT(c, 0x91f97u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 091f9d  jb 0x91fd5
    X86_AT(c, 0x91f9du);
    if (x86_cc(c, 2)) { goto L_91fd5; }
    X86_TICK(c, 10);
    // 091f9f  mov esi, edi
    X86_AT(c, 0x91f9fu);
    c.r[6] = c.r[7];
    // 091fa1  shr esi, 9
    X86_AT(c, 0x91fa1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 091fa4  shl esi, 9
    X86_AT(c, 0x91fa4u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 091fa7  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x91fa7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_91fae:
    X86_TICK(c, 27);
    // 091fae  push esi
    X86_AT(c, 0x91faeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091faf  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x91fafu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 091fb2  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x91fb2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 091fb5  push eax
    X86_AT(c, 0x91fb5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091fb6  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91fb6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091fb9  push eax
    X86_AT(c, 0x91fb9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091fba  call 0x94c80
    X86_AT(c, 0x91fbau);
    push32(c, 0x91fbfu); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x91fbfu);
    X86_TICK(c, 25);
    // 091fbf  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x91fbfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 091fc2  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x91fc2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091fc5  sub esi, eax
    X86_AT(c, 0x91fc5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 091fc7  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x91fc7u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091fca  and esi, esi
    X86_AT(c, 0x91fcau);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 091fcc  je 0x91fd2
    X86_AT(c, 0x91fccu);
    if (x86_cc(c, 4)) { goto L_91fd2; }
    X86_TICK(c, 7);
    // 091fce  and eax, eax
    X86_AT(c, 0x91fceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 091fd0  jne 0x91fae
    X86_AT(c, 0x91fd0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x91faeu); goto L_91fae; }
L_91fd2:
    X86_TICK(c, 6);
    // 091fd2  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x91fd2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_91fd5:
    X86_TICK(c, 7);
    // 091fd5  and edi, edi
    X86_AT(c, 0x91fd5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 091fd7  jbe 0x9202e
    X86_AT(c, 0x91fd7u);
    if (x86_cc(c, 6)) { goto L_9202e; }
    X86_TICK(c, 12);
    // 091fd9  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91fd9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091fdd  jne 0x91ffe
    X86_AT(c, 0x91fddu);
    if (x86_cc(c, 5)) { goto L_91ffe; }
    X86_TICK(c, 12);
    // 091fdf  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x91fdfu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 091fe3  jne 0x92036
    X86_AT(c, 0x91fe3u);
    if (x86_cc(c, 5)) { goto L_92036; }
    X86_TICK(c, 20);
    // 091fe5  push 0x200
    X86_AT(c, 0x91fe5u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 091fea  push dword ptr [ebx + 8]
    X86_AT(c, 0x91feau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 091fed  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91fedu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091ff0  push eax
    X86_AT(c, 0x91ff0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091ff1  call 0x94c80
    X86_AT(c, 0x91ff1u);
    push32(c, 0x91ff6u); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x91ff6u);
    X86_TICK(c, 8);
    // 091ff6  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91ff6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 091ff9  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91ff9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091ffc  mov dword ptr [ebx], eax
    X86_AT(c, 0x91ffcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_91ffe:
    X86_TICK(c, 12);
    // 091ffe  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91ffeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092002  jle 0x92036
    X86_AT(c, 0x92002u);
    if (x86_cc(c, 14)) { goto L_92036; }
L_92004:
    X86_TICK(c, 13);
    // 092004  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x92004u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092007  mov edx, edi
    X86_AT(c, 0x92007u);
    c.r[2] = c.r[7];
    // 092009  cmp edx, eax
    X86_AT(c, 0x92009u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 09200b  jl 0x9200e
    X86_AT(c, 0x9200bu);
    if (x86_cc(c, 12)) { goto L_9200e; }
    X86_TICK(c, 3);
    // 09200d  xchg edx, eax
    X86_AT(c, 0x9200du);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_9200e:
    X86_TICK(c, 2);
    // 09200e  mov esi, edx
    X86_AT(c, 0x9200eu);
    c.r[6] = c.r[2];
L_92010:
    X86_TICK(c, 62);
    // 092010  mov ecx, esi
    X86_AT(c, 0x92010u);
    c.r[1] = c.r[6];
    // 092012  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92012u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092014  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92014u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092017  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x92017u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 09201a  push esi
    X86_AT(c, 0x9201au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09201b  push edi
    X86_AT(c, 0x9201bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09201c  mov esi, eax
    X86_AT(c, 0x9201cu);
    c.r[6] = c.r[0];
    // 09201e  mov edi, edx
    X86_AT(c, 0x9201eu);
    c.r[7] = c.r[2];
    // 092020  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92020u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092022  pop edi
    X86_AT(c, 0x92022u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092023  pop esi
    X86_AT(c, 0x92023u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092024  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x92024u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 092027  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x92027u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 09202a  sub edi, esi
    X86_AT(c, 0x9202au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 09202c  add dword ptr [ebx], esi
    X86_AT(c, 0x9202cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_9202e:
    X86_TICK(c, 7);
    // 09202e  and edi, edi
    X86_AT(c, 0x9202eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092030  ja 0x91d69
    X86_AT(c, 0x92030u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x91d69u); goto L_91d69; }
L_92036:
    X86_TICK(c, 12);
    // 092036  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x92036u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 09203a  jne 0x92040
    X86_AT(c, 0x9203au);
    if (x86_cc(c, 5)) { goto L_92040; }
    X86_TICK(c, 7);
    // 09203c  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x9203cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_92040:
    X86_TICK(c, 13);
    // 092040  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92040u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092043  mov dword ptr [0x8a450], eax
    X86_AT(c, 0x92043u);
    wr32((c.sbase[3] + (uint32_t)(0x8A450u)), c.r[0]);
    // 092048  jmp 0x92178
    X86_AT(c, 0x92048u);
    goto L_92178;
L_92178:
    X86_TICK(c, 12);
    // 092178  cmp word ptr [0x8a7de], 0
    X86_AT(c, 0x92178u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A7DEu))), 0x0u, 0, 2);
    // 092180  je 0x92188
    X86_AT(c, 0x92180u);
    if (x86_cc(c, 4)) { goto L_92188; }
    X86_TICK(c, 14);
    // 092182  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x92182u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 092186  jmp 0x92192
    X86_AT(c, 0x92186u);
    goto L_92192;
L_92188:
    X86_TICK(c, 6);
    // 092188  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x92188u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 09218c  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x9218cu);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
L_92192:
    X86_TICK(c, 28);
    // 092192  pop edi
    X86_AT(c, 0x92192u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092193  pop esi
    X86_AT(c, 0x92193u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092194  pop ebx
    X86_AT(c, 0x92194u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092195  leave 
    X86_AT(c, 0x92195u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092196  ret 0xc
    X86_AT(c, 0x92196u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x92010u, "ran off the end of a function");
}
void f_0009202e(X86Cpu& c) {
    goto L_9202e;
L_91d69:
    X86_TICK(c, 12);
    // 091d69  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x91d69u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 091d6d  je 0x91f66
    X86_AT(c, 0x91d6du);
    if (x86_cc(c, 4)) { goto L_91f66; }
    X86_TICK(c, 12);
    // 091d73  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x91d73u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 091d77  jne 0x91dbe
    X86_AT(c, 0x91d77u);
    if (x86_cc(c, 5)) { goto L_91dbe; }
    X86_TICK(c, 12);
    // 091d79  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x91d79u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 091d7e  jne 0x91dbe
    X86_AT(c, 0x91d7eu);
    if (x86_cc(c, 5)) { goto L_91dbe; }
    X86_TICK(c, 12);
    // 091d80  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91d80u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 091d84  jne 0x92004
    X86_AT(c, 0x91d84u);
    if (x86_cc(c, 5)) { goto L_92004; }
    X86_TICK(c, 33);
    // 091d8a  mov al, byte ptr [0x8a44a]
    X86_AT(c, 0x91d8au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A44Au))));
    // 091d8f  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x91d8fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091d92  mov byte ptr [edx], al
    X86_AT(c, 0x91d92u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 091d94  push 0x1ff
    X86_AT(c, 0x91d94u);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 091d99  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91d99u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091d9c  inc eax
    X86_AT(c, 0x91d9cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091d9d  push eax
    X86_AT(c, 0x91d9du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091d9e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91d9eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091da1  push eax
    X86_AT(c, 0x91da1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091da2  call 0x94c80
    X86_AT(c, 0x91da2u);
    push32(c, 0x91da7u); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x91da7u);
    X86_TICK(c, 11);
    // 091da7  inc eax
    X86_AT(c, 0x91da7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091da8  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91da8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 091dab  dec eax
    X86_AT(c, 0x91dabu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 091dac  jne 0x91df6
    X86_AT(c, 0x91dacu);
    if (x86_cc(c, 5)) { goto L_91df6; }
    X86_TICK(c, 15);
    // 091dae  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91daeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091db1  mov dword ptr [ebx], eax
    X86_AT(c, 0x91db1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 091db3  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x91db3u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 091db9  jmp 0x92004
    X86_AT(c, 0x91db9u);
    goto L_92004;
L_91dbe:
    X86_TICK(c, 12);
    // 091dbe  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91dbeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091dc2  jne 0x91e3b
    X86_AT(c, 0x91dc2u);
    if (x86_cc(c, 5)) { goto L_91e3b; }
    X86_TICK(c, 12);
    // 091dc8  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x91dc8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 091dcc  jne 0x92036
    X86_AT(c, 0x91dccu);
    if (x86_cc(c, 5)) { goto L_92036; }
    X86_TICK(c, 12);
    // 091dd2  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91dd2u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 091dd6  jne 0x91dec
    X86_AT(c, 0x91dd6u);
    if (x86_cc(c, 5)) { goto L_91dec; }
    X86_TICK(c, 20);
    // 091dd8  push 0x200
    X86_AT(c, 0x91dd8u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 091ddd  push dword ptr [ebx + 8]
    X86_AT(c, 0x91dddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 091de0  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91de0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091de3  push eax
    X86_AT(c, 0x91de3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091de4  call 0x94c80
    X86_AT(c, 0x91de4u);
    push32(c, 0x91de9u); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x91de9u);
    X86_TICK(c, 2);
    // 091de9  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91de9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_91dec:
    X86_TICK(c, 12);
    // 091dec  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91decu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091df0  je 0x92036
    X86_AT(c, 0x91df0u);
    if (x86_cc(c, 4)) { goto L_92036; }
L_91df6:
    X86_TICK(c, 28);
    // 091df6  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91df6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091df9  mov al, 0x1a
    X86_AT(c, 0x91df9u);
    s8(c, 0, 0x1Au);
    // 091dfb  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x91dfbu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091dfe  push edi
    X86_AT(c, 0x91dfeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091dff  mov edi, ecx
    X86_AT(c, 0x91dffu);
    c.r[7] = c.r[1];
    // 091e01  mov ecx, edx
    X86_AT(c, 0x91e01u);
    c.r[1] = c.r[2];
    // 091e03  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x91e03u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 091e05  jne 0x91e0a
    X86_AT(c, 0x91e05u);
    if (x86_cc(c, 5)) { goto L_91e0a; }
    X86_TICK(c, 4);
    // 091e07  inc ecx
    X86_AT(c, 0x91e07u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 091e08  sub edx, ecx
    X86_AT(c, 0x91e08u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_91e0a:
    X86_TICK(c, 17);
    // 091e0a  pop edi
    X86_AT(c, 0x91e0au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091e0b  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x91e0bu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 091e0f  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91e0fu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091e12  je 0x91e30
    X86_AT(c, 0x91e12u);
    if (x86_cc(c, 4)) { goto L_91e30; }
    X86_TICK(c, 32);
    // 091e14  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91e14u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 091e18  push 1
    X86_AT(c, 0x91e18u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 091e1a  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x91e1au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 091e1d  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91e1du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 091e20  push edx
    X86_AT(c, 0x91e20u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 091e21  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91e21u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091e24  push eax
    X86_AT(c, 0x91e24u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091e25  call 0x94d58
    X86_AT(c, 0x91e25u);
    push32(c, 0x91e2au); x86_call_known(c, 0x94d58u, f_00094d58); X86_RET(c, 0x91e2au);
    X86_TICK(c, 6);
    // 091e2a  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x91e2au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 091e2d  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91e2du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_91e30:
    X86_TICK(c, 8);
    // 091e30  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91e30u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091e33  mov dword ptr [ebx], eax
    X86_AT(c, 0x91e33u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 091e35  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x91e35u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_91e3b:
    X86_TICK(c, 12);
    // 091e3b  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91e3bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091e3f  jle 0x9202e
    X86_AT(c, 0x91e3fu);
    if (x86_cc(c, 14)) { goto L_9202e; }
    X86_TICK(c, 11);
    // 091e45  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91e45u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 091e49  cmp ax, 0xffff
    X86_AT(c, 0x91e49u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 091e4d  je 0x91e5d
    X86_AT(c, 0x91e4du);
    if (x86_cc(c, 4)) { goto L_91e5d; }
    X86_TICK(c, 20);
    // 091e4f  movsx eax, ax
    X86_AT(c, 0x91e4fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 091e52  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91e52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 091e55  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x91e55u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 091e57  jge 0x91ef4
    X86_AT(c, 0x91e57u);
    if (x86_cc(c, 13)) { goto L_91ef4; }
L_91e5d:
    X86_TICK(c, 30);
    // 091e5d  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91e5du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091e60  mov al, byte ptr [0x8a44a]
    X86_AT(c, 0x91e60u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A44Au))));
    // 091e65  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x91e65u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091e67  push edi
    X86_AT(c, 0x91e67u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091e68  mov edi, ecx
    X86_AT(c, 0x91e68u);
    c.r[7] = c.r[1];
    // 091e6a  mov ecx, edx
    X86_AT(c, 0x91e6au);
    c.r[1] = c.r[2];
    // 091e6c  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x91e6cu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 091e6e  jne 0x91e73
    X86_AT(c, 0x91e6eu);
    if (x86_cc(c, 5)) { goto L_91e73; }
    X86_TICK(c, 4);
    // 091e70  inc ecx
    X86_AT(c, 0x91e70u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 091e71  sub edx, ecx
    X86_AT(c, 0x91e71u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_91e73:
    X86_TICK(c, 13);
    // 091e73  pop edi
    X86_AT(c, 0x91e73u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091e74  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x91e74u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 091e78  jmp 0x91ead
    X86_AT(c, 0x91e78u);
    goto L_91ead;
L_91e7a:
    X86_TICK(c, 59);
    // 091e7a  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91e7au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091e7e  add eax, dword ptr [ebx]
    X86_AT(c, 0x91e7eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 091e80  inc eax
    X86_AT(c, 0x91e80u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091e81  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x91e81u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 091e85  inc edx
    X86_AT(c, 0x91e85u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 091e86  movsx edx, dx
    X86_AT(c, 0x91e86u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 091e89  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x91e89u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091e8c  sub ecx, edx
    X86_AT(c, 0x91e8cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 091e8e  mov edx, ecx
    X86_AT(c, 0x91e8eu);
    c.r[2] = c.r[1];
    // 091e90  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x91e90u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 091e93  mov al, byte ptr [0x8a44a]
    X86_AT(c, 0x91e93u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A44Au))));
    // 091e98  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x91e98u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 091e9b  push edi
    X86_AT(c, 0x91e9bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091e9c  mov edi, ecx
    X86_AT(c, 0x91e9cu);
    c.r[7] = c.r[1];
    // 091e9e  mov ecx, edx
    X86_AT(c, 0x91e9eu);
    c.r[1] = c.r[2];
    // 091ea0  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x91ea0u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 091ea2  jne 0x91ea7
    X86_AT(c, 0x91ea2u);
    if (x86_cc(c, 5)) { goto L_91ea7; }
    X86_TICK(c, 4);
    // 091ea4  inc ecx
    X86_AT(c, 0x91ea4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 091ea5  sub edx, ecx
    X86_AT(c, 0x91ea5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_91ea7:
    X86_TICK(c, 13);
    // 091ea7  pop edi
    X86_AT(c, 0x91ea7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091ea8  inc edx
    X86_AT(c, 0x91ea8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 091ea9  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x91ea9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_91ead:
    X86_TICK(c, 19);
    // 091ead  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91eadu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091eb1  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91eb1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091eb4  dec edx
    X86_AT(c, 0x91eb4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 091eb5  cmp edx, eax
    X86_AT(c, 0x91eb5u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 091eb7  jle 0x91ec6
    X86_AT(c, 0x91eb7u);
    if (x86_cc(c, 14)) { goto L_91ec6; }
    X86_TICK(c, 23);
    // 091eb9  add eax, dword ptr [ebx]
    X86_AT(c, 0x91eb9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 091ebb  inc eax
    X86_AT(c, 0x91ebbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091ebc  mov al, byte ptr [eax]
    X86_AT(c, 0x91ebcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 091ebe  cmp al, byte ptr [0x8a44b]
    X86_AT(c, 0x91ebeu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A44Bu))), 0, 1);
    // 091ec4  jne 0x91e7a
    X86_AT(c, 0x91ec4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x91e7au); goto L_91e7a; }
L_91ec6:
    X86_TICK(c, 17);
    // 091ec6  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91ec6u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091eca  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x91ecau);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091ecd  jne 0x91ed7
    X86_AT(c, 0x91ecdu);
    if (x86_cc(c, 5)) { goto L_91ed7; }
    X86_TICK(c, 9);
    // 091ecf  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x91ecfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 091ed5  jmp 0x91ef4
    X86_AT(c, 0x91ed5u);
    goto L_91ef4;
L_91ed7:
    X86_TICK(c, 19);
    // 091ed7  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91ed7u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091edb  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91edbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091ede  dec edx
    X86_AT(c, 0x91edeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 091edf  cmp edx, eax
    X86_AT(c, 0x91edfu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 091ee1  jne 0x91eeb
    X86_AT(c, 0x91ee1u);
    if (x86_cc(c, 5)) { goto L_91eeb; }
    X86_TICK(c, 9);
    // 091ee3  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x91ee3u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 091ee9  jmp 0x91ef4
    X86_AT(c, 0x91ee9u);
    goto L_91ef4;
L_91eeb:
    X86_TICK(c, 17);
    // 091eeb  mov eax, dword ptr [ebx]
    X86_AT(c, 0x91eebu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091eed  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91eedu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 091ef0  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x91ef0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_91ef4:
    X86_TICK(c, 12);
    // 091ef4  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x91ef4u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 091efa  je 0x92004
    X86_AT(c, 0x91efau);
    if (x86_cc(c, 4)) { goto L_92004; }
    X86_TICK(c, 12);
    // 091f00  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x91f00u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 091f05  jne 0x91f15
    X86_AT(c, 0x91f05u);
    if (x86_cc(c, 5)) { goto L_91f15; }
    X86_TICK(c, 11);
    // 091f07  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x91f07u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091f0a  jl 0x91f5f
    X86_AT(c, 0x91f0au);
    if (x86_cc(c, 12)) { goto L_91f5f; }
    X86_TICK(c, 13);
    // 091f0c  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x91f0cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091f0f  dec esi
    X86_AT(c, 0x91f0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 091f10  jmp 0x92010
    X86_AT(c, 0x91f10u);
    goto L_92010;
L_91f15:
    X86_TICK(c, 25);
    // 091f15  mov eax, dword ptr [ebx]
    X86_AT(c, 0x91f15u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091f17  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91f17u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 091f1a  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x91f1au);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 091f1e  sub esi, eax
    X86_AT(c, 0x91f1eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 091f20  cmp edi, esi
    X86_AT(c, 0x91f20u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 091f22  jbe 0x91f5f
    X86_AT(c, 0x91f22u);
    if (x86_cc(c, 6)) { goto L_91f5f; }
    X86_TICK(c, 87);
    // 091f24  mov ecx, esi
    X86_AT(c, 0x91f24u);
    c.r[1] = c.r[6];
    // 091f26  mov eax, dword ptr [ebx]
    X86_AT(c, 0x91f26u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091f28  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x91f28u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 091f2b  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x91f2bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 091f2e  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x91f2eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 091f31  lea edx, [edx + edi*1]
    X86_AT(c, 0x91f31u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 091f34  push esi
    X86_AT(c, 0x91f34u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091f35  push edi
    X86_AT(c, 0x91f35u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091f36  mov esi, eax
    X86_AT(c, 0x91f36u);
    c.r[6] = c.r[0];
    // 091f38  mov edi, edx
    X86_AT(c, 0x91f38u);
    c.r[7] = c.r[2];
    // 091f3a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x91f3au);
    x86_string(c, 0, 1, 243, 4, 3);
    // 091f3c  pop edi
    X86_AT(c, 0x91f3cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091f3d  pop esi
    X86_AT(c, 0x91f3du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 091f3e  add edi, esi
    X86_AT(c, 0x91f3eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 091f40  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x91f40u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 091f43  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x91f43u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 091f47  lea eax, [esi + 1]
    X86_AT(c, 0x91f47u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 091f4a  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x91f4au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091f4d  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x91f4du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 091f50  sub edi, eax
    X86_AT(c, 0x91f50u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 091f52  lea eax, [esi + 2]
    X86_AT(c, 0x91f52u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 091f55  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x91f55u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 091f58  add dword ptr [ebx], eax
    X86_AT(c, 0x91f58u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091f5a  jmp 0x9202e
    X86_AT(c, 0x91f5au);
    goto L_9202e;
L_91f5f:
    X86_TICK(c, 9);
    // 091f5f  mov esi, edi
    X86_AT(c, 0x91f5fu);
    c.r[6] = c.r[7];
    // 091f61  jmp 0x92010
    X86_AT(c, 0x91f61u);
    goto L_92010;
L_91f66:
    X86_TICK(c, 13);
    // 091f66  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x91f66u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 091f6c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x91f6cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091f6f  cmp edi, eax
    X86_AT(c, 0x91f6fu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 091f71  jl 0x91f97
    X86_AT(c, 0x91f71u);
    if (x86_cc(c, 12)) { goto L_91f97; }
    X86_TICK(c, 7);
    // 091f73  and eax, eax
    X86_AT(c, 0x91f73u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 091f75  jle 0x91f97
    X86_AT(c, 0x91f75u);
    if (x86_cc(c, 14)) { goto L_91f97; }
    X86_TICK(c, 53);
    // 091f77  xchg ecx, eax
    X86_AT(c, 0x91f77u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 091f78  mov eax, dword ptr [ebx]
    X86_AT(c, 0x91f78u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 091f7a  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x91f7au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 091f7d  push esi
    X86_AT(c, 0x91f7du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091f7e  push edi
    X86_AT(c, 0x91f7eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091f7f  mov esi, eax
    X86_AT(c, 0x91f7fu);
    c.r[6] = c.r[0];
    // 091f81  mov edi, edx
    X86_AT(c, 0x91f81u);
    c.r[7] = c.r[2];
    // 091f83  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x91f83u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 091f85  pop edi
    X86_AT(c, 0x91f85u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091f86  pop esi
    X86_AT(c, 0x91f86u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 091f87  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x91f87u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 091f8a  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x91f8au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091f8d  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x91f8du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091f90  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x91f90u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_91f97:
    X86_TICK(c, 7);
    // 091f97  cmp edi, 0x200
    X86_AT(c, 0x91f97u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 091f9d  jb 0x91fd5
    X86_AT(c, 0x91f9du);
    if (x86_cc(c, 2)) { goto L_91fd5; }
    X86_TICK(c, 10);
    // 091f9f  mov esi, edi
    X86_AT(c, 0x91f9fu);
    c.r[6] = c.r[7];
    // 091fa1  shr esi, 9
    X86_AT(c, 0x91fa1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 091fa4  shl esi, 9
    X86_AT(c, 0x91fa4u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 091fa7  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x91fa7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_91fae:
    X86_TICK(c, 27);
    // 091fae  push esi
    X86_AT(c, 0x91faeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091faf  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x91fafu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 091fb2  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x91fb2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 091fb5  push eax
    X86_AT(c, 0x91fb5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091fb6  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91fb6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091fb9  push eax
    X86_AT(c, 0x91fb9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091fba  call 0x94c80
    X86_AT(c, 0x91fbau);
    push32(c, 0x91fbfu); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x91fbfu);
    X86_TICK(c, 25);
    // 091fbf  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x91fbfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 091fc2  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x91fc2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091fc5  sub esi, eax
    X86_AT(c, 0x91fc5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 091fc7  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x91fc7u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 091fca  and esi, esi
    X86_AT(c, 0x91fcau);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 091fcc  je 0x91fd2
    X86_AT(c, 0x91fccu);
    if (x86_cc(c, 4)) { goto L_91fd2; }
    X86_TICK(c, 7);
    // 091fce  and eax, eax
    X86_AT(c, 0x91fceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 091fd0  jne 0x91fae
    X86_AT(c, 0x91fd0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x91faeu); goto L_91fae; }
L_91fd2:
    X86_TICK(c, 6);
    // 091fd2  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x91fd2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_91fd5:
    X86_TICK(c, 7);
    // 091fd5  and edi, edi
    X86_AT(c, 0x91fd5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 091fd7  jbe 0x9202e
    X86_AT(c, 0x91fd7u);
    if (x86_cc(c, 6)) { goto L_9202e; }
    X86_TICK(c, 12);
    // 091fd9  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91fd9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091fdd  jne 0x91ffe
    X86_AT(c, 0x91fddu);
    if (x86_cc(c, 5)) { goto L_91ffe; }
    X86_TICK(c, 12);
    // 091fdf  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x91fdfu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 091fe3  jne 0x92036
    X86_AT(c, 0x91fe3u);
    if (x86_cc(c, 5)) { goto L_92036; }
    X86_TICK(c, 20);
    // 091fe5  push 0x200
    X86_AT(c, 0x91fe5u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 091fea  push dword ptr [ebx + 8]
    X86_AT(c, 0x91feau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 091fed  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91fedu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091ff0  push eax
    X86_AT(c, 0x91ff0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091ff1  call 0x94c80
    X86_AT(c, 0x91ff1u);
    push32(c, 0x91ff6u); x86_call_known(c, 0x94c80u, f_00094c80); X86_RET(c, 0x91ff6u);
    X86_TICK(c, 8);
    // 091ff6  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91ff6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 091ff9  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91ff9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091ffc  mov dword ptr [ebx], eax
    X86_AT(c, 0x91ffcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_91ffe:
    X86_TICK(c, 12);
    // 091ffe  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91ffeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092002  jle 0x92036
    X86_AT(c, 0x92002u);
    if (x86_cc(c, 14)) { goto L_92036; }
L_92004:
    X86_TICK(c, 13);
    // 092004  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x92004u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092007  mov edx, edi
    X86_AT(c, 0x92007u);
    c.r[2] = c.r[7];
    // 092009  cmp edx, eax
    X86_AT(c, 0x92009u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 09200b  jl 0x9200e
    X86_AT(c, 0x9200bu);
    if (x86_cc(c, 12)) { goto L_9200e; }
    X86_TICK(c, 3);
    // 09200d  xchg edx, eax
    X86_AT(c, 0x9200du);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_9200e:
    X86_TICK(c, 2);
    // 09200e  mov esi, edx
    X86_AT(c, 0x9200eu);
    c.r[6] = c.r[2];
L_92010:
    X86_TICK(c, 62);
    // 092010  mov ecx, esi
    X86_AT(c, 0x92010u);
    c.r[1] = c.r[6];
    // 092012  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92012u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092014  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92014u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092017  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x92017u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 09201a  push esi
    X86_AT(c, 0x9201au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09201b  push edi
    X86_AT(c, 0x9201bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09201c  mov esi, eax
    X86_AT(c, 0x9201cu);
    c.r[6] = c.r[0];
    // 09201e  mov edi, edx
    X86_AT(c, 0x9201eu);
    c.r[7] = c.r[2];
    // 092020  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92020u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092022  pop edi
    X86_AT(c, 0x92022u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092023  pop esi
    X86_AT(c, 0x92023u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092024  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x92024u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 092027  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x92027u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 09202a  sub edi, esi
    X86_AT(c, 0x9202au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 09202c  add dword ptr [ebx], esi
    X86_AT(c, 0x9202cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_9202e:
    X86_TICK(c, 7);
    // 09202e  and edi, edi
    X86_AT(c, 0x9202eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092030  ja 0x91d69
    X86_AT(c, 0x92030u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x91d69u); goto L_91d69; }
L_92036:
    X86_TICK(c, 12);
    // 092036  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x92036u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 09203a  jne 0x92040
    X86_AT(c, 0x9203au);
    if (x86_cc(c, 5)) { goto L_92040; }
    X86_TICK(c, 7);
    // 09203c  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x9203cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_92040:
    X86_TICK(c, 13);
    // 092040  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92040u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092043  mov dword ptr [0x8a450], eax
    X86_AT(c, 0x92043u);
    wr32((c.sbase[3] + (uint32_t)(0x8A450u)), c.r[0]);
    // 092048  jmp 0x92178
    X86_AT(c, 0x92048u);
    goto L_92178;
L_92178:
    X86_TICK(c, 12);
    // 092178  cmp word ptr [0x8a7de], 0
    X86_AT(c, 0x92178u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A7DEu))), 0x0u, 0, 2);
    // 092180  je 0x92188
    X86_AT(c, 0x92180u);
    if (x86_cc(c, 4)) { goto L_92188; }
    X86_TICK(c, 14);
    // 092182  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x92182u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 092186  jmp 0x92192
    X86_AT(c, 0x92186u);
    goto L_92192;
L_92188:
    X86_TICK(c, 6);
    // 092188  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x92188u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 09218c  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x9218cu);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
L_92192:
    X86_TICK(c, 28);
    // 092192  pop edi
    X86_AT(c, 0x92192u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092193  pop esi
    X86_AT(c, 0x92193u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092194  pop ebx
    X86_AT(c, 0x92194u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092195  leave 
    X86_AT(c, 0x92195u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092196  ret 0xc
    X86_AT(c, 0x92196u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x9202eu, "ran off the end of a function");
}
void f_000921a0(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0921a0  enter 4, 0
    X86_AT(c, 0x921a0u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0921a4  push ebx
    X86_AT(c, 0x921a4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0921a5  push esi
    X86_AT(c, 0x921a5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0921a6  push edi
    X86_AT(c, 0x921a6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0921a7  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x921a7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0921aa  mov ebx, edi
    X86_AT(c, 0x921aau);
    c.r[3] = c.r[7];
    // 0921ac  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x921acu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 0921b0  jne 0x921c2
    X86_AT(c, 0x921b0u);
    if (x86_cc(c, 5)) { goto L_921c2; }
    X86_TICK(c, 18);
    // 0921b2  mov ax, 5
    X86_AT(c, 0x921b2u);
    s16(c, 0, 0x5u);
    // 0921b6  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x921b6u);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
    // 0921bc  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x921bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0921c0  jmp 0x92202
    X86_AT(c, 0x921c0u);
    goto L_92202;
L_921c2:
    X86_TICK(c, 12);
    // 0921c2  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x921c2u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 0921c6  je 0x921ce
    X86_AT(c, 0x921c6u);
    if (x86_cc(c, 4)) { goto L_921ce; }
    X86_TICK(c, 9);
    // 0921c8  push edi
    X86_AT(c, 0x921c8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0921c9  call 0x93780
    X86_AT(c, 0x921c9u);
    push32(c, 0x921ceu); x86_call_known(c, 0x93780u, f_00093780); X86_RET(c, 0x921ceu);
L_921ce:
    X86_TICK(c, 19);
    // 0921ce  and byte ptr [ebx + 0xd], 0xf7
    X86_AT(c, 0x921ceu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xF7u, 1)); }
    // 0921d2  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x921d2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 0921d6  jne 0x921df
    X86_AT(c, 0x921d6u);
    if (x86_cc(c, 5)) { goto L_921df; }
    X86_TICK(c, 2);
    // 0921d8  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x921d8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_921df:
    X86_TICK(c, 36);
    // 0921df  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x921dfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0921e2  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x921e2u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 0921e6  xchg esi, eax
    X86_AT(c, 0x921e6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0921e7  and esi, esi
    X86_AT(c, 0x921e7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0921e9  jl 0x921f3
    X86_AT(c, 0x921e9u);
    if (x86_cc(c, 12)) { goto L_921f3; }
    X86_TICK(c, 7);
    // 0921eb  cmp esi, 0x7fffffff
    X86_AT(c, 0x921ebu);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 0921f1  jle 0x921fe
    X86_AT(c, 0x921f1u);
    if (x86_cc(c, 14)) { goto L_921fe; }
L_921f3:
    X86_TICK(c, 9);
    // 0921f3  mov word ptr [0x8a7de], 1
    X86_AT(c, 0x921f3u);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), 0x1u);
    // 0921fc  jmp 0x92202
    X86_AT(c, 0x921fcu);
    goto L_92202;
L_921fe:
    X86_TICK(c, 7);
    // 0921fe  and esi, esi
    X86_AT(c, 0x921feu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092200  jne 0x92206
    X86_AT(c, 0x92200u);
    if (x86_cc(c, 5)) { goto L_92206; }
L_92202:
    X86_TICK(c, 9);
    // 092202  sub eax, eax
    X86_AT(c, 0x92202u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092204  jmp 0x9221c
    X86_AT(c, 0x92204u);
    goto L_9221c;
L_92206:
    X86_TICK(c, 16);
    // 092206  push esi
    X86_AT(c, 0x92206u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092207  push dword ptr [ebp + 8]
    X86_AT(c, 0x92207u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09220a  push edi
    X86_AT(c, 0x9220au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09220b  call 0x91d38
    X86_AT(c, 0x9220bu);
    push32(c, 0x92210u); x86_call_known(c, 0x91d38u, f_00091d38); X86_RET(c, 0x92210u);
    X86_TICK(c, 48);
    // 092210  mov eax, dword ptr [0x8a450]
    X86_AT(c, 0x92210u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A450u)));
    // 092215  cdq 
    X86_AT(c, 0x92215u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 092216  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0x92216u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0x92216u);
    // 092219  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92219u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_9221c:
    X86_TICK(c, 28);
    // 09221c  pop edi
    X86_AT(c, 0x9221cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09221d  pop esi
    X86_AT(c, 0x9221du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09221e  pop ebx
    X86_AT(c, 0x9221eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09221f  leave 
    X86_AT(c, 0x9221fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092220  ret 
    X86_AT(c, 0x92220u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x921a0u, "ran off the end of a function");
}
}

#include "p_game_funcs.h"
namespace p_game {
void f_000c5f0c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0c5f0c  push ebp
    X86_AT(c, 0xc5f0cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5f0d  mov ebp, esp
    X86_AT(c, 0xc5f0du);
    c.r[5] = c.r[4];
    // 0c5f0f  sub esp, 0xc
    X86_AT(c, 0xc5f0fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0c5f12  push ebx
    X86_AT(c, 0xc5f12u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c5f13  push esi
    X86_AT(c, 0xc5f13u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c5f14  push edi
    X86_AT(c, 0xc5f14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5f15  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc5f15u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c5f18  sub eax, eax
    X86_AT(c, 0xc5f18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c5f1a  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc5f1au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0c5f1d  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc5f1du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_c5f20:
    X86_TICK(c, 9);
    // 0c5f20  push edi
    X86_AT(c, 0xc5f20u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5f21  call 0xc7dc8
    X86_AT(c, 0xc5f21u);
    push32(c, 0xc5f26u); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xc5f26u);
    X86_TICK(c, 11);
    // 0c5f26  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xc5f26u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0c5f29  add esp, 4
    X86_AT(c, 0xc5f29u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5f2c  cmp al, 1
    X86_AT(c, 0xc5f2cu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 0c5f2e  je 0xc5f80
    X86_AT(c, 0xc5f2eu);
    if (x86_cc(c, 4)) { goto L_c5f80; }
    X86_TICK(c, 7);
    // 0c5f30  cmp al, 4
    X86_AT(c, 0xc5f30u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 0c5f32  je 0xc5f80
    X86_AT(c, 0xc5f32u);
    if (x86_cc(c, 4)) { goto L_c5f80; }
    X86_TICK(c, 11);
    // 0c5f34  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xc5f34u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0c5f37  cmp al, 0x30
    X86_AT(c, 0xc5f37u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0c5f39  jb 0xc5f3f
    X86_AT(c, 0xc5f39u);
    if (x86_cc(c, 2)) { goto L_c5f3f; }
    X86_TICK(c, 7);
    // 0c5f3b  cmp al, 0x39
    X86_AT(c, 0xc5f3bu);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0c5f3d  jbe 0xc5f51
    X86_AT(c, 0xc5f3du);
    if (x86_cc(c, 6)) { goto L_c5f51; }
L_c5f3f:
    X86_TICK(c, 12);
    // 0c5f3f  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0xc5f3fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0c5f43  je 0xc5f20
    X86_AT(c, 0xc5f43u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc5f20u); goto L_c5f20; }
    X86_TICK(c, 9);
    // 0c5f45  push 1
    X86_AT(c, 0xc5f45u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c5f47  call 0xc5ca4
    X86_AT(c, 0xc5f47u);
    push32(c, 0xc5f4cu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xc5f4cu);
    X86_TICK(c, 9);
    // 0c5f4c  add esp, 4
    X86_AT(c, 0xc5f4cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5f4f  jmp 0xc5f20
    X86_AT(c, 0xc5f4fu);
    X86_POLL(c, 0xc5f20u); goto L_c5f20;
L_c5f51:
    X86_TICK(c, 17);
    // 0c5f51  lea esi, [ebp - 0xc]
    X86_AT(c, 0xc5f51u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0c5f54  push esi
    X86_AT(c, 0xc5f54u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c5f55  lea eax, [ebp - 8]
    X86_AT(c, 0xc5f55u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c5f58  push eax
    X86_AT(c, 0xc5f58u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5f59  push edi
    X86_AT(c, 0xc5f59u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5f5a  call 0xcac7c
    X86_AT(c, 0xc5f5au);
    push32(c, 0xc5f5fu); x86_call_known(c, 0xcac7cu, f_000cac7c); X86_RET(c, 0xc5f5fu);
    X86_TICK(c, 22);
    // 0c5f5f  push dword ptr [esi]
    X86_AT(c, 0xc5f5fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0c5f61  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc5f61u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c5f64  add eax, 2
    X86_AT(c, 0xc5f64u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0c5f67  push eax
    X86_AT(c, 0xc5f67u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5f68  push edi
    X86_AT(c, 0xc5f68u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5f69  call 0xca9c8
    X86_AT(c, 0xc5f69u);
    push32(c, 0xc5f6eu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc5f6eu);
    X86_TICK(c, 2);
    // 0c5f6e  add esp, 0x18
    X86_AT(c, 0xc5f6eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c5f71:
    X86_TICK(c, 9);
    // 0c5f71  push edi
    X86_AT(c, 0xc5f71u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5f72  call 0xc7dc8
    X86_AT(c, 0xc5f72u);
    push32(c, 0xc5f77u); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xc5f77u);
    X86_TICK(c, 12);
    // 0c5f77  xchg ebx, eax
    X86_AT(c, 0xc5f77u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c5f78  add esp, 4
    X86_AT(c, 0xc5f78u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5f7b  cmp bl, 1
    X86_AT(c, 0xc5f7bu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c5f7e  jne 0xc5f8a
    X86_AT(c, 0xc5f7eu);
    if (x86_cc(c, 5)) { goto L_c5f8a; }
L_c5f80:
    X86_TICK(c, 9);
    // 0c5f80  mov eax, 0xffffffff
    X86_AT(c, 0xc5f80u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c5f85  jmp 0xc6001
    X86_AT(c, 0xc5f85u);
    goto L_c6001;
L_c5f8a:
    X86_TICK(c, 7);
    // 0c5f8a  cmp bl, 4
    X86_AT(c, 0xc5f8au);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c5f8d  jne 0xc5f95
    X86_AT(c, 0xc5f8du);
    if (x86_cc(c, 5)) { goto L_c5f95; }
    X86_TICK(c, 13);
    // 0c5f8f  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0xc5f8fu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0c5f93  jmp 0xc5ffe
    X86_AT(c, 0xc5f93u);
    goto L_c5ffe;
L_c5f95:
    X86_TICK(c, 7);
    // 0c5f95  cmp bl, 0x30
    X86_AT(c, 0xc5f95u);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0c5f98  jb 0xc5f9f
    X86_AT(c, 0xc5f98u);
    if (x86_cc(c, 2)) { goto L_c5f9f; }
    X86_TICK(c, 7);
    // 0c5f9a  cmp bl, 0x39
    X86_AT(c, 0xc5f9au);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 0c5f9d  jbe 0xc5fb4
    X86_AT(c, 0xc5f9du);
    if (x86_cc(c, 6)) { goto L_c5fb4; }
L_c5f9f:
    X86_TICK(c, 7);
    // 0c5f9f  cmp bl, 3
    X86_AT(c, 0xc5f9fu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c5fa2  je 0xc5fb4
    X86_AT(c, 0xc5fa2u);
    if (x86_cc(c, 4)) { goto L_c5fb4; }
    X86_TICK(c, 7);
    // 0c5fa4  and bl, bl
    X86_AT(c, 0xc5fa4u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c5fa6  je 0xc5f71
    X86_AT(c, 0xc5fa6u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc5f71u); goto L_c5f71; }
    X86_TICK(c, 9);
    // 0c5fa8  push 1
    X86_AT(c, 0xc5fa8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c5faa  call 0xc5ca4
    X86_AT(c, 0xc5faau);
    push32(c, 0xc5fafu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xc5fafu);
    X86_TICK(c, 9);
    // 0c5faf  add esp, 4
    X86_AT(c, 0xc5fafu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5fb2  jmp 0xc5f71
    X86_AT(c, 0xc5fb2u);
    X86_POLL(c, 0xc5f71u); goto L_c5f71;
L_c5fb4:
    X86_TICK(c, 7);
    // 0c5fb4  cmp bl, 3
    X86_AT(c, 0xc5fb4u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c5fb7  jne 0xc5fe6
    X86_AT(c, 0xc5fb7u);
    if (x86_cc(c, 5)) { goto L_c5fe6; }
    X86_TICK(c, 11);
    // 0c5fb9  push 0x20
    X86_AT(c, 0xc5fb9u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c5fbb  push edi
    X86_AT(c, 0xc5fbbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5fbc  call 0xca58c
    X86_AT(c, 0xc5fbcu);
    push32(c, 0xc5fc1u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xc5fc1u);
    X86_TICK(c, 17);
    // 0c5fc1  lea esi, [ebp - 0xc]
    X86_AT(c, 0xc5fc1u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0c5fc4  push esi
    X86_AT(c, 0xc5fc4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c5fc5  lea eax, [ebp - 8]
    X86_AT(c, 0xc5fc5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c5fc8  push eax
    X86_AT(c, 0xc5fc8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5fc9  push edi
    X86_AT(c, 0xc5fc9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5fca  call 0xcac7c
    X86_AT(c, 0xc5fcau);
    push32(c, 0xc5fcfu); x86_call_known(c, 0xcac7cu, f_000cac7c); X86_RET(c, 0xc5fcfu);
    X86_TICK(c, 22);
    // 0c5fcf  push dword ptr [esi]
    X86_AT(c, 0xc5fcfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0c5fd1  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc5fd1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c5fd4  sub eax, 2
    X86_AT(c, 0xc5fd4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0c5fd7  push eax
    X86_AT(c, 0xc5fd7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5fd8  push edi
    X86_AT(c, 0xc5fd8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5fd9  call 0xca9c8
    X86_AT(c, 0xc5fd9u);
    push32(c, 0xc5fdeu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc5fdeu);
    X86_TICK(c, 9);
    // 0c5fde  add esp, 0x20
    X86_AT(c, 0xc5fdeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c5fe1  jmp 0xc5f20
    X86_AT(c, 0xc5fe1u);
    X86_POLL(c, 0xc5f20u); goto L_c5f20;
L_c5fe6:
    X86_TICK(c, 23);
    // 0c5fe6  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0xc5fe6u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0c5fea  lea eax, [eax + eax*4]
    X86_AT(c, 0xc5feau);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0c5fed  add eax, eax
    X86_AT(c, 0xc5fedu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c5fef  movzx eax, ax
    X86_AT(c, 0xc5fefu);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0c5ff2  sub eax, 0x1e0
    X86_AT(c, 0xc5ff2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x1E0u, 0, 4); }
    // 0c5ff7  movzx ebx, bl
    X86_AT(c, 0xc5ff7u);
    c.r[3] = g8(c, 3);
    // 0c5ffa  lea edx, [ebx + eax*1]
    X86_AT(c, 0xc5ffau);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 0c5ffd  xchg edx, eax
    X86_AT(c, 0xc5ffdu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_c5ffe:
    X86_TICK(c, 2);
    // 0c5ffe  sub eax, 0x30
    X86_AT(c, 0xc5ffeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x30u, 0, 4); }
L_c6001:
    X86_TICK(c, 28);
    // 0c6001  pop edi
    X86_AT(c, 0xc6001u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6002  pop esi
    X86_AT(c, 0xc6002u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6003  pop ebx
    X86_AT(c, 0xc6003u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c6004  leave 
    X86_AT(c, 0xc6004u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6005  ret 
    X86_AT(c, 0xc6005u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5f0cu, "ran off the end of a function");
}
void f_000c6044(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0c6044  push 0xe
    X86_AT(c, 0xc6044u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c6046  push 0xb
    X86_AT(c, 0xc6046u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c6048  push 0xf
    X86_AT(c, 0xc6048u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c604a  push 0x13
    X86_AT(c, 0xc604au);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0c604c  push 0x1a
    X86_AT(c, 0xc604cu);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0c604e  push 0x146
    X86_AT(c, 0xc604eu);
    { uint32_t v = 0x146u; push32(c, v); }
    // 0c6053  push 0xd8
    X86_AT(c, 0xc6053u);
    { uint32_t v = 0xD8u; push32(c, v); }
    // 0c6058  push 0x40
    X86_AT(c, 0xc6058u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0c605a  push 0x18
    X86_AT(c, 0xc605au);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0c605c  push 0xe
    X86_AT(c, 0xc605cu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c605e  call 0xc9fbc
    X86_AT(c, 0xc605eu);
    push32(c, 0xc6063u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xc6063u);
    X86_TICK(c, 12);
    // 0c6063  add esp, 0x28
    X86_AT(c, 0xc6063u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c6066  ret 
    X86_AT(c, 0xc6066u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6044u, "ran off the end of a function");
}
void f_000c6094(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0c6094  push 0
    X86_AT(c, 0xc6094u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c6096  push 0xe
    X86_AT(c, 0xc6096u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c6098  call 0xca2d4
    X86_AT(c, 0xc6098u);
    push32(c, 0xc609du); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xc609du);
    X86_TICK(c, 14);
    // 0c609d  mov word ptr [0x43d90], 0
    X86_AT(c, 0xc609du);
    wr16((c.sbase[3] + (uint32_t)(0x43D90u)), 0x0u);
    // 0c60a6  add esp, 8
    X86_AT(c, 0xc60a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c60a9  ret 
    X86_AT(c, 0xc60a9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6094u, "ran off the end of a function");
}
void f_000c60ac(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0c60ac  push ebp
    X86_AT(c, 0xc60acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c60ad  mov ebp, esp
    X86_AT(c, 0xc60adu);
    c.r[5] = c.r[4];
    // 0c60af  push eax
    X86_AT(c, 0xc60afu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c60b0  push edi
    X86_AT(c, 0xc60b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c60b1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc60b1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c60b4  jmp 0xc60db
    X86_AT(c, 0xc60b4u);
    goto L_c60db;
L_c60db:
    X86_TICK(c, 20);
    // 0c60db  pop edi
    X86_AT(c, 0xc60dbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c60dc  leave 
    X86_AT(c, 0xc60dcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c60dd  ret 
    X86_AT(c, 0xc60ddu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc60acu, "ran off the end of a function");
}
void f_000c60e0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0c60e0  jmp 0xc6103
    X86_AT(c, 0xc60e0u);
    goto L_c6103;
L_c6103:
    X86_TICK(c, 10);
    // 0c6103  ret 
    X86_AT(c, 0xc6103u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc60e0u, "ran off the end of a function");
}
void f_000c6104(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0c6104  push ebp
    X86_AT(c, 0xc6104u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6105  mov ebp, esp
    X86_AT(c, 0xc6105u);
    c.r[5] = c.r[4];
    // 0c6107  push 0
    X86_AT(c, 0xc6107u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c6109  push dword ptr [ebp + 8]
    X86_AT(c, 0xc6109u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c610c  call 0xe836b
    X86_AT(c, 0xc610cu);
    push32(c, 0xc6111u); x86_call_known(c, 0xe836bu, f_000e836b); X86_RET(c, 0xc6111u);
    X86_TICK(c, 7);
    // 0c6111  and eax, eax
    X86_AT(c, 0xc6111u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c6113  je 0xc611c
    X86_AT(c, 0xc6113u);
    if (x86_cc(c, 4)) { goto L_c611c; }
    X86_TICK(c, 9);
    // 0c6115  mov eax, 0xffffffff
    X86_AT(c, 0xc6115u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c611a  jmp 0xc611e
    X86_AT(c, 0xc611au);
    goto L_c611e;
L_c611c:
    X86_TICK(c, 2);
    // 0c611c  sub eax, eax
    X86_AT(c, 0xc611cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c611e:
    X86_TICK(c, 18);
    // 0c611e  add esp, 8
    X86_AT(c, 0xc611eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c6121  leave 
    X86_AT(c, 0xc6121u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6122  ret 
    X86_AT(c, 0xc6122u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6104u, "ran off the end of a function");
}
void f_000c6124(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c6124  push ebp
    X86_AT(c, 0xc6124u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6125  mov ebp, esp
    X86_AT(c, 0xc6125u);
    c.r[5] = c.r[4];
    // 0c6127  push eax
    X86_AT(c, 0xc6127u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c6128  push edi
    X86_AT(c, 0xc6128u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6129  mov word ptr [ebp - 2], 0
    X86_AT(c, 0xc6129u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), 0x0u);
    // 0c612f  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xc612fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c6132  cmp edx, 3
    X86_AT(c, 0xc6132u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c6135  ja 0xc618e
    X86_AT(c, 0xc6135u);
    if (x86_cc(c, 7)) { goto L_c618e; }
    X86_TICK(c, 7);
    // 0c6137  jmp dword ptr cs:[edx*4 + 0xc613f]
    X86_AT(c, 0xc6137u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC613Fu)));
      switch (t) {
      case 0xc614fu: goto L_c614f;
      case 0xc6155u: goto L_c6155;
      case 0xc618eu: goto L_c618e;
      default: x86_jump(c, t); return; } }
L_c614f:
    X86_TICK(c, 9);
    // 0c614f  mov di, 0x20
    X86_AT(c, 0xc614fu);
    s16(c, 7, 0x20u);
    // 0c6153  jmp 0xc6159
    X86_AT(c, 0xc6153u);
    goto L_c6159;
L_c6155:
    X86_TICK(c, 2);
    // 0c6155  mov di, 0x21
    X86_AT(c, 0xc6155u);
    s16(c, 7, 0x21u);
L_c6159:
    X86_TICK(c, 21);
    // 0c6159  mov byte ptr [0x43dd9], 2
    X86_AT(c, 0xc6159u);
    wr8((c.sbase[3] + (uint32_t)(0x43DD9u)), 0x2u);
    // 0c6160  mov eax, edi
    X86_AT(c, 0xc6160u);
    c.r[0] = c.r[7];
    // 0c6162  mov byte ptr [0x43dd8], al
    X86_AT(c, 0xc6162u);
    wr8((c.sbase[3] + (uint32_t)(0x43DD8u)), g8(c, 0));
    // 0c6167  mov byte ptr [0x43de1], 0
    X86_AT(c, 0xc6167u);
    wr8((c.sbase[3] + (uint32_t)(0x43DE1u)), 0x0u);
    // 0c616e  push 0x43df4
    X86_AT(c, 0xc616eu);
    { uint32_t v = 0x43DF4u; push32(c, v); }
    // 0c6173  push 0x43dd8
    X86_AT(c, 0xc6173u);
    { uint32_t v = 0x43DD8u; push32(c, v); }
    // 0c6178  push 0x93
    X86_AT(c, 0xc6178u);
    { uint32_t v = 0x93u; push32(c, v); }
    // 0c617d  call 0xe844a
    X86_AT(c, 0xc617du);
    push32(c, 0xc6182u); x86_call_known(c, 0xe844au, f_000e844a); X86_RET(c, 0xc6182u);
    X86_TICK(c, 14);
    // 0c6182  add esp, 0xc
    X86_AT(c, 0xc6182u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c6185  cmp byte ptr [0x43df5], 2
    X86_AT(c, 0xc6185u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x43DF5u))), 0x2u, 0, 1);
    // 0c618c  jne 0xc6198
    X86_AT(c, 0xc618cu);
    if (x86_cc(c, 5)) { goto L_c6198; }
L_c618e:
    X86_TICK(c, 9);
    // 0c618e  mov eax, 0xffffffff
    X86_AT(c, 0xc618eu);
    c.r[0] = 0xFFFFFFFFu;
    // 0c6193  jmp 0xc620d
    X86_AT(c, 0xc6193u);
    goto L_c620d;
L_c6198:
    X86_TICK(c, 12);
    // 0c6198  test byte ptr [0x43e00], 1
    X86_AT(c, 0xc6198u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x43E00u))) & 0x1u, 1);
    // 0c619f  je 0xc61a8
    X86_AT(c, 0xc619fu);
    if (x86_cc(c, 4)) { goto L_c61a8; }
    X86_TICK(c, 9);
    // 0c61a1  mov eax, 3
    X86_AT(c, 0xc61a1u);
    c.r[0] = 0x3u;
    // 0c61a6  jmp 0xc620d
    X86_AT(c, 0xc61a6u);
    goto L_c620d;
L_c61a8:
    X86_TICK(c, 12);
    // 0c61a8  test byte ptr [0x43e00], 2
    X86_AT(c, 0xc61a8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x43E00u))) & 0x2u, 1);
    // 0c61af  je 0xc61b8
    X86_AT(c, 0xc61afu);
    if (x86_cc(c, 4)) { goto L_c61b8; }
    X86_TICK(c, 9);
    // 0c61b1  mov eax, 2
    X86_AT(c, 0xc61b1u);
    c.r[0] = 0x2u;
    // 0c61b6  jmp 0xc620d
    X86_AT(c, 0xc61b6u);
    goto L_c620d;
L_c61b8:
    X86_TICK(c, 25);
    // 0c61b8  mov byte ptr [0x43dd9], 7
    X86_AT(c, 0xc61b8u);
    wr8((c.sbase[3] + (uint32_t)(0x43DD9u)), 0x7u);
    // 0c61bf  mov eax, edi
    X86_AT(c, 0xc61bfu);
    c.r[0] = c.r[7];
    // 0c61c1  mov byte ptr [0x43dd8], al
    X86_AT(c, 0xc61c1u);
    wr8((c.sbase[3] + (uint32_t)(0x43DD8u)), g8(c, 0));
    // 0c61c6  mov word ptr [0x43de0], 1
    X86_AT(c, 0xc61c6u);
    wr16((c.sbase[3] + (uint32_t)(0x43DE0u)), 0x1u);
    // 0c61cf  mov word ptr [0x43de4], 1
    X86_AT(c, 0xc61cfu);
    wr16((c.sbase[3] + (uint32_t)(0x43DE4u)), 0x1u);
    // 0c61d8  mov word ptr [0x43ddc], 1
    X86_AT(c, 0xc61d8u);
    wr16((c.sbase[3] + (uint32_t)(0x43DDCu)), 0x1u);
    // 0c61e1  push 0x43df4
    X86_AT(c, 0xc61e1u);
    { uint32_t v = 0x43DF4u; push32(c, v); }
    // 0c61e6  push 0x43dd8
    X86_AT(c, 0xc61e6u);
    { uint32_t v = 0x43DD8u; push32(c, v); }
    // 0c61eb  push 0x93
    X86_AT(c, 0xc61ebu);
    { uint32_t v = 0x93u; push32(c, v); }
    // 0c61f0  call 0xe844a
    X86_AT(c, 0xc61f0u);
    push32(c, 0xc61f5u); x86_call_known(c, 0xe844au, f_000e844a); X86_RET(c, 0xc61f5u);
    X86_TICK(c, 14);
    // 0c61f5  add esp, 0xc
    X86_AT(c, 0xc61f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c61f8  cmp byte ptr [0x43df5], 0
    X86_AT(c, 0xc61f8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x43DF5u))), 0x0u, 0, 1);
    // 0c61ff  jne 0xc6208
    X86_AT(c, 0xc61ffu);
    if (x86_cc(c, 5)) { goto L_c6208; }
    X86_TICK(c, 9);
    // 0c6201  mov eax, 1
    X86_AT(c, 0xc6201u);
    c.r[0] = 0x1u;
    // 0c6206  jmp 0xc620d
    X86_AT(c, 0xc6206u);
    goto L_c620d;
L_c6208:
    X86_TICK(c, 2);
    // 0c6208  mov eax, 4
    X86_AT(c, 0xc6208u);
    c.r[0] = 0x4u;
L_c620d:
    X86_TICK(c, 20);
    // 0c620d  pop edi
    X86_AT(c, 0xc620du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c620e  leave 
    X86_AT(c, 0xc620eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c620f  ret 
    X86_AT(c, 0xc620fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6124u, "ran off the end of a function");
}
void f_000c6210(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0c6210  push ebp
    X86_AT(c, 0xc6210u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6211  mov ebp, esp
    X86_AT(c, 0xc6211u);
    c.r[5] = c.r[4];
    // 0c6213  push edi
    X86_AT(c, 0xc6213u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6214  push dword ptr [ebp + 8]
    X86_AT(c, 0xc6214u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c6217  call 0xc6124
    X86_AT(c, 0xc6217u);
    push32(c, 0xc621cu); x86_call_known(c, 0xc6124u, f_000c6124); X86_RET(c, 0xc621cu);
    X86_TICK(c, 14);
    // 0c621c  add esp, 4
    X86_AT(c, 0xc621cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c621f  xchg edx, eax
    X86_AT(c, 0xc621fu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0c6220  inc edx
    X86_AT(c, 0xc6220u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0c6221  cmp edx, 5
    X86_AT(c, 0xc6221u);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0c6224  ja 0xc6265
    X86_AT(c, 0xc6224u);
    if (x86_cc(c, 7)) { goto L_c6265; }
    X86_TICK(c, 7);
    // 0c6226  jmp dword ptr cs:[edx*4 + 0xc622e]
    X86_AT(c, 0xc6226u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC622Eu)));
      switch (t) {
      case 0xc6246u: goto L_c6246;
      case 0xc624au: goto L_c624a;
      case 0xc6251u: goto L_c6251;
      case 0xc6258u: goto L_c6258;
      case 0xc6265u: goto L_c6265;
      case 0xc6277u: goto L_c6277;
      default: x86_jump(c, t); return; } }
L_c6246:
    X86_TICK(c, 9);
    // 0c6246  sub eax, eax
    X86_AT(c, 0xc6246u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c6248  jmp 0xc6287
    X86_AT(c, 0xc6248u);
    goto L_c6287;
L_c624a:
    X86_TICK(c, 9);
    // 0c624a  push 0x181c
    X86_AT(c, 0xc624au);
    { uint32_t v = 0x181Cu; push32(c, v); }
    // 0c624f  jmp 0xc625d
    X86_AT(c, 0xc624fu);
    goto L_c625d;
L_c6251:
    X86_TICK(c, 9);
    // 0c6251  push 0x188c
    X86_AT(c, 0xc6251u);
    { uint32_t v = 0x188Cu; push32(c, v); }
    // 0c6256  jmp 0xc625d
    X86_AT(c, 0xc6256u);
    goto L_c625d;
L_c6258:
    X86_TICK(c, 2);
    // 0c6258  push 0x1900
    X86_AT(c, 0xc6258u);
    { uint32_t v = 0x1900u; push32(c, v); }
L_c625d:
    X86_TICK(c, 7);
    // 0c625d  call 0xcad60
    X86_AT(c, 0xc625du);
    push32(c, 0xc6262u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xc6262u);
    X86_TICK(c, 2);
    // 0c6262  add esp, 4
    X86_AT(c, 0xc6262u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c6265:
    X86_TICK(c, 9);
    // 0c6265  push 2
    X86_AT(c, 0xc6265u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6267  call 0xc81e4
    X86_AT(c, 0xc6267u);
    push32(c, 0xc626cu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xc626cu);
    X86_TICK(c, 12);
    // 0c626c  movzx edi, al
    X86_AT(c, 0xc626cu);
    c.r[7] = g8(c, 0);
    // 0c626f  add esp, 4
    X86_AT(c, 0xc626fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6272  cmp edi, 1
    X86_AT(c, 0xc6272u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c6275  jne 0xc627e
    X86_AT(c, 0xc6275u);
    if (x86_cc(c, 5)) { goto L_c627e; }
L_c6277:
    X86_TICK(c, 9);
    // 0c6277  mov eax, 0xffffffff
    X86_AT(c, 0xc6277u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c627c  jmp 0xc6287
    X86_AT(c, 0xc627cu);
    goto L_c6287;
L_c627e:
    X86_TICK(c, 7);
    // 0c627e  and edi, edi
    X86_AT(c, 0xc627eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c6280  je 0xc6265
    X86_AT(c, 0xc6280u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc6265u); goto L_c6265; }
    X86_TICK(c, 2);
    // 0c6282  mov eax, 5
    X86_AT(c, 0xc6282u);
    c.r[0] = 0x5u;
L_c6287:
    X86_TICK(c, 20);
    // 0c6287  pop edi
    X86_AT(c, 0xc6287u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6288  leave 
    X86_AT(c, 0xc6288u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6289  ret 
    X86_AT(c, 0xc6289u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6210u, "ran off the end of a function");
}
void f_000c628c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0c628c  push ebp
    X86_AT(c, 0xc628cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c628d  mov ebp, esp
    X86_AT(c, 0xc628du);
    c.r[5] = c.r[4];
    // 0c628f  push edi
    X86_AT(c, 0xc628fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6290  push dword ptr [ebp + 8]
    X86_AT(c, 0xc6290u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c6293  call 0xc6124
    X86_AT(c, 0xc6293u);
    push32(c, 0xc6298u); x86_call_known(c, 0xc6124u, f_000c6124); X86_RET(c, 0xc6298u);
    X86_TICK(c, 14);
    // 0c6298  add esp, 4
    X86_AT(c, 0xc6298u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c629b  xchg edx, eax
    X86_AT(c, 0xc629bu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0c629c  inc edx
    X86_AT(c, 0xc629cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0c629d  cmp edx, 5
    X86_AT(c, 0xc629du);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0c62a0  ja 0xc635b
    X86_AT(c, 0xc62a0u);
    if (x86_cc(c, 7)) { goto L_c635b; }
    X86_TICK(c, 7);
    // 0c62a6  jmp dword ptr cs:[edx*4 + 0xc62ae]
    X86_AT(c, 0xc62a6u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC62AEu)));
      switch (t) {
      case 0xc62c6u: goto L_c62c6;
      case 0xc62feu: goto L_c62fe;
      case 0xc6328u: goto L_c6328;
      case 0xc6343u: goto L_c6343;
      case 0xc634au: goto L_c634a;
      case 0xc635bu: goto L_c635b;
      default: x86_jump(c, t); return; } }
L_c62c6:
    X86_TICK(c, 12);
    // 0c62c6  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xc62c6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0c62c9  call 0xc6104
    X86_AT(c, 0xc62c9u);
    push32(c, 0xc62ceu); x86_call_known(c, 0xc6104u, f_000c6104); X86_RET(c, 0xc62ceu);
    X86_TICK(c, 9);
    // 0c62ce  add esp, 4
    X86_AT(c, 0xc62ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c62d1  and eax, eax
    X86_AT(c, 0xc62d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c62d3  je 0xc635b
    X86_AT(c, 0xc62d3u);
    if (x86_cc(c, 4)) { goto L_c635b; }
    X86_TICK(c, 9);
    // 0c62d9  push 0x1974
    X86_AT(c, 0xc62d9u);
    { uint32_t v = 0x1974u; push32(c, v); }
    // 0c62de  call 0xcad60
    X86_AT(c, 0xc62deu);
    push32(c, 0xc62e3u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xc62e3u);
    X86_TICK(c, 2);
    // 0c62e3  add esp, 4
    X86_AT(c, 0xc62e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c62e6:
    X86_TICK(c, 9);
    // 0c62e6  push 2
    X86_AT(c, 0xc62e6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c62e8  call 0xc81e4
    X86_AT(c, 0xc62e8u);
    push32(c, 0xc62edu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xc62edu);
    X86_TICK(c, 12);
    // 0c62ed  movzx edi, al
    X86_AT(c, 0xc62edu);
    c.r[7] = g8(c, 0);
    // 0c62f0  add esp, 4
    X86_AT(c, 0xc62f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c62f3  cmp edi, 1
    X86_AT(c, 0xc62f3u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c62f6  je 0xc6343
    X86_AT(c, 0xc62f6u);
    if (x86_cc(c, 4)) { goto L_c6343; }
    X86_TICK(c, 7);
    // 0c62f8  and edi, edi
    X86_AT(c, 0xc62f8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c62fa  je 0xc62e6
    X86_AT(c, 0xc62fau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc62e6u); goto L_c62e6; }
    X86_TICK(c, 7);
    // 0c62fc  jmp 0xc635b
    X86_AT(c, 0xc62fcu);
    goto L_c635b;
L_c62fe:
    X86_TICK(c, 9);
    // 0c62fe  push 0x19e8
    X86_AT(c, 0xc62feu);
    { uint32_t v = 0x19E8u; push32(c, v); }
    // 0c6303  call 0xcad60
    X86_AT(c, 0xc6303u);
    push32(c, 0xc6308u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xc6308u);
    X86_TICK(c, 2);
    // 0c6308  add esp, 4
    X86_AT(c, 0xc6308u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c630b:
    X86_TICK(c, 9);
    // 0c630b  push 2
    X86_AT(c, 0xc630bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c630d  call 0xc81e4
    X86_AT(c, 0xc630du);
    push32(c, 0xc6312u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xc6312u);
    X86_TICK(c, 12);
    // 0c6312  movzx edi, al
    X86_AT(c, 0xc6312u);
    c.r[7] = g8(c, 0);
    // 0c6315  add esp, 4
    X86_AT(c, 0xc6315u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6318  cmp edi, 1
    X86_AT(c, 0xc6318u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c631b  je 0xc6343
    X86_AT(c, 0xc631bu);
    if (x86_cc(c, 4)) { goto L_c6343; }
    X86_TICK(c, 7);
    // 0c631d  and edi, edi
    X86_AT(c, 0xc631du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c631f  je 0xc630b
    X86_AT(c, 0xc631fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc630bu); goto L_c630b; }
    X86_TICK(c, 9);
    // 0c6321  mov eax, 5
    X86_AT(c, 0xc6321u);
    c.r[0] = 0x5u;
    // 0c6326  jmp 0xc635d
    X86_AT(c, 0xc6326u);
    goto L_c635d;
L_c6328:
    X86_TICK(c, 9);
    // 0c6328  push 0x1a68
    X86_AT(c, 0xc6328u);
    { uint32_t v = 0x1A68u; push32(c, v); }
    // 0c632d  call 0xcad60
    X86_AT(c, 0xc632du);
    push32(c, 0xc6332u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xc6332u);
    X86_TICK(c, 2);
    // 0c6332  add esp, 4
    X86_AT(c, 0xc6332u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c6335:
    X86_TICK(c, 9);
    // 0c6335  push 2
    X86_AT(c, 0xc6335u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c6337  call 0xc81e4
    X86_AT(c, 0xc6337u);
    push32(c, 0xc633cu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xc633cu);
    X86_TICK(c, 9);
    // 0c633c  add esp, 4
    X86_AT(c, 0xc633cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c633f  and al, al
    X86_AT(c, 0xc633fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c6341  je 0xc6335
    X86_AT(c, 0xc6341u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc6335u); goto L_c6335; }
L_c6343:
    X86_TICK(c, 9);
    // 0c6343  mov eax, 0xffffffff
    X86_AT(c, 0xc6343u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c6348  jmp 0xc635d
    X86_AT(c, 0xc6348u);
    goto L_c635d;
L_c634a:
    X86_TICK(c, 9);
    // 0c634a  push 0x1ae0
    X86_AT(c, 0xc634au);
    { uint32_t v = 0x1AE0u; push32(c, v); }
    // 0c634f  call 0xcad60
    X86_AT(c, 0xc634fu);
    push32(c, 0xc6354u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xc6354u);
    X86_TICK(c, 11);
    // 0c6354  sub eax, eax
    X86_AT(c, 0xc6354u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c6356  add esp, 4
    X86_AT(c, 0xc6356u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6359  jmp 0xc635d
    X86_AT(c, 0xc6359u);
    goto L_c635d;
L_c635b:
    X86_TICK(c, 2);
    // 0c635b  sub eax, eax
    X86_AT(c, 0xc635bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c635d:
    X86_TICK(c, 20);
    // 0c635d  pop edi
    X86_AT(c, 0xc635du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c635e  leave 
    X86_AT(c, 0xc635eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c635f  ret 
    X86_AT(c, 0xc635fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc628cu, "ran off the end of a function");
}
void f_000c6628(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0c6628  pop edi
    X86_AT(c, 0xc6628u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6629  pop ebx
    X86_AT(c, 0xc6629u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c662a  leave 
    X86_AT(c, 0xc662au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c662b  ret 
    X86_AT(c, 0xc662bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6628u, "ran off the end of a function");
}
void f_000c6a28(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0c6a28  push esi
    X86_AT(c, 0xc6a28u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c6a29  push edi
    X86_AT(c, 0xc6a29u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6a2a  movzx edx, byte ptr [0xb02fc]
    X86_AT(c, 0xc6a2au);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(0xB02FCu)));
    // 0c6a31  cmp edx, 3
    X86_AT(c, 0xc6a31u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c6a34  ja 0xc6a91
    X86_AT(c, 0xc6a34u);
    if (x86_cc(c, 7)) { goto L_c6a91; }
    X86_TICK(c, 7);
    // 0c6a36  jmp dword ptr cs:[edx*4 + 0xc6a3e]
    X86_AT(c, 0xc6a36u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC6A3Eu)));
      switch (t) {
      case 0xc6a4eu: goto L_c6a4e;
      case 0xc6a5eu: goto L_c6a5e;
      case 0xc6a6fu: goto L_c6a6f;
      case 0xc6a80u: goto L_c6a80;
      default: x86_jump(c, t); return; } }
L_c6a4e:
    X86_TICK(c, 13);
    // 0c6a4e  sub edi, edi
    X86_AT(c, 0xc6a4eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c6a50  mov dword ptr [0x42b80], 0x80
    X86_AT(c, 0xc6a50u);
    wr32((c.sbase[3] + (uint32_t)(0x42B80u)), 0x80u);
    // 0c6a5a  mov esi, edi
    X86_AT(c, 0xc6a5au);
    c.r[6] = c.r[7];
    // 0c6a5c  jmp 0xc6aa2
    X86_AT(c, 0xc6a5cu);
    goto L_c6aa2;
L_c6a5e:
    X86_TICK(c, 11);
    // 0c6a5e  mov edi, 2
    X86_AT(c, 0xc6a5eu);
    c.r[7] = 0x2u;
    // 0c6a63  mov dword ptr [0x42b80], 0x81
    X86_AT(c, 0xc6a63u);
    wr32((c.sbase[3] + (uint32_t)(0x42B80u)), 0x81u);
    // 0c6a6d  jmp 0xc6aa0
    X86_AT(c, 0xc6a6du);
    goto L_c6aa0;
L_c6a6f:
    X86_TICK(c, 11);
    // 0c6a6f  mov edi, 4
    X86_AT(c, 0xc6a6fu);
    c.r[7] = 0x4u;
    // 0c6a74  mov dword ptr [0x42b80], 0x82
    X86_AT(c, 0xc6a74u);
    wr32((c.sbase[3] + (uint32_t)(0x42B80u)), 0x82u);
    // 0c6a7e  jmp 0xc6aa0
    X86_AT(c, 0xc6a7eu);
    goto L_c6aa0;
L_c6a80:
    X86_TICK(c, 11);
    // 0c6a80  mov edi, 6
    X86_AT(c, 0xc6a80u);
    c.r[7] = 0x6u;
    // 0c6a85  mov dword ptr [0x42b80], 0x83
    X86_AT(c, 0xc6a85u);
    wr32((c.sbase[3] + (uint32_t)(0x42B80u)), 0x83u);
    // 0c6a8f  jmp 0xc6aa0
    X86_AT(c, 0xc6a8fu);
    goto L_c6aa0;
L_c6a91:
    X86_TICK(c, 4);
    // 0c6a91  mov edi, 0x14
    X86_AT(c, 0xc6a91u);
    c.r[7] = 0x14u;
    // 0c6a96  mov dword ptr [0x42b80], 0x8a
    X86_AT(c, 0xc6a96u);
    wr32((c.sbase[3] + (uint32_t)(0x42B80u)), 0x8Au);
L_c6aa0:
    X86_TICK(c, 2);
    // 0c6aa0  sub esi, esi
    X86_AT(c, 0xc6aa0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c6aa2:
    X86_TICK(c, 21);
    // 0c6aa2  mov dword ptr [0xb0332], esi
    X86_AT(c, 0xc6aa2u);
    wr32((c.sbase[3] + (uint32_t)(0xB0332u)), c.r[6]);
    // 0c6aa8  mov dword ptr [0x43190], 1
    X86_AT(c, 0xc6aa8u);
    wr32((c.sbase[3] + (uint32_t)(0x43190u)), 0x1u);
    // 0c6ab2  mov eax, 5
    X86_AT(c, 0xc6ab2u);
    c.r[0] = 0x5u;
    // 0c6ab7  mov dword ptr [0x43194], eax
    X86_AT(c, 0xc6ab7u);
    wr32((c.sbase[3] + (uint32_t)(0x43194u)), c.r[0]);
    // 0c6abc  mov dword ptr [0x43198], eax
    X86_AT(c, 0xc6abcu);
    wr32((c.sbase[3] + (uint32_t)(0x43198u)), c.r[0]);
    // 0c6ac1  mov dword ptr [0x4319c], edi
    X86_AT(c, 0xc6ac1u);
    wr32((c.sbase[3] + (uint32_t)(0x4319Cu)), c.r[7]);
    // 0c6ac7  mov dword ptr [0x431a0], 0xffffffff
    X86_AT(c, 0xc6ac7u);
    wr32((c.sbase[3] + (uint32_t)(0x431A0u)), 0xFFFFFFFFu);
    // 0c6ad1  call 0xc6bb0
    X86_AT(c, 0xc6ad1u);
    push32(c, 0xc6ad6u); x86_call_known(c, 0xc6bb0u, f_000c6bb0); X86_RET(c, 0xc6ad6u);
    X86_TICK(c, 18);
    // 0c6ad6  pop edi
    X86_AT(c, 0xc6ad6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6ad7  pop esi
    X86_AT(c, 0xc6ad7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6ad8  ret 
    X86_AT(c, 0xc6ad8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6a28u, "ran off the end of a function");
}
void f_000c6adc(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0c6adc  push ebp
    X86_AT(c, 0xc6adcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6add  mov ebp, esp
    X86_AT(c, 0xc6addu);
    c.r[5] = c.r[4];
    // 0c6adf  push esi
    X86_AT(c, 0xc6adfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c6ae0  push edi
    X86_AT(c, 0xc6ae0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6ae1  mov edi, 1
    X86_AT(c, 0xc6ae1u);
    c.r[7] = 0x1u;
L_c6ae6:
    X86_TICK(c, 16);
    // 0c6ae6  lea eax, [edi*8]
    X86_AT(c, 0xc6ae6u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0c6aed  lea eax, [eax + eax*2]
    X86_AT(c, 0xc6aedu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c6af0  cmp dword ptr [eax + 0x43190], 0
    X86_AT(c, 0xc6af0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x43190u))), 0x0u, 0, 4);
    // 0c6af7  je 0xc6b04
    X86_AT(c, 0xc6af7u);
    if (x86_cc(c, 4)) { goto L_c6b04; }
    X86_TICK(c, 7);
    // 0c6af9  cmp edi, 0x80
    X86_AT(c, 0xc6af9u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0c6aff  jge 0xc6b04
    X86_AT(c, 0xc6affu);
    if (x86_cc(c, 13)) { goto L_c6b04; }
    X86_TICK(c, 9);
    // 0c6b01  inc edi
    X86_AT(c, 0xc6b01u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c6b02  jmp 0xc6ae6
    X86_AT(c, 0xc6b02u);
    X86_POLL(c, 0xc6ae6u); goto L_c6ae6;
L_c6b04:
    X86_TICK(c, 7);
    // 0c6b04  cmp edi, 0x80
    X86_AT(c, 0xc6b04u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0c6b0a  jl 0xc6b13
    X86_AT(c, 0xc6b0au);
    if (x86_cc(c, 12)) { goto L_c6b13; }
    X86_TICK(c, 9);
    // 0c6b0c  sub eax, eax
    X86_AT(c, 0xc6b0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c6b0e  jmp 0xc6bab
    X86_AT(c, 0xc6b0eu);
    goto L_c6bab;
L_c6b13:
    X86_TICK(c, 28);
    // 0c6b13  lea eax, [edi*8]
    X86_AT(c, 0xc6b13u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0c6b1a  lea eax, [eax + eax*2]
    X86_AT(c, 0xc6b1au);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c6b1d  mov dword ptr [eax + 0x43190], 1
    X86_AT(c, 0xc6b1du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x43190u)), 0x1u);
    // 0c6b27  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xc6b27u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c6b2a  mov dword ptr [eax + 0x43194], edx
    X86_AT(c, 0xc6b2au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x43194u)), c.r[2]);
    // 0c6b30  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc6b30u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c6b33  mov dword ptr [eax + 0x43198], edx
    X86_AT(c, 0xc6b33u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x43198u)), c.r[2]);
    // 0c6b39  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc6b39u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c6b3c  mov dword ptr [eax + 0x4319c], edx
    X86_AT(c, 0xc6b3cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4319Cu)), c.r[2]);
    // 0c6b42  mov esi, dword ptr [0x431a4]
    X86_AT(c, 0xc6b42u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x431A4u)));
L_c6b48:
    X86_TICK(c, 13);
    // 0c6b48  lea eax, [esi*8]
    X86_AT(c, 0xc6b48u);
    c.r[0] = (uint32_t)(c.r[6] * 8);
    // 0c6b4f  mov eax, dword ptr [eax + eax*2 + 0x431a4]
    X86_AT(c, 0xc6b4fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[0] * 2 + 0x431A4u)));
    // 0c6b56  and eax, eax
    X86_AT(c, 0xc6b56u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c6b58  je 0xc6b5d
    X86_AT(c, 0xc6b58u);
    if (x86_cc(c, 4)) { goto L_c6b5d; }
    X86_TICK(c, 10);
    // 0c6b5a  xchg esi, eax
    X86_AT(c, 0xc6b5au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c6b5b  jmp 0xc6b48
    X86_AT(c, 0xc6b5bu);
    X86_POLL(c, 0xc6b48u); goto L_c6b48;
L_c6b5d:
    X86_TICK(c, 25);
    // 0c6b5d  lea eax, [esi*8]
    X86_AT(c, 0xc6b5du);
    c.r[0] = (uint32_t)(c.r[6] * 8);
    // 0c6b64  lea eax, [eax + eax*2]
    X86_AT(c, 0xc6b64u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c6b67  mov dword ptr [eax + 0x431a4], edi
    X86_AT(c, 0xc6b67u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x431A4u)), c.r[7]);
    // 0c6b6d  lea eax, [edi*8]
    X86_AT(c, 0xc6b6du);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0c6b74  lea eax, [eax + eax*2]
    X86_AT(c, 0xc6b74u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c6b77  sub edx, edx
    X86_AT(c, 0xc6b77u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0c6b79  mov dword ptr [eax + 0x431a4], edx
    X86_AT(c, 0xc6b79u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x431A4u)), c.r[2]);
    // 0c6b7f  cmp edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc6b7fu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4);
    // 0c6b82  je 0xc6b90
    X86_AT(c, 0xc6b82u);
    if (x86_cc(c, 4)) { goto L_c6b90; }
    X86_TICK(c, 9);
    // 0c6b84  mov dword ptr [eax + 0x431a0], 0xffffffff
    X86_AT(c, 0xc6b84u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x431A0u)), 0xFFFFFFFFu);
    // 0c6b8e  jmp 0xc6ba4
    X86_AT(c, 0xc6b8eu);
    goto L_c6ba4;
L_c6b90:
    X86_TICK(c, 6);
    // 0c6b90  lea eax, [edi*8]
    X86_AT(c, 0xc6b90u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0c6b97  lea eax, [eax + eax*2]
    X86_AT(c, 0xc6b97u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c6b9a  mov dword ptr [eax + 0x431a0], 0
    X86_AT(c, 0xc6b9au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x431A0u)), 0x0u);
L_c6ba4:
    X86_TICK(c, 7);
    // 0c6ba4  call 0xc6bb0
    X86_AT(c, 0xc6ba4u);
    push32(c, 0xc6ba9u); x86_call_known(c, 0xc6bb0u, f_000c6bb0); X86_RET(c, 0xc6ba9u);
    X86_TICK(c, 2);
    // 0c6ba9  mov eax, edi
    X86_AT(c, 0xc6ba9u);
    c.r[0] = c.r[7];
L_c6bab:
    X86_TICK(c, 24);
    // 0c6bab  pop edi
    X86_AT(c, 0xc6babu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6bac  pop esi
    X86_AT(c, 0xc6bacu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6bad  leave 
    X86_AT(c, 0xc6badu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6bae  ret 
    X86_AT(c, 0xc6baeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6adcu, "ran off the end of a function");
}
void f_000c6bb0(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0c6bb0  push ebp
    X86_AT(c, 0xc6bb0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6bb1  mov ebp, esp
    X86_AT(c, 0xc6bb1u);
    c.r[5] = c.r[4];
    // 0c6bb3  push eax
    X86_AT(c, 0xc6bb3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c6bb4  push ebx
    X86_AT(c, 0xc6bb4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c6bb5  push esi
    X86_AT(c, 0xc6bb5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c6bb6  push edi
    X86_AT(c, 0xc6bb6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6bb7  sub esi, esi
    X86_AT(c, 0xc6bb7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c6bb9  mov dword ptr [ebp - 4], esi
    X86_AT(c, 0xc6bb9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[6]);
    // 0c6bbc  mov eax, 0x42b80
    X86_AT(c, 0xc6bbcu);
    c.r[0] = 0x42B80u;
    // 0c6bc1  lea ebx, [eax + 0xc]
    X86_AT(c, 0xc6bc1u);
    c.r[3] = (uint32_t)(c.r[0] + 0xCu);
    // 0c6bc4  add ebx, 4
    X86_AT(c, 0xc6bc4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6bc7  mov edx, dword ptr [eax + 0x614]
    X86_AT(c, 0xc6bc7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x614u)));
    // 0c6bcd  mov dword ptr [ebx], edx
    X86_AT(c, 0xc6bcdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0c6bcf  add ebx, 4
    X86_AT(c, 0xc6bcfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6bd2  mov edx, dword ptr [eax + 0x618]
    X86_AT(c, 0xc6bd2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x618u)));
    // 0c6bd8  mov dword ptr [ebx], edx
    X86_AT(c, 0xc6bd8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0c6bda  add ebx, 4
    X86_AT(c, 0xc6bdau);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6bdd  mov edx, dword ptr [eax + 0x61c]
    X86_AT(c, 0xc6bddu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x61Cu)));
    // 0c6be3  mov dword ptr [ebx], edx
    X86_AT(c, 0xc6be3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0c6be5  add ebx, 4
    X86_AT(c, 0xc6be5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6be8  mov edi, dword ptr [eax + 0x624]
    X86_AT(c, 0xc6be8u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x624u)));
L_c6bee:
    X86_TICK(c, 7);
    // 0c6bee  and edi, edi
    X86_AT(c, 0xc6beeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c6bf0  je 0xc6c2f
    X86_AT(c, 0xc6bf0u);
    if (x86_cc(c, 4)) { goto L_c6c2f; }
    X86_TICK(c, 43);
    // 0c6bf2  mov eax, 0x42b80
    X86_AT(c, 0xc6bf2u);
    c.r[0] = 0x42B80u;
    // 0c6bf7  lea edx, [edi*8]
    X86_AT(c, 0xc6bf7u);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0c6bfe  lea edx, [edx + edx*2]
    X86_AT(c, 0xc6bfeu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c6c01  mov ecx, dword ptr [eax + edx*1 + 0x614]
    X86_AT(c, 0xc6c01u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x614u)));
    // 0c6c08  mov dword ptr [ebx], ecx
    X86_AT(c, 0xc6c08u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[1]);
    // 0c6c0a  add ebx, 4
    X86_AT(c, 0xc6c0au);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6c0d  mov ecx, dword ptr [eax + edx*1 + 0x618]
    X86_AT(c, 0xc6c0du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x618u)));
    // 0c6c14  mov dword ptr [ebx], ecx
    X86_AT(c, 0xc6c14u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[1]);
    // 0c6c16  add ebx, 4
    X86_AT(c, 0xc6c16u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6c19  mov ecx, dword ptr [eax + edx*1 + 0x61c]
    X86_AT(c, 0xc6c19u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x61Cu)));
    // 0c6c20  mov dword ptr [ebx], ecx
    X86_AT(c, 0xc6c20u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[1]);
    // 0c6c22  add ebx, 4
    X86_AT(c, 0xc6c22u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6c25  inc esi
    X86_AT(c, 0xc6c25u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c6c26  mov edi, dword ptr [eax + edx*1 + 0x624]
    X86_AT(c, 0xc6c26u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x624u)));
    // 0c6c2d  jmp 0xc6bee
    X86_AT(c, 0xc6c2du);
    X86_POLL(c, 0xc6beeu); goto L_c6bee;
L_c6c2f:
    X86_TICK(c, 32);
    // 0c6c2f  lea eax, [esi + 1]
    X86_AT(c, 0xc6c2fu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0c6c32  mov dword ptr [0x42b8c], eax
    X86_AT(c, 0xc6c32u);
    wr32((c.sbase[3] + (uint32_t)(0x42B8Cu)), c.r[0]);
    // 0c6c37  pop edi
    X86_AT(c, 0xc6c37u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6c38  pop esi
    X86_AT(c, 0xc6c38u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6c39  pop ebx
    X86_AT(c, 0xc6c39u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c6c3a  leave 
    X86_AT(c, 0xc6c3au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6c3b  ret 
    X86_AT(c, 0xc6c3bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6bb0u, "ran off the end of a function");
}
void f_000c6c3c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0c6c3c  push ebp
    X86_AT(c, 0xc6c3cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6c3d  mov ebp, esp
    X86_AT(c, 0xc6c3du);
    c.r[5] = c.r[4];
    // 0c6c3f  push esi
    X86_AT(c, 0xc6c3fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c6c40  push edi
    X86_AT(c, 0xc6c40u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6c41  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc6c41u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c6c44  lea eax, [edi*8]
    X86_AT(c, 0xc6c44u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0c6c4b  lea eax, [eax + eax*2]
    X86_AT(c, 0xc6c4bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c6c4e  mov dword ptr [eax + 0x43190], 0
    X86_AT(c, 0xc6c4eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x43190u)), 0x0u);
    // 0c6c58  mov esi, dword ptr [0x431a4]
    X86_AT(c, 0xc6c58u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x431A4u)));
L_c6c5e:
    X86_TICK(c, 13);
    // 0c6c5e  lea eax, [esi*8]
    X86_AT(c, 0xc6c5eu);
    c.r[0] = (uint32_t)(c.r[6] * 8);
    // 0c6c65  mov eax, dword ptr [eax + eax*2 + 0x431a4]
    X86_AT(c, 0xc6c65u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[0] * 2 + 0x431A4u)));
    // 0c6c6c  cmp edi, eax
    X86_AT(c, 0xc6c6cu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0c6c6e  je 0xc6c73
    X86_AT(c, 0xc6c6eu);
    if (x86_cc(c, 4)) { goto L_c6c73; }
    X86_TICK(c, 10);
    // 0c6c70  xchg esi, eax
    X86_AT(c, 0xc6c70u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c6c71  jmp 0xc6c5e
    X86_AT(c, 0xc6c71u);
    X86_POLL(c, 0xc6c5eu); goto L_c6c5e;
L_c6c73:
    X86_TICK(c, 21);
    // 0c6c73  lea eax, [edi*8]
    X86_AT(c, 0xc6c73u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0c6c7a  lea eax, [eax + eax*2]
    X86_AT(c, 0xc6c7au);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c6c7d  lea edx, [esi*8]
    X86_AT(c, 0xc6c7du);
    c.r[2] = (uint32_t)(c.r[6] * 8);
    // 0c6c84  lea edx, [edx + edx*2]
    X86_AT(c, 0xc6c84u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c6c87  mov eax, dword ptr [eax + 0x431a4]
    X86_AT(c, 0xc6c87u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x431A4u)));
    // 0c6c8d  mov dword ptr [edx + 0x431a4], eax
    X86_AT(c, 0xc6c8du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x431A4u)), c.r[0]);
    // 0c6c93  call 0xc6bb0
    X86_AT(c, 0xc6c93u);
    push32(c, 0xc6c98u); x86_call_known(c, 0xc6bb0u, f_000c6bb0); X86_RET(c, 0xc6c98u);
    X86_TICK(c, 24);
    // 0c6c98  pop edi
    X86_AT(c, 0xc6c98u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6c99  pop esi
    X86_AT(c, 0xc6c99u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6c9a  leave 
    X86_AT(c, 0xc6c9au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6c9b  ret 
    X86_AT(c, 0xc6c9bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6c3cu, "ran off the end of a function");
}
void f_000c6c9c(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0c6c9c  push ebp
    X86_AT(c, 0xc6c9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6c9d  mov ebp, esp
    X86_AT(c, 0xc6c9du);
    c.r[5] = c.r[4];
    // 0c6c9f  push edi
    X86_AT(c, 0xc6c9fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6ca0  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc6ca0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c6ca3  lea eax, [edi*8]
    X86_AT(c, 0xc6ca3u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0c6caa  lea eax, [eax + eax*2]
    X86_AT(c, 0xc6caau);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c6cad  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc6cadu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c6cb0  mov dword ptr [eax + 0x43194], edx
    X86_AT(c, 0xc6cb0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x43194u)), c.r[2]);
    // 0c6cb6  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc6cb6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c6cb9  mov dword ptr [eax + 0x43198], edx
    X86_AT(c, 0xc6cb9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x43198u)), c.r[2]);
    // 0c6cbf  call 0xc6bb0
    X86_AT(c, 0xc6cbfu);
    push32(c, 0xc6cc4u); x86_call_known(c, 0xc6bb0u, f_000c6bb0); X86_RET(c, 0xc6cc4u);
    X86_TICK(c, 20);
    // 0c6cc4  pop edi
    X86_AT(c, 0xc6cc4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6cc5  leave 
    X86_AT(c, 0xc6cc5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6cc6  ret 
    X86_AT(c, 0xc6cc6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6c9cu, "ran off the end of a function");
}
void f_000c6d64(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0c6d64  push ebp
    X86_AT(c, 0xc6d64u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6d65  mov ebp, esp
    X86_AT(c, 0xc6d65u);
    c.r[5] = c.r[4];
    // 0c6d67  push eax
    X86_AT(c, 0xc6d67u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c6d68  push ebx
    X86_AT(c, 0xc6d68u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c6d69  push esi
    X86_AT(c, 0xc6d69u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c6d6a  push edi
    X86_AT(c, 0xc6d6au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6d6b  cmp dword ptr [0x43e18], 0
    X86_AT(c, 0xc6d6bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43E18u))), 0x0u, 0, 4);
    // 0c6d72  jne 0xc6da0
    X86_AT(c, 0xc6d72u);
    if (x86_cc(c, 5)) { goto L_c6da0; }
    X86_TICK(c, 18);
    // 0c6d74  mov dword ptr [0x43e18], 3
    X86_AT(c, 0xc6d74u);
    wr32((c.sbase[3] + (uint32_t)(0x43E18u)), 0x3u);
    // 0c6d7e  mov esi, dword ptr [0x42b98]
    X86_AT(c, 0xc6d7eu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x42B98u)));
    // 0c6d84  mov ebx, dword ptr [esi*4 + 0xa1754]
    X86_AT(c, 0xc6d84u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA1754u)));
    // 0c6d8b  mov eax, dword ptr [esi*4 + 0xa1758]
    X86_AT(c, 0xc6d8bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA1758u)));
    // 0c6d92  mov dword ptr [esi*4 + 0xa1754], eax
    X86_AT(c, 0xc6d92u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA1754u)), c.r[0]);
    // 0c6d99  mov dword ptr [esi*4 + 0xa1758], ebx
    X86_AT(c, 0xc6d99u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA1758u)), c.r[3]);
L_c6da0:
    X86_TICK(c, 8);
    // 0c6da0  dec dword ptr [0x43e18]
    X86_AT(c, 0xc6da0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x43E18u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c6da6  sub edi, edi
    X86_AT(c, 0xc6da6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c6da8:
    X86_TICK(c, 7);
    // 0c6da8  cmp edi, 0x80
    X86_AT(c, 0xc6da8u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0c6dae  jge 0xc6e0c
    X86_AT(c, 0xc6daeu);
    if (x86_cc(c, 13)) { goto L_c6e0c; }
    X86_TICK(c, 18);
    // 0c6db0  mov eax, 0x42b80
    X86_AT(c, 0xc6db0u);
    c.r[0] = 0x42B80u;
    // 0c6db5  lea edx, [edi*8]
    X86_AT(c, 0xc6db5u);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0c6dbc  lea edx, [edx + edx*2]
    X86_AT(c, 0xc6dbcu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c6dbf  cmp dword ptr [eax + edx*1 + 0x610], 0
    X86_AT(c, 0xc6dbfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x610u))), 0x0u, 0, 4);
    // 0c6dc7  je 0xc6e09
    X86_AT(c, 0xc6dc7u);
    if (x86_cc(c, 4)) { goto L_c6e09; }
    X86_TICK(c, 12);
    // 0c6dc9  cmp dword ptr [eax + edx*1 + 0x620], 0xffffffff
    X86_AT(c, 0xc6dc9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x620u))), 0xFFFFFFFFu, 0, 4);
    // 0c6dd1  je 0xc6e09
    X86_AT(c, 0xc6dd1u);
    if (x86_cc(c, 4)) { goto L_c6e09; }
    X86_TICK(c, 11);
    // 0c6dd3  push 6
    X86_AT(c, 0xc6dd3u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c6dd5  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc6dd5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c6dd8  call 0xc5de0
    X86_AT(c, 0xc6dd8u);
    push32(c, 0xc6dddu); x86_call_known(c, 0xc5de0u, f_000c5de0); X86_RET(c, 0xc6dddu);
    X86_TICK(c, 9);
    // 0c6ddd  add esp, 4
    X86_AT(c, 0xc6dddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c6de0  and eax, eax
    X86_AT(c, 0xc6de0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c6de2  jne 0xc6e09
    X86_AT(c, 0xc6de2u);
    if (x86_cc(c, 5)) { goto L_c6e09; }
    X86_TICK(c, 20);
    // 0c6de4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc6de4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c6de7  mov esi, dword ptr [eax + 0x4319c]
    X86_AT(c, 0xc6de7u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4319Cu)));
    // 0c6ded  mov ebx, dword ptr [esi*4 + 0xa1754]
    X86_AT(c, 0xc6dedu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA1754u)));
    // 0c6df4  mov eax, dword ptr [esi*4 + 0xa1758]
    X86_AT(c, 0xc6df4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA1758u)));
    // 0c6dfb  mov dword ptr [esi*4 + 0xa1754], eax
    X86_AT(c, 0xc6dfbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA1754u)), c.r[0]);
    // 0c6e02  mov dword ptr [esi*4 + 0xa1758], ebx
    X86_AT(c, 0xc6e02u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA1758u)), c.r[3]);
L_c6e09:
    X86_TICK(c, 9);
    // 0c6e09  inc edi
    X86_AT(c, 0xc6e09u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c6e0a  jmp 0xc6da8
    X86_AT(c, 0xc6e0au);
    X86_POLL(c, 0xc6da8u); goto L_c6da8;
L_c6e0c:
    X86_TICK(c, 28);
    // 0c6e0c  pop edi
    X86_AT(c, 0xc6e0cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6e0d  pop esi
    X86_AT(c, 0xc6e0du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6e0e  pop ebx
    X86_AT(c, 0xc6e0eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c6e0f  leave 
    X86_AT(c, 0xc6e0fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6e10  ret 
    X86_AT(c, 0xc6e10u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6d64u, "ran off the end of a function");
}
void f_000c6e14(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0c6e14  push ebp
    X86_AT(c, 0xc6e14u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6e15  mov ebp, esp
    X86_AT(c, 0xc6e15u);
    c.r[5] = c.r[4];
    // 0c6e17  sub esp, 0x14
    X86_AT(c, 0xc6e17u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0c6e1a  push ebx
    X86_AT(c, 0xc6e1au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c6e1b  push esi
    X86_AT(c, 0xc6e1bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c6e1c  push edi
    X86_AT(c, 0xc6e1cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6e1d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc6e1du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c6e20  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc6e20u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c6e23  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xc6e23u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_c6e2a:
    X86_TICK(c, 11);
    // 0c6e2a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc6e2au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c6e2d  cmp eax, 0xf
    X86_AT(c, 0xc6e2du);
    (void)x86_sub(c, c.r[0], 0xFu, 0, 4);
    // 0c6e30  jge 0xc6fda
    X86_AT(c, 0xc6e30u);
    if (x86_cc(c, 13)) { goto L_c6fda; }
    X86_TICK(c, 23);
    // 0c6e36  lea eax, [eax + eax*4]
    X86_AT(c, 0xc6e36u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0c6e39  lea eax, [eax*4]
    X86_AT(c, 0xc6e39u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0c6e40  mov ebx, dword ptr [eax + 0xa1cc0]
    X86_AT(c, 0xc6e40u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC0u)));
    // 0c6e46  mov eax, dword ptr [eax + 0xa1cc4]
    X86_AT(c, 0xc6e46u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC4u)));
    // 0c6e4c  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xc6e4cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0c6e4f  mov dword ptr [ebp - 8], 0xffffffff
    X86_AT(c, 0xc6e4fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFFFFFu);
    // 0c6e56  cmp edi, 5
    X86_AT(c, 0xc6e56u);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0c6e59  jg 0xc6e72
    X86_AT(c, 0xc6e59u);
    if (x86_cc(c, 15)) { goto L_c6e72; }
    X86_TICK(c, 9);
    // 0c6e5b  lea eax, [edi + 0xa3]
    X86_AT(c, 0xc6e5bu);
    c.r[0] = (uint32_t)(c.r[7] + 0xA3u);
    // 0c6e61  cmp eax, ebx
    X86_AT(c, 0xc6e61u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0c6e63  jg 0xc6eab
    X86_AT(c, 0xc6e63u);
    if (x86_cc(c, 15)) { goto L_c6eab; }
    X86_TICK(c, 13);
    // 0c6e65  lea eax, [ebx - 0xa3]
    X86_AT(c, 0xc6e65u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFF5Du);
    // 0c6e6b  sub eax, edi
    X86_AT(c, 0xc6e6bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c6e6d  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc6e6du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c6e70  jmp 0xc6eab
    X86_AT(c, 0xc6e70u);
    goto L_c6eab;
L_c6e72:
    X86_TICK(c, 7);
    // 0c6e72  cmp edi, 0xa3
    X86_AT(c, 0xc6e72u);
    (void)x86_sub(c, c.r[7], 0xA3u, 0, 4);
    // 0c6e78  jl 0xc6ea4
    X86_AT(c, 0xc6e78u);
    if (x86_cc(c, 12)) { goto L_c6ea4; }
    X86_TICK(c, 9);
    // 0c6e7a  lea eax, [edi - 5]
    X86_AT(c, 0xc6e7au);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFBu);
    // 0c6e7d  cmp eax, ebx
    X86_AT(c, 0xc6e7du);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0c6e7f  jg 0xc6e88
    X86_AT(c, 0xc6e7fu);
    if (x86_cc(c, 15)) { goto L_c6e88; }
    X86_TICK(c, 6);
    // 0c6e81  mov edx, ebx
    X86_AT(c, 0xc6e81u);
    c.r[2] = c.r[3];
    // 0c6e83  sub edx, eax
    X86_AT(c, 0xc6e83u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c6e85  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xc6e85u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
L_c6e88:
    X86_TICK(c, 9);
    // 0c6e88  lea eax, [edi - 0xa3]
    X86_AT(c, 0xc6e88u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFF5Du);
    // 0c6e8e  cmp eax, ebx
    X86_AT(c, 0xc6e8eu);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0c6e90  jl 0xc6ebc
    X86_AT(c, 0xc6e90u);
    if (x86_cc(c, 12)) { goto L_c6ebc; }
    X86_TICK(c, 17);
    // 0c6e92  mov eax, 0xa8
    X86_AT(c, 0xc6e92u);
    c.r[0] = 0xA8u;
    // 0c6e97  sub eax, edi
    X86_AT(c, 0xc6e97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c6e99  lea edx, [ebx + eax*1]
    X86_AT(c, 0xc6e99u);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 0c6e9c  add edx, 5
    X86_AT(c, 0xc6e9cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0c6e9f  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xc6e9fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0c6ea2  jmp 0xc6ebc
    X86_AT(c, 0xc6ea2u);
    goto L_c6ebc;
L_c6ea4:
    X86_TICK(c, 9);
    // 0c6ea4  lea eax, [edi - 5]
    X86_AT(c, 0xc6ea4u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFBu);
    // 0c6ea7  cmp eax, ebx
    X86_AT(c, 0xc6ea7u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0c6ea9  jg 0xc6ebc
    X86_AT(c, 0xc6ea9u);
    if (x86_cc(c, 15)) { goto L_c6ebc; }
L_c6eab:
    X86_TICK(c, 9);
    // 0c6eab  lea eax, [edi + 5]
    X86_AT(c, 0xc6eabu);
    c.r[0] = (uint32_t)(c.r[7] + 0x5u);
    // 0c6eae  cmp eax, ebx
    X86_AT(c, 0xc6eaeu);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0c6eb0  jl 0xc6ebc
    X86_AT(c, 0xc6eb0u);
    if (x86_cc(c, 12)) { goto L_c6ebc; }
    X86_TICK(c, 8);
    // 0c6eb2  mov eax, ebx
    X86_AT(c, 0xc6eb2u);
    c.r[0] = c.r[3];
    // 0c6eb4  sub eax, edi
    X86_AT(c, 0xc6eb4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c6eb6  add eax, 5
    X86_AT(c, 0xc6eb6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5u, 0, 4); }
    // 0c6eb9  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc6eb9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_c6ebc:
    X86_TICK(c, 9);
    // 0c6ebc  mov dword ptr [ebp - 0xc], 0xffffffff
    X86_AT(c, 0xc6ebcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0xFFFFFFFFu);
    // 0c6ec3  cmp esi, 5
    X86_AT(c, 0xc6ec3u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0c6ec6  jg 0xc6ef1
    X86_AT(c, 0xc6ec6u);
    if (x86_cc(c, 15)) { goto L_c6ef1; }
    X86_TICK(c, 13);
    // 0c6ec8  lea eax, [esi + 0x97]
    X86_AT(c, 0xc6ec8u);
    c.r[0] = (uint32_t)(c.r[6] + 0x97u);
    // 0c6ece  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc6eceu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0c6ed1  cmp eax, edx
    X86_AT(c, 0xc6ed1u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0c6ed3  jg 0xc6ee0
    X86_AT(c, 0xc6ed3u);
    if (x86_cc(c, 15)) { goto L_c6ee0; }
    X86_TICK(c, 6);
    // 0c6ed5  sub edx, 0x97
    X86_AT(c, 0xc6ed5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x97u, 0, 4); }
    // 0c6edb  sub edx, esi
    X86_AT(c, 0xc6edbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c6edd  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xc6eddu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
L_c6ee0:
    X86_TICK(c, 13);
    // 0c6ee0  lea eax, [esi + 5]
    X86_AT(c, 0xc6ee0u);
    c.r[0] = (uint32_t)(c.r[6] + 0x5u);
    // 0c6ee3  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc6ee3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0c6ee6  cmp eax, edx
    X86_AT(c, 0xc6ee6u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0c6ee8  jl 0xc6f3c
    X86_AT(c, 0xc6ee8u);
    if (x86_cc(c, 12)) { goto L_c6f3c; }
    X86_TICK(c, 11);
    // 0c6eea  add edx, 5
    X86_AT(c, 0xc6eeau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0c6eed  sub edx, esi
    X86_AT(c, 0xc6eedu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c6eef  jmp 0xc6f39
    X86_AT(c, 0xc6eefu);
    goto L_c6f39;
L_c6ef1:
    X86_TICK(c, 7);
    // 0c6ef1  cmp esi, 0x97
    X86_AT(c, 0xc6ef1u);
    (void)x86_sub(c, c.r[6], 0x97u, 0, 4);
    // 0c6ef7  jl 0xc6f23
    X86_AT(c, 0xc6ef7u);
    if (x86_cc(c, 12)) { goto L_c6f23; }
    X86_TICK(c, 13);
    // 0c6ef9  lea eax, [esi - 5]
    X86_AT(c, 0xc6ef9u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFBu);
    // 0c6efc  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc6efcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0c6eff  cmp eax, edx
    X86_AT(c, 0xc6effu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0c6f01  jg 0xc6f0b
    X86_AT(c, 0xc6f01u);
    if (x86_cc(c, 15)) { goto L_c6f0b; }
    X86_TICK(c, 6);
    // 0c6f03  add edx, 5
    X86_AT(c, 0xc6f03u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0c6f06  sub edx, esi
    X86_AT(c, 0xc6f06u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c6f08  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xc6f08u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
L_c6f0b:
    X86_TICK(c, 13);
    // 0c6f0b  lea eax, [esi - 0x97]
    X86_AT(c, 0xc6f0bu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFF69u);
    // 0c6f11  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc6f11u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0c6f14  cmp eax, edx
    X86_AT(c, 0xc6f14u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0c6f16  jl 0xc6f3c
    X86_AT(c, 0xc6f16u);
    if (x86_cc(c, 12)) { goto L_c6f3c; }
    X86_TICK(c, 13);
    // 0c6f18  mov eax, 0x9c
    X86_AT(c, 0xc6f18u);
    c.r[0] = 0x9Cu;
    // 0c6f1d  sub eax, esi
    X86_AT(c, 0xc6f1du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c6f1f  add edx, eax
    X86_AT(c, 0xc6f1fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c6f21  jmp 0xc6f36
    X86_AT(c, 0xc6f21u);
    goto L_c6f36;
L_c6f23:
    X86_TICK(c, 13);
    // 0c6f23  lea eax, [esi - 5]
    X86_AT(c, 0xc6f23u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFBu);
    // 0c6f26  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc6f26u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0c6f29  cmp eax, edx
    X86_AT(c, 0xc6f29u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0c6f2b  jg 0xc6f3c
    X86_AT(c, 0xc6f2bu);
    if (x86_cc(c, 15)) { goto L_c6f3c; }
    X86_TICK(c, 9);
    // 0c6f2d  lea eax, [esi + 5]
    X86_AT(c, 0xc6f2du);
    c.r[0] = (uint32_t)(c.r[6] + 0x5u);
    // 0c6f30  cmp eax, edx
    X86_AT(c, 0xc6f30u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0c6f32  jl 0xc6f3c
    X86_AT(c, 0xc6f32u);
    if (x86_cc(c, 12)) { goto L_c6f3c; }
    X86_TICK(c, 2);
    // 0c6f34  sub edx, esi
    X86_AT(c, 0xc6f34u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
L_c6f36:
    X86_TICK(c, 2);
    // 0c6f36  add edx, 5
    X86_AT(c, 0xc6f36u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
L_c6f39:
    X86_TICK(c, 2);
    // 0c6f39  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xc6f39u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
L_c6f3c:
    X86_TICK(c, 12);
    // 0c6f3c  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xc6f3cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0c6f43  jne 0xc6f50
    X86_AT(c, 0xc6f43u);
    if (x86_cc(c, 5)) { goto L_c6f50; }
    X86_TICK(c, 6);
    // 0c6f45  mov eax, 0xffffffff
    X86_AT(c, 0xc6f45u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c6f4a  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc6f4au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c6f4d  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc6f4du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
L_c6f50:
    X86_TICK(c, 11);
    // 0c6f50  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc6f50u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c6f53  cmp eax, 0xffffffff
    X86_AT(c, 0xc6f53u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0c6f56  je 0xc6faa
    X86_AT(c, 0xc6f56u);
    if (x86_cc(c, 4)) { goto L_c6faa; }
    X86_TICK(c, 11);
    // 0c6f58  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc6f58u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c6f5b  cmp edx, 0xffffffff
    X86_AT(c, 0xc6f5bu);
    (void)x86_sub(c, c.r[2], 0xFFFFFFFFu, 0, 4);
    // 0c6f5e  je 0xc6faa
    X86_AT(c, 0xc6f5eu);
    if (x86_cc(c, 4)) { goto L_c6faa; }
    X86_TICK(c, 15);
    // 0c6f60  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xc6f60u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c6f63  mov ecx, dword ptr [ecx*4 + 0x43e1c]
    X86_AT(c, 0xc6f63u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0x43E1Cu)));
    // 0c6f6a  and ecx, ecx
    X86_AT(c, 0xc6f6au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0c6f6c  je 0xc6f7b
    X86_AT(c, 0xc6f6cu);
    if (x86_cc(c, 4)) { goto L_c6f7b; }
    X86_TICK(c, 13);
    // 0c6f6e  push edx
    X86_AT(c, 0xc6f6eu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c6f6f  push eax
    X86_AT(c, 0xc6f6fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c6f70  push ecx
    X86_AT(c, 0xc6f70u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c6f71  call 0xc6c9c
    X86_AT(c, 0xc6f71u);
    push32(c, 0xc6f76u); x86_call_known(c, 0xc6c9cu, f_000c6c9c); X86_RET(c, 0xc6f76u);
    X86_TICK(c, 9);
    // 0c6f76  add esp, 0xc
    X86_AT(c, 0xc6f76u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c6f79  jmp 0xc6fd2
    X86_AT(c, 0xc6f79u);
    goto L_c6fd2;
L_c6f7b:
    X86_TICK(c, 32);
    // 0c6f7b  push 0
    X86_AT(c, 0xc6f7bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c6f7d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc6f7du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c6f80  lea eax, [eax + eax*4]
    X86_AT(c, 0xc6f80u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0c6f83  lea eax, [eax*4]
    X86_AT(c, 0xc6f83u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0c6f8a  push dword ptr [eax + 0xa1ccc]
    X86_AT(c, 0xc6f8au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CCCu))); push32(c, v); }
    // 0c6f90  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc6f90u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c6f93  push dword ptr [ebp - 8]
    X86_AT(c, 0xc6f93u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c6f96  call 0xc6adc
    X86_AT(c, 0xc6f96u);
    push32(c, 0xc6f9bu); x86_call_known(c, 0xc6adcu, f_000c6adc); X86_RET(c, 0xc6f9bu);
    X86_TICK(c, 15);
    // 0c6f9b  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xc6f9bu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c6f9e  mov dword ptr [ecx*4 + 0x43e1c], eax
    X86_AT(c, 0xc6f9eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0x43E1Cu)), c.r[0]);
    // 0c6fa5  add esp, 0x10
    X86_AT(c, 0xc6fa5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c6fa8  jmp 0xc6fd2
    X86_AT(c, 0xc6fa8u);
    goto L_c6fd2;
L_c6faa:
    X86_TICK(c, 15);
    // 0c6faa  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc6faau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c6fad  mov edx, dword ptr [eax*4 + 0x43e1c]
    X86_AT(c, 0xc6fadu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x43E1Cu)));
    // 0c6fb4  and edx, edx
    X86_AT(c, 0xc6fb4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0c6fb6  je 0xc6fd2
    X86_AT(c, 0xc6fb6u);
    if (x86_cc(c, 4)) { goto L_c6fd2; }
    X86_TICK(c, 11);
    // 0c6fb8  push edx
    X86_AT(c, 0xc6fb8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c6fb9  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xc6fb9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0c6fbc  call 0xc6c3c
    X86_AT(c, 0xc6fbcu);
    push32(c, 0xc6fc1u); x86_call_known(c, 0xc6c3cu, f_000c6c3c); X86_RET(c, 0xc6fc1u);
    X86_TICK(c, 8);
    // 0c6fc1  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc6fc1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0c6fc4  mov dword ptr [eax*4 + 0x43e1c], 0
    X86_AT(c, 0xc6fc4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x43E1Cu)), 0x0u);
    // 0c6fcf  add esp, 4
    X86_AT(c, 0xc6fcfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c6fd2:
    X86_TICK(c, 13);
    // 0c6fd2  inc dword ptr [ebp - 4]
    X86_AT(c, 0xc6fd2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c6fd5  jmp 0xc6e2a
    X86_AT(c, 0xc6fd5u);
    X86_POLL(c, 0xc6e2au); goto L_c6e2a;
L_c6fda:
    X86_TICK(c, 28);
    // 0c6fda  pop edi
    X86_AT(c, 0xc6fdau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c6fdb  pop esi
    X86_AT(c, 0xc6fdbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c6fdc  pop ebx
    X86_AT(c, 0xc6fdcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c6fdd  leave 
    X86_AT(c, 0xc6fddu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c6fde  ret 
    X86_AT(c, 0xc6fdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6e14u, "ran off the end of a function");
}
void f_000c6fe0(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0c6fe0  push ebp
    X86_AT(c, 0xc6fe0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c6fe1  mov ebp, esp
    X86_AT(c, 0xc6fe1u);
    c.r[5] = c.r[4];
    // 0c6fe3  sub esp, 0x10
    X86_AT(c, 0xc6fe3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0c6fe6  push ebx
    X86_AT(c, 0xc6fe6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c6fe7  push esi
    X86_AT(c, 0xc6fe7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c6fe8  push edi
    X86_AT(c, 0xc6fe8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c6fe9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc6fe9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c6fec  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xc6fecu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
L_c6ff3:
    X86_TICK(c, 11);
    // 0c6ff3  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc6ff3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c6ff6  cmp eax, 0x80
    X86_AT(c, 0xc6ff6u);
    (void)x86_sub(c, c.r[0], 0x80u, 0, 4);
    // 0c6ffb  jge 0xc71d5
    X86_AT(c, 0xc6ffbu);
    if (x86_cc(c, 13)) { goto L_c71d5; }
    X86_TICK(c, 19);
    // 0c7001  lea eax, [eax*8]
    X86_AT(c, 0xc7001u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0c7008  lea eax, [eax + eax*4]
    X86_AT(c, 0xc7008u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0c700b  mov esi, dword ptr [eax + 0xbefd4]
    X86_AT(c, 0xc700bu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD4u)));
    // 0c7011  mov ebx, dword ptr [eax + 0xbefd8]
    X86_AT(c, 0xc7011u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD8u)));
    // 0c7017  and esi, esi
    X86_AT(c, 0xc7017u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c7019  jl 0xc71cd
    X86_AT(c, 0xc7019u);
    if (x86_cc(c, 12)) { goto L_c71cd; }
    X86_TICK(c, 7);
    // 0c701f  and ebx, ebx
    X86_AT(c, 0xc701fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0c7021  jl 0xc71cd
    X86_AT(c, 0xc7021u);
    if (x86_cc(c, 12)) { goto L_c71cd; }
    X86_TICK(c, 9);
    // 0c7027  mov dword ptr [ebp - 8], 0xffffffff
    X86_AT(c, 0xc7027u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFFFFFu);
    // 0c702e  cmp edi, 5
    X86_AT(c, 0xc702eu);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0c7031  jg 0xc704a
    X86_AT(c, 0xc7031u);
    if (x86_cc(c, 15)) { goto L_c704a; }
    X86_TICK(c, 9);
    // 0c7033  lea eax, [edi + 0xa3]
    X86_AT(c, 0xc7033u);
    c.r[0] = (uint32_t)(c.r[7] + 0xA3u);
    // 0c7039  cmp eax, esi
    X86_AT(c, 0xc7039u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0c703b  jg 0xc7083
    X86_AT(c, 0xc703bu);
    if (x86_cc(c, 15)) { goto L_c7083; }
    X86_TICK(c, 13);
    // 0c703d  lea eax, [esi - 0xa3]
    X86_AT(c, 0xc703du);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFF5Du);
    // 0c7043  sub eax, edi
    X86_AT(c, 0xc7043u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c7045  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc7045u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c7048  jmp 0xc7083
    X86_AT(c, 0xc7048u);
    goto L_c7083;
L_c704a:
    X86_TICK(c, 7);
    // 0c704a  cmp edi, 0xa3
    X86_AT(c, 0xc704au);
    (void)x86_sub(c, c.r[7], 0xA3u, 0, 4);
    // 0c7050  jl 0xc707c
    X86_AT(c, 0xc7050u);
    if (x86_cc(c, 12)) { goto L_c707c; }
    X86_TICK(c, 9);
    // 0c7052  lea eax, [edi - 5]
    X86_AT(c, 0xc7052u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFBu);
    // 0c7055  cmp eax, esi
    X86_AT(c, 0xc7055u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0c7057  jg 0xc7060
    X86_AT(c, 0xc7057u);
    if (x86_cc(c, 15)) { goto L_c7060; }
    X86_TICK(c, 6);
    // 0c7059  mov edx, esi
    X86_AT(c, 0xc7059u);
    c.r[2] = c.r[6];
    // 0c705b  sub edx, eax
    X86_AT(c, 0xc705bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c705d  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xc705du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
L_c7060:
    X86_TICK(c, 9);
    // 0c7060  lea eax, [edi - 0xa3]
    X86_AT(c, 0xc7060u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFF5Du);
    // 0c7066  cmp eax, esi
    X86_AT(c, 0xc7066u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0c7068  jl 0xc7094
    X86_AT(c, 0xc7068u);
    if (x86_cc(c, 12)) { goto L_c7094; }
    X86_TICK(c, 17);
    // 0c706a  mov eax, 0xa8
    X86_AT(c, 0xc706au);
    c.r[0] = 0xA8u;
    // 0c706f  sub eax, edi
    X86_AT(c, 0xc706fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c7071  lea edx, [esi + eax*1]
    X86_AT(c, 0xc7071u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0c7074  add edx, 5
    X86_AT(c, 0xc7074u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0c7077  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xc7077u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0c707a  jmp 0xc7094
    X86_AT(c, 0xc707au);
    goto L_c7094;
L_c707c:
    X86_TICK(c, 9);
    // 0c707c  lea eax, [edi - 5]
    X86_AT(c, 0xc707cu);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFBu);
    // 0c707f  cmp eax, esi
    X86_AT(c, 0xc707fu);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0c7081  jg 0xc7094
    X86_AT(c, 0xc7081u);
    if (x86_cc(c, 15)) { goto L_c7094; }
L_c7083:
    X86_TICK(c, 9);
    // 0c7083  lea eax, [edi + 5]
    X86_AT(c, 0xc7083u);
    c.r[0] = (uint32_t)(c.r[7] + 0x5u);
    // 0c7086  cmp eax, esi
    X86_AT(c, 0xc7086u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0c7088  jl 0xc7094
    X86_AT(c, 0xc7088u);
    if (x86_cc(c, 12)) { goto L_c7094; }
    X86_TICK(c, 8);
    // 0c708a  mov eax, esi
    X86_AT(c, 0xc708au);
    c.r[0] = c.r[6];
    // 0c708c  sub eax, edi
    X86_AT(c, 0xc708cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c708e  add eax, 5
    X86_AT(c, 0xc708eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5u, 0, 4); }
    // 0c7091  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc7091u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_c7094:
    X86_TICK(c, 13);
    // 0c7094  mov dword ptr [ebp - 0xc], 0xffffffff
    X86_AT(c, 0xc7094u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0xFFFFFFFFu);
    // 0c709b  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc709bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c709e  cmp eax, 5
    X86_AT(c, 0xc709eu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c70a1  jg 0xc70ca
    X86_AT(c, 0xc70a1u);
    if (x86_cc(c, 15)) { goto L_c70ca; }
    X86_TICK(c, 9);
    // 0c70a3  add eax, 0x97
    X86_AT(c, 0xc70a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x97u, 0, 4); }
    // 0c70a8  cmp eax, ebx
    X86_AT(c, 0xc70a8u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0c70aa  jg 0xc70b8
    X86_AT(c, 0xc70aau);
    if (x86_cc(c, 15)) { goto L_c70b8; }
    X86_TICK(c, 10);
    // 0c70ac  lea eax, [ebx - 0x97]
    X86_AT(c, 0xc70acu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFF69u);
    // 0c70b2  sub eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc70b2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0c70b5  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc70b5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
L_c70b8:
    X86_TICK(c, 13);
    // 0c70b8  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc70b8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c70bb  add eax, 5
    X86_AT(c, 0xc70bbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5u, 0, 4); }
    // 0c70be  cmp eax, ebx
    X86_AT(c, 0xc70beu);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0c70c0  jl 0xc7122
    X86_AT(c, 0xc70c0u);
    if (x86_cc(c, 12)) { goto L_c7122; }
    X86_TICK(c, 15);
    // 0c70c2  lea eax, [ebx + 5]
    X86_AT(c, 0xc70c2u);
    c.r[0] = (uint32_t)(c.r[3] + 0x5u);
    // 0c70c5  sub eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc70c5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0c70c8  jmp 0xc711f
    X86_AT(c, 0xc70c8u);
    goto L_c711f;
L_c70ca:
    X86_TICK(c, 11);
    // 0c70ca  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc70cau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c70cd  cmp eax, 0x97
    X86_AT(c, 0xc70cdu);
    (void)x86_sub(c, c.r[0], 0x97u, 0, 4);
    // 0c70d2  jl 0xc7103
    X86_AT(c, 0xc70d2u);
    if (x86_cc(c, 12)) { goto L_c7103; }
    X86_TICK(c, 9);
    // 0c70d4  sub eax, 5
    X86_AT(c, 0xc70d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x5u, 0, 4); }
    // 0c70d7  cmp eax, ebx
    X86_AT(c, 0xc70d7u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0c70d9  jg 0xc70e4
    X86_AT(c, 0xc70d9u);
    if (x86_cc(c, 15)) { goto L_c70e4; }
    X86_TICK(c, 10);
    // 0c70db  lea eax, [ebx + 5]
    X86_AT(c, 0xc70dbu);
    c.r[0] = (uint32_t)(c.r[3] + 0x5u);
    // 0c70de  sub eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc70deu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0c70e1  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc70e1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
L_c70e4:
    X86_TICK(c, 13);
    // 0c70e4  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc70e4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c70e7  sub eax, 0x97
    X86_AT(c, 0xc70e7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x97u, 0, 4); }
    // 0c70ec  cmp eax, ebx
    X86_AT(c, 0xc70ecu);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0c70ee  jl 0xc7122
    X86_AT(c, 0xc70eeu);
    if (x86_cc(c, 12)) { goto L_c7122; }
    X86_TICK(c, 21);
    // 0c70f0  mov eax, 0x9c
    X86_AT(c, 0xc70f0u);
    c.r[0] = 0x9Cu;
    // 0c70f5  sub eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc70f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0c70f8  lea edx, [ebx + eax*1]
    X86_AT(c, 0xc70f8u);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 0c70fb  add edx, 5
    X86_AT(c, 0xc70fbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0c70fe  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xc70feu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0c7101  jmp 0xc7122
    X86_AT(c, 0xc7101u);
    goto L_c7122;
L_c7103:
    X86_TICK(c, 13);
    // 0c7103  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc7103u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c7106  sub eax, 5
    X86_AT(c, 0xc7106u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x5u, 0, 4); }
    // 0c7109  cmp eax, ebx
    X86_AT(c, 0xc7109u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0c710b  jg 0xc7122
    X86_AT(c, 0xc710bu);
    if (x86_cc(c, 15)) { goto L_c7122; }
    X86_TICK(c, 13);
    // 0c710d  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc710du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c7110  add eax, 5
    X86_AT(c, 0xc7110u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5u, 0, 4); }
    // 0c7113  cmp eax, ebx
    X86_AT(c, 0xc7113u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0c7115  jl 0xc7122
    X86_AT(c, 0xc7115u);
    if (x86_cc(c, 12)) { goto L_c7122; }
    X86_TICK(c, 10);
    // 0c7117  mov eax, ebx
    X86_AT(c, 0xc7117u);
    c.r[0] = c.r[3];
    // 0c7119  sub eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc7119u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0c711c  add eax, 5
    X86_AT(c, 0xc711cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5u, 0, 4); }
L_c711f:
    X86_TICK(c, 2);
    // 0c711f  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc711fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
L_c7122:
    X86_TICK(c, 11);
    // 0c7122  mov eax, dword ptr [0xb52f8]
    X86_AT(c, 0xc7122u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB52F8u)));
    // 0c7127  cmp eax, 2
    X86_AT(c, 0xc7127u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0c712a  je 0xc712f
    X86_AT(c, 0xc712au);
    if (x86_cc(c, 4)) { goto L_c712f; }
    X86_TICK(c, 7);
    // 0c712c  dec eax
    X86_AT(c, 0xc712cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c712d  jne 0xc713a
    X86_AT(c, 0xc712du);
    if (x86_cc(c, 5)) { goto L_c713a; }
L_c712f:
    X86_TICK(c, 6);
    // 0c712f  mov eax, 0xffffffff
    X86_AT(c, 0xc712fu);
    c.r[0] = 0xFFFFFFFFu;
    // 0c7134  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc7134u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c7137  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc7137u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
L_c713a:
    X86_TICK(c, 11);
    // 0c713a  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc713au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c713d  cmp eax, 0xffffffff
    X86_AT(c, 0xc713du);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0c7140  je 0xc719d
    X86_AT(c, 0xc7140u);
    if (x86_cc(c, 4)) { goto L_c719d; }
    X86_TICK(c, 11);
    // 0c7142  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc7142u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c7145  cmp edx, 0xffffffff
    X86_AT(c, 0xc7145u);
    (void)x86_sub(c, c.r[2], 0xFFFFFFFFu, 0, 4);
    // 0c7148  je 0xc719d
    X86_AT(c, 0xc7148u);
    if (x86_cc(c, 4)) { goto L_c719d; }
    X86_TICK(c, 17);
    // 0c714a  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xc714au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c714d  lea ecx, [ecx*8]
    X86_AT(c, 0xc714du);
    c.r[1] = (uint32_t)(c.r[1] * 8);
    // 0c7154  mov ecx, dword ptr [ecx + ecx*4 + 0xbefe4]
    X86_AT(c, 0xc7154u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + c.r[1] * 4 + 0xBEFE4u)));
    // 0c715b  and ecx, ecx
    X86_AT(c, 0xc715bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0c715d  je 0xc716c
    X86_AT(c, 0xc715du);
    if (x86_cc(c, 4)) { goto L_c716c; }
    X86_TICK(c, 13);
    // 0c715f  push edx
    X86_AT(c, 0xc715fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c7160  push eax
    X86_AT(c, 0xc7160u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7161  push ecx
    X86_AT(c, 0xc7161u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c7162  call 0xc6c9c
    X86_AT(c, 0xc7162u);
    push32(c, 0xc7167u); x86_call_known(c, 0xc6c9cu, f_000c6c9c); X86_RET(c, 0xc7167u);
    X86_TICK(c, 9);
    // 0c7167  add esp, 0xc
    X86_AT(c, 0xc7167u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c716a  jmp 0xc71cd
    X86_AT(c, 0xc716au);
    goto L_c71cd;
L_c716c:
    X86_TICK(c, 34);
    // 0c716c  push 0
    X86_AT(c, 0xc716cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c716e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc716eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c7171  lea eax, [eax*8]
    X86_AT(c, 0xc7171u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0c7178  lea eax, [eax + eax*4]
    X86_AT(c, 0xc7178u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0c717b  push dword ptr [eax + 0xbefe0]
    X86_AT(c, 0xc717bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFE0u))); push32(c, v); }
    // 0c7181  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc7181u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c7184  push dword ptr [ebp - 8]
    X86_AT(c, 0xc7184u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c7187  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xc7187u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0c718a  call 0xc6adc
    X86_AT(c, 0xc718au);
    push32(c, 0xc718fu); x86_call_known(c, 0xc6adcu, f_000c6adc); X86_RET(c, 0xc718fu);
    X86_TICK(c, 15);
    // 0c718f  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc718fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0c7192  mov dword ptr [edx + 0xbefe4], eax
    X86_AT(c, 0xc7192u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xBEFE4u)), c.r[0]);
    // 0c7198  add esp, 0x10
    X86_AT(c, 0xc7198u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c719b  jmp 0xc71cd
    X86_AT(c, 0xc719bu);
    goto L_c71cd;
L_c719d:
    X86_TICK(c, 19);
    // 0c719d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc719du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c71a0  lea eax, [eax*8]
    X86_AT(c, 0xc71a0u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0c71a7  lea eax, [eax + eax*4]
    X86_AT(c, 0xc71a7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0c71aa  mov edx, dword ptr [eax + 0xbefe4]
    X86_AT(c, 0xc71aau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFE4u)));
    // 0c71b0  and edx, edx
    X86_AT(c, 0xc71b0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0c71b2  je 0xc71cd
    X86_AT(c, 0xc71b2u);
    if (x86_cc(c, 4)) { goto L_c71cd; }
    X86_TICK(c, 11);
    // 0c71b4  push edx
    X86_AT(c, 0xc71b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c71b5  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xc71b5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0c71b8  call 0xc6c3c
    X86_AT(c, 0xc71b8u);
    push32(c, 0xc71bdu); x86_call_known(c, 0xc6c3cu, f_000c6c3c); X86_RET(c, 0xc71bdu);
    X86_TICK(c, 8);
    // 0c71bd  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc71bdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0c71c0  mov dword ptr [eax + 0xbefe4], 0
    X86_AT(c, 0xc71c0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFE4u)), 0x0u);
    // 0c71ca  add esp, 4
    X86_AT(c, 0xc71cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c71cd:
    X86_TICK(c, 13);
    // 0c71cd  inc dword ptr [ebp - 4]
    X86_AT(c, 0xc71cdu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c71d0  jmp 0xc6ff3
    X86_AT(c, 0xc71d0u);
    X86_POLL(c, 0xc6ff3u); goto L_c6ff3;
L_c71d5:
    X86_TICK(c, 28);
    // 0c71d5  pop edi
    X86_AT(c, 0xc71d5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c71d6  pop esi
    X86_AT(c, 0xc71d6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c71d7  pop ebx
    X86_AT(c, 0xc71d7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c71d8  leave 
    X86_AT(c, 0xc71d8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c71d9  ret 
    X86_AT(c, 0xc71d9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6fe0u, "ran off the end of a function");
}
void f_000c71dc(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0c71dc  ret 
    X86_AT(c, 0xc71dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc71dcu, "ran off the end of a function");
}
void f_000c71e0(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0c71e0  push ebp
    X86_AT(c, 0xc71e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c71e1  mov ebp, esp
    X86_AT(c, 0xc71e1u);
    c.r[5] = c.r[4];
    // 0c71e3  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xc71e3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c71e6  cmp edx, 9
    X86_AT(c, 0xc71e6u);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0c71e9  ja 0xc73f9
    X86_AT(c, 0xc71e9u);
    if (x86_cc(c, 7)) { goto L_c73f9; }
    X86_TICK(c, 7);
    // 0c71ef  jmp dword ptr cs:[edx*4 + 0xc71f7]
    X86_AT(c, 0xc71efu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC71F7u)));
      switch (t) {
      case 0xc721fu: goto L_c721f;
      case 0xc724fu: goto L_c724f;
      case 0xc727fu: goto L_c727f;
      case 0xc72afu: goto L_c72af;
      case 0xc72dfu: goto L_c72df;
      case 0xc730fu: goto L_c730f;
      case 0xc733fu: goto L_c733f;
      case 0xc736fu: goto L_c736f;
      case 0xc739fu: goto L_c739f;
      case 0xc73ccu: goto L_c73cc;
      default: x86_jump(c, t); return; } }
L_c721f:
    X86_TICK(c, 19);
    // 0c721f  push 0x7a
    X86_AT(c, 0xc721fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0c7221  push 0x1b
    X86_AT(c, 0xc7221u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0c7223  push 5
    X86_AT(c, 0xc7223u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7225  push 5
    X86_AT(c, 0xc7225u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7227  push 5
    X86_AT(c, 0xc7227u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7229  push 9
    X86_AT(c, 0xc7229u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c722b  call 0xc5d88
    X86_AT(c, 0xc722bu);
    push32(c, 0xc7230u); x86_call_known(c, 0xc5d88u, f_000c5d88); X86_RET(c, 0xc7230u);
    X86_TICK(c, 19);
    // 0c7230  push 0xa
    X86_AT(c, 0xc7230u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c7232  push 7
    X86_AT(c, 0xc7232u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7234  push 3
    X86_AT(c, 0xc7234u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7236  push 3
    X86_AT(c, 0xc7236u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7238  push 3
    X86_AT(c, 0xc7238u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c723a  push 2
    X86_AT(c, 0xc723au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c723c  call 0xc5d58
    X86_AT(c, 0xc723cu);
    push32(c, 0xc7241u); x86_call_known(c, 0xc5d58u, f_000c5d58); X86_RET(c, 0xc7241u);
    X86_TICK(c, 13);
    // 0c7241  push 0x1b
    X86_AT(c, 0xc7241u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0c7243  push 4
    X86_AT(c, 0xc7243u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c7245  push 0x1d7c
    X86_AT(c, 0xc7245u);
    { uint32_t v = 0x1D7Cu; push32(c, v); }
    // 0c724a  jmp 0xc7424
    X86_AT(c, 0xc724au);
    goto L_c7424;
L_c724f:
    X86_TICK(c, 19);
    // 0c724f  push 0x7a
    X86_AT(c, 0xc724fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0c7251  push 9
    X86_AT(c, 0xc7251u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c7253  push 0x1f
    X86_AT(c, 0xc7253u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c7255  push 0x12
    X86_AT(c, 0xc7255u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0c7257  push 0x12
    X86_AT(c, 0xc7257u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0c7259  push 0x12
    X86_AT(c, 0xc7259u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0c725b  call 0xc5d88
    X86_AT(c, 0xc725bu);
    push32(c, 0xc7260u); x86_call_known(c, 0xc5d88u, f_000c5d88); X86_RET(c, 0xc7260u);
    X86_TICK(c, 19);
    // 0c7260  push 0xa
    X86_AT(c, 0xc7260u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c7262  push 5
    X86_AT(c, 0xc7262u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7264  push 3
    X86_AT(c, 0xc7264u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7266  push 2
    X86_AT(c, 0xc7266u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c7268  push 2
    X86_AT(c, 0xc7268u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c726a  push 2
    X86_AT(c, 0xc726au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c726c  call 0xc5d58
    X86_AT(c, 0xc726cu);
    push32(c, 0xc7271u); x86_call_known(c, 0xc5d58u, f_000c5d58); X86_RET(c, 0xc7271u);
    X86_TICK(c, 13);
    // 0c7271  push 0x1b
    X86_AT(c, 0xc7271u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0c7273  push 0
    X86_AT(c, 0xc7273u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7275  push 0x1d8c
    X86_AT(c, 0xc7275u);
    { uint32_t v = 0x1D8Cu; push32(c, v); }
    // 0c727a  jmp 0xc7424
    X86_AT(c, 0xc727au);
    goto L_c7424;
L_c727f:
    X86_TICK(c, 19);
    // 0c727f  push 0x7a
    X86_AT(c, 0xc727fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0c7281  push 8
    X86_AT(c, 0xc7281u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c7283  push 0x75
    X86_AT(c, 0xc7283u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0c7285  push 0xd
    X86_AT(c, 0xc7285u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c7287  push 0xd
    X86_AT(c, 0xc7287u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c7289  push 0x70
    X86_AT(c, 0xc7289u);
    { uint32_t v = 0x70u; push32(c, v); }
    // 0c728b  call 0xc5d88
    X86_AT(c, 0xc728bu);
    push32(c, 0xc7290u); x86_call_known(c, 0xc5d88u, f_000c5d88); X86_RET(c, 0xc7290u);
    X86_TICK(c, 19);
    // 0c7290  push 0xa
    X86_AT(c, 0xc7290u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c7292  push 7
    X86_AT(c, 0xc7292u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7294  push 5
    X86_AT(c, 0xc7294u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7296  push 3
    X86_AT(c, 0xc7296u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7298  push 3
    X86_AT(c, 0xc7298u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c729a  push 2
    X86_AT(c, 0xc729au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c729c  call 0xc5d58
    X86_AT(c, 0xc729cu);
    push32(c, 0xc72a1u); x86_call_known(c, 0xc5d58u, f_000c5d58); X86_RET(c, 0xc72a1u);
    X86_TICK(c, 13);
    // 0c72a1  push 0x13
    X86_AT(c, 0xc72a1u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0c72a3  push 0
    X86_AT(c, 0xc72a3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c72a5  push 0x1da0
    X86_AT(c, 0xc72a5u);
    { uint32_t v = 0x1DA0u; push32(c, v); }
    // 0c72aa  jmp 0xc7424
    X86_AT(c, 0xc72aau);
    goto L_c7424;
L_c72af:
    X86_TICK(c, 19);
    // 0c72af  push 0x7a
    X86_AT(c, 0xc72afu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0c72b1  push 0x20
    X86_AT(c, 0xc72b1u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c72b3  push 4
    X86_AT(c, 0xc72b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c72b5  push 4
    X86_AT(c, 0xc72b5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c72b7  push 0x16
    X86_AT(c, 0xc72b7u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0c72b9  push 0x16
    X86_AT(c, 0xc72b9u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0c72bb  call 0xc5d88
    X86_AT(c, 0xc72bbu);
    push32(c, 0xc72c0u); x86_call_known(c, 0xc5d88u, f_000c5d88); X86_RET(c, 0xc72c0u);
    X86_TICK(c, 19);
    // 0c72c0  push 0xa
    X86_AT(c, 0xc72c0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c72c2  push 5
    X86_AT(c, 0xc72c2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c72c4  push 3
    X86_AT(c, 0xc72c4u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c72c6  push 3
    X86_AT(c, 0xc72c6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c72c8  push 2
    X86_AT(c, 0xc72c8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c72ca  push 2
    X86_AT(c, 0xc72cau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c72cc  call 0xc5d58
    X86_AT(c, 0xc72ccu);
    push32(c, 0xc72d1u); x86_call_known(c, 0xc5d58u, f_000c5d58); X86_RET(c, 0xc72d1u);
    X86_TICK(c, 13);
    // 0c72d1  push 0x16
    X86_AT(c, 0xc72d1u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0c72d3  push 0
    X86_AT(c, 0xc72d3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c72d5  push 0x1db4
    X86_AT(c, 0xc72d5u);
    { uint32_t v = 0x1DB4u; push32(c, v); }
    // 0c72da  jmp 0xc7424
    X86_AT(c, 0xc72dau);
    goto L_c7424;
L_c72df:
    X86_TICK(c, 19);
    // 0c72df  push 0x7a
    X86_AT(c, 0xc72dfu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0c72e1  push 0x72
    X86_AT(c, 0xc72e1u);
    { uint32_t v = 0x72u; push32(c, v); }
    // 0c72e3  push 8
    X86_AT(c, 0xc72e3u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c72e5  push 0xc
    X86_AT(c, 0xc72e5u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c72e7  push 0xc
    X86_AT(c, 0xc72e7u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c72e9  push 1
    X86_AT(c, 0xc72e9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c72eb  call 0xc5d88
    X86_AT(c, 0xc72ebu);
    push32(c, 0xc72f0u); x86_call_known(c, 0xc5d88u, f_000c5d88); X86_RET(c, 0xc72f0u);
    X86_TICK(c, 19);
    // 0c72f0  push 0xa
    X86_AT(c, 0xc72f0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c72f2  push 7
    X86_AT(c, 0xc72f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c72f4  push 5
    X86_AT(c, 0xc72f4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c72f6  push 3
    X86_AT(c, 0xc72f6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c72f8  push 3
    X86_AT(c, 0xc72f8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c72fa  push 2
    X86_AT(c, 0xc72fau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c72fc  call 0xc5d58
    X86_AT(c, 0xc72fcu);
    push32(c, 0xc7301u); x86_call_known(c, 0xc5d58u, f_000c5d58); X86_RET(c, 0xc7301u);
    X86_TICK(c, 13);
    // 0c7301  push 0x1f
    X86_AT(c, 0xc7301u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c7303  push 4
    X86_AT(c, 0xc7303u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c7305  push 0x1dc8
    X86_AT(c, 0xc7305u);
    { uint32_t v = 0x1DC8u; push32(c, v); }
    // 0c730a  jmp 0xc7424
    X86_AT(c, 0xc730au);
    goto L_c7424;
L_c730f:
    X86_TICK(c, 19);
    // 0c730f  push 0x7a
    X86_AT(c, 0xc730fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0c7311  push 0x16
    X86_AT(c, 0xc7311u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0c7313  push 0x16
    X86_AT(c, 0xc7313u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0c7315  push 0x54
    X86_AT(c, 0xc7315u);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0c7317  push 0x54
    X86_AT(c, 0xc7317u);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0c7319  push 0x13
    X86_AT(c, 0xc7319u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0c731b  call 0xc5d88
    X86_AT(c, 0xc731bu);
    push32(c, 0xc7320u); x86_call_known(c, 0xc5d88u, f_000c5d88); X86_RET(c, 0xc7320u);
    X86_TICK(c, 19);
    // 0c7320  push 0xa
    X86_AT(c, 0xc7320u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c7322  push 5
    X86_AT(c, 0xc7322u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7324  push 5
    X86_AT(c, 0xc7324u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7326  push 3
    X86_AT(c, 0xc7326u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7328  push 3
    X86_AT(c, 0xc7328u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c732a  push 2
    X86_AT(c, 0xc732au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c732c  call 0xc5d58
    X86_AT(c, 0xc732cu);
    push32(c, 0xc7331u); x86_call_known(c, 0xc5d58u, f_000c5d58); X86_RET(c, 0xc7331u);
    X86_TICK(c, 13);
    // 0c7331  push 0x23
    X86_AT(c, 0xc7331u);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0c7333  push 8
    X86_AT(c, 0xc7333u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c7335  push 0x1ddc
    X86_AT(c, 0xc7335u);
    { uint32_t v = 0x1DDCu; push32(c, v); }
    // 0c733a  jmp 0xc7424
    X86_AT(c, 0xc733au);
    goto L_c7424;
L_c733f:
    X86_TICK(c, 19);
    // 0c733f  push 0x7a
    X86_AT(c, 0xc733fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0c7341  push 0xc
    X86_AT(c, 0xc7341u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c7343  push 0xc
    X86_AT(c, 0xc7343u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c7345  push 9
    X86_AT(c, 0xc7345u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c7347  push 0x72
    X86_AT(c, 0xc7347u);
    { uint32_t v = 0x72u; push32(c, v); }
    // 0c7349  push 4
    X86_AT(c, 0xc7349u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c734b  call 0xc5d88
    X86_AT(c, 0xc734bu);
    push32(c, 0xc7350u); x86_call_known(c, 0xc5d88u, f_000c5d88); X86_RET(c, 0xc7350u);
    X86_TICK(c, 19);
    // 0c7350  push 0xa
    X86_AT(c, 0xc7350u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c7352  push 5
    X86_AT(c, 0xc7352u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7354  push 5
    X86_AT(c, 0xc7354u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7356  push 3
    X86_AT(c, 0xc7356u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7358  push 7
    X86_AT(c, 0xc7358u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c735a  push 2
    X86_AT(c, 0xc735au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c735c  call 0xc5d58
    X86_AT(c, 0xc735cu);
    push32(c, 0xc7361u); x86_call_known(c, 0xc5d58u, f_000c5d58); X86_RET(c, 0xc7361u);
    X86_TICK(c, 13);
    // 0c7361  push 0x13
    X86_AT(c, 0xc7361u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0c7363  push 2
    X86_AT(c, 0xc7363u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c7365  push 0x1dec
    X86_AT(c, 0xc7365u);
    { uint32_t v = 0x1DECu; push32(c, v); }
    // 0c736a  jmp 0xc7424
    X86_AT(c, 0xc736au);
    goto L_c7424;
L_c736f:
    X86_TICK(c, 19);
    // 0c736f  push 0x7a
    X86_AT(c, 0xc736fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0c7371  push 0x1f
    X86_AT(c, 0xc7371u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c7373  push 0x1f
    X86_AT(c, 0xc7373u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c7375  push 0x38
    X86_AT(c, 0xc7375u);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0c7377  push 0x38
    X86_AT(c, 0xc7377u);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0c7379  push 8
    X86_AT(c, 0xc7379u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c737b  call 0xc5d88
    X86_AT(c, 0xc737bu);
    push32(c, 0xc7380u); x86_call_known(c, 0xc5d88u, f_000c5d88); X86_RET(c, 0xc7380u);
    X86_TICK(c, 19);
    // 0c7380  push 0xa
    X86_AT(c, 0xc7380u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c7382  push 5
    X86_AT(c, 0xc7382u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7384  push 5
    X86_AT(c, 0xc7384u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c7386  push 3
    X86_AT(c, 0xc7386u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7388  push 3
    X86_AT(c, 0xc7388u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c738a  push 2
    X86_AT(c, 0xc738au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c738c  call 0xc5d58
    X86_AT(c, 0xc738cu);
    push32(c, 0xc7391u); x86_call_known(c, 0xc5d58u, f_000c5d58); X86_RET(c, 0xc7391u);
    X86_TICK(c, 13);
    // 0c7391  push 0xf
    X86_AT(c, 0xc7391u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c7393  push 0
    X86_AT(c, 0xc7393u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7395  push 0x1e00
    X86_AT(c, 0xc7395u);
    { uint32_t v = 0x1E00u; push32(c, v); }
    // 0c739a  jmp 0xc7424
    X86_AT(c, 0xc739au);
    goto L_c7424;
L_c739f:
    X86_TICK(c, 19);
    // 0c739f  push 0x7a
    X86_AT(c, 0xc739fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0c73a1  push 0x1f
    X86_AT(c, 0xc73a1u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c73a3  push 0x1f
    X86_AT(c, 0xc73a3u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c73a5  push 0x51
    X86_AT(c, 0xc73a5u);
    { uint32_t v = 0x51u; push32(c, v); }
    // 0c73a7  push 0x51
    X86_AT(c, 0xc73a7u);
    { uint32_t v = 0x51u; push32(c, v); }
    // 0c73a9  push 8
    X86_AT(c, 0xc73a9u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c73ab  call 0xc5d88
    X86_AT(c, 0xc73abu);
    push32(c, 0xc73b0u); x86_call_known(c, 0xc5d88u, f_000c5d88); X86_RET(c, 0xc73b0u);
    X86_TICK(c, 19);
    // 0c73b0  push 0xa
    X86_AT(c, 0xc73b0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c73b2  push 5
    X86_AT(c, 0xc73b2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c73b4  push 5
    X86_AT(c, 0xc73b4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c73b6  push 3
    X86_AT(c, 0xc73b6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c73b8  push 3
    X86_AT(c, 0xc73b8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c73ba  push 2
    X86_AT(c, 0xc73bau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c73bc  call 0xc5d58
    X86_AT(c, 0xc73bcu);
    push32(c, 0xc73c1u); x86_call_known(c, 0xc5d58u, f_000c5d58); X86_RET(c, 0xc73c1u);
    X86_TICK(c, 13);
    // 0c73c1  push 0xf
    X86_AT(c, 0xc73c1u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c73c3  push 0
    X86_AT(c, 0xc73c3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c73c5  push 0x1e14
    X86_AT(c, 0xc73c5u);
    { uint32_t v = 0x1E14u; push32(c, v); }
    // 0c73ca  jmp 0xc7424
    X86_AT(c, 0xc73cau);
    goto L_c7424;
L_c73cc:
    X86_TICK(c, 19);
    // 0c73cc  push 0x7a
    X86_AT(c, 0xc73ccu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0c73ce  push 0x1f
    X86_AT(c, 0xc73ceu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c73d0  push 0x1f
    X86_AT(c, 0xc73d0u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c73d2  push 0x38
    X86_AT(c, 0xc73d2u);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0c73d4  push 0x38
    X86_AT(c, 0xc73d4u);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0c73d6  push 8
    X86_AT(c, 0xc73d6u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c73d8  call 0xc5d88
    X86_AT(c, 0xc73d8u);
    push32(c, 0xc73ddu); x86_call_known(c, 0xc5d88u, f_000c5d88); X86_RET(c, 0xc73ddu);
    X86_TICK(c, 19);
    // 0c73dd  push 0xa
    X86_AT(c, 0xc73ddu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c73df  push 5
    X86_AT(c, 0xc73dfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c73e1  push 5
    X86_AT(c, 0xc73e1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c73e3  push 3
    X86_AT(c, 0xc73e3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c73e5  push 3
    X86_AT(c, 0xc73e5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c73e7  push 2
    X86_AT(c, 0xc73e7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c73e9  call 0xc5d58
    X86_AT(c, 0xc73e9u);
    push32(c, 0xc73eeu); x86_call_known(c, 0xc5d58u, f_000c5d58); X86_RET(c, 0xc73eeu);
    X86_TICK(c, 13);
    // 0c73ee  push 0xf
    X86_AT(c, 0xc73eeu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c73f0  push 1
    X86_AT(c, 0xc73f0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c73f2  push 0x1e24
    X86_AT(c, 0xc73f2u);
    { uint32_t v = 0x1E24u; push32(c, v); }
    // 0c73f7  jmp 0xc7424
    X86_AT(c, 0xc73f7u);
    goto L_c7424;
L_c73f9:
    X86_TICK(c, 19);
    // 0c73f9  push 0x7a
    X86_AT(c, 0xc73f9u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0c73fb  push 3
    X86_AT(c, 0xc73fbu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c73fd  push 4
    X86_AT(c, 0xc73fdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c73ff  push 4
    X86_AT(c, 0xc73ffu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c7401  push 4
    X86_AT(c, 0xc7401u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c7403  push 9
    X86_AT(c, 0xc7403u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c7405  call 0xc5d88
    X86_AT(c, 0xc7405u);
    push32(c, 0xc740au); x86_call_known(c, 0xc5d88u, f_000c5d88); X86_RET(c, 0xc740au);
    X86_TICK(c, 19);
    // 0c740a  push 0
    X86_AT(c, 0xc740au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c740c  push 7
    X86_AT(c, 0xc740cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c740e  push 3
    X86_AT(c, 0xc740eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7410  push 3
    X86_AT(c, 0xc7410u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7412  push 3
    X86_AT(c, 0xc7412u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c7414  push 2
    X86_AT(c, 0xc7414u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c7416  call 0xc5d58
    X86_AT(c, 0xc7416u);
    push32(c, 0xc741bu); x86_call_known(c, 0xc5d58u, f_000c5d58); X86_RET(c, 0xc741bu);
    X86_TICK(c, 6);
    // 0c741b  push 0x1b
    X86_AT(c, 0xc741bu);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0c741d  push 4
    X86_AT(c, 0xc741du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c741f  push 0x1e38
    X86_AT(c, 0xc741fu);
    { uint32_t v = 0x1E38u; push32(c, v); }
L_c7424:
    X86_TICK(c, 7);
    // 0c7424  call 0xc5ad0
    X86_AT(c, 0xc7424u);
    push32(c, 0xc7429u); x86_call_known(c, 0xc5ad0u, f_000c5ad0); X86_RET(c, 0xc7429u);
    X86_TICK(c, 18);
    // 0c7429  add esp, 0x3c
    X86_AT(c, 0xc7429u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c742c  leave 
    X86_AT(c, 0xc742cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c742d  ret 
    X86_AT(c, 0xc742du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc71e0u, "ran off the end of a function");
}
void f_000c7424(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0c7424  call 0xc5ad0
    X86_AT(c, 0xc7424u);
    push32(c, 0xc7429u); x86_call_known(c, 0xc5ad0u, f_000c5ad0); X86_RET(c, 0xc7429u);
    X86_TICK(c, 18);
    // 0c7429  add esp, 0x3c
    X86_AT(c, 0xc7429u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c742c  leave 
    X86_AT(c, 0xc742cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c742d  ret 
    X86_AT(c, 0xc742du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7424u, "ran off the end of a function");
}
void f_000c7430(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c7430  push ebp
    X86_AT(c, 0xc7430u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c7431  mov ebp, esp
    X86_AT(c, 0xc7431u);
    c.r[5] = c.r[4];
    // 0c7433  sub esp, 8
    X86_AT(c, 0xc7433u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c7436  push ebx
    X86_AT(c, 0xc7436u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7437  push esi
    X86_AT(c, 0xc7437u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c7438  push edi
    X86_AT(c, 0xc7438u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7439  push 7
    X86_AT(c, 0xc7439u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c743b  call 0xca0a0
    X86_AT(c, 0xc743bu);
    push32(c, 0xc7440u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc7440u);
    X86_TICK(c, 11);
    // 0c7440  push 0x1eec
    X86_AT(c, 0xc7440u);
    { uint32_t v = 0x1EECu; push32(c, v); }
    // 0c7445  push 7
    X86_AT(c, 0xc7445u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7447  call 0xc8cdc
    X86_AT(c, 0xc7447u);
    push32(c, 0xc744cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xc744cu);
    X86_TICK(c, 9);
    // 0c744c  push 7
    X86_AT(c, 0xc744cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c744e  call 0xca3cc
    X86_AT(c, 0xc744eu);
    push32(c, 0xc7453u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xc7453u);
    X86_TICK(c, 8);
    // 0c7453  sub eax, eax
    X86_AT(c, 0xc7453u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c7455  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc7455u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c7458  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc7458u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c745b  add esp, 0x10
    X86_AT(c, 0xc745bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c745e:
    X86_TICK(c, 11);
    // 0c745e  push 0x1f14
    X86_AT(c, 0xc745eu);
    { uint32_t v = 0x1F14u; push32(c, v); }
    // 0c7463  push 7
    X86_AT(c, 0xc7463u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7465  call 0xc8cdc
    X86_AT(c, 0xc7465u);
    push32(c, 0xc746au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xc746au);
    X86_TICK(c, 9);
    // 0c746a  push 7
    X86_AT(c, 0xc746au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c746c  call 0xca3cc
    X86_AT(c, 0xc746cu);
    push32(c, 0xc7471u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xc7471u);
    X86_TICK(c, 17);
    // 0c7471  lea ebx, [ebp - 8]
    X86_AT(c, 0xc7471u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c7474  push ebx
    X86_AT(c, 0xc7474u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7475  lea esi, [ebp - 4]
    X86_AT(c, 0xc7475u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c7478  push esi
    X86_AT(c, 0xc7478u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c7479  push 7
    X86_AT(c, 0xc7479u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c747b  call 0xcac7c
    X86_AT(c, 0xc747bu);
    push32(c, 0xc7480u); x86_call_known(c, 0xcac7cu, f_000cac7c); X86_RET(c, 0xc7480u);
    X86_TICK(c, 9);
    // 0c7480  push 7
    X86_AT(c, 0xc7480u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7482  call 0xc5f0c
    X86_AT(c, 0xc7482u);
    push32(c, 0xc7487u); x86_call_known(c, 0xc5f0cu, f_000c5f0c); X86_RET(c, 0xc7487u);
    X86_TICK(c, 22);
    // 0c7487  xchg edi, eax
    X86_AT(c, 0xc7487u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c7488  push dword ptr [ebx]
    X86_AT(c, 0xc7488u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0c748a  push dword ptr [esi]
    X86_AT(c, 0xc748au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0c748c  push 7
    X86_AT(c, 0xc748cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c748e  call 0xca9c8
    X86_AT(c, 0xc748eu);
    push32(c, 0xc7493u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc7493u);
    X86_TICK(c, 9);
    // 0c7493  add esp, 0x28
    X86_AT(c, 0xc7493u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c7496  cmp edi, 0xffffffff
    X86_AT(c, 0xc7496u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c7499  je 0xc74b1
    X86_AT(c, 0xc7499u);
    if (x86_cc(c, 4)) { goto L_c74b1; }
    X86_TICK(c, 7);
    // 0c749b  cmp edi, 1
    X86_AT(c, 0xc749bu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c749e  jl 0xc74a5
    X86_AT(c, 0xc749eu);
    if (x86_cc(c, 12)) { goto L_c74a5; }
    X86_TICK(c, 7);
    // 0c74a0  cmp edi, 0xc
    X86_AT(c, 0xc74a0u);
    (void)x86_sub(c, c.r[7], 0xCu, 0, 4);
    // 0c74a3  jle 0xc74b1
    X86_AT(c, 0xc74a3u);
    if (x86_cc(c, 14)) { goto L_c74b1; }
L_c74a5:
    X86_TICK(c, 9);
    // 0c74a5  push 1
    X86_AT(c, 0xc74a5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c74a7  call 0xc5ca4
    X86_AT(c, 0xc74a7u);
    push32(c, 0xc74acu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xc74acu);
    X86_TICK(c, 9);
    // 0c74ac  add esp, 4
    X86_AT(c, 0xc74acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c74af  jmp 0xc745e
    X86_AT(c, 0xc74afu);
    X86_POLL(c, 0xc745eu); goto L_c745e;
L_c74b1:
    X86_TICK(c, 7);
    // 0c74b1  cmp edi, 0xffffffff
    X86_AT(c, 0xc74b1u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c74b4  je 0xc74d5
    X86_AT(c, 0xc74b4u);
    if (x86_cc(c, 4)) { goto L_c74d5; }
    X86_TICK(c, 16);
    // 0c74b6  dec edi
    X86_AT(c, 0xc74b6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0c74b7  push dword ptr [edi*4 + 0x43e58]
    X86_AT(c, 0xc74b7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0x43E58u))); push32(c, v); }
    // 0c74be  push 7
    X86_AT(c, 0xc74beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c74c0  call 0xca414
    X86_AT(c, 0xc74c0u);
    push32(c, 0xc74c5u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xc74c5u);
    X86_TICK(c, 9);
    // 0c74c5  push 7
    X86_AT(c, 0xc74c5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c74c7  call 0xca3cc
    X86_AT(c, 0xc74c7u);
    push32(c, 0xc74ccu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xc74ccu);
    X86_TICK(c, 9);
    // 0c74cc  push edi
    X86_AT(c, 0xc74ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c74cd  call 0xc71e0
    X86_AT(c, 0xc74cdu);
    push32(c, 0xc74d2u); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xc74d2u);
    X86_TICK(c, 2);
    // 0c74d2  add esp, 0x10
    X86_AT(c, 0xc74d2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c74d5:
    X86_TICK(c, 28);
    // 0c74d5  pop edi
    X86_AT(c, 0xc74d5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c74d6  pop esi
    X86_AT(c, 0xc74d6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c74d7  pop ebx
    X86_AT(c, 0xc74d7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c74d8  leave 
    X86_AT(c, 0xc74d8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c74d9  ret 
    X86_AT(c, 0xc74d9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7430u, "ran off the end of a function");
}
void f_000c74dc(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c74dc  push ebp
    X86_AT(c, 0xc74dcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c74dd  mov ebp, esp
    X86_AT(c, 0xc74ddu);
    c.r[5] = c.r[4];
    // 0c74df  sub esp, 8
    X86_AT(c, 0xc74dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c74e2  push ebx
    X86_AT(c, 0xc74e2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c74e3  push esi
    X86_AT(c, 0xc74e3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c74e4  push edi
    X86_AT(c, 0xc74e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c74e5  push 7
    X86_AT(c, 0xc74e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c74e7  call 0xca0a0
    X86_AT(c, 0xc74e7u);
    push32(c, 0xc74ecu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc74ecu);
    X86_TICK(c, 11);
    // 0c74ec  push 0x1ff0
    X86_AT(c, 0xc74ecu);
    { uint32_t v = 0x1FF0u; push32(c, v); }
    // 0c74f1  push 7
    X86_AT(c, 0xc74f1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c74f3  call 0xc8cdc
    X86_AT(c, 0xc74f3u);
    push32(c, 0xc74f8u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xc74f8u);
    X86_TICK(c, 9);
    // 0c74f8  push 7
    X86_AT(c, 0xc74f8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c74fa  call 0xca3cc
    X86_AT(c, 0xc74fau);
    push32(c, 0xc74ffu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xc74ffu);
    X86_TICK(c, 8);
    // 0c74ff  sub eax, eax
    X86_AT(c, 0xc74ffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c7501  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc7501u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c7504  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc7504u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c7507  add esp, 0x10
    X86_AT(c, 0xc7507u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c750a:
    X86_TICK(c, 11);
    // 0c750a  push 0x2010
    X86_AT(c, 0xc750au);
    { uint32_t v = 0x2010u; push32(c, v); }
    // 0c750f  push 7
    X86_AT(c, 0xc750fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7511  call 0xc8cdc
    X86_AT(c, 0xc7511u);
    push32(c, 0xc7516u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xc7516u);
    X86_TICK(c, 9);
    // 0c7516  push 7
    X86_AT(c, 0xc7516u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7518  call 0xca3cc
    X86_AT(c, 0xc7518u);
    push32(c, 0xc751du); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xc751du);
    X86_TICK(c, 17);
    // 0c751d  lea ebx, [ebp - 8]
    X86_AT(c, 0xc751du);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c7520  push ebx
    X86_AT(c, 0xc7520u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7521  lea esi, [ebp - 4]
    X86_AT(c, 0xc7521u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c7524  push esi
    X86_AT(c, 0xc7524u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c7525  push 7
    X86_AT(c, 0xc7525u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7527  call 0xcac7c
    X86_AT(c, 0xc7527u);
    push32(c, 0xc752cu); x86_call_known(c, 0xcac7cu, f_000cac7c); X86_RET(c, 0xc752cu);
    X86_TICK(c, 9);
    // 0c752c  push 7
    X86_AT(c, 0xc752cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c752e  call 0xc5f0c
    X86_AT(c, 0xc752eu);
    push32(c, 0xc7533u); x86_call_known(c, 0xc5f0cu, f_000c5f0c); X86_RET(c, 0xc7533u);
    X86_TICK(c, 22);
    // 0c7533  xchg edi, eax
    X86_AT(c, 0xc7533u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c7534  push dword ptr [ebx]
    X86_AT(c, 0xc7534u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0c7536  push dword ptr [esi]
    X86_AT(c, 0xc7536u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0c7538  push 7
    X86_AT(c, 0xc7538u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c753a  call 0xca9c8
    X86_AT(c, 0xc753au);
    push32(c, 0xc753fu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc753fu);
    X86_TICK(c, 9);
    // 0c753f  add esp, 0x28
    X86_AT(c, 0xc753fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c7542  cmp edi, 0xffffffff
    X86_AT(c, 0xc7542u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c7545  je 0xc755d
    X86_AT(c, 0xc7545u);
    if (x86_cc(c, 4)) { goto L_c755d; }
    X86_TICK(c, 7);
    // 0c7547  cmp edi, 1
    X86_AT(c, 0xc7547u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c754a  jl 0xc7551
    X86_AT(c, 0xc754au);
    if (x86_cc(c, 12)) { goto L_c7551; }
    X86_TICK(c, 7);
    // 0c754c  cmp edi, 0xe
    X86_AT(c, 0xc754cu);
    (void)x86_sub(c, c.r[7], 0xEu, 0, 4);
    // 0c754f  jle 0xc755d
    X86_AT(c, 0xc754fu);
    if (x86_cc(c, 14)) { goto L_c755d; }
L_c7551:
    X86_TICK(c, 9);
    // 0c7551  push 1
    X86_AT(c, 0xc7551u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c7553  call 0xc5ca4
    X86_AT(c, 0xc7553u);
    push32(c, 0xc7558u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xc7558u);
    X86_TICK(c, 9);
    // 0c7558  add esp, 4
    X86_AT(c, 0xc7558u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c755b  jmp 0xc750a
    X86_AT(c, 0xc755bu);
    X86_POLL(c, 0xc750au); goto L_c750a;
L_c755d:
    X86_TICK(c, 7);
    // 0c755d  cmp edi, 0xffffffff
    X86_AT(c, 0xc755du);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c7560  je 0xc7581
    X86_AT(c, 0xc7560u);
    if (x86_cc(c, 4)) { goto L_c7581; }
    X86_TICK(c, 16);
    // 0c7562  dec edi
    X86_AT(c, 0xc7562u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0c7563  push dword ptr [edi*4 + 0x43e80]
    X86_AT(c, 0xc7563u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0x43E80u))); push32(c, v); }
    // 0c756a  push 7
    X86_AT(c, 0xc756au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c756c  call 0xca414
    X86_AT(c, 0xc756cu);
    push32(c, 0xc7571u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xc7571u);
    X86_TICK(c, 9);
    // 0c7571  push 7
    X86_AT(c, 0xc7571u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c7573  call 0xca3cc
    X86_AT(c, 0xc7573u);
    push32(c, 0xc7578u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xc7578u);
    X86_TICK(c, 9);
    // 0c7578  push edi
    X86_AT(c, 0xc7578u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7579  call 0xc5ca4
    X86_AT(c, 0xc7579u);
    push32(c, 0xc757eu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xc757eu);
    X86_TICK(c, 2);
    // 0c757e  add esp, 0x10
    X86_AT(c, 0xc757eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c7581:
    X86_TICK(c, 28);
    // 0c7581  pop edi
    X86_AT(c, 0xc7581u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7582  pop esi
    X86_AT(c, 0xc7582u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c7583  pop ebx
    X86_AT(c, 0xc7583u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c7584  leave 
    X86_AT(c, 0xc7584u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c7585  ret 
    X86_AT(c, 0xc7585u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc74dcu, "ran off the end of a function");
}
void f_000c7588(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0c7588  push ebp
    X86_AT(c, 0xc7588u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c7589  mov ebp, esp
    X86_AT(c, 0xc7589u);
    c.r[5] = c.r[4];
    // 0c758b  push 0xffffffff
    X86_AT(c, 0xc758bu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c758d  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc758du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c7590  push dword ptr [eax*4 + 0x43d94]
    X86_AT(c, 0xc7590u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x43D94u))); push32(c, v); }
    // 0c7597  call 0xc4c24
    X86_AT(c, 0xc7597u);
    push32(c, 0xc759cu); x86_call_known(c, 0xc4c24u, f_000c4c24); X86_RET(c, 0xc759cu);
    X86_TICK(c, 16);
    // 0c759c  leave 
    X86_AT(c, 0xc759cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c759d  ret 
    X86_AT(c, 0xc759du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7588u, "ran off the end of a function");
}
void f_000c75a0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c75a0  push 1
    X86_AT(c, 0xc75a0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c75a2  call 0xc8f40
    X86_AT(c, 0xc75a2u);
    push32(c, 0xc75a7u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xc75a7u);
    X86_TICK(c, 15);
    // 0c75a7  push 0
    X86_AT(c, 0xc75a7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c75a9  push 0x96
    X86_AT(c, 0xc75a9u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0c75ae  push 0xc8
    X86_AT(c, 0xc75aeu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0c75b3  push 1
    X86_AT(c, 0xc75b3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c75b5  call 0xc8d8c
    X86_AT(c, 0xc75b5u);
    push32(c, 0xc75bau); x86_call_known(c, 0xc8d8cu, f_000c8d8c); X86_RET(c, 0xc75bau);
    X86_TICK(c, 15);
    // 0c75ba  push 0
    X86_AT(c, 0xc75bau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c75bc  push 0xff
    X86_AT(c, 0xc75bcu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0c75c1  push 0
    X86_AT(c, 0xc75c1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c75c3  push 2
    X86_AT(c, 0xc75c3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c75c5  call 0xc8d8c
    X86_AT(c, 0xc75c5u);
    push32(c, 0xc75cau); x86_call_known(c, 0xc8d8cu, f_000c8d8c); X86_RET(c, 0xc75cau);
    X86_TICK(c, 15);
    // 0c75ca  push 5
    X86_AT(c, 0xc75cau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c75cc  push 0xc8
    X86_AT(c, 0xc75ccu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0c75d1  push 0
    X86_AT(c, 0xc75d1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c75d3  push 4
    X86_AT(c, 0xc75d3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c75d5  call 0xc8d8c
    X86_AT(c, 0xc75d5u);
    push32(c, 0xc75dau); x86_call_known(c, 0xc8d8cu, f_000c8d8c); X86_RET(c, 0xc75dau);
    X86_TICK(c, 15);
    // 0c75da  push 0
    X86_AT(c, 0xc75dau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c75dc  push 0x64
    X86_AT(c, 0xc75dcu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0c75de  push 0
    X86_AT(c, 0xc75deu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c75e0  push 5
    X86_AT(c, 0xc75e0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c75e2  call 0xc8d8c
    X86_AT(c, 0xc75e2u);
    push32(c, 0xc75e7u); x86_call_known(c, 0xc8d8cu, f_000c8d8c); X86_RET(c, 0xc75e7u);
    X86_TICK(c, 17);
    // 0c75e7  add esp, 0x44
    X86_AT(c, 0xc75e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0c75ea  push 0x96
    X86_AT(c, 0xc75eau);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0c75ef  push 0xff
    X86_AT(c, 0xc75efu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0c75f4  push 0
    X86_AT(c, 0xc75f4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c75f6  push 6
    X86_AT(c, 0xc75f6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c75f8  call 0xc8d8c
    X86_AT(c, 0xc75f8u);
    push32(c, 0xc75fdu); x86_call_known(c, 0xc8d8cu, f_000c8d8c); X86_RET(c, 0xc75fdu);
    X86_TICK(c, 15);
    // 0c75fd  push 0xff
    X86_AT(c, 0xc75fdu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0c7602  push 0xff
    X86_AT(c, 0xc7602u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0c7607  push 0xff
    X86_AT(c, 0xc7607u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0c760c  push 7
    X86_AT(c, 0xc760cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c760e  call 0xc8d8c
    X86_AT(c, 0xc760eu);
    push32(c, 0xc7613u); x86_call_known(c, 0xc8d8cu, f_000c8d8c); X86_RET(c, 0xc7613u);
    X86_TICK(c, 9);
    // 0c7613  push 0
    X86_AT(c, 0xc7613u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7615  call 0xc8f40
    X86_AT(c, 0xc7615u);
    push32(c, 0xc761au); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xc761au);
    X86_TICK(c, 12);
    // 0c761a  add esp, 0x24
    X86_AT(c, 0xc761au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0c761d  ret 
    X86_AT(c, 0xc761du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc75a0u, "ran off the end of a function");
}
void f_000c7620(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c7620  push 1
    X86_AT(c, 0xc7620u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c7622  call 0xc8f40
    X86_AT(c, 0xc7622u);
    push32(c, 0xc7627u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xc7627u);
    X86_TICK(c, 7);
    // 0c7627  call 0xc8d18
    X86_AT(c, 0xc7627u);
    push32(c, 0xc762cu); x86_call_known(c, 0xc8d18u, f_000c8d18); X86_RET(c, 0xc762cu);
    X86_TICK(c, 9);
    // 0c762c  push 0
    X86_AT(c, 0xc762cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c762e  call 0xc8f40
    X86_AT(c, 0xc762eu);
    push32(c, 0xc7633u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xc7633u);
    X86_TICK(c, 12);
    // 0c7633  add esp, 8
    X86_AT(c, 0xc7633u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c7636  ret 
    X86_AT(c, 0xc7636u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7620u, "ran off the end of a function");
}
void f_000c7638(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0c7638  call 0xc75a0
    X86_AT(c, 0xc7638u);
    push32(c, 0xc763du); x86_call_known(c, 0xc75a0u, f_000c75a0); X86_RET(c, 0xc763du);
    X86_TICK(c, 7);
    // 0c763d  call 0xc7620
    X86_AT(c, 0xc763du);
    push32(c, 0xc7642u); x86_call_known(c, 0xc7620u, f_000c7620); X86_RET(c, 0xc7642u);
    X86_TICK(c, 7);
    // 0c7642  call 0xc75a0
    X86_AT(c, 0xc7642u);
    push32(c, 0xc7647u); x86_call_known(c, 0xc75a0u, f_000c75a0); X86_RET(c, 0xc7647u);
    X86_TICK(c, 7);
    // 0c7647  call 0xc7620
    X86_AT(c, 0xc7647u);
    push32(c, 0xc764cu); x86_call_known(c, 0xc7620u, f_000c7620); X86_RET(c, 0xc764cu);
    X86_TICK(c, 10);
    // 0c764c  ret 
    X86_AT(c, 0xc764cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7638u, "ran off the end of a function");
}
void f_000c7650(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0c7650  push ebp
    X86_AT(c, 0xc7650u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c7651  mov ebp, esp
    X86_AT(c, 0xc7651u);
    c.r[5] = c.r[4];
    // 0c7653  push ebx
    X86_AT(c, 0xc7653u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7654  push esi
    X86_AT(c, 0xc7654u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c7655  push edi
    X86_AT(c, 0xc7655u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7656  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc7656u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c7659  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc7659u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c765c  and edi, edi
    X86_AT(c, 0xc765cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c765e  jne 0xc7678
    X86_AT(c, 0xc765eu);
    if (x86_cc(c, 5)) { goto L_c7678; }
    X86_TICK(c, 4);
    // 0c7660  mov byte ptr [0x43ece], 0x30
    X86_AT(c, 0xc7660u);
    wr8((c.sbase[3] + (uint32_t)(0x43ECEu)), 0x30u);
    // 0c7667  mov ebx, 0x43ece
    X86_AT(c, 0xc7667u);
    c.r[3] = 0x43ECEu;
L_c766c:
    X86_TICK(c, 7);
    // 0c766c  cmp esi, 1
    X86_AT(c, 0xc766cu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0c766f  jle 0xc76af
    X86_AT(c, 0xc766fu);
    if (x86_cc(c, 14)) { goto L_c76af; }
    X86_TICK(c, 13);
    // 0c7671  dec ebx
    X86_AT(c, 0xc7671u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0c7672  mov byte ptr [ebx], 0x20
    X86_AT(c, 0xc7672u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3])), 0x20u);
    // 0c7675  dec esi
    X86_AT(c, 0xc7675u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0c7676  jmp 0xc766c
    X86_AT(c, 0xc7676u);
    X86_POLL(c, 0xc766cu); goto L_c766c;
L_c7678:
    X86_TICK(c, 2);
    // 0c7678  mov ebx, 0x43ece
    X86_AT(c, 0xc7678u);
    c.r[3] = 0x43ECEu;
L_c767d:
    X86_TICK(c, 7);
    // 0c767d  and edi, edi
    X86_AT(c, 0xc767du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c767f  jle 0xc76a3
    X86_AT(c, 0xc767fu);
    if (x86_cc(c, 14)) { goto L_c76a3; }
    X86_TICK(c, 59);
    // 0c7681  mov eax, edi
    X86_AT(c, 0xc7681u);
    c.r[0] = c.r[7];
    // 0c7683  cdq 
    X86_AT(c, 0xc7683u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c7684  mov ecx, 0xa
    X86_AT(c, 0xc7684u);
    c.r[1] = 0xAu;
    // 0c7689  idiv ecx
    X86_AT(c, 0xc7689u);
    x86_idiv(c, c.r[1], 4, 0xc7689u);
    // 0c768b  add dl, 0x30
    X86_AT(c, 0xc768bu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x30u, 0, 1)); }
    // 0c768e  mov byte ptr [ebx], dl
    X86_AT(c, 0xc768eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3])), g8(c, 2));
    // 0c7690  dec esi
    X86_AT(c, 0xc7690u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0c7691  cmp esi, 1
    X86_AT(c, 0xc7691u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0c7694  jl 0xc76af
    X86_AT(c, 0xc7694u);
    if (x86_cc(c, 12)) { goto L_c76af; }
    X86_TICK(c, 59);
    // 0c7696  xchg edi, eax
    X86_AT(c, 0xc7696u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c7697  cdq 
    X86_AT(c, 0xc7697u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c7698  mov ecx, 0xa
    X86_AT(c, 0xc7698u);
    c.r[1] = 0xAu;
    // 0c769d  idiv ecx
    X86_AT(c, 0xc769du);
    x86_idiv(c, c.r[1], 4, 0xc769du);
    // 0c769f  xchg edi, eax
    X86_AT(c, 0xc769fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c76a0  dec ebx
    X86_AT(c, 0xc76a0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0c76a1  jmp 0xc767d
    X86_AT(c, 0xc76a1u);
    X86_POLL(c, 0xc767du); goto L_c767d;
L_c76a3:
    X86_TICK(c, 7);
    // 0c76a3  and esi, esi
    X86_AT(c, 0xc76a3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c76a5  jle 0xc76ae
    X86_AT(c, 0xc76a5u);
    if (x86_cc(c, 14)) { goto L_c76ae; }
    X86_TICK(c, 13);
    // 0c76a7  mov byte ptr [ebx], 0x20
    X86_AT(c, 0xc76a7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3])), 0x20u);
    // 0c76aa  dec ebx
    X86_AT(c, 0xc76aau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0c76ab  dec esi
    X86_AT(c, 0xc76abu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0c76ac  jmp 0xc76a3
    X86_AT(c, 0xc76acu);
    X86_POLL(c, 0xc76a3u); goto L_c76a3;
L_c76ae:
    X86_TICK(c, 2);
    // 0c76ae  inc ebx
    X86_AT(c, 0xc76aeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_c76af:
    X86_TICK(c, 30);
    // 0c76af  mov eax, ebx
    X86_AT(c, 0xc76afu);
    c.r[0] = c.r[3];
    // 0c76b1  pop edi
    X86_AT(c, 0xc76b1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c76b2  pop esi
    X86_AT(c, 0xc76b2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c76b3  pop ebx
    X86_AT(c, 0xc76b3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c76b4  leave 
    X86_AT(c, 0xc76b4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c76b5  ret 
    X86_AT(c, 0xc76b5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7650u, "ran off the end of a function");
}
void f_000c76b8(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0c76b8  push ebp
    X86_AT(c, 0xc76b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c76b9  mov ebp, esp
    X86_AT(c, 0xc76b9u);
    c.r[5] = c.r[4];
    // 0c76bb  push esi
    X86_AT(c, 0xc76bbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c76bc  push edi
    X86_AT(c, 0xc76bcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c76bd  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc76bdu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c76c0  mov ecx, 0x43ed0
    X86_AT(c, 0xc76c0u);
    c.r[1] = 0x43ED0u;
L_c76c5:
    X86_TICK(c, 11);
    // 0c76c5  mov al, byte ptr [edi]
    X86_AT(c, 0xc76c5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0c76c7  and al, al
    X86_AT(c, 0xc76c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c76c9  je 0xc7920
    X86_AT(c, 0xc76c9u);
    if (x86_cc(c, 4)) { goto L_c7920; }
    X86_TICK(c, 12);
    // 0c76cf  movzx edx, al
    X86_AT(c, 0xc76cfu);
    c.r[2] = g8(c, 0);
    // 0c76d2  sub edx, 0x20
    X86_AT(c, 0xc76d2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0c76d5  cmp edx, 0x3a
    X86_AT(c, 0xc76d5u);
    (void)x86_sub(c, c.r[2], 0x3Au, 0, 4);
    // 0c76d8  ja 0xc7910
    X86_AT(c, 0xc76d8u);
    if (x86_cc(c, 7)) { goto L_c7910; }
    X86_TICK(c, 7);
    // 0c76de  jmp dword ptr cs:[edx*4 + 0xc76e6]
    X86_AT(c, 0xc76deu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC76E6u)));
      switch (t) {
      case 0xc77d2u: goto L_c77d2;
      case 0xc77dbu: goto L_c77db;
      case 0xc77e4u: goto L_c77e4;
      case 0xc77edu: goto L_c77ed;
      case 0xc77f6u: goto L_c77f6;
      case 0xc77ffu: goto L_c77ff;
      case 0xc7808u: goto L_c7808;
      case 0xc7811u: goto L_c7811;
      case 0xc781au: goto L_c781a;
      case 0xc7823u: goto L_c7823;
      case 0xc782cu: goto L_c782c;
      case 0xc7835u: goto L_c7835;
      case 0xc783eu: goto L_c783e;
      case 0xc7847u: goto L_c7847;
      case 0xc7850u: goto L_c7850;
      case 0xc7859u: goto L_c7859;
      case 0xc7862u: goto L_c7862;
      case 0xc786bu: goto L_c786b;
      case 0xc7874u: goto L_c7874;
      case 0xc787du: goto L_c787d;
      case 0xc7886u: goto L_c7886;
      case 0xc788fu: goto L_c788f;
      case 0xc7898u: goto L_c7898;
      case 0xc78a1u: goto L_c78a1;
      case 0xc78aau: goto L_c78aa;
      case 0xc78b3u: goto L_c78b3;
      case 0xc78bcu: goto L_c78bc;
      case 0xc78c2u: goto L_c78c2;
      case 0xc78c8u: goto L_c78c8;
      case 0xc78ceu: goto L_c78ce;
      case 0xc78d4u: goto L_c78d4;
      case 0xc78dau: goto L_c78da;
      case 0xc78e0u: goto L_c78e0;
      case 0xc78e6u: goto L_c78e6;
      case 0xc78ecu: goto L_c78ec;
      case 0xc78f2u: goto L_c78f2;
      case 0xc78f8u: goto L_c78f8;
      case 0xc78feu: goto L_c78fe;
      case 0xc7904u: goto L_c7904;
      case 0xc790au: goto L_c790a;
      case 0xc7910u: goto L_c7910;
      default: x86_jump(c, t); return; } }
L_c77d2:
    X86_TICK(c, 9);
    // 0c77d2  mov si, 0x4681
    X86_AT(c, 0xc77d2u);
    s16(c, 6, 0x4681u);
    // 0c77d6  jmp 0xc7914
    X86_AT(c, 0xc77d6u);
    goto L_c7914;
L_c77db:
    X86_TICK(c, 9);
    // 0c77db  mov si, 0x75eb
    X86_AT(c, 0xc77dbu);
    s16(c, 6, 0x75EBu);
    // 0c77df  jmp 0xc7914
    X86_AT(c, 0xc77dfu);
    goto L_c7914;
L_c77e4:
    X86_TICK(c, 9);
    // 0c77e4  mov si, 0x74eb
    X86_AT(c, 0xc77e4u);
    s16(c, 6, 0x74EBu);
    // 0c77e8  jmp 0xc7914
    X86_AT(c, 0xc77e8u);
    goto L_c7914;
L_c77ed:
    X86_TICK(c, 9);
    // 0c77ed  mov si, 0x5e81
    X86_AT(c, 0xc77edu);
    s16(c, 6, 0x5E81u);
    // 0c77f1  jmp 0xc7914
    X86_AT(c, 0xc77f1u);
    goto L_c7914;
L_c77f6:
    X86_TICK(c, 9);
    // 0c77f6  mov si, 0x80eb
    X86_AT(c, 0xc77f6u);
    s16(c, 6, 0x80EBu);
    // 0c77fa  jmp 0xc7914
    X86_AT(c, 0xc77fau);
    goto L_c7914;
L_c77ff:
    X86_TICK(c, 9);
    // 0c77ff  mov si, 0x76eb
    X86_AT(c, 0xc77ffu);
    s16(c, 6, 0x76EBu);
    // 0c7803  jmp 0xc7914
    X86_AT(c, 0xc7803u);
    goto L_c7914;
L_c7808:
    X86_TICK(c, 9);
    // 0c7808  mov si, 0x77eb
    X86_AT(c, 0xc7808u);
    s16(c, 6, 0x77EBu);
    // 0c780c  jmp 0xc7914
    X86_AT(c, 0xc780cu);
    goto L_c7914;
L_c7811:
    X86_TICK(c, 9);
    // 0c7811  mov si, 0x78eb
    X86_AT(c, 0xc7811u);
    s16(c, 6, 0x78EBu);
    // 0c7815  jmp 0xc7914
    X86_AT(c, 0xc7815u);
    goto L_c7914;
L_c781a:
    X86_TICK(c, 9);
    // 0c781a  mov si, 0x79eb
    X86_AT(c, 0xc781au);
    s16(c, 6, 0x79EBu);
    // 0c781e  jmp 0xc7914
    X86_AT(c, 0xc781eu);
    goto L_c7914;
L_c7823:
    X86_TICK(c, 9);
    // 0c7823  mov si, 0x7aeb
    X86_AT(c, 0xc7823u);
    s16(c, 6, 0x7AEBu);
    // 0c7827  jmp 0xc7914
    X86_AT(c, 0xc7827u);
    goto L_c7914;
L_c782c:
    X86_TICK(c, 9);
    // 0c782c  mov si, 0x7beb
    X86_AT(c, 0xc782cu);
    s16(c, 6, 0x7BEBu);
    // 0c7830  jmp 0xc7914
    X86_AT(c, 0xc7830u);
    goto L_c7914;
L_c7835:
    X86_TICK(c, 9);
    // 0c7835  mov si, 0x7ceb
    X86_AT(c, 0xc7835u);
    s16(c, 6, 0x7CEBu);
    // 0c7839  jmp 0xc7914
    X86_AT(c, 0xc7839u);
    goto L_c7914;
L_c783e:
    X86_TICK(c, 9);
    // 0c783e  mov si, 0x7deb
    X86_AT(c, 0xc783eu);
    s16(c, 6, 0x7DEBu);
    // 0c7842  jmp 0xc7914
    X86_AT(c, 0xc7842u);
    goto L_c7914;
L_c7847:
    X86_TICK(c, 9);
    // 0c7847  mov si, 0x7eeb
    X86_AT(c, 0xc7847u);
    s16(c, 6, 0x7EEBu);
    // 0c784b  jmp 0xc7914
    X86_AT(c, 0xc784bu);
    goto L_c7914;
L_c7850:
    X86_TICK(c, 9);
    // 0c7850  mov si, 0x40eb
    X86_AT(c, 0xc7850u);
    s16(c, 6, 0x40EBu);
    // 0c7854  jmp 0xc7914
    X86_AT(c, 0xc7854u);
    goto L_c7914;
L_c7859:
    X86_TICK(c, 9);
    // 0c7859  mov si, 0x41eb
    X86_AT(c, 0xc7859u);
    s16(c, 6, 0x41EBu);
    // 0c785d  jmp 0xc7914
    X86_AT(c, 0xc785du);
    goto L_c7914;
L_c7862:
    X86_TICK(c, 9);
    // 0c7862  mov si, 0x42eb
    X86_AT(c, 0xc7862u);
    s16(c, 6, 0x42EBu);
    // 0c7866  jmp 0xc7914
    X86_AT(c, 0xc7866u);
    goto L_c7914;
L_c786b:
    X86_TICK(c, 9);
    // 0c786b  mov si, 0x43eb
    X86_AT(c, 0xc786bu);
    s16(c, 6, 0x43EBu);
    // 0c786f  jmp 0xc7914
    X86_AT(c, 0xc786fu);
    goto L_c7914;
L_c7874:
    X86_TICK(c, 9);
    // 0c7874  mov si, 0x44eb
    X86_AT(c, 0xc7874u);
    s16(c, 6, 0x44EBu);
    // 0c7878  jmp 0xc7914
    X86_AT(c, 0xc7878u);
    goto L_c7914;
L_c787d:
    X86_TICK(c, 9);
    // 0c787d  mov si, 0x45eb
    X86_AT(c, 0xc787du);
    s16(c, 6, 0x45EBu);
    // 0c7881  jmp 0xc7914
    X86_AT(c, 0xc7881u);
    goto L_c7914;
L_c7886:
    X86_TICK(c, 9);
    // 0c7886  mov si, 0x46eb
    X86_AT(c, 0xc7886u);
    s16(c, 6, 0x46EBu);
    // 0c788a  jmp 0xc7914
    X86_AT(c, 0xc788au);
    goto L_c7914;
L_c788f:
    X86_TICK(c, 9);
    // 0c788f  mov si, 0x47eb
    X86_AT(c, 0xc788fu);
    s16(c, 6, 0x47EBu);
    // 0c7893  jmp 0xc7914
    X86_AT(c, 0xc7893u);
    goto L_c7914;
L_c7898:
    X86_TICK(c, 9);
    // 0c7898  mov si, 0x48eb
    X86_AT(c, 0xc7898u);
    s16(c, 6, 0x48EBu);
    // 0c789c  jmp 0xc7914
    X86_AT(c, 0xc789cu);
    goto L_c7914;
L_c78a1:
    X86_TICK(c, 9);
    // 0c78a1  mov si, 0x49eb
    X86_AT(c, 0xc78a1u);
    s16(c, 6, 0x49EBu);
    // 0c78a5  jmp 0xc7914
    X86_AT(c, 0xc78a5u);
    goto L_c7914;
L_c78aa:
    X86_TICK(c, 9);
    // 0c78aa  mov si, 0x4aeb
    X86_AT(c, 0xc78aau);
    s16(c, 6, 0x4AEBu);
    // 0c78ae  jmp 0xc7914
    X86_AT(c, 0xc78aeu);
    goto L_c7914;
L_c78b3:
    X86_TICK(c, 9);
    // 0c78b3  mov si, 0x4beb
    X86_AT(c, 0xc78b3u);
    s16(c, 6, 0x4BEBu);
    // 0c78b7  jmp 0xc7914
    X86_AT(c, 0xc78b7u);
    goto L_c7914;
L_c78bc:
    X86_TICK(c, 9);
    // 0c78bc  mov si, 0x4ceb
    X86_AT(c, 0xc78bcu);
    s16(c, 6, 0x4CEBu);
    // 0c78c0  jmp 0xc7914
    X86_AT(c, 0xc78c0u);
    goto L_c7914;
L_c78c2:
    X86_TICK(c, 9);
    // 0c78c2  mov si, 0x4deb
    X86_AT(c, 0xc78c2u);
    s16(c, 6, 0x4DEBu);
    // 0c78c6  jmp 0xc7914
    X86_AT(c, 0xc78c6u);
    goto L_c7914;
L_c78c8:
    X86_TICK(c, 9);
    // 0c78c8  mov si, 0x4eeb
    X86_AT(c, 0xc78c8u);
    s16(c, 6, 0x4EEBu);
    // 0c78cc  jmp 0xc7914
    X86_AT(c, 0xc78ccu);
    goto L_c7914;
L_c78ce:
    X86_TICK(c, 9);
    // 0c78ce  mov si, 0x4feb
    X86_AT(c, 0xc78ceu);
    s16(c, 6, 0x4FEBu);
    // 0c78d2  jmp 0xc7914
    X86_AT(c, 0xc78d2u);
    goto L_c7914;
L_c78d4:
    X86_TICK(c, 9);
    // 0c78d4  mov si, 0x50eb
    X86_AT(c, 0xc78d4u);
    s16(c, 6, 0x50EBu);
    // 0c78d8  jmp 0xc7914
    X86_AT(c, 0xc78d8u);
    goto L_c7914;
L_c78da:
    X86_TICK(c, 9);
    // 0c78da  mov si, 0x51eb
    X86_AT(c, 0xc78dau);
    s16(c, 6, 0x51EBu);
    // 0c78de  jmp 0xc7914
    X86_AT(c, 0xc78deu);
    goto L_c7914;
L_c78e0:
    X86_TICK(c, 9);
    // 0c78e0  mov si, 0x52eb
    X86_AT(c, 0xc78e0u);
    s16(c, 6, 0x52EBu);
    // 0c78e4  jmp 0xc7914
    X86_AT(c, 0xc78e4u);
    goto L_c7914;
L_c78e6:
    X86_TICK(c, 9);
    // 0c78e6  mov si, 0x53eb
    X86_AT(c, 0xc78e6u);
    s16(c, 6, 0x53EBu);
    // 0c78ea  jmp 0xc7914
    X86_AT(c, 0xc78eau);
    goto L_c7914;
L_c78ec:
    X86_TICK(c, 9);
    // 0c78ec  mov si, 0x54eb
    X86_AT(c, 0xc78ecu);
    s16(c, 6, 0x54EBu);
    // 0c78f0  jmp 0xc7914
    X86_AT(c, 0xc78f0u);
    goto L_c7914;
L_c78f2:
    X86_TICK(c, 9);
    // 0c78f2  mov si, 0x55eb
    X86_AT(c, 0xc78f2u);
    s16(c, 6, 0x55EBu);
    // 0c78f6  jmp 0xc7914
    X86_AT(c, 0xc78f6u);
    goto L_c7914;
L_c78f8:
    X86_TICK(c, 9);
    // 0c78f8  mov si, 0x56eb
    X86_AT(c, 0xc78f8u);
    s16(c, 6, 0x56EBu);
    // 0c78fc  jmp 0xc7914
    X86_AT(c, 0xc78fcu);
    goto L_c7914;
L_c78fe:
    X86_TICK(c, 9);
    // 0c78fe  mov si, 0x57eb
    X86_AT(c, 0xc78feu);
    s16(c, 6, 0x57EBu);
    // 0c7902  jmp 0xc7914
    X86_AT(c, 0xc7902u);
    goto L_c7914;
L_c7904:
    X86_TICK(c, 9);
    // 0c7904  mov si, 0x58eb
    X86_AT(c, 0xc7904u);
    s16(c, 6, 0x58EBu);
    // 0c7908  jmp 0xc7914
    X86_AT(c, 0xc7908u);
    goto L_c7914;
L_c790a:
    X86_TICK(c, 9);
    // 0c790a  mov si, 0x59eb
    X86_AT(c, 0xc790au);
    s16(c, 6, 0x59EBu);
    // 0c790e  jmp 0xc7914
    X86_AT(c, 0xc790eu);
    goto L_c7914;
L_c7910:
    X86_TICK(c, 2);
    // 0c7910  mov si, 0x4081
    X86_AT(c, 0xc7910u);
    s16(c, 6, 0x4081u);
L_c7914:
    X86_TICK(c, 13);
    // 0c7914  mov word ptr [ecx], si
    X86_AT(c, 0xc7914u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[6] & 0xFFFFu));
    // 0c7917  inc edi
    X86_AT(c, 0xc7917u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c7918  add ecx, 2
    X86_AT(c, 0xc7918u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
    // 0c791b  jmp 0xc76c5
    X86_AT(c, 0xc791bu);
    X86_POLL(c, 0xc76c5u); goto L_c76c5;
L_c7920:
    X86_TICK(c, 28);
    // 0c7920  mov word ptr [ecx], 0
    X86_AT(c, 0xc7920u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0c7925  mov eax, 0x43ed0
    X86_AT(c, 0xc7925u);
    c.r[0] = 0x43ED0u;
    // 0c792a  pop edi
    X86_AT(c, 0xc792au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c792b  pop esi
    X86_AT(c, 0xc792bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c792c  leave 
    X86_AT(c, 0xc792cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c792d  ret 
    X86_AT(c, 0xc792du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc76b8u, "ran off the end of a function");
}
void f_000c7914(X86Cpu& c) {
    goto L_c7914;
L_c76c5:
    X86_TICK(c, 11);
    // 0c76c5  mov al, byte ptr [edi]
    X86_AT(c, 0xc76c5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0c76c7  and al, al
    X86_AT(c, 0xc76c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c76c9  je 0xc7920
    X86_AT(c, 0xc76c9u);
    if (x86_cc(c, 4)) { goto L_c7920; }
    X86_TICK(c, 12);
    // 0c76cf  movzx edx, al
    X86_AT(c, 0xc76cfu);
    c.r[2] = g8(c, 0);
    // 0c76d2  sub edx, 0x20
    X86_AT(c, 0xc76d2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0c76d5  cmp edx, 0x3a
    X86_AT(c, 0xc76d5u);
    (void)x86_sub(c, c.r[2], 0x3Au, 0, 4);
    // 0c76d8  ja 0xc7910
    X86_AT(c, 0xc76d8u);
    if (x86_cc(c, 7)) { goto L_c7910; }
    X86_TICK(c, 7);
    // 0c76de  jmp dword ptr cs:[edx*4 + 0xc76e6]
    X86_AT(c, 0xc76deu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC76E6u)));
      switch (t) {
      case 0xc77d2u: goto L_c77d2;
      case 0xc77dbu: goto L_c77db;
      case 0xc77e4u: goto L_c77e4;
      case 0xc77edu: goto L_c77ed;
      case 0xc77f6u: goto L_c77f6;
      case 0xc77ffu: goto L_c77ff;
      case 0xc7808u: goto L_c7808;
      case 0xc7811u: goto L_c7811;
      case 0xc781au: goto L_c781a;
      case 0xc7823u: goto L_c7823;
      case 0xc782cu: goto L_c782c;
      case 0xc7835u: goto L_c7835;
      case 0xc783eu: goto L_c783e;
      case 0xc7847u: goto L_c7847;
      case 0xc7850u: goto L_c7850;
      case 0xc7859u: goto L_c7859;
      case 0xc7862u: goto L_c7862;
      case 0xc786bu: goto L_c786b;
      case 0xc7874u: goto L_c7874;
      case 0xc787du: goto L_c787d;
      case 0xc7886u: goto L_c7886;
      case 0xc788fu: goto L_c788f;
      case 0xc7898u: goto L_c7898;
      case 0xc78a1u: goto L_c78a1;
      case 0xc78aau: goto L_c78aa;
      case 0xc78b3u: goto L_c78b3;
      case 0xc78bcu: goto L_c78bc;
      case 0xc78c2u: goto L_c78c2;
      case 0xc78c8u: goto L_c78c8;
      case 0xc78ceu: goto L_c78ce;
      case 0xc78d4u: goto L_c78d4;
      case 0xc78dau: goto L_c78da;
      case 0xc78e0u: goto L_c78e0;
      case 0xc78e6u: goto L_c78e6;
      case 0xc78ecu: goto L_c78ec;
      case 0xc78f2u: goto L_c78f2;
      case 0xc78f8u: goto L_c78f8;
      case 0xc78feu: goto L_c78fe;
      case 0xc7904u: goto L_c7904;
      case 0xc790au: goto L_c790a;
      case 0xc7910u: goto L_c7910;
      default: x86_jump(c, t); return; } }
L_c77d2:
    X86_TICK(c, 9);
    // 0c77d2  mov si, 0x4681
    X86_AT(c, 0xc77d2u);
    s16(c, 6, 0x4681u);
    // 0c77d6  jmp 0xc7914
    X86_AT(c, 0xc77d6u);
    goto L_c7914;
L_c77db:
    X86_TICK(c, 9);
    // 0c77db  mov si, 0x75eb
    X86_AT(c, 0xc77dbu);
    s16(c, 6, 0x75EBu);
    // 0c77df  jmp 0xc7914
    X86_AT(c, 0xc77dfu);
    goto L_c7914;
L_c77e4:
    X86_TICK(c, 9);
    // 0c77e4  mov si, 0x74eb
    X86_AT(c, 0xc77e4u);
    s16(c, 6, 0x74EBu);
    // 0c77e8  jmp 0xc7914
    X86_AT(c, 0xc77e8u);
    goto L_c7914;
L_c77ed:
    X86_TICK(c, 9);
    // 0c77ed  mov si, 0x5e81
    X86_AT(c, 0xc77edu);
    s16(c, 6, 0x5E81u);
    // 0c77f1  jmp 0xc7914
    X86_AT(c, 0xc77f1u);
    goto L_c7914;
L_c77f6:
    X86_TICK(c, 9);
    // 0c77f6  mov si, 0x80eb
    X86_AT(c, 0xc77f6u);
    s16(c, 6, 0x80EBu);
    // 0c77fa  jmp 0xc7914
    X86_AT(c, 0xc77fau);
    goto L_c7914;
L_c77ff:
    X86_TICK(c, 9);
    // 0c77ff  mov si, 0x76eb
    X86_AT(c, 0xc77ffu);
    s16(c, 6, 0x76EBu);
    // 0c7803  jmp 0xc7914
    X86_AT(c, 0xc7803u);
    goto L_c7914;
L_c7808:
    X86_TICK(c, 9);
    // 0c7808  mov si, 0x77eb
    X86_AT(c, 0xc7808u);
    s16(c, 6, 0x77EBu);
    // 0c780c  jmp 0xc7914
    X86_AT(c, 0xc780cu);
    goto L_c7914;
L_c7811:
    X86_TICK(c, 9);
    // 0c7811  mov si, 0x78eb
    X86_AT(c, 0xc7811u);
    s16(c, 6, 0x78EBu);
    // 0c7815  jmp 0xc7914
    X86_AT(c, 0xc7815u);
    goto L_c7914;
L_c781a:
    X86_TICK(c, 9);
    // 0c781a  mov si, 0x79eb
    X86_AT(c, 0xc781au);
    s16(c, 6, 0x79EBu);
    // 0c781e  jmp 0xc7914
    X86_AT(c, 0xc781eu);
    goto L_c7914;
L_c7823:
    X86_TICK(c, 9);
    // 0c7823  mov si, 0x7aeb
    X86_AT(c, 0xc7823u);
    s16(c, 6, 0x7AEBu);
    // 0c7827  jmp 0xc7914
    X86_AT(c, 0xc7827u);
    goto L_c7914;
L_c782c:
    X86_TICK(c, 9);
    // 0c782c  mov si, 0x7beb
    X86_AT(c, 0xc782cu);
    s16(c, 6, 0x7BEBu);
    // 0c7830  jmp 0xc7914
    X86_AT(c, 0xc7830u);
    goto L_c7914;
L_c7835:
    X86_TICK(c, 9);
    // 0c7835  mov si, 0x7ceb
    X86_AT(c, 0xc7835u);
    s16(c, 6, 0x7CEBu);
    // 0c7839  jmp 0xc7914
    X86_AT(c, 0xc7839u);
    goto L_c7914;
L_c783e:
    X86_TICK(c, 9);
    // 0c783e  mov si, 0x7deb
    X86_AT(c, 0xc783eu);
    s16(c, 6, 0x7DEBu);
    // 0c7842  jmp 0xc7914
    X86_AT(c, 0xc7842u);
    goto L_c7914;
L_c7847:
    X86_TICK(c, 9);
    // 0c7847  mov si, 0x7eeb
    X86_AT(c, 0xc7847u);
    s16(c, 6, 0x7EEBu);
    // 0c784b  jmp 0xc7914
    X86_AT(c, 0xc784bu);
    goto L_c7914;
L_c7850:
    X86_TICK(c, 9);
    // 0c7850  mov si, 0x40eb
    X86_AT(c, 0xc7850u);
    s16(c, 6, 0x40EBu);
    // 0c7854  jmp 0xc7914
    X86_AT(c, 0xc7854u);
    goto L_c7914;
L_c7859:
    X86_TICK(c, 9);
    // 0c7859  mov si, 0x41eb
    X86_AT(c, 0xc7859u);
    s16(c, 6, 0x41EBu);
    // 0c785d  jmp 0xc7914
    X86_AT(c, 0xc785du);
    goto L_c7914;
L_c7862:
    X86_TICK(c, 9);
    // 0c7862  mov si, 0x42eb
    X86_AT(c, 0xc7862u);
    s16(c, 6, 0x42EBu);
    // 0c7866  jmp 0xc7914
    X86_AT(c, 0xc7866u);
    goto L_c7914;
L_c786b:
    X86_TICK(c, 9);
    // 0c786b  mov si, 0x43eb
    X86_AT(c, 0xc786bu);
    s16(c, 6, 0x43EBu);
    // 0c786f  jmp 0xc7914
    X86_AT(c, 0xc786fu);
    goto L_c7914;
L_c7874:
    X86_TICK(c, 9);
    // 0c7874  mov si, 0x44eb
    X86_AT(c, 0xc7874u);
    s16(c, 6, 0x44EBu);
    // 0c7878  jmp 0xc7914
    X86_AT(c, 0xc7878u);
    goto L_c7914;
L_c787d:
    X86_TICK(c, 9);
    // 0c787d  mov si, 0x45eb
    X86_AT(c, 0xc787du);
    s16(c, 6, 0x45EBu);
    // 0c7881  jmp 0xc7914
    X86_AT(c, 0xc7881u);
    goto L_c7914;
L_c7886:
    X86_TICK(c, 9);
    // 0c7886  mov si, 0x46eb
    X86_AT(c, 0xc7886u);
    s16(c, 6, 0x46EBu);
    // 0c788a  jmp 0xc7914
    X86_AT(c, 0xc788au);
    goto L_c7914;
L_c788f:
    X86_TICK(c, 9);
    // 0c788f  mov si, 0x47eb
    X86_AT(c, 0xc788fu);
    s16(c, 6, 0x47EBu);
    // 0c7893  jmp 0xc7914
    X86_AT(c, 0xc7893u);
    goto L_c7914;
L_c7898:
    X86_TICK(c, 9);
    // 0c7898  mov si, 0x48eb
    X86_AT(c, 0xc7898u);
    s16(c, 6, 0x48EBu);
    // 0c789c  jmp 0xc7914
    X86_AT(c, 0xc789cu);
    goto L_c7914;
L_c78a1:
    X86_TICK(c, 9);
    // 0c78a1  mov si, 0x49eb
    X86_AT(c, 0xc78a1u);
    s16(c, 6, 0x49EBu);
    // 0c78a5  jmp 0xc7914
    X86_AT(c, 0xc78a5u);
    goto L_c7914;
L_c78aa:
    X86_TICK(c, 9);
    // 0c78aa  mov si, 0x4aeb
    X86_AT(c, 0xc78aau);
    s16(c, 6, 0x4AEBu);
    // 0c78ae  jmp 0xc7914
    X86_AT(c, 0xc78aeu);
    goto L_c7914;
L_c78b3:
    X86_TICK(c, 9);
    // 0c78b3  mov si, 0x4beb
    X86_AT(c, 0xc78b3u);
    s16(c, 6, 0x4BEBu);
    // 0c78b7  jmp 0xc7914
    X86_AT(c, 0xc78b7u);
    goto L_c7914;
L_c78bc:
    X86_TICK(c, 9);
    // 0c78bc  mov si, 0x4ceb
    X86_AT(c, 0xc78bcu);
    s16(c, 6, 0x4CEBu);
    // 0c78c0  jmp 0xc7914
    X86_AT(c, 0xc78c0u);
    goto L_c7914;
L_c78c2:
    X86_TICK(c, 9);
    // 0c78c2  mov si, 0x4deb
    X86_AT(c, 0xc78c2u);
    s16(c, 6, 0x4DEBu);
    // 0c78c6  jmp 0xc7914
    X86_AT(c, 0xc78c6u);
    goto L_c7914;
L_c78c8:
    X86_TICK(c, 9);
    // 0c78c8  mov si, 0x4eeb
    X86_AT(c, 0xc78c8u);
    s16(c, 6, 0x4EEBu);
    // 0c78cc  jmp 0xc7914
    X86_AT(c, 0xc78ccu);
    goto L_c7914;
L_c78ce:
    X86_TICK(c, 9);
    // 0c78ce  mov si, 0x4feb
    X86_AT(c, 0xc78ceu);
    s16(c, 6, 0x4FEBu);
    // 0c78d2  jmp 0xc7914
    X86_AT(c, 0xc78d2u);
    goto L_c7914;
L_c78d4:
    X86_TICK(c, 9);
    // 0c78d4  mov si, 0x50eb
    X86_AT(c, 0xc78d4u);
    s16(c, 6, 0x50EBu);
    // 0c78d8  jmp 0xc7914
    X86_AT(c, 0xc78d8u);
    goto L_c7914;
L_c78da:
    X86_TICK(c, 9);
    // 0c78da  mov si, 0x51eb
    X86_AT(c, 0xc78dau);
    s16(c, 6, 0x51EBu);
    // 0c78de  jmp 0xc7914
    X86_AT(c, 0xc78deu);
    goto L_c7914;
L_c78e0:
    X86_TICK(c, 9);
    // 0c78e0  mov si, 0x52eb
    X86_AT(c, 0xc78e0u);
    s16(c, 6, 0x52EBu);
    // 0c78e4  jmp 0xc7914
    X86_AT(c, 0xc78e4u);
    goto L_c7914;
L_c78e6:
    X86_TICK(c, 9);
    // 0c78e6  mov si, 0x53eb
    X86_AT(c, 0xc78e6u);
    s16(c, 6, 0x53EBu);
    // 0c78ea  jmp 0xc7914
    X86_AT(c, 0xc78eau);
    goto L_c7914;
L_c78ec:
    X86_TICK(c, 9);
    // 0c78ec  mov si, 0x54eb
    X86_AT(c, 0xc78ecu);
    s16(c, 6, 0x54EBu);
    // 0c78f0  jmp 0xc7914
    X86_AT(c, 0xc78f0u);
    goto L_c7914;
L_c78f2:
    X86_TICK(c, 9);
    // 0c78f2  mov si, 0x55eb
    X86_AT(c, 0xc78f2u);
    s16(c, 6, 0x55EBu);
    // 0c78f6  jmp 0xc7914
    X86_AT(c, 0xc78f6u);
    goto L_c7914;
L_c78f8:
    X86_TICK(c, 9);
    // 0c78f8  mov si, 0x56eb
    X86_AT(c, 0xc78f8u);
    s16(c, 6, 0x56EBu);
    // 0c78fc  jmp 0xc7914
    X86_AT(c, 0xc78fcu);
    goto L_c7914;
L_c78fe:
    X86_TICK(c, 9);
    // 0c78fe  mov si, 0x57eb
    X86_AT(c, 0xc78feu);
    s16(c, 6, 0x57EBu);
    // 0c7902  jmp 0xc7914
    X86_AT(c, 0xc7902u);
    goto L_c7914;
L_c7904:
    X86_TICK(c, 9);
    // 0c7904  mov si, 0x58eb
    X86_AT(c, 0xc7904u);
    s16(c, 6, 0x58EBu);
    // 0c7908  jmp 0xc7914
    X86_AT(c, 0xc7908u);
    goto L_c7914;
L_c790a:
    X86_TICK(c, 9);
    // 0c790a  mov si, 0x59eb
    X86_AT(c, 0xc790au);
    s16(c, 6, 0x59EBu);
    // 0c790e  jmp 0xc7914
    X86_AT(c, 0xc790eu);
    goto L_c7914;
L_c7910:
    X86_TICK(c, 2);
    // 0c7910  mov si, 0x4081
    X86_AT(c, 0xc7910u);
    s16(c, 6, 0x4081u);
L_c7914:
    X86_TICK(c, 13);
    // 0c7914  mov word ptr [ecx], si
    X86_AT(c, 0xc7914u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[6] & 0xFFFFu));
    // 0c7917  inc edi
    X86_AT(c, 0xc7917u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c7918  add ecx, 2
    X86_AT(c, 0xc7918u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
    // 0c791b  jmp 0xc76c5
    X86_AT(c, 0xc791bu);
    X86_POLL(c, 0xc76c5u); goto L_c76c5;
L_c7920:
    X86_TICK(c, 28);
    // 0c7920  mov word ptr [ecx], 0
    X86_AT(c, 0xc7920u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0c7925  mov eax, 0x43ed0
    X86_AT(c, 0xc7925u);
    c.r[0] = 0x43ED0u;
    // 0c792a  pop edi
    X86_AT(c, 0xc792au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c792b  pop esi
    X86_AT(c, 0xc792bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c792c  leave 
    X86_AT(c, 0xc792cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c792d  ret 
    X86_AT(c, 0xc792du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7914u, "ran off the end of a function");
}
void f_000c7930(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0c7930  push ebp
    X86_AT(c, 0xc7930u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c7931  mov ebp, esp
    X86_AT(c, 0xc7931u);
    c.r[5] = c.r[4];
    // 0c7933  push edi
    X86_AT(c, 0xc7933u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7934  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc7934u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c7937  sub edx, edx
    X86_AT(c, 0xc7937u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0c7939  mov ecx, edx
    X86_AT(c, 0xc7939u);
    c.r[1] = c.r[2];
L_c793b:
    X86_TICK(c, 11);
    // 0c793b  mov al, byte ptr [edi]
    X86_AT(c, 0xc793bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0c793d  cmp al, 0x20
    X86_AT(c, 0xc793du);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0c793f  je 0xc7945
    X86_AT(c, 0xc793fu);
    if (x86_cc(c, 4)) { goto L_c7945; }
    X86_TICK(c, 7);
    // 0c7941  cmp al, 9
    X86_AT(c, 0xc7941u);
    (void)x86_sub(c, g8(c, 0), 0x9u, 0, 1);
    // 0c7943  jne 0xc7948
    X86_AT(c, 0xc7943u);
    if (x86_cc(c, 5)) { goto L_c7948; }
L_c7945:
    X86_TICK(c, 9);
    // 0c7945  inc edi
    X86_AT(c, 0xc7945u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c7946  jmp 0xc793b
    X86_AT(c, 0xc7946u);
    X86_POLL(c, 0xc793bu); goto L_c793b;
L_c7948:
    X86_TICK(c, 12);
    // 0c7948  cmp byte ptr [edi], 0x2d
    X86_AT(c, 0xc7948u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x2Du, 0, 1);
    // 0c794b  jne 0xc7955
    X86_AT(c, 0xc794bu);
    if (x86_cc(c, 5)) { goto L_c7955; }
    X86_TICK(c, 11);
    // 0c794d  mov ecx, 1
    X86_AT(c, 0xc794du);
    c.r[1] = 0x1u;
    // 0c7952  inc edi
    X86_AT(c, 0xc7952u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c7953  jmp 0xc7948
    X86_AT(c, 0xc7953u);
    X86_POLL(c, 0xc7948u); goto L_c7948;
L_c7955:
    X86_TICK(c, 11);
    // 0c7955  mov al, byte ptr [edi]
    X86_AT(c, 0xc7955u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0c7957  cmp al, 0x30
    X86_AT(c, 0xc7957u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0c7959  jb 0xc7970
    X86_AT(c, 0xc7959u);
    if (x86_cc(c, 2)) { goto L_c7970; }
    X86_TICK(c, 7);
    // 0c795b  cmp al, 0x39
    X86_AT(c, 0xc795bu);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0c795d  ja 0xc7970
    X86_AT(c, 0xc795du);
    if (x86_cc(c, 7)) { goto L_c7970; }
    X86_TICK(c, 23);
    // 0c795f  lea edx, [edx + edx*4]
    X86_AT(c, 0xc795fu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0c7962  add edx, edx
    X86_AT(c, 0xc7962u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c7964  movzx eax, al
    X86_AT(c, 0xc7964u);
    c.r[0] = g8(c, 0);
    // 0c7967  sub eax, 0x30
    X86_AT(c, 0xc7967u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0c796a  add eax, edx
    X86_AT(c, 0xc796au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c796c  xchg edx, eax
    X86_AT(c, 0xc796cu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0c796d  inc edi
    X86_AT(c, 0xc796du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c796e  jmp 0xc7955
    X86_AT(c, 0xc796eu);
    X86_POLL(c, 0xc7955u); goto L_c7955;
L_c7970:
    X86_TICK(c, 7);
    // 0c7970  cmp ecx, 1
    X86_AT(c, 0xc7970u);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 0c7973  jne 0xc7977
    X86_AT(c, 0xc7973u);
    if (x86_cc(c, 5)) { goto L_c7977; }
    X86_TICK(c, 2);
    // 0c7975  neg edx
    X86_AT(c, 0xc7975u);
    { uint32_t v = c.r[2]; c.r[2] = x86_neg(c, v, 4); }
L_c7977:
    X86_TICK(c, 22);
    // 0c7977  mov eax, edx
    X86_AT(c, 0xc7977u);
    c.r[0] = c.r[2];
    // 0c7979  pop edi
    X86_AT(c, 0xc7979u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c797a  leave 
    X86_AT(c, 0xc797au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c797b  ret 
    X86_AT(c, 0xc797bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7930u, "ran off the end of a function");
}
void f_000c797c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0c797c  call 9
    X86_AT(c, 0xc797cu);
    push32(c, 0xc7981u); x86_call_known(c, 0x9u, f_00000009); X86_RET(c, 0xc7981u);
    X86_TICK(c, 9);
    // 0c7981  push 1
    X86_AT(c, 0xc7981u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c7983  call 0x2b
    X86_AT(c, 0xc7983u);
    push32(c, 0xc7988u); x86_call_known(c, 0x2bu, f_0000002b); X86_RET(c, 0xc7988u);
    X86_TICK(c, 9);
    // 0c7988  push 0
    X86_AT(c, 0xc7988u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c798a  call 0x49
    X86_AT(c, 0xc798au);
    push32(c, 0xc798fu); x86_call_known(c, 0x49u, f_00000049); X86_RET(c, 0xc798fu);
    X86_TICK(c, 9);
    // 0c798f  push 0
    X86_AT(c, 0xc798fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7991  call 0x69
    X86_AT(c, 0xc7991u);
    push32(c, 0xc7996u); x86_call_known(c, 0x69u, f_00000069); X86_RET(c, 0xc7996u);
    X86_TICK(c, 12);
    // 0c7996  add esp, 0xc
    X86_AT(c, 0xc7996u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c7999  ret 
    X86_AT(c, 0xc7999u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc797cu, "ran off the end of a function");
}
void f_000c799c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0c799c  call 0x8b
    X86_AT(c, 0xc799cu);
    push32(c, 0xc79a1u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xc79a1u);
    X86_TICK(c, 10);
    // 0c79a1  ret 
    X86_AT(c, 0xc79a1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc799cu, "ran off the end of a function");
}
void f_000c79a4(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0c79a4  push ebp
    X86_AT(c, 0xc79a4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c79a5  mov ebp, esp
    X86_AT(c, 0xc79a5u);
    c.r[5] = c.r[4];
    // 0c79a7  sub esp, 0x14
    X86_AT(c, 0xc79a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0c79aa  push ebx
    X86_AT(c, 0xc79aau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c79ab  push esi
    X86_AT(c, 0xc79abu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c79ac  push edi
    X86_AT(c, 0xc79acu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c79ad  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc79adu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c79b0  mov dword ptr [ebp - 0x14], 0
    X86_AT(c, 0xc79b0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), 0x0u);
    // 0c79b7  mov dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xc79b7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x0u);
    // 0c79be  sub eax, eax
    X86_AT(c, 0xc79beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c79c0  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc79c0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c79c3  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc79c3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0c79c6  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc79c6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c79c9  lea eax, [ebp - 0x10]
    X86_AT(c, 0xc79c9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0c79cc  push eax
    X86_AT(c, 0xc79ccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c79cd  lea eax, [ebp - 8]
    X86_AT(c, 0xc79cdu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c79d0  push eax
    X86_AT(c, 0xc79d0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c79d1  push edi
    X86_AT(c, 0xc79d1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c79d2  call 0xcaca8
    X86_AT(c, 0xc79d2u);
    push32(c, 0xc79d7u); x86_call_known(c, 0xcaca8u, f_000caca8); X86_RET(c, 0xc79d7u);
    X86_TICK(c, 17);
    // 0c79d7  lea eax, [ebp - 0xc]
    X86_AT(c, 0xc79d7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0c79da  push eax
    X86_AT(c, 0xc79dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c79db  lea eax, [ebp - 4]
    X86_AT(c, 0xc79dbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c79de  push eax
    X86_AT(c, 0xc79deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c79df  push edi
    X86_AT(c, 0xc79dfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c79e0  call 0xcac7c
    X86_AT(c, 0xc79e0u);
    push32(c, 0xc79e5u); x86_call_known(c, 0xcac7cu, f_000cac7c); X86_RET(c, 0xc79e5u);
    X86_TICK(c, 23);
    // 0c79e5  mov esi, 0xffffffff
    X86_AT(c, 0xc79e5u);
    c.r[6] = 0xFFFFFFFFu;
    // 0c79ea  sub ebx, ebx
    X86_AT(c, 0xc79eau);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c79ec  add esp, 0x18
    X86_AT(c, 0xc79ecu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c79ef  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc79efu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c79f2  sub eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc79f2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0c79f5  cmp eax, 3
    X86_AT(c, 0xc79f5u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0c79f8  jge 0xc7a01
    X86_AT(c, 0xc79f8u);
    if (x86_cc(c, 13)) { goto L_c7a01; }
    X86_TICK(c, 7);
    // 0c79fa  call 0x8b
    X86_AT(c, 0xc79fau);
    push32(c, 0xc79ffu); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xc79ffu);
    X86_TICK(c, 2);
    // 0c79ff  mov esi, ebx
    X86_AT(c, 0xc79ffu);
    c.r[6] = c.r[3];
L_c7a01:
    X86_TICK(c, 9);
    // 0c7a01  push edi
    X86_AT(c, 0xc7a01u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7a02  call 0xcad04
    X86_AT(c, 0xc7a02u);
    push32(c, 0xc7a07u); x86_call_known(c, 0xcad04u, f_000cad04); X86_RET(c, 0xc7a07u);
    X86_TICK(c, 9);
    // 0c7a07  add esp, 4
    X86_AT(c, 0xc7a07u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7a0a  and eax, eax
    X86_AT(c, 0xc7a0au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c7a0c  jne 0xc7a17
    X86_AT(c, 0xc7a0cu);
    if (x86_cc(c, 5)) { goto L_c7a17; }
    X86_TICK(c, 9);
    // 0c7a0e  push edi
    X86_AT(c, 0xc7a0eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7a0f  call 0xca920
    X86_AT(c, 0xc7a0fu);
    push32(c, 0xc7a14u); x86_call_known(c, 0xca920u, f_000ca920); X86_RET(c, 0xc7a14u);
    X86_TICK(c, 2);
    // 0c7a14  add esp, 4
    X86_AT(c, 0xc7a14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c7a17:
    X86_TICK(c, 12);
    // 0c7a17  cmp word ptr [0xa1b74], 0
    X86_AT(c, 0xc7a17u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA1B74u))), 0x0u, 0, 2);
    // 0c7a1f  jne 0xc7a31
    X86_AT(c, 0xc7a1fu);
    if (x86_cc(c, 5)) { goto L_c7a31; }
    X86_TICK(c, 9);
    // 0c7a21  push 0
    X86_AT(c, 0xc7a21u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7a23  call 0xc5e44
    X86_AT(c, 0xc7a23u);
    push32(c, 0xc7a28u); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xc7a28u);
    X86_TICK(c, 9);
    // 0c7a28  push edi
    X86_AT(c, 0xc7a28u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7a29  call 0xca0a0
    X86_AT(c, 0xc7a29u);
    push32(c, 0xc7a2eu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc7a2eu);
    X86_TICK(c, 2);
    // 0c7a2e  add esp, 8
    X86_AT(c, 0xc7a2eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c7a31:
    X86_TICK(c, 7);
    // 0c7a31  call 0xc5e3c
    X86_AT(c, 0xc7a31u);
    push32(c, 0xc7a36u); x86_call_known(c, 0xc5e3cu, f_000c5e3c); X86_RET(c, 0xc7a36u);
    X86_TICK(c, 7);
    // 0c7a36  call 0xc56a4
    X86_AT(c, 0xc7a36u);
    push32(c, 0xc7a3bu); x86_call_known(c, 0xc56a4u, f_000c56a4); X86_RET(c, 0xc7a3bu);
    X86_TICK(c, 13);
    // 0c7a3b  lea eax, [ebp - 0x14]
    X86_AT(c, 0xc7a3bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0c7a3e  push eax
    X86_AT(c, 0xc7a3eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7a3f  push 1
    X86_AT(c, 0xc7a3fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c7a41  call 0xa9
    X86_AT(c, 0xc7a41u);
    push32(c, 0xc7a46u); x86_call_known(c, 0xa9u, f_000000a9); X86_RET(c, 0xc7a46u);
    X86_TICK(c, 15);
    // 0c7a46  add esp, 8
    X86_AT(c, 0xc7a46u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c7a49  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc7a49u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0c7a4c  and eax, 0xff00
    X86_AT(c, 0xc7a4cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 0c7a51  cmp eax, 0xff00
    X86_AT(c, 0xc7a51u);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 0c7a56  jne 0xc7a5f
    X86_AT(c, 0xc7a56u);
    if (x86_cc(c, 5)) { goto L_c7a5f; }
    X86_TICK(c, 9);
    // 0c7a58  sub eax, eax
    X86_AT(c, 0xc7a58u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c7a5a  jmp 0xc7dc0
    X86_AT(c, 0xc7a5au);
    goto L_c7dc0;
L_c7a5f:
    X86_TICK(c, 18);
    // 0c7a5f  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc7a5fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0c7a62  shr eax, 8
    X86_AT(c, 0xc7a62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0c7a65  and eax, 0xff
    X86_AT(c, 0xc7a65u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFu, 4); }
    // 0c7a6a  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xc7a6au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0c7a6d  cmp esi, 0xffffffff
    X86_AT(c, 0xc7a6du);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c7a70  jne 0xc7cfd
    X86_AT(c, 0xc7a70u);
    if (x86_cc(c, 5)) { goto L_c7cfd; }
    X86_TICK(c, 12);
    // 0c7a76  xchg edx, eax
    X86_AT(c, 0xc7a76u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0c7a77  sub edx, 2
    X86_AT(c, 0xc7a77u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0c7a7a  cmp edx, 0x44
    X86_AT(c, 0xc7a7au);
    (void)x86_sub(c, c.r[2], 0x44u, 0, 4);
    // 0c7a7d  ja 0xc7cfd
    X86_AT(c, 0xc7a7du);
    if (x86_cc(c, 7)) { goto L_c7cfd; }
    X86_TICK(c, 7);
    // 0c7a83  jmp dword ptr cs:[edx*4 + 0xc7a8b]
    X86_AT(c, 0xc7a83u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC7A8Bu)));
      switch (t) {
      case 0xc7b9fu: goto L_c7b9f;
      case 0xc7ba9u: goto L_c7ba9;
      case 0xc7bb3u: goto L_c7bb3;
      case 0xc7bbdu: goto L_c7bbd;
      case 0xc7bc7u: goto L_c7bc7;
      case 0xc7bd1u: goto L_c7bd1;
      case 0xc7bdbu: goto L_c7bdb;
      case 0xc7be5u: goto L_c7be5;
      case 0xc7befu: goto L_c7bef;
      case 0xc7bf9u: goto L_c7bf9;
      case 0xc7c03u: goto L_c7c03;
      case 0xc7c0du: goto L_c7c0d;
      case 0xc7c17u: goto L_c7c17;
      case 0xc7c21u: goto L_c7c21;
      case 0xc7c2bu: goto L_c7c2b;
      case 0xc7c35u: goto L_c7c35;
      case 0xc7c3fu: goto L_c7c3f;
      case 0xc7c49u: goto L_c7c49;
      case 0xc7c53u: goto L_c7c53;
      case 0xc7c5du: goto L_c7c5d;
      case 0xc7c67u: goto L_c7c67;
      case 0xc7c71u: goto L_c7c71;
      case 0xc7c7bu: goto L_c7c7b;
      case 0xc7c85u: goto L_c7c85;
      case 0xc7c8fu: goto L_c7c8f;
      case 0xc7c99u: goto L_c7c99;
      case 0xc7ca0u: goto L_c7ca0;
      case 0xc7ca7u: goto L_c7ca7;
      case 0xc7caeu: goto L_c7cae;
      case 0xc7cb5u: goto L_c7cb5;
      case 0xc7cbcu: goto L_c7cbc;
      case 0xc7cc3u: goto L_c7cc3;
      case 0xc7ccau: goto L_c7cca;
      case 0xc7cd1u: goto L_c7cd1;
      case 0xc7cd8u: goto L_c7cd8;
      case 0xc7cdfu: goto L_c7cdf;
      case 0xc7ce6u: goto L_c7ce6;
      case 0xc7cf8u: goto L_c7cf8;
      case 0xc7cfdu: goto L_c7cfd;
      default: x86_jump(c, t); return; } }
L_c7b9f:
    X86_TICK(c, 9);
    // 0c7b9f  mov ebx, 0x31
    X86_AT(c, 0xc7b9fu);
    c.r[3] = 0x31u;
    // 0c7ba4  jmp 0xc7cfd
    X86_AT(c, 0xc7ba4u);
    goto L_c7cfd;
L_c7ba9:
    X86_TICK(c, 9);
    // 0c7ba9  mov ebx, 0x32
    X86_AT(c, 0xc7ba9u);
    c.r[3] = 0x32u;
    // 0c7bae  jmp 0xc7cfd
    X86_AT(c, 0xc7baeu);
    goto L_c7cfd;
L_c7bb3:
    X86_TICK(c, 9);
    // 0c7bb3  mov ebx, 0x33
    X86_AT(c, 0xc7bb3u);
    c.r[3] = 0x33u;
    // 0c7bb8  jmp 0xc7cfd
    X86_AT(c, 0xc7bb8u);
    goto L_c7cfd;
L_c7bbd:
    X86_TICK(c, 9);
    // 0c7bbd  mov ebx, 0x34
    X86_AT(c, 0xc7bbdu);
    c.r[3] = 0x34u;
    // 0c7bc2  jmp 0xc7cfd
    X86_AT(c, 0xc7bc2u);
    goto L_c7cfd;
L_c7bc7:
    X86_TICK(c, 9);
    // 0c7bc7  mov ebx, 0x35
    X86_AT(c, 0xc7bc7u);
    c.r[3] = 0x35u;
    // 0c7bcc  jmp 0xc7cfd
    X86_AT(c, 0xc7bccu);
    goto L_c7cfd;
L_c7bd1:
    X86_TICK(c, 9);
    // 0c7bd1  mov ebx, 0x36
    X86_AT(c, 0xc7bd1u);
    c.r[3] = 0x36u;
    // 0c7bd6  jmp 0xc7cfd
    X86_AT(c, 0xc7bd6u);
    goto L_c7cfd;
L_c7bdb:
    X86_TICK(c, 9);
    // 0c7bdb  mov ebx, 0x37
    X86_AT(c, 0xc7bdbu);
    c.r[3] = 0x37u;
    // 0c7be0  jmp 0xc7cfd
    X86_AT(c, 0xc7be0u);
    goto L_c7cfd;
L_c7be5:
    X86_TICK(c, 9);
    // 0c7be5  mov ebx, 0x38
    X86_AT(c, 0xc7be5u);
    c.r[3] = 0x38u;
    // 0c7bea  jmp 0xc7cfd
    X86_AT(c, 0xc7beau);
    goto L_c7cfd;
L_c7bef:
    X86_TICK(c, 9);
    // 0c7bef  mov ebx, 0x39
    X86_AT(c, 0xc7befu);
    c.r[3] = 0x39u;
    // 0c7bf4  jmp 0xc7cfd
    X86_AT(c, 0xc7bf4u);
    goto L_c7cfd;
L_c7bf9:
    X86_TICK(c, 9);
    // 0c7bf9  mov ebx, 0x30
    X86_AT(c, 0xc7bf9u);
    c.r[3] = 0x30u;
    // 0c7bfe  jmp 0xc7cfd
    X86_AT(c, 0xc7bfeu);
    goto L_c7cfd;
L_c7c03:
    X86_TICK(c, 9);
    // 0c7c03  mov ebx, 0x41
    X86_AT(c, 0xc7c03u);
    c.r[3] = 0x41u;
    // 0c7c08  jmp 0xc7cfd
    X86_AT(c, 0xc7c08u);
    goto L_c7cfd;
L_c7c0d:
    X86_TICK(c, 9);
    // 0c7c0d  mov ebx, 0x42
    X86_AT(c, 0xc7c0du);
    c.r[3] = 0x42u;
    // 0c7c12  jmp 0xc7cfd
    X86_AT(c, 0xc7c12u);
    goto L_c7cfd;
L_c7c17:
    X86_TICK(c, 9);
    // 0c7c17  mov ebx, 0x43
    X86_AT(c, 0xc7c17u);
    c.r[3] = 0x43u;
    // 0c7c1c  jmp 0xc7cfd
    X86_AT(c, 0xc7c1cu);
    goto L_c7cfd;
L_c7c21:
    X86_TICK(c, 9);
    // 0c7c21  mov ebx, 0x44
    X86_AT(c, 0xc7c21u);
    c.r[3] = 0x44u;
    // 0c7c26  jmp 0xc7cfd
    X86_AT(c, 0xc7c26u);
    goto L_c7cfd;
L_c7c2b:
    X86_TICK(c, 9);
    // 0c7c2b  mov ebx, 0x45
    X86_AT(c, 0xc7c2bu);
    c.r[3] = 0x45u;
    // 0c7c30  jmp 0xc7cfd
    X86_AT(c, 0xc7c30u);
    goto L_c7cfd;
L_c7c35:
    X86_TICK(c, 9);
    // 0c7c35  mov ebx, 0x46
    X86_AT(c, 0xc7c35u);
    c.r[3] = 0x46u;
    // 0c7c3a  jmp 0xc7cfd
    X86_AT(c, 0xc7c3au);
    goto L_c7cfd;
L_c7c3f:
    X86_TICK(c, 9);
    // 0c7c3f  mov ebx, 0x47
    X86_AT(c, 0xc7c3fu);
    c.r[3] = 0x47u;
    // 0c7c44  jmp 0xc7cfd
    X86_AT(c, 0xc7c44u);
    goto L_c7cfd;
L_c7c49:
    X86_TICK(c, 9);
    // 0c7c49  mov ebx, 0x48
    X86_AT(c, 0xc7c49u);
    c.r[3] = 0x48u;
    // 0c7c4e  jmp 0xc7cfd
    X86_AT(c, 0xc7c4eu);
    goto L_c7cfd;
L_c7c53:
    X86_TICK(c, 9);
    // 0c7c53  mov ebx, 0x49
    X86_AT(c, 0xc7c53u);
    c.r[3] = 0x49u;
    // 0c7c58  jmp 0xc7cfd
    X86_AT(c, 0xc7c58u);
    goto L_c7cfd;
L_c7c5d:
    X86_TICK(c, 9);
    // 0c7c5d  mov ebx, 0x4a
    X86_AT(c, 0xc7c5du);
    c.r[3] = 0x4Au;
    // 0c7c62  jmp 0xc7cfd
    X86_AT(c, 0xc7c62u);
    goto L_c7cfd;
L_c7c67:
    X86_TICK(c, 9);
    // 0c7c67  mov ebx, 0x4b
    X86_AT(c, 0xc7c67u);
    c.r[3] = 0x4Bu;
    // 0c7c6c  jmp 0xc7cfd
    X86_AT(c, 0xc7c6cu);
    goto L_c7cfd;
L_c7c71:
    X86_TICK(c, 9);
    // 0c7c71  mov ebx, 0x4c
    X86_AT(c, 0xc7c71u);
    c.r[3] = 0x4Cu;
    // 0c7c76  jmp 0xc7cfd
    X86_AT(c, 0xc7c76u);
    goto L_c7cfd;
L_c7c7b:
    X86_TICK(c, 9);
    // 0c7c7b  mov ebx, 0x4d
    X86_AT(c, 0xc7c7bu);
    c.r[3] = 0x4Du;
    // 0c7c80  jmp 0xc7cfd
    X86_AT(c, 0xc7c80u);
    goto L_c7cfd;
L_c7c85:
    X86_TICK(c, 9);
    // 0c7c85  mov ebx, 0x4e
    X86_AT(c, 0xc7c85u);
    c.r[3] = 0x4Eu;
    // 0c7c8a  jmp 0xc7cfd
    X86_AT(c, 0xc7c8au);
    goto L_c7cfd;
L_c7c8f:
    X86_TICK(c, 9);
    // 0c7c8f  mov ebx, 0x4f
    X86_AT(c, 0xc7c8fu);
    c.r[3] = 0x4Fu;
    // 0c7c94  jmp 0xc7cfd
    X86_AT(c, 0xc7c94u);
    goto L_c7cfd;
L_c7c99:
    X86_TICK(c, 9);
    // 0c7c99  mov ebx, 0x50
    X86_AT(c, 0xc7c99u);
    c.r[3] = 0x50u;
    // 0c7c9e  jmp 0xc7cfd
    X86_AT(c, 0xc7c9eu);
    goto L_c7cfd;
L_c7ca0:
    X86_TICK(c, 9);
    // 0c7ca0  mov ebx, 0x51
    X86_AT(c, 0xc7ca0u);
    c.r[3] = 0x51u;
    // 0c7ca5  jmp 0xc7cfd
    X86_AT(c, 0xc7ca5u);
    goto L_c7cfd;
L_c7ca7:
    X86_TICK(c, 9);
    // 0c7ca7  mov ebx, 0x52
    X86_AT(c, 0xc7ca7u);
    c.r[3] = 0x52u;
    // 0c7cac  jmp 0xc7cfd
    X86_AT(c, 0xc7cacu);
    goto L_c7cfd;
L_c7cae:
    X86_TICK(c, 9);
    // 0c7cae  mov ebx, 0x53
    X86_AT(c, 0xc7caeu);
    c.r[3] = 0x53u;
    // 0c7cb3  jmp 0xc7cfd
    X86_AT(c, 0xc7cb3u);
    goto L_c7cfd;
L_c7cb5:
    X86_TICK(c, 9);
    // 0c7cb5  mov ebx, 0x54
    X86_AT(c, 0xc7cb5u);
    c.r[3] = 0x54u;
    // 0c7cba  jmp 0xc7cfd
    X86_AT(c, 0xc7cbau);
    goto L_c7cfd;
L_c7cbc:
    X86_TICK(c, 9);
    // 0c7cbc  mov ebx, 0x55
    X86_AT(c, 0xc7cbcu);
    c.r[3] = 0x55u;
    // 0c7cc1  jmp 0xc7cfd
    X86_AT(c, 0xc7cc1u);
    goto L_c7cfd;
L_c7cc3:
    X86_TICK(c, 9);
    // 0c7cc3  mov ebx, 0x56
    X86_AT(c, 0xc7cc3u);
    c.r[3] = 0x56u;
    // 0c7cc8  jmp 0xc7cfd
    X86_AT(c, 0xc7cc8u);
    goto L_c7cfd;
L_c7cca:
    X86_TICK(c, 9);
    // 0c7cca  mov ebx, 0x57
    X86_AT(c, 0xc7ccau);
    c.r[3] = 0x57u;
    // 0c7ccf  jmp 0xc7cfd
    X86_AT(c, 0xc7ccfu);
    goto L_c7cfd;
L_c7cd1:
    X86_TICK(c, 9);
    // 0c7cd1  mov ebx, 0x58
    X86_AT(c, 0xc7cd1u);
    c.r[3] = 0x58u;
    // 0c7cd6  jmp 0xc7cfd
    X86_AT(c, 0xc7cd6u);
    goto L_c7cfd;
L_c7cd8:
    X86_TICK(c, 9);
    // 0c7cd8  mov ebx, 0x59
    X86_AT(c, 0xc7cd8u);
    c.r[3] = 0x59u;
    // 0c7cdd  jmp 0xc7cfd
    X86_AT(c, 0xc7cddu);
    goto L_c7cfd;
L_c7cdf:
    X86_TICK(c, 9);
    // 0c7cdf  mov ebx, 0x5a
    X86_AT(c, 0xc7cdfu);
    c.r[3] = 0x5Au;
    // 0c7ce4  jmp 0xc7cfd
    X86_AT(c, 0xc7ce4u);
    goto L_c7cfd;
L_c7ce6:
    X86_TICK(c, 9);
    // 0c7ce6  sub ebx, ebx
    X86_AT(c, 0xc7ce6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c7ce8  call 0xc60e0
    X86_AT(c, 0xc7ce8u);
    push32(c, 0xc7cedu); x86_call_known(c, 0xc60e0u, f_000c60e0); X86_RET(c, 0xc7cedu);
    X86_TICK(c, 9);
    // 0c7ced  push edi
    X86_AT(c, 0xc7cedu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7cee  call 0xca0a0
    X86_AT(c, 0xc7ceeu);
    push32(c, 0xc7cf3u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc7cf3u);
    X86_TICK(c, 9);
    // 0c7cf3  add esp, 4
    X86_AT(c, 0xc7cf3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7cf6  jmp 0xc7cfd
    X86_AT(c, 0xc7cf6u);
    goto L_c7cfd;
L_c7cf8:
    X86_TICK(c, 2);
    // 0c7cf8  mov ebx, 0x20
    X86_AT(c, 0xc7cf8u);
    c.r[3] = 0x20u;
L_c7cfd:
    X86_TICK(c, 11);
    // 0c7cfd  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc7cfdu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0c7d00  cmp edx, 0x50
    X86_AT(c, 0xc7d00u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0c7d03  ja 0xc7d2c
    X86_AT(c, 0xc7d03u);
    if (x86_cc(c, 7)) { goto L_c7d2c; }
    X86_TICK(c, 7);
    // 0c7d05  cmp edx, 0x50
    X86_AT(c, 0xc7d05u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0c7d08  je 0xc7d4e
    X86_AT(c, 0xc7d08u);
    if (x86_cc(c, 4)) { goto L_c7d4e; }
    X86_TICK(c, 7);
    // 0c7d0a  cmp edx, 1
    X86_AT(c, 0xc7d0au);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c7d0d  je 0xc7d63
    X86_AT(c, 0xc7d0du);
    if (x86_cc(c, 4)) { goto L_c7d63; }
    X86_TICK(c, 7);
    // 0c7d13  cmp edx, 0xf
    X86_AT(c, 0xc7d13u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0c7d16  je 0xc7d55
    X86_AT(c, 0xc7d16u);
    if (x86_cc(c, 4)) { goto L_c7d55; }
    X86_TICK(c, 7);
    // 0c7d18  cmp edx, 0x1d
    X86_AT(c, 0xc7d18u);
    (void)x86_sub(c, c.r[2], 0x1Du, 0, 4);
    // 0c7d1b  je 0xc7d5c
    X86_AT(c, 0xc7d1bu);
    if (x86_cc(c, 4)) { goto L_c7d5c; }
    X86_TICK(c, 7);
    // 0c7d1d  cmp edx, 0x4d
    X86_AT(c, 0xc7d1du);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0c7d20  je 0xc7d47
    X86_AT(c, 0xc7d20u);
    if (x86_cc(c, 4)) { goto L_c7d47; }
    X86_TICK(c, 7);
    // 0c7d22  cmp edx, 0x4f
    X86_AT(c, 0xc7d22u);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0c7d25  je 0xc7d55
    X86_AT(c, 0xc7d25u);
    if (x86_cc(c, 4)) { goto L_c7d55; }
    X86_TICK(c, 7);
    // 0c7d27  jmp 0xc7d8a
    X86_AT(c, 0xc7d27u);
    goto L_c7d8a;
L_c7d2c:
    X86_TICK(c, 7);
    // 0c7d2c  cmp edx, 0x51
    X86_AT(c, 0xc7d2cu);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
    // 0c7d2f  je 0xc7d6a
    X86_AT(c, 0xc7d2fu);
    if (x86_cc(c, 4)) { goto L_c7d6a; }
    X86_TICK(c, 7);
    // 0c7d31  cmp edx, 0x5d
    X86_AT(c, 0xc7d31u);
    (void)x86_sub(c, c.r[2], 0x5Du, 0, 4);
    // 0c7d34  je 0xc7d71
    X86_AT(c, 0xc7d34u);
    if (x86_cc(c, 4)) { goto L_c7d71; }
    X86_TICK(c, 7);
    // 0c7d36  cmp edx, 0x5e
    X86_AT(c, 0xc7d36u);
    (void)x86_sub(c, c.r[2], 0x5Eu, 0, 4);
    // 0c7d39  je 0xc7d83
    X86_AT(c, 0xc7d39u);
    if (x86_cc(c, 4)) { goto L_c7d83; }
    X86_TICK(c, 7);
    // 0c7d3b  cmp edx, 0x72
    X86_AT(c, 0xc7d3bu);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0c7d3e  je 0xc7d63
    X86_AT(c, 0xc7d3eu);
    if (x86_cc(c, 4)) { goto L_c7d63; }
    X86_TICK(c, 7);
    // 0c7d40  cmp edx, 0x73
    X86_AT(c, 0xc7d40u);
    (void)x86_sub(c, c.r[2], 0x73u, 0, 4);
    // 0c7d43  je 0xc7d5c
    X86_AT(c, 0xc7d43u);
    if (x86_cc(c, 4)) { goto L_c7d5c; }
    X86_TICK(c, 7);
    // 0c7d45  jmp 0xc7d8a
    X86_AT(c, 0xc7d45u);
    goto L_c7d8a;
L_c7d47:
    X86_TICK(c, 9);
    // 0c7d47  mov ebx, 5
    X86_AT(c, 0xc7d47u);
    c.r[3] = 0x5u;
    // 0c7d4c  jmp 0xc7d8a
    X86_AT(c, 0xc7d4cu);
    goto L_c7d8a;
L_c7d4e:
    X86_TICK(c, 9);
    // 0c7d4e  mov ebx, 6
    X86_AT(c, 0xc7d4eu);
    c.r[3] = 0x6u;
    // 0c7d53  jmp 0xc7d8a
    X86_AT(c, 0xc7d53u);
    goto L_c7d8a;
L_c7d55:
    X86_TICK(c, 9);
    // 0c7d55  mov ebx, 3
    X86_AT(c, 0xc7d55u);
    c.r[3] = 0x3u;
    // 0c7d5a  jmp 0xc7d8a
    X86_AT(c, 0xc7d5au);
    goto L_c7d8a;
L_c7d5c:
    X86_TICK(c, 9);
    // 0c7d5c  mov ebx, 4
    X86_AT(c, 0xc7d5cu);
    c.r[3] = 0x4u;
    // 0c7d61  jmp 0xc7d8a
    X86_AT(c, 0xc7d61u);
    goto L_c7d8a;
L_c7d63:
    X86_TICK(c, 9);
    // 0c7d63  mov ebx, 1
    X86_AT(c, 0xc7d63u);
    c.r[3] = 0x1u;
    // 0c7d68  jmp 0xc7d8a
    X86_AT(c, 0xc7d68u);
    goto L_c7d8a;
L_c7d6a:
    X86_TICK(c, 9);
    // 0c7d6a  mov ebx, 7
    X86_AT(c, 0xc7d6au);
    c.r[3] = 0x7u;
    // 0c7d6f  jmp 0xc7d8a
    X86_AT(c, 0xc7d6fu);
    goto L_c7d8a;
L_c7d71:
    X86_TICK(c, 9);
    // 0c7d71  sub ebx, ebx
    X86_AT(c, 0xc7d71u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c7d73  call 0xc8a00
    X86_AT(c, 0xc7d73u);
    push32(c, 0xc7d78u); x86_call_known(c, 0xc8a00u, f_000c8a00); X86_RET(c, 0xc7d78u);
    X86_TICK(c, 9);
    // 0c7d78  push edi
    X86_AT(c, 0xc7d78u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7d79  call 0xca0a0
    X86_AT(c, 0xc7d79u);
    push32(c, 0xc7d7eu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc7d7eu);
    X86_TICK(c, 9);
    // 0c7d7e  add esp, 4
    X86_AT(c, 0xc7d7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7d81  jmp 0xc7d8a
    X86_AT(c, 0xc7d81u);
    goto L_c7d8a;
L_c7d83:
    X86_TICK(c, 9);
    // 0c7d83  sub ebx, ebx
    X86_AT(c, 0xc7d83u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c7d85  call 0xc8a34
    X86_AT(c, 0xc7d85u);
    push32(c, 0xc7d8au); x86_call_known(c, 0xc8a34u, f_000c8a34); X86_RET(c, 0xc7d8au);
L_c7d8a:
    X86_TICK(c, 7);
    // 0c7d8a  cmp ebx, 0x20
    X86_AT(c, 0xc7d8au);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0c7d8d  jl 0xc7da4
    X86_AT(c, 0xc7d8du);
    if (x86_cc(c, 12)) { goto L_c7da4; }
    X86_TICK(c, 13);
    // 0c7d8f  mov eax, ebx
    X86_AT(c, 0xc7d8fu);
    c.r[0] = c.r[3];
    // 0c7d91  push eax
    X86_AT(c, 0xc7d91u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7d92  push edi
    X86_AT(c, 0xc7d92u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7d93  call 0xca58c
    X86_AT(c, 0xc7d93u);
    push32(c, 0xc7d98u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xc7d98u);
    X86_TICK(c, 20);
    // 0c7d98  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc7d98u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c7d9b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc7d9bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c7d9e  add eax, 2
    X86_AT(c, 0xc7d9eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0c7da1  push eax
    X86_AT(c, 0xc7da1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7da2  jmp 0xc7db5
    X86_AT(c, 0xc7da2u);
    goto L_c7db5;
L_c7da4:
    X86_TICK(c, 11);
    // 0c7da4  push 0x2040
    X86_AT(c, 0xc7da4u);
    { uint32_t v = 0x2040u; push32(c, v); }
    // 0c7da9  push edi
    X86_AT(c, 0xc7da9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7daa  call 0xca414
    X86_AT(c, 0xc7daau);
    push32(c, 0xc7dafu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xc7dafu);
    X86_TICK(c, 10);
    // 0c7daf  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc7dafu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c7db2  push dword ptr [ebp - 4]
    X86_AT(c, 0xc7db2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
L_c7db5:
    X86_TICK(c, 9);
    // 0c7db5  push edi
    X86_AT(c, 0xc7db5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7db6  call 0xca9c8
    X86_AT(c, 0xc7db6u);
    push32(c, 0xc7dbbu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc7dbbu);
    X86_TICK(c, 4);
    // 0c7dbb  add esp, 0x14
    X86_AT(c, 0xc7dbbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c7dbe  mov eax, ebx
    X86_AT(c, 0xc7dbeu);
    c.r[0] = c.r[3];
L_c7dc0:
    X86_TICK(c, 28);
    // 0c7dc0  pop edi
    X86_AT(c, 0xc7dc0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7dc1  pop esi
    X86_AT(c, 0xc7dc1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c7dc2  pop ebx
    X86_AT(c, 0xc7dc2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c7dc3  leave 
    X86_AT(c, 0xc7dc3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c7dc4  ret 
    X86_AT(c, 0xc7dc4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc79a4u, "ran off the end of a function");
}
}

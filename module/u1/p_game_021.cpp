#include "p_game_funcs.h"
namespace p_game {
void f_000e2df4(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e2df4  push edi
    X86_AT(c, 0xe2df4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2df5  mov edi, 4
    X86_AT(c, 0xe2df5u);
    c.r[7] = 0x4u;
    // 0e2dfa  push 6
    X86_AT(c, 0xe2dfau);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e2dfc  push 0
    X86_AT(c, 0xe2dfcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2dfe  call 0xcc814
    X86_AT(c, 0xe2dfeu);
    push32(c, 0xe2e03u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2e03u);
    X86_TICK(c, 11);
    // 0e2e03  push 0xf30c
    X86_AT(c, 0xe2e03u);
    { uint32_t v = 0xF30Cu; push32(c, v); }
    // 0e2e08  push edi
    X86_AT(c, 0xe2e08u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2e09  call 0xc8cdc
    X86_AT(c, 0xe2e09u);
    push32(c, 0xe2e0eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2e0eu);
    X86_TICK(c, 11);
    // 0e2e0e  push 7
    X86_AT(c, 0xe2e0eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e2e10  push 0
    X86_AT(c, 0xe2e10u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2e12  call 0xcc814
    X86_AT(c, 0xe2e12u);
    push32(c, 0xe2e17u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2e17u);
    X86_TICK(c, 11);
    // 0e2e17  push 0xf338
    X86_AT(c, 0xe2e17u);
    { uint32_t v = 0xF338u; push32(c, v); }
    // 0e2e1c  push edi
    X86_AT(c, 0xe2e1cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2e1d  call 0xc8cdc
    X86_AT(c, 0xe2e1du);
    push32(c, 0xe2e22u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2e22u);
    X86_TICK(c, 11);
    // 0e2e22  push 8
    X86_AT(c, 0xe2e22u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e2e24  push 0
    X86_AT(c, 0xe2e24u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2e26  call 0xcc814
    X86_AT(c, 0xe2e26u);
    push32(c, 0xe2e2bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2e2bu);
    X86_TICK(c, 11);
    // 0e2e2b  push 0xf388
    X86_AT(c, 0xe2e2bu);
    { uint32_t v = 0xF388u; push32(c, v); }
    // 0e2e30  push edi
    X86_AT(c, 0xe2e30u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2e31  call 0xc8cdc
    X86_AT(c, 0xe2e31u);
    push32(c, 0xe2e36u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2e36u);
    X86_TICK(c, 11);
    // 0e2e36  push 9
    X86_AT(c, 0xe2e36u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e2e38  push 0
    X86_AT(c, 0xe2e38u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2e3a  call 0xcc814
    X86_AT(c, 0xe2e3au);
    push32(c, 0xe2e3fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2e3fu);
    X86_TICK(c, 11);
    // 0e2e3f  push 0xf3d8
    X86_AT(c, 0xe2e3fu);
    { uint32_t v = 0xF3D8u; push32(c, v); }
    // 0e2e44  push edi
    X86_AT(c, 0xe2e44u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2e45  call 0xc8cdc
    X86_AT(c, 0xe2e45u);
    push32(c, 0xe2e4au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2e4au);
    X86_TICK(c, 13);
    // 0e2e4a  add esp, 0x40
    X86_AT(c, 0xe2e4au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2e4d  push 0xa
    X86_AT(c, 0xe2e4du);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2e4f  push 0
    X86_AT(c, 0xe2e4fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2e51  call 0xcc814
    X86_AT(c, 0xe2e51u);
    push32(c, 0xe2e56u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2e56u);
    X86_TICK(c, 11);
    // 0e2e56  push 0xf40c
    X86_AT(c, 0xe2e56u);
    { uint32_t v = 0xF40Cu; push32(c, v); }
    // 0e2e5b  push edi
    X86_AT(c, 0xe2e5bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2e5c  call 0xc8cdc
    X86_AT(c, 0xe2e5cu);
    push32(c, 0xe2e61u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2e61u);
    X86_TICK(c, 16);
    // 0e2e61  add esp, 0x10
    X86_AT(c, 0xe2e61u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e2e64  pop edi
    X86_AT(c, 0xe2e64u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2e65  ret 
    X86_AT(c, 0xe2e65u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2df4u, "ran off the end of a function");
}
void f_000e2e68(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e2e68  push edi
    X86_AT(c, 0xe2e68u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2e69  mov edi, 4
    X86_AT(c, 0xe2e69u);
    c.r[7] = 0x4u;
    // 0e2e6e  push 6
    X86_AT(c, 0xe2e6eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e2e70  push 0
    X86_AT(c, 0xe2e70u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2e72  call 0xcc814
    X86_AT(c, 0xe2e72u);
    push32(c, 0xe2e77u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2e77u);
    X86_TICK(c, 11);
    // 0e2e77  push 0xf438
    X86_AT(c, 0xe2e77u);
    { uint32_t v = 0xF438u; push32(c, v); }
    // 0e2e7c  push edi
    X86_AT(c, 0xe2e7cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2e7d  call 0xc8cdc
    X86_AT(c, 0xe2e7du);
    push32(c, 0xe2e82u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2e82u);
    X86_TICK(c, 11);
    // 0e2e82  push 7
    X86_AT(c, 0xe2e82u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e2e84  push 0
    X86_AT(c, 0xe2e84u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2e86  call 0xcc814
    X86_AT(c, 0xe2e86u);
    push32(c, 0xe2e8bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2e8bu);
    X86_TICK(c, 11);
    // 0e2e8b  push 0xf484
    X86_AT(c, 0xe2e8bu);
    { uint32_t v = 0xF484u; push32(c, v); }
    // 0e2e90  push edi
    X86_AT(c, 0xe2e90u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2e91  call 0xc8cdc
    X86_AT(c, 0xe2e91u);
    push32(c, 0xe2e96u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2e96u);
    X86_TICK(c, 11);
    // 0e2e96  push 8
    X86_AT(c, 0xe2e96u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e2e98  push 0
    X86_AT(c, 0xe2e98u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2e9a  call 0xcc814
    X86_AT(c, 0xe2e9au);
    push32(c, 0xe2e9fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2e9fu);
    X86_TICK(c, 11);
    // 0e2e9f  push 0xf4c4
    X86_AT(c, 0xe2e9fu);
    { uint32_t v = 0xF4C4u; push32(c, v); }
    // 0e2ea4  push edi
    X86_AT(c, 0xe2ea4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2ea5  call 0xc8cdc
    X86_AT(c, 0xe2ea5u);
    push32(c, 0xe2eaau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2eaau);
    X86_TICK(c, 11);
    // 0e2eaa  push 9
    X86_AT(c, 0xe2eaau);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e2eac  push 0
    X86_AT(c, 0xe2eacu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2eae  call 0xcc814
    X86_AT(c, 0xe2eaeu);
    push32(c, 0xe2eb3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2eb3u);
    X86_TICK(c, 11);
    // 0e2eb3  push 0xf510
    X86_AT(c, 0xe2eb3u);
    { uint32_t v = 0xF510u; push32(c, v); }
    // 0e2eb8  push edi
    X86_AT(c, 0xe2eb8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2eb9  call 0xc8cdc
    X86_AT(c, 0xe2eb9u);
    push32(c, 0xe2ebeu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2ebeu);
    X86_TICK(c, 13);
    // 0e2ebe  add esp, 0x40
    X86_AT(c, 0xe2ebeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2ec1  push 0xa
    X86_AT(c, 0xe2ec1u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2ec3  push 0
    X86_AT(c, 0xe2ec3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2ec5  call 0xcc814
    X86_AT(c, 0xe2ec5u);
    push32(c, 0xe2ecau); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2ecau);
    X86_TICK(c, 11);
    // 0e2eca  push 0xf564
    X86_AT(c, 0xe2ecau);
    { uint32_t v = 0xF564u; push32(c, v); }
    // 0e2ecf  push edi
    X86_AT(c, 0xe2ecfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2ed0  call 0xc8cdc
    X86_AT(c, 0xe2ed0u);
    push32(c, 0xe2ed5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2ed5u);
    X86_TICK(c, 16);
    // 0e2ed5  add esp, 0x10
    X86_AT(c, 0xe2ed5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e2ed8  pop edi
    X86_AT(c, 0xe2ed8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2ed9  ret 
    X86_AT(c, 0xe2ed9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2e68u, "ran off the end of a function");
}
void f_000e2edc(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e2edc  push edi
    X86_AT(c, 0xe2edcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2edd  mov edi, 4
    X86_AT(c, 0xe2eddu);
    c.r[7] = 0x4u;
    // 0e2ee2  call 0xe2b08
    X86_AT(c, 0xe2ee2u);
    push32(c, 0xe2ee7u); x86_call_known(c, 0xe2b08u, f_000e2b08); X86_RET(c, 0xe2ee7u);
    X86_TICK(c, 7);
    // 0e2ee7  call 0xcc85c
    X86_AT(c, 0xe2ee7u);
    push32(c, 0xe2eecu); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xe2eecu);
    X86_TICK(c, 9);
    // 0e2eec  push edi
    X86_AT(c, 0xe2eecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2eed  call 0xca254
    X86_AT(c, 0xe2eedu);
    push32(c, 0xe2ef2u); x86_call_known(c, 0xca254u, f_000ca254); X86_RET(c, 0xe2ef2u);
    X86_TICK(c, 7);
    // 0e2ef2  call 0xe2cdc
    X86_AT(c, 0xe2ef2u);
    push32(c, 0xe2ef7u); x86_call_known(c, 0xe2cdcu, f_000e2cdc); X86_RET(c, 0xe2ef7u);
    X86_TICK(c, 7);
    // 0e2ef7  call 0xcc85c
    X86_AT(c, 0xe2ef7u);
    push32(c, 0xe2efcu); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xe2efcu);
    X86_TICK(c, 9);
    // 0e2efc  push edi
    X86_AT(c, 0xe2efcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2efd  call 0xca254
    X86_AT(c, 0xe2efdu);
    push32(c, 0xe2f02u); x86_call_known(c, 0xca254u, f_000ca254); X86_RET(c, 0xe2f02u);
    X86_TICK(c, 7);
    // 0e2f02  call 0xe2df4
    X86_AT(c, 0xe2f02u);
    push32(c, 0xe2f07u); x86_call_known(c, 0xe2df4u, f_000e2df4); X86_RET(c, 0xe2f07u);
    X86_TICK(c, 7);
    // 0e2f07  call 0xcc85c
    X86_AT(c, 0xe2f07u);
    push32(c, 0xe2f0cu); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xe2f0cu);
    X86_TICK(c, 9);
    // 0e2f0c  push edi
    X86_AT(c, 0xe2f0cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2f0d  call 0xca254
    X86_AT(c, 0xe2f0du);
    push32(c, 0xe2f12u); x86_call_known(c, 0xca254u, f_000ca254); X86_RET(c, 0xe2f12u);
    X86_TICK(c, 7);
    // 0e2f12  call 0xe2e68
    X86_AT(c, 0xe2f12u);
    push32(c, 0xe2f17u); x86_call_known(c, 0xe2e68u, f_000e2e68); X86_RET(c, 0xe2f17u);
    X86_TICK(c, 7);
    // 0e2f17  call 0xcc85c
    X86_AT(c, 0xe2f17u);
    push32(c, 0xe2f1cu); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xe2f1cu);
    X86_TICK(c, 11);
    // 0e2f1c  push 0
    X86_AT(c, 0xe2f1cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2f1e  push edi
    X86_AT(c, 0xe2f1eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2f1f  call 0xca2d4
    X86_AT(c, 0xe2f1fu);
    push32(c, 0xe2f24u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xe2f24u);
    X86_TICK(c, 9);
    // 0e2f24  push 7
    X86_AT(c, 0xe2f24u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e2f26  call 0xca0a0
    X86_AT(c, 0xe2f26u);
    push32(c, 0xe2f2bu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe2f2bu);
    X86_TICK(c, 16);
    // 0e2f2b  add esp, 0x18
    X86_AT(c, 0xe2f2bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e2f2e  pop edi
    X86_AT(c, 0xe2f2eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2f2f  ret 
    X86_AT(c, 0xe2f2fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2edcu, "ran off the end of a function");
}
void f_000e2f34(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e2f34  push ebp
    X86_AT(c, 0xe2f34u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e2f35  mov ebp, esp
    X86_AT(c, 0xe2f35u);
    c.r[5] = c.r[4];
    // 0e2f37  push dword ptr [ebp + 8]
    X86_AT(c, 0xe2f37u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e2f3a  push 4
    X86_AT(c, 0xe2f3au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e2f3c  call 0xc8cdc
    X86_AT(c, 0xe2f3cu);
    push32(c, 0xe2f41u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2f41u);
    X86_TICK(c, 9);
    // 0e2f41  push 4
    X86_AT(c, 0xe2f41u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e2f43  call 0xca3cc
    X86_AT(c, 0xe2f43u);
    push32(c, 0xe2f48u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe2f48u);
    X86_TICK(c, 9);
    // 0e2f48  push 0x8c
    X86_AT(c, 0xe2f48u);
    { uint32_t v = 0x8Cu; push32(c, v); }
    // 0e2f4d  call 0xd6660
    X86_AT(c, 0xe2f4du);
    push32(c, 0xe2f52u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe2f52u);
    X86_TICK(c, 16);
    // 0e2f52  leave 
    X86_AT(c, 0xe2f52u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e2f53  ret 
    X86_AT(c, 0xe2f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2f34u, "ran off the end of a function");
}
void f_000e2f54(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e2f54  push 1
    X86_AT(c, 0xe2f54u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2f56  push 0
    X86_AT(c, 0xe2f56u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2f58  call 0xcc814
    X86_AT(c, 0xe2f58u);
    push32(c, 0xe2f5du); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2f5du);
    X86_TICK(c, 9);
    // 0e2f5d  push 0xf5a8
    X86_AT(c, 0xe2f5du);
    { uint32_t v = 0xF5A8u; push32(c, v); }
    // 0e2f62  call 0xe2f34
    X86_AT(c, 0xe2f62u);
    push32(c, 0xe2f67u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2f67u);
    X86_TICK(c, 9);
    // 0e2f67  push 0xf600
    X86_AT(c, 0xe2f67u);
    { uint32_t v = 0xF600u; push32(c, v); }
    // 0e2f6c  call 0xe2f34
    X86_AT(c, 0xe2f6cu);
    push32(c, 0xe2f71u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2f71u);
    X86_TICK(c, 9);
    // 0e2f71  push 0xf62c
    X86_AT(c, 0xe2f71u);
    { uint32_t v = 0xF62Cu; push32(c, v); }
    // 0e2f76  call 0xe2f34
    X86_AT(c, 0xe2f76u);
    push32(c, 0xe2f7bu); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2f7bu);
    X86_TICK(c, 9);
    // 0e2f7b  push 0xf67c
    X86_AT(c, 0xe2f7bu);
    { uint32_t v = 0xF67Cu; push32(c, v); }
    // 0e2f80  call 0xe2f34
    X86_AT(c, 0xe2f80u);
    push32(c, 0xe2f85u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2f85u);
    X86_TICK(c, 9);
    // 0e2f85  push 0xf6a8
    X86_AT(c, 0xe2f85u);
    { uint32_t v = 0xF6A8u; push32(c, v); }
    // 0e2f8a  call 0xe2f34
    X86_AT(c, 0xe2f8au);
    push32(c, 0xe2f8fu); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2f8fu);
    X86_TICK(c, 9);
    // 0e2f8f  push 0xf6fc
    X86_AT(c, 0xe2f8fu);
    { uint32_t v = 0xF6FCu; push32(c, v); }
    // 0e2f94  call 0xe2f34
    X86_AT(c, 0xe2f94u);
    push32(c, 0xe2f99u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2f99u);
    X86_TICK(c, 9);
    // 0e2f99  push 0xf728
    X86_AT(c, 0xe2f99u);
    { uint32_t v = 0xF728u; push32(c, v); }
    // 0e2f9e  call 0xe2f34
    X86_AT(c, 0xe2f9eu);
    push32(c, 0xe2fa3u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2fa3u);
    X86_TICK(c, 9);
    // 0e2fa3  push 0xf77c
    X86_AT(c, 0xe2fa3u);
    { uint32_t v = 0xF77Cu; push32(c, v); }
    // 0e2fa8  call 0xe2f34
    X86_AT(c, 0xe2fa8u);
    push32(c, 0xe2fadu); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2fadu);
    X86_TICK(c, 9);
    // 0e2fad  push 0xf7a8
    X86_AT(c, 0xe2fadu);
    { uint32_t v = 0xF7A8u; push32(c, v); }
    // 0e2fb2  call 0xe2f34
    X86_AT(c, 0xe2fb2u);
    push32(c, 0xe2fb7u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2fb7u);
    X86_TICK(c, 9);
    // 0e2fb7  push 0xf7f8
    X86_AT(c, 0xe2fb7u);
    { uint32_t v = 0xF7F8u; push32(c, v); }
    // 0e2fbc  call 0xe2f34
    X86_AT(c, 0xe2fbcu);
    push32(c, 0xe2fc1u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2fc1u);
    X86_TICK(c, 9);
    // 0e2fc1  push 0xf824
    X86_AT(c, 0xe2fc1u);
    { uint32_t v = 0xF824u; push32(c, v); }
    // 0e2fc6  call 0xe2f34
    X86_AT(c, 0xe2fc6u);
    push32(c, 0xe2fcbu); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2fcbu);
    X86_TICK(c, 9);
    // 0e2fcb  push 0xf874
    X86_AT(c, 0xe2fcbu);
    { uint32_t v = 0xF874u; push32(c, v); }
    // 0e2fd0  call 0xe2f34
    X86_AT(c, 0xe2fd0u);
    push32(c, 0xe2fd5u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2fd5u);
    X86_TICK(c, 9);
    // 0e2fd5  push 0xf8a0
    X86_AT(c, 0xe2fd5u);
    { uint32_t v = 0xF8A0u; push32(c, v); }
    // 0e2fda  call 0xe2f34
    X86_AT(c, 0xe2fdau);
    push32(c, 0xe2fdfu); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2fdfu);
    X86_TICK(c, 11);
    // 0e2fdf  add esp, 0x3c
    X86_AT(c, 0xe2fdfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e2fe2  push 0xf8cc
    X86_AT(c, 0xe2fe2u);
    { uint32_t v = 0xF8CCu; push32(c, v); }
    // 0e2fe7  call 0xe2f34
    X86_AT(c, 0xe2fe7u);
    push32(c, 0xe2fecu); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2fecu);
    X86_TICK(c, 9);
    // 0e2fec  push 0xf8d0
    X86_AT(c, 0xe2fecu);
    { uint32_t v = 0xF8D0u; push32(c, v); }
    // 0e2ff1  call 0xe2f34
    X86_AT(c, 0xe2ff1u);
    push32(c, 0xe2ff6u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe2ff6u);
    X86_TICK(c, 9);
    // 0e2ff6  push 0xf924
    X86_AT(c, 0xe2ff6u);
    { uint32_t v = 0xF924u; push32(c, v); }
    // 0e2ffb  call 0xe2f34
    X86_AT(c, 0xe2ffbu);
    push32(c, 0xe3000u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe3000u);
    X86_TICK(c, 9);
    // 0e3000  push 0xf950
    X86_AT(c, 0xe3000u);
    { uint32_t v = 0xF950u; push32(c, v); }
    // 0e3005  call 0xe2f34
    X86_AT(c, 0xe3005u);
    push32(c, 0xe300au); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe300au);
    X86_TICK(c, 9);
    // 0e300a  push 0xf9a0
    X86_AT(c, 0xe300au);
    { uint32_t v = 0xF9A0u; push32(c, v); }
    // 0e300f  call 0xe2f34
    X86_AT(c, 0xe300fu);
    push32(c, 0xe3014u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe3014u);
    X86_TICK(c, 9);
    // 0e3014  push 0xf9a4
    X86_AT(c, 0xe3014u);
    { uint32_t v = 0xF9A4u; push32(c, v); }
    // 0e3019  call 0xe2f34
    X86_AT(c, 0xe3019u);
    push32(c, 0xe301eu); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe301eu);
    X86_TICK(c, 9);
    // 0e301e  push 0xf9d0
    X86_AT(c, 0xe301eu);
    { uint32_t v = 0xF9D0u; push32(c, v); }
    // 0e3023  call 0xe2f34
    X86_AT(c, 0xe3023u);
    push32(c, 0xe3028u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe3028u);
    X86_TICK(c, 9);
    // 0e3028  push 0xfa24
    X86_AT(c, 0xe3028u);
    { uint32_t v = 0xFA24u; push32(c, v); }
    // 0e302d  call 0xe2f34
    X86_AT(c, 0xe302du);
    push32(c, 0xe3032u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe3032u);
    X86_TICK(c, 9);
    // 0e3032  push 0xfa50
    X86_AT(c, 0xe3032u);
    { uint32_t v = 0xFA50u; push32(c, v); }
    // 0e3037  call 0xe2f34
    X86_AT(c, 0xe3037u);
    push32(c, 0xe303cu); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe303cu);
    X86_TICK(c, 9);
    // 0e303c  push 0xfaa0
    X86_AT(c, 0xe303cu);
    { uint32_t v = 0xFAA0u; push32(c, v); }
    // 0e3041  call 0xe2f34
    X86_AT(c, 0xe3041u);
    push32(c, 0xe3046u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe3046u);
    X86_TICK(c, 9);
    // 0e3046  push 0xfacc
    X86_AT(c, 0xe3046u);
    { uint32_t v = 0xFACCu; push32(c, v); }
    // 0e304b  call 0xe2f34
    X86_AT(c, 0xe304bu);
    push32(c, 0xe3050u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe3050u);
    X86_TICK(c, 11);
    // 0e3050  add esp, 0x2c
    X86_AT(c, 0xe3050u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0e3053  push 0xfb1c
    X86_AT(c, 0xe3053u);
    { uint32_t v = 0xFB1Cu; push32(c, v); }
    // 0e3058  call 0xe2f34
    X86_AT(c, 0xe3058u);
    push32(c, 0xe305du); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe305du);
    X86_TICK(c, 9);
    // 0e305d  push 0xfb48
    X86_AT(c, 0xe305du);
    { uint32_t v = 0xFB48u; push32(c, v); }
    // 0e3062  call 0xe2f34
    X86_AT(c, 0xe3062u);
    push32(c, 0xe3067u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe3067u);
    X86_TICK(c, 9);
    // 0e3067  push 0xfb4c
    X86_AT(c, 0xe3067u);
    { uint32_t v = 0xFB4Cu; push32(c, v); }
    // 0e306c  call 0xe2f34
    X86_AT(c, 0xe306cu);
    push32(c, 0xe3071u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe3071u);
    X86_TICK(c, 9);
    // 0e3071  push 0xfb9c
    X86_AT(c, 0xe3071u);
    { uint32_t v = 0xFB9Cu; push32(c, v); }
    // 0e3076  call 0xe2f34
    X86_AT(c, 0xe3076u);
    push32(c, 0xe307bu); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe307bu);
    X86_TICK(c, 9);
    // 0e307b  push 0xfbc8
    X86_AT(c, 0xe307bu);
    { uint32_t v = 0xFBC8u; push32(c, v); }
    // 0e3080  call 0xe2f34
    X86_AT(c, 0xe3080u);
    push32(c, 0xe3085u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe3085u);
    X86_TICK(c, 9);
    // 0e3085  push 0xfc14
    X86_AT(c, 0xe3085u);
    { uint32_t v = 0xFC14u; push32(c, v); }
    // 0e308a  call 0xe2f34
    X86_AT(c, 0xe308au);
    push32(c, 0xe308fu); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe308fu);
    X86_TICK(c, 9);
    // 0e308f  push 0xfc40
    X86_AT(c, 0xe308fu);
    { uint32_t v = 0xFC40u; push32(c, v); }
    // 0e3094  call 0xe2f34
    X86_AT(c, 0xe3094u);
    push32(c, 0xe3099u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe3099u);
    X86_TICK(c, 9);
    // 0e3099  push 0xfc90
    X86_AT(c, 0xe3099u);
    { uint32_t v = 0xFC90u; push32(c, v); }
    // 0e309e  call 0xe2f34
    X86_AT(c, 0xe309eu);
    push32(c, 0xe30a3u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe30a3u);
    X86_TICK(c, 9);
    // 0e30a3  push 0xfcbc
    X86_AT(c, 0xe30a3u);
    { uint32_t v = 0xFCBCu; push32(c, v); }
    // 0e30a8  call 0xe2f34
    X86_AT(c, 0xe30a8u);
    push32(c, 0xe30adu); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe30adu);
    X86_TICK(c, 9);
    // 0e30ad  push 0xfd0c
    X86_AT(c, 0xe30adu);
    { uint32_t v = 0xFD0Cu; push32(c, v); }
    // 0e30b2  call 0xe2f34
    X86_AT(c, 0xe30b2u);
    push32(c, 0xe30b7u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe30b7u);
    X86_TICK(c, 9);
    // 0e30b7  push 0xfd38
    X86_AT(c, 0xe30b7u);
    { uint32_t v = 0xFD38u; push32(c, v); }
    // 0e30bc  call 0xe2f34
    X86_AT(c, 0xe30bcu);
    push32(c, 0xe30c1u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe30c1u);
    X86_TICK(c, 9);
    // 0e30c1  push 0xfd88
    X86_AT(c, 0xe30c1u);
    { uint32_t v = 0xFD88u; push32(c, v); }
    // 0e30c6  call 0xe2f34
    X86_AT(c, 0xe30c6u);
    push32(c, 0xe30cbu); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe30cbu);
    X86_TICK(c, 9);
    // 0e30cb  push 0xfdb4
    X86_AT(c, 0xe30cbu);
    { uint32_t v = 0xFDB4u; push32(c, v); }
    // 0e30d0  call 0xe2f34
    X86_AT(c, 0xe30d0u);
    push32(c, 0xe30d5u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe30d5u);
    X86_TICK(c, 9);
    // 0e30d5  push 0xfe00
    X86_AT(c, 0xe30d5u);
    { uint32_t v = 0xFE00u; push32(c, v); }
    // 0e30da  call 0xe2f34
    X86_AT(c, 0xe30dau);
    push32(c, 0xe30dfu); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe30dfu);
    X86_TICK(c, 9);
    // 0e30df  push 0xfe2c
    X86_AT(c, 0xe30dfu);
    { uint32_t v = 0xFE2Cu; push32(c, v); }
    // 0e30e4  call 0xe2f34
    X86_AT(c, 0xe30e4u);
    push32(c, 0xe30e9u); x86_call_known(c, 0xe2f34u, f_000e2f34); X86_RET(c, 0xe30e9u);
    X86_TICK(c, 12);
    // 0e30e9  add esp, 0x3c
    X86_AT(c, 0xe30e9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e30ec  ret 
    X86_AT(c, 0xe30ecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2f54u, "ran off the end of a function");
}
void f_000e30f0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e30f0  call 0xe2f54
    X86_AT(c, 0xe30f0u);
    push32(c, 0xe30f5u); x86_call_known(c, 0xe2f54u, f_000e2f54); X86_RET(c, 0xe30f5u);
    X86_TICK(c, 10);
    // 0e30f5  ret 
    X86_AT(c, 0xe30f5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe30f0u, "ran off the end of a function");
}
void f_000e30f8(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e30f8  push esi
    X86_AT(c, 0xe30f8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e30f9  push edi
    X86_AT(c, 0xe30f9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e30fa  mov esi, 4
    X86_AT(c, 0xe30fau);
    c.r[6] = 0x4u;
    // 0e30ff  push 1
    X86_AT(c, 0xe30ffu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e3101  push dword ptr [0xc2dc4]
    X86_AT(c, 0xe3101u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DC4u))); push32(c, v); }
    // 0e3107  push dword ptr [0xc2dc0]
    X86_AT(c, 0xe3107u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DC0u))); push32(c, v); }
    // 0e310d  push 0x36
    X86_AT(c, 0xe310du);
    { uint32_t v = 0x36u; push32(c, v); }
    // 0e310f  call 0xe120c
    X86_AT(c, 0xe310fu);
    push32(c, 0xe3114u); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe3114u);
    X86_TICK(c, 29);
    // 0e3114  mov dword ptr [0xb0342], 1
    X86_AT(c, 0xe3114u);
    wr32((c.sbase[3] + (uint32_t)(0xB0342u)), 0x1u);
    // 0e311e  push 9
    X86_AT(c, 0xe311eu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e3120  push 0xf
    X86_AT(c, 0xe3120u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e3122  push 0xf
    X86_AT(c, 0xe3122u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e3124  push 0xa
    X86_AT(c, 0xe3124u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e3126  push 0x29
    X86_AT(c, 0xe3126u);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0e3128  push 0xb0
    X86_AT(c, 0xe3128u);
    { uint32_t v = 0xB0u; push32(c, v); }
    // 0e312d  push 0x156
    X86_AT(c, 0xe312du);
    { uint32_t v = 0x156u; push32(c, v); }
    // 0e3132  push 0x5a
    X86_AT(c, 0xe3132u);
    { uint32_t v = 0x5Au; push32(c, v); }
    // 0e3134  push 0xe
    X86_AT(c, 0xe3134u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e3136  push esi
    X86_AT(c, 0xe3136u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3137  call 0xc9fbc
    X86_AT(c, 0xe3137u);
    push32(c, 0xe313cu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xe313cu);
    X86_TICK(c, 9);
    // 0e313c  push esi
    X86_AT(c, 0xe313cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e313d  call 0xca100
    X86_AT(c, 0xe313du);
    push32(c, 0xe3142u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xe3142u);
    X86_TICK(c, 13);
    // 0e3142  add esp, 0x3c
    X86_AT(c, 0xe3142u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e3145  push 5
    X86_AT(c, 0xe3145u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e3147  push 1
    X86_AT(c, 0xe3147u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e3149  call 0xcc814
    X86_AT(c, 0xe3149u);
    push32(c, 0xe314eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe314eu);
    X86_TICK(c, 9);
    // 0e314e  push 0xb
    X86_AT(c, 0xe314eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e3150  call 0xc8dd4
    X86_AT(c, 0xe3150u);
    push32(c, 0xe3155u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe3155u);
    X86_TICK(c, 11);
    // 0e3155  push 0xfe7c
    X86_AT(c, 0xe3155u);
    { uint32_t v = 0xFE7Cu; push32(c, v); }
    // 0e315a  push esi
    X86_AT(c, 0xe315au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e315b  call 0xc8cdc
    X86_AT(c, 0xe315bu);
    push32(c, 0xe3160u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe3160u);
    X86_TICK(c, 4);
    // 0e3160  sub edi, edi
    X86_AT(c, 0xe3160u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e3162  add esp, 0x14
    X86_AT(c, 0xe3162u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e3165:
    X86_TICK(c, 7);
    // 0e3165  cmp edi, 3
    X86_AT(c, 0xe3165u);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0e3168  jge 0xe3177
    X86_AT(c, 0xe3168u);
    if (x86_cc(c, 13)) { goto L_e3177; }
    X86_TICK(c, 9);
    // 0e316a  push 5
    X86_AT(c, 0xe316au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e316c  call 0xc5ca4
    X86_AT(c, 0xe316cu);
    push32(c, 0xe3171u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe3171u);
    X86_TICK(c, 11);
    // 0e3171  inc edi
    X86_AT(c, 0xe3171u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e3172  add esp, 4
    X86_AT(c, 0xe3172u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e3175  jmp 0xe3165
    X86_AT(c, 0xe3175u);
    X86_POLL(c, 0xe3165u); goto L_e3165;
L_e3177:
    X86_TICK(c, 9);
    // 0e3177  push 0x78
    X86_AT(c, 0xe3177u);
    { uint32_t v = 0x78u; push32(c, v); }
    // 0e3179  call 0xd6660
    X86_AT(c, 0xe3179u);
    push32(c, 0xe317eu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe317eu);
    X86_TICK(c, 2);
    // 0e317e  add esp, 4
    X86_AT(c, 0xe317eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e3181:
    X86_TICK(c, 9);
    // 0e3181  push 4
    X86_AT(c, 0xe3181u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e3183  call 0xc81e4
    X86_AT(c, 0xe3183u);
    push32(c, 0xe3188u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xe3188u);
    X86_TICK(c, 9);
    // 0e3188  add esp, 4
    X86_AT(c, 0xe3188u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e318b  and al, al
    X86_AT(c, 0xe318bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e318d  jne 0xe3199
    X86_AT(c, 0xe318du);
    if (x86_cc(c, 5)) { goto L_e3199; }
    X86_TICK(c, 11);
    // 0e318f  mov eax, edi
    X86_AT(c, 0xe318fu);
    c.r[0] = c.r[7];
    // 0e3191  inc edi
    X86_AT(c, 0xe3191u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e3192  cmp eax, 0x2710
    X86_AT(c, 0xe3192u);
    (void)x86_sub(c, c.r[0], 0x2710u, 0, 4);
    // 0e3197  jl 0xe3181
    X86_AT(c, 0xe3197u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xe3181u); goto L_e3181; }
L_e3199:
    X86_TICK(c, 18);
    // 0e3199  pop edi
    X86_AT(c, 0xe3199u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e319a  pop esi
    X86_AT(c, 0xe319au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e319b  ret 
    X86_AT(c, 0xe319bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe30f8u, "ran off the end of a function");
}
void f_000e319c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e319c  push esi
    X86_AT(c, 0xe319cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e319d  push edi
    X86_AT(c, 0xe319du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e319e  sub edi, edi
    X86_AT(c, 0xe319eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e31a0  mov esi, 4
    X86_AT(c, 0xe31a0u);
    c.r[6] = 0x4u;
    // 0e31a5  call 0xc56dc
    X86_AT(c, 0xe31a5u);
    push32(c, 0xe31aau); x86_call_known(c, 0xc56dcu, f_000c56dc); X86_RET(c, 0xe31aau);
    X86_TICK(c, 7);
    // 0e31aa  call 0xe30f8
    X86_AT(c, 0xe31aau);
    push32(c, 0xe31afu); x86_call_known(c, 0xe30f8u, f_000e30f8); X86_RET(c, 0xe31afu);
    X86_TICK(c, 9);
    // 0e31af  push 9
    X86_AT(c, 0xe31afu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e31b1  call 0xc7588
    X86_AT(c, 0xe31b1u);
    push32(c, 0xe31b6u); x86_call_known(c, 0xc7588u, f_000c7588); X86_RET(c, 0xe31b6u);
    X86_TICK(c, 27);
    // 0e31b6  push 0xa
    X86_AT(c, 0xe31b6u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e31b8  push 0xb
    X86_AT(c, 0xe31b8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e31ba  push 0xb
    X86_AT(c, 0xe31bau);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e31bc  push 0x16
    X86_AT(c, 0xe31bcu);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0e31be  push 0x2b
    X86_AT(c, 0xe31beu);
    { uint32_t v = 0x2Bu; push32(c, v); }
    // 0e31c0  push 0x176
    X86_AT(c, 0xe31c0u);
    { uint32_t v = 0x176u; push32(c, v); }
    // 0e31c5  push 0x15c
    X86_AT(c, 0xe31c5u);
    { uint32_t v = 0x15Cu; push32(c, v); }
    // 0e31ca  push 0x29
    X86_AT(c, 0xe31cau);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0e31cc  push 0xc
    X86_AT(c, 0xe31ccu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e31ce  push esi
    X86_AT(c, 0xe31ceu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e31cf  call 0xc9fbc
    X86_AT(c, 0xe31cfu);
    push32(c, 0xe31d4u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xe31d4u);
    X86_TICK(c, 9);
    // 0e31d4  push esi
    X86_AT(c, 0xe31d4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e31d5  call 0xca100
    X86_AT(c, 0xe31d5u);
    push32(c, 0xe31dau); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xe31dau);
    X86_TICK(c, 17);
    // 0e31da  push 0xb
    X86_AT(c, 0xe31dau);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e31dc  push 0x28
    X86_AT(c, 0xe31dcu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0e31de  push 0x166
    X86_AT(c, 0xe31deu);
    { uint32_t v = 0x166u; push32(c, v); }
    // 0e31e3  push 0x27
    X86_AT(c, 0xe31e3u);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0e31e5  push 0xc
    X86_AT(c, 0xe31e5u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e31e7  call 0xc95ec
    X86_AT(c, 0xe31e7u);
    push32(c, 0xe31ecu); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xe31ecu);
    X86_TICK(c, 19);
    // 0e31ec  add esp, 0x44
    X86_AT(c, 0xe31ecu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0e31ef  push 0xb
    X86_AT(c, 0xe31efu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e31f1  push 0x19e
    X86_AT(c, 0xe31f1u);
    { uint32_t v = 0x19Eu; push32(c, v); }
    // 0e31f6  push 0xb
    X86_AT(c, 0xe31f6u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e31f8  push 0x29
    X86_AT(c, 0xe31f8u);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0e31fa  push 0xa
    X86_AT(c, 0xe31fau);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e31fc  call 0xc95ec
    X86_AT(c, 0xe31fcu);
    push32(c, 0xe3201u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xe3201u);
    X86_TICK(c, 17);
    // 0e3201  push 0xb
    X86_AT(c, 0xe3201u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e3203  push 0x2a
    X86_AT(c, 0xe3203u);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0e3205  push 0xb
    X86_AT(c, 0xe3205u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e3207  push 0x29
    X86_AT(c, 0xe3207u);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0e3209  push 0xa
    X86_AT(c, 0xe3209u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e320b  call 0xc95ec
    X86_AT(c, 0xe320bu);
    push32(c, 0xe3210u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xe3210u);
    X86_TICK(c, 17);
    // 0e3210  push 0xb
    X86_AT(c, 0xe3210u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e3212  push 0x2a
    X86_AT(c, 0xe3212u);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0e3214  push 0x167
    X86_AT(c, 0xe3214u);
    { uint32_t v = 0x167u; push32(c, v); }
    // 0e3219  push 0x29
    X86_AT(c, 0xe3219u);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0e321b  push 0x166
    X86_AT(c, 0xe321bu);
    { uint32_t v = 0x166u; push32(c, v); }
    // 0e3220  call 0xc95ec
    X86_AT(c, 0xe3220u);
    push32(c, 0xe3225u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xe3225u);
    X86_TICK(c, 19);
    // 0e3225  add esp, 0x3c
    X86_AT(c, 0xe3225u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e3228  push 9
    X86_AT(c, 0xe3228u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e322a  push 0x2a
    X86_AT(c, 0xe322au);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0e322c  push 0x165
    X86_AT(c, 0xe322cu);
    { uint32_t v = 0x165u; push32(c, v); }
    // 0e3231  push 0x29
    X86_AT(c, 0xe3231u);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0e3233  push 0xc
    X86_AT(c, 0xe3233u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e3235  call 0xc95ec
    X86_AT(c, 0xe3235u);
    push32(c, 0xe323au); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xe323au);
    X86_TICK(c, 17);
    // 0e323a  push 9
    X86_AT(c, 0xe323au);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e323c  push 0x19c
    X86_AT(c, 0xe323cu);
    { uint32_t v = 0x19Cu; push32(c, v); }
    // 0e3241  push 0xd
    X86_AT(c, 0xe3241u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e3243  push 0x29
    X86_AT(c, 0xe3243u);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0e3245  push 0xc
    X86_AT(c, 0xe3245u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e3247  call 0xc95ec
    X86_AT(c, 0xe3247u);
    push32(c, 0xe324cu); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xe324cu);
    X86_TICK(c, 17);
    // 0e324c  push 0xb
    X86_AT(c, 0xe324cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e324e  push 0x19e
    X86_AT(c, 0xe324eu);
    { uint32_t v = 0x19Eu; push32(c, v); }
    // 0e3253  push 0xd
    X86_AT(c, 0xe3253u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e3255  push 0x19d
    X86_AT(c, 0xe3255u);
    { uint32_t v = 0x19Du; push32(c, v); }
    // 0e325a  push 0xc
    X86_AT(c, 0xe325au);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e325c  call 0xc95ec
    X86_AT(c, 0xe325cu);
    push32(c, 0xe3261u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xe3261u);
    X86_TICK(c, 9);
    // 0e3261  add esp, 0x3c
    X86_AT(c, 0xe3261u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e3264  call 0xe30f0
    X86_AT(c, 0xe3264u);
    push32(c, 0xe3269u); x86_call_known(c, 0xe30f0u, f_000e30f0); X86_RET(c, 0xe3269u);
L_e3269:
    X86_TICK(c, 9);
    // 0e3269  push 4
    X86_AT(c, 0xe3269u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e326b  call 0xc81e4
    X86_AT(c, 0xe326bu);
    push32(c, 0xe3270u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xe3270u);
    X86_TICK(c, 9);
    // 0e3270  add esp, 4
    X86_AT(c, 0xe3270u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e3273  and al, al
    X86_AT(c, 0xe3273u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e3275  jne 0xe3281
    X86_AT(c, 0xe3275u);
    if (x86_cc(c, 5)) { goto L_e3281; }
    X86_TICK(c, 11);
    // 0e3277  mov eax, edi
    X86_AT(c, 0xe3277u);
    c.r[0] = c.r[7];
    // 0e3279  inc edi
    X86_AT(c, 0xe3279u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e327a  cmp eax, 0x3e8
    X86_AT(c, 0xe327au);
    (void)x86_sub(c, c.r[0], 0x3E8u, 0, 4);
    // 0e327f  jl 0xe3269
    X86_AT(c, 0xe327fu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xe3269u); goto L_e3269; }
L_e3281:
    X86_TICK(c, 9);
    // 0e3281  push 6
    X86_AT(c, 0xe3281u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e3283  call 0xc7588
    X86_AT(c, 0xe3283u);
    push32(c, 0xe3288u); x86_call_known(c, 0xc7588u, f_000c7588); X86_RET(c, 0xe3288u);
    X86_TICK(c, 11);
    // 0e3288  push 2
    X86_AT(c, 0xe3288u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e328a  push 0
    X86_AT(c, 0xe328au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e328c  call 0xcc814
    X86_AT(c, 0xe328cu);
    push32(c, 0xe3291u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe3291u);
    X86_TICK(c, 9);
    // 0e3291  push 0xb
    X86_AT(c, 0xe3291u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e3293  call 0xc8dd4
    X86_AT(c, 0xe3293u);
    push32(c, 0xe3298u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe3298u);
    X86_TICK(c, 9);
    // 0e3298  push 0xfec8
    X86_AT(c, 0xe3298u);
    { uint32_t v = 0xFEC8u; push32(c, v); }
    // 0e329d  call 0xcad60
    X86_AT(c, 0xe329du);
    push32(c, 0xe32a2u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xe32a2u);
    X86_TICK(c, 2);
    // 0e32a2  add esp, 0x14
    X86_AT(c, 0xe32a2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e32a5:
    X86_TICK(c, 9);
    // 0e32a5  push 4
    X86_AT(c, 0xe32a5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e32a7  call 0xc81e4
    X86_AT(c, 0xe32a7u);
    push32(c, 0xe32acu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xe32acu);
    X86_TICK(c, 9);
    // 0e32ac  add esp, 4
    X86_AT(c, 0xe32acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e32af  and al, al
    X86_AT(c, 0xe32afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e32b1  je 0xe32a5
    X86_AT(c, 0xe32b1u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe32a5u); goto L_e32a5; }
    X86_TICK(c, 7);
    // 0e32b3  call 0xd6790
    X86_AT(c, 0xe32b3u);
    push32(c, 0xe32b8u); x86_call_known(c, 0xd6790u, f_000d6790); X86_RET(c, 0xe32b8u);
    X86_TICK(c, 9);
    // 0e32b8  push 0
    X86_AT(c, 0xe32b8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e32ba  call 0xe7a38
    X86_AT(c, 0xe32bau);
    push32(c, 0xe32bfu); x86_call_known(c, 0xe7a38u, f_000e7a38); X86_RET(c, 0xe32bfu);
    X86_TICK(c, 20);
    // 0e32bf  add esp, 4
    X86_AT(c, 0xe32bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e32c2  pop edi
    X86_AT(c, 0xe32c2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e32c3  pop esi
    X86_AT(c, 0xe32c3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e32c4  ret 
    X86_AT(c, 0xe32c4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe319cu, "ran off the end of a function");
}
void f_000e32c8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e32c8  push ebp
    X86_AT(c, 0xe32c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e32c9  mov ebp, esp
    X86_AT(c, 0xe32c9u);
    c.r[5] = c.r[4];
    // 0e32cb  push eax
    X86_AT(c, 0xe32cbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e32cc  push ebx
    X86_AT(c, 0xe32ccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e32cd  push esi
    X86_AT(c, 0xe32cdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e32ce  push edi
    X86_AT(c, 0xe32ceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e32cf  mov dword ptr [ebp - 4], 0x40
    X86_AT(c, 0xe32cfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x40u);
    // 0e32d6  call 0xcbd48
    X86_AT(c, 0xe32d6u);
    push32(c, 0xe32dbu); x86_call_known(c, 0xcbd48u, f_000cbd48); X86_RET(c, 0xe32dbu);
    X86_TICK(c, 11);
    // 0e32db  push 0xd
    X86_AT(c, 0xe32dbu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e32dd  push 3
    X86_AT(c, 0xe32ddu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e32df  call 0xca2d4
    X86_AT(c, 0xe32dfu);
    push32(c, 0xe32e4u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xe32e4u);
    X86_TICK(c, 11);
    // 0e32e4  push 0xd
    X86_AT(c, 0xe32e4u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e32e6  push 0xa
    X86_AT(c, 0xe32e6u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e32e8  call 0xca2d4
    X86_AT(c, 0xe32e8u);
    push32(c, 0xe32edu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xe32edu);
    X86_TICK(c, 11);
    // 0e32ed  push 0xd
    X86_AT(c, 0xe32edu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e32ef  push 0xb
    X86_AT(c, 0xe32efu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e32f1  call 0xca2d4
    X86_AT(c, 0xe32f1u);
    push32(c, 0xe32f6u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xe32f6u);
    X86_TICK(c, 11);
    // 0e32f6  push 0xd
    X86_AT(c, 0xe32f6u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e32f8  push 7
    X86_AT(c, 0xe32f8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e32fa  call 0xca2d4
    X86_AT(c, 0xe32fau);
    push32(c, 0xe32ffu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xe32ffu);
    X86_TICK(c, 9);
    // 0e32ff  push 0xd
    X86_AT(c, 0xe32ffu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e3301  call 0xc8e04
    X86_AT(c, 0xe3301u);
    push32(c, 0xe3306u); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xe3306u);
    X86_TICK(c, 9);
    // 0e3306  push 0xd
    X86_AT(c, 0xe3306u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e3308  call 0xc8dd4
    X86_AT(c, 0xe3308u);
    push32(c, 0xe330du); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe330du);
    X86_TICK(c, 15);
    // 0e330d  push 0x18e
    X86_AT(c, 0xe330du);
    { uint32_t v = 0x18Eu; push32(c, v); }
    // 0e3312  push 0x169
    X86_AT(c, 0xe3312u);
    { uint32_t v = 0x169u; push32(c, v); }
    // 0e3317  push 0x2f
    X86_AT(c, 0xe3317u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0e3319  push 0xa
    X86_AT(c, 0xe3319u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e331b  call 0xc9588
    X86_AT(c, 0xe331bu);
    push32(c, 0xe3320u); x86_call_known(c, 0xc9588u, f_000c9588); X86_RET(c, 0xe3320u);
    X86_TICK(c, 27);
    // 0e3320  push 9
    X86_AT(c, 0xe3320u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e3322  push 0xf
    X86_AT(c, 0xe3322u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e3324  push 0xf
    X86_AT(c, 0xe3324u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e3326  push 4
    X86_AT(c, 0xe3326u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e3328  push 0x29
    X86_AT(c, 0xe3328u);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0e332a  push 0x54
    X86_AT(c, 0xe332au);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0e332c  push 0x15e
    X86_AT(c, 0xe332cu);
    { uint32_t v = 0x15Eu; push32(c, v); }
    // 0e3331  push 0x14f
    X86_AT(c, 0xe3331u);
    { uint32_t v = 0x14Fu; push32(c, v); }
    // 0e3336  push 0xa
    X86_AT(c, 0xe3336u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e3338  push 7
    X86_AT(c, 0xe3338u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e333a  call 0xc9fbc
    X86_AT(c, 0xe333au);
    push32(c, 0xe333fu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xe333fu);
    X86_TICK(c, 11);
    // 0e333f  add esp, 0x60
    X86_AT(c, 0xe333fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x60u, 0, 4); }
    // 0e3342  push 7
    X86_AT(c, 0xe3342u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3344  call 0xca0a0
    X86_AT(c, 0xe3344u);
    push32(c, 0xe3349u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe3349u);
    X86_TICK(c, 9);
    // 0e3349  push 7
    X86_AT(c, 0xe3349u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e334b  call 0xca100
    X86_AT(c, 0xe334bu);
    push32(c, 0xe3350u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xe3350u);
    X86_TICK(c, 27);
    // 0e3350  push 9
    X86_AT(c, 0xe3350u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e3352  push 0xf
    X86_AT(c, 0xe3352u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e3354  push 0xf
    X86_AT(c, 0xe3354u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e3356  push 5
    X86_AT(c, 0xe3356u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e3358  push 0x1f
    X86_AT(c, 0xe3358u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0e335a  push 0x54
    X86_AT(c, 0xe335au);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0e335c  push 0x107
    X86_AT(c, 0xe335cu);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0e3361  push 0x14f
    X86_AT(c, 0xe3361u);
    { uint32_t v = 0x14Fu; push32(c, v); }
    // 0e3366  push 0x16e
    X86_AT(c, 0xe3366u);
    { uint32_t v = 0x16Eu; push32(c, v); }
    // 0e336b  push 0xa
    X86_AT(c, 0xe336bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e336d  call 0xc9fbc
    X86_AT(c, 0xe336du);
    push32(c, 0xe3372u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xe3372u);
    X86_TICK(c, 9);
    // 0e3372  push 0xa
    X86_AT(c, 0xe3372u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e3374  call 0xca0a0
    X86_AT(c, 0xe3374u);
    push32(c, 0xe3379u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe3379u);
    X86_TICK(c, 11);
    // 0e3379  add esp, 0x34
    X86_AT(c, 0xe3379u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0e337c  push 0xa
    X86_AT(c, 0xe337cu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e337e  call 0xca100
    X86_AT(c, 0xe337eu);
    push32(c, 0xe3383u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xe3383u);
    X86_TICK(c, 15);
    // 0e3383  mov esi, 0xb02ec
    X86_AT(c, 0xe3383u);
    c.r[6] = 0xB02ECu;
    // 0e3388  push 0
    X86_AT(c, 0xe3388u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e338a  push 2
    X86_AT(c, 0xe338au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e338c  push 0xa
    X86_AT(c, 0xe338cu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e338e  call 0xca9c8
    X86_AT(c, 0xe338eu);
    push32(c, 0xe3393u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe3393u);
    X86_TICK(c, 11);
    // 0e3393  push esi
    X86_AT(c, 0xe3393u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3394  push 0xa
    X86_AT(c, 0xe3394u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e3396  call 0xca850
    X86_AT(c, 0xe3396u);
    push32(c, 0xe339bu); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xe339bu);
    X86_TICK(c, 13);
    // 0e339b  push 1
    X86_AT(c, 0xe339bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e339d  push 2
    X86_AT(c, 0xe339du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e339f  push 0xa
    X86_AT(c, 0xe339fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e33a1  call 0xca9c8
    X86_AT(c, 0xe33a1u);
    push32(c, 0xe33a6u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe33a6u);
    X86_TICK(c, 11);
    // 0e33a6  push 0xff34
    X86_AT(c, 0xe33a6u);
    { uint32_t v = 0xFF34u; push32(c, v); }
    // 0e33ab  push 0xa
    X86_AT(c, 0xe33abu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e33ad  call 0xca414
    X86_AT(c, 0xe33adu);
    push32(c, 0xe33b2u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xe33b2u);
    X86_TICK(c, 13);
    // 0e33b2  push 2
    X86_AT(c, 0xe33b2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e33b4  push 2
    X86_AT(c, 0xe33b4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e33b6  push 0xa
    X86_AT(c, 0xe33b6u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e33b8  call 0xca9c8
    X86_AT(c, 0xe33b8u);
    push32(c, 0xe33bdu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe33bdu);
    X86_TICK(c, 11);
    // 0e33bd  push 0xff4c
    X86_AT(c, 0xe33bdu);
    { uint32_t v = 0xFF4Cu; push32(c, v); }
    // 0e33c2  push 0xa
    X86_AT(c, 0xe33c2u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e33c4  call 0xca414
    X86_AT(c, 0xe33c4u);
    push32(c, 0xe33c9u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xe33c9u);
    X86_TICK(c, 15);
    // 0e33c9  add esp, 0x40
    X86_AT(c, 0xe33c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e33cc  push 3
    X86_AT(c, 0xe33ccu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e33ce  push 2
    X86_AT(c, 0xe33ceu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e33d0  push 0xa
    X86_AT(c, 0xe33d0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e33d2  call 0xca9c8
    X86_AT(c, 0xe33d2u);
    push32(c, 0xe33d7u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe33d7u);
    X86_TICK(c, 11);
    // 0e33d7  push 0xff64
    X86_AT(c, 0xe33d7u);
    { uint32_t v = 0xFF64u; push32(c, v); }
    // 0e33dc  push 0xa
    X86_AT(c, 0xe33dcu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e33de  call 0xc8cdc
    X86_AT(c, 0xe33deu);
    push32(c, 0xe33e3u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe33e3u);
    X86_TICK(c, 13);
    // 0e33e3  push 4
    X86_AT(c, 0xe33e3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e33e5  push 2
    X86_AT(c, 0xe33e5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e33e7  push 0xa
    X86_AT(c, 0xe33e7u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e33e9  call 0xca9c8
    X86_AT(c, 0xe33e9u);
    push32(c, 0xe33eeu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe33eeu);
    X86_TICK(c, 11);
    // 0e33ee  push 0xff7c
    X86_AT(c, 0xe33eeu);
    { uint32_t v = 0xFF7Cu; push32(c, v); }
    // 0e33f3  push 0xa
    X86_AT(c, 0xe33f3u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e33f5  call 0xc8cdc
    X86_AT(c, 0xe33f5u);
    push32(c, 0xe33fau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe33fau);
    X86_TICK(c, 9);
    // 0e33fa  mov dword ptr [0xb52f8], 5
    X86_AT(c, 0xe33fau);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x5u);
    // 0e3404  call 0xcc6e8
    X86_AT(c, 0xe3404u);
    push32(c, 0xe3409u); x86_call_known(c, 0xcc6e8u, f_000cc6e8); X86_RET(c, 0xe3409u);
    X86_TICK(c, 7);
    // 0e3409  call 0xe2a34
    X86_AT(c, 0xe3409u);
    push32(c, 0xe340eu); x86_call_known(c, 0xe2a34u, f_000e2a34); X86_RET(c, 0xe340eu);
    X86_TICK(c, 7);
    // 0e340e  call 0xc5e0c
    X86_AT(c, 0xe340eu);
    push32(c, 0xe3413u); x86_call_known(c, 0xc5e0cu, f_000c5e0c); X86_RET(c, 0xe3413u);
    X86_TICK(c, 15);
    // 0e3413  add eax, dword ptr [0xb0336]
    X86_AT(c, 0xe3413u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0336u))), 0, 4); }
    // 0e3419  push eax
    X86_AT(c, 0xe3419u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e341a  call 0xe78dc
    X86_AT(c, 0xe341au);
    push32(c, 0xe341fu); x86_call_known(c, 0xe78dcu, f_000e78dc); X86_RET(c, 0xe341fu);
    X86_TICK(c, 7);
    // 0e341f  call 0xe2edc
    X86_AT(c, 0xe341fu);
    push32(c, 0xe3424u); x86_call_known(c, 0xe2edcu, f_000e2edc); X86_RET(c, 0xe3424u);
    X86_TICK(c, 9);
    // 0e3424  push 3
    X86_AT(c, 0xe3424u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e3426  call 0xc71e0
    X86_AT(c, 0xe3426u);
    push32(c, 0xe342bu); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xe342bu);
    X86_TICK(c, 7);
    // 0e342b  call 0xe2128
    X86_AT(c, 0xe342bu);
    push32(c, 0xe3430u); x86_call_known(c, 0xe2128u, f_000e2128); X86_RET(c, 0xe3430u);
    X86_TICK(c, 23);
    // 0e3430  add esp, 0x30
    X86_AT(c, 0xe3430u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0e3433  push 1
    X86_AT(c, 0xe3433u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e3435  push 4
    X86_AT(c, 0xe3435u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e3437  push 3
    X86_AT(c, 0xe3437u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e3439  mov eax, dword ptr [0x42b80]
    X86_AT(c, 0xe3439u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x42B80u)));
    // 0e343e  lea eax, [eax*2 - 0x100]
    X86_AT(c, 0xe343eu);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0xFFFFFF00u);
    // 0e3445  push eax
    X86_AT(c, 0xe3445u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e3446  call 0xe120c
    X86_AT(c, 0xe3446u);
    push32(c, 0xe344bu); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe344bu);
    X86_TICK(c, 17);
    // 0e344b  push 0xf
    X86_AT(c, 0xe344bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e344d  push 0x24
    X86_AT(c, 0xe344du);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0e344f  push 0x270
    X86_AT(c, 0xe344fu);
    { uint32_t v = 0x270u; push32(c, v); }
    // 0e3454  push 0x23
    X86_AT(c, 0xe3454u);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0e3456  push 0xb
    X86_AT(c, 0xe3456u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e3458  call 0xc95ec
    X86_AT(c, 0xe3458u);
    push32(c, 0xe345du); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xe345du);
    X86_TICK(c, 17);
    // 0e345d  push 0xf
    X86_AT(c, 0xe345du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e345f  push 0x146
    X86_AT(c, 0xe345fu);
    { uint32_t v = 0x146u; push32(c, v); }
    // 0e3464  push 0x270
    X86_AT(c, 0xe3464u);
    { uint32_t v = 0x270u; push32(c, v); }
    // 0e3469  push 0x145
    X86_AT(c, 0xe3469u);
    { uint32_t v = 0x145u; push32(c, v); }
    // 0e346e  push 0xb
    X86_AT(c, 0xe346eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e3470  call 0xc95ec
    X86_AT(c, 0xe3470u);
    push32(c, 0xe3475u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xe3475u);
    X86_TICK(c, 17);
    // 0e3475  push 0xf
    X86_AT(c, 0xe3475u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e3477  push 0x145
    X86_AT(c, 0xe3477u);
    { uint32_t v = 0x145u; push32(c, v); }
    // 0e347c  push 0xb
    X86_AT(c, 0xe347cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e347e  push 0x24
    X86_AT(c, 0xe347eu);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0e3480  push 0xa
    X86_AT(c, 0xe3480u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e3482  call 0xc95ec
    X86_AT(c, 0xe3482u);
    push32(c, 0xe3487u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xe3487u);
    X86_TICK(c, 19);
    // 0e3487  add esp, 0x4c
    X86_AT(c, 0xe3487u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4Cu, 0, 4); }
    // 0e348a  push 0xf
    X86_AT(c, 0xe348au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e348c  push 0x145
    X86_AT(c, 0xe348cu);
    { uint32_t v = 0x145u; push32(c, v); }
    // 0e3491  push 0x271
    X86_AT(c, 0xe3491u);
    { uint32_t v = 0x271u; push32(c, v); }
    // 0e3496  push 0x24
    X86_AT(c, 0xe3496u);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0e3498  push 0x270
    X86_AT(c, 0xe3498u);
    { uint32_t v = 0x270u; push32(c, v); }
    // 0e349d  call 0xc95ec
    X86_AT(c, 0xe349du);
    push32(c, 0xe34a2u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xe34a2u);
    X86_TICK(c, 9);
    // 0e34a2  push 7
    X86_AT(c, 0xe34a2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e34a4  call 0xcacd4
    X86_AT(c, 0xe34a4u);
    push32(c, 0xe34a9u); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xe34a9u);
    X86_TICK(c, 2);
    // 0e34a9  add esp, 0x18
    X86_AT(c, 0xe34a9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_e34ac:
    X86_TICK(c, 2);
    // 0e34ac  sub edi, edi
    X86_AT(c, 0xe34acu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e34ae:
    X86_TICK(c, 9);
    // 0e34ae  push 7
    X86_AT(c, 0xe34aeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e34b0  call 0xcad80
    X86_AT(c, 0xe34b0u);
    push32(c, 0xe34b5u); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xe34b5u);
    X86_TICK(c, 7);
    // 0e34b5  call 0xe29d8
    X86_AT(c, 0xe34b5u);
    push32(c, 0xe34bau); x86_call_known(c, 0xe29d8u, f_000e29d8); X86_RET(c, 0xe34bau);
    X86_TICK(c, 12);
    // 0e34ba  xchg ebx, eax
    X86_AT(c, 0xe34bau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e34bb  inc edi
    X86_AT(c, 0xe34bbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e34bc  call 0xe2274
    X86_AT(c, 0xe34bcu);
    push32(c, 0xe34c1u); x86_call_known(c, 0xe2274u, f_000e2274); X86_RET(c, 0xe34c1u);
    X86_TICK(c, 9);
    // 0e34c1  add esp, 4
    X86_AT(c, 0xe34c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e34c4  and bl, bl
    X86_AT(c, 0xe34c4u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e34c6  jne 0xe34d0
    X86_AT(c, 0xe34c6u);
    if (x86_cc(c, 5)) { goto L_e34d0; }
    X86_TICK(c, 7);
    // 0e34c8  cmp edi, 0x5dc
    X86_AT(c, 0xe34c8u);
    (void)x86_sub(c, c.r[7], 0x5DCu, 0, 4);
    // 0e34ce  jl 0xe34ae
    X86_AT(c, 0xe34ceu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xe34aeu); goto L_e34ae; }
L_e34d0:
    X86_TICK(c, 7);
    // 0e34d0  and bl, bl
    X86_AT(c, 0xe34d0u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e34d2  jne 0xe34d6
    X86_AT(c, 0xe34d2u);
    if (x86_cc(c, 5)) { goto L_e34d6; }
    X86_TICK(c, 2);
    // 0e34d4  mov bl, 0x20
    X86_AT(c, 0xe34d4u);
    s8(c, 3, 0x20u);
L_e34d6:
    X86_TICK(c, 12);
    // 0e34d6  movzx edx, bl
    X86_AT(c, 0xe34d6u);
    c.r[2] = g8(c, 3);
    // 0e34d9  dec edx
    X86_AT(c, 0xe34d9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e34da  cmp edx, 0x59
    X86_AT(c, 0xe34dau);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0e34dd  ja 0xe3736
    X86_AT(c, 0xe34ddu);
    if (x86_cc(c, 7)) { goto L_e3736; }
    X86_TICK(c, 7);
    // 0e34e3  jmp dword ptr cs:[edx*4 + 0xe34eb]
    X86_AT(c, 0xe34e3u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE34EBu)));
      switch (t) {
      case 0xe3653u: goto L_e3653;
      case 0xe365eu: goto L_e365e;
      case 0xe366du: goto L_e366d;
      case 0xe3677u: goto L_e3677;
      case 0xe3681u: goto L_e3681;
      case 0xe368bu: goto L_e368b;
      case 0xe3695u: goto L_e3695;
      case 0xe369fu: goto L_e369f;
      case 0xe36a9u: goto L_e36a9;
      case 0xe36bdu: goto L_e36bd;
      case 0xe36c4u: goto L_e36c4;
      case 0xe36ceu: goto L_e36ce;
      case 0xe36d8u: goto L_e36d8;
      case 0xe36dfu: goto L_e36df;
      case 0xe36e6u: goto L_e36e6;
      case 0xe36edu: goto L_e36ed;
      case 0xe36f4u: goto L_e36f4;
      case 0xe36fbu: goto L_e36fb;
      case 0xe3702u: goto L_e3702;
      case 0xe3709u: goto L_e3709;
      case 0xe3710u: goto L_e3710;
      case 0xe3717u: goto L_e3717;
      case 0xe371eu: goto L_e371e;
      case 0xe372fu: goto L_e372f;
      case 0xe3736u: goto L_e3736;
      default: x86_jump(c, t); return; } }
L_e3653:
    X86_TICK(c, 12);
    // 0e3653  movzx ebx, bl
    X86_AT(c, 0xe3653u);
    c.r[3] = g8(c, 3);
    // 0e3656  push ebx
    X86_AT(c, 0xe3656u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e3657  call 0xe1378
    X86_AT(c, 0xe3657u);
    push32(c, 0xe365cu); x86_call_known(c, 0xe1378u, f_000e1378); X86_RET(c, 0xe365cu);
    X86_TICK(c, 7);
    // 0e365c  jmp 0xe3665
    X86_AT(c, 0xe365cu);
    goto L_e3665;
L_e365e:
    X86_TICK(c, 9);
    // 0e365e  push 0xffffffff
    X86_AT(c, 0xe365eu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e3660  call 0xe16dc
    X86_AT(c, 0xe3660u);
    push32(c, 0xe3665u); x86_call_known(c, 0xe16dcu, f_000e16dc); X86_RET(c, 0xe3665u);
L_e3665:
    X86_TICK(c, 9);
    // 0e3665  add esp, 4
    X86_AT(c, 0xe3665u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e3668  jmp 0xe373b
    X86_AT(c, 0xe3668u);
    goto L_e373b;
L_e366d:
    X86_TICK(c, 7);
    // 0e366d  call 0xe1f48
    X86_AT(c, 0xe366du);
    push32(c, 0xe3672u); x86_call_known(c, 0xe1f48u, f_000e1f48); X86_RET(c, 0xe3672u);
    X86_TICK(c, 7);
    // 0e3672  jmp 0xe373b
    X86_AT(c, 0xe3672u);
    goto L_e373b;
L_e3677:
    X86_TICK(c, 7);
    // 0e3677  call 0xe1be0
    X86_AT(c, 0xe3677u);
    push32(c, 0xe367cu); x86_call_known(c, 0xe1be0u, f_000e1be0); X86_RET(c, 0xe367cu);
    X86_TICK(c, 7);
    // 0e367c  jmp 0xe373b
    X86_AT(c, 0xe367cu);
    goto L_e373b;
L_e3681:
    X86_TICK(c, 7);
    // 0e3681  call 0xe1f58
    X86_AT(c, 0xe3681u);
    push32(c, 0xe3686u); x86_call_known(c, 0xe1f58u, f_000e1f58); X86_RET(c, 0xe3686u);
    X86_TICK(c, 7);
    // 0e3686  jmp 0xe373b
    X86_AT(c, 0xe3686u);
    goto L_e373b;
L_e368b:
    X86_TICK(c, 7);
    // 0e368b  call 0xe1f68
    X86_AT(c, 0xe368bu);
    push32(c, 0xe3690u); x86_call_known(c, 0xe1f68u, f_000e1f68); X86_RET(c, 0xe3690u);
    X86_TICK(c, 7);
    // 0e3690  jmp 0xe373b
    X86_AT(c, 0xe3690u);
    goto L_e373b;
L_e3695:
    X86_TICK(c, 7);
    // 0e3695  call 0xe1f78
    X86_AT(c, 0xe3695u);
    push32(c, 0xe369au); x86_call_known(c, 0xe1f78u, f_000e1f78); X86_RET(c, 0xe369au);
    X86_TICK(c, 7);
    // 0e369a  jmp 0xe373b
    X86_AT(c, 0xe369au);
    goto L_e373b;
L_e369f:
    X86_TICK(c, 7);
    // 0e369f  call 0xe1d54
    X86_AT(c, 0xe369fu);
    push32(c, 0xe36a4u); x86_call_known(c, 0xe1d54u, f_000e1d54); X86_RET(c, 0xe36a4u);
    X86_TICK(c, 7);
    // 0e36a4  jmp 0xe373b
    X86_AT(c, 0xe36a4u);
    goto L_e373b;
L_e36a9:
    X86_TICK(c, 7);
    // 0e36a9  call 0xe1f88
    X86_AT(c, 0xe36a9u);
    push32(c, 0xe36aeu); x86_call_known(c, 0xe1f88u, f_000e1f88); X86_RET(c, 0xe36aeu);
    X86_TICK(c, 9);
    // 0e36ae  mov dword ptr [0xc2dd8], 1
    X86_AT(c, 0xe36aeu);
    wr32((c.sbase[3] + (uint32_t)(0xC2DD8u)), 0x1u);
    // 0e36b8  jmp 0xe373b
    X86_AT(c, 0xe36b8u);
    goto L_e373b;
L_e36bd:
    X86_TICK(c, 7);
    // 0e36bd  call 0xe1e40
    X86_AT(c, 0xe36bdu);
    push32(c, 0xe36c2u); x86_call_known(c, 0xe1e40u, f_000e1e40); X86_RET(c, 0xe36c2u);
    X86_TICK(c, 7);
    // 0e36c2  jmp 0xe3723
    X86_AT(c, 0xe36c2u);
    goto L_e3723;
L_e36c4:
    X86_TICK(c, 7);
    // 0e36c4  call 0xce424
    X86_AT(c, 0xe36c4u);
    push32(c, 0xe36c9u); x86_call_known(c, 0xce424u, f_000ce424); X86_RET(c, 0xe36c9u);
    X86_TICK(c, 7);
    // 0e36c9  jmp 0xe373b
    X86_AT(c, 0xe36c9u);
    goto L_e373b;
L_e36ce:
    X86_TICK(c, 7);
    // 0e36ce  call 0xe1f98
    X86_AT(c, 0xe36ceu);
    push32(c, 0xe36d3u); x86_call_known(c, 0xe1f98u, f_000e1f98); X86_RET(c, 0xe36d3u);
    X86_TICK(c, 7);
    // 0e36d3  jmp 0xe373b
    X86_AT(c, 0xe36d3u);
    goto L_e373b;
L_e36d8:
    X86_TICK(c, 7);
    // 0e36d8  call 0xcfa5c
    X86_AT(c, 0xe36d8u);
    push32(c, 0xe36ddu); x86_call_known(c, 0xcfa5cu, f_000cfa5c); X86_RET(c, 0xe36ddu);
    X86_TICK(c, 7);
    // 0e36dd  jmp 0xe373b
    X86_AT(c, 0xe36ddu);
    goto L_e373b;
L_e36df:
    X86_TICK(c, 7);
    // 0e36df  call 0xe1fa8
    X86_AT(c, 0xe36dfu);
    push32(c, 0xe36e4u); x86_call_known(c, 0xe1fa8u, f_000e1fa8); X86_RET(c, 0xe36e4u);
    X86_TICK(c, 7);
    // 0e36e4  jmp 0xe373b
    X86_AT(c, 0xe36e4u);
    goto L_e373b;
L_e36e6:
    X86_TICK(c, 7);
    // 0e36e6  call 0xe1fb8
    X86_AT(c, 0xe36e6u);
    push32(c, 0xe36ebu); x86_call_known(c, 0xe1fb8u, f_000e1fb8); X86_RET(c, 0xe36ebu);
    X86_TICK(c, 7);
    // 0e36eb  jmp 0xe373b
    X86_AT(c, 0xe36ebu);
    goto L_e373b;
L_e36ed:
    X86_TICK(c, 7);
    // 0e36ed  call 0xcfc24
    X86_AT(c, 0xe36edu);
    push32(c, 0xe36f2u); x86_call_known(c, 0xcfc24u, f_000cfc24); X86_RET(c, 0xe36f2u);
    X86_TICK(c, 7);
    // 0e36f2  jmp 0xe3723
    X86_AT(c, 0xe36f2u);
    goto L_e3723;
L_e36f4:
    X86_TICK(c, 7);
    // 0e36f4  call 0xe1fc8
    X86_AT(c, 0xe36f4u);
    push32(c, 0xe36f9u); x86_call_known(c, 0xe1fc8u, f_000e1fc8); X86_RET(c, 0xe36f9u);
    X86_TICK(c, 7);
    // 0e36f9  jmp 0xe373b
    X86_AT(c, 0xe36f9u);
    goto L_e373b;
L_e36fb:
    X86_TICK(c, 7);
    // 0e36fb  call 0xe1fe0
    X86_AT(c, 0xe36fbu);
    push32(c, 0xe3700u); x86_call_known(c, 0xe1fe0u, f_000e1fe0); X86_RET(c, 0xe3700u);
    X86_TICK(c, 7);
    // 0e3700  jmp 0xe373b
    X86_AT(c, 0xe3700u);
    goto L_e373b;
L_e3702:
    X86_TICK(c, 7);
    // 0e3702  call 0xe1ff8
    X86_AT(c, 0xe3702u);
    push32(c, 0xe3707u); x86_call_known(c, 0xe1ff8u, f_000e1ff8); X86_RET(c, 0xe3707u);
    X86_TICK(c, 7);
    // 0e3707  jmp 0xe373b
    X86_AT(c, 0xe3707u);
    goto L_e373b;
L_e3709:
    X86_TICK(c, 7);
    // 0e3709  call 0xe2008
    X86_AT(c, 0xe3709u);
    push32(c, 0xe370eu); x86_call_known(c, 0xe2008u, f_000e2008); X86_RET(c, 0xe370eu);
    X86_TICK(c, 7);
    // 0e370e  jmp 0xe373b
    X86_AT(c, 0xe370eu);
    goto L_e373b;
L_e3710:
    X86_TICK(c, 7);
    // 0e3710  call 0xe2018
    X86_AT(c, 0xe3710u);
    push32(c, 0xe3715u); x86_call_known(c, 0xe2018u, f_000e2018); X86_RET(c, 0xe3715u);
    X86_TICK(c, 7);
    // 0e3715  jmp 0xe373b
    X86_AT(c, 0xe3715u);
    goto L_e373b;
L_e3717:
    X86_TICK(c, 7);
    // 0e3717  call 0xce57c
    X86_AT(c, 0xe3717u);
    push32(c, 0xe371cu); x86_call_known(c, 0xce57cu, f_000ce57c); X86_RET(c, 0xe371cu);
    X86_TICK(c, 7);
    // 0e371c  jmp 0xe373b
    X86_AT(c, 0xe371cu);
    goto L_e373b;
L_e371e:
    X86_TICK(c, 7);
    // 0e371e  call 0xdd308
    X86_AT(c, 0xe371eu);
    push32(c, 0xe3723u); x86_call_known(c, 0xdd308u, f_000dd308); X86_RET(c, 0xe3723u);
L_e3723:
    X86_TICK(c, 9);
    // 0e3723  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xe3723u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0e372d  jmp 0xe373b
    X86_AT(c, 0xe372du);
    goto L_e373b;
L_e372f:
    X86_TICK(c, 7);
    // 0e372f  call 0xcdcf8
    X86_AT(c, 0xe372fu);
    push32(c, 0xe3734u); x86_call_known(c, 0xcdcf8u, f_000cdcf8); X86_RET(c, 0xe3734u);
    X86_TICK(c, 7);
    // 0e3734  jmp 0xe373b
    X86_AT(c, 0xe3734u);
    goto L_e373b;
L_e3736:
    X86_TICK(c, 7);
    // 0e3736  call 0xe2a1c
    X86_AT(c, 0xe3736u);
    push32(c, 0xe373bu); x86_call_known(c, 0xe2a1cu, f_000e2a1c); X86_RET(c, 0xe373bu);
L_e373b:
    X86_TICK(c, 12);
    // 0e373b  cmp dword ptr [0xbef90], 0
    X86_AT(c, 0xe373bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF90u))), 0x0u, 0, 4);
    // 0e3742  je 0xe3776
    X86_AT(c, 0xe3742u);
    if (x86_cc(c, 4)) { goto L_e3776; }
    X86_TICK(c, 7);
    // 0e3744  call 0xe2128
    X86_AT(c, 0xe3744u);
    push32(c, 0xe3749u); x86_call_known(c, 0xe2128u, f_000e2128); X86_RET(c, 0xe3749u);
    X86_TICK(c, 12);
    // 0e3749  cmp dword ptr [0xc2db8], 3
    X86_AT(c, 0xe3749u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DB8u))), 0x3u, 0, 4);
    // 0e3750  jne 0xe3776
    X86_AT(c, 0xe3750u);
    if (x86_cc(c, 5)) { goto L_e3776; }
    X86_TICK(c, 12);
    // 0e3752  cmp dword ptr [0xc2dbc], 4
    X86_AT(c, 0xe3752u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DBCu))), 0x4u, 0, 4);
    // 0e3759  jne 0xe3776
    X86_AT(c, 0xe3759u);
    if (x86_cc(c, 5)) { goto L_e3776; }
    X86_TICK(c, 21);
    // 0e375b  push 1
    X86_AT(c, 0xe375bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e375d  push 4
    X86_AT(c, 0xe375du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e375f  push 3
    X86_AT(c, 0xe375fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e3761  mov eax, dword ptr [0x42b80]
    X86_AT(c, 0xe3761u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x42B80u)));
    // 0e3766  lea eax, [eax*2 - 0x100]
    X86_AT(c, 0xe3766u);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0xFFFFFF00u);
    // 0e376d  push eax
    X86_AT(c, 0xe376du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e376e  call 0xe120c
    X86_AT(c, 0xe376eu);
    push32(c, 0xe3773u); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe3773u);
    X86_TICK(c, 2);
    // 0e3773  add esp, 0x10
    X86_AT(c, 0xe3773u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e3776:
    X86_TICK(c, 7);
    // 0e3776  call 0xe2828
    X86_AT(c, 0xe3776u);
    push32(c, 0xe377bu); x86_call_known(c, 0xe2828u, f_000e2828); X86_RET(c, 0xe377bu);
    X86_TICK(c, 12);
    // 0e377b  cmp dword ptr [0xc2ea0], 0
    X86_AT(c, 0xe377bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2EA0u))), 0x0u, 0, 4);
    // 0e3782  je 0xe3793
    X86_AT(c, 0xe3782u);
    if (x86_cc(c, 4)) { goto L_e3793; }
    X86_TICK(c, 7);
    // 0e3784  call 0xe319c
    X86_AT(c, 0xe3784u);
    push32(c, 0xe3789u); x86_call_known(c, 0xe319cu, f_000e319c); X86_RET(c, 0xe3789u);
    X86_TICK(c, 2);
    // 0e3789  mov dword ptr [0xafefc], 1
    X86_AT(c, 0xe3789u);
    wr32((c.sbase[3] + (uint32_t)(0xAFEFCu)), 0x1u);
L_e3793:
    X86_TICK(c, 12);
    // 0e3793  cmp dword ptr [0xb134c], 1
    X86_AT(c, 0xe3793u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB134Cu))), 0x1u, 0, 4);
    // 0e379a  je 0xe37bc
    X86_AT(c, 0xe379au);
    if (x86_cc(c, 4)) { goto L_e37bc; }
    X86_TICK(c, 7);
    // 0e379c  call 0xe26b0
    X86_AT(c, 0xe379cu);
    push32(c, 0xe37a1u); x86_call_known(c, 0xe26b0u, f_000e26b0); X86_RET(c, 0xe37a1u);
    X86_TICK(c, 12);
    // 0e37a1  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xe37a1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0e37a8  jle 0xe37b7
    X86_AT(c, 0xe37a8u);
    if (x86_cc(c, 14)) { goto L_e37b7; }
    X86_TICK(c, 12);
    // 0e37aa  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xe37aau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0e37b1  jg 0xe34ac
    X86_AT(c, 0xe37b1u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xe34acu); goto L_e34ac; }
L_e37b7:
    X86_TICK(c, 7);
    // 0e37b7  call 0xe2ab4
    X86_AT(c, 0xe37b7u);
    push32(c, 0xe37bcu); x86_call_known(c, 0xe2ab4u, f_000e2ab4); X86_RET(c, 0xe37bcu);
L_e37bc:
    X86_TICK(c, 28);
    // 0e37bc  pop edi
    X86_AT(c, 0xe37bcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e37bd  pop esi
    X86_AT(c, 0xe37bdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e37be  pop ebx
    X86_AT(c, 0xe37beu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e37bf  leave 
    X86_AT(c, 0xe37bfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e37c0  ret 
    X86_AT(c, 0xe37c0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe32c8u, "ran off the end of a function");
}
void f_000e373b(X86Cpu& c) {
    goto L_e373b;
L_e34ac:
    X86_TICK(c, 2);
    // 0e34ac  sub edi, edi
    X86_AT(c, 0xe34acu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e34ae:
    X86_TICK(c, 9);
    // 0e34ae  push 7
    X86_AT(c, 0xe34aeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e34b0  call 0xcad80
    X86_AT(c, 0xe34b0u);
    push32(c, 0xe34b5u); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xe34b5u);
    X86_TICK(c, 7);
    // 0e34b5  call 0xe29d8
    X86_AT(c, 0xe34b5u);
    push32(c, 0xe34bau); x86_call_known(c, 0xe29d8u, f_000e29d8); X86_RET(c, 0xe34bau);
    X86_TICK(c, 12);
    // 0e34ba  xchg ebx, eax
    X86_AT(c, 0xe34bau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e34bb  inc edi
    X86_AT(c, 0xe34bbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e34bc  call 0xe2274
    X86_AT(c, 0xe34bcu);
    push32(c, 0xe34c1u); x86_call_known(c, 0xe2274u, f_000e2274); X86_RET(c, 0xe34c1u);
    X86_TICK(c, 9);
    // 0e34c1  add esp, 4
    X86_AT(c, 0xe34c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e34c4  and bl, bl
    X86_AT(c, 0xe34c4u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e34c6  jne 0xe34d0
    X86_AT(c, 0xe34c6u);
    if (x86_cc(c, 5)) { goto L_e34d0; }
    X86_TICK(c, 7);
    // 0e34c8  cmp edi, 0x5dc
    X86_AT(c, 0xe34c8u);
    (void)x86_sub(c, c.r[7], 0x5DCu, 0, 4);
    // 0e34ce  jl 0xe34ae
    X86_AT(c, 0xe34ceu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xe34aeu); goto L_e34ae; }
L_e34d0:
    X86_TICK(c, 7);
    // 0e34d0  and bl, bl
    X86_AT(c, 0xe34d0u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e34d2  jne 0xe34d6
    X86_AT(c, 0xe34d2u);
    if (x86_cc(c, 5)) { goto L_e34d6; }
    X86_TICK(c, 2);
    // 0e34d4  mov bl, 0x20
    X86_AT(c, 0xe34d4u);
    s8(c, 3, 0x20u);
L_e34d6:
    X86_TICK(c, 12);
    // 0e34d6  movzx edx, bl
    X86_AT(c, 0xe34d6u);
    c.r[2] = g8(c, 3);
    // 0e34d9  dec edx
    X86_AT(c, 0xe34d9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e34da  cmp edx, 0x59
    X86_AT(c, 0xe34dau);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0e34dd  ja 0xe3736
    X86_AT(c, 0xe34ddu);
    if (x86_cc(c, 7)) { goto L_e3736; }
    X86_TICK(c, 7);
    // 0e34e3  jmp dword ptr cs:[edx*4 + 0xe34eb]
    X86_AT(c, 0xe34e3u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE34EBu)));
      switch (t) {
      case 0xe3653u: goto L_e3653;
      case 0xe365eu: goto L_e365e;
      case 0xe366du: goto L_e366d;
      case 0xe3677u: goto L_e3677;
      case 0xe3681u: goto L_e3681;
      case 0xe368bu: goto L_e368b;
      case 0xe3695u: goto L_e3695;
      case 0xe369fu: goto L_e369f;
      case 0xe36a9u: goto L_e36a9;
      case 0xe36bdu: goto L_e36bd;
      case 0xe36c4u: goto L_e36c4;
      case 0xe36ceu: goto L_e36ce;
      case 0xe36d8u: goto L_e36d8;
      case 0xe36dfu: goto L_e36df;
      case 0xe36e6u: goto L_e36e6;
      case 0xe36edu: goto L_e36ed;
      case 0xe36f4u: goto L_e36f4;
      case 0xe36fbu: goto L_e36fb;
      case 0xe3702u: goto L_e3702;
      case 0xe3709u: goto L_e3709;
      case 0xe3710u: goto L_e3710;
      case 0xe3717u: goto L_e3717;
      case 0xe371eu: goto L_e371e;
      case 0xe372fu: goto L_e372f;
      case 0xe3736u: goto L_e3736;
      default: x86_jump(c, t); return; } }
L_e3653:
    X86_TICK(c, 12);
    // 0e3653  movzx ebx, bl
    X86_AT(c, 0xe3653u);
    c.r[3] = g8(c, 3);
    // 0e3656  push ebx
    X86_AT(c, 0xe3656u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e3657  call 0xe1378
    X86_AT(c, 0xe3657u);
    push32(c, 0xe365cu); x86_call_known(c, 0xe1378u, f_000e1378); X86_RET(c, 0xe365cu);
    X86_TICK(c, 7);
    // 0e365c  jmp 0xe3665
    X86_AT(c, 0xe365cu);
    goto L_e3665;
L_e365e:
    X86_TICK(c, 9);
    // 0e365e  push 0xffffffff
    X86_AT(c, 0xe365eu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e3660  call 0xe16dc
    X86_AT(c, 0xe3660u);
    push32(c, 0xe3665u); x86_call_known(c, 0xe16dcu, f_000e16dc); X86_RET(c, 0xe3665u);
L_e3665:
    X86_TICK(c, 9);
    // 0e3665  add esp, 4
    X86_AT(c, 0xe3665u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e3668  jmp 0xe373b
    X86_AT(c, 0xe3668u);
    goto L_e373b;
L_e366d:
    X86_TICK(c, 7);
    // 0e366d  call 0xe1f48
    X86_AT(c, 0xe366du);
    push32(c, 0xe3672u); x86_call_known(c, 0xe1f48u, f_000e1f48); X86_RET(c, 0xe3672u);
    X86_TICK(c, 7);
    // 0e3672  jmp 0xe373b
    X86_AT(c, 0xe3672u);
    goto L_e373b;
L_e3677:
    X86_TICK(c, 7);
    // 0e3677  call 0xe1be0
    X86_AT(c, 0xe3677u);
    push32(c, 0xe367cu); x86_call_known(c, 0xe1be0u, f_000e1be0); X86_RET(c, 0xe367cu);
    X86_TICK(c, 7);
    // 0e367c  jmp 0xe373b
    X86_AT(c, 0xe367cu);
    goto L_e373b;
L_e3681:
    X86_TICK(c, 7);
    // 0e3681  call 0xe1f58
    X86_AT(c, 0xe3681u);
    push32(c, 0xe3686u); x86_call_known(c, 0xe1f58u, f_000e1f58); X86_RET(c, 0xe3686u);
    X86_TICK(c, 7);
    // 0e3686  jmp 0xe373b
    X86_AT(c, 0xe3686u);
    goto L_e373b;
L_e368b:
    X86_TICK(c, 7);
    // 0e368b  call 0xe1f68
    X86_AT(c, 0xe368bu);
    push32(c, 0xe3690u); x86_call_known(c, 0xe1f68u, f_000e1f68); X86_RET(c, 0xe3690u);
    X86_TICK(c, 7);
    // 0e3690  jmp 0xe373b
    X86_AT(c, 0xe3690u);
    goto L_e373b;
L_e3695:
    X86_TICK(c, 7);
    // 0e3695  call 0xe1f78
    X86_AT(c, 0xe3695u);
    push32(c, 0xe369au); x86_call_known(c, 0xe1f78u, f_000e1f78); X86_RET(c, 0xe369au);
    X86_TICK(c, 7);
    // 0e369a  jmp 0xe373b
    X86_AT(c, 0xe369au);
    goto L_e373b;
L_e369f:
    X86_TICK(c, 7);
    // 0e369f  call 0xe1d54
    X86_AT(c, 0xe369fu);
    push32(c, 0xe36a4u); x86_call_known(c, 0xe1d54u, f_000e1d54); X86_RET(c, 0xe36a4u);
    X86_TICK(c, 7);
    // 0e36a4  jmp 0xe373b
    X86_AT(c, 0xe36a4u);
    goto L_e373b;
L_e36a9:
    X86_TICK(c, 7);
    // 0e36a9  call 0xe1f88
    X86_AT(c, 0xe36a9u);
    push32(c, 0xe36aeu); x86_call_known(c, 0xe1f88u, f_000e1f88); X86_RET(c, 0xe36aeu);
    X86_TICK(c, 9);
    // 0e36ae  mov dword ptr [0xc2dd8], 1
    X86_AT(c, 0xe36aeu);
    wr32((c.sbase[3] + (uint32_t)(0xC2DD8u)), 0x1u);
    // 0e36b8  jmp 0xe373b
    X86_AT(c, 0xe36b8u);
    goto L_e373b;
L_e36bd:
    X86_TICK(c, 7);
    // 0e36bd  call 0xe1e40
    X86_AT(c, 0xe36bdu);
    push32(c, 0xe36c2u); x86_call_known(c, 0xe1e40u, f_000e1e40); X86_RET(c, 0xe36c2u);
    X86_TICK(c, 7);
    // 0e36c2  jmp 0xe3723
    X86_AT(c, 0xe36c2u);
    goto L_e3723;
L_e36c4:
    X86_TICK(c, 7);
    // 0e36c4  call 0xce424
    X86_AT(c, 0xe36c4u);
    push32(c, 0xe36c9u); x86_call_known(c, 0xce424u, f_000ce424); X86_RET(c, 0xe36c9u);
    X86_TICK(c, 7);
    // 0e36c9  jmp 0xe373b
    X86_AT(c, 0xe36c9u);
    goto L_e373b;
L_e36ce:
    X86_TICK(c, 7);
    // 0e36ce  call 0xe1f98
    X86_AT(c, 0xe36ceu);
    push32(c, 0xe36d3u); x86_call_known(c, 0xe1f98u, f_000e1f98); X86_RET(c, 0xe36d3u);
    X86_TICK(c, 7);
    // 0e36d3  jmp 0xe373b
    X86_AT(c, 0xe36d3u);
    goto L_e373b;
L_e36d8:
    X86_TICK(c, 7);
    // 0e36d8  call 0xcfa5c
    X86_AT(c, 0xe36d8u);
    push32(c, 0xe36ddu); x86_call_known(c, 0xcfa5cu, f_000cfa5c); X86_RET(c, 0xe36ddu);
    X86_TICK(c, 7);
    // 0e36dd  jmp 0xe373b
    X86_AT(c, 0xe36ddu);
    goto L_e373b;
L_e36df:
    X86_TICK(c, 7);
    // 0e36df  call 0xe1fa8
    X86_AT(c, 0xe36dfu);
    push32(c, 0xe36e4u); x86_call_known(c, 0xe1fa8u, f_000e1fa8); X86_RET(c, 0xe36e4u);
    X86_TICK(c, 7);
    // 0e36e4  jmp 0xe373b
    X86_AT(c, 0xe36e4u);
    goto L_e373b;
L_e36e6:
    X86_TICK(c, 7);
    // 0e36e6  call 0xe1fb8
    X86_AT(c, 0xe36e6u);
    push32(c, 0xe36ebu); x86_call_known(c, 0xe1fb8u, f_000e1fb8); X86_RET(c, 0xe36ebu);
    X86_TICK(c, 7);
    // 0e36eb  jmp 0xe373b
    X86_AT(c, 0xe36ebu);
    goto L_e373b;
L_e36ed:
    X86_TICK(c, 7);
    // 0e36ed  call 0xcfc24
    X86_AT(c, 0xe36edu);
    push32(c, 0xe36f2u); x86_call_known(c, 0xcfc24u, f_000cfc24); X86_RET(c, 0xe36f2u);
    X86_TICK(c, 7);
    // 0e36f2  jmp 0xe3723
    X86_AT(c, 0xe36f2u);
    goto L_e3723;
L_e36f4:
    X86_TICK(c, 7);
    // 0e36f4  call 0xe1fc8
    X86_AT(c, 0xe36f4u);
    push32(c, 0xe36f9u); x86_call_known(c, 0xe1fc8u, f_000e1fc8); X86_RET(c, 0xe36f9u);
    X86_TICK(c, 7);
    // 0e36f9  jmp 0xe373b
    X86_AT(c, 0xe36f9u);
    goto L_e373b;
L_e36fb:
    X86_TICK(c, 7);
    // 0e36fb  call 0xe1fe0
    X86_AT(c, 0xe36fbu);
    push32(c, 0xe3700u); x86_call_known(c, 0xe1fe0u, f_000e1fe0); X86_RET(c, 0xe3700u);
    X86_TICK(c, 7);
    // 0e3700  jmp 0xe373b
    X86_AT(c, 0xe3700u);
    goto L_e373b;
L_e3702:
    X86_TICK(c, 7);
    // 0e3702  call 0xe1ff8
    X86_AT(c, 0xe3702u);
    push32(c, 0xe3707u); x86_call_known(c, 0xe1ff8u, f_000e1ff8); X86_RET(c, 0xe3707u);
    X86_TICK(c, 7);
    // 0e3707  jmp 0xe373b
    X86_AT(c, 0xe3707u);
    goto L_e373b;
L_e3709:
    X86_TICK(c, 7);
    // 0e3709  call 0xe2008
    X86_AT(c, 0xe3709u);
    push32(c, 0xe370eu); x86_call_known(c, 0xe2008u, f_000e2008); X86_RET(c, 0xe370eu);
    X86_TICK(c, 7);
    // 0e370e  jmp 0xe373b
    X86_AT(c, 0xe370eu);
    goto L_e373b;
L_e3710:
    X86_TICK(c, 7);
    // 0e3710  call 0xe2018
    X86_AT(c, 0xe3710u);
    push32(c, 0xe3715u); x86_call_known(c, 0xe2018u, f_000e2018); X86_RET(c, 0xe3715u);
    X86_TICK(c, 7);
    // 0e3715  jmp 0xe373b
    X86_AT(c, 0xe3715u);
    goto L_e373b;
L_e3717:
    X86_TICK(c, 7);
    // 0e3717  call 0xce57c
    X86_AT(c, 0xe3717u);
    push32(c, 0xe371cu); x86_call_known(c, 0xce57cu, f_000ce57c); X86_RET(c, 0xe371cu);
    X86_TICK(c, 7);
    // 0e371c  jmp 0xe373b
    X86_AT(c, 0xe371cu);
    goto L_e373b;
L_e371e:
    X86_TICK(c, 7);
    // 0e371e  call 0xdd308
    X86_AT(c, 0xe371eu);
    push32(c, 0xe3723u); x86_call_known(c, 0xdd308u, f_000dd308); X86_RET(c, 0xe3723u);
L_e3723:
    X86_TICK(c, 9);
    // 0e3723  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xe3723u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0e372d  jmp 0xe373b
    X86_AT(c, 0xe372du);
    goto L_e373b;
L_e372f:
    X86_TICK(c, 7);
    // 0e372f  call 0xcdcf8
    X86_AT(c, 0xe372fu);
    push32(c, 0xe3734u); x86_call_known(c, 0xcdcf8u, f_000cdcf8); X86_RET(c, 0xe3734u);
    X86_TICK(c, 7);
    // 0e3734  jmp 0xe373b
    X86_AT(c, 0xe3734u);
    goto L_e373b;
L_e3736:
    X86_TICK(c, 7);
    // 0e3736  call 0xe2a1c
    X86_AT(c, 0xe3736u);
    push32(c, 0xe373bu); x86_call_known(c, 0xe2a1cu, f_000e2a1c); X86_RET(c, 0xe373bu);
L_e373b:
    X86_TICK(c, 12);
    // 0e373b  cmp dword ptr [0xbef90], 0
    X86_AT(c, 0xe373bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF90u))), 0x0u, 0, 4);
    // 0e3742  je 0xe3776
    X86_AT(c, 0xe3742u);
    if (x86_cc(c, 4)) { goto L_e3776; }
    X86_TICK(c, 7);
    // 0e3744  call 0xe2128
    X86_AT(c, 0xe3744u);
    push32(c, 0xe3749u); x86_call_known(c, 0xe2128u, f_000e2128); X86_RET(c, 0xe3749u);
    X86_TICK(c, 12);
    // 0e3749  cmp dword ptr [0xc2db8], 3
    X86_AT(c, 0xe3749u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DB8u))), 0x3u, 0, 4);
    // 0e3750  jne 0xe3776
    X86_AT(c, 0xe3750u);
    if (x86_cc(c, 5)) { goto L_e3776; }
    X86_TICK(c, 12);
    // 0e3752  cmp dword ptr [0xc2dbc], 4
    X86_AT(c, 0xe3752u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DBCu))), 0x4u, 0, 4);
    // 0e3759  jne 0xe3776
    X86_AT(c, 0xe3759u);
    if (x86_cc(c, 5)) { goto L_e3776; }
    X86_TICK(c, 21);
    // 0e375b  push 1
    X86_AT(c, 0xe375bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e375d  push 4
    X86_AT(c, 0xe375du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e375f  push 3
    X86_AT(c, 0xe375fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e3761  mov eax, dword ptr [0x42b80]
    X86_AT(c, 0xe3761u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x42B80u)));
    // 0e3766  lea eax, [eax*2 - 0x100]
    X86_AT(c, 0xe3766u);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0xFFFFFF00u);
    // 0e376d  push eax
    X86_AT(c, 0xe376du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e376e  call 0xe120c
    X86_AT(c, 0xe376eu);
    push32(c, 0xe3773u); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe3773u);
    X86_TICK(c, 2);
    // 0e3773  add esp, 0x10
    X86_AT(c, 0xe3773u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e3776:
    X86_TICK(c, 7);
    // 0e3776  call 0xe2828
    X86_AT(c, 0xe3776u);
    push32(c, 0xe377bu); x86_call_known(c, 0xe2828u, f_000e2828); X86_RET(c, 0xe377bu);
    X86_TICK(c, 12);
    // 0e377b  cmp dword ptr [0xc2ea0], 0
    X86_AT(c, 0xe377bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2EA0u))), 0x0u, 0, 4);
    // 0e3782  je 0xe3793
    X86_AT(c, 0xe3782u);
    if (x86_cc(c, 4)) { goto L_e3793; }
    X86_TICK(c, 7);
    // 0e3784  call 0xe319c
    X86_AT(c, 0xe3784u);
    push32(c, 0xe3789u); x86_call_known(c, 0xe319cu, f_000e319c); X86_RET(c, 0xe3789u);
    X86_TICK(c, 2);
    // 0e3789  mov dword ptr [0xafefc], 1
    X86_AT(c, 0xe3789u);
    wr32((c.sbase[3] + (uint32_t)(0xAFEFCu)), 0x1u);
L_e3793:
    X86_TICK(c, 12);
    // 0e3793  cmp dword ptr [0xb134c], 1
    X86_AT(c, 0xe3793u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB134Cu))), 0x1u, 0, 4);
    // 0e379a  je 0xe37bc
    X86_AT(c, 0xe379au);
    if (x86_cc(c, 4)) { goto L_e37bc; }
    X86_TICK(c, 7);
    // 0e379c  call 0xe26b0
    X86_AT(c, 0xe379cu);
    push32(c, 0xe37a1u); x86_call_known(c, 0xe26b0u, f_000e26b0); X86_RET(c, 0xe37a1u);
    X86_TICK(c, 12);
    // 0e37a1  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xe37a1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0e37a8  jle 0xe37b7
    X86_AT(c, 0xe37a8u);
    if (x86_cc(c, 14)) { goto L_e37b7; }
    X86_TICK(c, 12);
    // 0e37aa  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xe37aau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0e37b1  jg 0xe34ac
    X86_AT(c, 0xe37b1u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xe34acu); goto L_e34ac; }
L_e37b7:
    X86_TICK(c, 7);
    // 0e37b7  call 0xe2ab4
    X86_AT(c, 0xe37b7u);
    push32(c, 0xe37bcu); x86_call_known(c, 0xe2ab4u, f_000e2ab4); X86_RET(c, 0xe37bcu);
L_e37bc:
    X86_TICK(c, 28);
    // 0e37bc  pop edi
    X86_AT(c, 0xe37bcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e37bd  pop esi
    X86_AT(c, 0xe37bdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e37be  pop ebx
    X86_AT(c, 0xe37beu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e37bf  leave 
    X86_AT(c, 0xe37bfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e37c0  ret 
    X86_AT(c, 0xe37c0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe373bu, "ran off the end of a function");
}
void f_000e3807(X86Cpu& c) {
    X86_TICK(c, 51);
    // 0e3807  enter 0, 0
    X86_AT(c, 0xe3807u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e380b  pushal 
    X86_AT(c, 0xe380bu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e380c  pushfd 
    X86_AT(c, 0xe380cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0e380d  cli 
    X86_AT(c, 0xe380du);
    c.fl &= ~X86_IF;
    // 0e380e  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe380eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e3811  mov dword ptr [0xc2eb0], eax
    X86_AT(c, 0xe3811u);
    wr32((c.sbase[3] + (uint32_t)(0xC2EB0u)), c.r[0]);
    // 0e3816  mov word ptr [0xc2eb4], ds
    X86_AT(c, 0xe3816u);
    wr16((c.sbase[3] + (uint32_t)(0xC2EB4u)), (uint32_t)c.sreg[3]);
    // 0e381c  mov bl, 0
    X86_AT(c, 0xe381cu);
    s8(c, 3, 0x0u);
    // 0e381e  xor ah, ah
    X86_AT(c, 0xe381eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0e3820  call 0xe3e10
    X86_AT(c, 0xe3820u);
    push32(c, 0xe3825u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3825u);
    X86_TICK(c, 7);
    // 0e3825  and al, al
    X86_AT(c, 0xe3825u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e3827  jne 0xe3865
    X86_AT(c, 0xe3827u);
    if (x86_cc(c, 5)) { goto L_e3865; }
    X86_TICK(c, 7);
    // 0e382d  call 0xe3bbc
    X86_AT(c, 0xe382du);
    push32(c, 0xe3832u); x86_call_known(c, 0xe3bbcu, f_000e3bbc); X86_RET(c, 0xe3832u);
    X86_TICK(c, 7);
    // 0e3832  and al, al
    X86_AT(c, 0xe3832u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e3834  jne 0xe3865
    X86_AT(c, 0xe3834u);
    if (x86_cc(c, 5)) { goto L_e3865; }
    X86_TICK(c, 13);
    // 0e383a  mov bl, 0xff
    X86_AT(c, 0xe383au);
    s8(c, 3, 0xFFu);
    // 0e383c  mov ecx, 1
    X86_AT(c, 0xe383cu);
    c.r[1] = 0x1u;
    // 0e3841  mov ah, 0x15
    X86_AT(c, 0xe3841u);
    s8(c, 4, 0x15u);
    // 0e3843  call 0xe3e10
    X86_AT(c, 0xe3843u);
    push32(c, 0xe3848u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3848u);
    X86_TICK(c, 11);
    // 0e3848  mov bl, 0
    X86_AT(c, 0xe3848u);
    s8(c, 3, 0x0u);
    // 0e384a  mov ah, 0x15
    X86_AT(c, 0xe384au);
    s8(c, 4, 0x15u);
    // 0e384c  call 0xe3e10
    X86_AT(c, 0xe384cu);
    push32(c, 0xe3851u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3851u);
    X86_TICK(c, 13);
    // 0e3851  mov bl, 0xff
    X86_AT(c, 0xe3851u);
    s8(c, 3, 0xFFu);
    // 0e3853  mov ecx, 0xdd
    X86_AT(c, 0xe3853u);
    c.r[1] = 0xDDu;
    // 0e3858  mov ah, 0x16
    X86_AT(c, 0xe3858u);
    s8(c, 4, 0x16u);
    // 0e385a  call 0xe3e10
    X86_AT(c, 0xe385au);
    push32(c, 0xe385fu); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe385fu);
    X86_TICK(c, 48);
    // 0e385f  popfd 
    X86_AT(c, 0xe385fu);
    x86_popfd(c, 4);
    // 0e3860  popal 
    X86_AT(c, 0xe3860u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e3861  leave 
    X86_AT(c, 0xe3861u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3862  xor eax, eax
    X86_AT(c, 0xe3862u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e3864  ret 
    X86_AT(c, 0xe3864u);
    c.eip = pop32(c); return;
L_e3865:
    X86_TICK(c, 48);
    // 0e3865  popfd 
    X86_AT(c, 0xe3865u);
    x86_popfd(c, 4);
    // 0e3866  popal 
    X86_AT(c, 0xe3866u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e3867  leave 
    X86_AT(c, 0xe3867u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3868  mov eax, 1
    X86_AT(c, 0xe3868u);
    c.r[0] = 0x1u;
    // 0e386d  ret 
    X86_AT(c, 0xe386du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3807u, "ran off the end of a function");
}
void f_000e386e(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e386e  enter 0, 0
    X86_AT(c, 0xe386eu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e3872  push ebx
    X86_AT(c, 0xe3872u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e3873  mov bl, 0
    X86_AT(c, 0xe3873u);
    s8(c, 3, 0x0u);
    // 0e3875  xor ah, ah
    X86_AT(c, 0xe3875u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0e3877  call 0xe3e10
    X86_AT(c, 0xe3877u);
    push32(c, 0xe387cu); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe387cu);
    X86_TICK(c, 13);
    // 0e387c  xor bh, bh
    X86_AT(c, 0xe387cu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 0e387e  mov dx, 0x2c00
    X86_AT(c, 0xe387eu);
    s16(c, 2, 0x2C00u);
    // 0e3882  mov ah, 0x11
    X86_AT(c, 0xe3882u);
    s8(c, 4, 0x11u);
    // 0e3884  call 0xe3e10
    X86_AT(c, 0xe3884u);
    push32(c, 0xe3889u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3889u);
    X86_TICK(c, 7);
    // 0e3889  call 0xe3c76
    X86_AT(c, 0xe3889u);
    push32(c, 0xe388eu); x86_call_known(c, 0xe3c76u, f_000e3c76); X86_RET(c, 0xe388eu);
    X86_TICK(c, 22);
    // 0e388e  xor eax, eax
    X86_AT(c, 0xe388eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e3890  pop ebx
    X86_AT(c, 0xe3890u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e3891  leave 
    X86_AT(c, 0xe3891u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3892  ret 
    X86_AT(c, 0xe3892u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe386eu, "ran off the end of a function");
}
void f_000e38c5(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e38c5  enter 0, 0
    X86_AT(c, 0xe38c5u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e38c9  push ebx
    X86_AT(c, 0xe38c9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e38ca  push edx
    X86_AT(c, 0xe38cau);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e38cb  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xe38cbu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e38ce  mov dl, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe38ceu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e38d1  mov ah, 3
    X86_AT(c, 0xe38d1u);
    s8(c, 4, 0x3u);
    // 0e38d3  call 0xe3e10
    X86_AT(c, 0xe38d3u);
    push32(c, 0xe38d8u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe38d8u);
    X86_TICK(c, 27);
    // 0e38d8  movzx eax, al
    X86_AT(c, 0xe38d8u);
    c.r[0] = g8(c, 0);
    // 0e38db  pop edx
    X86_AT(c, 0xe38dbu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e38dc  pop ebx
    X86_AT(c, 0xe38dcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e38dd  leave 
    X86_AT(c, 0xe38ddu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e38de  ret 
    X86_AT(c, 0xe38deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe38c5u, "ran off the end of a function");
}
void f_000e38df(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e38df  enter 0, 0
    X86_AT(c, 0xe38dfu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e38e3  push ebx
    X86_AT(c, 0xe38e3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e38e4  push edx
    X86_AT(c, 0xe38e4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e38e5  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xe38e5u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e38e8  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe38e8u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e38eb  mov ah, 4
    X86_AT(c, 0xe38ebu);
    s8(c, 4, 0x4u);
    // 0e38ed  call 0xe3e10
    X86_AT(c, 0xe38edu);
    push32(c, 0xe38f2u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe38f2u);
    X86_TICK(c, 27);
    // 0e38f2  movzx eax, al
    X86_AT(c, 0xe38f2u);
    c.r[0] = g8(c, 0);
    // 0e38f5  pop edx
    X86_AT(c, 0xe38f5u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e38f6  pop ebx
    X86_AT(c, 0xe38f6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e38f7  leave 
    X86_AT(c, 0xe38f7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e38f8  ret 
    X86_AT(c, 0xe38f8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe38dfu, "ran off the end of a function");
}
void f_000e38f9(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0e38f9  enter 0, 0
    X86_AT(c, 0xe38f9u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e38fd  push ebx
    X86_AT(c, 0xe38fdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e38fe  push edx
    X86_AT(c, 0xe38feu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e38ff  push esi
    X86_AT(c, 0xe38ffu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3900  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xe3900u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e3903  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe3903u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e3906  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe3906u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e3909  mov ah, 5
    X86_AT(c, 0xe3909u);
    s8(c, 4, 0x5u);
    // 0e390b  call 0xe3e10
    X86_AT(c, 0xe390bu);
    push32(c, 0xe3910u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3910u);
    X86_TICK(c, 31);
    // 0e3910  movzx eax, al
    X86_AT(c, 0xe3910u);
    c.r[0] = g8(c, 0);
    // 0e3913  pop esi
    X86_AT(c, 0xe3913u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e3914  pop edx
    X86_AT(c, 0xe3914u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e3915  pop ebx
    X86_AT(c, 0xe3915u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e3916  leave 
    X86_AT(c, 0xe3916u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3917  ret 
    X86_AT(c, 0xe3917u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe38f9u, "ran off the end of a function");
}
void f_000e39e9(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e39e9  enter 0, 0
    X86_AT(c, 0xe39e9u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e39ed  push ebx
    X86_AT(c, 0xe39edu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e39ee  push ecx
    X86_AT(c, 0xe39eeu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e39ef  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xe39efu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e39f2  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe39f2u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e39f5  mov ah, 0x15
    X86_AT(c, 0xe39f5u);
    s8(c, 4, 0x15u);
    // 0e39f7  call 0xe3e10
    X86_AT(c, 0xe39f7u);
    push32(c, 0xe39fcu); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe39fcu);
    X86_TICK(c, 27);
    // 0e39fc  movzx eax, al
    X86_AT(c, 0xe39fcu);
    c.r[0] = g8(c, 0);
    // 0e39ff  pop ecx
    X86_AT(c, 0xe39ffu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0e3a00  pop ebx
    X86_AT(c, 0xe3a00u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e3a01  leave 
    X86_AT(c, 0xe3a01u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3a02  ret 
    X86_AT(c, 0xe3a02u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe39e9u, "ran off the end of a function");
}
void f_000e3a67(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e3a67  enter 0, 0
    X86_AT(c, 0xe3a67u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e3a6b  push ebx
    X86_AT(c, 0xe3a6bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e3a6c  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xe3a6cu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e3a6f  mov ah, 0x21
    X86_AT(c, 0xe3a6fu);
    s8(c, 4, 0x21u);
    // 0e3a71  call 0xe3e10
    X86_AT(c, 0xe3a71u);
    push32(c, 0xe3a76u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3a76u);
    X86_TICK(c, 23);
    // 0e3a76  movzx eax, al
    X86_AT(c, 0xe3a76u);
    c.r[0] = g8(c, 0);
    // 0e3a79  pop ebx
    X86_AT(c, 0xe3a79u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e3a7a  leave 
    X86_AT(c, 0xe3a7au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3a7b  ret 
    X86_AT(c, 0xe3a7bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3a67u, "ran off the end of a function");
}
void f_000e3a91(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e3a91  enter 0, 0
    X86_AT(c, 0xe3a91u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e3a95  push edx
    X86_AT(c, 0xe3a95u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e3a96  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe3a96u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e3a99  mov ah, 0x23
    X86_AT(c, 0xe3a99u);
    s8(c, 4, 0x23u);
    // 0e3a9b  call 0xe3e10
    X86_AT(c, 0xe3a9bu);
    push32(c, 0xe3aa0u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3aa0u);
    X86_TICK(c, 23);
    // 0e3aa0  movzx eax, al
    X86_AT(c, 0xe3aa0u);
    c.r[0] = g8(c, 0);
    // 0e3aa3  pop edx
    X86_AT(c, 0xe3aa3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e3aa4  leave 
    X86_AT(c, 0xe3aa4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3aa5  ret 
    X86_AT(c, 0xe3aa5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3a91u, "ran off the end of a function");
}
void f_000e3b00(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0e3b00  enter 0, 0
    X86_AT(c, 0xe3b00u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e3b04  push ebx
    X86_AT(c, 0xe3b04u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e3b05  push edx
    X86_AT(c, 0xe3b05u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e3b06  push esi
    X86_AT(c, 0xe3b06u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3b07  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xe3b07u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e3b0a  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe3b0au);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e3b0d  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0xe3b0du);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0e3b10  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe3b10u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e3b13  mov ah, 0x25
    X86_AT(c, 0xe3b13u);
    s8(c, 4, 0x25u);
    // 0e3b15  call 0xe3e10
    X86_AT(c, 0xe3b15u);
    push32(c, 0xe3b1au); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3b1au);
    X86_TICK(c, 31);
    // 0e3b1a  movzx eax, al
    X86_AT(c, 0xe3b1au);
    c.r[0] = g8(c, 0);
    // 0e3b1d  pop esi
    X86_AT(c, 0xe3b1du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e3b1e  pop edx
    X86_AT(c, 0xe3b1eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e3b1f  pop ebx
    X86_AT(c, 0xe3b1fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e3b20  leave 
    X86_AT(c, 0xe3b20u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3b21  ret 
    X86_AT(c, 0xe3b21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3b00u, "ran off the end of a function");
}
void f_000e3b2d(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e3b2d  enter 0, 0
    X86_AT(c, 0xe3b2du);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e3b31  push ebx
    X86_AT(c, 0xe3b31u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e3b32  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xe3b32u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e3b35  mov ah, 0x27
    X86_AT(c, 0xe3b35u);
    s8(c, 4, 0x27u);
    // 0e3b37  call 0xe3e10
    X86_AT(c, 0xe3b37u);
    push32(c, 0xe3b3cu); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3b3cu);
    X86_TICK(c, 23);
    // 0e3b3c  movzx eax, al
    X86_AT(c, 0xe3b3cu);
    c.r[0] = g8(c, 0);
    // 0e3b3f  pop ebx
    X86_AT(c, 0xe3b3fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e3b40  leave 
    X86_AT(c, 0xe3b40u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3b41  ret 
    X86_AT(c, 0xe3b41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3b2du, "ran off the end of a function");
}
void f_000e3b64(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0e3b64  enter 0, 0
    X86_AT(c, 0xe3b64u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e3b68  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe3b68u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e3b6b  mov dword ptr [0xc2ec0], eax
    X86_AT(c, 0xe3b6bu);
    wr32((c.sbase[3] + (uint32_t)(0xC2EC0u)), c.r[0]);
    // 0e3b70  xor eax, eax
    X86_AT(c, 0xe3b70u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e3b72  leave 
    X86_AT(c, 0xe3b72u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3b73  ret 
    X86_AT(c, 0xe3b73u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3b64u, "ran off the end of a function");
}
void f_000e3b74(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0e3b74  enter 0, 0
    X86_AT(c, 0xe3b74u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e3b78  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe3b78u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e3b7b  mov dword ptr [0xc2ec4], eax
    X86_AT(c, 0xe3b7bu);
    wr32((c.sbase[3] + (uint32_t)(0xC2EC4u)), c.r[0]);
    // 0e3b80  xor eax, eax
    X86_AT(c, 0xe3b80u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e3b82  leave 
    X86_AT(c, 0xe3b82u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3b83  ret 
    X86_AT(c, 0xe3b83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3b74u, "ran off the end of a function");
}
void f_000e3b84(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0e3b84  mov eax, dword ptr [0xc2ec0]
    X86_AT(c, 0xe3b84u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2EC0u)));
    // 0e3b89  ret 
    X86_AT(c, 0xe3b89u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3b84u, "ran off the end of a function");
}
void f_000e3b8a(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0e3b8a  mov eax, dword ptr [0xc2ec4]
    X86_AT(c, 0xe3b8au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2EC4u)));
    // 0e3b8f  ret 
    X86_AT(c, 0xe3b8fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3b8au, "ran off the end of a function");
}
void f_000e3b90(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0e3b90  enter 0, 0
    X86_AT(c, 0xe3b90u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e3b94  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe3b94u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e3b97  mov dword ptr [0xc2ec8], eax
    X86_AT(c, 0xe3b97u);
    wr32((c.sbase[3] + (uint32_t)(0xC2EC8u)), c.r[0]);
    // 0e3b9c  xor eax, eax
    X86_AT(c, 0xe3b9cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e3b9e  leave 
    X86_AT(c, 0xe3b9eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3b9f  ret 
    X86_AT(c, 0xe3b9fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3b90u, "ran off the end of a function");
}
void f_000e3ba0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0e3ba0  mov eax, dword ptr [0xc2ec8]
    X86_AT(c, 0xe3ba0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2EC8u)));
    // 0e3ba5  ret 
    X86_AT(c, 0xe3ba5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3ba0u, "ran off the end of a function");
}
void f_000e3bbc(X86Cpu& c) {
    X86_TICK(c, 87);
    // 0e3bbc  push es
    X86_AT(c, 0xe3bbcu);
    push32(c, c.sreg[0]);
    // 0e3bbd  pushal 
    X86_AT(c, 0xe3bbdu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e3bbe  pushfd 
    X86_AT(c, 0xe3bbeu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0e3bbf  cli 
    X86_AT(c, 0xe3bbfu);
    c.fl &= ~X86_IF;
    // 0e3bc0  mov word ptr [0xc2ed3], 0
    X86_AT(c, 0xe3bc0u);
    wr16((c.sbase[3] + (uint32_t)(0xC2ED3u)), 0x0u);
    // 0e3bc9  mov byte ptr [0xc2ed2], 0
    X86_AT(c, 0xe3bc9u);
    wr8((c.sbase[3] + (uint32_t)(0xC2ED2u)), 0x0u);
    // 0e3bd0  mov byte ptr [0xc2ed1], 0
    X86_AT(c, 0xe3bd0u);
    wr8((c.sbase[3] + (uint32_t)(0xC2ED1u)), 0x0u);
    // 0e3bd7  lea eax, [0xe3e33]
    X86_AT(c, 0xe3bd7u);
    c.r[0] = (uint32_t)(0xE3E33u);
    // 0e3bdd  mov dword ptr [0xc2ec0], eax
    X86_AT(c, 0xe3bddu);
    wr32((c.sbase[3] + (uint32_t)(0xC2EC0u)), c.r[0]);
    // 0e3be2  mov dword ptr [0xc2ec8], eax
    X86_AT(c, 0xe3be2u);
    wr32((c.sbase[3] + (uint32_t)(0xC2EC8u)), c.r[0]);
    // 0e3be7  mov dword ptr [0xc2ec4], eax
    X86_AT(c, 0xe3be7u);
    wr32((c.sbase[3] + (uint32_t)(0xC2EC4u)), c.r[0]);
    // 0e3bec  mov dword ptr [0xc2ecc], eax
    X86_AT(c, 0xe3becu);
    wr32((c.sbase[3] + (uint32_t)(0xC2ECCu)), c.r[0]);
    // 0e3bf1  mov byte ptr [0xc2ed0], 0
    X86_AT(c, 0xe3bf1u);
    wr8((c.sbase[3] + (uint32_t)(0xC2ED0u)), 0x0u);
    // 0e3bf8  mov cl, 0x4d
    X86_AT(c, 0xe3bf8u);
    s8(c, 1, 0x4Du);
    // 0e3bfa  mov ax, 0x2502
    X86_AT(c, 0xe3bfau);
    s16(c, 0, 0x2502u);
    // 0e3bfe  int 0x21
    X86_AT(c, 0xe3bfeu);
    x86_int(c, 0x21, 0xe3c00u);
    X86_TICK(c, 5);
    // 0e3c00  jb 0xe3c6c
    X86_AT(c, 0xe3c00u);
    if (x86_cc(c, 2)) { goto L_e3c6c; }
    X86_TICK(c, 47);
    // 0e3c06  mov eax, es
    X86_AT(c, 0xe3c06u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 0e3c08  mov dword ptr [0xc2eb6], ebx
    X86_AT(c, 0xe3c08u);
    wr32((c.sbase[3] + (uint32_t)(0xC2EB6u)), c.r[3]);
    // 0e3c0e  mov word ptr [0xc2eba], ax
    X86_AT(c, 0xe3c0eu);
    wr16((c.sbase[3] + (uint32_t)(0xC2EBAu)), (c.r[0] & 0xFFFFu));
    // 0e3c14  mov cl, 0x4d
    X86_AT(c, 0xe3c14u);
    s8(c, 1, 0x4Du);
    // 0e3c16  mov ax, 0x2503
    X86_AT(c, 0xe3c16u);
    s16(c, 0, 0x2503u);
    // 0e3c1a  int 0x21
    X86_AT(c, 0xe3c1au);
    x86_int(c, 0x21, 0xe3c1cu);
    X86_TICK(c, 5);
    // 0e3c1c  jb 0xe3c6c
    X86_AT(c, 0xe3c1cu);
    if (x86_cc(c, 2)) { goto L_e3c6c; }
    X86_TICK(c, 51);
    // 0e3c22  mov dword ptr [0xc2ebc], ebx
    X86_AT(c, 0xe3c22u);
    wr32((c.sbase[3] + (uint32_t)(0xC2EBCu)), c.r[3]);
    // 0e3c28  push ds
    X86_AT(c, 0xe3c28u);
    push32(c, c.sreg[3]);
    // 0e3c29  mov eax, cs
    X86_AT(c, 0xe3c29u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 0e3c2b  mov ds, eax
    X86_AT(c, 0xe3c2bu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e3c2d  mov cl, 0x4d
    X86_AT(c, 0xe3c2du);
    s8(c, 1, 0x4Du);
    // 0e3c2f  lea edx, [0xe3cbc]
    X86_AT(c, 0xe3c2fu);
    c.r[2] = (uint32_t)(0xE3CBCu);
    // 0e3c35  mov ax, 0x2506
    X86_AT(c, 0xe3c35u);
    s16(c, 0, 0x2506u);
    // 0e3c39  int 0x21
    X86_AT(c, 0xe3c39u);
    x86_int(c, 0x21, 0xe3c3bu);
    X86_TICK(c, 9);
    // 0e3c3b  pop ds
    X86_AT(c, 0xe3c3bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e3c3c  jb 0xe3c6c
    X86_AT(c, 0xe3c3cu);
    if (x86_cc(c, 2)) { goto L_e3c6c; }
    X86_TICK(c, 11);
    // 0e3c42  mov bl, 0
    X86_AT(c, 0xe3c42u);
    s8(c, 3, 0x0u);
    // 0e3c44  mov ah, 0x15
    X86_AT(c, 0xe3c44u);
    s8(c, 4, 0x15u);
    // 0e3c46  call 0xe3e10
    X86_AT(c, 0xe3c46u);
    push32(c, 0xe3c4bu); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3c4bu);
    X86_TICK(c, 11);
    // 0e3c4b  mov bl, 0
    X86_AT(c, 0xe3c4bu);
    s8(c, 3, 0x0u);
    // 0e3c4d  mov ah, 0x16
    X86_AT(c, 0xe3c4du);
    s8(c, 4, 0x16u);
    // 0e3c4f  call 0xe3e10
    X86_AT(c, 0xe3c4fu);
    push32(c, 0xe3c54u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3c54u);
    X86_TICK(c, 19);
    // 0e3c54  in al, 0x12
    X86_AT(c, 0xe3c54u);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 0e3c56  jmp 0xe3c58
    X86_AT(c, 0xe3c56u);
    goto L_e3c58;
L_e3c58:
    X86_TICK(c, 7);
    // 0e3c58  jmp 0xe3c5a
    X86_AT(c, 0xe3c58u);
    goto L_e3c5a;
L_e3c5a:
    X86_TICK(c, 7);
    // 0e3c5a  jmp 0xe3c5c
    X86_AT(c, 0xe3c5au);
    goto L_e3c5c;
L_e3c5c:
    X86_TICK(c, 66);
    // 0e3c5c  mov dl, 0x20
    X86_AT(c, 0xe3c5cu);
    s8(c, 2, 0x20u);
    // 0e3c5e  xor dl, 0xff
    X86_AT(c, 0xe3c5eu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0e3c61  and al, dl
    X86_AT(c, 0xe3c61u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0e3c63  out 0x12, al
    X86_AT(c, 0xe3c63u);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 0e3c65  popfd 
    X86_AT(c, 0xe3c65u);
    x86_popfd(c, 4);
    // 0e3c66  popal 
    X86_AT(c, 0xe3c66u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e3c67  pop es
    X86_AT(c, 0xe3c67u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e3c68  xor eax, eax
    X86_AT(c, 0xe3c68u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e3c6a  clc 
    X86_AT(c, 0xe3c6au);
    c.fl &= ~X86_CF;
    // 0e3c6b  ret 
    X86_AT(c, 0xe3c6bu);
    c.eip = pop32(c); return;
L_e3c6c:
    X86_TICK(c, 48);
    // 0e3c6c  popfd 
    X86_AT(c, 0xe3c6cu);
    x86_popfd(c, 4);
    // 0e3c6d  popal 
    X86_AT(c, 0xe3c6du);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e3c6e  pop es
    X86_AT(c, 0xe3c6eu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e3c6f  mov eax, 2
    X86_AT(c, 0xe3c6fu);
    c.r[0] = 0x2u;
    // 0e3c74  stc 
    X86_AT(c, 0xe3c74u);
    c.fl |= X86_CF;
    // 0e3c75  ret 
    X86_AT(c, 0xe3c75u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3bbcu, "ran off the end of a function");
}
void f_000e3c76(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0e3c76  pushal 
    X86_AT(c, 0xe3c76u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e3c77  pushf 
    X86_AT(c, 0xe3c77u);
    push16(c, c.fl & 0xFFFFu);
    // 0e3c79  cli 
    X86_AT(c, 0xe3c79u);
    c.fl &= ~X86_IF;
    // 0e3c7a  mov bl, 0
    X86_AT(c, 0xe3c7au);
    s8(c, 3, 0x0u);
    // 0e3c7c  mov ah, 0x15
    X86_AT(c, 0xe3c7cu);
    s8(c, 4, 0x15u);
    // 0e3c7e  call 0xe3e10
    X86_AT(c, 0xe3c7eu);
    push32(c, 0xe3c83u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3c83u);
    X86_TICK(c, 11);
    // 0e3c83  mov bl, 0
    X86_AT(c, 0xe3c83u);
    s8(c, 3, 0x0u);
    // 0e3c85  mov ah, 0x16
    X86_AT(c, 0xe3c85u);
    s8(c, 4, 0x16u);
    // 0e3c87  call 0xe3e10
    X86_AT(c, 0xe3c87u);
    push32(c, 0xe3c8cu); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3c8cu);
    X86_TICK(c, 19);
    // 0e3c8c  in al, 0x12
    X86_AT(c, 0xe3c8cu);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 0e3c8e  jmp 0xe3c90
    X86_AT(c, 0xe3c8eu);
    goto L_e3c90;
L_e3c90:
    X86_TICK(c, 7);
    // 0e3c90  jmp 0xe3c92
    X86_AT(c, 0xe3c90u);
    goto L_e3c92;
L_e3c92:
    X86_TICK(c, 7);
    // 0e3c92  jmp 0xe3c94
    X86_AT(c, 0xe3c92u);
    goto L_e3c94;
L_e3c94:
    X86_TICK(c, 71);
    // 0e3c94  or al, 0x20
    X86_AT(c, 0xe3c94u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 0e3c96  out 0x12, al
    X86_AT(c, 0xe3c96u);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 0e3c98  push ds
    X86_AT(c, 0xe3c98u);
    push32(c, c.sreg[3]);
    // 0e3c99  mov cl, 0x4d
    X86_AT(c, 0xe3c99u);
    s8(c, 1, 0x4Du);
    // 0e3c9b  mov edx, dword ptr [0xc2eb6]
    X86_AT(c, 0xe3c9bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC2EB6u)));
    // 0e3ca1  mov ax, word ptr [0xc2eba]
    X86_AT(c, 0xe3ca1u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC2EBAu))));
    // 0e3ca7  mov ebx, dword ptr [0xc2ebc]
    X86_AT(c, 0xe3ca7u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xC2EBCu)));
    // 0e3cad  mov ds, eax
    X86_AT(c, 0xe3cadu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e3caf  mov ax, 0x2507
    X86_AT(c, 0xe3cafu);
    s16(c, 0, 0x2507u);
    // 0e3cb3  int 0x21
    X86_AT(c, 0xe3cb3u);
    x86_int(c, 0x21, 0xe3cb5u);
    X86_TICK(c, 46);
    // 0e3cb5  xor eax, eax
    X86_AT(c, 0xe3cb5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e3cb7  pop ds
    X86_AT(c, 0xe3cb7u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e3cb8  popf 
    X86_AT(c, 0xe3cb8u);
    x86_popfd(c, 2);
    // 0e3cba  popal 
    X86_AT(c, 0xe3cbau);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e3cbb  ret 
    X86_AT(c, 0xe3cbbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3c76u, "ran off the end of a function");
}
void f_000e3cbc(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0e3cbc  push eax
    X86_AT(c, 0xe3cbcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e3cbd  push ds
    X86_AT(c, 0xe3cbdu);
    push32(c, c.sreg[3]);
    // 0e3cbe  mov ax, 0x14
    X86_AT(c, 0xe3cbeu);
    s16(c, 0, 0x14u);
    // 0e3cc2  mov ds, eax
    X86_AT(c, 0xe3cc2u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e3cc4  cld 
    X86_AT(c, 0xe3cc4u);
    c.fl &= ~X86_DF;
    // 0e3cc5  cmp word ptr [0xc2ed3], 0
    X86_AT(c, 0xe3cc5u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC2ED3u))), 0x0u, 0, 2);
    // 0e3ccd  jne 0xe3ce3
    X86_AT(c, 0xe3ccdu);
    if (x86_cc(c, 5)) { goto L_e3ce3; }
    X86_TICK(c, 8);
    // 0e3ccf  mov dword ptr [0xc2ed5], esp
    X86_AT(c, 0xe3ccfu);
    wr32((c.sbase[3] + (uint32_t)(0xC2ED5u)), c.r[4]);
    // 0e3cd5  mov word ptr [0xc2ed9], ss
    X86_AT(c, 0xe3cd5u);
    wr16((c.sbase[3] + (uint32_t)(0xC2ED9u)), (uint32_t)c.sreg[2]);
    // 0e3cdb  mov ss, eax
    X86_AT(c, 0xe3cdbu);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e3cdd  lea esp, [0xc32db]
    X86_AT(c, 0xe3cddu);
    c.r[4] = (uint32_t)(0xC32DBu);
L_e3ce3:
    X86_TICK(c, 57);
    // 0e3ce3  inc word ptr [0xc2ed3]
    X86_AT(c, 0xe3ce3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2ED3u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0e3cea  sti 
    X86_AT(c, 0xe3ceau);
    c.fl |= X86_IF;
    // 0e3ceb  push es
    X86_AT(c, 0xe3cebu);
    push32(c, c.sreg[0]);
    // 0e3cec  push fs
    X86_AT(c, 0xe3cecu);
    push32(c, c.sreg[4]);
    // 0e3cee  push gs
    X86_AT(c, 0xe3ceeu);
    push32(c, c.sreg[5]);
    // 0e3cf0  pushal 
    X86_AT(c, 0xe3cf0u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e3cf1  mov es, eax
    X86_AT(c, 0xe3cf1u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e3cf3  mov dx, 0x4e9
    X86_AT(c, 0xe3cf3u);
    s16(c, 2, 0x4E9u);
    // 0e3cf7  in al, dx
    X86_AT(c, 0xe3cf7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0e3cf8  push eax
    X86_AT(c, 0xe3cf8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e3cf9  test al, 1
    X86_AT(c, 0xe3cf9u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0e3cfb  je 0xe3d45
    X86_AT(c, 0xe3cfbu);
    if (x86_cc(c, 4)) { goto L_e3d45; }
    X86_TICK(c, 9);
    // 0e3d01  mov ah, 0x10
    X86_AT(c, 0xe3d01u);
    s8(c, 4, 0x10u);
    // 0e3d03  call 0xe3e10
    X86_AT(c, 0xe3d03u);
    push32(c, 0xe3d08u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3d08u);
    X86_TICK(c, 7);
    // 0e3d08  test dl, 1
    X86_AT(c, 0xe3d08u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 0e3d0b  je 0xe3d1c
    X86_AT(c, 0xe3d0bu);
    if (x86_cc(c, 4)) { goto L_e3d1c; }
    X86_TICK(c, 11);
    // 0e3d0d  push edx
    X86_AT(c, 0xe3d0du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e3d0e  mov ah, 0x17
    X86_AT(c, 0xe3d0eu);
    s8(c, 4, 0x17u);
    // 0e3d10  call 0xe3e10
    X86_AT(c, 0xe3d10u);
    push32(c, 0xe3d15u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3d15u);
    X86_TICK(c, 7);
    // 0e3d15  call dword ptr [0xc2ec0]
    X86_AT(c, 0xe3d15u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC2EC0u))); push32(c, 0xe3d1bu); x86_call(c, t); X86_RET(c, 0xe3d1bu); }
    X86_TICK(c, 4);
    // 0e3d1b  pop edx
    X86_AT(c, 0xe3d1bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_e3d1c:
    X86_TICK(c, 7);
    // 0e3d1c  test dl, 2
    X86_AT(c, 0xe3d1cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 0e3d1f  je 0xe3d45
    X86_AT(c, 0xe3d1fu);
    if (x86_cc(c, 4)) { goto L_e3d45; }
    X86_TICK(c, 11);
    // 0e3d21  push edx
    X86_AT(c, 0xe3d21u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e3d22  mov ah, 0x18
    X86_AT(c, 0xe3d22u);
    s8(c, 4, 0x18u);
    // 0e3d24  call 0xe3e10
    X86_AT(c, 0xe3d24u);
    push32(c, 0xe3d29u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3d29u);
    X86_TICK(c, 11);
    // 0e3d29  mov byte ptr [0xc2ed1], 0xff
    X86_AT(c, 0xe3d29u);
    wr8((c.sbase[3] + (uint32_t)(0xC2ED1u)), 0xFFu);
    // 0e3d30  mov ah, 0x50
    X86_AT(c, 0xe3d30u);
    s8(c, 4, 0x50u);
    // 0e3d32  call 0xe3e10
    X86_AT(c, 0xe3d32u);
    push32(c, 0xe3d37u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3d37u);
    X86_TICK(c, 9);
    // 0e3d37  mov byte ptr [0xc2ed1], 0
    X86_AT(c, 0xe3d37u);
    wr8((c.sbase[3] + (uint32_t)(0xC2ED1u)), 0x0u);
    // 0e3d3e  call dword ptr [0xc2ec4]
    X86_AT(c, 0xe3d3eu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC2EC4u))); push32(c, 0xe3d44u); x86_call(c, t); X86_RET(c, 0xe3d44u); }
    X86_TICK(c, 4);
    // 0e3d44  pop edx
    X86_AT(c, 0xe3d44u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_e3d45:
    X86_TICK(c, 11);
    // 0e3d45  pop eax
    X86_AT(c, 0xe3d45u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e3d46  test al, 8
    X86_AT(c, 0xe3d46u);
    (void)x86_logic(c, g8(c, 0) & 0x8u, 1);
    // 0e3d48  je 0xe3d61
    X86_AT(c, 0xe3d48u);
    if (x86_cc(c, 4)) { goto L_e3d61; }
    X86_TICK(c, 13);
    // 0e3d4a  push edx
    X86_AT(c, 0xe3d4au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e3d4b  mov byte ptr [0xc2ed1], 0xff
    X86_AT(c, 0xe3d4bu);
    wr8((c.sbase[3] + (uint32_t)(0xC2ED1u)), 0xFFu);
    // 0e3d52  mov ah, 0x51
    X86_AT(c, 0xe3d52u);
    s8(c, 4, 0x51u);
    // 0e3d54  call 0xe3e10
    X86_AT(c, 0xe3d54u);
    push32(c, 0xe3d59u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe3d59u);
    X86_TICK(c, 6);
    // 0e3d59  mov byte ptr [0xc2ed1], 0
    X86_AT(c, 0xe3d59u);
    wr8((c.sbase[3] + (uint32_t)(0xC2ED1u)), 0x0u);
    // 0e3d60  pop edx
    X86_AT(c, 0xe3d60u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_e3d61:
    X86_TICK(c, 9);
    // 0e3d61  cli 
    X86_AT(c, 0xe3d61u);
    c.fl &= ~X86_IF;
    // 0e3d62  call 0xe3dc5
    X86_AT(c, 0xe3d62u);
    push32(c, 0xe3d67u); x86_call_known(c, 0xe3dc5u, f_000e3dc5); X86_RET(c, 0xe3d67u);
    X86_TICK(c, 12);
    // 0e3d67  cmp byte ptr [0xc2ed2], 0
    X86_AT(c, 0xe3d67u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC2ED2u))), 0x0u, 0, 1);
    // 0e3d6e  jne 0xe3da0
    X86_AT(c, 0xe3d6eu);
    if (x86_cc(c, 5)) { goto L_e3da0; }
    X86_TICK(c, 9);
    // 0e3d70  mov byte ptr [0xc2ed2], 0xff
    X86_AT(c, 0xe3d70u);
    wr8((c.sbase[3] + (uint32_t)(0xC2ED2u)), 0xFFu);
    // 0e3d77  test dl, 1
    X86_AT(c, 0xe3d77u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 0e3d7a  je 0xe3d84
    X86_AT(c, 0xe3d7au);
    if (x86_cc(c, 4)) { goto L_e3d84; }
    X86_TICK(c, 9);
    // 0e3d7c  push edx
    X86_AT(c, 0xe3d7cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e3d7d  call dword ptr [0xc2ec8]
    X86_AT(c, 0xe3d7du);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC2EC8u))); push32(c, 0xe3d83u); x86_call(c, t); X86_RET(c, 0xe3d83u); }
    X86_TICK(c, 4);
    // 0e3d83  pop edx
    X86_AT(c, 0xe3d83u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_e3d84:
    X86_TICK(c, 7);
    // 0e3d84  test dl, 2
    X86_AT(c, 0xe3d84u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 0e3d87  je 0xe3d98
    X86_AT(c, 0xe3d87u);
    if (x86_cc(c, 4)) { goto L_e3d98; }
    X86_TICK(c, 12);
    // 0e3d89  xor byte ptr [0xc2ed0], 0xff
    X86_AT(c, 0xe3d89u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2ED0u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0e3d90  je 0xe3d98
    X86_AT(c, 0xe3d90u);
    if (x86_cc(c, 4)) { goto L_e3d98; }
    X86_TICK(c, 7);
    // 0e3d92  call dword ptr [0xc2ecc]
    X86_AT(c, 0xe3d92u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC2ECCu))); push32(c, 0xe3d98u); x86_call(c, t); X86_RET(c, 0xe3d98u); }
L_e3d98:
    X86_TICK(c, 4);
    // 0e3d98  cli 
    X86_AT(c, 0xe3d98u);
    c.fl &= ~X86_IF;
    // 0e3d99  mov byte ptr [0xc2ed2], 0
    X86_AT(c, 0xe3d99u);
    wr8((c.sbase[3] + (uint32_t)(0xC2ED2u)), 0x0u);
L_e3da0:
    X86_TICK(c, 49);
    // 0e3da0  popal 
    X86_AT(c, 0xe3da0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e3da1  pop gs
    X86_AT(c, 0xe3da1u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0e3da3  pop fs
    X86_AT(c, 0xe3da3u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0e3da5  pop es
    X86_AT(c, 0xe3da5u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e3da6  cli 
    X86_AT(c, 0xe3da6u);
    c.fl &= ~X86_IF;
    // 0e3da7  dec word ptr [0xc2ed3]
    X86_AT(c, 0xe3da7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2ED3u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0e3dae  jne 0xe3dbc
    X86_AT(c, 0xe3daeu);
    if (x86_cc(c, 5)) { goto L_e3dbc; }
    X86_TICK(c, 8);
    // 0e3db0  mov esp, dword ptr [0xc2ed5]
    X86_AT(c, 0xe3db0u);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0xC2ED5u)));
    // 0e3db6  mov ss, word ptr [0xc2ed9]
    X86_AT(c, 0xe3db6u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0xC2ED9u))) & 0xFFFFu);
L_e3dbc:
    X86_TICK(c, 14);
    // 0e3dbc  pop ds
    X86_AT(c, 0xe3dbcu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e3dbd  pop eax
    X86_AT(c, 0xe3dbdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e3dbe  iretd 
    X86_AT(c, 0xe3dbeu);
    x86_iret(c, 4); return;
    x86_fault(c, 0xe3cbcu, "ran off the end of a function");
}
void f_000e3dbf(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0e3dbf  mov al, byte ptr [0xc2ed1]
    X86_AT(c, 0xe3dbfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC2ED1u))));
    // 0e3dc4  ret 
    X86_AT(c, 0xe3dc4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3dbfu, "ran off the end of a function");
}
void f_000e3dc5(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e3dc5  push ax
    X86_AT(c, 0xe3dc5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e3dc7  mov al, 0xb
    X86_AT(c, 0xe3dc7u);
    s8(c, 0, 0xBu);
    // 0e3dc9  out 0, al
    X86_AT(c, 0xe3dc9u);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 0e3dcb  jmp 0xe3dcd
    X86_AT(c, 0xe3dcbu);
    goto L_e3dcd;
L_e3dcd:
    X86_TICK(c, 7);
    // 0e3dcd  jmp 0xe3dcf
    X86_AT(c, 0xe3dcdu);
    goto L_e3dcf;
L_e3dcf:
    X86_TICK(c, 7);
    // 0e3dcf  jmp 0xe3dd1
    X86_AT(c, 0xe3dcfu);
    goto L_e3dd1;
L_e3dd1:
    X86_TICK(c, 19);
    // 0e3dd1  in al, 0
    X86_AT(c, 0xe3dd1u);
    s8(c, 0, x86_in(c, 0x0u, 1));
    // 0e3dd3  jmp 0xe3dd5
    X86_AT(c, 0xe3dd3u);
    goto L_e3dd5;
L_e3dd5:
    X86_TICK(c, 7);
    // 0e3dd5  jmp 0xe3dd7
    X86_AT(c, 0xe3dd5u);
    goto L_e3dd7;
L_e3dd7:
    X86_TICK(c, 7);
    // 0e3dd7  jmp 0xe3dd9
    X86_AT(c, 0xe3dd7u);
    goto L_e3dd9;
L_e3dd9:
    X86_TICK(c, 7);
    // 0e3dd9  test al, 0x7f
    X86_AT(c, 0xe3dd9u);
    (void)x86_logic(c, g8(c, 0) & 0x7Fu, 1);
    // 0e3ddb  je 0xe3de3
    X86_AT(c, 0xe3ddbu);
    if (x86_cc(c, 4)) { goto L_e3de3; }
    X86_TICK(c, 21);
    // 0e3ddd  mov al, 0x20
    X86_AT(c, 0xe3dddu);
    s8(c, 0, 0x20u);
    // 0e3ddf  out 0, al
    X86_AT(c, 0xe3ddfu);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 0e3de1  jmp 0xe3e07
    X86_AT(c, 0xe3de1u);
    goto L_e3e07;
L_e3de3:
    X86_TICK(c, 21);
    // 0e3de3  mov al, 0x20
    X86_AT(c, 0xe3de3u);
    s8(c, 0, 0x20u);
    // 0e3de5  out 0x10, al
    X86_AT(c, 0xe3de5u);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 0e3de7  jmp 0xe3de9
    X86_AT(c, 0xe3de7u);
    goto L_e3de9;
L_e3de9:
    X86_TICK(c, 7);
    // 0e3de9  jmp 0xe3deb
    X86_AT(c, 0xe3de9u);
    goto L_e3deb;
L_e3deb:
    X86_TICK(c, 7);
    // 0e3deb  jmp 0xe3ded
    X86_AT(c, 0xe3debu);
    goto L_e3ded;
L_e3ded:
    X86_TICK(c, 21);
    // 0e3ded  mov al, 0xb
    X86_AT(c, 0xe3dedu);
    s8(c, 0, 0xBu);
    // 0e3def  out 0x10, al
    X86_AT(c, 0xe3defu);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 0e3df1  jmp 0xe3df3
    X86_AT(c, 0xe3df1u);
    goto L_e3df3;
L_e3df3:
    X86_TICK(c, 7);
    // 0e3df3  jmp 0xe3df5
    X86_AT(c, 0xe3df3u);
    goto L_e3df5;
L_e3df5:
    X86_TICK(c, 7);
    // 0e3df5  jmp 0xe3df7
    X86_AT(c, 0xe3df5u);
    goto L_e3df7;
L_e3df7:
    X86_TICK(c, 19);
    // 0e3df7  in al, 0x10
    X86_AT(c, 0xe3df7u);
    s8(c, 0, x86_in(c, 0x10u, 1));
    // 0e3df9  jmp 0xe3dfb
    X86_AT(c, 0xe3df9u);
    goto L_e3dfb;
L_e3dfb:
    X86_TICK(c, 7);
    // 0e3dfb  jmp 0xe3dfd
    X86_AT(c, 0xe3dfbu);
    goto L_e3dfd;
L_e3dfd:
    X86_TICK(c, 7);
    // 0e3dfd  jmp 0xe3dff
    X86_AT(c, 0xe3dfdu);
    goto L_e3dff;
L_e3dff:
    X86_TICK(c, 7);
    // 0e3dff  or al, al
    X86_AT(c, 0xe3dffu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 0e3e01  jne 0xe3e07
    X86_AT(c, 0xe3e01u);
    if (x86_cc(c, 5)) { goto L_e3e07; }
    X86_TICK(c, 14);
    // 0e3e03  mov al, 0x20
    X86_AT(c, 0xe3e03u);
    s8(c, 0, 0x20u);
    // 0e3e05  out 0, al
    X86_AT(c, 0xe3e05u);
    x86_out(c, 0x0u, 1, g8(c, 0));
L_e3e07:
    X86_TICK(c, 7);
    // 0e3e07  jmp 0xe3e09
    X86_AT(c, 0xe3e07u);
    goto L_e3e09;
L_e3e09:
    X86_TICK(c, 7);
    // 0e3e09  jmp 0xe3e0b
    X86_AT(c, 0xe3e09u);
    goto L_e3e0b;
L_e3e0b:
    X86_TICK(c, 7);
    // 0e3e0b  jmp 0xe3e0d
    X86_AT(c, 0xe3e0bu);
    goto L_e3e0d;
L_e3e0d:
    X86_TICK(c, 14);
    // 0e3e0d  pop ax
    X86_AT(c, 0xe3e0du);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e3e0f  ret 
    X86_AT(c, 0xe3e0fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3dc5u, "ran off the end of a function");
}
void f_000e3e10(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e3e10  push fs
    X86_AT(c, 0xe3e10u);
    push32(c, c.sreg[4]);
    // 0e3e12  push gs
    X86_AT(c, 0xe3e12u);
    push32(c, c.sreg[5]);
    // 0e3e14  push edi
    X86_AT(c, 0xe3e14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3e15  lgs edi, fword ptr [0xc2eb0]
    X86_AT(c, 0xe3e15u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2EB0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 5, s); c.r[7] = o; }
    // 0e3e1c  push ax
    X86_AT(c, 0xe3e1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e3e1e  mov ax, 0x110
    X86_AT(c, 0xe3e1eu);
    s16(c, 0, 0x110u);
    // 0e3e22  mov fs, eax
    X86_AT(c, 0xe3e22u);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e3e24  pop ax
    X86_AT(c, 0xe3e24u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e3e26  lcall fword ptr fs:[0x80]
    X86_AT(c, 0xe3e26u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0xe3e2du); }
    X86_RET(c, 0xe3e2du);
    X86_TICK(c, 22);
    // 0e3e2d  pop edi
    X86_AT(c, 0xe3e2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e3e2e  pop gs
    X86_AT(c, 0xe3e2eu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0e3e30  pop fs
    X86_AT(c, 0xe3e30u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0e3e32  ret 
    X86_AT(c, 0xe3e32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3e10u, "ran off the end of a function");
}
void f_000e3e33(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0e3e33  ret 
    X86_AT(c, 0xe3e33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3e33u, "ran off the end of a function");
}
void f_000e3e94(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0e3e94  enter 0, 0
    X86_AT(c, 0xe3e94u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e3e98  push ebx
    X86_AT(c, 0xe3e98u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e3e99  push edx
    X86_AT(c, 0xe3e99u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e3e9a  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xe3e9au);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e3e9d  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe3e9du);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e3ea0  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0xe3ea0u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0e3ea3  mov ah, 0x43
    X86_AT(c, 0xe3ea3u);
    s8(c, 4, 0x43u);
    // 0e3ea5  call 0xe3f31
    X86_AT(c, 0xe3ea5u);
    push32(c, 0xe3eaau); x86_call_known(c, 0xe3f31u, f_000e3f31); X86_RET(c, 0xe3eaau);
    X86_TICK(c, 27);
    // 0e3eaa  movzx eax, al
    X86_AT(c, 0xe3eaau);
    c.r[0] = g8(c, 0);
    // 0e3ead  pop edx
    X86_AT(c, 0xe3eadu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e3eae  pop ebx
    X86_AT(c, 0xe3eaeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e3eaf  leave 
    X86_AT(c, 0xe3eafu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3eb0  ret 
    X86_AT(c, 0xe3eb0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3e94u, "ran off the end of a function");
}
void f_000e3eb1(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e3eb1  mov ah, 0x44
    X86_AT(c, 0xe3eb1u);
    s8(c, 4, 0x44u);
    // 0e3eb3  call 0xe3f31
    X86_AT(c, 0xe3eb3u);
    push32(c, 0xe3eb8u); x86_call_known(c, 0xe3f31u, f_000e3f31); X86_RET(c, 0xe3eb8u);
    X86_TICK(c, 13);
    // 0e3eb8  movzx eax, al
    X86_AT(c, 0xe3eb8u);
    c.r[0] = g8(c, 0);
    // 0e3ebb  ret 
    X86_AT(c, 0xe3ebbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3eb1u, "ran off the end of a function");
}
void f_000e3ee5(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e3ee5  enter 0, 0
    X86_AT(c, 0xe3ee5u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e3ee9  push ebx
    X86_AT(c, 0xe3ee9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e3eea  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xe3eeau);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e3eed  mov ah, 0x46
    X86_AT(c, 0xe3eedu);
    s8(c, 4, 0x46u);
    // 0e3eef  call 0xe3f31
    X86_AT(c, 0xe3eefu);
    push32(c, 0xe3ef4u); x86_call_known(c, 0xe3f31u, f_000e3f31); X86_RET(c, 0xe3ef4u);
    X86_TICK(c, 23);
    // 0e3ef4  movzx eax, al
    X86_AT(c, 0xe3ef4u);
    c.r[0] = g8(c, 0);
    // 0e3ef7  pop ebx
    X86_AT(c, 0xe3ef7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e3ef8  leave 
    X86_AT(c, 0xe3ef8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3ef9  ret 
    X86_AT(c, 0xe3ef9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3ee5u, "ran off the end of a function");
}
void f_000e3f1c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e3f1c  enter 0, 0
    X86_AT(c, 0xe3f1cu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e3f20  push edx
    X86_AT(c, 0xe3f20u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e3f21  mov dl, byte ptr [ebp + 8]
    X86_AT(c, 0xe3f21u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e3f24  mov ah, 0x49
    X86_AT(c, 0xe3f24u);
    s8(c, 4, 0x49u);
    // 0e3f26  call 0xe3f31
    X86_AT(c, 0xe3f26u);
    push32(c, 0xe3f2bu); x86_call_known(c, 0xe3f31u, f_000e3f31); X86_RET(c, 0xe3f2bu);
    X86_TICK(c, 23);
    // 0e3f2b  movzx eax, al
    X86_AT(c, 0xe3f2bu);
    c.r[0] = g8(c, 0);
    // 0e3f2e  pop edx
    X86_AT(c, 0xe3f2eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e3f2f  leave 
    X86_AT(c, 0xe3f2fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3f30  ret 
    X86_AT(c, 0xe3f30u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3f1cu, "ran off the end of a function");
}
void f_000e3f31(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e3f31  push fs
    X86_AT(c, 0xe3f31u);
    push32(c, c.sreg[4]);
    // 0e3f33  push ax
    X86_AT(c, 0xe3f33u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e3f35  mov ax, 0x110
    X86_AT(c, 0xe3f35u);
    s16(c, 0, 0x110u);
    // 0e3f39  mov fs, eax
    X86_AT(c, 0xe3f39u);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e3f3b  pop ax
    X86_AT(c, 0xe3f3bu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e3f3d  lcall fword ptr fs:[0x80]
    X86_AT(c, 0xe3f3du);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0xe3f44u); }
    X86_RET(c, 0xe3f44u);
    X86_TICK(c, 14);
    // 0e3f44  pop fs
    X86_AT(c, 0xe3f44u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0e3f46  ret 
    X86_AT(c, 0xe3f46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3f31u, "ran off the end of a function");
}
void f_000e3f99(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e3f99  mov ah, 0
    X86_AT(c, 0xe3f99u);
    s8(c, 4, 0x0u);
    // 0e3f9b  call 0xe4198
    X86_AT(c, 0xe3f9bu);
    push32(c, 0xe3fa0u); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe3fa0u);
    X86_TICK(c, 13);
    // 0e3fa0  movzx eax, al
    X86_AT(c, 0xe3fa0u);
    c.r[0] = g8(c, 0);
    // 0e3fa3  ret 
    X86_AT(c, 0xe3fa3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3f99u, "ran off the end of a function");
}
void f_000e3fa4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e3fa4  mov ah, 1
    X86_AT(c, 0xe3fa4u);
    s8(c, 4, 0x1u);
    // 0e3fa6  call 0xe4198
    X86_AT(c, 0xe3fa6u);
    push32(c, 0xe3fabu); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe3fabu);
    X86_TICK(c, 13);
    // 0e3fab  movzx eax, al
    X86_AT(c, 0xe3fabu);
    c.r[0] = g8(c, 0);
    // 0e3fae  ret 
    X86_AT(c, 0xe3faeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3fa4u, "ran off the end of a function");
}
void f_000e3faf(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0e3faf  enter 0, 0
    X86_AT(c, 0xe3fafu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e3fb3  push esi
    X86_AT(c, 0xe3fb3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3fb4  push ecx
    X86_AT(c, 0xe3fb4u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e3fb5  push edx
    X86_AT(c, 0xe3fb5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e3fb6  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xe3fb6u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e3fb9  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe3fb9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e3fbc  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0xe3fbcu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0e3fbf  mov ah, 2
    X86_AT(c, 0xe3fbfu);
    s8(c, 4, 0x2u);
    // 0e3fc1  call 0xe4198
    X86_AT(c, 0xe3fc1u);
    push32(c, 0xe3fc6u); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe3fc6u);
    X86_TICK(c, 31);
    // 0e3fc6  movzx eax, al
    X86_AT(c, 0xe3fc6u);
    c.r[0] = g8(c, 0);
    // 0e3fc9  pop edx
    X86_AT(c, 0xe3fc9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e3fca  pop ecx
    X86_AT(c, 0xe3fcau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0e3fcb  pop esi
    X86_AT(c, 0xe3fcbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e3fcc  leave 
    X86_AT(c, 0xe3fccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3fcd  ret 
    X86_AT(c, 0xe3fcdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3fafu, "ran off the end of a function");
}
void f_000e3fce(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e3fce  mov ah, 3
    X86_AT(c, 0xe3fceu);
    s8(c, 4, 0x3u);
    // 0e3fd0  call 0xe4198
    X86_AT(c, 0xe3fd0u);
    push32(c, 0xe3fd5u); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe3fd5u);
    X86_TICK(c, 13);
    // 0e3fd5  movzx eax, al
    X86_AT(c, 0xe3fd5u);
    c.r[0] = g8(c, 0);
    // 0e3fd8  ret 
    X86_AT(c, 0xe3fd8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3fceu, "ran off the end of a function");
}
void f_000e3fe4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e3fe4  mov ah, 5
    X86_AT(c, 0xe3fe4u);
    s8(c, 4, 0x5u);
    // 0e3fe6  call 0xe4198
    X86_AT(c, 0xe3fe6u);
    push32(c, 0xe3febu); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe3febu);
    X86_TICK(c, 13);
    // 0e3feb  movzx eax, al
    X86_AT(c, 0xe3febu);
    c.r[0] = g8(c, 0);
    // 0e3fee  ret 
    X86_AT(c, 0xe3feeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3fe4u, "ran off the end of a function");
}
void f_000e3fef(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e3fef  push es
    X86_AT(c, 0xe3fefu);
    push32(c, c.sreg[0]);
    // 0e3ff0  push esi
    X86_AT(c, 0xe3ff0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3ff1  push ebx
    X86_AT(c, 0xe3ff1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e3ff2  push ecx
    X86_AT(c, 0xe3ff2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e3ff3  push edx
    X86_AT(c, 0xe3ff3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e3ff4  mov ah, 6
    X86_AT(c, 0xe3ff4u);
    s8(c, 4, 0x6u);
    // 0e3ff6  call 0xe4198
    X86_AT(c, 0xe3ff6u);
    push32(c, 0xe3ffbu); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe3ffbu);
    X86_TICK(c, 32);
    // 0e3ffb  mov eax, esi
    X86_AT(c, 0xe3ffbu);
    c.r[0] = c.r[6];
    // 0e3ffd  pop edx
    X86_AT(c, 0xe3ffdu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e3ffe  pop ecx
    X86_AT(c, 0xe3ffeu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0e3fff  pop ebx
    X86_AT(c, 0xe3fffu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4000  pop esi
    X86_AT(c, 0xe4000u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e4001  pop es
    X86_AT(c, 0xe4001u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e4002  ret 
    X86_AT(c, 0xe4002u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3fefu, "ran off the end of a function");
}
void f_000e408b(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e408b  enter 0, 0
    X86_AT(c, 0xe408bu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e408f  push edx
    X86_AT(c, 0xe408fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e4090  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe4090u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e4093  cmp dl, 0
    X86_AT(c, 0xe4093u);
    (void)x86_sub(c, g8(c, 2), 0x0u, 0, 1);
    // 0e4096  je 0xe409a
    X86_AT(c, 0xe4096u);
    if (x86_cc(c, 4)) { goto L_e409a; }
    X86_TICK(c, 2);
    // 0e4098  mov dl, 0xff
    X86_AT(c, 0xe4098u);
    s8(c, 2, 0xFFu);
L_e409a:
    X86_TICK(c, 9);
    // 0e409a  mov ah, 8
    X86_AT(c, 0xe409au);
    s8(c, 4, 0x8u);
    // 0e409c  call 0xe4198
    X86_AT(c, 0xe409cu);
    push32(c, 0xe40a1u); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe40a1u);
    X86_TICK(c, 23);
    // 0e40a1  movzx eax, al
    X86_AT(c, 0xe40a1u);
    c.r[0] = g8(c, 0);
    // 0e40a4  pop edx
    X86_AT(c, 0xe40a4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e40a5  leave 
    X86_AT(c, 0xe40a5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e40a6  ret 
    X86_AT(c, 0xe40a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe408bu, "ran off the end of a function");
}
void f_000e40a7(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e40a7  enter 0, 0
    X86_AT(c, 0xe40a7u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e40ab  push edx
    X86_AT(c, 0xe40abu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e40ac  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe40acu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e40af  mov ah, 9
    X86_AT(c, 0xe40afu);
    s8(c, 4, 0x9u);
    // 0e40b1  call 0xe4198
    X86_AT(c, 0xe40b1u);
    push32(c, 0xe40b6u); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe40b6u);
    X86_TICK(c, 23);
    // 0e40b6  movzx eax, al
    X86_AT(c, 0xe40b6u);
    c.r[0] = g8(c, 0);
    // 0e40b9  pop edx
    X86_AT(c, 0xe40b9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e40ba  leave 
    X86_AT(c, 0xe40bau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e40bb  ret 
    X86_AT(c, 0xe40bbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe40a7u, "ran off the end of a function");
}
void f_000e40bc(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e40bc  enter 0, 0
    X86_AT(c, 0xe40bcu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e40c0  push ebx
    X86_AT(c, 0xe40c0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e40c1  push edx
    X86_AT(c, 0xe40c1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e40c2  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xe40c2u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e40c5  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe40c5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e40c8  mov ah, 0x10
    X86_AT(c, 0xe40c8u);
    s8(c, 4, 0x10u);
    // 0e40ca  call 0xe4198
    X86_AT(c, 0xe40cau);
    push32(c, 0xe40cfu); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe40cfu);
    X86_TICK(c, 27);
    // 0e40cf  movzx eax, al
    X86_AT(c, 0xe40cfu);
    c.r[0] = g8(c, 0);
    // 0e40d2  pop edx
    X86_AT(c, 0xe40d2u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e40d3  pop ebx
    X86_AT(c, 0xe40d3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e40d4  leave 
    X86_AT(c, 0xe40d4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e40d5  ret 
    X86_AT(c, 0xe40d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe40bcu, "ran off the end of a function");
}
void f_000e40d6(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e40d6  enter 0, 0
    X86_AT(c, 0xe40d6u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e40da  push ebx
    X86_AT(c, 0xe40dau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e40db  push edx
    X86_AT(c, 0xe40dbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e40dc  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xe40dcu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e40df  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe40dfu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e40e2  mov ah, 0x11
    X86_AT(c, 0xe40e2u);
    s8(c, 4, 0x11u);
    // 0e40e4  call 0xe4198
    X86_AT(c, 0xe40e4u);
    push32(c, 0xe40e9u); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe40e9u);
    X86_TICK(c, 27);
    // 0e40e9  movzx eax, al
    X86_AT(c, 0xe40e9u);
    c.r[0] = g8(c, 0);
    // 0e40ec  pop edx
    X86_AT(c, 0xe40ecu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e40ed  pop ebx
    X86_AT(c, 0xe40edu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e40ee  leave 
    X86_AT(c, 0xe40eeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e40ef  ret 
    X86_AT(c, 0xe40efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe40d6u, "ran off the end of a function");
}
void f_000e40f0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e40f0  enter 0, 0
    X86_AT(c, 0xe40f0u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e40f4  push ebx
    X86_AT(c, 0xe40f4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e40f5  push edx
    X86_AT(c, 0xe40f5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e40f6  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xe40f6u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e40f9  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe40f9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e40fc  mov ah, 0x12
    X86_AT(c, 0xe40fcu);
    s8(c, 4, 0x12u);
    // 0e40fe  call 0xe4198
    X86_AT(c, 0xe40feu);
    push32(c, 0xe4103u); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe4103u);
    X86_TICK(c, 27);
    // 0e4103  movzx eax, al
    X86_AT(c, 0xe4103u);
    c.r[0] = g8(c, 0);
    // 0e4106  pop edx
    X86_AT(c, 0xe4106u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e4107  pop ebx
    X86_AT(c, 0xe4107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4108  leave 
    X86_AT(c, 0xe4108u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e4109  ret 
    X86_AT(c, 0xe4109u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe40f0u, "ran off the end of a function");
}
void f_000e410a(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e410a  enter 0, 0
    X86_AT(c, 0xe410au);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e410e  push ebx
    X86_AT(c, 0xe410eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e410f  push edx
    X86_AT(c, 0xe410fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e4110  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xe4110u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e4113  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe4113u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e4116  mov ah, 0x13
    X86_AT(c, 0xe4116u);
    s8(c, 4, 0x13u);
    // 0e4118  call 0xe4198
    X86_AT(c, 0xe4118u);
    push32(c, 0xe411du); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe411du);
    X86_TICK(c, 27);
    // 0e411d  movzx eax, al
    X86_AT(c, 0xe411du);
    c.r[0] = g8(c, 0);
    // 0e4120  pop edx
    X86_AT(c, 0xe4120u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e4121  pop ebx
    X86_AT(c, 0xe4121u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4122  leave 
    X86_AT(c, 0xe4122u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e4123  ret 
    X86_AT(c, 0xe4123u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe410au, "ran off the end of a function");
}
void f_000e4124(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e4124  enter 0, 0
    X86_AT(c, 0xe4124u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e4128  push ebx
    X86_AT(c, 0xe4128u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e4129  push edx
    X86_AT(c, 0xe4129u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e412a  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xe412au);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e412d  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe412du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e4130  mov ah, 0x14
    X86_AT(c, 0xe4130u);
    s8(c, 4, 0x14u);
    // 0e4132  call 0xe4198
    X86_AT(c, 0xe4132u);
    push32(c, 0xe4137u); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe4137u);
    X86_TICK(c, 27);
    // 0e4137  movzx eax, al
    X86_AT(c, 0xe4137u);
    c.r[0] = g8(c, 0);
    // 0e413a  pop edx
    X86_AT(c, 0xe413au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e413b  pop ebx
    X86_AT(c, 0xe413bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e413c  leave 
    X86_AT(c, 0xe413cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e413d  ret 
    X86_AT(c, 0xe413du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4124u, "ran off the end of a function");
}
void f_000e413e(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e413e  enter 0, 0
    X86_AT(c, 0xe413eu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0e4142  push ebx
    X86_AT(c, 0xe4142u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e4143  push edx
    X86_AT(c, 0xe4143u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e4144  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xe4144u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e4147  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe4147u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e414a  mov ah, 0x20
    X86_AT(c, 0xe414au);
    s8(c, 4, 0x20u);
    // 0e414c  call 0xe4198
    X86_AT(c, 0xe414cu);
    push32(c, 0xe4151u); x86_call_known(c, 0xe4198u, f_000e4198); X86_RET(c, 0xe4151u);
    X86_TICK(c, 27);
    // 0e4151  movzx eax, al
    X86_AT(c, 0xe4151u);
    c.r[0] = g8(c, 0);
    // 0e4154  pop edx
    X86_AT(c, 0xe4154u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0e4155  pop ebx
    X86_AT(c, 0xe4155u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4156  leave 
    X86_AT(c, 0xe4156u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e4157  ret 
    X86_AT(c, 0xe4157u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe413eu, "ran off the end of a function");
}
void f_000e4198(X86Cpu& c) {
    X86_TICK(c, 44);
    // 0e4198  push gs
    X86_AT(c, 0xe4198u);
    push32(c, c.sreg[5]);
    // 0e419a  push fs
    X86_AT(c, 0xe419au);
    push32(c, c.sreg[4]);
    // 0e419c  push es
    X86_AT(c, 0xe419cu);
    push32(c, c.sreg[0]);
    // 0e419d  push ds
    X86_AT(c, 0xe419du);
    push32(c, c.sreg[3]);
    // 0e419e  pushal 
    X86_AT(c, 0xe419eu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e419f  pushfd 
    X86_AT(c, 0xe419fu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0e41a0  mov ebp, esp
    X86_AT(c, 0xe41a0u);
    c.r[5] = c.r[4];
    // 0e41a2  movzx ebx, ah
    X86_AT(c, 0xe41a2u);
    c.r[3] = g8(c, 4);
    // 0e41a5  call dword ptr cs:[ebx*4 + 0xe41b6]
    X86_AT(c, 0xe41a5u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xE41B6u))); push32(c, 0xe41adu);
      switch (t) {
      case 0xe4262u: x86_call_known(c, 0xe4262u, f_000e4262); break;
      case 0xe4267u: x86_call_known(c, 0xe4267u, f_000e4267); break;
      case 0xe42d7u: x86_call_known(c, 0xe42d7u, f_000e42d7); break;
      case 0xe4315u: x86_call_known(c, 0xe4315u, f_000e4315); break;
      case 0xe4395u: x86_call_known(c, 0xe4395u, f_000e4395); break;
      case 0xe43aau: x86_call_known(c, 0xe43aau, f_000e43aa); break;
      case 0xe43beu: x86_call_known(c, 0xe43beu, f_000e43be); break;
      case 0xe43cdu: x86_call_known(c, 0xe43cdu, f_000e43cd); break;
      case 0xe4415u: x86_call_known(c, 0xe4415u, f_000e4415); break;
      case 0xe4431u: x86_call_known(c, 0xe4431u, f_000e4431); break;
      case 0xe444du: x86_call_known(c, 0xe444du, f_000e444d); break;
      case 0xe4473u: x86_call_known(c, 0xe4473u, f_000e4473); break;
      case 0xe448fu: x86_call_known(c, 0xe448fu, f_000e448f); break;
      case 0xe44d6u: x86_call_known(c, 0xe44d6u, f_000e44d6); break;
      case 0xe44fcu: x86_call_known(c, 0xe44fcu, f_000e44fc); break;
      case 0xe4522u: x86_call_known(c, 0xe4522u, f_000e4522); break;
      case 0xe4548u: x86_call_known(c, 0xe4548u, f_000e4548); break;
      case 0xe456eu: x86_call_known(c, 0xe456eu, f_000e456e); break;
      case 0xe4594u: x86_call_known(c, 0xe4594u, f_000e4594); break;
      case 0xe45a3u: x86_call_known(c, 0xe45a3u, f_000e45a3); break;
      case 0xe45dfu: x86_call_known(c, 0xe45dfu, f_000e45df); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xe41adu); }
    X86_TICK(c, 56);
    // 0e41ad  popfd 
    X86_AT(c, 0xe41adu);
    x86_popfd(c, 4);
    // 0e41ae  popal 
    X86_AT(c, 0xe41aeu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e41af  pop ds
    X86_AT(c, 0xe41afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e41b0  pop es
    X86_AT(c, 0xe41b0u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e41b1  pop fs
    X86_AT(c, 0xe41b1u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0e41b3  pop gs
    X86_AT(c, 0xe41b3u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0e41b5  ret 
    X86_AT(c, 0xe41b5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4198u, "ran off the end of a function");
}
void f_000e4262(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e4262  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0xe4262u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 0e4266  ret 
    X86_AT(c, 0xe4266u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4262u, "ran off the end of a function");
}
void f_000e4267(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e4267  pushfd 
    X86_AT(c, 0xe4267u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0e4268  cld 
    X86_AT(c, 0xe4268u);
    c.fl &= ~X86_DF;
    // 0e4269  cli 
    X86_AT(c, 0xe4269u);
    c.fl &= ~X86_IF;
    // 0e426a  call 0xe5bd0
    X86_AT(c, 0xe426au);
    push32(c, 0xe426fu); x86_call_known(c, 0xe5bd0u, f_000e5bd0); X86_RET(c, 0xe426fu);
    X86_TICK(c, 7);
    // 0e426f  call 0xe550c
    X86_AT(c, 0xe426fu);
    push32(c, 0xe4274u); x86_call_known(c, 0xe550cu, f_000e550c); X86_RET(c, 0xe4274u);
    X86_TICK(c, 7);
    // 0e4274  call 0xe5593
    X86_AT(c, 0xe4274u);
    push32(c, 0xe4279u); x86_call_known(c, 0xe5593u, f_000e5593); X86_RET(c, 0xe4279u);
    X86_TICK(c, 7);
    // 0e4279  call 0xe55e7
    X86_AT(c, 0xe4279u);
    push32(c, 0xe427eu); x86_call_known(c, 0xe55e7u, f_000e55e7); X86_RET(c, 0xe427eu);
    X86_TICK(c, 7);
    // 0e427e  call 0xe4818
    X86_AT(c, 0xe427eu);
    push32(c, 0xe4283u); x86_call_known(c, 0xe4818u, f_000e4818); X86_RET(c, 0xe4283u);
    X86_TICK(c, 7);
    // 0e4283  call 0xe46f2
    X86_AT(c, 0xe4283u);
    push32(c, 0xe4288u); x86_call_known(c, 0xe46f2u, f_000e46f2); X86_RET(c, 0xe4288u);
    X86_TICK(c, 7);
    // 0e4288  call 0xe4752
    X86_AT(c, 0xe4288u);
    push32(c, 0xe428du); x86_call_known(c, 0xe4752u, f_000e4752); X86_RET(c, 0xe428du);
    X86_TICK(c, 7);
    // 0e428d  call 0xe4773
    X86_AT(c, 0xe428du);
    push32(c, 0xe4292u); x86_call_known(c, 0xe4773u, f_000e4773); X86_RET(c, 0xe4292u);
    X86_TICK(c, 7);
    // 0e4292  call 0xe47d3
    X86_AT(c, 0xe4292u);
    push32(c, 0xe4297u); x86_call_known(c, 0xe47d3u, f_000e47d3); X86_RET(c, 0xe4297u);
    X86_TICK(c, 7);
    // 0e4297  call 0xe5322
    X86_AT(c, 0xe4297u);
    push32(c, 0xe429cu); x86_call_known(c, 0xe5322u, f_000e5322); X86_RET(c, 0xe429cu);
    X86_TICK(c, 5);
    // 0e429c  jb 0xe42d2
    X86_AT(c, 0xe429cu);
    if (x86_cc(c, 2)) { goto L_e42d2; }
    X86_TICK(c, 12);
    // 0e429e  cmp byte ptr [0xc3549], 0
    X86_AT(c, 0xe429eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3549u))), 0x0u, 0, 1);
    // 0e42a5  jne 0xe42b8
    X86_AT(c, 0xe42a5u);
    if (x86_cc(c, 5)) { goto L_e42b8; }
    X86_TICK(c, 7);
    // 0e42a7  call 0xe542e
    X86_AT(c, 0xe42a7u);
    push32(c, 0xe42acu); x86_call_known(c, 0xe542eu, f_000e542e); X86_RET(c, 0xe42acu);
    X86_TICK(c, 11);
    // 0e42ac  mov al, byte ptr [0xc3305]
    X86_AT(c, 0xe42acu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC3305u))));
    // 0e42b1  call 0xe57af
    X86_AT(c, 0xe42b1u);
    push32(c, 0xe42b6u); x86_call_known(c, 0xe57afu, f_000e57af); X86_RET(c, 0xe42b6u);
    X86_TICK(c, 7);
    // 0e42b6  jmp 0xe42cc
    X86_AT(c, 0xe42b6u);
    goto L_e42cc;
L_e42b8:
    X86_TICK(c, 7);
    // 0e42b8  call 0xe53b2
    X86_AT(c, 0xe42b8u);
    push32(c, 0xe42bdu); x86_call_known(c, 0xe53b2u, f_000e53b2); X86_RET(c, 0xe42bdu);
    X86_TICK(c, 11);
    // 0e42bd  mov al, byte ptr [0xc3305]
    X86_AT(c, 0xe42bdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC3305u))));
    // 0e42c2  call 0xe57af
    X86_AT(c, 0xe42c2u);
    push32(c, 0xe42c7u); x86_call_known(c, 0xe57afu, f_000e57af); X86_RET(c, 0xe42c7u);
    X86_TICK(c, 7);
    // 0e42c7  call 0xe56d3
    X86_AT(c, 0xe42c7u);
    push32(c, 0xe42ccu); x86_call_known(c, 0xe56d3u, f_000e56d3); X86_RET(c, 0xe42ccu);
L_e42cc:
    X86_TICK(c, 18);
    // 0e42cc  popfd 
    X86_AT(c, 0xe42ccu);
    x86_popfd(c, 4);
    // 0e42cd  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe42cdu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e42d1  ret 
    X86_AT(c, 0xe42d1u);
    c.eip = pop32(c); return;
L_e42d2:
    X86_TICK(c, 12);
    // 0e42d2  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0xe42d2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 0e42d6  ret 
    X86_AT(c, 0xe42d6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4267u, "ran off the end of a function");
}
void f_000e42d7(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e42d7  push ds
    X86_AT(c, 0xe42d7u);
    push32(c, c.sreg[3]);
    // 0e42d8  pop es
    X86_AT(c, 0xe42d8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e42d9  call 0xe45fd
    X86_AT(c, 0xe42d9u);
    push32(c, 0xe42deu); x86_call_known(c, 0xe45fdu, f_000e45fd); X86_RET(c, 0xe42deu);
L_e42de:
    X86_TICK(c, 19);
    // 0e42de  lea esi, [0xc3575]
    X86_AT(c, 0xe42deu);
    c.r[6] = (uint32_t)(0xC3575u);
    // 0e42e4  mov ax, word ptr [esi + 0x10]
    X86_AT(c, 0xe42e4u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u))));
    // 0e42e8  add ax, word ptr [esi + 0x30]
    X86_AT(c, 0xe42e8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x30u))), 0, 2)); }
    // 0e42ec  or ax, ax
    X86_AT(c, 0xe42ecu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 0e42ef  jne 0xe42de
    X86_AT(c, 0xe42efu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe42deu); goto L_e42de; }
    X86_TICK(c, 7);
    // 0e42f1  call 0xe56b3
    X86_AT(c, 0xe42f1u);
    push32(c, 0xe42f6u); x86_call_known(c, 0xe56b3u, f_000e56b3); X86_RET(c, 0xe42f6u);
    X86_TICK(c, 7);
    // 0e42f6  call 0xe5468
    X86_AT(c, 0xe42f6u);
    push32(c, 0xe42fbu); x86_call_known(c, 0xe5468u, f_000e5468); X86_RET(c, 0xe42fbu);
    X86_TICK(c, 12);
    // 0e42fb  cmp byte ptr [0xc3549], 0
    X86_AT(c, 0xe42fbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3549u))), 0x0u, 0, 1);
    // 0e4302  jne 0xe430b
    X86_AT(c, 0xe4302u);
    if (x86_cc(c, 5)) { goto L_e430b; }
    X86_TICK(c, 7);
    // 0e4304  call 0xe54e3
    X86_AT(c, 0xe4304u);
    push32(c, 0xe4309u); x86_call_known(c, 0xe54e3u, f_000e54e3); X86_RET(c, 0xe4309u);
    X86_TICK(c, 7);
    // 0e4309  jmp 0xe4310
    X86_AT(c, 0xe4309u);
    goto L_e4310;
L_e430b:
    X86_TICK(c, 7);
    // 0e430b  call 0xe54a4
    X86_AT(c, 0xe430bu);
    push32(c, 0xe4310u); x86_call_known(c, 0xe54a4u, f_000e54a4); X86_RET(c, 0xe4310u);
L_e4310:
    X86_TICK(c, 12);
    // 0e4310  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe4310u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e4314  ret 
    X86_AT(c, 0xe4314u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe42d7u, "ran off the end of a function");
}
void f_000e4315(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e4315  cmp byte ptr [0xc3306], 0
    X86_AT(c, 0xe4315u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3306u))), 0x0u, 0, 1);
    // 0e431c  jne 0xe4390
    X86_AT(c, 0xe431cu);
    if (x86_cc(c, 5)) { goto L_e4390; }
    X86_TICK(c, 47);
    // 0e431e  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xe431eu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0e4321  mov byte ptr [0xc3304], dl
    X86_AT(c, 0xe4321u);
    wr8((c.sbase[3] + (uint32_t)(0xC3304u)), g8(c, 2));
    // 0e4327  mov byte ptr [0xc32f8], dl
    X86_AT(c, 0xe4327u);
    wr8((c.sbase[3] + (uint32_t)(0xC32F8u)), g8(c, 2));
    // 0e432d  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xe432du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e4330  mov ax, word ptr [ebp + 0x24]
    X86_AT(c, 0xe4330u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0e4334  mov dword ptr [0xc32e1], esi
    X86_AT(c, 0xe4334u);
    wr32((c.sbase[3] + (uint32_t)(0xC32E1u)), c.r[6]);
    // 0e433a  mov word ptr [0xc32e5], ax
    X86_AT(c, 0xe433au);
    wr16((c.sbase[3] + (uint32_t)(0xC32E5u)), (c.r[0] & 0xFFFFu));
    // 0e4340  mov dword ptr [0xc32e7], esi
    X86_AT(c, 0xe4340u);
    wr32((c.sbase[3] + (uint32_t)(0xC32E7u)), c.r[6]);
    // 0e4346  mov word ptr [0xc32eb], ax
    X86_AT(c, 0xe4346u);
    wr16((c.sbase[3] + (uint32_t)(0xC32EBu)), (c.r[0] & 0xFFFFu));
    // 0e434c  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xe434cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0e434f  add ecx, esi
    X86_AT(c, 0xe434fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e4351  mov dword ptr [0xc32ed], ecx
    X86_AT(c, 0xe4351u);
    wr32((c.sbase[3] + (uint32_t)(0xC32EDu)), c.r[1]);
    // 0e4357  mov word ptr [0xc32f1], ax
    X86_AT(c, 0xe4357u);
    wr16((c.sbase[3] + (uint32_t)(0xC32F1u)), (c.r[0] & 0xFFFFu));
    // 0e435d  mov word ptr [0xc3302], 0
    X86_AT(c, 0xe435du);
    wr16((c.sbase[3] + (uint32_t)(0xC3302u)), 0x0u);
    // 0e4366  mov word ptr [0xc32f3], 0
    X86_AT(c, 0xe4366u);
    wr16((c.sbase[3] + (uint32_t)(0xC32F3u)), 0x0u);
    // 0e436f  mov word ptr [0xc32f5], 0
    X86_AT(c, 0xe436fu);
    wr16((c.sbase[3] + (uint32_t)(0xC32F5u)), 0x0u);
    // 0e4378  call 0xe46d9
    X86_AT(c, 0xe4378u);
    push32(c, 0xe437du); x86_call_known(c, 0xe46d9u, f_000e46d9); X86_RET(c, 0xe437du);
    X86_TICK(c, 16);
    // 0e437d  mov byte ptr [0xc330d], 0xff
    X86_AT(c, 0xe437du);
    wr8((c.sbase[3] + (uint32_t)(0xC330Du)), 0xFFu);
    // 0e4384  mov byte ptr [0xc3306], 0xff
    X86_AT(c, 0xe4384u);
    wr8((c.sbase[3] + (uint32_t)(0xC3306u)), 0xFFu);
    // 0e438b  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe438bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e438f  ret 
    X86_AT(c, 0xe438fu);
    c.eip = pop32(c); return;
L_e4390:
    X86_TICK(c, 12);
    // 0e4390  mov byte ptr [ebp + 0x20], 2
    X86_AT(c, 0xe4390u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x2u);
    // 0e4394  ret 
    X86_AT(c, 0xe4394u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4315u, "ran off the end of a function");
}
void f_000e4395(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e4395  call 0xe45fd
    X86_AT(c, 0xe4395u);
    push32(c, 0xe439au); x86_call_known(c, 0xe45fdu, f_000e45fd); X86_RET(c, 0xe439au);
    X86_TICK(c, 5);
    // 0e439a  jb 0xe43a5
    X86_AT(c, 0xe439au);
    if (x86_cc(c, 2)) { goto L_e43a5; }
    X86_TICK(c, 12);
    // 0e43a0  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe43a0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e43a4  ret 
    X86_AT(c, 0xe43a4u);
    c.eip = pop32(c); return;
L_e43a5:
    X86_TICK(c, 12);
    // 0e43a5  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0xe43a5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 0e43a9  ret 
    X86_AT(c, 0xe43a9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4395u, "ran off the end of a function");
}
void f_000e43aa(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e43aa  mov byte ptr [0xc3308], 0xff
    X86_AT(c, 0xe43aau);
    wr8((c.sbase[3] + (uint32_t)(0xC3308u)), 0xFFu);
    // 0e43b1  mov byte ptr [0xc330f], 0xff
    X86_AT(c, 0xe43b1u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Fu)), 0xFFu);
    // 0e43b8  call 0xe4688
    X86_AT(c, 0xe43b8u);
    push32(c, 0xe43bdu); x86_call_known(c, 0xe4688u, f_000e4688); X86_RET(c, 0xe43bdu);
    X86_TICK(c, 10);
    // 0e43bd  ret 
    X86_AT(c, 0xe43bdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe43aau, "ran off the end of a function");
}
void f_000e43be(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0e43be  mov byte ptr [0xc3308], 0
    X86_AT(c, 0xe43beu);
    wr8((c.sbase[3] + (uint32_t)(0xC3308u)), 0x0u);
    // 0e43c5  mov byte ptr [0xc330e], 0xff
    X86_AT(c, 0xe43c5u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Eu)), 0xFFu);
    // 0e43cc  ret 
    X86_AT(c, 0xe43ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe43beu, "ran off the end of a function");
}
void f_000e43cd(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0e43cd  mov byte ptr [0xc3566], 0xff
    X86_AT(c, 0xe43cdu);
    wr8((c.sbase[3] + (uint32_t)(0xC3566u)), 0xFFu);
    // 0e43d4  mov ax, word ptr [0xc32e5]
    X86_AT(c, 0xe43d4u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC32E5u))));
    // 0e43da  mov word ptr [ebp + 0x28], ax
    X86_AT(c, 0xe43dau);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 0e43de  mov eax, dword ptr [0xc32e1]
    X86_AT(c, 0xe43deu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC32E1u)));
    // 0e43e3  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0xe43e3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
    // 0e43e6  mov ax, word ptr [0xc32f3]
    X86_AT(c, 0xe43e6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC32F3u))));
    // 0e43ec  mov word ptr [ebp + 0x14], ax
    X86_AT(c, 0xe43ecu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[0] & 0xFFFFu));
    // 0e43f0  mov ax, word ptr [0xc32f5]
    X86_AT(c, 0xe43f0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC32F5u))));
    // 0e43f6  mov word ptr [ebp + 0x1c], ax
    X86_AT(c, 0xe43f6u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), (c.r[0] & 0xFFFFu));
    // 0e43fa  mov al, byte ptr [0xc32f9]
    X86_AT(c, 0xe43fau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC32F9u))));
    // 0e43ff  mov ah, byte ptr [0xc3306]
    X86_AT(c, 0xe43ffu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0xC3306u))));
    // 0e4405  mov word ptr [ebp + 0x18], ax
    X86_AT(c, 0xe4405u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 0e4409  mov byte ptr [0xc3566], 0
    X86_AT(c, 0xe4409u);
    wr8((c.sbase[3] + (uint32_t)(0xC3566u)), 0x0u);
    // 0e4410  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe4410u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e4414  ret 
    X86_AT(c, 0xe4414u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe43cdu, "ran off the end of a function");
}
void f_000e4415(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e4415  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xe4415u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0e4418  inc dl
    X86_AT(c, 0xe4418u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0e441a  cmp dl, 8
    X86_AT(c, 0xe441au);
    (void)x86_sub(c, g8(c, 2), 0x8u, 0, 1);
    // 0e441d  ja 0xe442c
    X86_AT(c, 0xe441du);
    if (x86_cc(c, 7)) { goto L_e442c; }
    X86_TICK(c, 16);
    // 0e441f  dec dl
    X86_AT(c, 0xe441fu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0e4421  mov byte ptr [0xc3312], dl
    X86_AT(c, 0xe4421u);
    wr8((c.sbase[3] + (uint32_t)(0xC3312u)), g8(c, 2));
    // 0e4427  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe4427u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e442b  ret 
    X86_AT(c, 0xe442bu);
    c.eip = pop32(c); return;
L_e442c:
    X86_TICK(c, 12);
    // 0e442c  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xe442cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0e4430  ret 
    X86_AT(c, 0xe4430u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4415u, "ran off the end of a function");
}
void f_000e4431(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e4431  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xe4431u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0e4434  inc dl
    X86_AT(c, 0xe4434u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0e4436  cmp dl, 1
    X86_AT(c, 0xe4436u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 0e4439  ja 0xe4448
    X86_AT(c, 0xe4439u);
    if (x86_cc(c, 7)) { goto L_e4448; }
    X86_TICK(c, 16);
    // 0e443b  dec dl
    X86_AT(c, 0xe443bu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0e443d  mov byte ptr [0xc3309], dl
    X86_AT(c, 0xe443du);
    wr8((c.sbase[3] + (uint32_t)(0xC3309u)), g8(c, 2));
    // 0e4443  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe4443u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e4447  ret 
    X86_AT(c, 0xe4447u);
    c.eip = pop32(c); return;
L_e4448:
    X86_TICK(c, 12);
    // 0e4448  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xe4448u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0e444c  ret 
    X86_AT(c, 0xe444cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4431u, "ran off the end of a function");
}
void f_000e444d(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e444d  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0xe444du);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0e4451  cmp dx, 0xfa
    X86_AT(c, 0xe4451u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFAu, 0, 2);
    // 0e4456  ja 0xe446e
    X86_AT(c, 0xe4456u);
    if (x86_cc(c, 7)) { goto L_e446e; }
    X86_TICK(c, 13);
    // 0e4458  mov al, dl
    X86_AT(c, 0xe4458u);
    s8(c, 0, g8(c, 2));
    // 0e445a  mov byte ptr [0xc3305], al
    X86_AT(c, 0xe445au);
    wr8((c.sbase[3] + (uint32_t)(0xC3305u)), g8(c, 0));
    // 0e445f  mov byte ptr [0xc32f9], al
    X86_AT(c, 0xe445fu);
    wr8((c.sbase[3] + (uint32_t)(0xC32F9u)), g8(c, 0));
    // 0e4464  call 0xe57af
    X86_AT(c, 0xe4464u);
    push32(c, 0xe4469u); x86_call_known(c, 0xe57afu, f_000e57af); X86_RET(c, 0xe4469u);
    X86_TICK(c, 12);
    // 0e4469  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe4469u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e446d  ret 
    X86_AT(c, 0xe446du);
    c.eip = pop32(c); return;
L_e446e:
    X86_TICK(c, 12);
    // 0e446e  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xe446eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0e4472  ret 
    X86_AT(c, 0xe4472u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe444du, "ran off the end of a function");
}
void f_000e4473(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e4473  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xe4473u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0e4476  inc dl
    X86_AT(c, 0xe4476u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0e4478  cmp dl, 1
    X86_AT(c, 0xe4478u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 0e447b  ja 0xe448a
    X86_AT(c, 0xe447bu);
    if (x86_cc(c, 7)) { goto L_e448a; }
    X86_TICK(c, 16);
    // 0e447d  dec dl
    X86_AT(c, 0xe447du);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0e447f  mov byte ptr [0xc3566], dl
    X86_AT(c, 0xe447fu);
    wr8((c.sbase[3] + (uint32_t)(0xC3566u)), g8(c, 2));
    // 0e4485  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe4485u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e4489  ret 
    X86_AT(c, 0xe4489u);
    c.eip = pop32(c); return;
L_e448a:
    X86_TICK(c, 12);
    // 0e448a  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xe448au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0e448e  ret 
    X86_AT(c, 0xe448eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4473u, "ran off the end of a function");
}
void f_000e448f(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e448f  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xe448fu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0e4492  inc dl
    X86_AT(c, 0xe4492u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0e4494  cmp dl, 1
    X86_AT(c, 0xe4494u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 0e4497  ja 0xe44d1
    X86_AT(c, 0xe4497u);
    if (x86_cc(c, 7)) { goto L_e44d1; }
    X86_TICK(c, 14);
    // 0e4499  dec dl
    X86_AT(c, 0xe4499u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0e449b  cmp byte ptr [0xc3549], 0
    X86_AT(c, 0xe449bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3549u))), 0x0u, 0, 1);
    // 0e44a2  jne 0xe44bc
    X86_AT(c, 0xe44a2u);
    if (x86_cc(c, 5)) { goto L_e44bc; }
    X86_TICK(c, 7);
    // 0e44a4  and dl, dl
    X86_AT(c, 0xe44a4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 0e44a6  je 0xe44b1
    X86_AT(c, 0xe44a6u);
    if (x86_cc(c, 4)) { goto L_e44b1; }
    X86_TICK(c, 9);
    // 0e44a8  mov ah, 0x17
    X86_AT(c, 0xe44a8u);
    s8(c, 4, 0x17u);
    // 0e44aa  call 0xe3e10
    X86_AT(c, 0xe44aau);
    push32(c, 0xe44afu); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe44afu);
    X86_TICK(c, 7);
    // 0e44af  jmp 0xe44cc
    X86_AT(c, 0xe44afu);
    goto L_e44cc;
L_e44b1:
    X86_TICK(c, 11);
    // 0e44b1  mov bl, 0
    X86_AT(c, 0xe44b1u);
    s8(c, 3, 0x0u);
    // 0e44b3  mov ah, 0x15
    X86_AT(c, 0xe44b3u);
    s8(c, 4, 0x15u);
    // 0e44b5  call 0xe3e10
    X86_AT(c, 0xe44b5u);
    push32(c, 0xe44bau); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe44bau);
    X86_TICK(c, 7);
    // 0e44ba  jmp 0xe44cc
    X86_AT(c, 0xe44bau);
    goto L_e44cc;
L_e44bc:
    X86_TICK(c, 7);
    // 0e44bc  and dl, dl
    X86_AT(c, 0xe44bcu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 0e44be  je 0xe44c7
    X86_AT(c, 0xe44beu);
    if (x86_cc(c, 4)) { goto L_e44c7; }
    X86_TICK(c, 7);
    // 0e44c0  call 0xe5714
    X86_AT(c, 0xe44c0u);
    push32(c, 0xe44c5u); x86_call_known(c, 0xe5714u, f_000e5714); X86_RET(c, 0xe44c5u);
    X86_TICK(c, 7);
    // 0e44c5  jmp 0xe44cc
    X86_AT(c, 0xe44c5u);
    goto L_e44cc;
L_e44c7:
    X86_TICK(c, 7);
    // 0e44c7  call 0xe56d3
    X86_AT(c, 0xe44c7u);
    push32(c, 0xe44ccu); x86_call_known(c, 0xe56d3u, f_000e56d3); X86_RET(c, 0xe44ccu);
L_e44cc:
    X86_TICK(c, 12);
    // 0e44cc  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe44ccu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e44d0  ret 
    X86_AT(c, 0xe44d0u);
    c.eip = pop32(c); return;
L_e44d1:
    X86_TICK(c, 12);
    // 0e44d1  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xe44d1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0e44d5  ret 
    X86_AT(c, 0xe44d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe448fu, "ran off the end of a function");
}
void f_000e44d6(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e44d6  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xe44d6u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0e44d9  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xe44d9u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0e44dc  cmp bl, 0x20
    X86_AT(c, 0xe44dcu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0e44df  jae 0xe44f7
    X86_AT(c, 0xe44dfu);
    if (x86_cc(c, 3)) { goto L_e44f7; }
    X86_TICK(c, 9);
    // 0e44e1  inc al
    X86_AT(c, 0xe44e1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0e44e3  cmp al, 8
    X86_AT(c, 0xe44e3u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 0e44e5  ja 0xe44f7
    X86_AT(c, 0xe44e5u);
    if (x86_cc(c, 7)) { goto L_e44f7; }
    X86_TICK(c, 19);
    // 0e44e7  dec al
    X86_AT(c, 0xe44e7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0e44e9  movzx ebx, bl
    X86_AT(c, 0xe44e9u);
    c.r[3] = g8(c, 3);
    // 0e44ec  mov byte ptr [ebx + 0xc3345], al
    X86_AT(c, 0xe44ecu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xC3345u)), g8(c, 0));
    // 0e44f2  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe44f2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e44f6  ret 
    X86_AT(c, 0xe44f6u);
    c.eip = pop32(c); return;
L_e44f7:
    X86_TICK(c, 12);
    // 0e44f7  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xe44f7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0e44fb  ret 
    X86_AT(c, 0xe44fbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe44d6u, "ran off the end of a function");
}
void f_000e44fc(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e44fc  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xe44fcu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0e44ff  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xe44ffu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0e4502  cmp bl, 0x20
    X86_AT(c, 0xe4502u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0e4505  jae 0xe451d
    X86_AT(c, 0xe4505u);
    if (x86_cc(c, 3)) { goto L_e451d; }
    X86_TICK(c, 9);
    // 0e4507  inc al
    X86_AT(c, 0xe4507u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0e4509  cmp al, 0x10
    X86_AT(c, 0xe4509u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 0e450b  ja 0xe451d
    X86_AT(c, 0xe450bu);
    if (x86_cc(c, 7)) { goto L_e451d; }
    X86_TICK(c, 19);
    // 0e450d  dec al
    X86_AT(c, 0xe450du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0e450f  movzx ebx, bl
    X86_AT(c, 0xe450fu);
    c.r[3] = g8(c, 3);
    // 0e4512  mov byte ptr [ebx + 0xc3365], al
    X86_AT(c, 0xe4512u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xC3365u)), g8(c, 0));
    // 0e4518  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe4518u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e451c  ret 
    X86_AT(c, 0xe451cu);
    c.eip = pop32(c); return;
L_e451d:
    X86_TICK(c, 12);
    // 0e451d  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xe451du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0e4521  ret 
    X86_AT(c, 0xe4521u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe44fcu, "ran off the end of a function");
}
void f_000e4522(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e4522  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xe4522u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0e4525  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xe4525u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0e4528  cmp bl, 0x20
    X86_AT(c, 0xe4528u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0e452b  jae 0xe4543
    X86_AT(c, 0xe452bu);
    if (x86_cc(c, 3)) { goto L_e4543; }
    X86_TICK(c, 9);
    // 0e452d  inc al
    X86_AT(c, 0xe452du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0e452f  cmp al, 1
    X86_AT(c, 0xe452fu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 0e4531  ja 0xe4543
    X86_AT(c, 0xe4531u);
    if (x86_cc(c, 7)) { goto L_e4543; }
    X86_TICK(c, 19);
    // 0e4533  dec al
    X86_AT(c, 0xe4533u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0e4535  movzx ebx, bl
    X86_AT(c, 0xe4535u);
    c.r[3] = g8(c, 3);
    // 0e4538  mov byte ptr [ebx + 0xc3325], al
    X86_AT(c, 0xe4538u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xC3325u)), g8(c, 0));
    // 0e453e  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe453eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e4542  ret 
    X86_AT(c, 0xe4542u);
    c.eip = pop32(c); return;
L_e4543:
    X86_TICK(c, 12);
    // 0e4543  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xe4543u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0e4547  ret 
    X86_AT(c, 0xe4547u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4522u, "ran off the end of a function");
}
void f_000e4548(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e4548  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xe4548u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0e454b  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xe454bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0e454e  cmp bl, 0x20
    X86_AT(c, 0xe454eu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0e4551  jae 0xe4569
    X86_AT(c, 0xe4551u);
    if (x86_cc(c, 3)) { goto L_e4569; }
    X86_TICK(c, 9);
    // 0e4553  add al, 0x28
    X86_AT(c, 0xe4553u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 0e4555  cmp al, 0x50
    X86_AT(c, 0xe4555u);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 0e4557  ja 0xe4569
    X86_AT(c, 0xe4557u);
    if (x86_cc(c, 7)) { goto L_e4569; }
    X86_TICK(c, 19);
    // 0e4559  sub al, 0x28
    X86_AT(c, 0xe4559u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 0e455b  movzx ebx, bl
    X86_AT(c, 0xe455bu);
    c.r[3] = g8(c, 3);
    // 0e455e  mov byte ptr [ebx + 0xc33a5], al
    X86_AT(c, 0xe455eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xC33A5u)), g8(c, 0));
    // 0e4564  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe4564u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e4568  ret 
    X86_AT(c, 0xe4568u);
    c.eip = pop32(c); return;
L_e4569:
    X86_TICK(c, 12);
    // 0e4569  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xe4569u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0e456d  ret 
    X86_AT(c, 0xe456du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4548u, "ran off the end of a function");
}
void f_000e456e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e456e  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xe456eu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0e4571  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xe4571u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0e4574  cmp bl, 0x20
    X86_AT(c, 0xe4574u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0e4577  jae 0xe458f
    X86_AT(c, 0xe4577u);
    if (x86_cc(c, 3)) { goto L_e458f; }
    X86_TICK(c, 9);
    // 0e4579  add al, 0x28
    X86_AT(c, 0xe4579u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 0e457b  cmp al, 0x50
    X86_AT(c, 0xe457bu);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 0e457d  ja 0xe458f
    X86_AT(c, 0xe457du);
    if (x86_cc(c, 7)) { goto L_e458f; }
    X86_TICK(c, 19);
    // 0e457f  sub al, 0x28
    X86_AT(c, 0xe457fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 0e4581  movzx ebx, bl
    X86_AT(c, 0xe4581u);
    c.r[3] = g8(c, 3);
    // 0e4584  mov byte ptr [ebx + 0xc3385], al
    X86_AT(c, 0xe4584u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xC3385u)), g8(c, 0));
    // 0e458a  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xe458au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0e458e  ret 
    X86_AT(c, 0xe458eu);
    c.eip = pop32(c); return;
L_e458f:
    X86_TICK(c, 12);
    // 0e458f  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xe458fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0e4593  ret 
    X86_AT(c, 0xe4593u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe456eu, "ran off the end of a function");
}
void f_000e4594(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e4594  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xe4594u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0e4597  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xe4597u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0e459a  call 0xe5c52
    X86_AT(c, 0xe459au);
    push32(c, 0xe459fu); x86_call_known(c, 0xe5c52u, f_000e5c52); X86_RET(c, 0xe459fu);
    X86_TICK(c, 12);
    // 0e459f  mov byte ptr [ebp + 0x20], al
    X86_AT(c, 0xe459fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 0));
    // 0e45a2  ret 
    X86_AT(c, 0xe45a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4594u, "ran off the end of a function");
}
void f_000e45a3(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e45a3  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xe45a3u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0e45a6  inc bl
    X86_AT(c, 0xe45a6u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 0e45a8  cmp bl, 8
    X86_AT(c, 0xe45a8u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 0e45ab  ja 0xe45db
    X86_AT(c, 0xe45abu);
    if (x86_cc(c, 7)) { goto L_e45db; }
    X86_TICK(c, 13);
    // 0e45ad  dec bl
    X86_AT(c, 0xe45adu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0e45af  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xe45afu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0e45b2  cmp ecx, 0
    X86_AT(c, 0xe45b2u);
    (void)x86_sub(c, c.r[1], 0x0u, 0, 4);
    // 0e45b5  je 0xe45db
    X86_AT(c, 0xe45b5u);
    if (x86_cc(c, 4)) { goto L_e45db; }
    X86_TICK(c, 12);
    // 0e45b7  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xe45b7u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e45ba  mov al, byte ptr [0xc3566]
    X86_AT(c, 0xe45bau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC3566u))));
    // 0e45bf  mov byte ptr [0xc3566], 0xff
    X86_AT(c, 0xe45bfu);
    wr8((c.sbase[3] + (uint32_t)(0xC3566u)), 0xFFu);
    // 0e45c6  push ax
    X86_AT(c, 0xe45c6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
L_e45c8:
    X86_TICK(c, 14);
    // 0e45c8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xe45c8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0e45c9  call 0xe5279
    X86_AT(c, 0xe45c9u);
    push32(c, 0xe45ceu); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe45ceu);
    X86_TICK(c, 11);
    // 0e45ce  loop 0xe45c8
    X86_AT(c, 0xe45ceu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe45c8u); goto L_e45c8; }
    X86_TICK(c, 20);
    // 0e45d0  pop ax
    X86_AT(c, 0xe45d0u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e45d2  mov byte ptr [0xc3566], al
    X86_AT(c, 0xe45d2u);
    wr8((c.sbase[3] + (uint32_t)(0xC3566u)), g8(c, 0));
    // 0e45d7  xor al, al
    X86_AT(c, 0xe45d7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0e45d9  clc 
    X86_AT(c, 0xe45d9u);
    c.fl &= ~X86_CF;
    // 0e45da  ret 
    X86_AT(c, 0xe45dau);
    c.eip = pop32(c); return;
L_e45db:
    X86_TICK(c, 14);
    // 0e45db  mov al, 3
    X86_AT(c, 0xe45dbu);
    s8(c, 0, 0x3u);
    // 0e45dd  stc 
    X86_AT(c, 0xe45ddu);
    c.fl |= X86_CF;
    // 0e45de  ret 
    X86_AT(c, 0xe45deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe45a3u, "ran off the end of a function");
}
void f_000e45df(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e45df  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xe45dfu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0e45e2  call 0xe5226
    X86_AT(c, 0xe45e2u);
    push32(c, 0xe45e7u); x86_call_known(c, 0xe5226u, f_000e5226); X86_RET(c, 0xe45e7u);
    X86_TICK(c, 13);
    // 0e45e7  cmp ah, 1
    X86_AT(c, 0xe45e7u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 0e45ea  nop 
    X86_AT(c, 0xe45eau);
    // 0e45eb  nop 
    X86_AT(c, 0xe45ebu);
    // 0e45ec  nop 
    X86_AT(c, 0xe45ecu);
    // 0e45ed  ja 0xe45f8
    X86_AT(c, 0xe45edu);
    if (x86_cc(c, 7)) { goto L_e45f8; }
    X86_TICK(c, 5);
    // 0e45ef  je 0xe45f8
    X86_AT(c, 0xe45efu);
    if (x86_cc(c, 4)) { goto L_e45f8; }
    X86_TICK(c, 16);
    // 0e45f1  mov byte ptr [ebp + 0x18], al
    X86_AT(c, 0xe45f1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), g8(c, 0));
    // 0e45f4  xor al, al
    X86_AT(c, 0xe45f4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0e45f6  clc 
    X86_AT(c, 0xe45f6u);
    c.fl &= ~X86_CF;
    // 0e45f7  ret 
    X86_AT(c, 0xe45f7u);
    c.eip = pop32(c); return;
L_e45f8:
    X86_TICK(c, 14);
    // 0e45f8  mov byte ptr [ebp + 0x20], ah
    X86_AT(c, 0xe45f8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 4));
    // 0e45fb  stc 
    X86_AT(c, 0xe45fbu);
    c.fl |= X86_CF;
    // 0e45fc  ret 
    X86_AT(c, 0xe45fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe45dfu, "ran off the end of a function");
}
void f_000e45fd(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e45fd  cmp byte ptr [0xc3306], 0
    X86_AT(c, 0xe45fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3306u))), 0x0u, 0, 1);
    // 0e4604  je 0xe462b
    X86_AT(c, 0xe4604u);
    if (x86_cc(c, 4)) { goto L_e462b; }
    X86_TICK(c, 15);
    // 0e4606  mov byte ptr [0xc330f], 0xff
    X86_AT(c, 0xe4606u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Fu)), 0xFFu);
    // 0e460d  mov byte ptr [0xc3306], 0
    X86_AT(c, 0xe460du);
    wr8((c.sbase[3] + (uint32_t)(0xC3306u)), 0x0u);
    // 0e4614  mov word ptr [0xc3319], 0
    X86_AT(c, 0xe4614u);
    wr16((c.sbase[3] + (uint32_t)(0xC3319u)), 0x0u);
    // 0e461d  mov byte ptr [0xc3307], 0
    X86_AT(c, 0xe461du);
    wr8((c.sbase[3] + (uint32_t)(0xC3307u)), 0x0u);
    // 0e4624  call 0xe4688
    X86_AT(c, 0xe4624u);
    push32(c, 0xe4629u); x86_call_known(c, 0xe4688u, f_000e4688); X86_RET(c, 0xe4629u);
    X86_TICK(c, 12);
    // 0e4629  clc 
    X86_AT(c, 0xe4629u);
    c.fl &= ~X86_CF;
    // 0e462a  ret 
    X86_AT(c, 0xe462au);
    c.eip = pop32(c); return;
L_e462b:
    X86_TICK(c, 12);
    // 0e462b  stc 
    X86_AT(c, 0xe462bu);
    c.fl |= X86_CF;
    // 0e462c  ret 
    X86_AT(c, 0xe462cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe45fdu, "ran off the end of a function");
}
void f_000e462d(X86Cpu& c) {
    X86_TICK(c, 57);
    // 0e462d  movzx ebx, al
    X86_AT(c, 0xe462du);
    c.r[3] = g8(c, 0);
    // 0e4630  and al, 0xf
    X86_AT(c, 0xe4630u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0e4632  inc al
    X86_AT(c, 0xe4632u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0e4634  shr ebx, 4
    X86_AT(c, 0xe4634u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0e4637  mov bx, word ptr cs:[ebx*2 + 0xe464d]
    X86_AT(c, 0xe4637u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xE464Du))));
    // 0e4640  push eax
    X86_AT(c, 0xe4640u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4641  movzx ax, al
    X86_AT(c, 0xe4641u);
    s16(c, 0, g8(c, 0));
    // 0e4645  mul bx
    X86_AT(c, 0xe4645u);
    x86_mul(c, (c.r[3] & 0xFFFFu), 2);
    // 0e4648  mov dx, ax
    X86_AT(c, 0xe4648u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 0e464b  pop eax
    X86_AT(c, 0xe464bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e464c  ret 
    X86_AT(c, 0xe464cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe462du, "ran off the end of a function");
}
void f_000e467e(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e467e  movzx ebx, dl
    X86_AT(c, 0xe467eu);
    c.r[3] = g8(c, 2);
    // 0e4681  mov bl, byte ptr [ebx + 0xc3345]
    X86_AT(c, 0xe4681u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xC3345u))));
    // 0e4687  ret 
    X86_AT(c, 0xe4687u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe467eu, "ran off the end of a function");
}
void f_000e4688(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0e4688  pushal 
    X86_AT(c, 0xe4688u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e4689  mov al, byte ptr [0xc3566]
    X86_AT(c, 0xe4689u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC3566u))));
    // 0e468e  push eax
    X86_AT(c, 0xe468eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e468f  mov byte ptr [0xc3566], 0xff
    X86_AT(c, 0xe468fu);
    wr8((c.sbase[3] + (uint32_t)(0xC3566u)), 0xFFu);
    // 0e4696  movzx ecx, word ptr [0xc3310]
    X86_AT(c, 0xe4696u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0xC3310u)));
    // 0e469d  or ecx, ecx
    X86_AT(c, 0xe469du);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 0e469f  je 0xe46d1
    X86_AT(c, 0xe469fu);
    if (x86_cc(c, 4)) { goto L_e46d1; }
    X86_TICK(c, 2);
    // 0e46a1  lea edi, [0xc33c5]
    X86_AT(c, 0xe46a1u);
    c.r[7] = (uint32_t)(0xC33C5u);
L_e46a7:
    X86_TICK(c, 12);
    // 0e46a7  cmp byte ptr [edi], 0
    X86_AT(c, 0xe46a7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0e46aa  jne 0xe46b1
    X86_AT(c, 0xe46aau);
    if (x86_cc(c, 5)) { goto L_e46b1; }
    X86_TICK(c, 9);
    // 0e46ac  add edi, 6
    X86_AT(c, 0xe46acu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0e46af  jmp 0xe46a7
    X86_AT(c, 0xe46afu);
    X86_POLL(c, 0xe46a7u); goto L_e46a7;
L_e46b1:
    X86_TICK(c, 28);
    // 0e46b1  push ecx
    X86_AT(c, 0xe46b1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e46b2  xor ch, ch
    X86_AT(c, 0xe46b2u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 0e46b4  xchg byte ptr [edi], ch
    X86_AT(c, 0xe46b4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 0e46b6  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0xe46b6u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e46b9  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0xe46b9u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0e46bc  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0xe46bcu);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 0e46bf  call 0xe4e03
    X86_AT(c, 0xe46bfu);
    push32(c, 0xe46c4u); x86_call_known(c, 0xe4e03u, f_000e4e03); X86_RET(c, 0xe46c4u);
    X86_TICK(c, 23);
    // 0e46c4  pop ecx
    X86_AT(c, 0xe46c4u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0e46c5  add edi, 6
    X86_AT(c, 0xe46c5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0e46c8  dec word ptr [0xc3310]
    X86_AT(c, 0xe46c8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3310u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0e46cf  loop 0xe46a7
    X86_AT(c, 0xe46cfu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe46a7u); goto L_e46a7; }
L_e46d1:
    X86_TICK(c, 40);
    // 0e46d1  pop eax
    X86_AT(c, 0xe46d1u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e46d2  mov byte ptr [0xc3566], al
    X86_AT(c, 0xe46d2u);
    wr8((c.sbase[3] + (uint32_t)(0xC3566u)), g8(c, 0));
    // 0e46d7  popal 
    X86_AT(c, 0xe46d7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e46d8  ret 
    X86_AT(c, 0xe46d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4688u, "ran off the end of a function");
}
void f_000e46d9(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0e46d9  push ebx
    X86_AT(c, 0xe46d9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e46da  push ecx
    X86_AT(c, 0xe46dau);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e46db  mov ecx, 8
    X86_AT(c, 0xe46dbu);
    c.r[1] = 0x8u;
    // 0e46e0  lea ebx, [0xc3575]
    X86_AT(c, 0xe46e0u);
    c.r[3] = (uint32_t)(0xC3575u);
L_e46e6:
    X86_TICK(c, 15);
    // 0e46e6  mov byte ptr [ebx + 0x1b], 0
    X86_AT(c, 0xe46e6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), 0x0u);
    // 0e46ea  add ebx, 0x20
    X86_AT(c, 0xe46eau);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e46ed  loop 0xe46e6
    X86_AT(c, 0xe46edu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe46e6u); goto L_e46e6; }
    X86_TICK(c, 18);
    // 0e46ef  pop ecx
    X86_AT(c, 0xe46efu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0e46f0  pop ebx
    X86_AT(c, 0xe46f0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e46f1  ret 
    X86_AT(c, 0xe46f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe46d9u, "ran off the end of a function");
}
void f_000e46f2(X86Cpu& c) {
    X86_TICK(c, 69);
    // 0e46f2  push es
    X86_AT(c, 0xe46f2u);
    push32(c, c.sreg[0]);
    // 0e46f3  pushal 
    X86_AT(c, 0xe46f3u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e46f4  push ds
    X86_AT(c, 0xe46f4u);
    push32(c, c.sreg[3]);
    // 0e46f5  pop es
    X86_AT(c, 0xe46f5u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e46f6  mov al, 0xff
    X86_AT(c, 0xe46f6u);
    s8(c, 0, 0xFFu);
    // 0e46f8  lea edi, [0xc3325]
    X86_AT(c, 0xe46f8u);
    c.r[7] = (uint32_t)(0xC3325u);
    // 0e46fe  mov ecx, 0x20
    X86_AT(c, 0xe46feu);
    c.r[1] = 0x20u;
    // 0e4703  stosb byte ptr es:[edi], al
    X86_AT(c, 0xe4703u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0e4705  mov al, 0xff
    X86_AT(c, 0xe4705u);
    s8(c, 0, 0xFFu);
    // 0e4707  lea edi, [0xc3345]
    X86_AT(c, 0xe4707u);
    c.r[7] = (uint32_t)(0xC3345u);
    // 0e470d  mov ecx, 0x10
    X86_AT(c, 0xe470du);
    c.r[1] = 0x10u;
    // 0e4712  stosb byte ptr es:[edi], al
    X86_AT(c, 0xe4712u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0e4714  xor al, al
    X86_AT(c, 0xe4714u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0e4716  mov ecx, 0x10
    X86_AT(c, 0xe4716u);
    c.r[1] = 0x10u;
    // 0e471b  stosb byte ptr es:[edi], al
    X86_AT(c, 0xe471bu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0e471d  xor al, al
    X86_AT(c, 0xe471du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0e471f  lea edi, [0xc3365]
    X86_AT(c, 0xe471fu);
    c.r[7] = (uint32_t)(0xC3365u);
    // 0e4725  mov ecx, 0x20
    X86_AT(c, 0xe4725u);
    c.r[1] = 0x20u;
L_e472a:
    X86_TICK(c, 22);
    // 0e472a  stosb byte ptr es:[edi], al
    X86_AT(c, 0xe472au);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0e472b  inc al
    X86_AT(c, 0xe472bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0e472d  and al, 0xf
    X86_AT(c, 0xe472du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0e472f  loop 0xe472a
    X86_AT(c, 0xe472fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe472au); goto L_e472a; }
    X86_TICK(c, 64);
    // 0e4731  xor al, al
    X86_AT(c, 0xe4731u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0e4733  lea edi, [0xc3385]
    X86_AT(c, 0xe4733u);
    c.r[7] = (uint32_t)(0xC3385u);
    // 0e4739  mov ecx, 0x20
    X86_AT(c, 0xe4739u);
    c.r[1] = 0x20u;
    // 0e473e  stosb byte ptr es:[edi], al
    X86_AT(c, 0xe473eu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0e4740  xor al, al
    X86_AT(c, 0xe4740u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0e4742  lea edi, [0xc33a5]
    X86_AT(c, 0xe4742u);
    c.r[7] = (uint32_t)(0xC33A5u);
    // 0e4748  mov ecx, 0x20
    X86_AT(c, 0xe4748u);
    c.r[1] = 0x20u;
    // 0e474d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xe474du);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0e474f  popal 
    X86_AT(c, 0xe474fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e4750  pop es
    X86_AT(c, 0xe4750u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e4751  ret 
    X86_AT(c, 0xe4751u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe46f2u, "ran off the end of a function");
}
}

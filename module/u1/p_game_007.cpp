#include "p_game_funcs.h"
namespace p_game {
void f_000cfb94(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cfb94  push 0x6340
    X86_AT(c, 0xcfb94u);
    { uint32_t v = 0x6340u; push32(c, v); }
    // 0cfb99  push 4
    X86_AT(c, 0xcfb99u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cfb9b  call 0xc8cdc
    X86_AT(c, 0xcfb9bu);
    push32(c, 0xcfba0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcfba0u);
    X86_TICK(c, 20);
    // 0cfba0  push dword ptr [0xb0326]
    X86_AT(c, 0xcfba0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB0326u))); push32(c, v); }
    // 0cfba6  push 0xf
    X86_AT(c, 0xcfba6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfba8  push 0
    X86_AT(c, 0xcfba8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cfbaa  push 0xa1de8
    X86_AT(c, 0xcfbaau);
    { uint32_t v = 0xA1DE8u; push32(c, v); }
    // 0cfbaf  push 0xb0392
    X86_AT(c, 0xcfbafu);
    { uint32_t v = 0xB0392u; push32(c, v); }
    // 0cfbb4  call 0xcfa90
    X86_AT(c, 0xcfbb4u);
    push32(c, 0xcfbb9u); x86_call_known(c, 0xcfa90u, f_000cfa90); X86_RET(c, 0xcfbb9u);
    X86_TICK(c, 14);
    // 0cfbb9  mov dword ptr [0xb0326], eax
    X86_AT(c, 0xcfbb9u);
    wr32((c.sbase[3] + (uint32_t)(0xB0326u)), c.r[0]);
    // 0cfbbe  add esp, 0x1c
    X86_AT(c, 0xcfbbeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0cfbc1  ret 
    X86_AT(c, 0xcfbc1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfb94u, "ran off the end of a function");
}
void f_000cfbc4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cfbc4  push 0x635c
    X86_AT(c, 0xcfbc4u);
    { uint32_t v = 0x635Cu; push32(c, v); }
    // 0cfbc9  push 4
    X86_AT(c, 0xcfbc9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cfbcb  call 0xc8cdc
    X86_AT(c, 0xcfbcbu);
    push32(c, 0xcfbd0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcfbd0u);
    X86_TICK(c, 20);
    // 0cfbd0  push dword ptr [0xb032e]
    X86_AT(c, 0xcfbd0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB032Eu))); push32(c, v); }
    // 0cfbd6  push 5
    X86_AT(c, 0xcfbd6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cfbd8  push 0
    X86_AT(c, 0xcfbd8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cfbda  push 0xa1e70
    X86_AT(c, 0xcfbdau);
    { uint32_t v = 0xA1E70u; push32(c, v); }
    // 0cfbdf  push 0xb037a
    X86_AT(c, 0xcfbdfu);
    { uint32_t v = 0xB037Au; push32(c, v); }
    // 0cfbe4  call 0xcfa90
    X86_AT(c, 0xcfbe4u);
    push32(c, 0xcfbe9u); x86_call_known(c, 0xcfa90u, f_000cfa90); X86_RET(c, 0xcfbe9u);
    X86_TICK(c, 14);
    // 0cfbe9  mov dword ptr [0xb032e], eax
    X86_AT(c, 0xcfbe9u);
    wr32((c.sbase[3] + (uint32_t)(0xB032Eu)), c.r[0]);
    // 0cfbee  add esp, 0x1c
    X86_AT(c, 0xcfbeeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0cfbf1  ret 
    X86_AT(c, 0xcfbf1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfbc4u, "ran off the end of a function");
}
void f_000cfbf4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cfbf4  push 0x6378
    X86_AT(c, 0xcfbf4u);
    { uint32_t v = 0x6378u; push32(c, v); }
    // 0cfbf9  push 4
    X86_AT(c, 0xcfbf9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cfbfb  call 0xc8cdc
    X86_AT(c, 0xcfbfbu);
    push32(c, 0xcfc00u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcfc00u);
    X86_TICK(c, 20);
    // 0cfc00  push dword ptr [0xb032a]
    X86_AT(c, 0xcfc00u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB032Au))); push32(c, v); }
    // 0cfc06  push 0xa
    X86_AT(c, 0xcfc06u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0cfc08  push 0
    X86_AT(c, 0xcfc08u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cfc0a  push 0xa1e44
    X86_AT(c, 0xcfc0au);
    { uint32_t v = 0xA1E44u; push32(c, v); }
    // 0cfc0f  push 0xb03d2
    X86_AT(c, 0xcfc0fu);
    { uint32_t v = 0xB03D2u; push32(c, v); }
    // 0cfc14  call 0xcfa90
    X86_AT(c, 0xcfc14u);
    push32(c, 0xcfc19u); x86_call_known(c, 0xcfa90u, f_000cfa90); X86_RET(c, 0xcfc19u);
    X86_TICK(c, 14);
    // 0cfc19  mov dword ptr [0xb032a], eax
    X86_AT(c, 0xcfc19u);
    wr32((c.sbase[3] + (uint32_t)(0xB032Au)), c.r[0]);
    // 0cfc1e  add esp, 0x1c
    X86_AT(c, 0xcfc1eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0cfc21  ret 
    X86_AT(c, 0xcfc21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfbf4u, "ran off the end of a function");
}
void f_000cfc24(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0cfc24  push ebx
    X86_AT(c, 0xcfc24u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cfc25  push edi
    X86_AT(c, 0xcfc25u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfc26  mov edi, 4
    X86_AT(c, 0xcfc26u);
    c.r[7] = 0x4u;
    // 0cfc2b  push 0xf
    X86_AT(c, 0xcfc2bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfc2d  push 0x6390
    X86_AT(c, 0xcfc2du);
    { uint32_t v = 0x6390u; push32(c, v); }
    // 0cfc32  call 0xcc830
    X86_AT(c, 0xcfc32u);
    push32(c, 0xcfc37u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcfc37u);
    X86_TICK(c, 11);
    // 0cfc37  push 0xf
    X86_AT(c, 0xcfc37u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfc39  push 0x63a8
    X86_AT(c, 0xcfc39u);
    { uint32_t v = 0x63A8u; push32(c, v); }
    // 0cfc3e  call 0xcc830
    X86_AT(c, 0xcfc3eu);
    push32(c, 0xcfc43u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcfc43u);
    X86_TICK(c, 7);
    // 0cfc43  call 0xcf8e0
    X86_AT(c, 0xcfc43u);
    push32(c, 0xcfc48u); x86_call_known(c, 0xcf8e0u, f_000cf8e0); X86_RET(c, 0xcfc48u);
    X86_TICK(c, 17);
    // 0cfc48  xchg ebx, eax
    X86_AT(c, 0xcfc48u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cfc49  add esp, 0x10
    X86_AT(c, 0xcfc49u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cfc4c  cmp dword ptr [0xb52f8], 5
    X86_AT(c, 0xcfc4cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x5u, 0, 4);
    // 0cfc53  jne 0xcfc6d
    X86_AT(c, 0xcfc53u);
    if (x86_cc(c, 5)) { goto L_cfc6d; }
    X86_TICK(c, 23);
    // 0cfc55  push 9
    X86_AT(c, 0xcfc55u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0cfc57  push 0xf
    X86_AT(c, 0xcfc57u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfc59  push 0xf
    X86_AT(c, 0xcfc59u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfc5b  push 0x11
    X86_AT(c, 0xcfc5bu);
    { uint32_t v = 0x11u; push32(c, v); }
    // 0cfc5d  push 0x29
    X86_AT(c, 0xcfc5du);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0cfc5f  push 0x11a
    X86_AT(c, 0xcfc5fu);
    { uint32_t v = 0x11Au; push32(c, v); }
    // 0cfc64  push 0x13c
    X86_AT(c, 0xcfc64u);
    { uint32_t v = 0x13Cu; push32(c, v); }
    // 0cfc69  push 0x28
    X86_AT(c, 0xcfc69u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0cfc6b  jmp 0xcfc83
    X86_AT(c, 0xcfc6bu);
    goto L_cfc83;
L_cfc6d:
    X86_TICK(c, 16);
    // 0cfc6d  push 9
    X86_AT(c, 0xcfc6du);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0cfc6f  push 0xf
    X86_AT(c, 0xcfc6fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfc71  push 0xf
    X86_AT(c, 0xcfc71u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfc73  push 0x11
    X86_AT(c, 0xcfc73u);
    { uint32_t v = 0x11u; push32(c, v); }
    // 0cfc75  push 0x29
    X86_AT(c, 0xcfc75u);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0cfc77  push 0x11c
    X86_AT(c, 0xcfc77u);
    { uint32_t v = 0x11Cu; push32(c, v); }
    // 0cfc7c  push 0x13c
    X86_AT(c, 0xcfc7cu);
    { uint32_t v = 0x13Cu; push32(c, v); }
    // 0cfc81  push 0x51
    X86_AT(c, 0xcfc81u);
    { uint32_t v = 0x51u; push32(c, v); }
L_cfc83:
    X86_TICK(c, 11);
    // 0cfc83  push 0x1c
    X86_AT(c, 0xcfc83u);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0cfc85  push edi
    X86_AT(c, 0xcfc85u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfc86  call 0xc9fbc
    X86_AT(c, 0xcfc86u);
    push32(c, 0xcfc8bu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xcfc8bu);
    X86_TICK(c, 11);
    // 0cfc8b  add esp, 0x28
    X86_AT(c, 0xcfc8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0cfc8e  push edi
    X86_AT(c, 0xcfc8eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfc8f  call 0xca100
    X86_AT(c, 0xcfc8fu);
    push32(c, 0xcfc94u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xcfc94u);
    X86_TICK(c, 11);
    // 0cfc94  push 0
    X86_AT(c, 0xcfc94u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cfc96  push 0xd
    X86_AT(c, 0xcfc96u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0cfc98  call 0xcc814
    X86_AT(c, 0xcfc98u);
    push32(c, 0xcfc9du); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xcfc9du);
    X86_TICK(c, 12);
    // 0cfc9d  add esp, 0xc
    X86_AT(c, 0xcfc9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfca0  movzx edx, bl
    X86_AT(c, 0xcfca0u);
    c.r[2] = g8(c, 3);
    // 0cfca3  cmp edx, 0x41
    X86_AT(c, 0xcfca3u);
    (void)x86_sub(c, c.r[2], 0x41u, 0, 4);
    // 0cfca6  je 0xcfcb9
    X86_AT(c, 0xcfca6u);
    if (x86_cc(c, 4)) { goto L_cfcb9; }
    X86_TICK(c, 7);
    // 0cfca8  cmp edx, 0x53
    X86_AT(c, 0xcfca8u);
    (void)x86_sub(c, c.r[2], 0x53u, 0, 4);
    // 0cfcab  je 0xcfcc0
    X86_AT(c, 0xcfcabu);
    if (x86_cc(c, 4)) { goto L_cfcc0; }
    X86_TICK(c, 7);
    // 0cfcad  cmp edx, 0x57
    X86_AT(c, 0xcfcadu);
    (void)x86_sub(c, c.r[2], 0x57u, 0, 4);
    // 0cfcb0  jne 0xcfcc7
    X86_AT(c, 0xcfcb0u);
    if (x86_cc(c, 5)) { goto L_cfcc7; }
    X86_TICK(c, 7);
    // 0cfcb2  call 0xcfb94
    X86_AT(c, 0xcfcb2u);
    push32(c, 0xcfcb7u); x86_call_known(c, 0xcfb94u, f_000cfb94); X86_RET(c, 0xcfcb7u);
    X86_TICK(c, 7);
    // 0cfcb7  jmp 0xcfcd9
    X86_AT(c, 0xcfcb7u);
    goto L_cfcd9;
L_cfcb9:
    X86_TICK(c, 7);
    // 0cfcb9  call 0xcfbc4
    X86_AT(c, 0xcfcb9u);
    push32(c, 0xcfcbeu); x86_call_known(c, 0xcfbc4u, f_000cfbc4); X86_RET(c, 0xcfcbeu);
    X86_TICK(c, 7);
    // 0cfcbe  jmp 0xcfcd9
    X86_AT(c, 0xcfcbeu);
    goto L_cfcd9;
L_cfcc0:
    X86_TICK(c, 7);
    // 0cfcc0  call 0xcfbf4
    X86_AT(c, 0xcfcc0u);
    push32(c, 0xcfcc5u); x86_call_known(c, 0xcfbf4u, f_000cfbf4); X86_RET(c, 0xcfcc5u);
    X86_TICK(c, 7);
    // 0cfcc5  jmp 0xcfcd9
    X86_AT(c, 0xcfcc5u);
    goto L_cfcd9;
L_cfcc7:
    X86_TICK(c, 9);
    // 0cfcc7  push 0x63e8
    X86_AT(c, 0xcfcc7u);
    { uint32_t v = 0x63E8u; push32(c, v); }
    // 0cfccc  call 0xcc7bc
    X86_AT(c, 0xcfcccu);
    push32(c, 0xcfcd1u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcfcd1u);
    X86_TICK(c, 7);
    // 0cfcd1  call 0xcfa84
    X86_AT(c, 0xcfcd1u);
    push32(c, 0xcfcd6u); x86_call_known(c, 0xcfa84u, f_000cfa84); X86_RET(c, 0xcfcd6u);
    X86_TICK(c, 2);
    // 0cfcd6  add esp, 4
    X86_AT(c, 0xcfcd6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cfcd9:
    X86_TICK(c, 12);
    // 0cfcd9  cmp dword ptr [0xb52f8], 5
    X86_AT(c, 0xcfcd9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x5u, 0, 4);
    // 0cfce0  je 0xcfce9
    X86_AT(c, 0xcfce0u);
    if (x86_cc(c, 4)) { goto L_cfce9; }
    X86_TICK(c, 7);
    // 0cfce2  call 0xcc700
    X86_AT(c, 0xcfce2u);
    push32(c, 0xcfce7u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xcfce7u);
    X86_TICK(c, 7);
    // 0cfce7  jmp 0xcfcee
    X86_AT(c, 0xcfce7u);
    goto L_cfcee;
L_cfce9:
    X86_TICK(c, 7);
    // 0cfce9  call 0xe2a34
    X86_AT(c, 0xcfce9u);
    push32(c, 0xcfceeu); x86_call_known(c, 0xe2a34u, f_000e2a34); X86_RET(c, 0xcfceeu);
L_cfcee:
    X86_TICK(c, 9);
    // 0cfcee  push 0x1e
    X86_AT(c, 0xcfceeu);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0cfcf0  call 0xd6660
    X86_AT(c, 0xcfcf0u);
    push32(c, 0xcfcf5u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xcfcf5u);
    X86_TICK(c, 11);
    // 0cfcf5  push 0
    X86_AT(c, 0xcfcf5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cfcf7  push edi
    X86_AT(c, 0xcfcf7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfcf8  call 0xca2d4
    X86_AT(c, 0xcfcf8u);
    push32(c, 0xcfcfdu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xcfcfdu);
    X86_TICK(c, 20);
    // 0cfcfd  add esp, 0xc
    X86_AT(c, 0xcfcfdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfd00  pop edi
    X86_AT(c, 0xcfd00u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cfd01  pop ebx
    X86_AT(c, 0xcfd01u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cfd02  ret 
    X86_AT(c, 0xcfd02u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfc24u, "ran off the end of a function");
}
void f_000cfd04(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0cfd04  push esi
    X86_AT(c, 0xcfd04u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cfd05  push edi
    X86_AT(c, 0xcfd05u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfd06  sub esi, esi
    X86_AT(c, 0xcfd06u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0cfd08  push 0xff
    X86_AT(c, 0xcfd08u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0cfd0d  push 1
    X86_AT(c, 0xcfd0du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cfd0f  call 0xc5df0
    X86_AT(c, 0xcfd0fu);
    push32(c, 0xcfd14u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcfd14u);
    X86_TICK(c, 16);
    // 0cfd14  xchg edi, eax
    X86_AT(c, 0xcfd14u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cfd15  add esp, 8
    X86_AT(c, 0xcfd15u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cfd18  cmp esi, dword ptr [0xaae9c]
    X86_AT(c, 0xcfd18u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xAAE9Cu))), 0, 4);
    // 0cfd1e  jne 0xcfd25
    X86_AT(c, 0xcfd1eu);
    if (x86_cc(c, 5)) { goto L_cfd25; }
    X86_TICK(c, 7);
    // 0cfd20  cmp edi, 0x26
    X86_AT(c, 0xcfd20u);
    (void)x86_sub(c, c.r[7], 0x26u, 0, 4);
    // 0cfd23  jge 0xcfd2a
    X86_AT(c, 0xcfd23u);
    if (x86_cc(c, 13)) { goto L_cfd2a; }
L_cfd25:
    X86_TICK(c, 2);
    // 0cfd25  mov esi, 1
    X86_AT(c, 0xcfd25u);
    c.r[6] = 0x1u;
L_cfd2a:
    X86_TICK(c, 7);
    // 0cfd2a  and esi, esi
    X86_AT(c, 0xcfd2au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cfd2c  jne 0xcfd37
    X86_AT(c, 0xcfd2cu);
    if (x86_cc(c, 5)) { goto L_cfd37; }
    X86_TICK(c, 12);
    // 0cfd2e  cmp byte ptr [0xb02fc], 3
    X86_AT(c, 0xcfd2eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB02FCu))), 0x3u, 0, 1);
    // 0cfd35  je 0xcfd40
    X86_AT(c, 0xcfd35u);
    if (x86_cc(c, 4)) { goto L_cfd40; }
L_cfd37:
    X86_TICK(c, 7);
    // 0cfd37  and esi, esi
    X86_AT(c, 0xcfd37u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cfd39  jne 0xcfd44
    X86_AT(c, 0xcfd39u);
    if (x86_cc(c, 5)) { goto L_cfd44; }
    X86_TICK(c, 7);
    // 0cfd3b  cmp edi, 0x4d
    X86_AT(c, 0xcfd3bu);
    (void)x86_sub(c, c.r[7], 0x4Du, 0, 4);
    // 0cfd3e  jle 0xcfd44
    X86_AT(c, 0xcfd3eu);
    if (x86_cc(c, 14)) { goto L_cfd44; }
L_cfd40:
    X86_TICK(c, 9);
    // 0cfd40  sub eax, eax
    X86_AT(c, 0xcfd40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cfd42  jmp 0xcfd6a
    X86_AT(c, 0xcfd42u);
    goto L_cfd6a;
L_cfd44:
    X86_TICK(c, 9);
    // 0cfd44  push 0x6406
    X86_AT(c, 0xcfd44u);
    { uint32_t v = 0x6406u; push32(c, v); }
    // 0cfd49  call 0xcc7bc
    X86_AT(c, 0xcfd49u);
    push32(c, 0xcfd4eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcfd4eu);
    X86_TICK(c, 9);
    // 0cfd4e  push 0x6408
    X86_AT(c, 0xcfd4eu);
    { uint32_t v = 0x6408u; push32(c, v); }
    // 0cfd53  call 0xcc7bc
    X86_AT(c, 0xcfd53u);
    push32(c, 0xcfd58u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcfd58u);
    X86_TICK(c, 6);
    // 0cfd58  mov dword ptr [0xaae9c], 1
    X86_AT(c, 0xcfd58u);
    wr32((c.sbase[3] + (uint32_t)(0xAAE9Cu)), 0x1u);
    // 0cfd62  mov eax, 1
    X86_AT(c, 0xcfd62u);
    c.r[0] = 0x1u;
    // 0cfd67  add esp, 8
    X86_AT(c, 0xcfd67u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cfd6a:
    X86_TICK(c, 18);
    // 0cfd6a  pop edi
    X86_AT(c, 0xcfd6au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cfd6b  pop esi
    X86_AT(c, 0xcfd6bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cfd6c  ret 
    X86_AT(c, 0xcfd6cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfd04u, "ran off the end of a function");
}
void f_000cfd70(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cfd70  push ebp
    X86_AT(c, 0xcfd70u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cfd71  mov ebp, esp
    X86_AT(c, 0xcfd71u);
    c.r[5] = c.r[4];
    // 0cfd73  push esi
    X86_AT(c, 0xcfd73u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cfd74  push edi
    X86_AT(c, 0xcfd74u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfd75  sub esi, esi
    X86_AT(c, 0xcfd75u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0cfd77  cmp esi, dword ptr [ebp + 8]
    X86_AT(c, 0xcfd77u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0cfd7a  je 0xcfd82
    X86_AT(c, 0xcfd7au);
    if (x86_cc(c, 4)) { goto L_cfd82; }
    X86_TICK(c, 7);
    // 0cfd7c  call 0xcfd04
    X86_AT(c, 0xcfd7cu);
    push32(c, 0xcfd81u); x86_call_known(c, 0xcfd04u, f_000cfd04); X86_RET(c, 0xcfd81u);
    X86_TICK(c, 3);
    // 0cfd81  xchg esi, eax
    X86_AT(c, 0xcfd81u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_cfd82:
    X86_TICK(c, 7);
    // 0cfd82  and esi, esi
    X86_AT(c, 0xcfd82u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cfd84  jne 0xcfe47
    X86_AT(c, 0xcfd84u);
    if (x86_cc(c, 5)) { goto L_cfe47; }
    X86_TICK(c, 9);
    // 0cfd8a  push 0x644c
    X86_AT(c, 0xcfd8au);
    { uint32_t v = 0x644Cu; push32(c, v); }
    // 0cfd8f  call 0xcc7bc
    X86_AT(c, 0xcfd8fu);
    push32(c, 0xcfd94u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcfd94u);
    X86_TICK(c, 14);
    // 0cfd94  add esp, 4
    X86_AT(c, 0xcfd94u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cfd97  cmp dword ptr [0x43eb8], 0
    X86_AT(c, 0xcfd97u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0x0u, 0, 4);
    // 0cfd9e  jne 0xcfdaf
    X86_AT(c, 0xcfd9eu);
    if (x86_cc(c, 5)) { goto L_cfdaf; }
    X86_TICK(c, 9);
    // 0cfda0  push 0x6450
    X86_AT(c, 0xcfda0u);
    { uint32_t v = 0x6450u; push32(c, v); }
    // 0cfda5  call 0xcc7bc
    X86_AT(c, 0xcfda5u);
    push32(c, 0xcfdaau); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcfdaau);
    X86_TICK(c, 9);
    // 0cfdaa  add esp, 4
    X86_AT(c, 0xcfdaau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cfdad  jmp 0xcfdc7
    X86_AT(c, 0xcfdadu);
    goto L_cfdc7;
L_cfdaf:
    X86_TICK(c, 12);
    // 0cfdaf  cmp dword ptr [0x43eb8], 0xffffffff
    X86_AT(c, 0xcfdafu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0xFFFFFFFFu, 0, 4);
    // 0cfdb6  jne 0xcfdc7
    X86_AT(c, 0xcfdb6u);
    if (x86_cc(c, 5)) { goto L_cfdc7; }
    X86_TICK(c, 11);
    // 0cfdb8  push 0x6470
    X86_AT(c, 0xcfdb8u);
    { uint32_t v = 0x6470u; push32(c, v); }
    // 0cfdbd  push 7
    X86_AT(c, 0xcfdbdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfdbf  call 0xc8cdc
    X86_AT(c, 0xcfdbfu);
    push32(c, 0xcfdc4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcfdc4u);
    X86_TICK(c, 2);
    // 0cfdc4  add esp, 8
    X86_AT(c, 0xcfdc4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cfdc7:
    X86_TICK(c, 11);
    // 0cfdc7  push 0xf
    X86_AT(c, 0xcfdc7u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfdc9  push 1
    X86_AT(c, 0xcfdc9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cfdcb  call 0xc5df0
    X86_AT(c, 0xcfdcbu);
    push32(c, 0xcfdd0u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcfdd0u);
    X86_TICK(c, 20);
    // 0cfdd0  xchg edi, eax
    X86_AT(c, 0xcfdd0u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cfdd1  mov eax, dword ptr [edi*4 + 0xa1de8]
    X86_AT(c, 0xcfdd1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA1DE8u)));
    // 0cfdd8  mov al, byte ptr [eax]
    X86_AT(c, 0xcfdd8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0cfdda  push eax
    X86_AT(c, 0xcfddau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfddb  call 0xcf864
    X86_AT(c, 0xcfddbu);
    push32(c, 0xcfde0u); x86_call_known(c, 0xcf864u, f_000cf864); X86_RET(c, 0xcfde0u);
    X86_TICK(c, 9);
    // 0cfde0  add esp, 0xc
    X86_AT(c, 0xcfde0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfde3  and eax, eax
    X86_AT(c, 0xcfde3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cfde5  je 0xcfdf6
    X86_AT(c, 0xcfde5u);
    if (x86_cc(c, 4)) { goto L_cfdf6; }
    X86_TICK(c, 11);
    // 0cfde7  push 0x647c
    X86_AT(c, 0xcfde7u);
    { uint32_t v = 0x647Cu; push32(c, v); }
    // 0cfdec  push 7
    X86_AT(c, 0xcfdecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfdee  call 0xc8cdc
    X86_AT(c, 0xcfdeeu);
    push32(c, 0xcfdf3u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcfdf3u);
    X86_TICK(c, 2);
    // 0cfdf3  add esp, 8
    X86_AT(c, 0xcfdf3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cfdf6:
    X86_TICK(c, 12);
    // 0cfdf6  push dword ptr [edi*4 + 0xa1de8]
    X86_AT(c, 0xcfdf6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA1DE8u))); push32(c, v); }
    // 0cfdfd  call 0xcc884
    X86_AT(c, 0xcfdfdu);
    push32(c, 0xcfe02u); x86_call_known(c, 0xcc884u, f_000cc884); X86_RET(c, 0xcfe02u);
    X86_TICK(c, 9);
    // 0cfe02  add esp, 4
    X86_AT(c, 0xcfe02u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cfe05  cmp eax, 8
    X86_AT(c, 0xcfe05u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0cfe08  jle 0xcfe17
    X86_AT(c, 0xcfe08u);
    if (x86_cc(c, 14)) { goto L_cfe17; }
    X86_TICK(c, 9);
    // 0cfe0a  push 0x6480
    X86_AT(c, 0xcfe0au);
    { uint32_t v = 0x6480u; push32(c, v); }
    // 0cfe0f  call 0xcc7bc
    X86_AT(c, 0xcfe0fu);
    push32(c, 0xcfe14u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcfe14u);
    X86_TICK(c, 2);
    // 0cfe14  add esp, 4
    X86_AT(c, 0xcfe14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cfe17:
    X86_TICK(c, 14);
    // 0cfe17  push dword ptr [edi*4 + 0xa1de8]
    X86_AT(c, 0xcfe17u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA1DE8u))); push32(c, v); }
    // 0cfe1e  push 7
    X86_AT(c, 0xcfe1eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfe20  call 0xc8cdc
    X86_AT(c, 0xcfe20u);
    push32(c, 0xcfe25u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcfe25u);
    X86_TICK(c, 9);
    // 0cfe25  push 0x6484
    X86_AT(c, 0xcfe25u);
    { uint32_t v = 0x6484u; push32(c, v); }
    // 0cfe2a  call 0xcc7bc
    X86_AT(c, 0xcfe2au);
    push32(c, 0xcfe2fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcfe2fu);
    X86_TICK(c, 13);
    // 0cfe2f  add esp, 0xc
    X86_AT(c, 0xcfe2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfe32  mov eax, dword ptr [edi*4 + 0xb0392]
    X86_AT(c, 0xcfe32u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB0392u)));
    // 0cfe39  cmp eax, 0xff
    X86_AT(c, 0xcfe39u);
    (void)x86_sub(c, c.r[0], 0xFFu, 0, 4);
    // 0cfe3e  jge 0xcfe47
    X86_AT(c, 0xcfe3eu);
    if (x86_cc(c, 13)) { goto L_cfe47; }
    X86_TICK(c, 6);
    // 0cfe40  inc dword ptr [edi*4 + 0xb0392]
    X86_AT(c, 0xcfe40u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB0392u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_cfe47:
    X86_TICK(c, 24);
    // 0cfe47  pop edi
    X86_AT(c, 0xcfe47u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cfe48  pop esi
    X86_AT(c, 0xcfe48u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cfe49  leave 
    X86_AT(c, 0xcfe49u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cfe4a  ret 
    X86_AT(c, 0xcfe4au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfd70u, "ran off the end of a function");
}
void f_000cfe4c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cfe4c  push ebp
    X86_AT(c, 0xcfe4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cfe4d  mov ebp, esp
    X86_AT(c, 0xcfe4du);
    c.r[5] = c.r[4];
    // 0cfe4f  push esi
    X86_AT(c, 0xcfe4fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cfe50  push edi
    X86_AT(c, 0xcfe50u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfe51  sub esi, esi
    X86_AT(c, 0xcfe51u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0cfe53  cmp esi, dword ptr [ebp + 8]
    X86_AT(c, 0xcfe53u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0cfe56  je 0xcfe5e
    X86_AT(c, 0xcfe56u);
    if (x86_cc(c, 4)) { goto L_cfe5e; }
    X86_TICK(c, 7);
    // 0cfe58  call 0xcfd04
    X86_AT(c, 0xcfe58u);
    push32(c, 0xcfe5du); x86_call_known(c, 0xcfd04u, f_000cfd04); X86_RET(c, 0xcfe5du);
    X86_TICK(c, 3);
    // 0cfe5d  xchg esi, eax
    X86_AT(c, 0xcfe5du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_cfe5e:
    X86_TICK(c, 7);
    // 0cfe5e  and esi, esi
    X86_AT(c, 0xcfe5eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cfe60  jne 0xcfeae
    X86_AT(c, 0xcfe60u);
    if (x86_cc(c, 5)) { goto L_cfeae; }
    X86_TICK(c, 9);
    // 0cfe62  push 0x6492
    X86_AT(c, 0xcfe62u);
    { uint32_t v = 0x6492u; push32(c, v); }
    // 0cfe67  call 0xcc7bc
    X86_AT(c, 0xcfe67u);
    push32(c, 0xcfe6cu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcfe6cu);
    X86_TICK(c, 11);
    // 0cfe6c  push 0xf
    X86_AT(c, 0xcfe6cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfe6e  push 0x6494
    X86_AT(c, 0xcfe6eu);
    { uint32_t v = 0x6494u; push32(c, v); }
    // 0cfe73  call 0xcc830
    X86_AT(c, 0xcfe73u);
    push32(c, 0xcfe78u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcfe78u);
    X86_TICK(c, 11);
    // 0cfe78  push 0x1f
    X86_AT(c, 0xcfe78u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0cfe7a  push 2
    X86_AT(c, 0xcfe7au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cfe7c  call 0xc5df0
    X86_AT(c, 0xcfe7cu);
    push32(c, 0xcfe81u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcfe81u);
    X86_TICK(c, 16);
    // 0cfe81  xchg edi, eax
    X86_AT(c, 0xcfe81u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cfe82  push 1
    X86_AT(c, 0xcfe82u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cfe84  push edi
    X86_AT(c, 0xcfe84u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfe85  push 7
    X86_AT(c, 0xcfe85u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfe87  call 0xc8cb8
    X86_AT(c, 0xcfe87u);
    push32(c, 0xcfe8cu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xcfe8cu);
    X86_TICK(c, 9);
    // 0cfe8c  push 0x64bc
    X86_AT(c, 0xcfe8cu);
    { uint32_t v = 0x64BCu; push32(c, v); }
    // 0cfe91  call 0xcc7bc
    X86_AT(c, 0xcfe91u);
    push32(c, 0xcfe96u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcfe96u);
    X86_TICK(c, 9);
    // 0cfe96  push 0x64e4
    X86_AT(c, 0xcfe96u);
    { uint32_t v = 0x64E4u; push32(c, v); }
    // 0cfe9b  call 0xcc7bc
    X86_AT(c, 0xcfe9bu);
    push32(c, 0xcfea0u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcfea0u);
    X86_TICK(c, 14);
    // 0cfea0  add dword ptr [0xb0322], edi
    X86_AT(c, 0xcfea0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB0322u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0cfea6  call 0xcc66c
    X86_AT(c, 0xcfea6u);
    push32(c, 0xcfeabu); x86_call_known(c, 0xcc66cu, f_000cc66c); X86_RET(c, 0xcfeabu);
    X86_TICK(c, 2);
    // 0cfeab  add esp, 0x28
    X86_AT(c, 0xcfeabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_cfeae:
    X86_TICK(c, 24);
    // 0cfeae  pop edi
    X86_AT(c, 0xcfeaeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cfeaf  pop esi
    X86_AT(c, 0xcfeafu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cfeb0  leave 
    X86_AT(c, 0xcfeb0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cfeb1  ret 
    X86_AT(c, 0xcfeb1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfe4cu, "ran off the end of a function");
}
void f_000cfeb4(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cfeb4  push ebp
    X86_AT(c, 0xcfeb4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cfeb5  mov ebp, esp
    X86_AT(c, 0xcfeb5u);
    c.r[5] = c.r[4];
    // 0cfeb7  push esi
    X86_AT(c, 0xcfeb7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cfeb8  push edi
    X86_AT(c, 0xcfeb8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfeb9  sub esi, esi
    X86_AT(c, 0xcfeb9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0cfebb  cmp esi, dword ptr [ebp + 8]
    X86_AT(c, 0xcfebbu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0cfebe  je 0xcfec6
    X86_AT(c, 0xcfebeu);
    if (x86_cc(c, 4)) { goto L_cfec6; }
    X86_TICK(c, 7);
    // 0cfec0  call 0xcfd04
    X86_AT(c, 0xcfec0u);
    push32(c, 0xcfec5u); x86_call_known(c, 0xcfd04u, f_000cfd04); X86_RET(c, 0xcfec5u);
    X86_TICK(c, 3);
    // 0cfec5  xchg esi, eax
    X86_AT(c, 0xcfec5u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_cfec6:
    X86_TICK(c, 7);
    // 0cfec6  and esi, esi
    X86_AT(c, 0xcfec6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cfec8  jne 0xcff45
    X86_AT(c, 0xcfec8u);
    if (x86_cc(c, 5)) { goto L_cff45; }
    X86_TICK(c, 9);
    // 0cfece  push 0x64f0
    X86_AT(c, 0xcfeceu);
    { uint32_t v = 0x64F0u; push32(c, v); }
    // 0cfed3  call 0xcc7bc
    X86_AT(c, 0xcfed3u);
    push32(c, 0xcfed8u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcfed8u);
    X86_TICK(c, 11);
    // 0cfed8  push 0x64f4
    X86_AT(c, 0xcfed8u);
    { uint32_t v = 0x64F4u; push32(c, v); }
    // 0cfedd  push 7
    X86_AT(c, 0xcfeddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfedf  call 0xc8cdc
    X86_AT(c, 0xcfedfu);
    push32(c, 0xcfee4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcfee4u);
    X86_TICK(c, 11);
    // 0cfee4  push 5
    X86_AT(c, 0xcfee4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cfee6  push 1
    X86_AT(c, 0xcfee6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cfee8  call 0xc5df0
    X86_AT(c, 0xcfee8u);
    push32(c, 0xcfeedu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcfeedu);
    X86_TICK(c, 12);
    // 0cfeed  xchg edi, eax
    X86_AT(c, 0xcfeedu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cfeee  add esp, 0x14
    X86_AT(c, 0xcfeeeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cfef1  cmp edi, 4
    X86_AT(c, 0xcfef1u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0cfef4  jle 0xcfeff
    X86_AT(c, 0xcfef4u);
    if (x86_cc(c, 14)) { goto L_cfeff; }
    X86_TICK(c, 11);
    // 0cfef6  push 0xf
    X86_AT(c, 0xcfef6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfef8  push 0x651c
    X86_AT(c, 0xcfef8u);
    { uint32_t v = 0x651Cu; push32(c, v); }
    // 0cfefd  jmp 0xcff0f
    X86_AT(c, 0xcfefdu);
    goto L_cff0f;
L_cfeff:
    X86_TICK(c, 12);
    // 0cfeff  cmp dword ptr [0x43eb8], 0
    X86_AT(c, 0xcfeffu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0x0u, 0, 4);
    // 0cff06  jne 0xcff17
    X86_AT(c, 0xcff06u);
    if (x86_cc(c, 5)) { goto L_cff17; }
    X86_TICK(c, 4);
    // 0cff08  push 0xf
    X86_AT(c, 0xcff08u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cff0a  push 0x6520
    X86_AT(c, 0xcff0au);
    { uint32_t v = 0x6520u; push32(c, v); }
L_cff0f:
    X86_TICK(c, 7);
    // 0cff0f  call 0xcc830
    X86_AT(c, 0xcff0fu);
    push32(c, 0xcff14u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcff14u);
    X86_TICK(c, 2);
    // 0cff14  add esp, 8
    X86_AT(c, 0xcff14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cff17:
    X86_TICK(c, 12);
    // 0cff17  push dword ptr [edi*4 + 0xa1e70]
    X86_AT(c, 0xcff17u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA1E70u))); push32(c, v); }
    // 0cff1e  call 0xcc7bc
    X86_AT(c, 0xcff1eu);
    push32(c, 0xcff23u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcff23u);
    X86_TICK(c, 9);
    // 0cff23  push 0x6524
    X86_AT(c, 0xcff23u);
    { uint32_t v = 0x6524u; push32(c, v); }
    // 0cff28  call 0xcc7bc
    X86_AT(c, 0xcff28u);
    push32(c, 0xcff2du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcff2du);
    X86_TICK(c, 13);
    // 0cff2d  add esp, 8
    X86_AT(c, 0xcff2du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cff30  mov eax, dword ptr [edi*4 + 0xb037a]
    X86_AT(c, 0xcff30u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB037Au)));
    // 0cff37  cmp eax, 0xff
    X86_AT(c, 0xcff37u);
    (void)x86_sub(c, c.r[0], 0xFFu, 0, 4);
    // 0cff3c  jge 0xcff45
    X86_AT(c, 0xcff3cu);
    if (x86_cc(c, 13)) { goto L_cff45; }
    X86_TICK(c, 6);
    // 0cff3e  inc dword ptr [edi*4 + 0xb037a]
    X86_AT(c, 0xcff3eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB037Au)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_cff45:
    X86_TICK(c, 24);
    // 0cff45  pop edi
    X86_AT(c, 0xcff45u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cff46  pop esi
    X86_AT(c, 0xcff46u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cff47  leave 
    X86_AT(c, 0xcff47u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cff48  ret 
    X86_AT(c, 0xcff48u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfeb4u, "ran off the end of a function");
}
void f_000cff4c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0cff4c  push edi
    X86_AT(c, 0xcff4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cff4d  push 0xf
    X86_AT(c, 0xcff4du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cff4f  push 0x6534
    X86_AT(c, 0xcff4fu);
    { uint32_t v = 0x6534u; push32(c, v); }
    // 0cff54  call 0xcc830
    X86_AT(c, 0xcff54u);
    push32(c, 0xcff59u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcff59u);
    X86_TICK(c, 13);
    // 0cff59  add esp, 8
    X86_AT(c, 0xcff59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cff5c  mov eax, dword ptr [0xb52f8]
    X86_AT(c, 0xcff5cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB52F8u)));
    // 0cff61  cmp eax, 1
    X86_AT(c, 0xcff61u);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0cff64  je 0xcff72
    X86_AT(c, 0xcff64u);
    if (x86_cc(c, 4)) { goto L_cff72; }
    X86_TICK(c, 7);
    // 0cff66  cmp eax, 2
    X86_AT(c, 0xcff66u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0cff69  je 0xcff72
    X86_AT(c, 0xcff69u);
    if (x86_cc(c, 4)) { goto L_cff72; }
    X86_TICK(c, 9);
    // 0cff6b  push 0x6548
    X86_AT(c, 0xcff6bu);
    { uint32_t v = 0x6548u; push32(c, v); }
    // 0cff70  jmp 0xcffaf
    X86_AT(c, 0xcff70u);
    goto L_cffaf;
L_cff72:
    X86_TICK(c, 15);
    // 0cff72  movzx edi, byte ptr [0x92494]
    X86_AT(c, 0xcff72u);
    c.r[7] = rd8((c.sbase[3] + (uint32_t)(0x92494u)));
    // 0cff79  mov edx, edi
    X86_AT(c, 0xcff79u);
    c.r[2] = c.r[7];
    // 0cff7b  cmp edx, 0x44
    X86_AT(c, 0xcff7bu);
    (void)x86_sub(c, c.r[2], 0x44u, 0, 4);
    // 0cff7e  je 0xcff8c
    X86_AT(c, 0xcff7eu);
    if (x86_cc(c, 4)) { goto L_cff8c; }
    X86_TICK(c, 7);
    // 0cff80  cmp edx, 0x46
    X86_AT(c, 0xcff80u);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0cff83  je 0xcff9e
    X86_AT(c, 0xcff83u);
    if (x86_cc(c, 4)) { goto L_cff9e; }
    X86_TICK(c, 7);
    // 0cff85  cmp edx, 0x48
    X86_AT(c, 0xcff85u);
    (void)x86_sub(c, c.r[2], 0x48u, 0, 4);
    // 0cff88  je 0xcff95
    X86_AT(c, 0xcff88u);
    if (x86_cc(c, 4)) { goto L_cff95; }
    X86_TICK(c, 7);
    // 0cff8a  jmp 0xcffaa
    X86_AT(c, 0xcff8au);
    goto L_cffaa;
L_cff8c:
    X86_TICK(c, 9);
    // 0cff8c  push 1
    X86_AT(c, 0xcff8cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cff8e  call 0xcfeb4
    X86_AT(c, 0xcff8eu);
    push32(c, 0xcff93u); x86_call_known(c, 0xcfeb4u, f_000cfeb4); X86_RET(c, 0xcff93u);
    X86_TICK(c, 7);
    // 0cff93  jmp 0xcffa5
    X86_AT(c, 0xcff93u);
    goto L_cffa5;
L_cff95:
    X86_TICK(c, 9);
    // 0cff95  push 1
    X86_AT(c, 0xcff95u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cff97  call 0xcfd70
    X86_AT(c, 0xcff97u);
    push32(c, 0xcff9cu); x86_call_known(c, 0xcfd70u, f_000cfd70); X86_RET(c, 0xcff9cu);
    X86_TICK(c, 7);
    // 0cff9c  jmp 0xcffa5
    X86_AT(c, 0xcff9cu);
    goto L_cffa5;
L_cff9e:
    X86_TICK(c, 9);
    // 0cff9e  push 1
    X86_AT(c, 0xcff9eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cffa0  call 0xcfe4c
    X86_AT(c, 0xcffa0u);
    push32(c, 0xcffa5u); x86_call_known(c, 0xcfe4cu, f_000cfe4c); X86_RET(c, 0xcffa5u);
L_cffa5:
    X86_TICK(c, 9);
    // 0cffa5  add esp, 4
    X86_AT(c, 0xcffa5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cffa8  jmp 0xcffbe
    X86_AT(c, 0xcffa8u);
    goto L_cffbe;
L_cffaa:
    X86_TICK(c, 2);
    // 0cffaa  push 0x6550
    X86_AT(c, 0xcffaau);
    { uint32_t v = 0x6550u; push32(c, v); }
L_cffaf:
    X86_TICK(c, 7);
    // 0cffaf  call 0xcc7bc
    X86_AT(c, 0xcffafu);
    push32(c, 0xcffb4u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcffb4u);
    X86_TICK(c, 9);
    // 0cffb4  push 1
    X86_AT(c, 0xcffb4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cffb6  call 0xc5ca4
    X86_AT(c, 0xcffb6u);
    push32(c, 0xcffbbu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcffbbu);
    X86_TICK(c, 2);
    // 0cffbb  add esp, 8
    X86_AT(c, 0xcffbbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cffbe:
    X86_TICK(c, 14);
    // 0cffbe  pop edi
    X86_AT(c, 0xcffbeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cffbf  ret 
    X86_AT(c, 0xcffbfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcff4cu, "ran off the end of a function");
}
void f_000cffc4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cffc4  push 0x658c
    X86_AT(c, 0xcffc4u);
    { uint32_t v = 0x658Cu; push32(c, v); }
    // 0cffc9  push 7
    X86_AT(c, 0xcffc9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cffcb  call 0xc8cdc
    X86_AT(c, 0xcffcbu);
    push32(c, 0xcffd0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcffd0u);
    X86_TICK(c, 9);
    // 0cffd0  push 7
    X86_AT(c, 0xcffd0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cffd2  call 0xca3cc
    X86_AT(c, 0xcffd2u);
    push32(c, 0xcffd7u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xcffd7u);
    X86_TICK(c, 7);
    // 0cffd7  call 0xcf604
    X86_AT(c, 0xcffd7u);
    push32(c, 0xcffdcu); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xcffdcu);
    X86_TICK(c, 12);
    // 0cffdc  add esp, 0xc
    X86_AT(c, 0xcffdcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cffdf  ret 
    X86_AT(c, 0xcffdfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcffc4u, "ran off the end of a function");
}
void f_000cffe0(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cffe0  push 0x65bc
    X86_AT(c, 0xcffe0u);
    { uint32_t v = 0x65BCu; push32(c, v); }
    // 0cffe5  push 7
    X86_AT(c, 0xcffe5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cffe7  call 0xc8cdc
    X86_AT(c, 0xcffe7u);
    push32(c, 0xcffecu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcffecu);
    X86_TICK(c, 9);
    // 0cffec  push 7
    X86_AT(c, 0xcffecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cffee  call 0xca3cc
    X86_AT(c, 0xcffeeu);
    push32(c, 0xcfff3u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xcfff3u);
    X86_TICK(c, 7);
    // 0cfff3  call 0xcf604
    X86_AT(c, 0xcfff3u);
    push32(c, 0xcfff8u); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xcfff8u);
    X86_TICK(c, 12);
    // 0cfff8  add esp, 0xc
    X86_AT(c, 0xcfff8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfffb  ret 
    X86_AT(c, 0xcfffbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcffe0u, "ran off the end of a function");
}
void f_000cfffc(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cfffc  push 0x65f0
    X86_AT(c, 0xcfffcu);
    { uint32_t v = 0x65F0u; push32(c, v); }
    // 0d0001  push 7
    X86_AT(c, 0xd0001u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0003  call 0xc8cdc
    X86_AT(c, 0xd0003u);
    push32(c, 0xd0008u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0008u);
    X86_TICK(c, 9);
    // 0d0008  push 7
    X86_AT(c, 0xd0008u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d000a  call 0xca3cc
    X86_AT(c, 0xd000au);
    push32(c, 0xd000fu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd000fu);
    X86_TICK(c, 9);
    // 0d000f  push 1
    X86_AT(c, 0xd000fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0011  call 0xc5ca4
    X86_AT(c, 0xd0011u);
    push32(c, 0xd0016u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd0016u);
    X86_TICK(c, 7);
    // 0d0016  call 0xcf604
    X86_AT(c, 0xd0016u);
    push32(c, 0xd001bu); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd001bu);
    X86_TICK(c, 12);
    // 0d001b  add esp, 0x10
    X86_AT(c, 0xd001bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d001e  ret 
    X86_AT(c, 0xd001eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfffcu, "ran off the end of a function");
}
void f_000d0020(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d0020  mov cl, byte ptr [esp + 4]
    X86_AT(c, 0xd0020u);
    s8(c, 1, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 0d0024  cmp cl, 0x30
    X86_AT(c, 0xd0024u);
    (void)x86_sub(c, g8(c, 1), 0x30u, 0, 1);
    // 0d0027  jb 0xd0032
    X86_AT(c, 0xd0027u);
    if (x86_cc(c, 2)) { goto L_d0032; }
    X86_TICK(c, 7);
    // 0d0029  cmp cl, 0x39
    X86_AT(c, 0xd0029u);
    (void)x86_sub(c, g8(c, 1), 0x39u, 0, 1);
    // 0d002c  ja 0xd0032
    X86_AT(c, 0xd002cu);
    if (x86_cc(c, 7)) { goto L_d0032; }
    X86_TICK(c, 9);
    // 0d002e  mov al, 1
    X86_AT(c, 0xd002eu);
    s8(c, 0, 0x1u);
    // 0d0030  jmp 0xd0034
    X86_AT(c, 0xd0030u);
    goto L_d0034;
L_d0032:
    X86_TICK(c, 2);
    // 0d0032  sub eax, eax
    X86_AT(c, 0xd0032u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d0034:
    X86_TICK(c, 13);
    // 0d0034  movzx eax, al
    X86_AT(c, 0xd0034u);
    c.r[0] = g8(c, 0);
    // 0d0037  ret 
    X86_AT(c, 0xd0037u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0020u, "ran off the end of a function");
}
void f_000d0038(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0d0038  push ebp
    X86_AT(c, 0xd0038u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d0039  mov ebp, esp
    X86_AT(c, 0xd0039u);
    c.r[5] = c.r[4];
    // 0d003b  sub esp, 8
    X86_AT(c, 0xd003bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d003e  push ebx
    X86_AT(c, 0xd003eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d003f  push esi
    X86_AT(c, 0xd003fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0040  push edi
    X86_AT(c, 0xd0040u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0041  sub edi, edi
    X86_AT(c, 0xd0041u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d0043  mov esi, edi
    X86_AT(c, 0xd0043u);
    c.r[6] = c.r[7];
    // 0d0045  mov dword ptr [ebp - 4], edi
    X86_AT(c, 0xd0045u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[7]);
L_d0048:
    X86_TICK(c, 9);
    // 0d0048  push 7
    X86_AT(c, 0xd0048u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d004a  call 0xc81e4
    X86_AT(c, 0xd004au);
    push32(c, 0xd004fu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd004fu);
    X86_TICK(c, 12);
    // 0d004f  add esp, 4
    X86_AT(c, 0xd004fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0052  xchg ebx, eax
    X86_AT(c, 0xd0052u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d0053  and bl, bl
    X86_AT(c, 0xd0053u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d0055  je 0xd0048
    X86_AT(c, 0xd0055u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd0048u); goto L_d0048; }
    X86_TICK(c, 7);
    // 0d0057  cmp bl, 1
    X86_AT(c, 0xd0057u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d005a  je 0xd00b8
    X86_AT(c, 0xd005au);
    if (x86_cc(c, 4)) { goto L_d00b8; }
    X86_TICK(c, 7);
    // 0d0060  cmp bl, 3
    X86_AT(c, 0xd0060u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d0063  je 0xd00b8
    X86_AT(c, 0xd0063u);
    if (x86_cc(c, 4)) { goto L_d00b8; }
    X86_TICK(c, 12);
    // 0d0065  movzx ebx, bl
    X86_AT(c, 0xd0065u);
    c.r[3] = g8(c, 3);
    // 0d0068  push ebx
    X86_AT(c, 0xd0068u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0069  call 0xd0020
    X86_AT(c, 0xd0069u);
    push32(c, 0xd006eu); x86_call_known(c, 0xd0020u, f_000d0020); X86_RET(c, 0xd006eu);
    X86_TICK(c, 9);
    // 0d006e  add esp, 4
    X86_AT(c, 0xd006eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0071  and eax, eax
    X86_AT(c, 0xd0071u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d0073  je 0xd0092
    X86_AT(c, 0xd0073u);
    if (x86_cc(c, 4)) { goto L_d0092; }
    X86_TICK(c, 7);
    // 0d0075  cmp bl, 0x30
    X86_AT(c, 0xd0075u);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0d0078  jne 0xd007e
    X86_AT(c, 0xd0078u);
    if (x86_cc(c, 5)) { goto L_d007e; }
    X86_TICK(c, 7);
    // 0d007a  and esi, esi
    X86_AT(c, 0xd007au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d007c  je 0xd0092
    X86_AT(c, 0xd007cu);
    if (x86_cc(c, 4)) { goto L_d0092; }
L_d007e:
    X86_TICK(c, 13);
    // 0d007e  push 0xf
    X86_AT(c, 0xd007eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0080  push ebx
    X86_AT(c, 0xd0080u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0081  push 7
    X86_AT(c, 0xd0081u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0083  call 0xcc7dc
    X86_AT(c, 0xd0083u);
    push32(c, 0xd0088u); x86_call_known(c, 0xcc7dcu, f_000cc7dc); X86_RET(c, 0xd0088u);
    X86_TICK(c, 13);
    // 0d0088  mov byte ptr [ebp + esi*1 - 8], bl
    X86_AT(c, 0xd0088u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFF8u)), g8(c, 3));
    // 0d008c  inc esi
    X86_AT(c, 0xd008cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d008d  add esp, 0xc
    X86_AT(c, 0xd008du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d0090  jmp 0xd00a3
    X86_AT(c, 0xd0090u);
    goto L_d00a3;
L_d0092:
    X86_TICK(c, 7);
    // 0d0092  cmp bl, 8
    X86_AT(c, 0xd0092u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 0d0095  je 0xd009c
    X86_AT(c, 0xd0095u);
    if (x86_cc(c, 4)) { goto L_d009c; }
    X86_TICK(c, 7);
    // 0d0097  cmp bl, 1
    X86_AT(c, 0xd0097u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d009a  jne 0xd00a3
    X86_AT(c, 0xd009au);
    if (x86_cc(c, 5)) { goto L_d00a3; }
L_d009c:
    X86_TICK(c, 7);
    // 0d009c  and esi, esi
    X86_AT(c, 0xd009cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d009e  je 0xd00a1
    X86_AT(c, 0xd009eu);
    if (x86_cc(c, 4)) { goto L_d00a1; }
    X86_TICK(c, 2);
    // 0d00a0  dec esi
    X86_AT(c, 0xd00a0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d00a1:
    X86_TICK(c, 2);
    // 0d00a1  mov bl, 0x30
    X86_AT(c, 0xd00a1u);
    s8(c, 3, 0x30u);
L_d00a3:
    X86_TICK(c, 7);
    // 0d00a3  cmp esi, 4
    X86_AT(c, 0xd00a3u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0d00a6  jge 0xd00b8
    X86_AT(c, 0xd00a6u);
    if (x86_cc(c, 13)) { goto L_d00b8; }
    X86_TICK(c, 12);
    // 0d00a8  movzx ebx, bl
    X86_AT(c, 0xd00a8u);
    c.r[3] = g8(c, 3);
    // 0d00ab  push ebx
    X86_AT(c, 0xd00abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d00ac  call 0xd0020
    X86_AT(c, 0xd00acu);
    push32(c, 0xd00b1u); x86_call_known(c, 0xd0020u, f_000d0020); X86_RET(c, 0xd00b1u);
    X86_TICK(c, 9);
    // 0d00b1  add esp, 4
    X86_AT(c, 0xd00b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d00b4  and eax, eax
    X86_AT(c, 0xd00b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d00b6  jne 0xd0048
    X86_AT(c, 0xd00b6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd0048u); goto L_d0048; }
L_d00b8:
    X86_TICK(c, 7);
    // 0d00b8  cmp bl, 1
    X86_AT(c, 0xd00b8u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d00bb  je 0xd00c2
    X86_AT(c, 0xd00bbu);
    if (x86_cc(c, 4)) { goto L_d00c2; }
    X86_TICK(c, 7);
    // 0d00bd  cmp bl, 3
    X86_AT(c, 0xd00bdu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d00c0  jne 0xd00d3
    X86_AT(c, 0xd00c0u);
    if (x86_cc(c, 5)) { goto L_d00d3; }
L_d00c2:
    X86_TICK(c, 9);
    // 0d00c2  push 0x6640
    X86_AT(c, 0xd00c2u);
    { uint32_t v = 0x6640u; push32(c, v); }
    // 0d00c7  call 0xcc7bc
    X86_AT(c, 0xd00c7u);
    push32(c, 0xd00ccu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd00ccu);
    X86_TICK(c, 11);
    // 0d00cc  sub eax, eax
    X86_AT(c, 0xd00ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d00ce  add esp, 4
    X86_AT(c, 0xd00ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d00d1  jmp 0xd0103
    X86_AT(c, 0xd00d1u);
    goto L_d0103;
L_d00d3:
    X86_TICK(c, 9);
    // 0d00d3  dec esi
    X86_AT(c, 0xd00d3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0d00d4  and esi, esi
    X86_AT(c, 0xd00d4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d00d6  jl 0xd0101
    X86_AT(c, 0xd00d6u);
    if (x86_cc(c, 12)) { goto L_d0101; }
    X86_TICK(c, 17);
    // 0d00d8  movzx eax, byte ptr [ebp + esi*1 - 8]
    X86_AT(c, 0xd00d8u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFF8u)));
    // 0d00dd  push eax
    X86_AT(c, 0xd00ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d00de  mov edx, eax
    X86_AT(c, 0xd00deu);
    c.r[2] = c.r[0];
    // 0d00e0  call 0xd0020
    X86_AT(c, 0xd00e0u);
    push32(c, 0xd00e5u); x86_call_known(c, 0xd0020u, f_000d0020); X86_RET(c, 0xd00e5u);
    X86_TICK(c, 9);
    // 0d00e5  add esp, 4
    X86_AT(c, 0xd00e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d00e8  and eax, eax
    X86_AT(c, 0xd00e8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d00ea  je 0xd0101
    X86_AT(c, 0xd00eau);
    if (x86_cc(c, 4)) { goto L_d0101; }
    X86_TICK(c, 43);
    // 0d00ec  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd00ecu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d00ef  sub edx, 0x30
    X86_AT(c, 0xd00efu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0d00f2  imul edx, dword ptr [eax*4 + 0xafec4]
    X86_AT(c, 0xd00f2u);
    c.r[2] = x86_imul2(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAFEC4u))), 4);
    // 0d00fa  add edi, edx
    X86_AT(c, 0xd00fau);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 0d00fc  inc dword ptr [ebp - 4]
    X86_AT(c, 0xd00fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d00ff  jmp 0xd00d3
    X86_AT(c, 0xd00ffu);
    X86_POLL(c, 0xd00d3u); goto L_d00d3;
L_d0101:
    X86_TICK(c, 2);
    // 0d0101  mov eax, edi
    X86_AT(c, 0xd0101u);
    c.r[0] = c.r[7];
L_d0103:
    X86_TICK(c, 28);
    // 0d0103  pop edi
    X86_AT(c, 0xd0103u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d0104  pop esi
    X86_AT(c, 0xd0104u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d0105  pop ebx
    X86_AT(c, 0xd0105u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d0106  leave 
    X86_AT(c, 0xd0106u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d0107  ret 
    X86_AT(c, 0xd0107u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0038u, "ran off the end of a function");
}
void f_000d0108(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0d0108  push ebp
    X86_AT(c, 0xd0108u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d0109  mov ebp, esp
    X86_AT(c, 0xd0109u);
    c.r[5] = c.r[4];
    // 0d010b  push edi
    X86_AT(c, 0xd010bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d010c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd010cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d010f  push 4
    X86_AT(c, 0xd010fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0111  call 0xca254
    X86_AT(c, 0xd0111u);
    push32(c, 0xd0116u); x86_call_known(c, 0xca254u, f_000ca254); X86_RET(c, 0xd0116u);
    X86_TICK(c, 7);
    // 0d0116  call 0xd1754
    X86_AT(c, 0xd0116u);
    push32(c, 0xd011bu); x86_call_known(c, 0xd1754u, f_000d1754); X86_RET(c, 0xd011bu);
    X86_TICK(c, 9);
    // 0d011b  push 4
    X86_AT(c, 0xd011bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d011d  call 0xca0a0
    X86_AT(c, 0xd011du);
    push32(c, 0xd0122u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd0122u);
    X86_TICK(c, 9);
    // 0d0122  add esp, 8
    X86_AT(c, 0xd0122u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d0125  and edi, edi
    X86_AT(c, 0xd0125u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d0127  je 0xd0156
    X86_AT(c, 0xd0127u);
    if (x86_cc(c, 4)) { goto L_d0156; }
    X86_TICK(c, 11);
    // 0d0129  push 1
    X86_AT(c, 0xd0129u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d012b  push 0
    X86_AT(c, 0xd012bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d012d  call 0xcc814
    X86_AT(c, 0xd012du);
    push32(c, 0xd0132u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0132u);
    X86_TICK(c, 11);
    // 0d0132  push 0x6644
    X86_AT(c, 0xd0132u);
    { uint32_t v = 0x6644u; push32(c, v); }
    // 0d0137  push 4
    X86_AT(c, 0xd0137u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0139  call 0xc8cdc
    X86_AT(c, 0xd0139u);
    push32(c, 0xd013eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd013eu);
    X86_TICK(c, 11);
    // 0d013e  push 2
    X86_AT(c, 0xd013eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0140  push 0
    X86_AT(c, 0xd0140u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0142  call 0xcc814
    X86_AT(c, 0xd0142u);
    push32(c, 0xd0147u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0147u);
    X86_TICK(c, 11);
    // 0d0147  push 0x6680
    X86_AT(c, 0xd0147u);
    { uint32_t v = 0x6680u; push32(c, v); }
    // 0d014c  push 4
    X86_AT(c, 0xd014cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d014e  call 0xc8cdc
    X86_AT(c, 0xd014eu);
    push32(c, 0xd0153u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0153u);
    X86_TICK(c, 2);
    // 0d0153  add esp, 0x20
    X86_AT(c, 0xd0153u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_d0156:
    X86_TICK(c, 9);
    // 0d0156  mov edx, edi
    X86_AT(c, 0xd0156u);
    c.r[2] = c.r[7];
    // 0d0158  cmp edx, 8
    X86_AT(c, 0xd0158u);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0d015b  ja 0xd06b1
    X86_AT(c, 0xd015bu);
    if (x86_cc(c, 7)) { goto L_d06b1; }
    X86_TICK(c, 7);
    // 0d0161  jmp dword ptr cs:[edx*4 + 0xd0169]
    X86_AT(c, 0xd0161u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD0169u)));
      switch (t) {
      case 0xd018du: goto L_d018d;
      case 0xd01f4u: goto L_d01f4;
      case 0xd0268u: goto L_d0268;
      case 0xd02adu: goto L_d02ad;
      case 0xd0341u: goto L_d0341;
      case 0xd0373u: goto L_d0373;
      case 0xd03b0u: goto L_d03b0;
      case 0xd040cu: goto L_d040c;
      case 0xd0453u: goto L_d0453;
      default: x86_jump(c, t); return; } }
L_d018d:
    X86_TICK(c, 11);
    // 0d018d  push 3
    X86_AT(c, 0xd018du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d018f  push 0
    X86_AT(c, 0xd018fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0191  call 0xcc814
    X86_AT(c, 0xd0191u);
    push32(c, 0xd0196u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0196u);
    X86_TICK(c, 11);
    // 0d0196  push 0x668c
    X86_AT(c, 0xd0196u);
    { uint32_t v = 0x668Cu; push32(c, v); }
    // 0d019b  push 4
    X86_AT(c, 0xd019bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d019d  call 0xc8cdc
    X86_AT(c, 0xd019du);
    push32(c, 0xd01a2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd01a2u);
    X86_TICK(c, 11);
    // 0d01a2  push 4
    X86_AT(c, 0xd01a2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d01a4  push 0
    X86_AT(c, 0xd01a4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d01a6  call 0xcc814
    X86_AT(c, 0xd01a6u);
    push32(c, 0xd01abu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd01abu);
    X86_TICK(c, 11);
    // 0d01ab  push 0x66c8
    X86_AT(c, 0xd01abu);
    { uint32_t v = 0x66C8u; push32(c, v); }
    // 0d01b0  push 4
    X86_AT(c, 0xd01b0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d01b2  call 0xc8cdc
    X86_AT(c, 0xd01b2u);
    push32(c, 0xd01b7u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd01b7u);
    X86_TICK(c, 11);
    // 0d01b7  push 5
    X86_AT(c, 0xd01b7u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d01b9  push 0
    X86_AT(c, 0xd01b9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d01bb  call 0xcc814
    X86_AT(c, 0xd01bbu);
    push32(c, 0xd01c0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd01c0u);
    X86_TICK(c, 11);
    // 0d01c0  push 0x66fc
    X86_AT(c, 0xd01c0u);
    { uint32_t v = 0x66FCu; push32(c, v); }
    // 0d01c5  push 4
    X86_AT(c, 0xd01c5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d01c7  call 0xc8cdc
    X86_AT(c, 0xd01c7u);
    push32(c, 0xd01ccu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd01ccu);
    X86_TICK(c, 11);
    // 0d01cc  push 6
    X86_AT(c, 0xd01ccu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d01ce  push 0
    X86_AT(c, 0xd01ceu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d01d0  call 0xcc814
    X86_AT(c, 0xd01d0u);
    push32(c, 0xd01d5u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd01d5u);
    X86_TICK(c, 11);
    // 0d01d5  push 0x6738
    X86_AT(c, 0xd01d5u);
    { uint32_t v = 0x6738u; push32(c, v); }
    // 0d01da  push 4
    X86_AT(c, 0xd01dau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d01dc  call 0xc8cdc
    X86_AT(c, 0xd01dcu);
    push32(c, 0xd01e1u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd01e1u);
    X86_TICK(c, 13);
    // 0d01e1  add esp, 0x40
    X86_AT(c, 0xd01e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d01e4  push 7
    X86_AT(c, 0xd01e4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d01e6  push 0
    X86_AT(c, 0xd01e6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d01e8  call 0xcc814
    X86_AT(c, 0xd01e8u);
    push32(c, 0xd01edu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd01edu);
    X86_TICK(c, 9);
    // 0d01ed  push 0x6758
    X86_AT(c, 0xd01edu);
    { uint32_t v = 0x6758u; push32(c, v); }
    // 0d01f2  jmp 0xd0259
    X86_AT(c, 0xd01f2u);
    goto L_d0259;
L_d01f4:
    X86_TICK(c, 11);
    // 0d01f4  push 3
    X86_AT(c, 0xd01f4u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d01f6  push 0
    X86_AT(c, 0xd01f6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d01f8  call 0xcc814
    X86_AT(c, 0xd01f8u);
    push32(c, 0xd01fdu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd01fdu);
    X86_TICK(c, 11);
    // 0d01fd  push 0x6768
    X86_AT(c, 0xd01fdu);
    { uint32_t v = 0x6768u; push32(c, v); }
    // 0d0202  push 4
    X86_AT(c, 0xd0202u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0204  call 0xc8cdc
    X86_AT(c, 0xd0204u);
    push32(c, 0xd0209u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0209u);
    X86_TICK(c, 11);
    // 0d0209  push 4
    X86_AT(c, 0xd0209u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d020b  push 0
    X86_AT(c, 0xd020bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d020d  call 0xcc814
    X86_AT(c, 0xd020du);
    push32(c, 0xd0212u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0212u);
    X86_TICK(c, 11);
    // 0d0212  push 0x679c
    X86_AT(c, 0xd0212u);
    { uint32_t v = 0x679Cu; push32(c, v); }
    // 0d0217  push 4
    X86_AT(c, 0xd0217u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0219  call 0xc8cdc
    X86_AT(c, 0xd0219u);
    push32(c, 0xd021eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd021eu);
    X86_TICK(c, 11);
    // 0d021e  push 5
    X86_AT(c, 0xd021eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d0220  push 0
    X86_AT(c, 0xd0220u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0222  call 0xcc814
    X86_AT(c, 0xd0222u);
    push32(c, 0xd0227u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0227u);
    X86_TICK(c, 11);
    // 0d0227  push 0x67d8
    X86_AT(c, 0xd0227u);
    { uint32_t v = 0x67D8u; push32(c, v); }
    // 0d022c  push 4
    X86_AT(c, 0xd022cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d022e  call 0xc8cdc
    X86_AT(c, 0xd022eu);
    push32(c, 0xd0233u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0233u);
    X86_TICK(c, 11);
    // 0d0233  push 6
    X86_AT(c, 0xd0233u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0235  push 0
    X86_AT(c, 0xd0235u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0237  call 0xcc814
    X86_AT(c, 0xd0237u);
    push32(c, 0xd023cu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd023cu);
    X86_TICK(c, 11);
    // 0d023c  push 0x6818
    X86_AT(c, 0xd023cu);
    { uint32_t v = 0x6818u; push32(c, v); }
    // 0d0241  push 4
    X86_AT(c, 0xd0241u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0243  call 0xc8cdc
    X86_AT(c, 0xd0243u);
    push32(c, 0xd0248u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0248u);
    X86_TICK(c, 13);
    // 0d0248  add esp, 0x40
    X86_AT(c, 0xd0248u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d024b  push 7
    X86_AT(c, 0xd024bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d024d  push 0
    X86_AT(c, 0xd024du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d024f  call 0xcc814
    X86_AT(c, 0xd024fu);
    push32(c, 0xd0254u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0254u);
    X86_TICK(c, 2);
    // 0d0254  push 0x6858
    X86_AT(c, 0xd0254u);
    { uint32_t v = 0x6858u; push32(c, v); }
L_d0259:
    X86_TICK(c, 9);
    // 0d0259  push 4
    X86_AT(c, 0xd0259u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d025b  call 0xc8cdc
    X86_AT(c, 0xd025bu);
    push32(c, 0xd0260u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0260u);
    X86_TICK(c, 9);
    // 0d0260  add esp, 0x10
    X86_AT(c, 0xd0260u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d0263  jmp 0xd06b1
    X86_AT(c, 0xd0263u);
    goto L_d06b1;
L_d0268:
    X86_TICK(c, 11);
    // 0d0268  push 3
    X86_AT(c, 0xd0268u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d026a  push 0
    X86_AT(c, 0xd026au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d026c  call 0xcc814
    X86_AT(c, 0xd026cu);
    push32(c, 0xd0271u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0271u);
    X86_TICK(c, 11);
    // 0d0271  push 0x687c
    X86_AT(c, 0xd0271u);
    { uint32_t v = 0x687Cu; push32(c, v); }
    // 0d0276  push 4
    X86_AT(c, 0xd0276u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0278  call 0xc8cdc
    X86_AT(c, 0xd0278u);
    push32(c, 0xd027du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd027du);
    X86_TICK(c, 11);
    // 0d027d  push 4
    X86_AT(c, 0xd027du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d027f  push 0
    X86_AT(c, 0xd027fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0281  call 0xcc814
    X86_AT(c, 0xd0281u);
    push32(c, 0xd0286u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0286u);
    X86_TICK(c, 14);
    // 0d0286  add esp, 0x18
    X86_AT(c, 0xd0286u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d0289  cmp byte ptr [0xb02fd], 0
    X86_AT(c, 0xd0289u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB02FDu))), 0x0u, 0, 1);
    // 0d0290  jne 0xd0299
    X86_AT(c, 0xd0290u);
    if (x86_cc(c, 5)) { goto L_d0299; }
    X86_TICK(c, 9);
    // 0d0292  push 0x68b8
    X86_AT(c, 0xd0292u);
    { uint32_t v = 0x68B8u; push32(c, v); }
    // 0d0297  jmp 0xd029e
    X86_AT(c, 0xd0297u);
    goto L_d029e;
L_d0299:
    X86_TICK(c, 2);
    // 0d0299  push 0x68c8
    X86_AT(c, 0xd0299u);
    { uint32_t v = 0x68C8u; push32(c, v); }
L_d029e:
    X86_TICK(c, 9);
    // 0d029e  push 4
    X86_AT(c, 0xd029eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d02a0  call 0xc8cdc
    X86_AT(c, 0xd02a0u);
    push32(c, 0xd02a5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd02a5u);
    X86_TICK(c, 9);
    // 0d02a5  add esp, 8
    X86_AT(c, 0xd02a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d02a8  jmp 0xd06b1
    X86_AT(c, 0xd02a8u);
    goto L_d06b1;
L_d02ad:
    X86_TICK(c, 11);
    // 0d02ad  push 3
    X86_AT(c, 0xd02adu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d02af  push 0
    X86_AT(c, 0xd02afu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d02b1  call 0xcc814
    X86_AT(c, 0xd02b1u);
    push32(c, 0xd02b6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd02b6u);
    X86_TICK(c, 11);
    // 0d02b6  push 0x68dc
    X86_AT(c, 0xd02b6u);
    { uint32_t v = 0x68DCu; push32(c, v); }
    // 0d02bb  push 4
    X86_AT(c, 0xd02bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d02bd  call 0xc8cdc
    X86_AT(c, 0xd02bdu);
    push32(c, 0xd02c2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd02c2u);
    X86_TICK(c, 11);
    // 0d02c2  push 4
    X86_AT(c, 0xd02c2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d02c4  push 0
    X86_AT(c, 0xd02c4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d02c6  call 0xcc814
    X86_AT(c, 0xd02c6u);
    push32(c, 0xd02cbu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd02cbu);
    X86_TICK(c, 11);
    // 0d02cb  push 0x691c
    X86_AT(c, 0xd02cbu);
    { uint32_t v = 0x691Cu; push32(c, v); }
    // 0d02d0  push 4
    X86_AT(c, 0xd02d0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d02d2  call 0xc8cdc
    X86_AT(c, 0xd02d2u);
    push32(c, 0xd02d7u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd02d7u);
    X86_TICK(c, 11);
    // 0d02d7  push 5
    X86_AT(c, 0xd02d7u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d02d9  push 0
    X86_AT(c, 0xd02d9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d02db  call 0xcc814
    X86_AT(c, 0xd02dbu);
    push32(c, 0xd02e0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd02e0u);
    X86_TICK(c, 11);
    // 0d02e0  push 0x6958
    X86_AT(c, 0xd02e0u);
    { uint32_t v = 0x6958u; push32(c, v); }
    // 0d02e5  push 4
    X86_AT(c, 0xd02e5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d02e7  call 0xc8cdc
    X86_AT(c, 0xd02e7u);
    push32(c, 0xd02ecu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd02ecu);
    X86_TICK(c, 11);
    // 0d02ec  push 6
    X86_AT(c, 0xd02ecu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d02ee  push 0
    X86_AT(c, 0xd02eeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d02f0  call 0xcc814
    X86_AT(c, 0xd02f0u);
    push32(c, 0xd02f5u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd02f5u);
    X86_TICK(c, 11);
    // 0d02f5  push 0x6998
    X86_AT(c, 0xd02f5u);
    { uint32_t v = 0x6998u; push32(c, v); }
    // 0d02fa  push 4
    X86_AT(c, 0xd02fau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d02fc  call 0xc8cdc
    X86_AT(c, 0xd02fcu);
    push32(c, 0xd0301u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0301u);
    X86_TICK(c, 13);
    // 0d0301  add esp, 0x40
    X86_AT(c, 0xd0301u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d0304  push 7
    X86_AT(c, 0xd0304u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0306  push 0
    X86_AT(c, 0xd0306u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0308  call 0xcc814
    X86_AT(c, 0xd0308u);
    push32(c, 0xd030du); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd030du);
    X86_TICK(c, 11);
    // 0d030d  push 0x69d8
    X86_AT(c, 0xd030du);
    { uint32_t v = 0x69D8u; push32(c, v); }
    // 0d0312  push 4
    X86_AT(c, 0xd0312u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0314  call 0xc8cdc
    X86_AT(c, 0xd0314u);
    push32(c, 0xd0319u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0319u);
    X86_TICK(c, 11);
    // 0d0319  push 8
    X86_AT(c, 0xd0319u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d031b  push 0
    X86_AT(c, 0xd031bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d031d  call 0xcc814
    X86_AT(c, 0xd031du);
    push32(c, 0xd0322u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0322u);
    X86_TICK(c, 11);
    // 0d0322  push 0x69fc
    X86_AT(c, 0xd0322u);
    { uint32_t v = 0x69FCu; push32(c, v); }
    // 0d0327  push 4
    X86_AT(c, 0xd0327u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0329  call 0xc8cdc
    X86_AT(c, 0xd0329u);
    push32(c, 0xd032eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd032eu);
    X86_TICK(c, 11);
    // 0d032e  push 9
    X86_AT(c, 0xd032eu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d0330  push 0
    X86_AT(c, 0xd0330u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0332  call 0xcc814
    X86_AT(c, 0xd0332u);
    push32(c, 0xd0337u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0337u);
    X86_TICK(c, 9);
    // 0d0337  push 0x6a1c
    X86_AT(c, 0xd0337u);
    { uint32_t v = 0x6A1Cu; push32(c, v); }
    // 0d033c  jmp 0xd0444
    X86_AT(c, 0xd033cu);
    goto L_d0444;
L_d0341:
    X86_TICK(c, 11);
    // 0d0341  push 3
    X86_AT(c, 0xd0341u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0343  push 0
    X86_AT(c, 0xd0343u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0345  call 0xcc814
    X86_AT(c, 0xd0345u);
    push32(c, 0xd034au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd034au);
    X86_TICK(c, 11);
    // 0d034a  push 0x6a28
    X86_AT(c, 0xd034au);
    { uint32_t v = 0x6A28u; push32(c, v); }
    // 0d034f  push 4
    X86_AT(c, 0xd034fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0351  call 0xc8cdc
    X86_AT(c, 0xd0351u);
    push32(c, 0xd0356u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0356u);
    X86_TICK(c, 11);
    // 0d0356  push 4
    X86_AT(c, 0xd0356u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0358  push 0
    X86_AT(c, 0xd0358u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d035a  call 0xcc814
    X86_AT(c, 0xd035au);
    push32(c, 0xd035fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd035fu);
    X86_TICK(c, 11);
    // 0d035f  push 0x6a68
    X86_AT(c, 0xd035fu);
    { uint32_t v = 0x6A68u; push32(c, v); }
    // 0d0364  push 4
    X86_AT(c, 0xd0364u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0366  call 0xc8cdc
    X86_AT(c, 0xd0366u);
    push32(c, 0xd036bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd036bu);
    X86_TICK(c, 9);
    // 0d036b  add esp, 0x20
    X86_AT(c, 0xd036bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d036e  jmp 0xd06b1
    X86_AT(c, 0xd036eu);
    goto L_d06b1;
L_d0373:
    X86_TICK(c, 11);
    // 0d0373  push 3
    X86_AT(c, 0xd0373u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0375  push 0
    X86_AT(c, 0xd0375u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0377  call 0xcc814
    X86_AT(c, 0xd0377u);
    push32(c, 0xd037cu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd037cu);
    X86_TICK(c, 11);
    // 0d037c  push 0x6a84
    X86_AT(c, 0xd037cu);
    { uint32_t v = 0x6A84u; push32(c, v); }
    // 0d0381  push 4
    X86_AT(c, 0xd0381u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0383  call 0xc8cdc
    X86_AT(c, 0xd0383u);
    push32(c, 0xd0388u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0388u);
    X86_TICK(c, 11);
    // 0d0388  push 4
    X86_AT(c, 0xd0388u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d038a  push 0
    X86_AT(c, 0xd038au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d038c  call 0xcc814
    X86_AT(c, 0xd038cu);
    push32(c, 0xd0391u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0391u);
    X86_TICK(c, 11);
    // 0d0391  push 0x6ab8
    X86_AT(c, 0xd0391u);
    { uint32_t v = 0x6AB8u; push32(c, v); }
    // 0d0396  push 4
    X86_AT(c, 0xd0396u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0398  call 0xc8cdc
    X86_AT(c, 0xd0398u);
    push32(c, 0xd039du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd039du);
    X86_TICK(c, 11);
    // 0d039d  push 5
    X86_AT(c, 0xd039du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d039f  push 0
    X86_AT(c, 0xd039fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d03a1  call 0xcc814
    X86_AT(c, 0xd03a1u);
    push32(c, 0xd03a6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd03a6u);
    X86_TICK(c, 9);
    // 0d03a6  push 0x6af4
    X86_AT(c, 0xd03a6u);
    { uint32_t v = 0x6AF4u; push32(c, v); }
    // 0d03ab  jmp 0xd0444
    X86_AT(c, 0xd03abu);
    goto L_d0444;
L_d03b0:
    X86_TICK(c, 11);
    // 0d03b0  push 3
    X86_AT(c, 0xd03b0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d03b2  push 0
    X86_AT(c, 0xd03b2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d03b4  call 0xcc814
    X86_AT(c, 0xd03b4u);
    push32(c, 0xd03b9u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd03b9u);
    X86_TICK(c, 11);
    // 0d03b9  push 0x6b00
    X86_AT(c, 0xd03b9u);
    { uint32_t v = 0x6B00u; push32(c, v); }
    // 0d03be  push 4
    X86_AT(c, 0xd03beu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d03c0  call 0xc8cdc
    X86_AT(c, 0xd03c0u);
    push32(c, 0xd03c5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd03c5u);
    X86_TICK(c, 11);
    // 0d03c5  push 4
    X86_AT(c, 0xd03c5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d03c7  push 0
    X86_AT(c, 0xd03c7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d03c9  call 0xcc814
    X86_AT(c, 0xd03c9u);
    push32(c, 0xd03ceu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd03ceu);
    X86_TICK(c, 11);
    // 0d03ce  push 0x6b40
    X86_AT(c, 0xd03ceu);
    { uint32_t v = 0x6B40u; push32(c, v); }
    // 0d03d3  push 4
    X86_AT(c, 0xd03d3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d03d5  call 0xc8cdc
    X86_AT(c, 0xd03d5u);
    push32(c, 0xd03dau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd03dau);
    X86_TICK(c, 11);
    // 0d03da  push 5
    X86_AT(c, 0xd03dau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d03dc  push 0
    X86_AT(c, 0xd03dcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d03de  call 0xcc814
    X86_AT(c, 0xd03deu);
    push32(c, 0xd03e3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd03e3u);
    X86_TICK(c, 11);
    // 0d03e3  push 0x6b7c
    X86_AT(c, 0xd03e3u);
    { uint32_t v = 0x6B7Cu; push32(c, v); }
    // 0d03e8  push 4
    X86_AT(c, 0xd03e8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d03ea  call 0xc8cdc
    X86_AT(c, 0xd03eau);
    push32(c, 0xd03efu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd03efu);
    X86_TICK(c, 11);
    // 0d03ef  push 6
    X86_AT(c, 0xd03efu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d03f1  push 0
    X86_AT(c, 0xd03f1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d03f3  call 0xcc814
    X86_AT(c, 0xd03f3u);
    push32(c, 0xd03f8u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd03f8u);
    X86_TICK(c, 11);
    // 0d03f8  push 0x6b9c
    X86_AT(c, 0xd03f8u);
    { uint32_t v = 0x6B9Cu; push32(c, v); }
    // 0d03fd  push 4
    X86_AT(c, 0xd03fdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d03ff  call 0xc8cdc
    X86_AT(c, 0xd03ffu);
    push32(c, 0xd0404u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0404u);
    X86_TICK(c, 9);
    // 0d0404  add esp, 0x40
    X86_AT(c, 0xd0404u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d0407  jmp 0xd06b1
    X86_AT(c, 0xd0407u);
    goto L_d06b1;
L_d040c:
    X86_TICK(c, 11);
    // 0d040c  push 3
    X86_AT(c, 0xd040cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d040e  push 0
    X86_AT(c, 0xd040eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0410  call 0xcc814
    X86_AT(c, 0xd0410u);
    push32(c, 0xd0415u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0415u);
    X86_TICK(c, 11);
    // 0d0415  push 0x6bb0
    X86_AT(c, 0xd0415u);
    { uint32_t v = 0x6BB0u; push32(c, v); }
    // 0d041a  push 4
    X86_AT(c, 0xd041au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d041c  call 0xc8cdc
    X86_AT(c, 0xd041cu);
    push32(c, 0xd0421u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0421u);
    X86_TICK(c, 11);
    // 0d0421  push 4
    X86_AT(c, 0xd0421u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0423  push 0
    X86_AT(c, 0xd0423u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0425  call 0xcc814
    X86_AT(c, 0xd0425u);
    push32(c, 0xd042au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd042au);
    X86_TICK(c, 11);
    // 0d042a  push 0x6bec
    X86_AT(c, 0xd042au);
    { uint32_t v = 0x6BECu; push32(c, v); }
    // 0d042f  push 4
    X86_AT(c, 0xd042fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0431  call 0xc8cdc
    X86_AT(c, 0xd0431u);
    push32(c, 0xd0436u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0436u);
    X86_TICK(c, 11);
    // 0d0436  push 5
    X86_AT(c, 0xd0436u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d0438  push 0
    X86_AT(c, 0xd0438u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d043a  call 0xcc814
    X86_AT(c, 0xd043au);
    push32(c, 0xd043fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd043fu);
    X86_TICK(c, 2);
    // 0d043f  push 0x6c28
    X86_AT(c, 0xd043fu);
    { uint32_t v = 0x6C28u; push32(c, v); }
L_d0444:
    X86_TICK(c, 9);
    // 0d0444  push 4
    X86_AT(c, 0xd0444u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0446  call 0xc8cdc
    X86_AT(c, 0xd0446u);
    push32(c, 0xd044bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd044bu);
    X86_TICK(c, 9);
    // 0d044b  add esp, 0x30
    X86_AT(c, 0xd044bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d044e  jmp 0xd06b1
    X86_AT(c, 0xd044eu);
    goto L_d06b1;
L_d0453:
    X86_TICK(c, 9);
    // 0d0453  push 0x64
    X86_AT(c, 0xd0453u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0d0455  call 0xd6660
    X86_AT(c, 0xd0455u);
    push32(c, 0xd045au); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd045au);
    X86_TICK(c, 11);
    // 0d045a  push 3
    X86_AT(c, 0xd045au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d045c  push 0
    X86_AT(c, 0xd045cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d045e  call 0xcc814
    X86_AT(c, 0xd045eu);
    push32(c, 0xd0463u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0463u);
    X86_TICK(c, 11);
    // 0d0463  push 0x6c48
    X86_AT(c, 0xd0463u);
    { uint32_t v = 0x6C48u; push32(c, v); }
    // 0d0468  push 4
    X86_AT(c, 0xd0468u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d046a  call 0xc8cdc
    X86_AT(c, 0xd046au);
    push32(c, 0xd046fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd046fu);
    X86_TICK(c, 11);
    // 0d046f  push 4
    X86_AT(c, 0xd046fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0471  push 0
    X86_AT(c, 0xd0471u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0473  call 0xcc814
    X86_AT(c, 0xd0473u);
    push32(c, 0xd0478u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0478u);
    X86_TICK(c, 11);
    // 0d0478  push 0x6c88
    X86_AT(c, 0xd0478u);
    { uint32_t v = 0x6C88u; push32(c, v); }
    // 0d047d  push 4
    X86_AT(c, 0xd047du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d047f  call 0xc8cdc
    X86_AT(c, 0xd047fu);
    push32(c, 0xd0484u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0484u);
    X86_TICK(c, 11);
    // 0d0484  push 5
    X86_AT(c, 0xd0484u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d0486  push 0
    X86_AT(c, 0xd0486u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0488  call 0xcc814
    X86_AT(c, 0xd0488u);
    push32(c, 0xd048du); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd048du);
    X86_TICK(c, 11);
    // 0d048d  push 0x6cc4
    X86_AT(c, 0xd048du);
    { uint32_t v = 0x6CC4u; push32(c, v); }
    // 0d0492  push 4
    X86_AT(c, 0xd0492u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0494  call 0xc8cdc
    X86_AT(c, 0xd0494u);
    push32(c, 0xd0499u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0499u);
    X86_TICK(c, 11);
    // 0d0499  push 6
    X86_AT(c, 0xd0499u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d049b  push 0
    X86_AT(c, 0xd049bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d049d  call 0xcc814
    X86_AT(c, 0xd049du);
    push32(c, 0xd04a2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd04a2u);
    X86_TICK(c, 13);
    // 0d04a2  add esp, 0x3c
    X86_AT(c, 0xd04a2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d04a5  push 0x6d00
    X86_AT(c, 0xd04a5u);
    { uint32_t v = 0x6D00u; push32(c, v); }
    // 0d04aa  push 4
    X86_AT(c, 0xd04aau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d04ac  call 0xc8cdc
    X86_AT(c, 0xd04acu);
    push32(c, 0xd04b1u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd04b1u);
    X86_TICK(c, 11);
    // 0d04b1  push 7
    X86_AT(c, 0xd04b1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04b3  push 0
    X86_AT(c, 0xd04b3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d04b5  call 0xcc814
    X86_AT(c, 0xd04b5u);
    push32(c, 0xd04bau); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd04bau);
    X86_TICK(c, 11);
    // 0d04ba  push 0x6d40
    X86_AT(c, 0xd04bau);
    { uint32_t v = 0x6D40u; push32(c, v); }
    // 0d04bf  push 4
    X86_AT(c, 0xd04bfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d04c1  call 0xc8cdc
    X86_AT(c, 0xd04c1u);
    push32(c, 0xd04c6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd04c6u);
    X86_TICK(c, 11);
    // 0d04c6  push 8
    X86_AT(c, 0xd04c6u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d04c8  push 0
    X86_AT(c, 0xd04c8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d04ca  call 0xcc814
    X86_AT(c, 0xd04cau);
    push32(c, 0xd04cfu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd04cfu);
    X86_TICK(c, 11);
    // 0d04cf  push 0x6d80
    X86_AT(c, 0xd04cfu);
    { uint32_t v = 0x6D80u; push32(c, v); }
    // 0d04d4  push 4
    X86_AT(c, 0xd04d4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d04d6  call 0xc8cdc
    X86_AT(c, 0xd04d6u);
    push32(c, 0xd04dbu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd04dbu);
    X86_TICK(c, 11);
    // 0d04db  push 9
    X86_AT(c, 0xd04dbu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d04dd  push 0
    X86_AT(c, 0xd04ddu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d04df  call 0xcc814
    X86_AT(c, 0xd04dfu);
    push32(c, 0xd04e4u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd04e4u);
    X86_TICK(c, 11);
    // 0d04e4  push 0x6db8
    X86_AT(c, 0xd04e4u);
    { uint32_t v = 0x6DB8u; push32(c, v); }
    // 0d04e9  push 4
    X86_AT(c, 0xd04e9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d04eb  call 0xc8cdc
    X86_AT(c, 0xd04ebu);
    push32(c, 0xd04f0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd04f0u);
    X86_TICK(c, 2);
    // 0d04f0  add esp, 0x38
    X86_AT(c, 0xd04f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
L_d04f3:
    X86_TICK(c, 9);
    // 0d04f3  push 4
    X86_AT(c, 0xd04f3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d04f5  call 0xc81e4
    X86_AT(c, 0xd04f5u);
    push32(c, 0xd04fau); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd04fau);
    X86_TICK(c, 9);
    // 0d04fa  add esp, 4
    X86_AT(c, 0xd04fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d04fd  and al, al
    X86_AT(c, 0xd04fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d04ff  je 0xd04f3
    X86_AT(c, 0xd04ffu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd04f3u); goto L_d04f3; }
    X86_TICK(c, 9);
    // 0d0501  push 4
    X86_AT(c, 0xd0501u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0503  call 0xca254
    X86_AT(c, 0xd0503u);
    push32(c, 0xd0508u); x86_call_known(c, 0xca254u, f_000ca254); X86_RET(c, 0xd0508u);
    X86_TICK(c, 7);
    // 0d0508  call 0xd1754
    X86_AT(c, 0xd0508u);
    push32(c, 0xd050du); x86_call_known(c, 0xd1754u, f_000d1754); X86_RET(c, 0xd050du);
    X86_TICK(c, 11);
    // 0d050d  push 2
    X86_AT(c, 0xd050du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d050f  push 0
    X86_AT(c, 0xd050fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0511  call 0xcc814
    X86_AT(c, 0xd0511u);
    push32(c, 0xd0516u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0516u);
    X86_TICK(c, 11);
    // 0d0516  push 0x6dd8
    X86_AT(c, 0xd0516u);
    { uint32_t v = 0x6DD8u; push32(c, v); }
    // 0d051b  push 4
    X86_AT(c, 0xd051bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d051d  call 0xc8cdc
    X86_AT(c, 0xd051du);
    push32(c, 0xd0522u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0522u);
    X86_TICK(c, 11);
    // 0d0522  push 3
    X86_AT(c, 0xd0522u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0524  push 0
    X86_AT(c, 0xd0524u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0526  call 0xcc814
    X86_AT(c, 0xd0526u);
    push32(c, 0xd052bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd052bu);
    X86_TICK(c, 11);
    // 0d052b  push 0x6df4
    X86_AT(c, 0xd052bu);
    { uint32_t v = 0x6DF4u; push32(c, v); }
    // 0d0530  push 4
    X86_AT(c, 0xd0530u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0532  call 0xc8cdc
    X86_AT(c, 0xd0532u);
    push32(c, 0xd0537u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0537u);
    X86_TICK(c, 2);
    // 0d0537  add esp, 0x24
    X86_AT(c, 0xd0537u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_d053a:
    X86_TICK(c, 9);
    // 0d053a  push 4
    X86_AT(c, 0xd053au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d053c  call 0xc81e4
    X86_AT(c, 0xd053cu);
    push32(c, 0xd0541u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd0541u);
    X86_TICK(c, 9);
    // 0d0541  add esp, 4
    X86_AT(c, 0xd0541u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0544  and al, al
    X86_AT(c, 0xd0544u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d0546  je 0xd053a
    X86_AT(c, 0xd0546u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd053au); goto L_d053a; }
    X86_TICK(c, 9);
    // 0d0548  push 4
    X86_AT(c, 0xd0548u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d054a  call 0xca254
    X86_AT(c, 0xd054au);
    push32(c, 0xd054fu); x86_call_known(c, 0xca254u, f_000ca254); X86_RET(c, 0xd054fu);
    X86_TICK(c, 7);
    // 0d054f  call 0xd1754
    X86_AT(c, 0xd054fu);
    push32(c, 0xd0554u); x86_call_known(c, 0xd1754u, f_000d1754); X86_RET(c, 0xd0554u);
    X86_TICK(c, 11);
    // 0d0554  push 1
    X86_AT(c, 0xd0554u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0556  push 0
    X86_AT(c, 0xd0556u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0558  call 0xcc814
    X86_AT(c, 0xd0558u);
    push32(c, 0xd055du); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd055du);
    X86_TICK(c, 11);
    // 0d055d  push 0x6e10
    X86_AT(c, 0xd055du);
    { uint32_t v = 0x6E10u; push32(c, v); }
    // 0d0562  push 4
    X86_AT(c, 0xd0562u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0564  call 0xc8cdc
    X86_AT(c, 0xd0564u);
    push32(c, 0xd0569u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0569u);
    X86_TICK(c, 11);
    // 0d0569  push 2
    X86_AT(c, 0xd0569u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d056b  push 0
    X86_AT(c, 0xd056bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d056d  call 0xcc814
    X86_AT(c, 0xd056du);
    push32(c, 0xd0572u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0572u);
    X86_TICK(c, 11);
    // 0d0572  push 0x6e50
    X86_AT(c, 0xd0572u);
    { uint32_t v = 0x6E50u; push32(c, v); }
    // 0d0577  push 4
    X86_AT(c, 0xd0577u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0579  call 0xc8cdc
    X86_AT(c, 0xd0579u);
    push32(c, 0xd057eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd057eu);
    X86_TICK(c, 11);
    // 0d057e  push 3
    X86_AT(c, 0xd057eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0580  push 0
    X86_AT(c, 0xd0580u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0582  call 0xcc814
    X86_AT(c, 0xd0582u);
    push32(c, 0xd0587u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0587u);
    X86_TICK(c, 11);
    // 0d0587  push 0x6e8c
    X86_AT(c, 0xd0587u);
    { uint32_t v = 0x6E8Cu; push32(c, v); }
    // 0d058c  push 4
    X86_AT(c, 0xd058cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d058e  call 0xc8cdc
    X86_AT(c, 0xd058eu);
    push32(c, 0xd0593u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0593u);
    X86_TICK(c, 11);
    // 0d0593  push 4
    X86_AT(c, 0xd0593u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0595  push 0
    X86_AT(c, 0xd0595u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0597  call 0xcc814
    X86_AT(c, 0xd0597u);
    push32(c, 0xd059cu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd059cu);
    X86_TICK(c, 13);
    // 0d059c  add esp, 0x3c
    X86_AT(c, 0xd059cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d059f  push 0x6ecc
    X86_AT(c, 0xd059fu);
    { uint32_t v = 0x6ECCu; push32(c, v); }
    // 0d05a4  push 4
    X86_AT(c, 0xd05a4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d05a6  call 0xc8cdc
    X86_AT(c, 0xd05a6u);
    push32(c, 0xd05abu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd05abu);
    X86_TICK(c, 11);
    // 0d05ab  push 5
    X86_AT(c, 0xd05abu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d05ad  push 0
    X86_AT(c, 0xd05adu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d05af  call 0xcc814
    X86_AT(c, 0xd05afu);
    push32(c, 0xd05b4u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd05b4u);
    X86_TICK(c, 11);
    // 0d05b4  push 0x6f0c
    X86_AT(c, 0xd05b4u);
    { uint32_t v = 0x6F0Cu; push32(c, v); }
    // 0d05b9  push 4
    X86_AT(c, 0xd05b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d05bb  call 0xc8cdc
    X86_AT(c, 0xd05bbu);
    push32(c, 0xd05c0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd05c0u);
    X86_TICK(c, 11);
    // 0d05c0  push 6
    X86_AT(c, 0xd05c0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d05c2  push 0
    X86_AT(c, 0xd05c2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d05c4  call 0xcc814
    X86_AT(c, 0xd05c4u);
    push32(c, 0xd05c9u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd05c9u);
    X86_TICK(c, 11);
    // 0d05c9  push 0x6f4c
    X86_AT(c, 0xd05c9u);
    { uint32_t v = 0x6F4Cu; push32(c, v); }
    // 0d05ce  push 4
    X86_AT(c, 0xd05ceu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d05d0  call 0xc8cdc
    X86_AT(c, 0xd05d0u);
    push32(c, 0xd05d5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd05d5u);
    X86_TICK(c, 11);
    // 0d05d5  push 7
    X86_AT(c, 0xd05d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d05d7  push 0
    X86_AT(c, 0xd05d7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d05d9  call 0xcc814
    X86_AT(c, 0xd05d9u);
    push32(c, 0xd05deu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd05deu);
    X86_TICK(c, 11);
    // 0d05de  push 0x6f8c
    X86_AT(c, 0xd05deu);
    { uint32_t v = 0x6F8Cu; push32(c, v); }
    // 0d05e3  push 4
    X86_AT(c, 0xd05e3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d05e5  call 0xc8cdc
    X86_AT(c, 0xd05e5u);
    push32(c, 0xd05eau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd05eau);
    X86_TICK(c, 11);
    // 0d05ea  push 8
    X86_AT(c, 0xd05eau);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d05ec  push 0
    X86_AT(c, 0xd05ecu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d05ee  call 0xcc814
    X86_AT(c, 0xd05eeu);
    push32(c, 0xd05f3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd05f3u);
    X86_TICK(c, 13);
    // 0d05f3  add esp, 0x40
    X86_AT(c, 0xd05f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d05f6  push 0x6fcc
    X86_AT(c, 0xd05f6u);
    { uint32_t v = 0x6FCCu; push32(c, v); }
    // 0d05fb  push 4
    X86_AT(c, 0xd05fbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d05fd  call 0xc8cdc
    X86_AT(c, 0xd05fdu);
    push32(c, 0xd0602u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0602u);
    X86_TICK(c, 11);
    // 0d0602  push 9
    X86_AT(c, 0xd0602u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d0604  push 0
    X86_AT(c, 0xd0604u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0606  call 0xcc814
    X86_AT(c, 0xd0606u);
    push32(c, 0xd060bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd060bu);
    X86_TICK(c, 11);
    // 0d060b  push 0x7004
    X86_AT(c, 0xd060bu);
    { uint32_t v = 0x7004u; push32(c, v); }
    // 0d0610  push 4
    X86_AT(c, 0xd0610u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0612  call 0xc8cdc
    X86_AT(c, 0xd0612u);
    push32(c, 0xd0617u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0617u);
    X86_TICK(c, 2);
    // 0d0617  add esp, 0x18
    X86_AT(c, 0xd0617u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_d061a:
    X86_TICK(c, 9);
    // 0d061a  push 4
    X86_AT(c, 0xd061au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d061c  call 0xc81e4
    X86_AT(c, 0xd061cu);
    push32(c, 0xd0621u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd0621u);
    X86_TICK(c, 9);
    // 0d0621  add esp, 4
    X86_AT(c, 0xd0621u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0624  and al, al
    X86_AT(c, 0xd0624u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d0626  je 0xd061a
    X86_AT(c, 0xd0626u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd061au); goto L_d061a; }
    X86_TICK(c, 9);
    // 0d0628  push 4
    X86_AT(c, 0xd0628u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d062a  call 0xca254
    X86_AT(c, 0xd062au);
    push32(c, 0xd062fu); x86_call_known(c, 0xca254u, f_000ca254); X86_RET(c, 0xd062fu);
    X86_TICK(c, 7);
    // 0d062f  call 0xd1754
    X86_AT(c, 0xd062fu);
    push32(c, 0xd0634u); x86_call_known(c, 0xd1754u, f_000d1754); X86_RET(c, 0xd0634u);
    X86_TICK(c, 11);
    // 0d0634  push 3
    X86_AT(c, 0xd0634u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0636  push 0
    X86_AT(c, 0xd0636u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0638  call 0xcc814
    X86_AT(c, 0xd0638u);
    push32(c, 0xd063du); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd063du);
    X86_TICK(c, 11);
    // 0d063d  push 0x7028
    X86_AT(c, 0xd063du);
    { uint32_t v = 0x7028u; push32(c, v); }
    // 0d0642  push 4
    X86_AT(c, 0xd0642u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0644  call 0xc8cdc
    X86_AT(c, 0xd0644u);
    push32(c, 0xd0649u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0649u);
    X86_TICK(c, 11);
    // 0d0649  push 4
    X86_AT(c, 0xd0649u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d064b  push 0
    X86_AT(c, 0xd064bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d064d  call 0xcc814
    X86_AT(c, 0xd064du);
    push32(c, 0xd0652u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0652u);
    X86_TICK(c, 11);
    // 0d0652  push 0x704c
    X86_AT(c, 0xd0652u);
    { uint32_t v = 0x704Cu; push32(c, v); }
    // 0d0657  push 4
    X86_AT(c, 0xd0657u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0659  call 0xc8cdc
    X86_AT(c, 0xd0659u);
    push32(c, 0xd065eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd065eu);
    X86_TICK(c, 11);
    // 0d065e  push 5
    X86_AT(c, 0xd065eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d0660  push 0
    X86_AT(c, 0xd0660u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0662  call 0xcc814
    X86_AT(c, 0xd0662u);
    push32(c, 0xd0667u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0667u);
    X86_TICK(c, 11);
    // 0d0667  push 0x706c
    X86_AT(c, 0xd0667u);
    { uint32_t v = 0x706Cu; push32(c, v); }
    // 0d066c  push 4
    X86_AT(c, 0xd066cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d066e  call 0xc8cdc
    X86_AT(c, 0xd066eu);
    push32(c, 0xd0673u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0673u);
    X86_TICK(c, 11);
    // 0d0673  push 6
    X86_AT(c, 0xd0673u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0675  push 0
    X86_AT(c, 0xd0675u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0677  call 0xcc814
    X86_AT(c, 0xd0677u);
    push32(c, 0xd067cu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd067cu);
    X86_TICK(c, 13);
    // 0d067c  add esp, 0x3c
    X86_AT(c, 0xd067cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d067f  push 0x7090
    X86_AT(c, 0xd067fu);
    { uint32_t v = 0x7090u; push32(c, v); }
    // 0d0684  push 4
    X86_AT(c, 0xd0684u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0686  call 0xc8cdc
    X86_AT(c, 0xd0686u);
    push32(c, 0xd068bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd068bu);
    X86_TICK(c, 11);
    // 0d068b  push 7
    X86_AT(c, 0xd068bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d068d  push 0
    X86_AT(c, 0xd068du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d068f  call 0xcc814
    X86_AT(c, 0xd068fu);
    push32(c, 0xd0694u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0694u);
    X86_TICK(c, 11);
    // 0d0694  push 0x70b4
    X86_AT(c, 0xd0694u);
    { uint32_t v = 0x70B4u; push32(c, v); }
    // 0d0699  push 4
    X86_AT(c, 0xd0699u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d069b  call 0xc8cdc
    X86_AT(c, 0xd069bu);
    push32(c, 0xd06a0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd06a0u);
    X86_TICK(c, 2);
    // 0d06a0  add esp, 0x18
    X86_AT(c, 0xd06a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_d06a3:
    X86_TICK(c, 9);
    // 0d06a3  push 4
    X86_AT(c, 0xd06a3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d06a5  call 0xc81e4
    X86_AT(c, 0xd06a5u);
    push32(c, 0xd06aau); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd06aau);
    X86_TICK(c, 9);
    // 0d06aa  add esp, 4
    X86_AT(c, 0xd06aau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d06ad  and al, al
    X86_AT(c, 0xd06adu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d06af  je 0xd06a3
    X86_AT(c, 0xd06afu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd06a3u); goto L_d06a3; }
L_d06b1:
    X86_TICK(c, 7);
    // 0d06b1  cmp edi, 8
    X86_AT(c, 0xd06b1u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0d06b4  je 0xd06bb
    X86_AT(c, 0xd06b4u);
    if (x86_cc(c, 4)) { goto L_d06bb; }
    X86_TICK(c, 7);
    // 0d06b6  call 0xcf604
    X86_AT(c, 0xd06b6u);
    push32(c, 0xd06bbu); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd06bbu);
L_d06bb:
    X86_TICK(c, 20);
    // 0d06bb  pop edi
    X86_AT(c, 0xd06bbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d06bc  leave 
    X86_AT(c, 0xd06bcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d06bd  ret 
    X86_AT(c, 0xd06bdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0108u, "ran off the end of a function");
}
void f_000d0444(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d0444  push 4
    X86_AT(c, 0xd0444u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0446  call 0xc8cdc
    X86_AT(c, 0xd0446u);
    push32(c, 0xd044bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd044bu);
    X86_TICK(c, 9);
    // 0d044b  add esp, 0x30
    X86_AT(c, 0xd044bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d044e  jmp 0xd06b1
    X86_AT(c, 0xd044eu);
    goto L_d06b1;
L_d06b1:
    X86_TICK(c, 7);
    // 0d06b1  cmp edi, 8
    X86_AT(c, 0xd06b1u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0d06b4  je 0xd06bb
    X86_AT(c, 0xd06b4u);
    if (x86_cc(c, 4)) { goto L_d06bb; }
    X86_TICK(c, 7);
    // 0d06b6  call 0xcf604
    X86_AT(c, 0xd06b6u);
    push32(c, 0xd06bbu); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd06bbu);
L_d06bb:
    X86_TICK(c, 20);
    // 0d06bb  pop edi
    X86_AT(c, 0xd06bbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d06bc  leave 
    X86_AT(c, 0xd06bcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d06bd  ret 
    X86_AT(c, 0xd06bdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0444u, "ran off the end of a function");
}
void f_000d06b1(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0d06b1  cmp edi, 8
    X86_AT(c, 0xd06b1u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0d06b4  je 0xd06bb
    X86_AT(c, 0xd06b4u);
    if (x86_cc(c, 4)) { goto L_d06bb; }
    X86_TICK(c, 7);
    // 0d06b6  call 0xcf604
    X86_AT(c, 0xd06b6u);
    push32(c, 0xd06bbu); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd06bbu);
L_d06bb:
    X86_TICK(c, 20);
    // 0d06bb  pop edi
    X86_AT(c, 0xd06bbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d06bc  leave 
    X86_AT(c, 0xd06bcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d06bd  ret 
    X86_AT(c, 0xd06bdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd06b1u, "ran off the end of a function");
}
void f_000d06c0(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0d06c0  push ebp
    X86_AT(c, 0xd06c0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d06c1  mov ebp, esp
    X86_AT(c, 0xd06c1u);
    c.r[5] = c.r[4];
    // 0d06c3  mov eax, dword ptr [0xb033e]
    X86_AT(c, 0xd06c3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0d06c8  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd06c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0d06cb  push eax
    X86_AT(c, 0xd06cbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d06cc  mov eax, dword ptr [0xb033a]
    X86_AT(c, 0xd06ccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0d06d1  add eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd06d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0d06d4  push eax
    X86_AT(c, 0xd06d4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d06d5  call 0xd3a2c
    X86_AT(c, 0xd06d5u);
    push32(c, 0xd06dau); x86_call_known(c, 0xd3a2cu, f_000d3a2c); X86_RET(c, 0xd06dau);
    X86_TICK(c, 27);
    // 0d06da  cmp eax, 0x32
    X86_AT(c, 0xd06dau);
    (void)x86_sub(c, c.r[0], 0x32u, 0, 4);
    // 0d06dd  sete al
    X86_AT(c, 0xd06ddu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 0d06e0  movzx eax, al
    X86_AT(c, 0xd06e0u);
    c.r[0] = g8(c, 0);
    // 0d06e3  add esp, 8
    X86_AT(c, 0xd06e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d06e6  leave 
    X86_AT(c, 0xd06e6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d06e7  ret 
    X86_AT(c, 0xd06e7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd06c0u, "ran off the end of a function");
}
void f_000d06e8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d06e8  push 1
    X86_AT(c, 0xd06e8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d06ea  push 1
    X86_AT(c, 0xd06eau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d06ec  call 0xd06c0
    X86_AT(c, 0xd06ecu);
    push32(c, 0xd06f1u); x86_call_known(c, 0xd06c0u, f_000d06c0); X86_RET(c, 0xd06f1u);
    X86_TICK(c, 7);
    // 0d06f1  and eax, eax
    X86_AT(c, 0xd06f1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d06f3  jne 0xd0771
    X86_AT(c, 0xd06f3u);
    if (x86_cc(c, 5)) { goto L_d0771; }
    X86_TICK(c, 11);
    // 0d06f9  push 0
    X86_AT(c, 0xd06f9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d06fb  push 1
    X86_AT(c, 0xd06fbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d06fd  call 0xd06c0
    X86_AT(c, 0xd06fdu);
    push32(c, 0xd0702u); x86_call_known(c, 0xd06c0u, f_000d06c0); X86_RET(c, 0xd0702u);
    X86_TICK(c, 9);
    // 0d0702  add esp, 8
    X86_AT(c, 0xd0702u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d0705  and eax, eax
    X86_AT(c, 0xd0705u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d0707  jne 0xd0771
    X86_AT(c, 0xd0707u);
    if (x86_cc(c, 5)) { goto L_d0771; }
    X86_TICK(c, 11);
    // 0d070d  push 0xffffffff
    X86_AT(c, 0xd070du);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d070f  push 1
    X86_AT(c, 0xd070fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0711  call 0xd06c0
    X86_AT(c, 0xd0711u);
    push32(c, 0xd0716u); x86_call_known(c, 0xd06c0u, f_000d06c0); X86_RET(c, 0xd0716u);
    X86_TICK(c, 9);
    // 0d0716  add esp, 8
    X86_AT(c, 0xd0716u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d0719  and eax, eax
    X86_AT(c, 0xd0719u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d071b  jne 0xd0771
    X86_AT(c, 0xd071bu);
    if (x86_cc(c, 5)) { goto L_d0771; }
    X86_TICK(c, 11);
    // 0d071d  push 1
    X86_AT(c, 0xd071du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d071f  push 0
    X86_AT(c, 0xd071fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0721  call 0xd06c0
    X86_AT(c, 0xd0721u);
    push32(c, 0xd0726u); x86_call_known(c, 0xd06c0u, f_000d06c0); X86_RET(c, 0xd0726u);
    X86_TICK(c, 9);
    // 0d0726  add esp, 8
    X86_AT(c, 0xd0726u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d0729  and eax, eax
    X86_AT(c, 0xd0729u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d072b  jne 0xd0771
    X86_AT(c, 0xd072bu);
    if (x86_cc(c, 5)) { goto L_d0771; }
    X86_TICK(c, 11);
    // 0d072d  push 0xffffffff
    X86_AT(c, 0xd072du);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d072f  push 0
    X86_AT(c, 0xd072fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0731  call 0xd06c0
    X86_AT(c, 0xd0731u);
    push32(c, 0xd0736u); x86_call_known(c, 0xd06c0u, f_000d06c0); X86_RET(c, 0xd0736u);
    X86_TICK(c, 9);
    // 0d0736  add esp, 8
    X86_AT(c, 0xd0736u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d0739  and eax, eax
    X86_AT(c, 0xd0739u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d073b  jne 0xd0771
    X86_AT(c, 0xd073bu);
    if (x86_cc(c, 5)) { goto L_d0771; }
    X86_TICK(c, 11);
    // 0d073d  push 1
    X86_AT(c, 0xd073du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d073f  push 0xffffffff
    X86_AT(c, 0xd073fu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d0741  call 0xd06c0
    X86_AT(c, 0xd0741u);
    push32(c, 0xd0746u); x86_call_known(c, 0xd06c0u, f_000d06c0); X86_RET(c, 0xd0746u);
    X86_TICK(c, 9);
    // 0d0746  add esp, 8
    X86_AT(c, 0xd0746u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d0749  and eax, eax
    X86_AT(c, 0xd0749u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d074b  jne 0xd0771
    X86_AT(c, 0xd074bu);
    if (x86_cc(c, 5)) { goto L_d0771; }
    X86_TICK(c, 11);
    // 0d074d  push 0
    X86_AT(c, 0xd074du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d074f  push 0xffffffff
    X86_AT(c, 0xd074fu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d0751  call 0xd06c0
    X86_AT(c, 0xd0751u);
    push32(c, 0xd0756u); x86_call_known(c, 0xd06c0u, f_000d06c0); X86_RET(c, 0xd0756u);
    X86_TICK(c, 9);
    // 0d0756  add esp, 8
    X86_AT(c, 0xd0756u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d0759  and eax, eax
    X86_AT(c, 0xd0759u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d075b  jne 0xd0771
    X86_AT(c, 0xd075bu);
    if (x86_cc(c, 5)) { goto L_d0771; }
    X86_TICK(c, 11);
    // 0d075d  push 0xffffffff
    X86_AT(c, 0xd075du);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d075f  push 0xffffffff
    X86_AT(c, 0xd075fu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d0761  call 0xd06c0
    X86_AT(c, 0xd0761u);
    push32(c, 0xd0766u); x86_call_known(c, 0xd06c0u, f_000d06c0); X86_RET(c, 0xd0766u);
    X86_TICK(c, 9);
    // 0d0766  add esp, 8
    X86_AT(c, 0xd0766u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d0769  and eax, eax
    X86_AT(c, 0xd0769u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d076b  jne 0xd0771
    X86_AT(c, 0xd076bu);
    if (x86_cc(c, 5)) { goto L_d0771; }
    X86_TICK(c, 9);
    // 0d076d  sub eax, eax
    X86_AT(c, 0xd076du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d076f  jmp 0xd0773
    X86_AT(c, 0xd076fu);
    goto L_d0773;
L_d0771:
    X86_TICK(c, 2);
    // 0d0771  mov al, 1
    X86_AT(c, 0xd0771u);
    s8(c, 0, 0x1u);
L_d0773:
    X86_TICK(c, 15);
    // 0d0773  movzx eax, al
    X86_AT(c, 0xd0773u);
    c.r[0] = g8(c, 0);
    // 0d0776  add esp, 8
    X86_AT(c, 0xd0776u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d0779  ret 
    X86_AT(c, 0xd0779u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd06e8u, "ran off the end of a function");
}
void f_000d077c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d077c  push ebp
    X86_AT(c, 0xd077cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d077d  mov ebp, esp
    X86_AT(c, 0xd077du);
    c.r[5] = c.r[4];
    // 0d077f  push eax
    X86_AT(c, 0xd077fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0780  mov eax, dword ptr [0xaae98]
    X86_AT(c, 0xd0780u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAE98u)));
    // 0d0785  sub eax, 2
    X86_AT(c, 0xd0785u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0d0788  push eax
    X86_AT(c, 0xd0788u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0789  call 0xd485c
    X86_AT(c, 0xd0789u);
    push32(c, 0xd078eu); x86_call_known(c, 0xd485cu, f_000d485c); X86_RET(c, 0xd078eu);
    X86_TICK(c, 11);
    // 0d078e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd078eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d0791  push 7
    X86_AT(c, 0xd0791u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0793  call 0xca0a0
    X86_AT(c, 0xd0793u);
    push32(c, 0xd0798u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd0798u);
    X86_TICK(c, 14);
    // 0d0798  add esp, 8
    X86_AT(c, 0xd0798u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d079b  cmp byte ptr [ebp + 8], 0x42
    X86_AT(c, 0xd079bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x42u, 0, 1);
    // 0d079f  jne 0xd092a
    X86_AT(c, 0xd079fu);
    if (x86_cc(c, 5)) { goto L_d092a; }
    X86_TICK(c, 12);
    // 0d07a5  cmp dword ptr [0xb031a], 0
    X86_AT(c, 0xd07a5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0x0u, 0, 4);
    // 0d07ac  jne 0xd080c
    X86_AT(c, 0xd07acu);
    if (x86_cc(c, 5)) { goto L_d080c; }
    X86_TICK(c, 11);
    // 0d07ae  push 0x70cc
    X86_AT(c, 0xd07aeu);
    { uint32_t v = 0x70CCu; push32(c, v); }
    // 0d07b3  push 7
    X86_AT(c, 0xd07b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07b5  call 0xc8cdc
    X86_AT(c, 0xd07b5u);
    push32(c, 0xd07bau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd07bau);
    X86_TICK(c, 9);
    // 0d07ba  push 7
    X86_AT(c, 0xd07bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07bc  call 0xca3cc
    X86_AT(c, 0xd07bcu);
    push32(c, 0xd07c1u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd07c1u);
    X86_TICK(c, 11);
    // 0d07c1  push 0x710c
    X86_AT(c, 0xd07c1u);
    { uint32_t v = 0x710Cu; push32(c, v); }
    // 0d07c6  push 7
    X86_AT(c, 0xd07c6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07c8  call 0xc8cdc
    X86_AT(c, 0xd07c8u);
    push32(c, 0xd07cdu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd07cdu);
    X86_TICK(c, 9);
    // 0d07cd  push 7
    X86_AT(c, 0xd07cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07cf  call 0xca3cc
    X86_AT(c, 0xd07cfu);
    push32(c, 0xd07d4u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd07d4u);
    X86_TICK(c, 11);
    // 0d07d4  push 0x7144
    X86_AT(c, 0xd07d4u);
    { uint32_t v = 0x7144u; push32(c, v); }
    // 0d07d9  push 7
    X86_AT(c, 0xd07d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07db  call 0xc8cdc
    X86_AT(c, 0xd07dbu);
    push32(c, 0xd07e0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd07e0u);
    X86_TICK(c, 11);
    // 0d07e0  push 0x7178
    X86_AT(c, 0xd07e0u);
    { uint32_t v = 0x7178u; push32(c, v); }
    // 0d07e5  push 7
    X86_AT(c, 0xd07e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07e7  call 0xc8cdc
    X86_AT(c, 0xd07e7u);
    push32(c, 0xd07ecu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd07ecu);
    X86_TICK(c, 9);
    // 0d07ec  push 7
    X86_AT(c, 0xd07ecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07ee  call 0xca3cc
    X86_AT(c, 0xd07eeu);
    push32(c, 0xd07f3u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd07f3u);
    X86_TICK(c, 7);
    // 0d07f3  call 0xcf604
    X86_AT(c, 0xd07f3u);
    push32(c, 0xd07f8u); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd07f8u);
    X86_TICK(c, 11);
    // 0d07f8  push 0xf
    X86_AT(c, 0xd07f8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d07fa  push 0x719c
    X86_AT(c, 0xd07fau);
    { uint32_t v = 0x719Cu; push32(c, v); }
    // 0d07ff  call 0xcc830
    X86_AT(c, 0xd07ffu);
    push32(c, 0xd0804u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0804u);
    X86_TICK(c, 9);
    // 0d0804  add esp, 0x34
    X86_AT(c, 0xd0804u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0d0807  jmp 0xd0964
    X86_AT(c, 0xd0807u);
    goto L_d0964;
L_d080c:
    X86_TICK(c, 13);
    // 0d080c  dec dword ptr [0xb031a]
    X86_AT(c, 0xd080cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d0812  call 0xcc6cc
    X86_AT(c, 0xd0812u);
    push32(c, 0xd0817u); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd0817u);
    X86_TICK(c, 11);
    // 0d0817  push 0x71c0
    X86_AT(c, 0xd0817u);
    { uint32_t v = 0x71C0u; push32(c, v); }
    // 0d081c  push 7
    X86_AT(c, 0xd081cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d081e  call 0xc8cdc
    X86_AT(c, 0xd081eu);
    push32(c, 0xd0823u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0823u);
    X86_TICK(c, 11);
    // 0d0823  push 0x7204
    X86_AT(c, 0xd0823u);
    { uint32_t v = 0x7204u; push32(c, v); }
    // 0d0828  push 7
    X86_AT(c, 0xd0828u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d082a  call 0xc8cdc
    X86_AT(c, 0xd082au);
    push32(c, 0xd082fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd082fu);
    X86_TICK(c, 9);
    // 0d082f  push 7
    X86_AT(c, 0xd082fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0831  call 0xca3cc
    X86_AT(c, 0xd0831u);
    push32(c, 0xd0836u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd0836u);
    X86_TICK(c, 11);
    // 0d0836  push 0x7220
    X86_AT(c, 0xd0836u);
    { uint32_t v = 0x7220u; push32(c, v); }
    // 0d083b  push 7
    X86_AT(c, 0xd083bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d083d  call 0xc8cdc
    X86_AT(c, 0xd083du);
    push32(c, 0xd0842u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0842u);
    X86_TICK(c, 11);
    // 0d0842  push 0x7260
    X86_AT(c, 0xd0842u);
    { uint32_t v = 0x7260u; push32(c, v); }
    // 0d0847  push 7
    X86_AT(c, 0xd0847u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0849  call 0xc8cdc
    X86_AT(c, 0xd0849u);
    push32(c, 0xd084eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd084eu);
    X86_TICK(c, 9);
    // 0d084e  push 7
    X86_AT(c, 0xd084eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0850  call 0xca3cc
    X86_AT(c, 0xd0850u);
    push32(c, 0xd0855u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd0855u);
    X86_TICK(c, 2);
    // 0d0855  add esp, 0x28
    X86_AT(c, 0xd0855u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_d0858:
    X86_TICK(c, 9);
    // 0d0858  push 4
    X86_AT(c, 0xd0858u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d085a  call 0xc81e4
    X86_AT(c, 0xd085au);
    push32(c, 0xd085fu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd085fu);
    X86_TICK(c, 9);
    // 0d085f  add esp, 4
    X86_AT(c, 0xd085fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0862  and al, al
    X86_AT(c, 0xd0862u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d0864  je 0xd0858
    X86_AT(c, 0xd0864u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd0858u); goto L_d0858; }
    X86_TICK(c, 9);
    // 0d0866  push 7
    X86_AT(c, 0xd0866u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0868  call 0xca3cc
    X86_AT(c, 0xd0868u);
    push32(c, 0xd086du); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd086du);
    X86_TICK(c, 9);
    // 0d086d  push 7
    X86_AT(c, 0xd086du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d086f  call 0xca3cc
    X86_AT(c, 0xd086fu);
    push32(c, 0xd0874u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd0874u);
    X86_TICK(c, 11);
    // 0d0874  push 0xf
    X86_AT(c, 0xd0874u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0876  push 0x726c
    X86_AT(c, 0xd0876u);
    { uint32_t v = 0x726Cu; push32(c, v); }
    // 0d087b  call 0xcc830
    X86_AT(c, 0xd087bu);
    push32(c, 0xd0880u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0880u);
    X86_TICK(c, 15);
    // 0d0880  inc dword ptr [0xaaea0]
    X86_AT(c, 0xd0880u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAAEA0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d0886  push 7
    X86_AT(c, 0xd0886u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0888  call 0xca3cc
    X86_AT(c, 0xd0888u);
    push32(c, 0xd088du); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd088du);
    X86_TICK(c, 9);
    // 0d088d  push 7
    X86_AT(c, 0xd088du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d088f  call 0xca3cc
    X86_AT(c, 0xd088fu);
    push32(c, 0xd0894u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd0894u);
    X86_TICK(c, 7);
    // 0d0894  call 0xcf604
    X86_AT(c, 0xd0894u);
    push32(c, 0xd0899u); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd0899u);
    X86_TICK(c, 31);
    // 0d0899  add esp, 0x18
    X86_AT(c, 0xd0899u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d089c  mov eax, dword ptr [0xb030a]
    X86_AT(c, 0xd089cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB030Au)));
    // 0d08a1  cdq 
    X86_AT(c, 0xd08a1u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d08a2  sub eax, edx
    X86_AT(c, 0xd08a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d08a4  sar eax, 1
    X86_AT(c, 0xd08a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d08a6  cdq 
    X86_AT(c, 0xd08a6u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d08a7  sub eax, edx
    X86_AT(c, 0xd08a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d08a9  sar eax, 1
    X86_AT(c, 0xd08a9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d08ab  cmp eax, dword ptr [0xaaea0]
    X86_AT(c, 0xd08abu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xAAEA0u))), 0, 4);
    // 0d08b1  jge 0xd08f0
    X86_AT(c, 0xd08b1u);
    if (x86_cc(c, 13)) { goto L_d08f0; }
    X86_TICK(c, 7);
    // 0d08b3  call 0xd06e8
    X86_AT(c, 0xd08b3u);
    push32(c, 0xd08b8u); x86_call_known(c, 0xd06e8u, f_000d06e8); X86_RET(c, 0xd08b8u);
    X86_TICK(c, 7);
    // 0d08b8  and eax, eax
    X86_AT(c, 0xd08b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d08ba  je 0xd08f0
    X86_AT(c, 0xd08bau);
    if (x86_cc(c, 4)) { goto L_d08f0; }
    X86_TICK(c, 9);
    // 0d08bc  push 0
    X86_AT(c, 0xd08bcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d08be  call 0xd0108
    X86_AT(c, 0xd08beu);
    push32(c, 0xd08c3u); x86_call_known(c, 0xd0108u, f_000d0108); X86_RET(c, 0xd08c3u);
    X86_TICK(c, 20);
    // 0d08c3  mov eax, dword ptr [0xb031a]
    X86_AT(c, 0xd08c3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Au)));
    // 0d08c8  cdq 
    X86_AT(c, 0xd08c8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d08c9  sub eax, edx
    X86_AT(c, 0xd08c9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d08cb  sar eax, 1
    X86_AT(c, 0xd08cbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d08cd  mov dword ptr [0xb031a], eax
    X86_AT(c, 0xd08cdu);
    wr32((c.sbase[3] + (uint32_t)(0xB031Au)), c.r[0]);
    // 0d08d2  call 0xcc6cc
    X86_AT(c, 0xd08d2u);
    push32(c, 0xd08d7u); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd08d7u);
    X86_TICK(c, 19);
    // 0d08d7  dec dword ptr [0xb0312]
    X86_AT(c, 0xd08d7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB0312u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d08dd  add esp, 4
    X86_AT(c, 0xd08ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d08e0  mov eax, dword ptr [0xb0312]
    X86_AT(c, 0xd08e0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0312u)));
    // 0d08e5  cmp eax, 4
    X86_AT(c, 0xd08e5u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0d08e8  jne 0xd08f0
    X86_AT(c, 0xd08e8u);
    if (x86_cc(c, 5)) { goto L_d08f0; }
    X86_TICK(c, 6);
    // 0d08ea  inc dword ptr [0xb0312]
    X86_AT(c, 0xd08eau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB0312u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_d08f0:
    X86_TICK(c, 11);
    // 0d08f0  push 0xff
    X86_AT(c, 0xd08f0u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0d08f5  push 1
    X86_AT(c, 0xd08f5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d08f7  call 0xc5df0
    X86_AT(c, 0xd08f7u);
    push32(c, 0xd08fcu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd08fcu);
    X86_TICK(c, 9);
    // 0d08fc  add esp, 8
    X86_AT(c, 0xd08fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d08ff  cmp eax, 0x4b
    X86_AT(c, 0xd08ffu);
    (void)x86_sub(c, c.r[0], 0x4Bu, 0, 4);
    // 0d0902  jge 0xd091e
    X86_AT(c, 0xd0902u);
    if (x86_cc(c, 13)) { goto L_d091e; }
    X86_TICK(c, 11);
    // 0d0904  push 0x59
    X86_AT(c, 0xd0904u);
    { uint32_t v = 0x59u; push32(c, v); }
    // 0d0906  push 0xb
    X86_AT(c, 0xd0906u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d0908  call 0xc5df0
    X86_AT(c, 0xd0908u);
    push32(c, 0xd090du); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd090du);
    X86_TICK(c, 53);
    // 0d090d  cdq 
    X86_AT(c, 0xd090du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d090e  mov ecx, 0xa
    X86_AT(c, 0xd090eu);
    c.r[1] = 0xAu;
    // 0d0913  idiv ecx
    X86_AT(c, 0xd0913u);
    x86_idiv(c, c.r[1], 4, 0xd0913u);
    // 0d0915  push eax
    X86_AT(c, 0xd0915u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0916  call 0xd0108
    X86_AT(c, 0xd0916u);
    push32(c, 0xd091bu); x86_call_known(c, 0xd0108u, f_000d0108); X86_RET(c, 0xd091bu);
    X86_TICK(c, 2);
    // 0d091b  add esp, 0xc
    X86_AT(c, 0xd091bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d091e:
    X86_TICK(c, 9);
    // 0d091e  push 7
    X86_AT(c, 0xd091eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0920  call 0xca0a0
    X86_AT(c, 0xd0920u);
    push32(c, 0xd0925u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd0925u);
    X86_TICK(c, 9);
    // 0d0925  add esp, 4
    X86_AT(c, 0xd0925u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0928  jmp 0xd0964
    X86_AT(c, 0xd0928u);
    goto L_d0964;
L_d092a:
    X86_TICK(c, 11);
    // 0d092a  push 0x7288
    X86_AT(c, 0xd092au);
    { uint32_t v = 0x7288u; push32(c, v); }
    // 0d092f  push 7
    X86_AT(c, 0xd092fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0931  call 0xc8cdc
    X86_AT(c, 0xd0931u);
    push32(c, 0xd0936u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0936u);
    X86_TICK(c, 9);
    // 0d0936  push 7
    X86_AT(c, 0xd0936u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0938  call 0xca3cc
    X86_AT(c, 0xd0938u);
    push32(c, 0xd093du); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd093du);
    X86_TICK(c, 11);
    // 0d093d  push 0x72bc
    X86_AT(c, 0xd093du);
    { uint32_t v = 0x72BCu; push32(c, v); }
    // 0d0942  push 7
    X86_AT(c, 0xd0942u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0944  call 0xc8cdc
    X86_AT(c, 0xd0944u);
    push32(c, 0xd0949u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0949u);
    X86_TICK(c, 9);
    // 0d0949  push 7
    X86_AT(c, 0xd0949u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d094b  call 0xca3cc
    X86_AT(c, 0xd094bu);
    push32(c, 0xd0950u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd0950u);
    X86_TICK(c, 7);
    // 0d0950  call 0xcf604
    X86_AT(c, 0xd0950u);
    push32(c, 0xd0955u); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd0955u);
    X86_TICK(c, 11);
    // 0d0955  push 0xf
    X86_AT(c, 0xd0955u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0957  push 0x72f0
    X86_AT(c, 0xd0957u);
    { uint32_t v = 0x72F0u; push32(c, v); }
    // 0d095c  call 0xcc830
    X86_AT(c, 0xd095cu);
    push32(c, 0xd0961u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0961u);
    X86_TICK(c, 2);
    // 0d0961  add esp, 0x20
    X86_AT(c, 0xd0961u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_d0964:
    X86_TICK(c, 9);
    // 0d0964  push 0x730a
    X86_AT(c, 0xd0964u);
    { uint32_t v = 0x730Au; push32(c, v); }
    // 0d0969  call 0xcc7bc
    X86_AT(c, 0xd0969u);
    push32(c, 0xd096eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd096eu);
    X86_TICK(c, 16);
    // 0d096e  leave 
    X86_AT(c, 0xd096eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d096f  ret 
    X86_AT(c, 0xd096fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd077cu, "ran off the end of a function");
}
void f_000d0970(X86Cpu& c) {
    X86_TICK(c, 135);
    // 0d0970  push ebp
    X86_AT(c, 0xd0970u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d0971  mov ebp, esp
    X86_AT(c, 0xd0971u);
    c.r[5] = c.r[4];
    // 0d0973  push edi
    X86_AT(c, 0xd0973u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0974  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd0974u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d0977  mov ecx, 0xff
    X86_AT(c, 0xd0977u);
    c.r[1] = 0xFFu;
    // 0d097c  sub ecx, dword ptr [0xb0316]
    X86_AT(c, 0xd097cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0316u))), 0, 4); }
    // 0d0982  mov eax, edi
    X86_AT(c, 0xd0982u);
    c.r[0] = c.r[7];
    // 0d0984  imul eax, ecx
    X86_AT(c, 0xd0984u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 0d0987  xchg ecx, eax
    X86_AT(c, 0xd0987u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0d0988  mov eax, edi
    X86_AT(c, 0xd0988u);
    c.r[0] = c.r[7];
    // 0d098a  imul eax, ecx
    X86_AT(c, 0xd098au);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 0d098d  cdq 
    X86_AT(c, 0xd098du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d098e  mov ecx, 0x100
    X86_AT(c, 0xd098eu);
    c.r[1] = 0x100u;
    // 0d0993  idiv ecx
    X86_AT(c, 0xd0993u);
    x86_idiv(c, c.r[1], 4, 0xd0993u);
    // 0d0995  add eax, 5
    X86_AT(c, 0xd0995u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5u, 0, 4); }
    // 0d0998  pop edi
    X86_AT(c, 0xd0998u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d0999  leave 
    X86_AT(c, 0xd0999u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d099a  ret 
    X86_AT(c, 0xd099au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0970u, "ran off the end of a function");
}
void f_000d099c(X86Cpu& c) {
    X86_TICK(c, 133);
    // 0d099c  push ebp
    X86_AT(c, 0xd099cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d099d  mov ebp, esp
    X86_AT(c, 0xd099du);
    c.r[5] = c.r[4];
    // 0d099f  push edi
    X86_AT(c, 0xd099fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d09a0  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd09a0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d09a3  mov ecx, dword ptr [0xb030e]
    X86_AT(c, 0xd09a3u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB030Eu)));
    // 0d09a9  add ecx, 0x28
    X86_AT(c, 0xd09a9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d09ac  mov eax, edi
    X86_AT(c, 0xd09acu);
    c.r[0] = c.r[7];
    // 0d09ae  imul eax, ecx
    X86_AT(c, 0xd09aeu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 0d09b1  xchg ecx, eax
    X86_AT(c, 0xd09b1u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0d09b2  mov eax, edi
    X86_AT(c, 0xd09b2u);
    c.r[0] = c.r[7];
    // 0d09b4  imul eax, ecx
    X86_AT(c, 0xd09b4u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 0d09b7  cdq 
    X86_AT(c, 0xd09b7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d09b8  mov ecx, 0x100
    X86_AT(c, 0xd09b8u);
    c.r[1] = 0x100u;
    // 0d09bd  idiv ecx
    X86_AT(c, 0xd09bdu);
    x86_idiv(c, c.r[1], 4, 0xd09bdu);
    // 0d09bf  inc eax
    X86_AT(c, 0xd09bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d09c0  pop edi
    X86_AT(c, 0xd09c0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d09c1  leave 
    X86_AT(c, 0xd09c1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d09c2  ret 
    X86_AT(c, 0xd09c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd099cu, "ran off the end of a function");
}
void f_000d09c4(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0d09c4  push ebp
    X86_AT(c, 0xd09c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d09c5  mov ebp, esp
    X86_AT(c, 0xd09c5u);
    c.r[5] = c.r[4];
    // 0d09c7  sub esp, 0xc
    X86_AT(c, 0xd09c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0d09ca  push ebx
    X86_AT(c, 0xd09cau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d09cb  push esi
    X86_AT(c, 0xd09cbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d09cc  push edi
    X86_AT(c, 0xd09ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d09cd  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd09cdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d09d4  mov esi, 1
    X86_AT(c, 0xd09d4u);
    c.r[6] = 0x1u;
    // 0d09d9  mov bl, 0x42
    X86_AT(c, 0xd09d9u);
    s8(c, 3, 0x42u);
    // 0d09db  mov edi, esi
    X86_AT(c, 0xd09dbu);
    c.r[7] = c.r[6];
L_d09dd:
    X86_TICK(c, 7);
    // 0d09dd  cmp edi, 0xf
    X86_AT(c, 0xd09ddu);
    (void)x86_sub(c, c.r[7], 0xFu, 0, 4);
    // 0d09e0  jg 0xd09f2
    X86_AT(c, 0xd09e0u);
    if (x86_cc(c, 15)) { goto L_d09f2; }
    X86_TICK(c, 12);
    // 0d09e2  cmp dword ptr [edi*4 + 0xb0392], 0
    X86_AT(c, 0xd09e2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB0392u))), 0x0u, 0, 4);
    // 0d09ea  je 0xd09ef
    X86_AT(c, 0xd09eau);
    if (x86_cc(c, 4)) { goto L_d09ef; }
    X86_TICK(c, 6);
    // 0d09ec  inc dword ptr [ebp - 4]
    X86_AT(c, 0xd09ecu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_d09ef:
    X86_TICK(c, 9);
    // 0d09ef  inc edi
    X86_AT(c, 0xd09efu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d09f0  jmp 0xd09dd
    X86_AT(c, 0xd09f0u);
    X86_POLL(c, 0xd09ddu); goto L_d09dd;
L_d09f2:
    X86_TICK(c, 12);
    // 0d09f2  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xd09f2u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0d09f6  jne 0xd0a1d
    X86_AT(c, 0xd09f6u);
    if (x86_cc(c, 5)) { goto L_d0a1d; }
    X86_TICK(c, 11);
    // 0d09f8  push 0x730c
    X86_AT(c, 0xd09f8u);
    { uint32_t v = 0x730Cu; push32(c, v); }
    // 0d09fd  push 7
    X86_AT(c, 0xd09fdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09ff  call 0xc8cdc
    X86_AT(c, 0xd09ffu);
    push32(c, 0xd0a04u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0a04u);
    X86_TICK(c, 7);
    // 0d0a04  call 0xcf604
    X86_AT(c, 0xd0a04u);
    push32(c, 0xd0a09u); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd0a09u);
    X86_TICK(c, 11);
    // 0d0a09  push 0xf
    X86_AT(c, 0xd0a09u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0a0b  push 0x736c
    X86_AT(c, 0xd0a0bu);
    { uint32_t v = 0x736Cu; push32(c, v); }
    // 0d0a10  call 0xcc830
    X86_AT(c, 0xd0a10u);
    push32(c, 0xd0a15u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0a15u);
    X86_TICK(c, 9);
    // 0d0a15  add esp, 0x10
    X86_AT(c, 0xd0a15u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d0a18  jmp 0xd0b2d
    X86_AT(c, 0xd0a18u);
    goto L_d0b2d;
L_d0a1d:
    X86_TICK(c, 2);
    // 0d0a1d  mov edi, 1
    X86_AT(c, 0xd0a1du);
    c.r[7] = 0x1u;
L_d0a22:
    X86_TICK(c, 12);
    // 0d0a22  cmp dword ptr [edi*4 + 0xb0392], 0
    X86_AT(c, 0xd0a22u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB0392u))), 0x0u, 0, 4);
    // 0d0a2a  je 0xd0a83
    X86_AT(c, 0xd0a2au);
    if (x86_cc(c, 4)) { goto L_d0a83; }
    X86_TICK(c, 15);
    // 0d0a2c  lea eax, [esi + 1]
    X86_AT(c, 0xd0a2cu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0d0a2f  push eax
    X86_AT(c, 0xd0a2fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0a30  push 0
    X86_AT(c, 0xd0a30u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0a32  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd0a32u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d0a35  call 0xcc814
    X86_AT(c, 0xd0a35u);
    push32(c, 0xd0a3au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0a3au);
    X86_TICK(c, 13);
    // 0d0a3a  push 0xf
    X86_AT(c, 0xd0a3au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0a3c  push ebx
    X86_AT(c, 0xd0a3cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0a3d  push 4
    X86_AT(c, 0xd0a3du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0a3f  call 0xcc7dc
    X86_AT(c, 0xd0a3fu);
    push32(c, 0xd0a44u); x86_call_known(c, 0xcc7dcu, f_000cc7dc); X86_RET(c, 0xd0a44u);
    X86_TICK(c, 11);
    // 0d0a44  push 0x738c
    X86_AT(c, 0xd0a44u);
    { uint32_t v = 0x738Cu; push32(c, v); }
    // 0d0a49  push 4
    X86_AT(c, 0xd0a49u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0a4b  call 0xc8cdc
    X86_AT(c, 0xd0a4bu);
    push32(c, 0xd0a50u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0a50u);
    X86_TICK(c, 14);
    // 0d0a50  push dword ptr [edi*4 + 0xab054]
    X86_AT(c, 0xd0a50u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xAB054u))); push32(c, v); }
    // 0d0a57  push 4
    X86_AT(c, 0xd0a57u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0a59  call 0xc8cdc
    X86_AT(c, 0xd0a59u);
    push32(c, 0xd0a5eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0a5eu);
    X86_TICK(c, 11);
    // 0d0a5e  push 0x7390
    X86_AT(c, 0xd0a5eu);
    { uint32_t v = 0x7390u; push32(c, v); }
    // 0d0a63  push 4
    X86_AT(c, 0xd0a63u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0a65  call 0xc8cdc
    X86_AT(c, 0xd0a65u);
    push32(c, 0xd0a6au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0a6au);
    X86_TICK(c, 11);
    // 0d0a6a  push 3
    X86_AT(c, 0xd0a6au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0a6c  push edi
    X86_AT(c, 0xd0a6cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0a6d  call 0xd099c
    X86_AT(c, 0xd0a6du);
    push32(c, 0xd0a72u); x86_call_known(c, 0xd099cu, f_000d099c); X86_RET(c, 0xd0a72u);
    X86_TICK(c, 13);
    // 0d0a72  add esp, 4
    X86_AT(c, 0xd0a72u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0a75  push eax
    X86_AT(c, 0xd0a75u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0a76  push 4
    X86_AT(c, 0xd0a76u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0a78  call 0xc8cb8
    X86_AT(c, 0xd0a78u);
    push32(c, 0xd0a7du); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd0a7du);
    X86_TICK(c, 6);
    // 0d0a7d  mov esi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd0a7du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0d0a80  add esp, 0x38
    X86_AT(c, 0xd0a80u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
L_d0a83:
    X86_TICK(c, 11);
    // 0d0a83  inc ebx
    X86_AT(c, 0xd0a83u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d0a84  inc edi
    X86_AT(c, 0xd0a84u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d0a85  cmp edi, 0xf
    X86_AT(c, 0xd0a85u);
    (void)x86_sub(c, c.r[7], 0xFu, 0, 4);
    // 0d0a88  jg 0xd0a8f
    X86_AT(c, 0xd0a88u);
    if (x86_cc(c, 15)) { goto L_d0a8f; }
    X86_TICK(c, 7);
    // 0d0a8a  cmp esi, 8
    X86_AT(c, 0xd0a8au);
    (void)x86_sub(c, c.r[6], 0x8u, 0, 4);
    // 0d0a8d  jl 0xd0a22
    X86_AT(c, 0xd0a8du);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xd0a22u); goto L_d0a22; }
L_d0a8f:
    X86_TICK(c, 4);
    // 0d0a8f  lea eax, [ebx - 1]
    X86_AT(c, 0xd0a8fu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFFFu);
    // 0d0a92  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xd0a92u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
L_d0a95:
    X86_TICK(c, 9);
    // 0d0a95  push 7
    X86_AT(c, 0xd0a95u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0a97  call 0xc81e4
    X86_AT(c, 0xd0a97u);
    push32(c, 0xd0a9cu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd0a9cu);
    X86_TICK(c, 12);
    // 0d0a9c  add esp, 4
    X86_AT(c, 0xd0a9cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0a9f  xchg ebx, eax
    X86_AT(c, 0xd0a9fu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d0aa0  and bl, bl
    X86_AT(c, 0xd0aa0u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d0aa2  je 0xd0a95
    X86_AT(c, 0xd0aa2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd0a95u); goto L_d0a95; }
    X86_TICK(c, 9);
    // 0d0aa4  push 7
    X86_AT(c, 0xd0aa4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0aa6  call 0xca0a0
    X86_AT(c, 0xd0aa6u);
    push32(c, 0xd0aabu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd0aabu);
    X86_TICK(c, 9);
    // 0d0aab  add esp, 4
    X86_AT(c, 0xd0aabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0aae  cmp bl, 0x42
    X86_AT(c, 0xd0aaeu);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d0ab1  jb 0xd0ab8
    X86_AT(c, 0xd0ab1u);
    if (x86_cc(c, 2)) { goto L_d0ab8; }
    X86_TICK(c, 11);
    // 0d0ab3  cmp bl, byte ptr [ebp - 5]
    X86_AT(c, 0xd0ab3u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0, 1);
    // 0d0ab6  jbe 0xd0ac1
    X86_AT(c, 0xd0ab6u);
    if (x86_cc(c, 6)) { goto L_d0ac1; }
L_d0ab8:
    X86_TICK(c, 11);
    // 0d0ab8  push 0xf
    X86_AT(c, 0xd0ab8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0aba  push 0x7394
    X86_AT(c, 0xd0abau);
    { uint32_t v = 0x7394u; push32(c, v); }
    // 0d0abf  jmp 0xd0ad5
    X86_AT(c, 0xd0abfu);
    goto L_d0ad5;
L_d0ac1:
    X86_TICK(c, 15);
    // 0d0ac1  movzx ebx, bl
    X86_AT(c, 0xd0ac1u);
    c.r[3] = g8(c, 3);
    // 0d0ac4  cmp dword ptr [ebx*4 + 0xb028e], 0
    X86_AT(c, 0xd0ac4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB028Eu))), 0x0u, 0, 4);
    // 0d0acc  jne 0xd0adc
    X86_AT(c, 0xd0accu);
    if (x86_cc(c, 5)) { goto L_d0adc; }
    X86_TICK(c, 4);
    // 0d0ace  push 0xf
    X86_AT(c, 0xd0aceu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0ad0  push 0x73b4
    X86_AT(c, 0xd0ad0u);
    { uint32_t v = 0x73B4u; push32(c, v); }
L_d0ad5:
    X86_TICK(c, 7);
    // 0d0ad5  call 0xcc830
    X86_AT(c, 0xd0ad5u);
    push32(c, 0xd0adau); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0adau);
    X86_TICK(c, 7);
    // 0d0ada  jmp 0xd0b2a
    X86_AT(c, 0xd0adau);
    goto L_d0b2a;
L_d0adc:
    X86_TICK(c, 16);
    // 0d0adc  movzx ebx, bl
    X86_AT(c, 0xd0adcu);
    c.r[3] = g8(c, 3);
    // 0d0adf  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0adfu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0ae2  push eax
    X86_AT(c, 0xd0ae2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0ae3  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd0ae3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d0ae6  call 0xd099c
    X86_AT(c, 0xd0ae6u);
    push32(c, 0xd0aebu); x86_call_known(c, 0xd099cu, f_000d099c); X86_RET(c, 0xd0aebu);
    X86_TICK(c, 30);
    // 0d0aeb  add dword ptr [0xb031a], eax
    X86_AT(c, 0xd0aebu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d0af1  dec dword ptr [ebx*4 + 0xb028e]
    X86_AT(c, 0xd0af1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB028Eu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d0af8  add esp, 4
    X86_AT(c, 0xd0af8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0afb  mov eax, dword ptr [0xb0326]
    X86_AT(c, 0xd0afbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0326u)));
    // 0d0b00  cmp eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd0b00u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4);
    // 0d0b03  jne 0xd0b0f
    X86_AT(c, 0xd0b03u);
    if (x86_cc(c, 5)) { goto L_d0b0f; }
    X86_TICK(c, 2);
    // 0d0b05  mov dword ptr [0xb0326], 0
    X86_AT(c, 0xd0b05u);
    wr32((c.sbase[3] + (uint32_t)(0xB0326u)), 0x0u);
L_d0b0f:
    X86_TICK(c, 17);
    // 0d0b0f  push 0xf
    X86_AT(c, 0xd0b0fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0b11  movzx ebx, bl
    X86_AT(c, 0xd0b11u);
    c.r[3] = g8(c, 3);
    // 0d0b14  push dword ptr [ebx*4 + 0xa1ce4]
    X86_AT(c, 0xd0b14u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA1CE4u))); push32(c, v); }
    // 0d0b1b  call 0xcc830
    X86_AT(c, 0xd0b1bu);
    push32(c, 0xd0b20u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0b20u);
    X86_TICK(c, 7);
    // 0d0b20  call 0xcc6cc
    X86_AT(c, 0xd0b20u);
    push32(c, 0xd0b25u); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd0b25u);
    X86_TICK(c, 7);
    // 0d0b25  call 0xcffe0
    X86_AT(c, 0xd0b25u);
    push32(c, 0xd0b2au); x86_call_known(c, 0xcffe0u, f_000cffe0); X86_RET(c, 0xd0b2au);
L_d0b2a:
    X86_TICK(c, 2);
    // 0d0b2a  add esp, 8
    X86_AT(c, 0xd0b2au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d0b2d:
    X86_TICK(c, 28);
    // 0d0b2d  pop edi
    X86_AT(c, 0xd0b2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d0b2e  pop esi
    X86_AT(c, 0xd0b2eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d0b2f  pop ebx
    X86_AT(c, 0xd0b2fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d0b30  leave 
    X86_AT(c, 0xd0b30u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d0b31  ret 
    X86_AT(c, 0xd0b31u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd09c4u, "ran off the end of a function");
}
void f_000d0b34(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0d0b34  push ebp
    X86_AT(c, 0xd0b34u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d0b35  mov ebp, esp
    X86_AT(c, 0xd0b35u);
    c.r[5] = c.r[4];
    // 0d0b37  push ebx
    X86_AT(c, 0xd0b37u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0b38  push esi
    X86_AT(c, 0xd0b38u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0b39  push edi
    X86_AT(c, 0xd0b39u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0b3a  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd0b3au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d0b3d  mov esi, 4
    X86_AT(c, 0xd0b3du);
    c.r[6] = 0x4u;
    // 0d0b42  mov ebx, edi
    X86_AT(c, 0xd0b42u);
    c.r[3] = c.r[7];
    // 0d0b44  add bl, 0x41
    X86_AT(c, 0xd0b44u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_add(c, v, 0x41u, 0, 1)); }
    // 0d0b47  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xd0b47u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0d0b4a  push 0
    X86_AT(c, 0xd0b4au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0b4c  call 0xcc814
    X86_AT(c, 0xd0b4cu);
    push32(c, 0xd0b51u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0b51u);
    X86_TICK(c, 13);
    // 0d0b51  push 0xf
    X86_AT(c, 0xd0b51u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0b53  push ebx
    X86_AT(c, 0xd0b53u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0b54  push esi
    X86_AT(c, 0xd0b54u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0b55  call 0xcc7dc
    X86_AT(c, 0xd0b55u);
    push32(c, 0xd0b5au); x86_call_known(c, 0xcc7dcu, f_000cc7dc); X86_RET(c, 0xd0b5au);
    X86_TICK(c, 11);
    // 0d0b5a  push 0x73d4
    X86_AT(c, 0xd0b5au);
    { uint32_t v = 0x73D4u; push32(c, v); }
    // 0d0b5f  push esi
    X86_AT(c, 0xd0b5fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0b60  call 0xc8cdc
    X86_AT(c, 0xd0b60u);
    push32(c, 0xd0b65u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0b65u);
    X86_TICK(c, 14);
    // 0d0b65  push dword ptr [edi*4 + 0xab054]
    X86_AT(c, 0xd0b65u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xAB054u))); push32(c, v); }
    // 0d0b6c  push esi
    X86_AT(c, 0xd0b6cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0b6d  call 0xc8cdc
    X86_AT(c, 0xd0b6du);
    push32(c, 0xd0b72u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0b72u);
    X86_TICK(c, 11);
    // 0d0b72  push 0x73d8
    X86_AT(c, 0xd0b72u);
    { uint32_t v = 0x73D8u; push32(c, v); }
    // 0d0b77  push esi
    X86_AT(c, 0xd0b77u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0b78  call 0xc8cdc
    X86_AT(c, 0xd0b78u);
    push32(c, 0xd0b7du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0b7du);
    X86_TICK(c, 11);
    // 0d0b7d  push 3
    X86_AT(c, 0xd0b7du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0b7f  push edi
    X86_AT(c, 0xd0b7fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0b80  call 0xd0970
    X86_AT(c, 0xd0b80u);
    push32(c, 0xd0b85u); x86_call_known(c, 0xd0970u, f_000d0970); X86_RET(c, 0xd0b85u);
    X86_TICK(c, 13);
    // 0d0b85  add esp, 4
    X86_AT(c, 0xd0b85u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0b88  push eax
    X86_AT(c, 0xd0b88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0b89  push esi
    X86_AT(c, 0xd0b89u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0b8a  call 0xc8cb8
    X86_AT(c, 0xd0b8au);
    push32(c, 0xd0b8fu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd0b8fu);
    X86_TICK(c, 30);
    // 0d0b8f  add esp, 0x38
    X86_AT(c, 0xd0b8fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0d0b92  pop edi
    X86_AT(c, 0xd0b92u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d0b93  pop esi
    X86_AT(c, 0xd0b93u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d0b94  pop ebx
    X86_AT(c, 0xd0b94u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d0b95  leave 
    X86_AT(c, 0xd0b95u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d0b96  ret 
    X86_AT(c, 0xd0b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0b34u, "ran off the end of a function");
}
void f_000d0b98(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0d0b98  push ebp
    X86_AT(c, 0xd0b98u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d0b99  mov ebp, esp
    X86_AT(c, 0xd0b99u);
    c.r[5] = c.r[4];
    // 0d0b9b  sub esp, 8
    X86_AT(c, 0xd0b9bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d0b9e  push ebx
    X86_AT(c, 0xd0b9eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0b9f  push esi
    X86_AT(c, 0xd0b9fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0ba0  push edi
    X86_AT(c, 0xd0ba0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0ba1  mov esi, 1
    X86_AT(c, 0xd0ba1u);
    c.r[6] = 0x1u;
    // 0d0ba6  mov eax, dword ptr [0xaae98]
    X86_AT(c, 0xd0ba6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAE98u)));
    // 0d0bab  sub eax, 2
    X86_AT(c, 0xd0babu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0d0bae  push eax
    X86_AT(c, 0xd0baeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0baf  call 0xd46d0
    X86_AT(c, 0xd0bafu);
    push32(c, 0xd0bb4u); x86_call_known(c, 0xd46d0u, f_000d46d0); X86_RET(c, 0xd0bb4u);
    X86_TICK(c, 16);
    // 0d0bb4  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd0bb4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d0bb7  add esp, 4
    X86_AT(c, 0xd0bb7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0bba  cmp byte ptr [ebp + 8], 0x53
    X86_AT(c, 0xd0bbau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x53u, 0, 1);
    // 0d0bbe  jne 0xd0bce
    X86_AT(c, 0xd0bbeu);
    if (x86_cc(c, 5)) { goto L_d0bce; }
    X86_TICK(c, 9);
    // 0d0bc0  push eax
    X86_AT(c, 0xd0bc0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0bc1  call 0xd09c4
    X86_AT(c, 0xd0bc1u);
    push32(c, 0xd0bc6u); x86_call_known(c, 0xd09c4u, f_000d09c4); X86_RET(c, 0xd0bc6u);
    X86_TICK(c, 9);
    // 0d0bc6  add esp, 4
    X86_AT(c, 0xd0bc6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0bc9  jmp 0xd0cdc
    X86_AT(c, 0xd0bc9u);
    goto L_d0cdc;
L_d0bce:
    X86_TICK(c, 70);
    // 0d0bce  mov al, byte ptr [0xaae98]
    X86_AT(c, 0xd0bceu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xAAE98u))));
    // 0d0bd3  dec eax
    X86_AT(c, 0xd0bd3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d0bd4  and al, 1
    X86_AT(c, 0xd0bd4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 0d0bd6  add al, 0x42
    X86_AT(c, 0xd0bd6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x42u, 0, 1)); }
    // 0d0bd8  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xd0bd8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0d0bdb  mov eax, dword ptr [0xaa2dc]
    X86_AT(c, 0xd0bdbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA2DCu)));
    // 0d0be0  cdq 
    X86_AT(c, 0xd0be0u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d0be1  mov ecx, 0x5dc
    X86_AT(c, 0xd0be1u);
    c.r[1] = 0x5DCu;
    // 0d0be6  idiv ecx
    X86_AT(c, 0xd0be6u);
    x86_idiv(c, c.r[1], 4, 0xd0be6u);
    // 0d0be8  xchg edi, eax
    X86_AT(c, 0xd0be8u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d0be9  cmp edi, 3
    X86_AT(c, 0xd0be9u);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0d0bec  jle 0xd0bf3
    X86_AT(c, 0xd0becu);
    if (x86_cc(c, 14)) { goto L_d0bf3; }
    X86_TICK(c, 2);
    // 0d0bee  mov edi, 3
    X86_AT(c, 0xd0beeu);
    c.r[7] = 0x3u;
L_d0bf3:
    X86_TICK(c, 18);
    // 0d0bf3  inc edi
    X86_AT(c, 0xd0bf3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d0bf4  lea eax, [edi + edi*1]
    X86_AT(c, 0xd0bf4u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7]);
    // 0d0bf7  add al, byte ptr [ebp - 5]
    X86_AT(c, 0xd0bf7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0, 1)); }
    // 0d0bfa  mov byte ptr [ebp - 6], al
    X86_AT(c, 0xd0bfau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 0));
    // 0d0bfd  movzx edi, byte ptr [ebp - 5]
    X86_AT(c, 0xd0bfdu);
    c.r[7] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)));
L_d0c01:
    X86_TICK(c, 13);
    // 0d0c01  movzx eax, byte ptr [ebp - 6]
    X86_AT(c, 0xd0c01u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 0d0c05  cmp eax, edi
    X86_AT(c, 0xd0c05u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0d0c07  jl 0xd0c1f
    X86_AT(c, 0xd0c07u);
    if (x86_cc(c, 12)) { goto L_d0c1f; }
    X86_TICK(c, 18);
    // 0d0c09  push esi
    X86_AT(c, 0xd0c09u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0c0a  lea eax, [edi - 0x41]
    X86_AT(c, 0xd0c0au);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFBFu);
    // 0d0c0d  push eax
    X86_AT(c, 0xd0c0du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0c0e  push dword ptr [ebp - 4]
    X86_AT(c, 0xd0c0eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d0c11  call 0xd0b34
    X86_AT(c, 0xd0c11u);
    push32(c, 0xd0c16u); x86_call_known(c, 0xd0b34u, f_000d0b34); X86_RET(c, 0xd0c16u);
    X86_TICK(c, 13);
    // 0d0c16  inc esi
    X86_AT(c, 0xd0c16u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d0c17  add edi, 2
    X86_AT(c, 0xd0c17u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 0d0c1a  add esp, 0xc
    X86_AT(c, 0xd0c1au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d0c1d  jmp 0xd0c01
    X86_AT(c, 0xd0c1du);
    X86_POLL(c, 0xd0c01u); goto L_d0c01;
L_d0c1f:
    X86_TICK(c, 9);
    // 0d0c1f  push 7
    X86_AT(c, 0xd0c1fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c21  call 0xc81e4
    X86_AT(c, 0xd0c21u);
    push32(c, 0xd0c26u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd0c26u);
    X86_TICK(c, 12);
    // 0d0c26  add esp, 4
    X86_AT(c, 0xd0c26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0c29  xchg ebx, eax
    X86_AT(c, 0xd0c29u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d0c2a  and bl, bl
    X86_AT(c, 0xd0c2au);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d0c2c  je 0xd0c1f
    X86_AT(c, 0xd0c2cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd0c1fu); goto L_d0c1f; }
    X86_TICK(c, 11);
    // 0d0c2e  cmp bl, byte ptr [ebp - 5]
    X86_AT(c, 0xd0c2eu);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0, 1);
    // 0d0c31  jb 0xd0c38
    X86_AT(c, 0xd0c31u);
    if (x86_cc(c, 2)) { goto L_d0c38; }
    X86_TICK(c, 11);
    // 0d0c33  cmp bl, byte ptr [ebp - 6]
    X86_AT(c, 0xd0c33u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))), 0, 1);
    // 0d0c36  jbe 0xd0c41
    X86_AT(c, 0xd0c36u);
    if (x86_cc(c, 6)) { goto L_d0c41; }
L_d0c38:
    X86_TICK(c, 11);
    // 0d0c38  push 0xf
    X86_AT(c, 0xd0c38u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0c3a  push 0x73dc
    X86_AT(c, 0xd0c3au);
    { uint32_t v = 0x73DCu; push32(c, v); }
    // 0d0c3f  jmp 0xd0c63
    X86_AT(c, 0xd0c3fu);
    goto L_d0c63;
L_d0c41:
    X86_TICK(c, 20);
    // 0d0c41  movzx ebx, bl
    X86_AT(c, 0xd0c41u);
    c.r[3] = g8(c, 3);
    // 0d0c44  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0c44u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0c47  and eax, 1
    X86_AT(c, 0xd0c47u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1u, 4); }
    // 0d0c4c  mov edx, dword ptr [0xaae98]
    X86_AT(c, 0xd0c4cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xAAE98u)));
    // 0d0c52  and edx, 1
    X86_AT(c, 0xd0c52u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x1u, 4); }
    // 0d0c58  cmp edx, eax
    X86_AT(c, 0xd0c58u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d0c5a  je 0xd0c6a
    X86_AT(c, 0xd0c5au);
    if (x86_cc(c, 4)) { goto L_d0c6a; }
    X86_TICK(c, 4);
    // 0d0c5c  push 0xf
    X86_AT(c, 0xd0c5cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0c5e  push 0x73fc
    X86_AT(c, 0xd0c5eu);
    { uint32_t v = 0x73FCu; push32(c, v); }
L_d0c63:
    X86_TICK(c, 7);
    // 0d0c63  call 0xcc830
    X86_AT(c, 0xd0c63u);
    push32(c, 0xd0c68u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0c68u);
    X86_TICK(c, 7);
    // 0d0c68  jmp 0xd0cd9
    X86_AT(c, 0xd0c68u);
    goto L_d0cd9;
L_d0c6a:
    X86_TICK(c, 14);
    // 0d0c6a  movzx ebx, bl
    X86_AT(c, 0xd0c6au);
    c.r[3] = g8(c, 3);
    // 0d0c6d  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0c6du);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0c70  push eax
    X86_AT(c, 0xd0c70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0c71  call 0xd0970
    X86_AT(c, 0xd0c71u);
    push32(c, 0xd0c76u); x86_call_known(c, 0xd0970u, f_000d0970); X86_RET(c, 0xd0c76u);
    X86_TICK(c, 13);
    // 0d0c76  add esp, 4
    X86_AT(c, 0xd0c76u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0c79  cmp eax, dword ptr [0xb031a]
    X86_AT(c, 0xd0c79u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0, 4);
    // 0d0c7f  jle 0xd0c94
    X86_AT(c, 0xd0c7fu);
    if (x86_cc(c, 14)) { goto L_d0c94; }
    X86_TICK(c, 11);
    // 0d0c81  push 0xf
    X86_AT(c, 0xd0c81u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0c83  push 0x741c
    X86_AT(c, 0xd0c83u);
    { uint32_t v = 0x741Cu; push32(c, v); }
    // 0d0c88  call 0xcc830
    X86_AT(c, 0xd0c88u);
    push32(c, 0xd0c8du); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0c8du);
    X86_TICK(c, 7);
    // 0d0c8d  call 0xcfffc
    X86_AT(c, 0xd0c8du);
    push32(c, 0xd0c92u); x86_call_known(c, 0xcfffcu, f_000cfffc); X86_RET(c, 0xd0c92u);
    X86_TICK(c, 7);
    // 0d0c92  jmp 0xd0cd9
    X86_AT(c, 0xd0c92u);
    goto L_d0cd9;
L_d0c94:
    X86_TICK(c, 14);
    // 0d0c94  movzx ebx, bl
    X86_AT(c, 0xd0c94u);
    c.r[3] = g8(c, 3);
    // 0d0c97  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0c97u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0c9a  push eax
    X86_AT(c, 0xd0c9au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0c9b  call 0xd0970
    X86_AT(c, 0xd0c9bu);
    push32(c, 0xd0ca0u); x86_call_known(c, 0xd0970u, f_000d0970); X86_RET(c, 0xd0ca0u);
    X86_TICK(c, 20);
    // 0d0ca0  sub dword ptr [0xb031a], eax
    X86_AT(c, 0xd0ca0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0d0ca6  add esp, 4
    X86_AT(c, 0xd0ca6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0ca9  mov eax, dword ptr [ebx*4 + 0xb028e]
    X86_AT(c, 0xd0ca9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB028Eu)));
    // 0d0cb0  cmp eax, 0xff
    X86_AT(c, 0xd0cb0u);
    (void)x86_sub(c, c.r[0], 0xFFu, 0, 4);
    // 0d0cb5  jge 0xd0cbe
    X86_AT(c, 0xd0cb5u);
    if (x86_cc(c, 13)) { goto L_d0cbe; }
    X86_TICK(c, 6);
    // 0d0cb7  inc dword ptr [ebx*4 + 0xb028e]
    X86_AT(c, 0xd0cb7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB028Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_d0cbe:
    X86_TICK(c, 17);
    // 0d0cbe  push 0xf
    X86_AT(c, 0xd0cbeu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0cc0  movzx ebx, bl
    X86_AT(c, 0xd0cc0u);
    c.r[3] = g8(c, 3);
    // 0d0cc3  push dword ptr [ebx*4 + 0xa1ce4]
    X86_AT(c, 0xd0cc3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA1CE4u))); push32(c, v); }
    // 0d0cca  call 0xcc830
    X86_AT(c, 0xd0ccau);
    push32(c, 0xd0ccfu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0ccfu);
    X86_TICK(c, 7);
    // 0d0ccf  call 0xcc6cc
    X86_AT(c, 0xd0ccfu);
    push32(c, 0xd0cd4u); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd0cd4u);
    X86_TICK(c, 7);
    // 0d0cd4  call 0xcffc4
    X86_AT(c, 0xd0cd4u);
    push32(c, 0xd0cd9u); x86_call_known(c, 0xcffc4u, f_000cffc4); X86_RET(c, 0xd0cd9u);
L_d0cd9:
    X86_TICK(c, 2);
    // 0d0cd9  add esp, 8
    X86_AT(c, 0xd0cd9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d0cdc:
    X86_TICK(c, 9);
    // 0d0cdc  push 0x743c
    X86_AT(c, 0xd0cdcu);
    { uint32_t v = 0x743Cu; push32(c, v); }
    // 0d0ce1  call 0xcc7bc
    X86_AT(c, 0xd0ce1u);
    push32(c, 0xd0ce6u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd0ce6u);
    X86_TICK(c, 30);
    // 0d0ce6  add esp, 4
    X86_AT(c, 0xd0ce6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0ce9  pop edi
    X86_AT(c, 0xd0ce9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d0cea  pop esi
    X86_AT(c, 0xd0ceau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d0ceb  pop ebx
    X86_AT(c, 0xd0cebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d0cec  leave 
    X86_AT(c, 0xd0cecu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d0ced  ret 
    X86_AT(c, 0xd0cedu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0b98u, "ran off the end of a function");
}
void f_000d0cf0(X86Cpu& c) {
    X86_TICK(c, 54);
    // 0d0cf0  mov eax, 0xc8
    X86_AT(c, 0xd0cf0u);
    c.r[0] = 0xC8u;
    // 0d0cf5  sub eax, dword ptr [0xb0316]
    X86_AT(c, 0xd0cf5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0316u))), 0, 4); }
    // 0d0cfb  cdq 
    X86_AT(c, 0xd0cfbu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d0cfc  sub eax, edx
    X86_AT(c, 0xd0cfcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d0cfe  sar eax, 1
    X86_AT(c, 0xd0cfeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d0d00  cdq 
    X86_AT(c, 0xd0d00u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d0d01  sub eax, edx
    X86_AT(c, 0xd0d01u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d0d03  sar eax, 1
    X86_AT(c, 0xd0d03u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d0d05  imul eax, dword ptr [esp + 4]
    X86_AT(c, 0xd0d05u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))), 4);
    // 0d0d0a  ret 
    X86_AT(c, 0xd0d0au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0cf0u, "ran off the end of a function");
}
void f_000d0d0c(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0d0d0c  mov eax, dword ptr [0xb030e]
    X86_AT(c, 0xd0d0cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB030Eu)));
    // 0d0d11  cdq 
    X86_AT(c, 0xd0d11u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d0d12  sub eax, edx
    X86_AT(c, 0xd0d12u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d0d14  sar eax, 1
    X86_AT(c, 0xd0d14u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d0d16  cdq 
    X86_AT(c, 0xd0d16u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d0d17  sub eax, edx
    X86_AT(c, 0xd0d17u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d0d19  sar eax, 1
    X86_AT(c, 0xd0d19u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d0d1b  imul eax, dword ptr [esp + 4]
    X86_AT(c, 0xd0d1bu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))), 4);
    // 0d0d20  ret 
    X86_AT(c, 0xd0d20u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0d0cu, "ran off the end of a function");
}
void f_000d0d24(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0d0d24  push ebp
    X86_AT(c, 0xd0d24u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d0d25  mov ebp, esp
    X86_AT(c, 0xd0d25u);
    c.r[5] = c.r[4];
    // 0d0d27  sub esp, 8
    X86_AT(c, 0xd0d27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d0d2a  push ebx
    X86_AT(c, 0xd0d2au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0d2b  push esi
    X86_AT(c, 0xd0d2bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0d2c  push edi
    X86_AT(c, 0xd0d2cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0d2d  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd0d2du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d0d34  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xd0d34u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0d0d3b  mov bl, 0x42
    X86_AT(c, 0xd0d3bu);
    s8(c, 3, 0x42u);
    // 0d0d3d  mov esi, 4
    X86_AT(c, 0xd0d3du);
    c.r[6] = 0x4u;
    // 0d0d42  mov edi, 1
    X86_AT(c, 0xd0d42u);
    c.r[7] = 0x1u;
L_d0d47:
    X86_TICK(c, 7);
    // 0d0d47  cmp edi, 5
    X86_AT(c, 0xd0d47u);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0d0d4a  jg 0xd0d5c
    X86_AT(c, 0xd0d4au);
    if (x86_cc(c, 15)) { goto L_d0d5c; }
    X86_TICK(c, 12);
    // 0d0d4c  cmp dword ptr [edi*4 + 0xb037a], 0
    X86_AT(c, 0xd0d4cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB037Au))), 0x0u, 0, 4);
    // 0d0d54  je 0xd0d59
    X86_AT(c, 0xd0d54u);
    if (x86_cc(c, 4)) { goto L_d0d59; }
    X86_TICK(c, 6);
    // 0d0d56  inc dword ptr [ebp - 4]
    X86_AT(c, 0xd0d56u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_d0d59:
    X86_TICK(c, 9);
    // 0d0d59  inc edi
    X86_AT(c, 0xd0d59u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d0d5a  jmp 0xd0d47
    X86_AT(c, 0xd0d5au);
    X86_POLL(c, 0xd0d47u); goto L_d0d47;
L_d0d5c:
    X86_TICK(c, 12);
    // 0d0d5c  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xd0d5cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0d0d60  jne 0xd0d87
    X86_AT(c, 0xd0d60u);
    if (x86_cc(c, 5)) { goto L_d0d87; }
    X86_TICK(c, 11);
    // 0d0d62  push 0x7440
    X86_AT(c, 0xd0d62u);
    { uint32_t v = 0x7440u; push32(c, v); }
    // 0d0d67  push 7
    X86_AT(c, 0xd0d67u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0d69  call 0xc8cdc
    X86_AT(c, 0xd0d69u);
    push32(c, 0xd0d6eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0d6eu);
    X86_TICK(c, 7);
    // 0d0d6e  call 0xcf604
    X86_AT(c, 0xd0d6eu);
    push32(c, 0xd0d73u); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd0d73u);
    X86_TICK(c, 11);
    // 0d0d73  push 0xf
    X86_AT(c, 0xd0d73u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0d75  push 0x749c
    X86_AT(c, 0xd0d75u);
    { uint32_t v = 0x749Cu; push32(c, v); }
    // 0d0d7a  call 0xcc830
    X86_AT(c, 0xd0d7au);
    push32(c, 0xd0d7fu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0d7fu);
    X86_TICK(c, 9);
    // 0d0d7f  add esp, 0x10
    X86_AT(c, 0xd0d7fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d0d82  jmp 0xd0e82
    X86_AT(c, 0xd0d82u);
    goto L_d0e82;
L_d0d87:
    X86_TICK(c, 2);
    // 0d0d87  mov edi, 1
    X86_AT(c, 0xd0d87u);
    c.r[7] = 0x1u;
L_d0d8c:
    X86_TICK(c, 7);
    // 0d0d8c  cmp edi, 5
    X86_AT(c, 0xd0d8cu);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0d0d8f  jg 0xd0ded
    X86_AT(c, 0xd0d8fu);
    if (x86_cc(c, 15)) { goto L_d0ded; }
    X86_TICK(c, 12);
    // 0d0d91  cmp dword ptr [edi*4 + 0xb037a], 0
    X86_AT(c, 0xd0d91u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB037Au))), 0x0u, 0, 4);
    // 0d0d99  je 0xd0de9
    X86_AT(c, 0xd0d99u);
    if (x86_cc(c, 4)) { goto L_d0de9; }
    X86_TICK(c, 14);
    // 0d0d9b  push dword ptr [ebp - 8]
    X86_AT(c, 0xd0d9bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0d0d9e  push 0
    X86_AT(c, 0xd0d9eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0da0  call 0xcc814
    X86_AT(c, 0xd0da0u);
    push32(c, 0xd0da5u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0da5u);
    X86_TICK(c, 13);
    // 0d0da5  push 0xf
    X86_AT(c, 0xd0da5u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0da7  push ebx
    X86_AT(c, 0xd0da7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0da8  push esi
    X86_AT(c, 0xd0da8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0da9  call 0xcc7dc
    X86_AT(c, 0xd0da9u);
    push32(c, 0xd0daeu); x86_call_known(c, 0xcc7dcu, f_000cc7dc); X86_RET(c, 0xd0daeu);
    X86_TICK(c, 11);
    // 0d0dae  push 0x74bc
    X86_AT(c, 0xd0daeu);
    { uint32_t v = 0x74BCu; push32(c, v); }
    // 0d0db3  push esi
    X86_AT(c, 0xd0db3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0db4  call 0xc8cdc
    X86_AT(c, 0xd0db4u);
    push32(c, 0xd0db9u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0db9u);
    X86_TICK(c, 14);
    // 0d0db9  push dword ptr [edi*4 + 0xab0c0]
    X86_AT(c, 0xd0db9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xAB0C0u))); push32(c, v); }
    // 0d0dc0  push esi
    X86_AT(c, 0xd0dc0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0dc1  call 0xc8cdc
    X86_AT(c, 0xd0dc1u);
    push32(c, 0xd0dc6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0dc6u);
    X86_TICK(c, 11);
    // 0d0dc6  push 0x74c0
    X86_AT(c, 0xd0dc6u);
    { uint32_t v = 0x74C0u; push32(c, v); }
    // 0d0dcb  push esi
    X86_AT(c, 0xd0dcbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0dcc  call 0xc8cdc
    X86_AT(c, 0xd0dccu);
    push32(c, 0xd0dd1u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0dd1u);
    X86_TICK(c, 11);
    // 0d0dd1  push 3
    X86_AT(c, 0xd0dd1u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0dd3  push edi
    X86_AT(c, 0xd0dd3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0dd4  call 0xd0d0c
    X86_AT(c, 0xd0dd4u);
    push32(c, 0xd0dd9u); x86_call_known(c, 0xd0d0cu, f_000d0d0c); X86_RET(c, 0xd0dd9u);
    X86_TICK(c, 13);
    // 0d0dd9  add esp, 4
    X86_AT(c, 0xd0dd9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0ddc  push eax
    X86_AT(c, 0xd0ddcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0ddd  push esi
    X86_AT(c, 0xd0dddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0dde  call 0xc8cb8
    X86_AT(c, 0xd0ddeu);
    push32(c, 0xd0de3u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd0de3u);
    X86_TICK(c, 8);
    // 0d0de3  inc dword ptr [ebp - 8]
    X86_AT(c, 0xd0de3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d0de6  add esp, 0x38
    X86_AT(c, 0xd0de6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
L_d0de9:
    X86_TICK(c, 11);
    // 0d0de9  inc ebx
    X86_AT(c, 0xd0de9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d0dea  inc edi
    X86_AT(c, 0xd0deau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d0deb  jmp 0xd0d8c
    X86_AT(c, 0xd0debu);
    X86_POLL(c, 0xd0d8cu); goto L_d0d8c;
L_d0ded:
    X86_TICK(c, 9);
    // 0d0ded  push 7
    X86_AT(c, 0xd0dedu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0def  call 0xc81e4
    X86_AT(c, 0xd0defu);
    push32(c, 0xd0df4u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd0df4u);
    X86_TICK(c, 12);
    // 0d0df4  add esp, 4
    X86_AT(c, 0xd0df4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0df7  xchg ebx, eax
    X86_AT(c, 0xd0df7u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d0df8  and bl, bl
    X86_AT(c, 0xd0df8u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d0dfa  je 0xd0ded
    X86_AT(c, 0xd0dfau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd0dedu); goto L_d0ded; }
    X86_TICK(c, 9);
    // 0d0dfc  push 7
    X86_AT(c, 0xd0dfcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0dfe  call 0xca0a0
    X86_AT(c, 0xd0dfeu);
    push32(c, 0xd0e03u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd0e03u);
    X86_TICK(c, 9);
    // 0d0e03  add esp, 4
    X86_AT(c, 0xd0e03u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0e06  cmp bl, 0x42
    X86_AT(c, 0xd0e06u);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d0e09  jb 0xd0e10
    X86_AT(c, 0xd0e09u);
    if (x86_cc(c, 2)) { goto L_d0e10; }
    X86_TICK(c, 7);
    // 0d0e0b  cmp bl, 0x46
    X86_AT(c, 0xd0e0bu);
    (void)x86_sub(c, g8(c, 3), 0x46u, 0, 1);
    // 0d0e0e  jbe 0xd0e19
    X86_AT(c, 0xd0e0eu);
    if (x86_cc(c, 6)) { goto L_d0e19; }
L_d0e10:
    X86_TICK(c, 11);
    // 0d0e10  push 0xf
    X86_AT(c, 0xd0e10u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0e12  push 0x74c4
    X86_AT(c, 0xd0e12u);
    { uint32_t v = 0x74C4u; push32(c, v); }
    // 0d0e17  jmp 0xd0e2d
    X86_AT(c, 0xd0e17u);
    goto L_d0e2d;
L_d0e19:
    X86_TICK(c, 15);
    // 0d0e19  movzx ebx, bl
    X86_AT(c, 0xd0e19u);
    c.r[3] = g8(c, 3);
    // 0d0e1c  cmp dword ptr [ebx*4 + 0xb0276], 0
    X86_AT(c, 0xd0e1cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB0276u))), 0x0u, 0, 4);
    // 0d0e24  jne 0xd0e34
    X86_AT(c, 0xd0e24u);
    if (x86_cc(c, 5)) { goto L_d0e34; }
    X86_TICK(c, 4);
    // 0d0e26  push 0xf
    X86_AT(c, 0xd0e26u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0e28  push 0x74e4
    X86_AT(c, 0xd0e28u);
    { uint32_t v = 0x74E4u; push32(c, v); }
L_d0e2d:
    X86_TICK(c, 7);
    // 0d0e2d  call 0xcc830
    X86_AT(c, 0xd0e2du);
    push32(c, 0xd0e32u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0e32u);
    X86_TICK(c, 7);
    // 0d0e32  jmp 0xd0e7f
    X86_AT(c, 0xd0e32u);
    goto L_d0e7f;
L_d0e34:
    X86_TICK(c, 16);
    // 0d0e34  movzx ebx, bl
    X86_AT(c, 0xd0e34u);
    c.r[3] = g8(c, 3);
    // 0d0e37  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0e37u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0e3a  push eax
    X86_AT(c, 0xd0e3au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0e3b  mov ecx, eax
    X86_AT(c, 0xd0e3bu);
    c.r[1] = c.r[0];
    // 0d0e3d  call 0xd0d0c
    X86_AT(c, 0xd0e3du);
    push32(c, 0xd0e42u); x86_call_known(c, 0xd0d0cu, f_000d0d0c); X86_RET(c, 0xd0e42u);
    X86_TICK(c, 26);
    // 0d0e42  add dword ptr [0xb031a], eax
    X86_AT(c, 0xd0e42u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d0e48  dec dword ptr [ebx*4 + 0xb0276]
    X86_AT(c, 0xd0e48u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB0276u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d0e4f  add esp, 4
    X86_AT(c, 0xd0e4fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0e52  cmp ecx, dword ptr [0xb032e]
    X86_AT(c, 0xd0e52u);
    (void)x86_sub(c, c.r[1], rd32((c.sbase[3] + (uint32_t)(0xB032Eu))), 0, 4);
    // 0d0e58  jne 0xd0e64
    X86_AT(c, 0xd0e58u);
    if (x86_cc(c, 5)) { goto L_d0e64; }
    X86_TICK(c, 2);
    // 0d0e5a  mov dword ptr [0xb032e], 0
    X86_AT(c, 0xd0e5au);
    wr32((c.sbase[3] + (uint32_t)(0xB032Eu)), 0x0u);
L_d0e64:
    X86_TICK(c, 17);
    // 0d0e64  push 0xf
    X86_AT(c, 0xd0e64u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0e66  movzx ebx, bl
    X86_AT(c, 0xd0e66u);
    c.r[3] = g8(c, 3);
    // 0d0e69  push dword ptr [ebx*4 + 0xa1d6c]
    X86_AT(c, 0xd0e69u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA1D6Cu))); push32(c, v); }
    // 0d0e70  call 0xcc830
    X86_AT(c, 0xd0e70u);
    push32(c, 0xd0e75u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0e75u);
    X86_TICK(c, 7);
    // 0d0e75  call 0xcc6cc
    X86_AT(c, 0xd0e75u);
    push32(c, 0xd0e7au); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd0e7au);
    X86_TICK(c, 7);
    // 0d0e7a  call 0xcffe0
    X86_AT(c, 0xd0e7au);
    push32(c, 0xd0e7fu); x86_call_known(c, 0xcffe0u, f_000cffe0); X86_RET(c, 0xd0e7fu);
L_d0e7f:
    X86_TICK(c, 2);
    // 0d0e7f  add esp, 8
    X86_AT(c, 0xd0e7fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d0e82:
    X86_TICK(c, 28);
    // 0d0e82  pop edi
    X86_AT(c, 0xd0e82u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d0e83  pop esi
    X86_AT(c, 0xd0e83u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d0e84  pop ebx
    X86_AT(c, 0xd0e84u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d0e85  leave 
    X86_AT(c, 0xd0e85u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d0e86  ret 
    X86_AT(c, 0xd0e86u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0d24u, "ran off the end of a function");
}
void f_000d0e88(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0d0e88  push ebp
    X86_AT(c, 0xd0e88u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d0e89  mov ebp, esp
    X86_AT(c, 0xd0e89u);
    c.r[5] = c.r[4];
    // 0d0e8b  push ebx
    X86_AT(c, 0xd0e8bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0e8c  push edi
    X86_AT(c, 0xd0e8cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0e8d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd0e8du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d0e90  mov ebx, edi
    X86_AT(c, 0xd0e90u);
    c.r[3] = c.r[7];
    // 0d0e92  add bl, 0x41
    X86_AT(c, 0xd0e92u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_add(c, v, 0x41u, 0, 1)); }
    // 0d0e95  push dword ptr [ebp + 8]
    X86_AT(c, 0xd0e95u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d0e98  push 0
    X86_AT(c, 0xd0e98u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0e9a  call 0xcc814
    X86_AT(c, 0xd0e9au);
    push32(c, 0xd0e9fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0e9fu);
    X86_TICK(c, 13);
    // 0d0e9f  push 0xf
    X86_AT(c, 0xd0e9fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0ea1  push ebx
    X86_AT(c, 0xd0ea1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0ea2  push 4
    X86_AT(c, 0xd0ea2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0ea4  call 0xcc7dc
    X86_AT(c, 0xd0ea4u);
    push32(c, 0xd0ea9u); x86_call_known(c, 0xcc7dcu, f_000cc7dc); X86_RET(c, 0xd0ea9u);
    X86_TICK(c, 11);
    // 0d0ea9  push 0x7504
    X86_AT(c, 0xd0ea9u);
    { uint32_t v = 0x7504u; push32(c, v); }
    // 0d0eae  push 4
    X86_AT(c, 0xd0eaeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0eb0  call 0xc8cdc
    X86_AT(c, 0xd0eb0u);
    push32(c, 0xd0eb5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0eb5u);
    X86_TICK(c, 14);
    // 0d0eb5  push dword ptr [edi*4 + 0xab0c0]
    X86_AT(c, 0xd0eb5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xAB0C0u))); push32(c, v); }
    // 0d0ebc  push 4
    X86_AT(c, 0xd0ebcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0ebe  call 0xc8cdc
    X86_AT(c, 0xd0ebeu);
    push32(c, 0xd0ec3u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0ec3u);
    X86_TICK(c, 11);
    // 0d0ec3  push 0x7508
    X86_AT(c, 0xd0ec3u);
    { uint32_t v = 0x7508u; push32(c, v); }
    // 0d0ec8  push 4
    X86_AT(c, 0xd0ec8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0eca  call 0xc8cdc
    X86_AT(c, 0xd0ecau);
    push32(c, 0xd0ecfu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd0ecfu);
    X86_TICK(c, 11);
    // 0d0ecf  push 3
    X86_AT(c, 0xd0ecfu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0ed1  push edi
    X86_AT(c, 0xd0ed1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0ed2  call 0xd0cf0
    X86_AT(c, 0xd0ed2u);
    push32(c, 0xd0ed7u); x86_call_known(c, 0xd0cf0u, f_000d0cf0); X86_RET(c, 0xd0ed7u);
    X86_TICK(c, 13);
    // 0d0ed7  add esp, 4
    X86_AT(c, 0xd0ed7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0eda  push eax
    X86_AT(c, 0xd0edau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0edb  push 4
    X86_AT(c, 0xd0edbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0edd  call 0xc8cb8
    X86_AT(c, 0xd0eddu);
    push32(c, 0xd0ee2u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd0ee2u);
    X86_TICK(c, 26);
    // 0d0ee2  add esp, 0x38
    X86_AT(c, 0xd0ee2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0d0ee5  pop edi
    X86_AT(c, 0xd0ee5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d0ee6  pop ebx
    X86_AT(c, 0xd0ee6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d0ee7  leave 
    X86_AT(c, 0xd0ee7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d0ee8  ret 
    X86_AT(c, 0xd0ee8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0e88u, "ran off the end of a function");
}
void f_000d0eec(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0d0eec  push ebp
    X86_AT(c, 0xd0eecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d0eed  mov ebp, esp
    X86_AT(c, 0xd0eedu);
    c.r[5] = c.r[4];
    // 0d0eef  push eax
    X86_AT(c, 0xd0eefu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0ef0  push ebx
    X86_AT(c, 0xd0ef0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0ef1  push esi
    X86_AT(c, 0xd0ef1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0ef2  push edi
    X86_AT(c, 0xd0ef2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0ef3  mov esi, 1
    X86_AT(c, 0xd0ef3u);
    c.r[6] = 0x1u;
    // 0d0ef8  mov byte ptr [ebp - 1], 0x44
    X86_AT(c, 0xd0ef8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x44u);
    // 0d0efc  mov eax, dword ptr [0xaae98]
    X86_AT(c, 0xd0efcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAE98u)));
    // 0d0f01  sub eax, 2
    X86_AT(c, 0xd0f01u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0d0f04  push eax
    X86_AT(c, 0xd0f04u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0f05  call 0xd4634
    X86_AT(c, 0xd0f05u);
    push32(c, 0xd0f0au); x86_call_known(c, 0xd4634u, f_000d4634); X86_RET(c, 0xd0f0au);
    X86_TICK(c, 17);
    // 0d0f0a  xchg edi, eax
    X86_AT(c, 0xd0f0au);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d0f0b  add esp, 4
    X86_AT(c, 0xd0f0bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0f0e  cmp byte ptr [ebp + 8], 0x53
    X86_AT(c, 0xd0f0eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x53u, 0, 1);
    // 0d0f12  jne 0xd0f22
    X86_AT(c, 0xd0f12u);
    if (x86_cc(c, 5)) { goto L_d0f22; }
    X86_TICK(c, 9);
    // 0d0f14  push edi
    X86_AT(c, 0xd0f14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0f15  call 0xd0d24
    X86_AT(c, 0xd0f15u);
    push32(c, 0xd0f1au); x86_call_known(c, 0xd0d24u, f_000d0d24); X86_RET(c, 0xd0f1au);
    X86_TICK(c, 9);
    // 0d0f1a  add esp, 4
    X86_AT(c, 0xd0f1au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0f1d  jmp 0xd1026
    X86_AT(c, 0xd0f1du);
    goto L_d1026;
L_d0f22:
    X86_TICK(c, 11);
    // 0d0f22  push esi
    X86_AT(c, 0xd0f22u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0f23  push 0
    X86_AT(c, 0xd0f23u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0f25  call 0xcc814
    X86_AT(c, 0xd0f25u);
    push32(c, 0xd0f2au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0f2au);
    X86_TICK(c, 11);
    // 0d0f2a  push 1
    X86_AT(c, 0xd0f2au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0f2c  push edi
    X86_AT(c, 0xd0f2cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0f2d  call 0xd0e88
    X86_AT(c, 0xd0f2du);
    push32(c, 0xd0f32u); x86_call_known(c, 0xd0e88u, f_000d0e88); X86_RET(c, 0xd0f32u);
    X86_TICK(c, 13);
    // 0d0f32  inc esi
    X86_AT(c, 0xd0f32u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d0f33  push esi
    X86_AT(c, 0xd0f33u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0f34  push 0
    X86_AT(c, 0xd0f34u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0f36  call 0xcc814
    X86_AT(c, 0xd0f36u);
    push32(c, 0xd0f3bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0f3bu);
    X86_TICK(c, 11);
    // 0d0f3b  push 2
    X86_AT(c, 0xd0f3bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0f3d  push edi
    X86_AT(c, 0xd0f3du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0f3e  call 0xd0e88
    X86_AT(c, 0xd0f3eu);
    push32(c, 0xd0f43u); x86_call_known(c, 0xd0e88u, f_000d0e88); X86_RET(c, 0xd0f43u);
    X86_TICK(c, 13);
    // 0d0f43  inc esi
    X86_AT(c, 0xd0f43u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d0f44  push esi
    X86_AT(c, 0xd0f44u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0f45  push 0
    X86_AT(c, 0xd0f45u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0f47  call 0xcc814
    X86_AT(c, 0xd0f47u);
    push32(c, 0xd0f4cu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0f4cu);
    X86_TICK(c, 11);
    // 0d0f4c  push 3
    X86_AT(c, 0xd0f4cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0f4e  push edi
    X86_AT(c, 0xd0f4eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0f4f  call 0xd0e88
    X86_AT(c, 0xd0f4fu);
    push32(c, 0xd0f54u); x86_call_known(c, 0xd0e88u, f_000d0e88); X86_RET(c, 0xd0f54u);
    X86_TICK(c, 16);
    // 0d0f54  inc esi
    X86_AT(c, 0xd0f54u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d0f55  add esp, 0x30
    X86_AT(c, 0xd0f55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d0f58  cmp dword ptr [0xaa2dc], 0xbb8
    X86_AT(c, 0xd0f58u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2DCu))), 0xBB8u, 0, 4);
    // 0d0f62  jle 0xd0f8d
    X86_AT(c, 0xd0f62u);
    if (x86_cc(c, 14)) { goto L_d0f8d; }
    X86_TICK(c, 11);
    // 0d0f64  push esi
    X86_AT(c, 0xd0f64u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0f65  push 0
    X86_AT(c, 0xd0f65u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0f67  call 0xcc814
    X86_AT(c, 0xd0f67u);
    push32(c, 0xd0f6cu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0f6cu);
    X86_TICK(c, 11);
    // 0d0f6c  push 4
    X86_AT(c, 0xd0f6cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0f6e  push edi
    X86_AT(c, 0xd0f6eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0f6f  call 0xd0e88
    X86_AT(c, 0xd0f6fu);
    push32(c, 0xd0f74u); x86_call_known(c, 0xd0e88u, f_000d0e88); X86_RET(c, 0xd0f74u);
    X86_TICK(c, 13);
    // 0d0f74  inc esi
    X86_AT(c, 0xd0f74u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d0f75  push esi
    X86_AT(c, 0xd0f75u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0f76  push 0
    X86_AT(c, 0xd0f76u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0f78  call 0xcc814
    X86_AT(c, 0xd0f78u);
    push32(c, 0xd0f7du); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd0f7du);
    X86_TICK(c, 11);
    // 0d0f7d  push 5
    X86_AT(c, 0xd0f7du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d0f7f  push edi
    X86_AT(c, 0xd0f7fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0f80  call 0xd0e88
    X86_AT(c, 0xd0f80u);
    push32(c, 0xd0f85u); x86_call_known(c, 0xd0e88u, f_000d0e88); X86_RET(c, 0xd0f85u);
    X86_TICK(c, 6);
    // 0d0f85  inc esi
    X86_AT(c, 0xd0f85u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d0f86  mov byte ptr [ebp - 1], 0x46
    X86_AT(c, 0xd0f86u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x46u);
    // 0d0f8a  add esp, 0x20
    X86_AT(c, 0xd0f8au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_d0f8d:
    X86_TICK(c, 9);
    // 0d0f8d  push 7
    X86_AT(c, 0xd0f8du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0f8f  call 0xc81e4
    X86_AT(c, 0xd0f8fu);
    push32(c, 0xd0f94u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd0f94u);
    X86_TICK(c, 12);
    // 0d0f94  add esp, 4
    X86_AT(c, 0xd0f94u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0f97  xchg ebx, eax
    X86_AT(c, 0xd0f97u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d0f98  and bl, bl
    X86_AT(c, 0xd0f98u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d0f9a  je 0xd0f8d
    X86_AT(c, 0xd0f9au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd0f8du); goto L_d0f8d; }
    X86_TICK(c, 7);
    // 0d0f9c  cmp bl, 0x42
    X86_AT(c, 0xd0f9cu);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d0f9f  jb 0xd0fa6
    X86_AT(c, 0xd0f9fu);
    if (x86_cc(c, 2)) { goto L_d0fa6; }
    X86_TICK(c, 11);
    // 0d0fa1  cmp bl, byte ptr [ebp - 1]
    X86_AT(c, 0xd0fa1u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0, 1);
    // 0d0fa4  jbe 0xd0fb4
    X86_AT(c, 0xd0fa4u);
    if (x86_cc(c, 6)) { goto L_d0fb4; }
L_d0fa6:
    X86_TICK(c, 11);
    // 0d0fa6  push 0xf
    X86_AT(c, 0xd0fa6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0fa8  push 0x750c
    X86_AT(c, 0xd0fa8u);
    { uint32_t v = 0x750Cu; push32(c, v); }
    // 0d0fad  call 0xcc830
    X86_AT(c, 0xd0fadu);
    push32(c, 0xd0fb2u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0fb2u);
    X86_TICK(c, 7);
    // 0d0fb2  jmp 0xd1023
    X86_AT(c, 0xd0fb2u);
    goto L_d1023;
L_d0fb4:
    X86_TICK(c, 14);
    // 0d0fb4  movzx ebx, bl
    X86_AT(c, 0xd0fb4u);
    c.r[3] = g8(c, 3);
    // 0d0fb7  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0fb7u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0fba  push eax
    X86_AT(c, 0xd0fbau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0fbb  call 0xd0cf0
    X86_AT(c, 0xd0fbbu);
    push32(c, 0xd0fc0u); x86_call_known(c, 0xd0cf0u, f_000d0cf0); X86_RET(c, 0xd0fc0u);
    X86_TICK(c, 13);
    // 0d0fc0  add esp, 4
    X86_AT(c, 0xd0fc0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0fc3  cmp eax, dword ptr [0xb031a]
    X86_AT(c, 0xd0fc3u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0, 4);
    // 0d0fc9  jle 0xd0fde
    X86_AT(c, 0xd0fc9u);
    if (x86_cc(c, 14)) { goto L_d0fde; }
    X86_TICK(c, 11);
    // 0d0fcb  push 0xf
    X86_AT(c, 0xd0fcbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0fcd  push 0x752c
    X86_AT(c, 0xd0fcdu);
    { uint32_t v = 0x752Cu; push32(c, v); }
    // 0d0fd2  call 0xcc830
    X86_AT(c, 0xd0fd2u);
    push32(c, 0xd0fd7u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd0fd7u);
    X86_TICK(c, 7);
    // 0d0fd7  call 0xcfffc
    X86_AT(c, 0xd0fd7u);
    push32(c, 0xd0fdcu); x86_call_known(c, 0xcfffcu, f_000cfffc); X86_RET(c, 0xd0fdcu);
    X86_TICK(c, 7);
    // 0d0fdc  jmp 0xd1023
    X86_AT(c, 0xd0fdcu);
    goto L_d1023;
L_d0fde:
    X86_TICK(c, 14);
    // 0d0fde  movzx ebx, bl
    X86_AT(c, 0xd0fdeu);
    c.r[3] = g8(c, 3);
    // 0d0fe1  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0fe1u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0fe4  push eax
    X86_AT(c, 0xd0fe4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0fe5  call 0xd0cf0
    X86_AT(c, 0xd0fe5u);
    push32(c, 0xd0feau); x86_call_known(c, 0xd0cf0u, f_000d0cf0); X86_RET(c, 0xd0feau);
    X86_TICK(c, 20);
    // 0d0fea  sub dword ptr [0xb031a], eax
    X86_AT(c, 0xd0feau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0d0ff0  add esp, 4
    X86_AT(c, 0xd0ff0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0ff3  mov eax, dword ptr [ebx*4 + 0xb0276]
    X86_AT(c, 0xd0ff3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB0276u)));
    // 0d0ffa  cmp eax, 0xff
    X86_AT(c, 0xd0ffau);
    (void)x86_sub(c, c.r[0], 0xFFu, 0, 4);
    // 0d0fff  jge 0xd1008
    X86_AT(c, 0xd0fffu);
    if (x86_cc(c, 13)) { goto L_d1008; }
    X86_TICK(c, 6);
    // 0d1001  inc dword ptr [ebx*4 + 0xb0276]
    X86_AT(c, 0xd1001u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB0276u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_d1008:
    X86_TICK(c, 17);
    // 0d1008  push 0xf
    X86_AT(c, 0xd1008u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d100a  movzx ebx, bl
    X86_AT(c, 0xd100au);
    c.r[3] = g8(c, 3);
    // 0d100d  push dword ptr [ebx*4 + 0xa1d6c]
    X86_AT(c, 0xd100du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA1D6Cu))); push32(c, v); }
    // 0d1014  call 0xcc830
    X86_AT(c, 0xd1014u);
    push32(c, 0xd1019u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1019u);
    X86_TICK(c, 7);
    // 0d1019  call 0xcc6cc
    X86_AT(c, 0xd1019u);
    push32(c, 0xd101eu); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd101eu);
    X86_TICK(c, 7);
    // 0d101e  call 0xcffc4
    X86_AT(c, 0xd101eu);
    push32(c, 0xd1023u); x86_call_known(c, 0xcffc4u, f_000cffc4); X86_RET(c, 0xd1023u);
L_d1023:
    X86_TICK(c, 2);
    // 0d1023  add esp, 8
    X86_AT(c, 0xd1023u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d1026:
    X86_TICK(c, 9);
    // 0d1026  push 0x754c
    X86_AT(c, 0xd1026u);
    { uint32_t v = 0x754Cu; push32(c, v); }
    // 0d102b  call 0xcc7bc
    X86_AT(c, 0xd102bu);
    push32(c, 0xd1030u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd1030u);
    X86_TICK(c, 30);
    // 0d1030  add esp, 4
    X86_AT(c, 0xd1030u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1033  pop edi
    X86_AT(c, 0xd1033u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d1034  pop esi
    X86_AT(c, 0xd1034u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d1035  pop ebx
    X86_AT(c, 0xd1035u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d1036  leave 
    X86_AT(c, 0xd1036u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d1037  ret 
    X86_AT(c, 0xd1037u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0eecu, "ran off the end of a function");
}
void f_000d1038(X86Cpu& c) {
    X86_TICK(c, 84);
    // 0d1038  mov eax, 0xc8
    X86_AT(c, 0xd1038u);
    c.r[0] = 0xC8u;
    // 0d103d  sub eax, dword ptr [0xb0312]
    X86_AT(c, 0xd103du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0312u))), 0, 4); }
    // 0d1043  cdq 
    X86_AT(c, 0xd1043u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d1044  mov ecx, 0x20
    X86_AT(c, 0xd1044u);
    c.r[1] = 0x20u;
    // 0d1049  idiv ecx
    X86_AT(c, 0xd1049u);
    x86_idiv(c, c.r[1], 4, 0xd1049u);
    // 0d104b  imul eax, dword ptr [esp + 4]
    X86_AT(c, 0xd104bu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))), 4);
    // 0d1050  ret 
    X86_AT(c, 0xd1050u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1038u, "ran off the end of a function");
}
void f_000d1054(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0d1054  push ebp
    X86_AT(c, 0xd1054u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d1055  mov ebp, esp
    X86_AT(c, 0xd1055u);
    c.r[5] = c.r[4];
    // 0d1057  push ebx
    X86_AT(c, 0xd1057u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1058  push edi
    X86_AT(c, 0xd1058u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1059  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd1059u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d105c  mov ebx, edi
    X86_AT(c, 0xd105cu);
    c.r[3] = c.r[7];
    // 0d105e  add bl, 0x41
    X86_AT(c, 0xd105eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_add(c, v, 0x41u, 0, 1)); }
    // 0d1061  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xd1061u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0d1064  push 0
    X86_AT(c, 0xd1064u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1066  call 0xcc814
    X86_AT(c, 0xd1066u);
    push32(c, 0xd106bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd106bu);
    X86_TICK(c, 13);
    // 0d106b  push 0xf
    X86_AT(c, 0xd106bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d106d  push ebx
    X86_AT(c, 0xd106du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d106e  push 4
    X86_AT(c, 0xd106eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1070  call 0xcc7dc
    X86_AT(c, 0xd1070u);
    push32(c, 0xd1075u); x86_call_known(c, 0xcc7dcu, f_000cc7dc); X86_RET(c, 0xd1075u);
    X86_TICK(c, 11);
    // 0d1075  push 0x7550
    X86_AT(c, 0xd1075u);
    { uint32_t v = 0x7550u; push32(c, v); }
    // 0d107a  push 4
    X86_AT(c, 0xd107au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d107c  call 0xc8cdc
    X86_AT(c, 0xd107cu);
    push32(c, 0xd1081u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1081u);
    X86_TICK(c, 14);
    // 0d1081  push dword ptr [edi*4 + 0xab094]
    X86_AT(c, 0xd1081u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xAB094u))); push32(c, v); }
    // 0d1088  push 4
    X86_AT(c, 0xd1088u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d108a  call 0xc8cdc
    X86_AT(c, 0xd108au);
    push32(c, 0xd108fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd108fu);
    X86_TICK(c, 11);
    // 0d108f  push 0x7554
    X86_AT(c, 0xd108fu);
    { uint32_t v = 0x7554u; push32(c, v); }
    // 0d1094  push 4
    X86_AT(c, 0xd1094u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1096  call 0xc8cdc
    X86_AT(c, 0xd1096u);
    push32(c, 0xd109bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd109bu);
    X86_TICK(c, 11);
    // 0d109b  push 3
    X86_AT(c, 0xd109bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d109d  push edi
    X86_AT(c, 0xd109du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d109e  call 0xd1038
    X86_AT(c, 0xd109eu);
    push32(c, 0xd10a3u); x86_call_known(c, 0xd1038u, f_000d1038); X86_RET(c, 0xd10a3u);
    X86_TICK(c, 13);
    // 0d10a3  add esp, 4
    X86_AT(c, 0xd10a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d10a6  push eax
    X86_AT(c, 0xd10a6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d10a7  push 4
    X86_AT(c, 0xd10a7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d10a9  call 0xc8cb8
    X86_AT(c, 0xd10a9u);
    push32(c, 0xd10aeu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd10aeu);
    X86_TICK(c, 26);
    // 0d10ae  add esp, 0x38
    X86_AT(c, 0xd10aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0d10b1  pop edi
    X86_AT(c, 0xd10b1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d10b2  pop ebx
    X86_AT(c, 0xd10b2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d10b3  leave 
    X86_AT(c, 0xd10b3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d10b4  ret 
    X86_AT(c, 0xd10b4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1054u, "ran off the end of a function");
}
void f_000d10b8(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0d10b8  push ebp
    X86_AT(c, 0xd10b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d10b9  mov ebp, esp
    X86_AT(c, 0xd10b9u);
    c.r[5] = c.r[4];
    // 0d10bb  sub esp, 0xc
    X86_AT(c, 0xd10bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0d10be  push ebx
    X86_AT(c, 0xd10beu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d10bf  push esi
    X86_AT(c, 0xd10bfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d10c0  push edi
    X86_AT(c, 0xd10c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d10c1  mov esi, 1
    X86_AT(c, 0xd10c1u);
    c.r[6] = 0x1u;
    // 0d10c6  mov eax, dword ptr [0xaae98]
    X86_AT(c, 0xd10c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAE98u)));
    // 0d10cb  sub eax, 2
    X86_AT(c, 0xd10cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0d10ce  push eax
    X86_AT(c, 0xd10ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d10cf  call 0xd4778
    X86_AT(c, 0xd10cfu);
    push32(c, 0xd10d4u); x86_call_known(c, 0xd4778u, f_000d4778); X86_RET(c, 0xd10d4u);
    X86_TICK(c, 16);
    // 0d10d4  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd10d4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d10d7  add esp, 4
    X86_AT(c, 0xd10d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d10da  cmp byte ptr [ebp + 8], 0x53
    X86_AT(c, 0xd10dau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x53u, 0, 1);
    // 0d10de  jne 0xd110d
    X86_AT(c, 0xd10deu);
    if (x86_cc(c, 5)) { goto L_d110d; }
    X86_TICK(c, 9);
    // 0d10e0  push 0x7558
    X86_AT(c, 0xd10e0u);
    { uint32_t v = 0x7558u; push32(c, v); }
    // 0d10e5  call 0xcc7bc
    X86_AT(c, 0xd10e5u);
    push32(c, 0xd10eau); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd10eau);
    X86_TICK(c, 9);
    // 0d10ea  push 0x7598
    X86_AT(c, 0xd10eau);
    { uint32_t v = 0x7598u; push32(c, v); }
    // 0d10ef  call 0xcc7bc
    X86_AT(c, 0xd10efu);
    push32(c, 0xd10f4u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd10f4u);
    X86_TICK(c, 7);
    // 0d10f4  call 0xcf604
    X86_AT(c, 0xd10f4u);
    push32(c, 0xd10f9u); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd10f9u);
    X86_TICK(c, 11);
    // 0d10f9  push 0xf
    X86_AT(c, 0xd10f9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d10fb  push 0x75d0
    X86_AT(c, 0xd10fbu);
    { uint32_t v = 0x75D0u; push32(c, v); }
    // 0d1100  call 0xcc830
    X86_AT(c, 0xd1100u);
    push32(c, 0xd1105u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1105u);
    X86_TICK(c, 9);
    // 0d1105  add esp, 0x10
    X86_AT(c, 0xd1105u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1108  jmp 0xd123a
    X86_AT(c, 0xd1108u);
    goto L_d123a;
L_d110d:
    X86_TICK(c, 34);
    // 0d110d  mov edi, dword ptr [0xaae98]
    X86_AT(c, 0xd110du);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xAAE98u)));
    // 0d1113  and edi, 1
    X86_AT(c, 0xd1113u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0x1u, 4); }
    // 0d1119  mov eax, edi
    X86_AT(c, 0xd1119u);
    c.r[0] = c.r[7];
    // 0d111b  mov byte ptr [ebp - 0xc], al
    X86_AT(c, 0xd111bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), g8(c, 0));
    // 0d111e  add al, 0x42
    X86_AT(c, 0xd111eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x42u, 0, 1)); }
    // 0d1120  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xd1120u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0d1123  mov al, byte ptr [ebp - 0xc]
    X86_AT(c, 0xd1123u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0d1126  add al, 0x46
    X86_AT(c, 0xd1126u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x46u, 0, 1)); }
    // 0d1128  mov byte ptr [ebp - 6], al
    X86_AT(c, 0xd1128u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 0));
    // 0d112b  cmp byte ptr [0xb02fc], 2
    X86_AT(c, 0xd112bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB02FCu))), 0x2u, 0, 1);
    // 0d1132  je 0xd1145
    X86_AT(c, 0xd1132u);
    if (x86_cc(c, 4)) { goto L_d1145; }
    X86_TICK(c, 11);
    // 0d1134  push 0x1e
    X86_AT(c, 0xd1134u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0d1136  push 1
    X86_AT(c, 0xd1136u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d1138  call 0xc5df0
    X86_AT(c, 0xd1138u);
    push32(c, 0xd113du); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd113du);
    X86_TICK(c, 9);
    // 0d113d  add esp, 8
    X86_AT(c, 0xd113du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1140  cmp eax, 2
    X86_AT(c, 0xd1140u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0d1143  jge 0xd114c
    X86_AT(c, 0xd1143u);
    if (x86_cc(c, 13)) { goto L_d114c; }
L_d1145:
    X86_TICK(c, 6);
    // 0d1145  mov eax, edi
    X86_AT(c, 0xd1145u);
    c.r[0] = c.r[7];
    // 0d1147  add al, 0x4a
    X86_AT(c, 0xd1147u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4Au, 0, 1)); }
    // 0d1149  mov byte ptr [ebp - 6], al
    X86_AT(c, 0xd1149u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 0));
L_d114c:
    X86_TICK(c, 6);
    // 0d114c  movzx edi, byte ptr [ebp - 5]
    X86_AT(c, 0xd114cu);
    c.r[7] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)));
L_d1150:
    X86_TICK(c, 13);
    // 0d1150  movzx eax, byte ptr [ebp - 6]
    X86_AT(c, 0xd1150u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 0d1154  cmp eax, edi
    X86_AT(c, 0xd1154u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0d1156  jl 0xd1173
    X86_AT(c, 0xd1156u);
    if (x86_cc(c, 12)) { goto L_d1173; }
    X86_TICK(c, 7);
    // 0d1158  cmp edi, 0x45
    X86_AT(c, 0xd1158u);
    (void)x86_sub(c, c.r[7], 0x45u, 0, 4);
    // 0d115b  je 0xd116e
    X86_AT(c, 0xd115bu);
    if (x86_cc(c, 4)) { goto L_d116e; }
    X86_TICK(c, 18);
    // 0d115d  push esi
    X86_AT(c, 0xd115du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d115e  lea eax, [edi - 0x41]
    X86_AT(c, 0xd115eu);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFBFu);
    // 0d1161  push eax
    X86_AT(c, 0xd1161u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1162  push dword ptr [ebp - 4]
    X86_AT(c, 0xd1162u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d1165  call 0xd1054
    X86_AT(c, 0xd1165u);
    push32(c, 0xd116au); x86_call_known(c, 0xd1054u, f_000d1054); X86_RET(c, 0xd116au);
    X86_TICK(c, 4);
    // 0d116a  inc esi
    X86_AT(c, 0xd116au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d116b  add esp, 0xc
    X86_AT(c, 0xd116bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d116e:
    X86_TICK(c, 9);
    // 0d116e  add edi, 2
    X86_AT(c, 0xd116eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 0d1171  jmp 0xd1150
    X86_AT(c, 0xd1171u);
    X86_POLL(c, 0xd1150u); goto L_d1150;
L_d1173:
    X86_TICK(c, 9);
    // 0d1173  push 7
    X86_AT(c, 0xd1173u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1175  call 0xc81e4
    X86_AT(c, 0xd1175u);
    push32(c, 0xd117au); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd117au);
    X86_TICK(c, 12);
    // 0d117a  add esp, 4
    X86_AT(c, 0xd117au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d117d  xchg ebx, eax
    X86_AT(c, 0xd117du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d117e  and bl, bl
    X86_AT(c, 0xd117eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d1180  je 0xd1173
    X86_AT(c, 0xd1180u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd1173u); goto L_d1173; }
    X86_TICK(c, 9);
    // 0d1182  push 7
    X86_AT(c, 0xd1182u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1184  call 0xca0a0
    X86_AT(c, 0xd1184u);
    push32(c, 0xd1189u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd1189u);
    X86_TICK(c, 13);
    // 0d1189  add esp, 4
    X86_AT(c, 0xd1189u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d118c  cmp bl, byte ptr [ebp - 5]
    X86_AT(c, 0xd118cu);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0, 1);
    // 0d118f  jb 0xd1196
    X86_AT(c, 0xd118fu);
    if (x86_cc(c, 2)) { goto L_d1196; }
    X86_TICK(c, 11);
    // 0d1191  cmp bl, byte ptr [ebp - 6]
    X86_AT(c, 0xd1191u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))), 0, 1);
    // 0d1194  jbe 0xd119f
    X86_AT(c, 0xd1194u);
    if (x86_cc(c, 6)) { goto L_d119f; }
L_d1196:
    X86_TICK(c, 11);
    // 0d1196  push 0xf
    X86_AT(c, 0xd1196u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1198  push 0x75f4
    X86_AT(c, 0xd1198u);
    { uint32_t v = 0x75F4u; push32(c, v); }
    // 0d119d  jmp 0xd11c1
    X86_AT(c, 0xd119du);
    goto L_d11c1;
L_d119f:
    X86_TICK(c, 20);
    // 0d119f  movzx ebx, bl
    X86_AT(c, 0xd119fu);
    c.r[3] = g8(c, 3);
    // 0d11a2  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd11a2u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d11a5  and eax, 1
    X86_AT(c, 0xd11a5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1u, 4); }
    // 0d11aa  mov edx, dword ptr [0xaae98]
    X86_AT(c, 0xd11aau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xAAE98u)));
    // 0d11b0  and edx, 1
    X86_AT(c, 0xd11b0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x1u, 4); }
    // 0d11b6  cmp edx, eax
    X86_AT(c, 0xd11b6u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d11b8  jne 0xd11c8
    X86_AT(c, 0xd11b8u);
    if (x86_cc(c, 5)) { goto L_d11c8; }
    X86_TICK(c, 4);
    // 0d11ba  push 0xf
    X86_AT(c, 0xd11bau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d11bc  push 0x7614
    X86_AT(c, 0xd11bcu);
    { uint32_t v = 0x7614u; push32(c, v); }
L_d11c1:
    X86_TICK(c, 7);
    // 0d11c1  call 0xcc830
    X86_AT(c, 0xd11c1u);
    push32(c, 0xd11c6u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd11c6u);
    X86_TICK(c, 7);
    // 0d11c6  jmp 0xd1237
    X86_AT(c, 0xd11c6u);
    goto L_d1237;
L_d11c8:
    X86_TICK(c, 14);
    // 0d11c8  movzx ebx, bl
    X86_AT(c, 0xd11c8u);
    c.r[3] = g8(c, 3);
    // 0d11cb  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd11cbu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d11ce  push eax
    X86_AT(c, 0xd11ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d11cf  call 0xd1038
    X86_AT(c, 0xd11cfu);
    push32(c, 0xd11d4u); x86_call_known(c, 0xd1038u, f_000d1038); X86_RET(c, 0xd11d4u);
    X86_TICK(c, 13);
    // 0d11d4  add esp, 4
    X86_AT(c, 0xd11d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d11d7  cmp eax, dword ptr [0xb031a]
    X86_AT(c, 0xd11d7u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0, 4);
    // 0d11dd  jle 0xd11f2
    X86_AT(c, 0xd11ddu);
    if (x86_cc(c, 14)) { goto L_d11f2; }
    X86_TICK(c, 11);
    // 0d11df  push 0xf
    X86_AT(c, 0xd11dfu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d11e1  push 0x7634
    X86_AT(c, 0xd11e1u);
    { uint32_t v = 0x7634u; push32(c, v); }
    // 0d11e6  call 0xcc830
    X86_AT(c, 0xd11e6u);
    push32(c, 0xd11ebu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd11ebu);
    X86_TICK(c, 7);
    // 0d11eb  call 0xcfffc
    X86_AT(c, 0xd11ebu);
    push32(c, 0xd11f0u); x86_call_known(c, 0xcfffcu, f_000cfffc); X86_RET(c, 0xd11f0u);
    X86_TICK(c, 7);
    // 0d11f0  jmp 0xd1237
    X86_AT(c, 0xd11f0u);
    goto L_d1237;
L_d11f2:
    X86_TICK(c, 14);
    // 0d11f2  movzx ebx, bl
    X86_AT(c, 0xd11f2u);
    c.r[3] = g8(c, 3);
    // 0d11f5  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd11f5u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d11f8  push eax
    X86_AT(c, 0xd11f8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d11f9  call 0xd1038
    X86_AT(c, 0xd11f9u);
    push32(c, 0xd11feu); x86_call_known(c, 0xd1038u, f_000d1038); X86_RET(c, 0xd11feu);
    X86_TICK(c, 20);
    // 0d11fe  sub dword ptr [0xb031a], eax
    X86_AT(c, 0xd11feu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0d1204  add esp, 4
    X86_AT(c, 0xd1204u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1207  mov eax, dword ptr [ebx*4 + 0xb02ce]
    X86_AT(c, 0xd1207u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB02CEu)));
    // 0d120e  cmp eax, 0xff
    X86_AT(c, 0xd120eu);
    (void)x86_sub(c, c.r[0], 0xFFu, 0, 4);
    // 0d1213  jge 0xd121c
    X86_AT(c, 0xd1213u);
    if (x86_cc(c, 13)) { goto L_d121c; }
    X86_TICK(c, 6);
    // 0d1215  inc dword ptr [ebx*4 + 0xb02ce]
    X86_AT(c, 0xd1215u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB02CEu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_d121c:
    X86_TICK(c, 17);
    // 0d121c  push 0xf
    X86_AT(c, 0xd121cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d121e  movzx ebx, bl
    X86_AT(c, 0xd121eu);
    c.r[3] = g8(c, 3);
    // 0d1221  push dword ptr [ebx*4 + 0xa1d40]
    X86_AT(c, 0xd1221u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA1D40u))); push32(c, v); }
    // 0d1228  call 0xcc830
    X86_AT(c, 0xd1228u);
    push32(c, 0xd122du); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd122du);
    X86_TICK(c, 7);
    // 0d122d  call 0xcc6cc
    X86_AT(c, 0xd122du);
    push32(c, 0xd1232u); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd1232u);
    X86_TICK(c, 7);
    // 0d1232  call 0xcffc4
    X86_AT(c, 0xd1232u);
    push32(c, 0xd1237u); x86_call_known(c, 0xcffc4u, f_000cffc4); X86_RET(c, 0xd1237u);
L_d1237:
    X86_TICK(c, 2);
    // 0d1237  add esp, 8
    X86_AT(c, 0xd1237u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d123a:
    X86_TICK(c, 9);
    // 0d123a  push 0x7654
    X86_AT(c, 0xd123au);
    { uint32_t v = 0x7654u; push32(c, v); }
    // 0d123f  call 0xcc7bc
    X86_AT(c, 0xd123fu);
    push32(c, 0xd1244u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd1244u);
    X86_TICK(c, 30);
    // 0d1244  add esp, 4
    X86_AT(c, 0xd1244u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1247  pop edi
    X86_AT(c, 0xd1247u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d1248  pop esi
    X86_AT(c, 0xd1248u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d1249  pop ebx
    X86_AT(c, 0xd1249u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d124a  leave 
    X86_AT(c, 0xd124au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d124b  ret 
    X86_AT(c, 0xd124bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd10b8u, "ran off the end of a function");
}
}

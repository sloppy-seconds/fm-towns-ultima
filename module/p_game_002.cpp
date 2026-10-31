#include "p_game_funcs.h"
namespace p_game {
void f_000e2a20(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e2a20  push ebx
    X86_AT(c, 0xe2a20u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2a21  push esi
    X86_AT(c, 0xe2a21u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2a22  push edi
    X86_AT(c, 0xe2a22u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2a23  mov word ptr [0xcda74], 0xffff
    X86_AT(c, 0xe2a23u);
    wr16((c.sbase[3] + (uint32_t)(0xCDA74u)), 0xFFFFu);
    // 0e2a2c  push 0
    X86_AT(c, 0xe2a2cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2a2e  push 0x18d
    X86_AT(c, 0xe2a2eu);
    { uint32_t v = 0x18Du; push32(c, v); }
    // 0e2a33  push 0x168
    X86_AT(c, 0xe2a33u);
    { uint32_t v = 0x168u; push32(c, v); }
    // 0e2a38  push 0x30
    X86_AT(c, 0xe2a38u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0e2a3a  push 0xb
    X86_AT(c, 0xe2a3au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2a3c  call 0xe5e58
    X86_AT(c, 0xe2a3cu);
    push32(c, 0xe2a41u); f_000e5e58(c); X86_RET(c, 0xe2a41u);
    X86_TICK(c, 9);
    // 0e2a41  push 1
    X86_AT(c, 0xe2a41u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2a43  call 0xe58cc
    X86_AT(c, 0xe2a43u);
    push32(c, 0xe2a48u); f_000e58cc(c); X86_RET(c, 0xe2a48u);
    X86_TICK(c, 9);
    // 0e2a48  push 0
    X86_AT(c, 0xe2a48u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2a4a  call 0xe5748
    X86_AT(c, 0xe2a4au);
    push32(c, 0xe2a4fu); f_000e5748(c); X86_RET(c, 0xe2a4fu);
    X86_TICK(c, 4);
    // 0e2a4f  sub edi, edi
    X86_AT(c, 0xe2a4fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e2a51  add esp, 0x1c
    X86_AT(c, 0xe2a51u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_e2a54:
    X86_TICK(c, 7);
    // 0e2a54  cmp edi, 0x20
    X86_AT(c, 0xe2a54u);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0e2a57  jge 0xe2c03
    X86_AT(c, 0xe2a57u);
    if (x86_cc(c, 13)) { goto L_e2c03; }
    X86_TICK(c, 19);
    // 0e2a5d  lea eax, [edi + 0x60]
    X86_AT(c, 0xe2a5du);
    c.r[0] = (uint32_t)(c.r[7] + 0x60u);
    // 0e2a60  push eax
    X86_AT(c, 0xe2a60u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2a61  push 0x1a0
    X86_AT(c, 0xe2a61u);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0e2a66  push eax
    X86_AT(c, 0xe2a66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2a67  push 0x40
    X86_AT(c, 0xe2a67u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e2a69  mov ebx, eax
    X86_AT(c, 0xe2a69u);
    c.r[3] = c.r[0];
    // 0e2a6b  call 0xe5cd4
    X86_AT(c, 0xe2a6bu);
    push32(c, 0xe2a70u); f_000e5cd4(c); X86_RET(c, 0xe2a70u);
    X86_TICK(c, 17);
    // 0e2a70  push 0x1c0
    X86_AT(c, 0xe2a70u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0e2a75  lea eax, [edi + 0x40]
    X86_AT(c, 0xe2a75u);
    c.r[0] = (uint32_t)(c.r[7] + 0x40u);
    // 0e2a78  push eax
    X86_AT(c, 0xe2a78u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2a79  push 0x60
    X86_AT(c, 0xe2a79u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0e2a7b  push eax
    X86_AT(c, 0xe2a7bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2a7c  call 0xe5cd4
    X86_AT(c, 0xe2a7cu);
    push32(c, 0xe2a81u); f_000e5cd4(c); X86_RET(c, 0xe2a81u);
    X86_TICK(c, 19);
    // 0e2a81  lea eax, [edi + 0x80]
    X86_AT(c, 0xe2a81u);
    c.r[0] = (uint32_t)(c.r[7] + 0x80u);
    // 0e2a87  push eax
    X86_AT(c, 0xe2a87u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2a88  push 0x1a0
    X86_AT(c, 0xe2a88u);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0e2a8d  push eax
    X86_AT(c, 0xe2a8du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2a8e  push 0x40
    X86_AT(c, 0xe2a8eu);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e2a90  mov esi, eax
    X86_AT(c, 0xe2a90u);
    c.r[6] = c.r[0];
    // 0e2a92  call 0xe5cd4
    X86_AT(c, 0xe2a92u);
    push32(c, 0xe2a97u); f_000e5cd4(c); X86_RET(c, 0xe2a97u);
    X86_TICK(c, 15);
    // 0e2a97  push 0x1c0
    X86_AT(c, 0xe2a97u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0e2a9c  push ebx
    X86_AT(c, 0xe2a9cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2a9d  push 0x60
    X86_AT(c, 0xe2a9du);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0e2a9f  push ebx
    X86_AT(c, 0xe2a9fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2aa0  call 0xe5cd4
    X86_AT(c, 0xe2aa0u);
    push32(c, 0xe2aa5u); f_000e5cd4(c); X86_RET(c, 0xe2aa5u);
    X86_TICK(c, 21);
    // 0e2aa5  add esp, 0x40
    X86_AT(c, 0xe2aa5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2aa8  lea eax, [edi + 0xa0]
    X86_AT(c, 0xe2aa8u);
    c.r[0] = (uint32_t)(c.r[7] + 0xA0u);
    // 0e2aae  push eax
    X86_AT(c, 0xe2aaeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2aaf  push 0x1a0
    X86_AT(c, 0xe2aafu);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0e2ab4  push eax
    X86_AT(c, 0xe2ab4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2ab5  push 0x40
    X86_AT(c, 0xe2ab5u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e2ab7  mov ebx, eax
    X86_AT(c, 0xe2ab7u);
    c.r[3] = c.r[0];
    // 0e2ab9  call 0xe5cd4
    X86_AT(c, 0xe2ab9u);
    push32(c, 0xe2abeu); f_000e5cd4(c); X86_RET(c, 0xe2abeu);
    X86_TICK(c, 15);
    // 0e2abe  push 0x1c0
    X86_AT(c, 0xe2abeu);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0e2ac3  push esi
    X86_AT(c, 0xe2ac3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2ac4  push 0x60
    X86_AT(c, 0xe2ac4u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0e2ac6  push esi
    X86_AT(c, 0xe2ac6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2ac7  call 0xe5cd4
    X86_AT(c, 0xe2ac7u);
    push32(c, 0xe2accu); f_000e5cd4(c); X86_RET(c, 0xe2accu);
    X86_TICK(c, 19);
    // 0e2acc  lea eax, [edi + 0xc0]
    X86_AT(c, 0xe2accu);
    c.r[0] = (uint32_t)(c.r[7] + 0xC0u);
    // 0e2ad2  push eax
    X86_AT(c, 0xe2ad2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2ad3  push 0x1a0
    X86_AT(c, 0xe2ad3u);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0e2ad8  push eax
    X86_AT(c, 0xe2ad8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2ad9  push 0x40
    X86_AT(c, 0xe2ad9u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e2adb  mov esi, eax
    X86_AT(c, 0xe2adbu);
    c.r[6] = c.r[0];
    // 0e2add  call 0xe5cd4
    X86_AT(c, 0xe2addu);
    push32(c, 0xe2ae2u); f_000e5cd4(c); X86_RET(c, 0xe2ae2u);
    X86_TICK(c, 15);
    // 0e2ae2  push 0x1c0
    X86_AT(c, 0xe2ae2u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0e2ae7  push ebx
    X86_AT(c, 0xe2ae7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2ae8  push 0x60
    X86_AT(c, 0xe2ae8u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0e2aea  push ebx
    X86_AT(c, 0xe2aeau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2aeb  call 0xe5cd4
    X86_AT(c, 0xe2aebu);
    push32(c, 0xe2af0u); f_000e5cd4(c); X86_RET(c, 0xe2af0u);
    X86_TICK(c, 21);
    // 0e2af0  add esp, 0x40
    X86_AT(c, 0xe2af0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2af3  lea eax, [edi + 0xe0]
    X86_AT(c, 0xe2af3u);
    c.r[0] = (uint32_t)(c.r[7] + 0xE0u);
    // 0e2af9  push eax
    X86_AT(c, 0xe2af9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2afa  push 0x1a0
    X86_AT(c, 0xe2afau);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0e2aff  push eax
    X86_AT(c, 0xe2affu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2b00  push 0x40
    X86_AT(c, 0xe2b00u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e2b02  mov ebx, eax
    X86_AT(c, 0xe2b02u);
    c.r[3] = c.r[0];
    // 0e2b04  call 0xe5cd4
    X86_AT(c, 0xe2b04u);
    push32(c, 0xe2b09u); f_000e5cd4(c); X86_RET(c, 0xe2b09u);
    X86_TICK(c, 15);
    // 0e2b09  push 0x1c0
    X86_AT(c, 0xe2b09u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0e2b0e  push esi
    X86_AT(c, 0xe2b0eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2b0f  push 0x60
    X86_AT(c, 0xe2b0fu);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0e2b11  push esi
    X86_AT(c, 0xe2b11u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2b12  call 0xe5cd4
    X86_AT(c, 0xe2b12u);
    push32(c, 0xe2b17u); f_000e5cd4(c); X86_RET(c, 0xe2b17u);
    X86_TICK(c, 17);
    // 0e2b17  lea eax, [edi + 0x100]
    X86_AT(c, 0xe2b17u);
    c.r[0] = (uint32_t)(c.r[7] + 0x100u);
    // 0e2b1d  push eax
    X86_AT(c, 0xe2b1du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2b1e  push 0x1a0
    X86_AT(c, 0xe2b1eu);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0e2b23  push eax
    X86_AT(c, 0xe2b23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2b24  push 0x40
    X86_AT(c, 0xe2b24u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e2b26  call 0xe5cd4
    X86_AT(c, 0xe2b26u);
    push32(c, 0xe2b2bu); f_000e5cd4(c); X86_RET(c, 0xe2b2bu);
    X86_TICK(c, 15);
    // 0e2b2b  push 0x1c0
    X86_AT(c, 0xe2b2bu);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0e2b30  push ebx
    X86_AT(c, 0xe2b30u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2b31  push 0x60
    X86_AT(c, 0xe2b31u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0e2b33  push ebx
    X86_AT(c, 0xe2b33u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2b34  call 0xe5cd4
    X86_AT(c, 0xe2b34u);
    push32(c, 0xe2b39u); f_000e5cd4(c); X86_RET(c, 0xe2b39u);
    X86_TICK(c, 21);
    // 0e2b39  add esp, 0x40
    X86_AT(c, 0xe2b39u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2b3c  lea eax, [edi + 0x120]
    X86_AT(c, 0xe2b3cu);
    c.r[0] = (uint32_t)(c.r[7] + 0x120u);
    // 0e2b42  push eax
    X86_AT(c, 0xe2b42u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2b43  push 0x1a0
    X86_AT(c, 0xe2b43u);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0e2b48  push eax
    X86_AT(c, 0xe2b48u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2b49  push 0x40
    X86_AT(c, 0xe2b49u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e2b4b  mov ebx, eax
    X86_AT(c, 0xe2b4bu);
    c.r[3] = c.r[0];
    // 0e2b4d  call 0xe5cd4
    X86_AT(c, 0xe2b4du);
    push32(c, 0xe2b52u); f_000e5cd4(c); X86_RET(c, 0xe2b52u);
    X86_TICK(c, 17);
    // 0e2b52  push 0x1c0
    X86_AT(c, 0xe2b52u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0e2b57  lea eax, [edi + 0x100]
    X86_AT(c, 0xe2b57u);
    c.r[0] = (uint32_t)(c.r[7] + 0x100u);
    // 0e2b5d  push eax
    X86_AT(c, 0xe2b5du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2b5e  push 0x60
    X86_AT(c, 0xe2b5eu);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0e2b60  push eax
    X86_AT(c, 0xe2b60u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2b61  call 0xe5cd4
    X86_AT(c, 0xe2b61u);
    push32(c, 0xe2b66u); f_000e5cd4(c); X86_RET(c, 0xe2b66u);
    X86_TICK(c, 19);
    // 0e2b66  lea eax, [edi + 0x140]
    X86_AT(c, 0xe2b66u);
    c.r[0] = (uint32_t)(c.r[7] + 0x140u);
    // 0e2b6c  push eax
    X86_AT(c, 0xe2b6cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2b6d  push 0x1a0
    X86_AT(c, 0xe2b6du);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0e2b72  push eax
    X86_AT(c, 0xe2b72u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2b73  push 0x40
    X86_AT(c, 0xe2b73u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e2b75  mov esi, eax
    X86_AT(c, 0xe2b75u);
    c.r[6] = c.r[0];
    // 0e2b77  call 0xe5cd4
    X86_AT(c, 0xe2b77u);
    push32(c, 0xe2b7cu); f_000e5cd4(c); X86_RET(c, 0xe2b7cu);
    X86_TICK(c, 15);
    // 0e2b7c  push 0x1c0
    X86_AT(c, 0xe2b7cu);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0e2b81  push ebx
    X86_AT(c, 0xe2b81u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2b82  push 0x60
    X86_AT(c, 0xe2b82u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0e2b84  push ebx
    X86_AT(c, 0xe2b84u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2b85  call 0xe5cd4
    X86_AT(c, 0xe2b85u);
    push32(c, 0xe2b8au); f_000e5cd4(c); X86_RET(c, 0xe2b8au);
    X86_TICK(c, 21);
    // 0e2b8a  add esp, 0x40
    X86_AT(c, 0xe2b8au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2b8d  lea eax, [edi + 0x160]
    X86_AT(c, 0xe2b8du);
    c.r[0] = (uint32_t)(c.r[7] + 0x160u);
    // 0e2b93  push eax
    X86_AT(c, 0xe2b93u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2b94  push 0x1a0
    X86_AT(c, 0xe2b94u);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0e2b99  push eax
    X86_AT(c, 0xe2b99u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2b9a  push 0x40
    X86_AT(c, 0xe2b9au);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e2b9c  mov ebx, eax
    X86_AT(c, 0xe2b9cu);
    c.r[3] = c.r[0];
    // 0e2b9e  call 0xe5cd4
    X86_AT(c, 0xe2b9eu);
    push32(c, 0xe2ba3u); f_000e5cd4(c); X86_RET(c, 0xe2ba3u);
    X86_TICK(c, 15);
    // 0e2ba3  push 0x1c0
    X86_AT(c, 0xe2ba3u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0e2ba8  push esi
    X86_AT(c, 0xe2ba8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2ba9  push 0x60
    X86_AT(c, 0xe2ba9u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0e2bab  push esi
    X86_AT(c, 0xe2babu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2bac  call 0xe5cd4
    X86_AT(c, 0xe2bacu);
    push32(c, 0xe2bb1u); f_000e5cd4(c); X86_RET(c, 0xe2bb1u);
    X86_TICK(c, 19);
    // 0e2bb1  lea eax, [edi + 0x180]
    X86_AT(c, 0xe2bb1u);
    c.r[0] = (uint32_t)(c.r[7] + 0x180u);
    // 0e2bb7  push eax
    X86_AT(c, 0xe2bb7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2bb8  push 0x1a0
    X86_AT(c, 0xe2bb8u);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0e2bbd  push eax
    X86_AT(c, 0xe2bbdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2bbe  push 0x40
    X86_AT(c, 0xe2bbeu);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e2bc0  mov esi, eax
    X86_AT(c, 0xe2bc0u);
    c.r[6] = c.r[0];
    // 0e2bc2  call 0xe5cd4
    X86_AT(c, 0xe2bc2u);
    push32(c, 0xe2bc7u); f_000e5cd4(c); X86_RET(c, 0xe2bc7u);
    X86_TICK(c, 15);
    // 0e2bc7  push 0x1c0
    X86_AT(c, 0xe2bc7u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0e2bcc  push ebx
    X86_AT(c, 0xe2bccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2bcd  push 0x60
    X86_AT(c, 0xe2bcdu);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0e2bcf  push ebx
    X86_AT(c, 0xe2bcfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2bd0  call 0xe5cd4
    X86_AT(c, 0xe2bd0u);
    push32(c, 0xe2bd5u); f_000e5cd4(c); X86_RET(c, 0xe2bd5u);
    X86_TICK(c, 19);
    // 0e2bd5  add esp, 0x40
    X86_AT(c, 0xe2bd5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2bd8  lea eax, [edi + 0x1a0]
    X86_AT(c, 0xe2bd8u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1A0u);
    // 0e2bde  push eax
    X86_AT(c, 0xe2bdeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2bdf  push 0x1a0
    X86_AT(c, 0xe2bdfu);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0e2be4  push eax
    X86_AT(c, 0xe2be4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2be5  push 0x40
    X86_AT(c, 0xe2be5u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e2be7  call 0xe5cd4
    X86_AT(c, 0xe2be7u);
    push32(c, 0xe2becu); f_000e5cd4(c); X86_RET(c, 0xe2becu);
    X86_TICK(c, 15);
    // 0e2bec  push 0x1c0
    X86_AT(c, 0xe2becu);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0e2bf1  push esi
    X86_AT(c, 0xe2bf1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2bf2  push 0x60
    X86_AT(c, 0xe2bf2u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0e2bf4  push esi
    X86_AT(c, 0xe2bf4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2bf5  call 0xe5cd4
    X86_AT(c, 0xe2bf5u);
    push32(c, 0xe2bfau); f_000e5cd4(c); X86_RET(c, 0xe2bfau);
    X86_TICK(c, 11);
    // 0e2bfa  inc edi
    X86_AT(c, 0xe2bfau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e2bfb  add esp, 0x20
    X86_AT(c, 0xe2bfbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e2bfe  jmp 0xe2a54
    X86_AT(c, 0xe2bfeu);
    X86_POLL(c, 0xe2a54u); goto L_e2a54;
L_e2c03:
    X86_TICK(c, 9);
    // 0e2c03  push 0
    X86_AT(c, 0xe2c03u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2c05  call 0xe58cc
    X86_AT(c, 0xe2c05u);
    push32(c, 0xe2c0au); f_000e58cc(c); X86_RET(c, 0xe2c0au);
    X86_TICK(c, 9);
    // 0e2c0a  push 2
    X86_AT(c, 0xe2c0au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e2c0c  call 0xe58e0
    X86_AT(c, 0xe2c0cu);
    push32(c, 0xe2c11u); f_000e58e0(c); X86_RET(c, 0xe2c11u);
    X86_TICK(c, 24);
    // 0e2c11  add esp, 8
    X86_AT(c, 0xe2c11u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e2c14  pop edi
    X86_AT(c, 0xe2c14u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2c15  pop esi
    X86_AT(c, 0xe2c15u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e2c16  pop ebx
    X86_AT(c, 0xe2c16u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e2c17  ret 
    X86_AT(c, 0xe2c17u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2a20u, "ran off the end of a function");
}
void f_000e2c18(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e2c18  push edi
    X86_AT(c, 0xe2c18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2c19  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe2c19u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e2c1e  lea edx, [eax + eax*4]
    X86_AT(c, 0xe2c1eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e2c21  lea edx, [eax + edx*2]
    X86_AT(c, 0xe2c21u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e2c24  shl edx, 5
    X86_AT(c, 0xe2c24u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e2c27  sub edx, eax
    X86_AT(c, 0xe2c27u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e2c29  cmp dword ptr [edx + 0xcde56], 1
    X86_AT(c, 0xe2c29u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x1u, 0, 4);
    // 0e2c30  jne 0xe2c3c
    X86_AT(c, 0xe2c30u);
    if (x86_cc(c, 5)) { goto L_e2c3c; }
    X86_TICK(c, 9);
    // 0e2c32  mov edi, 0x8c
    X86_AT(c, 0xe2c32u);
    c.r[7] = 0x8Cu;
    // 0e2c37  jmp 0xe2cc5
    X86_AT(c, 0xe2c37u);
    goto L_e2cc5;
L_e2c3c:
    X86_TICK(c, 25);
    // 0e2c3c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe2c3cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e2c41  lea edx, [eax + eax*4]
    X86_AT(c, 0xe2c41u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e2c44  lea edx, [eax + edx*2]
    X86_AT(c, 0xe2c44u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e2c47  shl edx, 5
    X86_AT(c, 0xe2c47u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e2c4a  sub edx, eax
    X86_AT(c, 0xe2c4au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e2c4c  cmp dword ptr [edx + 0xcde56], 2
    X86_AT(c, 0xe2c4cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x2u, 0, 4);
    // 0e2c53  jne 0xe2c5c
    X86_AT(c, 0xe2c53u);
    if (x86_cc(c, 5)) { goto L_e2c5c; }
    X86_TICK(c, 9);
    // 0e2c55  mov edi, 0x90
    X86_AT(c, 0xe2c55u);
    c.r[7] = 0x90u;
    // 0e2c5a  jmp 0xe2cc5
    X86_AT(c, 0xe2c5au);
    goto L_e2cc5;
L_e2c5c:
    X86_TICK(c, 25);
    // 0e2c5c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe2c5cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e2c61  lea edx, [eax + eax*4]
    X86_AT(c, 0xe2c61u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e2c64  lea edx, [eax + edx*2]
    X86_AT(c, 0xe2c64u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e2c67  shl edx, 5
    X86_AT(c, 0xe2c67u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e2c6a  sub edx, eax
    X86_AT(c, 0xe2c6au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e2c6c  cmp dword ptr [edx + 0xcde56], 3
    X86_AT(c, 0xe2c6cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x3u, 0, 4);
    // 0e2c73  jne 0xe2c7c
    X86_AT(c, 0xe2c73u);
    if (x86_cc(c, 5)) { goto L_e2c7c; }
    X86_TICK(c, 9);
    // 0e2c75  mov edi, 0x94
    X86_AT(c, 0xe2c75u);
    c.r[7] = 0x94u;
    // 0e2c7a  jmp 0xe2cc5
    X86_AT(c, 0xe2c7au);
    goto L_e2cc5;
L_e2c7c:
    X86_TICK(c, 25);
    // 0e2c7c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe2c7cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e2c81  lea edx, [eax + eax*4]
    X86_AT(c, 0xe2c81u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e2c84  lea edx, [eax + edx*2]
    X86_AT(c, 0xe2c84u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e2c87  shl edx, 5
    X86_AT(c, 0xe2c87u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e2c8a  sub edx, eax
    X86_AT(c, 0xe2c8au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e2c8c  cmp dword ptr [edx + 0xcde56], 4
    X86_AT(c, 0xe2c8cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x4u, 0, 4);
    // 0e2c93  jne 0xe2c9c
    X86_AT(c, 0xe2c93u);
    if (x86_cc(c, 5)) { goto L_e2c9c; }
    X86_TICK(c, 9);
    // 0e2c95  mov edi, 0x96
    X86_AT(c, 0xe2c95u);
    c.r[7] = 0x96u;
    // 0e2c9a  jmp 0xe2cc5
    X86_AT(c, 0xe2c9au);
    goto L_e2cc5;
L_e2c9c:
    X86_TICK(c, 12);
    // 0e2c9c  push dword ptr [0xceca0]
    X86_AT(c, 0xe2c9cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xCECA0u))); push32(c, v); }
    // 0e2ca2  call 0xe2cfc
    X86_AT(c, 0xe2ca2u);
    push32(c, 0xe2ca7u); f_000e2cfc(c); X86_RET(c, 0xe2ca7u);
    X86_TICK(c, 20);
    // 0e2ca7  xchg edi, eax
    X86_AT(c, 0xe2ca7u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e2ca8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe2ca8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e2cad  lea edx, [eax + eax*4]
    X86_AT(c, 0xe2cadu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e2cb0  lea edx, [eax + edx*2]
    X86_AT(c, 0xe2cb0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e2cb3  shl edx, 5
    X86_AT(c, 0xe2cb3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e2cb6  sub edx, eax
    X86_AT(c, 0xe2cb6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e2cb8  mov dword ptr [edx + 0xcde56], 0xec
    X86_AT(c, 0xe2cb8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u)), 0xECu);
    // 0e2cc2  add esp, 4
    X86_AT(c, 0xe2cc2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e2cc5:
    X86_TICK(c, 28);
    // 0e2cc5  mov dword ptr [0x7a150], 1
    X86_AT(c, 0xe2cc5u);
    wr32((c.sbase[3] + (uint32_t)(0x7A150u)), 0x1u);
    // 0e2ccf  mov eax, 5
    X86_AT(c, 0xe2ccfu);
    c.r[0] = 0x5u;
    // 0e2cd4  mov dword ptr [0x7a154], eax
    X86_AT(c, 0xe2cd4u);
    wr32((c.sbase[3] + (uint32_t)(0x7A154u)), c.r[0]);
    // 0e2cd9  mov dword ptr [0x7a158], eax
    X86_AT(c, 0xe2cd9u);
    wr32((c.sbase[3] + (uint32_t)(0x7A158u)), c.r[0]);
    // 0e2cde  mov dword ptr [0x7a15c], edi
    X86_AT(c, 0xe2cdeu);
    wr32((c.sbase[3] + (uint32_t)(0x7A15Cu)), c.r[7]);
    // 0e2ce4  mov dword ptr [0x7a160], 0xffffffff
    X86_AT(c, 0xe2ce4u);
    wr32((c.sbase[3] + (uint32_t)(0x7A160u)), 0xFFFFFFFFu);
    // 0e2cee  mov dword ptr [0x7a5d0], 1
    X86_AT(c, 0xe2ceeu);
    wr32((c.sbase[3] + (uint32_t)(0x7A5D0u)), 0x1u);
    // 0e2cf8  pop edi
    X86_AT(c, 0xe2cf8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2cf9  ret 
    X86_AT(c, 0xe2cf9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2c18u, "ran off the end of a function");
}
void f_000e2cfc(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0e2cfc  sub ecx, ecx
    X86_AT(c, 0xe2cfcu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0e2cfe  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xe2cfeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e2d02  lea edx, [eax + eax*4]
    X86_AT(c, 0xe2d02u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e2d05  lea edx, [eax + edx*2]
    X86_AT(c, 0xe2d05u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e2d08  shl edx, 5
    X86_AT(c, 0xe2d08u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e2d0b  sub edx, eax
    X86_AT(c, 0xe2d0bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e2d0d  movzx eax, byte ptr [edx + 0xcde7b]
    X86_AT(c, 0xe2d0du);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)));
    // 0e2d14  xchg edx, eax
    X86_AT(c, 0xe2d14u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0e2d15  sub edx, 0x41
    X86_AT(c, 0xe2d15u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0e2d18  cmp edx, 0x16
    X86_AT(c, 0xe2d18u);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0e2d1b  ja 0xe2dcf
    X86_AT(c, 0xe2d1bu);
    if (x86_cc(c, 7)) { goto L_e2dcf; }
    X86_TICK(c, 7);
    // 0e2d21  jmp dword ptr cs:[edx*4 + 0xe2d29]
    X86_AT(c, 0xe2d21u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE2D29u)));
      switch (t) {
      case 0xe2d85u: goto L_e2d85;
      case 0xe2d8cu: goto L_e2d8c;
      case 0xe2d93u: goto L_e2d93;
      case 0xe2d9au: goto L_e2d9a;
      case 0xe2da1u: goto L_e2da1;
      case 0xe2da5u: goto L_e2da5;
      case 0xe2dacu: goto L_e2dac;
      case 0xe2db3u: goto L_e2db3;
      case 0xe2dbau: goto L_e2dba;
      case 0xe2dc1u: goto L_e2dc1;
      case 0xe2dc8u: goto L_e2dc8;
      case 0xe2dcfu: goto L_e2dcf;
      default: x86_jump(c, t); return; } }
L_e2d85:
    X86_TICK(c, 9);
    // 0e2d85  mov ecx, 0x24
    X86_AT(c, 0xe2d85u);
    c.r[1] = 0x24u;
    // 0e2d8a  jmp 0xe2dd4
    X86_AT(c, 0xe2d8au);
    goto L_e2dd4;
L_e2d8c:
    X86_TICK(c, 9);
    // 0e2d8c  mov ecx, 0x14
    X86_AT(c, 0xe2d8cu);
    c.r[1] = 0x14u;
    // 0e2d91  jmp 0xe2dd4
    X86_AT(c, 0xe2d91u);
    goto L_e2dd4;
L_e2d93:
    X86_TICK(c, 9);
    // 0e2d93  mov ecx, 4
    X86_AT(c, 0xe2d93u);
    c.r[1] = 0x4u;
    // 0e2d98  jmp 0xe2dd4
    X86_AT(c, 0xe2d98u);
    goto L_e2dd4;
L_e2d9a:
    X86_TICK(c, 9);
    // 0e2d9a  mov ecx, 0x20
    X86_AT(c, 0xe2d9au);
    c.r[1] = 0x20u;
    // 0e2d9f  jmp 0xe2dd4
    X86_AT(c, 0xe2d9fu);
    goto L_e2dd4;
L_e2da1:
    X86_TICK(c, 9);
    // 0e2da1  sub ecx, ecx
    X86_AT(c, 0xe2da1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0e2da3  jmp 0xe2dd4
    X86_AT(c, 0xe2da3u);
    goto L_e2dd4;
L_e2da5:
    X86_TICK(c, 9);
    // 0e2da5  mov ecx, 0x1c
    X86_AT(c, 0xe2da5u);
    c.r[1] = 0x1Cu;
    // 0e2daa  jmp 0xe2dd4
    X86_AT(c, 0xe2daau);
    goto L_e2dd4;
L_e2dac:
    X86_TICK(c, 9);
    // 0e2dac  mov ecx, 0x18
    X86_AT(c, 0xe2dacu);
    c.r[1] = 0x18u;
    // 0e2db1  jmp 0xe2dd4
    X86_AT(c, 0xe2db1u);
    goto L_e2dd4;
L_e2db3:
    X86_TICK(c, 9);
    // 0e2db3  mov ecx, 0x10
    X86_AT(c, 0xe2db3u);
    c.r[1] = 0x10u;
    // 0e2db8  jmp 0xe2dd4
    X86_AT(c, 0xe2db8u);
    goto L_e2dd4;
L_e2dba:
    X86_TICK(c, 9);
    // 0e2dba  mov ecx, 0x28
    X86_AT(c, 0xe2dbau);
    c.r[1] = 0x28u;
    // 0e2dbf  jmp 0xe2dd4
    X86_AT(c, 0xe2dbfu);
    goto L_e2dd4;
L_e2dc1:
    X86_TICK(c, 9);
    // 0e2dc1  mov ecx, 0xc
    X86_AT(c, 0xe2dc1u);
    c.r[1] = 0xCu;
    // 0e2dc6  jmp 0xe2dd4
    X86_AT(c, 0xe2dc6u);
    goto L_e2dd4;
L_e2dc8:
    X86_TICK(c, 9);
    // 0e2dc8  mov ecx, 8
    X86_AT(c, 0xe2dc8u);
    c.r[1] = 0x8u;
    // 0e2dcd  jmp 0xe2dd4
    X86_AT(c, 0xe2dcdu);
    goto L_e2dd4;
L_e2dcf:
    X86_TICK(c, 2);
    // 0e2dcf  mov ecx, 0x6a
    X86_AT(c, 0xe2dcfu);
    c.r[1] = 0x6Au;
L_e2dd4:
    X86_TICK(c, 25);
    // 0e2dd4  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe2dd4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e2dd9  lea edx, [eax + eax*4]
    X86_AT(c, 0xe2dd9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e2ddc  lea edx, [eax + edx*2]
    X86_AT(c, 0xe2ddcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e2ddf  shl edx, 5
    X86_AT(c, 0xe2ddfu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e2de2  sub edx, eax
    X86_AT(c, 0xe2de2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e2de4  cmp byte ptr [edx + 0xcde7c], 0x46
    X86_AT(c, 0xe2de4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu))), 0x46u, 0, 1);
    // 0e2deb  jne 0xe2df0
    X86_AT(c, 0xe2debu);
    if (x86_cc(c, 5)) { goto L_e2df0; }
    X86_TICK(c, 2);
    // 0e2ded  add ecx, 2
    X86_AT(c, 0xe2dedu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_e2df0:
    X86_TICK(c, 12);
    // 0e2df0  mov eax, ecx
    X86_AT(c, 0xe2df0u);
    c.r[0] = c.r[1];
    // 0e2df2  ret 
    X86_AT(c, 0xe2df2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2cfcu, "ran off the end of a function");
}
void f_000e2df4(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0e2df4  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xe2df4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e2df8  lea eax, [eax*8]
    X86_AT(c, 0xe2df8u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0e2dff  lea eax, [eax + eax*2]
    X86_AT(c, 0xe2dffu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e2e02  mov dword ptr [eax + 0x7a150], 0
    X86_AT(c, 0xe2e02u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x7A150u)), 0x0u);
    // 0e2e0c  ret 
    X86_AT(c, 0xe2e0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2df4u, "ran off the end of a function");
}
void f_000e2e10(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0e2e10  push ebp
    X86_AT(c, 0xe2e10u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e2e11  mov ebp, esp
    X86_AT(c, 0xe2e11u);
    c.r[5] = c.r[4];
    // 0e2e13  push edi
    X86_AT(c, 0xe2e13u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2e14  mov edi, 1
    X86_AT(c, 0xe2e14u);
    c.r[7] = 0x1u;
L_e2e19:
    X86_TICK(c, 7);
    // 0e2e19  cmp edi, 0x30
    X86_AT(c, 0xe2e19u);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0e2e1c  jge 0xe2e34
    X86_AT(c, 0xe2e1cu);
    if (x86_cc(c, 13)) { goto L_e2e34; }
    X86_TICK(c, 16);
    // 0e2e1e  lea eax, [edi*8]
    X86_AT(c, 0xe2e1eu);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0e2e25  lea eax, [eax + eax*2]
    X86_AT(c, 0xe2e25u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e2e28  cmp dword ptr [eax + 0x7a150], 0
    X86_AT(c, 0xe2e28u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x7A150u))), 0x0u, 0, 4);
    // 0e2e2f  je 0xe2e34
    X86_AT(c, 0xe2e2fu);
    if (x86_cc(c, 4)) { goto L_e2e34; }
    X86_TICK(c, 9);
    // 0e2e31  inc edi
    X86_AT(c, 0xe2e31u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e2e32  jmp 0xe2e19
    X86_AT(c, 0xe2e32u);
    X86_POLL(c, 0xe2e19u); goto L_e2e19;
L_e2e34:
    X86_TICK(c, 7);
    // 0e2e34  cmp edi, 0x30
    X86_AT(c, 0xe2e34u);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0e2e37  jl 0xe2e4d
    X86_AT(c, 0xe2e37u);
    if (x86_cc(c, 12)) { goto L_e2e4d; }
    X86_TICK(c, 9);
    // 0e2e39  push 0x1c40
    X86_AT(c, 0xe2e39u);
    { uint32_t v = 0x1C40u; push32(c, v); }
    // 0e2e3e  call 0xe75f8
    X86_AT(c, 0xe2e3eu);
    push32(c, 0xe2e43u); f_000e75f8(c); X86_RET(c, 0xe2e43u);
    X86_TICK(c, 11);
    // 0e2e43  mov eax, 0xffffffff
    X86_AT(c, 0xe2e43u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e2e48  add esp, 4
    X86_AT(c, 0xe2e48u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2e4b  jmp 0xe2e9c
    X86_AT(c, 0xe2e4bu);
    goto L_e2e9c;
L_e2e4d:
    X86_TICK(c, 36);
    // 0e2e4d  mov eax, 0x40e88
    X86_AT(c, 0xe2e4du);
    c.r[0] = 0x40E88u;
    // 0e2e52  lea edx, [edi*8]
    X86_AT(c, 0xe2e52u);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0e2e59  lea edx, [edx + edx*2]
    X86_AT(c, 0xe2e59u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0e2e5c  mov dword ptr [eax + edx*1 + 0x392c8], 1
    X86_AT(c, 0xe2e5cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392C8u)), 0x1u);
    // 0e2e67  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xe2e67u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e2e6a  mov dword ptr [eax + edx*1 + 0x392cc], ecx
    X86_AT(c, 0xe2e6au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392CCu)), c.r[1]);
    // 0e2e71  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe2e71u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e2e74  mov dword ptr [eax + edx*1 + 0x392d0], ecx
    X86_AT(c, 0xe2e74u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392D0u)), c.r[1]);
    // 0e2e7b  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe2e7bu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e2e7e  mov dword ptr [eax + edx*1 + 0x392d4], ecx
    X86_AT(c, 0xe2e7eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392D4u)), c.r[1]);
    // 0e2e85  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe2e85u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e2e88  mov dword ptr [eax + edx*1 + 0x392d8], ecx
    X86_AT(c, 0xe2e88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392D8u)), c.r[1]);
    // 0e2e8f  mov dword ptr [eax + edx*1 + 0x392dc], 0
    X86_AT(c, 0xe2e8fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392DCu)), 0x0u);
    // 0e2e9a  mov eax, edi
    X86_AT(c, 0xe2e9au);
    c.r[0] = c.r[7];
L_e2e9c:
    X86_TICK(c, 20);
    // 0e2e9c  pop edi
    X86_AT(c, 0xe2e9cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2e9d  leave 
    X86_AT(c, 0xe2e9du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e2e9e  ret 
    X86_AT(c, 0xe2e9eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2e10u, "ran off the end of a function");
}
void f_000e2ea0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0e2ea0  push ebx
    X86_AT(c, 0xe2ea0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2ea1  push esi
    X86_AT(c, 0xe2ea1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2ea2  push edi
    X86_AT(c, 0xe2ea2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2ea3  mov ebx, 0x79f0c
    X86_AT(c, 0xe2ea3u);
    c.r[3] = 0x79F0Cu;
    // 0e2ea8  add ebx, 4
    X86_AT(c, 0xe2ea8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2eab  sub esi, esi
    X86_AT(c, 0xe2eabu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e2ead  mov edi, esi
    X86_AT(c, 0xe2eadu);
    c.r[7] = c.r[6];
L_e2eaf:
    X86_TICK(c, 7);
    // 0e2eaf  cmp edi, 0x30
    X86_AT(c, 0xe2eafu);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0e2eb2  jge 0xe2ef5
    X86_AT(c, 0xe2eb2u);
    if (x86_cc(c, 13)) { goto L_e2ef5; }
    X86_TICK(c, 18);
    // 0e2eb4  mov eax, 0x40e88
    X86_AT(c, 0xe2eb4u);
    c.r[0] = 0x40E88u;
    // 0e2eb9  lea edx, [edi*8]
    X86_AT(c, 0xe2eb9u);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0e2ec0  lea edx, [edx + edx*2]
    X86_AT(c, 0xe2ec0u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0e2ec3  cmp dword ptr [eax + edx*1 + 0x392c8], 0
    X86_AT(c, 0xe2ec3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392C8u))), 0x0u, 0, 4);
    // 0e2ecb  je 0xe2ef2
    X86_AT(c, 0xe2ecbu);
    if (x86_cc(c, 4)) { goto L_e2ef2; }
    X86_TICK(c, 26);
    // 0e2ecd  mov ecx, dword ptr [eax + edx*1 + 0x392cc]
    X86_AT(c, 0xe2ecdu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392CCu)));
    // 0e2ed4  mov dword ptr [ebx], ecx
    X86_AT(c, 0xe2ed4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[1]);
    // 0e2ed6  add ebx, 4
    X86_AT(c, 0xe2ed6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2ed9  mov ecx, dword ptr [eax + edx*1 + 0x392d0]
    X86_AT(c, 0xe2ed9u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392D0u)));
    // 0e2ee0  mov dword ptr [ebx], ecx
    X86_AT(c, 0xe2ee0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[1]);
    // 0e2ee2  add ebx, 4
    X86_AT(c, 0xe2ee2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2ee5  mov eax, dword ptr [eax + edx*1 + 0x392d4]
    X86_AT(c, 0xe2ee5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392D4u)));
    // 0e2eec  mov dword ptr [ebx], eax
    X86_AT(c, 0xe2eecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e2eee  add ebx, 4
    X86_AT(c, 0xe2eeeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2ef1  inc esi
    X86_AT(c, 0xe2ef1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_e2ef2:
    X86_TICK(c, 9);
    // 0e2ef2  inc edi
    X86_AT(c, 0xe2ef2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e2ef3  jmp 0xe2eaf
    X86_AT(c, 0xe2ef3u);
    X86_POLL(c, 0xe2eafu); goto L_e2eaf;
L_e2ef5:
    X86_TICK(c, 24);
    // 0e2ef5  mov dword ptr [0x79f0c], esi
    X86_AT(c, 0xe2ef5u);
    wr32((c.sbase[3] + (uint32_t)(0x79F0Cu)), c.r[6]);
    // 0e2efb  pop edi
    X86_AT(c, 0xe2efbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2efc  pop esi
    X86_AT(c, 0xe2efcu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e2efd  pop ebx
    X86_AT(c, 0xe2efdu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e2efe  ret 
    X86_AT(c, 0xe2efeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2ea0u, "ran off the end of a function");
}
void f_000e2f00(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0e2f00  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xe2f00u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e2f04  lea eax, [ecx*8]
    X86_AT(c, 0xe2f04u);
    c.r[0] = (uint32_t)(c.r[1] * 8);
    // 0e2f0b  lea eax, [eax + eax*2]
    X86_AT(c, 0xe2f0bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e2f0e  mov edx, dword ptr [esp + 8]
    X86_AT(c, 0xe2f0eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0e2f12  mov dword ptr [eax + 0x7a154], edx
    X86_AT(c, 0xe2f12u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x7A154u)), c.r[2]);
    // 0e2f18  mov edx, dword ptr [esp + 0xc]
    X86_AT(c, 0xe2f18u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0e2f1c  mov dword ptr [eax + 0x7a158], edx
    X86_AT(c, 0xe2f1cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x7A158u)), c.r[2]);
    // 0e2f22  ret 
    X86_AT(c, 0xe2f22u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2f00u, "ran off the end of a function");
}
void f_000e2f48(X86Cpu& c) {
    X86_TICK(c, 54);
    // 0e2f48  push ebp
    X86_AT(c, 0xe2f48u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e2f49  mov ebp, esp
    X86_AT(c, 0xe2f49u);
    c.r[5] = c.r[4];
    // 0e2f4b  push edi
    X86_AT(c, 0xe2f4bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2f4c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe2f4cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e2f4f  mov eax, 0x40e88
    X86_AT(c, 0xe2f4fu);
    c.r[0] = 0x40E88u;
    // 0e2f54  lea edx, [edi*8]
    X86_AT(c, 0xe2f54u);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0e2f5b  lea edx, [edx + edx*2]
    X86_AT(c, 0xe2f5bu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0e2f5e  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe2f5eu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e2f61  mov dword ptr [eax + edx*1 + 0x392cc], ecx
    X86_AT(c, 0xe2f61u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392CCu)), c.r[1]);
    // 0e2f68  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe2f68u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e2f6b  mov dword ptr [eax + edx*1 + 0x392d0], ecx
    X86_AT(c, 0xe2f6bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392D0u)), c.r[1]);
    // 0e2f72  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe2f72u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e2f75  mov dword ptr [eax + edx*1 + 0x392d4], ecx
    X86_AT(c, 0xe2f75u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392D4u)), c.r[1]);
    // 0e2f7c  pop edi
    X86_AT(c, 0xe2f7cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2f7d  leave 
    X86_AT(c, 0xe2f7du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e2f7e  ret 
    X86_AT(c, 0xe2f7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2f48u, "ran off the end of a function");
}
void f_000e2fb0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e2fb0  push ebp
    X86_AT(c, 0xe2fb0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e2fb1  mov ebp, esp
    X86_AT(c, 0xe2fb1u);
    c.r[5] = c.r[4];
    // 0e2fb3  push eax
    X86_AT(c, 0xe2fb3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2fb4  push ebx
    X86_AT(c, 0xe2fb4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2fb5  push esi
    X86_AT(c, 0xe2fb5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2fb6  push edi
    X86_AT(c, 0xe2fb6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2fb7  cmp dword ptr [0x7a650], 0
    X86_AT(c, 0xe2fb7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A650u))), 0x0u, 0, 4);
    // 0e2fbe  jne 0xe2fec
    X86_AT(c, 0xe2fbeu);
    if (x86_cc(c, 5)) { goto L_e2fec; }
    X86_TICK(c, 18);
    // 0e2fc0  mov dword ptr [0x7a650], 3
    X86_AT(c, 0xe2fc0u);
    wr32((c.sbase[3] + (uint32_t)(0x7A650u)), 0x3u);
    // 0e2fca  mov esi, dword ptr [0x79f18]
    X86_AT(c, 0xe2fcau);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x79F18u)));
    // 0e2fd0  mov ebx, dword ptr [esi*4 + 0xcd7f4]
    X86_AT(c, 0xe2fd0u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCD7F4u)));
    // 0e2fd7  mov eax, dword ptr [esi*4 + 0xcd7f8]
    X86_AT(c, 0xe2fd7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCD7F8u)));
    // 0e2fde  mov dword ptr [esi*4 + 0xcd7f4], eax
    X86_AT(c, 0xe2fdeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCD7F4u)), c.r[0]);
    // 0e2fe5  mov dword ptr [esi*4 + 0xcd7f8], ebx
    X86_AT(c, 0xe2fe5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCD7F8u)), c.r[3]);
L_e2fec:
    X86_TICK(c, 8);
    // 0e2fec  dec dword ptr [0x7a650]
    X86_AT(c, 0xe2fecu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x7A650u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0e2ff2  sub edi, edi
    X86_AT(c, 0xe2ff2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e2ff4:
    X86_TICK(c, 7);
    // 0e2ff4  cmp edi, 0x30
    X86_AT(c, 0xe2ff4u);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0e2ff7  jge 0xe3055
    X86_AT(c, 0xe2ff7u);
    if (x86_cc(c, 13)) { goto L_e3055; }
    X86_TICK(c, 18);
    // 0e2ff9  mov eax, 0x40e88
    X86_AT(c, 0xe2ff9u);
    c.r[0] = 0x40E88u;
    // 0e2ffe  lea edx, [edi*8]
    X86_AT(c, 0xe2ffeu);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0e3005  lea edx, [edx + edx*2]
    X86_AT(c, 0xe3005u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0e3008  cmp dword ptr [eax + edx*1 + 0x392c8], 0
    X86_AT(c, 0xe3008u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392C8u))), 0x0u, 0, 4);
    // 0e3010  je 0xe3052
    X86_AT(c, 0xe3010u);
    if (x86_cc(c, 4)) { goto L_e3052; }
    X86_TICK(c, 12);
    // 0e3012  cmp dword ptr [eax + edx*1 + 0x392d8], 0xffffffff
    X86_AT(c, 0xe3012u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x392D8u))), 0xFFFFFFFFu, 0, 4);
    // 0e301a  je 0xe3052
    X86_AT(c, 0xe301au);
    if (x86_cc(c, 4)) { goto L_e3052; }
    X86_TICK(c, 11);
    // 0e301c  push 6
    X86_AT(c, 0xe301cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e301e  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xe301eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0e3021  call 0xe1a7c
    X86_AT(c, 0xe3021u);
    push32(c, 0xe3026u); f_000e1a7c(c); X86_RET(c, 0xe3026u);
    X86_TICK(c, 9);
    // 0e3026  add esp, 4
    X86_AT(c, 0xe3026u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e3029  and eax, eax
    X86_AT(c, 0xe3029u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e302b  jne 0xe3052
    X86_AT(c, 0xe302bu);
    if (x86_cc(c, 5)) { goto L_e3052; }
    X86_TICK(c, 20);
    // 0e302d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe302du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e3030  mov esi, dword ptr [eax + 0x7a15c]
    X86_AT(c, 0xe3030u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x7A15Cu)));
    // 0e3036  mov ebx, dword ptr [esi*4 + 0xcd7f4]
    X86_AT(c, 0xe3036u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCD7F4u)));
    // 0e303d  mov eax, dword ptr [esi*4 + 0xcd7f8]
    X86_AT(c, 0xe303du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCD7F8u)));
    // 0e3044  mov dword ptr [esi*4 + 0xcd7f4], eax
    X86_AT(c, 0xe3044u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCD7F4u)), c.r[0]);
    // 0e304b  mov dword ptr [esi*4 + 0xcd7f8], ebx
    X86_AT(c, 0xe304bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCD7F8u)), c.r[3]);
L_e3052:
    X86_TICK(c, 9);
    // 0e3052  inc edi
    X86_AT(c, 0xe3052u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e3053  jmp 0xe2ff4
    X86_AT(c, 0xe3053u);
    X86_POLL(c, 0xe2ff4u); goto L_e2ff4;
L_e3055:
    X86_TICK(c, 28);
    // 0e3055  pop edi
    X86_AT(c, 0xe3055u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e3056  pop esi
    X86_AT(c, 0xe3056u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e3057  pop ebx
    X86_AT(c, 0xe3057u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e3058  leave 
    X86_AT(c, 0xe3058u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3059  ret 
    X86_AT(c, 0xe3059u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2fb0u, "ran off the end of a function");
}
void f_000e305c(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0e305c  push ebp
    X86_AT(c, 0xe305cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e305d  mov ebp, esp
    X86_AT(c, 0xe305du);
    c.r[5] = c.r[4];
    // 0e305f  sub esp, 0x14
    X86_AT(c, 0xe305fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0e3062  push ebx
    X86_AT(c, 0xe3062u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e3063  push esi
    X86_AT(c, 0xe3063u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3064  push edi
    X86_AT(c, 0xe3064u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3065  sub dword ptr [ebp + 8], 5
    X86_AT(c, 0xe3065u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0e3069  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe3069u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e306c  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe306cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0e306f  and eax, eax
    X86_AT(c, 0xe306fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e3071  jge 0xe3077
    X86_AT(c, 0xe3071u);
    if (x86_cc(c, 13)) { goto L_e3077; }
    X86_TICK(c, 7);
    // 0e3073  add dword ptr [ebp + 8], 0x40
    X86_AT(c, 0xe3073u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x40u, 0, 4)); }
L_e3077:
    X86_TICK(c, 20);
    // 0e3077  sub dword ptr [ebp + 0xc], 5
    X86_AT(c, 0xe3077u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0e307b  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe307bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e307e  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe307eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e3081  and eax, eax
    X86_AT(c, 0xe3081u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e3083  jge 0xe3089
    X86_AT(c, 0xe3083u);
    if (x86_cc(c, 13)) { goto L_e3089; }
    X86_TICK(c, 7);
    // 0e3085  add dword ptr [ebp + 0xc], 0x40
    X86_AT(c, 0xe3085u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x40u, 0, 4)); }
L_e3089:
    X86_TICK(c, 2);
    // 0e3089  sub ebx, ebx
    X86_AT(c, 0xe3089u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_e308b:
    X86_TICK(c, 7);
    // 0e308b  cmp ebx, 0xb
    X86_AT(c, 0xe308bu);
    (void)x86_sub(c, c.r[3], 0xBu, 0, 4);
    // 0e308e  jge 0xe317b
    X86_AT(c, 0xe308eu);
    if (x86_cc(c, 13)) { goto L_e317b; }
    X86_TICK(c, 12);
    // 0e3094  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe3094u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e3097  sub esi, esi
    X86_AT(c, 0xe3097u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e3099  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe3099u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e309c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe309cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_e309f:
    X86_TICK(c, 7);
    // 0e309f  cmp esi, 0xb
    X86_AT(c, 0xe309fu);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0e30a2  jge 0xe3160
    X86_AT(c, 0xe30a2u);
    if (x86_cc(c, 13)) { goto L_e3160; }
    X86_TICK(c, 19);
    // 0e30a8  mov eax, ebx
    X86_AT(c, 0xe30a8u);
    c.r[0] = c.r[3];
    // 0e30aa  lea edx, [eax + eax*8]
    X86_AT(c, 0xe30aau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e30ad  lea eax, [edx + eax*2]
    X86_AT(c, 0xe30adu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0e30b0  lea edx, [esi + eax*1]
    X86_AT(c, 0xe30b0u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0e30b3  mov al, byte ptr [edx + 0x79e90]
    X86_AT(c, 0xe30b3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x79E90u))));
    // 0e30b9  and al, al
    X86_AT(c, 0xe30b9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e30bb  je 0xe30d0
    X86_AT(c, 0xe30bbu);
    if (x86_cc(c, 4)) { goto L_e30d0; }
    X86_TICK(c, 12);
    // 0e30bd  movzx eax, al
    X86_AT(c, 0xe30bdu);
    c.r[0] = g8(c, 0);
    // 0e30c0  push eax
    X86_AT(c, 0xe30c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e30c1  call 0xe2df4
    X86_AT(c, 0xe30c1u);
    push32(c, 0xe30c6u); f_000e2df4(c); X86_RET(c, 0xe30c6u);
    X86_TICK(c, 4);
    // 0e30c6  mov byte ptr [edx + 0x79e90], 0
    X86_AT(c, 0xe30c6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x79E90u)), 0x0u);
    // 0e30cd  add esp, 4
    X86_AT(c, 0xe30cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e30d0:
    X86_TICK(c, 12);
    // 0e30d0  cmp dword ptr [0xcda6c], 0xffffffff
    X86_AT(c, 0xe30d0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDA6Cu))), 0xFFFFFFFFu, 0, 4);
    // 0e30d7  jne 0xe30fa
    X86_AT(c, 0xe30d7u);
    if (x86_cc(c, 5)) { goto L_e30fa; }
    X86_TICK(c, 11);
    // 0e30d9  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe30d9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e30dc  and eax, eax
    X86_AT(c, 0xe30dcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e30de  jl 0xe30f1
    X86_AT(c, 0xe30deu);
    if (x86_cc(c, 12)) { goto L_e30f1; }
    X86_TICK(c, 11);
    // 0e30e0  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xe30e0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e30e3  and edx, edx
    X86_AT(c, 0xe30e3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0e30e5  jl 0xe30f1
    X86_AT(c, 0xe30e5u);
    if (x86_cc(c, 12)) { goto L_e30f1; }
    X86_TICK(c, 7);
    // 0e30e7  cmp eax, 0x40
    X86_AT(c, 0xe30e7u);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 0e30ea  jge 0xe30f1
    X86_AT(c, 0xe30eau);
    if (x86_cc(c, 13)) { goto L_e30f1; }
    X86_TICK(c, 7);
    // 0e30ec  cmp edx, 0x40
    X86_AT(c, 0xe30ecu);
    (void)x86_sub(c, c.r[2], 0x40u, 0, 4);
    // 0e30ef  jl 0xe30fa
    X86_AT(c, 0xe30efu);
    if (x86_cc(c, 12)) { goto L_e30fa; }
L_e30f1:
    X86_TICK(c, 9);
    // 0e30f1  mov dword ptr [ebp - 0x14], 0xffffffff
    X86_AT(c, 0xe30f1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), 0xFFFFFFFFu);
    // 0e30f8  jmp 0xe3101
    X86_AT(c, 0xe30f8u);
    goto L_e3101;
L_e30fa:
    X86_TICK(c, 2);
    // 0e30fa  mov dword ptr [ebp - 0x14], 0
    X86_AT(c, 0xe30fau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), 0x0u);
L_e3101:
    X86_TICK(c, 22);
    // 0e3101  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe3101u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e3104  shl eax, 7
    X86_AT(c, 0xe3104u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0e3107  movsx eax, word ptr [eax + edi*2 + 0x77e90]
    X86_AT(c, 0xe3107u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 2 + 0x77E90u)));
    // 0e310f  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xe310fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0e3112  and eax, eax
    X86_AT(c, 0xe3112u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e3114  je 0xe314d
    X86_AT(c, 0xe3114u);
    if (x86_cc(c, 4)) { goto L_e314d; }
    X86_TICK(c, 12);
    // 0e3116  cmp dword ptr [ebp - 0x14], 0
    X86_AT(c, 0xe3116u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0x0u, 0, 4);
    // 0e311a  jne 0xe314d
    X86_AT(c, 0xe311au);
    if (x86_cc(c, 5)) { goto L_e314d; }
    X86_TICK(c, 7);
    // 0e311c  cmp eax, 0x100
    X86_AT(c, 0xe311cu);
    (void)x86_sub(c, c.r[0], 0x100u, 0, 4);
    // 0e3121  jle 0xe312d
    X86_AT(c, 0xe3121u);
    if (x86_cc(c, 14)) { goto L_e312d; }
    X86_TICK(c, 13);
    // 0e3123  push 0xffffffff
    X86_AT(c, 0xe3123u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e3125  sub eax, 0x100
    X86_AT(c, 0xe3125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x100u, 0, 4); }
    // 0e312a  push eax
    X86_AT(c, 0xe312au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e312b  jmp 0xe3132
    X86_AT(c, 0xe312bu);
    goto L_e3132;
L_e312d:
    X86_TICK(c, 7);
    // 0e312d  push 0
    X86_AT(c, 0xe312du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e312f  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe312fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
L_e3132:
    X86_TICK(c, 11);
    // 0e3132  push ebx
    X86_AT(c, 0xe3132u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e3133  push esi
    X86_AT(c, 0xe3133u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3134  call 0xe2e10
    X86_AT(c, 0xe3134u);
    push32(c, 0xe3139u); f_000e2e10(c); X86_RET(c, 0xe3139u);
    X86_TICK(c, 12);
    // 0e3139  mov edx, ebx
    X86_AT(c, 0xe3139u);
    c.r[2] = c.r[3];
    // 0e313b  lea ecx, [edx + edx*8]
    X86_AT(c, 0xe313bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0e313e  lea edx, [ecx + edx*2]
    X86_AT(c, 0xe313eu);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0e3141  lea ecx, [esi + edx*1]
    X86_AT(c, 0xe3141u);
    c.r[1] = (uint32_t)(c.r[6] + c.r[2]);
    // 0e3144  mov byte ptr [ecx + 0x79e90], al
    X86_AT(c, 0xe3144u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0x79E90u)), g8(c, 0));
    // 0e314a  add esp, 0x10
    X86_AT(c, 0xe314au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e314d:
    X86_TICK(c, 7);
    // 0e314d  cmp edi, 0x3f
    X86_AT(c, 0xe314du);
    (void)x86_sub(c, c.r[7], 0x3Fu, 0, 4);
    // 0e3150  jne 0xe3156
    X86_AT(c, 0xe3150u);
    if (x86_cc(c, 5)) { goto L_e3156; }
    X86_TICK(c, 9);
    // 0e3152  sub edi, edi
    X86_AT(c, 0xe3152u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e3154  jmp 0xe3157
    X86_AT(c, 0xe3154u);
    goto L_e3157;
L_e3156:
    X86_TICK(c, 2);
    // 0e3156  inc edi
    X86_AT(c, 0xe3156u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_e3157:
    X86_TICK(c, 15);
    // 0e3157  inc esi
    X86_AT(c, 0xe3157u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e3158  inc dword ptr [ebp - 4]
    X86_AT(c, 0xe3158u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e315b  jmp 0xe309f
    X86_AT(c, 0xe315bu);
    X86_POLL(c, 0xe309fu); goto L_e309f;
L_e3160:
    X86_TICK(c, 12);
    // 0e3160  cmp dword ptr [ebp + 0xc], 0x3f
    X86_AT(c, 0xe3160u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x3Fu, 0, 4);
    // 0e3164  jne 0xe316f
    X86_AT(c, 0xe3164u);
    if (x86_cc(c, 5)) { goto L_e316f; }
    X86_TICK(c, 9);
    // 0e3166  mov dword ptr [ebp + 0xc], 0
    X86_AT(c, 0xe3166u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)), 0x0u);
    // 0e316d  jmp 0xe3172
    X86_AT(c, 0xe316du);
    goto L_e3172;
L_e316f:
    X86_TICK(c, 6);
    // 0e316f  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0xe316fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_e3172:
    X86_TICK(c, 15);
    // 0e3172  inc ebx
    X86_AT(c, 0xe3172u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e3173  inc dword ptr [ebp - 8]
    X86_AT(c, 0xe3173u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e3176  jmp 0xe308b
    X86_AT(c, 0xe3176u);
    X86_POLL(c, 0xe308bu); goto L_e308b;
L_e317b:
    X86_TICK(c, 7);
    // 0e317b  call 0xe2ea0
    X86_AT(c, 0xe317bu);
    push32(c, 0xe3180u); f_000e2ea0(c); X86_RET(c, 0xe3180u);
    X86_TICK(c, 28);
    // 0e3180  pop edi
    X86_AT(c, 0xe3180u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e3181  pop esi
    X86_AT(c, 0xe3181u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e3182  pop ebx
    X86_AT(c, 0xe3182u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e3183  leave 
    X86_AT(c, 0xe3183u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3184  ret 
    X86_AT(c, 0xe3184u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe305cu, "ran off the end of a function");
}
void f_000e3188(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e3188  push ebp
    X86_AT(c, 0xe3188u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e3189  mov ebp, esp
    X86_AT(c, 0xe3189u);
    c.r[5] = c.r[4];
    // 0e318b  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe318bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e318e  cmp edx, 9
    X86_AT(c, 0xe318eu);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0e3191  ja 0xe33a1
    X86_AT(c, 0xe3191u);
    if (x86_cc(c, 7)) { goto L_e33a1; }
    X86_TICK(c, 7);
    // 0e3197  jmp dword ptr cs:[edx*4 + 0xe319f]
    X86_AT(c, 0xe3197u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE319Fu)));
      switch (t) {
      case 0xe31c7u: goto L_e31c7;
      case 0xe31f7u: goto L_e31f7;
      case 0xe3227u: goto L_e3227;
      case 0xe3257u: goto L_e3257;
      case 0xe3287u: goto L_e3287;
      case 0xe32b7u: goto L_e32b7;
      case 0xe32e7u: goto L_e32e7;
      case 0xe3317u: goto L_e3317;
      case 0xe3347u: goto L_e3347;
      case 0xe3374u: goto L_e3374;
      default: x86_jump(c, t); return; } }
L_e31c7:
    X86_TICK(c, 19);
    // 0e31c7  push 0x7a
    X86_AT(c, 0xe31c7u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0e31c9  push 0x1b
    X86_AT(c, 0xe31c9u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0e31cb  push 5
    X86_AT(c, 0xe31cbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e31cd  push 5
    X86_AT(c, 0xe31cdu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e31cf  push 5
    X86_AT(c, 0xe31cfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e31d1  push 9
    X86_AT(c, 0xe31d1u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e31d3  call 0xe1a24
    X86_AT(c, 0xe31d3u);
    push32(c, 0xe31d8u); f_000e1a24(c); X86_RET(c, 0xe31d8u);
    X86_TICK(c, 19);
    // 0e31d8  push 0xa
    X86_AT(c, 0xe31d8u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e31da  push 7
    X86_AT(c, 0xe31dau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e31dc  push 3
    X86_AT(c, 0xe31dcu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e31de  push 3
    X86_AT(c, 0xe31deu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e31e0  push 3
    X86_AT(c, 0xe31e0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e31e2  push 2
    X86_AT(c, 0xe31e2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e31e4  call 0xe19f4
    X86_AT(c, 0xe31e4u);
    push32(c, 0xe31e9u); f_000e19f4(c); X86_RET(c, 0xe31e9u);
    X86_TICK(c, 13);
    // 0e31e9  push 0x1b
    X86_AT(c, 0xe31e9u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0e31eb  push 4
    X86_AT(c, 0xe31ebu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e31ed  push 0x1c68
    X86_AT(c, 0xe31edu);
    { uint32_t v = 0x1C68u; push32(c, v); }
    // 0e31f2  jmp 0xe33cc
    X86_AT(c, 0xe31f2u);
    goto L_e33cc;
L_e31f7:
    X86_TICK(c, 19);
    // 0e31f7  push 0x7a
    X86_AT(c, 0xe31f7u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0e31f9  push 9
    X86_AT(c, 0xe31f9u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e31fb  push 0x1f
    X86_AT(c, 0xe31fbu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0e31fd  push 0x12
    X86_AT(c, 0xe31fdu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0e31ff  push 0x12
    X86_AT(c, 0xe31ffu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0e3201  push 0x12
    X86_AT(c, 0xe3201u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0e3203  call 0xe1a24
    X86_AT(c, 0xe3203u);
    push32(c, 0xe3208u); f_000e1a24(c); X86_RET(c, 0xe3208u);
    X86_TICK(c, 19);
    // 0e3208  push 0xa
    X86_AT(c, 0xe3208u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e320a  push 5
    X86_AT(c, 0xe320au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e320c  push 3
    X86_AT(c, 0xe320cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e320e  push 2
    X86_AT(c, 0xe320eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3210  push 2
    X86_AT(c, 0xe3210u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3212  push 2
    X86_AT(c, 0xe3212u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3214  call 0xe19f4
    X86_AT(c, 0xe3214u);
    push32(c, 0xe3219u); f_000e19f4(c); X86_RET(c, 0xe3219u);
    X86_TICK(c, 13);
    // 0e3219  push 0x1b
    X86_AT(c, 0xe3219u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0e321b  push 0
    X86_AT(c, 0xe321bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e321d  push 0x1c7c
    X86_AT(c, 0xe321du);
    { uint32_t v = 0x1C7Cu; push32(c, v); }
    // 0e3222  jmp 0xe33cc
    X86_AT(c, 0xe3222u);
    goto L_e33cc;
L_e3227:
    X86_TICK(c, 19);
    // 0e3227  push 0x7a
    X86_AT(c, 0xe3227u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0e3229  push 8
    X86_AT(c, 0xe3229u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e322b  push 0x75
    X86_AT(c, 0xe322bu);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0e322d  push 0xd
    X86_AT(c, 0xe322du);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e322f  push 0xd
    X86_AT(c, 0xe322fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e3231  push 0x70
    X86_AT(c, 0xe3231u);
    { uint32_t v = 0x70u; push32(c, v); }
    // 0e3233  call 0xe1a24
    X86_AT(c, 0xe3233u);
    push32(c, 0xe3238u); f_000e1a24(c); X86_RET(c, 0xe3238u);
    X86_TICK(c, 19);
    // 0e3238  push 0xa
    X86_AT(c, 0xe3238u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e323a  push 7
    X86_AT(c, 0xe323au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e323c  push 5
    X86_AT(c, 0xe323cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e323e  push 3
    X86_AT(c, 0xe323eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e3240  push 3
    X86_AT(c, 0xe3240u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e3242  push 2
    X86_AT(c, 0xe3242u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3244  call 0xe19f4
    X86_AT(c, 0xe3244u);
    push32(c, 0xe3249u); f_000e19f4(c); X86_RET(c, 0xe3249u);
    X86_TICK(c, 13);
    // 0e3249  push 0x13
    X86_AT(c, 0xe3249u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0e324b  push 0
    X86_AT(c, 0xe324bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e324d  push 0x1c90
    X86_AT(c, 0xe324du);
    { uint32_t v = 0x1C90u; push32(c, v); }
    // 0e3252  jmp 0xe33cc
    X86_AT(c, 0xe3252u);
    goto L_e33cc;
L_e3257:
    X86_TICK(c, 19);
    // 0e3257  push 0x7a
    X86_AT(c, 0xe3257u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0e3259  push 0x20
    X86_AT(c, 0xe3259u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e325b  push 4
    X86_AT(c, 0xe325bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e325d  push 4
    X86_AT(c, 0xe325du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e325f  push 0x16
    X86_AT(c, 0xe325fu);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0e3261  push 0x16
    X86_AT(c, 0xe3261u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0e3263  call 0xe1a24
    X86_AT(c, 0xe3263u);
    push32(c, 0xe3268u); f_000e1a24(c); X86_RET(c, 0xe3268u);
    X86_TICK(c, 19);
    // 0e3268  push 0xa
    X86_AT(c, 0xe3268u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e326a  push 5
    X86_AT(c, 0xe326au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e326c  push 3
    X86_AT(c, 0xe326cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e326e  push 3
    X86_AT(c, 0xe326eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e3270  push 2
    X86_AT(c, 0xe3270u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3272  push 2
    X86_AT(c, 0xe3272u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3274  call 0xe19f4
    X86_AT(c, 0xe3274u);
    push32(c, 0xe3279u); f_000e19f4(c); X86_RET(c, 0xe3279u);
    X86_TICK(c, 13);
    // 0e3279  push 0x16
    X86_AT(c, 0xe3279u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0e327b  push 0
    X86_AT(c, 0xe327bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e327d  push 0x1ca8
    X86_AT(c, 0xe327du);
    { uint32_t v = 0x1CA8u; push32(c, v); }
    // 0e3282  jmp 0xe33cc
    X86_AT(c, 0xe3282u);
    goto L_e33cc;
L_e3287:
    X86_TICK(c, 19);
    // 0e3287  push 0x7a
    X86_AT(c, 0xe3287u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0e3289  push 0x72
    X86_AT(c, 0xe3289u);
    { uint32_t v = 0x72u; push32(c, v); }
    // 0e328b  push 8
    X86_AT(c, 0xe328bu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e328d  push 0xc
    X86_AT(c, 0xe328du);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e328f  push 0xc
    X86_AT(c, 0xe328fu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e3291  push 1
    X86_AT(c, 0xe3291u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e3293  call 0xe1a24
    X86_AT(c, 0xe3293u);
    push32(c, 0xe3298u); f_000e1a24(c); X86_RET(c, 0xe3298u);
    X86_TICK(c, 19);
    // 0e3298  push 0xa
    X86_AT(c, 0xe3298u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e329a  push 7
    X86_AT(c, 0xe329au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e329c  push 5
    X86_AT(c, 0xe329cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e329e  push 3
    X86_AT(c, 0xe329eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e32a0  push 3
    X86_AT(c, 0xe32a0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e32a2  push 2
    X86_AT(c, 0xe32a2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e32a4  call 0xe19f4
    X86_AT(c, 0xe32a4u);
    push32(c, 0xe32a9u); f_000e19f4(c); X86_RET(c, 0xe32a9u);
    X86_TICK(c, 13);
    // 0e32a9  push 0x1f
    X86_AT(c, 0xe32a9u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0e32ab  push 4
    X86_AT(c, 0xe32abu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e32ad  push 0x1cbc
    X86_AT(c, 0xe32adu);
    { uint32_t v = 0x1CBCu; push32(c, v); }
    // 0e32b2  jmp 0xe33cc
    X86_AT(c, 0xe32b2u);
    goto L_e33cc;
L_e32b7:
    X86_TICK(c, 19);
    // 0e32b7  push 0x7a
    X86_AT(c, 0xe32b7u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0e32b9  push 0x16
    X86_AT(c, 0xe32b9u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0e32bb  push 0x16
    X86_AT(c, 0xe32bbu);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0e32bd  push 0x54
    X86_AT(c, 0xe32bdu);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0e32bf  push 0x54
    X86_AT(c, 0xe32bfu);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0e32c1  push 0x13
    X86_AT(c, 0xe32c1u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0e32c3  call 0xe1a24
    X86_AT(c, 0xe32c3u);
    push32(c, 0xe32c8u); f_000e1a24(c); X86_RET(c, 0xe32c8u);
    X86_TICK(c, 19);
    // 0e32c8  push 0xa
    X86_AT(c, 0xe32c8u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e32ca  push 5
    X86_AT(c, 0xe32cau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e32cc  push 5
    X86_AT(c, 0xe32ccu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e32ce  push 3
    X86_AT(c, 0xe32ceu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e32d0  push 3
    X86_AT(c, 0xe32d0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e32d2  push 2
    X86_AT(c, 0xe32d2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e32d4  call 0xe19f4
    X86_AT(c, 0xe32d4u);
    push32(c, 0xe32d9u); f_000e19f4(c); X86_RET(c, 0xe32d9u);
    X86_TICK(c, 13);
    // 0e32d9  push 0x23
    X86_AT(c, 0xe32d9u);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0e32db  push 8
    X86_AT(c, 0xe32dbu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e32dd  push 0x1cd0
    X86_AT(c, 0xe32ddu);
    { uint32_t v = 0x1CD0u; push32(c, v); }
    // 0e32e2  jmp 0xe33cc
    X86_AT(c, 0xe32e2u);
    goto L_e33cc;
L_e32e7:
    X86_TICK(c, 19);
    // 0e32e7  push 0x7a
    X86_AT(c, 0xe32e7u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0e32e9  push 0xc
    X86_AT(c, 0xe32e9u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e32eb  push 0xc
    X86_AT(c, 0xe32ebu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e32ed  push 9
    X86_AT(c, 0xe32edu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e32ef  push 0x72
    X86_AT(c, 0xe32efu);
    { uint32_t v = 0x72u; push32(c, v); }
    // 0e32f1  push 4
    X86_AT(c, 0xe32f1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e32f3  call 0xe1a24
    X86_AT(c, 0xe32f3u);
    push32(c, 0xe32f8u); f_000e1a24(c); X86_RET(c, 0xe32f8u);
    X86_TICK(c, 19);
    // 0e32f8  push 0xa
    X86_AT(c, 0xe32f8u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e32fa  push 5
    X86_AT(c, 0xe32fau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e32fc  push 5
    X86_AT(c, 0xe32fcu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e32fe  push 3
    X86_AT(c, 0xe32feu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e3300  push 7
    X86_AT(c, 0xe3300u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3302  push 2
    X86_AT(c, 0xe3302u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3304  call 0xe19f4
    X86_AT(c, 0xe3304u);
    push32(c, 0xe3309u); f_000e19f4(c); X86_RET(c, 0xe3309u);
    X86_TICK(c, 13);
    // 0e3309  push 0x13
    X86_AT(c, 0xe3309u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0e330b  push 2
    X86_AT(c, 0xe330bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e330d  push 0x1ce4
    X86_AT(c, 0xe330du);
    { uint32_t v = 0x1CE4u; push32(c, v); }
    // 0e3312  jmp 0xe33cc
    X86_AT(c, 0xe3312u);
    goto L_e33cc;
L_e3317:
    X86_TICK(c, 19);
    // 0e3317  push 0x7a
    X86_AT(c, 0xe3317u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0e3319  push 0x1f
    X86_AT(c, 0xe3319u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0e331b  push 0x1f
    X86_AT(c, 0xe331bu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0e331d  push 0x38
    X86_AT(c, 0xe331du);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0e331f  push 0x38
    X86_AT(c, 0xe331fu);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0e3321  push 8
    X86_AT(c, 0xe3321u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e3323  call 0xe1a24
    X86_AT(c, 0xe3323u);
    push32(c, 0xe3328u); f_000e1a24(c); X86_RET(c, 0xe3328u);
    X86_TICK(c, 19);
    // 0e3328  push 0xa
    X86_AT(c, 0xe3328u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e332a  push 5
    X86_AT(c, 0xe332au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e332c  push 5
    X86_AT(c, 0xe332cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e332e  push 3
    X86_AT(c, 0xe332eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e3330  push 3
    X86_AT(c, 0xe3330u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e3332  push 2
    X86_AT(c, 0xe3332u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3334  call 0xe19f4
    X86_AT(c, 0xe3334u);
    push32(c, 0xe3339u); f_000e19f4(c); X86_RET(c, 0xe3339u);
    X86_TICK(c, 13);
    // 0e3339  push 0xf
    X86_AT(c, 0xe3339u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e333b  push 0
    X86_AT(c, 0xe333bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e333d  push 0x1cf8
    X86_AT(c, 0xe333du);
    { uint32_t v = 0x1CF8u; push32(c, v); }
    // 0e3342  jmp 0xe33cc
    X86_AT(c, 0xe3342u);
    goto L_e33cc;
L_e3347:
    X86_TICK(c, 19);
    // 0e3347  push 0x7a
    X86_AT(c, 0xe3347u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0e3349  push 0x1f
    X86_AT(c, 0xe3349u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0e334b  push 0x1f
    X86_AT(c, 0xe334bu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0e334d  push 0x51
    X86_AT(c, 0xe334du);
    { uint32_t v = 0x51u; push32(c, v); }
    // 0e334f  push 0x51
    X86_AT(c, 0xe334fu);
    { uint32_t v = 0x51u; push32(c, v); }
    // 0e3351  push 8
    X86_AT(c, 0xe3351u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e3353  call 0xe1a24
    X86_AT(c, 0xe3353u);
    push32(c, 0xe3358u); f_000e1a24(c); X86_RET(c, 0xe3358u);
    X86_TICK(c, 19);
    // 0e3358  push 0xa
    X86_AT(c, 0xe3358u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e335a  push 5
    X86_AT(c, 0xe335au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e335c  push 5
    X86_AT(c, 0xe335cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e335e  push 3
    X86_AT(c, 0xe335eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e3360  push 3
    X86_AT(c, 0xe3360u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e3362  push 2
    X86_AT(c, 0xe3362u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3364  call 0xe19f4
    X86_AT(c, 0xe3364u);
    push32(c, 0xe3369u); f_000e19f4(c); X86_RET(c, 0xe3369u);
    X86_TICK(c, 13);
    // 0e3369  push 0xf
    X86_AT(c, 0xe3369u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e336b  push 0
    X86_AT(c, 0xe336bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e336d  push 0x1d10
    X86_AT(c, 0xe336du);
    { uint32_t v = 0x1D10u; push32(c, v); }
    // 0e3372  jmp 0xe33cc
    X86_AT(c, 0xe3372u);
    goto L_e33cc;
L_e3374:
    X86_TICK(c, 19);
    // 0e3374  push 0x7a
    X86_AT(c, 0xe3374u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0e3376  push 0x1f
    X86_AT(c, 0xe3376u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0e3378  push 0x1f
    X86_AT(c, 0xe3378u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0e337a  push 0x38
    X86_AT(c, 0xe337au);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0e337c  push 0x38
    X86_AT(c, 0xe337cu);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0e337e  push 8
    X86_AT(c, 0xe337eu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e3380  call 0xe1a24
    X86_AT(c, 0xe3380u);
    push32(c, 0xe3385u); f_000e1a24(c); X86_RET(c, 0xe3385u);
    X86_TICK(c, 19);
    // 0e3385  push 0xa
    X86_AT(c, 0xe3385u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e3387  push 5
    X86_AT(c, 0xe3387u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e3389  push 5
    X86_AT(c, 0xe3389u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e338b  push 3
    X86_AT(c, 0xe338bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e338d  push 3
    X86_AT(c, 0xe338du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e338f  push 2
    X86_AT(c, 0xe338fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3391  call 0xe19f4
    X86_AT(c, 0xe3391u);
    push32(c, 0xe3396u); f_000e19f4(c); X86_RET(c, 0xe3396u);
    X86_TICK(c, 13);
    // 0e3396  push 0xf
    X86_AT(c, 0xe3396u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e3398  push 1
    X86_AT(c, 0xe3398u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e339a  push 0x1d24
    X86_AT(c, 0xe339au);
    { uint32_t v = 0x1D24u; push32(c, v); }
    // 0e339f  jmp 0xe33cc
    X86_AT(c, 0xe339fu);
    goto L_e33cc;
L_e33a1:
    X86_TICK(c, 19);
    // 0e33a1  push 0x7a
    X86_AT(c, 0xe33a1u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0e33a3  push 3
    X86_AT(c, 0xe33a3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e33a5  push 4
    X86_AT(c, 0xe33a5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e33a7  push 4
    X86_AT(c, 0xe33a7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e33a9  push 4
    X86_AT(c, 0xe33a9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e33ab  push 9
    X86_AT(c, 0xe33abu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e33ad  call 0xe1a24
    X86_AT(c, 0xe33adu);
    push32(c, 0xe33b2u); f_000e1a24(c); X86_RET(c, 0xe33b2u);
    X86_TICK(c, 19);
    // 0e33b2  push 0
    X86_AT(c, 0xe33b2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e33b4  push 7
    X86_AT(c, 0xe33b4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e33b6  push 3
    X86_AT(c, 0xe33b6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e33b8  push 3
    X86_AT(c, 0xe33b8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e33ba  push 3
    X86_AT(c, 0xe33bau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e33bc  push 2
    X86_AT(c, 0xe33bcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e33be  call 0xe19f4
    X86_AT(c, 0xe33beu);
    push32(c, 0xe33c3u); f_000e19f4(c); X86_RET(c, 0xe33c3u);
    X86_TICK(c, 6);
    // 0e33c3  push 0x1b
    X86_AT(c, 0xe33c3u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0e33c5  push 4
    X86_AT(c, 0xe33c5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e33c7  push 0x1d3c
    X86_AT(c, 0xe33c7u);
    { uint32_t v = 0x1D3Cu; push32(c, v); }
L_e33cc:
    X86_TICK(c, 7);
    // 0e33cc  call 0xe1770
    X86_AT(c, 0xe33ccu);
    push32(c, 0xe33d1u); f_000e1770(c); X86_RET(c, 0xe33d1u);
    X86_TICK(c, 18);
    // 0e33d1  add esp, 0x3c
    X86_AT(c, 0xe33d1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e33d4  leave 
    X86_AT(c, 0xe33d4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e33d5  ret 
    X86_AT(c, 0xe33d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3188u, "ran off the end of a function");
}
void f_000e33cc(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e33cc  call 0xe1770
    X86_AT(c, 0xe33ccu);
    push32(c, 0xe33d1u); f_000e1770(c); X86_RET(c, 0xe33d1u);
    X86_TICK(c, 18);
    // 0e33d1  add esp, 0x3c
    X86_AT(c, 0xe33d1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e33d4  leave 
    X86_AT(c, 0xe33d4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e33d5  ret 
    X86_AT(c, 0xe33d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe33ccu, "ran off the end of a function");
}
void f_000e33d8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e33d8  push ebp
    X86_AT(c, 0xe33d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e33d9  mov ebp, esp
    X86_AT(c, 0xe33d9u);
    c.r[5] = c.r[4];
    // 0e33db  sub esp, 8
    X86_AT(c, 0xe33dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e33de  push ebx
    X86_AT(c, 0xe33deu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e33df  push esi
    X86_AT(c, 0xe33dfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e33e0  push edi
    X86_AT(c, 0xe33e0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e33e1  push 7
    X86_AT(c, 0xe33e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e33e3  call 0xe693c
    X86_AT(c, 0xe33e3u);
    push32(c, 0xe33e8u); f_000e693c(c); X86_RET(c, 0xe33e8u);
    X86_TICK(c, 11);
    // 0e33e8  push 0x1df4
    X86_AT(c, 0xe33e8u);
    { uint32_t v = 0x1DF4u; push32(c, v); }
    // 0e33ed  push 7
    X86_AT(c, 0xe33edu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e33ef  call 0xe5654
    X86_AT(c, 0xe33efu);
    push32(c, 0xe33f4u); f_000e5654(c); X86_RET(c, 0xe33f4u);
    X86_TICK(c, 9);
    // 0e33f4  push 7
    X86_AT(c, 0xe33f4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e33f6  call 0xe6c68
    X86_AT(c, 0xe33f6u);
    push32(c, 0xe33fbu); f_000e6c68(c); X86_RET(c, 0xe33fbu);
    X86_TICK(c, 8);
    // 0e33fb  sub eax, eax
    X86_AT(c, 0xe33fbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e33fd  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe33fdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e3400  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe3400u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e3403  add esp, 0x10
    X86_AT(c, 0xe3403u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e3406:
    X86_TICK(c, 11);
    // 0e3406  push 0x1e1c
    X86_AT(c, 0xe3406u);
    { uint32_t v = 0x1E1Cu; push32(c, v); }
    // 0e340b  push 7
    X86_AT(c, 0xe340bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e340d  call 0xe5654
    X86_AT(c, 0xe340du);
    push32(c, 0xe3412u); f_000e5654(c); X86_RET(c, 0xe3412u);
    X86_TICK(c, 9);
    // 0e3412  push 7
    X86_AT(c, 0xe3412u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3414  call 0xe6c68
    X86_AT(c, 0xe3414u);
    push32(c, 0xe3419u); f_000e6c68(c); X86_RET(c, 0xe3419u);
    X86_TICK(c, 17);
    // 0e3419  lea ebx, [ebp - 8]
    X86_AT(c, 0xe3419u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e341c  push ebx
    X86_AT(c, 0xe341cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e341d  lea esi, [ebp - 4]
    X86_AT(c, 0xe341du);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e3420  push esi
    X86_AT(c, 0xe3420u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3421  push 7
    X86_AT(c, 0xe3421u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3423  call 0xe7514
    X86_AT(c, 0xe3423u);
    push32(c, 0xe3428u); f_000e7514(c); X86_RET(c, 0xe3428u);
    X86_TICK(c, 9);
    // 0e3428  push 7
    X86_AT(c, 0xe3428u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e342a  call 0xe1b10
    X86_AT(c, 0xe342au);
    push32(c, 0xe342fu); f_000e1b10(c); X86_RET(c, 0xe342fu);
    X86_TICK(c, 22);
    // 0e342f  xchg edi, eax
    X86_AT(c, 0xe342fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e3430  push dword ptr [ebx]
    X86_AT(c, 0xe3430u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0e3432  push dword ptr [esi]
    X86_AT(c, 0xe3432u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0e3434  push 7
    X86_AT(c, 0xe3434u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3436  call 0xe7260
    X86_AT(c, 0xe3436u);
    push32(c, 0xe343bu); f_000e7260(c); X86_RET(c, 0xe343bu);
    X86_TICK(c, 9);
    // 0e343b  add esp, 0x28
    X86_AT(c, 0xe343bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0e343e  cmp edi, 0xffffffff
    X86_AT(c, 0xe343eu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0e3441  je 0xe3459
    X86_AT(c, 0xe3441u);
    if (x86_cc(c, 4)) { goto L_e3459; }
    X86_TICK(c, 7);
    // 0e3443  cmp edi, 1
    X86_AT(c, 0xe3443u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0e3446  jl 0xe344d
    X86_AT(c, 0xe3446u);
    if (x86_cc(c, 12)) { goto L_e344d; }
    X86_TICK(c, 7);
    // 0e3448  cmp edi, 0xc
    X86_AT(c, 0xe3448u);
    (void)x86_sub(c, c.r[7], 0xCu, 0, 4);
    // 0e344b  jle 0xe3459
    X86_AT(c, 0xe344bu);
    if (x86_cc(c, 14)) { goto L_e3459; }
L_e344d:
    X86_TICK(c, 9);
    // 0e344d  push 1
    X86_AT(c, 0xe344du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e344f  call 0xe1944
    X86_AT(c, 0xe344fu);
    push32(c, 0xe3454u); f_000e1944(c); X86_RET(c, 0xe3454u);
    X86_TICK(c, 9);
    // 0e3454  add esp, 4
    X86_AT(c, 0xe3454u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e3457  jmp 0xe3406
    X86_AT(c, 0xe3457u);
    X86_POLL(c, 0xe3406u); goto L_e3406;
L_e3459:
    X86_TICK(c, 7);
    // 0e3459  cmp edi, 0xffffffff
    X86_AT(c, 0xe3459u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0e345c  je 0xe347d
    X86_AT(c, 0xe345cu);
    if (x86_cc(c, 4)) { goto L_e347d; }
    X86_TICK(c, 16);
    // 0e345e  dec edi
    X86_AT(c, 0xe345eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0e345f  push dword ptr [edi*4 + 0x7a654]
    X86_AT(c, 0xe345fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0x7A654u))); push32(c, v); }
    // 0e3466  push 7
    X86_AT(c, 0xe3466u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3468  call 0xe6cb0
    X86_AT(c, 0xe3468u);
    push32(c, 0xe346du); f_000e6cb0(c); X86_RET(c, 0xe346du);
    X86_TICK(c, 9);
    // 0e346d  push 7
    X86_AT(c, 0xe346du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e346f  call 0xe6c68
    X86_AT(c, 0xe346fu);
    push32(c, 0xe3474u); f_000e6c68(c); X86_RET(c, 0xe3474u);
    X86_TICK(c, 9);
    // 0e3474  push edi
    X86_AT(c, 0xe3474u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3475  call 0xe3188
    X86_AT(c, 0xe3475u);
    push32(c, 0xe347au); f_000e3188(c); X86_RET(c, 0xe347au);
    X86_TICK(c, 2);
    // 0e347a  add esp, 0x10
    X86_AT(c, 0xe347au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e347d:
    X86_TICK(c, 28);
    // 0e347d  pop edi
    X86_AT(c, 0xe347du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e347e  pop esi
    X86_AT(c, 0xe347eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e347f  pop ebx
    X86_AT(c, 0xe347fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e3480  leave 
    X86_AT(c, 0xe3480u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3481  ret 
    X86_AT(c, 0xe3481u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe33d8u, "ran off the end of a function");
}
void f_000e3484(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e3484  push ebp
    X86_AT(c, 0xe3484u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e3485  mov ebp, esp
    X86_AT(c, 0xe3485u);
    c.r[5] = c.r[4];
    // 0e3487  sub esp, 8
    X86_AT(c, 0xe3487u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e348a  push ebx
    X86_AT(c, 0xe348au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e348b  push esi
    X86_AT(c, 0xe348bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e348c  push edi
    X86_AT(c, 0xe348cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e348d  push 7
    X86_AT(c, 0xe348du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e348f  call 0xe693c
    X86_AT(c, 0xe348fu);
    push32(c, 0xe3494u); f_000e693c(c); X86_RET(c, 0xe3494u);
    X86_TICK(c, 11);
    // 0e3494  push 0x1ef8
    X86_AT(c, 0xe3494u);
    { uint32_t v = 0x1EF8u; push32(c, v); }
    // 0e3499  push 7
    X86_AT(c, 0xe3499u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e349b  call 0xe5654
    X86_AT(c, 0xe349bu);
    push32(c, 0xe34a0u); f_000e5654(c); X86_RET(c, 0xe34a0u);
    X86_TICK(c, 9);
    // 0e34a0  push 7
    X86_AT(c, 0xe34a0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e34a2  call 0xe6c68
    X86_AT(c, 0xe34a2u);
    push32(c, 0xe34a7u); f_000e6c68(c); X86_RET(c, 0xe34a7u);
    X86_TICK(c, 8);
    // 0e34a7  sub eax, eax
    X86_AT(c, 0xe34a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e34a9  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe34a9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e34ac  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe34acu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e34af  add esp, 0x10
    X86_AT(c, 0xe34afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e34b2:
    X86_TICK(c, 11);
    // 0e34b2  push 0x1f18
    X86_AT(c, 0xe34b2u);
    { uint32_t v = 0x1F18u; push32(c, v); }
    // 0e34b7  push 7
    X86_AT(c, 0xe34b7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e34b9  call 0xe5654
    X86_AT(c, 0xe34b9u);
    push32(c, 0xe34beu); f_000e5654(c); X86_RET(c, 0xe34beu);
    X86_TICK(c, 9);
    // 0e34be  push 7
    X86_AT(c, 0xe34beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e34c0  call 0xe6c68
    X86_AT(c, 0xe34c0u);
    push32(c, 0xe34c5u); f_000e6c68(c); X86_RET(c, 0xe34c5u);
    X86_TICK(c, 17);
    // 0e34c5  lea ebx, [ebp - 8]
    X86_AT(c, 0xe34c5u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e34c8  push ebx
    X86_AT(c, 0xe34c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e34c9  lea esi, [ebp - 4]
    X86_AT(c, 0xe34c9u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e34cc  push esi
    X86_AT(c, 0xe34ccu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e34cd  push 7
    X86_AT(c, 0xe34cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e34cf  call 0xe7514
    X86_AT(c, 0xe34cfu);
    push32(c, 0xe34d4u); f_000e7514(c); X86_RET(c, 0xe34d4u);
    X86_TICK(c, 9);
    // 0e34d4  push 7
    X86_AT(c, 0xe34d4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e34d6  call 0xe1b10
    X86_AT(c, 0xe34d6u);
    push32(c, 0xe34dbu); f_000e1b10(c); X86_RET(c, 0xe34dbu);
    X86_TICK(c, 22);
    // 0e34db  xchg edi, eax
    X86_AT(c, 0xe34dbu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e34dc  push dword ptr [ebx]
    X86_AT(c, 0xe34dcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0e34de  push dword ptr [esi]
    X86_AT(c, 0xe34deu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0e34e0  push 7
    X86_AT(c, 0xe34e0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e34e2  call 0xe7260
    X86_AT(c, 0xe34e2u);
    push32(c, 0xe34e7u); f_000e7260(c); X86_RET(c, 0xe34e7u);
    X86_TICK(c, 9);
    // 0e34e7  add esp, 0x28
    X86_AT(c, 0xe34e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0e34ea  cmp edi, 0xffffffff
    X86_AT(c, 0xe34eau);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0e34ed  je 0xe3505
    X86_AT(c, 0xe34edu);
    if (x86_cc(c, 4)) { goto L_e3505; }
    X86_TICK(c, 7);
    // 0e34ef  cmp edi, 1
    X86_AT(c, 0xe34efu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0e34f2  jl 0xe34f9
    X86_AT(c, 0xe34f2u);
    if (x86_cc(c, 12)) { goto L_e34f9; }
    X86_TICK(c, 7);
    // 0e34f4  cmp edi, 0xe
    X86_AT(c, 0xe34f4u);
    (void)x86_sub(c, c.r[7], 0xEu, 0, 4);
    // 0e34f7  jle 0xe3505
    X86_AT(c, 0xe34f7u);
    if (x86_cc(c, 14)) { goto L_e3505; }
L_e34f9:
    X86_TICK(c, 9);
    // 0e34f9  push 1
    X86_AT(c, 0xe34f9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e34fb  call 0xe1944
    X86_AT(c, 0xe34fbu);
    push32(c, 0xe3500u); f_000e1944(c); X86_RET(c, 0xe3500u);
    X86_TICK(c, 9);
    // 0e3500  add esp, 4
    X86_AT(c, 0xe3500u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e3503  jmp 0xe34b2
    X86_AT(c, 0xe3503u);
    X86_POLL(c, 0xe34b2u); goto L_e34b2;
L_e3505:
    X86_TICK(c, 7);
    // 0e3505  cmp edi, 0xffffffff
    X86_AT(c, 0xe3505u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0e3508  je 0xe3529
    X86_AT(c, 0xe3508u);
    if (x86_cc(c, 4)) { goto L_e3529; }
    X86_TICK(c, 16);
    // 0e350a  dec edi
    X86_AT(c, 0xe350au);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0e350b  push dword ptr [edi*4 + 0x7a67c]
    X86_AT(c, 0xe350bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0x7A67Cu))); push32(c, v); }
    // 0e3512  push 7
    X86_AT(c, 0xe3512u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3514  call 0xe6cb0
    X86_AT(c, 0xe3514u);
    push32(c, 0xe3519u); f_000e6cb0(c); X86_RET(c, 0xe3519u);
    X86_TICK(c, 9);
    // 0e3519  push 7
    X86_AT(c, 0xe3519u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e351b  call 0xe6c68
    X86_AT(c, 0xe351bu);
    push32(c, 0xe3520u); f_000e6c68(c); X86_RET(c, 0xe3520u);
    X86_TICK(c, 9);
    // 0e3520  push edi
    X86_AT(c, 0xe3520u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3521  call 0xe1944
    X86_AT(c, 0xe3521u);
    push32(c, 0xe3526u); f_000e1944(c); X86_RET(c, 0xe3526u);
    X86_TICK(c, 2);
    // 0e3526  add esp, 0x10
    X86_AT(c, 0xe3526u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e3529:
    X86_TICK(c, 28);
    // 0e3529  pop edi
    X86_AT(c, 0xe3529u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e352a  pop esi
    X86_AT(c, 0xe352au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e352b  pop ebx
    X86_AT(c, 0xe352bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e352c  leave 
    X86_AT(c, 0xe352cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e352d  ret 
    X86_AT(c, 0xe352du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3484u, "ran off the end of a function");
}
void f_000e3530(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0e3530  push ebp
    X86_AT(c, 0xe3530u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e3531  mov ebp, esp
    X86_AT(c, 0xe3531u);
    c.r[5] = c.r[4];
    // 0e3533  push 0xffffffff
    X86_AT(c, 0xe3533u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e3535  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe3535u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e3538  push dword ptr [eax*4 + 0x7a5d8]
    X86_AT(c, 0xe3538u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x7A5D8u))); push32(c, v); }
    // 0e353f  call 0xe07c8
    X86_AT(c, 0xe353fu);
    push32(c, 0xe3544u); f_000e07c8(c); X86_RET(c, 0xe3544u);
    X86_TICK(c, 16);
    // 0e3544  leave 
    X86_AT(c, 0xe3544u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3545  ret 
    X86_AT(c, 0xe3545u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3530u, "ran off the end of a function");
}
void f_000e3548(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e3548  push 1
    X86_AT(c, 0xe3548u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e354a  call 0xe58cc
    X86_AT(c, 0xe354au);
    push32(c, 0xe354fu); f_000e58cc(c); X86_RET(c, 0xe354fu);
    X86_TICK(c, 15);
    // 0e354f  push 0
    X86_AT(c, 0xe354fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e3551  push 0x96
    X86_AT(c, 0xe3551u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0e3556  push 0xc8
    X86_AT(c, 0xe3556u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e355b  push 1
    X86_AT(c, 0xe355bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e355d  call 0xe5700
    X86_AT(c, 0xe355du);
    push32(c, 0xe3562u); f_000e5700(c); X86_RET(c, 0xe3562u);
    X86_TICK(c, 15);
    // 0e3562  push 0
    X86_AT(c, 0xe3562u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e3564  push 0xff
    X86_AT(c, 0xe3564u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e3569  push 0
    X86_AT(c, 0xe3569u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e356b  push 2
    X86_AT(c, 0xe356bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e356d  call 0xe5700
    X86_AT(c, 0xe356du);
    push32(c, 0xe3572u); f_000e5700(c); X86_RET(c, 0xe3572u);
    X86_TICK(c, 15);
    // 0e3572  push 5
    X86_AT(c, 0xe3572u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e3574  push 0xc8
    X86_AT(c, 0xe3574u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e3579  push 0
    X86_AT(c, 0xe3579u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e357b  push 4
    X86_AT(c, 0xe357bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e357d  call 0xe5700
    X86_AT(c, 0xe357du);
    push32(c, 0xe3582u); f_000e5700(c); X86_RET(c, 0xe3582u);
    X86_TICK(c, 15);
    // 0e3582  push 0
    X86_AT(c, 0xe3582u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e3584  push 0x64
    X86_AT(c, 0xe3584u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0e3586  push 0
    X86_AT(c, 0xe3586u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e3588  push 5
    X86_AT(c, 0xe3588u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e358a  call 0xe5700
    X86_AT(c, 0xe358au);
    push32(c, 0xe358fu); f_000e5700(c); X86_RET(c, 0xe358fu);
    X86_TICK(c, 17);
    // 0e358f  add esp, 0x44
    X86_AT(c, 0xe358fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0e3592  push 0x96
    X86_AT(c, 0xe3592u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0e3597  push 0xff
    X86_AT(c, 0xe3597u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e359c  push 0
    X86_AT(c, 0xe359cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e359e  push 6
    X86_AT(c, 0xe359eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e35a0  call 0xe5700
    X86_AT(c, 0xe35a0u);
    push32(c, 0xe35a5u); f_000e5700(c); X86_RET(c, 0xe35a5u);
    X86_TICK(c, 15);
    // 0e35a5  push 0xff
    X86_AT(c, 0xe35a5u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e35aa  push 0xff
    X86_AT(c, 0xe35aau);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e35af  push 0xff
    X86_AT(c, 0xe35afu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e35b4  push 7
    X86_AT(c, 0xe35b4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e35b6  call 0xe5700
    X86_AT(c, 0xe35b6u);
    push32(c, 0xe35bbu); f_000e5700(c); X86_RET(c, 0xe35bbu);
    X86_TICK(c, 9);
    // 0e35bb  push 0
    X86_AT(c, 0xe35bbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e35bd  call 0xe58cc
    X86_AT(c, 0xe35bdu);
    push32(c, 0xe35c2u); f_000e58cc(c); X86_RET(c, 0xe35c2u);
    X86_TICK(c, 12);
    // 0e35c2  add esp, 0x24
    X86_AT(c, 0xe35c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0e35c5  ret 
    X86_AT(c, 0xe35c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3548u, "ran off the end of a function");
}
void f_000e35c8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e35c8  push 1
    X86_AT(c, 0xe35c8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e35ca  call 0xe58cc
    X86_AT(c, 0xe35cau);
    push32(c, 0xe35cfu); f_000e58cc(c); X86_RET(c, 0xe35cfu);
    X86_TICK(c, 7);
    // 0e35cf  call 0xe5690
    X86_AT(c, 0xe35cfu);
    push32(c, 0xe35d4u); f_000e5690(c); X86_RET(c, 0xe35d4u);
    X86_TICK(c, 9);
    // 0e35d4  push 0
    X86_AT(c, 0xe35d4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e35d6  call 0xe58cc
    X86_AT(c, 0xe35d6u);
    push32(c, 0xe35dbu); f_000e58cc(c); X86_RET(c, 0xe35dbu);
    X86_TICK(c, 12);
    // 0e35db  add esp, 8
    X86_AT(c, 0xe35dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e35de  ret 
    X86_AT(c, 0xe35deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe35c8u, "ran off the end of a function");
}
void f_000e35e0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e35e0  movzx edx, byte ptr [esp + 4]
    X86_AT(c, 0xe35e0u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e35e5  cmp edx, 0x60
    X86_AT(c, 0xe35e5u);
    (void)x86_sub(c, c.r[2], 0x60u, 0, 4);
    // 0e35e8  ja 0xe3664
    X86_AT(c, 0xe35e8u);
    if (x86_cc(c, 7)) { goto L_e3664; }
    X86_TICK(c, 7);
    // 0e35ea  cmp edx, 0x60
    X86_AT(c, 0xe35eau);
    (void)x86_sub(c, c.r[2], 0x60u, 0, 4);
    // 0e35ed  je 0xe36c3
    X86_AT(c, 0xe35edu);
    if (x86_cc(c, 4)) { goto L_e36c3; }
    X86_TICK(c, 7);
    // 0e35f3  cmp edx, 0x48
    X86_AT(c, 0xe35f3u);
    (void)x86_sub(c, c.r[2], 0x48u, 0, 4);
    // 0e35f6  je 0xe36fb
    X86_AT(c, 0xe35f6u);
    if (x86_cc(c, 4)) { goto L_e36fb; }
    X86_TICK(c, 9);
    // 0e35fc  sub edx, 0x2c
    X86_AT(c, 0xe35fcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2Cu, 0, 4); }
    // 0e35ff  cmp edx, 0x14
    X86_AT(c, 0xe35ffu);
    (void)x86_sub(c, c.r[2], 0x14u, 0, 4);
    // 0e3602  ja 0xe371b
    X86_AT(c, 0xe3602u);
    if (x86_cc(c, 7)) { goto L_e371b; }
    X86_TICK(c, 7);
    // 0e3608  jmp dword ptr cs:[edx*4 + 0xe3610]
    X86_AT(c, 0xe3608u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE3610u)));
      switch (t) {
      case 0xe36e6u: goto L_e36e6;
      case 0xe36edu: goto L_e36ed;
      case 0xe36f4u: goto L_e36f4;
      case 0xe3702u: goto L_e3702;
      case 0xe3709u: goto L_e3709;
      case 0xe3714u: goto L_e3714;
      case 0xe371bu: goto L_e371b;
      default: x86_jump(c, t); return; } }
L_e3664:
    X86_TICK(c, 7);
    // 0e3664  cmp edx, 0xe0
    X86_AT(c, 0xe3664u);
    (void)x86_sub(c, c.r[2], 0xE0u, 0, 4);
    // 0e366a  ja 0xe3694
    X86_AT(c, 0xe366au);
    if (x86_cc(c, 7)) { goto L_e3694; }
    X86_TICK(c, 7);
    // 0e366c  cmp edx, 0xe0
    X86_AT(c, 0xe366cu);
    (void)x86_sub(c, c.r[2], 0xE0u, 0, 4);
    // 0e3672  je 0xe3714
    X86_AT(c, 0xe3672u);
    if (x86_cc(c, 4)) { goto L_e3714; }
    X86_TICK(c, 7);
    // 0e3678  cmp edx, 0x64
    X86_AT(c, 0xe3678u);
    (void)x86_sub(c, c.r[2], 0x64u, 0, 4);
    // 0e367b  je 0xe36b9
    X86_AT(c, 0xe367bu);
    if (x86_cc(c, 4)) { goto L_e36b9; }
    X86_TICK(c, 7);
    // 0e367d  cmp edx, 0x68
    X86_AT(c, 0xe367du);
    (void)x86_sub(c, c.r[2], 0x68u, 0, 4);
    // 0e3680  je 0xe371b
    X86_AT(c, 0xe3680u);
    if (x86_cc(c, 4)) { goto L_e371b; }
    X86_TICK(c, 7);
    // 0e3686  cmp edx, 0x6c
    X86_AT(c, 0xe3686u);
    (void)x86_sub(c, c.r[2], 0x6Cu, 0, 4);
    // 0e3689  je 0xe3710
    X86_AT(c, 0xe3689u);
    if (x86_cc(c, 4)) { goto L_e3710; }
    X86_TICK(c, 7);
    // 0e368f  jmp 0xe371b
    X86_AT(c, 0xe368fu);
    goto L_e371b;
L_e3694:
    X86_TICK(c, 7);
    // 0e3694  cmp edx, 0xf0
    X86_AT(c, 0xe3694u);
    (void)x86_sub(c, c.r[2], 0xF0u, 0, 4);
    // 0e369a  je 0xe36ca
    X86_AT(c, 0xe369au);
    if (x86_cc(c, 4)) { goto L_e36ca; }
    X86_TICK(c, 7);
    // 0e369c  cmp edx, 0xf4
    X86_AT(c, 0xe369cu);
    (void)x86_sub(c, c.r[2], 0xF4u, 0, 4);
    // 0e36a2  je 0xe36d1
    X86_AT(c, 0xe36a2u);
    if (x86_cc(c, 4)) { goto L_e36d1; }
    X86_TICK(c, 7);
    // 0e36a4  cmp edx, 0xf8
    X86_AT(c, 0xe36a4u);
    (void)x86_sub(c, c.r[2], 0xF8u, 0, 4);
    // 0e36aa  je 0xe36d8
    X86_AT(c, 0xe36aau);
    if (x86_cc(c, 4)) { goto L_e36d8; }
    X86_TICK(c, 7);
    // 0e36ac  cmp edx, 0xfc
    X86_AT(c, 0xe36acu);
    (void)x86_sub(c, c.r[2], 0xFCu, 0, 4);
    // 0e36b2  je 0xe36df
    X86_AT(c, 0xe36b2u);
    if (x86_cc(c, 4)) { goto L_e36df; }
    X86_TICK(c, 7);
    // 0e36b4  jmp 0xe371b
    X86_AT(c, 0xe36b4u);
    goto L_e371b;
L_e36b9:
    X86_TICK(c, 9);
    // 0e36b9  mov ecx, 2
    X86_AT(c, 0xe36b9u);
    c.r[1] = 0x2u;
    // 0e36be  jmp 0xe3720
    X86_AT(c, 0xe36beu);
    goto L_e3720;
L_e36c3:
    X86_TICK(c, 9);
    // 0e36c3  mov ecx, 0x28
    X86_AT(c, 0xe36c3u);
    c.r[1] = 0x28u;
    // 0e36c8  jmp 0xe3720
    X86_AT(c, 0xe36c8u);
    goto L_e3720;
L_e36ca:
    X86_TICK(c, 9);
    // 0e36ca  mov ecx, 0x5a
    X86_AT(c, 0xe36cau);
    c.r[1] = 0x5Au;
    // 0e36cf  jmp 0xe3720
    X86_AT(c, 0xe36cfu);
    goto L_e3720;
L_e36d1:
    X86_TICK(c, 9);
    // 0e36d1  mov ecx, 6
    X86_AT(c, 0xe36d1u);
    c.r[1] = 0x6u;
    // 0e36d6  jmp 0xe3720
    X86_AT(c, 0xe36d6u);
    goto L_e3720;
L_e36d8:
    X86_TICK(c, 9);
    // 0e36d8  mov ecx, 0xd2
    X86_AT(c, 0xe36d8u);
    c.r[1] = 0xD2u;
    // 0e36dd  jmp 0xe3720
    X86_AT(c, 0xe36ddu);
    goto L_e3720;
L_e36df:
    X86_TICK(c, 9);
    // 0e36df  mov ecx, 0x14
    X86_AT(c, 0xe36dfu);
    c.r[1] = 0x14u;
    // 0e36e4  jmp 0xe3720
    X86_AT(c, 0xe36e4u);
    goto L_e3720;
L_e36e6:
    X86_TICK(c, 9);
    // 0e36e6  mov ecx, 0xa
    X86_AT(c, 0xe36e6u);
    c.r[1] = 0xAu;
    // 0e36eb  jmp 0xe3720
    X86_AT(c, 0xe36ebu);
    goto L_e3720;
L_e36ed:
    X86_TICK(c, 9);
    // 0e36ed  mov ecx, 0x50
    X86_AT(c, 0xe36edu);
    c.r[1] = 0x50u;
    // 0e36f2  jmp 0xe3720
    X86_AT(c, 0xe36f2u);
    goto L_e3720;
L_e36f4:
    X86_TICK(c, 9);
    // 0e36f4  mov ecx, 0x3c
    X86_AT(c, 0xe36f4u);
    c.r[1] = 0x3Cu;
    // 0e36f9  jmp 0xe3720
    X86_AT(c, 0xe36f9u);
    goto L_e3720;
L_e36fb:
    X86_TICK(c, 9);
    // 0e36fb  mov ecx, 0x8c
    X86_AT(c, 0xe36fbu);
    c.r[1] = 0x8Cu;
    // 0e3700  jmp 0xe3720
    X86_AT(c, 0xe3700u);
    goto L_e3720;
L_e3702:
    X86_TICK(c, 9);
    // 0e3702  mov ecx, 0xb4
    X86_AT(c, 0xe3702u);
    c.r[1] = 0xB4u;
    // 0e3707  jmp 0xe3720
    X86_AT(c, 0xe3707u);
    goto L_e3720;
L_e3709:
    X86_TICK(c, 9);
    // 0e3709  mov ecx, 0xe6
    X86_AT(c, 0xe3709u);
    c.r[1] = 0xE6u;
    // 0e370e  jmp 0xe3720
    X86_AT(c, 0xe370eu);
    goto L_e3720;
L_e3710:
    X86_TICK(c, 9);
    // 0e3710  sub ecx, ecx
    X86_AT(c, 0xe3710u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0e3712  jmp 0xe3720
    X86_AT(c, 0xe3712u);
    goto L_e3720;
L_e3714:
    X86_TICK(c, 9);
    // 0e3714  mov ecx, 0xff
    X86_AT(c, 0xe3714u);
    c.r[1] = 0xFFu;
    // 0e3719  jmp 0xe3720
    X86_AT(c, 0xe3719u);
    goto L_e3720;
L_e371b:
    X86_TICK(c, 2);
    // 0e371b  mov ecx, 1
    X86_AT(c, 0xe371bu);
    c.r[1] = 0x1u;
L_e3720:
    X86_TICK(c, 12);
    // 0e3720  mov eax, ecx
    X86_AT(c, 0xe3720u);
    c.r[0] = c.r[1];
    // 0e3722  ret 
    X86_AT(c, 0xe3722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe35e0u, "ran off the end of a function");
}
void f_000e371b(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0e371b  mov ecx, 1
    X86_AT(c, 0xe371bu);
    c.r[1] = 0x1u;
    // 0e3720  mov eax, ecx
    X86_AT(c, 0xe3720u);
    c.r[0] = c.r[1];
    // 0e3722  ret 
    X86_AT(c, 0xe3722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe371bu, "ran off the end of a function");
}
void f_000e3724(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e3724  push ebp
    X86_AT(c, 0xe3724u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e3725  mov ebp, esp
    X86_AT(c, 0xe3725u);
    c.r[5] = c.r[4];
    // 0e3727  push esi
    X86_AT(c, 0xe3727u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3728  push edi
    X86_AT(c, 0xe3728u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3729  sub edi, edi
    X86_AT(c, 0xe3729u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e372b  mov esi, edi
    X86_AT(c, 0xe372bu);
    c.r[6] = c.r[7];
    // 0e372d  push 3
    X86_AT(c, 0xe372du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e372f  call 0xe1a7c
    X86_AT(c, 0xe372fu);
    push32(c, 0xe3734u); f_000e1a7c(c); X86_RET(c, 0xe3734u);
    X86_TICK(c, 9);
    // 0e3734  add esp, 4
    X86_AT(c, 0xe3734u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e3737  cmp edi, eax
    X86_AT(c, 0xe3737u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0e3739  jne 0xe374b
    X86_AT(c, 0xe3739u);
    if (x86_cc(c, 5)) { goto L_e374b; }
    X86_TICK(c, 11);
    // 0e373b  inc esi
    X86_AT(c, 0xe373bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e373c  push 2
    X86_AT(c, 0xe373cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e373e  call 0xe1a7c
    X86_AT(c, 0xe373eu);
    push32(c, 0xe3743u); f_000e1a7c(c); X86_RET(c, 0xe3743u);
    X86_TICK(c, 9);
    // 0e3743  add esp, 4
    X86_AT(c, 0xe3743u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e3746  cmp edi, eax
    X86_AT(c, 0xe3746u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0e3748  jne 0xe374b
    X86_AT(c, 0xe3748u);
    if (x86_cc(c, 5)) { goto L_e374b; }
    X86_TICK(c, 2);
    // 0e374a  inc esi
    X86_AT(c, 0xe374au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_e374b:
    X86_TICK(c, 13);
    // 0e374b  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xe374bu);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e374f  cmp edx, 0x60
    X86_AT(c, 0xe374fu);
    (void)x86_sub(c, c.r[2], 0x60u, 0, 4);
    // 0e3752  ja 0xe37ce
    X86_AT(c, 0xe3752u);
    if (x86_cc(c, 7)) { goto L_e37ce; }
    X86_TICK(c, 7);
    // 0e3754  cmp edx, 0x60
    X86_AT(c, 0xe3754u);
    (void)x86_sub(c, c.r[2], 0x60u, 0, 4);
    // 0e3757  je 0xe3833
    X86_AT(c, 0xe3757u);
    if (x86_cc(c, 4)) { goto L_e3833; }
    X86_TICK(c, 7);
    // 0e375d  cmp edx, 0x48
    X86_AT(c, 0xe375du);
    (void)x86_sub(c, c.r[2], 0x48u, 0, 4);
    // 0e3760  je 0xe38ae
    X86_AT(c, 0xe3760u);
    if (x86_cc(c, 4)) { goto L_e38ae; }
    X86_TICK(c, 9);
    // 0e3766  sub edx, 0x2c
    X86_AT(c, 0xe3766u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2Cu, 0, 4); }
    // 0e3769  cmp edx, 0x14
    X86_AT(c, 0xe3769u);
    (void)x86_sub(c, c.r[2], 0x14u, 0, 4);
    // 0e376c  ja 0xe38ea
    X86_AT(c, 0xe376cu);
    if (x86_cc(c, 7)) { goto L_e38ea; }
    X86_TICK(c, 7);
    // 0e3772  jmp dword ptr cs:[edx*4 + 0xe377a]
    X86_AT(c, 0xe3772u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE377Au)));
      switch (t) {
      case 0xe3881u: goto L_e3881;
      case 0xe3896u: goto L_e3896;
      case 0xe389du: goto L_e389d;
      case 0xe38b5u: goto L_e38b5;
      case 0xe38d7u: goto L_e38d7;
      case 0xe38e5u: goto L_e38e5;
      case 0xe38eau: goto L_e38ea;
      default: x86_jump(c, t); return; } }
L_e37ce:
    X86_TICK(c, 7);
    // 0e37ce  cmp edx, 0xe0
    X86_AT(c, 0xe37ceu);
    (void)x86_sub(c, c.r[2], 0xE0u, 0, 4);
    // 0e37d4  ja 0xe37fa
    X86_AT(c, 0xe37d4u);
    if (x86_cc(c, 7)) { goto L_e37fa; }
    X86_TICK(c, 7);
    // 0e37d6  cmp edx, 0xe0
    X86_AT(c, 0xe37d6u);
    (void)x86_sub(c, c.r[2], 0xE0u, 0, 4);
    // 0e37dc  je 0xe38c6
    X86_AT(c, 0xe37dcu);
    if (x86_cc(c, 4)) { goto L_e38c6; }
    X86_TICK(c, 7);
    // 0e37e2  cmp edx, 0x64
    X86_AT(c, 0xe37e2u);
    (void)x86_sub(c, c.r[2], 0x64u, 0, 4);
    // 0e37e5  je 0xe3829
    X86_AT(c, 0xe37e5u);
    if (x86_cc(c, 4)) { goto L_e3829; }
    X86_TICK(c, 7);
    // 0e37e7  cmp edx, 0x68
    X86_AT(c, 0xe37e7u);
    (void)x86_sub(c, c.r[2], 0x68u, 0, 4);
    // 0e37ea  je 0xe381f
    X86_AT(c, 0xe37eau);
    if (x86_cc(c, 4)) { goto L_e381f; }
    X86_TICK(c, 7);
    // 0e37ec  cmp edx, 0x6c
    X86_AT(c, 0xe37ecu);
    (void)x86_sub(c, c.r[2], 0x6Cu, 0, 4);
    // 0e37ef  je 0xe38de
    X86_AT(c, 0xe37efu);
    if (x86_cc(c, 4)) { goto L_e38de; }
    X86_TICK(c, 7);
    // 0e37f5  jmp 0xe38ea
    X86_AT(c, 0xe37f5u);
    goto L_e38ea;
L_e37fa:
    X86_TICK(c, 7);
    // 0e37fa  cmp edx, 0xf0
    X86_AT(c, 0xe37fau);
    (void)x86_sub(c, c.r[2], 0xF0u, 0, 4);
    // 0e3800  je 0xe383d
    X86_AT(c, 0xe3800u);
    if (x86_cc(c, 4)) { goto L_e383d; }
    X86_TICK(c, 7);
    // 0e3802  cmp edx, 0xf4
    X86_AT(c, 0xe3802u);
    (void)x86_sub(c, c.r[2], 0xF4u, 0, 4);
    // 0e3808  je 0xe3855
    X86_AT(c, 0xe3808u);
    if (x86_cc(c, 4)) { goto L_e3855; }
    X86_TICK(c, 7);
    // 0e380a  cmp edx, 0xf8
    X86_AT(c, 0xe380au);
    (void)x86_sub(c, c.r[2], 0xF8u, 0, 4);
    // 0e3810  je 0xe386d
    X86_AT(c, 0xe3810u);
    if (x86_cc(c, 4)) { goto L_e386d; }
    X86_TICK(c, 7);
    // 0e3812  cmp edx, 0xfc
    X86_AT(c, 0xe3812u);
    (void)x86_sub(c, c.r[2], 0xFCu, 0, 4);
    // 0e3818  je 0xe3877
    X86_AT(c, 0xe3818u);
    if (x86_cc(c, 4)) { goto L_e3877; }
    X86_TICK(c, 7);
    // 0e381a  jmp 0xe38ea
    X86_AT(c, 0xe381au);
    goto L_e38ea;
L_e381f:
    X86_TICK(c, 9);
    // 0e381f  mov edi, 0x38
    X86_AT(c, 0xe381fu);
    c.r[7] = 0x38u;
    // 0e3824  jmp 0xe38ea
    X86_AT(c, 0xe3824u);
    goto L_e38ea;
L_e3829:
    X86_TICK(c, 9);
    // 0e3829  mov edi, 0x3a
    X86_AT(c, 0xe3829u);
    c.r[7] = 0x3Au;
    // 0e382e  jmp 0xe38ea
    X86_AT(c, 0xe382eu);
    goto L_e38ea;
L_e3833:
    X86_TICK(c, 9);
    // 0e3833  mov edi, 0x36
    X86_AT(c, 0xe3833u);
    c.r[7] = 0x36u;
    // 0e3838  jmp 0xe38ea
    X86_AT(c, 0xe3838u);
    goto L_e38ea;
L_e383d:
    X86_TICK(c, 9);
    // 0e383d  mov edi, 0x2c
    X86_AT(c, 0xe383du);
    c.r[7] = 0x2Cu;
    // 0e3842  cmp esi, 1
    X86_AT(c, 0xe3842u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e3845  jne 0xe38ea
    X86_AT(c, 0xe3845u);
    if (x86_cc(c, 5)) { goto L_e38ea; }
    X86_TICK(c, 9);
    // 0e384b  mov edi, 0x34
    X86_AT(c, 0xe384bu);
    c.r[7] = 0x34u;
    // 0e3850  jmp 0xe38ea
    X86_AT(c, 0xe3850u);
    goto L_e38ea;
L_e3855:
    X86_TICK(c, 9);
    // 0e3855  mov edi, 0x32
    X86_AT(c, 0xe3855u);
    c.r[7] = 0x32u;
    // 0e385a  cmp esi, 1
    X86_AT(c, 0xe385au);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e385d  jne 0xe38ea
    X86_AT(c, 0xe385du);
    if (x86_cc(c, 5)) { goto L_e38ea; }
    X86_TICK(c, 9);
    // 0e3863  mov edi, 0x20
    X86_AT(c, 0xe3863u);
    c.r[7] = 0x20u;
    // 0e3868  jmp 0xe38ea
    X86_AT(c, 0xe3868u);
    goto L_e38ea;
L_e386d:
    X86_TICK(c, 9);
    // 0e386d  mov edi, 0x30
    X86_AT(c, 0xe386du);
    c.r[7] = 0x30u;
    // 0e3872  jmp 0xe38ea
    X86_AT(c, 0xe3872u);
    goto L_e38ea;
L_e3877:
    X86_TICK(c, 9);
    // 0e3877  mov edi, 0x2e
    X86_AT(c, 0xe3877u);
    c.r[7] = 0x2Eu;
    // 0e387c  jmp 0xe38ea
    X86_AT(c, 0xe387cu);
    goto L_e38ea;
L_e3881:
    X86_TICK(c, 9);
    // 0e3881  mov edi, 0x3c
    X86_AT(c, 0xe3881u);
    c.r[7] = 0x3Cu;
    // 0e3886  cmp esi, 1
    X86_AT(c, 0xe3886u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e3889  jne 0xe38ea
    X86_AT(c, 0xe3889u);
    if (x86_cc(c, 5)) { goto L_e38ea; }
    X86_TICK(c, 9);
    // 0e388f  mov edi, 0x3e
    X86_AT(c, 0xe388fu);
    c.r[7] = 0x3Eu;
    // 0e3894  jmp 0xe38ea
    X86_AT(c, 0xe3894u);
    goto L_e38ea;
L_e3896:
    X86_TICK(c, 9);
    // 0e3896  mov edi, 0x56
    X86_AT(c, 0xe3896u);
    c.r[7] = 0x56u;
    // 0e389b  jmp 0xe38ea
    X86_AT(c, 0xe389bu);
    goto L_e38ea;
L_e389d:
    X86_TICK(c, 9);
    // 0e389d  mov edi, 0x66
    X86_AT(c, 0xe389du);
    c.r[7] = 0x66u;
    // 0e38a2  cmp esi, 1
    X86_AT(c, 0xe38a2u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e38a5  jne 0xe38ea
    X86_AT(c, 0xe38a5u);
    if (x86_cc(c, 5)) { goto L_e38ea; }
    X86_TICK(c, 9);
    // 0e38a7  mov edi, 0x68
    X86_AT(c, 0xe38a7u);
    c.r[7] = 0x68u;
    // 0e38ac  jmp 0xe38ea
    X86_AT(c, 0xe38acu);
    goto L_e38ea;
L_e38ae:
    X86_TICK(c, 9);
    // 0e38ae  mov edi, 0x78
    X86_AT(c, 0xe38aeu);
    c.r[7] = 0x78u;
    // 0e38b3  jmp 0xe38ea
    X86_AT(c, 0xe38b3u);
    goto L_e38ea;
L_e38b5:
    X86_TICK(c, 9);
    // 0e38b5  mov edi, 0x62
    X86_AT(c, 0xe38b5u);
    c.r[7] = 0x62u;
    // 0e38ba  cmp esi, 1
    X86_AT(c, 0xe38bau);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e38bd  jne 0xe38ea
    X86_AT(c, 0xe38bdu);
    if (x86_cc(c, 5)) { goto L_e38ea; }
    X86_TICK(c, 9);
    // 0e38bf  mov edi, 0x64
    X86_AT(c, 0xe38bfu);
    c.r[7] = 0x64u;
    // 0e38c4  jmp 0xe38ea
    X86_AT(c, 0xe38c4u);
    goto L_e38ea;
L_e38c6:
    X86_TICK(c, 9);
    // 0e38c6  mov edi, 0x5a
    X86_AT(c, 0xe38c6u);
    c.r[7] = 0x5Au;
    // 0e38cb  cmp esi, 1
    X86_AT(c, 0xe38cbu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e38ce  jne 0xe38ea
    X86_AT(c, 0xe38ceu);
    if (x86_cc(c, 5)) { goto L_e38ea; }
    X86_TICK(c, 9);
    // 0e38d0  mov edi, 0x5e
    X86_AT(c, 0xe38d0u);
    c.r[7] = 0x5Eu;
    // 0e38d5  jmp 0xe38ea
    X86_AT(c, 0xe38d5u);
    goto L_e38ea;
L_e38d7:
    X86_TICK(c, 9);
    // 0e38d7  mov edi, 0x54
    X86_AT(c, 0xe38d7u);
    c.r[7] = 0x54u;
    // 0e38dc  jmp 0xe38ea
    X86_AT(c, 0xe38dcu);
    goto L_e38ea;
L_e38de:
    X86_TICK(c, 9);
    // 0e38de  mov edi, 0x6a
    X86_AT(c, 0xe38deu);
    c.r[7] = 0x6Au;
    // 0e38e3  jmp 0xe38ea
    X86_AT(c, 0xe38e3u);
    goto L_e38ea;
L_e38e5:
    X86_TICK(c, 2);
    // 0e38e5  mov edi, 0x58
    X86_AT(c, 0xe38e5u);
    c.r[7] = 0x58u;
L_e38ea:
    X86_TICK(c, 26);
    // 0e38ea  mov eax, edi
    X86_AT(c, 0xe38eau);
    c.r[0] = c.r[7];
    // 0e38ec  pop edi
    X86_AT(c, 0xe38ecu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e38ed  pop esi
    X86_AT(c, 0xe38edu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e38ee  leave 
    X86_AT(c, 0xe38eeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e38ef  ret 
    X86_AT(c, 0xe38efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3724u, "ran off the end of a function");
}
void f_000e38ea(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0e38ea  mov eax, edi
    X86_AT(c, 0xe38eau);
    c.r[0] = c.r[7];
    // 0e38ec  pop edi
    X86_AT(c, 0xe38ecu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e38ed  pop esi
    X86_AT(c, 0xe38edu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e38ee  leave 
    X86_AT(c, 0xe38eeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e38ef  ret 
    X86_AT(c, 0xe38efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe38eau, "ran off the end of a function");
}
void f_000e38f0(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e38f0  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xe38f0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e38f4  cmp ecx, dword ptr [0x7a5d0]
    X86_AT(c, 0xe38f4u);
    (void)x86_sub(c, c.r[1], rd32((c.sbase[3] + (uint32_t)(0x7A5D0u))), 0, 4);
    // 0e38fa  je 0xe3970
    X86_AT(c, 0xe38fau);
    if (x86_cc(c, 4)) { goto L_e3970; }
    X86_TICK(c, 25);
    // 0e3900  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe3900u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e3905  lea edx, [eax + eax*4]
    X86_AT(c, 0xe3905u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e3908  lea edx, [eax + edx*2]
    X86_AT(c, 0xe3908u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e390b  shl edx, 5
    X86_AT(c, 0xe390bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e390e  sub edx, eax
    X86_AT(c, 0xe390eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e3910  cmp dword ptr [edx + 0xcde56], 1
    X86_AT(c, 0xe3910u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x1u, 0, 4);
    // 0e3917  jne 0xe3936
    X86_AT(c, 0xe3917u);
    if (x86_cc(c, 5)) { goto L_e3936; }
    X86_TICK(c, 7);
    // 0e3919  cmp ecx, 4
    X86_AT(c, 0xe3919u);
    (void)x86_sub(c, c.r[1], 0x4u, 0, 4);
    // 0e391c  jne 0xe392a
    X86_AT(c, 0xe391cu);
    if (x86_cc(c, 5)) { goto L_e392a; }
    X86_TICK(c, 9);
    // 0e391e  mov dword ptr [0x7a15c], 0x8c
    X86_AT(c, 0xe391eu);
    wr32((c.sbase[3] + (uint32_t)(0x7A15Cu)), 0x8Cu);
    // 0e3928  jmp 0xe396a
    X86_AT(c, 0xe3928u);
    goto L_e396a;
L_e392a:
    X86_TICK(c, 9);
    // 0e392a  mov dword ptr [0x7a15c], 0x8e
    X86_AT(c, 0xe392au);
    wr32((c.sbase[3] + (uint32_t)(0x7A15Cu)), 0x8Eu);
    // 0e3934  jmp 0xe396a
    X86_AT(c, 0xe3934u);
    goto L_e396a;
L_e3936:
    X86_TICK(c, 25);
    // 0e3936  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe3936u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e393b  lea edx, [eax + eax*4]
    X86_AT(c, 0xe393bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e393e  lea edx, [eax + edx*2]
    X86_AT(c, 0xe393eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e3941  shl edx, 5
    X86_AT(c, 0xe3941u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e3944  sub edx, eax
    X86_AT(c, 0xe3944u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e3946  cmp dword ptr [edx + 0xcde56], 2
    X86_AT(c, 0xe3946u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x2u, 0, 4);
    // 0e394d  jne 0xe396a
    X86_AT(c, 0xe394du);
    if (x86_cc(c, 5)) { goto L_e396a; }
    X86_TICK(c, 7);
    // 0e394f  cmp ecx, 4
    X86_AT(c, 0xe394fu);
    (void)x86_sub(c, c.r[1], 0x4u, 0, 4);
    // 0e3952  jne 0xe3960
    X86_AT(c, 0xe3952u);
    if (x86_cc(c, 5)) { goto L_e3960; }
    X86_TICK(c, 9);
    // 0e3954  mov dword ptr [0x7a15c], 0x90
    X86_AT(c, 0xe3954u);
    wr32((c.sbase[3] + (uint32_t)(0x7A15Cu)), 0x90u);
    // 0e395e  jmp 0xe396a
    X86_AT(c, 0xe395eu);
    goto L_e396a;
L_e3960:
    X86_TICK(c, 2);
    // 0e3960  mov dword ptr [0x7a15c], 0x92
    X86_AT(c, 0xe3960u);
    wr32((c.sbase[3] + (uint32_t)(0x7A15Cu)), 0x92u);
L_e396a:
    X86_TICK(c, 2);
    // 0e396a  mov dword ptr [0x7a5d0], ecx
    X86_AT(c, 0xe396au);
    wr32((c.sbase[3] + (uint32_t)(0x7A5D0u)), c.r[1]);
L_e3970:
    X86_TICK(c, 10);
    // 0e3970  ret 
    X86_AT(c, 0xe3970u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe38f0u, "ran off the end of a function");
}
void f_000e3974(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0e3974  push esi
    X86_AT(c, 0xe3974u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3975  push edi
    X86_AT(c, 0xe3975u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3976  mov edi, 1
    X86_AT(c, 0xe3976u);
    c.r[7] = 0x1u;
L_e397b:
    X86_TICK(c, 7);
    // 0e397b  cmp edi, 0x30
    X86_AT(c, 0xe397bu);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0e397e  jge 0xe399b
    X86_AT(c, 0xe397eu);
    if (x86_cc(c, 13)) { goto L_e399b; }
    X86_TICK(c, 19);
    // 0e3980  lea eax, [edi*8]
    X86_AT(c, 0xe3980u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0e3987  lea eax, [eax + eax*2]
    X86_AT(c, 0xe3987u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e398a  sub edx, edx
    X86_AT(c, 0xe398au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e398c  mov dword ptr [eax + 0x7a150], edx
    X86_AT(c, 0xe398cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x7A150u)), c.r[2]);
    // 0e3992  mov dword ptr [eax + 0x7a164], edx
    X86_AT(c, 0xe3992u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x7A164u)), c.r[2]);
    // 0e3998  inc edi
    X86_AT(c, 0xe3998u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e3999  jmp 0xe397b
    X86_AT(c, 0xe3999u);
    X86_POLL(c, 0xe397bu); goto L_e397b;
L_e399b:
    X86_TICK(c, 7);
    // 0e399b  sub eax, eax
    X86_AT(c, 0xe399bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e399d  mov dword ptr [0x7a164], eax
    X86_AT(c, 0xe399du);
    wr32((c.sbase[3] + (uint32_t)(0x7A164u)), c.r[0]);
    // 0e39a2  xchg edi, eax
    X86_AT(c, 0xe39a2u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_e39a3:
    X86_TICK(c, 7);
    // 0e39a3  cmp edi, 0xb
    X86_AT(c, 0xe39a3u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0e39a6  jge 0xe39c6
    X86_AT(c, 0xe39a6u);
    if (x86_cc(c, 13)) { goto L_e39c6; }
    X86_TICK(c, 2);
    // 0e39a8  sub esi, esi
    X86_AT(c, 0xe39a8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e39aa:
    X86_TICK(c, 7);
    // 0e39aa  cmp esi, 0xb
    X86_AT(c, 0xe39aau);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0e39ad  jge 0xe39c3
    X86_AT(c, 0xe39adu);
    if (x86_cc(c, 13)) { goto L_e39c3; }
    X86_TICK(c, 19);
    // 0e39af  mov eax, edi
    X86_AT(c, 0xe39afu);
    c.r[0] = c.r[7];
    // 0e39b1  lea edx, [eax + eax*8]
    X86_AT(c, 0xe39b1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e39b4  lea eax, [edx + eax*2]
    X86_AT(c, 0xe39b4u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0e39b7  add eax, esi
    X86_AT(c, 0xe39b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e39b9  mov byte ptr [eax + 0x79e90], 0
    X86_AT(c, 0xe39b9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x79E90u)), 0x0u);
    // 0e39c0  inc esi
    X86_AT(c, 0xe39c0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e39c1  jmp 0xe39aa
    X86_AT(c, 0xe39c1u);
    X86_POLL(c, 0xe39aau); goto L_e39aa;
L_e39c3:
    X86_TICK(c, 9);
    // 0e39c3  inc edi
    X86_AT(c, 0xe39c3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e39c4  jmp 0xe39a3
    X86_AT(c, 0xe39c4u);
    X86_POLL(c, 0xe39a3u); goto L_e39a3;
L_e39c6:
    X86_TICK(c, 7);
    // 0e39c6  call 0xe2c18
    X86_AT(c, 0xe39c6u);
    push32(c, 0xe39cbu); f_000e2c18(c); X86_RET(c, 0xe39cbu);
    X86_TICK(c, 18);
    // 0e39cb  pop edi
    X86_AT(c, 0xe39cbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e39cc  pop esi
    X86_AT(c, 0xe39ccu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e39cd  ret 
    X86_AT(c, 0xe39cdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3974u, "ran off the end of a function");
}
void f_000e39d0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e39d0  push edi
    X86_AT(c, 0xe39d0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e39d1  push 0x1f46
    X86_AT(c, 0xe39d1u);
    { uint32_t v = 0x1F46u; push32(c, v); }
    // 0e39d6  push 0x1f4c
    X86_AT(c, 0xe39d6u);
    { uint32_t v = 0x1F4Cu; push32(c, v); }
    // 0e39db  call 0x100f34
    X86_AT(c, 0xe39dbu);
    push32(c, 0xe39e0u); f_00100f34(c); X86_RET(c, 0xe39e0u);
    X86_TICK(c, 12);
    // 0e39e0  add esp, 8
    X86_AT(c, 0xe39e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e39e3  xchg edi, eax
    X86_AT(c, 0xe39e3u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e39e4  and edi, edi
    X86_AT(c, 0xe39e4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e39e6  jne 0xe39fe
    X86_AT(c, 0xe39e6u);
    if (x86_cc(c, 5)) { goto L_e39fe; }
    X86_TICK(c, 9);
    // 0e39e8  push 0x1f5c
    X86_AT(c, 0xe39e8u);
    { uint32_t v = 0x1F5Cu; push32(c, v); }
    // 0e39ed  call 0xe75f8
    X86_AT(c, 0xe39edu);
    push32(c, 0xe39f2u); f_000e75f8(c); X86_RET(c, 0xe39f2u);
    X86_TICK(c, 9);
    // 0e39f2  push 3
    X86_AT(c, 0xe39f2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e39f4  call 0xe1944
    X86_AT(c, 0xe39f4u);
    push32(c, 0xe39f9u); f_000e1944(c); X86_RET(c, 0xe39f9u);
    X86_TICK(c, 9);
    // 0e39f9  add esp, 8
    X86_AT(c, 0xe39f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e39fc  jmp 0xe3a1e
    X86_AT(c, 0xe39fcu);
    goto L_e3a1e;
L_e39fe:
    X86_TICK(c, 15);
    // 0e39fe  push edi
    X86_AT(c, 0xe39feu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e39ff  push 0x29000
    X86_AT(c, 0xe39ffu);
    { uint32_t v = 0x29000u; push32(c, v); }
    // 0e3a04  push 1
    X86_AT(c, 0xe3a04u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e3a06  push 0x4ee90
    X86_AT(c, 0xe3a06u);
    { uint32_t v = 0x4EE90u; push32(c, v); }
    // 0e3a0b  call 0x100c58
    X86_AT(c, 0xe3a0bu);
    push32(c, 0xe3a10u); f_00100c58(c); X86_RET(c, 0xe3a10u);
    X86_TICK(c, 9);
    // 0e3a10  push edi
    X86_AT(c, 0xe3a10u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3a11  call 0x101430
    X86_AT(c, 0xe3a11u);
    push32(c, 0xe3a16u); f_00101430(c); X86_RET(c, 0xe3a16u);
    X86_TICK(c, 7);
    // 0e3a16  call 0xe3bb8
    X86_AT(c, 0xe3a16u);
    push32(c, 0xe3a1bu); f_000e3bb8(c); X86_RET(c, 0xe3a1bu);
    X86_TICK(c, 2);
    // 0e3a1b  add esp, 0x14
    X86_AT(c, 0xe3a1bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e3a1e:
    X86_TICK(c, 14);
    // 0e3a1e  pop edi
    X86_AT(c, 0xe3a1eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e3a1f  ret 
    X86_AT(c, 0xe3a1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe39d0u, "ran off the end of a function");
}
void f_000e3a20(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0e3a20  push esi
    X86_AT(c, 0xe3a20u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3a21  push edi
    X86_AT(c, 0xe3a21u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3a22  sub edi, edi
    X86_AT(c, 0xe3a22u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e3a24:
    X86_TICK(c, 7);
    // 0e3a24  cmp edi, 0xe
    X86_AT(c, 0xe3a24u);
    (void)x86_sub(c, c.r[7], 0xEu, 0, 4);
    // 0e3a27  jge 0xe3a55
    X86_AT(c, 0xe3a27u);
    if (x86_cc(c, 13)) { goto L_e3a55; }
    X86_TICK(c, 2);
    // 0e3a29  sub esi, esi
    X86_AT(c, 0xe3a29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e3a2b:
    X86_TICK(c, 7);
    // 0e3a2b  cmp esi, 0x40
    X86_AT(c, 0xe3a2bu);
    (void)x86_sub(c, c.r[6], 0x40u, 0, 4);
    // 0e3a2e  jge 0xe3a52
    X86_AT(c, 0xe3a2eu);
    if (x86_cc(c, 13)) { goto L_e3a52; }
    X86_TICK(c, 2);
    // 0e3a30  sub ecx, ecx
    X86_AT(c, 0xe3a30u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_e3a32:
    X86_TICK(c, 7);
    // 0e3a32  cmp ecx, 0x40
    X86_AT(c, 0xe3a32u);
    (void)x86_sub(c, c.r[1], 0x40u, 0, 4);
    // 0e3a35  jge 0xe3a4f
    X86_AT(c, 0xe3a35u);
    if (x86_cc(c, 13)) { goto L_e3a4f; }
    X86_TICK(c, 25);
    // 0e3a37  mov eax, edi
    X86_AT(c, 0xe3a37u);
    c.r[0] = c.r[7];
    // 0e3a39  shl eax, 0xc
    X86_AT(c, 0xe3a39u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[0] = r; }
    // 0e3a3c  mov edx, esi
    X86_AT(c, 0xe3a3cu);
    c.r[2] = c.r[6];
    // 0e3a3e  shl edx, 6
    X86_AT(c, 0xe3a3eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[2] = r; }
    // 0e3a41  add edx, eax
    X86_AT(c, 0xe3a41u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e3a43  add edx, ecx
    X86_AT(c, 0xe3a43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0e3a45  mov byte ptr [edx + 0x40e90], 0
    X86_AT(c, 0xe3a45u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x40E90u)), 0x0u);
    // 0e3a4c  inc ecx
    X86_AT(c, 0xe3a4cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e3a4d  jmp 0xe3a32
    X86_AT(c, 0xe3a4du);
    X86_POLL(c, 0xe3a32u); goto L_e3a32;
L_e3a4f:
    X86_TICK(c, 9);
    // 0e3a4f  inc esi
    X86_AT(c, 0xe3a4fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e3a50  jmp 0xe3a2b
    X86_AT(c, 0xe3a50u);
    X86_POLL(c, 0xe3a2bu); goto L_e3a2b;
L_e3a52:
    X86_TICK(c, 9);
    // 0e3a52  inc edi
    X86_AT(c, 0xe3a52u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e3a53  jmp 0xe3a24
    X86_AT(c, 0xe3a53u);
    X86_POLL(c, 0xe3a24u); goto L_e3a24;
L_e3a55:
    X86_TICK(c, 18);
    // 0e3a55  pop edi
    X86_AT(c, 0xe3a55u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e3a56  pop esi
    X86_AT(c, 0xe3a56u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e3a57  ret 
    X86_AT(c, 0xe3a57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3a20u, "ran off the end of a function");
}
void f_000e3a58(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e3a58  push ebp
    X86_AT(c, 0xe3a58u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e3a59  mov ebp, esp
    X86_AT(c, 0xe3a59u);
    c.r[5] = c.r[4];
    // 0e3a5b  push esi
    X86_AT(c, 0xe3a5bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3a5c  push edi
    X86_AT(c, 0xe3a5cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3a5d  mov edi, 0xbd578
    X86_AT(c, 0xe3a5du);
    c.r[7] = 0xBD578u;
    // 0e3a62  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe3a62u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e3a65  shl eax, 0xc
    X86_AT(c, 0xe3a65u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[0] = r; }
    // 0e3a68  lea esi, [eax + 0x4de90]
    X86_AT(c, 0xe3a68u);
    c.r[6] = (uint32_t)(c.r[0] + 0x4DE90u);
    // 0e3a6e  sub ecx, ecx
    X86_AT(c, 0xe3a6eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_e3a70:
    X86_TICK(c, 7);
    // 0e3a70  cmp ecx, 0x1000
    X86_AT(c, 0xe3a70u);
    (void)x86_sub(c, c.r[1], 0x1000u, 0, 4);
    // 0e3a76  jge 0xe3a7d
    X86_AT(c, 0xe3a76u);
    if (x86_cc(c, 13)) { goto L_e3a7d; }
    X86_TICK(c, 23);
    // 0e3a78  lodsb al, byte ptr [esi]
    X86_AT(c, 0xe3a78u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0e3a79  stosb byte ptr es:[edi], al
    X86_AT(c, 0xe3a79u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0e3a7a  inc ecx
    X86_AT(c, 0xe3a7au);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e3a7b  jmp 0xe3a70
    X86_AT(c, 0xe3a7bu);
    X86_POLL(c, 0xe3a70u); goto L_e3a70;
L_e3a7d:
    X86_TICK(c, 24);
    // 0e3a7d  pop edi
    X86_AT(c, 0xe3a7du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e3a7e  pop esi
    X86_AT(c, 0xe3a7eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e3a7f  leave 
    X86_AT(c, 0xe3a7fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3a80  ret 
    X86_AT(c, 0xe3a80u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3a58u, "ran off the end of a function");
}
void f_000e3a84(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e3a84  push ebp
    X86_AT(c, 0xe3a84u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e3a85  mov ebp, esp
    X86_AT(c, 0xe3a85u);
    c.r[5] = c.r[4];
    // 0e3a87  push ebx
    X86_AT(c, 0xe3a87u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e3a88  push esi
    X86_AT(c, 0xe3a88u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3a89  push edi
    X86_AT(c, 0xe3a89u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3a8a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe3a8au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e3a8d  and edi, edi
    X86_AT(c, 0xe3a8du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e3a8f  jge 0xe3ab4
    X86_AT(c, 0xe3a8fu);
    if (x86_cc(c, 13)) { goto L_e3ab4; }
    X86_TICK(c, 2);
    // 0e3a91  sub esi, esi
    X86_AT(c, 0xe3a91u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e3a93:
    X86_TICK(c, 7);
    // 0e3a93  cmp esi, 0x40
    X86_AT(c, 0xe3a93u);
    (void)x86_sub(c, c.r[6], 0x40u, 0, 4);
    // 0e3a96  jge 0xe3aea
    X86_AT(c, 0xe3a96u);
    if (x86_cc(c, 13)) { goto L_e3aea; }
    X86_TICK(c, 2);
    // 0e3a98  sub ebx, ebx
    X86_AT(c, 0xe3a98u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_e3a9a:
    X86_TICK(c, 7);
    // 0e3a9a  cmp ebx, 0x40
    X86_AT(c, 0xe3a9au);
    (void)x86_sub(c, c.r[3], 0x40u, 0, 4);
    // 0e3a9d  jge 0xe3ab1
    X86_AT(c, 0xe3a9du);
    if (x86_cc(c, 13)) { goto L_e3ab1; }
    X86_TICK(c, 16);
    // 0e3a9f  mov eax, esi
    X86_AT(c, 0xe3a9fu);
    c.r[0] = c.r[6];
    // 0e3aa1  shl eax, 7
    X86_AT(c, 0xe3aa1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0e3aa4  mov word ptr [eax + ebx*2 + 0x77e90], 0
    X86_AT(c, 0xe3aa4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3] * 2 + 0x77E90u)), 0x0u);
    // 0e3aae  inc ebx
    X86_AT(c, 0xe3aaeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e3aaf  jmp 0xe3a9a
    X86_AT(c, 0xe3aafu);
    X86_POLL(c, 0xe3a9au); goto L_e3a9a;
L_e3ab1:
    X86_TICK(c, 9);
    // 0e3ab1  inc esi
    X86_AT(c, 0xe3ab1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e3ab2  jmp 0xe3a93
    X86_AT(c, 0xe3ab2u);
    X86_POLL(c, 0xe3a93u); goto L_e3a93;
L_e3ab4:
    X86_TICK(c, 2);
    // 0e3ab4  sub esi, esi
    X86_AT(c, 0xe3ab4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e3ab6:
    X86_TICK(c, 7);
    // 0e3ab6  cmp esi, 0x40
    X86_AT(c, 0xe3ab6u);
    (void)x86_sub(c, c.r[6], 0x40u, 0, 4);
    // 0e3ab9  jge 0xe3aea
    X86_AT(c, 0xe3ab9u);
    if (x86_cc(c, 13)) { goto L_e3aea; }
    X86_TICK(c, 2);
    // 0e3abb  sub ebx, ebx
    X86_AT(c, 0xe3abbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_e3abd:
    X86_TICK(c, 7);
    // 0e3abd  cmp ebx, 0x40
    X86_AT(c, 0xe3abdu);
    (void)x86_sub(c, c.r[3], 0x40u, 0, 4);
    // 0e3ac0  jge 0xe3ae7
    X86_AT(c, 0xe3ac0u);
    if (x86_cc(c, 13)) { goto L_e3ae7; }
    X86_TICK(c, 36);
    // 0e3ac2  mov eax, edi
    X86_AT(c, 0xe3ac2u);
    c.r[0] = c.r[7];
    // 0e3ac4  shl eax, 0xc
    X86_AT(c, 0xe3ac4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[0] = r; }
    // 0e3ac7  mov edx, esi
    X86_AT(c, 0xe3ac7u);
    c.r[2] = c.r[6];
    // 0e3ac9  shl edx, 6
    X86_AT(c, 0xe3ac9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[2] = r; }
    // 0e3acc  add edx, eax
    X86_AT(c, 0xe3accu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e3ace  add edx, ebx
    X86_AT(c, 0xe3aceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[3], 0, 4); }
    // 0e3ad0  mov eax, esi
    X86_AT(c, 0xe3ad0u);
    c.r[0] = c.r[6];
    // 0e3ad2  shl eax, 7
    X86_AT(c, 0xe3ad2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0e3ad5  movzx edx, byte ptr [edx + 0x40e90]
    X86_AT(c, 0xe3ad5u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x40E90u)));
    // 0e3adc  mov word ptr [eax + ebx*2 + 0x77e90], dx
    X86_AT(c, 0xe3adcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3] * 2 + 0x77E90u)), (c.r[2] & 0xFFFFu));
    // 0e3ae4  inc ebx
    X86_AT(c, 0xe3ae4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e3ae5  jmp 0xe3abd
    X86_AT(c, 0xe3ae5u);
    X86_POLL(c, 0xe3abdu); goto L_e3abd;
L_e3ae7:
    X86_TICK(c, 9);
    // 0e3ae7  inc esi
    X86_AT(c, 0xe3ae7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e3ae8  jmp 0xe3ab6
    X86_AT(c, 0xe3ae8u);
    X86_POLL(c, 0xe3ab6u); goto L_e3ab6;
L_e3aea:
    X86_TICK(c, 2);
    // 0e3aea  sub esi, esi
    X86_AT(c, 0xe3aeau);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e3aec:
    X86_TICK(c, 7);
    // 0e3aec  cmp esi, 0x20
    X86_AT(c, 0xe3aecu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0e3aef  jge 0xe3b1d
    X86_AT(c, 0xe3aefu);
    if (x86_cc(c, 13)) { goto L_e3b1d; }
    X86_TICK(c, 12);
    // 0e3af1  cmp byte ptr [esi + 0xce3c8], 0
    X86_AT(c, 0xe3af1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCE3C8u))), 0x0u, 0, 1);
    // 0e3af8  je 0xe3b1a
    X86_AT(c, 0xe3af8u);
    if (x86_cc(c, 4)) { goto L_e3b1a; }
    X86_TICK(c, 19);
    // 0e3afa  mov eax, dword ptr [esi*4 + 0xce488]
    X86_AT(c, 0xe3afau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE488u)));
    // 0e3b01  shl eax, 7
    X86_AT(c, 0xe3b01u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0e3b04  mov edx, dword ptr [esi*4 + 0xce408]
    X86_AT(c, 0xe3b04u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE408u)));
    // 0e3b0b  movzx ecx, byte ptr [esi + 0xce3e8]
    X86_AT(c, 0xe3b0bu);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCE3E8u)));
    // 0e3b12  mov word ptr [eax + edx*2 + 0x77e90], cx
    X86_AT(c, 0xe3b12u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 2 + 0x77E90u)), (c.r[1] & 0xFFFFu));
L_e3b1a:
    X86_TICK(c, 9);
    // 0e3b1a  inc esi
    X86_AT(c, 0xe3b1au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e3b1b  jmp 0xe3aec
    X86_AT(c, 0xe3b1bu);
    X86_POLL(c, 0xe3aecu); goto L_e3aec;
L_e3b1d:
    X86_TICK(c, 28);
    // 0e3b1d  pop edi
    X86_AT(c, 0xe3b1du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e3b1e  pop esi
    X86_AT(c, 0xe3b1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e3b1f  pop ebx
    X86_AT(c, 0xe3b1fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e3b20  leave 
    X86_AT(c, 0xe3b20u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3b21  ret 
    X86_AT(c, 0xe3b21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3a84u, "ran off the end of a function");
}
void f_000e3b24(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e3b24  push ebp
    X86_AT(c, 0xe3b24u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e3b25  mov ebp, esp
    X86_AT(c, 0xe3b25u);
    c.r[5] = c.r[4];
    // 0e3b27  push eax
    X86_AT(c, 0xe3b27u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e3b28  push esi
    X86_AT(c, 0xe3b28u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3b29  push edi
    X86_AT(c, 0xe3b29u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3b2a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe3b2au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e3b2d  sub esi, esi
    X86_AT(c, 0xe3b2du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e3b2f:
    X86_TICK(c, 7);
    // 0e3b2f  cmp esi, 0x40
    X86_AT(c, 0xe3b2fu);
    (void)x86_sub(c, c.r[6], 0x40u, 0, 4);
    // 0e3b32  jge 0xe3b67
    X86_AT(c, 0xe3b32u);
    if (x86_cc(c, 13)) { goto L_e3b67; }
    X86_TICK(c, 2);
    // 0e3b34  sub ecx, ecx
    X86_AT(c, 0xe3b34u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_e3b36:
    X86_TICK(c, 7);
    // 0e3b36  cmp ecx, 0x40
    X86_AT(c, 0xe3b36u);
    (void)x86_sub(c, c.r[1], 0x40u, 0, 4);
    // 0e3b39  jge 0xe3b64
    X86_AT(c, 0xe3b39u);
    if (x86_cc(c, 13)) { goto L_e3b64; }
    X86_TICK(c, 40);
    // 0e3b3b  mov eax, esi
    X86_AT(c, 0xe3b3bu);
    c.r[0] = c.r[6];
    // 0e3b3d  shl eax, 7
    X86_AT(c, 0xe3b3du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0e3b40  mov edx, edi
    X86_AT(c, 0xe3b40u);
    c.r[2] = c.r[7];
    // 0e3b42  shl edx, 0xc
    X86_AT(c, 0xe3b42u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 0e3b45  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe3b45u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e3b48  mov eax, esi
    X86_AT(c, 0xe3b48u);
    c.r[0] = c.r[6];
    // 0e3b4a  shl eax, 6
    X86_AT(c, 0xe3b4au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0e3b4d  add eax, edx
    X86_AT(c, 0xe3b4du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e3b4f  add eax, ecx
    X86_AT(c, 0xe3b4fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 0e3b51  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe3b51u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e3b54  mov dl, byte ptr [edx + ecx*2 + 0x77e90]
    X86_AT(c, 0xe3b54u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 2 + 0x77E90u))));
    // 0e3b5b  mov byte ptr [eax + 0x40e90], dl
    X86_AT(c, 0xe3b5bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x40E90u)), g8(c, 2));
    // 0e3b61  inc ecx
    X86_AT(c, 0xe3b61u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e3b62  jmp 0xe3b36
    X86_AT(c, 0xe3b62u);
    X86_POLL(c, 0xe3b36u); goto L_e3b36;
L_e3b64:
    X86_TICK(c, 9);
    // 0e3b64  inc esi
    X86_AT(c, 0xe3b64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e3b65  jmp 0xe3b2f
    X86_AT(c, 0xe3b65u);
    X86_POLL(c, 0xe3b2fu); goto L_e3b2f;
L_e3b67:
    X86_TICK(c, 24);
    // 0e3b67  pop edi
    X86_AT(c, 0xe3b67u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e3b68  pop esi
    X86_AT(c, 0xe3b68u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e3b69  leave 
    X86_AT(c, 0xe3b69u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3b6a  ret 
    X86_AT(c, 0xe3b6au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3b24u, "ran off the end of a function");
}
void f_000e3b6c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e3b6c  push ebp
    X86_AT(c, 0xe3b6cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e3b6d  mov ebp, esp
    X86_AT(c, 0xe3b6du);
    c.r[5] = c.r[4];
    // 0e3b6f  push edi
    X86_AT(c, 0xe3b6fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3b70  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe3b70u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e3b73  call 0x101860
    X86_AT(c, 0xe3b73u);
    push32(c, 0xe3b78u); f_00101860(c); X86_RET(c, 0xe3b78u);
    X86_TICK(c, 75);
    // 0e3b78  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe3b78u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e3b7b  sub ecx, edi
    X86_AT(c, 0xe3b7bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e3b7d  inc ecx
    X86_AT(c, 0xe3b7du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e3b7e  cdq 
    X86_AT(c, 0xe3b7eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e3b7f  idiv ecx
    X86_AT(c, 0xe3b7fu);
    x86_idiv(c, c.r[1], 4, 0xe3b7fu);
    // 0e3b81  add edx, edi
    X86_AT(c, 0xe3b81u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[7], 0, 4); }
    // 0e3b83  xchg edx, eax
    X86_AT(c, 0xe3b83u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0e3b84  pop edi
    X86_AT(c, 0xe3b84u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e3b85  leave 
    X86_AT(c, 0xe3b85u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3b86  ret 
    X86_AT(c, 0xe3b86u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3b6cu, "ran off the end of a function");
}
void f_000e3b88(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e3b88  push ebp
    X86_AT(c, 0xe3b88u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e3b89  mov ebp, esp
    X86_AT(c, 0xe3b89u);
    c.r[5] = c.r[4];
    // 0e3b8b  sub esp, 8
    X86_AT(c, 0xe3b8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e3b8e  push 0
    X86_AT(c, 0xe3b8eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e3b90  call 0x1017b0
    X86_AT(c, 0xe3b90u);
    push32(c, 0xe3b95u); f_001017b0(c); X86_RET(c, 0xe3b95u);
    X86_TICK(c, 15);
    // 0e3b95  push edx
    X86_AT(c, 0xe3b95u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e3b96  push eax
    X86_AT(c, 0xe3b96u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e3b97  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe3b97u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e3b9a  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xe3b9au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0e3b9d  call 0x10228c
    X86_AT(c, 0xe3b9du);
    push32(c, 0xe3ba2u); f_0010228c(c); X86_RET(c, 0xe3ba2u);
    X86_TICK(c, 7);
    // 0e3ba2  call 0x102088
    X86_AT(c, 0xe3ba2u);
    push32(c, 0xe3ba7u); f_00102088(c); X86_RET(c, 0xe3ba7u);
    X86_TICK(c, 9);
    // 0e3ba7  push eax
    X86_AT(c, 0xe3ba7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e3ba8  call 0x101888
    X86_AT(c, 0xe3ba8u);
    push32(c, 0xe3badu); f_00101888(c); X86_RET(c, 0xe3badu);
    X86_TICK(c, 7);
    // 0e3bad  call 0x101860
    X86_AT(c, 0xe3badu);
    push32(c, 0xe3bb2u); f_00101860(c); X86_RET(c, 0xe3bb2u);
    X86_TICK(c, 18);
    // 0e3bb2  add esp, 8
    X86_AT(c, 0xe3bb2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e3bb5  leave 
    X86_AT(c, 0xe3bb5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e3bb6  ret 
    X86_AT(c, 0xe3bb6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3b88u, "ran off the end of a function");
}
void f_000e3bb8(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0e3bb8  push esi
    X86_AT(c, 0xe3bb8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3bb9  push edi
    X86_AT(c, 0xe3bb9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3bba  mov esi, 0x4ee90
    X86_AT(c, 0xe3bbau);
    c.r[6] = 0x4EE90u;
    // 0e3bbf  sub edi, edi
    X86_AT(c, 0xe3bbfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e3bc1:
    X86_TICK(c, 7);
    // 0e3bc1  cmp edi, 0x29000
    X86_AT(c, 0xe3bc1u);
    (void)x86_sub(c, c.r[7], 0x29000u, 0, 4);
    // 0e3bc7  jge 0xe3d23
    X86_AT(c, 0xe3bc7u);
    if (x86_cc(c, 13)) { goto L_e3d23; }
    X86_TICK(c, 7);
    // 0e3bcd  cmp edi, 0x11000
    X86_AT(c, 0xe3bcdu);
    (void)x86_sub(c, c.r[7], 0x11000u, 0, 4);
    // 0e3bd3  jl 0xe3c56
    X86_AT(c, 0xe3bd3u);
    if (x86_cc(c, 12)) { goto L_e3c56; }
    X86_TICK(c, 7);
    // 0e3bd9  cmp edi, 0x1b000
    X86_AT(c, 0xe3bd9u);
    (void)x86_sub(c, c.r[7], 0x1B000u, 0, 4);
    // 0e3bdf  jge 0xe3c56
    X86_AT(c, 0xe3bdfu);
    if (x86_cc(c, 13)) { goto L_e3c56; }
    X86_TICK(c, 13);
    // 0e3be5  movzx edx, byte ptr [esi]
    X86_AT(c, 0xe3be5u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e3be8  cmp edx, 0x30
    X86_AT(c, 0xe3be8u);
    (void)x86_sub(c, c.r[2], 0x30u, 0, 4);
    // 0e3beb  ja 0xe3c09
    X86_AT(c, 0xe3bebu);
    if (x86_cc(c, 7)) { goto L_e3c09; }
    X86_TICK(c, 7);
    // 0e3bed  cmp edx, 0x30
    X86_AT(c, 0xe3bedu);
    (void)x86_sub(c, c.r[2], 0x30u, 0, 4);
    // 0e3bf0  je 0xe3cc5
    X86_AT(c, 0xe3bf0u);
    if (x86_cc(c, 4)) { goto L_e3cc5; }
    X86_TICK(c, 7);
    // 0e3bf6  and edx, edx
    X86_AT(c, 0xe3bf6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0e3bf8  je 0xe3c33
    X86_AT(c, 0xe3bf8u);
    if (x86_cc(c, 4)) { goto L_e3c33; }
    X86_TICK(c, 7);
    // 0e3bfa  cmp edx, 0x10
    X86_AT(c, 0xe3bfau);
    (void)x86_sub(c, c.r[2], 0x10u, 0, 4);
    // 0e3bfd  je 0xe3c3a
    X86_AT(c, 0xe3bfdu);
    if (x86_cc(c, 4)) { goto L_e3c3a; }
    X86_TICK(c, 7);
    // 0e3bff  cmp edx, 0x20
    X86_AT(c, 0xe3bffu);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 0e3c02  je 0xe3c41
    X86_AT(c, 0xe3c02u);
    if (x86_cc(c, 4)) { goto L_e3c41; }
    X86_TICK(c, 7);
    // 0e3c04  jmp 0xe3d1a
    X86_AT(c, 0xe3c04u);
    goto L_e3d1a;
L_e3c09:
    X86_TICK(c, 7);
    // 0e3c09  cmp edx, 0x40
    X86_AT(c, 0xe3c09u);
    (void)x86_sub(c, c.r[2], 0x40u, 0, 4);
    // 0e3c0c  je 0xe3cd4
    X86_AT(c, 0xe3c0cu);
    if (x86_cc(c, 4)) { goto L_e3cd4; }
    X86_TICK(c, 7);
    // 0e3c12  cmp edx, 0x80
    X86_AT(c, 0xe3c12u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0e3c18  je 0xe3cd0
    X86_AT(c, 0xe3c18u);
    if (x86_cc(c, 4)) { goto L_e3cd0; }
    X86_TICK(c, 7);
    // 0e3c1e  cmp edx, 0xc0
    X86_AT(c, 0xe3c1eu);
    (void)x86_sub(c, c.r[2], 0xC0u, 0, 4);
    // 0e3c24  je 0xe3c48
    X86_AT(c, 0xe3c24u);
    if (x86_cc(c, 4)) { goto L_e3c48; }
    X86_TICK(c, 7);
    // 0e3c26  cmp edx, 0xe0
    X86_AT(c, 0xe3c26u);
    (void)x86_sub(c, c.r[2], 0xE0u, 0, 4);
    // 0e3c2c  je 0xe3c4f
    X86_AT(c, 0xe3c2cu);
    if (x86_cc(c, 4)) { goto L_e3c4f; }
    X86_TICK(c, 7);
    // 0e3c2e  jmp 0xe3d1a
    X86_AT(c, 0xe3c2eu);
    goto L_e3d1a;
L_e3c33:
    X86_TICK(c, 9);
    // 0e3c33  sub ecx, ecx
    X86_AT(c, 0xe3c33u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0e3c35  jmp 0xe3d1a
    X86_AT(c, 0xe3c35u);
    goto L_e3d1a;
L_e3c3a:
    X86_TICK(c, 9);
    // 0e3c3a  mov cl, 0xf
    X86_AT(c, 0xe3c3au);
    s8(c, 1, 0xFu);
    // 0e3c3c  jmp 0xe3d1a
    X86_AT(c, 0xe3c3cu);
    goto L_e3d1a;
L_e3c41:
    X86_TICK(c, 9);
    // 0e3c41  mov cl, 0xe
    X86_AT(c, 0xe3c41u);
    s8(c, 1, 0xEu);
    // 0e3c43  jmp 0xe3d1a
    X86_AT(c, 0xe3c43u);
    goto L_e3d1a;
L_e3c48:
    X86_TICK(c, 9);
    // 0e3c48  mov cl, 1
    X86_AT(c, 0xe3c48u);
    s8(c, 1, 0x1u);
    // 0e3c4a  jmp 0xe3d1a
    X86_AT(c, 0xe3c4au);
    goto L_e3d1a;
L_e3c4f:
    X86_TICK(c, 9);
    // 0e3c4f  mov cl, 3
    X86_AT(c, 0xe3c4fu);
    s8(c, 1, 0x3u);
    // 0e3c51  jmp 0xe3d1a
    X86_AT(c, 0xe3c51u);
    goto L_e3d1a;
L_e3c56:
    X86_TICK(c, 13);
    // 0e3c56  movzx edx, byte ptr [esi]
    X86_AT(c, 0xe3c56u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e3c59  cmp edx, 0x33
    X86_AT(c, 0xe3c59u);
    (void)x86_sub(c, c.r[2], 0x33u, 0, 4);
    // 0e3c5c  je 0xe3cec
    X86_AT(c, 0xe3c5cu);
    if (x86_cc(c, 4)) { goto L_e3cec; }
    X86_TICK(c, 7);
    // 0e3c62  cmp edx, 0x2a
    X86_AT(c, 0xe3c62u);
    (void)x86_sub(c, c.r[2], 0x2Au, 0, 4);
    // 0e3c65  je 0xe3ce8
    X86_AT(c, 0xe3c65u);
    if (x86_cc(c, 4)) { goto L_e3ce8; }
    X86_TICK(c, 7);
    // 0e3c6b  cmp edx, 0x29
    X86_AT(c, 0xe3c6bu);
    (void)x86_sub(c, c.r[2], 0x29u, 0, 4);
    // 0e3c6e  je 0xe3ce8
    X86_AT(c, 0xe3c6eu);
    if (x86_cc(c, 4)) { goto L_e3ce8; }
    X86_TICK(c, 7);
    // 0e3c74  cmp edx, 0xf
    X86_AT(c, 0xe3c74u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0e3c77  ja 0xe3cf0
    X86_AT(c, 0xe3c77u);
    if (x86_cc(c, 7)) { goto L_e3cf0; }
    X86_TICK(c, 7);
    // 0e3c7d  jmp dword ptr cs:[edx*4 + 0xe3c85]
    X86_AT(c, 0xe3c7du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE3C85u)));
      switch (t) {
      case 0xe3cc5u: goto L_e3cc5;
      case 0xe3cccu: goto L_e3ccc;
      case 0xe3cd0u: goto L_e3cd0;
      case 0xe3cd4u: goto L_e3cd4;
      case 0xe3cd8u: goto L_e3cd8;
      case 0xe3cdcu: goto L_e3cdc;
      case 0xe3ce0u: goto L_e3ce0;
      case 0xe3ce4u: goto L_e3ce4;
      case 0xe3ce8u: goto L_e3ce8;
      case 0xe3cf0u: goto L_e3cf0;
      default: x86_jump(c, t); return; } }
L_e3cc5:
    X86_TICK(c, 9);
    // 0e3cc5  mov cl, 0xa
    X86_AT(c, 0xe3cc5u);
    s8(c, 1, 0xAu);
    // 0e3cc7  jmp 0xe3d1a
    X86_AT(c, 0xe3cc7u);
    goto L_e3d1a;
L_e3ccc:
    X86_TICK(c, 9);
    // 0e3ccc  mov cl, 0x23
    X86_AT(c, 0xe3cccu);
    s8(c, 1, 0x23u);
    // 0e3cce  jmp 0xe3d1a
    X86_AT(c, 0xe3cceu);
    goto L_e3d1a;
L_e3cd0:
    X86_TICK(c, 9);
    // 0e3cd0  mov cl, 2
    X86_AT(c, 0xe3cd0u);
    s8(c, 1, 0x2u);
    // 0e3cd2  jmp 0xe3d1a
    X86_AT(c, 0xe3cd2u);
    goto L_e3d1a;
L_e3cd4:
    X86_TICK(c, 9);
    // 0e3cd4  mov cl, 4
    X86_AT(c, 0xe3cd4u);
    s8(c, 1, 0x4u);
    // 0e3cd6  jmp 0xe3d1a
    X86_AT(c, 0xe3cd6u);
    goto L_e3d1a;
L_e3cd8:
    X86_TICK(c, 9);
    // 0e3cd8  mov cl, 5
    X86_AT(c, 0xe3cd8u);
    s8(c, 1, 0x5u);
    // 0e3cda  jmp 0xe3d1a
    X86_AT(c, 0xe3cdau);
    goto L_e3d1a;
L_e3cdc:
    X86_TICK(c, 9);
    // 0e3cdc  mov cl, 0x22
    X86_AT(c, 0xe3cdcu);
    s8(c, 1, 0x22u);
    // 0e3cde  jmp 0xe3d1a
    X86_AT(c, 0xe3cdeu);
    goto L_e3d1a;
L_e3ce0:
    X86_TICK(c, 9);
    // 0e3ce0  mov cl, 9
    X86_AT(c, 0xe3ce0u);
    s8(c, 1, 0x9u);
    // 0e3ce2  jmp 0xe3d1a
    X86_AT(c, 0xe3ce2u);
    goto L_e3d1a;
L_e3ce4:
    X86_TICK(c, 9);
    // 0e3ce4  mov cl, 0x24
    X86_AT(c, 0xe3ce4u);
    s8(c, 1, 0x24u);
    // 0e3ce6  jmp 0xe3d1a
    X86_AT(c, 0xe3ce6u);
    goto L_e3d1a;
L_e3ce8:
    X86_TICK(c, 9);
    // 0e3ce8  mov cl, 0x25
    X86_AT(c, 0xe3ce8u);
    s8(c, 1, 0x25u);
    // 0e3cea  jmp 0xe3d1a
    X86_AT(c, 0xe3ceau);
    goto L_e3d1a;
L_e3cec:
    X86_TICK(c, 9);
    // 0e3cec  mov cl, 0xc
    X86_AT(c, 0xe3cecu);
    s8(c, 1, 0xCu);
    // 0e3cee  jmp 0xe3d1a
    X86_AT(c, 0xe3ceeu);
    goto L_e3d1a;
L_e3cf0:
    X86_TICK(c, 11);
    // 0e3cf0  mov al, byte ptr [esi]
    X86_AT(c, 0xe3cf0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e3cf2  cmp al, 0x10
    X86_AT(c, 0xe3cf2u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 0e3cf4  jb 0xe3d00
    X86_AT(c, 0xe3cf4u);
    if (x86_cc(c, 2)) { goto L_e3d00; }
    X86_TICK(c, 7);
    // 0e3cf6  cmp al, 0x1f
    X86_AT(c, 0xe3cf6u);
    (void)x86_sub(c, g8(c, 0), 0x1Fu, 0, 1);
    // 0e3cf8  ja 0xe3d00
    X86_AT(c, 0xe3cf8u);
    if (x86_cc(c, 7)) { goto L_e3d00; }
    X86_TICK(c, 12);
    // 0e3cfa  xchg ecx, eax
    X86_AT(c, 0xe3cfau);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0e3cfb  add cl, 0x16
    X86_AT(c, 0xe3cfbu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x16u, 0, 1)); }
    // 0e3cfe  jmp 0xe3d1a
    X86_AT(c, 0xe3cfeu);
    goto L_e3d1a;
L_e3d00:
    X86_TICK(c, 11);
    // 0e3d00  mov al, byte ptr [esi]
    X86_AT(c, 0xe3d00u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e3d02  cmp al, 0x20
    X86_AT(c, 0xe3d02u);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0e3d04  jb 0xe3d10
    X86_AT(c, 0xe3d04u);
    if (x86_cc(c, 2)) { goto L_e3d10; }
    X86_TICK(c, 7);
    // 0e3d06  cmp al, 0x29
    X86_AT(c, 0xe3d06u);
    (void)x86_sub(c, g8(c, 0), 0x29u, 0, 1);
    // 0e3d08  ja 0xe3d10
    X86_AT(c, 0xe3d08u);
    if (x86_cc(c, 7)) { goto L_e3d10; }
    X86_TICK(c, 12);
    // 0e3d0a  xchg ecx, eax
    X86_AT(c, 0xe3d0au);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0e3d0b  add cl, 0x17
    X86_AT(c, 0xe3d0bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x17u, 0, 1)); }
    // 0e3d0e  jmp 0xe3d1a
    X86_AT(c, 0xe3d0eu);
    goto L_e3d1a;
L_e3d10:
    X86_TICK(c, 11);
    // 0e3d10  mov al, byte ptr [esi]
    X86_AT(c, 0xe3d10u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e3d12  cmp al, 0x63
    X86_AT(c, 0xe3d12u);
    (void)x86_sub(c, g8(c, 0), 0x63u, 0, 1);
    // 0e3d14  jbe 0xe3d1a
    X86_AT(c, 0xe3d14u);
    if (x86_cc(c, 6)) { goto L_e3d1a; }
    X86_TICK(c, 5);
    // 0e3d16  xchg ecx, eax
    X86_AT(c, 0xe3d16u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0e3d17  sub cl, 0x52
    X86_AT(c, 0xe3d17u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, 0x52u, 0, 1)); }
L_e3d1a:
    X86_TICK(c, 13);
    // 0e3d1a  mov byte ptr [esi], cl
    X86_AT(c, 0xe3d1au);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 1));
    // 0e3d1c  inc esi
    X86_AT(c, 0xe3d1cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e3d1d  inc edi
    X86_AT(c, 0xe3d1du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e3d1e  jmp 0xe3bc1
    X86_AT(c, 0xe3d1eu);
    X86_POLL(c, 0xe3bc1u); goto L_e3bc1;
L_e3d23:
    X86_TICK(c, 18);
    // 0e3d23  pop edi
    X86_AT(c, 0xe3d23u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e3d24  pop esi
    X86_AT(c, 0xe3d24u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e3d25  ret 
    X86_AT(c, 0xe3d25u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3bb8u, "ran off the end of a function");
}
void f_000e3d1a(X86Cpu& c) {
    goto L_e3d1a;
L_e3bc1:
    X86_TICK(c, 7);
    // 0e3bc1  cmp edi, 0x29000
    X86_AT(c, 0xe3bc1u);
    (void)x86_sub(c, c.r[7], 0x29000u, 0, 4);
    // 0e3bc7  jge 0xe3d23
    X86_AT(c, 0xe3bc7u);
    if (x86_cc(c, 13)) { goto L_e3d23; }
    X86_TICK(c, 7);
    // 0e3bcd  cmp edi, 0x11000
    X86_AT(c, 0xe3bcdu);
    (void)x86_sub(c, c.r[7], 0x11000u, 0, 4);
    // 0e3bd3  jl 0xe3c56
    X86_AT(c, 0xe3bd3u);
    if (x86_cc(c, 12)) { goto L_e3c56; }
    X86_TICK(c, 7);
    // 0e3bd9  cmp edi, 0x1b000
    X86_AT(c, 0xe3bd9u);
    (void)x86_sub(c, c.r[7], 0x1B000u, 0, 4);
    // 0e3bdf  jge 0xe3c56
    X86_AT(c, 0xe3bdfu);
    if (x86_cc(c, 13)) { goto L_e3c56; }
    X86_TICK(c, 13);
    // 0e3be5  movzx edx, byte ptr [esi]
    X86_AT(c, 0xe3be5u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e3be8  cmp edx, 0x30
    X86_AT(c, 0xe3be8u);
    (void)x86_sub(c, c.r[2], 0x30u, 0, 4);
    // 0e3beb  ja 0xe3c09
    X86_AT(c, 0xe3bebu);
    if (x86_cc(c, 7)) { goto L_e3c09; }
    X86_TICK(c, 7);
    // 0e3bed  cmp edx, 0x30
    X86_AT(c, 0xe3bedu);
    (void)x86_sub(c, c.r[2], 0x30u, 0, 4);
    // 0e3bf0  je 0xe3cc5
    X86_AT(c, 0xe3bf0u);
    if (x86_cc(c, 4)) { goto L_e3cc5; }
    X86_TICK(c, 7);
    // 0e3bf6  and edx, edx
    X86_AT(c, 0xe3bf6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0e3bf8  je 0xe3c33
    X86_AT(c, 0xe3bf8u);
    if (x86_cc(c, 4)) { goto L_e3c33; }
    X86_TICK(c, 7);
    // 0e3bfa  cmp edx, 0x10
    X86_AT(c, 0xe3bfau);
    (void)x86_sub(c, c.r[2], 0x10u, 0, 4);
    // 0e3bfd  je 0xe3c3a
    X86_AT(c, 0xe3bfdu);
    if (x86_cc(c, 4)) { goto L_e3c3a; }
    X86_TICK(c, 7);
    // 0e3bff  cmp edx, 0x20
    X86_AT(c, 0xe3bffu);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 0e3c02  je 0xe3c41
    X86_AT(c, 0xe3c02u);
    if (x86_cc(c, 4)) { goto L_e3c41; }
    X86_TICK(c, 7);
    // 0e3c04  jmp 0xe3d1a
    X86_AT(c, 0xe3c04u);
    goto L_e3d1a;
L_e3c09:
    X86_TICK(c, 7);
    // 0e3c09  cmp edx, 0x40
    X86_AT(c, 0xe3c09u);
    (void)x86_sub(c, c.r[2], 0x40u, 0, 4);
    // 0e3c0c  je 0xe3cd4
    X86_AT(c, 0xe3c0cu);
    if (x86_cc(c, 4)) { goto L_e3cd4; }
    X86_TICK(c, 7);
    // 0e3c12  cmp edx, 0x80
    X86_AT(c, 0xe3c12u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0e3c18  je 0xe3cd0
    X86_AT(c, 0xe3c18u);
    if (x86_cc(c, 4)) { goto L_e3cd0; }
    X86_TICK(c, 7);
    // 0e3c1e  cmp edx, 0xc0
    X86_AT(c, 0xe3c1eu);
    (void)x86_sub(c, c.r[2], 0xC0u, 0, 4);
    // 0e3c24  je 0xe3c48
    X86_AT(c, 0xe3c24u);
    if (x86_cc(c, 4)) { goto L_e3c48; }
    X86_TICK(c, 7);
    // 0e3c26  cmp edx, 0xe0
    X86_AT(c, 0xe3c26u);
    (void)x86_sub(c, c.r[2], 0xE0u, 0, 4);
    // 0e3c2c  je 0xe3c4f
    X86_AT(c, 0xe3c2cu);
    if (x86_cc(c, 4)) { goto L_e3c4f; }
    X86_TICK(c, 7);
    // 0e3c2e  jmp 0xe3d1a
    X86_AT(c, 0xe3c2eu);
    goto L_e3d1a;
L_e3c33:
    X86_TICK(c, 9);
    // 0e3c33  sub ecx, ecx
    X86_AT(c, 0xe3c33u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0e3c35  jmp 0xe3d1a
    X86_AT(c, 0xe3c35u);
    goto L_e3d1a;
L_e3c3a:
    X86_TICK(c, 9);
    // 0e3c3a  mov cl, 0xf
    X86_AT(c, 0xe3c3au);
    s8(c, 1, 0xFu);
    // 0e3c3c  jmp 0xe3d1a
    X86_AT(c, 0xe3c3cu);
    goto L_e3d1a;
L_e3c41:
    X86_TICK(c, 9);
    // 0e3c41  mov cl, 0xe
    X86_AT(c, 0xe3c41u);
    s8(c, 1, 0xEu);
    // 0e3c43  jmp 0xe3d1a
    X86_AT(c, 0xe3c43u);
    goto L_e3d1a;
L_e3c48:
    X86_TICK(c, 9);
    // 0e3c48  mov cl, 1
    X86_AT(c, 0xe3c48u);
    s8(c, 1, 0x1u);
    // 0e3c4a  jmp 0xe3d1a
    X86_AT(c, 0xe3c4au);
    goto L_e3d1a;
L_e3c4f:
    X86_TICK(c, 9);
    // 0e3c4f  mov cl, 3
    X86_AT(c, 0xe3c4fu);
    s8(c, 1, 0x3u);
    // 0e3c51  jmp 0xe3d1a
    X86_AT(c, 0xe3c51u);
    goto L_e3d1a;
L_e3c56:
    X86_TICK(c, 13);
    // 0e3c56  movzx edx, byte ptr [esi]
    X86_AT(c, 0xe3c56u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e3c59  cmp edx, 0x33
    X86_AT(c, 0xe3c59u);
    (void)x86_sub(c, c.r[2], 0x33u, 0, 4);
    // 0e3c5c  je 0xe3cec
    X86_AT(c, 0xe3c5cu);
    if (x86_cc(c, 4)) { goto L_e3cec; }
    X86_TICK(c, 7);
    // 0e3c62  cmp edx, 0x2a
    X86_AT(c, 0xe3c62u);
    (void)x86_sub(c, c.r[2], 0x2Au, 0, 4);
    // 0e3c65  je 0xe3ce8
    X86_AT(c, 0xe3c65u);
    if (x86_cc(c, 4)) { goto L_e3ce8; }
    X86_TICK(c, 7);
    // 0e3c6b  cmp edx, 0x29
    X86_AT(c, 0xe3c6bu);
    (void)x86_sub(c, c.r[2], 0x29u, 0, 4);
    // 0e3c6e  je 0xe3ce8
    X86_AT(c, 0xe3c6eu);
    if (x86_cc(c, 4)) { goto L_e3ce8; }
    X86_TICK(c, 7);
    // 0e3c74  cmp edx, 0xf
    X86_AT(c, 0xe3c74u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0e3c77  ja 0xe3cf0
    X86_AT(c, 0xe3c77u);
    if (x86_cc(c, 7)) { goto L_e3cf0; }
    X86_TICK(c, 7);
    // 0e3c7d  jmp dword ptr cs:[edx*4 + 0xe3c85]
    X86_AT(c, 0xe3c7du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE3C85u)));
      switch (t) {
      case 0xe3cc5u: goto L_e3cc5;
      case 0xe3cccu: goto L_e3ccc;
      case 0xe3cd0u: goto L_e3cd0;
      case 0xe3cd4u: goto L_e3cd4;
      case 0xe3cd8u: goto L_e3cd8;
      case 0xe3cdcu: goto L_e3cdc;
      case 0xe3ce0u: goto L_e3ce0;
      case 0xe3ce4u: goto L_e3ce4;
      case 0xe3ce8u: goto L_e3ce8;
      case 0xe3cf0u: goto L_e3cf0;
      default: x86_jump(c, t); return; } }
L_e3cc5:
    X86_TICK(c, 9);
    // 0e3cc5  mov cl, 0xa
    X86_AT(c, 0xe3cc5u);
    s8(c, 1, 0xAu);
    // 0e3cc7  jmp 0xe3d1a
    X86_AT(c, 0xe3cc7u);
    goto L_e3d1a;
L_e3ccc:
    X86_TICK(c, 9);
    // 0e3ccc  mov cl, 0x23
    X86_AT(c, 0xe3cccu);
    s8(c, 1, 0x23u);
    // 0e3cce  jmp 0xe3d1a
    X86_AT(c, 0xe3cceu);
    goto L_e3d1a;
L_e3cd0:
    X86_TICK(c, 9);
    // 0e3cd0  mov cl, 2
    X86_AT(c, 0xe3cd0u);
    s8(c, 1, 0x2u);
    // 0e3cd2  jmp 0xe3d1a
    X86_AT(c, 0xe3cd2u);
    goto L_e3d1a;
L_e3cd4:
    X86_TICK(c, 9);
    // 0e3cd4  mov cl, 4
    X86_AT(c, 0xe3cd4u);
    s8(c, 1, 0x4u);
    // 0e3cd6  jmp 0xe3d1a
    X86_AT(c, 0xe3cd6u);
    goto L_e3d1a;
L_e3cd8:
    X86_TICK(c, 9);
    // 0e3cd8  mov cl, 5
    X86_AT(c, 0xe3cd8u);
    s8(c, 1, 0x5u);
    // 0e3cda  jmp 0xe3d1a
    X86_AT(c, 0xe3cdau);
    goto L_e3d1a;
L_e3cdc:
    X86_TICK(c, 9);
    // 0e3cdc  mov cl, 0x22
    X86_AT(c, 0xe3cdcu);
    s8(c, 1, 0x22u);
    // 0e3cde  jmp 0xe3d1a
    X86_AT(c, 0xe3cdeu);
    goto L_e3d1a;
L_e3ce0:
    X86_TICK(c, 9);
    // 0e3ce0  mov cl, 9
    X86_AT(c, 0xe3ce0u);
    s8(c, 1, 0x9u);
    // 0e3ce2  jmp 0xe3d1a
    X86_AT(c, 0xe3ce2u);
    goto L_e3d1a;
L_e3ce4:
    X86_TICK(c, 9);
    // 0e3ce4  mov cl, 0x24
    X86_AT(c, 0xe3ce4u);
    s8(c, 1, 0x24u);
    // 0e3ce6  jmp 0xe3d1a
    X86_AT(c, 0xe3ce6u);
    goto L_e3d1a;
L_e3ce8:
    X86_TICK(c, 9);
    // 0e3ce8  mov cl, 0x25
    X86_AT(c, 0xe3ce8u);
    s8(c, 1, 0x25u);
    // 0e3cea  jmp 0xe3d1a
    X86_AT(c, 0xe3ceau);
    goto L_e3d1a;
L_e3cec:
    X86_TICK(c, 9);
    // 0e3cec  mov cl, 0xc
    X86_AT(c, 0xe3cecu);
    s8(c, 1, 0xCu);
    // 0e3cee  jmp 0xe3d1a
    X86_AT(c, 0xe3ceeu);
    goto L_e3d1a;
L_e3cf0:
    X86_TICK(c, 11);
    // 0e3cf0  mov al, byte ptr [esi]
    X86_AT(c, 0xe3cf0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e3cf2  cmp al, 0x10
    X86_AT(c, 0xe3cf2u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 0e3cf4  jb 0xe3d00
    X86_AT(c, 0xe3cf4u);
    if (x86_cc(c, 2)) { goto L_e3d00; }
    X86_TICK(c, 7);
    // 0e3cf6  cmp al, 0x1f
    X86_AT(c, 0xe3cf6u);
    (void)x86_sub(c, g8(c, 0), 0x1Fu, 0, 1);
    // 0e3cf8  ja 0xe3d00
    X86_AT(c, 0xe3cf8u);
    if (x86_cc(c, 7)) { goto L_e3d00; }
    X86_TICK(c, 12);
    // 0e3cfa  xchg ecx, eax
    X86_AT(c, 0xe3cfau);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0e3cfb  add cl, 0x16
    X86_AT(c, 0xe3cfbu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x16u, 0, 1)); }
    // 0e3cfe  jmp 0xe3d1a
    X86_AT(c, 0xe3cfeu);
    goto L_e3d1a;
L_e3d00:
    X86_TICK(c, 11);
    // 0e3d00  mov al, byte ptr [esi]
    X86_AT(c, 0xe3d00u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e3d02  cmp al, 0x20
    X86_AT(c, 0xe3d02u);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0e3d04  jb 0xe3d10
    X86_AT(c, 0xe3d04u);
    if (x86_cc(c, 2)) { goto L_e3d10; }
    X86_TICK(c, 7);
    // 0e3d06  cmp al, 0x29
    X86_AT(c, 0xe3d06u);
    (void)x86_sub(c, g8(c, 0), 0x29u, 0, 1);
    // 0e3d08  ja 0xe3d10
    X86_AT(c, 0xe3d08u);
    if (x86_cc(c, 7)) { goto L_e3d10; }
    X86_TICK(c, 12);
    // 0e3d0a  xchg ecx, eax
    X86_AT(c, 0xe3d0au);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0e3d0b  add cl, 0x17
    X86_AT(c, 0xe3d0bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x17u, 0, 1)); }
    // 0e3d0e  jmp 0xe3d1a
    X86_AT(c, 0xe3d0eu);
    goto L_e3d1a;
L_e3d10:
    X86_TICK(c, 11);
    // 0e3d10  mov al, byte ptr [esi]
    X86_AT(c, 0xe3d10u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e3d12  cmp al, 0x63
    X86_AT(c, 0xe3d12u);
    (void)x86_sub(c, g8(c, 0), 0x63u, 0, 1);
    // 0e3d14  jbe 0xe3d1a
    X86_AT(c, 0xe3d14u);
    if (x86_cc(c, 6)) { goto L_e3d1a; }
    X86_TICK(c, 5);
    // 0e3d16  xchg ecx, eax
    X86_AT(c, 0xe3d16u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0e3d17  sub cl, 0x52
    X86_AT(c, 0xe3d17u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, 0x52u, 0, 1)); }
L_e3d1a:
    X86_TICK(c, 13);
    // 0e3d1a  mov byte ptr [esi], cl
    X86_AT(c, 0xe3d1au);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 1));
    // 0e3d1c  inc esi
    X86_AT(c, 0xe3d1cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e3d1d  inc edi
    X86_AT(c, 0xe3d1du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e3d1e  jmp 0xe3bc1
    X86_AT(c, 0xe3d1eu);
    X86_POLL(c, 0xe3bc1u); goto L_e3bc1;
L_e3d23:
    X86_TICK(c, 18);
    // 0e3d23  pop edi
    X86_AT(c, 0xe3d23u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e3d24  pop esi
    X86_AT(c, 0xe3d24u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e3d25  ret 
    X86_AT(c, 0xe3d25u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3d1au, "ran off the end of a function");
}
void f_000e3d28(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e3d28  push 7
    X86_AT(c, 0xe3d28u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3d2a  call 0xe693c
    X86_AT(c, 0xe3d2au);
    push32(c, 0xe3d2fu); f_000e693c(c); X86_RET(c, 0xe3d2fu);
    X86_TICK(c, 14);
    // 0e3d2f  add esp, 4
    X86_AT(c, 0xe3d2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e3d32  cmp dword ptr [0xcde44], 0
    X86_AT(c, 0xe3d32u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x0u, 0, 4);
    // 0e3d39  jne 0xe3d56
    X86_AT(c, 0xe3d39u);
    if (x86_cc(c, 5)) { goto L_e3d56; }
    X86_TICK(c, 11);
    // 0e3d3b  push 0x1f9c
    X86_AT(c, 0xe3d3bu);
    { uint32_t v = 0x1F9Cu; push32(c, v); }
    // 0e3d40  push 7
    X86_AT(c, 0xe3d40u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3d42  call 0xe5654
    X86_AT(c, 0xe3d42u);
    push32(c, 0xe3d47u); f_000e5654(c); X86_RET(c, 0xe3d47u);
    X86_TICK(c, 9);
    // 0e3d47  push 7
    X86_AT(c, 0xe3d47u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3d49  call 0xe6c68
    X86_AT(c, 0xe3d49u);
    push32(c, 0xe3d4eu); f_000e6c68(c); X86_RET(c, 0xe3d4eu);
    X86_TICK(c, 9);
    // 0e3d4e  add esp, 0xc
    X86_AT(c, 0xe3d4eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e3d51  jmp 0xe3fee
    X86_AT(c, 0xe3d51u);
    goto L_e3fee;
L_e3d56:
    X86_TICK(c, 11);
    // 0e3d56  push 0x1fc0
    X86_AT(c, 0xe3d56u);
    { uint32_t v = 0x1FC0u; push32(c, v); }
    // 0e3d5b  push 7
    X86_AT(c, 0xe3d5bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3d5d  call 0xe6cb0
    X86_AT(c, 0xe3d5du);
    push32(c, 0xe3d62u); f_000e6cb0(c); X86_RET(c, 0xe3d62u);
    X86_TICK(c, 29);
    // 0e3d62  push 2
    X86_AT(c, 0xe3d62u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3d64  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe3d64u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e3d69  lea edx, [eax + eax*4]
    X86_AT(c, 0xe3d69u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e3d6c  lea edx, [eax + edx*2]
    X86_AT(c, 0xe3d6cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e3d6f  shl edx, 5
    X86_AT(c, 0xe3d6fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e3d72  sub edx, eax
    X86_AT(c, 0xe3d72u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e3d74  push dword ptr [edx + 0xcdf8f]
    X86_AT(c, 0xe3d74u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu))); push32(c, v); }
    // 0e3d7a  push 7
    X86_AT(c, 0xe3d7au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3d7c  call 0xe5630
    X86_AT(c, 0xe3d7cu);
    push32(c, 0xe3d81u); f_000e5630(c); X86_RET(c, 0xe3d81u);
    X86_TICK(c, 9);
    // 0e3d81  push 7
    X86_AT(c, 0xe3d81u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3d83  call 0xe6c68
    X86_AT(c, 0xe3d83u);
    push32(c, 0xe3d88u); f_000e6c68(c); X86_RET(c, 0xe3d88u);
    X86_TICK(c, 11);
    // 0e3d88  push 0x1fcc
    X86_AT(c, 0xe3d88u);
    { uint32_t v = 0x1FCCu; push32(c, v); }
    // 0e3d8d  push 7
    X86_AT(c, 0xe3d8du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3d8f  call 0xe6cb0
    X86_AT(c, 0xe3d8fu);
    push32(c, 0xe3d94u); f_000e6cb0(c); X86_RET(c, 0xe3d94u);
    X86_TICK(c, 29);
    // 0e3d94  push 2
    X86_AT(c, 0xe3d94u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3d96  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe3d96u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e3d9b  lea edx, [eax + eax*4]
    X86_AT(c, 0xe3d9bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e3d9e  lea edx, [eax + edx*2]
    X86_AT(c, 0xe3d9eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e3da1  shl edx, 5
    X86_AT(c, 0xe3da1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e3da4  sub edx, eax
    X86_AT(c, 0xe3da4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e3da6  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xe3da6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0e3dac  push 7
    X86_AT(c, 0xe3dacu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3dae  call 0xe5630
    X86_AT(c, 0xe3daeu);
    push32(c, 0xe3db3u); f_000e5630(c); X86_RET(c, 0xe3db3u);
    X86_TICK(c, 9);
    // 0e3db3  push 7
    X86_AT(c, 0xe3db3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3db5  call 0xe6c68
    X86_AT(c, 0xe3db5u);
    push32(c, 0xe3dbau); f_000e6c68(c); X86_RET(c, 0xe3dbau);
    X86_TICK(c, 11);
    // 0e3dba  push 0x1fd4
    X86_AT(c, 0xe3dbau);
    { uint32_t v = 0x1FD4u; push32(c, v); }
    // 0e3dbf  push 7
    X86_AT(c, 0xe3dbfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3dc1  call 0xe6cb0
    X86_AT(c, 0xe3dc1u);
    push32(c, 0xe3dc6u); f_000e6cb0(c); X86_RET(c, 0xe3dc6u);
    X86_TICK(c, 26);
    // 0e3dc6  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe3dc6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e3dcb  lea edx, [eax + eax*4]
    X86_AT(c, 0xe3dcbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e3dce  lea edx, [eax + edx*2]
    X86_AT(c, 0xe3dceu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e3dd1  shl edx, 5
    X86_AT(c, 0xe3dd1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e3dd4  sub edx, eax
    X86_AT(c, 0xe3dd4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e3dd6  add esp, 0x38
    X86_AT(c, 0xe3dd6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0e3dd9  mov edx, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xe3dd9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0e3ddf  cmp edx, 5
    X86_AT(c, 0xe3ddfu);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0e3de2  ja 0xe3e36
    X86_AT(c, 0xe3de2u);
    if (x86_cc(c, 7)) { goto L_e3e36; }
    X86_TICK(c, 7);
    // 0e3de4  jmp dword ptr cs:[edx*4 + 0xe3dec]
    X86_AT(c, 0xe3de4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE3DECu)));
      switch (t) {
      case 0xe3e04u: goto L_e3e04;
      case 0xe3e0bu: goto L_e3e0b;
      case 0xe3e12u: goto L_e3e12;
      case 0xe3e19u: goto L_e3e19;
      case 0xe3e20u: goto L_e3e20;
      case 0xe3e27u: goto L_e3e27;
      default: x86_jump(c, t); return; } }
L_e3e04:
    X86_TICK(c, 9);
    // 0e3e04  push 0x1fe0
    X86_AT(c, 0xe3e04u);
    { uint32_t v = 0x1FE0u; push32(c, v); }
    // 0e3e09  jmp 0xe3e2c
    X86_AT(c, 0xe3e09u);
    goto L_e3e2c;
L_e3e0b:
    X86_TICK(c, 9);
    // 0e3e0b  push 0x1fe8
    X86_AT(c, 0xe3e0bu);
    { uint32_t v = 0x1FE8u; push32(c, v); }
    // 0e3e10  jmp 0xe3e2c
    X86_AT(c, 0xe3e10u);
    goto L_e3e2c;
L_e3e12:
    X86_TICK(c, 9);
    // 0e3e12  push 0x1ff0
    X86_AT(c, 0xe3e12u);
    { uint32_t v = 0x1FF0u; push32(c, v); }
    // 0e3e17  jmp 0xe3e2c
    X86_AT(c, 0xe3e17u);
    goto L_e3e2c;
L_e3e19:
    X86_TICK(c, 9);
    // 0e3e19  push 0x1ff8
    X86_AT(c, 0xe3e19u);
    { uint32_t v = 0x1FF8u; push32(c, v); }
    // 0e3e1e  jmp 0xe3e2c
    X86_AT(c, 0xe3e1eu);
    goto L_e3e2c;
L_e3e20:
    X86_TICK(c, 9);
    // 0e3e20  push 0x2000
    X86_AT(c, 0xe3e20u);
    { uint32_t v = 0x2000u; push32(c, v); }
    // 0e3e25  jmp 0xe3e2c
    X86_AT(c, 0xe3e25u);
    goto L_e3e2c;
L_e3e27:
    X86_TICK(c, 2);
    // 0e3e27  push 0x2008
    X86_AT(c, 0xe3e27u);
    { uint32_t v = 0x2008u; push32(c, v); }
L_e3e2c:
    X86_TICK(c, 9);
    // 0e3e2c  push 7
    X86_AT(c, 0xe3e2cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3e2e  call 0xe6cb0
    X86_AT(c, 0xe3e2eu);
    push32(c, 0xe3e33u); f_000e6cb0(c); X86_RET(c, 0xe3e33u);
    X86_TICK(c, 2);
    // 0e3e33  add esp, 8
    X86_AT(c, 0xe3e33u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e3e36:
    X86_TICK(c, 9);
    // 0e3e36  push 7
    X86_AT(c, 0xe3e36u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3e38  call 0xe6c68
    X86_AT(c, 0xe3e38u);
    push32(c, 0xe3e3du); f_000e6c68(c); X86_RET(c, 0xe3e3du);
    X86_TICK(c, 9);
    // 0e3e3d  push 7
    X86_AT(c, 0xe3e3du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3e3f  call 0xefeb0
    X86_AT(c, 0xe3e3fu);
    push32(c, 0xe3e44u); f_000efeb0(c); X86_RET(c, 0xe3e44u);
    X86_TICK(c, 9);
    // 0e3e44  push 7
    X86_AT(c, 0xe3e44u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3e46  call 0xe693c
    X86_AT(c, 0xe3e46u);
    push32(c, 0xe3e4bu); f_000e693c(c); X86_RET(c, 0xe3e4bu);
    X86_TICK(c, 11);
    // 0e3e4b  push 0x2010
    X86_AT(c, 0xe3e4bu);
    { uint32_t v = 0x2010u; push32(c, v); }
    // 0e3e50  push 7
    X86_AT(c, 0xe3e50u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3e52  call 0xe6cb0
    X86_AT(c, 0xe3e52u);
    push32(c, 0xe3e57u); f_000e6cb0(c); X86_RET(c, 0xe3e57u);
    X86_TICK(c, 29);
    // 0e3e57  push 2
    X86_AT(c, 0xe3e57u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3e59  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe3e59u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e3e5e  lea edx, [eax + eax*4]
    X86_AT(c, 0xe3e5eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e3e61  lea edx, [eax + edx*2]
    X86_AT(c, 0xe3e61u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e3e64  shl edx, 5
    X86_AT(c, 0xe3e64u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e3e67  sub edx, eax
    X86_AT(c, 0xe3e67u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e3e69  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xe3e69u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0e3e6f  push 7
    X86_AT(c, 0xe3e6fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3e71  call 0xe5630
    X86_AT(c, 0xe3e71u);
    push32(c, 0xe3e76u); f_000e5630(c); X86_RET(c, 0xe3e76u);
    X86_TICK(c, 9);
    // 0e3e76  push 7
    X86_AT(c, 0xe3e76u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3e78  call 0xe6c68
    X86_AT(c, 0xe3e78u);
    push32(c, 0xe3e7du); f_000e6c68(c); X86_RET(c, 0xe3e7du);
    X86_TICK(c, 11);
    // 0e3e7d  push 0x201c
    X86_AT(c, 0xe3e7du);
    { uint32_t v = 0x201Cu; push32(c, v); }
    // 0e3e82  push 7
    X86_AT(c, 0xe3e82u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3e84  call 0xe6cb0
    X86_AT(c, 0xe3e84u);
    push32(c, 0xe3e89u); f_000e6cb0(c); X86_RET(c, 0xe3e89u);
    X86_TICK(c, 29);
    // 0e3e89  push 2
    X86_AT(c, 0xe3e89u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3e8b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe3e8bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e3e90  lea edx, [eax + eax*4]
    X86_AT(c, 0xe3e90u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e3e93  lea edx, [eax + edx*2]
    X86_AT(c, 0xe3e93u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e3e96  shl edx, 5
    X86_AT(c, 0xe3e96u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e3e99  sub edx, eax
    X86_AT(c, 0xe3e99u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e3e9b  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xe3e9bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0e3ea1  push 7
    X86_AT(c, 0xe3ea1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3ea3  call 0xe5630
    X86_AT(c, 0xe3ea3u);
    push32(c, 0xe3ea8u); f_000e5630(c); X86_RET(c, 0xe3ea8u);
    X86_TICK(c, 9);
    // 0e3ea8  push 7
    X86_AT(c, 0xe3ea8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3eaa  call 0xe6c68
    X86_AT(c, 0xe3eaau);
    push32(c, 0xe3eafu); f_000e6c68(c); X86_RET(c, 0xe3eafu);
    X86_TICK(c, 13);
    // 0e3eaf  add esp, 0x3c
    X86_AT(c, 0xe3eafu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e3eb2  push 0x2028
    X86_AT(c, 0xe3eb2u);
    { uint32_t v = 0x2028u; push32(c, v); }
    // 0e3eb7  push 7
    X86_AT(c, 0xe3eb7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3eb9  call 0xe6cb0
    X86_AT(c, 0xe3eb9u);
    push32(c, 0xe3ebeu); f_000e6cb0(c); X86_RET(c, 0xe3ebeu);
    X86_TICK(c, 29);
    // 0e3ebe  push 2
    X86_AT(c, 0xe3ebeu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3ec0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe3ec0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e3ec5  lea edx, [eax + eax*4]
    X86_AT(c, 0xe3ec5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e3ec8  lea edx, [eax + edx*2]
    X86_AT(c, 0xe3ec8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e3ecb  shl edx, 5
    X86_AT(c, 0xe3ecbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e3ece  sub edx, eax
    X86_AT(c, 0xe3eceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e3ed0  push dword ptr [edx + 0xcdf63]
    X86_AT(c, 0xe3ed0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u))); push32(c, v); }
    // 0e3ed6  push 7
    X86_AT(c, 0xe3ed6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3ed8  call 0xe5630
    X86_AT(c, 0xe3ed8u);
    push32(c, 0xe3eddu); f_000e5630(c); X86_RET(c, 0xe3eddu);
    X86_TICK(c, 9);
    // 0e3edd  push 7
    X86_AT(c, 0xe3eddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3edf  call 0xe6c68
    X86_AT(c, 0xe3edfu);
    push32(c, 0xe3ee4u); f_000e6c68(c); X86_RET(c, 0xe3ee4u);
    X86_TICK(c, 11);
    // 0e3ee4  push 0x2038
    X86_AT(c, 0xe3ee4u);
    { uint32_t v = 0x2038u; push32(c, v); }
    // 0e3ee9  push 7
    X86_AT(c, 0xe3ee9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3eeb  call 0xe6cb0
    X86_AT(c, 0xe3eebu);
    push32(c, 0xe3ef0u); f_000e6cb0(c); X86_RET(c, 0xe3ef0u);
    X86_TICK(c, 29);
    // 0e3ef0  push 2
    X86_AT(c, 0xe3ef0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3ef2  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe3ef2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e3ef7  lea edx, [eax + eax*4]
    X86_AT(c, 0xe3ef7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e3efa  lea edx, [eax + edx*2]
    X86_AT(c, 0xe3efau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e3efd  shl edx, 5
    X86_AT(c, 0xe3efdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e3f00  sub edx, eax
    X86_AT(c, 0xe3f00u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e3f02  push dword ptr [edx + 0xcdf67]
    X86_AT(c, 0xe3f02u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u))); push32(c, v); }
    // 0e3f08  push 7
    X86_AT(c, 0xe3f08u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3f0a  call 0xe5630
    X86_AT(c, 0xe3f0au);
    push32(c, 0xe3f0fu); f_000e5630(c); X86_RET(c, 0xe3f0fu);
    X86_TICK(c, 9);
    // 0e3f0f  push 7
    X86_AT(c, 0xe3f0fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3f11  call 0xe6c68
    X86_AT(c, 0xe3f11u);
    push32(c, 0xe3f16u); f_000e6c68(c); X86_RET(c, 0xe3f16u);
    X86_TICK(c, 11);
    // 0e3f16  add esp, 0x30
    X86_AT(c, 0xe3f16u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0e3f19  push 7
    X86_AT(c, 0xe3f19u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3f1b  call 0xefeb0
    X86_AT(c, 0xe3f1bu);
    push32(c, 0xe3f20u); f_000efeb0(c); X86_RET(c, 0xe3f20u);
    X86_TICK(c, 11);
    // 0e3f20  push 0x2048
    X86_AT(c, 0xe3f20u);
    { uint32_t v = 0x2048u; push32(c, v); }
    // 0e3f25  push 7
    X86_AT(c, 0xe3f25u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3f27  call 0xe6cb0
    X86_AT(c, 0xe3f27u);
    push32(c, 0xe3f2cu); f_000e6cb0(c); X86_RET(c, 0xe3f2cu);
    X86_TICK(c, 29);
    // 0e3f2c  push 2
    X86_AT(c, 0xe3f2cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3f2e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe3f2eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e3f33  lea edx, [eax + eax*4]
    X86_AT(c, 0xe3f33u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e3f36  lea edx, [eax + edx*2]
    X86_AT(c, 0xe3f36u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e3f39  shl edx, 5
    X86_AT(c, 0xe3f39u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e3f3c  sub edx, eax
    X86_AT(c, 0xe3f3cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e3f3e  push dword ptr [edx + 0xcdf9f]
    X86_AT(c, 0xe3f3eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Fu))); push32(c, v); }
    // 0e3f44  push 7
    X86_AT(c, 0xe3f44u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3f46  call 0xe5630
    X86_AT(c, 0xe3f46u);
    push32(c, 0xe3f4bu); f_000e5630(c); X86_RET(c, 0xe3f4bu);
    X86_TICK(c, 9);
    // 0e3f4b  push 7
    X86_AT(c, 0xe3f4bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3f4d  call 0xe6c68
    X86_AT(c, 0xe3f4du);
    push32(c, 0xe3f52u); f_000e6c68(c); X86_RET(c, 0xe3f52u);
    X86_TICK(c, 11);
    // 0e3f52  push 0x2050
    X86_AT(c, 0xe3f52u);
    { uint32_t v = 0x2050u; push32(c, v); }
    // 0e3f57  push 7
    X86_AT(c, 0xe3f57u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3f59  call 0xe6cb0
    X86_AT(c, 0xe3f59u);
    push32(c, 0xe3f5eu); f_000e6cb0(c); X86_RET(c, 0xe3f5eu);
    X86_TICK(c, 29);
    // 0e3f5e  push 2
    X86_AT(c, 0xe3f5eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3f60  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe3f60u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e3f65  lea edx, [eax + eax*4]
    X86_AT(c, 0xe3f65u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e3f68  lea edx, [eax + edx*2]
    X86_AT(c, 0xe3f68u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e3f6b  shl edx, 5
    X86_AT(c, 0xe3f6bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e3f6e  sub edx, eax
    X86_AT(c, 0xe3f6eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e3f70  push dword ptr [edx + 0xcdfa3]
    X86_AT(c, 0xe3f70u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDFA3u))); push32(c, v); }
    // 0e3f76  push 7
    X86_AT(c, 0xe3f76u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3f78  call 0xe5630
    X86_AT(c, 0xe3f78u);
    push32(c, 0xe3f7du); f_000e5630(c); X86_RET(c, 0xe3f7du);
    X86_TICK(c, 9);
    // 0e3f7d  push 7
    X86_AT(c, 0xe3f7du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3f7f  call 0xe6c68
    X86_AT(c, 0xe3f7fu);
    push32(c, 0xe3f84u); f_000e6c68(c); X86_RET(c, 0xe3f84u);
    X86_TICK(c, 11);
    // 0e3f84  push 0x2058
    X86_AT(c, 0xe3f84u);
    { uint32_t v = 0x2058u; push32(c, v); }
    // 0e3f89  push 7
    X86_AT(c, 0xe3f89u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3f8b  call 0xe6cb0
    X86_AT(c, 0xe3f8bu);
    push32(c, 0xe3f90u); f_000e6cb0(c); X86_RET(c, 0xe3f90u);
    X86_TICK(c, 31);
    // 0e3f90  add esp, 0x3c
    X86_AT(c, 0xe3f90u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e3f93  push 2
    X86_AT(c, 0xe3f93u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3f95  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe3f95u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e3f9a  lea edx, [eax + eax*4]
    X86_AT(c, 0xe3f9au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e3f9d  lea edx, [eax + edx*2]
    X86_AT(c, 0xe3f9du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e3fa0  shl edx, 5
    X86_AT(c, 0xe3fa0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e3fa3  sub edx, eax
    X86_AT(c, 0xe3fa3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e3fa5  push dword ptr [edx + 0xcdf5b]
    X86_AT(c, 0xe3fa5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu))); push32(c, v); }
    // 0e3fab  push 7
    X86_AT(c, 0xe3fabu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3fad  call 0xe5630
    X86_AT(c, 0xe3fadu);
    push32(c, 0xe3fb2u); f_000e5630(c); X86_RET(c, 0xe3fb2u);
    X86_TICK(c, 9);
    // 0e3fb2  push 7
    X86_AT(c, 0xe3fb2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3fb4  call 0xe6c68
    X86_AT(c, 0xe3fb4u);
    push32(c, 0xe3fb9u); f_000e6c68(c); X86_RET(c, 0xe3fb9u);
    X86_TICK(c, 11);
    // 0e3fb9  push 0x2060
    X86_AT(c, 0xe3fb9u);
    { uint32_t v = 0x2060u; push32(c, v); }
    // 0e3fbe  push 7
    X86_AT(c, 0xe3fbeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3fc0  call 0xe6cb0
    X86_AT(c, 0xe3fc0u);
    push32(c, 0xe3fc5u); f_000e6cb0(c); X86_RET(c, 0xe3fc5u);
    X86_TICK(c, 29);
    // 0e3fc5  push 2
    X86_AT(c, 0xe3fc5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e3fc7  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe3fc7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e3fcc  lea edx, [eax + eax*4]
    X86_AT(c, 0xe3fccu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e3fcf  lea edx, [eax + edx*2]
    X86_AT(c, 0xe3fcfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e3fd2  shl edx, 5
    X86_AT(c, 0xe3fd2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e3fd5  sub edx, eax
    X86_AT(c, 0xe3fd5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e3fd7  push dword ptr [edx + 0xcdf5f]
    X86_AT(c, 0xe3fd7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu))); push32(c, v); }
    // 0e3fdd  push 7
    X86_AT(c, 0xe3fddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3fdf  call 0xe5630
    X86_AT(c, 0xe3fdfu);
    push32(c, 0xe3fe4u); f_000e5630(c); X86_RET(c, 0xe3fe4u);
    X86_TICK(c, 9);
    // 0e3fe4  push 7
    X86_AT(c, 0xe3fe4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e3fe6  call 0xe6c68
    X86_AT(c, 0xe3fe6u);
    push32(c, 0xe3febu); f_000e6c68(c); X86_RET(c, 0xe3febu);
    X86_TICK(c, 2);
    // 0e3feb  add esp, 0x28
    X86_AT(c, 0xe3febu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_e3fee:
    X86_TICK(c, 10);
    // 0e3fee  ret 
    X86_AT(c, 0xe3feeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3d28u, "ran off the end of a function");
}
}

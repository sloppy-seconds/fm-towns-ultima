#include "p_game_funcs.h"
namespace p_game {
void f_000c3b44(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0c3b44  push ebp
    X86_AT(c, 0xc3b44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c3b45  mov ebp, esp
    X86_AT(c, 0xc3b45u);
    c.r[5] = c.r[4];
    // 0c3b47  sub esp, 0xa78
    X86_AT(c, 0xc3b47u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xA78u, 0, 4); }
    // 0c3b4d  push ebx
    X86_AT(c, 0xc3b4du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c3b4e  push esi
    X86_AT(c, 0xc3b4eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c3b4f  push edi
    X86_AT(c, 0xc3b4fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c3b50  push 0x17
    X86_AT(c, 0xc3b50u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c3b52  push 0x4d
    X86_AT(c, 0xc3b52u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c3b54  push 3
    X86_AT(c, 0xc3b54u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3b56  push 0
    X86_AT(c, 0xc3b56u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3b58  push 4
    X86_AT(c, 0xc3b58u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b5a  call 0xbc2b0
    X86_AT(c, 0xc3b5au);
    push32(c, 0xc3b5fu); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc3b5fu);
    X86_TICK(c, 13);
    // 0c3b5f  push 3
    X86_AT(c, 0xc3b5fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3b61  push 0
    X86_AT(c, 0xc3b61u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3b63  push 4
    X86_AT(c, 0xc3b63u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b65  call 0xbc174
    X86_AT(c, 0xc3b65u);
    push32(c, 0xc3b6au); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3b6au);
    X86_TICK(c, 11);
    // 0c3b6a  push 0xe
    X86_AT(c, 0xc3b6au);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3b6c  push 4
    X86_AT(c, 0xc3b6cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b6e  call 0xbc3ec
    X86_AT(c, 0xc3b6eu);
    push32(c, 0xc3b73u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3b73u);
    X86_TICK(c, 9);
    // 0c3b73  push 4
    X86_AT(c, 0xc3b73u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b75  call 0xbb6b0
    X86_AT(c, 0xc3b75u);
    push32(c, 0xc3b7au); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3b7au);
    X86_TICK(c, 11);
    // 0c3b7a  push 0x3a9c
    X86_AT(c, 0xc3b7au);
    { uint32_t v = 0x3A9Cu; push32(c, v); }
    // 0c3b7f  push 4
    X86_AT(c, 0xc3b7fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b81  call 0xba428
    X86_AT(c, 0xc3b81u);
    push32(c, 0xc3b86u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3b86u);
    X86_TICK(c, 11);
    // 0c3b86  push 0xb
    X86_AT(c, 0xc3b86u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c3b88  push 4
    X86_AT(c, 0xc3b88u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b8a  call 0xbc3ec
    X86_AT(c, 0xc3b8au);
    push32(c, 0xc3b8fu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3b8fu);
    X86_TICK(c, 11);
    // 0c3b8f  add esp, 0x3c
    X86_AT(c, 0xc3b8fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c3b92  push 4
    X86_AT(c, 0xc3b92u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b94  call 0xbb6b0
    X86_AT(c, 0xc3b94u);
    push32(c, 0xc3b99u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3b99u);
    X86_TICK(c, 13);
    // 0c3b99  push 3
    X86_AT(c, 0xc3b99u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3b9b  push 0x1f
    X86_AT(c, 0xc3b9bu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c3b9d  push 4
    X86_AT(c, 0xc3b9du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b9f  call 0xbc174
    X86_AT(c, 0xc3b9fu);
    push32(c, 0xc3ba4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3ba4u);
    X86_TICK(c, 11);
    // 0c3ba4  push 0x3ac4
    X86_AT(c, 0xc3ba4u);
    { uint32_t v = 0x3AC4u; push32(c, v); }
    // 0c3ba9  push 4
    X86_AT(c, 0xc3ba9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3bab  call 0xba428
    X86_AT(c, 0xc3babu);
    push32(c, 0xc3bb0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3bb0u);
    X86_TICK(c, 27);
    // 0c3bb0  lea eax, [ebp - 0xa70]
    X86_AT(c, 0xc3bb0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFF590u);
    // 0c3bb6  push eax
    X86_AT(c, 0xc3bb6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3bb7  push 4
    X86_AT(c, 0xc3bb7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3bb9  push 7
    X86_AT(c, 0xc3bb9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c3bbb  push 1
    X86_AT(c, 0xc3bbbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c3bbd  push 0xe
    X86_AT(c, 0xc3bbdu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3bbf  push 0x14
    X86_AT(c, 0xc3bbfu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c3bc1  push 4
    X86_AT(c, 0xc3bc1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3bc3  lea eax, [ebp - 0x20]
    X86_AT(c, 0xc3bc3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0c3bc6  push eax
    X86_AT(c, 0xc3bc6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3bc7  call 0xb9e9c
    X86_AT(c, 0xc3bc7u);
    push32(c, 0xc3bccu); x86_call_known(c, 0xb9e9cu, f_000b9e9c); X86_RET(c, 0xc3bccu);
    X86_TICK(c, 2);
    // 0c3bcc  sub edi, edi
    X86_AT(c, 0xc3bccu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c3bce:
    X86_TICK(c, 9);
    // 0c3bce  add esp, 0x38
    X86_AT(c, 0xc3bceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c3bd1  cmp edi, 0x14
    X86_AT(c, 0xc3bd1u);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c3bd4  jge 0xc3c33
    X86_AT(c, 0xc3bd4u);
    if (x86_cc(c, 13)) { goto L_c3c33; }
    X86_TICK(c, 15);
    // 0c3bd6  lea eax, [edi + 4]
    X86_AT(c, 0xc3bd6u);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0c3bd9  push eax
    X86_AT(c, 0xc3bd9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3bda  push 1
    X86_AT(c, 0xc3bdau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c3bdc  push 4
    X86_AT(c, 0xc3bdcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3bde  call 0xbc174
    X86_AT(c, 0xc3bdeu);
    push32(c, 0xc3be3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3be3u);
    X86_TICK(c, 17);
    // 0c3be3  push 2
    X86_AT(c, 0xc3be3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3be5  lea eax, [edi + 1]
    X86_AT(c, 0xc3be5u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0c3be8  push eax
    X86_AT(c, 0xc3be8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3be9  push 4
    X86_AT(c, 0xc3be9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3beb  mov dword ptr [ebp - 0xa78], eax
    X86_AT(c, 0xc3bebu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF588u)), c.r[0]);
    // 0c3bf1  call 0xba404
    X86_AT(c, 0xc3bf1u);
    push32(c, 0xc3bf6u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3bf6u);
    X86_TICK(c, 11);
    // 0c3bf6  push 0x3b08
    X86_AT(c, 0xc3bf6u);
    { uint32_t v = 0x3B08u; push32(c, v); }
    // 0c3bfb  push 4
    X86_AT(c, 0xc3bfbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3bfd  call 0xbbba4
    X86_AT(c, 0xc3bfdu);
    push32(c, 0xc3c02u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc3c02u);
    X86_TICK(c, 38);
    // 0c3c02  mov eax, edi
    X86_AT(c, 0xc3c02u);
    c.r[0] = c.r[7];
    // 0c3c04  add al, 0x41
    X86_AT(c, 0xc3c04u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0c3c06  push eax
    X86_AT(c, 0xc3c06u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3c07  mov edx, edi
    X86_AT(c, 0xc3c07u);
    c.r[2] = c.r[7];
    // 0c3c09  lea ecx, [edx + edx*2]
    X86_AT(c, 0xc3c09u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c3c0c  shl ecx, 5
    X86_AT(c, 0xc3c0cu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0c3c0f  add ecx, edx
    X86_AT(c, 0xc3c0fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c3c11  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xc3c11u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0c3c14  lea edx, [ecx*1 + 0xa4dac]
    X86_AT(c, 0xc3c14u);
    c.r[2] = (uint32_t)(c.r[1] + 0xA4DACu);
    // 0c3c1b  push edx
    X86_AT(c, 0xc3c1bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c3c1c  push edx
    X86_AT(c, 0xc3c1cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c3c1d  push eax
    X86_AT(c, 0xc3c1du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3c1e  push edi
    X86_AT(c, 0xc3c1eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c3c1f  lea eax, [ebp - 0xa70]
    X86_AT(c, 0xc3c1fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFF590u);
    // 0c3c25  push eax
    X86_AT(c, 0xc3c25u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3c26  call 0xb9ed8
    X86_AT(c, 0xc3c26u);
    push32(c, 0xc3c2bu); x86_call_known(c, 0xb9ed8u, f_000b9ed8); X86_RET(c, 0xc3c2bu);
    X86_TICK(c, 11);
    // 0c3c2b  mov edi, dword ptr [ebp - 0xa78]
    X86_AT(c, 0xc3c2bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF588u)));
    // 0c3c31  jmp 0xc3bce
    X86_AT(c, 0xc3c31u);
    X86_POLL(c, 0xc3bceu); goto L_c3bce;
L_c3c33:
    X86_TICK(c, 9);
    // 0c3c33  push 4
    X86_AT(c, 0xc3c33u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c35  call 0xbb6b0
    X86_AT(c, 0xc3c35u);
    push32(c, 0xc3c3au); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3c3au);
    X86_TICK(c, 13);
    // 0c3c3a  push 3
    X86_AT(c, 0xc3c3au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3c3c  push 0x1f
    X86_AT(c, 0xc3c3cu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c3c3e  push 4
    X86_AT(c, 0xc3c3eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c40  call 0xbc174
    X86_AT(c, 0xc3c40u);
    push32(c, 0xc3c45u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3c45u);
    X86_TICK(c, 11);
    // 0c3c45  push 0x3b0c
    X86_AT(c, 0xc3c45u);
    { uint32_t v = 0x3B0Cu; push32(c, v); }
    // 0c3c4a  push 4
    X86_AT(c, 0xc3c4au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c4c  call 0xba428
    X86_AT(c, 0xc3c4cu);
    push32(c, 0xc3c51u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3c51u);
    X86_TICK(c, 15);
    // 0c3c51  push 1
    X86_AT(c, 0xc3c51u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c3c53  lea eax, [ebp - 0x20]
    X86_AT(c, 0xc3c53u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0c3c56  push eax
    X86_AT(c, 0xc3c56u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3c57  push 4
    X86_AT(c, 0xc3c57u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c59  call 0xba310
    X86_AT(c, 0xc3c59u);
    push32(c, 0xc3c5eu); x86_call_known(c, 0xba310u, f_000ba310); X86_RET(c, 0xc3c5eu);
    X86_TICK(c, 12);
    // 0c3c5e  xchg ebx, eax
    X86_AT(c, 0xc3c5eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c3c5f  add esp, 0x24
    X86_AT(c, 0xc3c5fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0c3c62  cmp bl, 1
    X86_AT(c, 0xc3c62u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3c65  jne 0xc3cbe
    X86_AT(c, 0xc3c65u);
    if (x86_cc(c, 5)) { goto L_c3cbe; }
    X86_TICK(c, 13);
    // 0c3c67  push 3
    X86_AT(c, 0xc3c67u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3c69  push 0x1f
    X86_AT(c, 0xc3c69u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c3c6b  push 4
    X86_AT(c, 0xc3c6bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c6d  call 0xbc174
    X86_AT(c, 0xc3c6du);
    push32(c, 0xc3c72u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3c72u);
    X86_TICK(c, 11);
    // 0c3c72  push 0x3b5c
    X86_AT(c, 0xc3c72u);
    { uint32_t v = 0x3B5Cu; push32(c, v); }
    // 0c3c77  push 4
    X86_AT(c, 0xc3c77u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c79  call 0xba428
    X86_AT(c, 0xc3c79u);
    push32(c, 0xc3c7eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3c7eu);
    X86_TICK(c, 9);
    // 0c3c7e  push 0x3bac
    X86_AT(c, 0xc3c7eu);
    { uint32_t v = 0x3BACu; push32(c, v); }
    // 0c3c83  call 0xbc50c
    X86_AT(c, 0xc3c83u);
    push32(c, 0xc3c88u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3c88u);
    X86_TICK(c, 2);
    // 0c3c88  add esp, 0x18
    X86_AT(c, 0xc3c88u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c3c8b:
    X86_TICK(c, 9);
    // 0c3c8b  push 4
    X86_AT(c, 0xc3c8bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c8d  call 0xb9930
    X86_AT(c, 0xc3c8du);
    push32(c, 0xc3c92u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3c92u);
    X86_TICK(c, 9);
    // 0c3c92  add esp, 4
    X86_AT(c, 0xc3c92u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3c95  and al, al
    X86_AT(c, 0xc3c95u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c3c97  je 0xc3c8b
    X86_AT(c, 0xc3c97u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3c8bu); goto L_c3c8b; }
    X86_TICK(c, 9);
    // 0c3c99  push 2
    X86_AT(c, 0xc3c99u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3c9b  call 0xbbb5c
    X86_AT(c, 0xc3c9bu);
    push32(c, 0xc3ca0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc3ca0u);
    X86_TICK(c, 9);
    // 0c3ca0  push 4
    X86_AT(c, 0xc3ca0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3ca2  call 0xbb6b0
    X86_AT(c, 0xc3ca2u);
    push32(c, 0xc3ca7u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3ca7u);
    X86_TICK(c, 17);
    // 0c3ca7  push 0x17
    X86_AT(c, 0xc3ca7u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c3ca9  push 0x4d
    X86_AT(c, 0xc3ca9u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c3cab  push 3
    X86_AT(c, 0xc3cabu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3cad  push 0
    X86_AT(c, 0xc3cadu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3caf  push 4
    X86_AT(c, 0xc3cafu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3cb1  call 0xbc2b0
    X86_AT(c, 0xc3cb1u);
    push32(c, 0xc3cb6u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc3cb6u);
    X86_TICK(c, 9);
    // 0c3cb6  add esp, 0x1c
    X86_AT(c, 0xc3cb6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c3cb9  jmp 0xc3ec1
    X86_AT(c, 0xc3cb9u);
    goto L_c3ec1;
L_c3cbe:
    X86_TICK(c, 7);
    // 0c3cbe  cmp bl, 0x41
    X86_AT(c, 0xc3cbeu);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0c3cc1  jb 0xc3c33
    X86_AT(c, 0xc3cc1u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xc3c33u); goto L_c3c33; }
    X86_TICK(c, 28);
    // 0c3cc7  sub bl, 0x41
    X86_AT(c, 0xc3cc7u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x41u, 0, 1)); }
    // 0c3cca  movzx ebx, bl
    X86_AT(c, 0xc3ccau);
    c.r[3] = g8(c, 3);
    // 0c3ccd  mov eax, ebx
    X86_AT(c, 0xc3ccdu);
    c.r[0] = c.r[3];
    // 0c3ccf  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3ccfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3cd2  shl edx, 5
    X86_AT(c, 0xc3cd2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3cd5  add edx, eax
    X86_AT(c, 0xc3cd5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3cd7  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3cd7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3cda  cmp dword ptr [edx + 0xa4dc5], 0
    X86_AT(c, 0xc3cdau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u))), 0x0u, 0, 4);
    // 0c3ce1  jne 0xc3d1a
    X86_AT(c, 0xc3ce1u);
    if (x86_cc(c, 5)) { goto L_c3d1a; }
    X86_TICK(c, 13);
    // 0c3ce3  push 3
    X86_AT(c, 0xc3ce3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3ce5  push 0x1f
    X86_AT(c, 0xc3ce5u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c3ce7  push 4
    X86_AT(c, 0xc3ce7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3ce9  call 0xbc174
    X86_AT(c, 0xc3ce9u);
    push32(c, 0xc3ceeu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3ceeu);
    X86_TICK(c, 11);
    // 0c3cee  push 0x3be0
    X86_AT(c, 0xc3ceeu);
    { uint32_t v = 0x3BE0u; push32(c, v); }
    // 0c3cf3  push 4
    X86_AT(c, 0xc3cf3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3cf5  call 0xba428
    X86_AT(c, 0xc3cf5u);
    push32(c, 0xc3cfau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3cfau);
    X86_TICK(c, 9);
    // 0c3cfa  push 0x3c28
    X86_AT(c, 0xc3cfau);
    { uint32_t v = 0x3C28u; push32(c, v); }
    // 0c3cff  call 0xbc50c
    X86_AT(c, 0xc3cffu);
    push32(c, 0xc3d04u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3d04u);
    X86_TICK(c, 2);
    // 0c3d04  add esp, 0x18
    X86_AT(c, 0xc3d04u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c3d07:
    X86_TICK(c, 9);
    // 0c3d07  push 4
    X86_AT(c, 0xc3d07u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d09  call 0xb9930
    X86_AT(c, 0xc3d09u);
    push32(c, 0xc3d0eu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3d0eu);
    X86_TICK(c, 9);
    // 0c3d0e  add esp, 4
    X86_AT(c, 0xc3d0eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3d11  and al, al
    X86_AT(c, 0xc3d11u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c3d13  je 0xc3d07
    X86_AT(c, 0xc3d13u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3d07u); goto L_c3d07; }
    X86_TICK(c, 7);
    // 0c3d15  jmp 0xc3eab
    X86_AT(c, 0xc3d15u);
    goto L_c3eab;
L_c3d1a:
    X86_TICK(c, 26);
    // 0c3d1a  movzx ebx, bl
    X86_AT(c, 0xc3d1au);
    c.r[3] = g8(c, 3);
    // 0c3d1d  mov eax, ebx
    X86_AT(c, 0xc3d1du);
    c.r[0] = c.r[3];
    // 0c3d1f  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3d1fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3d22  shl edx, 5
    X86_AT(c, 0xc3d22u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3d25  add edx, eax
    X86_AT(c, 0xc3d25u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3d27  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3d27u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3d2a  cmp byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc3d2au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu))), 0x0u, 0, 1);
    // 0c3d31  jne 0xc3d6a
    X86_AT(c, 0xc3d31u);
    if (x86_cc(c, 5)) { goto L_c3d6a; }
    X86_TICK(c, 13);
    // 0c3d33  push 3
    X86_AT(c, 0xc3d33u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3d35  push 0x1f
    X86_AT(c, 0xc3d35u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c3d37  push 4
    X86_AT(c, 0xc3d37u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d39  call 0xbc174
    X86_AT(c, 0xc3d39u);
    push32(c, 0xc3d3eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3d3eu);
    X86_TICK(c, 11);
    // 0c3d3e  push 0x3c5c
    X86_AT(c, 0xc3d3eu);
    { uint32_t v = 0x3C5Cu; push32(c, v); }
    // 0c3d43  push 4
    X86_AT(c, 0xc3d43u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d45  call 0xba428
    X86_AT(c, 0xc3d45u);
    push32(c, 0xc3d4au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3d4au);
    X86_TICK(c, 9);
    // 0c3d4a  push 0x3ca8
    X86_AT(c, 0xc3d4au);
    { uint32_t v = 0x3CA8u; push32(c, v); }
    // 0c3d4f  call 0xbc50c
    X86_AT(c, 0xc3d4fu);
    push32(c, 0xc3d54u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3d54u);
    X86_TICK(c, 2);
    // 0c3d54  add esp, 0x18
    X86_AT(c, 0xc3d54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c3d57:
    X86_TICK(c, 9);
    // 0c3d57  push 4
    X86_AT(c, 0xc3d57u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d59  call 0xb9930
    X86_AT(c, 0xc3d59u);
    push32(c, 0xc3d5eu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3d5eu);
    X86_TICK(c, 9);
    // 0c3d5e  add esp, 4
    X86_AT(c, 0xc3d5eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3d61  and al, al
    X86_AT(c, 0xc3d61u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c3d63  je 0xc3d57
    X86_AT(c, 0xc3d63u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3d57u); goto L_c3d57; }
    X86_TICK(c, 7);
    // 0c3d65  jmp 0xc3eab
    X86_AT(c, 0xc3d65u);
    goto L_c3eab;
L_c3d6a:
    X86_TICK(c, 13);
    // 0c3d6a  push 3
    X86_AT(c, 0xc3d6au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3d6c  push 0x1f
    X86_AT(c, 0xc3d6cu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c3d6e  push 4
    X86_AT(c, 0xc3d6eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d70  call 0xbc174
    X86_AT(c, 0xc3d70u);
    push32(c, 0xc3d75u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3d75u);
    X86_TICK(c, 27);
    // 0c3d75  movzx ebx, bl
    X86_AT(c, 0xc3d75u);
    c.r[3] = g8(c, 3);
    // 0c3d78  mov eax, ebx
    X86_AT(c, 0xc3d78u);
    c.r[0] = c.r[3];
    // 0c3d7a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3d7au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3d7d  shl edx, 5
    X86_AT(c, 0xc3d7du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3d80  add edx, eax
    X86_AT(c, 0xc3d80u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3d82  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3d82u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3d85  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc3d85u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c3d8c  push eax
    X86_AT(c, 0xc3d8cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3d8d  push 4
    X86_AT(c, 0xc3d8du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d8f  call 0xbbfe0
    X86_AT(c, 0xc3d8fu);
    push32(c, 0xc3d94u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc3d94u);
    X86_TICK(c, 11);
    // 0c3d94  push 0x3cdc
    X86_AT(c, 0xc3d94u);
    { uint32_t v = 0x3CDCu; push32(c, v); }
    // 0c3d99  push 4
    X86_AT(c, 0xc3d99u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d9b  call 0xba428
    X86_AT(c, 0xc3d9bu);
    push32(c, 0xc3da0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3da0u);
    X86_TICK(c, 9);
    // 0c3da0  push 0x3d20
    X86_AT(c, 0xc3da0u);
    { uint32_t v = 0x3D20u; push32(c, v); }
    // 0c3da5  call 0xbc50c
    X86_AT(c, 0xc3da5u);
    push32(c, 0xc3daau); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3daau);
    X86_TICK(c, 2);
    // 0c3daa  add esp, 0x20
    X86_AT(c, 0xc3daau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_c3dad:
    X86_TICK(c, 9);
    // 0c3dad  push 4
    X86_AT(c, 0xc3dadu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3daf  call 0xb9930
    X86_AT(c, 0xc3dafu);
    push32(c, 0xc3db4u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3db4u);
    X86_TICK(c, 11);
    // 0c3db4  mov byte ptr [ebp - 0xa71], al
    X86_AT(c, 0xc3db4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF58Fu)), g8(c, 0));
    // 0c3dba  add esp, 4
    X86_AT(c, 0xc3dbau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3dbd  cmp al, 0x59
    X86_AT(c, 0xc3dbdu);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0c3dbf  je 0xc3dc9
    X86_AT(c, 0xc3dbfu);
    if (x86_cc(c, 4)) { goto L_c3dc9; }
    X86_TICK(c, 7);
    // 0c3dc1  cmp al, 0x4e
    X86_AT(c, 0xc3dc1u);
    (void)x86_sub(c, g8(c, 0), 0x4Eu, 0, 1);
    // 0c3dc3  je 0xc3dc9
    X86_AT(c, 0xc3dc3u);
    if (x86_cc(c, 4)) { goto L_c3dc9; }
    X86_TICK(c, 7);
    // 0c3dc5  dec al
    X86_AT(c, 0xc3dc5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0c3dc7  jne 0xc3dad
    X86_AT(c, 0xc3dc7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3dadu); goto L_c3dad; }
L_c3dc9:
    X86_TICK(c, 9);
    // 0c3dc9  push 2
    X86_AT(c, 0xc3dc9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3dcb  call 0xbbb5c
    X86_AT(c, 0xc3dcbu);
    push32(c, 0xc3dd0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc3dd0u);
    X86_TICK(c, 9);
    // 0c3dd0  push 4
    X86_AT(c, 0xc3dd0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3dd2  call 0xbb6b0
    X86_AT(c, 0xc3dd2u);
    push32(c, 0xc3dd7u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3dd7u);
    X86_TICK(c, 14);
    // 0c3dd7  add esp, 8
    X86_AT(c, 0xc3dd7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c3dda  cmp byte ptr [ebp - 0xa71], 0x59
    X86_AT(c, 0xc3ddau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF58Fu))), 0x59u, 0, 1);
    // 0c3de1  jne 0xc3c33
    X86_AT(c, 0xc3de1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3c33u); goto L_c3c33; }
L_c3de7:
    X86_TICK(c, 9);
    // 0c3de7  push 0
    X86_AT(c, 0xc3de7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3de9  call 0xb6d38
    X86_AT(c, 0xc3de9u);
    push32(c, 0xc3deeu); x86_call_known(c, 0xb6d38u, f_000b6d38); X86_RET(c, 0xc3deeu);
    X86_TICK(c, 12);
    // 0c3dee  xchg esi, eax
    X86_AT(c, 0xc3deeu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c3def  push 4
    X86_AT(c, 0xc3defu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3df1  call 0xbb6b0
    X86_AT(c, 0xc3df1u);
    push32(c, 0xc3df6u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3df6u);
    X86_TICK(c, 9);
    // 0c3df6  add esp, 8
    X86_AT(c, 0xc3df6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c3df9  cmp esi, 0xffffffff
    X86_AT(c, 0xc3df9u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c3dfc  je 0xc3e07
    X86_AT(c, 0xc3dfcu);
    if (x86_cc(c, 4)) { goto L_c3e07; }
    X86_TICK(c, 7);
    // 0c3dfe  and esi, esi
    X86_AT(c, 0xc3dfeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c3e00  je 0xc3e07
    X86_AT(c, 0xc3e00u);
    if (x86_cc(c, 4)) { goto L_c3e07; }
    X86_TICK(c, 7);
    // 0c3e02  cmp esi, 1
    X86_AT(c, 0xc3e02u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0c3e05  jne 0xc3de7
    X86_AT(c, 0xc3e05u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3de7u); goto L_c3de7; }
L_c3e07:
    X86_TICK(c, 7);
    // 0c3e07  and esi, esi
    X86_AT(c, 0xc3e07u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c3e09  jne 0xc3c33
    X86_AT(c, 0xc3e09u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3c33u); goto L_c3c33; }
    X86_TICK(c, 27);
    // 0c3e0f  movzx edi, bl
    X86_AT(c, 0xc3e0fu);
    c.r[7] = g8(c, 3);
    // 0c3e12  mov eax, edi
    X86_AT(c, 0xc3e12u);
    c.r[0] = c.r[7];
    // 0c3e14  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3e14u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3e17  shl edx, 5
    X86_AT(c, 0xc3e17u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3e1a  add edx, eax
    X86_AT(c, 0xc3e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3e1c  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3e1cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3e1f  mov byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc3e1fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu)), 0x0u);
    // 0c3e26  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc3e26u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c3e30  mov dword ptr [ebp - 0xa78], edx
    X86_AT(c, 0xc3e30u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF588u)), c.r[2]);
    // 0c3e36  call 0xc1060
    X86_AT(c, 0xc3e36u);
    push32(c, 0xc3e3bu); x86_call_known(c, 0xc1060u, f_000c1060); X86_RET(c, 0xc3e3bu);
    X86_TICK(c, 31);
    // 0c3e3b  mov eax, edi
    X86_AT(c, 0xc3e3bu);
    c.r[0] = c.r[7];
    // 0c3e3d  add al, 0x41
    X86_AT(c, 0xc3e3du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0c3e3f  push eax
    X86_AT(c, 0xc3e3fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3e40  mov edx, dword ptr [ebp - 0xa78]
    X86_AT(c, 0xc3e40u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF588u)));
    // 0c3e46  lea ecx, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc3e46u);
    c.r[1] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c3e4d  push ecx
    X86_AT(c, 0xc3e4du);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c3e4e  push ecx
    X86_AT(c, 0xc3e4eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c3e4f  push eax
    X86_AT(c, 0xc3e4fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3e50  push edi
    X86_AT(c, 0xc3e50u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c3e51  lea eax, [ebp - 0xa70]
    X86_AT(c, 0xc3e51u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFF590u);
    // 0c3e57  push eax
    X86_AT(c, 0xc3e57u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3e58  call 0xb9ed8
    X86_AT(c, 0xc3e58u);
    push32(c, 0xc3e5du); x86_call_known(c, 0xb9ed8u, f_000b9ed8); X86_RET(c, 0xc3e5du);
    X86_TICK(c, 19);
    // 0c3e5d  lea eax, [edi + 4]
    X86_AT(c, 0xc3e5du);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0c3e60  push eax
    X86_AT(c, 0xc3e60u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3e61  push 0x4d
    X86_AT(c, 0xc3e61u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c3e63  push eax
    X86_AT(c, 0xc3e63u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3e64  push 7
    X86_AT(c, 0xc3e64u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c3e66  push 4
    X86_AT(c, 0xc3e66u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3e68  call 0xbc2b0
    X86_AT(c, 0xc3e68u);
    push32(c, 0xc3e6du); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc3e6du);
    X86_TICK(c, 11);
    // 0c3e6d  lea eax, [ebp - 0x20]
    X86_AT(c, 0xc3e6du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0c3e70  push eax
    X86_AT(c, 0xc3e70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3e71  call 0xba07c
    X86_AT(c, 0xc3e71u);
    push32(c, 0xc3e76u); x86_call_known(c, 0xba07cu, f_000ba07c); X86_RET(c, 0xc3e76u);
    X86_TICK(c, 13);
    // 0c3e76  push 3
    X86_AT(c, 0xc3e76u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3e78  push 0x1f
    X86_AT(c, 0xc3e78u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c3e7a  push 4
    X86_AT(c, 0xc3e7au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3e7c  call 0xbc174
    X86_AT(c, 0xc3e7cu);
    push32(c, 0xc3e81u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3e81u);
    X86_TICK(c, 13);
    // 0c3e81  add esp, 0x3c
    X86_AT(c, 0xc3e81u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c3e84  push 0x3d4c
    X86_AT(c, 0xc3e84u);
    { uint32_t v = 0x3D4Cu; push32(c, v); }
    // 0c3e89  push 4
    X86_AT(c, 0xc3e89u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3e8b  call 0xba428
    X86_AT(c, 0xc3e8bu);
    push32(c, 0xc3e90u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3e90u);
    X86_TICK(c, 9);
    // 0c3e90  push 0x3da4
    X86_AT(c, 0xc3e90u);
    { uint32_t v = 0x3DA4u; push32(c, v); }
    // 0c3e95  call 0xbc50c
    X86_AT(c, 0xc3e95u);
    push32(c, 0xc3e9au); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3e9au);
    X86_TICK(c, 2);
    // 0c3e9a  add esp, 0xc
    X86_AT(c, 0xc3e9au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c3e9d:
    X86_TICK(c, 9);
    // 0c3e9d  push 4
    X86_AT(c, 0xc3e9du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3e9f  call 0xb9930
    X86_AT(c, 0xc3e9fu);
    push32(c, 0xc3ea4u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3ea4u);
    X86_TICK(c, 9);
    // 0c3ea4  add esp, 4
    X86_AT(c, 0xc3ea4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3ea7  and al, al
    X86_AT(c, 0xc3ea7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c3ea9  je 0xc3e9d
    X86_AT(c, 0xc3ea9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3e9du); goto L_c3e9d; }
L_c3eab:
    X86_TICK(c, 9);
    // 0c3eab  push 2
    X86_AT(c, 0xc3eabu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3ead  call 0xbbb5c
    X86_AT(c, 0xc3eadu);
    push32(c, 0xc3eb2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc3eb2u);
    X86_TICK(c, 9);
    // 0c3eb2  push 4
    X86_AT(c, 0xc3eb2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3eb4  call 0xbb6b0
    X86_AT(c, 0xc3eb4u);
    push32(c, 0xc3eb9u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3eb9u);
    X86_TICK(c, 9);
    // 0c3eb9  add esp, 8
    X86_AT(c, 0xc3eb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c3ebc  jmp 0xc3c33
    X86_AT(c, 0xc3ebcu);
    X86_POLL(c, 0xc3c33u); goto L_c3c33;
L_c3ec1:
    X86_TICK(c, 28);
    // 0c3ec1  pop edi
    X86_AT(c, 0xc3ec1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c3ec2  pop esi
    X86_AT(c, 0xc3ec2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c3ec3  pop ebx
    X86_AT(c, 0xc3ec3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c3ec4  leave 
    X86_AT(c, 0xc3ec4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c3ec5  ret 
    X86_AT(c, 0xc3ec5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc3b44u, "ran off the end of a function");
}
void f_000c3eab(X86Cpu& c) {
    goto L_c3eab;
L_c3c33:
    X86_TICK(c, 9);
    // 0c3c33  push 4
    X86_AT(c, 0xc3c33u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c35  call 0xbb6b0
    X86_AT(c, 0xc3c35u);
    push32(c, 0xc3c3au); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3c3au);
    X86_TICK(c, 13);
    // 0c3c3a  push 3
    X86_AT(c, 0xc3c3au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3c3c  push 0x1f
    X86_AT(c, 0xc3c3cu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c3c3e  push 4
    X86_AT(c, 0xc3c3eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c40  call 0xbc174
    X86_AT(c, 0xc3c40u);
    push32(c, 0xc3c45u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3c45u);
    X86_TICK(c, 11);
    // 0c3c45  push 0x3b0c
    X86_AT(c, 0xc3c45u);
    { uint32_t v = 0x3B0Cu; push32(c, v); }
    // 0c3c4a  push 4
    X86_AT(c, 0xc3c4au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c4c  call 0xba428
    X86_AT(c, 0xc3c4cu);
    push32(c, 0xc3c51u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3c51u);
    X86_TICK(c, 15);
    // 0c3c51  push 1
    X86_AT(c, 0xc3c51u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c3c53  lea eax, [ebp - 0x20]
    X86_AT(c, 0xc3c53u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0c3c56  push eax
    X86_AT(c, 0xc3c56u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3c57  push 4
    X86_AT(c, 0xc3c57u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c59  call 0xba310
    X86_AT(c, 0xc3c59u);
    push32(c, 0xc3c5eu); x86_call_known(c, 0xba310u, f_000ba310); X86_RET(c, 0xc3c5eu);
    X86_TICK(c, 12);
    // 0c3c5e  xchg ebx, eax
    X86_AT(c, 0xc3c5eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c3c5f  add esp, 0x24
    X86_AT(c, 0xc3c5fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0c3c62  cmp bl, 1
    X86_AT(c, 0xc3c62u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3c65  jne 0xc3cbe
    X86_AT(c, 0xc3c65u);
    if (x86_cc(c, 5)) { goto L_c3cbe; }
    X86_TICK(c, 13);
    // 0c3c67  push 3
    X86_AT(c, 0xc3c67u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3c69  push 0x1f
    X86_AT(c, 0xc3c69u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c3c6b  push 4
    X86_AT(c, 0xc3c6bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c6d  call 0xbc174
    X86_AT(c, 0xc3c6du);
    push32(c, 0xc3c72u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3c72u);
    X86_TICK(c, 11);
    // 0c3c72  push 0x3b5c
    X86_AT(c, 0xc3c72u);
    { uint32_t v = 0x3B5Cu; push32(c, v); }
    // 0c3c77  push 4
    X86_AT(c, 0xc3c77u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c79  call 0xba428
    X86_AT(c, 0xc3c79u);
    push32(c, 0xc3c7eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3c7eu);
    X86_TICK(c, 9);
    // 0c3c7e  push 0x3bac
    X86_AT(c, 0xc3c7eu);
    { uint32_t v = 0x3BACu; push32(c, v); }
    // 0c3c83  call 0xbc50c
    X86_AT(c, 0xc3c83u);
    push32(c, 0xc3c88u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3c88u);
    X86_TICK(c, 2);
    // 0c3c88  add esp, 0x18
    X86_AT(c, 0xc3c88u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c3c8b:
    X86_TICK(c, 9);
    // 0c3c8b  push 4
    X86_AT(c, 0xc3c8bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3c8d  call 0xb9930
    X86_AT(c, 0xc3c8du);
    push32(c, 0xc3c92u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3c92u);
    X86_TICK(c, 9);
    // 0c3c92  add esp, 4
    X86_AT(c, 0xc3c92u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3c95  and al, al
    X86_AT(c, 0xc3c95u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c3c97  je 0xc3c8b
    X86_AT(c, 0xc3c97u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3c8bu); goto L_c3c8b; }
    X86_TICK(c, 9);
    // 0c3c99  push 2
    X86_AT(c, 0xc3c99u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3c9b  call 0xbbb5c
    X86_AT(c, 0xc3c9bu);
    push32(c, 0xc3ca0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc3ca0u);
    X86_TICK(c, 9);
    // 0c3ca0  push 4
    X86_AT(c, 0xc3ca0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3ca2  call 0xbb6b0
    X86_AT(c, 0xc3ca2u);
    push32(c, 0xc3ca7u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3ca7u);
    X86_TICK(c, 17);
    // 0c3ca7  push 0x17
    X86_AT(c, 0xc3ca7u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c3ca9  push 0x4d
    X86_AT(c, 0xc3ca9u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c3cab  push 3
    X86_AT(c, 0xc3cabu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3cad  push 0
    X86_AT(c, 0xc3cadu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3caf  push 4
    X86_AT(c, 0xc3cafu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3cb1  call 0xbc2b0
    X86_AT(c, 0xc3cb1u);
    push32(c, 0xc3cb6u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc3cb6u);
    X86_TICK(c, 9);
    // 0c3cb6  add esp, 0x1c
    X86_AT(c, 0xc3cb6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c3cb9  jmp 0xc3ec1
    X86_AT(c, 0xc3cb9u);
    goto L_c3ec1;
L_c3cbe:
    X86_TICK(c, 7);
    // 0c3cbe  cmp bl, 0x41
    X86_AT(c, 0xc3cbeu);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0c3cc1  jb 0xc3c33
    X86_AT(c, 0xc3cc1u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xc3c33u); goto L_c3c33; }
    X86_TICK(c, 28);
    // 0c3cc7  sub bl, 0x41
    X86_AT(c, 0xc3cc7u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x41u, 0, 1)); }
    // 0c3cca  movzx ebx, bl
    X86_AT(c, 0xc3ccau);
    c.r[3] = g8(c, 3);
    // 0c3ccd  mov eax, ebx
    X86_AT(c, 0xc3ccdu);
    c.r[0] = c.r[3];
    // 0c3ccf  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3ccfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3cd2  shl edx, 5
    X86_AT(c, 0xc3cd2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3cd5  add edx, eax
    X86_AT(c, 0xc3cd5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3cd7  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3cd7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3cda  cmp dword ptr [edx + 0xa4dc5], 0
    X86_AT(c, 0xc3cdau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u))), 0x0u, 0, 4);
    // 0c3ce1  jne 0xc3d1a
    X86_AT(c, 0xc3ce1u);
    if (x86_cc(c, 5)) { goto L_c3d1a; }
    X86_TICK(c, 13);
    // 0c3ce3  push 3
    X86_AT(c, 0xc3ce3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3ce5  push 0x1f
    X86_AT(c, 0xc3ce5u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c3ce7  push 4
    X86_AT(c, 0xc3ce7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3ce9  call 0xbc174
    X86_AT(c, 0xc3ce9u);
    push32(c, 0xc3ceeu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3ceeu);
    X86_TICK(c, 11);
    // 0c3cee  push 0x3be0
    X86_AT(c, 0xc3ceeu);
    { uint32_t v = 0x3BE0u; push32(c, v); }
    // 0c3cf3  push 4
    X86_AT(c, 0xc3cf3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3cf5  call 0xba428
    X86_AT(c, 0xc3cf5u);
    push32(c, 0xc3cfau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3cfau);
    X86_TICK(c, 9);
    // 0c3cfa  push 0x3c28
    X86_AT(c, 0xc3cfau);
    { uint32_t v = 0x3C28u; push32(c, v); }
    // 0c3cff  call 0xbc50c
    X86_AT(c, 0xc3cffu);
    push32(c, 0xc3d04u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3d04u);
    X86_TICK(c, 2);
    // 0c3d04  add esp, 0x18
    X86_AT(c, 0xc3d04u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c3d07:
    X86_TICK(c, 9);
    // 0c3d07  push 4
    X86_AT(c, 0xc3d07u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d09  call 0xb9930
    X86_AT(c, 0xc3d09u);
    push32(c, 0xc3d0eu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3d0eu);
    X86_TICK(c, 9);
    // 0c3d0e  add esp, 4
    X86_AT(c, 0xc3d0eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3d11  and al, al
    X86_AT(c, 0xc3d11u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c3d13  je 0xc3d07
    X86_AT(c, 0xc3d13u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3d07u); goto L_c3d07; }
    X86_TICK(c, 7);
    // 0c3d15  jmp 0xc3eab
    X86_AT(c, 0xc3d15u);
    goto L_c3eab;
L_c3d1a:
    X86_TICK(c, 26);
    // 0c3d1a  movzx ebx, bl
    X86_AT(c, 0xc3d1au);
    c.r[3] = g8(c, 3);
    // 0c3d1d  mov eax, ebx
    X86_AT(c, 0xc3d1du);
    c.r[0] = c.r[3];
    // 0c3d1f  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3d1fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3d22  shl edx, 5
    X86_AT(c, 0xc3d22u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3d25  add edx, eax
    X86_AT(c, 0xc3d25u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3d27  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3d27u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3d2a  cmp byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc3d2au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu))), 0x0u, 0, 1);
    // 0c3d31  jne 0xc3d6a
    X86_AT(c, 0xc3d31u);
    if (x86_cc(c, 5)) { goto L_c3d6a; }
    X86_TICK(c, 13);
    // 0c3d33  push 3
    X86_AT(c, 0xc3d33u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3d35  push 0x1f
    X86_AT(c, 0xc3d35u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c3d37  push 4
    X86_AT(c, 0xc3d37u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d39  call 0xbc174
    X86_AT(c, 0xc3d39u);
    push32(c, 0xc3d3eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3d3eu);
    X86_TICK(c, 11);
    // 0c3d3e  push 0x3c5c
    X86_AT(c, 0xc3d3eu);
    { uint32_t v = 0x3C5Cu; push32(c, v); }
    // 0c3d43  push 4
    X86_AT(c, 0xc3d43u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d45  call 0xba428
    X86_AT(c, 0xc3d45u);
    push32(c, 0xc3d4au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3d4au);
    X86_TICK(c, 9);
    // 0c3d4a  push 0x3ca8
    X86_AT(c, 0xc3d4au);
    { uint32_t v = 0x3CA8u; push32(c, v); }
    // 0c3d4f  call 0xbc50c
    X86_AT(c, 0xc3d4fu);
    push32(c, 0xc3d54u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3d54u);
    X86_TICK(c, 2);
    // 0c3d54  add esp, 0x18
    X86_AT(c, 0xc3d54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c3d57:
    X86_TICK(c, 9);
    // 0c3d57  push 4
    X86_AT(c, 0xc3d57u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d59  call 0xb9930
    X86_AT(c, 0xc3d59u);
    push32(c, 0xc3d5eu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3d5eu);
    X86_TICK(c, 9);
    // 0c3d5e  add esp, 4
    X86_AT(c, 0xc3d5eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3d61  and al, al
    X86_AT(c, 0xc3d61u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c3d63  je 0xc3d57
    X86_AT(c, 0xc3d63u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3d57u); goto L_c3d57; }
    X86_TICK(c, 7);
    // 0c3d65  jmp 0xc3eab
    X86_AT(c, 0xc3d65u);
    goto L_c3eab;
L_c3d6a:
    X86_TICK(c, 13);
    // 0c3d6a  push 3
    X86_AT(c, 0xc3d6au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3d6c  push 0x1f
    X86_AT(c, 0xc3d6cu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c3d6e  push 4
    X86_AT(c, 0xc3d6eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d70  call 0xbc174
    X86_AT(c, 0xc3d70u);
    push32(c, 0xc3d75u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3d75u);
    X86_TICK(c, 27);
    // 0c3d75  movzx ebx, bl
    X86_AT(c, 0xc3d75u);
    c.r[3] = g8(c, 3);
    // 0c3d78  mov eax, ebx
    X86_AT(c, 0xc3d78u);
    c.r[0] = c.r[3];
    // 0c3d7a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3d7au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3d7d  shl edx, 5
    X86_AT(c, 0xc3d7du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3d80  add edx, eax
    X86_AT(c, 0xc3d80u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3d82  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3d82u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3d85  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc3d85u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c3d8c  push eax
    X86_AT(c, 0xc3d8cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3d8d  push 4
    X86_AT(c, 0xc3d8du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d8f  call 0xbbfe0
    X86_AT(c, 0xc3d8fu);
    push32(c, 0xc3d94u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc3d94u);
    X86_TICK(c, 11);
    // 0c3d94  push 0x3cdc
    X86_AT(c, 0xc3d94u);
    { uint32_t v = 0x3CDCu; push32(c, v); }
    // 0c3d99  push 4
    X86_AT(c, 0xc3d99u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3d9b  call 0xba428
    X86_AT(c, 0xc3d9bu);
    push32(c, 0xc3da0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3da0u);
    X86_TICK(c, 9);
    // 0c3da0  push 0x3d20
    X86_AT(c, 0xc3da0u);
    { uint32_t v = 0x3D20u; push32(c, v); }
    // 0c3da5  call 0xbc50c
    X86_AT(c, 0xc3da5u);
    push32(c, 0xc3daau); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3daau);
    X86_TICK(c, 2);
    // 0c3daa  add esp, 0x20
    X86_AT(c, 0xc3daau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_c3dad:
    X86_TICK(c, 9);
    // 0c3dad  push 4
    X86_AT(c, 0xc3dadu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3daf  call 0xb9930
    X86_AT(c, 0xc3dafu);
    push32(c, 0xc3db4u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3db4u);
    X86_TICK(c, 11);
    // 0c3db4  mov byte ptr [ebp - 0xa71], al
    X86_AT(c, 0xc3db4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF58Fu)), g8(c, 0));
    // 0c3dba  add esp, 4
    X86_AT(c, 0xc3dbau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3dbd  cmp al, 0x59
    X86_AT(c, 0xc3dbdu);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0c3dbf  je 0xc3dc9
    X86_AT(c, 0xc3dbfu);
    if (x86_cc(c, 4)) { goto L_c3dc9; }
    X86_TICK(c, 7);
    // 0c3dc1  cmp al, 0x4e
    X86_AT(c, 0xc3dc1u);
    (void)x86_sub(c, g8(c, 0), 0x4Eu, 0, 1);
    // 0c3dc3  je 0xc3dc9
    X86_AT(c, 0xc3dc3u);
    if (x86_cc(c, 4)) { goto L_c3dc9; }
    X86_TICK(c, 7);
    // 0c3dc5  dec al
    X86_AT(c, 0xc3dc5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0c3dc7  jne 0xc3dad
    X86_AT(c, 0xc3dc7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3dadu); goto L_c3dad; }
L_c3dc9:
    X86_TICK(c, 9);
    // 0c3dc9  push 2
    X86_AT(c, 0xc3dc9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3dcb  call 0xbbb5c
    X86_AT(c, 0xc3dcbu);
    push32(c, 0xc3dd0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc3dd0u);
    X86_TICK(c, 9);
    // 0c3dd0  push 4
    X86_AT(c, 0xc3dd0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3dd2  call 0xbb6b0
    X86_AT(c, 0xc3dd2u);
    push32(c, 0xc3dd7u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3dd7u);
    X86_TICK(c, 14);
    // 0c3dd7  add esp, 8
    X86_AT(c, 0xc3dd7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c3dda  cmp byte ptr [ebp - 0xa71], 0x59
    X86_AT(c, 0xc3ddau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF58Fu))), 0x59u, 0, 1);
    // 0c3de1  jne 0xc3c33
    X86_AT(c, 0xc3de1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3c33u); goto L_c3c33; }
L_c3de7:
    X86_TICK(c, 9);
    // 0c3de7  push 0
    X86_AT(c, 0xc3de7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3de9  call 0xb6d38
    X86_AT(c, 0xc3de9u);
    push32(c, 0xc3deeu); x86_call_known(c, 0xb6d38u, f_000b6d38); X86_RET(c, 0xc3deeu);
    X86_TICK(c, 12);
    // 0c3dee  xchg esi, eax
    X86_AT(c, 0xc3deeu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c3def  push 4
    X86_AT(c, 0xc3defu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3df1  call 0xbb6b0
    X86_AT(c, 0xc3df1u);
    push32(c, 0xc3df6u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3df6u);
    X86_TICK(c, 9);
    // 0c3df6  add esp, 8
    X86_AT(c, 0xc3df6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c3df9  cmp esi, 0xffffffff
    X86_AT(c, 0xc3df9u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c3dfc  je 0xc3e07
    X86_AT(c, 0xc3dfcu);
    if (x86_cc(c, 4)) { goto L_c3e07; }
    X86_TICK(c, 7);
    // 0c3dfe  and esi, esi
    X86_AT(c, 0xc3dfeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c3e00  je 0xc3e07
    X86_AT(c, 0xc3e00u);
    if (x86_cc(c, 4)) { goto L_c3e07; }
    X86_TICK(c, 7);
    // 0c3e02  cmp esi, 1
    X86_AT(c, 0xc3e02u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0c3e05  jne 0xc3de7
    X86_AT(c, 0xc3e05u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3de7u); goto L_c3de7; }
L_c3e07:
    X86_TICK(c, 7);
    // 0c3e07  and esi, esi
    X86_AT(c, 0xc3e07u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c3e09  jne 0xc3c33
    X86_AT(c, 0xc3e09u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3c33u); goto L_c3c33; }
    X86_TICK(c, 27);
    // 0c3e0f  movzx edi, bl
    X86_AT(c, 0xc3e0fu);
    c.r[7] = g8(c, 3);
    // 0c3e12  mov eax, edi
    X86_AT(c, 0xc3e12u);
    c.r[0] = c.r[7];
    // 0c3e14  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3e14u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3e17  shl edx, 5
    X86_AT(c, 0xc3e17u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3e1a  add edx, eax
    X86_AT(c, 0xc3e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3e1c  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3e1cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3e1f  mov byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc3e1fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu)), 0x0u);
    // 0c3e26  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc3e26u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c3e30  mov dword ptr [ebp - 0xa78], edx
    X86_AT(c, 0xc3e30u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF588u)), c.r[2]);
    // 0c3e36  call 0xc1060
    X86_AT(c, 0xc3e36u);
    push32(c, 0xc3e3bu); x86_call_known(c, 0xc1060u, f_000c1060); X86_RET(c, 0xc3e3bu);
    X86_TICK(c, 31);
    // 0c3e3b  mov eax, edi
    X86_AT(c, 0xc3e3bu);
    c.r[0] = c.r[7];
    // 0c3e3d  add al, 0x41
    X86_AT(c, 0xc3e3du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0c3e3f  push eax
    X86_AT(c, 0xc3e3fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3e40  mov edx, dword ptr [ebp - 0xa78]
    X86_AT(c, 0xc3e40u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF588u)));
    // 0c3e46  lea ecx, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc3e46u);
    c.r[1] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c3e4d  push ecx
    X86_AT(c, 0xc3e4du);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c3e4e  push ecx
    X86_AT(c, 0xc3e4eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c3e4f  push eax
    X86_AT(c, 0xc3e4fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3e50  push edi
    X86_AT(c, 0xc3e50u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c3e51  lea eax, [ebp - 0xa70]
    X86_AT(c, 0xc3e51u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFF590u);
    // 0c3e57  push eax
    X86_AT(c, 0xc3e57u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3e58  call 0xb9ed8
    X86_AT(c, 0xc3e58u);
    push32(c, 0xc3e5du); x86_call_known(c, 0xb9ed8u, f_000b9ed8); X86_RET(c, 0xc3e5du);
    X86_TICK(c, 19);
    // 0c3e5d  lea eax, [edi + 4]
    X86_AT(c, 0xc3e5du);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0c3e60  push eax
    X86_AT(c, 0xc3e60u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3e61  push 0x4d
    X86_AT(c, 0xc3e61u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c3e63  push eax
    X86_AT(c, 0xc3e63u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3e64  push 7
    X86_AT(c, 0xc3e64u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c3e66  push 4
    X86_AT(c, 0xc3e66u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3e68  call 0xbc2b0
    X86_AT(c, 0xc3e68u);
    push32(c, 0xc3e6du); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc3e6du);
    X86_TICK(c, 11);
    // 0c3e6d  lea eax, [ebp - 0x20]
    X86_AT(c, 0xc3e6du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0c3e70  push eax
    X86_AT(c, 0xc3e70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3e71  call 0xba07c
    X86_AT(c, 0xc3e71u);
    push32(c, 0xc3e76u); x86_call_known(c, 0xba07cu, f_000ba07c); X86_RET(c, 0xc3e76u);
    X86_TICK(c, 13);
    // 0c3e76  push 3
    X86_AT(c, 0xc3e76u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3e78  push 0x1f
    X86_AT(c, 0xc3e78u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c3e7a  push 4
    X86_AT(c, 0xc3e7au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3e7c  call 0xbc174
    X86_AT(c, 0xc3e7cu);
    push32(c, 0xc3e81u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3e81u);
    X86_TICK(c, 13);
    // 0c3e81  add esp, 0x3c
    X86_AT(c, 0xc3e81u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c3e84  push 0x3d4c
    X86_AT(c, 0xc3e84u);
    { uint32_t v = 0x3D4Cu; push32(c, v); }
    // 0c3e89  push 4
    X86_AT(c, 0xc3e89u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3e8b  call 0xba428
    X86_AT(c, 0xc3e8bu);
    push32(c, 0xc3e90u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3e90u);
    X86_TICK(c, 9);
    // 0c3e90  push 0x3da4
    X86_AT(c, 0xc3e90u);
    { uint32_t v = 0x3DA4u; push32(c, v); }
    // 0c3e95  call 0xbc50c
    X86_AT(c, 0xc3e95u);
    push32(c, 0xc3e9au); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3e9au);
    X86_TICK(c, 2);
    // 0c3e9a  add esp, 0xc
    X86_AT(c, 0xc3e9au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c3e9d:
    X86_TICK(c, 9);
    // 0c3e9d  push 4
    X86_AT(c, 0xc3e9du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3e9f  call 0xb9930
    X86_AT(c, 0xc3e9fu);
    push32(c, 0xc3ea4u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3ea4u);
    X86_TICK(c, 9);
    // 0c3ea4  add esp, 4
    X86_AT(c, 0xc3ea4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3ea7  and al, al
    X86_AT(c, 0xc3ea7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c3ea9  je 0xc3e9d
    X86_AT(c, 0xc3ea9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3e9du); goto L_c3e9d; }
L_c3eab:
    X86_TICK(c, 9);
    // 0c3eab  push 2
    X86_AT(c, 0xc3eabu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3ead  call 0xbbb5c
    X86_AT(c, 0xc3eadu);
    push32(c, 0xc3eb2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc3eb2u);
    X86_TICK(c, 9);
    // 0c3eb2  push 4
    X86_AT(c, 0xc3eb2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3eb4  call 0xbb6b0
    X86_AT(c, 0xc3eb4u);
    push32(c, 0xc3eb9u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3eb9u);
    X86_TICK(c, 9);
    // 0c3eb9  add esp, 8
    X86_AT(c, 0xc3eb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c3ebc  jmp 0xc3c33
    X86_AT(c, 0xc3ebcu);
    X86_POLL(c, 0xc3c33u); goto L_c3c33;
L_c3ec1:
    X86_TICK(c, 28);
    // 0c3ec1  pop edi
    X86_AT(c, 0xc3ec1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c3ec2  pop esi
    X86_AT(c, 0xc3ec2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c3ec3  pop ebx
    X86_AT(c, 0xc3ec3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c3ec4  leave 
    X86_AT(c, 0xc3ec4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c3ec5  ret 
    X86_AT(c, 0xc3ec5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc3eabu, "ran off the end of a function");
}
void f_000c3ec8(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0c3ec8  push ebp
    X86_AT(c, 0xc3ec8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c3ec9  mov ebp, esp
    X86_AT(c, 0xc3ec9u);
    c.r[5] = c.r[4];
    // 0c3ecb  push eax
    X86_AT(c, 0xc3ecbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3ecc  push ebx
    X86_AT(c, 0xc3eccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c3ecd  push esi
    X86_AT(c, 0xc3ecdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c3ece  push edi
    X86_AT(c, 0xc3eceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c3ecf  push 4
    X86_AT(c, 0xc3ecfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3ed1  push 0x4d
    X86_AT(c, 0xc3ed1u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c3ed3  push 3
    X86_AT(c, 0xc3ed3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3ed5  push 0
    X86_AT(c, 0xc3ed5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3ed7  push 4
    X86_AT(c, 0xc3ed7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3ed9  call 0xbc2b0
    X86_AT(c, 0xc3ed9u);
    push32(c, 0xc3edeu); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc3edeu);
    X86_TICK(c, 13);
    // 0c3ede  push 3
    X86_AT(c, 0xc3edeu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3ee0  push 0
    X86_AT(c, 0xc3ee0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3ee2  push 4
    X86_AT(c, 0xc3ee2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3ee4  call 0xbc174
    X86_AT(c, 0xc3ee4u);
    push32(c, 0xc3ee9u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3ee9u);
    X86_TICK(c, 11);
    // 0c3ee9  push 0x3dd8
    X86_AT(c, 0xc3ee9u);
    { uint32_t v = 0x3DD8u; push32(c, v); }
    // 0c3eee  push 4
    X86_AT(c, 0xc3eeeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3ef0  call 0xba428
    X86_AT(c, 0xc3ef0u);
    push32(c, 0xc3ef5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3ef5u);
    X86_TICK(c, 2);
    // 0c3ef5  add esp, 0x28
    X86_AT(c, 0xc3ef5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_c3ef8:
    X86_TICK(c, 17);
    // 0c3ef8  push 0x17
    X86_AT(c, 0xc3ef8u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c3efa  push 0x4d
    X86_AT(c, 0xc3efau);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c3efc  push 4
    X86_AT(c, 0xc3efcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3efe  push 0
    X86_AT(c, 0xc3efeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3f00  push 4
    X86_AT(c, 0xc3f00u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f02  call 0xbc2b0
    X86_AT(c, 0xc3f02u);
    push32(c, 0xc3f07u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc3f07u);
    X86_TICK(c, 13);
    // 0c3f07  push 4
    X86_AT(c, 0xc3f07u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f09  push 0
    X86_AT(c, 0xc3f09u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3f0b  push 4
    X86_AT(c, 0xc3f0bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f0d  call 0xbc174
    X86_AT(c, 0xc3f0du);
    push32(c, 0xc3f12u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3f12u);
    X86_TICK(c, 11);
    // 0c3f12  push 0xa68e8
    X86_AT(c, 0xc3f12u);
    { uint32_t v = 0xA68E8u; push32(c, v); }
    // 0c3f17  push 4
    X86_AT(c, 0xc3f17u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f19  call 0xba428
    X86_AT(c, 0xc3f19u);
    push32(c, 0xc3f1eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3f1eu);
    X86_TICK(c, 2);
    // 0c3f1e  add esp, 0x28
    X86_AT(c, 0xc3f1eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_c3f21:
    X86_TICK(c, 13);
    // 0c3f21  push 4
    X86_AT(c, 0xc3f21u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f23  push 0x18
    X86_AT(c, 0xc3f23u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0c3f25  push 4
    X86_AT(c, 0xc3f25u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f27  call 0xbc174
    X86_AT(c, 0xc3f27u);
    push32(c, 0xc3f2cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3f2cu);
    X86_TICK(c, 9);
    // 0c3f2c  push 4
    X86_AT(c, 0xc3f2cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f2e  call 0xbc480
    X86_AT(c, 0xc3f2eu);
    push32(c, 0xc3f33u); x86_call_known(c, 0xbc480u, f_000bc480); X86_RET(c, 0xc3f33u);
    X86_TICK(c, 11);
    // 0c3f33  push 0xe
    X86_AT(c, 0xc3f33u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3f35  push 4
    X86_AT(c, 0xc3f35u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f37  call 0xbc3ec
    X86_AT(c, 0xc3f37u);
    push32(c, 0xc3f3cu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3f3cu);
    X86_TICK(c, 9);
    // 0c3f3c  push 4
    X86_AT(c, 0xc3f3cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f3e  call 0xbb6b0
    X86_AT(c, 0xc3f3eu);
    push32(c, 0xc3f43u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3f43u);
    X86_TICK(c, 9);
    // 0c3f43  push 4
    X86_AT(c, 0xc3f43u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f45  call 0xb6308
    X86_AT(c, 0xc3f45u);
    push32(c, 0xc3f4au); x86_call_known(c, 0xb6308u, f_000b6308); X86_RET(c, 0xc3f4au);
    X86_TICK(c, 14);
    // 0c3f4a  xchg edi, eax
    X86_AT(c, 0xc3f4au);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c3f4b  push 0xb
    X86_AT(c, 0xc3f4bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c3f4d  push 4
    X86_AT(c, 0xc3f4du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f4f  call 0xbc3ec
    X86_AT(c, 0xc3f4fu);
    push32(c, 0xc3f54u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3f54u);
    X86_TICK(c, 9);
    // 0c3f54  push 4
    X86_AT(c, 0xc3f54u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f56  call 0xbb6b0
    X86_AT(c, 0xc3f56u);
    push32(c, 0xc3f5bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3f5bu);
    X86_TICK(c, 9);
    // 0c3f5b  add esp, 0x2c
    X86_AT(c, 0xc3f5bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0c3f5e  cmp edi, 0xffffffff
    X86_AT(c, 0xc3f5eu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c3f61  je 0xc3f67
    X86_AT(c, 0xc3f61u);
    if (x86_cc(c, 4)) { goto L_c3f67; }
    X86_TICK(c, 7);
    // 0c3f63  and edi, edi
    X86_AT(c, 0xc3f63u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c3f65  jne 0xc3fcb
    X86_AT(c, 0xc3f65u);
    if (x86_cc(c, 5)) { goto L_c3fcb; }
L_c3f67:
    X86_TICK(c, 13);
    // 0c3f67  push 4
    X86_AT(c, 0xc3f67u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f69  push 0
    X86_AT(c, 0xc3f69u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3f6b  push 4
    X86_AT(c, 0xc3f6bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f6d  call 0xbc174
    X86_AT(c, 0xc3f6du);
    push32(c, 0xc3f72u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3f72u);
    X86_TICK(c, 11);
    // 0c3f72  push 0xa68e8
    X86_AT(c, 0xc3f72u);
    { uint32_t v = 0xA68E8u; push32(c, v); }
    // 0c3f77  push 4
    X86_AT(c, 0xc3f77u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f79  call 0xba428
    X86_AT(c, 0xc3f79u);
    push32(c, 0xc3f7eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3f7eu);
    X86_TICK(c, 13);
    // 0c3f7e  push 4
    X86_AT(c, 0xc3f7eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f80  push 0x18
    X86_AT(c, 0xc3f80u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0c3f82  push 4
    X86_AT(c, 0xc3f82u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f84  call 0xbc174
    X86_AT(c, 0xc3f84u);
    push32(c, 0xc3f89u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3f89u);
    X86_TICK(c, 13);
    // 0c3f89  push 2
    X86_AT(c, 0xc3f89u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3f8b  push edi
    X86_AT(c, 0xc3f8bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c3f8c  push 4
    X86_AT(c, 0xc3f8cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f8e  call 0xba404
    X86_AT(c, 0xc3f8eu);
    push32(c, 0xc3f93u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3f93u);
    X86_TICK(c, 13);
    // 0c3f93  push 4
    X86_AT(c, 0xc3f93u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f95  push 0x1d
    X86_AT(c, 0xc3f95u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0c3f97  push 4
    X86_AT(c, 0xc3f97u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f99  call 0xbc174
    X86_AT(c, 0xc3f99u);
    push32(c, 0xc3f9eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3f9eu);
    X86_TICK(c, 11);
    // 0c3f9e  push 0xa697c
    X86_AT(c, 0xc3f9eu);
    { uint32_t v = 0xA697Cu; push32(c, v); }
    // 0c3fa3  push 4
    X86_AT(c, 0xc3fa3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3fa5  call 0xba428
    X86_AT(c, 0xc3fa5u);
    push32(c, 0xc3faau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3faau);
    X86_TICK(c, 19);
    // 0c3faa  add esp, 0x40
    X86_AT(c, 0xc3faau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c3fad  push 0x17
    X86_AT(c, 0xc3fadu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c3faf  push 0x4d
    X86_AT(c, 0xc3fafu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c3fb1  push 3
    X86_AT(c, 0xc3fb1u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3fb3  push 0
    X86_AT(c, 0xc3fb3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3fb5  push 4
    X86_AT(c, 0xc3fb5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3fb7  call 0xbc2b0
    X86_AT(c, 0xc3fb7u);
    push32(c, 0xc3fbcu); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc3fbcu);
    X86_TICK(c, 9);
    // 0c3fbc  push 4
    X86_AT(c, 0xc3fbcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3fbe  call 0xbc498
    X86_AT(c, 0xc3fbeu);
    push32(c, 0xc3fc3u); x86_call_known(c, 0xbc498u, f_000bc498); X86_RET(c, 0xc3fc3u);
    X86_TICK(c, 9);
    // 0c3fc3  add esp, 0x18
    X86_AT(c, 0xc3fc3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c3fc6  jmp 0xc4402
    X86_AT(c, 0xc3fc6u);
    goto L_c4402;
L_c3fcb:
    X86_TICK(c, 7);
    // 0c3fcb  cmp edi, 0x14
    X86_AT(c, 0xc3fcbu);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c3fce  jg 0xc3fd4
    X86_AT(c, 0xc3fceu);
    if (x86_cc(c, 15)) { goto L_c3fd4; }
    X86_TICK(c, 7);
    // 0c3fd0  and edi, edi
    X86_AT(c, 0xc3fd0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c3fd2  jg 0xc401c
    X86_AT(c, 0xc3fd2u);
    if (x86_cc(c, 15)) { goto L_c401c; }
L_c3fd4:
    X86_TICK(c, 13);
    // 0c3fd4  push 4
    X86_AT(c, 0xc3fd4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3fd6  push 0x18
    X86_AT(c, 0xc3fd6u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0c3fd8  push 4
    X86_AT(c, 0xc3fd8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3fda  call 0xbc174
    X86_AT(c, 0xc3fdau);
    push32(c, 0xc3fdfu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3fdfu);
    X86_TICK(c, 11);
    // 0c3fdf  push 0xa6928
    X86_AT(c, 0xc3fdfu);
    { uint32_t v = 0xA6928u; push32(c, v); }
    // 0c3fe4  push 4
    X86_AT(c, 0xc3fe4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3fe6  call 0xba428
    X86_AT(c, 0xc3fe6u);
    push32(c, 0xc3febu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3febu);
    X86_TICK(c, 9);
    // 0c3feb  push 0x3e18
    X86_AT(c, 0xc3febu);
    { uint32_t v = 0x3E18u; push32(c, v); }
    // 0c3ff0  call 0xbc50c
    X86_AT(c, 0xc3ff0u);
    push32(c, 0xc3ff5u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3ff5u);
    X86_TICK(c, 2);
    // 0c3ff5  add esp, 0x18
    X86_AT(c, 0xc3ff5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c3ff8:
    X86_TICK(c, 9);
    // 0c3ff8  push 4
    X86_AT(c, 0xc3ff8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3ffa  call 0xb9930
    X86_AT(c, 0xc3ffau);
    push32(c, 0xc3fffu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3fffu);
    X86_TICK(c, 9);
    // 0c3fff  add esp, 4
    X86_AT(c, 0xc3fffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4002  and al, al
    X86_AT(c, 0xc4002u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c4004  je 0xc3ff8
    X86_AT(c, 0xc4004u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3ff8u); goto L_c3ff8; }
    X86_TICK(c, 9);
    // 0c4006  push 2
    X86_AT(c, 0xc4006u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4008  call 0xbbb5c
    X86_AT(c, 0xc4008u);
    push32(c, 0xc400du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc400du);
    X86_TICK(c, 9);
    // 0c400d  push 4
    X86_AT(c, 0xc400du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c400f  call 0xbb6b0
    X86_AT(c, 0xc400fu);
    push32(c, 0xc4014u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4014u);
    X86_TICK(c, 9);
    // 0c4014  add esp, 8
    X86_AT(c, 0xc4014u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c4017  jmp 0xc3f21
    X86_AT(c, 0xc4017u);
    X86_POLL(c, 0xc3f21u); goto L_c3f21;
L_c401c:
    X86_TICK(c, 11);
    // 0c401c  push 0xb
    X86_AT(c, 0xc401cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c401e  push 4
    X86_AT(c, 0xc401eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4020  call 0xbc3ec
    X86_AT(c, 0xc4020u);
    push32(c, 0xc4025u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc4025u);
    X86_TICK(c, 9);
    // 0c4025  push 4
    X86_AT(c, 0xc4025u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4027  call 0xbb6b0
    X86_AT(c, 0xc4027u);
    push32(c, 0xc402cu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc402cu);
    X86_TICK(c, 9);
    // 0c402c  push 4
    X86_AT(c, 0xc402cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c402e  call 0xbc498
    X86_AT(c, 0xc402eu);
    push32(c, 0xc4033u); x86_call_known(c, 0xbc498u, f_000bc498); X86_RET(c, 0xc4033u);
    X86_TICK(c, 25);
    // 0c4033  mov eax, edi
    X86_AT(c, 0xc4033u);
    c.r[0] = c.r[7];
    // 0c4035  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4035u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4038  shl edx, 5
    X86_AT(c, 0xc4038u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c403b  add edx, eax
    X86_AT(c, 0xc403bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c403d  lea edx, [eax + edx*2]
    X86_AT(c, 0xc403du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4040  add esp, 0x10
    X86_AT(c, 0xc4040u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c4043  cmp byte ptr [edx + 0xa4ce9], 0
    X86_AT(c, 0xc4043u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4CE9u))), 0x0u, 0, 1);
    // 0c404a  jne 0xc40ab
    X86_AT(c, 0xc404au);
    if (x86_cc(c, 5)) { goto L_c40ab; }
    X86_TICK(c, 13);
    // 0c404c  push 4
    X86_AT(c, 0xc404cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c404e  push 0
    X86_AT(c, 0xc404eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4050  push 4
    X86_AT(c, 0xc4050u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4052  call 0xbc174
    X86_AT(c, 0xc4052u);
    push32(c, 0xc4057u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4057u);
    X86_TICK(c, 11);
    // 0c4057  push 0xa68e8
    X86_AT(c, 0xc4057u);
    { uint32_t v = 0xA68E8u; push32(c, v); }
    // 0c405c  push 4
    X86_AT(c, 0xc405cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c405e  call 0xba428
    X86_AT(c, 0xc405eu);
    push32(c, 0xc4063u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4063u);
    X86_TICK(c, 13);
    // 0c4063  push 4
    X86_AT(c, 0xc4063u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4065  push 0x18
    X86_AT(c, 0xc4065u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0c4067  push 4
    X86_AT(c, 0xc4067u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4069  call 0xbc174
    X86_AT(c, 0xc4069u);
    push32(c, 0xc406eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc406eu);
    X86_TICK(c, 11);
    // 0c406e  push 0x3e4c
    X86_AT(c, 0xc406eu);
    { uint32_t v = 0x3E4Cu; push32(c, v); }
    // 0c4073  push 4
    X86_AT(c, 0xc4073u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4075  call 0xba428
    X86_AT(c, 0xc4075u);
    push32(c, 0xc407au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc407au);
    X86_TICK(c, 9);
    // 0c407a  push 0x3e94
    X86_AT(c, 0xc407au);
    { uint32_t v = 0x3E94u; push32(c, v); }
    // 0c407f  call 0xbc50c
    X86_AT(c, 0xc407fu);
    push32(c, 0xc4084u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc4084u);
    X86_TICK(c, 2);
    // 0c4084  add esp, 0x2c
    X86_AT(c, 0xc4084u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_c4087:
    X86_TICK(c, 9);
    // 0c4087  push 4
    X86_AT(c, 0xc4087u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4089  call 0xb9930
    X86_AT(c, 0xc4089u);
    push32(c, 0xc408eu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc408eu);
    X86_TICK(c, 9);
    // 0c408e  add esp, 4
    X86_AT(c, 0xc408eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4091  and al, al
    X86_AT(c, 0xc4091u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c4093  je 0xc4087
    X86_AT(c, 0xc4093u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc4087u); goto L_c4087; }
    X86_TICK(c, 9);
    // 0c4095  push 2
    X86_AT(c, 0xc4095u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4097  call 0xbbb5c
    X86_AT(c, 0xc4097u);
    push32(c, 0xc409cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc409cu);
    X86_TICK(c, 9);
    // 0c409c  push 4
    X86_AT(c, 0xc409cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c409e  call 0xbb6b0
    X86_AT(c, 0xc409eu);
    push32(c, 0xc40a3u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc40a3u);
    X86_TICK(c, 9);
    // 0c40a3  add esp, 8
    X86_AT(c, 0xc40a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c40a6  jmp 0xc3ef8
    X86_AT(c, 0xc40a6u);
    X86_POLL(c, 0xc3ef8u); goto L_c3ef8;
L_c40ab:
    X86_TICK(c, 13);
    // 0c40ab  push 4
    X86_AT(c, 0xc40abu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c40ad  push 0
    X86_AT(c, 0xc40adu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c40af  push 4
    X86_AT(c, 0xc40afu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c40b1  call 0xbc174
    X86_AT(c, 0xc40b1u);
    push32(c, 0xc40b6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc40b6u);
    X86_TICK(c, 11);
    // 0c40b6  push 0xa68e8
    X86_AT(c, 0xc40b6u);
    { uint32_t v = 0xA68E8u; push32(c, v); }
    // 0c40bb  push 4
    X86_AT(c, 0xc40bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c40bd  call 0xba428
    X86_AT(c, 0xc40bdu);
    push32(c, 0xc40c2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc40c2u);
    X86_TICK(c, 13);
    // 0c40c2  push 4
    X86_AT(c, 0xc40c2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c40c4  push 0x18
    X86_AT(c, 0xc40c4u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0c40c6  push 4
    X86_AT(c, 0xc40c6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c40c8  call 0xbc174
    X86_AT(c, 0xc40c8u);
    push32(c, 0xc40cdu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc40cdu);
    X86_TICK(c, 13);
    // 0c40cd  push 2
    X86_AT(c, 0xc40cdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c40cf  push edi
    X86_AT(c, 0xc40cfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c40d0  push 4
    X86_AT(c, 0xc40d0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c40d2  call 0xba404
    X86_AT(c, 0xc40d2u);
    push32(c, 0xc40d7u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc40d7u);
    X86_TICK(c, 27);
    // 0c40d7  dec edi
    X86_AT(c, 0xc40d7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0c40d8  mov eax, edi
    X86_AT(c, 0xc40d8u);
    c.r[0] = c.r[7];
    // 0c40da  lea edx, [eax + eax*2]
    X86_AT(c, 0xc40dau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c40dd  shl edx, 5
    X86_AT(c, 0xc40ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c40e0  add edx, eax
    X86_AT(c, 0xc40e0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c40e2  lea edx, [eax + edx*2]
    X86_AT(c, 0xc40e2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c40e5  add esp, 0x2c
    X86_AT(c, 0xc40e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0c40e8  cmp dword ptr [edx + 0xa4dc5], 0
    X86_AT(c, 0xc40e8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u))), 0x0u, 0, 4);
    // 0c40ef  jne 0xc411a
    X86_AT(c, 0xc40efu);
    if (x86_cc(c, 5)) { goto L_c411a; }
    X86_TICK(c, 2);
    // 0c40f1  sub esi, esi
    X86_AT(c, 0xc40f1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c40f3:
    X86_TICK(c, 7);
    // 0c40f3  cmp esi, 4
    X86_AT(c, 0xc40f3u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0c40f6  jge 0xc4104
    X86_AT(c, 0xc40f6u);
    if (x86_cc(c, 13)) { goto L_c4104; }
    X86_TICK(c, 11);
    // 0c40f8  cmp edi, dword ptr [esi*4 + 0xa4a7e]
    X86_AT(c, 0xc40f8u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA4A7Eu))), 0, 4);
    // 0c40ff  je 0xc4104
    X86_AT(c, 0xc40ffu);
    if (x86_cc(c, 4)) { goto L_c4104; }
    X86_TICK(c, 9);
    // 0c4101  inc esi
    X86_AT(c, 0xc4101u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c4102  jmp 0xc40f3
    X86_AT(c, 0xc4102u);
    X86_POLL(c, 0xc40f3u); goto L_c40f3;
L_c4104:
    X86_TICK(c, 20);
    // 0c4104  mov eax, esi
    X86_AT(c, 0xc4104u);
    c.r[0] = c.r[6];
    // 0c4106  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4106u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4109  shl edx, 5
    X86_AT(c, 0xc4109u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c410c  add edx, eax
    X86_AT(c, 0xc410cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c410e  lea edx, [eax + edx*2]
    X86_AT(c, 0xc410eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4111  lea ebx, [edx*1 + 0xa4aa0]
    X86_AT(c, 0xc4111u);
    c.r[3] = (uint32_t)(c.r[2] + 0xA4AA0u);
    // 0c4118  jmp 0xc412e
    X86_AT(c, 0xc4118u);
    goto L_c412e;
L_c411a:
    X86_TICK(c, 13);
    // 0c411a  mov eax, edi
    X86_AT(c, 0xc411au);
    c.r[0] = c.r[7];
    // 0c411c  lea edx, [eax + eax*2]
    X86_AT(c, 0xc411cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c411f  shl edx, 5
    X86_AT(c, 0xc411fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4122  add edx, eax
    X86_AT(c, 0xc4122u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4124  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4124u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4127  lea ebx, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc4127u);
    c.r[3] = (uint32_t)(c.r[2] + 0xA4DACu);
L_c412e:
    X86_TICK(c, 15);
    // 0c412e  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xc412eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0c4132  push 5
    X86_AT(c, 0xc4132u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c4134  push 0xb
    X86_AT(c, 0xc4134u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4136  push 4
    X86_AT(c, 0xc4136u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4138  call 0xbc174
    X86_AT(c, 0xc4138u);
    push32(c, 0xc413du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc413du);
    X86_TICK(c, 11);
    // 0c413d  push 0x3ec8
    X86_AT(c, 0xc413du);
    { uint32_t v = 0x3EC8u; push32(c, v); }
    // 0c4142  push 4
    X86_AT(c, 0xc4142u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4144  call 0xba428
    X86_AT(c, 0xc4144u);
    push32(c, 0xc4149u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4149u);
    X86_TICK(c, 11);
    // 0c4149  push ebx
    X86_AT(c, 0xc4149u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c414a  push 4
    X86_AT(c, 0xc414au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c414c  call 0xbbfe0
    X86_AT(c, 0xc414cu);
    push32(c, 0xc4151u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc4151u);
    X86_TICK(c, 13);
    // 0c4151  push 6
    X86_AT(c, 0xc4151u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c4153  push 0xb
    X86_AT(c, 0xc4153u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4155  push 4
    X86_AT(c, 0xc4155u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4157  call 0xbc174
    X86_AT(c, 0xc4157u);
    push32(c, 0xc415cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc415cu);
    X86_TICK(c, 11);
    // 0c415c  push 0x3f00
    X86_AT(c, 0xc415cu);
    { uint32_t v = 0x3F00u; push32(c, v); }
    // 0c4161  push 4
    X86_AT(c, 0xc4161u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4163  call 0xba428
    X86_AT(c, 0xc4163u);
    push32(c, 0xc4168u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4168u);
    X86_TICK(c, 21);
    // 0c4168  lea eax, [ebp - 1]
    X86_AT(c, 0xc4168u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c416b  push eax
    X86_AT(c, 0xc416bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c416c  mov dl, byte ptr [ebx + 0x30]
    X86_AT(c, 0xc416cu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x30u))));
    // 0c416f  push edx
    X86_AT(c, 0xc416fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c4170  push 3
    X86_AT(c, 0xc4170u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4172  push 0xa804c
    X86_AT(c, 0xc4172u);
    { uint32_t v = 0xA804Cu; push32(c, v); }
    // 0c4177  call 0xba1b4
    X86_AT(c, 0xc4177u);
    push32(c, 0xc417cu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc417cu);
    X86_TICK(c, 13);
    // 0c417c  add esp, 0x40
    X86_AT(c, 0xc417cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c417f  push eax
    X86_AT(c, 0xc417fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4180  push 4
    X86_AT(c, 0xc4180u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4182  call 0xbbba4
    X86_AT(c, 0xc4182u);
    push32(c, 0xc4187u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc4187u);
    X86_TICK(c, 13);
    // 0c4187  push 7
    X86_AT(c, 0xc4187u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c4189  push 0xb
    X86_AT(c, 0xc4189u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c418b  push 4
    X86_AT(c, 0xc418bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c418d  call 0xbc174
    X86_AT(c, 0xc418du);
    push32(c, 0xc4192u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4192u);
    X86_TICK(c, 11);
    // 0c4192  push 0x3f38
    X86_AT(c, 0xc4192u);
    { uint32_t v = 0x3F38u; push32(c, v); }
    // 0c4197  push 4
    X86_AT(c, 0xc4197u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4199  call 0xba428
    X86_AT(c, 0xc4199u);
    push32(c, 0xc419eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc419eu);
    X86_TICK(c, 21);
    // 0c419e  lea eax, [ebp - 1]
    X86_AT(c, 0xc419eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c41a1  push eax
    X86_AT(c, 0xc41a1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c41a2  mov dl, byte ptr [ebx + 0x2e]
    X86_AT(c, 0xc41a2u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x2Eu))));
    // 0c41a5  push edx
    X86_AT(c, 0xc41a5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c41a6  push 5
    X86_AT(c, 0xc41a6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c41a8  push 0xa81d8
    X86_AT(c, 0xc41a8u);
    { uint32_t v = 0xA81D8u; push32(c, v); }
    // 0c41ad  call 0xba1b4
    X86_AT(c, 0xc41adu);
    push32(c, 0xc41b2u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc41b2u);
    X86_TICK(c, 11);
    // 0c41b2  push eax
    X86_AT(c, 0xc41b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c41b3  push 4
    X86_AT(c, 0xc41b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c41b5  call 0xbbba4
    X86_AT(c, 0xc41b5u);
    push32(c, 0xc41bau); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc41bau);
    X86_TICK(c, 13);
    // 0c41ba  push 8
    X86_AT(c, 0xc41bau);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c41bc  push 0xb
    X86_AT(c, 0xc41bcu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c41be  push 4
    X86_AT(c, 0xc41beu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c41c0  call 0xbc174
    X86_AT(c, 0xc41c0u);
    push32(c, 0xc41c5u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc41c5u);
    X86_TICK(c, 13);
    // 0c41c5  add esp, 0x40
    X86_AT(c, 0xc41c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c41c8  push 0x3f70
    X86_AT(c, 0xc41c8u);
    { uint32_t v = 0x3F70u; push32(c, v); }
    // 0c41cd  push 4
    X86_AT(c, 0xc41cdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c41cf  call 0xba428
    X86_AT(c, 0xc41cfu);
    push32(c, 0xc41d4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc41d4u);
    X86_TICK(c, 21);
    // 0c41d4  lea eax, [ebp - 1]
    X86_AT(c, 0xc41d4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c41d7  push eax
    X86_AT(c, 0xc41d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c41d8  mov al, byte ptr [ebx + 0x2f]
    X86_AT(c, 0xc41d8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x2Fu))));
    // 0c41db  push eax
    X86_AT(c, 0xc41dbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c41dc  push 0xb
    X86_AT(c, 0xc41dcu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c41de  push 0xa846c
    X86_AT(c, 0xc41deu);
    { uint32_t v = 0xA846Cu; push32(c, v); }
    // 0c41e3  call 0xba1b4
    X86_AT(c, 0xc41e3u);
    push32(c, 0xc41e8u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc41e8u);
    X86_TICK(c, 11);
    // 0c41e8  push eax
    X86_AT(c, 0xc41e8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c41e9  push 4
    X86_AT(c, 0xc41e9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c41eb  call 0xbbba4
    X86_AT(c, 0xc41ebu);
    push32(c, 0xc41f0u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc41f0u);
    X86_TICK(c, 15);
    // 0c41f0  add esp, 0x20
    X86_AT(c, 0xc41f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c41f3  push 9
    X86_AT(c, 0xc41f3u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c41f5  push 0xb
    X86_AT(c, 0xc41f5u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c41f7  push 4
    X86_AT(c, 0xc41f7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c41f9  call 0xbc174
    X86_AT(c, 0xc41f9u);
    push32(c, 0xc41feu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc41feu);
    X86_TICK(c, 11);
    // 0c41fe  push 0x3fa8
    X86_AT(c, 0xc41feu);
    { uint32_t v = 0x3FA8u; push32(c, v); }
    // 0c4203  push 4
    X86_AT(c, 0xc4203u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4205  call 0xba428
    X86_AT(c, 0xc4205u);
    push32(c, 0xc420au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc420au);
    X86_TICK(c, 21);
    // 0c420a  lea eax, [ebp - 1]
    X86_AT(c, 0xc420au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c420d  push eax
    X86_AT(c, 0xc420du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c420e  mov dl, byte ptr [ebx + 0x1d]
    X86_AT(c, 0xc420eu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du))));
    // 0c4211  push edx
    X86_AT(c, 0xc4211u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c4212  push 4
    X86_AT(c, 0xc4212u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4214  push 0xa699c
    X86_AT(c, 0xc4214u);
    { uint32_t v = 0xA699Cu; push32(c, v); }
    // 0c4219  call 0xba1b4
    X86_AT(c, 0xc4219u);
    push32(c, 0xc421eu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc421eu);
    X86_TICK(c, 11);
    // 0c421e  push eax
    X86_AT(c, 0xc421eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c421f  push 4
    X86_AT(c, 0xc421fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4221  call 0xbbba4
    X86_AT(c, 0xc4221u);
    push32(c, 0xc4226u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc4226u);
    X86_TICK(c, 13);
    // 0c4226  push 0xa
    X86_AT(c, 0xc4226u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c4228  push 0xb
    X86_AT(c, 0xc4228u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c422a  push 4
    X86_AT(c, 0xc422au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c422c  call 0xbc174
    X86_AT(c, 0xc422cu);
    push32(c, 0xc4231u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4231u);
    X86_TICK(c, 11);
    // 0c4231  push 0x3fe0
    X86_AT(c, 0xc4231u);
    { uint32_t v = 0x3FE0u; push32(c, v); }
    // 0c4236  push 4
    X86_AT(c, 0xc4236u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4238  call 0xba428
    X86_AT(c, 0xc4238u);
    push32(c, 0xc423du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc423du);
    X86_TICK(c, 23);
    // 0c423d  add esp, 0x40
    X86_AT(c, 0xc423du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c4240  lea eax, [ebp - 1]
    X86_AT(c, 0xc4240u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c4243  push eax
    X86_AT(c, 0xc4243u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4244  mov dl, byte ptr [ebx + 0x7a]
    X86_AT(c, 0xc4244u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x7Au))));
    // 0c4247  push edx
    X86_AT(c, 0xc4247u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c4248  push 0x12
    X86_AT(c, 0xc4248u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0c424a  push 0xa6bac
    X86_AT(c, 0xc424au);
    { uint32_t v = 0xA6BACu; push32(c, v); }
    // 0c424f  call 0xba1b4
    X86_AT(c, 0xc424fu);
    push32(c, 0xc4254u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc4254u);
    X86_TICK(c, 11);
    // 0c4254  push eax
    X86_AT(c, 0xc4254u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4255  push 4
    X86_AT(c, 0xc4255u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4257  call 0xbbba4
    X86_AT(c, 0xc4257u);
    push32(c, 0xc425cu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc425cu);
    X86_TICK(c, 13);
    // 0c425c  push 0xb
    X86_AT(c, 0xc425cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c425e  push 0xb
    X86_AT(c, 0xc425eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4260  push 4
    X86_AT(c, 0xc4260u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4262  call 0xbc174
    X86_AT(c, 0xc4262u);
    push32(c, 0xc4267u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4267u);
    X86_TICK(c, 11);
    // 0c4267  push 0x4018
    X86_AT(c, 0xc4267u);
    { uint32_t v = 0x4018u; push32(c, v); }
    // 0c426c  push 4
    X86_AT(c, 0xc426cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c426e  call 0xba428
    X86_AT(c, 0xc426eu);
    push32(c, 0xc4273u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4273u);
    X86_TICK(c, 21);
    // 0c4273  lea eax, [ebp - 1]
    X86_AT(c, 0xc4273u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c4276  push eax
    X86_AT(c, 0xc4276u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4277  mov al, byte ptr [ebx + 0x59]
    X86_AT(c, 0xc4277u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x59u))));
    // 0c427a  push eax
    X86_AT(c, 0xc427au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c427b  push 8
    X86_AT(c, 0xc427bu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c427d  push 0xa74f4
    X86_AT(c, 0xc427du);
    { uint32_t v = 0xA74F4u; push32(c, v); }
    // 0c4282  call 0xba1b4
    X86_AT(c, 0xc4282u);
    push32(c, 0xc4287u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc4287u);
    X86_TICK(c, 13);
    // 0c4287  add esp, 0x3c
    X86_AT(c, 0xc4287u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c428a  push eax
    X86_AT(c, 0xc428au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c428b  push 4
    X86_AT(c, 0xc428bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c428d  call 0xbbba4
    X86_AT(c, 0xc428du);
    push32(c, 0xc4292u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc4292u);
    X86_TICK(c, 13);
    // 0c4292  push 0xc
    X86_AT(c, 0xc4292u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c4294  push 0xb
    X86_AT(c, 0xc4294u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4296  push 4
    X86_AT(c, 0xc4296u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4298  call 0xbc174
    X86_AT(c, 0xc4298u);
    push32(c, 0xc429du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc429du);
    X86_TICK(c, 11);
    // 0c429d  push 0x4050
    X86_AT(c, 0xc429du);
    { uint32_t v = 0x4050u; push32(c, v); }
    // 0c42a2  push 4
    X86_AT(c, 0xc42a2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42a4  call 0xba428
    X86_AT(c, 0xc42a4u);
    push32(c, 0xc42a9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc42a9u);
    X86_TICK(c, 16);
    // 0c42a9  push 2
    X86_AT(c, 0xc42a9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c42ab  push dword ptr [ebx + 0x1e]
    X86_AT(c, 0xc42abu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Eu))); push32(c, v); }
    // 0c42ae  push 4
    X86_AT(c, 0xc42aeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42b0  call 0xba404
    X86_AT(c, 0xc42b0u);
    push32(c, 0xc42b5u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc42b5u);
    X86_TICK(c, 15);
    // 0c42b5  add esp, 0x28
    X86_AT(c, 0xc42b5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c42b8  push 0xd
    X86_AT(c, 0xc42b8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c42ba  push 0xb
    X86_AT(c, 0xc42bau);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c42bc  push 4
    X86_AT(c, 0xc42bcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42be  call 0xbc174
    X86_AT(c, 0xc42beu);
    push32(c, 0xc42c3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc42c3u);
    X86_TICK(c, 11);
    // 0c42c3  push 0x4088
    X86_AT(c, 0xc42c3u);
    { uint32_t v = 0x4088u; push32(c, v); }
    // 0c42c8  push 4
    X86_AT(c, 0xc42c8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42ca  call 0xba428
    X86_AT(c, 0xc42cau);
    push32(c, 0xc42cfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc42cfu);
    X86_TICK(c, 16);
    // 0c42cf  push 2
    X86_AT(c, 0xc42cfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c42d1  push dword ptr [ebx + 0x22]
    X86_AT(c, 0xc42d1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x22u))); push32(c, v); }
    // 0c42d4  push 4
    X86_AT(c, 0xc42d4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42d6  call 0xba404
    X86_AT(c, 0xc42d6u);
    push32(c, 0xc42dbu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc42dbu);
    X86_TICK(c, 13);
    // 0c42db  push 0xe
    X86_AT(c, 0xc42dbu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c42dd  push 0xb
    X86_AT(c, 0xc42ddu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c42df  push 4
    X86_AT(c, 0xc42dfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42e1  call 0xbc174
    X86_AT(c, 0xc42e1u);
    push32(c, 0xc42e6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc42e6u);
    X86_TICK(c, 11);
    // 0c42e6  push 0x40c0
    X86_AT(c, 0xc42e6u);
    { uint32_t v = 0x40C0u; push32(c, v); }
    // 0c42eb  push 4
    X86_AT(c, 0xc42ebu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42ed  call 0xba428
    X86_AT(c, 0xc42edu);
    push32(c, 0xc42f2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc42f2u);
    X86_TICK(c, 16);
    // 0c42f2  push 2
    X86_AT(c, 0xc42f2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c42f4  push dword ptr [ebx + 0x26]
    X86_AT(c, 0xc42f4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x26u))); push32(c, v); }
    // 0c42f7  push 4
    X86_AT(c, 0xc42f7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42f9  call 0xba404
    X86_AT(c, 0xc42f9u);
    push32(c, 0xc42feu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc42feu);
    X86_TICK(c, 15);
    // 0c42fe  add esp, 0x40
    X86_AT(c, 0xc42feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c4301  push 0xf
    X86_AT(c, 0xc4301u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c4303  push 0xb
    X86_AT(c, 0xc4303u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4305  push 4
    X86_AT(c, 0xc4305u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4307  call 0xbc174
    X86_AT(c, 0xc4307u);
    push32(c, 0xc430cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc430cu);
    X86_TICK(c, 11);
    // 0c430c  push 0x40f8
    X86_AT(c, 0xc430cu);
    { uint32_t v = 0x40F8u; push32(c, v); }
    // 0c4311  push 4
    X86_AT(c, 0xc4311u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4313  call 0xba428
    X86_AT(c, 0xc4313u);
    push32(c, 0xc4318u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4318u);
    X86_TICK(c, 16);
    // 0c4318  push 2
    X86_AT(c, 0xc4318u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c431a  push dword ptr [ebx + 0x2a]
    X86_AT(c, 0xc431au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x2Au))); push32(c, v); }
    // 0c431d  push 4
    X86_AT(c, 0xc431du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c431f  call 0xba404
    X86_AT(c, 0xc431fu);
    push32(c, 0xc4324u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc4324u);
    X86_TICK(c, 13);
    // 0c4324  push 0x10
    X86_AT(c, 0xc4324u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0c4326  push 0xb
    X86_AT(c, 0xc4326u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4328  push 4
    X86_AT(c, 0xc4328u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c432a  call 0xbc174
    X86_AT(c, 0xc432au);
    push32(c, 0xc432fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc432fu);
    X86_TICK(c, 11);
    // 0c432f  push 0x4130
    X86_AT(c, 0xc432fu);
    { uint32_t v = 0x4130u; push32(c, v); }
    // 0c4334  push 4
    X86_AT(c, 0xc4334u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4336  call 0xba428
    X86_AT(c, 0xc4336u);
    push32(c, 0xc433bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc433bu);
    X86_TICK(c, 16);
    // 0c433b  push 4
    X86_AT(c, 0xc433bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c433d  push dword ptr [ebx + 0x35]
    X86_AT(c, 0xc433du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x35u))); push32(c, v); }
    // 0c4340  push 4
    X86_AT(c, 0xc4340u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4342  call 0xba404
    X86_AT(c, 0xc4342u);
    push32(c, 0xc4347u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc4347u);
    X86_TICK(c, 15);
    // 0c4347  add esp, 0x40
    X86_AT(c, 0xc4347u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c434a  push 0x11
    X86_AT(c, 0xc434au);
    { uint32_t v = 0x11u; push32(c, v); }
    // 0c434c  push 0xb
    X86_AT(c, 0xc434cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c434e  push 4
    X86_AT(c, 0xc434eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4350  call 0xbc174
    X86_AT(c, 0xc4350u);
    push32(c, 0xc4355u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4355u);
    X86_TICK(c, 11);
    // 0c4355  push 0x4168
    X86_AT(c, 0xc4355u);
    { uint32_t v = 0x4168u; push32(c, v); }
    // 0c435a  push 4
    X86_AT(c, 0xc435au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c435c  call 0xba428
    X86_AT(c, 0xc435cu);
    push32(c, 0xc4361u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4361u);
    X86_TICK(c, 16);
    // 0c4361  push 4
    X86_AT(c, 0xc4361u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4363  push dword ptr [ebx + 0x3d]
    X86_AT(c, 0xc4363u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x3Du))); push32(c, v); }
    // 0c4366  push 4
    X86_AT(c, 0xc4366u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4368  call 0xba404
    X86_AT(c, 0xc4368u);
    push32(c, 0xc436du); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc436du);
    X86_TICK(c, 15);
    // 0c436d  add esp, 0x20
    X86_AT(c, 0xc436du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c4370  push 0x12
    X86_AT(c, 0xc4370u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0c4372  push 0xb
    X86_AT(c, 0xc4372u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4374  push 4
    X86_AT(c, 0xc4374u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4376  call 0xbc174
    X86_AT(c, 0xc4376u);
    push32(c, 0xc437bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc437bu);
    X86_TICK(c, 11);
    // 0c437b  push 0x41a0
    X86_AT(c, 0xc437bu);
    { uint32_t v = 0x41A0u; push32(c, v); }
    // 0c4380  push 4
    X86_AT(c, 0xc4380u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4382  call 0xba428
    X86_AT(c, 0xc4382u);
    push32(c, 0xc4387u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4387u);
    X86_TICK(c, 61);
    // 0c4387  push 4
    X86_AT(c, 0xc4387u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4389  mov eax, dword ptr [ebx + 0x45]
    X86_AT(c, 0xc4389u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x45u)));
    // 0c438c  cdq 
    X86_AT(c, 0xc438cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c438d  mov ecx, 0x64
    X86_AT(c, 0xc438du);
    c.r[1] = 0x64u;
    // 0c4392  idiv ecx
    X86_AT(c, 0xc4392u);
    x86_idiv(c, c.r[1], 4, 0xc4392u);
    // 0c4394  push eax
    X86_AT(c, 0xc4394u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4395  push 4
    X86_AT(c, 0xc4395u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4397  call 0xba404
    X86_AT(c, 0xc4397u);
    push32(c, 0xc439cu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc439cu);
    X86_TICK(c, 13);
    // 0c439c  push 0x13
    X86_AT(c, 0xc439cu);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0c439e  push 0xb
    X86_AT(c, 0xc439eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c43a0  push 4
    X86_AT(c, 0xc43a0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43a2  call 0xbc174
    X86_AT(c, 0xc43a2u);
    push32(c, 0xc43a7u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc43a7u);
    X86_TICK(c, 11);
    // 0c43a7  push 0x41d8
    X86_AT(c, 0xc43a7u);
    { uint32_t v = 0x41D8u; push32(c, v); }
    // 0c43ac  push 4
    X86_AT(c, 0xc43acu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43ae  call 0xba428
    X86_AT(c, 0xc43aeu);
    push32(c, 0xc43b3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc43b3u);
    X86_TICK(c, 16);
    // 0c43b3  push 4
    X86_AT(c, 0xc43b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43b5  push dword ptr [ebx + 0x49]
    X86_AT(c, 0xc43b5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x49u))); push32(c, v); }
    // 0c43b8  push 4
    X86_AT(c, 0xc43b8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43ba  call 0xba404
    X86_AT(c, 0xc43bau);
    push32(c, 0xc43bfu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc43bfu);
    X86_TICK(c, 11);
    // 0c43bf  add esp, 0x40
    X86_AT(c, 0xc43bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c43c2  push 0x4210
    X86_AT(c, 0xc43c2u);
    { uint32_t v = 0x4210u; push32(c, v); }
    // 0c43c7  call 0xbc50c
    X86_AT(c, 0xc43c7u);
    push32(c, 0xc43ccu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc43ccu);
    X86_TICK(c, 2);
    // 0c43cc  add esp, 4
    X86_AT(c, 0xc43ccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c43cf:
    X86_TICK(c, 9);
    // 0c43cf  push 4
    X86_AT(c, 0xc43cfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43d1  call 0xb9930
    X86_AT(c, 0xc43d1u);
    push32(c, 0xc43d6u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc43d6u);
    X86_TICK(c, 9);
    // 0c43d6  add esp, 4
    X86_AT(c, 0xc43d6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c43d9  and al, al
    X86_AT(c, 0xc43d9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c43db  je 0xc43cf
    X86_AT(c, 0xc43dbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc43cfu); goto L_c43cf; }
    X86_TICK(c, 9);
    // 0c43dd  push 2
    X86_AT(c, 0xc43ddu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c43df  call 0xbbb5c
    X86_AT(c, 0xc43dfu);
    push32(c, 0xc43e4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc43e4u);
    X86_TICK(c, 9);
    // 0c43e4  push 4
    X86_AT(c, 0xc43e4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43e6  call 0xbb6b0
    X86_AT(c, 0xc43e6u);
    push32(c, 0xc43ebu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc43ebu);
    X86_TICK(c, 17);
    // 0c43eb  push 0x17
    X86_AT(c, 0xc43ebu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c43ed  push 0x4d
    X86_AT(c, 0xc43edu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c43ef  push 4
    X86_AT(c, 0xc43efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43f1  push 0
    X86_AT(c, 0xc43f1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c43f3  push 4
    X86_AT(c, 0xc43f3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43f5  call 0xbc2b0
    X86_AT(c, 0xc43f5u);
    push32(c, 0xc43fau); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc43fau);
    X86_TICK(c, 9);
    // 0c43fa  add esp, 0x1c
    X86_AT(c, 0xc43fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c43fd  jmp 0xc3ef8
    X86_AT(c, 0xc43fdu);
    X86_POLL(c, 0xc3ef8u); goto L_c3ef8;
L_c4402:
    X86_TICK(c, 28);
    // 0c4402  pop edi
    X86_AT(c, 0xc4402u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c4403  pop esi
    X86_AT(c, 0xc4403u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c4404  pop ebx
    X86_AT(c, 0xc4404u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c4405  leave 
    X86_AT(c, 0xc4405u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c4406  ret 
    X86_AT(c, 0xc4406u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc3ec8u, "ran off the end of a function");
}
void f_000c3ef8(X86Cpu& c) {
L_c3ef8:
    X86_TICK(c, 17);
    // 0c3ef8  push 0x17
    X86_AT(c, 0xc3ef8u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c3efa  push 0x4d
    X86_AT(c, 0xc3efau);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c3efc  push 4
    X86_AT(c, 0xc3efcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3efe  push 0
    X86_AT(c, 0xc3efeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3f00  push 4
    X86_AT(c, 0xc3f00u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f02  call 0xbc2b0
    X86_AT(c, 0xc3f02u);
    push32(c, 0xc3f07u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc3f07u);
    X86_TICK(c, 13);
    // 0c3f07  push 4
    X86_AT(c, 0xc3f07u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f09  push 0
    X86_AT(c, 0xc3f09u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3f0b  push 4
    X86_AT(c, 0xc3f0bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f0d  call 0xbc174
    X86_AT(c, 0xc3f0du);
    push32(c, 0xc3f12u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3f12u);
    X86_TICK(c, 11);
    // 0c3f12  push 0xa68e8
    X86_AT(c, 0xc3f12u);
    { uint32_t v = 0xA68E8u; push32(c, v); }
    // 0c3f17  push 4
    X86_AT(c, 0xc3f17u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f19  call 0xba428
    X86_AT(c, 0xc3f19u);
    push32(c, 0xc3f1eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3f1eu);
    X86_TICK(c, 2);
    // 0c3f1e  add esp, 0x28
    X86_AT(c, 0xc3f1eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_c3f21:
    X86_TICK(c, 13);
    // 0c3f21  push 4
    X86_AT(c, 0xc3f21u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f23  push 0x18
    X86_AT(c, 0xc3f23u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0c3f25  push 4
    X86_AT(c, 0xc3f25u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f27  call 0xbc174
    X86_AT(c, 0xc3f27u);
    push32(c, 0xc3f2cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3f2cu);
    X86_TICK(c, 9);
    // 0c3f2c  push 4
    X86_AT(c, 0xc3f2cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f2e  call 0xbc480
    X86_AT(c, 0xc3f2eu);
    push32(c, 0xc3f33u); x86_call_known(c, 0xbc480u, f_000bc480); X86_RET(c, 0xc3f33u);
    X86_TICK(c, 11);
    // 0c3f33  push 0xe
    X86_AT(c, 0xc3f33u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3f35  push 4
    X86_AT(c, 0xc3f35u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f37  call 0xbc3ec
    X86_AT(c, 0xc3f37u);
    push32(c, 0xc3f3cu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3f3cu);
    X86_TICK(c, 9);
    // 0c3f3c  push 4
    X86_AT(c, 0xc3f3cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f3e  call 0xbb6b0
    X86_AT(c, 0xc3f3eu);
    push32(c, 0xc3f43u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3f43u);
    X86_TICK(c, 9);
    // 0c3f43  push 4
    X86_AT(c, 0xc3f43u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f45  call 0xb6308
    X86_AT(c, 0xc3f45u);
    push32(c, 0xc3f4au); x86_call_known(c, 0xb6308u, f_000b6308); X86_RET(c, 0xc3f4au);
    X86_TICK(c, 14);
    // 0c3f4a  xchg edi, eax
    X86_AT(c, 0xc3f4au);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c3f4b  push 0xb
    X86_AT(c, 0xc3f4bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c3f4d  push 4
    X86_AT(c, 0xc3f4du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f4f  call 0xbc3ec
    X86_AT(c, 0xc3f4fu);
    push32(c, 0xc3f54u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3f54u);
    X86_TICK(c, 9);
    // 0c3f54  push 4
    X86_AT(c, 0xc3f54u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f56  call 0xbb6b0
    X86_AT(c, 0xc3f56u);
    push32(c, 0xc3f5bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3f5bu);
    X86_TICK(c, 9);
    // 0c3f5b  add esp, 0x2c
    X86_AT(c, 0xc3f5bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0c3f5e  cmp edi, 0xffffffff
    X86_AT(c, 0xc3f5eu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c3f61  je 0xc3f67
    X86_AT(c, 0xc3f61u);
    if (x86_cc(c, 4)) { goto L_c3f67; }
    X86_TICK(c, 7);
    // 0c3f63  and edi, edi
    X86_AT(c, 0xc3f63u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c3f65  jne 0xc3fcb
    X86_AT(c, 0xc3f65u);
    if (x86_cc(c, 5)) { goto L_c3fcb; }
L_c3f67:
    X86_TICK(c, 13);
    // 0c3f67  push 4
    X86_AT(c, 0xc3f67u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f69  push 0
    X86_AT(c, 0xc3f69u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3f6b  push 4
    X86_AT(c, 0xc3f6bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f6d  call 0xbc174
    X86_AT(c, 0xc3f6du);
    push32(c, 0xc3f72u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3f72u);
    X86_TICK(c, 11);
    // 0c3f72  push 0xa68e8
    X86_AT(c, 0xc3f72u);
    { uint32_t v = 0xA68E8u; push32(c, v); }
    // 0c3f77  push 4
    X86_AT(c, 0xc3f77u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f79  call 0xba428
    X86_AT(c, 0xc3f79u);
    push32(c, 0xc3f7eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3f7eu);
    X86_TICK(c, 13);
    // 0c3f7e  push 4
    X86_AT(c, 0xc3f7eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f80  push 0x18
    X86_AT(c, 0xc3f80u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0c3f82  push 4
    X86_AT(c, 0xc3f82u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f84  call 0xbc174
    X86_AT(c, 0xc3f84u);
    push32(c, 0xc3f89u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3f89u);
    X86_TICK(c, 13);
    // 0c3f89  push 2
    X86_AT(c, 0xc3f89u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3f8b  push edi
    X86_AT(c, 0xc3f8bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c3f8c  push 4
    X86_AT(c, 0xc3f8cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f8e  call 0xba404
    X86_AT(c, 0xc3f8eu);
    push32(c, 0xc3f93u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3f93u);
    X86_TICK(c, 13);
    // 0c3f93  push 4
    X86_AT(c, 0xc3f93u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f95  push 0x1d
    X86_AT(c, 0xc3f95u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0c3f97  push 4
    X86_AT(c, 0xc3f97u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3f99  call 0xbc174
    X86_AT(c, 0xc3f99u);
    push32(c, 0xc3f9eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3f9eu);
    X86_TICK(c, 11);
    // 0c3f9e  push 0xa697c
    X86_AT(c, 0xc3f9eu);
    { uint32_t v = 0xA697Cu; push32(c, v); }
    // 0c3fa3  push 4
    X86_AT(c, 0xc3fa3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3fa5  call 0xba428
    X86_AT(c, 0xc3fa5u);
    push32(c, 0xc3faau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3faau);
    X86_TICK(c, 19);
    // 0c3faa  add esp, 0x40
    X86_AT(c, 0xc3faau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c3fad  push 0x17
    X86_AT(c, 0xc3fadu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c3faf  push 0x4d
    X86_AT(c, 0xc3fafu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c3fb1  push 3
    X86_AT(c, 0xc3fb1u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3fb3  push 0
    X86_AT(c, 0xc3fb3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3fb5  push 4
    X86_AT(c, 0xc3fb5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3fb7  call 0xbc2b0
    X86_AT(c, 0xc3fb7u);
    push32(c, 0xc3fbcu); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc3fbcu);
    X86_TICK(c, 9);
    // 0c3fbc  push 4
    X86_AT(c, 0xc3fbcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3fbe  call 0xbc498
    X86_AT(c, 0xc3fbeu);
    push32(c, 0xc3fc3u); x86_call_known(c, 0xbc498u, f_000bc498); X86_RET(c, 0xc3fc3u);
    X86_TICK(c, 9);
    // 0c3fc3  add esp, 0x18
    X86_AT(c, 0xc3fc3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c3fc6  jmp 0xc4402
    X86_AT(c, 0xc3fc6u);
    goto L_c4402;
L_c3fcb:
    X86_TICK(c, 7);
    // 0c3fcb  cmp edi, 0x14
    X86_AT(c, 0xc3fcbu);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c3fce  jg 0xc3fd4
    X86_AT(c, 0xc3fceu);
    if (x86_cc(c, 15)) { goto L_c3fd4; }
    X86_TICK(c, 7);
    // 0c3fd0  and edi, edi
    X86_AT(c, 0xc3fd0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c3fd2  jg 0xc401c
    X86_AT(c, 0xc3fd2u);
    if (x86_cc(c, 15)) { goto L_c401c; }
L_c3fd4:
    X86_TICK(c, 13);
    // 0c3fd4  push 4
    X86_AT(c, 0xc3fd4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3fd6  push 0x18
    X86_AT(c, 0xc3fd6u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0c3fd8  push 4
    X86_AT(c, 0xc3fd8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3fda  call 0xbc174
    X86_AT(c, 0xc3fdau);
    push32(c, 0xc3fdfu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3fdfu);
    X86_TICK(c, 11);
    // 0c3fdf  push 0xa6928
    X86_AT(c, 0xc3fdfu);
    { uint32_t v = 0xA6928u; push32(c, v); }
    // 0c3fe4  push 4
    X86_AT(c, 0xc3fe4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3fe6  call 0xba428
    X86_AT(c, 0xc3fe6u);
    push32(c, 0xc3febu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3febu);
    X86_TICK(c, 9);
    // 0c3feb  push 0x3e18
    X86_AT(c, 0xc3febu);
    { uint32_t v = 0x3E18u; push32(c, v); }
    // 0c3ff0  call 0xbc50c
    X86_AT(c, 0xc3ff0u);
    push32(c, 0xc3ff5u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3ff5u);
    X86_TICK(c, 2);
    // 0c3ff5  add esp, 0x18
    X86_AT(c, 0xc3ff5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c3ff8:
    X86_TICK(c, 9);
    // 0c3ff8  push 4
    X86_AT(c, 0xc3ff8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3ffa  call 0xb9930
    X86_AT(c, 0xc3ffau);
    push32(c, 0xc3fffu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3fffu);
    X86_TICK(c, 9);
    // 0c3fff  add esp, 4
    X86_AT(c, 0xc3fffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4002  and al, al
    X86_AT(c, 0xc4002u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c4004  je 0xc3ff8
    X86_AT(c, 0xc4004u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3ff8u); goto L_c3ff8; }
    X86_TICK(c, 9);
    // 0c4006  push 2
    X86_AT(c, 0xc4006u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4008  call 0xbbb5c
    X86_AT(c, 0xc4008u);
    push32(c, 0xc400du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc400du);
    X86_TICK(c, 9);
    // 0c400d  push 4
    X86_AT(c, 0xc400du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c400f  call 0xbb6b0
    X86_AT(c, 0xc400fu);
    push32(c, 0xc4014u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4014u);
    X86_TICK(c, 9);
    // 0c4014  add esp, 8
    X86_AT(c, 0xc4014u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c4017  jmp 0xc3f21
    X86_AT(c, 0xc4017u);
    X86_POLL(c, 0xc3f21u); goto L_c3f21;
L_c401c:
    X86_TICK(c, 11);
    // 0c401c  push 0xb
    X86_AT(c, 0xc401cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c401e  push 4
    X86_AT(c, 0xc401eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4020  call 0xbc3ec
    X86_AT(c, 0xc4020u);
    push32(c, 0xc4025u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc4025u);
    X86_TICK(c, 9);
    // 0c4025  push 4
    X86_AT(c, 0xc4025u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4027  call 0xbb6b0
    X86_AT(c, 0xc4027u);
    push32(c, 0xc402cu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc402cu);
    X86_TICK(c, 9);
    // 0c402c  push 4
    X86_AT(c, 0xc402cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c402e  call 0xbc498
    X86_AT(c, 0xc402eu);
    push32(c, 0xc4033u); x86_call_known(c, 0xbc498u, f_000bc498); X86_RET(c, 0xc4033u);
    X86_TICK(c, 25);
    // 0c4033  mov eax, edi
    X86_AT(c, 0xc4033u);
    c.r[0] = c.r[7];
    // 0c4035  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4035u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4038  shl edx, 5
    X86_AT(c, 0xc4038u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c403b  add edx, eax
    X86_AT(c, 0xc403bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c403d  lea edx, [eax + edx*2]
    X86_AT(c, 0xc403du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4040  add esp, 0x10
    X86_AT(c, 0xc4040u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c4043  cmp byte ptr [edx + 0xa4ce9], 0
    X86_AT(c, 0xc4043u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4CE9u))), 0x0u, 0, 1);
    // 0c404a  jne 0xc40ab
    X86_AT(c, 0xc404au);
    if (x86_cc(c, 5)) { goto L_c40ab; }
    X86_TICK(c, 13);
    // 0c404c  push 4
    X86_AT(c, 0xc404cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c404e  push 0
    X86_AT(c, 0xc404eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4050  push 4
    X86_AT(c, 0xc4050u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4052  call 0xbc174
    X86_AT(c, 0xc4052u);
    push32(c, 0xc4057u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4057u);
    X86_TICK(c, 11);
    // 0c4057  push 0xa68e8
    X86_AT(c, 0xc4057u);
    { uint32_t v = 0xA68E8u; push32(c, v); }
    // 0c405c  push 4
    X86_AT(c, 0xc405cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c405e  call 0xba428
    X86_AT(c, 0xc405eu);
    push32(c, 0xc4063u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4063u);
    X86_TICK(c, 13);
    // 0c4063  push 4
    X86_AT(c, 0xc4063u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4065  push 0x18
    X86_AT(c, 0xc4065u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0c4067  push 4
    X86_AT(c, 0xc4067u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4069  call 0xbc174
    X86_AT(c, 0xc4069u);
    push32(c, 0xc406eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc406eu);
    X86_TICK(c, 11);
    // 0c406e  push 0x3e4c
    X86_AT(c, 0xc406eu);
    { uint32_t v = 0x3E4Cu; push32(c, v); }
    // 0c4073  push 4
    X86_AT(c, 0xc4073u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4075  call 0xba428
    X86_AT(c, 0xc4075u);
    push32(c, 0xc407au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc407au);
    X86_TICK(c, 9);
    // 0c407a  push 0x3e94
    X86_AT(c, 0xc407au);
    { uint32_t v = 0x3E94u; push32(c, v); }
    // 0c407f  call 0xbc50c
    X86_AT(c, 0xc407fu);
    push32(c, 0xc4084u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc4084u);
    X86_TICK(c, 2);
    // 0c4084  add esp, 0x2c
    X86_AT(c, 0xc4084u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_c4087:
    X86_TICK(c, 9);
    // 0c4087  push 4
    X86_AT(c, 0xc4087u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4089  call 0xb9930
    X86_AT(c, 0xc4089u);
    push32(c, 0xc408eu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc408eu);
    X86_TICK(c, 9);
    // 0c408e  add esp, 4
    X86_AT(c, 0xc408eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4091  and al, al
    X86_AT(c, 0xc4091u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c4093  je 0xc4087
    X86_AT(c, 0xc4093u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc4087u); goto L_c4087; }
    X86_TICK(c, 9);
    // 0c4095  push 2
    X86_AT(c, 0xc4095u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4097  call 0xbbb5c
    X86_AT(c, 0xc4097u);
    push32(c, 0xc409cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc409cu);
    X86_TICK(c, 9);
    // 0c409c  push 4
    X86_AT(c, 0xc409cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c409e  call 0xbb6b0
    X86_AT(c, 0xc409eu);
    push32(c, 0xc40a3u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc40a3u);
    X86_TICK(c, 9);
    // 0c40a3  add esp, 8
    X86_AT(c, 0xc40a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c40a6  jmp 0xc3ef8
    X86_AT(c, 0xc40a6u);
    X86_POLL(c, 0xc3ef8u); goto L_c3ef8;
L_c40ab:
    X86_TICK(c, 13);
    // 0c40ab  push 4
    X86_AT(c, 0xc40abu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c40ad  push 0
    X86_AT(c, 0xc40adu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c40af  push 4
    X86_AT(c, 0xc40afu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c40b1  call 0xbc174
    X86_AT(c, 0xc40b1u);
    push32(c, 0xc40b6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc40b6u);
    X86_TICK(c, 11);
    // 0c40b6  push 0xa68e8
    X86_AT(c, 0xc40b6u);
    { uint32_t v = 0xA68E8u; push32(c, v); }
    // 0c40bb  push 4
    X86_AT(c, 0xc40bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c40bd  call 0xba428
    X86_AT(c, 0xc40bdu);
    push32(c, 0xc40c2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc40c2u);
    X86_TICK(c, 13);
    // 0c40c2  push 4
    X86_AT(c, 0xc40c2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c40c4  push 0x18
    X86_AT(c, 0xc40c4u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0c40c6  push 4
    X86_AT(c, 0xc40c6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c40c8  call 0xbc174
    X86_AT(c, 0xc40c8u);
    push32(c, 0xc40cdu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc40cdu);
    X86_TICK(c, 13);
    // 0c40cd  push 2
    X86_AT(c, 0xc40cdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c40cf  push edi
    X86_AT(c, 0xc40cfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c40d0  push 4
    X86_AT(c, 0xc40d0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c40d2  call 0xba404
    X86_AT(c, 0xc40d2u);
    push32(c, 0xc40d7u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc40d7u);
    X86_TICK(c, 27);
    // 0c40d7  dec edi
    X86_AT(c, 0xc40d7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0c40d8  mov eax, edi
    X86_AT(c, 0xc40d8u);
    c.r[0] = c.r[7];
    // 0c40da  lea edx, [eax + eax*2]
    X86_AT(c, 0xc40dau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c40dd  shl edx, 5
    X86_AT(c, 0xc40ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c40e0  add edx, eax
    X86_AT(c, 0xc40e0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c40e2  lea edx, [eax + edx*2]
    X86_AT(c, 0xc40e2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c40e5  add esp, 0x2c
    X86_AT(c, 0xc40e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0c40e8  cmp dword ptr [edx + 0xa4dc5], 0
    X86_AT(c, 0xc40e8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u))), 0x0u, 0, 4);
    // 0c40ef  jne 0xc411a
    X86_AT(c, 0xc40efu);
    if (x86_cc(c, 5)) { goto L_c411a; }
    X86_TICK(c, 2);
    // 0c40f1  sub esi, esi
    X86_AT(c, 0xc40f1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c40f3:
    X86_TICK(c, 7);
    // 0c40f3  cmp esi, 4
    X86_AT(c, 0xc40f3u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0c40f6  jge 0xc4104
    X86_AT(c, 0xc40f6u);
    if (x86_cc(c, 13)) { goto L_c4104; }
    X86_TICK(c, 11);
    // 0c40f8  cmp edi, dword ptr [esi*4 + 0xa4a7e]
    X86_AT(c, 0xc40f8u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA4A7Eu))), 0, 4);
    // 0c40ff  je 0xc4104
    X86_AT(c, 0xc40ffu);
    if (x86_cc(c, 4)) { goto L_c4104; }
    X86_TICK(c, 9);
    // 0c4101  inc esi
    X86_AT(c, 0xc4101u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c4102  jmp 0xc40f3
    X86_AT(c, 0xc4102u);
    X86_POLL(c, 0xc40f3u); goto L_c40f3;
L_c4104:
    X86_TICK(c, 20);
    // 0c4104  mov eax, esi
    X86_AT(c, 0xc4104u);
    c.r[0] = c.r[6];
    // 0c4106  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4106u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4109  shl edx, 5
    X86_AT(c, 0xc4109u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c410c  add edx, eax
    X86_AT(c, 0xc410cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c410e  lea edx, [eax + edx*2]
    X86_AT(c, 0xc410eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4111  lea ebx, [edx*1 + 0xa4aa0]
    X86_AT(c, 0xc4111u);
    c.r[3] = (uint32_t)(c.r[2] + 0xA4AA0u);
    // 0c4118  jmp 0xc412e
    X86_AT(c, 0xc4118u);
    goto L_c412e;
L_c411a:
    X86_TICK(c, 13);
    // 0c411a  mov eax, edi
    X86_AT(c, 0xc411au);
    c.r[0] = c.r[7];
    // 0c411c  lea edx, [eax + eax*2]
    X86_AT(c, 0xc411cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c411f  shl edx, 5
    X86_AT(c, 0xc411fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4122  add edx, eax
    X86_AT(c, 0xc4122u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4124  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4124u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4127  lea ebx, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc4127u);
    c.r[3] = (uint32_t)(c.r[2] + 0xA4DACu);
L_c412e:
    X86_TICK(c, 15);
    // 0c412e  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xc412eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0c4132  push 5
    X86_AT(c, 0xc4132u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c4134  push 0xb
    X86_AT(c, 0xc4134u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4136  push 4
    X86_AT(c, 0xc4136u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4138  call 0xbc174
    X86_AT(c, 0xc4138u);
    push32(c, 0xc413du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc413du);
    X86_TICK(c, 11);
    // 0c413d  push 0x3ec8
    X86_AT(c, 0xc413du);
    { uint32_t v = 0x3EC8u; push32(c, v); }
    // 0c4142  push 4
    X86_AT(c, 0xc4142u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4144  call 0xba428
    X86_AT(c, 0xc4144u);
    push32(c, 0xc4149u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4149u);
    X86_TICK(c, 11);
    // 0c4149  push ebx
    X86_AT(c, 0xc4149u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c414a  push 4
    X86_AT(c, 0xc414au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c414c  call 0xbbfe0
    X86_AT(c, 0xc414cu);
    push32(c, 0xc4151u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc4151u);
    X86_TICK(c, 13);
    // 0c4151  push 6
    X86_AT(c, 0xc4151u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c4153  push 0xb
    X86_AT(c, 0xc4153u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4155  push 4
    X86_AT(c, 0xc4155u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4157  call 0xbc174
    X86_AT(c, 0xc4157u);
    push32(c, 0xc415cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc415cu);
    X86_TICK(c, 11);
    // 0c415c  push 0x3f00
    X86_AT(c, 0xc415cu);
    { uint32_t v = 0x3F00u; push32(c, v); }
    // 0c4161  push 4
    X86_AT(c, 0xc4161u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4163  call 0xba428
    X86_AT(c, 0xc4163u);
    push32(c, 0xc4168u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4168u);
    X86_TICK(c, 21);
    // 0c4168  lea eax, [ebp - 1]
    X86_AT(c, 0xc4168u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c416b  push eax
    X86_AT(c, 0xc416bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c416c  mov dl, byte ptr [ebx + 0x30]
    X86_AT(c, 0xc416cu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x30u))));
    // 0c416f  push edx
    X86_AT(c, 0xc416fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c4170  push 3
    X86_AT(c, 0xc4170u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4172  push 0xa804c
    X86_AT(c, 0xc4172u);
    { uint32_t v = 0xA804Cu; push32(c, v); }
    // 0c4177  call 0xba1b4
    X86_AT(c, 0xc4177u);
    push32(c, 0xc417cu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc417cu);
    X86_TICK(c, 13);
    // 0c417c  add esp, 0x40
    X86_AT(c, 0xc417cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c417f  push eax
    X86_AT(c, 0xc417fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4180  push 4
    X86_AT(c, 0xc4180u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4182  call 0xbbba4
    X86_AT(c, 0xc4182u);
    push32(c, 0xc4187u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc4187u);
    X86_TICK(c, 13);
    // 0c4187  push 7
    X86_AT(c, 0xc4187u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c4189  push 0xb
    X86_AT(c, 0xc4189u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c418b  push 4
    X86_AT(c, 0xc418bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c418d  call 0xbc174
    X86_AT(c, 0xc418du);
    push32(c, 0xc4192u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4192u);
    X86_TICK(c, 11);
    // 0c4192  push 0x3f38
    X86_AT(c, 0xc4192u);
    { uint32_t v = 0x3F38u; push32(c, v); }
    // 0c4197  push 4
    X86_AT(c, 0xc4197u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4199  call 0xba428
    X86_AT(c, 0xc4199u);
    push32(c, 0xc419eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc419eu);
    X86_TICK(c, 21);
    // 0c419e  lea eax, [ebp - 1]
    X86_AT(c, 0xc419eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c41a1  push eax
    X86_AT(c, 0xc41a1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c41a2  mov dl, byte ptr [ebx + 0x2e]
    X86_AT(c, 0xc41a2u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x2Eu))));
    // 0c41a5  push edx
    X86_AT(c, 0xc41a5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c41a6  push 5
    X86_AT(c, 0xc41a6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c41a8  push 0xa81d8
    X86_AT(c, 0xc41a8u);
    { uint32_t v = 0xA81D8u; push32(c, v); }
    // 0c41ad  call 0xba1b4
    X86_AT(c, 0xc41adu);
    push32(c, 0xc41b2u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc41b2u);
    X86_TICK(c, 11);
    // 0c41b2  push eax
    X86_AT(c, 0xc41b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c41b3  push 4
    X86_AT(c, 0xc41b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c41b5  call 0xbbba4
    X86_AT(c, 0xc41b5u);
    push32(c, 0xc41bau); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc41bau);
    X86_TICK(c, 13);
    // 0c41ba  push 8
    X86_AT(c, 0xc41bau);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c41bc  push 0xb
    X86_AT(c, 0xc41bcu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c41be  push 4
    X86_AT(c, 0xc41beu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c41c0  call 0xbc174
    X86_AT(c, 0xc41c0u);
    push32(c, 0xc41c5u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc41c5u);
    X86_TICK(c, 13);
    // 0c41c5  add esp, 0x40
    X86_AT(c, 0xc41c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c41c8  push 0x3f70
    X86_AT(c, 0xc41c8u);
    { uint32_t v = 0x3F70u; push32(c, v); }
    // 0c41cd  push 4
    X86_AT(c, 0xc41cdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c41cf  call 0xba428
    X86_AT(c, 0xc41cfu);
    push32(c, 0xc41d4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc41d4u);
    X86_TICK(c, 21);
    // 0c41d4  lea eax, [ebp - 1]
    X86_AT(c, 0xc41d4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c41d7  push eax
    X86_AT(c, 0xc41d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c41d8  mov al, byte ptr [ebx + 0x2f]
    X86_AT(c, 0xc41d8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x2Fu))));
    // 0c41db  push eax
    X86_AT(c, 0xc41dbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c41dc  push 0xb
    X86_AT(c, 0xc41dcu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c41de  push 0xa846c
    X86_AT(c, 0xc41deu);
    { uint32_t v = 0xA846Cu; push32(c, v); }
    // 0c41e3  call 0xba1b4
    X86_AT(c, 0xc41e3u);
    push32(c, 0xc41e8u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc41e8u);
    X86_TICK(c, 11);
    // 0c41e8  push eax
    X86_AT(c, 0xc41e8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c41e9  push 4
    X86_AT(c, 0xc41e9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c41eb  call 0xbbba4
    X86_AT(c, 0xc41ebu);
    push32(c, 0xc41f0u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc41f0u);
    X86_TICK(c, 15);
    // 0c41f0  add esp, 0x20
    X86_AT(c, 0xc41f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c41f3  push 9
    X86_AT(c, 0xc41f3u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c41f5  push 0xb
    X86_AT(c, 0xc41f5u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c41f7  push 4
    X86_AT(c, 0xc41f7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c41f9  call 0xbc174
    X86_AT(c, 0xc41f9u);
    push32(c, 0xc41feu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc41feu);
    X86_TICK(c, 11);
    // 0c41fe  push 0x3fa8
    X86_AT(c, 0xc41feu);
    { uint32_t v = 0x3FA8u; push32(c, v); }
    // 0c4203  push 4
    X86_AT(c, 0xc4203u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4205  call 0xba428
    X86_AT(c, 0xc4205u);
    push32(c, 0xc420au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc420au);
    X86_TICK(c, 21);
    // 0c420a  lea eax, [ebp - 1]
    X86_AT(c, 0xc420au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c420d  push eax
    X86_AT(c, 0xc420du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c420e  mov dl, byte ptr [ebx + 0x1d]
    X86_AT(c, 0xc420eu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du))));
    // 0c4211  push edx
    X86_AT(c, 0xc4211u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c4212  push 4
    X86_AT(c, 0xc4212u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4214  push 0xa699c
    X86_AT(c, 0xc4214u);
    { uint32_t v = 0xA699Cu; push32(c, v); }
    // 0c4219  call 0xba1b4
    X86_AT(c, 0xc4219u);
    push32(c, 0xc421eu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc421eu);
    X86_TICK(c, 11);
    // 0c421e  push eax
    X86_AT(c, 0xc421eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c421f  push 4
    X86_AT(c, 0xc421fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4221  call 0xbbba4
    X86_AT(c, 0xc4221u);
    push32(c, 0xc4226u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc4226u);
    X86_TICK(c, 13);
    // 0c4226  push 0xa
    X86_AT(c, 0xc4226u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c4228  push 0xb
    X86_AT(c, 0xc4228u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c422a  push 4
    X86_AT(c, 0xc422au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c422c  call 0xbc174
    X86_AT(c, 0xc422cu);
    push32(c, 0xc4231u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4231u);
    X86_TICK(c, 11);
    // 0c4231  push 0x3fe0
    X86_AT(c, 0xc4231u);
    { uint32_t v = 0x3FE0u; push32(c, v); }
    // 0c4236  push 4
    X86_AT(c, 0xc4236u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4238  call 0xba428
    X86_AT(c, 0xc4238u);
    push32(c, 0xc423du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc423du);
    X86_TICK(c, 23);
    // 0c423d  add esp, 0x40
    X86_AT(c, 0xc423du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c4240  lea eax, [ebp - 1]
    X86_AT(c, 0xc4240u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c4243  push eax
    X86_AT(c, 0xc4243u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4244  mov dl, byte ptr [ebx + 0x7a]
    X86_AT(c, 0xc4244u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x7Au))));
    // 0c4247  push edx
    X86_AT(c, 0xc4247u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c4248  push 0x12
    X86_AT(c, 0xc4248u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0c424a  push 0xa6bac
    X86_AT(c, 0xc424au);
    { uint32_t v = 0xA6BACu; push32(c, v); }
    // 0c424f  call 0xba1b4
    X86_AT(c, 0xc424fu);
    push32(c, 0xc4254u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc4254u);
    X86_TICK(c, 11);
    // 0c4254  push eax
    X86_AT(c, 0xc4254u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4255  push 4
    X86_AT(c, 0xc4255u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4257  call 0xbbba4
    X86_AT(c, 0xc4257u);
    push32(c, 0xc425cu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc425cu);
    X86_TICK(c, 13);
    // 0c425c  push 0xb
    X86_AT(c, 0xc425cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c425e  push 0xb
    X86_AT(c, 0xc425eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4260  push 4
    X86_AT(c, 0xc4260u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4262  call 0xbc174
    X86_AT(c, 0xc4262u);
    push32(c, 0xc4267u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4267u);
    X86_TICK(c, 11);
    // 0c4267  push 0x4018
    X86_AT(c, 0xc4267u);
    { uint32_t v = 0x4018u; push32(c, v); }
    // 0c426c  push 4
    X86_AT(c, 0xc426cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c426e  call 0xba428
    X86_AT(c, 0xc426eu);
    push32(c, 0xc4273u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4273u);
    X86_TICK(c, 21);
    // 0c4273  lea eax, [ebp - 1]
    X86_AT(c, 0xc4273u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c4276  push eax
    X86_AT(c, 0xc4276u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4277  mov al, byte ptr [ebx + 0x59]
    X86_AT(c, 0xc4277u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x59u))));
    // 0c427a  push eax
    X86_AT(c, 0xc427au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c427b  push 8
    X86_AT(c, 0xc427bu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c427d  push 0xa74f4
    X86_AT(c, 0xc427du);
    { uint32_t v = 0xA74F4u; push32(c, v); }
    // 0c4282  call 0xba1b4
    X86_AT(c, 0xc4282u);
    push32(c, 0xc4287u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc4287u);
    X86_TICK(c, 13);
    // 0c4287  add esp, 0x3c
    X86_AT(c, 0xc4287u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c428a  push eax
    X86_AT(c, 0xc428au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c428b  push 4
    X86_AT(c, 0xc428bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c428d  call 0xbbba4
    X86_AT(c, 0xc428du);
    push32(c, 0xc4292u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc4292u);
    X86_TICK(c, 13);
    // 0c4292  push 0xc
    X86_AT(c, 0xc4292u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c4294  push 0xb
    X86_AT(c, 0xc4294u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4296  push 4
    X86_AT(c, 0xc4296u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4298  call 0xbc174
    X86_AT(c, 0xc4298u);
    push32(c, 0xc429du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc429du);
    X86_TICK(c, 11);
    // 0c429d  push 0x4050
    X86_AT(c, 0xc429du);
    { uint32_t v = 0x4050u; push32(c, v); }
    // 0c42a2  push 4
    X86_AT(c, 0xc42a2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42a4  call 0xba428
    X86_AT(c, 0xc42a4u);
    push32(c, 0xc42a9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc42a9u);
    X86_TICK(c, 16);
    // 0c42a9  push 2
    X86_AT(c, 0xc42a9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c42ab  push dword ptr [ebx + 0x1e]
    X86_AT(c, 0xc42abu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Eu))); push32(c, v); }
    // 0c42ae  push 4
    X86_AT(c, 0xc42aeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42b0  call 0xba404
    X86_AT(c, 0xc42b0u);
    push32(c, 0xc42b5u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc42b5u);
    X86_TICK(c, 15);
    // 0c42b5  add esp, 0x28
    X86_AT(c, 0xc42b5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c42b8  push 0xd
    X86_AT(c, 0xc42b8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c42ba  push 0xb
    X86_AT(c, 0xc42bau);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c42bc  push 4
    X86_AT(c, 0xc42bcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42be  call 0xbc174
    X86_AT(c, 0xc42beu);
    push32(c, 0xc42c3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc42c3u);
    X86_TICK(c, 11);
    // 0c42c3  push 0x4088
    X86_AT(c, 0xc42c3u);
    { uint32_t v = 0x4088u; push32(c, v); }
    // 0c42c8  push 4
    X86_AT(c, 0xc42c8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42ca  call 0xba428
    X86_AT(c, 0xc42cau);
    push32(c, 0xc42cfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc42cfu);
    X86_TICK(c, 16);
    // 0c42cf  push 2
    X86_AT(c, 0xc42cfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c42d1  push dword ptr [ebx + 0x22]
    X86_AT(c, 0xc42d1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x22u))); push32(c, v); }
    // 0c42d4  push 4
    X86_AT(c, 0xc42d4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42d6  call 0xba404
    X86_AT(c, 0xc42d6u);
    push32(c, 0xc42dbu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc42dbu);
    X86_TICK(c, 13);
    // 0c42db  push 0xe
    X86_AT(c, 0xc42dbu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c42dd  push 0xb
    X86_AT(c, 0xc42ddu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c42df  push 4
    X86_AT(c, 0xc42dfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42e1  call 0xbc174
    X86_AT(c, 0xc42e1u);
    push32(c, 0xc42e6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc42e6u);
    X86_TICK(c, 11);
    // 0c42e6  push 0x40c0
    X86_AT(c, 0xc42e6u);
    { uint32_t v = 0x40C0u; push32(c, v); }
    // 0c42eb  push 4
    X86_AT(c, 0xc42ebu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42ed  call 0xba428
    X86_AT(c, 0xc42edu);
    push32(c, 0xc42f2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc42f2u);
    X86_TICK(c, 16);
    // 0c42f2  push 2
    X86_AT(c, 0xc42f2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c42f4  push dword ptr [ebx + 0x26]
    X86_AT(c, 0xc42f4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x26u))); push32(c, v); }
    // 0c42f7  push 4
    X86_AT(c, 0xc42f7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c42f9  call 0xba404
    X86_AT(c, 0xc42f9u);
    push32(c, 0xc42feu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc42feu);
    X86_TICK(c, 15);
    // 0c42fe  add esp, 0x40
    X86_AT(c, 0xc42feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c4301  push 0xf
    X86_AT(c, 0xc4301u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c4303  push 0xb
    X86_AT(c, 0xc4303u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4305  push 4
    X86_AT(c, 0xc4305u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4307  call 0xbc174
    X86_AT(c, 0xc4307u);
    push32(c, 0xc430cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc430cu);
    X86_TICK(c, 11);
    // 0c430c  push 0x40f8
    X86_AT(c, 0xc430cu);
    { uint32_t v = 0x40F8u; push32(c, v); }
    // 0c4311  push 4
    X86_AT(c, 0xc4311u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4313  call 0xba428
    X86_AT(c, 0xc4313u);
    push32(c, 0xc4318u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4318u);
    X86_TICK(c, 16);
    // 0c4318  push 2
    X86_AT(c, 0xc4318u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c431a  push dword ptr [ebx + 0x2a]
    X86_AT(c, 0xc431au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x2Au))); push32(c, v); }
    // 0c431d  push 4
    X86_AT(c, 0xc431du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c431f  call 0xba404
    X86_AT(c, 0xc431fu);
    push32(c, 0xc4324u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc4324u);
    X86_TICK(c, 13);
    // 0c4324  push 0x10
    X86_AT(c, 0xc4324u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0c4326  push 0xb
    X86_AT(c, 0xc4326u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4328  push 4
    X86_AT(c, 0xc4328u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c432a  call 0xbc174
    X86_AT(c, 0xc432au);
    push32(c, 0xc432fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc432fu);
    X86_TICK(c, 11);
    // 0c432f  push 0x4130
    X86_AT(c, 0xc432fu);
    { uint32_t v = 0x4130u; push32(c, v); }
    // 0c4334  push 4
    X86_AT(c, 0xc4334u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4336  call 0xba428
    X86_AT(c, 0xc4336u);
    push32(c, 0xc433bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc433bu);
    X86_TICK(c, 16);
    // 0c433b  push 4
    X86_AT(c, 0xc433bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c433d  push dword ptr [ebx + 0x35]
    X86_AT(c, 0xc433du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x35u))); push32(c, v); }
    // 0c4340  push 4
    X86_AT(c, 0xc4340u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4342  call 0xba404
    X86_AT(c, 0xc4342u);
    push32(c, 0xc4347u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc4347u);
    X86_TICK(c, 15);
    // 0c4347  add esp, 0x40
    X86_AT(c, 0xc4347u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c434a  push 0x11
    X86_AT(c, 0xc434au);
    { uint32_t v = 0x11u; push32(c, v); }
    // 0c434c  push 0xb
    X86_AT(c, 0xc434cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c434e  push 4
    X86_AT(c, 0xc434eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4350  call 0xbc174
    X86_AT(c, 0xc4350u);
    push32(c, 0xc4355u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4355u);
    X86_TICK(c, 11);
    // 0c4355  push 0x4168
    X86_AT(c, 0xc4355u);
    { uint32_t v = 0x4168u; push32(c, v); }
    // 0c435a  push 4
    X86_AT(c, 0xc435au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c435c  call 0xba428
    X86_AT(c, 0xc435cu);
    push32(c, 0xc4361u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4361u);
    X86_TICK(c, 16);
    // 0c4361  push 4
    X86_AT(c, 0xc4361u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4363  push dword ptr [ebx + 0x3d]
    X86_AT(c, 0xc4363u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x3Du))); push32(c, v); }
    // 0c4366  push 4
    X86_AT(c, 0xc4366u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4368  call 0xba404
    X86_AT(c, 0xc4368u);
    push32(c, 0xc436du); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc436du);
    X86_TICK(c, 15);
    // 0c436d  add esp, 0x20
    X86_AT(c, 0xc436du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c4370  push 0x12
    X86_AT(c, 0xc4370u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0c4372  push 0xb
    X86_AT(c, 0xc4372u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4374  push 4
    X86_AT(c, 0xc4374u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4376  call 0xbc174
    X86_AT(c, 0xc4376u);
    push32(c, 0xc437bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc437bu);
    X86_TICK(c, 11);
    // 0c437b  push 0x41a0
    X86_AT(c, 0xc437bu);
    { uint32_t v = 0x41A0u; push32(c, v); }
    // 0c4380  push 4
    X86_AT(c, 0xc4380u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4382  call 0xba428
    X86_AT(c, 0xc4382u);
    push32(c, 0xc4387u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4387u);
    X86_TICK(c, 61);
    // 0c4387  push 4
    X86_AT(c, 0xc4387u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4389  mov eax, dword ptr [ebx + 0x45]
    X86_AT(c, 0xc4389u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x45u)));
    // 0c438c  cdq 
    X86_AT(c, 0xc438cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c438d  mov ecx, 0x64
    X86_AT(c, 0xc438du);
    c.r[1] = 0x64u;
    // 0c4392  idiv ecx
    X86_AT(c, 0xc4392u);
    x86_idiv(c, c.r[1], 4, 0xc4392u);
    // 0c4394  push eax
    X86_AT(c, 0xc4394u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4395  push 4
    X86_AT(c, 0xc4395u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4397  call 0xba404
    X86_AT(c, 0xc4397u);
    push32(c, 0xc439cu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc439cu);
    X86_TICK(c, 13);
    // 0c439c  push 0x13
    X86_AT(c, 0xc439cu);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0c439e  push 0xb
    X86_AT(c, 0xc439eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c43a0  push 4
    X86_AT(c, 0xc43a0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43a2  call 0xbc174
    X86_AT(c, 0xc43a2u);
    push32(c, 0xc43a7u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc43a7u);
    X86_TICK(c, 11);
    // 0c43a7  push 0x41d8
    X86_AT(c, 0xc43a7u);
    { uint32_t v = 0x41D8u; push32(c, v); }
    // 0c43ac  push 4
    X86_AT(c, 0xc43acu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43ae  call 0xba428
    X86_AT(c, 0xc43aeu);
    push32(c, 0xc43b3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc43b3u);
    X86_TICK(c, 16);
    // 0c43b3  push 4
    X86_AT(c, 0xc43b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43b5  push dword ptr [ebx + 0x49]
    X86_AT(c, 0xc43b5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x49u))); push32(c, v); }
    // 0c43b8  push 4
    X86_AT(c, 0xc43b8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43ba  call 0xba404
    X86_AT(c, 0xc43bau);
    push32(c, 0xc43bfu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc43bfu);
    X86_TICK(c, 11);
    // 0c43bf  add esp, 0x40
    X86_AT(c, 0xc43bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c43c2  push 0x4210
    X86_AT(c, 0xc43c2u);
    { uint32_t v = 0x4210u; push32(c, v); }
    // 0c43c7  call 0xbc50c
    X86_AT(c, 0xc43c7u);
    push32(c, 0xc43ccu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc43ccu);
    X86_TICK(c, 2);
    // 0c43cc  add esp, 4
    X86_AT(c, 0xc43ccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c43cf:
    X86_TICK(c, 9);
    // 0c43cf  push 4
    X86_AT(c, 0xc43cfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43d1  call 0xb9930
    X86_AT(c, 0xc43d1u);
    push32(c, 0xc43d6u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc43d6u);
    X86_TICK(c, 9);
    // 0c43d6  add esp, 4
    X86_AT(c, 0xc43d6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c43d9  and al, al
    X86_AT(c, 0xc43d9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c43db  je 0xc43cf
    X86_AT(c, 0xc43dbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc43cfu); goto L_c43cf; }
    X86_TICK(c, 9);
    // 0c43dd  push 2
    X86_AT(c, 0xc43ddu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c43df  call 0xbbb5c
    X86_AT(c, 0xc43dfu);
    push32(c, 0xc43e4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc43e4u);
    X86_TICK(c, 9);
    // 0c43e4  push 4
    X86_AT(c, 0xc43e4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43e6  call 0xbb6b0
    X86_AT(c, 0xc43e6u);
    push32(c, 0xc43ebu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc43ebu);
    X86_TICK(c, 17);
    // 0c43eb  push 0x17
    X86_AT(c, 0xc43ebu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c43ed  push 0x4d
    X86_AT(c, 0xc43edu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c43ef  push 4
    X86_AT(c, 0xc43efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43f1  push 0
    X86_AT(c, 0xc43f1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c43f3  push 4
    X86_AT(c, 0xc43f3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c43f5  call 0xbc2b0
    X86_AT(c, 0xc43f5u);
    push32(c, 0xc43fau); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc43fau);
    X86_TICK(c, 9);
    // 0c43fa  add esp, 0x1c
    X86_AT(c, 0xc43fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c43fd  jmp 0xc3ef8
    X86_AT(c, 0xc43fdu);
    X86_POLL(c, 0xc3ef8u); goto L_c3ef8;
L_c4402:
    X86_TICK(c, 28);
    // 0c4402  pop edi
    X86_AT(c, 0xc4402u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c4403  pop esi
    X86_AT(c, 0xc4403u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c4404  pop ebx
    X86_AT(c, 0xc4404u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c4405  leave 
    X86_AT(c, 0xc4405u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c4406  ret 
    X86_AT(c, 0xc4406u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc3ef8u, "ran off the end of a function");
}
void f_000c4408(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0c4408  push ebp
    X86_AT(c, 0xc4408u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c4409  mov ebp, esp
    X86_AT(c, 0xc4409u);
    c.r[5] = c.r[4];
    // 0c440b  sub esp, 0xa78
    X86_AT(c, 0xc440bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xA78u, 0, 4); }
    // 0c4411  push ebx
    X86_AT(c, 0xc4411u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c4412  push esi
    X86_AT(c, 0xc4412u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c4413  push edi
    X86_AT(c, 0xc4413u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c4414  push 9
    X86_AT(c, 0xc4414u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c4416  push 0x2b
    X86_AT(c, 0xc4416u);
    { uint32_t v = 0x2Bu; push32(c, v); }
    // 0c4418  push 3
    X86_AT(c, 0xc4418u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c441a  push 2
    X86_AT(c, 0xc441au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c441c  push 4
    X86_AT(c, 0xc441cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c441e  call 0xbc2b0
    X86_AT(c, 0xc441eu);
    push32(c, 0xc4423u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc4423u);
    X86_TICK(c, 13);
    // 0c4423  push 3
    X86_AT(c, 0xc4423u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4425  push 0
    X86_AT(c, 0xc4425u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4427  push 4
    X86_AT(c, 0xc4427u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4429  call 0xbc174
    X86_AT(c, 0xc4429u);
    push32(c, 0xc442eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc442eu);
    X86_TICK(c, 11);
    // 0c442e  push 0xe
    X86_AT(c, 0xc442eu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c4430  push 4
    X86_AT(c, 0xc4430u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4432  call 0xbc3ec
    X86_AT(c, 0xc4432u);
    push32(c, 0xc4437u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc4437u);
    X86_TICK(c, 9);
    // 0c4437  push 4
    X86_AT(c, 0xc4437u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4439  call 0xbb6b0
    X86_AT(c, 0xc4439u);
    push32(c, 0xc443eu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc443eu);
    X86_TICK(c, 11);
    // 0c443e  push 0x4244
    X86_AT(c, 0xc443eu);
    { uint32_t v = 0x4244u; push32(c, v); }
    // 0c4443  push 4
    X86_AT(c, 0xc4443u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4445  call 0xba428
    X86_AT(c, 0xc4445u);
    push32(c, 0xc444au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc444au);
    X86_TICK(c, 11);
    // 0c444a  push 0xb
    X86_AT(c, 0xc444au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c444c  push 4
    X86_AT(c, 0xc444cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c444e  call 0xbc3ec
    X86_AT(c, 0xc444eu);
    push32(c, 0xc4453u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc4453u);
    X86_TICK(c, 11);
    // 0c4453  add esp, 0x3c
    X86_AT(c, 0xc4453u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c4456  push 4
    X86_AT(c, 0xc4456u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4458  call 0xbb6b0
    X86_AT(c, 0xc4458u);
    push32(c, 0xc445du); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc445du);
    X86_TICK(c, 13);
    // 0c445d  push 3
    X86_AT(c, 0xc445du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c445f  push 0x1f
    X86_AT(c, 0xc445fu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c4461  push 4
    X86_AT(c, 0xc4461u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4463  call 0xbc174
    X86_AT(c, 0xc4463u);
    push32(c, 0xc4468u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4468u);
    X86_TICK(c, 14);
    // 0c4468  add esp, 0x10
    X86_AT(c, 0xc4468u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c446b  cmp dword ptr [0xa4a62], 0
    X86_AT(c, 0xc446bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A62u))), 0x0u, 0, 4);
    // 0c4472  je 0xc44a0
    X86_AT(c, 0xc4472u);
    if (x86_cc(c, 4)) { goto L_c44a0; }
    X86_TICK(c, 11);
    // 0c4474  push 0x4284
    X86_AT(c, 0xc4474u);
    { uint32_t v = 0x4284u; push32(c, v); }
    // 0c4479  push 4
    X86_AT(c, 0xc4479u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c447b  call 0xba428
    X86_AT(c, 0xc447bu);
    push32(c, 0xc4480u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4480u);
    X86_TICK(c, 9);
    // 0c4480  push 0x42d0
    X86_AT(c, 0xc4480u);
    { uint32_t v = 0x42D0u; push32(c, v); }
    // 0c4485  call 0xbc50c
    X86_AT(c, 0xc4485u);
    push32(c, 0xc448au); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc448au);
    X86_TICK(c, 2);
    // 0c448a  add esp, 0xc
    X86_AT(c, 0xc448au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c448d:
    X86_TICK(c, 9);
    // 0c448d  push 4
    X86_AT(c, 0xc448du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c448f  call 0xb9930
    X86_AT(c, 0xc448fu);
    push32(c, 0xc4494u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc4494u);
    X86_TICK(c, 9);
    // 0c4494  add esp, 4
    X86_AT(c, 0xc4494u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4497  and al, al
    X86_AT(c, 0xc4497u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c4499  je 0xc448d
    X86_AT(c, 0xc4499u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc448du); goto L_c448d; }
    X86_TICK(c, 7);
    // 0c449b  jmp 0xc4920
    X86_AT(c, 0xc449bu);
    goto L_c4920;
L_c44a0:
    X86_TICK(c, 13);
    // 0c44a0  push 3
    X86_AT(c, 0xc44a0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c44a2  push 0x1f
    X86_AT(c, 0xc44a2u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c44a4  push 4
    X86_AT(c, 0xc44a4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c44a6  call 0xbc174
    X86_AT(c, 0xc44a6u);
    push32(c, 0xc44abu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc44abu);
    X86_TICK(c, 11);
    // 0c44ab  push 0x4304
    X86_AT(c, 0xc44abu);
    { uint32_t v = 0x4304u; push32(c, v); }
    // 0c44b0  push 4
    X86_AT(c, 0xc44b0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c44b2  call 0xba428
    X86_AT(c, 0xc44b2u);
    push32(c, 0xc44b7u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc44b7u);
    X86_TICK(c, 27);
    // 0c44b7  lea eax, [ebp - 0xa70]
    X86_AT(c, 0xc44b7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFF590u);
    // 0c44bd  push eax
    X86_AT(c, 0xc44bdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c44be  push 4
    X86_AT(c, 0xc44beu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c44c0  push 7
    X86_AT(c, 0xc44c0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c44c2  push 1
    X86_AT(c, 0xc44c2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c44c4  push 0xe
    X86_AT(c, 0xc44c4u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c44c6  push 0x14
    X86_AT(c, 0xc44c6u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c44c8  push 4
    X86_AT(c, 0xc44c8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c44ca  lea eax, [ebp - 0x20]
    X86_AT(c, 0xc44cau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0c44cd  push eax
    X86_AT(c, 0xc44cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c44ce  call 0xb9e9c
    X86_AT(c, 0xc44ceu);
    push32(c, 0xc44d3u); x86_call_known(c, 0xb9e9cu, f_000b9e9c); X86_RET(c, 0xc44d3u);
    X86_TICK(c, 4);
    // 0c44d3  sub edi, edi
    X86_AT(c, 0xc44d3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c44d5  add esp, 0x34
    X86_AT(c, 0xc44d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
L_c44d8:
    X86_TICK(c, 7);
    // 0c44d8  cmp edi, 0x14
    X86_AT(c, 0xc44d8u);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c44db  jge 0xc4540
    X86_AT(c, 0xc44dbu);
    if (x86_cc(c, 13)) { goto L_c4540; }
    X86_TICK(c, 15);
    // 0c44dd  lea eax, [edi + 4]
    X86_AT(c, 0xc44ddu);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0c44e0  push eax
    X86_AT(c, 0xc44e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c44e1  push 1
    X86_AT(c, 0xc44e1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c44e3  push 4
    X86_AT(c, 0xc44e3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c44e5  call 0xbc174
    X86_AT(c, 0xc44e5u);
    push32(c, 0xc44eau); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc44eau);
    X86_TICK(c, 17);
    // 0c44ea  push 2
    X86_AT(c, 0xc44eau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c44ec  lea eax, [edi + 1]
    X86_AT(c, 0xc44ecu);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0c44ef  push eax
    X86_AT(c, 0xc44efu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c44f0  push 4
    X86_AT(c, 0xc44f0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c44f2  mov dword ptr [ebp - 0xa78], eax
    X86_AT(c, 0xc44f2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF588u)), c.r[0]);
    // 0c44f8  call 0xba404
    X86_AT(c, 0xc44f8u);
    push32(c, 0xc44fdu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc44fdu);
    X86_TICK(c, 11);
    // 0c44fd  push 0x4350
    X86_AT(c, 0xc44fdu);
    { uint32_t v = 0x4350u; push32(c, v); }
    // 0c4502  push 4
    X86_AT(c, 0xc4502u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4504  call 0xbbba4
    X86_AT(c, 0xc4504u);
    push32(c, 0xc4509u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc4509u);
    X86_TICK(c, 40);
    // 0c4509  lea eax, [edi + 0x41]
    X86_AT(c, 0xc4509u);
    c.r[0] = (uint32_t)(c.r[7] + 0x41u);
    // 0c450c  push eax
    X86_AT(c, 0xc450cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c450d  mov eax, edi
    X86_AT(c, 0xc450du);
    c.r[0] = c.r[7];
    // 0c450f  lea edx, [eax + eax*2]
    X86_AT(c, 0xc450fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4512  shl edx, 5
    X86_AT(c, 0xc4512u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4515  add edx, eax
    X86_AT(c, 0xc4515u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4517  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4517u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c451a  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc451au);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c4521  push eax
    X86_AT(c, 0xc4521u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4522  push eax
    X86_AT(c, 0xc4522u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4523  mov eax, edi
    X86_AT(c, 0xc4523u);
    c.r[0] = c.r[7];
    // 0c4525  add al, 0x41
    X86_AT(c, 0xc4525u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0c4527  push eax
    X86_AT(c, 0xc4527u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4528  push edi
    X86_AT(c, 0xc4528u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c4529  lea eax, [ebp - 0xa70]
    X86_AT(c, 0xc4529u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFF590u);
    // 0c452f  push eax
    X86_AT(c, 0xc452fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4530  call 0xb9ed8
    X86_AT(c, 0xc4530u);
    push32(c, 0xc4535u); x86_call_known(c, 0xb9ed8u, f_000b9ed8); X86_RET(c, 0xc4535u);
    X86_TICK(c, 13);
    // 0c4535  mov edi, dword ptr [ebp - 0xa78]
    X86_AT(c, 0xc4535u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF588u)));
    // 0c453b  add esp, 0x38
    X86_AT(c, 0xc453bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c453e  jmp 0xc44d8
    X86_AT(c, 0xc453eu);
    X86_POLL(c, 0xc44d8u); goto L_c44d8;
L_c4540:
    X86_TICK(c, 9);
    // 0c4540  push 4
    X86_AT(c, 0xc4540u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4542  call 0xbb6b0
    X86_AT(c, 0xc4542u);
    push32(c, 0xc4547u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4547u);
    X86_TICK(c, 13);
    // 0c4547  push 3
    X86_AT(c, 0xc4547u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4549  push 0x1f
    X86_AT(c, 0xc4549u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c454b  push 4
    X86_AT(c, 0xc454bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c454d  call 0xbc174
    X86_AT(c, 0xc454du);
    push32(c, 0xc4552u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4552u);
    X86_TICK(c, 11);
    // 0c4552  push 0x4354
    X86_AT(c, 0xc4552u);
    { uint32_t v = 0x4354u; push32(c, v); }
    // 0c4557  push 4
    X86_AT(c, 0xc4557u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4559  call 0xba428
    X86_AT(c, 0xc4559u);
    push32(c, 0xc455eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc455eu);
    X86_TICK(c, 15);
    // 0c455e  push 1
    X86_AT(c, 0xc455eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c4560  lea eax, [ebp - 0x20]
    X86_AT(c, 0xc4560u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0c4563  push eax
    X86_AT(c, 0xc4563u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4564  push 4
    X86_AT(c, 0xc4564u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4566  call 0xba310
    X86_AT(c, 0xc4566u);
    push32(c, 0xc456bu); x86_call_known(c, 0xba310u, f_000ba310); X86_RET(c, 0xc456bu);
    X86_TICK(c, 12);
    // 0c456b  xchg ebx, eax
    X86_AT(c, 0xc456bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c456c  add esp, 0x24
    X86_AT(c, 0xc456cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0c456f  cmp bl, 1
    X86_AT(c, 0xc456fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c4572  jne 0xc45d2
    X86_AT(c, 0xc4572u);
    if (x86_cc(c, 5)) { goto L_c45d2; }
    X86_TICK(c, 7);
    // 0c4574  sub eax, eax
    X86_AT(c, 0xc4574u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c4576  mov dword ptr [0xa4a62], eax
    X86_AT(c, 0xc4576u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A62u)), c.r[0]);
    // 0c457b  xchg edi, eax
    X86_AT(c, 0xc457bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_c457c:
    X86_TICK(c, 7);
    // 0c457c  cmp edi, 0x14
    X86_AT(c, 0xc457cu);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c457f  jge 0xc459b
    X86_AT(c, 0xc457fu);
    if (x86_cc(c, 13)) { goto L_c459b; }
    X86_TICK(c, 22);
    // 0c4581  mov eax, edi
    X86_AT(c, 0xc4581u);
    c.r[0] = c.r[7];
    // 0c4583  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4583u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4586  shl edx, 5
    X86_AT(c, 0xc4586u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4589  add edx, eax
    X86_AT(c, 0xc4589u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c458b  lea edx, [eax + edx*2]
    X86_AT(c, 0xc458bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c458e  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc458eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c4598  inc edi
    X86_AT(c, 0xc4598u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c4599  jmp 0xc457c
    X86_AT(c, 0xc4599u);
    X86_POLL(c, 0xc457cu); goto L_c457c;
L_c459b:
    X86_TICK(c, 13);
    // 0c459b  push 3
    X86_AT(c, 0xc459bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c459d  push 0x1f
    X86_AT(c, 0xc459du);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c459f  push 4
    X86_AT(c, 0xc459fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c45a1  call 0xbc174
    X86_AT(c, 0xc45a1u);
    push32(c, 0xc45a6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc45a6u);
    X86_TICK(c, 11);
    // 0c45a6  push 0x43a4
    X86_AT(c, 0xc45a6u);
    { uint32_t v = 0x43A4u; push32(c, v); }
    // 0c45ab  push 4
    X86_AT(c, 0xc45abu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c45ad  call 0xba428
    X86_AT(c, 0xc45adu);
    push32(c, 0xc45b2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc45b2u);
    X86_TICK(c, 9);
    // 0c45b2  push 0x43f8
    X86_AT(c, 0xc45b2u);
    { uint32_t v = 0x43F8u; push32(c, v); }
    // 0c45b7  call 0xbc50c
    X86_AT(c, 0xc45b7u);
    push32(c, 0xc45bcu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc45bcu);
    X86_TICK(c, 2);
    // 0c45bc  add esp, 0x18
    X86_AT(c, 0xc45bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c45bf:
    X86_TICK(c, 9);
    // 0c45bf  push 4
    X86_AT(c, 0xc45bfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c45c1  call 0xb9930
    X86_AT(c, 0xc45c1u);
    push32(c, 0xc45c6u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc45c6u);
    X86_TICK(c, 9);
    // 0c45c6  add esp, 4
    X86_AT(c, 0xc45c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c45c9  and al, al
    X86_AT(c, 0xc45c9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c45cb  je 0xc45bf
    X86_AT(c, 0xc45cbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc45bfu); goto L_c45bf; }
    X86_TICK(c, 7);
    // 0c45cd  jmp 0xc4920
    X86_AT(c, 0xc45cdu);
    goto L_c4920;
L_c45d2:
    X86_TICK(c, 7);
    // 0c45d2  cmp bl, 0x41
    X86_AT(c, 0xc45d2u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0c45d5  jb 0xc4540
    X86_AT(c, 0xc45d5u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xc4540u); goto L_c4540; }
    X86_TICK(c, 28);
    // 0c45db  sub bl, 0x41
    X86_AT(c, 0xc45dbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x41u, 0, 1)); }
    // 0c45de  movzx ebx, bl
    X86_AT(c, 0xc45deu);
    c.r[3] = g8(c, 3);
    // 0c45e1  mov eax, ebx
    X86_AT(c, 0xc45e1u);
    c.r[0] = c.r[3];
    // 0c45e3  lea edx, [eax + eax*2]
    X86_AT(c, 0xc45e3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c45e6  shl edx, 5
    X86_AT(c, 0xc45e6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c45e9  add edx, eax
    X86_AT(c, 0xc45e9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c45eb  lea edx, [eax + edx*2]
    X86_AT(c, 0xc45ebu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c45ee  cmp dword ptr [edx + 0xa4dc5], 0
    X86_AT(c, 0xc45eeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u))), 0x0u, 0, 4);
    // 0c45f5  jne 0xc462e
    X86_AT(c, 0xc45f5u);
    if (x86_cc(c, 5)) { goto L_c462e; }
    X86_TICK(c, 13);
    // 0c45f7  push 3
    X86_AT(c, 0xc45f7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c45f9  push 0x1f
    X86_AT(c, 0xc45f9u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c45fb  push 4
    X86_AT(c, 0xc45fbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c45fd  call 0xbc174
    X86_AT(c, 0xc45fdu);
    push32(c, 0xc4602u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4602u);
    X86_TICK(c, 11);
    // 0c4602  push 0x442c
    X86_AT(c, 0xc4602u);
    { uint32_t v = 0x442Cu; push32(c, v); }
    // 0c4607  push 4
    X86_AT(c, 0xc4607u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4609  call 0xba428
    X86_AT(c, 0xc4609u);
    push32(c, 0xc460eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc460eu);
    X86_TICK(c, 9);
    // 0c460e  push 0x4478
    X86_AT(c, 0xc460eu);
    { uint32_t v = 0x4478u; push32(c, v); }
    // 0c4613  call 0xbc50c
    X86_AT(c, 0xc4613u);
    push32(c, 0xc4618u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc4618u);
    X86_TICK(c, 2);
    // 0c4618  add esp, 0x18
    X86_AT(c, 0xc4618u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c461b:
    X86_TICK(c, 9);
    // 0c461b  push 4
    X86_AT(c, 0xc461bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c461d  call 0xb9930
    X86_AT(c, 0xc461du);
    push32(c, 0xc4622u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc4622u);
    X86_TICK(c, 9);
    // 0c4622  add esp, 4
    X86_AT(c, 0xc4622u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4625  and al, al
    X86_AT(c, 0xc4625u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c4627  je 0xc461b
    X86_AT(c, 0xc4627u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc461bu); goto L_c461b; }
    X86_TICK(c, 7);
    // 0c4629  jmp 0xc47bb
    X86_AT(c, 0xc4629u);
    goto L_c47bb;
L_c462e:
    X86_TICK(c, 26);
    // 0c462e  movzx ebx, bl
    X86_AT(c, 0xc462eu);
    c.r[3] = g8(c, 3);
    // 0c4631  mov eax, ebx
    X86_AT(c, 0xc4631u);
    c.r[0] = c.r[3];
    // 0c4633  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4633u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4636  shl edx, 5
    X86_AT(c, 0xc4636u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4639  add edx, eax
    X86_AT(c, 0xc4639u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c463b  lea edx, [eax + edx*2]
    X86_AT(c, 0xc463bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c463e  cmp byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc463eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu))), 0x0u, 0, 1);
    // 0c4645  jne 0xc467e
    X86_AT(c, 0xc4645u);
    if (x86_cc(c, 5)) { goto L_c467e; }
    X86_TICK(c, 13);
    // 0c4647  push 3
    X86_AT(c, 0xc4647u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4649  push 0x1f
    X86_AT(c, 0xc4649u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c464b  push 4
    X86_AT(c, 0xc464bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c464d  call 0xbc174
    X86_AT(c, 0xc464du);
    push32(c, 0xc4652u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4652u);
    X86_TICK(c, 11);
    // 0c4652  push 0x44ac
    X86_AT(c, 0xc4652u);
    { uint32_t v = 0x44ACu; push32(c, v); }
    // 0c4657  push 4
    X86_AT(c, 0xc4657u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4659  call 0xba428
    X86_AT(c, 0xc4659u);
    push32(c, 0xc465eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc465eu);
    X86_TICK(c, 9);
    // 0c465e  push 0x44f8
    X86_AT(c, 0xc465eu);
    { uint32_t v = 0x44F8u; push32(c, v); }
    // 0c4663  call 0xbc50c
    X86_AT(c, 0xc4663u);
    push32(c, 0xc4668u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc4668u);
    X86_TICK(c, 2);
    // 0c4668  add esp, 0x18
    X86_AT(c, 0xc4668u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c466b:
    X86_TICK(c, 9);
    // 0c466b  push 4
    X86_AT(c, 0xc466bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c466d  call 0xb9930
    X86_AT(c, 0xc466du);
    push32(c, 0xc4672u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc4672u);
    X86_TICK(c, 9);
    // 0c4672  add esp, 4
    X86_AT(c, 0xc4672u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4675  and al, al
    X86_AT(c, 0xc4675u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c4677  je 0xc466b
    X86_AT(c, 0xc4677u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc466bu); goto L_c466b; }
    X86_TICK(c, 7);
    // 0c4679  jmp 0xc47bb
    X86_AT(c, 0xc4679u);
    goto L_c47bb;
L_c467e:
    X86_TICK(c, 49);
    // 0c467e  movzx ebx, bl
    X86_AT(c, 0xc467eu);
    c.r[3] = g8(c, 3);
    // 0c4681  mov eax, ebx
    X86_AT(c, 0xc4681u);
    c.r[0] = c.r[3];
    // 0c4683  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4683u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4686  shl edx, 5
    X86_AT(c, 0xc4686u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4689  add edx, eax
    X86_AT(c, 0xc4689u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c468b  lea edx, [eax + edx*2]
    X86_AT(c, 0xc468bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c468e  mov dword ptr [edx + 0xa4dc5], 0
    X86_AT(c, 0xc468eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0x0u);
    // 0c4698  mov eax, dword ptr [0xa4a62]
    X86_AT(c, 0xc4698u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A62u)));
    // 0c469d  mov dword ptr [eax*4 + 0xa4a7e], ebx
    X86_AT(c, 0xc469du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA4A7Eu)), c.r[3]);
    // 0c46a4  inc dword ptr [0xa4a62]
    X86_AT(c, 0xc46a4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA4A62u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c46aa  mov eax, dword ptr [0xa4a62]
    X86_AT(c, 0xc46aau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A62u)));
    // 0c46af  add eax, 3
    X86_AT(c, 0xc46afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3u, 0, 4); }
    // 0c46b2  push eax
    X86_AT(c, 0xc46b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c46b3  push 0x37
    X86_AT(c, 0xc46b3u);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0c46b5  push 4
    X86_AT(c, 0xc46b5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c46b7  mov dword ptr [ebp - 0xa78], edx
    X86_AT(c, 0xc46b7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF588u)), c.r[2]);
    // 0c46bd  call 0xbc174
    X86_AT(c, 0xc46bdu);
    push32(c, 0xc46c2u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc46c2u);
    X86_TICK(c, 16);
    // 0c46c2  push 2
    X86_AT(c, 0xc46c2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c46c4  push dword ptr [0xa4a62]
    X86_AT(c, 0xc46c4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A62u))); push32(c, v); }
    // 0c46ca  push 4
    X86_AT(c, 0xc46cau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c46cc  call 0xba404
    X86_AT(c, 0xc46ccu);
    push32(c, 0xc46d1u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc46d1u);
    X86_TICK(c, 11);
    // 0c46d1  push 0x452c
    X86_AT(c, 0xc46d1u);
    { uint32_t v = 0x452Cu; push32(c, v); }
    // 0c46d6  push 4
    X86_AT(c, 0xc46d6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c46d8  call 0xbbba4
    X86_AT(c, 0xc46d8u);
    push32(c, 0xc46ddu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc46ddu);
    X86_TICK(c, 17);
    // 0c46dd  mov eax, dword ptr [ebp - 0xa78]
    X86_AT(c, 0xc46ddu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF588u)));
    // 0c46e3  lea edx, [eax*1 + 0xa4dac]
    X86_AT(c, 0xc46e3u);
    c.r[2] = (uint32_t)(c.r[0] + 0xA4DACu);
    // 0c46ea  push edx
    X86_AT(c, 0xc46eau);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c46eb  push 4
    X86_AT(c, 0xc46ebu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c46ed  call 0xbbfe0
    X86_AT(c, 0xc46edu);
    push32(c, 0xc46f2u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc46f2u);
    X86_TICK(c, 14);
    // 0c46f2  add esp, 0x28
    X86_AT(c, 0xc46f2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c46f5  cmp dword ptr [0xa4a62], 4
    X86_AT(c, 0xc46f5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A62u))), 0x4u, 0, 4);
    // 0c46fc  jne 0xc4540
    X86_AT(c, 0xc46fcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc4540u); goto L_c4540; }
    X86_TICK(c, 4);
    // 0c4702  mov dword ptr [ebp - 0xa74], 0xffffffff
    X86_AT(c, 0xc4702u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF58Cu)), 0xFFFFFFFFu);
    // 0c470c  sub edi, edi
    X86_AT(c, 0xc470cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c470e:
    X86_TICK(c, 7);
    // 0c470e  cmp edi, 4
    X86_AT(c, 0xc470eu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0c4711  jge 0xc4740
    X86_AT(c, 0xc4711u);
    if (x86_cc(c, 13)) { goto L_c4740; }
    X86_TICK(c, 24);
    // 0c4713  mov eax, dword ptr [edi*4 + 0xa4a7e]
    X86_AT(c, 0xc4713u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A7Eu)));
    // 0c471a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc471au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c471d  shl edx, 5
    X86_AT(c, 0xc471du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4720  add edx, eax
    X86_AT(c, 0xc4720u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4722  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4722u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4725  mov al, byte ptr [edx + 0xa4dc9]
    X86_AT(c, 0xc4725u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC9u))));
    // 0c472b  cmp al, 0x47
    X86_AT(c, 0xc472bu);
    (void)x86_sub(c, g8(c, 0), 0x47u, 0, 1);
    // 0c472d  je 0xc4733
    X86_AT(c, 0xc472du);
    if (x86_cc(c, 4)) { goto L_c4733; }
    X86_TICK(c, 7);
    // 0c472f  cmp al, 0x50
    X86_AT(c, 0xc472fu);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 0c4731  jne 0xc473d
    X86_AT(c, 0xc4731u);
    if (x86_cc(c, 5)) { goto L_c473d; }
L_c4733:
    X86_TICK(c, 2);
    // 0c4733  mov dword ptr [ebp - 0xa74], 0
    X86_AT(c, 0xc4733u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF58Cu)), 0x0u);
L_c473d:
    X86_TICK(c, 9);
    // 0c473d  inc edi
    X86_AT(c, 0xc473du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c473e  jmp 0xc470e
    X86_AT(c, 0xc473eu);
    X86_POLL(c, 0xc470eu); goto L_c470e;
L_c4740:
    X86_TICK(c, 12);
    // 0c4740  cmp dword ptr [ebp - 0xa74], 0xffffffff
    X86_AT(c, 0xc4740u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF58Cu))), 0xFFFFFFFFu, 0, 4);
    // 0c4747  jne 0xc47d1
    X86_AT(c, 0xc4747u);
    if (x86_cc(c, 5)) { goto L_c47d1; }
    X86_TICK(c, 13);
    // 0c474d  push 3
    X86_AT(c, 0xc474du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c474f  push 0x1f
    X86_AT(c, 0xc474fu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c4751  push 4
    X86_AT(c, 0xc4751u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4753  call 0xbc174
    X86_AT(c, 0xc4753u);
    push32(c, 0xc4758u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4758u);
    X86_TICK(c, 11);
    // 0c4758  push 0x4530
    X86_AT(c, 0xc4758u);
    { uint32_t v = 0x4530u; push32(c, v); }
    // 0c475d  push 4
    X86_AT(c, 0xc475du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c475f  call 0xba428
    X86_AT(c, 0xc475fu);
    push32(c, 0xc4764u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4764u);
    X86_TICK(c, 4);
    // 0c4764  sub edi, edi
    X86_AT(c, 0xc4764u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c4766  add esp, 0x14
    X86_AT(c, 0xc4766u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c4769:
    X86_TICK(c, 7);
    // 0c4769  cmp edi, 4
    X86_AT(c, 0xc4769u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0c476c  jge 0xc477f
    X86_AT(c, 0xc476cu);
    if (x86_cc(c, 13)) { goto L_c477f; }
    X86_TICK(c, 15);
    // 0c476e  sub eax, eax
    X86_AT(c, 0xc476eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c4770  mov dword ptr [edi*4 + 0xa4a7e], eax
    X86_AT(c, 0xc4770u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A7Eu)), c.r[0]);
    // 0c4777  mov dword ptr [0xa4a62], eax
    X86_AT(c, 0xc4777u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A62u)), c.r[0]);
    // 0c477c  inc edi
    X86_AT(c, 0xc477cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c477d  jmp 0xc4769
    X86_AT(c, 0xc477du);
    X86_POLL(c, 0xc4769u); goto L_c4769;
L_c477f:
    X86_TICK(c, 2);
    // 0c477f  sub edi, edi
    X86_AT(c, 0xc477fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c4781:
    X86_TICK(c, 7);
    // 0c4781  cmp edi, 0x14
    X86_AT(c, 0xc4781u);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c4784  jge 0xc47a0
    X86_AT(c, 0xc4784u);
    if (x86_cc(c, 13)) { goto L_c47a0; }
    X86_TICK(c, 22);
    // 0c4786  mov eax, edi
    X86_AT(c, 0xc4786u);
    c.r[0] = c.r[7];
    // 0c4788  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4788u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c478b  shl edx, 5
    X86_AT(c, 0xc478bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c478e  add edx, eax
    X86_AT(c, 0xc478eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4790  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4790u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4793  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc4793u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c479d  inc edi
    X86_AT(c, 0xc479du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c479e  jmp 0xc4781
    X86_AT(c, 0xc479eu);
    X86_POLL(c, 0xc4781u); goto L_c4781;
L_c47a0:
    X86_TICK(c, 9);
    // 0c47a0  push 0x457c
    X86_AT(c, 0xc47a0u);
    { uint32_t v = 0x457Cu; push32(c, v); }
    // 0c47a5  call 0xbc50c
    X86_AT(c, 0xc47a5u);
    push32(c, 0xc47aau); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc47aau);
    X86_TICK(c, 2);
    // 0c47aa  add esp, 4
    X86_AT(c, 0xc47aau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c47ad:
    X86_TICK(c, 9);
    // 0c47ad  push 4
    X86_AT(c, 0xc47adu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c47af  call 0xb9930
    X86_AT(c, 0xc47afu);
    push32(c, 0xc47b4u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc47b4u);
    X86_TICK(c, 9);
    // 0c47b4  add esp, 4
    X86_AT(c, 0xc47b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c47b7  and al, al
    X86_AT(c, 0xc47b7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c47b9  je 0xc47ad
    X86_AT(c, 0xc47b9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc47adu); goto L_c47ad; }
L_c47bb:
    X86_TICK(c, 9);
    // 0c47bb  push 2
    X86_AT(c, 0xc47bbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c47bd  call 0xbbb5c
    X86_AT(c, 0xc47bdu);
    push32(c, 0xc47c2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc47c2u);
    X86_TICK(c, 9);
    // 0c47c2  push 4
    X86_AT(c, 0xc47c2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c47c4  call 0xbb6b0
    X86_AT(c, 0xc47c4u);
    push32(c, 0xc47c9u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc47c9u);
    X86_TICK(c, 9);
    // 0c47c9  add esp, 8
    X86_AT(c, 0xc47c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c47cc  jmp 0xc4540
    X86_AT(c, 0xc47ccu);
    X86_POLL(c, 0xc4540u); goto L_c4540;
L_c47d1:
    X86_TICK(c, 17);
    // 0c47d1  push 0x17
    X86_AT(c, 0xc47d1u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c47d3  push 0x38
    X86_AT(c, 0xc47d3u);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0c47d5  push 3
    X86_AT(c, 0xc47d5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c47d7  push 0
    X86_AT(c, 0xc47d7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c47d9  push 4
    X86_AT(c, 0xc47d9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c47db  call 0xbc2b0
    X86_AT(c, 0xc47dbu);
    push32(c, 0xc47e0u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc47e0u);
    X86_TICK(c, 13);
    // 0c47e0  push 3
    X86_AT(c, 0xc47e0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c47e2  push 0x1f
    X86_AT(c, 0xc47e2u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c47e4  push 4
    X86_AT(c, 0xc47e4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c47e6  call 0xbc174
    X86_AT(c, 0xc47e6u);
    push32(c, 0xc47ebu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc47ebu);
    X86_TICK(c, 11);
    // 0c47eb  push 0x45b0
    X86_AT(c, 0xc47ebu);
    { uint32_t v = 0x45B0u; push32(c, v); }
    // 0c47f0  push 4
    X86_AT(c, 0xc47f0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c47f2  call 0xba428
    X86_AT(c, 0xc47f2u);
    push32(c, 0xc47f7u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc47f7u);
    X86_TICK(c, 13);
    // 0c47f7  push 3
    X86_AT(c, 0xc47f7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c47f9  push 0x37
    X86_AT(c, 0xc47f9u);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0c47fb  push 4
    X86_AT(c, 0xc47fbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c47fd  call 0xbc174
    X86_AT(c, 0xc47fdu);
    push32(c, 0xc4802u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4802u);
    X86_TICK(c, 9);
    // 0c4802  push 4
    X86_AT(c, 0xc4802u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4804  call 0xb6e88
    X86_AT(c, 0xc4804u);
    push32(c, 0xc4809u); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xc4809u);
    X86_TICK(c, 12);
    // 0c4809  xchg ebx, eax
    X86_AT(c, 0xc4809u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c480a  push 4
    X86_AT(c, 0xc480au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c480c  call 0xbb6b0
    X86_AT(c, 0xc480cu);
    push32(c, 0xc4811u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4811u);
    X86_TICK(c, 9);
    // 0c4811  add esp, 0x3c
    X86_AT(c, 0xc4811u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c4814  cmp bl, 0x59
    X86_AT(c, 0xc4814u);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0c4817  je 0xc489f
    X86_AT(c, 0xc4817u);
    if (x86_cc(c, 4)) { goto L_c489f; }
    X86_TICK(c, 4);
    // 0c481d  mov dword ptr [0xa4a62], 0
    X86_AT(c, 0xc481du);
    wr32((c.sbase[3] + (uint32_t)(0xA4A62u)), 0x0u);
    // 0c4827  sub edi, edi
    X86_AT(c, 0xc4827u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c4829:
    X86_TICK(c, 7);
    // 0c4829  cmp edi, 0x14
    X86_AT(c, 0xc4829u);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c482c  jge 0xc4848
    X86_AT(c, 0xc482cu);
    if (x86_cc(c, 13)) { goto L_c4848; }
    X86_TICK(c, 22);
    // 0c482e  mov eax, edi
    X86_AT(c, 0xc482eu);
    c.r[0] = c.r[7];
    // 0c4830  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4830u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4833  shl edx, 5
    X86_AT(c, 0xc4833u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4836  add edx, eax
    X86_AT(c, 0xc4836u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4838  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4838u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c483b  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc483bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c4845  inc edi
    X86_AT(c, 0xc4845u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c4846  jmp 0xc4829
    X86_AT(c, 0xc4846u);
    X86_POLL(c, 0xc4829u); goto L_c4829;
L_c4848:
    X86_TICK(c, 13);
    // 0c4848  push 3
    X86_AT(c, 0xc4848u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c484a  push 0x1f
    X86_AT(c, 0xc484au);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c484c  push 4
    X86_AT(c, 0xc484cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c484e  call 0xbc174
    X86_AT(c, 0xc484eu);
    push32(c, 0xc4853u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4853u);
    X86_TICK(c, 11);
    // 0c4853  push 0x4600
    X86_AT(c, 0xc4853u);
    { uint32_t v = 0x4600u; push32(c, v); }
    // 0c4858  push 4
    X86_AT(c, 0xc4858u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c485a  call 0xba428
    X86_AT(c, 0xc485au);
    push32(c, 0xc485fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc485fu);
    X86_TICK(c, 9);
    // 0c485f  push 2
    X86_AT(c, 0xc485fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4861  call 0xbbb5c
    X86_AT(c, 0xc4861u);
    push32(c, 0xc4866u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc4866u);
    X86_TICK(c, 9);
    // 0c4866  push 0x4644
    X86_AT(c, 0xc4866u);
    { uint32_t v = 0x4644u; push32(c, v); }
    // 0c486b  call 0xbc50c
    X86_AT(c, 0xc486bu);
    push32(c, 0xc4870u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc4870u);
    X86_TICK(c, 2);
    // 0c4870  add esp, 0x1c
    X86_AT(c, 0xc4870u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_c4873:
    X86_TICK(c, 9);
    // 0c4873  push 4
    X86_AT(c, 0xc4873u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4875  call 0xb9930
    X86_AT(c, 0xc4875u);
    push32(c, 0xc487au); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc487au);
    X86_TICK(c, 9);
    // 0c487a  add esp, 4
    X86_AT(c, 0xc487au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c487d  and al, al
    X86_AT(c, 0xc487du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c487f  je 0xc4873
    X86_AT(c, 0xc487fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc4873u); goto L_c4873; }
    X86_TICK(c, 9);
    // 0c4881  push 4
    X86_AT(c, 0xc4881u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4883  call 0xbb6b0
    X86_AT(c, 0xc4883u);
    push32(c, 0xc4888u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4888u);
    X86_TICK(c, 17);
    // 0c4888  push 0x17
    X86_AT(c, 0xc4888u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c488a  push 0x4d
    X86_AT(c, 0xc488au);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c488c  push 3
    X86_AT(c, 0xc488cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c488e  push 0
    X86_AT(c, 0xc488eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4890  push 4
    X86_AT(c, 0xc4890u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4892  call 0xbc2b0
    X86_AT(c, 0xc4892u);
    push32(c, 0xc4897u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc4897u);
    X86_TICK(c, 9);
    // 0c4897  add esp, 0x18
    X86_AT(c, 0xc4897u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c489a  jmp 0xc4af8
    X86_AT(c, 0xc489au);
    goto L_c4af8;
L_c489f:
    X86_TICK(c, 9);
    // 0c489f  push 0
    X86_AT(c, 0xc489fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c48a1  call 0xb6d38
    X86_AT(c, 0xc48a1u);
    push32(c, 0xc48a6u); x86_call_known(c, 0xb6d38u, f_000b6d38); X86_RET(c, 0xc48a6u);
    X86_TICK(c, 12);
    // 0c48a6  xchg esi, eax
    X86_AT(c, 0xc48a6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c48a7  push 4
    X86_AT(c, 0xc48a7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c48a9  call 0xbb6b0
    X86_AT(c, 0xc48a9u);
    push32(c, 0xc48aeu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc48aeu);
    X86_TICK(c, 9);
    // 0c48ae  add esp, 8
    X86_AT(c, 0xc48aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c48b1  cmp esi, 0xffffffff
    X86_AT(c, 0xc48b1u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c48b4  je 0xc48bf
    X86_AT(c, 0xc48b4u);
    if (x86_cc(c, 4)) { goto L_c48bf; }
    X86_TICK(c, 7);
    // 0c48b6  and esi, esi
    X86_AT(c, 0xc48b6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c48b8  je 0xc48bf
    X86_AT(c, 0xc48b8u);
    if (x86_cc(c, 4)) { goto L_c48bf; }
    X86_TICK(c, 7);
    // 0c48ba  cmp esi, 1
    X86_AT(c, 0xc48bau);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0c48bd  jne 0xc489f
    X86_AT(c, 0xc48bdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc489fu); goto L_c489f; }
L_c48bf:
    X86_TICK(c, 7);
    // 0c48bf  and esi, esi
    X86_AT(c, 0xc48bfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c48c1  je 0xc4945
    X86_AT(c, 0xc48c1u);
    if (x86_cc(c, 4)) { goto L_c4945; }
    X86_TICK(c, 7);
    // 0c48c7  sub eax, eax
    X86_AT(c, 0xc48c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c48c9  mov dword ptr [0xa4a62], eax
    X86_AT(c, 0xc48c9u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A62u)), c.r[0]);
    // 0c48ce  xchg edi, eax
    X86_AT(c, 0xc48ceu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_c48cf:
    X86_TICK(c, 7);
    // 0c48cf  cmp edi, 0x14
    X86_AT(c, 0xc48cfu);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c48d2  jge 0xc48ee
    X86_AT(c, 0xc48d2u);
    if (x86_cc(c, 13)) { goto L_c48ee; }
    X86_TICK(c, 22);
    // 0c48d4  mov eax, edi
    X86_AT(c, 0xc48d4u);
    c.r[0] = c.r[7];
    // 0c48d6  lea edx, [eax + eax*2]
    X86_AT(c, 0xc48d6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c48d9  shl edx, 5
    X86_AT(c, 0xc48d9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c48dc  add edx, eax
    X86_AT(c, 0xc48dcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c48de  lea edx, [eax + edx*2]
    X86_AT(c, 0xc48deu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c48e1  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc48e1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c48eb  inc edi
    X86_AT(c, 0xc48ebu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c48ec  jmp 0xc48cf
    X86_AT(c, 0xc48ecu);
    X86_POLL(c, 0xc48cfu); goto L_c48cf;
L_c48ee:
    X86_TICK(c, 13);
    // 0c48ee  push 3
    X86_AT(c, 0xc48eeu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c48f0  push 0x1f
    X86_AT(c, 0xc48f0u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c48f2  push 4
    X86_AT(c, 0xc48f2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c48f4  call 0xbc174
    X86_AT(c, 0xc48f4u);
    push32(c, 0xc48f9u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc48f9u);
    X86_TICK(c, 11);
    // 0c48f9  push 0x4678
    X86_AT(c, 0xc48f9u);
    { uint32_t v = 0x4678u; push32(c, v); }
    // 0c48fe  push 4
    X86_AT(c, 0xc48feu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4900  call 0xba428
    X86_AT(c, 0xc4900u);
    push32(c, 0xc4905u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4905u);
    X86_TICK(c, 9);
    // 0c4905  push 0x46bc
    X86_AT(c, 0xc4905u);
    { uint32_t v = 0x46BCu; push32(c, v); }
    // 0c490a  call 0xbc50c
    X86_AT(c, 0xc490au);
    push32(c, 0xc490fu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc490fu);
    X86_TICK(c, 2);
    // 0c490f  add esp, 0x18
    X86_AT(c, 0xc490fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c4912:
    X86_TICK(c, 9);
    // 0c4912  push 4
    X86_AT(c, 0xc4912u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4914  call 0xb9930
    X86_AT(c, 0xc4914u);
    push32(c, 0xc4919u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc4919u);
    X86_TICK(c, 9);
    // 0c4919  add esp, 4
    X86_AT(c, 0xc4919u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c491c  and al, al
    X86_AT(c, 0xc491cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c491e  je 0xc4912
    X86_AT(c, 0xc491eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc4912u); goto L_c4912; }
L_c4920:
    X86_TICK(c, 9);
    // 0c4920  push 2
    X86_AT(c, 0xc4920u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4922  call 0xbbb5c
    X86_AT(c, 0xc4922u);
    push32(c, 0xc4927u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc4927u);
    X86_TICK(c, 9);
    // 0c4927  push 4
    X86_AT(c, 0xc4927u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4929  call 0xbb6b0
    X86_AT(c, 0xc4929u);
    push32(c, 0xc492eu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc492eu);
    X86_TICK(c, 17);
    // 0c492e  push 0x17
    X86_AT(c, 0xc492eu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c4930  push 0x4d
    X86_AT(c, 0xc4930u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c4932  push 3
    X86_AT(c, 0xc4932u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4934  push 0
    X86_AT(c, 0xc4934u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4936  push 4
    X86_AT(c, 0xc4936u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4938  call 0xbc2b0
    X86_AT(c, 0xc4938u);
    push32(c, 0xc493du); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc493du);
    X86_TICK(c, 9);
    // 0c493d  add esp, 0x1c
    X86_AT(c, 0xc493du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c4940  jmp 0xc4af8
    X86_AT(c, 0xc4940u);
    goto L_c4af8;
L_c4945:
    X86_TICK(c, 7);
    // 0c4945  sub eax, eax
    X86_AT(c, 0xc4945u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c4947  mov dword ptr [0xa4a56], eax
    X86_AT(c, 0xc4947u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), c.r[0]);
    // 0c494c  xchg edi, eax
    X86_AT(c, 0xc494cu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_c494d:
    X86_TICK(c, 7);
    // 0c494d  cmp edi, 4
    X86_AT(c, 0xc494du);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0c4950  jge 0xc498c
    X86_AT(c, 0xc4950u);
    if (x86_cc(c, 13)) { goto L_c498c; }
    X86_TICK(c, 39);
    // 0c4952  mov eax, edi
    X86_AT(c, 0xc4952u);
    c.r[0] = c.r[7];
    // 0c4954  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4954u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4957  shl edx, 5
    X86_AT(c, 0xc4957u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c495a  add edx, eax
    X86_AT(c, 0xc495au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c495c  lea edx, [eax + edx*2]
    X86_AT(c, 0xc495cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c495f  lea eax, [edx*1 + 0xa4aa0]
    X86_AT(c, 0xc495fu);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4AA0u);
    // 0c4966  push eax
    X86_AT(c, 0xc4966u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4967  mov eax, dword ptr [edi*4 + 0xa4a7e]
    X86_AT(c, 0xc4967u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A7Eu)));
    // 0c496e  lea edx, [eax + eax*2]
    X86_AT(c, 0xc496eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4971  shl edx, 5
    X86_AT(c, 0xc4971u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4974  add edx, eax
    X86_AT(c, 0xc4974u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4976  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4976u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4979  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc4979u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c4980  push eax
    X86_AT(c, 0xc4980u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4981  call 0xc2414
    X86_AT(c, 0xc4981u);
    push32(c, 0xc4986u); x86_call_known(c, 0xc2414u, f_000c2414); X86_RET(c, 0xc4986u);
    X86_TICK(c, 11);
    // 0c4986  inc edi
    X86_AT(c, 0xc4986u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c4987  add esp, 8
    X86_AT(c, 0xc4987u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c498a  jmp 0xc494d
    X86_AT(c, 0xc498au);
    X86_POLL(c, 0xc494du); goto L_c494d;
L_c498c:
    X86_TICK(c, 31);
    // 0c498c  mov eax, dword ptr [0xa4a7e]
    X86_AT(c, 0xc498cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Eu)));
    // 0c4991  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4991u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4994  shl edx, 5
    X86_AT(c, 0xc4994u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4997  add edx, eax
    X86_AT(c, 0xc4997u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4999  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4999u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c499c  movzx eax, byte ptr [edx + 0xa4ddb]
    X86_AT(c, 0xc499cu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu)));
    // 0c49a3  xchg edx, eax
    X86_AT(c, 0xc49a3u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0c49a4  sub edx, 0x41
    X86_AT(c, 0xc49a4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0c49a7  cmp edx, 0x16
    X86_AT(c, 0xc49a7u);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0c49aa  ja 0xc4a75
    X86_AT(c, 0xc49aau);
    if (x86_cc(c, 7)) { goto L_c4a75; }
    X86_TICK(c, 7);
    // 0c49b0  jmp dword ptr cs:[edx*4 + 0xc49b8]
    X86_AT(c, 0xc49b0u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC49B8u)));
      switch (t) {
      case 0xc4a14u: goto L_c4a14;
      case 0xc4a1du: goto L_c4a1d;
      case 0xc4a26u: goto L_c4a26;
      case 0xc4a2fu: goto L_c4a2f;
      case 0xc4a38u: goto L_c4a38;
      case 0xc4a41u: goto L_c4a41;
      case 0xc4a4au: goto L_c4a4a;
      case 0xc4a53u: goto L_c4a53;
      case 0xc4a5cu: goto L_c4a5c;
      case 0xc4a65u: goto L_c4a65;
      case 0xc4a6eu: goto L_c4a6e;
      case 0xc4a75u: goto L_c4a75;
      default: x86_jump(c, t); return; } }
L_c4a14:
    X86_TICK(c, 9);
    // 0c4a14  mov byte ptr [0xa4a49], 0
    X86_AT(c, 0xc4a14u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x0u);
    // 0c4a1b  jmp 0xc4a75
    X86_AT(c, 0xc4a1bu);
    goto L_c4a75;
L_c4a1d:
    X86_TICK(c, 9);
    // 0c4a1d  mov byte ptr [0xa4a49], 4
    X86_AT(c, 0xc4a1du);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x4u);
    // 0c4a24  jmp 0xc4a75
    X86_AT(c, 0xc4a24u);
    goto L_c4a75;
L_c4a26:
    X86_TICK(c, 9);
    // 0c4a26  mov byte ptr [0xa4a49], 8
    X86_AT(c, 0xc4a26u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x8u);
    // 0c4a2d  jmp 0xc4a75
    X86_AT(c, 0xc4a2du);
    goto L_c4a75;
L_c4a2f:
    X86_TICK(c, 9);
    // 0c4a2f  mov byte ptr [0xa4a49], 0xc
    X86_AT(c, 0xc4a2fu);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0xCu);
    // 0c4a36  jmp 0xc4a75
    X86_AT(c, 0xc4a36u);
    goto L_c4a75;
L_c4a38:
    X86_TICK(c, 9);
    // 0c4a38  mov byte ptr [0xa4a49], 0x10
    X86_AT(c, 0xc4a38u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x10u);
    // 0c4a3f  jmp 0xc4a75
    X86_AT(c, 0xc4a3fu);
    goto L_c4a75;
L_c4a41:
    X86_TICK(c, 9);
    // 0c4a41  mov byte ptr [0xa4a49], 0x14
    X86_AT(c, 0xc4a41u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x14u);
    // 0c4a48  jmp 0xc4a75
    X86_AT(c, 0xc4a48u);
    goto L_c4a75;
L_c4a4a:
    X86_TICK(c, 9);
    // 0c4a4a  mov byte ptr [0xa4a49], 0x18
    X86_AT(c, 0xc4a4au);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x18u);
    // 0c4a51  jmp 0xc4a75
    X86_AT(c, 0xc4a51u);
    goto L_c4a75;
L_c4a53:
    X86_TICK(c, 9);
    // 0c4a53  mov byte ptr [0xa4a49], 0x1c
    X86_AT(c, 0xc4a53u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x1Cu);
    // 0c4a5a  jmp 0xc4a75
    X86_AT(c, 0xc4a5au);
    goto L_c4a75;
L_c4a5c:
    X86_TICK(c, 9);
    // 0c4a5c  mov byte ptr [0xa4a49], 0x20
    X86_AT(c, 0xc4a5cu);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x20u);
    // 0c4a63  jmp 0xc4a75
    X86_AT(c, 0xc4a63u);
    goto L_c4a75;
L_c4a65:
    X86_TICK(c, 9);
    // 0c4a65  mov byte ptr [0xa4a49], 0x24
    X86_AT(c, 0xc4a65u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x24u);
    // 0c4a6c  jmp 0xc4a75
    X86_AT(c, 0xc4a6cu);
    goto L_c4a75;
L_c4a6e:
    X86_TICK(c, 2);
    // 0c4a6e  mov byte ptr [0xa4a49], 0x28
    X86_AT(c, 0xc4a6eu);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x28u);
L_c4a75:
    X86_TICK(c, 25);
    // 0c4a75  mov eax, dword ptr [0xa4a7e]
    X86_AT(c, 0xc4a75u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Eu)));
    // 0c4a7a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4a7au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4a7d  shl edx, 5
    X86_AT(c, 0xc4a7du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4a80  add edx, eax
    X86_AT(c, 0xc4a80u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4a82  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4a82u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4a85  cmp byte ptr [edx + 0xa4ddc], 0x46
    X86_AT(c, 0xc4a85u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu))), 0x46u, 0, 1);
    // 0c4a8c  jne 0xc4a94
    X86_AT(c, 0xc4a8cu);
    if (x86_cc(c, 5)) { goto L_c4a94; }
    X86_TICK(c, 6);
    // 0c4a8e  inc byte ptr [0xa4a49]
    X86_AT(c, 0xc4a8eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA4A49u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
L_c4a94:
    X86_TICK(c, 11);
    // 0c4a94  mov dword ptr [0xa4a66], 0x2c
    X86_AT(c, 0xc4a94u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), 0x2Cu);
    // 0c4a9e  mov dword ptr [0xa4a6a], 0x14
    X86_AT(c, 0xc4a9eu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), 0x14u);
    // 0c4aa8  call 0xc1694
    X86_AT(c, 0xc4aa8u);
    push32(c, 0xc4aadu); x86_call_known(c, 0xc1694u, f_000c1694); X86_RET(c, 0xc4aadu);
    X86_TICK(c, 7);
    // 0c4aad  call 0xc1060
    X86_AT(c, 0xc4aadu);
    push32(c, 0xc4ab2u); x86_call_known(c, 0xc1060u, f_000c1060); X86_RET(c, 0xc4ab2u);
    X86_TICK(c, 7);
    // 0c4ab2  call 0xc1864
    X86_AT(c, 0xc4ab2u);
    push32(c, 0xc4ab7u); x86_call_known(c, 0xc1864u, f_000c1864); X86_RET(c, 0xc4ab7u);
    X86_TICK(c, 7);
    // 0c4ab7  call 0xd40e4
    X86_AT(c, 0xc4ab7u);
    push32(c, 0xc4abcu); x86_call_known(c, 0xd40e4u, f_000d40e4); X86_RET(c, 0xc4abcu);
    X86_TICK(c, 7);
    // 0c4abc  call 0xc1eb0
    X86_AT(c, 0xc4abcu);
    push32(c, 0xc4ac1u); x86_call_known(c, 0xc1eb0u, f_000c1eb0); X86_RET(c, 0xc4ac1u);
    X86_TICK(c, 13);
    // 0c4ac1  push 4
    X86_AT(c, 0xc4ac1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4ac3  push 0
    X86_AT(c, 0xc4ac3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4ac5  push 4
    X86_AT(c, 0xc4ac5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4ac7  call 0xbc174
    X86_AT(c, 0xc4ac7u);
    push32(c, 0xc4accu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4accu);
    X86_TICK(c, 11);
    // 0c4acc  push 0x46f0
    X86_AT(c, 0xc4accu);
    { uint32_t v = 0x46F0u; push32(c, v); }
    // 0c4ad1  push 4
    X86_AT(c, 0xc4ad1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4ad3  call 0xba428
    X86_AT(c, 0xc4ad3u);
    push32(c, 0xc4ad8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4ad8u);
    X86_TICK(c, 9);
    // 0c4ad8  push 2
    X86_AT(c, 0xc4ad8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4ada  call 0xbbb5c
    X86_AT(c, 0xc4adau);
    push32(c, 0xc4adfu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc4adfu);
    X86_TICK(c, 9);
    // 0c4adf  push 4
    X86_AT(c, 0xc4adfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4ae1  call 0xbb6b0
    X86_AT(c, 0xc4ae1u);
    push32(c, 0xc4ae6u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4ae6u);
    X86_TICK(c, 17);
    // 0c4ae6  push 0x17
    X86_AT(c, 0xc4ae6u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c4ae8  push 0x4d
    X86_AT(c, 0xc4ae8u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c4aea  push 3
    X86_AT(c, 0xc4aeau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4aec  push 0
    X86_AT(c, 0xc4aecu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4aee  push 4
    X86_AT(c, 0xc4aeeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4af0  call 0xbc2b0
    X86_AT(c, 0xc4af0u);
    push32(c, 0xc4af5u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc4af5u);
    X86_TICK(c, 2);
    // 0c4af5  add esp, 0x30
    X86_AT(c, 0xc4af5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_c4af8:
    X86_TICK(c, 28);
    // 0c4af8  pop edi
    X86_AT(c, 0xc4af8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c4af9  pop esi
    X86_AT(c, 0xc4af9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c4afa  pop ebx
    X86_AT(c, 0xc4afau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c4afb  leave 
    X86_AT(c, 0xc4afbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c4afc  ret 
    X86_AT(c, 0xc4afcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4408u, "ran off the end of a function");
}
}

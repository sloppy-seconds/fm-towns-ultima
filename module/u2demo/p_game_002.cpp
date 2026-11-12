#include "p_game_funcs.h"
namespace p_game {
void f_0008f248(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08f248  call 0x8ef04
    X86_AT(c, 0x8f248u);
    push32(c, 0x8f24du); x86_call_known(c, 0x8ef04u, f_0008ef04); X86_RET(c, 0x8f24du);
    X86_TICK(c, 11);
    // 08f24d  push 0
    X86_AT(c, 0x8f24du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f24f  push 0x19d0
    X86_AT(c, 0x8f24fu);
    { uint32_t v = 0x19D0u; push32(c, v); }
    // 08f254  call 0x8eed0
    X86_AT(c, 0x8f254u);
    push32(c, 0x8f259u); x86_call_known(c, 0x8eed0u, f_0008eed0); X86_RET(c, 0x8f259u);
    X86_TICK(c, 11);
    // 08f259  push 1
    X86_AT(c, 0x8f259u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08f25b  push 0x19e4
    X86_AT(c, 0x8f25bu);
    { uint32_t v = 0x19E4u; push32(c, v); }
    // 08f260  call 0x8eed0
    X86_AT(c, 0x8f260u);
    push32(c, 0x8f265u); x86_call_known(c, 0x8eed0u, f_0008eed0); X86_RET(c, 0x8f265u);
    X86_TICK(c, 11);
    // 08f265  push 2
    X86_AT(c, 0x8f265u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f267  push 0x19f8
    X86_AT(c, 0x8f267u);
    { uint32_t v = 0x19F8u; push32(c, v); }
    // 08f26c  call 0x8eed0
    X86_AT(c, 0x8f26cu);
    push32(c, 0x8f271u); x86_call_known(c, 0x8eed0u, f_0008eed0); X86_RET(c, 0x8f271u);
    X86_TICK(c, 11);
    // 08f271  push 3
    X86_AT(c, 0x8f271u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08f273  push 0x1a0c
    X86_AT(c, 0x8f273u);
    { uint32_t v = 0x1A0Cu; push32(c, v); }
    // 08f278  call 0x8eed0
    X86_AT(c, 0x8f278u);
    push32(c, 0x8f27du); x86_call_known(c, 0x8eed0u, f_0008eed0); X86_RET(c, 0x8f27du);
    X86_TICK(c, 9);
    // 08f27d  push 0x1a20
    X86_AT(c, 0x8f27du);
    { uint32_t v = 0x1A20u; push32(c, v); }
    // 08f282  call 0x8ee50
    X86_AT(c, 0x8f282u);
    push32(c, 0x8f287u); x86_call_known(c, 0x8ee50u, f_0008ee50); X86_RET(c, 0x8f287u);
    X86_TICK(c, 27);
    // 08f287  push 0xa
    X86_AT(c, 0x8f287u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 08f289  push 0xf
    X86_AT(c, 0x8f289u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08f28b  push 0xf
    X86_AT(c, 0x8f28bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08f28d  push 2
    X86_AT(c, 0x8f28du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f28f  push 0x47
    X86_AT(c, 0x8f28fu);
    { uint32_t v = 0x47u; push32(c, v); }
    // 08f291  push 0x34
    X86_AT(c, 0x8f291u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 08f293  push 0x250
    X86_AT(c, 0x8f293u);
    { uint32_t v = 0x250u; push32(c, v); }
    // 08f298  push 0x16a
    X86_AT(c, 0x8f298u);
    { uint32_t v = 0x16Au; push32(c, v); }
    // 08f29d  push 0x1d
    X86_AT(c, 0x8f29du);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 08f29f  push 0
    X86_AT(c, 0x8f29fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f2a1  call 0x8d48c
    X86_AT(c, 0x8f2a1u);
    push32(c, 0x8f2a6u); x86_call_known(c, 0x8d48cu, f_0008d48c); X86_RET(c, 0x8f2a6u);
    X86_TICK(c, 11);
    // 08f2a6  add esp, 0x4c
    X86_AT(c, 0x8f2a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4Cu, 0, 4); }
    // 08f2a9  push 0
    X86_AT(c, 0x8f2a9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f2ab  call 0x8d5d0
    X86_AT(c, 0x8f2abu);
    push32(c, 0x8f2b0u); x86_call_known(c, 0x8d5d0u, f_0008d5d0); X86_RET(c, 0x8f2b0u);
    X86_TICK(c, 9);
    // 08f2b0  push 4
    X86_AT(c, 0x8f2b0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 08f2b2  call 0x8eda4
    X86_AT(c, 0x8f2b2u);
    push32(c, 0x8f2b7u); x86_call_known(c, 0x8eda4u, f_0008eda4); X86_RET(c, 0x8f2b7u);
    X86_TICK(c, 2);
    // 08f2b7  add esp, 8
    X86_AT(c, 0x8f2b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_8f2ba:
    X86_TICK(c, 7);
    // 08f2ba  call 0x8efa0
    X86_AT(c, 0x8f2bau);
    push32(c, 0x8f2bfu); x86_call_known(c, 0x8efa0u, f_0008efa0); X86_RET(c, 0x8f2bfu);
    X86_TICK(c, 7);
    // 08f2bf  jmp 0x8f2ba
    X86_AT(c, 0x8f2bfu);
    X86_POLL(c, 0x8f2bau); goto L_8f2ba;
    x86_fault(c, 0x8f248u, "ran off the end of a function");
}
void f_0008f307(X86Cpu& c) {
    X86_TICK(c, 51);
    // 08f307  enter 0, 0
    X86_AT(c, 0x8f307u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f30b  pushal 
    X86_AT(c, 0x8f30bu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08f30c  pushfd 
    X86_AT(c, 0x8f30cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 08f30d  cli 
    X86_AT(c, 0x8f30du);
    c.fl &= ~X86_IF;
    // 08f30e  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8f30eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f311  mov dword ptr [0x893dc], eax
    X86_AT(c, 0x8f311u);
    wr32((c.sbase[3] + (uint32_t)(0x893DCu)), c.r[0]);
    // 08f316  mov word ptr [0x893e0], ds
    X86_AT(c, 0x8f316u);
    wr16((c.sbase[3] + (uint32_t)(0x893E0u)), (uint32_t)c.sreg[3]);
    // 08f31c  mov bl, 0
    X86_AT(c, 0x8f31cu);
    s8(c, 3, 0x0u);
    // 08f31e  xor ah, ah
    X86_AT(c, 0x8f31eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 08f320  call 0x8f910
    X86_AT(c, 0x8f320u);
    push32(c, 0x8f325u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f325u);
    X86_TICK(c, 7);
    // 08f325  and al, al
    X86_AT(c, 0x8f325u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08f327  jne 0x8f365
    X86_AT(c, 0x8f327u);
    if (x86_cc(c, 5)) { goto L_8f365; }
    X86_TICK(c, 7);
    // 08f32d  call 0x8f6bc
    X86_AT(c, 0x8f32du);
    push32(c, 0x8f332u); x86_call_known(c, 0x8f6bcu, f_0008f6bc); X86_RET(c, 0x8f332u);
    X86_TICK(c, 7);
    // 08f332  and al, al
    X86_AT(c, 0x8f332u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08f334  jne 0x8f365
    X86_AT(c, 0x8f334u);
    if (x86_cc(c, 5)) { goto L_8f365; }
    X86_TICK(c, 13);
    // 08f33a  mov bl, 0xff
    X86_AT(c, 0x8f33au);
    s8(c, 3, 0xFFu);
    // 08f33c  mov ecx, 1
    X86_AT(c, 0x8f33cu);
    c.r[1] = 0x1u;
    // 08f341  mov ah, 0x15
    X86_AT(c, 0x8f341u);
    s8(c, 4, 0x15u);
    // 08f343  call 0x8f910
    X86_AT(c, 0x8f343u);
    push32(c, 0x8f348u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f348u);
    X86_TICK(c, 11);
    // 08f348  mov bl, 0
    X86_AT(c, 0x8f348u);
    s8(c, 3, 0x0u);
    // 08f34a  mov ah, 0x15
    X86_AT(c, 0x8f34au);
    s8(c, 4, 0x15u);
    // 08f34c  call 0x8f910
    X86_AT(c, 0x8f34cu);
    push32(c, 0x8f351u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f351u);
    X86_TICK(c, 13);
    // 08f351  mov bl, 0xff
    X86_AT(c, 0x8f351u);
    s8(c, 3, 0xFFu);
    // 08f353  mov ecx, 0xdd
    X86_AT(c, 0x8f353u);
    c.r[1] = 0xDDu;
    // 08f358  mov ah, 0x16
    X86_AT(c, 0x8f358u);
    s8(c, 4, 0x16u);
    // 08f35a  call 0x8f910
    X86_AT(c, 0x8f35au);
    push32(c, 0x8f35fu); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f35fu);
    X86_TICK(c, 48);
    // 08f35f  popfd 
    X86_AT(c, 0x8f35fu);
    x86_popfd(c, 4);
    // 08f360  popal 
    X86_AT(c, 0x8f360u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f361  leave 
    X86_AT(c, 0x8f361u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f362  xor eax, eax
    X86_AT(c, 0x8f362u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f364  ret 
    X86_AT(c, 0x8f364u);
    c.eip = pop32(c); return;
L_8f365:
    X86_TICK(c, 48);
    // 08f365  popfd 
    X86_AT(c, 0x8f365u);
    x86_popfd(c, 4);
    // 08f366  popal 
    X86_AT(c, 0x8f366u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f367  leave 
    X86_AT(c, 0x8f367u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f368  mov eax, 1
    X86_AT(c, 0x8f368u);
    c.r[0] = 0x1u;
    // 08f36d  ret 
    X86_AT(c, 0x8f36du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f307u, "ran off the end of a function");
}
void f_0008f36e(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08f36e  enter 0, 0
    X86_AT(c, 0x8f36eu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f372  push ebx
    X86_AT(c, 0x8f372u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f373  mov bl, 0
    X86_AT(c, 0x8f373u);
    s8(c, 3, 0x0u);
    // 08f375  xor ah, ah
    X86_AT(c, 0x8f375u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 08f377  call 0x8f910
    X86_AT(c, 0x8f377u);
    push32(c, 0x8f37cu); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f37cu);
    X86_TICK(c, 13);
    // 08f37c  xor bh, bh
    X86_AT(c, 0x8f37cu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 08f37e  mov dx, 0x2c00
    X86_AT(c, 0x8f37eu);
    s16(c, 2, 0x2C00u);
    // 08f382  mov ah, 0x11
    X86_AT(c, 0x8f382u);
    s8(c, 4, 0x11u);
    // 08f384  call 0x8f910
    X86_AT(c, 0x8f384u);
    push32(c, 0x8f389u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f389u);
    X86_TICK(c, 7);
    // 08f389  call 0x8f776
    X86_AT(c, 0x8f389u);
    push32(c, 0x8f38eu); x86_call_known(c, 0x8f776u, f_0008f776); X86_RET(c, 0x8f38eu);
    X86_TICK(c, 22);
    // 08f38e  xor eax, eax
    X86_AT(c, 0x8f38eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f390  pop ebx
    X86_AT(c, 0x8f390u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f391  leave 
    X86_AT(c, 0x8f391u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f392  ret 
    X86_AT(c, 0x8f392u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f36eu, "ran off the end of a function");
}
void f_0008f3df(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08f3df  enter 0, 0
    X86_AT(c, 0x8f3dfu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f3e3  push ebx
    X86_AT(c, 0x8f3e3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f3e4  push edx
    X86_AT(c, 0x8f3e4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f3e5  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f3e5u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f3e8  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8f3e8u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08f3eb  mov ah, 4
    X86_AT(c, 0x8f3ebu);
    s8(c, 4, 0x4u);
    // 08f3ed  call 0x8f910
    X86_AT(c, 0x8f3edu);
    push32(c, 0x8f3f2u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f3f2u);
    X86_TICK(c, 27);
    // 08f3f2  movzx eax, al
    X86_AT(c, 0x8f3f2u);
    c.r[0] = g8(c, 0);
    // 08f3f5  pop edx
    X86_AT(c, 0x8f3f5u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f3f6  pop ebx
    X86_AT(c, 0x8f3f6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f3f7  leave 
    X86_AT(c, 0x8f3f7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f3f8  ret 
    X86_AT(c, 0x8f3f8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f3dfu, "ran off the end of a function");
}
void f_0008f3f9(X86Cpu& c) {
    X86_TICK(c, 33);
    // 08f3f9  enter 0, 0
    X86_AT(c, 0x8f3f9u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f3fd  push ebx
    X86_AT(c, 0x8f3fdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f3fe  push edx
    X86_AT(c, 0x8f3feu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f3ff  push esi
    X86_AT(c, 0x8f3ffu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08f400  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f400u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f403  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8f403u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08f406  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8f406u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08f409  mov ah, 5
    X86_AT(c, 0x8f409u);
    s8(c, 4, 0x5u);
    // 08f40b  call 0x8f910
    X86_AT(c, 0x8f40bu);
    push32(c, 0x8f410u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f410u);
    X86_TICK(c, 31);
    // 08f410  movzx eax, al
    X86_AT(c, 0x8f410u);
    c.r[0] = g8(c, 0);
    // 08f413  pop esi
    X86_AT(c, 0x8f413u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08f414  pop edx
    X86_AT(c, 0x8f414u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f415  pop ebx
    X86_AT(c, 0x8f415u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f416  leave 
    X86_AT(c, 0x8f416u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f417  ret 
    X86_AT(c, 0x8f417u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f3f9u, "ran off the end of a function");
}
void f_0008f4e9(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08f4e9  enter 0, 0
    X86_AT(c, 0x8f4e9u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f4ed  push ebx
    X86_AT(c, 0x8f4edu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f4ee  push ecx
    X86_AT(c, 0x8f4eeu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08f4ef  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f4efu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f4f2  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8f4f2u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08f4f5  mov ah, 0x15
    X86_AT(c, 0x8f4f5u);
    s8(c, 4, 0x15u);
    // 08f4f7  call 0x8f910
    X86_AT(c, 0x8f4f7u);
    push32(c, 0x8f4fcu); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f4fcu);
    X86_TICK(c, 27);
    // 08f4fc  movzx eax, al
    X86_AT(c, 0x8f4fcu);
    c.r[0] = g8(c, 0);
    // 08f4ff  pop ecx
    X86_AT(c, 0x8f4ffu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 08f500  pop ebx
    X86_AT(c, 0x8f500u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f501  leave 
    X86_AT(c, 0x8f501u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f502  ret 
    X86_AT(c, 0x8f502u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f4e9u, "ran off the end of a function");
}
void f_0008f567(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08f567  enter 0, 0
    X86_AT(c, 0x8f567u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f56b  push ebx
    X86_AT(c, 0x8f56bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f56c  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f56cu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f56f  mov ah, 0x21
    X86_AT(c, 0x8f56fu);
    s8(c, 4, 0x21u);
    // 08f571  call 0x8f910
    X86_AT(c, 0x8f571u);
    push32(c, 0x8f576u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f576u);
    X86_TICK(c, 23);
    // 08f576  movzx eax, al
    X86_AT(c, 0x8f576u);
    c.r[0] = g8(c, 0);
    // 08f579  pop ebx
    X86_AT(c, 0x8f579u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f57a  leave 
    X86_AT(c, 0x8f57au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f57b  ret 
    X86_AT(c, 0x8f57bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f567u, "ran off the end of a function");
}
void f_0008f591(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08f591  enter 0, 0
    X86_AT(c, 0x8f591u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f595  push edx
    X86_AT(c, 0x8f595u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f596  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8f596u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f599  mov ah, 0x23
    X86_AT(c, 0x8f599u);
    s8(c, 4, 0x23u);
    // 08f59b  call 0x8f910
    X86_AT(c, 0x8f59bu);
    push32(c, 0x8f5a0u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f5a0u);
    X86_TICK(c, 23);
    // 08f5a0  movzx eax, al
    X86_AT(c, 0x8f5a0u);
    c.r[0] = g8(c, 0);
    // 08f5a3  pop edx
    X86_AT(c, 0x8f5a3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f5a4  leave 
    X86_AT(c, 0x8f5a4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f5a5  ret 
    X86_AT(c, 0x8f5a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f591u, "ran off the end of a function");
}
void f_0008f664(X86Cpu& c) {
    X86_TICK(c, 30);
    // 08f664  enter 0, 0
    X86_AT(c, 0x8f664u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f668  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8f668u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f66b  mov dword ptr [0x893ec], eax
    X86_AT(c, 0x8f66bu);
    wr32((c.sbase[3] + (uint32_t)(0x893ECu)), c.r[0]);
    // 08f670  xor eax, eax
    X86_AT(c, 0x8f670u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f672  leave 
    X86_AT(c, 0x8f672u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f673  ret 
    X86_AT(c, 0x8f673u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f664u, "ran off the end of a function");
}
void f_0008f684(X86Cpu& c) {
    X86_TICK(c, 14);
    // 08f684  mov eax, dword ptr [0x893ec]
    X86_AT(c, 0x8f684u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x893ECu)));
    // 08f689  ret 
    X86_AT(c, 0x8f689u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f684u, "ran off the end of a function");
}
void f_0008f690(X86Cpu& c) {
    X86_TICK(c, 30);
    // 08f690  enter 0, 0
    X86_AT(c, 0x8f690u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f694  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8f694u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f697  mov dword ptr [0x893f4], eax
    X86_AT(c, 0x8f697u);
    wr32((c.sbase[3] + (uint32_t)(0x893F4u)), c.r[0]);
    // 08f69c  xor eax, eax
    X86_AT(c, 0x8f69cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f69e  leave 
    X86_AT(c, 0x8f69eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f69f  ret 
    X86_AT(c, 0x8f69fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f690u, "ran off the end of a function");
}
void f_0008f6a0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 08f6a0  mov eax, dword ptr [0x893f4]
    X86_AT(c, 0x8f6a0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x893F4u)));
    // 08f6a5  ret 
    X86_AT(c, 0x8f6a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f6a0u, "ran off the end of a function");
}
void f_0008f6bc(X86Cpu& c) {
    X86_TICK(c, 87);
    // 08f6bc  push es
    X86_AT(c, 0x8f6bcu);
    push32(c, c.sreg[0]);
    // 08f6bd  pushal 
    X86_AT(c, 0x8f6bdu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08f6be  pushfd 
    X86_AT(c, 0x8f6beu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 08f6bf  cli 
    X86_AT(c, 0x8f6bfu);
    c.fl &= ~X86_IF;
    // 08f6c0  mov word ptr [0x893ff], 0
    X86_AT(c, 0x8f6c0u);
    wr16((c.sbase[3] + (uint32_t)(0x893FFu)), 0x0u);
    // 08f6c9  mov byte ptr [0x893fe], 0
    X86_AT(c, 0x8f6c9u);
    wr8((c.sbase[3] + (uint32_t)(0x893FEu)), 0x0u);
    // 08f6d0  mov byte ptr [0x893fd], 0
    X86_AT(c, 0x8f6d0u);
    wr8((c.sbase[3] + (uint32_t)(0x893FDu)), 0x0u);
    // 08f6d7  lea eax, [0x8f933]
    X86_AT(c, 0x8f6d7u);
    c.r[0] = (uint32_t)(0x8F933u);
    // 08f6dd  mov dword ptr [0x893ec], eax
    X86_AT(c, 0x8f6ddu);
    wr32((c.sbase[3] + (uint32_t)(0x893ECu)), c.r[0]);
    // 08f6e2  mov dword ptr [0x893f4], eax
    X86_AT(c, 0x8f6e2u);
    wr32((c.sbase[3] + (uint32_t)(0x893F4u)), c.r[0]);
    // 08f6e7  mov dword ptr [0x893f0], eax
    X86_AT(c, 0x8f6e7u);
    wr32((c.sbase[3] + (uint32_t)(0x893F0u)), c.r[0]);
    // 08f6ec  mov dword ptr [0x893f8], eax
    X86_AT(c, 0x8f6ecu);
    wr32((c.sbase[3] + (uint32_t)(0x893F8u)), c.r[0]);
    // 08f6f1  mov byte ptr [0x893fc], 0
    X86_AT(c, 0x8f6f1u);
    wr8((c.sbase[3] + (uint32_t)(0x893FCu)), 0x0u);
    // 08f6f8  mov cl, 0x4d
    X86_AT(c, 0x8f6f8u);
    s8(c, 1, 0x4Du);
    // 08f6fa  mov ax, 0x2502
    X86_AT(c, 0x8f6fau);
    s16(c, 0, 0x2502u);
    // 08f6fe  int 0x21
    X86_AT(c, 0x8f6feu);
    x86_int(c, 0x21, 0x8f700u);
    X86_TICK(c, 5);
    // 08f700  jb 0x8f76c
    X86_AT(c, 0x8f700u);
    if (x86_cc(c, 2)) { goto L_8f76c; }
    X86_TICK(c, 47);
    // 08f706  mov eax, es
    X86_AT(c, 0x8f706u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 08f708  mov dword ptr [0x893e2], ebx
    X86_AT(c, 0x8f708u);
    wr32((c.sbase[3] + (uint32_t)(0x893E2u)), c.r[3]);
    // 08f70e  mov word ptr [0x893e6], ax
    X86_AT(c, 0x8f70eu);
    wr16((c.sbase[3] + (uint32_t)(0x893E6u)), (c.r[0] & 0xFFFFu));
    // 08f714  mov cl, 0x4d
    X86_AT(c, 0x8f714u);
    s8(c, 1, 0x4Du);
    // 08f716  mov ax, 0x2503
    X86_AT(c, 0x8f716u);
    s16(c, 0, 0x2503u);
    // 08f71a  int 0x21
    X86_AT(c, 0x8f71au);
    x86_int(c, 0x21, 0x8f71cu);
    X86_TICK(c, 5);
    // 08f71c  jb 0x8f76c
    X86_AT(c, 0x8f71cu);
    if (x86_cc(c, 2)) { goto L_8f76c; }
    X86_TICK(c, 51);
    // 08f722  mov dword ptr [0x893e8], ebx
    X86_AT(c, 0x8f722u);
    wr32((c.sbase[3] + (uint32_t)(0x893E8u)), c.r[3]);
    // 08f728  push ds
    X86_AT(c, 0x8f728u);
    push32(c, c.sreg[3]);
    // 08f729  mov eax, cs
    X86_AT(c, 0x8f729u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 08f72b  mov ds, eax
    X86_AT(c, 0x8f72bu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f72d  mov cl, 0x4d
    X86_AT(c, 0x8f72du);
    s8(c, 1, 0x4Du);
    // 08f72f  lea edx, [0x8f7bc]
    X86_AT(c, 0x8f72fu);
    c.r[2] = (uint32_t)(0x8F7BCu);
    // 08f735  mov ax, 0x2506
    X86_AT(c, 0x8f735u);
    s16(c, 0, 0x2506u);
    // 08f739  int 0x21
    X86_AT(c, 0x8f739u);
    x86_int(c, 0x21, 0x8f73bu);
    X86_TICK(c, 9);
    // 08f73b  pop ds
    X86_AT(c, 0x8f73bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 08f73c  jb 0x8f76c
    X86_AT(c, 0x8f73cu);
    if (x86_cc(c, 2)) { goto L_8f76c; }
    X86_TICK(c, 11);
    // 08f742  mov bl, 0
    X86_AT(c, 0x8f742u);
    s8(c, 3, 0x0u);
    // 08f744  mov ah, 0x15
    X86_AT(c, 0x8f744u);
    s8(c, 4, 0x15u);
    // 08f746  call 0x8f910
    X86_AT(c, 0x8f746u);
    push32(c, 0x8f74bu); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f74bu);
    X86_TICK(c, 11);
    // 08f74b  mov bl, 0
    X86_AT(c, 0x8f74bu);
    s8(c, 3, 0x0u);
    // 08f74d  mov ah, 0x16
    X86_AT(c, 0x8f74du);
    s8(c, 4, 0x16u);
    // 08f74f  call 0x8f910
    X86_AT(c, 0x8f74fu);
    push32(c, 0x8f754u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f754u);
    X86_TICK(c, 19);
    // 08f754  in al, 0x12
    X86_AT(c, 0x8f754u);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 08f756  jmp 0x8f758
    X86_AT(c, 0x8f756u);
    goto L_8f758;
L_8f758:
    X86_TICK(c, 7);
    // 08f758  jmp 0x8f75a
    X86_AT(c, 0x8f758u);
    goto L_8f75a;
L_8f75a:
    X86_TICK(c, 7);
    // 08f75a  jmp 0x8f75c
    X86_AT(c, 0x8f75au);
    goto L_8f75c;
L_8f75c:
    X86_TICK(c, 66);
    // 08f75c  mov dl, 0x20
    X86_AT(c, 0x8f75cu);
    s8(c, 2, 0x20u);
    // 08f75e  xor dl, 0xff
    X86_AT(c, 0x8f75eu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ 0xFFu, 1)); }
    // 08f761  and al, dl
    X86_AT(c, 0x8f761u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 08f763  out 0x12, al
    X86_AT(c, 0x8f763u);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 08f765  popfd 
    X86_AT(c, 0x8f765u);
    x86_popfd(c, 4);
    // 08f766  popal 
    X86_AT(c, 0x8f766u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f767  pop es
    X86_AT(c, 0x8f767u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08f768  xor eax, eax
    X86_AT(c, 0x8f768u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f76a  clc 
    X86_AT(c, 0x8f76au);
    c.fl &= ~X86_CF;
    // 08f76b  ret 
    X86_AT(c, 0x8f76bu);
    c.eip = pop32(c); return;
L_8f76c:
    X86_TICK(c, 48);
    // 08f76c  popfd 
    X86_AT(c, 0x8f76cu);
    x86_popfd(c, 4);
    // 08f76d  popal 
    X86_AT(c, 0x8f76du);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f76e  pop es
    X86_AT(c, 0x8f76eu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08f76f  mov eax, 2
    X86_AT(c, 0x8f76fu);
    c.r[0] = 0x2u;
    // 08f774  stc 
    X86_AT(c, 0x8f774u);
    c.fl |= X86_CF;
    // 08f775  ret 
    X86_AT(c, 0x8f775u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f6bcu, "ran off the end of a function");
}
void f_0008f776(X86Cpu& c) {
    X86_TICK(c, 37);
    // 08f776  pushal 
    X86_AT(c, 0x8f776u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08f777  pushf 
    X86_AT(c, 0x8f777u);
    push16(c, c.fl & 0xFFFFu);
    // 08f779  cli 
    X86_AT(c, 0x8f779u);
    c.fl &= ~X86_IF;
    // 08f77a  mov bl, 0
    X86_AT(c, 0x8f77au);
    s8(c, 3, 0x0u);
    // 08f77c  mov ah, 0x15
    X86_AT(c, 0x8f77cu);
    s8(c, 4, 0x15u);
    // 08f77e  call 0x8f910
    X86_AT(c, 0x8f77eu);
    push32(c, 0x8f783u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f783u);
    X86_TICK(c, 11);
    // 08f783  mov bl, 0
    X86_AT(c, 0x8f783u);
    s8(c, 3, 0x0u);
    // 08f785  mov ah, 0x16
    X86_AT(c, 0x8f785u);
    s8(c, 4, 0x16u);
    // 08f787  call 0x8f910
    X86_AT(c, 0x8f787u);
    push32(c, 0x8f78cu); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f78cu);
    X86_TICK(c, 19);
    // 08f78c  in al, 0x12
    X86_AT(c, 0x8f78cu);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 08f78e  jmp 0x8f790
    X86_AT(c, 0x8f78eu);
    goto L_8f790;
L_8f790:
    X86_TICK(c, 7);
    // 08f790  jmp 0x8f792
    X86_AT(c, 0x8f790u);
    goto L_8f792;
L_8f792:
    X86_TICK(c, 7);
    // 08f792  jmp 0x8f794
    X86_AT(c, 0x8f792u);
    goto L_8f794;
L_8f794:
    X86_TICK(c, 71);
    // 08f794  or al, 0x20
    X86_AT(c, 0x8f794u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 08f796  out 0x12, al
    X86_AT(c, 0x8f796u);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 08f798  push ds
    X86_AT(c, 0x8f798u);
    push32(c, c.sreg[3]);
    // 08f799  mov cl, 0x4d
    X86_AT(c, 0x8f799u);
    s8(c, 1, 0x4Du);
    // 08f79b  mov edx, dword ptr [0x893e2]
    X86_AT(c, 0x8f79bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x893E2u)));
    // 08f7a1  mov ax, word ptr [0x893e6]
    X86_AT(c, 0x8f7a1u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x893E6u))));
    // 08f7a7  mov ebx, dword ptr [0x893e8]
    X86_AT(c, 0x8f7a7u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x893E8u)));
    // 08f7ad  mov ds, eax
    X86_AT(c, 0x8f7adu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f7af  mov ax, 0x2507
    X86_AT(c, 0x8f7afu);
    s16(c, 0, 0x2507u);
    // 08f7b3  int 0x21
    X86_AT(c, 0x8f7b3u);
    x86_int(c, 0x21, 0x8f7b5u);
    X86_TICK(c, 46);
    // 08f7b5  xor eax, eax
    X86_AT(c, 0x8f7b5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f7b7  pop ds
    X86_AT(c, 0x8f7b7u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 08f7b8  popf 
    X86_AT(c, 0x8f7b8u);
    x86_popfd(c, 2);
    // 08f7ba  popal 
    X86_AT(c, 0x8f7bau);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f7bb  ret 
    X86_AT(c, 0x8f7bbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f776u, "ran off the end of a function");
}
void f_0008f7bc(X86Cpu& c) {
    X86_TICK(c, 22);
    // 08f7bc  push eax
    X86_AT(c, 0x8f7bcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08f7bd  push ds
    X86_AT(c, 0x8f7bdu);
    push32(c, c.sreg[3]);
    // 08f7be  mov ax, 0x14
    X86_AT(c, 0x8f7beu);
    s16(c, 0, 0x14u);
    // 08f7c2  mov ds, eax
    X86_AT(c, 0x8f7c2u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f7c4  cld 
    X86_AT(c, 0x8f7c4u);
    c.fl &= ~X86_DF;
    // 08f7c5  cmp word ptr [0x893ff], 0
    X86_AT(c, 0x8f7c5u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x893FFu))), 0x0u, 0, 2);
    // 08f7cd  jne 0x8f7e3
    X86_AT(c, 0x8f7cdu);
    if (x86_cc(c, 5)) { goto L_8f7e3; }
    X86_TICK(c, 8);
    // 08f7cf  mov dword ptr [0x89401], esp
    X86_AT(c, 0x8f7cfu);
    wr32((c.sbase[3] + (uint32_t)(0x89401u)), c.r[4]);
    // 08f7d5  mov word ptr [0x89405], ss
    X86_AT(c, 0x8f7d5u);
    wr16((c.sbase[3] + (uint32_t)(0x89405u)), (uint32_t)c.sreg[2]);
    // 08f7db  mov ss, eax
    X86_AT(c, 0x8f7dbu);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f7dd  lea esp, [0x89807]
    X86_AT(c, 0x8f7ddu);
    c.r[4] = (uint32_t)(0x89807u);
L_8f7e3:
    X86_TICK(c, 57);
    // 08f7e3  inc word ptr [0x893ff]
    X86_AT(c, 0x8f7e3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x893FFu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 08f7ea  sti 
    X86_AT(c, 0x8f7eau);
    c.fl |= X86_IF;
    // 08f7eb  push es
    X86_AT(c, 0x8f7ebu);
    push32(c, c.sreg[0]);
    // 08f7ec  push fs
    X86_AT(c, 0x8f7ecu);
    push32(c, c.sreg[4]);
    // 08f7ee  push gs
    X86_AT(c, 0x8f7eeu);
    push32(c, c.sreg[5]);
    // 08f7f0  pushal 
    X86_AT(c, 0x8f7f0u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08f7f1  mov es, eax
    X86_AT(c, 0x8f7f1u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f7f3  mov dx, 0x4e9
    X86_AT(c, 0x8f7f3u);
    s16(c, 2, 0x4E9u);
    // 08f7f7  in al, dx
    X86_AT(c, 0x8f7f7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 08f7f8  push eax
    X86_AT(c, 0x8f7f8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08f7f9  test al, 1
    X86_AT(c, 0x8f7f9u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 08f7fb  je 0x8f845
    X86_AT(c, 0x8f7fbu);
    if (x86_cc(c, 4)) { goto L_8f845; }
    X86_TICK(c, 9);
    // 08f801  mov ah, 0x10
    X86_AT(c, 0x8f801u);
    s8(c, 4, 0x10u);
    // 08f803  call 0x8f910
    X86_AT(c, 0x8f803u);
    push32(c, 0x8f808u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f808u);
    X86_TICK(c, 7);
    // 08f808  test dl, 1
    X86_AT(c, 0x8f808u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 08f80b  je 0x8f81c
    X86_AT(c, 0x8f80bu);
    if (x86_cc(c, 4)) { goto L_8f81c; }
    X86_TICK(c, 11);
    // 08f80d  push edx
    X86_AT(c, 0x8f80du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f80e  mov ah, 0x17
    X86_AT(c, 0x8f80eu);
    s8(c, 4, 0x17u);
    // 08f810  call 0x8f910
    X86_AT(c, 0x8f810u);
    push32(c, 0x8f815u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f815u);
    X86_TICK(c, 7);
    // 08f815  call dword ptr [0x893ec]
    X86_AT(c, 0x8f815u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x893ECu))); push32(c, 0x8f81bu); x86_call(c, t); X86_RET(c, 0x8f81bu); }
    X86_TICK(c, 4);
    // 08f81b  pop edx
    X86_AT(c, 0x8f81bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_8f81c:
    X86_TICK(c, 7);
    // 08f81c  test dl, 2
    X86_AT(c, 0x8f81cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 08f81f  je 0x8f845
    X86_AT(c, 0x8f81fu);
    if (x86_cc(c, 4)) { goto L_8f845; }
    X86_TICK(c, 11);
    // 08f821  push edx
    X86_AT(c, 0x8f821u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f822  mov ah, 0x18
    X86_AT(c, 0x8f822u);
    s8(c, 4, 0x18u);
    // 08f824  call 0x8f910
    X86_AT(c, 0x8f824u);
    push32(c, 0x8f829u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f829u);
    X86_TICK(c, 11);
    // 08f829  mov byte ptr [0x893fd], 0xff
    X86_AT(c, 0x8f829u);
    wr8((c.sbase[3] + (uint32_t)(0x893FDu)), 0xFFu);
    // 08f830  mov ah, 0x50
    X86_AT(c, 0x8f830u);
    s8(c, 4, 0x50u);
    // 08f832  call 0x8f910
    X86_AT(c, 0x8f832u);
    push32(c, 0x8f837u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f837u);
    X86_TICK(c, 9);
    // 08f837  mov byte ptr [0x893fd], 0
    X86_AT(c, 0x8f837u);
    wr8((c.sbase[3] + (uint32_t)(0x893FDu)), 0x0u);
    // 08f83e  call dword ptr [0x893f0]
    X86_AT(c, 0x8f83eu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x893F0u))); push32(c, 0x8f844u); x86_call(c, t); X86_RET(c, 0x8f844u); }
    X86_TICK(c, 4);
    // 08f844  pop edx
    X86_AT(c, 0x8f844u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_8f845:
    X86_TICK(c, 11);
    // 08f845  pop eax
    X86_AT(c, 0x8f845u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 08f846  test al, 8
    X86_AT(c, 0x8f846u);
    (void)x86_logic(c, g8(c, 0) & 0x8u, 1);
    // 08f848  je 0x8f861
    X86_AT(c, 0x8f848u);
    if (x86_cc(c, 4)) { goto L_8f861; }
    X86_TICK(c, 13);
    // 08f84a  push edx
    X86_AT(c, 0x8f84au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f84b  mov byte ptr [0x893fd], 0xff
    X86_AT(c, 0x8f84bu);
    wr8((c.sbase[3] + (uint32_t)(0x893FDu)), 0xFFu);
    // 08f852  mov ah, 0x51
    X86_AT(c, 0x8f852u);
    s8(c, 4, 0x51u);
    // 08f854  call 0x8f910
    X86_AT(c, 0x8f854u);
    push32(c, 0x8f859u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8f859u);
    X86_TICK(c, 6);
    // 08f859  mov byte ptr [0x893fd], 0
    X86_AT(c, 0x8f859u);
    wr8((c.sbase[3] + (uint32_t)(0x893FDu)), 0x0u);
    // 08f860  pop edx
    X86_AT(c, 0x8f860u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_8f861:
    X86_TICK(c, 9);
    // 08f861  cli 
    X86_AT(c, 0x8f861u);
    c.fl &= ~X86_IF;
    // 08f862  call 0x8f8c5
    X86_AT(c, 0x8f862u);
    push32(c, 0x8f867u); x86_call_known(c, 0x8f8c5u, f_0008f8c5); X86_RET(c, 0x8f867u);
    X86_TICK(c, 12);
    // 08f867  cmp byte ptr [0x893fe], 0
    X86_AT(c, 0x8f867u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x893FEu))), 0x0u, 0, 1);
    // 08f86e  jne 0x8f8a0
    X86_AT(c, 0x8f86eu);
    if (x86_cc(c, 5)) { goto L_8f8a0; }
    X86_TICK(c, 9);
    // 08f870  mov byte ptr [0x893fe], 0xff
    X86_AT(c, 0x8f870u);
    wr8((c.sbase[3] + (uint32_t)(0x893FEu)), 0xFFu);
    // 08f877  test dl, 1
    X86_AT(c, 0x8f877u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 08f87a  je 0x8f884
    X86_AT(c, 0x8f87au);
    if (x86_cc(c, 4)) { goto L_8f884; }
    X86_TICK(c, 9);
    // 08f87c  push edx
    X86_AT(c, 0x8f87cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f87d  call dword ptr [0x893f4]
    X86_AT(c, 0x8f87du);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x893F4u))); push32(c, 0x8f883u); x86_call(c, t); X86_RET(c, 0x8f883u); }
    X86_TICK(c, 4);
    // 08f883  pop edx
    X86_AT(c, 0x8f883u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_8f884:
    X86_TICK(c, 7);
    // 08f884  test dl, 2
    X86_AT(c, 0x8f884u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 08f887  je 0x8f898
    X86_AT(c, 0x8f887u);
    if (x86_cc(c, 4)) { goto L_8f898; }
    X86_TICK(c, 12);
    // 08f889  xor byte ptr [0x893fc], 0xff
    X86_AT(c, 0x8f889u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x893FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0xFFu, 1)); }
    // 08f890  je 0x8f898
    X86_AT(c, 0x8f890u);
    if (x86_cc(c, 4)) { goto L_8f898; }
    X86_TICK(c, 7);
    // 08f892  call dword ptr [0x893f8]
    X86_AT(c, 0x8f892u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x893F8u))); push32(c, 0x8f898u); x86_call(c, t); X86_RET(c, 0x8f898u); }
L_8f898:
    X86_TICK(c, 4);
    // 08f898  cli 
    X86_AT(c, 0x8f898u);
    c.fl &= ~X86_IF;
    // 08f899  mov byte ptr [0x893fe], 0
    X86_AT(c, 0x8f899u);
    wr8((c.sbase[3] + (uint32_t)(0x893FEu)), 0x0u);
L_8f8a0:
    X86_TICK(c, 49);
    // 08f8a0  popal 
    X86_AT(c, 0x8f8a0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f8a1  pop gs
    X86_AT(c, 0x8f8a1u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 08f8a3  pop fs
    X86_AT(c, 0x8f8a3u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 08f8a5  pop es
    X86_AT(c, 0x8f8a5u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08f8a6  cli 
    X86_AT(c, 0x8f8a6u);
    c.fl &= ~X86_IF;
    // 08f8a7  dec word ptr [0x893ff]
    X86_AT(c, 0x8f8a7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x893FFu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 08f8ae  jne 0x8f8bc
    X86_AT(c, 0x8f8aeu);
    if (x86_cc(c, 5)) { goto L_8f8bc; }
    X86_TICK(c, 8);
    // 08f8b0  mov esp, dword ptr [0x89401]
    X86_AT(c, 0x8f8b0u);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x89401u)));
    // 08f8b6  mov ss, word ptr [0x89405]
    X86_AT(c, 0x8f8b6u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x89405u))) & 0xFFFFu);
L_8f8bc:
    X86_TICK(c, 14);
    // 08f8bc  pop ds
    X86_AT(c, 0x8f8bcu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 08f8bd  pop eax
    X86_AT(c, 0x8f8bdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 08f8be  iretd 
    X86_AT(c, 0x8f8beu);
    x86_iret(c, 4); return;
    x86_fault(c, 0x8f7bcu, "ran off the end of a function");
}
void f_0008f8bf(X86Cpu& c) {
    X86_TICK(c, 14);
    // 08f8bf  mov al, byte ptr [0x893fd]
    X86_AT(c, 0x8f8bfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x893FDu))));
    // 08f8c4  ret 
    X86_AT(c, 0x8f8c4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f8bfu, "ran off the end of a function");
}
void f_0008f8c5(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08f8c5  push ax
    X86_AT(c, 0x8f8c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 08f8c7  mov al, 0xb
    X86_AT(c, 0x8f8c7u);
    s8(c, 0, 0xBu);
    // 08f8c9  out 0, al
    X86_AT(c, 0x8f8c9u);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 08f8cb  jmp 0x8f8cd
    X86_AT(c, 0x8f8cbu);
    goto L_8f8cd;
L_8f8cd:
    X86_TICK(c, 7);
    // 08f8cd  jmp 0x8f8cf
    X86_AT(c, 0x8f8cdu);
    goto L_8f8cf;
L_8f8cf:
    X86_TICK(c, 7);
    // 08f8cf  jmp 0x8f8d1
    X86_AT(c, 0x8f8cfu);
    goto L_8f8d1;
L_8f8d1:
    X86_TICK(c, 19);
    // 08f8d1  in al, 0
    X86_AT(c, 0x8f8d1u);
    s8(c, 0, x86_in(c, 0x0u, 1));
    // 08f8d3  jmp 0x8f8d5
    X86_AT(c, 0x8f8d3u);
    goto L_8f8d5;
L_8f8d5:
    X86_TICK(c, 7);
    // 08f8d5  jmp 0x8f8d7
    X86_AT(c, 0x8f8d5u);
    goto L_8f8d7;
L_8f8d7:
    X86_TICK(c, 7);
    // 08f8d7  jmp 0x8f8d9
    X86_AT(c, 0x8f8d7u);
    goto L_8f8d9;
L_8f8d9:
    X86_TICK(c, 7);
    // 08f8d9  test al, 0x7f
    X86_AT(c, 0x8f8d9u);
    (void)x86_logic(c, g8(c, 0) & 0x7Fu, 1);
    // 08f8db  je 0x8f8e3
    X86_AT(c, 0x8f8dbu);
    if (x86_cc(c, 4)) { goto L_8f8e3; }
    X86_TICK(c, 21);
    // 08f8dd  mov al, 0x20
    X86_AT(c, 0x8f8ddu);
    s8(c, 0, 0x20u);
    // 08f8df  out 0, al
    X86_AT(c, 0x8f8dfu);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 08f8e1  jmp 0x8f907
    X86_AT(c, 0x8f8e1u);
    goto L_8f907;
L_8f8e3:
    X86_TICK(c, 21);
    // 08f8e3  mov al, 0x20
    X86_AT(c, 0x8f8e3u);
    s8(c, 0, 0x20u);
    // 08f8e5  out 0x10, al
    X86_AT(c, 0x8f8e5u);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 08f8e7  jmp 0x8f8e9
    X86_AT(c, 0x8f8e7u);
    goto L_8f8e9;
L_8f8e9:
    X86_TICK(c, 7);
    // 08f8e9  jmp 0x8f8eb
    X86_AT(c, 0x8f8e9u);
    goto L_8f8eb;
L_8f8eb:
    X86_TICK(c, 7);
    // 08f8eb  jmp 0x8f8ed
    X86_AT(c, 0x8f8ebu);
    goto L_8f8ed;
L_8f8ed:
    X86_TICK(c, 21);
    // 08f8ed  mov al, 0xb
    X86_AT(c, 0x8f8edu);
    s8(c, 0, 0xBu);
    // 08f8ef  out 0x10, al
    X86_AT(c, 0x8f8efu);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 08f8f1  jmp 0x8f8f3
    X86_AT(c, 0x8f8f1u);
    goto L_8f8f3;
L_8f8f3:
    X86_TICK(c, 7);
    // 08f8f3  jmp 0x8f8f5
    X86_AT(c, 0x8f8f3u);
    goto L_8f8f5;
L_8f8f5:
    X86_TICK(c, 7);
    // 08f8f5  jmp 0x8f8f7
    X86_AT(c, 0x8f8f5u);
    goto L_8f8f7;
L_8f8f7:
    X86_TICK(c, 19);
    // 08f8f7  in al, 0x10
    X86_AT(c, 0x8f8f7u);
    s8(c, 0, x86_in(c, 0x10u, 1));
    // 08f8f9  jmp 0x8f8fb
    X86_AT(c, 0x8f8f9u);
    goto L_8f8fb;
L_8f8fb:
    X86_TICK(c, 7);
    // 08f8fb  jmp 0x8f8fd
    X86_AT(c, 0x8f8fbu);
    goto L_8f8fd;
L_8f8fd:
    X86_TICK(c, 7);
    // 08f8fd  jmp 0x8f8ff
    X86_AT(c, 0x8f8fdu);
    goto L_8f8ff;
L_8f8ff:
    X86_TICK(c, 7);
    // 08f8ff  or al, al
    X86_AT(c, 0x8f8ffu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 08f901  jne 0x8f907
    X86_AT(c, 0x8f901u);
    if (x86_cc(c, 5)) { goto L_8f907; }
    X86_TICK(c, 14);
    // 08f903  mov al, 0x20
    X86_AT(c, 0x8f903u);
    s8(c, 0, 0x20u);
    // 08f905  out 0, al
    X86_AT(c, 0x8f905u);
    x86_out(c, 0x0u, 1, g8(c, 0));
L_8f907:
    X86_TICK(c, 7);
    // 08f907  jmp 0x8f909
    X86_AT(c, 0x8f907u);
    goto L_8f909;
L_8f909:
    X86_TICK(c, 7);
    // 08f909  jmp 0x8f90b
    X86_AT(c, 0x8f909u);
    goto L_8f90b;
L_8f90b:
    X86_TICK(c, 7);
    // 08f90b  jmp 0x8f90d
    X86_AT(c, 0x8f90bu);
    goto L_8f90d;
L_8f90d:
    X86_TICK(c, 14);
    // 08f90d  pop ax
    X86_AT(c, 0x8f90du);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 08f90f  ret 
    X86_AT(c, 0x8f90fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f8c5u, "ran off the end of a function");
}
void f_0008f910(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08f910  push fs
    X86_AT(c, 0x8f910u);
    push32(c, c.sreg[4]);
    // 08f912  push gs
    X86_AT(c, 0x8f912u);
    push32(c, c.sreg[5]);
    // 08f914  push edi
    X86_AT(c, 0x8f914u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08f915  lgs edi, fword ptr [0x893dc]
    X86_AT(c, 0x8f915u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x893DCu)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 5, s); c.r[7] = o; }
    // 08f91c  push ax
    X86_AT(c, 0x8f91cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 08f91e  mov ax, 0x110
    X86_AT(c, 0x8f91eu);
    s16(c, 0, 0x110u);
    // 08f922  mov fs, eax
    X86_AT(c, 0x8f922u);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f924  pop ax
    X86_AT(c, 0x8f924u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 08f926  lcall fword ptr fs:[0x80]
    X86_AT(c, 0x8f926u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x8f92du); }
    X86_RET(c, 0x8f92du);
    X86_TICK(c, 22);
    // 08f92d  pop edi
    X86_AT(c, 0x8f92du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08f92e  pop gs
    X86_AT(c, 0x8f92eu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 08f930  pop fs
    X86_AT(c, 0x8f930u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 08f932  ret 
    X86_AT(c, 0x8f932u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f910u, "ran off the end of a function");
}
void f_0008f933(X86Cpu& c) {
    X86_TICK(c, 10);
    // 08f933  ret 
    X86_AT(c, 0x8f933u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f933u, "ran off the end of a function");
}
void f_0008f994(X86Cpu& c) {
    X86_TICK(c, 31);
    // 08f994  enter 0, 0
    X86_AT(c, 0x8f994u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f998  push ebx
    X86_AT(c, 0x8f998u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f999  push edx
    X86_AT(c, 0x8f999u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f99a  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f99au);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f99d  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8f99du);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08f9a0  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0x8f9a0u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08f9a3  mov ah, 0x43
    X86_AT(c, 0x8f9a3u);
    s8(c, 4, 0x43u);
    // 08f9a5  call 0x8fa31
    X86_AT(c, 0x8f9a5u);
    push32(c, 0x8f9aau); x86_call_known(c, 0x8fa31u, f_0008fa31); X86_RET(c, 0x8f9aau);
    X86_TICK(c, 27);
    // 08f9aa  movzx eax, al
    X86_AT(c, 0x8f9aau);
    c.r[0] = g8(c, 0);
    // 08f9ad  pop edx
    X86_AT(c, 0x8f9adu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f9ae  pop ebx
    X86_AT(c, 0x8f9aeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f9af  leave 
    X86_AT(c, 0x8f9afu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f9b0  ret 
    X86_AT(c, 0x8f9b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f994u, "ran off the end of a function");
}
void f_0008f9b1(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08f9b1  mov ah, 0x44
    X86_AT(c, 0x8f9b1u);
    s8(c, 4, 0x44u);
    // 08f9b3  call 0x8fa31
    X86_AT(c, 0x8f9b3u);
    push32(c, 0x8f9b8u); x86_call_known(c, 0x8fa31u, f_0008fa31); X86_RET(c, 0x8f9b8u);
    X86_TICK(c, 13);
    // 08f9b8  movzx eax, al
    X86_AT(c, 0x8f9b8u);
    c.r[0] = g8(c, 0);
    // 08f9bb  ret 
    X86_AT(c, 0x8f9bbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f9b1u, "ran off the end of a function");
}
void f_0008f9e5(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08f9e5  enter 0, 0
    X86_AT(c, 0x8f9e5u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f9e9  push ebx
    X86_AT(c, 0x8f9e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f9ea  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f9eau);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f9ed  mov ah, 0x46
    X86_AT(c, 0x8f9edu);
    s8(c, 4, 0x46u);
    // 08f9ef  call 0x8fa31
    X86_AT(c, 0x8f9efu);
    push32(c, 0x8f9f4u); x86_call_known(c, 0x8fa31u, f_0008fa31); X86_RET(c, 0x8f9f4u);
    X86_TICK(c, 23);
    // 08f9f4  movzx eax, al
    X86_AT(c, 0x8f9f4u);
    c.r[0] = g8(c, 0);
    // 08f9f7  pop ebx
    X86_AT(c, 0x8f9f7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f9f8  leave 
    X86_AT(c, 0x8f9f8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f9f9  ret 
    X86_AT(c, 0x8f9f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f9e5u, "ran off the end of a function");
}
void f_0008fa1c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08fa1c  enter 0, 0
    X86_AT(c, 0x8fa1cu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fa20  push edx
    X86_AT(c, 0x8fa20u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fa21  mov dl, byte ptr [ebp + 8]
    X86_AT(c, 0x8fa21u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08fa24  mov ah, 0x49
    X86_AT(c, 0x8fa24u);
    s8(c, 4, 0x49u);
    // 08fa26  call 0x8fa31
    X86_AT(c, 0x8fa26u);
    push32(c, 0x8fa2bu); x86_call_known(c, 0x8fa31u, f_0008fa31); X86_RET(c, 0x8fa2bu);
    X86_TICK(c, 23);
    // 08fa2b  movzx eax, al
    X86_AT(c, 0x8fa2bu);
    c.r[0] = g8(c, 0);
    // 08fa2e  pop edx
    X86_AT(c, 0x8fa2eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fa2f  leave 
    X86_AT(c, 0x8fa2fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fa30  ret 
    X86_AT(c, 0x8fa30u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fa1cu, "ran off the end of a function");
}
void f_0008fa31(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08fa31  push fs
    X86_AT(c, 0x8fa31u);
    push32(c, c.sreg[4]);
    // 08fa33  push ax
    X86_AT(c, 0x8fa33u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 08fa35  mov ax, 0x110
    X86_AT(c, 0x8fa35u);
    s16(c, 0, 0x110u);
    // 08fa39  mov fs, eax
    X86_AT(c, 0x8fa39u);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08fa3b  pop ax
    X86_AT(c, 0x8fa3bu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 08fa3d  lcall fword ptr fs:[0x80]
    X86_AT(c, 0x8fa3du);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x8fa44u); }
    X86_RET(c, 0x8fa44u);
    X86_TICK(c, 14);
    // 08fa44  pop fs
    X86_AT(c, 0x8fa44u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 08fa46  ret 
    X86_AT(c, 0x8fa46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fa31u, "ran off the end of a function");
}
void f_0008fa99(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08fa99  mov ah, 0
    X86_AT(c, 0x8fa99u);
    s8(c, 4, 0x0u);
    // 08fa9b  call 0x8fc98
    X86_AT(c, 0x8fa9bu);
    push32(c, 0x8faa0u); x86_call_known(c, 0x8fc98u, f_0008fc98); X86_RET(c, 0x8faa0u);
    X86_TICK(c, 13);
    // 08faa0  movzx eax, al
    X86_AT(c, 0x8faa0u);
    c.r[0] = g8(c, 0);
    // 08faa3  ret 
    X86_AT(c, 0x8faa3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fa99u, "ran off the end of a function");
}
void f_0008faaf(X86Cpu& c) {
    X86_TICK(c, 33);
    // 08faaf  enter 0, 0
    X86_AT(c, 0x8faafu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fab3  push esi
    X86_AT(c, 0x8fab3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08fab4  push ecx
    X86_AT(c, 0x8fab4u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08fab5  push edx
    X86_AT(c, 0x8fab5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fab6  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x8fab6u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fab9  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fab9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fabc  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0x8fabcu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08fabf  mov ah, 2
    X86_AT(c, 0x8fabfu);
    s8(c, 4, 0x2u);
    // 08fac1  call 0x8fc98
    X86_AT(c, 0x8fac1u);
    push32(c, 0x8fac6u); x86_call_known(c, 0x8fc98u, f_0008fc98); X86_RET(c, 0x8fac6u);
    X86_TICK(c, 31);
    // 08fac6  movzx eax, al
    X86_AT(c, 0x8fac6u);
    c.r[0] = g8(c, 0);
    // 08fac9  pop edx
    X86_AT(c, 0x8fac9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08faca  pop ecx
    X86_AT(c, 0x8facau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 08facb  pop esi
    X86_AT(c, 0x8facbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08facc  leave 
    X86_AT(c, 0x8faccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08facd  ret 
    X86_AT(c, 0x8facdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8faafu, "ran off the end of a function");
}
void f_0008face(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08face  mov ah, 3
    X86_AT(c, 0x8faceu);
    s8(c, 4, 0x3u);
    // 08fad0  call 0x8fc98
    X86_AT(c, 0x8fad0u);
    push32(c, 0x8fad5u); x86_call_known(c, 0x8fc98u, f_0008fc98); X86_RET(c, 0x8fad5u);
    X86_TICK(c, 13);
    // 08fad5  movzx eax, al
    X86_AT(c, 0x8fad5u);
    c.r[0] = g8(c, 0);
    // 08fad8  ret 
    X86_AT(c, 0x8fad8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8faceu, "ran off the end of a function");
}
void f_0008fae4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08fae4  mov ah, 5
    X86_AT(c, 0x8fae4u);
    s8(c, 4, 0x5u);
    // 08fae6  call 0x8fc98
    X86_AT(c, 0x8fae6u);
    push32(c, 0x8faebu); x86_call_known(c, 0x8fc98u, f_0008fc98); X86_RET(c, 0x8faebu);
    X86_TICK(c, 13);
    // 08faeb  movzx eax, al
    X86_AT(c, 0x8faebu);
    c.r[0] = g8(c, 0);
    // 08faee  ret 
    X86_AT(c, 0x8faeeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fae4u, "ran off the end of a function");
}
void f_0008faef(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08faef  push es
    X86_AT(c, 0x8faefu);
    push32(c, c.sreg[0]);
    // 08faf0  push esi
    X86_AT(c, 0x8faf0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08faf1  push ebx
    X86_AT(c, 0x8faf1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08faf2  push ecx
    X86_AT(c, 0x8faf2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08faf3  push edx
    X86_AT(c, 0x8faf3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08faf4  mov ah, 6
    X86_AT(c, 0x8faf4u);
    s8(c, 4, 0x6u);
    // 08faf6  call 0x8fc98
    X86_AT(c, 0x8faf6u);
    push32(c, 0x8fafbu); x86_call_known(c, 0x8fc98u, f_0008fc98); X86_RET(c, 0x8fafbu);
    X86_TICK(c, 32);
    // 08fafb  mov eax, esi
    X86_AT(c, 0x8fafbu);
    c.r[0] = c.r[6];
    // 08fafd  pop edx
    X86_AT(c, 0x8fafdu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fafe  pop ecx
    X86_AT(c, 0x8fafeu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 08faff  pop ebx
    X86_AT(c, 0x8faffu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fb00  pop esi
    X86_AT(c, 0x8fb00u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08fb01  pop es
    X86_AT(c, 0x8fb01u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08fb02  ret 
    X86_AT(c, 0x8fb02u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8faefu, "ran off the end of a function");
}
void f_0008fb8b(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08fb8b  enter 0, 0
    X86_AT(c, 0x8fb8bu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fb8f  push edx
    X86_AT(c, 0x8fb8fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fb90  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fb90u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fb93  cmp dl, 0
    X86_AT(c, 0x8fb93u);
    (void)x86_sub(c, g8(c, 2), 0x0u, 0, 1);
    // 08fb96  je 0x8fb9a
    X86_AT(c, 0x8fb96u);
    if (x86_cc(c, 4)) { goto L_8fb9a; }
    X86_TICK(c, 2);
    // 08fb98  mov dl, 0xff
    X86_AT(c, 0x8fb98u);
    s8(c, 2, 0xFFu);
L_8fb9a:
    X86_TICK(c, 9);
    // 08fb9a  mov ah, 8
    X86_AT(c, 0x8fb9au);
    s8(c, 4, 0x8u);
    // 08fb9c  call 0x8fc98
    X86_AT(c, 0x8fb9cu);
    push32(c, 0x8fba1u); x86_call_known(c, 0x8fc98u, f_0008fc98); X86_RET(c, 0x8fba1u);
    X86_TICK(c, 23);
    // 08fba1  movzx eax, al
    X86_AT(c, 0x8fba1u);
    c.r[0] = g8(c, 0);
    // 08fba4  pop edx
    X86_AT(c, 0x8fba4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fba5  leave 
    X86_AT(c, 0x8fba5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fba6  ret 
    X86_AT(c, 0x8fba6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fb8bu, "ran off the end of a function");
}
void f_0008fba7(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08fba7  enter 0, 0
    X86_AT(c, 0x8fba7u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fbab  push edx
    X86_AT(c, 0x8fbabu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fbac  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fbacu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fbaf  mov ah, 9
    X86_AT(c, 0x8fbafu);
    s8(c, 4, 0x9u);
    // 08fbb1  call 0x8fc98
    X86_AT(c, 0x8fbb1u);
    push32(c, 0x8fbb6u); x86_call_known(c, 0x8fc98u, f_0008fc98); X86_RET(c, 0x8fbb6u);
    X86_TICK(c, 23);
    // 08fbb6  movzx eax, al
    X86_AT(c, 0x8fbb6u);
    c.r[0] = g8(c, 0);
    // 08fbb9  pop edx
    X86_AT(c, 0x8fbb9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fbba  leave 
    X86_AT(c, 0x8fbbau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fbbb  ret 
    X86_AT(c, 0x8fbbbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fba7u, "ran off the end of a function");
}
void f_0008fbbc(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fbbc  enter 0, 0
    X86_AT(c, 0x8fbbcu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fbc0  push ebx
    X86_AT(c, 0x8fbc0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fbc1  push edx
    X86_AT(c, 0x8fbc1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fbc2  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fbc2u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fbc5  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fbc5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fbc8  mov ah, 0x10
    X86_AT(c, 0x8fbc8u);
    s8(c, 4, 0x10u);
    // 08fbca  call 0x8fc98
    X86_AT(c, 0x8fbcau);
    push32(c, 0x8fbcfu); x86_call_known(c, 0x8fc98u, f_0008fc98); X86_RET(c, 0x8fbcfu);
    X86_TICK(c, 27);
    // 08fbcf  movzx eax, al
    X86_AT(c, 0x8fbcfu);
    c.r[0] = g8(c, 0);
    // 08fbd2  pop edx
    X86_AT(c, 0x8fbd2u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fbd3  pop ebx
    X86_AT(c, 0x8fbd3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fbd4  leave 
    X86_AT(c, 0x8fbd4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fbd5  ret 
    X86_AT(c, 0x8fbd5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fbbcu, "ran off the end of a function");
}
void f_0008fbd6(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fbd6  enter 0, 0
    X86_AT(c, 0x8fbd6u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fbda  push ebx
    X86_AT(c, 0x8fbdau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fbdb  push edx
    X86_AT(c, 0x8fbdbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fbdc  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fbdcu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fbdf  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fbdfu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fbe2  mov ah, 0x11
    X86_AT(c, 0x8fbe2u);
    s8(c, 4, 0x11u);
    // 08fbe4  call 0x8fc98
    X86_AT(c, 0x8fbe4u);
    push32(c, 0x8fbe9u); x86_call_known(c, 0x8fc98u, f_0008fc98); X86_RET(c, 0x8fbe9u);
    X86_TICK(c, 27);
    // 08fbe9  movzx eax, al
    X86_AT(c, 0x8fbe9u);
    c.r[0] = g8(c, 0);
    // 08fbec  pop edx
    X86_AT(c, 0x8fbecu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fbed  pop ebx
    X86_AT(c, 0x8fbedu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fbee  leave 
    X86_AT(c, 0x8fbeeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fbef  ret 
    X86_AT(c, 0x8fbefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fbd6u, "ran off the end of a function");
}
void f_0008fbf0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fbf0  enter 0, 0
    X86_AT(c, 0x8fbf0u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fbf4  push ebx
    X86_AT(c, 0x8fbf4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fbf5  push edx
    X86_AT(c, 0x8fbf5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fbf6  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fbf6u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fbf9  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fbf9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fbfc  mov ah, 0x12
    X86_AT(c, 0x8fbfcu);
    s8(c, 4, 0x12u);
    // 08fbfe  call 0x8fc98
    X86_AT(c, 0x8fbfeu);
    push32(c, 0x8fc03u); x86_call_known(c, 0x8fc98u, f_0008fc98); X86_RET(c, 0x8fc03u);
    X86_TICK(c, 27);
    // 08fc03  movzx eax, al
    X86_AT(c, 0x8fc03u);
    c.r[0] = g8(c, 0);
    // 08fc06  pop edx
    X86_AT(c, 0x8fc06u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fc07  pop ebx
    X86_AT(c, 0x8fc07u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fc08  leave 
    X86_AT(c, 0x8fc08u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fc09  ret 
    X86_AT(c, 0x8fc09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fbf0u, "ran off the end of a function");
}
void f_0008fc0a(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fc0a  enter 0, 0
    X86_AT(c, 0x8fc0au);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fc0e  push ebx
    X86_AT(c, 0x8fc0eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fc0f  push edx
    X86_AT(c, 0x8fc0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fc10  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fc10u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fc13  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fc13u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fc16  mov ah, 0x13
    X86_AT(c, 0x8fc16u);
    s8(c, 4, 0x13u);
    // 08fc18  call 0x8fc98
    X86_AT(c, 0x8fc18u);
    push32(c, 0x8fc1du); x86_call_known(c, 0x8fc98u, f_0008fc98); X86_RET(c, 0x8fc1du);
    X86_TICK(c, 27);
    // 08fc1d  movzx eax, al
    X86_AT(c, 0x8fc1du);
    c.r[0] = g8(c, 0);
    // 08fc20  pop edx
    X86_AT(c, 0x8fc20u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fc21  pop ebx
    X86_AT(c, 0x8fc21u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fc22  leave 
    X86_AT(c, 0x8fc22u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fc23  ret 
    X86_AT(c, 0x8fc23u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fc0au, "ran off the end of a function");
}
void f_0008fc24(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fc24  enter 0, 0
    X86_AT(c, 0x8fc24u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fc28  push ebx
    X86_AT(c, 0x8fc28u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fc29  push edx
    X86_AT(c, 0x8fc29u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fc2a  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fc2au);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fc2d  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fc2du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fc30  mov ah, 0x14
    X86_AT(c, 0x8fc30u);
    s8(c, 4, 0x14u);
    // 08fc32  call 0x8fc98
    X86_AT(c, 0x8fc32u);
    push32(c, 0x8fc37u); x86_call_known(c, 0x8fc98u, f_0008fc98); X86_RET(c, 0x8fc37u);
    X86_TICK(c, 27);
    // 08fc37  movzx eax, al
    X86_AT(c, 0x8fc37u);
    c.r[0] = g8(c, 0);
    // 08fc3a  pop edx
    X86_AT(c, 0x8fc3au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fc3b  pop ebx
    X86_AT(c, 0x8fc3bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fc3c  leave 
    X86_AT(c, 0x8fc3cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fc3d  ret 
    X86_AT(c, 0x8fc3du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fc24u, "ran off the end of a function");
}
void f_0008fc3e(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fc3e  enter 0, 0
    X86_AT(c, 0x8fc3eu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fc42  push ebx
    X86_AT(c, 0x8fc42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fc43  push edx
    X86_AT(c, 0x8fc43u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fc44  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fc44u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fc47  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fc47u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fc4a  mov ah, 0x20
    X86_AT(c, 0x8fc4au);
    s8(c, 4, 0x20u);
    // 08fc4c  call 0x8fc98
    X86_AT(c, 0x8fc4cu);
    push32(c, 0x8fc51u); x86_call_known(c, 0x8fc98u, f_0008fc98); X86_RET(c, 0x8fc51u);
    X86_TICK(c, 27);
    // 08fc51  movzx eax, al
    X86_AT(c, 0x8fc51u);
    c.r[0] = g8(c, 0);
    // 08fc54  pop edx
    X86_AT(c, 0x8fc54u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fc55  pop ebx
    X86_AT(c, 0x8fc55u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fc56  leave 
    X86_AT(c, 0x8fc56u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fc57  ret 
    X86_AT(c, 0x8fc57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fc3eu, "ran off the end of a function");
}
void f_0008fc98(X86Cpu& c) {
    X86_TICK(c, 44);
    // 08fc98  push gs
    X86_AT(c, 0x8fc98u);
    push32(c, c.sreg[5]);
    // 08fc9a  push fs
    X86_AT(c, 0x8fc9au);
    push32(c, c.sreg[4]);
    // 08fc9c  push es
    X86_AT(c, 0x8fc9cu);
    push32(c, c.sreg[0]);
    // 08fc9d  push ds
    X86_AT(c, 0x8fc9du);
    push32(c, c.sreg[3]);
    // 08fc9e  pushal 
    X86_AT(c, 0x8fc9eu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08fc9f  pushfd 
    X86_AT(c, 0x8fc9fu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 08fca0  mov ebp, esp
    X86_AT(c, 0x8fca0u);
    c.r[5] = c.r[4];
    // 08fca2  movzx ebx, ah
    X86_AT(c, 0x8fca2u);
    c.r[3] = g8(c, 4);
    // 08fca5  call dword ptr cs:[ebx*4 + 0x8fcb6]
    X86_AT(c, 0x8fca5u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x8FCB6u))); push32(c, 0x8fcadu);
      switch (t) {
      case 0x8fd62u: x86_call_known(c, 0x8fd62u, f_0008fd62); break;
      case 0x8fd67u: x86_call_known(c, 0x8fd67u, f_0008fd67); break;
      case 0x8fdd7u: x86_call_known(c, 0x8fdd7u, f_0008fdd7); break;
      case 0x8fe15u: x86_call_known(c, 0x8fe15u, f_0008fe15); break;
      case 0x8fe95u: x86_call_known(c, 0x8fe95u, f_0008fe95); break;
      case 0x8feaau: x86_call_known(c, 0x8feaau, f_0008feaa); break;
      case 0x8febeu: x86_call_known(c, 0x8febeu, f_0008febe); break;
      case 0x8fecdu: x86_call_known(c, 0x8fecdu, f_0008fecd); break;
      case 0x8ff15u: x86_call_known(c, 0x8ff15u, f_0008ff15); break;
      case 0x8ff31u: x86_call_known(c, 0x8ff31u, f_0008ff31); break;
      case 0x8ff4du: x86_call_known(c, 0x8ff4du, f_0008ff4d); break;
      case 0x8ff73u: x86_call_known(c, 0x8ff73u, f_0008ff73); break;
      case 0x8ff8fu: x86_call_known(c, 0x8ff8fu, f_0008ff8f); break;
      case 0x8ffd6u: x86_call_known(c, 0x8ffd6u, f_0008ffd6); break;
      case 0x8fffcu: x86_call_known(c, 0x8fffcu, f_0008fffc); break;
      case 0x90022u: x86_call_known(c, 0x90022u, f_00090022); break;
      case 0x90048u: x86_call_known(c, 0x90048u, f_00090048); break;
      case 0x9006eu: x86_call_known(c, 0x9006eu, f_0009006e); break;
      case 0x90094u: x86_call_known(c, 0x90094u, f_00090094); break;
      case 0x900a3u: x86_call_known(c, 0x900a3u, f_000900a3); break;
      case 0x900dfu: x86_call_known(c, 0x900dfu, f_000900df); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x8fcadu); }
    X86_TICK(c, 56);
    // 08fcad  popfd 
    X86_AT(c, 0x8fcadu);
    x86_popfd(c, 4);
    // 08fcae  popal 
    X86_AT(c, 0x8fcaeu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08fcaf  pop ds
    X86_AT(c, 0x8fcafu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 08fcb0  pop es
    X86_AT(c, 0x8fcb0u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08fcb1  pop fs
    X86_AT(c, 0x8fcb1u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 08fcb3  pop gs
    X86_AT(c, 0x8fcb3u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 08fcb5  ret 
    X86_AT(c, 0x8fcb5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fc98u, "ran off the end of a function");
}
void f_0008fd62(X86Cpu& c) {
    X86_TICK(c, 12);
    // 08fd62  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0x8fd62u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 08fd66  ret 
    X86_AT(c, 0x8fd66u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fd62u, "ran off the end of a function");
}
void f_0008fd67(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08fd67  pushfd 
    X86_AT(c, 0x8fd67u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 08fd68  cld 
    X86_AT(c, 0x8fd68u);
    c.fl &= ~X86_DF;
    // 08fd69  cli 
    X86_AT(c, 0x8fd69u);
    c.fl &= ~X86_IF;
    // 08fd6a  call 0x916d0
    X86_AT(c, 0x8fd6au);
    push32(c, 0x8fd6fu); x86_call_known(c, 0x916d0u, f_000916d0); X86_RET(c, 0x8fd6fu);
    X86_TICK(c, 7);
    // 08fd6f  call 0x9100c
    X86_AT(c, 0x8fd6fu);
    push32(c, 0x8fd74u); x86_call_known(c, 0x9100cu, f_0009100c); X86_RET(c, 0x8fd74u);
    X86_TICK(c, 7);
    // 08fd74  call 0x91093
    X86_AT(c, 0x8fd74u);
    push32(c, 0x8fd79u); x86_call_known(c, 0x91093u, f_00091093); X86_RET(c, 0x8fd79u);
    X86_TICK(c, 7);
    // 08fd79  call 0x910e7
    X86_AT(c, 0x8fd79u);
    push32(c, 0x8fd7eu); x86_call_known(c, 0x910e7u, f_000910e7); X86_RET(c, 0x8fd7eu);
    X86_TICK(c, 7);
    // 08fd7e  call 0x90318
    X86_AT(c, 0x8fd7eu);
    push32(c, 0x8fd83u); x86_call_known(c, 0x90318u, f_00090318); X86_RET(c, 0x8fd83u);
    X86_TICK(c, 7);
    // 08fd83  call 0x901f2
    X86_AT(c, 0x8fd83u);
    push32(c, 0x8fd88u); x86_call_known(c, 0x901f2u, f_000901f2); X86_RET(c, 0x8fd88u);
    X86_TICK(c, 7);
    // 08fd88  call 0x90252
    X86_AT(c, 0x8fd88u);
    push32(c, 0x8fd8du); x86_call_known(c, 0x90252u, f_00090252); X86_RET(c, 0x8fd8du);
    X86_TICK(c, 7);
    // 08fd8d  call 0x90273
    X86_AT(c, 0x8fd8du);
    push32(c, 0x8fd92u); x86_call_known(c, 0x90273u, f_00090273); X86_RET(c, 0x8fd92u);
    X86_TICK(c, 7);
    // 08fd92  call 0x902d3
    X86_AT(c, 0x8fd92u);
    push32(c, 0x8fd97u); x86_call_known(c, 0x902d3u, f_000902d3); X86_RET(c, 0x8fd97u);
    X86_TICK(c, 7);
    // 08fd97  call 0x90e22
    X86_AT(c, 0x8fd97u);
    push32(c, 0x8fd9cu); x86_call_known(c, 0x90e22u, f_00090e22); X86_RET(c, 0x8fd9cu);
    X86_TICK(c, 5);
    // 08fd9c  jb 0x8fdd2
    X86_AT(c, 0x8fd9cu);
    if (x86_cc(c, 2)) { goto L_8fdd2; }
    X86_TICK(c, 12);
    // 08fd9e  cmp byte ptr [0x89a79], 0
    X86_AT(c, 0x8fd9eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89A79u))), 0x0u, 0, 1);
    // 08fda5  jne 0x8fdb8
    X86_AT(c, 0x8fda5u);
    if (x86_cc(c, 5)) { goto L_8fdb8; }
    X86_TICK(c, 7);
    // 08fda7  call 0x90f2e
    X86_AT(c, 0x8fda7u);
    push32(c, 0x8fdacu); x86_call_known(c, 0x90f2eu, f_00090f2e); X86_RET(c, 0x8fdacu);
    X86_TICK(c, 11);
    // 08fdac  mov al, byte ptr [0x89835]
    X86_AT(c, 0x8fdacu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89835u))));
    // 08fdb1  call 0x912af
    X86_AT(c, 0x8fdb1u);
    push32(c, 0x8fdb6u); x86_call_known(c, 0x912afu, f_000912af); X86_RET(c, 0x8fdb6u);
    X86_TICK(c, 7);
    // 08fdb6  jmp 0x8fdcc
    X86_AT(c, 0x8fdb6u);
    goto L_8fdcc;
L_8fdb8:
    X86_TICK(c, 7);
    // 08fdb8  call 0x90eb2
    X86_AT(c, 0x8fdb8u);
    push32(c, 0x8fdbdu); x86_call_known(c, 0x90eb2u, f_00090eb2); X86_RET(c, 0x8fdbdu);
    X86_TICK(c, 11);
    // 08fdbd  mov al, byte ptr [0x89835]
    X86_AT(c, 0x8fdbdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89835u))));
    // 08fdc2  call 0x912af
    X86_AT(c, 0x8fdc2u);
    push32(c, 0x8fdc7u); x86_call_known(c, 0x912afu, f_000912af); X86_RET(c, 0x8fdc7u);
    X86_TICK(c, 7);
    // 08fdc7  call 0x911d3
    X86_AT(c, 0x8fdc7u);
    push32(c, 0x8fdccu); x86_call_known(c, 0x911d3u, f_000911d3); X86_RET(c, 0x8fdccu);
L_8fdcc:
    X86_TICK(c, 18);
    // 08fdcc  popfd 
    X86_AT(c, 0x8fdccu);
    x86_popfd(c, 4);
    // 08fdcd  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fdcdu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fdd1  ret 
    X86_AT(c, 0x8fdd1u);
    c.eip = pop32(c); return;
L_8fdd2:
    X86_TICK(c, 12);
    // 08fdd2  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0x8fdd2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 08fdd6  ret 
    X86_AT(c, 0x8fdd6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fd67u, "ran off the end of a function");
}
void f_0008fdd7(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08fdd7  push ds
    X86_AT(c, 0x8fdd7u);
    push32(c, c.sreg[3]);
    // 08fdd8  pop es
    X86_AT(c, 0x8fdd8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08fdd9  call 0x900fd
    X86_AT(c, 0x8fdd9u);
    push32(c, 0x8fddeu); x86_call_known(c, 0x900fdu, f_000900fd); X86_RET(c, 0x8fddeu);
L_8fdde:
    X86_TICK(c, 19);
    // 08fdde  lea esi, [0x89aa5]
    X86_AT(c, 0x8fddeu);
    c.r[6] = (uint32_t)(0x89AA5u);
    // 08fde4  mov ax, word ptr [esi + 0x10]
    X86_AT(c, 0x8fde4u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u))));
    // 08fde8  add ax, word ptr [esi + 0x30]
    X86_AT(c, 0x8fde8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x30u))), 0, 2)); }
    // 08fdec  or ax, ax
    X86_AT(c, 0x8fdecu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 08fdef  jne 0x8fdde
    X86_AT(c, 0x8fdefu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8fddeu); goto L_8fdde; }
    X86_TICK(c, 7);
    // 08fdf1  call 0x911b3
    X86_AT(c, 0x8fdf1u);
    push32(c, 0x8fdf6u); x86_call_known(c, 0x911b3u, f_000911b3); X86_RET(c, 0x8fdf6u);
    X86_TICK(c, 7);
    // 08fdf6  call 0x90f68
    X86_AT(c, 0x8fdf6u);
    push32(c, 0x8fdfbu); x86_call_known(c, 0x90f68u, f_00090f68); X86_RET(c, 0x8fdfbu);
    X86_TICK(c, 12);
    // 08fdfb  cmp byte ptr [0x89a79], 0
    X86_AT(c, 0x8fdfbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89A79u))), 0x0u, 0, 1);
    // 08fe02  jne 0x8fe0b
    X86_AT(c, 0x8fe02u);
    if (x86_cc(c, 5)) { goto L_8fe0b; }
    X86_TICK(c, 7);
    // 08fe04  call 0x90fe3
    X86_AT(c, 0x8fe04u);
    push32(c, 0x8fe09u); x86_call_known(c, 0x90fe3u, f_00090fe3); X86_RET(c, 0x8fe09u);
    X86_TICK(c, 7);
    // 08fe09  jmp 0x8fe10
    X86_AT(c, 0x8fe09u);
    goto L_8fe10;
L_8fe0b:
    X86_TICK(c, 7);
    // 08fe0b  call 0x90fa4
    X86_AT(c, 0x8fe0bu);
    push32(c, 0x8fe10u); x86_call_known(c, 0x90fa4u, f_00090fa4); X86_RET(c, 0x8fe10u);
L_8fe10:
    X86_TICK(c, 12);
    // 08fe10  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fe10u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fe14  ret 
    X86_AT(c, 0x8fe14u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fdd7u, "ran off the end of a function");
}
void f_0008fe15(X86Cpu& c) {
    X86_TICK(c, 12);
    // 08fe15  cmp byte ptr [0x89836], 0
    X86_AT(c, 0x8fe15u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89836u))), 0x0u, 0, 1);
    // 08fe1c  jne 0x8fe90
    X86_AT(c, 0x8fe1cu);
    if (x86_cc(c, 5)) { goto L_8fe90; }
    X86_TICK(c, 47);
    // 08fe1e  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8fe1eu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08fe21  mov byte ptr [0x89834], dl
    X86_AT(c, 0x8fe21u);
    wr8((c.sbase[3] + (uint32_t)(0x89834u)), g8(c, 2));
    // 08fe27  mov byte ptr [0x89828], dl
    X86_AT(c, 0x8fe27u);
    wr8((c.sbase[3] + (uint32_t)(0x89828u)), g8(c, 2));
    // 08fe2d  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x8fe2du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fe30  mov ax, word ptr [ebp + 0x24]
    X86_AT(c, 0x8fe30u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 08fe34  mov dword ptr [0x89811], esi
    X86_AT(c, 0x8fe34u);
    wr32((c.sbase[3] + (uint32_t)(0x89811u)), c.r[6]);
    // 08fe3a  mov word ptr [0x89815], ax
    X86_AT(c, 0x8fe3au);
    wr16((c.sbase[3] + (uint32_t)(0x89815u)), (c.r[0] & 0xFFFFu));
    // 08fe40  mov dword ptr [0x89817], esi
    X86_AT(c, 0x8fe40u);
    wr32((c.sbase[3] + (uint32_t)(0x89817u)), c.r[6]);
    // 08fe46  mov word ptr [0x8981b], ax
    X86_AT(c, 0x8fe46u);
    wr16((c.sbase[3] + (uint32_t)(0x8981Bu)), (c.r[0] & 0xFFFFu));
    // 08fe4c  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x8fe4cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 08fe4f  add ecx, esi
    X86_AT(c, 0x8fe4fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 08fe51  mov dword ptr [0x8981d], ecx
    X86_AT(c, 0x8fe51u);
    wr32((c.sbase[3] + (uint32_t)(0x8981Du)), c.r[1]);
    // 08fe57  mov word ptr [0x89821], ax
    X86_AT(c, 0x8fe57u);
    wr16((c.sbase[3] + (uint32_t)(0x89821u)), (c.r[0] & 0xFFFFu));
    // 08fe5d  mov word ptr [0x89832], 0
    X86_AT(c, 0x8fe5du);
    wr16((c.sbase[3] + (uint32_t)(0x89832u)), 0x0u);
    // 08fe66  mov word ptr [0x89823], 0
    X86_AT(c, 0x8fe66u);
    wr16((c.sbase[3] + (uint32_t)(0x89823u)), 0x0u);
    // 08fe6f  mov word ptr [0x89825], 0
    X86_AT(c, 0x8fe6fu);
    wr16((c.sbase[3] + (uint32_t)(0x89825u)), 0x0u);
    // 08fe78  call 0x901d9
    X86_AT(c, 0x8fe78u);
    push32(c, 0x8fe7du); x86_call_known(c, 0x901d9u, f_000901d9); X86_RET(c, 0x8fe7du);
    X86_TICK(c, 16);
    // 08fe7d  mov byte ptr [0x8983d], 0xff
    X86_AT(c, 0x8fe7du);
    wr8((c.sbase[3] + (uint32_t)(0x8983Du)), 0xFFu);
    // 08fe84  mov byte ptr [0x89836], 0xff
    X86_AT(c, 0x8fe84u);
    wr8((c.sbase[3] + (uint32_t)(0x89836u)), 0xFFu);
    // 08fe8b  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fe8bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fe8f  ret 
    X86_AT(c, 0x8fe8fu);
    c.eip = pop32(c); return;
L_8fe90:
    X86_TICK(c, 12);
    // 08fe90  mov byte ptr [ebp + 0x20], 2
    X86_AT(c, 0x8fe90u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x2u);
    // 08fe94  ret 
    X86_AT(c, 0x8fe94u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fe15u, "ran off the end of a function");
}
void f_0008fe95(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08fe95  call 0x900fd
    X86_AT(c, 0x8fe95u);
    push32(c, 0x8fe9au); x86_call_known(c, 0x900fdu, f_000900fd); X86_RET(c, 0x8fe9au);
    X86_TICK(c, 5);
    // 08fe9a  jb 0x8fea5
    X86_AT(c, 0x8fe9au);
    if (x86_cc(c, 2)) { goto L_8fea5; }
    X86_TICK(c, 12);
    // 08fea0  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fea0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fea4  ret 
    X86_AT(c, 0x8fea4u);
    c.eip = pop32(c); return;
L_8fea5:
    X86_TICK(c, 12);
    // 08fea5  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0x8fea5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 08fea9  ret 
    X86_AT(c, 0x8fea9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fe95u, "ran off the end of a function");
}
void f_0008feaa(X86Cpu& c) {
    X86_TICK(c, 11);
    // 08feaa  mov byte ptr [0x89838], 0xff
    X86_AT(c, 0x8feaau);
    wr8((c.sbase[3] + (uint32_t)(0x89838u)), 0xFFu);
    // 08feb1  mov byte ptr [0x8983f], 0xff
    X86_AT(c, 0x8feb1u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Fu)), 0xFFu);
    // 08feb8  call 0x90188
    X86_AT(c, 0x8feb8u);
    push32(c, 0x8febdu); x86_call_known(c, 0x90188u, f_00090188); X86_RET(c, 0x8febdu);
    X86_TICK(c, 10);
    // 08febd  ret 
    X86_AT(c, 0x8febdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8feaau, "ran off the end of a function");
}
void f_0008febe(X86Cpu& c) {
    X86_TICK(c, 14);
    // 08febe  mov byte ptr [0x89838], 0
    X86_AT(c, 0x8febeu);
    wr8((c.sbase[3] + (uint32_t)(0x89838u)), 0x0u);
    // 08fec5  mov byte ptr [0x8983e], 0xff
    X86_AT(c, 0x8fec5u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Eu)), 0xFFu);
    // 08fecc  ret 
    X86_AT(c, 0x8feccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8febeu, "ran off the end of a function");
}
void f_0008fecd(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08fecd  mov byte ptr [0x89a96], 0xff
    X86_AT(c, 0x8fecdu);
    wr8((c.sbase[3] + (uint32_t)(0x89A96u)), 0xFFu);
    // 08fed4  mov ax, word ptr [0x89815]
    X86_AT(c, 0x8fed4u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89815u))));
    // 08feda  mov word ptr [ebp + 0x28], ax
    X86_AT(c, 0x8fedau);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 08fede  mov eax, dword ptr [0x89811]
    X86_AT(c, 0x8fedeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89811u)));
    // 08fee3  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0x8fee3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
    // 08fee6  mov ax, word ptr [0x89823]
    X86_AT(c, 0x8fee6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89823u))));
    // 08feec  mov word ptr [ebp + 0x14], ax
    X86_AT(c, 0x8feecu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[0] & 0xFFFFu));
    // 08fef0  mov ax, word ptr [0x89825]
    X86_AT(c, 0x8fef0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89825u))));
    // 08fef6  mov word ptr [ebp + 0x1c], ax
    X86_AT(c, 0x8fef6u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), (c.r[0] & 0xFFFFu));
    // 08fefa  mov al, byte ptr [0x89829]
    X86_AT(c, 0x8fefau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89829u))));
    // 08feff  mov ah, byte ptr [0x89836]
    X86_AT(c, 0x8feffu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0x89836u))));
    // 08ff05  mov word ptr [ebp + 0x18], ax
    X86_AT(c, 0x8ff05u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 08ff09  mov byte ptr [0x89a96], 0
    X86_AT(c, 0x8ff09u);
    wr8((c.sbase[3] + (uint32_t)(0x89A96u)), 0x0u);
    // 08ff10  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8ff10u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08ff14  ret 
    X86_AT(c, 0x8ff14u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fecdu, "ran off the end of a function");
}
void f_0008ff15(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08ff15  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8ff15u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08ff18  inc dl
    X86_AT(c, 0x8ff18u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 08ff1a  cmp dl, 8
    X86_AT(c, 0x8ff1au);
    (void)x86_sub(c, g8(c, 2), 0x8u, 0, 1);
    // 08ff1d  ja 0x8ff2c
    X86_AT(c, 0x8ff1du);
    if (x86_cc(c, 7)) { goto L_8ff2c; }
    X86_TICK(c, 16);
    // 08ff1f  dec dl
    X86_AT(c, 0x8ff1fu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 08ff21  mov byte ptr [0x89842], dl
    X86_AT(c, 0x8ff21u);
    wr8((c.sbase[3] + (uint32_t)(0x89842u)), g8(c, 2));
    // 08ff27  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8ff27u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08ff2b  ret 
    X86_AT(c, 0x8ff2bu);
    c.eip = pop32(c); return;
L_8ff2c:
    X86_TICK(c, 12);
    // 08ff2c  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8ff2cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08ff30  ret 
    X86_AT(c, 0x8ff30u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ff15u, "ran off the end of a function");
}
void f_0008ff31(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08ff31  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8ff31u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08ff34  inc dl
    X86_AT(c, 0x8ff34u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 08ff36  cmp dl, 1
    X86_AT(c, 0x8ff36u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 08ff39  ja 0x8ff48
    X86_AT(c, 0x8ff39u);
    if (x86_cc(c, 7)) { goto L_8ff48; }
    X86_TICK(c, 16);
    // 08ff3b  dec dl
    X86_AT(c, 0x8ff3bu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 08ff3d  mov byte ptr [0x89839], dl
    X86_AT(c, 0x8ff3du);
    wr8((c.sbase[3] + (uint32_t)(0x89839u)), g8(c, 2));
    // 08ff43  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8ff43u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08ff47  ret 
    X86_AT(c, 0x8ff47u);
    c.eip = pop32(c); return;
L_8ff48:
    X86_TICK(c, 12);
    // 08ff48  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8ff48u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08ff4c  ret 
    X86_AT(c, 0x8ff4cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ff31u, "ran off the end of a function");
}
void f_0008ff4d(X86Cpu& c) {
    X86_TICK(c, 11);
    // 08ff4d  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x8ff4du);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08ff51  cmp dx, 0xfa
    X86_AT(c, 0x8ff51u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFAu, 0, 2);
    // 08ff56  ja 0x8ff6e
    X86_AT(c, 0x8ff56u);
    if (x86_cc(c, 7)) { goto L_8ff6e; }
    X86_TICK(c, 13);
    // 08ff58  mov al, dl
    X86_AT(c, 0x8ff58u);
    s8(c, 0, g8(c, 2));
    // 08ff5a  mov byte ptr [0x89835], al
    X86_AT(c, 0x8ff5au);
    wr8((c.sbase[3] + (uint32_t)(0x89835u)), g8(c, 0));
    // 08ff5f  mov byte ptr [0x89829], al
    X86_AT(c, 0x8ff5fu);
    wr8((c.sbase[3] + (uint32_t)(0x89829u)), g8(c, 0));
    // 08ff64  call 0x912af
    X86_AT(c, 0x8ff64u);
    push32(c, 0x8ff69u); x86_call_known(c, 0x912afu, f_000912af); X86_RET(c, 0x8ff69u);
    X86_TICK(c, 12);
    // 08ff69  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8ff69u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08ff6d  ret 
    X86_AT(c, 0x8ff6du);
    c.eip = pop32(c); return;
L_8ff6e:
    X86_TICK(c, 12);
    // 08ff6e  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8ff6eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08ff72  ret 
    X86_AT(c, 0x8ff72u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ff4du, "ran off the end of a function");
}
void f_0008ff73(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08ff73  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8ff73u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08ff76  inc dl
    X86_AT(c, 0x8ff76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 08ff78  cmp dl, 1
    X86_AT(c, 0x8ff78u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 08ff7b  ja 0x8ff8a
    X86_AT(c, 0x8ff7bu);
    if (x86_cc(c, 7)) { goto L_8ff8a; }
    X86_TICK(c, 16);
    // 08ff7d  dec dl
    X86_AT(c, 0x8ff7du);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 08ff7f  mov byte ptr [0x89a96], dl
    X86_AT(c, 0x8ff7fu);
    wr8((c.sbase[3] + (uint32_t)(0x89A96u)), g8(c, 2));
    // 08ff85  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8ff85u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08ff89  ret 
    X86_AT(c, 0x8ff89u);
    c.eip = pop32(c); return;
L_8ff8a:
    X86_TICK(c, 12);
    // 08ff8a  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8ff8au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08ff8e  ret 
    X86_AT(c, 0x8ff8eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ff73u, "ran off the end of a function");
}
void f_0008ff8f(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08ff8f  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8ff8fu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08ff92  inc dl
    X86_AT(c, 0x8ff92u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 08ff94  cmp dl, 1
    X86_AT(c, 0x8ff94u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 08ff97  ja 0x8ffd1
    X86_AT(c, 0x8ff97u);
    if (x86_cc(c, 7)) { goto L_8ffd1; }
    X86_TICK(c, 14);
    // 08ff99  dec dl
    X86_AT(c, 0x8ff99u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 08ff9b  cmp byte ptr [0x89a79], 0
    X86_AT(c, 0x8ff9bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89A79u))), 0x0u, 0, 1);
    // 08ffa2  jne 0x8ffbc
    X86_AT(c, 0x8ffa2u);
    if (x86_cc(c, 5)) { goto L_8ffbc; }
    X86_TICK(c, 7);
    // 08ffa4  and dl, dl
    X86_AT(c, 0x8ffa4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 08ffa6  je 0x8ffb1
    X86_AT(c, 0x8ffa6u);
    if (x86_cc(c, 4)) { goto L_8ffb1; }
    X86_TICK(c, 9);
    // 08ffa8  mov ah, 0x17
    X86_AT(c, 0x8ffa8u);
    s8(c, 4, 0x17u);
    // 08ffaa  call 0x8f910
    X86_AT(c, 0x8ffaau);
    push32(c, 0x8ffafu); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8ffafu);
    X86_TICK(c, 7);
    // 08ffaf  jmp 0x8ffcc
    X86_AT(c, 0x8ffafu);
    goto L_8ffcc;
L_8ffb1:
    X86_TICK(c, 11);
    // 08ffb1  mov bl, 0
    X86_AT(c, 0x8ffb1u);
    s8(c, 3, 0x0u);
    // 08ffb3  mov ah, 0x15
    X86_AT(c, 0x8ffb3u);
    s8(c, 4, 0x15u);
    // 08ffb5  call 0x8f910
    X86_AT(c, 0x8ffb5u);
    push32(c, 0x8ffbau); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x8ffbau);
    X86_TICK(c, 7);
    // 08ffba  jmp 0x8ffcc
    X86_AT(c, 0x8ffbau);
    goto L_8ffcc;
L_8ffbc:
    X86_TICK(c, 7);
    // 08ffbc  and dl, dl
    X86_AT(c, 0x8ffbcu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 08ffbe  je 0x8ffc7
    X86_AT(c, 0x8ffbeu);
    if (x86_cc(c, 4)) { goto L_8ffc7; }
    X86_TICK(c, 7);
    // 08ffc0  call 0x91214
    X86_AT(c, 0x8ffc0u);
    push32(c, 0x8ffc5u); x86_call_known(c, 0x91214u, f_00091214); X86_RET(c, 0x8ffc5u);
    X86_TICK(c, 7);
    // 08ffc5  jmp 0x8ffcc
    X86_AT(c, 0x8ffc5u);
    goto L_8ffcc;
L_8ffc7:
    X86_TICK(c, 7);
    // 08ffc7  call 0x911d3
    X86_AT(c, 0x8ffc7u);
    push32(c, 0x8ffccu); x86_call_known(c, 0x911d3u, f_000911d3); X86_RET(c, 0x8ffccu);
L_8ffcc:
    X86_TICK(c, 12);
    // 08ffcc  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8ffccu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08ffd0  ret 
    X86_AT(c, 0x8ffd0u);
    c.eip = pop32(c); return;
L_8ffd1:
    X86_TICK(c, 12);
    // 08ffd1  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8ffd1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08ffd5  ret 
    X86_AT(c, 0x8ffd5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ff8fu, "ran off the end of a function");
}
void f_0008ffd6(X86Cpu& c) {
    X86_TICK(c, 15);
    // 08ffd6  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x8ffd6u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08ffd9  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8ffd9u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08ffdc  cmp bl, 0x20
    X86_AT(c, 0x8ffdcu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 08ffdf  jae 0x8fff7
    X86_AT(c, 0x8ffdfu);
    if (x86_cc(c, 3)) { goto L_8fff7; }
    X86_TICK(c, 9);
    // 08ffe1  inc al
    X86_AT(c, 0x8ffe1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 08ffe3  cmp al, 8
    X86_AT(c, 0x8ffe3u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 08ffe5  ja 0x8fff7
    X86_AT(c, 0x8ffe5u);
    if (x86_cc(c, 7)) { goto L_8fff7; }
    X86_TICK(c, 19);
    // 08ffe7  dec al
    X86_AT(c, 0x8ffe7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 08ffe9  movzx ebx, bl
    X86_AT(c, 0x8ffe9u);
    c.r[3] = g8(c, 3);
    // 08ffec  mov byte ptr [ebx + 0x89875], al
    X86_AT(c, 0x8ffecu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89875u)), g8(c, 0));
    // 08fff2  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fff2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fff6  ret 
    X86_AT(c, 0x8fff6u);
    c.eip = pop32(c); return;
L_8fff7:
    X86_TICK(c, 12);
    // 08fff7  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8fff7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08fffb  ret 
    X86_AT(c, 0x8fffbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ffd6u, "ran off the end of a function");
}
void f_0008fffc(X86Cpu& c) {
    X86_TICK(c, 15);
    // 08fffc  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x8fffcu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08ffff  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8ffffu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 090002  cmp bl, 0x20
    X86_AT(c, 0x90002u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 090005  jae 0x9001d
    X86_AT(c, 0x90005u);
    if (x86_cc(c, 3)) { goto L_9001d; }
    X86_TICK(c, 9);
    // 090007  inc al
    X86_AT(c, 0x90007u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 090009  cmp al, 0x10
    X86_AT(c, 0x90009u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 09000b  ja 0x9001d
    X86_AT(c, 0x9000bu);
    if (x86_cc(c, 7)) { goto L_9001d; }
    X86_TICK(c, 19);
    // 09000d  dec al
    X86_AT(c, 0x9000du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 09000f  movzx ebx, bl
    X86_AT(c, 0x9000fu);
    c.r[3] = g8(c, 3);
    // 090012  mov byte ptr [ebx + 0x89895], al
    X86_AT(c, 0x90012u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89895u)), g8(c, 0));
    // 090018  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x90018u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 09001c  ret 
    X86_AT(c, 0x9001cu);
    c.eip = pop32(c); return;
L_9001d:
    X86_TICK(c, 12);
    // 09001d  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x9001du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 090021  ret 
    X86_AT(c, 0x90021u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fffcu, "ran off the end of a function");
}
void f_00090022(X86Cpu& c) {
    X86_TICK(c, 15);
    // 090022  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x90022u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 090025  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x90025u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 090028  cmp bl, 0x20
    X86_AT(c, 0x90028u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 09002b  jae 0x90043
    X86_AT(c, 0x9002bu);
    if (x86_cc(c, 3)) { goto L_90043; }
    X86_TICK(c, 9);
    // 09002d  inc al
    X86_AT(c, 0x9002du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 09002f  cmp al, 1
    X86_AT(c, 0x9002fu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 090031  ja 0x90043
    X86_AT(c, 0x90031u);
    if (x86_cc(c, 7)) { goto L_90043; }
    X86_TICK(c, 19);
    // 090033  dec al
    X86_AT(c, 0x90033u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 090035  movzx ebx, bl
    X86_AT(c, 0x90035u);
    c.r[3] = g8(c, 3);
    // 090038  mov byte ptr [ebx + 0x89855], al
    X86_AT(c, 0x90038u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89855u)), g8(c, 0));
    // 09003e  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x9003eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 090042  ret 
    X86_AT(c, 0x90042u);
    c.eip = pop32(c); return;
L_90043:
    X86_TICK(c, 12);
    // 090043  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x90043u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 090047  ret 
    X86_AT(c, 0x90047u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90022u, "ran off the end of a function");
}
void f_00090048(X86Cpu& c) {
    X86_TICK(c, 15);
    // 090048  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x90048u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 09004b  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x9004bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 09004e  cmp bl, 0x20
    X86_AT(c, 0x9004eu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 090051  jae 0x90069
    X86_AT(c, 0x90051u);
    if (x86_cc(c, 3)) { goto L_90069; }
    X86_TICK(c, 9);
    // 090053  add al, 0x28
    X86_AT(c, 0x90053u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 090055  cmp al, 0x50
    X86_AT(c, 0x90055u);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 090057  ja 0x90069
    X86_AT(c, 0x90057u);
    if (x86_cc(c, 7)) { goto L_90069; }
    X86_TICK(c, 19);
    // 090059  sub al, 0x28
    X86_AT(c, 0x90059u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 09005b  movzx ebx, bl
    X86_AT(c, 0x9005bu);
    c.r[3] = g8(c, 3);
    // 09005e  mov byte ptr [ebx + 0x898d5], al
    X86_AT(c, 0x9005eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x898D5u)), g8(c, 0));
    // 090064  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x90064u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 090068  ret 
    X86_AT(c, 0x90068u);
    c.eip = pop32(c); return;
L_90069:
    X86_TICK(c, 12);
    // 090069  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x90069u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 09006d  ret 
    X86_AT(c, 0x9006du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90048u, "ran off the end of a function");
}
void f_0009006e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 09006e  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x9006eu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 090071  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x90071u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 090074  cmp bl, 0x20
    X86_AT(c, 0x90074u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 090077  jae 0x9008f
    X86_AT(c, 0x90077u);
    if (x86_cc(c, 3)) { goto L_9008f; }
    X86_TICK(c, 9);
    // 090079  add al, 0x28
    X86_AT(c, 0x90079u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 09007b  cmp al, 0x50
    X86_AT(c, 0x9007bu);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 09007d  ja 0x9008f
    X86_AT(c, 0x9007du);
    if (x86_cc(c, 7)) { goto L_9008f; }
    X86_TICK(c, 19);
    // 09007f  sub al, 0x28
    X86_AT(c, 0x9007fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 090081  movzx ebx, bl
    X86_AT(c, 0x90081u);
    c.r[3] = g8(c, 3);
    // 090084  mov byte ptr [ebx + 0x898b5], al
    X86_AT(c, 0x90084u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x898B5u)), g8(c, 0));
    // 09008a  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x9008au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 09008e  ret 
    X86_AT(c, 0x9008eu);
    c.eip = pop32(c); return;
L_9008f:
    X86_TICK(c, 12);
    // 09008f  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x9008fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 090093  ret 
    X86_AT(c, 0x90093u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9006eu, "ran off the end of a function");
}
void f_00090094(X86Cpu& c) {
    X86_TICK(c, 15);
    // 090094  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x90094u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 090097  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x90097u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 09009a  call 0x91752
    X86_AT(c, 0x9009au);
    push32(c, 0x9009fu); x86_call_known(c, 0x91752u, f_00091752); X86_RET(c, 0x9009fu);
    X86_TICK(c, 12);
    // 09009f  mov byte ptr [ebp + 0x20], al
    X86_AT(c, 0x9009fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 0));
    // 0900a2  ret 
    X86_AT(c, 0x900a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90094u, "ran off the end of a function");
}
void f_000900a3(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0900a3  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x900a3u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0900a6  inc bl
    X86_AT(c, 0x900a6u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 0900a8  cmp bl, 8
    X86_AT(c, 0x900a8u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 0900ab  ja 0x900db
    X86_AT(c, 0x900abu);
    if (x86_cc(c, 7)) { goto L_900db; }
    X86_TICK(c, 13);
    // 0900ad  dec bl
    X86_AT(c, 0x900adu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0900af  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x900afu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0900b2  cmp ecx, 0
    X86_AT(c, 0x900b2u);
    (void)x86_sub(c, c.r[1], 0x0u, 0, 4);
    // 0900b5  je 0x900db
    X86_AT(c, 0x900b5u);
    if (x86_cc(c, 4)) { goto L_900db; }
    X86_TICK(c, 12);
    // 0900b7  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x900b7u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0900ba  mov al, byte ptr [0x89a96]
    X86_AT(c, 0x900bau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89A96u))));
    // 0900bf  mov byte ptr [0x89a96], 0xff
    X86_AT(c, 0x900bfu);
    wr8((c.sbase[3] + (uint32_t)(0x89A96u)), 0xFFu);
    // 0900c6  push ax
    X86_AT(c, 0x900c6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
L_900c8:
    X86_TICK(c, 14);
    // 0900c8  lodsb al, byte ptr [esi]
    X86_AT(c, 0x900c8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0900c9  call 0x90d79
    X86_AT(c, 0x900c9u);
    push32(c, 0x900ceu); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x900ceu);
    X86_TICK(c, 11);
    // 0900ce  loop 0x900c8
    X86_AT(c, 0x900ceu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x900c8u); goto L_900c8; }
    X86_TICK(c, 20);
    // 0900d0  pop ax
    X86_AT(c, 0x900d0u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0900d2  mov byte ptr [0x89a96], al
    X86_AT(c, 0x900d2u);
    wr8((c.sbase[3] + (uint32_t)(0x89A96u)), g8(c, 0));
    // 0900d7  xor al, al
    X86_AT(c, 0x900d7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0900d9  clc 
    X86_AT(c, 0x900d9u);
    c.fl &= ~X86_CF;
    // 0900da  ret 
    X86_AT(c, 0x900dau);
    c.eip = pop32(c); return;
L_900db:
    X86_TICK(c, 14);
    // 0900db  mov al, 3
    X86_AT(c, 0x900dbu);
    s8(c, 0, 0x3u);
    // 0900dd  stc 
    X86_AT(c, 0x900ddu);
    c.fl |= X86_CF;
    // 0900de  ret 
    X86_AT(c, 0x900deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x900a3u, "ran off the end of a function");
}
void f_000900df(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0900df  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x900dfu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0900e2  call 0x90d26
    X86_AT(c, 0x900e2u);
    push32(c, 0x900e7u); x86_call_known(c, 0x90d26u, f_00090d26); X86_RET(c, 0x900e7u);
    X86_TICK(c, 13);
    // 0900e7  cmp ah, 1
    X86_AT(c, 0x900e7u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 0900ea  nop 
    X86_AT(c, 0x900eau);
    // 0900eb  nop 
    X86_AT(c, 0x900ebu);
    // 0900ec  nop 
    X86_AT(c, 0x900ecu);
    // 0900ed  ja 0x900f8
    X86_AT(c, 0x900edu);
    if (x86_cc(c, 7)) { goto L_900f8; }
    X86_TICK(c, 5);
    // 0900ef  je 0x900f8
    X86_AT(c, 0x900efu);
    if (x86_cc(c, 4)) { goto L_900f8; }
    X86_TICK(c, 16);
    // 0900f1  mov byte ptr [ebp + 0x18], al
    X86_AT(c, 0x900f1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), g8(c, 0));
    // 0900f4  xor al, al
    X86_AT(c, 0x900f4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0900f6  clc 
    X86_AT(c, 0x900f6u);
    c.fl &= ~X86_CF;
    // 0900f7  ret 
    X86_AT(c, 0x900f7u);
    c.eip = pop32(c); return;
L_900f8:
    X86_TICK(c, 14);
    // 0900f8  mov byte ptr [ebp + 0x20], ah
    X86_AT(c, 0x900f8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 4));
    // 0900fb  stc 
    X86_AT(c, 0x900fbu);
    c.fl |= X86_CF;
    // 0900fc  ret 
    X86_AT(c, 0x900fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x900dfu, "ran off the end of a function");
}
void f_000900fd(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0900fd  cmp byte ptr [0x89836], 0
    X86_AT(c, 0x900fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89836u))), 0x0u, 0, 1);
    // 090104  je 0x9012b
    X86_AT(c, 0x90104u);
    if (x86_cc(c, 4)) { goto L_9012b; }
    X86_TICK(c, 15);
    // 090106  mov byte ptr [0x8983f], 0xff
    X86_AT(c, 0x90106u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Fu)), 0xFFu);
    // 09010d  mov byte ptr [0x89836], 0
    X86_AT(c, 0x9010du);
    wr8((c.sbase[3] + (uint32_t)(0x89836u)), 0x0u);
    // 090114  mov word ptr [0x89849], 0
    X86_AT(c, 0x90114u);
    wr16((c.sbase[3] + (uint32_t)(0x89849u)), 0x0u);
    // 09011d  mov byte ptr [0x89837], 0
    X86_AT(c, 0x9011du);
    wr8((c.sbase[3] + (uint32_t)(0x89837u)), 0x0u);
    // 090124  call 0x90188
    X86_AT(c, 0x90124u);
    push32(c, 0x90129u); x86_call_known(c, 0x90188u, f_00090188); X86_RET(c, 0x90129u);
    X86_TICK(c, 12);
    // 090129  clc 
    X86_AT(c, 0x90129u);
    c.fl &= ~X86_CF;
    // 09012a  ret 
    X86_AT(c, 0x9012au);
    c.eip = pop32(c); return;
L_9012b:
    X86_TICK(c, 12);
    // 09012b  stc 
    X86_AT(c, 0x9012bu);
    c.fl |= X86_CF;
    // 09012c  ret 
    X86_AT(c, 0x9012cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x900fdu, "ran off the end of a function");
}
void f_0009012d(X86Cpu& c) {
    X86_TICK(c, 57);
    // 09012d  movzx ebx, al
    X86_AT(c, 0x9012du);
    c.r[3] = g8(c, 0);
    // 090130  and al, 0xf
    X86_AT(c, 0x90130u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 090132  inc al
    X86_AT(c, 0x90132u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 090134  shr ebx, 4
    X86_AT(c, 0x90134u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 090137  mov bx, word ptr cs:[ebx*2 + 0x9014d]
    X86_AT(c, 0x90137u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x9014Du))));
    // 090140  push eax
    X86_AT(c, 0x90140u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090141  movzx ax, al
    X86_AT(c, 0x90141u);
    s16(c, 0, g8(c, 0));
    // 090145  mul bx
    X86_AT(c, 0x90145u);
    x86_mul(c, (c.r[3] & 0xFFFFu), 2);
    // 090148  mov dx, ax
    X86_AT(c, 0x90148u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 09014b  pop eax
    X86_AT(c, 0x9014bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 09014c  ret 
    X86_AT(c, 0x9014cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9012du, "ran off the end of a function");
}
void f_0009017e(X86Cpu& c) {
    X86_TICK(c, 17);
    // 09017e  movzx ebx, dl
    X86_AT(c, 0x9017eu);
    c.r[3] = g8(c, 2);
    // 090181  mov bl, byte ptr [ebx + 0x89875]
    X86_AT(c, 0x90181u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89875u))));
    // 090187  ret 
    X86_AT(c, 0x90187u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9017eu, "ran off the end of a function");
}
void f_00090188(X86Cpu& c) {
    X86_TICK(c, 39);
    // 090188  pushal 
    X86_AT(c, 0x90188u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 090189  mov al, byte ptr [0x89a96]
    X86_AT(c, 0x90189u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89A96u))));
    // 09018e  push eax
    X86_AT(c, 0x9018eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09018f  mov byte ptr [0x89a96], 0xff
    X86_AT(c, 0x9018fu);
    wr8((c.sbase[3] + (uint32_t)(0x89A96u)), 0xFFu);
    // 090196  movzx ecx, word ptr [0x89840]
    X86_AT(c, 0x90196u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0x89840u)));
    // 09019d  or ecx, ecx
    X86_AT(c, 0x9019du);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 09019f  je 0x901d1
    X86_AT(c, 0x9019fu);
    if (x86_cc(c, 4)) { goto L_901d1; }
    X86_TICK(c, 2);
    // 0901a1  lea edi, [0x898f5]
    X86_AT(c, 0x901a1u);
    c.r[7] = (uint32_t)(0x898F5u);
L_901a7:
    X86_TICK(c, 12);
    // 0901a7  cmp byte ptr [edi], 0
    X86_AT(c, 0x901a7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0901aa  jne 0x901b1
    X86_AT(c, 0x901aau);
    if (x86_cc(c, 5)) { goto L_901b1; }
    X86_TICK(c, 9);
    // 0901ac  add edi, 6
    X86_AT(c, 0x901acu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0901af  jmp 0x901a7
    X86_AT(c, 0x901afu);
    X86_POLL(c, 0x901a7u); goto L_901a7;
L_901b1:
    X86_TICK(c, 28);
    // 0901b1  push ecx
    X86_AT(c, 0x901b1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0901b2  xor ch, ch
    X86_AT(c, 0x901b2u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 0901b4  xchg byte ptr [edi], ch
    X86_AT(c, 0x901b4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 0901b6  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0x901b6u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0901b9  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0x901b9u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0901bc  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0x901bcu);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 0901bf  call 0x90903
    X86_AT(c, 0x901bfu);
    push32(c, 0x901c4u); x86_call_known(c, 0x90903u, f_00090903); X86_RET(c, 0x901c4u);
    X86_TICK(c, 23);
    // 0901c4  pop ecx
    X86_AT(c, 0x901c4u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0901c5  add edi, 6
    X86_AT(c, 0x901c5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0901c8  dec word ptr [0x89840]
    X86_AT(c, 0x901c8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89840u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0901cf  loop 0x901a7
    X86_AT(c, 0x901cfu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x901a7u); goto L_901a7; }
L_901d1:
    X86_TICK(c, 40);
    // 0901d1  pop eax
    X86_AT(c, 0x901d1u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0901d2  mov byte ptr [0x89a96], al
    X86_AT(c, 0x901d2u);
    wr8((c.sbase[3] + (uint32_t)(0x89A96u)), g8(c, 0));
    // 0901d7  popal 
    X86_AT(c, 0x901d7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0901d8  ret 
    X86_AT(c, 0x901d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90188u, "ran off the end of a function");
}
void f_000901d9(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0901d9  push ebx
    X86_AT(c, 0x901d9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0901da  push ecx
    X86_AT(c, 0x901dau);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0901db  mov ecx, 8
    X86_AT(c, 0x901dbu);
    c.r[1] = 0x8u;
    // 0901e0  lea ebx, [0x89aa5]
    X86_AT(c, 0x901e0u);
    c.r[3] = (uint32_t)(0x89AA5u);
L_901e6:
    X86_TICK(c, 15);
    // 0901e6  mov byte ptr [ebx + 0x1b], 0
    X86_AT(c, 0x901e6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), 0x0u);
    // 0901ea  add ebx, 0x20
    X86_AT(c, 0x901eau);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x20u, 0, 4); }
    // 0901ed  loop 0x901e6
    X86_AT(c, 0x901edu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x901e6u); goto L_901e6; }
    X86_TICK(c, 18);
    // 0901ef  pop ecx
    X86_AT(c, 0x901efu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0901f0  pop ebx
    X86_AT(c, 0x901f0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0901f1  ret 
    X86_AT(c, 0x901f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x901d9u, "ran off the end of a function");
}
void f_000901f2(X86Cpu& c) {
    X86_TICK(c, 69);
    // 0901f2  push es
    X86_AT(c, 0x901f2u);
    push32(c, c.sreg[0]);
    // 0901f3  pushal 
    X86_AT(c, 0x901f3u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0901f4  push ds
    X86_AT(c, 0x901f4u);
    push32(c, c.sreg[3]);
    // 0901f5  pop es
    X86_AT(c, 0x901f5u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0901f6  mov al, 0xff
    X86_AT(c, 0x901f6u);
    s8(c, 0, 0xFFu);
    // 0901f8  lea edi, [0x89855]
    X86_AT(c, 0x901f8u);
    c.r[7] = (uint32_t)(0x89855u);
    // 0901fe  mov ecx, 0x20
    X86_AT(c, 0x901feu);
    c.r[1] = 0x20u;
    // 090203  stosb byte ptr es:[edi], al
    X86_AT(c, 0x90203u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 090205  mov al, 0xff
    X86_AT(c, 0x90205u);
    s8(c, 0, 0xFFu);
    // 090207  lea edi, [0x89875]
    X86_AT(c, 0x90207u);
    c.r[7] = (uint32_t)(0x89875u);
    // 09020d  mov ecx, 0x10
    X86_AT(c, 0x9020du);
    c.r[1] = 0x10u;
    // 090212  stosb byte ptr es:[edi], al
    X86_AT(c, 0x90212u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 090214  xor al, al
    X86_AT(c, 0x90214u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 090216  mov ecx, 0x10
    X86_AT(c, 0x90216u);
    c.r[1] = 0x10u;
    // 09021b  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9021bu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 09021d  xor al, al
    X86_AT(c, 0x9021du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 09021f  lea edi, [0x89895]
    X86_AT(c, 0x9021fu);
    c.r[7] = (uint32_t)(0x89895u);
    // 090225  mov ecx, 0x20
    X86_AT(c, 0x90225u);
    c.r[1] = 0x20u;
L_9022a:
    X86_TICK(c, 22);
    // 09022a  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9022au);
    x86_string(c, 2, 1, 0, 4, 3);
    // 09022b  inc al
    X86_AT(c, 0x9022bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 09022d  and al, 0xf
    X86_AT(c, 0x9022du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 09022f  loop 0x9022a
    X86_AT(c, 0x9022fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x9022au); goto L_9022a; }
    X86_TICK(c, 64);
    // 090231  xor al, al
    X86_AT(c, 0x90231u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 090233  lea edi, [0x898b5]
    X86_AT(c, 0x90233u);
    c.r[7] = (uint32_t)(0x898B5u);
    // 090239  mov ecx, 0x20
    X86_AT(c, 0x90239u);
    c.r[1] = 0x20u;
    // 09023e  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9023eu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 090240  xor al, al
    X86_AT(c, 0x90240u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 090242  lea edi, [0x898d5]
    X86_AT(c, 0x90242u);
    c.r[7] = (uint32_t)(0x898D5u);
    // 090248  mov ecx, 0x20
    X86_AT(c, 0x90248u);
    c.r[1] = 0x20u;
    // 09024d  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9024du);
    x86_string(c, 2, 1, 243, 4, 3);
    // 09024f  popal 
    X86_AT(c, 0x9024fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 090250  pop es
    X86_AT(c, 0x90250u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 090251  ret 
    X86_AT(c, 0x90251u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x901f2u, "ran off the end of a function");
}
void f_00090252(X86Cpu& c) {
    X86_TICK(c, 26);
    // 090252  pushal 
    X86_AT(c, 0x90252u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 090253  xor eax, eax
    X86_AT(c, 0x90253u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 090255  mov word ptr [0x89840], ax
    X86_AT(c, 0x90255u);
    wr16((c.sbase[3] + (uint32_t)(0x89840u)), (c.r[0] & 0xFFFFu));
    // 09025b  mov ecx, 0x40
    X86_AT(c, 0x9025bu);
    c.r[1] = 0x40u;
    // 090260  lea edi, [0x898f5]
    X86_AT(c, 0x90260u);
    c.r[7] = (uint32_t)(0x898F5u);
L_90266:
    X86_TICK(c, 17);
    // 090266  mov dword ptr [edi], eax
    X86_AT(c, 0x90266u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 090268  mov word ptr [edi + 4], ax
    X86_AT(c, 0x90268u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 09026c  add edi, 6
    X86_AT(c, 0x9026cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 09026f  loop 0x90266
    X86_AT(c, 0x9026fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90266u); goto L_90266; }
    X86_TICK(c, 34);
    // 090271  popal 
    X86_AT(c, 0x90271u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 090272  ret 
    X86_AT(c, 0x90272u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90252u, "ran off the end of a function");
}
void f_00090273(X86Cpu& c) {
    X86_TICK(c, 50);
    // 090273  xor eax, eax
    X86_AT(c, 0x90273u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 090275  mov byte ptr [0x89a96], al
    X86_AT(c, 0x90275u);
    wr8((c.sbase[3] + (uint32_t)(0x89A96u)), g8(c, 0));
    // 09027a  mov byte ptr [0x89a98], al
    X86_AT(c, 0x9027au);
    wr8((c.sbase[3] + (uint32_t)(0x89A98u)), g8(c, 0));
    // 09027f  mov byte ptr [0x89a97], al
    X86_AT(c, 0x9027fu);
    wr8((c.sbase[3] + (uint32_t)(0x89A97u)), g8(c, 0));
    // 090284  mov byte ptr [0x89850], 0
    X86_AT(c, 0x90284u);
    wr8((c.sbase[3] + (uint32_t)(0x89850u)), 0x0u);
    // 09028b  mov byte ptr [0x89836], al
    X86_AT(c, 0x9028bu);
    wr8((c.sbase[3] + (uint32_t)(0x89836u)), g8(c, 0));
    // 090290  mov byte ptr [0x89837], al
    X86_AT(c, 0x90290u);
    wr8((c.sbase[3] + (uint32_t)(0x89837u)), g8(c, 0));
    // 090295  mov byte ptr [0x89838], al
    X86_AT(c, 0x90295u);
    wr8((c.sbase[3] + (uint32_t)(0x89838u)), g8(c, 0));
    // 09029a  mov byte ptr [0x89839], al
    X86_AT(c, 0x9029au);
    wr8((c.sbase[3] + (uint32_t)(0x89839u)), g8(c, 0));
    // 09029f  mov byte ptr [0x8983a], al
    X86_AT(c, 0x9029fu);
    wr8((c.sbase[3] + (uint32_t)(0x8983Au)), g8(c, 0));
    // 0902a4  mov byte ptr [0x8983b], al
    X86_AT(c, 0x902a4u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Bu)), g8(c, 0));
    // 0902a9  mov byte ptr [0x8983c], al
    X86_AT(c, 0x902a9u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Cu)), g8(c, 0));
    // 0902ae  mov byte ptr [0x8983d], al
    X86_AT(c, 0x902aeu);
    wr8((c.sbase[3] + (uint32_t)(0x8983Du)), g8(c, 0));
    // 0902b3  mov byte ptr [0x8983e], al
    X86_AT(c, 0x902b3u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Eu)), g8(c, 0));
    // 0902b8  mov byte ptr [0x8983f], al
    X86_AT(c, 0x902b8u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Fu)), g8(c, 0));
    // 0902bd  lea edi, [0x89851]
    X86_AT(c, 0x902bdu);
    c.r[7] = (uint32_t)(0x89851u);
    // 0902c3  mov byte ptr [edi], 0
    X86_AT(c, 0x902c3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0902c6  mov byte ptr [edi + 1], 1
    X86_AT(c, 0x902c6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0x1u);
    // 0902ca  mov byte ptr [edi + 2], 2
    X86_AT(c, 0x902cau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x2u);
    // 0902ce  mov byte ptr [edi + 3], 3
    X86_AT(c, 0x902ceu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x3u);
    // 0902d2  ret 
    X86_AT(c, 0x902d2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90273u, "ran off the end of a function");
}
void f_000902d3(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0902d3  mov word ptr [0x89849], 0
    X86_AT(c, 0x902d3u);
    wr16((c.sbase[3] + (uint32_t)(0x89849u)), 0x0u);
    // 0902dc  mov word ptr [0x89845], 0
    X86_AT(c, 0x902dcu);
    wr16((c.sbase[3] + (uint32_t)(0x89845u)), 0x0u);
    // 0902e5  mov word ptr [0x89847], 0x10
    X86_AT(c, 0x902e5u);
    wr16((c.sbase[3] + (uint32_t)(0x89847u)), 0x10u);
    // 0902ee  mov al, 0x33
    X86_AT(c, 0x902eeu);
    s8(c, 0, 0x33u);
    // 0902f0  mov byte ptr [0x89834], al
    X86_AT(c, 0x902f0u);
    wr8((c.sbase[3] + (uint32_t)(0x89834u)), g8(c, 0));
    // 0902f5  mov byte ptr [0x89828], al
    X86_AT(c, 0x902f5u);
    wr8((c.sbase[3] + (uint32_t)(0x89828u)), g8(c, 0));
    // 0902fa  mov word ptr [0x89823], ax
    X86_AT(c, 0x902fau);
    wr16((c.sbase[3] + (uint32_t)(0x89823u)), (c.r[0] & 0xFFFFu));
    // 090300  mov byte ptr [0x89827], al
    X86_AT(c, 0x90300u);
    wr8((c.sbase[3] + (uint32_t)(0x89827u)), g8(c, 0));
    // 090305  mov word ptr [0x89825], ax
    X86_AT(c, 0x90305u);
    wr16((c.sbase[3] + (uint32_t)(0x89825u)), (c.r[0] & 0xFFFFu));
    // 09030b  mov al, 0x5a
    X86_AT(c, 0x9030bu);
    s8(c, 0, 0x5Au);
    // 09030d  mov byte ptr [0x89835], al
    X86_AT(c, 0x9030du);
    wr8((c.sbase[3] + (uint32_t)(0x89835u)), g8(c, 0));
    // 090312  mov byte ptr [0x89829], al
    X86_AT(c, 0x90312u);
    wr8((c.sbase[3] + (uint32_t)(0x89829u)), g8(c, 0));
    // 090317  ret 
    X86_AT(c, 0x90317u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x902d3u, "ran off the end of a function");
}
void f_00090318(X86Cpu& c) {
    X86_TICK(c, 16);
    // 090318  mov byte ptr [0x89843], 0
    X86_AT(c, 0x90318u);
    wr8((c.sbase[3] + (uint32_t)(0x89843u)), 0x0u);
    // 09031f  mov byte ptr [0x89842], 0xff
    X86_AT(c, 0x9031fu);
    wr8((c.sbase[3] + (uint32_t)(0x89842u)), 0xFFu);
    // 090326  mov byte ptr [0x89844], 0
    X86_AT(c, 0x90326u);
    wr8((c.sbase[3] + (uint32_t)(0x89844u)), 0x0u);
    // 09032d  ret 
    X86_AT(c, 0x9032du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90318u, "ran off the end of a function");
}
void f_0009032e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 09032e  cld 
    X86_AT(c, 0x9032eu);
    c.fl &= ~X86_DF;
    // 09032f  call 0x90440
    X86_AT(c, 0x9032fu);
    push32(c, 0x90334u); x86_call_known(c, 0x90440u, f_00090440); X86_RET(c, 0x90334u);
    X86_TICK(c, 7);
    // 090334  call 0x90380
    X86_AT(c, 0x90334u);
    push32(c, 0x90339u); x86_call_known(c, 0x90380u, f_00090380); X86_RET(c, 0x90339u);
    X86_TICK(c, 7);
    // 090339  call 0x903e0
    X86_AT(c, 0x90339u);
    push32(c, 0x9033eu); x86_call_known(c, 0x903e0u, f_000903e0); X86_RET(c, 0x9033eu);
L_9033e:
    X86_TICK(c, 12);
    // 09033e  cmp word ptr [0x89849], 0
    X86_AT(c, 0x9033eu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x89849u))), 0x0u, 0, 2);
    // 090346  je 0x9037f
    X86_AT(c, 0x90346u);
    if (x86_cc(c, 4)) { goto L_9037f; }
    X86_TICK(c, 13);
    // 090348  dec word ptr [0x89849]
    X86_AT(c, 0x90348u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89849u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 09034f  call 0x9048b
    X86_AT(c, 0x9034fu);
    push32(c, 0x90354u); x86_call_known(c, 0x9048bu, f_0009048b); X86_RET(c, 0x90354u);
    X86_TICK(c, 5);
    // 090354  jb 0x9033e
    X86_AT(c, 0x90354u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x9033eu); goto L_9033e; }
    X86_TICK(c, 12);
    // 090356  cmp byte ptr [0x89836], 0
    X86_AT(c, 0x90356u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89836u))), 0x0u, 0, 1);
    // 09035d  je 0x9033e
    X86_AT(c, 0x9035du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x9033eu); goto L_9033e; }
    X86_TICK(c, 7);
    // 09035f  call 0x908c1
    X86_AT(c, 0x9035fu);
    push32(c, 0x90364u); x86_call_known(c, 0x908c1u, f_000908c1); X86_RET(c, 0x90364u);
    X86_TICK(c, 7);
    // 090364  call 0x904ed
    X86_AT(c, 0x90364u);
    push32(c, 0x90369u); x86_call_known(c, 0x904edu, f_000904ed); X86_RET(c, 0x90369u);
    X86_TICK(c, 7);
    // 090369  call 0x90472
    X86_AT(c, 0x90369u);
    push32(c, 0x9036eu); x86_call_known(c, 0x90472u, f_00090472); X86_RET(c, 0x9036eu);
    X86_TICK(c, 7);
    // 09036e  call 0x90440
    X86_AT(c, 0x9036eu);
    push32(c, 0x90373u); x86_call_known(c, 0x90440u, f_00090440); X86_RET(c, 0x90373u);
    X86_TICK(c, 7);
    // 090373  call 0x90380
    X86_AT(c, 0x90373u);
    push32(c, 0x90378u); x86_call_known(c, 0x90380u, f_00090380); X86_RET(c, 0x90378u);
    X86_TICK(c, 7);
    // 090378  call 0x903e0
    X86_AT(c, 0x90378u);
    push32(c, 0x9037du); x86_call_known(c, 0x903e0u, f_000903e0); X86_RET(c, 0x9037du);
    X86_TICK(c, 7);
    // 09037d  jmp 0x9033e
    X86_AT(c, 0x9037du);
    X86_POLL(c, 0x9033eu); goto L_9033e;
L_9037f:
    X86_TICK(c, 10);
    // 09037f  ret 
    X86_AT(c, 0x9037fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9032eu, "ran off the end of a function");
}
void f_00090380(X86Cpu& c) {
    X86_TICK(c, 12);
    // 090380  cmp byte ptr [0x8983a], 0
    X86_AT(c, 0x90380u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8983Au))), 0x0u, 0, 1);
    // 090387  je 0x9039e
    X86_AT(c, 0x90387u);
    if (x86_cc(c, 4)) { goto L_9039e; }
    X86_TICK(c, 6);
    // 090389  mov byte ptr [0x8983a], 0
    X86_AT(c, 0x90389u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Au)), 0x0u);
    // 090390  mov byte ptr [0x89838], 0
    X86_AT(c, 0x90390u);
    wr8((c.sbase[3] + (uint32_t)(0x89838u)), 0x0u);
    // 090397  mov byte ptr [0x8983d], 0xff
    X86_AT(c, 0x90397u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Du)), 0xFFu);
L_9039e:
    X86_TICK(c, 12);
    // 09039e  cmp byte ptr [0x8983b], 0
    X86_AT(c, 0x9039eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8983Bu))), 0x0u, 0, 1);
    // 0903a5  je 0x903bc
    X86_AT(c, 0x903a5u);
    if (x86_cc(c, 4)) { goto L_903bc; }
    X86_TICK(c, 6);
    // 0903a7  mov byte ptr [0x8983b], 0
    X86_AT(c, 0x903a7u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Bu)), 0x0u);
    // 0903ae  mov byte ptr [0x89838], 0
    X86_AT(c, 0x903aeu);
    wr8((c.sbase[3] + (uint32_t)(0x89838u)), 0x0u);
    // 0903b5  mov byte ptr [0x8983e], 0xff
    X86_AT(c, 0x903b5u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Eu)), 0xFFu);
L_903bc:
    X86_TICK(c, 12);
    // 0903bc  cmp byte ptr [0x8983c], 0
    X86_AT(c, 0x903bcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8983Cu))), 0x0u, 0, 1);
    // 0903c3  je 0x903df
    X86_AT(c, 0x903c3u);
    if (x86_cc(c, 4)) { goto L_903df; }
    X86_TICK(c, 13);
    // 0903c5  mov byte ptr [0x8983c], 0
    X86_AT(c, 0x903c5u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Cu)), 0x0u);
    // 0903cc  mov byte ptr [0x89838], 0xff
    X86_AT(c, 0x903ccu);
    wr8((c.sbase[3] + (uint32_t)(0x89838u)), 0xFFu);
    // 0903d3  mov byte ptr [0x8983f], 0xff
    X86_AT(c, 0x903d3u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Fu)), 0xFFu);
    // 0903da  call 0x90188
    X86_AT(c, 0x903dau);
    push32(c, 0x903dfu); x86_call_known(c, 0x90188u, f_00090188); X86_RET(c, 0x903dfu);
L_903df:
    X86_TICK(c, 10);
    // 0903df  ret 
    X86_AT(c, 0x903dfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90380u, "ran off the end of a function");
}
void f_000903e0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0903e0  push ax
    X86_AT(c, 0x903e0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0903e2  cmp byte ptr [0x8983d], 0
    X86_AT(c, 0x903e2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8983Du))), 0x0u, 0, 1);
    // 0903e9  je 0x903f9
    X86_AT(c, 0x903e9u);
    if (x86_cc(c, 4)) { goto L_903f9; }
    X86_TICK(c, 11);
    // 0903eb  mov byte ptr [0x8983d], 0
    X86_AT(c, 0x903ebu);
    wr8((c.sbase[3] + (uint32_t)(0x8983Du)), 0x0u);
    // 0903f2  mov al, 0xfa
    X86_AT(c, 0x903f2u);
    s8(c, 0, 0xFAu);
    // 0903f4  call 0x90e0f
    X86_AT(c, 0x903f4u);
    push32(c, 0x903f9u); x86_call_known(c, 0x90e0fu, f_00090e0f); X86_RET(c, 0x903f9u);
L_903f9:
    X86_TICK(c, 12);
    // 0903f9  cmp byte ptr [0x8983e], 0
    X86_AT(c, 0x903f9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8983Eu))), 0x0u, 0, 1);
    // 090400  je 0x90410
    X86_AT(c, 0x90400u);
    if (x86_cc(c, 4)) { goto L_90410; }
    X86_TICK(c, 11);
    // 090402  mov byte ptr [0x8983e], 0
    X86_AT(c, 0x90402u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Eu)), 0x0u);
    // 090409  mov al, 0xfb
    X86_AT(c, 0x90409u);
    s8(c, 0, 0xFBu);
    // 09040b  call 0x90e0f
    X86_AT(c, 0x9040bu);
    push32(c, 0x90410u); x86_call_known(c, 0x90e0fu, f_00090e0f); X86_RET(c, 0x90410u);
L_90410:
    X86_TICK(c, 12);
    // 090410  cmp byte ptr [0x8983f], 0
    X86_AT(c, 0x90410u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8983Fu))), 0x0u, 0, 1);
    // 090417  je 0x90427
    X86_AT(c, 0x90417u);
    if (x86_cc(c, 4)) { goto L_90427; }
    X86_TICK(c, 11);
    // 090419  mov byte ptr [0x8983f], 0
    X86_AT(c, 0x90419u);
    wr8((c.sbase[3] + (uint32_t)(0x8983Fu)), 0x0u);
    // 090420  mov al, 0xfc
    X86_AT(c, 0x90420u);
    s8(c, 0, 0xFCu);
    // 090422  call 0x90e0f
    X86_AT(c, 0x90422u);
    push32(c, 0x90427u); x86_call_known(c, 0x90e0fu, f_00090e0f); X86_RET(c, 0x90427u);
L_90427:
    X86_TICK(c, 12);
    // 090427  cmp byte ptr [0x89843], 0
    X86_AT(c, 0x90427u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89843u))), 0x0u, 0, 1);
    // 09042e  je 0x9043d
    X86_AT(c, 0x9042eu);
    if (x86_cc(c, 4)) { goto L_9043d; }
    X86_TICK(c, 15);
    // 090430  dec byte ptr [0x89843]
    X86_AT(c, 0x90430u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89843u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 090436  mov al, 0xf8
    X86_AT(c, 0x90436u);
    s8(c, 0, 0xF8u);
    // 090438  call 0x90e0f
    X86_AT(c, 0x90438u);
    push32(c, 0x9043du); x86_call_known(c, 0x90e0fu, f_00090e0f); X86_RET(c, 0x9043du);
L_9043d:
    X86_TICK(c, 14);
    // 09043d  pop ax
    X86_AT(c, 0x9043du);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 09043f  ret 
    X86_AT(c, 0x9043fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x903e0u, "ran off the end of a function");
}
void f_00090440(X86Cpu& c) {
    X86_TICK(c, 81);
    // 090440  mov dx, 0xe71
    X86_AT(c, 0x90440u);
    s16(c, 2, 0xE71u);
    // 090444  nop 
    X86_AT(c, 0x90444u);
    // 090445  nop 
    X86_AT(c, 0x90445u);
    // 090446  nop 
    X86_AT(c, 0x90446u);
    // 090447  pushf 
    X86_AT(c, 0x90447u);
    push16(c, c.fl & 0xFFFFu);
    // 090449  cli 
    X86_AT(c, 0x90449u);
    c.fl &= ~X86_IF;
    // 09044a  in al, dx
    X86_AT(c, 0x9044au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 09044b  mov ah, byte ptr [0x89a77]
    X86_AT(c, 0x9044bu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0x89A77u))));
    // 090451  and al, 0xf0
    X86_AT(c, 0x90451u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 090453  or al, ah
    X86_AT(c, 0x90453u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 4), 1)); }
    // 090455  out dx, al
    X86_AT(c, 0x90455u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090456  mov byte ptr [0x89a77], al
    X86_AT(c, 0x90456u);
    wr8((c.sbase[3] + (uint32_t)(0x89A77u)), g8(c, 0));
    // 09045b  mov al, byte ptr [0x89a78]
    X86_AT(c, 0x9045bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89A78u))));
    // 090460  mov byte ptr [0x89a78], 0
    X86_AT(c, 0x90460u);
    wr8((c.sbase[3] + (uint32_t)(0x89A78u)), 0x0u);
    // 090467  popf 
    X86_AT(c, 0x90467u);
    x86_popfd(c, 2);
    // 090469  and al, 0xf0
    X86_AT(c, 0x90469u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 09046b  or byte ptr [0x89850], al
    X86_AT(c, 0x9046bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89850u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 090471  ret 
    X86_AT(c, 0x90471u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90440u, "ran off the end of a function");
}
void f_00090472(X86Cpu& c) {
    X86_TICK(c, 12);
    // 090472  cmp byte ptr [0x89837], 0
    X86_AT(c, 0x90472u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89837u))), 0x0u, 0, 1);
    // 090479  je 0x9048a
    X86_AT(c, 0x90479u);
    if (x86_cc(c, 4)) { goto L_9048a; }
    X86_TICK(c, 12);
    // 09047b  cmp word ptr [0x89840], 0
    X86_AT(c, 0x9047bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x89840u))), 0x0u, 0, 2);
    // 090483  jne 0x9048a
    X86_AT(c, 0x90483u);
    if (x86_cc(c, 5)) { goto L_9048a; }
    X86_TICK(c, 7);
    // 090485  call 0x900fd
    X86_AT(c, 0x90485u);
    push32(c, 0x9048au); x86_call_known(c, 0x900fdu, f_000900fd); X86_RET(c, 0x9048au);
L_9048a:
    X86_TICK(c, 10);
    // 09048a  ret 
    X86_AT(c, 0x9048au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90472u, "ran off the end of a function");
}
void f_0009048b(X86Cpu& c) {
    X86_TICK(c, 88);
    // 09048b  inc word ptr [0x89825]
    X86_AT(c, 0x9048bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89825u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 090492  movzx ebx, byte ptr [0x89829]
    X86_AT(c, 0x90492u);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0x89829u)));
    // 090499  movzx eax, word ptr cs:[ebx*2 + 0x90922]
    X86_AT(c, 0x90499u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90922u)));
    // 0904a2  add eax, dword ptr [0x8982a]
    X86_AT(c, 0x904a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8982Au))), 0, 4); }
    // 0904a8  xor edx, edx
    X86_AT(c, 0x904a8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0904aa  mov ebx, 0x1f4
    X86_AT(c, 0x904aau);
    c.r[3] = 0x1F4u;
    // 0904af  div ebx
    X86_AT(c, 0x904afu);
    x86_div(c, c.r[3], 4, 0x904afu);
    // 0904b1  mov dword ptr [0x8982a], edx
    X86_AT(c, 0x904b1u);
    wr32((c.sbase[3] + (uint32_t)(0x8982Au)), c.r[2]);
    // 0904b7  add dword ptr [0x8982e], eax
    X86_AT(c, 0x904b7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8982Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0904bd  mov al, byte ptr [0x89828]
    X86_AT(c, 0x904bdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89828u))));
    // 0904c2  call 0x9012d
    X86_AT(c, 0x904c2u);
    push32(c, 0x904c7u); x86_call_known(c, 0x9012du, f_0009012d); X86_RET(c, 0x904c7u);
    X86_TICK(c, 11);
    // 0904c7  cmp dx, word ptr [0x89825]
    X86_AT(c, 0x904c7u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0x89825u))), 0, 2);
    // 0904ce  ja 0x904e4
    X86_AT(c, 0x904ceu);
    if (x86_cc(c, 7)) { goto L_904e4; }
    X86_TICK(c, 12);
    // 0904d0  inc word ptr [0x89823]
    X86_AT(c, 0x904d0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89823u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0904d7  xor eax, eax
    X86_AT(c, 0x904d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0904d9  mov word ptr [0x89825], ax
    X86_AT(c, 0x904d9u);
    wr16((c.sbase[3] + (uint32_t)(0x89825u)), (c.r[0] & 0xFFFFu));
    // 0904df  mov byte ptr [0x89827], al
    X86_AT(c, 0x904dfu);
    wr8((c.sbase[3] + (uint32_t)(0x89827u)), g8(c, 0));
L_904e4:
    X86_TICK(c, 12);
    // 0904e4  clc 
    X86_AT(c, 0x904e4u);
    c.fl &= ~X86_CF;
    // 0904e5  ret 
    X86_AT(c, 0x904e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9048bu, "ran off the end of a function");
}
void f_000904ed(X86Cpu& c) {
L_904ed:
    X86_TICK(c, 17);
    // 0904ed  les esi, fword ptr [0x89811]
    X86_AT(c, 0x904edu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89811u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[6] = o; }
    // 0904f3  mov al, byte ptr es:[esi]
    X86_AT(c, 0x904f3u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0904f6  cmp al, 0xff
    X86_AT(c, 0x904f6u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0904f8  je 0x90502
    X86_AT(c, 0x904f8u);
    if (x86_cc(c, 4)) { goto L_90502; }
    X86_TICK(c, 7);
    // 0904fa  cmp al, 0xf7
    X86_AT(c, 0x904fau);
    (void)x86_sub(c, g8(c, 0), 0xF7u, 0, 1);
    // 0904fc  je 0x90502
    X86_AT(c, 0x904fcu);
    if (x86_cc(c, 4)) { goto L_90502; }
    X86_TICK(c, 7);
    // 0904fe  cmp al, 0x90
    X86_AT(c, 0x904feu);
    (void)x86_sub(c, g8(c, 0), 0x90u, 0, 1);
    // 090500  jae 0x90509
    X86_AT(c, 0x90500u);
    if (x86_cc(c, 3)) { goto L_90509; }
L_90502:
    X86_TICK(c, 7);
    // 090502  call 0x907f5
    X86_AT(c, 0x90502u);
    push32(c, 0x90507u); x86_call_known(c, 0x907f5u, f_000907f5); X86_RET(c, 0x90507u);
    X86_TICK(c, 7);
    // 090507  jmp 0x904ed
    X86_AT(c, 0x90507u);
    X86_POLL(c, 0x904edu); goto L_904ed;
L_90509:
    X86_TICK(c, 15);
    // 090509  mov dx, word ptr [0x89832]
    X86_AT(c, 0x90509u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x89832u))));
    // 090510  cmp dx, word ptr [0x89823]
    X86_AT(c, 0x90510u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0x89823u))), 0, 2);
    // 090517  ja 0x9053e
    X86_AT(c, 0x90517u);
    if (x86_cc(c, 7)) { goto L_9053e; }
    X86_TICK(c, 5);
    // 090519  je 0x90524
    X86_AT(c, 0x90519u);
    if (x86_cc(c, 4)) { goto L_90524; }
    X86_TICK(c, 7);
    // 09051b  call 0x9053f
    X86_AT(c, 0x9051bu);
    push32(c, 0x90520u); x86_call_known(c, 0x9053fu, f_0009053f); X86_RET(c, 0x90520u);
    X86_TICK(c, 5);
    // 090520  jae 0x904ed
    X86_AT(c, 0x90520u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x904edu); goto L_904ed; }
    X86_TICK(c, 7);
    // 090522  jmp 0x9053e
    X86_AT(c, 0x90522u);
    goto L_9053e;
L_90524:
    X86_TICK(c, 21);
    // 090524  mov dx, word ptr es:[esi + 2]
    X86_AT(c, 0x90524u);
    s16(c, 2, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x2u))));
    // 090529  shl dl, 1
    X86_AT(c, 0x90529u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 09052b  shr dx, 1
    X86_AT(c, 0x9052bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 2, r); }
    // 09052e  cmp dx, word ptr [0x89825]
    X86_AT(c, 0x9052eu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0x89825u))), 0, 2);
    // 090535  ja 0x9053e
    X86_AT(c, 0x90535u);
    if (x86_cc(c, 7)) { goto L_9053e; }
    X86_TICK(c, 7);
    // 090537  call 0x9053f
    X86_AT(c, 0x90537u);
    push32(c, 0x9053cu); x86_call_known(c, 0x9053fu, f_0009053f); X86_RET(c, 0x9053cu);
    X86_TICK(c, 5);
    // 09053c  jae 0x904ed
    X86_AT(c, 0x9053cu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x904edu); goto L_904ed; }
L_9053e:
    X86_TICK(c, 10);
    // 09053e  ret 
    X86_AT(c, 0x9053eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x904edu, "ran off the end of a function");
}
void f_0009053f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 09053f  cmp al, 0xfe
    X86_AT(c, 0x9053fu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 090541  je 0x9057d
    X86_AT(c, 0x90541u);
    if (x86_cc(c, 4)) { goto L_9057d; }
    X86_TICK(c, 7);
    // 090543  cmp al, 0xfd
    X86_AT(c, 0x90543u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 090545  je 0x9057d
    X86_AT(c, 0x90545u);
    if (x86_cc(c, 4)) { goto L_9057d; }
    X86_TICK(c, 10);
    // 090547  movzx ebx, al
    X86_AT(c, 0x90547u);
    c.r[3] = g8(c, 0);
    // 09054a  cmp al, 0xf0
    X86_AT(c, 0x9054au);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 09054c  jae 0x90568
    X86_AT(c, 0x9054cu);
    if (x86_cc(c, 3)) { goto L_90568; }
    X86_TICK(c, 12);
    // 09054e  sub ebx, 0x80
    X86_AT(c, 0x9054eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 090554  shr ebx, 4
    X86_AT(c, 0x90554u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 090557  call dword ptr cs:[ebx*4 + 0x905d6]
    X86_AT(c, 0x90557u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x905D6u))); push32(c, 0x9055fu);
      switch (t) {
      case 0x90636u: x86_call_known(c, 0x90636u, f_00090636); break;
      case 0x90638u: x86_call_known(c, 0x90638u, f_00090638); break;
      case 0x9066bu: x86_call_known(c, 0x9066bu, f_0009066b); break;
      case 0x90672u: x86_call_known(c, 0x90672u, f_00090672); break;
      case 0x90679u: x86_call_known(c, 0x90679u, f_00090679); break;
      case 0x90680u: x86_call_known(c, 0x90680u, f_00090680); break;
      case 0x906d8u: x86_call_known(c, 0x906d8u, f_000906d8); break;
      case 0x9084cu: x86_call_known(c, 0x9084cu, f_0009084c); break;
      case 0x90895u: x86_call_known(c, 0x90895u, f_00090895); break;
      case 0x90897u: x86_call_known(c, 0x90897u, f_00090897); break;
      case 0x90899u: x86_call_known(c, 0x90899u, f_00090899); break;
      case 0x908abu: x86_call_known(c, 0x908abu, f_000908ab); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x9055fu); }
    X86_TICK(c, 5);
    // 09055f  jb 0x9057d
    X86_AT(c, 0x9055fu);
    if (x86_cc(c, 2)) { goto L_9057d; }
    X86_TICK(c, 7);
    // 090561  call 0x907f5
    X86_AT(c, 0x90561u);
    push32(c, 0x90566u); x86_call_known(c, 0x907f5u, f_000907f5); X86_RET(c, 0x90566u);
    X86_TICK(c, 12);
    // 090566  clc 
    X86_AT(c, 0x90566u);
    c.fl &= ~X86_CF;
    // 090567  ret 
    X86_AT(c, 0x90567u);
    c.eip = pop32(c); return;
L_90568:
    X86_TICK(c, 9);
    // 090568  sub ebx, 0xf0
    X86_AT(c, 0x90568u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0xF0u, 0, 4); }
    // 09056e  call dword ptr cs:[ebx*4 + 0x905f6]
    X86_AT(c, 0x9056eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x905F6u))); push32(c, 0x90576u);
      switch (t) {
      case 0x90636u: x86_call_known(c, 0x90636u, f_00090636); break;
      case 0x9084cu: x86_call_known(c, 0x9084cu, f_0009084c); break;
      case 0x90895u: x86_call_known(c, 0x90895u, f_00090895); break;
      case 0x90897u: x86_call_known(c, 0x90897u, f_00090897); break;
      case 0x90899u: x86_call_known(c, 0x90899u, f_00090899); break;
      case 0x908abu: x86_call_known(c, 0x908abu, f_000908ab); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x90576u); }
    X86_TICK(c, 7);
    // 090576  call 0x907f5
    X86_AT(c, 0x90576u);
    push32(c, 0x9057bu); x86_call_known(c, 0x907f5u, f_000907f5); X86_RET(c, 0x9057bu);
    X86_TICK(c, 12);
    // 09057b  clc 
    X86_AT(c, 0x9057bu);
    c.fl &= ~X86_CF;
    // 09057c  ret 
    X86_AT(c, 0x9057cu);
    c.eip = pop32(c); return;
L_9057d:
    X86_TICK(c, 7);
    // 09057d  cmp al, 0xfd
    X86_AT(c, 0x9057du);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 09057f  je 0x90593
    X86_AT(c, 0x9057fu);
    if (x86_cc(c, 4)) { goto L_90593; }
    X86_TICK(c, 12);
    // 090581  cmp byte ptr [0x89839], 0
    X86_AT(c, 0x90581u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89839u))), 0x0u, 0, 1);
    // 090588  jne 0x9059c
    X86_AT(c, 0x90588u);
    if (x86_cc(c, 5)) { goto L_9059c; }
    X86_TICK(c, 14);
    // 09058a  mov byte ptr [0x89837], 0xff
    X86_AT(c, 0x9058au);
    wr8((c.sbase[3] + (uint32_t)(0x89837u)), 0xFFu);
    // 090591  stc 
    X86_AT(c, 0x90591u);
    c.fl |= X86_CF;
    // 090592  ret 
    X86_AT(c, 0x90592u);
    c.eip = pop32(c); return;
L_90593:
    X86_TICK(c, 14);
    // 090593  mov byte ptr [0x89838], 0xff
    X86_AT(c, 0x90593u);
    wr8((c.sbase[3] + (uint32_t)(0x89838u)), 0xFFu);
    // 09059a  stc 
    X86_AT(c, 0x9059au);
    c.fl |= X86_CF;
    // 09059b  ret 
    X86_AT(c, 0x9059bu);
    c.eip = pop32(c); return;
L_9059c:
    X86_TICK(c, 32);
    // 09059c  mov byte ptr [0x89837], 0
    X86_AT(c, 0x9059cu);
    wr8((c.sbase[3] + (uint32_t)(0x89837u)), 0x0u);
    // 0905a3  mov eax, dword ptr [0x89817]
    X86_AT(c, 0x905a3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89817u)));
    // 0905a8  mov dword ptr [0x89811], eax
    X86_AT(c, 0x905a8u);
    wr32((c.sbase[3] + (uint32_t)(0x89811u)), c.r[0]);
    // 0905ad  mov word ptr [0x89832], 0
    X86_AT(c, 0x905adu);
    wr16((c.sbase[3] + (uint32_t)(0x89832u)), 0x0u);
    // 0905b6  mov word ptr [0x89823], 0
    X86_AT(c, 0x905b6u);
    wr16((c.sbase[3] + (uint32_t)(0x89823u)), 0x0u);
    // 0905bf  mov word ptr [0x89825], 0
    X86_AT(c, 0x905bfu);
    wr16((c.sbase[3] + (uint32_t)(0x89825u)), 0x0u);
    // 0905c8  mov dl, byte ptr [0x89834]
    X86_AT(c, 0x905c8u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0x89834u))));
    // 0905ce  mov byte ptr [0x89828], dl
    X86_AT(c, 0x905ceu);
    wr8((c.sbase[3] + (uint32_t)(0x89828u)), g8(c, 2));
    // 0905d4  clc 
    X86_AT(c, 0x905d4u);
    c.fl &= ~X86_CF;
    // 0905d5  ret 
    X86_AT(c, 0x905d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9053fu, "ran off the end of a function");
}
void f_00090636(X86Cpu& c) {
    X86_TICK(c, 12);
    // 090636  clc 
    X86_AT(c, 0x90636u);
    c.fl &= ~X86_CF;
    // 090637  ret 
    X86_AT(c, 0x90637u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90636u, "ran off the end of a function");
}
void f_00090638(X86Cpu& c) {
    X86_TICK(c, 11);
    // 090638  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x90638u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 09063c  call 0x90767
    X86_AT(c, 0x9063cu);
    push32(c, 0x90641u); x86_call_known(c, 0x90767u, f_00090767); X86_RET(c, 0x90641u);
    X86_TICK(c, 5);
    // 090641  jb 0x90669
    X86_AT(c, 0x90641u);
    if (x86_cc(c, 2)) { goto L_90669; }
    X86_TICK(c, 7);
    // 090643  call 0x9017e
    X86_AT(c, 0x90643u);
    push32(c, 0x90648u); x86_call_known(c, 0x9017eu, f_0009017e); X86_RET(c, 0x90648u);
    X86_TICK(c, 7);
    // 090648  call 0x9077a
    X86_AT(c, 0x90648u);
    push32(c, 0x9064du); x86_call_known(c, 0x9077au, f_0009077a); X86_RET(c, 0x9064du);
    X86_TICK(c, 7);
    // 09064d  call 0x90d79
    X86_AT(c, 0x9064du);
    push32(c, 0x90652u); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x90652u);
    X86_TICK(c, 11);
    // 090652  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x90652u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 090656  call 0x90797
    X86_AT(c, 0x90656u);
    push32(c, 0x9065bu); x86_call_known(c, 0x90797u, f_00090797); X86_RET(c, 0x9065bu);
    X86_TICK(c, 7);
    // 09065b  call 0x90d79
    X86_AT(c, 0x9065bu);
    push32(c, 0x90660u); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x90660u);
    X86_TICK(c, 11);
    // 090660  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0x90660u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 090664  call 0x90d79
    X86_AT(c, 0x90664u);
    push32(c, 0x90669u); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x90669u);
L_90669:
    X86_TICK(c, 12);
    // 090669  clc 
    X86_AT(c, 0x90669u);
    c.fl &= ~X86_CF;
    // 09066a  ret 
    X86_AT(c, 0x9066au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90638u, "ran off the end of a function");
}
void f_0009066b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 09066b  call 0x906ab
    X86_AT(c, 0x9066bu);
    push32(c, 0x90670u); x86_call_known(c, 0x906abu, f_000906ab); X86_RET(c, 0x90670u);
    X86_TICK(c, 12);
    // 090670  clc 
    X86_AT(c, 0x90670u);
    c.fl &= ~X86_CF;
    // 090671  ret 
    X86_AT(c, 0x90671u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9066bu, "ran off the end of a function");
}
void f_00090672(X86Cpu& c) {
    X86_TICK(c, 7);
    // 090672  call 0x90687
    X86_AT(c, 0x90672u);
    push32(c, 0x90677u); x86_call_known(c, 0x90687u, f_00090687); X86_RET(c, 0x90677u);
    X86_TICK(c, 12);
    // 090677  clc 
    X86_AT(c, 0x90677u);
    c.fl &= ~X86_CF;
    // 090678  ret 
    X86_AT(c, 0x90678u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90672u, "ran off the end of a function");
}
void f_00090679(X86Cpu& c) {
    X86_TICK(c, 7);
    // 090679  call 0x90687
    X86_AT(c, 0x90679u);
    push32(c, 0x9067eu); x86_call_known(c, 0x90687u, f_00090687); X86_RET(c, 0x9067eu);
    X86_TICK(c, 12);
    // 09067e  clc 
    X86_AT(c, 0x9067eu);
    c.fl &= ~X86_CF;
    // 09067f  ret 
    X86_AT(c, 0x9067fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90679u, "ran off the end of a function");
}
void f_00090680(X86Cpu& c) {
    X86_TICK(c, 7);
    // 090680  call 0x906ab
    X86_AT(c, 0x90680u);
    push32(c, 0x90685u); x86_call_known(c, 0x906abu, f_000906ab); X86_RET(c, 0x90685u);
    X86_TICK(c, 12);
    // 090685  clc 
    X86_AT(c, 0x90685u);
    c.fl &= ~X86_CF;
    // 090686  ret 
    X86_AT(c, 0x90686u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90680u, "ran off the end of a function");
}
void f_00090687(X86Cpu& c) {
    X86_TICK(c, 11);
    // 090687  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x90687u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 09068b  call 0x90767
    X86_AT(c, 0x9068bu);
    push32(c, 0x90690u); x86_call_known(c, 0x90767u, f_00090767); X86_RET(c, 0x90690u);
    X86_TICK(c, 5);
    // 090690  jb 0x906aa
    X86_AT(c, 0x90690u);
    if (x86_cc(c, 2)) { goto L_906aa; }
    X86_TICK(c, 7);
    // 090692  call 0x9017e
    X86_AT(c, 0x90692u);
    push32(c, 0x90697u); x86_call_known(c, 0x9017eu, f_0009017e); X86_RET(c, 0x90697u);
    X86_TICK(c, 7);
    // 090697  call 0x9077a
    X86_AT(c, 0x90697u);
    push32(c, 0x9069cu); x86_call_known(c, 0x9077au, f_0009077a); X86_RET(c, 0x9069cu);
    X86_TICK(c, 7);
    // 09069c  call 0x90d79
    X86_AT(c, 0x9069cu);
    push32(c, 0x906a1u); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x906a1u);
    X86_TICK(c, 11);
    // 0906a1  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x906a1u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0906a5  call 0x90d79
    X86_AT(c, 0x906a5u);
    push32(c, 0x906aau); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x906aau);
L_906aa:
    X86_TICK(c, 10);
    // 0906aa  ret 
    X86_AT(c, 0x906aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90687u, "ran off the end of a function");
}
void f_000906ab(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0906ab  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x906abu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0906af  call 0x90767
    X86_AT(c, 0x906afu);
    push32(c, 0x906b4u); x86_call_known(c, 0x90767u, f_00090767); X86_RET(c, 0x906b4u);
    X86_TICK(c, 5);
    // 0906b4  jb 0x906d7
    X86_AT(c, 0x906b4u);
    if (x86_cc(c, 2)) { goto L_906d7; }
    X86_TICK(c, 7);
    // 0906b6  call 0x9017e
    X86_AT(c, 0x906b6u);
    push32(c, 0x906bbu); x86_call_known(c, 0x9017eu, f_0009017e); X86_RET(c, 0x906bbu);
    X86_TICK(c, 7);
    // 0906bb  call 0x9077a
    X86_AT(c, 0x906bbu);
    push32(c, 0x906c0u); x86_call_known(c, 0x9077au, f_0009077a); X86_RET(c, 0x906c0u);
    X86_TICK(c, 7);
    // 0906c0  call 0x90d79
    X86_AT(c, 0x906c0u);
    push32(c, 0x906c5u); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x906c5u);
    X86_TICK(c, 11);
    // 0906c5  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x906c5u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0906c9  call 0x90d79
    X86_AT(c, 0x906c9u);
    push32(c, 0x906ceu); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x906ceu);
    X86_TICK(c, 11);
    // 0906ce  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0x906ceu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0906d2  call 0x90d79
    X86_AT(c, 0x906d2u);
    push32(c, 0x906d7u); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x906d7u);
L_906d7:
    X86_TICK(c, 10);
    // 0906d7  ret 
    X86_AT(c, 0x906d7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x906abu, "ran off the end of a function");
}
void f_000906d8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0906d8  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x906d8u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0906dc  call 0x90767
    X86_AT(c, 0x906dcu);
    push32(c, 0x906e1u); x86_call_known(c, 0x90767u, f_00090767); X86_RET(c, 0x906e1u);
    X86_TICK(c, 5);
    // 0906e1  jae 0x906fd
    X86_AT(c, 0x906e1u);
    if (x86_cc(c, 3)) { goto L_906fd; }
    X86_TICK(c, 7);
    // 0906e3  call 0x907f5
    X86_AT(c, 0x906e3u);
    push32(c, 0x906e8u); x86_call_known(c, 0x907f5u, f_000907f5); X86_RET(c, 0x906e8u);
    X86_TICK(c, 11);
    // 0906e8  mov al, byte ptr es:[esi]
    X86_AT(c, 0x906e8u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0906eb  cmp al, 0xfe
    X86_AT(c, 0x906ebu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0906ed  je 0x90765
    X86_AT(c, 0x906edu);
    if (x86_cc(c, 4)) { goto L_90765; }
    X86_TICK(c, 7);
    // 0906f3  cmp al, 0xfd
    X86_AT(c, 0x906f3u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0906f5  je 0x90765
    X86_AT(c, 0x906f5u);
    if (x86_cc(c, 4)) { goto L_90765; }
    X86_TICK(c, 12);
    // 0906fb  clc 
    X86_AT(c, 0x906fbu);
    c.fl &= ~X86_CF;
    // 0906fc  ret 
    X86_AT(c, 0x906fcu);
    c.eip = pop32(c); return;
L_906fd:
    X86_TICK(c, 7);
    // 0906fd  call 0x9017e
    X86_AT(c, 0x906fdu);
    push32(c, 0x90702u); x86_call_known(c, 0x9017eu, f_0009017e); X86_RET(c, 0x90702u);
    X86_TICK(c, 7);
    // 090702  call 0x9077a
    X86_AT(c, 0x90702u);
    push32(c, 0x90707u); x86_call_known(c, 0x9077au, f_0009077a); X86_RET(c, 0x90707u);
    X86_TICK(c, 9);
    // 090707  mov ch, al
    X86_AT(c, 0x90707u);
    s8(c, 5, g8(c, 0));
    // 090709  call 0x90d79
    X86_AT(c, 0x90709u);
    push32(c, 0x9070eu); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x9070eu);
    X86_TICK(c, 11);
    // 09070e  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x9070eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 090712  call 0x90797
    X86_AT(c, 0x90712u);
    push32(c, 0x90717u); x86_call_known(c, 0x90797u, f_00090797); X86_RET(c, 0x90717u);
    X86_TICK(c, 9);
    // 090717  mov cl, al
    X86_AT(c, 0x90717u);
    s8(c, 1, g8(c, 0));
    // 090719  call 0x90d79
    X86_AT(c, 0x90719u);
    push32(c, 0x9071eu); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x9071eu);
    X86_TICK(c, 11);
    // 09071e  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0x9071eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 090722  call 0x907ca
    X86_AT(c, 0x90722u);
    push32(c, 0x90727u); x86_call_known(c, 0x907cau, f_000907ca); X86_RET(c, 0x90727u);
    X86_TICK(c, 7);
    // 090727  call 0x90d79
    X86_AT(c, 0x90727u);
    push32(c, 0x9072cu); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x9072cu);
    X86_TICK(c, 7);
    // 09072c  call 0x907f5
    X86_AT(c, 0x9072cu);
    push32(c, 0x90731u); x86_call_known(c, 0x907f5u, f_000907f5); X86_RET(c, 0x90731u);
    X86_TICK(c, 11);
    // 090731  mov al, byte ptr es:[esi]
    X86_AT(c, 0x90731u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 090734  cmp al, 0xfe
    X86_AT(c, 0x90734u);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 090736  je 0x90765
    X86_AT(c, 0x90736u);
    if (x86_cc(c, 4)) { goto L_90765; }
    X86_TICK(c, 7);
    // 090738  cmp al, 0xfd
    X86_AT(c, 0x90738u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 09073a  je 0x90765
    X86_AT(c, 0x9073au);
    if (x86_cc(c, 4)) { goto L_90765; }
    X86_TICK(c, 39);
    // 09073c  push bx
    X86_AT(c, 0x9073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); push16(c, v); }
    // 09073e  mov ax, word ptr es:[esi + 1]
    X86_AT(c, 0x9073eu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 090743  shl al, 4
    X86_AT(c, 0x90743u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 090746  shr ax, 4
    X86_AT(c, 0x90746u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 09074a  mov bx, word ptr es:[esi + 3]
    X86_AT(c, 0x9074au);
    s16(c, 3, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x3u))));
    // 09074f  shl bl, 4
    X86_AT(c, 0x9074fu);
    { uint32_t v = g8(c, 3); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 3, r); }
    // 090752  shr bx, 4
    X86_AT(c, 0x90752u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 3, r); }
    // 090756  mov ah, bl
    X86_AT(c, 0x90756u);
    s8(c, 4, g8(c, 3));
    // 090758  pop bx
    X86_AT(c, 0x90758u);
    { uint32_t v = pop16(c); s16(c, 3, v); }
    // 09075a  mov bh, byte ptr es:[esi + 5]
    X86_AT(c, 0x9075au);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 09075e  call 0x9080d
    X86_AT(c, 0x9075eu);
    push32(c, 0x90763u); x86_call_known(c, 0x9080du, f_0009080d); X86_RET(c, 0x90763u);
    X86_TICK(c, 12);
    // 090763  clc 
    X86_AT(c, 0x90763u);
    c.fl &= ~X86_CF;
    // 090764  ret 
    X86_AT(c, 0x90764u);
    c.eip = pop32(c); return;
L_90765:
    X86_TICK(c, 12);
    // 090765  stc 
    X86_AT(c, 0x90765u);
    c.fl |= X86_CF;
    // 090766  ret 
    X86_AT(c, 0x90766u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x906d8u, "ran off the end of a function");
}
void f_00090767(X86Cpu& c) {
    X86_TICK(c, 17);
    // 090767  push ebx
    X86_AT(c, 0x90767u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 090768  movzx ebx, dl
    X86_AT(c, 0x90768u);
    c.r[3] = g8(c, 2);
    // 09076b  cmp byte ptr [ebx + 0x89855], 0
    X86_AT(c, 0x9076bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89855u))), 0x0u, 0, 1);
    // 090772  je 0x90777
    X86_AT(c, 0x90772u);
    if (x86_cc(c, 4)) { goto L_90777; }
    X86_TICK(c, 16);
    // 090774  pop ebx
    X86_AT(c, 0x90774u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090775  clc 
    X86_AT(c, 0x90775u);
    c.fl &= ~X86_CF;
    // 090776  ret 
    X86_AT(c, 0x90776u);
    c.eip = pop32(c); return;
L_90777:
    X86_TICK(c, 16);
    // 090777  pop ebx
    X86_AT(c, 0x90777u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090778  stc 
    X86_AT(c, 0x90778u);
    c.fl |= X86_CF;
    // 090779  ret 
    X86_AT(c, 0x90779u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90767u, "ran off the end of a function");
}
void f_0009077a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 09077a  push ebx
    X86_AT(c, 0x9077au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09077b  cmp al, 0xf0
    X86_AT(c, 0x9077bu);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 09077d  jae 0x90795
    X86_AT(c, 0x9077du);
    if (x86_cc(c, 3)) { goto L_90795; }
    X86_TICK(c, 7);
    // 09077f  cmp al, 0x80
    X86_AT(c, 0x9077fu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 090781  jb 0x90795
    X86_AT(c, 0x90781u);
    if (x86_cc(c, 2)) { goto L_90795; }
    X86_TICK(c, 17);
    // 090783  movzx ebx, dl
    X86_AT(c, 0x90783u);
    c.r[3] = g8(c, 2);
    // 090786  lea ebx, [ebx + 0x89895]
    X86_AT(c, 0x90786u);
    c.r[3] = (uint32_t)(c.r[3] + 0x89895u);
    // 09078c  cmp byte ptr [ebx], 0xf
    X86_AT(c, 0x9078cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0xFu, 0, 1);
    // 09078f  ja 0x90795
    X86_AT(c, 0x9078fu);
    if (x86_cc(c, 7)) { goto L_90795; }
    X86_TICK(c, 8);
    // 090791  and al, 0xf0
    X86_AT(c, 0x90791u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 090793  or al, byte ptr [ebx]
    X86_AT(c, 0x90793u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 1)); }
L_90795:
    X86_TICK(c, 14);
    // 090795  pop ebx
    X86_AT(c, 0x90795u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090796  ret 
    X86_AT(c, 0x90796u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9077au, "ran off the end of a function");
}
void f_00090797(X86Cpu& c) {
    X86_TICK(c, 16);
    // 090797  push ebx
    X86_AT(c, 0x90797u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 090798  movzx ebx, dl
    X86_AT(c, 0x90798u);
    c.r[3] = g8(c, 2);
    // 09079b  mov bl, byte ptr [ebx + 0x898d5]
    X86_AT(c, 0x9079bu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x898D5u))));
    // 0907a1  or bl, bl
    X86_AT(c, 0x907a1u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | g8(c, 3), 1)); }
    // 0907a3  je 0x907c8
    X86_AT(c, 0x907a3u);
    if (x86_cc(c, 4)) { goto L_907c8; }
    X86_TICK(c, 7);
    // 0907a5  and ax, 0x7f
    X86_AT(c, 0x907a5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 0907a9  movsx bx, bl
    X86_AT(c, 0x907a9u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 0907ad  add ax, bx
    X86_AT(c, 0x907adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_907b0:
    X86_TICK(c, 7);
    // 0907b0  cmp ax, 0x7f
    X86_AT(c, 0x907b0u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 0907b4  jle 0x907bc
    X86_AT(c, 0x907b4u);
    if (x86_cc(c, 14)) { goto L_907bc; }
    X86_TICK(c, 9);
    // 0907b6  sub ax, 0xc
    X86_AT(c, 0x907b6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0xCu, 0, 2)); }
    // 0907ba  jmp 0x907b0
    X86_AT(c, 0x907bau);
    X86_POLL(c, 0x907b0u); goto L_907b0;
L_907bc:
    X86_TICK(c, 7);
    // 0907bc  cmp ax, 0
    X86_AT(c, 0x907bcu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x0u, 0, 2);
    // 0907c0  jge 0x907c8
    X86_AT(c, 0x907c0u);
    if (x86_cc(c, 13)) { goto L_907c8; }
    X86_TICK(c, 9);
    // 0907c2  add ax, 0xc
    X86_AT(c, 0x907c2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xCu, 0, 2)); }
    // 0907c6  jmp 0x907bc
    X86_AT(c, 0x907c6u);
    X86_POLL(c, 0x907bcu); goto L_907bc;
L_907c8:
    X86_TICK(c, 14);
    // 0907c8  pop ebx
    X86_AT(c, 0x907c8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0907c9  ret 
    X86_AT(c, 0x907c9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90797u, "ran off the end of a function");
}
void f_000907ca(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0907ca  push ebx
    X86_AT(c, 0x907cau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0907cb  movzx ebx, dl
    X86_AT(c, 0x907cbu);
    c.r[3] = g8(c, 2);
    // 0907ce  mov bl, byte ptr [ebx + 0x898b5]
    X86_AT(c, 0x907ceu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x898B5u))));
    // 0907d4  and ax, 0x7f
    X86_AT(c, 0x907d4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 0907d8  movsx bx, bl
    X86_AT(c, 0x907d8u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 0907dc  add ax, bx
    X86_AT(c, 0x907dcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0907df  cmp ax, 0x7f
    X86_AT(c, 0x907dfu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 0907e3  jg 0x907ed
    X86_AT(c, 0x907e3u);
    if (x86_cc(c, 15)) { goto L_907ed; }
    X86_TICK(c, 7);
    // 0907e5  cmp ax, 1
    X86_AT(c, 0x907e5u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
    // 0907e9  jl 0x907f1
    X86_AT(c, 0x907e9u);
    if (x86_cc(c, 12)) { goto L_907f1; }
    X86_TICK(c, 7);
    // 0907eb  jmp 0x907f3
    X86_AT(c, 0x907ebu);
    goto L_907f3;
L_907ed:
    X86_TICK(c, 9);
    // 0907ed  mov al, 0x7f
    X86_AT(c, 0x907edu);
    s8(c, 0, 0x7Fu);
    // 0907ef  jmp 0x907f3
    X86_AT(c, 0x907efu);
    goto L_907f3;
L_907f1:
    X86_TICK(c, 2);
    // 0907f1  mov al, 1
    X86_AT(c, 0x907f1u);
    s8(c, 0, 0x1u);
L_907f3:
    X86_TICK(c, 14);
    // 0907f3  pop ebx
    X86_AT(c, 0x907f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0907f4  ret 
    X86_AT(c, 0x907f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x907cau, "ran off the end of a function");
}
void f_000907f5(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0907f5  add esi, 6
    X86_AT(c, 0x907f5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x6u, 0, 4); }
    // 0907f8  cmp esi, dword ptr [0x8981d]
    X86_AT(c, 0x907f8u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8981Du))), 0, 4);
    // 0907fe  jb 0x90806
    X86_AT(c, 0x907feu);
    if (x86_cc(c, 2)) { goto L_90806; }
    X86_TICK(c, 4);
    // 090800  mov esi, dword ptr [0x89817]
    X86_AT(c, 0x90800u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x89817u)));
L_90806:
    X86_TICK(c, 12);
    // 090806  mov dword ptr [0x89811], esi
    X86_AT(c, 0x90806u);
    wr32((c.sbase[3] + (uint32_t)(0x89811u)), c.r[6]);
    // 09080c  ret 
    X86_AT(c, 0x9080cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x907f5u, "ran off the end of a function");
}
void f_0009080d(X86Cpu& c) {
    X86_TICK(c, 8);
    // 09080d  push edi
    X86_AT(c, 0x9080du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09080e  push ecx
    X86_AT(c, 0x9080eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 09080f  mov ecx, 0x40
    X86_AT(c, 0x9080fu);
    c.r[1] = 0x40u;
    // 090814  lea edi, [0x898f5]
    X86_AT(c, 0x90814u);
    c.r[7] = (uint32_t)(0x898F5u);
L_9081a:
    X86_TICK(c, 12);
    // 09081a  cmp byte ptr [edi], 0
    X86_AT(c, 0x9081au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 09081d  je 0x9082c
    X86_AT(c, 0x9081du);
    if (x86_cc(c, 4)) { goto L_9082c; }
    X86_TICK(c, 13);
    // 09081f  add edi, 6
    X86_AT(c, 0x9081fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 090822  loop 0x9081a
    X86_AT(c, 0x90822u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x9081au); goto L_9081a; }
    X86_TICK(c, 11);
    // 090824  pop ecx
    X86_AT(c, 0x90824u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 090825  call 0x90903
    X86_AT(c, 0x90825u);
    push32(c, 0x9082au); x86_call_known(c, 0x90903u, f_00090903); X86_RET(c, 0x9082au);
    X86_TICK(c, 14);
    // 09082a  pop edi
    X86_AT(c, 0x9082au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09082b  ret 
    X86_AT(c, 0x9082bu);
    c.eip = pop32(c); return;
L_9082c:
    X86_TICK(c, 19);
    // 09082c  pop ecx
    X86_AT(c, 0x9082cu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 09082d  mov byte ptr [edi], ch
    X86_AT(c, 0x9082du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 5));
    // 09082f  mov byte ptr [edi + 1], bl
    X86_AT(c, 0x9082fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 3));
    // 090832  mov byte ptr [edi + 2], cl
    X86_AT(c, 0x90832u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 090835  mov byte ptr [edi + 3], bh
    X86_AT(c, 0x90835u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 7));
    // 090838  or ax, ax
    X86_AT(c, 0x90838u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 09083b  jne 0x9083f
    X86_AT(c, 0x9083bu);
    if (x86_cc(c, 5)) { goto L_9083f; }
    X86_TICK(c, 2);
    // 09083d  inc ax
    X86_AT(c, 0x9083du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
L_9083f:
    X86_TICK(c, 22);
    // 09083f  mov word ptr [edi + 4], ax
    X86_AT(c, 0x9083fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 090843  inc word ptr [0x89840]
    X86_AT(c, 0x90843u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89840u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 09084a  pop edi
    X86_AT(c, 0x9084au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09084b  ret 
    X86_AT(c, 0x9084bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9080du, "ran off the end of a function");
}
void f_0009084c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 09084c  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x9084cu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 090850  call 0x9017e
    X86_AT(c, 0x90850u);
    push32(c, 0x90855u); x86_call_known(c, 0x9017eu, f_0009017e); X86_RET(c, 0x90855u);
    X86_TICK(c, 9);
    // 090855  mov al, 0xf0
    X86_AT(c, 0x90855u);
    s8(c, 0, 0xF0u);
    // 090857  call 0x90d79
    X86_AT(c, 0x90857u);
    push32(c, 0x9085cu); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x9085cu);
    X86_TICK(c, 7);
    // 09085c  call 0x907f5
    X86_AT(c, 0x9085cu);
    push32(c, 0x90861u); x86_call_known(c, 0x907f5u, f_000907f5); X86_RET(c, 0x90861u);
L_90861:
    X86_TICK(c, 4);
    // 090861  push esi
    X86_AT(c, 0x90861u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 090862  mov ecx, 6
    X86_AT(c, 0x90862u);
    c.r[1] = 0x6u;
L_90867:
    X86_TICK(c, 11);
    // 090867  mov al, byte ptr es:[esi]
    X86_AT(c, 0x90867u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 09086a  cmp al, 0xff
    X86_AT(c, 0x9086au);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 09086c  je 0x90877
    X86_AT(c, 0x9086cu);
    if (x86_cc(c, 4)) { goto L_90877; }
    X86_TICK(c, 7);
    // 09086e  call 0x90d79
    X86_AT(c, 0x9086eu);
    push32(c, 0x90873u); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x90873u);
    X86_TICK(c, 7);
    // 090873  cmp al, 0x80
    X86_AT(c, 0x90873u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 090875  jae 0x90887
    X86_AT(c, 0x90875u);
    if (x86_cc(c, 3)) { goto L_90887; }
L_90877:
    X86_TICK(c, 13);
    // 090877  inc esi
    X86_AT(c, 0x90877u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 090878  loop 0x90867
    X86_AT(c, 0x90878u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90867u); goto L_90867; }
    X86_TICK(c, 11);
    // 09087a  pop esi
    X86_AT(c, 0x9087au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09087b  call 0x907f5
    X86_AT(c, 0x9087bu);
    push32(c, 0x90880u); x86_call_known(c, 0x907f5u, f_000907f5); X86_RET(c, 0x90880u);
    X86_TICK(c, 7);
    // 090880  call 0x9088a
    X86_AT(c, 0x90880u);
    push32(c, 0x90885u); x86_call_known(c, 0x9088au, f_0009088a); X86_RET(c, 0x90885u);
    X86_TICK(c, 7);
    // 090885  jmp 0x90861
    X86_AT(c, 0x90885u);
    X86_POLL(c, 0x90861u); goto L_90861;
L_90887:
    X86_TICK(c, 16);
    // 090887  pop esi
    X86_AT(c, 0x90887u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 090888  clc 
    X86_AT(c, 0x90888u);
    c.fl &= ~X86_CF;
    // 090889  ret 
    X86_AT(c, 0x90889u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9084cu, "ran off the end of a function");
}
void f_0009088a(X86Cpu& c) {
    X86_TICK(c, 20);
    // 09088a  pushal 
    X86_AT(c, 0x9088au);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 09088b  mov ecx, 0x19
    X86_AT(c, 0x9088bu);
    c.r[1] = 0x19u;
L_90890:
    X86_TICK(c, 13);
    // 090890  nop 
    X86_AT(c, 0x90890u);
    // 090891  loop 0x90890
    X86_AT(c, 0x90891u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90890u); goto L_90890; }
    X86_TICK(c, 34);
    // 090893  popal 
    X86_AT(c, 0x90893u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 090894  ret 
    X86_AT(c, 0x90894u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9088au, "ran off the end of a function");
}
void f_00090895(X86Cpu& c) {
    X86_TICK(c, 12);
    // 090895  clc 
    X86_AT(c, 0x90895u);
    c.fl &= ~X86_CF;
    // 090896  ret 
    X86_AT(c, 0x90896u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90895u, "ran off the end of a function");
}
void f_00090897(X86Cpu& c) {
    X86_TICK(c, 12);
    // 090897  clc 
    X86_AT(c, 0x90897u);
    c.fl &= ~X86_CF;
    // 090898  ret 
    X86_AT(c, 0x90898u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90897u, "ran off the end of a function");
}
void f_00090899(X86Cpu& c) {
    X86_TICK(c, 24);
    // 090899  inc word ptr [0x89832]
    X86_AT(c, 0x90899u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89832u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0908a0  mov al, byte ptr es:[esi + 1]
    X86_AT(c, 0x908a0u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0908a4  mov byte ptr [0x89828], al
    X86_AT(c, 0x908a4u);
    wr8((c.sbase[3] + (uint32_t)(0x89828u)), g8(c, 0));
    // 0908a9  clc 
    X86_AT(c, 0x908a9u);
    c.fl &= ~X86_CF;
    // 0908aa  ret 
    X86_AT(c, 0x908aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90899u, "ran off the end of a function");
}
void f_000908ab(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0908ab  mov ax, word ptr es:[esi + 4]
    X86_AT(c, 0x908abu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0908b0  shl al, 1
    X86_AT(c, 0x908b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0908b2  shr ax, 1
    X86_AT(c, 0x908b2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0908b5  mov byte ptr [0x89829], al
    X86_AT(c, 0x908b5u);
    wr8((c.sbase[3] + (uint32_t)(0x89829u)), g8(c, 0));
    // 0908ba  call 0x912af
    X86_AT(c, 0x908bau);
    push32(c, 0x908bfu); x86_call_known(c, 0x912afu, f_000912af); X86_RET(c, 0x908bfu);
    X86_TICK(c, 12);
    // 0908bf  clc 
    X86_AT(c, 0x908bfu);
    c.fl &= ~X86_CF;
    // 0908c0  ret 
    X86_AT(c, 0x908c0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x908abu, "ran off the end of a function");
}
void f_000908c1(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0908c1  movzx ecx, word ptr [0x89840]
    X86_AT(c, 0x908c1u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0x89840u)));
    // 0908c8  or ecx, ecx
    X86_AT(c, 0x908c8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 0908ca  je 0x90902
    X86_AT(c, 0x908cau);
    if (x86_cc(c, 4)) { goto L_90902; }
    X86_TICK(c, 2);
    // 0908cc  lea edi, [0x898f5]
    X86_AT(c, 0x908ccu);
    c.r[7] = (uint32_t)(0x898F5u);
L_908d2:
    X86_TICK(c, 12);
    // 0908d2  cmp byte ptr [edi], 0
    X86_AT(c, 0x908d2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0908d5  jne 0x908dc
    X86_AT(c, 0x908d5u);
    if (x86_cc(c, 5)) { goto L_908dc; }
    X86_TICK(c, 9);
    // 0908d7  add edi, 6
    X86_AT(c, 0x908d7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0908da  jmp 0x908d2
    X86_AT(c, 0x908dau);
    X86_POLL(c, 0x908d2u); goto L_908d2;
L_908dc:
    X86_TICK(c, 11);
    // 0908dc  dec word ptr [edi + 4]
    X86_AT(c, 0x908dcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0908e0  jne 0x908fd
    X86_AT(c, 0x908e0u);
    if (x86_cc(c, 5)) { goto L_908fd; }
    X86_TICK(c, 28);
    // 0908e2  push ecx
    X86_AT(c, 0x908e2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0908e3  xor ch, ch
    X86_AT(c, 0x908e3u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 0908e5  xchg byte ptr [edi], ch
    X86_AT(c, 0x908e5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 0908e7  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0x908e7u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0908ea  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0x908eau);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0908ed  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0x908edu);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 0908f0  call 0x90903
    X86_AT(c, 0x908f0u);
    push32(c, 0x908f5u); x86_call_known(c, 0x90903u, f_00090903); X86_RET(c, 0x908f5u);
    X86_TICK(c, 10);
    // 0908f5  dec word ptr [0x89840]
    X86_AT(c, 0x908f5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89840u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0908fc  pop ecx
    X86_AT(c, 0x908fcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_908fd:
    X86_TICK(c, 13);
    // 0908fd  add edi, 6
    X86_AT(c, 0x908fdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 090900  loop 0x908d2
    X86_AT(c, 0x90900u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x908d2u); goto L_908d2; }
L_90902:
    X86_TICK(c, 10);
    // 090902  ret 
    X86_AT(c, 0x90902u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x908c1u, "ran off the end of a function");
}
void f_00090903(X86Cpu& c) {
    X86_TICK(c, 9);
    // 090903  push eax
    X86_AT(c, 0x90903u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090904  or bh, bh
    X86_AT(c, 0x90904u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 7), 1)); }
    // 090906  je 0x9090b
    X86_AT(c, 0x90906u);
    if (x86_cc(c, 4)) { goto L_9090b; }
    X86_TICK(c, 2);
    // 090908  and ch, 0x8f
    X86_AT(c, 0x90908u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x8Fu, 1)); }
L_9090b:
    X86_TICK(c, 9);
    // 09090b  mov al, ch
    X86_AT(c, 0x9090bu);
    s8(c, 0, g8(c, 5));
    // 09090d  call 0x90d79
    X86_AT(c, 0x9090du);
    push32(c, 0x90912u); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x90912u);
    X86_TICK(c, 9);
    // 090912  mov al, cl
    X86_AT(c, 0x90912u);
    s8(c, 0, g8(c, 1));
    // 090914  call 0x90d79
    X86_AT(c, 0x90914u);
    push32(c, 0x90919u); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x90919u);
    X86_TICK(c, 9);
    // 090919  mov al, bh
    X86_AT(c, 0x90919u);
    s8(c, 0, g8(c, 7));
    // 09091b  call 0x90d79
    X86_AT(c, 0x9091bu);
    push32(c, 0x90920u); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x90920u);
    X86_TICK(c, 14);
    // 090920  pop eax
    X86_AT(c, 0x90920u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 090921  ret 
    X86_AT(c, 0x90921u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90903u, "ran off the end of a function");
}
void f_00090d26(X86Cpu& c) {
    X86_TICK(c, 25);
    // 090d26  cld 
    X86_AT(c, 0x90d26u);
    c.fl &= ~X86_DF;
    // 090d27  push esi
    X86_AT(c, 0x90d27u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 090d28  push ebx
    X86_AT(c, 0x90d28u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 090d29  and ebx, 7
    X86_AT(c, 0x90d29u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 090d2c  shl ebx, 5
    X86_AT(c, 0x90d2cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 090d2f  lea ebx, [ebx + 0x89ba5]
    X86_AT(c, 0x90d2fu);
    c.r[3] = (uint32_t)(c.r[3] + 0x89BA5u);
    // 090d35  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0x90d35u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 090d3a  je 0x90d55
    X86_AT(c, 0x90d3au);
    if (x86_cc(c, 4)) { goto L_90d55; }
    X86_TICK(c, 28);
    // 090d3c  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0x90d3cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 090d3f  lodsb al, byte ptr [esi]
    X86_AT(c, 0x90d3fu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 090d40  dec word ptr [ebx + 0x10]
    X86_AT(c, 0x90d40u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 090d44  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0x90d44u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 090d47  jne 0x90d4b
    X86_AT(c, 0x90d47u);
    if (x86_cc(c, 5)) { goto L_90d4b; }
    X86_TICK(c, 4);
    // 090d49  mov esi, dword ptr [ebx]
    X86_AT(c, 0x90d49u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_90d4b:
    X86_TICK(c, 16);
    // 090d4b  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0x90d4bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 090d4e  xor ah, ah
    X86_AT(c, 0x90d4eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 090d50  xchg byte ptr [ebx + 0x19], ah
    X86_AT(c, 0x90d50u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 4)); s8(c, 4, t); }
    // 090d53  jmp 0x90d57
    X86_AT(c, 0x90d53u);
    goto L_90d57;
L_90d55:
    X86_TICK(c, 2);
    // 090d55  mov ah, 1
    X86_AT(c, 0x90d55u);
    s8(c, 4, 0x1u);
L_90d57:
    X86_TICK(c, 7);
    // 090d57  cmp ah, 1
    X86_AT(c, 0x90d57u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 090d5a  jbe 0x90d62
    X86_AT(c, 0x90d5au);
    if (x86_cc(c, 6)) { goto L_90d62; }
    X86_TICK(c, 2);
    // 090d5c  mov byte ptr [0x89810], ah
    X86_AT(c, 0x90d5cu);
    wr8((c.sbase[3] + (uint32_t)(0x89810u)), g8(c, 4));
L_90d62:
    X86_TICK(c, 18);
    // 090d62  pop ebx
    X86_AT(c, 0x90d62u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090d63  pop esi
    X86_AT(c, 0x90d63u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 090d64  ret 
    X86_AT(c, 0x90d64u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90d26u, "ran off the end of a function");
}
void f_00090d79(X86Cpu& c) {
    X86_TICK(c, 13);
    // 090d79  push eax
    X86_AT(c, 0x90d79u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090d7a  push ebx
    X86_AT(c, 0x90d7au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 090d7b  push edi
    X86_AT(c, 0x90d7bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 090d7c  cmp bl, 0xff
    X86_AT(c, 0x90d7cu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 090d7f  je 0x90dfe
    X86_AT(c, 0x90d7fu);
    if (x86_cc(c, 4)) { goto L_90dfe; }
    X86_TICK(c, 19);
    // 090d85  and ebx, 7
    X86_AT(c, 0x90d85u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 090d88  shl ebx, 5
    X86_AT(c, 0x90d88u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 090d8b  lea ebx, [ebx + 0x89aa5]
    X86_AT(c, 0x90d8bu);
    c.r[3] = (uint32_t)(c.r[3] + 0x89AA5u);
    // 090d91  cmp byte ptr [ebx + 0x18], 0
    X86_AT(c, 0x90d91u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x18u))), 0x0u, 0, 1);
    // 090d95  je 0x90e09
    X86_AT(c, 0x90d95u);
    if (x86_cc(c, 4)) { goto L_90e09; }
    X86_TICK(c, 7);
    // 090d9b  cmp al, 0x80
    X86_AT(c, 0x90d9bu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 090d9d  jb 0x90db3
    X86_AT(c, 0x90d9du);
    if (x86_cc(c, 2)) { goto L_90db3; }
    X86_TICK(c, 7);
    // 090d9f  cmp al, 0xf8
    X86_AT(c, 0x90d9fu);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 090da1  jae 0x90db3
    X86_AT(c, 0x90da1u);
    if (x86_cc(c, 3)) { goto L_90db3; }
    X86_TICK(c, 7);
    // 090da3  cmp al, 0xf0
    X86_AT(c, 0x90da3u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 090da5  jae 0x90db0
    X86_AT(c, 0x90da5u);
    if (x86_cc(c, 3)) { goto L_90db0; }
    X86_TICK(c, 11);
    // 090da7  cmp al, byte ptr [ebx + 0x1b]
    X86_AT(c, 0x90da7u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu))), 0, 1);
    // 090daa  je 0x90e03
    X86_AT(c, 0x90daau);
    if (x86_cc(c, 4)) { goto L_90e03; }
L_90db0:
    X86_TICK(c, 2);
    // 090db0  mov byte ptr [ebx + 0x1b], al
    X86_AT(c, 0x90db0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), g8(c, 0));
L_90db3:
    X86_TICK(c, 16);
    // 090db3  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0x90db3u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 090db6  cmp word ptr [ebx + 0x10], 0x10
    X86_AT(c, 0x90db6u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x10u, 0, 2);
    // 090dbb  je 0x90db3
    X86_AT(c, 0x90dbbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x90db3u); goto L_90db3; }
    X86_TICK(c, 24);
    // 090dbd  mov byte ptr [edi], al
    X86_AT(c, 0x90dbdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 090dbf  inc edi
    X86_AT(c, 0x90dbfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 090dc0  pushf 
    X86_AT(c, 0x90dc0u);
    push16(c, c.fl & 0xFFFFu);
    // 090dc2  cli 
    X86_AT(c, 0x90dc2u);
    c.fl &= ~X86_IF;
    // 090dc3  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0x90dc3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 090dc8  jne 0x90de5
    X86_AT(c, 0x90dc8u);
    if (x86_cc(c, 5)) { goto L_90de5; }
    X86_TICK(c, 32);
    // 090dce  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0x90dceu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 090dd1  or al, byte ptr [0x89a75]
    X86_AT(c, 0x90dd1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(0x89A75u))), 1)); }
    // 090dd7  mov byte ptr [0x89a75], al
    X86_AT(c, 0x90dd7u);
    wr8((c.sbase[3] + (uint32_t)(0x89A75u)), g8(c, 0));
    // 090ddc  push dx
    X86_AT(c, 0x90ddcu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 090dde  mov dx, 0xe70
    X86_AT(c, 0x90ddeu);
    s16(c, 2, 0xE70u);
    // 090de2  out dx, al
    X86_AT(c, 0x90de2u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090de3  pop dx
    X86_AT(c, 0x90de3u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_90de5:
    X86_TICK(c, 23);
    // 090de5  inc word ptr [ebx + 0x10]
    X86_AT(c, 0x90de5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 090de9  popf 
    X86_AT(c, 0x90de9u);
    x86_popfd(c, 2);
    // 090deb  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x90debu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 090dee  jne 0x90df6
    X86_AT(c, 0x90deeu);
    if (x86_cc(c, 5)) { goto L_90df6; }
    X86_TICK(c, 4);
    // 090df4  mov edi, dword ptr [ebx]
    X86_AT(c, 0x90df4u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_90df6:
    X86_TICK(c, 9);
    // 090df6  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0x90df6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
    // 090df9  jmp 0x90e03
    X86_AT(c, 0x90df9u);
    goto L_90e03;
L_90dfe:
    X86_TICK(c, 7);
    // 090dfe  call 0x917f4
    X86_AT(c, 0x90dfeu);
    push32(c, 0x90e03u); x86_call_known(c, 0x917f4u, f_000917f4); X86_RET(c, 0x90e03u);
L_90e03:
    X86_TICK(c, 24);
    // 090e03  pop edi
    X86_AT(c, 0x90e03u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 090e04  pop ebx
    X86_AT(c, 0x90e04u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090e05  pop eax
    X86_AT(c, 0x90e05u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 090e06  xor ah, ah
    X86_AT(c, 0x90e06u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 090e08  ret 
    X86_AT(c, 0x90e08u);
    c.eip = pop32(c); return;
L_90e09:
    X86_TICK(c, 24);
    // 090e09  pop edi
    X86_AT(c, 0x90e09u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 090e0a  pop ebx
    X86_AT(c, 0x90e0au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090e0b  pop eax
    X86_AT(c, 0x90e0bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 090e0c  mov ah, 0xf0
    X86_AT(c, 0x90e0cu);
    s8(c, 4, 0xF0u);
    // 090e0e  ret 
    X86_AT(c, 0x90e0eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90d79u, "ran off the end of a function");
}
void f_00090e0f(X86Cpu& c) {
    X86_TICK(c, 13);
    // 090e0f  push ebx
    X86_AT(c, 0x90e0fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 090e10  mov bl, byte ptr [0x89842]
    X86_AT(c, 0x90e10u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0x89842u))));
    // 090e16  cmp bl, 8
    X86_AT(c, 0x90e16u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 090e19  jae 0x90e20
    X86_AT(c, 0x90e19u);
    if (x86_cc(c, 3)) { goto L_90e20; }
    X86_TICK(c, 7);
    // 090e1b  call 0x90d79
    X86_AT(c, 0x90e1bu);
    push32(c, 0x90e20u); x86_call_known(c, 0x90d79u, f_00090d79); X86_RET(c, 0x90e20u);
L_90e20:
    X86_TICK(c, 14);
    // 090e20  pop ebx
    X86_AT(c, 0x90e20u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090e21  ret 
    X86_AT(c, 0x90e21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90e0fu, "ran off the end of a function");
}
void f_00090e22(X86Cpu& c) {
    X86_TICK(c, 49);
    // 090e22  pushfd 
    X86_AT(c, 0x90e22u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 090e23  cli 
    X86_AT(c, 0x90e23u);
    c.fl &= ~X86_IF;
    // 090e24  mov cl, 0x44
    X86_AT(c, 0x90e24u);
    s8(c, 1, 0x44u);
    // 090e26  mov ax, 0x2502
    X86_AT(c, 0x90e26u);
    s16(c, 0, 0x2502u);
    // 090e2a  int 0x21
    X86_AT(c, 0x90e2au);
    x86_int(c, 0x21, 0x90e2cu);
    X86_TICK(c, 5);
    // 090e2c  jb 0x90eae
    X86_AT(c, 0x90e2cu);
    if (x86_cc(c, 2)) { goto L_90eae; }
    X86_TICK(c, 9);
    // 090e32  lea edx, [0x9134f]
    X86_AT(c, 0x90e32u);
    c.r[2] = (uint32_t)(0x9134Fu);
    // 090e38  cmp ebx, edx
    X86_AT(c, 0x90e38u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 090e3a  je 0x90eae
    X86_AT(c, 0x90e3au);
    if (x86_cc(c, 4)) { goto L_90eae; }
    X86_TICK(c, 47);
    // 090e40  mov eax, es
    X86_AT(c, 0x90e40u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 090e42  mov dword ptr [0x89a7a], ebx
    X86_AT(c, 0x90e42u);
    wr32((c.sbase[3] + (uint32_t)(0x89A7Au)), c.r[3]);
    // 090e48  mov word ptr [0x89a7e], ax
    X86_AT(c, 0x90e48u);
    wr16((c.sbase[3] + (uint32_t)(0x89A7Eu)), (c.r[0] & 0xFFFFu));
    // 090e4e  mov cl, 0x44
    X86_AT(c, 0x90e4eu);
    s8(c, 1, 0x44u);
    // 090e50  mov ax, 0x2503
    X86_AT(c, 0x90e50u);
    s16(c, 0, 0x2503u);
    // 090e54  int 0x21
    X86_AT(c, 0x90e54u);
    x86_int(c, 0x21, 0x90e56u);
    X86_TICK(c, 5);
    // 090e56  jb 0x90eae
    X86_AT(c, 0x90e56u);
    if (x86_cc(c, 2)) { goto L_90eae; }
    X86_TICK(c, 51);
    // 090e5c  mov dword ptr [0x89a80], ebx
    X86_AT(c, 0x90e5cu);
    wr32((c.sbase[3] + (uint32_t)(0x89A80u)), c.r[3]);
    // 090e62  push ds
    X86_AT(c, 0x90e62u);
    push32(c, c.sreg[3]);
    // 090e63  mov eax, cs
    X86_AT(c, 0x90e63u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 090e65  mov ds, eax
    X86_AT(c, 0x90e65u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 090e67  mov cl, 0x44
    X86_AT(c, 0x90e67u);
    s8(c, 1, 0x44u);
    // 090e69  lea edx, [0x9134f]
    X86_AT(c, 0x90e69u);
    c.r[2] = (uint32_t)(0x9134Fu);
    // 090e6f  mov ax, 0x2506
    X86_AT(c, 0x90e6fu);
    s16(c, 0, 0x2506u);
    // 090e73  int 0x21
    X86_AT(c, 0x90e73u);
    x86_int(c, 0x21, 0x90e75u);
    X86_TICK(c, 9);
    // 090e75  pop ds
    X86_AT(c, 0x90e75u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 090e76  jb 0x90eae
    X86_AT(c, 0x90e76u);
    if (x86_cc(c, 2)) { goto L_90eae; }
    X86_TICK(c, 57);
    // 090e7c  xor al, al
    X86_AT(c, 0x90e7cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 090e7e  mov byte ptr [0x89a75], al
    X86_AT(c, 0x90e7eu);
    wr8((c.sbase[3] + (uint32_t)(0x89A75u)), g8(c, 0));
    // 090e83  mov dx, 0xe70
    X86_AT(c, 0x90e83u);
    s16(c, 2, 0xE70u);
    // 090e87  out dx, al
    X86_AT(c, 0x90e87u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090e88  mov al, 0xff
    X86_AT(c, 0x90e88u);
    s8(c, 0, 0xFFu);
    // 090e8a  mov byte ptr [0x89a77], al
    X86_AT(c, 0x90e8au);
    wr8((c.sbase[3] + (uint32_t)(0x89A77u)), g8(c, 0));
    // 090e8f  mov dx, 0xe71
    X86_AT(c, 0x90e8fu);
    s16(c, 2, 0xE71u);
    // 090e93  out dx, al
    X86_AT(c, 0x90e93u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090e94  mov byte ptr [0x89a78], 0
    X86_AT(c, 0x90e94u);
    wr8((c.sbase[3] + (uint32_t)(0x89A78u)), 0x0u);
    // 090e9b  in al, 2
    X86_AT(c, 0x90e9bu);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 090e9d  jmp 0x90e9f
    X86_AT(c, 0x90e9du);
    goto L_90e9f;
L_90e9f:
    X86_TICK(c, 7);
    // 090e9f  jmp 0x90ea1
    X86_AT(c, 0x90e9fu);
    goto L_90ea1;
L_90ea1:
    X86_TICK(c, 7);
    // 090ea1  jmp 0x90ea3
    X86_AT(c, 0x90ea1u);
    goto L_90ea3;
L_90ea3:
    X86_TICK(c, 36);
    // 090ea3  mov dl, 0x10
    X86_AT(c, 0x90ea3u);
    s8(c, 2, 0x10u);
    // 090ea5  not dl
    X86_AT(c, 0x90ea5u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 090ea7  and al, dl
    X86_AT(c, 0x90ea7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 090ea9  out 2, al
    X86_AT(c, 0x90ea9u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 090eab  popfd 
    X86_AT(c, 0x90eabu);
    x86_popfd(c, 4);
    // 090eac  clc 
    X86_AT(c, 0x90eacu);
    c.fl &= ~X86_CF;
    // 090ead  ret 
    X86_AT(c, 0x90eadu);
    c.eip = pop32(c); return;
L_90eae:
    X86_TICK(c, 18);
    // 090eae  popf 
    X86_AT(c, 0x90eaeu);
    x86_popfd(c, 2);
    // 090eb0  stc 
    X86_AT(c, 0x90eb0u);
    c.fl |= X86_CF;
    // 090eb1  ret 
    X86_AT(c, 0x90eb1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90e22u, "ran off the end of a function");
}
void f_00090eb2(X86Cpu& c) {
    X86_TICK(c, 49);
    // 090eb2  pushfd 
    X86_AT(c, 0x90eb2u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 090eb3  cli 
    X86_AT(c, 0x90eb3u);
    c.fl &= ~X86_IF;
    // 090eb4  mov cl, 0x45
    X86_AT(c, 0x90eb4u);
    s8(c, 1, 0x45u);
    // 090eb6  mov ax, 0x2502
    X86_AT(c, 0x90eb6u);
    s16(c, 0, 0x2502u);
    // 090eba  int 0x21
    X86_AT(c, 0x90ebau);
    x86_int(c, 0x21, 0x90ebcu);
    X86_TICK(c, 5);
    // 090ebc  jb 0x90f2b
    X86_AT(c, 0x90ebcu);
    if (x86_cc(c, 2)) { goto L_90f2b; }
    X86_TICK(c, 9);
    // 090ec2  lea edx, [0x913ca]
    X86_AT(c, 0x90ec2u);
    c.r[2] = (uint32_t)(0x913CAu);
    // 090ec8  cmp ebx, edx
    X86_AT(c, 0x90ec8u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 090eca  je 0x90f2b
    X86_AT(c, 0x90ecau);
    if (x86_cc(c, 4)) { goto L_90f2b; }
    X86_TICK(c, 47);
    // 090ed0  mov eax, es
    X86_AT(c, 0x90ed0u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 090ed2  mov dword ptr [0x89a84], ebx
    X86_AT(c, 0x90ed2u);
    wr32((c.sbase[3] + (uint32_t)(0x89A84u)), c.r[3]);
    // 090ed8  mov word ptr [0x89a88], ax
    X86_AT(c, 0x90ed8u);
    wr16((c.sbase[3] + (uint32_t)(0x89A88u)), (c.r[0] & 0xFFFFu));
    // 090ede  mov cl, 0x45
    X86_AT(c, 0x90edeu);
    s8(c, 1, 0x45u);
    // 090ee0  mov ax, 0x2503
    X86_AT(c, 0x90ee0u);
    s16(c, 0, 0x2503u);
    // 090ee4  int 0x21
    X86_AT(c, 0x90ee4u);
    x86_int(c, 0x21, 0x90ee6u);
    X86_TICK(c, 5);
    // 090ee6  jb 0x90f2b
    X86_AT(c, 0x90ee6u);
    if (x86_cc(c, 2)) { goto L_90f2b; }
    X86_TICK(c, 51);
    // 090eec  mov dword ptr [0x89a80], ebx
    X86_AT(c, 0x90eecu);
    wr32((c.sbase[3] + (uint32_t)(0x89A80u)), c.r[3]);
    // 090ef2  push ds
    X86_AT(c, 0x90ef2u);
    push32(c, c.sreg[3]);
    // 090ef3  mov eax, cs
    X86_AT(c, 0x90ef3u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 090ef5  mov ds, eax
    X86_AT(c, 0x90ef5u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 090ef7  lea edx, [0x913ca]
    X86_AT(c, 0x90ef7u);
    c.r[2] = (uint32_t)(0x913CAu);
    // 090efd  mov cl, 0x45
    X86_AT(c, 0x90efdu);
    s8(c, 1, 0x45u);
    // 090eff  mov ax, 0x2506
    X86_AT(c, 0x90effu);
    s16(c, 0, 0x2506u);
    // 090f03  int 0x21
    X86_AT(c, 0x90f03u);
    x86_int(c, 0x21, 0x90f05u);
    X86_TICK(c, 9);
    // 090f05  pop ds
    X86_AT(c, 0x90f05u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 090f06  jb 0x90f2b
    X86_AT(c, 0x90f06u);
    if (x86_cc(c, 2)) { goto L_90f2b; }
    X86_TICK(c, 37);
    // 090f0c  xor al, al
    X86_AT(c, 0x90f0cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 090f0e  mov byte ptr [0x89a76], al
    X86_AT(c, 0x90f0eu);
    wr8((c.sbase[3] + (uint32_t)(0x89A76u)), g8(c, 0));
    // 090f13  mov dx, 0xe73
    X86_AT(c, 0x90f13u);
    s16(c, 2, 0xE73u);
    // 090f17  out dx, al
    X86_AT(c, 0x90f17u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090f18  in al, 2
    X86_AT(c, 0x90f18u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 090f1a  jmp 0x90f1c
    X86_AT(c, 0x90f1au);
    goto L_90f1c;
L_90f1c:
    X86_TICK(c, 7);
    // 090f1c  jmp 0x90f1e
    X86_AT(c, 0x90f1cu);
    goto L_90f1e;
L_90f1e:
    X86_TICK(c, 7);
    // 090f1e  jmp 0x90f20
    X86_AT(c, 0x90f1eu);
    goto L_90f20;
L_90f20:
    X86_TICK(c, 36);
    // 090f20  mov dl, 0x20
    X86_AT(c, 0x90f20u);
    s8(c, 2, 0x20u);
    // 090f22  not dl
    X86_AT(c, 0x90f22u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 090f24  and al, dl
    X86_AT(c, 0x90f24u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 090f26  out 2, al
    X86_AT(c, 0x90f26u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 090f28  popfd 
    X86_AT(c, 0x90f28u);
    x86_popfd(c, 4);
    // 090f29  clc 
    X86_AT(c, 0x90f29u);
    c.fl &= ~X86_CF;
    // 090f2a  ret 
    X86_AT(c, 0x90f2au);
    c.eip = pop32(c); return;
L_90f2b:
    X86_TICK(c, 18);
    // 090f2b  popfd 
    X86_AT(c, 0x90f2bu);
    x86_popfd(c, 4);
    // 090f2c  stc 
    X86_AT(c, 0x90f2cu);
    c.fl |= X86_CF;
    // 090f2d  ret 
    X86_AT(c, 0x90f2du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90eb2u, "ran off the end of a function");
}
void f_00090f2e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 090f2e  pushfd 
    X86_AT(c, 0x90f2eu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 090f2f  cli 
    X86_AT(c, 0x90f2fu);
    c.fl &= ~X86_IF;
    // 090f30  call 0x8f684
    X86_AT(c, 0x90f30u);
    push32(c, 0x90f35u); x86_call_known(c, 0x8f684u, f_0008f684); X86_RET(c, 0x90f35u);
    X86_TICK(c, 9);
    // 090f35  mov dword ptr [0x89a8e], eax
    X86_AT(c, 0x90f35u);
    wr32((c.sbase[3] + (uint32_t)(0x89A8Eu)), c.r[0]);
    // 090f3a  call 0x8f6a0
    X86_AT(c, 0x90f3au);
    push32(c, 0x90f3fu); x86_call_known(c, 0x8f6a0u, f_0008f6a0); X86_RET(c, 0x90f3fu);
    X86_TICK(c, 13);
    // 090f3f  mov dword ptr [0x89a92], eax
    X86_AT(c, 0x90f3fu);
    wr32((c.sbase[3] + (uint32_t)(0x89A92u)), c.r[0]);
    // 090f44  lea eax, [0x91542]
    X86_AT(c, 0x90f44u);
    c.r[0] = (uint32_t)(0x91542u);
    // 090f4a  push eax
    X86_AT(c, 0x90f4au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090f4b  call 0x8f664
    X86_AT(c, 0x90f4bu);
    push32(c, 0x90f50u); x86_call_known(c, 0x8f664u, f_0008f664); X86_RET(c, 0x90f50u);
    X86_TICK(c, 13);
    // 090f50  add esp, 4
    X86_AT(c, 0x90f50u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 090f53  lea eax, [0x91660]
    X86_AT(c, 0x90f53u);
    c.r[0] = (uint32_t)(0x91660u);
    // 090f59  push eax
    X86_AT(c, 0x90f59u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090f5a  call 0x8f690
    X86_AT(c, 0x90f5au);
    push32(c, 0x90f5fu); x86_call_known(c, 0x8f690u, f_0008f690); X86_RET(c, 0x90f5fu);
    X86_TICK(c, 20);
    // 090f5f  add esp, 4
    X86_AT(c, 0x90f5fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 090f62  popfd 
    X86_AT(c, 0x90f62u);
    x86_popfd(c, 4);
    // 090f63  clc 
    X86_AT(c, 0x90f63u);
    c.fl &= ~X86_CF;
    // 090f64  ret 
    X86_AT(c, 0x90f64u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90f2eu, "ran off the end of a function");
}
void f_00090f68(X86Cpu& c) {
    X86_TICK(c, 59);
    // 090f68  pushfd 
    X86_AT(c, 0x90f68u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 090f69  cli 
    X86_AT(c, 0x90f69u);
    c.fl &= ~X86_IF;
    // 090f6a  mov dx, 0xe70
    X86_AT(c, 0x90f6au);
    s16(c, 2, 0xE70u);
    // 090f6e  mov al, 0
    X86_AT(c, 0x90f6eu);
    s8(c, 0, 0x0u);
    // 090f70  out dx, al
    X86_AT(c, 0x90f70u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090f71  mov dx, 0xe71
    X86_AT(c, 0x90f71u);
    s16(c, 2, 0xE71u);
    // 090f75  mov al, 0
    X86_AT(c, 0x90f75u);
    s8(c, 0, 0x0u);
    // 090f77  out dx, al
    X86_AT(c, 0x90f77u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090f78  in al, 2
    X86_AT(c, 0x90f78u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 090f7a  jmp 0x90f7c
    X86_AT(c, 0x90f7au);
    goto L_90f7c;
L_90f7c:
    X86_TICK(c, 7);
    // 090f7c  jmp 0x90f7e
    X86_AT(c, 0x90f7cu);
    goto L_90f7e;
L_90f7e:
    X86_TICK(c, 7);
    // 090f7e  jmp 0x90f80
    X86_AT(c, 0x90f7eu);
    goto L_90f80;
L_90f80:
    X86_TICK(c, 71);
    // 090f80  or al, 0x10
    X86_AT(c, 0x90f80u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 090f82  out 2, al
    X86_AT(c, 0x90f82u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 090f84  push ds
    X86_AT(c, 0x90f84u);
    push32(c, c.sreg[3]);
    // 090f85  mov cl, 0x44
    X86_AT(c, 0x90f85u);
    s8(c, 1, 0x44u);
    // 090f87  mov edx, dword ptr [0x89a7a]
    X86_AT(c, 0x90f87u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x89A7Au)));
    // 090f8d  mov ax, word ptr [0x89a7e]
    X86_AT(c, 0x90f8du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89A7Eu))));
    // 090f93  mov ebx, dword ptr [0x89a80]
    X86_AT(c, 0x90f93u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x89A80u)));
    // 090f99  mov ds, eax
    X86_AT(c, 0x90f99u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 090f9b  mov ax, 0x2507
    X86_AT(c, 0x90f9bu);
    s16(c, 0, 0x2507u);
    // 090f9f  int 0x21
    X86_AT(c, 0x90f9fu);
    x86_int(c, 0x21, 0x90fa1u);
    X86_TICK(c, 20);
    // 090fa1  pop ds
    X86_AT(c, 0x90fa1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 090fa2  popfd 
    X86_AT(c, 0x90fa2u);
    x86_popfd(c, 4);
    // 090fa3  ret 
    X86_AT(c, 0x90fa3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90f68u, "ran off the end of a function");
}
void f_00090fa4(X86Cpu& c) {
    X86_TICK(c, 49);
    // 090fa4  pushfd 
    X86_AT(c, 0x90fa4u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 090fa5  cli 
    X86_AT(c, 0x90fa5u);
    c.fl &= ~X86_IF;
    // 090fa6  mov al, byte ptr [0x89a76]
    X86_AT(c, 0x90fa6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89A76u))));
    // 090fab  and al, 0xfc
    X86_AT(c, 0x90fabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 090fad  mov dx, 0xe73
    X86_AT(c, 0x90fadu);
    s16(c, 2, 0xE73u);
    // 090fb1  out dx, al
    X86_AT(c, 0x90fb1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090fb2  mov byte ptr [0x89a76], al
    X86_AT(c, 0x90fb2u);
    wr8((c.sbase[3] + (uint32_t)(0x89A76u)), g8(c, 0));
    // 090fb7  in al, 2
    X86_AT(c, 0x90fb7u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 090fb9  jmp 0x90fbb
    X86_AT(c, 0x90fb9u);
    goto L_90fbb;
L_90fbb:
    X86_TICK(c, 7);
    // 090fbb  jmp 0x90fbd
    X86_AT(c, 0x90fbbu);
    goto L_90fbd;
L_90fbd:
    X86_TICK(c, 7);
    // 090fbd  jmp 0x90fbf
    X86_AT(c, 0x90fbdu);
    goto L_90fbf;
L_90fbf:
    X86_TICK(c, 71);
    // 090fbf  or al, 0x20
    X86_AT(c, 0x90fbfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 090fc1  out 2, al
    X86_AT(c, 0x90fc1u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 090fc3  push ds
    X86_AT(c, 0x90fc3u);
    push32(c, c.sreg[3]);
    // 090fc4  mov cl, 0x45
    X86_AT(c, 0x90fc4u);
    s8(c, 1, 0x45u);
    // 090fc6  mov edx, dword ptr [0x89a84]
    X86_AT(c, 0x90fc6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x89A84u)));
    // 090fcc  mov ax, word ptr [0x89a88]
    X86_AT(c, 0x90fccu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89A88u))));
    // 090fd2  mov ebx, dword ptr [0x89a8a]
    X86_AT(c, 0x90fd2u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x89A8Au)));
    // 090fd8  mov ds, eax
    X86_AT(c, 0x90fd8u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 090fda  mov ax, 0x2507
    X86_AT(c, 0x90fdau);
    s16(c, 0, 0x2507u);
    // 090fde  int 0x21
    X86_AT(c, 0x90fdeu);
    x86_int(c, 0x21, 0x90fe0u);
    X86_TICK(c, 20);
    // 090fe0  pop ds
    X86_AT(c, 0x90fe0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 090fe1  popfd 
    X86_AT(c, 0x90fe1u);
    x86_popfd(c, 4);
    // 090fe2  ret 
    X86_AT(c, 0x90fe2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90fa4u, "ran off the end of a function");
}
}

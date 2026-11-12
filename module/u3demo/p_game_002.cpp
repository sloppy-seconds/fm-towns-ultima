#include "p_game_funcs.h"
namespace p_game {
void f_0008f410(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08f410  call 0x8f054
    X86_AT(c, 0x8f410u);
    push32(c, 0x8f415u); x86_call_known(c, 0x8f054u, f_0008f054); X86_RET(c, 0x8f415u);
    X86_TICK(c, 11);
    // 08f415  push 0
    X86_AT(c, 0x8f415u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f417  push 0x1b30
    X86_AT(c, 0x8f417u);
    { uint32_t v = 0x1B30u; push32(c, v); }
    // 08f41c  call 0x8f020
    X86_AT(c, 0x8f41cu);
    push32(c, 0x8f421u); x86_call_known(c, 0x8f020u, f_0008f020); X86_RET(c, 0x8f421u);
    X86_TICK(c, 11);
    // 08f421  push 1
    X86_AT(c, 0x8f421u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08f423  push 0x1b44
    X86_AT(c, 0x8f423u);
    { uint32_t v = 0x1B44u; push32(c, v); }
    // 08f428  call 0x8f020
    X86_AT(c, 0x8f428u);
    push32(c, 0x8f42du); x86_call_known(c, 0x8f020u, f_0008f020); X86_RET(c, 0x8f42du);
    X86_TICK(c, 11);
    // 08f42d  push 2
    X86_AT(c, 0x8f42du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f42f  push 0x1b58
    X86_AT(c, 0x8f42fu);
    { uint32_t v = 0x1B58u; push32(c, v); }
    // 08f434  call 0x8f020
    X86_AT(c, 0x8f434u);
    push32(c, 0x8f439u); x86_call_known(c, 0x8f020u, f_0008f020); X86_RET(c, 0x8f439u);
    X86_TICK(c, 11);
    // 08f439  push 3
    X86_AT(c, 0x8f439u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08f43b  push 0x1b6c
    X86_AT(c, 0x8f43bu);
    { uint32_t v = 0x1B6Cu; push32(c, v); }
    // 08f440  call 0x8f020
    X86_AT(c, 0x8f440u);
    push32(c, 0x8f445u); x86_call_known(c, 0x8f020u, f_0008f020); X86_RET(c, 0x8f445u);
    X86_TICK(c, 9);
    // 08f445  push 0x1b80
    X86_AT(c, 0x8f445u);
    { uint32_t v = 0x1B80u; push32(c, v); }
    // 08f44a  call 0x8efa0
    X86_AT(c, 0x8f44au);
    push32(c, 0x8f44fu); x86_call_known(c, 0x8efa0u, f_0008efa0); X86_RET(c, 0x8f44fu);
    X86_TICK(c, 27);
    // 08f44f  push 0xa
    X86_AT(c, 0x8f44fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 08f451  push 0xf
    X86_AT(c, 0x8f451u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08f453  push 0xf
    X86_AT(c, 0x8f453u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08f455  push 2
    X86_AT(c, 0x8f455u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f457  push 0x47
    X86_AT(c, 0x8f457u);
    { uint32_t v = 0x47u; push32(c, v); }
    // 08f459  push 0x34
    X86_AT(c, 0x8f459u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 08f45b  push 0x250
    X86_AT(c, 0x8f45bu);
    { uint32_t v = 0x250u; push32(c, v); }
    // 08f460  push 0x16a
    X86_AT(c, 0x8f460u);
    { uint32_t v = 0x16Au; push32(c, v); }
    // 08f465  push 0x1d
    X86_AT(c, 0x8f465u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 08f467  push 0
    X86_AT(c, 0x8f467u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f469  call 0x8d5dc
    X86_AT(c, 0x8f469u);
    push32(c, 0x8f46eu); x86_call_known(c, 0x8d5dcu, f_0008d5dc); X86_RET(c, 0x8f46eu);
    X86_TICK(c, 11);
    // 08f46e  add esp, 0x4c
    X86_AT(c, 0x8f46eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4Cu, 0, 4); }
    // 08f471  push 0
    X86_AT(c, 0x8f471u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f473  call 0x8d720
    X86_AT(c, 0x8f473u);
    push32(c, 0x8f478u); x86_call_known(c, 0x8d720u, f_0008d720); X86_RET(c, 0x8f478u);
    X86_TICK(c, 9);
    // 08f478  push 5
    X86_AT(c, 0x8f478u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 08f47a  call 0x8eef4
    X86_AT(c, 0x8f47au);
    push32(c, 0x8f47fu); x86_call_known(c, 0x8eef4u, f_0008eef4); X86_RET(c, 0x8f47fu);
    X86_TICK(c, 2);
    // 08f47f  add esp, 8
    X86_AT(c, 0x8f47fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_8f482:
    X86_TICK(c, 7);
    // 08f482  call 0x8f0f0
    X86_AT(c, 0x8f482u);
    push32(c, 0x8f487u); x86_call_known(c, 0x8f0f0u, f_0008f0f0); X86_RET(c, 0x8f487u);
    X86_TICK(c, 7);
    // 08f487  jmp 0x8f482
    X86_AT(c, 0x8f487u);
    X86_POLL(c, 0x8f482u); goto L_8f482;
    x86_fault(c, 0x8f410u, "ran off the end of a function");
}
void f_0008f4cf(X86Cpu& c) {
    X86_TICK(c, 51);
    // 08f4cf  enter 0, 0
    X86_AT(c, 0x8f4cfu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f4d3  pushal 
    X86_AT(c, 0x8f4d3u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08f4d4  pushfd 
    X86_AT(c, 0x8f4d4u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 08f4d5  cli 
    X86_AT(c, 0x8f4d5u);
    c.fl &= ~X86_IF;
    // 08f4d6  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8f4d6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f4d9  mov dword ptr [0x89534], eax
    X86_AT(c, 0x8f4d9u);
    wr32((c.sbase[3] + (uint32_t)(0x89534u)), c.r[0]);
    // 08f4de  mov word ptr [0x89538], ds
    X86_AT(c, 0x8f4deu);
    wr16((c.sbase[3] + (uint32_t)(0x89538u)), (uint32_t)c.sreg[3]);
    // 08f4e4  mov bl, 0
    X86_AT(c, 0x8f4e4u);
    s8(c, 3, 0x0u);
    // 08f4e6  xor ah, ah
    X86_AT(c, 0x8f4e6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 08f4e8  call 0x8fad8
    X86_AT(c, 0x8f4e8u);
    push32(c, 0x8f4edu); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f4edu);
    X86_TICK(c, 7);
    // 08f4ed  and al, al
    X86_AT(c, 0x8f4edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08f4ef  jne 0x8f52d
    X86_AT(c, 0x8f4efu);
    if (x86_cc(c, 5)) { goto L_8f52d; }
    X86_TICK(c, 7);
    // 08f4f5  call 0x8f884
    X86_AT(c, 0x8f4f5u);
    push32(c, 0x8f4fau); x86_call_known(c, 0x8f884u, f_0008f884); X86_RET(c, 0x8f4fau);
    X86_TICK(c, 7);
    // 08f4fa  and al, al
    X86_AT(c, 0x8f4fau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08f4fc  jne 0x8f52d
    X86_AT(c, 0x8f4fcu);
    if (x86_cc(c, 5)) { goto L_8f52d; }
    X86_TICK(c, 13);
    // 08f502  mov bl, 0xff
    X86_AT(c, 0x8f502u);
    s8(c, 3, 0xFFu);
    // 08f504  mov ecx, 1
    X86_AT(c, 0x8f504u);
    c.r[1] = 0x1u;
    // 08f509  mov ah, 0x15
    X86_AT(c, 0x8f509u);
    s8(c, 4, 0x15u);
    // 08f50b  call 0x8fad8
    X86_AT(c, 0x8f50bu);
    push32(c, 0x8f510u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f510u);
    X86_TICK(c, 11);
    // 08f510  mov bl, 0
    X86_AT(c, 0x8f510u);
    s8(c, 3, 0x0u);
    // 08f512  mov ah, 0x15
    X86_AT(c, 0x8f512u);
    s8(c, 4, 0x15u);
    // 08f514  call 0x8fad8
    X86_AT(c, 0x8f514u);
    push32(c, 0x8f519u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f519u);
    X86_TICK(c, 13);
    // 08f519  mov bl, 0xff
    X86_AT(c, 0x8f519u);
    s8(c, 3, 0xFFu);
    // 08f51b  mov ecx, 0xdd
    X86_AT(c, 0x8f51bu);
    c.r[1] = 0xDDu;
    // 08f520  mov ah, 0x16
    X86_AT(c, 0x8f520u);
    s8(c, 4, 0x16u);
    // 08f522  call 0x8fad8
    X86_AT(c, 0x8f522u);
    push32(c, 0x8f527u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f527u);
    X86_TICK(c, 48);
    // 08f527  popfd 
    X86_AT(c, 0x8f527u);
    x86_popfd(c, 4);
    // 08f528  popal 
    X86_AT(c, 0x8f528u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f529  leave 
    X86_AT(c, 0x8f529u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f52a  xor eax, eax
    X86_AT(c, 0x8f52au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f52c  ret 
    X86_AT(c, 0x8f52cu);
    c.eip = pop32(c); return;
L_8f52d:
    X86_TICK(c, 48);
    // 08f52d  popfd 
    X86_AT(c, 0x8f52du);
    x86_popfd(c, 4);
    // 08f52e  popal 
    X86_AT(c, 0x8f52eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f52f  leave 
    X86_AT(c, 0x8f52fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f530  mov eax, 1
    X86_AT(c, 0x8f530u);
    c.r[0] = 0x1u;
    // 08f535  ret 
    X86_AT(c, 0x8f535u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f4cfu, "ran off the end of a function");
}
void f_0008f536(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08f536  enter 0, 0
    X86_AT(c, 0x8f536u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f53a  push ebx
    X86_AT(c, 0x8f53au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f53b  mov bl, 0
    X86_AT(c, 0x8f53bu);
    s8(c, 3, 0x0u);
    // 08f53d  xor ah, ah
    X86_AT(c, 0x8f53du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 08f53f  call 0x8fad8
    X86_AT(c, 0x8f53fu);
    push32(c, 0x8f544u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f544u);
    X86_TICK(c, 13);
    // 08f544  xor bh, bh
    X86_AT(c, 0x8f544u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 08f546  mov dx, 0x2c00
    X86_AT(c, 0x8f546u);
    s16(c, 2, 0x2C00u);
    // 08f54a  mov ah, 0x11
    X86_AT(c, 0x8f54au);
    s8(c, 4, 0x11u);
    // 08f54c  call 0x8fad8
    X86_AT(c, 0x8f54cu);
    push32(c, 0x8f551u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f551u);
    X86_TICK(c, 7);
    // 08f551  call 0x8f93e
    X86_AT(c, 0x8f551u);
    push32(c, 0x8f556u); x86_call_known(c, 0x8f93eu, f_0008f93e); X86_RET(c, 0x8f556u);
    X86_TICK(c, 22);
    // 08f556  xor eax, eax
    X86_AT(c, 0x8f556u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f558  pop ebx
    X86_AT(c, 0x8f558u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f559  leave 
    X86_AT(c, 0x8f559u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f55a  ret 
    X86_AT(c, 0x8f55au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f536u, "ran off the end of a function");
}
void f_0008f5a7(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08f5a7  enter 0, 0
    X86_AT(c, 0x8f5a7u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f5ab  push ebx
    X86_AT(c, 0x8f5abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f5ac  push edx
    X86_AT(c, 0x8f5acu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f5ad  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f5adu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f5b0  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8f5b0u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08f5b3  mov ah, 4
    X86_AT(c, 0x8f5b3u);
    s8(c, 4, 0x4u);
    // 08f5b5  call 0x8fad8
    X86_AT(c, 0x8f5b5u);
    push32(c, 0x8f5bau); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f5bau);
    X86_TICK(c, 27);
    // 08f5ba  movzx eax, al
    X86_AT(c, 0x8f5bau);
    c.r[0] = g8(c, 0);
    // 08f5bd  pop edx
    X86_AT(c, 0x8f5bdu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f5be  pop ebx
    X86_AT(c, 0x8f5beu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f5bf  leave 
    X86_AT(c, 0x8f5bfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f5c0  ret 
    X86_AT(c, 0x8f5c0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f5a7u, "ran off the end of a function");
}
void f_0008f5c1(X86Cpu& c) {
    X86_TICK(c, 33);
    // 08f5c1  enter 0, 0
    X86_AT(c, 0x8f5c1u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f5c5  push ebx
    X86_AT(c, 0x8f5c5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f5c6  push edx
    X86_AT(c, 0x8f5c6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f5c7  push esi
    X86_AT(c, 0x8f5c7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08f5c8  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f5c8u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f5cb  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8f5cbu);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08f5ce  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8f5ceu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08f5d1  mov ah, 5
    X86_AT(c, 0x8f5d1u);
    s8(c, 4, 0x5u);
    // 08f5d3  call 0x8fad8
    X86_AT(c, 0x8f5d3u);
    push32(c, 0x8f5d8u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f5d8u);
    X86_TICK(c, 31);
    // 08f5d8  movzx eax, al
    X86_AT(c, 0x8f5d8u);
    c.r[0] = g8(c, 0);
    // 08f5db  pop esi
    X86_AT(c, 0x8f5dbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08f5dc  pop edx
    X86_AT(c, 0x8f5dcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f5dd  pop ebx
    X86_AT(c, 0x8f5ddu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f5de  leave 
    X86_AT(c, 0x8f5deu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f5df  ret 
    X86_AT(c, 0x8f5dfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f5c1u, "ran off the end of a function");
}
void f_0008f6b1(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08f6b1  enter 0, 0
    X86_AT(c, 0x8f6b1u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f6b5  push ebx
    X86_AT(c, 0x8f6b5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f6b6  push ecx
    X86_AT(c, 0x8f6b6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08f6b7  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f6b7u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f6ba  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8f6bau);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08f6bd  mov ah, 0x15
    X86_AT(c, 0x8f6bdu);
    s8(c, 4, 0x15u);
    // 08f6bf  call 0x8fad8
    X86_AT(c, 0x8f6bfu);
    push32(c, 0x8f6c4u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f6c4u);
    X86_TICK(c, 27);
    // 08f6c4  movzx eax, al
    X86_AT(c, 0x8f6c4u);
    c.r[0] = g8(c, 0);
    // 08f6c7  pop ecx
    X86_AT(c, 0x8f6c7u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 08f6c8  pop ebx
    X86_AT(c, 0x8f6c8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f6c9  leave 
    X86_AT(c, 0x8f6c9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f6ca  ret 
    X86_AT(c, 0x8f6cau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f6b1u, "ran off the end of a function");
}
void f_0008f72f(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08f72f  enter 0, 0
    X86_AT(c, 0x8f72fu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f733  push ebx
    X86_AT(c, 0x8f733u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f734  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f734u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f737  mov ah, 0x21
    X86_AT(c, 0x8f737u);
    s8(c, 4, 0x21u);
    // 08f739  call 0x8fad8
    X86_AT(c, 0x8f739u);
    push32(c, 0x8f73eu); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f73eu);
    X86_TICK(c, 23);
    // 08f73e  movzx eax, al
    X86_AT(c, 0x8f73eu);
    c.r[0] = g8(c, 0);
    // 08f741  pop ebx
    X86_AT(c, 0x8f741u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f742  leave 
    X86_AT(c, 0x8f742u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f743  ret 
    X86_AT(c, 0x8f743u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f72fu, "ran off the end of a function");
}
void f_0008f759(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08f759  enter 0, 0
    X86_AT(c, 0x8f759u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f75d  push edx
    X86_AT(c, 0x8f75du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f75e  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8f75eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f761  mov ah, 0x23
    X86_AT(c, 0x8f761u);
    s8(c, 4, 0x23u);
    // 08f763  call 0x8fad8
    X86_AT(c, 0x8f763u);
    push32(c, 0x8f768u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f768u);
    X86_TICK(c, 23);
    // 08f768  movzx eax, al
    X86_AT(c, 0x8f768u);
    c.r[0] = g8(c, 0);
    // 08f76b  pop edx
    X86_AT(c, 0x8f76bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f76c  leave 
    X86_AT(c, 0x8f76cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f76d  ret 
    X86_AT(c, 0x8f76du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f759u, "ran off the end of a function");
}
void f_0008f82c(X86Cpu& c) {
    X86_TICK(c, 30);
    // 08f82c  enter 0, 0
    X86_AT(c, 0x8f82cu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f830  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8f830u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f833  mov dword ptr [0x89544], eax
    X86_AT(c, 0x8f833u);
    wr32((c.sbase[3] + (uint32_t)(0x89544u)), c.r[0]);
    // 08f838  xor eax, eax
    X86_AT(c, 0x8f838u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f83a  leave 
    X86_AT(c, 0x8f83au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f83b  ret 
    X86_AT(c, 0x8f83bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f82cu, "ran off the end of a function");
}
void f_0008f84c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 08f84c  mov eax, dword ptr [0x89544]
    X86_AT(c, 0x8f84cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89544u)));
    // 08f851  ret 
    X86_AT(c, 0x8f851u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f84cu, "ran off the end of a function");
}
void f_0008f858(X86Cpu& c) {
    X86_TICK(c, 30);
    // 08f858  enter 0, 0
    X86_AT(c, 0x8f858u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f85c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8f85cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f85f  mov dword ptr [0x8954c], eax
    X86_AT(c, 0x8f85fu);
    wr32((c.sbase[3] + (uint32_t)(0x8954Cu)), c.r[0]);
    // 08f864  xor eax, eax
    X86_AT(c, 0x8f864u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f866  leave 
    X86_AT(c, 0x8f866u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f867  ret 
    X86_AT(c, 0x8f867u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f858u, "ran off the end of a function");
}
void f_0008f868(X86Cpu& c) {
    X86_TICK(c, 14);
    // 08f868  mov eax, dword ptr [0x8954c]
    X86_AT(c, 0x8f868u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8954Cu)));
    // 08f86d  ret 
    X86_AT(c, 0x8f86du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f868u, "ran off the end of a function");
}
void f_0008f884(X86Cpu& c) {
    X86_TICK(c, 87);
    // 08f884  push es
    X86_AT(c, 0x8f884u);
    push32(c, c.sreg[0]);
    // 08f885  pushal 
    X86_AT(c, 0x8f885u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08f886  pushfd 
    X86_AT(c, 0x8f886u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 08f887  cli 
    X86_AT(c, 0x8f887u);
    c.fl &= ~X86_IF;
    // 08f888  mov word ptr [0x89557], 0
    X86_AT(c, 0x8f888u);
    wr16((c.sbase[3] + (uint32_t)(0x89557u)), 0x0u);
    // 08f891  mov byte ptr [0x89556], 0
    X86_AT(c, 0x8f891u);
    wr8((c.sbase[3] + (uint32_t)(0x89556u)), 0x0u);
    // 08f898  mov byte ptr [0x89555], 0
    X86_AT(c, 0x8f898u);
    wr8((c.sbase[3] + (uint32_t)(0x89555u)), 0x0u);
    // 08f89f  lea eax, [0x8fafb]
    X86_AT(c, 0x8f89fu);
    c.r[0] = (uint32_t)(0x8FAFBu);
    // 08f8a5  mov dword ptr [0x89544], eax
    X86_AT(c, 0x8f8a5u);
    wr32((c.sbase[3] + (uint32_t)(0x89544u)), c.r[0]);
    // 08f8aa  mov dword ptr [0x8954c], eax
    X86_AT(c, 0x8f8aau);
    wr32((c.sbase[3] + (uint32_t)(0x8954Cu)), c.r[0]);
    // 08f8af  mov dword ptr [0x89548], eax
    X86_AT(c, 0x8f8afu);
    wr32((c.sbase[3] + (uint32_t)(0x89548u)), c.r[0]);
    // 08f8b4  mov dword ptr [0x89550], eax
    X86_AT(c, 0x8f8b4u);
    wr32((c.sbase[3] + (uint32_t)(0x89550u)), c.r[0]);
    // 08f8b9  mov byte ptr [0x89554], 0
    X86_AT(c, 0x8f8b9u);
    wr8((c.sbase[3] + (uint32_t)(0x89554u)), 0x0u);
    // 08f8c0  mov cl, 0x4d
    X86_AT(c, 0x8f8c0u);
    s8(c, 1, 0x4Du);
    // 08f8c2  mov ax, 0x2502
    X86_AT(c, 0x8f8c2u);
    s16(c, 0, 0x2502u);
    // 08f8c6  int 0x21
    X86_AT(c, 0x8f8c6u);
    x86_int(c, 0x21, 0x8f8c8u);
    X86_TICK(c, 5);
    // 08f8c8  jb 0x8f934
    X86_AT(c, 0x8f8c8u);
    if (x86_cc(c, 2)) { goto L_8f934; }
    X86_TICK(c, 47);
    // 08f8ce  mov eax, es
    X86_AT(c, 0x8f8ceu);
    c.r[0] = (uint32_t)c.sreg[0];
    // 08f8d0  mov dword ptr [0x8953a], ebx
    X86_AT(c, 0x8f8d0u);
    wr32((c.sbase[3] + (uint32_t)(0x8953Au)), c.r[3]);
    // 08f8d6  mov word ptr [0x8953e], ax
    X86_AT(c, 0x8f8d6u);
    wr16((c.sbase[3] + (uint32_t)(0x8953Eu)), (c.r[0] & 0xFFFFu));
    // 08f8dc  mov cl, 0x4d
    X86_AT(c, 0x8f8dcu);
    s8(c, 1, 0x4Du);
    // 08f8de  mov ax, 0x2503
    X86_AT(c, 0x8f8deu);
    s16(c, 0, 0x2503u);
    // 08f8e2  int 0x21
    X86_AT(c, 0x8f8e2u);
    x86_int(c, 0x21, 0x8f8e4u);
    X86_TICK(c, 5);
    // 08f8e4  jb 0x8f934
    X86_AT(c, 0x8f8e4u);
    if (x86_cc(c, 2)) { goto L_8f934; }
    X86_TICK(c, 51);
    // 08f8ea  mov dword ptr [0x89540], ebx
    X86_AT(c, 0x8f8eau);
    wr32((c.sbase[3] + (uint32_t)(0x89540u)), c.r[3]);
    // 08f8f0  push ds
    X86_AT(c, 0x8f8f0u);
    push32(c, c.sreg[3]);
    // 08f8f1  mov eax, cs
    X86_AT(c, 0x8f8f1u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 08f8f3  mov ds, eax
    X86_AT(c, 0x8f8f3u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f8f5  mov cl, 0x4d
    X86_AT(c, 0x8f8f5u);
    s8(c, 1, 0x4Du);
    // 08f8f7  lea edx, [0x8f984]
    X86_AT(c, 0x8f8f7u);
    c.r[2] = (uint32_t)(0x8F984u);
    // 08f8fd  mov ax, 0x2506
    X86_AT(c, 0x8f8fdu);
    s16(c, 0, 0x2506u);
    // 08f901  int 0x21
    X86_AT(c, 0x8f901u);
    x86_int(c, 0x21, 0x8f903u);
    X86_TICK(c, 9);
    // 08f903  pop ds
    X86_AT(c, 0x8f903u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 08f904  jb 0x8f934
    X86_AT(c, 0x8f904u);
    if (x86_cc(c, 2)) { goto L_8f934; }
    X86_TICK(c, 11);
    // 08f90a  mov bl, 0
    X86_AT(c, 0x8f90au);
    s8(c, 3, 0x0u);
    // 08f90c  mov ah, 0x15
    X86_AT(c, 0x8f90cu);
    s8(c, 4, 0x15u);
    // 08f90e  call 0x8fad8
    X86_AT(c, 0x8f90eu);
    push32(c, 0x8f913u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f913u);
    X86_TICK(c, 11);
    // 08f913  mov bl, 0
    X86_AT(c, 0x8f913u);
    s8(c, 3, 0x0u);
    // 08f915  mov ah, 0x16
    X86_AT(c, 0x8f915u);
    s8(c, 4, 0x16u);
    // 08f917  call 0x8fad8
    X86_AT(c, 0x8f917u);
    push32(c, 0x8f91cu); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f91cu);
    X86_TICK(c, 19);
    // 08f91c  in al, 0x12
    X86_AT(c, 0x8f91cu);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 08f91e  jmp 0x8f920
    X86_AT(c, 0x8f91eu);
    goto L_8f920;
L_8f920:
    X86_TICK(c, 7);
    // 08f920  jmp 0x8f922
    X86_AT(c, 0x8f920u);
    goto L_8f922;
L_8f922:
    X86_TICK(c, 7);
    // 08f922  jmp 0x8f924
    X86_AT(c, 0x8f922u);
    goto L_8f924;
L_8f924:
    X86_TICK(c, 66);
    // 08f924  mov dl, 0x20
    X86_AT(c, 0x8f924u);
    s8(c, 2, 0x20u);
    // 08f926  xor dl, 0xff
    X86_AT(c, 0x8f926u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ 0xFFu, 1)); }
    // 08f929  and al, dl
    X86_AT(c, 0x8f929u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 08f92b  out 0x12, al
    X86_AT(c, 0x8f92bu);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 08f92d  popfd 
    X86_AT(c, 0x8f92du);
    x86_popfd(c, 4);
    // 08f92e  popal 
    X86_AT(c, 0x8f92eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f92f  pop es
    X86_AT(c, 0x8f92fu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08f930  xor eax, eax
    X86_AT(c, 0x8f930u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f932  clc 
    X86_AT(c, 0x8f932u);
    c.fl &= ~X86_CF;
    // 08f933  ret 
    X86_AT(c, 0x8f933u);
    c.eip = pop32(c); return;
L_8f934:
    X86_TICK(c, 48);
    // 08f934  popfd 
    X86_AT(c, 0x8f934u);
    x86_popfd(c, 4);
    // 08f935  popal 
    X86_AT(c, 0x8f935u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f936  pop es
    X86_AT(c, 0x8f936u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08f937  mov eax, 2
    X86_AT(c, 0x8f937u);
    c.r[0] = 0x2u;
    // 08f93c  stc 
    X86_AT(c, 0x8f93cu);
    c.fl |= X86_CF;
    // 08f93d  ret 
    X86_AT(c, 0x8f93du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f884u, "ran off the end of a function");
}
void f_0008f93e(X86Cpu& c) {
    X86_TICK(c, 37);
    // 08f93e  pushal 
    X86_AT(c, 0x8f93eu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08f93f  pushf 
    X86_AT(c, 0x8f93fu);
    push16(c, c.fl & 0xFFFFu);
    // 08f941  cli 
    X86_AT(c, 0x8f941u);
    c.fl &= ~X86_IF;
    // 08f942  mov bl, 0
    X86_AT(c, 0x8f942u);
    s8(c, 3, 0x0u);
    // 08f944  mov ah, 0x15
    X86_AT(c, 0x8f944u);
    s8(c, 4, 0x15u);
    // 08f946  call 0x8fad8
    X86_AT(c, 0x8f946u);
    push32(c, 0x8f94bu); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f94bu);
    X86_TICK(c, 11);
    // 08f94b  mov bl, 0
    X86_AT(c, 0x8f94bu);
    s8(c, 3, 0x0u);
    // 08f94d  mov ah, 0x16
    X86_AT(c, 0x8f94du);
    s8(c, 4, 0x16u);
    // 08f94f  call 0x8fad8
    X86_AT(c, 0x8f94fu);
    push32(c, 0x8f954u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f954u);
    X86_TICK(c, 19);
    // 08f954  in al, 0x12
    X86_AT(c, 0x8f954u);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 08f956  jmp 0x8f958
    X86_AT(c, 0x8f956u);
    goto L_8f958;
L_8f958:
    X86_TICK(c, 7);
    // 08f958  jmp 0x8f95a
    X86_AT(c, 0x8f958u);
    goto L_8f95a;
L_8f95a:
    X86_TICK(c, 7);
    // 08f95a  jmp 0x8f95c
    X86_AT(c, 0x8f95au);
    goto L_8f95c;
L_8f95c:
    X86_TICK(c, 71);
    // 08f95c  or al, 0x20
    X86_AT(c, 0x8f95cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 08f95e  out 0x12, al
    X86_AT(c, 0x8f95eu);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 08f960  push ds
    X86_AT(c, 0x8f960u);
    push32(c, c.sreg[3]);
    // 08f961  mov cl, 0x4d
    X86_AT(c, 0x8f961u);
    s8(c, 1, 0x4Du);
    // 08f963  mov edx, dword ptr [0x8953a]
    X86_AT(c, 0x8f963u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8953Au)));
    // 08f969  mov ax, word ptr [0x8953e]
    X86_AT(c, 0x8f969u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8953Eu))));
    // 08f96f  mov ebx, dword ptr [0x89540]
    X86_AT(c, 0x8f96fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x89540u)));
    // 08f975  mov ds, eax
    X86_AT(c, 0x8f975u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f977  mov ax, 0x2507
    X86_AT(c, 0x8f977u);
    s16(c, 0, 0x2507u);
    // 08f97b  int 0x21
    X86_AT(c, 0x8f97bu);
    x86_int(c, 0x21, 0x8f97du);
    X86_TICK(c, 46);
    // 08f97d  xor eax, eax
    X86_AT(c, 0x8f97du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f97f  pop ds
    X86_AT(c, 0x8f97fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 08f980  popf 
    X86_AT(c, 0x8f980u);
    x86_popfd(c, 2);
    // 08f982  popal 
    X86_AT(c, 0x8f982u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f983  ret 
    X86_AT(c, 0x8f983u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f93eu, "ran off the end of a function");
}
void f_0008f984(X86Cpu& c) {
    X86_TICK(c, 22);
    // 08f984  push eax
    X86_AT(c, 0x8f984u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08f985  push ds
    X86_AT(c, 0x8f985u);
    push32(c, c.sreg[3]);
    // 08f986  mov ax, 0x14
    X86_AT(c, 0x8f986u);
    s16(c, 0, 0x14u);
    // 08f98a  mov ds, eax
    X86_AT(c, 0x8f98au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f98c  cld 
    X86_AT(c, 0x8f98cu);
    c.fl &= ~X86_DF;
    // 08f98d  cmp word ptr [0x89557], 0
    X86_AT(c, 0x8f98du);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x89557u))), 0x0u, 0, 2);
    // 08f995  jne 0x8f9ab
    X86_AT(c, 0x8f995u);
    if (x86_cc(c, 5)) { goto L_8f9ab; }
    X86_TICK(c, 8);
    // 08f997  mov dword ptr [0x89559], esp
    X86_AT(c, 0x8f997u);
    wr32((c.sbase[3] + (uint32_t)(0x89559u)), c.r[4]);
    // 08f99d  mov word ptr [0x8955d], ss
    X86_AT(c, 0x8f99du);
    wr16((c.sbase[3] + (uint32_t)(0x8955Du)), (uint32_t)c.sreg[2]);
    // 08f9a3  mov ss, eax
    X86_AT(c, 0x8f9a3u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f9a5  lea esp, [0x8995f]
    X86_AT(c, 0x8f9a5u);
    c.r[4] = (uint32_t)(0x8995Fu);
L_8f9ab:
    X86_TICK(c, 57);
    // 08f9ab  inc word ptr [0x89557]
    X86_AT(c, 0x8f9abu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89557u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 08f9b2  sti 
    X86_AT(c, 0x8f9b2u);
    c.fl |= X86_IF;
    // 08f9b3  push es
    X86_AT(c, 0x8f9b3u);
    push32(c, c.sreg[0]);
    // 08f9b4  push fs
    X86_AT(c, 0x8f9b4u);
    push32(c, c.sreg[4]);
    // 08f9b6  push gs
    X86_AT(c, 0x8f9b6u);
    push32(c, c.sreg[5]);
    // 08f9b8  pushal 
    X86_AT(c, 0x8f9b8u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08f9b9  mov es, eax
    X86_AT(c, 0x8f9b9u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f9bb  mov dx, 0x4e9
    X86_AT(c, 0x8f9bbu);
    s16(c, 2, 0x4E9u);
    // 08f9bf  in al, dx
    X86_AT(c, 0x8f9bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 08f9c0  push eax
    X86_AT(c, 0x8f9c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08f9c1  test al, 1
    X86_AT(c, 0x8f9c1u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 08f9c3  je 0x8fa0d
    X86_AT(c, 0x8f9c3u);
    if (x86_cc(c, 4)) { goto L_8fa0d; }
    X86_TICK(c, 9);
    // 08f9c9  mov ah, 0x10
    X86_AT(c, 0x8f9c9u);
    s8(c, 4, 0x10u);
    // 08f9cb  call 0x8fad8
    X86_AT(c, 0x8f9cbu);
    push32(c, 0x8f9d0u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f9d0u);
    X86_TICK(c, 7);
    // 08f9d0  test dl, 1
    X86_AT(c, 0x8f9d0u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 08f9d3  je 0x8f9e4
    X86_AT(c, 0x8f9d3u);
    if (x86_cc(c, 4)) { goto L_8f9e4; }
    X86_TICK(c, 11);
    // 08f9d5  push edx
    X86_AT(c, 0x8f9d5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f9d6  mov ah, 0x17
    X86_AT(c, 0x8f9d6u);
    s8(c, 4, 0x17u);
    // 08f9d8  call 0x8fad8
    X86_AT(c, 0x8f9d8u);
    push32(c, 0x8f9ddu); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f9ddu);
    X86_TICK(c, 7);
    // 08f9dd  call dword ptr [0x89544]
    X86_AT(c, 0x8f9ddu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x89544u))); push32(c, 0x8f9e3u); x86_call(c, t); X86_RET(c, 0x8f9e3u); }
    X86_TICK(c, 4);
    // 08f9e3  pop edx
    X86_AT(c, 0x8f9e3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_8f9e4:
    X86_TICK(c, 7);
    // 08f9e4  test dl, 2
    X86_AT(c, 0x8f9e4u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 08f9e7  je 0x8fa0d
    X86_AT(c, 0x8f9e7u);
    if (x86_cc(c, 4)) { goto L_8fa0d; }
    X86_TICK(c, 11);
    // 08f9e9  push edx
    X86_AT(c, 0x8f9e9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f9ea  mov ah, 0x18
    X86_AT(c, 0x8f9eau);
    s8(c, 4, 0x18u);
    // 08f9ec  call 0x8fad8
    X86_AT(c, 0x8f9ecu);
    push32(c, 0x8f9f1u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f9f1u);
    X86_TICK(c, 11);
    // 08f9f1  mov byte ptr [0x89555], 0xff
    X86_AT(c, 0x8f9f1u);
    wr8((c.sbase[3] + (uint32_t)(0x89555u)), 0xFFu);
    // 08f9f8  mov ah, 0x50
    X86_AT(c, 0x8f9f8u);
    s8(c, 4, 0x50u);
    // 08f9fa  call 0x8fad8
    X86_AT(c, 0x8f9fau);
    push32(c, 0x8f9ffu); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8f9ffu);
    X86_TICK(c, 9);
    // 08f9ff  mov byte ptr [0x89555], 0
    X86_AT(c, 0x8f9ffu);
    wr8((c.sbase[3] + (uint32_t)(0x89555u)), 0x0u);
    // 08fa06  call dword ptr [0x89548]
    X86_AT(c, 0x8fa06u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x89548u))); push32(c, 0x8fa0cu); x86_call(c, t); X86_RET(c, 0x8fa0cu); }
    X86_TICK(c, 4);
    // 08fa0c  pop edx
    X86_AT(c, 0x8fa0cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_8fa0d:
    X86_TICK(c, 11);
    // 08fa0d  pop eax
    X86_AT(c, 0x8fa0du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 08fa0e  test al, 8
    X86_AT(c, 0x8fa0eu);
    (void)x86_logic(c, g8(c, 0) & 0x8u, 1);
    // 08fa10  je 0x8fa29
    X86_AT(c, 0x8fa10u);
    if (x86_cc(c, 4)) { goto L_8fa29; }
    X86_TICK(c, 13);
    // 08fa12  push edx
    X86_AT(c, 0x8fa12u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fa13  mov byte ptr [0x89555], 0xff
    X86_AT(c, 0x8fa13u);
    wr8((c.sbase[3] + (uint32_t)(0x89555u)), 0xFFu);
    // 08fa1a  mov ah, 0x51
    X86_AT(c, 0x8fa1au);
    s8(c, 4, 0x51u);
    // 08fa1c  call 0x8fad8
    X86_AT(c, 0x8fa1cu);
    push32(c, 0x8fa21u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x8fa21u);
    X86_TICK(c, 6);
    // 08fa21  mov byte ptr [0x89555], 0
    X86_AT(c, 0x8fa21u);
    wr8((c.sbase[3] + (uint32_t)(0x89555u)), 0x0u);
    // 08fa28  pop edx
    X86_AT(c, 0x8fa28u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_8fa29:
    X86_TICK(c, 9);
    // 08fa29  cli 
    X86_AT(c, 0x8fa29u);
    c.fl &= ~X86_IF;
    // 08fa2a  call 0x8fa8d
    X86_AT(c, 0x8fa2au);
    push32(c, 0x8fa2fu); x86_call_known(c, 0x8fa8du, f_0008fa8d); X86_RET(c, 0x8fa2fu);
    X86_TICK(c, 12);
    // 08fa2f  cmp byte ptr [0x89556], 0
    X86_AT(c, 0x8fa2fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89556u))), 0x0u, 0, 1);
    // 08fa36  jne 0x8fa68
    X86_AT(c, 0x8fa36u);
    if (x86_cc(c, 5)) { goto L_8fa68; }
    X86_TICK(c, 9);
    // 08fa38  mov byte ptr [0x89556], 0xff
    X86_AT(c, 0x8fa38u);
    wr8((c.sbase[3] + (uint32_t)(0x89556u)), 0xFFu);
    // 08fa3f  test dl, 1
    X86_AT(c, 0x8fa3fu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 08fa42  je 0x8fa4c
    X86_AT(c, 0x8fa42u);
    if (x86_cc(c, 4)) { goto L_8fa4c; }
    X86_TICK(c, 9);
    // 08fa44  push edx
    X86_AT(c, 0x8fa44u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fa45  call dword ptr [0x8954c]
    X86_AT(c, 0x8fa45u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8954Cu))); push32(c, 0x8fa4bu); x86_call(c, t); X86_RET(c, 0x8fa4bu); }
    X86_TICK(c, 4);
    // 08fa4b  pop edx
    X86_AT(c, 0x8fa4bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_8fa4c:
    X86_TICK(c, 7);
    // 08fa4c  test dl, 2
    X86_AT(c, 0x8fa4cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 08fa4f  je 0x8fa60
    X86_AT(c, 0x8fa4fu);
    if (x86_cc(c, 4)) { goto L_8fa60; }
    X86_TICK(c, 12);
    // 08fa51  xor byte ptr [0x89554], 0xff
    X86_AT(c, 0x8fa51u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89554u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0xFFu, 1)); }
    // 08fa58  je 0x8fa60
    X86_AT(c, 0x8fa58u);
    if (x86_cc(c, 4)) { goto L_8fa60; }
    X86_TICK(c, 7);
    // 08fa5a  call dword ptr [0x89550]
    X86_AT(c, 0x8fa5au);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x89550u))); push32(c, 0x8fa60u); x86_call(c, t); X86_RET(c, 0x8fa60u); }
L_8fa60:
    X86_TICK(c, 4);
    // 08fa60  cli 
    X86_AT(c, 0x8fa60u);
    c.fl &= ~X86_IF;
    // 08fa61  mov byte ptr [0x89556], 0
    X86_AT(c, 0x8fa61u);
    wr8((c.sbase[3] + (uint32_t)(0x89556u)), 0x0u);
L_8fa68:
    X86_TICK(c, 49);
    // 08fa68  popal 
    X86_AT(c, 0x8fa68u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08fa69  pop gs
    X86_AT(c, 0x8fa69u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 08fa6b  pop fs
    X86_AT(c, 0x8fa6bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 08fa6d  pop es
    X86_AT(c, 0x8fa6du);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08fa6e  cli 
    X86_AT(c, 0x8fa6eu);
    c.fl &= ~X86_IF;
    // 08fa6f  dec word ptr [0x89557]
    X86_AT(c, 0x8fa6fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89557u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 08fa76  jne 0x8fa84
    X86_AT(c, 0x8fa76u);
    if (x86_cc(c, 5)) { goto L_8fa84; }
    X86_TICK(c, 8);
    // 08fa78  mov esp, dword ptr [0x89559]
    X86_AT(c, 0x8fa78u);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x89559u)));
    // 08fa7e  mov ss, word ptr [0x8955d]
    X86_AT(c, 0x8fa7eu);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x8955Du))) & 0xFFFFu);
L_8fa84:
    X86_TICK(c, 14);
    // 08fa84  pop ds
    X86_AT(c, 0x8fa84u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 08fa85  pop eax
    X86_AT(c, 0x8fa85u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 08fa86  iretd 
    X86_AT(c, 0x8fa86u);
    x86_iret(c, 4); return;
    x86_fault(c, 0x8f984u, "ran off the end of a function");
}
void f_0008fa87(X86Cpu& c) {
    X86_TICK(c, 14);
    // 08fa87  mov al, byte ptr [0x89555]
    X86_AT(c, 0x8fa87u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89555u))));
    // 08fa8c  ret 
    X86_AT(c, 0x8fa8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fa87u, "ran off the end of a function");
}
void f_0008fa8d(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08fa8d  push ax
    X86_AT(c, 0x8fa8du);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 08fa8f  mov al, 0xb
    X86_AT(c, 0x8fa8fu);
    s8(c, 0, 0xBu);
    // 08fa91  out 0, al
    X86_AT(c, 0x8fa91u);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 08fa93  jmp 0x8fa95
    X86_AT(c, 0x8fa93u);
    goto L_8fa95;
L_8fa95:
    X86_TICK(c, 7);
    // 08fa95  jmp 0x8fa97
    X86_AT(c, 0x8fa95u);
    goto L_8fa97;
L_8fa97:
    X86_TICK(c, 7);
    // 08fa97  jmp 0x8fa99
    X86_AT(c, 0x8fa97u);
    goto L_8fa99;
L_8fa99:
    X86_TICK(c, 19);
    // 08fa99  in al, 0
    X86_AT(c, 0x8fa99u);
    s8(c, 0, x86_in(c, 0x0u, 1));
    // 08fa9b  jmp 0x8fa9d
    X86_AT(c, 0x8fa9bu);
    goto L_8fa9d;
L_8fa9d:
    X86_TICK(c, 7);
    // 08fa9d  jmp 0x8fa9f
    X86_AT(c, 0x8fa9du);
    goto L_8fa9f;
L_8fa9f:
    X86_TICK(c, 7);
    // 08fa9f  jmp 0x8faa1
    X86_AT(c, 0x8fa9fu);
    goto L_8faa1;
L_8faa1:
    X86_TICK(c, 7);
    // 08faa1  test al, 0x7f
    X86_AT(c, 0x8faa1u);
    (void)x86_logic(c, g8(c, 0) & 0x7Fu, 1);
    // 08faa3  je 0x8faab
    X86_AT(c, 0x8faa3u);
    if (x86_cc(c, 4)) { goto L_8faab; }
    X86_TICK(c, 21);
    // 08faa5  mov al, 0x20
    X86_AT(c, 0x8faa5u);
    s8(c, 0, 0x20u);
    // 08faa7  out 0, al
    X86_AT(c, 0x8faa7u);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 08faa9  jmp 0x8facf
    X86_AT(c, 0x8faa9u);
    goto L_8facf;
L_8faab:
    X86_TICK(c, 21);
    // 08faab  mov al, 0x20
    X86_AT(c, 0x8faabu);
    s8(c, 0, 0x20u);
    // 08faad  out 0x10, al
    X86_AT(c, 0x8faadu);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 08faaf  jmp 0x8fab1
    X86_AT(c, 0x8faafu);
    goto L_8fab1;
L_8fab1:
    X86_TICK(c, 7);
    // 08fab1  jmp 0x8fab3
    X86_AT(c, 0x8fab1u);
    goto L_8fab3;
L_8fab3:
    X86_TICK(c, 7);
    // 08fab3  jmp 0x8fab5
    X86_AT(c, 0x8fab3u);
    goto L_8fab5;
L_8fab5:
    X86_TICK(c, 21);
    // 08fab5  mov al, 0xb
    X86_AT(c, 0x8fab5u);
    s8(c, 0, 0xBu);
    // 08fab7  out 0x10, al
    X86_AT(c, 0x8fab7u);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 08fab9  jmp 0x8fabb
    X86_AT(c, 0x8fab9u);
    goto L_8fabb;
L_8fabb:
    X86_TICK(c, 7);
    // 08fabb  jmp 0x8fabd
    X86_AT(c, 0x8fabbu);
    goto L_8fabd;
L_8fabd:
    X86_TICK(c, 7);
    // 08fabd  jmp 0x8fabf
    X86_AT(c, 0x8fabdu);
    goto L_8fabf;
L_8fabf:
    X86_TICK(c, 19);
    // 08fabf  in al, 0x10
    X86_AT(c, 0x8fabfu);
    s8(c, 0, x86_in(c, 0x10u, 1));
    // 08fac1  jmp 0x8fac3
    X86_AT(c, 0x8fac1u);
    goto L_8fac3;
L_8fac3:
    X86_TICK(c, 7);
    // 08fac3  jmp 0x8fac5
    X86_AT(c, 0x8fac3u);
    goto L_8fac5;
L_8fac5:
    X86_TICK(c, 7);
    // 08fac5  jmp 0x8fac7
    X86_AT(c, 0x8fac5u);
    goto L_8fac7;
L_8fac7:
    X86_TICK(c, 7);
    // 08fac7  or al, al
    X86_AT(c, 0x8fac7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 08fac9  jne 0x8facf
    X86_AT(c, 0x8fac9u);
    if (x86_cc(c, 5)) { goto L_8facf; }
    X86_TICK(c, 14);
    // 08facb  mov al, 0x20
    X86_AT(c, 0x8facbu);
    s8(c, 0, 0x20u);
    // 08facd  out 0, al
    X86_AT(c, 0x8facdu);
    x86_out(c, 0x0u, 1, g8(c, 0));
L_8facf:
    X86_TICK(c, 7);
    // 08facf  jmp 0x8fad1
    X86_AT(c, 0x8facfu);
    goto L_8fad1;
L_8fad1:
    X86_TICK(c, 7);
    // 08fad1  jmp 0x8fad3
    X86_AT(c, 0x8fad1u);
    goto L_8fad3;
L_8fad3:
    X86_TICK(c, 7);
    // 08fad3  jmp 0x8fad5
    X86_AT(c, 0x8fad3u);
    goto L_8fad5;
L_8fad5:
    X86_TICK(c, 14);
    // 08fad5  pop ax
    X86_AT(c, 0x8fad5u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 08fad7  ret 
    X86_AT(c, 0x8fad7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fa8du, "ran off the end of a function");
}
void f_0008fad8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08fad8  push fs
    X86_AT(c, 0x8fad8u);
    push32(c, c.sreg[4]);
    // 08fada  push gs
    X86_AT(c, 0x8fadau);
    push32(c, c.sreg[5]);
    // 08fadc  push edi
    X86_AT(c, 0x8fadcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08fadd  lgs edi, fword ptr [0x89534]
    X86_AT(c, 0x8faddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89534u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 5, s); c.r[7] = o; }
    // 08fae4  push ax
    X86_AT(c, 0x8fae4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 08fae6  mov ax, 0x110
    X86_AT(c, 0x8fae6u);
    s16(c, 0, 0x110u);
    // 08faea  mov fs, eax
    X86_AT(c, 0x8faeau);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08faec  pop ax
    X86_AT(c, 0x8faecu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 08faee  lcall fword ptr fs:[0x80]
    X86_AT(c, 0x8faeeu);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x8faf5u); }
    X86_RET(c, 0x8faf5u);
    X86_TICK(c, 22);
    // 08faf5  pop edi
    X86_AT(c, 0x8faf5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08faf6  pop gs
    X86_AT(c, 0x8faf6u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 08faf8  pop fs
    X86_AT(c, 0x8faf8u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 08fafa  ret 
    X86_AT(c, 0x8fafau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fad8u, "ran off the end of a function");
}
void f_0008fafb(X86Cpu& c) {
    X86_TICK(c, 10);
    // 08fafb  ret 
    X86_AT(c, 0x8fafbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fafbu, "ran off the end of a function");
}
void f_0008fb5c(X86Cpu& c) {
    X86_TICK(c, 31);
    // 08fb5c  enter 0, 0
    X86_AT(c, 0x8fb5cu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fb60  push ebx
    X86_AT(c, 0x8fb60u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fb61  push edx
    X86_AT(c, 0x8fb61u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fb62  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8fb62u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08fb65  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8fb65u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08fb68  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0x8fb68u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08fb6b  mov ah, 0x43
    X86_AT(c, 0x8fb6bu);
    s8(c, 4, 0x43u);
    // 08fb6d  call 0x8fbf9
    X86_AT(c, 0x8fb6du);
    push32(c, 0x8fb72u); x86_call_known(c, 0x8fbf9u, f_0008fbf9); X86_RET(c, 0x8fb72u);
    X86_TICK(c, 27);
    // 08fb72  movzx eax, al
    X86_AT(c, 0x8fb72u);
    c.r[0] = g8(c, 0);
    // 08fb75  pop edx
    X86_AT(c, 0x8fb75u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fb76  pop ebx
    X86_AT(c, 0x8fb76u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fb77  leave 
    X86_AT(c, 0x8fb77u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fb78  ret 
    X86_AT(c, 0x8fb78u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fb5cu, "ran off the end of a function");
}
void f_0008fb79(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08fb79  mov ah, 0x44
    X86_AT(c, 0x8fb79u);
    s8(c, 4, 0x44u);
    // 08fb7b  call 0x8fbf9
    X86_AT(c, 0x8fb7bu);
    push32(c, 0x8fb80u); x86_call_known(c, 0x8fbf9u, f_0008fbf9); X86_RET(c, 0x8fb80u);
    X86_TICK(c, 13);
    // 08fb80  movzx eax, al
    X86_AT(c, 0x8fb80u);
    c.r[0] = g8(c, 0);
    // 08fb83  ret 
    X86_AT(c, 0x8fb83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fb79u, "ran off the end of a function");
}
void f_0008fbad(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08fbad  enter 0, 0
    X86_AT(c, 0x8fbadu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fbb1  push ebx
    X86_AT(c, 0x8fbb1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fbb2  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8fbb2u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08fbb5  mov ah, 0x46
    X86_AT(c, 0x8fbb5u);
    s8(c, 4, 0x46u);
    // 08fbb7  call 0x8fbf9
    X86_AT(c, 0x8fbb7u);
    push32(c, 0x8fbbcu); x86_call_known(c, 0x8fbf9u, f_0008fbf9); X86_RET(c, 0x8fbbcu);
    X86_TICK(c, 23);
    // 08fbbc  movzx eax, al
    X86_AT(c, 0x8fbbcu);
    c.r[0] = g8(c, 0);
    // 08fbbf  pop ebx
    X86_AT(c, 0x8fbbfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fbc0  leave 
    X86_AT(c, 0x8fbc0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fbc1  ret 
    X86_AT(c, 0x8fbc1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fbadu, "ran off the end of a function");
}
void f_0008fbe4(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08fbe4  enter 0, 0
    X86_AT(c, 0x8fbe4u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fbe8  push edx
    X86_AT(c, 0x8fbe8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fbe9  mov dl, byte ptr [ebp + 8]
    X86_AT(c, 0x8fbe9u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08fbec  mov ah, 0x49
    X86_AT(c, 0x8fbecu);
    s8(c, 4, 0x49u);
    // 08fbee  call 0x8fbf9
    X86_AT(c, 0x8fbeeu);
    push32(c, 0x8fbf3u); x86_call_known(c, 0x8fbf9u, f_0008fbf9); X86_RET(c, 0x8fbf3u);
    X86_TICK(c, 23);
    // 08fbf3  movzx eax, al
    X86_AT(c, 0x8fbf3u);
    c.r[0] = g8(c, 0);
    // 08fbf6  pop edx
    X86_AT(c, 0x8fbf6u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fbf7  leave 
    X86_AT(c, 0x8fbf7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fbf8  ret 
    X86_AT(c, 0x8fbf8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fbe4u, "ran off the end of a function");
}
void f_0008fbf9(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08fbf9  push fs
    X86_AT(c, 0x8fbf9u);
    push32(c, c.sreg[4]);
    // 08fbfb  push ax
    X86_AT(c, 0x8fbfbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 08fbfd  mov ax, 0x110
    X86_AT(c, 0x8fbfdu);
    s16(c, 0, 0x110u);
    // 08fc01  mov fs, eax
    X86_AT(c, 0x8fc01u);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08fc03  pop ax
    X86_AT(c, 0x8fc03u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 08fc05  lcall fword ptr fs:[0x80]
    X86_AT(c, 0x8fc05u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x8fc0cu); }
    X86_RET(c, 0x8fc0cu);
    X86_TICK(c, 14);
    // 08fc0c  pop fs
    X86_AT(c, 0x8fc0cu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 08fc0e  ret 
    X86_AT(c, 0x8fc0eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fbf9u, "ran off the end of a function");
}
void f_0008fc59(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08fc59  mov ah, 0
    X86_AT(c, 0x8fc59u);
    s8(c, 4, 0x0u);
    // 08fc5b  call 0x8fe58
    X86_AT(c, 0x8fc5bu);
    push32(c, 0x8fc60u); x86_call_known(c, 0x8fe58u, f_0008fe58); X86_RET(c, 0x8fc60u);
    X86_TICK(c, 13);
    // 08fc60  movzx eax, al
    X86_AT(c, 0x8fc60u);
    c.r[0] = g8(c, 0);
    // 08fc63  ret 
    X86_AT(c, 0x8fc63u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fc59u, "ran off the end of a function");
}
void f_0008fc6f(X86Cpu& c) {
    X86_TICK(c, 33);
    // 08fc6f  enter 0, 0
    X86_AT(c, 0x8fc6fu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fc73  push esi
    X86_AT(c, 0x8fc73u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08fc74  push ecx
    X86_AT(c, 0x8fc74u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08fc75  push edx
    X86_AT(c, 0x8fc75u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fc76  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x8fc76u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fc79  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fc79u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fc7c  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0x8fc7cu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08fc7f  mov ah, 2
    X86_AT(c, 0x8fc7fu);
    s8(c, 4, 0x2u);
    // 08fc81  call 0x8fe58
    X86_AT(c, 0x8fc81u);
    push32(c, 0x8fc86u); x86_call_known(c, 0x8fe58u, f_0008fe58); X86_RET(c, 0x8fc86u);
    X86_TICK(c, 31);
    // 08fc86  movzx eax, al
    X86_AT(c, 0x8fc86u);
    c.r[0] = g8(c, 0);
    // 08fc89  pop edx
    X86_AT(c, 0x8fc89u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fc8a  pop ecx
    X86_AT(c, 0x8fc8au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 08fc8b  pop esi
    X86_AT(c, 0x8fc8bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08fc8c  leave 
    X86_AT(c, 0x8fc8cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fc8d  ret 
    X86_AT(c, 0x8fc8du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fc6fu, "ran off the end of a function");
}
void f_0008fc8e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08fc8e  mov ah, 3
    X86_AT(c, 0x8fc8eu);
    s8(c, 4, 0x3u);
    // 08fc90  call 0x8fe58
    X86_AT(c, 0x8fc90u);
    push32(c, 0x8fc95u); x86_call_known(c, 0x8fe58u, f_0008fe58); X86_RET(c, 0x8fc95u);
    X86_TICK(c, 13);
    // 08fc95  movzx eax, al
    X86_AT(c, 0x8fc95u);
    c.r[0] = g8(c, 0);
    // 08fc98  ret 
    X86_AT(c, 0x8fc98u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fc8eu, "ran off the end of a function");
}
void f_0008fca4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08fca4  mov ah, 5
    X86_AT(c, 0x8fca4u);
    s8(c, 4, 0x5u);
    // 08fca6  call 0x8fe58
    X86_AT(c, 0x8fca6u);
    push32(c, 0x8fcabu); x86_call_known(c, 0x8fe58u, f_0008fe58); X86_RET(c, 0x8fcabu);
    X86_TICK(c, 13);
    // 08fcab  movzx eax, al
    X86_AT(c, 0x8fcabu);
    c.r[0] = g8(c, 0);
    // 08fcae  ret 
    X86_AT(c, 0x8fcaeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fca4u, "ran off the end of a function");
}
void f_0008fcaf(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08fcaf  push es
    X86_AT(c, 0x8fcafu);
    push32(c, c.sreg[0]);
    // 08fcb0  push esi
    X86_AT(c, 0x8fcb0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08fcb1  push ebx
    X86_AT(c, 0x8fcb1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fcb2  push ecx
    X86_AT(c, 0x8fcb2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08fcb3  push edx
    X86_AT(c, 0x8fcb3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fcb4  mov ah, 6
    X86_AT(c, 0x8fcb4u);
    s8(c, 4, 0x6u);
    // 08fcb6  call 0x8fe58
    X86_AT(c, 0x8fcb6u);
    push32(c, 0x8fcbbu); x86_call_known(c, 0x8fe58u, f_0008fe58); X86_RET(c, 0x8fcbbu);
    X86_TICK(c, 32);
    // 08fcbb  mov eax, esi
    X86_AT(c, 0x8fcbbu);
    c.r[0] = c.r[6];
    // 08fcbd  pop edx
    X86_AT(c, 0x8fcbdu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fcbe  pop ecx
    X86_AT(c, 0x8fcbeu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 08fcbf  pop ebx
    X86_AT(c, 0x8fcbfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fcc0  pop esi
    X86_AT(c, 0x8fcc0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08fcc1  pop es
    X86_AT(c, 0x8fcc1u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08fcc2  ret 
    X86_AT(c, 0x8fcc2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fcafu, "ran off the end of a function");
}
void f_0008fd4b(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08fd4b  enter 0, 0
    X86_AT(c, 0x8fd4bu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fd4f  push edx
    X86_AT(c, 0x8fd4fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fd50  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fd50u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fd53  cmp dl, 0
    X86_AT(c, 0x8fd53u);
    (void)x86_sub(c, g8(c, 2), 0x0u, 0, 1);
    // 08fd56  je 0x8fd5a
    X86_AT(c, 0x8fd56u);
    if (x86_cc(c, 4)) { goto L_8fd5a; }
    X86_TICK(c, 2);
    // 08fd58  mov dl, 0xff
    X86_AT(c, 0x8fd58u);
    s8(c, 2, 0xFFu);
L_8fd5a:
    X86_TICK(c, 9);
    // 08fd5a  mov ah, 8
    X86_AT(c, 0x8fd5au);
    s8(c, 4, 0x8u);
    // 08fd5c  call 0x8fe58
    X86_AT(c, 0x8fd5cu);
    push32(c, 0x8fd61u); x86_call_known(c, 0x8fe58u, f_0008fe58); X86_RET(c, 0x8fd61u);
    X86_TICK(c, 23);
    // 08fd61  movzx eax, al
    X86_AT(c, 0x8fd61u);
    c.r[0] = g8(c, 0);
    // 08fd64  pop edx
    X86_AT(c, 0x8fd64u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fd65  leave 
    X86_AT(c, 0x8fd65u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fd66  ret 
    X86_AT(c, 0x8fd66u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fd4bu, "ran off the end of a function");
}
void f_0008fd67(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08fd67  enter 0, 0
    X86_AT(c, 0x8fd67u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fd6b  push edx
    X86_AT(c, 0x8fd6bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fd6c  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fd6cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fd6f  mov ah, 9
    X86_AT(c, 0x8fd6fu);
    s8(c, 4, 0x9u);
    // 08fd71  call 0x8fe58
    X86_AT(c, 0x8fd71u);
    push32(c, 0x8fd76u); x86_call_known(c, 0x8fe58u, f_0008fe58); X86_RET(c, 0x8fd76u);
    X86_TICK(c, 23);
    // 08fd76  movzx eax, al
    X86_AT(c, 0x8fd76u);
    c.r[0] = g8(c, 0);
    // 08fd79  pop edx
    X86_AT(c, 0x8fd79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fd7a  leave 
    X86_AT(c, 0x8fd7au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fd7b  ret 
    X86_AT(c, 0x8fd7bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fd67u, "ran off the end of a function");
}
void f_0008fd7c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fd7c  enter 0, 0
    X86_AT(c, 0x8fd7cu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fd80  push ebx
    X86_AT(c, 0x8fd80u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fd81  push edx
    X86_AT(c, 0x8fd81u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fd82  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fd82u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fd85  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fd85u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fd88  mov ah, 0x10
    X86_AT(c, 0x8fd88u);
    s8(c, 4, 0x10u);
    // 08fd8a  call 0x8fe58
    X86_AT(c, 0x8fd8au);
    push32(c, 0x8fd8fu); x86_call_known(c, 0x8fe58u, f_0008fe58); X86_RET(c, 0x8fd8fu);
    X86_TICK(c, 27);
    // 08fd8f  movzx eax, al
    X86_AT(c, 0x8fd8fu);
    c.r[0] = g8(c, 0);
    // 08fd92  pop edx
    X86_AT(c, 0x8fd92u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fd93  pop ebx
    X86_AT(c, 0x8fd93u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fd94  leave 
    X86_AT(c, 0x8fd94u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fd95  ret 
    X86_AT(c, 0x8fd95u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fd7cu, "ran off the end of a function");
}
void f_0008fd96(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fd96  enter 0, 0
    X86_AT(c, 0x8fd96u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fd9a  push ebx
    X86_AT(c, 0x8fd9au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fd9b  push edx
    X86_AT(c, 0x8fd9bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fd9c  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fd9cu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fd9f  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fd9fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fda2  mov ah, 0x11
    X86_AT(c, 0x8fda2u);
    s8(c, 4, 0x11u);
    // 08fda4  call 0x8fe58
    X86_AT(c, 0x8fda4u);
    push32(c, 0x8fda9u); x86_call_known(c, 0x8fe58u, f_0008fe58); X86_RET(c, 0x8fda9u);
    X86_TICK(c, 27);
    // 08fda9  movzx eax, al
    X86_AT(c, 0x8fda9u);
    c.r[0] = g8(c, 0);
    // 08fdac  pop edx
    X86_AT(c, 0x8fdacu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fdad  pop ebx
    X86_AT(c, 0x8fdadu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fdae  leave 
    X86_AT(c, 0x8fdaeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fdaf  ret 
    X86_AT(c, 0x8fdafu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fd96u, "ran off the end of a function");
}
void f_0008fdb0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fdb0  enter 0, 0
    X86_AT(c, 0x8fdb0u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fdb4  push ebx
    X86_AT(c, 0x8fdb4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fdb5  push edx
    X86_AT(c, 0x8fdb5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fdb6  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fdb6u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fdb9  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fdb9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fdbc  mov ah, 0x12
    X86_AT(c, 0x8fdbcu);
    s8(c, 4, 0x12u);
    // 08fdbe  call 0x8fe58
    X86_AT(c, 0x8fdbeu);
    push32(c, 0x8fdc3u); x86_call_known(c, 0x8fe58u, f_0008fe58); X86_RET(c, 0x8fdc3u);
    X86_TICK(c, 27);
    // 08fdc3  movzx eax, al
    X86_AT(c, 0x8fdc3u);
    c.r[0] = g8(c, 0);
    // 08fdc6  pop edx
    X86_AT(c, 0x8fdc6u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fdc7  pop ebx
    X86_AT(c, 0x8fdc7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fdc8  leave 
    X86_AT(c, 0x8fdc8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fdc9  ret 
    X86_AT(c, 0x8fdc9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fdb0u, "ran off the end of a function");
}
void f_0008fdca(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fdca  enter 0, 0
    X86_AT(c, 0x8fdcau);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fdce  push ebx
    X86_AT(c, 0x8fdceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fdcf  push edx
    X86_AT(c, 0x8fdcfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fdd0  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fdd0u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fdd3  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fdd3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fdd6  mov ah, 0x13
    X86_AT(c, 0x8fdd6u);
    s8(c, 4, 0x13u);
    // 08fdd8  call 0x8fe58
    X86_AT(c, 0x8fdd8u);
    push32(c, 0x8fdddu); x86_call_known(c, 0x8fe58u, f_0008fe58); X86_RET(c, 0x8fdddu);
    X86_TICK(c, 27);
    // 08fddd  movzx eax, al
    X86_AT(c, 0x8fdddu);
    c.r[0] = g8(c, 0);
    // 08fde0  pop edx
    X86_AT(c, 0x8fde0u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fde1  pop ebx
    X86_AT(c, 0x8fde1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fde2  leave 
    X86_AT(c, 0x8fde2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fde3  ret 
    X86_AT(c, 0x8fde3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fdcau, "ran off the end of a function");
}
void f_0008fde4(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fde4  enter 0, 0
    X86_AT(c, 0x8fde4u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fde8  push ebx
    X86_AT(c, 0x8fde8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fde9  push edx
    X86_AT(c, 0x8fde9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fdea  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fdeau);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fded  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fdedu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fdf0  mov ah, 0x14
    X86_AT(c, 0x8fdf0u);
    s8(c, 4, 0x14u);
    // 08fdf2  call 0x8fe58
    X86_AT(c, 0x8fdf2u);
    push32(c, 0x8fdf7u); x86_call_known(c, 0x8fe58u, f_0008fe58); X86_RET(c, 0x8fdf7u);
    X86_TICK(c, 27);
    // 08fdf7  movzx eax, al
    X86_AT(c, 0x8fdf7u);
    c.r[0] = g8(c, 0);
    // 08fdfa  pop edx
    X86_AT(c, 0x8fdfau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fdfb  pop ebx
    X86_AT(c, 0x8fdfbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fdfc  leave 
    X86_AT(c, 0x8fdfcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fdfd  ret 
    X86_AT(c, 0x8fdfdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fde4u, "ran off the end of a function");
}
void f_0008fdfe(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fdfe  enter 0, 0
    X86_AT(c, 0x8fdfeu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fe02  push ebx
    X86_AT(c, 0x8fe02u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fe03  push edx
    X86_AT(c, 0x8fe03u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fe04  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fe04u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fe07  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fe07u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fe0a  mov ah, 0x20
    X86_AT(c, 0x8fe0au);
    s8(c, 4, 0x20u);
    // 08fe0c  call 0x8fe58
    X86_AT(c, 0x8fe0cu);
    push32(c, 0x8fe11u); x86_call_known(c, 0x8fe58u, f_0008fe58); X86_RET(c, 0x8fe11u);
    X86_TICK(c, 27);
    // 08fe11  movzx eax, al
    X86_AT(c, 0x8fe11u);
    c.r[0] = g8(c, 0);
    // 08fe14  pop edx
    X86_AT(c, 0x8fe14u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fe15  pop ebx
    X86_AT(c, 0x8fe15u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fe16  leave 
    X86_AT(c, 0x8fe16u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fe17  ret 
    X86_AT(c, 0x8fe17u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fdfeu, "ran off the end of a function");
}
void f_0008fe58(X86Cpu& c) {
    X86_TICK(c, 44);
    // 08fe58  push gs
    X86_AT(c, 0x8fe58u);
    push32(c, c.sreg[5]);
    // 08fe5a  push fs
    X86_AT(c, 0x8fe5au);
    push32(c, c.sreg[4]);
    // 08fe5c  push es
    X86_AT(c, 0x8fe5cu);
    push32(c, c.sreg[0]);
    // 08fe5d  push ds
    X86_AT(c, 0x8fe5du);
    push32(c, c.sreg[3]);
    // 08fe5e  pushal 
    X86_AT(c, 0x8fe5eu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08fe5f  pushfd 
    X86_AT(c, 0x8fe5fu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 08fe60  mov ebp, esp
    X86_AT(c, 0x8fe60u);
    c.r[5] = c.r[4];
    // 08fe62  movzx ebx, ah
    X86_AT(c, 0x8fe62u);
    c.r[3] = g8(c, 4);
    // 08fe65  call dword ptr cs:[ebx*4 + 0x8fe76]
    X86_AT(c, 0x8fe65u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x8FE76u))); push32(c, 0x8fe6du);
      switch (t) {
      case 0x8ff22u: x86_call_known(c, 0x8ff22u, f_0008ff22); break;
      case 0x8ff27u: x86_call_known(c, 0x8ff27u, f_0008ff27); break;
      case 0x8ff97u: x86_call_known(c, 0x8ff97u, f_0008ff97); break;
      case 0x8ffd5u: x86_call_known(c, 0x8ffd5u, f_0008ffd5); break;
      case 0x90055u: x86_call_known(c, 0x90055u, f_00090055); break;
      case 0x9006au: x86_call_known(c, 0x9006au, f_0009006a); break;
      case 0x9007eu: x86_call_known(c, 0x9007eu, f_0009007e); break;
      case 0x9008du: x86_call_known(c, 0x9008du, f_0009008d); break;
      case 0x900d5u: x86_call_known(c, 0x900d5u, f_000900d5); break;
      case 0x900f1u: x86_call_known(c, 0x900f1u, f_000900f1); break;
      case 0x9010du: x86_call_known(c, 0x9010du, f_0009010d); break;
      case 0x90133u: x86_call_known(c, 0x90133u, f_00090133); break;
      case 0x9014fu: x86_call_known(c, 0x9014fu, f_0009014f); break;
      case 0x90196u: x86_call_known(c, 0x90196u, f_00090196); break;
      case 0x901bcu: x86_call_known(c, 0x901bcu, f_000901bc); break;
      case 0x901e2u: x86_call_known(c, 0x901e2u, f_000901e2); break;
      case 0x90208u: x86_call_known(c, 0x90208u, f_00090208); break;
      case 0x9022eu: x86_call_known(c, 0x9022eu, f_0009022e); break;
      case 0x90254u: x86_call_known(c, 0x90254u, f_00090254); break;
      case 0x90263u: x86_call_known(c, 0x90263u, f_00090263); break;
      case 0x9029fu: x86_call_known(c, 0x9029fu, f_0009029f); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x8fe6du); }
    X86_TICK(c, 56);
    // 08fe6d  popfd 
    X86_AT(c, 0x8fe6du);
    x86_popfd(c, 4);
    // 08fe6e  popal 
    X86_AT(c, 0x8fe6eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08fe6f  pop ds
    X86_AT(c, 0x8fe6fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 08fe70  pop es
    X86_AT(c, 0x8fe70u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08fe71  pop fs
    X86_AT(c, 0x8fe71u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 08fe73  pop gs
    X86_AT(c, 0x8fe73u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 08fe75  ret 
    X86_AT(c, 0x8fe75u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fe58u, "ran off the end of a function");
}
void f_0008ff22(X86Cpu& c) {
    X86_TICK(c, 12);
    // 08ff22  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0x8ff22u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 08ff26  ret 
    X86_AT(c, 0x8ff26u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ff22u, "ran off the end of a function");
}
void f_0008ff27(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08ff27  pushfd 
    X86_AT(c, 0x8ff27u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 08ff28  cld 
    X86_AT(c, 0x8ff28u);
    c.fl &= ~X86_DF;
    // 08ff29  cli 
    X86_AT(c, 0x8ff29u);
    c.fl &= ~X86_IF;
    // 08ff2a  call 0x91890
    X86_AT(c, 0x8ff2au);
    push32(c, 0x8ff2fu); x86_call_known(c, 0x91890u, f_00091890); X86_RET(c, 0x8ff2fu);
    X86_TICK(c, 7);
    // 08ff2f  call 0x911cc
    X86_AT(c, 0x8ff2fu);
    push32(c, 0x8ff34u); x86_call_known(c, 0x911ccu, f_000911cc); X86_RET(c, 0x8ff34u);
    X86_TICK(c, 7);
    // 08ff34  call 0x91253
    X86_AT(c, 0x8ff34u);
    push32(c, 0x8ff39u); x86_call_known(c, 0x91253u, f_00091253); X86_RET(c, 0x8ff39u);
    X86_TICK(c, 7);
    // 08ff39  call 0x912a7
    X86_AT(c, 0x8ff39u);
    push32(c, 0x8ff3eu); x86_call_known(c, 0x912a7u, f_000912a7); X86_RET(c, 0x8ff3eu);
    X86_TICK(c, 7);
    // 08ff3e  call 0x904d8
    X86_AT(c, 0x8ff3eu);
    push32(c, 0x8ff43u); x86_call_known(c, 0x904d8u, f_000904d8); X86_RET(c, 0x8ff43u);
    X86_TICK(c, 7);
    // 08ff43  call 0x903b2
    X86_AT(c, 0x8ff43u);
    push32(c, 0x8ff48u); x86_call_known(c, 0x903b2u, f_000903b2); X86_RET(c, 0x8ff48u);
    X86_TICK(c, 7);
    // 08ff48  call 0x90412
    X86_AT(c, 0x8ff48u);
    push32(c, 0x8ff4du); x86_call_known(c, 0x90412u, f_00090412); X86_RET(c, 0x8ff4du);
    X86_TICK(c, 7);
    // 08ff4d  call 0x90433
    X86_AT(c, 0x8ff4du);
    push32(c, 0x8ff52u); x86_call_known(c, 0x90433u, f_00090433); X86_RET(c, 0x8ff52u);
    X86_TICK(c, 7);
    // 08ff52  call 0x90493
    X86_AT(c, 0x8ff52u);
    push32(c, 0x8ff57u); x86_call_known(c, 0x90493u, f_00090493); X86_RET(c, 0x8ff57u);
    X86_TICK(c, 7);
    // 08ff57  call 0x90fe2
    X86_AT(c, 0x8ff57u);
    push32(c, 0x8ff5cu); x86_call_known(c, 0x90fe2u, f_00090fe2); X86_RET(c, 0x8ff5cu);
    X86_TICK(c, 5);
    // 08ff5c  jb 0x8ff92
    X86_AT(c, 0x8ff5cu);
    if (x86_cc(c, 2)) { goto L_8ff92; }
    X86_TICK(c, 12);
    // 08ff5e  cmp byte ptr [0x89bc9], 0
    X86_AT(c, 0x8ff5eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89BC9u))), 0x0u, 0, 1);
    // 08ff65  jne 0x8ff78
    X86_AT(c, 0x8ff65u);
    if (x86_cc(c, 5)) { goto L_8ff78; }
    X86_TICK(c, 7);
    // 08ff67  call 0x910ee
    X86_AT(c, 0x8ff67u);
    push32(c, 0x8ff6cu); x86_call_known(c, 0x910eeu, f_000910ee); X86_RET(c, 0x8ff6cu);
    X86_TICK(c, 11);
    // 08ff6c  mov al, byte ptr [0x89985]
    X86_AT(c, 0x8ff6cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89985u))));
    // 08ff71  call 0x9146f
    X86_AT(c, 0x8ff71u);
    push32(c, 0x8ff76u); x86_call_known(c, 0x9146fu, f_0009146f); X86_RET(c, 0x8ff76u);
    X86_TICK(c, 7);
    // 08ff76  jmp 0x8ff8c
    X86_AT(c, 0x8ff76u);
    goto L_8ff8c;
L_8ff78:
    X86_TICK(c, 7);
    // 08ff78  call 0x91072
    X86_AT(c, 0x8ff78u);
    push32(c, 0x8ff7du); x86_call_known(c, 0x91072u, f_00091072); X86_RET(c, 0x8ff7du);
    X86_TICK(c, 11);
    // 08ff7d  mov al, byte ptr [0x89985]
    X86_AT(c, 0x8ff7du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89985u))));
    // 08ff82  call 0x9146f
    X86_AT(c, 0x8ff82u);
    push32(c, 0x8ff87u); x86_call_known(c, 0x9146fu, f_0009146f); X86_RET(c, 0x8ff87u);
    X86_TICK(c, 7);
    // 08ff87  call 0x91393
    X86_AT(c, 0x8ff87u);
    push32(c, 0x8ff8cu); x86_call_known(c, 0x91393u, f_00091393); X86_RET(c, 0x8ff8cu);
L_8ff8c:
    X86_TICK(c, 18);
    // 08ff8c  popfd 
    X86_AT(c, 0x8ff8cu);
    x86_popfd(c, 4);
    // 08ff8d  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8ff8du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08ff91  ret 
    X86_AT(c, 0x8ff91u);
    c.eip = pop32(c); return;
L_8ff92:
    X86_TICK(c, 12);
    // 08ff92  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0x8ff92u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 08ff96  ret 
    X86_AT(c, 0x8ff96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ff27u, "ran off the end of a function");
}
void f_0008ff97(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08ff97  push ds
    X86_AT(c, 0x8ff97u);
    push32(c, c.sreg[3]);
    // 08ff98  pop es
    X86_AT(c, 0x8ff98u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08ff99  call 0x902bd
    X86_AT(c, 0x8ff99u);
    push32(c, 0x8ff9eu); x86_call_known(c, 0x902bdu, f_000902bd); X86_RET(c, 0x8ff9eu);
L_8ff9e:
    X86_TICK(c, 19);
    // 08ff9e  lea esi, [0x89bf5]
    X86_AT(c, 0x8ff9eu);
    c.r[6] = (uint32_t)(0x89BF5u);
    // 08ffa4  mov ax, word ptr [esi + 0x10]
    X86_AT(c, 0x8ffa4u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u))));
    // 08ffa8  add ax, word ptr [esi + 0x30]
    X86_AT(c, 0x8ffa8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x30u))), 0, 2)); }
    // 08ffac  or ax, ax
    X86_AT(c, 0x8ffacu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 08ffaf  jne 0x8ff9e
    X86_AT(c, 0x8ffafu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8ff9eu); goto L_8ff9e; }
    X86_TICK(c, 7);
    // 08ffb1  call 0x91373
    X86_AT(c, 0x8ffb1u);
    push32(c, 0x8ffb6u); x86_call_known(c, 0x91373u, f_00091373); X86_RET(c, 0x8ffb6u);
    X86_TICK(c, 7);
    // 08ffb6  call 0x91128
    X86_AT(c, 0x8ffb6u);
    push32(c, 0x8ffbbu); x86_call_known(c, 0x91128u, f_00091128); X86_RET(c, 0x8ffbbu);
    X86_TICK(c, 12);
    // 08ffbb  cmp byte ptr [0x89bc9], 0
    X86_AT(c, 0x8ffbbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89BC9u))), 0x0u, 0, 1);
    // 08ffc2  jne 0x8ffcb
    X86_AT(c, 0x8ffc2u);
    if (x86_cc(c, 5)) { goto L_8ffcb; }
    X86_TICK(c, 7);
    // 08ffc4  call 0x911a3
    X86_AT(c, 0x8ffc4u);
    push32(c, 0x8ffc9u); x86_call_known(c, 0x911a3u, f_000911a3); X86_RET(c, 0x8ffc9u);
    X86_TICK(c, 7);
    // 08ffc9  jmp 0x8ffd0
    X86_AT(c, 0x8ffc9u);
    goto L_8ffd0;
L_8ffcb:
    X86_TICK(c, 7);
    // 08ffcb  call 0x91164
    X86_AT(c, 0x8ffcbu);
    push32(c, 0x8ffd0u); x86_call_known(c, 0x91164u, f_00091164); X86_RET(c, 0x8ffd0u);
L_8ffd0:
    X86_TICK(c, 12);
    // 08ffd0  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8ffd0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08ffd4  ret 
    X86_AT(c, 0x8ffd4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ff97u, "ran off the end of a function");
}
void f_0008ffd5(X86Cpu& c) {
    X86_TICK(c, 12);
    // 08ffd5  cmp byte ptr [0x89986], 0
    X86_AT(c, 0x8ffd5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89986u))), 0x0u, 0, 1);
    // 08ffdc  jne 0x90050
    X86_AT(c, 0x8ffdcu);
    if (x86_cc(c, 5)) { goto L_90050; }
    X86_TICK(c, 47);
    // 08ffde  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8ffdeu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08ffe1  mov byte ptr [0x89984], dl
    X86_AT(c, 0x8ffe1u);
    wr8((c.sbase[3] + (uint32_t)(0x89984u)), g8(c, 2));
    // 08ffe7  mov byte ptr [0x89978], dl
    X86_AT(c, 0x8ffe7u);
    wr8((c.sbase[3] + (uint32_t)(0x89978u)), g8(c, 2));
    // 08ffed  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x8ffedu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fff0  mov ax, word ptr [ebp + 0x24]
    X86_AT(c, 0x8fff0u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 08fff4  mov dword ptr [0x89961], esi
    X86_AT(c, 0x8fff4u);
    wr32((c.sbase[3] + (uint32_t)(0x89961u)), c.r[6]);
    // 08fffa  mov word ptr [0x89965], ax
    X86_AT(c, 0x8fffau);
    wr16((c.sbase[3] + (uint32_t)(0x89965u)), (c.r[0] & 0xFFFFu));
    // 090000  mov dword ptr [0x89967], esi
    X86_AT(c, 0x90000u);
    wr32((c.sbase[3] + (uint32_t)(0x89967u)), c.r[6]);
    // 090006  mov word ptr [0x8996b], ax
    X86_AT(c, 0x90006u);
    wr16((c.sbase[3] + (uint32_t)(0x8996Bu)), (c.r[0] & 0xFFFFu));
    // 09000c  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x9000cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 09000f  add ecx, esi
    X86_AT(c, 0x9000fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 090011  mov dword ptr [0x8996d], ecx
    X86_AT(c, 0x90011u);
    wr32((c.sbase[3] + (uint32_t)(0x8996Du)), c.r[1]);
    // 090017  mov word ptr [0x89971], ax
    X86_AT(c, 0x90017u);
    wr16((c.sbase[3] + (uint32_t)(0x89971u)), (c.r[0] & 0xFFFFu));
    // 09001d  mov word ptr [0x89982], 0
    X86_AT(c, 0x9001du);
    wr16((c.sbase[3] + (uint32_t)(0x89982u)), 0x0u);
    // 090026  mov word ptr [0x89973], 0
    X86_AT(c, 0x90026u);
    wr16((c.sbase[3] + (uint32_t)(0x89973u)), 0x0u);
    // 09002f  mov word ptr [0x89975], 0
    X86_AT(c, 0x9002fu);
    wr16((c.sbase[3] + (uint32_t)(0x89975u)), 0x0u);
    // 090038  call 0x90399
    X86_AT(c, 0x90038u);
    push32(c, 0x9003du); x86_call_known(c, 0x90399u, f_00090399); X86_RET(c, 0x9003du);
    X86_TICK(c, 16);
    // 09003d  mov byte ptr [0x8998d], 0xff
    X86_AT(c, 0x9003du);
    wr8((c.sbase[3] + (uint32_t)(0x8998Du)), 0xFFu);
    // 090044  mov byte ptr [0x89986], 0xff
    X86_AT(c, 0x90044u);
    wr8((c.sbase[3] + (uint32_t)(0x89986u)), 0xFFu);
    // 09004b  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x9004bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 09004f  ret 
    X86_AT(c, 0x9004fu);
    c.eip = pop32(c); return;
L_90050:
    X86_TICK(c, 12);
    // 090050  mov byte ptr [ebp + 0x20], 2
    X86_AT(c, 0x90050u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x2u);
    // 090054  ret 
    X86_AT(c, 0x90054u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ffd5u, "ran off the end of a function");
}
void f_00090055(X86Cpu& c) {
    X86_TICK(c, 7);
    // 090055  call 0x902bd
    X86_AT(c, 0x90055u);
    push32(c, 0x9005au); x86_call_known(c, 0x902bdu, f_000902bd); X86_RET(c, 0x9005au);
    X86_TICK(c, 5);
    // 09005a  jb 0x90065
    X86_AT(c, 0x9005au);
    if (x86_cc(c, 2)) { goto L_90065; }
    X86_TICK(c, 12);
    // 090060  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x90060u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 090064  ret 
    X86_AT(c, 0x90064u);
    c.eip = pop32(c); return;
L_90065:
    X86_TICK(c, 12);
    // 090065  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0x90065u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 090069  ret 
    X86_AT(c, 0x90069u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90055u, "ran off the end of a function");
}
void f_0009006a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 09006a  mov byte ptr [0x89988], 0xff
    X86_AT(c, 0x9006au);
    wr8((c.sbase[3] + (uint32_t)(0x89988u)), 0xFFu);
    // 090071  mov byte ptr [0x8998f], 0xff
    X86_AT(c, 0x90071u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Fu)), 0xFFu);
    // 090078  call 0x90348
    X86_AT(c, 0x90078u);
    push32(c, 0x9007du); x86_call_known(c, 0x90348u, f_00090348); X86_RET(c, 0x9007du);
    X86_TICK(c, 10);
    // 09007d  ret 
    X86_AT(c, 0x9007du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9006au, "ran off the end of a function");
}
void f_0009007e(X86Cpu& c) {
    X86_TICK(c, 14);
    // 09007e  mov byte ptr [0x89988], 0
    X86_AT(c, 0x9007eu);
    wr8((c.sbase[3] + (uint32_t)(0x89988u)), 0x0u);
    // 090085  mov byte ptr [0x8998e], 0xff
    X86_AT(c, 0x90085u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Eu)), 0xFFu);
    // 09008c  ret 
    X86_AT(c, 0x9008cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9007eu, "ran off the end of a function");
}
void f_0009008d(X86Cpu& c) {
    X86_TICK(c, 50);
    // 09008d  mov byte ptr [0x89be6], 0xff
    X86_AT(c, 0x9008du);
    wr8((c.sbase[3] + (uint32_t)(0x89BE6u)), 0xFFu);
    // 090094  mov ax, word ptr [0x89965]
    X86_AT(c, 0x90094u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89965u))));
    // 09009a  mov word ptr [ebp + 0x28], ax
    X86_AT(c, 0x9009au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 09009e  mov eax, dword ptr [0x89961]
    X86_AT(c, 0x9009eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89961u)));
    // 0900a3  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0x900a3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
    // 0900a6  mov ax, word ptr [0x89973]
    X86_AT(c, 0x900a6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89973u))));
    // 0900ac  mov word ptr [ebp + 0x14], ax
    X86_AT(c, 0x900acu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[0] & 0xFFFFu));
    // 0900b0  mov ax, word ptr [0x89975]
    X86_AT(c, 0x900b0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89975u))));
    // 0900b6  mov word ptr [ebp + 0x1c], ax
    X86_AT(c, 0x900b6u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), (c.r[0] & 0xFFFFu));
    // 0900ba  mov al, byte ptr [0x89979]
    X86_AT(c, 0x900bau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89979u))));
    // 0900bf  mov ah, byte ptr [0x89986]
    X86_AT(c, 0x900bfu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0x89986u))));
    // 0900c5  mov word ptr [ebp + 0x18], ax
    X86_AT(c, 0x900c5u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 0900c9  mov byte ptr [0x89be6], 0
    X86_AT(c, 0x900c9u);
    wr8((c.sbase[3] + (uint32_t)(0x89BE6u)), 0x0u);
    // 0900d0  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x900d0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0900d4  ret 
    X86_AT(c, 0x900d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9008du, "ran off the end of a function");
}
void f_000900d5(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0900d5  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x900d5u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0900d8  inc dl
    X86_AT(c, 0x900d8u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0900da  cmp dl, 8
    X86_AT(c, 0x900dau);
    (void)x86_sub(c, g8(c, 2), 0x8u, 0, 1);
    // 0900dd  ja 0x900ec
    X86_AT(c, 0x900ddu);
    if (x86_cc(c, 7)) { goto L_900ec; }
    X86_TICK(c, 16);
    // 0900df  dec dl
    X86_AT(c, 0x900dfu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0900e1  mov byte ptr [0x89992], dl
    X86_AT(c, 0x900e1u);
    wr8((c.sbase[3] + (uint32_t)(0x89992u)), g8(c, 2));
    // 0900e7  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x900e7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0900eb  ret 
    X86_AT(c, 0x900ebu);
    c.eip = pop32(c); return;
L_900ec:
    X86_TICK(c, 12);
    // 0900ec  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x900ecu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0900f0  ret 
    X86_AT(c, 0x900f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x900d5u, "ran off the end of a function");
}
void f_000900f1(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0900f1  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x900f1u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0900f4  inc dl
    X86_AT(c, 0x900f4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0900f6  cmp dl, 1
    X86_AT(c, 0x900f6u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 0900f9  ja 0x90108
    X86_AT(c, 0x900f9u);
    if (x86_cc(c, 7)) { goto L_90108; }
    X86_TICK(c, 16);
    // 0900fb  dec dl
    X86_AT(c, 0x900fbu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0900fd  mov byte ptr [0x89989], dl
    X86_AT(c, 0x900fdu);
    wr8((c.sbase[3] + (uint32_t)(0x89989u)), g8(c, 2));
    // 090103  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x90103u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 090107  ret 
    X86_AT(c, 0x90107u);
    c.eip = pop32(c); return;
L_90108:
    X86_TICK(c, 12);
    // 090108  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x90108u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 09010c  ret 
    X86_AT(c, 0x9010cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x900f1u, "ran off the end of a function");
}
void f_0009010d(X86Cpu& c) {
    X86_TICK(c, 11);
    // 09010d  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x9010du);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 090111  cmp dx, 0xfa
    X86_AT(c, 0x90111u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFAu, 0, 2);
    // 090116  ja 0x9012e
    X86_AT(c, 0x90116u);
    if (x86_cc(c, 7)) { goto L_9012e; }
    X86_TICK(c, 13);
    // 090118  mov al, dl
    X86_AT(c, 0x90118u);
    s8(c, 0, g8(c, 2));
    // 09011a  mov byte ptr [0x89985], al
    X86_AT(c, 0x9011au);
    wr8((c.sbase[3] + (uint32_t)(0x89985u)), g8(c, 0));
    // 09011f  mov byte ptr [0x89979], al
    X86_AT(c, 0x9011fu);
    wr8((c.sbase[3] + (uint32_t)(0x89979u)), g8(c, 0));
    // 090124  call 0x9146f
    X86_AT(c, 0x90124u);
    push32(c, 0x90129u); x86_call_known(c, 0x9146fu, f_0009146f); X86_RET(c, 0x90129u);
    X86_TICK(c, 12);
    // 090129  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x90129u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 09012d  ret 
    X86_AT(c, 0x9012du);
    c.eip = pop32(c); return;
L_9012e:
    X86_TICK(c, 12);
    // 09012e  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x9012eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 090132  ret 
    X86_AT(c, 0x90132u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9010du, "ran off the end of a function");
}
void f_00090133(X86Cpu& c) {
    X86_TICK(c, 13);
    // 090133  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x90133u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 090136  inc dl
    X86_AT(c, 0x90136u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 090138  cmp dl, 1
    X86_AT(c, 0x90138u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 09013b  ja 0x9014a
    X86_AT(c, 0x9013bu);
    if (x86_cc(c, 7)) { goto L_9014a; }
    X86_TICK(c, 16);
    // 09013d  dec dl
    X86_AT(c, 0x9013du);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 09013f  mov byte ptr [0x89be6], dl
    X86_AT(c, 0x9013fu);
    wr8((c.sbase[3] + (uint32_t)(0x89BE6u)), g8(c, 2));
    // 090145  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x90145u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 090149  ret 
    X86_AT(c, 0x90149u);
    c.eip = pop32(c); return;
L_9014a:
    X86_TICK(c, 12);
    // 09014a  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x9014au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 09014e  ret 
    X86_AT(c, 0x9014eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90133u, "ran off the end of a function");
}
void f_0009014f(X86Cpu& c) {
    X86_TICK(c, 13);
    // 09014f  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x9014fu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 090152  inc dl
    X86_AT(c, 0x90152u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 090154  cmp dl, 1
    X86_AT(c, 0x90154u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 090157  ja 0x90191
    X86_AT(c, 0x90157u);
    if (x86_cc(c, 7)) { goto L_90191; }
    X86_TICK(c, 14);
    // 090159  dec dl
    X86_AT(c, 0x90159u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 09015b  cmp byte ptr [0x89bc9], 0
    X86_AT(c, 0x9015bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89BC9u))), 0x0u, 0, 1);
    // 090162  jne 0x9017c
    X86_AT(c, 0x90162u);
    if (x86_cc(c, 5)) { goto L_9017c; }
    X86_TICK(c, 7);
    // 090164  and dl, dl
    X86_AT(c, 0x90164u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 090166  je 0x90171
    X86_AT(c, 0x90166u);
    if (x86_cc(c, 4)) { goto L_90171; }
    X86_TICK(c, 9);
    // 090168  mov ah, 0x17
    X86_AT(c, 0x90168u);
    s8(c, 4, 0x17u);
    // 09016a  call 0x8fad8
    X86_AT(c, 0x9016au);
    push32(c, 0x9016fu); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x9016fu);
    X86_TICK(c, 7);
    // 09016f  jmp 0x9018c
    X86_AT(c, 0x9016fu);
    goto L_9018c;
L_90171:
    X86_TICK(c, 11);
    // 090171  mov bl, 0
    X86_AT(c, 0x90171u);
    s8(c, 3, 0x0u);
    // 090173  mov ah, 0x15
    X86_AT(c, 0x90173u);
    s8(c, 4, 0x15u);
    // 090175  call 0x8fad8
    X86_AT(c, 0x90175u);
    push32(c, 0x9017au); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x9017au);
    X86_TICK(c, 7);
    // 09017a  jmp 0x9018c
    X86_AT(c, 0x9017au);
    goto L_9018c;
L_9017c:
    X86_TICK(c, 7);
    // 09017c  and dl, dl
    X86_AT(c, 0x9017cu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 09017e  je 0x90187
    X86_AT(c, 0x9017eu);
    if (x86_cc(c, 4)) { goto L_90187; }
    X86_TICK(c, 7);
    // 090180  call 0x913d4
    X86_AT(c, 0x90180u);
    push32(c, 0x90185u); x86_call_known(c, 0x913d4u, f_000913d4); X86_RET(c, 0x90185u);
    X86_TICK(c, 7);
    // 090185  jmp 0x9018c
    X86_AT(c, 0x90185u);
    goto L_9018c;
L_90187:
    X86_TICK(c, 7);
    // 090187  call 0x91393
    X86_AT(c, 0x90187u);
    push32(c, 0x9018cu); x86_call_known(c, 0x91393u, f_00091393); X86_RET(c, 0x9018cu);
L_9018c:
    X86_TICK(c, 12);
    // 09018c  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x9018cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 090190  ret 
    X86_AT(c, 0x90190u);
    c.eip = pop32(c); return;
L_90191:
    X86_TICK(c, 12);
    // 090191  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x90191u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 090195  ret 
    X86_AT(c, 0x90195u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9014fu, "ran off the end of a function");
}
void f_00090196(X86Cpu& c) {
    X86_TICK(c, 15);
    // 090196  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x90196u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 090199  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x90199u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 09019c  cmp bl, 0x20
    X86_AT(c, 0x9019cu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 09019f  jae 0x901b7
    X86_AT(c, 0x9019fu);
    if (x86_cc(c, 3)) { goto L_901b7; }
    X86_TICK(c, 9);
    // 0901a1  inc al
    X86_AT(c, 0x901a1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0901a3  cmp al, 8
    X86_AT(c, 0x901a3u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 0901a5  ja 0x901b7
    X86_AT(c, 0x901a5u);
    if (x86_cc(c, 7)) { goto L_901b7; }
    X86_TICK(c, 19);
    // 0901a7  dec al
    X86_AT(c, 0x901a7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0901a9  movzx ebx, bl
    X86_AT(c, 0x901a9u);
    c.r[3] = g8(c, 3);
    // 0901ac  mov byte ptr [ebx + 0x899c5], al
    X86_AT(c, 0x901acu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x899C5u)), g8(c, 0));
    // 0901b2  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x901b2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0901b6  ret 
    X86_AT(c, 0x901b6u);
    c.eip = pop32(c); return;
L_901b7:
    X86_TICK(c, 12);
    // 0901b7  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x901b7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0901bb  ret 
    X86_AT(c, 0x901bbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90196u, "ran off the end of a function");
}
void f_000901bc(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0901bc  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x901bcu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0901bf  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x901bfu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0901c2  cmp bl, 0x20
    X86_AT(c, 0x901c2u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0901c5  jae 0x901dd
    X86_AT(c, 0x901c5u);
    if (x86_cc(c, 3)) { goto L_901dd; }
    X86_TICK(c, 9);
    // 0901c7  inc al
    X86_AT(c, 0x901c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0901c9  cmp al, 0x10
    X86_AT(c, 0x901c9u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 0901cb  ja 0x901dd
    X86_AT(c, 0x901cbu);
    if (x86_cc(c, 7)) { goto L_901dd; }
    X86_TICK(c, 19);
    // 0901cd  dec al
    X86_AT(c, 0x901cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0901cf  movzx ebx, bl
    X86_AT(c, 0x901cfu);
    c.r[3] = g8(c, 3);
    // 0901d2  mov byte ptr [ebx + 0x899e5], al
    X86_AT(c, 0x901d2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x899E5u)), g8(c, 0));
    // 0901d8  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x901d8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0901dc  ret 
    X86_AT(c, 0x901dcu);
    c.eip = pop32(c); return;
L_901dd:
    X86_TICK(c, 12);
    // 0901dd  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x901ddu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0901e1  ret 
    X86_AT(c, 0x901e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x901bcu, "ran off the end of a function");
}
void f_000901e2(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0901e2  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x901e2u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0901e5  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x901e5u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0901e8  cmp bl, 0x20
    X86_AT(c, 0x901e8u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0901eb  jae 0x90203
    X86_AT(c, 0x901ebu);
    if (x86_cc(c, 3)) { goto L_90203; }
    X86_TICK(c, 9);
    // 0901ed  inc al
    X86_AT(c, 0x901edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0901ef  cmp al, 1
    X86_AT(c, 0x901efu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 0901f1  ja 0x90203
    X86_AT(c, 0x901f1u);
    if (x86_cc(c, 7)) { goto L_90203; }
    X86_TICK(c, 19);
    // 0901f3  dec al
    X86_AT(c, 0x901f3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0901f5  movzx ebx, bl
    X86_AT(c, 0x901f5u);
    c.r[3] = g8(c, 3);
    // 0901f8  mov byte ptr [ebx + 0x899a5], al
    X86_AT(c, 0x901f8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x899A5u)), g8(c, 0));
    // 0901fe  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x901feu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 090202  ret 
    X86_AT(c, 0x90202u);
    c.eip = pop32(c); return;
L_90203:
    X86_TICK(c, 12);
    // 090203  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x90203u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 090207  ret 
    X86_AT(c, 0x90207u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x901e2u, "ran off the end of a function");
}
void f_00090208(X86Cpu& c) {
    X86_TICK(c, 15);
    // 090208  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x90208u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 09020b  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x9020bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 09020e  cmp bl, 0x20
    X86_AT(c, 0x9020eu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 090211  jae 0x90229
    X86_AT(c, 0x90211u);
    if (x86_cc(c, 3)) { goto L_90229; }
    X86_TICK(c, 9);
    // 090213  add al, 0x28
    X86_AT(c, 0x90213u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 090215  cmp al, 0x50
    X86_AT(c, 0x90215u);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 090217  ja 0x90229
    X86_AT(c, 0x90217u);
    if (x86_cc(c, 7)) { goto L_90229; }
    X86_TICK(c, 19);
    // 090219  sub al, 0x28
    X86_AT(c, 0x90219u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 09021b  movzx ebx, bl
    X86_AT(c, 0x9021bu);
    c.r[3] = g8(c, 3);
    // 09021e  mov byte ptr [ebx + 0x89a25], al
    X86_AT(c, 0x9021eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89A25u)), g8(c, 0));
    // 090224  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x90224u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 090228  ret 
    X86_AT(c, 0x90228u);
    c.eip = pop32(c); return;
L_90229:
    X86_TICK(c, 12);
    // 090229  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x90229u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 09022d  ret 
    X86_AT(c, 0x9022du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90208u, "ran off the end of a function");
}
void f_0009022e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 09022e  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x9022eu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 090231  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x90231u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 090234  cmp bl, 0x20
    X86_AT(c, 0x90234u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 090237  jae 0x9024f
    X86_AT(c, 0x90237u);
    if (x86_cc(c, 3)) { goto L_9024f; }
    X86_TICK(c, 9);
    // 090239  add al, 0x28
    X86_AT(c, 0x90239u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 09023b  cmp al, 0x50
    X86_AT(c, 0x9023bu);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 09023d  ja 0x9024f
    X86_AT(c, 0x9023du);
    if (x86_cc(c, 7)) { goto L_9024f; }
    X86_TICK(c, 19);
    // 09023f  sub al, 0x28
    X86_AT(c, 0x9023fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 090241  movzx ebx, bl
    X86_AT(c, 0x90241u);
    c.r[3] = g8(c, 3);
    // 090244  mov byte ptr [ebx + 0x89a05], al
    X86_AT(c, 0x90244u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89A05u)), g8(c, 0));
    // 09024a  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x9024au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 09024e  ret 
    X86_AT(c, 0x9024eu);
    c.eip = pop32(c); return;
L_9024f:
    X86_TICK(c, 12);
    // 09024f  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x9024fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 090253  ret 
    X86_AT(c, 0x90253u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9022eu, "ran off the end of a function");
}
void f_00090254(X86Cpu& c) {
    X86_TICK(c, 15);
    // 090254  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x90254u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 090257  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x90257u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 09025a  call 0x91912
    X86_AT(c, 0x9025au);
    push32(c, 0x9025fu); x86_call_known(c, 0x91912u, f_00091912); X86_RET(c, 0x9025fu);
    X86_TICK(c, 12);
    // 09025f  mov byte ptr [ebp + 0x20], al
    X86_AT(c, 0x9025fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 0));
    // 090262  ret 
    X86_AT(c, 0x90262u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90254u, "ran off the end of a function");
}
void f_00090263(X86Cpu& c) {
    X86_TICK(c, 13);
    // 090263  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x90263u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 090266  inc bl
    X86_AT(c, 0x90266u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 090268  cmp bl, 8
    X86_AT(c, 0x90268u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 09026b  ja 0x9029b
    X86_AT(c, 0x9026bu);
    if (x86_cc(c, 7)) { goto L_9029b; }
    X86_TICK(c, 13);
    // 09026d  dec bl
    X86_AT(c, 0x9026du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 09026f  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x9026fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 090272  cmp ecx, 0
    X86_AT(c, 0x90272u);
    (void)x86_sub(c, c.r[1], 0x0u, 0, 4);
    // 090275  je 0x9029b
    X86_AT(c, 0x90275u);
    if (x86_cc(c, 4)) { goto L_9029b; }
    X86_TICK(c, 12);
    // 090277  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x90277u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09027a  mov al, byte ptr [0x89be6]
    X86_AT(c, 0x9027au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89BE6u))));
    // 09027f  mov byte ptr [0x89be6], 0xff
    X86_AT(c, 0x9027fu);
    wr8((c.sbase[3] + (uint32_t)(0x89BE6u)), 0xFFu);
    // 090286  push ax
    X86_AT(c, 0x90286u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
L_90288:
    X86_TICK(c, 14);
    // 090288  lodsb al, byte ptr [esi]
    X86_AT(c, 0x90288u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 090289  call 0x90f39
    X86_AT(c, 0x90289u);
    push32(c, 0x9028eu); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x9028eu);
    X86_TICK(c, 11);
    // 09028e  loop 0x90288
    X86_AT(c, 0x9028eu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90288u); goto L_90288; }
    X86_TICK(c, 20);
    // 090290  pop ax
    X86_AT(c, 0x90290u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 090292  mov byte ptr [0x89be6], al
    X86_AT(c, 0x90292u);
    wr8((c.sbase[3] + (uint32_t)(0x89BE6u)), g8(c, 0));
    // 090297  xor al, al
    X86_AT(c, 0x90297u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 090299  clc 
    X86_AT(c, 0x90299u);
    c.fl &= ~X86_CF;
    // 09029a  ret 
    X86_AT(c, 0x9029au);
    c.eip = pop32(c); return;
L_9029b:
    X86_TICK(c, 14);
    // 09029b  mov al, 3
    X86_AT(c, 0x9029bu);
    s8(c, 0, 0x3u);
    // 09029d  stc 
    X86_AT(c, 0x9029du);
    c.fl |= X86_CF;
    // 09029e  ret 
    X86_AT(c, 0x9029eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90263u, "ran off the end of a function");
}
void f_0009029f(X86Cpu& c) {
    X86_TICK(c, 11);
    // 09029f  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x9029fu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0902a2  call 0x90ee6
    X86_AT(c, 0x902a2u);
    push32(c, 0x902a7u); x86_call_known(c, 0x90ee6u, f_00090ee6); X86_RET(c, 0x902a7u);
    X86_TICK(c, 13);
    // 0902a7  cmp ah, 1
    X86_AT(c, 0x902a7u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 0902aa  nop 
    X86_AT(c, 0x902aau);
    // 0902ab  nop 
    X86_AT(c, 0x902abu);
    // 0902ac  nop 
    X86_AT(c, 0x902acu);
    // 0902ad  ja 0x902b8
    X86_AT(c, 0x902adu);
    if (x86_cc(c, 7)) { goto L_902b8; }
    X86_TICK(c, 5);
    // 0902af  je 0x902b8
    X86_AT(c, 0x902afu);
    if (x86_cc(c, 4)) { goto L_902b8; }
    X86_TICK(c, 16);
    // 0902b1  mov byte ptr [ebp + 0x18], al
    X86_AT(c, 0x902b1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), g8(c, 0));
    // 0902b4  xor al, al
    X86_AT(c, 0x902b4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0902b6  clc 
    X86_AT(c, 0x902b6u);
    c.fl &= ~X86_CF;
    // 0902b7  ret 
    X86_AT(c, 0x902b7u);
    c.eip = pop32(c); return;
L_902b8:
    X86_TICK(c, 14);
    // 0902b8  mov byte ptr [ebp + 0x20], ah
    X86_AT(c, 0x902b8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 4));
    // 0902bb  stc 
    X86_AT(c, 0x902bbu);
    c.fl |= X86_CF;
    // 0902bc  ret 
    X86_AT(c, 0x902bcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9029fu, "ran off the end of a function");
}
void f_000902bd(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0902bd  cmp byte ptr [0x89986], 0
    X86_AT(c, 0x902bdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89986u))), 0x0u, 0, 1);
    // 0902c4  je 0x902eb
    X86_AT(c, 0x902c4u);
    if (x86_cc(c, 4)) { goto L_902eb; }
    X86_TICK(c, 15);
    // 0902c6  mov byte ptr [0x8998f], 0xff
    X86_AT(c, 0x902c6u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Fu)), 0xFFu);
    // 0902cd  mov byte ptr [0x89986], 0
    X86_AT(c, 0x902cdu);
    wr8((c.sbase[3] + (uint32_t)(0x89986u)), 0x0u);
    // 0902d4  mov word ptr [0x89999], 0
    X86_AT(c, 0x902d4u);
    wr16((c.sbase[3] + (uint32_t)(0x89999u)), 0x0u);
    // 0902dd  mov byte ptr [0x89987], 0
    X86_AT(c, 0x902ddu);
    wr8((c.sbase[3] + (uint32_t)(0x89987u)), 0x0u);
    // 0902e4  call 0x90348
    X86_AT(c, 0x902e4u);
    push32(c, 0x902e9u); x86_call_known(c, 0x90348u, f_00090348); X86_RET(c, 0x902e9u);
    X86_TICK(c, 12);
    // 0902e9  clc 
    X86_AT(c, 0x902e9u);
    c.fl &= ~X86_CF;
    // 0902ea  ret 
    X86_AT(c, 0x902eau);
    c.eip = pop32(c); return;
L_902eb:
    X86_TICK(c, 12);
    // 0902eb  stc 
    X86_AT(c, 0x902ebu);
    c.fl |= X86_CF;
    // 0902ec  ret 
    X86_AT(c, 0x902ecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x902bdu, "ran off the end of a function");
}
void f_000902ed(X86Cpu& c) {
    X86_TICK(c, 57);
    // 0902ed  movzx ebx, al
    X86_AT(c, 0x902edu);
    c.r[3] = g8(c, 0);
    // 0902f0  and al, 0xf
    X86_AT(c, 0x902f0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0902f2  inc al
    X86_AT(c, 0x902f2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0902f4  shr ebx, 4
    X86_AT(c, 0x902f4u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0902f7  mov bx, word ptr cs:[ebx*2 + 0x9030d]
    X86_AT(c, 0x902f7u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x9030Du))));
    // 090300  push eax
    X86_AT(c, 0x90300u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090301  movzx ax, al
    X86_AT(c, 0x90301u);
    s16(c, 0, g8(c, 0));
    // 090305  mul bx
    X86_AT(c, 0x90305u);
    x86_mul(c, (c.r[3] & 0xFFFFu), 2);
    // 090308  mov dx, ax
    X86_AT(c, 0x90308u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 09030b  pop eax
    X86_AT(c, 0x9030bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 09030c  ret 
    X86_AT(c, 0x9030cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x902edu, "ran off the end of a function");
}
void f_0009033e(X86Cpu& c) {
    X86_TICK(c, 17);
    // 09033e  movzx ebx, dl
    X86_AT(c, 0x9033eu);
    c.r[3] = g8(c, 2);
    // 090341  mov bl, byte ptr [ebx + 0x899c5]
    X86_AT(c, 0x90341u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x899C5u))));
    // 090347  ret 
    X86_AT(c, 0x90347u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9033eu, "ran off the end of a function");
}
void f_00090348(X86Cpu& c) {
    X86_TICK(c, 39);
    // 090348  pushal 
    X86_AT(c, 0x90348u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 090349  mov al, byte ptr [0x89be6]
    X86_AT(c, 0x90349u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89BE6u))));
    // 09034e  push eax
    X86_AT(c, 0x9034eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09034f  mov byte ptr [0x89be6], 0xff
    X86_AT(c, 0x9034fu);
    wr8((c.sbase[3] + (uint32_t)(0x89BE6u)), 0xFFu);
    // 090356  movzx ecx, word ptr [0x89990]
    X86_AT(c, 0x90356u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0x89990u)));
    // 09035d  or ecx, ecx
    X86_AT(c, 0x9035du);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 09035f  je 0x90391
    X86_AT(c, 0x9035fu);
    if (x86_cc(c, 4)) { goto L_90391; }
    X86_TICK(c, 2);
    // 090361  lea edi, [0x89a45]
    X86_AT(c, 0x90361u);
    c.r[7] = (uint32_t)(0x89A45u);
L_90367:
    X86_TICK(c, 12);
    // 090367  cmp byte ptr [edi], 0
    X86_AT(c, 0x90367u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 09036a  jne 0x90371
    X86_AT(c, 0x9036au);
    if (x86_cc(c, 5)) { goto L_90371; }
    X86_TICK(c, 9);
    // 09036c  add edi, 6
    X86_AT(c, 0x9036cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 09036f  jmp 0x90367
    X86_AT(c, 0x9036fu);
    X86_POLL(c, 0x90367u); goto L_90367;
L_90371:
    X86_TICK(c, 28);
    // 090371  push ecx
    X86_AT(c, 0x90371u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 090372  xor ch, ch
    X86_AT(c, 0x90372u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 090374  xchg byte ptr [edi], ch
    X86_AT(c, 0x90374u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 090376  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0x90376u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 090379  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0x90379u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 09037c  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0x9037cu);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 09037f  call 0x90ac3
    X86_AT(c, 0x9037fu);
    push32(c, 0x90384u); x86_call_known(c, 0x90ac3u, f_00090ac3); X86_RET(c, 0x90384u);
    X86_TICK(c, 23);
    // 090384  pop ecx
    X86_AT(c, 0x90384u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 090385  add edi, 6
    X86_AT(c, 0x90385u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 090388  dec word ptr [0x89990]
    X86_AT(c, 0x90388u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89990u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 09038f  loop 0x90367
    X86_AT(c, 0x9038fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90367u); goto L_90367; }
L_90391:
    X86_TICK(c, 40);
    // 090391  pop eax
    X86_AT(c, 0x90391u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 090392  mov byte ptr [0x89be6], al
    X86_AT(c, 0x90392u);
    wr8((c.sbase[3] + (uint32_t)(0x89BE6u)), g8(c, 0));
    // 090397  popal 
    X86_AT(c, 0x90397u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 090398  ret 
    X86_AT(c, 0x90398u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90348u, "ran off the end of a function");
}
void f_00090399(X86Cpu& c) {
    X86_TICK(c, 8);
    // 090399  push ebx
    X86_AT(c, 0x90399u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09039a  push ecx
    X86_AT(c, 0x9039au);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 09039b  mov ecx, 8
    X86_AT(c, 0x9039bu);
    c.r[1] = 0x8u;
    // 0903a0  lea ebx, [0x89bf5]
    X86_AT(c, 0x903a0u);
    c.r[3] = (uint32_t)(0x89BF5u);
L_903a6:
    X86_TICK(c, 15);
    // 0903a6  mov byte ptr [ebx + 0x1b], 0
    X86_AT(c, 0x903a6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), 0x0u);
    // 0903aa  add ebx, 0x20
    X86_AT(c, 0x903aau);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x20u, 0, 4); }
    // 0903ad  loop 0x903a6
    X86_AT(c, 0x903adu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x903a6u); goto L_903a6; }
    X86_TICK(c, 18);
    // 0903af  pop ecx
    X86_AT(c, 0x903afu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0903b0  pop ebx
    X86_AT(c, 0x903b0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0903b1  ret 
    X86_AT(c, 0x903b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90399u, "ran off the end of a function");
}
void f_000903b2(X86Cpu& c) {
    X86_TICK(c, 69);
    // 0903b2  push es
    X86_AT(c, 0x903b2u);
    push32(c, c.sreg[0]);
    // 0903b3  pushal 
    X86_AT(c, 0x903b3u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0903b4  push ds
    X86_AT(c, 0x903b4u);
    push32(c, c.sreg[3]);
    // 0903b5  pop es
    X86_AT(c, 0x903b5u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0903b6  mov al, 0xff
    X86_AT(c, 0x903b6u);
    s8(c, 0, 0xFFu);
    // 0903b8  lea edi, [0x899a5]
    X86_AT(c, 0x903b8u);
    c.r[7] = (uint32_t)(0x899A5u);
    // 0903be  mov ecx, 0x20
    X86_AT(c, 0x903beu);
    c.r[1] = 0x20u;
    // 0903c3  stosb byte ptr es:[edi], al
    X86_AT(c, 0x903c3u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0903c5  mov al, 0xff
    X86_AT(c, 0x903c5u);
    s8(c, 0, 0xFFu);
    // 0903c7  lea edi, [0x899c5]
    X86_AT(c, 0x903c7u);
    c.r[7] = (uint32_t)(0x899C5u);
    // 0903cd  mov ecx, 0x10
    X86_AT(c, 0x903cdu);
    c.r[1] = 0x10u;
    // 0903d2  stosb byte ptr es:[edi], al
    X86_AT(c, 0x903d2u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0903d4  xor al, al
    X86_AT(c, 0x903d4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0903d6  mov ecx, 0x10
    X86_AT(c, 0x903d6u);
    c.r[1] = 0x10u;
    // 0903db  stosb byte ptr es:[edi], al
    X86_AT(c, 0x903dbu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0903dd  xor al, al
    X86_AT(c, 0x903ddu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0903df  lea edi, [0x899e5]
    X86_AT(c, 0x903dfu);
    c.r[7] = (uint32_t)(0x899E5u);
    // 0903e5  mov ecx, 0x20
    X86_AT(c, 0x903e5u);
    c.r[1] = 0x20u;
L_903ea:
    X86_TICK(c, 22);
    // 0903ea  stosb byte ptr es:[edi], al
    X86_AT(c, 0x903eau);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0903eb  inc al
    X86_AT(c, 0x903ebu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0903ed  and al, 0xf
    X86_AT(c, 0x903edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0903ef  loop 0x903ea
    X86_AT(c, 0x903efu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x903eau); goto L_903ea; }
    X86_TICK(c, 64);
    // 0903f1  xor al, al
    X86_AT(c, 0x903f1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0903f3  lea edi, [0x89a05]
    X86_AT(c, 0x903f3u);
    c.r[7] = (uint32_t)(0x89A05u);
    // 0903f9  mov ecx, 0x20
    X86_AT(c, 0x903f9u);
    c.r[1] = 0x20u;
    // 0903fe  stosb byte ptr es:[edi], al
    X86_AT(c, 0x903feu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 090400  xor al, al
    X86_AT(c, 0x90400u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 090402  lea edi, [0x89a25]
    X86_AT(c, 0x90402u);
    c.r[7] = (uint32_t)(0x89A25u);
    // 090408  mov ecx, 0x20
    X86_AT(c, 0x90408u);
    c.r[1] = 0x20u;
    // 09040d  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9040du);
    x86_string(c, 2, 1, 243, 4, 3);
    // 09040f  popal 
    X86_AT(c, 0x9040fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 090410  pop es
    X86_AT(c, 0x90410u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 090411  ret 
    X86_AT(c, 0x90411u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x903b2u, "ran off the end of a function");
}
void f_00090412(X86Cpu& c) {
    X86_TICK(c, 26);
    // 090412  pushal 
    X86_AT(c, 0x90412u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 090413  xor eax, eax
    X86_AT(c, 0x90413u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 090415  mov word ptr [0x89990], ax
    X86_AT(c, 0x90415u);
    wr16((c.sbase[3] + (uint32_t)(0x89990u)), (c.r[0] & 0xFFFFu));
    // 09041b  mov ecx, 0x40
    X86_AT(c, 0x9041bu);
    c.r[1] = 0x40u;
    // 090420  lea edi, [0x89a45]
    X86_AT(c, 0x90420u);
    c.r[7] = (uint32_t)(0x89A45u);
L_90426:
    X86_TICK(c, 17);
    // 090426  mov dword ptr [edi], eax
    X86_AT(c, 0x90426u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 090428  mov word ptr [edi + 4], ax
    X86_AT(c, 0x90428u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 09042c  add edi, 6
    X86_AT(c, 0x9042cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 09042f  loop 0x90426
    X86_AT(c, 0x9042fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90426u); goto L_90426; }
    X86_TICK(c, 34);
    // 090431  popal 
    X86_AT(c, 0x90431u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 090432  ret 
    X86_AT(c, 0x90432u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90412u, "ran off the end of a function");
}
void f_00090433(X86Cpu& c) {
    X86_TICK(c, 50);
    // 090433  xor eax, eax
    X86_AT(c, 0x90433u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 090435  mov byte ptr [0x89be6], al
    X86_AT(c, 0x90435u);
    wr8((c.sbase[3] + (uint32_t)(0x89BE6u)), g8(c, 0));
    // 09043a  mov byte ptr [0x89be8], al
    X86_AT(c, 0x9043au);
    wr8((c.sbase[3] + (uint32_t)(0x89BE8u)), g8(c, 0));
    // 09043f  mov byte ptr [0x89be7], al
    X86_AT(c, 0x9043fu);
    wr8((c.sbase[3] + (uint32_t)(0x89BE7u)), g8(c, 0));
    // 090444  mov byte ptr [0x899a0], 0
    X86_AT(c, 0x90444u);
    wr8((c.sbase[3] + (uint32_t)(0x899A0u)), 0x0u);
    // 09044b  mov byte ptr [0x89986], al
    X86_AT(c, 0x9044bu);
    wr8((c.sbase[3] + (uint32_t)(0x89986u)), g8(c, 0));
    // 090450  mov byte ptr [0x89987], al
    X86_AT(c, 0x90450u);
    wr8((c.sbase[3] + (uint32_t)(0x89987u)), g8(c, 0));
    // 090455  mov byte ptr [0x89988], al
    X86_AT(c, 0x90455u);
    wr8((c.sbase[3] + (uint32_t)(0x89988u)), g8(c, 0));
    // 09045a  mov byte ptr [0x89989], al
    X86_AT(c, 0x9045au);
    wr8((c.sbase[3] + (uint32_t)(0x89989u)), g8(c, 0));
    // 09045f  mov byte ptr [0x8998a], al
    X86_AT(c, 0x9045fu);
    wr8((c.sbase[3] + (uint32_t)(0x8998Au)), g8(c, 0));
    // 090464  mov byte ptr [0x8998b], al
    X86_AT(c, 0x90464u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Bu)), g8(c, 0));
    // 090469  mov byte ptr [0x8998c], al
    X86_AT(c, 0x90469u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Cu)), g8(c, 0));
    // 09046e  mov byte ptr [0x8998d], al
    X86_AT(c, 0x9046eu);
    wr8((c.sbase[3] + (uint32_t)(0x8998Du)), g8(c, 0));
    // 090473  mov byte ptr [0x8998e], al
    X86_AT(c, 0x90473u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Eu)), g8(c, 0));
    // 090478  mov byte ptr [0x8998f], al
    X86_AT(c, 0x90478u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Fu)), g8(c, 0));
    // 09047d  lea edi, [0x899a1]
    X86_AT(c, 0x9047du);
    c.r[7] = (uint32_t)(0x899A1u);
    // 090483  mov byte ptr [edi], 0
    X86_AT(c, 0x90483u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 090486  mov byte ptr [edi + 1], 1
    X86_AT(c, 0x90486u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0x1u);
    // 09048a  mov byte ptr [edi + 2], 2
    X86_AT(c, 0x9048au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x2u);
    // 09048e  mov byte ptr [edi + 3], 3
    X86_AT(c, 0x9048eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x3u);
    // 090492  ret 
    X86_AT(c, 0x90492u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90433u, "ran off the end of a function");
}
void f_00090493(X86Cpu& c) {
    X86_TICK(c, 34);
    // 090493  mov word ptr [0x89999], 0
    X86_AT(c, 0x90493u);
    wr16((c.sbase[3] + (uint32_t)(0x89999u)), 0x0u);
    // 09049c  mov word ptr [0x89995], 0
    X86_AT(c, 0x9049cu);
    wr16((c.sbase[3] + (uint32_t)(0x89995u)), 0x0u);
    // 0904a5  mov word ptr [0x89997], 0x10
    X86_AT(c, 0x904a5u);
    wr16((c.sbase[3] + (uint32_t)(0x89997u)), 0x10u);
    // 0904ae  mov al, 0x33
    X86_AT(c, 0x904aeu);
    s8(c, 0, 0x33u);
    // 0904b0  mov byte ptr [0x89984], al
    X86_AT(c, 0x904b0u);
    wr8((c.sbase[3] + (uint32_t)(0x89984u)), g8(c, 0));
    // 0904b5  mov byte ptr [0x89978], al
    X86_AT(c, 0x904b5u);
    wr8((c.sbase[3] + (uint32_t)(0x89978u)), g8(c, 0));
    // 0904ba  mov word ptr [0x89973], ax
    X86_AT(c, 0x904bau);
    wr16((c.sbase[3] + (uint32_t)(0x89973u)), (c.r[0] & 0xFFFFu));
    // 0904c0  mov byte ptr [0x89977], al
    X86_AT(c, 0x904c0u);
    wr8((c.sbase[3] + (uint32_t)(0x89977u)), g8(c, 0));
    // 0904c5  mov word ptr [0x89975], ax
    X86_AT(c, 0x904c5u);
    wr16((c.sbase[3] + (uint32_t)(0x89975u)), (c.r[0] & 0xFFFFu));
    // 0904cb  mov al, 0x5a
    X86_AT(c, 0x904cbu);
    s8(c, 0, 0x5Au);
    // 0904cd  mov byte ptr [0x89985], al
    X86_AT(c, 0x904cdu);
    wr8((c.sbase[3] + (uint32_t)(0x89985u)), g8(c, 0));
    // 0904d2  mov byte ptr [0x89979], al
    X86_AT(c, 0x904d2u);
    wr8((c.sbase[3] + (uint32_t)(0x89979u)), g8(c, 0));
    // 0904d7  ret 
    X86_AT(c, 0x904d7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90493u, "ran off the end of a function");
}
void f_000904d8(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0904d8  mov byte ptr [0x89993], 0
    X86_AT(c, 0x904d8u);
    wr8((c.sbase[3] + (uint32_t)(0x89993u)), 0x0u);
    // 0904df  mov byte ptr [0x89992], 0xff
    X86_AT(c, 0x904dfu);
    wr8((c.sbase[3] + (uint32_t)(0x89992u)), 0xFFu);
    // 0904e6  mov byte ptr [0x89994], 0
    X86_AT(c, 0x904e6u);
    wr8((c.sbase[3] + (uint32_t)(0x89994u)), 0x0u);
    // 0904ed  ret 
    X86_AT(c, 0x904edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x904d8u, "ran off the end of a function");
}
void f_000904ee(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0904ee  cld 
    X86_AT(c, 0x904eeu);
    c.fl &= ~X86_DF;
    // 0904ef  call 0x90600
    X86_AT(c, 0x904efu);
    push32(c, 0x904f4u); x86_call_known(c, 0x90600u, f_00090600); X86_RET(c, 0x904f4u);
    X86_TICK(c, 7);
    // 0904f4  call 0x90540
    X86_AT(c, 0x904f4u);
    push32(c, 0x904f9u); x86_call_known(c, 0x90540u, f_00090540); X86_RET(c, 0x904f9u);
    X86_TICK(c, 7);
    // 0904f9  call 0x905a0
    X86_AT(c, 0x904f9u);
    push32(c, 0x904feu); x86_call_known(c, 0x905a0u, f_000905a0); X86_RET(c, 0x904feu);
L_904fe:
    X86_TICK(c, 12);
    // 0904fe  cmp word ptr [0x89999], 0
    X86_AT(c, 0x904feu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x89999u))), 0x0u, 0, 2);
    // 090506  je 0x9053f
    X86_AT(c, 0x90506u);
    if (x86_cc(c, 4)) { goto L_9053f; }
    X86_TICK(c, 13);
    // 090508  dec word ptr [0x89999]
    X86_AT(c, 0x90508u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89999u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 09050f  call 0x9064b
    X86_AT(c, 0x9050fu);
    push32(c, 0x90514u); x86_call_known(c, 0x9064bu, f_0009064b); X86_RET(c, 0x90514u);
    X86_TICK(c, 5);
    // 090514  jb 0x904fe
    X86_AT(c, 0x90514u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x904feu); goto L_904fe; }
    X86_TICK(c, 12);
    // 090516  cmp byte ptr [0x89986], 0
    X86_AT(c, 0x90516u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89986u))), 0x0u, 0, 1);
    // 09051d  je 0x904fe
    X86_AT(c, 0x9051du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x904feu); goto L_904fe; }
    X86_TICK(c, 7);
    // 09051f  call 0x90a81
    X86_AT(c, 0x9051fu);
    push32(c, 0x90524u); x86_call_known(c, 0x90a81u, f_00090a81); X86_RET(c, 0x90524u);
    X86_TICK(c, 7);
    // 090524  call 0x906ad
    X86_AT(c, 0x90524u);
    push32(c, 0x90529u); x86_call_known(c, 0x906adu, f_000906ad); X86_RET(c, 0x90529u);
    X86_TICK(c, 7);
    // 090529  call 0x90632
    X86_AT(c, 0x90529u);
    push32(c, 0x9052eu); x86_call_known(c, 0x90632u, f_00090632); X86_RET(c, 0x9052eu);
    X86_TICK(c, 7);
    // 09052e  call 0x90600
    X86_AT(c, 0x9052eu);
    push32(c, 0x90533u); x86_call_known(c, 0x90600u, f_00090600); X86_RET(c, 0x90533u);
    X86_TICK(c, 7);
    // 090533  call 0x90540
    X86_AT(c, 0x90533u);
    push32(c, 0x90538u); x86_call_known(c, 0x90540u, f_00090540); X86_RET(c, 0x90538u);
    X86_TICK(c, 7);
    // 090538  call 0x905a0
    X86_AT(c, 0x90538u);
    push32(c, 0x9053du); x86_call_known(c, 0x905a0u, f_000905a0); X86_RET(c, 0x9053du);
    X86_TICK(c, 7);
    // 09053d  jmp 0x904fe
    X86_AT(c, 0x9053du);
    X86_POLL(c, 0x904feu); goto L_904fe;
L_9053f:
    X86_TICK(c, 10);
    // 09053f  ret 
    X86_AT(c, 0x9053fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x904eeu, "ran off the end of a function");
}
void f_00090540(X86Cpu& c) {
    X86_TICK(c, 12);
    // 090540  cmp byte ptr [0x8998a], 0
    X86_AT(c, 0x90540u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8998Au))), 0x0u, 0, 1);
    // 090547  je 0x9055e
    X86_AT(c, 0x90547u);
    if (x86_cc(c, 4)) { goto L_9055e; }
    X86_TICK(c, 6);
    // 090549  mov byte ptr [0x8998a], 0
    X86_AT(c, 0x90549u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Au)), 0x0u);
    // 090550  mov byte ptr [0x89988], 0
    X86_AT(c, 0x90550u);
    wr8((c.sbase[3] + (uint32_t)(0x89988u)), 0x0u);
    // 090557  mov byte ptr [0x8998d], 0xff
    X86_AT(c, 0x90557u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Du)), 0xFFu);
L_9055e:
    X86_TICK(c, 12);
    // 09055e  cmp byte ptr [0x8998b], 0
    X86_AT(c, 0x9055eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8998Bu))), 0x0u, 0, 1);
    // 090565  je 0x9057c
    X86_AT(c, 0x90565u);
    if (x86_cc(c, 4)) { goto L_9057c; }
    X86_TICK(c, 6);
    // 090567  mov byte ptr [0x8998b], 0
    X86_AT(c, 0x90567u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Bu)), 0x0u);
    // 09056e  mov byte ptr [0x89988], 0
    X86_AT(c, 0x9056eu);
    wr8((c.sbase[3] + (uint32_t)(0x89988u)), 0x0u);
    // 090575  mov byte ptr [0x8998e], 0xff
    X86_AT(c, 0x90575u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Eu)), 0xFFu);
L_9057c:
    X86_TICK(c, 12);
    // 09057c  cmp byte ptr [0x8998c], 0
    X86_AT(c, 0x9057cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8998Cu))), 0x0u, 0, 1);
    // 090583  je 0x9059f
    X86_AT(c, 0x90583u);
    if (x86_cc(c, 4)) { goto L_9059f; }
    X86_TICK(c, 13);
    // 090585  mov byte ptr [0x8998c], 0
    X86_AT(c, 0x90585u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Cu)), 0x0u);
    // 09058c  mov byte ptr [0x89988], 0xff
    X86_AT(c, 0x9058cu);
    wr8((c.sbase[3] + (uint32_t)(0x89988u)), 0xFFu);
    // 090593  mov byte ptr [0x8998f], 0xff
    X86_AT(c, 0x90593u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Fu)), 0xFFu);
    // 09059a  call 0x90348
    X86_AT(c, 0x9059au);
    push32(c, 0x9059fu); x86_call_known(c, 0x90348u, f_00090348); X86_RET(c, 0x9059fu);
L_9059f:
    X86_TICK(c, 10);
    // 09059f  ret 
    X86_AT(c, 0x9059fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90540u, "ran off the end of a function");
}
void f_000905a0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0905a0  push ax
    X86_AT(c, 0x905a0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0905a2  cmp byte ptr [0x8998d], 0
    X86_AT(c, 0x905a2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8998Du))), 0x0u, 0, 1);
    // 0905a9  je 0x905b9
    X86_AT(c, 0x905a9u);
    if (x86_cc(c, 4)) { goto L_905b9; }
    X86_TICK(c, 11);
    // 0905ab  mov byte ptr [0x8998d], 0
    X86_AT(c, 0x905abu);
    wr8((c.sbase[3] + (uint32_t)(0x8998Du)), 0x0u);
    // 0905b2  mov al, 0xfa
    X86_AT(c, 0x905b2u);
    s8(c, 0, 0xFAu);
    // 0905b4  call 0x90fcf
    X86_AT(c, 0x905b4u);
    push32(c, 0x905b9u); x86_call_known(c, 0x90fcfu, f_00090fcf); X86_RET(c, 0x905b9u);
L_905b9:
    X86_TICK(c, 12);
    // 0905b9  cmp byte ptr [0x8998e], 0
    X86_AT(c, 0x905b9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8998Eu))), 0x0u, 0, 1);
    // 0905c0  je 0x905d0
    X86_AT(c, 0x905c0u);
    if (x86_cc(c, 4)) { goto L_905d0; }
    X86_TICK(c, 11);
    // 0905c2  mov byte ptr [0x8998e], 0
    X86_AT(c, 0x905c2u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Eu)), 0x0u);
    // 0905c9  mov al, 0xfb
    X86_AT(c, 0x905c9u);
    s8(c, 0, 0xFBu);
    // 0905cb  call 0x90fcf
    X86_AT(c, 0x905cbu);
    push32(c, 0x905d0u); x86_call_known(c, 0x90fcfu, f_00090fcf); X86_RET(c, 0x905d0u);
L_905d0:
    X86_TICK(c, 12);
    // 0905d0  cmp byte ptr [0x8998f], 0
    X86_AT(c, 0x905d0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8998Fu))), 0x0u, 0, 1);
    // 0905d7  je 0x905e7
    X86_AT(c, 0x905d7u);
    if (x86_cc(c, 4)) { goto L_905e7; }
    X86_TICK(c, 11);
    // 0905d9  mov byte ptr [0x8998f], 0
    X86_AT(c, 0x905d9u);
    wr8((c.sbase[3] + (uint32_t)(0x8998Fu)), 0x0u);
    // 0905e0  mov al, 0xfc
    X86_AT(c, 0x905e0u);
    s8(c, 0, 0xFCu);
    // 0905e2  call 0x90fcf
    X86_AT(c, 0x905e2u);
    push32(c, 0x905e7u); x86_call_known(c, 0x90fcfu, f_00090fcf); X86_RET(c, 0x905e7u);
L_905e7:
    X86_TICK(c, 12);
    // 0905e7  cmp byte ptr [0x89993], 0
    X86_AT(c, 0x905e7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89993u))), 0x0u, 0, 1);
    // 0905ee  je 0x905fd
    X86_AT(c, 0x905eeu);
    if (x86_cc(c, 4)) { goto L_905fd; }
    X86_TICK(c, 15);
    // 0905f0  dec byte ptr [0x89993]
    X86_AT(c, 0x905f0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89993u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0905f6  mov al, 0xf8
    X86_AT(c, 0x905f6u);
    s8(c, 0, 0xF8u);
    // 0905f8  call 0x90fcf
    X86_AT(c, 0x905f8u);
    push32(c, 0x905fdu); x86_call_known(c, 0x90fcfu, f_00090fcf); X86_RET(c, 0x905fdu);
L_905fd:
    X86_TICK(c, 14);
    // 0905fd  pop ax
    X86_AT(c, 0x905fdu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0905ff  ret 
    X86_AT(c, 0x905ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x905a0u, "ran off the end of a function");
}
void f_00090600(X86Cpu& c) {
    X86_TICK(c, 81);
    // 090600  mov dx, 0xe71
    X86_AT(c, 0x90600u);
    s16(c, 2, 0xE71u);
    // 090604  nop 
    X86_AT(c, 0x90604u);
    // 090605  nop 
    X86_AT(c, 0x90605u);
    // 090606  nop 
    X86_AT(c, 0x90606u);
    // 090607  pushf 
    X86_AT(c, 0x90607u);
    push16(c, c.fl & 0xFFFFu);
    // 090609  cli 
    X86_AT(c, 0x90609u);
    c.fl &= ~X86_IF;
    // 09060a  in al, dx
    X86_AT(c, 0x9060au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 09060b  mov ah, byte ptr [0x89bc7]
    X86_AT(c, 0x9060bu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0x89BC7u))));
    // 090611  and al, 0xf0
    X86_AT(c, 0x90611u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 090613  or al, ah
    X86_AT(c, 0x90613u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 4), 1)); }
    // 090615  out dx, al
    X86_AT(c, 0x90615u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090616  mov byte ptr [0x89bc7], al
    X86_AT(c, 0x90616u);
    wr8((c.sbase[3] + (uint32_t)(0x89BC7u)), g8(c, 0));
    // 09061b  mov al, byte ptr [0x89bc8]
    X86_AT(c, 0x9061bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89BC8u))));
    // 090620  mov byte ptr [0x89bc8], 0
    X86_AT(c, 0x90620u);
    wr8((c.sbase[3] + (uint32_t)(0x89BC8u)), 0x0u);
    // 090627  popf 
    X86_AT(c, 0x90627u);
    x86_popfd(c, 2);
    // 090629  and al, 0xf0
    X86_AT(c, 0x90629u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 09062b  or byte ptr [0x899a0], al
    X86_AT(c, 0x9062bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x899A0u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 090631  ret 
    X86_AT(c, 0x90631u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90600u, "ran off the end of a function");
}
void f_00090632(X86Cpu& c) {
    X86_TICK(c, 12);
    // 090632  cmp byte ptr [0x89987], 0
    X86_AT(c, 0x90632u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89987u))), 0x0u, 0, 1);
    // 090639  je 0x9064a
    X86_AT(c, 0x90639u);
    if (x86_cc(c, 4)) { goto L_9064a; }
    X86_TICK(c, 12);
    // 09063b  cmp word ptr [0x89990], 0
    X86_AT(c, 0x9063bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x89990u))), 0x0u, 0, 2);
    // 090643  jne 0x9064a
    X86_AT(c, 0x90643u);
    if (x86_cc(c, 5)) { goto L_9064a; }
    X86_TICK(c, 7);
    // 090645  call 0x902bd
    X86_AT(c, 0x90645u);
    push32(c, 0x9064au); x86_call_known(c, 0x902bdu, f_000902bd); X86_RET(c, 0x9064au);
L_9064a:
    X86_TICK(c, 10);
    // 09064a  ret 
    X86_AT(c, 0x9064au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90632u, "ran off the end of a function");
}
void f_0009064b(X86Cpu& c) {
    X86_TICK(c, 88);
    // 09064b  inc word ptr [0x89975]
    X86_AT(c, 0x9064bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89975u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 090652  movzx ebx, byte ptr [0x89979]
    X86_AT(c, 0x90652u);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0x89979u)));
    // 090659  movzx eax, word ptr cs:[ebx*2 + 0x90ae2]
    X86_AT(c, 0x90659u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90AE2u)));
    // 090662  add eax, dword ptr [0x8997a]
    X86_AT(c, 0x90662u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8997Au))), 0, 4); }
    // 090668  xor edx, edx
    X86_AT(c, 0x90668u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 09066a  mov ebx, 0x1f4
    X86_AT(c, 0x9066au);
    c.r[3] = 0x1F4u;
    // 09066f  div ebx
    X86_AT(c, 0x9066fu);
    x86_div(c, c.r[3], 4, 0x9066fu);
    // 090671  mov dword ptr [0x8997a], edx
    X86_AT(c, 0x90671u);
    wr32((c.sbase[3] + (uint32_t)(0x8997Au)), c.r[2]);
    // 090677  add dword ptr [0x8997e], eax
    X86_AT(c, 0x90677u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8997Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 09067d  mov al, byte ptr [0x89978]
    X86_AT(c, 0x9067du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89978u))));
    // 090682  call 0x902ed
    X86_AT(c, 0x90682u);
    push32(c, 0x90687u); x86_call_known(c, 0x902edu, f_000902ed); X86_RET(c, 0x90687u);
    X86_TICK(c, 11);
    // 090687  cmp dx, word ptr [0x89975]
    X86_AT(c, 0x90687u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0x89975u))), 0, 2);
    // 09068e  ja 0x906a4
    X86_AT(c, 0x9068eu);
    if (x86_cc(c, 7)) { goto L_906a4; }
    X86_TICK(c, 12);
    // 090690  inc word ptr [0x89973]
    X86_AT(c, 0x90690u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89973u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 090697  xor eax, eax
    X86_AT(c, 0x90697u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 090699  mov word ptr [0x89975], ax
    X86_AT(c, 0x90699u);
    wr16((c.sbase[3] + (uint32_t)(0x89975u)), (c.r[0] & 0xFFFFu));
    // 09069f  mov byte ptr [0x89977], al
    X86_AT(c, 0x9069fu);
    wr8((c.sbase[3] + (uint32_t)(0x89977u)), g8(c, 0));
L_906a4:
    X86_TICK(c, 12);
    // 0906a4  clc 
    X86_AT(c, 0x906a4u);
    c.fl &= ~X86_CF;
    // 0906a5  ret 
    X86_AT(c, 0x906a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9064bu, "ran off the end of a function");
}
void f_000906ad(X86Cpu& c) {
L_906ad:
    X86_TICK(c, 17);
    // 0906ad  les esi, fword ptr [0x89961]
    X86_AT(c, 0x906adu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89961u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[6] = o; }
    // 0906b3  mov al, byte ptr es:[esi]
    X86_AT(c, 0x906b3u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0906b6  cmp al, 0xff
    X86_AT(c, 0x906b6u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0906b8  je 0x906c2
    X86_AT(c, 0x906b8u);
    if (x86_cc(c, 4)) { goto L_906c2; }
    X86_TICK(c, 7);
    // 0906ba  cmp al, 0xf7
    X86_AT(c, 0x906bau);
    (void)x86_sub(c, g8(c, 0), 0xF7u, 0, 1);
    // 0906bc  je 0x906c2
    X86_AT(c, 0x906bcu);
    if (x86_cc(c, 4)) { goto L_906c2; }
    X86_TICK(c, 7);
    // 0906be  cmp al, 0x90
    X86_AT(c, 0x906beu);
    (void)x86_sub(c, g8(c, 0), 0x90u, 0, 1);
    // 0906c0  jae 0x906c9
    X86_AT(c, 0x906c0u);
    if (x86_cc(c, 3)) { goto L_906c9; }
L_906c2:
    X86_TICK(c, 7);
    // 0906c2  call 0x909b5
    X86_AT(c, 0x906c2u);
    push32(c, 0x906c7u); x86_call_known(c, 0x909b5u, f_000909b5); X86_RET(c, 0x906c7u);
    X86_TICK(c, 7);
    // 0906c7  jmp 0x906ad
    X86_AT(c, 0x906c7u);
    X86_POLL(c, 0x906adu); goto L_906ad;
L_906c9:
    X86_TICK(c, 15);
    // 0906c9  mov dx, word ptr [0x89982]
    X86_AT(c, 0x906c9u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x89982u))));
    // 0906d0  cmp dx, word ptr [0x89973]
    X86_AT(c, 0x906d0u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0x89973u))), 0, 2);
    // 0906d7  ja 0x906fe
    X86_AT(c, 0x906d7u);
    if (x86_cc(c, 7)) { goto L_906fe; }
    X86_TICK(c, 5);
    // 0906d9  je 0x906e4
    X86_AT(c, 0x906d9u);
    if (x86_cc(c, 4)) { goto L_906e4; }
    X86_TICK(c, 7);
    // 0906db  call 0x906ff
    X86_AT(c, 0x906dbu);
    push32(c, 0x906e0u); x86_call_known(c, 0x906ffu, f_000906ff); X86_RET(c, 0x906e0u);
    X86_TICK(c, 5);
    // 0906e0  jae 0x906ad
    X86_AT(c, 0x906e0u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x906adu); goto L_906ad; }
    X86_TICK(c, 7);
    // 0906e2  jmp 0x906fe
    X86_AT(c, 0x906e2u);
    goto L_906fe;
L_906e4:
    X86_TICK(c, 21);
    // 0906e4  mov dx, word ptr es:[esi + 2]
    X86_AT(c, 0x906e4u);
    s16(c, 2, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x2u))));
    // 0906e9  shl dl, 1
    X86_AT(c, 0x906e9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0906eb  shr dx, 1
    X86_AT(c, 0x906ebu);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 2, r); }
    // 0906ee  cmp dx, word ptr [0x89975]
    X86_AT(c, 0x906eeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0x89975u))), 0, 2);
    // 0906f5  ja 0x906fe
    X86_AT(c, 0x906f5u);
    if (x86_cc(c, 7)) { goto L_906fe; }
    X86_TICK(c, 7);
    // 0906f7  call 0x906ff
    X86_AT(c, 0x906f7u);
    push32(c, 0x906fcu); x86_call_known(c, 0x906ffu, f_000906ff); X86_RET(c, 0x906fcu);
    X86_TICK(c, 5);
    // 0906fc  jae 0x906ad
    X86_AT(c, 0x906fcu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x906adu); goto L_906ad; }
L_906fe:
    X86_TICK(c, 10);
    // 0906fe  ret 
    X86_AT(c, 0x906feu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x906adu, "ran off the end of a function");
}
void f_000906ff(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0906ff  cmp al, 0xfe
    X86_AT(c, 0x906ffu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 090701  je 0x9073d
    X86_AT(c, 0x90701u);
    if (x86_cc(c, 4)) { goto L_9073d; }
    X86_TICK(c, 7);
    // 090703  cmp al, 0xfd
    X86_AT(c, 0x90703u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 090705  je 0x9073d
    X86_AT(c, 0x90705u);
    if (x86_cc(c, 4)) { goto L_9073d; }
    X86_TICK(c, 10);
    // 090707  movzx ebx, al
    X86_AT(c, 0x90707u);
    c.r[3] = g8(c, 0);
    // 09070a  cmp al, 0xf0
    X86_AT(c, 0x9070au);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 09070c  jae 0x90728
    X86_AT(c, 0x9070cu);
    if (x86_cc(c, 3)) { goto L_90728; }
    X86_TICK(c, 12);
    // 09070e  sub ebx, 0x80
    X86_AT(c, 0x9070eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 090714  shr ebx, 4
    X86_AT(c, 0x90714u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 090717  call dword ptr cs:[ebx*4 + 0x90796]
    X86_AT(c, 0x90717u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x90796u))); push32(c, 0x9071fu);
      switch (t) {
      case 0x907f6u: x86_call_known(c, 0x907f6u, f_000907f6); break;
      case 0x907f8u: x86_call_known(c, 0x907f8u, f_000907f8); break;
      case 0x9082bu: x86_call_known(c, 0x9082bu, f_0009082b); break;
      case 0x90832u: x86_call_known(c, 0x90832u, f_00090832); break;
      case 0x90839u: x86_call_known(c, 0x90839u, f_00090839); break;
      case 0x90840u: x86_call_known(c, 0x90840u, f_00090840); break;
      case 0x90898u: x86_call_known(c, 0x90898u, f_00090898); break;
      case 0x90a0cu: x86_call_known(c, 0x90a0cu, f_00090a0c); break;
      case 0x90a55u: x86_call_known(c, 0x90a55u, f_00090a55); break;
      case 0x90a57u: x86_call_known(c, 0x90a57u, f_00090a57); break;
      case 0x90a59u: x86_call_known(c, 0x90a59u, f_00090a59); break;
      case 0x90a6bu: x86_call_known(c, 0x90a6bu, f_00090a6b); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x9071fu); }
    X86_TICK(c, 5);
    // 09071f  jb 0x9073d
    X86_AT(c, 0x9071fu);
    if (x86_cc(c, 2)) { goto L_9073d; }
    X86_TICK(c, 7);
    // 090721  call 0x909b5
    X86_AT(c, 0x90721u);
    push32(c, 0x90726u); x86_call_known(c, 0x909b5u, f_000909b5); X86_RET(c, 0x90726u);
    X86_TICK(c, 12);
    // 090726  clc 
    X86_AT(c, 0x90726u);
    c.fl &= ~X86_CF;
    // 090727  ret 
    X86_AT(c, 0x90727u);
    c.eip = pop32(c); return;
L_90728:
    X86_TICK(c, 9);
    // 090728  sub ebx, 0xf0
    X86_AT(c, 0x90728u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0xF0u, 0, 4); }
    // 09072e  call dword ptr cs:[ebx*4 + 0x907b6]
    X86_AT(c, 0x9072eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x907B6u))); push32(c, 0x90736u);
      switch (t) {
      case 0x907f6u: x86_call_known(c, 0x907f6u, f_000907f6); break;
      case 0x90a0cu: x86_call_known(c, 0x90a0cu, f_00090a0c); break;
      case 0x90a55u: x86_call_known(c, 0x90a55u, f_00090a55); break;
      case 0x90a57u: x86_call_known(c, 0x90a57u, f_00090a57); break;
      case 0x90a59u: x86_call_known(c, 0x90a59u, f_00090a59); break;
      case 0x90a6bu: x86_call_known(c, 0x90a6bu, f_00090a6b); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x90736u); }
    X86_TICK(c, 7);
    // 090736  call 0x909b5
    X86_AT(c, 0x90736u);
    push32(c, 0x9073bu); x86_call_known(c, 0x909b5u, f_000909b5); X86_RET(c, 0x9073bu);
    X86_TICK(c, 12);
    // 09073b  clc 
    X86_AT(c, 0x9073bu);
    c.fl &= ~X86_CF;
    // 09073c  ret 
    X86_AT(c, 0x9073cu);
    c.eip = pop32(c); return;
L_9073d:
    X86_TICK(c, 7);
    // 09073d  cmp al, 0xfd
    X86_AT(c, 0x9073du);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 09073f  je 0x90753
    X86_AT(c, 0x9073fu);
    if (x86_cc(c, 4)) { goto L_90753; }
    X86_TICK(c, 12);
    // 090741  cmp byte ptr [0x89989], 0
    X86_AT(c, 0x90741u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89989u))), 0x0u, 0, 1);
    // 090748  jne 0x9075c
    X86_AT(c, 0x90748u);
    if (x86_cc(c, 5)) { goto L_9075c; }
    X86_TICK(c, 14);
    // 09074a  mov byte ptr [0x89987], 0xff
    X86_AT(c, 0x9074au);
    wr8((c.sbase[3] + (uint32_t)(0x89987u)), 0xFFu);
    // 090751  stc 
    X86_AT(c, 0x90751u);
    c.fl |= X86_CF;
    // 090752  ret 
    X86_AT(c, 0x90752u);
    c.eip = pop32(c); return;
L_90753:
    X86_TICK(c, 14);
    // 090753  mov byte ptr [0x89988], 0xff
    X86_AT(c, 0x90753u);
    wr8((c.sbase[3] + (uint32_t)(0x89988u)), 0xFFu);
    // 09075a  stc 
    X86_AT(c, 0x9075au);
    c.fl |= X86_CF;
    // 09075b  ret 
    X86_AT(c, 0x9075bu);
    c.eip = pop32(c); return;
L_9075c:
    X86_TICK(c, 32);
    // 09075c  mov byte ptr [0x89987], 0
    X86_AT(c, 0x9075cu);
    wr8((c.sbase[3] + (uint32_t)(0x89987u)), 0x0u);
    // 090763  mov eax, dword ptr [0x89967]
    X86_AT(c, 0x90763u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89967u)));
    // 090768  mov dword ptr [0x89961], eax
    X86_AT(c, 0x90768u);
    wr32((c.sbase[3] + (uint32_t)(0x89961u)), c.r[0]);
    // 09076d  mov word ptr [0x89982], 0
    X86_AT(c, 0x9076du);
    wr16((c.sbase[3] + (uint32_t)(0x89982u)), 0x0u);
    // 090776  mov word ptr [0x89973], 0
    X86_AT(c, 0x90776u);
    wr16((c.sbase[3] + (uint32_t)(0x89973u)), 0x0u);
    // 09077f  mov word ptr [0x89975], 0
    X86_AT(c, 0x9077fu);
    wr16((c.sbase[3] + (uint32_t)(0x89975u)), 0x0u);
    // 090788  mov dl, byte ptr [0x89984]
    X86_AT(c, 0x90788u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0x89984u))));
    // 09078e  mov byte ptr [0x89978], dl
    X86_AT(c, 0x9078eu);
    wr8((c.sbase[3] + (uint32_t)(0x89978u)), g8(c, 2));
    // 090794  clc 
    X86_AT(c, 0x90794u);
    c.fl &= ~X86_CF;
    // 090795  ret 
    X86_AT(c, 0x90795u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x906ffu, "ran off the end of a function");
}
void f_000907f6(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0907f6  clc 
    X86_AT(c, 0x907f6u);
    c.fl &= ~X86_CF;
    // 0907f7  ret 
    X86_AT(c, 0x907f7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x907f6u, "ran off the end of a function");
}
void f_000907f8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0907f8  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x907f8u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0907fc  call 0x90927
    X86_AT(c, 0x907fcu);
    push32(c, 0x90801u); x86_call_known(c, 0x90927u, f_00090927); X86_RET(c, 0x90801u);
    X86_TICK(c, 5);
    // 090801  jb 0x90829
    X86_AT(c, 0x90801u);
    if (x86_cc(c, 2)) { goto L_90829; }
    X86_TICK(c, 7);
    // 090803  call 0x9033e
    X86_AT(c, 0x90803u);
    push32(c, 0x90808u); x86_call_known(c, 0x9033eu, f_0009033e); X86_RET(c, 0x90808u);
    X86_TICK(c, 7);
    // 090808  call 0x9093a
    X86_AT(c, 0x90808u);
    push32(c, 0x9080du); x86_call_known(c, 0x9093au, f_0009093a); X86_RET(c, 0x9080du);
    X86_TICK(c, 7);
    // 09080d  call 0x90f39
    X86_AT(c, 0x9080du);
    push32(c, 0x90812u); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x90812u);
    X86_TICK(c, 11);
    // 090812  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x90812u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 090816  call 0x90957
    X86_AT(c, 0x90816u);
    push32(c, 0x9081bu); x86_call_known(c, 0x90957u, f_00090957); X86_RET(c, 0x9081bu);
    X86_TICK(c, 7);
    // 09081b  call 0x90f39
    X86_AT(c, 0x9081bu);
    push32(c, 0x90820u); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x90820u);
    X86_TICK(c, 11);
    // 090820  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0x90820u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 090824  call 0x90f39
    X86_AT(c, 0x90824u);
    push32(c, 0x90829u); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x90829u);
L_90829:
    X86_TICK(c, 12);
    // 090829  clc 
    X86_AT(c, 0x90829u);
    c.fl &= ~X86_CF;
    // 09082a  ret 
    X86_AT(c, 0x9082au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x907f8u, "ran off the end of a function");
}
void f_0009082b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 09082b  call 0x9086b
    X86_AT(c, 0x9082bu);
    push32(c, 0x90830u); x86_call_known(c, 0x9086bu, f_0009086b); X86_RET(c, 0x90830u);
    X86_TICK(c, 12);
    // 090830  clc 
    X86_AT(c, 0x90830u);
    c.fl &= ~X86_CF;
    // 090831  ret 
    X86_AT(c, 0x90831u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9082bu, "ran off the end of a function");
}
void f_00090832(X86Cpu& c) {
    X86_TICK(c, 7);
    // 090832  call 0x90847
    X86_AT(c, 0x90832u);
    push32(c, 0x90837u); x86_call_known(c, 0x90847u, f_00090847); X86_RET(c, 0x90837u);
    X86_TICK(c, 12);
    // 090837  clc 
    X86_AT(c, 0x90837u);
    c.fl &= ~X86_CF;
    // 090838  ret 
    X86_AT(c, 0x90838u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90832u, "ran off the end of a function");
}
void f_00090839(X86Cpu& c) {
    X86_TICK(c, 7);
    // 090839  call 0x90847
    X86_AT(c, 0x90839u);
    push32(c, 0x9083eu); x86_call_known(c, 0x90847u, f_00090847); X86_RET(c, 0x9083eu);
    X86_TICK(c, 12);
    // 09083e  clc 
    X86_AT(c, 0x9083eu);
    c.fl &= ~X86_CF;
    // 09083f  ret 
    X86_AT(c, 0x9083fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90839u, "ran off the end of a function");
}
void f_00090840(X86Cpu& c) {
    X86_TICK(c, 7);
    // 090840  call 0x9086b
    X86_AT(c, 0x90840u);
    push32(c, 0x90845u); x86_call_known(c, 0x9086bu, f_0009086b); X86_RET(c, 0x90845u);
    X86_TICK(c, 12);
    // 090845  clc 
    X86_AT(c, 0x90845u);
    c.fl &= ~X86_CF;
    // 090846  ret 
    X86_AT(c, 0x90846u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90840u, "ran off the end of a function");
}
void f_00090847(X86Cpu& c) {
    X86_TICK(c, 11);
    // 090847  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x90847u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 09084b  call 0x90927
    X86_AT(c, 0x9084bu);
    push32(c, 0x90850u); x86_call_known(c, 0x90927u, f_00090927); X86_RET(c, 0x90850u);
    X86_TICK(c, 5);
    // 090850  jb 0x9086a
    X86_AT(c, 0x90850u);
    if (x86_cc(c, 2)) { goto L_9086a; }
    X86_TICK(c, 7);
    // 090852  call 0x9033e
    X86_AT(c, 0x90852u);
    push32(c, 0x90857u); x86_call_known(c, 0x9033eu, f_0009033e); X86_RET(c, 0x90857u);
    X86_TICK(c, 7);
    // 090857  call 0x9093a
    X86_AT(c, 0x90857u);
    push32(c, 0x9085cu); x86_call_known(c, 0x9093au, f_0009093a); X86_RET(c, 0x9085cu);
    X86_TICK(c, 7);
    // 09085c  call 0x90f39
    X86_AT(c, 0x9085cu);
    push32(c, 0x90861u); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x90861u);
    X86_TICK(c, 11);
    // 090861  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x90861u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 090865  call 0x90f39
    X86_AT(c, 0x90865u);
    push32(c, 0x9086au); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x9086au);
L_9086a:
    X86_TICK(c, 10);
    // 09086a  ret 
    X86_AT(c, 0x9086au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90847u, "ran off the end of a function");
}
void f_0009086b(X86Cpu& c) {
    X86_TICK(c, 11);
    // 09086b  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x9086bu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 09086f  call 0x90927
    X86_AT(c, 0x9086fu);
    push32(c, 0x90874u); x86_call_known(c, 0x90927u, f_00090927); X86_RET(c, 0x90874u);
    X86_TICK(c, 5);
    // 090874  jb 0x90897
    X86_AT(c, 0x90874u);
    if (x86_cc(c, 2)) { goto L_90897; }
    X86_TICK(c, 7);
    // 090876  call 0x9033e
    X86_AT(c, 0x90876u);
    push32(c, 0x9087bu); x86_call_known(c, 0x9033eu, f_0009033e); X86_RET(c, 0x9087bu);
    X86_TICK(c, 7);
    // 09087b  call 0x9093a
    X86_AT(c, 0x9087bu);
    push32(c, 0x90880u); x86_call_known(c, 0x9093au, f_0009093a); X86_RET(c, 0x90880u);
    X86_TICK(c, 7);
    // 090880  call 0x90f39
    X86_AT(c, 0x90880u);
    push32(c, 0x90885u); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x90885u);
    X86_TICK(c, 11);
    // 090885  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x90885u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 090889  call 0x90f39
    X86_AT(c, 0x90889u);
    push32(c, 0x9088eu); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x9088eu);
    X86_TICK(c, 11);
    // 09088e  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0x9088eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 090892  call 0x90f39
    X86_AT(c, 0x90892u);
    push32(c, 0x90897u); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x90897u);
L_90897:
    X86_TICK(c, 10);
    // 090897  ret 
    X86_AT(c, 0x90897u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9086bu, "ran off the end of a function");
}
void f_00090898(X86Cpu& c) {
    X86_TICK(c, 11);
    // 090898  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x90898u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 09089c  call 0x90927
    X86_AT(c, 0x9089cu);
    push32(c, 0x908a1u); x86_call_known(c, 0x90927u, f_00090927); X86_RET(c, 0x908a1u);
    X86_TICK(c, 5);
    // 0908a1  jae 0x908bd
    X86_AT(c, 0x908a1u);
    if (x86_cc(c, 3)) { goto L_908bd; }
    X86_TICK(c, 7);
    // 0908a3  call 0x909b5
    X86_AT(c, 0x908a3u);
    push32(c, 0x908a8u); x86_call_known(c, 0x909b5u, f_000909b5); X86_RET(c, 0x908a8u);
    X86_TICK(c, 11);
    // 0908a8  mov al, byte ptr es:[esi]
    X86_AT(c, 0x908a8u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0908ab  cmp al, 0xfe
    X86_AT(c, 0x908abu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0908ad  je 0x90925
    X86_AT(c, 0x908adu);
    if (x86_cc(c, 4)) { goto L_90925; }
    X86_TICK(c, 7);
    // 0908b3  cmp al, 0xfd
    X86_AT(c, 0x908b3u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0908b5  je 0x90925
    X86_AT(c, 0x908b5u);
    if (x86_cc(c, 4)) { goto L_90925; }
    X86_TICK(c, 12);
    // 0908bb  clc 
    X86_AT(c, 0x908bbu);
    c.fl &= ~X86_CF;
    // 0908bc  ret 
    X86_AT(c, 0x908bcu);
    c.eip = pop32(c); return;
L_908bd:
    X86_TICK(c, 7);
    // 0908bd  call 0x9033e
    X86_AT(c, 0x908bdu);
    push32(c, 0x908c2u); x86_call_known(c, 0x9033eu, f_0009033e); X86_RET(c, 0x908c2u);
    X86_TICK(c, 7);
    // 0908c2  call 0x9093a
    X86_AT(c, 0x908c2u);
    push32(c, 0x908c7u); x86_call_known(c, 0x9093au, f_0009093a); X86_RET(c, 0x908c7u);
    X86_TICK(c, 9);
    // 0908c7  mov ch, al
    X86_AT(c, 0x908c7u);
    s8(c, 5, g8(c, 0));
    // 0908c9  call 0x90f39
    X86_AT(c, 0x908c9u);
    push32(c, 0x908ceu); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x908ceu);
    X86_TICK(c, 11);
    // 0908ce  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x908ceu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0908d2  call 0x90957
    X86_AT(c, 0x908d2u);
    push32(c, 0x908d7u); x86_call_known(c, 0x90957u, f_00090957); X86_RET(c, 0x908d7u);
    X86_TICK(c, 9);
    // 0908d7  mov cl, al
    X86_AT(c, 0x908d7u);
    s8(c, 1, g8(c, 0));
    // 0908d9  call 0x90f39
    X86_AT(c, 0x908d9u);
    push32(c, 0x908deu); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x908deu);
    X86_TICK(c, 11);
    // 0908de  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0x908deu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0908e2  call 0x9098a
    X86_AT(c, 0x908e2u);
    push32(c, 0x908e7u); x86_call_known(c, 0x9098au, f_0009098a); X86_RET(c, 0x908e7u);
    X86_TICK(c, 7);
    // 0908e7  call 0x90f39
    X86_AT(c, 0x908e7u);
    push32(c, 0x908ecu); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x908ecu);
    X86_TICK(c, 7);
    // 0908ec  call 0x909b5
    X86_AT(c, 0x908ecu);
    push32(c, 0x908f1u); x86_call_known(c, 0x909b5u, f_000909b5); X86_RET(c, 0x908f1u);
    X86_TICK(c, 11);
    // 0908f1  mov al, byte ptr es:[esi]
    X86_AT(c, 0x908f1u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0908f4  cmp al, 0xfe
    X86_AT(c, 0x908f4u);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0908f6  je 0x90925
    X86_AT(c, 0x908f6u);
    if (x86_cc(c, 4)) { goto L_90925; }
    X86_TICK(c, 7);
    // 0908f8  cmp al, 0xfd
    X86_AT(c, 0x908f8u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0908fa  je 0x90925
    X86_AT(c, 0x908fau);
    if (x86_cc(c, 4)) { goto L_90925; }
    X86_TICK(c, 39);
    // 0908fc  push bx
    X86_AT(c, 0x908fcu);
    { uint32_t v = (c.r[3] & 0xFFFFu); push16(c, v); }
    // 0908fe  mov ax, word ptr es:[esi + 1]
    X86_AT(c, 0x908feu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 090903  shl al, 4
    X86_AT(c, 0x90903u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 090906  shr ax, 4
    X86_AT(c, 0x90906u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 09090a  mov bx, word ptr es:[esi + 3]
    X86_AT(c, 0x9090au);
    s16(c, 3, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x3u))));
    // 09090f  shl bl, 4
    X86_AT(c, 0x9090fu);
    { uint32_t v = g8(c, 3); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 3, r); }
    // 090912  shr bx, 4
    X86_AT(c, 0x90912u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 3, r); }
    // 090916  mov ah, bl
    X86_AT(c, 0x90916u);
    s8(c, 4, g8(c, 3));
    // 090918  pop bx
    X86_AT(c, 0x90918u);
    { uint32_t v = pop16(c); s16(c, 3, v); }
    // 09091a  mov bh, byte ptr es:[esi + 5]
    X86_AT(c, 0x9091au);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 09091e  call 0x909cd
    X86_AT(c, 0x9091eu);
    push32(c, 0x90923u); x86_call_known(c, 0x909cdu, f_000909cd); X86_RET(c, 0x90923u);
    X86_TICK(c, 12);
    // 090923  clc 
    X86_AT(c, 0x90923u);
    c.fl &= ~X86_CF;
    // 090924  ret 
    X86_AT(c, 0x90924u);
    c.eip = pop32(c); return;
L_90925:
    X86_TICK(c, 12);
    // 090925  stc 
    X86_AT(c, 0x90925u);
    c.fl |= X86_CF;
    // 090926  ret 
    X86_AT(c, 0x90926u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90898u, "ran off the end of a function");
}
void f_00090927(X86Cpu& c) {
    X86_TICK(c, 17);
    // 090927  push ebx
    X86_AT(c, 0x90927u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 090928  movzx ebx, dl
    X86_AT(c, 0x90928u);
    c.r[3] = g8(c, 2);
    // 09092b  cmp byte ptr [ebx + 0x899a5], 0
    X86_AT(c, 0x9092bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x899A5u))), 0x0u, 0, 1);
    // 090932  je 0x90937
    X86_AT(c, 0x90932u);
    if (x86_cc(c, 4)) { goto L_90937; }
    X86_TICK(c, 16);
    // 090934  pop ebx
    X86_AT(c, 0x90934u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090935  clc 
    X86_AT(c, 0x90935u);
    c.fl &= ~X86_CF;
    // 090936  ret 
    X86_AT(c, 0x90936u);
    c.eip = pop32(c); return;
L_90937:
    X86_TICK(c, 16);
    // 090937  pop ebx
    X86_AT(c, 0x90937u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090938  stc 
    X86_AT(c, 0x90938u);
    c.fl |= X86_CF;
    // 090939  ret 
    X86_AT(c, 0x90939u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90927u, "ran off the end of a function");
}
void f_0009093a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 09093a  push ebx
    X86_AT(c, 0x9093au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09093b  cmp al, 0xf0
    X86_AT(c, 0x9093bu);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 09093d  jae 0x90955
    X86_AT(c, 0x9093du);
    if (x86_cc(c, 3)) { goto L_90955; }
    X86_TICK(c, 7);
    // 09093f  cmp al, 0x80
    X86_AT(c, 0x9093fu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 090941  jb 0x90955
    X86_AT(c, 0x90941u);
    if (x86_cc(c, 2)) { goto L_90955; }
    X86_TICK(c, 17);
    // 090943  movzx ebx, dl
    X86_AT(c, 0x90943u);
    c.r[3] = g8(c, 2);
    // 090946  lea ebx, [ebx + 0x899e5]
    X86_AT(c, 0x90946u);
    c.r[3] = (uint32_t)(c.r[3] + 0x899E5u);
    // 09094c  cmp byte ptr [ebx], 0xf
    X86_AT(c, 0x9094cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0xFu, 0, 1);
    // 09094f  ja 0x90955
    X86_AT(c, 0x9094fu);
    if (x86_cc(c, 7)) { goto L_90955; }
    X86_TICK(c, 8);
    // 090951  and al, 0xf0
    X86_AT(c, 0x90951u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 090953  or al, byte ptr [ebx]
    X86_AT(c, 0x90953u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 1)); }
L_90955:
    X86_TICK(c, 14);
    // 090955  pop ebx
    X86_AT(c, 0x90955u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090956  ret 
    X86_AT(c, 0x90956u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9093au, "ran off the end of a function");
}
void f_00090957(X86Cpu& c) {
    X86_TICK(c, 16);
    // 090957  push ebx
    X86_AT(c, 0x90957u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 090958  movzx ebx, dl
    X86_AT(c, 0x90958u);
    c.r[3] = g8(c, 2);
    // 09095b  mov bl, byte ptr [ebx + 0x89a25]
    X86_AT(c, 0x9095bu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89A25u))));
    // 090961  or bl, bl
    X86_AT(c, 0x90961u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | g8(c, 3), 1)); }
    // 090963  je 0x90988
    X86_AT(c, 0x90963u);
    if (x86_cc(c, 4)) { goto L_90988; }
    X86_TICK(c, 7);
    // 090965  and ax, 0x7f
    X86_AT(c, 0x90965u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 090969  movsx bx, bl
    X86_AT(c, 0x90969u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 09096d  add ax, bx
    X86_AT(c, 0x9096du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_90970:
    X86_TICK(c, 7);
    // 090970  cmp ax, 0x7f
    X86_AT(c, 0x90970u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 090974  jle 0x9097c
    X86_AT(c, 0x90974u);
    if (x86_cc(c, 14)) { goto L_9097c; }
    X86_TICK(c, 9);
    // 090976  sub ax, 0xc
    X86_AT(c, 0x90976u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0xCu, 0, 2)); }
    // 09097a  jmp 0x90970
    X86_AT(c, 0x9097au);
    X86_POLL(c, 0x90970u); goto L_90970;
L_9097c:
    X86_TICK(c, 7);
    // 09097c  cmp ax, 0
    X86_AT(c, 0x9097cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x0u, 0, 2);
    // 090980  jge 0x90988
    X86_AT(c, 0x90980u);
    if (x86_cc(c, 13)) { goto L_90988; }
    X86_TICK(c, 9);
    // 090982  add ax, 0xc
    X86_AT(c, 0x90982u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xCu, 0, 2)); }
    // 090986  jmp 0x9097c
    X86_AT(c, 0x90986u);
    X86_POLL(c, 0x9097cu); goto L_9097c;
L_90988:
    X86_TICK(c, 14);
    // 090988  pop ebx
    X86_AT(c, 0x90988u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090989  ret 
    X86_AT(c, 0x90989u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90957u, "ran off the end of a function");
}
void f_0009098a(X86Cpu& c) {
    X86_TICK(c, 23);
    // 09098a  push ebx
    X86_AT(c, 0x9098au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09098b  movzx ebx, dl
    X86_AT(c, 0x9098bu);
    c.r[3] = g8(c, 2);
    // 09098e  mov bl, byte ptr [ebx + 0x89a05]
    X86_AT(c, 0x9098eu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89A05u))));
    // 090994  and ax, 0x7f
    X86_AT(c, 0x90994u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 090998  movsx bx, bl
    X86_AT(c, 0x90998u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 09099c  add ax, bx
    X86_AT(c, 0x9099cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 09099f  cmp ax, 0x7f
    X86_AT(c, 0x9099fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 0909a3  jg 0x909ad
    X86_AT(c, 0x909a3u);
    if (x86_cc(c, 15)) { goto L_909ad; }
    X86_TICK(c, 7);
    // 0909a5  cmp ax, 1
    X86_AT(c, 0x909a5u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
    // 0909a9  jl 0x909b1
    X86_AT(c, 0x909a9u);
    if (x86_cc(c, 12)) { goto L_909b1; }
    X86_TICK(c, 7);
    // 0909ab  jmp 0x909b3
    X86_AT(c, 0x909abu);
    goto L_909b3;
L_909ad:
    X86_TICK(c, 9);
    // 0909ad  mov al, 0x7f
    X86_AT(c, 0x909adu);
    s8(c, 0, 0x7Fu);
    // 0909af  jmp 0x909b3
    X86_AT(c, 0x909afu);
    goto L_909b3;
L_909b1:
    X86_TICK(c, 2);
    // 0909b1  mov al, 1
    X86_AT(c, 0x909b1u);
    s8(c, 0, 0x1u);
L_909b3:
    X86_TICK(c, 14);
    // 0909b3  pop ebx
    X86_AT(c, 0x909b3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0909b4  ret 
    X86_AT(c, 0x909b4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9098au, "ran off the end of a function");
}
void f_000909b5(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0909b5  add esi, 6
    X86_AT(c, 0x909b5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x6u, 0, 4); }
    // 0909b8  cmp esi, dword ptr [0x8996d]
    X86_AT(c, 0x909b8u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8996Du))), 0, 4);
    // 0909be  jb 0x909c6
    X86_AT(c, 0x909beu);
    if (x86_cc(c, 2)) { goto L_909c6; }
    X86_TICK(c, 4);
    // 0909c0  mov esi, dword ptr [0x89967]
    X86_AT(c, 0x909c0u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x89967u)));
L_909c6:
    X86_TICK(c, 12);
    // 0909c6  mov dword ptr [0x89961], esi
    X86_AT(c, 0x909c6u);
    wr32((c.sbase[3] + (uint32_t)(0x89961u)), c.r[6]);
    // 0909cc  ret 
    X86_AT(c, 0x909ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x909b5u, "ran off the end of a function");
}
void f_000909cd(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0909cd  push edi
    X86_AT(c, 0x909cdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0909ce  push ecx
    X86_AT(c, 0x909ceu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0909cf  mov ecx, 0x40
    X86_AT(c, 0x909cfu);
    c.r[1] = 0x40u;
    // 0909d4  lea edi, [0x89a45]
    X86_AT(c, 0x909d4u);
    c.r[7] = (uint32_t)(0x89A45u);
L_909da:
    X86_TICK(c, 12);
    // 0909da  cmp byte ptr [edi], 0
    X86_AT(c, 0x909dau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0909dd  je 0x909ec
    X86_AT(c, 0x909ddu);
    if (x86_cc(c, 4)) { goto L_909ec; }
    X86_TICK(c, 13);
    // 0909df  add edi, 6
    X86_AT(c, 0x909dfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0909e2  loop 0x909da
    X86_AT(c, 0x909e2u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x909dau); goto L_909da; }
    X86_TICK(c, 11);
    // 0909e4  pop ecx
    X86_AT(c, 0x909e4u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0909e5  call 0x90ac3
    X86_AT(c, 0x909e5u);
    push32(c, 0x909eau); x86_call_known(c, 0x90ac3u, f_00090ac3); X86_RET(c, 0x909eau);
    X86_TICK(c, 14);
    // 0909ea  pop edi
    X86_AT(c, 0x909eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0909eb  ret 
    X86_AT(c, 0x909ebu);
    c.eip = pop32(c); return;
L_909ec:
    X86_TICK(c, 19);
    // 0909ec  pop ecx
    X86_AT(c, 0x909ecu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0909ed  mov byte ptr [edi], ch
    X86_AT(c, 0x909edu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 5));
    // 0909ef  mov byte ptr [edi + 1], bl
    X86_AT(c, 0x909efu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 3));
    // 0909f2  mov byte ptr [edi + 2], cl
    X86_AT(c, 0x909f2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 0909f5  mov byte ptr [edi + 3], bh
    X86_AT(c, 0x909f5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 7));
    // 0909f8  or ax, ax
    X86_AT(c, 0x909f8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 0909fb  jne 0x909ff
    X86_AT(c, 0x909fbu);
    if (x86_cc(c, 5)) { goto L_909ff; }
    X86_TICK(c, 2);
    // 0909fd  inc ax
    X86_AT(c, 0x909fdu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
L_909ff:
    X86_TICK(c, 22);
    // 0909ff  mov word ptr [edi + 4], ax
    X86_AT(c, 0x909ffu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 090a03  inc word ptr [0x89990]
    X86_AT(c, 0x90a03u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89990u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 090a0a  pop edi
    X86_AT(c, 0x90a0au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 090a0b  ret 
    X86_AT(c, 0x90a0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x909cdu, "ran off the end of a function");
}
void f_00090a0c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 090a0c  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x90a0cu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 090a10  call 0x9033e
    X86_AT(c, 0x90a10u);
    push32(c, 0x90a15u); x86_call_known(c, 0x9033eu, f_0009033e); X86_RET(c, 0x90a15u);
    X86_TICK(c, 9);
    // 090a15  mov al, 0xf0
    X86_AT(c, 0x90a15u);
    s8(c, 0, 0xF0u);
    // 090a17  call 0x90f39
    X86_AT(c, 0x90a17u);
    push32(c, 0x90a1cu); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x90a1cu);
    X86_TICK(c, 7);
    // 090a1c  call 0x909b5
    X86_AT(c, 0x90a1cu);
    push32(c, 0x90a21u); x86_call_known(c, 0x909b5u, f_000909b5); X86_RET(c, 0x90a21u);
L_90a21:
    X86_TICK(c, 4);
    // 090a21  push esi
    X86_AT(c, 0x90a21u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 090a22  mov ecx, 6
    X86_AT(c, 0x90a22u);
    c.r[1] = 0x6u;
L_90a27:
    X86_TICK(c, 11);
    // 090a27  mov al, byte ptr es:[esi]
    X86_AT(c, 0x90a27u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 090a2a  cmp al, 0xff
    X86_AT(c, 0x90a2au);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 090a2c  je 0x90a37
    X86_AT(c, 0x90a2cu);
    if (x86_cc(c, 4)) { goto L_90a37; }
    X86_TICK(c, 7);
    // 090a2e  call 0x90f39
    X86_AT(c, 0x90a2eu);
    push32(c, 0x90a33u); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x90a33u);
    X86_TICK(c, 7);
    // 090a33  cmp al, 0x80
    X86_AT(c, 0x90a33u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 090a35  jae 0x90a47
    X86_AT(c, 0x90a35u);
    if (x86_cc(c, 3)) { goto L_90a47; }
L_90a37:
    X86_TICK(c, 13);
    // 090a37  inc esi
    X86_AT(c, 0x90a37u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 090a38  loop 0x90a27
    X86_AT(c, 0x90a38u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90a27u); goto L_90a27; }
    X86_TICK(c, 11);
    // 090a3a  pop esi
    X86_AT(c, 0x90a3au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 090a3b  call 0x909b5
    X86_AT(c, 0x90a3bu);
    push32(c, 0x90a40u); x86_call_known(c, 0x909b5u, f_000909b5); X86_RET(c, 0x90a40u);
    X86_TICK(c, 7);
    // 090a40  call 0x90a4a
    X86_AT(c, 0x90a40u);
    push32(c, 0x90a45u); x86_call_known(c, 0x90a4au, f_00090a4a); X86_RET(c, 0x90a45u);
    X86_TICK(c, 7);
    // 090a45  jmp 0x90a21
    X86_AT(c, 0x90a45u);
    X86_POLL(c, 0x90a21u); goto L_90a21;
L_90a47:
    X86_TICK(c, 16);
    // 090a47  pop esi
    X86_AT(c, 0x90a47u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 090a48  clc 
    X86_AT(c, 0x90a48u);
    c.fl &= ~X86_CF;
    // 090a49  ret 
    X86_AT(c, 0x90a49u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90a0cu, "ran off the end of a function");
}
void f_00090a4a(X86Cpu& c) {
    X86_TICK(c, 20);
    // 090a4a  pushal 
    X86_AT(c, 0x90a4au);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 090a4b  mov ecx, 0x19
    X86_AT(c, 0x90a4bu);
    c.r[1] = 0x19u;
L_90a50:
    X86_TICK(c, 13);
    // 090a50  nop 
    X86_AT(c, 0x90a50u);
    // 090a51  loop 0x90a50
    X86_AT(c, 0x90a51u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90a50u); goto L_90a50; }
    X86_TICK(c, 34);
    // 090a53  popal 
    X86_AT(c, 0x90a53u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 090a54  ret 
    X86_AT(c, 0x90a54u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90a4au, "ran off the end of a function");
}
void f_00090a55(X86Cpu& c) {
    X86_TICK(c, 12);
    // 090a55  clc 
    X86_AT(c, 0x90a55u);
    c.fl &= ~X86_CF;
    // 090a56  ret 
    X86_AT(c, 0x90a56u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90a55u, "ran off the end of a function");
}
void f_00090a57(X86Cpu& c) {
    X86_TICK(c, 12);
    // 090a57  clc 
    X86_AT(c, 0x90a57u);
    c.fl &= ~X86_CF;
    // 090a58  ret 
    X86_AT(c, 0x90a58u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90a57u, "ran off the end of a function");
}
void f_00090a59(X86Cpu& c) {
    X86_TICK(c, 24);
    // 090a59  inc word ptr [0x89982]
    X86_AT(c, 0x90a59u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89982u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 090a60  mov al, byte ptr es:[esi + 1]
    X86_AT(c, 0x90a60u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 090a64  mov byte ptr [0x89978], al
    X86_AT(c, 0x90a64u);
    wr8((c.sbase[3] + (uint32_t)(0x89978u)), g8(c, 0));
    // 090a69  clc 
    X86_AT(c, 0x90a69u);
    c.fl &= ~X86_CF;
    // 090a6a  ret 
    X86_AT(c, 0x90a6au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90a59u, "ran off the end of a function");
}
void f_00090a6b(X86Cpu& c) {
    X86_TICK(c, 19);
    // 090a6b  mov ax, word ptr es:[esi + 4]
    X86_AT(c, 0x90a6bu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 090a70  shl al, 1
    X86_AT(c, 0x90a70u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 090a72  shr ax, 1
    X86_AT(c, 0x90a72u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 090a75  mov byte ptr [0x89979], al
    X86_AT(c, 0x90a75u);
    wr8((c.sbase[3] + (uint32_t)(0x89979u)), g8(c, 0));
    // 090a7a  call 0x9146f
    X86_AT(c, 0x90a7au);
    push32(c, 0x90a7fu); x86_call_known(c, 0x9146fu, f_0009146f); X86_RET(c, 0x90a7fu);
    X86_TICK(c, 12);
    // 090a7f  clc 
    X86_AT(c, 0x90a7fu);
    c.fl &= ~X86_CF;
    // 090a80  ret 
    X86_AT(c, 0x90a80u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90a6bu, "ran off the end of a function");
}
void f_00090a81(X86Cpu& c) {
    X86_TICK(c, 13);
    // 090a81  movzx ecx, word ptr [0x89990]
    X86_AT(c, 0x90a81u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0x89990u)));
    // 090a88  or ecx, ecx
    X86_AT(c, 0x90a88u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 090a8a  je 0x90ac2
    X86_AT(c, 0x90a8au);
    if (x86_cc(c, 4)) { goto L_90ac2; }
    X86_TICK(c, 2);
    // 090a8c  lea edi, [0x89a45]
    X86_AT(c, 0x90a8cu);
    c.r[7] = (uint32_t)(0x89A45u);
L_90a92:
    X86_TICK(c, 12);
    // 090a92  cmp byte ptr [edi], 0
    X86_AT(c, 0x90a92u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 090a95  jne 0x90a9c
    X86_AT(c, 0x90a95u);
    if (x86_cc(c, 5)) { goto L_90a9c; }
    X86_TICK(c, 9);
    // 090a97  add edi, 6
    X86_AT(c, 0x90a97u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 090a9a  jmp 0x90a92
    X86_AT(c, 0x90a9au);
    X86_POLL(c, 0x90a92u); goto L_90a92;
L_90a9c:
    X86_TICK(c, 11);
    // 090a9c  dec word ptr [edi + 4]
    X86_AT(c, 0x90a9cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 090aa0  jne 0x90abd
    X86_AT(c, 0x90aa0u);
    if (x86_cc(c, 5)) { goto L_90abd; }
    X86_TICK(c, 28);
    // 090aa2  push ecx
    X86_AT(c, 0x90aa2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 090aa3  xor ch, ch
    X86_AT(c, 0x90aa3u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 090aa5  xchg byte ptr [edi], ch
    X86_AT(c, 0x90aa5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 090aa7  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0x90aa7u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 090aaa  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0x90aaau);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 090aad  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0x90aadu);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 090ab0  call 0x90ac3
    X86_AT(c, 0x90ab0u);
    push32(c, 0x90ab5u); x86_call_known(c, 0x90ac3u, f_00090ac3); X86_RET(c, 0x90ab5u);
    X86_TICK(c, 10);
    // 090ab5  dec word ptr [0x89990]
    X86_AT(c, 0x90ab5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89990u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 090abc  pop ecx
    X86_AT(c, 0x90abcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_90abd:
    X86_TICK(c, 13);
    // 090abd  add edi, 6
    X86_AT(c, 0x90abdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 090ac0  loop 0x90a92
    X86_AT(c, 0x90ac0u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90a92u); goto L_90a92; }
L_90ac2:
    X86_TICK(c, 10);
    // 090ac2  ret 
    X86_AT(c, 0x90ac2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90a81u, "ran off the end of a function");
}
void f_00090ac3(X86Cpu& c) {
    X86_TICK(c, 9);
    // 090ac3  push eax
    X86_AT(c, 0x90ac3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090ac4  or bh, bh
    X86_AT(c, 0x90ac4u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 7), 1)); }
    // 090ac6  je 0x90acb
    X86_AT(c, 0x90ac6u);
    if (x86_cc(c, 4)) { goto L_90acb; }
    X86_TICK(c, 2);
    // 090ac8  and ch, 0x8f
    X86_AT(c, 0x90ac8u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x8Fu, 1)); }
L_90acb:
    X86_TICK(c, 9);
    // 090acb  mov al, ch
    X86_AT(c, 0x90acbu);
    s8(c, 0, g8(c, 5));
    // 090acd  call 0x90f39
    X86_AT(c, 0x90acdu);
    push32(c, 0x90ad2u); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x90ad2u);
    X86_TICK(c, 9);
    // 090ad2  mov al, cl
    X86_AT(c, 0x90ad2u);
    s8(c, 0, g8(c, 1));
    // 090ad4  call 0x90f39
    X86_AT(c, 0x90ad4u);
    push32(c, 0x90ad9u); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x90ad9u);
    X86_TICK(c, 9);
    // 090ad9  mov al, bh
    X86_AT(c, 0x90ad9u);
    s8(c, 0, g8(c, 7));
    // 090adb  call 0x90f39
    X86_AT(c, 0x90adbu);
    push32(c, 0x90ae0u); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x90ae0u);
    X86_TICK(c, 14);
    // 090ae0  pop eax
    X86_AT(c, 0x90ae0u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 090ae1  ret 
    X86_AT(c, 0x90ae1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90ac3u, "ran off the end of a function");
}
void f_00090ee6(X86Cpu& c) {
    X86_TICK(c, 25);
    // 090ee6  cld 
    X86_AT(c, 0x90ee6u);
    c.fl &= ~X86_DF;
    // 090ee7  push esi
    X86_AT(c, 0x90ee7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 090ee8  push ebx
    X86_AT(c, 0x90ee8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 090ee9  and ebx, 7
    X86_AT(c, 0x90ee9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 090eec  shl ebx, 5
    X86_AT(c, 0x90eecu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 090eef  lea ebx, [ebx + 0x89cf5]
    X86_AT(c, 0x90eefu);
    c.r[3] = (uint32_t)(c.r[3] + 0x89CF5u);
    // 090ef5  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0x90ef5u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 090efa  je 0x90f15
    X86_AT(c, 0x90efau);
    if (x86_cc(c, 4)) { goto L_90f15; }
    X86_TICK(c, 28);
    // 090efc  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0x90efcu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 090eff  lodsb al, byte ptr [esi]
    X86_AT(c, 0x90effu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 090f00  dec word ptr [ebx + 0x10]
    X86_AT(c, 0x90f00u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 090f04  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0x90f04u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 090f07  jne 0x90f0b
    X86_AT(c, 0x90f07u);
    if (x86_cc(c, 5)) { goto L_90f0b; }
    X86_TICK(c, 4);
    // 090f09  mov esi, dword ptr [ebx]
    X86_AT(c, 0x90f09u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_90f0b:
    X86_TICK(c, 16);
    // 090f0b  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0x90f0bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 090f0e  xor ah, ah
    X86_AT(c, 0x90f0eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 090f10  xchg byte ptr [ebx + 0x19], ah
    X86_AT(c, 0x90f10u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 4)); s8(c, 4, t); }
    // 090f13  jmp 0x90f17
    X86_AT(c, 0x90f13u);
    goto L_90f17;
L_90f15:
    X86_TICK(c, 2);
    // 090f15  mov ah, 1
    X86_AT(c, 0x90f15u);
    s8(c, 4, 0x1u);
L_90f17:
    X86_TICK(c, 7);
    // 090f17  cmp ah, 1
    X86_AT(c, 0x90f17u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 090f1a  jbe 0x90f22
    X86_AT(c, 0x90f1au);
    if (x86_cc(c, 6)) { goto L_90f22; }
    X86_TICK(c, 2);
    // 090f1c  mov byte ptr [0x89960], ah
    X86_AT(c, 0x90f1cu);
    wr8((c.sbase[3] + (uint32_t)(0x89960u)), g8(c, 4));
L_90f22:
    X86_TICK(c, 18);
    // 090f22  pop ebx
    X86_AT(c, 0x90f22u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090f23  pop esi
    X86_AT(c, 0x90f23u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 090f24  ret 
    X86_AT(c, 0x90f24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90ee6u, "ran off the end of a function");
}
void f_00090f39(X86Cpu& c) {
    X86_TICK(c, 13);
    // 090f39  push eax
    X86_AT(c, 0x90f39u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090f3a  push ebx
    X86_AT(c, 0x90f3au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 090f3b  push edi
    X86_AT(c, 0x90f3bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 090f3c  cmp bl, 0xff
    X86_AT(c, 0x90f3cu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 090f3f  je 0x90fbe
    X86_AT(c, 0x90f3fu);
    if (x86_cc(c, 4)) { goto L_90fbe; }
    X86_TICK(c, 19);
    // 090f45  and ebx, 7
    X86_AT(c, 0x90f45u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 090f48  shl ebx, 5
    X86_AT(c, 0x90f48u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 090f4b  lea ebx, [ebx + 0x89bf5]
    X86_AT(c, 0x90f4bu);
    c.r[3] = (uint32_t)(c.r[3] + 0x89BF5u);
    // 090f51  cmp byte ptr [ebx + 0x18], 0
    X86_AT(c, 0x90f51u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x18u))), 0x0u, 0, 1);
    // 090f55  je 0x90fc9
    X86_AT(c, 0x90f55u);
    if (x86_cc(c, 4)) { goto L_90fc9; }
    X86_TICK(c, 7);
    // 090f5b  cmp al, 0x80
    X86_AT(c, 0x90f5bu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 090f5d  jb 0x90f73
    X86_AT(c, 0x90f5du);
    if (x86_cc(c, 2)) { goto L_90f73; }
    X86_TICK(c, 7);
    // 090f5f  cmp al, 0xf8
    X86_AT(c, 0x90f5fu);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 090f61  jae 0x90f73
    X86_AT(c, 0x90f61u);
    if (x86_cc(c, 3)) { goto L_90f73; }
    X86_TICK(c, 7);
    // 090f63  cmp al, 0xf0
    X86_AT(c, 0x90f63u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 090f65  jae 0x90f70
    X86_AT(c, 0x90f65u);
    if (x86_cc(c, 3)) { goto L_90f70; }
    X86_TICK(c, 11);
    // 090f67  cmp al, byte ptr [ebx + 0x1b]
    X86_AT(c, 0x90f67u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu))), 0, 1);
    // 090f6a  je 0x90fc3
    X86_AT(c, 0x90f6au);
    if (x86_cc(c, 4)) { goto L_90fc3; }
L_90f70:
    X86_TICK(c, 2);
    // 090f70  mov byte ptr [ebx + 0x1b], al
    X86_AT(c, 0x90f70u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), g8(c, 0));
L_90f73:
    X86_TICK(c, 16);
    // 090f73  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0x90f73u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 090f76  cmp word ptr [ebx + 0x10], 0x10
    X86_AT(c, 0x90f76u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x10u, 0, 2);
    // 090f7b  je 0x90f73
    X86_AT(c, 0x90f7bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x90f73u); goto L_90f73; }
    X86_TICK(c, 24);
    // 090f7d  mov byte ptr [edi], al
    X86_AT(c, 0x90f7du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 090f7f  inc edi
    X86_AT(c, 0x90f7fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 090f80  pushf 
    X86_AT(c, 0x90f80u);
    push16(c, c.fl & 0xFFFFu);
    // 090f82  cli 
    X86_AT(c, 0x90f82u);
    c.fl &= ~X86_IF;
    // 090f83  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0x90f83u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 090f88  jne 0x90fa5
    X86_AT(c, 0x90f88u);
    if (x86_cc(c, 5)) { goto L_90fa5; }
    X86_TICK(c, 32);
    // 090f8e  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0x90f8eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 090f91  or al, byte ptr [0x89bc5]
    X86_AT(c, 0x90f91u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(0x89BC5u))), 1)); }
    // 090f97  mov byte ptr [0x89bc5], al
    X86_AT(c, 0x90f97u);
    wr8((c.sbase[3] + (uint32_t)(0x89BC5u)), g8(c, 0));
    // 090f9c  push dx
    X86_AT(c, 0x90f9cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 090f9e  mov dx, 0xe70
    X86_AT(c, 0x90f9eu);
    s16(c, 2, 0xE70u);
    // 090fa2  out dx, al
    X86_AT(c, 0x90fa2u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090fa3  pop dx
    X86_AT(c, 0x90fa3u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_90fa5:
    X86_TICK(c, 23);
    // 090fa5  inc word ptr [ebx + 0x10]
    X86_AT(c, 0x90fa5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 090fa9  popf 
    X86_AT(c, 0x90fa9u);
    x86_popfd(c, 2);
    // 090fab  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x90fabu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 090fae  jne 0x90fb6
    X86_AT(c, 0x90faeu);
    if (x86_cc(c, 5)) { goto L_90fb6; }
    X86_TICK(c, 4);
    // 090fb4  mov edi, dword ptr [ebx]
    X86_AT(c, 0x90fb4u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_90fb6:
    X86_TICK(c, 9);
    // 090fb6  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0x90fb6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
    // 090fb9  jmp 0x90fc3
    X86_AT(c, 0x90fb9u);
    goto L_90fc3;
L_90fbe:
    X86_TICK(c, 7);
    // 090fbe  call 0x919b4
    X86_AT(c, 0x90fbeu);
    push32(c, 0x90fc3u); x86_call_known(c, 0x919b4u, f_000919b4); X86_RET(c, 0x90fc3u);
L_90fc3:
    X86_TICK(c, 24);
    // 090fc3  pop edi
    X86_AT(c, 0x90fc3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 090fc4  pop ebx
    X86_AT(c, 0x90fc4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090fc5  pop eax
    X86_AT(c, 0x90fc5u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 090fc6  xor ah, ah
    X86_AT(c, 0x90fc6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 090fc8  ret 
    X86_AT(c, 0x90fc8u);
    c.eip = pop32(c); return;
L_90fc9:
    X86_TICK(c, 24);
    // 090fc9  pop edi
    X86_AT(c, 0x90fc9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 090fca  pop ebx
    X86_AT(c, 0x90fcau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090fcb  pop eax
    X86_AT(c, 0x90fcbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 090fcc  mov ah, 0xf0
    X86_AT(c, 0x90fccu);
    s8(c, 4, 0xF0u);
    // 090fce  ret 
    X86_AT(c, 0x90fceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90f39u, "ran off the end of a function");
}
void f_00090fcf(X86Cpu& c) {
    X86_TICK(c, 13);
    // 090fcf  push ebx
    X86_AT(c, 0x90fcfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 090fd0  mov bl, byte ptr [0x89992]
    X86_AT(c, 0x90fd0u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0x89992u))));
    // 090fd6  cmp bl, 8
    X86_AT(c, 0x90fd6u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 090fd9  jae 0x90fe0
    X86_AT(c, 0x90fd9u);
    if (x86_cc(c, 3)) { goto L_90fe0; }
    X86_TICK(c, 7);
    // 090fdb  call 0x90f39
    X86_AT(c, 0x90fdbu);
    push32(c, 0x90fe0u); x86_call_known(c, 0x90f39u, f_00090f39); X86_RET(c, 0x90fe0u);
L_90fe0:
    X86_TICK(c, 14);
    // 090fe0  pop ebx
    X86_AT(c, 0x90fe0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090fe1  ret 
    X86_AT(c, 0x90fe1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90fcfu, "ran off the end of a function");
}
void f_00090fe2(X86Cpu& c) {
    X86_TICK(c, 49);
    // 090fe2  pushfd 
    X86_AT(c, 0x90fe2u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 090fe3  cli 
    X86_AT(c, 0x90fe3u);
    c.fl &= ~X86_IF;
    // 090fe4  mov cl, 0x44
    X86_AT(c, 0x90fe4u);
    s8(c, 1, 0x44u);
    // 090fe6  mov ax, 0x2502
    X86_AT(c, 0x90fe6u);
    s16(c, 0, 0x2502u);
    // 090fea  int 0x21
    X86_AT(c, 0x90feau);
    x86_int(c, 0x21, 0x90fecu);
    X86_TICK(c, 5);
    // 090fec  jb 0x9106e
    X86_AT(c, 0x90fecu);
    if (x86_cc(c, 2)) { goto L_9106e; }
    X86_TICK(c, 9);
    // 090ff2  lea edx, [0x9150f]
    X86_AT(c, 0x90ff2u);
    c.r[2] = (uint32_t)(0x9150Fu);
    // 090ff8  cmp ebx, edx
    X86_AT(c, 0x90ff8u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 090ffa  je 0x9106e
    X86_AT(c, 0x90ffau);
    if (x86_cc(c, 4)) { goto L_9106e; }
    X86_TICK(c, 47);
    // 091000  mov eax, es
    X86_AT(c, 0x91000u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 091002  mov dword ptr [0x89bca], ebx
    X86_AT(c, 0x91002u);
    wr32((c.sbase[3] + (uint32_t)(0x89BCAu)), c.r[3]);
    // 091008  mov word ptr [0x89bce], ax
    X86_AT(c, 0x91008u);
    wr16((c.sbase[3] + (uint32_t)(0x89BCEu)), (c.r[0] & 0xFFFFu));
    // 09100e  mov cl, 0x44
    X86_AT(c, 0x9100eu);
    s8(c, 1, 0x44u);
    // 091010  mov ax, 0x2503
    X86_AT(c, 0x91010u);
    s16(c, 0, 0x2503u);
    // 091014  int 0x21
    X86_AT(c, 0x91014u);
    x86_int(c, 0x21, 0x91016u);
    X86_TICK(c, 5);
    // 091016  jb 0x9106e
    X86_AT(c, 0x91016u);
    if (x86_cc(c, 2)) { goto L_9106e; }
    X86_TICK(c, 51);
    // 09101c  mov dword ptr [0x89bd0], ebx
    X86_AT(c, 0x9101cu);
    wr32((c.sbase[3] + (uint32_t)(0x89BD0u)), c.r[3]);
    // 091022  push ds
    X86_AT(c, 0x91022u);
    push32(c, c.sreg[3]);
    // 091023  mov eax, cs
    X86_AT(c, 0x91023u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 091025  mov ds, eax
    X86_AT(c, 0x91025u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 091027  mov cl, 0x44
    X86_AT(c, 0x91027u);
    s8(c, 1, 0x44u);
    // 091029  lea edx, [0x9150f]
    X86_AT(c, 0x91029u);
    c.r[2] = (uint32_t)(0x9150Fu);
    // 09102f  mov ax, 0x2506
    X86_AT(c, 0x9102fu);
    s16(c, 0, 0x2506u);
    // 091033  int 0x21
    X86_AT(c, 0x91033u);
    x86_int(c, 0x21, 0x91035u);
    X86_TICK(c, 9);
    // 091035  pop ds
    X86_AT(c, 0x91035u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 091036  jb 0x9106e
    X86_AT(c, 0x91036u);
    if (x86_cc(c, 2)) { goto L_9106e; }
    X86_TICK(c, 57);
    // 09103c  xor al, al
    X86_AT(c, 0x9103cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 09103e  mov byte ptr [0x89bc5], al
    X86_AT(c, 0x9103eu);
    wr8((c.sbase[3] + (uint32_t)(0x89BC5u)), g8(c, 0));
    // 091043  mov dx, 0xe70
    X86_AT(c, 0x91043u);
    s16(c, 2, 0xE70u);
    // 091047  out dx, al
    X86_AT(c, 0x91047u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091048  mov al, 0xff
    X86_AT(c, 0x91048u);
    s8(c, 0, 0xFFu);
    // 09104a  mov byte ptr [0x89bc7], al
    X86_AT(c, 0x9104au);
    wr8((c.sbase[3] + (uint32_t)(0x89BC7u)), g8(c, 0));
    // 09104f  mov dx, 0xe71
    X86_AT(c, 0x9104fu);
    s16(c, 2, 0xE71u);
    // 091053  out dx, al
    X86_AT(c, 0x91053u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091054  mov byte ptr [0x89bc8], 0
    X86_AT(c, 0x91054u);
    wr8((c.sbase[3] + (uint32_t)(0x89BC8u)), 0x0u);
    // 09105b  in al, 2
    X86_AT(c, 0x9105bu);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 09105d  jmp 0x9105f
    X86_AT(c, 0x9105du);
    goto L_9105f;
L_9105f:
    X86_TICK(c, 7);
    // 09105f  jmp 0x91061
    X86_AT(c, 0x9105fu);
    goto L_91061;
L_91061:
    X86_TICK(c, 7);
    // 091061  jmp 0x91063
    X86_AT(c, 0x91061u);
    goto L_91063;
L_91063:
    X86_TICK(c, 36);
    // 091063  mov dl, 0x10
    X86_AT(c, 0x91063u);
    s8(c, 2, 0x10u);
    // 091065  not dl
    X86_AT(c, 0x91065u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 091067  and al, dl
    X86_AT(c, 0x91067u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 091069  out 2, al
    X86_AT(c, 0x91069u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 09106b  popfd 
    X86_AT(c, 0x9106bu);
    x86_popfd(c, 4);
    // 09106c  clc 
    X86_AT(c, 0x9106cu);
    c.fl &= ~X86_CF;
    // 09106d  ret 
    X86_AT(c, 0x9106du);
    c.eip = pop32(c); return;
L_9106e:
    X86_TICK(c, 18);
    // 09106e  popf 
    X86_AT(c, 0x9106eu);
    x86_popfd(c, 2);
    // 091070  stc 
    X86_AT(c, 0x91070u);
    c.fl |= X86_CF;
    // 091071  ret 
    X86_AT(c, 0x91071u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90fe2u, "ran off the end of a function");
}
void f_00091072(X86Cpu& c) {
    X86_TICK(c, 49);
    // 091072  pushfd 
    X86_AT(c, 0x91072u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 091073  cli 
    X86_AT(c, 0x91073u);
    c.fl &= ~X86_IF;
    // 091074  mov cl, 0x45
    X86_AT(c, 0x91074u);
    s8(c, 1, 0x45u);
    // 091076  mov ax, 0x2502
    X86_AT(c, 0x91076u);
    s16(c, 0, 0x2502u);
    // 09107a  int 0x21
    X86_AT(c, 0x9107au);
    x86_int(c, 0x21, 0x9107cu);
    X86_TICK(c, 5);
    // 09107c  jb 0x910eb
    X86_AT(c, 0x9107cu);
    if (x86_cc(c, 2)) { goto L_910eb; }
    X86_TICK(c, 9);
    // 091082  lea edx, [0x9158a]
    X86_AT(c, 0x91082u);
    c.r[2] = (uint32_t)(0x9158Au);
    // 091088  cmp ebx, edx
    X86_AT(c, 0x91088u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 09108a  je 0x910eb
    X86_AT(c, 0x9108au);
    if (x86_cc(c, 4)) { goto L_910eb; }
    X86_TICK(c, 47);
    // 091090  mov eax, es
    X86_AT(c, 0x91090u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 091092  mov dword ptr [0x89bd4], ebx
    X86_AT(c, 0x91092u);
    wr32((c.sbase[3] + (uint32_t)(0x89BD4u)), c.r[3]);
    // 091098  mov word ptr [0x89bd8], ax
    X86_AT(c, 0x91098u);
    wr16((c.sbase[3] + (uint32_t)(0x89BD8u)), (c.r[0] & 0xFFFFu));
    // 09109e  mov cl, 0x45
    X86_AT(c, 0x9109eu);
    s8(c, 1, 0x45u);
    // 0910a0  mov ax, 0x2503
    X86_AT(c, 0x910a0u);
    s16(c, 0, 0x2503u);
    // 0910a4  int 0x21
    X86_AT(c, 0x910a4u);
    x86_int(c, 0x21, 0x910a6u);
    X86_TICK(c, 5);
    // 0910a6  jb 0x910eb
    X86_AT(c, 0x910a6u);
    if (x86_cc(c, 2)) { goto L_910eb; }
    X86_TICK(c, 51);
    // 0910ac  mov dword ptr [0x89bd0], ebx
    X86_AT(c, 0x910acu);
    wr32((c.sbase[3] + (uint32_t)(0x89BD0u)), c.r[3]);
    // 0910b2  push ds
    X86_AT(c, 0x910b2u);
    push32(c, c.sreg[3]);
    // 0910b3  mov eax, cs
    X86_AT(c, 0x910b3u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 0910b5  mov ds, eax
    X86_AT(c, 0x910b5u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0910b7  lea edx, [0x9158a]
    X86_AT(c, 0x910b7u);
    c.r[2] = (uint32_t)(0x9158Au);
    // 0910bd  mov cl, 0x45
    X86_AT(c, 0x910bdu);
    s8(c, 1, 0x45u);
    // 0910bf  mov ax, 0x2506
    X86_AT(c, 0x910bfu);
    s16(c, 0, 0x2506u);
    // 0910c3  int 0x21
    X86_AT(c, 0x910c3u);
    x86_int(c, 0x21, 0x910c5u);
    X86_TICK(c, 9);
    // 0910c5  pop ds
    X86_AT(c, 0x910c5u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0910c6  jb 0x910eb
    X86_AT(c, 0x910c6u);
    if (x86_cc(c, 2)) { goto L_910eb; }
    X86_TICK(c, 37);
    // 0910cc  xor al, al
    X86_AT(c, 0x910ccu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0910ce  mov byte ptr [0x89bc6], al
    X86_AT(c, 0x910ceu);
    wr8((c.sbase[3] + (uint32_t)(0x89BC6u)), g8(c, 0));
    // 0910d3  mov dx, 0xe73
    X86_AT(c, 0x910d3u);
    s16(c, 2, 0xE73u);
    // 0910d7  out dx, al
    X86_AT(c, 0x910d7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0910d8  in al, 2
    X86_AT(c, 0x910d8u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 0910da  jmp 0x910dc
    X86_AT(c, 0x910dau);
    goto L_910dc;
L_910dc:
    X86_TICK(c, 7);
    // 0910dc  jmp 0x910de
    X86_AT(c, 0x910dcu);
    goto L_910de;
L_910de:
    X86_TICK(c, 7);
    // 0910de  jmp 0x910e0
    X86_AT(c, 0x910deu);
    goto L_910e0;
L_910e0:
    X86_TICK(c, 36);
    // 0910e0  mov dl, 0x20
    X86_AT(c, 0x910e0u);
    s8(c, 2, 0x20u);
    // 0910e2  not dl
    X86_AT(c, 0x910e2u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 0910e4  and al, dl
    X86_AT(c, 0x910e4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0910e6  out 2, al
    X86_AT(c, 0x910e6u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 0910e8  popfd 
    X86_AT(c, 0x910e8u);
    x86_popfd(c, 4);
    // 0910e9  clc 
    X86_AT(c, 0x910e9u);
    c.fl &= ~X86_CF;
    // 0910ea  ret 
    X86_AT(c, 0x910eau);
    c.eip = pop32(c); return;
L_910eb:
    X86_TICK(c, 18);
    // 0910eb  popfd 
    X86_AT(c, 0x910ebu);
    x86_popfd(c, 4);
    // 0910ec  stc 
    X86_AT(c, 0x910ecu);
    c.fl |= X86_CF;
    // 0910ed  ret 
    X86_AT(c, 0x910edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91072u, "ran off the end of a function");
}
void f_000910ee(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0910ee  pushfd 
    X86_AT(c, 0x910eeu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0910ef  cli 
    X86_AT(c, 0x910efu);
    c.fl &= ~X86_IF;
    // 0910f0  call 0x8f84c
    X86_AT(c, 0x910f0u);
    push32(c, 0x910f5u); x86_call_known(c, 0x8f84cu, f_0008f84c); X86_RET(c, 0x910f5u);
    X86_TICK(c, 9);
    // 0910f5  mov dword ptr [0x89bde], eax
    X86_AT(c, 0x910f5u);
    wr32((c.sbase[3] + (uint32_t)(0x89BDEu)), c.r[0]);
    // 0910fa  call 0x8f868
    X86_AT(c, 0x910fau);
    push32(c, 0x910ffu); x86_call_known(c, 0x8f868u, f_0008f868); X86_RET(c, 0x910ffu);
    X86_TICK(c, 13);
    // 0910ff  mov dword ptr [0x89be2], eax
    X86_AT(c, 0x910ffu);
    wr32((c.sbase[3] + (uint32_t)(0x89BE2u)), c.r[0]);
    // 091104  lea eax, [0x91702]
    X86_AT(c, 0x91104u);
    c.r[0] = (uint32_t)(0x91702u);
    // 09110a  push eax
    X86_AT(c, 0x9110au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09110b  call 0x8f82c
    X86_AT(c, 0x9110bu);
    push32(c, 0x91110u); x86_call_known(c, 0x8f82cu, f_0008f82c); X86_RET(c, 0x91110u);
    X86_TICK(c, 13);
    // 091110  add esp, 4
    X86_AT(c, 0x91110u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 091113  lea eax, [0x91820]
    X86_AT(c, 0x91113u);
    c.r[0] = (uint32_t)(0x91820u);
    // 091119  push eax
    X86_AT(c, 0x91119u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09111a  call 0x8f858
    X86_AT(c, 0x9111au);
    push32(c, 0x9111fu); x86_call_known(c, 0x8f858u, f_0008f858); X86_RET(c, 0x9111fu);
    X86_TICK(c, 20);
    // 09111f  add esp, 4
    X86_AT(c, 0x9111fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 091122  popfd 
    X86_AT(c, 0x91122u);
    x86_popfd(c, 4);
    // 091123  clc 
    X86_AT(c, 0x91123u);
    c.fl &= ~X86_CF;
    // 091124  ret 
    X86_AT(c, 0x91124u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x910eeu, "ran off the end of a function");
}
void f_00091128(X86Cpu& c) {
    X86_TICK(c, 59);
    // 091128  pushfd 
    X86_AT(c, 0x91128u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 091129  cli 
    X86_AT(c, 0x91129u);
    c.fl &= ~X86_IF;
    // 09112a  mov dx, 0xe70
    X86_AT(c, 0x9112au);
    s16(c, 2, 0xE70u);
    // 09112e  mov al, 0
    X86_AT(c, 0x9112eu);
    s8(c, 0, 0x0u);
    // 091130  out dx, al
    X86_AT(c, 0x91130u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091131  mov dx, 0xe71
    X86_AT(c, 0x91131u);
    s16(c, 2, 0xE71u);
    // 091135  mov al, 0
    X86_AT(c, 0x91135u);
    s8(c, 0, 0x0u);
    // 091137  out dx, al
    X86_AT(c, 0x91137u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091138  in al, 2
    X86_AT(c, 0x91138u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 09113a  jmp 0x9113c
    X86_AT(c, 0x9113au);
    goto L_9113c;
L_9113c:
    X86_TICK(c, 7);
    // 09113c  jmp 0x9113e
    X86_AT(c, 0x9113cu);
    goto L_9113e;
L_9113e:
    X86_TICK(c, 7);
    // 09113e  jmp 0x91140
    X86_AT(c, 0x9113eu);
    goto L_91140;
L_91140:
    X86_TICK(c, 71);
    // 091140  or al, 0x10
    X86_AT(c, 0x91140u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 091142  out 2, al
    X86_AT(c, 0x91142u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 091144  push ds
    X86_AT(c, 0x91144u);
    push32(c, c.sreg[3]);
    // 091145  mov cl, 0x44
    X86_AT(c, 0x91145u);
    s8(c, 1, 0x44u);
    // 091147  mov edx, dword ptr [0x89bca]
    X86_AT(c, 0x91147u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x89BCAu)));
    // 09114d  mov ax, word ptr [0x89bce]
    X86_AT(c, 0x9114du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89BCEu))));
    // 091153  mov ebx, dword ptr [0x89bd0]
    X86_AT(c, 0x91153u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x89BD0u)));
    // 091159  mov ds, eax
    X86_AT(c, 0x91159u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 09115b  mov ax, 0x2507
    X86_AT(c, 0x9115bu);
    s16(c, 0, 0x2507u);
    // 09115f  int 0x21
    X86_AT(c, 0x9115fu);
    x86_int(c, 0x21, 0x91161u);
    X86_TICK(c, 20);
    // 091161  pop ds
    X86_AT(c, 0x91161u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 091162  popfd 
    X86_AT(c, 0x91162u);
    x86_popfd(c, 4);
    // 091163  ret 
    X86_AT(c, 0x91163u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91128u, "ran off the end of a function");
}
void f_00091164(X86Cpu& c) {
    X86_TICK(c, 49);
    // 091164  pushfd 
    X86_AT(c, 0x91164u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 091165  cli 
    X86_AT(c, 0x91165u);
    c.fl &= ~X86_IF;
    // 091166  mov al, byte ptr [0x89bc6]
    X86_AT(c, 0x91166u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89BC6u))));
    // 09116b  and al, 0xfc
    X86_AT(c, 0x9116bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 09116d  mov dx, 0xe73
    X86_AT(c, 0x9116du);
    s16(c, 2, 0xE73u);
    // 091171  out dx, al
    X86_AT(c, 0x91171u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091172  mov byte ptr [0x89bc6], al
    X86_AT(c, 0x91172u);
    wr8((c.sbase[3] + (uint32_t)(0x89BC6u)), g8(c, 0));
    // 091177  in al, 2
    X86_AT(c, 0x91177u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 091179  jmp 0x9117b
    X86_AT(c, 0x91179u);
    goto L_9117b;
L_9117b:
    X86_TICK(c, 7);
    // 09117b  jmp 0x9117d
    X86_AT(c, 0x9117bu);
    goto L_9117d;
L_9117d:
    X86_TICK(c, 7);
    // 09117d  jmp 0x9117f
    X86_AT(c, 0x9117du);
    goto L_9117f;
L_9117f:
    X86_TICK(c, 71);
    // 09117f  or al, 0x20
    X86_AT(c, 0x9117fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 091181  out 2, al
    X86_AT(c, 0x91181u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 091183  push ds
    X86_AT(c, 0x91183u);
    push32(c, c.sreg[3]);
    // 091184  mov cl, 0x45
    X86_AT(c, 0x91184u);
    s8(c, 1, 0x45u);
    // 091186  mov edx, dword ptr [0x89bd4]
    X86_AT(c, 0x91186u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x89BD4u)));
    // 09118c  mov ax, word ptr [0x89bd8]
    X86_AT(c, 0x9118cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89BD8u))));
    // 091192  mov ebx, dword ptr [0x89bda]
    X86_AT(c, 0x91192u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x89BDAu)));
    // 091198  mov ds, eax
    X86_AT(c, 0x91198u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 09119a  mov ax, 0x2507
    X86_AT(c, 0x9119au);
    s16(c, 0, 0x2507u);
    // 09119e  int 0x21
    X86_AT(c, 0x9119eu);
    x86_int(c, 0x21, 0x911a0u);
    X86_TICK(c, 20);
    // 0911a0  pop ds
    X86_AT(c, 0x911a0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0911a1  popfd 
    X86_AT(c, 0x911a1u);
    x86_popfd(c, 4);
    // 0911a2  ret 
    X86_AT(c, 0x911a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91164u, "ran off the end of a function");
}
}

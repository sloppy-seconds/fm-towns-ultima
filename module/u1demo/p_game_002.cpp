#include "p_game_funcs.h"
namespace p_game {
void f_0008f0ac(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08f0ac  call 0x8ed74
    X86_AT(c, 0x8f0acu);
    push32(c, 0x8f0b1u); x86_call_known(c, 0x8ed74u, f_0008ed74); X86_RET(c, 0x8f0b1u);
    X86_TICK(c, 11);
    // 08f0b1  push 0
    X86_AT(c, 0x8f0b1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0b3  push 0x1838
    X86_AT(c, 0x8f0b3u);
    { uint32_t v = 0x1838u; push32(c, v); }
    // 08f0b8  call 0x8ed40
    X86_AT(c, 0x8f0b8u);
    push32(c, 0x8f0bdu); x86_call_known(c, 0x8ed40u, f_0008ed40); X86_RET(c, 0x8f0bdu);
    X86_TICK(c, 11);
    // 08f0bd  push 1
    X86_AT(c, 0x8f0bdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08f0bf  push 0x184c
    X86_AT(c, 0x8f0bfu);
    { uint32_t v = 0x184Cu; push32(c, v); }
    // 08f0c4  call 0x8ed40
    X86_AT(c, 0x8f0c4u);
    push32(c, 0x8f0c9u); x86_call_known(c, 0x8ed40u, f_0008ed40); X86_RET(c, 0x8f0c9u);
    X86_TICK(c, 11);
    // 08f0c9  push 2
    X86_AT(c, 0x8f0c9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f0cb  push 0x1860
    X86_AT(c, 0x8f0cbu);
    { uint32_t v = 0x1860u; push32(c, v); }
    // 08f0d0  call 0x8ed40
    X86_AT(c, 0x8f0d0u);
    push32(c, 0x8f0d5u); x86_call_known(c, 0x8ed40u, f_0008ed40); X86_RET(c, 0x8f0d5u);
    X86_TICK(c, 11);
    // 08f0d5  push 3
    X86_AT(c, 0x8f0d5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08f0d7  push 0x1874
    X86_AT(c, 0x8f0d7u);
    { uint32_t v = 0x1874u; push32(c, v); }
    // 08f0dc  call 0x8ed40
    X86_AT(c, 0x8f0dcu);
    push32(c, 0x8f0e1u); x86_call_known(c, 0x8ed40u, f_0008ed40); X86_RET(c, 0x8f0e1u);
    X86_TICK(c, 9);
    // 08f0e1  push 0x1888
    X86_AT(c, 0x8f0e1u);
    { uint32_t v = 0x1888u; push32(c, v); }
    // 08f0e6  call 0x8ecc0
    X86_AT(c, 0x8f0e6u);
    push32(c, 0x8f0ebu); x86_call_known(c, 0x8ecc0u, f_0008ecc0); X86_RET(c, 0x8f0ebu);
    X86_TICK(c, 27);
    // 08f0eb  push 0xa
    X86_AT(c, 0x8f0ebu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 08f0ed  push 0xf
    X86_AT(c, 0x8f0edu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08f0ef  push 0xf
    X86_AT(c, 0x8f0efu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08f0f1  push 2
    X86_AT(c, 0x8f0f1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f0f3  push 0x47
    X86_AT(c, 0x8f0f3u);
    { uint32_t v = 0x47u; push32(c, v); }
    // 08f0f5  push 0x34
    X86_AT(c, 0x8f0f5u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 08f0f7  push 0x250
    X86_AT(c, 0x8f0f7u);
    { uint32_t v = 0x250u; push32(c, v); }
    // 08f0fc  push 0x16a
    X86_AT(c, 0x8f0fcu);
    { uint32_t v = 0x16Au; push32(c, v); }
    // 08f101  push 0x1d
    X86_AT(c, 0x8f101u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 08f103  push 0
    X86_AT(c, 0x8f103u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f105  call 0x8d2fc
    X86_AT(c, 0x8f105u);
    push32(c, 0x8f10au); x86_call_known(c, 0x8d2fcu, f_0008d2fc); X86_RET(c, 0x8f10au);
    X86_TICK(c, 11);
    // 08f10a  add esp, 0x4c
    X86_AT(c, 0x8f10au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4Cu, 0, 4); }
    // 08f10d  push 0
    X86_AT(c, 0x8f10du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f10f  call 0x8d440
    X86_AT(c, 0x8f10fu);
    push32(c, 0x8f114u); x86_call_known(c, 0x8d440u, f_0008d440); X86_RET(c, 0x8f114u);
    X86_TICK(c, 9);
    // 08f114  push 3
    X86_AT(c, 0x8f114u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08f116  call 0x8ec14
    X86_AT(c, 0x8f116u);
    push32(c, 0x8f11bu); x86_call_known(c, 0x8ec14u, f_0008ec14); X86_RET(c, 0x8f11bu);
    X86_TICK(c, 2);
    // 08f11b  add esp, 8
    X86_AT(c, 0x8f11bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_8f11e:
    X86_TICK(c, 7);
    // 08f11e  call 0x8ee10
    X86_AT(c, 0x8f11eu);
    push32(c, 0x8f123u); x86_call_known(c, 0x8ee10u, f_0008ee10); X86_RET(c, 0x8f123u);
    X86_TICK(c, 7);
    // 08f123  jmp 0x8f11e
    X86_AT(c, 0x8f123u);
    X86_POLL(c, 0x8f11eu); goto L_8f11e;
    x86_fault(c, 0x8f0acu, "ran off the end of a function");
}
void f_0008f16b(X86Cpu& c) {
    X86_TICK(c, 51);
    // 08f16b  enter 0, 0
    X86_AT(c, 0x8f16bu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f16f  pushal 
    X86_AT(c, 0x8f16fu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08f170  pushfd 
    X86_AT(c, 0x8f170u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 08f171  cli 
    X86_AT(c, 0x8f171u);
    c.fl &= ~X86_IF;
    // 08f172  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8f172u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f175  mov dword ptr [0x89248], eax
    X86_AT(c, 0x8f175u);
    wr32((c.sbase[3] + (uint32_t)(0x89248u)), c.r[0]);
    // 08f17a  mov word ptr [0x8924c], ds
    X86_AT(c, 0x8f17au);
    wr16((c.sbase[3] + (uint32_t)(0x8924Cu)), (uint32_t)c.sreg[3]);
    // 08f180  mov bl, 0
    X86_AT(c, 0x8f180u);
    s8(c, 3, 0x0u);
    // 08f182  xor ah, ah
    X86_AT(c, 0x8f182u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 08f184  call 0x8f774
    X86_AT(c, 0x8f184u);
    push32(c, 0x8f189u); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f189u);
    X86_TICK(c, 7);
    // 08f189  and al, al
    X86_AT(c, 0x8f189u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08f18b  jne 0x8f1c9
    X86_AT(c, 0x8f18bu);
    if (x86_cc(c, 5)) { goto L_8f1c9; }
    X86_TICK(c, 7);
    // 08f191  call 0x8f520
    X86_AT(c, 0x8f191u);
    push32(c, 0x8f196u); x86_call_known(c, 0x8f520u, f_0008f520); X86_RET(c, 0x8f196u);
    X86_TICK(c, 7);
    // 08f196  and al, al
    X86_AT(c, 0x8f196u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08f198  jne 0x8f1c9
    X86_AT(c, 0x8f198u);
    if (x86_cc(c, 5)) { goto L_8f1c9; }
    X86_TICK(c, 13);
    // 08f19e  mov bl, 0xff
    X86_AT(c, 0x8f19eu);
    s8(c, 3, 0xFFu);
    // 08f1a0  mov ecx, 1
    X86_AT(c, 0x8f1a0u);
    c.r[1] = 0x1u;
    // 08f1a5  mov ah, 0x15
    X86_AT(c, 0x8f1a5u);
    s8(c, 4, 0x15u);
    // 08f1a7  call 0x8f774
    X86_AT(c, 0x8f1a7u);
    push32(c, 0x8f1acu); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f1acu);
    X86_TICK(c, 11);
    // 08f1ac  mov bl, 0
    X86_AT(c, 0x8f1acu);
    s8(c, 3, 0x0u);
    // 08f1ae  mov ah, 0x15
    X86_AT(c, 0x8f1aeu);
    s8(c, 4, 0x15u);
    // 08f1b0  call 0x8f774
    X86_AT(c, 0x8f1b0u);
    push32(c, 0x8f1b5u); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f1b5u);
    X86_TICK(c, 13);
    // 08f1b5  mov bl, 0xff
    X86_AT(c, 0x8f1b5u);
    s8(c, 3, 0xFFu);
    // 08f1b7  mov ecx, 0xdd
    X86_AT(c, 0x8f1b7u);
    c.r[1] = 0xDDu;
    // 08f1bc  mov ah, 0x16
    X86_AT(c, 0x8f1bcu);
    s8(c, 4, 0x16u);
    // 08f1be  call 0x8f774
    X86_AT(c, 0x8f1beu);
    push32(c, 0x8f1c3u); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f1c3u);
    X86_TICK(c, 48);
    // 08f1c3  popfd 
    X86_AT(c, 0x8f1c3u);
    x86_popfd(c, 4);
    // 08f1c4  popal 
    X86_AT(c, 0x8f1c4u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f1c5  leave 
    X86_AT(c, 0x8f1c5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f1c6  xor eax, eax
    X86_AT(c, 0x8f1c6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f1c8  ret 
    X86_AT(c, 0x8f1c8u);
    c.eip = pop32(c); return;
L_8f1c9:
    X86_TICK(c, 48);
    // 08f1c9  popfd 
    X86_AT(c, 0x8f1c9u);
    x86_popfd(c, 4);
    // 08f1ca  popal 
    X86_AT(c, 0x8f1cau);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f1cb  leave 
    X86_AT(c, 0x8f1cbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f1cc  mov eax, 1
    X86_AT(c, 0x8f1ccu);
    c.r[0] = 0x1u;
    // 08f1d1  ret 
    X86_AT(c, 0x8f1d1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f16bu, "ran off the end of a function");
}
void f_0008f1d2(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08f1d2  enter 0, 0
    X86_AT(c, 0x8f1d2u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f1d6  push ebx
    X86_AT(c, 0x8f1d6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f1d7  mov bl, 0
    X86_AT(c, 0x8f1d7u);
    s8(c, 3, 0x0u);
    // 08f1d9  xor ah, ah
    X86_AT(c, 0x8f1d9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 08f1db  call 0x8f774
    X86_AT(c, 0x8f1dbu);
    push32(c, 0x8f1e0u); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f1e0u);
    X86_TICK(c, 13);
    // 08f1e0  xor bh, bh
    X86_AT(c, 0x8f1e0u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 08f1e2  mov dx, 0x2c00
    X86_AT(c, 0x8f1e2u);
    s16(c, 2, 0x2C00u);
    // 08f1e6  mov ah, 0x11
    X86_AT(c, 0x8f1e6u);
    s8(c, 4, 0x11u);
    // 08f1e8  call 0x8f774
    X86_AT(c, 0x8f1e8u);
    push32(c, 0x8f1edu); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f1edu);
    X86_TICK(c, 7);
    // 08f1ed  call 0x8f5da
    X86_AT(c, 0x8f1edu);
    push32(c, 0x8f1f2u); x86_call_known(c, 0x8f5dau, f_0008f5da); X86_RET(c, 0x8f1f2u);
    X86_TICK(c, 22);
    // 08f1f2  xor eax, eax
    X86_AT(c, 0x8f1f2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f1f4  pop ebx
    X86_AT(c, 0x8f1f4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f1f5  leave 
    X86_AT(c, 0x8f1f5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f1f6  ret 
    X86_AT(c, 0x8f1f6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f1d2u, "ran off the end of a function");
}
void f_0008f243(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08f243  enter 0, 0
    X86_AT(c, 0x8f243u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f247  push ebx
    X86_AT(c, 0x8f247u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f248  push edx
    X86_AT(c, 0x8f248u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f249  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f249u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f24c  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8f24cu);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08f24f  mov ah, 4
    X86_AT(c, 0x8f24fu);
    s8(c, 4, 0x4u);
    // 08f251  call 0x8f774
    X86_AT(c, 0x8f251u);
    push32(c, 0x8f256u); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f256u);
    X86_TICK(c, 27);
    // 08f256  movzx eax, al
    X86_AT(c, 0x8f256u);
    c.r[0] = g8(c, 0);
    // 08f259  pop edx
    X86_AT(c, 0x8f259u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f25a  pop ebx
    X86_AT(c, 0x8f25au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f25b  leave 
    X86_AT(c, 0x8f25bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f25c  ret 
    X86_AT(c, 0x8f25cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f243u, "ran off the end of a function");
}
void f_0008f25d(X86Cpu& c) {
    X86_TICK(c, 33);
    // 08f25d  enter 0, 0
    X86_AT(c, 0x8f25du);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f261  push ebx
    X86_AT(c, 0x8f261u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f262  push edx
    X86_AT(c, 0x8f262u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f263  push esi
    X86_AT(c, 0x8f263u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08f264  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f264u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f267  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8f267u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08f26a  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8f26au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08f26d  mov ah, 5
    X86_AT(c, 0x8f26du);
    s8(c, 4, 0x5u);
    // 08f26f  call 0x8f774
    X86_AT(c, 0x8f26fu);
    push32(c, 0x8f274u); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f274u);
    X86_TICK(c, 31);
    // 08f274  movzx eax, al
    X86_AT(c, 0x8f274u);
    c.r[0] = g8(c, 0);
    // 08f277  pop esi
    X86_AT(c, 0x8f277u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08f278  pop edx
    X86_AT(c, 0x8f278u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f279  pop ebx
    X86_AT(c, 0x8f279u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f27a  leave 
    X86_AT(c, 0x8f27au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f27b  ret 
    X86_AT(c, 0x8f27bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f25du, "ran off the end of a function");
}
void f_0008f34d(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08f34d  enter 0, 0
    X86_AT(c, 0x8f34du);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f351  push ebx
    X86_AT(c, 0x8f351u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f352  push ecx
    X86_AT(c, 0x8f352u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08f353  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f353u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f356  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8f356u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08f359  mov ah, 0x15
    X86_AT(c, 0x8f359u);
    s8(c, 4, 0x15u);
    // 08f35b  call 0x8f774
    X86_AT(c, 0x8f35bu);
    push32(c, 0x8f360u); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f360u);
    X86_TICK(c, 27);
    // 08f360  movzx eax, al
    X86_AT(c, 0x8f360u);
    c.r[0] = g8(c, 0);
    // 08f363  pop ecx
    X86_AT(c, 0x8f363u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 08f364  pop ebx
    X86_AT(c, 0x8f364u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f365  leave 
    X86_AT(c, 0x8f365u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f366  ret 
    X86_AT(c, 0x8f366u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f34du, "ran off the end of a function");
}
void f_0008f3cb(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08f3cb  enter 0, 0
    X86_AT(c, 0x8f3cbu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f3cf  push ebx
    X86_AT(c, 0x8f3cfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f3d0  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f3d0u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f3d3  mov ah, 0x21
    X86_AT(c, 0x8f3d3u);
    s8(c, 4, 0x21u);
    // 08f3d5  call 0x8f774
    X86_AT(c, 0x8f3d5u);
    push32(c, 0x8f3dau); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f3dau);
    X86_TICK(c, 23);
    // 08f3da  movzx eax, al
    X86_AT(c, 0x8f3dau);
    c.r[0] = g8(c, 0);
    // 08f3dd  pop ebx
    X86_AT(c, 0x8f3ddu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f3de  leave 
    X86_AT(c, 0x8f3deu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f3df  ret 
    X86_AT(c, 0x8f3dfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f3cbu, "ran off the end of a function");
}
void f_0008f3f5(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08f3f5  enter 0, 0
    X86_AT(c, 0x8f3f5u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f3f9  push edx
    X86_AT(c, 0x8f3f9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f3fa  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8f3fau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f3fd  mov ah, 0x23
    X86_AT(c, 0x8f3fdu);
    s8(c, 4, 0x23u);
    // 08f3ff  call 0x8f774
    X86_AT(c, 0x8f3ffu);
    push32(c, 0x8f404u); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f404u);
    X86_TICK(c, 23);
    // 08f404  movzx eax, al
    X86_AT(c, 0x8f404u);
    c.r[0] = g8(c, 0);
    // 08f407  pop edx
    X86_AT(c, 0x8f407u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f408  leave 
    X86_AT(c, 0x8f408u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f409  ret 
    X86_AT(c, 0x8f409u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f3f5u, "ran off the end of a function");
}
void f_0008f4c8(X86Cpu& c) {
    X86_TICK(c, 30);
    // 08f4c8  enter 0, 0
    X86_AT(c, 0x8f4c8u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f4cc  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8f4ccu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f4cf  mov dword ptr [0x89258], eax
    X86_AT(c, 0x8f4cfu);
    wr32((c.sbase[3] + (uint32_t)(0x89258u)), c.r[0]);
    // 08f4d4  xor eax, eax
    X86_AT(c, 0x8f4d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f4d6  leave 
    X86_AT(c, 0x8f4d6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f4d7  ret 
    X86_AT(c, 0x8f4d7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f4c8u, "ran off the end of a function");
}
void f_0008f4e8(X86Cpu& c) {
    X86_TICK(c, 14);
    // 08f4e8  mov eax, dword ptr [0x89258]
    X86_AT(c, 0x8f4e8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89258u)));
    // 08f4ed  ret 
    X86_AT(c, 0x8f4edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f4e8u, "ran off the end of a function");
}
void f_0008f4f4(X86Cpu& c) {
    X86_TICK(c, 30);
    // 08f4f4  enter 0, 0
    X86_AT(c, 0x8f4f4u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f4f8  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8f4f8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f4fb  mov dword ptr [0x89260], eax
    X86_AT(c, 0x8f4fbu);
    wr32((c.sbase[3] + (uint32_t)(0x89260u)), c.r[0]);
    // 08f500  xor eax, eax
    X86_AT(c, 0x8f500u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f502  leave 
    X86_AT(c, 0x8f502u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f503  ret 
    X86_AT(c, 0x8f503u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f4f4u, "ran off the end of a function");
}
void f_0008f504(X86Cpu& c) {
    X86_TICK(c, 14);
    // 08f504  mov eax, dword ptr [0x89260]
    X86_AT(c, 0x8f504u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89260u)));
    // 08f509  ret 
    X86_AT(c, 0x8f509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f504u, "ran off the end of a function");
}
void f_0008f520(X86Cpu& c) {
    X86_TICK(c, 87);
    // 08f520  push es
    X86_AT(c, 0x8f520u);
    push32(c, c.sreg[0]);
    // 08f521  pushal 
    X86_AT(c, 0x8f521u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08f522  pushfd 
    X86_AT(c, 0x8f522u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 08f523  cli 
    X86_AT(c, 0x8f523u);
    c.fl &= ~X86_IF;
    // 08f524  mov word ptr [0x8926b], 0
    X86_AT(c, 0x8f524u);
    wr16((c.sbase[3] + (uint32_t)(0x8926Bu)), 0x0u);
    // 08f52d  mov byte ptr [0x8926a], 0
    X86_AT(c, 0x8f52du);
    wr8((c.sbase[3] + (uint32_t)(0x8926Au)), 0x0u);
    // 08f534  mov byte ptr [0x89269], 0
    X86_AT(c, 0x8f534u);
    wr8((c.sbase[3] + (uint32_t)(0x89269u)), 0x0u);
    // 08f53b  lea eax, [0x8f797]
    X86_AT(c, 0x8f53bu);
    c.r[0] = (uint32_t)(0x8F797u);
    // 08f541  mov dword ptr [0x89258], eax
    X86_AT(c, 0x8f541u);
    wr32((c.sbase[3] + (uint32_t)(0x89258u)), c.r[0]);
    // 08f546  mov dword ptr [0x89260], eax
    X86_AT(c, 0x8f546u);
    wr32((c.sbase[3] + (uint32_t)(0x89260u)), c.r[0]);
    // 08f54b  mov dword ptr [0x8925c], eax
    X86_AT(c, 0x8f54bu);
    wr32((c.sbase[3] + (uint32_t)(0x8925Cu)), c.r[0]);
    // 08f550  mov dword ptr [0x89264], eax
    X86_AT(c, 0x8f550u);
    wr32((c.sbase[3] + (uint32_t)(0x89264u)), c.r[0]);
    // 08f555  mov byte ptr [0x89268], 0
    X86_AT(c, 0x8f555u);
    wr8((c.sbase[3] + (uint32_t)(0x89268u)), 0x0u);
    // 08f55c  mov cl, 0x4d
    X86_AT(c, 0x8f55cu);
    s8(c, 1, 0x4Du);
    // 08f55e  mov ax, 0x2502
    X86_AT(c, 0x8f55eu);
    s16(c, 0, 0x2502u);
    // 08f562  int 0x21
    X86_AT(c, 0x8f562u);
    x86_int(c, 0x21, 0x8f564u);
    X86_TICK(c, 5);
    // 08f564  jb 0x8f5d0
    X86_AT(c, 0x8f564u);
    if (x86_cc(c, 2)) { goto L_8f5d0; }
    X86_TICK(c, 47);
    // 08f56a  mov eax, es
    X86_AT(c, 0x8f56au);
    c.r[0] = (uint32_t)c.sreg[0];
    // 08f56c  mov dword ptr [0x8924e], ebx
    X86_AT(c, 0x8f56cu);
    wr32((c.sbase[3] + (uint32_t)(0x8924Eu)), c.r[3]);
    // 08f572  mov word ptr [0x89252], ax
    X86_AT(c, 0x8f572u);
    wr16((c.sbase[3] + (uint32_t)(0x89252u)), (c.r[0] & 0xFFFFu));
    // 08f578  mov cl, 0x4d
    X86_AT(c, 0x8f578u);
    s8(c, 1, 0x4Du);
    // 08f57a  mov ax, 0x2503
    X86_AT(c, 0x8f57au);
    s16(c, 0, 0x2503u);
    // 08f57e  int 0x21
    X86_AT(c, 0x8f57eu);
    x86_int(c, 0x21, 0x8f580u);
    X86_TICK(c, 5);
    // 08f580  jb 0x8f5d0
    X86_AT(c, 0x8f580u);
    if (x86_cc(c, 2)) { goto L_8f5d0; }
    X86_TICK(c, 51);
    // 08f586  mov dword ptr [0x89254], ebx
    X86_AT(c, 0x8f586u);
    wr32((c.sbase[3] + (uint32_t)(0x89254u)), c.r[3]);
    // 08f58c  push ds
    X86_AT(c, 0x8f58cu);
    push32(c, c.sreg[3]);
    // 08f58d  mov eax, cs
    X86_AT(c, 0x8f58du);
    c.r[0] = (uint32_t)c.sreg[1];
    // 08f58f  mov ds, eax
    X86_AT(c, 0x8f58fu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f591  mov cl, 0x4d
    X86_AT(c, 0x8f591u);
    s8(c, 1, 0x4Du);
    // 08f593  lea edx, [0x8f620]
    X86_AT(c, 0x8f593u);
    c.r[2] = (uint32_t)(0x8F620u);
    // 08f599  mov ax, 0x2506
    X86_AT(c, 0x8f599u);
    s16(c, 0, 0x2506u);
    // 08f59d  int 0x21
    X86_AT(c, 0x8f59du);
    x86_int(c, 0x21, 0x8f59fu);
    X86_TICK(c, 9);
    // 08f59f  pop ds
    X86_AT(c, 0x8f59fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 08f5a0  jb 0x8f5d0
    X86_AT(c, 0x8f5a0u);
    if (x86_cc(c, 2)) { goto L_8f5d0; }
    X86_TICK(c, 11);
    // 08f5a6  mov bl, 0
    X86_AT(c, 0x8f5a6u);
    s8(c, 3, 0x0u);
    // 08f5a8  mov ah, 0x15
    X86_AT(c, 0x8f5a8u);
    s8(c, 4, 0x15u);
    // 08f5aa  call 0x8f774
    X86_AT(c, 0x8f5aau);
    push32(c, 0x8f5afu); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f5afu);
    X86_TICK(c, 11);
    // 08f5af  mov bl, 0
    X86_AT(c, 0x8f5afu);
    s8(c, 3, 0x0u);
    // 08f5b1  mov ah, 0x16
    X86_AT(c, 0x8f5b1u);
    s8(c, 4, 0x16u);
    // 08f5b3  call 0x8f774
    X86_AT(c, 0x8f5b3u);
    push32(c, 0x8f5b8u); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f5b8u);
    X86_TICK(c, 19);
    // 08f5b8  in al, 0x12
    X86_AT(c, 0x8f5b8u);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 08f5ba  jmp 0x8f5bc
    X86_AT(c, 0x8f5bau);
    goto L_8f5bc;
L_8f5bc:
    X86_TICK(c, 7);
    // 08f5bc  jmp 0x8f5be
    X86_AT(c, 0x8f5bcu);
    goto L_8f5be;
L_8f5be:
    X86_TICK(c, 7);
    // 08f5be  jmp 0x8f5c0
    X86_AT(c, 0x8f5beu);
    goto L_8f5c0;
L_8f5c0:
    X86_TICK(c, 66);
    // 08f5c0  mov dl, 0x20
    X86_AT(c, 0x8f5c0u);
    s8(c, 2, 0x20u);
    // 08f5c2  xor dl, 0xff
    X86_AT(c, 0x8f5c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ 0xFFu, 1)); }
    // 08f5c5  and al, dl
    X86_AT(c, 0x8f5c5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 08f5c7  out 0x12, al
    X86_AT(c, 0x8f5c7u);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 08f5c9  popfd 
    X86_AT(c, 0x8f5c9u);
    x86_popfd(c, 4);
    // 08f5ca  popal 
    X86_AT(c, 0x8f5cau);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f5cb  pop es
    X86_AT(c, 0x8f5cbu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08f5cc  xor eax, eax
    X86_AT(c, 0x8f5ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f5ce  clc 
    X86_AT(c, 0x8f5ceu);
    c.fl &= ~X86_CF;
    // 08f5cf  ret 
    X86_AT(c, 0x8f5cfu);
    c.eip = pop32(c); return;
L_8f5d0:
    X86_TICK(c, 48);
    // 08f5d0  popfd 
    X86_AT(c, 0x8f5d0u);
    x86_popfd(c, 4);
    // 08f5d1  popal 
    X86_AT(c, 0x8f5d1u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f5d2  pop es
    X86_AT(c, 0x8f5d2u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08f5d3  mov eax, 2
    X86_AT(c, 0x8f5d3u);
    c.r[0] = 0x2u;
    // 08f5d8  stc 
    X86_AT(c, 0x8f5d8u);
    c.fl |= X86_CF;
    // 08f5d9  ret 
    X86_AT(c, 0x8f5d9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f520u, "ran off the end of a function");
}
void f_0008f5da(X86Cpu& c) {
    X86_TICK(c, 37);
    // 08f5da  pushal 
    X86_AT(c, 0x8f5dau);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08f5db  pushf 
    X86_AT(c, 0x8f5dbu);
    push16(c, c.fl & 0xFFFFu);
    // 08f5dd  cli 
    X86_AT(c, 0x8f5ddu);
    c.fl &= ~X86_IF;
    // 08f5de  mov bl, 0
    X86_AT(c, 0x8f5deu);
    s8(c, 3, 0x0u);
    // 08f5e0  mov ah, 0x15
    X86_AT(c, 0x8f5e0u);
    s8(c, 4, 0x15u);
    // 08f5e2  call 0x8f774
    X86_AT(c, 0x8f5e2u);
    push32(c, 0x8f5e7u); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f5e7u);
    X86_TICK(c, 11);
    // 08f5e7  mov bl, 0
    X86_AT(c, 0x8f5e7u);
    s8(c, 3, 0x0u);
    // 08f5e9  mov ah, 0x16
    X86_AT(c, 0x8f5e9u);
    s8(c, 4, 0x16u);
    // 08f5eb  call 0x8f774
    X86_AT(c, 0x8f5ebu);
    push32(c, 0x8f5f0u); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f5f0u);
    X86_TICK(c, 19);
    // 08f5f0  in al, 0x12
    X86_AT(c, 0x8f5f0u);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 08f5f2  jmp 0x8f5f4
    X86_AT(c, 0x8f5f2u);
    goto L_8f5f4;
L_8f5f4:
    X86_TICK(c, 7);
    // 08f5f4  jmp 0x8f5f6
    X86_AT(c, 0x8f5f4u);
    goto L_8f5f6;
L_8f5f6:
    X86_TICK(c, 7);
    // 08f5f6  jmp 0x8f5f8
    X86_AT(c, 0x8f5f6u);
    goto L_8f5f8;
L_8f5f8:
    X86_TICK(c, 71);
    // 08f5f8  or al, 0x20
    X86_AT(c, 0x8f5f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 08f5fa  out 0x12, al
    X86_AT(c, 0x8f5fau);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 08f5fc  push ds
    X86_AT(c, 0x8f5fcu);
    push32(c, c.sreg[3]);
    // 08f5fd  mov cl, 0x4d
    X86_AT(c, 0x8f5fdu);
    s8(c, 1, 0x4Du);
    // 08f5ff  mov edx, dword ptr [0x8924e]
    X86_AT(c, 0x8f5ffu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8924Eu)));
    // 08f605  mov ax, word ptr [0x89252]
    X86_AT(c, 0x8f605u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89252u))));
    // 08f60b  mov ebx, dword ptr [0x89254]
    X86_AT(c, 0x8f60bu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x89254u)));
    // 08f611  mov ds, eax
    X86_AT(c, 0x8f611u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f613  mov ax, 0x2507
    X86_AT(c, 0x8f613u);
    s16(c, 0, 0x2507u);
    // 08f617  int 0x21
    X86_AT(c, 0x8f617u);
    x86_int(c, 0x21, 0x8f619u);
    X86_TICK(c, 46);
    // 08f619  xor eax, eax
    X86_AT(c, 0x8f619u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 08f61b  pop ds
    X86_AT(c, 0x8f61bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 08f61c  popf 
    X86_AT(c, 0x8f61cu);
    x86_popfd(c, 2);
    // 08f61e  popal 
    X86_AT(c, 0x8f61eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f61f  ret 
    X86_AT(c, 0x8f61fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f5dau, "ran off the end of a function");
}
void f_0008f620(X86Cpu& c) {
    X86_TICK(c, 22);
    // 08f620  push eax
    X86_AT(c, 0x8f620u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08f621  push ds
    X86_AT(c, 0x8f621u);
    push32(c, c.sreg[3]);
    // 08f622  mov ax, 0x14
    X86_AT(c, 0x8f622u);
    s16(c, 0, 0x14u);
    // 08f626  mov ds, eax
    X86_AT(c, 0x8f626u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f628  cld 
    X86_AT(c, 0x8f628u);
    c.fl &= ~X86_DF;
    // 08f629  cmp word ptr [0x8926b], 0
    X86_AT(c, 0x8f629u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8926Bu))), 0x0u, 0, 2);
    // 08f631  jne 0x8f647
    X86_AT(c, 0x8f631u);
    if (x86_cc(c, 5)) { goto L_8f647; }
    X86_TICK(c, 8);
    // 08f633  mov dword ptr [0x8926d], esp
    X86_AT(c, 0x8f633u);
    wr32((c.sbase[3] + (uint32_t)(0x8926Du)), c.r[4]);
    // 08f639  mov word ptr [0x89271], ss
    X86_AT(c, 0x8f639u);
    wr16((c.sbase[3] + (uint32_t)(0x89271u)), (uint32_t)c.sreg[2]);
    // 08f63f  mov ss, eax
    X86_AT(c, 0x8f63fu);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f641  lea esp, [0x89673]
    X86_AT(c, 0x8f641u);
    c.r[4] = (uint32_t)(0x89673u);
L_8f647:
    X86_TICK(c, 57);
    // 08f647  inc word ptr [0x8926b]
    X86_AT(c, 0x8f647u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8926Bu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 08f64e  sti 
    X86_AT(c, 0x8f64eu);
    c.fl |= X86_IF;
    // 08f64f  push es
    X86_AT(c, 0x8f64fu);
    push32(c, c.sreg[0]);
    // 08f650  push fs
    X86_AT(c, 0x8f650u);
    push32(c, c.sreg[4]);
    // 08f652  push gs
    X86_AT(c, 0x8f652u);
    push32(c, c.sreg[5]);
    // 08f654  pushal 
    X86_AT(c, 0x8f654u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08f655  mov es, eax
    X86_AT(c, 0x8f655u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f657  mov dx, 0x4e9
    X86_AT(c, 0x8f657u);
    s16(c, 2, 0x4E9u);
    // 08f65b  in al, dx
    X86_AT(c, 0x8f65bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 08f65c  push eax
    X86_AT(c, 0x8f65cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08f65d  test al, 1
    X86_AT(c, 0x8f65du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 08f65f  je 0x8f6a9
    X86_AT(c, 0x8f65fu);
    if (x86_cc(c, 4)) { goto L_8f6a9; }
    X86_TICK(c, 9);
    // 08f665  mov ah, 0x10
    X86_AT(c, 0x8f665u);
    s8(c, 4, 0x10u);
    // 08f667  call 0x8f774
    X86_AT(c, 0x8f667u);
    push32(c, 0x8f66cu); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f66cu);
    X86_TICK(c, 7);
    // 08f66c  test dl, 1
    X86_AT(c, 0x8f66cu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 08f66f  je 0x8f680
    X86_AT(c, 0x8f66fu);
    if (x86_cc(c, 4)) { goto L_8f680; }
    X86_TICK(c, 11);
    // 08f671  push edx
    X86_AT(c, 0x8f671u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f672  mov ah, 0x17
    X86_AT(c, 0x8f672u);
    s8(c, 4, 0x17u);
    // 08f674  call 0x8f774
    X86_AT(c, 0x8f674u);
    push32(c, 0x8f679u); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f679u);
    X86_TICK(c, 7);
    // 08f679  call dword ptr [0x89258]
    X86_AT(c, 0x8f679u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x89258u))); push32(c, 0x8f67fu); x86_call(c, t); X86_RET(c, 0x8f67fu); }
    X86_TICK(c, 4);
    // 08f67f  pop edx
    X86_AT(c, 0x8f67fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_8f680:
    X86_TICK(c, 7);
    // 08f680  test dl, 2
    X86_AT(c, 0x8f680u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 08f683  je 0x8f6a9
    X86_AT(c, 0x8f683u);
    if (x86_cc(c, 4)) { goto L_8f6a9; }
    X86_TICK(c, 11);
    // 08f685  push edx
    X86_AT(c, 0x8f685u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f686  mov ah, 0x18
    X86_AT(c, 0x8f686u);
    s8(c, 4, 0x18u);
    // 08f688  call 0x8f774
    X86_AT(c, 0x8f688u);
    push32(c, 0x8f68du); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f68du);
    X86_TICK(c, 11);
    // 08f68d  mov byte ptr [0x89269], 0xff
    X86_AT(c, 0x8f68du);
    wr8((c.sbase[3] + (uint32_t)(0x89269u)), 0xFFu);
    // 08f694  mov ah, 0x50
    X86_AT(c, 0x8f694u);
    s8(c, 4, 0x50u);
    // 08f696  call 0x8f774
    X86_AT(c, 0x8f696u);
    push32(c, 0x8f69bu); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f69bu);
    X86_TICK(c, 9);
    // 08f69b  mov byte ptr [0x89269], 0
    X86_AT(c, 0x8f69bu);
    wr8((c.sbase[3] + (uint32_t)(0x89269u)), 0x0u);
    // 08f6a2  call dword ptr [0x8925c]
    X86_AT(c, 0x8f6a2u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8925Cu))); push32(c, 0x8f6a8u); x86_call(c, t); X86_RET(c, 0x8f6a8u); }
    X86_TICK(c, 4);
    // 08f6a8  pop edx
    X86_AT(c, 0x8f6a8u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_8f6a9:
    X86_TICK(c, 11);
    // 08f6a9  pop eax
    X86_AT(c, 0x8f6a9u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 08f6aa  test al, 8
    X86_AT(c, 0x8f6aau);
    (void)x86_logic(c, g8(c, 0) & 0x8u, 1);
    // 08f6ac  je 0x8f6c5
    X86_AT(c, 0x8f6acu);
    if (x86_cc(c, 4)) { goto L_8f6c5; }
    X86_TICK(c, 13);
    // 08f6ae  push edx
    X86_AT(c, 0x8f6aeu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f6af  mov byte ptr [0x89269], 0xff
    X86_AT(c, 0x8f6afu);
    wr8((c.sbase[3] + (uint32_t)(0x89269u)), 0xFFu);
    // 08f6b6  mov ah, 0x51
    X86_AT(c, 0x8f6b6u);
    s8(c, 4, 0x51u);
    // 08f6b8  call 0x8f774
    X86_AT(c, 0x8f6b8u);
    push32(c, 0x8f6bdu); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8f6bdu);
    X86_TICK(c, 6);
    // 08f6bd  mov byte ptr [0x89269], 0
    X86_AT(c, 0x8f6bdu);
    wr8((c.sbase[3] + (uint32_t)(0x89269u)), 0x0u);
    // 08f6c4  pop edx
    X86_AT(c, 0x8f6c4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_8f6c5:
    X86_TICK(c, 9);
    // 08f6c5  cli 
    X86_AT(c, 0x8f6c5u);
    c.fl &= ~X86_IF;
    // 08f6c6  call 0x8f729
    X86_AT(c, 0x8f6c6u);
    push32(c, 0x8f6cbu); x86_call_known(c, 0x8f729u, f_0008f729); X86_RET(c, 0x8f6cbu);
    X86_TICK(c, 12);
    // 08f6cb  cmp byte ptr [0x8926a], 0
    X86_AT(c, 0x8f6cbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8926Au))), 0x0u, 0, 1);
    // 08f6d2  jne 0x8f704
    X86_AT(c, 0x8f6d2u);
    if (x86_cc(c, 5)) { goto L_8f704; }
    X86_TICK(c, 9);
    // 08f6d4  mov byte ptr [0x8926a], 0xff
    X86_AT(c, 0x8f6d4u);
    wr8((c.sbase[3] + (uint32_t)(0x8926Au)), 0xFFu);
    // 08f6db  test dl, 1
    X86_AT(c, 0x8f6dbu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 08f6de  je 0x8f6e8
    X86_AT(c, 0x8f6deu);
    if (x86_cc(c, 4)) { goto L_8f6e8; }
    X86_TICK(c, 9);
    // 08f6e0  push edx
    X86_AT(c, 0x8f6e0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f6e1  call dword ptr [0x89260]
    X86_AT(c, 0x8f6e1u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x89260u))); push32(c, 0x8f6e7u); x86_call(c, t); X86_RET(c, 0x8f6e7u); }
    X86_TICK(c, 4);
    // 08f6e7  pop edx
    X86_AT(c, 0x8f6e7u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_8f6e8:
    X86_TICK(c, 7);
    // 08f6e8  test dl, 2
    X86_AT(c, 0x8f6e8u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 08f6eb  je 0x8f6fc
    X86_AT(c, 0x8f6ebu);
    if (x86_cc(c, 4)) { goto L_8f6fc; }
    X86_TICK(c, 12);
    // 08f6ed  xor byte ptr [0x89268], 0xff
    X86_AT(c, 0x8f6edu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89268u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0xFFu, 1)); }
    // 08f6f4  je 0x8f6fc
    X86_AT(c, 0x8f6f4u);
    if (x86_cc(c, 4)) { goto L_8f6fc; }
    X86_TICK(c, 7);
    // 08f6f6  call dword ptr [0x89264]
    X86_AT(c, 0x8f6f6u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x89264u))); push32(c, 0x8f6fcu); x86_call(c, t); X86_RET(c, 0x8f6fcu); }
L_8f6fc:
    X86_TICK(c, 4);
    // 08f6fc  cli 
    X86_AT(c, 0x8f6fcu);
    c.fl &= ~X86_IF;
    // 08f6fd  mov byte ptr [0x8926a], 0
    X86_AT(c, 0x8f6fdu);
    wr8((c.sbase[3] + (uint32_t)(0x8926Au)), 0x0u);
L_8f704:
    X86_TICK(c, 49);
    // 08f704  popal 
    X86_AT(c, 0x8f704u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08f705  pop gs
    X86_AT(c, 0x8f705u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 08f707  pop fs
    X86_AT(c, 0x8f707u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 08f709  pop es
    X86_AT(c, 0x8f709u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08f70a  cli 
    X86_AT(c, 0x8f70au);
    c.fl &= ~X86_IF;
    // 08f70b  dec word ptr [0x8926b]
    X86_AT(c, 0x8f70bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8926Bu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 08f712  jne 0x8f720
    X86_AT(c, 0x8f712u);
    if (x86_cc(c, 5)) { goto L_8f720; }
    X86_TICK(c, 8);
    // 08f714  mov esp, dword ptr [0x8926d]
    X86_AT(c, 0x8f714u);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x8926Du)));
    // 08f71a  mov ss, word ptr [0x89271]
    X86_AT(c, 0x8f71au);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x89271u))) & 0xFFFFu);
L_8f720:
    X86_TICK(c, 14);
    // 08f720  pop ds
    X86_AT(c, 0x8f720u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 08f721  pop eax
    X86_AT(c, 0x8f721u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 08f722  iretd 
    X86_AT(c, 0x8f722u);
    x86_iret(c, 4); return;
    x86_fault(c, 0x8f620u, "ran off the end of a function");
}
void f_0008f723(X86Cpu& c) {
    X86_TICK(c, 14);
    // 08f723  mov al, byte ptr [0x89269]
    X86_AT(c, 0x8f723u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89269u))));
    // 08f728  ret 
    X86_AT(c, 0x8f728u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f723u, "ran off the end of a function");
}
void f_0008f729(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08f729  push ax
    X86_AT(c, 0x8f729u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 08f72b  mov al, 0xb
    X86_AT(c, 0x8f72bu);
    s8(c, 0, 0xBu);
    // 08f72d  out 0, al
    X86_AT(c, 0x8f72du);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 08f72f  jmp 0x8f731
    X86_AT(c, 0x8f72fu);
    goto L_8f731;
L_8f731:
    X86_TICK(c, 7);
    // 08f731  jmp 0x8f733
    X86_AT(c, 0x8f731u);
    goto L_8f733;
L_8f733:
    X86_TICK(c, 7);
    // 08f733  jmp 0x8f735
    X86_AT(c, 0x8f733u);
    goto L_8f735;
L_8f735:
    X86_TICK(c, 19);
    // 08f735  in al, 0
    X86_AT(c, 0x8f735u);
    s8(c, 0, x86_in(c, 0x0u, 1));
    // 08f737  jmp 0x8f739
    X86_AT(c, 0x8f737u);
    goto L_8f739;
L_8f739:
    X86_TICK(c, 7);
    // 08f739  jmp 0x8f73b
    X86_AT(c, 0x8f739u);
    goto L_8f73b;
L_8f73b:
    X86_TICK(c, 7);
    // 08f73b  jmp 0x8f73d
    X86_AT(c, 0x8f73bu);
    goto L_8f73d;
L_8f73d:
    X86_TICK(c, 7);
    // 08f73d  test al, 0x7f
    X86_AT(c, 0x8f73du);
    (void)x86_logic(c, g8(c, 0) & 0x7Fu, 1);
    // 08f73f  je 0x8f747
    X86_AT(c, 0x8f73fu);
    if (x86_cc(c, 4)) { goto L_8f747; }
    X86_TICK(c, 21);
    // 08f741  mov al, 0x20
    X86_AT(c, 0x8f741u);
    s8(c, 0, 0x20u);
    // 08f743  out 0, al
    X86_AT(c, 0x8f743u);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 08f745  jmp 0x8f76b
    X86_AT(c, 0x8f745u);
    goto L_8f76b;
L_8f747:
    X86_TICK(c, 21);
    // 08f747  mov al, 0x20
    X86_AT(c, 0x8f747u);
    s8(c, 0, 0x20u);
    // 08f749  out 0x10, al
    X86_AT(c, 0x8f749u);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 08f74b  jmp 0x8f74d
    X86_AT(c, 0x8f74bu);
    goto L_8f74d;
L_8f74d:
    X86_TICK(c, 7);
    // 08f74d  jmp 0x8f74f
    X86_AT(c, 0x8f74du);
    goto L_8f74f;
L_8f74f:
    X86_TICK(c, 7);
    // 08f74f  jmp 0x8f751
    X86_AT(c, 0x8f74fu);
    goto L_8f751;
L_8f751:
    X86_TICK(c, 21);
    // 08f751  mov al, 0xb
    X86_AT(c, 0x8f751u);
    s8(c, 0, 0xBu);
    // 08f753  out 0x10, al
    X86_AT(c, 0x8f753u);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 08f755  jmp 0x8f757
    X86_AT(c, 0x8f755u);
    goto L_8f757;
L_8f757:
    X86_TICK(c, 7);
    // 08f757  jmp 0x8f759
    X86_AT(c, 0x8f757u);
    goto L_8f759;
L_8f759:
    X86_TICK(c, 7);
    // 08f759  jmp 0x8f75b
    X86_AT(c, 0x8f759u);
    goto L_8f75b;
L_8f75b:
    X86_TICK(c, 19);
    // 08f75b  in al, 0x10
    X86_AT(c, 0x8f75bu);
    s8(c, 0, x86_in(c, 0x10u, 1));
    // 08f75d  jmp 0x8f75f
    X86_AT(c, 0x8f75du);
    goto L_8f75f;
L_8f75f:
    X86_TICK(c, 7);
    // 08f75f  jmp 0x8f761
    X86_AT(c, 0x8f75fu);
    goto L_8f761;
L_8f761:
    X86_TICK(c, 7);
    // 08f761  jmp 0x8f763
    X86_AT(c, 0x8f761u);
    goto L_8f763;
L_8f763:
    X86_TICK(c, 7);
    // 08f763  or al, al
    X86_AT(c, 0x8f763u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 08f765  jne 0x8f76b
    X86_AT(c, 0x8f765u);
    if (x86_cc(c, 5)) { goto L_8f76b; }
    X86_TICK(c, 14);
    // 08f767  mov al, 0x20
    X86_AT(c, 0x8f767u);
    s8(c, 0, 0x20u);
    // 08f769  out 0, al
    X86_AT(c, 0x8f769u);
    x86_out(c, 0x0u, 1, g8(c, 0));
L_8f76b:
    X86_TICK(c, 7);
    // 08f76b  jmp 0x8f76d
    X86_AT(c, 0x8f76bu);
    goto L_8f76d;
L_8f76d:
    X86_TICK(c, 7);
    // 08f76d  jmp 0x8f76f
    X86_AT(c, 0x8f76du);
    goto L_8f76f;
L_8f76f:
    X86_TICK(c, 7);
    // 08f76f  jmp 0x8f771
    X86_AT(c, 0x8f76fu);
    goto L_8f771;
L_8f771:
    X86_TICK(c, 14);
    // 08f771  pop ax
    X86_AT(c, 0x8f771u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 08f773  ret 
    X86_AT(c, 0x8f773u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f729u, "ran off the end of a function");
}
void f_0008f774(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08f774  push fs
    X86_AT(c, 0x8f774u);
    push32(c, c.sreg[4]);
    // 08f776  push gs
    X86_AT(c, 0x8f776u);
    push32(c, c.sreg[5]);
    // 08f778  push edi
    X86_AT(c, 0x8f778u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08f779  lgs edi, fword ptr [0x89248]
    X86_AT(c, 0x8f779u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89248u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 5, s); c.r[7] = o; }
    // 08f780  push ax
    X86_AT(c, 0x8f780u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 08f782  mov ax, 0x110
    X86_AT(c, 0x8f782u);
    s16(c, 0, 0x110u);
    // 08f786  mov fs, eax
    X86_AT(c, 0x8f786u);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f788  pop ax
    X86_AT(c, 0x8f788u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 08f78a  lcall fword ptr fs:[0x80]
    X86_AT(c, 0x8f78au);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x8f791u); }
    X86_RET(c, 0x8f791u);
    X86_TICK(c, 22);
    // 08f791  pop edi
    X86_AT(c, 0x8f791u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08f792  pop gs
    X86_AT(c, 0x8f792u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 08f794  pop fs
    X86_AT(c, 0x8f794u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 08f796  ret 
    X86_AT(c, 0x8f796u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f774u, "ran off the end of a function");
}
void f_0008f797(X86Cpu& c) {
    X86_TICK(c, 10);
    // 08f797  ret 
    X86_AT(c, 0x8f797u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f797u, "ran off the end of a function");
}
void f_0008f7f8(X86Cpu& c) {
    X86_TICK(c, 31);
    // 08f7f8  enter 0, 0
    X86_AT(c, 0x8f7f8u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f7fc  push ebx
    X86_AT(c, 0x8f7fcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f7fd  push edx
    X86_AT(c, 0x8f7fdu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f7fe  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f7feu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f801  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8f801u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08f804  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0x8f804u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08f807  mov ah, 0x43
    X86_AT(c, 0x8f807u);
    s8(c, 4, 0x43u);
    // 08f809  call 0x8f895
    X86_AT(c, 0x8f809u);
    push32(c, 0x8f80eu); x86_call_known(c, 0x8f895u, f_0008f895); X86_RET(c, 0x8f80eu);
    X86_TICK(c, 27);
    // 08f80e  movzx eax, al
    X86_AT(c, 0x8f80eu);
    c.r[0] = g8(c, 0);
    // 08f811  pop edx
    X86_AT(c, 0x8f811u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f812  pop ebx
    X86_AT(c, 0x8f812u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f813  leave 
    X86_AT(c, 0x8f813u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f814  ret 
    X86_AT(c, 0x8f814u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f7f8u, "ran off the end of a function");
}
void f_0008f815(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08f815  mov ah, 0x44
    X86_AT(c, 0x8f815u);
    s8(c, 4, 0x44u);
    // 08f817  call 0x8f895
    X86_AT(c, 0x8f817u);
    push32(c, 0x8f81cu); x86_call_known(c, 0x8f895u, f_0008f895); X86_RET(c, 0x8f81cu);
    X86_TICK(c, 13);
    // 08f81c  movzx eax, al
    X86_AT(c, 0x8f81cu);
    c.r[0] = g8(c, 0);
    // 08f81f  ret 
    X86_AT(c, 0x8f81fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f815u, "ran off the end of a function");
}
void f_0008f849(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08f849  enter 0, 0
    X86_AT(c, 0x8f849u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f84d  push ebx
    X86_AT(c, 0x8f84du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f84e  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f84eu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f851  mov ah, 0x46
    X86_AT(c, 0x8f851u);
    s8(c, 4, 0x46u);
    // 08f853  call 0x8f895
    X86_AT(c, 0x8f853u);
    push32(c, 0x8f858u); x86_call_known(c, 0x8f895u, f_0008f895); X86_RET(c, 0x8f858u);
    X86_TICK(c, 23);
    // 08f858  movzx eax, al
    X86_AT(c, 0x8f858u);
    c.r[0] = g8(c, 0);
    // 08f85b  pop ebx
    X86_AT(c, 0x8f85bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f85c  leave 
    X86_AT(c, 0x8f85cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f85d  ret 
    X86_AT(c, 0x8f85du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f849u, "ran off the end of a function");
}
void f_0008f880(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08f880  enter 0, 0
    X86_AT(c, 0x8f880u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f884  push edx
    X86_AT(c, 0x8f884u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f885  mov dl, byte ptr [ebp + 8]
    X86_AT(c, 0x8f885u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08f888  mov ah, 0x49
    X86_AT(c, 0x8f888u);
    s8(c, 4, 0x49u);
    // 08f88a  call 0x8f895
    X86_AT(c, 0x8f88au);
    push32(c, 0x8f88fu); x86_call_known(c, 0x8f895u, f_0008f895); X86_RET(c, 0x8f88fu);
    X86_TICK(c, 23);
    // 08f88f  movzx eax, al
    X86_AT(c, 0x8f88fu);
    c.r[0] = g8(c, 0);
    // 08f892  pop edx
    X86_AT(c, 0x8f892u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f893  leave 
    X86_AT(c, 0x8f893u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f894  ret 
    X86_AT(c, 0x8f894u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f880u, "ran off the end of a function");
}
void f_0008f895(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08f895  push fs
    X86_AT(c, 0x8f895u);
    push32(c, c.sreg[4]);
    // 08f897  push ax
    X86_AT(c, 0x8f897u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 08f899  mov ax, 0x110
    X86_AT(c, 0x8f899u);
    s16(c, 0, 0x110u);
    // 08f89d  mov fs, eax
    X86_AT(c, 0x8f89du);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 08f89f  pop ax
    X86_AT(c, 0x8f89fu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 08f8a1  lcall fword ptr fs:[0x80]
    X86_AT(c, 0x8f8a1u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x8f8a8u); }
    X86_RET(c, 0x8f8a8u);
    X86_TICK(c, 14);
    // 08f8a8  pop fs
    X86_AT(c, 0x8f8a8u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 08f8aa  ret 
    X86_AT(c, 0x8f8aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f895u, "ran off the end of a function");
}
void f_0008f8f9(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08f8f9  mov ah, 0
    X86_AT(c, 0x8f8f9u);
    s8(c, 4, 0x0u);
    // 08f8fb  call 0x8faf8
    X86_AT(c, 0x8f8fbu);
    push32(c, 0x8f900u); x86_call_known(c, 0x8faf8u, f_0008faf8); X86_RET(c, 0x8f900u);
    X86_TICK(c, 13);
    // 08f900  movzx eax, al
    X86_AT(c, 0x8f900u);
    c.r[0] = g8(c, 0);
    // 08f903  ret 
    X86_AT(c, 0x8f903u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f8f9u, "ran off the end of a function");
}
void f_0008f90f(X86Cpu& c) {
    X86_TICK(c, 33);
    // 08f90f  enter 0, 0
    X86_AT(c, 0x8f90fu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f913  push esi
    X86_AT(c, 0x8f913u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08f914  push ecx
    X86_AT(c, 0x8f914u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08f915  push edx
    X86_AT(c, 0x8f915u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f916  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x8f916u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f919  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8f919u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08f91c  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0x8f91cu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08f91f  mov ah, 2
    X86_AT(c, 0x8f91fu);
    s8(c, 4, 0x2u);
    // 08f921  call 0x8faf8
    X86_AT(c, 0x8f921u);
    push32(c, 0x8f926u); x86_call_known(c, 0x8faf8u, f_0008faf8); X86_RET(c, 0x8f926u);
    X86_TICK(c, 31);
    // 08f926  movzx eax, al
    X86_AT(c, 0x8f926u);
    c.r[0] = g8(c, 0);
    // 08f929  pop edx
    X86_AT(c, 0x8f929u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f92a  pop ecx
    X86_AT(c, 0x8f92au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 08f92b  pop esi
    X86_AT(c, 0x8f92bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08f92c  leave 
    X86_AT(c, 0x8f92cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f92d  ret 
    X86_AT(c, 0x8f92du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f90fu, "ran off the end of a function");
}
void f_0008f92e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08f92e  mov ah, 3
    X86_AT(c, 0x8f92eu);
    s8(c, 4, 0x3u);
    // 08f930  call 0x8faf8
    X86_AT(c, 0x8f930u);
    push32(c, 0x8f935u); x86_call_known(c, 0x8faf8u, f_0008faf8); X86_RET(c, 0x8f935u);
    X86_TICK(c, 13);
    // 08f935  movzx eax, al
    X86_AT(c, 0x8f935u);
    c.r[0] = g8(c, 0);
    // 08f938  ret 
    X86_AT(c, 0x8f938u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f92eu, "ran off the end of a function");
}
void f_0008f944(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08f944  mov ah, 5
    X86_AT(c, 0x8f944u);
    s8(c, 4, 0x5u);
    // 08f946  call 0x8faf8
    X86_AT(c, 0x8f946u);
    push32(c, 0x8f94bu); x86_call_known(c, 0x8faf8u, f_0008faf8); X86_RET(c, 0x8f94bu);
    X86_TICK(c, 13);
    // 08f94b  movzx eax, al
    X86_AT(c, 0x8f94bu);
    c.r[0] = g8(c, 0);
    // 08f94e  ret 
    X86_AT(c, 0x8f94eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f944u, "ran off the end of a function");
}
void f_0008f94f(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08f94f  push es
    X86_AT(c, 0x8f94fu);
    push32(c, c.sreg[0]);
    // 08f950  push esi
    X86_AT(c, 0x8f950u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08f951  push ebx
    X86_AT(c, 0x8f951u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08f952  push ecx
    X86_AT(c, 0x8f952u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08f953  push edx
    X86_AT(c, 0x8f953u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f954  mov ah, 6
    X86_AT(c, 0x8f954u);
    s8(c, 4, 0x6u);
    // 08f956  call 0x8faf8
    X86_AT(c, 0x8f956u);
    push32(c, 0x8f95bu); x86_call_known(c, 0x8faf8u, f_0008faf8); X86_RET(c, 0x8f95bu);
    X86_TICK(c, 32);
    // 08f95b  mov eax, esi
    X86_AT(c, 0x8f95bu);
    c.r[0] = c.r[6];
    // 08f95d  pop edx
    X86_AT(c, 0x8f95du);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08f95e  pop ecx
    X86_AT(c, 0x8f95eu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 08f95f  pop ebx
    X86_AT(c, 0x8f95fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08f960  pop esi
    X86_AT(c, 0x8f960u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08f961  pop es
    X86_AT(c, 0x8f961u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08f962  ret 
    X86_AT(c, 0x8f962u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f94fu, "ran off the end of a function");
}
void f_0008f9eb(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08f9eb  enter 0, 0
    X86_AT(c, 0x8f9ebu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08f9ef  push edx
    X86_AT(c, 0x8f9efu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f9f0  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8f9f0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f9f3  cmp dl, 0
    X86_AT(c, 0x8f9f3u);
    (void)x86_sub(c, g8(c, 2), 0x0u, 0, 1);
    // 08f9f6  je 0x8f9fa
    X86_AT(c, 0x8f9f6u);
    if (x86_cc(c, 4)) { goto L_8f9fa; }
    X86_TICK(c, 2);
    // 08f9f8  mov dl, 0xff
    X86_AT(c, 0x8f9f8u);
    s8(c, 2, 0xFFu);
L_8f9fa:
    X86_TICK(c, 9);
    // 08f9fa  mov ah, 8
    X86_AT(c, 0x8f9fau);
    s8(c, 4, 0x8u);
    // 08f9fc  call 0x8faf8
    X86_AT(c, 0x8f9fcu);
    push32(c, 0x8fa01u); x86_call_known(c, 0x8faf8u, f_0008faf8); X86_RET(c, 0x8fa01u);
    X86_TICK(c, 23);
    // 08fa01  movzx eax, al
    X86_AT(c, 0x8fa01u);
    c.r[0] = g8(c, 0);
    // 08fa04  pop edx
    X86_AT(c, 0x8fa04u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fa05  leave 
    X86_AT(c, 0x8fa05u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fa06  ret 
    X86_AT(c, 0x8fa06u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f9ebu, "ran off the end of a function");
}
void f_0008fa07(X86Cpu& c) {
    X86_TICK(c, 21);
    // 08fa07  enter 0, 0
    X86_AT(c, 0x8fa07u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fa0b  push edx
    X86_AT(c, 0x8fa0bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fa0c  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fa0cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fa0f  mov ah, 9
    X86_AT(c, 0x8fa0fu);
    s8(c, 4, 0x9u);
    // 08fa11  call 0x8faf8
    X86_AT(c, 0x8fa11u);
    push32(c, 0x8fa16u); x86_call_known(c, 0x8faf8u, f_0008faf8); X86_RET(c, 0x8fa16u);
    X86_TICK(c, 23);
    // 08fa16  movzx eax, al
    X86_AT(c, 0x8fa16u);
    c.r[0] = g8(c, 0);
    // 08fa19  pop edx
    X86_AT(c, 0x8fa19u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fa1a  leave 
    X86_AT(c, 0x8fa1au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fa1b  ret 
    X86_AT(c, 0x8fa1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fa07u, "ran off the end of a function");
}
void f_0008fa1c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fa1c  enter 0, 0
    X86_AT(c, 0x8fa1cu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fa20  push ebx
    X86_AT(c, 0x8fa20u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fa21  push edx
    X86_AT(c, 0x8fa21u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fa22  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fa22u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fa25  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fa25u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fa28  mov ah, 0x10
    X86_AT(c, 0x8fa28u);
    s8(c, 4, 0x10u);
    // 08fa2a  call 0x8faf8
    X86_AT(c, 0x8fa2au);
    push32(c, 0x8fa2fu); x86_call_known(c, 0x8faf8u, f_0008faf8); X86_RET(c, 0x8fa2fu);
    X86_TICK(c, 27);
    // 08fa2f  movzx eax, al
    X86_AT(c, 0x8fa2fu);
    c.r[0] = g8(c, 0);
    // 08fa32  pop edx
    X86_AT(c, 0x8fa32u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fa33  pop ebx
    X86_AT(c, 0x8fa33u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fa34  leave 
    X86_AT(c, 0x8fa34u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fa35  ret 
    X86_AT(c, 0x8fa35u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fa1cu, "ran off the end of a function");
}
void f_0008fa36(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fa36  enter 0, 0
    X86_AT(c, 0x8fa36u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fa3a  push ebx
    X86_AT(c, 0x8fa3au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fa3b  push edx
    X86_AT(c, 0x8fa3bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fa3c  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fa3cu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fa3f  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fa3fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fa42  mov ah, 0x11
    X86_AT(c, 0x8fa42u);
    s8(c, 4, 0x11u);
    // 08fa44  call 0x8faf8
    X86_AT(c, 0x8fa44u);
    push32(c, 0x8fa49u); x86_call_known(c, 0x8faf8u, f_0008faf8); X86_RET(c, 0x8fa49u);
    X86_TICK(c, 27);
    // 08fa49  movzx eax, al
    X86_AT(c, 0x8fa49u);
    c.r[0] = g8(c, 0);
    // 08fa4c  pop edx
    X86_AT(c, 0x8fa4cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fa4d  pop ebx
    X86_AT(c, 0x8fa4du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fa4e  leave 
    X86_AT(c, 0x8fa4eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fa4f  ret 
    X86_AT(c, 0x8fa4fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fa36u, "ran off the end of a function");
}
void f_0008fa50(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fa50  enter 0, 0
    X86_AT(c, 0x8fa50u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fa54  push ebx
    X86_AT(c, 0x8fa54u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fa55  push edx
    X86_AT(c, 0x8fa55u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fa56  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fa56u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fa59  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fa59u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fa5c  mov ah, 0x12
    X86_AT(c, 0x8fa5cu);
    s8(c, 4, 0x12u);
    // 08fa5e  call 0x8faf8
    X86_AT(c, 0x8fa5eu);
    push32(c, 0x8fa63u); x86_call_known(c, 0x8faf8u, f_0008faf8); X86_RET(c, 0x8fa63u);
    X86_TICK(c, 27);
    // 08fa63  movzx eax, al
    X86_AT(c, 0x8fa63u);
    c.r[0] = g8(c, 0);
    // 08fa66  pop edx
    X86_AT(c, 0x8fa66u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fa67  pop ebx
    X86_AT(c, 0x8fa67u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fa68  leave 
    X86_AT(c, 0x8fa68u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fa69  ret 
    X86_AT(c, 0x8fa69u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fa50u, "ran off the end of a function");
}
void f_0008fa6a(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fa6a  enter 0, 0
    X86_AT(c, 0x8fa6au);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fa6e  push ebx
    X86_AT(c, 0x8fa6eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fa6f  push edx
    X86_AT(c, 0x8fa6fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fa70  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fa70u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fa73  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fa73u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fa76  mov ah, 0x13
    X86_AT(c, 0x8fa76u);
    s8(c, 4, 0x13u);
    // 08fa78  call 0x8faf8
    X86_AT(c, 0x8fa78u);
    push32(c, 0x8fa7du); x86_call_known(c, 0x8faf8u, f_0008faf8); X86_RET(c, 0x8fa7du);
    X86_TICK(c, 27);
    // 08fa7d  movzx eax, al
    X86_AT(c, 0x8fa7du);
    c.r[0] = g8(c, 0);
    // 08fa80  pop edx
    X86_AT(c, 0x8fa80u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fa81  pop ebx
    X86_AT(c, 0x8fa81u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fa82  leave 
    X86_AT(c, 0x8fa82u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fa83  ret 
    X86_AT(c, 0x8fa83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fa6au, "ran off the end of a function");
}
void f_0008fa84(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fa84  enter 0, 0
    X86_AT(c, 0x8fa84u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08fa88  push ebx
    X86_AT(c, 0x8fa88u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08fa89  push edx
    X86_AT(c, 0x8fa89u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08fa8a  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8fa8au);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fa8d  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8fa8du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08fa90  mov ah, 0x14
    X86_AT(c, 0x8fa90u);
    s8(c, 4, 0x14u);
    // 08fa92  call 0x8faf8
    X86_AT(c, 0x8fa92u);
    push32(c, 0x8fa97u); x86_call_known(c, 0x8faf8u, f_0008faf8); X86_RET(c, 0x8fa97u);
    X86_TICK(c, 27);
    // 08fa97  movzx eax, al
    X86_AT(c, 0x8fa97u);
    c.r[0] = g8(c, 0);
    // 08fa9a  pop edx
    X86_AT(c, 0x8fa9au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fa9b  pop ebx
    X86_AT(c, 0x8fa9bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fa9c  leave 
    X86_AT(c, 0x8fa9cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fa9d  ret 
    X86_AT(c, 0x8fa9du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fa84u, "ran off the end of a function");
}
void f_0008fa9e(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08fa9e  enter 0, 0
    X86_AT(c, 0x8fa9eu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 08faa2  push ebx
    X86_AT(c, 0x8faa2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08faa3  push edx
    X86_AT(c, 0x8faa3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08faa4  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x8faa4u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08faa7  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8faa7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08faaa  mov ah, 0x20
    X86_AT(c, 0x8faaau);
    s8(c, 4, 0x20u);
    // 08faac  call 0x8faf8
    X86_AT(c, 0x8faacu);
    push32(c, 0x8fab1u); x86_call_known(c, 0x8faf8u, f_0008faf8); X86_RET(c, 0x8fab1u);
    X86_TICK(c, 27);
    // 08fab1  movzx eax, al
    X86_AT(c, 0x8fab1u);
    c.r[0] = g8(c, 0);
    // 08fab4  pop edx
    X86_AT(c, 0x8fab4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 08fab5  pop ebx
    X86_AT(c, 0x8fab5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08fab6  leave 
    X86_AT(c, 0x8fab6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08fab7  ret 
    X86_AT(c, 0x8fab7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fa9eu, "ran off the end of a function");
}
void f_0008faf8(X86Cpu& c) {
    X86_TICK(c, 44);
    // 08faf8  push gs
    X86_AT(c, 0x8faf8u);
    push32(c, c.sreg[5]);
    // 08fafa  push fs
    X86_AT(c, 0x8fafau);
    push32(c, c.sreg[4]);
    // 08fafc  push es
    X86_AT(c, 0x8fafcu);
    push32(c, c.sreg[0]);
    // 08fafd  push ds
    X86_AT(c, 0x8fafdu);
    push32(c, c.sreg[3]);
    // 08fafe  pushal 
    X86_AT(c, 0x8fafeu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08faff  pushfd 
    X86_AT(c, 0x8faffu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 08fb00  mov ebp, esp
    X86_AT(c, 0x8fb00u);
    c.r[5] = c.r[4];
    // 08fb02  movzx ebx, ah
    X86_AT(c, 0x8fb02u);
    c.r[3] = g8(c, 4);
    // 08fb05  call dword ptr cs:[ebx*4 + 0x8fb16]
    X86_AT(c, 0x8fb05u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x8FB16u))); push32(c, 0x8fb0du);
      switch (t) {
      case 0x8fbc2u: x86_call_known(c, 0x8fbc2u, f_0008fbc2); break;
      case 0x8fbc7u: x86_call_known(c, 0x8fbc7u, f_0008fbc7); break;
      case 0x8fc37u: x86_call_known(c, 0x8fc37u, f_0008fc37); break;
      case 0x8fc75u: x86_call_known(c, 0x8fc75u, f_0008fc75); break;
      case 0x8fcf5u: x86_call_known(c, 0x8fcf5u, f_0008fcf5); break;
      case 0x8fd0au: x86_call_known(c, 0x8fd0au, f_0008fd0a); break;
      case 0x8fd1eu: x86_call_known(c, 0x8fd1eu, f_0008fd1e); break;
      case 0x8fd2du: x86_call_known(c, 0x8fd2du, f_0008fd2d); break;
      case 0x8fd75u: x86_call_known(c, 0x8fd75u, f_0008fd75); break;
      case 0x8fd91u: x86_call_known(c, 0x8fd91u, f_0008fd91); break;
      case 0x8fdadu: x86_call_known(c, 0x8fdadu, f_0008fdad); break;
      case 0x8fdd3u: x86_call_known(c, 0x8fdd3u, f_0008fdd3); break;
      case 0x8fdefu: x86_call_known(c, 0x8fdefu, f_0008fdef); break;
      case 0x8fe36u: x86_call_known(c, 0x8fe36u, f_0008fe36); break;
      case 0x8fe5cu: x86_call_known(c, 0x8fe5cu, f_0008fe5c); break;
      case 0x8fe82u: x86_call_known(c, 0x8fe82u, f_0008fe82); break;
      case 0x8fea8u: x86_call_known(c, 0x8fea8u, f_0008fea8); break;
      case 0x8feceu: x86_call_known(c, 0x8feceu, f_0008fece); break;
      case 0x8fef4u: x86_call_known(c, 0x8fef4u, f_0008fef4); break;
      case 0x8ff03u: x86_call_known(c, 0x8ff03u, f_0008ff03); break;
      case 0x8ff3fu: x86_call_known(c, 0x8ff3fu, f_0008ff3f); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x8fb0du); }
    X86_TICK(c, 56);
    // 08fb0d  popfd 
    X86_AT(c, 0x8fb0du);
    x86_popfd(c, 4);
    // 08fb0e  popal 
    X86_AT(c, 0x8fb0eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 08fb0f  pop ds
    X86_AT(c, 0x8fb0fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 08fb10  pop es
    X86_AT(c, 0x8fb10u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08fb11  pop fs
    X86_AT(c, 0x8fb11u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 08fb13  pop gs
    X86_AT(c, 0x8fb13u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 08fb15  ret 
    X86_AT(c, 0x8fb15u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8faf8u, "ran off the end of a function");
}
void f_0008fbc2(X86Cpu& c) {
    X86_TICK(c, 12);
    // 08fbc2  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0x8fbc2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 08fbc6  ret 
    X86_AT(c, 0x8fbc6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fbc2u, "ran off the end of a function");
}
void f_0008fbc7(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08fbc7  pushfd 
    X86_AT(c, 0x8fbc7u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 08fbc8  cld 
    X86_AT(c, 0x8fbc8u);
    c.fl &= ~X86_DF;
    // 08fbc9  cli 
    X86_AT(c, 0x8fbc9u);
    c.fl &= ~X86_IF;
    // 08fbca  call 0x91530
    X86_AT(c, 0x8fbcau);
    push32(c, 0x8fbcfu); x86_call_known(c, 0x91530u, f_00091530); X86_RET(c, 0x8fbcfu);
    X86_TICK(c, 7);
    // 08fbcf  call 0x90e6c
    X86_AT(c, 0x8fbcfu);
    push32(c, 0x8fbd4u); x86_call_known(c, 0x90e6cu, f_00090e6c); X86_RET(c, 0x8fbd4u);
    X86_TICK(c, 7);
    // 08fbd4  call 0x90ef3
    X86_AT(c, 0x8fbd4u);
    push32(c, 0x8fbd9u); x86_call_known(c, 0x90ef3u, f_00090ef3); X86_RET(c, 0x8fbd9u);
    X86_TICK(c, 7);
    // 08fbd9  call 0x90f47
    X86_AT(c, 0x8fbd9u);
    push32(c, 0x8fbdeu); x86_call_known(c, 0x90f47u, f_00090f47); X86_RET(c, 0x8fbdeu);
    X86_TICK(c, 7);
    // 08fbde  call 0x90178
    X86_AT(c, 0x8fbdeu);
    push32(c, 0x8fbe3u); x86_call_known(c, 0x90178u, f_00090178); X86_RET(c, 0x8fbe3u);
    X86_TICK(c, 7);
    // 08fbe3  call 0x90052
    X86_AT(c, 0x8fbe3u);
    push32(c, 0x8fbe8u); x86_call_known(c, 0x90052u, f_00090052); X86_RET(c, 0x8fbe8u);
    X86_TICK(c, 7);
    // 08fbe8  call 0x900b2
    X86_AT(c, 0x8fbe8u);
    push32(c, 0x8fbedu); x86_call_known(c, 0x900b2u, f_000900b2); X86_RET(c, 0x8fbedu);
    X86_TICK(c, 7);
    // 08fbed  call 0x900d3
    X86_AT(c, 0x8fbedu);
    push32(c, 0x8fbf2u); x86_call_known(c, 0x900d3u, f_000900d3); X86_RET(c, 0x8fbf2u);
    X86_TICK(c, 7);
    // 08fbf2  call 0x90133
    X86_AT(c, 0x8fbf2u);
    push32(c, 0x8fbf7u); x86_call_known(c, 0x90133u, f_00090133); X86_RET(c, 0x8fbf7u);
    X86_TICK(c, 7);
    // 08fbf7  call 0x90c82
    X86_AT(c, 0x8fbf7u);
    push32(c, 0x8fbfcu); x86_call_known(c, 0x90c82u, f_00090c82); X86_RET(c, 0x8fbfcu);
    X86_TICK(c, 5);
    // 08fbfc  jb 0x8fc32
    X86_AT(c, 0x8fbfcu);
    if (x86_cc(c, 2)) { goto L_8fc32; }
    X86_TICK(c, 12);
    // 08fbfe  cmp byte ptr [0x898e9], 0
    X86_AT(c, 0x8fbfeu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x898E9u))), 0x0u, 0, 1);
    // 08fc05  jne 0x8fc18
    X86_AT(c, 0x8fc05u);
    if (x86_cc(c, 5)) { goto L_8fc18; }
    X86_TICK(c, 7);
    // 08fc07  call 0x90d8e
    X86_AT(c, 0x8fc07u);
    push32(c, 0x8fc0cu); x86_call_known(c, 0x90d8eu, f_00090d8e); X86_RET(c, 0x8fc0cu);
    X86_TICK(c, 11);
    // 08fc0c  mov al, byte ptr [0x896a5]
    X86_AT(c, 0x8fc0cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x896A5u))));
    // 08fc11  call 0x9110f
    X86_AT(c, 0x8fc11u);
    push32(c, 0x8fc16u); x86_call_known(c, 0x9110fu, f_0009110f); X86_RET(c, 0x8fc16u);
    X86_TICK(c, 7);
    // 08fc16  jmp 0x8fc2c
    X86_AT(c, 0x8fc16u);
    goto L_8fc2c;
L_8fc18:
    X86_TICK(c, 7);
    // 08fc18  call 0x90d12
    X86_AT(c, 0x8fc18u);
    push32(c, 0x8fc1du); x86_call_known(c, 0x90d12u, f_00090d12); X86_RET(c, 0x8fc1du);
    X86_TICK(c, 11);
    // 08fc1d  mov al, byte ptr [0x896a5]
    X86_AT(c, 0x8fc1du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x896A5u))));
    // 08fc22  call 0x9110f
    X86_AT(c, 0x8fc22u);
    push32(c, 0x8fc27u); x86_call_known(c, 0x9110fu, f_0009110f); X86_RET(c, 0x8fc27u);
    X86_TICK(c, 7);
    // 08fc27  call 0x91033
    X86_AT(c, 0x8fc27u);
    push32(c, 0x8fc2cu); x86_call_known(c, 0x91033u, f_00091033); X86_RET(c, 0x8fc2cu);
L_8fc2c:
    X86_TICK(c, 18);
    // 08fc2c  popfd 
    X86_AT(c, 0x8fc2cu);
    x86_popfd(c, 4);
    // 08fc2d  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fc2du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fc31  ret 
    X86_AT(c, 0x8fc31u);
    c.eip = pop32(c); return;
L_8fc32:
    X86_TICK(c, 12);
    // 08fc32  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0x8fc32u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 08fc36  ret 
    X86_AT(c, 0x8fc36u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fbc7u, "ran off the end of a function");
}
void f_0008fc37(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08fc37  push ds
    X86_AT(c, 0x8fc37u);
    push32(c, c.sreg[3]);
    // 08fc38  pop es
    X86_AT(c, 0x8fc38u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 08fc39  call 0x8ff5d
    X86_AT(c, 0x8fc39u);
    push32(c, 0x8fc3eu); x86_call_known(c, 0x8ff5du, f_0008ff5d); X86_RET(c, 0x8fc3eu);
L_8fc3e:
    X86_TICK(c, 19);
    // 08fc3e  lea esi, [0x89915]
    X86_AT(c, 0x8fc3eu);
    c.r[6] = (uint32_t)(0x89915u);
    // 08fc44  mov ax, word ptr [esi + 0x10]
    X86_AT(c, 0x8fc44u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u))));
    // 08fc48  add ax, word ptr [esi + 0x30]
    X86_AT(c, 0x8fc48u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x30u))), 0, 2)); }
    // 08fc4c  or ax, ax
    X86_AT(c, 0x8fc4cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 08fc4f  jne 0x8fc3e
    X86_AT(c, 0x8fc4fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8fc3eu); goto L_8fc3e; }
    X86_TICK(c, 7);
    // 08fc51  call 0x91013
    X86_AT(c, 0x8fc51u);
    push32(c, 0x8fc56u); x86_call_known(c, 0x91013u, f_00091013); X86_RET(c, 0x8fc56u);
    X86_TICK(c, 7);
    // 08fc56  call 0x90dc8
    X86_AT(c, 0x8fc56u);
    push32(c, 0x8fc5bu); x86_call_known(c, 0x90dc8u, f_00090dc8); X86_RET(c, 0x8fc5bu);
    X86_TICK(c, 12);
    // 08fc5b  cmp byte ptr [0x898e9], 0
    X86_AT(c, 0x8fc5bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x898E9u))), 0x0u, 0, 1);
    // 08fc62  jne 0x8fc6b
    X86_AT(c, 0x8fc62u);
    if (x86_cc(c, 5)) { goto L_8fc6b; }
    X86_TICK(c, 7);
    // 08fc64  call 0x90e43
    X86_AT(c, 0x8fc64u);
    push32(c, 0x8fc69u); x86_call_known(c, 0x90e43u, f_00090e43); X86_RET(c, 0x8fc69u);
    X86_TICK(c, 7);
    // 08fc69  jmp 0x8fc70
    X86_AT(c, 0x8fc69u);
    goto L_8fc70;
L_8fc6b:
    X86_TICK(c, 7);
    // 08fc6b  call 0x90e04
    X86_AT(c, 0x8fc6bu);
    push32(c, 0x8fc70u); x86_call_known(c, 0x90e04u, f_00090e04); X86_RET(c, 0x8fc70u);
L_8fc70:
    X86_TICK(c, 12);
    // 08fc70  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fc70u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fc74  ret 
    X86_AT(c, 0x8fc74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fc37u, "ran off the end of a function");
}
void f_0008fc75(X86Cpu& c) {
    X86_TICK(c, 12);
    // 08fc75  cmp byte ptr [0x896a6], 0
    X86_AT(c, 0x8fc75u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896A6u))), 0x0u, 0, 1);
    // 08fc7c  jne 0x8fcf0
    X86_AT(c, 0x8fc7cu);
    if (x86_cc(c, 5)) { goto L_8fcf0; }
    X86_TICK(c, 47);
    // 08fc7e  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8fc7eu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08fc81  mov byte ptr [0x896a4], dl
    X86_AT(c, 0x8fc81u);
    wr8((c.sbase[3] + (uint32_t)(0x896A4u)), g8(c, 2));
    // 08fc87  mov byte ptr [0x89698], dl
    X86_AT(c, 0x8fc87u);
    wr8((c.sbase[3] + (uint32_t)(0x89698u)), g8(c, 2));
    // 08fc8d  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x8fc8du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08fc90  mov ax, word ptr [ebp + 0x24]
    X86_AT(c, 0x8fc90u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 08fc94  mov dword ptr [0x89681], esi
    X86_AT(c, 0x8fc94u);
    wr32((c.sbase[3] + (uint32_t)(0x89681u)), c.r[6]);
    // 08fc9a  mov word ptr [0x89685], ax
    X86_AT(c, 0x8fc9au);
    wr16((c.sbase[3] + (uint32_t)(0x89685u)), (c.r[0] & 0xFFFFu));
    // 08fca0  mov dword ptr [0x89687], esi
    X86_AT(c, 0x8fca0u);
    wr32((c.sbase[3] + (uint32_t)(0x89687u)), c.r[6]);
    // 08fca6  mov word ptr [0x8968b], ax
    X86_AT(c, 0x8fca6u);
    wr16((c.sbase[3] + (uint32_t)(0x8968Bu)), (c.r[0] & 0xFFFFu));
    // 08fcac  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x8fcacu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 08fcaf  add ecx, esi
    X86_AT(c, 0x8fcafu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 08fcb1  mov dword ptr [0x8968d], ecx
    X86_AT(c, 0x8fcb1u);
    wr32((c.sbase[3] + (uint32_t)(0x8968Du)), c.r[1]);
    // 08fcb7  mov word ptr [0x89691], ax
    X86_AT(c, 0x8fcb7u);
    wr16((c.sbase[3] + (uint32_t)(0x89691u)), (c.r[0] & 0xFFFFu));
    // 08fcbd  mov word ptr [0x896a2], 0
    X86_AT(c, 0x8fcbdu);
    wr16((c.sbase[3] + (uint32_t)(0x896A2u)), 0x0u);
    // 08fcc6  mov word ptr [0x89693], 0
    X86_AT(c, 0x8fcc6u);
    wr16((c.sbase[3] + (uint32_t)(0x89693u)), 0x0u);
    // 08fccf  mov word ptr [0x89695], 0
    X86_AT(c, 0x8fccfu);
    wr16((c.sbase[3] + (uint32_t)(0x89695u)), 0x0u);
    // 08fcd8  call 0x90039
    X86_AT(c, 0x8fcd8u);
    push32(c, 0x8fcddu); x86_call_known(c, 0x90039u, f_00090039); X86_RET(c, 0x8fcddu);
    X86_TICK(c, 16);
    // 08fcdd  mov byte ptr [0x896ad], 0xff
    X86_AT(c, 0x8fcddu);
    wr8((c.sbase[3] + (uint32_t)(0x896ADu)), 0xFFu);
    // 08fce4  mov byte ptr [0x896a6], 0xff
    X86_AT(c, 0x8fce4u);
    wr8((c.sbase[3] + (uint32_t)(0x896A6u)), 0xFFu);
    // 08fceb  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fcebu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fcef  ret 
    X86_AT(c, 0x8fcefu);
    c.eip = pop32(c); return;
L_8fcf0:
    X86_TICK(c, 12);
    // 08fcf0  mov byte ptr [ebp + 0x20], 2
    X86_AT(c, 0x8fcf0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x2u);
    // 08fcf4  ret 
    X86_AT(c, 0x8fcf4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fc75u, "ran off the end of a function");
}
void f_0008fcf5(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08fcf5  call 0x8ff5d
    X86_AT(c, 0x8fcf5u);
    push32(c, 0x8fcfau); x86_call_known(c, 0x8ff5du, f_0008ff5d); X86_RET(c, 0x8fcfau);
    X86_TICK(c, 5);
    // 08fcfa  jb 0x8fd05
    X86_AT(c, 0x8fcfau);
    if (x86_cc(c, 2)) { goto L_8fd05; }
    X86_TICK(c, 12);
    // 08fd00  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fd00u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fd04  ret 
    X86_AT(c, 0x8fd04u);
    c.eip = pop32(c); return;
L_8fd05:
    X86_TICK(c, 12);
    // 08fd05  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0x8fd05u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 08fd09  ret 
    X86_AT(c, 0x8fd09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fcf5u, "ran off the end of a function");
}
void f_0008fd0a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 08fd0a  mov byte ptr [0x896a8], 0xff
    X86_AT(c, 0x8fd0au);
    wr8((c.sbase[3] + (uint32_t)(0x896A8u)), 0xFFu);
    // 08fd11  mov byte ptr [0x896af], 0xff
    X86_AT(c, 0x8fd11u);
    wr8((c.sbase[3] + (uint32_t)(0x896AFu)), 0xFFu);
    // 08fd18  call 0x8ffe8
    X86_AT(c, 0x8fd18u);
    push32(c, 0x8fd1du); x86_call_known(c, 0x8ffe8u, f_0008ffe8); X86_RET(c, 0x8fd1du);
    X86_TICK(c, 10);
    // 08fd1d  ret 
    X86_AT(c, 0x8fd1du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fd0au, "ran off the end of a function");
}
void f_0008fd1e(X86Cpu& c) {
    X86_TICK(c, 14);
    // 08fd1e  mov byte ptr [0x896a8], 0
    X86_AT(c, 0x8fd1eu);
    wr8((c.sbase[3] + (uint32_t)(0x896A8u)), 0x0u);
    // 08fd25  mov byte ptr [0x896ae], 0xff
    X86_AT(c, 0x8fd25u);
    wr8((c.sbase[3] + (uint32_t)(0x896AEu)), 0xFFu);
    // 08fd2c  ret 
    X86_AT(c, 0x8fd2cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fd1eu, "ran off the end of a function");
}
void f_0008fd2d(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08fd2d  mov byte ptr [0x89906], 0xff
    X86_AT(c, 0x8fd2du);
    wr8((c.sbase[3] + (uint32_t)(0x89906u)), 0xFFu);
    // 08fd34  mov ax, word ptr [0x89685]
    X86_AT(c, 0x8fd34u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89685u))));
    // 08fd3a  mov word ptr [ebp + 0x28], ax
    X86_AT(c, 0x8fd3au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 08fd3e  mov eax, dword ptr [0x89681]
    X86_AT(c, 0x8fd3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89681u)));
    // 08fd43  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0x8fd43u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
    // 08fd46  mov ax, word ptr [0x89693]
    X86_AT(c, 0x8fd46u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89693u))));
    // 08fd4c  mov word ptr [ebp + 0x14], ax
    X86_AT(c, 0x8fd4cu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[0] & 0xFFFFu));
    // 08fd50  mov ax, word ptr [0x89695]
    X86_AT(c, 0x8fd50u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89695u))));
    // 08fd56  mov word ptr [ebp + 0x1c], ax
    X86_AT(c, 0x8fd56u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), (c.r[0] & 0xFFFFu));
    // 08fd5a  mov al, byte ptr [0x89699]
    X86_AT(c, 0x8fd5au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89699u))));
    // 08fd5f  mov ah, byte ptr [0x896a6]
    X86_AT(c, 0x8fd5fu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0x896A6u))));
    // 08fd65  mov word ptr [ebp + 0x18], ax
    X86_AT(c, 0x8fd65u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 08fd69  mov byte ptr [0x89906], 0
    X86_AT(c, 0x8fd69u);
    wr8((c.sbase[3] + (uint32_t)(0x89906u)), 0x0u);
    // 08fd70  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fd70u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fd74  ret 
    X86_AT(c, 0x8fd74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fd2du, "ran off the end of a function");
}
void f_0008fd75(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08fd75  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8fd75u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08fd78  inc dl
    X86_AT(c, 0x8fd78u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 08fd7a  cmp dl, 8
    X86_AT(c, 0x8fd7au);
    (void)x86_sub(c, g8(c, 2), 0x8u, 0, 1);
    // 08fd7d  ja 0x8fd8c
    X86_AT(c, 0x8fd7du);
    if (x86_cc(c, 7)) { goto L_8fd8c; }
    X86_TICK(c, 16);
    // 08fd7f  dec dl
    X86_AT(c, 0x8fd7fu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 08fd81  mov byte ptr [0x896b2], dl
    X86_AT(c, 0x8fd81u);
    wr8((c.sbase[3] + (uint32_t)(0x896B2u)), g8(c, 2));
    // 08fd87  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fd87u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fd8b  ret 
    X86_AT(c, 0x8fd8bu);
    c.eip = pop32(c); return;
L_8fd8c:
    X86_TICK(c, 12);
    // 08fd8c  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8fd8cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08fd90  ret 
    X86_AT(c, 0x8fd90u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fd75u, "ran off the end of a function");
}
void f_0008fd91(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08fd91  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8fd91u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08fd94  inc dl
    X86_AT(c, 0x8fd94u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 08fd96  cmp dl, 1
    X86_AT(c, 0x8fd96u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 08fd99  ja 0x8fda8
    X86_AT(c, 0x8fd99u);
    if (x86_cc(c, 7)) { goto L_8fda8; }
    X86_TICK(c, 16);
    // 08fd9b  dec dl
    X86_AT(c, 0x8fd9bu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 08fd9d  mov byte ptr [0x896a9], dl
    X86_AT(c, 0x8fd9du);
    wr8((c.sbase[3] + (uint32_t)(0x896A9u)), g8(c, 2));
    // 08fda3  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fda3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fda7  ret 
    X86_AT(c, 0x8fda7u);
    c.eip = pop32(c); return;
L_8fda8:
    X86_TICK(c, 12);
    // 08fda8  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8fda8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08fdac  ret 
    X86_AT(c, 0x8fdacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fd91u, "ran off the end of a function");
}
void f_0008fdad(X86Cpu& c) {
    X86_TICK(c, 11);
    // 08fdad  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x8fdadu);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08fdb1  cmp dx, 0xfa
    X86_AT(c, 0x8fdb1u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFAu, 0, 2);
    // 08fdb6  ja 0x8fdce
    X86_AT(c, 0x8fdb6u);
    if (x86_cc(c, 7)) { goto L_8fdce; }
    X86_TICK(c, 13);
    // 08fdb8  mov al, dl
    X86_AT(c, 0x8fdb8u);
    s8(c, 0, g8(c, 2));
    // 08fdba  mov byte ptr [0x896a5], al
    X86_AT(c, 0x8fdbau);
    wr8((c.sbase[3] + (uint32_t)(0x896A5u)), g8(c, 0));
    // 08fdbf  mov byte ptr [0x89699], al
    X86_AT(c, 0x8fdbfu);
    wr8((c.sbase[3] + (uint32_t)(0x89699u)), g8(c, 0));
    // 08fdc4  call 0x9110f
    X86_AT(c, 0x8fdc4u);
    push32(c, 0x8fdc9u); x86_call_known(c, 0x9110fu, f_0009110f); X86_RET(c, 0x8fdc9u);
    X86_TICK(c, 12);
    // 08fdc9  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fdc9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fdcd  ret 
    X86_AT(c, 0x8fdcdu);
    c.eip = pop32(c); return;
L_8fdce:
    X86_TICK(c, 12);
    // 08fdce  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8fdceu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08fdd2  ret 
    X86_AT(c, 0x8fdd2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fdadu, "ran off the end of a function");
}
void f_0008fdd3(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08fdd3  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8fdd3u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08fdd6  inc dl
    X86_AT(c, 0x8fdd6u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 08fdd8  cmp dl, 1
    X86_AT(c, 0x8fdd8u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 08fddb  ja 0x8fdea
    X86_AT(c, 0x8fddbu);
    if (x86_cc(c, 7)) { goto L_8fdea; }
    X86_TICK(c, 16);
    // 08fddd  dec dl
    X86_AT(c, 0x8fdddu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 08fddf  mov byte ptr [0x89906], dl
    X86_AT(c, 0x8fddfu);
    wr8((c.sbase[3] + (uint32_t)(0x89906u)), g8(c, 2));
    // 08fde5  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fde5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fde9  ret 
    X86_AT(c, 0x8fde9u);
    c.eip = pop32(c); return;
L_8fdea:
    X86_TICK(c, 12);
    // 08fdea  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8fdeau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08fdee  ret 
    X86_AT(c, 0x8fdeeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fdd3u, "ran off the end of a function");
}
void f_0008fdef(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08fdef  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8fdefu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08fdf2  inc dl
    X86_AT(c, 0x8fdf2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 08fdf4  cmp dl, 1
    X86_AT(c, 0x8fdf4u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 08fdf7  ja 0x8fe31
    X86_AT(c, 0x8fdf7u);
    if (x86_cc(c, 7)) { goto L_8fe31; }
    X86_TICK(c, 14);
    // 08fdf9  dec dl
    X86_AT(c, 0x8fdf9u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 08fdfb  cmp byte ptr [0x898e9], 0
    X86_AT(c, 0x8fdfbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x898E9u))), 0x0u, 0, 1);
    // 08fe02  jne 0x8fe1c
    X86_AT(c, 0x8fe02u);
    if (x86_cc(c, 5)) { goto L_8fe1c; }
    X86_TICK(c, 7);
    // 08fe04  and dl, dl
    X86_AT(c, 0x8fe04u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 08fe06  je 0x8fe11
    X86_AT(c, 0x8fe06u);
    if (x86_cc(c, 4)) { goto L_8fe11; }
    X86_TICK(c, 9);
    // 08fe08  mov ah, 0x17
    X86_AT(c, 0x8fe08u);
    s8(c, 4, 0x17u);
    // 08fe0a  call 0x8f774
    X86_AT(c, 0x8fe0au);
    push32(c, 0x8fe0fu); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8fe0fu);
    X86_TICK(c, 7);
    // 08fe0f  jmp 0x8fe2c
    X86_AT(c, 0x8fe0fu);
    goto L_8fe2c;
L_8fe11:
    X86_TICK(c, 11);
    // 08fe11  mov bl, 0
    X86_AT(c, 0x8fe11u);
    s8(c, 3, 0x0u);
    // 08fe13  mov ah, 0x15
    X86_AT(c, 0x8fe13u);
    s8(c, 4, 0x15u);
    // 08fe15  call 0x8f774
    X86_AT(c, 0x8fe15u);
    push32(c, 0x8fe1au); x86_call_known(c, 0x8f774u, f_0008f774); X86_RET(c, 0x8fe1au);
    X86_TICK(c, 7);
    // 08fe1a  jmp 0x8fe2c
    X86_AT(c, 0x8fe1au);
    goto L_8fe2c;
L_8fe1c:
    X86_TICK(c, 7);
    // 08fe1c  and dl, dl
    X86_AT(c, 0x8fe1cu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 08fe1e  je 0x8fe27
    X86_AT(c, 0x8fe1eu);
    if (x86_cc(c, 4)) { goto L_8fe27; }
    X86_TICK(c, 7);
    // 08fe20  call 0x91074
    X86_AT(c, 0x8fe20u);
    push32(c, 0x8fe25u); x86_call_known(c, 0x91074u, f_00091074); X86_RET(c, 0x8fe25u);
    X86_TICK(c, 7);
    // 08fe25  jmp 0x8fe2c
    X86_AT(c, 0x8fe25u);
    goto L_8fe2c;
L_8fe27:
    X86_TICK(c, 7);
    // 08fe27  call 0x91033
    X86_AT(c, 0x8fe27u);
    push32(c, 0x8fe2cu); x86_call_known(c, 0x91033u, f_00091033); X86_RET(c, 0x8fe2cu);
L_8fe2c:
    X86_TICK(c, 12);
    // 08fe2c  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fe2cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fe30  ret 
    X86_AT(c, 0x8fe30u);
    c.eip = pop32(c); return;
L_8fe31:
    X86_TICK(c, 12);
    // 08fe31  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8fe31u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08fe35  ret 
    X86_AT(c, 0x8fe35u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fdefu, "ran off the end of a function");
}
void f_0008fe36(X86Cpu& c) {
    X86_TICK(c, 15);
    // 08fe36  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x8fe36u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08fe39  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8fe39u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08fe3c  cmp bl, 0x20
    X86_AT(c, 0x8fe3cu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 08fe3f  jae 0x8fe57
    X86_AT(c, 0x8fe3fu);
    if (x86_cc(c, 3)) { goto L_8fe57; }
    X86_TICK(c, 9);
    // 08fe41  inc al
    X86_AT(c, 0x8fe41u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 08fe43  cmp al, 8
    X86_AT(c, 0x8fe43u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 08fe45  ja 0x8fe57
    X86_AT(c, 0x8fe45u);
    if (x86_cc(c, 7)) { goto L_8fe57; }
    X86_TICK(c, 19);
    // 08fe47  dec al
    X86_AT(c, 0x8fe47u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 08fe49  movzx ebx, bl
    X86_AT(c, 0x8fe49u);
    c.r[3] = g8(c, 3);
    // 08fe4c  mov byte ptr [ebx + 0x896e5], al
    X86_AT(c, 0x8fe4cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x896E5u)), g8(c, 0));
    // 08fe52  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fe52u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fe56  ret 
    X86_AT(c, 0x8fe56u);
    c.eip = pop32(c); return;
L_8fe57:
    X86_TICK(c, 12);
    // 08fe57  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8fe57u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08fe5b  ret 
    X86_AT(c, 0x8fe5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fe36u, "ran off the end of a function");
}
void f_0008fe5c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 08fe5c  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x8fe5cu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08fe5f  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8fe5fu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08fe62  cmp bl, 0x20
    X86_AT(c, 0x8fe62u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 08fe65  jae 0x8fe7d
    X86_AT(c, 0x8fe65u);
    if (x86_cc(c, 3)) { goto L_8fe7d; }
    X86_TICK(c, 9);
    // 08fe67  inc al
    X86_AT(c, 0x8fe67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 08fe69  cmp al, 0x10
    X86_AT(c, 0x8fe69u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 08fe6b  ja 0x8fe7d
    X86_AT(c, 0x8fe6bu);
    if (x86_cc(c, 7)) { goto L_8fe7d; }
    X86_TICK(c, 19);
    // 08fe6d  dec al
    X86_AT(c, 0x8fe6du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 08fe6f  movzx ebx, bl
    X86_AT(c, 0x8fe6fu);
    c.r[3] = g8(c, 3);
    // 08fe72  mov byte ptr [ebx + 0x89705], al
    X86_AT(c, 0x8fe72u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89705u)), g8(c, 0));
    // 08fe78  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fe78u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fe7c  ret 
    X86_AT(c, 0x8fe7cu);
    c.eip = pop32(c); return;
L_8fe7d:
    X86_TICK(c, 12);
    // 08fe7d  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8fe7du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08fe81  ret 
    X86_AT(c, 0x8fe81u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fe5cu, "ran off the end of a function");
}
void f_0008fe82(X86Cpu& c) {
    X86_TICK(c, 15);
    // 08fe82  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x8fe82u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08fe85  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8fe85u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08fe88  cmp bl, 0x20
    X86_AT(c, 0x8fe88u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 08fe8b  jae 0x8fea3
    X86_AT(c, 0x8fe8bu);
    if (x86_cc(c, 3)) { goto L_8fea3; }
    X86_TICK(c, 9);
    // 08fe8d  inc al
    X86_AT(c, 0x8fe8du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 08fe8f  cmp al, 1
    X86_AT(c, 0x8fe8fu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 08fe91  ja 0x8fea3
    X86_AT(c, 0x8fe91u);
    if (x86_cc(c, 7)) { goto L_8fea3; }
    X86_TICK(c, 19);
    // 08fe93  dec al
    X86_AT(c, 0x8fe93u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 08fe95  movzx ebx, bl
    X86_AT(c, 0x8fe95u);
    c.r[3] = g8(c, 3);
    // 08fe98  mov byte ptr [ebx + 0x896c5], al
    X86_AT(c, 0x8fe98u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x896C5u)), g8(c, 0));
    // 08fe9e  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fe9eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fea2  ret 
    X86_AT(c, 0x8fea2u);
    c.eip = pop32(c); return;
L_8fea3:
    X86_TICK(c, 12);
    // 08fea3  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8fea3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08fea7  ret 
    X86_AT(c, 0x8fea7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fe82u, "ran off the end of a function");
}
void f_0008fea8(X86Cpu& c) {
    X86_TICK(c, 15);
    // 08fea8  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x8fea8u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08feab  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8feabu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08feae  cmp bl, 0x20
    X86_AT(c, 0x8feaeu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 08feb1  jae 0x8fec9
    X86_AT(c, 0x8feb1u);
    if (x86_cc(c, 3)) { goto L_8fec9; }
    X86_TICK(c, 9);
    // 08feb3  add al, 0x28
    X86_AT(c, 0x8feb3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 08feb5  cmp al, 0x50
    X86_AT(c, 0x8feb5u);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 08feb7  ja 0x8fec9
    X86_AT(c, 0x8feb7u);
    if (x86_cc(c, 7)) { goto L_8fec9; }
    X86_TICK(c, 19);
    // 08feb9  sub al, 0x28
    X86_AT(c, 0x8feb9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 08febb  movzx ebx, bl
    X86_AT(c, 0x8febbu);
    c.r[3] = g8(c, 3);
    // 08febe  mov byte ptr [ebx + 0x89745], al
    X86_AT(c, 0x8febeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89745u)), g8(c, 0));
    // 08fec4  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8fec4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08fec8  ret 
    X86_AT(c, 0x8fec8u);
    c.eip = pop32(c); return;
L_8fec9:
    X86_TICK(c, 12);
    // 08fec9  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8fec9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08fecd  ret 
    X86_AT(c, 0x8fecdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fea8u, "ran off the end of a function");
}
void f_0008fece(X86Cpu& c) {
    X86_TICK(c, 15);
    // 08fece  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x8feceu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08fed1  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8fed1u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08fed4  cmp bl, 0x20
    X86_AT(c, 0x8fed4u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 08fed7  jae 0x8feef
    X86_AT(c, 0x8fed7u);
    if (x86_cc(c, 3)) { goto L_8feef; }
    X86_TICK(c, 9);
    // 08fed9  add al, 0x28
    X86_AT(c, 0x8fed9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 08fedb  cmp al, 0x50
    X86_AT(c, 0x8fedbu);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 08fedd  ja 0x8feef
    X86_AT(c, 0x8feddu);
    if (x86_cc(c, 7)) { goto L_8feef; }
    X86_TICK(c, 19);
    // 08fedf  sub al, 0x28
    X86_AT(c, 0x8fedfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 08fee1  movzx ebx, bl
    X86_AT(c, 0x8fee1u);
    c.r[3] = g8(c, 3);
    // 08fee4  mov byte ptr [ebx + 0x89725], al
    X86_AT(c, 0x8fee4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89725u)), g8(c, 0));
    // 08feea  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x8feeau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 08feee  ret 
    X86_AT(c, 0x8feeeu);
    c.eip = pop32(c); return;
L_8feef:
    X86_TICK(c, 12);
    // 08feef  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x8feefu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 08fef3  ret 
    X86_AT(c, 0x8fef3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8feceu, "ran off the end of a function");
}
void f_0008fef4(X86Cpu& c) {
    X86_TICK(c, 15);
    // 08fef4  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x8fef4u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08fef7  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x8fef7u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 08fefa  call 0x915b2
    X86_AT(c, 0x8fefau);
    push32(c, 0x8feffu); x86_call_known(c, 0x915b2u, f_000915b2); X86_RET(c, 0x8feffu);
    X86_TICK(c, 12);
    // 08feff  mov byte ptr [ebp + 0x20], al
    X86_AT(c, 0x8feffu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 0));
    // 08ff02  ret 
    X86_AT(c, 0x8ff02u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8fef4u, "ran off the end of a function");
}
void f_0008ff03(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08ff03  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x8ff03u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08ff06  inc bl
    X86_AT(c, 0x8ff06u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 08ff08  cmp bl, 8
    X86_AT(c, 0x8ff08u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 08ff0b  ja 0x8ff3b
    X86_AT(c, 0x8ff0bu);
    if (x86_cc(c, 7)) { goto L_8ff3b; }
    X86_TICK(c, 13);
    // 08ff0d  dec bl
    X86_AT(c, 0x8ff0du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 08ff0f  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x8ff0fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 08ff12  cmp ecx, 0
    X86_AT(c, 0x8ff12u);
    (void)x86_sub(c, c.r[1], 0x0u, 0, 4);
    // 08ff15  je 0x8ff3b
    X86_AT(c, 0x8ff15u);
    if (x86_cc(c, 4)) { goto L_8ff3b; }
    X86_TICK(c, 12);
    // 08ff17  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x8ff17u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08ff1a  mov al, byte ptr [0x89906]
    X86_AT(c, 0x8ff1au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89906u))));
    // 08ff1f  mov byte ptr [0x89906], 0xff
    X86_AT(c, 0x8ff1fu);
    wr8((c.sbase[3] + (uint32_t)(0x89906u)), 0xFFu);
    // 08ff26  push ax
    X86_AT(c, 0x8ff26u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
L_8ff28:
    X86_TICK(c, 14);
    // 08ff28  lodsb al, byte ptr [esi]
    X86_AT(c, 0x8ff28u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 08ff29  call 0x90bd9
    X86_AT(c, 0x8ff29u);
    push32(c, 0x8ff2eu); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x8ff2eu);
    X86_TICK(c, 11);
    // 08ff2e  loop 0x8ff28
    X86_AT(c, 0x8ff2eu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x8ff28u); goto L_8ff28; }
    X86_TICK(c, 20);
    // 08ff30  pop ax
    X86_AT(c, 0x8ff30u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 08ff32  mov byte ptr [0x89906], al
    X86_AT(c, 0x8ff32u);
    wr8((c.sbase[3] + (uint32_t)(0x89906u)), g8(c, 0));
    // 08ff37  xor al, al
    X86_AT(c, 0x8ff37u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 08ff39  clc 
    X86_AT(c, 0x8ff39u);
    c.fl &= ~X86_CF;
    // 08ff3a  ret 
    X86_AT(c, 0x8ff3au);
    c.eip = pop32(c); return;
L_8ff3b:
    X86_TICK(c, 14);
    // 08ff3b  mov al, 3
    X86_AT(c, 0x8ff3bu);
    s8(c, 0, 0x3u);
    // 08ff3d  stc 
    X86_AT(c, 0x8ff3du);
    c.fl |= X86_CF;
    // 08ff3e  ret 
    X86_AT(c, 0x8ff3eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ff03u, "ran off the end of a function");
}
void f_0008ff3f(X86Cpu& c) {
    X86_TICK(c, 11);
    // 08ff3f  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x8ff3fu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08ff42  call 0x90b86
    X86_AT(c, 0x8ff42u);
    push32(c, 0x8ff47u); x86_call_known(c, 0x90b86u, f_00090b86); X86_RET(c, 0x8ff47u);
    X86_TICK(c, 13);
    // 08ff47  cmp ah, 1
    X86_AT(c, 0x8ff47u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 08ff4a  nop 
    X86_AT(c, 0x8ff4au);
    // 08ff4b  nop 
    X86_AT(c, 0x8ff4bu);
    // 08ff4c  nop 
    X86_AT(c, 0x8ff4cu);
    // 08ff4d  ja 0x8ff58
    X86_AT(c, 0x8ff4du);
    if (x86_cc(c, 7)) { goto L_8ff58; }
    X86_TICK(c, 5);
    // 08ff4f  je 0x8ff58
    X86_AT(c, 0x8ff4fu);
    if (x86_cc(c, 4)) { goto L_8ff58; }
    X86_TICK(c, 16);
    // 08ff51  mov byte ptr [ebp + 0x18], al
    X86_AT(c, 0x8ff51u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), g8(c, 0));
    // 08ff54  xor al, al
    X86_AT(c, 0x8ff54u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 08ff56  clc 
    X86_AT(c, 0x8ff56u);
    c.fl &= ~X86_CF;
    // 08ff57  ret 
    X86_AT(c, 0x8ff57u);
    c.eip = pop32(c); return;
L_8ff58:
    X86_TICK(c, 14);
    // 08ff58  mov byte ptr [ebp + 0x20], ah
    X86_AT(c, 0x8ff58u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 4));
    // 08ff5b  stc 
    X86_AT(c, 0x8ff5bu);
    c.fl |= X86_CF;
    // 08ff5c  ret 
    X86_AT(c, 0x8ff5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ff3fu, "ran off the end of a function");
}
void f_0008ff5d(X86Cpu& c) {
    X86_TICK(c, 12);
    // 08ff5d  cmp byte ptr [0x896a6], 0
    X86_AT(c, 0x8ff5du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896A6u))), 0x0u, 0, 1);
    // 08ff64  je 0x8ff8b
    X86_AT(c, 0x8ff64u);
    if (x86_cc(c, 4)) { goto L_8ff8b; }
    X86_TICK(c, 15);
    // 08ff66  mov byte ptr [0x896af], 0xff
    X86_AT(c, 0x8ff66u);
    wr8((c.sbase[3] + (uint32_t)(0x896AFu)), 0xFFu);
    // 08ff6d  mov byte ptr [0x896a6], 0
    X86_AT(c, 0x8ff6du);
    wr8((c.sbase[3] + (uint32_t)(0x896A6u)), 0x0u);
    // 08ff74  mov word ptr [0x896b9], 0
    X86_AT(c, 0x8ff74u);
    wr16((c.sbase[3] + (uint32_t)(0x896B9u)), 0x0u);
    // 08ff7d  mov byte ptr [0x896a7], 0
    X86_AT(c, 0x8ff7du);
    wr8((c.sbase[3] + (uint32_t)(0x896A7u)), 0x0u);
    // 08ff84  call 0x8ffe8
    X86_AT(c, 0x8ff84u);
    push32(c, 0x8ff89u); x86_call_known(c, 0x8ffe8u, f_0008ffe8); X86_RET(c, 0x8ff89u);
    X86_TICK(c, 12);
    // 08ff89  clc 
    X86_AT(c, 0x8ff89u);
    c.fl &= ~X86_CF;
    // 08ff8a  ret 
    X86_AT(c, 0x8ff8au);
    c.eip = pop32(c); return;
L_8ff8b:
    X86_TICK(c, 12);
    // 08ff8b  stc 
    X86_AT(c, 0x8ff8bu);
    c.fl |= X86_CF;
    // 08ff8c  ret 
    X86_AT(c, 0x8ff8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ff5du, "ran off the end of a function");
}
void f_0008ff8d(X86Cpu& c) {
    X86_TICK(c, 57);
    // 08ff8d  movzx ebx, al
    X86_AT(c, 0x8ff8du);
    c.r[3] = g8(c, 0);
    // 08ff90  and al, 0xf
    X86_AT(c, 0x8ff90u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 08ff92  inc al
    X86_AT(c, 0x8ff92u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 08ff94  shr ebx, 4
    X86_AT(c, 0x8ff94u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 08ff97  mov bx, word ptr cs:[ebx*2 + 0x8ffad]
    X86_AT(c, 0x8ff97u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x8FFADu))));
    // 08ffa0  push eax
    X86_AT(c, 0x8ffa0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ffa1  movzx ax, al
    X86_AT(c, 0x8ffa1u);
    s16(c, 0, g8(c, 0));
    // 08ffa5  mul bx
    X86_AT(c, 0x8ffa5u);
    x86_mul(c, (c.r[3] & 0xFFFFu), 2);
    // 08ffa8  mov dx, ax
    X86_AT(c, 0x8ffa8u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 08ffab  pop eax
    X86_AT(c, 0x8ffabu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 08ffac  ret 
    X86_AT(c, 0x8ffacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ff8du, "ran off the end of a function");
}
void f_0008ffde(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08ffde  movzx ebx, dl
    X86_AT(c, 0x8ffdeu);
    c.r[3] = g8(c, 2);
    // 08ffe1  mov bl, byte ptr [ebx + 0x896e5]
    X86_AT(c, 0x8ffe1u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x896E5u))));
    // 08ffe7  ret 
    X86_AT(c, 0x8ffe7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ffdeu, "ran off the end of a function");
}
void f_0008ffe8(X86Cpu& c) {
    X86_TICK(c, 39);
    // 08ffe8  pushal 
    X86_AT(c, 0x8ffe8u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 08ffe9  mov al, byte ptr [0x89906]
    X86_AT(c, 0x8ffe9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89906u))));
    // 08ffee  push eax
    X86_AT(c, 0x8ffeeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ffef  mov byte ptr [0x89906], 0xff
    X86_AT(c, 0x8ffefu);
    wr8((c.sbase[3] + (uint32_t)(0x89906u)), 0xFFu);
    // 08fff6  movzx ecx, word ptr [0x896b0]
    X86_AT(c, 0x8fff6u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0x896B0u)));
    // 08fffd  or ecx, ecx
    X86_AT(c, 0x8fffdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 08ffff  je 0x90031
    X86_AT(c, 0x8ffffu);
    if (x86_cc(c, 4)) { goto L_90031; }
    X86_TICK(c, 2);
    // 090001  lea edi, [0x89765]
    X86_AT(c, 0x90001u);
    c.r[7] = (uint32_t)(0x89765u);
L_90007:
    X86_TICK(c, 12);
    // 090007  cmp byte ptr [edi], 0
    X86_AT(c, 0x90007u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 09000a  jne 0x90011
    X86_AT(c, 0x9000au);
    if (x86_cc(c, 5)) { goto L_90011; }
    X86_TICK(c, 9);
    // 09000c  add edi, 6
    X86_AT(c, 0x9000cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 09000f  jmp 0x90007
    X86_AT(c, 0x9000fu);
    X86_POLL(c, 0x90007u); goto L_90007;
L_90011:
    X86_TICK(c, 28);
    // 090011  push ecx
    X86_AT(c, 0x90011u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 090012  xor ch, ch
    X86_AT(c, 0x90012u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 090014  xchg byte ptr [edi], ch
    X86_AT(c, 0x90014u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 090016  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0x90016u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 090019  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0x90019u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 09001c  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0x9001cu);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 09001f  call 0x90763
    X86_AT(c, 0x9001fu);
    push32(c, 0x90024u); x86_call_known(c, 0x90763u, f_00090763); X86_RET(c, 0x90024u);
    X86_TICK(c, 23);
    // 090024  pop ecx
    X86_AT(c, 0x90024u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 090025  add edi, 6
    X86_AT(c, 0x90025u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 090028  dec word ptr [0x896b0]
    X86_AT(c, 0x90028u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896B0u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 09002f  loop 0x90007
    X86_AT(c, 0x9002fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90007u); goto L_90007; }
L_90031:
    X86_TICK(c, 40);
    // 090031  pop eax
    X86_AT(c, 0x90031u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 090032  mov byte ptr [0x89906], al
    X86_AT(c, 0x90032u);
    wr8((c.sbase[3] + (uint32_t)(0x89906u)), g8(c, 0));
    // 090037  popal 
    X86_AT(c, 0x90037u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 090038  ret 
    X86_AT(c, 0x90038u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ffe8u, "ran off the end of a function");
}
void f_00090039(X86Cpu& c) {
    X86_TICK(c, 8);
    // 090039  push ebx
    X86_AT(c, 0x90039u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09003a  push ecx
    X86_AT(c, 0x9003au);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 09003b  mov ecx, 8
    X86_AT(c, 0x9003bu);
    c.r[1] = 0x8u;
    // 090040  lea ebx, [0x89915]
    X86_AT(c, 0x90040u);
    c.r[3] = (uint32_t)(0x89915u);
L_90046:
    X86_TICK(c, 15);
    // 090046  mov byte ptr [ebx + 0x1b], 0
    X86_AT(c, 0x90046u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), 0x0u);
    // 09004a  add ebx, 0x20
    X86_AT(c, 0x9004au);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x20u, 0, 4); }
    // 09004d  loop 0x90046
    X86_AT(c, 0x9004du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90046u); goto L_90046; }
    X86_TICK(c, 18);
    // 09004f  pop ecx
    X86_AT(c, 0x9004fu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 090050  pop ebx
    X86_AT(c, 0x90050u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090051  ret 
    X86_AT(c, 0x90051u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90039u, "ran off the end of a function");
}
void f_00090052(X86Cpu& c) {
    X86_TICK(c, 69);
    // 090052  push es
    X86_AT(c, 0x90052u);
    push32(c, c.sreg[0]);
    // 090053  pushal 
    X86_AT(c, 0x90053u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 090054  push ds
    X86_AT(c, 0x90054u);
    push32(c, c.sreg[3]);
    // 090055  pop es
    X86_AT(c, 0x90055u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 090056  mov al, 0xff
    X86_AT(c, 0x90056u);
    s8(c, 0, 0xFFu);
    // 090058  lea edi, [0x896c5]
    X86_AT(c, 0x90058u);
    c.r[7] = (uint32_t)(0x896C5u);
    // 09005e  mov ecx, 0x20
    X86_AT(c, 0x9005eu);
    c.r[1] = 0x20u;
    // 090063  stosb byte ptr es:[edi], al
    X86_AT(c, 0x90063u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 090065  mov al, 0xff
    X86_AT(c, 0x90065u);
    s8(c, 0, 0xFFu);
    // 090067  lea edi, [0x896e5]
    X86_AT(c, 0x90067u);
    c.r[7] = (uint32_t)(0x896E5u);
    // 09006d  mov ecx, 0x10
    X86_AT(c, 0x9006du);
    c.r[1] = 0x10u;
    // 090072  stosb byte ptr es:[edi], al
    X86_AT(c, 0x90072u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 090074  xor al, al
    X86_AT(c, 0x90074u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 090076  mov ecx, 0x10
    X86_AT(c, 0x90076u);
    c.r[1] = 0x10u;
    // 09007b  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9007bu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 09007d  xor al, al
    X86_AT(c, 0x9007du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 09007f  lea edi, [0x89705]
    X86_AT(c, 0x9007fu);
    c.r[7] = (uint32_t)(0x89705u);
    // 090085  mov ecx, 0x20
    X86_AT(c, 0x90085u);
    c.r[1] = 0x20u;
L_9008a:
    X86_TICK(c, 22);
    // 09008a  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9008au);
    x86_string(c, 2, 1, 0, 4, 3);
    // 09008b  inc al
    X86_AT(c, 0x9008bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 09008d  and al, 0xf
    X86_AT(c, 0x9008du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 09008f  loop 0x9008a
    X86_AT(c, 0x9008fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x9008au); goto L_9008a; }
    X86_TICK(c, 64);
    // 090091  xor al, al
    X86_AT(c, 0x90091u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 090093  lea edi, [0x89725]
    X86_AT(c, 0x90093u);
    c.r[7] = (uint32_t)(0x89725u);
    // 090099  mov ecx, 0x20
    X86_AT(c, 0x90099u);
    c.r[1] = 0x20u;
    // 09009e  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9009eu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0900a0  xor al, al
    X86_AT(c, 0x900a0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0900a2  lea edi, [0x89745]
    X86_AT(c, 0x900a2u);
    c.r[7] = (uint32_t)(0x89745u);
    // 0900a8  mov ecx, 0x20
    X86_AT(c, 0x900a8u);
    c.r[1] = 0x20u;
    // 0900ad  stosb byte ptr es:[edi], al
    X86_AT(c, 0x900adu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0900af  popal 
    X86_AT(c, 0x900afu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0900b0  pop es
    X86_AT(c, 0x900b0u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0900b1  ret 
    X86_AT(c, 0x900b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90052u, "ran off the end of a function");
}
void f_000900b2(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0900b2  pushal 
    X86_AT(c, 0x900b2u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0900b3  xor eax, eax
    X86_AT(c, 0x900b3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0900b5  mov word ptr [0x896b0], ax
    X86_AT(c, 0x900b5u);
    wr16((c.sbase[3] + (uint32_t)(0x896B0u)), (c.r[0] & 0xFFFFu));
    // 0900bb  mov ecx, 0x40
    X86_AT(c, 0x900bbu);
    c.r[1] = 0x40u;
    // 0900c0  lea edi, [0x89765]
    X86_AT(c, 0x900c0u);
    c.r[7] = (uint32_t)(0x89765u);
L_900c6:
    X86_TICK(c, 17);
    // 0900c6  mov dword ptr [edi], eax
    X86_AT(c, 0x900c6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0900c8  mov word ptr [edi + 4], ax
    X86_AT(c, 0x900c8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 0900cc  add edi, 6
    X86_AT(c, 0x900ccu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0900cf  loop 0x900c6
    X86_AT(c, 0x900cfu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x900c6u); goto L_900c6; }
    X86_TICK(c, 34);
    // 0900d1  popal 
    X86_AT(c, 0x900d1u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0900d2  ret 
    X86_AT(c, 0x900d2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x900b2u, "ran off the end of a function");
}
void f_000900d3(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0900d3  xor eax, eax
    X86_AT(c, 0x900d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0900d5  mov byte ptr [0x89906], al
    X86_AT(c, 0x900d5u);
    wr8((c.sbase[3] + (uint32_t)(0x89906u)), g8(c, 0));
    // 0900da  mov byte ptr [0x89908], al
    X86_AT(c, 0x900dau);
    wr8((c.sbase[3] + (uint32_t)(0x89908u)), g8(c, 0));
    // 0900df  mov byte ptr [0x89907], al
    X86_AT(c, 0x900dfu);
    wr8((c.sbase[3] + (uint32_t)(0x89907u)), g8(c, 0));
    // 0900e4  mov byte ptr [0x896c0], 0
    X86_AT(c, 0x900e4u);
    wr8((c.sbase[3] + (uint32_t)(0x896C0u)), 0x0u);
    // 0900eb  mov byte ptr [0x896a6], al
    X86_AT(c, 0x900ebu);
    wr8((c.sbase[3] + (uint32_t)(0x896A6u)), g8(c, 0));
    // 0900f0  mov byte ptr [0x896a7], al
    X86_AT(c, 0x900f0u);
    wr8((c.sbase[3] + (uint32_t)(0x896A7u)), g8(c, 0));
    // 0900f5  mov byte ptr [0x896a8], al
    X86_AT(c, 0x900f5u);
    wr8((c.sbase[3] + (uint32_t)(0x896A8u)), g8(c, 0));
    // 0900fa  mov byte ptr [0x896a9], al
    X86_AT(c, 0x900fau);
    wr8((c.sbase[3] + (uint32_t)(0x896A9u)), g8(c, 0));
    // 0900ff  mov byte ptr [0x896aa], al
    X86_AT(c, 0x900ffu);
    wr8((c.sbase[3] + (uint32_t)(0x896AAu)), g8(c, 0));
    // 090104  mov byte ptr [0x896ab], al
    X86_AT(c, 0x90104u);
    wr8((c.sbase[3] + (uint32_t)(0x896ABu)), g8(c, 0));
    // 090109  mov byte ptr [0x896ac], al
    X86_AT(c, 0x90109u);
    wr8((c.sbase[3] + (uint32_t)(0x896ACu)), g8(c, 0));
    // 09010e  mov byte ptr [0x896ad], al
    X86_AT(c, 0x9010eu);
    wr8((c.sbase[3] + (uint32_t)(0x896ADu)), g8(c, 0));
    // 090113  mov byte ptr [0x896ae], al
    X86_AT(c, 0x90113u);
    wr8((c.sbase[3] + (uint32_t)(0x896AEu)), g8(c, 0));
    // 090118  mov byte ptr [0x896af], al
    X86_AT(c, 0x90118u);
    wr8((c.sbase[3] + (uint32_t)(0x896AFu)), g8(c, 0));
    // 09011d  lea edi, [0x896c1]
    X86_AT(c, 0x9011du);
    c.r[7] = (uint32_t)(0x896C1u);
    // 090123  mov byte ptr [edi], 0
    X86_AT(c, 0x90123u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 090126  mov byte ptr [edi + 1], 1
    X86_AT(c, 0x90126u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0x1u);
    // 09012a  mov byte ptr [edi + 2], 2
    X86_AT(c, 0x9012au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x2u);
    // 09012e  mov byte ptr [edi + 3], 3
    X86_AT(c, 0x9012eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x3u);
    // 090132  ret 
    X86_AT(c, 0x90132u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x900d3u, "ran off the end of a function");
}
void f_00090133(X86Cpu& c) {
    X86_TICK(c, 34);
    // 090133  mov word ptr [0x896b9], 0
    X86_AT(c, 0x90133u);
    wr16((c.sbase[3] + (uint32_t)(0x896B9u)), 0x0u);
    // 09013c  mov word ptr [0x896b5], 0
    X86_AT(c, 0x9013cu);
    wr16((c.sbase[3] + (uint32_t)(0x896B5u)), 0x0u);
    // 090145  mov word ptr [0x896b7], 0x10
    X86_AT(c, 0x90145u);
    wr16((c.sbase[3] + (uint32_t)(0x896B7u)), 0x10u);
    // 09014e  mov al, 0x33
    X86_AT(c, 0x9014eu);
    s8(c, 0, 0x33u);
    // 090150  mov byte ptr [0x896a4], al
    X86_AT(c, 0x90150u);
    wr8((c.sbase[3] + (uint32_t)(0x896A4u)), g8(c, 0));
    // 090155  mov byte ptr [0x89698], al
    X86_AT(c, 0x90155u);
    wr8((c.sbase[3] + (uint32_t)(0x89698u)), g8(c, 0));
    // 09015a  mov word ptr [0x89693], ax
    X86_AT(c, 0x9015au);
    wr16((c.sbase[3] + (uint32_t)(0x89693u)), (c.r[0] & 0xFFFFu));
    // 090160  mov byte ptr [0x89697], al
    X86_AT(c, 0x90160u);
    wr8((c.sbase[3] + (uint32_t)(0x89697u)), g8(c, 0));
    // 090165  mov word ptr [0x89695], ax
    X86_AT(c, 0x90165u);
    wr16((c.sbase[3] + (uint32_t)(0x89695u)), (c.r[0] & 0xFFFFu));
    // 09016b  mov al, 0x5a
    X86_AT(c, 0x9016bu);
    s8(c, 0, 0x5Au);
    // 09016d  mov byte ptr [0x896a5], al
    X86_AT(c, 0x9016du);
    wr8((c.sbase[3] + (uint32_t)(0x896A5u)), g8(c, 0));
    // 090172  mov byte ptr [0x89699], al
    X86_AT(c, 0x90172u);
    wr8((c.sbase[3] + (uint32_t)(0x89699u)), g8(c, 0));
    // 090177  ret 
    X86_AT(c, 0x90177u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90133u, "ran off the end of a function");
}
void f_00090178(X86Cpu& c) {
    X86_TICK(c, 16);
    // 090178  mov byte ptr [0x896b3], 0
    X86_AT(c, 0x90178u);
    wr8((c.sbase[3] + (uint32_t)(0x896B3u)), 0x0u);
    // 09017f  mov byte ptr [0x896b2], 0xff
    X86_AT(c, 0x9017fu);
    wr8((c.sbase[3] + (uint32_t)(0x896B2u)), 0xFFu);
    // 090186  mov byte ptr [0x896b4], 0
    X86_AT(c, 0x90186u);
    wr8((c.sbase[3] + (uint32_t)(0x896B4u)), 0x0u);
    // 09018d  ret 
    X86_AT(c, 0x9018du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90178u, "ran off the end of a function");
}
void f_0009018e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 09018e  cld 
    X86_AT(c, 0x9018eu);
    c.fl &= ~X86_DF;
    // 09018f  call 0x902a0
    X86_AT(c, 0x9018fu);
    push32(c, 0x90194u); x86_call_known(c, 0x902a0u, f_000902a0); X86_RET(c, 0x90194u);
    X86_TICK(c, 7);
    // 090194  call 0x901e0
    X86_AT(c, 0x90194u);
    push32(c, 0x90199u); x86_call_known(c, 0x901e0u, f_000901e0); X86_RET(c, 0x90199u);
    X86_TICK(c, 7);
    // 090199  call 0x90240
    X86_AT(c, 0x90199u);
    push32(c, 0x9019eu); x86_call_known(c, 0x90240u, f_00090240); X86_RET(c, 0x9019eu);
L_9019e:
    X86_TICK(c, 12);
    // 09019e  cmp word ptr [0x896b9], 0
    X86_AT(c, 0x9019eu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x896B9u))), 0x0u, 0, 2);
    // 0901a6  je 0x901df
    X86_AT(c, 0x901a6u);
    if (x86_cc(c, 4)) { goto L_901df; }
    X86_TICK(c, 13);
    // 0901a8  dec word ptr [0x896b9]
    X86_AT(c, 0x901a8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896B9u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0901af  call 0x902eb
    X86_AT(c, 0x901afu);
    push32(c, 0x901b4u); x86_call_known(c, 0x902ebu, f_000902eb); X86_RET(c, 0x901b4u);
    X86_TICK(c, 5);
    // 0901b4  jb 0x9019e
    X86_AT(c, 0x901b4u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x9019eu); goto L_9019e; }
    X86_TICK(c, 12);
    // 0901b6  cmp byte ptr [0x896a6], 0
    X86_AT(c, 0x901b6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896A6u))), 0x0u, 0, 1);
    // 0901bd  je 0x9019e
    X86_AT(c, 0x901bdu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x9019eu); goto L_9019e; }
    X86_TICK(c, 7);
    // 0901bf  call 0x90721
    X86_AT(c, 0x901bfu);
    push32(c, 0x901c4u); x86_call_known(c, 0x90721u, f_00090721); X86_RET(c, 0x901c4u);
    X86_TICK(c, 7);
    // 0901c4  call 0x9034d
    X86_AT(c, 0x901c4u);
    push32(c, 0x901c9u); x86_call_known(c, 0x9034du, f_0009034d); X86_RET(c, 0x901c9u);
    X86_TICK(c, 7);
    // 0901c9  call 0x902d2
    X86_AT(c, 0x901c9u);
    push32(c, 0x901ceu); x86_call_known(c, 0x902d2u, f_000902d2); X86_RET(c, 0x901ceu);
    X86_TICK(c, 7);
    // 0901ce  call 0x902a0
    X86_AT(c, 0x901ceu);
    push32(c, 0x901d3u); x86_call_known(c, 0x902a0u, f_000902a0); X86_RET(c, 0x901d3u);
    X86_TICK(c, 7);
    // 0901d3  call 0x901e0
    X86_AT(c, 0x901d3u);
    push32(c, 0x901d8u); x86_call_known(c, 0x901e0u, f_000901e0); X86_RET(c, 0x901d8u);
    X86_TICK(c, 7);
    // 0901d8  call 0x90240
    X86_AT(c, 0x901d8u);
    push32(c, 0x901ddu); x86_call_known(c, 0x90240u, f_00090240); X86_RET(c, 0x901ddu);
    X86_TICK(c, 7);
    // 0901dd  jmp 0x9019e
    X86_AT(c, 0x901ddu);
    X86_POLL(c, 0x9019eu); goto L_9019e;
L_901df:
    X86_TICK(c, 10);
    // 0901df  ret 
    X86_AT(c, 0x901dfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9018eu, "ran off the end of a function");
}
void f_000901e0(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0901e0  cmp byte ptr [0x896aa], 0
    X86_AT(c, 0x901e0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896AAu))), 0x0u, 0, 1);
    // 0901e7  je 0x901fe
    X86_AT(c, 0x901e7u);
    if (x86_cc(c, 4)) { goto L_901fe; }
    X86_TICK(c, 6);
    // 0901e9  mov byte ptr [0x896aa], 0
    X86_AT(c, 0x901e9u);
    wr8((c.sbase[3] + (uint32_t)(0x896AAu)), 0x0u);
    // 0901f0  mov byte ptr [0x896a8], 0
    X86_AT(c, 0x901f0u);
    wr8((c.sbase[3] + (uint32_t)(0x896A8u)), 0x0u);
    // 0901f7  mov byte ptr [0x896ad], 0xff
    X86_AT(c, 0x901f7u);
    wr8((c.sbase[3] + (uint32_t)(0x896ADu)), 0xFFu);
L_901fe:
    X86_TICK(c, 12);
    // 0901fe  cmp byte ptr [0x896ab], 0
    X86_AT(c, 0x901feu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896ABu))), 0x0u, 0, 1);
    // 090205  je 0x9021c
    X86_AT(c, 0x90205u);
    if (x86_cc(c, 4)) { goto L_9021c; }
    X86_TICK(c, 6);
    // 090207  mov byte ptr [0x896ab], 0
    X86_AT(c, 0x90207u);
    wr8((c.sbase[3] + (uint32_t)(0x896ABu)), 0x0u);
    // 09020e  mov byte ptr [0x896a8], 0
    X86_AT(c, 0x9020eu);
    wr8((c.sbase[3] + (uint32_t)(0x896A8u)), 0x0u);
    // 090215  mov byte ptr [0x896ae], 0xff
    X86_AT(c, 0x90215u);
    wr8((c.sbase[3] + (uint32_t)(0x896AEu)), 0xFFu);
L_9021c:
    X86_TICK(c, 12);
    // 09021c  cmp byte ptr [0x896ac], 0
    X86_AT(c, 0x9021cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896ACu))), 0x0u, 0, 1);
    // 090223  je 0x9023f
    X86_AT(c, 0x90223u);
    if (x86_cc(c, 4)) { goto L_9023f; }
    X86_TICK(c, 13);
    // 090225  mov byte ptr [0x896ac], 0
    X86_AT(c, 0x90225u);
    wr8((c.sbase[3] + (uint32_t)(0x896ACu)), 0x0u);
    // 09022c  mov byte ptr [0x896a8], 0xff
    X86_AT(c, 0x9022cu);
    wr8((c.sbase[3] + (uint32_t)(0x896A8u)), 0xFFu);
    // 090233  mov byte ptr [0x896af], 0xff
    X86_AT(c, 0x90233u);
    wr8((c.sbase[3] + (uint32_t)(0x896AFu)), 0xFFu);
    // 09023a  call 0x8ffe8
    X86_AT(c, 0x9023au);
    push32(c, 0x9023fu); x86_call_known(c, 0x8ffe8u, f_0008ffe8); X86_RET(c, 0x9023fu);
L_9023f:
    X86_TICK(c, 10);
    // 09023f  ret 
    X86_AT(c, 0x9023fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x901e0u, "ran off the end of a function");
}
void f_00090240(X86Cpu& c) {
    X86_TICK(c, 14);
    // 090240  push ax
    X86_AT(c, 0x90240u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 090242  cmp byte ptr [0x896ad], 0
    X86_AT(c, 0x90242u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896ADu))), 0x0u, 0, 1);
    // 090249  je 0x90259
    X86_AT(c, 0x90249u);
    if (x86_cc(c, 4)) { goto L_90259; }
    X86_TICK(c, 11);
    // 09024b  mov byte ptr [0x896ad], 0
    X86_AT(c, 0x9024bu);
    wr8((c.sbase[3] + (uint32_t)(0x896ADu)), 0x0u);
    // 090252  mov al, 0xfa
    X86_AT(c, 0x90252u);
    s8(c, 0, 0xFAu);
    // 090254  call 0x90c6f
    X86_AT(c, 0x90254u);
    push32(c, 0x90259u); x86_call_known(c, 0x90c6fu, f_00090c6f); X86_RET(c, 0x90259u);
L_90259:
    X86_TICK(c, 12);
    // 090259  cmp byte ptr [0x896ae], 0
    X86_AT(c, 0x90259u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896AEu))), 0x0u, 0, 1);
    // 090260  je 0x90270
    X86_AT(c, 0x90260u);
    if (x86_cc(c, 4)) { goto L_90270; }
    X86_TICK(c, 11);
    // 090262  mov byte ptr [0x896ae], 0
    X86_AT(c, 0x90262u);
    wr8((c.sbase[3] + (uint32_t)(0x896AEu)), 0x0u);
    // 090269  mov al, 0xfb
    X86_AT(c, 0x90269u);
    s8(c, 0, 0xFBu);
    // 09026b  call 0x90c6f
    X86_AT(c, 0x9026bu);
    push32(c, 0x90270u); x86_call_known(c, 0x90c6fu, f_00090c6f); X86_RET(c, 0x90270u);
L_90270:
    X86_TICK(c, 12);
    // 090270  cmp byte ptr [0x896af], 0
    X86_AT(c, 0x90270u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896AFu))), 0x0u, 0, 1);
    // 090277  je 0x90287
    X86_AT(c, 0x90277u);
    if (x86_cc(c, 4)) { goto L_90287; }
    X86_TICK(c, 11);
    // 090279  mov byte ptr [0x896af], 0
    X86_AT(c, 0x90279u);
    wr8((c.sbase[3] + (uint32_t)(0x896AFu)), 0x0u);
    // 090280  mov al, 0xfc
    X86_AT(c, 0x90280u);
    s8(c, 0, 0xFCu);
    // 090282  call 0x90c6f
    X86_AT(c, 0x90282u);
    push32(c, 0x90287u); x86_call_known(c, 0x90c6fu, f_00090c6f); X86_RET(c, 0x90287u);
L_90287:
    X86_TICK(c, 12);
    // 090287  cmp byte ptr [0x896b3], 0
    X86_AT(c, 0x90287u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896B3u))), 0x0u, 0, 1);
    // 09028e  je 0x9029d
    X86_AT(c, 0x9028eu);
    if (x86_cc(c, 4)) { goto L_9029d; }
    X86_TICK(c, 15);
    // 090290  dec byte ptr [0x896b3]
    X86_AT(c, 0x90290u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896B3u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 090296  mov al, 0xf8
    X86_AT(c, 0x90296u);
    s8(c, 0, 0xF8u);
    // 090298  call 0x90c6f
    X86_AT(c, 0x90298u);
    push32(c, 0x9029du); x86_call_known(c, 0x90c6fu, f_00090c6f); X86_RET(c, 0x9029du);
L_9029d:
    X86_TICK(c, 14);
    // 09029d  pop ax
    X86_AT(c, 0x9029du);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 09029f  ret 
    X86_AT(c, 0x9029fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90240u, "ran off the end of a function");
}
void f_000902a0(X86Cpu& c) {
    X86_TICK(c, 81);
    // 0902a0  mov dx, 0xe71
    X86_AT(c, 0x902a0u);
    s16(c, 2, 0xE71u);
    // 0902a4  nop 
    X86_AT(c, 0x902a4u);
    // 0902a5  nop 
    X86_AT(c, 0x902a5u);
    // 0902a6  nop 
    X86_AT(c, 0x902a6u);
    // 0902a7  pushf 
    X86_AT(c, 0x902a7u);
    push16(c, c.fl & 0xFFFFu);
    // 0902a9  cli 
    X86_AT(c, 0x902a9u);
    c.fl &= ~X86_IF;
    // 0902aa  in al, dx
    X86_AT(c, 0x902aau);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0902ab  mov ah, byte ptr [0x898e7]
    X86_AT(c, 0x902abu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0x898E7u))));
    // 0902b1  and al, 0xf0
    X86_AT(c, 0x902b1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0902b3  or al, ah
    X86_AT(c, 0x902b3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 4), 1)); }
    // 0902b5  out dx, al
    X86_AT(c, 0x902b5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0902b6  mov byte ptr [0x898e7], al
    X86_AT(c, 0x902b6u);
    wr8((c.sbase[3] + (uint32_t)(0x898E7u)), g8(c, 0));
    // 0902bb  mov al, byte ptr [0x898e8]
    X86_AT(c, 0x902bbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x898E8u))));
    // 0902c0  mov byte ptr [0x898e8], 0
    X86_AT(c, 0x902c0u);
    wr8((c.sbase[3] + (uint32_t)(0x898E8u)), 0x0u);
    // 0902c7  popf 
    X86_AT(c, 0x902c7u);
    x86_popfd(c, 2);
    // 0902c9  and al, 0xf0
    X86_AT(c, 0x902c9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0902cb  or byte ptr [0x896c0], al
    X86_AT(c, 0x902cbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896C0u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 0902d1  ret 
    X86_AT(c, 0x902d1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x902a0u, "ran off the end of a function");
}
void f_000902d2(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0902d2  cmp byte ptr [0x896a7], 0
    X86_AT(c, 0x902d2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896A7u))), 0x0u, 0, 1);
    // 0902d9  je 0x902ea
    X86_AT(c, 0x902d9u);
    if (x86_cc(c, 4)) { goto L_902ea; }
    X86_TICK(c, 12);
    // 0902db  cmp word ptr [0x896b0], 0
    X86_AT(c, 0x902dbu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x896B0u))), 0x0u, 0, 2);
    // 0902e3  jne 0x902ea
    X86_AT(c, 0x902e3u);
    if (x86_cc(c, 5)) { goto L_902ea; }
    X86_TICK(c, 7);
    // 0902e5  call 0x8ff5d
    X86_AT(c, 0x902e5u);
    push32(c, 0x902eau); x86_call_known(c, 0x8ff5du, f_0008ff5d); X86_RET(c, 0x902eau);
L_902ea:
    X86_TICK(c, 10);
    // 0902ea  ret 
    X86_AT(c, 0x902eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x902d2u, "ran off the end of a function");
}
void f_000902eb(X86Cpu& c) {
    X86_TICK(c, 88);
    // 0902eb  inc word ptr [0x89695]
    X86_AT(c, 0x902ebu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89695u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0902f2  movzx ebx, byte ptr [0x89699]
    X86_AT(c, 0x902f2u);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0x89699u)));
    // 0902f9  movzx eax, word ptr cs:[ebx*2 + 0x90782]
    X86_AT(c, 0x902f9u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90782u)));
    // 090302  add eax, dword ptr [0x8969a]
    X86_AT(c, 0x90302u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8969Au))), 0, 4); }
    // 090308  xor edx, edx
    X86_AT(c, 0x90308u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 09030a  mov ebx, 0x1f4
    X86_AT(c, 0x9030au);
    c.r[3] = 0x1F4u;
    // 09030f  div ebx
    X86_AT(c, 0x9030fu);
    x86_div(c, c.r[3], 4, 0x9030fu);
    // 090311  mov dword ptr [0x8969a], edx
    X86_AT(c, 0x90311u);
    wr32((c.sbase[3] + (uint32_t)(0x8969Au)), c.r[2]);
    // 090317  add dword ptr [0x8969e], eax
    X86_AT(c, 0x90317u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8969Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 09031d  mov al, byte ptr [0x89698]
    X86_AT(c, 0x9031du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89698u))));
    // 090322  call 0x8ff8d
    X86_AT(c, 0x90322u);
    push32(c, 0x90327u); x86_call_known(c, 0x8ff8du, f_0008ff8d); X86_RET(c, 0x90327u);
    X86_TICK(c, 11);
    // 090327  cmp dx, word ptr [0x89695]
    X86_AT(c, 0x90327u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0x89695u))), 0, 2);
    // 09032e  ja 0x90344
    X86_AT(c, 0x9032eu);
    if (x86_cc(c, 7)) { goto L_90344; }
    X86_TICK(c, 12);
    // 090330  inc word ptr [0x89693]
    X86_AT(c, 0x90330u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89693u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 090337  xor eax, eax
    X86_AT(c, 0x90337u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 090339  mov word ptr [0x89695], ax
    X86_AT(c, 0x90339u);
    wr16((c.sbase[3] + (uint32_t)(0x89695u)), (c.r[0] & 0xFFFFu));
    // 09033f  mov byte ptr [0x89697], al
    X86_AT(c, 0x9033fu);
    wr8((c.sbase[3] + (uint32_t)(0x89697u)), g8(c, 0));
L_90344:
    X86_TICK(c, 12);
    // 090344  clc 
    X86_AT(c, 0x90344u);
    c.fl &= ~X86_CF;
    // 090345  ret 
    X86_AT(c, 0x90345u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x902ebu, "ran off the end of a function");
}
void f_0009034d(X86Cpu& c) {
L_9034d:
    X86_TICK(c, 17);
    // 09034d  les esi, fword ptr [0x89681]
    X86_AT(c, 0x9034du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89681u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[6] = o; }
    // 090353  mov al, byte ptr es:[esi]
    X86_AT(c, 0x90353u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 090356  cmp al, 0xff
    X86_AT(c, 0x90356u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 090358  je 0x90362
    X86_AT(c, 0x90358u);
    if (x86_cc(c, 4)) { goto L_90362; }
    X86_TICK(c, 7);
    // 09035a  cmp al, 0xf7
    X86_AT(c, 0x9035au);
    (void)x86_sub(c, g8(c, 0), 0xF7u, 0, 1);
    // 09035c  je 0x90362
    X86_AT(c, 0x9035cu);
    if (x86_cc(c, 4)) { goto L_90362; }
    X86_TICK(c, 7);
    // 09035e  cmp al, 0x90
    X86_AT(c, 0x9035eu);
    (void)x86_sub(c, g8(c, 0), 0x90u, 0, 1);
    // 090360  jae 0x90369
    X86_AT(c, 0x90360u);
    if (x86_cc(c, 3)) { goto L_90369; }
L_90362:
    X86_TICK(c, 7);
    // 090362  call 0x90655
    X86_AT(c, 0x90362u);
    push32(c, 0x90367u); x86_call_known(c, 0x90655u, f_00090655); X86_RET(c, 0x90367u);
    X86_TICK(c, 7);
    // 090367  jmp 0x9034d
    X86_AT(c, 0x90367u);
    X86_POLL(c, 0x9034du); goto L_9034d;
L_90369:
    X86_TICK(c, 15);
    // 090369  mov dx, word ptr [0x896a2]
    X86_AT(c, 0x90369u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x896A2u))));
    // 090370  cmp dx, word ptr [0x89693]
    X86_AT(c, 0x90370u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0x89693u))), 0, 2);
    // 090377  ja 0x9039e
    X86_AT(c, 0x90377u);
    if (x86_cc(c, 7)) { goto L_9039e; }
    X86_TICK(c, 5);
    // 090379  je 0x90384
    X86_AT(c, 0x90379u);
    if (x86_cc(c, 4)) { goto L_90384; }
    X86_TICK(c, 7);
    // 09037b  call 0x9039f
    X86_AT(c, 0x9037bu);
    push32(c, 0x90380u); x86_call_known(c, 0x9039fu, f_0009039f); X86_RET(c, 0x90380u);
    X86_TICK(c, 5);
    // 090380  jae 0x9034d
    X86_AT(c, 0x90380u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x9034du); goto L_9034d; }
    X86_TICK(c, 7);
    // 090382  jmp 0x9039e
    X86_AT(c, 0x90382u);
    goto L_9039e;
L_90384:
    X86_TICK(c, 21);
    // 090384  mov dx, word ptr es:[esi + 2]
    X86_AT(c, 0x90384u);
    s16(c, 2, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x2u))));
    // 090389  shl dl, 1
    X86_AT(c, 0x90389u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 09038b  shr dx, 1
    X86_AT(c, 0x9038bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 2, r); }
    // 09038e  cmp dx, word ptr [0x89695]
    X86_AT(c, 0x9038eu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0x89695u))), 0, 2);
    // 090395  ja 0x9039e
    X86_AT(c, 0x90395u);
    if (x86_cc(c, 7)) { goto L_9039e; }
    X86_TICK(c, 7);
    // 090397  call 0x9039f
    X86_AT(c, 0x90397u);
    push32(c, 0x9039cu); x86_call_known(c, 0x9039fu, f_0009039f); X86_RET(c, 0x9039cu);
    X86_TICK(c, 5);
    // 09039c  jae 0x9034d
    X86_AT(c, 0x9039cu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x9034du); goto L_9034d; }
L_9039e:
    X86_TICK(c, 10);
    // 09039e  ret 
    X86_AT(c, 0x9039eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9034du, "ran off the end of a function");
}
void f_0009039f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 09039f  cmp al, 0xfe
    X86_AT(c, 0x9039fu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0903a1  je 0x903dd
    X86_AT(c, 0x903a1u);
    if (x86_cc(c, 4)) { goto L_903dd; }
    X86_TICK(c, 7);
    // 0903a3  cmp al, 0xfd
    X86_AT(c, 0x903a3u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0903a5  je 0x903dd
    X86_AT(c, 0x903a5u);
    if (x86_cc(c, 4)) { goto L_903dd; }
    X86_TICK(c, 10);
    // 0903a7  movzx ebx, al
    X86_AT(c, 0x903a7u);
    c.r[3] = g8(c, 0);
    // 0903aa  cmp al, 0xf0
    X86_AT(c, 0x903aau);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0903ac  jae 0x903c8
    X86_AT(c, 0x903acu);
    if (x86_cc(c, 3)) { goto L_903c8; }
    X86_TICK(c, 12);
    // 0903ae  sub ebx, 0x80
    X86_AT(c, 0x903aeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 0903b4  shr ebx, 4
    X86_AT(c, 0x903b4u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0903b7  call dword ptr cs:[ebx*4 + 0x90436]
    X86_AT(c, 0x903b7u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x90436u))); push32(c, 0x903bfu);
      switch (t) {
      case 0x90496u: x86_call_known(c, 0x90496u, f_00090496); break;
      case 0x90498u: x86_call_known(c, 0x90498u, f_00090498); break;
      case 0x904cbu: x86_call_known(c, 0x904cbu, f_000904cb); break;
      case 0x904d2u: x86_call_known(c, 0x904d2u, f_000904d2); break;
      case 0x904d9u: x86_call_known(c, 0x904d9u, f_000904d9); break;
      case 0x904e0u: x86_call_known(c, 0x904e0u, f_000904e0); break;
      case 0x90538u: x86_call_known(c, 0x90538u, f_00090538); break;
      case 0x906acu: x86_call_known(c, 0x906acu, f_000906ac); break;
      case 0x906f5u: x86_call_known(c, 0x906f5u, f_000906f5); break;
      case 0x906f7u: x86_call_known(c, 0x906f7u, f_000906f7); break;
      case 0x906f9u: x86_call_known(c, 0x906f9u, f_000906f9); break;
      case 0x9070bu: x86_call_known(c, 0x9070bu, f_0009070b); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x903bfu); }
    X86_TICK(c, 5);
    // 0903bf  jb 0x903dd
    X86_AT(c, 0x903bfu);
    if (x86_cc(c, 2)) { goto L_903dd; }
    X86_TICK(c, 7);
    // 0903c1  call 0x90655
    X86_AT(c, 0x903c1u);
    push32(c, 0x903c6u); x86_call_known(c, 0x90655u, f_00090655); X86_RET(c, 0x903c6u);
    X86_TICK(c, 12);
    // 0903c6  clc 
    X86_AT(c, 0x903c6u);
    c.fl &= ~X86_CF;
    // 0903c7  ret 
    X86_AT(c, 0x903c7u);
    c.eip = pop32(c); return;
L_903c8:
    X86_TICK(c, 9);
    // 0903c8  sub ebx, 0xf0
    X86_AT(c, 0x903c8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0xF0u, 0, 4); }
    // 0903ce  call dword ptr cs:[ebx*4 + 0x90456]
    X86_AT(c, 0x903ceu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x90456u))); push32(c, 0x903d6u);
      switch (t) {
      case 0x90496u: x86_call_known(c, 0x90496u, f_00090496); break;
      case 0x906acu: x86_call_known(c, 0x906acu, f_000906ac); break;
      case 0x906f5u: x86_call_known(c, 0x906f5u, f_000906f5); break;
      case 0x906f7u: x86_call_known(c, 0x906f7u, f_000906f7); break;
      case 0x906f9u: x86_call_known(c, 0x906f9u, f_000906f9); break;
      case 0x9070bu: x86_call_known(c, 0x9070bu, f_0009070b); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x903d6u); }
    X86_TICK(c, 7);
    // 0903d6  call 0x90655
    X86_AT(c, 0x903d6u);
    push32(c, 0x903dbu); x86_call_known(c, 0x90655u, f_00090655); X86_RET(c, 0x903dbu);
    X86_TICK(c, 12);
    // 0903db  clc 
    X86_AT(c, 0x903dbu);
    c.fl &= ~X86_CF;
    // 0903dc  ret 
    X86_AT(c, 0x903dcu);
    c.eip = pop32(c); return;
L_903dd:
    X86_TICK(c, 7);
    // 0903dd  cmp al, 0xfd
    X86_AT(c, 0x903ddu);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0903df  je 0x903f3
    X86_AT(c, 0x903dfu);
    if (x86_cc(c, 4)) { goto L_903f3; }
    X86_TICK(c, 12);
    // 0903e1  cmp byte ptr [0x896a9], 0
    X86_AT(c, 0x903e1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x896A9u))), 0x0u, 0, 1);
    // 0903e8  jne 0x903fc
    X86_AT(c, 0x903e8u);
    if (x86_cc(c, 5)) { goto L_903fc; }
    X86_TICK(c, 14);
    // 0903ea  mov byte ptr [0x896a7], 0xff
    X86_AT(c, 0x903eau);
    wr8((c.sbase[3] + (uint32_t)(0x896A7u)), 0xFFu);
    // 0903f1  stc 
    X86_AT(c, 0x903f1u);
    c.fl |= X86_CF;
    // 0903f2  ret 
    X86_AT(c, 0x903f2u);
    c.eip = pop32(c); return;
L_903f3:
    X86_TICK(c, 14);
    // 0903f3  mov byte ptr [0x896a8], 0xff
    X86_AT(c, 0x903f3u);
    wr8((c.sbase[3] + (uint32_t)(0x896A8u)), 0xFFu);
    // 0903fa  stc 
    X86_AT(c, 0x903fau);
    c.fl |= X86_CF;
    // 0903fb  ret 
    X86_AT(c, 0x903fbu);
    c.eip = pop32(c); return;
L_903fc:
    X86_TICK(c, 32);
    // 0903fc  mov byte ptr [0x896a7], 0
    X86_AT(c, 0x903fcu);
    wr8((c.sbase[3] + (uint32_t)(0x896A7u)), 0x0u);
    // 090403  mov eax, dword ptr [0x89687]
    X86_AT(c, 0x90403u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89687u)));
    // 090408  mov dword ptr [0x89681], eax
    X86_AT(c, 0x90408u);
    wr32((c.sbase[3] + (uint32_t)(0x89681u)), c.r[0]);
    // 09040d  mov word ptr [0x896a2], 0
    X86_AT(c, 0x9040du);
    wr16((c.sbase[3] + (uint32_t)(0x896A2u)), 0x0u);
    // 090416  mov word ptr [0x89693], 0
    X86_AT(c, 0x90416u);
    wr16((c.sbase[3] + (uint32_t)(0x89693u)), 0x0u);
    // 09041f  mov word ptr [0x89695], 0
    X86_AT(c, 0x9041fu);
    wr16((c.sbase[3] + (uint32_t)(0x89695u)), 0x0u);
    // 090428  mov dl, byte ptr [0x896a4]
    X86_AT(c, 0x90428u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0x896A4u))));
    // 09042e  mov byte ptr [0x89698], dl
    X86_AT(c, 0x9042eu);
    wr8((c.sbase[3] + (uint32_t)(0x89698u)), g8(c, 2));
    // 090434  clc 
    X86_AT(c, 0x90434u);
    c.fl &= ~X86_CF;
    // 090435  ret 
    X86_AT(c, 0x90435u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9039fu, "ran off the end of a function");
}
void f_00090496(X86Cpu& c) {
    X86_TICK(c, 12);
    // 090496  clc 
    X86_AT(c, 0x90496u);
    c.fl &= ~X86_CF;
    // 090497  ret 
    X86_AT(c, 0x90497u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90496u, "ran off the end of a function");
}
void f_00090498(X86Cpu& c) {
    X86_TICK(c, 11);
    // 090498  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x90498u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 09049c  call 0x905c7
    X86_AT(c, 0x9049cu);
    push32(c, 0x904a1u); x86_call_known(c, 0x905c7u, f_000905c7); X86_RET(c, 0x904a1u);
    X86_TICK(c, 5);
    // 0904a1  jb 0x904c9
    X86_AT(c, 0x904a1u);
    if (x86_cc(c, 2)) { goto L_904c9; }
    X86_TICK(c, 7);
    // 0904a3  call 0x8ffde
    X86_AT(c, 0x904a3u);
    push32(c, 0x904a8u); x86_call_known(c, 0x8ffdeu, f_0008ffde); X86_RET(c, 0x904a8u);
    X86_TICK(c, 7);
    // 0904a8  call 0x905da
    X86_AT(c, 0x904a8u);
    push32(c, 0x904adu); x86_call_known(c, 0x905dau, f_000905da); X86_RET(c, 0x904adu);
    X86_TICK(c, 7);
    // 0904ad  call 0x90bd9
    X86_AT(c, 0x904adu);
    push32(c, 0x904b2u); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x904b2u);
    X86_TICK(c, 11);
    // 0904b2  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x904b2u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0904b6  call 0x905f7
    X86_AT(c, 0x904b6u);
    push32(c, 0x904bbu); x86_call_known(c, 0x905f7u, f_000905f7); X86_RET(c, 0x904bbu);
    X86_TICK(c, 7);
    // 0904bb  call 0x90bd9
    X86_AT(c, 0x904bbu);
    push32(c, 0x904c0u); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x904c0u);
    X86_TICK(c, 11);
    // 0904c0  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0x904c0u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0904c4  call 0x90bd9
    X86_AT(c, 0x904c4u);
    push32(c, 0x904c9u); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x904c9u);
L_904c9:
    X86_TICK(c, 12);
    // 0904c9  clc 
    X86_AT(c, 0x904c9u);
    c.fl &= ~X86_CF;
    // 0904ca  ret 
    X86_AT(c, 0x904cau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90498u, "ran off the end of a function");
}
void f_000904cb(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0904cb  call 0x9050b
    X86_AT(c, 0x904cbu);
    push32(c, 0x904d0u); x86_call_known(c, 0x9050bu, f_0009050b); X86_RET(c, 0x904d0u);
    X86_TICK(c, 12);
    // 0904d0  clc 
    X86_AT(c, 0x904d0u);
    c.fl &= ~X86_CF;
    // 0904d1  ret 
    X86_AT(c, 0x904d1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x904cbu, "ran off the end of a function");
}
void f_000904d2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0904d2  call 0x904e7
    X86_AT(c, 0x904d2u);
    push32(c, 0x904d7u); x86_call_known(c, 0x904e7u, f_000904e7); X86_RET(c, 0x904d7u);
    X86_TICK(c, 12);
    // 0904d7  clc 
    X86_AT(c, 0x904d7u);
    c.fl &= ~X86_CF;
    // 0904d8  ret 
    X86_AT(c, 0x904d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x904d2u, "ran off the end of a function");
}
void f_000904d9(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0904d9  call 0x904e7
    X86_AT(c, 0x904d9u);
    push32(c, 0x904deu); x86_call_known(c, 0x904e7u, f_000904e7); X86_RET(c, 0x904deu);
    X86_TICK(c, 12);
    // 0904de  clc 
    X86_AT(c, 0x904deu);
    c.fl &= ~X86_CF;
    // 0904df  ret 
    X86_AT(c, 0x904dfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x904d9u, "ran off the end of a function");
}
void f_000904e0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0904e0  call 0x9050b
    X86_AT(c, 0x904e0u);
    push32(c, 0x904e5u); x86_call_known(c, 0x9050bu, f_0009050b); X86_RET(c, 0x904e5u);
    X86_TICK(c, 12);
    // 0904e5  clc 
    X86_AT(c, 0x904e5u);
    c.fl &= ~X86_CF;
    // 0904e6  ret 
    X86_AT(c, 0x904e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x904e0u, "ran off the end of a function");
}
void f_000904e7(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0904e7  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x904e7u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0904eb  call 0x905c7
    X86_AT(c, 0x904ebu);
    push32(c, 0x904f0u); x86_call_known(c, 0x905c7u, f_000905c7); X86_RET(c, 0x904f0u);
    X86_TICK(c, 5);
    // 0904f0  jb 0x9050a
    X86_AT(c, 0x904f0u);
    if (x86_cc(c, 2)) { goto L_9050a; }
    X86_TICK(c, 7);
    // 0904f2  call 0x8ffde
    X86_AT(c, 0x904f2u);
    push32(c, 0x904f7u); x86_call_known(c, 0x8ffdeu, f_0008ffde); X86_RET(c, 0x904f7u);
    X86_TICK(c, 7);
    // 0904f7  call 0x905da
    X86_AT(c, 0x904f7u);
    push32(c, 0x904fcu); x86_call_known(c, 0x905dau, f_000905da); X86_RET(c, 0x904fcu);
    X86_TICK(c, 7);
    // 0904fc  call 0x90bd9
    X86_AT(c, 0x904fcu);
    push32(c, 0x90501u); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x90501u);
    X86_TICK(c, 11);
    // 090501  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x90501u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 090505  call 0x90bd9
    X86_AT(c, 0x90505u);
    push32(c, 0x9050au); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x9050au);
L_9050a:
    X86_TICK(c, 10);
    // 09050a  ret 
    X86_AT(c, 0x9050au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x904e7u, "ran off the end of a function");
}
void f_0009050b(X86Cpu& c) {
    X86_TICK(c, 11);
    // 09050b  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x9050bu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 09050f  call 0x905c7
    X86_AT(c, 0x9050fu);
    push32(c, 0x90514u); x86_call_known(c, 0x905c7u, f_000905c7); X86_RET(c, 0x90514u);
    X86_TICK(c, 5);
    // 090514  jb 0x90537
    X86_AT(c, 0x90514u);
    if (x86_cc(c, 2)) { goto L_90537; }
    X86_TICK(c, 7);
    // 090516  call 0x8ffde
    X86_AT(c, 0x90516u);
    push32(c, 0x9051bu); x86_call_known(c, 0x8ffdeu, f_0008ffde); X86_RET(c, 0x9051bu);
    X86_TICK(c, 7);
    // 09051b  call 0x905da
    X86_AT(c, 0x9051bu);
    push32(c, 0x90520u); x86_call_known(c, 0x905dau, f_000905da); X86_RET(c, 0x90520u);
    X86_TICK(c, 7);
    // 090520  call 0x90bd9
    X86_AT(c, 0x90520u);
    push32(c, 0x90525u); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x90525u);
    X86_TICK(c, 11);
    // 090525  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x90525u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 090529  call 0x90bd9
    X86_AT(c, 0x90529u);
    push32(c, 0x9052eu); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x9052eu);
    X86_TICK(c, 11);
    // 09052e  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0x9052eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 090532  call 0x90bd9
    X86_AT(c, 0x90532u);
    push32(c, 0x90537u); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x90537u);
L_90537:
    X86_TICK(c, 10);
    // 090537  ret 
    X86_AT(c, 0x90537u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9050bu, "ran off the end of a function");
}
void f_00090538(X86Cpu& c) {
    X86_TICK(c, 11);
    // 090538  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x90538u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 09053c  call 0x905c7
    X86_AT(c, 0x9053cu);
    push32(c, 0x90541u); x86_call_known(c, 0x905c7u, f_000905c7); X86_RET(c, 0x90541u);
    X86_TICK(c, 5);
    // 090541  jae 0x9055d
    X86_AT(c, 0x90541u);
    if (x86_cc(c, 3)) { goto L_9055d; }
    X86_TICK(c, 7);
    // 090543  call 0x90655
    X86_AT(c, 0x90543u);
    push32(c, 0x90548u); x86_call_known(c, 0x90655u, f_00090655); X86_RET(c, 0x90548u);
    X86_TICK(c, 11);
    // 090548  mov al, byte ptr es:[esi]
    X86_AT(c, 0x90548u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 09054b  cmp al, 0xfe
    X86_AT(c, 0x9054bu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 09054d  je 0x905c5
    X86_AT(c, 0x9054du);
    if (x86_cc(c, 4)) { goto L_905c5; }
    X86_TICK(c, 7);
    // 090553  cmp al, 0xfd
    X86_AT(c, 0x90553u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 090555  je 0x905c5
    X86_AT(c, 0x90555u);
    if (x86_cc(c, 4)) { goto L_905c5; }
    X86_TICK(c, 12);
    // 09055b  clc 
    X86_AT(c, 0x9055bu);
    c.fl &= ~X86_CF;
    // 09055c  ret 
    X86_AT(c, 0x9055cu);
    c.eip = pop32(c); return;
L_9055d:
    X86_TICK(c, 7);
    // 09055d  call 0x8ffde
    X86_AT(c, 0x9055du);
    push32(c, 0x90562u); x86_call_known(c, 0x8ffdeu, f_0008ffde); X86_RET(c, 0x90562u);
    X86_TICK(c, 7);
    // 090562  call 0x905da
    X86_AT(c, 0x90562u);
    push32(c, 0x90567u); x86_call_known(c, 0x905dau, f_000905da); X86_RET(c, 0x90567u);
    X86_TICK(c, 9);
    // 090567  mov ch, al
    X86_AT(c, 0x90567u);
    s8(c, 5, g8(c, 0));
    // 090569  call 0x90bd9
    X86_AT(c, 0x90569u);
    push32(c, 0x9056eu); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x9056eu);
    X86_TICK(c, 11);
    // 09056e  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x9056eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 090572  call 0x905f7
    X86_AT(c, 0x90572u);
    push32(c, 0x90577u); x86_call_known(c, 0x905f7u, f_000905f7); X86_RET(c, 0x90577u);
    X86_TICK(c, 9);
    // 090577  mov cl, al
    X86_AT(c, 0x90577u);
    s8(c, 1, g8(c, 0));
    // 090579  call 0x90bd9
    X86_AT(c, 0x90579u);
    push32(c, 0x9057eu); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x9057eu);
    X86_TICK(c, 11);
    // 09057e  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0x9057eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 090582  call 0x9062a
    X86_AT(c, 0x90582u);
    push32(c, 0x90587u); x86_call_known(c, 0x9062au, f_0009062a); X86_RET(c, 0x90587u);
    X86_TICK(c, 7);
    // 090587  call 0x90bd9
    X86_AT(c, 0x90587u);
    push32(c, 0x9058cu); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x9058cu);
    X86_TICK(c, 7);
    // 09058c  call 0x90655
    X86_AT(c, 0x9058cu);
    push32(c, 0x90591u); x86_call_known(c, 0x90655u, f_00090655); X86_RET(c, 0x90591u);
    X86_TICK(c, 11);
    // 090591  mov al, byte ptr es:[esi]
    X86_AT(c, 0x90591u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 090594  cmp al, 0xfe
    X86_AT(c, 0x90594u);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 090596  je 0x905c5
    X86_AT(c, 0x90596u);
    if (x86_cc(c, 4)) { goto L_905c5; }
    X86_TICK(c, 7);
    // 090598  cmp al, 0xfd
    X86_AT(c, 0x90598u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 09059a  je 0x905c5
    X86_AT(c, 0x9059au);
    if (x86_cc(c, 4)) { goto L_905c5; }
    X86_TICK(c, 39);
    // 09059c  push bx
    X86_AT(c, 0x9059cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); push16(c, v); }
    // 09059e  mov ax, word ptr es:[esi + 1]
    X86_AT(c, 0x9059eu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0905a3  shl al, 4
    X86_AT(c, 0x905a3u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 0905a6  shr ax, 4
    X86_AT(c, 0x905a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 0905aa  mov bx, word ptr es:[esi + 3]
    X86_AT(c, 0x905aau);
    s16(c, 3, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x3u))));
    // 0905af  shl bl, 4
    X86_AT(c, 0x905afu);
    { uint32_t v = g8(c, 3); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 3, r); }
    // 0905b2  shr bx, 4
    X86_AT(c, 0x905b2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 3, r); }
    // 0905b6  mov ah, bl
    X86_AT(c, 0x905b6u);
    s8(c, 4, g8(c, 3));
    // 0905b8  pop bx
    X86_AT(c, 0x905b8u);
    { uint32_t v = pop16(c); s16(c, 3, v); }
    // 0905ba  mov bh, byte ptr es:[esi + 5]
    X86_AT(c, 0x905bau);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0905be  call 0x9066d
    X86_AT(c, 0x905beu);
    push32(c, 0x905c3u); x86_call_known(c, 0x9066du, f_0009066d); X86_RET(c, 0x905c3u);
    X86_TICK(c, 12);
    // 0905c3  clc 
    X86_AT(c, 0x905c3u);
    c.fl &= ~X86_CF;
    // 0905c4  ret 
    X86_AT(c, 0x905c4u);
    c.eip = pop32(c); return;
L_905c5:
    X86_TICK(c, 12);
    // 0905c5  stc 
    X86_AT(c, 0x905c5u);
    c.fl |= X86_CF;
    // 0905c6  ret 
    X86_AT(c, 0x905c6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90538u, "ran off the end of a function");
}
void f_000905c7(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0905c7  push ebx
    X86_AT(c, 0x905c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0905c8  movzx ebx, dl
    X86_AT(c, 0x905c8u);
    c.r[3] = g8(c, 2);
    // 0905cb  cmp byte ptr [ebx + 0x896c5], 0
    X86_AT(c, 0x905cbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x896C5u))), 0x0u, 0, 1);
    // 0905d2  je 0x905d7
    X86_AT(c, 0x905d2u);
    if (x86_cc(c, 4)) { goto L_905d7; }
    X86_TICK(c, 16);
    // 0905d4  pop ebx
    X86_AT(c, 0x905d4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0905d5  clc 
    X86_AT(c, 0x905d5u);
    c.fl &= ~X86_CF;
    // 0905d6  ret 
    X86_AT(c, 0x905d6u);
    c.eip = pop32(c); return;
L_905d7:
    X86_TICK(c, 16);
    // 0905d7  pop ebx
    X86_AT(c, 0x905d7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0905d8  stc 
    X86_AT(c, 0x905d8u);
    c.fl |= X86_CF;
    // 0905d9  ret 
    X86_AT(c, 0x905d9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x905c7u, "ran off the end of a function");
}
void f_000905da(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0905da  push ebx
    X86_AT(c, 0x905dau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0905db  cmp al, 0xf0
    X86_AT(c, 0x905dbu);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0905dd  jae 0x905f5
    X86_AT(c, 0x905ddu);
    if (x86_cc(c, 3)) { goto L_905f5; }
    X86_TICK(c, 7);
    // 0905df  cmp al, 0x80
    X86_AT(c, 0x905dfu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0905e1  jb 0x905f5
    X86_AT(c, 0x905e1u);
    if (x86_cc(c, 2)) { goto L_905f5; }
    X86_TICK(c, 17);
    // 0905e3  movzx ebx, dl
    X86_AT(c, 0x905e3u);
    c.r[3] = g8(c, 2);
    // 0905e6  lea ebx, [ebx + 0x89705]
    X86_AT(c, 0x905e6u);
    c.r[3] = (uint32_t)(c.r[3] + 0x89705u);
    // 0905ec  cmp byte ptr [ebx], 0xf
    X86_AT(c, 0x905ecu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0xFu, 0, 1);
    // 0905ef  ja 0x905f5
    X86_AT(c, 0x905efu);
    if (x86_cc(c, 7)) { goto L_905f5; }
    X86_TICK(c, 8);
    // 0905f1  and al, 0xf0
    X86_AT(c, 0x905f1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0905f3  or al, byte ptr [ebx]
    X86_AT(c, 0x905f3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 1)); }
L_905f5:
    X86_TICK(c, 14);
    // 0905f5  pop ebx
    X86_AT(c, 0x905f5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0905f6  ret 
    X86_AT(c, 0x905f6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x905dau, "ran off the end of a function");
}
void f_000905f7(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0905f7  push ebx
    X86_AT(c, 0x905f7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0905f8  movzx ebx, dl
    X86_AT(c, 0x905f8u);
    c.r[3] = g8(c, 2);
    // 0905fb  mov bl, byte ptr [ebx + 0x89745]
    X86_AT(c, 0x905fbu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89745u))));
    // 090601  or bl, bl
    X86_AT(c, 0x90601u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | g8(c, 3), 1)); }
    // 090603  je 0x90628
    X86_AT(c, 0x90603u);
    if (x86_cc(c, 4)) { goto L_90628; }
    X86_TICK(c, 7);
    // 090605  and ax, 0x7f
    X86_AT(c, 0x90605u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 090609  movsx bx, bl
    X86_AT(c, 0x90609u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 09060d  add ax, bx
    X86_AT(c, 0x9060du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_90610:
    X86_TICK(c, 7);
    // 090610  cmp ax, 0x7f
    X86_AT(c, 0x90610u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 090614  jle 0x9061c
    X86_AT(c, 0x90614u);
    if (x86_cc(c, 14)) { goto L_9061c; }
    X86_TICK(c, 9);
    // 090616  sub ax, 0xc
    X86_AT(c, 0x90616u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0xCu, 0, 2)); }
    // 09061a  jmp 0x90610
    X86_AT(c, 0x9061au);
    X86_POLL(c, 0x90610u); goto L_90610;
L_9061c:
    X86_TICK(c, 7);
    // 09061c  cmp ax, 0
    X86_AT(c, 0x9061cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x0u, 0, 2);
    // 090620  jge 0x90628
    X86_AT(c, 0x90620u);
    if (x86_cc(c, 13)) { goto L_90628; }
    X86_TICK(c, 9);
    // 090622  add ax, 0xc
    X86_AT(c, 0x90622u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xCu, 0, 2)); }
    // 090626  jmp 0x9061c
    X86_AT(c, 0x90626u);
    X86_POLL(c, 0x9061cu); goto L_9061c;
L_90628:
    X86_TICK(c, 14);
    // 090628  pop ebx
    X86_AT(c, 0x90628u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090629  ret 
    X86_AT(c, 0x90629u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x905f7u, "ran off the end of a function");
}
void f_0009062a(X86Cpu& c) {
    X86_TICK(c, 23);
    // 09062a  push ebx
    X86_AT(c, 0x9062au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09062b  movzx ebx, dl
    X86_AT(c, 0x9062bu);
    c.r[3] = g8(c, 2);
    // 09062e  mov bl, byte ptr [ebx + 0x89725]
    X86_AT(c, 0x9062eu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x89725u))));
    // 090634  and ax, 0x7f
    X86_AT(c, 0x90634u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 090638  movsx bx, bl
    X86_AT(c, 0x90638u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 09063c  add ax, bx
    X86_AT(c, 0x9063cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 09063f  cmp ax, 0x7f
    X86_AT(c, 0x9063fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 090643  jg 0x9064d
    X86_AT(c, 0x90643u);
    if (x86_cc(c, 15)) { goto L_9064d; }
    X86_TICK(c, 7);
    // 090645  cmp ax, 1
    X86_AT(c, 0x90645u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
    // 090649  jl 0x90651
    X86_AT(c, 0x90649u);
    if (x86_cc(c, 12)) { goto L_90651; }
    X86_TICK(c, 7);
    // 09064b  jmp 0x90653
    X86_AT(c, 0x9064bu);
    goto L_90653;
L_9064d:
    X86_TICK(c, 9);
    // 09064d  mov al, 0x7f
    X86_AT(c, 0x9064du);
    s8(c, 0, 0x7Fu);
    // 09064f  jmp 0x90653
    X86_AT(c, 0x9064fu);
    goto L_90653;
L_90651:
    X86_TICK(c, 2);
    // 090651  mov al, 1
    X86_AT(c, 0x90651u);
    s8(c, 0, 0x1u);
L_90653:
    X86_TICK(c, 14);
    // 090653  pop ebx
    X86_AT(c, 0x90653u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090654  ret 
    X86_AT(c, 0x90654u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9062au, "ran off the end of a function");
}
void f_00090655(X86Cpu& c) {
    X86_TICK(c, 13);
    // 090655  add esi, 6
    X86_AT(c, 0x90655u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x6u, 0, 4); }
    // 090658  cmp esi, dword ptr [0x8968d]
    X86_AT(c, 0x90658u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8968Du))), 0, 4);
    // 09065e  jb 0x90666
    X86_AT(c, 0x9065eu);
    if (x86_cc(c, 2)) { goto L_90666; }
    X86_TICK(c, 4);
    // 090660  mov esi, dword ptr [0x89687]
    X86_AT(c, 0x90660u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x89687u)));
L_90666:
    X86_TICK(c, 12);
    // 090666  mov dword ptr [0x89681], esi
    X86_AT(c, 0x90666u);
    wr32((c.sbase[3] + (uint32_t)(0x89681u)), c.r[6]);
    // 09066c  ret 
    X86_AT(c, 0x9066cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90655u, "ran off the end of a function");
}
void f_0009066d(X86Cpu& c) {
    X86_TICK(c, 8);
    // 09066d  push edi
    X86_AT(c, 0x9066du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09066e  push ecx
    X86_AT(c, 0x9066eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 09066f  mov ecx, 0x40
    X86_AT(c, 0x9066fu);
    c.r[1] = 0x40u;
    // 090674  lea edi, [0x89765]
    X86_AT(c, 0x90674u);
    c.r[7] = (uint32_t)(0x89765u);
L_9067a:
    X86_TICK(c, 12);
    // 09067a  cmp byte ptr [edi], 0
    X86_AT(c, 0x9067au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 09067d  je 0x9068c
    X86_AT(c, 0x9067du);
    if (x86_cc(c, 4)) { goto L_9068c; }
    X86_TICK(c, 13);
    // 09067f  add edi, 6
    X86_AT(c, 0x9067fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 090682  loop 0x9067a
    X86_AT(c, 0x90682u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x9067au); goto L_9067a; }
    X86_TICK(c, 11);
    // 090684  pop ecx
    X86_AT(c, 0x90684u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 090685  call 0x90763
    X86_AT(c, 0x90685u);
    push32(c, 0x9068au); x86_call_known(c, 0x90763u, f_00090763); X86_RET(c, 0x9068au);
    X86_TICK(c, 14);
    // 09068a  pop edi
    X86_AT(c, 0x9068au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09068b  ret 
    X86_AT(c, 0x9068bu);
    c.eip = pop32(c); return;
L_9068c:
    X86_TICK(c, 19);
    // 09068c  pop ecx
    X86_AT(c, 0x9068cu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 09068d  mov byte ptr [edi], ch
    X86_AT(c, 0x9068du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 5));
    // 09068f  mov byte ptr [edi + 1], bl
    X86_AT(c, 0x9068fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 3));
    // 090692  mov byte ptr [edi + 2], cl
    X86_AT(c, 0x90692u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 090695  mov byte ptr [edi + 3], bh
    X86_AT(c, 0x90695u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 7));
    // 090698  or ax, ax
    X86_AT(c, 0x90698u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 09069b  jne 0x9069f
    X86_AT(c, 0x9069bu);
    if (x86_cc(c, 5)) { goto L_9069f; }
    X86_TICK(c, 2);
    // 09069d  inc ax
    X86_AT(c, 0x9069du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
L_9069f:
    X86_TICK(c, 22);
    // 09069f  mov word ptr [edi + 4], ax
    X86_AT(c, 0x9069fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 0906a3  inc word ptr [0x896b0]
    X86_AT(c, 0x906a3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896B0u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0906aa  pop edi
    X86_AT(c, 0x906aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0906ab  ret 
    X86_AT(c, 0x906abu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9066du, "ran off the end of a function");
}
void f_000906ac(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0906ac  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x906acu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0906b0  call 0x8ffde
    X86_AT(c, 0x906b0u);
    push32(c, 0x906b5u); x86_call_known(c, 0x8ffdeu, f_0008ffde); X86_RET(c, 0x906b5u);
    X86_TICK(c, 9);
    // 0906b5  mov al, 0xf0
    X86_AT(c, 0x906b5u);
    s8(c, 0, 0xF0u);
    // 0906b7  call 0x90bd9
    X86_AT(c, 0x906b7u);
    push32(c, 0x906bcu); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x906bcu);
    X86_TICK(c, 7);
    // 0906bc  call 0x90655
    X86_AT(c, 0x906bcu);
    push32(c, 0x906c1u); x86_call_known(c, 0x90655u, f_00090655); X86_RET(c, 0x906c1u);
L_906c1:
    X86_TICK(c, 4);
    // 0906c1  push esi
    X86_AT(c, 0x906c1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0906c2  mov ecx, 6
    X86_AT(c, 0x906c2u);
    c.r[1] = 0x6u;
L_906c7:
    X86_TICK(c, 11);
    // 0906c7  mov al, byte ptr es:[esi]
    X86_AT(c, 0x906c7u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0906ca  cmp al, 0xff
    X86_AT(c, 0x906cau);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0906cc  je 0x906d7
    X86_AT(c, 0x906ccu);
    if (x86_cc(c, 4)) { goto L_906d7; }
    X86_TICK(c, 7);
    // 0906ce  call 0x90bd9
    X86_AT(c, 0x906ceu);
    push32(c, 0x906d3u); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x906d3u);
    X86_TICK(c, 7);
    // 0906d3  cmp al, 0x80
    X86_AT(c, 0x906d3u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0906d5  jae 0x906e7
    X86_AT(c, 0x906d5u);
    if (x86_cc(c, 3)) { goto L_906e7; }
L_906d7:
    X86_TICK(c, 13);
    // 0906d7  inc esi
    X86_AT(c, 0x906d7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0906d8  loop 0x906c7
    X86_AT(c, 0x906d8u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x906c7u); goto L_906c7; }
    X86_TICK(c, 11);
    // 0906da  pop esi
    X86_AT(c, 0x906dau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0906db  call 0x90655
    X86_AT(c, 0x906dbu);
    push32(c, 0x906e0u); x86_call_known(c, 0x90655u, f_00090655); X86_RET(c, 0x906e0u);
    X86_TICK(c, 7);
    // 0906e0  call 0x906ea
    X86_AT(c, 0x906e0u);
    push32(c, 0x906e5u); x86_call_known(c, 0x906eau, f_000906ea); X86_RET(c, 0x906e5u);
    X86_TICK(c, 7);
    // 0906e5  jmp 0x906c1
    X86_AT(c, 0x906e5u);
    X86_POLL(c, 0x906c1u); goto L_906c1;
L_906e7:
    X86_TICK(c, 16);
    // 0906e7  pop esi
    X86_AT(c, 0x906e7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0906e8  clc 
    X86_AT(c, 0x906e8u);
    c.fl &= ~X86_CF;
    // 0906e9  ret 
    X86_AT(c, 0x906e9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x906acu, "ran off the end of a function");
}
void f_000906ea(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0906ea  pushal 
    X86_AT(c, 0x906eau);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0906eb  mov ecx, 0x19
    X86_AT(c, 0x906ebu);
    c.r[1] = 0x19u;
L_906f0:
    X86_TICK(c, 13);
    // 0906f0  nop 
    X86_AT(c, 0x906f0u);
    // 0906f1  loop 0x906f0
    X86_AT(c, 0x906f1u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x906f0u); goto L_906f0; }
    X86_TICK(c, 34);
    // 0906f3  popal 
    X86_AT(c, 0x906f3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0906f4  ret 
    X86_AT(c, 0x906f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x906eau, "ran off the end of a function");
}
void f_000906f5(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0906f5  clc 
    X86_AT(c, 0x906f5u);
    c.fl &= ~X86_CF;
    // 0906f6  ret 
    X86_AT(c, 0x906f6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x906f5u, "ran off the end of a function");
}
void f_000906f7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0906f7  clc 
    X86_AT(c, 0x906f7u);
    c.fl &= ~X86_CF;
    // 0906f8  ret 
    X86_AT(c, 0x906f8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x906f7u, "ran off the end of a function");
}
void f_000906f9(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0906f9  inc word ptr [0x896a2]
    X86_AT(c, 0x906f9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896A2u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 090700  mov al, byte ptr es:[esi + 1]
    X86_AT(c, 0x90700u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 090704  mov byte ptr [0x89698], al
    X86_AT(c, 0x90704u);
    wr8((c.sbase[3] + (uint32_t)(0x89698u)), g8(c, 0));
    // 090709  clc 
    X86_AT(c, 0x90709u);
    c.fl &= ~X86_CF;
    // 09070a  ret 
    X86_AT(c, 0x9070au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x906f9u, "ran off the end of a function");
}
void f_0009070b(X86Cpu& c) {
    X86_TICK(c, 19);
    // 09070b  mov ax, word ptr es:[esi + 4]
    X86_AT(c, 0x9070bu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 090710  shl al, 1
    X86_AT(c, 0x90710u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 090712  shr ax, 1
    X86_AT(c, 0x90712u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 090715  mov byte ptr [0x89699], al
    X86_AT(c, 0x90715u);
    wr8((c.sbase[3] + (uint32_t)(0x89699u)), g8(c, 0));
    // 09071a  call 0x9110f
    X86_AT(c, 0x9071au);
    push32(c, 0x9071fu); x86_call_known(c, 0x9110fu, f_0009110f); X86_RET(c, 0x9071fu);
    X86_TICK(c, 12);
    // 09071f  clc 
    X86_AT(c, 0x9071fu);
    c.fl &= ~X86_CF;
    // 090720  ret 
    X86_AT(c, 0x90720u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9070bu, "ran off the end of a function");
}
void f_00090721(X86Cpu& c) {
    X86_TICK(c, 13);
    // 090721  movzx ecx, word ptr [0x896b0]
    X86_AT(c, 0x90721u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0x896B0u)));
    // 090728  or ecx, ecx
    X86_AT(c, 0x90728u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 09072a  je 0x90762
    X86_AT(c, 0x9072au);
    if (x86_cc(c, 4)) { goto L_90762; }
    X86_TICK(c, 2);
    // 09072c  lea edi, [0x89765]
    X86_AT(c, 0x9072cu);
    c.r[7] = (uint32_t)(0x89765u);
L_90732:
    X86_TICK(c, 12);
    // 090732  cmp byte ptr [edi], 0
    X86_AT(c, 0x90732u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 090735  jne 0x9073c
    X86_AT(c, 0x90735u);
    if (x86_cc(c, 5)) { goto L_9073c; }
    X86_TICK(c, 9);
    // 090737  add edi, 6
    X86_AT(c, 0x90737u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 09073a  jmp 0x90732
    X86_AT(c, 0x9073au);
    X86_POLL(c, 0x90732u); goto L_90732;
L_9073c:
    X86_TICK(c, 11);
    // 09073c  dec word ptr [edi + 4]
    X86_AT(c, 0x9073cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 090740  jne 0x9075d
    X86_AT(c, 0x90740u);
    if (x86_cc(c, 5)) { goto L_9075d; }
    X86_TICK(c, 28);
    // 090742  push ecx
    X86_AT(c, 0x90742u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 090743  xor ch, ch
    X86_AT(c, 0x90743u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 090745  xchg byte ptr [edi], ch
    X86_AT(c, 0x90745u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 090747  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0x90747u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 09074a  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0x9074au);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 09074d  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0x9074du);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 090750  call 0x90763
    X86_AT(c, 0x90750u);
    push32(c, 0x90755u); x86_call_known(c, 0x90763u, f_00090763); X86_RET(c, 0x90755u);
    X86_TICK(c, 10);
    // 090755  dec word ptr [0x896b0]
    X86_AT(c, 0x90755u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x896B0u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 09075c  pop ecx
    X86_AT(c, 0x9075cu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_9075d:
    X86_TICK(c, 13);
    // 09075d  add edi, 6
    X86_AT(c, 0x9075du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 090760  loop 0x90732
    X86_AT(c, 0x90760u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x90732u); goto L_90732; }
L_90762:
    X86_TICK(c, 10);
    // 090762  ret 
    X86_AT(c, 0x90762u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90721u, "ran off the end of a function");
}
void f_00090763(X86Cpu& c) {
    X86_TICK(c, 9);
    // 090763  push eax
    X86_AT(c, 0x90763u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090764  or bh, bh
    X86_AT(c, 0x90764u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 7), 1)); }
    // 090766  je 0x9076b
    X86_AT(c, 0x90766u);
    if (x86_cc(c, 4)) { goto L_9076b; }
    X86_TICK(c, 2);
    // 090768  and ch, 0x8f
    X86_AT(c, 0x90768u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x8Fu, 1)); }
L_9076b:
    X86_TICK(c, 9);
    // 09076b  mov al, ch
    X86_AT(c, 0x9076bu);
    s8(c, 0, g8(c, 5));
    // 09076d  call 0x90bd9
    X86_AT(c, 0x9076du);
    push32(c, 0x90772u); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x90772u);
    X86_TICK(c, 9);
    // 090772  mov al, cl
    X86_AT(c, 0x90772u);
    s8(c, 0, g8(c, 1));
    // 090774  call 0x90bd9
    X86_AT(c, 0x90774u);
    push32(c, 0x90779u); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x90779u);
    X86_TICK(c, 9);
    // 090779  mov al, bh
    X86_AT(c, 0x90779u);
    s8(c, 0, g8(c, 7));
    // 09077b  call 0x90bd9
    X86_AT(c, 0x9077bu);
    push32(c, 0x90780u); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x90780u);
    X86_TICK(c, 14);
    // 090780  pop eax
    X86_AT(c, 0x90780u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 090781  ret 
    X86_AT(c, 0x90781u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90763u, "ran off the end of a function");
}
void f_00090b86(X86Cpu& c) {
    X86_TICK(c, 25);
    // 090b86  cld 
    X86_AT(c, 0x90b86u);
    c.fl &= ~X86_DF;
    // 090b87  push esi
    X86_AT(c, 0x90b87u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 090b88  push ebx
    X86_AT(c, 0x90b88u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 090b89  and ebx, 7
    X86_AT(c, 0x90b89u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 090b8c  shl ebx, 5
    X86_AT(c, 0x90b8cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 090b8f  lea ebx, [ebx + 0x89a15]
    X86_AT(c, 0x90b8fu);
    c.r[3] = (uint32_t)(c.r[3] + 0x89A15u);
    // 090b95  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0x90b95u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 090b9a  je 0x90bb5
    X86_AT(c, 0x90b9au);
    if (x86_cc(c, 4)) { goto L_90bb5; }
    X86_TICK(c, 28);
    // 090b9c  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0x90b9cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 090b9f  lodsb al, byte ptr [esi]
    X86_AT(c, 0x90b9fu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 090ba0  dec word ptr [ebx + 0x10]
    X86_AT(c, 0x90ba0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 090ba4  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0x90ba4u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 090ba7  jne 0x90bab
    X86_AT(c, 0x90ba7u);
    if (x86_cc(c, 5)) { goto L_90bab; }
    X86_TICK(c, 4);
    // 090ba9  mov esi, dword ptr [ebx]
    X86_AT(c, 0x90ba9u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_90bab:
    X86_TICK(c, 16);
    // 090bab  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0x90babu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 090bae  xor ah, ah
    X86_AT(c, 0x90baeu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 090bb0  xchg byte ptr [ebx + 0x19], ah
    X86_AT(c, 0x90bb0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 4)); s8(c, 4, t); }
    // 090bb3  jmp 0x90bb7
    X86_AT(c, 0x90bb3u);
    goto L_90bb7;
L_90bb5:
    X86_TICK(c, 2);
    // 090bb5  mov ah, 1
    X86_AT(c, 0x90bb5u);
    s8(c, 4, 0x1u);
L_90bb7:
    X86_TICK(c, 7);
    // 090bb7  cmp ah, 1
    X86_AT(c, 0x90bb7u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 090bba  jbe 0x90bc2
    X86_AT(c, 0x90bbau);
    if (x86_cc(c, 6)) { goto L_90bc2; }
    X86_TICK(c, 2);
    // 090bbc  mov byte ptr [0x89680], ah
    X86_AT(c, 0x90bbcu);
    wr8((c.sbase[3] + (uint32_t)(0x89680u)), g8(c, 4));
L_90bc2:
    X86_TICK(c, 18);
    // 090bc2  pop ebx
    X86_AT(c, 0x90bc2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090bc3  pop esi
    X86_AT(c, 0x90bc3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 090bc4  ret 
    X86_AT(c, 0x90bc4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90b86u, "ran off the end of a function");
}
void f_00090bd9(X86Cpu& c) {
    X86_TICK(c, 13);
    // 090bd9  push eax
    X86_AT(c, 0x90bd9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090bda  push ebx
    X86_AT(c, 0x90bdau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 090bdb  push edi
    X86_AT(c, 0x90bdbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 090bdc  cmp bl, 0xff
    X86_AT(c, 0x90bdcu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 090bdf  je 0x90c5e
    X86_AT(c, 0x90bdfu);
    if (x86_cc(c, 4)) { goto L_90c5e; }
    X86_TICK(c, 19);
    // 090be5  and ebx, 7
    X86_AT(c, 0x90be5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 090be8  shl ebx, 5
    X86_AT(c, 0x90be8u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 090beb  lea ebx, [ebx + 0x89915]
    X86_AT(c, 0x90bebu);
    c.r[3] = (uint32_t)(c.r[3] + 0x89915u);
    // 090bf1  cmp byte ptr [ebx + 0x18], 0
    X86_AT(c, 0x90bf1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x18u))), 0x0u, 0, 1);
    // 090bf5  je 0x90c69
    X86_AT(c, 0x90bf5u);
    if (x86_cc(c, 4)) { goto L_90c69; }
    X86_TICK(c, 7);
    // 090bfb  cmp al, 0x80
    X86_AT(c, 0x90bfbu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 090bfd  jb 0x90c13
    X86_AT(c, 0x90bfdu);
    if (x86_cc(c, 2)) { goto L_90c13; }
    X86_TICK(c, 7);
    // 090bff  cmp al, 0xf8
    X86_AT(c, 0x90bffu);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 090c01  jae 0x90c13
    X86_AT(c, 0x90c01u);
    if (x86_cc(c, 3)) { goto L_90c13; }
    X86_TICK(c, 7);
    // 090c03  cmp al, 0xf0
    X86_AT(c, 0x90c03u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 090c05  jae 0x90c10
    X86_AT(c, 0x90c05u);
    if (x86_cc(c, 3)) { goto L_90c10; }
    X86_TICK(c, 11);
    // 090c07  cmp al, byte ptr [ebx + 0x1b]
    X86_AT(c, 0x90c07u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu))), 0, 1);
    // 090c0a  je 0x90c63
    X86_AT(c, 0x90c0au);
    if (x86_cc(c, 4)) { goto L_90c63; }
L_90c10:
    X86_TICK(c, 2);
    // 090c10  mov byte ptr [ebx + 0x1b], al
    X86_AT(c, 0x90c10u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), g8(c, 0));
L_90c13:
    X86_TICK(c, 16);
    // 090c13  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0x90c13u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 090c16  cmp word ptr [ebx + 0x10], 0x10
    X86_AT(c, 0x90c16u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x10u, 0, 2);
    // 090c1b  je 0x90c13
    X86_AT(c, 0x90c1bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x90c13u); goto L_90c13; }
    X86_TICK(c, 24);
    // 090c1d  mov byte ptr [edi], al
    X86_AT(c, 0x90c1du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 090c1f  inc edi
    X86_AT(c, 0x90c1fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 090c20  pushf 
    X86_AT(c, 0x90c20u);
    push16(c, c.fl & 0xFFFFu);
    // 090c22  cli 
    X86_AT(c, 0x90c22u);
    c.fl &= ~X86_IF;
    // 090c23  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0x90c23u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 090c28  jne 0x90c45
    X86_AT(c, 0x90c28u);
    if (x86_cc(c, 5)) { goto L_90c45; }
    X86_TICK(c, 32);
    // 090c2e  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0x90c2eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 090c31  or al, byte ptr [0x898e5]
    X86_AT(c, 0x90c31u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(0x898E5u))), 1)); }
    // 090c37  mov byte ptr [0x898e5], al
    X86_AT(c, 0x90c37u);
    wr8((c.sbase[3] + (uint32_t)(0x898E5u)), g8(c, 0));
    // 090c3c  push dx
    X86_AT(c, 0x90c3cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 090c3e  mov dx, 0xe70
    X86_AT(c, 0x90c3eu);
    s16(c, 2, 0xE70u);
    // 090c42  out dx, al
    X86_AT(c, 0x90c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090c43  pop dx
    X86_AT(c, 0x90c43u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_90c45:
    X86_TICK(c, 23);
    // 090c45  inc word ptr [ebx + 0x10]
    X86_AT(c, 0x90c45u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 090c49  popf 
    X86_AT(c, 0x90c49u);
    x86_popfd(c, 2);
    // 090c4b  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x90c4bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 090c4e  jne 0x90c56
    X86_AT(c, 0x90c4eu);
    if (x86_cc(c, 5)) { goto L_90c56; }
    X86_TICK(c, 4);
    // 090c54  mov edi, dword ptr [ebx]
    X86_AT(c, 0x90c54u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_90c56:
    X86_TICK(c, 9);
    // 090c56  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0x90c56u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
    // 090c59  jmp 0x90c63
    X86_AT(c, 0x90c59u);
    goto L_90c63;
L_90c5e:
    X86_TICK(c, 7);
    // 090c5e  call 0x91654
    X86_AT(c, 0x90c5eu);
    push32(c, 0x90c63u); x86_call_known(c, 0x91654u, f_00091654); X86_RET(c, 0x90c63u);
L_90c63:
    X86_TICK(c, 24);
    // 090c63  pop edi
    X86_AT(c, 0x90c63u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 090c64  pop ebx
    X86_AT(c, 0x90c64u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090c65  pop eax
    X86_AT(c, 0x90c65u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 090c66  xor ah, ah
    X86_AT(c, 0x90c66u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 090c68  ret 
    X86_AT(c, 0x90c68u);
    c.eip = pop32(c); return;
L_90c69:
    X86_TICK(c, 24);
    // 090c69  pop edi
    X86_AT(c, 0x90c69u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 090c6a  pop ebx
    X86_AT(c, 0x90c6au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090c6b  pop eax
    X86_AT(c, 0x90c6bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 090c6c  mov ah, 0xf0
    X86_AT(c, 0x90c6cu);
    s8(c, 4, 0xF0u);
    // 090c6e  ret 
    X86_AT(c, 0x90c6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90bd9u, "ran off the end of a function");
}
void f_00090c6f(X86Cpu& c) {
    X86_TICK(c, 13);
    // 090c6f  push ebx
    X86_AT(c, 0x90c6fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 090c70  mov bl, byte ptr [0x896b2]
    X86_AT(c, 0x90c70u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0x896B2u))));
    // 090c76  cmp bl, 8
    X86_AT(c, 0x90c76u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 090c79  jae 0x90c80
    X86_AT(c, 0x90c79u);
    if (x86_cc(c, 3)) { goto L_90c80; }
    X86_TICK(c, 7);
    // 090c7b  call 0x90bd9
    X86_AT(c, 0x90c7bu);
    push32(c, 0x90c80u); x86_call_known(c, 0x90bd9u, f_00090bd9); X86_RET(c, 0x90c80u);
L_90c80:
    X86_TICK(c, 14);
    // 090c80  pop ebx
    X86_AT(c, 0x90c80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 090c81  ret 
    X86_AT(c, 0x90c81u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90c6fu, "ran off the end of a function");
}
void f_00090c82(X86Cpu& c) {
    X86_TICK(c, 49);
    // 090c82  pushfd 
    X86_AT(c, 0x90c82u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 090c83  cli 
    X86_AT(c, 0x90c83u);
    c.fl &= ~X86_IF;
    // 090c84  mov cl, 0x44
    X86_AT(c, 0x90c84u);
    s8(c, 1, 0x44u);
    // 090c86  mov ax, 0x2502
    X86_AT(c, 0x90c86u);
    s16(c, 0, 0x2502u);
    // 090c8a  int 0x21
    X86_AT(c, 0x90c8au);
    x86_int(c, 0x21, 0x90c8cu);
    X86_TICK(c, 5);
    // 090c8c  jb 0x90d0e
    X86_AT(c, 0x90c8cu);
    if (x86_cc(c, 2)) { goto L_90d0e; }
    X86_TICK(c, 9);
    // 090c92  lea edx, [0x911af]
    X86_AT(c, 0x90c92u);
    c.r[2] = (uint32_t)(0x911AFu);
    // 090c98  cmp ebx, edx
    X86_AT(c, 0x90c98u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 090c9a  je 0x90d0e
    X86_AT(c, 0x90c9au);
    if (x86_cc(c, 4)) { goto L_90d0e; }
    X86_TICK(c, 47);
    // 090ca0  mov eax, es
    X86_AT(c, 0x90ca0u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 090ca2  mov dword ptr [0x898ea], ebx
    X86_AT(c, 0x90ca2u);
    wr32((c.sbase[3] + (uint32_t)(0x898EAu)), c.r[3]);
    // 090ca8  mov word ptr [0x898ee], ax
    X86_AT(c, 0x90ca8u);
    wr16((c.sbase[3] + (uint32_t)(0x898EEu)), (c.r[0] & 0xFFFFu));
    // 090cae  mov cl, 0x44
    X86_AT(c, 0x90caeu);
    s8(c, 1, 0x44u);
    // 090cb0  mov ax, 0x2503
    X86_AT(c, 0x90cb0u);
    s16(c, 0, 0x2503u);
    // 090cb4  int 0x21
    X86_AT(c, 0x90cb4u);
    x86_int(c, 0x21, 0x90cb6u);
    X86_TICK(c, 5);
    // 090cb6  jb 0x90d0e
    X86_AT(c, 0x90cb6u);
    if (x86_cc(c, 2)) { goto L_90d0e; }
    X86_TICK(c, 51);
    // 090cbc  mov dword ptr [0x898f0], ebx
    X86_AT(c, 0x90cbcu);
    wr32((c.sbase[3] + (uint32_t)(0x898F0u)), c.r[3]);
    // 090cc2  push ds
    X86_AT(c, 0x90cc2u);
    push32(c, c.sreg[3]);
    // 090cc3  mov eax, cs
    X86_AT(c, 0x90cc3u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 090cc5  mov ds, eax
    X86_AT(c, 0x90cc5u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 090cc7  mov cl, 0x44
    X86_AT(c, 0x90cc7u);
    s8(c, 1, 0x44u);
    // 090cc9  lea edx, [0x911af]
    X86_AT(c, 0x90cc9u);
    c.r[2] = (uint32_t)(0x911AFu);
    // 090ccf  mov ax, 0x2506
    X86_AT(c, 0x90ccfu);
    s16(c, 0, 0x2506u);
    // 090cd3  int 0x21
    X86_AT(c, 0x90cd3u);
    x86_int(c, 0x21, 0x90cd5u);
    X86_TICK(c, 9);
    // 090cd5  pop ds
    X86_AT(c, 0x90cd5u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 090cd6  jb 0x90d0e
    X86_AT(c, 0x90cd6u);
    if (x86_cc(c, 2)) { goto L_90d0e; }
    X86_TICK(c, 57);
    // 090cdc  xor al, al
    X86_AT(c, 0x90cdcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 090cde  mov byte ptr [0x898e5], al
    X86_AT(c, 0x90cdeu);
    wr8((c.sbase[3] + (uint32_t)(0x898E5u)), g8(c, 0));
    // 090ce3  mov dx, 0xe70
    X86_AT(c, 0x90ce3u);
    s16(c, 2, 0xE70u);
    // 090ce7  out dx, al
    X86_AT(c, 0x90ce7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090ce8  mov al, 0xff
    X86_AT(c, 0x90ce8u);
    s8(c, 0, 0xFFu);
    // 090cea  mov byte ptr [0x898e7], al
    X86_AT(c, 0x90ceau);
    wr8((c.sbase[3] + (uint32_t)(0x898E7u)), g8(c, 0));
    // 090cef  mov dx, 0xe71
    X86_AT(c, 0x90cefu);
    s16(c, 2, 0xE71u);
    // 090cf3  out dx, al
    X86_AT(c, 0x90cf3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090cf4  mov byte ptr [0x898e8], 0
    X86_AT(c, 0x90cf4u);
    wr8((c.sbase[3] + (uint32_t)(0x898E8u)), 0x0u);
    // 090cfb  in al, 2
    X86_AT(c, 0x90cfbu);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 090cfd  jmp 0x90cff
    X86_AT(c, 0x90cfdu);
    goto L_90cff;
L_90cff:
    X86_TICK(c, 7);
    // 090cff  jmp 0x90d01
    X86_AT(c, 0x90cffu);
    goto L_90d01;
L_90d01:
    X86_TICK(c, 7);
    // 090d01  jmp 0x90d03
    X86_AT(c, 0x90d01u);
    goto L_90d03;
L_90d03:
    X86_TICK(c, 36);
    // 090d03  mov dl, 0x10
    X86_AT(c, 0x90d03u);
    s8(c, 2, 0x10u);
    // 090d05  not dl
    X86_AT(c, 0x90d05u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 090d07  and al, dl
    X86_AT(c, 0x90d07u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 090d09  out 2, al
    X86_AT(c, 0x90d09u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 090d0b  popfd 
    X86_AT(c, 0x90d0bu);
    x86_popfd(c, 4);
    // 090d0c  clc 
    X86_AT(c, 0x90d0cu);
    c.fl &= ~X86_CF;
    // 090d0d  ret 
    X86_AT(c, 0x90d0du);
    c.eip = pop32(c); return;
L_90d0e:
    X86_TICK(c, 18);
    // 090d0e  popf 
    X86_AT(c, 0x90d0eu);
    x86_popfd(c, 2);
    // 090d10  stc 
    X86_AT(c, 0x90d10u);
    c.fl |= X86_CF;
    // 090d11  ret 
    X86_AT(c, 0x90d11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90c82u, "ran off the end of a function");
}
void f_00090d12(X86Cpu& c) {
    X86_TICK(c, 49);
    // 090d12  pushfd 
    X86_AT(c, 0x90d12u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 090d13  cli 
    X86_AT(c, 0x90d13u);
    c.fl &= ~X86_IF;
    // 090d14  mov cl, 0x45
    X86_AT(c, 0x90d14u);
    s8(c, 1, 0x45u);
    // 090d16  mov ax, 0x2502
    X86_AT(c, 0x90d16u);
    s16(c, 0, 0x2502u);
    // 090d1a  int 0x21
    X86_AT(c, 0x90d1au);
    x86_int(c, 0x21, 0x90d1cu);
    X86_TICK(c, 5);
    // 090d1c  jb 0x90d8b
    X86_AT(c, 0x90d1cu);
    if (x86_cc(c, 2)) { goto L_90d8b; }
    X86_TICK(c, 9);
    // 090d22  lea edx, [0x9122a]
    X86_AT(c, 0x90d22u);
    c.r[2] = (uint32_t)(0x9122Au);
    // 090d28  cmp ebx, edx
    X86_AT(c, 0x90d28u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 090d2a  je 0x90d8b
    X86_AT(c, 0x90d2au);
    if (x86_cc(c, 4)) { goto L_90d8b; }
    X86_TICK(c, 47);
    // 090d30  mov eax, es
    X86_AT(c, 0x90d30u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 090d32  mov dword ptr [0x898f4], ebx
    X86_AT(c, 0x90d32u);
    wr32((c.sbase[3] + (uint32_t)(0x898F4u)), c.r[3]);
    // 090d38  mov word ptr [0x898f8], ax
    X86_AT(c, 0x90d38u);
    wr16((c.sbase[3] + (uint32_t)(0x898F8u)), (c.r[0] & 0xFFFFu));
    // 090d3e  mov cl, 0x45
    X86_AT(c, 0x90d3eu);
    s8(c, 1, 0x45u);
    // 090d40  mov ax, 0x2503
    X86_AT(c, 0x90d40u);
    s16(c, 0, 0x2503u);
    // 090d44  int 0x21
    X86_AT(c, 0x90d44u);
    x86_int(c, 0x21, 0x90d46u);
    X86_TICK(c, 5);
    // 090d46  jb 0x90d8b
    X86_AT(c, 0x90d46u);
    if (x86_cc(c, 2)) { goto L_90d8b; }
    X86_TICK(c, 51);
    // 090d4c  mov dword ptr [0x898f0], ebx
    X86_AT(c, 0x90d4cu);
    wr32((c.sbase[3] + (uint32_t)(0x898F0u)), c.r[3]);
    // 090d52  push ds
    X86_AT(c, 0x90d52u);
    push32(c, c.sreg[3]);
    // 090d53  mov eax, cs
    X86_AT(c, 0x90d53u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 090d55  mov ds, eax
    X86_AT(c, 0x90d55u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 090d57  lea edx, [0x9122a]
    X86_AT(c, 0x90d57u);
    c.r[2] = (uint32_t)(0x9122Au);
    // 090d5d  mov cl, 0x45
    X86_AT(c, 0x90d5du);
    s8(c, 1, 0x45u);
    // 090d5f  mov ax, 0x2506
    X86_AT(c, 0x90d5fu);
    s16(c, 0, 0x2506u);
    // 090d63  int 0x21
    X86_AT(c, 0x90d63u);
    x86_int(c, 0x21, 0x90d65u);
    X86_TICK(c, 9);
    // 090d65  pop ds
    X86_AT(c, 0x90d65u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 090d66  jb 0x90d8b
    X86_AT(c, 0x90d66u);
    if (x86_cc(c, 2)) { goto L_90d8b; }
    X86_TICK(c, 37);
    // 090d6c  xor al, al
    X86_AT(c, 0x90d6cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 090d6e  mov byte ptr [0x898e6], al
    X86_AT(c, 0x90d6eu);
    wr8((c.sbase[3] + (uint32_t)(0x898E6u)), g8(c, 0));
    // 090d73  mov dx, 0xe73
    X86_AT(c, 0x90d73u);
    s16(c, 2, 0xE73u);
    // 090d77  out dx, al
    X86_AT(c, 0x90d77u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090d78  in al, 2
    X86_AT(c, 0x90d78u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 090d7a  jmp 0x90d7c
    X86_AT(c, 0x90d7au);
    goto L_90d7c;
L_90d7c:
    X86_TICK(c, 7);
    // 090d7c  jmp 0x90d7e
    X86_AT(c, 0x90d7cu);
    goto L_90d7e;
L_90d7e:
    X86_TICK(c, 7);
    // 090d7e  jmp 0x90d80
    X86_AT(c, 0x90d7eu);
    goto L_90d80;
L_90d80:
    X86_TICK(c, 36);
    // 090d80  mov dl, 0x20
    X86_AT(c, 0x90d80u);
    s8(c, 2, 0x20u);
    // 090d82  not dl
    X86_AT(c, 0x90d82u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 090d84  and al, dl
    X86_AT(c, 0x90d84u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 090d86  out 2, al
    X86_AT(c, 0x90d86u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 090d88  popfd 
    X86_AT(c, 0x90d88u);
    x86_popfd(c, 4);
    // 090d89  clc 
    X86_AT(c, 0x90d89u);
    c.fl &= ~X86_CF;
    // 090d8a  ret 
    X86_AT(c, 0x90d8au);
    c.eip = pop32(c); return;
L_90d8b:
    X86_TICK(c, 18);
    // 090d8b  popfd 
    X86_AT(c, 0x90d8bu);
    x86_popfd(c, 4);
    // 090d8c  stc 
    X86_AT(c, 0x90d8cu);
    c.fl |= X86_CF;
    // 090d8d  ret 
    X86_AT(c, 0x90d8du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90d12u, "ran off the end of a function");
}
void f_00090d8e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 090d8e  pushfd 
    X86_AT(c, 0x90d8eu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 090d8f  cli 
    X86_AT(c, 0x90d8fu);
    c.fl &= ~X86_IF;
    // 090d90  call 0x8f4e8
    X86_AT(c, 0x90d90u);
    push32(c, 0x90d95u); x86_call_known(c, 0x8f4e8u, f_0008f4e8); X86_RET(c, 0x90d95u);
    X86_TICK(c, 9);
    // 090d95  mov dword ptr [0x898fe], eax
    X86_AT(c, 0x90d95u);
    wr32((c.sbase[3] + (uint32_t)(0x898FEu)), c.r[0]);
    // 090d9a  call 0x8f504
    X86_AT(c, 0x90d9au);
    push32(c, 0x90d9fu); x86_call_known(c, 0x8f504u, f_0008f504); X86_RET(c, 0x90d9fu);
    X86_TICK(c, 13);
    // 090d9f  mov dword ptr [0x89902], eax
    X86_AT(c, 0x90d9fu);
    wr32((c.sbase[3] + (uint32_t)(0x89902u)), c.r[0]);
    // 090da4  lea eax, [0x913a2]
    X86_AT(c, 0x90da4u);
    c.r[0] = (uint32_t)(0x913A2u);
    // 090daa  push eax
    X86_AT(c, 0x90daau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090dab  call 0x8f4c8
    X86_AT(c, 0x90dabu);
    push32(c, 0x90db0u); x86_call_known(c, 0x8f4c8u, f_0008f4c8); X86_RET(c, 0x90db0u);
    X86_TICK(c, 13);
    // 090db0  add esp, 4
    X86_AT(c, 0x90db0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 090db3  lea eax, [0x914c0]
    X86_AT(c, 0x90db3u);
    c.r[0] = (uint32_t)(0x914C0u);
    // 090db9  push eax
    X86_AT(c, 0x90db9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090dba  call 0x8f4f4
    X86_AT(c, 0x90dbau);
    push32(c, 0x90dbfu); x86_call_known(c, 0x8f4f4u, f_0008f4f4); X86_RET(c, 0x90dbfu);
    X86_TICK(c, 20);
    // 090dbf  add esp, 4
    X86_AT(c, 0x90dbfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 090dc2  popfd 
    X86_AT(c, 0x90dc2u);
    x86_popfd(c, 4);
    // 090dc3  clc 
    X86_AT(c, 0x90dc3u);
    c.fl &= ~X86_CF;
    // 090dc4  ret 
    X86_AT(c, 0x90dc4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90d8eu, "ran off the end of a function");
}
void f_00090dc8(X86Cpu& c) {
    X86_TICK(c, 59);
    // 090dc8  pushfd 
    X86_AT(c, 0x90dc8u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 090dc9  cli 
    X86_AT(c, 0x90dc9u);
    c.fl &= ~X86_IF;
    // 090dca  mov dx, 0xe70
    X86_AT(c, 0x90dcau);
    s16(c, 2, 0xE70u);
    // 090dce  mov al, 0
    X86_AT(c, 0x90dceu);
    s8(c, 0, 0x0u);
    // 090dd0  out dx, al
    X86_AT(c, 0x90dd0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090dd1  mov dx, 0xe71
    X86_AT(c, 0x90dd1u);
    s16(c, 2, 0xE71u);
    // 090dd5  mov al, 0
    X86_AT(c, 0x90dd5u);
    s8(c, 0, 0x0u);
    // 090dd7  out dx, al
    X86_AT(c, 0x90dd7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090dd8  in al, 2
    X86_AT(c, 0x90dd8u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 090dda  jmp 0x90ddc
    X86_AT(c, 0x90ddau);
    goto L_90ddc;
L_90ddc:
    X86_TICK(c, 7);
    // 090ddc  jmp 0x90dde
    X86_AT(c, 0x90ddcu);
    goto L_90dde;
L_90dde:
    X86_TICK(c, 7);
    // 090dde  jmp 0x90de0
    X86_AT(c, 0x90ddeu);
    goto L_90de0;
L_90de0:
    X86_TICK(c, 71);
    // 090de0  or al, 0x10
    X86_AT(c, 0x90de0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 090de2  out 2, al
    X86_AT(c, 0x90de2u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 090de4  push ds
    X86_AT(c, 0x90de4u);
    push32(c, c.sreg[3]);
    // 090de5  mov cl, 0x44
    X86_AT(c, 0x90de5u);
    s8(c, 1, 0x44u);
    // 090de7  mov edx, dword ptr [0x898ea]
    X86_AT(c, 0x90de7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x898EAu)));
    // 090ded  mov ax, word ptr [0x898ee]
    X86_AT(c, 0x90dedu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x898EEu))));
    // 090df3  mov ebx, dword ptr [0x898f0]
    X86_AT(c, 0x90df3u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x898F0u)));
    // 090df9  mov ds, eax
    X86_AT(c, 0x90df9u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 090dfb  mov ax, 0x2507
    X86_AT(c, 0x90dfbu);
    s16(c, 0, 0x2507u);
    // 090dff  int 0x21
    X86_AT(c, 0x90dffu);
    x86_int(c, 0x21, 0x90e01u);
    X86_TICK(c, 20);
    // 090e01  pop ds
    X86_AT(c, 0x90e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 090e02  popfd 
    X86_AT(c, 0x90e02u);
    x86_popfd(c, 4);
    // 090e03  ret 
    X86_AT(c, 0x90e03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90dc8u, "ran off the end of a function");
}
void f_00090e04(X86Cpu& c) {
    X86_TICK(c, 49);
    // 090e04  pushfd 
    X86_AT(c, 0x90e04u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 090e05  cli 
    X86_AT(c, 0x90e05u);
    c.fl &= ~X86_IF;
    // 090e06  mov al, byte ptr [0x898e6]
    X86_AT(c, 0x90e06u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x898E6u))));
    // 090e0b  and al, 0xfc
    X86_AT(c, 0x90e0bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 090e0d  mov dx, 0xe73
    X86_AT(c, 0x90e0du);
    s16(c, 2, 0xE73u);
    // 090e11  out dx, al
    X86_AT(c, 0x90e11u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 090e12  mov byte ptr [0x898e6], al
    X86_AT(c, 0x90e12u);
    wr8((c.sbase[3] + (uint32_t)(0x898E6u)), g8(c, 0));
    // 090e17  in al, 2
    X86_AT(c, 0x90e17u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 090e19  jmp 0x90e1b
    X86_AT(c, 0x90e19u);
    goto L_90e1b;
L_90e1b:
    X86_TICK(c, 7);
    // 090e1b  jmp 0x90e1d
    X86_AT(c, 0x90e1bu);
    goto L_90e1d;
L_90e1d:
    X86_TICK(c, 7);
    // 090e1d  jmp 0x90e1f
    X86_AT(c, 0x90e1du);
    goto L_90e1f;
L_90e1f:
    X86_TICK(c, 71);
    // 090e1f  or al, 0x20
    X86_AT(c, 0x90e1fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 090e21  out 2, al
    X86_AT(c, 0x90e21u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 090e23  push ds
    X86_AT(c, 0x90e23u);
    push32(c, c.sreg[3]);
    // 090e24  mov cl, 0x45
    X86_AT(c, 0x90e24u);
    s8(c, 1, 0x45u);
    // 090e26  mov edx, dword ptr [0x898f4]
    X86_AT(c, 0x90e26u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x898F4u)));
    // 090e2c  mov ax, word ptr [0x898f8]
    X86_AT(c, 0x90e2cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x898F8u))));
    // 090e32  mov ebx, dword ptr [0x898fa]
    X86_AT(c, 0x90e32u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x898FAu)));
    // 090e38  mov ds, eax
    X86_AT(c, 0x90e38u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 090e3a  mov ax, 0x2507
    X86_AT(c, 0x90e3au);
    s16(c, 0, 0x2507u);
    // 090e3e  int 0x21
    X86_AT(c, 0x90e3eu);
    x86_int(c, 0x21, 0x90e40u);
    X86_TICK(c, 20);
    // 090e40  pop ds
    X86_AT(c, 0x90e40u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 090e41  popfd 
    X86_AT(c, 0x90e41u);
    x86_popfd(c, 4);
    // 090e42  ret 
    X86_AT(c, 0x90e42u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90e04u, "ran off the end of a function");
}
}

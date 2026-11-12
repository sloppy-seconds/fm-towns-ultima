#include "p_game_funcs.h"
namespace p_game {
void f_00050158(X86Cpu& c) {
    X86_TICK(c, 7);
    // 050158  call 0x4fe3c
    X86_AT(c, 0x50158u);
    push32(c, 0x5015du); x86_call_known(c, 0x4fe3cu, f_0004fe3c); X86_RET(c, 0x5015du);
    X86_TICK(c, 9);
    // 05015d  push 1
    X86_AT(c, 0x5015du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 05015f  call 0x4d3b8
    X86_AT(c, 0x5015fu);
    push32(c, 0x50164u); x86_call_known(c, 0x4d3b8u, f_0004d3b8); X86_RET(c, 0x50164u);
    X86_TICK(c, 9);
    // 050164  push 0
    X86_AT(c, 0x50164u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050166  call 0x4d758
    X86_AT(c, 0x50166u);
    push32(c, 0x5016bu); x86_call_known(c, 0x4d758u, f_0004d758); X86_RET(c, 0x5016bu);
    X86_TICK(c, 9);
    // 05016b  push 0
    X86_AT(c, 0x5016bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 05016d  call 0x4d3b8
    X86_AT(c, 0x5016du);
    push32(c, 0x50172u); x86_call_known(c, 0x4d3b8u, f_0004d3b8); X86_RET(c, 0x50172u);
    X86_TICK(c, 9);
    // 050172  push 0
    X86_AT(c, 0x50172u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050174  call 0x4d758
    X86_AT(c, 0x50174u);
    push32(c, 0x50179u); x86_call_known(c, 0x4d758u, f_0004d758); X86_RET(c, 0x50179u);
    X86_TICK(c, 7);
    // 050179  call 0x4fe20
    X86_AT(c, 0x50179u);
    push32(c, 0x5017eu); x86_call_known(c, 0x4fe20u, f_0004fe20); X86_RET(c, 0x5017eu);
    X86_TICK(c, 9);
    // 05017e  push 0
    X86_AT(c, 0x5017eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050180  call 0x54058
    X86_AT(c, 0x50180u);
    push32(c, 0x50185u); x86_call_known(c, 0x54058u, f_00054058); X86_RET(c, 0x50185u);
    X86_TICK(c, 12);
    // 050185  add esp, 0x14
    X86_AT(c, 0x50185u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 050188  ret 
    X86_AT(c, 0x50188u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50158u, "ran off the end of a function");
}
void f_000501cf(X86Cpu& c) {
    X86_TICK(c, 51);
    // 0501cf  enter 0, 0
    X86_AT(c, 0x501cfu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0501d3  pushal 
    X86_AT(c, 0x501d3u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0501d4  pushfd 
    X86_AT(c, 0x501d4u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0501d5  cli 
    X86_AT(c, 0x501d5u);
    c.fl &= ~X86_IF;
    // 0501d6  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x501d6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0501d9  mov dword ptr [0x4a288], eax
    X86_AT(c, 0x501d9u);
    wr32((c.sbase[3] + (uint32_t)(0x4A288u)), c.r[0]);
    // 0501de  mov word ptr [0x4a28c], ds
    X86_AT(c, 0x501deu);
    wr16((c.sbase[3] + (uint32_t)(0x4A28Cu)), (uint32_t)c.sreg[3]);
    // 0501e4  mov bl, 0
    X86_AT(c, 0x501e4u);
    s8(c, 3, 0x0u);
    // 0501e6  xor ah, ah
    X86_AT(c, 0x501e6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0501e8  call 0x507d8
    X86_AT(c, 0x501e8u);
    push32(c, 0x501edu); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x501edu);
    X86_TICK(c, 7);
    // 0501ed  and al, al
    X86_AT(c, 0x501edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0501ef  jne 0x5022d
    X86_AT(c, 0x501efu);
    if (x86_cc(c, 5)) { goto L_5022d; }
    X86_TICK(c, 7);
    // 0501f5  call 0x50584
    X86_AT(c, 0x501f5u);
    push32(c, 0x501fau); x86_call_known(c, 0x50584u, f_00050584); X86_RET(c, 0x501fau);
    X86_TICK(c, 7);
    // 0501fa  and al, al
    X86_AT(c, 0x501fau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0501fc  jne 0x5022d
    X86_AT(c, 0x501fcu);
    if (x86_cc(c, 5)) { goto L_5022d; }
    X86_TICK(c, 13);
    // 050202  mov bl, 0xff
    X86_AT(c, 0x50202u);
    s8(c, 3, 0xFFu);
    // 050204  mov ecx, 1
    X86_AT(c, 0x50204u);
    c.r[1] = 0x1u;
    // 050209  mov ah, 0x15
    X86_AT(c, 0x50209u);
    s8(c, 4, 0x15u);
    // 05020b  call 0x507d8
    X86_AT(c, 0x5020bu);
    push32(c, 0x50210u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x50210u);
    X86_TICK(c, 11);
    // 050210  mov bl, 0
    X86_AT(c, 0x50210u);
    s8(c, 3, 0x0u);
    // 050212  mov ah, 0x15
    X86_AT(c, 0x50212u);
    s8(c, 4, 0x15u);
    // 050214  call 0x507d8
    X86_AT(c, 0x50214u);
    push32(c, 0x50219u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x50219u);
    X86_TICK(c, 13);
    // 050219  mov bl, 0xff
    X86_AT(c, 0x50219u);
    s8(c, 3, 0xFFu);
    // 05021b  mov ecx, 0xdd
    X86_AT(c, 0x5021bu);
    c.r[1] = 0xDDu;
    // 050220  mov ah, 0x16
    X86_AT(c, 0x50220u);
    s8(c, 4, 0x16u);
    // 050222  call 0x507d8
    X86_AT(c, 0x50222u);
    push32(c, 0x50227u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x50227u);
    X86_TICK(c, 48);
    // 050227  popfd 
    X86_AT(c, 0x50227u);
    x86_popfd(c, 4);
    // 050228  popal 
    X86_AT(c, 0x50228u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 050229  leave 
    X86_AT(c, 0x50229u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05022a  xor eax, eax
    X86_AT(c, 0x5022au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 05022c  ret 
    X86_AT(c, 0x5022cu);
    c.eip = pop32(c); return;
L_5022d:
    X86_TICK(c, 48);
    // 05022d  popfd 
    X86_AT(c, 0x5022du);
    x86_popfd(c, 4);
    // 05022e  popal 
    X86_AT(c, 0x5022eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 05022f  leave 
    X86_AT(c, 0x5022fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 050230  mov eax, 1
    X86_AT(c, 0x50230u);
    c.r[0] = 0x1u;
    // 050235  ret 
    X86_AT(c, 0x50235u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x501cfu, "ran off the end of a function");
}
void f_00050236(X86Cpu& c) {
    X86_TICK(c, 19);
    // 050236  enter 0, 0
    X86_AT(c, 0x50236u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 05023a  push ebx
    X86_AT(c, 0x5023au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05023b  mov bl, 0
    X86_AT(c, 0x5023bu);
    s8(c, 3, 0x0u);
    // 05023d  xor ah, ah
    X86_AT(c, 0x5023du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 05023f  call 0x507d8
    X86_AT(c, 0x5023fu);
    push32(c, 0x50244u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x50244u);
    X86_TICK(c, 13);
    // 050244  xor bh, bh
    X86_AT(c, 0x50244u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 050246  mov dx, 0x2c00
    X86_AT(c, 0x50246u);
    s16(c, 2, 0x2C00u);
    // 05024a  mov ah, 0x11
    X86_AT(c, 0x5024au);
    s8(c, 4, 0x11u);
    // 05024c  call 0x507d8
    X86_AT(c, 0x5024cu);
    push32(c, 0x50251u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x50251u);
    X86_TICK(c, 7);
    // 050251  call 0x5063e
    X86_AT(c, 0x50251u);
    push32(c, 0x50256u); x86_call_known(c, 0x5063eu, f_0005063e); X86_RET(c, 0x50256u);
    X86_TICK(c, 22);
    // 050256  xor eax, eax
    X86_AT(c, 0x50256u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 050258  pop ebx
    X86_AT(c, 0x50258u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 050259  leave 
    X86_AT(c, 0x50259u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05025a  ret 
    X86_AT(c, 0x5025au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50236u, "ran off the end of a function");
}
void f_000502a7(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0502a7  enter 0, 0
    X86_AT(c, 0x502a7u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0502ab  push ebx
    X86_AT(c, 0x502abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0502ac  push edx
    X86_AT(c, 0x502acu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0502ad  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x502adu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0502b0  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0x502b0u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0502b3  mov ah, 4
    X86_AT(c, 0x502b3u);
    s8(c, 4, 0x4u);
    // 0502b5  call 0x507d8
    X86_AT(c, 0x502b5u);
    push32(c, 0x502bau); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x502bau);
    X86_TICK(c, 27);
    // 0502ba  movzx eax, al
    X86_AT(c, 0x502bau);
    c.r[0] = g8(c, 0);
    // 0502bd  pop edx
    X86_AT(c, 0x502bdu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0502be  pop ebx
    X86_AT(c, 0x502beu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0502bf  leave 
    X86_AT(c, 0x502bfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0502c0  ret 
    X86_AT(c, 0x502c0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x502a7u, "ran off the end of a function");
}
void f_000502c1(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0502c1  enter 0, 0
    X86_AT(c, 0x502c1u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0502c5  push ebx
    X86_AT(c, 0x502c5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0502c6  push edx
    X86_AT(c, 0x502c6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0502c7  push esi
    X86_AT(c, 0x502c7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0502c8  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x502c8u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0502cb  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0x502cbu);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0502ce  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x502ceu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0502d1  mov ah, 5
    X86_AT(c, 0x502d1u);
    s8(c, 4, 0x5u);
    // 0502d3  call 0x507d8
    X86_AT(c, 0x502d3u);
    push32(c, 0x502d8u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x502d8u);
    X86_TICK(c, 31);
    // 0502d8  movzx eax, al
    X86_AT(c, 0x502d8u);
    c.r[0] = g8(c, 0);
    // 0502db  pop esi
    X86_AT(c, 0x502dbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0502dc  pop edx
    X86_AT(c, 0x502dcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0502dd  pop ebx
    X86_AT(c, 0x502ddu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0502de  leave 
    X86_AT(c, 0x502deu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0502df  ret 
    X86_AT(c, 0x502dfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x502c1u, "ran off the end of a function");
}
void f_000503b1(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0503b1  enter 0, 0
    X86_AT(c, 0x503b1u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0503b5  push ebx
    X86_AT(c, 0x503b5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0503b6  push ecx
    X86_AT(c, 0x503b6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0503b7  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x503b7u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0503ba  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x503bau);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0503bd  mov ah, 0x15
    X86_AT(c, 0x503bdu);
    s8(c, 4, 0x15u);
    // 0503bf  call 0x507d8
    X86_AT(c, 0x503bfu);
    push32(c, 0x503c4u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x503c4u);
    X86_TICK(c, 27);
    // 0503c4  movzx eax, al
    X86_AT(c, 0x503c4u);
    c.r[0] = g8(c, 0);
    // 0503c7  pop ecx
    X86_AT(c, 0x503c7u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0503c8  pop ebx
    X86_AT(c, 0x503c8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0503c9  leave 
    X86_AT(c, 0x503c9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0503ca  ret 
    X86_AT(c, 0x503cau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x503b1u, "ran off the end of a function");
}
void f_0005042f(X86Cpu& c) {
    X86_TICK(c, 21);
    // 05042f  enter 0, 0
    X86_AT(c, 0x5042fu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 050433  push ebx
    X86_AT(c, 0x50433u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 050434  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x50434u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 050437  mov ah, 0x21
    X86_AT(c, 0x50437u);
    s8(c, 4, 0x21u);
    // 050439  call 0x507d8
    X86_AT(c, 0x50439u);
    push32(c, 0x5043eu); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x5043eu);
    X86_TICK(c, 23);
    // 05043e  movzx eax, al
    X86_AT(c, 0x5043eu);
    c.r[0] = g8(c, 0);
    // 050441  pop ebx
    X86_AT(c, 0x50441u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 050442  leave 
    X86_AT(c, 0x50442u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 050443  ret 
    X86_AT(c, 0x50443u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5042fu, "ran off the end of a function");
}
void f_00050459(X86Cpu& c) {
    X86_TICK(c, 21);
    // 050459  enter 0, 0
    X86_AT(c, 0x50459u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 05045d  push edx
    X86_AT(c, 0x5045du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 05045e  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x5045eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 050461  mov ah, 0x23
    X86_AT(c, 0x50461u);
    s8(c, 4, 0x23u);
    // 050463  call 0x507d8
    X86_AT(c, 0x50463u);
    push32(c, 0x50468u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x50468u);
    X86_TICK(c, 23);
    // 050468  movzx eax, al
    X86_AT(c, 0x50468u);
    c.r[0] = g8(c, 0);
    // 05046b  pop edx
    X86_AT(c, 0x5046bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 05046c  leave 
    X86_AT(c, 0x5046cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05046d  ret 
    X86_AT(c, 0x5046du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50459u, "ran off the end of a function");
}
void f_0005052c(X86Cpu& c) {
    X86_TICK(c, 30);
    // 05052c  enter 0, 0
    X86_AT(c, 0x5052cu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 050530  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x50530u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 050533  mov dword ptr [0x4a298], eax
    X86_AT(c, 0x50533u);
    wr32((c.sbase[3] + (uint32_t)(0x4A298u)), c.r[0]);
    // 050538  xor eax, eax
    X86_AT(c, 0x50538u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 05053a  leave 
    X86_AT(c, 0x5053au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05053b  ret 
    X86_AT(c, 0x5053bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5052cu, "ran off the end of a function");
}
void f_0005054c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 05054c  mov eax, dword ptr [0x4a298]
    X86_AT(c, 0x5054cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4A298u)));
    // 050551  ret 
    X86_AT(c, 0x50551u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5054cu, "ran off the end of a function");
}
void f_00050558(X86Cpu& c) {
    X86_TICK(c, 30);
    // 050558  enter 0, 0
    X86_AT(c, 0x50558u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 05055c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x5055cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 05055f  mov dword ptr [0x4a2a0], eax
    X86_AT(c, 0x5055fu);
    wr32((c.sbase[3] + (uint32_t)(0x4A2A0u)), c.r[0]);
    // 050564  xor eax, eax
    X86_AT(c, 0x50564u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 050566  leave 
    X86_AT(c, 0x50566u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 050567  ret 
    X86_AT(c, 0x50567u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50558u, "ran off the end of a function");
}
void f_00050568(X86Cpu& c) {
    X86_TICK(c, 14);
    // 050568  mov eax, dword ptr [0x4a2a0]
    X86_AT(c, 0x50568u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4A2A0u)));
    // 05056d  ret 
    X86_AT(c, 0x5056du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50568u, "ran off the end of a function");
}
void f_00050584(X86Cpu& c) {
    X86_TICK(c, 87);
    // 050584  push es
    X86_AT(c, 0x50584u);
    push32(c, c.sreg[0]);
    // 050585  pushal 
    X86_AT(c, 0x50585u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 050586  pushfd 
    X86_AT(c, 0x50586u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 050587  cli 
    X86_AT(c, 0x50587u);
    c.fl &= ~X86_IF;
    // 050588  mov word ptr [0x4a2ab], 0
    X86_AT(c, 0x50588u);
    wr16((c.sbase[3] + (uint32_t)(0x4A2ABu)), 0x0u);
    // 050591  mov byte ptr [0x4a2aa], 0
    X86_AT(c, 0x50591u);
    wr8((c.sbase[3] + (uint32_t)(0x4A2AAu)), 0x0u);
    // 050598  mov byte ptr [0x4a2a9], 0
    X86_AT(c, 0x50598u);
    wr8((c.sbase[3] + (uint32_t)(0x4A2A9u)), 0x0u);
    // 05059f  lea eax, [0x507fb]
    X86_AT(c, 0x5059fu);
    c.r[0] = (uint32_t)(0x507FBu);
    // 0505a5  mov dword ptr [0x4a298], eax
    X86_AT(c, 0x505a5u);
    wr32((c.sbase[3] + (uint32_t)(0x4A298u)), c.r[0]);
    // 0505aa  mov dword ptr [0x4a2a0], eax
    X86_AT(c, 0x505aau);
    wr32((c.sbase[3] + (uint32_t)(0x4A2A0u)), c.r[0]);
    // 0505af  mov dword ptr [0x4a29c], eax
    X86_AT(c, 0x505afu);
    wr32((c.sbase[3] + (uint32_t)(0x4A29Cu)), c.r[0]);
    // 0505b4  mov dword ptr [0x4a2a4], eax
    X86_AT(c, 0x505b4u);
    wr32((c.sbase[3] + (uint32_t)(0x4A2A4u)), c.r[0]);
    // 0505b9  mov byte ptr [0x4a2a8], 0
    X86_AT(c, 0x505b9u);
    wr8((c.sbase[3] + (uint32_t)(0x4A2A8u)), 0x0u);
    // 0505c0  mov cl, 0x4d
    X86_AT(c, 0x505c0u);
    s8(c, 1, 0x4Du);
    // 0505c2  mov ax, 0x2502
    X86_AT(c, 0x505c2u);
    s16(c, 0, 0x2502u);
    // 0505c6  int 0x21
    X86_AT(c, 0x505c6u);
    x86_int(c, 0x21, 0x505c8u);
    X86_TICK(c, 5);
    // 0505c8  jb 0x50634
    X86_AT(c, 0x505c8u);
    if (x86_cc(c, 2)) { goto L_50634; }
    X86_TICK(c, 47);
    // 0505ce  mov eax, es
    X86_AT(c, 0x505ceu);
    c.r[0] = (uint32_t)c.sreg[0];
    // 0505d0  mov dword ptr [0x4a28e], ebx
    X86_AT(c, 0x505d0u);
    wr32((c.sbase[3] + (uint32_t)(0x4A28Eu)), c.r[3]);
    // 0505d6  mov word ptr [0x4a292], ax
    X86_AT(c, 0x505d6u);
    wr16((c.sbase[3] + (uint32_t)(0x4A292u)), (c.r[0] & 0xFFFFu));
    // 0505dc  mov cl, 0x4d
    X86_AT(c, 0x505dcu);
    s8(c, 1, 0x4Du);
    // 0505de  mov ax, 0x2503
    X86_AT(c, 0x505deu);
    s16(c, 0, 0x2503u);
    // 0505e2  int 0x21
    X86_AT(c, 0x505e2u);
    x86_int(c, 0x21, 0x505e4u);
    X86_TICK(c, 5);
    // 0505e4  jb 0x50634
    X86_AT(c, 0x505e4u);
    if (x86_cc(c, 2)) { goto L_50634; }
    X86_TICK(c, 51);
    // 0505ea  mov dword ptr [0x4a294], ebx
    X86_AT(c, 0x505eau);
    wr32((c.sbase[3] + (uint32_t)(0x4A294u)), c.r[3]);
    // 0505f0  push ds
    X86_AT(c, 0x505f0u);
    push32(c, c.sreg[3]);
    // 0505f1  mov eax, cs
    X86_AT(c, 0x505f1u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 0505f3  mov ds, eax
    X86_AT(c, 0x505f3u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0505f5  mov cl, 0x4d
    X86_AT(c, 0x505f5u);
    s8(c, 1, 0x4Du);
    // 0505f7  lea edx, [0x50684]
    X86_AT(c, 0x505f7u);
    c.r[2] = (uint32_t)(0x50684u);
    // 0505fd  mov ax, 0x2506
    X86_AT(c, 0x505fdu);
    s16(c, 0, 0x2506u);
    // 050601  int 0x21
    X86_AT(c, 0x50601u);
    x86_int(c, 0x21, 0x50603u);
    X86_TICK(c, 9);
    // 050603  pop ds
    X86_AT(c, 0x50603u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 050604  jb 0x50634
    X86_AT(c, 0x50604u);
    if (x86_cc(c, 2)) { goto L_50634; }
    X86_TICK(c, 11);
    // 05060a  mov bl, 0
    X86_AT(c, 0x5060au);
    s8(c, 3, 0x0u);
    // 05060c  mov ah, 0x15
    X86_AT(c, 0x5060cu);
    s8(c, 4, 0x15u);
    // 05060e  call 0x507d8
    X86_AT(c, 0x5060eu);
    push32(c, 0x50613u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x50613u);
    X86_TICK(c, 11);
    // 050613  mov bl, 0
    X86_AT(c, 0x50613u);
    s8(c, 3, 0x0u);
    // 050615  mov ah, 0x16
    X86_AT(c, 0x50615u);
    s8(c, 4, 0x16u);
    // 050617  call 0x507d8
    X86_AT(c, 0x50617u);
    push32(c, 0x5061cu); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x5061cu);
    X86_TICK(c, 19);
    // 05061c  in al, 0x12
    X86_AT(c, 0x5061cu);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 05061e  jmp 0x50620
    X86_AT(c, 0x5061eu);
    goto L_50620;
L_50620:
    X86_TICK(c, 7);
    // 050620  jmp 0x50622
    X86_AT(c, 0x50620u);
    goto L_50622;
L_50622:
    X86_TICK(c, 7);
    // 050622  jmp 0x50624
    X86_AT(c, 0x50622u);
    goto L_50624;
L_50624:
    X86_TICK(c, 66);
    // 050624  mov dl, 0x20
    X86_AT(c, 0x50624u);
    s8(c, 2, 0x20u);
    // 050626  xor dl, 0xff
    X86_AT(c, 0x50626u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ 0xFFu, 1)); }
    // 050629  and al, dl
    X86_AT(c, 0x50629u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 05062b  out 0x12, al
    X86_AT(c, 0x5062bu);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 05062d  popfd 
    X86_AT(c, 0x5062du);
    x86_popfd(c, 4);
    // 05062e  popal 
    X86_AT(c, 0x5062eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 05062f  pop es
    X86_AT(c, 0x5062fu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 050630  xor eax, eax
    X86_AT(c, 0x50630u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 050632  clc 
    X86_AT(c, 0x50632u);
    c.fl &= ~X86_CF;
    // 050633  ret 
    X86_AT(c, 0x50633u);
    c.eip = pop32(c); return;
L_50634:
    X86_TICK(c, 48);
    // 050634  popfd 
    X86_AT(c, 0x50634u);
    x86_popfd(c, 4);
    // 050635  popal 
    X86_AT(c, 0x50635u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 050636  pop es
    X86_AT(c, 0x50636u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 050637  mov eax, 2
    X86_AT(c, 0x50637u);
    c.r[0] = 0x2u;
    // 05063c  stc 
    X86_AT(c, 0x5063cu);
    c.fl |= X86_CF;
    // 05063d  ret 
    X86_AT(c, 0x5063du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50584u, "ran off the end of a function");
}
void f_0005063e(X86Cpu& c) {
    X86_TICK(c, 37);
    // 05063e  pushal 
    X86_AT(c, 0x5063eu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 05063f  pushf 
    X86_AT(c, 0x5063fu);
    push16(c, c.fl & 0xFFFFu);
    // 050641  cli 
    X86_AT(c, 0x50641u);
    c.fl &= ~X86_IF;
    // 050642  mov bl, 0
    X86_AT(c, 0x50642u);
    s8(c, 3, 0x0u);
    // 050644  mov ah, 0x15
    X86_AT(c, 0x50644u);
    s8(c, 4, 0x15u);
    // 050646  call 0x507d8
    X86_AT(c, 0x50646u);
    push32(c, 0x5064bu); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x5064bu);
    X86_TICK(c, 11);
    // 05064b  mov bl, 0
    X86_AT(c, 0x5064bu);
    s8(c, 3, 0x0u);
    // 05064d  mov ah, 0x16
    X86_AT(c, 0x5064du);
    s8(c, 4, 0x16u);
    // 05064f  call 0x507d8
    X86_AT(c, 0x5064fu);
    push32(c, 0x50654u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x50654u);
    X86_TICK(c, 19);
    // 050654  in al, 0x12
    X86_AT(c, 0x50654u);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 050656  jmp 0x50658
    X86_AT(c, 0x50656u);
    goto L_50658;
L_50658:
    X86_TICK(c, 7);
    // 050658  jmp 0x5065a
    X86_AT(c, 0x50658u);
    goto L_5065a;
L_5065a:
    X86_TICK(c, 7);
    // 05065a  jmp 0x5065c
    X86_AT(c, 0x5065au);
    goto L_5065c;
L_5065c:
    X86_TICK(c, 71);
    // 05065c  or al, 0x20
    X86_AT(c, 0x5065cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 05065e  out 0x12, al
    X86_AT(c, 0x5065eu);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 050660  push ds
    X86_AT(c, 0x50660u);
    push32(c, c.sreg[3]);
    // 050661  mov cl, 0x4d
    X86_AT(c, 0x50661u);
    s8(c, 1, 0x4Du);
    // 050663  mov edx, dword ptr [0x4a28e]
    X86_AT(c, 0x50663u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4A28Eu)));
    // 050669  mov ax, word ptr [0x4a292]
    X86_AT(c, 0x50669u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4A292u))));
    // 05066f  mov ebx, dword ptr [0x4a294]
    X86_AT(c, 0x5066fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x4A294u)));
    // 050675  mov ds, eax
    X86_AT(c, 0x50675u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 050677  mov ax, 0x2507
    X86_AT(c, 0x50677u);
    s16(c, 0, 0x2507u);
    // 05067b  int 0x21
    X86_AT(c, 0x5067bu);
    x86_int(c, 0x21, 0x5067du);
    X86_TICK(c, 46);
    // 05067d  xor eax, eax
    X86_AT(c, 0x5067du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 05067f  pop ds
    X86_AT(c, 0x5067fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 050680  popf 
    X86_AT(c, 0x50680u);
    x86_popfd(c, 2);
    // 050682  popal 
    X86_AT(c, 0x50682u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 050683  ret 
    X86_AT(c, 0x50683u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5063eu, "ran off the end of a function");
}
void f_00050684(X86Cpu& c) {
    X86_TICK(c, 22);
    // 050684  push eax
    X86_AT(c, 0x50684u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 050685  push ds
    X86_AT(c, 0x50685u);
    push32(c, c.sreg[3]);
    // 050686  mov ax, 0x14
    X86_AT(c, 0x50686u);
    s16(c, 0, 0x14u);
    // 05068a  mov ds, eax
    X86_AT(c, 0x5068au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 05068c  cld 
    X86_AT(c, 0x5068cu);
    c.fl &= ~X86_DF;
    // 05068d  cmp word ptr [0x4a2ab], 0
    X86_AT(c, 0x5068du);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4A2ABu))), 0x0u, 0, 2);
    // 050695  jne 0x506ab
    X86_AT(c, 0x50695u);
    if (x86_cc(c, 5)) { goto L_506ab; }
    X86_TICK(c, 8);
    // 050697  mov dword ptr [0x4a2ad], esp
    X86_AT(c, 0x50697u);
    wr32((c.sbase[3] + (uint32_t)(0x4A2ADu)), c.r[4]);
    // 05069d  mov word ptr [0x4a2b1], ss
    X86_AT(c, 0x5069du);
    wr16((c.sbase[3] + (uint32_t)(0x4A2B1u)), (uint32_t)c.sreg[2]);
    // 0506a3  mov ss, eax
    X86_AT(c, 0x506a3u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0506a5  lea esp, [0x4a6b3]
    X86_AT(c, 0x506a5u);
    c.r[4] = (uint32_t)(0x4A6B3u);
L_506ab:
    X86_TICK(c, 57);
    // 0506ab  inc word ptr [0x4a2ab]
    X86_AT(c, 0x506abu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A2ABu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0506b2  sti 
    X86_AT(c, 0x506b2u);
    c.fl |= X86_IF;
    // 0506b3  push es
    X86_AT(c, 0x506b3u);
    push32(c, c.sreg[0]);
    // 0506b4  push fs
    X86_AT(c, 0x506b4u);
    push32(c, c.sreg[4]);
    // 0506b6  push gs
    X86_AT(c, 0x506b6u);
    push32(c, c.sreg[5]);
    // 0506b8  pushal 
    X86_AT(c, 0x506b8u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0506b9  mov es, eax
    X86_AT(c, 0x506b9u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0506bb  mov dx, 0x4e9
    X86_AT(c, 0x506bbu);
    s16(c, 2, 0x4E9u);
    // 0506bf  in al, dx
    X86_AT(c, 0x506bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0506c0  push eax
    X86_AT(c, 0x506c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0506c1  test al, 1
    X86_AT(c, 0x506c1u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0506c3  je 0x5070d
    X86_AT(c, 0x506c3u);
    if (x86_cc(c, 4)) { goto L_5070d; }
    X86_TICK(c, 9);
    // 0506c9  mov ah, 0x10
    X86_AT(c, 0x506c9u);
    s8(c, 4, 0x10u);
    // 0506cb  call 0x507d8
    X86_AT(c, 0x506cbu);
    push32(c, 0x506d0u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x506d0u);
    X86_TICK(c, 7);
    // 0506d0  test dl, 1
    X86_AT(c, 0x506d0u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 0506d3  je 0x506e4
    X86_AT(c, 0x506d3u);
    if (x86_cc(c, 4)) { goto L_506e4; }
    X86_TICK(c, 11);
    // 0506d5  push edx
    X86_AT(c, 0x506d5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0506d6  mov ah, 0x17
    X86_AT(c, 0x506d6u);
    s8(c, 4, 0x17u);
    // 0506d8  call 0x507d8
    X86_AT(c, 0x506d8u);
    push32(c, 0x506ddu); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x506ddu);
    X86_TICK(c, 7);
    // 0506dd  call dword ptr [0x4a298]
    X86_AT(c, 0x506ddu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4A298u))); push32(c, 0x506e3u); x86_call(c, t); X86_RET(c, 0x506e3u); }
    X86_TICK(c, 4);
    // 0506e3  pop edx
    X86_AT(c, 0x506e3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_506e4:
    X86_TICK(c, 7);
    // 0506e4  test dl, 2
    X86_AT(c, 0x506e4u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 0506e7  je 0x5070d
    X86_AT(c, 0x506e7u);
    if (x86_cc(c, 4)) { goto L_5070d; }
    X86_TICK(c, 11);
    // 0506e9  push edx
    X86_AT(c, 0x506e9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0506ea  mov ah, 0x18
    X86_AT(c, 0x506eau);
    s8(c, 4, 0x18u);
    // 0506ec  call 0x507d8
    X86_AT(c, 0x506ecu);
    push32(c, 0x506f1u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x506f1u);
    X86_TICK(c, 11);
    // 0506f1  mov byte ptr [0x4a2a9], 0xff
    X86_AT(c, 0x506f1u);
    wr8((c.sbase[3] + (uint32_t)(0x4A2A9u)), 0xFFu);
    // 0506f8  mov ah, 0x50
    X86_AT(c, 0x506f8u);
    s8(c, 4, 0x50u);
    // 0506fa  call 0x507d8
    X86_AT(c, 0x506fau);
    push32(c, 0x506ffu); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x506ffu);
    X86_TICK(c, 9);
    // 0506ff  mov byte ptr [0x4a2a9], 0
    X86_AT(c, 0x506ffu);
    wr8((c.sbase[3] + (uint32_t)(0x4A2A9u)), 0x0u);
    // 050706  call dword ptr [0x4a29c]
    X86_AT(c, 0x50706u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4A29Cu))); push32(c, 0x5070cu); x86_call(c, t); X86_RET(c, 0x5070cu); }
    X86_TICK(c, 4);
    // 05070c  pop edx
    X86_AT(c, 0x5070cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_5070d:
    X86_TICK(c, 11);
    // 05070d  pop eax
    X86_AT(c, 0x5070du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 05070e  test al, 8
    X86_AT(c, 0x5070eu);
    (void)x86_logic(c, g8(c, 0) & 0x8u, 1);
    // 050710  je 0x50729
    X86_AT(c, 0x50710u);
    if (x86_cc(c, 4)) { goto L_50729; }
    X86_TICK(c, 13);
    // 050712  push edx
    X86_AT(c, 0x50712u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 050713  mov byte ptr [0x4a2a9], 0xff
    X86_AT(c, 0x50713u);
    wr8((c.sbase[3] + (uint32_t)(0x4A2A9u)), 0xFFu);
    // 05071a  mov ah, 0x51
    X86_AT(c, 0x5071au);
    s8(c, 4, 0x51u);
    // 05071c  call 0x507d8
    X86_AT(c, 0x5071cu);
    push32(c, 0x50721u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x50721u);
    X86_TICK(c, 6);
    // 050721  mov byte ptr [0x4a2a9], 0
    X86_AT(c, 0x50721u);
    wr8((c.sbase[3] + (uint32_t)(0x4A2A9u)), 0x0u);
    // 050728  pop edx
    X86_AT(c, 0x50728u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_50729:
    X86_TICK(c, 9);
    // 050729  cli 
    X86_AT(c, 0x50729u);
    c.fl &= ~X86_IF;
    // 05072a  call 0x5078d
    X86_AT(c, 0x5072au);
    push32(c, 0x5072fu); x86_call_known(c, 0x5078du, f_0005078d); X86_RET(c, 0x5072fu);
    X86_TICK(c, 12);
    // 05072f  cmp byte ptr [0x4a2aa], 0
    X86_AT(c, 0x5072fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A2AAu))), 0x0u, 0, 1);
    // 050736  jne 0x50768
    X86_AT(c, 0x50736u);
    if (x86_cc(c, 5)) { goto L_50768; }
    X86_TICK(c, 9);
    // 050738  mov byte ptr [0x4a2aa], 0xff
    X86_AT(c, 0x50738u);
    wr8((c.sbase[3] + (uint32_t)(0x4A2AAu)), 0xFFu);
    // 05073f  test dl, 1
    X86_AT(c, 0x5073fu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 050742  je 0x5074c
    X86_AT(c, 0x50742u);
    if (x86_cc(c, 4)) { goto L_5074c; }
    X86_TICK(c, 9);
    // 050744  push edx
    X86_AT(c, 0x50744u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 050745  call dword ptr [0x4a2a0]
    X86_AT(c, 0x50745u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4A2A0u))); push32(c, 0x5074bu); x86_call(c, t); X86_RET(c, 0x5074bu); }
    X86_TICK(c, 4);
    // 05074b  pop edx
    X86_AT(c, 0x5074bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_5074c:
    X86_TICK(c, 7);
    // 05074c  test dl, 2
    X86_AT(c, 0x5074cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 05074f  je 0x50760
    X86_AT(c, 0x5074fu);
    if (x86_cc(c, 4)) { goto L_50760; }
    X86_TICK(c, 12);
    // 050751  xor byte ptr [0x4a2a8], 0xff
    X86_AT(c, 0x50751u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A2A8u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0xFFu, 1)); }
    // 050758  je 0x50760
    X86_AT(c, 0x50758u);
    if (x86_cc(c, 4)) { goto L_50760; }
    X86_TICK(c, 7);
    // 05075a  call dword ptr [0x4a2a4]
    X86_AT(c, 0x5075au);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4A2A4u))); push32(c, 0x50760u); x86_call(c, t); X86_RET(c, 0x50760u); }
L_50760:
    X86_TICK(c, 4);
    // 050760  cli 
    X86_AT(c, 0x50760u);
    c.fl &= ~X86_IF;
    // 050761  mov byte ptr [0x4a2aa], 0
    X86_AT(c, 0x50761u);
    wr8((c.sbase[3] + (uint32_t)(0x4A2AAu)), 0x0u);
L_50768:
    X86_TICK(c, 49);
    // 050768  popal 
    X86_AT(c, 0x50768u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 050769  pop gs
    X86_AT(c, 0x50769u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 05076b  pop fs
    X86_AT(c, 0x5076bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 05076d  pop es
    X86_AT(c, 0x5076du);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 05076e  cli 
    X86_AT(c, 0x5076eu);
    c.fl &= ~X86_IF;
    // 05076f  dec word ptr [0x4a2ab]
    X86_AT(c, 0x5076fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A2ABu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 050776  jne 0x50784
    X86_AT(c, 0x50776u);
    if (x86_cc(c, 5)) { goto L_50784; }
    X86_TICK(c, 8);
    // 050778  mov esp, dword ptr [0x4a2ad]
    X86_AT(c, 0x50778u);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x4A2ADu)));
    // 05077e  mov ss, word ptr [0x4a2b1]
    X86_AT(c, 0x5077eu);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x4A2B1u))) & 0xFFFFu);
L_50784:
    X86_TICK(c, 14);
    // 050784  pop ds
    X86_AT(c, 0x50784u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 050785  pop eax
    X86_AT(c, 0x50785u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 050786  iretd 
    X86_AT(c, 0x50786u);
    x86_iret(c, 4); return;
    x86_fault(c, 0x50684u, "ran off the end of a function");
}
void f_00050787(X86Cpu& c) {
    X86_TICK(c, 14);
    // 050787  mov al, byte ptr [0x4a2a9]
    X86_AT(c, 0x50787u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4A2A9u))));
    // 05078c  ret 
    X86_AT(c, 0x5078cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50787u, "ran off the end of a function");
}
void f_0005078d(X86Cpu& c) {
    X86_TICK(c, 23);
    // 05078d  push ax
    X86_AT(c, 0x5078du);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 05078f  mov al, 0xb
    X86_AT(c, 0x5078fu);
    s8(c, 0, 0xBu);
    // 050791  out 0, al
    X86_AT(c, 0x50791u);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 050793  jmp 0x50795
    X86_AT(c, 0x50793u);
    goto L_50795;
L_50795:
    X86_TICK(c, 7);
    // 050795  jmp 0x50797
    X86_AT(c, 0x50795u);
    goto L_50797;
L_50797:
    X86_TICK(c, 7);
    // 050797  jmp 0x50799
    X86_AT(c, 0x50797u);
    goto L_50799;
L_50799:
    X86_TICK(c, 19);
    // 050799  in al, 0
    X86_AT(c, 0x50799u);
    s8(c, 0, x86_in(c, 0x0u, 1));
    // 05079b  jmp 0x5079d
    X86_AT(c, 0x5079bu);
    goto L_5079d;
L_5079d:
    X86_TICK(c, 7);
    // 05079d  jmp 0x5079f
    X86_AT(c, 0x5079du);
    goto L_5079f;
L_5079f:
    X86_TICK(c, 7);
    // 05079f  jmp 0x507a1
    X86_AT(c, 0x5079fu);
    goto L_507a1;
L_507a1:
    X86_TICK(c, 7);
    // 0507a1  test al, 0x7f
    X86_AT(c, 0x507a1u);
    (void)x86_logic(c, g8(c, 0) & 0x7Fu, 1);
    // 0507a3  je 0x507ab
    X86_AT(c, 0x507a3u);
    if (x86_cc(c, 4)) { goto L_507ab; }
    X86_TICK(c, 21);
    // 0507a5  mov al, 0x20
    X86_AT(c, 0x507a5u);
    s8(c, 0, 0x20u);
    // 0507a7  out 0, al
    X86_AT(c, 0x507a7u);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 0507a9  jmp 0x507cf
    X86_AT(c, 0x507a9u);
    goto L_507cf;
L_507ab:
    X86_TICK(c, 21);
    // 0507ab  mov al, 0x20
    X86_AT(c, 0x507abu);
    s8(c, 0, 0x20u);
    // 0507ad  out 0x10, al
    X86_AT(c, 0x507adu);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 0507af  jmp 0x507b1
    X86_AT(c, 0x507afu);
    goto L_507b1;
L_507b1:
    X86_TICK(c, 7);
    // 0507b1  jmp 0x507b3
    X86_AT(c, 0x507b1u);
    goto L_507b3;
L_507b3:
    X86_TICK(c, 7);
    // 0507b3  jmp 0x507b5
    X86_AT(c, 0x507b3u);
    goto L_507b5;
L_507b5:
    X86_TICK(c, 21);
    // 0507b5  mov al, 0xb
    X86_AT(c, 0x507b5u);
    s8(c, 0, 0xBu);
    // 0507b7  out 0x10, al
    X86_AT(c, 0x507b7u);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 0507b9  jmp 0x507bb
    X86_AT(c, 0x507b9u);
    goto L_507bb;
L_507bb:
    X86_TICK(c, 7);
    // 0507bb  jmp 0x507bd
    X86_AT(c, 0x507bbu);
    goto L_507bd;
L_507bd:
    X86_TICK(c, 7);
    // 0507bd  jmp 0x507bf
    X86_AT(c, 0x507bdu);
    goto L_507bf;
L_507bf:
    X86_TICK(c, 19);
    // 0507bf  in al, 0x10
    X86_AT(c, 0x507bfu);
    s8(c, 0, x86_in(c, 0x10u, 1));
    // 0507c1  jmp 0x507c3
    X86_AT(c, 0x507c1u);
    goto L_507c3;
L_507c3:
    X86_TICK(c, 7);
    // 0507c3  jmp 0x507c5
    X86_AT(c, 0x507c3u);
    goto L_507c5;
L_507c5:
    X86_TICK(c, 7);
    // 0507c5  jmp 0x507c7
    X86_AT(c, 0x507c5u);
    goto L_507c7;
L_507c7:
    X86_TICK(c, 7);
    // 0507c7  or al, al
    X86_AT(c, 0x507c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 0507c9  jne 0x507cf
    X86_AT(c, 0x507c9u);
    if (x86_cc(c, 5)) { goto L_507cf; }
    X86_TICK(c, 14);
    // 0507cb  mov al, 0x20
    X86_AT(c, 0x507cbu);
    s8(c, 0, 0x20u);
    // 0507cd  out 0, al
    X86_AT(c, 0x507cdu);
    x86_out(c, 0x0u, 1, g8(c, 0));
L_507cf:
    X86_TICK(c, 7);
    // 0507cf  jmp 0x507d1
    X86_AT(c, 0x507cfu);
    goto L_507d1;
L_507d1:
    X86_TICK(c, 7);
    // 0507d1  jmp 0x507d3
    X86_AT(c, 0x507d1u);
    goto L_507d3;
L_507d3:
    X86_TICK(c, 7);
    // 0507d3  jmp 0x507d5
    X86_AT(c, 0x507d3u);
    goto L_507d5;
L_507d5:
    X86_TICK(c, 14);
    // 0507d5  pop ax
    X86_AT(c, 0x507d5u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0507d7  ret 
    X86_AT(c, 0x507d7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5078du, "ran off the end of a function");
}
void f_000507d8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0507d8  push fs
    X86_AT(c, 0x507d8u);
    push32(c, c.sreg[4]);
    // 0507da  push gs
    X86_AT(c, 0x507dau);
    push32(c, c.sreg[5]);
    // 0507dc  push edi
    X86_AT(c, 0x507dcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0507dd  lgs edi, fword ptr [0x4a288]
    X86_AT(c, 0x507ddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A288u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 5, s); c.r[7] = o; }
    // 0507e4  push ax
    X86_AT(c, 0x507e4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0507e6  mov ax, 0x110
    X86_AT(c, 0x507e6u);
    s16(c, 0, 0x110u);
    // 0507ea  mov fs, eax
    X86_AT(c, 0x507eau);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0507ec  pop ax
    X86_AT(c, 0x507ecu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0507ee  lcall fword ptr fs:[0x80]
    X86_AT(c, 0x507eeu);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x507f5u); }
    X86_RET(c, 0x507f5u);
    X86_TICK(c, 22);
    // 0507f5  pop edi
    X86_AT(c, 0x507f5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0507f6  pop gs
    X86_AT(c, 0x507f6u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0507f8  pop fs
    X86_AT(c, 0x507f8u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0507fa  ret 
    X86_AT(c, 0x507fau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x507d8u, "ran off the end of a function");
}
void f_000507fb(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0507fb  ret 
    X86_AT(c, 0x507fbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x507fbu, "ran off the end of a function");
}
void f_0005085c(X86Cpu& c) {
    X86_TICK(c, 31);
    // 05085c  enter 0, 0
    X86_AT(c, 0x5085cu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 050860  push ebx
    X86_AT(c, 0x50860u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 050861  push edx
    X86_AT(c, 0x50861u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 050862  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x50862u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 050865  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0x50865u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 050868  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0x50868u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 05086b  mov ah, 0x43
    X86_AT(c, 0x5086bu);
    s8(c, 4, 0x43u);
    // 05086d  call 0x508f9
    X86_AT(c, 0x5086du);
    push32(c, 0x50872u); x86_call_known(c, 0x508f9u, f_000508f9); X86_RET(c, 0x50872u);
    X86_TICK(c, 27);
    // 050872  movzx eax, al
    X86_AT(c, 0x50872u);
    c.r[0] = g8(c, 0);
    // 050875  pop edx
    X86_AT(c, 0x50875u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 050876  pop ebx
    X86_AT(c, 0x50876u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 050877  leave 
    X86_AT(c, 0x50877u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 050878  ret 
    X86_AT(c, 0x50878u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5085cu, "ran off the end of a function");
}
void f_00050879(X86Cpu& c) {
    X86_TICK(c, 9);
    // 050879  mov ah, 0x44
    X86_AT(c, 0x50879u);
    s8(c, 4, 0x44u);
    // 05087b  call 0x508f9
    X86_AT(c, 0x5087bu);
    push32(c, 0x50880u); x86_call_known(c, 0x508f9u, f_000508f9); X86_RET(c, 0x50880u);
    X86_TICK(c, 13);
    // 050880  movzx eax, al
    X86_AT(c, 0x50880u);
    c.r[0] = g8(c, 0);
    // 050883  ret 
    X86_AT(c, 0x50883u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50879u, "ran off the end of a function");
}
void f_000508ad(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0508ad  enter 0, 0
    X86_AT(c, 0x508adu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0508b1  push ebx
    X86_AT(c, 0x508b1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0508b2  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x508b2u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0508b5  mov ah, 0x46
    X86_AT(c, 0x508b5u);
    s8(c, 4, 0x46u);
    // 0508b7  call 0x508f9
    X86_AT(c, 0x508b7u);
    push32(c, 0x508bcu); x86_call_known(c, 0x508f9u, f_000508f9); X86_RET(c, 0x508bcu);
    X86_TICK(c, 23);
    // 0508bc  movzx eax, al
    X86_AT(c, 0x508bcu);
    c.r[0] = g8(c, 0);
    // 0508bf  pop ebx
    X86_AT(c, 0x508bfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0508c0  leave 
    X86_AT(c, 0x508c0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0508c1  ret 
    X86_AT(c, 0x508c1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x508adu, "ran off the end of a function");
}
void f_000508e4(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0508e4  enter 0, 0
    X86_AT(c, 0x508e4u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0508e8  push edx
    X86_AT(c, 0x508e8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0508e9  mov dl, byte ptr [ebp + 8]
    X86_AT(c, 0x508e9u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0508ec  mov ah, 0x49
    X86_AT(c, 0x508ecu);
    s8(c, 4, 0x49u);
    // 0508ee  call 0x508f9
    X86_AT(c, 0x508eeu);
    push32(c, 0x508f3u); x86_call_known(c, 0x508f9u, f_000508f9); X86_RET(c, 0x508f3u);
    X86_TICK(c, 23);
    // 0508f3  movzx eax, al
    X86_AT(c, 0x508f3u);
    c.r[0] = g8(c, 0);
    // 0508f6  pop edx
    X86_AT(c, 0x508f6u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0508f7  leave 
    X86_AT(c, 0x508f7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0508f8  ret 
    X86_AT(c, 0x508f8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x508e4u, "ran off the end of a function");
}
void f_000508f9(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0508f9  push fs
    X86_AT(c, 0x508f9u);
    push32(c, c.sreg[4]);
    // 0508fb  push ax
    X86_AT(c, 0x508fbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0508fd  mov ax, 0x110
    X86_AT(c, 0x508fdu);
    s16(c, 0, 0x110u);
    // 050901  mov fs, eax
    X86_AT(c, 0x50901u);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 050903  pop ax
    X86_AT(c, 0x50903u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 050905  lcall fword ptr fs:[0x80]
    X86_AT(c, 0x50905u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x5090cu); }
    X86_RET(c, 0x5090cu);
    X86_TICK(c, 14);
    // 05090c  pop fs
    X86_AT(c, 0x5090cu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 05090e  ret 
    X86_AT(c, 0x5090eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x508f9u, "ran off the end of a function");
}
void f_00050959(X86Cpu& c) {
    X86_TICK(c, 9);
    // 050959  mov ah, 0
    X86_AT(c, 0x50959u);
    s8(c, 4, 0x0u);
    // 05095b  call 0x50b58
    X86_AT(c, 0x5095bu);
    push32(c, 0x50960u); x86_call_known(c, 0x50b58u, f_00050b58); X86_RET(c, 0x50960u);
    X86_TICK(c, 13);
    // 050960  movzx eax, al
    X86_AT(c, 0x50960u);
    c.r[0] = g8(c, 0);
    // 050963  ret 
    X86_AT(c, 0x50963u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50959u, "ran off the end of a function");
}
void f_0005096f(X86Cpu& c) {
    X86_TICK(c, 33);
    // 05096f  enter 0, 0
    X86_AT(c, 0x5096fu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 050973  push esi
    X86_AT(c, 0x50973u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 050974  push ecx
    X86_AT(c, 0x50974u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 050975  push edx
    X86_AT(c, 0x50975u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 050976  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x50976u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 050979  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x50979u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 05097c  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0x5097cu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 05097f  mov ah, 2
    X86_AT(c, 0x5097fu);
    s8(c, 4, 0x2u);
    // 050981  call 0x50b58
    X86_AT(c, 0x50981u);
    push32(c, 0x50986u); x86_call_known(c, 0x50b58u, f_00050b58); X86_RET(c, 0x50986u);
    X86_TICK(c, 31);
    // 050986  movzx eax, al
    X86_AT(c, 0x50986u);
    c.r[0] = g8(c, 0);
    // 050989  pop edx
    X86_AT(c, 0x50989u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 05098a  pop ecx
    X86_AT(c, 0x5098au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 05098b  pop esi
    X86_AT(c, 0x5098bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 05098c  leave 
    X86_AT(c, 0x5098cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05098d  ret 
    X86_AT(c, 0x5098du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5096fu, "ran off the end of a function");
}
void f_0005098e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 05098e  mov ah, 3
    X86_AT(c, 0x5098eu);
    s8(c, 4, 0x3u);
    // 050990  call 0x50b58
    X86_AT(c, 0x50990u);
    push32(c, 0x50995u); x86_call_known(c, 0x50b58u, f_00050b58); X86_RET(c, 0x50995u);
    X86_TICK(c, 13);
    // 050995  movzx eax, al
    X86_AT(c, 0x50995u);
    c.r[0] = g8(c, 0);
    // 050998  ret 
    X86_AT(c, 0x50998u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5098eu, "ran off the end of a function");
}
void f_000509a4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0509a4  mov ah, 5
    X86_AT(c, 0x509a4u);
    s8(c, 4, 0x5u);
    // 0509a6  call 0x50b58
    X86_AT(c, 0x509a6u);
    push32(c, 0x509abu); x86_call_known(c, 0x50b58u, f_00050b58); X86_RET(c, 0x509abu);
    X86_TICK(c, 13);
    // 0509ab  movzx eax, al
    X86_AT(c, 0x509abu);
    c.r[0] = g8(c, 0);
    // 0509ae  ret 
    X86_AT(c, 0x509aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x509a4u, "ran off the end of a function");
}
void f_000509af(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0509af  push es
    X86_AT(c, 0x509afu);
    push32(c, c.sreg[0]);
    // 0509b0  push esi
    X86_AT(c, 0x509b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0509b1  push ebx
    X86_AT(c, 0x509b1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0509b2  push ecx
    X86_AT(c, 0x509b2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0509b3  push edx
    X86_AT(c, 0x509b3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0509b4  mov ah, 6
    X86_AT(c, 0x509b4u);
    s8(c, 4, 0x6u);
    // 0509b6  call 0x50b58
    X86_AT(c, 0x509b6u);
    push32(c, 0x509bbu); x86_call_known(c, 0x50b58u, f_00050b58); X86_RET(c, 0x509bbu);
    X86_TICK(c, 32);
    // 0509bb  mov eax, esi
    X86_AT(c, 0x509bbu);
    c.r[0] = c.r[6];
    // 0509bd  pop edx
    X86_AT(c, 0x509bdu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0509be  pop ecx
    X86_AT(c, 0x509beu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0509bf  pop ebx
    X86_AT(c, 0x509bfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0509c0  pop esi
    X86_AT(c, 0x509c0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0509c1  pop es
    X86_AT(c, 0x509c1u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0509c2  ret 
    X86_AT(c, 0x509c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x509afu, "ran off the end of a function");
}
void f_00050a4b(X86Cpu& c) {
    X86_TICK(c, 19);
    // 050a4b  enter 0, 0
    X86_AT(c, 0x50a4bu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 050a4f  push edx
    X86_AT(c, 0x50a4fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 050a50  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x50a50u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 050a53  cmp dl, 0
    X86_AT(c, 0x50a53u);
    (void)x86_sub(c, g8(c, 2), 0x0u, 0, 1);
    // 050a56  je 0x50a5a
    X86_AT(c, 0x50a56u);
    if (x86_cc(c, 4)) { goto L_50a5a; }
    X86_TICK(c, 2);
    // 050a58  mov dl, 0xff
    X86_AT(c, 0x50a58u);
    s8(c, 2, 0xFFu);
L_50a5a:
    X86_TICK(c, 9);
    // 050a5a  mov ah, 8
    X86_AT(c, 0x50a5au);
    s8(c, 4, 0x8u);
    // 050a5c  call 0x50b58
    X86_AT(c, 0x50a5cu);
    push32(c, 0x50a61u); x86_call_known(c, 0x50b58u, f_00050b58); X86_RET(c, 0x50a61u);
    X86_TICK(c, 23);
    // 050a61  movzx eax, al
    X86_AT(c, 0x50a61u);
    c.r[0] = g8(c, 0);
    // 050a64  pop edx
    X86_AT(c, 0x50a64u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 050a65  leave 
    X86_AT(c, 0x50a65u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 050a66  ret 
    X86_AT(c, 0x50a66u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50a4bu, "ran off the end of a function");
}
void f_00050a67(X86Cpu& c) {
    X86_TICK(c, 21);
    // 050a67  enter 0, 0
    X86_AT(c, 0x50a67u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 050a6b  push edx
    X86_AT(c, 0x50a6bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 050a6c  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x50a6cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 050a6f  mov ah, 9
    X86_AT(c, 0x50a6fu);
    s8(c, 4, 0x9u);
    // 050a71  call 0x50b58
    X86_AT(c, 0x50a71u);
    push32(c, 0x50a76u); x86_call_known(c, 0x50b58u, f_00050b58); X86_RET(c, 0x50a76u);
    X86_TICK(c, 23);
    // 050a76  movzx eax, al
    X86_AT(c, 0x50a76u);
    c.r[0] = g8(c, 0);
    // 050a79  pop edx
    X86_AT(c, 0x50a79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 050a7a  leave 
    X86_AT(c, 0x50a7au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 050a7b  ret 
    X86_AT(c, 0x50a7bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50a67u, "ran off the end of a function");
}
void f_00050a7c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 050a7c  enter 0, 0
    X86_AT(c, 0x50a7cu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 050a80  push ebx
    X86_AT(c, 0x50a80u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 050a81  push edx
    X86_AT(c, 0x50a81u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 050a82  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x50a82u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 050a85  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x50a85u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 050a88  mov ah, 0x10
    X86_AT(c, 0x50a88u);
    s8(c, 4, 0x10u);
    // 050a8a  call 0x50b58
    X86_AT(c, 0x50a8au);
    push32(c, 0x50a8fu); x86_call_known(c, 0x50b58u, f_00050b58); X86_RET(c, 0x50a8fu);
    X86_TICK(c, 27);
    // 050a8f  movzx eax, al
    X86_AT(c, 0x50a8fu);
    c.r[0] = g8(c, 0);
    // 050a92  pop edx
    X86_AT(c, 0x50a92u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 050a93  pop ebx
    X86_AT(c, 0x50a93u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 050a94  leave 
    X86_AT(c, 0x50a94u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 050a95  ret 
    X86_AT(c, 0x50a95u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50a7cu, "ran off the end of a function");
}
void f_00050a96(X86Cpu& c) {
    X86_TICK(c, 27);
    // 050a96  enter 0, 0
    X86_AT(c, 0x50a96u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 050a9a  push ebx
    X86_AT(c, 0x50a9au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 050a9b  push edx
    X86_AT(c, 0x50a9bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 050a9c  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x50a9cu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 050a9f  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x50a9fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 050aa2  mov ah, 0x11
    X86_AT(c, 0x50aa2u);
    s8(c, 4, 0x11u);
    // 050aa4  call 0x50b58
    X86_AT(c, 0x50aa4u);
    push32(c, 0x50aa9u); x86_call_known(c, 0x50b58u, f_00050b58); X86_RET(c, 0x50aa9u);
    X86_TICK(c, 27);
    // 050aa9  movzx eax, al
    X86_AT(c, 0x50aa9u);
    c.r[0] = g8(c, 0);
    // 050aac  pop edx
    X86_AT(c, 0x50aacu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 050aad  pop ebx
    X86_AT(c, 0x50aadu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 050aae  leave 
    X86_AT(c, 0x50aaeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 050aaf  ret 
    X86_AT(c, 0x50aafu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50a96u, "ran off the end of a function");
}
void f_00050ab0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 050ab0  enter 0, 0
    X86_AT(c, 0x50ab0u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 050ab4  push ebx
    X86_AT(c, 0x50ab4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 050ab5  push edx
    X86_AT(c, 0x50ab5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 050ab6  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x50ab6u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 050ab9  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x50ab9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 050abc  mov ah, 0x12
    X86_AT(c, 0x50abcu);
    s8(c, 4, 0x12u);
    // 050abe  call 0x50b58
    X86_AT(c, 0x50abeu);
    push32(c, 0x50ac3u); x86_call_known(c, 0x50b58u, f_00050b58); X86_RET(c, 0x50ac3u);
    X86_TICK(c, 27);
    // 050ac3  movzx eax, al
    X86_AT(c, 0x50ac3u);
    c.r[0] = g8(c, 0);
    // 050ac6  pop edx
    X86_AT(c, 0x50ac6u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 050ac7  pop ebx
    X86_AT(c, 0x50ac7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 050ac8  leave 
    X86_AT(c, 0x50ac8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 050ac9  ret 
    X86_AT(c, 0x50ac9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50ab0u, "ran off the end of a function");
}
void f_00050aca(X86Cpu& c) {
    X86_TICK(c, 27);
    // 050aca  enter 0, 0
    X86_AT(c, 0x50acau);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 050ace  push ebx
    X86_AT(c, 0x50aceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 050acf  push edx
    X86_AT(c, 0x50acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 050ad0  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x50ad0u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 050ad3  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x50ad3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 050ad6  mov ah, 0x13
    X86_AT(c, 0x50ad6u);
    s8(c, 4, 0x13u);
    // 050ad8  call 0x50b58
    X86_AT(c, 0x50ad8u);
    push32(c, 0x50addu); x86_call_known(c, 0x50b58u, f_00050b58); X86_RET(c, 0x50addu);
    X86_TICK(c, 27);
    // 050add  movzx eax, al
    X86_AT(c, 0x50addu);
    c.r[0] = g8(c, 0);
    // 050ae0  pop edx
    X86_AT(c, 0x50ae0u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 050ae1  pop ebx
    X86_AT(c, 0x50ae1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 050ae2  leave 
    X86_AT(c, 0x50ae2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 050ae3  ret 
    X86_AT(c, 0x50ae3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50acau, "ran off the end of a function");
}
void f_00050ae4(X86Cpu& c) {
    X86_TICK(c, 27);
    // 050ae4  enter 0, 0
    X86_AT(c, 0x50ae4u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 050ae8  push ebx
    X86_AT(c, 0x50ae8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 050ae9  push edx
    X86_AT(c, 0x50ae9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 050aea  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x50aeau);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 050aed  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x50aedu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 050af0  mov ah, 0x14
    X86_AT(c, 0x50af0u);
    s8(c, 4, 0x14u);
    // 050af2  call 0x50b58
    X86_AT(c, 0x50af2u);
    push32(c, 0x50af7u); x86_call_known(c, 0x50b58u, f_00050b58); X86_RET(c, 0x50af7u);
    X86_TICK(c, 27);
    // 050af7  movzx eax, al
    X86_AT(c, 0x50af7u);
    c.r[0] = g8(c, 0);
    // 050afa  pop edx
    X86_AT(c, 0x50afau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 050afb  pop ebx
    X86_AT(c, 0x50afbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 050afc  leave 
    X86_AT(c, 0x50afcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 050afd  ret 
    X86_AT(c, 0x50afdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50ae4u, "ran off the end of a function");
}
void f_00050afe(X86Cpu& c) {
    X86_TICK(c, 27);
    // 050afe  enter 0, 0
    X86_AT(c, 0x50afeu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 050b02  push ebx
    X86_AT(c, 0x50b02u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 050b03  push edx
    X86_AT(c, 0x50b03u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 050b04  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x50b04u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 050b07  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x50b07u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 050b0a  mov ah, 0x20
    X86_AT(c, 0x50b0au);
    s8(c, 4, 0x20u);
    // 050b0c  call 0x50b58
    X86_AT(c, 0x50b0cu);
    push32(c, 0x50b11u); x86_call_known(c, 0x50b58u, f_00050b58); X86_RET(c, 0x50b11u);
    X86_TICK(c, 27);
    // 050b11  movzx eax, al
    X86_AT(c, 0x50b11u);
    c.r[0] = g8(c, 0);
    // 050b14  pop edx
    X86_AT(c, 0x50b14u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 050b15  pop ebx
    X86_AT(c, 0x50b15u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 050b16  leave 
    X86_AT(c, 0x50b16u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 050b17  ret 
    X86_AT(c, 0x50b17u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50afeu, "ran off the end of a function");
}
void f_00050b58(X86Cpu& c) {
    X86_TICK(c, 44);
    // 050b58  push gs
    X86_AT(c, 0x50b58u);
    push32(c, c.sreg[5]);
    // 050b5a  push fs
    X86_AT(c, 0x50b5au);
    push32(c, c.sreg[4]);
    // 050b5c  push es
    X86_AT(c, 0x50b5cu);
    push32(c, c.sreg[0]);
    // 050b5d  push ds
    X86_AT(c, 0x50b5du);
    push32(c, c.sreg[3]);
    // 050b5e  pushal 
    X86_AT(c, 0x50b5eu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 050b5f  pushfd 
    X86_AT(c, 0x50b5fu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 050b60  mov ebp, esp
    X86_AT(c, 0x50b60u);
    c.r[5] = c.r[4];
    // 050b62  movzx ebx, ah
    X86_AT(c, 0x50b62u);
    c.r[3] = g8(c, 4);
    // 050b65  call dword ptr cs:[ebx*4 + 0x50b76]
    X86_AT(c, 0x50b65u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x50B76u))); push32(c, 0x50b6du);
      switch (t) {
      case 0x50c22u: x86_call_known(c, 0x50c22u, f_00050c22); break;
      case 0x50c27u: x86_call_known(c, 0x50c27u, f_00050c27); break;
      case 0x50c97u: x86_call_known(c, 0x50c97u, f_00050c97); break;
      case 0x50cd5u: x86_call_known(c, 0x50cd5u, f_00050cd5); break;
      case 0x50d55u: x86_call_known(c, 0x50d55u, f_00050d55); break;
      case 0x50d6au: x86_call_known(c, 0x50d6au, f_00050d6a); break;
      case 0x50d7eu: x86_call_known(c, 0x50d7eu, f_00050d7e); break;
      case 0x50d8du: x86_call_known(c, 0x50d8du, f_00050d8d); break;
      case 0x50dd5u: x86_call_known(c, 0x50dd5u, f_00050dd5); break;
      case 0x50df1u: x86_call_known(c, 0x50df1u, f_00050df1); break;
      case 0x50e0du: x86_call_known(c, 0x50e0du, f_00050e0d); break;
      case 0x50e33u: x86_call_known(c, 0x50e33u, f_00050e33); break;
      case 0x50e4fu: x86_call_known(c, 0x50e4fu, f_00050e4f); break;
      case 0x50e96u: x86_call_known(c, 0x50e96u, f_00050e96); break;
      case 0x50ebcu: x86_call_known(c, 0x50ebcu, f_00050ebc); break;
      case 0x50ee2u: x86_call_known(c, 0x50ee2u, f_00050ee2); break;
      case 0x50f08u: x86_call_known(c, 0x50f08u, f_00050f08); break;
      case 0x50f2eu: x86_call_known(c, 0x50f2eu, f_00050f2e); break;
      case 0x50f54u: x86_call_known(c, 0x50f54u, f_00050f54); break;
      case 0x50f63u: x86_call_known(c, 0x50f63u, f_00050f63); break;
      case 0x50f9fu: x86_call_known(c, 0x50f9fu, f_00050f9f); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x50b6du); }
    X86_TICK(c, 56);
    // 050b6d  popfd 
    X86_AT(c, 0x50b6du);
    x86_popfd(c, 4);
    // 050b6e  popal 
    X86_AT(c, 0x50b6eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 050b6f  pop ds
    X86_AT(c, 0x50b6fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 050b70  pop es
    X86_AT(c, 0x50b70u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 050b71  pop fs
    X86_AT(c, 0x50b71u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 050b73  pop gs
    X86_AT(c, 0x50b73u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 050b75  ret 
    X86_AT(c, 0x50b75u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50b58u, "ran off the end of a function");
}
void f_00050c22(X86Cpu& c) {
    X86_TICK(c, 12);
    // 050c22  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0x50c22u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 050c26  ret 
    X86_AT(c, 0x50c26u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50c22u, "ran off the end of a function");
}
void f_00050c27(X86Cpu& c) {
    X86_TICK(c, 17);
    // 050c27  pushfd 
    X86_AT(c, 0x50c27u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 050c28  cld 
    X86_AT(c, 0x50c28u);
    c.fl &= ~X86_DF;
    // 050c29  cli 
    X86_AT(c, 0x50c29u);
    c.fl &= ~X86_IF;
    // 050c2a  call 0x52590
    X86_AT(c, 0x50c2au);
    push32(c, 0x50c2fu); x86_call_known(c, 0x52590u, f_00052590); X86_RET(c, 0x50c2fu);
    X86_TICK(c, 7);
    // 050c2f  call 0x51ecc
    X86_AT(c, 0x50c2fu);
    push32(c, 0x50c34u); x86_call_known(c, 0x51eccu, f_00051ecc); X86_RET(c, 0x50c34u);
    X86_TICK(c, 7);
    // 050c34  call 0x51f53
    X86_AT(c, 0x50c34u);
    push32(c, 0x50c39u); x86_call_known(c, 0x51f53u, f_00051f53); X86_RET(c, 0x50c39u);
    X86_TICK(c, 7);
    // 050c39  call 0x51fa7
    X86_AT(c, 0x50c39u);
    push32(c, 0x50c3eu); x86_call_known(c, 0x51fa7u, f_00051fa7); X86_RET(c, 0x50c3eu);
    X86_TICK(c, 7);
    // 050c3e  call 0x511d8
    X86_AT(c, 0x50c3eu);
    push32(c, 0x50c43u); x86_call_known(c, 0x511d8u, f_000511d8); X86_RET(c, 0x50c43u);
    X86_TICK(c, 7);
    // 050c43  call 0x510b2
    X86_AT(c, 0x50c43u);
    push32(c, 0x50c48u); x86_call_known(c, 0x510b2u, f_000510b2); X86_RET(c, 0x50c48u);
    X86_TICK(c, 7);
    // 050c48  call 0x51112
    X86_AT(c, 0x50c48u);
    push32(c, 0x50c4du); x86_call_known(c, 0x51112u, f_00051112); X86_RET(c, 0x50c4du);
    X86_TICK(c, 7);
    // 050c4d  call 0x51133
    X86_AT(c, 0x50c4du);
    push32(c, 0x50c52u); x86_call_known(c, 0x51133u, f_00051133); X86_RET(c, 0x50c52u);
    X86_TICK(c, 7);
    // 050c52  call 0x51193
    X86_AT(c, 0x50c52u);
    push32(c, 0x50c57u); x86_call_known(c, 0x51193u, f_00051193); X86_RET(c, 0x50c57u);
    X86_TICK(c, 7);
    // 050c57  call 0x51ce2
    X86_AT(c, 0x50c57u);
    push32(c, 0x50c5cu); x86_call_known(c, 0x51ce2u, f_00051ce2); X86_RET(c, 0x50c5cu);
    X86_TICK(c, 5);
    // 050c5c  jb 0x50c92
    X86_AT(c, 0x50c5cu);
    if (x86_cc(c, 2)) { goto L_50c92; }
    X86_TICK(c, 12);
    // 050c5e  cmp byte ptr [0x4a929], 0
    X86_AT(c, 0x50c5eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A929u))), 0x0u, 0, 1);
    // 050c65  jne 0x50c78
    X86_AT(c, 0x50c65u);
    if (x86_cc(c, 5)) { goto L_50c78; }
    X86_TICK(c, 7);
    // 050c67  call 0x51dee
    X86_AT(c, 0x50c67u);
    push32(c, 0x50c6cu); x86_call_known(c, 0x51deeu, f_00051dee); X86_RET(c, 0x50c6cu);
    X86_TICK(c, 11);
    // 050c6c  mov al, byte ptr [0x4a6e5]
    X86_AT(c, 0x50c6cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4A6E5u))));
    // 050c71  call 0x5216f
    X86_AT(c, 0x50c71u);
    push32(c, 0x50c76u); x86_call_known(c, 0x5216fu, f_0005216f); X86_RET(c, 0x50c76u);
    X86_TICK(c, 7);
    // 050c76  jmp 0x50c8c
    X86_AT(c, 0x50c76u);
    goto L_50c8c;
L_50c78:
    X86_TICK(c, 7);
    // 050c78  call 0x51d72
    X86_AT(c, 0x50c78u);
    push32(c, 0x50c7du); x86_call_known(c, 0x51d72u, f_00051d72); X86_RET(c, 0x50c7du);
    X86_TICK(c, 11);
    // 050c7d  mov al, byte ptr [0x4a6e5]
    X86_AT(c, 0x50c7du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4A6E5u))));
    // 050c82  call 0x5216f
    X86_AT(c, 0x50c82u);
    push32(c, 0x50c87u); x86_call_known(c, 0x5216fu, f_0005216f); X86_RET(c, 0x50c87u);
    X86_TICK(c, 7);
    // 050c87  call 0x52093
    X86_AT(c, 0x50c87u);
    push32(c, 0x50c8cu); x86_call_known(c, 0x52093u, f_00052093); X86_RET(c, 0x50c8cu);
L_50c8c:
    X86_TICK(c, 18);
    // 050c8c  popfd 
    X86_AT(c, 0x50c8cu);
    x86_popfd(c, 4);
    // 050c8d  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50c8du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050c91  ret 
    X86_AT(c, 0x50c91u);
    c.eip = pop32(c); return;
L_50c92:
    X86_TICK(c, 12);
    // 050c92  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0x50c92u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 050c96  ret 
    X86_AT(c, 0x50c96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50c27u, "ran off the end of a function");
}
void f_00050c97(X86Cpu& c) {
    X86_TICK(c, 13);
    // 050c97  push ds
    X86_AT(c, 0x50c97u);
    push32(c, c.sreg[3]);
    // 050c98  pop es
    X86_AT(c, 0x50c98u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 050c99  call 0x50fbd
    X86_AT(c, 0x50c99u);
    push32(c, 0x50c9eu); x86_call_known(c, 0x50fbdu, f_00050fbd); X86_RET(c, 0x50c9eu);
L_50c9e:
    X86_TICK(c, 19);
    // 050c9e  lea esi, [0x4a955]
    X86_AT(c, 0x50c9eu);
    c.r[6] = (uint32_t)(0x4A955u);
    // 050ca4  mov ax, word ptr [esi + 0x10]
    X86_AT(c, 0x50ca4u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u))));
    // 050ca8  add ax, word ptr [esi + 0x30]
    X86_AT(c, 0x50ca8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x30u))), 0, 2)); }
    // 050cac  or ax, ax
    X86_AT(c, 0x50cacu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 050caf  jne 0x50c9e
    X86_AT(c, 0x50cafu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x50c9eu); goto L_50c9e; }
    X86_TICK(c, 7);
    // 050cb1  call 0x52073
    X86_AT(c, 0x50cb1u);
    push32(c, 0x50cb6u); x86_call_known(c, 0x52073u, f_00052073); X86_RET(c, 0x50cb6u);
    X86_TICK(c, 7);
    // 050cb6  call 0x51e28
    X86_AT(c, 0x50cb6u);
    push32(c, 0x50cbbu); x86_call_known(c, 0x51e28u, f_00051e28); X86_RET(c, 0x50cbbu);
    X86_TICK(c, 12);
    // 050cbb  cmp byte ptr [0x4a929], 0
    X86_AT(c, 0x50cbbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A929u))), 0x0u, 0, 1);
    // 050cc2  jne 0x50ccb
    X86_AT(c, 0x50cc2u);
    if (x86_cc(c, 5)) { goto L_50ccb; }
    X86_TICK(c, 7);
    // 050cc4  call 0x51ea3
    X86_AT(c, 0x50cc4u);
    push32(c, 0x50cc9u); x86_call_known(c, 0x51ea3u, f_00051ea3); X86_RET(c, 0x50cc9u);
    X86_TICK(c, 7);
    // 050cc9  jmp 0x50cd0
    X86_AT(c, 0x50cc9u);
    goto L_50cd0;
L_50ccb:
    X86_TICK(c, 7);
    // 050ccb  call 0x51e64
    X86_AT(c, 0x50ccbu);
    push32(c, 0x50cd0u); x86_call_known(c, 0x51e64u, f_00051e64); X86_RET(c, 0x50cd0u);
L_50cd0:
    X86_TICK(c, 12);
    // 050cd0  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50cd0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050cd4  ret 
    X86_AT(c, 0x50cd4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50c97u, "ran off the end of a function");
}
void f_00050cd5(X86Cpu& c) {
    X86_TICK(c, 12);
    // 050cd5  cmp byte ptr [0x4a6e6], 0
    X86_AT(c, 0x50cd5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6E6u))), 0x0u, 0, 1);
    // 050cdc  jne 0x50d50
    X86_AT(c, 0x50cdcu);
    if (x86_cc(c, 5)) { goto L_50d50; }
    X86_TICK(c, 47);
    // 050cde  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x50cdeu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 050ce1  mov byte ptr [0x4a6e4], dl
    X86_AT(c, 0x50ce1u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E4u)), g8(c, 2));
    // 050ce7  mov byte ptr [0x4a6d8], dl
    X86_AT(c, 0x50ce7u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6D8u)), g8(c, 2));
    // 050ced  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x50cedu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 050cf0  mov ax, word ptr [ebp + 0x24]
    X86_AT(c, 0x50cf0u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 050cf4  mov dword ptr [0x4a6c1], esi
    X86_AT(c, 0x50cf4u);
    wr32((c.sbase[3] + (uint32_t)(0x4A6C1u)), c.r[6]);
    // 050cfa  mov word ptr [0x4a6c5], ax
    X86_AT(c, 0x50cfau);
    wr16((c.sbase[3] + (uint32_t)(0x4A6C5u)), (c.r[0] & 0xFFFFu));
    // 050d00  mov dword ptr [0x4a6c7], esi
    X86_AT(c, 0x50d00u);
    wr32((c.sbase[3] + (uint32_t)(0x4A6C7u)), c.r[6]);
    // 050d06  mov word ptr [0x4a6cb], ax
    X86_AT(c, 0x50d06u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6CBu)), (c.r[0] & 0xFFFFu));
    // 050d0c  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x50d0cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 050d0f  add ecx, esi
    X86_AT(c, 0x50d0fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 050d11  mov dword ptr [0x4a6cd], ecx
    X86_AT(c, 0x50d11u);
    wr32((c.sbase[3] + (uint32_t)(0x4A6CDu)), c.r[1]);
    // 050d17  mov word ptr [0x4a6d1], ax
    X86_AT(c, 0x50d17u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6D1u)), (c.r[0] & 0xFFFFu));
    // 050d1d  mov word ptr [0x4a6e2], 0
    X86_AT(c, 0x50d1du);
    wr16((c.sbase[3] + (uint32_t)(0x4A6E2u)), 0x0u);
    // 050d26  mov word ptr [0x4a6d3], 0
    X86_AT(c, 0x50d26u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6D3u)), 0x0u);
    // 050d2f  mov word ptr [0x4a6d5], 0
    X86_AT(c, 0x50d2fu);
    wr16((c.sbase[3] + (uint32_t)(0x4A6D5u)), 0x0u);
    // 050d38  call 0x51099
    X86_AT(c, 0x50d38u);
    push32(c, 0x50d3du); x86_call_known(c, 0x51099u, f_00051099); X86_RET(c, 0x50d3du);
    X86_TICK(c, 16);
    // 050d3d  mov byte ptr [0x4a6ed], 0xff
    X86_AT(c, 0x50d3du);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EDu)), 0xFFu);
    // 050d44  mov byte ptr [0x4a6e6], 0xff
    X86_AT(c, 0x50d44u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E6u)), 0xFFu);
    // 050d4b  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50d4bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050d4f  ret 
    X86_AT(c, 0x50d4fu);
    c.eip = pop32(c); return;
L_50d50:
    X86_TICK(c, 12);
    // 050d50  mov byte ptr [ebp + 0x20], 2
    X86_AT(c, 0x50d50u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x2u);
    // 050d54  ret 
    X86_AT(c, 0x50d54u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50cd5u, "ran off the end of a function");
}
void f_00050d55(X86Cpu& c) {
    X86_TICK(c, 7);
    // 050d55  call 0x50fbd
    X86_AT(c, 0x50d55u);
    push32(c, 0x50d5au); x86_call_known(c, 0x50fbdu, f_00050fbd); X86_RET(c, 0x50d5au);
    X86_TICK(c, 5);
    // 050d5a  jb 0x50d65
    X86_AT(c, 0x50d5au);
    if (x86_cc(c, 2)) { goto L_50d65; }
    X86_TICK(c, 12);
    // 050d60  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50d60u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050d64  ret 
    X86_AT(c, 0x50d64u);
    c.eip = pop32(c); return;
L_50d65:
    X86_TICK(c, 12);
    // 050d65  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0x50d65u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 050d69  ret 
    X86_AT(c, 0x50d69u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50d55u, "ran off the end of a function");
}
void f_00050d6a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 050d6a  mov byte ptr [0x4a6e8], 0xff
    X86_AT(c, 0x50d6au);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E8u)), 0xFFu);
    // 050d71  mov byte ptr [0x4a6ef], 0xff
    X86_AT(c, 0x50d71u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EFu)), 0xFFu);
    // 050d78  call 0x51048
    X86_AT(c, 0x50d78u);
    push32(c, 0x50d7du); x86_call_known(c, 0x51048u, f_00051048); X86_RET(c, 0x50d7du);
    X86_TICK(c, 10);
    // 050d7d  ret 
    X86_AT(c, 0x50d7du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50d6au, "ran off the end of a function");
}
void f_00050d7e(X86Cpu& c) {
    X86_TICK(c, 14);
    // 050d7e  mov byte ptr [0x4a6e8], 0
    X86_AT(c, 0x50d7eu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E8u)), 0x0u);
    // 050d85  mov byte ptr [0x4a6ee], 0xff
    X86_AT(c, 0x50d85u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EEu)), 0xFFu);
    // 050d8c  ret 
    X86_AT(c, 0x50d8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50d7eu, "ran off the end of a function");
}
void f_00050d8d(X86Cpu& c) {
    X86_TICK(c, 50);
    // 050d8d  mov byte ptr [0x4a946], 0xff
    X86_AT(c, 0x50d8du);
    wr8((c.sbase[3] + (uint32_t)(0x4A946u)), 0xFFu);
    // 050d94  mov ax, word ptr [0x4a6c5]
    X86_AT(c, 0x50d94u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4A6C5u))));
    // 050d9a  mov word ptr [ebp + 0x28], ax
    X86_AT(c, 0x50d9au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 050d9e  mov eax, dword ptr [0x4a6c1]
    X86_AT(c, 0x50d9eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4A6C1u)));
    // 050da3  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0x50da3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
    // 050da6  mov ax, word ptr [0x4a6d3]
    X86_AT(c, 0x50da6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4A6D3u))));
    // 050dac  mov word ptr [ebp + 0x14], ax
    X86_AT(c, 0x50dacu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[0] & 0xFFFFu));
    // 050db0  mov ax, word ptr [0x4a6d5]
    X86_AT(c, 0x50db0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4A6D5u))));
    // 050db6  mov word ptr [ebp + 0x1c], ax
    X86_AT(c, 0x50db6u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), (c.r[0] & 0xFFFFu));
    // 050dba  mov al, byte ptr [0x4a6d9]
    X86_AT(c, 0x50dbau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4A6D9u))));
    // 050dbf  mov ah, byte ptr [0x4a6e6]
    X86_AT(c, 0x50dbfu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0x4A6E6u))));
    // 050dc5  mov word ptr [ebp + 0x18], ax
    X86_AT(c, 0x50dc5u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 050dc9  mov byte ptr [0x4a946], 0
    X86_AT(c, 0x50dc9u);
    wr8((c.sbase[3] + (uint32_t)(0x4A946u)), 0x0u);
    // 050dd0  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50dd0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050dd4  ret 
    X86_AT(c, 0x50dd4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50d8du, "ran off the end of a function");
}
void f_00050dd5(X86Cpu& c) {
    X86_TICK(c, 13);
    // 050dd5  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x50dd5u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 050dd8  inc dl
    X86_AT(c, 0x50dd8u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 050dda  cmp dl, 8
    X86_AT(c, 0x50ddau);
    (void)x86_sub(c, g8(c, 2), 0x8u, 0, 1);
    // 050ddd  ja 0x50dec
    X86_AT(c, 0x50dddu);
    if (x86_cc(c, 7)) { goto L_50dec; }
    X86_TICK(c, 16);
    // 050ddf  dec dl
    X86_AT(c, 0x50ddfu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 050de1  mov byte ptr [0x4a6f2], dl
    X86_AT(c, 0x50de1u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6F2u)), g8(c, 2));
    // 050de7  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50de7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050deb  ret 
    X86_AT(c, 0x50debu);
    c.eip = pop32(c); return;
L_50dec:
    X86_TICK(c, 12);
    // 050dec  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x50decu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 050df0  ret 
    X86_AT(c, 0x50df0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50dd5u, "ran off the end of a function");
}
void f_00050df1(X86Cpu& c) {
    X86_TICK(c, 13);
    // 050df1  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x50df1u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 050df4  inc dl
    X86_AT(c, 0x50df4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 050df6  cmp dl, 1
    X86_AT(c, 0x50df6u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 050df9  ja 0x50e08
    X86_AT(c, 0x50df9u);
    if (x86_cc(c, 7)) { goto L_50e08; }
    X86_TICK(c, 16);
    // 050dfb  dec dl
    X86_AT(c, 0x50dfbu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 050dfd  mov byte ptr [0x4a6e9], dl
    X86_AT(c, 0x50dfdu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E9u)), g8(c, 2));
    // 050e03  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50e03u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050e07  ret 
    X86_AT(c, 0x50e07u);
    c.eip = pop32(c); return;
L_50e08:
    X86_TICK(c, 12);
    // 050e08  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x50e08u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 050e0c  ret 
    X86_AT(c, 0x50e0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50df1u, "ran off the end of a function");
}
void f_00050e0d(X86Cpu& c) {
    X86_TICK(c, 11);
    // 050e0d  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x50e0du);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 050e11  cmp dx, 0xfa
    X86_AT(c, 0x50e11u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFAu, 0, 2);
    // 050e16  ja 0x50e2e
    X86_AT(c, 0x50e16u);
    if (x86_cc(c, 7)) { goto L_50e2e; }
    X86_TICK(c, 13);
    // 050e18  mov al, dl
    X86_AT(c, 0x50e18u);
    s8(c, 0, g8(c, 2));
    // 050e1a  mov byte ptr [0x4a6e5], al
    X86_AT(c, 0x50e1au);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E5u)), g8(c, 0));
    // 050e1f  mov byte ptr [0x4a6d9], al
    X86_AT(c, 0x50e1fu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6D9u)), g8(c, 0));
    // 050e24  call 0x5216f
    X86_AT(c, 0x50e24u);
    push32(c, 0x50e29u); x86_call_known(c, 0x5216fu, f_0005216f); X86_RET(c, 0x50e29u);
    X86_TICK(c, 12);
    // 050e29  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50e29u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050e2d  ret 
    X86_AT(c, 0x50e2du);
    c.eip = pop32(c); return;
L_50e2e:
    X86_TICK(c, 12);
    // 050e2e  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x50e2eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 050e32  ret 
    X86_AT(c, 0x50e32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50e0du, "ran off the end of a function");
}
void f_00050e33(X86Cpu& c) {
    X86_TICK(c, 13);
    // 050e33  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x50e33u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 050e36  inc dl
    X86_AT(c, 0x50e36u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 050e38  cmp dl, 1
    X86_AT(c, 0x50e38u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 050e3b  ja 0x50e4a
    X86_AT(c, 0x50e3bu);
    if (x86_cc(c, 7)) { goto L_50e4a; }
    X86_TICK(c, 16);
    // 050e3d  dec dl
    X86_AT(c, 0x50e3du);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 050e3f  mov byte ptr [0x4a946], dl
    X86_AT(c, 0x50e3fu);
    wr8((c.sbase[3] + (uint32_t)(0x4A946u)), g8(c, 2));
    // 050e45  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50e45u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050e49  ret 
    X86_AT(c, 0x50e49u);
    c.eip = pop32(c); return;
L_50e4a:
    X86_TICK(c, 12);
    // 050e4a  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x50e4au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 050e4e  ret 
    X86_AT(c, 0x50e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50e33u, "ran off the end of a function");
}
void f_00050e4f(X86Cpu& c) {
    X86_TICK(c, 13);
    // 050e4f  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x50e4fu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 050e52  inc dl
    X86_AT(c, 0x50e52u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 050e54  cmp dl, 1
    X86_AT(c, 0x50e54u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 050e57  ja 0x50e91
    X86_AT(c, 0x50e57u);
    if (x86_cc(c, 7)) { goto L_50e91; }
    X86_TICK(c, 14);
    // 050e59  dec dl
    X86_AT(c, 0x50e59u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 050e5b  cmp byte ptr [0x4a929], 0
    X86_AT(c, 0x50e5bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A929u))), 0x0u, 0, 1);
    // 050e62  jne 0x50e7c
    X86_AT(c, 0x50e62u);
    if (x86_cc(c, 5)) { goto L_50e7c; }
    X86_TICK(c, 7);
    // 050e64  and dl, dl
    X86_AT(c, 0x50e64u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 050e66  je 0x50e71
    X86_AT(c, 0x50e66u);
    if (x86_cc(c, 4)) { goto L_50e71; }
    X86_TICK(c, 9);
    // 050e68  mov ah, 0x17
    X86_AT(c, 0x50e68u);
    s8(c, 4, 0x17u);
    // 050e6a  call 0x507d8
    X86_AT(c, 0x50e6au);
    push32(c, 0x50e6fu); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x50e6fu);
    X86_TICK(c, 7);
    // 050e6f  jmp 0x50e8c
    X86_AT(c, 0x50e6fu);
    goto L_50e8c;
L_50e71:
    X86_TICK(c, 11);
    // 050e71  mov bl, 0
    X86_AT(c, 0x50e71u);
    s8(c, 3, 0x0u);
    // 050e73  mov ah, 0x15
    X86_AT(c, 0x50e73u);
    s8(c, 4, 0x15u);
    // 050e75  call 0x507d8
    X86_AT(c, 0x50e75u);
    push32(c, 0x50e7au); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x50e7au);
    X86_TICK(c, 7);
    // 050e7a  jmp 0x50e8c
    X86_AT(c, 0x50e7au);
    goto L_50e8c;
L_50e7c:
    X86_TICK(c, 7);
    // 050e7c  and dl, dl
    X86_AT(c, 0x50e7cu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 050e7e  je 0x50e87
    X86_AT(c, 0x50e7eu);
    if (x86_cc(c, 4)) { goto L_50e87; }
    X86_TICK(c, 7);
    // 050e80  call 0x520d4
    X86_AT(c, 0x50e80u);
    push32(c, 0x50e85u); x86_call_known(c, 0x520d4u, f_000520d4); X86_RET(c, 0x50e85u);
    X86_TICK(c, 7);
    // 050e85  jmp 0x50e8c
    X86_AT(c, 0x50e85u);
    goto L_50e8c;
L_50e87:
    X86_TICK(c, 7);
    // 050e87  call 0x52093
    X86_AT(c, 0x50e87u);
    push32(c, 0x50e8cu); x86_call_known(c, 0x52093u, f_00052093); X86_RET(c, 0x50e8cu);
L_50e8c:
    X86_TICK(c, 12);
    // 050e8c  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50e8cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050e90  ret 
    X86_AT(c, 0x50e90u);
    c.eip = pop32(c); return;
L_50e91:
    X86_TICK(c, 12);
    // 050e91  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x50e91u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 050e95  ret 
    X86_AT(c, 0x50e95u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50e4fu, "ran off the end of a function");
}
void f_00050e96(X86Cpu& c) {
    X86_TICK(c, 15);
    // 050e96  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x50e96u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 050e99  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x50e99u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 050e9c  cmp bl, 0x20
    X86_AT(c, 0x50e9cu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 050e9f  jae 0x50eb7
    X86_AT(c, 0x50e9fu);
    if (x86_cc(c, 3)) { goto L_50eb7; }
    X86_TICK(c, 9);
    // 050ea1  inc al
    X86_AT(c, 0x50ea1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 050ea3  cmp al, 8
    X86_AT(c, 0x50ea3u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 050ea5  ja 0x50eb7
    X86_AT(c, 0x50ea5u);
    if (x86_cc(c, 7)) { goto L_50eb7; }
    X86_TICK(c, 19);
    // 050ea7  dec al
    X86_AT(c, 0x50ea7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 050ea9  movzx ebx, bl
    X86_AT(c, 0x50ea9u);
    c.r[3] = g8(c, 3);
    // 050eac  mov byte ptr [ebx + 0x4a725], al
    X86_AT(c, 0x50eacu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x4A725u)), g8(c, 0));
    // 050eb2  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50eb2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050eb6  ret 
    X86_AT(c, 0x50eb6u);
    c.eip = pop32(c); return;
L_50eb7:
    X86_TICK(c, 12);
    // 050eb7  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x50eb7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 050ebb  ret 
    X86_AT(c, 0x50ebbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50e96u, "ran off the end of a function");
}
void f_00050ebc(X86Cpu& c) {
    X86_TICK(c, 15);
    // 050ebc  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x50ebcu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 050ebf  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x50ebfu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 050ec2  cmp bl, 0x20
    X86_AT(c, 0x50ec2u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 050ec5  jae 0x50edd
    X86_AT(c, 0x50ec5u);
    if (x86_cc(c, 3)) { goto L_50edd; }
    X86_TICK(c, 9);
    // 050ec7  inc al
    X86_AT(c, 0x50ec7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 050ec9  cmp al, 0x10
    X86_AT(c, 0x50ec9u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 050ecb  ja 0x50edd
    X86_AT(c, 0x50ecbu);
    if (x86_cc(c, 7)) { goto L_50edd; }
    X86_TICK(c, 19);
    // 050ecd  dec al
    X86_AT(c, 0x50ecdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 050ecf  movzx ebx, bl
    X86_AT(c, 0x50ecfu);
    c.r[3] = g8(c, 3);
    // 050ed2  mov byte ptr [ebx + 0x4a745], al
    X86_AT(c, 0x50ed2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x4A745u)), g8(c, 0));
    // 050ed8  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50ed8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050edc  ret 
    X86_AT(c, 0x50edcu);
    c.eip = pop32(c); return;
L_50edd:
    X86_TICK(c, 12);
    // 050edd  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x50eddu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 050ee1  ret 
    X86_AT(c, 0x50ee1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50ebcu, "ran off the end of a function");
}
void f_00050ee2(X86Cpu& c) {
    X86_TICK(c, 15);
    // 050ee2  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x50ee2u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 050ee5  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x50ee5u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 050ee8  cmp bl, 0x20
    X86_AT(c, 0x50ee8u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 050eeb  jae 0x50f03
    X86_AT(c, 0x50eebu);
    if (x86_cc(c, 3)) { goto L_50f03; }
    X86_TICK(c, 9);
    // 050eed  inc al
    X86_AT(c, 0x50eedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 050eef  cmp al, 1
    X86_AT(c, 0x50eefu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 050ef1  ja 0x50f03
    X86_AT(c, 0x50ef1u);
    if (x86_cc(c, 7)) { goto L_50f03; }
    X86_TICK(c, 19);
    // 050ef3  dec al
    X86_AT(c, 0x50ef3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 050ef5  movzx ebx, bl
    X86_AT(c, 0x50ef5u);
    c.r[3] = g8(c, 3);
    // 050ef8  mov byte ptr [ebx + 0x4a705], al
    X86_AT(c, 0x50ef8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x4A705u)), g8(c, 0));
    // 050efe  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50efeu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050f02  ret 
    X86_AT(c, 0x50f02u);
    c.eip = pop32(c); return;
L_50f03:
    X86_TICK(c, 12);
    // 050f03  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x50f03u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 050f07  ret 
    X86_AT(c, 0x50f07u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50ee2u, "ran off the end of a function");
}
void f_00050f08(X86Cpu& c) {
    X86_TICK(c, 15);
    // 050f08  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x50f08u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 050f0b  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x50f0bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 050f0e  cmp bl, 0x20
    X86_AT(c, 0x50f0eu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 050f11  jae 0x50f29
    X86_AT(c, 0x50f11u);
    if (x86_cc(c, 3)) { goto L_50f29; }
    X86_TICK(c, 9);
    // 050f13  add al, 0x28
    X86_AT(c, 0x50f13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 050f15  cmp al, 0x50
    X86_AT(c, 0x50f15u);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 050f17  ja 0x50f29
    X86_AT(c, 0x50f17u);
    if (x86_cc(c, 7)) { goto L_50f29; }
    X86_TICK(c, 19);
    // 050f19  sub al, 0x28
    X86_AT(c, 0x50f19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 050f1b  movzx ebx, bl
    X86_AT(c, 0x50f1bu);
    c.r[3] = g8(c, 3);
    // 050f1e  mov byte ptr [ebx + 0x4a785], al
    X86_AT(c, 0x50f1eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x4A785u)), g8(c, 0));
    // 050f24  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50f24u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050f28  ret 
    X86_AT(c, 0x50f28u);
    c.eip = pop32(c); return;
L_50f29:
    X86_TICK(c, 12);
    // 050f29  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x50f29u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 050f2d  ret 
    X86_AT(c, 0x50f2du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50f08u, "ran off the end of a function");
}
void f_00050f2e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 050f2e  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x50f2eu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 050f31  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0x50f31u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 050f34  cmp bl, 0x20
    X86_AT(c, 0x50f34u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 050f37  jae 0x50f4f
    X86_AT(c, 0x50f37u);
    if (x86_cc(c, 3)) { goto L_50f4f; }
    X86_TICK(c, 9);
    // 050f39  add al, 0x28
    X86_AT(c, 0x50f39u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 050f3b  cmp al, 0x50
    X86_AT(c, 0x50f3bu);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 050f3d  ja 0x50f4f
    X86_AT(c, 0x50f3du);
    if (x86_cc(c, 7)) { goto L_50f4f; }
    X86_TICK(c, 19);
    // 050f3f  sub al, 0x28
    X86_AT(c, 0x50f3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 050f41  movzx ebx, bl
    X86_AT(c, 0x50f41u);
    c.r[3] = g8(c, 3);
    // 050f44  mov byte ptr [ebx + 0x4a765], al
    X86_AT(c, 0x50f44u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x4A765u)), g8(c, 0));
    // 050f4a  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0x50f4au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 050f4e  ret 
    X86_AT(c, 0x50f4eu);
    c.eip = pop32(c); return;
L_50f4f:
    X86_TICK(c, 12);
    // 050f4f  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0x50f4fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 050f53  ret 
    X86_AT(c, 0x50f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50f2eu, "ran off the end of a function");
}
void f_00050f54(X86Cpu& c) {
    X86_TICK(c, 15);
    // 050f54  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x50f54u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 050f57  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0x50f57u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 050f5a  call 0x52612
    X86_AT(c, 0x50f5au);
    push32(c, 0x50f5fu); x86_call_known(c, 0x52612u, f_00052612); X86_RET(c, 0x50f5fu);
    X86_TICK(c, 12);
    // 050f5f  mov byte ptr [ebp + 0x20], al
    X86_AT(c, 0x50f5fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 0));
    // 050f62  ret 
    X86_AT(c, 0x50f62u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50f54u, "ran off the end of a function");
}
void f_00050f63(X86Cpu& c) {
    X86_TICK(c, 13);
    // 050f63  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x50f63u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 050f66  inc bl
    X86_AT(c, 0x50f66u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 050f68  cmp bl, 8
    X86_AT(c, 0x50f68u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 050f6b  ja 0x50f9b
    X86_AT(c, 0x50f6bu);
    if (x86_cc(c, 7)) { goto L_50f9b; }
    X86_TICK(c, 13);
    // 050f6d  dec bl
    X86_AT(c, 0x50f6du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 050f6f  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x50f6fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 050f72  cmp ecx, 0
    X86_AT(c, 0x50f72u);
    (void)x86_sub(c, c.r[1], 0x0u, 0, 4);
    // 050f75  je 0x50f9b
    X86_AT(c, 0x50f75u);
    if (x86_cc(c, 4)) { goto L_50f9b; }
    X86_TICK(c, 12);
    // 050f77  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x50f77u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 050f7a  mov al, byte ptr [0x4a946]
    X86_AT(c, 0x50f7au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4A946u))));
    // 050f7f  mov byte ptr [0x4a946], 0xff
    X86_AT(c, 0x50f7fu);
    wr8((c.sbase[3] + (uint32_t)(0x4A946u)), 0xFFu);
    // 050f86  push ax
    X86_AT(c, 0x50f86u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
L_50f88:
    X86_TICK(c, 14);
    // 050f88  lodsb al, byte ptr [esi]
    X86_AT(c, 0x50f88u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 050f89  call 0x51c39
    X86_AT(c, 0x50f89u);
    push32(c, 0x50f8eu); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x50f8eu);
    X86_TICK(c, 11);
    // 050f8e  loop 0x50f88
    X86_AT(c, 0x50f8eu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x50f88u); goto L_50f88; }
    X86_TICK(c, 20);
    // 050f90  pop ax
    X86_AT(c, 0x50f90u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 050f92  mov byte ptr [0x4a946], al
    X86_AT(c, 0x50f92u);
    wr8((c.sbase[3] + (uint32_t)(0x4A946u)), g8(c, 0));
    // 050f97  xor al, al
    X86_AT(c, 0x50f97u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 050f99  clc 
    X86_AT(c, 0x50f99u);
    c.fl &= ~X86_CF;
    // 050f9a  ret 
    X86_AT(c, 0x50f9au);
    c.eip = pop32(c); return;
L_50f9b:
    X86_TICK(c, 14);
    // 050f9b  mov al, 3
    X86_AT(c, 0x50f9bu);
    s8(c, 0, 0x3u);
    // 050f9d  stc 
    X86_AT(c, 0x50f9du);
    c.fl |= X86_CF;
    // 050f9e  ret 
    X86_AT(c, 0x50f9eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50f63u, "ran off the end of a function");
}
void f_00050f9f(X86Cpu& c) {
    X86_TICK(c, 11);
    // 050f9f  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x50f9fu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 050fa2  call 0x51be6
    X86_AT(c, 0x50fa2u);
    push32(c, 0x50fa7u); x86_call_known(c, 0x51be6u, f_00051be6); X86_RET(c, 0x50fa7u);
    X86_TICK(c, 13);
    // 050fa7  cmp ah, 1
    X86_AT(c, 0x50fa7u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 050faa  nop 
    X86_AT(c, 0x50faau);
    // 050fab  nop 
    X86_AT(c, 0x50fabu);
    // 050fac  nop 
    X86_AT(c, 0x50facu);
    // 050fad  ja 0x50fb8
    X86_AT(c, 0x50fadu);
    if (x86_cc(c, 7)) { goto L_50fb8; }
    X86_TICK(c, 5);
    // 050faf  je 0x50fb8
    X86_AT(c, 0x50fafu);
    if (x86_cc(c, 4)) { goto L_50fb8; }
    X86_TICK(c, 16);
    // 050fb1  mov byte ptr [ebp + 0x18], al
    X86_AT(c, 0x50fb1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), g8(c, 0));
    // 050fb4  xor al, al
    X86_AT(c, 0x50fb4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 050fb6  clc 
    X86_AT(c, 0x50fb6u);
    c.fl &= ~X86_CF;
    // 050fb7  ret 
    X86_AT(c, 0x50fb7u);
    c.eip = pop32(c); return;
L_50fb8:
    X86_TICK(c, 14);
    // 050fb8  mov byte ptr [ebp + 0x20], ah
    X86_AT(c, 0x50fb8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 4));
    // 050fbb  stc 
    X86_AT(c, 0x50fbbu);
    c.fl |= X86_CF;
    // 050fbc  ret 
    X86_AT(c, 0x50fbcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50f9fu, "ran off the end of a function");
}
void f_00050fbd(X86Cpu& c) {
    X86_TICK(c, 12);
    // 050fbd  cmp byte ptr [0x4a6e6], 0
    X86_AT(c, 0x50fbdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6E6u))), 0x0u, 0, 1);
    // 050fc4  je 0x50feb
    X86_AT(c, 0x50fc4u);
    if (x86_cc(c, 4)) { goto L_50feb; }
    X86_TICK(c, 15);
    // 050fc6  mov byte ptr [0x4a6ef], 0xff
    X86_AT(c, 0x50fc6u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EFu)), 0xFFu);
    // 050fcd  mov byte ptr [0x4a6e6], 0
    X86_AT(c, 0x50fcdu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E6u)), 0x0u);
    // 050fd4  mov word ptr [0x4a6f9], 0
    X86_AT(c, 0x50fd4u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6F9u)), 0x0u);
    // 050fdd  mov byte ptr [0x4a6e7], 0
    X86_AT(c, 0x50fddu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E7u)), 0x0u);
    // 050fe4  call 0x51048
    X86_AT(c, 0x50fe4u);
    push32(c, 0x50fe9u); x86_call_known(c, 0x51048u, f_00051048); X86_RET(c, 0x50fe9u);
    X86_TICK(c, 12);
    // 050fe9  clc 
    X86_AT(c, 0x50fe9u);
    c.fl &= ~X86_CF;
    // 050fea  ret 
    X86_AT(c, 0x50feau);
    c.eip = pop32(c); return;
L_50feb:
    X86_TICK(c, 12);
    // 050feb  stc 
    X86_AT(c, 0x50febu);
    c.fl |= X86_CF;
    // 050fec  ret 
    X86_AT(c, 0x50fecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50fbdu, "ran off the end of a function");
}
void f_00050fed(X86Cpu& c) {
    X86_TICK(c, 57);
    // 050fed  movzx ebx, al
    X86_AT(c, 0x50fedu);
    c.r[3] = g8(c, 0);
    // 050ff0  and al, 0xf
    X86_AT(c, 0x50ff0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 050ff2  inc al
    X86_AT(c, 0x50ff2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 050ff4  shr ebx, 4
    X86_AT(c, 0x50ff4u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 050ff7  mov bx, word ptr cs:[ebx*2 + 0x5100d]
    X86_AT(c, 0x50ff7u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x5100Du))));
    // 051000  push eax
    X86_AT(c, 0x51000u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 051001  movzx ax, al
    X86_AT(c, 0x51001u);
    s16(c, 0, g8(c, 0));
    // 051005  mul bx
    X86_AT(c, 0x51005u);
    x86_mul(c, (c.r[3] & 0xFFFFu), 2);
    // 051008  mov dx, ax
    X86_AT(c, 0x51008u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 05100b  pop eax
    X86_AT(c, 0x5100bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 05100c  ret 
    X86_AT(c, 0x5100cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50fedu, "ran off the end of a function");
}
void f_0005103e(X86Cpu& c) {
    X86_TICK(c, 17);
    // 05103e  movzx ebx, dl
    X86_AT(c, 0x5103eu);
    c.r[3] = g8(c, 2);
    // 051041  mov bl, byte ptr [ebx + 0x4a725]
    X86_AT(c, 0x51041u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x4A725u))));
    // 051047  ret 
    X86_AT(c, 0x51047u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5103eu, "ran off the end of a function");
}
void f_00051048(X86Cpu& c) {
    X86_TICK(c, 39);
    // 051048  pushal 
    X86_AT(c, 0x51048u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 051049  mov al, byte ptr [0x4a946]
    X86_AT(c, 0x51049u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4A946u))));
    // 05104e  push eax
    X86_AT(c, 0x5104eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05104f  mov byte ptr [0x4a946], 0xff
    X86_AT(c, 0x5104fu);
    wr8((c.sbase[3] + (uint32_t)(0x4A946u)), 0xFFu);
    // 051056  movzx ecx, word ptr [0x4a6f0]
    X86_AT(c, 0x51056u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0x4A6F0u)));
    // 05105d  or ecx, ecx
    X86_AT(c, 0x5105du);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 05105f  je 0x51091
    X86_AT(c, 0x5105fu);
    if (x86_cc(c, 4)) { goto L_51091; }
    X86_TICK(c, 2);
    // 051061  lea edi, [0x4a7a5]
    X86_AT(c, 0x51061u);
    c.r[7] = (uint32_t)(0x4A7A5u);
L_51067:
    X86_TICK(c, 12);
    // 051067  cmp byte ptr [edi], 0
    X86_AT(c, 0x51067u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 05106a  jne 0x51071
    X86_AT(c, 0x5106au);
    if (x86_cc(c, 5)) { goto L_51071; }
    X86_TICK(c, 9);
    // 05106c  add edi, 6
    X86_AT(c, 0x5106cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 05106f  jmp 0x51067
    X86_AT(c, 0x5106fu);
    X86_POLL(c, 0x51067u); goto L_51067;
L_51071:
    X86_TICK(c, 28);
    // 051071  push ecx
    X86_AT(c, 0x51071u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 051072  xor ch, ch
    X86_AT(c, 0x51072u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 051074  xchg byte ptr [edi], ch
    X86_AT(c, 0x51074u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 051076  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0x51076u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 051079  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0x51079u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 05107c  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0x5107cu);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 05107f  call 0x517c3
    X86_AT(c, 0x5107fu);
    push32(c, 0x51084u); x86_call_known(c, 0x517c3u, f_000517c3); X86_RET(c, 0x51084u);
    X86_TICK(c, 23);
    // 051084  pop ecx
    X86_AT(c, 0x51084u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 051085  add edi, 6
    X86_AT(c, 0x51085u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 051088  dec word ptr [0x4a6f0]
    X86_AT(c, 0x51088u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6F0u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 05108f  loop 0x51067
    X86_AT(c, 0x5108fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x51067u); goto L_51067; }
L_51091:
    X86_TICK(c, 40);
    // 051091  pop eax
    X86_AT(c, 0x51091u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 051092  mov byte ptr [0x4a946], al
    X86_AT(c, 0x51092u);
    wr8((c.sbase[3] + (uint32_t)(0x4A946u)), g8(c, 0));
    // 051097  popal 
    X86_AT(c, 0x51097u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 051098  ret 
    X86_AT(c, 0x51098u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51048u, "ran off the end of a function");
}
void f_00051099(X86Cpu& c) {
    X86_TICK(c, 8);
    // 051099  push ebx
    X86_AT(c, 0x51099u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05109a  push ecx
    X86_AT(c, 0x5109au);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 05109b  mov ecx, 8
    X86_AT(c, 0x5109bu);
    c.r[1] = 0x8u;
    // 0510a0  lea ebx, [0x4a955]
    X86_AT(c, 0x510a0u);
    c.r[3] = (uint32_t)(0x4A955u);
L_510a6:
    X86_TICK(c, 15);
    // 0510a6  mov byte ptr [ebx + 0x1b], 0
    X86_AT(c, 0x510a6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), 0x0u);
    // 0510aa  add ebx, 0x20
    X86_AT(c, 0x510aau);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x20u, 0, 4); }
    // 0510ad  loop 0x510a6
    X86_AT(c, 0x510adu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x510a6u); goto L_510a6; }
    X86_TICK(c, 18);
    // 0510af  pop ecx
    X86_AT(c, 0x510afu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0510b0  pop ebx
    X86_AT(c, 0x510b0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0510b1  ret 
    X86_AT(c, 0x510b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51099u, "ran off the end of a function");
}
void f_000510b2(X86Cpu& c) {
    X86_TICK(c, 69);
    // 0510b2  push es
    X86_AT(c, 0x510b2u);
    push32(c, c.sreg[0]);
    // 0510b3  pushal 
    X86_AT(c, 0x510b3u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0510b4  push ds
    X86_AT(c, 0x510b4u);
    push32(c, c.sreg[3]);
    // 0510b5  pop es
    X86_AT(c, 0x510b5u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0510b6  mov al, 0xff
    X86_AT(c, 0x510b6u);
    s8(c, 0, 0xFFu);
    // 0510b8  lea edi, [0x4a705]
    X86_AT(c, 0x510b8u);
    c.r[7] = (uint32_t)(0x4A705u);
    // 0510be  mov ecx, 0x20
    X86_AT(c, 0x510beu);
    c.r[1] = 0x20u;
    // 0510c3  stosb byte ptr es:[edi], al
    X86_AT(c, 0x510c3u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0510c5  mov al, 0xff
    X86_AT(c, 0x510c5u);
    s8(c, 0, 0xFFu);
    // 0510c7  lea edi, [0x4a725]
    X86_AT(c, 0x510c7u);
    c.r[7] = (uint32_t)(0x4A725u);
    // 0510cd  mov ecx, 0x10
    X86_AT(c, 0x510cdu);
    c.r[1] = 0x10u;
    // 0510d2  stosb byte ptr es:[edi], al
    X86_AT(c, 0x510d2u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0510d4  xor al, al
    X86_AT(c, 0x510d4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0510d6  mov ecx, 0x10
    X86_AT(c, 0x510d6u);
    c.r[1] = 0x10u;
    // 0510db  stosb byte ptr es:[edi], al
    X86_AT(c, 0x510dbu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0510dd  xor al, al
    X86_AT(c, 0x510ddu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0510df  lea edi, [0x4a745]
    X86_AT(c, 0x510dfu);
    c.r[7] = (uint32_t)(0x4A745u);
    // 0510e5  mov ecx, 0x20
    X86_AT(c, 0x510e5u);
    c.r[1] = 0x20u;
L_510ea:
    X86_TICK(c, 22);
    // 0510ea  stosb byte ptr es:[edi], al
    X86_AT(c, 0x510eau);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0510eb  inc al
    X86_AT(c, 0x510ebu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0510ed  and al, 0xf
    X86_AT(c, 0x510edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0510ef  loop 0x510ea
    X86_AT(c, 0x510efu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x510eau); goto L_510ea; }
    X86_TICK(c, 64);
    // 0510f1  xor al, al
    X86_AT(c, 0x510f1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0510f3  lea edi, [0x4a765]
    X86_AT(c, 0x510f3u);
    c.r[7] = (uint32_t)(0x4A765u);
    // 0510f9  mov ecx, 0x20
    X86_AT(c, 0x510f9u);
    c.r[1] = 0x20u;
    // 0510fe  stosb byte ptr es:[edi], al
    X86_AT(c, 0x510feu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 051100  xor al, al
    X86_AT(c, 0x51100u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 051102  lea edi, [0x4a785]
    X86_AT(c, 0x51102u);
    c.r[7] = (uint32_t)(0x4A785u);
    // 051108  mov ecx, 0x20
    X86_AT(c, 0x51108u);
    c.r[1] = 0x20u;
    // 05110d  stosb byte ptr es:[edi], al
    X86_AT(c, 0x5110du);
    x86_string(c, 2, 1, 243, 4, 3);
    // 05110f  popal 
    X86_AT(c, 0x5110fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 051110  pop es
    X86_AT(c, 0x51110u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 051111  ret 
    X86_AT(c, 0x51111u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x510b2u, "ran off the end of a function");
}
void f_00051112(X86Cpu& c) {
    X86_TICK(c, 26);
    // 051112  pushal 
    X86_AT(c, 0x51112u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 051113  xor eax, eax
    X86_AT(c, 0x51113u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 051115  mov word ptr [0x4a6f0], ax
    X86_AT(c, 0x51115u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6F0u)), (c.r[0] & 0xFFFFu));
    // 05111b  mov ecx, 0x40
    X86_AT(c, 0x5111bu);
    c.r[1] = 0x40u;
    // 051120  lea edi, [0x4a7a5]
    X86_AT(c, 0x51120u);
    c.r[7] = (uint32_t)(0x4A7A5u);
L_51126:
    X86_TICK(c, 17);
    // 051126  mov dword ptr [edi], eax
    X86_AT(c, 0x51126u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 051128  mov word ptr [edi + 4], ax
    X86_AT(c, 0x51128u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 05112c  add edi, 6
    X86_AT(c, 0x5112cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 05112f  loop 0x51126
    X86_AT(c, 0x5112fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x51126u); goto L_51126; }
    X86_TICK(c, 34);
    // 051131  popal 
    X86_AT(c, 0x51131u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 051132  ret 
    X86_AT(c, 0x51132u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51112u, "ran off the end of a function");
}
void f_00051133(X86Cpu& c) {
    X86_TICK(c, 50);
    // 051133  xor eax, eax
    X86_AT(c, 0x51133u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 051135  mov byte ptr [0x4a946], al
    X86_AT(c, 0x51135u);
    wr8((c.sbase[3] + (uint32_t)(0x4A946u)), g8(c, 0));
    // 05113a  mov byte ptr [0x4a948], al
    X86_AT(c, 0x5113au);
    wr8((c.sbase[3] + (uint32_t)(0x4A948u)), g8(c, 0));
    // 05113f  mov byte ptr [0x4a947], al
    X86_AT(c, 0x5113fu);
    wr8((c.sbase[3] + (uint32_t)(0x4A947u)), g8(c, 0));
    // 051144  mov byte ptr [0x4a700], 0
    X86_AT(c, 0x51144u);
    wr8((c.sbase[3] + (uint32_t)(0x4A700u)), 0x0u);
    // 05114b  mov byte ptr [0x4a6e6], al
    X86_AT(c, 0x5114bu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E6u)), g8(c, 0));
    // 051150  mov byte ptr [0x4a6e7], al
    X86_AT(c, 0x51150u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E7u)), g8(c, 0));
    // 051155  mov byte ptr [0x4a6e8], al
    X86_AT(c, 0x51155u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E8u)), g8(c, 0));
    // 05115a  mov byte ptr [0x4a6e9], al
    X86_AT(c, 0x5115au);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E9u)), g8(c, 0));
    // 05115f  mov byte ptr [0x4a6ea], al
    X86_AT(c, 0x5115fu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EAu)), g8(c, 0));
    // 051164  mov byte ptr [0x4a6eb], al
    X86_AT(c, 0x51164u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EBu)), g8(c, 0));
    // 051169  mov byte ptr [0x4a6ec], al
    X86_AT(c, 0x51169u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6ECu)), g8(c, 0));
    // 05116e  mov byte ptr [0x4a6ed], al
    X86_AT(c, 0x5116eu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EDu)), g8(c, 0));
    // 051173  mov byte ptr [0x4a6ee], al
    X86_AT(c, 0x51173u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EEu)), g8(c, 0));
    // 051178  mov byte ptr [0x4a6ef], al
    X86_AT(c, 0x51178u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EFu)), g8(c, 0));
    // 05117d  lea edi, [0x4a701]
    X86_AT(c, 0x5117du);
    c.r[7] = (uint32_t)(0x4A701u);
    // 051183  mov byte ptr [edi], 0
    X86_AT(c, 0x51183u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 051186  mov byte ptr [edi + 1], 1
    X86_AT(c, 0x51186u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0x1u);
    // 05118a  mov byte ptr [edi + 2], 2
    X86_AT(c, 0x5118au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x2u);
    // 05118e  mov byte ptr [edi + 3], 3
    X86_AT(c, 0x5118eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x3u);
    // 051192  ret 
    X86_AT(c, 0x51192u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51133u, "ran off the end of a function");
}
void f_00051193(X86Cpu& c) {
    X86_TICK(c, 34);
    // 051193  mov word ptr [0x4a6f9], 0
    X86_AT(c, 0x51193u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6F9u)), 0x0u);
    // 05119c  mov word ptr [0x4a6f5], 0
    X86_AT(c, 0x5119cu);
    wr16((c.sbase[3] + (uint32_t)(0x4A6F5u)), 0x0u);
    // 0511a5  mov word ptr [0x4a6f7], 0x10
    X86_AT(c, 0x511a5u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6F7u)), 0x10u);
    // 0511ae  mov al, 0x33
    X86_AT(c, 0x511aeu);
    s8(c, 0, 0x33u);
    // 0511b0  mov byte ptr [0x4a6e4], al
    X86_AT(c, 0x511b0u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E4u)), g8(c, 0));
    // 0511b5  mov byte ptr [0x4a6d8], al
    X86_AT(c, 0x511b5u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6D8u)), g8(c, 0));
    // 0511ba  mov word ptr [0x4a6d3], ax
    X86_AT(c, 0x511bau);
    wr16((c.sbase[3] + (uint32_t)(0x4A6D3u)), (c.r[0] & 0xFFFFu));
    // 0511c0  mov byte ptr [0x4a6d7], al
    X86_AT(c, 0x511c0u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6D7u)), g8(c, 0));
    // 0511c5  mov word ptr [0x4a6d5], ax
    X86_AT(c, 0x511c5u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6D5u)), (c.r[0] & 0xFFFFu));
    // 0511cb  mov al, 0x5a
    X86_AT(c, 0x511cbu);
    s8(c, 0, 0x5Au);
    // 0511cd  mov byte ptr [0x4a6e5], al
    X86_AT(c, 0x511cdu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E5u)), g8(c, 0));
    // 0511d2  mov byte ptr [0x4a6d9], al
    X86_AT(c, 0x511d2u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6D9u)), g8(c, 0));
    // 0511d7  ret 
    X86_AT(c, 0x511d7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51193u, "ran off the end of a function");
}
void f_000511d8(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0511d8  mov byte ptr [0x4a6f3], 0
    X86_AT(c, 0x511d8u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6F3u)), 0x0u);
    // 0511df  mov byte ptr [0x4a6f2], 0xff
    X86_AT(c, 0x511dfu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6F2u)), 0xFFu);
    // 0511e6  mov byte ptr [0x4a6f4], 0
    X86_AT(c, 0x511e6u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6F4u)), 0x0u);
    // 0511ed  ret 
    X86_AT(c, 0x511edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x511d8u, "ran off the end of a function");
}
void f_000511ee(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0511ee  cld 
    X86_AT(c, 0x511eeu);
    c.fl &= ~X86_DF;
    // 0511ef  call 0x51300
    X86_AT(c, 0x511efu);
    push32(c, 0x511f4u); x86_call_known(c, 0x51300u, f_00051300); X86_RET(c, 0x511f4u);
    X86_TICK(c, 7);
    // 0511f4  call 0x51240
    X86_AT(c, 0x511f4u);
    push32(c, 0x511f9u); x86_call_known(c, 0x51240u, f_00051240); X86_RET(c, 0x511f9u);
    X86_TICK(c, 7);
    // 0511f9  call 0x512a0
    X86_AT(c, 0x511f9u);
    push32(c, 0x511feu); x86_call_known(c, 0x512a0u, f_000512a0); X86_RET(c, 0x511feu);
L_511fe:
    X86_TICK(c, 12);
    // 0511fe  cmp word ptr [0x4a6f9], 0
    X86_AT(c, 0x511feu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4A6F9u))), 0x0u, 0, 2);
    // 051206  je 0x5123f
    X86_AT(c, 0x51206u);
    if (x86_cc(c, 4)) { goto L_5123f; }
    X86_TICK(c, 13);
    // 051208  dec word ptr [0x4a6f9]
    X86_AT(c, 0x51208u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6F9u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 05120f  call 0x5134b
    X86_AT(c, 0x5120fu);
    push32(c, 0x51214u); x86_call_known(c, 0x5134bu, f_0005134b); X86_RET(c, 0x51214u);
    X86_TICK(c, 5);
    // 051214  jb 0x511fe
    X86_AT(c, 0x51214u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x511feu); goto L_511fe; }
    X86_TICK(c, 12);
    // 051216  cmp byte ptr [0x4a6e6], 0
    X86_AT(c, 0x51216u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6E6u))), 0x0u, 0, 1);
    // 05121d  je 0x511fe
    X86_AT(c, 0x5121du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x511feu); goto L_511fe; }
    X86_TICK(c, 7);
    // 05121f  call 0x51781
    X86_AT(c, 0x5121fu);
    push32(c, 0x51224u); x86_call_known(c, 0x51781u, f_00051781); X86_RET(c, 0x51224u);
    X86_TICK(c, 7);
    // 051224  call 0x513ad
    X86_AT(c, 0x51224u);
    push32(c, 0x51229u); x86_call_known(c, 0x513adu, f_000513ad); X86_RET(c, 0x51229u);
    X86_TICK(c, 7);
    // 051229  call 0x51332
    X86_AT(c, 0x51229u);
    push32(c, 0x5122eu); x86_call_known(c, 0x51332u, f_00051332); X86_RET(c, 0x5122eu);
    X86_TICK(c, 7);
    // 05122e  call 0x51300
    X86_AT(c, 0x5122eu);
    push32(c, 0x51233u); x86_call_known(c, 0x51300u, f_00051300); X86_RET(c, 0x51233u);
    X86_TICK(c, 7);
    // 051233  call 0x51240
    X86_AT(c, 0x51233u);
    push32(c, 0x51238u); x86_call_known(c, 0x51240u, f_00051240); X86_RET(c, 0x51238u);
    X86_TICK(c, 7);
    // 051238  call 0x512a0
    X86_AT(c, 0x51238u);
    push32(c, 0x5123du); x86_call_known(c, 0x512a0u, f_000512a0); X86_RET(c, 0x5123du);
    X86_TICK(c, 7);
    // 05123d  jmp 0x511fe
    X86_AT(c, 0x5123du);
    X86_POLL(c, 0x511feu); goto L_511fe;
L_5123f:
    X86_TICK(c, 10);
    // 05123f  ret 
    X86_AT(c, 0x5123fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x511eeu, "ran off the end of a function");
}
void f_00051240(X86Cpu& c) {
    X86_TICK(c, 12);
    // 051240  cmp byte ptr [0x4a6ea], 0
    X86_AT(c, 0x51240u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6EAu))), 0x0u, 0, 1);
    // 051247  je 0x5125e
    X86_AT(c, 0x51247u);
    if (x86_cc(c, 4)) { goto L_5125e; }
    X86_TICK(c, 6);
    // 051249  mov byte ptr [0x4a6ea], 0
    X86_AT(c, 0x51249u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EAu)), 0x0u);
    // 051250  mov byte ptr [0x4a6e8], 0
    X86_AT(c, 0x51250u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E8u)), 0x0u);
    // 051257  mov byte ptr [0x4a6ed], 0xff
    X86_AT(c, 0x51257u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EDu)), 0xFFu);
L_5125e:
    X86_TICK(c, 12);
    // 05125e  cmp byte ptr [0x4a6eb], 0
    X86_AT(c, 0x5125eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6EBu))), 0x0u, 0, 1);
    // 051265  je 0x5127c
    X86_AT(c, 0x51265u);
    if (x86_cc(c, 4)) { goto L_5127c; }
    X86_TICK(c, 6);
    // 051267  mov byte ptr [0x4a6eb], 0
    X86_AT(c, 0x51267u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EBu)), 0x0u);
    // 05126e  mov byte ptr [0x4a6e8], 0
    X86_AT(c, 0x5126eu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E8u)), 0x0u);
    // 051275  mov byte ptr [0x4a6ee], 0xff
    X86_AT(c, 0x51275u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EEu)), 0xFFu);
L_5127c:
    X86_TICK(c, 12);
    // 05127c  cmp byte ptr [0x4a6ec], 0
    X86_AT(c, 0x5127cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6ECu))), 0x0u, 0, 1);
    // 051283  je 0x5129f
    X86_AT(c, 0x51283u);
    if (x86_cc(c, 4)) { goto L_5129f; }
    X86_TICK(c, 13);
    // 051285  mov byte ptr [0x4a6ec], 0
    X86_AT(c, 0x51285u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6ECu)), 0x0u);
    // 05128c  mov byte ptr [0x4a6e8], 0xff
    X86_AT(c, 0x5128cu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E8u)), 0xFFu);
    // 051293  mov byte ptr [0x4a6ef], 0xff
    X86_AT(c, 0x51293u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EFu)), 0xFFu);
    // 05129a  call 0x51048
    X86_AT(c, 0x5129au);
    push32(c, 0x5129fu); x86_call_known(c, 0x51048u, f_00051048); X86_RET(c, 0x5129fu);
L_5129f:
    X86_TICK(c, 10);
    // 05129f  ret 
    X86_AT(c, 0x5129fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51240u, "ran off the end of a function");
}
void f_000512a0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0512a0  push ax
    X86_AT(c, 0x512a0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0512a2  cmp byte ptr [0x4a6ed], 0
    X86_AT(c, 0x512a2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6EDu))), 0x0u, 0, 1);
    // 0512a9  je 0x512b9
    X86_AT(c, 0x512a9u);
    if (x86_cc(c, 4)) { goto L_512b9; }
    X86_TICK(c, 11);
    // 0512ab  mov byte ptr [0x4a6ed], 0
    X86_AT(c, 0x512abu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EDu)), 0x0u);
    // 0512b2  mov al, 0xfa
    X86_AT(c, 0x512b2u);
    s8(c, 0, 0xFAu);
    // 0512b4  call 0x51ccf
    X86_AT(c, 0x512b4u);
    push32(c, 0x512b9u); x86_call_known(c, 0x51ccfu, f_00051ccf); X86_RET(c, 0x512b9u);
L_512b9:
    X86_TICK(c, 12);
    // 0512b9  cmp byte ptr [0x4a6ee], 0
    X86_AT(c, 0x512b9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6EEu))), 0x0u, 0, 1);
    // 0512c0  je 0x512d0
    X86_AT(c, 0x512c0u);
    if (x86_cc(c, 4)) { goto L_512d0; }
    X86_TICK(c, 11);
    // 0512c2  mov byte ptr [0x4a6ee], 0
    X86_AT(c, 0x512c2u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EEu)), 0x0u);
    // 0512c9  mov al, 0xfb
    X86_AT(c, 0x512c9u);
    s8(c, 0, 0xFBu);
    // 0512cb  call 0x51ccf
    X86_AT(c, 0x512cbu);
    push32(c, 0x512d0u); x86_call_known(c, 0x51ccfu, f_00051ccf); X86_RET(c, 0x512d0u);
L_512d0:
    X86_TICK(c, 12);
    // 0512d0  cmp byte ptr [0x4a6ef], 0
    X86_AT(c, 0x512d0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6EFu))), 0x0u, 0, 1);
    // 0512d7  je 0x512e7
    X86_AT(c, 0x512d7u);
    if (x86_cc(c, 4)) { goto L_512e7; }
    X86_TICK(c, 11);
    // 0512d9  mov byte ptr [0x4a6ef], 0
    X86_AT(c, 0x512d9u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6EFu)), 0x0u);
    // 0512e0  mov al, 0xfc
    X86_AT(c, 0x512e0u);
    s8(c, 0, 0xFCu);
    // 0512e2  call 0x51ccf
    X86_AT(c, 0x512e2u);
    push32(c, 0x512e7u); x86_call_known(c, 0x51ccfu, f_00051ccf); X86_RET(c, 0x512e7u);
L_512e7:
    X86_TICK(c, 12);
    // 0512e7  cmp byte ptr [0x4a6f3], 0
    X86_AT(c, 0x512e7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6F3u))), 0x0u, 0, 1);
    // 0512ee  je 0x512fd
    X86_AT(c, 0x512eeu);
    if (x86_cc(c, 4)) { goto L_512fd; }
    X86_TICK(c, 15);
    // 0512f0  dec byte ptr [0x4a6f3]
    X86_AT(c, 0x512f0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6F3u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0512f6  mov al, 0xf8
    X86_AT(c, 0x512f6u);
    s8(c, 0, 0xF8u);
    // 0512f8  call 0x51ccf
    X86_AT(c, 0x512f8u);
    push32(c, 0x512fdu); x86_call_known(c, 0x51ccfu, f_00051ccf); X86_RET(c, 0x512fdu);
L_512fd:
    X86_TICK(c, 14);
    // 0512fd  pop ax
    X86_AT(c, 0x512fdu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0512ff  ret 
    X86_AT(c, 0x512ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x512a0u, "ran off the end of a function");
}
void f_00051300(X86Cpu& c) {
    X86_TICK(c, 81);
    // 051300  mov dx, 0xe71
    X86_AT(c, 0x51300u);
    s16(c, 2, 0xE71u);
    // 051304  nop 
    X86_AT(c, 0x51304u);
    // 051305  nop 
    X86_AT(c, 0x51305u);
    // 051306  nop 
    X86_AT(c, 0x51306u);
    // 051307  pushf 
    X86_AT(c, 0x51307u);
    push16(c, c.fl & 0xFFFFu);
    // 051309  cli 
    X86_AT(c, 0x51309u);
    c.fl &= ~X86_IF;
    // 05130a  in al, dx
    X86_AT(c, 0x5130au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 05130b  mov ah, byte ptr [0x4a927]
    X86_AT(c, 0x5130bu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0x4A927u))));
    // 051311  and al, 0xf0
    X86_AT(c, 0x51311u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 051313  or al, ah
    X86_AT(c, 0x51313u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 4), 1)); }
    // 051315  out dx, al
    X86_AT(c, 0x51315u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 051316  mov byte ptr [0x4a927], al
    X86_AT(c, 0x51316u);
    wr8((c.sbase[3] + (uint32_t)(0x4A927u)), g8(c, 0));
    // 05131b  mov al, byte ptr [0x4a928]
    X86_AT(c, 0x5131bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4A928u))));
    // 051320  mov byte ptr [0x4a928], 0
    X86_AT(c, 0x51320u);
    wr8((c.sbase[3] + (uint32_t)(0x4A928u)), 0x0u);
    // 051327  popf 
    X86_AT(c, 0x51327u);
    x86_popfd(c, 2);
    // 051329  and al, 0xf0
    X86_AT(c, 0x51329u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 05132b  or byte ptr [0x4a700], al
    X86_AT(c, 0x5132bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A700u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 051331  ret 
    X86_AT(c, 0x51331u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51300u, "ran off the end of a function");
}
void f_00051332(X86Cpu& c) {
    X86_TICK(c, 12);
    // 051332  cmp byte ptr [0x4a6e7], 0
    X86_AT(c, 0x51332u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6E7u))), 0x0u, 0, 1);
    // 051339  je 0x5134a
    X86_AT(c, 0x51339u);
    if (x86_cc(c, 4)) { goto L_5134a; }
    X86_TICK(c, 12);
    // 05133b  cmp word ptr [0x4a6f0], 0
    X86_AT(c, 0x5133bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4A6F0u))), 0x0u, 0, 2);
    // 051343  jne 0x5134a
    X86_AT(c, 0x51343u);
    if (x86_cc(c, 5)) { goto L_5134a; }
    X86_TICK(c, 7);
    // 051345  call 0x50fbd
    X86_AT(c, 0x51345u);
    push32(c, 0x5134au); x86_call_known(c, 0x50fbdu, f_00050fbd); X86_RET(c, 0x5134au);
L_5134a:
    X86_TICK(c, 10);
    // 05134a  ret 
    X86_AT(c, 0x5134au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51332u, "ran off the end of a function");
}
void f_0005134b(X86Cpu& c) {
    X86_TICK(c, 88);
    // 05134b  inc word ptr [0x4a6d5]
    X86_AT(c, 0x5134bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6D5u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 051352  movzx ebx, byte ptr [0x4a6d9]
    X86_AT(c, 0x51352u);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0x4A6D9u)));
    // 051359  movzx eax, word ptr cs:[ebx*2 + 0x517e2]
    X86_AT(c, 0x51359u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x517E2u)));
    // 051362  add eax, dword ptr [0x4a6da]
    X86_AT(c, 0x51362u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x4A6DAu))), 0, 4); }
    // 051368  xor edx, edx
    X86_AT(c, 0x51368u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 05136a  mov ebx, 0x1f4
    X86_AT(c, 0x5136au);
    c.r[3] = 0x1F4u;
    // 05136f  div ebx
    X86_AT(c, 0x5136fu);
    x86_div(c, c.r[3], 4, 0x5136fu);
    // 051371  mov dword ptr [0x4a6da], edx
    X86_AT(c, 0x51371u);
    wr32((c.sbase[3] + (uint32_t)(0x4A6DAu)), c.r[2]);
    // 051377  add dword ptr [0x4a6de], eax
    X86_AT(c, 0x51377u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6DEu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 05137d  mov al, byte ptr [0x4a6d8]
    X86_AT(c, 0x5137du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4A6D8u))));
    // 051382  call 0x50fed
    X86_AT(c, 0x51382u);
    push32(c, 0x51387u); x86_call_known(c, 0x50fedu, f_00050fed); X86_RET(c, 0x51387u);
    X86_TICK(c, 11);
    // 051387  cmp dx, word ptr [0x4a6d5]
    X86_AT(c, 0x51387u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0x4A6D5u))), 0, 2);
    // 05138e  ja 0x513a4
    X86_AT(c, 0x5138eu);
    if (x86_cc(c, 7)) { goto L_513a4; }
    X86_TICK(c, 12);
    // 051390  inc word ptr [0x4a6d3]
    X86_AT(c, 0x51390u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6D3u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 051397  xor eax, eax
    X86_AT(c, 0x51397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 051399  mov word ptr [0x4a6d5], ax
    X86_AT(c, 0x51399u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6D5u)), (c.r[0] & 0xFFFFu));
    // 05139f  mov byte ptr [0x4a6d7], al
    X86_AT(c, 0x5139fu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6D7u)), g8(c, 0));
L_513a4:
    X86_TICK(c, 12);
    // 0513a4  clc 
    X86_AT(c, 0x513a4u);
    c.fl &= ~X86_CF;
    // 0513a5  ret 
    X86_AT(c, 0x513a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5134bu, "ran off the end of a function");
}
void f_000513ad(X86Cpu& c) {
L_513ad:
    X86_TICK(c, 17);
    // 0513ad  les esi, fword ptr [0x4a6c1]
    X86_AT(c, 0x513adu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6C1u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[6] = o; }
    // 0513b3  mov al, byte ptr es:[esi]
    X86_AT(c, 0x513b3u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0513b6  cmp al, 0xff
    X86_AT(c, 0x513b6u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0513b8  je 0x513c2
    X86_AT(c, 0x513b8u);
    if (x86_cc(c, 4)) { goto L_513c2; }
    X86_TICK(c, 7);
    // 0513ba  cmp al, 0xf7
    X86_AT(c, 0x513bau);
    (void)x86_sub(c, g8(c, 0), 0xF7u, 0, 1);
    // 0513bc  je 0x513c2
    X86_AT(c, 0x513bcu);
    if (x86_cc(c, 4)) { goto L_513c2; }
    X86_TICK(c, 7);
    // 0513be  cmp al, 0x90
    X86_AT(c, 0x513beu);
    (void)x86_sub(c, g8(c, 0), 0x90u, 0, 1);
    // 0513c0  jae 0x513c9
    X86_AT(c, 0x513c0u);
    if (x86_cc(c, 3)) { goto L_513c9; }
L_513c2:
    X86_TICK(c, 7);
    // 0513c2  call 0x516b5
    X86_AT(c, 0x513c2u);
    push32(c, 0x513c7u); x86_call_known(c, 0x516b5u, f_000516b5); X86_RET(c, 0x513c7u);
    X86_TICK(c, 7);
    // 0513c7  jmp 0x513ad
    X86_AT(c, 0x513c7u);
    X86_POLL(c, 0x513adu); goto L_513ad;
L_513c9:
    X86_TICK(c, 15);
    // 0513c9  mov dx, word ptr [0x4a6e2]
    X86_AT(c, 0x513c9u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x4A6E2u))));
    // 0513d0  cmp dx, word ptr [0x4a6d3]
    X86_AT(c, 0x513d0u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0x4A6D3u))), 0, 2);
    // 0513d7  ja 0x513fe
    X86_AT(c, 0x513d7u);
    if (x86_cc(c, 7)) { goto L_513fe; }
    X86_TICK(c, 5);
    // 0513d9  je 0x513e4
    X86_AT(c, 0x513d9u);
    if (x86_cc(c, 4)) { goto L_513e4; }
    X86_TICK(c, 7);
    // 0513db  call 0x513ff
    X86_AT(c, 0x513dbu);
    push32(c, 0x513e0u); x86_call_known(c, 0x513ffu, f_000513ff); X86_RET(c, 0x513e0u);
    X86_TICK(c, 5);
    // 0513e0  jae 0x513ad
    X86_AT(c, 0x513e0u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x513adu); goto L_513ad; }
    X86_TICK(c, 7);
    // 0513e2  jmp 0x513fe
    X86_AT(c, 0x513e2u);
    goto L_513fe;
L_513e4:
    X86_TICK(c, 21);
    // 0513e4  mov dx, word ptr es:[esi + 2]
    X86_AT(c, 0x513e4u);
    s16(c, 2, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x2u))));
    // 0513e9  shl dl, 1
    X86_AT(c, 0x513e9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0513eb  shr dx, 1
    X86_AT(c, 0x513ebu);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 2, r); }
    // 0513ee  cmp dx, word ptr [0x4a6d5]
    X86_AT(c, 0x513eeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0x4A6D5u))), 0, 2);
    // 0513f5  ja 0x513fe
    X86_AT(c, 0x513f5u);
    if (x86_cc(c, 7)) { goto L_513fe; }
    X86_TICK(c, 7);
    // 0513f7  call 0x513ff
    X86_AT(c, 0x513f7u);
    push32(c, 0x513fcu); x86_call_known(c, 0x513ffu, f_000513ff); X86_RET(c, 0x513fcu);
    X86_TICK(c, 5);
    // 0513fc  jae 0x513ad
    X86_AT(c, 0x513fcu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x513adu); goto L_513ad; }
L_513fe:
    X86_TICK(c, 10);
    // 0513fe  ret 
    X86_AT(c, 0x513feu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x513adu, "ran off the end of a function");
}
void f_000513ff(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0513ff  cmp al, 0xfe
    X86_AT(c, 0x513ffu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 051401  je 0x5143d
    X86_AT(c, 0x51401u);
    if (x86_cc(c, 4)) { goto L_5143d; }
    X86_TICK(c, 7);
    // 051403  cmp al, 0xfd
    X86_AT(c, 0x51403u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 051405  je 0x5143d
    X86_AT(c, 0x51405u);
    if (x86_cc(c, 4)) { goto L_5143d; }
    X86_TICK(c, 10);
    // 051407  movzx ebx, al
    X86_AT(c, 0x51407u);
    c.r[3] = g8(c, 0);
    // 05140a  cmp al, 0xf0
    X86_AT(c, 0x5140au);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 05140c  jae 0x51428
    X86_AT(c, 0x5140cu);
    if (x86_cc(c, 3)) { goto L_51428; }
    X86_TICK(c, 12);
    // 05140e  sub ebx, 0x80
    X86_AT(c, 0x5140eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 051414  shr ebx, 4
    X86_AT(c, 0x51414u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 051417  call dword ptr cs:[ebx*4 + 0x51496]
    X86_AT(c, 0x51417u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x51496u))); push32(c, 0x5141fu);
      switch (t) {
      case 0x514f6u: x86_call_known(c, 0x514f6u, f_000514f6); break;
      case 0x514f8u: x86_call_known(c, 0x514f8u, f_000514f8); break;
      case 0x5152bu: x86_call_known(c, 0x5152bu, f_0005152b); break;
      case 0x51532u: x86_call_known(c, 0x51532u, f_00051532); break;
      case 0x51539u: x86_call_known(c, 0x51539u, f_00051539); break;
      case 0x51540u: x86_call_known(c, 0x51540u, f_00051540); break;
      case 0x51598u: x86_call_known(c, 0x51598u, f_00051598); break;
      case 0x5170cu: x86_call_known(c, 0x5170cu, f_0005170c); break;
      case 0x51755u: x86_call_known(c, 0x51755u, f_00051755); break;
      case 0x51757u: x86_call_known(c, 0x51757u, f_00051757); break;
      case 0x51759u: x86_call_known(c, 0x51759u, f_00051759); break;
      case 0x5176bu: x86_call_known(c, 0x5176bu, f_0005176b); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x5141fu); }
    X86_TICK(c, 5);
    // 05141f  jb 0x5143d
    X86_AT(c, 0x5141fu);
    if (x86_cc(c, 2)) { goto L_5143d; }
    X86_TICK(c, 7);
    // 051421  call 0x516b5
    X86_AT(c, 0x51421u);
    push32(c, 0x51426u); x86_call_known(c, 0x516b5u, f_000516b5); X86_RET(c, 0x51426u);
    X86_TICK(c, 12);
    // 051426  clc 
    X86_AT(c, 0x51426u);
    c.fl &= ~X86_CF;
    // 051427  ret 
    X86_AT(c, 0x51427u);
    c.eip = pop32(c); return;
L_51428:
    X86_TICK(c, 9);
    // 051428  sub ebx, 0xf0
    X86_AT(c, 0x51428u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0xF0u, 0, 4); }
    // 05142e  call dword ptr cs:[ebx*4 + 0x514b6]
    X86_AT(c, 0x5142eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x514B6u))); push32(c, 0x51436u);
      switch (t) {
      case 0x514f6u: x86_call_known(c, 0x514f6u, f_000514f6); break;
      case 0x5170cu: x86_call_known(c, 0x5170cu, f_0005170c); break;
      case 0x51755u: x86_call_known(c, 0x51755u, f_00051755); break;
      case 0x51757u: x86_call_known(c, 0x51757u, f_00051757); break;
      case 0x51759u: x86_call_known(c, 0x51759u, f_00051759); break;
      case 0x5176bu: x86_call_known(c, 0x5176bu, f_0005176b); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x51436u); }
    X86_TICK(c, 7);
    // 051436  call 0x516b5
    X86_AT(c, 0x51436u);
    push32(c, 0x5143bu); x86_call_known(c, 0x516b5u, f_000516b5); X86_RET(c, 0x5143bu);
    X86_TICK(c, 12);
    // 05143b  clc 
    X86_AT(c, 0x5143bu);
    c.fl &= ~X86_CF;
    // 05143c  ret 
    X86_AT(c, 0x5143cu);
    c.eip = pop32(c); return;
L_5143d:
    X86_TICK(c, 7);
    // 05143d  cmp al, 0xfd
    X86_AT(c, 0x5143du);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 05143f  je 0x51453
    X86_AT(c, 0x5143fu);
    if (x86_cc(c, 4)) { goto L_51453; }
    X86_TICK(c, 12);
    // 051441  cmp byte ptr [0x4a6e9], 0
    X86_AT(c, 0x51441u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6E9u))), 0x0u, 0, 1);
    // 051448  jne 0x5145c
    X86_AT(c, 0x51448u);
    if (x86_cc(c, 5)) { goto L_5145c; }
    X86_TICK(c, 14);
    // 05144a  mov byte ptr [0x4a6e7], 0xff
    X86_AT(c, 0x5144au);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E7u)), 0xFFu);
    // 051451  stc 
    X86_AT(c, 0x51451u);
    c.fl |= X86_CF;
    // 051452  ret 
    X86_AT(c, 0x51452u);
    c.eip = pop32(c); return;
L_51453:
    X86_TICK(c, 14);
    // 051453  mov byte ptr [0x4a6e8], 0xff
    X86_AT(c, 0x51453u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E8u)), 0xFFu);
    // 05145a  stc 
    X86_AT(c, 0x5145au);
    c.fl |= X86_CF;
    // 05145b  ret 
    X86_AT(c, 0x5145bu);
    c.eip = pop32(c); return;
L_5145c:
    X86_TICK(c, 32);
    // 05145c  mov byte ptr [0x4a6e7], 0
    X86_AT(c, 0x5145cu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6E7u)), 0x0u);
    // 051463  mov eax, dword ptr [0x4a6c7]
    X86_AT(c, 0x51463u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4A6C7u)));
    // 051468  mov dword ptr [0x4a6c1], eax
    X86_AT(c, 0x51468u);
    wr32((c.sbase[3] + (uint32_t)(0x4A6C1u)), c.r[0]);
    // 05146d  mov word ptr [0x4a6e2], 0
    X86_AT(c, 0x5146du);
    wr16((c.sbase[3] + (uint32_t)(0x4A6E2u)), 0x0u);
    // 051476  mov word ptr [0x4a6d3], 0
    X86_AT(c, 0x51476u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6D3u)), 0x0u);
    // 05147f  mov word ptr [0x4a6d5], 0
    X86_AT(c, 0x5147fu);
    wr16((c.sbase[3] + (uint32_t)(0x4A6D5u)), 0x0u);
    // 051488  mov dl, byte ptr [0x4a6e4]
    X86_AT(c, 0x51488u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0x4A6E4u))));
    // 05148e  mov byte ptr [0x4a6d8], dl
    X86_AT(c, 0x5148eu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6D8u)), g8(c, 2));
    // 051494  clc 
    X86_AT(c, 0x51494u);
    c.fl &= ~X86_CF;
    // 051495  ret 
    X86_AT(c, 0x51495u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x513ffu, "ran off the end of a function");
}
void f_000514f6(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0514f6  clc 
    X86_AT(c, 0x514f6u);
    c.fl &= ~X86_CF;
    // 0514f7  ret 
    X86_AT(c, 0x514f7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x514f6u, "ran off the end of a function");
}
void f_000514f8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0514f8  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x514f8u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0514fc  call 0x51627
    X86_AT(c, 0x514fcu);
    push32(c, 0x51501u); x86_call_known(c, 0x51627u, f_00051627); X86_RET(c, 0x51501u);
    X86_TICK(c, 5);
    // 051501  jb 0x51529
    X86_AT(c, 0x51501u);
    if (x86_cc(c, 2)) { goto L_51529; }
    X86_TICK(c, 7);
    // 051503  call 0x5103e
    X86_AT(c, 0x51503u);
    push32(c, 0x51508u); x86_call_known(c, 0x5103eu, f_0005103e); X86_RET(c, 0x51508u);
    X86_TICK(c, 7);
    // 051508  call 0x5163a
    X86_AT(c, 0x51508u);
    push32(c, 0x5150du); x86_call_known(c, 0x5163au, f_0005163a); X86_RET(c, 0x5150du);
    X86_TICK(c, 7);
    // 05150d  call 0x51c39
    X86_AT(c, 0x5150du);
    push32(c, 0x51512u); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x51512u);
    X86_TICK(c, 11);
    // 051512  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x51512u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 051516  call 0x51657
    X86_AT(c, 0x51516u);
    push32(c, 0x5151bu); x86_call_known(c, 0x51657u, f_00051657); X86_RET(c, 0x5151bu);
    X86_TICK(c, 7);
    // 05151b  call 0x51c39
    X86_AT(c, 0x5151bu);
    push32(c, 0x51520u); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x51520u);
    X86_TICK(c, 11);
    // 051520  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0x51520u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 051524  call 0x51c39
    X86_AT(c, 0x51524u);
    push32(c, 0x51529u); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x51529u);
L_51529:
    X86_TICK(c, 12);
    // 051529  clc 
    X86_AT(c, 0x51529u);
    c.fl &= ~X86_CF;
    // 05152a  ret 
    X86_AT(c, 0x5152au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x514f8u, "ran off the end of a function");
}
void f_0005152b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 05152b  call 0x5156b
    X86_AT(c, 0x5152bu);
    push32(c, 0x51530u); x86_call_known(c, 0x5156bu, f_0005156b); X86_RET(c, 0x51530u);
    X86_TICK(c, 12);
    // 051530  clc 
    X86_AT(c, 0x51530u);
    c.fl &= ~X86_CF;
    // 051531  ret 
    X86_AT(c, 0x51531u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5152bu, "ran off the end of a function");
}
void f_00051532(X86Cpu& c) {
    X86_TICK(c, 7);
    // 051532  call 0x51547
    X86_AT(c, 0x51532u);
    push32(c, 0x51537u); x86_call_known(c, 0x51547u, f_00051547); X86_RET(c, 0x51537u);
    X86_TICK(c, 12);
    // 051537  clc 
    X86_AT(c, 0x51537u);
    c.fl &= ~X86_CF;
    // 051538  ret 
    X86_AT(c, 0x51538u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51532u, "ran off the end of a function");
}
void f_00051539(X86Cpu& c) {
    X86_TICK(c, 7);
    // 051539  call 0x51547
    X86_AT(c, 0x51539u);
    push32(c, 0x5153eu); x86_call_known(c, 0x51547u, f_00051547); X86_RET(c, 0x5153eu);
    X86_TICK(c, 12);
    // 05153e  clc 
    X86_AT(c, 0x5153eu);
    c.fl &= ~X86_CF;
    // 05153f  ret 
    X86_AT(c, 0x5153fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51539u, "ran off the end of a function");
}
void f_00051540(X86Cpu& c) {
    X86_TICK(c, 7);
    // 051540  call 0x5156b
    X86_AT(c, 0x51540u);
    push32(c, 0x51545u); x86_call_known(c, 0x5156bu, f_0005156b); X86_RET(c, 0x51545u);
    X86_TICK(c, 12);
    // 051545  clc 
    X86_AT(c, 0x51545u);
    c.fl &= ~X86_CF;
    // 051546  ret 
    X86_AT(c, 0x51546u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51540u, "ran off the end of a function");
}
void f_00051547(X86Cpu& c) {
    X86_TICK(c, 11);
    // 051547  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x51547u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 05154b  call 0x51627
    X86_AT(c, 0x5154bu);
    push32(c, 0x51550u); x86_call_known(c, 0x51627u, f_00051627); X86_RET(c, 0x51550u);
    X86_TICK(c, 5);
    // 051550  jb 0x5156a
    X86_AT(c, 0x51550u);
    if (x86_cc(c, 2)) { goto L_5156a; }
    X86_TICK(c, 7);
    // 051552  call 0x5103e
    X86_AT(c, 0x51552u);
    push32(c, 0x51557u); x86_call_known(c, 0x5103eu, f_0005103e); X86_RET(c, 0x51557u);
    X86_TICK(c, 7);
    // 051557  call 0x5163a
    X86_AT(c, 0x51557u);
    push32(c, 0x5155cu); x86_call_known(c, 0x5163au, f_0005163a); X86_RET(c, 0x5155cu);
    X86_TICK(c, 7);
    // 05155c  call 0x51c39
    X86_AT(c, 0x5155cu);
    push32(c, 0x51561u); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x51561u);
    X86_TICK(c, 11);
    // 051561  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x51561u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 051565  call 0x51c39
    X86_AT(c, 0x51565u);
    push32(c, 0x5156au); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x5156au);
L_5156a:
    X86_TICK(c, 10);
    // 05156a  ret 
    X86_AT(c, 0x5156au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51547u, "ran off the end of a function");
}
void f_0005156b(X86Cpu& c) {
    X86_TICK(c, 11);
    // 05156b  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x5156bu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 05156f  call 0x51627
    X86_AT(c, 0x5156fu);
    push32(c, 0x51574u); x86_call_known(c, 0x51627u, f_00051627); X86_RET(c, 0x51574u);
    X86_TICK(c, 5);
    // 051574  jb 0x51597
    X86_AT(c, 0x51574u);
    if (x86_cc(c, 2)) { goto L_51597; }
    X86_TICK(c, 7);
    // 051576  call 0x5103e
    X86_AT(c, 0x51576u);
    push32(c, 0x5157bu); x86_call_known(c, 0x5103eu, f_0005103e); X86_RET(c, 0x5157bu);
    X86_TICK(c, 7);
    // 05157b  call 0x5163a
    X86_AT(c, 0x5157bu);
    push32(c, 0x51580u); x86_call_known(c, 0x5163au, f_0005163a); X86_RET(c, 0x51580u);
    X86_TICK(c, 7);
    // 051580  call 0x51c39
    X86_AT(c, 0x51580u);
    push32(c, 0x51585u); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x51585u);
    X86_TICK(c, 11);
    // 051585  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x51585u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 051589  call 0x51c39
    X86_AT(c, 0x51589u);
    push32(c, 0x5158eu); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x5158eu);
    X86_TICK(c, 11);
    // 05158e  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0x5158eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 051592  call 0x51c39
    X86_AT(c, 0x51592u);
    push32(c, 0x51597u); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x51597u);
L_51597:
    X86_TICK(c, 10);
    // 051597  ret 
    X86_AT(c, 0x51597u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5156bu, "ran off the end of a function");
}
void f_00051598(X86Cpu& c) {
    X86_TICK(c, 11);
    // 051598  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x51598u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 05159c  call 0x51627
    X86_AT(c, 0x5159cu);
    push32(c, 0x515a1u); x86_call_known(c, 0x51627u, f_00051627); X86_RET(c, 0x515a1u);
    X86_TICK(c, 5);
    // 0515a1  jae 0x515bd
    X86_AT(c, 0x515a1u);
    if (x86_cc(c, 3)) { goto L_515bd; }
    X86_TICK(c, 7);
    // 0515a3  call 0x516b5
    X86_AT(c, 0x515a3u);
    push32(c, 0x515a8u); x86_call_known(c, 0x516b5u, f_000516b5); X86_RET(c, 0x515a8u);
    X86_TICK(c, 11);
    // 0515a8  mov al, byte ptr es:[esi]
    X86_AT(c, 0x515a8u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0515ab  cmp al, 0xfe
    X86_AT(c, 0x515abu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0515ad  je 0x51625
    X86_AT(c, 0x515adu);
    if (x86_cc(c, 4)) { goto L_51625; }
    X86_TICK(c, 7);
    // 0515b3  cmp al, 0xfd
    X86_AT(c, 0x515b3u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0515b5  je 0x51625
    X86_AT(c, 0x515b5u);
    if (x86_cc(c, 4)) { goto L_51625; }
    X86_TICK(c, 12);
    // 0515bb  clc 
    X86_AT(c, 0x515bbu);
    c.fl &= ~X86_CF;
    // 0515bc  ret 
    X86_AT(c, 0x515bcu);
    c.eip = pop32(c); return;
L_515bd:
    X86_TICK(c, 7);
    // 0515bd  call 0x5103e
    X86_AT(c, 0x515bdu);
    push32(c, 0x515c2u); x86_call_known(c, 0x5103eu, f_0005103e); X86_RET(c, 0x515c2u);
    X86_TICK(c, 7);
    // 0515c2  call 0x5163a
    X86_AT(c, 0x515c2u);
    push32(c, 0x515c7u); x86_call_known(c, 0x5163au, f_0005163a); X86_RET(c, 0x515c7u);
    X86_TICK(c, 9);
    // 0515c7  mov ch, al
    X86_AT(c, 0x515c7u);
    s8(c, 5, g8(c, 0));
    // 0515c9  call 0x51c39
    X86_AT(c, 0x515c9u);
    push32(c, 0x515ceu); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x515ceu);
    X86_TICK(c, 11);
    // 0515ce  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0x515ceu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0515d2  call 0x51657
    X86_AT(c, 0x515d2u);
    push32(c, 0x515d7u); x86_call_known(c, 0x51657u, f_00051657); X86_RET(c, 0x515d7u);
    X86_TICK(c, 9);
    // 0515d7  mov cl, al
    X86_AT(c, 0x515d7u);
    s8(c, 1, g8(c, 0));
    // 0515d9  call 0x51c39
    X86_AT(c, 0x515d9u);
    push32(c, 0x515deu); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x515deu);
    X86_TICK(c, 11);
    // 0515de  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0x515deu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0515e2  call 0x5168a
    X86_AT(c, 0x515e2u);
    push32(c, 0x515e7u); x86_call_known(c, 0x5168au, f_0005168a); X86_RET(c, 0x515e7u);
    X86_TICK(c, 7);
    // 0515e7  call 0x51c39
    X86_AT(c, 0x515e7u);
    push32(c, 0x515ecu); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x515ecu);
    X86_TICK(c, 7);
    // 0515ec  call 0x516b5
    X86_AT(c, 0x515ecu);
    push32(c, 0x515f1u); x86_call_known(c, 0x516b5u, f_000516b5); X86_RET(c, 0x515f1u);
    X86_TICK(c, 11);
    // 0515f1  mov al, byte ptr es:[esi]
    X86_AT(c, 0x515f1u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0515f4  cmp al, 0xfe
    X86_AT(c, 0x515f4u);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0515f6  je 0x51625
    X86_AT(c, 0x515f6u);
    if (x86_cc(c, 4)) { goto L_51625; }
    X86_TICK(c, 7);
    // 0515f8  cmp al, 0xfd
    X86_AT(c, 0x515f8u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0515fa  je 0x51625
    X86_AT(c, 0x515fau);
    if (x86_cc(c, 4)) { goto L_51625; }
    X86_TICK(c, 39);
    // 0515fc  push bx
    X86_AT(c, 0x515fcu);
    { uint32_t v = (c.r[3] & 0xFFFFu); push16(c, v); }
    // 0515fe  mov ax, word ptr es:[esi + 1]
    X86_AT(c, 0x515feu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 051603  shl al, 4
    X86_AT(c, 0x51603u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 051606  shr ax, 4
    X86_AT(c, 0x51606u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 05160a  mov bx, word ptr es:[esi + 3]
    X86_AT(c, 0x5160au);
    s16(c, 3, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x3u))));
    // 05160f  shl bl, 4
    X86_AT(c, 0x5160fu);
    { uint32_t v = g8(c, 3); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 3, r); }
    // 051612  shr bx, 4
    X86_AT(c, 0x51612u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 3, r); }
    // 051616  mov ah, bl
    X86_AT(c, 0x51616u);
    s8(c, 4, g8(c, 3));
    // 051618  pop bx
    X86_AT(c, 0x51618u);
    { uint32_t v = pop16(c); s16(c, 3, v); }
    // 05161a  mov bh, byte ptr es:[esi + 5]
    X86_AT(c, 0x5161au);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 05161e  call 0x516cd
    X86_AT(c, 0x5161eu);
    push32(c, 0x51623u); x86_call_known(c, 0x516cdu, f_000516cd); X86_RET(c, 0x51623u);
    X86_TICK(c, 12);
    // 051623  clc 
    X86_AT(c, 0x51623u);
    c.fl &= ~X86_CF;
    // 051624  ret 
    X86_AT(c, 0x51624u);
    c.eip = pop32(c); return;
L_51625:
    X86_TICK(c, 12);
    // 051625  stc 
    X86_AT(c, 0x51625u);
    c.fl |= X86_CF;
    // 051626  ret 
    X86_AT(c, 0x51626u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51598u, "ran off the end of a function");
}
void f_00051627(X86Cpu& c) {
    X86_TICK(c, 17);
    // 051627  push ebx
    X86_AT(c, 0x51627u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 051628  movzx ebx, dl
    X86_AT(c, 0x51628u);
    c.r[3] = g8(c, 2);
    // 05162b  cmp byte ptr [ebx + 0x4a705], 0
    X86_AT(c, 0x5162bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x4A705u))), 0x0u, 0, 1);
    // 051632  je 0x51637
    X86_AT(c, 0x51632u);
    if (x86_cc(c, 4)) { goto L_51637; }
    X86_TICK(c, 16);
    // 051634  pop ebx
    X86_AT(c, 0x51634u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 051635  clc 
    X86_AT(c, 0x51635u);
    c.fl &= ~X86_CF;
    // 051636  ret 
    X86_AT(c, 0x51636u);
    c.eip = pop32(c); return;
L_51637:
    X86_TICK(c, 16);
    // 051637  pop ebx
    X86_AT(c, 0x51637u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 051638  stc 
    X86_AT(c, 0x51638u);
    c.fl |= X86_CF;
    // 051639  ret 
    X86_AT(c, 0x51639u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51627u, "ran off the end of a function");
}
void f_0005163a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 05163a  push ebx
    X86_AT(c, 0x5163au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05163b  cmp al, 0xf0
    X86_AT(c, 0x5163bu);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 05163d  jae 0x51655
    X86_AT(c, 0x5163du);
    if (x86_cc(c, 3)) { goto L_51655; }
    X86_TICK(c, 7);
    // 05163f  cmp al, 0x80
    X86_AT(c, 0x5163fu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 051641  jb 0x51655
    X86_AT(c, 0x51641u);
    if (x86_cc(c, 2)) { goto L_51655; }
    X86_TICK(c, 17);
    // 051643  movzx ebx, dl
    X86_AT(c, 0x51643u);
    c.r[3] = g8(c, 2);
    // 051646  lea ebx, [ebx + 0x4a745]
    X86_AT(c, 0x51646u);
    c.r[3] = (uint32_t)(c.r[3] + 0x4A745u);
    // 05164c  cmp byte ptr [ebx], 0xf
    X86_AT(c, 0x5164cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0xFu, 0, 1);
    // 05164f  ja 0x51655
    X86_AT(c, 0x5164fu);
    if (x86_cc(c, 7)) { goto L_51655; }
    X86_TICK(c, 8);
    // 051651  and al, 0xf0
    X86_AT(c, 0x51651u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 051653  or al, byte ptr [ebx]
    X86_AT(c, 0x51653u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 1)); }
L_51655:
    X86_TICK(c, 14);
    // 051655  pop ebx
    X86_AT(c, 0x51655u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 051656  ret 
    X86_AT(c, 0x51656u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5163au, "ran off the end of a function");
}
void f_00051657(X86Cpu& c) {
    X86_TICK(c, 16);
    // 051657  push ebx
    X86_AT(c, 0x51657u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 051658  movzx ebx, dl
    X86_AT(c, 0x51658u);
    c.r[3] = g8(c, 2);
    // 05165b  mov bl, byte ptr [ebx + 0x4a785]
    X86_AT(c, 0x5165bu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x4A785u))));
    // 051661  or bl, bl
    X86_AT(c, 0x51661u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | g8(c, 3), 1)); }
    // 051663  je 0x51688
    X86_AT(c, 0x51663u);
    if (x86_cc(c, 4)) { goto L_51688; }
    X86_TICK(c, 7);
    // 051665  and ax, 0x7f
    X86_AT(c, 0x51665u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 051669  movsx bx, bl
    X86_AT(c, 0x51669u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 05166d  add ax, bx
    X86_AT(c, 0x5166du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_51670:
    X86_TICK(c, 7);
    // 051670  cmp ax, 0x7f
    X86_AT(c, 0x51670u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 051674  jle 0x5167c
    X86_AT(c, 0x51674u);
    if (x86_cc(c, 14)) { goto L_5167c; }
    X86_TICK(c, 9);
    // 051676  sub ax, 0xc
    X86_AT(c, 0x51676u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0xCu, 0, 2)); }
    // 05167a  jmp 0x51670
    X86_AT(c, 0x5167au);
    X86_POLL(c, 0x51670u); goto L_51670;
L_5167c:
    X86_TICK(c, 7);
    // 05167c  cmp ax, 0
    X86_AT(c, 0x5167cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x0u, 0, 2);
    // 051680  jge 0x51688
    X86_AT(c, 0x51680u);
    if (x86_cc(c, 13)) { goto L_51688; }
    X86_TICK(c, 9);
    // 051682  add ax, 0xc
    X86_AT(c, 0x51682u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xCu, 0, 2)); }
    // 051686  jmp 0x5167c
    X86_AT(c, 0x51686u);
    X86_POLL(c, 0x5167cu); goto L_5167c;
L_51688:
    X86_TICK(c, 14);
    // 051688  pop ebx
    X86_AT(c, 0x51688u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 051689  ret 
    X86_AT(c, 0x51689u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51657u, "ran off the end of a function");
}
void f_0005168a(X86Cpu& c) {
    X86_TICK(c, 23);
    // 05168a  push ebx
    X86_AT(c, 0x5168au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05168b  movzx ebx, dl
    X86_AT(c, 0x5168bu);
    c.r[3] = g8(c, 2);
    // 05168e  mov bl, byte ptr [ebx + 0x4a765]
    X86_AT(c, 0x5168eu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x4A765u))));
    // 051694  and ax, 0x7f
    X86_AT(c, 0x51694u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 051698  movsx bx, bl
    X86_AT(c, 0x51698u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 05169c  add ax, bx
    X86_AT(c, 0x5169cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 05169f  cmp ax, 0x7f
    X86_AT(c, 0x5169fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 0516a3  jg 0x516ad
    X86_AT(c, 0x516a3u);
    if (x86_cc(c, 15)) { goto L_516ad; }
    X86_TICK(c, 7);
    // 0516a5  cmp ax, 1
    X86_AT(c, 0x516a5u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
    // 0516a9  jl 0x516b1
    X86_AT(c, 0x516a9u);
    if (x86_cc(c, 12)) { goto L_516b1; }
    X86_TICK(c, 7);
    // 0516ab  jmp 0x516b3
    X86_AT(c, 0x516abu);
    goto L_516b3;
L_516ad:
    X86_TICK(c, 9);
    // 0516ad  mov al, 0x7f
    X86_AT(c, 0x516adu);
    s8(c, 0, 0x7Fu);
    // 0516af  jmp 0x516b3
    X86_AT(c, 0x516afu);
    goto L_516b3;
L_516b1:
    X86_TICK(c, 2);
    // 0516b1  mov al, 1
    X86_AT(c, 0x516b1u);
    s8(c, 0, 0x1u);
L_516b3:
    X86_TICK(c, 14);
    // 0516b3  pop ebx
    X86_AT(c, 0x516b3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0516b4  ret 
    X86_AT(c, 0x516b4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5168au, "ran off the end of a function");
}
void f_000516b5(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0516b5  add esi, 6
    X86_AT(c, 0x516b5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x6u, 0, 4); }
    // 0516b8  cmp esi, dword ptr [0x4a6cd]
    X86_AT(c, 0x516b8u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x4A6CDu))), 0, 4);
    // 0516be  jb 0x516c6
    X86_AT(c, 0x516beu);
    if (x86_cc(c, 2)) { goto L_516c6; }
    X86_TICK(c, 4);
    // 0516c0  mov esi, dword ptr [0x4a6c7]
    X86_AT(c, 0x516c0u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x4A6C7u)));
L_516c6:
    X86_TICK(c, 12);
    // 0516c6  mov dword ptr [0x4a6c1], esi
    X86_AT(c, 0x516c6u);
    wr32((c.sbase[3] + (uint32_t)(0x4A6C1u)), c.r[6]);
    // 0516cc  ret 
    X86_AT(c, 0x516ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x516b5u, "ran off the end of a function");
}
void f_000516cd(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0516cd  push edi
    X86_AT(c, 0x516cdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0516ce  push ecx
    X86_AT(c, 0x516ceu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0516cf  mov ecx, 0x40
    X86_AT(c, 0x516cfu);
    c.r[1] = 0x40u;
    // 0516d4  lea edi, [0x4a7a5]
    X86_AT(c, 0x516d4u);
    c.r[7] = (uint32_t)(0x4A7A5u);
L_516da:
    X86_TICK(c, 12);
    // 0516da  cmp byte ptr [edi], 0
    X86_AT(c, 0x516dau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0516dd  je 0x516ec
    X86_AT(c, 0x516ddu);
    if (x86_cc(c, 4)) { goto L_516ec; }
    X86_TICK(c, 13);
    // 0516df  add edi, 6
    X86_AT(c, 0x516dfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0516e2  loop 0x516da
    X86_AT(c, 0x516e2u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x516dau); goto L_516da; }
    X86_TICK(c, 11);
    // 0516e4  pop ecx
    X86_AT(c, 0x516e4u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0516e5  call 0x517c3
    X86_AT(c, 0x516e5u);
    push32(c, 0x516eau); x86_call_known(c, 0x517c3u, f_000517c3); X86_RET(c, 0x516eau);
    X86_TICK(c, 14);
    // 0516ea  pop edi
    X86_AT(c, 0x516eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0516eb  ret 
    X86_AT(c, 0x516ebu);
    c.eip = pop32(c); return;
L_516ec:
    X86_TICK(c, 19);
    // 0516ec  pop ecx
    X86_AT(c, 0x516ecu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0516ed  mov byte ptr [edi], ch
    X86_AT(c, 0x516edu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 5));
    // 0516ef  mov byte ptr [edi + 1], bl
    X86_AT(c, 0x516efu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 3));
    // 0516f2  mov byte ptr [edi + 2], cl
    X86_AT(c, 0x516f2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 0516f5  mov byte ptr [edi + 3], bh
    X86_AT(c, 0x516f5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 7));
    // 0516f8  or ax, ax
    X86_AT(c, 0x516f8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 0516fb  jne 0x516ff
    X86_AT(c, 0x516fbu);
    if (x86_cc(c, 5)) { goto L_516ff; }
    X86_TICK(c, 2);
    // 0516fd  inc ax
    X86_AT(c, 0x516fdu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
L_516ff:
    X86_TICK(c, 22);
    // 0516ff  mov word ptr [edi + 4], ax
    X86_AT(c, 0x516ffu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 051703  inc word ptr [0x4a6f0]
    X86_AT(c, 0x51703u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6F0u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 05170a  pop edi
    X86_AT(c, 0x5170au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05170b  ret 
    X86_AT(c, 0x5170bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x516cdu, "ran off the end of a function");
}
void f_0005170c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 05170c  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0x5170cu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 051710  call 0x5103e
    X86_AT(c, 0x51710u);
    push32(c, 0x51715u); x86_call_known(c, 0x5103eu, f_0005103e); X86_RET(c, 0x51715u);
    X86_TICK(c, 9);
    // 051715  mov al, 0xf0
    X86_AT(c, 0x51715u);
    s8(c, 0, 0xF0u);
    // 051717  call 0x51c39
    X86_AT(c, 0x51717u);
    push32(c, 0x5171cu); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x5171cu);
    X86_TICK(c, 7);
    // 05171c  call 0x516b5
    X86_AT(c, 0x5171cu);
    push32(c, 0x51721u); x86_call_known(c, 0x516b5u, f_000516b5); X86_RET(c, 0x51721u);
L_51721:
    X86_TICK(c, 4);
    // 051721  push esi
    X86_AT(c, 0x51721u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 051722  mov ecx, 6
    X86_AT(c, 0x51722u);
    c.r[1] = 0x6u;
L_51727:
    X86_TICK(c, 11);
    // 051727  mov al, byte ptr es:[esi]
    X86_AT(c, 0x51727u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 05172a  cmp al, 0xff
    X86_AT(c, 0x5172au);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 05172c  je 0x51737
    X86_AT(c, 0x5172cu);
    if (x86_cc(c, 4)) { goto L_51737; }
    X86_TICK(c, 7);
    // 05172e  call 0x51c39
    X86_AT(c, 0x5172eu);
    push32(c, 0x51733u); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x51733u);
    X86_TICK(c, 7);
    // 051733  cmp al, 0x80
    X86_AT(c, 0x51733u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 051735  jae 0x51747
    X86_AT(c, 0x51735u);
    if (x86_cc(c, 3)) { goto L_51747; }
L_51737:
    X86_TICK(c, 13);
    // 051737  inc esi
    X86_AT(c, 0x51737u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 051738  loop 0x51727
    X86_AT(c, 0x51738u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x51727u); goto L_51727; }
    X86_TICK(c, 11);
    // 05173a  pop esi
    X86_AT(c, 0x5173au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 05173b  call 0x516b5
    X86_AT(c, 0x5173bu);
    push32(c, 0x51740u); x86_call_known(c, 0x516b5u, f_000516b5); X86_RET(c, 0x51740u);
    X86_TICK(c, 7);
    // 051740  call 0x5174a
    X86_AT(c, 0x51740u);
    push32(c, 0x51745u); x86_call_known(c, 0x5174au, f_0005174a); X86_RET(c, 0x51745u);
    X86_TICK(c, 7);
    // 051745  jmp 0x51721
    X86_AT(c, 0x51745u);
    X86_POLL(c, 0x51721u); goto L_51721;
L_51747:
    X86_TICK(c, 16);
    // 051747  pop esi
    X86_AT(c, 0x51747u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 051748  clc 
    X86_AT(c, 0x51748u);
    c.fl &= ~X86_CF;
    // 051749  ret 
    X86_AT(c, 0x51749u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5170cu, "ran off the end of a function");
}
void f_0005174a(X86Cpu& c) {
    X86_TICK(c, 20);
    // 05174a  pushal 
    X86_AT(c, 0x5174au);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 05174b  mov ecx, 0x19
    X86_AT(c, 0x5174bu);
    c.r[1] = 0x19u;
L_51750:
    X86_TICK(c, 13);
    // 051750  nop 
    X86_AT(c, 0x51750u);
    // 051751  loop 0x51750
    X86_AT(c, 0x51751u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x51750u); goto L_51750; }
    X86_TICK(c, 34);
    // 051753  popal 
    X86_AT(c, 0x51753u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 051754  ret 
    X86_AT(c, 0x51754u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5174au, "ran off the end of a function");
}
void f_00051755(X86Cpu& c) {
    X86_TICK(c, 12);
    // 051755  clc 
    X86_AT(c, 0x51755u);
    c.fl &= ~X86_CF;
    // 051756  ret 
    X86_AT(c, 0x51756u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51755u, "ran off the end of a function");
}
void f_00051757(X86Cpu& c) {
    X86_TICK(c, 12);
    // 051757  clc 
    X86_AT(c, 0x51757u);
    c.fl &= ~X86_CF;
    // 051758  ret 
    X86_AT(c, 0x51758u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51757u, "ran off the end of a function");
}
void f_00051759(X86Cpu& c) {
    X86_TICK(c, 24);
    // 051759  inc word ptr [0x4a6e2]
    X86_AT(c, 0x51759u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6E2u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 051760  mov al, byte ptr es:[esi + 1]
    X86_AT(c, 0x51760u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 051764  mov byte ptr [0x4a6d8], al
    X86_AT(c, 0x51764u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6D8u)), g8(c, 0));
    // 051769  clc 
    X86_AT(c, 0x51769u);
    c.fl &= ~X86_CF;
    // 05176a  ret 
    X86_AT(c, 0x5176au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51759u, "ran off the end of a function");
}
void f_0005176b(X86Cpu& c) {
    X86_TICK(c, 19);
    // 05176b  mov ax, word ptr es:[esi + 4]
    X86_AT(c, 0x5176bu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 051770  shl al, 1
    X86_AT(c, 0x51770u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 051772  shr ax, 1
    X86_AT(c, 0x51772u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 051775  mov byte ptr [0x4a6d9], al
    X86_AT(c, 0x51775u);
    wr8((c.sbase[3] + (uint32_t)(0x4A6D9u)), g8(c, 0));
    // 05177a  call 0x5216f
    X86_AT(c, 0x5177au);
    push32(c, 0x5177fu); x86_call_known(c, 0x5216fu, f_0005216f); X86_RET(c, 0x5177fu);
    X86_TICK(c, 12);
    // 05177f  clc 
    X86_AT(c, 0x5177fu);
    c.fl &= ~X86_CF;
    // 051780  ret 
    X86_AT(c, 0x51780u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5176bu, "ran off the end of a function");
}
void f_00051781(X86Cpu& c) {
    X86_TICK(c, 13);
    // 051781  movzx ecx, word ptr [0x4a6f0]
    X86_AT(c, 0x51781u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0x4A6F0u)));
    // 051788  or ecx, ecx
    X86_AT(c, 0x51788u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 05178a  je 0x517c2
    X86_AT(c, 0x5178au);
    if (x86_cc(c, 4)) { goto L_517c2; }
    X86_TICK(c, 2);
    // 05178c  lea edi, [0x4a7a5]
    X86_AT(c, 0x5178cu);
    c.r[7] = (uint32_t)(0x4A7A5u);
L_51792:
    X86_TICK(c, 12);
    // 051792  cmp byte ptr [edi], 0
    X86_AT(c, 0x51792u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 051795  jne 0x5179c
    X86_AT(c, 0x51795u);
    if (x86_cc(c, 5)) { goto L_5179c; }
    X86_TICK(c, 9);
    // 051797  add edi, 6
    X86_AT(c, 0x51797u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 05179a  jmp 0x51792
    X86_AT(c, 0x5179au);
    X86_POLL(c, 0x51792u); goto L_51792;
L_5179c:
    X86_TICK(c, 11);
    // 05179c  dec word ptr [edi + 4]
    X86_AT(c, 0x5179cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0517a0  jne 0x517bd
    X86_AT(c, 0x517a0u);
    if (x86_cc(c, 5)) { goto L_517bd; }
    X86_TICK(c, 28);
    // 0517a2  push ecx
    X86_AT(c, 0x517a2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0517a3  xor ch, ch
    X86_AT(c, 0x517a3u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 0517a5  xchg byte ptr [edi], ch
    X86_AT(c, 0x517a5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 0517a7  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0x517a7u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0517aa  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0x517aau);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0517ad  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0x517adu);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 0517b0  call 0x517c3
    X86_AT(c, 0x517b0u);
    push32(c, 0x517b5u); x86_call_known(c, 0x517c3u, f_000517c3); X86_RET(c, 0x517b5u);
    X86_TICK(c, 10);
    // 0517b5  dec word ptr [0x4a6f0]
    X86_AT(c, 0x517b5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6F0u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0517bc  pop ecx
    X86_AT(c, 0x517bcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_517bd:
    X86_TICK(c, 13);
    // 0517bd  add edi, 6
    X86_AT(c, 0x517bdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0517c0  loop 0x51792
    X86_AT(c, 0x517c0u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x51792u); goto L_51792; }
L_517c2:
    X86_TICK(c, 10);
    // 0517c2  ret 
    X86_AT(c, 0x517c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51781u, "ran off the end of a function");
}
void f_000517c3(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0517c3  push eax
    X86_AT(c, 0x517c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0517c4  or bh, bh
    X86_AT(c, 0x517c4u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 7), 1)); }
    // 0517c6  je 0x517cb
    X86_AT(c, 0x517c6u);
    if (x86_cc(c, 4)) { goto L_517cb; }
    X86_TICK(c, 2);
    // 0517c8  and ch, 0x8f
    X86_AT(c, 0x517c8u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x8Fu, 1)); }
L_517cb:
    X86_TICK(c, 9);
    // 0517cb  mov al, ch
    X86_AT(c, 0x517cbu);
    s8(c, 0, g8(c, 5));
    // 0517cd  call 0x51c39
    X86_AT(c, 0x517cdu);
    push32(c, 0x517d2u); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x517d2u);
    X86_TICK(c, 9);
    // 0517d2  mov al, cl
    X86_AT(c, 0x517d2u);
    s8(c, 0, g8(c, 1));
    // 0517d4  call 0x51c39
    X86_AT(c, 0x517d4u);
    push32(c, 0x517d9u); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x517d9u);
    X86_TICK(c, 9);
    // 0517d9  mov al, bh
    X86_AT(c, 0x517d9u);
    s8(c, 0, g8(c, 7));
    // 0517db  call 0x51c39
    X86_AT(c, 0x517dbu);
    push32(c, 0x517e0u); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x517e0u);
    X86_TICK(c, 14);
    // 0517e0  pop eax
    X86_AT(c, 0x517e0u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0517e1  ret 
    X86_AT(c, 0x517e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x517c3u, "ran off the end of a function");
}
void f_00051be6(X86Cpu& c) {
    X86_TICK(c, 25);
    // 051be6  cld 
    X86_AT(c, 0x51be6u);
    c.fl &= ~X86_DF;
    // 051be7  push esi
    X86_AT(c, 0x51be7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 051be8  push ebx
    X86_AT(c, 0x51be8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 051be9  and ebx, 7
    X86_AT(c, 0x51be9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 051bec  shl ebx, 5
    X86_AT(c, 0x51becu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 051bef  lea ebx, [ebx + 0x4aa55]
    X86_AT(c, 0x51befu);
    c.r[3] = (uint32_t)(c.r[3] + 0x4AA55u);
    // 051bf5  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0x51bf5u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 051bfa  je 0x51c15
    X86_AT(c, 0x51bfau);
    if (x86_cc(c, 4)) { goto L_51c15; }
    X86_TICK(c, 28);
    // 051bfc  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0x51bfcu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 051bff  lodsb al, byte ptr [esi]
    X86_AT(c, 0x51bffu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 051c00  dec word ptr [ebx + 0x10]
    X86_AT(c, 0x51c00u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 051c04  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0x51c04u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 051c07  jne 0x51c0b
    X86_AT(c, 0x51c07u);
    if (x86_cc(c, 5)) { goto L_51c0b; }
    X86_TICK(c, 4);
    // 051c09  mov esi, dword ptr [ebx]
    X86_AT(c, 0x51c09u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_51c0b:
    X86_TICK(c, 16);
    // 051c0b  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0x51c0bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 051c0e  xor ah, ah
    X86_AT(c, 0x51c0eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 051c10  xchg byte ptr [ebx + 0x19], ah
    X86_AT(c, 0x51c10u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 4)); s8(c, 4, t); }
    // 051c13  jmp 0x51c17
    X86_AT(c, 0x51c13u);
    goto L_51c17;
L_51c15:
    X86_TICK(c, 2);
    // 051c15  mov ah, 1
    X86_AT(c, 0x51c15u);
    s8(c, 4, 0x1u);
L_51c17:
    X86_TICK(c, 7);
    // 051c17  cmp ah, 1
    X86_AT(c, 0x51c17u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 051c1a  jbe 0x51c22
    X86_AT(c, 0x51c1au);
    if (x86_cc(c, 6)) { goto L_51c22; }
    X86_TICK(c, 2);
    // 051c1c  mov byte ptr [0x4a6c0], ah
    X86_AT(c, 0x51c1cu);
    wr8((c.sbase[3] + (uint32_t)(0x4A6C0u)), g8(c, 4));
L_51c22:
    X86_TICK(c, 18);
    // 051c22  pop ebx
    X86_AT(c, 0x51c22u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 051c23  pop esi
    X86_AT(c, 0x51c23u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 051c24  ret 
    X86_AT(c, 0x51c24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51be6u, "ran off the end of a function");
}
void f_00051c39(X86Cpu& c) {
    X86_TICK(c, 13);
    // 051c39  push eax
    X86_AT(c, 0x51c39u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 051c3a  push ebx
    X86_AT(c, 0x51c3au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 051c3b  push edi
    X86_AT(c, 0x51c3bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 051c3c  cmp bl, 0xff
    X86_AT(c, 0x51c3cu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 051c3f  je 0x51cbe
    X86_AT(c, 0x51c3fu);
    if (x86_cc(c, 4)) { goto L_51cbe; }
    X86_TICK(c, 19);
    // 051c45  and ebx, 7
    X86_AT(c, 0x51c45u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 051c48  shl ebx, 5
    X86_AT(c, 0x51c48u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 051c4b  lea ebx, [ebx + 0x4a955]
    X86_AT(c, 0x51c4bu);
    c.r[3] = (uint32_t)(c.r[3] + 0x4A955u);
    // 051c51  cmp byte ptr [ebx + 0x18], 0
    X86_AT(c, 0x51c51u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x18u))), 0x0u, 0, 1);
    // 051c55  je 0x51cc9
    X86_AT(c, 0x51c55u);
    if (x86_cc(c, 4)) { goto L_51cc9; }
    X86_TICK(c, 7);
    // 051c5b  cmp al, 0x80
    X86_AT(c, 0x51c5bu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 051c5d  jb 0x51c73
    X86_AT(c, 0x51c5du);
    if (x86_cc(c, 2)) { goto L_51c73; }
    X86_TICK(c, 7);
    // 051c5f  cmp al, 0xf8
    X86_AT(c, 0x51c5fu);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 051c61  jae 0x51c73
    X86_AT(c, 0x51c61u);
    if (x86_cc(c, 3)) { goto L_51c73; }
    X86_TICK(c, 7);
    // 051c63  cmp al, 0xf0
    X86_AT(c, 0x51c63u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 051c65  jae 0x51c70
    X86_AT(c, 0x51c65u);
    if (x86_cc(c, 3)) { goto L_51c70; }
    X86_TICK(c, 11);
    // 051c67  cmp al, byte ptr [ebx + 0x1b]
    X86_AT(c, 0x51c67u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu))), 0, 1);
    // 051c6a  je 0x51cc3
    X86_AT(c, 0x51c6au);
    if (x86_cc(c, 4)) { goto L_51cc3; }
L_51c70:
    X86_TICK(c, 2);
    // 051c70  mov byte ptr [ebx + 0x1b], al
    X86_AT(c, 0x51c70u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), g8(c, 0));
L_51c73:
    X86_TICK(c, 16);
    // 051c73  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0x51c73u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 051c76  cmp word ptr [ebx + 0x10], 0x10
    X86_AT(c, 0x51c76u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x10u, 0, 2);
    // 051c7b  je 0x51c73
    X86_AT(c, 0x51c7bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x51c73u); goto L_51c73; }
    X86_TICK(c, 24);
    // 051c7d  mov byte ptr [edi], al
    X86_AT(c, 0x51c7du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 051c7f  inc edi
    X86_AT(c, 0x51c7fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 051c80  pushf 
    X86_AT(c, 0x51c80u);
    push16(c, c.fl & 0xFFFFu);
    // 051c82  cli 
    X86_AT(c, 0x51c82u);
    c.fl &= ~X86_IF;
    // 051c83  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0x51c83u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 051c88  jne 0x51ca5
    X86_AT(c, 0x51c88u);
    if (x86_cc(c, 5)) { goto L_51ca5; }
    X86_TICK(c, 32);
    // 051c8e  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0x51c8eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 051c91  or al, byte ptr [0x4a925]
    X86_AT(c, 0x51c91u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(0x4A925u))), 1)); }
    // 051c97  mov byte ptr [0x4a925], al
    X86_AT(c, 0x51c97u);
    wr8((c.sbase[3] + (uint32_t)(0x4A925u)), g8(c, 0));
    // 051c9c  push dx
    X86_AT(c, 0x51c9cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 051c9e  mov dx, 0xe70
    X86_AT(c, 0x51c9eu);
    s16(c, 2, 0xE70u);
    // 051ca2  out dx, al
    X86_AT(c, 0x51ca2u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 051ca3  pop dx
    X86_AT(c, 0x51ca3u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_51ca5:
    X86_TICK(c, 23);
    // 051ca5  inc word ptr [ebx + 0x10]
    X86_AT(c, 0x51ca5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 051ca9  popf 
    X86_AT(c, 0x51ca9u);
    x86_popfd(c, 2);
    // 051cab  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x51cabu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 051cae  jne 0x51cb6
    X86_AT(c, 0x51caeu);
    if (x86_cc(c, 5)) { goto L_51cb6; }
    X86_TICK(c, 4);
    // 051cb4  mov edi, dword ptr [ebx]
    X86_AT(c, 0x51cb4u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_51cb6:
    X86_TICK(c, 9);
    // 051cb6  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0x51cb6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
    // 051cb9  jmp 0x51cc3
    X86_AT(c, 0x51cb9u);
    goto L_51cc3;
L_51cbe:
    X86_TICK(c, 7);
    // 051cbe  call 0x526b4
    X86_AT(c, 0x51cbeu);
    push32(c, 0x51cc3u); x86_call_known(c, 0x526b4u, f_000526b4); X86_RET(c, 0x51cc3u);
L_51cc3:
    X86_TICK(c, 24);
    // 051cc3  pop edi
    X86_AT(c, 0x51cc3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 051cc4  pop ebx
    X86_AT(c, 0x51cc4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 051cc5  pop eax
    X86_AT(c, 0x51cc5u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 051cc6  xor ah, ah
    X86_AT(c, 0x51cc6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 051cc8  ret 
    X86_AT(c, 0x51cc8u);
    c.eip = pop32(c); return;
L_51cc9:
    X86_TICK(c, 24);
    // 051cc9  pop edi
    X86_AT(c, 0x51cc9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 051cca  pop ebx
    X86_AT(c, 0x51ccau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 051ccb  pop eax
    X86_AT(c, 0x51ccbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 051ccc  mov ah, 0xf0
    X86_AT(c, 0x51cccu);
    s8(c, 4, 0xF0u);
    // 051cce  ret 
    X86_AT(c, 0x51cceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51c39u, "ran off the end of a function");
}
void f_00051ccf(X86Cpu& c) {
    X86_TICK(c, 13);
    // 051ccf  push ebx
    X86_AT(c, 0x51ccfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 051cd0  mov bl, byte ptr [0x4a6f2]
    X86_AT(c, 0x51cd0u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0x4A6F2u))));
    // 051cd6  cmp bl, 8
    X86_AT(c, 0x51cd6u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 051cd9  jae 0x51ce0
    X86_AT(c, 0x51cd9u);
    if (x86_cc(c, 3)) { goto L_51ce0; }
    X86_TICK(c, 7);
    // 051cdb  call 0x51c39
    X86_AT(c, 0x51cdbu);
    push32(c, 0x51ce0u); x86_call_known(c, 0x51c39u, f_00051c39); X86_RET(c, 0x51ce0u);
L_51ce0:
    X86_TICK(c, 14);
    // 051ce0  pop ebx
    X86_AT(c, 0x51ce0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 051ce1  ret 
    X86_AT(c, 0x51ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51ccfu, "ran off the end of a function");
}
void f_00051ce2(X86Cpu& c) {
    X86_TICK(c, 49);
    // 051ce2  pushfd 
    X86_AT(c, 0x51ce2u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 051ce3  cli 
    X86_AT(c, 0x51ce3u);
    c.fl &= ~X86_IF;
    // 051ce4  mov cl, 0x44
    X86_AT(c, 0x51ce4u);
    s8(c, 1, 0x44u);
    // 051ce6  mov ax, 0x2502
    X86_AT(c, 0x51ce6u);
    s16(c, 0, 0x2502u);
    // 051cea  int 0x21
    X86_AT(c, 0x51ceau);
    x86_int(c, 0x21, 0x51cecu);
    X86_TICK(c, 5);
    // 051cec  jb 0x51d6e
    X86_AT(c, 0x51cecu);
    if (x86_cc(c, 2)) { goto L_51d6e; }
    X86_TICK(c, 9);
    // 051cf2  lea edx, [0x5220f]
    X86_AT(c, 0x51cf2u);
    c.r[2] = (uint32_t)(0x5220Fu);
    // 051cf8  cmp ebx, edx
    X86_AT(c, 0x51cf8u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 051cfa  je 0x51d6e
    X86_AT(c, 0x51cfau);
    if (x86_cc(c, 4)) { goto L_51d6e; }
    X86_TICK(c, 47);
    // 051d00  mov eax, es
    X86_AT(c, 0x51d00u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 051d02  mov dword ptr [0x4a92a], ebx
    X86_AT(c, 0x51d02u);
    wr32((c.sbase[3] + (uint32_t)(0x4A92Au)), c.r[3]);
    // 051d08  mov word ptr [0x4a92e], ax
    X86_AT(c, 0x51d08u);
    wr16((c.sbase[3] + (uint32_t)(0x4A92Eu)), (c.r[0] & 0xFFFFu));
    // 051d0e  mov cl, 0x44
    X86_AT(c, 0x51d0eu);
    s8(c, 1, 0x44u);
    // 051d10  mov ax, 0x2503
    X86_AT(c, 0x51d10u);
    s16(c, 0, 0x2503u);
    // 051d14  int 0x21
    X86_AT(c, 0x51d14u);
    x86_int(c, 0x21, 0x51d16u);
    X86_TICK(c, 5);
    // 051d16  jb 0x51d6e
    X86_AT(c, 0x51d16u);
    if (x86_cc(c, 2)) { goto L_51d6e; }
    X86_TICK(c, 51);
    // 051d1c  mov dword ptr [0x4a930], ebx
    X86_AT(c, 0x51d1cu);
    wr32((c.sbase[3] + (uint32_t)(0x4A930u)), c.r[3]);
    // 051d22  push ds
    X86_AT(c, 0x51d22u);
    push32(c, c.sreg[3]);
    // 051d23  mov eax, cs
    X86_AT(c, 0x51d23u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 051d25  mov ds, eax
    X86_AT(c, 0x51d25u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 051d27  mov cl, 0x44
    X86_AT(c, 0x51d27u);
    s8(c, 1, 0x44u);
    // 051d29  lea edx, [0x5220f]
    X86_AT(c, 0x51d29u);
    c.r[2] = (uint32_t)(0x5220Fu);
    // 051d2f  mov ax, 0x2506
    X86_AT(c, 0x51d2fu);
    s16(c, 0, 0x2506u);
    // 051d33  int 0x21
    X86_AT(c, 0x51d33u);
    x86_int(c, 0x21, 0x51d35u);
    X86_TICK(c, 9);
    // 051d35  pop ds
    X86_AT(c, 0x51d35u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 051d36  jb 0x51d6e
    X86_AT(c, 0x51d36u);
    if (x86_cc(c, 2)) { goto L_51d6e; }
    X86_TICK(c, 57);
    // 051d3c  xor al, al
    X86_AT(c, 0x51d3cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 051d3e  mov byte ptr [0x4a925], al
    X86_AT(c, 0x51d3eu);
    wr8((c.sbase[3] + (uint32_t)(0x4A925u)), g8(c, 0));
    // 051d43  mov dx, 0xe70
    X86_AT(c, 0x51d43u);
    s16(c, 2, 0xE70u);
    // 051d47  out dx, al
    X86_AT(c, 0x51d47u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 051d48  mov al, 0xff
    X86_AT(c, 0x51d48u);
    s8(c, 0, 0xFFu);
    // 051d4a  mov byte ptr [0x4a927], al
    X86_AT(c, 0x51d4au);
    wr8((c.sbase[3] + (uint32_t)(0x4A927u)), g8(c, 0));
    // 051d4f  mov dx, 0xe71
    X86_AT(c, 0x51d4fu);
    s16(c, 2, 0xE71u);
    // 051d53  out dx, al
    X86_AT(c, 0x51d53u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 051d54  mov byte ptr [0x4a928], 0
    X86_AT(c, 0x51d54u);
    wr8((c.sbase[3] + (uint32_t)(0x4A928u)), 0x0u);
    // 051d5b  in al, 2
    X86_AT(c, 0x51d5bu);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 051d5d  jmp 0x51d5f
    X86_AT(c, 0x51d5du);
    goto L_51d5f;
L_51d5f:
    X86_TICK(c, 7);
    // 051d5f  jmp 0x51d61
    X86_AT(c, 0x51d5fu);
    goto L_51d61;
L_51d61:
    X86_TICK(c, 7);
    // 051d61  jmp 0x51d63
    X86_AT(c, 0x51d61u);
    goto L_51d63;
L_51d63:
    X86_TICK(c, 36);
    // 051d63  mov dl, 0x10
    X86_AT(c, 0x51d63u);
    s8(c, 2, 0x10u);
    // 051d65  not dl
    X86_AT(c, 0x51d65u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 051d67  and al, dl
    X86_AT(c, 0x51d67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 051d69  out 2, al
    X86_AT(c, 0x51d69u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 051d6b  popfd 
    X86_AT(c, 0x51d6bu);
    x86_popfd(c, 4);
    // 051d6c  clc 
    X86_AT(c, 0x51d6cu);
    c.fl &= ~X86_CF;
    // 051d6d  ret 
    X86_AT(c, 0x51d6du);
    c.eip = pop32(c); return;
L_51d6e:
    X86_TICK(c, 18);
    // 051d6e  popf 
    X86_AT(c, 0x51d6eu);
    x86_popfd(c, 2);
    // 051d70  stc 
    X86_AT(c, 0x51d70u);
    c.fl |= X86_CF;
    // 051d71  ret 
    X86_AT(c, 0x51d71u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51ce2u, "ran off the end of a function");
}
void f_00051d72(X86Cpu& c) {
    X86_TICK(c, 49);
    // 051d72  pushfd 
    X86_AT(c, 0x51d72u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 051d73  cli 
    X86_AT(c, 0x51d73u);
    c.fl &= ~X86_IF;
    // 051d74  mov cl, 0x45
    X86_AT(c, 0x51d74u);
    s8(c, 1, 0x45u);
    // 051d76  mov ax, 0x2502
    X86_AT(c, 0x51d76u);
    s16(c, 0, 0x2502u);
    // 051d7a  int 0x21
    X86_AT(c, 0x51d7au);
    x86_int(c, 0x21, 0x51d7cu);
    X86_TICK(c, 5);
    // 051d7c  jb 0x51deb
    X86_AT(c, 0x51d7cu);
    if (x86_cc(c, 2)) { goto L_51deb; }
    X86_TICK(c, 9);
    // 051d82  lea edx, [0x5228a]
    X86_AT(c, 0x51d82u);
    c.r[2] = (uint32_t)(0x5228Au);
    // 051d88  cmp ebx, edx
    X86_AT(c, 0x51d88u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 051d8a  je 0x51deb
    X86_AT(c, 0x51d8au);
    if (x86_cc(c, 4)) { goto L_51deb; }
    X86_TICK(c, 47);
    // 051d90  mov eax, es
    X86_AT(c, 0x51d90u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 051d92  mov dword ptr [0x4a934], ebx
    X86_AT(c, 0x51d92u);
    wr32((c.sbase[3] + (uint32_t)(0x4A934u)), c.r[3]);
    // 051d98  mov word ptr [0x4a938], ax
    X86_AT(c, 0x51d98u);
    wr16((c.sbase[3] + (uint32_t)(0x4A938u)), (c.r[0] & 0xFFFFu));
    // 051d9e  mov cl, 0x45
    X86_AT(c, 0x51d9eu);
    s8(c, 1, 0x45u);
    // 051da0  mov ax, 0x2503
    X86_AT(c, 0x51da0u);
    s16(c, 0, 0x2503u);
    // 051da4  int 0x21
    X86_AT(c, 0x51da4u);
    x86_int(c, 0x21, 0x51da6u);
    X86_TICK(c, 5);
    // 051da6  jb 0x51deb
    X86_AT(c, 0x51da6u);
    if (x86_cc(c, 2)) { goto L_51deb; }
    X86_TICK(c, 51);
    // 051dac  mov dword ptr [0x4a930], ebx
    X86_AT(c, 0x51dacu);
    wr32((c.sbase[3] + (uint32_t)(0x4A930u)), c.r[3]);
    // 051db2  push ds
    X86_AT(c, 0x51db2u);
    push32(c, c.sreg[3]);
    // 051db3  mov eax, cs
    X86_AT(c, 0x51db3u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 051db5  mov ds, eax
    X86_AT(c, 0x51db5u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 051db7  lea edx, [0x5228a]
    X86_AT(c, 0x51db7u);
    c.r[2] = (uint32_t)(0x5228Au);
    // 051dbd  mov cl, 0x45
    X86_AT(c, 0x51dbdu);
    s8(c, 1, 0x45u);
    // 051dbf  mov ax, 0x2506
    X86_AT(c, 0x51dbfu);
    s16(c, 0, 0x2506u);
    // 051dc3  int 0x21
    X86_AT(c, 0x51dc3u);
    x86_int(c, 0x21, 0x51dc5u);
    X86_TICK(c, 9);
    // 051dc5  pop ds
    X86_AT(c, 0x51dc5u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 051dc6  jb 0x51deb
    X86_AT(c, 0x51dc6u);
    if (x86_cc(c, 2)) { goto L_51deb; }
    X86_TICK(c, 37);
    // 051dcc  xor al, al
    X86_AT(c, 0x51dccu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 051dce  mov byte ptr [0x4a926], al
    X86_AT(c, 0x51dceu);
    wr8((c.sbase[3] + (uint32_t)(0x4A926u)), g8(c, 0));
    // 051dd3  mov dx, 0xe73
    X86_AT(c, 0x51dd3u);
    s16(c, 2, 0xE73u);
    // 051dd7  out dx, al
    X86_AT(c, 0x51dd7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 051dd8  in al, 2
    X86_AT(c, 0x51dd8u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 051dda  jmp 0x51ddc
    X86_AT(c, 0x51ddau);
    goto L_51ddc;
L_51ddc:
    X86_TICK(c, 7);
    // 051ddc  jmp 0x51dde
    X86_AT(c, 0x51ddcu);
    goto L_51dde;
L_51dde:
    X86_TICK(c, 7);
    // 051dde  jmp 0x51de0
    X86_AT(c, 0x51ddeu);
    goto L_51de0;
L_51de0:
    X86_TICK(c, 36);
    // 051de0  mov dl, 0x20
    X86_AT(c, 0x51de0u);
    s8(c, 2, 0x20u);
    // 051de2  not dl
    X86_AT(c, 0x51de2u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 051de4  and al, dl
    X86_AT(c, 0x51de4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 051de6  out 2, al
    X86_AT(c, 0x51de6u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 051de8  popfd 
    X86_AT(c, 0x51de8u);
    x86_popfd(c, 4);
    // 051de9  clc 
    X86_AT(c, 0x51de9u);
    c.fl &= ~X86_CF;
    // 051dea  ret 
    X86_AT(c, 0x51deau);
    c.eip = pop32(c); return;
L_51deb:
    X86_TICK(c, 18);
    // 051deb  popfd 
    X86_AT(c, 0x51debu);
    x86_popfd(c, 4);
    // 051dec  stc 
    X86_AT(c, 0x51decu);
    c.fl |= X86_CF;
    // 051ded  ret 
    X86_AT(c, 0x51dedu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51d72u, "ran off the end of a function");
}
void f_00051dee(X86Cpu& c) {
    X86_TICK(c, 15);
    // 051dee  pushfd 
    X86_AT(c, 0x51deeu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 051def  cli 
    X86_AT(c, 0x51defu);
    c.fl &= ~X86_IF;
    // 051df0  call 0x5054c
    X86_AT(c, 0x51df0u);
    push32(c, 0x51df5u); x86_call_known(c, 0x5054cu, f_0005054c); X86_RET(c, 0x51df5u);
    X86_TICK(c, 9);
    // 051df5  mov dword ptr [0x4a93e], eax
    X86_AT(c, 0x51df5u);
    wr32((c.sbase[3] + (uint32_t)(0x4A93Eu)), c.r[0]);
    // 051dfa  call 0x50568
    X86_AT(c, 0x51dfau);
    push32(c, 0x51dffu); x86_call_known(c, 0x50568u, f_00050568); X86_RET(c, 0x51dffu);
    X86_TICK(c, 13);
    // 051dff  mov dword ptr [0x4a942], eax
    X86_AT(c, 0x51dffu);
    wr32((c.sbase[3] + (uint32_t)(0x4A942u)), c.r[0]);
    // 051e04  lea eax, [0x52402]
    X86_AT(c, 0x51e04u);
    c.r[0] = (uint32_t)(0x52402u);
    // 051e0a  push eax
    X86_AT(c, 0x51e0au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 051e0b  call 0x5052c
    X86_AT(c, 0x51e0bu);
    push32(c, 0x51e10u); x86_call_known(c, 0x5052cu, f_0005052c); X86_RET(c, 0x51e10u);
    X86_TICK(c, 13);
    // 051e10  add esp, 4
    X86_AT(c, 0x51e10u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 051e13  lea eax, [0x52520]
    X86_AT(c, 0x51e13u);
    c.r[0] = (uint32_t)(0x52520u);
    // 051e19  push eax
    X86_AT(c, 0x51e19u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 051e1a  call 0x50558
    X86_AT(c, 0x51e1au);
    push32(c, 0x51e1fu); x86_call_known(c, 0x50558u, f_00050558); X86_RET(c, 0x51e1fu);
    X86_TICK(c, 20);
    // 051e1f  add esp, 4
    X86_AT(c, 0x51e1fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 051e22  popfd 
    X86_AT(c, 0x51e22u);
    x86_popfd(c, 4);
    // 051e23  clc 
    X86_AT(c, 0x51e23u);
    c.fl &= ~X86_CF;
    // 051e24  ret 
    X86_AT(c, 0x51e24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51deeu, "ran off the end of a function");
}
void f_00051e28(X86Cpu& c) {
    X86_TICK(c, 59);
    // 051e28  pushfd 
    X86_AT(c, 0x51e28u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 051e29  cli 
    X86_AT(c, 0x51e29u);
    c.fl &= ~X86_IF;
    // 051e2a  mov dx, 0xe70
    X86_AT(c, 0x51e2au);
    s16(c, 2, 0xE70u);
    // 051e2e  mov al, 0
    X86_AT(c, 0x51e2eu);
    s8(c, 0, 0x0u);
    // 051e30  out dx, al
    X86_AT(c, 0x51e30u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 051e31  mov dx, 0xe71
    X86_AT(c, 0x51e31u);
    s16(c, 2, 0xE71u);
    // 051e35  mov al, 0
    X86_AT(c, 0x51e35u);
    s8(c, 0, 0x0u);
    // 051e37  out dx, al
    X86_AT(c, 0x51e37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 051e38  in al, 2
    X86_AT(c, 0x51e38u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 051e3a  jmp 0x51e3c
    X86_AT(c, 0x51e3au);
    goto L_51e3c;
L_51e3c:
    X86_TICK(c, 7);
    // 051e3c  jmp 0x51e3e
    X86_AT(c, 0x51e3cu);
    goto L_51e3e;
L_51e3e:
    X86_TICK(c, 7);
    // 051e3e  jmp 0x51e40
    X86_AT(c, 0x51e3eu);
    goto L_51e40;
L_51e40:
    X86_TICK(c, 71);
    // 051e40  or al, 0x10
    X86_AT(c, 0x51e40u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 051e42  out 2, al
    X86_AT(c, 0x51e42u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 051e44  push ds
    X86_AT(c, 0x51e44u);
    push32(c, c.sreg[3]);
    // 051e45  mov cl, 0x44
    X86_AT(c, 0x51e45u);
    s8(c, 1, 0x44u);
    // 051e47  mov edx, dword ptr [0x4a92a]
    X86_AT(c, 0x51e47u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4A92Au)));
    // 051e4d  mov ax, word ptr [0x4a92e]
    X86_AT(c, 0x51e4du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4A92Eu))));
    // 051e53  mov ebx, dword ptr [0x4a930]
    X86_AT(c, 0x51e53u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x4A930u)));
    // 051e59  mov ds, eax
    X86_AT(c, 0x51e59u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 051e5b  mov ax, 0x2507
    X86_AT(c, 0x51e5bu);
    s16(c, 0, 0x2507u);
    // 051e5f  int 0x21
    X86_AT(c, 0x51e5fu);
    x86_int(c, 0x21, 0x51e61u);
    X86_TICK(c, 20);
    // 051e61  pop ds
    X86_AT(c, 0x51e61u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 051e62  popfd 
    X86_AT(c, 0x51e62u);
    x86_popfd(c, 4);
    // 051e63  ret 
    X86_AT(c, 0x51e63u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51e28u, "ran off the end of a function");
}
void f_00051e64(X86Cpu& c) {
    X86_TICK(c, 49);
    // 051e64  pushfd 
    X86_AT(c, 0x51e64u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 051e65  cli 
    X86_AT(c, 0x51e65u);
    c.fl &= ~X86_IF;
    // 051e66  mov al, byte ptr [0x4a926]
    X86_AT(c, 0x51e66u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4A926u))));
    // 051e6b  and al, 0xfc
    X86_AT(c, 0x51e6bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 051e6d  mov dx, 0xe73
    X86_AT(c, 0x51e6du);
    s16(c, 2, 0xE73u);
    // 051e71  out dx, al
    X86_AT(c, 0x51e71u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 051e72  mov byte ptr [0x4a926], al
    X86_AT(c, 0x51e72u);
    wr8((c.sbase[3] + (uint32_t)(0x4A926u)), g8(c, 0));
    // 051e77  in al, 2
    X86_AT(c, 0x51e77u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 051e79  jmp 0x51e7b
    X86_AT(c, 0x51e79u);
    goto L_51e7b;
L_51e7b:
    X86_TICK(c, 7);
    // 051e7b  jmp 0x51e7d
    X86_AT(c, 0x51e7bu);
    goto L_51e7d;
L_51e7d:
    X86_TICK(c, 7);
    // 051e7d  jmp 0x51e7f
    X86_AT(c, 0x51e7du);
    goto L_51e7f;
L_51e7f:
    X86_TICK(c, 71);
    // 051e7f  or al, 0x20
    X86_AT(c, 0x51e7fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 051e81  out 2, al
    X86_AT(c, 0x51e81u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 051e83  push ds
    X86_AT(c, 0x51e83u);
    push32(c, c.sreg[3]);
    // 051e84  mov cl, 0x45
    X86_AT(c, 0x51e84u);
    s8(c, 1, 0x45u);
    // 051e86  mov edx, dword ptr [0x4a934]
    X86_AT(c, 0x51e86u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4A934u)));
    // 051e8c  mov ax, word ptr [0x4a938]
    X86_AT(c, 0x51e8cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4A938u))));
    // 051e92  mov ebx, dword ptr [0x4a93a]
    X86_AT(c, 0x51e92u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x4A93Au)));
    // 051e98  mov ds, eax
    X86_AT(c, 0x51e98u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 051e9a  mov ax, 0x2507
    X86_AT(c, 0x51e9au);
    s16(c, 0, 0x2507u);
    // 051e9e  int 0x21
    X86_AT(c, 0x51e9eu);
    x86_int(c, 0x21, 0x51ea0u);
    X86_TICK(c, 20);
    // 051ea0  pop ds
    X86_AT(c, 0x51ea0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 051ea1  popfd 
    X86_AT(c, 0x51ea1u);
    x86_popfd(c, 4);
    // 051ea2  ret 
    X86_AT(c, 0x51ea2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51e64u, "ran off the end of a function");
}
void f_00051ea3(X86Cpu& c) {
    X86_TICK(c, 19);
    // 051ea3  pushfd 
    X86_AT(c, 0x51ea3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 051ea4  cli 
    X86_AT(c, 0x51ea4u);
    c.fl &= ~X86_IF;
    // 051ea5  mov bl, 0
    X86_AT(c, 0x51ea5u);
    s8(c, 3, 0x0u);
    // 051ea7  mov ah, 0x15
    X86_AT(c, 0x51ea7u);
    s8(c, 4, 0x15u);
    // 051ea9  call 0x507d8
    X86_AT(c, 0x51ea9u);
    push32(c, 0x51eaeu); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x51eaeu);
    X86_TICK(c, 13);
    // 051eae  mov eax, dword ptr [0x4a93e]
    X86_AT(c, 0x51eaeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4A93Eu)));
    // 051eb3  push eax
    X86_AT(c, 0x51eb3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 051eb4  call 0x5052c
    X86_AT(c, 0x51eb4u);
    push32(c, 0x51eb9u); x86_call_known(c, 0x5052cu, f_0005052c); X86_RET(c, 0x51eb9u);
    X86_TICK(c, 15);
    // 051eb9  add esp, 4
    X86_AT(c, 0x51eb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 051ebc  mov eax, dword ptr [0x4a942]
    X86_AT(c, 0x51ebcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4A942u)));
    // 051ec1  push eax
    X86_AT(c, 0x51ec1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 051ec2  call 0x50558
    X86_AT(c, 0x51ec2u);
    push32(c, 0x51ec7u); x86_call_known(c, 0x50558u, f_00050558); X86_RET(c, 0x51ec7u);
    X86_TICK(c, 18);
    // 051ec7  add esp, 4
    X86_AT(c, 0x51ec7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 051eca  popfd 
    X86_AT(c, 0x51ecau);
    x86_popfd(c, 4);
    // 051ecb  ret 
    X86_AT(c, 0x51ecbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51ea3u, "ran off the end of a function");
}
}

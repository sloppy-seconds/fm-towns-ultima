#include "p_game_funcs.h"
namespace p_game {
void f_000d50a1(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d50a1  enter 0, 0
    X86_AT(c, 0xd50a1u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d50a5  push ebx
    X86_AT(c, 0xd50a5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d50a6  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xd50a6u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d50a9  mov ah, 0x46
    X86_AT(c, 0xd50a9u);
    s8(c, 4, 0x46u);
    // 0d50ab  call 0xd50ed
    X86_AT(c, 0xd50abu);
    push32(c, 0xd50b0u); x86_call_known(c, 0xd50edu, f_000d50ed); X86_RET(c, 0xd50b0u);
    X86_TICK(c, 23);
    // 0d50b0  movzx eax, al
    X86_AT(c, 0xd50b0u);
    c.r[0] = g8(c, 0);
    // 0d50b3  pop ebx
    X86_AT(c, 0xd50b3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d50b4  leave 
    X86_AT(c, 0xd50b4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d50b5  ret 
    X86_AT(c, 0xd50b5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd50a1u, "ran off the end of a function");
}
void f_000d50d8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d50d8  enter 0, 0
    X86_AT(c, 0xd50d8u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d50dc  push edx
    X86_AT(c, 0xd50dcu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d50dd  mov dl, byte ptr [ebp + 8]
    X86_AT(c, 0xd50ddu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d50e0  mov ah, 0x49
    X86_AT(c, 0xd50e0u);
    s8(c, 4, 0x49u);
    // 0d50e2  call 0xd50ed
    X86_AT(c, 0xd50e2u);
    push32(c, 0xd50e7u); x86_call_known(c, 0xd50edu, f_000d50ed); X86_RET(c, 0xd50e7u);
    X86_TICK(c, 23);
    // 0d50e7  movzx eax, al
    X86_AT(c, 0xd50e7u);
    c.r[0] = g8(c, 0);
    // 0d50ea  pop edx
    X86_AT(c, 0xd50eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d50eb  leave 
    X86_AT(c, 0xd50ebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d50ec  ret 
    X86_AT(c, 0xd50ecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd50d8u, "ran off the end of a function");
}
void f_000d50ed(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0d50ed  push fs
    X86_AT(c, 0xd50edu);
    push32(c, c.sreg[4]);
    // 0d50ef  push ax
    X86_AT(c, 0xd50efu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d50f1  mov ax, 0x110
    X86_AT(c, 0xd50f1u);
    s16(c, 0, 0x110u);
    // 0d50f5  mov fs, eax
    X86_AT(c, 0xd50f5u);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d50f7  pop ax
    X86_AT(c, 0xd50f7u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d50f9  lcall fword ptr fs:[0x80]
    X86_AT(c, 0xd50f9u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0xd5100u); }
    X86_RET(c, 0xd5100u);
    X86_TICK(c, 14);
    // 0d5100  pop fs
    X86_AT(c, 0xd5100u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0d5102  ret 
    X86_AT(c, 0xd5102u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd50edu, "ran off the end of a function");
}
void f_000d5159(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d5159  mov ah, 0
    X86_AT(c, 0xd5159u);
    s8(c, 4, 0x0u);
    // 0d515b  call 0xd5358
    X86_AT(c, 0xd515bu);
    push32(c, 0xd5160u); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd5160u);
    X86_TICK(c, 13);
    // 0d5160  movzx eax, al
    X86_AT(c, 0xd5160u);
    c.r[0] = g8(c, 0);
    // 0d5163  ret 
    X86_AT(c, 0xd5163u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5159u, "ran off the end of a function");
}
void f_000d5164(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d5164  mov ah, 1
    X86_AT(c, 0xd5164u);
    s8(c, 4, 0x1u);
    // 0d5166  call 0xd5358
    X86_AT(c, 0xd5166u);
    push32(c, 0xd516bu); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd516bu);
    X86_TICK(c, 13);
    // 0d516b  movzx eax, al
    X86_AT(c, 0xd516bu);
    c.r[0] = g8(c, 0);
    // 0d516e  ret 
    X86_AT(c, 0xd516eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5164u, "ran off the end of a function");
}
void f_000d516f(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0d516f  enter 0, 0
    X86_AT(c, 0xd516fu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d5173  push esi
    X86_AT(c, 0xd5173u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d5174  push ecx
    X86_AT(c, 0xd5174u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d5175  push edx
    X86_AT(c, 0xd5175u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d5176  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xd5176u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d5179  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd5179u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d517c  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0xd517cu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0d517f  mov ah, 2
    X86_AT(c, 0xd517fu);
    s8(c, 4, 0x2u);
    // 0d5181  call 0xd5358
    X86_AT(c, 0xd5181u);
    push32(c, 0xd5186u); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd5186u);
    X86_TICK(c, 31);
    // 0d5186  movzx eax, al
    X86_AT(c, 0xd5186u);
    c.r[0] = g8(c, 0);
    // 0d5189  pop edx
    X86_AT(c, 0xd5189u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d518a  pop ecx
    X86_AT(c, 0xd518au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0d518b  pop esi
    X86_AT(c, 0xd518bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d518c  leave 
    X86_AT(c, 0xd518cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d518d  ret 
    X86_AT(c, 0xd518du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd516fu, "ran off the end of a function");
}
void f_000d518e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d518e  mov ah, 3
    X86_AT(c, 0xd518eu);
    s8(c, 4, 0x3u);
    // 0d5190  call 0xd5358
    X86_AT(c, 0xd5190u);
    push32(c, 0xd5195u); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd5195u);
    X86_TICK(c, 13);
    // 0d5195  movzx eax, al
    X86_AT(c, 0xd5195u);
    c.r[0] = g8(c, 0);
    // 0d5198  ret 
    X86_AT(c, 0xd5198u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd518eu, "ran off the end of a function");
}
void f_000d51a4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d51a4  mov ah, 5
    X86_AT(c, 0xd51a4u);
    s8(c, 4, 0x5u);
    // 0d51a6  call 0xd5358
    X86_AT(c, 0xd51a6u);
    push32(c, 0xd51abu); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd51abu);
    X86_TICK(c, 13);
    // 0d51ab  movzx eax, al
    X86_AT(c, 0xd51abu);
    c.r[0] = g8(c, 0);
    // 0d51ae  ret 
    X86_AT(c, 0xd51aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd51a4u, "ran off the end of a function");
}
void f_000d51af(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0d51af  push es
    X86_AT(c, 0xd51afu);
    push32(c, c.sreg[0]);
    // 0d51b0  push esi
    X86_AT(c, 0xd51b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d51b1  push ebx
    X86_AT(c, 0xd51b1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d51b2  push ecx
    X86_AT(c, 0xd51b2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d51b3  push edx
    X86_AT(c, 0xd51b3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d51b4  mov ah, 6
    X86_AT(c, 0xd51b4u);
    s8(c, 4, 0x6u);
    // 0d51b6  call 0xd5358
    X86_AT(c, 0xd51b6u);
    push32(c, 0xd51bbu); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd51bbu);
    X86_TICK(c, 32);
    // 0d51bb  mov eax, esi
    X86_AT(c, 0xd51bbu);
    c.r[0] = c.r[6];
    // 0d51bd  pop edx
    X86_AT(c, 0xd51bdu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d51be  pop ecx
    X86_AT(c, 0xd51beu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0d51bf  pop ebx
    X86_AT(c, 0xd51bfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d51c0  pop esi
    X86_AT(c, 0xd51c0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d51c1  pop es
    X86_AT(c, 0xd51c1u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d51c2  ret 
    X86_AT(c, 0xd51c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd51afu, "ran off the end of a function");
}
void f_000d524b(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0d524b  enter 0, 0
    X86_AT(c, 0xd524bu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d524f  push edx
    X86_AT(c, 0xd524fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d5250  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd5250u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d5253  cmp dl, 0
    X86_AT(c, 0xd5253u);
    (void)x86_sub(c, g8(c, 2), 0x0u, 0, 1);
    // 0d5256  je 0xd525a
    X86_AT(c, 0xd5256u);
    if (x86_cc(c, 4)) { goto L_d525a; }
    X86_TICK(c, 2);
    // 0d5258  mov dl, 0xff
    X86_AT(c, 0xd5258u);
    s8(c, 2, 0xFFu);
L_d525a:
    X86_TICK(c, 9);
    // 0d525a  mov ah, 8
    X86_AT(c, 0xd525au);
    s8(c, 4, 0x8u);
    // 0d525c  call 0xd5358
    X86_AT(c, 0xd525cu);
    push32(c, 0xd5261u); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd5261u);
    X86_TICK(c, 23);
    // 0d5261  movzx eax, al
    X86_AT(c, 0xd5261u);
    c.r[0] = g8(c, 0);
    // 0d5264  pop edx
    X86_AT(c, 0xd5264u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d5265  leave 
    X86_AT(c, 0xd5265u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d5266  ret 
    X86_AT(c, 0xd5266u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd524bu, "ran off the end of a function");
}
void f_000d5267(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d5267  enter 0, 0
    X86_AT(c, 0xd5267u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d526b  push edx
    X86_AT(c, 0xd526bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d526c  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd526cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d526f  mov ah, 9
    X86_AT(c, 0xd526fu);
    s8(c, 4, 0x9u);
    // 0d5271  call 0xd5358
    X86_AT(c, 0xd5271u);
    push32(c, 0xd5276u); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd5276u);
    X86_TICK(c, 23);
    // 0d5276  movzx eax, al
    X86_AT(c, 0xd5276u);
    c.r[0] = g8(c, 0);
    // 0d5279  pop edx
    X86_AT(c, 0xd5279u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d527a  leave 
    X86_AT(c, 0xd527au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d527b  ret 
    X86_AT(c, 0xd527bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5267u, "ran off the end of a function");
}
void f_000d527c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d527c  enter 0, 0
    X86_AT(c, 0xd527cu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d5280  push ebx
    X86_AT(c, 0xd5280u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5281  push edx
    X86_AT(c, 0xd5281u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d5282  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xd5282u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d5285  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd5285u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d5288  mov ah, 0x10
    X86_AT(c, 0xd5288u);
    s8(c, 4, 0x10u);
    // 0d528a  call 0xd5358
    X86_AT(c, 0xd528au);
    push32(c, 0xd528fu); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd528fu);
    X86_TICK(c, 27);
    // 0d528f  movzx eax, al
    X86_AT(c, 0xd528fu);
    c.r[0] = g8(c, 0);
    // 0d5292  pop edx
    X86_AT(c, 0xd5292u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d5293  pop ebx
    X86_AT(c, 0xd5293u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d5294  leave 
    X86_AT(c, 0xd5294u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d5295  ret 
    X86_AT(c, 0xd5295u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd527cu, "ran off the end of a function");
}
void f_000d5296(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d5296  enter 0, 0
    X86_AT(c, 0xd5296u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d529a  push ebx
    X86_AT(c, 0xd529au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d529b  push edx
    X86_AT(c, 0xd529bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d529c  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xd529cu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d529f  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd529fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d52a2  mov ah, 0x11
    X86_AT(c, 0xd52a2u);
    s8(c, 4, 0x11u);
    // 0d52a4  call 0xd5358
    X86_AT(c, 0xd52a4u);
    push32(c, 0xd52a9u); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd52a9u);
    X86_TICK(c, 27);
    // 0d52a9  movzx eax, al
    X86_AT(c, 0xd52a9u);
    c.r[0] = g8(c, 0);
    // 0d52ac  pop edx
    X86_AT(c, 0xd52acu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d52ad  pop ebx
    X86_AT(c, 0xd52adu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d52ae  leave 
    X86_AT(c, 0xd52aeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d52af  ret 
    X86_AT(c, 0xd52afu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5296u, "ran off the end of a function");
}
void f_000d52b0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d52b0  enter 0, 0
    X86_AT(c, 0xd52b0u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d52b4  push ebx
    X86_AT(c, 0xd52b4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d52b5  push edx
    X86_AT(c, 0xd52b5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d52b6  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xd52b6u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d52b9  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd52b9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d52bc  mov ah, 0x12
    X86_AT(c, 0xd52bcu);
    s8(c, 4, 0x12u);
    // 0d52be  call 0xd5358
    X86_AT(c, 0xd52beu);
    push32(c, 0xd52c3u); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd52c3u);
    X86_TICK(c, 27);
    // 0d52c3  movzx eax, al
    X86_AT(c, 0xd52c3u);
    c.r[0] = g8(c, 0);
    // 0d52c6  pop edx
    X86_AT(c, 0xd52c6u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d52c7  pop ebx
    X86_AT(c, 0xd52c7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d52c8  leave 
    X86_AT(c, 0xd52c8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d52c9  ret 
    X86_AT(c, 0xd52c9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd52b0u, "ran off the end of a function");
}
void f_000d52ca(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d52ca  enter 0, 0
    X86_AT(c, 0xd52cau);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d52ce  push ebx
    X86_AT(c, 0xd52ceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d52cf  push edx
    X86_AT(c, 0xd52cfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d52d0  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xd52d0u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d52d3  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd52d3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d52d6  mov ah, 0x13
    X86_AT(c, 0xd52d6u);
    s8(c, 4, 0x13u);
    // 0d52d8  call 0xd5358
    X86_AT(c, 0xd52d8u);
    push32(c, 0xd52ddu); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd52ddu);
    X86_TICK(c, 27);
    // 0d52dd  movzx eax, al
    X86_AT(c, 0xd52ddu);
    c.r[0] = g8(c, 0);
    // 0d52e0  pop edx
    X86_AT(c, 0xd52e0u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d52e1  pop ebx
    X86_AT(c, 0xd52e1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d52e2  leave 
    X86_AT(c, 0xd52e2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d52e3  ret 
    X86_AT(c, 0xd52e3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd52cau, "ran off the end of a function");
}
void f_000d52e4(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d52e4  enter 0, 0
    X86_AT(c, 0xd52e4u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d52e8  push ebx
    X86_AT(c, 0xd52e8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d52e9  push edx
    X86_AT(c, 0xd52e9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d52ea  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xd52eau);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d52ed  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd52edu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d52f0  mov ah, 0x14
    X86_AT(c, 0xd52f0u);
    s8(c, 4, 0x14u);
    // 0d52f2  call 0xd5358
    X86_AT(c, 0xd52f2u);
    push32(c, 0xd52f7u); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd52f7u);
    X86_TICK(c, 27);
    // 0d52f7  movzx eax, al
    X86_AT(c, 0xd52f7u);
    c.r[0] = g8(c, 0);
    // 0d52fa  pop edx
    X86_AT(c, 0xd52fau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d52fb  pop ebx
    X86_AT(c, 0xd52fbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d52fc  leave 
    X86_AT(c, 0xd52fcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d52fd  ret 
    X86_AT(c, 0xd52fdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd52e4u, "ran off the end of a function");
}
void f_000d52fe(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d52fe  enter 0, 0
    X86_AT(c, 0xd52feu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0d5302  push ebx
    X86_AT(c, 0xd5302u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5303  push edx
    X86_AT(c, 0xd5303u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d5304  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xd5304u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d5307  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd5307u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d530a  mov ah, 0x20
    X86_AT(c, 0xd530au);
    s8(c, 4, 0x20u);
    // 0d530c  call 0xd5358
    X86_AT(c, 0xd530cu);
    push32(c, 0xd5311u); x86_call_known(c, 0xd5358u, f_000d5358); X86_RET(c, 0xd5311u);
    X86_TICK(c, 27);
    // 0d5311  movzx eax, al
    X86_AT(c, 0xd5311u);
    c.r[0] = g8(c, 0);
    // 0d5314  pop edx
    X86_AT(c, 0xd5314u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0d5315  pop ebx
    X86_AT(c, 0xd5315u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d5316  leave 
    X86_AT(c, 0xd5316u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d5317  ret 
    X86_AT(c, 0xd5317u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd52feu, "ran off the end of a function");
}
void f_000d5358(X86Cpu& c) {
    X86_TICK(c, 44);
    // 0d5358  push gs
    X86_AT(c, 0xd5358u);
    push32(c, c.sreg[5]);
    // 0d535a  push fs
    X86_AT(c, 0xd535au);
    push32(c, c.sreg[4]);
    // 0d535c  push es
    X86_AT(c, 0xd535cu);
    push32(c, c.sreg[0]);
    // 0d535d  push ds
    X86_AT(c, 0xd535du);
    push32(c, c.sreg[3]);
    // 0d535e  pushal 
    X86_AT(c, 0xd535eu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d535f  pushfd 
    X86_AT(c, 0xd535fu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0d5360  mov ebp, esp
    X86_AT(c, 0xd5360u);
    c.r[5] = c.r[4];
    // 0d5362  movzx ebx, ah
    X86_AT(c, 0xd5362u);
    c.r[3] = g8(c, 4);
    // 0d5365  call dword ptr cs:[ebx*4 + 0xd5376]
    X86_AT(c, 0xd5365u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xD5376u))); push32(c, 0xd536du);
      switch (t) {
      case 0xd5422u: x86_call_known(c, 0xd5422u, f_000d5422); break;
      case 0xd5427u: x86_call_known(c, 0xd5427u, f_000d5427); break;
      case 0xd5497u: x86_call_known(c, 0xd5497u, f_000d5497); break;
      case 0xd54d5u: x86_call_known(c, 0xd54d5u, f_000d54d5); break;
      case 0xd5555u: x86_call_known(c, 0xd5555u, f_000d5555); break;
      case 0xd556au: x86_call_known(c, 0xd556au, f_000d556a); break;
      case 0xd557eu: x86_call_known(c, 0xd557eu, f_000d557e); break;
      case 0xd558du: x86_call_known(c, 0xd558du, f_000d558d); break;
      case 0xd55d5u: x86_call_known(c, 0xd55d5u, f_000d55d5); break;
      case 0xd55f1u: x86_call_known(c, 0xd55f1u, f_000d55f1); break;
      case 0xd560du: x86_call_known(c, 0xd560du, f_000d560d); break;
      case 0xd5633u: x86_call_known(c, 0xd5633u, f_000d5633); break;
      case 0xd564fu: x86_call_known(c, 0xd564fu, f_000d564f); break;
      case 0xd5696u: x86_call_known(c, 0xd5696u, f_000d5696); break;
      case 0xd56bcu: x86_call_known(c, 0xd56bcu, f_000d56bc); break;
      case 0xd56e2u: x86_call_known(c, 0xd56e2u, f_000d56e2); break;
      case 0xd5708u: x86_call_known(c, 0xd5708u, f_000d5708); break;
      case 0xd572eu: x86_call_known(c, 0xd572eu, f_000d572e); break;
      case 0xd5754u: x86_call_known(c, 0xd5754u, f_000d5754); break;
      case 0xd5763u: x86_call_known(c, 0xd5763u, f_000d5763); break;
      case 0xd579fu: x86_call_known(c, 0xd579fu, f_000d579f); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xd536du); }
    X86_TICK(c, 56);
    // 0d536d  popfd 
    X86_AT(c, 0xd536du);
    x86_popfd(c, 4);
    // 0d536e  popal 
    X86_AT(c, 0xd536eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d536f  pop ds
    X86_AT(c, 0xd536fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d5370  pop es
    X86_AT(c, 0xd5370u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d5371  pop fs
    X86_AT(c, 0xd5371u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0d5373  pop gs
    X86_AT(c, 0xd5373u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0d5375  ret 
    X86_AT(c, 0xd5375u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5358u, "ran off the end of a function");
}
void f_000d5422(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d5422  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0xd5422u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 0d5426  ret 
    X86_AT(c, 0xd5426u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5422u, "ran off the end of a function");
}
void f_000d5427(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0d5427  pushfd 
    X86_AT(c, 0xd5427u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0d5428  cld 
    X86_AT(c, 0xd5428u);
    c.fl &= ~X86_DF;
    // 0d5429  cli 
    X86_AT(c, 0xd5429u);
    c.fl &= ~X86_IF;
    // 0d542a  call 0xd6d90
    X86_AT(c, 0xd542au);
    push32(c, 0xd542fu); x86_call_known(c, 0xd6d90u, f_000d6d90); X86_RET(c, 0xd542fu);
    X86_TICK(c, 7);
    // 0d542f  call 0xd66cc
    X86_AT(c, 0xd542fu);
    push32(c, 0xd5434u); x86_call_known(c, 0xd66ccu, f_000d66cc); X86_RET(c, 0xd5434u);
    X86_TICK(c, 7);
    // 0d5434  call 0xd6753
    X86_AT(c, 0xd5434u);
    push32(c, 0xd5439u); x86_call_known(c, 0xd6753u, f_000d6753); X86_RET(c, 0xd5439u);
    X86_TICK(c, 7);
    // 0d5439  call 0xd67a7
    X86_AT(c, 0xd5439u);
    push32(c, 0xd543eu); x86_call_known(c, 0xd67a7u, f_000d67a7); X86_RET(c, 0xd543eu);
    X86_TICK(c, 7);
    // 0d543e  call 0xd59d8
    X86_AT(c, 0xd543eu);
    push32(c, 0xd5443u); x86_call_known(c, 0xd59d8u, f_000d59d8); X86_RET(c, 0xd5443u);
    X86_TICK(c, 7);
    // 0d5443  call 0xd58b2
    X86_AT(c, 0xd5443u);
    push32(c, 0xd5448u); x86_call_known(c, 0xd58b2u, f_000d58b2); X86_RET(c, 0xd5448u);
    X86_TICK(c, 7);
    // 0d5448  call 0xd5912
    X86_AT(c, 0xd5448u);
    push32(c, 0xd544du); x86_call_known(c, 0xd5912u, f_000d5912); X86_RET(c, 0xd544du);
    X86_TICK(c, 7);
    // 0d544d  call 0xd5933
    X86_AT(c, 0xd544du);
    push32(c, 0xd5452u); x86_call_known(c, 0xd5933u, f_000d5933); X86_RET(c, 0xd5452u);
    X86_TICK(c, 7);
    // 0d5452  call 0xd5993
    X86_AT(c, 0xd5452u);
    push32(c, 0xd5457u); x86_call_known(c, 0xd5993u, f_000d5993); X86_RET(c, 0xd5457u);
    X86_TICK(c, 7);
    // 0d5457  call 0xd64e2
    X86_AT(c, 0xd5457u);
    push32(c, 0xd545cu); x86_call_known(c, 0xd64e2u, f_000d64e2); X86_RET(c, 0xd545cu);
    X86_TICK(c, 5);
    // 0d545c  jb 0xd5492
    X86_AT(c, 0xd545cu);
    if (x86_cc(c, 2)) { goto L_d5492; }
    X86_TICK(c, 12);
    // 0d545e  cmp byte ptr [0xb37f9], 0
    X86_AT(c, 0xd545eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB37F9u))), 0x0u, 0, 1);
    // 0d5465  jne 0xd5478
    X86_AT(c, 0xd5465u);
    if (x86_cc(c, 5)) { goto L_d5478; }
    X86_TICK(c, 7);
    // 0d5467  call 0xd65ee
    X86_AT(c, 0xd5467u);
    push32(c, 0xd546cu); x86_call_known(c, 0xd65eeu, f_000d65ee); X86_RET(c, 0xd546cu);
    X86_TICK(c, 11);
    // 0d546c  mov al, byte ptr [0xb35b5]
    X86_AT(c, 0xd546cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB35B5u))));
    // 0d5471  call 0xd696f
    X86_AT(c, 0xd5471u);
    push32(c, 0xd5476u); x86_call_known(c, 0xd696fu, f_000d696f); X86_RET(c, 0xd5476u);
    X86_TICK(c, 7);
    // 0d5476  jmp 0xd548c
    X86_AT(c, 0xd5476u);
    goto L_d548c;
L_d5478:
    X86_TICK(c, 7);
    // 0d5478  call 0xd6572
    X86_AT(c, 0xd5478u);
    push32(c, 0xd547du); x86_call_known(c, 0xd6572u, f_000d6572); X86_RET(c, 0xd547du);
    X86_TICK(c, 11);
    // 0d547d  mov al, byte ptr [0xb35b5]
    X86_AT(c, 0xd547du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB35B5u))));
    // 0d5482  call 0xd696f
    X86_AT(c, 0xd5482u);
    push32(c, 0xd5487u); x86_call_known(c, 0xd696fu, f_000d696f); X86_RET(c, 0xd5487u);
    X86_TICK(c, 7);
    // 0d5487  call 0xd6893
    X86_AT(c, 0xd5487u);
    push32(c, 0xd548cu); x86_call_known(c, 0xd6893u, f_000d6893); X86_RET(c, 0xd548cu);
L_d548c:
    X86_TICK(c, 18);
    // 0d548c  popfd 
    X86_AT(c, 0xd548cu);
    x86_popfd(c, 4);
    // 0d548d  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd548du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d5491  ret 
    X86_AT(c, 0xd5491u);
    c.eip = pop32(c); return;
L_d5492:
    X86_TICK(c, 12);
    // 0d5492  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0xd5492u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 0d5496  ret 
    X86_AT(c, 0xd5496u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5427u, "ran off the end of a function");
}
void f_000d5497(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d5497  push ds
    X86_AT(c, 0xd5497u);
    push32(c, c.sreg[3]);
    // 0d5498  pop es
    X86_AT(c, 0xd5498u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d5499  call 0xd57bd
    X86_AT(c, 0xd5499u);
    push32(c, 0xd549eu); x86_call_known(c, 0xd57bdu, f_000d57bd); X86_RET(c, 0xd549eu);
L_d549e:
    X86_TICK(c, 19);
    // 0d549e  lea esi, [0xb3825]
    X86_AT(c, 0xd549eu);
    c.r[6] = (uint32_t)(0xB3825u);
    // 0d54a4  mov ax, word ptr [esi + 0x10]
    X86_AT(c, 0xd54a4u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u))));
    // 0d54a8  add ax, word ptr [esi + 0x30]
    X86_AT(c, 0xd54a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x30u))), 0, 2)); }
    // 0d54ac  or ax, ax
    X86_AT(c, 0xd54acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 0d54af  jne 0xd549e
    X86_AT(c, 0xd54afu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd549eu); goto L_d549e; }
    X86_TICK(c, 7);
    // 0d54b1  call 0xd6873
    X86_AT(c, 0xd54b1u);
    push32(c, 0xd54b6u); x86_call_known(c, 0xd6873u, f_000d6873); X86_RET(c, 0xd54b6u);
    X86_TICK(c, 7);
    // 0d54b6  call 0xd6628
    X86_AT(c, 0xd54b6u);
    push32(c, 0xd54bbu); x86_call_known(c, 0xd6628u, f_000d6628); X86_RET(c, 0xd54bbu);
    X86_TICK(c, 12);
    // 0d54bb  cmp byte ptr [0xb37f9], 0
    X86_AT(c, 0xd54bbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB37F9u))), 0x0u, 0, 1);
    // 0d54c2  jne 0xd54cb
    X86_AT(c, 0xd54c2u);
    if (x86_cc(c, 5)) { goto L_d54cb; }
    X86_TICK(c, 7);
    // 0d54c4  call 0xd66a3
    X86_AT(c, 0xd54c4u);
    push32(c, 0xd54c9u); x86_call_known(c, 0xd66a3u, f_000d66a3); X86_RET(c, 0xd54c9u);
    X86_TICK(c, 7);
    // 0d54c9  jmp 0xd54d0
    X86_AT(c, 0xd54c9u);
    goto L_d54d0;
L_d54cb:
    X86_TICK(c, 7);
    // 0d54cb  call 0xd6664
    X86_AT(c, 0xd54cbu);
    push32(c, 0xd54d0u); x86_call_known(c, 0xd6664u, f_000d6664); X86_RET(c, 0xd54d0u);
L_d54d0:
    X86_TICK(c, 12);
    // 0d54d0  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd54d0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d54d4  ret 
    X86_AT(c, 0xd54d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5497u, "ran off the end of a function");
}
void f_000d54d5(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d54d5  cmp byte ptr [0xb35b6], 0
    X86_AT(c, 0xd54d5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35B6u))), 0x0u, 0, 1);
    // 0d54dc  jne 0xd5550
    X86_AT(c, 0xd54dcu);
    if (x86_cc(c, 5)) { goto L_d5550; }
    X86_TICK(c, 47);
    // 0d54de  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xd54deu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0d54e1  mov byte ptr [0xb35b4], dl
    X86_AT(c, 0xd54e1u);
    wr8((c.sbase[3] + (uint32_t)(0xB35B4u)), g8(c, 2));
    // 0d54e7  mov byte ptr [0xb35a8], dl
    X86_AT(c, 0xd54e7u);
    wr8((c.sbase[3] + (uint32_t)(0xB35A8u)), g8(c, 2));
    // 0d54ed  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xd54edu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d54f0  mov ax, word ptr [ebp + 0x24]
    X86_AT(c, 0xd54f0u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0d54f4  mov dword ptr [0xb3591], esi
    X86_AT(c, 0xd54f4u);
    wr32((c.sbase[3] + (uint32_t)(0xB3591u)), c.r[6]);
    // 0d54fa  mov word ptr [0xb3595], ax
    X86_AT(c, 0xd54fau);
    wr16((c.sbase[3] + (uint32_t)(0xB3595u)), (c.r[0] & 0xFFFFu));
    // 0d5500  mov dword ptr [0xb3597], esi
    X86_AT(c, 0xd5500u);
    wr32((c.sbase[3] + (uint32_t)(0xB3597u)), c.r[6]);
    // 0d5506  mov word ptr [0xb359b], ax
    X86_AT(c, 0xd5506u);
    wr16((c.sbase[3] + (uint32_t)(0xB359Bu)), (c.r[0] & 0xFFFFu));
    // 0d550c  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xd550cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0d550f  add ecx, esi
    X86_AT(c, 0xd550fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 0d5511  mov dword ptr [0xb359d], ecx
    X86_AT(c, 0xd5511u);
    wr32((c.sbase[3] + (uint32_t)(0xB359Du)), c.r[1]);
    // 0d5517  mov word ptr [0xb35a1], ax
    X86_AT(c, 0xd5517u);
    wr16((c.sbase[3] + (uint32_t)(0xB35A1u)), (c.r[0] & 0xFFFFu));
    // 0d551d  mov word ptr [0xb35b2], 0
    X86_AT(c, 0xd551du);
    wr16((c.sbase[3] + (uint32_t)(0xB35B2u)), 0x0u);
    // 0d5526  mov word ptr [0xb35a3], 0
    X86_AT(c, 0xd5526u);
    wr16((c.sbase[3] + (uint32_t)(0xB35A3u)), 0x0u);
    // 0d552f  mov word ptr [0xb35a5], 0
    X86_AT(c, 0xd552fu);
    wr16((c.sbase[3] + (uint32_t)(0xB35A5u)), 0x0u);
    // 0d5538  call 0xd5899
    X86_AT(c, 0xd5538u);
    push32(c, 0xd553du); x86_call_known(c, 0xd5899u, f_000d5899); X86_RET(c, 0xd553du);
    X86_TICK(c, 16);
    // 0d553d  mov byte ptr [0xb35bd], 0xff
    X86_AT(c, 0xd553du);
    wr8((c.sbase[3] + (uint32_t)(0xB35BDu)), 0xFFu);
    // 0d5544  mov byte ptr [0xb35b6], 0xff
    X86_AT(c, 0xd5544u);
    wr8((c.sbase[3] + (uint32_t)(0xB35B6u)), 0xFFu);
    // 0d554b  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd554bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d554f  ret 
    X86_AT(c, 0xd554fu);
    c.eip = pop32(c); return;
L_d5550:
    X86_TICK(c, 12);
    // 0d5550  mov byte ptr [ebp + 0x20], 2
    X86_AT(c, 0xd5550u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x2u);
    // 0d5554  ret 
    X86_AT(c, 0xd5554u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd54d5u, "ran off the end of a function");
}
void f_000d5555(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0d5555  call 0xd57bd
    X86_AT(c, 0xd5555u);
    push32(c, 0xd555au); x86_call_known(c, 0xd57bdu, f_000d57bd); X86_RET(c, 0xd555au);
    X86_TICK(c, 5);
    // 0d555a  jb 0xd5565
    X86_AT(c, 0xd555au);
    if (x86_cc(c, 2)) { goto L_d5565; }
    X86_TICK(c, 12);
    // 0d5560  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd5560u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d5564  ret 
    X86_AT(c, 0xd5564u);
    c.eip = pop32(c); return;
L_d5565:
    X86_TICK(c, 12);
    // 0d5565  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0xd5565u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 0d5569  ret 
    X86_AT(c, 0xd5569u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5555u, "ran off the end of a function");
}
void f_000d556a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d556a  mov byte ptr [0xb35b8], 0xff
    X86_AT(c, 0xd556au);
    wr8((c.sbase[3] + (uint32_t)(0xB35B8u)), 0xFFu);
    // 0d5571  mov byte ptr [0xb35bf], 0xff
    X86_AT(c, 0xd5571u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BFu)), 0xFFu);
    // 0d5578  call 0xd5848
    X86_AT(c, 0xd5578u);
    push32(c, 0xd557du); x86_call_known(c, 0xd5848u, f_000d5848); X86_RET(c, 0xd557du);
    X86_TICK(c, 10);
    // 0d557d  ret 
    X86_AT(c, 0xd557du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd556au, "ran off the end of a function");
}
void f_000d557e(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d557e  mov byte ptr [0xb35b8], 0
    X86_AT(c, 0xd557eu);
    wr8((c.sbase[3] + (uint32_t)(0xB35B8u)), 0x0u);
    // 0d5585  mov byte ptr [0xb35be], 0xff
    X86_AT(c, 0xd5585u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BEu)), 0xFFu);
    // 0d558c  ret 
    X86_AT(c, 0xd558cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd557eu, "ran off the end of a function");
}
void f_000d558d(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0d558d  mov byte ptr [0xb3816], 0xff
    X86_AT(c, 0xd558du);
    wr8((c.sbase[3] + (uint32_t)(0xB3816u)), 0xFFu);
    // 0d5594  mov ax, word ptr [0xb3595]
    X86_AT(c, 0xd5594u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB3595u))));
    // 0d559a  mov word ptr [ebp + 0x28], ax
    X86_AT(c, 0xd559au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 0d559e  mov eax, dword ptr [0xb3591]
    X86_AT(c, 0xd559eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB3591u)));
    // 0d55a3  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0xd55a3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
    // 0d55a6  mov ax, word ptr [0xb35a3]
    X86_AT(c, 0xd55a6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB35A3u))));
    // 0d55ac  mov word ptr [ebp + 0x14], ax
    X86_AT(c, 0xd55acu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[0] & 0xFFFFu));
    // 0d55b0  mov ax, word ptr [0xb35a5]
    X86_AT(c, 0xd55b0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB35A5u))));
    // 0d55b6  mov word ptr [ebp + 0x1c], ax
    X86_AT(c, 0xd55b6u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), (c.r[0] & 0xFFFFu));
    // 0d55ba  mov al, byte ptr [0xb35a9]
    X86_AT(c, 0xd55bau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB35A9u))));
    // 0d55bf  mov ah, byte ptr [0xb35b6]
    X86_AT(c, 0xd55bfu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0xB35B6u))));
    // 0d55c5  mov word ptr [ebp + 0x18], ax
    X86_AT(c, 0xd55c5u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 0d55c9  mov byte ptr [0xb3816], 0
    X86_AT(c, 0xd55c9u);
    wr8((c.sbase[3] + (uint32_t)(0xB3816u)), 0x0u);
    // 0d55d0  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd55d0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d55d4  ret 
    X86_AT(c, 0xd55d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd558du, "ran off the end of a function");
}
void f_000d55d5(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d55d5  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xd55d5u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0d55d8  inc dl
    X86_AT(c, 0xd55d8u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0d55da  cmp dl, 8
    X86_AT(c, 0xd55dau);
    (void)x86_sub(c, g8(c, 2), 0x8u, 0, 1);
    // 0d55dd  ja 0xd55ec
    X86_AT(c, 0xd55ddu);
    if (x86_cc(c, 7)) { goto L_d55ec; }
    X86_TICK(c, 16);
    // 0d55df  dec dl
    X86_AT(c, 0xd55dfu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0d55e1  mov byte ptr [0xb35c2], dl
    X86_AT(c, 0xd55e1u);
    wr8((c.sbase[3] + (uint32_t)(0xB35C2u)), g8(c, 2));
    // 0d55e7  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd55e7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d55eb  ret 
    X86_AT(c, 0xd55ebu);
    c.eip = pop32(c); return;
L_d55ec:
    X86_TICK(c, 12);
    // 0d55ec  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xd55ecu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0d55f0  ret 
    X86_AT(c, 0xd55f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd55d5u, "ran off the end of a function");
}
void f_000d55f1(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d55f1  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xd55f1u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0d55f4  inc dl
    X86_AT(c, 0xd55f4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0d55f6  cmp dl, 1
    X86_AT(c, 0xd55f6u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 0d55f9  ja 0xd5608
    X86_AT(c, 0xd55f9u);
    if (x86_cc(c, 7)) { goto L_d5608; }
    X86_TICK(c, 16);
    // 0d55fb  dec dl
    X86_AT(c, 0xd55fbu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0d55fd  mov byte ptr [0xb35b9], dl
    X86_AT(c, 0xd55fdu);
    wr8((c.sbase[3] + (uint32_t)(0xB35B9u)), g8(c, 2));
    // 0d5603  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd5603u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d5607  ret 
    X86_AT(c, 0xd5607u);
    c.eip = pop32(c); return;
L_d5608:
    X86_TICK(c, 12);
    // 0d5608  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xd5608u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0d560c  ret 
    X86_AT(c, 0xd560cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd55f1u, "ran off the end of a function");
}
void f_000d560d(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d560d  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0xd560du);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0d5611  cmp dx, 0xfa
    X86_AT(c, 0xd5611u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFAu, 0, 2);
    // 0d5616  ja 0xd562e
    X86_AT(c, 0xd5616u);
    if (x86_cc(c, 7)) { goto L_d562e; }
    X86_TICK(c, 13);
    // 0d5618  mov al, dl
    X86_AT(c, 0xd5618u);
    s8(c, 0, g8(c, 2));
    // 0d561a  mov byte ptr [0xb35b5], al
    X86_AT(c, 0xd561au);
    wr8((c.sbase[3] + (uint32_t)(0xB35B5u)), g8(c, 0));
    // 0d561f  mov byte ptr [0xb35a9], al
    X86_AT(c, 0xd561fu);
    wr8((c.sbase[3] + (uint32_t)(0xB35A9u)), g8(c, 0));
    // 0d5624  call 0xd696f
    X86_AT(c, 0xd5624u);
    push32(c, 0xd5629u); x86_call_known(c, 0xd696fu, f_000d696f); X86_RET(c, 0xd5629u);
    X86_TICK(c, 12);
    // 0d5629  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd5629u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d562d  ret 
    X86_AT(c, 0xd562du);
    c.eip = pop32(c); return;
L_d562e:
    X86_TICK(c, 12);
    // 0d562e  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xd562eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0d5632  ret 
    X86_AT(c, 0xd5632u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd560du, "ran off the end of a function");
}
void f_000d5633(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d5633  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xd5633u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0d5636  inc dl
    X86_AT(c, 0xd5636u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0d5638  cmp dl, 1
    X86_AT(c, 0xd5638u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 0d563b  ja 0xd564a
    X86_AT(c, 0xd563bu);
    if (x86_cc(c, 7)) { goto L_d564a; }
    X86_TICK(c, 16);
    // 0d563d  dec dl
    X86_AT(c, 0xd563du);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0d563f  mov byte ptr [0xb3816], dl
    X86_AT(c, 0xd563fu);
    wr8((c.sbase[3] + (uint32_t)(0xB3816u)), g8(c, 2));
    // 0d5645  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd5645u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d5649  ret 
    X86_AT(c, 0xd5649u);
    c.eip = pop32(c); return;
L_d564a:
    X86_TICK(c, 12);
    // 0d564a  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xd564au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0d564e  ret 
    X86_AT(c, 0xd564eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5633u, "ran off the end of a function");
}
void f_000d564f(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d564f  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xd564fu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0d5652  inc dl
    X86_AT(c, 0xd5652u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0d5654  cmp dl, 1
    X86_AT(c, 0xd5654u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 0d5657  ja 0xd5691
    X86_AT(c, 0xd5657u);
    if (x86_cc(c, 7)) { goto L_d5691; }
    X86_TICK(c, 14);
    // 0d5659  dec dl
    X86_AT(c, 0xd5659u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0d565b  cmp byte ptr [0xb37f9], 0
    X86_AT(c, 0xd565bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB37F9u))), 0x0u, 0, 1);
    // 0d5662  jne 0xd567c
    X86_AT(c, 0xd5662u);
    if (x86_cc(c, 5)) { goto L_d567c; }
    X86_TICK(c, 7);
    // 0d5664  and dl, dl
    X86_AT(c, 0xd5664u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 0d5666  je 0xd5671
    X86_AT(c, 0xd5666u);
    if (x86_cc(c, 4)) { goto L_d5671; }
    X86_TICK(c, 9);
    // 0d5668  mov ah, 0x17
    X86_AT(c, 0xd5668u);
    s8(c, 4, 0x17u);
    // 0d566a  call 0xd4fcc
    X86_AT(c, 0xd566au);
    push32(c, 0xd566fu); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd566fu);
    X86_TICK(c, 7);
    // 0d566f  jmp 0xd568c
    X86_AT(c, 0xd566fu);
    goto L_d568c;
L_d5671:
    X86_TICK(c, 11);
    // 0d5671  mov bl, 0
    X86_AT(c, 0xd5671u);
    s8(c, 3, 0x0u);
    // 0d5673  mov ah, 0x15
    X86_AT(c, 0xd5673u);
    s8(c, 4, 0x15u);
    // 0d5675  call 0xd4fcc
    X86_AT(c, 0xd5675u);
    push32(c, 0xd567au); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd567au);
    X86_TICK(c, 7);
    // 0d567a  jmp 0xd568c
    X86_AT(c, 0xd567au);
    goto L_d568c;
L_d567c:
    X86_TICK(c, 7);
    // 0d567c  and dl, dl
    X86_AT(c, 0xd567cu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 0d567e  je 0xd5687
    X86_AT(c, 0xd567eu);
    if (x86_cc(c, 4)) { goto L_d5687; }
    X86_TICK(c, 7);
    // 0d5680  call 0xd68d4
    X86_AT(c, 0xd5680u);
    push32(c, 0xd5685u); x86_call_known(c, 0xd68d4u, f_000d68d4); X86_RET(c, 0xd5685u);
    X86_TICK(c, 7);
    // 0d5685  jmp 0xd568c
    X86_AT(c, 0xd5685u);
    goto L_d568c;
L_d5687:
    X86_TICK(c, 7);
    // 0d5687  call 0xd6893
    X86_AT(c, 0xd5687u);
    push32(c, 0xd568cu); x86_call_known(c, 0xd6893u, f_000d6893); X86_RET(c, 0xd568cu);
L_d568c:
    X86_TICK(c, 12);
    // 0d568c  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd568cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d5690  ret 
    X86_AT(c, 0xd5690u);
    c.eip = pop32(c); return;
L_d5691:
    X86_TICK(c, 12);
    // 0d5691  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xd5691u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0d5695  ret 
    X86_AT(c, 0xd5695u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd564fu, "ran off the end of a function");
}
void f_000d5696(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d5696  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xd5696u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0d5699  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xd5699u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0d569c  cmp bl, 0x20
    X86_AT(c, 0xd569cu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0d569f  jae 0xd56b7
    X86_AT(c, 0xd569fu);
    if (x86_cc(c, 3)) { goto L_d56b7; }
    X86_TICK(c, 9);
    // 0d56a1  inc al
    X86_AT(c, 0xd56a1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0d56a3  cmp al, 8
    X86_AT(c, 0xd56a3u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 0d56a5  ja 0xd56b7
    X86_AT(c, 0xd56a5u);
    if (x86_cc(c, 7)) { goto L_d56b7; }
    X86_TICK(c, 19);
    // 0d56a7  dec al
    X86_AT(c, 0xd56a7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0d56a9  movzx ebx, bl
    X86_AT(c, 0xd56a9u);
    c.r[3] = g8(c, 3);
    // 0d56ac  mov byte ptr [ebx + 0xb35f5], al
    X86_AT(c, 0xd56acu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xB35F5u)), g8(c, 0));
    // 0d56b2  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd56b2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d56b6  ret 
    X86_AT(c, 0xd56b6u);
    c.eip = pop32(c); return;
L_d56b7:
    X86_TICK(c, 12);
    // 0d56b7  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xd56b7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0d56bb  ret 
    X86_AT(c, 0xd56bbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5696u, "ran off the end of a function");
}
void f_000d56bc(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d56bc  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xd56bcu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0d56bf  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xd56bfu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0d56c2  cmp bl, 0x20
    X86_AT(c, 0xd56c2u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0d56c5  jae 0xd56dd
    X86_AT(c, 0xd56c5u);
    if (x86_cc(c, 3)) { goto L_d56dd; }
    X86_TICK(c, 9);
    // 0d56c7  inc al
    X86_AT(c, 0xd56c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0d56c9  cmp al, 0x10
    X86_AT(c, 0xd56c9u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 0d56cb  ja 0xd56dd
    X86_AT(c, 0xd56cbu);
    if (x86_cc(c, 7)) { goto L_d56dd; }
    X86_TICK(c, 19);
    // 0d56cd  dec al
    X86_AT(c, 0xd56cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0d56cf  movzx ebx, bl
    X86_AT(c, 0xd56cfu);
    c.r[3] = g8(c, 3);
    // 0d56d2  mov byte ptr [ebx + 0xb3615], al
    X86_AT(c, 0xd56d2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xB3615u)), g8(c, 0));
    // 0d56d8  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd56d8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d56dc  ret 
    X86_AT(c, 0xd56dcu);
    c.eip = pop32(c); return;
L_d56dd:
    X86_TICK(c, 12);
    // 0d56dd  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xd56ddu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0d56e1  ret 
    X86_AT(c, 0xd56e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd56bcu, "ran off the end of a function");
}
void f_000d56e2(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d56e2  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xd56e2u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0d56e5  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xd56e5u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0d56e8  cmp bl, 0x20
    X86_AT(c, 0xd56e8u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0d56eb  jae 0xd5703
    X86_AT(c, 0xd56ebu);
    if (x86_cc(c, 3)) { goto L_d5703; }
    X86_TICK(c, 9);
    // 0d56ed  inc al
    X86_AT(c, 0xd56edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0d56ef  cmp al, 1
    X86_AT(c, 0xd56efu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 0d56f1  ja 0xd5703
    X86_AT(c, 0xd56f1u);
    if (x86_cc(c, 7)) { goto L_d5703; }
    X86_TICK(c, 19);
    // 0d56f3  dec al
    X86_AT(c, 0xd56f3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0d56f5  movzx ebx, bl
    X86_AT(c, 0xd56f5u);
    c.r[3] = g8(c, 3);
    // 0d56f8  mov byte ptr [ebx + 0xb35d5], al
    X86_AT(c, 0xd56f8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xB35D5u)), g8(c, 0));
    // 0d56fe  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd56feu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d5702  ret 
    X86_AT(c, 0xd5702u);
    c.eip = pop32(c); return;
L_d5703:
    X86_TICK(c, 12);
    // 0d5703  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xd5703u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0d5707  ret 
    X86_AT(c, 0xd5707u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd56e2u, "ran off the end of a function");
}
void f_000d5708(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d5708  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xd5708u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0d570b  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xd570bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0d570e  cmp bl, 0x20
    X86_AT(c, 0xd570eu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0d5711  jae 0xd5729
    X86_AT(c, 0xd5711u);
    if (x86_cc(c, 3)) { goto L_d5729; }
    X86_TICK(c, 9);
    // 0d5713  add al, 0x28
    X86_AT(c, 0xd5713u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 0d5715  cmp al, 0x50
    X86_AT(c, 0xd5715u);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 0d5717  ja 0xd5729
    X86_AT(c, 0xd5717u);
    if (x86_cc(c, 7)) { goto L_d5729; }
    X86_TICK(c, 19);
    // 0d5719  sub al, 0x28
    X86_AT(c, 0xd5719u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 0d571b  movzx ebx, bl
    X86_AT(c, 0xd571bu);
    c.r[3] = g8(c, 3);
    // 0d571e  mov byte ptr [ebx + 0xb3655], al
    X86_AT(c, 0xd571eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xB3655u)), g8(c, 0));
    // 0d5724  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd5724u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d5728  ret 
    X86_AT(c, 0xd5728u);
    c.eip = pop32(c); return;
L_d5729:
    X86_TICK(c, 12);
    // 0d5729  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xd5729u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0d572d  ret 
    X86_AT(c, 0xd572du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5708u, "ran off the end of a function");
}
void f_000d572e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d572e  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xd572eu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0d5731  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xd5731u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0d5734  cmp bl, 0x20
    X86_AT(c, 0xd5734u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0d5737  jae 0xd574f
    X86_AT(c, 0xd5737u);
    if (x86_cc(c, 3)) { goto L_d574f; }
    X86_TICK(c, 9);
    // 0d5739  add al, 0x28
    X86_AT(c, 0xd5739u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 0d573b  cmp al, 0x50
    X86_AT(c, 0xd573bu);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 0d573d  ja 0xd574f
    X86_AT(c, 0xd573du);
    if (x86_cc(c, 7)) { goto L_d574f; }
    X86_TICK(c, 19);
    // 0d573f  sub al, 0x28
    X86_AT(c, 0xd573fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 0d5741  movzx ebx, bl
    X86_AT(c, 0xd5741u);
    c.r[3] = g8(c, 3);
    // 0d5744  mov byte ptr [ebx + 0xb3635], al
    X86_AT(c, 0xd5744u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xB3635u)), g8(c, 0));
    // 0d574a  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xd574au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0d574e  ret 
    X86_AT(c, 0xd574eu);
    c.eip = pop32(c); return;
L_d574f:
    X86_TICK(c, 12);
    // 0d574f  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xd574fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0d5753  ret 
    X86_AT(c, 0xd5753u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd572eu, "ran off the end of a function");
}
void f_000d5754(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d5754  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xd5754u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0d5757  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xd5757u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0d575a  call 0xd6e12
    X86_AT(c, 0xd575au);
    push32(c, 0xd575fu); x86_call_known(c, 0xd6e12u, f_000d6e12); X86_RET(c, 0xd575fu);
    X86_TICK(c, 12);
    // 0d575f  mov byte ptr [ebp + 0x20], al
    X86_AT(c, 0xd575fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 0));
    // 0d5762  ret 
    X86_AT(c, 0xd5762u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5754u, "ran off the end of a function");
}
void f_000d5763(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d5763  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xd5763u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0d5766  inc bl
    X86_AT(c, 0xd5766u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 0d5768  cmp bl, 8
    X86_AT(c, 0xd5768u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 0d576b  ja 0xd579b
    X86_AT(c, 0xd576bu);
    if (x86_cc(c, 7)) { goto L_d579b; }
    X86_TICK(c, 13);
    // 0d576d  dec bl
    X86_AT(c, 0xd576du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0d576f  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xd576fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0d5772  cmp ecx, 0
    X86_AT(c, 0xd5772u);
    (void)x86_sub(c, c.r[1], 0x0u, 0, 4);
    // 0d5775  je 0xd579b
    X86_AT(c, 0xd5775u);
    if (x86_cc(c, 4)) { goto L_d579b; }
    X86_TICK(c, 12);
    // 0d5777  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xd5777u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d577a  mov al, byte ptr [0xb3816]
    X86_AT(c, 0xd577au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB3816u))));
    // 0d577f  mov byte ptr [0xb3816], 0xff
    X86_AT(c, 0xd577fu);
    wr8((c.sbase[3] + (uint32_t)(0xB3816u)), 0xFFu);
    // 0d5786  push ax
    X86_AT(c, 0xd5786u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
L_d5788:
    X86_TICK(c, 14);
    // 0d5788  lodsb al, byte ptr [esi]
    X86_AT(c, 0xd5788u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0d5789  call 0xd6439
    X86_AT(c, 0xd5789u);
    push32(c, 0xd578eu); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd578eu);
    X86_TICK(c, 11);
    // 0d578e  loop 0xd5788
    X86_AT(c, 0xd578eu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd5788u); goto L_d5788; }
    X86_TICK(c, 20);
    // 0d5790  pop ax
    X86_AT(c, 0xd5790u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d5792  mov byte ptr [0xb3816], al
    X86_AT(c, 0xd5792u);
    wr8((c.sbase[3] + (uint32_t)(0xB3816u)), g8(c, 0));
    // 0d5797  xor al, al
    X86_AT(c, 0xd5797u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0d5799  clc 
    X86_AT(c, 0xd5799u);
    c.fl &= ~X86_CF;
    // 0d579a  ret 
    X86_AT(c, 0xd579au);
    c.eip = pop32(c); return;
L_d579b:
    X86_TICK(c, 14);
    // 0d579b  mov al, 3
    X86_AT(c, 0xd579bu);
    s8(c, 0, 0x3u);
    // 0d579d  stc 
    X86_AT(c, 0xd579du);
    c.fl |= X86_CF;
    // 0d579e  ret 
    X86_AT(c, 0xd579eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5763u, "ran off the end of a function");
}
void f_000d579f(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d579f  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xd579fu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0d57a2  call 0xd63e6
    X86_AT(c, 0xd57a2u);
    push32(c, 0xd57a7u); x86_call_known(c, 0xd63e6u, f_000d63e6); X86_RET(c, 0xd57a7u);
    X86_TICK(c, 13);
    // 0d57a7  cmp ah, 1
    X86_AT(c, 0xd57a7u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 0d57aa  nop 
    X86_AT(c, 0xd57aau);
    // 0d57ab  nop 
    X86_AT(c, 0xd57abu);
    // 0d57ac  nop 
    X86_AT(c, 0xd57acu);
    // 0d57ad  ja 0xd57b8
    X86_AT(c, 0xd57adu);
    if (x86_cc(c, 7)) { goto L_d57b8; }
    X86_TICK(c, 5);
    // 0d57af  je 0xd57b8
    X86_AT(c, 0xd57afu);
    if (x86_cc(c, 4)) { goto L_d57b8; }
    X86_TICK(c, 16);
    // 0d57b1  mov byte ptr [ebp + 0x18], al
    X86_AT(c, 0xd57b1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), g8(c, 0));
    // 0d57b4  xor al, al
    X86_AT(c, 0xd57b4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0d57b6  clc 
    X86_AT(c, 0xd57b6u);
    c.fl &= ~X86_CF;
    // 0d57b7  ret 
    X86_AT(c, 0xd57b7u);
    c.eip = pop32(c); return;
L_d57b8:
    X86_TICK(c, 14);
    // 0d57b8  mov byte ptr [ebp + 0x20], ah
    X86_AT(c, 0xd57b8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 4));
    // 0d57bb  stc 
    X86_AT(c, 0xd57bbu);
    c.fl |= X86_CF;
    // 0d57bc  ret 
    X86_AT(c, 0xd57bcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd579fu, "ran off the end of a function");
}
void f_000d57bd(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d57bd  cmp byte ptr [0xb35b6], 0
    X86_AT(c, 0xd57bdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35B6u))), 0x0u, 0, 1);
    // 0d57c4  je 0xd57eb
    X86_AT(c, 0xd57c4u);
    if (x86_cc(c, 4)) { goto L_d57eb; }
    X86_TICK(c, 15);
    // 0d57c6  mov byte ptr [0xb35bf], 0xff
    X86_AT(c, 0xd57c6u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BFu)), 0xFFu);
    // 0d57cd  mov byte ptr [0xb35b6], 0
    X86_AT(c, 0xd57cdu);
    wr8((c.sbase[3] + (uint32_t)(0xB35B6u)), 0x0u);
    // 0d57d4  mov word ptr [0xb35c9], 0
    X86_AT(c, 0xd57d4u);
    wr16((c.sbase[3] + (uint32_t)(0xB35C9u)), 0x0u);
    // 0d57dd  mov byte ptr [0xb35b7], 0
    X86_AT(c, 0xd57ddu);
    wr8((c.sbase[3] + (uint32_t)(0xB35B7u)), 0x0u);
    // 0d57e4  call 0xd5848
    X86_AT(c, 0xd57e4u);
    push32(c, 0xd57e9u); x86_call_known(c, 0xd5848u, f_000d5848); X86_RET(c, 0xd57e9u);
    X86_TICK(c, 12);
    // 0d57e9  clc 
    X86_AT(c, 0xd57e9u);
    c.fl &= ~X86_CF;
    // 0d57ea  ret 
    X86_AT(c, 0xd57eau);
    c.eip = pop32(c); return;
L_d57eb:
    X86_TICK(c, 12);
    // 0d57eb  stc 
    X86_AT(c, 0xd57ebu);
    c.fl |= X86_CF;
    // 0d57ec  ret 
    X86_AT(c, 0xd57ecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd57bdu, "ran off the end of a function");
}
void f_000d57ed(X86Cpu& c) {
    X86_TICK(c, 57);
    // 0d57ed  movzx ebx, al
    X86_AT(c, 0xd57edu);
    c.r[3] = g8(c, 0);
    // 0d57f0  and al, 0xf
    X86_AT(c, 0xd57f0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0d57f2  inc al
    X86_AT(c, 0xd57f2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0d57f4  shr ebx, 4
    X86_AT(c, 0xd57f4u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0d57f7  mov bx, word ptr cs:[ebx*2 + 0xd580d]
    X86_AT(c, 0xd57f7u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xD580Du))));
    // 0d5800  push eax
    X86_AT(c, 0xd5800u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d5801  movzx ax, al
    X86_AT(c, 0xd5801u);
    s16(c, 0, g8(c, 0));
    // 0d5805  mul bx
    X86_AT(c, 0xd5805u);
    x86_mul(c, (c.r[3] & 0xFFFFu), 2);
    // 0d5808  mov dx, ax
    X86_AT(c, 0xd5808u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 0d580b  pop eax
    X86_AT(c, 0xd580bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d580c  ret 
    X86_AT(c, 0xd580cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd57edu, "ran off the end of a function");
}
void f_000d583e(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0d583e  movzx ebx, dl
    X86_AT(c, 0xd583eu);
    c.r[3] = g8(c, 2);
    // 0d5841  mov bl, byte ptr [ebx + 0xb35f5]
    X86_AT(c, 0xd5841u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xB35F5u))));
    // 0d5847  ret 
    X86_AT(c, 0xd5847u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd583eu, "ran off the end of a function");
}
void f_000d5848(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0d5848  pushal 
    X86_AT(c, 0xd5848u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d5849  mov al, byte ptr [0xb3816]
    X86_AT(c, 0xd5849u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB3816u))));
    // 0d584e  push eax
    X86_AT(c, 0xd584eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d584f  mov byte ptr [0xb3816], 0xff
    X86_AT(c, 0xd584fu);
    wr8((c.sbase[3] + (uint32_t)(0xB3816u)), 0xFFu);
    // 0d5856  movzx ecx, word ptr [0xb35c0]
    X86_AT(c, 0xd5856u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0xB35C0u)));
    // 0d585d  or ecx, ecx
    X86_AT(c, 0xd585du);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 0d585f  je 0xd5891
    X86_AT(c, 0xd585fu);
    if (x86_cc(c, 4)) { goto L_d5891; }
    X86_TICK(c, 2);
    // 0d5861  lea edi, [0xb3675]
    X86_AT(c, 0xd5861u);
    c.r[7] = (uint32_t)(0xB3675u);
L_d5867:
    X86_TICK(c, 12);
    // 0d5867  cmp byte ptr [edi], 0
    X86_AT(c, 0xd5867u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0d586a  jne 0xd5871
    X86_AT(c, 0xd586au);
    if (x86_cc(c, 5)) { goto L_d5871; }
    X86_TICK(c, 9);
    // 0d586c  add edi, 6
    X86_AT(c, 0xd586cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0d586f  jmp 0xd5867
    X86_AT(c, 0xd586fu);
    X86_POLL(c, 0xd5867u); goto L_d5867;
L_d5871:
    X86_TICK(c, 28);
    // 0d5871  push ecx
    X86_AT(c, 0xd5871u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d5872  xor ch, ch
    X86_AT(c, 0xd5872u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 0d5874  xchg byte ptr [edi], ch
    X86_AT(c, 0xd5874u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 0d5876  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0xd5876u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0d5879  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0xd5879u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0d587c  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0xd587cu);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 0d587f  call 0xd5fc3
    X86_AT(c, 0xd587fu);
    push32(c, 0xd5884u); x86_call_known(c, 0xd5fc3u, f_000d5fc3); X86_RET(c, 0xd5884u);
    X86_TICK(c, 23);
    // 0d5884  pop ecx
    X86_AT(c, 0xd5884u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0d5885  add edi, 6
    X86_AT(c, 0xd5885u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0d5888  dec word ptr [0xb35c0]
    X86_AT(c, 0xd5888u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35C0u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0d588f  loop 0xd5867
    X86_AT(c, 0xd588fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd5867u); goto L_d5867; }
L_d5891:
    X86_TICK(c, 40);
    // 0d5891  pop eax
    X86_AT(c, 0xd5891u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d5892  mov byte ptr [0xb3816], al
    X86_AT(c, 0xd5892u);
    wr8((c.sbase[3] + (uint32_t)(0xB3816u)), g8(c, 0));
    // 0d5897  popal 
    X86_AT(c, 0xd5897u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d5898  ret 
    X86_AT(c, 0xd5898u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5848u, "ran off the end of a function");
}
void f_000d5899(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0d5899  push ebx
    X86_AT(c, 0xd5899u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d589a  push ecx
    X86_AT(c, 0xd589au);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d589b  mov ecx, 8
    X86_AT(c, 0xd589bu);
    c.r[1] = 0x8u;
    // 0d58a0  lea ebx, [0xb3825]
    X86_AT(c, 0xd58a0u);
    c.r[3] = (uint32_t)(0xB3825u);
L_d58a6:
    X86_TICK(c, 15);
    // 0d58a6  mov byte ptr [ebx + 0x1b], 0
    X86_AT(c, 0xd58a6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), 0x0u);
    // 0d58aa  add ebx, 0x20
    X86_AT(c, 0xd58aau);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d58ad  loop 0xd58a6
    X86_AT(c, 0xd58adu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd58a6u); goto L_d58a6; }
    X86_TICK(c, 18);
    // 0d58af  pop ecx
    X86_AT(c, 0xd58afu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0d58b0  pop ebx
    X86_AT(c, 0xd58b0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d58b1  ret 
    X86_AT(c, 0xd58b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5899u, "ran off the end of a function");
}
void f_000d58b2(X86Cpu& c) {
    X86_TICK(c, 69);
    // 0d58b2  push es
    X86_AT(c, 0xd58b2u);
    push32(c, c.sreg[0]);
    // 0d58b3  pushal 
    X86_AT(c, 0xd58b3u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d58b4  push ds
    X86_AT(c, 0xd58b4u);
    push32(c, c.sreg[3]);
    // 0d58b5  pop es
    X86_AT(c, 0xd58b5u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d58b6  mov al, 0xff
    X86_AT(c, 0xd58b6u);
    s8(c, 0, 0xFFu);
    // 0d58b8  lea edi, [0xb35d5]
    X86_AT(c, 0xd58b8u);
    c.r[7] = (uint32_t)(0xB35D5u);
    // 0d58be  mov ecx, 0x20
    X86_AT(c, 0xd58beu);
    c.r[1] = 0x20u;
    // 0d58c3  stosb byte ptr es:[edi], al
    X86_AT(c, 0xd58c3u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0d58c5  mov al, 0xff
    X86_AT(c, 0xd58c5u);
    s8(c, 0, 0xFFu);
    // 0d58c7  lea edi, [0xb35f5]
    X86_AT(c, 0xd58c7u);
    c.r[7] = (uint32_t)(0xB35F5u);
    // 0d58cd  mov ecx, 0x10
    X86_AT(c, 0xd58cdu);
    c.r[1] = 0x10u;
    // 0d58d2  stosb byte ptr es:[edi], al
    X86_AT(c, 0xd58d2u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0d58d4  xor al, al
    X86_AT(c, 0xd58d4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0d58d6  mov ecx, 0x10
    X86_AT(c, 0xd58d6u);
    c.r[1] = 0x10u;
    // 0d58db  stosb byte ptr es:[edi], al
    X86_AT(c, 0xd58dbu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0d58dd  xor al, al
    X86_AT(c, 0xd58ddu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0d58df  lea edi, [0xb3615]
    X86_AT(c, 0xd58dfu);
    c.r[7] = (uint32_t)(0xB3615u);
    // 0d58e5  mov ecx, 0x20
    X86_AT(c, 0xd58e5u);
    c.r[1] = 0x20u;
L_d58ea:
    X86_TICK(c, 22);
    // 0d58ea  stosb byte ptr es:[edi], al
    X86_AT(c, 0xd58eau);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0d58eb  inc al
    X86_AT(c, 0xd58ebu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0d58ed  and al, 0xf
    X86_AT(c, 0xd58edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0d58ef  loop 0xd58ea
    X86_AT(c, 0xd58efu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd58eau); goto L_d58ea; }
    X86_TICK(c, 64);
    // 0d58f1  xor al, al
    X86_AT(c, 0xd58f1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0d58f3  lea edi, [0xb3635]
    X86_AT(c, 0xd58f3u);
    c.r[7] = (uint32_t)(0xB3635u);
    // 0d58f9  mov ecx, 0x20
    X86_AT(c, 0xd58f9u);
    c.r[1] = 0x20u;
    // 0d58fe  stosb byte ptr es:[edi], al
    X86_AT(c, 0xd58feu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0d5900  xor al, al
    X86_AT(c, 0xd5900u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0d5902  lea edi, [0xb3655]
    X86_AT(c, 0xd5902u);
    c.r[7] = (uint32_t)(0xB3655u);
    // 0d5908  mov ecx, 0x20
    X86_AT(c, 0xd5908u);
    c.r[1] = 0x20u;
    // 0d590d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xd590du);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0d590f  popal 
    X86_AT(c, 0xd590fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d5910  pop es
    X86_AT(c, 0xd5910u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d5911  ret 
    X86_AT(c, 0xd5911u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd58b2u, "ran off the end of a function");
}
void f_000d5912(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0d5912  pushal 
    X86_AT(c, 0xd5912u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d5913  xor eax, eax
    X86_AT(c, 0xd5913u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d5915  mov word ptr [0xb35c0], ax
    X86_AT(c, 0xd5915u);
    wr16((c.sbase[3] + (uint32_t)(0xB35C0u)), (c.r[0] & 0xFFFFu));
    // 0d591b  mov ecx, 0x40
    X86_AT(c, 0xd591bu);
    c.r[1] = 0x40u;
    // 0d5920  lea edi, [0xb3675]
    X86_AT(c, 0xd5920u);
    c.r[7] = (uint32_t)(0xB3675u);
L_d5926:
    X86_TICK(c, 17);
    // 0d5926  mov dword ptr [edi], eax
    X86_AT(c, 0xd5926u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0d5928  mov word ptr [edi + 4], ax
    X86_AT(c, 0xd5928u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 0d592c  add edi, 6
    X86_AT(c, 0xd592cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0d592f  loop 0xd5926
    X86_AT(c, 0xd592fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd5926u); goto L_d5926; }
    X86_TICK(c, 34);
    // 0d5931  popal 
    X86_AT(c, 0xd5931u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d5932  ret 
    X86_AT(c, 0xd5932u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5912u, "ran off the end of a function");
}
void f_000d5933(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0d5933  xor eax, eax
    X86_AT(c, 0xd5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d5935  mov byte ptr [0xb3816], al
    X86_AT(c, 0xd5935u);
    wr8((c.sbase[3] + (uint32_t)(0xB3816u)), g8(c, 0));
    // 0d593a  mov byte ptr [0xb3818], al
    X86_AT(c, 0xd593au);
    wr8((c.sbase[3] + (uint32_t)(0xB3818u)), g8(c, 0));
    // 0d593f  mov byte ptr [0xb3817], al
    X86_AT(c, 0xd593fu);
    wr8((c.sbase[3] + (uint32_t)(0xB3817u)), g8(c, 0));
    // 0d5944  mov byte ptr [0xb35d0], 0
    X86_AT(c, 0xd5944u);
    wr8((c.sbase[3] + (uint32_t)(0xB35D0u)), 0x0u);
    // 0d594b  mov byte ptr [0xb35b6], al
    X86_AT(c, 0xd594bu);
    wr8((c.sbase[3] + (uint32_t)(0xB35B6u)), g8(c, 0));
    // 0d5950  mov byte ptr [0xb35b7], al
    X86_AT(c, 0xd5950u);
    wr8((c.sbase[3] + (uint32_t)(0xB35B7u)), g8(c, 0));
    // 0d5955  mov byte ptr [0xb35b8], al
    X86_AT(c, 0xd5955u);
    wr8((c.sbase[3] + (uint32_t)(0xB35B8u)), g8(c, 0));
    // 0d595a  mov byte ptr [0xb35b9], al
    X86_AT(c, 0xd595au);
    wr8((c.sbase[3] + (uint32_t)(0xB35B9u)), g8(c, 0));
    // 0d595f  mov byte ptr [0xb35ba], al
    X86_AT(c, 0xd595fu);
    wr8((c.sbase[3] + (uint32_t)(0xB35BAu)), g8(c, 0));
    // 0d5964  mov byte ptr [0xb35bb], al
    X86_AT(c, 0xd5964u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BBu)), g8(c, 0));
    // 0d5969  mov byte ptr [0xb35bc], al
    X86_AT(c, 0xd5969u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BCu)), g8(c, 0));
    // 0d596e  mov byte ptr [0xb35bd], al
    X86_AT(c, 0xd596eu);
    wr8((c.sbase[3] + (uint32_t)(0xB35BDu)), g8(c, 0));
    // 0d5973  mov byte ptr [0xb35be], al
    X86_AT(c, 0xd5973u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BEu)), g8(c, 0));
    // 0d5978  mov byte ptr [0xb35bf], al
    X86_AT(c, 0xd5978u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BFu)), g8(c, 0));
    // 0d597d  lea edi, [0xb35d1]
    X86_AT(c, 0xd597du);
    c.r[7] = (uint32_t)(0xB35D1u);
    // 0d5983  mov byte ptr [edi], 0
    X86_AT(c, 0xd5983u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0d5986  mov byte ptr [edi + 1], 1
    X86_AT(c, 0xd5986u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0x1u);
    // 0d598a  mov byte ptr [edi + 2], 2
    X86_AT(c, 0xd598au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x2u);
    // 0d598e  mov byte ptr [edi + 3], 3
    X86_AT(c, 0xd598eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x3u);
    // 0d5992  ret 
    X86_AT(c, 0xd5992u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5933u, "ran off the end of a function");
}
void f_000d5993(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0d5993  mov word ptr [0xb35c9], 0
    X86_AT(c, 0xd5993u);
    wr16((c.sbase[3] + (uint32_t)(0xB35C9u)), 0x0u);
    // 0d599c  mov word ptr [0xb35c5], 0
    X86_AT(c, 0xd599cu);
    wr16((c.sbase[3] + (uint32_t)(0xB35C5u)), 0x0u);
    // 0d59a5  mov word ptr [0xb35c7], 0x10
    X86_AT(c, 0xd59a5u);
    wr16((c.sbase[3] + (uint32_t)(0xB35C7u)), 0x10u);
    // 0d59ae  mov al, 0x33
    X86_AT(c, 0xd59aeu);
    s8(c, 0, 0x33u);
    // 0d59b0  mov byte ptr [0xb35b4], al
    X86_AT(c, 0xd59b0u);
    wr8((c.sbase[3] + (uint32_t)(0xB35B4u)), g8(c, 0));
    // 0d59b5  mov byte ptr [0xb35a8], al
    X86_AT(c, 0xd59b5u);
    wr8((c.sbase[3] + (uint32_t)(0xB35A8u)), g8(c, 0));
    // 0d59ba  mov word ptr [0xb35a3], ax
    X86_AT(c, 0xd59bau);
    wr16((c.sbase[3] + (uint32_t)(0xB35A3u)), (c.r[0] & 0xFFFFu));
    // 0d59c0  mov byte ptr [0xb35a7], al
    X86_AT(c, 0xd59c0u);
    wr8((c.sbase[3] + (uint32_t)(0xB35A7u)), g8(c, 0));
    // 0d59c5  mov word ptr [0xb35a5], ax
    X86_AT(c, 0xd59c5u);
    wr16((c.sbase[3] + (uint32_t)(0xB35A5u)), (c.r[0] & 0xFFFFu));
    // 0d59cb  mov al, 0x5a
    X86_AT(c, 0xd59cbu);
    s8(c, 0, 0x5Au);
    // 0d59cd  mov byte ptr [0xb35b5], al
    X86_AT(c, 0xd59cdu);
    wr8((c.sbase[3] + (uint32_t)(0xB35B5u)), g8(c, 0));
    // 0d59d2  mov byte ptr [0xb35a9], al
    X86_AT(c, 0xd59d2u);
    wr8((c.sbase[3] + (uint32_t)(0xB35A9u)), g8(c, 0));
    // 0d59d7  ret 
    X86_AT(c, 0xd59d7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5993u, "ran off the end of a function");
}
void f_000d59d8(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0d59d8  mov byte ptr [0xb35c3], 0
    X86_AT(c, 0xd59d8u);
    wr8((c.sbase[3] + (uint32_t)(0xB35C3u)), 0x0u);
    // 0d59df  mov byte ptr [0xb35c2], 0xff
    X86_AT(c, 0xd59dfu);
    wr8((c.sbase[3] + (uint32_t)(0xB35C2u)), 0xFFu);
    // 0d59e6  mov byte ptr [0xb35c4], 0
    X86_AT(c, 0xd59e6u);
    wr8((c.sbase[3] + (uint32_t)(0xB35C4u)), 0x0u);
    // 0d59ed  ret 
    X86_AT(c, 0xd59edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd59d8u, "ran off the end of a function");
}
void f_000d59ee(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d59ee  cld 
    X86_AT(c, 0xd59eeu);
    c.fl &= ~X86_DF;
    // 0d59ef  call 0xd5b00
    X86_AT(c, 0xd59efu);
    push32(c, 0xd59f4u); x86_call_known(c, 0xd5b00u, f_000d5b00); X86_RET(c, 0xd59f4u);
    X86_TICK(c, 7);
    // 0d59f4  call 0xd5a40
    X86_AT(c, 0xd59f4u);
    push32(c, 0xd59f9u); x86_call_known(c, 0xd5a40u, f_000d5a40); X86_RET(c, 0xd59f9u);
    X86_TICK(c, 7);
    // 0d59f9  call 0xd5aa0
    X86_AT(c, 0xd59f9u);
    push32(c, 0xd59feu); x86_call_known(c, 0xd5aa0u, f_000d5aa0); X86_RET(c, 0xd59feu);
L_d59fe:
    X86_TICK(c, 12);
    // 0d59fe  cmp word ptr [0xb35c9], 0
    X86_AT(c, 0xd59feu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB35C9u))), 0x0u, 0, 2);
    // 0d5a06  je 0xd5a3f
    X86_AT(c, 0xd5a06u);
    if (x86_cc(c, 4)) { goto L_d5a3f; }
    X86_TICK(c, 13);
    // 0d5a08  dec word ptr [0xb35c9]
    X86_AT(c, 0xd5a08u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35C9u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0d5a0f  call 0xd5b4b
    X86_AT(c, 0xd5a0fu);
    push32(c, 0xd5a14u); x86_call_known(c, 0xd5b4bu, f_000d5b4b); X86_RET(c, 0xd5a14u);
    X86_TICK(c, 5);
    // 0d5a14  jb 0xd59fe
    X86_AT(c, 0xd5a14u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xd59feu); goto L_d59fe; }
    X86_TICK(c, 12);
    // 0d5a16  cmp byte ptr [0xb35b6], 0
    X86_AT(c, 0xd5a16u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35B6u))), 0x0u, 0, 1);
    // 0d5a1d  je 0xd59fe
    X86_AT(c, 0xd5a1du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd59feu); goto L_d59fe; }
    X86_TICK(c, 7);
    // 0d5a1f  call 0xd5f81
    X86_AT(c, 0xd5a1fu);
    push32(c, 0xd5a24u); x86_call_known(c, 0xd5f81u, f_000d5f81); X86_RET(c, 0xd5a24u);
    X86_TICK(c, 7);
    // 0d5a24  call 0xd5bad
    X86_AT(c, 0xd5a24u);
    push32(c, 0xd5a29u); x86_call_known(c, 0xd5badu, f_000d5bad); X86_RET(c, 0xd5a29u);
    X86_TICK(c, 7);
    // 0d5a29  call 0xd5b32
    X86_AT(c, 0xd5a29u);
    push32(c, 0xd5a2eu); x86_call_known(c, 0xd5b32u, f_000d5b32); X86_RET(c, 0xd5a2eu);
    X86_TICK(c, 7);
    // 0d5a2e  call 0xd5b00
    X86_AT(c, 0xd5a2eu);
    push32(c, 0xd5a33u); x86_call_known(c, 0xd5b00u, f_000d5b00); X86_RET(c, 0xd5a33u);
    X86_TICK(c, 7);
    // 0d5a33  call 0xd5a40
    X86_AT(c, 0xd5a33u);
    push32(c, 0xd5a38u); x86_call_known(c, 0xd5a40u, f_000d5a40); X86_RET(c, 0xd5a38u);
    X86_TICK(c, 7);
    // 0d5a38  call 0xd5aa0
    X86_AT(c, 0xd5a38u);
    push32(c, 0xd5a3du); x86_call_known(c, 0xd5aa0u, f_000d5aa0); X86_RET(c, 0xd5a3du);
    X86_TICK(c, 7);
    // 0d5a3d  jmp 0xd59fe
    X86_AT(c, 0xd5a3du);
    X86_POLL(c, 0xd59feu); goto L_d59fe;
L_d5a3f:
    X86_TICK(c, 10);
    // 0d5a3f  ret 
    X86_AT(c, 0xd5a3fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd59eeu, "ran off the end of a function");
}
void f_000d5a40(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d5a40  cmp byte ptr [0xb35ba], 0
    X86_AT(c, 0xd5a40u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35BAu))), 0x0u, 0, 1);
    // 0d5a47  je 0xd5a5e
    X86_AT(c, 0xd5a47u);
    if (x86_cc(c, 4)) { goto L_d5a5e; }
    X86_TICK(c, 6);
    // 0d5a49  mov byte ptr [0xb35ba], 0
    X86_AT(c, 0xd5a49u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BAu)), 0x0u);
    // 0d5a50  mov byte ptr [0xb35b8], 0
    X86_AT(c, 0xd5a50u);
    wr8((c.sbase[3] + (uint32_t)(0xB35B8u)), 0x0u);
    // 0d5a57  mov byte ptr [0xb35bd], 0xff
    X86_AT(c, 0xd5a57u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BDu)), 0xFFu);
L_d5a5e:
    X86_TICK(c, 12);
    // 0d5a5e  cmp byte ptr [0xb35bb], 0
    X86_AT(c, 0xd5a5eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35BBu))), 0x0u, 0, 1);
    // 0d5a65  je 0xd5a7c
    X86_AT(c, 0xd5a65u);
    if (x86_cc(c, 4)) { goto L_d5a7c; }
    X86_TICK(c, 6);
    // 0d5a67  mov byte ptr [0xb35bb], 0
    X86_AT(c, 0xd5a67u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BBu)), 0x0u);
    // 0d5a6e  mov byte ptr [0xb35b8], 0
    X86_AT(c, 0xd5a6eu);
    wr8((c.sbase[3] + (uint32_t)(0xB35B8u)), 0x0u);
    // 0d5a75  mov byte ptr [0xb35be], 0xff
    X86_AT(c, 0xd5a75u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BEu)), 0xFFu);
L_d5a7c:
    X86_TICK(c, 12);
    // 0d5a7c  cmp byte ptr [0xb35bc], 0
    X86_AT(c, 0xd5a7cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35BCu))), 0x0u, 0, 1);
    // 0d5a83  je 0xd5a9f
    X86_AT(c, 0xd5a83u);
    if (x86_cc(c, 4)) { goto L_d5a9f; }
    X86_TICK(c, 13);
    // 0d5a85  mov byte ptr [0xb35bc], 0
    X86_AT(c, 0xd5a85u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BCu)), 0x0u);
    // 0d5a8c  mov byte ptr [0xb35b8], 0xff
    X86_AT(c, 0xd5a8cu);
    wr8((c.sbase[3] + (uint32_t)(0xB35B8u)), 0xFFu);
    // 0d5a93  mov byte ptr [0xb35bf], 0xff
    X86_AT(c, 0xd5a93u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BFu)), 0xFFu);
    // 0d5a9a  call 0xd5848
    X86_AT(c, 0xd5a9au);
    push32(c, 0xd5a9fu); x86_call_known(c, 0xd5848u, f_000d5848); X86_RET(c, 0xd5a9fu);
L_d5a9f:
    X86_TICK(c, 10);
    // 0d5a9f  ret 
    X86_AT(c, 0xd5a9fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5a40u, "ran off the end of a function");
}
void f_000d5aa0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d5aa0  push ax
    X86_AT(c, 0xd5aa0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d5aa2  cmp byte ptr [0xb35bd], 0
    X86_AT(c, 0xd5aa2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35BDu))), 0x0u, 0, 1);
    // 0d5aa9  je 0xd5ab9
    X86_AT(c, 0xd5aa9u);
    if (x86_cc(c, 4)) { goto L_d5ab9; }
    X86_TICK(c, 11);
    // 0d5aab  mov byte ptr [0xb35bd], 0
    X86_AT(c, 0xd5aabu);
    wr8((c.sbase[3] + (uint32_t)(0xB35BDu)), 0x0u);
    // 0d5ab2  mov al, 0xfa
    X86_AT(c, 0xd5ab2u);
    s8(c, 0, 0xFAu);
    // 0d5ab4  call 0xd64cf
    X86_AT(c, 0xd5ab4u);
    push32(c, 0xd5ab9u); x86_call_known(c, 0xd64cfu, f_000d64cf); X86_RET(c, 0xd5ab9u);
L_d5ab9:
    X86_TICK(c, 12);
    // 0d5ab9  cmp byte ptr [0xb35be], 0
    X86_AT(c, 0xd5ab9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35BEu))), 0x0u, 0, 1);
    // 0d5ac0  je 0xd5ad0
    X86_AT(c, 0xd5ac0u);
    if (x86_cc(c, 4)) { goto L_d5ad0; }
    X86_TICK(c, 11);
    // 0d5ac2  mov byte ptr [0xb35be], 0
    X86_AT(c, 0xd5ac2u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BEu)), 0x0u);
    // 0d5ac9  mov al, 0xfb
    X86_AT(c, 0xd5ac9u);
    s8(c, 0, 0xFBu);
    // 0d5acb  call 0xd64cf
    X86_AT(c, 0xd5acbu);
    push32(c, 0xd5ad0u); x86_call_known(c, 0xd64cfu, f_000d64cf); X86_RET(c, 0xd5ad0u);
L_d5ad0:
    X86_TICK(c, 12);
    // 0d5ad0  cmp byte ptr [0xb35bf], 0
    X86_AT(c, 0xd5ad0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35BFu))), 0x0u, 0, 1);
    // 0d5ad7  je 0xd5ae7
    X86_AT(c, 0xd5ad7u);
    if (x86_cc(c, 4)) { goto L_d5ae7; }
    X86_TICK(c, 11);
    // 0d5ad9  mov byte ptr [0xb35bf], 0
    X86_AT(c, 0xd5ad9u);
    wr8((c.sbase[3] + (uint32_t)(0xB35BFu)), 0x0u);
    // 0d5ae0  mov al, 0xfc
    X86_AT(c, 0xd5ae0u);
    s8(c, 0, 0xFCu);
    // 0d5ae2  call 0xd64cf
    X86_AT(c, 0xd5ae2u);
    push32(c, 0xd5ae7u); x86_call_known(c, 0xd64cfu, f_000d64cf); X86_RET(c, 0xd5ae7u);
L_d5ae7:
    X86_TICK(c, 12);
    // 0d5ae7  cmp byte ptr [0xb35c3], 0
    X86_AT(c, 0xd5ae7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35C3u))), 0x0u, 0, 1);
    // 0d5aee  je 0xd5afd
    X86_AT(c, 0xd5aeeu);
    if (x86_cc(c, 4)) { goto L_d5afd; }
    X86_TICK(c, 15);
    // 0d5af0  dec byte ptr [0xb35c3]
    X86_AT(c, 0xd5af0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35C3u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0d5af6  mov al, 0xf8
    X86_AT(c, 0xd5af6u);
    s8(c, 0, 0xF8u);
    // 0d5af8  call 0xd64cf
    X86_AT(c, 0xd5af8u);
    push32(c, 0xd5afdu); x86_call_known(c, 0xd64cfu, f_000d64cf); X86_RET(c, 0xd5afdu);
L_d5afd:
    X86_TICK(c, 14);
    // 0d5afd  pop ax
    X86_AT(c, 0xd5afdu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d5aff  ret 
    X86_AT(c, 0xd5affu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5aa0u, "ran off the end of a function");
}
void f_000d5b00(X86Cpu& c) {
    X86_TICK(c, 81);
    // 0d5b00  mov dx, 0xe71
    X86_AT(c, 0xd5b00u);
    s16(c, 2, 0xE71u);
    // 0d5b04  nop 
    X86_AT(c, 0xd5b04u);
    // 0d5b05  nop 
    X86_AT(c, 0xd5b05u);
    // 0d5b06  nop 
    X86_AT(c, 0xd5b06u);
    // 0d5b07  pushf 
    X86_AT(c, 0xd5b07u);
    push16(c, c.fl & 0xFFFFu);
    // 0d5b09  cli 
    X86_AT(c, 0xd5b09u);
    c.fl &= ~X86_IF;
    // 0d5b0a  in al, dx
    X86_AT(c, 0xd5b0au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0d5b0b  mov ah, byte ptr [0xb37f7]
    X86_AT(c, 0xd5b0bu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0xB37F7u))));
    // 0d5b11  and al, 0xf0
    X86_AT(c, 0xd5b11u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0d5b13  or al, ah
    X86_AT(c, 0xd5b13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 4), 1)); }
    // 0d5b15  out dx, al
    X86_AT(c, 0xd5b15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d5b16  mov byte ptr [0xb37f7], al
    X86_AT(c, 0xd5b16u);
    wr8((c.sbase[3] + (uint32_t)(0xB37F7u)), g8(c, 0));
    // 0d5b1b  mov al, byte ptr [0xb37f8]
    X86_AT(c, 0xd5b1bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB37F8u))));
    // 0d5b20  mov byte ptr [0xb37f8], 0
    X86_AT(c, 0xd5b20u);
    wr8((c.sbase[3] + (uint32_t)(0xB37F8u)), 0x0u);
    // 0d5b27  popf 
    X86_AT(c, 0xd5b27u);
    x86_popfd(c, 2);
    // 0d5b29  and al, 0xf0
    X86_AT(c, 0xd5b29u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0d5b2b  or byte ptr [0xb35d0], al
    X86_AT(c, 0xd5b2bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35D0u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 0d5b31  ret 
    X86_AT(c, 0xd5b31u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5b00u, "ran off the end of a function");
}
void f_000d5b32(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d5b32  cmp byte ptr [0xb35b7], 0
    X86_AT(c, 0xd5b32u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35B7u))), 0x0u, 0, 1);
    // 0d5b39  je 0xd5b4a
    X86_AT(c, 0xd5b39u);
    if (x86_cc(c, 4)) { goto L_d5b4a; }
    X86_TICK(c, 12);
    // 0d5b3b  cmp word ptr [0xb35c0], 0
    X86_AT(c, 0xd5b3bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB35C0u))), 0x0u, 0, 2);
    // 0d5b43  jne 0xd5b4a
    X86_AT(c, 0xd5b43u);
    if (x86_cc(c, 5)) { goto L_d5b4a; }
    X86_TICK(c, 7);
    // 0d5b45  call 0xd57bd
    X86_AT(c, 0xd5b45u);
    push32(c, 0xd5b4au); x86_call_known(c, 0xd57bdu, f_000d57bd); X86_RET(c, 0xd5b4au);
L_d5b4a:
    X86_TICK(c, 10);
    // 0d5b4a  ret 
    X86_AT(c, 0xd5b4au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5b32u, "ran off the end of a function");
}
void f_000d5b4b(X86Cpu& c) {
    X86_TICK(c, 88);
    // 0d5b4b  inc word ptr [0xb35a5]
    X86_AT(c, 0xd5b4bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35A5u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0d5b52  movzx ebx, byte ptr [0xb35a9]
    X86_AT(c, 0xd5b52u);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0xB35A9u)));
    // 0d5b59  movzx eax, word ptr cs:[ebx*2 + 0xd5fe2]
    X86_AT(c, 0xd5b59u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xD5FE2u)));
    // 0d5b62  add eax, dword ptr [0xb35aa]
    X86_AT(c, 0xd5b62u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB35AAu))), 0, 4); }
    // 0d5b68  xor edx, edx
    X86_AT(c, 0xd5b68u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0d5b6a  mov ebx, 0x1f4
    X86_AT(c, 0xd5b6au);
    c.r[3] = 0x1F4u;
    // 0d5b6f  div ebx
    X86_AT(c, 0xd5b6fu);
    x86_div(c, c.r[3], 4, 0xd5b6fu);
    // 0d5b71  mov dword ptr [0xb35aa], edx
    X86_AT(c, 0xd5b71u);
    wr32((c.sbase[3] + (uint32_t)(0xB35AAu)), c.r[2]);
    // 0d5b77  add dword ptr [0xb35ae], eax
    X86_AT(c, 0xd5b77u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35AEu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d5b7d  mov al, byte ptr [0xb35a8]
    X86_AT(c, 0xd5b7du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB35A8u))));
    // 0d5b82  call 0xd57ed
    X86_AT(c, 0xd5b82u);
    push32(c, 0xd5b87u); x86_call_known(c, 0xd57edu, f_000d57ed); X86_RET(c, 0xd5b87u);
    X86_TICK(c, 11);
    // 0d5b87  cmp dx, word ptr [0xb35a5]
    X86_AT(c, 0xd5b87u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xB35A5u))), 0, 2);
    // 0d5b8e  ja 0xd5ba4
    X86_AT(c, 0xd5b8eu);
    if (x86_cc(c, 7)) { goto L_d5ba4; }
    X86_TICK(c, 12);
    // 0d5b90  inc word ptr [0xb35a3]
    X86_AT(c, 0xd5b90u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35A3u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0d5b97  xor eax, eax
    X86_AT(c, 0xd5b97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d5b99  mov word ptr [0xb35a5], ax
    X86_AT(c, 0xd5b99u);
    wr16((c.sbase[3] + (uint32_t)(0xB35A5u)), (c.r[0] & 0xFFFFu));
    // 0d5b9f  mov byte ptr [0xb35a7], al
    X86_AT(c, 0xd5b9fu);
    wr8((c.sbase[3] + (uint32_t)(0xB35A7u)), g8(c, 0));
L_d5ba4:
    X86_TICK(c, 12);
    // 0d5ba4  clc 
    X86_AT(c, 0xd5ba4u);
    c.fl &= ~X86_CF;
    // 0d5ba5  ret 
    X86_AT(c, 0xd5ba5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5b4bu, "ran off the end of a function");
}
void f_000d5bad(X86Cpu& c) {
L_d5bad:
    X86_TICK(c, 17);
    // 0d5bad  les esi, fword ptr [0xb3591]
    X86_AT(c, 0xd5badu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB3591u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[6] = o; }
    // 0d5bb3  mov al, byte ptr es:[esi]
    X86_AT(c, 0xd5bb3u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0d5bb6  cmp al, 0xff
    X86_AT(c, 0xd5bb6u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0d5bb8  je 0xd5bc2
    X86_AT(c, 0xd5bb8u);
    if (x86_cc(c, 4)) { goto L_d5bc2; }
    X86_TICK(c, 7);
    // 0d5bba  cmp al, 0xf7
    X86_AT(c, 0xd5bbau);
    (void)x86_sub(c, g8(c, 0), 0xF7u, 0, 1);
    // 0d5bbc  je 0xd5bc2
    X86_AT(c, 0xd5bbcu);
    if (x86_cc(c, 4)) { goto L_d5bc2; }
    X86_TICK(c, 7);
    // 0d5bbe  cmp al, 0x90
    X86_AT(c, 0xd5bbeu);
    (void)x86_sub(c, g8(c, 0), 0x90u, 0, 1);
    // 0d5bc0  jae 0xd5bc9
    X86_AT(c, 0xd5bc0u);
    if (x86_cc(c, 3)) { goto L_d5bc9; }
L_d5bc2:
    X86_TICK(c, 7);
    // 0d5bc2  call 0xd5eb5
    X86_AT(c, 0xd5bc2u);
    push32(c, 0xd5bc7u); x86_call_known(c, 0xd5eb5u, f_000d5eb5); X86_RET(c, 0xd5bc7u);
    X86_TICK(c, 7);
    // 0d5bc7  jmp 0xd5bad
    X86_AT(c, 0xd5bc7u);
    X86_POLL(c, 0xd5badu); goto L_d5bad;
L_d5bc9:
    X86_TICK(c, 15);
    // 0d5bc9  mov dx, word ptr [0xb35b2]
    X86_AT(c, 0xd5bc9u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0xB35B2u))));
    // 0d5bd0  cmp dx, word ptr [0xb35a3]
    X86_AT(c, 0xd5bd0u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xB35A3u))), 0, 2);
    // 0d5bd7  ja 0xd5bfe
    X86_AT(c, 0xd5bd7u);
    if (x86_cc(c, 7)) { goto L_d5bfe; }
    X86_TICK(c, 5);
    // 0d5bd9  je 0xd5be4
    X86_AT(c, 0xd5bd9u);
    if (x86_cc(c, 4)) { goto L_d5be4; }
    X86_TICK(c, 7);
    // 0d5bdb  call 0xd5bff
    X86_AT(c, 0xd5bdbu);
    push32(c, 0xd5be0u); x86_call_known(c, 0xd5bffu, f_000d5bff); X86_RET(c, 0xd5be0u);
    X86_TICK(c, 5);
    // 0d5be0  jae 0xd5bad
    X86_AT(c, 0xd5be0u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xd5badu); goto L_d5bad; }
    X86_TICK(c, 7);
    // 0d5be2  jmp 0xd5bfe
    X86_AT(c, 0xd5be2u);
    goto L_d5bfe;
L_d5be4:
    X86_TICK(c, 21);
    // 0d5be4  mov dx, word ptr es:[esi + 2]
    X86_AT(c, 0xd5be4u);
    s16(c, 2, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x2u))));
    // 0d5be9  shl dl, 1
    X86_AT(c, 0xd5be9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0d5beb  shr dx, 1
    X86_AT(c, 0xd5bebu);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 2, r); }
    // 0d5bee  cmp dx, word ptr [0xb35a5]
    X86_AT(c, 0xd5beeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xB35A5u))), 0, 2);
    // 0d5bf5  ja 0xd5bfe
    X86_AT(c, 0xd5bf5u);
    if (x86_cc(c, 7)) { goto L_d5bfe; }
    X86_TICK(c, 7);
    // 0d5bf7  call 0xd5bff
    X86_AT(c, 0xd5bf7u);
    push32(c, 0xd5bfcu); x86_call_known(c, 0xd5bffu, f_000d5bff); X86_RET(c, 0xd5bfcu);
    X86_TICK(c, 5);
    // 0d5bfc  jae 0xd5bad
    X86_AT(c, 0xd5bfcu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xd5badu); goto L_d5bad; }
L_d5bfe:
    X86_TICK(c, 10);
    // 0d5bfe  ret 
    X86_AT(c, 0xd5bfeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5badu, "ran off the end of a function");
}
void f_000d5bff(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0d5bff  cmp al, 0xfe
    X86_AT(c, 0xd5bffu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0d5c01  je 0xd5c3d
    X86_AT(c, 0xd5c01u);
    if (x86_cc(c, 4)) { goto L_d5c3d; }
    X86_TICK(c, 7);
    // 0d5c03  cmp al, 0xfd
    X86_AT(c, 0xd5c03u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0d5c05  je 0xd5c3d
    X86_AT(c, 0xd5c05u);
    if (x86_cc(c, 4)) { goto L_d5c3d; }
    X86_TICK(c, 10);
    // 0d5c07  movzx ebx, al
    X86_AT(c, 0xd5c07u);
    c.r[3] = g8(c, 0);
    // 0d5c0a  cmp al, 0xf0
    X86_AT(c, 0xd5c0au);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0d5c0c  jae 0xd5c28
    X86_AT(c, 0xd5c0cu);
    if (x86_cc(c, 3)) { goto L_d5c28; }
    X86_TICK(c, 12);
    // 0d5c0e  sub ebx, 0x80
    X86_AT(c, 0xd5c0eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 0d5c14  shr ebx, 4
    X86_AT(c, 0xd5c14u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0d5c17  call dword ptr cs:[ebx*4 + 0xd5c96]
    X86_AT(c, 0xd5c17u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xD5C96u))); push32(c, 0xd5c1fu);
      switch (t) {
      case 0xd5cf6u: x86_call_known(c, 0xd5cf6u, f_000d5cf6); break;
      case 0xd5cf8u: x86_call_known(c, 0xd5cf8u, f_000d5cf8); break;
      case 0xd5d2bu: x86_call_known(c, 0xd5d2bu, f_000d5d2b); break;
      case 0xd5d32u: x86_call_known(c, 0xd5d32u, f_000d5d32); break;
      case 0xd5d39u: x86_call_known(c, 0xd5d39u, f_000d5d39); break;
      case 0xd5d40u: x86_call_known(c, 0xd5d40u, f_000d5d40); break;
      case 0xd5d98u: x86_call_known(c, 0xd5d98u, f_000d5d98); break;
      case 0xd5f0cu: x86_call_known(c, 0xd5f0cu, f_000d5f0c); break;
      case 0xd5f55u: x86_call_known(c, 0xd5f55u, f_000d5f55); break;
      case 0xd5f57u: x86_call_known(c, 0xd5f57u, f_000d5f57); break;
      case 0xd5f59u: x86_call_known(c, 0xd5f59u, f_000d5f59); break;
      case 0xd5f6bu: x86_call_known(c, 0xd5f6bu, f_000d5f6b); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xd5c1fu); }
    X86_TICK(c, 5);
    // 0d5c1f  jb 0xd5c3d
    X86_AT(c, 0xd5c1fu);
    if (x86_cc(c, 2)) { goto L_d5c3d; }
    X86_TICK(c, 7);
    // 0d5c21  call 0xd5eb5
    X86_AT(c, 0xd5c21u);
    push32(c, 0xd5c26u); x86_call_known(c, 0xd5eb5u, f_000d5eb5); X86_RET(c, 0xd5c26u);
    X86_TICK(c, 12);
    // 0d5c26  clc 
    X86_AT(c, 0xd5c26u);
    c.fl &= ~X86_CF;
    // 0d5c27  ret 
    X86_AT(c, 0xd5c27u);
    c.eip = pop32(c); return;
L_d5c28:
    X86_TICK(c, 9);
    // 0d5c28  sub ebx, 0xf0
    X86_AT(c, 0xd5c28u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0xF0u, 0, 4); }
    // 0d5c2e  call dword ptr cs:[ebx*4 + 0xd5cb6]
    X86_AT(c, 0xd5c2eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xD5CB6u))); push32(c, 0xd5c36u);
      switch (t) {
      case 0xd5cf6u: x86_call_known(c, 0xd5cf6u, f_000d5cf6); break;
      case 0xd5f0cu: x86_call_known(c, 0xd5f0cu, f_000d5f0c); break;
      case 0xd5f55u: x86_call_known(c, 0xd5f55u, f_000d5f55); break;
      case 0xd5f57u: x86_call_known(c, 0xd5f57u, f_000d5f57); break;
      case 0xd5f59u: x86_call_known(c, 0xd5f59u, f_000d5f59); break;
      case 0xd5f6bu: x86_call_known(c, 0xd5f6bu, f_000d5f6b); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xd5c36u); }
    X86_TICK(c, 7);
    // 0d5c36  call 0xd5eb5
    X86_AT(c, 0xd5c36u);
    push32(c, 0xd5c3bu); x86_call_known(c, 0xd5eb5u, f_000d5eb5); X86_RET(c, 0xd5c3bu);
    X86_TICK(c, 12);
    // 0d5c3b  clc 
    X86_AT(c, 0xd5c3bu);
    c.fl &= ~X86_CF;
    // 0d5c3c  ret 
    X86_AT(c, 0xd5c3cu);
    c.eip = pop32(c); return;
L_d5c3d:
    X86_TICK(c, 7);
    // 0d5c3d  cmp al, 0xfd
    X86_AT(c, 0xd5c3du);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0d5c3f  je 0xd5c53
    X86_AT(c, 0xd5c3fu);
    if (x86_cc(c, 4)) { goto L_d5c53; }
    X86_TICK(c, 12);
    // 0d5c41  cmp byte ptr [0xb35b9], 0
    X86_AT(c, 0xd5c41u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35B9u))), 0x0u, 0, 1);
    // 0d5c48  jne 0xd5c5c
    X86_AT(c, 0xd5c48u);
    if (x86_cc(c, 5)) { goto L_d5c5c; }
    X86_TICK(c, 14);
    // 0d5c4a  mov byte ptr [0xb35b7], 0xff
    X86_AT(c, 0xd5c4au);
    wr8((c.sbase[3] + (uint32_t)(0xB35B7u)), 0xFFu);
    // 0d5c51  stc 
    X86_AT(c, 0xd5c51u);
    c.fl |= X86_CF;
    // 0d5c52  ret 
    X86_AT(c, 0xd5c52u);
    c.eip = pop32(c); return;
L_d5c53:
    X86_TICK(c, 14);
    // 0d5c53  mov byte ptr [0xb35b8], 0xff
    X86_AT(c, 0xd5c53u);
    wr8((c.sbase[3] + (uint32_t)(0xB35B8u)), 0xFFu);
    // 0d5c5a  stc 
    X86_AT(c, 0xd5c5au);
    c.fl |= X86_CF;
    // 0d5c5b  ret 
    X86_AT(c, 0xd5c5bu);
    c.eip = pop32(c); return;
L_d5c5c:
    X86_TICK(c, 32);
    // 0d5c5c  mov byte ptr [0xb35b7], 0
    X86_AT(c, 0xd5c5cu);
    wr8((c.sbase[3] + (uint32_t)(0xB35B7u)), 0x0u);
    // 0d5c63  mov eax, dword ptr [0xb3597]
    X86_AT(c, 0xd5c63u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB3597u)));
    // 0d5c68  mov dword ptr [0xb3591], eax
    X86_AT(c, 0xd5c68u);
    wr32((c.sbase[3] + (uint32_t)(0xB3591u)), c.r[0]);
    // 0d5c6d  mov word ptr [0xb35b2], 0
    X86_AT(c, 0xd5c6du);
    wr16((c.sbase[3] + (uint32_t)(0xB35B2u)), 0x0u);
    // 0d5c76  mov word ptr [0xb35a3], 0
    X86_AT(c, 0xd5c76u);
    wr16((c.sbase[3] + (uint32_t)(0xB35A3u)), 0x0u);
    // 0d5c7f  mov word ptr [0xb35a5], 0
    X86_AT(c, 0xd5c7fu);
    wr16((c.sbase[3] + (uint32_t)(0xB35A5u)), 0x0u);
    // 0d5c88  mov dl, byte ptr [0xb35b4]
    X86_AT(c, 0xd5c88u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB35B4u))));
    // 0d5c8e  mov byte ptr [0xb35a8], dl
    X86_AT(c, 0xd5c8eu);
    wr8((c.sbase[3] + (uint32_t)(0xB35A8u)), g8(c, 2));
    // 0d5c94  clc 
    X86_AT(c, 0xd5c94u);
    c.fl &= ~X86_CF;
    // 0d5c95  ret 
    X86_AT(c, 0xd5c95u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5bffu, "ran off the end of a function");
}
void f_000d5cf6(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d5cf6  clc 
    X86_AT(c, 0xd5cf6u);
    c.fl &= ~X86_CF;
    // 0d5cf7  ret 
    X86_AT(c, 0xd5cf7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5cf6u, "ran off the end of a function");
}
void f_000d5cf8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d5cf8  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xd5cf8u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0d5cfc  call 0xd5e27
    X86_AT(c, 0xd5cfcu);
    push32(c, 0xd5d01u); x86_call_known(c, 0xd5e27u, f_000d5e27); X86_RET(c, 0xd5d01u);
    X86_TICK(c, 5);
    // 0d5d01  jb 0xd5d29
    X86_AT(c, 0xd5d01u);
    if (x86_cc(c, 2)) { goto L_d5d29; }
    X86_TICK(c, 7);
    // 0d5d03  call 0xd583e
    X86_AT(c, 0xd5d03u);
    push32(c, 0xd5d08u); x86_call_known(c, 0xd583eu, f_000d583e); X86_RET(c, 0xd5d08u);
    X86_TICK(c, 7);
    // 0d5d08  call 0xd5e3a
    X86_AT(c, 0xd5d08u);
    push32(c, 0xd5d0du); x86_call_known(c, 0xd5e3au, f_000d5e3a); X86_RET(c, 0xd5d0du);
    X86_TICK(c, 7);
    // 0d5d0d  call 0xd6439
    X86_AT(c, 0xd5d0du);
    push32(c, 0xd5d12u); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5d12u);
    X86_TICK(c, 11);
    // 0d5d12  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0xd5d12u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0d5d16  call 0xd5e57
    X86_AT(c, 0xd5d16u);
    push32(c, 0xd5d1bu); x86_call_known(c, 0xd5e57u, f_000d5e57); X86_RET(c, 0xd5d1bu);
    X86_TICK(c, 7);
    // 0d5d1b  call 0xd6439
    X86_AT(c, 0xd5d1bu);
    push32(c, 0xd5d20u); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5d20u);
    X86_TICK(c, 11);
    // 0d5d20  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0xd5d20u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0d5d24  call 0xd6439
    X86_AT(c, 0xd5d24u);
    push32(c, 0xd5d29u); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5d29u);
L_d5d29:
    X86_TICK(c, 12);
    // 0d5d29  clc 
    X86_AT(c, 0xd5d29u);
    c.fl &= ~X86_CF;
    // 0d5d2a  ret 
    X86_AT(c, 0xd5d2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5cf8u, "ran off the end of a function");
}
void f_000d5d2b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0d5d2b  call 0xd5d6b
    X86_AT(c, 0xd5d2bu);
    push32(c, 0xd5d30u); x86_call_known(c, 0xd5d6bu, f_000d5d6b); X86_RET(c, 0xd5d30u);
    X86_TICK(c, 12);
    // 0d5d30  clc 
    X86_AT(c, 0xd5d30u);
    c.fl &= ~X86_CF;
    // 0d5d31  ret 
    X86_AT(c, 0xd5d31u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5d2bu, "ran off the end of a function");
}
void f_000d5d32(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0d5d32  call 0xd5d47
    X86_AT(c, 0xd5d32u);
    push32(c, 0xd5d37u); x86_call_known(c, 0xd5d47u, f_000d5d47); X86_RET(c, 0xd5d37u);
    X86_TICK(c, 12);
    // 0d5d37  clc 
    X86_AT(c, 0xd5d37u);
    c.fl &= ~X86_CF;
    // 0d5d38  ret 
    X86_AT(c, 0xd5d38u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5d32u, "ran off the end of a function");
}
void f_000d5d39(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0d5d39  call 0xd5d47
    X86_AT(c, 0xd5d39u);
    push32(c, 0xd5d3eu); x86_call_known(c, 0xd5d47u, f_000d5d47); X86_RET(c, 0xd5d3eu);
    X86_TICK(c, 12);
    // 0d5d3e  clc 
    X86_AT(c, 0xd5d3eu);
    c.fl &= ~X86_CF;
    // 0d5d3f  ret 
    X86_AT(c, 0xd5d3fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5d39u, "ran off the end of a function");
}
void f_000d5d40(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0d5d40  call 0xd5d6b
    X86_AT(c, 0xd5d40u);
    push32(c, 0xd5d45u); x86_call_known(c, 0xd5d6bu, f_000d5d6b); X86_RET(c, 0xd5d45u);
    X86_TICK(c, 12);
    // 0d5d45  clc 
    X86_AT(c, 0xd5d45u);
    c.fl &= ~X86_CF;
    // 0d5d46  ret 
    X86_AT(c, 0xd5d46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5d40u, "ran off the end of a function");
}
void f_000d5d47(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d5d47  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xd5d47u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0d5d4b  call 0xd5e27
    X86_AT(c, 0xd5d4bu);
    push32(c, 0xd5d50u); x86_call_known(c, 0xd5e27u, f_000d5e27); X86_RET(c, 0xd5d50u);
    X86_TICK(c, 5);
    // 0d5d50  jb 0xd5d6a
    X86_AT(c, 0xd5d50u);
    if (x86_cc(c, 2)) { goto L_d5d6a; }
    X86_TICK(c, 7);
    // 0d5d52  call 0xd583e
    X86_AT(c, 0xd5d52u);
    push32(c, 0xd5d57u); x86_call_known(c, 0xd583eu, f_000d583e); X86_RET(c, 0xd5d57u);
    X86_TICK(c, 7);
    // 0d5d57  call 0xd5e3a
    X86_AT(c, 0xd5d57u);
    push32(c, 0xd5d5cu); x86_call_known(c, 0xd5e3au, f_000d5e3a); X86_RET(c, 0xd5d5cu);
    X86_TICK(c, 7);
    // 0d5d5c  call 0xd6439
    X86_AT(c, 0xd5d5cu);
    push32(c, 0xd5d61u); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5d61u);
    X86_TICK(c, 11);
    // 0d5d61  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0xd5d61u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0d5d65  call 0xd6439
    X86_AT(c, 0xd5d65u);
    push32(c, 0xd5d6au); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5d6au);
L_d5d6a:
    X86_TICK(c, 10);
    // 0d5d6a  ret 
    X86_AT(c, 0xd5d6au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5d47u, "ran off the end of a function");
}
void f_000d5d6b(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d5d6b  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xd5d6bu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0d5d6f  call 0xd5e27
    X86_AT(c, 0xd5d6fu);
    push32(c, 0xd5d74u); x86_call_known(c, 0xd5e27u, f_000d5e27); X86_RET(c, 0xd5d74u);
    X86_TICK(c, 5);
    // 0d5d74  jb 0xd5d97
    X86_AT(c, 0xd5d74u);
    if (x86_cc(c, 2)) { goto L_d5d97; }
    X86_TICK(c, 7);
    // 0d5d76  call 0xd583e
    X86_AT(c, 0xd5d76u);
    push32(c, 0xd5d7bu); x86_call_known(c, 0xd583eu, f_000d583e); X86_RET(c, 0xd5d7bu);
    X86_TICK(c, 7);
    // 0d5d7b  call 0xd5e3a
    X86_AT(c, 0xd5d7bu);
    push32(c, 0xd5d80u); x86_call_known(c, 0xd5e3au, f_000d5e3a); X86_RET(c, 0xd5d80u);
    X86_TICK(c, 7);
    // 0d5d80  call 0xd6439
    X86_AT(c, 0xd5d80u);
    push32(c, 0xd5d85u); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5d85u);
    X86_TICK(c, 11);
    // 0d5d85  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0xd5d85u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0d5d89  call 0xd6439
    X86_AT(c, 0xd5d89u);
    push32(c, 0xd5d8eu); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5d8eu);
    X86_TICK(c, 11);
    // 0d5d8e  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0xd5d8eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0d5d92  call 0xd6439
    X86_AT(c, 0xd5d92u);
    push32(c, 0xd5d97u); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5d97u);
L_d5d97:
    X86_TICK(c, 10);
    // 0d5d97  ret 
    X86_AT(c, 0xd5d97u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5d6bu, "ran off the end of a function");
}
void f_000d5d98(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d5d98  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xd5d98u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0d5d9c  call 0xd5e27
    X86_AT(c, 0xd5d9cu);
    push32(c, 0xd5da1u); x86_call_known(c, 0xd5e27u, f_000d5e27); X86_RET(c, 0xd5da1u);
    X86_TICK(c, 5);
    // 0d5da1  jae 0xd5dbd
    X86_AT(c, 0xd5da1u);
    if (x86_cc(c, 3)) { goto L_d5dbd; }
    X86_TICK(c, 7);
    // 0d5da3  call 0xd5eb5
    X86_AT(c, 0xd5da3u);
    push32(c, 0xd5da8u); x86_call_known(c, 0xd5eb5u, f_000d5eb5); X86_RET(c, 0xd5da8u);
    X86_TICK(c, 11);
    // 0d5da8  mov al, byte ptr es:[esi]
    X86_AT(c, 0xd5da8u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0d5dab  cmp al, 0xfe
    X86_AT(c, 0xd5dabu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0d5dad  je 0xd5e25
    X86_AT(c, 0xd5dadu);
    if (x86_cc(c, 4)) { goto L_d5e25; }
    X86_TICK(c, 7);
    // 0d5db3  cmp al, 0xfd
    X86_AT(c, 0xd5db3u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0d5db5  je 0xd5e25
    X86_AT(c, 0xd5db5u);
    if (x86_cc(c, 4)) { goto L_d5e25; }
    X86_TICK(c, 12);
    // 0d5dbb  clc 
    X86_AT(c, 0xd5dbbu);
    c.fl &= ~X86_CF;
    // 0d5dbc  ret 
    X86_AT(c, 0xd5dbcu);
    c.eip = pop32(c); return;
L_d5dbd:
    X86_TICK(c, 7);
    // 0d5dbd  call 0xd583e
    X86_AT(c, 0xd5dbdu);
    push32(c, 0xd5dc2u); x86_call_known(c, 0xd583eu, f_000d583e); X86_RET(c, 0xd5dc2u);
    X86_TICK(c, 7);
    // 0d5dc2  call 0xd5e3a
    X86_AT(c, 0xd5dc2u);
    push32(c, 0xd5dc7u); x86_call_known(c, 0xd5e3au, f_000d5e3a); X86_RET(c, 0xd5dc7u);
    X86_TICK(c, 9);
    // 0d5dc7  mov ch, al
    X86_AT(c, 0xd5dc7u);
    s8(c, 5, g8(c, 0));
    // 0d5dc9  call 0xd6439
    X86_AT(c, 0xd5dc9u);
    push32(c, 0xd5dceu); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5dceu);
    X86_TICK(c, 11);
    // 0d5dce  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0xd5dceu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0d5dd2  call 0xd5e57
    X86_AT(c, 0xd5dd2u);
    push32(c, 0xd5dd7u); x86_call_known(c, 0xd5e57u, f_000d5e57); X86_RET(c, 0xd5dd7u);
    X86_TICK(c, 9);
    // 0d5dd7  mov cl, al
    X86_AT(c, 0xd5dd7u);
    s8(c, 1, g8(c, 0));
    // 0d5dd9  call 0xd6439
    X86_AT(c, 0xd5dd9u);
    push32(c, 0xd5ddeu); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5ddeu);
    X86_TICK(c, 11);
    // 0d5dde  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0xd5ddeu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0d5de2  call 0xd5e8a
    X86_AT(c, 0xd5de2u);
    push32(c, 0xd5de7u); x86_call_known(c, 0xd5e8au, f_000d5e8a); X86_RET(c, 0xd5de7u);
    X86_TICK(c, 7);
    // 0d5de7  call 0xd6439
    X86_AT(c, 0xd5de7u);
    push32(c, 0xd5decu); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5decu);
    X86_TICK(c, 7);
    // 0d5dec  call 0xd5eb5
    X86_AT(c, 0xd5decu);
    push32(c, 0xd5df1u); x86_call_known(c, 0xd5eb5u, f_000d5eb5); X86_RET(c, 0xd5df1u);
    X86_TICK(c, 11);
    // 0d5df1  mov al, byte ptr es:[esi]
    X86_AT(c, 0xd5df1u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0d5df4  cmp al, 0xfe
    X86_AT(c, 0xd5df4u);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0d5df6  je 0xd5e25
    X86_AT(c, 0xd5df6u);
    if (x86_cc(c, 4)) { goto L_d5e25; }
    X86_TICK(c, 7);
    // 0d5df8  cmp al, 0xfd
    X86_AT(c, 0xd5df8u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0d5dfa  je 0xd5e25
    X86_AT(c, 0xd5dfau);
    if (x86_cc(c, 4)) { goto L_d5e25; }
    X86_TICK(c, 39);
    // 0d5dfc  push bx
    X86_AT(c, 0xd5dfcu);
    { uint32_t v = (c.r[3] & 0xFFFFu); push16(c, v); }
    // 0d5dfe  mov ax, word ptr es:[esi + 1]
    X86_AT(c, 0xd5dfeu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0d5e03  shl al, 4
    X86_AT(c, 0xd5e03u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 0d5e06  shr ax, 4
    X86_AT(c, 0xd5e06u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 0d5e0a  mov bx, word ptr es:[esi + 3]
    X86_AT(c, 0xd5e0au);
    s16(c, 3, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x3u))));
    // 0d5e0f  shl bl, 4
    X86_AT(c, 0xd5e0fu);
    { uint32_t v = g8(c, 3); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 3, r); }
    // 0d5e12  shr bx, 4
    X86_AT(c, 0xd5e12u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 3, r); }
    // 0d5e16  mov ah, bl
    X86_AT(c, 0xd5e16u);
    s8(c, 4, g8(c, 3));
    // 0d5e18  pop bx
    X86_AT(c, 0xd5e18u);
    { uint32_t v = pop16(c); s16(c, 3, v); }
    // 0d5e1a  mov bh, byte ptr es:[esi + 5]
    X86_AT(c, 0xd5e1au);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0d5e1e  call 0xd5ecd
    X86_AT(c, 0xd5e1eu);
    push32(c, 0xd5e23u); x86_call_known(c, 0xd5ecdu, f_000d5ecd); X86_RET(c, 0xd5e23u);
    X86_TICK(c, 12);
    // 0d5e23  clc 
    X86_AT(c, 0xd5e23u);
    c.fl &= ~X86_CF;
    // 0d5e24  ret 
    X86_AT(c, 0xd5e24u);
    c.eip = pop32(c); return;
L_d5e25:
    X86_TICK(c, 12);
    // 0d5e25  stc 
    X86_AT(c, 0xd5e25u);
    c.fl |= X86_CF;
    // 0d5e26  ret 
    X86_AT(c, 0xd5e26u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5d98u, "ran off the end of a function");
}
void f_000d5e27(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0d5e27  push ebx
    X86_AT(c, 0xd5e27u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5e28  movzx ebx, dl
    X86_AT(c, 0xd5e28u);
    c.r[3] = g8(c, 2);
    // 0d5e2b  cmp byte ptr [ebx + 0xb35d5], 0
    X86_AT(c, 0xd5e2bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xB35D5u))), 0x0u, 0, 1);
    // 0d5e32  je 0xd5e37
    X86_AT(c, 0xd5e32u);
    if (x86_cc(c, 4)) { goto L_d5e37; }
    X86_TICK(c, 16);
    // 0d5e34  pop ebx
    X86_AT(c, 0xd5e34u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d5e35  clc 
    X86_AT(c, 0xd5e35u);
    c.fl &= ~X86_CF;
    // 0d5e36  ret 
    X86_AT(c, 0xd5e36u);
    c.eip = pop32(c); return;
L_d5e37:
    X86_TICK(c, 16);
    // 0d5e37  pop ebx
    X86_AT(c, 0xd5e37u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d5e38  stc 
    X86_AT(c, 0xd5e38u);
    c.fl |= X86_CF;
    // 0d5e39  ret 
    X86_AT(c, 0xd5e39u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5e27u, "ran off the end of a function");
}
void f_000d5e3a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d5e3a  push ebx
    X86_AT(c, 0xd5e3au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5e3b  cmp al, 0xf0
    X86_AT(c, 0xd5e3bu);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0d5e3d  jae 0xd5e55
    X86_AT(c, 0xd5e3du);
    if (x86_cc(c, 3)) { goto L_d5e55; }
    X86_TICK(c, 7);
    // 0d5e3f  cmp al, 0x80
    X86_AT(c, 0xd5e3fu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0d5e41  jb 0xd5e55
    X86_AT(c, 0xd5e41u);
    if (x86_cc(c, 2)) { goto L_d5e55; }
    X86_TICK(c, 17);
    // 0d5e43  movzx ebx, dl
    X86_AT(c, 0xd5e43u);
    c.r[3] = g8(c, 2);
    // 0d5e46  lea ebx, [ebx + 0xb3615]
    X86_AT(c, 0xd5e46u);
    c.r[3] = (uint32_t)(c.r[3] + 0xB3615u);
    // 0d5e4c  cmp byte ptr [ebx], 0xf
    X86_AT(c, 0xd5e4cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0xFu, 0, 1);
    // 0d5e4f  ja 0xd5e55
    X86_AT(c, 0xd5e4fu);
    if (x86_cc(c, 7)) { goto L_d5e55; }
    X86_TICK(c, 8);
    // 0d5e51  and al, 0xf0
    X86_AT(c, 0xd5e51u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0d5e53  or al, byte ptr [ebx]
    X86_AT(c, 0xd5e53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 1)); }
L_d5e55:
    X86_TICK(c, 14);
    // 0d5e55  pop ebx
    X86_AT(c, 0xd5e55u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d5e56  ret 
    X86_AT(c, 0xd5e56u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5e3au, "ran off the end of a function");
}
void f_000d5e57(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0d5e57  push ebx
    X86_AT(c, 0xd5e57u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5e58  movzx ebx, dl
    X86_AT(c, 0xd5e58u);
    c.r[3] = g8(c, 2);
    // 0d5e5b  mov bl, byte ptr [ebx + 0xb3655]
    X86_AT(c, 0xd5e5bu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xB3655u))));
    // 0d5e61  or bl, bl
    X86_AT(c, 0xd5e61u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | g8(c, 3), 1)); }
    // 0d5e63  je 0xd5e88
    X86_AT(c, 0xd5e63u);
    if (x86_cc(c, 4)) { goto L_d5e88; }
    X86_TICK(c, 7);
    // 0d5e65  and ax, 0x7f
    X86_AT(c, 0xd5e65u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 0d5e69  movsx bx, bl
    X86_AT(c, 0xd5e69u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 0d5e6d  add ax, bx
    X86_AT(c, 0xd5e6du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_d5e70:
    X86_TICK(c, 7);
    // 0d5e70  cmp ax, 0x7f
    X86_AT(c, 0xd5e70u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 0d5e74  jle 0xd5e7c
    X86_AT(c, 0xd5e74u);
    if (x86_cc(c, 14)) { goto L_d5e7c; }
    X86_TICK(c, 9);
    // 0d5e76  sub ax, 0xc
    X86_AT(c, 0xd5e76u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0xCu, 0, 2)); }
    // 0d5e7a  jmp 0xd5e70
    X86_AT(c, 0xd5e7au);
    X86_POLL(c, 0xd5e70u); goto L_d5e70;
L_d5e7c:
    X86_TICK(c, 7);
    // 0d5e7c  cmp ax, 0
    X86_AT(c, 0xd5e7cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x0u, 0, 2);
    // 0d5e80  jge 0xd5e88
    X86_AT(c, 0xd5e80u);
    if (x86_cc(c, 13)) { goto L_d5e88; }
    X86_TICK(c, 9);
    // 0d5e82  add ax, 0xc
    X86_AT(c, 0xd5e82u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xCu, 0, 2)); }
    // 0d5e86  jmp 0xd5e7c
    X86_AT(c, 0xd5e86u);
    X86_POLL(c, 0xd5e7cu); goto L_d5e7c;
L_d5e88:
    X86_TICK(c, 14);
    // 0d5e88  pop ebx
    X86_AT(c, 0xd5e88u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d5e89  ret 
    X86_AT(c, 0xd5e89u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5e57u, "ran off the end of a function");
}
void f_000d5e8a(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d5e8a  push ebx
    X86_AT(c, 0xd5e8au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5e8b  movzx ebx, dl
    X86_AT(c, 0xd5e8bu);
    c.r[3] = g8(c, 2);
    // 0d5e8e  mov bl, byte ptr [ebx + 0xb3635]
    X86_AT(c, 0xd5e8eu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xB3635u))));
    // 0d5e94  and ax, 0x7f
    X86_AT(c, 0xd5e94u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 0d5e98  movsx bx, bl
    X86_AT(c, 0xd5e98u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 0d5e9c  add ax, bx
    X86_AT(c, 0xd5e9cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0d5e9f  cmp ax, 0x7f
    X86_AT(c, 0xd5e9fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 0d5ea3  jg 0xd5ead
    X86_AT(c, 0xd5ea3u);
    if (x86_cc(c, 15)) { goto L_d5ead; }
    X86_TICK(c, 7);
    // 0d5ea5  cmp ax, 1
    X86_AT(c, 0xd5ea5u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
    // 0d5ea9  jl 0xd5eb1
    X86_AT(c, 0xd5ea9u);
    if (x86_cc(c, 12)) { goto L_d5eb1; }
    X86_TICK(c, 7);
    // 0d5eab  jmp 0xd5eb3
    X86_AT(c, 0xd5eabu);
    goto L_d5eb3;
L_d5ead:
    X86_TICK(c, 9);
    // 0d5ead  mov al, 0x7f
    X86_AT(c, 0xd5eadu);
    s8(c, 0, 0x7Fu);
    // 0d5eaf  jmp 0xd5eb3
    X86_AT(c, 0xd5eafu);
    goto L_d5eb3;
L_d5eb1:
    X86_TICK(c, 2);
    // 0d5eb1  mov al, 1
    X86_AT(c, 0xd5eb1u);
    s8(c, 0, 0x1u);
L_d5eb3:
    X86_TICK(c, 14);
    // 0d5eb3  pop ebx
    X86_AT(c, 0xd5eb3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d5eb4  ret 
    X86_AT(c, 0xd5eb4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5e8au, "ran off the end of a function");
}
void f_000d5eb5(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d5eb5  add esi, 6
    X86_AT(c, 0xd5eb5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x6u, 0, 4); }
    // 0d5eb8  cmp esi, dword ptr [0xb359d]
    X86_AT(c, 0xd5eb8u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xB359Du))), 0, 4);
    // 0d5ebe  jb 0xd5ec6
    X86_AT(c, 0xd5ebeu);
    if (x86_cc(c, 2)) { goto L_d5ec6; }
    X86_TICK(c, 4);
    // 0d5ec0  mov esi, dword ptr [0xb3597]
    X86_AT(c, 0xd5ec0u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB3597u)));
L_d5ec6:
    X86_TICK(c, 12);
    // 0d5ec6  mov dword ptr [0xb3591], esi
    X86_AT(c, 0xd5ec6u);
    wr32((c.sbase[3] + (uint32_t)(0xB3591u)), c.r[6]);
    // 0d5ecc  ret 
    X86_AT(c, 0xd5eccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5eb5u, "ran off the end of a function");
}
void f_000d5ecd(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0d5ecd  push edi
    X86_AT(c, 0xd5ecdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d5ece  push ecx
    X86_AT(c, 0xd5eceu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d5ecf  mov ecx, 0x40
    X86_AT(c, 0xd5ecfu);
    c.r[1] = 0x40u;
    // 0d5ed4  lea edi, [0xb3675]
    X86_AT(c, 0xd5ed4u);
    c.r[7] = (uint32_t)(0xB3675u);
L_d5eda:
    X86_TICK(c, 12);
    // 0d5eda  cmp byte ptr [edi], 0
    X86_AT(c, 0xd5edau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0d5edd  je 0xd5eec
    X86_AT(c, 0xd5eddu);
    if (x86_cc(c, 4)) { goto L_d5eec; }
    X86_TICK(c, 13);
    // 0d5edf  add edi, 6
    X86_AT(c, 0xd5edfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0d5ee2  loop 0xd5eda
    X86_AT(c, 0xd5ee2u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd5edau); goto L_d5eda; }
    X86_TICK(c, 11);
    // 0d5ee4  pop ecx
    X86_AT(c, 0xd5ee4u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0d5ee5  call 0xd5fc3
    X86_AT(c, 0xd5ee5u);
    push32(c, 0xd5eeau); x86_call_known(c, 0xd5fc3u, f_000d5fc3); X86_RET(c, 0xd5eeau);
    X86_TICK(c, 14);
    // 0d5eea  pop edi
    X86_AT(c, 0xd5eeau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d5eeb  ret 
    X86_AT(c, 0xd5eebu);
    c.eip = pop32(c); return;
L_d5eec:
    X86_TICK(c, 19);
    // 0d5eec  pop ecx
    X86_AT(c, 0xd5eecu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0d5eed  mov byte ptr [edi], ch
    X86_AT(c, 0xd5eedu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 5));
    // 0d5eef  mov byte ptr [edi + 1], bl
    X86_AT(c, 0xd5eefu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 3));
    // 0d5ef2  mov byte ptr [edi + 2], cl
    X86_AT(c, 0xd5ef2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 0d5ef5  mov byte ptr [edi + 3], bh
    X86_AT(c, 0xd5ef5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 7));
    // 0d5ef8  or ax, ax
    X86_AT(c, 0xd5ef8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 0d5efb  jne 0xd5eff
    X86_AT(c, 0xd5efbu);
    if (x86_cc(c, 5)) { goto L_d5eff; }
    X86_TICK(c, 2);
    // 0d5efd  inc ax
    X86_AT(c, 0xd5efdu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
L_d5eff:
    X86_TICK(c, 22);
    // 0d5eff  mov word ptr [edi + 4], ax
    X86_AT(c, 0xd5effu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 0d5f03  inc word ptr [0xb35c0]
    X86_AT(c, 0xd5f03u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35C0u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0d5f0a  pop edi
    X86_AT(c, 0xd5f0au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d5f0b  ret 
    X86_AT(c, 0xd5f0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5ecdu, "ran off the end of a function");
}
void f_000d5f0c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d5f0c  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xd5f0cu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0d5f10  call 0xd583e
    X86_AT(c, 0xd5f10u);
    push32(c, 0xd5f15u); x86_call_known(c, 0xd583eu, f_000d583e); X86_RET(c, 0xd5f15u);
    X86_TICK(c, 9);
    // 0d5f15  mov al, 0xf0
    X86_AT(c, 0xd5f15u);
    s8(c, 0, 0xF0u);
    // 0d5f17  call 0xd6439
    X86_AT(c, 0xd5f17u);
    push32(c, 0xd5f1cu); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5f1cu);
    X86_TICK(c, 7);
    // 0d5f1c  call 0xd5eb5
    X86_AT(c, 0xd5f1cu);
    push32(c, 0xd5f21u); x86_call_known(c, 0xd5eb5u, f_000d5eb5); X86_RET(c, 0xd5f21u);
L_d5f21:
    X86_TICK(c, 4);
    // 0d5f21  push esi
    X86_AT(c, 0xd5f21u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d5f22  mov ecx, 6
    X86_AT(c, 0xd5f22u);
    c.r[1] = 0x6u;
L_d5f27:
    X86_TICK(c, 11);
    // 0d5f27  mov al, byte ptr es:[esi]
    X86_AT(c, 0xd5f27u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0d5f2a  cmp al, 0xff
    X86_AT(c, 0xd5f2au);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0d5f2c  je 0xd5f37
    X86_AT(c, 0xd5f2cu);
    if (x86_cc(c, 4)) { goto L_d5f37; }
    X86_TICK(c, 7);
    // 0d5f2e  call 0xd6439
    X86_AT(c, 0xd5f2eu);
    push32(c, 0xd5f33u); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5f33u);
    X86_TICK(c, 7);
    // 0d5f33  cmp al, 0x80
    X86_AT(c, 0xd5f33u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0d5f35  jae 0xd5f47
    X86_AT(c, 0xd5f35u);
    if (x86_cc(c, 3)) { goto L_d5f47; }
L_d5f37:
    X86_TICK(c, 13);
    // 0d5f37  inc esi
    X86_AT(c, 0xd5f37u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d5f38  loop 0xd5f27
    X86_AT(c, 0xd5f38u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd5f27u); goto L_d5f27; }
    X86_TICK(c, 11);
    // 0d5f3a  pop esi
    X86_AT(c, 0xd5f3au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d5f3b  call 0xd5eb5
    X86_AT(c, 0xd5f3bu);
    push32(c, 0xd5f40u); x86_call_known(c, 0xd5eb5u, f_000d5eb5); X86_RET(c, 0xd5f40u);
    X86_TICK(c, 7);
    // 0d5f40  call 0xd5f4a
    X86_AT(c, 0xd5f40u);
    push32(c, 0xd5f45u); x86_call_known(c, 0xd5f4au, f_000d5f4a); X86_RET(c, 0xd5f45u);
    X86_TICK(c, 7);
    // 0d5f45  jmp 0xd5f21
    X86_AT(c, 0xd5f45u);
    X86_POLL(c, 0xd5f21u); goto L_d5f21;
L_d5f47:
    X86_TICK(c, 16);
    // 0d5f47  pop esi
    X86_AT(c, 0xd5f47u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d5f48  clc 
    X86_AT(c, 0xd5f48u);
    c.fl &= ~X86_CF;
    // 0d5f49  ret 
    X86_AT(c, 0xd5f49u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5f0cu, "ran off the end of a function");
}
void f_000d5f4a(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0d5f4a  pushal 
    X86_AT(c, 0xd5f4au);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d5f4b  mov ecx, 0x19
    X86_AT(c, 0xd5f4bu);
    c.r[1] = 0x19u;
L_d5f50:
    X86_TICK(c, 13);
    // 0d5f50  nop 
    X86_AT(c, 0xd5f50u);
    // 0d5f51  loop 0xd5f50
    X86_AT(c, 0xd5f51u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd5f50u); goto L_d5f50; }
    X86_TICK(c, 34);
    // 0d5f53  popal 
    X86_AT(c, 0xd5f53u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d5f54  ret 
    X86_AT(c, 0xd5f54u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5f4au, "ran off the end of a function");
}
void f_000d5f55(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d5f55  clc 
    X86_AT(c, 0xd5f55u);
    c.fl &= ~X86_CF;
    // 0d5f56  ret 
    X86_AT(c, 0xd5f56u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5f55u, "ran off the end of a function");
}
void f_000d5f57(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d5f57  clc 
    X86_AT(c, 0xd5f57u);
    c.fl &= ~X86_CF;
    // 0d5f58  ret 
    X86_AT(c, 0xd5f58u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5f57u, "ran off the end of a function");
}
void f_000d5f59(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0d5f59  inc word ptr [0xb35b2]
    X86_AT(c, 0xd5f59u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35B2u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0d5f60  mov al, byte ptr es:[esi + 1]
    X86_AT(c, 0xd5f60u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0d5f64  mov byte ptr [0xb35a8], al
    X86_AT(c, 0xd5f64u);
    wr8((c.sbase[3] + (uint32_t)(0xB35A8u)), g8(c, 0));
    // 0d5f69  clc 
    X86_AT(c, 0xd5f69u);
    c.fl &= ~X86_CF;
    // 0d5f6a  ret 
    X86_AT(c, 0xd5f6au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5f59u, "ran off the end of a function");
}
void f_000d5f6b(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0d5f6b  mov ax, word ptr es:[esi + 4]
    X86_AT(c, 0xd5f6bu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0d5f70  shl al, 1
    X86_AT(c, 0xd5f70u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0d5f72  shr ax, 1
    X86_AT(c, 0xd5f72u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0d5f75  mov byte ptr [0xb35a9], al
    X86_AT(c, 0xd5f75u);
    wr8((c.sbase[3] + (uint32_t)(0xB35A9u)), g8(c, 0));
    // 0d5f7a  call 0xd696f
    X86_AT(c, 0xd5f7au);
    push32(c, 0xd5f7fu); x86_call_known(c, 0xd696fu, f_000d696f); X86_RET(c, 0xd5f7fu);
    X86_TICK(c, 12);
    // 0d5f7f  clc 
    X86_AT(c, 0xd5f7fu);
    c.fl &= ~X86_CF;
    // 0d5f80  ret 
    X86_AT(c, 0xd5f80u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5f6bu, "ran off the end of a function");
}
void f_000d5f81(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d5f81  movzx ecx, word ptr [0xb35c0]
    X86_AT(c, 0xd5f81u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0xB35C0u)));
    // 0d5f88  or ecx, ecx
    X86_AT(c, 0xd5f88u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 0d5f8a  je 0xd5fc2
    X86_AT(c, 0xd5f8au);
    if (x86_cc(c, 4)) { goto L_d5fc2; }
    X86_TICK(c, 2);
    // 0d5f8c  lea edi, [0xb3675]
    X86_AT(c, 0xd5f8cu);
    c.r[7] = (uint32_t)(0xB3675u);
L_d5f92:
    X86_TICK(c, 12);
    // 0d5f92  cmp byte ptr [edi], 0
    X86_AT(c, 0xd5f92u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0d5f95  jne 0xd5f9c
    X86_AT(c, 0xd5f95u);
    if (x86_cc(c, 5)) { goto L_d5f9c; }
    X86_TICK(c, 9);
    // 0d5f97  add edi, 6
    X86_AT(c, 0xd5f97u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0d5f9a  jmp 0xd5f92
    X86_AT(c, 0xd5f9au);
    X86_POLL(c, 0xd5f92u); goto L_d5f92;
L_d5f9c:
    X86_TICK(c, 11);
    // 0d5f9c  dec word ptr [edi + 4]
    X86_AT(c, 0xd5f9cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0d5fa0  jne 0xd5fbd
    X86_AT(c, 0xd5fa0u);
    if (x86_cc(c, 5)) { goto L_d5fbd; }
    X86_TICK(c, 28);
    // 0d5fa2  push ecx
    X86_AT(c, 0xd5fa2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d5fa3  xor ch, ch
    X86_AT(c, 0xd5fa3u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 0d5fa5  xchg byte ptr [edi], ch
    X86_AT(c, 0xd5fa5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 0d5fa7  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0xd5fa7u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0d5faa  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0xd5faau);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0d5fad  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0xd5fadu);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 0d5fb0  call 0xd5fc3
    X86_AT(c, 0xd5fb0u);
    push32(c, 0xd5fb5u); x86_call_known(c, 0xd5fc3u, f_000d5fc3); X86_RET(c, 0xd5fb5u);
    X86_TICK(c, 10);
    // 0d5fb5  dec word ptr [0xb35c0]
    X86_AT(c, 0xd5fb5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35C0u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0d5fbc  pop ecx
    X86_AT(c, 0xd5fbcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_d5fbd:
    X86_TICK(c, 13);
    // 0d5fbd  add edi, 6
    X86_AT(c, 0xd5fbdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0d5fc0  loop 0xd5f92
    X86_AT(c, 0xd5fc0u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd5f92u); goto L_d5f92; }
L_d5fc2:
    X86_TICK(c, 10);
    // 0d5fc2  ret 
    X86_AT(c, 0xd5fc2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5f81u, "ran off the end of a function");
}
void f_000d5fc3(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d5fc3  push eax
    X86_AT(c, 0xd5fc3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d5fc4  or bh, bh
    X86_AT(c, 0xd5fc4u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 7), 1)); }
    // 0d5fc6  je 0xd5fcb
    X86_AT(c, 0xd5fc6u);
    if (x86_cc(c, 4)) { goto L_d5fcb; }
    X86_TICK(c, 2);
    // 0d5fc8  and ch, 0x8f
    X86_AT(c, 0xd5fc8u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x8Fu, 1)); }
L_d5fcb:
    X86_TICK(c, 9);
    // 0d5fcb  mov al, ch
    X86_AT(c, 0xd5fcbu);
    s8(c, 0, g8(c, 5));
    // 0d5fcd  call 0xd6439
    X86_AT(c, 0xd5fcdu);
    push32(c, 0xd5fd2u); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5fd2u);
    X86_TICK(c, 9);
    // 0d5fd2  mov al, cl
    X86_AT(c, 0xd5fd2u);
    s8(c, 0, g8(c, 1));
    // 0d5fd4  call 0xd6439
    X86_AT(c, 0xd5fd4u);
    push32(c, 0xd5fd9u); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5fd9u);
    X86_TICK(c, 9);
    // 0d5fd9  mov al, bh
    X86_AT(c, 0xd5fd9u);
    s8(c, 0, g8(c, 7));
    // 0d5fdb  call 0xd6439
    X86_AT(c, 0xd5fdbu);
    push32(c, 0xd5fe0u); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd5fe0u);
    X86_TICK(c, 14);
    // 0d5fe0  pop eax
    X86_AT(c, 0xd5fe0u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d5fe1  ret 
    X86_AT(c, 0xd5fe1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5fc3u, "ran off the end of a function");
}
void f_000d63e6(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0d63e6  cld 
    X86_AT(c, 0xd63e6u);
    c.fl &= ~X86_DF;
    // 0d63e7  push esi
    X86_AT(c, 0xd63e7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d63e8  push ebx
    X86_AT(c, 0xd63e8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d63e9  and ebx, 7
    X86_AT(c, 0xd63e9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0d63ec  shl ebx, 5
    X86_AT(c, 0xd63ecu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0d63ef  lea ebx, [ebx + 0xb3925]
    X86_AT(c, 0xd63efu);
    c.r[3] = (uint32_t)(c.r[3] + 0xB3925u);
    // 0d63f5  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0xd63f5u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 0d63fa  je 0xd6415
    X86_AT(c, 0xd63fau);
    if (x86_cc(c, 4)) { goto L_d6415; }
    X86_TICK(c, 28);
    // 0d63fc  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0xd63fcu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 0d63ff  lodsb al, byte ptr [esi]
    X86_AT(c, 0xd63ffu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0d6400  dec word ptr [ebx + 0x10]
    X86_AT(c, 0xd6400u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0d6404  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0xd6404u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d6407  jne 0xd640b
    X86_AT(c, 0xd6407u);
    if (x86_cc(c, 5)) { goto L_d640b; }
    X86_TICK(c, 4);
    // 0d6409  mov esi, dword ptr [ebx]
    X86_AT(c, 0xd6409u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_d640b:
    X86_TICK(c, 16);
    // 0d640b  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0xd640bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 0d640e  xor ah, ah
    X86_AT(c, 0xd640eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0d6410  xchg byte ptr [ebx + 0x19], ah
    X86_AT(c, 0xd6410u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 4)); s8(c, 4, t); }
    // 0d6413  jmp 0xd6417
    X86_AT(c, 0xd6413u);
    goto L_d6417;
L_d6415:
    X86_TICK(c, 2);
    // 0d6415  mov ah, 1
    X86_AT(c, 0xd6415u);
    s8(c, 4, 0x1u);
L_d6417:
    X86_TICK(c, 7);
    // 0d6417  cmp ah, 1
    X86_AT(c, 0xd6417u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 0d641a  jbe 0xd6422
    X86_AT(c, 0xd641au);
    if (x86_cc(c, 6)) { goto L_d6422; }
    X86_TICK(c, 2);
    // 0d641c  mov byte ptr [0xb3590], ah
    X86_AT(c, 0xd641cu);
    wr8((c.sbase[3] + (uint32_t)(0xB3590u)), g8(c, 4));
L_d6422:
    X86_TICK(c, 18);
    // 0d6422  pop ebx
    X86_AT(c, 0xd6422u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d6423  pop esi
    X86_AT(c, 0xd6423u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d6424  ret 
    X86_AT(c, 0xd6424u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd63e6u, "ran off the end of a function");
}
void f_000d6439(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d6439  push eax
    X86_AT(c, 0xd6439u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d643a  push ebx
    X86_AT(c, 0xd643au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d643b  push edi
    X86_AT(c, 0xd643bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d643c  cmp bl, 0xff
    X86_AT(c, 0xd643cu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0d643f  je 0xd64be
    X86_AT(c, 0xd643fu);
    if (x86_cc(c, 4)) { goto L_d64be; }
    X86_TICK(c, 19);
    // 0d6445  and ebx, 7
    X86_AT(c, 0xd6445u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0d6448  shl ebx, 5
    X86_AT(c, 0xd6448u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0d644b  lea ebx, [ebx + 0xb3825]
    X86_AT(c, 0xd644bu);
    c.r[3] = (uint32_t)(c.r[3] + 0xB3825u);
    // 0d6451  cmp byte ptr [ebx + 0x18], 0
    X86_AT(c, 0xd6451u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x18u))), 0x0u, 0, 1);
    // 0d6455  je 0xd64c9
    X86_AT(c, 0xd6455u);
    if (x86_cc(c, 4)) { goto L_d64c9; }
    X86_TICK(c, 7);
    // 0d645b  cmp al, 0x80
    X86_AT(c, 0xd645bu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0d645d  jb 0xd6473
    X86_AT(c, 0xd645du);
    if (x86_cc(c, 2)) { goto L_d6473; }
    X86_TICK(c, 7);
    // 0d645f  cmp al, 0xf8
    X86_AT(c, 0xd645fu);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 0d6461  jae 0xd6473
    X86_AT(c, 0xd6461u);
    if (x86_cc(c, 3)) { goto L_d6473; }
    X86_TICK(c, 7);
    // 0d6463  cmp al, 0xf0
    X86_AT(c, 0xd6463u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0d6465  jae 0xd6470
    X86_AT(c, 0xd6465u);
    if (x86_cc(c, 3)) { goto L_d6470; }
    X86_TICK(c, 11);
    // 0d6467  cmp al, byte ptr [ebx + 0x1b]
    X86_AT(c, 0xd6467u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu))), 0, 1);
    // 0d646a  je 0xd64c3
    X86_AT(c, 0xd646au);
    if (x86_cc(c, 4)) { goto L_d64c3; }
L_d6470:
    X86_TICK(c, 2);
    // 0d6470  mov byte ptr [ebx + 0x1b], al
    X86_AT(c, 0xd6470u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), g8(c, 0));
L_d6473:
    X86_TICK(c, 16);
    // 0d6473  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0xd6473u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d6476  cmp word ptr [ebx + 0x10], 0x10
    X86_AT(c, 0xd6476u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x10u, 0, 2);
    // 0d647b  je 0xd6473
    X86_AT(c, 0xd647bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd6473u); goto L_d6473; }
    X86_TICK(c, 24);
    // 0d647d  mov byte ptr [edi], al
    X86_AT(c, 0xd647du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 0d647f  inc edi
    X86_AT(c, 0xd647fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d6480  pushf 
    X86_AT(c, 0xd6480u);
    push16(c, c.fl & 0xFFFFu);
    // 0d6482  cli 
    X86_AT(c, 0xd6482u);
    c.fl &= ~X86_IF;
    // 0d6483  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0xd6483u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 0d6488  jne 0xd64a5
    X86_AT(c, 0xd6488u);
    if (x86_cc(c, 5)) { goto L_d64a5; }
    X86_TICK(c, 32);
    // 0d648e  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0xd648eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 0d6491  or al, byte ptr [0xb37f5]
    X86_AT(c, 0xd6491u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(0xB37F5u))), 1)); }
    // 0d6497  mov byte ptr [0xb37f5], al
    X86_AT(c, 0xd6497u);
    wr8((c.sbase[3] + (uint32_t)(0xB37F5u)), g8(c, 0));
    // 0d649c  push dx
    X86_AT(c, 0xd649cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0d649e  mov dx, 0xe70
    X86_AT(c, 0xd649eu);
    s16(c, 2, 0xE70u);
    // 0d64a2  out dx, al
    X86_AT(c, 0xd64a2u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d64a3  pop dx
    X86_AT(c, 0xd64a3u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_d64a5:
    X86_TICK(c, 23);
    // 0d64a5  inc word ptr [ebx + 0x10]
    X86_AT(c, 0xd64a5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0d64a9  popf 
    X86_AT(c, 0xd64a9u);
    x86_popfd(c, 2);
    // 0d64ab  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0xd64abu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d64ae  jne 0xd64b6
    X86_AT(c, 0xd64aeu);
    if (x86_cc(c, 5)) { goto L_d64b6; }
    X86_TICK(c, 4);
    // 0d64b4  mov edi, dword ptr [ebx]
    X86_AT(c, 0xd64b4u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_d64b6:
    X86_TICK(c, 9);
    // 0d64b6  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0xd64b6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
    // 0d64b9  jmp 0xd64c3
    X86_AT(c, 0xd64b9u);
    goto L_d64c3;
L_d64be:
    X86_TICK(c, 7);
    // 0d64be  call 0xd6eb4
    X86_AT(c, 0xd64beu);
    push32(c, 0xd64c3u); x86_call_known(c, 0xd6eb4u, f_000d6eb4); X86_RET(c, 0xd64c3u);
L_d64c3:
    X86_TICK(c, 24);
    // 0d64c3  pop edi
    X86_AT(c, 0xd64c3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d64c4  pop ebx
    X86_AT(c, 0xd64c4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d64c5  pop eax
    X86_AT(c, 0xd64c5u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d64c6  xor ah, ah
    X86_AT(c, 0xd64c6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0d64c8  ret 
    X86_AT(c, 0xd64c8u);
    c.eip = pop32(c); return;
L_d64c9:
    X86_TICK(c, 24);
    // 0d64c9  pop edi
    X86_AT(c, 0xd64c9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d64ca  pop ebx
    X86_AT(c, 0xd64cau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d64cb  pop eax
    X86_AT(c, 0xd64cbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d64cc  mov ah, 0xf0
    X86_AT(c, 0xd64ccu);
    s8(c, 4, 0xF0u);
    // 0d64ce  ret 
    X86_AT(c, 0xd64ceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6439u, "ran off the end of a function");
}
void f_000d64cf(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d64cf  push ebx
    X86_AT(c, 0xd64cfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d64d0  mov bl, byte ptr [0xb35c2]
    X86_AT(c, 0xd64d0u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xB35C2u))));
    // 0d64d6  cmp bl, 8
    X86_AT(c, 0xd64d6u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 0d64d9  jae 0xd64e0
    X86_AT(c, 0xd64d9u);
    if (x86_cc(c, 3)) { goto L_d64e0; }
    X86_TICK(c, 7);
    // 0d64db  call 0xd6439
    X86_AT(c, 0xd64dbu);
    push32(c, 0xd64e0u); x86_call_known(c, 0xd6439u, f_000d6439); X86_RET(c, 0xd64e0u);
L_d64e0:
    X86_TICK(c, 14);
    // 0d64e0  pop ebx
    X86_AT(c, 0xd64e0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d64e1  ret 
    X86_AT(c, 0xd64e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd64cfu, "ran off the end of a function");
}
void f_000d64e2(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0d64e2  pushfd 
    X86_AT(c, 0xd64e2u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0d64e3  cli 
    X86_AT(c, 0xd64e3u);
    c.fl &= ~X86_IF;
    // 0d64e4  mov cl, 0x44
    X86_AT(c, 0xd64e4u);
    s8(c, 1, 0x44u);
    // 0d64e6  mov ax, 0x2502
    X86_AT(c, 0xd64e6u);
    s16(c, 0, 0x2502u);
    // 0d64ea  int 0x21
    X86_AT(c, 0xd64eau);
    x86_int(c, 0x21, 0xd64ecu);
    X86_TICK(c, 5);
    // 0d64ec  jb 0xd656e
    X86_AT(c, 0xd64ecu);
    if (x86_cc(c, 2)) { goto L_d656e; }
    X86_TICK(c, 9);
    // 0d64f2  lea edx, [0xd6a0f]
    X86_AT(c, 0xd64f2u);
    c.r[2] = (uint32_t)(0xD6A0Fu);
    // 0d64f8  cmp ebx, edx
    X86_AT(c, 0xd64f8u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 0d64fa  je 0xd656e
    X86_AT(c, 0xd64fau);
    if (x86_cc(c, 4)) { goto L_d656e; }
    X86_TICK(c, 47);
    // 0d6500  mov eax, es
    X86_AT(c, 0xd6500u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 0d6502  mov dword ptr [0xb37fa], ebx
    X86_AT(c, 0xd6502u);
    wr32((c.sbase[3] + (uint32_t)(0xB37FAu)), c.r[3]);
    // 0d6508  mov word ptr [0xb37fe], ax
    X86_AT(c, 0xd6508u);
    wr16((c.sbase[3] + (uint32_t)(0xB37FEu)), (c.r[0] & 0xFFFFu));
    // 0d650e  mov cl, 0x44
    X86_AT(c, 0xd650eu);
    s8(c, 1, 0x44u);
    // 0d6510  mov ax, 0x2503
    X86_AT(c, 0xd6510u);
    s16(c, 0, 0x2503u);
    // 0d6514  int 0x21
    X86_AT(c, 0xd6514u);
    x86_int(c, 0x21, 0xd6516u);
    X86_TICK(c, 5);
    // 0d6516  jb 0xd656e
    X86_AT(c, 0xd6516u);
    if (x86_cc(c, 2)) { goto L_d656e; }
    X86_TICK(c, 51);
    // 0d651c  mov dword ptr [0xb3800], ebx
    X86_AT(c, 0xd651cu);
    wr32((c.sbase[3] + (uint32_t)(0xB3800u)), c.r[3]);
    // 0d6522  push ds
    X86_AT(c, 0xd6522u);
    push32(c, c.sreg[3]);
    // 0d6523  mov eax, cs
    X86_AT(c, 0xd6523u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 0d6525  mov ds, eax
    X86_AT(c, 0xd6525u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d6527  mov cl, 0x44
    X86_AT(c, 0xd6527u);
    s8(c, 1, 0x44u);
    // 0d6529  lea edx, [0xd6a0f]
    X86_AT(c, 0xd6529u);
    c.r[2] = (uint32_t)(0xD6A0Fu);
    // 0d652f  mov ax, 0x2506
    X86_AT(c, 0xd652fu);
    s16(c, 0, 0x2506u);
    // 0d6533  int 0x21
    X86_AT(c, 0xd6533u);
    x86_int(c, 0x21, 0xd6535u);
    X86_TICK(c, 9);
    // 0d6535  pop ds
    X86_AT(c, 0xd6535u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d6536  jb 0xd656e
    X86_AT(c, 0xd6536u);
    if (x86_cc(c, 2)) { goto L_d656e; }
    X86_TICK(c, 57);
    // 0d653c  xor al, al
    X86_AT(c, 0xd653cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0d653e  mov byte ptr [0xb37f5], al
    X86_AT(c, 0xd653eu);
    wr8((c.sbase[3] + (uint32_t)(0xB37F5u)), g8(c, 0));
    // 0d6543  mov dx, 0xe70
    X86_AT(c, 0xd6543u);
    s16(c, 2, 0xE70u);
    // 0d6547  out dx, al
    X86_AT(c, 0xd6547u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6548  mov al, 0xff
    X86_AT(c, 0xd6548u);
    s8(c, 0, 0xFFu);
    // 0d654a  mov byte ptr [0xb37f7], al
    X86_AT(c, 0xd654au);
    wr8((c.sbase[3] + (uint32_t)(0xB37F7u)), g8(c, 0));
    // 0d654f  mov dx, 0xe71
    X86_AT(c, 0xd654fu);
    s16(c, 2, 0xE71u);
    // 0d6553  out dx, al
    X86_AT(c, 0xd6553u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6554  mov byte ptr [0xb37f8], 0
    X86_AT(c, 0xd6554u);
    wr8((c.sbase[3] + (uint32_t)(0xB37F8u)), 0x0u);
    // 0d655b  in al, 2
    X86_AT(c, 0xd655bu);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 0d655d  jmp 0xd655f
    X86_AT(c, 0xd655du);
    goto L_d655f;
L_d655f:
    X86_TICK(c, 7);
    // 0d655f  jmp 0xd6561
    X86_AT(c, 0xd655fu);
    goto L_d6561;
L_d6561:
    X86_TICK(c, 7);
    // 0d6561  jmp 0xd6563
    X86_AT(c, 0xd6561u);
    goto L_d6563;
L_d6563:
    X86_TICK(c, 36);
    // 0d6563  mov dl, 0x10
    X86_AT(c, 0xd6563u);
    s8(c, 2, 0x10u);
    // 0d6565  not dl
    X86_AT(c, 0xd6565u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 0d6567  and al, dl
    X86_AT(c, 0xd6567u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0d6569  out 2, al
    X86_AT(c, 0xd6569u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 0d656b  popfd 
    X86_AT(c, 0xd656bu);
    x86_popfd(c, 4);
    // 0d656c  clc 
    X86_AT(c, 0xd656cu);
    c.fl &= ~X86_CF;
    // 0d656d  ret 
    X86_AT(c, 0xd656du);
    c.eip = pop32(c); return;
L_d656e:
    X86_TICK(c, 18);
    // 0d656e  popf 
    X86_AT(c, 0xd656eu);
    x86_popfd(c, 2);
    // 0d6570  stc 
    X86_AT(c, 0xd6570u);
    c.fl |= X86_CF;
    // 0d6571  ret 
    X86_AT(c, 0xd6571u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd64e2u, "ran off the end of a function");
}
void f_000d6572(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0d6572  pushfd 
    X86_AT(c, 0xd6572u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0d6573  cli 
    X86_AT(c, 0xd6573u);
    c.fl &= ~X86_IF;
    // 0d6574  mov cl, 0x45
    X86_AT(c, 0xd6574u);
    s8(c, 1, 0x45u);
    // 0d6576  mov ax, 0x2502
    X86_AT(c, 0xd6576u);
    s16(c, 0, 0x2502u);
    // 0d657a  int 0x21
    X86_AT(c, 0xd657au);
    x86_int(c, 0x21, 0xd657cu);
    X86_TICK(c, 5);
    // 0d657c  jb 0xd65eb
    X86_AT(c, 0xd657cu);
    if (x86_cc(c, 2)) { goto L_d65eb; }
    X86_TICK(c, 9);
    // 0d6582  lea edx, [0xd6a8a]
    X86_AT(c, 0xd6582u);
    c.r[2] = (uint32_t)(0xD6A8Au);
    // 0d6588  cmp ebx, edx
    X86_AT(c, 0xd6588u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 0d658a  je 0xd65eb
    X86_AT(c, 0xd658au);
    if (x86_cc(c, 4)) { goto L_d65eb; }
    X86_TICK(c, 47);
    // 0d6590  mov eax, es
    X86_AT(c, 0xd6590u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 0d6592  mov dword ptr [0xb3804], ebx
    X86_AT(c, 0xd6592u);
    wr32((c.sbase[3] + (uint32_t)(0xB3804u)), c.r[3]);
    // 0d6598  mov word ptr [0xb3808], ax
    X86_AT(c, 0xd6598u);
    wr16((c.sbase[3] + (uint32_t)(0xB3808u)), (c.r[0] & 0xFFFFu));
    // 0d659e  mov cl, 0x45
    X86_AT(c, 0xd659eu);
    s8(c, 1, 0x45u);
    // 0d65a0  mov ax, 0x2503
    X86_AT(c, 0xd65a0u);
    s16(c, 0, 0x2503u);
    // 0d65a4  int 0x21
    X86_AT(c, 0xd65a4u);
    x86_int(c, 0x21, 0xd65a6u);
    X86_TICK(c, 5);
    // 0d65a6  jb 0xd65eb
    X86_AT(c, 0xd65a6u);
    if (x86_cc(c, 2)) { goto L_d65eb; }
    X86_TICK(c, 51);
    // 0d65ac  mov dword ptr [0xb3800], ebx
    X86_AT(c, 0xd65acu);
    wr32((c.sbase[3] + (uint32_t)(0xB3800u)), c.r[3]);
    // 0d65b2  push ds
    X86_AT(c, 0xd65b2u);
    push32(c, c.sreg[3]);
    // 0d65b3  mov eax, cs
    X86_AT(c, 0xd65b3u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 0d65b5  mov ds, eax
    X86_AT(c, 0xd65b5u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d65b7  lea edx, [0xd6a8a]
    X86_AT(c, 0xd65b7u);
    c.r[2] = (uint32_t)(0xD6A8Au);
    // 0d65bd  mov cl, 0x45
    X86_AT(c, 0xd65bdu);
    s8(c, 1, 0x45u);
    // 0d65bf  mov ax, 0x2506
    X86_AT(c, 0xd65bfu);
    s16(c, 0, 0x2506u);
    // 0d65c3  int 0x21
    X86_AT(c, 0xd65c3u);
    x86_int(c, 0x21, 0xd65c5u);
    X86_TICK(c, 9);
    // 0d65c5  pop ds
    X86_AT(c, 0xd65c5u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d65c6  jb 0xd65eb
    X86_AT(c, 0xd65c6u);
    if (x86_cc(c, 2)) { goto L_d65eb; }
    X86_TICK(c, 37);
    // 0d65cc  xor al, al
    X86_AT(c, 0xd65ccu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0d65ce  mov byte ptr [0xb37f6], al
    X86_AT(c, 0xd65ceu);
    wr8((c.sbase[3] + (uint32_t)(0xB37F6u)), g8(c, 0));
    // 0d65d3  mov dx, 0xe73
    X86_AT(c, 0xd65d3u);
    s16(c, 2, 0xE73u);
    // 0d65d7  out dx, al
    X86_AT(c, 0xd65d7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d65d8  in al, 2
    X86_AT(c, 0xd65d8u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 0d65da  jmp 0xd65dc
    X86_AT(c, 0xd65dau);
    goto L_d65dc;
L_d65dc:
    X86_TICK(c, 7);
    // 0d65dc  jmp 0xd65de
    X86_AT(c, 0xd65dcu);
    goto L_d65de;
L_d65de:
    X86_TICK(c, 7);
    // 0d65de  jmp 0xd65e0
    X86_AT(c, 0xd65deu);
    goto L_d65e0;
L_d65e0:
    X86_TICK(c, 36);
    // 0d65e0  mov dl, 0x20
    X86_AT(c, 0xd65e0u);
    s8(c, 2, 0x20u);
    // 0d65e2  not dl
    X86_AT(c, 0xd65e2u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 0d65e4  and al, dl
    X86_AT(c, 0xd65e4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0d65e6  out 2, al
    X86_AT(c, 0xd65e6u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 0d65e8  popfd 
    X86_AT(c, 0xd65e8u);
    x86_popfd(c, 4);
    // 0d65e9  clc 
    X86_AT(c, 0xd65e9u);
    c.fl &= ~X86_CF;
    // 0d65ea  ret 
    X86_AT(c, 0xd65eau);
    c.eip = pop32(c); return;
L_d65eb:
    X86_TICK(c, 18);
    // 0d65eb  popfd 
    X86_AT(c, 0xd65ebu);
    x86_popfd(c, 4);
    // 0d65ec  stc 
    X86_AT(c, 0xd65ecu);
    c.fl |= X86_CF;
    // 0d65ed  ret 
    X86_AT(c, 0xd65edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6572u, "ran off the end of a function");
}
void f_000d65ee(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d65ee  pushfd 
    X86_AT(c, 0xd65eeu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0d65ef  cli 
    X86_AT(c, 0xd65efu);
    c.fl &= ~X86_IF;
    // 0d65f0  call 0xd4d40
    X86_AT(c, 0xd65f0u);
    push32(c, 0xd65f5u); x86_call_known(c, 0xd4d40u, f_000d4d40); X86_RET(c, 0xd65f5u);
    X86_TICK(c, 9);
    // 0d65f5  mov dword ptr [0xb380e], eax
    X86_AT(c, 0xd65f5u);
    wr32((c.sbase[3] + (uint32_t)(0xB380Eu)), c.r[0]);
    // 0d65fa  call 0xd4d5c
    X86_AT(c, 0xd65fau);
    push32(c, 0xd65ffu); x86_call_known(c, 0xd4d5cu, f_000d4d5c); X86_RET(c, 0xd65ffu);
    X86_TICK(c, 13);
    // 0d65ff  mov dword ptr [0xb3812], eax
    X86_AT(c, 0xd65ffu);
    wr32((c.sbase[3] + (uint32_t)(0xB3812u)), c.r[0]);
    // 0d6604  lea eax, [0xd6c02]
    X86_AT(c, 0xd6604u);
    c.r[0] = (uint32_t)(0xD6C02u);
    // 0d660a  push eax
    X86_AT(c, 0xd660au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d660b  call 0xd4d20
    X86_AT(c, 0xd660bu);
    push32(c, 0xd6610u); x86_call_known(c, 0xd4d20u, f_000d4d20); X86_RET(c, 0xd6610u);
    X86_TICK(c, 13);
    // 0d6610  add esp, 4
    X86_AT(c, 0xd6610u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d6613  lea eax, [0xd6d20]
    X86_AT(c, 0xd6613u);
    c.r[0] = (uint32_t)(0xD6D20u);
    // 0d6619  push eax
    X86_AT(c, 0xd6619u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d661a  call 0xd4d4c
    X86_AT(c, 0xd661au);
    push32(c, 0xd661fu); x86_call_known(c, 0xd4d4cu, f_000d4d4c); X86_RET(c, 0xd661fu);
    X86_TICK(c, 20);
    // 0d661f  add esp, 4
    X86_AT(c, 0xd661fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d6622  popfd 
    X86_AT(c, 0xd6622u);
    x86_popfd(c, 4);
    // 0d6623  clc 
    X86_AT(c, 0xd6623u);
    c.fl &= ~X86_CF;
    // 0d6624  ret 
    X86_AT(c, 0xd6624u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd65eeu, "ran off the end of a function");
}
void f_000d6628(X86Cpu& c) {
    X86_TICK(c, 59);
    // 0d6628  pushfd 
    X86_AT(c, 0xd6628u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0d6629  cli 
    X86_AT(c, 0xd6629u);
    c.fl &= ~X86_IF;
    // 0d662a  mov dx, 0xe70
    X86_AT(c, 0xd662au);
    s16(c, 2, 0xE70u);
    // 0d662e  mov al, 0
    X86_AT(c, 0xd662eu);
    s8(c, 0, 0x0u);
    // 0d6630  out dx, al
    X86_AT(c, 0xd6630u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6631  mov dx, 0xe71
    X86_AT(c, 0xd6631u);
    s16(c, 2, 0xE71u);
    // 0d6635  mov al, 0
    X86_AT(c, 0xd6635u);
    s8(c, 0, 0x0u);
    // 0d6637  out dx, al
    X86_AT(c, 0xd6637u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6638  in al, 2
    X86_AT(c, 0xd6638u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 0d663a  jmp 0xd663c
    X86_AT(c, 0xd663au);
    goto L_d663c;
L_d663c:
    X86_TICK(c, 7);
    // 0d663c  jmp 0xd663e
    X86_AT(c, 0xd663cu);
    goto L_d663e;
L_d663e:
    X86_TICK(c, 7);
    // 0d663e  jmp 0xd6640
    X86_AT(c, 0xd663eu);
    goto L_d6640;
L_d6640:
    X86_TICK(c, 71);
    // 0d6640  or al, 0x10
    X86_AT(c, 0xd6640u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 0d6642  out 2, al
    X86_AT(c, 0xd6642u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 0d6644  push ds
    X86_AT(c, 0xd6644u);
    push32(c, c.sreg[3]);
    // 0d6645  mov cl, 0x44
    X86_AT(c, 0xd6645u);
    s8(c, 1, 0x44u);
    // 0d6647  mov edx, dword ptr [0xb37fa]
    X86_AT(c, 0xd6647u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB37FAu)));
    // 0d664d  mov ax, word ptr [0xb37fe]
    X86_AT(c, 0xd664du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB37FEu))));
    // 0d6653  mov ebx, dword ptr [0xb3800]
    X86_AT(c, 0xd6653u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xB3800u)));
    // 0d6659  mov ds, eax
    X86_AT(c, 0xd6659u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d665b  mov ax, 0x2507
    X86_AT(c, 0xd665bu);
    s16(c, 0, 0x2507u);
    // 0d665f  int 0x21
    X86_AT(c, 0xd665fu);
    x86_int(c, 0x21, 0xd6661u);
    X86_TICK(c, 20);
    // 0d6661  pop ds
    X86_AT(c, 0xd6661u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d6662  popfd 
    X86_AT(c, 0xd6662u);
    x86_popfd(c, 4);
    // 0d6663  ret 
    X86_AT(c, 0xd6663u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6628u, "ran off the end of a function");
}
void f_000d6664(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0d6664  pushfd 
    X86_AT(c, 0xd6664u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0d6665  cli 
    X86_AT(c, 0xd6665u);
    c.fl &= ~X86_IF;
    // 0d6666  mov al, byte ptr [0xb37f6]
    X86_AT(c, 0xd6666u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB37F6u))));
    // 0d666b  and al, 0xfc
    X86_AT(c, 0xd666bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 0d666d  mov dx, 0xe73
    X86_AT(c, 0xd666du);
    s16(c, 2, 0xE73u);
    // 0d6671  out dx, al
    X86_AT(c, 0xd6671u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6672  mov byte ptr [0xb37f6], al
    X86_AT(c, 0xd6672u);
    wr8((c.sbase[3] + (uint32_t)(0xB37F6u)), g8(c, 0));
    // 0d6677  in al, 2
    X86_AT(c, 0xd6677u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 0d6679  jmp 0xd667b
    X86_AT(c, 0xd6679u);
    goto L_d667b;
L_d667b:
    X86_TICK(c, 7);
    // 0d667b  jmp 0xd667d
    X86_AT(c, 0xd667bu);
    goto L_d667d;
L_d667d:
    X86_TICK(c, 7);
    // 0d667d  jmp 0xd667f
    X86_AT(c, 0xd667du);
    goto L_d667f;
L_d667f:
    X86_TICK(c, 71);
    // 0d667f  or al, 0x20
    X86_AT(c, 0xd667fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 0d6681  out 2, al
    X86_AT(c, 0xd6681u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 0d6683  push ds
    X86_AT(c, 0xd6683u);
    push32(c, c.sreg[3]);
    // 0d6684  mov cl, 0x45
    X86_AT(c, 0xd6684u);
    s8(c, 1, 0x45u);
    // 0d6686  mov edx, dword ptr [0xb3804]
    X86_AT(c, 0xd6686u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB3804u)));
    // 0d668c  mov ax, word ptr [0xb3808]
    X86_AT(c, 0xd668cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB3808u))));
    // 0d6692  mov ebx, dword ptr [0xb380a]
    X86_AT(c, 0xd6692u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xB380Au)));
    // 0d6698  mov ds, eax
    X86_AT(c, 0xd6698u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d669a  mov ax, 0x2507
    X86_AT(c, 0xd669au);
    s16(c, 0, 0x2507u);
    // 0d669e  int 0x21
    X86_AT(c, 0xd669eu);
    x86_int(c, 0x21, 0xd66a0u);
    X86_TICK(c, 20);
    // 0d66a0  pop ds
    X86_AT(c, 0xd66a0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d66a1  popfd 
    X86_AT(c, 0xd66a1u);
    x86_popfd(c, 4);
    // 0d66a2  ret 
    X86_AT(c, 0xd66a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6664u, "ran off the end of a function");
}
void f_000d66a3(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0d66a3  pushfd 
    X86_AT(c, 0xd66a3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0d66a4  cli 
    X86_AT(c, 0xd66a4u);
    c.fl &= ~X86_IF;
    // 0d66a5  mov bl, 0
    X86_AT(c, 0xd66a5u);
    s8(c, 3, 0x0u);
    // 0d66a7  mov ah, 0x15
    X86_AT(c, 0xd66a7u);
    s8(c, 4, 0x15u);
    // 0d66a9  call 0xd4fcc
    X86_AT(c, 0xd66a9u);
    push32(c, 0xd66aeu); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd66aeu);
    X86_TICK(c, 13);
    // 0d66ae  mov eax, dword ptr [0xb380e]
    X86_AT(c, 0xd66aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB380Eu)));
    // 0d66b3  push eax
    X86_AT(c, 0xd66b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d66b4  call 0xd4d20
    X86_AT(c, 0xd66b4u);
    push32(c, 0xd66b9u); x86_call_known(c, 0xd4d20u, f_000d4d20); X86_RET(c, 0xd66b9u);
    X86_TICK(c, 15);
    // 0d66b9  add esp, 4
    X86_AT(c, 0xd66b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d66bc  mov eax, dword ptr [0xb3812]
    X86_AT(c, 0xd66bcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB3812u)));
    // 0d66c1  push eax
    X86_AT(c, 0xd66c1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d66c2  call 0xd4d4c
    X86_AT(c, 0xd66c2u);
    push32(c, 0xd66c7u); x86_call_known(c, 0xd4d4cu, f_000d4d4c); X86_RET(c, 0xd66c7u);
    X86_TICK(c, 18);
    // 0d66c7  add esp, 4
    X86_AT(c, 0xd66c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d66ca  popfd 
    X86_AT(c, 0xd66cau);
    x86_popfd(c, 4);
    // 0d66cb  ret 
    X86_AT(c, 0xd66cbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd66a3u, "ran off the end of a function");
}
void f_000d66cc(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0d66cc  pushal 
    X86_AT(c, 0xd66ccu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d66cd  lea esi, [0xb3825]
    X86_AT(c, 0xd66cdu);
    c.r[6] = (uint32_t)(0xB3825u);
    // 0d66d3  lea eax, [0xb39a5]
    X86_AT(c, 0xd66d3u);
    c.r[0] = (uint32_t)(0xB39A5u);
    // 0d66d9  mov bx, 0xe50
    X86_AT(c, 0xd66d9u);
    s16(c, 3, 0xE50u);
    // 0d66dd  mov ecx, 4
    X86_AT(c, 0xd66ddu);
    c.r[1] = 0x4u;
    // 0d66e2  mov dx, 1
    X86_AT(c, 0xd66e2u);
    s16(c, 2, 0x1u);
L_d66e6:
    X86_TICK(c, 82);
    // 0d66e6  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0xd66e6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 0d66ec  mov dword ptr [esi], eax
    X86_AT(c, 0xd66ecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0d66ee  mov dword ptr [esi + 8], eax
    X86_AT(c, 0xd66eeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0d66f1  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0xd66f1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 0d66f4  add eax, 0x10
    X86_AT(c, 0xd66f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d66f9  mov dword ptr [esi + 4], eax
    X86_AT(c, 0xd66f9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 0d66fc  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0xd66fcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 0d6700  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0xd6700u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 0d6703  inc bx
    X86_AT(c, 0xd6703u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0d6705  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0xd6705u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 0d6709  add bx, 2
    X86_AT(c, 0xd6709u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 0d670d  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0xd670du);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 0d6711  inc bx
    X86_AT(c, 0xd6711u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0d6713  shl dl, 1
    X86_AT(c, 0xd6713u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0d6715  add esi, 0x20
    X86_AT(c, 0xd6715u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d6718  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0xd6718u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 0d671e  mov dword ptr [esi], eax
    X86_AT(c, 0xd671eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0d6720  mov dword ptr [esi + 8], eax
    X86_AT(c, 0xd6720u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0d6723  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0xd6723u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 0d6726  add eax, 0x10
    X86_AT(c, 0xd6726u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d672b  mov dword ptr [esi + 4], eax
    X86_AT(c, 0xd672bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 0d672e  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0xd672eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 0d6732  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0xd6732u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 0d6735  inc bx
    X86_AT(c, 0xd6735u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0d6737  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0xd6737u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 0d673b  inc bx
    X86_AT(c, 0xd673bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0d673d  inc bx
    X86_AT(c, 0xd673du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0d673f  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0xd673fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 0d6743  sub word ptr [esi + 0x14], 4
    X86_AT(c, 0xd6743u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, 0x4u, 0, 2)); }
    // 0d6748  inc bx
    X86_AT(c, 0xd6748u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0d674a  shl dl, 1
    X86_AT(c, 0xd674au);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0d674c  add esi, 0x20
    X86_AT(c, 0xd674cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d674f  loop 0xd66e6
    X86_AT(c, 0xd674fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd66e6u); goto L_d66e6; }
    X86_TICK(c, 34);
    // 0d6751  popal 
    X86_AT(c, 0xd6751u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d6752  ret 
    X86_AT(c, 0xd6752u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd66ccu, "ran off the end of a function");
}
void f_000d6753(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0d6753  pushal 
    X86_AT(c, 0xd6753u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d6754  lea esi, [0xb3925]
    X86_AT(c, 0xd6754u);
    c.r[6] = (uint32_t)(0xB3925u);
    // 0d675a  lea eax, [0xb3a25]
    X86_AT(c, 0xd675au);
    c.r[0] = (uint32_t)(0xB3A25u);
    // 0d6760  mov bx, 0xe50
    X86_AT(c, 0xd6760u);
    s16(c, 3, 0xE50u);
    // 0d6764  mov ecx, 4
    X86_AT(c, 0xd6764u);
    c.r[1] = 0x4u;
    // 0d6769  mov dx, 1
    X86_AT(c, 0xd6769u);
    s16(c, 2, 0x1u);
L_d676d:
    X86_TICK(c, 44);
    // 0d676d  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0xd676du);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 0d6773  mov dword ptr [esi], eax
    X86_AT(c, 0xd6773u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0d6775  mov dword ptr [esi + 8], eax
    X86_AT(c, 0xd6775u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0d6778  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0xd6778u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 0d677b  add eax, 0x40
    X86_AT(c, 0xd677bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d6780  mov dword ptr [esi + 4], eax
    X86_AT(c, 0xd6780u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 0d6783  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0xd6783u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 0d6787  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0xd6787u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 0d678a  inc bx
    X86_AT(c, 0xd678au);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0d678c  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0xd678cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 0d6790  add bx, 2
    X86_AT(c, 0xd6790u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 0d6794  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0xd6794u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 0d6798  inc bx
    X86_AT(c, 0xd6798u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0d679a  shl dl, 1
    X86_AT(c, 0xd679au);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0d679c  add bx, 4
    X86_AT(c, 0xd679cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x4u, 0, 2)); }
    // 0d67a0  add esi, 0x20
    X86_AT(c, 0xd67a0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d67a3  loop 0xd676d
    X86_AT(c, 0xd67a3u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd676du); goto L_d676d; }
    X86_TICK(c, 34);
    // 0d67a5  popal 
    X86_AT(c, 0xd67a5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d67a6  ret 
    X86_AT(c, 0xd67a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6753u, "ran off the end of a function");
}
void f_000d67a7(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0d67a7  pushal 
    X86_AT(c, 0xd67a7u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d67a8  xor cx, cx
    X86_AT(c, 0xd67a8u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
    // 0d67ab  lea esi, [0xb3925]
    X86_AT(c, 0xd67abu);
    c.r[6] = (uint32_t)(0xB3925u);
    // 0d67b1  lea edi, [0xb3825]
    X86_AT(c, 0xd67b1u);
    c.r[7] = (uint32_t)(0xB3825u);
L_d67b7:
    X86_TICK(c, 16);
    // 0d67b7  mov dx, cx
    X86_AT(c, 0xd67b7u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 0d67ba  shl dx, 3
    X86_AT(c, 0xd67bau);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0d67be  add dx, 0xe51
    X86_AT(c, 0xd67beu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE51u, 0, 2)); }
    // 0d67c3  mov al, 0
    X86_AT(c, 0xd67c3u);
    s8(c, 0, 0x0u);
    // 0d67c5  call 0xd686d
    X86_AT(c, 0xd67c5u);
    push32(c, 0xd67cau); x86_call_known(c, 0xd686du, f_000d686d); X86_RET(c, 0xd67cau);
    X86_TICK(c, 7);
    // 0d67ca  call 0xd686d
    X86_AT(c, 0xd67cau);
    push32(c, 0xd67cfu); x86_call_known(c, 0xd686du, f_000d686d); X86_RET(c, 0xd67cfu);
    X86_TICK(c, 7);
    // 0d67cf  call 0xd686d
    X86_AT(c, 0xd67cfu);
    push32(c, 0xd67d4u); x86_call_known(c, 0xd686du, f_000d686d); X86_RET(c, 0xd67d4u);
    X86_TICK(c, 9);
    // 0d67d4  mov al, 0x40
    X86_AT(c, 0xd67d4u);
    s8(c, 0, 0x40u);
    // 0d67d6  call 0xd686d
    X86_AT(c, 0xd67d6u);
    push32(c, 0xd67dbu); x86_call_known(c, 0xd686du, f_000d686d); X86_RET(c, 0xd67dbu);
    X86_TICK(c, 9);
    // 0d67db  mov al, 0x4e
    X86_AT(c, 0xd67dbu);
    s8(c, 0, 0x4Eu);
    // 0d67dd  call 0xd686d
    X86_AT(c, 0xd67ddu);
    push32(c, 0xd67e2u); x86_call_known(c, 0xd686du, f_000d686d); X86_RET(c, 0xd67e2u);
    X86_TICK(c, 9);
    // 0d67e2  mov al, 0x37
    X86_AT(c, 0xd67e2u);
    s8(c, 0, 0x37u);
    // 0d67e4  call 0xd686d
    X86_AT(c, 0xd67e4u);
    push32(c, 0xd67e9u); x86_call_known(c, 0xd686du, f_000d686d); X86_RET(c, 0xd67e9u);
    X86_TICK(c, 25);
    // 0d67e9  mov byte ptr [esi + 0x18], 0
    X86_AT(c, 0xd67e9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0x0u);
    // 0d67ed  mov byte ptr [edi + 0x18], 0
    X86_AT(c, 0xd67edu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0x0u);
    // 0d67f1  mov byte ptr [edi + 0x38], 0
    X86_AT(c, 0xd67f1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x0u);
    // 0d67f5  in al, dx
    X86_AT(c, 0xd67f5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0d67f6  cmp al, 0xff
    X86_AT(c, 0xd67f6u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0d67f8  je 0xd680a
    X86_AT(c, 0xd67f8u);
    if (x86_cc(c, 4)) { goto L_d680a; }
    X86_TICK(c, 6);
    // 0d67fe  mov byte ptr [esi + 0x18], 0xff
    X86_AT(c, 0xd67feu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0xFFu);
    // 0d6802  mov byte ptr [edi + 0x18], 0xff
    X86_AT(c, 0xd6802u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0xFFu);
    // 0d6806  mov byte ptr [edi + 0x38], 0xff
    X86_AT(c, 0xd6806u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0xFFu);
L_d680a:
    X86_TICK(c, 31);
    // 0d680a  add esi, 0x20
    X86_AT(c, 0xd680au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d680d  add edi, 0x40
    X86_AT(c, 0xd680du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d6810  add dx, 2
    X86_AT(c, 0xd6810u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 0d6814  mov al, 1
    X86_AT(c, 0xd6814u);
    s8(c, 0, 0x1u);
    // 0d6816  out dx, al
    X86_AT(c, 0xd6816u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6817  add dx, 2
    X86_AT(c, 0xd6817u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 0d681b  mov al, 0
    X86_AT(c, 0xd681bu);
    s8(c, 0, 0x0u);
    // 0d681d  call 0xd686d
    X86_AT(c, 0xd681du);
    push32(c, 0xd6822u); x86_call_known(c, 0xd686du, f_000d686d); X86_RET(c, 0xd6822u);
    X86_TICK(c, 7);
    // 0d6822  call 0xd686d
    X86_AT(c, 0xd6822u);
    push32(c, 0xd6827u); x86_call_known(c, 0xd686du, f_000d686d); X86_RET(c, 0xd6827u);
    X86_TICK(c, 7);
    // 0d6827  call 0xd686d
    X86_AT(c, 0xd6827u);
    push32(c, 0xd682cu); x86_call_known(c, 0xd686du, f_000d686d); X86_RET(c, 0xd682cu);
    X86_TICK(c, 9);
    // 0d682c  mov al, 0x40
    X86_AT(c, 0xd682cu);
    s8(c, 0, 0x40u);
    // 0d682e  call 0xd686d
    X86_AT(c, 0xd682eu);
    push32(c, 0xd6833u); x86_call_known(c, 0xd686du, f_000d686d); X86_RET(c, 0xd6833u);
    X86_TICK(c, 9);
    // 0d6833  mov al, 0x4e
    X86_AT(c, 0xd6833u);
    s8(c, 0, 0x4Eu);
    // 0d6835  call 0xd686d
    X86_AT(c, 0xd6835u);
    push32(c, 0xd683au); x86_call_known(c, 0xd686du, f_000d686d); X86_RET(c, 0xd683au);
    X86_TICK(c, 9);
    // 0d683a  mov al, 0x33
    X86_AT(c, 0xd683au);
    s8(c, 0, 0x33u);
    // 0d683c  call 0xd686d
    X86_AT(c, 0xd683cu);
    push32(c, 0xd6841u); x86_call_known(c, 0xd686du, f_000d686d); X86_RET(c, 0xd6841u);
    X86_TICK(c, 9);
    // 0d6841  inc cx
    X86_AT(c, 0xd6841u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 0d6843  cmp cx, 4
    X86_AT(c, 0xd6843u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4u, 0, 2);
    // 0d6847  jb 0xd67b7
    X86_AT(c, 0xd6847u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xd67b7u); goto L_d67b7; }
    X86_TICK(c, 16);
    // 0d684d  mov byte ptr [0xb37f9], 0
    X86_AT(c, 0xd684du);
    wr8((c.sbase[3] + (uint32_t)(0xB37F9u)), 0x0u);
    // 0d6854  lea esi, [0xb3925]
    X86_AT(c, 0xd6854u);
    c.r[6] = (uint32_t)(0xB3925u);
    // 0d685a  cmp byte ptr [esi + 0x18], 0
    X86_AT(c, 0xd685au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u))), 0x0u, 0, 1);
    // 0d685e  je 0xd686b
    X86_AT(c, 0xd685eu);
    if (x86_cc(c, 4)) { goto L_d686b; }
    X86_TICK(c, 2);
    // 0d6864  mov byte ptr [0xb37f9], 1
    X86_AT(c, 0xd6864u);
    wr8((c.sbase[3] + (uint32_t)(0xB37F9u)), 0x1u);
L_d686b:
    X86_TICK(c, 34);
    // 0d686b  popal 
    X86_AT(c, 0xd686bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d686c  ret 
    X86_AT(c, 0xd686cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd67a7u, "ran off the end of a function");
}
void f_000d686d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0d686d  jmp 0xd686f
    X86_AT(c, 0xd686du);
    goto L_d686f;
L_d686f:
    X86_TICK(c, 19);
    // 0d686f  out dx, al
    X86_AT(c, 0xd686fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6870  jmp 0xd6872
    X86_AT(c, 0xd6870u);
    goto L_d6872;
L_d6872:
    X86_TICK(c, 10);
    // 0d6872  ret 
    X86_AT(c, 0xd6872u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd686du, "ran off the end of a function");
}
void f_000d6873(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0d6873  pushal 
    X86_AT(c, 0xd6873u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d6874  pushf 
    X86_AT(c, 0xd6874u);
    push16(c, c.fl & 0xFFFFu);
    // 0d6876  cli 
    X86_AT(c, 0xd6876u);
    c.fl &= ~X86_IF;
    // 0d6877  mov ecx, 4
    X86_AT(c, 0xd6877u);
    c.r[1] = 0x4u;
L_d687c:
    X86_TICK(c, 34);
    // 0d687c  mov dx, cx
    X86_AT(c, 0xd687cu);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 0d687f  dec dx
    X86_AT(c, 0xd687fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0d6881  shl dx, 3
    X86_AT(c, 0xd6881u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0d6885  add dx, 0xe53
    X86_AT(c, 0xd6885u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE53u, 0, 2)); }
    // 0d688a  mov al, 0
    X86_AT(c, 0xd688au);
    s8(c, 0, 0x0u);
    // 0d688c  out dx, al
    X86_AT(c, 0xd688cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d688d  loop 0xd687c
    X86_AT(c, 0xd688du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd687cu); goto L_d687c; }
    X86_TICK(c, 40);
    // 0d688f  popf 
    X86_AT(c, 0xd688fu);
    x86_popfd(c, 2);
    // 0d6891  popal 
    X86_AT(c, 0xd6891u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d6892  ret 
    X86_AT(c, 0xd6892u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6873u, "ran off the end of a function");
}
void f_000d6893(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d6893  push ax
    X86_AT(c, 0xd6893u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d6895  push dx
    X86_AT(c, 0xd6895u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0d6897  pushf 
    X86_AT(c, 0xd6897u);
    push16(c, c.fl & 0xFFFFu);
    // 0d6899  cli 
    X86_AT(c, 0xd6899u);
    c.fl &= ~X86_IF;
    // 0d689a  mov ax, word ptr [0xb35ce]
    X86_AT(c, 0xd689au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB35CEu))));
    // 0d68a0  call 0xd6902
    X86_AT(c, 0xd68a0u);
    push32(c, 0xd68a5u); x86_call_known(c, 0xd6902u, f_000d6902); X86_RET(c, 0xd68a5u);
    X86_TICK(c, 46);
    // 0d68a5  mov al, byte ptr [0xb37f6]
    X86_AT(c, 0xd68a5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB37F6u))));
    // 0d68aa  or al, 1
    X86_AT(c, 0xd68aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x1u, 1)); }
    // 0d68ac  mov dx, 0xe73
    X86_AT(c, 0xd68acu);
    s16(c, 2, 0xE73u);
    // 0d68b0  out dx, al
    X86_AT(c, 0xd68b0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d68b1  mov byte ptr [0xb37f6], al
    X86_AT(c, 0xd68b1u);
    wr8((c.sbase[3] + (uint32_t)(0xB37F6u)), g8(c, 0));
    // 0d68b6  popf 
    X86_AT(c, 0xd68b6u);
    x86_popfd(c, 2);
    // 0d68b8  pop dx
    X86_AT(c, 0xd68b8u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0d68ba  pop ax
    X86_AT(c, 0xd68bau);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d68bc  ret 
    X86_AT(c, 0xd68bcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6893u, "ran off the end of a function");
}
void f_000d68d4(X86Cpu& c) {
    X86_TICK(c, 46);
    // 0d68d4  pushf 
    X86_AT(c, 0xd68d4u);
    push16(c, c.fl & 0xFFFFu);
    // 0d68d6  cli 
    X86_AT(c, 0xd68d6u);
    c.fl &= ~X86_IF;
    // 0d68d7  mov al, byte ptr [0xb37f6]
    X86_AT(c, 0xd68d7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB37F6u))));
    // 0d68dc  and al, 0xfe
    X86_AT(c, 0xd68dcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFEu, 1)); }
    // 0d68de  mov dx, 0xe73
    X86_AT(c, 0xd68deu);
    s16(c, 2, 0xE73u);
    // 0d68e2  out dx, al
    X86_AT(c, 0xd68e2u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d68e3  mov byte ptr [0xb37f6], al
    X86_AT(c, 0xd68e3u);
    wr8((c.sbase[3] + (uint32_t)(0xB37F6u)), g8(c, 0));
    // 0d68e8  popf 
    X86_AT(c, 0xd68e8u);
    x86_popfd(c, 2);
    // 0d68ea  ret 
    X86_AT(c, 0xd68eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd68d4u, "ran off the end of a function");
}
void f_000d6902(X86Cpu& c) {
    X86_TICK(c, 80);
    // 0d6902  push dx
    X86_AT(c, 0xd6902u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0d6904  pushf 
    X86_AT(c, 0xd6904u);
    push16(c, c.fl & 0xFFFFu);
    // 0d6906  cli 
    X86_AT(c, 0xd6906u);
    c.fl &= ~X86_IF;
    // 0d6907  mov dx, 0xe77
    X86_AT(c, 0xd6907u);
    s16(c, 2, 0xE77u);
    // 0d690b  push ax
    X86_AT(c, 0xd690bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d690d  mov al, 0x30
    X86_AT(c, 0xd690du);
    s8(c, 0, 0x30u);
    // 0d690f  out dx, al
    X86_AT(c, 0xd690fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6910  pop ax
    X86_AT(c, 0xd6910u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d6912  mov dx, 0xe74
    X86_AT(c, 0xd6912u);
    s16(c, 2, 0xE74u);
    // 0d6916  out dx, al
    X86_AT(c, 0xd6916u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6917  mov al, ah
    X86_AT(c, 0xd6917u);
    s8(c, 0, g8(c, 4));
    // 0d6919  out dx, al
    X86_AT(c, 0xd6919u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d691a  popf 
    X86_AT(c, 0xd691au);
    x86_popfd(c, 2);
    // 0d691c  pop dx
    X86_AT(c, 0xd691cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0d691e  ret 
    X86_AT(c, 0xd691eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6902u, "ran off the end of a function");
}
void f_000d691f(X86Cpu& c) {
    X86_TICK(c, 57);
    // 0d691f  mov dx, 0xe77
    X86_AT(c, 0xd691fu);
    s16(c, 2, 0xE77u);
    // 0d6923  mov al, 0
    X86_AT(c, 0xd6923u);
    s8(c, 0, 0x0u);
    // 0d6925  out dx, al
    X86_AT(c, 0xd6925u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6926  mov dx, 0xe74
    X86_AT(c, 0xd6926u);
    s16(c, 2, 0xE74u);
    // 0d692a  in al, dx
    X86_AT(c, 0xd692au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0d692b  mov ah, al
    X86_AT(c, 0xd692bu);
    s8(c, 4, g8(c, 0));
    // 0d692d  in al, dx
    X86_AT(c, 0xd692du);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0d692e  xchg ah, al
    X86_AT(c, 0xd692eu);
    { uint32_t t = g8(c, 4); s8(c, 4, g8(c, 0)); s8(c, 0, t); }
    // 0d6930  ret 
    X86_AT(c, 0xd6930u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd691fu, "ran off the end of a function");
}
void f_000d6931(X86Cpu& c) {
    X86_TICK(c, 82);
    // 0d6931  push dx
    X86_AT(c, 0xd6931u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0d6933  mov dx, 0xe77
    X86_AT(c, 0xd6933u);
    s16(c, 2, 0xE77u);
    // 0d6937  pushf 
    X86_AT(c, 0xd6937u);
    push16(c, c.fl & 0xFFFFu);
    // 0d6939  cli 
    X86_AT(c, 0xd6939u);
    c.fl &= ~X86_IF;
    // 0d693a  push ax
    X86_AT(c, 0xd693au);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d693c  mov al, 0x70
    X86_AT(c, 0xd693cu);
    s8(c, 0, 0x70u);
    // 0d693e  out dx, al
    X86_AT(c, 0xd693eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d693f  nop 
    X86_AT(c, 0xd693fu);
    // 0d6940  mov dx, 0xe75
    X86_AT(c, 0xd6940u);
    s16(c, 2, 0xE75u);
    // 0d6944  pop ax
    X86_AT(c, 0xd6944u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d6946  out dx, al
    X86_AT(c, 0xd6946u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6947  mov al, ah
    X86_AT(c, 0xd6947u);
    s8(c, 0, g8(c, 4));
    // 0d6949  out dx, al
    X86_AT(c, 0xd6949u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d694a  popf 
    X86_AT(c, 0xd694au);
    x86_popfd(c, 2);
    // 0d694c  pop dx
    X86_AT(c, 0xd694cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0d694e  ret 
    X86_AT(c, 0xd694eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6931u, "ran off the end of a function");
}
void f_000d696f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d696f  cmp byte ptr [0xb37f9], 0
    X86_AT(c, 0xd696fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB37F9u))), 0x0u, 0, 1);
    // 0d6976  jne 0xd69d8
    X86_AT(c, 0xd6976u);
    if (x86_cc(c, 5)) { goto L_d69d8; }
    X86_TICK(c, 13);
    // 0d697c  push eax
    X86_AT(c, 0xd697cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d697d  push ebx
    X86_AT(c, 0xd697du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d697e  movzx ebx, al
    X86_AT(c, 0xd697eu);
    c.r[3] = g8(c, 0);
    // 0d6981  mov ax, word ptr cs:[ebx*2 + 0xd61e4]
    X86_AT(c, 0xd6981u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xD61E4u))));
    // 0d698a  mov bx, 0x10
    X86_AT(c, 0xd698au);
    s16(c, 3, 0x10u);
L_d698e:
    X86_TICK(c, 7);
    // 0d698e  cmp ax, 0x7d
    X86_AT(c, 0xd698eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Du, 0, 2);
    // 0d6992  ja 0xd699c
    X86_AT(c, 0xd6992u);
    if (x86_cc(c, 7)) { goto L_d699c; }
    X86_TICK(c, 13);
    // 0d6994  shl ax, 1
    X86_AT(c, 0xd6994u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0d6997  shl bx, 1
    X86_AT(c, 0xd6997u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0d699a  jmp 0xd698e
    X86_AT(c, 0xd699au);
    X86_POLL(c, 0xd698eu); goto L_d698e;
L_d699c:
    X86_TICK(c, 7);
    // 0d699c  cmp ax, 0x3ff
    X86_AT(c, 0xd699cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3FFu, 0, 2);
    // 0d69a0  jb 0xd69ae
    X86_AT(c, 0xd69a0u);
    if (x86_cc(c, 2)) { goto L_d69ae; }
    X86_TICK(c, 13);
    // 0d69a6  shr ax, 1
    X86_AT(c, 0xd69a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0d69a9  shr bx, 1
    X86_AT(c, 0xd69a9u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0d69ac  jmp 0xd699c
    X86_AT(c, 0xd69acu);
    X86_POLL(c, 0xd699cu); goto L_d699c;
L_d69ae:
    X86_TICK(c, 31);
    // 0d69ae  pushf 
    X86_AT(c, 0xd69aeu);
    push16(c, c.fl & 0xFFFFu);
    // 0d69b0  cli 
    X86_AT(c, 0xd69b0u);
    c.fl &= ~X86_IF;
    // 0d69b1  mov word ptr [0xb35ce], ax
    X86_AT(c, 0xd69b1u);
    wr16((c.sbase[3] + (uint32_t)(0xB35CEu)), (c.r[0] & 0xFFFFu));
    // 0d69b7  mov word ptr [0xb35c7], bx
    X86_AT(c, 0xd69b7u);
    wr16((c.sbase[3] + (uint32_t)(0xB35C7u)), (c.r[3] & 0xFFFFu));
    // 0d69be  mov ecx, eax
    X86_AT(c, 0xd69beu);
    c.r[1] = c.r[0];
    // 0d69c0  sub ecx, 2
    X86_AT(c, 0xd69c0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0d69c3  neg ecx
    X86_AT(c, 0xd69c3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 0d69c5  mov bl, 0xff
    X86_AT(c, 0xd69c5u);
    s8(c, 3, 0xFFu);
    // 0d69c7  push ecx
    X86_AT(c, 0xd69c7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d69c8  push ebx
    X86_AT(c, 0xd69c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d69c9  call 0xd4ba5
    X86_AT(c, 0xd69c9u);
    push32(c, 0xd69ceu); x86_call_known(c, 0xd4ba5u, f_000d4ba5); X86_RET(c, 0xd69ceu);
    X86_TICK(c, 15);
    // 0d69ce  add esp, 8
    X86_AT(c, 0xd69ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d69d1  popf 
    X86_AT(c, 0xd69d1u);
    x86_popfd(c, 2);
    // 0d69d3  jmp 0xd6a0c
    X86_AT(c, 0xd69d3u);
    goto L_d6a0c;
L_d69d8:
    X86_TICK(c, 13);
    // 0d69d8  push eax
    X86_AT(c, 0xd69d8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d69d9  push ebx
    X86_AT(c, 0xd69d9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d69da  movzx ebx, al
    X86_AT(c, 0xd69dau);
    c.r[3] = g8(c, 0);
    // 0d69dd  mov ax, word ptr cs:[ebx*2 + 0xd5fe2]
    X86_AT(c, 0xd69ddu);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xD5FE2u))));
    // 0d69e6  mov bx, 0x10
    X86_AT(c, 0xd69e6u);
    s16(c, 3, 0x10u);
L_d69ea:
    X86_TICK(c, 7);
    // 0d69ea  cmp ax, 0x450
    X86_AT(c, 0xd69eau);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x450u, 0, 2);
    // 0d69ee  ja 0xd69fc
    X86_AT(c, 0xd69eeu);
    if (x86_cc(c, 7)) { goto L_d69fc; }
    X86_TICK(c, 13);
    // 0d69f4  shl ax, 1
    X86_AT(c, 0xd69f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0d69f7  shl bx, 1
    X86_AT(c, 0xd69f7u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0d69fa  jmp 0xd69ea
    X86_AT(c, 0xd69fau);
    X86_POLL(c, 0xd69eau); goto L_d69ea;
L_d69fc:
    X86_TICK(c, 18);
    // 0d69fc  pushfd 
    X86_AT(c, 0xd69fcu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0d69fd  cli 
    X86_AT(c, 0xd69fdu);
    c.fl &= ~X86_IF;
    // 0d69fe  mov word ptr [0xb35ce], ax
    X86_AT(c, 0xd69feu);
    wr16((c.sbase[3] + (uint32_t)(0xB35CEu)), (c.r[0] & 0xFFFFu));
    // 0d6a04  mov word ptr [0xb35c7], bx
    X86_AT(c, 0xd6a04u);
    wr16((c.sbase[3] + (uint32_t)(0xB35C7u)), (c.r[3] & 0xFFFFu));
    // 0d6a0b  popfd 
    X86_AT(c, 0xd6a0bu);
    x86_popfd(c, 4);
L_d6a0c:
    X86_TICK(c, 18);
    // 0d6a0c  pop ebx
    X86_AT(c, 0xd6a0cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d6a0d  pop eax
    X86_AT(c, 0xd6a0du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d6a0e  ret 
    X86_AT(c, 0xd6a0eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd696fu, "ran off the end of a function");
}
void f_000d6a0f(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0d6a0f  push eax
    X86_AT(c, 0xd6a0fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6a10  push ds
    X86_AT(c, 0xd6a10u);
    push32(c, c.sreg[3]);
    // 0d6a11  push es
    X86_AT(c, 0xd6a11u);
    push32(c, c.sreg[0]);
    // 0d6a12  mov ax, 0x14
    X86_AT(c, 0xd6a12u);
    s16(c, 0, 0x14u);
    // 0d6a16  mov ds, eax
    X86_AT(c, 0xd6a16u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d6a18  mov es, eax
    X86_AT(c, 0xd6a18u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d6a1a  cld 
    X86_AT(c, 0xd6a1au);
    c.fl &= ~X86_DF;
    // 0d6a1b  cmp byte ptr [0xb3818], 0
    X86_AT(c, 0xd6a1bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB3818u))), 0x0u, 0, 1);
    // 0d6a22  jne 0xd6a3e
    X86_AT(c, 0xd6a22u);
    if (x86_cc(c, 5)) { goto L_d6a3e; }
    X86_TICK(c, 10);
    // 0d6a28  mov dword ptr [0xb381f], esp
    X86_AT(c, 0xd6a28u);
    wr32((c.sbase[3] + (uint32_t)(0xB381Fu)), c.r[4]);
    // 0d6a2e  mov word ptr [0xb3823], ss
    X86_AT(c, 0xd6a2eu);
    wr16((c.sbase[3] + (uint32_t)(0xB3823u)), (uint32_t)c.sreg[2]);
    // 0d6a34  mov eax, ds
    X86_AT(c, 0xd6a34u);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0d6a36  mov ss, eax
    X86_AT(c, 0xd6a36u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d6a38  lea esp, [0xb4125]
    X86_AT(c, 0xd6a38u);
    c.r[4] = (uint32_t)(0xB4125u);
L_d6a3e:
    X86_TICK(c, 53);
    // 0d6a3e  inc byte ptr [0xb3818]
    X86_AT(c, 0xd6a3eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB3818u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0d6a44  sti 
    X86_AT(c, 0xd6a44u);
    c.fl |= X86_IF;
    // 0d6a45  push fs
    X86_AT(c, 0xd6a45u);
    push32(c, c.sreg[4]);
    // 0d6a47  push gs
    X86_AT(c, 0xd6a47u);
    push32(c, c.sreg[5]);
    // 0d6a49  pushal 
    X86_AT(c, 0xd6a49u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d6a4a  mov dx, 0xe70
    X86_AT(c, 0xd6a4au);
    s16(c, 2, 0xE70u);
    // 0d6a4e  in ax, dx
    X86_AT(c, 0xd6a4eu);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 0d6a50  xor ax, 0xffff
    X86_AT(c, 0xd6a50u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0xFFFFu, 2)); }
    // 0d6a54  call 0xd6b1a
    X86_AT(c, 0xd6a54u);
    push32(c, 0xd6a59u); x86_call_known(c, 0xd6b1au, f_000d6b1a); X86_RET(c, 0xd6a59u);
    X86_TICK(c, 7);
    // 0d6a59  call 0xd6b36
    X86_AT(c, 0xd6a59u);
    push32(c, 0xd6a5eu); x86_call_known(c, 0xd6b36u, f_000d6b36); X86_RET(c, 0xd6a5eu);
    X86_TICK(c, 7);
    // 0d6a5e  call 0xd6b56
    X86_AT(c, 0xd6a5eu);
    push32(c, 0xd6a63u); x86_call_known(c, 0xd6b56u, f_000d6b56); X86_RET(c, 0xd6a63u);
    X86_TICK(c, 7);
    // 0d6a63  call 0xd4f81
    X86_AT(c, 0xd6a63u);
    push32(c, 0xd6a68u); x86_call_known(c, 0xd4f81u, f_000d4f81); X86_RET(c, 0xd6a68u);
    X86_TICK(c, 45);
    // 0d6a68  popal 
    X86_AT(c, 0xd6a68u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d6a69  pop gs
    X86_AT(c, 0xd6a69u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0d6a6b  pop fs
    X86_AT(c, 0xd6a6bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0d6a6d  cli 
    X86_AT(c, 0xd6a6du);
    c.fl &= ~X86_IF;
    // 0d6a6e  dec byte ptr [0xb3818]
    X86_AT(c, 0xd6a6eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB3818u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0d6a74  jne 0xd6a86
    X86_AT(c, 0xd6a74u);
    if (x86_cc(c, 5)) { goto L_d6a86; }
    X86_TICK(c, 8);
    // 0d6a7a  mov esp, dword ptr [0xb381f]
    X86_AT(c, 0xd6a7au);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0xB381Fu)));
    // 0d6a80  mov ss, word ptr [0xb3823]
    X86_AT(c, 0xd6a80u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0xB3823u))) & 0xFFFFu);
L_d6a86:
    X86_TICK(c, 18);
    // 0d6a86  pop es
    X86_AT(c, 0xd6a86u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d6a87  pop ds
    X86_AT(c, 0xd6a87u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d6a88  pop eax
    X86_AT(c, 0xd6a88u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d6a89  iretd 
    X86_AT(c, 0xd6a89u);
    x86_iret(c, 4); return;
    x86_fault(c, 0xd6a0fu, "ran off the end of a function");
}
void f_000d6a8a(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0d6a8a  push eax
    X86_AT(c, 0xd6a8au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d6a8b  push ds
    X86_AT(c, 0xd6a8bu);
    push32(c, c.sreg[3]);
    // 0d6a8c  push es
    X86_AT(c, 0xd6a8cu);
    push32(c, c.sreg[0]);
    // 0d6a8d  mov ax, 0x14
    X86_AT(c, 0xd6a8du);
    s16(c, 0, 0x14u);
    // 0d6a91  mov ds, eax
    X86_AT(c, 0xd6a91u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d6a93  mov es, eax
    X86_AT(c, 0xd6a93u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d6a95  cld 
    X86_AT(c, 0xd6a95u);
    c.fl &= ~X86_DF;
    // 0d6a96  cmp byte ptr [0xb3817], 0
    X86_AT(c, 0xd6a96u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB3817u))), 0x0u, 0, 1);
    // 0d6a9d  jne 0xd6ab9
    X86_AT(c, 0xd6a9du);
    if (x86_cc(c, 5)) { goto L_d6ab9; }
    X86_TICK(c, 10);
    // 0d6aa3  mov dword ptr [0xb3819], esp
    X86_AT(c, 0xd6aa3u);
    wr32((c.sbase[3] + (uint32_t)(0xB3819u)), c.r[4]);
    // 0d6aa9  mov word ptr [0xb381d], ss
    X86_AT(c, 0xd6aa9u);
    wr16((c.sbase[3] + (uint32_t)(0xB381Du)), (uint32_t)c.sreg[2]);
    // 0d6aaf  mov eax, ds
    X86_AT(c, 0xd6aafu);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0d6ab1  mov ss, eax
    X86_AT(c, 0xd6ab1u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d6ab3  lea esp, [0xb3f25]
    X86_AT(c, 0xd6ab3u);
    c.r[4] = (uint32_t)(0xB3F25u);
L_d6ab9:
    X86_TICK(c, 51);
    // 0d6ab9  inc byte ptr [0xb3817]
    X86_AT(c, 0xd6ab9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB3817u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0d6abf  sti 
    X86_AT(c, 0xd6abfu);
    c.fl |= X86_IF;
    // 0d6ac0  push fs
    X86_AT(c, 0xd6ac0u);
    push32(c, c.sreg[4]);
    // 0d6ac2  push gs
    X86_AT(c, 0xd6ac2u);
    push32(c, c.sreg[5]);
    // 0d6ac4  pushal 
    X86_AT(c, 0xd6ac4u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d6ac5  mov dx, 0xe73
    X86_AT(c, 0xd6ac5u);
    s16(c, 2, 0xE73u);
    // 0d6ac9  in al, dx
    X86_AT(c, 0xd6ac9u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0d6aca  test al, 1
    X86_AT(c, 0xd6acau);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0d6acc  je 0xd6ad3
    X86_AT(c, 0xd6accu);
    if (x86_cc(c, 4)) { goto L_d6ad3; }
    X86_TICK(c, 7);
    // 0d6ace  call 0xd6b7f
    X86_AT(c, 0xd6aceu);
    push32(c, 0xd6ad3u); x86_call_known(c, 0xd6b7fu, f_000d6b7f); X86_RET(c, 0xd6ad3u);
L_d6ad3:
    X86_TICK(c, 7);
    // 0d6ad3  test al, 2
    X86_AT(c, 0xd6ad3u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0d6ad5  je 0xd6adc
    X86_AT(c, 0xd6ad5u);
    if (x86_cc(c, 4)) { goto L_d6adc; }
    X86_TICK(c, 7);
    // 0d6ad7  call 0xd6bf4
    X86_AT(c, 0xd6ad7u);
    push32(c, 0xd6adcu); x86_call_known(c, 0xd6bf4u, f_000d6bf4); X86_RET(c, 0xd6adcu);
L_d6adc:
    X86_TICK(c, 9);
    // 0d6adc  cli 
    X86_AT(c, 0xd6adcu);
    c.fl &= ~X86_IF;
    // 0d6add  call 0xd4f81
    X86_AT(c, 0xd6addu);
    push32(c, 0xd6ae2u); x86_call_known(c, 0xd4f81u, f_000d4f81); X86_RET(c, 0xd6ae2u);
    X86_TICK(c, 7);
    // 0d6ae2  test al, 1
    X86_AT(c, 0xd6ae2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0d6ae4  je 0xd6af8
    X86_AT(c, 0xd6ae4u);
    if (x86_cc(c, 4)) { goto L_d6af8; }
    X86_TICK(c, 7);
    // 0d6ae6  call 0xd4f7b
    X86_AT(c, 0xd6ae6u);
    push32(c, 0xd6aebu); x86_call_known(c, 0xd4f7bu, f_000d4f7b); X86_RET(c, 0xd6aebu);
    X86_TICK(c, 7);
    // 0d6aeb  or al, al
    X86_AT(c, 0xd6aebu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 0d6aed  jne 0xd6af8
    X86_AT(c, 0xd6aedu);
    if (x86_cc(c, 5)) { goto L_d6af8; }
    X86_TICK(c, 7);
    // 0d6af3  call 0xd6d20
    X86_AT(c, 0xd6af3u);
    push32(c, 0xd6af8u); x86_call_known(c, 0xd6d20u, f_000d6d20); X86_RET(c, 0xd6af8u);
L_d6af8:
    X86_TICK(c, 45);
    // 0d6af8  popal 
    X86_AT(c, 0xd6af8u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d6af9  pop gs
    X86_AT(c, 0xd6af9u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0d6afb  pop fs
    X86_AT(c, 0xd6afbu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0d6afd  cli 
    X86_AT(c, 0xd6afdu);
    c.fl &= ~X86_IF;
    // 0d6afe  dec byte ptr [0xb3817]
    X86_AT(c, 0xd6afeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB3817u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0d6b04  jne 0xd6b16
    X86_AT(c, 0xd6b04u);
    if (x86_cc(c, 5)) { goto L_d6b16; }
    X86_TICK(c, 8);
    // 0d6b0a  mov esp, dword ptr [0xb3819]
    X86_AT(c, 0xd6b0au);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0xB3819u)));
    // 0d6b10  mov ss, word ptr [0xb381d]
    X86_AT(c, 0xd6b10u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0xB381Du))) & 0xFFFFu);
L_d6b16:
    X86_TICK(c, 18);
    // 0d6b16  pop es
    X86_AT(c, 0xd6b16u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d6b17  pop ds
    X86_AT(c, 0xd6b17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d6b18  pop eax
    X86_AT(c, 0xd6b18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d6b19  iretd 
    X86_AT(c, 0xd6b19u);
    x86_iret(c, 4); return;
    x86_fault(c, 0xd6a8au, "ran off the end of a function");
}
void f_000d6b1a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d6b1a  push ax
    X86_AT(c, 0xd6b1au);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d6b1c  mov al, ah
    X86_AT(c, 0xd6b1cu);
    s8(c, 0, g8(c, 4));
    // 0d6b1e  and al, 0xf
    X86_AT(c, 0xd6b1eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0d6b20  je 0xd6b33
    X86_AT(c, 0xd6b20u);
    if (x86_cc(c, 4)) { goto L_d6b33; }
    X86_TICK(c, 2);
    // 0d6b22  xor ecx, ecx
    X86_AT(c, 0xd6b22u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_d6b24:
    X86_TICK(c, 8);
    // 0d6b24  shr al, 1
    X86_AT(c, 0xd6b24u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0d6b26  jae 0xd6b2d
    X86_AT(c, 0xd6b26u);
    if (x86_cc(c, 3)) { goto L_d6b2d; }
    X86_TICK(c, 7);
    // 0d6b28  call 0xd6c52
    X86_AT(c, 0xd6b28u);
    push32(c, 0xd6b2du); x86_call_known(c, 0xd6c52u, f_000d6c52); X86_RET(c, 0xd6b2du);
L_d6b2d:
    X86_TICK(c, 9);
    // 0d6b2d  inc ecx
    X86_AT(c, 0xd6b2du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d6b2e  cmp ecx, 4
    X86_AT(c, 0xd6b2eu);
    (void)x86_sub(c, c.r[1], 0x4u, 0, 4);
    // 0d6b31  jb 0xd6b24
    X86_AT(c, 0xd6b31u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xd6b24u); goto L_d6b24; }
L_d6b33:
    X86_TICK(c, 14);
    // 0d6b33  pop ax
    X86_AT(c, 0xd6b33u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d6b35  ret 
    X86_AT(c, 0xd6b35u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6b1au, "ran off the end of a function");
}
void f_000d6b36(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d6b36  push ax
    X86_AT(c, 0xd6b36u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d6b38  or al, al
    X86_AT(c, 0xd6b38u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 0d6b3a  je 0xd6b53
    X86_AT(c, 0xd6b3au);
    if (x86_cc(c, 4)) { goto L_d6b53; }
    X86_TICK(c, 2);
    // 0d6b3c  xor ecx, ecx
    X86_AT(c, 0xd6b3cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_d6b3e:
    X86_TICK(c, 8);
    // 0d6b3e  shr al, 1
    X86_AT(c, 0xd6b3eu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0d6b40  jae 0xd6b4b
    X86_AT(c, 0xd6b40u);
    if (x86_cc(c, 3)) { goto L_d6b4b; }
    X86_TICK(c, 7);
    // 0d6b46  call 0xd6cb2
    X86_AT(c, 0xd6b46u);
    push32(c, 0xd6b4bu); x86_call_known(c, 0xd6cb2u, f_000d6cb2); X86_RET(c, 0xd6b4bu);
L_d6b4b:
    X86_TICK(c, 9);
    // 0d6b4b  inc cx
    X86_AT(c, 0xd6b4bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 0d6b4d  cmp cx, 8
    X86_AT(c, 0xd6b4du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x8u, 0, 2);
    // 0d6b51  jb 0xd6b3e
    X86_AT(c, 0xd6b51u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xd6b3eu); goto L_d6b3e; }
L_d6b53:
    X86_TICK(c, 14);
    // 0d6b53  pop ax
    X86_AT(c, 0xd6b53u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d6b55  ret 
    X86_AT(c, 0xd6b55u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6b36u, "ran off the end of a function");
}
void f_000d6b56(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0d6b56  push ax
    X86_AT(c, 0xd6b56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d6b58  mov al, ah
    X86_AT(c, 0xd6b58u);
    s8(c, 0, g8(c, 4));
    // 0d6b5a  and al, 0xf0
    X86_AT(c, 0xd6b5au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0d6b5c  and al, byte ptr [0xb37f7]
    X86_AT(c, 0xd6b5cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0xB37F7u))), 1)); }
    // 0d6b62  je 0xd6b7c
    X86_AT(c, 0xd6b62u);
    if (x86_cc(c, 4)) { goto L_d6b7c; }
    X86_TICK(c, 31);
    // 0d6b64  or byte ptr [0xb37f8], al
    X86_AT(c, 0xd6b64u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB37F8u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 0d6b6a  xor al, 0xff
    X86_AT(c, 0xd6b6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0d6b6c  and al, byte ptr [0xb37f7]
    X86_AT(c, 0xd6b6cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0xB37F7u))), 1)); }
    // 0d6b72  mov dx, 0xe71
    X86_AT(c, 0xd6b72u);
    s16(c, 2, 0xE71u);
    // 0d6b76  out dx, al
    X86_AT(c, 0xd6b76u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6b77  mov byte ptr [0xb37f7], al
    X86_AT(c, 0xd6b77u);
    wr8((c.sbase[3] + (uint32_t)(0xB37F7u)), g8(c, 0));
L_d6b7c:
    X86_TICK(c, 14);
    // 0d6b7c  pop ax
    X86_AT(c, 0xd6b7cu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d6b7e  ret 
    X86_AT(c, 0xd6b7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6b56u, "ran off the end of a function");
}
void f_000d6b7f(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d6b7f  push ax
    X86_AT(c, 0xd6b7fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d6b81  call 0xd691f
    X86_AT(c, 0xd6b81u);
    push32(c, 0xd6b86u); x86_call_known(c, 0xd691fu, f_000d691f); X86_RET(c, 0xd6b86u);
    X86_TICK(c, 8);
    // 0d6b86  sub ax, 8
    X86_AT(c, 0xd6b86u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x8u, 0, 2)); }
    // 0d6b8a  mov dx, word ptr [0xb35ce]
    X86_AT(c, 0xd6b8au);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0xB35CEu))));
    // 0d6b91  xor cx, cx
    X86_AT(c, 0xd6b91u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
L_d6b94:
    X86_TICK(c, 9);
    // 0d6b94  inc cx
    X86_AT(c, 0xd6b94u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 0d6b96  add ax, dx
    X86_AT(c, 0xd6b96u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0d6b99  jae 0xd6b94
    X86_AT(c, 0xd6b99u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xd6b94u); goto L_d6b94; }
    X86_TICK(c, 7);
    // 0d6b9b  call 0xd6902
    X86_AT(c, 0xd6b9bu);
    push32(c, 0xd6ba0u); x86_call_known(c, 0xd6902u, f_000d6902); X86_RET(c, 0xd6ba0u);
    X86_TICK(c, 53);
    // 0d6ba0  mov ax, word ptr [0xb35c7]
    X86_AT(c, 0xd6ba0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB35C7u))));
    // 0d6ba6  mul cl
    X86_AT(c, 0xd6ba6u);
    x86_mul(c, g8(c, 1), 1);
    // 0d6ba8  add ax, word ptr [0xb35c5]
    X86_AT(c, 0xd6ba8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0xB35C5u))), 0, 2)); }
    // 0d6baf  mov cx, ax
    X86_AT(c, 0xd6bafu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 0d6bb2  and cx, 0xf
    X86_AT(c, 0xd6bb2u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 0d6bb6  mov word ptr [0xb35c5], cx
    X86_AT(c, 0xd6bb6u);
    wr16((c.sbase[3] + (uint32_t)(0xB35C5u)), (c.r[1] & 0xFFFFu));
    // 0d6bbd  shr ax, 4
    X86_AT(c, 0xd6bbdu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 0d6bc1  sub byte ptr [0xb35c4], al
    X86_AT(c, 0xd6bc1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35C4u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 0d6bc7  jns 0xd6bd8
    X86_AT(c, 0xd6bc7u);
    if (x86_cc(c, 9)) { goto L_d6bd8; }
L_d6bc9:
    X86_TICK(c, 18);
    // 0d6bc9  inc byte ptr [0xb35c3]
    X86_AT(c, 0xd6bc9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35C3u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0d6bcf  add byte ptr [0xb35c4], 4
    X86_AT(c, 0xd6bcfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35C4u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 0d6bd6  jae 0xd6bc9
    X86_AT(c, 0xd6bd6u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xd6bc9u); goto L_d6bc9; }
L_d6bd8:
    X86_TICK(c, 12);
    // 0d6bd8  cmp byte ptr [0xb35b6], 0
    X86_AT(c, 0xd6bd8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35B6u))), 0x0u, 0, 1);
    // 0d6bdf  je 0xd6bf1
    X86_AT(c, 0xd6bdfu);
    if (x86_cc(c, 4)) { goto L_d6bf1; }
    X86_TICK(c, 12);
    // 0d6be1  cmp byte ptr [0xb35b8], 0
    X86_AT(c, 0xd6be1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35B8u))), 0x0u, 0, 1);
    // 0d6be8  jne 0xd6bf1
    X86_AT(c, 0xd6be8u);
    if (x86_cc(c, 5)) { goto L_d6bf1; }
    X86_TICK(c, 7);
    // 0d6bea  add word ptr [0xb35c9], ax
    X86_AT(c, 0xd6beau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35C9u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_d6bf1:
    X86_TICK(c, 14);
    // 0d6bf1  pop ax
    X86_AT(c, 0xd6bf1u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d6bf3  ret 
    X86_AT(c, 0xd6bf3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6b7fu, "ran off the end of a function");
}
}

#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00011af5(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011af5  mov ah, 0x27
    X86_AT(c, 0x11af5u);
    s8(c, 4, 0x27u);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11af5u, "ran off the end of a function");
}
void f_00011af7(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11af7u, "ran off the end of a function");
}
void f_00011afc(X86Cpu& c) {
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11afcu, "ran off the end of a function");
}
void f_00011afd(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11afdu, "ran off the end of a function");
}
void f_00011afe(X86Cpu& c) {
    X86_TICK(c, 12);
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11afeu, "ran off the end of a function");
}
void f_00011b00(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b00u, "ran off the end of a function");
}
void f_00011b04(X86Cpu& c) {
    X86_TICK(c, 21);
    // 011b04  push eax
    X86_AT(c, 0x11b04u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011b05  push edx
    X86_AT(c, 0x11b05u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011b06  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11b06u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011b0a  or al, 0x15
    X86_AT(c, 0x11b0au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x15u, 1)); }
    // 011b0c  mov ah, 0x27
    X86_AT(c, 0x11b0cu);
    s8(c, 4, 0x27u);
    // 011b0e  mov dx, 0x4d8
    X86_AT(c, 0x11b0eu);
    s16(c, 2, 0x4D8u);
    // 011b12  call 0x11bf0
    X86_AT(c, 0x11b12u);
    push32(c, 0x11b17u); f_00011bf0(c); X86_RET(c, 0x11b17u);
    X86_TICK(c, 20);
    // 011b17  pop edx
    X86_AT(c, 0x11b17u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b18  pop eax
    X86_AT(c, 0x11b18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b19  xor al, al
    X86_AT(c, 0x11b19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b1b  ret 
    X86_AT(c, 0x11b1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b04u, "ran off the end of a function");
}
void f_00011b05(X86Cpu& c) {
    X86_TICK(c, 19);
    // 011b05  push edx
    X86_AT(c, 0x11b05u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011b06  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11b06u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011b0a  or al, 0x15
    X86_AT(c, 0x11b0au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x15u, 1)); }
    // 011b0c  mov ah, 0x27
    X86_AT(c, 0x11b0cu);
    s8(c, 4, 0x27u);
    // 011b0e  mov dx, 0x4d8
    X86_AT(c, 0x11b0eu);
    s16(c, 2, 0x4D8u);
    // 011b12  call 0x11bf0
    X86_AT(c, 0x11b12u);
    push32(c, 0x11b17u); f_00011bf0(c); X86_RET(c, 0x11b17u);
    X86_TICK(c, 20);
    // 011b17  pop edx
    X86_AT(c, 0x11b17u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b18  pop eax
    X86_AT(c, 0x11b18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b19  xor al, al
    X86_AT(c, 0x11b19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b1b  ret 
    X86_AT(c, 0x11b1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b05u, "ran off the end of a function");
}
void f_00011b06(X86Cpu& c) {
    X86_TICK(c, 17);
    // 011b06  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11b06u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011b0a  or al, 0x15
    X86_AT(c, 0x11b0au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x15u, 1)); }
    // 011b0c  mov ah, 0x27
    X86_AT(c, 0x11b0cu);
    s8(c, 4, 0x27u);
    // 011b0e  mov dx, 0x4d8
    X86_AT(c, 0x11b0eu);
    s16(c, 2, 0x4D8u);
    // 011b12  call 0x11bf0
    X86_AT(c, 0x11b12u);
    push32(c, 0x11b17u); f_00011bf0(c); X86_RET(c, 0x11b17u);
    X86_TICK(c, 20);
    // 011b17  pop edx
    X86_AT(c, 0x11b17u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b18  pop eax
    X86_AT(c, 0x11b18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b19  xor al, al
    X86_AT(c, 0x11b19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b1b  ret 
    X86_AT(c, 0x11b1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b06u, "ran off the end of a function");
}
void f_00011b0a(X86Cpu& c) {
    X86_TICK(c, 13);
    // 011b0a  or al, 0x15
    X86_AT(c, 0x11b0au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x15u, 1)); }
    // 011b0c  mov ah, 0x27
    X86_AT(c, 0x11b0cu);
    s8(c, 4, 0x27u);
    // 011b0e  mov dx, 0x4d8
    X86_AT(c, 0x11b0eu);
    s16(c, 2, 0x4D8u);
    // 011b12  call 0x11bf0
    X86_AT(c, 0x11b12u);
    push32(c, 0x11b17u); f_00011bf0(c); X86_RET(c, 0x11b17u);
    X86_TICK(c, 20);
    // 011b17  pop edx
    X86_AT(c, 0x11b17u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b18  pop eax
    X86_AT(c, 0x11b18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b19  xor al, al
    X86_AT(c, 0x11b19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b1b  ret 
    X86_AT(c, 0x11b1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b0au, "ran off the end of a function");
}
void f_00011b0c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011b0c  mov ah, 0x27
    X86_AT(c, 0x11b0cu);
    s8(c, 4, 0x27u);
    // 011b0e  mov dx, 0x4d8
    X86_AT(c, 0x11b0eu);
    s16(c, 2, 0x4D8u);
    // 011b12  call 0x11bf0
    X86_AT(c, 0x11b12u);
    push32(c, 0x11b17u); f_00011bf0(c); X86_RET(c, 0x11b17u);
    X86_TICK(c, 20);
    // 011b17  pop edx
    X86_AT(c, 0x11b17u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b18  pop eax
    X86_AT(c, 0x11b18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b19  xor al, al
    X86_AT(c, 0x11b19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b1b  ret 
    X86_AT(c, 0x11b1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b0cu, "ran off the end of a function");
}
void f_00011b0e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011b0e  mov dx, 0x4d8
    X86_AT(c, 0x11b0eu);
    s16(c, 2, 0x4D8u);
    // 011b12  call 0x11bf0
    X86_AT(c, 0x11b12u);
    push32(c, 0x11b17u); f_00011bf0(c); X86_RET(c, 0x11b17u);
    X86_TICK(c, 20);
    // 011b17  pop edx
    X86_AT(c, 0x11b17u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b18  pop eax
    X86_AT(c, 0x11b18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b19  xor al, al
    X86_AT(c, 0x11b19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b1b  ret 
    X86_AT(c, 0x11b1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b0eu, "ran off the end of a function");
}
void f_00011b12(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011b12  call 0x11bf0
    X86_AT(c, 0x11b12u);
    push32(c, 0x11b17u); f_00011bf0(c); X86_RET(c, 0x11b17u);
    X86_TICK(c, 20);
    // 011b17  pop edx
    X86_AT(c, 0x11b17u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b18  pop eax
    X86_AT(c, 0x11b18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b19  xor al, al
    X86_AT(c, 0x11b19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b1b  ret 
    X86_AT(c, 0x11b1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b12u, "ran off the end of a function");
}
void f_00011b17(X86Cpu& c) {
    X86_TICK(c, 20);
    // 011b17  pop edx
    X86_AT(c, 0x11b17u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b18  pop eax
    X86_AT(c, 0x11b18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b19  xor al, al
    X86_AT(c, 0x11b19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b1b  ret 
    X86_AT(c, 0x11b1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b17u, "ran off the end of a function");
}
void f_00011b18(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011b18  pop eax
    X86_AT(c, 0x11b18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b19  xor al, al
    X86_AT(c, 0x11b19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b1b  ret 
    X86_AT(c, 0x11b1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b18u, "ran off the end of a function");
}
void f_00011b19(X86Cpu& c) {
    X86_TICK(c, 12);
    // 011b19  xor al, al
    X86_AT(c, 0x11b19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b1b  ret 
    X86_AT(c, 0x11b1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b19u, "ran off the end of a function");
}
void f_00011b1b(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011b1b  ret 
    X86_AT(c, 0x11b1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b1bu, "ran off the end of a function");
}
void f_00011b1c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 011b1c  push eax
    X86_AT(c, 0x11b1cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011b1d  push edx
    X86_AT(c, 0x11b1du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011b1e  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11b1eu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011b22  or al, 0x2a
    X86_AT(c, 0x11b22u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x2Au, 1)); }
    // 011b24  mov ah, 0x27
    X86_AT(c, 0x11b24u);
    s8(c, 4, 0x27u);
    // 011b26  mov dx, 0x4d8
    X86_AT(c, 0x11b26u);
    s16(c, 2, 0x4D8u);
    // 011b2a  call 0x11bf0
    X86_AT(c, 0x11b2au);
    push32(c, 0x11b2fu); f_00011bf0(c); X86_RET(c, 0x11b2fu);
    X86_TICK(c, 20);
    // 011b2f  pop edx
    X86_AT(c, 0x11b2fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b30  pop eax
    X86_AT(c, 0x11b30u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b31  xor al, al
    X86_AT(c, 0x11b31u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b33  ret 
    X86_AT(c, 0x11b33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b1cu, "ran off the end of a function");
}
void f_00011b1d(X86Cpu& c) {
    X86_TICK(c, 19);
    // 011b1d  push edx
    X86_AT(c, 0x11b1du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011b1e  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11b1eu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011b22  or al, 0x2a
    X86_AT(c, 0x11b22u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x2Au, 1)); }
    // 011b24  mov ah, 0x27
    X86_AT(c, 0x11b24u);
    s8(c, 4, 0x27u);
    // 011b26  mov dx, 0x4d8
    X86_AT(c, 0x11b26u);
    s16(c, 2, 0x4D8u);
    // 011b2a  call 0x11bf0
    X86_AT(c, 0x11b2au);
    push32(c, 0x11b2fu); f_00011bf0(c); X86_RET(c, 0x11b2fu);
    X86_TICK(c, 20);
    // 011b2f  pop edx
    X86_AT(c, 0x11b2fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b30  pop eax
    X86_AT(c, 0x11b30u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b31  xor al, al
    X86_AT(c, 0x11b31u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b33  ret 
    X86_AT(c, 0x11b33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b1du, "ran off the end of a function");
}
void f_00011b1e(X86Cpu& c) {
    X86_TICK(c, 17);
    // 011b1e  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11b1eu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011b22  or al, 0x2a
    X86_AT(c, 0x11b22u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x2Au, 1)); }
    // 011b24  mov ah, 0x27
    X86_AT(c, 0x11b24u);
    s8(c, 4, 0x27u);
    // 011b26  mov dx, 0x4d8
    X86_AT(c, 0x11b26u);
    s16(c, 2, 0x4D8u);
    // 011b2a  call 0x11bf0
    X86_AT(c, 0x11b2au);
    push32(c, 0x11b2fu); f_00011bf0(c); X86_RET(c, 0x11b2fu);
    X86_TICK(c, 20);
    // 011b2f  pop edx
    X86_AT(c, 0x11b2fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b30  pop eax
    X86_AT(c, 0x11b30u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b31  xor al, al
    X86_AT(c, 0x11b31u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b33  ret 
    X86_AT(c, 0x11b33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b1eu, "ran off the end of a function");
}
void f_00011b22(X86Cpu& c) {
    X86_TICK(c, 13);
    // 011b22  or al, 0x2a
    X86_AT(c, 0x11b22u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x2Au, 1)); }
    // 011b24  mov ah, 0x27
    X86_AT(c, 0x11b24u);
    s8(c, 4, 0x27u);
    // 011b26  mov dx, 0x4d8
    X86_AT(c, 0x11b26u);
    s16(c, 2, 0x4D8u);
    // 011b2a  call 0x11bf0
    X86_AT(c, 0x11b2au);
    push32(c, 0x11b2fu); f_00011bf0(c); X86_RET(c, 0x11b2fu);
    X86_TICK(c, 20);
    // 011b2f  pop edx
    X86_AT(c, 0x11b2fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b30  pop eax
    X86_AT(c, 0x11b30u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b31  xor al, al
    X86_AT(c, 0x11b31u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b33  ret 
    X86_AT(c, 0x11b33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b22u, "ran off the end of a function");
}
void f_00011b24(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011b24  mov ah, 0x27
    X86_AT(c, 0x11b24u);
    s8(c, 4, 0x27u);
    // 011b26  mov dx, 0x4d8
    X86_AT(c, 0x11b26u);
    s16(c, 2, 0x4D8u);
    // 011b2a  call 0x11bf0
    X86_AT(c, 0x11b2au);
    push32(c, 0x11b2fu); f_00011bf0(c); X86_RET(c, 0x11b2fu);
    X86_TICK(c, 20);
    // 011b2f  pop edx
    X86_AT(c, 0x11b2fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b30  pop eax
    X86_AT(c, 0x11b30u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b31  xor al, al
    X86_AT(c, 0x11b31u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b33  ret 
    X86_AT(c, 0x11b33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b24u, "ran off the end of a function");
}
void f_00011b26(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011b26  mov dx, 0x4d8
    X86_AT(c, 0x11b26u);
    s16(c, 2, 0x4D8u);
    // 011b2a  call 0x11bf0
    X86_AT(c, 0x11b2au);
    push32(c, 0x11b2fu); f_00011bf0(c); X86_RET(c, 0x11b2fu);
    X86_TICK(c, 20);
    // 011b2f  pop edx
    X86_AT(c, 0x11b2fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b30  pop eax
    X86_AT(c, 0x11b30u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b31  xor al, al
    X86_AT(c, 0x11b31u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b33  ret 
    X86_AT(c, 0x11b33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b26u, "ran off the end of a function");
}
void f_00011b2a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011b2a  call 0x11bf0
    X86_AT(c, 0x11b2au);
    push32(c, 0x11b2fu); f_00011bf0(c); X86_RET(c, 0x11b2fu);
    X86_TICK(c, 20);
    // 011b2f  pop edx
    X86_AT(c, 0x11b2fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b30  pop eax
    X86_AT(c, 0x11b30u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b31  xor al, al
    X86_AT(c, 0x11b31u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b33  ret 
    X86_AT(c, 0x11b33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b2au, "ran off the end of a function");
}
void f_00011b2f(X86Cpu& c) {
    X86_TICK(c, 20);
    // 011b2f  pop edx
    X86_AT(c, 0x11b2fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b30  pop eax
    X86_AT(c, 0x11b30u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b31  xor al, al
    X86_AT(c, 0x11b31u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b33  ret 
    X86_AT(c, 0x11b33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b2fu, "ran off the end of a function");
}
void f_00011b30(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011b30  pop eax
    X86_AT(c, 0x11b30u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b31  xor al, al
    X86_AT(c, 0x11b31u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b33  ret 
    X86_AT(c, 0x11b33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b30u, "ran off the end of a function");
}
void f_00011b31(X86Cpu& c) {
    X86_TICK(c, 12);
    // 011b31  xor al, al
    X86_AT(c, 0x11b31u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b33  ret 
    X86_AT(c, 0x11b33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b31u, "ran off the end of a function");
}
void f_00011b33(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011b33  ret 
    X86_AT(c, 0x11b33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b33u, "ran off the end of a function");
}
void f_00011b34(X86Cpu& c) {
    X86_TICK(c, 34);
    // 011b34  push edx
    X86_AT(c, 0x11b34u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011b35  mov dx, 0x4d8
    X86_AT(c, 0x11b35u);
    s16(c, 2, 0x4D8u);
    // 011b39  in al, dx
    X86_AT(c, 0x11b39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011b3a  pop edx
    X86_AT(c, 0x11b3au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b3b  mov dl, al
    X86_AT(c, 0x11b3bu);
    s8(c, 2, g8(c, 0));
    // 011b3d  xor al, al
    X86_AT(c, 0x11b3du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b3f  ret 
    X86_AT(c, 0x11b3fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b34u, "ran off the end of a function");
}
void f_00011b35(X86Cpu& c) {
    X86_TICK(c, 32);
    // 011b35  mov dx, 0x4d8
    X86_AT(c, 0x11b35u);
    s16(c, 2, 0x4D8u);
    // 011b39  in al, dx
    X86_AT(c, 0x11b39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011b3a  pop edx
    X86_AT(c, 0x11b3au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b3b  mov dl, al
    X86_AT(c, 0x11b3bu);
    s8(c, 2, g8(c, 0));
    // 011b3d  xor al, al
    X86_AT(c, 0x11b3du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b3f  ret 
    X86_AT(c, 0x11b3fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b35u, "ran off the end of a function");
}
void f_00011b39(X86Cpu& c) {
    X86_TICK(c, 30);
    // 011b39  in al, dx
    X86_AT(c, 0x11b39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011b3a  pop edx
    X86_AT(c, 0x11b3au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b3b  mov dl, al
    X86_AT(c, 0x11b3bu);
    s8(c, 2, g8(c, 0));
    // 011b3d  xor al, al
    X86_AT(c, 0x11b3du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b3f  ret 
    X86_AT(c, 0x11b3fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b39u, "ran off the end of a function");
}
void f_00011b3a(X86Cpu& c) {
    X86_TICK(c, 18);
    // 011b3a  pop edx
    X86_AT(c, 0x11b3au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b3b  mov dl, al
    X86_AT(c, 0x11b3bu);
    s8(c, 2, g8(c, 0));
    // 011b3d  xor al, al
    X86_AT(c, 0x11b3du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b3f  ret 
    X86_AT(c, 0x11b3fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b3au, "ran off the end of a function");
}
void f_00011b3b(X86Cpu& c) {
    X86_TICK(c, 14);
    // 011b3b  mov dl, al
    X86_AT(c, 0x11b3bu);
    s8(c, 2, g8(c, 0));
    // 011b3d  xor al, al
    X86_AT(c, 0x11b3du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b3f  ret 
    X86_AT(c, 0x11b3fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b3bu, "ran off the end of a function");
}
void f_00011b3d(X86Cpu& c) {
    X86_TICK(c, 12);
    // 011b3d  xor al, al
    X86_AT(c, 0x11b3du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b3f  ret 
    X86_AT(c, 0x11b3fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b3du, "ran off the end of a function");
}
void f_00011b3f(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011b3f  ret 
    X86_AT(c, 0x11b3fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b3fu, "ran off the end of a function");
}
void f_00011b40(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011b40  cmp dl, 8
    X86_AT(c, 0x11b40u);
    (void)x86_sub(c, g8(c, 2), 0x8u, 0, 1);
    // 011b43  ja 0x13557
    X86_AT(c, 0x11b43u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 11);
    // 011b49  push eax
    X86_AT(c, 0x11b49u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011b4a  push edx
    X86_AT(c, 0x11b4au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011b4b  test dl, dl
    X86_AT(c, 0x11b4bu);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 011b4d  je 0x11b52
    X86_AT(c, 0x11b4du);
    if (x86_cc(c, 4)) { goto L_11b52; }
    X86_TICK(c, 2);
    // 011b4f  add dl, 7
    X86_AT(c, 0x11b4fu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x7u, 0, 1)); }
L_11b52:
    X86_TICK(c, 13);
    // 011b52  mov al, dl
    X86_AT(c, 0x11b52u);
    s8(c, 0, g8(c, 2));
    // 011b54  mov ah, 0x22
    X86_AT(c, 0x11b54u);
    s8(c, 4, 0x22u);
    // 011b56  mov dx, 0x4d8
    X86_AT(c, 0x11b56u);
    s16(c, 2, 0x4D8u);
    // 011b5a  call 0x11bf0
    X86_AT(c, 0x11b5au);
    push32(c, 0x11b5fu); f_00011bf0(c); X86_RET(c, 0x11b5fu);
    X86_TICK(c, 20);
    // 011b5f  pop edx
    X86_AT(c, 0x11b5fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011b60  pop eax
    X86_AT(c, 0x11b60u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011b61  xor al, al
    X86_AT(c, 0x11b61u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b63  ret 
    X86_AT(c, 0x11b63u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11b40u, "ran off the end of a function");
}
void f_00011bf0(X86Cpu& c) {
    X86_TICK(c, 21);
    // 011bf0  movzx ebp, ah
    X86_AT(c, 0x11bf0u);
    c.r[5] = g8(c, 4);
    // 011bf3  mov byte ptr gs:[edi + ebp*1], al
    X86_AT(c, 0x11bf3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[5])), g8(c, 0));
    // 011bf7  pushfd 
    X86_AT(c, 0x11bf7u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011bf8  cli 
    X86_AT(c, 0x11bf8u);
    c.fl &= ~X86_IF;
    // 011bf9  push ebx
    X86_AT(c, 0x11bf9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011bfa  push eax
    X86_AT(c, 0x11bfau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011bfb  mov ebx, edx
    X86_AT(c, 0x11bfbu);
    c.r[3] = c.r[2];
    // 011bfd  mov dl, 0xd8
    X86_AT(c, 0x11bfdu);
    s8(c, 2, 0xD8u);
L_11bff:
    X86_TICK(c, 19);
    // 011bff  in al, dx
    X86_AT(c, 0x11bffu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c00  test al, 0x80
    X86_AT(c, 0x11c00u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c02  jne 0x11bff
    X86_AT(c, 0x11c02u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11bffu); goto L_11bff; }
    X86_TICK(c, 38);
    // 011c04  mov edx, ebx
    X86_AT(c, 0x11c04u);
    c.r[2] = c.r[3];
    // 011c06  mov al, ah
    X86_AT(c, 0x11c06u);
    s8(c, 0, g8(c, 4));
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11bf0u, "ran off the end of a function");
}
void f_00011bf3(X86Cpu& c) {
    X86_TICK(c, 18);
    // 011bf3  mov byte ptr gs:[edi + ebp*1], al
    X86_AT(c, 0x11bf3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[5])), g8(c, 0));
    // 011bf7  pushfd 
    X86_AT(c, 0x11bf7u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011bf8  cli 
    X86_AT(c, 0x11bf8u);
    c.fl &= ~X86_IF;
    // 011bf9  push ebx
    X86_AT(c, 0x11bf9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011bfa  push eax
    X86_AT(c, 0x11bfau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011bfb  mov ebx, edx
    X86_AT(c, 0x11bfbu);
    c.r[3] = c.r[2];
    // 011bfd  mov dl, 0xd8
    X86_AT(c, 0x11bfdu);
    s8(c, 2, 0xD8u);
L_11bff:
    X86_TICK(c, 19);
    // 011bff  in al, dx
    X86_AT(c, 0x11bffu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c00  test al, 0x80
    X86_AT(c, 0x11c00u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c02  jne 0x11bff
    X86_AT(c, 0x11c02u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11bffu); goto L_11bff; }
    X86_TICK(c, 38);
    // 011c04  mov edx, ebx
    X86_AT(c, 0x11c04u);
    c.r[2] = c.r[3];
    // 011c06  mov al, ah
    X86_AT(c, 0x11c06u);
    s8(c, 0, g8(c, 4));
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11bf3u, "ran off the end of a function");
}
void f_00011bf7(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011bf7  pushfd 
    X86_AT(c, 0x11bf7u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011bf8  cli 
    X86_AT(c, 0x11bf8u);
    c.fl &= ~X86_IF;
    // 011bf9  push ebx
    X86_AT(c, 0x11bf9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011bfa  push eax
    X86_AT(c, 0x11bfau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011bfb  mov ebx, edx
    X86_AT(c, 0x11bfbu);
    c.r[3] = c.r[2];
    // 011bfd  mov dl, 0xd8
    X86_AT(c, 0x11bfdu);
    s8(c, 2, 0xD8u);
L_11bff:
    X86_TICK(c, 19);
    // 011bff  in al, dx
    X86_AT(c, 0x11bffu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c00  test al, 0x80
    X86_AT(c, 0x11c00u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c02  jne 0x11bff
    X86_AT(c, 0x11c02u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11bffu); goto L_11bff; }
    X86_TICK(c, 38);
    // 011c04  mov edx, ebx
    X86_AT(c, 0x11c04u);
    c.r[2] = c.r[3];
    // 011c06  mov al, ah
    X86_AT(c, 0x11c06u);
    s8(c, 0, g8(c, 4));
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11bf7u, "ran off the end of a function");
}
void f_00011bf8(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011bf8  cli 
    X86_AT(c, 0x11bf8u);
    c.fl &= ~X86_IF;
    // 011bf9  push ebx
    X86_AT(c, 0x11bf9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011bfa  push eax
    X86_AT(c, 0x11bfau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011bfb  mov ebx, edx
    X86_AT(c, 0x11bfbu);
    c.r[3] = c.r[2];
    // 011bfd  mov dl, 0xd8
    X86_AT(c, 0x11bfdu);
    s8(c, 2, 0xD8u);
L_11bff:
    X86_TICK(c, 19);
    // 011bff  in al, dx
    X86_AT(c, 0x11bffu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c00  test al, 0x80
    X86_AT(c, 0x11c00u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c02  jne 0x11bff
    X86_AT(c, 0x11c02u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11bffu); goto L_11bff; }
    X86_TICK(c, 38);
    // 011c04  mov edx, ebx
    X86_AT(c, 0x11c04u);
    c.r[2] = c.r[3];
    // 011c06  mov al, ah
    X86_AT(c, 0x11c06u);
    s8(c, 0, g8(c, 4));
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11bf8u, "ran off the end of a function");
}
void f_00011bf9(X86Cpu& c) {
    X86_TICK(c, 8);
    // 011bf9  push ebx
    X86_AT(c, 0x11bf9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011bfa  push eax
    X86_AT(c, 0x11bfau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011bfb  mov ebx, edx
    X86_AT(c, 0x11bfbu);
    c.r[3] = c.r[2];
    // 011bfd  mov dl, 0xd8
    X86_AT(c, 0x11bfdu);
    s8(c, 2, 0xD8u);
L_11bff:
    X86_TICK(c, 19);
    // 011bff  in al, dx
    X86_AT(c, 0x11bffu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c00  test al, 0x80
    X86_AT(c, 0x11c00u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c02  jne 0x11bff
    X86_AT(c, 0x11c02u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11bffu); goto L_11bff; }
    X86_TICK(c, 38);
    // 011c04  mov edx, ebx
    X86_AT(c, 0x11c04u);
    c.r[2] = c.r[3];
    // 011c06  mov al, ah
    X86_AT(c, 0x11c06u);
    s8(c, 0, g8(c, 4));
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11bf9u, "ran off the end of a function");
}
void f_00011bfa(X86Cpu& c) {
    X86_TICK(c, 6);
    // 011bfa  push eax
    X86_AT(c, 0x11bfau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011bfb  mov ebx, edx
    X86_AT(c, 0x11bfbu);
    c.r[3] = c.r[2];
    // 011bfd  mov dl, 0xd8
    X86_AT(c, 0x11bfdu);
    s8(c, 2, 0xD8u);
L_11bff:
    X86_TICK(c, 19);
    // 011bff  in al, dx
    X86_AT(c, 0x11bffu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c00  test al, 0x80
    X86_AT(c, 0x11c00u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c02  jne 0x11bff
    X86_AT(c, 0x11c02u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11bffu); goto L_11bff; }
    X86_TICK(c, 38);
    // 011c04  mov edx, ebx
    X86_AT(c, 0x11c04u);
    c.r[2] = c.r[3];
    // 011c06  mov al, ah
    X86_AT(c, 0x11c06u);
    s8(c, 0, g8(c, 4));
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11bfau, "ran off the end of a function");
}
void f_00011bfb(X86Cpu& c) {
    X86_TICK(c, 4);
    // 011bfb  mov ebx, edx
    X86_AT(c, 0x11bfbu);
    c.r[3] = c.r[2];
    // 011bfd  mov dl, 0xd8
    X86_AT(c, 0x11bfdu);
    s8(c, 2, 0xD8u);
L_11bff:
    X86_TICK(c, 19);
    // 011bff  in al, dx
    X86_AT(c, 0x11bffu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c00  test al, 0x80
    X86_AT(c, 0x11c00u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c02  jne 0x11bff
    X86_AT(c, 0x11c02u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11bffu); goto L_11bff; }
    X86_TICK(c, 38);
    // 011c04  mov edx, ebx
    X86_AT(c, 0x11c04u);
    c.r[2] = c.r[3];
    // 011c06  mov al, ah
    X86_AT(c, 0x11c06u);
    s8(c, 0, g8(c, 4));
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11bfbu, "ran off the end of a function");
}
void f_00011bfd(X86Cpu& c) {
    X86_TICK(c, 2);
    // 011bfd  mov dl, 0xd8
    X86_AT(c, 0x11bfdu);
    s8(c, 2, 0xD8u);
L_11bff:
    X86_TICK(c, 19);
    // 011bff  in al, dx
    X86_AT(c, 0x11bffu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c00  test al, 0x80
    X86_AT(c, 0x11c00u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c02  jne 0x11bff
    X86_AT(c, 0x11c02u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11bffu); goto L_11bff; }
    X86_TICK(c, 38);
    // 011c04  mov edx, ebx
    X86_AT(c, 0x11c04u);
    c.r[2] = c.r[3];
    // 011c06  mov al, ah
    X86_AT(c, 0x11c06u);
    s8(c, 0, g8(c, 4));
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11bfdu, "ran off the end of a function");
}
void f_00011bff(X86Cpu& c) {
L_11bff:
    X86_TICK(c, 19);
    // 011bff  in al, dx
    X86_AT(c, 0x11bffu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c00  test al, 0x80
    X86_AT(c, 0x11c00u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c02  jne 0x11bff
    X86_AT(c, 0x11c02u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11bffu); goto L_11bff; }
    X86_TICK(c, 38);
    // 011c04  mov edx, ebx
    X86_AT(c, 0x11c04u);
    c.r[2] = c.r[3];
    // 011c06  mov al, ah
    X86_AT(c, 0x11c06u);
    s8(c, 0, g8(c, 4));
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11bffu, "ran off the end of a function");
}
void f_00011c00(X86Cpu& c) {
    goto L_11c00;
L_11bff:
    X86_TICK(c, 12);
    // 011bff  in al, dx
    X86_AT(c, 0x11bffu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
L_11c00:
    X86_TICK(c, 7);
    // 011c00  test al, 0x80
    X86_AT(c, 0x11c00u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c02  jne 0x11bff
    X86_AT(c, 0x11c02u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11bffu); goto L_11bff; }
    X86_TICK(c, 38);
    // 011c04  mov edx, ebx
    X86_AT(c, 0x11c04u);
    c.r[2] = c.r[3];
    // 011c06  mov al, ah
    X86_AT(c, 0x11c06u);
    s8(c, 0, g8(c, 4));
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c00u, "ran off the end of a function");
}
void f_00011c02(X86Cpu& c) {
    goto L_11c02;
L_11bff:
    X86_TICK(c, 14);
    // 011bff  in al, dx
    X86_AT(c, 0x11bffu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c00  test al, 0x80
    X86_AT(c, 0x11c00u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
L_11c02:
    X86_TICK(c, 5);
    // 011c02  jne 0x11bff
    X86_AT(c, 0x11c02u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11bffu); goto L_11bff; }
    X86_TICK(c, 38);
    // 011c04  mov edx, ebx
    X86_AT(c, 0x11c04u);
    c.r[2] = c.r[3];
    // 011c06  mov al, ah
    X86_AT(c, 0x11c06u);
    s8(c, 0, g8(c, 4));
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c02u, "ran off the end of a function");
}
void f_00011c04(X86Cpu& c) {
    X86_TICK(c, 38);
    // 011c04  mov edx, ebx
    X86_AT(c, 0x11c04u);
    c.r[2] = c.r[3];
    // 011c06  mov al, ah
    X86_AT(c, 0x11c06u);
    s8(c, 0, g8(c, 4));
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c04u, "ran off the end of a function");
}
void f_00011c06(X86Cpu& c) {
    X86_TICK(c, 36);
    // 011c06  mov al, ah
    X86_AT(c, 0x11c06u);
    s8(c, 0, g8(c, 4));
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c06u, "ran off the end of a function");
}
void f_00011c08(X86Cpu& c) {
    X86_TICK(c, 34);
    // 011c08  out dx, al
    X86_AT(c, 0x11c08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c08u, "ran off the end of a function");
}
void f_00011c09(X86Cpu& c) {
    X86_TICK(c, 22);
    // 011c09  push ds
    X86_AT(c, 0x11c09u);
    push32(c, c.sreg[3]);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c09u, "ran off the end of a function");
}
void f_00011c0a(X86Cpu& c) {
    X86_TICK(c, 20);
    // 011c0a  pop ds
    X86_AT(c, 0x11c0au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c0au, "ran off the end of a function");
}
void f_00011c0b(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011c0b  pushfd 
    X86_AT(c, 0x11c0bu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c0bu, "ran off the end of a function");
}
void f_00011c0c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011c0c  cld 
    X86_AT(c, 0x11c0cu);
    c.fl &= ~X86_DF;
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c0cu, "ran off the end of a function");
}
void f_00011c0d(X86Cpu& c) {
    X86_TICK(c, 8);
    // 011c0d  popfd 
    X86_AT(c, 0x11c0du);
    x86_popfd(c, 4);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c0du, "ran off the end of a function");
}
void f_00011c0e(X86Cpu& c) {
    X86_TICK(c, 2);
    // 011c0e  mov dl, 0xd8
    X86_AT(c, 0x11c0eu);
    s8(c, 2, 0xD8u);
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c0eu, "ran off the end of a function");
}
void f_00011c10(X86Cpu& c) {
L_11c10:
    X86_TICK(c, 19);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c10u, "ran off the end of a function");
}
void f_00011c11(X86Cpu& c) {
    goto L_11c11;
L_11c10:
    X86_TICK(c, 12);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
L_11c11:
    X86_TICK(c, 7);
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c11u, "ran off the end of a function");
}
void f_00011c13(X86Cpu& c) {
    goto L_11c13;
L_11c10:
    X86_TICK(c, 14);
    // 011c10  in al, dx
    X86_AT(c, 0x11c10u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c11  test al, 0x80
    X86_AT(c, 0x11c11u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
L_11c13:
    X86_TICK(c, 5);
    // 011c13  jne 0x11c10
    X86_AT(c, 0x11c13u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c10u); goto L_11c10; }
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c13u, "ran off the end of a function");
}
void f_00011c15(X86Cpu& c) {
    X86_TICK(c, 40);
    // 011c15  lea edx, [ebx + 2]
    X86_AT(c, 0x11c15u);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c15u, "ran off the end of a function");
}
void f_00011c18(X86Cpu& c) {
    X86_TICK(c, 38);
    // 011c18  pop eax
    X86_AT(c, 0x11c18u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c18u, "ran off the end of a function");
}
void f_00011c19(X86Cpu& c) {
    X86_TICK(c, 34);
    // 011c19  out dx, al
    X86_AT(c, 0x11c19u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c19u, "ran off the end of a function");
}
void f_00011c1a(X86Cpu& c) {
    X86_TICK(c, 22);
    // 011c1a  mov edx, ebx
    X86_AT(c, 0x11c1au);
    c.r[2] = c.r[3];
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c1au, "ran off the end of a function");
}
void f_00011c1c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 011c1c  pop ebx
    X86_AT(c, 0x11c1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c1cu, "ran off the end of a function");
}
void f_00011c1d(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011c1d  popfd 
    X86_AT(c, 0x11c1du);
    x86_popfd(c, 4);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c1du, "ran off the end of a function");
}
void f_00011c1e(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011c1e  ret 
    X86_AT(c, 0x11c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c1eu, "ran off the end of a function");
}
void f_00011c20(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011c20  pushfd 
    X86_AT(c, 0x11c20u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c21  cli 
    X86_AT(c, 0x11c21u);
    c.fl &= ~X86_IF;
    // 011c22  push ebx
    X86_AT(c, 0x11c22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011c23  push eax
    X86_AT(c, 0x11c23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011c24  mov ebx, edx
    X86_AT(c, 0x11c24u);
    c.r[3] = c.r[2];
    // 011c26  mov dl, 0xd8
    X86_AT(c, 0x11c26u);
    s8(c, 2, 0xD8u);
L_11c28:
    X86_TICK(c, 19);
    // 011c28  in al, dx
    X86_AT(c, 0x11c28u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c29  test al, 0x80
    X86_AT(c, 0x11c29u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c2b  jne 0x11c28
    X86_AT(c, 0x11c2bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c28u); goto L_11c28; }
    X86_TICK(c, 38);
    // 011c2d  mov edx, ebx
    X86_AT(c, 0x11c2du);
    c.r[2] = c.r[3];
    // 011c2f  mov al, ah
    X86_AT(c, 0x11c2fu);
    s8(c, 0, g8(c, 4));
    // 011c31  out dx, al
    X86_AT(c, 0x11c31u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c32  push ds
    X86_AT(c, 0x11c32u);
    push32(c, c.sreg[3]);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c20u, "ran off the end of a function");
}
void f_00011c21(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011c21  cli 
    X86_AT(c, 0x11c21u);
    c.fl &= ~X86_IF;
    // 011c22  push ebx
    X86_AT(c, 0x11c22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011c23  push eax
    X86_AT(c, 0x11c23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011c24  mov ebx, edx
    X86_AT(c, 0x11c24u);
    c.r[3] = c.r[2];
    // 011c26  mov dl, 0xd8
    X86_AT(c, 0x11c26u);
    s8(c, 2, 0xD8u);
L_11c28:
    X86_TICK(c, 19);
    // 011c28  in al, dx
    X86_AT(c, 0x11c28u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c29  test al, 0x80
    X86_AT(c, 0x11c29u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c2b  jne 0x11c28
    X86_AT(c, 0x11c2bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c28u); goto L_11c28; }
    X86_TICK(c, 38);
    // 011c2d  mov edx, ebx
    X86_AT(c, 0x11c2du);
    c.r[2] = c.r[3];
    // 011c2f  mov al, ah
    X86_AT(c, 0x11c2fu);
    s8(c, 0, g8(c, 4));
    // 011c31  out dx, al
    X86_AT(c, 0x11c31u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c32  push ds
    X86_AT(c, 0x11c32u);
    push32(c, c.sreg[3]);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c21u, "ran off the end of a function");
}
void f_00011c22(X86Cpu& c) {
    X86_TICK(c, 8);
    // 011c22  push ebx
    X86_AT(c, 0x11c22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011c23  push eax
    X86_AT(c, 0x11c23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011c24  mov ebx, edx
    X86_AT(c, 0x11c24u);
    c.r[3] = c.r[2];
    // 011c26  mov dl, 0xd8
    X86_AT(c, 0x11c26u);
    s8(c, 2, 0xD8u);
L_11c28:
    X86_TICK(c, 19);
    // 011c28  in al, dx
    X86_AT(c, 0x11c28u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c29  test al, 0x80
    X86_AT(c, 0x11c29u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c2b  jne 0x11c28
    X86_AT(c, 0x11c2bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c28u); goto L_11c28; }
    X86_TICK(c, 38);
    // 011c2d  mov edx, ebx
    X86_AT(c, 0x11c2du);
    c.r[2] = c.r[3];
    // 011c2f  mov al, ah
    X86_AT(c, 0x11c2fu);
    s8(c, 0, g8(c, 4));
    // 011c31  out dx, al
    X86_AT(c, 0x11c31u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c32  push ds
    X86_AT(c, 0x11c32u);
    push32(c, c.sreg[3]);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c22u, "ran off the end of a function");
}
void f_00011c23(X86Cpu& c) {
    X86_TICK(c, 6);
    // 011c23  push eax
    X86_AT(c, 0x11c23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011c24  mov ebx, edx
    X86_AT(c, 0x11c24u);
    c.r[3] = c.r[2];
    // 011c26  mov dl, 0xd8
    X86_AT(c, 0x11c26u);
    s8(c, 2, 0xD8u);
L_11c28:
    X86_TICK(c, 19);
    // 011c28  in al, dx
    X86_AT(c, 0x11c28u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c29  test al, 0x80
    X86_AT(c, 0x11c29u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c2b  jne 0x11c28
    X86_AT(c, 0x11c2bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c28u); goto L_11c28; }
    X86_TICK(c, 38);
    // 011c2d  mov edx, ebx
    X86_AT(c, 0x11c2du);
    c.r[2] = c.r[3];
    // 011c2f  mov al, ah
    X86_AT(c, 0x11c2fu);
    s8(c, 0, g8(c, 4));
    // 011c31  out dx, al
    X86_AT(c, 0x11c31u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c32  push ds
    X86_AT(c, 0x11c32u);
    push32(c, c.sreg[3]);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c23u, "ran off the end of a function");
}
void f_00011c24(X86Cpu& c) {
    X86_TICK(c, 4);
    // 011c24  mov ebx, edx
    X86_AT(c, 0x11c24u);
    c.r[3] = c.r[2];
    // 011c26  mov dl, 0xd8
    X86_AT(c, 0x11c26u);
    s8(c, 2, 0xD8u);
L_11c28:
    X86_TICK(c, 19);
    // 011c28  in al, dx
    X86_AT(c, 0x11c28u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c29  test al, 0x80
    X86_AT(c, 0x11c29u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c2b  jne 0x11c28
    X86_AT(c, 0x11c2bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c28u); goto L_11c28; }
    X86_TICK(c, 38);
    // 011c2d  mov edx, ebx
    X86_AT(c, 0x11c2du);
    c.r[2] = c.r[3];
    // 011c2f  mov al, ah
    X86_AT(c, 0x11c2fu);
    s8(c, 0, g8(c, 4));
    // 011c31  out dx, al
    X86_AT(c, 0x11c31u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c32  push ds
    X86_AT(c, 0x11c32u);
    push32(c, c.sreg[3]);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c24u, "ran off the end of a function");
}
void f_00011c26(X86Cpu& c) {
    X86_TICK(c, 2);
    // 011c26  mov dl, 0xd8
    X86_AT(c, 0x11c26u);
    s8(c, 2, 0xD8u);
L_11c28:
    X86_TICK(c, 19);
    // 011c28  in al, dx
    X86_AT(c, 0x11c28u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c29  test al, 0x80
    X86_AT(c, 0x11c29u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c2b  jne 0x11c28
    X86_AT(c, 0x11c2bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c28u); goto L_11c28; }
    X86_TICK(c, 38);
    // 011c2d  mov edx, ebx
    X86_AT(c, 0x11c2du);
    c.r[2] = c.r[3];
    // 011c2f  mov al, ah
    X86_AT(c, 0x11c2fu);
    s8(c, 0, g8(c, 4));
    // 011c31  out dx, al
    X86_AT(c, 0x11c31u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c32  push ds
    X86_AT(c, 0x11c32u);
    push32(c, c.sreg[3]);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c26u, "ran off the end of a function");
}
void f_00011c28(X86Cpu& c) {
L_11c28:
    X86_TICK(c, 19);
    // 011c28  in al, dx
    X86_AT(c, 0x11c28u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c29  test al, 0x80
    X86_AT(c, 0x11c29u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c2b  jne 0x11c28
    X86_AT(c, 0x11c2bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c28u); goto L_11c28; }
    X86_TICK(c, 38);
    // 011c2d  mov edx, ebx
    X86_AT(c, 0x11c2du);
    c.r[2] = c.r[3];
    // 011c2f  mov al, ah
    X86_AT(c, 0x11c2fu);
    s8(c, 0, g8(c, 4));
    // 011c31  out dx, al
    X86_AT(c, 0x11c31u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c32  push ds
    X86_AT(c, 0x11c32u);
    push32(c, c.sreg[3]);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c28u, "ran off the end of a function");
}
void f_00011c29(X86Cpu& c) {
    goto L_11c29;
L_11c28:
    X86_TICK(c, 12);
    // 011c28  in al, dx
    X86_AT(c, 0x11c28u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
L_11c29:
    X86_TICK(c, 7);
    // 011c29  test al, 0x80
    X86_AT(c, 0x11c29u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c2b  jne 0x11c28
    X86_AT(c, 0x11c2bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c28u); goto L_11c28; }
    X86_TICK(c, 38);
    // 011c2d  mov edx, ebx
    X86_AT(c, 0x11c2du);
    c.r[2] = c.r[3];
    // 011c2f  mov al, ah
    X86_AT(c, 0x11c2fu);
    s8(c, 0, g8(c, 4));
    // 011c31  out dx, al
    X86_AT(c, 0x11c31u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c32  push ds
    X86_AT(c, 0x11c32u);
    push32(c, c.sreg[3]);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c29u, "ran off the end of a function");
}
void f_00011c2b(X86Cpu& c) {
    goto L_11c2b;
L_11c28:
    X86_TICK(c, 14);
    // 011c28  in al, dx
    X86_AT(c, 0x11c28u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c29  test al, 0x80
    X86_AT(c, 0x11c29u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
L_11c2b:
    X86_TICK(c, 5);
    // 011c2b  jne 0x11c28
    X86_AT(c, 0x11c2bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c28u); goto L_11c28; }
    X86_TICK(c, 38);
    // 011c2d  mov edx, ebx
    X86_AT(c, 0x11c2du);
    c.r[2] = c.r[3];
    // 011c2f  mov al, ah
    X86_AT(c, 0x11c2fu);
    s8(c, 0, g8(c, 4));
    // 011c31  out dx, al
    X86_AT(c, 0x11c31u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c32  push ds
    X86_AT(c, 0x11c32u);
    push32(c, c.sreg[3]);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c2bu, "ran off the end of a function");
}
void f_00011c2d(X86Cpu& c) {
    X86_TICK(c, 38);
    // 011c2d  mov edx, ebx
    X86_AT(c, 0x11c2du);
    c.r[2] = c.r[3];
    // 011c2f  mov al, ah
    X86_AT(c, 0x11c2fu);
    s8(c, 0, g8(c, 4));
    // 011c31  out dx, al
    X86_AT(c, 0x11c31u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c32  push ds
    X86_AT(c, 0x11c32u);
    push32(c, c.sreg[3]);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c2du, "ran off the end of a function");
}
void f_00011c2f(X86Cpu& c) {
    X86_TICK(c, 36);
    // 011c2f  mov al, ah
    X86_AT(c, 0x11c2fu);
    s8(c, 0, g8(c, 4));
    // 011c31  out dx, al
    X86_AT(c, 0x11c31u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c32  push ds
    X86_AT(c, 0x11c32u);
    push32(c, c.sreg[3]);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c2fu, "ran off the end of a function");
}
void f_00011c31(X86Cpu& c) {
    X86_TICK(c, 34);
    // 011c31  out dx, al
    X86_AT(c, 0x11c31u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c32  push ds
    X86_AT(c, 0x11c32u);
    push32(c, c.sreg[3]);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c31u, "ran off the end of a function");
}
void f_00011c32(X86Cpu& c) {
    X86_TICK(c, 22);
    // 011c32  push ds
    X86_AT(c, 0x11c32u);
    push32(c, c.sreg[3]);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c32u, "ran off the end of a function");
}
void f_00011c33(X86Cpu& c) {
    X86_TICK(c, 20);
    // 011c33  pop ds
    X86_AT(c, 0x11c33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c33u, "ran off the end of a function");
}
void f_00011c34(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011c34  pushfd 
    X86_AT(c, 0x11c34u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c34u, "ran off the end of a function");
}
void f_00011c35(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011c35  cld 
    X86_AT(c, 0x11c35u);
    c.fl &= ~X86_DF;
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c35u, "ran off the end of a function");
}
void f_00011c36(X86Cpu& c) {
    X86_TICK(c, 8);
    // 011c36  popfd 
    X86_AT(c, 0x11c36u);
    x86_popfd(c, 4);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c36u, "ran off the end of a function");
}
void f_00011c37(X86Cpu& c) {
    X86_TICK(c, 2);
    // 011c37  mov dl, 0xd8
    X86_AT(c, 0x11c37u);
    s8(c, 2, 0xD8u);
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c37u, "ran off the end of a function");
}
void f_00011c39(X86Cpu& c) {
L_11c39:
    X86_TICK(c, 19);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c39u, "ran off the end of a function");
}
void f_00011c3a(X86Cpu& c) {
    goto L_11c3a;
L_11c39:
    X86_TICK(c, 12);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
L_11c3a:
    X86_TICK(c, 7);
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c3au, "ran off the end of a function");
}
void f_00011c3c(X86Cpu& c) {
    goto L_11c3c;
L_11c39:
    X86_TICK(c, 14);
    // 011c39  in al, dx
    X86_AT(c, 0x11c39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011c3a  test al, 0x80
    X86_AT(c, 0x11c3au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
L_11c3c:
    X86_TICK(c, 5);
    // 011c3c  jne 0x11c39
    X86_AT(c, 0x11c3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11c39u); goto L_11c39; }
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c3cu, "ran off the end of a function");
}
void f_00011c3e(X86Cpu& c) {
    X86_TICK(c, 40);
    // 011c3e  lea edx, [ebx + 2]
    X86_AT(c, 0x11c3eu);
    c.r[2] = (uint32_t)(c.r[3] + 0x2u);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c3eu, "ran off the end of a function");
}
void f_00011c41(X86Cpu& c) {
    X86_TICK(c, 38);
    // 011c41  pop eax
    X86_AT(c, 0x11c41u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c41u, "ran off the end of a function");
}
void f_00011c42(X86Cpu& c) {
    X86_TICK(c, 34);
    // 011c42  out dx, al
    X86_AT(c, 0x11c42u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c42u, "ran off the end of a function");
}
void f_00011c43(X86Cpu& c) {
    X86_TICK(c, 22);
    // 011c43  mov edx, ebx
    X86_AT(c, 0x11c43u);
    c.r[2] = c.r[3];
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c43u, "ran off the end of a function");
}
void f_00011c45(X86Cpu& c) {
    X86_TICK(c, 20);
    // 011c45  pop ebx
    X86_AT(c, 0x11c45u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c45u, "ran off the end of a function");
}
void f_00011c46(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011c46  popfd 
    X86_AT(c, 0x11c46u);
    x86_popfd(c, 4);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c46u, "ran off the end of a function");
}
void f_00011c47(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011c47  ret 
    X86_AT(c, 0x11c47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c47u, "ran off the end of a function");
}
void f_00011c48(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011c48  cmp dh, 0x20
    X86_AT(c, 0x11c48u);
    (void)x86_sub(c, g8(c, 6), 0x20u, 0, 1);
    // 011c4b  jb 0x13557
    X86_AT(c, 0x11c4bu);
    if (x86_cc(c, 2)) { goto L_13557; }
    X86_TICK(c, 7);
    // 011c51  cmp dh, 0xb6
    X86_AT(c, 0x11c51u);
    (void)x86_sub(c, g8(c, 6), 0xB6u, 0, 1);
    // 011c54  ja 0x13557
    X86_AT(c, 0x11c54u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 7);
    // 011c5a  test bh, bh
    X86_AT(c, 0x11c5au);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 011c5c  je 0x11c67
    X86_AT(c, 0x11c5cu);
    if (x86_cc(c, 4)) { goto L_11c67; }
    X86_TICK(c, 7);
    // 011c5e  cmp dh, 0x30
    X86_AT(c, 0x11c5eu);
    (void)x86_sub(c, g8(c, 6), 0x30u, 0, 1);
    // 011c61  jb 0x13557
    X86_AT(c, 0x11c61u);
    if (x86_cc(c, 2)) { goto L_13557; }
L_11c67:
    X86_TICK(c, 15);
    // 011c67  push eax
    X86_AT(c, 0x11c67u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011c68  push edx
    X86_AT(c, 0x11c68u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011c69  push edi
    X86_AT(c, 0x11c69u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 011c6a  mov eax, edx
    X86_AT(c, 0x11c6au);
    c.r[0] = c.r[2];
    // 011c6c  test bh, bh
    X86_AT(c, 0x11c6cu);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 011c6e  jne 0x11c76
    X86_AT(c, 0x11c6eu);
    if (x86_cc(c, 5)) { goto L_11c76; }
    X86_TICK(c, 9);
    // 011c70  mov dx, 0x4d8
    X86_AT(c, 0x11c70u);
    s16(c, 2, 0x4D8u);
    // 011c74  jmp 0x11c80
    X86_AT(c, 0x11c74u);
    goto L_11c80;
L_11c76:
    X86_TICK(c, 4);
    // 011c76  mov dx, 0x4dc
    X86_AT(c, 0x11c76u);
    s16(c, 2, 0x4DCu);
    // 011c7a  add edi, 0xf0
    X86_AT(c, 0x11c7au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
L_11c80:
    X86_TICK(c, 7);
    // 011c80  call 0x11bf0
    X86_AT(c, 0x11c80u);
    push32(c, 0x11c85u); f_00011bf0(c); X86_RET(c, 0x11c85u);
    X86_TICK(c, 24);
    // 011c85  pop edi
    X86_AT(c, 0x11c85u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011c86  pop edx
    X86_AT(c, 0x11c86u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011c87  pop eax
    X86_AT(c, 0x11c87u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011c88  xor al, al
    X86_AT(c, 0x11c88u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011c8a  ret 
    X86_AT(c, 0x11c8au);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c48u, "ran off the end of a function");
}
void f_00011c8c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 011c8c  push eax
    X86_AT(c, 0x11c8cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011c8d  push edx
    X86_AT(c, 0x11c8du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011c8e  mov eax, edx
    X86_AT(c, 0x11c8eu);
    c.r[0] = c.r[2];
    // 011c90  test bh, bh
    X86_AT(c, 0x11c90u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 011c92  jne 0x11c9a
    X86_AT(c, 0x11c92u);
    if (x86_cc(c, 5)) { goto L_11c9a; }
    X86_TICK(c, 9);
    // 011c94  mov dx, 0x4d8
    X86_AT(c, 0x11c94u);
    s16(c, 2, 0x4D8u);
    // 011c98  jmp 0x11c9e
    X86_AT(c, 0x11c98u);
    goto L_11c9e;
L_11c9a:
    X86_TICK(c, 2);
    // 011c9a  mov dx, 0x4dc
    X86_AT(c, 0x11c9au);
    s16(c, 2, 0x4DCu);
L_11c9e:
    X86_TICK(c, 7);
    // 011c9e  call 0x11c20
    X86_AT(c, 0x11c9eu);
    push32(c, 0x11ca3u); f_00011c20(c); X86_RET(c, 0x11ca3u);
    X86_TICK(c, 20);
    // 011ca3  pop edx
    X86_AT(c, 0x11ca3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011ca4  pop eax
    X86_AT(c, 0x11ca4u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011ca5  xor al, al
    X86_AT(c, 0x11ca5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ca7  ret 
    X86_AT(c, 0x11ca7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c8cu, "ran off the end of a function");
}
void f_00011c8d(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011c8d  push edx
    X86_AT(c, 0x11c8du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011c8e  mov eax, edx
    X86_AT(c, 0x11c8eu);
    c.r[0] = c.r[2];
    // 011c90  test bh, bh
    X86_AT(c, 0x11c90u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 011c92  jne 0x11c9a
    X86_AT(c, 0x11c92u);
    if (x86_cc(c, 5)) { goto L_11c9a; }
    X86_TICK(c, 9);
    // 011c94  mov dx, 0x4d8
    X86_AT(c, 0x11c94u);
    s16(c, 2, 0x4D8u);
    // 011c98  jmp 0x11c9e
    X86_AT(c, 0x11c98u);
    goto L_11c9e;
L_11c9a:
    X86_TICK(c, 2);
    // 011c9a  mov dx, 0x4dc
    X86_AT(c, 0x11c9au);
    s16(c, 2, 0x4DCu);
L_11c9e:
    X86_TICK(c, 7);
    // 011c9e  call 0x11c20
    X86_AT(c, 0x11c9eu);
    push32(c, 0x11ca3u); f_00011c20(c); X86_RET(c, 0x11ca3u);
    X86_TICK(c, 20);
    // 011ca3  pop edx
    X86_AT(c, 0x11ca3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011ca4  pop eax
    X86_AT(c, 0x11ca4u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011ca5  xor al, al
    X86_AT(c, 0x11ca5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ca7  ret 
    X86_AT(c, 0x11ca7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c8du, "ran off the end of a function");
}
void f_00011c8e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011c8e  mov eax, edx
    X86_AT(c, 0x11c8eu);
    c.r[0] = c.r[2];
    // 011c90  test bh, bh
    X86_AT(c, 0x11c90u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 011c92  jne 0x11c9a
    X86_AT(c, 0x11c92u);
    if (x86_cc(c, 5)) { goto L_11c9a; }
    X86_TICK(c, 9);
    // 011c94  mov dx, 0x4d8
    X86_AT(c, 0x11c94u);
    s16(c, 2, 0x4D8u);
    // 011c98  jmp 0x11c9e
    X86_AT(c, 0x11c98u);
    goto L_11c9e;
L_11c9a:
    X86_TICK(c, 2);
    // 011c9a  mov dx, 0x4dc
    X86_AT(c, 0x11c9au);
    s16(c, 2, 0x4DCu);
L_11c9e:
    X86_TICK(c, 7);
    // 011c9e  call 0x11c20
    X86_AT(c, 0x11c9eu);
    push32(c, 0x11ca3u); f_00011c20(c); X86_RET(c, 0x11ca3u);
    X86_TICK(c, 20);
    // 011ca3  pop edx
    X86_AT(c, 0x11ca3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011ca4  pop eax
    X86_AT(c, 0x11ca4u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011ca5  xor al, al
    X86_AT(c, 0x11ca5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ca7  ret 
    X86_AT(c, 0x11ca7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c8eu, "ran off the end of a function");
}
void f_00011c90(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011c90  test bh, bh
    X86_AT(c, 0x11c90u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 011c92  jne 0x11c9a
    X86_AT(c, 0x11c92u);
    if (x86_cc(c, 5)) { goto L_11c9a; }
    X86_TICK(c, 9);
    // 011c94  mov dx, 0x4d8
    X86_AT(c, 0x11c94u);
    s16(c, 2, 0x4D8u);
    // 011c98  jmp 0x11c9e
    X86_AT(c, 0x11c98u);
    goto L_11c9e;
L_11c9a:
    X86_TICK(c, 2);
    // 011c9a  mov dx, 0x4dc
    X86_AT(c, 0x11c9au);
    s16(c, 2, 0x4DCu);
L_11c9e:
    X86_TICK(c, 7);
    // 011c9e  call 0x11c20
    X86_AT(c, 0x11c9eu);
    push32(c, 0x11ca3u); f_00011c20(c); X86_RET(c, 0x11ca3u);
    X86_TICK(c, 20);
    // 011ca3  pop edx
    X86_AT(c, 0x11ca3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011ca4  pop eax
    X86_AT(c, 0x11ca4u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011ca5  xor al, al
    X86_AT(c, 0x11ca5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ca7  ret 
    X86_AT(c, 0x11ca7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c90u, "ran off the end of a function");
}
void f_00011c92(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011c92  jne 0x11c9a
    X86_AT(c, 0x11c92u);
    if (x86_cc(c, 5)) { goto L_11c9a; }
    X86_TICK(c, 9);
    // 011c94  mov dx, 0x4d8
    X86_AT(c, 0x11c94u);
    s16(c, 2, 0x4D8u);
    // 011c98  jmp 0x11c9e
    X86_AT(c, 0x11c98u);
    goto L_11c9e;
L_11c9a:
    X86_TICK(c, 2);
    // 011c9a  mov dx, 0x4dc
    X86_AT(c, 0x11c9au);
    s16(c, 2, 0x4DCu);
L_11c9e:
    X86_TICK(c, 7);
    // 011c9e  call 0x11c20
    X86_AT(c, 0x11c9eu);
    push32(c, 0x11ca3u); f_00011c20(c); X86_RET(c, 0x11ca3u);
    X86_TICK(c, 20);
    // 011ca3  pop edx
    X86_AT(c, 0x11ca3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011ca4  pop eax
    X86_AT(c, 0x11ca4u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011ca5  xor al, al
    X86_AT(c, 0x11ca5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ca7  ret 
    X86_AT(c, 0x11ca7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c92u, "ran off the end of a function");
}
void f_00011c94(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011c94  mov dx, 0x4d8
    X86_AT(c, 0x11c94u);
    s16(c, 2, 0x4D8u);
    // 011c98  jmp 0x11c9e
    X86_AT(c, 0x11c98u);
    goto L_11c9e;
L_11c9e:
    X86_TICK(c, 7);
    // 011c9e  call 0x11c20
    X86_AT(c, 0x11c9eu);
    push32(c, 0x11ca3u); f_00011c20(c); X86_RET(c, 0x11ca3u);
    X86_TICK(c, 20);
    // 011ca3  pop edx
    X86_AT(c, 0x11ca3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011ca4  pop eax
    X86_AT(c, 0x11ca4u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011ca5  xor al, al
    X86_AT(c, 0x11ca5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ca7  ret 
    X86_AT(c, 0x11ca7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c94u, "ran off the end of a function");
}
void f_00011c98(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011c98  jmp 0x11c9e
    X86_AT(c, 0x11c98u);
    goto L_11c9e;
L_11c9e:
    X86_TICK(c, 7);
    // 011c9e  call 0x11c20
    X86_AT(c, 0x11c9eu);
    push32(c, 0x11ca3u); f_00011c20(c); X86_RET(c, 0x11ca3u);
    X86_TICK(c, 20);
    // 011ca3  pop edx
    X86_AT(c, 0x11ca3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011ca4  pop eax
    X86_AT(c, 0x11ca4u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011ca5  xor al, al
    X86_AT(c, 0x11ca5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ca7  ret 
    X86_AT(c, 0x11ca7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c98u, "ran off the end of a function");
}
void f_00011c9e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011c9e  call 0x11c20
    X86_AT(c, 0x11c9eu);
    push32(c, 0x11ca3u); f_00011c20(c); X86_RET(c, 0x11ca3u);
    X86_TICK(c, 20);
    // 011ca3  pop edx
    X86_AT(c, 0x11ca3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011ca4  pop eax
    X86_AT(c, 0x11ca4u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011ca5  xor al, al
    X86_AT(c, 0x11ca5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ca7  ret 
    X86_AT(c, 0x11ca7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11c9eu, "ran off the end of a function");
}
void f_00011ca3(X86Cpu& c) {
    X86_TICK(c, 20);
    // 011ca3  pop edx
    X86_AT(c, 0x11ca3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011ca4  pop eax
    X86_AT(c, 0x11ca4u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011ca5  xor al, al
    X86_AT(c, 0x11ca5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ca7  ret 
    X86_AT(c, 0x11ca7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ca3u, "ran off the end of a function");
}
void f_00011ca4(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011ca4  pop eax
    X86_AT(c, 0x11ca4u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011ca5  xor al, al
    X86_AT(c, 0x11ca5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ca7  ret 
    X86_AT(c, 0x11ca7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ca4u, "ran off the end of a function");
}
void f_00011ca5(X86Cpu& c) {
    X86_TICK(c, 12);
    // 011ca5  xor al, al
    X86_AT(c, 0x11ca5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ca7  ret 
    X86_AT(c, 0x11ca7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ca5u, "ran off the end of a function");
}
void f_00011ca7(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011ca7  ret 
    X86_AT(c, 0x11ca7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ca7u, "ran off the end of a function");
}
void f_00011ca8(X86Cpu& c) {
    X86_TICK(c, 15);
    // 011ca8  push eax
    X86_AT(c, 0x11ca8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011ca9  push edx
    X86_AT(c, 0x11ca9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011caa  mov ah, dh
    X86_AT(c, 0x11caau);
    s8(c, 4, g8(c, 6));
    // 011cac  mov dx, 0x4d8
    X86_AT(c, 0x11cacu);
    s16(c, 2, 0x4D8u);
    // 011cb0  test bh, bh
    X86_AT(c, 0x11cb0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 011cb2  je 0x11cb7
    X86_AT(c, 0x11cb2u);
    if (x86_cc(c, 4)) { goto L_11cb7; }
    X86_TICK(c, 2);
    // 011cb4  add dl, 4
    X86_AT(c, 0x11cb4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
L_11cb7:
    X86_TICK(c, 4);
    // 011cb7  mov ebp, edx
    X86_AT(c, 0x11cb7u);
    c.r[5] = c.r[2];
    // 011cb9  mov dl, 0xd8
    X86_AT(c, 0x11cb9u);
    s8(c, 2, 0xD8u);
L_11cbb:
    X86_TICK(c, 19);
    // 011cbb  in al, dx
    X86_AT(c, 0x11cbbu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011cbc  test al, 0x80
    X86_AT(c, 0x11cbcu);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011cbe  jne 0x11cbb
    X86_AT(c, 0x11cbeu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11cbbu); goto L_11cbb; }
    X86_TICK(c, 38);
    // 011cc0  mov edx, ebp
    X86_AT(c, 0x11cc0u);
    c.r[2] = c.r[5];
    // 011cc2  mov al, ah
    X86_AT(c, 0x11cc2u);
    s8(c, 0, g8(c, 4));
    // 011cc4  out dx, al
    X86_AT(c, 0x11cc4u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011cc5  push ds
    X86_AT(c, 0x11cc5u);
    push32(c, c.sreg[3]);
    // 011cc6  pop ds
    X86_AT(c, 0x11cc6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011cc7  pushfd 
    X86_AT(c, 0x11cc7u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 011cc8  cld 
    X86_AT(c, 0x11cc8u);
    c.fl &= ~X86_DF;
    // 011cc9  popfd 
    X86_AT(c, 0x11cc9u);
    x86_popfd(c, 4);
    // 011cca  mov dl, 0xd8
    X86_AT(c, 0x11ccau);
    s8(c, 2, 0xD8u);
L_11ccc:
    X86_TICK(c, 19);
    // 011ccc  in al, dx
    X86_AT(c, 0x11cccu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011ccd  test al, 0x80
    X86_AT(c, 0x11ccdu);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 011ccf  jne 0x11ccc
    X86_AT(c, 0x11ccfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11cccu); goto L_11ccc; }
    X86_TICK(c, 36);
    // 011cd1  lea edx, [ebp + 2]
    X86_AT(c, 0x11cd1u);
    c.r[2] = (uint32_t)(c.r[5] + 0x2u);
    // 011cd4  in al, dx
    X86_AT(c, 0x11cd4u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011cd5  pop edx
    X86_AT(c, 0x11cd5u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011cd6  mov dl, al
    X86_AT(c, 0x11cd6u);
    s8(c, 2, g8(c, 0));
    // 011cd8  pop eax
    X86_AT(c, 0x11cd8u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011cd9  xor al, al
    X86_AT(c, 0x11cd9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011cdb  ret 
    X86_AT(c, 0x11cdbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ca8u, "ran off the end of a function");
}
void f_00011cdc(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011cdc  cmp dh, 0x20
    X86_AT(c, 0x11cdcu);
    (void)x86_sub(c, g8(c, 6), 0x20u, 0, 1);
    // 011cdf  jb 0x13557
    X86_AT(c, 0x11cdfu);
    if (x86_cc(c, 2)) { goto L_13557; }
    X86_TICK(c, 7);
    // 011ce5  cmp dh, 0xef
    X86_AT(c, 0x11ce5u);
    (void)x86_sub(c, g8(c, 6), 0xEFu, 0, 1);
    // 011ce8  ja 0x13557
    X86_AT(c, 0x11ce8u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 7);
    // 011cee  test bh, bh
    X86_AT(c, 0x11ceeu);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 011cf0  je 0x11cfb
    X86_AT(c, 0x11cf0u);
    if (x86_cc(c, 4)) { goto L_11cfb; }
    X86_TICK(c, 7);
    // 011cf2  cmp dh, 0x30
    X86_AT(c, 0x11cf2u);
    (void)x86_sub(c, g8(c, 6), 0x30u, 0, 1);
    // 011cf5  jb 0x13557
    X86_AT(c, 0x11cf5u);
    if (x86_cc(c, 2)) { goto L_13557; }
L_11cfb:
    X86_TICK(c, 11);
    // 011cfb  push ebx
    X86_AT(c, 0x11cfbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011cfc  push edi
    X86_AT(c, 0x11cfcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 011cfd  test bh, bh
    X86_AT(c, 0x11cfdu);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 011cff  je 0x11d07
    X86_AT(c, 0x11cffu);
    if (x86_cc(c, 4)) { goto L_11d07; }
    X86_TICK(c, 2);
    // 011d01  add edi, 0xf0
    X86_AT(c, 0x11d01u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
L_11d07:
    X86_TICK(c, 25);
    // 011d07  movzx ebx, dh
    X86_AT(c, 0x11d07u);
    c.r[3] = g8(c, 6);
    // 011d0a  mov byte ptr gs:[edi + ebx*1], dl
    X86_AT(c, 0x11d0au);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3])), g8(c, 2));
    // 011d0e  pop edi
    X86_AT(c, 0x11d0eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011d0f  pop ebx
    X86_AT(c, 0x11d0fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011d10  xor al, al
    X86_AT(c, 0x11d10u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011d12  ret 
    X86_AT(c, 0x11d12u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11cdcu, "ran off the end of a function");
}
void f_00011d14(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011d14  cmp dh, 0x20
    X86_AT(c, 0x11d14u);
    (void)x86_sub(c, g8(c, 6), 0x20u, 0, 1);
    // 011d17  jb 0x13557
    X86_AT(c, 0x11d17u);
    if (x86_cc(c, 2)) { goto L_13557; }
    X86_TICK(c, 7);
    // 011d1d  cmp dh, 0xef
    X86_AT(c, 0x11d1du);
    (void)x86_sub(c, g8(c, 6), 0xEFu, 0, 1);
    // 011d20  ja 0x13557
    X86_AT(c, 0x11d20u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 7);
    // 011d26  test bh, bh
    X86_AT(c, 0x11d26u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 011d28  je 0x11d33
    X86_AT(c, 0x11d28u);
    if (x86_cc(c, 4)) { goto L_11d33; }
    X86_TICK(c, 7);
    // 011d2a  cmp dh, 0x30
    X86_AT(c, 0x11d2au);
    (void)x86_sub(c, g8(c, 6), 0x30u, 0, 1);
    // 011d2d  jb 0x13557
    X86_AT(c, 0x11d2du);
    if (x86_cc(c, 2)) { goto L_13557; }
L_11d33:
    X86_TICK(c, 11);
    // 011d33  push ebx
    X86_AT(c, 0x11d33u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011d34  push edi
    X86_AT(c, 0x11d34u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 011d35  test bh, bh
    X86_AT(c, 0x11d35u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 011d37  je 0x11d3f
    X86_AT(c, 0x11d37u);
    if (x86_cc(c, 4)) { goto L_11d3f; }
    X86_TICK(c, 2);
    // 011d39  add edi, 0xf0
    X86_AT(c, 0x11d39u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
L_11d3f:
    X86_TICK(c, 27);
    // 011d3f  movzx ebx, dh
    X86_AT(c, 0x11d3fu);
    c.r[3] = g8(c, 6);
    // 011d42  mov dl, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x11d42u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 011d46  pop edi
    X86_AT(c, 0x11d46u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011d47  pop ebx
    X86_AT(c, 0x11d47u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011d48  xor al, al
    X86_AT(c, 0x11d48u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011d4a  ret 
    X86_AT(c, 0x11d4au);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11d14u, "ran off the end of a function");
}
void f_00011d4c(X86Cpu& c) {
    X86_TICK(c, 43);
    // 011d4c  pushal 
    X86_AT(c, 0x11d4cu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011d4d  push es
    X86_AT(c, 0x11d4du);
    push32(c, c.sreg[0]);
    // 011d4e  push gs
    X86_AT(c, 0x11d4eu);
    push32(c, c.sreg[5]);
    // 011d50  pop es
    X86_AT(c, 0x11d50u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011d51  mov ebp, edi
    X86_AT(c, 0x11d51u);
    c.r[5] = c.r[7];
    // 011d53  add edi, 0x19f4
    X86_AT(c, 0x11d53u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x19F4u, 0, 4); }
    // 011d59  xor eax, eax
    X86_AT(c, 0x11d59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d5b  mov ecx, 0x443
    X86_AT(c, 0x11d5bu);
    c.r[1] = 0x443u;
    // 011d60  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d60u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d62  mov dl, 0x20
    X86_AT(c, 0x11d62u);
    s8(c, 2, 0x20u);
L_11d64:
    X86_TICK(c, 36);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
    // 011dcc  mov al, 0xff
    X86_AT(c, 0x11dccu);
    s8(c, 0, 0xFFu);
    // 011dce  out dx, al
    X86_AT(c, 0x11dceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dcf  push ds
    X86_AT(c, 0x11dcfu);
    push32(c, c.sreg[3]);
    // 011dd0  pop ds
    X86_AT(c, 0x11dd0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd1  push ds
    X86_AT(c, 0x11dd1u);
    push32(c, c.sreg[3]);
    // 011dd2  pop ds
    X86_AT(c, 0x11dd2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd3  push 0x140
    X86_AT(c, 0x11dd3u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 011dd8  pop es
    X86_AT(c, 0x11dd8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011dd9  mov ah, 0x40
    X86_AT(c, 0x11dd9u);
    s8(c, 4, 0x40u);
L_11ddb:
    X86_TICK(c, 233);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11d4cu, "ran off the end of a function");
}
void f_00011d4d(X86Cpu& c) {
    X86_TICK(c, 25);
    // 011d4d  push es
    X86_AT(c, 0x11d4du);
    push32(c, c.sreg[0]);
    // 011d4e  push gs
    X86_AT(c, 0x11d4eu);
    push32(c, c.sreg[5]);
    // 011d50  pop es
    X86_AT(c, 0x11d50u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011d51  mov ebp, edi
    X86_AT(c, 0x11d51u);
    c.r[5] = c.r[7];
    // 011d53  add edi, 0x19f4
    X86_AT(c, 0x11d53u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x19F4u, 0, 4); }
    // 011d59  xor eax, eax
    X86_AT(c, 0x11d59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d5b  mov ecx, 0x443
    X86_AT(c, 0x11d5bu);
    c.r[1] = 0x443u;
    // 011d60  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d60u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d62  mov dl, 0x20
    X86_AT(c, 0x11d62u);
    s8(c, 2, 0x20u);
L_11d64:
    X86_TICK(c, 36);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
    // 011dcc  mov al, 0xff
    X86_AT(c, 0x11dccu);
    s8(c, 0, 0xFFu);
    // 011dce  out dx, al
    X86_AT(c, 0x11dceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dcf  push ds
    X86_AT(c, 0x11dcfu);
    push32(c, c.sreg[3]);
    // 011dd0  pop ds
    X86_AT(c, 0x11dd0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd1  push ds
    X86_AT(c, 0x11dd1u);
    push32(c, c.sreg[3]);
    // 011dd2  pop ds
    X86_AT(c, 0x11dd2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd3  push 0x140
    X86_AT(c, 0x11dd3u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 011dd8  pop es
    X86_AT(c, 0x11dd8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011dd9  mov ah, 0x40
    X86_AT(c, 0x11dd9u);
    s8(c, 4, 0x40u);
L_11ddb:
    X86_TICK(c, 233);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11d4du, "ran off the end of a function");
}
void f_00011d4e(X86Cpu& c) {
    X86_TICK(c, 23);
    // 011d4e  push gs
    X86_AT(c, 0x11d4eu);
    push32(c, c.sreg[5]);
    // 011d50  pop es
    X86_AT(c, 0x11d50u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011d51  mov ebp, edi
    X86_AT(c, 0x11d51u);
    c.r[5] = c.r[7];
    // 011d53  add edi, 0x19f4
    X86_AT(c, 0x11d53u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x19F4u, 0, 4); }
    // 011d59  xor eax, eax
    X86_AT(c, 0x11d59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d5b  mov ecx, 0x443
    X86_AT(c, 0x11d5bu);
    c.r[1] = 0x443u;
    // 011d60  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d60u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d62  mov dl, 0x20
    X86_AT(c, 0x11d62u);
    s8(c, 2, 0x20u);
L_11d64:
    X86_TICK(c, 36);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
    // 011dcc  mov al, 0xff
    X86_AT(c, 0x11dccu);
    s8(c, 0, 0xFFu);
    // 011dce  out dx, al
    X86_AT(c, 0x11dceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dcf  push ds
    X86_AT(c, 0x11dcfu);
    push32(c, c.sreg[3]);
    // 011dd0  pop ds
    X86_AT(c, 0x11dd0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd1  push ds
    X86_AT(c, 0x11dd1u);
    push32(c, c.sreg[3]);
    // 011dd2  pop ds
    X86_AT(c, 0x11dd2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd3  push 0x140
    X86_AT(c, 0x11dd3u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 011dd8  pop es
    X86_AT(c, 0x11dd8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011dd9  mov ah, 0x40
    X86_AT(c, 0x11dd9u);
    s8(c, 4, 0x40u);
L_11ddb:
    X86_TICK(c, 233);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11d4eu, "ran off the end of a function");
}
void f_00011d50(X86Cpu& c) {
    X86_TICK(c, 21);
    // 011d50  pop es
    X86_AT(c, 0x11d50u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011d51  mov ebp, edi
    X86_AT(c, 0x11d51u);
    c.r[5] = c.r[7];
    // 011d53  add edi, 0x19f4
    X86_AT(c, 0x11d53u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x19F4u, 0, 4); }
    // 011d59  xor eax, eax
    X86_AT(c, 0x11d59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d5b  mov ecx, 0x443
    X86_AT(c, 0x11d5bu);
    c.r[1] = 0x443u;
    // 011d60  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d60u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d62  mov dl, 0x20
    X86_AT(c, 0x11d62u);
    s8(c, 2, 0x20u);
L_11d64:
    X86_TICK(c, 36);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
    // 011dcc  mov al, 0xff
    X86_AT(c, 0x11dccu);
    s8(c, 0, 0xFFu);
    // 011dce  out dx, al
    X86_AT(c, 0x11dceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dcf  push ds
    X86_AT(c, 0x11dcfu);
    push32(c, c.sreg[3]);
    // 011dd0  pop ds
    X86_AT(c, 0x11dd0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd1  push ds
    X86_AT(c, 0x11dd1u);
    push32(c, c.sreg[3]);
    // 011dd2  pop ds
    X86_AT(c, 0x11dd2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd3  push 0x140
    X86_AT(c, 0x11dd3u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 011dd8  pop es
    X86_AT(c, 0x11dd8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011dd9  mov ah, 0x40
    X86_AT(c, 0x11dd9u);
    s8(c, 4, 0x40u);
L_11ddb:
    X86_TICK(c, 233);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11d50u, "ran off the end of a function");
}
}

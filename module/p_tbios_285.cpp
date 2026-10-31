#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00011593(X86Cpu& c) {
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11593u, "ran off the end of a function");
}
void f_00011596(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11596u, "ran off the end of a function");
}
void f_0001159e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1159eu, "ran off the end of a function");
}
void f_000115a3(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115a3u, "ran off the end of a function");
}
void f_000115a6(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115a6u, "ran off the end of a function");
}
void f_000115ae(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115aeu, "ran off the end of a function");
}
void f_000115b3(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115b3u, "ran off the end of a function");
}
void f_000115b6(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115b6u, "ran off the end of a function");
}
void f_000115be(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115beu, "ran off the end of a function");
}
void f_000115c3(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115c3u, "ran off the end of a function");
}
void f_000115c5(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115c5u, "ran off the end of a function");
}
void f_000115c7(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115c7u, "ran off the end of a function");
}
void f_000115c9(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115c9u, "ran off the end of a function");
}
void f_000115cb(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115cbu, "ran off the end of a function");
}
void f_000115d0(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115d0u, "ran off the end of a function");
}
void f_000115d1(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115d1u, "ran off the end of a function");
}
void f_000115d3(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115d3u, "ran off the end of a function");
}
void f_000115d4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0115d4  cmp bl, 5
    X86_AT(c, 0x115d4u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0115d7  ja 0x1354c
    X86_AT(c, 0x115d7u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 29);
    // 0115dd  push eax
    X86_AT(c, 0x115ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0115de  push ecx
    X86_AT(c, 0x115deu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0115df  push edx
    X86_AT(c, 0x115dfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0115e0  movzx ecx, bl
    X86_AT(c, 0x115e0u);
    c.r[1] = g8(c, 3);
    // 0115e3  mov ch, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x115e3u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 0115ea  and byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x115eau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 0115f1  mov dx, 0x4d8
    X86_AT(c, 0x115f1u);
    s16(c, 2, 0x4D8u);
    // 0115f5  cmp bl, 2
    X86_AT(c, 0x115f5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0115f8  jbe 0x115fb
    X86_AT(c, 0x115f8u);
    if (x86_cc(c, 6)) { goto L_115fb; }
    X86_TICK(c, 2);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_115fb:
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115d4u, "ran off the end of a function");
}
void f_000115d7(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0115d7  ja 0x1354c
    X86_AT(c, 0x115d7u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 29);
    // 0115dd  push eax
    X86_AT(c, 0x115ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0115de  push ecx
    X86_AT(c, 0x115deu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0115df  push edx
    X86_AT(c, 0x115dfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0115e0  movzx ecx, bl
    X86_AT(c, 0x115e0u);
    c.r[1] = g8(c, 3);
    // 0115e3  mov ch, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x115e3u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 0115ea  and byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x115eau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 0115f1  mov dx, 0x4d8
    X86_AT(c, 0x115f1u);
    s16(c, 2, 0x4D8u);
    // 0115f5  cmp bl, 2
    X86_AT(c, 0x115f5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0115f8  jbe 0x115fb
    X86_AT(c, 0x115f8u);
    if (x86_cc(c, 6)) { goto L_115fb; }
    X86_TICK(c, 2);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_115fb:
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115d7u, "ran off the end of a function");
}
void f_000115dd(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0115dd  push eax
    X86_AT(c, 0x115ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0115de  push ecx
    X86_AT(c, 0x115deu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0115df  push edx
    X86_AT(c, 0x115dfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0115e0  movzx ecx, bl
    X86_AT(c, 0x115e0u);
    c.r[1] = g8(c, 3);
    // 0115e3  mov ch, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x115e3u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 0115ea  and byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x115eau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 0115f1  mov dx, 0x4d8
    X86_AT(c, 0x115f1u);
    s16(c, 2, 0x4D8u);
    // 0115f5  cmp bl, 2
    X86_AT(c, 0x115f5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0115f8  jbe 0x115fb
    X86_AT(c, 0x115f8u);
    if (x86_cc(c, 6)) { goto L_115fb; }
    X86_TICK(c, 2);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_115fb:
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115ddu, "ran off the end of a function");
}
void f_000115de(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0115de  push ecx
    X86_AT(c, 0x115deu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0115df  push edx
    X86_AT(c, 0x115dfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0115e0  movzx ecx, bl
    X86_AT(c, 0x115e0u);
    c.r[1] = g8(c, 3);
    // 0115e3  mov ch, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x115e3u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 0115ea  and byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x115eau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 0115f1  mov dx, 0x4d8
    X86_AT(c, 0x115f1u);
    s16(c, 2, 0x4D8u);
    // 0115f5  cmp bl, 2
    X86_AT(c, 0x115f5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0115f8  jbe 0x115fb
    X86_AT(c, 0x115f8u);
    if (x86_cc(c, 6)) { goto L_115fb; }
    X86_TICK(c, 2);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_115fb:
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115deu, "ran off the end of a function");
}
void f_000115df(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0115df  push edx
    X86_AT(c, 0x115dfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0115e0  movzx ecx, bl
    X86_AT(c, 0x115e0u);
    c.r[1] = g8(c, 3);
    // 0115e3  mov ch, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x115e3u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 0115ea  and byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x115eau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 0115f1  mov dx, 0x4d8
    X86_AT(c, 0x115f1u);
    s16(c, 2, 0x4D8u);
    // 0115f5  cmp bl, 2
    X86_AT(c, 0x115f5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0115f8  jbe 0x115fb
    X86_AT(c, 0x115f8u);
    if (x86_cc(c, 6)) { goto L_115fb; }
    X86_TICK(c, 2);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_115fb:
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115dfu, "ran off the end of a function");
}
void f_000115e0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0115e0  movzx ecx, bl
    X86_AT(c, 0x115e0u);
    c.r[1] = g8(c, 3);
    // 0115e3  mov ch, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x115e3u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 0115ea  and byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x115eau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 0115f1  mov dx, 0x4d8
    X86_AT(c, 0x115f1u);
    s16(c, 2, 0x4D8u);
    // 0115f5  cmp bl, 2
    X86_AT(c, 0x115f5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0115f8  jbe 0x115fb
    X86_AT(c, 0x115f8u);
    if (x86_cc(c, 6)) { goto L_115fb; }
    X86_TICK(c, 2);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_115fb:
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115e0u, "ran off the end of a function");
}
void f_000115e3(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0115e3  mov ch, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x115e3u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 0115ea  and byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x115eau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 0115f1  mov dx, 0x4d8
    X86_AT(c, 0x115f1u);
    s16(c, 2, 0x4D8u);
    // 0115f5  cmp bl, 2
    X86_AT(c, 0x115f5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0115f8  jbe 0x115fb
    X86_AT(c, 0x115f8u);
    if (x86_cc(c, 6)) { goto L_115fb; }
    X86_TICK(c, 2);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_115fb:
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115e3u, "ran off the end of a function");
}
void f_000115ea(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0115ea  and byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x115eau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 0115f1  mov dx, 0x4d8
    X86_AT(c, 0x115f1u);
    s16(c, 2, 0x4D8u);
    // 0115f5  cmp bl, 2
    X86_AT(c, 0x115f5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0115f8  jbe 0x115fb
    X86_AT(c, 0x115f8u);
    if (x86_cc(c, 6)) { goto L_115fb; }
    X86_TICK(c, 2);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_115fb:
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115eau, "ran off the end of a function");
}
void f_000115f1(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0115f1  mov dx, 0x4d8
    X86_AT(c, 0x115f1u);
    s16(c, 2, 0x4D8u);
    // 0115f5  cmp bl, 2
    X86_AT(c, 0x115f5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0115f8  jbe 0x115fb
    X86_AT(c, 0x115f8u);
    if (x86_cc(c, 6)) { goto L_115fb; }
    X86_TICK(c, 2);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_115fb:
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115f1u, "ran off the end of a function");
}
void f_000115f5(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0115f5  cmp bl, 2
    X86_AT(c, 0x115f5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0115f8  jbe 0x115fb
    X86_AT(c, 0x115f8u);
    if (x86_cc(c, 6)) { goto L_115fb; }
    X86_TICK(c, 2);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_115fb:
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115f5u, "ran off the end of a function");
}
void f_000115f8(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0115f8  jbe 0x115fb
    X86_AT(c, 0x115f8u);
    if (x86_cc(c, 6)) { goto L_115fb; }
    X86_TICK(c, 2);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_115fb:
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115f8u, "ran off the end of a function");
}
void f_000115fa(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115fau, "ran off the end of a function");
}
void f_000115fb(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115fbu, "ran off the end of a function");
}
void f_000115fd(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115fdu, "ran off the end of a function");
}
void f_000115ff(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x115ffu, "ran off the end of a function");
}
void f_00011604(X86Cpu& c) {
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11604u, "ran off the end of a function");
}
void f_00011605(X86Cpu& c) {
    X86_TICK(c, 20);
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11605u, "ran off the end of a function");
}
void f_00011606(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11606u, "ran off the end of a function");
}
void f_00011607(X86Cpu& c) {
    X86_TICK(c, 12);
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11607u, "ran off the end of a function");
}
void f_00011609(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11609u, "ran off the end of a function");
}
void f_0001160c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01160c  cmp bl, 5
    X86_AT(c, 0x1160cu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01160f  ja 0x1354c
    X86_AT(c, 0x1160fu);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 15);
    // 011615  push eax
    X86_AT(c, 0x11615u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011616  push ebx
    X86_AT(c, 0x11616u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011617  push edx
    X86_AT(c, 0x11617u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011618  push edi
    X86_AT(c, 0x11618u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 011619  cmp dl, 0x40
    X86_AT(c, 0x11619u);
    (void)x86_sub(c, g8(c, 2), 0x40u, 0, 1);
    // 01161c  ja 0x11624
    X86_AT(c, 0x1161cu);
    if (x86_cc(c, 7)) { goto L_11624; }
    X86_TICK(c, 5);
    // 01161e  jb 0x11628
    X86_AT(c, 0x1161eu);
    if (x86_cc(c, 2)) { goto L_11628; }
    X86_TICK(c, 9);
    // 011620  mov bh, 0xc0
    X86_AT(c, 0x11620u);
    s8(c, 7, 0xC0u);
    // 011622  jmp 0x1162a
    X86_AT(c, 0x11622u);
    goto L_1162a;
L_11624:
    X86_TICK(c, 9);
    // 011624  mov bh, 0x40
    X86_AT(c, 0x11624u);
    s8(c, 7, 0x40u);
    // 011626  jmp 0x1162a
    X86_AT(c, 0x11626u);
    goto L_1162a;
L_11628:
    X86_TICK(c, 2);
    // 011628  mov bh, 0x80
    X86_AT(c, 0x11628u);
    s8(c, 7, 0x80u);
L_1162a:
    X86_TICK(c, 9);
    // 01162a  mov dx, 0x4d8
    X86_AT(c, 0x1162au);
    s16(c, 2, 0x4D8u);
    // 01162e  cmp bl, 2
    X86_AT(c, 0x1162eu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 011631  jbe 0x1163f
    X86_AT(c, 0x11631u);
    if (x86_cc(c, 6)) { goto L_1163f; }
    X86_TICK(c, 6);
    // 011633  add dl, 4
    X86_AT(c, 0x11633u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011636  add edi, 0xf0
    X86_AT(c, 0x11636u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 01163c  sub bl, 3
    X86_AT(c, 0x1163cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1163f:
    X86_TICK(c, 24);
    // 01163f  mov al, bh
    X86_AT(c, 0x1163fu);
    s8(c, 0, g8(c, 7));
    // 011641  movzx ebx, bl
    X86_AT(c, 0x11641u);
    c.r[3] = g8(c, 3);
    // 011644  mov bh, byte ptr gs:[edi + ebx*1 + 0xb4]
    X86_AT(c, 0x11644u);
    s8(c, 7, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xB4u))));
    // 01164c  and bh, 0x3f
    X86_AT(c, 0x1164cu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & 0x3Fu, 1)); }
    // 01164f  or al, bh
    X86_AT(c, 0x1164fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 7), 1)); }
    // 011651  mov ah, 0xb4
    X86_AT(c, 0x11651u);
    s8(c, 4, 0xB4u);
    // 011653  add ah, bl
    X86_AT(c, 0x11653u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011655  call 0x11bf0
    X86_AT(c, 0x11655u);
    push32(c, 0x1165au); f_00011bf0(c); X86_RET(c, 0x1165au);
    X86_TICK(c, 28);
    // 01165a  pop edi
    X86_AT(c, 0x1165au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01165b  pop edx
    X86_AT(c, 0x1165bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01165c  pop ebx
    X86_AT(c, 0x1165cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 01165d  pop eax
    X86_AT(c, 0x1165du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01165e  xor al, al
    X86_AT(c, 0x1165eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011660  ret 
    X86_AT(c, 0x11660u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1160cu, "ran off the end of a function");
}
void f_00011664(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011664  cmp bl, 5
    X86_AT(c, 0x11664u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 011667  ja 0x1354c
    X86_AT(c, 0x11667u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 01166d  test dh, 0x80
    X86_AT(c, 0x1166du);
    (void)x86_logic(c, g8(c, 6) & 0x80u, 1);
    // 011670  jne 0x13557
    X86_AT(c, 0x11670u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 37);
    // 011676  pushal 
    X86_AT(c, 0x11676u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011677  movzx esi, dh
    X86_AT(c, 0x11677u);
    c.r[6] = g8(c, 6);
    // 01167a  shl esi, 4
    X86_AT(c, 0x1167au);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 01167d  lea esi, [esi + esi*2 + 0x1fc]
    X86_AT(c, 0x1167du);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 2 + 0x1FCu);
    // 011684  lea esi, [esi + edi*1]
    X86_AT(c, 0x11684u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[7]);
    // 011687  mov dx, 0x4d8
    X86_AT(c, 0x11687u);
    s16(c, 2, 0x4D8u);
    // 01168b  cmp bl, 2
    X86_AT(c, 0x1168bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11664u, "ran off the end of a function");
}
void f_00011667(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011667  ja 0x1354c
    X86_AT(c, 0x11667u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 01166d  test dh, 0x80
    X86_AT(c, 0x1166du);
    (void)x86_logic(c, g8(c, 6) & 0x80u, 1);
    // 011670  jne 0x13557
    X86_AT(c, 0x11670u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 37);
    // 011676  pushal 
    X86_AT(c, 0x11676u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011677  movzx esi, dh
    X86_AT(c, 0x11677u);
    c.r[6] = g8(c, 6);
    // 01167a  shl esi, 4
    X86_AT(c, 0x1167au);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 01167d  lea esi, [esi + esi*2 + 0x1fc]
    X86_AT(c, 0x1167du);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 2 + 0x1FCu);
    // 011684  lea esi, [esi + edi*1]
    X86_AT(c, 0x11684u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[7]);
    // 011687  mov dx, 0x4d8
    X86_AT(c, 0x11687u);
    s16(c, 2, 0x4D8u);
    // 01168b  cmp bl, 2
    X86_AT(c, 0x1168bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11667u, "ran off the end of a function");
}
void f_0001166d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01166d  test dh, 0x80
    X86_AT(c, 0x1166du);
    (void)x86_logic(c, g8(c, 6) & 0x80u, 1);
    // 011670  jne 0x13557
    X86_AT(c, 0x11670u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 37);
    // 011676  pushal 
    X86_AT(c, 0x11676u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011677  movzx esi, dh
    X86_AT(c, 0x11677u);
    c.r[6] = g8(c, 6);
    // 01167a  shl esi, 4
    X86_AT(c, 0x1167au);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 01167d  lea esi, [esi + esi*2 + 0x1fc]
    X86_AT(c, 0x1167du);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 2 + 0x1FCu);
    // 011684  lea esi, [esi + edi*1]
    X86_AT(c, 0x11684u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[7]);
    // 011687  mov dx, 0x4d8
    X86_AT(c, 0x11687u);
    s16(c, 2, 0x4D8u);
    // 01168b  cmp bl, 2
    X86_AT(c, 0x1168bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1166du, "ran off the end of a function");
}
void f_00011670(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011670  jne 0x13557
    X86_AT(c, 0x11670u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 37);
    // 011676  pushal 
    X86_AT(c, 0x11676u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011677  movzx esi, dh
    X86_AT(c, 0x11677u);
    c.r[6] = g8(c, 6);
    // 01167a  shl esi, 4
    X86_AT(c, 0x1167au);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 01167d  lea esi, [esi + esi*2 + 0x1fc]
    X86_AT(c, 0x1167du);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 2 + 0x1FCu);
    // 011684  lea esi, [esi + edi*1]
    X86_AT(c, 0x11684u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[7]);
    // 011687  mov dx, 0x4d8
    X86_AT(c, 0x11687u);
    s16(c, 2, 0x4D8u);
    // 01168b  cmp bl, 2
    X86_AT(c, 0x1168bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11670u, "ran off the end of a function");
}
void f_00011676(X86Cpu& c) {
    X86_TICK(c, 37);
    // 011676  pushal 
    X86_AT(c, 0x11676u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011677  movzx esi, dh
    X86_AT(c, 0x11677u);
    c.r[6] = g8(c, 6);
    // 01167a  shl esi, 4
    X86_AT(c, 0x1167au);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 01167d  lea esi, [esi + esi*2 + 0x1fc]
    X86_AT(c, 0x1167du);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 2 + 0x1FCu);
    // 011684  lea esi, [esi + edi*1]
    X86_AT(c, 0x11684u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[7]);
    // 011687  mov dx, 0x4d8
    X86_AT(c, 0x11687u);
    s16(c, 2, 0x4D8u);
    // 01168b  cmp bl, 2
    X86_AT(c, 0x1168bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11676u, "ran off the end of a function");
}
void f_00011677(X86Cpu& c) {
    X86_TICK(c, 19);
    // 011677  movzx esi, dh
    X86_AT(c, 0x11677u);
    c.r[6] = g8(c, 6);
    // 01167a  shl esi, 4
    X86_AT(c, 0x1167au);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 01167d  lea esi, [esi + esi*2 + 0x1fc]
    X86_AT(c, 0x1167du);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 2 + 0x1FCu);
    // 011684  lea esi, [esi + edi*1]
    X86_AT(c, 0x11684u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[7]);
    // 011687  mov dx, 0x4d8
    X86_AT(c, 0x11687u);
    s16(c, 2, 0x4D8u);
    // 01168b  cmp bl, 2
    X86_AT(c, 0x1168bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11677u, "ran off the end of a function");
}
void f_0001167a(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01167a  shl esi, 4
    X86_AT(c, 0x1167au);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 01167d  lea esi, [esi + esi*2 + 0x1fc]
    X86_AT(c, 0x1167du);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 2 + 0x1FCu);
    // 011684  lea esi, [esi + edi*1]
    X86_AT(c, 0x11684u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[7]);
    // 011687  mov dx, 0x4d8
    X86_AT(c, 0x11687u);
    s16(c, 2, 0x4D8u);
    // 01168b  cmp bl, 2
    X86_AT(c, 0x1168bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1167au, "ran off the end of a function");
}
void f_0001167d(X86Cpu& c) {
    X86_TICK(c, 13);
    // 01167d  lea esi, [esi + esi*2 + 0x1fc]
    X86_AT(c, 0x1167du);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 2 + 0x1FCu);
    // 011684  lea esi, [esi + edi*1]
    X86_AT(c, 0x11684u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[7]);
    // 011687  mov dx, 0x4d8
    X86_AT(c, 0x11687u);
    s16(c, 2, 0x4D8u);
    // 01168b  cmp bl, 2
    X86_AT(c, 0x1168bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1167du, "ran off the end of a function");
}
void f_00011684(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011684  lea esi, [esi + edi*1]
    X86_AT(c, 0x11684u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[7]);
    // 011687  mov dx, 0x4d8
    X86_AT(c, 0x11687u);
    s16(c, 2, 0x4D8u);
    // 01168b  cmp bl, 2
    X86_AT(c, 0x1168bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11684u, "ran off the end of a function");
}
void f_00011687(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011687  mov dx, 0x4d8
    X86_AT(c, 0x11687u);
    s16(c, 2, 0x4D8u);
    // 01168b  cmp bl, 2
    X86_AT(c, 0x1168bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11687u, "ran off the end of a function");
}
void f_0001168b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01168b  cmp bl, 2
    X86_AT(c, 0x1168bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1168bu, "ran off the end of a function");
}
void f_0001168e(X86Cpu& c) {
    X86_TICK(c, 5);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1168eu, "ran off the end of a function");
}
void f_00011690(X86Cpu& c) {
    X86_TICK(c, 27);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11690u, "ran off the end of a function");
}
void f_00011693(X86Cpu& c) {
    X86_TICK(c, 25);
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11693u, "ran off the end of a function");
}
}

#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00009aee(X86Cpu& c) {
    goto L_9aee;
L_9aea:
    X86_TICK(c, 11);
    // 009aea  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9aeau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009aed  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9aedu);
    x86_string(c, 3, 4, 0, 4, 3);
L_9aee:
    X86_TICK(c, 17);
    // 009aee  shld eax, edx, cl
    X86_AT(c, 0x9aeeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009af1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9af1u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009af2  dec ebx
    X86_AT(c, 0x9af2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009af3  jne 0x9aea
    X86_AT(c, 0x9af3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9aeau); goto L_9aea; }
    X86_TICK(c, 47);
    // 009af5  mov eax, dword ptr [esi]
    X86_AT(c, 0x9af5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009af7  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9af7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009afa  shld eax, edx, cl
    X86_AT(c, 0x9afau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009afd  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9afdu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009b04  and edx, 7
    X86_AT(c, 0x9b04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009b07  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9b07u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9aeeu, "ran off the end of a function");
}
void f_00009af1(X86Cpu& c) {
    goto L_9af1;
L_9aea:
    X86_TICK(c, 14);
    // 009aea  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9aeau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009aed  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9aedu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009aee  shld eax, edx, cl
    X86_AT(c, 0x9aeeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_9af1:
    X86_TICK(c, 14);
    // 009af1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9af1u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009af2  dec ebx
    X86_AT(c, 0x9af2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009af3  jne 0x9aea
    X86_AT(c, 0x9af3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9aeau); goto L_9aea; }
    X86_TICK(c, 47);
    // 009af5  mov eax, dword ptr [esi]
    X86_AT(c, 0x9af5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009af7  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9af7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009afa  shld eax, edx, cl
    X86_AT(c, 0x9afau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009afd  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9afdu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009b04  and edx, 7
    X86_AT(c, 0x9b04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009b07  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9b07u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9af1u, "ran off the end of a function");
}
void f_00009af2(X86Cpu& c) {
    goto L_9af2;
L_9aea:
    X86_TICK(c, 21);
    // 009aea  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9aeau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009aed  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9aedu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009aee  shld eax, edx, cl
    X86_AT(c, 0x9aeeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009af1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9af1u);
    x86_string(c, 2, 4, 0, 4, 3);
L_9af2:
    X86_TICK(c, 7);
    // 009af2  dec ebx
    X86_AT(c, 0x9af2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009af3  jne 0x9aea
    X86_AT(c, 0x9af3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9aeau); goto L_9aea; }
    X86_TICK(c, 47);
    // 009af5  mov eax, dword ptr [esi]
    X86_AT(c, 0x9af5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009af7  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9af7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009afa  shld eax, edx, cl
    X86_AT(c, 0x9afau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009afd  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9afdu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009b04  and edx, 7
    X86_AT(c, 0x9b04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009b07  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9b07u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9af2u, "ran off the end of a function");
}
void f_00009af3(X86Cpu& c) {
    goto L_9af3;
L_9aea:
    X86_TICK(c, 23);
    // 009aea  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9aeau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009aed  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9aedu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009aee  shld eax, edx, cl
    X86_AT(c, 0x9aeeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009af1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9af1u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009af2  dec ebx
    X86_AT(c, 0x9af2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9af3:
    X86_TICK(c, 5);
    // 009af3  jne 0x9aea
    X86_AT(c, 0x9af3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9aeau); goto L_9aea; }
    X86_TICK(c, 47);
    // 009af5  mov eax, dword ptr [esi]
    X86_AT(c, 0x9af5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009af7  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9af7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009afa  shld eax, edx, cl
    X86_AT(c, 0x9afau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009afd  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9afdu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009b04  and edx, 7
    X86_AT(c, 0x9b04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009b07  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9b07u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9af3u, "ran off the end of a function");
}
void f_00009af5(X86Cpu& c) {
    X86_TICK(c, 47);
    // 009af5  mov eax, dword ptr [esi]
    X86_AT(c, 0x9af5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009af7  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9af7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009afa  shld eax, edx, cl
    X86_AT(c, 0x9afau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009afd  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9afdu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009b04  and edx, 7
    X86_AT(c, 0x9b04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009b07  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9b07u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9af5u, "ran off the end of a function");
}
void f_00009af7(X86Cpu& c) {
    X86_TICK(c, 43);
    // 009af7  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9af7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009afa  shld eax, edx, cl
    X86_AT(c, 0x9afau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009afd  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9afdu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009b04  and edx, 7
    X86_AT(c, 0x9b04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009b07  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9b07u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9af7u, "ran off the end of a function");
}
void f_00009afa(X86Cpu& c) {
    X86_TICK(c, 39);
    // 009afa  shld eax, edx, cl
    X86_AT(c, 0x9afau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009afd  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9afdu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009b04  and edx, 7
    X86_AT(c, 0x9b04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009b07  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9b07u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9afau, "ran off the end of a function");
}
void f_00009afd(X86Cpu& c) {
    X86_TICK(c, 36);
    // 009afd  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9afdu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009b04  and edx, 7
    X86_AT(c, 0x9b04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009b07  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9b07u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9afdu, "ran off the end of a function");
}
void f_00009b04(X86Cpu& c) {
    X86_TICK(c, 32);
    // 009b04  and edx, 7
    X86_AT(c, 0x9b04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009b07  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9b07u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9b04u, "ran off the end of a function");
}
void f_00009b07(X86Cpu& c) {
    X86_TICK(c, 30);
    // 009b07  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9b07u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9b07u, "ran off the end of a function");
}
void f_00009b0f(X86Cpu& c) {
    X86_TICK(c, 26);
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9b0fu, "ran off the end of a function");
}
void f_00009b11(X86Cpu& c) {
    X86_TICK(c, 24);
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9b11u, "ran off the end of a function");
}
void f_00009b14(X86Cpu& c) {
    X86_TICK(c, 20);
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9b14u, "ran off the end of a function");
}
void f_00009b16(X86Cpu& c) {
    X86_TICK(c, 18);
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9b16u, "ran off the end of a function");
}
void f_00009b18(X86Cpu& c) {
    X86_TICK(c, 16);
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9b18u, "ran off the end of a function");
}
void f_00009b1a(X86Cpu& c) {
    X86_TICK(c, 14);
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9b1au, "ran off the end of a function");
}
void f_00009b1c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9b1cu, "ran off the end of a function");
}
void f_00009b1f(X86Cpu& c) {
    X86_TICK(c, 10);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9b1fu, "ran off the end of a function");
}
void f_0000a294(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00a294  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa294u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a29c  jne 0xa40c
    X86_AT(c, 0xa29cu);
    if (x86_cc(c, 5)) { goto L_a40c; }
    X86_TICK(c, 7);
    // 00a2a2  cmp ebx, 1
    X86_AT(c, 0xa2a2u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a2a5  je 0xa3a0
    X86_AT(c, 0xa2a5u);
    if (x86_cc(c, 4)) { goto L_a3a0; }
    X86_TICK(c, 42);
    // 00a2ab  push ebx
    X86_AT(c, 0xa2abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2ac  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa2acu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a2af  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa2afu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a2b0  shld eax, ebx, cl
    X86_AT(c, 0xa2b0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a2b3  push eax
    X86_AT(c, 0xa2b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a2b4  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa2b4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
L_a3a0:
    X86_TICK(c, 55);
    // 00a3a0  mov eax, dword ptr [esi]
    X86_AT(c, 0xa3a0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a3a2  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa3a2u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a3a5  shld eax, ebx, cl
    X86_AT(c, 0xa3a5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a3a8  push eax
    X86_AT(c, 0xa3a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3a9  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa3a9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a3b0  and eax, 7
    X86_AT(c, 0xa3b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3b5  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa3b5u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a3bd  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa3bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a3c4  and eax, 7
    X86_AT(c, 0xa3c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3c9  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa3c9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a3d1  pop eax
    X86_AT(c, 0xa3d1u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a3d2  push eax
    X86_AT(c, 0xa3d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3d3  push ecx
    X86_AT(c, 0xa3d3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a3d4  push ebx
    X86_AT(c, 0xa3d4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a3d5  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa3d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a3dc  sub ebx, ebx
    X86_AT(c, 0xa3dcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a3de  mov cl, 8
    X86_AT(c, 0xa3deu);
    s8(c, 1, 0x8u);
L_a3e0:
    X86_TICK(c, 10);
    // 00a3e0  shl ebx, 4
    X86_AT(c, 0xa3e0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a3e3  test eax, 0xf0000000
    X86_AT(c, 0xa3e3u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a3e8  je 0xa3ed
    X86_AT(c, 0xa3e8u);
    if (x86_cc(c, 4)) { goto L_a3ed; }
    X86_TICK(c, 2);
    // 00a3ea  or bl, 0xf
    X86_AT(c, 0xa3eau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a3ed:
    X86_TICK(c, 10);
    // 00a3ed  shl eax, 4
    X86_AT(c, 0xa3edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a3f0  dec cl
    X86_AT(c, 0xa3f0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a3f2  jne 0xa3e0
    X86_AT(c, 0xa3f2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa3e0u); goto L_a3e0; }
    X86_TICK(c, 42);
    // 00a3f4  mov eax, ebx
    X86_AT(c, 0xa3f4u);
    c.r[0] = c.r[3];
    // 00a3f6  pop ebx
    X86_AT(c, 0xa3f6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a3f7  pop ecx
    X86_AT(c, 0xa3f7u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a3f8  and ebx, eax
    X86_AT(c, 0xa3f8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a3fa  not ebx
    X86_AT(c, 0xa3fau);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a3fc  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa3fcu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a3ff  and edx, ebx
    X86_AT(c, 0xa3ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a401  not ebx
    X86_AT(c, 0xa401u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a403  pop eax
    X86_AT(c, 0xa403u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a404  and eax, ebx
    X86_AT(c, 0xa404u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a406  or edx, eax
    X86_AT(c, 0xa406u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a408  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa408u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a40b  ret 
    X86_AT(c, 0xa40bu);
    c.eip = pop32(c); return;
L_a40c:
    X86_TICK(c, 7);
    // 00a40c  cmp ebx, 1
    X86_AT(c, 0xa40cu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a40f  je 0xa524
    X86_AT(c, 0xa40fu);
    if (x86_cc(c, 4)) { goto L_a524; }
    X86_TICK(c, 42);
    // 00a415  push ebx
    X86_AT(c, 0xa415u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a416  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa416u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a419  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa419u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a41a  shld eax, ebx, cl
    X86_AT(c, 0xa41au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a41d  push eax
    X86_AT(c, 0xa41du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a41e  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa41eu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a425  and ebx, 7
    X86_AT(c, 0xa425u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a428  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa428u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a430  push ecx
    X86_AT(c, 0xa430u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a431  push ebx
    X86_AT(c, 0xa431u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a432  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa432u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a439  sub ebx, ebx
    X86_AT(c, 0xa439u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a43b  mov cl, 8
    X86_AT(c, 0xa43bu);
    s8(c, 1, 0x8u);
L_a43d:
    X86_TICK(c, 10);
    // 00a43d  shl ebx, 4
    X86_AT(c, 0xa43du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a440  test eax, 0xf0000000
    X86_AT(c, 0xa440u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a445  je 0xa44a
    X86_AT(c, 0xa445u);
    if (x86_cc(c, 4)) { goto L_a44a; }
    X86_TICK(c, 2);
    // 00a447  or bl, 0xf
    X86_AT(c, 0xa447u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a44a:
    X86_TICK(c, 10);
    // 00a44a  shl eax, 4
    X86_AT(c, 0xa44au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a44d  dec cl
    X86_AT(c, 0xa44du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a44f  jne 0xa43d
    X86_AT(c, 0xa44fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa43du); goto L_a43d; }
    X86_TICK(c, 19);
    // 00a451  mov eax, ebx
    X86_AT(c, 0xa451u);
    c.r[0] = c.r[3];
    // 00a453  pop ebx
    X86_AT(c, 0xa453u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a454  pop ecx
    X86_AT(c, 0xa454u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a455  and ebx, eax
    X86_AT(c, 0xa455u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a457  call 0x7f8c
    X86_AT(c, 0xa457u);
    push32(c, 0xa45cu); f_00007f8c(c); X86_RET(c, 0xa45cu);
    X86_TICK(c, 46);
    // 00a45c  and ebx, eax
    X86_AT(c, 0xa45cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a45e  not ebx
    X86_AT(c, 0xa45eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a460  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa460u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a463  not ebx
    X86_AT(c, 0xa463u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a465  pop eax
    X86_AT(c, 0xa465u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a466  and eax, ebx
    X86_AT(c, 0xa466u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a468  or dword ptr es:[edi], eax
    X86_AT(c, 0xa468u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a46b  add edi, 4
    X86_AT(c, 0xa46bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a46e  dec dword ptr [esp]
    X86_AT(c, 0xa46eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a471  cmp dword ptr [esp], 1
    X86_AT(c, 0xa471u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a475  je 0xa4c5
    X86_AT(c, 0xa475u);
    if (x86_cc(c, 4)) { goto L_a4c5; }
    X86_TICK(c, 6);
    // 00a477  dec dword ptr [esp]
    X86_AT(c, 0xa477u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a47a:
    X86_TICK(c, 30);
    // 00a47a  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa47au);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a47d  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa47du);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a47e  shld eax, ebx, cl
    X86_AT(c, 0xa47eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a481  push eax
    X86_AT(c, 0xa481u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a482  push ecx
    X86_AT(c, 0xa482u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a483  push ebx
    X86_AT(c, 0xa483u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a484  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa484u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a48b  sub ebx, ebx
    X86_AT(c, 0xa48bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a48d  mov cl, 8
    X86_AT(c, 0xa48du);
    s8(c, 1, 0x8u);
L_a48f:
    X86_TICK(c, 10);
    // 00a48f  shl ebx, 4
    X86_AT(c, 0xa48fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a492  test eax, 0xf0000000
    X86_AT(c, 0xa492u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a497  je 0xa49c
    X86_AT(c, 0xa497u);
    if (x86_cc(c, 4)) { goto L_a49c; }
    X86_TICK(c, 2);
    // 00a499  or bl, 0xf
    X86_AT(c, 0xa499u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a49c:
    X86_TICK(c, 10);
    // 00a49c  shl eax, 4
    X86_AT(c, 0xa49cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a49f  dec cl
    X86_AT(c, 0xa49fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a4a1  jne 0xa48f
    X86_AT(c, 0xa4a1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa48fu); goto L_a48f; }
    X86_TICK(c, 19);
    // 00a4a3  mov eax, ebx
    X86_AT(c, 0xa4a3u);
    c.r[0] = c.r[3];
    // 00a4a5  pop ebx
    X86_AT(c, 0xa4a5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a4a6  pop ecx
    X86_AT(c, 0xa4a6u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a4a7  mov ebx, eax
    X86_AT(c, 0xa4a7u);
    c.r[3] = c.r[0];
    // 00a4a9  call 0x7f8c
    X86_AT(c, 0xa4a9u);
    push32(c, 0xa4aeu); f_00007f8c(c); X86_RET(c, 0xa4aeu);
    X86_TICK(c, 39);
    // 00a4ae  and ebx, eax
    X86_AT(c, 0xa4aeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a4b0  not ebx
    X86_AT(c, 0xa4b0u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a4b2  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa4b2u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a4b5  not ebx
    X86_AT(c, 0xa4b5u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a4b7  pop eax
    X86_AT(c, 0xa4b7u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a4b8  and eax, ebx
    X86_AT(c, 0xa4b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a4ba  or dword ptr es:[edi], eax
    X86_AT(c, 0xa4bau);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a4bd  add edi, 4
    X86_AT(c, 0xa4bdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a4c0  dec dword ptr [esp]
    X86_AT(c, 0xa4c0u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a4c3  jne 0xa47a
    X86_AT(c, 0xa4c3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa47au); goto L_a47a; }
L_a4c5:
    X86_TICK(c, 37);
    // 00a4c5  mov eax, dword ptr [esi]
    X86_AT(c, 0xa4c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a4c7  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa4c7u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a4ca  shld eax, ebx, cl
    X86_AT(c, 0xa4cau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a4cd  push eax
    X86_AT(c, 0xa4cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a4ce  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa4ceu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a4d5  and ebx, 7
    X86_AT(c, 0xa4d5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a4d8  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa4d8u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a4e0  push ecx
    X86_AT(c, 0xa4e0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a4e1  push ebx
    X86_AT(c, 0xa4e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a4e2  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa4e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a4e9  sub ebx, ebx
    X86_AT(c, 0xa4e9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a4eb  mov cl, 8
    X86_AT(c, 0xa4ebu);
    s8(c, 1, 0x8u);
L_a4ed:
    X86_TICK(c, 10);
    // 00a4ed  shl ebx, 4
    X86_AT(c, 0xa4edu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a4f0  test eax, 0xf0000000
    X86_AT(c, 0xa4f0u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a4f5  je 0xa4fa
    X86_AT(c, 0xa4f5u);
    if (x86_cc(c, 4)) { goto L_a4fa; }
    X86_TICK(c, 2);
    // 00a4f7  or bl, 0xf
    X86_AT(c, 0xa4f7u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a4fa:
    X86_TICK(c, 10);
    // 00a4fa  shl eax, 4
    X86_AT(c, 0xa4fau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a4fd  dec cl
    X86_AT(c, 0xa4fdu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a4ff  jne 0xa4ed
    X86_AT(c, 0xa4ffu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa4edu); goto L_a4ed; }
    X86_TICK(c, 19);
    // 00a501  mov eax, ebx
    X86_AT(c, 0xa501u);
    c.r[0] = c.r[3];
    // 00a503  pop ebx
    X86_AT(c, 0xa503u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a504  pop ecx
    X86_AT(c, 0xa504u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a505  and ebx, eax
    X86_AT(c, 0xa505u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a507  call 0x7f8c
    X86_AT(c, 0xa507u);
    push32(c, 0xa50cu); f_00007f8c(c); X86_RET(c, 0xa50cu);
    X86_TICK(c, 36);
    // 00a50c  and ebx, eax
    X86_AT(c, 0xa50cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a50e  not ebx
    X86_AT(c, 0xa50eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a510  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa510u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a513  and edx, ebx
    X86_AT(c, 0xa513u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a515  not ebx
    X86_AT(c, 0xa515u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a517  pop eax
    X86_AT(c, 0xa517u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a518  and eax, ebx
    X86_AT(c, 0xa518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a51a  or edx, eax
    X86_AT(c, 0xa51au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a51c  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa51cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a51f  pop ebx
    X86_AT(c, 0xa51fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a520  ret 
    X86_AT(c, 0xa520u);
    c.eip = pop32(c); return;
L_a524:
    X86_TICK(c, 55);
    // 00a524  mov eax, dword ptr [esi]
    X86_AT(c, 0xa524u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a526  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa526u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a529  shld eax, ebx, cl
    X86_AT(c, 0xa529u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a52c  push eax
    X86_AT(c, 0xa52cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a52d  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa52du);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a534  and eax, 7
    X86_AT(c, 0xa534u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a539  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa539u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a541  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa541u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a548  and eax, 7
    X86_AT(c, 0xa548u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a54d  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa54du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a555  pop eax
    X86_AT(c, 0xa555u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a556  push eax
    X86_AT(c, 0xa556u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a557  push ecx
    X86_AT(c, 0xa557u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a558  push ebx
    X86_AT(c, 0xa558u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a559  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa559u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a560  sub ebx, ebx
    X86_AT(c, 0xa560u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a562  mov cl, 8
    X86_AT(c, 0xa562u);
    s8(c, 1, 0x8u);
L_a564:
    X86_TICK(c, 10);
    // 00a564  shl ebx, 4
    X86_AT(c, 0xa564u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a567  test eax, 0xf0000000
    X86_AT(c, 0xa567u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a56c  je 0xa571
    X86_AT(c, 0xa56cu);
    if (x86_cc(c, 4)) { goto L_a571; }
    X86_TICK(c, 2);
    // 00a56e  or bl, 0xf
    X86_AT(c, 0xa56eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a571:
    X86_TICK(c, 10);
    // 00a571  shl eax, 4
    X86_AT(c, 0xa571u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a574  dec cl
    X86_AT(c, 0xa574u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a576  jne 0xa564
    X86_AT(c, 0xa576u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa564u); goto L_a564; }
    X86_TICK(c, 19);
    // 00a578  mov eax, ebx
    X86_AT(c, 0xa578u);
    c.r[0] = c.r[3];
    // 00a57a  pop ebx
    X86_AT(c, 0xa57au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a57b  pop ecx
    X86_AT(c, 0xa57bu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a57c  and ebx, eax
    X86_AT(c, 0xa57cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a57e  call 0x7f8c
    X86_AT(c, 0xa57eu);
    push32(c, 0xa583u); f_00007f8c(c); X86_RET(c, 0xa583u);
    X86_TICK(c, 32);
    // 00a583  and ebx, eax
    X86_AT(c, 0xa583u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a585  not ebx
    X86_AT(c, 0xa585u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a587  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa587u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a58a  and edx, ebx
    X86_AT(c, 0xa58au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a58c  not ebx
    X86_AT(c, 0xa58cu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a58e  pop eax
    X86_AT(c, 0xa58eu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a58f  and eax, ebx
    X86_AT(c, 0xa58fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a591  or edx, eax
    X86_AT(c, 0xa591u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a593  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa593u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a596  ret 
    X86_AT(c, 0xa596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa294u, "ran off the end of a function");
}
void f_0000a29c(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00a29c  jne 0xa40c
    X86_AT(c, 0xa29cu);
    if (x86_cc(c, 5)) { goto L_a40c; }
    X86_TICK(c, 7);
    // 00a2a2  cmp ebx, 1
    X86_AT(c, 0xa2a2u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a2a5  je 0xa3a0
    X86_AT(c, 0xa2a5u);
    if (x86_cc(c, 4)) { goto L_a3a0; }
    X86_TICK(c, 42);
    // 00a2ab  push ebx
    X86_AT(c, 0xa2abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2ac  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa2acu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a2af  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa2afu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a2b0  shld eax, ebx, cl
    X86_AT(c, 0xa2b0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a2b3  push eax
    X86_AT(c, 0xa2b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a2b4  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa2b4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
L_a3a0:
    X86_TICK(c, 55);
    // 00a3a0  mov eax, dword ptr [esi]
    X86_AT(c, 0xa3a0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a3a2  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa3a2u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a3a5  shld eax, ebx, cl
    X86_AT(c, 0xa3a5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a3a8  push eax
    X86_AT(c, 0xa3a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3a9  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa3a9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a3b0  and eax, 7
    X86_AT(c, 0xa3b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3b5  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa3b5u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a3bd  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa3bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a3c4  and eax, 7
    X86_AT(c, 0xa3c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3c9  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa3c9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a3d1  pop eax
    X86_AT(c, 0xa3d1u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a3d2  push eax
    X86_AT(c, 0xa3d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3d3  push ecx
    X86_AT(c, 0xa3d3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a3d4  push ebx
    X86_AT(c, 0xa3d4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a3d5  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa3d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a3dc  sub ebx, ebx
    X86_AT(c, 0xa3dcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a3de  mov cl, 8
    X86_AT(c, 0xa3deu);
    s8(c, 1, 0x8u);
L_a3e0:
    X86_TICK(c, 10);
    // 00a3e0  shl ebx, 4
    X86_AT(c, 0xa3e0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a3e3  test eax, 0xf0000000
    X86_AT(c, 0xa3e3u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a3e8  je 0xa3ed
    X86_AT(c, 0xa3e8u);
    if (x86_cc(c, 4)) { goto L_a3ed; }
    X86_TICK(c, 2);
    // 00a3ea  or bl, 0xf
    X86_AT(c, 0xa3eau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a3ed:
    X86_TICK(c, 10);
    // 00a3ed  shl eax, 4
    X86_AT(c, 0xa3edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a3f0  dec cl
    X86_AT(c, 0xa3f0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a3f2  jne 0xa3e0
    X86_AT(c, 0xa3f2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa3e0u); goto L_a3e0; }
    X86_TICK(c, 42);
    // 00a3f4  mov eax, ebx
    X86_AT(c, 0xa3f4u);
    c.r[0] = c.r[3];
    // 00a3f6  pop ebx
    X86_AT(c, 0xa3f6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a3f7  pop ecx
    X86_AT(c, 0xa3f7u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a3f8  and ebx, eax
    X86_AT(c, 0xa3f8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a3fa  not ebx
    X86_AT(c, 0xa3fau);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a3fc  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa3fcu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a3ff  and edx, ebx
    X86_AT(c, 0xa3ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a401  not ebx
    X86_AT(c, 0xa401u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a403  pop eax
    X86_AT(c, 0xa403u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a404  and eax, ebx
    X86_AT(c, 0xa404u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a406  or edx, eax
    X86_AT(c, 0xa406u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a408  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa408u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a40b  ret 
    X86_AT(c, 0xa40bu);
    c.eip = pop32(c); return;
L_a40c:
    X86_TICK(c, 7);
    // 00a40c  cmp ebx, 1
    X86_AT(c, 0xa40cu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a40f  je 0xa524
    X86_AT(c, 0xa40fu);
    if (x86_cc(c, 4)) { goto L_a524; }
    X86_TICK(c, 42);
    // 00a415  push ebx
    X86_AT(c, 0xa415u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a416  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa416u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a419  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa419u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a41a  shld eax, ebx, cl
    X86_AT(c, 0xa41au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a41d  push eax
    X86_AT(c, 0xa41du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a41e  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa41eu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a425  and ebx, 7
    X86_AT(c, 0xa425u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a428  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa428u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a430  push ecx
    X86_AT(c, 0xa430u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a431  push ebx
    X86_AT(c, 0xa431u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a432  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa432u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a439  sub ebx, ebx
    X86_AT(c, 0xa439u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a43b  mov cl, 8
    X86_AT(c, 0xa43bu);
    s8(c, 1, 0x8u);
L_a43d:
    X86_TICK(c, 10);
    // 00a43d  shl ebx, 4
    X86_AT(c, 0xa43du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a440  test eax, 0xf0000000
    X86_AT(c, 0xa440u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a445  je 0xa44a
    X86_AT(c, 0xa445u);
    if (x86_cc(c, 4)) { goto L_a44a; }
    X86_TICK(c, 2);
    // 00a447  or bl, 0xf
    X86_AT(c, 0xa447u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a44a:
    X86_TICK(c, 10);
    // 00a44a  shl eax, 4
    X86_AT(c, 0xa44au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a44d  dec cl
    X86_AT(c, 0xa44du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a44f  jne 0xa43d
    X86_AT(c, 0xa44fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa43du); goto L_a43d; }
    X86_TICK(c, 19);
    // 00a451  mov eax, ebx
    X86_AT(c, 0xa451u);
    c.r[0] = c.r[3];
    // 00a453  pop ebx
    X86_AT(c, 0xa453u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a454  pop ecx
    X86_AT(c, 0xa454u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a455  and ebx, eax
    X86_AT(c, 0xa455u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a457  call 0x7f8c
    X86_AT(c, 0xa457u);
    push32(c, 0xa45cu); f_00007f8c(c); X86_RET(c, 0xa45cu);
    X86_TICK(c, 46);
    // 00a45c  and ebx, eax
    X86_AT(c, 0xa45cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a45e  not ebx
    X86_AT(c, 0xa45eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a460  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa460u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a463  not ebx
    X86_AT(c, 0xa463u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a465  pop eax
    X86_AT(c, 0xa465u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a466  and eax, ebx
    X86_AT(c, 0xa466u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a468  or dword ptr es:[edi], eax
    X86_AT(c, 0xa468u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a46b  add edi, 4
    X86_AT(c, 0xa46bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a46e  dec dword ptr [esp]
    X86_AT(c, 0xa46eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a471  cmp dword ptr [esp], 1
    X86_AT(c, 0xa471u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a475  je 0xa4c5
    X86_AT(c, 0xa475u);
    if (x86_cc(c, 4)) { goto L_a4c5; }
    X86_TICK(c, 6);
    // 00a477  dec dword ptr [esp]
    X86_AT(c, 0xa477u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a47a:
    X86_TICK(c, 30);
    // 00a47a  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa47au);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a47d  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa47du);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a47e  shld eax, ebx, cl
    X86_AT(c, 0xa47eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a481  push eax
    X86_AT(c, 0xa481u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a482  push ecx
    X86_AT(c, 0xa482u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a483  push ebx
    X86_AT(c, 0xa483u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a484  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa484u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a48b  sub ebx, ebx
    X86_AT(c, 0xa48bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a48d  mov cl, 8
    X86_AT(c, 0xa48du);
    s8(c, 1, 0x8u);
L_a48f:
    X86_TICK(c, 10);
    // 00a48f  shl ebx, 4
    X86_AT(c, 0xa48fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a492  test eax, 0xf0000000
    X86_AT(c, 0xa492u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a497  je 0xa49c
    X86_AT(c, 0xa497u);
    if (x86_cc(c, 4)) { goto L_a49c; }
    X86_TICK(c, 2);
    // 00a499  or bl, 0xf
    X86_AT(c, 0xa499u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a49c:
    X86_TICK(c, 10);
    // 00a49c  shl eax, 4
    X86_AT(c, 0xa49cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a49f  dec cl
    X86_AT(c, 0xa49fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a4a1  jne 0xa48f
    X86_AT(c, 0xa4a1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa48fu); goto L_a48f; }
    X86_TICK(c, 19);
    // 00a4a3  mov eax, ebx
    X86_AT(c, 0xa4a3u);
    c.r[0] = c.r[3];
    // 00a4a5  pop ebx
    X86_AT(c, 0xa4a5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a4a6  pop ecx
    X86_AT(c, 0xa4a6u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a4a7  mov ebx, eax
    X86_AT(c, 0xa4a7u);
    c.r[3] = c.r[0];
    // 00a4a9  call 0x7f8c
    X86_AT(c, 0xa4a9u);
    push32(c, 0xa4aeu); f_00007f8c(c); X86_RET(c, 0xa4aeu);
    X86_TICK(c, 39);
    // 00a4ae  and ebx, eax
    X86_AT(c, 0xa4aeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a4b0  not ebx
    X86_AT(c, 0xa4b0u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a4b2  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa4b2u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a4b5  not ebx
    X86_AT(c, 0xa4b5u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a4b7  pop eax
    X86_AT(c, 0xa4b7u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a4b8  and eax, ebx
    X86_AT(c, 0xa4b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a4ba  or dword ptr es:[edi], eax
    X86_AT(c, 0xa4bau);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a4bd  add edi, 4
    X86_AT(c, 0xa4bdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a4c0  dec dword ptr [esp]
    X86_AT(c, 0xa4c0u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a4c3  jne 0xa47a
    X86_AT(c, 0xa4c3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa47au); goto L_a47a; }
L_a4c5:
    X86_TICK(c, 37);
    // 00a4c5  mov eax, dword ptr [esi]
    X86_AT(c, 0xa4c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a4c7  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa4c7u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a4ca  shld eax, ebx, cl
    X86_AT(c, 0xa4cau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a4cd  push eax
    X86_AT(c, 0xa4cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a4ce  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa4ceu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a4d5  and ebx, 7
    X86_AT(c, 0xa4d5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a4d8  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa4d8u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a4e0  push ecx
    X86_AT(c, 0xa4e0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a4e1  push ebx
    X86_AT(c, 0xa4e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a4e2  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa4e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a4e9  sub ebx, ebx
    X86_AT(c, 0xa4e9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a4eb  mov cl, 8
    X86_AT(c, 0xa4ebu);
    s8(c, 1, 0x8u);
L_a4ed:
    X86_TICK(c, 10);
    // 00a4ed  shl ebx, 4
    X86_AT(c, 0xa4edu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a4f0  test eax, 0xf0000000
    X86_AT(c, 0xa4f0u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a4f5  je 0xa4fa
    X86_AT(c, 0xa4f5u);
    if (x86_cc(c, 4)) { goto L_a4fa; }
    X86_TICK(c, 2);
    // 00a4f7  or bl, 0xf
    X86_AT(c, 0xa4f7u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a4fa:
    X86_TICK(c, 10);
    // 00a4fa  shl eax, 4
    X86_AT(c, 0xa4fau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a4fd  dec cl
    X86_AT(c, 0xa4fdu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a4ff  jne 0xa4ed
    X86_AT(c, 0xa4ffu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa4edu); goto L_a4ed; }
    X86_TICK(c, 19);
    // 00a501  mov eax, ebx
    X86_AT(c, 0xa501u);
    c.r[0] = c.r[3];
    // 00a503  pop ebx
    X86_AT(c, 0xa503u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a504  pop ecx
    X86_AT(c, 0xa504u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a505  and ebx, eax
    X86_AT(c, 0xa505u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a507  call 0x7f8c
    X86_AT(c, 0xa507u);
    push32(c, 0xa50cu); f_00007f8c(c); X86_RET(c, 0xa50cu);
    X86_TICK(c, 36);
    // 00a50c  and ebx, eax
    X86_AT(c, 0xa50cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a50e  not ebx
    X86_AT(c, 0xa50eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a510  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa510u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a513  and edx, ebx
    X86_AT(c, 0xa513u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a515  not ebx
    X86_AT(c, 0xa515u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a517  pop eax
    X86_AT(c, 0xa517u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a518  and eax, ebx
    X86_AT(c, 0xa518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a51a  or edx, eax
    X86_AT(c, 0xa51au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a51c  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa51cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a51f  pop ebx
    X86_AT(c, 0xa51fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a520  ret 
    X86_AT(c, 0xa520u);
    c.eip = pop32(c); return;
L_a524:
    X86_TICK(c, 55);
    // 00a524  mov eax, dword ptr [esi]
    X86_AT(c, 0xa524u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a526  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa526u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a529  shld eax, ebx, cl
    X86_AT(c, 0xa529u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a52c  push eax
    X86_AT(c, 0xa52cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a52d  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa52du);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a534  and eax, 7
    X86_AT(c, 0xa534u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a539  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa539u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a541  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa541u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a548  and eax, 7
    X86_AT(c, 0xa548u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a54d  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa54du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a555  pop eax
    X86_AT(c, 0xa555u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a556  push eax
    X86_AT(c, 0xa556u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a557  push ecx
    X86_AT(c, 0xa557u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a558  push ebx
    X86_AT(c, 0xa558u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a559  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa559u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a560  sub ebx, ebx
    X86_AT(c, 0xa560u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a562  mov cl, 8
    X86_AT(c, 0xa562u);
    s8(c, 1, 0x8u);
L_a564:
    X86_TICK(c, 10);
    // 00a564  shl ebx, 4
    X86_AT(c, 0xa564u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a567  test eax, 0xf0000000
    X86_AT(c, 0xa567u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a56c  je 0xa571
    X86_AT(c, 0xa56cu);
    if (x86_cc(c, 4)) { goto L_a571; }
    X86_TICK(c, 2);
    // 00a56e  or bl, 0xf
    X86_AT(c, 0xa56eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a571:
    X86_TICK(c, 10);
    // 00a571  shl eax, 4
    X86_AT(c, 0xa571u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a574  dec cl
    X86_AT(c, 0xa574u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a576  jne 0xa564
    X86_AT(c, 0xa576u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa564u); goto L_a564; }
    X86_TICK(c, 19);
    // 00a578  mov eax, ebx
    X86_AT(c, 0xa578u);
    c.r[0] = c.r[3];
    // 00a57a  pop ebx
    X86_AT(c, 0xa57au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a57b  pop ecx
    X86_AT(c, 0xa57bu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a57c  and ebx, eax
    X86_AT(c, 0xa57cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a57e  call 0x7f8c
    X86_AT(c, 0xa57eu);
    push32(c, 0xa583u); f_00007f8c(c); X86_RET(c, 0xa583u);
    X86_TICK(c, 32);
    // 00a583  and ebx, eax
    X86_AT(c, 0xa583u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a585  not ebx
    X86_AT(c, 0xa585u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a587  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa587u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a58a  and edx, ebx
    X86_AT(c, 0xa58au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a58c  not ebx
    X86_AT(c, 0xa58cu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a58e  pop eax
    X86_AT(c, 0xa58eu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a58f  and eax, ebx
    X86_AT(c, 0xa58fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a591  or edx, eax
    X86_AT(c, 0xa591u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a593  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa593u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a596  ret 
    X86_AT(c, 0xa596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa29cu, "ran off the end of a function");
}
void f_0000a2a2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00a2a2  cmp ebx, 1
    X86_AT(c, 0xa2a2u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a2a5  je 0xa3a0
    X86_AT(c, 0xa2a5u);
    if (x86_cc(c, 4)) { goto L_a3a0; }
    X86_TICK(c, 42);
    // 00a2ab  push ebx
    X86_AT(c, 0xa2abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2ac  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa2acu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a2af  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa2afu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a2b0  shld eax, ebx, cl
    X86_AT(c, 0xa2b0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a2b3  push eax
    X86_AT(c, 0xa2b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a2b4  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa2b4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
L_a3a0:
    X86_TICK(c, 55);
    // 00a3a0  mov eax, dword ptr [esi]
    X86_AT(c, 0xa3a0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a3a2  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa3a2u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a3a5  shld eax, ebx, cl
    X86_AT(c, 0xa3a5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a3a8  push eax
    X86_AT(c, 0xa3a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3a9  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa3a9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a3b0  and eax, 7
    X86_AT(c, 0xa3b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3b5  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa3b5u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a3bd  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa3bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a3c4  and eax, 7
    X86_AT(c, 0xa3c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3c9  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa3c9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a3d1  pop eax
    X86_AT(c, 0xa3d1u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a3d2  push eax
    X86_AT(c, 0xa3d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3d3  push ecx
    X86_AT(c, 0xa3d3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a3d4  push ebx
    X86_AT(c, 0xa3d4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a3d5  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa3d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a3dc  sub ebx, ebx
    X86_AT(c, 0xa3dcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a3de  mov cl, 8
    X86_AT(c, 0xa3deu);
    s8(c, 1, 0x8u);
L_a3e0:
    X86_TICK(c, 10);
    // 00a3e0  shl ebx, 4
    X86_AT(c, 0xa3e0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a3e3  test eax, 0xf0000000
    X86_AT(c, 0xa3e3u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a3e8  je 0xa3ed
    X86_AT(c, 0xa3e8u);
    if (x86_cc(c, 4)) { goto L_a3ed; }
    X86_TICK(c, 2);
    // 00a3ea  or bl, 0xf
    X86_AT(c, 0xa3eau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a3ed:
    X86_TICK(c, 10);
    // 00a3ed  shl eax, 4
    X86_AT(c, 0xa3edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a3f0  dec cl
    X86_AT(c, 0xa3f0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a3f2  jne 0xa3e0
    X86_AT(c, 0xa3f2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa3e0u); goto L_a3e0; }
    X86_TICK(c, 42);
    // 00a3f4  mov eax, ebx
    X86_AT(c, 0xa3f4u);
    c.r[0] = c.r[3];
    // 00a3f6  pop ebx
    X86_AT(c, 0xa3f6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a3f7  pop ecx
    X86_AT(c, 0xa3f7u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a3f8  and ebx, eax
    X86_AT(c, 0xa3f8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a3fa  not ebx
    X86_AT(c, 0xa3fau);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a3fc  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa3fcu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a3ff  and edx, ebx
    X86_AT(c, 0xa3ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a401  not ebx
    X86_AT(c, 0xa401u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a403  pop eax
    X86_AT(c, 0xa403u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a404  and eax, ebx
    X86_AT(c, 0xa404u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a406  or edx, eax
    X86_AT(c, 0xa406u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a408  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa408u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a40b  ret 
    X86_AT(c, 0xa40bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa2a2u, "ran off the end of a function");
}
void f_0000a2a5(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00a2a5  je 0xa3a0
    X86_AT(c, 0xa2a5u);
    if (x86_cc(c, 4)) { goto L_a3a0; }
    X86_TICK(c, 42);
    // 00a2ab  push ebx
    X86_AT(c, 0xa2abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2ac  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa2acu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a2af  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa2afu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a2b0  shld eax, ebx, cl
    X86_AT(c, 0xa2b0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a2b3  push eax
    X86_AT(c, 0xa2b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a2b4  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa2b4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
L_a3a0:
    X86_TICK(c, 55);
    // 00a3a0  mov eax, dword ptr [esi]
    X86_AT(c, 0xa3a0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a3a2  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa3a2u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a3a5  shld eax, ebx, cl
    X86_AT(c, 0xa3a5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a3a8  push eax
    X86_AT(c, 0xa3a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3a9  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa3a9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a3b0  and eax, 7
    X86_AT(c, 0xa3b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3b5  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa3b5u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a3bd  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa3bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a3c4  and eax, 7
    X86_AT(c, 0xa3c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3c9  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa3c9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a3d1  pop eax
    X86_AT(c, 0xa3d1u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a3d2  push eax
    X86_AT(c, 0xa3d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3d3  push ecx
    X86_AT(c, 0xa3d3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a3d4  push ebx
    X86_AT(c, 0xa3d4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a3d5  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa3d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a3dc  sub ebx, ebx
    X86_AT(c, 0xa3dcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a3de  mov cl, 8
    X86_AT(c, 0xa3deu);
    s8(c, 1, 0x8u);
L_a3e0:
    X86_TICK(c, 10);
    // 00a3e0  shl ebx, 4
    X86_AT(c, 0xa3e0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a3e3  test eax, 0xf0000000
    X86_AT(c, 0xa3e3u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a3e8  je 0xa3ed
    X86_AT(c, 0xa3e8u);
    if (x86_cc(c, 4)) { goto L_a3ed; }
    X86_TICK(c, 2);
    // 00a3ea  or bl, 0xf
    X86_AT(c, 0xa3eau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a3ed:
    X86_TICK(c, 10);
    // 00a3ed  shl eax, 4
    X86_AT(c, 0xa3edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a3f0  dec cl
    X86_AT(c, 0xa3f0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a3f2  jne 0xa3e0
    X86_AT(c, 0xa3f2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa3e0u); goto L_a3e0; }
    X86_TICK(c, 42);
    // 00a3f4  mov eax, ebx
    X86_AT(c, 0xa3f4u);
    c.r[0] = c.r[3];
    // 00a3f6  pop ebx
    X86_AT(c, 0xa3f6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a3f7  pop ecx
    X86_AT(c, 0xa3f7u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a3f8  and ebx, eax
    X86_AT(c, 0xa3f8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a3fa  not ebx
    X86_AT(c, 0xa3fau);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a3fc  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa3fcu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a3ff  and edx, ebx
    X86_AT(c, 0xa3ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a401  not ebx
    X86_AT(c, 0xa401u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a403  pop eax
    X86_AT(c, 0xa403u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a404  and eax, ebx
    X86_AT(c, 0xa404u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a406  or edx, eax
    X86_AT(c, 0xa406u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a408  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa408u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a40b  ret 
    X86_AT(c, 0xa40bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa2a5u, "ran off the end of a function");
}
void f_0000a2ab(X86Cpu& c) {
    X86_TICK(c, 42);
    // 00a2ab  push ebx
    X86_AT(c, 0xa2abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2ac  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa2acu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a2af  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa2afu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a2b0  shld eax, ebx, cl
    X86_AT(c, 0xa2b0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a2b3  push eax
    X86_AT(c, 0xa2b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a2b4  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa2b4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa2abu, "ran off the end of a function");
}
void f_0000a2ac(X86Cpu& c) {
    X86_TICK(c, 40);
    // 00a2ac  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa2acu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a2af  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa2afu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a2b0  shld eax, ebx, cl
    X86_AT(c, 0xa2b0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a2b3  push eax
    X86_AT(c, 0xa2b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a2b4  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa2b4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa2acu, "ran off the end of a function");
}
void f_0000a2af(X86Cpu& c) {
    X86_TICK(c, 36);
    // 00a2af  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa2afu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a2b0  shld eax, ebx, cl
    X86_AT(c, 0xa2b0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a2b3  push eax
    X86_AT(c, 0xa2b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a2b4  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa2b4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa2afu, "ran off the end of a function");
}
void f_0000a2b0(X86Cpu& c) {
    X86_TICK(c, 29);
    // 00a2b0  shld eax, ebx, cl
    X86_AT(c, 0xa2b0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a2b3  push eax
    X86_AT(c, 0xa2b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a2b4  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa2b4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa2b0u, "ran off the end of a function");
}
void f_0000a2b3(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00a2b3  push eax
    X86_AT(c, 0xa2b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a2b4  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa2b4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa2b3u, "ran off the end of a function");
}
void f_0000a2b4(X86Cpu& c) {
    X86_TICK(c, 24);
    // 00a2b4  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa2b4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa2b4u, "ran off the end of a function");
}
void f_0000a2bb(X86Cpu& c) {
    X86_TICK(c, 20);
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa2bbu, "ran off the end of a function");
}
void f_0000a2be(X86Cpu& c) {
    X86_TICK(c, 18);
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa2beu, "ran off the end of a function");
}
void f_0000a2c6(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa2c6u, "ran off the end of a function");
}
}

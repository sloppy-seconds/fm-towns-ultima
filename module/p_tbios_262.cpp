#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000f486(X86Cpu& c) {
    X86_TICK(c, 88);
    // 00f486  imul eax, ecx
    X86_AT(c, 0xf486u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f489  mov word ptr gs:[ebp + 0x362], ax
    X86_AT(c, 0xf489u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)), (c.r[0] & 0xFFFFu));
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf486u, "ran off the end of a function");
}
void f_0000f489(X86Cpu& c) {
    X86_TICK(c, 66);
    // 00f489  mov word ptr gs:[ebp + 0x362], ax
    X86_AT(c, 0xf489u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)), (c.r[0] & 0xFFFFu));
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf489u, "ran off the end of a function");
}
void f_0000f491(X86Cpu& c) {
    X86_TICK(c, 64);
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf491u, "ran off the end of a function");
}
void f_0000f493(X86Cpu& c) {
    X86_TICK(c, 62);
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf493u, "ran off the end of a function");
}
void f_0000f49a(X86Cpu& c) {
    X86_TICK(c, 60);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf49au, "ran off the end of a function");
}
void f_0000f4a1(X86Cpu& c) {
    X86_TICK(c, 58);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4a1u, "ran off the end of a function");
}
void f_0000f4a8(X86Cpu& c) {
    X86_TICK(c, 52);
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4a8u, "ran off the end of a function");
}
void f_0000f4b0(X86Cpu& c) {
    X86_TICK(c, 46);
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4b0u, "ran off the end of a function");
}
void f_0000f4b1(X86Cpu& c) {
    X86_TICK(c, 44);
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4b1u, "ran off the end of a function");
}
void f_0000f4b2(X86Cpu& c) {
    X86_TICK(c, 42);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4b2u, "ran off the end of a function");
}
void f_0000f4b4(X86Cpu& c) {
    X86_TICK(c, 40);
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4b4u, "ran off the end of a function");
}
void f_0000f4b7(X86Cpu& c) {
    X86_TICK(c, 37);
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4b7u, "ran off the end of a function");
}
void f_0000f4b9(X86Cpu& c) {
    X86_TICK(c, 30);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4b9u, "ran off the end of a function");
}
void f_0000f4bb(X86Cpu& c) {
    X86_TICK(c, 28);
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4bbu, "ran off the end of a function");
}
void f_0000f4be(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4beu, "ran off the end of a function");
}
void f_0000f4c0(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4c0u, "ran off the end of a function");
}
void f_0000f4c1(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4c1u, "ran off the end of a function");
}
void f_0000f4c2(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4c2u, "ran off the end of a function");
}
void f_0000f4c9(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4c9u, "ran off the end of a function");
}
void f_0000f4cc(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4ccu, "ran off the end of a function");
}
void f_0000f51f(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf51fu, "ran off the end of a function");
}
void f_0000f523(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf523u, "ran off the end of a function");
}
void f_0000f52a(X86Cpu& c) {
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf52au, "ran off the end of a function");
}
void f_0000f532(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf532u, "ran off the end of a function");
}
void f_0000f534(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf534u, "ran off the end of a function");
}
void f_0000f538(X86Cpu& c) {
    goto L_f538;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f538:
    X86_TICK(c, 67);
    // 00f538  mov dword ptr gs:[ebp + 0x400], esi
    X86_AT(c, 0xf538u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)), c.r[6]);
    // 00f53f  mov word ptr gs:[ebp + 0x404], ds
    X86_AT(c, 0xf53fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), (uint32_t)c.sreg[3]);
    // 00f546  mov ax, word ptr gs:[ebp + 0x346]
    X86_AT(c, 0xf546u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x346u))));
    // 00f54e  sub ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf54eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00f556  inc ax
    X86_AT(c, 0xf556u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00f558  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0xf558u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00f560  mov bx, ax
    X86_AT(c, 0xf560u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f563  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf563u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00f56b  dec bx
    X86_AT(c, 0xf56bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f56d  shl eax, 0x10
    X86_AT(c, 0xf56du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f570  shl ebx, 0x10
    X86_AT(c, 0xf570u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f573  mov ax, word ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf573u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))));
    // 00f57b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xf57bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf538u, "ran off the end of a function");
}
void f_0000f53f(X86Cpu& c) {
    goto L_f53f;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f53f:
    X86_TICK(c, 65);
    // 00f53f  mov word ptr gs:[ebp + 0x404], ds
    X86_AT(c, 0xf53fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), (uint32_t)c.sreg[3]);
    // 00f546  mov ax, word ptr gs:[ebp + 0x346]
    X86_AT(c, 0xf546u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x346u))));
    // 00f54e  sub ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf54eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00f556  inc ax
    X86_AT(c, 0xf556u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00f558  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0xf558u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00f560  mov bx, ax
    X86_AT(c, 0xf560u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f563  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf563u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00f56b  dec bx
    X86_AT(c, 0xf56bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f56d  shl eax, 0x10
    X86_AT(c, 0xf56du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f570  shl ebx, 0x10
    X86_AT(c, 0xf570u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f573  mov ax, word ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf573u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))));
    // 00f57b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xf57bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf53fu, "ran off the end of a function");
}
void f_0000f546(X86Cpu& c) {
    goto L_f546;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f546:
    X86_TICK(c, 63);
    // 00f546  mov ax, word ptr gs:[ebp + 0x346]
    X86_AT(c, 0xf546u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x346u))));
    // 00f54e  sub ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf54eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00f556  inc ax
    X86_AT(c, 0xf556u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00f558  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0xf558u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00f560  mov bx, ax
    X86_AT(c, 0xf560u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f563  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf563u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00f56b  dec bx
    X86_AT(c, 0xf56bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f56d  shl eax, 0x10
    X86_AT(c, 0xf56du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f570  shl ebx, 0x10
    X86_AT(c, 0xf570u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f573  mov ax, word ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf573u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))));
    // 00f57b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xf57bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf546u, "ran off the end of a function");
}
void f_0000f54e(X86Cpu& c) {
    goto L_f54e;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f54e:
    X86_TICK(c, 59);
    // 00f54e  sub ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf54eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00f556  inc ax
    X86_AT(c, 0xf556u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00f558  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0xf558u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00f560  mov bx, ax
    X86_AT(c, 0xf560u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f563  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf563u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00f56b  dec bx
    X86_AT(c, 0xf56bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f56d  shl eax, 0x10
    X86_AT(c, 0xf56du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f570  shl ebx, 0x10
    X86_AT(c, 0xf570u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f573  mov ax, word ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf573u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))));
    // 00f57b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xf57bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf54eu, "ran off the end of a function");
}
void f_0000f556(X86Cpu& c) {
    goto L_f556;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f556:
    X86_TICK(c, 53);
    // 00f556  inc ax
    X86_AT(c, 0xf556u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00f558  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0xf558u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00f560  mov bx, ax
    X86_AT(c, 0xf560u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f563  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf563u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00f56b  dec bx
    X86_AT(c, 0xf56bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f56d  shl eax, 0x10
    X86_AT(c, 0xf56du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f570  shl ebx, 0x10
    X86_AT(c, 0xf570u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f573  mov ax, word ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf573u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))));
    // 00f57b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xf57bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf556u, "ran off the end of a function");
}
void f_0000f558(X86Cpu& c) {
    goto L_f558;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f558:
    X86_TICK(c, 51);
    // 00f558  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0xf558u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00f560  mov bx, ax
    X86_AT(c, 0xf560u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f563  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf563u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00f56b  dec bx
    X86_AT(c, 0xf56bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f56d  shl eax, 0x10
    X86_AT(c, 0xf56du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f570  shl ebx, 0x10
    X86_AT(c, 0xf570u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f573  mov ax, word ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf573u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))));
    // 00f57b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xf57bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf558u, "ran off the end of a function");
}
void f_0000f560(X86Cpu& c) {
    goto L_f560;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f560:
    X86_TICK(c, 49);
    // 00f560  mov bx, ax
    X86_AT(c, 0xf560u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f563  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf563u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00f56b  dec bx
    X86_AT(c, 0xf56bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f56d  shl eax, 0x10
    X86_AT(c, 0xf56du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f570  shl ebx, 0x10
    X86_AT(c, 0xf570u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f573  mov ax, word ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf573u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))));
    // 00f57b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xf57bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf560u, "ran off the end of a function");
}
void f_0000f563(X86Cpu& c) {
    goto L_f563;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f563:
    X86_TICK(c, 47);
    // 00f563  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf563u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00f56b  dec bx
    X86_AT(c, 0xf56bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f56d  shl eax, 0x10
    X86_AT(c, 0xf56du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f570  shl ebx, 0x10
    X86_AT(c, 0xf570u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f573  mov ax, word ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf573u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))));
    // 00f57b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xf57bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf563u, "ran off the end of a function");
}
void f_0000f56b(X86Cpu& c) {
    goto L_f56b;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f56b:
    X86_TICK(c, 41);
    // 00f56b  dec bx
    X86_AT(c, 0xf56bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f56d  shl eax, 0x10
    X86_AT(c, 0xf56du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f570  shl ebx, 0x10
    X86_AT(c, 0xf570u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f573  mov ax, word ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf573u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))));
    // 00f57b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xf57bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf56bu, "ran off the end of a function");
}
void f_0000f56d(X86Cpu& c) {
    goto L_f56d;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f56d:
    X86_TICK(c, 39);
    // 00f56d  shl eax, 0x10
    X86_AT(c, 0xf56du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f570  shl ebx, 0x10
    X86_AT(c, 0xf570u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f573  mov ax, word ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf573u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))));
    // 00f57b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xf57bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf56du, "ran off the end of a function");
}
void f_0000f570(X86Cpu& c) {
    goto L_f570;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f570:
    X86_TICK(c, 36);
    // 00f570  shl ebx, 0x10
    X86_AT(c, 0xf570u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f573  mov ax, word ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf573u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))));
    // 00f57b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xf57bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf570u, "ran off the end of a function");
}
void f_0000f573(X86Cpu& c) {
    goto L_f573;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f573:
    X86_TICK(c, 33);
    // 00f573  mov ax, word ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf573u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))));
    // 00f57b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xf57bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf573u, "ran off the end of a function");
}
void f_0000f57b(X86Cpu& c) {
    goto L_f57b;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f57b:
    X86_TICK(c, 29);
    // 00f57b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xf57bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf57bu, "ran off the end of a function");
}
void f_0000f583(X86Cpu& c) {
    goto L_f583;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f583:
    X86_TICK(c, 27);
    // 00f583  mov bx, ax
    X86_AT(c, 0xf583u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf583u, "ran off the end of a function");
}
void f_0000f586(X86Cpu& c) {
    goto L_f586;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f586:
    X86_TICK(c, 25);
    // 00f586  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf586u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf586u, "ran off the end of a function");
}
void f_0000f58e(X86Cpu& c) {
    goto L_f58e;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f58e:
    X86_TICK(c, 19);
    // 00f58e  dec bx
    X86_AT(c, 0xf58eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf58eu, "ran off the end of a function");
}
void f_0000f590(X86Cpu& c) {
    goto L_f590;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f590:
    X86_TICK(c, 17);
    // 00f590  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0xf590u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf590u, "ran off the end of a function");
}
}

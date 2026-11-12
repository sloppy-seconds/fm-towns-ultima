#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000f40b(X86Cpu& c) {
    goto L_f40b;
L_f3b8:
    X86_TICK(c, 9);
    // 00f3b8  or esi, 0x2000
    X86_AT(c, 0xf3b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 00f3be  jmp 0xf436
    X86_AT(c, 0xf3beu);
    goto L_f436;
L_f3c0:
    X86_TICK(c, 9);
    // 00f3c0  and esi, 0xffffdfff
    X86_AT(c, 0xf3c0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFDFFFu, 4); }
    // 00f3c6  jmp 0xf436
    X86_AT(c, 0xf3c6u);
    goto L_f436;
L_f40b:
    X86_TICK(c, 22);
    // 00f40b  shld si, ax, 4
    X86_AT(c, 0xf40bu);
    { uint32_t v = (c.r[6] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[0] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 6, r); }
    // 00f410  shl ax, 5
    X86_AT(c, 0xf410u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 00f414  shld dx, ax, 2
    X86_AT(c, 0xf414u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[0] & 0xFFFFu), 0x2u, 2, w); if (w) s16(c, 2, r); }
    // 00f419  shl ax, 2
    X86_AT(c, 0xf419u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 00f41d  shld si, ax, 0xa
    X86_AT(c, 0xf41du);
    { uint32_t v = (c.r[6] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[0] & 0xFFFFu), 0xAu, 2, w); if (w) s16(c, 6, r); }
    // 00f422  cmp dl, 9
    X86_AT(c, 0xf422u);
    (void)x86_sub(c, g8(c, 2), 0x9u, 0, 1);
    // 00f425  je 0xf3c0
    X86_AT(c, 0xf425u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f427  cmp dl, 0xa
    X86_AT(c, 0xf427u);
    (void)x86_sub(c, g8(c, 2), 0xAu, 0, 1);
    // 00f42a  je 0xf3c0
    X86_AT(c, 0xf42au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f42c  cmp dl, 0xb
    X86_AT(c, 0xf42cu);
    (void)x86_sub(c, g8(c, 2), 0xBu, 0, 1);
    // 00f42f  je 0xf3b8
    X86_AT(c, 0xf42fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
    X86_TICK(c, 7);
    // 00f431  cmp dl, 0x1f
    X86_AT(c, 0xf431u);
    (void)x86_sub(c, g8(c, 2), 0x1Fu, 0, 1);
    // 00f434  je 0xf3b8
    X86_AT(c, 0xf434u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
L_f436:
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf40bu, "ran off the end of a function");
}
void f_0000f410(X86Cpu& c) {
    goto L_f410;
L_f3b8:
    X86_TICK(c, 9);
    // 00f3b8  or esi, 0x2000
    X86_AT(c, 0xf3b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 00f3be  jmp 0xf436
    X86_AT(c, 0xf3beu);
    goto L_f436;
L_f3c0:
    X86_TICK(c, 9);
    // 00f3c0  and esi, 0xffffdfff
    X86_AT(c, 0xf3c0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFDFFFu, 4); }
    // 00f3c6  jmp 0xf436
    X86_AT(c, 0xf3c6u);
    goto L_f436;
L_f410:
    X86_TICK(c, 19);
    // 00f410  shl ax, 5
    X86_AT(c, 0xf410u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 00f414  shld dx, ax, 2
    X86_AT(c, 0xf414u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[0] & 0xFFFFu), 0x2u, 2, w); if (w) s16(c, 2, r); }
    // 00f419  shl ax, 2
    X86_AT(c, 0xf419u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 00f41d  shld si, ax, 0xa
    X86_AT(c, 0xf41du);
    { uint32_t v = (c.r[6] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[0] & 0xFFFFu), 0xAu, 2, w); if (w) s16(c, 6, r); }
    // 00f422  cmp dl, 9
    X86_AT(c, 0xf422u);
    (void)x86_sub(c, g8(c, 2), 0x9u, 0, 1);
    // 00f425  je 0xf3c0
    X86_AT(c, 0xf425u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f427  cmp dl, 0xa
    X86_AT(c, 0xf427u);
    (void)x86_sub(c, g8(c, 2), 0xAu, 0, 1);
    // 00f42a  je 0xf3c0
    X86_AT(c, 0xf42au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f42c  cmp dl, 0xb
    X86_AT(c, 0xf42cu);
    (void)x86_sub(c, g8(c, 2), 0xBu, 0, 1);
    // 00f42f  je 0xf3b8
    X86_AT(c, 0xf42fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
    X86_TICK(c, 7);
    // 00f431  cmp dl, 0x1f
    X86_AT(c, 0xf431u);
    (void)x86_sub(c, g8(c, 2), 0x1Fu, 0, 1);
    // 00f434  je 0xf3b8
    X86_AT(c, 0xf434u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
L_f436:
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf410u, "ran off the end of a function");
}
void f_0000f414(X86Cpu& c) {
    goto L_f414;
L_f3b8:
    X86_TICK(c, 9);
    // 00f3b8  or esi, 0x2000
    X86_AT(c, 0xf3b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 00f3be  jmp 0xf436
    X86_AT(c, 0xf3beu);
    goto L_f436;
L_f3c0:
    X86_TICK(c, 9);
    // 00f3c0  and esi, 0xffffdfff
    X86_AT(c, 0xf3c0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFDFFFu, 4); }
    // 00f3c6  jmp 0xf436
    X86_AT(c, 0xf3c6u);
    goto L_f436;
L_f414:
    X86_TICK(c, 16);
    // 00f414  shld dx, ax, 2
    X86_AT(c, 0xf414u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[0] & 0xFFFFu), 0x2u, 2, w); if (w) s16(c, 2, r); }
    // 00f419  shl ax, 2
    X86_AT(c, 0xf419u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 00f41d  shld si, ax, 0xa
    X86_AT(c, 0xf41du);
    { uint32_t v = (c.r[6] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[0] & 0xFFFFu), 0xAu, 2, w); if (w) s16(c, 6, r); }
    // 00f422  cmp dl, 9
    X86_AT(c, 0xf422u);
    (void)x86_sub(c, g8(c, 2), 0x9u, 0, 1);
    // 00f425  je 0xf3c0
    X86_AT(c, 0xf425u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f427  cmp dl, 0xa
    X86_AT(c, 0xf427u);
    (void)x86_sub(c, g8(c, 2), 0xAu, 0, 1);
    // 00f42a  je 0xf3c0
    X86_AT(c, 0xf42au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f42c  cmp dl, 0xb
    X86_AT(c, 0xf42cu);
    (void)x86_sub(c, g8(c, 2), 0xBu, 0, 1);
    // 00f42f  je 0xf3b8
    X86_AT(c, 0xf42fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
    X86_TICK(c, 7);
    // 00f431  cmp dl, 0x1f
    X86_AT(c, 0xf431u);
    (void)x86_sub(c, g8(c, 2), 0x1Fu, 0, 1);
    // 00f434  je 0xf3b8
    X86_AT(c, 0xf434u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
L_f436:
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf414u, "ran off the end of a function");
}
void f_0000f419(X86Cpu& c) {
    goto L_f419;
L_f3b8:
    X86_TICK(c, 9);
    // 00f3b8  or esi, 0x2000
    X86_AT(c, 0xf3b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 00f3be  jmp 0xf436
    X86_AT(c, 0xf3beu);
    goto L_f436;
L_f3c0:
    X86_TICK(c, 9);
    // 00f3c0  and esi, 0xffffdfff
    X86_AT(c, 0xf3c0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFDFFFu, 4); }
    // 00f3c6  jmp 0xf436
    X86_AT(c, 0xf3c6u);
    goto L_f436;
L_f419:
    X86_TICK(c, 13);
    // 00f419  shl ax, 2
    X86_AT(c, 0xf419u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 00f41d  shld si, ax, 0xa
    X86_AT(c, 0xf41du);
    { uint32_t v = (c.r[6] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[0] & 0xFFFFu), 0xAu, 2, w); if (w) s16(c, 6, r); }
    // 00f422  cmp dl, 9
    X86_AT(c, 0xf422u);
    (void)x86_sub(c, g8(c, 2), 0x9u, 0, 1);
    // 00f425  je 0xf3c0
    X86_AT(c, 0xf425u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f427  cmp dl, 0xa
    X86_AT(c, 0xf427u);
    (void)x86_sub(c, g8(c, 2), 0xAu, 0, 1);
    // 00f42a  je 0xf3c0
    X86_AT(c, 0xf42au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f42c  cmp dl, 0xb
    X86_AT(c, 0xf42cu);
    (void)x86_sub(c, g8(c, 2), 0xBu, 0, 1);
    // 00f42f  je 0xf3b8
    X86_AT(c, 0xf42fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
    X86_TICK(c, 7);
    // 00f431  cmp dl, 0x1f
    X86_AT(c, 0xf431u);
    (void)x86_sub(c, g8(c, 2), 0x1Fu, 0, 1);
    // 00f434  je 0xf3b8
    X86_AT(c, 0xf434u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
L_f436:
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf419u, "ran off the end of a function");
}
void f_0000f41d(X86Cpu& c) {
    goto L_f41d;
L_f3b8:
    X86_TICK(c, 9);
    // 00f3b8  or esi, 0x2000
    X86_AT(c, 0xf3b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 00f3be  jmp 0xf436
    X86_AT(c, 0xf3beu);
    goto L_f436;
L_f3c0:
    X86_TICK(c, 9);
    // 00f3c0  and esi, 0xffffdfff
    X86_AT(c, 0xf3c0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFDFFFu, 4); }
    // 00f3c6  jmp 0xf436
    X86_AT(c, 0xf3c6u);
    goto L_f436;
L_f41d:
    X86_TICK(c, 10);
    // 00f41d  shld si, ax, 0xa
    X86_AT(c, 0xf41du);
    { uint32_t v = (c.r[6] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[0] & 0xFFFFu), 0xAu, 2, w); if (w) s16(c, 6, r); }
    // 00f422  cmp dl, 9
    X86_AT(c, 0xf422u);
    (void)x86_sub(c, g8(c, 2), 0x9u, 0, 1);
    // 00f425  je 0xf3c0
    X86_AT(c, 0xf425u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f427  cmp dl, 0xa
    X86_AT(c, 0xf427u);
    (void)x86_sub(c, g8(c, 2), 0xAu, 0, 1);
    // 00f42a  je 0xf3c0
    X86_AT(c, 0xf42au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f42c  cmp dl, 0xb
    X86_AT(c, 0xf42cu);
    (void)x86_sub(c, g8(c, 2), 0xBu, 0, 1);
    // 00f42f  je 0xf3b8
    X86_AT(c, 0xf42fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
    X86_TICK(c, 7);
    // 00f431  cmp dl, 0x1f
    X86_AT(c, 0xf431u);
    (void)x86_sub(c, g8(c, 2), 0x1Fu, 0, 1);
    // 00f434  je 0xf3b8
    X86_AT(c, 0xf434u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
L_f436:
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf41du, "ran off the end of a function");
}
void f_0000f422(X86Cpu& c) {
    goto L_f422;
L_f3b8:
    X86_TICK(c, 9);
    // 00f3b8  or esi, 0x2000
    X86_AT(c, 0xf3b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 00f3be  jmp 0xf436
    X86_AT(c, 0xf3beu);
    goto L_f436;
L_f3c0:
    X86_TICK(c, 9);
    // 00f3c0  and esi, 0xffffdfff
    X86_AT(c, 0xf3c0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFDFFFu, 4); }
    // 00f3c6  jmp 0xf436
    X86_AT(c, 0xf3c6u);
    goto L_f436;
L_f422:
    X86_TICK(c, 7);
    // 00f422  cmp dl, 9
    X86_AT(c, 0xf422u);
    (void)x86_sub(c, g8(c, 2), 0x9u, 0, 1);
    // 00f425  je 0xf3c0
    X86_AT(c, 0xf425u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f427  cmp dl, 0xa
    X86_AT(c, 0xf427u);
    (void)x86_sub(c, g8(c, 2), 0xAu, 0, 1);
    // 00f42a  je 0xf3c0
    X86_AT(c, 0xf42au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f42c  cmp dl, 0xb
    X86_AT(c, 0xf42cu);
    (void)x86_sub(c, g8(c, 2), 0xBu, 0, 1);
    // 00f42f  je 0xf3b8
    X86_AT(c, 0xf42fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
    X86_TICK(c, 7);
    // 00f431  cmp dl, 0x1f
    X86_AT(c, 0xf431u);
    (void)x86_sub(c, g8(c, 2), 0x1Fu, 0, 1);
    // 00f434  je 0xf3b8
    X86_AT(c, 0xf434u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
L_f436:
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf422u, "ran off the end of a function");
}
void f_0000f425(X86Cpu& c) {
    goto L_f425;
L_f3b8:
    X86_TICK(c, 9);
    // 00f3b8  or esi, 0x2000
    X86_AT(c, 0xf3b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 00f3be  jmp 0xf436
    X86_AT(c, 0xf3beu);
    goto L_f436;
L_f3c0:
    X86_TICK(c, 9);
    // 00f3c0  and esi, 0xffffdfff
    X86_AT(c, 0xf3c0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFDFFFu, 4); }
    // 00f3c6  jmp 0xf436
    X86_AT(c, 0xf3c6u);
    goto L_f436;
L_f425:
    X86_TICK(c, 5);
    // 00f425  je 0xf3c0
    X86_AT(c, 0xf425u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f427  cmp dl, 0xa
    X86_AT(c, 0xf427u);
    (void)x86_sub(c, g8(c, 2), 0xAu, 0, 1);
    // 00f42a  je 0xf3c0
    X86_AT(c, 0xf42au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f42c  cmp dl, 0xb
    X86_AT(c, 0xf42cu);
    (void)x86_sub(c, g8(c, 2), 0xBu, 0, 1);
    // 00f42f  je 0xf3b8
    X86_AT(c, 0xf42fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
    X86_TICK(c, 7);
    // 00f431  cmp dl, 0x1f
    X86_AT(c, 0xf431u);
    (void)x86_sub(c, g8(c, 2), 0x1Fu, 0, 1);
    // 00f434  je 0xf3b8
    X86_AT(c, 0xf434u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
L_f436:
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf425u, "ran off the end of a function");
}
void f_0000f427(X86Cpu& c) {
    goto L_f427;
L_f3b8:
    X86_TICK(c, 9);
    // 00f3b8  or esi, 0x2000
    X86_AT(c, 0xf3b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 00f3be  jmp 0xf436
    X86_AT(c, 0xf3beu);
    goto L_f436;
L_f3c0:
    X86_TICK(c, 9);
    // 00f3c0  and esi, 0xffffdfff
    X86_AT(c, 0xf3c0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFDFFFu, 4); }
    // 00f3c6  jmp 0xf436
    X86_AT(c, 0xf3c6u);
    goto L_f436;
L_f427:
    X86_TICK(c, 7);
    // 00f427  cmp dl, 0xa
    X86_AT(c, 0xf427u);
    (void)x86_sub(c, g8(c, 2), 0xAu, 0, 1);
    // 00f42a  je 0xf3c0
    X86_AT(c, 0xf42au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f42c  cmp dl, 0xb
    X86_AT(c, 0xf42cu);
    (void)x86_sub(c, g8(c, 2), 0xBu, 0, 1);
    // 00f42f  je 0xf3b8
    X86_AT(c, 0xf42fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
    X86_TICK(c, 7);
    // 00f431  cmp dl, 0x1f
    X86_AT(c, 0xf431u);
    (void)x86_sub(c, g8(c, 2), 0x1Fu, 0, 1);
    // 00f434  je 0xf3b8
    X86_AT(c, 0xf434u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
L_f436:
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf427u, "ran off the end of a function");
}
void f_0000f42a(X86Cpu& c) {
    goto L_f42a;
L_f3b8:
    X86_TICK(c, 9);
    // 00f3b8  or esi, 0x2000
    X86_AT(c, 0xf3b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 00f3be  jmp 0xf436
    X86_AT(c, 0xf3beu);
    goto L_f436;
L_f3c0:
    X86_TICK(c, 9);
    // 00f3c0  and esi, 0xffffdfff
    X86_AT(c, 0xf3c0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFDFFFu, 4); }
    // 00f3c6  jmp 0xf436
    X86_AT(c, 0xf3c6u);
    goto L_f436;
L_f42a:
    X86_TICK(c, 5);
    // 00f42a  je 0xf3c0
    X86_AT(c, 0xf42au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3c0u); goto L_f3c0; }
    X86_TICK(c, 7);
    // 00f42c  cmp dl, 0xb
    X86_AT(c, 0xf42cu);
    (void)x86_sub(c, g8(c, 2), 0xBu, 0, 1);
    // 00f42f  je 0xf3b8
    X86_AT(c, 0xf42fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
    X86_TICK(c, 7);
    // 00f431  cmp dl, 0x1f
    X86_AT(c, 0xf431u);
    (void)x86_sub(c, g8(c, 2), 0x1Fu, 0, 1);
    // 00f434  je 0xf3b8
    X86_AT(c, 0xf434u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
L_f436:
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf42au, "ran off the end of a function");
}
void f_0000f42c(X86Cpu& c) {
    goto L_f42c;
L_f3b8:
    X86_TICK(c, 9);
    // 00f3b8  or esi, 0x2000
    X86_AT(c, 0xf3b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 00f3be  jmp 0xf436
    X86_AT(c, 0xf3beu);
    goto L_f436;
L_f42c:
    X86_TICK(c, 7);
    // 00f42c  cmp dl, 0xb
    X86_AT(c, 0xf42cu);
    (void)x86_sub(c, g8(c, 2), 0xBu, 0, 1);
    // 00f42f  je 0xf3b8
    X86_AT(c, 0xf42fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
    X86_TICK(c, 7);
    // 00f431  cmp dl, 0x1f
    X86_AT(c, 0xf431u);
    (void)x86_sub(c, g8(c, 2), 0x1Fu, 0, 1);
    // 00f434  je 0xf3b8
    X86_AT(c, 0xf434u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
L_f436:
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf42cu, "ran off the end of a function");
}
void f_0000f42f(X86Cpu& c) {
    goto L_f42f;
L_f3b8:
    X86_TICK(c, 9);
    // 00f3b8  or esi, 0x2000
    X86_AT(c, 0xf3b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 00f3be  jmp 0xf436
    X86_AT(c, 0xf3beu);
    goto L_f436;
L_f42f:
    X86_TICK(c, 5);
    // 00f42f  je 0xf3b8
    X86_AT(c, 0xf42fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
    X86_TICK(c, 7);
    // 00f431  cmp dl, 0x1f
    X86_AT(c, 0xf431u);
    (void)x86_sub(c, g8(c, 2), 0x1Fu, 0, 1);
    // 00f434  je 0xf3b8
    X86_AT(c, 0xf434u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
L_f436:
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf42fu, "ran off the end of a function");
}
void f_0000f431(X86Cpu& c) {
    goto L_f431;
L_f3b8:
    X86_TICK(c, 9);
    // 00f3b8  or esi, 0x2000
    X86_AT(c, 0xf3b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 00f3be  jmp 0xf436
    X86_AT(c, 0xf3beu);
    goto L_f436;
L_f431:
    X86_TICK(c, 7);
    // 00f431  cmp dl, 0x1f
    X86_AT(c, 0xf431u);
    (void)x86_sub(c, g8(c, 2), 0x1Fu, 0, 1);
    // 00f434  je 0xf3b8
    X86_AT(c, 0xf434u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
L_f436:
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf431u, "ran off the end of a function");
}
void f_0000f434(X86Cpu& c) {
    goto L_f434;
L_f3b8:
    X86_TICK(c, 9);
    // 00f3b8  or esi, 0x2000
    X86_AT(c, 0xf3b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 00f3be  jmp 0xf436
    X86_AT(c, 0xf3beu);
    goto L_f436;
L_f434:
    X86_TICK(c, 5);
    // 00f434  je 0xf3b8
    X86_AT(c, 0xf434u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf3b8u); goto L_f3b8; }
L_f436:
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf434u, "ran off the end of a function");
}
void f_0000f436(X86Cpu& c) {
    X86_TICK(c, 137);
    // 00f436  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0xf436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf436u, "ran off the end of a function");
}
void f_0000f43e(X86Cpu& c) {
    X86_TICK(c, 131);
    // 00f43e  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf43eu);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf43eu, "ran off the end of a function");
}
void f_0000f445(X86Cpu& c) {
    X86_TICK(c, 125);
    // 00f445  add esi, eax
    X86_AT(c, 0xf445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf445u, "ran off the end of a function");
}
void f_0000f447(X86Cpu& c) {
    X86_TICK(c, 123);
    // 00f447  mov dword ptr gs:[ebp + 0x370], 0x100010
    X86_AT(c, 0xf447u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x100010u);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf447u, "ran off the end of a function");
}
void f_0000f452(X86Cpu& c) {
    X86_TICK(c, 121);
    // 00f452  mov eax, dword ptr gs:[ebp + 0x354]
    X86_AT(c, 0xf452u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)));
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf452u, "ran off the end of a function");
}
void f_0000f459(X86Cpu& c) {
    X86_TICK(c, 117);
    // 00f459  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf459u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf459u, "ran off the end of a function");
}
void f_0000f460(X86Cpu& c) {
    X86_TICK(c, 115);
    // 00f460  mov eax, dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0xf460u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)));
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf460u, "ran off the end of a function");
}
void f_0000f467(X86Cpu& c) {
    X86_TICK(c, 111);
    // 00f467  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf467u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf467u, "ran off the end of a function");
}
void f_0000f46e(X86Cpu& c) {
    X86_TICK(c, 109);
    // 00f46e  nop 
    X86_AT(c, 0xf46eu);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf46eu, "ran off the end of a function");
}
void f_0000f46f(X86Cpu& c) {
    X86_TICK(c, 107);
    // 00f46f  nop 
    X86_AT(c, 0xf46fu);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf46fu, "ran off the end of a function");
}
void f_0000f470(X86Cpu& c) {
    X86_TICK(c, 105);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf470u, "ran off the end of a function");
}
void f_0000f478(X86Cpu& c) {
    X86_TICK(c, 99);
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf478u, "ran off the end of a function");
}
void f_0000f47b(X86Cpu& c) {
    X86_TICK(c, 97);
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf47bu, "ran off the end of a function");
}
void f_0000f47e(X86Cpu& c) {
    X86_TICK(c, 94);
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
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
    x86_fault(c, 0xf47eu, "ran off the end of a function");
}
}

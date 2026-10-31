#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000a341(X86Cpu& c) {
    goto L_a341;
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
    X86_TICK(c, 26);
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
L_a341:
    X86_TICK(c, 22);
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
    x86_fault(c, 0xa341u, "ran off the end of a function");
}
void f_0000a343(X86Cpu& c) {
    goto L_a343;
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
    X86_TICK(c, 28);
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
L_a343:
    X86_TICK(c, 20);
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
    x86_fault(c, 0xa343u, "ran off the end of a function");
}
void f_0000a345(X86Cpu& c) {
    goto L_a345;
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
    X86_TICK(c, 30);
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
L_a345:
    X86_TICK(c, 18);
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
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
    x86_fault(c, 0xa345u, "ran off the end of a function");
}
void f_0000a346(X86Cpu& c) {
    goto L_a346;
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
    X86_TICK(c, 37);
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
L_a346:
    X86_TICK(c, 11);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
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
    x86_fault(c, 0xa346u, "ran off the end of a function");
}
void f_0000a349(X86Cpu& c) {
    goto L_a349;
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
    X86_TICK(c, 43);
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
L_a349:
    X86_TICK(c, 5);
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
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
    x86_fault(c, 0xa349u, "ran off the end of a function");
}
void f_0000a34b(X86Cpu& c) {
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
    x86_fault(c, 0xa34bu, "ran off the end of a function");
}
void f_0000a34d(X86Cpu& c) {
    X86_TICK(c, 33);
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
    x86_fault(c, 0xa34du, "ran off the end of a function");
}
void f_0000a350(X86Cpu& c) {
    X86_TICK(c, 29);
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
    x86_fault(c, 0xa350u, "ran off the end of a function");
}
void f_0000a353(X86Cpu& c) {
    X86_TICK(c, 26);
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
    x86_fault(c, 0xa353u, "ran off the end of a function");
}
void f_0000a354(X86Cpu& c) {
    X86_TICK(c, 24);
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
    x86_fault(c, 0xa354u, "ran off the end of a function");
}
void f_0000a35b(X86Cpu& c) {
    X86_TICK(c, 20);
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
    x86_fault(c, 0xa35bu, "ran off the end of a function");
}
void f_0000a35e(X86Cpu& c) {
    X86_TICK(c, 18);
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
    x86_fault(c, 0xa35eu, "ran off the end of a function");
}
void f_0000a366(X86Cpu& c) {
    X86_TICK(c, 14);
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
    x86_fault(c, 0xa366u, "ran off the end of a function");
}
void f_0000a367(X86Cpu& c) {
    X86_TICK(c, 12);
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
    x86_fault(c, 0xa367u, "ran off the end of a function");
}
void f_0000a368(X86Cpu& c) {
    X86_TICK(c, 10);
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
    x86_fault(c, 0xa368u, "ran off the end of a function");
}
void f_0000a36f(X86Cpu& c) {
    X86_TICK(c, 4);
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
    x86_fault(c, 0xa36fu, "ran off the end of a function");
}
void f_0000a371(X86Cpu& c) {
    X86_TICK(c, 2);
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
    x86_fault(c, 0xa371u, "ran off the end of a function");
}
void f_0000a373(X86Cpu& c) {
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
    x86_fault(c, 0xa373u, "ran off the end of a function");
}
void f_0000a376(X86Cpu& c) {
    goto L_a376;
L_a373:
    X86_TICK(c, 3);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
L_a376:
    X86_TICK(c, 7);
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
    x86_fault(c, 0xa376u, "ran off the end of a function");
}
void f_0000a37b(X86Cpu& c) {
    goto L_a37b;
L_a373:
    X86_TICK(c, 5);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
L_a37b:
    X86_TICK(c, 5);
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
    x86_fault(c, 0xa37bu, "ran off the end of a function");
}
void f_0000a37d(X86Cpu& c) {
    goto L_a37d;
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
L_a37d:
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
    x86_fault(c, 0xa37du, "ran off the end of a function");
}
void f_0000a380(X86Cpu& c) {
    goto L_a380;
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
    x86_fault(c, 0xa380u, "ran off the end of a function");
}
void f_0000a383(X86Cpu& c) {
    goto L_a383;
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
    X86_TICK(c, 3);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
L_a383:
    X86_TICK(c, 7);
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
    x86_fault(c, 0xa383u, "ran off the end of a function");
}
void f_0000a385(X86Cpu& c) {
    goto L_a385;
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
    X86_TICK(c, 5);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
L_a385:
    X86_TICK(c, 5);
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
    x86_fault(c, 0xa385u, "ran off the end of a function");
}
void f_0000a387(X86Cpu& c) {
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
    x86_fault(c, 0xa387u, "ran off the end of a function");
}
void f_0000a389(X86Cpu& c) {
    X86_TICK(c, 44);
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
    x86_fault(c, 0xa389u, "ran off the end of a function");
}
void f_0000a38a(X86Cpu& c) {
    X86_TICK(c, 40);
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
    x86_fault(c, 0xa38au, "ran off the end of a function");
}
void f_0000a38b(X86Cpu& c) {
    X86_TICK(c, 36);
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
    x86_fault(c, 0xa38bu, "ran off the end of a function");
}
void f_0000a38d(X86Cpu& c) {
    X86_TICK(c, 34);
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
    x86_fault(c, 0xa38du, "ran off the end of a function");
}
void f_0000a38f(X86Cpu& c) {
    X86_TICK(c, 32);
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
    x86_fault(c, 0xa38fu, "ran off the end of a function");
}
void f_0000a392(X86Cpu& c) {
    X86_TICK(c, 28);
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
    x86_fault(c, 0xa392u, "ran off the end of a function");
}
void f_0000a394(X86Cpu& c) {
    X86_TICK(c, 26);
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
    x86_fault(c, 0xa394u, "ran off the end of a function");
}
void f_0000a396(X86Cpu& c) {
    X86_TICK(c, 24);
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
    x86_fault(c, 0xa396u, "ran off the end of a function");
}
void f_0000a397(X86Cpu& c) {
    X86_TICK(c, 20);
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
    x86_fault(c, 0xa397u, "ran off the end of a function");
}
void f_0000a399(X86Cpu& c) {
    X86_TICK(c, 18);
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
    x86_fault(c, 0xa399u, "ran off the end of a function");
}
void f_0000a39b(X86Cpu& c) {
    X86_TICK(c, 16);
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa39bu, "ran off the end of a function");
}
void f_0000a39e(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa39eu, "ran off the end of a function");
}
void f_0000a39f(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa39fu, "ran off the end of a function");
}
void f_0000a598(X86Cpu& c) {
    goto L_a598;
L_8170:
    X86_TICK(c, 7);
    // 008170  call 0xb930
    X86_AT(c, 0x8170u);
    push32(c, 0x8175u); f_0000b930(c); X86_RET(c, 0x8175u);
    X86_TICK(c, 5);
    // 008175  jae 0x8180
    X86_AT(c, 0x8175u);
    if (x86_cc(c, 3)) { goto L_8180; }
    X86_TICK(c, 10);
    // 008177  ret 
    X86_AT(c, 0x8177u);
    c.eip = pop32(c); return;
L_8180:
    X86_TICK(c, 58);
    // 008180  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x8180u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 008184  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8184u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00818c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x818cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008191  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8191u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008195  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8195u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_a598:
    X86_TICK(c, 48);
    // 00a598  mov esi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0xa598u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 00a59f  movzx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa59fu);
    c.r[7] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00a5a7  mov eax, edi
    X86_AT(c, 0xa5a7u);
    c.r[0] = c.r[7];
    // 00a5a9  add edi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0xa5a9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 00a5b0  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa5b0u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00a5b8  sub ecx, eax
    X86_AT(c, 0xa5b8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00a5ba  inc ecx
    X86_AT(c, 0xa5bau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00a5bb  sub ax, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0xa5bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 00a5c3  add esi, eax
    X86_AT(c, 0xa5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00a5c5  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa5c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a5cd  je 0xa602
    X86_AT(c, 0xa5cdu);
    if (x86_cc(c, 4)) { goto L_a602; }
    X86_TICK(c, 19);
    // 00a5cf  push ecx
    X86_AT(c, 0xa5cfu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a5d0  push edi
    X86_AT(c, 0xa5d0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00a5d1  mov bx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa5d1u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a5d9  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xa5d9u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00a5e1  call 0x7f18
    X86_AT(c, 0xa5e1u);
    push32(c, 0xa5e6u); f_00007f18(c); X86_RET(c, 0xa5e6u);
    X86_TICK(c, 23);
    // 00a5e6  mov edx, edi
    X86_AT(c, 0xa5e6u);
    c.r[2] = c.r[7];
    // 00a5e8  pop edi
    X86_AT(c, 0xa5e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00a5e9  mov cl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa5e9u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a5f0  and cl, 0x1f
    X86_AT(c, 0xa5f0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00a5f3  mov eax, 0x80000000
    X86_AT(c, 0xa5f3u);
    c.r[0] = 0x80000000u;
    // 00a5f8  shr eax, cl
    X86_AT(c, 0xa5f8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a5fa  mov dword ptr gs:[ebp + 0x41c], eax
    X86_AT(c, 0xa5fau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), c.r[0]);
    // 00a601  pop ecx
    X86_AT(c, 0xa601u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_a602:
    X86_TICK(c, 11);
    // 00a602  mov eax, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0xa602u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)));
    // 00a609  jmp dword ptr cs:[eax*4 + 0xa614]
    X86_AT(c, 0xa609u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xA614u)));
      switch (t) {
      case 0x8170u: X86_POLL(c, 0x8170u); goto L_8170;
      case 0xa654u: goto L_a654;
      case 0xa658u: goto L_a658;
      case 0xa688u: goto L_a688;
      case 0xa6c0u: goto L_a6c0;
      case 0xa6f8u: goto L_a6f8;
      case 0xa730u: goto L_a730;
      case 0xa768u: goto L_a768;
      case 0xa7a8u: goto L_a7a8;
      default: x86_jump(c, t); return; } }
L_a654:
    X86_TICK(c, 10);
    // 00a654  ret 
    X86_AT(c, 0xa654u);
    c.eip = pop32(c); return;
L_a658:
    X86_TICK(c, 12);
    // 00a658  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa658u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a660  jne 0xa674
    X86_AT(c, 0xa660u);
    if (x86_cc(c, 5)) { goto L_a674; }
    X86_TICK(c, 33);
    // 00a662  mov eax, ecx
    X86_AT(c, 0xa662u);
    c.r[0] = c.r[1];
    // 00a664  shr ecx, 2
    X86_AT(c, 0xa664u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00a667  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xa667u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00a669  mov ecx, eax
    X86_AT(c, 0xa669u);
    c.r[1] = c.r[0];
    // 00a66b  and ecx, 3
    X86_AT(c, 0xa66bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00a66e  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xa66eu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00a670  ret 
    X86_AT(c, 0xa670u);
    c.eip = pop32(c); return;
L_a674:
    X86_TICK(c, 7);
    // 00a674  call 0x7f38
    X86_AT(c, 0xa674u);
    push32(c, 0xa679u); f_00007f38(c); X86_RET(c, 0xa679u);
    X86_TICK(c, 5);
    // 00a679  jne 0xa680
    X86_AT(c, 0xa679u);
    if (x86_cc(c, 5)) { goto L_a680; }
    X86_TICK(c, 6);
    // 00a67b  mov al, byte ptr [esi]
    X86_AT(c, 0xa67bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a67d  mov byte ptr es:[edi], al
    X86_AT(c, 0xa67du);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 0));
L_a680:
    X86_TICK(c, 11);
    // 00a680  inc esi
    X86_AT(c, 0xa680u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a681  inc edi
    X86_AT(c, 0xa681u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a682  dec ecx
    X86_AT(c, 0xa682u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a683  jne 0xa674
    X86_AT(c, 0xa683u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa674u); goto L_a674; }
    X86_TICK(c, 10);
    // 00a685  ret 
    X86_AT(c, 0xa685u);
    c.eip = pop32(c); return;
L_a688:
    X86_TICK(c, 12);
    // 00a688  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa688u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a690  jne 0xa6ac
    X86_AT(c, 0xa690u);
    if (x86_cc(c, 5)) { goto L_a6ac; }
    X86_TICK(c, 8);
    // 00a692  shr ecx, 1
    X86_AT(c, 0xa692u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a694  jae 0xa69f
    X86_AT(c, 0xa694u);
    if (x86_cc(c, 3)) { goto L_a69f; }
    X86_TICK(c, 23);
    // 00a696  lodsb al, byte ptr [esi]
    X86_AT(c, 0xa696u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00a697  or byte ptr es:[edi], al
    X86_AT(c, 0xa697u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 00a69a  inc edi
    X86_AT(c, 0xa69au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a69b  test ecx, ecx
    X86_AT(c, 0xa69bu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a69d  je 0xa6ab
    X86_AT(c, 0xa69du);
    if (x86_cc(c, 4)) { goto L_a6ab; }
L_a69f:
    X86_TICK(c, 23);
    // 00a69f  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa69fu);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a6a1  or word ptr es:[edi], ax
    X86_AT(c, 0xa6a1u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 00a6a5  add edi, 2
    X86_AT(c, 0xa6a5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a6a8  dec ecx
    X86_AT(c, 0xa6a8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a6a9  jne 0xa69f
    X86_AT(c, 0xa6a9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa69fu); goto L_a69f; }
L_a6ab:
    X86_TICK(c, 10);
    // 00a6ab  ret 
    X86_AT(c, 0xa6abu);
    c.eip = pop32(c); return;
L_a6ac:
    X86_TICK(c, 7);
    // 00a6ac  call 0x7f38
    X86_AT(c, 0xa6acu);
    push32(c, 0xa6b1u); f_00007f38(c); X86_RET(c, 0xa6b1u);
    X86_TICK(c, 5);
    // 00a6b1  jne 0xa6b8
    X86_AT(c, 0xa6b1u);
    if (x86_cc(c, 5)) { goto L_a6b8; }
    X86_TICK(c, 11);
    // 00a6b3  mov al, byte ptr [esi]
    X86_AT(c, 0xa6b3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a6b5  or byte ptr es:[edi], al
    X86_AT(c, 0xa6b5u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
L_a6b8:
    X86_TICK(c, 11);
    // 00a6b8  inc esi
    X86_AT(c, 0xa6b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a6b9  inc edi
    X86_AT(c, 0xa6b9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a6ba  dec ecx
    X86_AT(c, 0xa6bau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a6bb  jne 0xa6ac
    X86_AT(c, 0xa6bbu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa6acu); goto L_a6ac; }
    X86_TICK(c, 10);
    // 00a6bd  ret 
    X86_AT(c, 0xa6bdu);
    c.eip = pop32(c); return;
L_a6c0:
    X86_TICK(c, 12);
    // 00a6c0  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa6c0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a6c8  jne 0xa6e4
    X86_AT(c, 0xa6c8u);
    if (x86_cc(c, 5)) { goto L_a6e4; }
    X86_TICK(c, 8);
    // 00a6ca  shr ecx, 1
    X86_AT(c, 0xa6cau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a6cc  jae 0xa6d7
    X86_AT(c, 0xa6ccu);
    if (x86_cc(c, 3)) { goto L_a6d7; }
    X86_TICK(c, 23);
    // 00a6ce  lodsb al, byte ptr [esi]
    X86_AT(c, 0xa6ceu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00a6cf  and byte ptr es:[edi], al
    X86_AT(c, 0xa6cfu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 0), 1)); }
    // 00a6d2  inc edi
    X86_AT(c, 0xa6d2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a6d3  test ecx, ecx
    X86_AT(c, 0xa6d3u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a6d5  je 0xa6e3
    X86_AT(c, 0xa6d5u);
    if (x86_cc(c, 4)) { goto L_a6e3; }
L_a6d7:
    X86_TICK(c, 23);
    // 00a6d7  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa6d7u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a6d9  and word ptr es:[edi], ax
    X86_AT(c, 0xa6d9u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 00a6dd  add edi, 2
    X86_AT(c, 0xa6ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a6e0  dec ecx
    X86_AT(c, 0xa6e0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a6e1  jne 0xa6d7
    X86_AT(c, 0xa6e1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa6d7u); goto L_a6d7; }
L_a6e3:
    X86_TICK(c, 10);
    // 00a6e3  ret 
    X86_AT(c, 0xa6e3u);
    c.eip = pop32(c); return;
L_a6e4:
    X86_TICK(c, 7);
    // 00a6e4  call 0x7f38
    X86_AT(c, 0xa6e4u);
    push32(c, 0xa6e9u); f_00007f38(c); X86_RET(c, 0xa6e9u);
    X86_TICK(c, 5);
    // 00a6e9  jne 0xa6f0
    X86_AT(c, 0xa6e9u);
    if (x86_cc(c, 5)) { goto L_a6f0; }
    X86_TICK(c, 11);
    // 00a6eb  mov al, byte ptr [esi]
    X86_AT(c, 0xa6ebu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a6ed  and byte ptr es:[edi], al
    X86_AT(c, 0xa6edu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 0), 1)); }
L_a6f0:
    X86_TICK(c, 11);
    // 00a6f0  inc esi
    X86_AT(c, 0xa6f0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a6f1  inc edi
    X86_AT(c, 0xa6f1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a6f2  dec ecx
    X86_AT(c, 0xa6f2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a6f3  jne 0xa6e4
    X86_AT(c, 0xa6f3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa6e4u); goto L_a6e4; }
    X86_TICK(c, 10);
    // 00a6f5  ret 
    X86_AT(c, 0xa6f5u);
    c.eip = pop32(c); return;
L_a6f8:
    X86_TICK(c, 12);
    // 00a6f8  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa6f8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a700  jne 0xa71c
    X86_AT(c, 0xa700u);
    if (x86_cc(c, 5)) { goto L_a71c; }
    X86_TICK(c, 8);
    // 00a702  shr ecx, 1
    X86_AT(c, 0xa702u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a704  jae 0xa70f
    X86_AT(c, 0xa704u);
    if (x86_cc(c, 3)) { goto L_a70f; }
    X86_TICK(c, 23);
    // 00a706  lodsb al, byte ptr [esi]
    X86_AT(c, 0xa706u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00a707  xor byte ptr es:[edi], al
    X86_AT(c, 0xa707u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 00a70a  inc edi
    X86_AT(c, 0xa70au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a70b  test ecx, ecx
    X86_AT(c, 0xa70bu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a70d  je 0xa71b
    X86_AT(c, 0xa70du);
    if (x86_cc(c, 4)) { goto L_a71b; }
L_a70f:
    X86_TICK(c, 23);
    // 00a70f  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa70fu);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a711  xor word ptr es:[edi], ax
    X86_AT(c, 0xa711u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 00a715  add edi, 2
    X86_AT(c, 0xa715u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a718  dec ecx
    X86_AT(c, 0xa718u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a719  jne 0xa70f
    X86_AT(c, 0xa719u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa70fu); goto L_a70f; }
L_a71b:
    X86_TICK(c, 10);
    // 00a71b  ret 
    X86_AT(c, 0xa71bu);
    c.eip = pop32(c); return;
L_a71c:
    X86_TICK(c, 7);
    // 00a71c  call 0x7f38
    X86_AT(c, 0xa71cu);
    push32(c, 0xa721u); f_00007f38(c); X86_RET(c, 0xa721u);
    X86_TICK(c, 5);
    // 00a721  jne 0xa728
    X86_AT(c, 0xa721u);
    if (x86_cc(c, 5)) { goto L_a728; }
    X86_TICK(c, 11);
    // 00a723  mov al, byte ptr [esi]
    X86_AT(c, 0xa723u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a725  xor byte ptr es:[edi], al
    X86_AT(c, 0xa725u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 0), 1)); }
L_a728:
    X86_TICK(c, 11);
    // 00a728  inc esi
    X86_AT(c, 0xa728u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a729  inc edi
    X86_AT(c, 0xa729u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a72a  dec ecx
    X86_AT(c, 0xa72au);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a72b  jne 0xa71c
    X86_AT(c, 0xa72bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa71cu); goto L_a71c; }
    X86_TICK(c, 10);
    // 00a72d  ret 
    X86_AT(c, 0xa72du);
    c.eip = pop32(c); return;
L_a730:
    X86_TICK(c, 12);
    // 00a730  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa730u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a738  jne 0xa754
    X86_AT(c, 0xa738u);
    if (x86_cc(c, 5)) { goto L_a754; }
    X86_TICK(c, 8);
    // 00a73a  shr ecx, 1
    X86_AT(c, 0xa73au);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a73c  jae 0xa746
    X86_AT(c, 0xa73cu);
    if (x86_cc(c, 3)) { goto L_a746; }
    X86_TICK(c, 23);
    // 00a73e  lodsb al, byte ptr [esi]
    X86_AT(c, 0xa73eu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00a73f  not al
    X86_AT(c, 0xa73fu);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 00a741  stosb byte ptr es:[edi], al
    X86_AT(c, 0xa741u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 00a742  test ecx, ecx
    X86_AT(c, 0xa742u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a744  je 0xa751
    X86_AT(c, 0xa744u);
    if (x86_cc(c, 4)) { goto L_a751; }
L_a746:
    X86_TICK(c, 23);
    // 00a746  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa746u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a748  not ax
    X86_AT(c, 0xa748u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, ~v & 0xFFFFu); }
    // 00a74b  stosw word ptr es:[edi], ax
    X86_AT(c, 0xa74bu);
    x86_string(c, 2, 2, 0, 4, 3);
    // 00a74d  dec ecx
    X86_AT(c, 0xa74du);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a74e  jne 0xa746
    X86_AT(c, 0xa74eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa746u); goto L_a746; }
    X86_TICK(c, 10);
    // 00a750  ret 
    X86_AT(c, 0xa750u);
    c.eip = pop32(c); return;
L_a751:
    X86_TICK(c, 10);
    // 00a751  ret 
    X86_AT(c, 0xa751u);
    c.eip = pop32(c); return;
L_a754:
    X86_TICK(c, 7);
    // 00a754  call 0x7f38
    X86_AT(c, 0xa754u);
    push32(c, 0xa759u); f_00007f38(c); X86_RET(c, 0xa759u);
    X86_TICK(c, 5);
    // 00a759  jne 0xa762
    X86_AT(c, 0xa759u);
    if (x86_cc(c, 5)) { goto L_a762; }
    X86_TICK(c, 8);
    // 00a75b  mov al, byte ptr [esi]
    X86_AT(c, 0xa75bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a75d  not al
    X86_AT(c, 0xa75du);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 00a75f  mov byte ptr es:[edi], al
    X86_AT(c, 0xa75fu);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 0));
L_a762:
    X86_TICK(c, 11);
    // 00a762  inc esi
    X86_AT(c, 0xa762u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a763  inc edi
    X86_AT(c, 0xa763u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a764  dec ecx
    X86_AT(c, 0xa764u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a765  jne 0xa754
    X86_AT(c, 0xa765u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa754u); goto L_a754; }
    X86_TICK(c, 10);
    // 00a767  ret 
    X86_AT(c, 0xa767u);
    c.eip = pop32(c); return;
L_a768:
    X86_TICK(c, 12);
    // 00a768  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa768u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a770  jne 0xa788
    X86_AT(c, 0xa770u);
    if (x86_cc(c, 5)) { goto L_a788; }
    X86_TICK(c, 4);
    // 00a772  mov bl, byte ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa772u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))));
L_a779:
    X86_TICK(c, 14);
    // 00a779  lodsb al, byte ptr [esi]
    X86_AT(c, 0xa779u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00a77a  cmp al, bl
    X86_AT(c, 0xa77au);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 00a77c  je 0xa781
    X86_AT(c, 0xa77cu);
    if (x86_cc(c, 4)) { goto L_a781; }
    X86_TICK(c, 2);
    // 00a77e  mov byte ptr es:[edi], al
    X86_AT(c, 0xa77eu);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 0));
L_a781:
    X86_TICK(c, 9);
    // 00a781  inc edi
    X86_AT(c, 0xa781u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a782  dec ecx
    X86_AT(c, 0xa782u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a783  jne 0xa779
    X86_AT(c, 0xa783u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa779u); goto L_a779; }
    X86_TICK(c, 10);
    // 00a785  ret 
    X86_AT(c, 0xa785u);
    c.eip = pop32(c); return;
L_a788:
    X86_TICK(c, 4);
    // 00a788  mov bl, byte ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa788u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))));
L_a78f:
    X86_TICK(c, 7);
    // 00a78f  call 0x7f38
    X86_AT(c, 0xa78fu);
    push32(c, 0xa794u); f_00007f38(c); X86_RET(c, 0xa794u);
    X86_TICK(c, 5);
    // 00a794  jne 0xa79f
    X86_AT(c, 0xa794u);
    if (x86_cc(c, 5)) { goto L_a79f; }
    X86_TICK(c, 11);
    // 00a796  mov al, byte ptr [esi]
    X86_AT(c, 0xa796u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a798  cmp al, bl
    X86_AT(c, 0xa798u);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 00a79a  je 0xa79f
    X86_AT(c, 0xa79au);
    if (x86_cc(c, 4)) { goto L_a79f; }
    X86_TICK(c, 2);
    // 00a79c  mov byte ptr es:[edi], al
    X86_AT(c, 0xa79cu);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 0));
L_a79f:
    X86_TICK(c, 11);
    // 00a79f  inc esi
    X86_AT(c, 0xa79fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a7a0  inc edi
    X86_AT(c, 0xa7a0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a7a1  dec ecx
    X86_AT(c, 0xa7a1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a7a2  jne 0xa78f
    X86_AT(c, 0xa7a2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa78fu); goto L_a78f; }
    X86_TICK(c, 10);
    // 00a7a4  ret 
    X86_AT(c, 0xa7a4u);
    c.eip = pop32(c); return;
L_a7a8:
    X86_TICK(c, 12);
    // 00a7a8  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa7a8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a7b0  jne 0xa7c8
    X86_AT(c, 0xa7b0u);
    if (x86_cc(c, 5)) { goto L_a7c8; }
    X86_TICK(c, 2);
    // 00a7b2  push ecx
    X86_AT(c, 0xa7b2u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_a7b3:
    X86_TICK(c, 11);
    // 00a7b3  mov cl, byte ptr [esi]
    X86_AT(c, 0xa7b3u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a7b5  call 0x7470
    X86_AT(c, 0xa7b5u);
    push32(c, 0xa7bau); f_00007470(c); X86_RET(c, 0xa7bau);
    X86_TICK(c, 15);
    // 00a7ba  inc edi
    X86_AT(c, 0xa7bau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a7bb  inc esi
    X86_AT(c, 0xa7bbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a7bc  dec dword ptr [esp]
    X86_AT(c, 0xa7bcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a7bf  jne 0xa7b3
    X86_AT(c, 0xa7bfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa7b3u); goto L_a7b3; }
    X86_TICK(c, 12);
    // 00a7c1  add esp, 4
    X86_AT(c, 0xa7c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a7c4  ret 
    X86_AT(c, 0xa7c4u);
    c.eip = pop32(c); return;
L_a7c8:
    X86_TICK(c, 2);
    // 00a7c8  push ecx
    X86_AT(c, 0xa7c8u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_a7c9:
    X86_TICK(c, 7);
    // 00a7c9  call 0x7f38
    X86_AT(c, 0xa7c9u);
    push32(c, 0xa7ceu); f_00007f38(c); X86_RET(c, 0xa7ceu);
    X86_TICK(c, 5);
    // 00a7ce  jne 0xa7d7
    X86_AT(c, 0xa7ceu);
    if (x86_cc(c, 5)) { goto L_a7d7; }
    X86_TICK(c, 11);
    // 00a7d0  mov cl, byte ptr [esi]
    X86_AT(c, 0xa7d0u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a7d2  call 0x7470
    X86_AT(c, 0xa7d2u);
    push32(c, 0xa7d7u); f_00007470(c); X86_RET(c, 0xa7d7u);
L_a7d7:
    X86_TICK(c, 15);
    // 00a7d7  inc esi
    X86_AT(c, 0xa7d7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a7d8  inc edi
    X86_AT(c, 0xa7d8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a7d9  dec dword ptr [esp]
    X86_AT(c, 0xa7d9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a7dc  jne 0xa7c9
    X86_AT(c, 0xa7dcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa7c9u); goto L_a7c9; }
    X86_TICK(c, 12);
    // 00a7de  add esp, 4
    X86_AT(c, 0xa7deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a7e1  ret 
    X86_AT(c, 0xa7e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa598u, "ran off the end of a function");
}
void f_0000a7e4(X86Cpu& c) {
    goto L_a7e4;
L_8170:
    X86_TICK(c, 7);
    // 008170  call 0xb930
    X86_AT(c, 0x8170u);
    push32(c, 0x8175u); f_0000b930(c); X86_RET(c, 0x8175u);
    X86_TICK(c, 5);
    // 008175  jae 0x8180
    X86_AT(c, 0x8175u);
    if (x86_cc(c, 3)) { goto L_8180; }
    X86_TICK(c, 10);
    // 008177  ret 
    X86_AT(c, 0x8177u);
    c.eip = pop32(c); return;
L_8180:
    X86_TICK(c, 58);
    // 008180  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x8180u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 008184  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8184u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00818c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x818cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008191  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8191u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008195  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8195u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_a7e4:
    X86_TICK(c, 48);
    // 00a7e4  mov esi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0xa7e4u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 00a7eb  movzx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa7ebu);
    c.r[7] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00a7f3  mov eax, edi
    X86_AT(c, 0xa7f3u);
    c.r[0] = c.r[7];
    // 00a7f5  mov ebx, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0xa7f5u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 00a7fc  lea edi, [ebx + edi*2]
    X86_AT(c, 0xa7fcu);
    c.r[7] = (uint32_t)(c.r[3] + c.r[7] * 2);
    // 00a7ff  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa7ffu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00a807  sub ecx, eax
    X86_AT(c, 0xa807u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00a809  inc ecx
    X86_AT(c, 0xa809u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00a80a  sub ax, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0xa80au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 00a812  lea esi, [esi + eax*2]
    X86_AT(c, 0xa812u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[0] * 2);
    // 00a815  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa815u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a81d  je 0xa852
    X86_AT(c, 0xa81du);
    if (x86_cc(c, 4)) { goto L_a852; }
    X86_TICK(c, 19);
    // 00a81f  push ecx
    X86_AT(c, 0xa81fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a820  push edi
    X86_AT(c, 0xa820u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00a821  mov bx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa821u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a829  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xa829u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00a831  call 0x7f18
    X86_AT(c, 0xa831u);
    push32(c, 0xa836u); f_00007f18(c); X86_RET(c, 0xa836u);
    X86_TICK(c, 23);
    // 00a836  mov edx, edi
    X86_AT(c, 0xa836u);
    c.r[2] = c.r[7];
    // 00a838  pop edi
    X86_AT(c, 0xa838u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00a839  mov cl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa839u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a840  and cl, 0x1f
    X86_AT(c, 0xa840u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00a843  mov eax, 0x80000000
    X86_AT(c, 0xa843u);
    c.r[0] = 0x80000000u;
    // 00a848  shr eax, cl
    X86_AT(c, 0xa848u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a84a  mov dword ptr gs:[ebp + 0x41c], eax
    X86_AT(c, 0xa84au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), c.r[0]);
    // 00a851  pop ecx
    X86_AT(c, 0xa851u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_a852:
    X86_TICK(c, 11);
    // 00a852  mov eax, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0xa852u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)));
    // 00a859  jmp dword ptr cs:[eax*4 + 0xa864]
    X86_AT(c, 0xa859u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xA864u)));
      switch (t) {
      case 0x8170u: X86_POLL(c, 0x8170u); goto L_8170;
      case 0xa8a4u: goto L_a8a4;
      case 0xa8a8u: goto L_a8a8;
      case 0xa8d4u: goto L_a8d4;
      case 0xa914u: goto L_a914;
      case 0xa954u: goto L_a954;
      case 0xa994u: goto L_a994;
      case 0xa9d4u: goto L_a9d4;
      case 0xaa20u: goto L_aa20;
      default: x86_jump(c, t); return; } }
L_a8a4:
    X86_TICK(c, 10);
    // 00a8a4  ret 
    X86_AT(c, 0xa8a4u);
    c.eip = pop32(c); return;
L_a8a8:
    X86_TICK(c, 12);
    // 00a8a8  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa8a8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a8b0  jne 0xa8bc
    X86_AT(c, 0xa8b0u);
    if (x86_cc(c, 5)) { goto L_a8bc; }
    X86_TICK(c, 8);
    // 00a8b2  shr ecx, 1
    X86_AT(c, 0xa8b2u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a8b4  jae 0xa8b8
    X86_AT(c, 0xa8b4u);
    if (x86_cc(c, 3)) { goto L_a8b8; }
    X86_TICK(c, 7);
    // 00a8b6  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xa8b6u);
    x86_string(c, 0, 2, 0, 4, 3);
L_a8b8:
    X86_TICK(c, 17);
    // 00a8b8  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xa8b8u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00a8ba  ret 
    X86_AT(c, 0xa8bau);
    c.eip = pop32(c); return;
L_a8bc:
    X86_TICK(c, 7);
    // 00a8bc  call 0x7f38
    X86_AT(c, 0xa8bcu);
    push32(c, 0xa8c1u); f_00007f38(c); X86_RET(c, 0xa8c1u);
    X86_TICK(c, 5);
    // 00a8c1  jne 0xa8ca
    X86_AT(c, 0xa8c1u);
    if (x86_cc(c, 5)) { goto L_a8ca; }
    X86_TICK(c, 6);
    // 00a8c3  mov ax, word ptr [esi]
    X86_AT(c, 0xa8c3u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a8c6  mov word ptr es:[edi], ax
    X86_AT(c, 0xa8c6u);
    wr16((c.sbase[0] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
L_a8ca:
    X86_TICK(c, 11);
    // 00a8ca  add esi, 2
    X86_AT(c, 0xa8cau);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a8cd  add edi, 2
    X86_AT(c, 0xa8cdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a8d0  dec ecx
    X86_AT(c, 0xa8d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a8d1  jne 0xa8bc
    X86_AT(c, 0xa8d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa8bcu); goto L_a8bc; }
    X86_TICK(c, 10);
    // 00a8d3  ret 
    X86_AT(c, 0xa8d3u);
    c.eip = pop32(c); return;
L_a8d4:
    X86_TICK(c, 12);
    // 00a8d4  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa8d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a8dc  jne 0xa8fc
    X86_AT(c, 0xa8dcu);
    if (x86_cc(c, 5)) { goto L_a8fc; }
    X86_TICK(c, 8);
    // 00a8de  shr ecx, 1
    X86_AT(c, 0xa8deu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a8e0  jae 0xa8ef
    X86_AT(c, 0xa8e0u);
    if (x86_cc(c, 3)) { goto L_a8ef; }
    X86_TICK(c, 23);
    // 00a8e2  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa8e2u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a8e4  or word ptr es:[edi], ax
    X86_AT(c, 0xa8e4u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 00a8e8  add edi, 2
    X86_AT(c, 0xa8e8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a8eb  test ecx, ecx
    X86_AT(c, 0xa8ebu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a8ed  je 0xa8f9
    X86_AT(c, 0xa8edu);
    if (x86_cc(c, 4)) { goto L_a8f9; }
L_a8ef:
    X86_TICK(c, 23);
    // 00a8ef  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa8efu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a8f0  or dword ptr es:[edi], eax
    X86_AT(c, 0xa8f0u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a8f3  add edi, 4
    X86_AT(c, 0xa8f3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a8f6  dec ecx
    X86_AT(c, 0xa8f6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a8f7  jne 0xa8ef
    X86_AT(c, 0xa8f7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa8efu); goto L_a8ef; }
L_a8f9:
    X86_TICK(c, 10);
    // 00a8f9  ret 
    X86_AT(c, 0xa8f9u);
    c.eip = pop32(c); return;
L_a8fc:
    X86_TICK(c, 7);
    // 00a8fc  call 0x7f38
    X86_AT(c, 0xa8fcu);
    push32(c, 0xa901u); f_00007f38(c); X86_RET(c, 0xa901u);
    X86_TICK(c, 5);
    // 00a901  jne 0xa90a
    X86_AT(c, 0xa901u);
    if (x86_cc(c, 5)) { goto L_a90a; }
    X86_TICK(c, 11);
    // 00a903  mov ax, word ptr [esi]
    X86_AT(c, 0xa903u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a906  or word ptr es:[edi], ax
    X86_AT(c, 0xa906u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
L_a90a:
    X86_TICK(c, 11);
    // 00a90a  add esi, 2
    X86_AT(c, 0xa90au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a90d  add edi, 2
    X86_AT(c, 0xa90du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a910  dec ecx
    X86_AT(c, 0xa910u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a911  jne 0xa8fc
    X86_AT(c, 0xa911u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa8fcu); goto L_a8fc; }
    X86_TICK(c, 10);
    // 00a913  ret 
    X86_AT(c, 0xa913u);
    c.eip = pop32(c); return;
L_a914:
    X86_TICK(c, 12);
    // 00a914  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa914u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a91c  jne 0xa93c
    X86_AT(c, 0xa91cu);
    if (x86_cc(c, 5)) { goto L_a93c; }
    X86_TICK(c, 8);
    // 00a91e  shr ecx, 1
    X86_AT(c, 0xa91eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a920  jae 0xa92f
    X86_AT(c, 0xa920u);
    if (x86_cc(c, 3)) { goto L_a92f; }
    X86_TICK(c, 23);
    // 00a922  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa922u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a924  and word ptr es:[edi], ax
    X86_AT(c, 0xa924u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 00a928  add edi, 2
    X86_AT(c, 0xa928u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a92b  test ecx, ecx
    X86_AT(c, 0xa92bu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a92d  je 0xa939
    X86_AT(c, 0xa92du);
    if (x86_cc(c, 4)) { goto L_a939; }
L_a92f:
    X86_TICK(c, 23);
    // 00a92f  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa92fu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a930  and dword ptr es:[edi], eax
    X86_AT(c, 0xa930u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[0], 4)); }
    // 00a933  add edi, 4
    X86_AT(c, 0xa933u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a936  dec ecx
    X86_AT(c, 0xa936u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a937  jne 0xa92f
    X86_AT(c, 0xa937u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa92fu); goto L_a92f; }
L_a939:
    X86_TICK(c, 10);
    // 00a939  ret 
    X86_AT(c, 0xa939u);
    c.eip = pop32(c); return;
L_a93c:
    X86_TICK(c, 7);
    // 00a93c  call 0x7f38
    X86_AT(c, 0xa93cu);
    push32(c, 0xa941u); f_00007f38(c); X86_RET(c, 0xa941u);
    X86_TICK(c, 5);
    // 00a941  jne 0xa94a
    X86_AT(c, 0xa941u);
    if (x86_cc(c, 5)) { goto L_a94a; }
    X86_TICK(c, 11);
    // 00a943  mov ax, word ptr [esi]
    X86_AT(c, 0xa943u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a946  and word ptr es:[edi], ax
    X86_AT(c, 0xa946u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
L_a94a:
    X86_TICK(c, 11);
    // 00a94a  add esi, 2
    X86_AT(c, 0xa94au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a94d  add edi, 2
    X86_AT(c, 0xa94du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a950  dec ecx
    X86_AT(c, 0xa950u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a951  jne 0xa93c
    X86_AT(c, 0xa951u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa93cu); goto L_a93c; }
    X86_TICK(c, 10);
    // 00a953  ret 
    X86_AT(c, 0xa953u);
    c.eip = pop32(c); return;
L_a954:
    X86_TICK(c, 12);
    // 00a954  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa954u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a95c  jne 0xa97c
    X86_AT(c, 0xa95cu);
    if (x86_cc(c, 5)) { goto L_a97c; }
    X86_TICK(c, 8);
    // 00a95e  shr ecx, 1
    X86_AT(c, 0xa95eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a960  jae 0xa96f
    X86_AT(c, 0xa960u);
    if (x86_cc(c, 3)) { goto L_a96f; }
    X86_TICK(c, 23);
    // 00a962  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa962u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a964  xor word ptr es:[edi], ax
    X86_AT(c, 0xa964u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 00a968  add edi, 2
    X86_AT(c, 0xa968u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a96b  test ecx, ecx
    X86_AT(c, 0xa96bu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a96d  je 0xa979
    X86_AT(c, 0xa96du);
    if (x86_cc(c, 4)) { goto L_a979; }
L_a96f:
    X86_TICK(c, 23);
    // 00a96f  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa96fu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a970  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa970u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a973  add edi, 4
    X86_AT(c, 0xa973u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a976  dec ecx
    X86_AT(c, 0xa976u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a977  jne 0xa96f
    X86_AT(c, 0xa977u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa96fu); goto L_a96f; }
L_a979:
    X86_TICK(c, 10);
    // 00a979  ret 
    X86_AT(c, 0xa979u);
    c.eip = pop32(c); return;
L_a97c:
    X86_TICK(c, 7);
    // 00a97c  call 0x7f38
    X86_AT(c, 0xa97cu);
    push32(c, 0xa981u); f_00007f38(c); X86_RET(c, 0xa981u);
    X86_TICK(c, 5);
    // 00a981  jne 0xa98a
    X86_AT(c, 0xa981u);
    if (x86_cc(c, 5)) { goto L_a98a; }
    X86_TICK(c, 11);
    // 00a983  mov ax, word ptr [esi]
    X86_AT(c, 0xa983u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a986  xor word ptr es:[edi], ax
    X86_AT(c, 0xa986u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
L_a98a:
    X86_TICK(c, 11);
    // 00a98a  add esi, 2
    X86_AT(c, 0xa98au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a98d  add edi, 2
    X86_AT(c, 0xa98du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a990  dec ecx
    X86_AT(c, 0xa990u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a991  jne 0xa97c
    X86_AT(c, 0xa991u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa97cu); goto L_a97c; }
    X86_TICK(c, 10);
    // 00a993  ret 
    X86_AT(c, 0xa993u);
    c.eip = pop32(c); return;
L_a994:
    X86_TICK(c, 12);
    // 00a994  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa994u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a99c  jne 0xa9b8
    X86_AT(c, 0xa99cu);
    if (x86_cc(c, 5)) { goto L_a9b8; }
    X86_TICK(c, 8);
    // 00a99e  shr ecx, 1
    X86_AT(c, 0xa99eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a9a0  jae 0xa9ac
    X86_AT(c, 0xa9a0u);
    if (x86_cc(c, 3)) { goto L_a9ac; }
    X86_TICK(c, 23);
    // 00a9a2  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa9a2u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a9a4  not ax
    X86_AT(c, 0xa9a4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, ~v & 0xFFFFu); }
    // 00a9a7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa9a7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a9a8  test ecx, ecx
    X86_AT(c, 0xa9a8u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a9aa  je 0xa9b4
    X86_AT(c, 0xa9aau);
    if (x86_cc(c, 4)) { goto L_a9b4; }
L_a9ac:
    X86_TICK(c, 23);
    // 00a9ac  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa9acu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a9ad  not eax
    X86_AT(c, 0xa9adu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a9af  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa9afu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a9b0  dec ecx
    X86_AT(c, 0xa9b0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a9b1  jne 0xa9ac
    X86_AT(c, 0xa9b1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa9acu); goto L_a9ac; }
    X86_TICK(c, 10);
    // 00a9b3  ret 
    X86_AT(c, 0xa9b3u);
    c.eip = pop32(c); return;
L_a9b4:
    X86_TICK(c, 10);
    // 00a9b4  ret 
    X86_AT(c, 0xa9b4u);
    c.eip = pop32(c); return;
L_a9b8:
    X86_TICK(c, 7);
    // 00a9b8  call 0x7f38
    X86_AT(c, 0xa9b8u);
    push32(c, 0xa9bdu); f_00007f38(c); X86_RET(c, 0xa9bdu);
    X86_TICK(c, 5);
    // 00a9bd  jne 0xa9c9
    X86_AT(c, 0xa9bdu);
    if (x86_cc(c, 5)) { goto L_a9c9; }
    X86_TICK(c, 8);
    // 00a9bf  mov ax, word ptr [esi]
    X86_AT(c, 0xa9bfu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a9c2  not ax
    X86_AT(c, 0xa9c2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, ~v & 0xFFFFu); }
    // 00a9c5  mov word ptr es:[edi], ax
    X86_AT(c, 0xa9c5u);
    wr16((c.sbase[0] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
L_a9c9:
    X86_TICK(c, 11);
    // 00a9c9  add esi, 2
    X86_AT(c, 0xa9c9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a9cc  add edi, 2
    X86_AT(c, 0xa9ccu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a9cf  dec ecx
    X86_AT(c, 0xa9cfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a9d0  jne 0xa9b8
    X86_AT(c, 0xa9d0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa9b8u); goto L_a9b8; }
    X86_TICK(c, 10);
    // 00a9d2  ret 
    X86_AT(c, 0xa9d2u);
    c.eip = pop32(c); return;
L_a9d4:
    X86_TICK(c, 12);
    // 00a9d4  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa9d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a9dc  jne 0xa9f8
    X86_AT(c, 0xa9dcu);
    if (x86_cc(c, 5)) { goto L_a9f8; }
    X86_TICK(c, 4);
    // 00a9de  mov bx, word ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa9deu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))));
L_a9e6:
    X86_TICK(c, 14);
    // 00a9e6  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa9e6u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a9e8  cmp ax, bx
    X86_AT(c, 0xa9e8u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00a9eb  je 0xa9f1
    X86_AT(c, 0xa9ebu);
    if (x86_cc(c, 4)) { goto L_a9f1; }
    X86_TICK(c, 2);
    // 00a9ed  mov word ptr es:[edi], ax
    X86_AT(c, 0xa9edu);
    wr16((c.sbase[0] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
L_a9f1:
    X86_TICK(c, 9);
    // 00a9f1  add edi, 2
    X86_AT(c, 0xa9f1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a9f4  dec ecx
    X86_AT(c, 0xa9f4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a9f5  jne 0xa9e6
    X86_AT(c, 0xa9f5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa9e6u); goto L_a9e6; }
    X86_TICK(c, 10);
    // 00a9f7  ret 
    X86_AT(c, 0xa9f7u);
    c.eip = pop32(c); return;
L_a9f8:
    X86_TICK(c, 4);
    // 00a9f8  mov bx, word ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa9f8u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))));
L_aa00:
    X86_TICK(c, 7);
    // 00aa00  call 0x7f38
    X86_AT(c, 0xaa00u);
    push32(c, 0xaa05u); f_00007f38(c); X86_RET(c, 0xaa05u);
    X86_TICK(c, 5);
    // 00aa05  jne 0xaa13
    X86_AT(c, 0xaa05u);
    if (x86_cc(c, 5)) { goto L_aa13; }
    X86_TICK(c, 11);
    // 00aa07  mov ax, word ptr [esi]
    X86_AT(c, 0xaa07u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00aa0a  cmp ax, bx
    X86_AT(c, 0xaa0au);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00aa0d  je 0xaa13
    X86_AT(c, 0xaa0du);
    if (x86_cc(c, 4)) { goto L_aa13; }
    X86_TICK(c, 2);
    // 00aa0f  mov word ptr es:[edi], ax
    X86_AT(c, 0xaa0fu);
    wr16((c.sbase[0] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
L_aa13:
    X86_TICK(c, 11);
    // 00aa13  add esi, 2
    X86_AT(c, 0xaa13u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00aa16  add edi, 2
    X86_AT(c, 0xaa16u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00aa19  dec ecx
    X86_AT(c, 0xaa19u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00aa1a  jne 0xaa00
    X86_AT(c, 0xaa1au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xaa00u); goto L_aa00; }
    X86_TICK(c, 10);
    // 00aa1c  ret 
    X86_AT(c, 0xaa1cu);
    c.eip = pop32(c); return;
L_aa20:
    X86_TICK(c, 12);
    // 00aa20  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xaa20u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00aa28  jne 0xaa44
    X86_AT(c, 0xaa28u);
    if (x86_cc(c, 5)) { goto L_aa44; }
    X86_TICK(c, 2);
    // 00aa2a  push ecx
    X86_AT(c, 0xaa2au);
    { uint32_t v = c.r[1]; push32(c, v); }
L_aa2b:
    X86_TICK(c, 11);
    // 00aa2b  mov cx, word ptr [esi]
    X86_AT(c, 0xaa2bu);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00aa2e  call 0x78e0
    X86_AT(c, 0xaa2eu);
    push32(c, 0xaa33u); f_000078e0(c); X86_RET(c, 0xaa33u);
    X86_TICK(c, 15);
    // 00aa33  add edi, 2
    X86_AT(c, 0xaa33u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00aa36  add esi, 2
    X86_AT(c, 0xaa36u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00aa39  dec dword ptr [esp]
    X86_AT(c, 0xaa39u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00aa3c  jne 0xaa2b
    X86_AT(c, 0xaa3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xaa2bu); goto L_aa2b; }
    X86_TICK(c, 12);
    // 00aa3e  add esp, 4
    X86_AT(c, 0xaa3eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00aa41  ret 
    X86_AT(c, 0xaa41u);
    c.eip = pop32(c); return;
L_aa44:
    X86_TICK(c, 2);
    // 00aa44  push ecx
    X86_AT(c, 0xaa44u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_aa45:
    X86_TICK(c, 7);
    // 00aa45  call 0x7f38
    X86_AT(c, 0xaa45u);
    push32(c, 0xaa4au); f_00007f38(c); X86_RET(c, 0xaa4au);
    X86_TICK(c, 5);
    // 00aa4a  jne 0xaa54
    X86_AT(c, 0xaa4au);
    if (x86_cc(c, 5)) { goto L_aa54; }
    X86_TICK(c, 11);
    // 00aa4c  mov cx, word ptr [esi]
    X86_AT(c, 0xaa4cu);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00aa4f  call 0x78e0
    X86_AT(c, 0xaa4fu);
    push32(c, 0xaa54u); f_000078e0(c); X86_RET(c, 0xaa54u);
L_aa54:
    X86_TICK(c, 15);
    // 00aa54  add esi, 2
    X86_AT(c, 0xaa54u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00aa57  add edi, 2
    X86_AT(c, 0xaa57u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00aa5a  dec dword ptr [esp]
    X86_AT(c, 0xaa5au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00aa5d  jne 0xaa45
    X86_AT(c, 0xaa5du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xaa45u); goto L_aa45; }
    X86_TICK(c, 12);
    // 00aa5f  add esp, 4
    X86_AT(c, 0xaa5fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00aa62  ret 
    X86_AT(c, 0xaa62u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa7e4u, "ran off the end of a function");
}
void f_0000b50c(X86Cpu& c) {
    X86_TICK(c, 50);
    // 00b50c  push dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb50cu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))); push32(c, v); }
    // 00b513  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xb513u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00b51b  push esi
    X86_AT(c, 0xb51bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00b51c  push ds
    X86_AT(c, 0xb51cu);
    push32(c, c.sreg[3]);
    // 00b51d  mov eax, dword ptr gs:[ebp + 0x414]
    X86_AT(c, 0xb51du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 00b524  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0xb524u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00b52c  mov ax, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0xb52cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u))));
    // 00b534  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xb534u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00b53c  shr eax, 0x10
    X86_AT(c, 0xb53cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b53f  add ax, word ptr gs:[ebp + 0x43e]
    X86_AT(c, 0xb53fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Eu))), 0, 2)); }
    // 00b547  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0xb547u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00b54f  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0xb54fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00b556  call 0x8ef4
    X86_AT(c, 0xb556u);
    push32(c, 0xb55bu); f_00008ef4(c); X86_RET(c, 0xb55bu);
    X86_TICK(c, 28);
    // 00b55b  pop ds
    X86_AT(c, 0xb55bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00b55c  pop esi
    X86_AT(c, 0xb55cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00b55d  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xb55du);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 00b565  pop dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb565u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), v); }
    // 00b56c  ret 
    X86_AT(c, 0xb56cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb50cu, "ran off the end of a function");
}
void f_0000b5ac(X86Cpu& c) {
    X86_TICK(c, 58);
    // 00b5ac  movzx eax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb5acu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00b5b4  shr eax, 3
    X86_AT(c, 0xb5b4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00b5b7  mov edx, eax
    X86_AT(c, 0xb5b7u);
    c.r[2] = c.r[0];
    // 00b5b9  mov bx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0xb5b9u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 00b5c1  mov cl, bl
    X86_AT(c, 0xb5c1u);
    s8(c, 1, g8(c, 3));
    // 00b5c3  sar bx, 3
    X86_AT(c, 0xb5c3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 00b5c7  sub ax, bx
    X86_AT(c, 0xb5c7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00b5ca  add esi, eax
    X86_AT(c, 0xb5cau);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00b5cc  les edi, fword ptr gs:[ebp + 0x304]
    X86_AT(c, 0xb5ccu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x304u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00b5d3  add edi, edx
    X86_AT(c, 0xb5d3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 00b5d5  and cl, 7
    X86_AT(c, 0xb5d5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x7u, 1)); }
    // 00b5d8  movzx ebx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0xb5d8u);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00b5e0  shr ebx, 3
    X86_AT(c, 0xb5e0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00b5e3  sub ebx, edx
    X86_AT(c, 0xb5e3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00b5e5  inc ebx
    X86_AT(c, 0xb5e5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 00b5e6  push edi
    X86_AT(c, 0xb5e6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00b5e7  push ebx
    X86_AT(c, 0xb5e7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b5e8  call 0x962a
    X86_AT(c, 0xb5e8u);
    push32(c, 0xb5edu); f_0000962a(c); X86_RET(c, 0xb5edu);
    X86_TICK(c, 20);
    // 00b5ed  pop ebx
    X86_AT(c, 0xb5edu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00b5ee  pop edi
    X86_AT(c, 0xb5eeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00b5ef  test byte ptr gs:[ebp + 0x300], 1
    X86_AT(c, 0xb5efu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))) & 0x1u, 1);
    // 00b5f7  je 0xb659
    X86_AT(c, 0xb5f7u);
    if (x86_cc(c, 4)) { goto L_b659; }
    X86_TICK(c, 68);
    // 00b5f9  mov ds, word ptr gs:[ebp + 0x2fc]
    X86_AT(c, 0xb5f9u);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2FCu))) & 0xFFFFu);
    // 00b600  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xb600u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00b608  imul eax, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0xb608u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00b60d  mov si, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb60du);
    s16(c, 6, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00b615  shr esi, 3
    X86_AT(c, 0xb615u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 00b618  and esi, 0xfffc
    X86_AT(c, 0xb618u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFCu, 4); }
    // 00b61e  add esi, eax
    X86_AT(c, 0xb61eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00b620  add esi, dword ptr gs:[ebp + 0x2f8]
    X86_AT(c, 0xb620u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F8u))), 0, 4); }
    // 00b627  and edi, 0xfffffffc
    X86_AT(c, 0xb627u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 00b62a  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb62au);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00b631  shld ebx, eax, 0x10
    X86_AT(c, 0xb631u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00b635  shr bx, 5
    X86_AT(c, 0xb635u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 2, w); if (w) s16(c, 3, r); }
    // 00b639  shr ax, 5
    X86_AT(c, 0xb639u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 00b63d  sub bx, ax
    X86_AT(c, 0xb63du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00b640  inc bx
    X86_AT(c, 0xb640u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
L_b642:
    X86_TICK(c, 19);
    // 00b642  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xb642u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00b643  cmp byte ptr gs:[ebp + 0x2fe], 0
    X86_AT(c, 0xb643u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2FEu))), 0x0u, 0, 1);
    // 00b64b  jne 0xb64f
    X86_AT(c, 0xb64bu);
    if (x86_cc(c, 5)) { goto L_b64f; }
    X86_TICK(c, 2);
    // 00b64d  not eax
    X86_AT(c, 0xb64du);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_b64f:
    X86_TICK(c, 16);
    // 00b64f  and dword ptr es:[edi], eax
    X86_AT(c, 0xb64fu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[0], 4)); }
    // 00b652  add edi, 4
    X86_AT(c, 0xb652u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00b655  dec bx
    X86_AT(c, 0xb655u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 00b657  jne 0xb642
    X86_AT(c, 0xb657u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xb642u); goto L_b642; }
L_b659:
    X86_TICK(c, 10);
    // 00b659  ret 
    X86_AT(c, 0xb659u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5acu, "ran off the end of a function");
}
void f_0000b798(X86Cpu& c) {
    X86_TICK(c, 8);
    // 00b798  mov cx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb798u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00b7a0  mov dword ptr gs:[ebp + 0x47c], 0
    X86_AT(c, 0xb7a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), 0x0u);
    // 00b7ab  sub ebx, ebx
    X86_AT(c, 0xb7abu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_b7ad:
    X86_TICK(c, 15);
    // 00b7ad  push ecx
    X86_AT(c, 0xb7adu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00b7ae  sub cx, word ptr gs:[ebp + 0x464]
    X86_AT(c, 0xb7aeu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u))), 0, 2)); }
    // 00b7b6  mov bh, ch
    X86_AT(c, 0xb7b6u);
    s8(c, 7, g8(c, 5));
    // 00b7b8  jge 0xb7bd
    X86_AT(c, 0xb7b8u);
    if (x86_cc(c, 13)) { goto L_b7bd; }
    X86_TICK(c, 2);
    // 00b7ba  neg cx
    X86_AT(c, 0xb7bau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_neg(c, v, 2)); }
L_b7bd:
    X86_TICK(c, 76);
    // 00b7bd  mov ax, word ptr gs:[ebp + 0x468]
    X86_AT(c, 0xb7bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))));
    // 00b7c5  mul cx
    X86_AT(c, 0xb7c5u);
    x86_mul(c, (c.r[1] & 0xFFFFu), 2);
    // 00b7c8  add ah, ah
    X86_AT(c, 0xb7c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 00b7ca  adc dx, 0
    X86_AT(c, 0xb7cau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 00b7ce  mov word ptr gs:[ebp + 0x470], dx
    X86_AT(c, 0xb7ceu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)), (c.r[2] & 0xFFFFu));
    // 00b7d6  mov ax, word ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xb7d6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))));
    // 00b7de  mul cx
    X86_AT(c, 0xb7deu);
    x86_mul(c, (c.r[1] & 0xFFFFu), 2);
    // 00b7e1  add ah, ah
    X86_AT(c, 0xb7e1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 00b7e3  adc dx, 0
    X86_AT(c, 0xb7e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 00b7e7  mov word ptr gs:[ebp + 0x472], dx
    X86_AT(c, 0xb7e7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)), (c.r[2] & 0xFFFFu));
    // 00b7ef  cmp byte ptr gs:[ebp + 0x46a], 0
    X86_AT(c, 0xb7efu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Au))), 0x0u, 0, 1);
    // 00b7f7  je 0xb801
    X86_AT(c, 0xb7f7u);
    if (x86_cc(c, 4)) { goto L_b801; }
    X86_TICK(c, 6);
    // 00b7f9  neg word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xb7f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)); uint32_t v = rd16(ea); wr16(ea, x86_neg(c, v, 2)); }
L_b801:
    X86_TICK(c, 12);
    // 00b801  cmp byte ptr gs:[ebp + 0x46e], 0
    X86_AT(c, 0xb801u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Eu))), 0x0u, 0, 1);
    // 00b809  je 0xb813
    X86_AT(c, 0xb809u);
    if (x86_cc(c, 4)) { goto L_b813; }
    X86_TICK(c, 6);
    // 00b80b  neg word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xb80bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)); uint32_t v = rd16(ea); wr16(ea, x86_neg(c, v, 2)); }
L_b813:
    X86_TICK(c, 7);
    // 00b813  test bh, bh
    X86_AT(c, 0xb813u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 00b815  jge 0xb827
    X86_AT(c, 0xb815u);
    if (x86_cc(c, 13)) { goto L_b827; }
    X86_TICK(c, 12);
    // 00b817  neg word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xb817u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)); uint32_t v = rd16(ea); wr16(ea, x86_neg(c, v, 2)); }
    // 00b81f  neg word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xb81fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)); uint32_t v = rd16(ea); wr16(ea, x86_neg(c, v, 2)); }
L_b827:
    X86_TICK(c, 44);
    // 00b827  mov bx, word ptr gs:[ebp + 0x464]
    X86_AT(c, 0xb827u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u))));
    // 00b82f  add bx, word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xb82fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))), 0, 2)); }
    // 00b837  sub bx, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xb837u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))), 0, 2)); }
    // 00b83f  mov dx, word ptr gs:[ebp + 0x466]
    X86_AT(c, 0xb83fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))));
    // 00b847  add dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xb847u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))), 0, 2)); }
    // 00b84f  add dx, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xb84fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))), 0, 2)); }
    // 00b857  cmp word ptr gs:[ebp + 0x28], bx
    X86_AT(c, 0xb857u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00b85c  jg 0xb8c4
    X86_AT(c, 0xb85cu);
    if (x86_cc(c, 15)) { goto L_b8c4; }
    X86_TICK(c, 12);
    // 00b85e  cmp word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0xb85eu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00b863  jl 0xb8c4
    X86_AT(c, 0xb863u);
    if (x86_cc(c, 12)) { goto L_b8c4; }
    X86_TICK(c, 12);
    // 00b865  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0xb865u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00b86a  jg 0xb8c4
    X86_AT(c, 0xb86au);
    if (x86_cc(c, 15)) { goto L_b8c4; }
    X86_TICK(c, 12);
    // 00b86c  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0xb86cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00b871  jl 0xb8c4
    X86_AT(c, 0xb871u);
    if (x86_cc(c, 12)) { goto L_b8c4; }
    X86_TICK(c, 42);
    // 00b873  mov ds, word ptr gs:[ebp + 0x2c8]
    X86_AT(c, 0xb873u);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2C8u))) & 0xFFFFu);
    // 00b87a  movzx esi, dx
    X86_AT(c, 0xb87au);
    c.r[6] = (c.r[2] & 0xFFFFu);
    // 00b87d  imul esi, dword ptr gs:[ebp + 0x460]
    X86_AT(c, 0xb87du);
    c.r[6] = x86_imul2(c, c.r[6], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u))), 4);
    // 00b885  add esi, dword ptr gs:[ebp + 0x2c4]
    X86_AT(c, 0xb885u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2C4u))), 0, 4); }
    // 00b88c  call dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0xb88cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u))); push32(c, 0xb893u); x86_call(c, t); X86_RET(c, 0xb893u); }
L_b893:
    X86_TICK(c, 17);
    // 00b893  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0xb893u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00b89a  mov ebx, dword ptr gs:[ebp + 0x47c]
    X86_AT(c, 0xb89au);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)));
    // 00b8a1  call dword ptr gs:[ebp + 0x318]
    X86_AT(c, 0xb8a1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u))); push32(c, 0xb8a8u); x86_call(c, t); X86_RET(c, 0xb8a8u); }
    X86_TICK(c, 16);
    // 00b8a8  pop ecx
    X86_AT(c, 0xb8a8u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00b8a9  cmp word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb8a9u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00b8b1  je 0xb8c1
    X86_AT(c, 0xb8b1u);
    if (x86_cc(c, 4)) { goto L_b8c1; }
    X86_TICK(c, 15);
    // 00b8b3  inc cx
    X86_AT(c, 0xb8b3u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 00b8b5  inc dword ptr gs:[ebp + 0x47c]
    X86_AT(c, 0xb8b5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 00b8bc  jmp 0xb7ad
    X86_AT(c, 0xb8bcu);
    X86_POLL(c, 0xb7adu); goto L_b7ad;
L_b8c1:
    X86_TICK(c, 10);
    // 00b8c1  ret 
    X86_AT(c, 0xb8c1u);
    c.eip = pop32(c); return;
L_b8c4:
    X86_TICK(c, 9);
    // 00b8c4  sub eax, eax
    X86_AT(c, 0xb8c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b8c6  jmp 0xb893
    X86_AT(c, 0xb8c6u);
    X86_POLL(c, 0xb893u); goto L_b893;
    x86_fault(c, 0xb798u, "ran off the end of a function");
}
void f_0000b930(X86Cpu& c) {
    X86_TICK(c, 16);
    // 00b930  mov ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xb930u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00b938  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xb938u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b93d  jg 0xb980
    X86_AT(c, 0xb93du);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 12);
    // 00b93f  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0xb93fu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b944  jl 0xb980
    X86_AT(c, 0xb944u);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 19);
    // 00b946  mov bx, word ptr gs:[ebp + 0x28]
    X86_AT(c, 0xb946u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))));
    // 00b94b  mov cx, word ptr gs:[ebp + 0x2c]
    X86_AT(c, 0xb94bu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))));
    // 00b950  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb950u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00b957  cmp cx, ax
    X86_AT(c, 0xb957u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95a  jl 0xb980
    X86_AT(c, 0xb95au);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b95c  cmp bx, ax
    X86_AT(c, 0xb95cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95f  jle 0xb969
    X86_AT(c, 0xb95fu);
    if (x86_cc(c, 14)) { goto L_b969; }
    X86_TICK(c, 2);
    // 00b961  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xb961u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
L_b969:
    X86_TICK(c, 10);
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb930u, "ran off the end of a function");
}
void f_0000b938(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00b938  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xb938u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b93d  jg 0xb980
    X86_AT(c, 0xb93du);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 12);
    // 00b93f  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0xb93fu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b944  jl 0xb980
    X86_AT(c, 0xb944u);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 19);
    // 00b946  mov bx, word ptr gs:[ebp + 0x28]
    X86_AT(c, 0xb946u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))));
    // 00b94b  mov cx, word ptr gs:[ebp + 0x2c]
    X86_AT(c, 0xb94bu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))));
    // 00b950  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb950u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00b957  cmp cx, ax
    X86_AT(c, 0xb957u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95a  jl 0xb980
    X86_AT(c, 0xb95au);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b95c  cmp bx, ax
    X86_AT(c, 0xb95cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95f  jle 0xb969
    X86_AT(c, 0xb95fu);
    if (x86_cc(c, 14)) { goto L_b969; }
    X86_TICK(c, 2);
    // 00b961  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xb961u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
L_b969:
    X86_TICK(c, 10);
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb938u, "ran off the end of a function");
}
void f_0000b93d(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00b93d  jg 0xb980
    X86_AT(c, 0xb93du);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 12);
    // 00b93f  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0xb93fu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b944  jl 0xb980
    X86_AT(c, 0xb944u);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 19);
    // 00b946  mov bx, word ptr gs:[ebp + 0x28]
    X86_AT(c, 0xb946u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))));
    // 00b94b  mov cx, word ptr gs:[ebp + 0x2c]
    X86_AT(c, 0xb94bu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))));
    // 00b950  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb950u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00b957  cmp cx, ax
    X86_AT(c, 0xb957u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95a  jl 0xb980
    X86_AT(c, 0xb95au);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b95c  cmp bx, ax
    X86_AT(c, 0xb95cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95f  jle 0xb969
    X86_AT(c, 0xb95fu);
    if (x86_cc(c, 14)) { goto L_b969; }
    X86_TICK(c, 2);
    // 00b961  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xb961u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
L_b969:
    X86_TICK(c, 10);
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb93du, "ran off the end of a function");
}
void f_0000b93f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00b93f  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0xb93fu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b944  jl 0xb980
    X86_AT(c, 0xb944u);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 19);
    // 00b946  mov bx, word ptr gs:[ebp + 0x28]
    X86_AT(c, 0xb946u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))));
    // 00b94b  mov cx, word ptr gs:[ebp + 0x2c]
    X86_AT(c, 0xb94bu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))));
    // 00b950  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb950u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00b957  cmp cx, ax
    X86_AT(c, 0xb957u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95a  jl 0xb980
    X86_AT(c, 0xb95au);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b95c  cmp bx, ax
    X86_AT(c, 0xb95cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95f  jle 0xb969
    X86_AT(c, 0xb95fu);
    if (x86_cc(c, 14)) { goto L_b969; }
    X86_TICK(c, 2);
    // 00b961  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xb961u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
L_b969:
    X86_TICK(c, 10);
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb93fu, "ran off the end of a function");
}
void f_0000b944(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00b944  jl 0xb980
    X86_AT(c, 0xb944u);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 19);
    // 00b946  mov bx, word ptr gs:[ebp + 0x28]
    X86_AT(c, 0xb946u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))));
    // 00b94b  mov cx, word ptr gs:[ebp + 0x2c]
    X86_AT(c, 0xb94bu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))));
    // 00b950  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb950u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00b957  cmp cx, ax
    X86_AT(c, 0xb957u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95a  jl 0xb980
    X86_AT(c, 0xb95au);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b95c  cmp bx, ax
    X86_AT(c, 0xb95cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95f  jle 0xb969
    X86_AT(c, 0xb95fu);
    if (x86_cc(c, 14)) { goto L_b969; }
    X86_TICK(c, 2);
    // 00b961  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xb961u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
L_b969:
    X86_TICK(c, 10);
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb944u, "ran off the end of a function");
}
void f_0000b946(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00b946  mov bx, word ptr gs:[ebp + 0x28]
    X86_AT(c, 0xb946u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))));
    // 00b94b  mov cx, word ptr gs:[ebp + 0x2c]
    X86_AT(c, 0xb94bu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))));
    // 00b950  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb950u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00b957  cmp cx, ax
    X86_AT(c, 0xb957u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95a  jl 0xb980
    X86_AT(c, 0xb95au);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b95c  cmp bx, ax
    X86_AT(c, 0xb95cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95f  jle 0xb969
    X86_AT(c, 0xb95fu);
    if (x86_cc(c, 14)) { goto L_b969; }
    X86_TICK(c, 2);
    // 00b961  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xb961u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
L_b969:
    X86_TICK(c, 10);
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb946u, "ran off the end of a function");
}
void f_0000b94b(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00b94b  mov cx, word ptr gs:[ebp + 0x2c]
    X86_AT(c, 0xb94bu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))));
    // 00b950  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb950u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00b957  cmp cx, ax
    X86_AT(c, 0xb957u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95a  jl 0xb980
    X86_AT(c, 0xb95au);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b95c  cmp bx, ax
    X86_AT(c, 0xb95cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95f  jle 0xb969
    X86_AT(c, 0xb95fu);
    if (x86_cc(c, 14)) { goto L_b969; }
    X86_TICK(c, 2);
    // 00b961  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xb961u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
L_b969:
    X86_TICK(c, 10);
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb94bu, "ran off the end of a function");
}
void f_0000b950(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00b950  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xb950u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00b957  cmp cx, ax
    X86_AT(c, 0xb957u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95a  jl 0xb980
    X86_AT(c, 0xb95au);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b95c  cmp bx, ax
    X86_AT(c, 0xb95cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95f  jle 0xb969
    X86_AT(c, 0xb95fu);
    if (x86_cc(c, 14)) { goto L_b969; }
    X86_TICK(c, 2);
    // 00b961  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xb961u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
L_b969:
    X86_TICK(c, 10);
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb950u, "ran off the end of a function");
}
void f_0000b957(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00b957  cmp cx, ax
    X86_AT(c, 0xb957u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95a  jl 0xb980
    X86_AT(c, 0xb95au);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b95c  cmp bx, ax
    X86_AT(c, 0xb95cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95f  jle 0xb969
    X86_AT(c, 0xb95fu);
    if (x86_cc(c, 14)) { goto L_b969; }
    X86_TICK(c, 2);
    // 00b961  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xb961u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
L_b969:
    X86_TICK(c, 10);
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb957u, "ran off the end of a function");
}
void f_0000b95a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00b95a  jl 0xb980
    X86_AT(c, 0xb95au);
    if (x86_cc(c, 12)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b95c  cmp bx, ax
    X86_AT(c, 0xb95cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95f  jle 0xb969
    X86_AT(c, 0xb95fu);
    if (x86_cc(c, 14)) { goto L_b969; }
    X86_TICK(c, 2);
    // 00b961  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xb961u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
L_b969:
    X86_TICK(c, 10);
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb95au, "ran off the end of a function");
}
void f_0000b95c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00b95c  cmp bx, ax
    X86_AT(c, 0xb95cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b95f  jle 0xb969
    X86_AT(c, 0xb95fu);
    if (x86_cc(c, 14)) { goto L_b969; }
    X86_TICK(c, 2);
    // 00b961  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xb961u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
L_b969:
    X86_TICK(c, 10);
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb95cu, "ran off the end of a function");
}
void f_0000b95f(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00b95f  jle 0xb969
    X86_AT(c, 0xb95fu);
    if (x86_cc(c, 14)) { goto L_b969; }
    X86_TICK(c, 2);
    // 00b961  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xb961u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
L_b969:
    X86_TICK(c, 10);
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb95fu, "ran off the end of a function");
}
void f_0000b961(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00b961  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xb961u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb961u, "ran off the end of a function");
}
void f_0000b969(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00b969  shr eax, 0x10
    X86_AT(c, 0xb969u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb969u, "ran off the end of a function");
}
}

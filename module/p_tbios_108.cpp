#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000a2fc(X86Cpu& c) {
    X86_TICK(c, 18);
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
    x86_fault(c, 0xa2fcu, "ran off the end of a function");
}
void f_0000a2ff(X86Cpu& c) {
    X86_TICK(c, 12);
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
    x86_fault(c, 0xa2ffu, "ran off the end of a function");
}
void f_0000a303(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0xa303u, "ran off the end of a function");
}
void f_0000a305(X86Cpu& c) {
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
    x86_fault(c, 0xa305u, "ran off the end of a function");
}
void f_0000a308(X86Cpu& c) {
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
    x86_fault(c, 0xa308u, "ran off the end of a function");
}
void f_0000a30b(X86Cpu& c) {
    goto L_a30b;
L_a308:
    X86_TICK(c, 4);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
L_a30b:
    X86_TICK(c, 26);
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
    x86_fault(c, 0xa30bu, "ran off the end of a function");
}
void f_0000a30c(X86Cpu& c) {
    goto L_a30c;
L_a308:
    X86_TICK(c, 11);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
L_a30c:
    X86_TICK(c, 19);
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
    x86_fault(c, 0xa30cu, "ran off the end of a function");
}
void f_0000a30f(X86Cpu& c) {
    goto L_a30f;
L_a308:
    X86_TICK(c, 14);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_a30f:
    X86_TICK(c, 16);
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
    x86_fault(c, 0xa30fu, "ran off the end of a function");
}
void f_0000a310(X86Cpu& c) {
    goto L_a310;
L_a308:
    X86_TICK(c, 16);
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
L_a310:
    X86_TICK(c, 14);
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
    x86_fault(c, 0xa310u, "ran off the end of a function");
}
void f_0000a311(X86Cpu& c) {
    goto L_a311;
L_a308:
    X86_TICK(c, 18);
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
L_a311:
    X86_TICK(c, 12);
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
    x86_fault(c, 0xa311u, "ran off the end of a function");
}
void f_0000a312(X86Cpu& c) {
    goto L_a312;
L_a308:
    X86_TICK(c, 20);
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
L_a312:
    X86_TICK(c, 10);
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
    x86_fault(c, 0xa312u, "ran off the end of a function");
}
void f_0000a319(X86Cpu& c) {
    goto L_a319;
L_a308:
    X86_TICK(c, 26);
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
L_a319:
    X86_TICK(c, 4);
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
    x86_fault(c, 0xa319u, "ran off the end of a function");
}
void f_0000a31b(X86Cpu& c) {
    goto L_a31b;
L_a308:
    X86_TICK(c, 28);
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
L_a31b:
    X86_TICK(c, 2);
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
    x86_fault(c, 0xa31bu, "ran off the end of a function");
}
void f_0000a31d(X86Cpu& c) {
    goto L_a31d;
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
    x86_fault(c, 0xa31du, "ran off the end of a function");
}
void f_0000a320(X86Cpu& c) {
    goto L_a320;
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
    X86_TICK(c, 3);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
L_a320:
    X86_TICK(c, 7);
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
    x86_fault(c, 0xa320u, "ran off the end of a function");
}
void f_0000a325(X86Cpu& c) {
    goto L_a325;
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
    X86_TICK(c, 5);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
L_a325:
    X86_TICK(c, 5);
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
    x86_fault(c, 0xa325u, "ran off the end of a function");
}
void f_0000a327(X86Cpu& c) {
    goto L_a327;
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
L_a327:
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
    x86_fault(c, 0xa327u, "ran off the end of a function");
}
void f_0000a32a(X86Cpu& c) {
    goto L_a32a;
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
    x86_fault(c, 0xa32au, "ran off the end of a function");
}
void f_0000a32d(X86Cpu& c) {
    goto L_a32d;
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
    X86_TICK(c, 3);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
L_a32d:
    X86_TICK(c, 7);
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
    x86_fault(c, 0xa32du, "ran off the end of a function");
}
void f_0000a32f(X86Cpu& c) {
    goto L_a32f;
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
    X86_TICK(c, 5);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
L_a32f:
    X86_TICK(c, 5);
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
    x86_fault(c, 0xa32fu, "ran off the end of a function");
}
void f_0000a331(X86Cpu& c) {
    goto L_a331;
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
L_a331:
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
    x86_fault(c, 0xa331u, "ran off the end of a function");
}
void f_0000a333(X86Cpu& c) {
    goto L_a333;
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
    X86_TICK(c, 2);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
L_a333:
    X86_TICK(c, 46);
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
    x86_fault(c, 0xa333u, "ran off the end of a function");
}
void f_0000a334(X86Cpu& c) {
    goto L_a334;
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
    X86_TICK(c, 6);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_a334:
    X86_TICK(c, 42);
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
    x86_fault(c, 0xa334u, "ran off the end of a function");
}
void f_0000a335(X86Cpu& c) {
    goto L_a335;
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
    X86_TICK(c, 10);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_a335:
    X86_TICK(c, 38);
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
    x86_fault(c, 0xa335u, "ran off the end of a function");
}
void f_0000a337(X86Cpu& c) {
    goto L_a337;
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
    X86_TICK(c, 12);
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
L_a337:
    X86_TICK(c, 36);
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
    x86_fault(c, 0xa337u, "ran off the end of a function");
}
void f_0000a339(X86Cpu& c) {
    goto L_a339;
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
    X86_TICK(c, 14);
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
L_a339:
    X86_TICK(c, 34);
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
    x86_fault(c, 0xa339u, "ran off the end of a function");
}
void f_0000a33c(X86Cpu& c) {
    goto L_a33c;
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
    X86_TICK(c, 18);
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
L_a33c:
    X86_TICK(c, 30);
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
    x86_fault(c, 0xa33cu, "ran off the end of a function");
}
void f_0000a33e(X86Cpu& c) {
    goto L_a33e;
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
    X86_TICK(c, 20);
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
L_a33e:
    X86_TICK(c, 28);
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
    x86_fault(c, 0xa33eu, "ran off the end of a function");
}
void f_0000a340(X86Cpu& c) {
    goto L_a340;
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
    X86_TICK(c, 22);
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
L_a340:
    X86_TICK(c, 26);
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
    x86_fault(c, 0xa340u, "ran off the end of a function");
}
}

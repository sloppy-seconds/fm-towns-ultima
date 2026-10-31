#include "p_game_funcs.h"
namespace p_game {
void f_000f210a(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0f210a  pop edi
    X86_AT(c, 0xf210au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f210b  pop esi
    X86_AT(c, 0xf210bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f210c  pop ebx
    X86_AT(c, 0xf210cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f210d  leave 
    X86_AT(c, 0xf210du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f210e  ret 
    X86_AT(c, 0xf210eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf210au, "ran off the end of a function");
}
void f_000f2110(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0f2110  push ebp
    X86_AT(c, 0xf2110u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f2111  mov ebp, esp
    X86_AT(c, 0xf2111u);
    c.r[5] = c.r[4];
    // 0f2113  push edi
    X86_AT(c, 0xf2113u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f2114  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf2114u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f2117  dec edi
    X86_AT(c, 0xf2117u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0f2118  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2118u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f211d  lea edx, [eax + eax*4]
    X86_AT(c, 0xf211du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2120  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2120u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2123  shl edx, 5
    X86_AT(c, 0xf2123u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2126  sub edx, eax
    X86_AT(c, 0xf2126u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2128  cmp dword ptr [edx + 0xcde99], 0xd
    X86_AT(c, 0xf2128u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))), 0xDu, 0, 4);
    // 0f212f  jne 0xf2157
    X86_AT(c, 0xf212fu);
    if (x86_cc(c, 5)) { goto L_f2157; }
    X86_TICK(c, 12);
    // 0f2131  cmp dword ptr [edx + 0xcdf57], 3
    X86_AT(c, 0xf2131u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x3u, 0, 4);
    // 0f2138  jne 0xf2157
    X86_AT(c, 0xf2138u);
    if (x86_cc(c, 5)) { goto L_f2157; }
    X86_TICK(c, 7);
    // 0f213a  and edi, edi
    X86_AT(c, 0xf213au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f213c  jne 0xf2157
    X86_AT(c, 0xf213cu);
    if (x86_cc(c, 5)) { goto L_f2157; }
    X86_TICK(c, 11);
    // 0f213e  mov dword ptr [edx + 0xcdf8b], 1
    X86_AT(c, 0xf213eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Bu)), 0x1u);
    // 0f2148  push 5
    X86_AT(c, 0xf2148u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f214a  call 0xe1944
    X86_AT(c, 0xf214au);
    push32(c, 0xf214fu); f_000e1944(c); X86_RET(c, 0xf214fu);
    X86_TICK(c, 7);
    // 0f214f  call 0xf0c70
    X86_AT(c, 0xf214fu);
    push32(c, 0xf2154u); f_000f0c70(c); X86_RET(c, 0xf2154u);
    X86_TICK(c, 2);
    // 0f2154  add esp, 4
    X86_AT(c, 0xf2154u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f2157:
    X86_TICK(c, 9);
    // 0f2157  push 0xb
    X86_AT(c, 0xf2157u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f2159  call 0xe5748
    X86_AT(c, 0xf2159u);
    push32(c, 0xf215eu); f_000e5748(c); X86_RET(c, 0xf215eu);
    X86_TICK(c, 14);
    // 0f215e  add esp, 4
    X86_AT(c, 0xf215eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f2161  cmp dword ptr [0x7a6b4], 0
    X86_AT(c, 0xf2161u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A6B4u))), 0x0u, 0, 4);
    // 0f2168  jne 0xf2173
    X86_AT(c, 0xf2168u);
    if (x86_cc(c, 5)) { goto L_f2173; }
    X86_TICK(c, 12);
    // 0f216a  push dword ptr [edi*4 + 0xd8d5c]
    X86_AT(c, 0xf216au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xD8D5Cu))); push32(c, v); }
    // 0f2171  jmp 0xf217a
    X86_AT(c, 0xf2171u);
    goto L_f217a;
L_f2173:
    X86_TICK(c, 5);
    // 0f2173  push dword ptr [edi*4 + 0xd8d70]
    X86_AT(c, 0xf2173u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xD8D70u))); push32(c, v); }
L_f217a:
    X86_TICK(c, 9);
    // 0f217a  push 7
    X86_AT(c, 0xf217au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f217c  call 0xe6cb0
    X86_AT(c, 0xf217cu);
    push32(c, 0xf2181u); f_000e6cb0(c); X86_RET(c, 0xf2181u);
    X86_TICK(c, 11);
    // 0f2181  add esp, 8
    X86_AT(c, 0xf2181u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f2184  push 7
    X86_AT(c, 0xf2184u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2186  call 0xe6c68
    X86_AT(c, 0xf2186u);
    push32(c, 0xf218bu); f_000e6c68(c); X86_RET(c, 0xf218bu);
    X86_TICK(c, 22);
    // 0f218b  add esp, 4
    X86_AT(c, 0xf218bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f218e  pop edi
    X86_AT(c, 0xf218eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f218f  leave 
    X86_AT(c, 0xf218fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f2190  ret 
    X86_AT(c, 0xf2190u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2110u, "ran off the end of a function");
}
void f_000f21c4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f21c4  push 7
    X86_AT(c, 0xf21c4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f21c6  call 0xe693c
    X86_AT(c, 0xf21c6u);
    push32(c, 0xf21cbu); f_000e693c(c); X86_RET(c, 0xf21cbu);
    X86_TICK(c, 11);
    // 0f21cb  push 0x634c
    X86_AT(c, 0xf21cbu);
    { uint32_t v = 0x634Cu; push32(c, v); }
    // 0f21d0  push 7
    X86_AT(c, 0xf21d0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f21d2  call 0xe5654
    X86_AT(c, 0xf21d2u);
    push32(c, 0xf21d7u); f_000e5654(c); X86_RET(c, 0xf21d7u);
    X86_TICK(c, 26);
    // 0f21d7  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf21d7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f21dc  lea edx, [eax + eax*4]
    X86_AT(c, 0xf21dcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f21df  lea edx, [eax + edx*2]
    X86_AT(c, 0xf21dfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f21e2  shl edx, 5
    X86_AT(c, 0xf21e2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f21e5  sub edx, eax
    X86_AT(c, 0xf21e5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f21e7  add esp, 0xc
    X86_AT(c, 0xf21e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f21ea  mov eax, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xf21eau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0f21f0  cmp eax, 4
    X86_AT(c, 0xf21f0u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0f21f3  je 0xf21fa
    X86_AT(c, 0xf21f3u);
    if (x86_cc(c, 4)) { goto L_f21fa; }
    X86_TICK(c, 7);
    // 0f21f5  cmp eax, 5
    X86_AT(c, 0xf21f5u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0f21f8  jne 0xf2201
    X86_AT(c, 0xf21f8u);
    if (x86_cc(c, 5)) { goto L_f2201; }
L_f21fa:
    X86_TICK(c, 7);
    // 0f21fa  call 0xf2274
    X86_AT(c, 0xf21fau);
    push32(c, 0xf21ffu); f_000f2274(c); X86_RET(c, 0xf21ffu);
    X86_TICK(c, 7);
    // 0f21ff  jmp 0xf2206
    X86_AT(c, 0xf21ffu);
    goto L_f2206;
L_f2201:
    X86_TICK(c, 7);
    // 0f2201  call 0xf2208
    X86_AT(c, 0xf2201u);
    push32(c, 0xf2206u); f_000f2208(c); X86_RET(c, 0xf2206u);
L_f2206:
    X86_TICK(c, 10);
    // 0f2206  ret 
    X86_AT(c, 0xf2206u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf21c4u, "ran off the end of a function");
}
void f_000f2208(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0f2208  push edi
    X86_AT(c, 0xf2208u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f2209  push 7
    X86_AT(c, 0xf2209u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f220b  call 0xe693c
    X86_AT(c, 0xf220bu);
    push32(c, 0xf2210u); f_000e693c(c); X86_RET(c, 0xf2210u);
    X86_TICK(c, 30);
    // 0f2210  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2210u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2215  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2215u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2218  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2218u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f221b  shl edx, 5
    X86_AT(c, 0xf221bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f221e  sub edx, eax
    X86_AT(c, 0xf221eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2220  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf2220u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f2226  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf2226u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f222c  call 0xef920
    X86_AT(c, 0xf222cu);
    push32(c, 0xf2231u); f_000ef920(c); X86_RET(c, 0xf2231u);
    X86_TICK(c, 12);
    // 0f2231  xchg edi, eax
    X86_AT(c, 0xf2231u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f2232  add esp, 0xc
    X86_AT(c, 0xf2232u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f2235  cmp edi, 0x198
    X86_AT(c, 0xf2235u);
    (void)x86_sub(c, c.r[7], 0x198u, 0, 4);
    // 0f223b  jne 0xf2244
    X86_AT(c, 0xf223bu);
    if (x86_cc(c, 5)) { goto L_f2244; }
    X86_TICK(c, 7);
    // 0f223d  call 0xf2470
    X86_AT(c, 0xf223du);
    push32(c, 0xf2242u); f_000f2470(c); X86_RET(c, 0xf2242u);
    X86_TICK(c, 7);
    // 0f2242  jmp 0xf2270
    X86_AT(c, 0xf2242u);
    goto L_f2270;
L_f2244:
    X86_TICK(c, 7);
    // 0f2244  cmp edi, 0x199
    X86_AT(c, 0xf2244u);
    (void)x86_sub(c, c.r[7], 0x199u, 0, 4);
    // 0f224a  jne 0xf2253
    X86_AT(c, 0xf224au);
    if (x86_cc(c, 5)) { goto L_f2253; }
    X86_TICK(c, 7);
    // 0f224c  call 0xf254c
    X86_AT(c, 0xf224cu);
    push32(c, 0xf2251u); f_000f254c(c); X86_RET(c, 0xf2251u);
    X86_TICK(c, 7);
    // 0f2251  jmp 0xf2270
    X86_AT(c, 0xf2251u);
    goto L_f2270;
L_f2253:
    X86_TICK(c, 9);
    // 0f2253  push 1
    X86_AT(c, 0xf2253u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f2255  call 0xe1944
    X86_AT(c, 0xf2255u);
    push32(c, 0xf225au); f_000e1944(c); X86_RET(c, 0xf225au);
    X86_TICK(c, 11);
    // 0f225a  push 0x635c
    X86_AT(c, 0xf225au);
    { uint32_t v = 0x635Cu; push32(c, v); }
    // 0f225f  push 7
    X86_AT(c, 0xf225fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2261  call 0xe5654
    X86_AT(c, 0xf2261u);
    push32(c, 0xf2266u); f_000e5654(c); X86_RET(c, 0xf2266u);
    X86_TICK(c, 9);
    // 0f2266  push 7
    X86_AT(c, 0xf2266u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2268  call 0xe6c68
    X86_AT(c, 0xf2268u);
    push32(c, 0xf226du); f_000e6c68(c); X86_RET(c, 0xf226du);
    X86_TICK(c, 2);
    // 0f226d  add esp, 0x10
    X86_AT(c, 0xf226du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f2270:
    X86_TICK(c, 14);
    // 0f2270  pop edi
    X86_AT(c, 0xf2270u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f2271  ret 
    X86_AT(c, 0xf2271u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2208u, "ran off the end of a function");
}
void f_000f2274(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0f2274  push esi
    X86_AT(c, 0xf2274u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2275  push edi
    X86_AT(c, 0xf2275u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f2276  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2276u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f227b  lea edx, [eax + eax*4]
    X86_AT(c, 0xf227bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f227e  lea edx, [eax + edx*2]
    X86_AT(c, 0xf227eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2281  shl edx, 5
    X86_AT(c, 0xf2281u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2284  sub edx, eax
    X86_AT(c, 0xf2284u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2286  push dword ptr [edx + 0xcdf67]
    X86_AT(c, 0xf2286u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u))); push32(c, v); }
    // 0f228c  push dword ptr [edx + 0xcdf63]
    X86_AT(c, 0xf228cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u))); push32(c, v); }
    // 0f2292  push dword ptr [0xd4a68]
    X86_AT(c, 0xf2292u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD4A68u))); push32(c, v); }
    // 0f2298  call 0xfb21c
    X86_AT(c, 0xf2298u);
    push32(c, 0xf229du); f_000fb21c(c); X86_RET(c, 0xf229du);
    X86_TICK(c, 12);
    // 0f229d  xchg edi, eax
    X86_AT(c, 0xf229du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f229e  add esp, 0xc
    X86_AT(c, 0xf229eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f22a1  cmp edi, 4
    X86_AT(c, 0xf22a1u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0f22a4  je 0xf22c8
    X86_AT(c, 0xf22a4u);
    if (x86_cc(c, 4)) { goto L_f22c8; }
    X86_TICK(c, 9);
    // 0f22a6  push 3
    X86_AT(c, 0xf22a6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f22a8  call 0xe1944
    X86_AT(c, 0xf22a8u);
    push32(c, 0xf22adu); f_000e1944(c); X86_RET(c, 0xf22adu);
    X86_TICK(c, 11);
    // 0f22ad  push 0x6370
    X86_AT(c, 0xf22adu);
    { uint32_t v = 0x6370u; push32(c, v); }
    // 0f22b2  push 7
    X86_AT(c, 0xf22b2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f22b4  call 0xe5654
    X86_AT(c, 0xf22b4u);
    push32(c, 0xf22b9u); f_000e5654(c); X86_RET(c, 0xf22b9u);
    X86_TICK(c, 9);
    // 0f22b9  push 7
    X86_AT(c, 0xf22b9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f22bb  call 0xe6c68
    X86_AT(c, 0xf22bbu);
    push32(c, 0xf22c0u); f_000e6c68(c); X86_RET(c, 0xf22c0u);
    X86_TICK(c, 9);
    // 0f22c0  add esp, 0x10
    X86_AT(c, 0xf22c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f22c3  jmp 0xf23cf
    X86_AT(c, 0xf22c3u);
    goto L_f23cf;
L_f22c8:
    X86_TICK(c, 37);
    // 0f22c8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf22c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f22cd  lea edx, [eax + eax*4]
    X86_AT(c, 0xf22cdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f22d0  lea edx, [eax + edx*2]
    X86_AT(c, 0xf22d0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f22d3  shl edx, 5
    X86_AT(c, 0xf22d3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f22d6  sub edx, eax
    X86_AT(c, 0xf22d6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f22d8  push dword ptr [edx + 0xcdf67]
    X86_AT(c, 0xf22d8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u))); push32(c, v); }
    // 0f22de  push dword ptr [edx + 0xcdf63]
    X86_AT(c, 0xf22deu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u))); push32(c, v); }
    // 0f22e4  push dword ptr [0xd4a68]
    X86_AT(c, 0xf22e4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD4A68u))); push32(c, v); }
    // 0f22ea  push 0
    X86_AT(c, 0xf22eau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f22ec  call 0xfb280
    X86_AT(c, 0xf22ecu);
    push32(c, 0xf22f1u); f_000fb280(c); X86_RET(c, 0xf22f1u);
    X86_TICK(c, 37);
    // 0f22f1  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf22f1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f22f6  lea edx, [eax + eax*4]
    X86_AT(c, 0xf22f6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f22f9  lea edx, [eax + edx*2]
    X86_AT(c, 0xf22f9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f22fc  shl edx, 5
    X86_AT(c, 0xf22fcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f22ff  sub edx, eax
    X86_AT(c, 0xf22ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2301  push dword ptr [edx + 0xcdf67]
    X86_AT(c, 0xf2301u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u))); push32(c, v); }
    // 0f2307  push dword ptr [edx + 0xcdf63]
    X86_AT(c, 0xf2307u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u))); push32(c, v); }
    // 0f230d  push dword ptr [0xd4a68]
    X86_AT(c, 0xf230du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD4A68u))); push32(c, v); }
    // 0f2313  push 0
    X86_AT(c, 0xf2313u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f2315  call 0xfb29c
    X86_AT(c, 0xf2315u);
    push32(c, 0xf231au); f_000fb29c(c); X86_RET(c, 0xf231au);
    X86_TICK(c, 11);
    // 0f231a  push 0x6388
    X86_AT(c, 0xf231au);
    { uint32_t v = 0x6388u; push32(c, v); }
    // 0f231f  push 7
    X86_AT(c, 0xf231fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2321  call 0xe5654
    X86_AT(c, 0xf2321u);
    push32(c, 0xf2326u); f_000e5654(c); X86_RET(c, 0xf2326u);
    X86_TICK(c, 9);
    // 0f2326  push 7
    X86_AT(c, 0xf2326u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2328  call 0xe6c68
    X86_AT(c, 0xf2328u);
    push32(c, 0xf232du); f_000e6c68(c); X86_RET(c, 0xf232du);
    X86_TICK(c, 11);
    // 0f232d  push 0x63a4
    X86_AT(c, 0xf232du);
    { uint32_t v = 0x63A4u; push32(c, v); }
    // 0f2332  push 7
    X86_AT(c, 0xf2332u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2334  call 0xe5654
    X86_AT(c, 0xf2334u);
    push32(c, 0xf2339u); f_000e5654(c); X86_RET(c, 0xf2339u);
    X86_TICK(c, 9);
    // 0f2339  push 7
    X86_AT(c, 0xf2339u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f233b  call 0xe6c68
    X86_AT(c, 0xf233bu);
    push32(c, 0xf2340u); f_000e6c68(c); X86_RET(c, 0xf2340u);
    X86_TICK(c, 14);
    // 0f2340  add esp, 0x38
    X86_AT(c, 0xf2340u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0f2343  cmp dword ptr [0xd4a68], 0x10
    X86_AT(c, 0xf2343u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A68u))), 0x10u, 0, 4);
    // 0f234a  jne 0xf2356
    X86_AT(c, 0xf234au);
    if (x86_cc(c, 5)) { goto L_f2356; }
    X86_TICK(c, 7);
    // 0f234c  call 0xf23d4
    X86_AT(c, 0xf234cu);
    push32(c, 0xf2351u); f_000f23d4(c); X86_RET(c, 0xf2351u);
    X86_TICK(c, 7);
    // 0f2351  jmp 0xf23cf
    X86_AT(c, 0xf2351u);
    goto L_f23cf;
L_f2356:
    X86_TICK(c, 9);
    // 0f2356  push 0xf
    X86_AT(c, 0xf2356u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f2358  call 0xe1a7c
    X86_AT(c, 0xf2358u);
    push32(c, 0xf235du); f_000e1a7c(c); X86_RET(c, 0xf235du);
    X86_TICK(c, 9);
    // 0f235d  add esp, 4
    X86_AT(c, 0xf235du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f2360  cmp eax, 4
    X86_AT(c, 0xf2360u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0f2363  jge 0xf236c
    X86_AT(c, 0xf2363u);
    if (x86_cc(c, 13)) { goto L_f236c; }
    X86_TICK(c, 7);
    // 0f2365  call 0xf244c
    X86_AT(c, 0xf2365u);
    push32(c, 0xf236au); f_000f244c(c); X86_RET(c, 0xf236au);
    X86_TICK(c, 7);
    // 0f236a  jmp 0xf23cf
    X86_AT(c, 0xf236au);
    goto L_f23cf;
L_f236c:
    X86_TICK(c, 9);
    // 0f236c  push 0xf
    X86_AT(c, 0xf236cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f236e  call 0xe1a7c
    X86_AT(c, 0xf236eu);
    push32(c, 0xf2373u); f_000e1a7c(c); X86_RET(c, 0xf2373u);
    X86_TICK(c, 9);
    // 0f2373  add esp, 4
    X86_AT(c, 0xf2373u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f2376  cmp eax, 4
    X86_AT(c, 0xf2376u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0f2379  jge 0xf2382
    X86_AT(c, 0xf2379u);
    if (x86_cc(c, 13)) { goto L_f2382; }
    X86_TICK(c, 7);
    // 0f237b  call 0xf26c8
    X86_AT(c, 0xf237bu);
    push32(c, 0xf2380u); f_000f26c8(c); X86_RET(c, 0xf2380u);
    X86_TICK(c, 7);
    // 0f2380  jmp 0xf23cf
    X86_AT(c, 0xf2380u);
    goto L_f23cf;
L_f2382:
    X86_TICK(c, 15);
    // 0f2382  mov eax, dword ptr [0xd4a68]
    X86_AT(c, 0xf2382u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A68u)));
    // 0f2387  add eax, eax
    X86_AT(c, 0xf2387u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0f2389  push eax
    X86_AT(c, 0xf2389u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f238a  call 0xe1a7c
    X86_AT(c, 0xf238au);
    push32(c, 0xf238fu); f_000e1a7c(c); X86_RET(c, 0xf238fu);
    X86_TICK(c, 22);
    // 0f238f  add eax, 0x30
    X86_AT(c, 0xf238fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x30u, 0, 4); }
    // 0f2392  mov esi, dword ptr [0xd4a68]
    X86_AT(c, 0xf2392u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xD4A68u)));
    // 0f2398  shl esi, 3
    X86_AT(c, 0xf2398u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0f239b  add esi, eax
    X86_AT(c, 0xf239bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0f239d  push 0x63d4
    X86_AT(c, 0xf239du);
    { uint32_t v = 0x63D4u; push32(c, v); }
    // 0f23a2  push 7
    X86_AT(c, 0xf23a2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f23a4  call 0xe5654
    X86_AT(c, 0xf23a4u);
    push32(c, 0xf23a9u); f_000e5654(c); X86_RET(c, 0xf23a9u);
    X86_TICK(c, 13);
    // 0f23a9  push 3
    X86_AT(c, 0xf23a9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f23ab  push esi
    X86_AT(c, 0xf23abu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f23ac  push 7
    X86_AT(c, 0xf23acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f23ae  call 0xe5630
    X86_AT(c, 0xf23aeu);
    push32(c, 0xf23b3u); f_000e5630(c); X86_RET(c, 0xf23b3u);
    X86_TICK(c, 11);
    // 0f23b3  push 0x63e4
    X86_AT(c, 0xf23b3u);
    { uint32_t v = 0x63E4u; push32(c, v); }
    // 0f23b8  push 7
    X86_AT(c, 0xf23b8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f23ba  call 0xe5654
    X86_AT(c, 0xf23bau);
    push32(c, 0xf23bfu); f_000e5654(c); X86_RET(c, 0xf23bfu);
    X86_TICK(c, 9);
    // 0f23bf  push 7
    X86_AT(c, 0xf23bfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f23c1  call 0xe6c68
    X86_AT(c, 0xf23c1u);
    push32(c, 0xf23c6u); f_000e6c68(c); X86_RET(c, 0xf23c6u);
    X86_TICK(c, 9);
    // 0f23c6  push esi
    X86_AT(c, 0xf23c6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f23c7  call 0xef07c
    X86_AT(c, 0xf23c7u);
    push32(c, 0xf23ccu); f_000ef07c(c); X86_RET(c, 0xf23ccu);
    X86_TICK(c, 2);
    // 0f23cc  add esp, 0x28
    X86_AT(c, 0xf23ccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_f23cf:
    X86_TICK(c, 18);
    // 0f23cf  pop edi
    X86_AT(c, 0xf23cfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f23d0  pop esi
    X86_AT(c, 0xf23d0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f23d1  ret 
    X86_AT(c, 0xf23d1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2274u, "ran off the end of a function");
}
void f_000f23cf(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0f23cf  pop edi
    X86_AT(c, 0xf23cfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f23d0  pop esi
    X86_AT(c, 0xf23d0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f23d1  ret 
    X86_AT(c, 0xf23d1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf23cfu, "ran off the end of a function");
}
void f_000f23d4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f23d4  push 7
    X86_AT(c, 0xf23d4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f23d6  call 0xe693c
    X86_AT(c, 0xf23d6u);
    push32(c, 0xf23dbu); f_000e693c(c); X86_RET(c, 0xf23dbu);
    X86_TICK(c, 9);
    // 0f23db  push 9
    X86_AT(c, 0xf23dbu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f23dd  call 0xe1a7c
    X86_AT(c, 0xf23ddu);
    push32(c, 0xf23e2u); f_000e1a7c(c); X86_RET(c, 0xf23e2u);
    X86_TICK(c, 9);
    // 0f23e2  add esp, 8
    X86_AT(c, 0xf23e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f23e5  cmp eax, 2
    X86_AT(c, 0xf23e5u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0f23e8  jge 0xf2409
    X86_AT(c, 0xf23e8u);
    if (x86_cc(c, 13)) { goto L_f2409; }
    X86_TICK(c, 9);
    // 0f23ea  push 3
    X86_AT(c, 0xf23eau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f23ec  call 0xe1944
    X86_AT(c, 0xf23ecu);
    push32(c, 0xf23f1u); f_000e1944(c); X86_RET(c, 0xf23f1u);
    X86_TICK(c, 11);
    // 0f23f1  push 0x6408
    X86_AT(c, 0xf23f1u);
    { uint32_t v = 0x6408u; push32(c, v); }
    // 0f23f6  push 7
    X86_AT(c, 0xf23f6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f23f8  call 0xe5654
    X86_AT(c, 0xf23f8u);
    push32(c, 0xf23fdu); f_000e5654(c); X86_RET(c, 0xf23fdu);
    X86_TICK(c, 9);
    // 0f23fd  push 7
    X86_AT(c, 0xf23fdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f23ff  call 0xe6c68
    X86_AT(c, 0xf23ffu);
    push32(c, 0xf2404u); f_000e6c68(c); X86_RET(c, 0xf2404u);
    X86_TICK(c, 9);
    // 0f2404  add esp, 0x10
    X86_AT(c, 0xf2404u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f2407  jmp 0xf244b
    X86_AT(c, 0xf2407u);
    goto L_f244b;
L_f2409:
    X86_TICK(c, 11);
    // 0f2409  push 0x6428
    X86_AT(c, 0xf2409u);
    { uint32_t v = 0x6428u; push32(c, v); }
    // 0f240e  push 7
    X86_AT(c, 0xf240eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2410  call 0xe5654
    X86_AT(c, 0xf2410u);
    push32(c, 0xf2415u); f_000e5654(c); X86_RET(c, 0xf2415u);
    X86_TICK(c, 33);
    // 0f2415  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2415u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f241a  lea edx, [eax + eax*4]
    X86_AT(c, 0xf241au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f241d  lea edx, [eax + edx*2]
    X86_AT(c, 0xf241du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2420  shl edx, 5
    X86_AT(c, 0xf2420u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2423  sub edx, eax
    X86_AT(c, 0xf2423u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2425  inc dword ptr [edx + 0xcdf23]
    X86_AT(c, 0xf2425u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF23u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f242b  add esp, 8
    X86_AT(c, 0xf242bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f242e  cmp dword ptr [edx + 0xcdf23], 0x63
    X86_AT(c, 0xf242eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF23u))), 0x63u, 0, 4);
    // 0f2435  jle 0xf2441
    X86_AT(c, 0xf2435u);
    if (x86_cc(c, 14)) { goto L_f2441; }
    X86_TICK(c, 2);
    // 0f2437  mov dword ptr [edx + 0xcdf23], 0x63
    X86_AT(c, 0xf2437u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF23u)), 0x63u);
L_f2441:
    X86_TICK(c, 9);
    // 0f2441  push 7
    X86_AT(c, 0xf2441u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2443  call 0xe6c68
    X86_AT(c, 0xf2443u);
    push32(c, 0xf2448u); f_000e6c68(c); X86_RET(c, 0xf2448u);
    X86_TICK(c, 2);
    // 0f2448  add esp, 4
    X86_AT(c, 0xf2448u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f244b:
    X86_TICK(c, 10);
    // 0f244b  ret 
    X86_AT(c, 0xf244bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf23d4u, "ran off the end of a function");
}
void f_000f244c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0f244c  mov eax, dword ptr [0xd4a68]
    X86_AT(c, 0xf244cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A68u)));
    // 0f2451  mov edx, eax
    X86_AT(c, 0xf2451u);
    c.r[2] = c.r[0];
    // 0f2453  and eax, 1
    X86_AT(c, 0xf2453u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1u, 4); }
    // 0f2458  and edx, edx
    X86_AT(c, 0xf2458u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0f245a  jge 0xf245f
    X86_AT(c, 0xf245au);
    if (x86_cc(c, 13)) { goto L_f245f; }
    X86_TICK(c, 2);
    // 0f245c  sub eax, 2
    X86_AT(c, 0xf245cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
L_f245f:
    X86_TICK(c, 7);
    // 0f245f  and eax, eax
    X86_AT(c, 0xf245fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f2461  jne 0xf246a
    X86_AT(c, 0xf2461u);
    if (x86_cc(c, 5)) { goto L_f246a; }
    X86_TICK(c, 7);
    // 0f2463  call 0xf2770
    X86_AT(c, 0xf2463u);
    push32(c, 0xf2468u); f_000f2770(c); X86_RET(c, 0xf2468u);
    X86_TICK(c, 7);
    // 0f2468  jmp 0xf246f
    X86_AT(c, 0xf2468u);
    goto L_f246f;
L_f246a:
    X86_TICK(c, 7);
    // 0f246a  call 0xf2628
    X86_AT(c, 0xf246au);
    push32(c, 0xf246fu); f_000f2628(c); X86_RET(c, 0xf246fu);
L_f246f:
    X86_TICK(c, 10);
    // 0f246f  ret 
    X86_AT(c, 0xf246fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf244cu, "ran off the end of a function");
}
void f_000f2470(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0f2470  push ebp
    X86_AT(c, 0xf2470u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f2471  mov ebp, esp
    X86_AT(c, 0xf2471u);
    c.r[5] = c.r[4];
    // 0f2473  push eax
    X86_AT(c, 0xf2473u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2474  push ebx
    X86_AT(c, 0xf2474u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f2475  push edi
    X86_AT(c, 0xf2475u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f2476  push 7
    X86_AT(c, 0xf2476u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2478  call 0xe693c
    X86_AT(c, 0xf2478u);
    push32(c, 0xf247du); f_000e693c(c); X86_RET(c, 0xf247du);
    X86_TICK(c, 11);
    // 0f247d  push 0x6474
    X86_AT(c, 0xf247du);
    { uint32_t v = 0x6474u; push32(c, v); }
    // 0f2482  push 7
    X86_AT(c, 0xf2482u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2484  call 0xe5654
    X86_AT(c, 0xf2484u);
    push32(c, 0xf2489u); f_000e5654(c); X86_RET(c, 0xf2489u);
    X86_TICK(c, 9);
    // 0f2489  push 7
    X86_AT(c, 0xf2489u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f248b  call 0xe6c68
    X86_AT(c, 0xf248bu);
    push32(c, 0xf2490u); f_000e6c68(c); X86_RET(c, 0xf2490u);
    X86_TICK(c, 32);
    // 0f2490  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2490u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2495  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2495u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2498  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2498u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f249b  shl edx, 5
    X86_AT(c, 0xf249bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f249e  sub edx, eax
    X86_AT(c, 0xf249eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f24a0  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf24a0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f24a6  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf24a6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f24ac  push 0
    X86_AT(c, 0xf24acu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f24ae  call 0xf3c24
    X86_AT(c, 0xf24aeu);
    push32(c, 0xf24b3u); f_000f3c24(c); X86_RET(c, 0xf24b3u);
    X86_TICK(c, 11);
    // 0f24b3  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf24b3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f24b7  push 7
    X86_AT(c, 0xf24b7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f24b9  call 0xe1a7c
    X86_AT(c, 0xf24b9u);
    push32(c, 0xf24beu); f_000e1a7c(c); X86_RET(c, 0xf24beu);
    X86_TICK(c, 12);
    // 0f24be  xchg edi, eax
    X86_AT(c, 0xf24beu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f24bf  add esp, 0x20
    X86_AT(c, 0xf24bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f24c2  and edi, edi
    X86_AT(c, 0xf24c2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f24c4  jne 0xf24e5
    X86_AT(c, 0xf24c4u);
    if (x86_cc(c, 5)) { goto L_f24e5; }
    X86_TICK(c, 9);
    // 0f24c6  push 3
    X86_AT(c, 0xf24c6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f24c8  call 0xe1944
    X86_AT(c, 0xf24c8u);
    push32(c, 0xf24cdu); f_000e1944(c); X86_RET(c, 0xf24cdu);
    X86_TICK(c, 11);
    // 0f24cd  push 0x648c
    X86_AT(c, 0xf24cdu);
    { uint32_t v = 0x648Cu; push32(c, v); }
    // 0f24d2  push 7
    X86_AT(c, 0xf24d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f24d4  call 0xe5654
    X86_AT(c, 0xf24d4u);
    push32(c, 0xf24d9u); f_000e5654(c); X86_RET(c, 0xf24d9u);
    X86_TICK(c, 9);
    // 0f24d9  push 7
    X86_AT(c, 0xf24d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f24db  call 0xe6c68
    X86_AT(c, 0xf24dbu);
    push32(c, 0xf24e0u); f_000e6c68(c); X86_RET(c, 0xf24e0u);
    X86_TICK(c, 9);
    // 0f24e0  add esp, 0x10
    X86_AT(c, 0xf24e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f24e3  jmp 0xf2548
    X86_AT(c, 0xf24e3u);
    goto L_f2548;
L_f24e5:
    X86_TICK(c, 21);
    // 0f24e5  mov ebx, edi
    X86_AT(c, 0xf24e5u);
    c.r[3] = c.r[7];
    // 0f24e7  add bl, 0x41
    X86_AT(c, 0xf24e7u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f24ea  lea eax, [ebp - 1]
    X86_AT(c, 0xf24eau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f24ed  push eax
    X86_AT(c, 0xf24edu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f24ee  push ebx
    X86_AT(c, 0xf24eeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f24ef  push 0xa
    X86_AT(c, 0xf24efu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f24f1  push 0xcfbe8
    X86_AT(c, 0xf24f1u);
    { uint32_t v = 0xCFBE8u; push32(c, v); }
    // 0f24f6  call 0xe53e0
    X86_AT(c, 0xf24f6u);
    push32(c, 0xf24fbu); f_000e53e0(c); X86_RET(c, 0xf24fbu);
    X86_TICK(c, 11);
    // 0f24fb  push eax
    X86_AT(c, 0xf24fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f24fc  push 7
    X86_AT(c, 0xf24fcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f24fe  call 0xe6cb0
    X86_AT(c, 0xf24feu);
    push32(c, 0xf2503u); f_000e6cb0(c); X86_RET(c, 0xf2503u);
    X86_TICK(c, 11);
    // 0f2503  push 0x64ac
    X86_AT(c, 0xf2503u);
    { uint32_t v = 0x64ACu; push32(c, v); }
    // 0f2508  push 7
    X86_AT(c, 0xf2508u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f250a  call 0xe5654
    X86_AT(c, 0xf250au);
    push32(c, 0xf250fu); f_000e5654(c); X86_RET(c, 0xf250fu);
    X86_TICK(c, 33);
    // 0f250f  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf250fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2514  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2514u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2517  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2517u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f251a  shl edx, 5
    X86_AT(c, 0xf251au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f251d  sub edx, eax
    X86_AT(c, 0xf251du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f251f  inc dword ptr [edx + edi*4 + 0xcdebf]
    X86_AT(c, 0xf251fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEBFu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f2526  add esp, 0x20
    X86_AT(c, 0xf2526u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f2529  cmp dword ptr [edx + edi*4 + 0xcdebf], 0x63
    X86_AT(c, 0xf2529u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEBFu))), 0x63u, 0, 4);
    // 0f2531  jle 0xf253e
    X86_AT(c, 0xf2531u);
    if (x86_cc(c, 14)) { goto L_f253e; }
    X86_TICK(c, 2);
    // 0f2533  mov dword ptr [edx + edi*4 + 0xcdebf], 0x63
    X86_AT(c, 0xf2533u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEBFu)), 0x63u);
L_f253e:
    X86_TICK(c, 9);
    // 0f253e  push 7
    X86_AT(c, 0xf253eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2540  call 0xe6c68
    X86_AT(c, 0xf2540u);
    push32(c, 0xf2545u); f_000e6c68(c); X86_RET(c, 0xf2545u);
    X86_TICK(c, 2);
    // 0f2545  add esp, 4
    X86_AT(c, 0xf2545u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f2548:
    X86_TICK(c, 24);
    // 0f2548  pop edi
    X86_AT(c, 0xf2548u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f2549  pop ebx
    X86_AT(c, 0xf2549u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f254a  leave 
    X86_AT(c, 0xf254au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f254b  ret 
    X86_AT(c, 0xf254bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2470u, "ran off the end of a function");
}
void f_000f254c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0f254c  push ebp
    X86_AT(c, 0xf254cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f254d  mov ebp, esp
    X86_AT(c, 0xf254du);
    c.r[5] = c.r[4];
    // 0f254f  push eax
    X86_AT(c, 0xf254fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2550  push ebx
    X86_AT(c, 0xf2550u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f2551  push edi
    X86_AT(c, 0xf2551u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f2552  push 7
    X86_AT(c, 0xf2552u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2554  call 0xe693c
    X86_AT(c, 0xf2554u);
    push32(c, 0xf2559u); f_000e693c(c); X86_RET(c, 0xf2559u);
    X86_TICK(c, 11);
    // 0f2559  push 0x64b8
    X86_AT(c, 0xf2559u);
    { uint32_t v = 0x64B8u; push32(c, v); }
    // 0f255e  push 7
    X86_AT(c, 0xf255eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2560  call 0xe5654
    X86_AT(c, 0xf2560u);
    push32(c, 0xf2565u); f_000e5654(c); X86_RET(c, 0xf2565u);
    X86_TICK(c, 9);
    // 0f2565  push 7
    X86_AT(c, 0xf2565u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2567  call 0xe6c68
    X86_AT(c, 0xf2567u);
    push32(c, 0xf256cu); f_000e6c68(c); X86_RET(c, 0xf256cu);
    X86_TICK(c, 32);
    // 0f256c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf256cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2571  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2571u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2574  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2574u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2577  shl edx, 5
    X86_AT(c, 0xf2577u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f257a  sub edx, eax
    X86_AT(c, 0xf257au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f257c  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf257cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f2582  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf2582u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f2588  push 0
    X86_AT(c, 0xf2588u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f258a  call 0xf3c24
    X86_AT(c, 0xf258au);
    push32(c, 0xf258fu); f_000f3c24(c); X86_RET(c, 0xf258fu);
    X86_TICK(c, 11);
    // 0f258f  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf258fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f2593  push 4
    X86_AT(c, 0xf2593u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f2595  call 0xe1a7c
    X86_AT(c, 0xf2595u);
    push32(c, 0xf259au); f_000e1a7c(c); X86_RET(c, 0xf259au);
    X86_TICK(c, 12);
    // 0f259a  xchg edi, eax
    X86_AT(c, 0xf259au);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f259b  add esp, 0x20
    X86_AT(c, 0xf259bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f259e  and edi, edi
    X86_AT(c, 0xf259eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f25a0  jne 0xf25c1
    X86_AT(c, 0xf25a0u);
    if (x86_cc(c, 5)) { goto L_f25c1; }
    X86_TICK(c, 9);
    // 0f25a2  push 3
    X86_AT(c, 0xf25a2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f25a4  call 0xe1944
    X86_AT(c, 0xf25a4u);
    push32(c, 0xf25a9u); f_000e1944(c); X86_RET(c, 0xf25a9u);
    X86_TICK(c, 11);
    // 0f25a9  push 0x64d0
    X86_AT(c, 0xf25a9u);
    { uint32_t v = 0x64D0u; push32(c, v); }
    // 0f25ae  push 7
    X86_AT(c, 0xf25aeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f25b0  call 0xe5654
    X86_AT(c, 0xf25b0u);
    push32(c, 0xf25b5u); f_000e5654(c); X86_RET(c, 0xf25b5u);
    X86_TICK(c, 9);
    // 0f25b5  push 7
    X86_AT(c, 0xf25b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f25b7  call 0xe6c68
    X86_AT(c, 0xf25b7u);
    push32(c, 0xf25bcu); f_000e6c68(c); X86_RET(c, 0xf25bcu);
    X86_TICK(c, 9);
    // 0f25bc  add esp, 0x10
    X86_AT(c, 0xf25bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f25bf  jmp 0xf2624
    X86_AT(c, 0xf25bfu);
    goto L_f2624;
L_f25c1:
    X86_TICK(c, 21);
    // 0f25c1  mov ebx, edi
    X86_AT(c, 0xf25c1u);
    c.r[3] = c.r[7];
    // 0f25c3  add bl, 0x41
    X86_AT(c, 0xf25c3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f25c6  lea eax, [ebp - 1]
    X86_AT(c, 0xf25c6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f25c9  push eax
    X86_AT(c, 0xf25c9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f25ca  push ebx
    X86_AT(c, 0xf25cau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f25cb  push 7
    X86_AT(c, 0xf25cbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f25cd  push 0xcf84c
    X86_AT(c, 0xf25cdu);
    { uint32_t v = 0xCF84Cu; push32(c, v); }
    // 0f25d2  call 0xe53e0
    X86_AT(c, 0xf25d2u);
    push32(c, 0xf25d7u); f_000e53e0(c); X86_RET(c, 0xf25d7u);
    X86_TICK(c, 11);
    // 0f25d7  push eax
    X86_AT(c, 0xf25d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f25d8  push 7
    X86_AT(c, 0xf25d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f25da  call 0xe6cb0
    X86_AT(c, 0xf25dau);
    push32(c, 0xf25dfu); f_000e6cb0(c); X86_RET(c, 0xf25dfu);
    X86_TICK(c, 11);
    // 0f25df  push 0x64f0
    X86_AT(c, 0xf25dfu);
    { uint32_t v = 0x64F0u; push32(c, v); }
    // 0f25e4  push 7
    X86_AT(c, 0xf25e4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f25e6  call 0xe5654
    X86_AT(c, 0xf25e6u);
    push32(c, 0xf25ebu); f_000e5654(c); X86_RET(c, 0xf25ebu);
    X86_TICK(c, 33);
    // 0f25eb  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf25ebu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f25f0  lea edx, [eax + eax*4]
    X86_AT(c, 0xf25f0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f25f3  lea edx, [eax + edx*2]
    X86_AT(c, 0xf25f3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f25f6  shl edx, 5
    X86_AT(c, 0xf25f6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f25f9  sub edx, eax
    X86_AT(c, 0xf25f9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f25fb  inc dword ptr [edx + edi*4 + 0xcdea2]
    X86_AT(c, 0xf25fbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEA2u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f2602  add esp, 0x20
    X86_AT(c, 0xf2602u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f2605  cmp dword ptr [edx + edi*4 + 0xcdea2], 0x63
    X86_AT(c, 0xf2605u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEA2u))), 0x63u, 0, 4);
    // 0f260d  jle 0xf261a
    X86_AT(c, 0xf260du);
    if (x86_cc(c, 14)) { goto L_f261a; }
    X86_TICK(c, 2);
    // 0f260f  mov dword ptr [edx + edi*4 + 0xcdea2], 0x63
    X86_AT(c, 0xf260fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEA2u)), 0x63u);
L_f261a:
    X86_TICK(c, 9);
    // 0f261a  push 7
    X86_AT(c, 0xf261au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f261c  call 0xe6c68
    X86_AT(c, 0xf261cu);
    push32(c, 0xf2621u); f_000e6c68(c); X86_RET(c, 0xf2621u);
    X86_TICK(c, 2);
    // 0f2621  add esp, 4
    X86_AT(c, 0xf2621u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f2624:
    X86_TICK(c, 24);
    // 0f2624  pop edi
    X86_AT(c, 0xf2624u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f2625  pop ebx
    X86_AT(c, 0xf2625u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f2626  leave 
    X86_AT(c, 0xf2626u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f2627  ret 
    X86_AT(c, 0xf2627u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf254cu, "ran off the end of a function");
}
void f_000f2628(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0f2628  push ebp
    X86_AT(c, 0xf2628u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f2629  mov ebp, esp
    X86_AT(c, 0xf2629u);
    c.r[5] = c.r[4];
    // 0f262b  push eax
    X86_AT(c, 0xf262bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f262c  push ebx
    X86_AT(c, 0xf262cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f262d  push edi
    X86_AT(c, 0xf262du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f262e  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf262eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f2632  push 7
    X86_AT(c, 0xf2632u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2634  call 0xe1a7c
    X86_AT(c, 0xf2634u);
    push32(c, 0xf2639u); f_000e1a7c(c); X86_RET(c, 0xf2639u);
    X86_TICK(c, 12);
    // 0f2639  xchg edi, eax
    X86_AT(c, 0xf2639u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f263a  add esp, 4
    X86_AT(c, 0xf263au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f263d  and edi, edi
    X86_AT(c, 0xf263du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f263f  jne 0xf2660
    X86_AT(c, 0xf263fu);
    if (x86_cc(c, 5)) { goto L_f2660; }
    X86_TICK(c, 9);
    // 0f2641  push 3
    X86_AT(c, 0xf2641u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f2643  call 0xe1944
    X86_AT(c, 0xf2643u);
    push32(c, 0xf2648u); f_000e1944(c); X86_RET(c, 0xf2648u);
    X86_TICK(c, 11);
    // 0f2648  push 0x64fc
    X86_AT(c, 0xf2648u);
    { uint32_t v = 0x64FCu; push32(c, v); }
    // 0f264d  push 7
    X86_AT(c, 0xf264du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f264f  call 0xe5654
    X86_AT(c, 0xf264fu);
    push32(c, 0xf2654u); f_000e5654(c); X86_RET(c, 0xf2654u);
    X86_TICK(c, 9);
    // 0f2654  push 7
    X86_AT(c, 0xf2654u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2656  call 0xe6c68
    X86_AT(c, 0xf2656u);
    push32(c, 0xf265bu); f_000e6c68(c); X86_RET(c, 0xf265bu);
    X86_TICK(c, 9);
    // 0f265b  add esp, 0x10
    X86_AT(c, 0xf265bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f265e  jmp 0xf26c3
    X86_AT(c, 0xf265eu);
    goto L_f26c3;
L_f2660:
    X86_TICK(c, 21);
    // 0f2660  mov ebx, edi
    X86_AT(c, 0xf2660u);
    c.r[3] = c.r[7];
    // 0f2662  add bl, 0x41
    X86_AT(c, 0xf2662u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f2665  lea eax, [ebp - 1]
    X86_AT(c, 0xf2665u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f2668  push eax
    X86_AT(c, 0xf2668u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2669  push ebx
    X86_AT(c, 0xf2669u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f266a  push 0xa
    X86_AT(c, 0xf266au);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f266c  push 0xcfbe8
    X86_AT(c, 0xf266cu);
    { uint32_t v = 0xCFBE8u; push32(c, v); }
    // 0f2671  call 0xe53e0
    X86_AT(c, 0xf2671u);
    push32(c, 0xf2676u); f_000e53e0(c); X86_RET(c, 0xf2676u);
    X86_TICK(c, 11);
    // 0f2676  push eax
    X86_AT(c, 0xf2676u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2677  push 7
    X86_AT(c, 0xf2677u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2679  call 0xe6cb0
    X86_AT(c, 0xf2679u);
    push32(c, 0xf267eu); f_000e6cb0(c); X86_RET(c, 0xf267eu);
    X86_TICK(c, 11);
    // 0f267e  push 0x651c
    X86_AT(c, 0xf267eu);
    { uint32_t v = 0x651Cu; push32(c, v); }
    // 0f2683  push 7
    X86_AT(c, 0xf2683u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2685  call 0xe5654
    X86_AT(c, 0xf2685u);
    push32(c, 0xf268au); f_000e5654(c); X86_RET(c, 0xf268au);
    X86_TICK(c, 33);
    // 0f268a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf268au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f268f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf268fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2692  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2692u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2695  shl edx, 5
    X86_AT(c, 0xf2695u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2698  sub edx, eax
    X86_AT(c, 0xf2698u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f269a  inc dword ptr [edx + edi*4 + 0xcdebf]
    X86_AT(c, 0xf269au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEBFu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f26a1  add esp, 0x20
    X86_AT(c, 0xf26a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f26a4  cmp dword ptr [edx + edi*4 + 0xcdebf], 0x63
    X86_AT(c, 0xf26a4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEBFu))), 0x63u, 0, 4);
    // 0f26ac  jle 0xf26b9
    X86_AT(c, 0xf26acu);
    if (x86_cc(c, 14)) { goto L_f26b9; }
    X86_TICK(c, 2);
    // 0f26ae  mov dword ptr [edx + edi*4 + 0xcdebf], 0x63
    X86_AT(c, 0xf26aeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEBFu)), 0x63u);
L_f26b9:
    X86_TICK(c, 9);
    // 0f26b9  push 7
    X86_AT(c, 0xf26b9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f26bb  call 0xe6c68
    X86_AT(c, 0xf26bbu);
    push32(c, 0xf26c0u); f_000e6c68(c); X86_RET(c, 0xf26c0u);
    X86_TICK(c, 2);
    // 0f26c0  add esp, 4
    X86_AT(c, 0xf26c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f26c3:
    X86_TICK(c, 24);
    // 0f26c3  pop edi
    X86_AT(c, 0xf26c3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f26c4  pop ebx
    X86_AT(c, 0xf26c4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f26c5  leave 
    X86_AT(c, 0xf26c5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f26c6  ret 
    X86_AT(c, 0xf26c6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2628u, "ran off the end of a function");
}
void f_000f26c8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0f26c8  push ebp
    X86_AT(c, 0xf26c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f26c9  mov ebp, esp
    X86_AT(c, 0xf26c9u);
    c.r[5] = c.r[4];
    // 0f26cb  push eax
    X86_AT(c, 0xf26cbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f26cc  push ebx
    X86_AT(c, 0xf26ccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f26cd  push edi
    X86_AT(c, 0xf26cdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f26ce  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf26ceu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f26d2  push 0xe
    X86_AT(c, 0xf26d2u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f26d4  call 0xe1a7c
    X86_AT(c, 0xf26d4u);
    push32(c, 0xf26d9u); f_000e1a7c(c); X86_RET(c, 0xf26d9u);
    X86_TICK(c, 12);
    // 0f26d9  xchg edi, eax
    X86_AT(c, 0xf26d9u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f26da  push 7
    X86_AT(c, 0xf26dau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f26dc  call 0xe693c
    X86_AT(c, 0xf26dcu);
    push32(c, 0xf26e1u); f_000e693c(c); X86_RET(c, 0xf26e1u);
    X86_TICK(c, 9);
    // 0f26e1  add esp, 8
    X86_AT(c, 0xf26e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f26e4  and edi, edi
    X86_AT(c, 0xf26e4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f26e6  jne 0xf2707
    X86_AT(c, 0xf26e6u);
    if (x86_cc(c, 5)) { goto L_f2707; }
    X86_TICK(c, 9);
    // 0f26e8  push 3
    X86_AT(c, 0xf26e8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f26ea  call 0xe1944
    X86_AT(c, 0xf26eau);
    push32(c, 0xf26efu); f_000e1944(c); X86_RET(c, 0xf26efu);
    X86_TICK(c, 11);
    // 0f26ef  push 0x6528
    X86_AT(c, 0xf26efu);
    { uint32_t v = 0x6528u; push32(c, v); }
    // 0f26f4  push 7
    X86_AT(c, 0xf26f4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f26f6  call 0xe5654
    X86_AT(c, 0xf26f6u);
    push32(c, 0xf26fbu); f_000e5654(c); X86_RET(c, 0xf26fbu);
    X86_TICK(c, 9);
    // 0f26fb  push 7
    X86_AT(c, 0xf26fbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f26fd  call 0xe6c68
    X86_AT(c, 0xf26fdu);
    push32(c, 0xf2702u); f_000e6c68(c); X86_RET(c, 0xf2702u);
    X86_TICK(c, 9);
    // 0f2702  add esp, 0x10
    X86_AT(c, 0xf2702u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f2705  jmp 0xf276b
    X86_AT(c, 0xf2705u);
    goto L_f276b;
L_f2707:
    X86_TICK(c, 21);
    // 0f2707  mov ebx, edi
    X86_AT(c, 0xf2707u);
    c.r[3] = c.r[7];
    // 0f2709  add bl, 0x41
    X86_AT(c, 0xf2709u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f270c  lea eax, [ebp - 1]
    X86_AT(c, 0xf270cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f270f  push eax
    X86_AT(c, 0xf270fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2710  push ebx
    X86_AT(c, 0xf2710u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f2711  push 0x10
    X86_AT(c, 0xf2711u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0f2713  push 0xd0638
    X86_AT(c, 0xf2713u);
    { uint32_t v = 0xD0638u; push32(c, v); }
    // 0f2718  call 0xe53e0
    X86_AT(c, 0xf2718u);
    push32(c, 0xf271du); f_000e53e0(c); X86_RET(c, 0xf271du);
    X86_TICK(c, 11);
    // 0f271d  push eax
    X86_AT(c, 0xf271du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f271e  push 7
    X86_AT(c, 0xf271eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2720  call 0xe6cb0
    X86_AT(c, 0xf2720u);
    push32(c, 0xf2725u); f_000e6cb0(c); X86_RET(c, 0xf2725u);
    X86_TICK(c, 11);
    // 0f2725  push 0x6548
    X86_AT(c, 0xf2725u);
    { uint32_t v = 0x6548u; push32(c, v); }
    // 0f272a  push 7
    X86_AT(c, 0xf272au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f272c  call 0xe5654
    X86_AT(c, 0xf272cu);
    push32(c, 0xf2731u); f_000e5654(c); X86_RET(c, 0xf2731u);
    X86_TICK(c, 34);
    // 0f2731  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2731u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2736  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2736u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2739  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2739u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f273c  shl edx, 5
    X86_AT(c, 0xf273cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f273f  sub edx, eax
    X86_AT(c, 0xf273fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2741  add dword ptr [edx + edi*4 + 0xcdee7], 3
    X86_AT(c, 0xf2741u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEE7u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x3u, 0, 4)); }
    // 0f2749  add esp, 0x20
    X86_AT(c, 0xf2749u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f274c  cmp dword ptr [edx + edi*4 + 0xcdee7], 0x63
    X86_AT(c, 0xf274cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEE7u))), 0x63u, 0, 4);
    // 0f2754  jle 0xf2761
    X86_AT(c, 0xf2754u);
    if (x86_cc(c, 14)) { goto L_f2761; }
    X86_TICK(c, 2);
    // 0f2756  mov dword ptr [edx + edi*4 + 0xcdee7], 0x63
    X86_AT(c, 0xf2756u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEE7u)), 0x63u);
L_f2761:
    X86_TICK(c, 9);
    // 0f2761  push 7
    X86_AT(c, 0xf2761u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2763  call 0xe6c68
    X86_AT(c, 0xf2763u);
    push32(c, 0xf2768u); f_000e6c68(c); X86_RET(c, 0xf2768u);
    X86_TICK(c, 2);
    // 0f2768  add esp, 4
    X86_AT(c, 0xf2768u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f276b:
    X86_TICK(c, 24);
    // 0f276b  pop edi
    X86_AT(c, 0xf276bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f276c  pop ebx
    X86_AT(c, 0xf276cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f276d  leave 
    X86_AT(c, 0xf276du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f276e  ret 
    X86_AT(c, 0xf276eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf26c8u, "ran off the end of a function");
}
void f_000f2770(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0f2770  push ebp
    X86_AT(c, 0xf2770u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f2771  mov ebp, esp
    X86_AT(c, 0xf2771u);
    c.r[5] = c.r[4];
    // 0f2773  push eax
    X86_AT(c, 0xf2773u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2774  push ebx
    X86_AT(c, 0xf2774u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f2775  push edi
    X86_AT(c, 0xf2775u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f2776  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf2776u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f277a  push 4
    X86_AT(c, 0xf277au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f277c  call 0xe1a7c
    X86_AT(c, 0xf277cu);
    push32(c, 0xf2781u); f_000e1a7c(c); X86_RET(c, 0xf2781u);
    X86_TICK(c, 12);
    // 0f2781  xchg edi, eax
    X86_AT(c, 0xf2781u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f2782  add esp, 4
    X86_AT(c, 0xf2782u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f2785  and edi, edi
    X86_AT(c, 0xf2785u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f2787  jne 0xf27a8
    X86_AT(c, 0xf2787u);
    if (x86_cc(c, 5)) { goto L_f27a8; }
    X86_TICK(c, 9);
    // 0f2789  push 3
    X86_AT(c, 0xf2789u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f278b  call 0xe1944
    X86_AT(c, 0xf278bu);
    push32(c, 0xf2790u); f_000e1944(c); X86_RET(c, 0xf2790u);
    X86_TICK(c, 11);
    // 0f2790  push 0x6554
    X86_AT(c, 0xf2790u);
    { uint32_t v = 0x6554u; push32(c, v); }
    // 0f2795  push 7
    X86_AT(c, 0xf2795u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2797  call 0xe5654
    X86_AT(c, 0xf2797u);
    push32(c, 0xf279cu); f_000e5654(c); X86_RET(c, 0xf279cu);
    X86_TICK(c, 9);
    // 0f279c  push 7
    X86_AT(c, 0xf279cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f279e  call 0xe6c68
    X86_AT(c, 0xf279eu);
    push32(c, 0xf27a3u); f_000e6c68(c); X86_RET(c, 0xf27a3u);
    X86_TICK(c, 9);
    // 0f27a3  add esp, 0x10
    X86_AT(c, 0xf27a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f27a6  jmp 0xf280b
    X86_AT(c, 0xf27a6u);
    goto L_f280b;
L_f27a8:
    X86_TICK(c, 21);
    // 0f27a8  mov ebx, edi
    X86_AT(c, 0xf27a8u);
    c.r[3] = c.r[7];
    // 0f27aa  add bl, 0x41
    X86_AT(c, 0xf27aau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f27ad  lea eax, [ebp - 1]
    X86_AT(c, 0xf27adu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f27b0  push eax
    X86_AT(c, 0xf27b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f27b1  push ebx
    X86_AT(c, 0xf27b1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f27b2  push 7
    X86_AT(c, 0xf27b2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f27b4  push 0xcf84c
    X86_AT(c, 0xf27b4u);
    { uint32_t v = 0xCF84Cu; push32(c, v); }
    // 0f27b9  call 0xe53e0
    X86_AT(c, 0xf27b9u);
    push32(c, 0xf27beu); f_000e53e0(c); X86_RET(c, 0xf27beu);
    X86_TICK(c, 11);
    // 0f27be  push eax
    X86_AT(c, 0xf27beu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f27bf  push 7
    X86_AT(c, 0xf27bfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f27c1  call 0xe6cb0
    X86_AT(c, 0xf27c1u);
    push32(c, 0xf27c6u); f_000e6cb0(c); X86_RET(c, 0xf27c6u);
    X86_TICK(c, 11);
    // 0f27c6  push 0x6574
    X86_AT(c, 0xf27c6u);
    { uint32_t v = 0x6574u; push32(c, v); }
    // 0f27cb  push 7
    X86_AT(c, 0xf27cbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f27cd  call 0xe5654
    X86_AT(c, 0xf27cdu);
    push32(c, 0xf27d2u); f_000e5654(c); X86_RET(c, 0xf27d2u);
    X86_TICK(c, 33);
    // 0f27d2  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf27d2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f27d7  lea edx, [eax + eax*4]
    X86_AT(c, 0xf27d7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f27da  lea edx, [eax + edx*2]
    X86_AT(c, 0xf27dau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f27dd  shl edx, 5
    X86_AT(c, 0xf27ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f27e0  sub edx, eax
    X86_AT(c, 0xf27e0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f27e2  inc dword ptr [edx + edi*4 + 0xcdea2]
    X86_AT(c, 0xf27e2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEA2u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f27e9  add esp, 0x20
    X86_AT(c, 0xf27e9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f27ec  cmp dword ptr [edx + edi*4 + 0xcdea2], 0x63
    X86_AT(c, 0xf27ecu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEA2u))), 0x63u, 0, 4);
    // 0f27f4  jle 0xf2801
    X86_AT(c, 0xf27f4u);
    if (x86_cc(c, 14)) { goto L_f2801; }
    X86_TICK(c, 2);
    // 0f27f6  mov dword ptr [edx + edi*4 + 0xcdea2], 0x63
    X86_AT(c, 0xf27f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEA2u)), 0x63u);
L_f2801:
    X86_TICK(c, 9);
    // 0f2801  push 7
    X86_AT(c, 0xf2801u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2803  call 0xe6c68
    X86_AT(c, 0xf2803u);
    push32(c, 0xf2808u); f_000e6c68(c); X86_RET(c, 0xf2808u);
    X86_TICK(c, 2);
    // 0f2808  add esp, 4
    X86_AT(c, 0xf2808u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f280b:
    X86_TICK(c, 24);
    // 0f280b  pop edi
    X86_AT(c, 0xf280bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f280c  pop ebx
    X86_AT(c, 0xf280cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f280d  leave 
    X86_AT(c, 0xf280du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f280e  ret 
    X86_AT(c, 0xf280eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2770u, "ran off the end of a function");
}
void f_000f2810(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0f2810  push ebp
    X86_AT(c, 0xf2810u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f2811  mov ebp, esp
    X86_AT(c, 0xf2811u);
    c.r[5] = c.r[4];
    // 0f2813  sub esp, 0xc
    X86_AT(c, 0xf2813u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0f2816  push esi
    X86_AT(c, 0xf2816u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2817  push edi
    X86_AT(c, 0xf2817u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f2818  push 7
    X86_AT(c, 0xf2818u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f281a  call 0xe693c
    X86_AT(c, 0xf281au);
    push32(c, 0xf281fu); f_000e693c(c); X86_RET(c, 0xf281fu);
    X86_TICK(c, 27);
    // 0f281f  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf281fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2824  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2824u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2827  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2827u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f282a  shl edx, 5
    X86_AT(c, 0xf282au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f282d  sub edx, eax
    X86_AT(c, 0xf282du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f282f  add esp, 4
    X86_AT(c, 0xf282fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f2832  cmp dword ptr [edx + 0xcdf57], 4
    X86_AT(c, 0xf2832u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x4u, 0, 4);
    // 0f2839  jl 0xf285b
    X86_AT(c, 0xf2839u);
    if (x86_cc(c, 12)) { goto L_f285b; }
    X86_TICK(c, 11);
    // 0f283b  push 0x6580
    X86_AT(c, 0xf283bu);
    { uint32_t v = 0x6580u; push32(c, v); }
    // 0f2840  push 7
    X86_AT(c, 0xf2840u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2842  call 0xe5654
    X86_AT(c, 0xf2842u);
    push32(c, 0xf2847u); f_000e5654(c); X86_RET(c, 0xf2847u);
    X86_TICK(c, 9);
    // 0f2847  push 7
    X86_AT(c, 0xf2847u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2849  call 0xe6c68
    X86_AT(c, 0xf2849u);
    push32(c, 0xf284eu); f_000e6c68(c); X86_RET(c, 0xf284eu);
    X86_TICK(c, 7);
    // 0f284e  call 0xfcd90
    X86_AT(c, 0xf284eu);
    push32(c, 0xf2853u); f_000fcd90(c); X86_RET(c, 0xf2853u);
    X86_TICK(c, 9);
    // 0f2853  add esp, 0xc
    X86_AT(c, 0xf2853u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f2856  jmp 0xf29fe
    X86_AT(c, 0xf2856u);
    goto L_f29fe;
L_f285b:
    X86_TICK(c, 25);
    // 0f285b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf285bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2860  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2860u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2863  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2863u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2866  shl edx, 5
    X86_AT(c, 0xf2866u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2869  sub edx, eax
    X86_AT(c, 0xf2869u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f286b  cmp dword ptr [edx + 0xcdf93], 0
    X86_AT(c, 0xf286bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF93u))), 0x0u, 0, 4);
    // 0f2872  jle 0xf28a9
    X86_AT(c, 0xf2872u);
    if (x86_cc(c, 14)) { goto L_f28a9; }
    X86_TICK(c, 11);
    // 0f2874  push 0x659c
    X86_AT(c, 0xf2874u);
    { uint32_t v = 0x659Cu; push32(c, v); }
    // 0f2879  push 7
    X86_AT(c, 0xf2879u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f287b  call 0xe5654
    X86_AT(c, 0xf287bu);
    push32(c, 0xf2880u); f_000e5654(c); X86_RET(c, 0xf2880u);
    X86_TICK(c, 9);
    // 0f2880  push 7
    X86_AT(c, 0xf2880u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2882  call 0xe6c68
    X86_AT(c, 0xf2882u);
    push32(c, 0xf2887u); f_000e6c68(c); X86_RET(c, 0xf2887u);
    X86_TICK(c, 9);
    // 0f2887  push 3
    X86_AT(c, 0xf2887u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f2889  call 0xe1944
    X86_AT(c, 0xf2889u);
    push32(c, 0xf288eu); f_000e1944(c); X86_RET(c, 0xf288eu);
    X86_TICK(c, 11);
    // 0f288e  push 0x65b8
    X86_AT(c, 0xf288eu);
    { uint32_t v = 0x65B8u; push32(c, v); }
    // 0f2893  push 7
    X86_AT(c, 0xf2893u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2895  call 0xe5654
    X86_AT(c, 0xf2895u);
    push32(c, 0xf289au); f_000e5654(c); X86_RET(c, 0xf289au);
    X86_TICK(c, 9);
    // 0f289a  push 7
    X86_AT(c, 0xf289au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f289c  call 0xe6c68
    X86_AT(c, 0xf289cu);
    push32(c, 0xf28a1u); f_000e6c68(c); X86_RET(c, 0xf28a1u);
    X86_TICK(c, 9);
    // 0f28a1  add esp, 0x1c
    X86_AT(c, 0xf28a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f28a4  jmp 0xf29fe
    X86_AT(c, 0xf28a4u);
    goto L_f29fe;
L_f28a9:
    X86_TICK(c, 11);
    // 0f28a9  push 0x65ec
    X86_AT(c, 0xf28a9u);
    { uint32_t v = 0x65ECu; push32(c, v); }
    // 0f28ae  push 7
    X86_AT(c, 0xf28aeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f28b0  call 0xe5654
    X86_AT(c, 0xf28b0u);
    push32(c, 0xf28b5u); f_000e5654(c); X86_RET(c, 0xf28b5u);
    X86_TICK(c, 34);
    // 0f28b5  lea eax, [ebp - 9]
    X86_AT(c, 0xf28b5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF7u);
    // 0f28b8  push eax
    X86_AT(c, 0xf28b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f28b9  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf28b9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f28be  lea edx, [eax + eax*4]
    X86_AT(c, 0xf28beu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f28c1  lea edx, [eax + edx*2]
    X86_AT(c, 0xf28c1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f28c4  shl edx, 5
    X86_AT(c, 0xf28c4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f28c7  sub edx, eax
    X86_AT(c, 0xf28c7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f28c9  mov al, byte ptr [edx + 0xcdebe]
    X86_AT(c, 0xf28c9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu))));
    // 0f28cf  push eax
    X86_AT(c, 0xf28cfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f28d0  push 0xa
    X86_AT(c, 0xf28d0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f28d2  push 0xcfbe8
    X86_AT(c, 0xf28d2u);
    { uint32_t v = 0xCFBE8u; push32(c, v); }
    // 0f28d7  call 0xe53e0
    X86_AT(c, 0xf28d7u);
    push32(c, 0xf28dcu); f_000e53e0(c); X86_RET(c, 0xf28dcu);
    X86_TICK(c, 11);
    // 0f28dc  push eax
    X86_AT(c, 0xf28dcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f28dd  push 7
    X86_AT(c, 0xf28ddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f28df  call 0xe6cb0
    X86_AT(c, 0xf28dfu);
    push32(c, 0xf28e4u); f_000e6cb0(c); X86_RET(c, 0xf28e4u);
    X86_TICK(c, 11);
    // 0f28e4  push 0x6608
    X86_AT(c, 0xf28e4u);
    { uint32_t v = 0x6608u; push32(c, v); }
    // 0f28e9  push 7
    X86_AT(c, 0xf28e9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f28eb  call 0xe5654
    X86_AT(c, 0xf28ebu);
    push32(c, 0xf28f0u); f_000e5654(c); X86_RET(c, 0xf28f0u);
    X86_TICK(c, 36);
    // 0f28f0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf28f0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f28f5  lea edx, [eax + eax*4]
    X86_AT(c, 0xf28f5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f28f8  lea edx, [eax + edx*2]
    X86_AT(c, 0xf28f8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f28fb  shl edx, 5
    X86_AT(c, 0xf28fbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f28fe  sub edx, eax
    X86_AT(c, 0xf28feu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2900  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf2900u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f2906  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf2906u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f2909  mov edx, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf2909u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f290f  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xf290fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0f2912  push edx
    X86_AT(c, 0xf2912u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f2913  push eax
    X86_AT(c, 0xf2913u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2914  call 0xef920
    X86_AT(c, 0xf2914u);
    push32(c, 0xf2919u); f_000ef920(c); X86_RET(c, 0xf2919u);
    X86_TICK(c, 9);
    // 0f2919  add esp, 0x30
    X86_AT(c, 0xf2919u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0f291c  cmp eax, 0x78
    X86_AT(c, 0xf291cu);
    (void)x86_sub(c, c.r[0], 0x78u, 0, 4);
    // 0f291f  jne 0xf292d
    X86_AT(c, 0xf291fu);
    if (x86_cc(c, 5)) { goto L_f292d; }
    X86_TICK(c, 9);
    // 0f2921  push 7
    X86_AT(c, 0xf2921u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2923  call 0xe6c68
    X86_AT(c, 0xf2923u);
    push32(c, 0xf2928u); f_000e6c68(c); X86_RET(c, 0xf2928u);
    X86_TICK(c, 9);
    // 0f2928  add esp, 4
    X86_AT(c, 0xf2928u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f292b  jmp 0xf2961
    X86_AT(c, 0xf292bu);
    goto L_f2961;
L_f292d:
    X86_TICK(c, 9);
    // 0f292d  push 7
    X86_AT(c, 0xf292du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f292f  call 0xe26c8
    X86_AT(c, 0xf292fu);
    push32(c, 0xf2934u); f_000e26c8(c); X86_RET(c, 0xf2934u);
    X86_TICK(c, 12);
    // 0f2934  xchg edi, eax
    X86_AT(c, 0xf2934u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f2935  add esp, 4
    X86_AT(c, 0xf2935u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f2938  cmp edi, 0xffffffff
    X86_AT(c, 0xf2938u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0f293b  jne 0xf294e
    X86_AT(c, 0xf293bu);
    if (x86_cc(c, 5)) { goto L_f294e; }
    X86_TICK(c, 7);
    // 0f293d  call 0xf326c
    X86_AT(c, 0xf293du);
    push32(c, 0xf2942u); f_000f326c(c); X86_RET(c, 0xf2942u);
    X86_TICK(c, 9);
    // 0f2942  push 7
    X86_AT(c, 0xf2942u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2944  call 0xe6c68
    X86_AT(c, 0xf2944u);
    push32(c, 0xf2949u); f_000e6c68(c); X86_RET(c, 0xf2949u);
    X86_TICK(c, 7);
    // 0f2949  jmp 0xf29fb
    X86_AT(c, 0xf2949u);
    goto L_f29fb;
L_f294e:
    X86_TICK(c, 19);
    // 0f294e  push 1
    X86_AT(c, 0xf294eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f2950  push edi
    X86_AT(c, 0xf2950u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f2951  lea eax, [ebp - 8]
    X86_AT(c, 0xf2951u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f2954  push eax
    X86_AT(c, 0xf2954u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2955  lea eax, [ebp - 4]
    X86_AT(c, 0xf2955u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f2958  push eax
    X86_AT(c, 0xf2958u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2959  call 0xeea58
    X86_AT(c, 0xf2959u);
    push32(c, 0xf295eu); f_000eea58(c); X86_RET(c, 0xf295eu);
    X86_TICK(c, 2);
    // 0f295e  add esp, 0x10
    X86_AT(c, 0xf295eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f2961:
    X86_TICK(c, 17);
    // 0f2961  push dword ptr [ebp - 8]
    X86_AT(c, 0xf2961u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0f2964  push dword ptr [ebp - 4]
    X86_AT(c, 0xf2964u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f2967  call 0xeeb6c
    X86_AT(c, 0xf2967u);
    push32(c, 0xf296cu); f_000eeb6c(c); X86_RET(c, 0xf296cu);
    X86_TICK(c, 12);
    // 0f296c  xchg esi, eax
    X86_AT(c, 0xf296cu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0f296d  add esp, 8
    X86_AT(c, 0xf296du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f2970  cmp esi, 0xffffffff
    X86_AT(c, 0xf2970u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0f2973  jne 0xf2983
    X86_AT(c, 0xf2973u);
    if (x86_cc(c, 5)) { goto L_f2983; }
    X86_TICK(c, 9);
    // 0f2975  push 3
    X86_AT(c, 0xf2975u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f2977  call 0xe1944
    X86_AT(c, 0xf2977u);
    push32(c, 0xf297cu); f_000e1944(c); X86_RET(c, 0xf297cu);
    X86_TICK(c, 9);
    // 0f297c  push 0x6618
    X86_AT(c, 0xf297cu);
    { uint32_t v = 0x6618u; push32(c, v); }
    // 0f2981  jmp 0xf29c5
    X86_AT(c, 0xf2981u);
    goto L_f29c5;
L_f2983:
    X86_TICK(c, 7);
    // 0f2983  call 0xf3024
    X86_AT(c, 0xf2983u);
    push32(c, 0xf2988u); f_000f3024(c); X86_RET(c, 0xf2988u);
    X86_TICK(c, 9);
    // 0f2988  push edi
    X86_AT(c, 0xf2988u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f2989  call 0xf309c
    X86_AT(c, 0xf2989u);
    push32(c, 0xf298eu); f_000f309c(c); X86_RET(c, 0xf298eu);
    X86_TICK(c, 9);
    // 0f298e  push 0x80
    X86_AT(c, 0xf298eu);
    { uint32_t v = 0x80u; push32(c, v); }
    // 0f2993  call 0xe1a7c
    X86_AT(c, 0xf2993u);
    push32(c, 0xf2998u); f_000e1a7c(c); X86_RET(c, 0xf2998u);
    X86_TICK(c, 28);
    // 0f2998  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xf2998u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f299e  lea ecx, [edx + edx*4]
    X86_AT(c, 0xf299eu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0f29a1  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xf29a1u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0f29a4  shl ecx, 5
    X86_AT(c, 0xf29a4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0f29a7  sub ecx, edx
    X86_AT(c, 0xf29a7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f29a9  add esp, 8
    X86_AT(c, 0xf29a9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f29ac  mov edx, dword ptr [ecx + 0xcde66]
    X86_AT(c, 0xf29acu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE66u)));
    // 0f29b2  add edx, 0x14
    X86_AT(c, 0xf29b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f29b5  cmp edx, eax
    X86_AT(c, 0xf29b5u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0f29b7  jge 0xf29d8
    X86_AT(c, 0xf29b7u);
    if (x86_cc(c, 13)) { goto L_f29d8; }
    X86_TICK(c, 9);
    // 0f29b9  push 0
    X86_AT(c, 0xf29b9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f29bb  call 0xe1944
    X86_AT(c, 0xf29bbu);
    push32(c, 0xf29c0u); f_000e1944(c); X86_RET(c, 0xf29c0u);
    X86_TICK(c, 2);
    // 0f29c0  push 0x6648
    X86_AT(c, 0xf29c0u);
    { uint32_t v = 0x6648u; push32(c, v); }
L_f29c5:
    X86_TICK(c, 9);
    // 0f29c5  push 7
    X86_AT(c, 0xf29c5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f29c7  call 0xe5654
    X86_AT(c, 0xf29c7u);
    push32(c, 0xf29ccu); f_000e5654(c); X86_RET(c, 0xf29ccu);
    X86_TICK(c, 9);
    // 0f29cc  push 7
    X86_AT(c, 0xf29ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f29ce  call 0xe6c68
    X86_AT(c, 0xf29ceu);
    push32(c, 0xf29d3u); f_000e6c68(c); X86_RET(c, 0xf29d3u);
    X86_TICK(c, 9);
    // 0f29d3  add esp, 0x10
    X86_AT(c, 0xf29d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f29d6  jmp 0xf29fe
    X86_AT(c, 0xf29d6u);
    goto L_f29fe;
L_f29d8:
    X86_TICK(c, 9);
    // 0f29d8  push esi
    X86_AT(c, 0xf29d8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f29d9  call 0xf2a04
    X86_AT(c, 0xf29d9u);
    push32(c, 0xf29deu); f_000f2a04(c); X86_RET(c, 0xf29deu);
    X86_TICK(c, 9);
    // 0f29de  add esp, 4
    X86_AT(c, 0xf29deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f29e1  dec eax
    X86_AT(c, 0xf29e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f29e2  jge 0xf29ec
    X86_AT(c, 0xf29e2u);
    if (x86_cc(c, 13)) { goto L_f29ec; }
    X86_TICK(c, 9);
    // 0f29e4  push esi
    X86_AT(c, 0xf29e4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f29e5  call 0xf2ae0
    X86_AT(c, 0xf29e5u);
    push32(c, 0xf29eau); f_000f2ae0(c); X86_RET(c, 0xf29eau);
    X86_TICK(c, 7);
    // 0f29ea  jmp 0xf29fb
    X86_AT(c, 0xf29eau);
    goto L_f29fb;
L_f29ec:
    X86_TICK(c, 12);
    // 0f29ec  cmp byte ptr [esi + 0xce3c8], 0x40
    X86_AT(c, 0xf29ecu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCE3C8u))), 0x40u, 0, 1);
    // 0f29f3  jne 0xf29fe
    X86_AT(c, 0xf29f3u);
    if (x86_cc(c, 5)) { goto L_f29fe; }
    X86_TICK(c, 9);
    // 0f29f5  push esi
    X86_AT(c, 0xf29f5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f29f6  call 0xf2f9c
    X86_AT(c, 0xf29f6u);
    push32(c, 0xf29fbu); f_000f2f9c(c); X86_RET(c, 0xf29fbu);
L_f29fb:
    X86_TICK(c, 2);
    // 0f29fb  add esp, 4
    X86_AT(c, 0xf29fbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f29fe:
    X86_TICK(c, 24);
    // 0f29fe  pop edi
    X86_AT(c, 0xf29feu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f29ff  pop esi
    X86_AT(c, 0xf29ffu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f2a00  leave 
    X86_AT(c, 0xf2a00u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f2a01  ret 
    X86_AT(c, 0xf2a01u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2810u, "ran off the end of a function");
}
void f_000f29fe(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0f29fe  pop edi
    X86_AT(c, 0xf29feu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f29ff  pop esi
    X86_AT(c, 0xf29ffu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f2a00  leave 
    X86_AT(c, 0xf2a00u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f2a01  ret 
    X86_AT(c, 0xf2a01u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf29feu, "ran off the end of a function");
}
void f_000f2a04(X86Cpu& c) {
    X86_TICK(c, 43);
    // 0f2a04  push ebp
    X86_AT(c, 0xf2a04u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f2a05  mov ebp, esp
    X86_AT(c, 0xf2a05u);
    c.r[5] = c.r[4];
    // 0f2a07  push eax
    X86_AT(c, 0xf2a07u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2a08  push ebx
    X86_AT(c, 0xf2a08u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f2a09  push esi
    X86_AT(c, 0xf2a09u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2a0a  push edi
    X86_AT(c, 0xf2a0au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f2a0b  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf2a0bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f2a0e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2a0eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2a13  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2a13u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2a16  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2a16u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2a19  shl edx, 5
    X86_AT(c, 0xf2a19u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2a1c  sub edx, eax
    X86_AT(c, 0xf2a1cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2a1e  push dword ptr [edx + 0xcde66]
    X86_AT(c, 0xf2a1eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u))); push32(c, v); }
    // 0f2a24  mov ebx, edx
    X86_AT(c, 0xf2a24u);
    c.r[3] = c.r[2];
    // 0f2a26  call 0xe1a7c
    X86_AT(c, 0xf2a26u);
    push32(c, 0xf2a2bu); f_000e1a7c(c); X86_RET(c, 0xf2a2bu);
    X86_TICK(c, 56);
    // 0f2a2b  movzx edx, byte ptr [ebx + 0xcdebe]
    X86_AT(c, 0xf2a2bu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEBEu)));
    // 0f2a32  shl edx, 3
    X86_AT(c, 0xf2a32u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0f2a35  movzx edx, dx
    X86_AT(c, 0xf2a35u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 0f2a38  sub edx, 0x208
    X86_AT(c, 0xf2a38u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x208u, 0, 4); }
    // 0f2a3e  add edx, dword ptr [ebx + 0xcde62]
    X86_AT(c, 0xf2a3eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDE62u))), 0, 4); }
    // 0f2a44  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf2a44u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f2a47  xchg edx, eax
    X86_AT(c, 0xf2a47u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0f2a48  cdq 
    X86_AT(c, 0xf2a48u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f2a49  sub eax, edx
    X86_AT(c, 0xf2a49u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f2a4b  sar eax, 1
    X86_AT(c, 0xf2a4bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0f2a4d  cdq 
    X86_AT(c, 0xf2a4du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f2a4e  sub eax, edx
    X86_AT(c, 0xf2a4eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f2a50  sar eax, 1
    X86_AT(c, 0xf2a50u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0f2a52  mov esi, dword ptr [ebp - 4]
    X86_AT(c, 0xf2a52u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0f2a55  add esi, eax
    X86_AT(c, 0xf2a55u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0f2a57  push 0x6660
    X86_AT(c, 0xf2a57u);
    { uint32_t v = 0x6660u; push32(c, v); }
    // 0f2a5c  push 7
    X86_AT(c, 0xf2a5cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2a5e  call 0xe5654
    X86_AT(c, 0xf2a5eu);
    push32(c, 0xf2a63u); f_000e5654(c); X86_RET(c, 0xf2a63u);
    X86_TICK(c, 13);
    // 0f2a63  push 4
    X86_AT(c, 0xf2a63u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f2a65  push esi
    X86_AT(c, 0xf2a65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2a66  push 7
    X86_AT(c, 0xf2a66u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2a68  call 0xe5630
    X86_AT(c, 0xf2a68u);
    push32(c, 0xf2a6du); f_000e5630(c); X86_RET(c, 0xf2a6du);
    X86_TICK(c, 11);
    // 0f2a6d  push 0x6674
    X86_AT(c, 0xf2a6du);
    { uint32_t v = 0x6674u; push32(c, v); }
    // 0f2a72  push 7
    X86_AT(c, 0xf2a72u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2a74  call 0xe5654
    X86_AT(c, 0xf2a74u);
    push32(c, 0xf2a79u); f_000e5654(c); X86_RET(c, 0xf2a79u);
    X86_TICK(c, 9);
    // 0f2a79  push 7
    X86_AT(c, 0xf2a79u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2a7b  call 0xe6c68
    X86_AT(c, 0xf2a7bu);
    push32(c, 0xf2a80u); f_000e6c68(c); X86_RET(c, 0xf2a80u);
    X86_TICK(c, 23);
    // 0f2a80  mov eax, dword ptr [edi*4 + 0xce608]
    X86_AT(c, 0xf2a80u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE608u)));
    // 0f2a87  sub eax, esi
    X86_AT(c, 0xf2a87u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f2a89  xchg esi, eax
    X86_AT(c, 0xf2a89u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0f2a8a  add esp, 0x24
    X86_AT(c, 0xf2a8au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0f2a8d  cmp dword ptr [0xcde44], 0
    X86_AT(c, 0xf2a8du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x0u, 0, 4);
    // 0f2a94  je 0xf2ad2
    X86_AT(c, 0xf2a94u);
    if (x86_cc(c, 4)) { goto L_f2ad2; }
    X86_TICK(c, 7);
    // 0f2a96  and esi, esi
    X86_AT(c, 0xf2a96u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0f2a98  jle 0xf2abc
    X86_AT(c, 0xf2a98u);
    if (x86_cc(c, 14)) { goto L_f2abc; }
    X86_TICK(c, 13);
    // 0f2a9a  push 4
    X86_AT(c, 0xf2a9au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f2a9c  push esi
    X86_AT(c, 0xf2a9cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2a9d  push 7
    X86_AT(c, 0xf2a9du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2a9f  call 0xe5630
    X86_AT(c, 0xf2a9fu);
    push32(c, 0xf2aa4u); f_000e5630(c); X86_RET(c, 0xf2aa4u);
    X86_TICK(c, 11);
    // 0f2aa4  push 0x6690
    X86_AT(c, 0xf2aa4u);
    { uint32_t v = 0x6690u; push32(c, v); }
    // 0f2aa9  push 7
    X86_AT(c, 0xf2aa9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2aab  call 0xe5654
    X86_AT(c, 0xf2aabu);
    push32(c, 0xf2ab0u); f_000e5654(c); X86_RET(c, 0xf2ab0u);
    X86_TICK(c, 9);
    // 0f2ab0  push 7
    X86_AT(c, 0xf2ab0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2ab2  call 0xe6c68
    X86_AT(c, 0xf2ab2u);
    push32(c, 0xf2ab7u); f_000e6c68(c); X86_RET(c, 0xf2ab7u);
    X86_TICK(c, 9);
    // 0f2ab7  add esp, 0x18
    X86_AT(c, 0xf2ab7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f2aba  jmp 0xf2ad2
    X86_AT(c, 0xf2abau);
    goto L_f2ad2;
L_f2abc:
    X86_TICK(c, 11);
    // 0f2abc  push 0x66b4
    X86_AT(c, 0xf2abcu);
    { uint32_t v = 0x66B4u; push32(c, v); }
    // 0f2ac1  push 7
    X86_AT(c, 0xf2ac1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2ac3  call 0xe5654
    X86_AT(c, 0xf2ac3u);
    push32(c, 0xf2ac8u); f_000e5654(c); X86_RET(c, 0xf2ac8u);
    X86_TICK(c, 9);
    // 0f2ac8  push 7
    X86_AT(c, 0xf2ac8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2aca  call 0xe6c68
    X86_AT(c, 0xf2acau);
    push32(c, 0xf2acfu); f_000e6c68(c); X86_RET(c, 0xf2acfu);
    X86_TICK(c, 2);
    // 0f2acf  add esp, 0xc
    X86_AT(c, 0xf2acfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f2ad2:
    X86_TICK(c, 32);
    // 0f2ad2  mov dword ptr [edi*4 + 0xce608], esi
    X86_AT(c, 0xf2ad2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE608u)), c.r[6]);
    // 0f2ad9  mov eax, esi
    X86_AT(c, 0xf2ad9u);
    c.r[0] = c.r[6];
    // 0f2adb  pop edi
    X86_AT(c, 0xf2adbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f2adc  pop esi
    X86_AT(c, 0xf2adcu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f2add  pop ebx
    X86_AT(c, 0xf2addu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f2ade  leave 
    X86_AT(c, 0xf2adeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f2adf  ret 
    X86_AT(c, 0xf2adfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2a04u, "ran off the end of a function");
}
void f_000f2ae0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0f2ae0  push ebp
    X86_AT(c, 0xf2ae0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f2ae1  mov ebp, esp
    X86_AT(c, 0xf2ae1u);
    c.r[5] = c.r[4];
    // 0f2ae3  sub esp, 0xc
    X86_AT(c, 0xf2ae3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0f2ae6  push ebx
    X86_AT(c, 0xf2ae6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f2ae7  push esi
    X86_AT(c, 0xf2ae7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2ae8  push edi
    X86_AT(c, 0xf2ae8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f2ae9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf2ae9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f2aec  push 8
    X86_AT(c, 0xf2aecu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f2aee  call 0xe1944
    X86_AT(c, 0xf2aeeu);
    push32(c, 0xf2af3u); f_000e1944(c); X86_RET(c, 0xf2af3u);
    X86_TICK(c, 9);
    // 0f2af3  push 2
    X86_AT(c, 0xf2af3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f2af5  call 0xe9740
    X86_AT(c, 0xf2af5u);
    push32(c, 0xf2afau); f_000e9740(c); X86_RET(c, 0xf2afau);
    X86_TICK(c, 9);
    // 0f2afa  push 8
    X86_AT(c, 0xf2afau);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f2afc  call 0xe1944
    X86_AT(c, 0xf2afcu);
    push32(c, 0xf2b01u); f_000e1944(c); X86_RET(c, 0xf2b01u);
    X86_TICK(c, 9);
    // 0f2b01  push 2
    X86_AT(c, 0xf2b01u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f2b03  call 0xe9740
    X86_AT(c, 0xf2b03u);
    push32(c, 0xf2b08u); f_000e9740(c); X86_RET(c, 0xf2b08u);
    X86_TICK(c, 9);
    // 0f2b08  push 8
    X86_AT(c, 0xf2b08u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f2b0a  call 0xe1944
    X86_AT(c, 0xf2b0au);
    push32(c, 0xf2b0fu); f_000e1944(c); X86_RET(c, 0xf2b0fu);
    X86_TICK(c, 9);
    // 0f2b0f  push 2
    X86_AT(c, 0xf2b0fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f2b11  call 0xe1a9c
    X86_AT(c, 0xf2b11u);
    push32(c, 0xf2b16u); f_000e1a9c(c); X86_RET(c, 0xf2b16u);
    X86_TICK(c, 9);
    // 0f2b16  push 7
    X86_AT(c, 0xf2b16u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2b18  call 0xe693c
    X86_AT(c, 0xf2b18u);
    push32(c, 0xf2b1du); f_000e693c(c); X86_RET(c, 0xf2b1du);
    X86_TICK(c, 14);
    // 0f2b1d  add esp, 0x1c
    X86_AT(c, 0xf2b1du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f2b20  cmp byte ptr [edi + 0xce3c8], 0x40
    X86_AT(c, 0xf2b20u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u))), 0x40u, 0, 1);
    // 0f2b27  jne 0xf2b49
    X86_AT(c, 0xf2b27u);
    if (x86_cc(c, 5)) { goto L_f2b49; }
    X86_TICK(c, 11);
    // 0f2b29  push 0x66e4
    X86_AT(c, 0xf2b29u);
    { uint32_t v = 0x66E4u; push32(c, v); }
    // 0f2b2e  push 7
    X86_AT(c, 0xf2b2eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2b30  call 0xe5654
    X86_AT(c, 0xf2b30u);
    push32(c, 0xf2b35u); f_000e5654(c); X86_RET(c, 0xf2b35u);
    X86_TICK(c, 9);
    // 0f2b35  push 7
    X86_AT(c, 0xf2b35u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2b37  call 0xe6c68
    X86_AT(c, 0xf2b37u);
    push32(c, 0xf2b3cu); f_000e6c68(c); X86_RET(c, 0xf2b3cu);
    X86_TICK(c, 7);
    // 0f2b3c  call 0xf4944
    X86_AT(c, 0xf2b3cu);
    push32(c, 0xf2b41u); f_000f4944(c); X86_RET(c, 0xf2b41u);
    X86_TICK(c, 9);
    // 0f2b41  add esp, 0xc
    X86_AT(c, 0xf2b41u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f2b44  jmp 0xf2f96
    X86_AT(c, 0xf2b44u);
    goto L_f2f96;
L_f2b49:
    X86_TICK(c, 11);
    // 0f2b49  push 0x672c
    X86_AT(c, 0xf2b49u);
    { uint32_t v = 0x672Cu; push32(c, v); }
    // 0f2b4e  push 7
    X86_AT(c, 0xf2b4eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2b50  call 0xe5654
    X86_AT(c, 0xf2b50u);
    push32(c, 0xf2b55u); f_000e5654(c); X86_RET(c, 0xf2b55u);
    X86_TICK(c, 17);
    // 0f2b55  movzx eax, byte ptr [edi + 0xce3e8]
    X86_AT(c, 0xf2b55u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3E8u)));
    // 0f2b5c  push eax
    X86_AT(c, 0xf2b5cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2b5d  push 7
    X86_AT(c, 0xf2b5du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2b5f  call 0xf4768
    X86_AT(c, 0xf2b5fu);
    push32(c, 0xf2b64u); f_000f4768(c); X86_RET(c, 0xf2b64u);
    X86_TICK(c, 11);
    // 0f2b64  push 0x674c
    X86_AT(c, 0xf2b64u);
    { uint32_t v = 0x674Cu; push32(c, v); }
    // 0f2b69  push 7
    X86_AT(c, 0xf2b69u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2b6b  call 0xe5654
    X86_AT(c, 0xf2b6bu);
    push32(c, 0xf2b70u); f_000e5654(c); X86_RET(c, 0xf2b70u);
    X86_TICK(c, 9);
    // 0f2b70  push 7
    X86_AT(c, 0xf2b70u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2b72  call 0xe6c68
    X86_AT(c, 0xf2b72u);
    push32(c, 0xf2b77u); f_000e6c68(c); X86_RET(c, 0xf2b77u);
    X86_TICK(c, 17);
    // 0f2b77  add esp, 0x1c
    X86_AT(c, 0xf2b77u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f2b7a  movzx ebx, byte ptr [edi + 0xce3c8]
    X86_AT(c, 0xf2b7au);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u)));
    // 0f2b81  mov edx, ebx
    X86_AT(c, 0xf2b81u);
    c.r[2] = c.r[3];
    // 0f2b83  cmp edx, 0x60
    X86_AT(c, 0xf2b83u);
    (void)x86_sub(c, c.r[2], 0x60u, 0, 4);
    // 0f2b86  je 0xf2bad
    X86_AT(c, 0xf2b86u);
    if (x86_cc(c, 4)) { goto L_f2bad; }
    X86_TICK(c, 7);
    // 0f2b88  cmp edx, 0xf0
    X86_AT(c, 0xf2b88u);
    (void)x86_sub(c, c.r[2], 0xF0u, 0, 4);
    // 0f2b8e  je 0xf2cea
    X86_AT(c, 0xf2b8eu);
    if (x86_cc(c, 4)) { goto L_f2cea; }
    X86_TICK(c, 7);
    // 0f2b94  cmp edx, 0xf8
    X86_AT(c, 0xf2b94u);
    (void)x86_sub(c, c.r[2], 0xF8u, 0, 4);
    // 0f2b9a  je 0xf2daf
    X86_AT(c, 0xf2b9au);
    if (x86_cc(c, 4)) { goto L_f2daf; }
    X86_TICK(c, 7);
    // 0f2ba0  cmp edx, 0xfc
    X86_AT(c, 0xf2ba0u);
    (void)x86_sub(c, c.r[2], 0xFCu, 0, 4);
    // 0f2ba6  je 0xf2bf6
    X86_AT(c, 0xf2ba6u);
    if (x86_cc(c, 4)) { goto L_f2bf6; }
    X86_TICK(c, 7);
    // 0f2ba8  jmp 0xf2e2d
    X86_AT(c, 0xf2ba8u);
    goto L_f2e2d;
L_f2bad:
    X86_TICK(c, 11);
    // 0f2bad  push 0x675c
    X86_AT(c, 0xf2badu);
    { uint32_t v = 0x675Cu; push32(c, v); }
    // 0f2bb2  push 7
    X86_AT(c, 0xf2bb2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2bb4  call 0xe5654
    X86_AT(c, 0xf2bb4u);
    push32(c, 0xf2bb9u); f_000e5654(c); X86_RET(c, 0xf2bb9u);
    X86_TICK(c, 9);
    // 0f2bb9  push 7
    X86_AT(c, 0xf2bb9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2bbb  call 0xe6c68
    X86_AT(c, 0xf2bbbu);
    push32(c, 0xf2bc0u); f_000e6c68(c); X86_RET(c, 0xf2bc0u);
    X86_TICK(c, 34);
    // 0f2bc0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2bc0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2bc5  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2bc5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2bc8  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2bc8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2bcb  shl edx, 5
    X86_AT(c, 0xf2bcbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2bce  sub edx, eax
    X86_AT(c, 0xf2bceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2bd0  add dword ptr [edx + 0xcde95], 2
    X86_AT(c, 0xf2bd0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE95u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x2u, 0, 4)); }
    // 0f2bd7  add esp, 0xc
    X86_AT(c, 0xf2bd7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f2bda  cmp dword ptr [edx + 0xcde95], 0x63
    X86_AT(c, 0xf2bdau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE95u))), 0x63u, 0, 4);
    // 0f2be1  jle 0xf2e2d
    X86_AT(c, 0xf2be1u);
    if (x86_cc(c, 14)) { goto L_f2e2d; }
    X86_TICK(c, 9);
    // 0f2be7  mov dword ptr [edx + 0xcde95], 0x63
    X86_AT(c, 0xf2be7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE95u)), 0x63u);
    // 0f2bf1  jmp 0xf2e2d
    X86_AT(c, 0xf2bf1u);
    goto L_f2e2d;
L_f2bf6:
    X86_TICK(c, 9);
    // 0f2bf6  push 0xf
    X86_AT(c, 0xf2bf6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f2bf8  call 0xe1a7c
    X86_AT(c, 0xf2bf8u);
    push32(c, 0xf2bfdu); f_000e1a7c(c); X86_RET(c, 0xf2bfdu);
    X86_TICK(c, 9);
    // 0f2bfd  add esp, 4
    X86_AT(c, 0xf2bfdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f2c00  cmp eax, 4
    X86_AT(c, 0xf2c00u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0f2c03  jge 0xf2c4d
    X86_AT(c, 0xf2c03u);
    if (x86_cc(c, 13)) { goto L_f2c4d; }
    X86_TICK(c, 11);
    // 0f2c05  push 0x6784
    X86_AT(c, 0xf2c05u);
    { uint32_t v = 0x6784u; push32(c, v); }
    // 0f2c0a  push 7
    X86_AT(c, 0xf2c0au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2c0c  call 0xe5654
    X86_AT(c, 0xf2c0cu);
    push32(c, 0xf2c11u); f_000e5654(c); X86_RET(c, 0xf2c11u);
    X86_TICK(c, 9);
    // 0f2c11  push 7
    X86_AT(c, 0xf2c11u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2c13  call 0xe6c68
    X86_AT(c, 0xf2c13u);
    push32(c, 0xf2c18u); f_000e6c68(c); X86_RET(c, 0xf2c18u);
    X86_TICK(c, 33);
    // 0f2c18  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2c18u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2c1d  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2c1du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2c20  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2c20u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2c23  shl edx, 5
    X86_AT(c, 0xf2c23u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2c26  sub edx, eax
    X86_AT(c, 0xf2c26u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2c28  inc dword ptr [edx + 0xcde9d]
    X86_AT(c, 0xf2c28u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE9Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f2c2e  add esp, 0xc
    X86_AT(c, 0xf2c2eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f2c31  cmp dword ptr [edx + 0xcde9d], 0x63
    X86_AT(c, 0xf2c31u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE9Du))), 0x63u, 0, 4);
    // 0f2c38  jle 0xf2e2d
    X86_AT(c, 0xf2c38u);
    if (x86_cc(c, 14)) { goto L_f2e2d; }
    X86_TICK(c, 9);
    // 0f2c3e  mov dword ptr [edx + 0xcde9d], 0x63
    X86_AT(c, 0xf2c3eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE9Du)), 0x63u);
    // 0f2c48  jmp 0xf2e2d
    X86_AT(c, 0xf2c48u);
    goto L_f2e2d;
L_f2c4d:
    X86_TICK(c, 9);
    // 0f2c4d  push 0xe
    X86_AT(c, 0xf2c4du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f2c4f  call 0xe1a7c
    X86_AT(c, 0xf2c4fu);
    push32(c, 0xf2c54u); f_000e1a7c(c); X86_RET(c, 0xf2c54u);
    X86_TICK(c, 12);
    // 0f2c54  xchg esi, eax
    X86_AT(c, 0xf2c54u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0f2c55  add esp, 4
    X86_AT(c, 0xf2c55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f2c58  and esi, esi
    X86_AT(c, 0xf2c58u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0f2c5a  je 0xf2e2d
    X86_AT(c, 0xf2c5au);
    if (x86_cc(c, 4)) { goto L_f2e2d; }
    X86_TICK(c, 24);
    // 0f2c60  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2c60u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2c65  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2c65u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2c68  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2c68u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2c6b  shl edx, 5
    X86_AT(c, 0xf2c6bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2c6e  sub edx, eax
    X86_AT(c, 0xf2c6eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2c70  push 2
    X86_AT(c, 0xf2c70u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f2c72  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xf2c72u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0f2c75  call 0xe1a7c
    X86_AT(c, 0xf2c75u);
    push32(c, 0xf2c7au); f_000e1a7c(c); X86_RET(c, 0xf2c7au);
    X86_TICK(c, 36);
    // 0f2c7a  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xf2c7au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2c80  lea ecx, [edx + edx*4]
    X86_AT(c, 0xf2c80u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0f2c83  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xf2c83u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0f2c86  shl ecx, 5
    X86_AT(c, 0xf2c86u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0f2c89  sub ecx, edx
    X86_AT(c, 0xf2c89u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f2c8b  add eax, 2
    X86_AT(c, 0xf2c8bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0f2c8e  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xf2c8eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f2c91  add eax, dword ptr [edx + esi*4 + 0xcdee7]
    X86_AT(c, 0xf2c91u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xCDEE7u))), 0, 4); }
    // 0f2c98  mov dword ptr [ecx + esi*4 + 0xcdee7], eax
    X86_AT(c, 0xf2c98u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + c.r[6] * 4 + 0xCDEE7u)), c.r[0]);
    // 0f2c9f  add esp, 4
    X86_AT(c, 0xf2c9fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f2ca2  cmp eax, 0x63
    X86_AT(c, 0xf2ca2u);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0f2ca5  jle 0xf2cb2
    X86_AT(c, 0xf2ca5u);
    if (x86_cc(c, 14)) { goto L_f2cb2; }
    X86_TICK(c, 2);
    // 0f2ca7  mov dword ptr [ecx + esi*4 + 0xcdee7], 0x63
    X86_AT(c, 0xf2ca7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + c.r[6] * 4 + 0xCDEE7u)), 0x63u);
L_f2cb2:
    X86_TICK(c, 21);
    // 0f2cb2  lea eax, [ebp - 1]
    X86_AT(c, 0xf2cb2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f2cb5  push eax
    X86_AT(c, 0xf2cb5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2cb6  mov eax, esi
    X86_AT(c, 0xf2cb6u);
    c.r[0] = c.r[6];
    // 0f2cb8  add al, 0x41
    X86_AT(c, 0xf2cb8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f2cba  push eax
    X86_AT(c, 0xf2cbau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2cbb  push 0x10
    X86_AT(c, 0xf2cbbu);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0f2cbd  push 0xd0638
    X86_AT(c, 0xf2cbdu);
    { uint32_t v = 0xD0638u; push32(c, v); }
    // 0f2cc2  call 0xe53e0
    X86_AT(c, 0xf2cc2u);
    push32(c, 0xf2cc7u); f_000e53e0(c); X86_RET(c, 0xf2cc7u);
    X86_TICK(c, 11);
    // 0f2cc7  push eax
    X86_AT(c, 0xf2cc7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2cc8  push 7
    X86_AT(c, 0xf2cc8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2cca  call 0xe6cb0
    X86_AT(c, 0xf2ccau);
    push32(c, 0xf2ccfu); f_000e6cb0(c); X86_RET(c, 0xf2ccfu);
    X86_TICK(c, 11);
    // 0f2ccf  push 0x67b0
    X86_AT(c, 0xf2ccfu);
    { uint32_t v = 0x67B0u; push32(c, v); }
    // 0f2cd4  push 7
    X86_AT(c, 0xf2cd4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2cd6  call 0xe5654
    X86_AT(c, 0xf2cd6u);
    push32(c, 0xf2cdbu); f_000e5654(c); X86_RET(c, 0xf2cdbu);
    X86_TICK(c, 9);
    // 0f2cdb  push 7
    X86_AT(c, 0xf2cdbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2cdd  call 0xe6c68
    X86_AT(c, 0xf2cddu);
    push32(c, 0xf2ce2u); f_000e6c68(c); X86_RET(c, 0xf2ce2u);
    X86_TICK(c, 9);
    // 0f2ce2  add esp, 0x24
    X86_AT(c, 0xf2ce2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0f2ce5  jmp 0xf2e2d
    X86_AT(c, 0xf2ce5u);
    goto L_f2e2d;
L_f2cea:
    X86_TICK(c, 9);
    // 0f2cea  push 0xf
    X86_AT(c, 0xf2ceau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f2cec  call 0xe1a7c
    X86_AT(c, 0xf2cecu);
    push32(c, 0xf2cf1u); f_000e1a7c(c); X86_RET(c, 0xf2cf1u);
    X86_TICK(c, 9);
    // 0f2cf1  add esp, 4
    X86_AT(c, 0xf2cf1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f2cf4  cmp eax, 4
    X86_AT(c, 0xf2cf4u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0f2cf7  jge 0xf2d41
    X86_AT(c, 0xf2cf7u);
    if (x86_cc(c, 13)) { goto L_f2d41; }
    X86_TICK(c, 11);
    // 0f2cf9  push 0x67bc
    X86_AT(c, 0xf2cf9u);
    { uint32_t v = 0x67BCu; push32(c, v); }
    // 0f2cfe  push 7
    X86_AT(c, 0xf2cfeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2d00  call 0xe5654
    X86_AT(c, 0xf2d00u);
    push32(c, 0xf2d05u); f_000e5654(c); X86_RET(c, 0xf2d05u);
    X86_TICK(c, 9);
    // 0f2d05  push 7
    X86_AT(c, 0xf2d05u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2d07  call 0xe6c68
    X86_AT(c, 0xf2d07u);
    push32(c, 0xf2d0cu); f_000e6c68(c); X86_RET(c, 0xf2d0cu);
    X86_TICK(c, 33);
    // 0f2d0c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2d0cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2d11  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2d11u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2d14  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2d14u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2d17  shl edx, 5
    X86_AT(c, 0xf2d17u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2d1a  sub edx, eax
    X86_AT(c, 0xf2d1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2d1c  inc dword ptr [edx + 0xcdefb]
    X86_AT(c, 0xf2d1cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEFBu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f2d22  add esp, 0xc
    X86_AT(c, 0xf2d22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f2d25  cmp dword ptr [edx + 0xcdefb], 0x63
    X86_AT(c, 0xf2d25u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEFBu))), 0x63u, 0, 4);
    // 0f2d2c  jle 0xf2e2d
    X86_AT(c, 0xf2d2cu);
    if (x86_cc(c, 14)) { goto L_f2e2d; }
    X86_TICK(c, 9);
    // 0f2d32  mov dword ptr [edx + 0xcdefb], 0x63
    X86_AT(c, 0xf2d32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEFBu)), 0x63u);
    // 0f2d3c  jmp 0xf2e2d
    X86_AT(c, 0xf2d3cu);
    goto L_f2e2d;
L_f2d41:
    X86_TICK(c, 9);
    // 0f2d41  push 3
    X86_AT(c, 0xf2d41u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f2d43  call 0xe1a7c
    X86_AT(c, 0xf2d43u);
    push32(c, 0xf2d48u); f_000e1a7c(c); X86_RET(c, 0xf2d48u);
    X86_TICK(c, 38);
    // 0f2d48  xchg esi, eax
    X86_AT(c, 0xf2d48u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0f2d49  inc esi
    X86_AT(c, 0xf2d49u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f2d4a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2d4au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2d4f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2d4fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2d52  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2d52u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2d55  shl edx, 5
    X86_AT(c, 0xf2d55u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2d58  sub edx, eax
    X86_AT(c, 0xf2d58u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2d5a  add dword ptr [edx + 0xcde5e], esi
    X86_AT(c, 0xf2d5au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0f2d60  push 3
    X86_AT(c, 0xf2d60u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f2d62  push esi
    X86_AT(c, 0xf2d62u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2d63  push 7
    X86_AT(c, 0xf2d63u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2d65  call 0xe5630
    X86_AT(c, 0xf2d65u);
    push32(c, 0xf2d6au); f_000e5630(c); X86_RET(c, 0xf2d6au);
    X86_TICK(c, 11);
    // 0f2d6a  push 0x67ec
    X86_AT(c, 0xf2d6au);
    { uint32_t v = 0x67ECu; push32(c, v); }
    // 0f2d6f  push 7
    X86_AT(c, 0xf2d6fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2d71  call 0xe5654
    X86_AT(c, 0xf2d71u);
    push32(c, 0xf2d76u); f_000e5654(c); X86_RET(c, 0xf2d76u);
    X86_TICK(c, 9);
    // 0f2d76  push 7
    X86_AT(c, 0xf2d76u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2d78  call 0xe6c68
    X86_AT(c, 0xf2d78u);
    push32(c, 0xf2d7du); f_000e6c68(c); X86_RET(c, 0xf2d7du);
    X86_TICK(c, 27);
    // 0f2d7d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2d7du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2d82  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2d82u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2d85  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2d85u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2d88  shl edx, 5
    X86_AT(c, 0xf2d88u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2d8b  sub edx, eax
    X86_AT(c, 0xf2d8bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2d8d  add esp, 0x1c
    X86_AT(c, 0xf2d8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f2d90  cmp dword ptr [edx + 0xcde5e], 0x3e7
    X86_AT(c, 0xf2d90u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Eu))), 0x3E7u, 0, 4);
    // 0f2d9a  jle 0xf2e2d
    X86_AT(c, 0xf2d9au);
    if (x86_cc(c, 14)) { goto L_f2e2d; }
    X86_TICK(c, 9);
    // 0f2da0  mov dword ptr [edx + 0xcde5e], 0x3e7
    X86_AT(c, 0xf2da0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Eu)), 0x3E7u);
    // 0f2daa  jmp 0xf2e2d
    X86_AT(c, 0xf2daau);
    goto L_f2e2d;
L_f2daf:
    X86_TICK(c, 9);
    // 0f2daf  push 9
    X86_AT(c, 0xf2dafu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f2db1  call 0xe1a7c
    X86_AT(c, 0xf2db1u);
    push32(c, 0xf2db6u); f_000e1a7c(c); X86_RET(c, 0xf2db6u);
    X86_TICK(c, 9);
    // 0f2db6  add esp, 4
    X86_AT(c, 0xf2db6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f2db9  cmp eax, 5
    X86_AT(c, 0xf2db9u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0f2dbc  jge 0xf2dee
    X86_AT(c, 0xf2dbcu);
    if (x86_cc(c, 13)) { goto L_f2dee; }
    X86_TICK(c, 31);
    // 0f2dbe  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2dbeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2dc3  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2dc3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2dc6  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2dc6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2dc9  shl edx, 5
    X86_AT(c, 0xf2dc9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2dcc  sub edx, eax
    X86_AT(c, 0xf2dccu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2dce  inc dword ptr [edx + 0xcdeeb]
    X86_AT(c, 0xf2dceu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEBu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f2dd4  cmp dword ptr [edx + 0xcdeeb], 0x63
    X86_AT(c, 0xf2dd4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEBu))), 0x63u, 0, 4);
    // 0f2ddb  jle 0xf2de7
    X86_AT(c, 0xf2ddbu);
    if (x86_cc(c, 14)) { goto L_f2de7; }
    X86_TICK(c, 2);
    // 0f2ddd  mov dword ptr [edx + 0xcdeeb], 0x63
    X86_AT(c, 0xf2dddu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEBu)), 0x63u);
L_f2de7:
    X86_TICK(c, 9);
    // 0f2de7  push 0x6810
    X86_AT(c, 0xf2de7u);
    { uint32_t v = 0x6810u; push32(c, v); }
    // 0f2dec  jmp 0xf2e1c
    X86_AT(c, 0xf2decu);
    goto L_f2e1c;
L_f2dee:
    X86_TICK(c, 31);
    // 0f2dee  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2deeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2df3  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2df3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2df6  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2df6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2df9  shl edx, 5
    X86_AT(c, 0xf2df9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2dfc  sub edx, eax
    X86_AT(c, 0xf2dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2dfe  inc dword ptr [edx + 0xcdeef]
    X86_AT(c, 0xf2dfeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEFu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f2e04  cmp dword ptr [edx + 0xcdeef], 0x63
    X86_AT(c, 0xf2e04u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEFu))), 0x63u, 0, 4);
    // 0f2e0b  jle 0xf2e17
    X86_AT(c, 0xf2e0bu);
    if (x86_cc(c, 14)) { goto L_f2e17; }
    X86_TICK(c, 2);
    // 0f2e0d  mov dword ptr [edx + 0xcdeef], 0x63
    X86_AT(c, 0xf2e0du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEFu)), 0x63u);
L_f2e17:
    X86_TICK(c, 2);
    // 0f2e17  push 0x6834
    X86_AT(c, 0xf2e17u);
    { uint32_t v = 0x6834u; push32(c, v); }
L_f2e1c:
    X86_TICK(c, 9);
    // 0f2e1c  push 7
    X86_AT(c, 0xf2e1cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2e1e  call 0xe5654
    X86_AT(c, 0xf2e1eu);
    push32(c, 0xf2e23u); f_000e5654(c); X86_RET(c, 0xf2e23u);
    X86_TICK(c, 9);
    // 0f2e23  push 7
    X86_AT(c, 0xf2e23u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2e25  call 0xe6c68
    X86_AT(c, 0xf2e25u);
    push32(c, 0xf2e2au); f_000e6c68(c); X86_RET(c, 0xf2e2au);
    X86_TICK(c, 2);
    // 0f2e2a  add esp, 0xc
    X86_AT(c, 0xf2e2au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f2e2d:
    X86_TICK(c, 25);
    // 0f2e2d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2e2du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2e32  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2e32u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2e35  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2e35u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2e38  shl edx, 5
    X86_AT(c, 0xf2e38u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2e3b  sub edx, eax
    X86_AT(c, 0xf2e3bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2e3d  cmp dword ptr [edx + 0xcde91], 0x3e8
    X86_AT(c, 0xf2e3du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u))), 0x3E8u, 0, 4);
    // 0f2e47  jge 0xf2e75
    X86_AT(c, 0xf2e47u);
    if (x86_cc(c, 13)) { goto L_f2e75; }
    X86_TICK(c, 11);
    // 0f2e49  mov eax, ebx
    X86_AT(c, 0xf2e49u);
    c.r[0] = c.r[3];
    // 0f2e4b  push eax
    X86_AT(c, 0xf2e4bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2e4c  call 0xe35e0
    X86_AT(c, 0xf2e4cu);
    push32(c, 0xf2e51u); f_000e35e0(c); X86_RET(c, 0xf2e51u);
    X86_TICK(c, 11);
    // 0f2e51  push 8
    X86_AT(c, 0xf2e51u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f2e53  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf2e53u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f2e56  call 0xe1a7c
    X86_AT(c, 0xf2e56u);
    push32(c, 0xf2e5bu); f_000e1a7c(c); X86_RET(c, 0xf2e5bu);
    X86_TICK(c, 35);
    // 0f2e5b  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xf2e5bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0f2e5e  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf2e5eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f2e61  cdq 
    X86_AT(c, 0xf2e61u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f2e62  sub eax, edx
    X86_AT(c, 0xf2e62u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f2e64  sar eax, 1
    X86_AT(c, 0xf2e64u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0f2e66  cdq 
    X86_AT(c, 0xf2e66u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f2e67  sub eax, edx
    X86_AT(c, 0xf2e67u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f2e69  sar eax, 1
    X86_AT(c, 0xf2e69u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0f2e6b  mov esi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xf2e6bu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0f2e6e  add esi, eax
    X86_AT(c, 0xf2e6eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0f2e70  add esi, 8
    X86_AT(c, 0xf2e70u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f2e73  jmp 0xf2e9d
    X86_AT(c, 0xf2e73u);
    goto L_f2e9d;
L_f2e75:
    X86_TICK(c, 11);
    // 0f2e75  mov eax, ebx
    X86_AT(c, 0xf2e75u);
    c.r[0] = c.r[3];
    // 0f2e77  push eax
    X86_AT(c, 0xf2e77u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2e78  call 0xe35e0
    X86_AT(c, 0xf2e78u);
    push32(c, 0xf2e7du); f_000e35e0(c); X86_RET(c, 0xf2e7du);
    X86_TICK(c, 11);
    // 0f2e7d  push 8
    X86_AT(c, 0xf2e7du);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f2e7f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf2e7fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f2e82  call 0xe1a7c
    X86_AT(c, 0xf2e82u);
    push32(c, 0xf2e87u); f_000e1a7c(c); X86_RET(c, 0xf2e87u);
    X86_TICK(c, 58);
    // 0f2e87  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xf2e87u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0f2e8a  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf2e8au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f2e8d  cdq 
    X86_AT(c, 0xf2e8du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f2e8e  mov ecx, 6
    X86_AT(c, 0xf2e8eu);
    c.r[1] = 0x6u;
    // 0f2e93  idiv ecx
    X86_AT(c, 0xf2e93u);
    x86_idiv(c, c.r[1], 4, 0xf2e93u);
    // 0f2e95  mov esi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xf2e95u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0f2e98  add esi, eax
    X86_AT(c, 0xf2e98u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0f2e9a  add esi, 2
    X86_AT(c, 0xf2e9au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_f2e9d:
    X86_TICK(c, 13);
    // 0f2e9d  add esp, 8
    X86_AT(c, 0xf2e9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f2ea0  push 0x685c
    X86_AT(c, 0xf2ea0u);
    { uint32_t v = 0x685Cu; push32(c, v); }
    // 0f2ea5  push 7
    X86_AT(c, 0xf2ea5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2ea7  call 0xe5654
    X86_AT(c, 0xf2ea7u);
    push32(c, 0xf2eacu); f_000e5654(c); X86_RET(c, 0xf2eacu);
    X86_TICK(c, 13);
    // 0f2eac  push 3
    X86_AT(c, 0xf2eacu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f2eae  push esi
    X86_AT(c, 0xf2eaeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2eaf  push 7
    X86_AT(c, 0xf2eafu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2eb1  call 0xe5630
    X86_AT(c, 0xf2eb1u);
    push32(c, 0xf2eb6u); f_000e5630(c); X86_RET(c, 0xf2eb6u);
    X86_TICK(c, 11);
    // 0f2eb6  push 0x6870
    X86_AT(c, 0xf2eb6u);
    { uint32_t v = 0x6870u; push32(c, v); }
    // 0f2ebb  push 7
    X86_AT(c, 0xf2ebbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2ebd  call 0xe5654
    X86_AT(c, 0xf2ebdu);
    push32(c, 0xf2ec2u); f_000e5654(c); X86_RET(c, 0xf2ec2u);
    X86_TICK(c, 9);
    // 0f2ec2  push 7
    X86_AT(c, 0xf2ec2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2ec4  call 0xe6c68
    X86_AT(c, 0xf2ec4u);
    push32(c, 0xf2ec9u); f_000e6c68(c); X86_RET(c, 0xf2ec9u);
    X86_TICK(c, 9);
    // 0f2ec9  push esi
    X86_AT(c, 0xf2ec9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2eca  call 0xef07c
    X86_AT(c, 0xf2ecau);
    push32(c, 0xf2ecfu); f_000ef07c(c); X86_RET(c, 0xf2ecfu);
    X86_TICK(c, 11);
    // 0f2ecf  mov eax, ebx
    X86_AT(c, 0xf2ecfu);
    c.r[0] = c.r[3];
    // 0f2ed1  push eax
    X86_AT(c, 0xf2ed1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2ed2  call 0xe35e0
    X86_AT(c, 0xf2ed2u);
    push32(c, 0xf2ed7u); f_000e35e0(c); X86_RET(c, 0xf2ed7u);
    X86_TICK(c, 11);
    // 0f2ed7  push 3
    X86_AT(c, 0xf2ed7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f2ed9  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf2ed9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f2edc  call 0xe1a7c
    X86_AT(c, 0xf2edcu);
    push32(c, 0xf2ee1u); f_000e1a7c(c); X86_RET(c, 0xf2ee1u);
    X86_TICK(c, 69);
    // 0f2ee1  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xf2ee1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0f2ee4  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf2ee4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f2ee7  cdq 
    X86_AT(c, 0xf2ee7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f2ee8  mov ecx, 0xa
    X86_AT(c, 0xf2ee8u);
    c.r[1] = 0xAu;
    // 0f2eed  idiv ecx
    X86_AT(c, 0xf2eedu);
    x86_idiv(c, c.r[1], 4, 0xf2eedu);
    // 0f2eef  mov esi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xf2eefu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0f2ef2  add esi, eax
    X86_AT(c, 0xf2ef2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0f2ef4  inc esi
    X86_AT(c, 0xf2ef4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f2ef5  push 0x6884
    X86_AT(c, 0xf2ef5u);
    { uint32_t v = 0x6884u; push32(c, v); }
    // 0f2efa  push 7
    X86_AT(c, 0xf2efau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2efc  call 0xe5654
    X86_AT(c, 0xf2efcu);
    push32(c, 0xf2f01u); f_000e5654(c); X86_RET(c, 0xf2f01u);
    X86_TICK(c, 13);
    // 0f2f01  push 3
    X86_AT(c, 0xf2f01u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f2f03  push esi
    X86_AT(c, 0xf2f03u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2f04  push 7
    X86_AT(c, 0xf2f04u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2f06  call 0xe5630
    X86_AT(c, 0xf2f06u);
    push32(c, 0xf2f0bu); f_000e5630(c); X86_RET(c, 0xf2f0bu);
    X86_TICK(c, 13);
    // 0f2f0b  add esp, 0x40
    X86_AT(c, 0xf2f0bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f2f0e  push 0x68a0
    X86_AT(c, 0xf2f0eu);
    { uint32_t v = 0x68A0u; push32(c, v); }
    // 0f2f13  push 7
    X86_AT(c, 0xf2f13u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2f15  call 0xe5654
    X86_AT(c, 0xf2f15u);
    push32(c, 0xf2f1au); f_000e5654(c); X86_RET(c, 0xf2f1au);
    X86_TICK(c, 9);
    // 0f2f1a  push 7
    X86_AT(c, 0xf2f1au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2f1c  call 0xe6c68
    X86_AT(c, 0xf2f1cu);
    push32(c, 0xf2f21u); f_000e6c68(c); X86_RET(c, 0xf2f21u);
    X86_TICK(c, 9);
    // 0f2f21  push esi
    X86_AT(c, 0xf2f21u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2f22  call 0xef048
    X86_AT(c, 0xf2f22u);
    push32(c, 0xf2f27u); f_000ef048(c); X86_RET(c, 0xf2f27u);
    X86_TICK(c, 4);
    // 0f2f27  sub esi, esi
    X86_AT(c, 0xf2f27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f2f29  add esp, 0x10
    X86_AT(c, 0xf2f29u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f2f2c:
    X86_TICK(c, 7);
    // 0f2f2c  cmp esi, 8
    X86_AT(c, 0xf2f2cu);
    (void)x86_sub(c, c.r[6], 0x8u, 0, 4);
    // 0f2f2f  jge 0xf2f3f
    X86_AT(c, 0xf2f2fu);
    if (x86_cc(c, 13)) { goto L_f2f3f; }
    X86_TICK(c, 11);
    // 0f2f31  mov dword ptr [esi*4 + 0xce508], 2
    X86_AT(c, 0xf2f31u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE508u)), 0x2u);
    // 0f2f3c  inc esi
    X86_AT(c, 0xf2f3cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f2f3d  jmp 0xf2f2c
    X86_AT(c, 0xf2f3du);
    X86_POLL(c, 0xf2f2cu); goto L_f2f2c;
L_f2f3f:
    X86_TICK(c, 7);
    // 0f2f3f  cmp ebx, 0x48
    X86_AT(c, 0xf2f3fu);
    (void)x86_sub(c, c.r[3], 0x48u, 0, 4);
    // 0f2f42  jne 0xf2f56
    X86_AT(c, 0xf2f42u);
    if (x86_cc(c, 5)) { goto L_f2f56; }
    X86_TICK(c, 19);
    // 0f2f44  push dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xf2f44u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u))); push32(c, v); }
    // 0f2f4b  push dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xf2f4bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u))); push32(c, v); }
    // 0f2f52  push 0x73
    X86_AT(c, 0xf2f52u);
    { uint32_t v = 0x73u; push32(c, v); }
    // 0f2f54  jmp 0xf2f66
    X86_AT(c, 0xf2f54u);
    goto L_f2f66;
L_f2f56:
    X86_TICK(c, 12);
    // 0f2f56  push dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xf2f56u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u))); push32(c, v); }
    // 0f2f5d  push dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xf2f5du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u))); push32(c, v); }
    // 0f2f64  push 0
    X86_AT(c, 0xf2f64u);
    { uint32_t v = 0x0u; push32(c, v); }
L_f2f66:
    X86_TICK(c, 7);
    // 0f2f66  call 0xf3c24
    X86_AT(c, 0xf2f66u);
    push32(c, 0xf2f6bu); f_000f3c24(c); X86_RET(c, 0xf2f6bu);
    X86_TICK(c, 16);
    // 0f2f6b  add esp, 0xc
    X86_AT(c, 0xf2f6bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f2f6e  mov eax, 0xffffffff
    X86_AT(c, 0xf2f6eu);
    c.r[0] = 0xFFFFFFFFu;
    // 0f2f73  mov dword ptr [edi*4 + 0xce408], eax
    X86_AT(c, 0xf2f73u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)), c.r[0]);
    // 0f2f7a  mov dword ptr [edi*4 + 0xce488], eax
    X86_AT(c, 0xf2f7au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)), c.r[0]);
    // 0f2f81  sub eax, eax
    X86_AT(c, 0xf2f81u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2f83  mov byte ptr [edi + 0xce3c8], al
    X86_AT(c, 0xf2f83u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u)), g8(c, 0));
    // 0f2f89  mov byte ptr [edi + 0xce3e8], al
    X86_AT(c, 0xf2f89u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3E8u)), g8(c, 0));
    // 0f2f8f  mov dword ptr [edi*4 + 0xce608], eax
    X86_AT(c, 0xf2f8fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE608u)), c.r[0]);
L_f2f96:
    X86_TICK(c, 28);
    // 0f2f96  pop edi
    X86_AT(c, 0xf2f96u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f2f97  pop esi
    X86_AT(c, 0xf2f97u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f2f98  pop ebx
    X86_AT(c, 0xf2f98u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f2f99  leave 
    X86_AT(c, 0xf2f99u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f2f9a  ret 
    X86_AT(c, 0xf2f9au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2ae0u, "ran off the end of a function");
}
void f_000f2e2d(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0f2e2d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf2e2du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f2e32  lea edx, [eax + eax*4]
    X86_AT(c, 0xf2e32u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f2e35  lea edx, [eax + edx*2]
    X86_AT(c, 0xf2e35u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f2e38  shl edx, 5
    X86_AT(c, 0xf2e38u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f2e3b  sub edx, eax
    X86_AT(c, 0xf2e3bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2e3d  cmp dword ptr [edx + 0xcde91], 0x3e8
    X86_AT(c, 0xf2e3du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u))), 0x3E8u, 0, 4);
    // 0f2e47  jge 0xf2e75
    X86_AT(c, 0xf2e47u);
    if (x86_cc(c, 13)) { goto L_f2e75; }
    X86_TICK(c, 11);
    // 0f2e49  mov eax, ebx
    X86_AT(c, 0xf2e49u);
    c.r[0] = c.r[3];
    // 0f2e4b  push eax
    X86_AT(c, 0xf2e4bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2e4c  call 0xe35e0
    X86_AT(c, 0xf2e4cu);
    push32(c, 0xf2e51u); f_000e35e0(c); X86_RET(c, 0xf2e51u);
    X86_TICK(c, 11);
    // 0f2e51  push 8
    X86_AT(c, 0xf2e51u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f2e53  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf2e53u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f2e56  call 0xe1a7c
    X86_AT(c, 0xf2e56u);
    push32(c, 0xf2e5bu); f_000e1a7c(c); X86_RET(c, 0xf2e5bu);
    X86_TICK(c, 35);
    // 0f2e5b  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xf2e5bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0f2e5e  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf2e5eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f2e61  cdq 
    X86_AT(c, 0xf2e61u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f2e62  sub eax, edx
    X86_AT(c, 0xf2e62u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f2e64  sar eax, 1
    X86_AT(c, 0xf2e64u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0f2e66  cdq 
    X86_AT(c, 0xf2e66u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f2e67  sub eax, edx
    X86_AT(c, 0xf2e67u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f2e69  sar eax, 1
    X86_AT(c, 0xf2e69u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0f2e6b  mov esi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xf2e6bu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0f2e6e  add esi, eax
    X86_AT(c, 0xf2e6eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0f2e70  add esi, 8
    X86_AT(c, 0xf2e70u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f2e73  jmp 0xf2e9d
    X86_AT(c, 0xf2e73u);
    goto L_f2e9d;
L_f2e75:
    X86_TICK(c, 11);
    // 0f2e75  mov eax, ebx
    X86_AT(c, 0xf2e75u);
    c.r[0] = c.r[3];
    // 0f2e77  push eax
    X86_AT(c, 0xf2e77u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2e78  call 0xe35e0
    X86_AT(c, 0xf2e78u);
    push32(c, 0xf2e7du); f_000e35e0(c); X86_RET(c, 0xf2e7du);
    X86_TICK(c, 11);
    // 0f2e7d  push 8
    X86_AT(c, 0xf2e7du);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f2e7f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf2e7fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f2e82  call 0xe1a7c
    X86_AT(c, 0xf2e82u);
    push32(c, 0xf2e87u); f_000e1a7c(c); X86_RET(c, 0xf2e87u);
    X86_TICK(c, 58);
    // 0f2e87  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xf2e87u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0f2e8a  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf2e8au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f2e8d  cdq 
    X86_AT(c, 0xf2e8du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f2e8e  mov ecx, 6
    X86_AT(c, 0xf2e8eu);
    c.r[1] = 0x6u;
    // 0f2e93  idiv ecx
    X86_AT(c, 0xf2e93u);
    x86_idiv(c, c.r[1], 4, 0xf2e93u);
    // 0f2e95  mov esi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xf2e95u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0f2e98  add esi, eax
    X86_AT(c, 0xf2e98u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0f2e9a  add esi, 2
    X86_AT(c, 0xf2e9au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_f2e9d:
    X86_TICK(c, 13);
    // 0f2e9d  add esp, 8
    X86_AT(c, 0xf2e9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f2ea0  push 0x685c
    X86_AT(c, 0xf2ea0u);
    { uint32_t v = 0x685Cu; push32(c, v); }
    // 0f2ea5  push 7
    X86_AT(c, 0xf2ea5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2ea7  call 0xe5654
    X86_AT(c, 0xf2ea7u);
    push32(c, 0xf2eacu); f_000e5654(c); X86_RET(c, 0xf2eacu);
    X86_TICK(c, 13);
    // 0f2eac  push 3
    X86_AT(c, 0xf2eacu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f2eae  push esi
    X86_AT(c, 0xf2eaeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2eaf  push 7
    X86_AT(c, 0xf2eafu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2eb1  call 0xe5630
    X86_AT(c, 0xf2eb1u);
    push32(c, 0xf2eb6u); f_000e5630(c); X86_RET(c, 0xf2eb6u);
    X86_TICK(c, 11);
    // 0f2eb6  push 0x6870
    X86_AT(c, 0xf2eb6u);
    { uint32_t v = 0x6870u; push32(c, v); }
    // 0f2ebb  push 7
    X86_AT(c, 0xf2ebbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2ebd  call 0xe5654
    X86_AT(c, 0xf2ebdu);
    push32(c, 0xf2ec2u); f_000e5654(c); X86_RET(c, 0xf2ec2u);
    X86_TICK(c, 9);
    // 0f2ec2  push 7
    X86_AT(c, 0xf2ec2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2ec4  call 0xe6c68
    X86_AT(c, 0xf2ec4u);
    push32(c, 0xf2ec9u); f_000e6c68(c); X86_RET(c, 0xf2ec9u);
    X86_TICK(c, 9);
    // 0f2ec9  push esi
    X86_AT(c, 0xf2ec9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2eca  call 0xef07c
    X86_AT(c, 0xf2ecau);
    push32(c, 0xf2ecfu); f_000ef07c(c); X86_RET(c, 0xf2ecfu);
    X86_TICK(c, 11);
    // 0f2ecf  mov eax, ebx
    X86_AT(c, 0xf2ecfu);
    c.r[0] = c.r[3];
    // 0f2ed1  push eax
    X86_AT(c, 0xf2ed1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2ed2  call 0xe35e0
    X86_AT(c, 0xf2ed2u);
    push32(c, 0xf2ed7u); f_000e35e0(c); X86_RET(c, 0xf2ed7u);
    X86_TICK(c, 11);
    // 0f2ed7  push 3
    X86_AT(c, 0xf2ed7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f2ed9  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf2ed9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f2edc  call 0xe1a7c
    X86_AT(c, 0xf2edcu);
    push32(c, 0xf2ee1u); f_000e1a7c(c); X86_RET(c, 0xf2ee1u);
    X86_TICK(c, 69);
    // 0f2ee1  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xf2ee1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0f2ee4  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xf2ee4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0f2ee7  cdq 
    X86_AT(c, 0xf2ee7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f2ee8  mov ecx, 0xa
    X86_AT(c, 0xf2ee8u);
    c.r[1] = 0xAu;
    // 0f2eed  idiv ecx
    X86_AT(c, 0xf2eedu);
    x86_idiv(c, c.r[1], 4, 0xf2eedu);
    // 0f2eef  mov esi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xf2eefu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0f2ef2  add esi, eax
    X86_AT(c, 0xf2ef2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0f2ef4  inc esi
    X86_AT(c, 0xf2ef4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f2ef5  push 0x6884
    X86_AT(c, 0xf2ef5u);
    { uint32_t v = 0x6884u; push32(c, v); }
    // 0f2efa  push 7
    X86_AT(c, 0xf2efau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2efc  call 0xe5654
    X86_AT(c, 0xf2efcu);
    push32(c, 0xf2f01u); f_000e5654(c); X86_RET(c, 0xf2f01u);
    X86_TICK(c, 13);
    // 0f2f01  push 3
    X86_AT(c, 0xf2f01u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f2f03  push esi
    X86_AT(c, 0xf2f03u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2f04  push 7
    X86_AT(c, 0xf2f04u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2f06  call 0xe5630
    X86_AT(c, 0xf2f06u);
    push32(c, 0xf2f0bu); f_000e5630(c); X86_RET(c, 0xf2f0bu);
    X86_TICK(c, 13);
    // 0f2f0b  add esp, 0x40
    X86_AT(c, 0xf2f0bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f2f0e  push 0x68a0
    X86_AT(c, 0xf2f0eu);
    { uint32_t v = 0x68A0u; push32(c, v); }
    // 0f2f13  push 7
    X86_AT(c, 0xf2f13u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2f15  call 0xe5654
    X86_AT(c, 0xf2f15u);
    push32(c, 0xf2f1au); f_000e5654(c); X86_RET(c, 0xf2f1au);
    X86_TICK(c, 9);
    // 0f2f1a  push 7
    X86_AT(c, 0xf2f1au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2f1c  call 0xe6c68
    X86_AT(c, 0xf2f1cu);
    push32(c, 0xf2f21u); f_000e6c68(c); X86_RET(c, 0xf2f21u);
    X86_TICK(c, 9);
    // 0f2f21  push esi
    X86_AT(c, 0xf2f21u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2f22  call 0xef048
    X86_AT(c, 0xf2f22u);
    push32(c, 0xf2f27u); f_000ef048(c); X86_RET(c, 0xf2f27u);
    X86_TICK(c, 4);
    // 0f2f27  sub esi, esi
    X86_AT(c, 0xf2f27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f2f29  add esp, 0x10
    X86_AT(c, 0xf2f29u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f2f2c:
    X86_TICK(c, 7);
    // 0f2f2c  cmp esi, 8
    X86_AT(c, 0xf2f2cu);
    (void)x86_sub(c, c.r[6], 0x8u, 0, 4);
    // 0f2f2f  jge 0xf2f3f
    X86_AT(c, 0xf2f2fu);
    if (x86_cc(c, 13)) { goto L_f2f3f; }
    X86_TICK(c, 11);
    // 0f2f31  mov dword ptr [esi*4 + 0xce508], 2
    X86_AT(c, 0xf2f31u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE508u)), 0x2u);
    // 0f2f3c  inc esi
    X86_AT(c, 0xf2f3cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f2f3d  jmp 0xf2f2c
    X86_AT(c, 0xf2f3du);
    X86_POLL(c, 0xf2f2cu); goto L_f2f2c;
L_f2f3f:
    X86_TICK(c, 7);
    // 0f2f3f  cmp ebx, 0x48
    X86_AT(c, 0xf2f3fu);
    (void)x86_sub(c, c.r[3], 0x48u, 0, 4);
    // 0f2f42  jne 0xf2f56
    X86_AT(c, 0xf2f42u);
    if (x86_cc(c, 5)) { goto L_f2f56; }
    X86_TICK(c, 19);
    // 0f2f44  push dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xf2f44u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u))); push32(c, v); }
    // 0f2f4b  push dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xf2f4bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u))); push32(c, v); }
    // 0f2f52  push 0x73
    X86_AT(c, 0xf2f52u);
    { uint32_t v = 0x73u; push32(c, v); }
    // 0f2f54  jmp 0xf2f66
    X86_AT(c, 0xf2f54u);
    goto L_f2f66;
L_f2f56:
    X86_TICK(c, 12);
    // 0f2f56  push dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xf2f56u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u))); push32(c, v); }
    // 0f2f5d  push dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xf2f5du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u))); push32(c, v); }
    // 0f2f64  push 0
    X86_AT(c, 0xf2f64u);
    { uint32_t v = 0x0u; push32(c, v); }
L_f2f66:
    X86_TICK(c, 7);
    // 0f2f66  call 0xf3c24
    X86_AT(c, 0xf2f66u);
    push32(c, 0xf2f6bu); f_000f3c24(c); X86_RET(c, 0xf2f6bu);
    X86_TICK(c, 44);
    // 0f2f6b  add esp, 0xc
    X86_AT(c, 0xf2f6bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f2f6e  mov eax, 0xffffffff
    X86_AT(c, 0xf2f6eu);
    c.r[0] = 0xFFFFFFFFu;
    // 0f2f73  mov dword ptr [edi*4 + 0xce408], eax
    X86_AT(c, 0xf2f73u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)), c.r[0]);
    // 0f2f7a  mov dword ptr [edi*4 + 0xce488], eax
    X86_AT(c, 0xf2f7au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)), c.r[0]);
    // 0f2f81  sub eax, eax
    X86_AT(c, 0xf2f81u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f2f83  mov byte ptr [edi + 0xce3c8], al
    X86_AT(c, 0xf2f83u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u)), g8(c, 0));
    // 0f2f89  mov byte ptr [edi + 0xce3e8], al
    X86_AT(c, 0xf2f89u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3E8u)), g8(c, 0));
    // 0f2f8f  mov dword ptr [edi*4 + 0xce608], eax
    X86_AT(c, 0xf2f8fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE608u)), c.r[0]);
    // 0f2f96  pop edi
    X86_AT(c, 0xf2f96u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f2f97  pop esi
    X86_AT(c, 0xf2f97u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f2f98  pop ebx
    X86_AT(c, 0xf2f98u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f2f99  leave 
    X86_AT(c, 0xf2f99u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f2f9a  ret 
    X86_AT(c, 0xf2f9au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2e2du, "ran off the end of a function");
}
void f_000f2f9c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0f2f9c  push ebp
    X86_AT(c, 0xf2f9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f2f9d  mov ebp, esp
    X86_AT(c, 0xf2f9du);
    c.r[5] = c.r[4];
    // 0f2f9f  push esi
    X86_AT(c, 0xf2f9fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2fa0  push edi
    X86_AT(c, 0xf2fa0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f2fa1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf2fa1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f2fa4  push 2
    X86_AT(c, 0xf2fa4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f2fa6  call 0xe1944
    X86_AT(c, 0xf2fa6u);
    push32(c, 0xf2fabu); f_000e1944(c); X86_RET(c, 0xf2fabu);
    X86_TICK(c, 7);
    // 0f2fab  call 0xf0c70
    X86_AT(c, 0xf2fabu);
    push32(c, 0xf2fb0u); f_000f0c70(c); X86_RET(c, 0xf2fb0u);
    X86_TICK(c, 19);
    // 0f2fb0  push dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xf2fb0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u))); push32(c, v); }
    // 0f2fb7  push dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xf2fb7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u))); push32(c, v); }
    // 0f2fbe  push 0
    X86_AT(c, 0xf2fbeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f2fc0  call 0xf3c24
    X86_AT(c, 0xf2fc0u);
    push32(c, 0xf2fc5u); f_000f3c24(c); X86_RET(c, 0xf2fc5u);
    X86_TICK(c, 25);
    // 0f2fc5  mov esi, dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xf2fc5u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)));
    // 0f2fcc  mov eax, dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xf2fccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)));
    // 0f2fd3  mov dword ptr [edi*4 + 0xce408], eax
    X86_AT(c, 0xf2fd3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u)), c.r[0]);
    // 0f2fda  mov dword ptr [edi*4 + 0xce488], esi
    X86_AT(c, 0xf2fdau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u)), c.r[6]);
    // 0f2fe1  push esi
    X86_AT(c, 0xf2fe1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f2fe2  push eax
    X86_AT(c, 0xf2fe2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f2fe3  push 0x58
    X86_AT(c, 0xf2fe3u);
    { uint32_t v = 0x58u; push32(c, v); }
    // 0f2fe5  call 0xf3c24
    X86_AT(c, 0xf2fe5u);
    push32(c, 0xf2feau); f_000f3c24(c); X86_RET(c, 0xf2feau);
    X86_TICK(c, 11);
    // 0f2fea  mov dword ptr [edi*4 + 0xce508], 0
    X86_AT(c, 0xf2feau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE508u)), 0x0u);
    // 0f2ff5  push 2
    X86_AT(c, 0xf2ff5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f2ff7  call 0xe1a9c
    X86_AT(c, 0xf2ff7u);
    push32(c, 0xf2ffcu); f_000e1a9c(c); X86_RET(c, 0xf2ffcu);
    X86_TICK(c, 7);
    // 0f2ffc  call 0xf0c70
    X86_AT(c, 0xf2ffcu);
    push32(c, 0xf3001u); f_000f0c70(c); X86_RET(c, 0xf3001u);
    X86_TICK(c, 9);
    // 0f3001  push 7
    X86_AT(c, 0xf3001u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3003  call 0xe693c
    X86_AT(c, 0xf3003u);
    push32(c, 0xf3008u); f_000e693c(c); X86_RET(c, 0xf3008u);
    X86_TICK(c, 11);
    // 0f3008  push 0x68ac
    X86_AT(c, 0xf3008u);
    { uint32_t v = 0x68ACu; push32(c, v); }
    // 0f300d  push 7
    X86_AT(c, 0xf300du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f300f  call 0xe5654
    X86_AT(c, 0xf300fu);
    push32(c, 0xf3014u); f_000e5654(c); X86_RET(c, 0xf3014u);
    X86_TICK(c, 9);
    // 0f3014  push 7
    X86_AT(c, 0xf3014u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3016  call 0xe6c68
    X86_AT(c, 0xf3016u);
    push32(c, 0xf301bu); f_000e6c68(c); X86_RET(c, 0xf301bu);
    X86_TICK(c, 26);
    // 0f301b  add esp, 0x30
    X86_AT(c, 0xf301bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0f301e  pop edi
    X86_AT(c, 0xf301eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f301f  pop esi
    X86_AT(c, 0xf301fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f3020  leave 
    X86_AT(c, 0xf3020u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f3021  ret 
    X86_AT(c, 0xf3021u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2f9cu, "ran off the end of a function");
}
void f_000f3024(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0f3024  push edi
    X86_AT(c, 0xf3024u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f3025  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf3025u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f302a  lea edx, [eax + eax*4]
    X86_AT(c, 0xf302au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f302d  lea edx, [eax + edx*2]
    X86_AT(c, 0xf302du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f3030  shl edx, 5
    X86_AT(c, 0xf3030u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f3033  sub edx, eax
    X86_AT(c, 0xf3033u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3035  movzx eax, byte ptr [edx + 0xcdebe]
    X86_AT(c, 0xf3035u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu)));
    // 0f303c  sub eax, 0x41
    X86_AT(c, 0xf303cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0f303f  xchg edx, eax
    X86_AT(c, 0xf303fu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0f3040  cmp edx, 9
    X86_AT(c, 0xf3040u);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0f3043  ja 0xf3088
    X86_AT(c, 0xf3043u);
    if (x86_cc(c, 7)) { goto L_f3088; }
    X86_TICK(c, 7);
    // 0f3045  jmp dword ptr cs:[edx*4 + 0xf304d]
    X86_AT(c, 0xf3045u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF304Du)));
      switch (t) {
      case 0xf3075u: goto L_f3075;
      case 0xf307cu: goto L_f307c;
      case 0xf3083u: goto L_f3083;
      default: x86_jump(c, t); return; } }
L_f3075:
    X86_TICK(c, 9);
    // 0f3075  mov edi, 0xd
    X86_AT(c, 0xf3075u);
    c.r[7] = 0xDu;
    // 0f307a  jmp 0xf3088
    X86_AT(c, 0xf307au);
    goto L_f3088;
L_f307c:
    X86_TICK(c, 9);
    // 0f307c  mov edi, 6
    X86_AT(c, 0xf307cu);
    c.r[7] = 0x6u;
    // 0f3081  jmp 0xf3088
    X86_AT(c, 0xf3081u);
    goto L_f3088;
L_f3083:
    X86_TICK(c, 2);
    // 0f3083  mov edi, 0xa
    X86_AT(c, 0xf3083u);
    c.r[7] = 0xAu;
L_f3088:
    X86_TICK(c, 9);
    // 0f3088  push edi
    X86_AT(c, 0xf3088u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f3089  call 0xe1944
    X86_AT(c, 0xf3089u);
    push32(c, 0xf308eu); f_000e1944(c); X86_RET(c, 0xf308eu);
    X86_TICK(c, 9);
    // 0f308e  push 4
    X86_AT(c, 0xf308eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f3090  call 0xe9740
    X86_AT(c, 0xf3090u);
    push32(c, 0xf3095u); f_000e9740(c); X86_RET(c, 0xf3095u);
    X86_TICK(c, 16);
    // 0f3095  add esp, 8
    X86_AT(c, 0xf3095u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f3098  pop edi
    X86_AT(c, 0xf3098u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f3099  ret 
    X86_AT(c, 0xf3099u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf3024u, "ran off the end of a function");
}
void f_000f309c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0f309c  push ebp
    X86_AT(c, 0xf309cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f309d  mov ebp, esp
    X86_AT(c, 0xf309du);
    c.r[5] = c.r[4];
    // 0f309f  push ebx
    X86_AT(c, 0xf309fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f30a0  push esi
    X86_AT(c, 0xf30a0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f30a1  push edi
    X86_AT(c, 0xf30a1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f30a2  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xf30a2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f30a5  cmp edx, 4
    X86_AT(c, 0xf30a5u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0f30a8  ja 0xf316b
    X86_AT(c, 0xf30a8u);
    if (x86_cc(c, 7)) { goto L_f316b; }
    X86_TICK(c, 7);
    // 0f30ae  jmp dword ptr cs:[edx*4 + 0xf30b6]
    X86_AT(c, 0xf30aeu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF30B6u)));
      switch (t) {
      case 0xf30cau: goto L_f30ca;
      case 0xf30d3u: goto L_f30d3;
      case 0xf30dfu: goto L_f30df;
      case 0xf30e6u: goto L_f30e6;
      case 0xf30f2u: goto L_f30f2;
      default: x86_jump(c, t); return; } }
L_f30ca:
    X86_TICK(c, 11);
    // 0f30ca  mov esi, 5
    X86_AT(c, 0xf30cau);
    c.r[6] = 0x5u;
    // 0f30cf  mov ebx, esi
    X86_AT(c, 0xf30cfu);
    c.r[3] = c.r[6];
    // 0f30d1  jmp 0xf30fc
    X86_AT(c, 0xf30d1u);
    goto L_f30fc;
L_f30d3:
    X86_TICK(c, 11);
    // 0f30d3  mov esi, 5
    X86_AT(c, 0xf30d3u);
    c.r[6] = 0x5u;
    // 0f30d8  mov ebx, 4
    X86_AT(c, 0xf30d8u);
    c.r[3] = 0x4u;
    // 0f30dd  jmp 0xf30fc
    X86_AT(c, 0xf30ddu);
    goto L_f30fc;
L_f30df:
    X86_TICK(c, 9);
    // 0f30df  mov esi, 6
    X86_AT(c, 0xf30dfu);
    c.r[6] = 0x6u;
    // 0f30e4  jmp 0xf30f7
    X86_AT(c, 0xf30e4u);
    goto L_f30f7;
L_f30e6:
    X86_TICK(c, 11);
    // 0f30e6  mov esi, 5
    X86_AT(c, 0xf30e6u);
    c.r[6] = 0x5u;
    // 0f30eb  mov ebx, 6
    X86_AT(c, 0xf30ebu);
    c.r[3] = 0x6u;
    // 0f30f0  jmp 0xf30fc
    X86_AT(c, 0xf30f0u);
    goto L_f30fc;
L_f30f2:
    X86_TICK(c, 2);
    // 0f30f2  mov esi, 4
    X86_AT(c, 0xf30f2u);
    c.r[6] = 0x4u;
L_f30f7:
    X86_TICK(c, 2);
    // 0f30f7  mov ebx, 5
    X86_AT(c, 0xf30f7u);
    c.r[3] = 0x5u;
L_f30fc:
    X86_TICK(c, 9);
    // 0f30fc  push 7
    X86_AT(c, 0xf30fcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f30fe  call 0xe693c
    X86_AT(c, 0xf30feu);
    push32(c, 0xf3103u); f_000e693c(c); X86_RET(c, 0xf3103u);
    X86_TICK(c, 15);
    // 0f3103  push 0xffffffff
    X86_AT(c, 0xf3103u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f3105  push 0x87
    X86_AT(c, 0xf3105u);
    { uint32_t v = 0x87u; push32(c, v); }
    // 0f310a  push ebx
    X86_AT(c, 0xf310au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f310b  push esi
    X86_AT(c, 0xf310bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f310c  call 0xe2e10
    X86_AT(c, 0xf310cu);
    push32(c, 0xf3111u); f_000e2e10(c); X86_RET(c, 0xf3111u);
    X86_TICK(c, 10);
    // 0f3111  xchg edi, eax
    X86_AT(c, 0xf3111u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f3112  call 0xe2ea0
    X86_AT(c, 0xf3112u);
    push32(c, 0xf3117u); f_000e2ea0(c); X86_RET(c, 0xf3117u);
    X86_TICK(c, 32);
    // 0f3117  push 2
    X86_AT(c, 0xf3117u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f3119  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf3119u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f311e  lea edx, [eax + eax*4]
    X86_AT(c, 0xf311eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f3121  lea edx, [eax + edx*2]
    X86_AT(c, 0xf3121u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f3124  shl edx, 5
    X86_AT(c, 0xf3124u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f3127  sub edx, eax
    X86_AT(c, 0xf3127u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3129  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf3129u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f312f  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf312fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f3135  call 0xe7f60
    X86_AT(c, 0xf3135u);
    push32(c, 0xf313au); f_000e7f60(c); X86_RET(c, 0xf313au);
    X86_TICK(c, 9);
    // 0f313a  push edi
    X86_AT(c, 0xf313au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f313b  call 0xe2df4
    X86_AT(c, 0xf313bu);
    push32(c, 0xf3140u); f_000e2df4(c); X86_RET(c, 0xf3140u);
    X86_TICK(c, 7);
    // 0f3140  call 0xe2ea0
    X86_AT(c, 0xf3140u);
    push32(c, 0xf3145u); f_000e2ea0(c); X86_RET(c, 0xf3145u);
    X86_TICK(c, 32);
    // 0f3145  push 2
    X86_AT(c, 0xf3145u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f3147  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf3147u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f314c  lea edx, [eax + eax*4]
    X86_AT(c, 0xf314cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f314f  lea edx, [eax + edx*2]
    X86_AT(c, 0xf314fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f3152  shl edx, 5
    X86_AT(c, 0xf3152u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f3155  sub edx, eax
    X86_AT(c, 0xf3155u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3157  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf3157u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f315d  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf315du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f3163  call 0xe7f60
    X86_AT(c, 0xf3163u);
    push32(c, 0xf3168u); f_000e7f60(c); X86_RET(c, 0xf3168u);
    X86_TICK(c, 2);
    // 0f3168  add esp, 0x30
    X86_AT(c, 0xf3168u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_f316b:
    X86_TICK(c, 28);
    // 0f316b  pop edi
    X86_AT(c, 0xf316bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f316c  pop esi
    X86_AT(c, 0xf316cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f316d  pop ebx
    X86_AT(c, 0xf316du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f316e  leave 
    X86_AT(c, 0xf316eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f316f  ret 
    X86_AT(c, 0xf316fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf309cu, "ran off the end of a function");
}
void f_000f326c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f326c  push 7
    X86_AT(c, 0xf326cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f326e  call 0xe693c
    X86_AT(c, 0xf326eu);
    push32(c, 0xf3273u); f_000e693c(c); X86_RET(c, 0xf3273u);
    X86_TICK(c, 11);
    // 0f3273  push 0x6a1c
    X86_AT(c, 0xf3273u);
    { uint32_t v = 0x6A1Cu; push32(c, v); }
    // 0f3278  push 7
    X86_AT(c, 0xf3278u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f327a  call 0xe5654
    X86_AT(c, 0xf327au);
    push32(c, 0xf327fu); f_000e5654(c); X86_RET(c, 0xf327fu);
    X86_TICK(c, 9);
    // 0f327f  push 7
    X86_AT(c, 0xf327fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3281  call 0xe6c68
    X86_AT(c, 0xf3281u);
    push32(c, 0xf3286u); f_000e6c68(c); X86_RET(c, 0xf3286u);
    X86_TICK(c, 12);
    // 0f3286  add esp, 0x10
    X86_AT(c, 0xf3286u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f3289  ret 
    X86_AT(c, 0xf3289u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf326cu, "ran off the end of a function");
}
void f_000f328c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0f328c  push ebp
    X86_AT(c, 0xf328cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f328d  mov ebp, esp
    X86_AT(c, 0xf328du);
    c.r[5] = c.r[4];
    // 0f328f  push eax
    X86_AT(c, 0xf328fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f3290  push ebx
    X86_AT(c, 0xf3290u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f3291  push esi
    X86_AT(c, 0xf3291u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f3292  push edi
    X86_AT(c, 0xf3292u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f3293  mov eax, 0xffffffff
    X86_AT(c, 0xf3293u);
    c.r[0] = 0xFFFFFFFFu;
    // 0f3298  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf3298u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f329b  xchg ebx, eax
    X86_AT(c, 0xf329bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f329c  call 0xe8470
    X86_AT(c, 0xf329cu);
    push32(c, 0xf32a1u); f_000e8470(c); X86_RET(c, 0xf32a1u);
    X86_TICK(c, 7);
    // 0f32a1  call 0xe93c4
    X86_AT(c, 0xf32a1u);
    push32(c, 0xf32a6u); f_000e93c4(c); X86_RET(c, 0xf32a6u);
    X86_TICK(c, 11);
    // 0f32a6  push 0x6a34
    X86_AT(c, 0xf32a6u);
    { uint32_t v = 0x6A34u; push32(c, v); }
    // 0f32ab  push 7
    X86_AT(c, 0xf32abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f32ad  call 0xe5654
    X86_AT(c, 0xf32adu);
    push32(c, 0xf32b2u); f_000e5654(c); X86_RET(c, 0xf32b2u);
    X86_TICK(c, 7);
    // 0f32b2  call 0xf69f0
    X86_AT(c, 0xf32b2u);
    push32(c, 0xf32b7u); f_000f69f0(c); X86_RET(c, 0xf32b7u);
    X86_TICK(c, 11);
    // 0f32b7  push 0x6a50
    X86_AT(c, 0xf32b7u);
    { uint32_t v = 0x6A50u; push32(c, v); }
    // 0f32bc  push 7
    X86_AT(c, 0xf32bcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f32be  call 0xe5654
    X86_AT(c, 0xf32beu);
    push32(c, 0xf32c3u); f_000e5654(c); X86_RET(c, 0xf32c3u);
    X86_TICK(c, 9);
    // 0f32c3  push 7
    X86_AT(c, 0xf32c3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f32c5  call 0xe6c68
    X86_AT(c, 0xf32c5u);
    push32(c, 0xf32cau); f_000e6c68(c); X86_RET(c, 0xf32cau);
    X86_TICK(c, 11);
    // 0f32ca  push 0x6a68
    X86_AT(c, 0xf32cau);
    { uint32_t v = 0x6A68u; push32(c, v); }
    // 0f32cf  push 7
    X86_AT(c, 0xf32cfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f32d1  call 0xe5654
    X86_AT(c, 0xf32d1u);
    push32(c, 0xf32d6u); f_000e5654(c); X86_RET(c, 0xf32d6u);
    X86_TICK(c, 9);
    // 0f32d6  push 7
    X86_AT(c, 0xf32d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f32d8  call 0xe6c68
    X86_AT(c, 0xf32d8u);
    push32(c, 0xf32ddu); f_000e6c68(c); X86_RET(c, 0xf32ddu);
    X86_TICK(c, 26);
    // 0f32dd  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf32ddu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f32e2  lea edx, [eax + eax*4]
    X86_AT(c, 0xf32e2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f32e5  lea edx, [eax + edx*2]
    X86_AT(c, 0xf32e5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f32e8  shl edx, 5
    X86_AT(c, 0xf32e8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f32eb  sub edx, eax
    X86_AT(c, 0xf32ebu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f32ed  sub eax, eax
    X86_AT(c, 0xf32edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f32ef  mov dword ptr [edx + 0xcdf57], eax
    X86_AT(c, 0xf32efu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)), c.r[0]);
    // 0f32f5  mov dword ptr [0xcda6c], eax
    X86_AT(c, 0xf32f5u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA6Cu)), c.r[0]);
    // 0f32fa  call 0xf3508
    X86_AT(c, 0xf32fau);
    push32(c, 0xf32ffu); f_000f3508(c); X86_RET(c, 0xf32ffu);
    X86_TICK(c, 4);
    // 0f32ff  mov edi, 0x1f4
    X86_AT(c, 0xf32ffu);
    c.r[7] = 0x1F4u;
    // 0f3304  add esp, 0x20
    X86_AT(c, 0xf3304u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_f3307:
    X86_TICK(c, 12);
    // 0f3307  cmp dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xf3307u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xFFFFFFFFu, 0, 4);
    // 0f330b  jne 0xf3459
    X86_AT(c, 0xf330bu);
    if (x86_cc(c, 5)) { goto L_f3459; }
    X86_TICK(c, 9);
    // 0f3311  push 7
    X86_AT(c, 0xf3311u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3313  call 0xe7618
    X86_AT(c, 0xf3313u);
    push32(c, 0xf3318u); f_000e7618(c); X86_RET(c, 0xf3318u);
    X86_TICK(c, 2);
    // 0f3318  add esp, 4
    X86_AT(c, 0xf3318u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f331b:
    X86_TICK(c, 11);
    // 0f331b  push edi
    X86_AT(c, 0xf331bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f331c  push 0
    X86_AT(c, 0xf331cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f331e  call 0xf3578
    X86_AT(c, 0xf331eu);
    push32(c, 0xf3323u); f_000f3578(c); X86_RET(c, 0xf3323u);
    X86_TICK(c, 9);
    // 0f3323  push 7
    X86_AT(c, 0xf3323u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3325  call 0xe693c
    X86_AT(c, 0xf3325u);
    push32(c, 0xf332au); f_000e693c(c); X86_RET(c, 0xf332au);
    X86_TICK(c, 9);
    // 0f332a  push 7
    X86_AT(c, 0xf332au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f332c  call 0xe4748
    X86_AT(c, 0xf332cu);
    push32(c, 0xf3331u); f_000e4748(c); X86_RET(c, 0xf3331u);
    X86_TICK(c, 12);
    // 0f3331  movzx esi, al
    X86_AT(c, 0xf3331u);
    c.r[6] = g8(c, 0);
    // 0f3334  add esp, 0x10
    X86_AT(c, 0xf3334u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f3337  and esi, esi
    X86_AT(c, 0xf3337u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0f3339  je 0xf331b
    X86_AT(c, 0xf3339u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf331bu); goto L_f331b; }
    X86_TICK(c, 9);
    // 0f333b  mov edx, esi
    X86_AT(c, 0xf333bu);
    c.r[2] = c.r[6];
    // 0f333d  cmp edx, 1
    X86_AT(c, 0xf333du);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0f3340  je 0xf335f
    X86_AT(c, 0xf3340u);
    if (x86_cc(c, 4)) { goto L_f335f; }
    X86_TICK(c, 7);
    // 0f3342  cmp edx, 4
    X86_AT(c, 0xf3342u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0f3345  je 0xf335f
    X86_AT(c, 0xf3345u);
    if (x86_cc(c, 4)) { goto L_f335f; }
    X86_TICK(c, 7);
    // 0f3347  cmp edx, 0x20
    X86_AT(c, 0xf3347u);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 0f334a  je 0xf335f
    X86_AT(c, 0xf334au);
    if (x86_cc(c, 4)) { goto L_f335f; }
    X86_TICK(c, 7);
    // 0f334c  cmp edx, 0x48
    X86_AT(c, 0xf334cu);
    (void)x86_sub(c, c.r[2], 0x48u, 0, 4);
    // 0f334f  je 0xf3369
    X86_AT(c, 0xf334fu);
    if (x86_cc(c, 4)) { goto L_f3369; }
    X86_TICK(c, 7);
    // 0f3351  cmp edx, 0x4c
    X86_AT(c, 0xf3351u);
    (void)x86_sub(c, c.r[2], 0x4Cu, 0, 4);
    // 0f3354  je 0xf33be
    X86_AT(c, 0xf3354u);
    if (x86_cc(c, 4)) { goto L_f33be; }
    X86_TICK(c, 7);
    // 0f3356  cmp edx, 0x50
    X86_AT(c, 0xf3356u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0f3359  jne 0xf3401
    X86_AT(c, 0xf3359u);
    if (x86_cc(c, 5)) { goto L_f3401; }
L_f335f:
    X86_TICK(c, 9);
    // 0f335f  push 0x6a9c
    X86_AT(c, 0xf335fu);
    { uint32_t v = 0x6A9Cu; push32(c, v); }
    // 0f3364  jmp 0xf3406
    X86_AT(c, 0xf3364u);
    goto L_f3406;
L_f3369:
    X86_TICK(c, 9);
    // 0f3369  mov ebx, 0xffffffff
    X86_AT(c, 0xf3369u);
    c.r[3] = 0xFFFFFFFFu;
    // 0f336e  call 0xe9264
    X86_AT(c, 0xf336eu);
    push32(c, 0xf3373u); f_000e9264(c); X86_RET(c, 0xf3373u);
    X86_TICK(c, 7);
    // 0f3373  call 0xf36d4
    X86_AT(c, 0xf3373u);
    push32(c, 0xf3378u); f_000f36d4(c); X86_RET(c, 0xf3378u);
    X86_TICK(c, 15);
    // 0f3378  xchg ebx, eax
    X86_AT(c, 0xf3378u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f3379  cmp word ptr [0xcde48], 0
    X86_AT(c, 0xf3379u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDE48u))), 0x0u, 0, 2);
    // 0f3381  je 0xf3417
    X86_AT(c, 0xf3381u);
    if (x86_cc(c, 4)) { goto L_f3417; }
    X86_TICK(c, 7);
    // 0f3387  call 0xe9264
    X86_AT(c, 0xf3387u);
    push32(c, 0xf338cu); f_000e9264(c); X86_RET(c, 0xf338cu);
    X86_TICK(c, 7);
    // 0f338c  cmp ebx, 0xffffffff
    X86_AT(c, 0xf338cu);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0f338f  je 0xf3417
    X86_AT(c, 0xf338fu);
    if (x86_cc(c, 4)) { goto L_f3417; }
    X86_TICK(c, 11);
    // 0f3395  push 0x6ae8
    X86_AT(c, 0xf3395u);
    { uint32_t v = 0x6AE8u; push32(c, v); }
    // 0f339a  push 7
    X86_AT(c, 0xf339au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f339c  call 0xe5654
    X86_AT(c, 0xf339cu);
    push32(c, 0xf33a1u); f_000e5654(c); X86_RET(c, 0xf33a1u);
    X86_TICK(c, 7);
    // 0f33a1  call 0xf69f0
    X86_AT(c, 0xf33a1u);
    push32(c, 0xf33a6u); f_000f69f0(c); X86_RET(c, 0xf33a6u);
    X86_TICK(c, 11);
    // 0f33a6  push 0x6b04
    X86_AT(c, 0xf33a6u);
    { uint32_t v = 0x6B04u; push32(c, v); }
    // 0f33ab  push 7
    X86_AT(c, 0xf33abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f33ad  call 0xe5654
    X86_AT(c, 0xf33adu);
    push32(c, 0xf33b2u); f_000e5654(c); X86_RET(c, 0xf33b2u);
    X86_TICK(c, 9);
    // 0f33b2  push 7
    X86_AT(c, 0xf33b2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f33b4  call 0xe6c68
    X86_AT(c, 0xf33b4u);
    push32(c, 0xf33b9u); f_000e6c68(c); X86_RET(c, 0xf33b9u);
    X86_TICK(c, 9);
    // 0f33b9  add esp, 0x14
    X86_AT(c, 0xf33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f33bc  jmp 0xf3417
    X86_AT(c, 0xf33bcu);
    goto L_f3417;
L_f33be:
    X86_TICK(c, 11);
    // 0f33be  push 0x6b1c
    X86_AT(c, 0xf33beu);
    { uint32_t v = 0x6B1Cu; push32(c, v); }
    // 0f33c3  push 7
    X86_AT(c, 0xf33c3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f33c5  call 0xe5654
    X86_AT(c, 0xf33c5u);
    push32(c, 0xf33cau); f_000e5654(c); X86_RET(c, 0xf33cau);
    X86_TICK(c, 9);
    // 0f33ca  push 7
    X86_AT(c, 0xf33cau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f33cc  call 0xe6c68
    X86_AT(c, 0xf33ccu);
    push32(c, 0xf33d1u); f_000e6c68(c); X86_RET(c, 0xf33d1u);
    X86_TICK(c, 9);
    // 0f33d1  add esp, 0xc
    X86_AT(c, 0xf33d1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f33d4  cmp ebx, 0xffffffff
    X86_AT(c, 0xf33d4u);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0f33d7  jne 0xf33f8
    X86_AT(c, 0xf33d7u);
    if (x86_cc(c, 5)) { goto L_f33f8; }
    X86_TICK(c, 9);
    // 0f33d9  push 3
    X86_AT(c, 0xf33d9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f33db  call 0xe1944
    X86_AT(c, 0xf33dbu);
    push32(c, 0xf33e0u); f_000e1944(c); X86_RET(c, 0xf33e0u);
    X86_TICK(c, 11);
    // 0f33e0  push 0x6b50
    X86_AT(c, 0xf33e0u);
    { uint32_t v = 0x6B50u; push32(c, v); }
    // 0f33e5  push 7
    X86_AT(c, 0xf33e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f33e7  call 0xe5654
    X86_AT(c, 0xf33e7u);
    push32(c, 0xf33ecu); f_000e5654(c); X86_RET(c, 0xf33ecu);
    X86_TICK(c, 9);
    // 0f33ec  push 7
    X86_AT(c, 0xf33ecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f33ee  call 0xe6c68
    X86_AT(c, 0xf33eeu);
    push32(c, 0xf33f3u); f_000e6c68(c); X86_RET(c, 0xf33f3u);
    X86_TICK(c, 9);
    // 0f33f3  add esp, 0x10
    X86_AT(c, 0xf33f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f33f6  jmp 0xf3417
    X86_AT(c, 0xf33f6u);
    goto L_f3417;
L_f33f8:
    X86_TICK(c, 9);
    // 0f33f8  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xf33f8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0f33ff  jmp 0xf3417
    X86_AT(c, 0xf33ffu);
    goto L_f3417;
L_f3401:
    X86_TICK(c, 2);
    // 0f3401  push 0x6b84
    X86_AT(c, 0xf3401u);
    { uint32_t v = 0x6B84u; push32(c, v); }
L_f3406:
    X86_TICK(c, 9);
    // 0f3406  push 7
    X86_AT(c, 0xf3406u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3408  call 0xe5654
    X86_AT(c, 0xf3408u);
    push32(c, 0xf340du); f_000e5654(c); X86_RET(c, 0xf340du);
    X86_TICK(c, 9);
    // 0f340d  push 7
    X86_AT(c, 0xf340du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f340f  call 0xe6c68
    X86_AT(c, 0xf340fu);
    push32(c, 0xf3414u); f_000e6c68(c); X86_RET(c, 0xf3414u);
    X86_TICK(c, 2);
    // 0f3414  add esp, 0xc
    X86_AT(c, 0xf3414u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f3417:
    X86_TICK(c, 12);
    // 0f3417  cmp word ptr [0xcde48], 0
    X86_AT(c, 0xf3417u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDE48u))), 0x0u, 0, 2);
    // 0f341f  je 0xf345e
    X86_AT(c, 0xf341fu);
    if (x86_cc(c, 4)) { goto L_f345e; }
    X86_TICK(c, 25);
    // 0f3421  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf3421u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f3426  lea edx, [eax + eax*4]
    X86_AT(c, 0xf3426u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f3429  lea edx, [eax + edx*2]
    X86_AT(c, 0xf3429u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f342c  shl edx, 5
    X86_AT(c, 0xf342cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f342f  sub edx, eax
    X86_AT(c, 0xf342fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3431  cmp dword ptr [edx + 0xcdf23], 1
    X86_AT(c, 0xf3431u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF23u))), 0x1u, 0, 4);
    // 0f3438  jge 0xf3307
    X86_AT(c, 0xf3438u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf3307u); goto L_f3307; }
    X86_TICK(c, 11);
    // 0f343e  push 0x6be8
    X86_AT(c, 0xf343eu);
    { uint32_t v = 0x6BE8u; push32(c, v); }
    // 0f3443  push 7
    X86_AT(c, 0xf3443u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3445  call 0xe5654
    X86_AT(c, 0xf3445u);
    push32(c, 0xf344au); f_000e5654(c); X86_RET(c, 0xf344au);
    X86_TICK(c, 9);
    // 0f344a  push 7
    X86_AT(c, 0xf344au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f344c  call 0xe6c68
    X86_AT(c, 0xf344cu);
    push32(c, 0xf3451u); f_000e6c68(c); X86_RET(c, 0xf3451u);
    X86_TICK(c, 9);
    // 0f3451  add esp, 0xc
    X86_AT(c, 0xf3451u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f3454  jmp 0xf3307
    X86_AT(c, 0xf3454u);
    X86_POLL(c, 0xf3307u); goto L_f3307;
L_f3459:
    X86_TICK(c, 7);
    // 0f3459  call 0xe8e90
    X86_AT(c, 0xf3459u);
    push32(c, 0xf345eu); f_000e8e90(c); X86_RET(c, 0xf345eu);
L_f345e:
    X86_TICK(c, 28);
    // 0f345e  pop edi
    X86_AT(c, 0xf345eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f345f  pop esi
    X86_AT(c, 0xf345fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f3460  pop ebx
    X86_AT(c, 0xf3460u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f3461  leave 
    X86_AT(c, 0xf3461u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f3462  ret 
    X86_AT(c, 0xf3462u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf328cu, "ran off the end of a function");
}
void f_000f3464(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0f3464  push ebp
    X86_AT(c, 0xf3464u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f3465  mov ebp, esp
    X86_AT(c, 0xf3465u);
    c.r[5] = c.r[4];
    // 0f3467  push esi
    X86_AT(c, 0xf3467u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f3468  push edi
    X86_AT(c, 0xf3468u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f3469  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xf3469u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0f346c  push 1
    X86_AT(c, 0xf346cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f346e  call 0xe58cc
    X86_AT(c, 0xf346eu);
    push32(c, 0xf3473u); f_000e58cc(c); X86_RET(c, 0xf3473u);
    X86_TICK(c, 18);
    // 0f3473  mov eax, edi
    X86_AT(c, 0xf3473u);
    c.r[0] = c.r[7];
    // 0f3475  mov word ptr [0xd3914], ax
    X86_AT(c, 0xf3475u);
    wr16((c.sbase[3] + (uint32_t)(0xD3914u)), (c.r[0] & 0xFFFFu));
    // 0f347b  add esp, 4
    X86_AT(c, 0xf347bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f347e  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0xf347eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 0f3482  jne 0xf34bc
    X86_AT(c, 0xf3482u);
    if (x86_cc(c, 5)) { goto L_f34bc; }
    X86_TICK(c, 9);
    // 0f3484  push 0xf
    X86_AT(c, 0xf3484u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f3486  call 0xe5748
    X86_AT(c, 0xf3486u);
    push32(c, 0xf348bu); f_000e5748(c); X86_RET(c, 0xf348bu);
    X86_TICK(c, 4);
    // 0f348b  sub esi, esi
    X86_AT(c, 0xf348bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f348d  add esp, 4
    X86_AT(c, 0xf348du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f3490:
    X86_TICK(c, 7);
    // 0f3490  cmp edi, esi
    X86_AT(c, 0xf3490u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0f3492  jle 0xf34ed
    X86_AT(c, 0xf3492u);
    if (x86_cc(c, 14)) { goto L_f34ed; }
    X86_TICK(c, 23);
    // 0f3494  mov eax, 0xd3714
    X86_AT(c, 0xf3494u);
    c.r[0] = 0xD3714u;
    // 0f3499  mov dx, word ptr [eax + esi*8 + 0x100]
    X86_AT(c, 0xf3499u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8 + 0x100u))));
    // 0f34a1  mov word ptr [eax + esi*4 + 0x202], dx
    X86_AT(c, 0xf34a1u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 4 + 0x202u)), (c.r[2] & 0xFFFFu));
    // 0f34a9  mov dx, word ptr [eax + esi*8 + 0x104]
    X86_AT(c, 0xf34a9u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8 + 0x104u))));
    // 0f34b1  mov word ptr [eax + esi*4 + 0x204], dx
    X86_AT(c, 0xf34b1u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 4 + 0x204u)), (c.r[2] & 0xFFFFu));
    // 0f34b9  inc esi
    X86_AT(c, 0xf34b9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f34ba  jmp 0xf3490
    X86_AT(c, 0xf34bau);
    X86_POLL(c, 0xf3490u); goto L_f3490;
L_f34bc:
    X86_TICK(c, 9);
    // 0f34bc  push 0
    X86_AT(c, 0xf34bcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f34be  call 0xe5748
    X86_AT(c, 0xf34beu);
    push32(c, 0xf34c3u); f_000e5748(c); X86_RET(c, 0xf34c3u);
    X86_TICK(c, 4);
    // 0f34c3  sub esi, esi
    X86_AT(c, 0xf34c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f34c5  add esp, 4
    X86_AT(c, 0xf34c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f34c8:
    X86_TICK(c, 7);
    // 0f34c8  cmp edi, esi
    X86_AT(c, 0xf34c8u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0f34ca  jle 0xf34ed
    X86_AT(c, 0xf34cau);
    if (x86_cc(c, 14)) { goto L_f34ed; }
    X86_TICK(c, 23);
    // 0f34cc  mov eax, 0xd3714
    X86_AT(c, 0xf34ccu);
    c.r[0] = 0xD3714u;
    // 0f34d1  mov dx, word ptr [eax + esi*8]
    X86_AT(c, 0xf34d1u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8))));
    // 0f34d5  mov word ptr [eax + esi*4 + 0x202], dx
    X86_AT(c, 0xf34d5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 4 + 0x202u)), (c.r[2] & 0xFFFFu));
    // 0f34dd  mov dx, word ptr [eax + esi*8 + 4]
    X86_AT(c, 0xf34ddu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8 + 0x4u))));
    // 0f34e2  mov word ptr [eax + esi*4 + 0x204], dx
    X86_AT(c, 0xf34e2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 4 + 0x204u)), (c.r[2] & 0xFFFFu));
    // 0f34ea  inc esi
    X86_AT(c, 0xf34eau);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f34eb  jmp 0xf34c8
    X86_AT(c, 0xf34ebu);
    X86_POLL(c, 0xf34c8u); goto L_f34c8;
L_f34ed:
    X86_TICK(c, 9);
    // 0f34ed  push 0xd3914
    X86_AT(c, 0xf34edu);
    { uint32_t v = 0xD3914u; push32(c, v); }
    // 0f34f2  call 0xe5cc0
    X86_AT(c, 0xf34f2u);
    push32(c, 0xf34f7u); f_000e5cc0(c); X86_RET(c, 0xf34f7u);
    X86_TICK(c, 9);
    // 0f34f7  push 0
    X86_AT(c, 0xf34f7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f34f9  call 0xe58cc
    X86_AT(c, 0xf34f9u);
    push32(c, 0xf34feu); f_000e58cc(c); X86_RET(c, 0xf34feu);
    X86_TICK(c, 26);
    // 0f34fe  add esp, 8
    X86_AT(c, 0xf34feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f3501  pop edi
    X86_AT(c, 0xf3501u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f3502  pop esi
    X86_AT(c, 0xf3502u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f3503  leave 
    X86_AT(c, 0xf3503u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f3504  ret 
    X86_AT(c, 0xf3504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf3464u, "ran off the end of a function");
}
void f_000f3508(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0f3508  push edi
    X86_AT(c, 0xf3508u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f3509  sub edi, edi
    X86_AT(c, 0xf3509u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_f350b:
    X86_TICK(c, 7);
    // 0f350b  cmp edi, 0x20
    X86_AT(c, 0xf350bu);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0f350e  jge 0xf356a
    X86_AT(c, 0xf350eu);
    if (x86_cc(c, 13)) { goto L_f356a; }
    X86_TICK(c, 9);
    // 0f3510  push 0x120
    X86_AT(c, 0xf3510u);
    { uint32_t v = 0x120u; push32(c, v); }
    // 0f3515  call 0xe1a7c
    X86_AT(c, 0xf3515u);
    push32(c, 0xf351au); f_000e1a7c(c); X86_RET(c, 0xf351au);
    X86_TICK(c, 13);
    // 0f351a  add eax, 0x60
    X86_AT(c, 0xf351au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x60u, 0, 4); }
    // 0f351d  mov dword ptr [edi*8 + 0xd3814], eax
    X86_AT(c, 0xf351du);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 8 + 0xD3814u)), c.r[0]);
    // 0f3524  push 0x120
    X86_AT(c, 0xf3524u);
    { uint32_t v = 0x120u; push32(c, v); }
    // 0f3529  call 0xe1a7c
    X86_AT(c, 0xf3529u);
    push32(c, 0xf352eu); f_000e1a7c(c); X86_RET(c, 0xf352eu);
    X86_TICK(c, 18);
    // 0f352e  add eax, 0x80
    X86_AT(c, 0xf352eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x80u, 0, 4); }
    // 0f3533  mov dword ptr [edi*8 + 0xd3818], eax
    X86_AT(c, 0xf3533u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 8 + 0xD3818u)), c.r[0]);
    // 0f353a  add esp, 8
    X86_AT(c, 0xf353au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f353d  cmp dword ptr [edi*8 + 0xd3814], 0xef
    X86_AT(c, 0xf353du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 8 + 0xD3814u))), 0xEFu, 0, 4);
    // 0f3548  je 0xf3551
    X86_AT(c, 0xf3548u);
    if (x86_cc(c, 4)) { goto L_f3551; }
    X86_TICK(c, 7);
    // 0f354a  cmp eax, 0x10f
    X86_AT(c, 0xf354au);
    (void)x86_sub(c, c.r[0], 0x10Fu, 0, 4);
    // 0f354f  jne 0xf3567
    X86_AT(c, 0xf354fu);
    if (x86_cc(c, 5)) { goto L_f3567; }
L_f3551:
    X86_TICK(c, 4);
    // 0f3551  mov dword ptr [edi*8 + 0xd3814], 0xf1
    X86_AT(c, 0xf3551u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 8 + 0xD3814u)), 0xF1u);
    // 0f355c  mov dword ptr [edi*8 + 0xd3818], 0x111
    X86_AT(c, 0xf355cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 8 + 0xD3818u)), 0x111u);
L_f3567:
    X86_TICK(c, 9);
    // 0f3567  inc edi
    X86_AT(c, 0xf3567u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f3568  jmp 0xf350b
    X86_AT(c, 0xf3568u);
    X86_POLL(c, 0xf350bu); goto L_f350b;
L_f356a:
    X86_TICK(c, 11);
    // 0f356a  push 0x20
    X86_AT(c, 0xf356au);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f356c  push 0
    X86_AT(c, 0xf356cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f356e  call 0xf3464
    X86_AT(c, 0xf356eu);
    push32(c, 0xf3573u); f_000f3464(c); X86_RET(c, 0xf3573u);
    X86_TICK(c, 16);
    // 0f3573  add esp, 8
    X86_AT(c, 0xf3573u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f3576  pop edi
    X86_AT(c, 0xf3576u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f3577  ret 
    X86_AT(c, 0xf3577u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf3508u, "ran off the end of a function");
}
void f_000f3578(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0f3578  push ebp
    X86_AT(c, 0xf3578u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f3579  mov ebp, esp
    X86_AT(c, 0xf3579u);
    c.r[5] = c.r[4];
    // 0f357b  push ebx
    X86_AT(c, 0xf357bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f357c  push esi
    X86_AT(c, 0xf357cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f357d  push edi
    X86_AT(c, 0xf357du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f357e  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xf357eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0f3581  sub esi, esi
    X86_AT(c, 0xf3581u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_f3583:
    X86_TICK(c, 7);
    // 0f3583  cmp esi, 0x20
    X86_AT(c, 0xf3583u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0f3586  jge 0xf36a2
    X86_AT(c, 0xf3586u);
    if (x86_cc(c, 13)) { goto L_f36a2; }
    X86_TICK(c, 95);
    // 0f358c  mov eax, 0xd3714
    X86_AT(c, 0xf358cu);
    c.r[0] = 0xD3714u;
    // 0f3591  mov edx, dword ptr [eax + esi*8 + 0x100]
    X86_AT(c, 0xf3591u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8 + 0x100u)));
    // 0f3598  mov dword ptr [eax + esi*8], edx
    X86_AT(c, 0xf3598u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8)), c.r[2]);
    // 0f359b  mov edx, dword ptr [eax + esi*8 + 0x104]
    X86_AT(c, 0xf359bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8 + 0x104u)));
    // 0f35a2  mov dword ptr [eax + esi*8 + 4], edx
    X86_AT(c, 0xf35a2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8 + 0x4u)), c.r[2]);
    // 0f35a6  mov eax, dword ptr [eax + esi*8]
    X86_AT(c, 0xf35a6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8)));
    // 0f35a9  sub eax, 0xef
    X86_AT(c, 0xf35a9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xEFu, 0, 4); }
    // 0f35ae  cdq 
    X86_AT(c, 0xf35aeu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f35af  sub eax, edx
    X86_AT(c, 0xf35afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f35b1  sar eax, 1
    X86_AT(c, 0xf35b1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0f35b3  cdq 
    X86_AT(c, 0xf35b3u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f35b4  sub eax, edx
    X86_AT(c, 0xf35b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f35b6  sar eax, 1
    X86_AT(c, 0xf35b6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0f35b8  cdq 
    X86_AT(c, 0xf35b8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f35b9  sub eax, edx
    X86_AT(c, 0xf35b9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f35bb  sar eax, 1
    X86_AT(c, 0xf35bbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0f35bd  add eax, dword ptr [esi*8 + 0xd3714]
    X86_AT(c, 0xf35bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 8 + 0xD3714u))), 0, 4); }
    // 0f35c4  mov dword ptr [esi*8 + 0xd3814], eax
    X86_AT(c, 0xf35c4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 8 + 0xD3814u)), c.r[0]);
    // 0f35cb  mov eax, dword ptr [esi*8 + 0xd3718]
    X86_AT(c, 0xf35cbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 8 + 0xD3718u)));
    // 0f35d2  sub eax, 0x10f
    X86_AT(c, 0xf35d2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x10Fu, 0, 4); }
    // 0f35d7  cdq 
    X86_AT(c, 0xf35d7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f35d8  sub eax, edx
    X86_AT(c, 0xf35d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f35da  sar eax, 1
    X86_AT(c, 0xf35dau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0f35dc  cdq 
    X86_AT(c, 0xf35dcu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f35dd  sub eax, edx
    X86_AT(c, 0xf35ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f35df  sar eax, 1
    X86_AT(c, 0xf35dfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0f35e1  cdq 
    X86_AT(c, 0xf35e1u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f35e2  sub eax, edx
    X86_AT(c, 0xf35e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f35e4  sar eax, 1
    X86_AT(c, 0xf35e4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0f35e6  add eax, dword ptr [esi*8 + 0xd3718]
    X86_AT(c, 0xf35e6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 8 + 0xD3718u))), 0, 4); }
    // 0f35ed  mov dword ptr [esi*8 + 0xd3818], eax
    X86_AT(c, 0xf35edu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 8 + 0xD3818u)), c.r[0]);
    // 0f35f4  mov edx, dword ptr [esi*8 + 0xd3814]
    X86_AT(c, 0xf35f4u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 8 + 0xD3814u)));
    // 0f35fb  cmp edx, 0x40
    X86_AT(c, 0xf35fbu);
    (void)x86_sub(c, c.r[2], 0x40u, 0, 4);
    // 0f35fe  jle 0xf3614
    X86_AT(c, 0xf35feu);
    if (x86_cc(c, 14)) { goto L_f3614; }
    X86_TICK(c, 7);
    // 0f3600  cmp edx, 0x19f
    X86_AT(c, 0xf3600u);
    (void)x86_sub(c, c.r[2], 0x19Fu, 0, 4);
    // 0f3606  jge 0xf3614
    X86_AT(c, 0xf3606u);
    if (x86_cc(c, 13)) { goto L_f3614; }
    X86_TICK(c, 7);
    // 0f3608  cmp eax, 0x60
    X86_AT(c, 0xf3608u);
    (void)x86_sub(c, c.r[0], 0x60u, 0, 4);
    // 0f360b  jle 0xf3614
    X86_AT(c, 0xf360bu);
    if (x86_cc(c, 14)) { goto L_f3614; }
    X86_TICK(c, 7);
    // 0f360d  cmp eax, 0x1bf
    X86_AT(c, 0xf360du);
    (void)x86_sub(c, c.r[0], 0x1BFu, 0, 4);
    // 0f3612  jl 0xf3643
    X86_AT(c, 0xf3612u);
    if (x86_cc(c, 12)) { goto L_f3643; }
L_f3614:
    X86_TICK(c, 9);
    // 0f3614  push 0xa0
    X86_AT(c, 0xf3614u);
    { uint32_t v = 0xA0u; push32(c, v); }
    // 0f3619  call 0xe1a7c
    X86_AT(c, 0xf3619u);
    push32(c, 0xf361eu); f_000e1a7c(c); X86_RET(c, 0xf361eu);
    X86_TICK(c, 13);
    // 0f361e  add eax, 0xa0
    X86_AT(c, 0xf361eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xA0u, 0, 4); }
    // 0f3623  mov dword ptr [esi*8 + 0xd3814], eax
    X86_AT(c, 0xf3623u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 8 + 0xD3814u)), c.r[0]);
    // 0f362a  push 0xa0
    X86_AT(c, 0xf362au);
    { uint32_t v = 0xA0u; push32(c, v); }
    // 0f362f  call 0xe1a7c
    X86_AT(c, 0xf362fu);
    push32(c, 0xf3634u); f_000e1a7c(c); X86_RET(c, 0xf3634u);
    X86_TICK(c, 6);
    // 0f3634  add eax, 0xc0
    X86_AT(c, 0xf3634u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xC0u, 0, 4); }
    // 0f3639  mov dword ptr [esi*8 + 0xd3818], eax
    X86_AT(c, 0xf3639u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 8 + 0xD3818u)), c.r[0]);
    // 0f3640  add esp, 8
    X86_AT(c, 0xf3640u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_f3643:
    X86_TICK(c, 17);
    // 0f3643  mov eax, 0xd3714
    X86_AT(c, 0xf3643u);
    c.r[0] = 0xD3714u;
    // 0f3648  mov edx, dword ptr [eax + esi*8]
    X86_AT(c, 0xf3648u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8)));
    // 0f364b  mov ecx, dword ptr [eax + esi*8 + 0x100]
    X86_AT(c, 0xf364bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8 + 0x100u)));
    // 0f3652  cmp ecx, edx
    X86_AT(c, 0xf3652u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 0f3654  jne 0xf369c
    X86_AT(c, 0xf3654u);
    if (x86_cc(c, 5)) { goto L_f369c; }
    X86_TICK(c, 15);
    // 0f3656  mov ebx, dword ptr [eax + esi*8 + 0x104]
    X86_AT(c, 0xf3656u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8 + 0x104u)));
    // 0f365d  cmp ebx, dword ptr [eax + esi*8 + 4]
    X86_AT(c, 0xf365du);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8 + 0x4u))), 0, 4);
    // 0f3661  jne 0xf369c
    X86_AT(c, 0xf3661u);
    if (x86_cc(c, 5)) { goto L_f369c; }
    X86_TICK(c, 7);
    // 0f3663  cmp edx, 0xef
    X86_AT(c, 0xf3663u);
    (void)x86_sub(c, c.r[2], 0xEFu, 0, 4);
    // 0f3669  jge 0xf3675
    X86_AT(c, 0xf3669u);
    if (x86_cc(c, 13)) { goto L_f3675; }
    X86_TICK(c, 14);
    // 0f366b  sub dword ptr [eax + esi*8 + 0x100], 8
    X86_AT(c, 0xf366bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8 + 0x100u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x8u, 0, 4)); }
    // 0f3673  jmp 0xf367d
    X86_AT(c, 0xf3673u);
    goto L_f367d;
L_f3675:
    X86_TICK(c, 7);
    // 0f3675  add dword ptr [esi*8 + 0xd3814], 8
    X86_AT(c, 0xf3675u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] * 8 + 0xD3814u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x8u, 0, 4)); }
L_f367d:
    X86_TICK(c, 12);
    // 0f367d  cmp dword ptr [esi*8 + 0xd3718], 0x10f
    X86_AT(c, 0xf367du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 8 + 0xD3718u))), 0x10Fu, 0, 4);
    // 0f3688  jge 0xf3694
    X86_AT(c, 0xf3688u);
    if (x86_cc(c, 13)) { goto L_f3694; }
    X86_TICK(c, 14);
    // 0f368a  sub dword ptr [esi*8 + 0xd3818], 8
    X86_AT(c, 0xf368au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] * 8 + 0xD3818u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x8u, 0, 4)); }
    // 0f3692  jmp 0xf369c
    X86_AT(c, 0xf3692u);
    goto L_f369c;
L_f3694:
    X86_TICK(c, 7);
    // 0f3694  add dword ptr [esi*8 + 0xd3818], 8
    X86_AT(c, 0xf3694u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] * 8 + 0xD3818u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x8u, 0, 4)); }
L_f369c:
    X86_TICK(c, 9);
    // 0f369c  inc esi
    X86_AT(c, 0xf369cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f369d  jmp 0xf3583
    X86_AT(c, 0xf369du);
    X86_POLL(c, 0xf3583u); goto L_f3583;
L_f36a2:
    X86_TICK(c, 11);
    // 0f36a2  push 0x20
    X86_AT(c, 0xf36a2u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f36a4  push 0
    X86_AT(c, 0xf36a4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f36a6  call 0xf3464
    X86_AT(c, 0xf36a6u);
    push32(c, 0xf36abu); f_000f3464(c); X86_RET(c, 0xf36abu);
    X86_TICK(c, 14);
    // 0f36ab  add esp, 8
    X86_AT(c, 0xf36abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f36ae  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0xf36aeu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 0f36b2  jne 0xf36ce
    X86_AT(c, 0xf36b2u);
    if (x86_cc(c, 5)) { goto L_f36ce; }
    X86_TICK(c, 11);
    // 0f36b4  push 0x20
    X86_AT(c, 0xf36b4u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f36b6  push 1
    X86_AT(c, 0xf36b6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f36b8  call 0xf3464
    X86_AT(c, 0xf36b8u);
    push32(c, 0xf36bdu); f_000f3464(c); X86_RET(c, 0xf36bdu);
    X86_TICK(c, 4);
    // 0f36bd  sub esi, esi
    X86_AT(c, 0xf36bdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f36bf  add esp, 8
    X86_AT(c, 0xf36bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_f36c2:
    X86_TICK(c, 11);
    // 0f36c2  lea eax, [edi + edi*4]
    X86_AT(c, 0xf36c2u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0f36c5  add eax, eax
    X86_AT(c, 0xf36c5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0f36c7  cmp eax, esi
    X86_AT(c, 0xf36c7u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0f36c9  jle 0xf36ce
    X86_AT(c, 0xf36c9u);
    if (x86_cc(c, 14)) { goto L_f36ce; }
    X86_TICK(c, 9);
    // 0f36cb  inc esi
    X86_AT(c, 0xf36cbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f36cc  jmp 0xf36c2
    X86_AT(c, 0xf36ccu);
    X86_POLL(c, 0xf36c2u); goto L_f36c2;
L_f36ce:
    X86_TICK(c, 28);
    // 0f36ce  pop edi
    X86_AT(c, 0xf36ceu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f36cf  pop esi
    X86_AT(c, 0xf36cfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f36d0  pop ebx
    X86_AT(c, 0xf36d0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f36d1  leave 
    X86_AT(c, 0xf36d1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f36d2  ret 
    X86_AT(c, 0xf36d2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf3578u, "ran off the end of a function");
}
void f_000f36d4(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0f36d4  push esi
    X86_AT(c, 0xf36d4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f36d5  push edi
    X86_AT(c, 0xf36d5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f36d6  push 7
    X86_AT(c, 0xf36d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f36d8  call 0xe693c
    X86_AT(c, 0xf36d8u);
    push32(c, 0xf36ddu); f_000e693c(c); X86_RET(c, 0xf36ddu);
    X86_TICK(c, 11);
    // 0f36dd  push 0x6c30
    X86_AT(c, 0xf36ddu);
    { uint32_t v = 0x6C30u; push32(c, v); }
    // 0f36e2  push 7
    X86_AT(c, 0xf36e2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f36e4  call 0xe5654
    X86_AT(c, 0xf36e4u);
    push32(c, 0xf36e9u); f_000e5654(c); X86_RET(c, 0xf36e9u);
    X86_TICK(c, 9);
    // 0f36e9  push 7
    X86_AT(c, 0xf36e9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f36eb  call 0xe6c68
    X86_AT(c, 0xf36ebu);
    push32(c, 0xf36f0u); f_000e6c68(c); X86_RET(c, 0xf36f0u);
    X86_TICK(c, 27);
    // 0f36f0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf36f0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f36f5  lea edx, [eax + eax*4]
    X86_AT(c, 0xf36f5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f36f8  lea edx, [eax + edx*2]
    X86_AT(c, 0xf36f8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f36fb  shl edx, 5
    X86_AT(c, 0xf36fbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f36fe  sub edx, eax
    X86_AT(c, 0xf36feu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3700  add esp, 0x10
    X86_AT(c, 0xf3700u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f3703  cmp dword ptr [edx + 0xcdf23], 0
    X86_AT(c, 0xf3703u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF23u))), 0x0u, 0, 4);
    // 0f370a  jg 0xf3733
    X86_AT(c, 0xf370au);
    if (x86_cc(c, 15)) { goto L_f3733; }
    X86_TICK(c, 9);
    // 0f370c  push 1
    X86_AT(c, 0xf370cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f370e  call 0xe1944
    X86_AT(c, 0xf370eu);
    push32(c, 0xf3713u); f_000e1944(c); X86_RET(c, 0xf3713u);
    X86_TICK(c, 11);
    // 0f3713  push 0x6c68
    X86_AT(c, 0xf3713u);
    { uint32_t v = 0x6C68u; push32(c, v); }
    // 0f3718  push 7
    X86_AT(c, 0xf3718u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f371a  call 0xe5654
    X86_AT(c, 0xf371au);
    push32(c, 0xf371fu); f_000e5654(c); X86_RET(c, 0xf371fu);
    X86_TICK(c, 9);
    // 0f371f  push 7
    X86_AT(c, 0xf371fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3721  call 0xe6c68
    X86_AT(c, 0xf3721u);
    push32(c, 0xf3726u); f_000e6c68(c); X86_RET(c, 0xf3726u);
    X86_TICK(c, 11);
    // 0f3726  mov eax, 0xffffffff
    X86_AT(c, 0xf3726u);
    c.r[0] = 0xFFFFFFFFu;
    // 0f372b  add esp, 0x10
    X86_AT(c, 0xf372bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f372e  jmp 0xf3c06
    X86_AT(c, 0xf372eu);
    goto L_f3c06;
L_f3733:
    X86_TICK(c, 30);
    // 0f3733  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf3733u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f3738  lea edx, [eax + eax*4]
    X86_AT(c, 0xf3738u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f373b  lea edx, [eax + edx*2]
    X86_AT(c, 0xf373bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f373e  shl edx, 5
    X86_AT(c, 0xf373eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f3741  sub edx, eax
    X86_AT(c, 0xf3741u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3743  dec dword ptr [edx + 0xcdf23]
    X86_AT(c, 0xf3743u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF23u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0f3749  push 0x6c88
    X86_AT(c, 0xf3749u);
    { uint32_t v = 0x6C88u; push32(c, v); }
    // 0f374e  push 7
    X86_AT(c, 0xf374eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3750  call 0xe5654
    X86_AT(c, 0xf3750u);
    push32(c, 0xf3755u); f_000e5654(c); X86_RET(c, 0xf3755u);
    X86_TICK(c, 9);
    // 0f3755  push 7
    X86_AT(c, 0xf3755u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3757  call 0xe6c68
    X86_AT(c, 0xf3757u);
    push32(c, 0xf375cu); f_000e6c68(c); X86_RET(c, 0xf375cu);
    X86_TICK(c, 11);
    // 0f375c  push 0x6cc4
    X86_AT(c, 0xf375cu);
    { uint32_t v = 0x6CC4u; push32(c, v); }
    // 0f3761  push 7
    X86_AT(c, 0xf3761u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3763  call 0xe6cb0
    X86_AT(c, 0xf3763u);
    push32(c, 0xf3768u); f_000e6cb0(c); X86_RET(c, 0xf3768u);
    X86_TICK(c, 9);
    // 0f3768  push 7
    X86_AT(c, 0xf3768u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f376a  call 0xe1b10
    X86_AT(c, 0xf376au);
    push32(c, 0xf376fu); f_000e1b10(c); X86_RET(c, 0xf376fu);
    X86_TICK(c, 11);
    // 0f376f  mov dword ptr [0xd3998], eax
    X86_AT(c, 0xf376fu);
    wr32((c.sbase[3] + (uint32_t)(0xD3998u)), c.r[0]);
    // 0f3774  push 7
    X86_AT(c, 0xf3774u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3776  call 0xe6c68
    X86_AT(c, 0xf3776u);
    push32(c, 0xf377bu); f_000e6c68(c); X86_RET(c, 0xf377bu);
    X86_TICK(c, 14);
    // 0f377b  add esp, 0x1c
    X86_AT(c, 0xf377bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f377e  cmp dword ptr [0xd3998], 0xffffffff
    X86_AT(c, 0xf377eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD3998u))), 0xFFFFFFFFu, 0, 4);
    // 0f3785  jne 0xf378e
    X86_AT(c, 0xf3785u);
    if (x86_cc(c, 5)) { goto L_f378e; }
    X86_TICK(c, 9);
    // 0f3787  push 0x6cd0
    X86_AT(c, 0xf3787u);
    { uint32_t v = 0x6CD0u; push32(c, v); }
    // 0f378c  jmp 0xf37f0
    X86_AT(c, 0xf378cu);
    goto L_f37f0;
L_f378e:
    X86_TICK(c, 11);
    // 0f378e  push 0x6cf4
    X86_AT(c, 0xf378eu);
    { uint32_t v = 0x6CF4u; push32(c, v); }
    // 0f3793  push 7
    X86_AT(c, 0xf3793u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3795  call 0xe6cb0
    X86_AT(c, 0xf3795u);
    push32(c, 0xf379au); f_000e6cb0(c); X86_RET(c, 0xf379au);
    X86_TICK(c, 9);
    // 0f379a  push 7
    X86_AT(c, 0xf379au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f379c  call 0xe1b10
    X86_AT(c, 0xf379cu);
    push32(c, 0xf37a1u); f_000e1b10(c); X86_RET(c, 0xf37a1u);
    X86_TICK(c, 11);
    // 0f37a1  mov dword ptr [0xd399c], eax
    X86_AT(c, 0xf37a1u);
    wr32((c.sbase[3] + (uint32_t)(0xD399Cu)), c.r[0]);
    // 0f37a6  push 7
    X86_AT(c, 0xf37a6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f37a8  call 0xe6c68
    X86_AT(c, 0xf37a8u);
    push32(c, 0xf37adu); f_000e6c68(c); X86_RET(c, 0xf37adu);
    X86_TICK(c, 14);
    // 0f37ad  add esp, 0x10
    X86_AT(c, 0xf37adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f37b0  cmp dword ptr [0xd399c], 0xffffffff
    X86_AT(c, 0xf37b0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD399Cu))), 0xFFFFFFFFu, 0, 4);
    // 0f37b7  jne 0xf37c0
    X86_AT(c, 0xf37b7u);
    if (x86_cc(c, 5)) { goto L_f37c0; }
    X86_TICK(c, 9);
    // 0f37b9  push 0x6d00
    X86_AT(c, 0xf37b9u);
    { uint32_t v = 0x6D00u; push32(c, v); }
    // 0f37be  jmp 0xf37f0
    X86_AT(c, 0xf37beu);
    goto L_f37f0;
L_f37c0:
    X86_TICK(c, 11);
    // 0f37c0  push 0x6d24
    X86_AT(c, 0xf37c0u);
    { uint32_t v = 0x6D24u; push32(c, v); }
    // 0f37c5  push 7
    X86_AT(c, 0xf37c5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f37c7  call 0xe6cb0
    X86_AT(c, 0xf37c7u);
    push32(c, 0xf37ccu); f_000e6cb0(c); X86_RET(c, 0xf37ccu);
    X86_TICK(c, 9);
    // 0f37cc  push 7
    X86_AT(c, 0xf37ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f37ce  call 0xe1b10
    X86_AT(c, 0xf37ceu);
    push32(c, 0xf37d3u); f_000e1b10(c); X86_RET(c, 0xf37d3u);
    X86_TICK(c, 11);
    // 0f37d3  mov dword ptr [0xd39a0], eax
    X86_AT(c, 0xf37d3u);
    wr32((c.sbase[3] + (uint32_t)(0xD39A0u)), c.r[0]);
    // 0f37d8  push 7
    X86_AT(c, 0xf37d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f37da  call 0xe6c68
    X86_AT(c, 0xf37dau);
    push32(c, 0xf37dfu); f_000e6c68(c); X86_RET(c, 0xf37dfu);
    X86_TICK(c, 14);
    // 0f37df  add esp, 0x10
    X86_AT(c, 0xf37dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f37e2  cmp dword ptr [0xd39a0], 0xffffffff
    X86_AT(c, 0xf37e2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD39A0u))), 0xFFFFFFFFu, 0, 4);
    // 0f37e9  jne 0xf380b
    X86_AT(c, 0xf37e9u);
    if (x86_cc(c, 5)) { goto L_f380b; }
    X86_TICK(c, 2);
    // 0f37eb  push 0x6d30
    X86_AT(c, 0xf37ebu);
    { uint32_t v = 0x6D30u; push32(c, v); }
L_f37f0:
    X86_TICK(c, 9);
    // 0f37f0  push 7
    X86_AT(c, 0xf37f0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f37f2  call 0xe5654
    X86_AT(c, 0xf37f2u);
    push32(c, 0xf37f7u); f_000e5654(c); X86_RET(c, 0xf37f7u);
    X86_TICK(c, 9);
    // 0f37f7  push 7
    X86_AT(c, 0xf37f7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f37f9  call 0xe6c68
    X86_AT(c, 0xf37f9u);
    push32(c, 0xf37feu); f_000e6c68(c); X86_RET(c, 0xf37feu);
    X86_TICK(c, 11);
    // 0f37fe  mov eax, 0xffffffff
    X86_AT(c, 0xf37feu);
    c.r[0] = 0xFFFFFFFFu;
    // 0f3803  add esp, 0xc
    X86_AT(c, 0xf3803u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f3806  jmp 0xf3c06
    X86_AT(c, 0xf3806u);
    goto L_f3c06;
L_f380b:
    X86_TICK(c, 9);
    // 0f380b  push 7
    X86_AT(c, 0xf380bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f380d  call 0xe693c
    X86_AT(c, 0xf380du);
    push32(c, 0xf3812u); f_000e693c(c); X86_RET(c, 0xf3812u);
    X86_TICK(c, 11);
    // 0f3812  push 0x6d54
    X86_AT(c, 0xf3812u);
    { uint32_t v = 0x6D54u; push32(c, v); }
    // 0f3817  push 7
    X86_AT(c, 0xf3817u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3819  call 0xe5654
    X86_AT(c, 0xf3819u);
    push32(c, 0xf381eu); f_000e5654(c); X86_RET(c, 0xf381eu);
    X86_TICK(c, 9);
    // 0f381e  push 7
    X86_AT(c, 0xf381eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3820  call 0xe6c68
    X86_AT(c, 0xf3820u);
    push32(c, 0xf3825u); f_000e6c68(c); X86_RET(c, 0xf3825u);
    X86_TICK(c, 4);
    // 0f3825  mov edi, 0x1f4
    X86_AT(c, 0xf3825u);
    c.r[7] = 0x1F4u;
    // 0f382a  add esp, 0x10
    X86_AT(c, 0xf382au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f382d:
    X86_TICK(c, 7);
    // 0f382d  and edi, edi
    X86_AT(c, 0xf382du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f382f  jle 0xf384b
    X86_AT(c, 0xf382fu);
    if (x86_cc(c, 14)) { goto L_f384b; }
    X86_TICK(c, 2);
    // 0f3831  sub esi, esi
    X86_AT(c, 0xf3831u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_f3833:
    X86_TICK(c, 7);
    // 0f3833  cmp esi, 0xa
    X86_AT(c, 0xf3833u);
    (void)x86_sub(c, c.r[6], 0xAu, 0, 4);
    // 0f3836  jge 0xf3846
    X86_AT(c, 0xf3836u);
    if (x86_cc(c, 13)) { goto L_f3846; }
    X86_TICK(c, 11);
    // 0f3838  push edi
    X86_AT(c, 0xf3838u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f3839  push 0
    X86_AT(c, 0xf3839u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f383b  call 0xf3578
    X86_AT(c, 0xf383bu);
    push32(c, 0xf3840u); f_000f3578(c); X86_RET(c, 0xf3840u);
    X86_TICK(c, 11);
    // 0f3840  inc esi
    X86_AT(c, 0xf3840u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f3841  add esp, 8
    X86_AT(c, 0xf3841u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f3844  jmp 0xf3833
    X86_AT(c, 0xf3844u);
    X86_POLL(c, 0xf3833u); goto L_f3833;
L_f3846:
    X86_TICK(c, 9);
    // 0f3846  sub edi, 0x14
    X86_AT(c, 0xf3846u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0f3849  jmp 0xf382d
    X86_AT(c, 0xf3849u);
    X86_POLL(c, 0xf382du); goto L_f382d;
L_f384b:
    X86_TICK(c, 9);
    // 0f384b  push 4
    X86_AT(c, 0xf384bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f384d  call 0xe1944
    X86_AT(c, 0xf384du);
    push32(c, 0xf3852u); f_000e1944(c); X86_RET(c, 0xf3852u);
    X86_TICK(c, 9);
    // 0f3852  push 7
    X86_AT(c, 0xf3852u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3854  call 0xe693c
    X86_AT(c, 0xf3854u);
    push32(c, 0xf3859u); f_000e693c(c); X86_RET(c, 0xf3859u);
    X86_TICK(c, 11);
    // 0f3859  push 0x6d9c
    X86_AT(c, 0xf3859u);
    { uint32_t v = 0x6D9Cu; push32(c, v); }
    // 0f385e  push 7
    X86_AT(c, 0xf385eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3860  call 0xe5654
    X86_AT(c, 0xf3860u);
    push32(c, 0xf3865u); f_000e5654(c); X86_RET(c, 0xf3865u);
    X86_TICK(c, 9);
    // 0f3865  push 7
    X86_AT(c, 0xf3865u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3867  call 0xe6c68
    X86_AT(c, 0xf3867u);
    push32(c, 0xf386cu); f_000e6c68(c); X86_RET(c, 0xf386cu);
    X86_TICK(c, 4);
    // 0f386c  sub esi, esi
    X86_AT(c, 0xf386cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f386e  add esp, 0x14
    X86_AT(c, 0xf386eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_f3871:
    X86_TICK(c, 7);
    // 0f3871  cmp esi, 0x96
    X86_AT(c, 0xf3871u);
    (void)x86_sub(c, c.r[6], 0x96u, 0, 4);
    // 0f3877  jge 0xf3888
    X86_AT(c, 0xf3877u);
    if (x86_cc(c, 13)) { goto L_f3888; }
    X86_TICK(c, 11);
    // 0f3879  push 0
    X86_AT(c, 0xf3879u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f387b  push 1
    X86_AT(c, 0xf387bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f387d  call 0xf3578
    X86_AT(c, 0xf387du);
    push32(c, 0xf3882u); f_000f3578(c); X86_RET(c, 0xf3882u);
    X86_TICK(c, 11);
    // 0f3882  inc esi
    X86_AT(c, 0xf3882u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f3883  add esp, 8
    X86_AT(c, 0xf3883u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f3886  jmp 0xf3871
    X86_AT(c, 0xf3886u);
    X86_POLL(c, 0xf3871u); goto L_f3871;
L_f3888:
    X86_TICK(c, 9);
    // 0f3888  push 9
    X86_AT(c, 0xf3888u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f388a  call 0xe1a7c
    X86_AT(c, 0xf388au);
    push32(c, 0xf388fu); f_000e1a7c(c); X86_RET(c, 0xf388fu);
    X86_TICK(c, 9);
    // 0f388f  add esp, 4
    X86_AT(c, 0xf388fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f3892  dec eax
    X86_AT(c, 0xf3892u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f3893  jge 0xf38d6
    X86_AT(c, 0xf3893u);
    if (x86_cc(c, 13)) { goto L_f38d6; }
    X86_TICK(c, 9);
    // 0f3895  push 7
    X86_AT(c, 0xf3895u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3897  call 0xe693c
    X86_AT(c, 0xf3897u);
    push32(c, 0xf389cu); f_000e693c(c); X86_RET(c, 0xf389cu);
    X86_TICK(c, 11);
    // 0f389c  push 0x6dd0
    X86_AT(c, 0xf389cu);
    { uint32_t v = 0x6DD0u; push32(c, v); }
    // 0f38a1  push 7
    X86_AT(c, 0xf38a1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f38a3  call 0xe5654
    X86_AT(c, 0xf38a3u);
    push32(c, 0xf38a8u); f_000e5654(c); X86_RET(c, 0xf38a8u);
    X86_TICK(c, 9);
    // 0f38a8  push 7
    X86_AT(c, 0xf38a8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f38aa  call 0xe6c68
    X86_AT(c, 0xf38aau);
    push32(c, 0xf38afu); f_000e6c68(c); X86_RET(c, 0xf38afu);
    X86_TICK(c, 9);
    // 0f38af  push 9
    X86_AT(c, 0xf38afu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f38b1  call 0xe1a7c
    X86_AT(c, 0xf38b1u);
    push32(c, 0xf38b6u); f_000e1a7c(c); X86_RET(c, 0xf38b6u);
    X86_TICK(c, 11);
    // 0f38b6  mov dword ptr [0xd3998], eax
    X86_AT(c, 0xf38b6u);
    wr32((c.sbase[3] + (uint32_t)(0xD3998u)), c.r[0]);
    // 0f38bb  push 9
    X86_AT(c, 0xf38bbu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f38bd  call 0xe1a7c
    X86_AT(c, 0xf38bdu);
    push32(c, 0xf38c2u); f_000e1a7c(c); X86_RET(c, 0xf38c2u);
    X86_TICK(c, 11);
    // 0f38c2  mov dword ptr [0xd399c], eax
    X86_AT(c, 0xf38c2u);
    wr32((c.sbase[3] + (uint32_t)(0xD399Cu)), c.r[0]);
    // 0f38c7  push 9
    X86_AT(c, 0xf38c7u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f38c9  call 0xe1a7c
    X86_AT(c, 0xf38c9u);
    push32(c, 0xf38ceu); f_000e1a7c(c); X86_RET(c, 0xf38ceu);
    X86_TICK(c, 4);
    // 0f38ce  mov dword ptr [0xd39a0], eax
    X86_AT(c, 0xf38ceu);
    wr32((c.sbase[3] + (uint32_t)(0xD39A0u)), c.r[0]);
    // 0f38d3  add esp, 0x1c
    X86_AT(c, 0xf38d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_f38d6:
    X86_TICK(c, 2);
    // 0f38d6  sub esi, esi
    X86_AT(c, 0xf38d6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_f38d8:
    X86_TICK(c, 7);
    // 0f38d8  cmp esi, 0x96
    X86_AT(c, 0xf38d8u);
    (void)x86_sub(c, c.r[6], 0x96u, 0, 4);
    // 0f38de  jge 0xf38ef
    X86_AT(c, 0xf38deu);
    if (x86_cc(c, 13)) { goto L_f38ef; }
    X86_TICK(c, 11);
    // 0f38e0  push 0
    X86_AT(c, 0xf38e0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f38e2  push 1
    X86_AT(c, 0xf38e2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f38e4  call 0xf3578
    X86_AT(c, 0xf38e4u);
    push32(c, 0xf38e9u); f_000f3578(c); X86_RET(c, 0xf38e9u);
    X86_TICK(c, 11);
    // 0f38e9  inc esi
    X86_AT(c, 0xf38e9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f38ea  add esp, 8
    X86_AT(c, 0xf38eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f38ed  jmp 0xf38d8
    X86_AT(c, 0xf38edu);
    X86_POLL(c, 0xf38d8u); goto L_f38d8;
L_f38ef:
    X86_TICK(c, 7);
    // 0f38ef  call 0xe8470
    X86_AT(c, 0xf38efu);
    push32(c, 0xf38f4u); f_000e8470(c); X86_RET(c, 0xf38f4u);
    X86_TICK(c, 2);
    // 0f38f4  mov edi, 0xa
    X86_AT(c, 0xf38f4u);
    c.r[7] = 0xAu;
L_f38f9:
    X86_TICK(c, 7);
    // 0f38f9  cmp edi, 0x1f4
    X86_AT(c, 0xf38f9u);
    (void)x86_sub(c, c.r[7], 0x1F4u, 0, 4);
    // 0f38ff  jge 0xf391b
    X86_AT(c, 0xf38ffu);
    if (x86_cc(c, 13)) { goto L_f391b; }
    X86_TICK(c, 2);
    // 0f3901  sub esi, esi
    X86_AT(c, 0xf3901u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_f3903:
    X86_TICK(c, 7);
    // 0f3903  cmp esi, 0xa
    X86_AT(c, 0xf3903u);
    (void)x86_sub(c, c.r[6], 0xAu, 0, 4);
    // 0f3906  jge 0xf3916
    X86_AT(c, 0xf3906u);
    if (x86_cc(c, 13)) { goto L_f3916; }
    X86_TICK(c, 11);
    // 0f3908  push edi
    X86_AT(c, 0xf3908u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f3909  push 0
    X86_AT(c, 0xf3909u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f390b  call 0xf3578
    X86_AT(c, 0xf390bu);
    push32(c, 0xf3910u); f_000f3578(c); X86_RET(c, 0xf3910u);
    X86_TICK(c, 11);
    // 0f3910  inc esi
    X86_AT(c, 0xf3910u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f3911  add esp, 8
    X86_AT(c, 0xf3911u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f3914  jmp 0xf3903
    X86_AT(c, 0xf3914u);
    X86_POLL(c, 0xf3903u); goto L_f3903;
L_f3916:
    X86_TICK(c, 9);
    // 0f3916  add edi, 0x14
    X86_AT(c, 0xf3916u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f3919  jmp 0xf38f9
    X86_AT(c, 0xf3919u);
    X86_POLL(c, 0xf38f9u); goto L_f38f9;
L_f391b:
    X86_TICK(c, 9);
    // 0f391b  push 7
    X86_AT(c, 0xf391bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f391d  call 0xe693c
    X86_AT(c, 0xf391du);
    push32(c, 0xf3922u); f_000e693c(c); X86_RET(c, 0xf3922u);
    X86_TICK(c, 11);
    // 0f3922  push 0x6dfc
    X86_AT(c, 0xf3922u);
    { uint32_t v = 0x6DFCu; push32(c, v); }
    // 0f3927  push 7
    X86_AT(c, 0xf3927u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3929  call 0xe5654
    X86_AT(c, 0xf3929u);
    push32(c, 0xf392eu); f_000e5654(c); X86_RET(c, 0xf392eu);
    X86_TICK(c, 9);
    // 0f392e  push 7
    X86_AT(c, 0xf392eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3930  call 0xe6c68
    X86_AT(c, 0xf3930u);
    push32(c, 0xf3935u); f_000e6c68(c); X86_RET(c, 0xf3935u);
    X86_TICK(c, 14);
    // 0f3935  add esp, 0x10
    X86_AT(c, 0xf3935u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f3938  cmp dword ptr [0xd3998], 4
    X86_AT(c, 0xf3938u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD3998u))), 0x4u, 0, 4);
    // 0f393f  jne 0xf399d
    X86_AT(c, 0xf393fu);
    if (x86_cc(c, 5)) { goto L_f399d; }
    X86_TICK(c, 12);
    // 0f3941  cmp dword ptr [0xd399c], 4
    X86_AT(c, 0xf3941u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD399Cu))), 0x4u, 0, 4);
    // 0f3948  jne 0xf399d
    X86_AT(c, 0xf3948u);
    if (x86_cc(c, 5)) { goto L_f399d; }
    X86_TICK(c, 12);
    // 0f394a  cmp dword ptr [0xd39a0], 4
    X86_AT(c, 0xf394au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD39A0u))), 0x4u, 0, 4);
    // 0f3951  jne 0xf399d
    X86_AT(c, 0xf3951u);
    if (x86_cc(c, 5)) { goto L_f399d; }
    X86_TICK(c, 9);
    // 0f3953  push 0
    X86_AT(c, 0xf3953u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f3955  call 0xe1944
    X86_AT(c, 0xf3955u);
    push32(c, 0xf395au); f_000e1944(c); X86_RET(c, 0xf395au);
    X86_TICK(c, 11);
    // 0f395a  push 0x6e58
    X86_AT(c, 0xf395au);
    { uint32_t v = 0x6E58u; push32(c, v); }
    // 0f395f  push 7
    X86_AT(c, 0xf395fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3961  call 0xe5654
    X86_AT(c, 0xf3961u);
    push32(c, 0xf3966u); f_000e5654(c); X86_RET(c, 0xf3966u);
    X86_TICK(c, 9);
    // 0f3966  push 7
    X86_AT(c, 0xf3966u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3968  call 0xe6c68
    X86_AT(c, 0xf3968u);
    push32(c, 0xf396du); f_000e6c68(c); X86_RET(c, 0xf396du);
    X86_TICK(c, 11);
    // 0f396d  push 0x6e88
    X86_AT(c, 0xf396du);
    { uint32_t v = 0x6E88u; push32(c, v); }
    // 0f3972  push 7
    X86_AT(c, 0xf3972u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3974  call 0xe5654
    X86_AT(c, 0xf3974u);
    push32(c, 0xf3979u); f_000e5654(c); X86_RET(c, 0xf3979u);
    X86_TICK(c, 9);
    // 0f3979  push 7
    X86_AT(c, 0xf3979u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f397b  call 0xe6c68
    X86_AT(c, 0xf397bu);
    push32(c, 0xf3980u); f_000e6c68(c); X86_RET(c, 0xf3980u);
    X86_TICK(c, 11);
    // 0f3980  mov word ptr [0xcde48], 0
    X86_AT(c, 0xf3980u);
    wr16((c.sbase[3] + (uint32_t)(0xCDE48u)), 0x0u);
    // 0f3989  push 0xffffffff
    X86_AT(c, 0xf3989u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0f398b  call 0xeff44
    X86_AT(c, 0xf398bu);
    push32(c, 0xf3990u); f_000eff44(c); X86_RET(c, 0xf3990u);
    X86_TICK(c, 11);
    // 0f3990  mov eax, 0xffffffff
    X86_AT(c, 0xf3990u);
    c.r[0] = 0xFFFFFFFFu;
    // 0f3995  add esp, 0x20
    X86_AT(c, 0xf3995u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f3998  jmp 0xf3c06
    X86_AT(c, 0xf3998u);
    goto L_f3c06;
L_f399d:
    X86_TICK(c, 12);
    // 0f399d  cmp dword ptr [0xd3998], 5
    X86_AT(c, 0xf399du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD3998u))), 0x5u, 0, 4);
    // 0f39a4  jne 0xf39d7
    X86_AT(c, 0xf39a4u);
    if (x86_cc(c, 5)) { goto L_f39d7; }
    X86_TICK(c, 12);
    // 0f39a6  cmp dword ptr [0xd399c], 4
    X86_AT(c, 0xf39a6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD399Cu))), 0x4u, 0, 4);
    // 0f39ad  jne 0xf39d7
    X86_AT(c, 0xf39adu);
    if (x86_cc(c, 5)) { goto L_f39d7; }
    X86_TICK(c, 12);
    // 0f39af  cmp dword ptr [0xd39a0], 5
    X86_AT(c, 0xf39afu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD39A0u))), 0x5u, 0, 4);
    // 0f39b6  jne 0xf39d7
    X86_AT(c, 0xf39b6u);
    if (x86_cc(c, 5)) { goto L_f39d7; }
    X86_TICK(c, 22);
    // 0f39b8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf39b8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f39bd  lea edx, [eax + eax*4]
    X86_AT(c, 0xf39bdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f39c0  lea edx, [eax + edx*2]
    X86_AT(c, 0xf39c0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f39c3  shl edx, 5
    X86_AT(c, 0xf39c3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f39c6  sub edx, eax
    X86_AT(c, 0xf39c6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f39c8  mov dword ptr [edx + 0xcde99], 5
    X86_AT(c, 0xf39c8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), 0x5u);
    // 0f39d2  jmp 0xf3bd9
    X86_AT(c, 0xf39d2u);
    goto L_f3bd9;
L_f39d7:
    X86_TICK(c, 12);
    // 0f39d7  cmp dword ptr [0xd3998], 3
    X86_AT(c, 0xf39d7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD3998u))), 0x3u, 0, 4);
    // 0f39de  jne 0xf3a11
    X86_AT(c, 0xf39deu);
    if (x86_cc(c, 5)) { goto L_f3a11; }
    X86_TICK(c, 12);
    // 0f39e0  cmp dword ptr [0xd399c], 3
    X86_AT(c, 0xf39e0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD399Cu))), 0x3u, 0, 4);
    // 0f39e7  jne 0xf3a11
    X86_AT(c, 0xf39e7u);
    if (x86_cc(c, 5)) { goto L_f3a11; }
    X86_TICK(c, 12);
    // 0f39e9  cmp dword ptr [0xd39a0], 4
    X86_AT(c, 0xf39e9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD39A0u))), 0x4u, 0, 4);
    // 0f39f0  jne 0xf3a11
    X86_AT(c, 0xf39f0u);
    if (x86_cc(c, 5)) { goto L_f3a11; }
    X86_TICK(c, 22);
    // 0f39f2  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf39f2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f39f7  lea edx, [eax + eax*4]
    X86_AT(c, 0xf39f7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f39fa  lea edx, [eax + edx*2]
    X86_AT(c, 0xf39fau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f39fd  shl edx, 5
    X86_AT(c, 0xf39fdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f3a00  sub edx, eax
    X86_AT(c, 0xf3a00u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3a02  mov dword ptr [edx + 0xcde99], 6
    X86_AT(c, 0xf3a02u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), 0x6u);
    // 0f3a0c  jmp 0xf3bd9
    X86_AT(c, 0xf3a0cu);
    goto L_f3bd9;
L_f3a11:
    X86_TICK(c, 12);
    // 0f3a11  cmp dword ptr [0xd3998], 6
    X86_AT(c, 0xf3a11u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD3998u))), 0x6u, 0, 4);
    // 0f3a18  jne 0xf3a4b
    X86_AT(c, 0xf3a18u);
    if (x86_cc(c, 5)) { goto L_f3a4b; }
    X86_TICK(c, 12);
    // 0f3a1a  cmp dword ptr [0xd399c], 6
    X86_AT(c, 0xf3a1au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD399Cu))), 0x6u, 0, 4);
    // 0f3a21  jne 0xf3a4b
    X86_AT(c, 0xf3a21u);
    if (x86_cc(c, 5)) { goto L_f3a4b; }
    X86_TICK(c, 12);
    // 0f3a23  cmp dword ptr [0xd39a0], 6
    X86_AT(c, 0xf3a23u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD39A0u))), 0x6u, 0, 4);
    // 0f3a2a  jne 0xf3a4b
    X86_AT(c, 0xf3a2au);
    if (x86_cc(c, 5)) { goto L_f3a4b; }
    X86_TICK(c, 22);
    // 0f3a2c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf3a2cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f3a31  lea edx, [eax + eax*4]
    X86_AT(c, 0xf3a31u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f3a34  lea edx, [eax + edx*2]
    X86_AT(c, 0xf3a34u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f3a37  shl edx, 5
    X86_AT(c, 0xf3a37u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f3a3a  sub edx, eax
    X86_AT(c, 0xf3a3au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3a3c  mov dword ptr [edx + 0xcde99], 4
    X86_AT(c, 0xf3a3cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), 0x4u);
    // 0f3a46  jmp 0xf3bd9
    X86_AT(c, 0xf3a46u);
    goto L_f3bd9;
L_f3a4b:
    X86_TICK(c, 12);
    // 0f3a4b  cmp dword ptr [0xd3998], 6
    X86_AT(c, 0xf3a4bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD3998u))), 0x6u, 0, 4);
    // 0f3a52  jne 0xf3a85
    X86_AT(c, 0xf3a52u);
    if (x86_cc(c, 5)) { goto L_f3a85; }
    X86_TICK(c, 12);
    // 0f3a54  cmp dword ptr [0xd399c], 2
    X86_AT(c, 0xf3a54u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD399Cu))), 0x2u, 0, 4);
    // 0f3a5b  jne 0xf3a85
    X86_AT(c, 0xf3a5bu);
    if (x86_cc(c, 5)) { goto L_f3a85; }
    X86_TICK(c, 12);
    // 0f3a5d  cmp dword ptr [0xd39a0], 3
    X86_AT(c, 0xf3a5du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD39A0u))), 0x3u, 0, 4);
    // 0f3a64  jne 0xf3a85
    X86_AT(c, 0xf3a64u);
    if (x86_cc(c, 5)) { goto L_f3a85; }
    X86_TICK(c, 22);
    // 0f3a66  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf3a66u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f3a6b  lea edx, [eax + eax*4]
    X86_AT(c, 0xf3a6bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f3a6e  lea edx, [eax + edx*2]
    X86_AT(c, 0xf3a6eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f3a71  shl edx, 5
    X86_AT(c, 0xf3a71u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f3a74  sub edx, eax
    X86_AT(c, 0xf3a74u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3a76  mov dword ptr [edx + 0xcde99], 7
    X86_AT(c, 0xf3a76u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), 0x7u);
    // 0f3a80  jmp 0xf3bd9
    X86_AT(c, 0xf3a80u);
    goto L_f3bd9;
L_f3a85:
    X86_TICK(c, 12);
    // 0f3a85  cmp dword ptr [0xd3998], 1
    X86_AT(c, 0xf3a85u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD3998u))), 0x1u, 0, 4);
    // 0f3a8c  jne 0xf3abf
    X86_AT(c, 0xf3a8cu);
    if (x86_cc(c, 5)) { goto L_f3abf; }
    X86_TICK(c, 12);
    // 0f3a8e  cmp dword ptr [0xd399c], 3
    X86_AT(c, 0xf3a8eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD399Cu))), 0x3u, 0, 4);
    // 0f3a95  jne 0xf3abf
    X86_AT(c, 0xf3a95u);
    if (x86_cc(c, 5)) { goto L_f3abf; }
    X86_TICK(c, 12);
    // 0f3a97  cmp dword ptr [0xd39a0], 4
    X86_AT(c, 0xf3a97u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD39A0u))), 0x4u, 0, 4);
    // 0f3a9e  jne 0xf3abf
    X86_AT(c, 0xf3a9eu);
    if (x86_cc(c, 5)) { goto L_f3abf; }
    X86_TICK(c, 22);
    // 0f3aa0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf3aa0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f3aa5  lea edx, [eax + eax*4]
    X86_AT(c, 0xf3aa5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f3aa8  lea edx, [eax + edx*2]
    X86_AT(c, 0xf3aa8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f3aab  shl edx, 5
    X86_AT(c, 0xf3aabu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f3aae  sub edx, eax
    X86_AT(c, 0xf3aaeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3ab0  mov dword ptr [edx + 0xcde99], 8
    X86_AT(c, 0xf3ab0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), 0x8u);
    // 0f3aba  jmp 0xf3bd9
    X86_AT(c, 0xf3abau);
    goto L_f3bd9;
L_f3abf:
    X86_TICK(c, 12);
    // 0f3abf  cmp dword ptr [0xd3998], 2
    X86_AT(c, 0xf3abfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD3998u))), 0x2u, 0, 4);
    // 0f3ac6  jne 0xf3af9
    X86_AT(c, 0xf3ac6u);
    if (x86_cc(c, 5)) { goto L_f3af9; }
    X86_TICK(c, 12);
    // 0f3ac8  cmp dword ptr [0xd399c], 8
    X86_AT(c, 0xf3ac8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD399Cu))), 0x8u, 0, 4);
    // 0f3acf  jne 0xf3af9
    X86_AT(c, 0xf3acfu);
    if (x86_cc(c, 5)) { goto L_f3af9; }
    X86_TICK(c, 12);
    // 0f3ad1  cmp dword ptr [0xd39a0], 5
    X86_AT(c, 0xf3ad1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD39A0u))), 0x5u, 0, 4);
    // 0f3ad8  jne 0xf3af9
    X86_AT(c, 0xf3ad8u);
    if (x86_cc(c, 5)) { goto L_f3af9; }
    X86_TICK(c, 22);
    // 0f3ada  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf3adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f3adf  lea edx, [eax + eax*4]
    X86_AT(c, 0xf3adfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f3ae2  lea edx, [eax + edx*2]
    X86_AT(c, 0xf3ae2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f3ae5  shl edx, 5
    X86_AT(c, 0xf3ae5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f3ae8  sub edx, eax
    X86_AT(c, 0xf3ae8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3aea  mov dword ptr [edx + 0xcde99], 9
    X86_AT(c, 0xf3aeau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), 0x9u);
    // 0f3af4  jmp 0xf3bd9
    X86_AT(c, 0xf3af4u);
    goto L_f3bd9;
L_f3af9:
    X86_TICK(c, 12);
    // 0f3af9  cmp dword ptr [0xd3998], 9
    X86_AT(c, 0xf3af9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD3998u))), 0x9u, 0, 4);
    // 0f3b00  jne 0xf3b33
    X86_AT(c, 0xf3b00u);
    if (x86_cc(c, 5)) { goto L_f3b33; }
    X86_TICK(c, 12);
    // 0f3b02  cmp dword ptr [0xd399c], 4
    X86_AT(c, 0xf3b02u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD399Cu))), 0x4u, 0, 4);
    // 0f3b09  jne 0xf3b33
    X86_AT(c, 0xf3b09u);
    if (x86_cc(c, 5)) { goto L_f3b33; }
    X86_TICK(c, 12);
    // 0f3b0b  cmp dword ptr [0xd39a0], 6
    X86_AT(c, 0xf3b0bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD39A0u))), 0x6u, 0, 4);
    // 0f3b12  jne 0xf3b33
    X86_AT(c, 0xf3b12u);
    if (x86_cc(c, 5)) { goto L_f3b33; }
    X86_TICK(c, 22);
    // 0f3b14  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf3b14u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f3b19  lea edx, [eax + eax*4]
    X86_AT(c, 0xf3b19u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f3b1c  lea edx, [eax + edx*2]
    X86_AT(c, 0xf3b1cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f3b1f  shl edx, 5
    X86_AT(c, 0xf3b1fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f3b22  sub edx, eax
    X86_AT(c, 0xf3b22u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3b24  mov dword ptr [edx + 0xcde99], 0xa
    X86_AT(c, 0xf3b24u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), 0xAu);
    // 0f3b2e  jmp 0xf3bd9
    X86_AT(c, 0xf3b2eu);
    goto L_f3bd9;
L_f3b33:
    X86_TICK(c, 12);
    // 0f3b33  cmp dword ptr [0xd3998], 4
    X86_AT(c, 0xf3b33u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD3998u))), 0x4u, 0, 4);
    // 0f3b3a  jne 0xf3b6d
    X86_AT(c, 0xf3b3au);
    if (x86_cc(c, 5)) { goto L_f3b6d; }
    X86_TICK(c, 12);
    // 0f3b3c  cmp dword ptr [0xd399c], 0
    X86_AT(c, 0xf3b3cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD399Cu))), 0x0u, 0, 4);
    // 0f3b43  jne 0xf3b6d
    X86_AT(c, 0xf3b43u);
    if (x86_cc(c, 5)) { goto L_f3b6d; }
    X86_TICK(c, 12);
    // 0f3b45  cmp dword ptr [0xd39a0], 5
    X86_AT(c, 0xf3b45u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD39A0u))), 0x5u, 0, 4);
    // 0f3b4c  jne 0xf3b6d
    X86_AT(c, 0xf3b4cu);
    if (x86_cc(c, 5)) { goto L_f3b6d; }
    X86_TICK(c, 22);
    // 0f3b4e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf3b4eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f3b53  lea edx, [eax + eax*4]
    X86_AT(c, 0xf3b53u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f3b56  lea edx, [eax + edx*2]
    X86_AT(c, 0xf3b56u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f3b59  shl edx, 5
    X86_AT(c, 0xf3b59u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f3b5c  sub edx, eax
    X86_AT(c, 0xf3b5cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3b5e  mov dword ptr [edx + 0xcde99], 0xb
    X86_AT(c, 0xf3b5eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), 0xBu);
    // 0f3b68  jmp 0xf3bd9
    X86_AT(c, 0xf3b68u);
    goto L_f3bd9;
L_f3b6d:
    X86_TICK(c, 12);
    // 0f3b6d  cmp dword ptr [0xd3998], 0
    X86_AT(c, 0xf3b6du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD3998u))), 0x0u, 0, 4);
    // 0f3b74  jne 0xf3ba4
    X86_AT(c, 0xf3b74u);
    if (x86_cc(c, 5)) { goto L_f3ba4; }
    X86_TICK(c, 12);
    // 0f3b76  cmp dword ptr [0xd399c], 1
    X86_AT(c, 0xf3b76u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD399Cu))), 0x1u, 0, 4);
    // 0f3b7d  jne 0xf3ba4
    X86_AT(c, 0xf3b7du);
    if (x86_cc(c, 5)) { goto L_f3ba4; }
    X86_TICK(c, 12);
    // 0f3b7f  cmp dword ptr [0xd39a0], 4
    X86_AT(c, 0xf3b7fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD39A0u))), 0x4u, 0, 4);
    // 0f3b86  jne 0xf3ba4
    X86_AT(c, 0xf3b86u);
    if (x86_cc(c, 5)) { goto L_f3ba4; }
    X86_TICK(c, 22);
    // 0f3b88  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf3b88u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f3b8d  lea edx, [eax + eax*4]
    X86_AT(c, 0xf3b8du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f3b90  lea edx, [eax + edx*2]
    X86_AT(c, 0xf3b90u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f3b93  shl edx, 5
    X86_AT(c, 0xf3b93u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f3b96  sub edx, eax
    X86_AT(c, 0xf3b96u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3b98  mov dword ptr [edx + 0xcde99], 0xc
    X86_AT(c, 0xf3b98u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), 0xCu);
    // 0f3ba2  jmp 0xf3bd9
    X86_AT(c, 0xf3ba2u);
    goto L_f3bd9;
L_f3ba4:
    X86_TICK(c, 12);
    // 0f3ba4  cmp dword ptr [0xd3998], 9
    X86_AT(c, 0xf3ba4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD3998u))), 0x9u, 0, 4);
    // 0f3bab  jne 0xf3bdd
    X86_AT(c, 0xf3babu);
    if (x86_cc(c, 5)) { goto L_f3bdd; }
    X86_TICK(c, 12);
    // 0f3bad  cmp dword ptr [0xd399c], 9
    X86_AT(c, 0xf3badu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD399Cu))), 0x9u, 0, 4);
    // 0f3bb4  jne 0xf3bdd
    X86_AT(c, 0xf3bb4u);
    if (x86_cc(c, 5)) { goto L_f3bdd; }
    X86_TICK(c, 12);
    // 0f3bb6  cmp dword ptr [0xd39a0], 9
    X86_AT(c, 0xf3bb6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD39A0u))), 0x9u, 0, 4);
    // 0f3bbd  jne 0xf3bdd
    X86_AT(c, 0xf3bbdu);
    if (x86_cc(c, 5)) { goto L_f3bdd; }
    X86_TICK(c, 15);
    // 0f3bbf  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf3bbfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f3bc4  lea edx, [eax + eax*4]
    X86_AT(c, 0xf3bc4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f3bc7  lea edx, [eax + edx*2]
    X86_AT(c, 0xf3bc7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f3bca  shl edx, 5
    X86_AT(c, 0xf3bcau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f3bcd  sub edx, eax
    X86_AT(c, 0xf3bcdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3bcf  mov dword ptr [edx + 0xcde99], 0xd
    X86_AT(c, 0xf3bcfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), 0xDu);
L_f3bd9:
    X86_TICK(c, 9);
    // 0f3bd9  sub eax, eax
    X86_AT(c, 0xf3bd9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f3bdb  jmp 0xf3c06
    X86_AT(c, 0xf3bdbu);
    goto L_f3c06;
L_f3bdd:
    X86_TICK(c, 9);
    // 0f3bdd  push 7
    X86_AT(c, 0xf3bddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3bdf  call 0xe693c
    X86_AT(c, 0xf3bdfu);
    push32(c, 0xf3be4u); f_000e693c(c); X86_RET(c, 0xf3be4u);
    X86_TICK(c, 9);
    // 0f3be4  push 7
    X86_AT(c, 0xf3be4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3be6  call 0xe6c68
    X86_AT(c, 0xf3be6u);
    push32(c, 0xf3bebu); f_000e6c68(c); X86_RET(c, 0xf3bebu);
    X86_TICK(c, 11);
    // 0f3beb  push 0x6efc
    X86_AT(c, 0xf3bebu);
    { uint32_t v = 0x6EFCu; push32(c, v); }
    // 0f3bf0  push 7
    X86_AT(c, 0xf3bf0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3bf2  call 0xe5654
    X86_AT(c, 0xf3bf2u);
    push32(c, 0xf3bf7u); f_000e5654(c); X86_RET(c, 0xf3bf7u);
    X86_TICK(c, 9);
    // 0f3bf7  push 7
    X86_AT(c, 0xf3bf7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f3bf9  call 0xe6c68
    X86_AT(c, 0xf3bf9u);
    push32(c, 0xf3bfeu); f_000e6c68(c); X86_RET(c, 0xf3bfeu);
    X86_TICK(c, 4);
    // 0f3bfe  mov eax, 0xffffffff
    X86_AT(c, 0xf3bfeu);
    c.r[0] = 0xFFFFFFFFu;
    // 0f3c03  add esp, 0x14
    X86_AT(c, 0xf3c03u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_f3c06:
    X86_TICK(c, 18);
    // 0f3c06  pop edi
    X86_AT(c, 0xf3c06u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f3c07  pop esi
    X86_AT(c, 0xf3c07u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f3c08  ret 
    X86_AT(c, 0xf3c08u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf36d4u, "ran off the end of a function");
}
}

#include "p_game_funcs.h"
namespace p_game {
void f_000f0928(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0f0928  push esi
    X86_AT(c, 0xf0928u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f0929  push edi
    X86_AT(c, 0xf0929u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f092a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf092au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f092f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf092fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0932  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0932u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0935  shl edx, 5
    X86_AT(c, 0xf0935u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0938  sub edx, eax
    X86_AT(c, 0xf0938u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f093a  lea esi, [edx*1 + 0xcde4c]
    X86_AT(c, 0xf093au);
    c.r[6] = (uint32_t)(c.r[2] + 0xCDE4Cu);
    // 0f0941  push 0xf
    X86_AT(c, 0xf0941u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f0943  call 0xf0a08
    X86_AT(c, 0xf0943u);
    push32(c, 0xf0948u); f_000f0a08(c); X86_RET(c, 0xf0948u);
    X86_TICK(c, 22);
    // 0f0948  mov eax, 0xd3710
    X86_AT(c, 0xf0948u);
    c.r[0] = 0xD3710u;
    // 0f094d  dec word ptr [eax]
    X86_AT(c, 0xf094du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0f0950  add esp, 4
    X86_AT(c, 0xf0950u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f0953  cmp word ptr [eax], 0
    X86_AT(c, 0xf0953u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 2);
    // 0f0957  jge 0xf095e
    X86_AT(c, 0xf0957u);
    if (x86_cc(c, 13)) { goto L_f095e; }
    X86_TICK(c, 2);
    // 0f0959  mov word ptr [eax], 0x10
    X86_AT(c, 0xf0959u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), 0x10u);
L_f095e:
    X86_TICK(c, 12);
    // 0f095e  cmp word ptr [0xd3710], 0
    X86_AT(c, 0xf095eu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xD3710u))), 0x0u, 0, 2);
    // 0f0966  jne 0xf098c
    X86_AT(c, 0xf0966u);
    if (x86_cc(c, 5)) { goto L_f098c; }
    X86_TICK(c, 25);
    // 0f0968  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0968u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f096d  lea edx, [eax + eax*4]
    X86_AT(c, 0xf096du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0970  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0970u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0973  shl edx, 5
    X86_AT(c, 0xf0973u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0976  sub edx, eax
    X86_AT(c, 0xf0976u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0978  cmp dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf0978u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x0u, 0, 4);
    // 0f097f  je 0xf098c
    X86_AT(c, 0xf097fu);
    if (x86_cc(c, 4)) { goto L_f098c; }
    X86_TICK(c, 15);
    // 0f0981  mov eax, dword ptr [esi + 0x35]
    X86_AT(c, 0xf0981u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x35u)));
    // 0f0984  cmp eax, dword ptr [esi + 0x39]
    X86_AT(c, 0xf0984u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x39u))), 0, 4);
    // 0f0987  jge 0xf098c
    X86_AT(c, 0xf0987u);
    if (x86_cc(c, 13)) { goto L_f098c; }
    X86_TICK(c, 6);
    // 0f0989  inc dword ptr [esi + 0x35]
    X86_AT(c, 0xf0989u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x35u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_f098c:
    X86_TICK(c, 11);
    // 0f098c  mov eax, dword ptr [esi + 0x14f]
    X86_AT(c, 0xf098cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14Fu)));
    // 0f0992  and eax, eax
    X86_AT(c, 0xf0992u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f0994  jle 0xf099c
    X86_AT(c, 0xf0994u);
    if (x86_cc(c, 14)) { goto L_f099c; }
    X86_TICK(c, 6);
    // 0f0996  dec dword ptr [esi + 0x14f]
    X86_AT(c, 0xf0996u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x14Fu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_f099c:
    X86_TICK(c, 12);
    // 0f099c  cmp dword ptr [esi + 0x14f], 0
    X86_AT(c, 0xf099cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14Fu))), 0x0u, 0, 4);
    // 0f09a3  jle 0xf09e0
    X86_AT(c, 0xf09a3u);
    if (x86_cc(c, 14)) { goto L_f09e0; }
    X86_TICK(c, 9);
    // 0f09a5  push 0xe
    X86_AT(c, 0xf09a5u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f09a7  call 0xe5748
    X86_AT(c, 0xf09a7u);
    push32(c, 0xf09acu); f_000e5748(c); X86_RET(c, 0xf09acu);
    X86_TICK(c, 4);
    // 0f09ac  sub edi, edi
    X86_AT(c, 0xf09acu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0f09ae  add esp, 4
    X86_AT(c, 0xf09aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f09b1:
    X86_TICK(c, 7);
    // 0f09b1  cmp edi, 8
    X86_AT(c, 0xf09b1u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0f09b4  jge 0xf09cf
    X86_AT(c, 0xf09b4u);
    if (x86_cc(c, 13)) { goto L_f09cf; }
    X86_TICK(c, 11);
    // 0f09b6  push 0x4f54
    X86_AT(c, 0xf09b6u);
    { uint32_t v = 0x4F54u; push32(c, v); }
    // 0f09bb  push 7
    X86_AT(c, 0xf09bbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f09bd  call 0xe6cb0
    X86_AT(c, 0xf09bdu);
    push32(c, 0xf09c2u); f_000e6cb0(c); X86_RET(c, 0xf09c2u);
    X86_TICK(c, 9);
    // 0f09c2  push 3
    X86_AT(c, 0xf09c2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f09c4  call 0xe9740
    X86_AT(c, 0xf09c4u);
    push32(c, 0xf09c9u); f_000e9740(c); X86_RET(c, 0xf09c9u);
    X86_TICK(c, 11);
    // 0f09c9  inc edi
    X86_AT(c, 0xf09c9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f09ca  add esp, 0xc
    X86_AT(c, 0xf09cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f09cd  jmp 0xf09b1
    X86_AT(c, 0xf09cdu);
    X86_POLL(c, 0xf09b1u); goto L_f09b1;
L_f09cf:
    X86_TICK(c, 9);
    // 0f09cf  push 7
    X86_AT(c, 0xf09cfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f09d1  call 0xe693c
    X86_AT(c, 0xf09d1u);
    push32(c, 0xf09d6u); f_000e693c(c); X86_RET(c, 0xf09d6u);
    X86_TICK(c, 9);
    // 0f09d6  push 7
    X86_AT(c, 0xf09d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f09d8  call 0xe6c68
    X86_AT(c, 0xf09d8u);
    push32(c, 0xf09ddu); f_000e6c68(c); X86_RET(c, 0xf09ddu);
    X86_TICK(c, 2);
    // 0f09dd  add esp, 8
    X86_AT(c, 0xf09ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_f09e0:
    X86_TICK(c, 11);
    // 0f09e0  mov eax, dword ptr [esi + 0x147]
    X86_AT(c, 0xf09e0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x147u)));
    // 0f09e6  and eax, eax
    X86_AT(c, 0xf09e6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f09e8  jle 0xf09f0
    X86_AT(c, 0xf09e8u);
    if (x86_cc(c, 14)) { goto L_f09f0; }
    X86_TICK(c, 6);
    // 0f09ea  dec dword ptr [esi + 0x147]
    X86_AT(c, 0xf09eau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x147u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_f09f0:
    X86_TICK(c, 11);
    // 0f09f0  mov eax, dword ptr [esi + 0x14b]
    X86_AT(c, 0xf09f0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14Bu)));
    // 0f09f6  and eax, eax
    X86_AT(c, 0xf09f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f09f8  jle 0xf0a00
    X86_AT(c, 0xf09f8u);
    if (x86_cc(c, 14)) { goto L_f0a00; }
    X86_TICK(c, 6);
    // 0f09fa  dec dword ptr [esi + 0x14b]
    X86_AT(c, 0xf09fau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x14Bu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_f0a00:
    X86_TICK(c, 7);
    // 0f0a00  call 0xe9010
    X86_AT(c, 0xf0a00u);
    push32(c, 0xf0a05u); f_000e9010(c); X86_RET(c, 0xf0a05u);
    X86_TICK(c, 18);
    // 0f0a05  pop edi
    X86_AT(c, 0xf0a05u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f0a06  pop esi
    X86_AT(c, 0xf0a06u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f0a07  ret 
    X86_AT(c, 0xf0a07u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf0928u, "ran off the end of a function");
}
void f_000f0a08(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0f0a08  push ebp
    X86_AT(c, 0xf0a08u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f0a09  mov ebp, esp
    X86_AT(c, 0xf0a09u);
    c.r[5] = c.r[4];
    // 0f0a0b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0a0bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0a10  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0a10u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0a13  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0a13u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0a16  shl edx, 5
    X86_AT(c, 0xf0a16u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0a19  sub edx, eax
    X86_AT(c, 0xf0a19u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0a1b  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xf0a1bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f0a1e  sub dword ptr [edx + 0xcde8d], eax
    X86_AT(c, 0xf0a1eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0f0a24  cmp dword ptr [edx + 0xcde8d], 0
    X86_AT(c, 0xf0a24u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du))), 0x0u, 0, 4);
    // 0f0a2b  jge 0xf0a37
    X86_AT(c, 0xf0a2bu);
    if (x86_cc(c, 13)) { goto L_f0a37; }
    X86_TICK(c, 2);
    // 0f0a2d  mov dword ptr [edx + 0xcde8d], 0
    X86_AT(c, 0xf0a2du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)), 0x0u);
L_f0a37:
    X86_TICK(c, 25);
    // 0f0a37  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0a37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0a3c  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0a3cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0a3f  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0a3fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0a42  shl edx, 5
    X86_AT(c, 0xf0a42u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0a45  sub edx, eax
    X86_AT(c, 0xf0a45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0a47  cmp dword ptr [edx + 0xcde8d], 0
    X86_AT(c, 0xf0a47u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du))), 0x0u, 0, 4);
    // 0f0a4e  jne 0xf0a7b
    X86_AT(c, 0xf0a4eu);
    if (x86_cc(c, 5)) { goto L_f0a7b; }
    X86_TICK(c, 9);
    // 0f0a50  push 8
    X86_AT(c, 0xf0a50u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f0a52  call 0xe1944
    X86_AT(c, 0xf0a52u);
    push32(c, 0xf0a57u); f_000e1944(c); X86_RET(c, 0xf0a57u);
    X86_TICK(c, 9);
    // 0f0a57  push 2
    X86_AT(c, 0xf0a57u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f0a59  call 0xe9740
    X86_AT(c, 0xf0a59u);
    push32(c, 0xf0a5eu); f_000e9740(c); X86_RET(c, 0xf0a5eu);
    X86_TICK(c, 9);
    // 0f0a5e  push 0xa
    X86_AT(c, 0xf0a5eu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f0a60  call 0xeff44
    X86_AT(c, 0xf0a60u);
    push32(c, 0xf0a65u); f_000eff44(c); X86_RET(c, 0xf0a65u);
    X86_TICK(c, 11);
    // 0f0a65  push 0x4f58
    X86_AT(c, 0xf0a65u);
    { uint32_t v = 0x4F58u; push32(c, v); }
    // 0f0a6a  push 7
    X86_AT(c, 0xf0a6au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0a6c  call 0xe5654
    X86_AT(c, 0xf0a6cu);
    push32(c, 0xf0a71u); f_000e5654(c); X86_RET(c, 0xf0a71u);
    X86_TICK(c, 9);
    // 0f0a71  push 7
    X86_AT(c, 0xf0a71u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0a73  call 0xe6c68
    X86_AT(c, 0xf0a73u);
    push32(c, 0xf0a78u); f_000e6c68(c); X86_RET(c, 0xf0a78u);
    X86_TICK(c, 2);
    // 0f0a78  add esp, 0x18
    X86_AT(c, 0xf0a78u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_f0a7b:
    X86_TICK(c, 16);
    // 0f0a7b  leave 
    X86_AT(c, 0xf0a7bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f0a7c  ret 
    X86_AT(c, 0xf0a7cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf0a08u, "ran off the end of a function");
}
void f_000f0a80(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0f0a80  push ebp
    X86_AT(c, 0xf0a80u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f0a81  mov ebp, esp
    X86_AT(c, 0xf0a81u);
    c.r[5] = c.r[4];
    // 0f0a83  push eax
    X86_AT(c, 0xf0a83u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0a84  push edi
    X86_AT(c, 0xf0a84u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f0a85  call 0xe137c
    X86_AT(c, 0xf0a85u);
    push32(c, 0xf0a8au); f_000e137c(c); X86_RET(c, 0xf0a8au);
    X86_TICK(c, 7);
    // 0f0a8a  call 0xf0c70
    X86_AT(c, 0xf0a8au);
    push32(c, 0xf0a8fu); f_000f0c70(c); X86_RET(c, 0xf0a8fu);
    X86_TICK(c, 9);
    // 0f0a8f  mov word ptr [0xcda74], 0xffff
    X86_AT(c, 0xf0a8fu);
    wr16((c.sbase[3] + (uint32_t)(0xCDA74u)), 0xFFFFu);
    // 0f0a98  call 0xe8470
    X86_AT(c, 0xf0a98u);
    push32(c, 0xf0a9du); f_000e8470(c); X86_RET(c, 0xf0a9du);
    X86_TICK(c, 9);
    // 0f0a9d  push 0
    X86_AT(c, 0xf0a9du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f0a9f  call 0xe58e0
    X86_AT(c, 0xf0a9fu);
    push32(c, 0xf0aa4u); f_000e58e0(c); X86_RET(c, 0xf0aa4u);
    X86_TICK(c, 9);
    // 0f0aa4  push 1
    X86_AT(c, 0xf0aa4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f0aa6  call 0xe58cc
    X86_AT(c, 0xf0aa6u);
    push32(c, 0xf0aabu); f_000e58cc(c); X86_RET(c, 0xf0aabu);
    X86_TICK(c, 13);
    // 0f0aab  push 0x40
    X86_AT(c, 0xf0aabu);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0f0aad  push 0x40
    X86_AT(c, 0xf0aadu);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0f0aaf  push 0x4f78
    X86_AT(c, 0xf0aafu);
    { uint32_t v = 0x4F78u; push32(c, v); }
    // 0f0ab4  call 0xe6550
    X86_AT(c, 0xf0ab4u);
    push32(c, 0xf0ab9u); f_000e6550(c); X86_RET(c, 0xf0ab9u);
    X86_TICK(c, 9);
    // 0f0ab9  push 0
    X86_AT(c, 0xf0ab9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f0abb  call 0xe58cc
    X86_AT(c, 0xf0abbu);
    push32(c, 0xf0ac0u); f_000e58cc(c); X86_RET(c, 0xf0ac0u);
    X86_TICK(c, 9);
    // 0f0ac0  push 2
    X86_AT(c, 0xf0ac0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f0ac2  call 0xe58e0
    X86_AT(c, 0xf0ac2u);
    push32(c, 0xf0ac7u); f_000e58e0(c); X86_RET(c, 0xf0ac7u);
    X86_TICK(c, 31);
    // 0f0ac7  mov edi, dword ptr [0xcde44]
    X86_AT(c, 0xf0ac7u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xCDE44u)));
    // 0f0acd  push 0
    X86_AT(c, 0xf0acdu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f0acf  push 0xe
    X86_AT(c, 0xf0acfu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f0ad1  push 0xb
    X86_AT(c, 0xf0ad1u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f0ad3  push 4
    X86_AT(c, 0xf0ad3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f0ad5  push 0x1f
    X86_AT(c, 0xf0ad5u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0f0ad7  push 0x20
    X86_AT(c, 0xf0ad7u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f0ad9  push 0x120
    X86_AT(c, 0xf0ad9u);
    { uint32_t v = 0x120u; push32(c, v); }
    // 0f0ade  push 0x14f
    X86_AT(c, 0xf0adeu);
    { uint32_t v = 0x14Fu; push32(c, v); }
    // 0f0ae3  push 0x2a
    X86_AT(c, 0xf0ae3u);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0f0ae5  push 6
    X86_AT(c, 0xf0ae5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0ae7  call 0xe6858
    X86_AT(c, 0xf0ae7u);
    push32(c, 0xf0aecu); f_000e6858(c); X86_RET(c, 0xf0aecu);
    X86_TICK(c, 11);
    // 0f0aec  add esp, 0x44
    X86_AT(c, 0xf0aecu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0f0aef  push 6
    X86_AT(c, 0xf0aefu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0af1  call 0xe693c
    X86_AT(c, 0xf0af1u);
    push32(c, 0xf0af6u); f_000e693c(c); X86_RET(c, 0xf0af6u);
    X86_TICK(c, 9);
    // 0f0af6  push 6
    X86_AT(c, 0xf0af6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0af8  call 0xe699c
    X86_AT(c, 0xf0af8u);
    push32(c, 0xf0afdu); f_000e699c(c); X86_RET(c, 0xf0afdu);
    X86_TICK(c, 13);
    // 0f0afd  push 2
    X86_AT(c, 0xf0afdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f0aff  push 4
    X86_AT(c, 0xf0affu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f0b01  push 6
    X86_AT(c, 0xf0b01u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0b03  call 0xe7260
    X86_AT(c, 0xf0b03u);
    push32(c, 0xf0b08u); f_000e7260(c); X86_RET(c, 0xf0b08u);
    X86_TICK(c, 11);
    // 0f0b08  push 0x4f8c
    X86_AT(c, 0xf0b08u);
    { uint32_t v = 0x4F8Cu; push32(c, v); }
    // 0f0b0d  push 6
    X86_AT(c, 0xf0b0du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0b0f  call 0xe5654
    X86_AT(c, 0xf0b0fu);
    push32(c, 0xf0b14u); f_000e5654(c); X86_RET(c, 0xf0b14u);
    X86_TICK(c, 7);
    // 0f0b14  call 0xe9d2c
    X86_AT(c, 0xf0b14u);
    push32(c, 0xf0b19u); f_000e9d2c(c); X86_RET(c, 0xf0b19u);
    X86_TICK(c, 7);
    // 0f0b19  call 0xeade4
    X86_AT(c, 0xf0b19u);
    push32(c, 0xf0b1eu); f_000eade4(c); X86_RET(c, 0xf0b1eu);
    X86_TICK(c, 28);
    // 0f0b1e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0b1eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0b23  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0b23u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0b26  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0b26u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0b29  shl edx, 5
    X86_AT(c, 0xf0b29u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0b2c  sub edx, eax
    X86_AT(c, 0xf0b2cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0b2e  mov dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf0b2eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)), 0x0u);
    // 0f0b38  add esp, 0x1c
    X86_AT(c, 0xf0b38u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f0b3b  mov dword ptr [0xcda6c], 0
    X86_AT(c, 0xf0b3bu);
    wr32((c.sbase[3] + (uint32_t)(0xCDA6Cu)), 0x0u);
    // 0f0b45  push 0
    X86_AT(c, 0xf0b45u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f0b47  call 0xe8b90
    X86_AT(c, 0xf0b47u);
    push32(c, 0xf0b4cu); f_000e8b90(c); X86_RET(c, 0xf0b4cu);
    X86_TICK(c, 9);
    // 0f0b4c  mov dword ptr [0xcde44], edi
    X86_AT(c, 0xf0b4cu);
    wr32((c.sbase[3] + (uint32_t)(0xCDE44u)), c.r[7]);
    // 0f0b52  call 0xe4324
    X86_AT(c, 0xf0b52u);
    push32(c, 0xf0b57u); f_000e4324(c); X86_RET(c, 0xf0b57u);
    X86_TICK(c, 9);
    // 0f0b57  push 7
    X86_AT(c, 0xf0b57u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0b59  call 0xefeb0
    X86_AT(c, 0xf0b59u);
    push32(c, 0xf0b5eu); f_000efeb0(c); X86_RET(c, 0xf0b5eu);
    X86_TICK(c, 11);
    // 0f0b5e  push 0
    X86_AT(c, 0xf0b5eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f0b60  push 6
    X86_AT(c, 0xf0b60u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0b62  call 0xe6b70
    X86_AT(c, 0xf0b62u);
    push32(c, 0xf0b67u); f_000e6b70(c); X86_RET(c, 0xf0b67u);
    X86_TICK(c, 7);
    // 0f0b67  call 0xe8470
    X86_AT(c, 0xf0b67u);
    push32(c, 0xf0b6cu); f_000e8470(c); X86_RET(c, 0xf0b6cu);
    X86_TICK(c, 9);
    // 0f0b6c  push 7
    X86_AT(c, 0xf0b6cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0b6e  call 0xe6af0
    X86_AT(c, 0xf0b6eu);
    push32(c, 0xf0b73u); f_000e6af0(c); X86_RET(c, 0xf0b73u);
    X86_TICK(c, 9);
    // 0f0b73  push 0
    X86_AT(c, 0xf0b73u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f0b75  call 0xe3188
    X86_AT(c, 0xf0b75u);
    push32(c, 0xf0b7au); f_000e3188(c); X86_RET(c, 0xf0b7au);
    X86_TICK(c, 27);
    // 0f0b7a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0b7au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0b7f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0b7fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0b82  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0b82u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0b85  shl edx, 5
    X86_AT(c, 0xf0b85u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0b88  sub edx, eax
    X86_AT(c, 0xf0b88u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0b8a  add esp, 0x18
    X86_AT(c, 0xf0b8au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f0b8d  cmp dword ptr [edx + 0xcde81], 0x190
    X86_AT(c, 0xf0b8du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u))), 0x190u, 0, 4);
    // 0f0b97  jge 0xf0ba3
    X86_AT(c, 0xf0b97u);
    if (x86_cc(c, 13)) { goto L_f0ba3; }
    X86_TICK(c, 2);
    // 0f0b99  mov dword ptr [edx + 0xcde81], 0x190
    X86_AT(c, 0xf0b99u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)), 0x190u);
L_f0ba3:
    X86_TICK(c, 25);
    // 0f0ba3  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0ba3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0ba8  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0ba8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0bab  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0babu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0bae  shl edx, 5
    X86_AT(c, 0xf0baeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0bb1  sub edx, eax
    X86_AT(c, 0xf0bb1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0bb3  cmp dword ptr [edx + 0xcde8d], 0x190
    X86_AT(c, 0xf0bb3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du))), 0x190u, 0, 4);
    // 0f0bbd  jge 0xf0bc9
    X86_AT(c, 0xf0bbdu);
    if (x86_cc(c, 13)) { goto L_f0bc9; }
    X86_TICK(c, 2);
    // 0f0bbf  mov dword ptr [edx + 0xcde8d], 0x9c40
    X86_AT(c, 0xf0bbfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)), 0x9C40u);
L_f0bc9:
    X86_TICK(c, 39);
    // 0f0bc9  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0bc9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0bce  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0bceu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0bd1  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0bd1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0bd4  shl edx, 5
    X86_AT(c, 0xf0bd4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0bd7  sub edx, eax
    X86_AT(c, 0xf0bd7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0bd9  mov eax, dword ptr [edx + 0xcde91]
    X86_AT(c, 0xf0bd9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)));
    // 0f0bdf  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xf0bdfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0f0be2  cdq 
    X86_AT(c, 0xf0be2u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f0be3  sub eax, edx
    X86_AT(c, 0xf0be3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f0be5  sar eax, 1
    X86_AT(c, 0xf0be5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0f0be7  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xf0be7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0f0bea  mov dword ptr [edx + 0xcde91], eax
    X86_AT(c, 0xf0beau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)), c.r[0]);
    // 0f0bf0  cmp eax, 0x64
    X86_AT(c, 0xf0bf0u);
    (void)x86_sub(c, c.r[0], 0x64u, 0, 4);
    // 0f0bf3  jge 0xf0bff
    X86_AT(c, 0xf0bf3u);
    if (x86_cc(c, 13)) { goto L_f0bff; }
    X86_TICK(c, 2);
    // 0f0bf5  mov dword ptr [edx + 0xcde91], 0x64
    X86_AT(c, 0xf0bf5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)), 0x64u);
L_f0bff:
    X86_TICK(c, 7);
    // 0f0bff  call 0xe8e90
    X86_AT(c, 0xf0bffu);
    push32(c, 0xf0c04u); f_000e8e90(c); X86_RET(c, 0xf0c04u);
    X86_TICK(c, 7);
    // 0f0c04  call 0xe1e18
    X86_AT(c, 0xf0c04u);
    push32(c, 0xf0c09u); f_000e1e18(c); X86_RET(c, 0xf0c09u);
    X86_TICK(c, 9);
    // 0f0c09  push 0x79f0c
    X86_AT(c, 0xf0c09u);
    { uint32_t v = 0x79F0Cu; push32(c, v); }
    // 0f0c0e  call 0xe8660
    X86_AT(c, 0xf0c0eu);
    push32(c, 0xf0c13u); f_000e8660(c); X86_RET(c, 0xf0c13u);
    X86_TICK(c, 7);
    // 0f0c13  call 0xe2c18
    X86_AT(c, 0xf0c13u);
    push32(c, 0xf0c18u); f_000e2c18(c); X86_RET(c, 0xf0c18u);
    X86_TICK(c, 30);
    // 0f0c18  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0c18u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0c1d  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0c1du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0c20  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0c20u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0c23  shl edx, 5
    X86_AT(c, 0xf0c23u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0c26  sub edx, eax
    X86_AT(c, 0xf0c26u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0c28  push dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xf0c28u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))); push32(c, v); }
    // 0f0c2e  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf0c2eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f0c34  call 0xf3c40
    X86_AT(c, 0xf0c34u);
    push32(c, 0xf0c39u); f_000f3c40(c); X86_RET(c, 0xf0c39u);
    X86_TICK(c, 9);
    // 0f0c39  push 1
    X86_AT(c, 0xf0c39u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f0c3b  call 0xe1a9c
    X86_AT(c, 0xf0c3bu);
    push32(c, 0xf0c40u); f_000e1a9c(c); X86_RET(c, 0xf0c40u);
    X86_TICK(c, 7);
    // 0f0c40  call 0xe4324
    X86_AT(c, 0xf0c40u);
    push32(c, 0xf0c45u); f_000e4324(c); X86_RET(c, 0xf0c45u);
    X86_TICK(c, 9);
    // 0f0c45  push 7
    X86_AT(c, 0xf0c45u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0c47  call 0xe693c
    X86_AT(c, 0xf0c47u);
    push32(c, 0xf0c4cu); f_000e693c(c); X86_RET(c, 0xf0c4cu);
    X86_TICK(c, 11);
    // 0f0c4c  push 0x4fc8
    X86_AT(c, 0xf0c4cu);
    { uint32_t v = 0x4FC8u; push32(c, v); }
    // 0f0c51  push 7
    X86_AT(c, 0xf0c51u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0c53  call 0xe5654
    X86_AT(c, 0xf0c53u);
    push32(c, 0xf0c58u); f_000e5654(c); X86_RET(c, 0xf0c58u);
    X86_TICK(c, 9);
    // 0f0c58  push 7
    X86_AT(c, 0xf0c58u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0c5a  call 0xe6c68
    X86_AT(c, 0xf0c5au);
    push32(c, 0xf0c5fu); f_000e6c68(c); X86_RET(c, 0xf0c5fu);
    X86_TICK(c, 24);
    // 0f0c5f  mov word ptr [0xcde48], 0xffff
    X86_AT(c, 0xf0c5fu);
    wr16((c.sbase[3] + (uint32_t)(0xCDE48u)), 0xFFFFu);
    // 0f0c68  add esp, 0x20
    X86_AT(c, 0xf0c68u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0f0c6b  pop edi
    X86_AT(c, 0xf0c6bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f0c6c  leave 
    X86_AT(c, 0xf0c6cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f0c6d  ret 
    X86_AT(c, 0xf0c6du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf0a80u, "ran off the end of a function");
}
void f_000f0c70(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0f0c70  call 0xe3548
    X86_AT(c, 0xf0c70u);
    push32(c, 0xf0c75u); f_000e3548(c); X86_RET(c, 0xf0c75u);
    X86_TICK(c, 7);
    // 0f0c75  call 0xe35c8
    X86_AT(c, 0xf0c75u);
    push32(c, 0xf0c7au); f_000e35c8(c); X86_RET(c, 0xf0c7au);
    X86_TICK(c, 7);
    // 0f0c7a  call 0xe3548
    X86_AT(c, 0xf0c7au);
    push32(c, 0xf0c7fu); f_000e3548(c); X86_RET(c, 0xf0c7fu);
    X86_TICK(c, 7);
    // 0f0c7f  call 0xe35c8
    X86_AT(c, 0xf0c7fu);
    push32(c, 0xf0c84u); f_000e35c8(c); X86_RET(c, 0xf0c84u);
    X86_TICK(c, 10);
    // 0f0c84  ret 
    X86_AT(c, 0xf0c84u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf0c70u, "ran off the end of a function");
}
void f_000f0c88(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0f0c88  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xf0c88u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0f0c8c  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0xf0c8cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
L_f0c90:
    X86_TICK(c, 12);
    // 0f0c90  cmp byte ptr [edx], 0x20
    X86_AT(c, 0xf0c90u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0x20u, 0, 1);
    // 0f0c93  jne 0xf0c98
    X86_AT(c, 0xf0c93u);
    if (x86_cc(c, 5)) { goto L_f0c98; }
    X86_TICK(c, 9);
    // 0f0c95  inc edx
    X86_AT(c, 0xf0c95u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0f0c96  jmp 0xf0c90
    X86_AT(c, 0xf0c96u);
    X86_POLL(c, 0xf0c90u); goto L_f0c90;
L_f0c98:
    X86_TICK(c, 11);
    // 0f0c98  mov al, byte ptr [edx]
    X86_AT(c, 0xf0c98u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0f0c9a  cmp al, 0x20
    X86_AT(c, 0xf0c9au);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0f0c9c  je 0xf0ca2
    X86_AT(c, 0xf0c9cu);
    if (x86_cc(c, 4)) { goto L_f0ca2; }
    X86_TICK(c, 7);
    // 0f0c9e  and al, al
    X86_AT(c, 0xf0c9eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0f0ca0  jne 0xf0cb0
    X86_AT(c, 0xf0ca0u);
    if (x86_cc(c, 5)) { goto L_f0cb0; }
L_f0ca2:
    X86_TICK(c, 11);
    // 0f0ca2  mov al, byte ptr [ecx]
    X86_AT(c, 0xf0ca2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0f0ca4  cmp al, 0x20
    X86_AT(c, 0xf0ca4u);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0f0ca6  je 0xf0cac
    X86_AT(c, 0xf0ca6u);
    if (x86_cc(c, 4)) { goto L_f0cac; }
    X86_TICK(c, 7);
    // 0f0ca8  and al, al
    X86_AT(c, 0xf0ca8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0f0caa  jne 0xf0cb6
    X86_AT(c, 0xf0caau);
    if (x86_cc(c, 5)) { goto L_f0cb6; }
L_f0cac:
    X86_TICK(c, 9);
    // 0f0cac  sub eax, eax
    X86_AT(c, 0xf0cacu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0cae  jmp 0xf0cc1
    X86_AT(c, 0xf0caeu);
    goto L_f0cc1;
L_f0cb0:
    X86_TICK(c, 15);
    // 0f0cb0  mov al, byte ptr [edx]
    X86_AT(c, 0xf0cb0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0f0cb2  cmp al, byte ptr [ecx]
    X86_AT(c, 0xf0cb2u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[1]))), 0, 1);
    // 0f0cb4  je 0xf0cbd
    X86_AT(c, 0xf0cb4u);
    if (x86_cc(c, 4)) { goto L_f0cbd; }
L_f0cb6:
    X86_TICK(c, 9);
    // 0f0cb6  mov eax, 0xffffffff
    X86_AT(c, 0xf0cb6u);
    c.r[0] = 0xFFFFFFFFu;
    // 0f0cbb  jmp 0xf0cc1
    X86_AT(c, 0xf0cbbu);
    goto L_f0cc1;
L_f0cbd:
    X86_TICK(c, 11);
    // 0f0cbd  inc edx
    X86_AT(c, 0xf0cbdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0f0cbe  inc ecx
    X86_AT(c, 0xf0cbeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0f0cbf  jmp 0xf0c98
    X86_AT(c, 0xf0cbfu);
    X86_POLL(c, 0xf0c98u); goto L_f0c98;
L_f0cc1:
    X86_TICK(c, 10);
    // 0f0cc1  ret 
    X86_AT(c, 0xf0cc1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf0c88u, "ran off the end of a function");
}
void f_000f0cc4(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0f0cc4  push esi
    X86_AT(c, 0xf0cc4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f0cc5  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0cc5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0cca  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0ccau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0ccd  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0ccdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0cd0  shl edx, 5
    X86_AT(c, 0xf0cd0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0cd3  sub edx, eax
    X86_AT(c, 0xf0cd3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0cd5  movzx eax, byte ptr [edx + 0xcde7a]
    X86_AT(c, 0xf0cd5u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au)));
    // 0f0cdc  xchg edx, eax
    X86_AT(c, 0xf0cdcu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0f0cdd  sub edx, 0x42
    X86_AT(c, 0xf0cddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x42u, 0, 4); }
    // 0f0ce0  cmp edx, 6
    X86_AT(c, 0xf0ce0u);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0f0ce3  ja 0xf0d5b
    X86_AT(c, 0xf0ce3u);
    if (x86_cc(c, 7)) { goto L_f0d5b; }
    X86_TICK(c, 7);
    // 0f0ce5  jmp dword ptr cs:[edx*4 + 0xf0ced]
    X86_AT(c, 0xf0ce5u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF0CEDu)));
      switch (t) {
      case 0xf0d09u: goto L_f0d09;
      case 0xf0d25u: goto L_f0d25;
      case 0xf0d41u: goto L_f0d41;
      case 0xf0d5bu: goto L_f0d5b;
      default: x86_jump(c, t); return; } }
L_f0d09:
    X86_TICK(c, 22);
    // 0f0d09  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0d09u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0d0e  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0d0eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0d11  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0d11u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0d14  shl edx, 5
    X86_AT(c, 0xf0d14u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0d17  sub edx, eax
    X86_AT(c, 0xf0d17u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0d19  mov dword ptr [edx + 0xcde81], 0x63
    X86_AT(c, 0xf0d19u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)), 0x63u);
    // 0f0d23  jmp 0xf0d5b
    X86_AT(c, 0xf0d23u);
    goto L_f0d5b;
L_f0d25:
    X86_TICK(c, 22);
    // 0f0d25  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0d25u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0d2a  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0d2au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0d2d  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0d2du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0d30  shl edx, 5
    X86_AT(c, 0xf0d30u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0d33  sub edx, eax
    X86_AT(c, 0xf0d33u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0d35  mov dword ptr [edx + 0xcde81], 0x4b
    X86_AT(c, 0xf0d35u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)), 0x4Bu);
    // 0f0d3f  jmp 0xf0d5b
    X86_AT(c, 0xf0d3fu);
    goto L_f0d5b;
L_f0d41:
    X86_TICK(c, 15);
    // 0f0d41  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0d41u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0d46  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0d46u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0d49  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0d49u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0d4c  shl edx, 5
    X86_AT(c, 0xf0d4cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0d4f  sub edx, eax
    X86_AT(c, 0xf0d4fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0d51  mov dword ptr [edx + 0xcde81], 0x19
    X86_AT(c, 0xf0d51u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)), 0x19u);
L_f0d5b:
    X86_TICK(c, 11);
    // 0f0d5b  mov eax, dword ptr [0xcde44]
    X86_AT(c, 0xf0d5bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCDE44u)));
    // 0f0d60  and eax, eax
    X86_AT(c, 0xf0d60u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f0d62  je 0xf0de9
    X86_AT(c, 0xf0d62u);
    if (x86_cc(c, 4)) { goto L_f0de9; }
    X86_TICK(c, 34);
    // 0f0d68  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xf0d68u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0d6e  lea ecx, [edx + edx*4]
    X86_AT(c, 0xf0d6eu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0f0d71  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xf0d71u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0f0d74  shl ecx, 5
    X86_AT(c, 0xf0d74u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0f0d77  sub ecx, edx
    X86_AT(c, 0xf0d77u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f0d79  mov dword ptr [ecx + 0xcde8d], 0xf41dc
    X86_AT(c, 0xf0d79u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE8Du)), 0xF41DCu);
    // 0f0d83  mov edx, 0x63
    X86_AT(c, 0xf0d83u);
    c.r[2] = 0x63u;
    // 0f0d88  mov dword ptr [ecx + 0xcde5e], edx
    X86_AT(c, 0xf0d88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE5Eu)), c.r[2]);
    // 0f0d8e  mov dword ptr [ecx + 0xcde95], edx
    X86_AT(c, 0xf0d8eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE95u)), c.r[2]);
    // 0f0d94  mov esi, 0x270f
    X86_AT(c, 0xf0d94u);
    c.r[6] = 0x270Fu;
    // 0f0d99  mov dword ptr [ecx + 0xcde91], esi
    X86_AT(c, 0xf0d99u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE91u)), c.r[6]);
    // 0f0d9f  mov dword ptr [ecx + 0xcde9d], edx
    X86_AT(c, 0xf0d9fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE9Du)), c.r[2]);
    // 0f0da5  cmp eax, 4
    X86_AT(c, 0xf0da5u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0f0da8  je 0xf0de9
    X86_AT(c, 0xf0da8u);
    if (x86_cc(c, 4)) { goto L_f0de9; }
    X86_TICK(c, 25);
    // 0f0daa  mov dword ptr [ecx + 0xcdf87], esi
    X86_AT(c, 0xf0daau);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDF87u)), c.r[6]);
    // 0f0db0  mov dword ptr [ecx + 0xcde81], esi
    X86_AT(c, 0xf0db0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE81u)), c.r[6]);
    // 0f0db6  mov dword ptr [ecx + 0xcde89], 0x9c4
    X86_AT(c, 0xf0db6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE89u)), 0x9C4u);
    // 0f0dc0  mov dword ptr [ecx + 0xcde62], edx
    X86_AT(c, 0xf0dc0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE62u)), c.r[2]);
    // 0f0dc6  mov dword ptr [ecx + 0xcde66], edx
    X86_AT(c, 0xf0dc6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE66u)), c.r[2]);
    // 0f0dcc  mov dword ptr [ecx + 0xcde6a], edx
    X86_AT(c, 0xf0dccu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE6Au)), c.r[2]);
    // 0f0dd2  mov dword ptr [ecx + 0xcde6e], edx
    X86_AT(c, 0xf0dd2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE6Eu)), c.r[2]);
    // 0f0dd8  mov dword ptr [ecx + 0xcde72], edx
    X86_AT(c, 0xf0dd8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE72u)), c.r[2]);
    // 0f0dde  mov dword ptr [ecx + 0xcde76], edx
    X86_AT(c, 0xf0ddeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE76u)), c.r[2]);
    // 0f0de4  call 0xe9010
    X86_AT(c, 0xf0de4u);
    push32(c, 0xf0de9u); f_000e9010(c); X86_RET(c, 0xf0de9u);
L_f0de9:
    X86_TICK(c, 14);
    // 0f0de9  pop esi
    X86_AT(c, 0xf0de9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f0dea  ret 
    X86_AT(c, 0xf0deau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf0cc4u, "ran off the end of a function");
}
void f_000f0dec(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0f0dec  push ebp
    X86_AT(c, 0xf0decu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f0ded  mov ebp, esp
    X86_AT(c, 0xf0dedu);
    c.r[5] = c.r[4];
    // 0f0def  sub esp, 0xc
    X86_AT(c, 0xf0defu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0f0df2  push ebx
    X86_AT(c, 0xf0df2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f0df3  push 7
    X86_AT(c, 0xf0df3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0df5  call 0xe693c
    X86_AT(c, 0xf0df5u);
    push32(c, 0xf0dfau); f_000e693c(c); X86_RET(c, 0xf0dfau);
    X86_TICK(c, 11);
    // 0f0dfa  push 0x5010
    X86_AT(c, 0xf0dfau);
    { uint32_t v = 0x5010u; push32(c, v); }
    // 0f0dff  push 7
    X86_AT(c, 0xf0dffu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0e01  call 0xe5654
    X86_AT(c, 0xf0e01u);
    push32(c, 0xf0e06u); f_000e5654(c); X86_RET(c, 0xf0e06u);
    X86_TICK(c, 9);
    // 0f0e06  push 7
    X86_AT(c, 0xf0e06u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0e08  call 0xe6c68
    X86_AT(c, 0xf0e08u);
    push32(c, 0xf0e0du); f_000e6c68(c); X86_RET(c, 0xf0e0du);
    X86_TICK(c, 11);
    // 0f0e0d  push 0x5024
    X86_AT(c, 0xf0e0du);
    { uint32_t v = 0x5024u; push32(c, v); }
    // 0f0e12  push 7
    X86_AT(c, 0xf0e12u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0e14  call 0xe5654
    X86_AT(c, 0xf0e14u);
    push32(c, 0xf0e19u); f_000e5654(c); X86_RET(c, 0xf0e19u);
    X86_TICK(c, 15);
    // 0f0e19  push 0xa
    X86_AT(c, 0xf0e19u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f0e1b  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf0e1bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f0e1e  push eax
    X86_AT(c, 0xf0e1eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0e1f  push 7
    X86_AT(c, 0xf0e1fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0e21  call 0xe4f5c
    X86_AT(c, 0xf0e21u);
    push32(c, 0xf0e26u); f_000e4f5c(c); X86_RET(c, 0xf0e26u);
    X86_TICK(c, 9);
    // 0f0e26  add esp, 0x24
    X86_AT(c, 0xf0e26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0f0e29  dec eax
    X86_AT(c, 0xf0e29u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f0e2a  jge 0xf0e36
    X86_AT(c, 0xf0e2au);
    if (x86_cc(c, 13)) { goto L_f0e36; }
    X86_TICK(c, 9);
    // 0f0e2c  push 0x503c
    X86_AT(c, 0xf0e2cu);
    { uint32_t v = 0x503Cu; push32(c, v); }
    // 0f0e31  jmp 0xf127e
    X86_AT(c, 0xf0e31u);
    goto L_f127e;
L_f0e36:
    X86_TICK(c, 9);
    // 0f0e36  push 7
    X86_AT(c, 0xf0e36u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0e38  call 0xe6c68
    X86_AT(c, 0xf0e38u);
    push32(c, 0xf0e3du); f_000e6c68(c); X86_RET(c, 0xf0e3du);
    X86_TICK(c, 13);
    // 0f0e3d  push 0x5054
    X86_AT(c, 0xf0e3du);
    { uint32_t v = 0x5054u; push32(c, v); }
    // 0f0e42  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf0e42u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f0e45  push eax
    X86_AT(c, 0xf0e45u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0e46  call 0xf0c88
    X86_AT(c, 0xf0e46u);
    push32(c, 0xf0e4bu); f_000f0c88(c); X86_RET(c, 0xf0e4bu);
    X86_TICK(c, 9);
    // 0f0e4b  add esp, 0xc
    X86_AT(c, 0xf0e4bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f0e4e  and eax, eax
    X86_AT(c, 0xf0e4eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f0e50  jne 0xf0e74
    X86_AT(c, 0xf0e50u);
    if (x86_cc(c, 5)) { goto L_f0e74; }
    X86_TICK(c, 9);
    // 0f0e52  push 3
    X86_AT(c, 0xf0e52u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f0e54  call 0xe1944
    X86_AT(c, 0xf0e54u);
    push32(c, 0xf0e59u); f_000e1944(c); X86_RET(c, 0xf0e59u);
    X86_TICK(c, 11);
    // 0f0e59  push 0x505c
    X86_AT(c, 0xf0e59u);
    { uint32_t v = 0x505Cu; push32(c, v); }
    // 0f0e5e  push 7
    X86_AT(c, 0xf0e5eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0e60  call 0xe5654
    X86_AT(c, 0xf0e60u);
    push32(c, 0xf0e65u); f_000e5654(c); X86_RET(c, 0xf0e65u);
    X86_TICK(c, 9);
    // 0f0e65  push 7
    X86_AT(c, 0xf0e65u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0e67  call 0xe6c68
    X86_AT(c, 0xf0e67u);
    push32(c, 0xf0e6cu); f_000e6c68(c); X86_RET(c, 0xf0e6cu);
    X86_TICK(c, 9);
    // 0f0e6c  add esp, 0x10
    X86_AT(c, 0xf0e6cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f0e6f  jmp 0xf128f
    X86_AT(c, 0xf0e6fu);
    goto L_f128f;
L_f0e74:
    X86_TICK(c, 13);
    // 0f0e74  push 0x50a8
    X86_AT(c, 0xf0e74u);
    { uint32_t v = 0x50A8u; push32(c, v); }
    // 0f0e79  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf0e79u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f0e7c  push eax
    X86_AT(c, 0xf0e7cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0e7d  call 0xf0c88
    X86_AT(c, 0xf0e7du);
    push32(c, 0xf0e82u); f_000f0c88(c); X86_RET(c, 0xf0e82u);
    X86_TICK(c, 9);
    // 0f0e82  add esp, 8
    X86_AT(c, 0xf0e82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f0e85  and eax, eax
    X86_AT(c, 0xf0e85u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f0e87  jne 0xf0eb1
    X86_AT(c, 0xf0e87u);
    if (x86_cc(c, 5)) { goto L_f0eb1; }
    X86_TICK(c, 11);
    // 0f0e89  mov eax, dword ptr [0xcde44]
    X86_AT(c, 0xf0e89u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCDE44u)));
    // 0f0e8e  cmp eax, 2
    X86_AT(c, 0xf0e8eu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0f0e91  je 0xf0e98
    X86_AT(c, 0xf0e91u);
    if (x86_cc(c, 4)) { goto L_f0e98; }
    X86_TICK(c, 7);
    // 0f0e93  cmp eax, 3
    X86_AT(c, 0xf0e93u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0f0e96  jne 0xf0eb1
    X86_AT(c, 0xf0e96u);
    if (x86_cc(c, 5)) { goto L_f0eb1; }
L_f0e98:
    X86_TICK(c, 7);
    // 0f0e98  call 0xf0cc4
    X86_AT(c, 0xf0e98u);
    push32(c, 0xf0e9du); f_000f0cc4(c); X86_RET(c, 0xf0e9du);
    X86_TICK(c, 7);
    // 0f0e9d  call 0xe9010
    X86_AT(c, 0xf0e9du);
    push32(c, 0xf0ea2u); f_000e9010(c); X86_RET(c, 0xf0ea2u);
    X86_TICK(c, 9);
    // 0f0ea2  mov dword ptr [0xcde44], 2
    X86_AT(c, 0xf0ea2u);
    wr32((c.sbase[3] + (uint32_t)(0xCDE44u)), 0x2u);
    // 0f0eac  jmp 0xf128f
    X86_AT(c, 0xf0eacu);
    goto L_f128f;
L_f0eb1:
    X86_TICK(c, 13);
    // 0f0eb1  push 0x50b4
    X86_AT(c, 0xf0eb1u);
    { uint32_t v = 0x50B4u; push32(c, v); }
    // 0f0eb6  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf0eb6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f0eb9  push eax
    X86_AT(c, 0xf0eb9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0eba  call 0xf0c88
    X86_AT(c, 0xf0ebau);
    push32(c, 0xf0ebfu); f_000f0c88(c); X86_RET(c, 0xf0ebfu);
    X86_TICK(c, 9);
    // 0f0ebf  add esp, 8
    X86_AT(c, 0xf0ebfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f0ec2  and eax, eax
    X86_AT(c, 0xf0ec2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f0ec4  jne 0xf0ee3
    X86_AT(c, 0xf0ec4u);
    if (x86_cc(c, 5)) { goto L_f0ee3; }
    X86_TICK(c, 12);
    // 0f0ec6  cmp dword ptr [0xcde44], 1
    X86_AT(c, 0xf0ec6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x1u, 0, 4);
    // 0f0ecd  jne 0xf0ee3
    X86_AT(c, 0xf0ecdu);
    if (x86_cc(c, 5)) { goto L_f0ee3; }
    X86_TICK(c, 7);
    // 0f0ecf  call 0xf0cc4
    X86_AT(c, 0xf0ecfu);
    push32(c, 0xf0ed4u); f_000f0cc4(c); X86_RET(c, 0xf0ed4u);
    X86_TICK(c, 7);
    // 0f0ed4  call 0xe9010
    X86_AT(c, 0xf0ed4u);
    push32(c, 0xf0ed9u); f_000e9010(c); X86_RET(c, 0xf0ed9u);
    X86_TICK(c, 9);
    // 0f0ed9  push 0x50bc
    X86_AT(c, 0xf0ed9u);
    { uint32_t v = 0x50BCu; push32(c, v); }
    // 0f0ede  jmp 0xf127e
    X86_AT(c, 0xf0edeu);
    goto L_f127e;
L_f0ee3:
    X86_TICK(c, 13);
    // 0f0ee3  push 0x50e8
    X86_AT(c, 0xf0ee3u);
    { uint32_t v = 0x50E8u; push32(c, v); }
    // 0f0ee8  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf0ee8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f0eeb  push eax
    X86_AT(c, 0xf0eebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0eec  call 0xf0c88
    X86_AT(c, 0xf0eecu);
    push32(c, 0xf0ef1u); f_000f0c88(c); X86_RET(c, 0xf0ef1u);
    X86_TICK(c, 9);
    // 0f0ef1  add esp, 8
    X86_AT(c, 0xf0ef1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f0ef4  and eax, eax
    X86_AT(c, 0xf0ef4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f0ef6  jne 0xf0f2f
    X86_AT(c, 0xf0ef6u);
    if (x86_cc(c, 5)) { goto L_f0f2f; }
    X86_TICK(c, 12);
    // 0f0ef8  cmp dword ptr [0xcde44], 0
    X86_AT(c, 0xf0ef8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x0u, 0, 4);
    // 0f0eff  je 0xf0f2f
    X86_AT(c, 0xf0effu);
    if (x86_cc(c, 4)) { goto L_f0f2f; }
    X86_TICK(c, 26);
    // 0f0f01  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0f01u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0f06  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0f06u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0f09  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0f09u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0f0c  shl edx, 5
    X86_AT(c, 0xf0f0cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0f0f  sub edx, eax
    X86_AT(c, 0xf0f0fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0f11  mov dword ptr [edx + 0xcde91], 0x270f
    X86_AT(c, 0xf0f11u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)), 0x270Fu);
    // 0f0f1b  mov dword ptr [edx + 0xcde8d], 0xf41dc
    X86_AT(c, 0xf0f1bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)), 0xF41DCu);
    // 0f0f25  push 0x50f0
    X86_AT(c, 0xf0f25u);
    { uint32_t v = 0x50F0u; push32(c, v); }
    // 0f0f2a  jmp 0xf127e
    X86_AT(c, 0xf0f2au);
    goto L_f127e;
L_f0f2f:
    X86_TICK(c, 13);
    // 0f0f2f  push 0x5114
    X86_AT(c, 0xf0f2fu);
    { uint32_t v = 0x5114u; push32(c, v); }
    // 0f0f34  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf0f34u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f0f37  push eax
    X86_AT(c, 0xf0f37u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0f38  call 0xf0c88
    X86_AT(c, 0xf0f38u);
    push32(c, 0xf0f3du); f_000f0c88(c); X86_RET(c, 0xf0f3du);
    X86_TICK(c, 9);
    // 0f0f3d  add esp, 8
    X86_AT(c, 0xf0f3du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f0f40  and eax, eax
    X86_AT(c, 0xf0f40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f0f42  jne 0xf0f4e
    X86_AT(c, 0xf0f42u);
    if (x86_cc(c, 5)) { goto L_f0f4e; }
    X86_TICK(c, 9);
    // 0f0f44  push 0x511c
    X86_AT(c, 0xf0f44u);
    { uint32_t v = 0x511Cu; push32(c, v); }
    // 0f0f49  jmp 0xf127e
    X86_AT(c, 0xf0f49u);
    goto L_f127e;
L_f0f4e:
    X86_TICK(c, 13);
    // 0f0f4e  push 0x5148
    X86_AT(c, 0xf0f4eu);
    { uint32_t v = 0x5148u; push32(c, v); }
    // 0f0f53  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf0f53u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f0f56  push eax
    X86_AT(c, 0xf0f56u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0f57  call 0xf0c88
    X86_AT(c, 0xf0f57u);
    push32(c, 0xf0f5cu); f_000f0c88(c); X86_RET(c, 0xf0f5cu);
    X86_TICK(c, 9);
    // 0f0f5c  add esp, 8
    X86_AT(c, 0xf0f5cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f0f5f  and eax, eax
    X86_AT(c, 0xf0f5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f0f61  jne 0xf0f6d
    X86_AT(c, 0xf0f61u);
    if (x86_cc(c, 5)) { goto L_f0f6d; }
    X86_TICK(c, 9);
    // 0f0f63  push 0x5150
    X86_AT(c, 0xf0f63u);
    { uint32_t v = 0x5150u; push32(c, v); }
    // 0f0f68  jmp 0xf127e
    X86_AT(c, 0xf0f68u);
    goto L_f127e;
L_f0f6d:
    X86_TICK(c, 13);
    // 0f0f6d  push 0x516c
    X86_AT(c, 0xf0f6du);
    { uint32_t v = 0x516Cu; push32(c, v); }
    // 0f0f72  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf0f72u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f0f75  push eax
    X86_AT(c, 0xf0f75u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0f76  call 0xf0c88
    X86_AT(c, 0xf0f76u);
    push32(c, 0xf0f7bu); f_000f0c88(c); X86_RET(c, 0xf0f7bu);
    X86_TICK(c, 9);
    // 0f0f7b  add esp, 8
    X86_AT(c, 0xf0f7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f0f7e  and eax, eax
    X86_AT(c, 0xf0f7eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f0f80  jne 0xf0fec
    X86_AT(c, 0xf0f80u);
    if (x86_cc(c, 5)) { goto L_f0fec; }
    X86_TICK(c, 11);
    // 0f0f82  push 0x5174
    X86_AT(c, 0xf0f82u);
    { uint32_t v = 0x5174u; push32(c, v); }
    // 0f0f87  push 7
    X86_AT(c, 0xf0f87u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0f89  call 0xe5654
    X86_AT(c, 0xf0f89u);
    push32(c, 0xf0f8eu); f_000e5654(c); X86_RET(c, 0xf0f8eu);
    X86_TICK(c, 9);
    // 0f0f8e  push 7
    X86_AT(c, 0xf0f8eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0f90  call 0xe6c68
    X86_AT(c, 0xf0f90u);
    push32(c, 0xf0f95u); f_000e6c68(c); X86_RET(c, 0xf0f95u);
    X86_TICK(c, 26);
    // 0f0f95  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0f95u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0f9a  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0f9au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0f9d  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0f9du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0fa0  shl edx, 5
    X86_AT(c, 0xf0fa0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0fa3  sub edx, eax
    X86_AT(c, 0xf0fa3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0fa5  add esp, 0xc
    X86_AT(c, 0xf0fa5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f0fa8  mov eax, dword ptr [edx + 0xcde81]
    X86_AT(c, 0xf0fa8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)));
    // 0f0fae  cmp eax, 0x3e8
    X86_AT(c, 0xf0faeu);
    (void)x86_sub(c, c.r[0], 0x3E8u, 0, 4);
    // 0f0fb3  jge 0xf128f
    X86_AT(c, 0xf0fb3u);
    if (x86_cc(c, 13)) { goto L_f128f; }
    X86_TICK(c, 12);
    // 0f0fb9  cmp dword ptr [0xcde44], 0
    X86_AT(c, 0xf0fb9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x0u, 0, 4);
    // 0f0fc0  je 0xf0fcb
    X86_AT(c, 0xf0fc0u);
    if (x86_cc(c, 4)) { goto L_f0fcb; }
    X86_TICK(c, 14);
    // 0f0fc2  add dword ptr [edx + 0xcde81], 0x64
    X86_AT(c, 0xf0fc2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x64u, 0, 4)); }
    // 0f0fc9  jmp 0xf0fe2
    X86_AT(c, 0xf0fc9u);
    goto L_f0fe2;
L_f0fcb:
    X86_TICK(c, 20);
    // 0f0fcb  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0fcbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0fd0  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0fd0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0fd3  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0fd3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0fd6  shl edx, 5
    X86_AT(c, 0xf0fd6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0fd9  sub edx, eax
    X86_AT(c, 0xf0fd9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0fdb  add dword ptr [edx + 0xcde81], 0xa
    X86_AT(c, 0xf0fdbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xAu, 0, 4)); }
L_f0fe2:
    X86_TICK(c, 7);
    // 0f0fe2  call 0xe9010
    X86_AT(c, 0xf0fe2u);
    push32(c, 0xf0fe7u); f_000e9010(c); X86_RET(c, 0xf0fe7u);
    X86_TICK(c, 7);
    // 0f0fe7  jmp 0xf128f
    X86_AT(c, 0xf0fe7u);
    goto L_f128f;
L_f0fec:
    X86_TICK(c, 13);
    // 0f0fec  push 0x5190
    X86_AT(c, 0xf0fecu);
    { uint32_t v = 0x5190u; push32(c, v); }
    // 0f0ff1  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf0ff1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f0ff4  push eax
    X86_AT(c, 0xf0ff4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0ff5  call 0xf0c88
    X86_AT(c, 0xf0ff5u);
    push32(c, 0xf0ffau); f_000f0c88(c); X86_RET(c, 0xf0ffau);
    X86_TICK(c, 9);
    // 0f0ffa  add esp, 8
    X86_AT(c, 0xf0ffau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f0ffd  and eax, eax
    X86_AT(c, 0xf0ffdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f0fff  jne 0xf1036
    X86_AT(c, 0xf0fffu);
    if (x86_cc(c, 5)) { goto L_f1036; }
    X86_TICK(c, 11);
    // 0f1001  push 0x519c
    X86_AT(c, 0xf1001u);
    { uint32_t v = 0x519Cu; push32(c, v); }
    // 0f1006  push 7
    X86_AT(c, 0xf1006u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1008  call 0xe5654
    X86_AT(c, 0xf1008u);
    push32(c, 0xf100du); f_000e5654(c); X86_RET(c, 0xf100du);
    X86_TICK(c, 14);
    // 0f100d  add esp, 8
    X86_AT(c, 0xf100du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f1010  cmp dword ptr [0xcde44], 0
    X86_AT(c, 0xf1010u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x0u, 0, 4);
    // 0f1017  je 0xf126d
    X86_AT(c, 0xf1017u);
    if (x86_cc(c, 4)) { goto L_f126d; }
    X86_TICK(c, 7);
    // 0f101d  call 0xf0cc4
    X86_AT(c, 0xf101du);
    push32(c, 0xf1022u); f_000f0cc4(c); X86_RET(c, 0xf1022u);
    X86_TICK(c, 7);
    // 0f1022  call 0xe9010
    X86_AT(c, 0xf1022u);
    push32(c, 0xf1027u); f_000e9010(c); X86_RET(c, 0xf1027u);
    X86_TICK(c, 9);
    // 0f1027  mov dword ptr [0xcde44], 3
    X86_AT(c, 0xf1027u);
    wr32((c.sbase[3] + (uint32_t)(0xCDE44u)), 0x3u);
    // 0f1031  jmp 0xf126d
    X86_AT(c, 0xf1031u);
    goto L_f126d;
L_f1036:
    X86_TICK(c, 13);
    // 0f1036  push 0x51b8
    X86_AT(c, 0xf1036u);
    { uint32_t v = 0x51B8u; push32(c, v); }
    // 0f103b  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf103bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f103e  push eax
    X86_AT(c, 0xf103eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f103f  call 0xf0c88
    X86_AT(c, 0xf103fu);
    push32(c, 0xf1044u); f_000f0c88(c); X86_RET(c, 0xf1044u);
    X86_TICK(c, 9);
    // 0f1044  add esp, 8
    X86_AT(c, 0xf1044u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f1047  and eax, eax
    X86_AT(c, 0xf1047u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f1049  jne 0xf1055
    X86_AT(c, 0xf1049u);
    if (x86_cc(c, 5)) { goto L_f1055; }
    X86_TICK(c, 9);
    // 0f104b  push 0x51bc
    X86_AT(c, 0xf104bu);
    { uint32_t v = 0x51BCu; push32(c, v); }
    // 0f1050  jmp 0xf127e
    X86_AT(c, 0xf1050u);
    goto L_f127e;
L_f1055:
    X86_TICK(c, 13);
    // 0f1055  push 0x51e4
    X86_AT(c, 0xf1055u);
    { uint32_t v = 0x51E4u; push32(c, v); }
    // 0f105a  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf105au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f105d  push eax
    X86_AT(c, 0xf105du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f105e  call 0xf0c88
    X86_AT(c, 0xf105eu);
    push32(c, 0xf1063u); f_000f0c88(c); X86_RET(c, 0xf1063u);
    X86_TICK(c, 9);
    // 0f1063  add esp, 8
    X86_AT(c, 0xf1063u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f1066  and eax, eax
    X86_AT(c, 0xf1066u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f1068  jne 0xf1074
    X86_AT(c, 0xf1068u);
    if (x86_cc(c, 5)) { goto L_f1074; }
    X86_TICK(c, 9);
    // 0f106a  push 0x51ec
    X86_AT(c, 0xf106au);
    { uint32_t v = 0x51ECu; push32(c, v); }
    // 0f106f  jmp 0xf127e
    X86_AT(c, 0xf106fu);
    goto L_f127e;
L_f1074:
    X86_TICK(c, 13);
    // 0f1074  push 0x521c
    X86_AT(c, 0xf1074u);
    { uint32_t v = 0x521Cu; push32(c, v); }
    // 0f1079  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf1079u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f107c  push eax
    X86_AT(c, 0xf107cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f107d  call 0xf0c88
    X86_AT(c, 0xf107du);
    push32(c, 0xf1082u); f_000f0c88(c); X86_RET(c, 0xf1082u);
    X86_TICK(c, 9);
    // 0f1082  add esp, 8
    X86_AT(c, 0xf1082u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f1085  and eax, eax
    X86_AT(c, 0xf1085u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f1087  jne 0xf1093
    X86_AT(c, 0xf1087u);
    if (x86_cc(c, 5)) { goto L_f1093; }
    X86_TICK(c, 9);
    // 0f1089  push 0x5224
    X86_AT(c, 0xf1089u);
    { uint32_t v = 0x5224u; push32(c, v); }
    // 0f108e  jmp 0xf127e
    X86_AT(c, 0xf108eu);
    goto L_f127e;
L_f1093:
    X86_TICK(c, 13);
    // 0f1093  push 0x5250
    X86_AT(c, 0xf1093u);
    { uint32_t v = 0x5250u; push32(c, v); }
    // 0f1098  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf1098u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f109b  push eax
    X86_AT(c, 0xf109bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f109c  call 0xf0c88
    X86_AT(c, 0xf109cu);
    push32(c, 0xf10a1u); f_000f0c88(c); X86_RET(c, 0xf10a1u);
    X86_TICK(c, 9);
    // 0f10a1  add esp, 8
    X86_AT(c, 0xf10a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f10a4  and eax, eax
    X86_AT(c, 0xf10a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f10a6  jne 0xf10ca
    X86_AT(c, 0xf10a6u);
    if (x86_cc(c, 5)) { goto L_f10ca; }
    X86_TICK(c, 11);
    // 0f10a8  push 0x5254
    X86_AT(c, 0xf10a8u);
    { uint32_t v = 0x5254u; push32(c, v); }
    // 0f10ad  push 7
    X86_AT(c, 0xf10adu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f10af  call 0xe5654
    X86_AT(c, 0xf10afu);
    push32(c, 0xf10b4u); f_000e5654(c); X86_RET(c, 0xf10b4u);
    X86_TICK(c, 9);
    // 0f10b4  push 7
    X86_AT(c, 0xf10b4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f10b6  call 0xe6c68
    X86_AT(c, 0xf10b6u);
    push32(c, 0xf10bbu); f_000e6c68(c); X86_RET(c, 0xf10bbu);
    X86_TICK(c, 9);
    // 0f10bb  mov dword ptr [0xcde44], 0
    X86_AT(c, 0xf10bbu);
    wr32((c.sbase[3] + (uint32_t)(0xCDE44u)), 0x0u);
    // 0f10c5  jmp 0xf128c
    X86_AT(c, 0xf10c5u);
    goto L_f128c;
L_f10ca:
    X86_TICK(c, 13);
    // 0f10ca  push 0x5274
    X86_AT(c, 0xf10cau);
    { uint32_t v = 0x5274u; push32(c, v); }
    // 0f10cf  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf10cfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f10d2  push eax
    X86_AT(c, 0xf10d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f10d3  call 0xf0c88
    X86_AT(c, 0xf10d3u);
    push32(c, 0xf10d8u); f_000f0c88(c); X86_RET(c, 0xf10d8u);
    X86_TICK(c, 9);
    // 0f10d8  add esp, 8
    X86_AT(c, 0xf10d8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f10db  and eax, eax
    X86_AT(c, 0xf10dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f10dd  jne 0xf10e9
    X86_AT(c, 0xf10ddu);
    if (x86_cc(c, 5)) { goto L_f10e9; }
    X86_TICK(c, 9);
    // 0f10df  push 0x527c
    X86_AT(c, 0xf10dfu);
    { uint32_t v = 0x527Cu; push32(c, v); }
    // 0f10e4  jmp 0xf127e
    X86_AT(c, 0xf10e4u);
    goto L_f127e;
L_f10e9:
    X86_TICK(c, 13);
    // 0f10e9  push 0x52a6
    X86_AT(c, 0xf10e9u);
    { uint32_t v = 0x52A6u; push32(c, v); }
    // 0f10ee  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf10eeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f10f1  push eax
    X86_AT(c, 0xf10f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f10f2  call 0xf0c88
    X86_AT(c, 0xf10f2u);
    push32(c, 0xf10f7u); f_000f0c88(c); X86_RET(c, 0xf10f7u);
    X86_TICK(c, 9);
    // 0f10f7  add esp, 8
    X86_AT(c, 0xf10f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f10fa  and eax, eax
    X86_AT(c, 0xf10fau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f10fc  jne 0xf1108
    X86_AT(c, 0xf10fcu);
    if (x86_cc(c, 5)) { goto L_f1108; }
    X86_TICK(c, 7);
    // 0f10fe  call 0xe0ae8
    X86_AT(c, 0xf10feu);
    push32(c, 0xf1103u); f_000e0ae8(c); X86_RET(c, 0xf1103u);
    X86_TICK(c, 7);
    // 0f1103  jmp 0xf128f
    X86_AT(c, 0xf1103u);
    goto L_f128f;
L_f1108:
    X86_TICK(c, 13);
    // 0f1108  push 0x52ac
    X86_AT(c, 0xf1108u);
    { uint32_t v = 0x52ACu; push32(c, v); }
    // 0f110d  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf110du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f1110  push eax
    X86_AT(c, 0xf1110u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f1111  call 0xf0c88
    X86_AT(c, 0xf1111u);
    push32(c, 0xf1116u); f_000f0c88(c); X86_RET(c, 0xf1116u);
    X86_TICK(c, 9);
    // 0f1116  add esp, 8
    X86_AT(c, 0xf1116u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f1119  and eax, eax
    X86_AT(c, 0xf1119u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f111b  jne 0xf1127
    X86_AT(c, 0xf111bu);
    if (x86_cc(c, 5)) { goto L_f1127; }
    X86_TICK(c, 7);
    // 0f111d  call 0xe3484
    X86_AT(c, 0xf111du);
    push32(c, 0xf1122u); f_000e3484(c); X86_RET(c, 0xf1122u);
    X86_TICK(c, 7);
    // 0f1122  jmp 0xf128f
    X86_AT(c, 0xf1122u);
    goto L_f128f;
L_f1127:
    X86_TICK(c, 13);
    // 0f1127  push 0x52b4
    X86_AT(c, 0xf1127u);
    { uint32_t v = 0x52B4u; push32(c, v); }
    // 0f112c  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf112cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f112f  push eax
    X86_AT(c, 0xf112fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f1130  call 0xf0c88
    X86_AT(c, 0xf1130u);
    push32(c, 0xf1135u); f_000f0c88(c); X86_RET(c, 0xf1135u);
    X86_TICK(c, 9);
    // 0f1135  add esp, 8
    X86_AT(c, 0xf1135u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f1138  and eax, eax
    X86_AT(c, 0xf1138u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f113a  jne 0xf1146
    X86_AT(c, 0xf113au);
    if (x86_cc(c, 5)) { goto L_f1146; }
    X86_TICK(c, 7);
    // 0f113c  call 0xe33d8
    X86_AT(c, 0xf113cu);
    push32(c, 0xf1141u); f_000e33d8(c); X86_RET(c, 0xf1141u);
    X86_TICK(c, 7);
    // 0f1141  jmp 0xf128f
    X86_AT(c, 0xf1141u);
    goto L_f128f;
L_f1146:
    X86_TICK(c, 13);
    // 0f1146  push 0x52bc
    X86_AT(c, 0xf1146u);
    { uint32_t v = 0x52BCu; push32(c, v); }
    // 0f114b  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf114bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f114e  push eax
    X86_AT(c, 0xf114eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f114f  call 0xf0c88
    X86_AT(c, 0xf114fu);
    push32(c, 0xf1154u); f_000f0c88(c); X86_RET(c, 0xf1154u);
    X86_TICK(c, 9);
    // 0f1154  add esp, 8
    X86_AT(c, 0xf1154u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f1157  and eax, eax
    X86_AT(c, 0xf1157u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f1159  jne 0xf116e
    X86_AT(c, 0xf1159u);
    if (x86_cc(c, 5)) { goto L_f116e; }
    X86_TICK(c, 12);
    // 0f115b  cmp dword ptr [0xcde44], 0
    X86_AT(c, 0xf115bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x0u, 0, 4);
    // 0f1162  je 0xf116e
    X86_AT(c, 0xf1162u);
    if (x86_cc(c, 4)) { goto L_f116e; }
    X86_TICK(c, 7);
    // 0f1164  call 0xfd14c
    X86_AT(c, 0xf1164u);
    push32(c, 0xf1169u); f_000fd14c(c); X86_RET(c, 0xf1169u);
    X86_TICK(c, 7);
    // 0f1169  jmp 0xf128f
    X86_AT(c, 0xf1169u);
    goto L_f128f;
L_f116e:
    X86_TICK(c, 13);
    // 0f116e  push 0x52c4
    X86_AT(c, 0xf116eu);
    { uint32_t v = 0x52C4u; push32(c, v); }
    // 0f1173  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf1173u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f1176  push eax
    X86_AT(c, 0xf1176u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f1177  call 0xf0c88
    X86_AT(c, 0xf1177u);
    push32(c, 0xf117cu); f_000f0c88(c); X86_RET(c, 0xf117cu);
    X86_TICK(c, 9);
    // 0f117c  add esp, 8
    X86_AT(c, 0xf117cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f117f  and eax, eax
    X86_AT(c, 0xf117fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f1181  jne 0xf1196
    X86_AT(c, 0xf1181u);
    if (x86_cc(c, 5)) { goto L_f1196; }
    X86_TICK(c, 12);
    // 0f1183  cmp dword ptr [0xcde44], 0
    X86_AT(c, 0xf1183u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x0u, 0, 4);
    // 0f118a  je 0xf1196
    X86_AT(c, 0xf118au);
    if (x86_cc(c, 4)) { goto L_f1196; }
    X86_TICK(c, 7);
    // 0f118c  call 0xe3d28
    X86_AT(c, 0xf118cu);
    push32(c, 0xf1191u); f_000e3d28(c); X86_RET(c, 0xf1191u);
    X86_TICK(c, 7);
    // 0f1191  jmp 0xf128f
    X86_AT(c, 0xf1191u);
    goto L_f128f;
L_f1196:
    X86_TICK(c, 13);
    // 0f1196  push 0x52cc
    X86_AT(c, 0xf1196u);
    { uint32_t v = 0x52CCu; push32(c, v); }
    // 0f119b  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf119bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f119e  push eax
    X86_AT(c, 0xf119eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f119f  call 0xf0c88
    X86_AT(c, 0xf119fu);
    push32(c, 0xf11a4u); f_000f0c88(c); X86_RET(c, 0xf11a4u);
    X86_TICK(c, 9);
    // 0f11a4  add esp, 8
    X86_AT(c, 0xf11a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f11a7  and eax, eax
    X86_AT(c, 0xf11a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f11a9  jne 0xf11be
    X86_AT(c, 0xf11a9u);
    if (x86_cc(c, 5)) { goto L_f11be; }
    X86_TICK(c, 12);
    // 0f11ab  cmp dword ptr [0xcde44], 0
    X86_AT(c, 0xf11abu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x0u, 0, 4);
    // 0f11b2  je 0xf11be
    X86_AT(c, 0xf11b2u);
    if (x86_cc(c, 4)) { goto L_f11be; }
    X86_TICK(c, 7);
    // 0f11b4  call 0xf47f0
    X86_AT(c, 0xf11b4u);
    push32(c, 0xf11b9u); f_000f47f0(c); X86_RET(c, 0xf11b9u);
    X86_TICK(c, 7);
    // 0f11b9  jmp 0xf128f
    X86_AT(c, 0xf11b9u);
    goto L_f128f;
L_f11be:
    X86_TICK(c, 13);
    // 0f11be  push 0x52d4
    X86_AT(c, 0xf11beu);
    { uint32_t v = 0x52D4u; push32(c, v); }
    // 0f11c3  lea ebx, [ebp - 0xc]
    X86_AT(c, 0xf11c3u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f11c6  push ebx
    X86_AT(c, 0xf11c6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f11c7  call 0xf0c88
    X86_AT(c, 0xf11c7u);
    push32(c, 0xf11ccu); f_000f0c88(c); X86_RET(c, 0xf11ccu);
    X86_TICK(c, 9);
    // 0f11cc  add esp, 8
    X86_AT(c, 0xf11ccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f11cf  and eax, eax
    X86_AT(c, 0xf11cfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f11d1  je 0xf11e5
    X86_AT(c, 0xf11d1u);
    if (x86_cc(c, 4)) { goto L_f11e5; }
    X86_TICK(c, 11);
    // 0f11d3  push 0x52dc
    X86_AT(c, 0xf11d3u);
    { uint32_t v = 0x52DCu; push32(c, v); }
    // 0f11d8  push ebx
    X86_AT(c, 0xf11d8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f11d9  call 0xf0c88
    X86_AT(c, 0xf11d9u);
    push32(c, 0xf11deu); f_000f0c88(c); X86_RET(c, 0xf11deu);
    X86_TICK(c, 9);
    // 0f11de  add esp, 8
    X86_AT(c, 0xf11deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f11e1  and eax, eax
    X86_AT(c, 0xf11e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f11e3  jne 0xf11ef
    X86_AT(c, 0xf11e3u);
    if (x86_cc(c, 5)) { goto L_f11ef; }
L_f11e5:
    X86_TICK(c, 7);
    // 0f11e5  call 0xf184c
    X86_AT(c, 0xf11e5u);
    push32(c, 0xf11eau); f_000f184c(c); X86_RET(c, 0xf11eau);
    X86_TICK(c, 7);
    // 0f11ea  jmp 0xf128f
    X86_AT(c, 0xf11eau);
    goto L_f128f;
L_f11ef:
    X86_TICK(c, 13);
    // 0f11ef  push 0x52e0
    X86_AT(c, 0xf11efu);
    { uint32_t v = 0x52E0u; push32(c, v); }
    // 0f11f4  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf11f4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f11f7  push eax
    X86_AT(c, 0xf11f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f11f8  call 0xf0c88
    X86_AT(c, 0xf11f8u);
    push32(c, 0xf11fdu); f_000f0c88(c); X86_RET(c, 0xf11fdu);
    X86_TICK(c, 9);
    // 0f11fd  add esp, 8
    X86_AT(c, 0xf11fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f1200  and eax, eax
    X86_AT(c, 0xf1200u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f1202  jne 0xf1279
    X86_AT(c, 0xf1202u);
    if (x86_cc(c, 5)) { goto L_f1279; }
    X86_TICK(c, 11);
    // 0f1208  push 0x52e8
    X86_AT(c, 0xf1208u);
    { uint32_t v = 0x52E8u; push32(c, v); }
    // 0f120d  push 7
    X86_AT(c, 0xf120du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f120f  call 0xe5654
    X86_AT(c, 0xf120fu);
    push32(c, 0xf1214u); f_000e5654(c); X86_RET(c, 0xf1214u);
    X86_TICK(c, 9);
    // 0f1214  push 7
    X86_AT(c, 0xf1214u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1216  call 0xe6c68
    X86_AT(c, 0xf1216u);
    push32(c, 0xf121bu); f_000e6c68(c); X86_RET(c, 0xf121bu);
    X86_TICK(c, 15);
    // 0f121b  add esp, 0xc
    X86_AT(c, 0xf121bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f121e  mov edx, dword ptr [0xcde44]
    X86_AT(c, 0xf121eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCDE44u)));
    // 0f1224  dec edx
    X86_AT(c, 0xf1224u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0f1225  cmp edx, 3
    X86_AT(c, 0xf1225u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0f1228  ja 0xf126d
    X86_AT(c, 0xf1228u);
    if (x86_cc(c, 7)) { goto L_f126d; }
    X86_TICK(c, 7);
    // 0f122a  jmp dword ptr cs:[edx*4 + 0xf1232]
    X86_AT(c, 0xf122au);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF1232u)));
      switch (t) {
      case 0xf1242u: goto L_f1242;
      case 0xf1249u: goto L_f1249;
      case 0xf1250u: goto L_f1250;
      case 0xf1257u: goto L_f1257;
      default: x86_jump(c, t); return; } }
L_f1242:
    X86_TICK(c, 9);
    // 0f1242  push 0x5314
    X86_AT(c, 0xf1242u);
    { uint32_t v = 0x5314u; push32(c, v); }
    // 0f1247  jmp 0xf125c
    X86_AT(c, 0xf1247u);
    goto L_f125c;
L_f1249:
    X86_TICK(c, 9);
    // 0f1249  push 0x5344
    X86_AT(c, 0xf1249u);
    { uint32_t v = 0x5344u; push32(c, v); }
    // 0f124e  jmp 0xf125c
    X86_AT(c, 0xf124eu);
    goto L_f125c;
L_f1250:
    X86_TICK(c, 9);
    // 0f1250  push 0x5374
    X86_AT(c, 0xf1250u);
    { uint32_t v = 0x5374u; push32(c, v); }
    // 0f1255  jmp 0xf125c
    X86_AT(c, 0xf1255u);
    goto L_f125c;
L_f1257:
    X86_TICK(c, 2);
    // 0f1257  push 0x5390
    X86_AT(c, 0xf1257u);
    { uint32_t v = 0x5390u; push32(c, v); }
L_f125c:
    X86_TICK(c, 9);
    // 0f125c  push 7
    X86_AT(c, 0xf125cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f125e  call 0xe5654
    X86_AT(c, 0xf125eu);
    push32(c, 0xf1263u); f_000e5654(c); X86_RET(c, 0xf1263u);
    X86_TICK(c, 9);
    // 0f1263  push 7
    X86_AT(c, 0xf1263u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1265  call 0xe6c68
    X86_AT(c, 0xf1265u);
    push32(c, 0xf126au); f_000e6c68(c); X86_RET(c, 0xf126au);
    X86_TICK(c, 2);
    // 0f126a  add esp, 0xc
    X86_AT(c, 0xf126au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f126d:
    X86_TICK(c, 9);
    // 0f126d  push 7
    X86_AT(c, 0xf126du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f126f  call 0xe6c68
    X86_AT(c, 0xf126fu);
    push32(c, 0xf1274u); f_000e6c68(c); X86_RET(c, 0xf1274u);
    X86_TICK(c, 9);
    // 0f1274  add esp, 4
    X86_AT(c, 0xf1274u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f1277  jmp 0xf128f
    X86_AT(c, 0xf1277u);
    goto L_f128f;
L_f1279:
    X86_TICK(c, 2);
    // 0f1279  push 0x53b0
    X86_AT(c, 0xf1279u);
    { uint32_t v = 0x53B0u; push32(c, v); }
L_f127e:
    X86_TICK(c, 9);
    // 0f127e  push 7
    X86_AT(c, 0xf127eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1280  call 0xe5654
    X86_AT(c, 0xf1280u);
    push32(c, 0xf1285u); f_000e5654(c); X86_RET(c, 0xf1285u);
    X86_TICK(c, 9);
    // 0f1285  push 7
    X86_AT(c, 0xf1285u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1287  call 0xe6c68
    X86_AT(c, 0xf1287u);
    push32(c, 0xf128cu); f_000e6c68(c); X86_RET(c, 0xf128cu);
L_f128c:
    X86_TICK(c, 2);
    // 0f128c  add esp, 0xc
    X86_AT(c, 0xf128cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f128f:
    X86_TICK(c, 20);
    // 0f128f  pop ebx
    X86_AT(c, 0xf128fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f1290  leave 
    X86_AT(c, 0xf1290u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f1291  ret 
    X86_AT(c, 0xf1291u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf0decu, "ran off the end of a function");
}
void f_000f127e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f127e  push 7
    X86_AT(c, 0xf127eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1280  call 0xe5654
    X86_AT(c, 0xf1280u);
    push32(c, 0xf1285u); f_000e5654(c); X86_RET(c, 0xf1285u);
    X86_TICK(c, 9);
    // 0f1285  push 7
    X86_AT(c, 0xf1285u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1287  call 0xe6c68
    X86_AT(c, 0xf1287u);
    push32(c, 0xf128cu); f_000e6c68(c); X86_RET(c, 0xf128cu);
    X86_TICK(c, 22);
    // 0f128c  add esp, 0xc
    X86_AT(c, 0xf128cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f128f  pop ebx
    X86_AT(c, 0xf128fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f1290  leave 
    X86_AT(c, 0xf1290u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f1291  ret 
    X86_AT(c, 0xf1291u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf127eu, "ran off the end of a function");
}
void f_000f128f(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0f128f  pop ebx
    X86_AT(c, 0xf128fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f1290  leave 
    X86_AT(c, 0xf1290u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f1291  ret 
    X86_AT(c, 0xf1291u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf128fu, "ran off the end of a function");
}
void f_000f1294(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0f1294  push ebp
    X86_AT(c, 0xf1294u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f1295  mov ebp, esp
    X86_AT(c, 0xf1295u);
    c.r[5] = c.r[4];
    // 0f1297  sub esp, 8
    X86_AT(c, 0xf1297u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0f129a  push ebx
    X86_AT(c, 0xf129au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f129b  push esi
    X86_AT(c, 0xf129bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f129c  push edi
    X86_AT(c, 0xf129cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f129d  push 7
    X86_AT(c, 0xf129du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f129f  call 0xe693c
    X86_AT(c, 0xf129fu);
    push32(c, 0xf12a4u); f_000e693c(c); X86_RET(c, 0xf12a4u);
    X86_TICK(c, 11);
    // 0f12a4  push 0x53d8
    X86_AT(c, 0xf12a4u);
    { uint32_t v = 0x53D8u; push32(c, v); }
    // 0f12a9  push 7
    X86_AT(c, 0xf12a9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f12ab  call 0xe5654
    X86_AT(c, 0xf12abu);
    push32(c, 0xf12b0u); f_000e5654(c); X86_RET(c, 0xf12b0u);
    X86_TICK(c, 9);
    // 0f12b0  push 7
    X86_AT(c, 0xf12b0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f12b2  call 0xe26c8
    X86_AT(c, 0xf12b2u);
    push32(c, 0xf12b7u); f_000e26c8(c); X86_RET(c, 0xf12b7u);
    X86_TICK(c, 12);
    // 0f12b7  xchg edi, eax
    X86_AT(c, 0xf12b7u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f12b8  add esp, 0x10
    X86_AT(c, 0xf12b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f12bb  cmp edi, 0xffffffff
    X86_AT(c, 0xf12bbu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0f12be  jne 0xf12ca
    X86_AT(c, 0xf12beu);
    if (x86_cc(c, 5)) { goto L_f12ca; }
    X86_TICK(c, 9);
    // 0f12c0  push 0x5414
    X86_AT(c, 0xf12c0u);
    { uint32_t v = 0x5414u; push32(c, v); }
    // 0f12c5  jmp 0xf1695
    X86_AT(c, 0xf12c5u);
    goto L_f1695;
L_f12ca:
    X86_TICK(c, 44);
    // 0f12ca  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf12cau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f12cf  lea edx, [eax + eax*4]
    X86_AT(c, 0xf12cfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f12d2  lea edx, [eax + edx*2]
    X86_AT(c, 0xf12d2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f12d5  shl edx, 5
    X86_AT(c, 0xf12d5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f12d8  sub edx, eax
    X86_AT(c, 0xf12d8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f12da  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf12dau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f12e0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf12e0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f12e3  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf12e3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f12e9  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf12e9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f12ec  push 1
    X86_AT(c, 0xf12ecu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f12ee  push edi
    X86_AT(c, 0xf12eeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f12ef  lea eax, [ebp - 8]
    X86_AT(c, 0xf12efu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f12f2  push eax
    X86_AT(c, 0xf12f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f12f3  lea ecx, [ebp - 4]
    X86_AT(c, 0xf12f3u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f12f6  push ecx
    X86_AT(c, 0xf12f6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0f12f7  call 0xeea58
    X86_AT(c, 0xf12f7u);
    push32(c, 0xf12fcu); f_000eea58(c); X86_RET(c, 0xf12fcu);
    X86_TICK(c, 17);
    // 0f12fc  push dword ptr [ebp - 8]
    X86_AT(c, 0xf12fcu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0f12ff  push dword ptr [ebp - 4]
    X86_AT(c, 0xf12ffu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f1302  call 0xeeb6c
    X86_AT(c, 0xf1302u);
    push32(c, 0xf1307u); f_000eeb6c(c); X86_RET(c, 0xf1307u);
    X86_TICK(c, 12);
    // 0f1307  xchg esi, eax
    X86_AT(c, 0xf1307u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0f1308  push 7
    X86_AT(c, 0xf1308u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f130a  call 0xe693c
    X86_AT(c, 0xf130au);
    push32(c, 0xf130fu); f_000e693c(c); X86_RET(c, 0xf130fu);
    X86_TICK(c, 9);
    // 0f130f  add esp, 0x1c
    X86_AT(c, 0xf130fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f1312  cmp esi, 0xffffffff
    X86_AT(c, 0xf1312u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0f1315  jne 0xf1321
    X86_AT(c, 0xf1315u);
    if (x86_cc(c, 5)) { goto L_f1321; }
    X86_TICK(c, 9);
    // 0f1317  push 0x542c
    X86_AT(c, 0xf1317u);
    { uint32_t v = 0x542Cu; push32(c, v); }
    // 0f131c  jmp 0xf1695
    X86_AT(c, 0xf131cu);
    goto L_f1695;
L_f1321:
    X86_TICK(c, 9);
    // 0f1321  push 7
    X86_AT(c, 0xf1321u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1323  call 0xe6c68
    X86_AT(c, 0xf1323u);
    push32(c, 0xf1328u); f_000e6c68(c); X86_RET(c, 0xf1328u);
    X86_TICK(c, 11);
    // 0f1328  push 0x5454
    X86_AT(c, 0xf1328u);
    { uint32_t v = 0x5454u; push32(c, v); }
    // 0f132d  push 7
    X86_AT(c, 0xf132du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f132f  call 0xe5654
    X86_AT(c, 0xf132fu);
    push32(c, 0xf1334u); f_000e5654(c); X86_RET(c, 0xf1334u);
    X86_TICK(c, 9);
    // 0f1334  push 7
    X86_AT(c, 0xf1334u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1336  call 0xe1c0c
    X86_AT(c, 0xf1336u);
    push32(c, 0xf133bu); f_000e1c0c(c); X86_RET(c, 0xf133bu);
    X86_TICK(c, 12);
    // 0f133b  xchg ebx, eax
    X86_AT(c, 0xf133bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f133c  push 7
    X86_AT(c, 0xf133cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f133e  call 0xe6c68
    X86_AT(c, 0xf133eu);
    push32(c, 0xf1343u); f_000e6c68(c); X86_RET(c, 0xf1343u);
    X86_TICK(c, 9);
    // 0f1343  add esp, 0x14
    X86_AT(c, 0xf1343u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f1346  and ebx, ebx
    X86_AT(c, 0xf1346u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0f1348  jg 0xf1354
    X86_AT(c, 0xf1348u);
    if (x86_cc(c, 15)) { goto L_f1354; }
    X86_TICK(c, 9);
    // 0f134a  push 0x547c
    X86_AT(c, 0xf134au);
    { uint32_t v = 0x547Cu; push32(c, v); }
    // 0f134f  jmp 0xf1695
    X86_AT(c, 0xf134fu);
    goto L_f1695;
L_f1354:
    X86_TICK(c, 9);
    // 0f1354  push ebx
    X86_AT(c, 0xf1354u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f1355  call 0xf50a4
    X86_AT(c, 0xf1355u);
    push32(c, 0xf135au); f_000f50a4(c); X86_RET(c, 0xf135au);
    X86_TICK(c, 9);
    // 0f135a  add esp, 4
    X86_AT(c, 0xf135au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f135d  inc eax
    X86_AT(c, 0xf135du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f135e  jne 0xf1371
    X86_AT(c, 0xf135eu);
    if (x86_cc(c, 5)) { goto L_f1371; }
    X86_TICK(c, 9);
    // 0f1360  push 0
    X86_AT(c, 0xf1360u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f1362  call 0xe1944
    X86_AT(c, 0xf1362u);
    push32(c, 0xf1367u); f_000e1944(c); X86_RET(c, 0xf1367u);
    X86_TICK(c, 9);
    // 0f1367  push 0x5494
    X86_AT(c, 0xf1367u);
    { uint32_t v = 0x5494u; push32(c, v); }
    // 0f136c  jmp 0xf1525
    X86_AT(c, 0xf136cu);
    goto L_f1525;
L_f1371:
    X86_TICK(c, 25);
    // 0f1371  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1371u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1376  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1376u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1379  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1379u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f137c  shl edx, 5
    X86_AT(c, 0xf137cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f137f  sub edx, eax
    X86_AT(c, 0xf137fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1381  cmp dword ptr [edx + 0xcde99], 3
    X86_AT(c, 0xf1381u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))), 0x3u, 0, 4);
    // 0f1388  jne 0xf139d
    X86_AT(c, 0xf1388u);
    if (x86_cc(c, 5)) { goto L_f139d; }
    X86_TICK(c, 12);
    // 0f138a  cmp dword ptr [edx + 0xcdf57], 2
    X86_AT(c, 0xf138au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x2u, 0, 4);
    // 0f1391  jne 0xf139d
    X86_AT(c, 0xf1391u);
    if (x86_cc(c, 5)) { goto L_f139d; }
    X86_TICK(c, 12);
    // 0f1393  cmp dword ptr [esi*4 + 0xce588], 0
    X86_AT(c, 0xf1393u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE588u))), 0x0u, 0, 4);
    // 0f139b  jne 0xf13a7
    X86_AT(c, 0xf139bu);
    if (x86_cc(c, 5)) { goto L_f13a7; }
L_f139d:
    X86_TICK(c, 9);
    // 0f139d  push 0x54bc
    X86_AT(c, 0xf139du);
    { uint32_t v = 0x54BCu; push32(c, v); }
    // 0f13a2  jmp 0xf1695
    X86_AT(c, 0xf13a2u);
    goto L_f1695;
L_f13a7:
    X86_TICK(c, 11);
    // 0f13a7  mov edx, dword ptr [esi*4 + 0xce588]
    X86_AT(c, 0xf13a7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE588u)));
    // 0f13ae  cmp edx, 1
    X86_AT(c, 0xf13aeu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0f13b1  je 0xf13ca
    X86_AT(c, 0xf13b1u);
    if (x86_cc(c, 4)) { goto L_f13ca; }
    X86_TICK(c, 7);
    // 0f13b3  cmp edx, 2
    X86_AT(c, 0xf13b3u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0f13b6  je 0xf143b
    X86_AT(c, 0xf13b6u);
    if (x86_cc(c, 4)) { goto L_f143b; }
    X86_TICK(c, 7);
    // 0f13bc  cmp edx, 3
    X86_AT(c, 0xf13bcu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0f13bf  je 0xf14b9
    X86_AT(c, 0xf13bfu);
    if (x86_cc(c, 4)) { goto L_f14b9; }
    X86_TICK(c, 7);
    // 0f13c5  jmp 0xf1538
    X86_AT(c, 0xf13c5u);
    goto L_f1538;
L_f13ca:
    X86_TICK(c, 11);
    // 0f13ca  push 0x54e0
    X86_AT(c, 0xf13cau);
    { uint32_t v = 0x54E0u; push32(c, v); }
    // 0f13cf  push 7
    X86_AT(c, 0xf13cfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f13d1  call 0xe5654
    X86_AT(c, 0xf13d1u);
    push32(c, 0xf13d6u); f_000e5654(c); X86_RET(c, 0xf13d6u);
    X86_TICK(c, 9);
    // 0f13d6  push 7
    X86_AT(c, 0xf13d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f13d8  call 0xe6c68
    X86_AT(c, 0xf13d8u);
    push32(c, 0xf13ddu); f_000e6c68(c); X86_RET(c, 0xf13ddu);
    X86_TICK(c, 9);
    // 0f13dd  add esp, 0xc
    X86_AT(c, 0xf13ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f13e0  cmp ebx, 0x1f4
    X86_AT(c, 0xf13e0u);
    (void)x86_sub(c, c.r[3], 0x1F4u, 0, 4);
    // 0f13e6  jl 0xf1690
    X86_AT(c, 0xf13e6u);
    if (x86_cc(c, 12)) { goto L_f1690; }
    X86_TICK(c, 9);
    // 0f13ec  push 5
    X86_AT(c, 0xf13ecu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f13ee  call 0xe1944
    X86_AT(c, 0xf13eeu);
    push32(c, 0xf13f3u); f_000e1944(c); X86_RET(c, 0xf13f3u);
    X86_TICK(c, 11);
    // 0f13f3  push 0x550c
    X86_AT(c, 0xf13f3u);
    { uint32_t v = 0x550Cu; push32(c, v); }
    // 0f13f8  push 7
    X86_AT(c, 0xf13f8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f13fa  call 0xe5654
    X86_AT(c, 0xf13fau);
    push32(c, 0xf13ffu); f_000e5654(c); X86_RET(c, 0xf13ffu);
    X86_TICK(c, 9);
    // 0f13ff  push 7
    X86_AT(c, 0xf13ffu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1401  call 0xe6c68
    X86_AT(c, 0xf1401u);
    push32(c, 0xf1406u); f_000e6c68(c); X86_RET(c, 0xf1406u);
    X86_TICK(c, 33);
    // 0f1406  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1406u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f140b  lea edx, [eax + eax*4]
    X86_AT(c, 0xf140bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f140e  lea edx, [eax + edx*2]
    X86_AT(c, 0xf140eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1411  shl edx, 5
    X86_AT(c, 0xf1411u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1414  sub edx, eax
    X86_AT(c, 0xf1414u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1416  inc dword ptr [edx + 0xcdee3]
    X86_AT(c, 0xf1416u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE3u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f141c  add esp, 0x10
    X86_AT(c, 0xf141cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f141f  cmp dword ptr [edx + 0xcdee3], 0x63
    X86_AT(c, 0xf141fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE3u))), 0x63u, 0, 4);
    // 0f1426  jle 0xf1690
    X86_AT(c, 0xf1426u);
    if (x86_cc(c, 14)) { goto L_f1690; }
    X86_TICK(c, 9);
    // 0f142c  mov dword ptr [edx + 0xcdee3], 0x63
    X86_AT(c, 0xf142cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE3u)), 0x63u);
    // 0f1436  jmp 0xf1690
    X86_AT(c, 0xf1436u);
    goto L_f1690;
L_f143b:
    X86_TICK(c, 11);
    // 0f143b  push 0x5540
    X86_AT(c, 0xf143bu);
    { uint32_t v = 0x5540u; push32(c, v); }
    // 0f1440  push 7
    X86_AT(c, 0xf1440u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1442  call 0xe5654
    X86_AT(c, 0xf1442u);
    push32(c, 0xf1447u); f_000e5654(c); X86_RET(c, 0xf1447u);
    X86_TICK(c, 9);
    // 0f1447  push 7
    X86_AT(c, 0xf1447u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1449  call 0xe6c68
    X86_AT(c, 0xf1449u);
    push32(c, 0xf144eu); f_000e6c68(c); X86_RET(c, 0xf144eu);
    X86_TICK(c, 9);
    // 0f144e  add esp, 0xc
    X86_AT(c, 0xf144eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f1451  cmp ebx, 0x1f4
    X86_AT(c, 0xf1451u);
    (void)x86_sub(c, c.r[3], 0x1F4u, 0, 4);
    // 0f1457  jl 0xf1690
    X86_AT(c, 0xf1457u);
    if (x86_cc(c, 12)) { goto L_f1690; }
    X86_TICK(c, 25);
    // 0f145d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf145du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1462  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1462u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1465  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1465u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1468  shl edx, 5
    X86_AT(c, 0xf1468u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f146b  sub edx, eax
    X86_AT(c, 0xf146bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f146d  cmp dword ptr [edx + 0xcdf8b], 0
    X86_AT(c, 0xf146du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Bu))), 0x0u, 0, 4);
    // 0f1474  je 0xf14af
    X86_AT(c, 0xf1474u);
    if (x86_cc(c, 4)) { goto L_f14af; }
    X86_TICK(c, 9);
    // 0f1476  push 5
    X86_AT(c, 0xf1476u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f1478  call 0xe1944
    X86_AT(c, 0xf1478u);
    push32(c, 0xf147du); f_000e1944(c); X86_RET(c, 0xf147du);
    X86_TICK(c, 11);
    // 0f147d  push 0x5570
    X86_AT(c, 0xf147du);
    { uint32_t v = 0x5570u; push32(c, v); }
    // 0f1482  push 7
    X86_AT(c, 0xf1482u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1484  call 0xe5654
    X86_AT(c, 0xf1484u);
    push32(c, 0xf1489u); f_000e5654(c); X86_RET(c, 0xf1489u);
    X86_TICK(c, 9);
    // 0f1489  push 7
    X86_AT(c, 0xf1489u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f148b  call 0xe6c68
    X86_AT(c, 0xf148bu);
    push32(c, 0xf1490u); f_000e6c68(c); X86_RET(c, 0xf1490u);
    X86_TICK(c, 22);
    // 0f1490  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1490u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1495  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1495u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1498  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1498u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f149b  shl edx, 5
    X86_AT(c, 0xf149bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f149e  sub edx, eax
    X86_AT(c, 0xf149eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f14a0  mov dword ptr [edx + 0xcdee7], 1
    X86_AT(c, 0xf14a0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE7u)), 0x1u);
    // 0f14aa  jmp 0xf168b
    X86_AT(c, 0xf14aau);
    goto L_f168b;
L_f14af:
    X86_TICK(c, 9);
    // 0f14af  push 0x55a4
    X86_AT(c, 0xf14afu);
    { uint32_t v = 0x55A4u; push32(c, v); }
    // 0f14b4  jmp 0xf1695
    X86_AT(c, 0xf14b4u);
    goto L_f1695;
L_f14b9:
    X86_TICK(c, 11);
    // 0f14b9  push 0x55d4
    X86_AT(c, 0xf14b9u);
    { uint32_t v = 0x55D4u; push32(c, v); }
    // 0f14be  push 7
    X86_AT(c, 0xf14beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f14c0  call 0xe5654
    X86_AT(c, 0xf14c0u);
    push32(c, 0xf14c5u); f_000e5654(c); X86_RET(c, 0xf14c5u);
    X86_TICK(c, 9);
    // 0f14c5  push 7
    X86_AT(c, 0xf14c5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f14c7  call 0xe6c68
    X86_AT(c, 0xf14c7u);
    push32(c, 0xf14ccu); f_000e6c68(c); X86_RET(c, 0xf14ccu);
    X86_TICK(c, 9);
    // 0f14cc  add esp, 0xc
    X86_AT(c, 0xf14ccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f14cf  cmp ebx, 0x64
    X86_AT(c, 0xf14cfu);
    (void)x86_sub(c, c.r[3], 0x64u, 0, 4);
    // 0f14d2  jl 0xf1690
    X86_AT(c, 0xf14d2u);
    if (x86_cc(c, 12)) { goto L_f1690; }
    X86_TICK(c, 9);
    // 0f14d8  push 7
    X86_AT(c, 0xf14d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f14da  call 0xe1a7c
    X86_AT(c, 0xf14dau);
    push32(c, 0xf14dfu); f_000e1a7c(c); X86_RET(c, 0xf14dfu);
    X86_TICK(c, 32);
    // 0f14df  xchg esi, eax
    X86_AT(c, 0xf14dfu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0f14e0  inc esi
    X86_AT(c, 0xf14e0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f14e1  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf14e1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f14e6  lea edx, [eax + eax*4]
    X86_AT(c, 0xf14e6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f14e9  lea edx, [eax + edx*2]
    X86_AT(c, 0xf14e9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f14ec  shl edx, 5
    X86_AT(c, 0xf14ecu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f14ef  sub edx, eax
    X86_AT(c, 0xf14efu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f14f1  add esp, 4
    X86_AT(c, 0xf14f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f14f4  cmp dword ptr [edx + esi*4 + 0xcdebf], 0x63
    X86_AT(c, 0xf14f4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xCDEBFu))), 0x63u, 0, 4);
    // 0f14fc  jge 0xf1690
    X86_AT(c, 0xf14fcu);
    if (x86_cc(c, 13)) { goto L_f1690; }
    X86_TICK(c, 9);
    // 0f1502  push 5
    X86_AT(c, 0xf1502u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f1504  call 0xe1944
    X86_AT(c, 0xf1504u);
    push32(c, 0xf1509u); f_000e1944(c); X86_RET(c, 0xf1509u);
    X86_TICK(c, 21);
    // 0f1509  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1509u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f150e  lea edx, [eax + eax*4]
    X86_AT(c, 0xf150eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1511  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1511u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1514  shl edx, 5
    X86_AT(c, 0xf1514u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1517  sub edx, eax
    X86_AT(c, 0xf1517u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1519  inc dword ptr [edx + esi*4 + 0xcdebf]
    X86_AT(c, 0xf1519u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xCDEBFu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f1520  push 0x55fc
    X86_AT(c, 0xf1520u);
    { uint32_t v = 0x55FCu; push32(c, v); }
L_f1525:
    X86_TICK(c, 9);
    // 0f1525  push 7
    X86_AT(c, 0xf1525u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1527  call 0xe5654
    X86_AT(c, 0xf1527u);
    push32(c, 0xf152cu); f_000e5654(c); X86_RET(c, 0xf152cu);
    X86_TICK(c, 9);
    // 0f152c  push 7
    X86_AT(c, 0xf152cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f152e  call 0xe6c68
    X86_AT(c, 0xf152eu);
    push32(c, 0xf1533u); f_000e6c68(c); X86_RET(c, 0xf1533u);
    X86_TICK(c, 7);
    // 0f1533  jmp 0xf168b
    X86_AT(c, 0xf1533u);
    goto L_f168b;
L_f1538:
    X86_TICK(c, 7);
    // 0f1538  cmp ebx, 0x64
    X86_AT(c, 0xf1538u);
    (void)x86_sub(c, c.r[3], 0x64u, 0, 4);
    // 0f153b  jl 0xf1690
    X86_AT(c, 0xf153bu);
    if (x86_cc(c, 12)) { goto L_f1690; }
    X86_TICK(c, 9);
    // 0f1541  push 7
    X86_AT(c, 0xf1541u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1543  call 0xe1a7c
    X86_AT(c, 0xf1543u);
    push32(c, 0xf1548u); f_000e1a7c(c); X86_RET(c, 0xf1548u);
    X86_TICK(c, 12);
    // 0f1548  xchg esi, eax
    X86_AT(c, 0xf1548u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0f1549  add esp, 4
    X86_AT(c, 0xf1549u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f154c  cmp esi, 5
    X86_AT(c, 0xf154cu);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0f154f  jg 0xf1690
    X86_AT(c, 0xf154fu);
    if (x86_cc(c, 15)) { goto L_f1690; }
    X86_TICK(c, 59);
    // 0f1555  xchg ebx, eax
    X86_AT(c, 0xf1555u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f1556  cdq 
    X86_AT(c, 0xf1556u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f1557  mov ecx, 0x64
    X86_AT(c, 0xf1557u);
    c.r[1] = 0x64u;
    // 0f155c  idiv ecx
    X86_AT(c, 0xf155cu);
    x86_idiv(c, c.r[1], 4, 0xf155cu);
    // 0f155e  xchg ebx, eax
    X86_AT(c, 0xf155eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f155f  mov edx, esi
    X86_AT(c, 0xf155fu);
    c.r[2] = c.r[6];
    // 0f1561  cmp edx, 5
    X86_AT(c, 0xf1561u);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0f1564  ja 0xf166c
    X86_AT(c, 0xf1564u);
    if (x86_cc(c, 7)) { goto L_f166c; }
    X86_TICK(c, 7);
    // 0f156a  jmp dword ptr cs:[edx*4 + 0xf1572]
    X86_AT(c, 0xf156au);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF1572u)));
      switch (t) {
      case 0xf158au: goto L_f158a;
      case 0xf15b4u: goto L_f15b4;
      case 0xf15deu: goto L_f15de;
      case 0xf1605u: goto L_f1605;
      case 0xf1628u: goto L_f1628;
      case 0xf164bu: goto L_f164b;
      default: x86_jump(c, t); return; } }
L_f158a:
    X86_TICK(c, 24);
    // 0f158a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf158au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f158f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf158fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1592  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1592u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1595  shl edx, 5
    X86_AT(c, 0xf1595u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1598  sub edx, eax
    X86_AT(c, 0xf1598u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f159a  mov eax, dword ptr [edx + 0xcde62]
    X86_AT(c, 0xf159au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u)));
    // 0f15a0  cmp eax, 0x63
    X86_AT(c, 0xf15a0u);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0f15a3  jge 0xf166c
    X86_AT(c, 0xf15a3u);
    if (x86_cc(c, 13)) { goto L_f166c; }
    X86_TICK(c, 13);
    // 0f15a9  inc dword ptr [edx + 0xcde62]
    X86_AT(c, 0xf15a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f15af  jmp 0xf166c
    X86_AT(c, 0xf15afu);
    goto L_f166c;
L_f15b4:
    X86_TICK(c, 24);
    // 0f15b4  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf15b4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f15b9  lea edx, [eax + eax*4]
    X86_AT(c, 0xf15b9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f15bc  lea edx, [eax + edx*2]
    X86_AT(c, 0xf15bcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f15bf  shl edx, 5
    X86_AT(c, 0xf15bfu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f15c2  sub edx, eax
    X86_AT(c, 0xf15c2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f15c4  mov eax, dword ptr [edx + 0xcde66]
    X86_AT(c, 0xf15c4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)));
    // 0f15ca  cmp eax, 0x63
    X86_AT(c, 0xf15cau);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0f15cd  jge 0xf166c
    X86_AT(c, 0xf15cdu);
    if (x86_cc(c, 13)) { goto L_f166c; }
    X86_TICK(c, 13);
    // 0f15d3  inc dword ptr [edx + 0xcde66]
    X86_AT(c, 0xf15d3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f15d9  jmp 0xf166c
    X86_AT(c, 0xf15d9u);
    goto L_f166c;
L_f15de:
    X86_TICK(c, 24);
    // 0f15de  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf15deu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f15e3  lea edx, [eax + eax*4]
    X86_AT(c, 0xf15e3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f15e6  lea edx, [eax + edx*2]
    X86_AT(c, 0xf15e6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f15e9  shl edx, 5
    X86_AT(c, 0xf15e9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f15ec  sub edx, eax
    X86_AT(c, 0xf15ecu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f15ee  mov eax, dword ptr [edx + 0xcde6a]
    X86_AT(c, 0xf15eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)));
    // 0f15f4  cmp eax, 0x63
    X86_AT(c, 0xf15f4u);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0f15f7  jge 0xf166c
    X86_AT(c, 0xf15f7u);
    if (x86_cc(c, 13)) { goto L_f166c; }
    X86_TICK(c, 13);
    // 0f15fd  inc dword ptr [edx + 0xcde6a]
    X86_AT(c, 0xf15fdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f1603  jmp 0xf166c
    X86_AT(c, 0xf1603u);
    goto L_f166c;
L_f1605:
    X86_TICK(c, 24);
    // 0f1605  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1605u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f160a  lea edx, [eax + eax*4]
    X86_AT(c, 0xf160au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f160d  lea edx, [eax + edx*2]
    X86_AT(c, 0xf160du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1610  shl edx, 5
    X86_AT(c, 0xf1610u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1613  sub edx, eax
    X86_AT(c, 0xf1613u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1615  mov eax, dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xf1615u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu)));
    // 0f161b  cmp eax, 0x63
    X86_AT(c, 0xf161bu);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0f161e  jge 0xf166c
    X86_AT(c, 0xf161eu);
    if (x86_cc(c, 13)) { goto L_f166c; }
    X86_TICK(c, 13);
    // 0f1620  inc dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xf1620u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f1626  jmp 0xf166c
    X86_AT(c, 0xf1626u);
    goto L_f166c;
L_f1628:
    X86_TICK(c, 24);
    // 0f1628  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1628u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f162d  lea edx, [eax + eax*4]
    X86_AT(c, 0xf162du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1630  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1630u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1633  shl edx, 5
    X86_AT(c, 0xf1633u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1636  sub edx, eax
    X86_AT(c, 0xf1636u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1638  mov eax, dword ptr [edx + 0xcde72]
    X86_AT(c, 0xf1638u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u)));
    // 0f163e  cmp eax, 0x63
    X86_AT(c, 0xf163eu);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0f1641  jge 0xf166c
    X86_AT(c, 0xf1641u);
    if (x86_cc(c, 13)) { goto L_f166c; }
    X86_TICK(c, 13);
    // 0f1643  inc dword ptr [edx + 0xcde72]
    X86_AT(c, 0xf1643u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f1649  jmp 0xf166c
    X86_AT(c, 0xf1649u);
    goto L_f166c;
L_f164b:
    X86_TICK(c, 24);
    // 0f164b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf164bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1650  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1650u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1653  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1653u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1656  shl edx, 5
    X86_AT(c, 0xf1656u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1659  sub edx, eax
    X86_AT(c, 0xf1659u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f165b  mov eax, dword ptr [edx + 0xcde76]
    X86_AT(c, 0xf165bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)));
    // 0f1661  cmp eax, 0x63
    X86_AT(c, 0xf1661u);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0f1664  jge 0xf166c
    X86_AT(c, 0xf1664u);
    if (x86_cc(c, 13)) { goto L_f166c; }
    X86_TICK(c, 6);
    // 0f1666  inc dword ptr [edx + 0xcde76]
    X86_AT(c, 0xf1666u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_f166c:
    X86_TICK(c, 9);
    // 0f166c  push 2
    X86_AT(c, 0xf166cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f166e  call 0xe1944
    X86_AT(c, 0xf166eu);
    push32(c, 0xf1673u); f_000e1944(c); X86_RET(c, 0xf1673u);
    X86_TICK(c, 11);
    // 0f1673  push 0x5630
    X86_AT(c, 0xf1673u);
    { uint32_t v = 0x5630u; push32(c, v); }
    // 0f1678  push 7
    X86_AT(c, 0xf1678u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f167a  call 0xe5654
    X86_AT(c, 0xf167au);
    push32(c, 0xf167fu); f_000e5654(c); X86_RET(c, 0xf167fu);
    X86_TICK(c, 9);
    // 0f167f  push 7
    X86_AT(c, 0xf167fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1681  call 0xe6c68
    X86_AT(c, 0xf1681u);
    push32(c, 0xf1686u); f_000e6c68(c); X86_RET(c, 0xf1686u);
    X86_TICK(c, 7);
    // 0f1686  call 0xe1e18
    X86_AT(c, 0xf1686u);
    push32(c, 0xf168bu); f_000e1e18(c); X86_RET(c, 0xf168bu);
L_f168b:
    X86_TICK(c, 9);
    // 0f168b  add esp, 0x10
    X86_AT(c, 0xf168bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f168e  jmp 0xf16a6
    X86_AT(c, 0xf168eu);
    goto L_f16a6;
L_f1690:
    X86_TICK(c, 2);
    // 0f1690  push 0x5650
    X86_AT(c, 0xf1690u);
    { uint32_t v = 0x5650u; push32(c, v); }
L_f1695:
    X86_TICK(c, 9);
    // 0f1695  push 7
    X86_AT(c, 0xf1695u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1697  call 0xe5654
    X86_AT(c, 0xf1697u);
    push32(c, 0xf169cu); f_000e5654(c); X86_RET(c, 0xf169cu);
    X86_TICK(c, 9);
    // 0f169c  push 7
    X86_AT(c, 0xf169cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f169e  call 0xe6c68
    X86_AT(c, 0xf169eu);
    push32(c, 0xf16a3u); f_000e6c68(c); X86_RET(c, 0xf16a3u);
    X86_TICK(c, 2);
    // 0f16a3  add esp, 0xc
    X86_AT(c, 0xf16a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f16a6:
    X86_TICK(c, 28);
    // 0f16a6  pop edi
    X86_AT(c, 0xf16a6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f16a7  pop esi
    X86_AT(c, 0xf16a7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f16a8  pop ebx
    X86_AT(c, 0xf16a8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f16a9  leave 
    X86_AT(c, 0xf16a9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f16aa  ret 
    X86_AT(c, 0xf16aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1294u, "ran off the end of a function");
}
void f_000f166c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f166c  push 2
    X86_AT(c, 0xf166cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f166e  call 0xe1944
    X86_AT(c, 0xf166eu);
    push32(c, 0xf1673u); f_000e1944(c); X86_RET(c, 0xf1673u);
    X86_TICK(c, 11);
    // 0f1673  push 0x5630
    X86_AT(c, 0xf1673u);
    { uint32_t v = 0x5630u; push32(c, v); }
    // 0f1678  push 7
    X86_AT(c, 0xf1678u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f167a  call 0xe5654
    X86_AT(c, 0xf167au);
    push32(c, 0xf167fu); f_000e5654(c); X86_RET(c, 0xf167fu);
    X86_TICK(c, 9);
    // 0f167f  push 7
    X86_AT(c, 0xf167fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1681  call 0xe6c68
    X86_AT(c, 0xf1681u);
    push32(c, 0xf1686u); f_000e6c68(c); X86_RET(c, 0xf1686u);
    X86_TICK(c, 7);
    // 0f1686  call 0xe1e18
    X86_AT(c, 0xf1686u);
    push32(c, 0xf168bu); f_000e1e18(c); X86_RET(c, 0xf168bu);
    X86_TICK(c, 9);
    // 0f168b  add esp, 0x10
    X86_AT(c, 0xf168bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f168e  jmp 0xf16a6
    X86_AT(c, 0xf168eu);
    goto L_f16a6;
L_f16a6:
    X86_TICK(c, 28);
    // 0f16a6  pop edi
    X86_AT(c, 0xf16a6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f16a7  pop esi
    X86_AT(c, 0xf16a7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f16a8  pop ebx
    X86_AT(c, 0xf16a8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f16a9  leave 
    X86_AT(c, 0xf16a9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f16aa  ret 
    X86_AT(c, 0xf16aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf166cu, "ran off the end of a function");
}
void f_000f168b(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f168b  add esp, 0x10
    X86_AT(c, 0xf168bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f168e  jmp 0xf16a6
    X86_AT(c, 0xf168eu);
    goto L_f16a6;
L_f16a6:
    X86_TICK(c, 28);
    // 0f16a6  pop edi
    X86_AT(c, 0xf16a6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f16a7  pop esi
    X86_AT(c, 0xf16a7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f16a8  pop ebx
    X86_AT(c, 0xf16a8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f16a9  leave 
    X86_AT(c, 0xf16a9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f16aa  ret 
    X86_AT(c, 0xf16aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf168bu, "ran off the end of a function");
}
void f_000f1695(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f1695  push 7
    X86_AT(c, 0xf1695u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1697  call 0xe5654
    X86_AT(c, 0xf1697u);
    push32(c, 0xf169cu); f_000e5654(c); X86_RET(c, 0xf169cu);
    X86_TICK(c, 9);
    // 0f169c  push 7
    X86_AT(c, 0xf169cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f169e  call 0xe6c68
    X86_AT(c, 0xf169eu);
    push32(c, 0xf16a3u); f_000e6c68(c); X86_RET(c, 0xf16a3u);
    X86_TICK(c, 30);
    // 0f16a3  add esp, 0xc
    X86_AT(c, 0xf16a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f16a6  pop edi
    X86_AT(c, 0xf16a6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f16a7  pop esi
    X86_AT(c, 0xf16a7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f16a8  pop ebx
    X86_AT(c, 0xf16a8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f16a9  leave 
    X86_AT(c, 0xf16a9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f16aa  ret 
    X86_AT(c, 0xf16aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1695u, "ran off the end of a function");
}
void f_000f16ac(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f16ac  push 7
    X86_AT(c, 0xf16acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f16ae  call 0xf4904
    X86_AT(c, 0xf16aeu);
    push32(c, 0xf16b3u); f_000f4904(c); X86_RET(c, 0xf16b3u);
    X86_TICK(c, 9);
    // 0f16b3  push 7
    X86_AT(c, 0xf16b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f16b5  call 0xe6c68
    X86_AT(c, 0xf16b5u);
    push32(c, 0xf16bau); f_000e6c68(c); X86_RET(c, 0xf16bau);
    X86_TICK(c, 12);
    // 0f16ba  add esp, 8
    X86_AT(c, 0xf16bau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f16bd  ret 
    X86_AT(c, 0xf16bdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf16acu, "ran off the end of a function");
}
void f_000f16c4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f16c4  push 0xb
    X86_AT(c, 0xf16c4u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f16c6  call 0xe1944
    X86_AT(c, 0xf16c6u);
    push32(c, 0xf16cbu); f_000e1944(c); X86_RET(c, 0xf16cbu);
    X86_TICK(c, 9);
    // 0f16cb  push 7
    X86_AT(c, 0xf16cbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f16cd  call 0xe693c
    X86_AT(c, 0xf16cdu);
    push32(c, 0xf16d2u); f_000e693c(c); X86_RET(c, 0xf16d2u);
    X86_TICK(c, 11);
    // 0f16d2  push 0x5674
    X86_AT(c, 0xf16d2u);
    { uint32_t v = 0x5674u; push32(c, v); }
    // 0f16d7  push 7
    X86_AT(c, 0xf16d7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f16d9  call 0xe5654
    X86_AT(c, 0xf16d9u);
    push32(c, 0xf16deu); f_000e5654(c); X86_RET(c, 0xf16deu);
    X86_TICK(c, 9);
    // 0f16de  push 7
    X86_AT(c, 0xf16deu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f16e0  call 0xe6c68
    X86_AT(c, 0xf16e0u);
    push32(c, 0xf16e5u); f_000e6c68(c); X86_RET(c, 0xf16e5u);
    X86_TICK(c, 9);
    // 0f16e5  push 7
    X86_AT(c, 0xf16e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f16e7  call 0xefeb0
    X86_AT(c, 0xf16e7u);
    push32(c, 0xf16ecu); f_000efeb0(c); X86_RET(c, 0xf16ecu);
    X86_TICK(c, 9);
    // 0f16ec  push 7
    X86_AT(c, 0xf16ecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f16ee  call 0xe6c68
    X86_AT(c, 0xf16eeu);
    push32(c, 0xf16f3u); f_000e6c68(c); X86_RET(c, 0xf16f3u);
    X86_TICK(c, 11);
    // 0f16f3  push 0x56e0
    X86_AT(c, 0xf16f3u);
    { uint32_t v = 0x56E0u; push32(c, v); }
    // 0f16f8  push 7
    X86_AT(c, 0xf16f8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f16fa  call 0xe6cb0
    X86_AT(c, 0xf16fau);
    push32(c, 0xf16ffu); f_000e6cb0(c); X86_RET(c, 0xf16ffu);
    X86_TICK(c, 9);
    // 0f16ff  push 7
    X86_AT(c, 0xf16ffu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1701  call 0xe6c68
    X86_AT(c, 0xf1701u);
    push32(c, 0xf1706u); f_000e6c68(c); X86_RET(c, 0xf1706u);
    X86_TICK(c, 11);
    // 0f1706  push 0x5700
    X86_AT(c, 0xf1706u);
    { uint32_t v = 0x5700u; push32(c, v); }
    // 0f170b  push 7
    X86_AT(c, 0xf170bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f170d  call 0xe6cb0
    X86_AT(c, 0xf170du);
    push32(c, 0xf1712u); f_000e6cb0(c); X86_RET(c, 0xf1712u);
    X86_TICK(c, 9);
    // 0f1712  push 7
    X86_AT(c, 0xf1712u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1714  call 0xe6c68
    X86_AT(c, 0xf1714u);
    push32(c, 0xf1719u); f_000e6c68(c); X86_RET(c, 0xf1719u);
    X86_TICK(c, 11);
    // 0f1719  push 0x5714
    X86_AT(c, 0xf1719u);
    { uint32_t v = 0x5714u; push32(c, v); }
    // 0f171e  push 7
    X86_AT(c, 0xf171eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1720  call 0xe6cb0
    X86_AT(c, 0xf1720u);
    push32(c, 0xf1725u); f_000e6cb0(c); X86_RET(c, 0xf1725u);
    X86_TICK(c, 11);
    // 0f1725  add esp, 0x3c
    X86_AT(c, 0xf1725u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f1728  push 7
    X86_AT(c, 0xf1728u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f172a  call 0xe6c68
    X86_AT(c, 0xf172au);
    push32(c, 0xf172fu); f_000e6c68(c); X86_RET(c, 0xf172fu);
    X86_TICK(c, 11);
    // 0f172f  push 0x5730
    X86_AT(c, 0xf172fu);
    { uint32_t v = 0x5730u; push32(c, v); }
    // 0f1734  push 7
    X86_AT(c, 0xf1734u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1736  call 0xe6cb0
    X86_AT(c, 0xf1736u);
    push32(c, 0xf173bu); f_000e6cb0(c); X86_RET(c, 0xf173bu);
    X86_TICK(c, 9);
    // 0f173b  push 7
    X86_AT(c, 0xf173bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f173d  call 0xe6c68
    X86_AT(c, 0xf173du);
    push32(c, 0xf1742u); f_000e6c68(c); X86_RET(c, 0xf1742u);
    X86_TICK(c, 11);
    // 0f1742  push 0x574c
    X86_AT(c, 0xf1742u);
    { uint32_t v = 0x574Cu; push32(c, v); }
    // 0f1747  push 7
    X86_AT(c, 0xf1747u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1749  call 0xe6cb0
    X86_AT(c, 0xf1749u);
    push32(c, 0xf174eu); f_000e6cb0(c); X86_RET(c, 0xf174eu);
    X86_TICK(c, 9);
    // 0f174e  push 7
    X86_AT(c, 0xf174eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1750  call 0xe6c68
    X86_AT(c, 0xf1750u);
    push32(c, 0xf1755u); f_000e6c68(c); X86_RET(c, 0xf1755u);
    X86_TICK(c, 9);
    // 0f1755  push 7
    X86_AT(c, 0xf1755u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1757  call 0xe6c68
    X86_AT(c, 0xf1757u);
    push32(c, 0xf175cu); f_000e6c68(c); X86_RET(c, 0xf175cu);
    X86_TICK(c, 9);
    // 0f175c  push 7
    X86_AT(c, 0xf175cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f175e  call 0xefeb0
    X86_AT(c, 0xf175eu);
    push32(c, 0xf1763u); f_000efeb0(c); X86_RET(c, 0xf1763u);
    X86_TICK(c, 11);
    // 0f1763  push 0x575c
    X86_AT(c, 0xf1763u);
    { uint32_t v = 0x575Cu; push32(c, v); }
    // 0f1768  push 7
    X86_AT(c, 0xf1768u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f176a  call 0xe6cb0
    X86_AT(c, 0xf176au);
    push32(c, 0xf176fu); f_000e6cb0(c); X86_RET(c, 0xf176fu);
    X86_TICK(c, 9);
    // 0f176f  push 7
    X86_AT(c, 0xf176fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1771  call 0xe6c68
    X86_AT(c, 0xf1771u);
    push32(c, 0xf1776u); f_000e6c68(c); X86_RET(c, 0xf1776u);
    X86_TICK(c, 11);
    // 0f1776  push 0x5770
    X86_AT(c, 0xf1776u);
    { uint32_t v = 0x5770u; push32(c, v); }
    // 0f177b  push 7
    X86_AT(c, 0xf177bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f177d  call 0xe6cb0
    X86_AT(c, 0xf177du);
    push32(c, 0xf1782u); f_000e6cb0(c); X86_RET(c, 0xf1782u);
    X86_TICK(c, 11);
    // 0f1782  add esp, 0x38
    X86_AT(c, 0xf1782u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0f1785  push 7
    X86_AT(c, 0xf1785u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1787  call 0xe6c68
    X86_AT(c, 0xf1787u);
    push32(c, 0xf178cu); f_000e6c68(c); X86_RET(c, 0xf178cu);
    X86_TICK(c, 11);
    // 0f178c  push 0x578c
    X86_AT(c, 0xf178cu);
    { uint32_t v = 0x578Cu; push32(c, v); }
    // 0f1791  push 7
    X86_AT(c, 0xf1791u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1793  call 0xe6cb0
    X86_AT(c, 0xf1793u);
    push32(c, 0xf1798u); f_000e6cb0(c); X86_RET(c, 0xf1798u);
    X86_TICK(c, 9);
    // 0f1798  push 7
    X86_AT(c, 0xf1798u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f179a  call 0xe6c68
    X86_AT(c, 0xf179au);
    push32(c, 0xf179fu); f_000e6c68(c); X86_RET(c, 0xf179fu);
    X86_TICK(c, 11);
    // 0f179f  push 0x57a8
    X86_AT(c, 0xf179fu);
    { uint32_t v = 0x57A8u; push32(c, v); }
    // 0f17a4  push 7
    X86_AT(c, 0xf17a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f17a6  call 0xe6cb0
    X86_AT(c, 0xf17a6u);
    push32(c, 0xf17abu); f_000e6cb0(c); X86_RET(c, 0xf17abu);
    X86_TICK(c, 9);
    // 0f17ab  push 7
    X86_AT(c, 0xf17abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f17ad  call 0xe6c68
    X86_AT(c, 0xf17adu);
    push32(c, 0xf17b2u); f_000e6c68(c); X86_RET(c, 0xf17b2u);
    X86_TICK(c, 11);
    // 0f17b2  push 0x57b8
    X86_AT(c, 0xf17b2u);
    { uint32_t v = 0x57B8u; push32(c, v); }
    // 0f17b7  push 7
    X86_AT(c, 0xf17b7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f17b9  call 0xe6cb0
    X86_AT(c, 0xf17b9u);
    push32(c, 0xf17beu); f_000e6cb0(c); X86_RET(c, 0xf17beu);
    X86_TICK(c, 9);
    // 0f17be  push 7
    X86_AT(c, 0xf17beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f17c0  call 0xe6c68
    X86_AT(c, 0xf17c0u);
    push32(c, 0xf17c5u); f_000e6c68(c); X86_RET(c, 0xf17c5u);
    X86_TICK(c, 11);
    // 0f17c5  push 0x57d8
    X86_AT(c, 0xf17c5u);
    { uint32_t v = 0x57D8u; push32(c, v); }
    // 0f17ca  push 7
    X86_AT(c, 0xf17cau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f17cc  call 0xe6cb0
    X86_AT(c, 0xf17ccu);
    push32(c, 0xf17d1u); f_000e6cb0(c); X86_RET(c, 0xf17d1u);
    X86_TICK(c, 9);
    // 0f17d1  push 7
    X86_AT(c, 0xf17d1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f17d3  call 0xe6c68
    X86_AT(c, 0xf17d3u);
    push32(c, 0xf17d8u); f_000e6c68(c); X86_RET(c, 0xf17d8u);
    X86_TICK(c, 11);
    // 0f17d8  push 0x57e8
    X86_AT(c, 0xf17d8u);
    { uint32_t v = 0x57E8u; push32(c, v); }
    // 0f17dd  push 7
    X86_AT(c, 0xf17ddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f17df  call 0xe6cb0
    X86_AT(c, 0xf17dfu);
    push32(c, 0xf17e4u); f_000e6cb0(c); X86_RET(c, 0xf17e4u);
    X86_TICK(c, 11);
    // 0f17e4  add esp, 0x3c
    X86_AT(c, 0xf17e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f17e7  push 7
    X86_AT(c, 0xf17e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f17e9  call 0xefeb0
    X86_AT(c, 0xf17e9u);
    push32(c, 0xf17eeu); f_000efeb0(c); X86_RET(c, 0xf17eeu);
    X86_TICK(c, 9);
    // 0f17ee  push 7
    X86_AT(c, 0xf17eeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f17f0  call 0xe6c68
    X86_AT(c, 0xf17f0u);
    push32(c, 0xf17f5u); f_000e6c68(c); X86_RET(c, 0xf17f5u);
    X86_TICK(c, 11);
    // 0f17f5  push 0x5808
    X86_AT(c, 0xf17f5u);
    { uint32_t v = 0x5808u; push32(c, v); }
    // 0f17fa  push 7
    X86_AT(c, 0xf17fau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f17fc  call 0xe6cb0
    X86_AT(c, 0xf17fcu);
    push32(c, 0xf1801u); f_000e6cb0(c); X86_RET(c, 0xf1801u);
    X86_TICK(c, 9);
    // 0f1801  push 7
    X86_AT(c, 0xf1801u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1803  call 0xe6c68
    X86_AT(c, 0xf1803u);
    push32(c, 0xf1808u); f_000e6c68(c); X86_RET(c, 0xf1808u);
    X86_TICK(c, 11);
    // 0f1808  push 0x5818
    X86_AT(c, 0xf1808u);
    { uint32_t v = 0x5818u; push32(c, v); }
    // 0f180d  push 7
    X86_AT(c, 0xf180du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f180f  call 0xe6cb0
    X86_AT(c, 0xf180fu);
    push32(c, 0xf1814u); f_000e6cb0(c); X86_RET(c, 0xf1814u);
    X86_TICK(c, 9);
    // 0f1814  push 7
    X86_AT(c, 0xf1814u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1816  call 0xe6c68
    X86_AT(c, 0xf1816u);
    push32(c, 0xf181bu); f_000e6c68(c); X86_RET(c, 0xf181bu);
    X86_TICK(c, 11);
    // 0f181b  push 0x5834
    X86_AT(c, 0xf181bu);
    { uint32_t v = 0x5834u; push32(c, v); }
    // 0f1820  push 7
    X86_AT(c, 0xf1820u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1822  call 0xe6cb0
    X86_AT(c, 0xf1822u);
    push32(c, 0xf1827u); f_000e6cb0(c); X86_RET(c, 0xf1827u);
    X86_TICK(c, 9);
    // 0f1827  push 7
    X86_AT(c, 0xf1827u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1829  call 0xe6c68
    X86_AT(c, 0xf1829u);
    push32(c, 0xf182eu); f_000e6c68(c); X86_RET(c, 0xf182eu);
    X86_TICK(c, 11);
    // 0f182e  push 0x5850
    X86_AT(c, 0xf182eu);
    { uint32_t v = 0x5850u; push32(c, v); }
    // 0f1833  push 7
    X86_AT(c, 0xf1833u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1835  call 0xe6cb0
    X86_AT(c, 0xf1835u);
    push32(c, 0xf183au); f_000e6cb0(c); X86_RET(c, 0xf183au);
    X86_TICK(c, 9);
    // 0f183a  push 7
    X86_AT(c, 0xf183au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f183c  call 0xe6c68
    X86_AT(c, 0xf183cu);
    push32(c, 0xf1841u); f_000e6c68(c); X86_RET(c, 0xf1841u);
    X86_TICK(c, 9);
    // 0f1841  push 7
    X86_AT(c, 0xf1841u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1843  call 0xe693c
    X86_AT(c, 0xf1843u);
    push32(c, 0xf1848u); f_000e693c(c); X86_RET(c, 0xf1848u);
    X86_TICK(c, 12);
    // 0f1848  add esp, 0x3c
    X86_AT(c, 0xf1848u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f184b  ret 
    X86_AT(c, 0xf184bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf16c4u, "ran off the end of a function");
}
void f_000f184c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f184c  push 7
    X86_AT(c, 0xf184cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f184e  call 0xe693c
    X86_AT(c, 0xf184eu);
    push32(c, 0xf1853u); f_000e693c(c); X86_RET(c, 0xf1853u);
    X86_TICK(c, 7);
    // 0f1853  call 0xe1994
    X86_AT(c, 0xf1853u);
    push32(c, 0xf1858u); f_000e1994(c); X86_RET(c, 0xf1858u);
    X86_TICK(c, 12);
    // 0f1858  add esp, 4
    X86_AT(c, 0xf1858u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f185b  xchg edx, eax
    X86_AT(c, 0xf185bu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0f185c  cmp edx, 3
    X86_AT(c, 0xf185cu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0f185f  ja 0xf193c
    X86_AT(c, 0xf185fu);
    if (x86_cc(c, 7)) { goto L_f193c; }
    X86_TICK(c, 7);
    // 0f1865  jmp dword ptr cs:[edx*4 + 0xf186d]
    X86_AT(c, 0xf1865u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF186Du)));
      switch (t) {
      case 0xf187du: goto L_f187d;
      case 0xf18adu: goto L_f18ad;
      case 0xf18dau: goto L_f18da;
      case 0xf1907u: goto L_f1907;
      default: x86_jump(c, t); return; } }
L_f187d:
    X86_TICK(c, 11);
    // 0f187d  push 0x586c
    X86_AT(c, 0xf187du);
    { uint32_t v = 0x586Cu; push32(c, v); }
    // 0f1882  push 7
    X86_AT(c, 0xf1882u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1884  call 0xe5654
    X86_AT(c, 0xf1884u);
    push32(c, 0xf1889u); f_000e5654(c); X86_RET(c, 0xf1889u);
    X86_TICK(c, 9);
    // 0f1889  push 7
    X86_AT(c, 0xf1889u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f188b  call 0xe6c68
    X86_AT(c, 0xf188bu);
    push32(c, 0xf1890u); f_000e6c68(c); X86_RET(c, 0xf1890u);
    X86_TICK(c, 11);
    // 0f1890  push 0x5898
    X86_AT(c, 0xf1890u);
    { uint32_t v = 0x5898u; push32(c, v); }
    // 0f1895  push 7
    X86_AT(c, 0xf1895u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1897  call 0xe6cb0
    X86_AT(c, 0xf1897u);
    push32(c, 0xf189cu); f_000e6cb0(c); X86_RET(c, 0xf189cu);
    X86_TICK(c, 9);
    // 0f189c  push 7
    X86_AT(c, 0xf189cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f189e  call 0xe6c68
    X86_AT(c, 0xf189eu);
    push32(c, 0xf18a3u); f_000e6c68(c); X86_RET(c, 0xf18a3u);
    X86_TICK(c, 9);
    // 0f18a3  push 0x58a8
    X86_AT(c, 0xf18a3u);
    { uint32_t v = 0x58A8u; push32(c, v); }
    // 0f18a8  jmp 0xf1932
    X86_AT(c, 0xf18a8u);
    goto L_f1932;
L_f18ad:
    X86_TICK(c, 11);
    // 0f18ad  push 0x58b8
    X86_AT(c, 0xf18adu);
    { uint32_t v = 0x58B8u; push32(c, v); }
    // 0f18b2  push 7
    X86_AT(c, 0xf18b2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f18b4  call 0xe5654
    X86_AT(c, 0xf18b4u);
    push32(c, 0xf18b9u); f_000e5654(c); X86_RET(c, 0xf18b9u);
    X86_TICK(c, 9);
    // 0f18b9  push 7
    X86_AT(c, 0xf18b9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f18bb  call 0xe6c68
    X86_AT(c, 0xf18bbu);
    push32(c, 0xf18c0u); f_000e6c68(c); X86_RET(c, 0xf18c0u);
    X86_TICK(c, 11);
    // 0f18c0  push 0x58e4
    X86_AT(c, 0xf18c0u);
    { uint32_t v = 0x58E4u; push32(c, v); }
    // 0f18c5  push 7
    X86_AT(c, 0xf18c5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f18c7  call 0xe6cb0
    X86_AT(c, 0xf18c7u);
    push32(c, 0xf18ccu); f_000e6cb0(c); X86_RET(c, 0xf18ccu);
    X86_TICK(c, 9);
    // 0f18cc  push 7
    X86_AT(c, 0xf18ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f18ce  call 0xe6c68
    X86_AT(c, 0xf18ceu);
    push32(c, 0xf18d3u); f_000e6c68(c); X86_RET(c, 0xf18d3u);
    X86_TICK(c, 9);
    // 0f18d3  push 0x58f8
    X86_AT(c, 0xf18d3u);
    { uint32_t v = 0x58F8u; push32(c, v); }
    // 0f18d8  jmp 0xf1932
    X86_AT(c, 0xf18d8u);
    goto L_f1932;
L_f18da:
    X86_TICK(c, 11);
    // 0f18da  push 0x5908
    X86_AT(c, 0xf18dau);
    { uint32_t v = 0x5908u; push32(c, v); }
    // 0f18df  push 7
    X86_AT(c, 0xf18dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f18e1  call 0xe5654
    X86_AT(c, 0xf18e1u);
    push32(c, 0xf18e6u); f_000e5654(c); X86_RET(c, 0xf18e6u);
    X86_TICK(c, 9);
    // 0f18e6  push 7
    X86_AT(c, 0xf18e6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f18e8  call 0xe6c68
    X86_AT(c, 0xf18e8u);
    push32(c, 0xf18edu); f_000e6c68(c); X86_RET(c, 0xf18edu);
    X86_TICK(c, 11);
    // 0f18ed  push 0x5934
    X86_AT(c, 0xf18edu);
    { uint32_t v = 0x5934u; push32(c, v); }
    // 0f18f2  push 7
    X86_AT(c, 0xf18f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f18f4  call 0xe6cb0
    X86_AT(c, 0xf18f4u);
    push32(c, 0xf18f9u); f_000e6cb0(c); X86_RET(c, 0xf18f9u);
    X86_TICK(c, 9);
    // 0f18f9  push 7
    X86_AT(c, 0xf18f9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f18fb  call 0xe6c68
    X86_AT(c, 0xf18fbu);
    push32(c, 0xf1900u); f_000e6c68(c); X86_RET(c, 0xf1900u);
    X86_TICK(c, 9);
    // 0f1900  push 0x5944
    X86_AT(c, 0xf1900u);
    { uint32_t v = 0x5944u; push32(c, v); }
    // 0f1905  jmp 0xf1932
    X86_AT(c, 0xf1905u);
    goto L_f1932;
L_f1907:
    X86_TICK(c, 11);
    // 0f1907  push 0x5958
    X86_AT(c, 0xf1907u);
    { uint32_t v = 0x5958u; push32(c, v); }
    // 0f190c  push 7
    X86_AT(c, 0xf190cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f190e  call 0xe5654
    X86_AT(c, 0xf190eu);
    push32(c, 0xf1913u); f_000e5654(c); X86_RET(c, 0xf1913u);
    X86_TICK(c, 9);
    // 0f1913  push 7
    X86_AT(c, 0xf1913u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1915  call 0xe6c68
    X86_AT(c, 0xf1915u);
    push32(c, 0xf191au); f_000e6c68(c); X86_RET(c, 0xf191au);
    X86_TICK(c, 11);
    // 0f191a  push 0x5984
    X86_AT(c, 0xf191au);
    { uint32_t v = 0x5984u; push32(c, v); }
    // 0f191f  push 7
    X86_AT(c, 0xf191fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1921  call 0xe6cb0
    X86_AT(c, 0xf1921u);
    push32(c, 0xf1926u); f_000e6cb0(c); X86_RET(c, 0xf1926u);
    X86_TICK(c, 9);
    // 0f1926  push 7
    X86_AT(c, 0xf1926u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1928  call 0xe6c68
    X86_AT(c, 0xf1928u);
    push32(c, 0xf192du); f_000e6c68(c); X86_RET(c, 0xf192du);
    X86_TICK(c, 2);
    // 0f192d  push 0x5998
    X86_AT(c, 0xf192du);
    { uint32_t v = 0x5998u; push32(c, v); }
L_f1932:
    X86_TICK(c, 9);
    // 0f1932  push 7
    X86_AT(c, 0xf1932u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1934  call 0xe6cb0
    X86_AT(c, 0xf1934u);
    push32(c, 0xf1939u); f_000e6cb0(c); X86_RET(c, 0xf1939u);
    X86_TICK(c, 2);
    // 0f1939  add esp, 0x20
    X86_AT(c, 0xf1939u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_f193c:
    X86_TICK(c, 9);
    // 0f193c  push 7
    X86_AT(c, 0xf193cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f193e  call 0xe6c68
    X86_AT(c, 0xf193eu);
    push32(c, 0xf1943u); f_000e6c68(c); X86_RET(c, 0xf1943u);
    X86_TICK(c, 12);
    // 0f1943  add esp, 4
    X86_AT(c, 0xf1943u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f1946  ret 
    X86_AT(c, 0xf1946u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf184cu, "ran off the end of a function");
}
void f_000f1948(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0f1948  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1948u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f194d  lea edx, [eax + eax*4]
    X86_AT(c, 0xf194du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1950  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1950u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1953  shl edx, 5
    X86_AT(c, 0xf1953u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1956  sub edx, eax
    X86_AT(c, 0xf1956u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1958  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xf1958u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0f195c  add dword ptr [edx + 0xcdf53], eax
    X86_AT(c, 0xf195cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF53u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0f1962  ret 
    X86_AT(c, 0xf1962u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1948u, "ran off the end of a function");
}
void f_000f1964(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f1964  push 7
    X86_AT(c, 0xf1964u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1966  call 0xe693c
    X86_AT(c, 0xf1966u);
    push32(c, 0xf196bu); f_000e693c(c); X86_RET(c, 0xf196bu);
    X86_TICK(c, 11);
    // 0f196b  push 0x59ac
    X86_AT(c, 0xf196bu);
    { uint32_t v = 0x59ACu; push32(c, v); }
    // 0f1970  push 7
    X86_AT(c, 0xf1970u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1972  call 0xe5654
    X86_AT(c, 0xf1972u);
    push32(c, 0xf1977u); f_000e5654(c); X86_RET(c, 0xf1977u);
    X86_TICK(c, 9);
    // 0f1977  push 7
    X86_AT(c, 0xf1977u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1979  call 0xe6c68
    X86_AT(c, 0xf1979u);
    push32(c, 0xf197eu); f_000e6c68(c); X86_RET(c, 0xf197eu);
    X86_TICK(c, 7);
    // 0f197e  call 0xf1988
    X86_AT(c, 0xf197eu);
    push32(c, 0xf1983u); f_000f1988(c); X86_RET(c, 0xf1983u);
    X86_TICK(c, 12);
    // 0f1983  add esp, 0x10
    X86_AT(c, 0xf1983u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f1986  ret 
    X86_AT(c, 0xf1986u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1964u, "ran off the end of a function");
}
void f_000f1988(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0f1988  push ebp
    X86_AT(c, 0xf1988u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f1989  mov ebp, esp
    X86_AT(c, 0xf1989u);
    c.r[5] = c.r[4];
    // 0f198b  push eax
    X86_AT(c, 0xf198bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f198c  push ebx
    X86_AT(c, 0xf198cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f198d  push edi
    X86_AT(c, 0xf198du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f198e  push 7
    X86_AT(c, 0xf198eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1990  call 0xe693c
    X86_AT(c, 0xf1990u);
    push32(c, 0xf1995u); f_000e693c(c); X86_RET(c, 0xf1995u);
    X86_TICK(c, 11);
    // 0f1995  push 0x59dc
    X86_AT(c, 0xf1995u);
    { uint32_t v = 0x59DCu; push32(c, v); }
    // 0f199a  push 7
    X86_AT(c, 0xf199au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f199c  call 0xe5654
    X86_AT(c, 0xf199cu);
    push32(c, 0xf19a1u); f_000e5654(c); X86_RET(c, 0xf19a1u);
    X86_TICK(c, 9);
    // 0f19a1  push 7
    X86_AT(c, 0xf19a1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f19a3  call 0xe6c68
    X86_AT(c, 0xf19a3u);
    push32(c, 0xf19a8u); f_000e6c68(c); X86_RET(c, 0xf19a8u);
    X86_TICK(c, 11);
    // 0f19a8  push 0x5a18
    X86_AT(c, 0xf19a8u);
    { uint32_t v = 0x5A18u; push32(c, v); }
    // 0f19ad  push 7
    X86_AT(c, 0xf19adu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f19af  call 0xe5654
    X86_AT(c, 0xf19afu);
    push32(c, 0xf19b4u); f_000e5654(c); X86_RET(c, 0xf19b4u);
    X86_TICK(c, 9);
    // 0f19b4  push 7
    X86_AT(c, 0xf19b4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f19b6  call 0xe6c68
    X86_AT(c, 0xf19b6u);
    push32(c, 0xf19bbu); f_000e6c68(c); X86_RET(c, 0xf19bbu);
    X86_TICK(c, 11);
    // 0f19bb  push 0x5a54
    X86_AT(c, 0xf19bbu);
    { uint32_t v = 0x5A54u; push32(c, v); }
    // 0f19c0  push 7
    X86_AT(c, 0xf19c0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f19c2  call 0xe5654
    X86_AT(c, 0xf19c2u);
    push32(c, 0xf19c7u); f_000e5654(c); X86_RET(c, 0xf19c7u);
    X86_TICK(c, 9);
    // 0f19c7  push 7
    X86_AT(c, 0xf19c7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f19c9  call 0xe6c68
    X86_AT(c, 0xf19c9u);
    push32(c, 0xf19ceu); f_000e6c68(c); X86_RET(c, 0xf19ceu);
    X86_TICK(c, 11);
    // 0f19ce  push 0x5a90
    X86_AT(c, 0xf19ceu);
    { uint32_t v = 0x5A90u; push32(c, v); }
    // 0f19d3  push 7
    X86_AT(c, 0xf19d3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f19d5  call 0xe5654
    X86_AT(c, 0xf19d5u);
    push32(c, 0xf19dau); f_000e5654(c); X86_RET(c, 0xf19dau);
    X86_TICK(c, 9);
    // 0f19da  push 7
    X86_AT(c, 0xf19dau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f19dc  call 0xe6c68
    X86_AT(c, 0xf19dcu);
    push32(c, 0xf19e1u); f_000e6c68(c); X86_RET(c, 0xf19e1u);
    X86_TICK(c, 11);
    // 0f19e1  push 0x5acc
    X86_AT(c, 0xf19e1u);
    { uint32_t v = 0x5ACCu; push32(c, v); }
    // 0f19e6  push 7
    X86_AT(c, 0xf19e6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f19e8  call 0xe5654
    X86_AT(c, 0xf19e8u);
    push32(c, 0xf19edu); f_000e5654(c); X86_RET(c, 0xf19edu);
    X86_TICK(c, 2);
    // 0f19ed  add esp, 0x3c
    X86_AT(c, 0xf19edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
L_f19f0:
    X86_TICK(c, 9);
    // 0f19f0  push 7
    X86_AT(c, 0xf19f0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f19f2  call 0xe4748
    X86_AT(c, 0xf19f2u);
    push32(c, 0xf19f7u); f_000e4748(c); X86_RET(c, 0xf19f7u);
    X86_TICK(c, 12);
    // 0f19f7  xchg ebx, eax
    X86_AT(c, 0xf19f7u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f19f8  add esp, 4
    X86_AT(c, 0xf19f8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f19fb  cmp bl, 1
    X86_AT(c, 0xf19fbu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f19fe  je 0xf1a1a
    X86_AT(c, 0xf19feu);
    if (x86_cc(c, 4)) { goto L_f1a1a; }
    X86_TICK(c, 7);
    // 0f1a00  cmp bl, 0x41
    X86_AT(c, 0xf1a00u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0f1a03  jb 0xf1a0a
    X86_AT(c, 0xf1a03u);
    if (x86_cc(c, 2)) { goto L_f1a0a; }
    X86_TICK(c, 7);
    // 0f1a05  cmp bl, 0x4a
    X86_AT(c, 0xf1a05u);
    (void)x86_sub(c, g8(c, 3), 0x4Au, 0, 1);
    // 0f1a08  jbe 0xf1a1a
    X86_AT(c, 0xf1a08u);
    if (x86_cc(c, 6)) { goto L_f1a1a; }
L_f1a0a:
    X86_TICK(c, 7);
    // 0f1a0a  and bl, bl
    X86_AT(c, 0xf1a0au);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0f1a0c  je 0xf19f0
    X86_AT(c, 0xf1a0cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf19f0u); goto L_f19f0; }
    X86_TICK(c, 9);
    // 0f1a0e  push 1
    X86_AT(c, 0xf1a0eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f1a10  call 0xe1944
    X86_AT(c, 0xf1a10u);
    push32(c, 0xf1a15u); f_000e1944(c); X86_RET(c, 0xf1a15u);
    X86_TICK(c, 9);
    // 0f1a15  add esp, 4
    X86_AT(c, 0xf1a15u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f1a18  jmp 0xf19f0
    X86_AT(c, 0xf1a18u);
    X86_POLL(c, 0xf19f0u); goto L_f19f0;
L_f1a1a:
    X86_TICK(c, 7);
    // 0f1a1a  cmp bl, 1
    X86_AT(c, 0xf1a1au);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f1a1d  jne 0xf1a37
    X86_AT(c, 0xf1a1du);
    if (x86_cc(c, 5)) { goto L_f1a37; }
    X86_TICK(c, 11);
    // 0f1a1f  push 0x5b04
    X86_AT(c, 0xf1a1fu);
    { uint32_t v = 0x5B04u; push32(c, v); }
    // 0f1a24  push 7
    X86_AT(c, 0xf1a24u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1a26  call 0xe5654
    X86_AT(c, 0xf1a26u);
    push32(c, 0xf1a2bu); f_000e5654(c); X86_RET(c, 0xf1a2bu);
    X86_TICK(c, 9);
    // 0f1a2b  push 7
    X86_AT(c, 0xf1a2bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1a2d  call 0xe6c68
    X86_AT(c, 0xf1a2du);
    push32(c, 0xf1a32u); f_000e6c68(c); X86_RET(c, 0xf1a32u);
    X86_TICK(c, 7);
    // 0f1a32  jmp 0xf1afe
    X86_AT(c, 0xf1a32u);
    goto L_f1afe;
L_f1a37:
    X86_TICK(c, 19);
    // 0f1a37  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf1a37u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f1a3b  lea eax, [ebp - 1]
    X86_AT(c, 0xf1a3bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f1a3e  push eax
    X86_AT(c, 0xf1a3eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f1a3f  push ebx
    X86_AT(c, 0xf1a3fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f1a40  push 0xa
    X86_AT(c, 0xf1a40u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f1a42  push 0xcfbe8
    X86_AT(c, 0xf1a42u);
    { uint32_t v = 0xCFBE8u; push32(c, v); }
    // 0f1a47  call 0xe53e0
    X86_AT(c, 0xf1a47u);
    push32(c, 0xf1a4cu); f_000e53e0(c); X86_RET(c, 0xf1a4cu);
    X86_TICK(c, 11);
    // 0f1a4c  push eax
    X86_AT(c, 0xf1a4cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f1a4d  push 7
    X86_AT(c, 0xf1a4du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1a4f  call 0xe6cb0
    X86_AT(c, 0xf1a4fu);
    push32(c, 0xf1a54u); f_000e6cb0(c); X86_RET(c, 0xf1a54u);
    X86_TICK(c, 9);
    // 0f1a54  push 7
    X86_AT(c, 0xf1a54u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1a56  call 0xe6c68
    X86_AT(c, 0xf1a56u);
    push32(c, 0xf1a5bu); f_000e6c68(c); X86_RET(c, 0xf1a5bu);
    X86_TICK(c, 36);
    // 0f1a5b  movzx edi, bl
    X86_AT(c, 0xf1a5bu);
    c.r[7] = g8(c, 3);
    // 0f1a5e  sub edi, 0x41
    X86_AT(c, 0xf1a5eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0f1a61  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1a61u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1a66  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1a66u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1a69  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1a69u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1a6c  shl edx, 5
    X86_AT(c, 0xf1a6cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1a6f  sub edx, eax
    X86_AT(c, 0xf1a6fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1a71  add esp, 0x1c
    X86_AT(c, 0xf1a71u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f1a74  mov eax, edi
    X86_AT(c, 0xf1a74u);
    c.r[0] = c.r[7];
    // 0f1a76  shl eax, 3
    X86_AT(c, 0xf1a76u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0f1a79  cmp eax, dword ptr [edx + 0xcde66]
    X86_AT(c, 0xf1a79u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u))), 0, 4);
    // 0f1a7f  jle 0xf1a8f
    X86_AT(c, 0xf1a7fu);
    if (x86_cc(c, 14)) { goto L_f1a8f; }
    X86_TICK(c, 9);
    // 0f1a81  push 3
    X86_AT(c, 0xf1a81u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f1a83  call 0xe1944
    X86_AT(c, 0xf1a83u);
    push32(c, 0xf1a88u); f_000e1944(c); X86_RET(c, 0xf1a88u);
    X86_TICK(c, 9);
    // 0f1a88  push 0x5b1c
    X86_AT(c, 0xf1a88u);
    { uint32_t v = 0x5B1Cu; push32(c, v); }
    // 0f1a8d  jmp 0xf1ab9
    X86_AT(c, 0xf1a8du);
    goto L_f1ab9;
L_f1a8f:
    X86_TICK(c, 7);
    // 0f1a8f  and edi, edi
    X86_AT(c, 0xf1a8fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f1a91  je 0xf1acc
    X86_AT(c, 0xf1a91u);
    if (x86_cc(c, 4)) { goto L_f1acc; }
    X86_TICK(c, 25);
    // 0f1a93  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1a93u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1a98  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1a98u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1a9b  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1a9bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1a9e  shl edx, 5
    X86_AT(c, 0xf1a9eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1aa1  sub edx, eax
    X86_AT(c, 0xf1aa1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1aa3  cmp dword ptr [edx + edi*4 + 0xcdebf], 1
    X86_AT(c, 0xf1aa3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEBFu))), 0x1u, 0, 4);
    // 0f1aab  jge 0xf1acc
    X86_AT(c, 0xf1aabu);
    if (x86_cc(c, 13)) { goto L_f1acc; }
    X86_TICK(c, 9);
    // 0f1aad  push 0
    X86_AT(c, 0xf1aadu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f1aaf  call 0xe1944
    X86_AT(c, 0xf1aafu);
    push32(c, 0xf1ab4u); f_000e1944(c); X86_RET(c, 0xf1ab4u);
    X86_TICK(c, 2);
    // 0f1ab4  push 0x5b80
    X86_AT(c, 0xf1ab4u);
    { uint32_t v = 0x5B80u; push32(c, v); }
L_f1ab9:
    X86_TICK(c, 9);
    // 0f1ab9  push 7
    X86_AT(c, 0xf1ab9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1abb  call 0xe5654
    X86_AT(c, 0xf1abbu);
    push32(c, 0xf1ac0u); f_000e5654(c); X86_RET(c, 0xf1ac0u);
    X86_TICK(c, 9);
    // 0f1ac0  push 7
    X86_AT(c, 0xf1ac0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1ac2  call 0xe6c68
    X86_AT(c, 0xf1ac2u);
    push32(c, 0xf1ac7u); f_000e6c68(c); X86_RET(c, 0xf1ac7u);
    X86_TICK(c, 9);
    // 0f1ac7  add esp, 0x10
    X86_AT(c, 0xf1ac7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f1aca  jmp 0xf1b01
    X86_AT(c, 0xf1acau);
    goto L_f1b01;
L_f1acc:
    X86_TICK(c, 30);
    // 0f1acc  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1accu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1ad1  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1ad1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1ad4  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1ad4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1ad7  shl edx, 5
    X86_AT(c, 0xf1ad7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1ada  sub edx, eax
    X86_AT(c, 0xf1adau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1adc  mov eax, edi
    X86_AT(c, 0xf1adcu);
    c.r[0] = c.r[7];
    // 0f1ade  add al, 0x41
    X86_AT(c, 0xf1adeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f1ae0  mov byte ptr [edx + 0xcdebe], al
    X86_AT(c, 0xf1ae0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu)), g8(c, 0));
    // 0f1ae6  push 0x5bac
    X86_AT(c, 0xf1ae6u);
    { uint32_t v = 0x5BACu; push32(c, v); }
    // 0f1aeb  push 7
    X86_AT(c, 0xf1aebu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1aed  call 0xe5654
    X86_AT(c, 0xf1aedu);
    push32(c, 0xf1af2u); f_000e5654(c); X86_RET(c, 0xf1af2u);
    X86_TICK(c, 9);
    // 0f1af2  push 7
    X86_AT(c, 0xf1af2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1af4  call 0xe6c68
    X86_AT(c, 0xf1af4u);
    push32(c, 0xf1af9u); f_000e6c68(c); X86_RET(c, 0xf1af9u);
    X86_TICK(c, 7);
    // 0f1af9  call 0xe1e18
    X86_AT(c, 0xf1af9u);
    push32(c, 0xf1afeu); f_000e1e18(c); X86_RET(c, 0xf1afeu);
L_f1afe:
    X86_TICK(c, 2);
    // 0f1afe  add esp, 0xc
    X86_AT(c, 0xf1afeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f1b01:
    X86_TICK(c, 24);
    // 0f1b01  pop edi
    X86_AT(c, 0xf1b01u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f1b02  pop ebx
    X86_AT(c, 0xf1b02u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f1b03  leave 
    X86_AT(c, 0xf1b03u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f1b04  ret 
    X86_AT(c, 0xf1b04u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1988u, "ran off the end of a function");
}
void f_000f1b08(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f1b08  push 7
    X86_AT(c, 0xf1b08u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b0a  call 0xe693c
    X86_AT(c, 0xf1b0au);
    push32(c, 0xf1b0fu); f_000e693c(c); X86_RET(c, 0xf1b0fu);
    X86_TICK(c, 11);
    // 0f1b0f  push 0x5bc4
    X86_AT(c, 0xf1b0fu);
    { uint32_t v = 0x5BC4u; push32(c, v); }
    // 0f1b14  push 7
    X86_AT(c, 0xf1b14u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b16  call 0xe5654
    X86_AT(c, 0xf1b16u);
    push32(c, 0xf1b1bu); f_000e5654(c); X86_RET(c, 0xf1b1bu);
    X86_TICK(c, 9);
    // 0f1b1b  push 7
    X86_AT(c, 0xf1b1bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b1d  call 0xe6c68
    X86_AT(c, 0xf1b1du);
    push32(c, 0xf1b22u); f_000e6c68(c); X86_RET(c, 0xf1b22u);
    X86_TICK(c, 7);
    // 0f1b22  call 0xf1b2c
    X86_AT(c, 0xf1b22u);
    push32(c, 0xf1b27u); f_000f1b2c(c); X86_RET(c, 0xf1b27u);
    X86_TICK(c, 12);
    // 0f1b27  add esp, 0x10
    X86_AT(c, 0xf1b27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f1b2a  ret 
    X86_AT(c, 0xf1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1b08u, "ran off the end of a function");
}
void f_000f1b2c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0f1b2c  push ebp
    X86_AT(c, 0xf1b2cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f1b2d  mov ebp, esp
    X86_AT(c, 0xf1b2du);
    c.r[5] = c.r[4];
    // 0f1b2f  push eax
    X86_AT(c, 0xf1b2fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f1b30  push ebx
    X86_AT(c, 0xf1b30u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f1b31  push edi
    X86_AT(c, 0xf1b31u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f1b32  push 7
    X86_AT(c, 0xf1b32u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b34  call 0xe693c
    X86_AT(c, 0xf1b34u);
    push32(c, 0xf1b39u); f_000e693c(c); X86_RET(c, 0xf1b39u);
    X86_TICK(c, 11);
    // 0f1b39  push 0x5bf8
    X86_AT(c, 0xf1b39u);
    { uint32_t v = 0x5BF8u; push32(c, v); }
    // 0f1b3e  push 7
    X86_AT(c, 0xf1b3eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b40  call 0xe5654
    X86_AT(c, 0xf1b40u);
    push32(c, 0xf1b45u); f_000e5654(c); X86_RET(c, 0xf1b45u);
    X86_TICK(c, 9);
    // 0f1b45  push 7
    X86_AT(c, 0xf1b45u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b47  call 0xe6c68
    X86_AT(c, 0xf1b47u);
    push32(c, 0xf1b4cu); f_000e6c68(c); X86_RET(c, 0xf1b4cu);
    X86_TICK(c, 11);
    // 0f1b4c  push 0x5c34
    X86_AT(c, 0xf1b4cu);
    { uint32_t v = 0x5C34u; push32(c, v); }
    // 0f1b51  push 7
    X86_AT(c, 0xf1b51u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b53  call 0xe5654
    X86_AT(c, 0xf1b53u);
    push32(c, 0xf1b58u); f_000e5654(c); X86_RET(c, 0xf1b58u);
    X86_TICK(c, 9);
    // 0f1b58  push 7
    X86_AT(c, 0xf1b58u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b5a  call 0xe6c68
    X86_AT(c, 0xf1b5au);
    push32(c, 0xf1b5fu); f_000e6c68(c); X86_RET(c, 0xf1b5fu);
    X86_TICK(c, 11);
    // 0f1b5f  push 0x5c74
    X86_AT(c, 0xf1b5fu);
    { uint32_t v = 0x5C74u; push32(c, v); }
    // 0f1b64  push 7
    X86_AT(c, 0xf1b64u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b66  call 0xe5654
    X86_AT(c, 0xf1b66u);
    push32(c, 0xf1b6bu); f_000e5654(c); X86_RET(c, 0xf1b6bu);
    X86_TICK(c, 9);
    // 0f1b6b  push 7
    X86_AT(c, 0xf1b6bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b6d  call 0xe6c68
    X86_AT(c, 0xf1b6du);
    push32(c, 0xf1b72u); f_000e6c68(c); X86_RET(c, 0xf1b72u);
    X86_TICK(c, 11);
    // 0f1b72  push 0x5cb4
    X86_AT(c, 0xf1b72u);
    { uint32_t v = 0x5CB4u; push32(c, v); }
    // 0f1b77  push 7
    X86_AT(c, 0xf1b77u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b79  call 0xe5654
    X86_AT(c, 0xf1b79u);
    push32(c, 0xf1b7eu); f_000e5654(c); X86_RET(c, 0xf1b7eu);
    X86_TICK(c, 9);
    // 0f1b7e  push 7
    X86_AT(c, 0xf1b7eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b80  call 0xe6c68
    X86_AT(c, 0xf1b80u);
    push32(c, 0xf1b85u); f_000e6c68(c); X86_RET(c, 0xf1b85u);
    X86_TICK(c, 11);
    // 0f1b85  push 0x5cf0
    X86_AT(c, 0xf1b85u);
    { uint32_t v = 0x5CF0u; push32(c, v); }
    // 0f1b8a  push 7
    X86_AT(c, 0xf1b8au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b8c  call 0xe5654
    X86_AT(c, 0xf1b8cu);
    push32(c, 0xf1b91u); f_000e5654(c); X86_RET(c, 0xf1b91u);
    X86_TICK(c, 2);
    // 0f1b91  add esp, 0x3c
    X86_AT(c, 0xf1b91u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
L_f1b94:
    X86_TICK(c, 9);
    // 0f1b94  push 7
    X86_AT(c, 0xf1b94u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1b96  call 0xe4748
    X86_AT(c, 0xf1b96u);
    push32(c, 0xf1b9bu); f_000e4748(c); X86_RET(c, 0xf1b9bu);
    X86_TICK(c, 12);
    // 0f1b9b  xchg ebx, eax
    X86_AT(c, 0xf1b9bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f1b9c  add esp, 4
    X86_AT(c, 0xf1b9cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f1b9f  cmp bl, 1
    X86_AT(c, 0xf1b9fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f1ba2  je 0xf1bbe
    X86_AT(c, 0xf1ba2u);
    if (x86_cc(c, 4)) { goto L_f1bbe; }
    X86_TICK(c, 7);
    // 0f1ba4  cmp bl, 0x41
    X86_AT(c, 0xf1ba4u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0f1ba7  jb 0xf1bae
    X86_AT(c, 0xf1ba7u);
    if (x86_cc(c, 2)) { goto L_f1bae; }
    X86_TICK(c, 7);
    // 0f1ba9  cmp bl, 0x47
    X86_AT(c, 0xf1ba9u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 0f1bac  jbe 0xf1bbe
    X86_AT(c, 0xf1bacu);
    if (x86_cc(c, 6)) { goto L_f1bbe; }
L_f1bae:
    X86_TICK(c, 7);
    // 0f1bae  and bl, bl
    X86_AT(c, 0xf1baeu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0f1bb0  je 0xf1b94
    X86_AT(c, 0xf1bb0u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf1b94u); goto L_f1b94; }
    X86_TICK(c, 9);
    // 0f1bb2  push 1
    X86_AT(c, 0xf1bb2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f1bb4  call 0xe1944
    X86_AT(c, 0xf1bb4u);
    push32(c, 0xf1bb9u); f_000e1944(c); X86_RET(c, 0xf1bb9u);
    X86_TICK(c, 9);
    // 0f1bb9  add esp, 4
    X86_AT(c, 0xf1bb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f1bbc  jmp 0xf1b94
    X86_AT(c, 0xf1bbcu);
    X86_POLL(c, 0xf1b94u); goto L_f1b94;
L_f1bbe:
    X86_TICK(c, 7);
    // 0f1bbe  cmp bl, 1
    X86_AT(c, 0xf1bbeu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f1bc1  jne 0xf1bdb
    X86_AT(c, 0xf1bc1u);
    if (x86_cc(c, 5)) { goto L_f1bdb; }
    X86_TICK(c, 11);
    // 0f1bc3  push 0x5d28
    X86_AT(c, 0xf1bc3u);
    { uint32_t v = 0x5D28u; push32(c, v); }
    // 0f1bc8  push 7
    X86_AT(c, 0xf1bc8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1bca  call 0xe5654
    X86_AT(c, 0xf1bcau);
    push32(c, 0xf1bcfu); f_000e5654(c); X86_RET(c, 0xf1bcfu);
    X86_TICK(c, 9);
    // 0f1bcf  push 7
    X86_AT(c, 0xf1bcfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1bd1  call 0xe6c68
    X86_AT(c, 0xf1bd1u);
    push32(c, 0xf1bd6u); f_000e6c68(c); X86_RET(c, 0xf1bd6u);
    X86_TICK(c, 7);
    // 0f1bd6  jmp 0xf1ca2
    X86_AT(c, 0xf1bd6u);
    goto L_f1ca2;
L_f1bdb:
    X86_TICK(c, 19);
    // 0f1bdb  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf1bdbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f1bdf  lea eax, [ebp - 1]
    X86_AT(c, 0xf1bdfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f1be2  push eax
    X86_AT(c, 0xf1be2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f1be3  push ebx
    X86_AT(c, 0xf1be3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f1be4  push 7
    X86_AT(c, 0xf1be4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1be6  push 0xcf84c
    X86_AT(c, 0xf1be6u);
    { uint32_t v = 0xCF84Cu; push32(c, v); }
    // 0f1beb  call 0xe53e0
    X86_AT(c, 0xf1bebu);
    push32(c, 0xf1bf0u); f_000e53e0(c); X86_RET(c, 0xf1bf0u);
    X86_TICK(c, 11);
    // 0f1bf0  push eax
    X86_AT(c, 0xf1bf0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f1bf1  push 7
    X86_AT(c, 0xf1bf1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1bf3  call 0xe6cb0
    X86_AT(c, 0xf1bf3u);
    push32(c, 0xf1bf8u); f_000e6cb0(c); X86_RET(c, 0xf1bf8u);
    X86_TICK(c, 9);
    // 0f1bf8  push 7
    X86_AT(c, 0xf1bf8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1bfa  call 0xe6c68
    X86_AT(c, 0xf1bfau);
    push32(c, 0xf1bffu); f_000e6c68(c); X86_RET(c, 0xf1bffu);
    X86_TICK(c, 36);
    // 0f1bff  movzx edi, bl
    X86_AT(c, 0xf1bffu);
    c.r[7] = g8(c, 3);
    // 0f1c02  sub edi, 0x41
    X86_AT(c, 0xf1c02u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0f1c05  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1c05u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1c0a  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1c0au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1c0d  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1c0du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1c10  shl edx, 5
    X86_AT(c, 0xf1c10u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1c13  sub edx, eax
    X86_AT(c, 0xf1c13u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1c15  add esp, 0x1c
    X86_AT(c, 0xf1c15u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f1c18  mov eax, edi
    X86_AT(c, 0xf1c18u);
    c.r[0] = c.r[7];
    // 0f1c1a  shl eax, 3
    X86_AT(c, 0xf1c1au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0f1c1d  cmp eax, dword ptr [edx + 0xcde62]
    X86_AT(c, 0xf1c1du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u))), 0, 4);
    // 0f1c23  jle 0xf1c33
    X86_AT(c, 0xf1c23u);
    if (x86_cc(c, 14)) { goto L_f1c33; }
    X86_TICK(c, 9);
    // 0f1c25  push 3
    X86_AT(c, 0xf1c25u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f1c27  call 0xe1944
    X86_AT(c, 0xf1c27u);
    push32(c, 0xf1c2cu); f_000e1944(c); X86_RET(c, 0xf1c2cu);
    X86_TICK(c, 9);
    // 0f1c2c  push 0x5d40
    X86_AT(c, 0xf1c2cu);
    { uint32_t v = 0x5D40u; push32(c, v); }
    // 0f1c31  jmp 0xf1c5d
    X86_AT(c, 0xf1c31u);
    goto L_f1c5d;
L_f1c33:
    X86_TICK(c, 7);
    // 0f1c33  and edi, edi
    X86_AT(c, 0xf1c33u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f1c35  je 0xf1c70
    X86_AT(c, 0xf1c35u);
    if (x86_cc(c, 4)) { goto L_f1c70; }
    X86_TICK(c, 25);
    // 0f1c37  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1c37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1c3c  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1c3cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1c3f  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1c3fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1c42  shl edx, 5
    X86_AT(c, 0xf1c42u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1c45  sub edx, eax
    X86_AT(c, 0xf1c45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1c47  cmp dword ptr [edx + edi*4 + 0xcdea2], 1
    X86_AT(c, 0xf1c47u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEA2u))), 0x1u, 0, 4);
    // 0f1c4f  jge 0xf1c70
    X86_AT(c, 0xf1c4fu);
    if (x86_cc(c, 13)) { goto L_f1c70; }
    X86_TICK(c, 9);
    // 0f1c51  push 0
    X86_AT(c, 0xf1c51u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f1c53  call 0xe1944
    X86_AT(c, 0xf1c53u);
    push32(c, 0xf1c58u); f_000e1944(c); X86_RET(c, 0xf1c58u);
    X86_TICK(c, 2);
    // 0f1c58  push 0x5da0
    X86_AT(c, 0xf1c58u);
    { uint32_t v = 0x5DA0u; push32(c, v); }
L_f1c5d:
    X86_TICK(c, 9);
    // 0f1c5d  push 7
    X86_AT(c, 0xf1c5du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1c5f  call 0xe5654
    X86_AT(c, 0xf1c5fu);
    push32(c, 0xf1c64u); f_000e5654(c); X86_RET(c, 0xf1c64u);
    X86_TICK(c, 9);
    // 0f1c64  push 7
    X86_AT(c, 0xf1c64u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1c66  call 0xe6c68
    X86_AT(c, 0xf1c66u);
    push32(c, 0xf1c6bu); f_000e6c68(c); X86_RET(c, 0xf1c6bu);
    X86_TICK(c, 9);
    // 0f1c6b  add esp, 0x10
    X86_AT(c, 0xf1c6bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f1c6e  jmp 0xf1ca5
    X86_AT(c, 0xf1c6eu);
    goto L_f1ca5;
L_f1c70:
    X86_TICK(c, 30);
    // 0f1c70  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1c70u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1c75  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1c75u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1c78  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1c78u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1c7b  shl edx, 5
    X86_AT(c, 0xf1c7bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1c7e  sub edx, eax
    X86_AT(c, 0xf1c7eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1c80  mov eax, edi
    X86_AT(c, 0xf1c80u);
    c.r[0] = c.r[7];
    // 0f1c82  add al, 0x41
    X86_AT(c, 0xf1c82u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f1c84  mov byte ptr [edx + 0xcdea1], al
    X86_AT(c, 0xf1c84u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA1u)), g8(c, 0));
    // 0f1c8a  push 0x5dcc
    X86_AT(c, 0xf1c8au);
    { uint32_t v = 0x5DCCu; push32(c, v); }
    // 0f1c8f  push 7
    X86_AT(c, 0xf1c8fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1c91  call 0xe5654
    X86_AT(c, 0xf1c91u);
    push32(c, 0xf1c96u); f_000e5654(c); X86_RET(c, 0xf1c96u);
    X86_TICK(c, 9);
    // 0f1c96  push 7
    X86_AT(c, 0xf1c96u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1c98  call 0xe6c68
    X86_AT(c, 0xf1c98u);
    push32(c, 0xf1c9du); f_000e6c68(c); X86_RET(c, 0xf1c9du);
    X86_TICK(c, 7);
    // 0f1c9d  call 0xe1e18
    X86_AT(c, 0xf1c9du);
    push32(c, 0xf1ca2u); f_000e1e18(c); X86_RET(c, 0xf1ca2u);
L_f1ca2:
    X86_TICK(c, 2);
    // 0f1ca2  add esp, 0xc
    X86_AT(c, 0xf1ca2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f1ca5:
    X86_TICK(c, 24);
    // 0f1ca5  pop edi
    X86_AT(c, 0xf1ca5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f1ca6  pop ebx
    X86_AT(c, 0xf1ca6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f1ca7  leave 
    X86_AT(c, 0xf1ca7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f1ca8  ret 
    X86_AT(c, 0xf1ca8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1b2cu, "ran off the end of a function");
}
void f_000f1cac(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0f1cac  push ebp
    X86_AT(c, 0xf1cacu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f1cad  mov ebp, esp
    X86_AT(c, 0xf1cadu);
    c.r[5] = c.r[4];
    // 0f1caf  sub esp, 0xc
    X86_AT(c, 0xf1cafu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0f1cb2  push ebx
    X86_AT(c, 0xf1cb2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f1cb3  push esi
    X86_AT(c, 0xf1cb3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f1cb4  push edi
    X86_AT(c, 0xf1cb4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f1cb5  push 7
    X86_AT(c, 0xf1cb5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1cb7  call 0xe693c
    X86_AT(c, 0xf1cb7u);
    push32(c, 0xf1cbcu); f_000e693c(c); X86_RET(c, 0xf1cbcu);
    X86_TICK(c, 11);
    // 0f1cbc  push 0x5de4
    X86_AT(c, 0xf1cbcu);
    { uint32_t v = 0x5DE4u; push32(c, v); }
    // 0f1cc1  push 7
    X86_AT(c, 0xf1cc1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1cc3  call 0xe5654
    X86_AT(c, 0xf1cc3u);
    push32(c, 0xf1cc8u); f_000e5654(c); X86_RET(c, 0xf1cc8u);
    X86_TICK(c, 9);
    // 0f1cc8  push 7
    X86_AT(c, 0xf1cc8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1cca  call 0xe26c8
    X86_AT(c, 0xf1ccau);
    push32(c, 0xf1ccfu); f_000e26c8(c); X86_RET(c, 0xf1ccfu);
    X86_TICK(c, 12);
    // 0f1ccf  xchg edi, eax
    X86_AT(c, 0xf1ccfu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f1cd0  add esp, 0x10
    X86_AT(c, 0xf1cd0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f1cd3  cmp edi, 0xffffffff
    X86_AT(c, 0xf1cd3u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0f1cd6  jne 0xf1ce2
    X86_AT(c, 0xf1cd6u);
    if (x86_cc(c, 5)) { goto L_f1ce2; }
    X86_TICK(c, 9);
    // 0f1cd8  push 0x5e04
    X86_AT(c, 0xf1cd8u);
    { uint32_t v = 0x5E04u; push32(c, v); }
    // 0f1cdd  jmp 0xf1d86
    X86_AT(c, 0xf1cddu);
    goto L_f1d86;
L_f1ce2:
    X86_TICK(c, 44);
    // 0f1ce2  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1ce2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1ce7  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1ce7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1cea  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1ceau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1ced  shl edx, 5
    X86_AT(c, 0xf1cedu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1cf0  sub edx, eax
    X86_AT(c, 0xf1cf0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1cf2  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf1cf2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f1cf8  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf1cf8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f1cfb  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf1cfbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f1d01  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf1d01u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f1d04  push 1
    X86_AT(c, 0xf1d04u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f1d06  push edi
    X86_AT(c, 0xf1d06u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f1d07  lea eax, [ebp - 8]
    X86_AT(c, 0xf1d07u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f1d0a  push eax
    X86_AT(c, 0xf1d0au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f1d0b  lea ecx, [ebp - 4]
    X86_AT(c, 0xf1d0bu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f1d0e  push ecx
    X86_AT(c, 0xf1d0eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0f1d0f  call 0xeea58
    X86_AT(c, 0xf1d0fu);
    push32(c, 0xf1d14u); f_000eea58(c); X86_RET(c, 0xf1d14u);
    X86_TICK(c, 17);
    // 0f1d14  push dword ptr [ebp - 8]
    X86_AT(c, 0xf1d14u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0f1d17  push dword ptr [ebp - 4]
    X86_AT(c, 0xf1d17u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f1d1a  call 0xeeb6c
    X86_AT(c, 0xf1d1au);
    push32(c, 0xf1d1fu); f_000eeb6c(c); X86_RET(c, 0xf1d1fu);
    X86_TICK(c, 12);
    // 0f1d1f  xchg esi, eax
    X86_AT(c, 0xf1d1fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0f1d20  add esp, 0x18
    X86_AT(c, 0xf1d20u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f1d23  cmp esi, 0xffffffff
    X86_AT(c, 0xf1d23u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0f1d26  je 0xf209b
    X86_AT(c, 0xf1d26u);
    if (x86_cc(c, 4)) { goto L_f209b; }
    X86_TICK(c, 17);
    // 0f1d2c  mov bl, byte ptr [esi + 0xce3c8]
    X86_AT(c, 0xf1d2cu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCE3C8u))));
    // 0f1d32  mov eax, dword ptr [esi*4 + 0xce588]
    X86_AT(c, 0xf1d32u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE588u)));
    // 0f1d39  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xf1d39u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0f1d3c  cmp bl, 0xdd
    X86_AT(c, 0xf1d3cu);
    (void)x86_sub(c, g8(c, 3), 0xDDu, 0, 1);
    // 0f1d3f  je 0xf1d4b
    X86_AT(c, 0xf1d3fu);
    if (x86_cc(c, 4)) { goto L_f1d4b; }
    X86_TICK(c, 7);
    // 0f1d41  cmp bl, 0xdf
    X86_AT(c, 0xf1d41u);
    (void)x86_sub(c, g8(c, 3), 0xDFu, 0, 1);
    // 0f1d44  je 0xf1d4b
    X86_AT(c, 0xf1d44u);
    if (x86_cc(c, 4)) { goto L_f1d4b; }
    X86_TICK(c, 7);
    // 0f1d46  cmp bl, 0x10
    X86_AT(c, 0xf1d46u);
    (void)x86_sub(c, g8(c, 3), 0x10u, 0, 1);
    // 0f1d49  jne 0xf1d5c
    X86_AT(c, 0xf1d49u);
    if (x86_cc(c, 5)) { goto L_f1d5c; }
L_f1d4b:
    X86_TICK(c, 9);
    // 0f1d4b  push 3
    X86_AT(c, 0xf1d4bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f1d4d  call 0xe1944
    X86_AT(c, 0xf1d4du);
    push32(c, 0xf1d52u); f_000e1944(c); X86_RET(c, 0xf1d52u);
    X86_TICK(c, 9);
    // 0f1d52  push 0x5e1c
    X86_AT(c, 0xf1d52u);
    { uint32_t v = 0x5E1Cu; push32(c, v); }
    // 0f1d57  jmp 0xf20f2
    X86_AT(c, 0xf1d57u);
    goto L_f20f2;
L_f1d5c:
    X86_TICK(c, 11);
    // 0f1d5c  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xf1d5cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0f1d5f  and eax, eax
    X86_AT(c, 0xf1d5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f1d61  je 0xf1d6e
    X86_AT(c, 0xf1d61u);
    if (x86_cc(c, 4)) { goto L_f1d6e; }
    X86_TICK(c, 9);
    // 0f1d63  push eax
    X86_AT(c, 0xf1d63u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f1d64  call 0xf2110
    X86_AT(c, 0xf1d64u);
    push32(c, 0xf1d69u); f_000f2110(c); X86_RET(c, 0xf1d69u);
    X86_TICK(c, 7);
    // 0f1d69  jmp 0xf2093
    X86_AT(c, 0xf1d69u);
    goto L_f2093;
L_f1d6e:
    X86_TICK(c, 7);
    // 0f1d6e  cmp bl, 0x6c
    X86_AT(c, 0xf1d6eu);
    (void)x86_sub(c, g8(c, 3), 0x6Cu, 0, 1);
    // 0f1d71  jne 0xf1f2f
    X86_AT(c, 0xf1d71u);
    if (x86_cc(c, 5)) { goto L_f1f2f; }
    X86_TICK(c, 12);
    // 0f1d77  cmp dword ptr [esi*4 + 0xce508], 2
    X86_AT(c, 0xf1d77u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE508u))), 0x2u, 0, 4);
    // 0f1d7f  jne 0xf1d9c
    X86_AT(c, 0xf1d7fu);
    if (x86_cc(c, 5)) { goto L_f1d9c; }
    X86_TICK(c, 2);
    // 0f1d81  push 0x5e60
    X86_AT(c, 0xf1d81u);
    { uint32_t v = 0x5E60u; push32(c, v); }
L_f1d86:
    X86_TICK(c, 9);
    // 0f1d86  push 7
    X86_AT(c, 0xf1d86u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1d88  call 0xe5654
    X86_AT(c, 0xf1d88u);
    push32(c, 0xf1d8du); f_000e5654(c); X86_RET(c, 0xf1d8du);
    X86_TICK(c, 9);
    // 0f1d8d  push 7
    X86_AT(c, 0xf1d8du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1d8f  call 0xe6c68
    X86_AT(c, 0xf1d8fu);
    push32(c, 0xf1d94u); f_000e6c68(c); X86_RET(c, 0xf1d94u);
    X86_TICK(c, 9);
    // 0f1d94  add esp, 0xc
    X86_AT(c, 0xf1d94u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f1d97  jmp 0xf210a
    X86_AT(c, 0xf1d97u);
    goto L_f210a;
L_f1d9c:
    X86_TICK(c, 9);
    // 0f1d9c  push 0xb
    X86_AT(c, 0xf1d9cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f1d9e  call 0xe5748
    X86_AT(c, 0xf1d9eu);
    push32(c, 0xf1da3u); f_000e5748(c); X86_RET(c, 0xf1da3u);
    X86_TICK(c, 11);
    // 0f1da3  push 0x5e84
    X86_AT(c, 0xf1da3u);
    { uint32_t v = 0x5E84u; push32(c, v); }
    // 0f1da8  push 7
    X86_AT(c, 0xf1da8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1daa  call 0xe5654
    X86_AT(c, 0xf1daau);
    push32(c, 0xf1dafu); f_000e5654(c); X86_RET(c, 0xf1dafu);
    X86_TICK(c, 26);
    // 0f1daf  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1dafu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1db4  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1db4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1db7  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1db7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1dba  shl edx, 5
    X86_AT(c, 0xf1dbau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1dbd  sub edx, eax
    X86_AT(c, 0xf1dbdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1dbf  add edx, 0xcde4d
    X86_AT(c, 0xf1dbfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0f1dc5  push edx
    X86_AT(c, 0xf1dc5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f1dc6  push 7
    X86_AT(c, 0xf1dc6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1dc8  call 0xe70ec
    X86_AT(c, 0xf1dc8u);
    push32(c, 0xf1dcdu); f_000e70ec(c); X86_RET(c, 0xf1dcdu);
    X86_TICK(c, 9);
    // 0f1dcd  push 7
    X86_AT(c, 0xf1dcdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1dcf  call 0xe6c68
    X86_AT(c, 0xf1dcfu);
    push32(c, 0xf1dd4u); f_000e6c68(c); X86_RET(c, 0xf1dd4u);
    X86_TICK(c, 11);
    // 0f1dd4  push 0x5ebc
    X86_AT(c, 0xf1dd4u);
    { uint32_t v = 0x5EBCu; push32(c, v); }
    // 0f1dd9  push 7
    X86_AT(c, 0xf1dd9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1ddb  call 0xe5654
    X86_AT(c, 0xf1ddbu);
    push32(c, 0xf1de0u); f_000e5654(c); X86_RET(c, 0xf1de0u);
    X86_TICK(c, 9);
    // 0f1de0  push 7
    X86_AT(c, 0xf1de0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1de2  call 0xe6c68
    X86_AT(c, 0xf1de2u);
    push32(c, 0xf1de7u); f_000e6c68(c); X86_RET(c, 0xf1de7u);
    X86_TICK(c, 27);
    // 0f1de7  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1de7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1dec  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1decu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1def  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1defu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1df2  shl edx, 5
    X86_AT(c, 0xf1df2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1df5  sub edx, eax
    X86_AT(c, 0xf1df5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1df7  add esp, 0x24
    X86_AT(c, 0xf1df7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0f1dfa  cmp dword ptr [edx + 0xcde91], 0x32
    X86_AT(c, 0xf1dfau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u))), 0x32u, 0, 4);
    // 0f1e01  jge 0xf1e2c
    X86_AT(c, 0xf1e01u);
    if (x86_cc(c, 13)) { goto L_f1e2c; }
    X86_TICK(c, 9);
    // 0f1e03  push 3
    X86_AT(c, 0xf1e03u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f1e05  call 0xe1944
    X86_AT(c, 0xf1e05u);
    push32(c, 0xf1e0au); f_000e1944(c); X86_RET(c, 0xf1e0au);
    X86_TICK(c, 11);
    // 0f1e0a  push 0x5f1c
    X86_AT(c, 0xf1e0au);
    { uint32_t v = 0x5F1Cu; push32(c, v); }
    // 0f1e0f  push 7
    X86_AT(c, 0xf1e0fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1e11  call 0xe5654
    X86_AT(c, 0xf1e11u);
    push32(c, 0xf1e16u); f_000e5654(c); X86_RET(c, 0xf1e16u);
    X86_TICK(c, 9);
    // 0f1e16  push 7
    X86_AT(c, 0xf1e16u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1e18  call 0xe6c68
    X86_AT(c, 0xf1e18u);
    push32(c, 0xf1e1du); f_000e6c68(c); X86_RET(c, 0xf1e1du);
    X86_TICK(c, 9);
    // 0f1e1d  push 7
    X86_AT(c, 0xf1e1du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1e1f  call 0xe693c
    X86_AT(c, 0xf1e1fu);
    push32(c, 0xf1e24u); f_000e693c(c); X86_RET(c, 0xf1e24u);
    X86_TICK(c, 9);
    // 0f1e24  add esp, 0x14
    X86_AT(c, 0xf1e24u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f1e27  jmp 0xf210a
    X86_AT(c, 0xf1e27u);
    goto L_f210a;
L_f1e2c:
    X86_TICK(c, 31);
    // 0f1e2c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1e2cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1e31  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1e31u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1e34  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1e34u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1e37  shl edx, 5
    X86_AT(c, 0xf1e37u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1e3a  sub edx, eax
    X86_AT(c, 0xf1e3au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1e3c  sub dword ptr [edx + 0xcde91], 0x32
    X86_AT(c, 0xf1e3cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x32u, 0, 4)); }
    // 0f1e43  mov eax, dword ptr [edx + 0xcde81]
    X86_AT(c, 0xf1e43u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)));
    // 0f1e49  cmp eax, 0x1388
    X86_AT(c, 0xf1e49u);
    (void)x86_sub(c, c.r[0], 0x1388u, 0, 4);
    // 0f1e4e  jge 0xf1e5c
    X86_AT(c, 0xf1e4eu);
    if (x86_cc(c, 13)) { goto L_f1e5c; }
    X86_TICK(c, 14);
    // 0f1e50  add dword ptr [edx + 0xcde81], 0x96
    X86_AT(c, 0xf1e50u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x96u, 0, 4)); }
    // 0f1e5a  jmp 0xf1ec8
    X86_AT(c, 0xf1e5au);
    goto L_f1ec8;
L_f1e5c:
    X86_TICK(c, 24);
    // 0f1e5c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1e5cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1e61  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1e61u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1e64  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1e64u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1e67  shl edx, 5
    X86_AT(c, 0xf1e67u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1e6a  sub edx, eax
    X86_AT(c, 0xf1e6au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1e6c  mov eax, dword ptr [edx + 0xcde81]
    X86_AT(c, 0xf1e6cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)));
    // 0f1e72  cmp eax, 0x1d4c
    X86_AT(c, 0xf1e72u);
    (void)x86_sub(c, c.r[0], 0x1D4Cu, 0, 4);
    // 0f1e77  jge 0xf1e82
    X86_AT(c, 0xf1e77u);
    if (x86_cc(c, 13)) { goto L_f1e82; }
    X86_TICK(c, 14);
    // 0f1e79  add dword ptr [edx + 0xcde81], 0x64
    X86_AT(c, 0xf1e79u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x64u, 0, 4)); }
    // 0f1e80  jmp 0xf1ec8
    X86_AT(c, 0xf1e80u);
    goto L_f1ec8;
L_f1e82:
    X86_TICK(c, 24);
    // 0f1e82  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1e82u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1e87  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1e87u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1e8a  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1e8au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1e8d  shl edx, 5
    X86_AT(c, 0xf1e8du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1e90  sub edx, eax
    X86_AT(c, 0xf1e90u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1e92  mov eax, dword ptr [edx + 0xcde81]
    X86_AT(c, 0xf1e92u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)));
    // 0f1e98  cmp eax, 0x270f
    X86_AT(c, 0xf1e98u);
    (void)x86_sub(c, c.r[0], 0x270Fu, 0, 4);
    // 0f1e9d  jge 0xf1ebe
    X86_AT(c, 0xf1e9du);
    if (x86_cc(c, 13)) { goto L_f1ebe; }
    X86_TICK(c, 19);
    // 0f1e9f  add dword ptr [edx + 0xcde81], 0x32
    X86_AT(c, 0xf1e9fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x32u, 0, 4)); }
    // 0f1ea6  cmp dword ptr [edx + 0xcde81], 0x270f
    X86_AT(c, 0xf1ea6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u))), 0x270Fu, 0, 4);
    // 0f1eb0  jle 0xf1ec8
    X86_AT(c, 0xf1eb0u);
    if (x86_cc(c, 14)) { goto L_f1ec8; }
    X86_TICK(c, 9);
    // 0f1eb2  mov dword ptr [edx + 0xcde81], 0x270f
    X86_AT(c, 0xf1eb2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)), 0x270Fu);
    // 0f1ebc  jmp 0xf1ec8
    X86_AT(c, 0xf1ebcu);
    goto L_f1ec8;
L_f1ebe:
    X86_TICK(c, 9);
    // 0f1ebe  push 0x5f6c
    X86_AT(c, 0xf1ebeu);
    { uint32_t v = 0x5F6Cu; push32(c, v); }
    // 0f1ec3  jmp 0xf1f48
    X86_AT(c, 0xf1ec3u);
    goto L_f1f48;
L_f1ec8:
    X86_TICK(c, 11);
    // 0f1ec8  push 0x5f98
    X86_AT(c, 0xf1ec8u);
    { uint32_t v = 0x5F98u; push32(c, v); }
    // 0f1ecd  push 7
    X86_AT(c, 0xf1ecdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1ecf  call 0xe5654
    X86_AT(c, 0xf1ecfu);
    push32(c, 0xf1ed4u); f_000e5654(c); X86_RET(c, 0xf1ed4u);
    X86_TICK(c, 9);
    // 0f1ed4  push 7
    X86_AT(c, 0xf1ed4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1ed6  call 0xe6c68
    X86_AT(c, 0xf1ed6u);
    push32(c, 0xf1edbu); f_000e6c68(c); X86_RET(c, 0xf1edbu);
    X86_TICK(c, 9);
    // 0f1edb  push 7
    X86_AT(c, 0xf1edbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1edd  call 0xe693c
    X86_AT(c, 0xf1eddu);
    push32(c, 0xf1ee2u); f_000e693c(c); X86_RET(c, 0xf1ee2u);
    X86_TICK(c, 9);
    // 0f1ee2  push 2
    X86_AT(c, 0xf1ee2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f1ee4  call 0xe1944
    X86_AT(c, 0xf1ee4u);
    push32(c, 0xf1ee9u); f_000e1944(c); X86_RET(c, 0xf1ee9u);
    X86_TICK(c, 7);
    // 0f1ee9  call 0xf0c70
    X86_AT(c, 0xf1ee9u);
    push32(c, 0xf1eeeu); f_000f0c70(c); X86_RET(c, 0xf1eeeu);
    X86_TICK(c, 7);
    // 0f1eee  call 0xe9010
    X86_AT(c, 0xf1eeeu);
    push32(c, 0xf1ef3u); f_000e9010(c); X86_RET(c, 0xf1ef3u);
    X86_TICK(c, 9);
    // 0f1ef3  push 1
    X86_AT(c, 0xf1ef3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f1ef5  call 0xe9740
    X86_AT(c, 0xf1ef5u);
    push32(c, 0xf1efau); f_000e9740(c); X86_RET(c, 0xf1efau);
    X86_TICK(c, 7);
    // 0f1efa  call 0xf0c70
    X86_AT(c, 0xf1efau);
    push32(c, 0xf1effu); f_000f0c70(c); X86_RET(c, 0xf1effu);
    X86_TICK(c, 30);
    // 0f1eff  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf1effu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f1f04  lea edx, [eax + eax*4]
    X86_AT(c, 0xf1f04u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f1f07  lea edx, [eax + edx*2]
    X86_AT(c, 0xf1f07u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f1f0a  shl edx, 5
    X86_AT(c, 0xf1f0au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f1f0d  sub edx, eax
    X86_AT(c, 0xf1f0du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f1f0f  add esp, 0x18
    X86_AT(c, 0xf1f0fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f1f12  mov eax, dword ptr [edx + 0xcde81]
    X86_AT(c, 0xf1f12u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)));
    // 0f1f18  cmp eax, dword ptr [edx + 0xcde85]
    X86_AT(c, 0xf1f18u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE85u))), 0, 4);
    // 0f1f1e  jle 0xf210a
    X86_AT(c, 0xf1f1eu);
    if (x86_cc(c, 14)) { goto L_f210a; }
    X86_TICK(c, 9);
    // 0f1f24  mov dword ptr [edx + 0xcde85], eax
    X86_AT(c, 0xf1f24u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE85u)), c.r[0]);
    // 0f1f2a  jmp 0xf210a
    X86_AT(c, 0xf1f2au);
    goto L_f210a;
L_f1f2f:
    X86_TICK(c, 9);
    // 0f1f2f  push 0xb
    X86_AT(c, 0xf1f2fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f1f31  call 0xe5748
    X86_AT(c, 0xf1f31u);
    push32(c, 0xf1f36u); f_000e5748(c); X86_RET(c, 0xf1f36u);
    X86_TICK(c, 14);
    // 0f1f36  add esp, 4
    X86_AT(c, 0xf1f36u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f1f39  cmp dword ptr [esi*4 + 0xce508], 2
    X86_AT(c, 0xf1f39u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE508u))), 0x2u, 0, 4);
    // 0f1f41  jne 0xf1f62
    X86_AT(c, 0xf1f41u);
    if (x86_cc(c, 5)) { goto L_f1f62; }
    X86_TICK(c, 2);
    // 0f1f43  push 0x5fd0
    X86_AT(c, 0xf1f43u);
    { uint32_t v = 0x5FD0u; push32(c, v); }
L_f1f48:
    X86_TICK(c, 9);
    // 0f1f48  push 7
    X86_AT(c, 0xf1f48u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1f4a  call 0xe5654
    X86_AT(c, 0xf1f4au);
    push32(c, 0xf1f4fu); f_000e5654(c); X86_RET(c, 0xf1f4fu);
    X86_TICK(c, 9);
    // 0f1f4f  push 7
    X86_AT(c, 0xf1f4fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1f51  call 0xe6c68
    X86_AT(c, 0xf1f51u);
    push32(c, 0xf1f56u); f_000e6c68(c); X86_RET(c, 0xf1f56u);
    X86_TICK(c, 9);
    // 0f1f56  push 7
    X86_AT(c, 0xf1f56u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1f58  call 0xe693c
    X86_AT(c, 0xf1f58u);
    push32(c, 0xf1f5du); f_000e693c(c); X86_RET(c, 0xf1f5du);
    X86_TICK(c, 7);
    // 0f1f5d  jmp 0xf2100
    X86_AT(c, 0xf1f5du);
    goto L_f2100;
L_f1f62:
    X86_TICK(c, 10);
    // 0f1f62  movzx edx, bl
    X86_AT(c, 0xf1f62u);
    c.r[2] = g8(c, 3);
    // 0f1f65  cmp edx, 0x60
    X86_AT(c, 0xf1f65u);
    (void)x86_sub(c, c.r[2], 0x60u, 0, 4);
    // 0f1f68  je 0xf1fa9
    X86_AT(c, 0xf1f68u);
    if (x86_cc(c, 4)) { goto L_f1fa9; }
    X86_TICK(c, 7);
    // 0f1f6a  cmp edx, 0x64
    X86_AT(c, 0xf1f6au);
    (void)x86_sub(c, c.r[2], 0x64u, 0, 4);
    // 0f1f6d  je 0xf1fc6
    X86_AT(c, 0xf1f6du);
    if (x86_cc(c, 4)) { goto L_f1fc6; }
    X86_TICK(c, 7);
    // 0f1f6f  cmp edx, 0x68
    X86_AT(c, 0xf1f6fu);
    (void)x86_sub(c, c.r[2], 0x68u, 0, 4);
    // 0f1f72  je 0xf1fe3
    X86_AT(c, 0xf1f72u);
    if (x86_cc(c, 4)) { goto L_f1fe3; }
    X86_TICK(c, 7);
    // 0f1f74  cmp edx, 0xf0
    X86_AT(c, 0xf1f74u);
    (void)x86_sub(c, c.r[2], 0xF0u, 0, 4);
    // 0f1f7a  je 0xf1ffd
    X86_AT(c, 0xf1f7au);
    if (x86_cc(c, 4)) { goto L_f1ffd; }
    X86_TICK(c, 7);
    // 0f1f80  cmp edx, 0xf4
    X86_AT(c, 0xf1f80u);
    (void)x86_sub(c, c.r[2], 0xF4u, 0, 4);
    // 0f1f86  je 0xf2017
    X86_AT(c, 0xf1f86u);
    if (x86_cc(c, 4)) { goto L_f2017; }
    X86_TICK(c, 7);
    // 0f1f8c  cmp edx, 0xf8
    X86_AT(c, 0xf1f8cu);
    (void)x86_sub(c, c.r[2], 0xF8u, 0, 4);
    // 0f1f92  je 0xf2031
    X86_AT(c, 0xf1f92u);
    if (x86_cc(c, 4)) { goto L_f2031; }
    X86_TICK(c, 7);
    // 0f1f98  cmp edx, 0xfc
    X86_AT(c, 0xf1f98u);
    (void)x86_sub(c, c.r[2], 0xFCu, 0, 4);
    // 0f1f9e  je 0xf204b
    X86_AT(c, 0xf1f9eu);
    if (x86_cc(c, 4)) { goto L_f204b; }
    X86_TICK(c, 7);
    // 0f1fa4  jmp 0xf2076
    X86_AT(c, 0xf1fa4u);
    goto L_f2076;
L_f1fa9:
    X86_TICK(c, 11);
    // 0f1fa9  push 0x6004
    X86_AT(c, 0xf1fa9u);
    { uint32_t v = 0x6004u; push32(c, v); }
    // 0f1fae  push 7
    X86_AT(c, 0xf1faeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1fb0  call 0xe5654
    X86_AT(c, 0xf1fb0u);
    push32(c, 0xf1fb5u); f_000e5654(c); X86_RET(c, 0xf1fb5u);
    X86_TICK(c, 9);
    // 0f1fb5  push 7
    X86_AT(c, 0xf1fb5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1fb7  call 0xe6c68
    X86_AT(c, 0xf1fb7u);
    push32(c, 0xf1fbcu); f_000e6c68(c); X86_RET(c, 0xf1fbcu);
    X86_TICK(c, 9);
    // 0f1fbc  push 0x602c
    X86_AT(c, 0xf1fbcu);
    { uint32_t v = 0x602Cu; push32(c, v); }
    // 0f1fc1  jmp 0xf2063
    X86_AT(c, 0xf1fc1u);
    goto L_f2063;
L_f1fc6:
    X86_TICK(c, 11);
    // 0f1fc6  push 0x6058
    X86_AT(c, 0xf1fc6u);
    { uint32_t v = 0x6058u; push32(c, v); }
    // 0f1fcb  push 7
    X86_AT(c, 0xf1fcbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1fcd  call 0xe5654
    X86_AT(c, 0xf1fcdu);
    push32(c, 0xf1fd2u); f_000e5654(c); X86_RET(c, 0xf1fd2u);
    X86_TICK(c, 9);
    // 0f1fd2  push 7
    X86_AT(c, 0xf1fd2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1fd4  call 0xe6c68
    X86_AT(c, 0xf1fd4u);
    push32(c, 0xf1fd9u); f_000e6c68(c); X86_RET(c, 0xf1fd9u);
    X86_TICK(c, 9);
    // 0f1fd9  push 0x608c
    X86_AT(c, 0xf1fd9u);
    { uint32_t v = 0x608Cu; push32(c, v); }
    // 0f1fde  jmp 0xf2063
    X86_AT(c, 0xf1fdeu);
    goto L_f2063;
L_f1fe3:
    X86_TICK(c, 11);
    // 0f1fe3  push 0x60ac
    X86_AT(c, 0xf1fe3u);
    { uint32_t v = 0x60ACu; push32(c, v); }
    // 0f1fe8  push 7
    X86_AT(c, 0xf1fe8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1fea  call 0xe5654
    X86_AT(c, 0xf1feau);
    push32(c, 0xf1fefu); f_000e5654(c); X86_RET(c, 0xf1fefu);
    X86_TICK(c, 9);
    // 0f1fef  push 7
    X86_AT(c, 0xf1fefu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f1ff1  call 0xe6c68
    X86_AT(c, 0xf1ff1u);
    push32(c, 0xf1ff6u); f_000e6c68(c); X86_RET(c, 0xf1ff6u);
    X86_TICK(c, 9);
    // 0f1ff6  push 0x60dc
    X86_AT(c, 0xf1ff6u);
    { uint32_t v = 0x60DCu; push32(c, v); }
    // 0f1ffb  jmp 0xf2063
    X86_AT(c, 0xf1ffbu);
    goto L_f2063;
L_f1ffd:
    X86_TICK(c, 11);
    // 0f1ffd  push 0x6120
    X86_AT(c, 0xf1ffdu);
    { uint32_t v = 0x6120u; push32(c, v); }
    // 0f2002  push 7
    X86_AT(c, 0xf2002u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2004  call 0xe5654
    X86_AT(c, 0xf2004u);
    push32(c, 0xf2009u); f_000e5654(c); X86_RET(c, 0xf2009u);
    X86_TICK(c, 9);
    // 0f2009  push 7
    X86_AT(c, 0xf2009u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f200b  call 0xe6c68
    X86_AT(c, 0xf200bu);
    push32(c, 0xf2010u); f_000e6c68(c); X86_RET(c, 0xf2010u);
    X86_TICK(c, 9);
    // 0f2010  push 0x614c
    X86_AT(c, 0xf2010u);
    { uint32_t v = 0x614Cu; push32(c, v); }
    // 0f2015  jmp 0xf2063
    X86_AT(c, 0xf2015u);
    goto L_f2063;
L_f2017:
    X86_TICK(c, 11);
    // 0f2017  push 0x617c
    X86_AT(c, 0xf2017u);
    { uint32_t v = 0x617Cu; push32(c, v); }
    // 0f201c  push 7
    X86_AT(c, 0xf201cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f201e  call 0xe5654
    X86_AT(c, 0xf201eu);
    push32(c, 0xf2023u); f_000e5654(c); X86_RET(c, 0xf2023u);
    X86_TICK(c, 9);
    // 0f2023  push 7
    X86_AT(c, 0xf2023u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2025  call 0xe6c68
    X86_AT(c, 0xf2025u);
    push32(c, 0xf202au); f_000e6c68(c); X86_RET(c, 0xf202au);
    X86_TICK(c, 9);
    // 0f202a  push 0x61a8
    X86_AT(c, 0xf202au);
    { uint32_t v = 0x61A8u; push32(c, v); }
    // 0f202f  jmp 0xf2063
    X86_AT(c, 0xf202fu);
    goto L_f2063;
L_f2031:
    X86_TICK(c, 11);
    // 0f2031  push 0x61c8
    X86_AT(c, 0xf2031u);
    { uint32_t v = 0x61C8u; push32(c, v); }
    // 0f2036  push 7
    X86_AT(c, 0xf2036u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2038  call 0xe5654
    X86_AT(c, 0xf2038u);
    push32(c, 0xf203du); f_000e5654(c); X86_RET(c, 0xf203du);
    X86_TICK(c, 9);
    // 0f203d  push 7
    X86_AT(c, 0xf203du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f203f  call 0xe6c68
    X86_AT(c, 0xf203fu);
    push32(c, 0xf2044u); f_000e6c68(c); X86_RET(c, 0xf2044u);
    X86_TICK(c, 9);
    // 0f2044  push 0x61f8
    X86_AT(c, 0xf2044u);
    { uint32_t v = 0x61F8u; push32(c, v); }
    // 0f2049  jmp 0xf2063
    X86_AT(c, 0xf2049u);
    goto L_f2063;
L_f204b:
    X86_TICK(c, 11);
    // 0f204b  push 0x6244
    X86_AT(c, 0xf204bu);
    { uint32_t v = 0x6244u; push32(c, v); }
    // 0f2050  push 7
    X86_AT(c, 0xf2050u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2052  call 0xe5654
    X86_AT(c, 0xf2052u);
    push32(c, 0xf2057u); f_000e5654(c); X86_RET(c, 0xf2057u);
    X86_TICK(c, 9);
    // 0f2057  push 7
    X86_AT(c, 0xf2057u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2059  call 0xe6c68
    X86_AT(c, 0xf2059u);
    push32(c, 0xf205eu); f_000e6c68(c); X86_RET(c, 0xf205eu);
    X86_TICK(c, 2);
    // 0f205e  push 0x626c
    X86_AT(c, 0xf205eu);
    { uint32_t v = 0x626Cu; push32(c, v); }
L_f2063:
    X86_TICK(c, 9);
    // 0f2063  push 7
    X86_AT(c, 0xf2063u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2065  call 0xe5654
    X86_AT(c, 0xf2065u);
    push32(c, 0xf206au); f_000e5654(c); X86_RET(c, 0xf206au);
    X86_TICK(c, 9);
    // 0f206a  push 7
    X86_AT(c, 0xf206au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f206c  call 0xe6c68
    X86_AT(c, 0xf206cu);
    push32(c, 0xf2071u); f_000e6c68(c); X86_RET(c, 0xf2071u);
    X86_TICK(c, 9);
    // 0f2071  add esp, 0x18
    X86_AT(c, 0xf2071u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f2074  jmp 0xf208c
    X86_AT(c, 0xf2074u);
    goto L_f208c;
L_f2076:
    X86_TICK(c, 11);
    // 0f2076  push 0x62b4
    X86_AT(c, 0xf2076u);
    { uint32_t v = 0x62B4u; push32(c, v); }
    // 0f207b  push 7
    X86_AT(c, 0xf207bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f207d  call 0xe5654
    X86_AT(c, 0xf207du);
    push32(c, 0xf2082u); f_000e5654(c); X86_RET(c, 0xf2082u);
    X86_TICK(c, 9);
    // 0f2082  push 7
    X86_AT(c, 0xf2082u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2084  call 0xe6c68
    X86_AT(c, 0xf2084u);
    push32(c, 0xf2089u); f_000e6c68(c); X86_RET(c, 0xf2089u);
    X86_TICK(c, 2);
    // 0f2089  add esp, 0xc
    X86_AT(c, 0xf2089u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f208c:
    X86_TICK(c, 9);
    // 0f208c  push 7
    X86_AT(c, 0xf208cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f208e  call 0xe693c
    X86_AT(c, 0xf208eu);
    push32(c, 0xf2093u); f_000e693c(c); X86_RET(c, 0xf2093u);
L_f2093:
    X86_TICK(c, 9);
    // 0f2093  add esp, 4
    X86_AT(c, 0xf2093u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f2096  jmp 0xf210a
    X86_AT(c, 0xf2096u);
    goto L_f210a;
L_f209b:
    X86_TICK(c, 17);
    // 0f209b  push dword ptr [ebp - 8]
    X86_AT(c, 0xf209bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0f209e  push dword ptr [ebp - 4]
    X86_AT(c, 0xf209eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f20a1  call 0xef8f4
    X86_AT(c, 0xf20a1u);
    push32(c, 0xf20a6u); f_000ef8f4(c); X86_RET(c, 0xf20a6u);
    X86_TICK(c, 12);
    // 0f20a6  xchg ebx, eax
    X86_AT(c, 0xf20a6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f20a7  add esp, 8
    X86_AT(c, 0xf20a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f20aa  cmp bl, 0x25
    X86_AT(c, 0xf20aau);
    (void)x86_sub(c, g8(c, 3), 0x25u, 0, 1);
    // 0f20ad  jb 0xf20b4
    X86_AT(c, 0xf20adu);
    if (x86_cc(c, 2)) { goto L_f20b4; }
    X86_TICK(c, 7);
    // 0f20af  cmp bl, 0x3f
    X86_AT(c, 0xf20afu);
    (void)x86_sub(c, g8(c, 3), 0x3Fu, 0, 1);
    // 0f20b2  jbe 0xf20c2
    X86_AT(c, 0xf20b2u);
    if (x86_cc(c, 6)) { goto L_f20c2; }
L_f20b4:
    X86_TICK(c, 9);
    // 0f20b4  push 3
    X86_AT(c, 0xf20b4u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f20b6  call 0xe1944
    X86_AT(c, 0xf20b6u);
    push32(c, 0xf20bbu); f_000e1944(c); X86_RET(c, 0xf20bbu);
    X86_TICK(c, 9);
    // 0f20bb  push 0x62d4
    X86_AT(c, 0xf20bbu);
    { uint32_t v = 0x62D4u; push32(c, v); }
    // 0f20c0  jmp 0xf20f2
    X86_AT(c, 0xf20c0u);
    goto L_f20f2;
L_f20c2:
    X86_TICK(c, 19);
    // 0f20c2  push 1
    X86_AT(c, 0xf20c2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f20c4  push edi
    X86_AT(c, 0xf20c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f20c5  lea eax, [ebp - 8]
    X86_AT(c, 0xf20c5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f20c8  push eax
    X86_AT(c, 0xf20c8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f20c9  lea ecx, [ebp - 4]
    X86_AT(c, 0xf20c9u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f20cc  push ecx
    X86_AT(c, 0xf20ccu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0f20cd  call 0xeea58
    X86_AT(c, 0xf20cdu);
    push32(c, 0xf20d2u); f_000eea58(c); X86_RET(c, 0xf20d2u);
    X86_TICK(c, 17);
    // 0f20d2  push dword ptr [ebp - 8]
    X86_AT(c, 0xf20d2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0f20d5  push dword ptr [ebp - 4]
    X86_AT(c, 0xf20d5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f20d8  call 0xef8ac
    X86_AT(c, 0xf20d8u);
    push32(c, 0xf20ddu); f_000ef8ac(c); X86_RET(c, 0xf20ddu);
    X86_TICK(c, 12);
    // 0f20dd  xchg ebx, eax
    X86_AT(c, 0xf20ddu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f20de  add esp, 0x18
    X86_AT(c, 0xf20deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f20e1  cmp bl, 0x68
    X86_AT(c, 0xf20e1u);
    (void)x86_sub(c, g8(c, 3), 0x68u, 0, 1);
    // 0f20e4  je 0xf2105
    X86_AT(c, 0xf20e4u);
    if (x86_cc(c, 4)) { goto L_f2105; }
    X86_TICK(c, 9);
    // 0f20e6  push 3
    X86_AT(c, 0xf20e6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f20e8  call 0xe1944
    X86_AT(c, 0xf20e8u);
    push32(c, 0xf20edu); f_000e1944(c); X86_RET(c, 0xf20edu);
    X86_TICK(c, 2);
    // 0f20ed  push 0x6310
    X86_AT(c, 0xf20edu);
    { uint32_t v = 0x6310u; push32(c, v); }
L_f20f2:
    X86_TICK(c, 9);
    // 0f20f2  push 7
    X86_AT(c, 0xf20f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f20f4  call 0xe5654
    X86_AT(c, 0xf20f4u);
    push32(c, 0xf20f9u); f_000e5654(c); X86_RET(c, 0xf20f9u);
    X86_TICK(c, 9);
    // 0f20f9  push 7
    X86_AT(c, 0xf20f9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f20fb  call 0xe6c68
    X86_AT(c, 0xf20fbu);
    push32(c, 0xf2100u); f_000e6c68(c); X86_RET(c, 0xf2100u);
L_f2100:
    X86_TICK(c, 9);
    // 0f2100  add esp, 0x10
    X86_AT(c, 0xf2100u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f2103  jmp 0xf210a
    X86_AT(c, 0xf2103u);
    goto L_f210a;
L_f2105:
    X86_TICK(c, 7);
    // 0f2105  call 0xf50f8
    X86_AT(c, 0xf2105u);
    push32(c, 0xf210au); f_000f50f8(c); X86_RET(c, 0xf210au);
L_f210a:
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
    x86_fault(c, 0xf1cacu, "ran off the end of a function");
}
void f_000f2063(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f2063  push 7
    X86_AT(c, 0xf2063u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f2065  call 0xe5654
    X86_AT(c, 0xf2065u);
    push32(c, 0xf206au); f_000e5654(c); X86_RET(c, 0xf206au);
    X86_TICK(c, 9);
    // 0f206a  push 7
    X86_AT(c, 0xf206au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f206c  call 0xe6c68
    X86_AT(c, 0xf206cu);
    push32(c, 0xf2071u); f_000e6c68(c); X86_RET(c, 0xf2071u);
    X86_TICK(c, 9);
    // 0f2071  add esp, 0x18
    X86_AT(c, 0xf2071u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f2074  jmp 0xf208c
    X86_AT(c, 0xf2074u);
    goto L_f208c;
L_f208c:
    X86_TICK(c, 9);
    // 0f208c  push 7
    X86_AT(c, 0xf208cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f208e  call 0xe693c
    X86_AT(c, 0xf208eu);
    push32(c, 0xf2093u); f_000e693c(c); X86_RET(c, 0xf2093u);
    X86_TICK(c, 9);
    // 0f2093  add esp, 4
    X86_AT(c, 0xf2093u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f2096  jmp 0xf210a
    X86_AT(c, 0xf2096u);
    goto L_f210a;
L_f210a:
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
    x86_fault(c, 0xf2063u, "ran off the end of a function");
}
}

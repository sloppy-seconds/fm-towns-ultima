#include "p_game_funcs.h"
namespace p_game {
void f_000de8c0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de8c0  push edi
    X86_AT(c, 0xde8c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0de8c1  sub eax, eax
    X86_AT(c, 0xde8c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0de8c3  mov dword ptr [0xc2cf8], eax
    X86_AT(c, 0xde8c3u);
    wr32((c.sbase[3] + (uint32_t)(0xC2CF8u)), c.r[0]);
    // 0de8c8  xchg edi, eax
    X86_AT(c, 0xde8c8u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_de8c9:
    X86_TICK(c, 7);
    // 0de8c9  cmp edi, 0x28
    X86_AT(c, 0xde8c9u);
    (void)x86_sub(c, c.r[7], 0x28u, 0, 4);
    // 0de8cc  jge 0xde8f8
    X86_AT(c, 0xde8ccu);
    if (x86_cc(c, 13)) { goto L_de8f8; }
    X86_TICK(c, 9);
    // 0de8ce  push edi
    X86_AT(c, 0xde8ceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0de8cf  call 0xde4b8
    X86_AT(c, 0xde8cfu);
    push32(c, 0xde8d4u); x86_call_known(c, 0xde4b8u, f_000de4b8); X86_RET(c, 0xde8d4u);
    X86_TICK(c, 27);
    // 0de8d4  mov eax, dword ptr [0xbef9c]
    X86_AT(c, 0xde8d4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu)));
    // 0de8d9  add eax, 3
    X86_AT(c, 0xde8d9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3u, 0, 4); }
    // 0de8dc  mov dword ptr [edi*4 + 0xc2278], eax
    X86_AT(c, 0xde8dcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2278u)), c.r[0]);
    // 0de8e3  mov eax, dword ptr [0xbefa0]
    X86_AT(c, 0xde8e3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEFA0u)));
    // 0de8e8  add eax, 3
    X86_AT(c, 0xde8e8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3u, 0, 4); }
    // 0de8eb  mov dword ptr [edi*4 + 0xc2318], eax
    X86_AT(c, 0xde8ebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2318u)), c.r[0]);
    // 0de8f2  inc edi
    X86_AT(c, 0xde8f2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0de8f3  add esp, 4
    X86_AT(c, 0xde8f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de8f6  jmp 0xde8c9
    X86_AT(c, 0xde8f6u);
    X86_POLL(c, 0xde8c9u); goto L_de8c9;
L_de8f8:
    X86_TICK(c, 14);
    // 0de8f8  pop edi
    X86_AT(c, 0xde8f8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0de8f9  ret 
    X86_AT(c, 0xde8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde8c0u, "ran off the end of a function");
}
void f_000de8fc(X86Cpu& c) {
    X86_TICK(c, 77);
    // 0de8fc  push ebp
    X86_AT(c, 0xde8fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0de8fd  mov ebp, esp
    X86_AT(c, 0xde8fdu);
    c.r[5] = c.r[4];
    // 0de8ff  sub esp, 0x14
    X86_AT(c, 0xde8ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0de902  push ebx
    X86_AT(c, 0xde902u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0de903  push esi
    X86_AT(c, 0xde903u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0de904  push edi
    X86_AT(c, 0xde904u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0de905  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xde905u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0de90a  lea edx, [eax + eax*2]
    X86_AT(c, 0xde90au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0de90d  lea edx, [eax + edx*8]
    X86_AT(c, 0xde90du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0de910  lea edx, [eax + edx*4]
    X86_AT(c, 0xde910u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0de913  lea edx, [eax + edx*2]
    X86_AT(c, 0xde913u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0de916  shl edx, 2
    X86_AT(c, 0xde916u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0de919  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xde919u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0de920  add eax, edx
    X86_AT(c, 0xde920u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0de922  mov edx, dword ptr [0xc03d4]
    X86_AT(c, 0xde922u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0de928  lea edx, [edx*8]
    X86_AT(c, 0xde928u);
    c.r[2] = (uint32_t)(c.r[2] * 8);
    // 0de92f  lea edx, [edx + edx*2]
    X86_AT(c, 0xde92fu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0de932  add edx, eax
    X86_AT(c, 0xde932u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0de934  mov ebx, dword ptr [edx + 0xc0b08]
    X86_AT(c, 0xde934u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B08u)));
    // 0de93a  push dword ptr [0xbef80]
    X86_AT(c, 0xde93au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEF80u))); push32(c, v); }
    // 0de940  call 0xde3e8
    X86_AT(c, 0xde940u);
    push32(c, 0xde945u); x86_call_known(c, 0xde3e8u, f_000de3e8); X86_RET(c, 0xde945u);
    X86_TICK(c, 15);
    // 0de945  xchg edi, eax
    X86_AT(c, 0xde945u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0de946  push dword ptr [0xbef84]
    X86_AT(c, 0xde946u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEF84u))); push32(c, v); }
    // 0de94c  call 0xde3e8
    X86_AT(c, 0xde94cu);
    push32(c, 0xde951u); x86_call_known(c, 0xde3e8u, f_000de3e8); X86_RET(c, 0xde951u);
    X86_TICK(c, 12);
    // 0de951  xchg esi, eax
    X86_AT(c, 0xde951u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0de952  add esp, 8
    X86_AT(c, 0xde952u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0de955  and edi, edi
    X86_AT(c, 0xde955u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0de957  jne 0xde97a
    X86_AT(c, 0xde957u);
    if (x86_cc(c, 5)) { goto L_de97a; }
    X86_TICK(c, 7);
    // 0de959  and esi, esi
    X86_AT(c, 0xde959u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0de95b  jne 0xde97a
    X86_AT(c, 0xde95bu);
    if (x86_cc(c, 5)) { goto L_de97a; }
    X86_TICK(c, 7);
    // 0de95d  and ebx, ebx
    X86_AT(c, 0xde95du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0de95f  jne 0xde964
    X86_AT(c, 0xde95fu);
    if (x86_cc(c, 5)) { goto L_de964; }
    X86_TICK(c, 9);
    // 0de961  dec edi
    X86_AT(c, 0xde961u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0de962  jmp 0xde97a
    X86_AT(c, 0xde962u);
    goto L_de97a;
L_de964:
    X86_TICK(c, 7);
    // 0de964  cmp ebx, 1
    X86_AT(c, 0xde964u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0de967  jne 0xde96c
    X86_AT(c, 0xde967u);
    if (x86_cc(c, 5)) { goto L_de96c; }
    X86_TICK(c, 9);
    // 0de969  inc edi
    X86_AT(c, 0xde969u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0de96a  jmp 0xde97a
    X86_AT(c, 0xde96au);
    goto L_de97a;
L_de96c:
    X86_TICK(c, 7);
    // 0de96c  cmp ebx, 2
    X86_AT(c, 0xde96cu);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0de96f  jne 0xde974
    X86_AT(c, 0xde96fu);
    if (x86_cc(c, 5)) { goto L_de974; }
    X86_TICK(c, 9);
    // 0de971  dec esi
    X86_AT(c, 0xde971u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0de972  jmp 0xde97a
    X86_AT(c, 0xde972u);
    goto L_de97a;
L_de974:
    X86_TICK(c, 7);
    // 0de974  cmp ebx, 3
    X86_AT(c, 0xde974u);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0de977  jne 0xde97a
    X86_AT(c, 0xde977u);
    if (x86_cc(c, 5)) { goto L_de97a; }
    X86_TICK(c, 2);
    // 0de979  inc esi
    X86_AT(c, 0xde979u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_de97a:
    X86_TICK(c, 38);
    // 0de97a  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xde97au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0de97f  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xde97fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0de982  mov edx, dword ptr [0xc03d0]
    X86_AT(c, 0xde982u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC03D0u)));
    // 0de988  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xde988u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0de98b  add dword ptr [0xc03cc], edi
    X86_AT(c, 0xde98bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC03CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0de991  add dword ptr [0xc03d0], esi
    X86_AT(c, 0xde991u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC03D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0de997  cmp dword ptr [0xc03cc], 0
    X86_AT(c, 0xde997u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03CCu))), 0x0u, 0, 4);
    // 0de99e  jge 0xde9ac
    X86_AT(c, 0xde99eu);
    if (x86_cc(c, 13)) { goto L_de9ac; }
    X86_TICK(c, 9);
    // 0de9a0  mov dword ptr [0xc03cc], 6
    X86_AT(c, 0xde9a0u);
    wr32((c.sbase[3] + (uint32_t)(0xC03CCu)), 0x6u);
    // 0de9aa  jmp 0xde9bf
    X86_AT(c, 0xde9aau);
    goto L_de9bf;
L_de9ac:
    X86_TICK(c, 50);
    // 0de9ac  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xde9acu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0de9b1  cdq 
    X86_AT(c, 0xde9b1u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de9b2  mov ecx, 7
    X86_AT(c, 0xde9b2u);
    c.r[1] = 0x7u;
    // 0de9b7  idiv ecx
    X86_AT(c, 0xde9b7u);
    x86_idiv(c, c.r[1], 4, 0xde9b7u);
    // 0de9b9  mov dword ptr [0xc03cc], edx
    X86_AT(c, 0xde9b9u);
    wr32((c.sbase[3] + (uint32_t)(0xC03CCu)), c.r[2]);
L_de9bf:
    X86_TICK(c, 12);
    // 0de9bf  cmp dword ptr [0xc03d0], 0
    X86_AT(c, 0xde9bfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x0u, 0, 4);
    // 0de9c6  jge 0xde9d4
    X86_AT(c, 0xde9c6u);
    if (x86_cc(c, 13)) { goto L_de9d4; }
    X86_TICK(c, 9);
    // 0de9c8  mov dword ptr [0xc03d0], 6
    X86_AT(c, 0xde9c8u);
    wr32((c.sbase[3] + (uint32_t)(0xC03D0u)), 0x6u);
    // 0de9d2  jmp 0xde9e7
    X86_AT(c, 0xde9d2u);
    goto L_de9e7;
L_de9d4:
    X86_TICK(c, 50);
    // 0de9d4  mov eax, dword ptr [0xc03d0]
    X86_AT(c, 0xde9d4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03D0u)));
    // 0de9d9  cdq 
    X86_AT(c, 0xde9d9u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de9da  mov ecx, 7
    X86_AT(c, 0xde9dau);
    c.r[1] = 0x7u;
    // 0de9df  idiv ecx
    X86_AT(c, 0xde9dfu);
    x86_idiv(c, c.r[1], 4, 0xde9dfu);
    // 0de9e1  mov dword ptr [0xc03d0], edx
    X86_AT(c, 0xde9e1u);
    wr32((c.sbase[3] + (uint32_t)(0xC03D0u)), c.r[2]);
L_de9e7:
    X86_TICK(c, 2);
    // 0de9e7  sub ebx, ebx
    X86_AT(c, 0xde9e7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_de9e9:
    X86_TICK(c, 7);
    // 0de9e9  cmp ebx, 4
    X86_AT(c, 0xde9e9u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0de9ec  jge 0xdea23
    X86_AT(c, 0xde9ecu);
    if (x86_cc(c, 13)) { goto L_dea23; }
    X86_TICK(c, 57);
    // 0de9ee  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xde9eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0de9f3  lea edx, [eax + eax*2]
    X86_AT(c, 0xde9f3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0de9f6  lea edx, [eax + edx*8]
    X86_AT(c, 0xde9f6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0de9f9  lea edx, [eax + edx*4]
    X86_AT(c, 0xde9f9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0de9fc  lea edx, [eax + edx*2]
    X86_AT(c, 0xde9fcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0de9ff  shl edx, 2
    X86_AT(c, 0xde9ffu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0dea02  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdea02u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0dea09  add eax, edx
    X86_AT(c, 0xdea09u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dea0b  lea edx, [ebx*8]
    X86_AT(c, 0xdea0bu);
    c.r[2] = (uint32_t)(c.r[3] * 8);
    // 0dea12  lea edx, [edx + edx*2]
    X86_AT(c, 0xdea12u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0dea15  add edx, eax
    X86_AT(c, 0xdea15u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dea17  cmp dword ptr [edx + 0xc0afc], 0xffffffff
    X86_AT(c, 0xdea17u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AFCu))), 0xFFFFFFFFu, 0, 4);
    // 0dea1e  je 0xdea23
    X86_AT(c, 0xdea1eu);
    if (x86_cc(c, 4)) { goto L_dea23; }
    X86_TICK(c, 9);
    // 0dea20  inc ebx
    X86_AT(c, 0xdea20u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0dea21  jmp 0xde9e9
    X86_AT(c, 0xdea21u);
    X86_POLL(c, 0xde9e9u); goto L_de9e9;
L_dea23:
    X86_TICK(c, 7);
    // 0dea23  cmp ebx, 4
    X86_AT(c, 0xdea23u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0dea26  jne 0xdea2d
    X86_AT(c, 0xdea26u);
    if (x86_cc(c, 5)) { goto L_dea2d; }
    X86_TICK(c, 7);
    // 0dea28  call 0xe7a6c
    X86_AT(c, 0xdea28u);
    push32(c, 0xdea2du); x86_call_known(c, 0xe7a6cu, f_000e7a6c); X86_RET(c, 0xdea2du);
L_dea2d:
    X86_TICK(c, 167);
    // 0dea2d  mov eax, 0xb52f4
    X86_AT(c, 0xdea2du);
    c.r[0] = 0xB52F4u;
    // 0dea32  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdea32u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dea35  lea ecx, [edx + edx*2]
    X86_AT(c, 0xdea35u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0dea38  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xdea38u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0dea3b  lea ecx, [edx + ecx*4]
    X86_AT(c, 0xdea3bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 4);
    // 0dea3e  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xdea3eu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0dea41  shl ecx, 2
    X86_AT(c, 0xdea41u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0dea44  imul edx, dword ptr [ebp - 8], 0x74
    X86_AT(c, 0xdea44u);
    c.r[2] = x86_imul2(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x74u, 4);
    // 0dea48  add edx, ecx
    X86_AT(c, 0xdea48u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0dea4a  mov ecx, dword ptr [0xc03d4]
    X86_AT(c, 0xdea4au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0dea50  lea ecx, [ecx*8]
    X86_AT(c, 0xdea50u);
    c.r[1] = (uint32_t)(c.r[1] * 8);
    // 0dea57  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xdea57u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0dea5a  add ecx, edx
    X86_AT(c, 0xdea5au);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dea5c  mov edx, dword ptr [eax + 0xb0d8]
    X86_AT(c, 0xdea5cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0D8u)));
    // 0dea62  lea eax, [edx + edx*2]
    X86_AT(c, 0xdea62u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0dea65  lea eax, [edx + eax*8]
    X86_AT(c, 0xdea65u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 8);
    // 0dea68  lea eax, [edx + eax*4]
    X86_AT(c, 0xdea68u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 4);
    // 0dea6b  lea eax, [edx + eax*2]
    X86_AT(c, 0xdea6bu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0dea6e  shl eax, 2
    X86_AT(c, 0xdea6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 0dea71  imul edx, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdea71u);
    c.r[2] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0dea78  add edx, eax
    X86_AT(c, 0xdea78u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dea7a  lea eax, [ebx*8]
    X86_AT(c, 0xdea7au);
    c.r[0] = (uint32_t)(c.r[3] * 8);
    // 0dea81  lea eax, [eax + eax*2]
    X86_AT(c, 0xdea81u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dea84  add eax, edx
    X86_AT(c, 0xdea84u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dea86  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdea86u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0dea89  lea eax, [ecx + 0xc0af4]
    X86_AT(c, 0xdea89u);
    c.r[0] = (uint32_t)(c.r[1] + 0xC0AF4u);
    // 0dea8f  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xdea8fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0dea92  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdea92u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dea95  add edx, 0xc0af4
    X86_AT(c, 0xdea95u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xC0AF4u, 0, 4); }
    // 0dea9b  push esi
    X86_AT(c, 0xdea9bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dea9c  push edi
    X86_AT(c, 0xdea9cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dea9d  mov esi, eax
    X86_AT(c, 0xdea9du);
    c.r[6] = c.r[0];
    // 0dea9f  mov edi, edx
    X86_AT(c, 0xdea9fu);
    c.r[7] = c.r[2];
    // 0deaa1  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0xdeaa1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 0deaa4  mov ecx, 6
    X86_AT(c, 0xdeaa4u);
    c.r[1] = 0x6u;
    // 0deaa9  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdeaa9u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0deaab  pop edi
    X86_AT(c, 0xdeaabu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0deaac  pop esi
    X86_AT(c, 0xdeaacu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0deaad  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xdeaadu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0deab0  mov dword ptr [eax + 0xc0afc], 0xffffffff
    X86_AT(c, 0xdeab0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AFCu)), 0xFFFFFFFFu);
    // 0deaba  mov dword ptr [0xc03d4], ebx
    X86_AT(c, 0xdeabau);
    wr32((c.sbase[3] + (uint32_t)(0xC03D4u)), c.r[3]);
    // 0deac0  mov dword ptr [edx], 0x104
    X86_AT(c, 0xdeac0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), 0x104u);
    // 0deac6  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdeac6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0deac9  mov dword ptr [eax + 0xc0af8], 0x5a
    X86_AT(c, 0xdeac9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AF8u)), 0x5Au);
    // 0dead3  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xdead3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0dead6  cmp dword ptr [eax + 0xc0ae0], 0
    X86_AT(c, 0xdead6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AE0u))), 0x0u, 0, 4);
    // 0deadd  je 0xdeae4
    X86_AT(c, 0xdeaddu);
    if (x86_cc(c, 4)) { goto L_deae4; }
    X86_TICK(c, 7);
    // 0deadf  call 0xdefe8
    X86_AT(c, 0xdeadfu);
    push32(c, 0xdeae4u); x86_call_known(c, 0xdefe8u, f_000defe8); X86_RET(c, 0xdeae4u);
L_deae4:
    X86_TICK(c, 28);
    // 0deae4  pop edi
    X86_AT(c, 0xdeae4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0deae5  pop esi
    X86_AT(c, 0xdeae5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0deae6  pop ebx
    X86_AT(c, 0xdeae6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0deae7  leave 
    X86_AT(c, 0xdeae7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0deae8  ret 
    X86_AT(c, 0xdeae8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde8fcu, "ran off the end of a function");
}
void f_000deaec(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0deaec  push ebp
    X86_AT(c, 0xdeaecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0deaed  mov ebp, esp
    X86_AT(c, 0xdeaedu);
    c.r[5] = c.r[4];
    // 0deaef  sub esp, 0xb0
    X86_AT(c, 0xdeaefu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xB0u, 0, 4); }
    // 0deaf5  push ebx
    X86_AT(c, 0xdeaf5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0deaf6  push esi
    X86_AT(c, 0xdeaf6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0deaf7  push edi
    X86_AT(c, 0xdeaf7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0deaf8  push 0xd750
    X86_AT(c, 0xdeaf8u);
    { uint32_t v = 0xD750u; push32(c, v); }
    // 0deafd  push 7
    X86_AT(c, 0xdeafdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0deaff  call 0xc8cdc
    X86_AT(c, 0xdeaffu);
    push32(c, 0xdeb04u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdeb04u);
    X86_TICK(c, 14);
    // 0deb04  add esp, 8
    X86_AT(c, 0xdeb04u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0deb07  cmp dword ptr [0xc03d8], 0
    X86_AT(c, 0xdeb07u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D8u))), 0x0u, 0, 4);
    // 0deb0e  jne 0xdeb3d
    X86_AT(c, 0xdeb0eu);
    if (x86_cc(c, 5)) { goto L_deb3d; }
    X86_TICK(c, 9);
    // 0deb10  push 0xd774
    X86_AT(c, 0xdeb10u);
    { uint32_t v = 0xD774u; push32(c, v); }
    // 0deb15  call 0xcc7bc
    X86_AT(c, 0xdeb15u);
    push32(c, 0xdeb1au); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdeb1au);
    X86_TICK(c, 9);
    // 0deb1a  push 0xd77c
    X86_AT(c, 0xdeb1au);
    { uint32_t v = 0xD77Cu; push32(c, v); }
    // 0deb1f  call 0xcc7bc
    X86_AT(c, 0xdeb1fu);
    push32(c, 0xdeb24u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdeb24u);
    X86_TICK(c, 9);
    // 0deb24  push 0xd7ac
    X86_AT(c, 0xdeb24u);
    { uint32_t v = 0xD7ACu; push32(c, v); }
    // 0deb29  call 0xcc7bc
    X86_AT(c, 0xdeb29u);
    push32(c, 0xdeb2eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdeb2eu);
    X86_TICK(c, 9);
    // 0deb2e  push 0xd7e0
    X86_AT(c, 0xdeb2eu);
    { uint32_t v = 0xD7E0u; push32(c, v); }
    // 0deb33  call 0xcc7bc
    X86_AT(c, 0xdeb33u);
    push32(c, 0xdeb38u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdeb38u);
    X86_TICK(c, 7);
    // 0deb38  jmp 0xdeda1
    X86_AT(c, 0xdeb38u);
    goto L_deda1;
L_deb3d:
    X86_TICK(c, 7);
    // 0deb3d  call 0xdf824
    X86_AT(c, 0xdeb3du);
    push32(c, 0xdeb42u); x86_call_known(c, 0xdf824u, f_000df824); X86_RET(c, 0xdeb42u);
    X86_TICK(c, 7);
    // 0deb42  cmp eax, 0x64
    X86_AT(c, 0xdeb42u);
    (void)x86_sub(c, c.r[0], 0x64u, 0, 4);
    // 0deb45  jge 0xdeb63
    X86_AT(c, 0xdeb45u);
    if (x86_cc(c, 13)) { goto L_deb63; }
    X86_TICK(c, 9);
    // 0deb47  push 0xd80a
    X86_AT(c, 0xdeb47u);
    { uint32_t v = 0xD80Au; push32(c, v); }
    // 0deb4c  call 0xcc7bc
    X86_AT(c, 0xdeb4cu);
    push32(c, 0xdeb51u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdeb51u);
    X86_TICK(c, 9);
    // 0deb51  push 0xd80c
    X86_AT(c, 0xdeb51u);
    { uint32_t v = 0xD80Cu; push32(c, v); }
    // 0deb56  call 0xcc7bc
    X86_AT(c, 0xdeb56u);
    push32(c, 0xdeb5bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdeb5bu);
    X86_TICK(c, 9);
    // 0deb5b  add esp, 8
    X86_AT(c, 0xdeb5bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0deb5e  jmp 0xdeda4
    X86_AT(c, 0xdeb5eu);
    goto L_deda4;
L_deb63:
    X86_TICK(c, 27);
    // 0deb63  push 9
    X86_AT(c, 0xdeb63u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0deb65  push 0xf
    X86_AT(c, 0xdeb65u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0deb67  push 0xb
    X86_AT(c, 0xdeb67u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0deb69  push 0x17
    X86_AT(c, 0xdeb69u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0deb6b  push 0x4d
    X86_AT(c, 0xdeb6bu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0deb6d  push 0xf8
    X86_AT(c, 0xdeb6du);
    { uint32_t v = 0xF8u; push32(c, v); }
    // 0deb72  push 0x270
    X86_AT(c, 0xdeb72u);
    { uint32_t v = 0x270u; push32(c, v); }
    // 0deb77  push 0x30
    X86_AT(c, 0xdeb77u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0deb79  push 8
    X86_AT(c, 0xdeb79u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0deb7b  push 4
    X86_AT(c, 0xdeb7bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0deb7d  call 0xc9fbc
    X86_AT(c, 0xdeb7du);
    push32(c, 0xdeb82u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xdeb82u);
    X86_TICK(c, 9);
    // 0deb82  push 4
    X86_AT(c, 0xdeb82u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0deb84  call 0xca0a0
    X86_AT(c, 0xdeb84u);
    push32(c, 0xdeb89u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdeb89u);
    X86_TICK(c, 9);
    // 0deb89  push 4
    X86_AT(c, 0xdeb89u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0deb8b  call 0xca100
    X86_AT(c, 0xdeb8bu);
    push32(c, 0xdeb90u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xdeb90u);
    X86_TICK(c, 17);
    // 0deb90  mov dword ptr [0xbef9c], 0x140
    X86_AT(c, 0xdeb90u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF9Cu)), 0x140u);
    // 0deb9a  mov dword ptr [0xbefa0], 0xac
    X86_AT(c, 0xdeb9au);
    wr32((c.sbase[3] + (uint32_t)(0xBEFA0u)), 0xACu);
    // 0deba4  sub eax, eax
    X86_AT(c, 0xdeba4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0deba6  mov dword ptr [0xbef98], eax
    X86_AT(c, 0xdeba6u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF98u)), c.r[0]);
    // 0debab  mov dword ptr [0xbef94], eax
    X86_AT(c, 0xdebabu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF94u)), c.r[0]);
    // 0debb0  call 0xde408
    X86_AT(c, 0xdebb0u);
    push32(c, 0xdebb5u); x86_call_known(c, 0xde408u, f_000de408); X86_RET(c, 0xdebb5u);
    X86_TICK(c, 13);
    // 0debb5  mov dword ptr [0xc2d3c], 0x14
    X86_AT(c, 0xdebb5u);
    wr32((c.sbase[3] + (uint32_t)(0xC2D3Cu)), 0x14u);
    // 0debbf  push 0xd838
    X86_AT(c, 0xdebbfu);
    { uint32_t v = 0xD838u; push32(c, v); }
    // 0debc4  push 7
    X86_AT(c, 0xdebc4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0debc6  call 0xc8cdc
    X86_AT(c, 0xdebc6u);
    push32(c, 0xdebcbu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdebcbu);
    X86_TICK(c, 7);
    // 0debcb  call 0xc5e0c
    X86_AT(c, 0xdebcbu);
    push32(c, 0xdebd0u); x86_call_known(c, 0xc5e0cu, f_000c5e0c); X86_RET(c, 0xdebd0u);
    X86_TICK(c, 19);
    // 0debd0  or ax, 0xbbbb
    X86_AT(c, 0xdebd0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | 0xBBBBu, 2)); }
    // 0debd4  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdebd4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0debd7  mov eax, dword ptr [0xbef7c]
    X86_AT(c, 0xdebd7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF7Cu)));
    // 0debdc  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdebdcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0debdf  add esp, 0x38
    X86_AT(c, 0xdebdfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0debe2  cmp eax, 4
    X86_AT(c, 0xdebe2u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0debe5  jge 0xdebee
    X86_AT(c, 0xdebe5u);
    if (x86_cc(c, 13)) { goto L_debee; }
    X86_TICK(c, 9);
    // 0debe7  mov ebx, 0xa
    X86_AT(c, 0xdebe7u);
    c.r[3] = 0xAu;
    // 0debec  jmp 0xdebf3
    X86_AT(c, 0xdebecu);
    goto L_debf3;
L_debee:
    X86_TICK(c, 2);
    // 0debee  mov ebx, 0xf
    X86_AT(c, 0xdebeeu);
    c.r[3] = 0xFu;
L_debf3:
    X86_TICK(c, 6);
    // 0debf3  mov dword ptr [0xc2d14], 1
    X86_AT(c, 0xdebf3u);
    wr32((c.sbase[3] + (uint32_t)(0xC2D14u)), 0x1u);
    // 0debfd  mov esi, dword ptr [ebp - 4]
    X86_AT(c, 0xdebfdu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_dec00:
    X86_TICK(c, 7);
    // 0dec00  cmp esi, 9
    X86_AT(c, 0xdec00u);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0dec03  jge 0xdec1c
    X86_AT(c, 0xdec03u);
    if (x86_cc(c, 13)) { goto L_dec1c; }
    X86_TICK(c, 4);
    // 0dec05  mov dword ptr [0xbef7c], esi
    X86_AT(c, 0xdec05u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF7Cu)), c.r[6]);
    // 0dec0b  sub edi, edi
    X86_AT(c, 0xdec0bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_dec0d:
    X86_TICK(c, 7);
    // 0dec0d  cmp ebx, edi
    X86_AT(c, 0xdec0du);
    (void)x86_sub(c, c.r[3], c.r[7], 0, 4);
    // 0dec0f  jl 0xdec19
    X86_AT(c, 0xdec0fu);
    if (x86_cc(c, 12)) { goto L_dec19; }
    X86_TICK(c, 7);
    // 0dec11  call 0xe0034
    X86_AT(c, 0xdec11u);
    push32(c, 0xdec16u); x86_call_known(c, 0xe0034u, f_000e0034); X86_RET(c, 0xdec16u);
    X86_TICK(c, 9);
    // 0dec16  inc edi
    X86_AT(c, 0xdec16u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dec17  jmp 0xdec0d
    X86_AT(c, 0xdec17u);
    X86_POLL(c, 0xdec0du); goto L_dec0d;
L_dec19:
    X86_TICK(c, 9);
    // 0dec19  inc esi
    X86_AT(c, 0xdec19u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0dec1a  jmp 0xdec00
    X86_AT(c, 0xdec1au);
    X86_POLL(c, 0xdec00u); goto L_dec00;
L_dec1c:
    X86_TICK(c, 9);
    // 0dec1c  sub eax, eax
    X86_AT(c, 0xdec1cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dec1e  mov dword ptr [0xbef7c], eax
    X86_AT(c, 0xdec1eu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF7Cu)), c.r[0]);
    // 0dec23  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdec23u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0dec26  xchg edi, eax
    X86_AT(c, 0xdec26u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_dec27:
    X86_TICK(c, 7);
    // 0dec27  cmp edi, 0x28
    X86_AT(c, 0xdec27u);
    (void)x86_sub(c, c.r[7], 0x28u, 0, 4);
    // 0dec2a  jge 0xdec72
    X86_AT(c, 0xdec2au);
    if (x86_cc(c, 13)) { goto L_dec72; }
    X86_TICK(c, 17);
    // 0dec2c  push dword ptr [edi*4 + 0xc2318]
    X86_AT(c, 0xdec2cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2318u))); push32(c, v); }
    // 0dec33  push dword ptr [edi*4 + 0xc2278]
    X86_AT(c, 0xdec33u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2278u))); push32(c, v); }
    // 0dec3a  call 0xde3bc
    X86_AT(c, 0xdec3au);
    push32(c, 0xdec3fu); x86_call_known(c, 0xde3bcu, f_000de3bc); X86_RET(c, 0xdec3fu);
    X86_TICK(c, 9);
    // 0dec3f  add esp, 8
    X86_AT(c, 0xdec3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dec42  and eax, eax
    X86_AT(c, 0xdec42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dec44  je 0xdec59
    X86_AT(c, 0xdec44u);
    if (x86_cc(c, 4)) { goto L_dec59; }
    X86_TICK(c, 10);
    // 0dec46  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdec46u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dec49  mov dx, word ptr [edi*4 + 0xc2278]
    X86_AT(c, 0xdec49u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2278u))));
    // 0dec51  mov word ptr [ebp + eax*4 - 0xae], dx
    X86_AT(c, 0xdec51u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xFFFFFF52u)), (c.r[2] & 0xFFFFu));
L_dec59:
    X86_TICK(c, 25);
    // 0dec59  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdec59u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dec5c  mov dx, word ptr [edi*4 + 0xc2318]
    X86_AT(c, 0xdec5cu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2318u))));
    // 0dec64  mov word ptr [ebp + eax*4 - 0xac], dx
    X86_AT(c, 0xdec64u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xFFFFFF54u)), (c.r[2] & 0xFFFFu));
    // 0dec6c  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xdec6cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dec6f  inc edi
    X86_AT(c, 0xdec6fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dec70  jmp 0xdec27
    X86_AT(c, 0xdec70u);
    X86_POLL(c, 0xdec27u); goto L_dec27;
L_dec72:
    X86_TICK(c, 9);
    // 0dec72  push 9
    X86_AT(c, 0xdec72u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0dec74  call 0xc8dd4
    X86_AT(c, 0xdec74u);
    push32(c, 0xdec79u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xdec79u);
    X86_TICK(c, 19);
    // 0dec79  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0xdec79u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0dec7d  mov word ptr [ebp - 0xb0], ax
    X86_AT(c, 0xdec7du);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF50u)), (c.r[0] & 0xFFFFu));
    // 0dec84  lea eax, [ebp - 0xb0]
    X86_AT(c, 0xdec84u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF50u);
    // 0dec8a  push eax
    X86_AT(c, 0xdec8au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dec8b  push 0x4bfd8
    X86_AT(c, 0xdec8bu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0dec90  call 0x7e5
    X86_AT(c, 0xdec90u);
    push32(c, 0xdec95u); x86_call_known(c, 0x7e5u, f_000007e5); X86_RET(c, 0xdec95u);
    X86_TICK(c, 9);
    // 0dec95  push 0xf
    X86_AT(c, 0xdec95u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dec97  call 0xc8dd4
    X86_AT(c, 0xdec97u);
    push32(c, 0xdec9cu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xdec9cu);
    X86_TICK(c, 9);
    // 0dec9c  push 0xd848
    X86_AT(c, 0xdec9cu);
    { uint32_t v = 0xD848u; push32(c, v); }
    // 0deca1  call 0xcc7bc
    X86_AT(c, 0xdeca1u);
    push32(c, 0xdeca6u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdeca6u);
    X86_TICK(c, 12);
    // 0deca6  push dword ptr [ebp - 8]
    X86_AT(c, 0xdeca6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0deca9  call 0xe78dc
    X86_AT(c, 0xdeca9u);
    push32(c, 0xdecaeu); x86_call_known(c, 0xe78dcu, f_000e78dc); X86_RET(c, 0xdecaeu);
    X86_TICK(c, 7);
    // 0decae  call 0xde8c0
    X86_AT(c, 0xdecaeu);
    push32(c, 0xdecb3u); x86_call_known(c, 0xde8c0u, f_000de8c0); X86_RET(c, 0xdecb3u);
    X86_TICK(c, 6);
    // 0decb3  mov dword ptr [0xb52f4], 1
    X86_AT(c, 0xdecb3u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F4u)), 0x1u);
    // 0decbd  sub edi, edi
    X86_AT(c, 0xdecbdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0decbf  add esp, 0x18
    X86_AT(c, 0xdecbfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_decc2:
    X86_TICK(c, 7);
    // 0decc2  cmp edi, 0xc8
    X86_AT(c, 0xdecc2u);
    (void)x86_sub(c, c.r[7], 0xC8u, 0, 4);
    // 0decc8  jg 0xdecd2
    X86_AT(c, 0xdecc8u);
    if (x86_cc(c, 15)) { goto L_decd2; }
    X86_TICK(c, 7);
    // 0decca  call 0xde5b4
    X86_AT(c, 0xdeccau);
    push32(c, 0xdeccfu); x86_call_known(c, 0xde5b4u, f_000de5b4); X86_RET(c, 0xdeccfu);
    X86_TICK(c, 9);
    // 0deccf  inc edi
    X86_AT(c, 0xdeccfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0decd0  jmp 0xdecc2
    X86_AT(c, 0xdecd0u);
    X86_POLL(c, 0xdecc2u); goto L_decc2;
L_decd2:
    X86_TICK(c, 12);
    // 0decd2  push dword ptr [ebp - 8]
    X86_AT(c, 0xdecd2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0decd5  call 0xe78dc
    X86_AT(c, 0xdecd5u);
    push32(c, 0xdecdau); x86_call_known(c, 0xe78dcu, f_000e78dc); X86_RET(c, 0xdecdau);
    X86_TICK(c, 7);
    // 0decda  call 0xde8c0
    X86_AT(c, 0xdecdau);
    push32(c, 0xdecdfu); x86_call_known(c, 0xde8c0u, f_000de8c0); X86_RET(c, 0xdecdfu);
    X86_TICK(c, 6);
    // 0decdf  mov dword ptr [0xb52f4], 3
    X86_AT(c, 0xdecdfu);
    wr32((c.sbase[3] + (uint32_t)(0xB52F4u)), 0x3u);
    // 0dece9  sub edi, edi
    X86_AT(c, 0xdece9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0deceb  add esp, 4
    X86_AT(c, 0xdecebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_decee:
    X86_TICK(c, 7);
    // 0decee  cmp edi, 0xc7
    X86_AT(c, 0xdeceeu);
    (void)x86_sub(c, c.r[7], 0xC7u, 0, 4);
    // 0decf4  jg 0xdecfe
    X86_AT(c, 0xdecf4u);
    if (x86_cc(c, 15)) { goto L_decfe; }
    X86_TICK(c, 7);
    // 0decf6  call 0xde5b4
    X86_AT(c, 0xdecf6u);
    push32(c, 0xdecfbu); x86_call_known(c, 0xde5b4u, f_000de5b4); X86_RET(c, 0xdecfbu);
    X86_TICK(c, 9);
    // 0decfb  inc edi
    X86_AT(c, 0xdecfbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0decfc  jmp 0xdecee
    X86_AT(c, 0xdecfcu);
    X86_POLL(c, 0xdeceeu); goto L_decee;
L_decfe:
    X86_TICK(c, 4);
    // 0decfe  mov dword ptr [0xb52f4], 2
    X86_AT(c, 0xdecfeu);
    wr32((c.sbase[3] + (uint32_t)(0xB52F4u)), 0x2u);
    // 0ded08  mov esi, 8
    X86_AT(c, 0xded08u);
    c.r[6] = 0x8u;
L_ded0d:
    X86_TICK(c, 11);
    // 0ded0d  cmp esi, dword ptr [ebp - 4]
    X86_AT(c, 0xded0du);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0ded10  jle 0xded3d
    X86_AT(c, 0xded10u);
    if (x86_cc(c, 14)) { goto L_ded3d; }
    X86_TICK(c, 4);
    // 0ded12  mov dword ptr [0xbef7c], esi
    X86_AT(c, 0xded12u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF7Cu)), c.r[6]);
    // 0ded18  sub edi, edi
    X86_AT(c, 0xded18u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_ded1a:
    X86_TICK(c, 7);
    // 0ded1a  cmp ebx, edi
    X86_AT(c, 0xded1au);
    (void)x86_sub(c, c.r[3], c.r[7], 0, 4);
    // 0ded1c  jl 0xded3a
    X86_AT(c, 0xded1cu);
    if (x86_cc(c, 12)) { goto L_ded3a; }
    X86_TICK(c, 7);
    // 0ded1e  call 0xde5b4
    X86_AT(c, 0xded1eu);
    push32(c, 0xded23u); x86_call_known(c, 0xde5b4u, f_000de5b4); X86_RET(c, 0xded23u);
    X86_TICK(c, 16);
    // 0ded23  mov eax, dword ptr [0xbef7c]
    X86_AT(c, 0xded23u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF7Cu)));
    // 0ded28  push dword ptr [eax*4 + 0xc2d18]
    X86_AT(c, 0xded28u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xC2D18u))); push32(c, v); }
    // 0ded2f  call 0xdd728
    X86_AT(c, 0xded2fu);
    push32(c, 0xded34u); x86_call_known(c, 0xdd728u, f_000dd728); X86_RET(c, 0xded34u);
    X86_TICK(c, 11);
    // 0ded34  inc edi
    X86_AT(c, 0xded34u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ded35  add esp, 4
    X86_AT(c, 0xded35u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ded38  jmp 0xded1a
    X86_AT(c, 0xded38u);
    X86_POLL(c, 0xded1au); goto L_ded1a;
L_ded3a:
    X86_TICK(c, 9);
    // 0ded3a  dec esi
    X86_AT(c, 0xded3au);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0ded3b  jmp 0xded0d
    X86_AT(c, 0xded3bu);
    X86_POLL(c, 0xded0du); goto L_ded0d;
L_ded3d:
    X86_TICK(c, 9);
    // 0ded3d  push 0xf
    X86_AT(c, 0xded3du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ded3f  call 0xde55c
    X86_AT(c, 0xded3fu);
    push32(c, 0xded44u); x86_call_known(c, 0xde55cu, f_000de55c); X86_RET(c, 0xded44u);
    X86_TICK(c, 9);
    // 0ded44  push 0xd86c
    X86_AT(c, 0xded44u);
    { uint32_t v = 0xD86Cu; push32(c, v); }
    // 0ded49  call 0xcc7bc
    X86_AT(c, 0xded49u);
    push32(c, 0xded4eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xded4eu);
    X86_TICK(c, 9);
    // 0ded4e  push 0x64
    X86_AT(c, 0xded4eu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0ded50  call 0xdf85c
    X86_AT(c, 0xded50u);
    push32(c, 0xded55u); x86_call_known(c, 0xdf85cu, f_000df85c); X86_RET(c, 0xded55u);
    X86_TICK(c, 7);
    // 0ded55  call 0xc5e0c
    X86_AT(c, 0xded55u);
    push32(c, 0xded5au); x86_call_known(c, 0xc5e0cu, f_000c5e0c); X86_RET(c, 0xded5au);
    X86_TICK(c, 11);
    // 0ded5a  add eax, 0x4d2
    X86_AT(c, 0xded5au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4D2u, 0, 4); }
    // 0ded5f  push eax
    X86_AT(c, 0xded5fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ded60  call 0xe78dc
    X86_AT(c, 0xded60u);
    push32(c, 0xded65u); x86_call_known(c, 0xe78dcu, f_000e78dc); X86_RET(c, 0xded65u);
    X86_TICK(c, 23);
    // 0ded65  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xded65u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ded68  mov dword ptr [0xbef7c], eax
    X86_AT(c, 0xded68u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF7Cu)), c.r[0]);
    // 0ded6d  mov dword ptr [0xc2d0c], 0
    X86_AT(c, 0xded6du);
    wr32((c.sbase[3] + (uint32_t)(0xC2D0Cu)), 0x0u);
    // 0ded77  sub eax, eax
    X86_AT(c, 0xded77u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ded79  mov dword ptr [0xc2d08], eax
    X86_AT(c, 0xded79u);
    wr32((c.sbase[3] + (uint32_t)(0xC2D08u)), c.r[0]);
    // 0ded7e  mov dword ptr [0xc2d04], eax
    X86_AT(c, 0xded7eu);
    wr32((c.sbase[3] + (uint32_t)(0xC2D04u)), c.r[0]);
    // 0ded83  mov dword ptr [0xc2d00], eax
    X86_AT(c, 0xded83u);
    wr32((c.sbase[3] + (uint32_t)(0xC2D00u)), c.r[0]);
    // 0ded88  call 0xde8fc
    X86_AT(c, 0xded88u);
    push32(c, 0xded8du); x86_call_known(c, 0xde8fcu, f_000de8fc); X86_RET(c, 0xded8du);
    X86_TICK(c, 4);
    // 0ded8d  mov dword ptr [0xc2d14], 0
    X86_AT(c, 0xded8du);
    wr32((c.sbase[3] + (uint32_t)(0xC2D14u)), 0x0u);
    // 0ded97  mov dword ptr [0xbef88], 0
    X86_AT(c, 0xded97u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF88u)), 0x0u);
L_deda1:
    X86_TICK(c, 2);
    // 0deda1  add esp, 0x10
    X86_AT(c, 0xdeda1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_deda4:
    X86_TICK(c, 28);
    // 0deda4  pop edi
    X86_AT(c, 0xdeda4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0deda5  pop esi
    X86_AT(c, 0xdeda5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0deda6  pop ebx
    X86_AT(c, 0xdeda6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0deda7  leave 
    X86_AT(c, 0xdeda7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0deda8  ret 
    X86_AT(c, 0xdeda8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdeaecu, "ran off the end of a function");
}
void f_000dedac(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0dedac  push 0xb
    X86_AT(c, 0xdedacu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0dedae  push 0xd888
    X86_AT(c, 0xdedaeu);
    { uint32_t v = 0xD888u; push32(c, v); }
    // 0dedb3  call 0xcc830
    X86_AT(c, 0xdedb3u);
    push32(c, 0xdedb8u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xdedb8u);
    X86_TICK(c, 11);
    // 0dedb8  push 0xb
    X86_AT(c, 0xdedb8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0dedba  push 0xd8c8
    X86_AT(c, 0xdedbau);
    { uint32_t v = 0xD8C8u; push32(c, v); }
    // 0dedbf  call 0xcc830
    X86_AT(c, 0xdedbfu);
    push32(c, 0xdedc4u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xdedc4u);
    X86_TICK(c, 11);
    // 0dedc4  push 0xb
    X86_AT(c, 0xdedc4u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0dedc6  push 0xd8f0
    X86_AT(c, 0xdedc6u);
    { uint32_t v = 0xD8F0u; push32(c, v); }
    // 0dedcb  call 0xcc830
    X86_AT(c, 0xdedcbu);
    push32(c, 0xdedd0u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xdedd0u);
    X86_TICK(c, 9);
    // 0dedd0  push 5
    X86_AT(c, 0xdedd0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0dedd2  call 0xd6660
    X86_AT(c, 0xdedd2u);
    push32(c, 0xdedd7u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xdedd7u);
    X86_TICK(c, 7);
    // 0dedd7  call 0xcf604
    X86_AT(c, 0xdedd7u);
    push32(c, 0xdeddcu); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xdeddcu);
    X86_TICK(c, 7);
    // 0deddc  call 0xe09d8
    X86_AT(c, 0xdeddcu);
    push32(c, 0xdede1u); x86_call_known(c, 0xe09d8u, f_000e09d8); X86_RET(c, 0xdede1u);
    X86_TICK(c, 12);
    // 0dede1  add esp, 0x1c
    X86_AT(c, 0xdede1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0dede4  ret 
    X86_AT(c, 0xdede4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdedacu, "ran off the end of a function");
}
void f_000dede8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0dede8  push ebp
    X86_AT(c, 0xdede8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dede9  mov ebp, esp
    X86_AT(c, 0xdede9u);
    c.r[5] = c.r[4];
    // 0dedeb  push eax
    X86_AT(c, 0xdedebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dedec  push ebx
    X86_AT(c, 0xdedecu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0deded  push esi
    X86_AT(c, 0xdededu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dedee  push edi
    X86_AT(c, 0xdedeeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dedef  push 0xd914
    X86_AT(c, 0xdedefu);
    { uint32_t v = 0xD914u; push32(c, v); }
    // 0dedf4  call 0xcc7bc
    X86_AT(c, 0xdedf4u);
    push32(c, 0xdedf9u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdedf9u);
    X86_TICK(c, 7);
    // 0dedf9  call 0xdf824
    X86_AT(c, 0xdedf9u);
    push32(c, 0xdedfeu); x86_call_known(c, 0xdf824u, f_000df824); X86_RET(c, 0xdedfeu);
    X86_TICK(c, 9);
    // 0dedfe  add esp, 4
    X86_AT(c, 0xdedfeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dee01  cmp eax, 0xa
    X86_AT(c, 0xdee01u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0dee04  jge 0xdee18
    X86_AT(c, 0xdee04u);
    if (x86_cc(c, 13)) { goto L_dee18; }
    X86_TICK(c, 9);
    // 0dee06  push 0xd92c
    X86_AT(c, 0xdee06u);
    { uint32_t v = 0xD92Cu; push32(c, v); }
    // 0dee0b  call 0xcc7bc
    X86_AT(c, 0xdee0bu);
    push32(c, 0xdee10u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdee10u);
    X86_TICK(c, 9);
    // 0dee10  add esp, 4
    X86_AT(c, 0xdee10u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dee13  jmp 0xdefe1
    X86_AT(c, 0xdee13u);
    goto L_defe1;
L_dee18:
    X86_TICK(c, 9);
    // 0dee18  push 0xa
    X86_AT(c, 0xdee18u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0dee1a  call 0xdf85c
    X86_AT(c, 0xdee1au);
    push32(c, 0xdee1fu); x86_call_known(c, 0xdf85cu, f_000df85c); X86_RET(c, 0xdee1fu);
    X86_TICK(c, 13);
    // 0dee1f  add esp, 4
    X86_AT(c, 0xdee1fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dee22  mov eax, dword ptr [0xc2d00]
    X86_AT(c, 0xdee22u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2D00u)));
    // 0dee27  and eax, eax
    X86_AT(c, 0xdee27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dee29  je 0xdee5c
    X86_AT(c, 0xdee29u);
    if (x86_cc(c, 4)) { goto L_dee5c; }
    X86_TICK(c, 21);
    // 0dee2b  push 1
    X86_AT(c, 0xdee2bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dee2d  push dword ptr [0xc2d10]
    X86_AT(c, 0xdee2du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2D10u))); push32(c, v); }
    // 0dee33  push dword ptr [0xc2d04]
    X86_AT(c, 0xdee33u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2D04u))); push32(c, v); }
    // 0dee39  push eax
    X86_AT(c, 0xdee39u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dee3a  call 0xdfbc0
    X86_AT(c, 0xdee3au);
    push32(c, 0xdee3fu); x86_call_known(c, 0xdfbc0u, f_000dfbc0); X86_RET(c, 0xdee3fu);
    X86_TICK(c, 29);
    // 0dee3f  mov edi, dword ptr [0xbef9c]
    X86_AT(c, 0xdee3fu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu)));
    // 0dee45  sub edi, dword ptr [0xc2d00]
    X86_AT(c, 0xdee45u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2D00u))), 0, 4); }
    // 0dee4b  mov esi, dword ptr [0xbefa0]
    X86_AT(c, 0xdee4bu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xBEFA0u)));
    // 0dee51  sub esi, dword ptr [0xc2d04]
    X86_AT(c, 0xdee51u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2D04u))), 0, 4); }
    // 0dee57  add esp, 0x10
    X86_AT(c, 0xdee57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0dee5a  jmp 0xdee63
    X86_AT(c, 0xdee5au);
    goto L_dee63;
L_dee5c:
    X86_TICK(c, 4);
    // 0dee5c  mov esi, 0xffffff9c
    X86_AT(c, 0xdee5cu);
    c.r[6] = 0xFFFFFF9Cu;
    // 0dee61  mov edi, esi
    X86_AT(c, 0xdee61u);
    c.r[7] = c.r[6];
L_dee63:
    X86_TICK(c, 23);
    // 0dee63  push 0xe
    X86_AT(c, 0xdee63u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0dee65  push dword ptr [0xbefa0]
    X86_AT(c, 0xdee65u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEFA0u))); push32(c, v); }
    // 0dee6b  push dword ptr [0xbef9c]
    X86_AT(c, 0xdee6bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu))); push32(c, v); }
    // 0dee71  push 0x122
    X86_AT(c, 0xdee71u);
    { uint32_t v = 0x122u; push32(c, v); }
    // 0dee76  push 0xc
    X86_AT(c, 0xdee76u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0dee78  call 0xc9378
    X86_AT(c, 0xdee78u);
    push32(c, 0xdee7du); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xdee7du);
    X86_TICK(c, 23);
    // 0dee7d  push 0xe
    X86_AT(c, 0xdee7du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0dee7f  push dword ptr [0xbefa0]
    X86_AT(c, 0xdee7fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEFA0u))); push32(c, v); }
    // 0dee85  push dword ptr [0xbef9c]
    X86_AT(c, 0xdee85u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu))); push32(c, v); }
    // 0dee8b  push 0x122
    X86_AT(c, 0xdee8bu);
    { uint32_t v = 0x122u; push32(c, v); }
    // 0dee90  push 0x274
    X86_AT(c, 0xdee90u);
    { uint32_t v = 0x274u; push32(c, v); }
    // 0dee95  call 0xc9378
    X86_AT(c, 0xdee95u);
    push32(c, 0xdee9au); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xdee9au);
    X86_TICK(c, 9);
    // 0dee9a  push 4
    X86_AT(c, 0xdee9au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dee9c  call 0xc5ca4
    X86_AT(c, 0xdee9cu);
    push32(c, 0xdeea1u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdeea1u);
    X86_TICK(c, 27);
    // 0deea1  mov eax, dword ptr [0xc2d10]
    X86_AT(c, 0xdeea1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2D10u)));
    // 0deea6  mov edx, dword ptr [eax*4 + 0xc03e0]
    X86_AT(c, 0xdeea6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xC03E0u)));
    // 0deead  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xdeeadu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0deeb0  mov ebx, dword ptr [eax*4 + 0xc03fc]
    X86_AT(c, 0xdeeb0u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xC03FCu)));
    // 0deeb7  add esp, 0x2c
    X86_AT(c, 0xdeeb7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0deeba  mov edx, dword ptr [0xc2d00]
    X86_AT(c, 0xdeebau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC2D00u)));
    // 0deec0  and edx, edx
    X86_AT(c, 0xdeec0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0deec2  je 0xdeed6
    X86_AT(c, 0xdeec2u);
    if (x86_cc(c, 4)) { goto L_deed6; }
    X86_TICK(c, 18);
    // 0deec4  push 0
    X86_AT(c, 0xdeec4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0deec6  push eax
    X86_AT(c, 0xdeec6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0deec7  push dword ptr [0xc2d04]
    X86_AT(c, 0xdeec7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2D04u))); push32(c, v); }
    // 0deecd  push edx
    X86_AT(c, 0xdeecdu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0deece  call 0xdfbc0
    X86_AT(c, 0xdeeceu);
    push32(c, 0xdeed3u); x86_call_known(c, 0xdfbc0u, f_000dfbc0); X86_RET(c, 0xdeed3u);
    X86_TICK(c, 2);
    // 0deed3  add esp, 0x10
    X86_AT(c, 0xdeed3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_deed6:
    X86_TICK(c, 15);
    // 0deed6  mov eax, dword ptr [0xc2d10]
    X86_AT(c, 0xdeed6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2D10u)));
    // 0deedb  cmp edi, dword ptr [eax*4 + 0xc0418]
    X86_AT(c, 0xdeedbu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xC0418u))), 0, 4);
    // 0deee2  jl 0xdefa0
    X86_AT(c, 0xdeee2u);
    if (x86_cc(c, 12)) { goto L_defa0; }
    X86_TICK(c, 11);
    // 0deee8  cmp edi, dword ptr [ebp - 4]
    X86_AT(c, 0xdeee8u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0deeeb  jg 0xdefa0
    X86_AT(c, 0xdeeebu);
    if (x86_cc(c, 15)) { goto L_defa0; }
    X86_TICK(c, 11);
    // 0deef1  cmp esi, dword ptr [eax*4 + 0xc0434]
    X86_AT(c, 0xdeef1u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xC0434u))), 0, 4);
    // 0deef8  jl 0xdefa0
    X86_AT(c, 0xdeef8u);
    if (x86_cc(c, 12)) { goto L_defa0; }
    X86_TICK(c, 7);
    // 0deefe  cmp ebx, esi
    X86_AT(c, 0xdeefeu);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 0def00  jl 0xdefa0
    X86_AT(c, 0xdef00u);
    if (x86_cc(c, 12)) { goto L_defa0; }
    X86_TICK(c, 9);
    // 0def06  push 8
    X86_AT(c, 0xdef06u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0def08  call 0xc5ca4
    X86_AT(c, 0xdef08u);
    push32(c, 0xdef0du); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdef0du);
    X86_TICK(c, 9);
    // 0def0d  push 0xd95c
    X86_AT(c, 0xdef0du);
    { uint32_t v = 0xD95Cu; push32(c, v); }
    // 0def12  call 0xcc7bc
    X86_AT(c, 0xdef12u);
    push32(c, 0xdef17u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdef17u);
    X86_TICK(c, 14);
    // 0def17  add dword ptr [0xb031e], 0x64
    X86_AT(c, 0xdef17u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x64u, 0, 4)); }
    // 0def1e  call 0xdf5bc
    X86_AT(c, 0xdef1eu);
    push32(c, 0xdef23u); x86_call_known(c, 0xdf5bcu, f_000df5bc); X86_RET(c, 0xdef23u);
    X86_TICK(c, 13);
    // 0def23  inc dword ptr [0xb041e]
    X86_AT(c, 0xdef23u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB041Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0def29  call 0xdf4b8
    X86_AT(c, 0xdef29u);
    push32(c, 0xdef2eu); x86_call_known(c, 0xdf4b8u, f_000df4b8); X86_RET(c, 0xdef2eu);
    X86_TICK(c, 14);
    // 0def2e  add esp, 8
    X86_AT(c, 0xdef2eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0def31  cmp dword ptr [0xb041e], 0x14
    X86_AT(c, 0xdef31u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB041Eu))), 0x14u, 0, 4);
    // 0def38  jne 0xdef41
    X86_AT(c, 0xdef38u);
    if (x86_cc(c, 5)) { goto L_def41; }
    X86_TICK(c, 7);
    // 0def3a  call 0xdedac
    X86_AT(c, 0xdef3au);
    push32(c, 0xdef3fu); x86_call_known(c, 0xdedacu, f_000dedac); X86_RET(c, 0xdef3fu);
    X86_TICK(c, 7);
    // 0def3f  jmp 0xdef61
    X86_AT(c, 0xdef3fu);
    goto L_def61;
L_def41:
    X86_TICK(c, 12);
    // 0def41  cmp dword ptr [0xb041e], 0x14
    X86_AT(c, 0xdef41u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB041Eu))), 0x14u, 0, 4);
    // 0def48  jle 0xdef61
    X86_AT(c, 0xdef48u);
    if (x86_cc(c, 14)) { goto L_def61; }
    X86_TICK(c, 9);
    // 0def4a  push 0xd974
    X86_AT(c, 0xdef4au);
    { uint32_t v = 0xD974u; push32(c, v); }
    // 0def4f  call 0xcc7bc
    X86_AT(c, 0xdef4fu);
    push32(c, 0xdef54u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdef54u);
    X86_TICK(c, 9);
    // 0def54  push 0xd9a8
    X86_AT(c, 0xdef54u);
    { uint32_t v = 0xD9A8u; push32(c, v); }
    // 0def59  call 0xcc7bc
    X86_AT(c, 0xdef59u);
    push32(c, 0xdef5eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdef5eu);
    X86_TICK(c, 2);
    // 0def5e  add esp, 8
    X86_AT(c, 0xdef5eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_def61:
    X86_TICK(c, 57);
    // 0def61  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdef61u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0def66  lea edx, [eax + eax*2]
    X86_AT(c, 0xdef66u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0def69  lea edx, [eax + edx*8]
    X86_AT(c, 0xdef69u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0def6c  lea edx, [eax + edx*4]
    X86_AT(c, 0xdef6cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0def6f  lea edx, [eax + edx*2]
    X86_AT(c, 0xdef6fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0def72  shl edx, 2
    X86_AT(c, 0xdef72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0def75  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdef75u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0def7c  add eax, edx
    X86_AT(c, 0xdef7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0def7e  dec dword ptr [eax + 0xc0ae0]
    X86_AT(c, 0xdef7eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AE0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0def84  cmp dword ptr [eax + 0xc0ae0], 0
    X86_AT(c, 0xdef84u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AE0u))), 0x0u, 0, 4);
    // 0def8b  je 0xdef94
    X86_AT(c, 0xdef8bu);
    if (x86_cc(c, 4)) { goto L_def94; }
    X86_TICK(c, 7);
    // 0def8d  call 0xdefe8
    X86_AT(c, 0xdef8du);
    push32(c, 0xdef92u); x86_call_known(c, 0xdefe8u, f_000defe8); X86_RET(c, 0xdef92u);
    X86_TICK(c, 7);
    // 0def92  jmp 0xdefa0
    X86_AT(c, 0xdef92u);
    goto L_defa0;
L_def94:
    X86_TICK(c, 6);
    // 0def94  sub eax, eax
    X86_AT(c, 0xdef94u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0def96  mov dword ptr [0xc2d04], eax
    X86_AT(c, 0xdef96u);
    wr32((c.sbase[3] + (uint32_t)(0xC2D04u)), c.r[0]);
    // 0def9b  mov dword ptr [0xc2d00], eax
    X86_AT(c, 0xdef9bu);
    wr32((c.sbase[3] + (uint32_t)(0xC2D00u)), c.r[0]);
L_defa0:
    X86_TICK(c, 23);
    // 0defa0  push 9
    X86_AT(c, 0xdefa0u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0defa2  push dword ptr [0xbefa0]
    X86_AT(c, 0xdefa2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEFA0u))); push32(c, v); }
    // 0defa8  push dword ptr [0xbef9c]
    X86_AT(c, 0xdefa8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu))); push32(c, v); }
    // 0defae  push 0x122
    X86_AT(c, 0xdefaeu);
    { uint32_t v = 0x122u; push32(c, v); }
    // 0defb3  push 0xc
    X86_AT(c, 0xdefb3u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0defb5  call 0xc9378
    X86_AT(c, 0xdefb5u);
    push32(c, 0xdefbau); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xdefbau);
    X86_TICK(c, 23);
    // 0defba  push 9
    X86_AT(c, 0xdefbau);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0defbc  push dword ptr [0xbefa0]
    X86_AT(c, 0xdefbcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEFA0u))); push32(c, v); }
    // 0defc2  push dword ptr [0xbef9c]
    X86_AT(c, 0xdefc2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu))); push32(c, v); }
    // 0defc8  push 0x122
    X86_AT(c, 0xdefc8u);
    { uint32_t v = 0x122u; push32(c, v); }
    // 0defcd  push 0x274
    X86_AT(c, 0xdefcdu);
    { uint32_t v = 0x274u; push32(c, v); }
    // 0defd2  call 0xc9378
    X86_AT(c, 0xdefd2u);
    push32(c, 0xdefd7u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xdefd7u);
    X86_TICK(c, 9);
    // 0defd7  push 0xf
    X86_AT(c, 0xdefd7u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0defd9  call 0xde55c
    X86_AT(c, 0xdefd9u);
    push32(c, 0xdefdeu); x86_call_known(c, 0xde55cu, f_000de55c); X86_RET(c, 0xdefdeu);
    X86_TICK(c, 2);
    // 0defde  add esp, 0x2c
    X86_AT(c, 0xdefdeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_defe1:
    X86_TICK(c, 28);
    // 0defe1  pop edi
    X86_AT(c, 0xdefe1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0defe2  pop esi
    X86_AT(c, 0xdefe2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0defe3  pop ebx
    X86_AT(c, 0xdefe3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0defe4  leave 
    X86_AT(c, 0xdefe4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0defe5  ret 
    X86_AT(c, 0xdefe5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdede8u, "ran off the end of a function");
}
void f_000defe8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0defe8  cmp dword ptr [0xc2d14], 0
    X86_AT(c, 0xdefe8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2D14u))), 0x0u, 0, 4);
    // 0defef  jne 0xdf022
    X86_AT(c, 0xdefefu);
    if (x86_cc(c, 5)) { goto L_df022; }
    X86_TICK(c, 11);
    // 0deff1  push 0x254
    X86_AT(c, 0xdeff1u);
    { uint32_t v = 0x254u; push32(c, v); }
    // 0deff6  push 0xe
    X86_AT(c, 0xdeff6u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0deff8  call 0xc5df0
    X86_AT(c, 0xdeff8u);
    push32(c, 0xdeffdu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdeffdu);
    X86_TICK(c, 13);
    // 0deffd  mov dword ptr [0xc2d00], eax
    X86_AT(c, 0xdeffdu);
    wr32((c.sbase[3] + (uint32_t)(0xC2D00u)), c.r[0]);
    // 0df002  push 0x102
    X86_AT(c, 0xdf002u);
    { uint32_t v = 0x102u; push32(c, v); }
    // 0df007  push 0x37
    X86_AT(c, 0xdf007u);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0df009  call 0xc5df0
    X86_AT(c, 0xdf009u);
    push32(c, 0xdf00eu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdf00eu);
    X86_TICK(c, 13);
    // 0df00e  mov dword ptr [0xc2d04], eax
    X86_AT(c, 0xdf00eu);
    wr32((c.sbase[3] + (uint32_t)(0xC2D04u)), c.r[0]);
    // 0df013  mov dword ptr [0xc2d10], 0
    X86_AT(c, 0xdf013u);
    wr32((c.sbase[3] + (uint32_t)(0xC2D10u)), 0x0u);
    // 0df01d  add esp, 0x10
    X86_AT(c, 0xdf01du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0df020  jmp 0xdf02e
    X86_AT(c, 0xdf020u);
    goto L_df02e;
L_df022:
    X86_TICK(c, 6);
    // 0df022  sub eax, eax
    X86_AT(c, 0xdf022u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0df024  mov dword ptr [0xc2d04], eax
    X86_AT(c, 0xdf024u);
    wr32((c.sbase[3] + (uint32_t)(0xC2D04u)), c.r[0]);
    // 0df029  mov dword ptr [0xc2d00], eax
    X86_AT(c, 0xdf029u);
    wr32((c.sbase[3] + (uint32_t)(0xC2D00u)), c.r[0]);
L_df02e:
    X86_TICK(c, 10);
    // 0df02e  ret 
    X86_AT(c, 0xdf02eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdefe8u, "ran off the end of a function");
}
void f_000df030(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0df030  push ebp
    X86_AT(c, 0xdf030u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0df031  mov ebp, esp
    X86_AT(c, 0xdf031u);
    c.r[5] = c.r[4];
    // 0df033  sub esp, 0x1c
    X86_AT(c, 0xdf033u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x1Cu, 0, 4); }
    // 0df036  push ebx
    X86_AT(c, 0xdf036u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0df037  push esi
    X86_AT(c, 0xdf037u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df038  push edi
    X86_AT(c, 0xdf038u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df039  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdf039u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0df03c  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdf03cu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0df03f  sub ebx, ebx
    X86_AT(c, 0xdf03fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_df041:
    X86_TICK(c, 7);
    // 0df041  cmp ebx, 4
    X86_AT(c, 0xdf041u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0df044  jge 0xdf075
    X86_AT(c, 0xdf044u);
    if (x86_cc(c, 13)) { goto L_df075; }
    X86_TICK(c, 54);
    // 0df046  mov eax, edi
    X86_AT(c, 0xdf046u);
    c.r[0] = c.r[7];
    // 0df048  lea edx, [eax + eax*2]
    X86_AT(c, 0xdf048u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0df04b  lea edx, [eax + edx*8]
    X86_AT(c, 0xdf04bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0df04e  lea edx, [eax + edx*4]
    X86_AT(c, 0xdf04eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0df051  lea edx, [eax + edx*2]
    X86_AT(c, 0xdf051u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0df054  shl edx, 2
    X86_AT(c, 0xdf054u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0df057  imul eax, esi, 0x74
    X86_AT(c, 0xdf057u);
    c.r[0] = x86_imul2(c, c.r[6], 0x74u, 4);
    // 0df05a  add eax, edx
    X86_AT(c, 0xdf05au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0df05c  lea edx, [ebx*8]
    X86_AT(c, 0xdf05cu);
    c.r[2] = (uint32_t)(c.r[3] * 8);
    // 0df063  lea edx, [edx + edx*2]
    X86_AT(c, 0xdf063u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0df066  add edx, eax
    X86_AT(c, 0xdf066u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0df068  mov dword ptr [edx + 0xc0afc], 0xffffffff
    X86_AT(c, 0xdf068u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AFCu)), 0xFFFFFFFFu);
    // 0df072  inc ebx
    X86_AT(c, 0xdf072u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0df073  jmp 0xdf041
    X86_AT(c, 0xdf073u);
    X86_POLL(c, 0xdf041u); goto L_df041;
L_df075:
    X86_TICK(c, 11);
    // 0df075  push 0xf0
    X86_AT(c, 0xdf075u);
    { uint32_t v = 0xF0u; push32(c, v); }
    // 0df07a  push 0
    X86_AT(c, 0xdf07au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df07c  call 0xc5df0
    X86_AT(c, 0xdf07cu);
    push32(c, 0xdf081u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdf081u);
    X86_TICK(c, 98);
    // 0df081  mov edx, edi
    X86_AT(c, 0xdf081u);
    c.r[2] = c.r[7];
    // 0df083  lea ecx, [edx + edx*2]
    X86_AT(c, 0xdf083u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0df086  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xdf086u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0df089  lea ecx, [edx + ecx*4]
    X86_AT(c, 0xdf089u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 4);
    // 0df08c  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xdf08cu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0df08f  shl ecx, 2
    X86_AT(c, 0xdf08fu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0df092  imul edx, esi, 0x74
    X86_AT(c, 0xdf092u);
    c.r[2] = x86_imul2(c, c.r[6], 0x74u, 4);
    // 0df095  add edx, ecx
    X86_AT(c, 0xdf095u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0df097  mov dword ptr [ebp - 0x1c], edx
    X86_AT(c, 0xdf097u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[2]);
    // 0df09a  cdq 
    X86_AT(c, 0xdf09au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0df09b  mov ecx, 0x28
    X86_AT(c, 0xdf09bu);
    c.r[1] = 0x28u;
    // 0df0a0  idiv ecx
    X86_AT(c, 0xdf0a0u);
    x86_idiv(c, c.r[1], 4, 0xdf0a0u);
    // 0df0a2  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdf0a2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0df0a5  mov dword ptr [edx + 0xc0ae0], eax
    X86_AT(c, 0xdf0a5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AE0u)), c.r[0]);
    // 0df0ab  add esp, 8
    X86_AT(c, 0xdf0abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0df0ae  cmp eax, 3
    X86_AT(c, 0xdf0aeu);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0df0b1  jle 0xdf0bd
    X86_AT(c, 0xdf0b1u);
    if (x86_cc(c, 14)) { goto L_df0bd; }
    X86_TICK(c, 2);
    // 0df0b3  mov dword ptr [edx + 0xc0ae0], 0
    X86_AT(c, 0xdf0b3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AE0u)), 0x0u);
L_df0bd:
    X86_TICK(c, 21);
    // 0df0bd  sub eax, eax
    X86_AT(c, 0xdf0bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0df0bf  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xdf0bfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0df0c2  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdf0c2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0df0c5  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdf0c5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0df0c8  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdf0c8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0df0cb  push 0xc8
    X86_AT(c, 0xdf0cbu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0df0d0  push 1
    X86_AT(c, 0xdf0d0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0df0d2  call 0xc5df0
    X86_AT(c, 0xdf0d2u);
    push32(c, 0xdf0d7u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdf0d7u);
    X86_TICK(c, 9);
    // 0df0d7  add esp, 8
    X86_AT(c, 0xdf0d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0df0da  cmp eax, 0x4d
    X86_AT(c, 0xdf0dau);
    (void)x86_sub(c, c.r[0], 0x4Du, 0, 4);
    // 0df0dd  jge 0xdf100
    X86_AT(c, 0xdf0ddu);
    if (x86_cc(c, 13)) { goto L_df100; }
    X86_TICK(c, 11);
    // 0df0df  push 0x188
    X86_AT(c, 0xdf0dfu);
    { uint32_t v = 0x188u; push32(c, v); }
    // 0df0e4  push 0x5c
    X86_AT(c, 0xdf0e4u);
    { uint32_t v = 0x5Cu; push32(c, v); }
    // 0df0e6  call 0xc5df0
    X86_AT(c, 0xdf0e6u);
    push32(c, 0xdf0ebu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdf0ebu);
    X86_TICK(c, 13);
    // 0df0eb  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdf0ebu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0df0ee  push 0xe8
    X86_AT(c, 0xdf0eeu);
    { uint32_t v = 0xE8u; push32(c, v); }
    // 0df0f3  push 0x5c
    X86_AT(c, 0xdf0f3u);
    { uint32_t v = 0x5Cu; push32(c, v); }
    // 0df0f5  call 0xc5df0
    X86_AT(c, 0xdf0f5u);
    push32(c, 0xdf0fau); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdf0fau);
    X86_TICK(c, 4);
    // 0df0fa  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdf0fau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0df0fd  add esp, 0x10
    X86_AT(c, 0xdf0fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_df100:
    X86_TICK(c, 60);
    // 0df100  mov eax, edi
    X86_AT(c, 0xdf100u);
    c.r[0] = c.r[7];
    // 0df102  lea edx, [eax + eax*2]
    X86_AT(c, 0xdf102u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0df105  lea edx, [eax + edx*8]
    X86_AT(c, 0xdf105u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0df108  lea edx, [eax + edx*4]
    X86_AT(c, 0xdf108u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0df10b  lea edx, [eax + edx*2]
    X86_AT(c, 0xdf10bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0df10e  shl edx, 2
    X86_AT(c, 0xdf10eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0df111  imul eax, esi, 0x74
    X86_AT(c, 0xdf111u);
    c.r[0] = x86_imul2(c, c.r[6], 0x74u, 4);
    // 0df114  add eax, edx
    X86_AT(c, 0xdf114u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0df116  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdf116u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0df119  mov dword ptr [eax + 0xc0ae4], edx
    X86_AT(c, 0xdf119u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AE4u)), c.r[2]);
    // 0df11f  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xdf11fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0df122  mov dword ptr [eax + 0xc0ae8], edx
    X86_AT(c, 0xdf122u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AE8u)), c.r[2]);
    // 0df128  push 0xc8
    X86_AT(c, 0xdf128u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0df12d  push 1
    X86_AT(c, 0xdf12du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0df12f  call 0xc5df0
    X86_AT(c, 0xdf12fu);
    push32(c, 0xdf134u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdf134u);
    X86_TICK(c, 9);
    // 0df134  add esp, 8
    X86_AT(c, 0xdf134u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0df137  cmp eax, 0x4d
    X86_AT(c, 0xdf137u);
    (void)x86_sub(c, c.r[0], 0x4Du, 0, 4);
    // 0df13a  jge 0xdf193
    X86_AT(c, 0xdf13au);
    if (x86_cc(c, 13)) { goto L_df193; }
    X86_TICK(c, 11);
    // 0df13c  push 0x188
    X86_AT(c, 0xdf13cu);
    { uint32_t v = 0x188u; push32(c, v); }
    // 0df141  push 0x5c
    X86_AT(c, 0xdf141u);
    { uint32_t v = 0x5Cu; push32(c, v); }
    // 0df143  call 0xc5df0
    X86_AT(c, 0xdf143u);
    push32(c, 0xdf148u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdf148u);
    X86_TICK(c, 13);
    // 0df148  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdf148u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0df14b  push 0xe8
    X86_AT(c, 0xdf14bu);
    { uint32_t v = 0xE8u; push32(c, v); }
    // 0df150  push 0x5c
    X86_AT(c, 0xdf150u);
    { uint32_t v = 0x5Cu; push32(c, v); }
    // 0df152  call 0xc5df0
    X86_AT(c, 0xdf152u);
    push32(c, 0xdf157u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdf157u);
    X86_TICK(c, 19);
    // 0df157  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xdf157u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0df15a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdf15au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0df15d  sub eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdf15du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0df160  and eax, eax
    X86_AT(c, 0xdf160u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0df162  jge 0xdf16c
    X86_AT(c, 0xdf162u);
    if (x86_cc(c, 13)) { goto L_df16c; }
    X86_TICK(c, 12);
    // 0df164  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdf164u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0df167  sub eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdf167u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0df16a  neg eax
    X86_AT(c, 0xdf16au);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_df16c:
    X86_TICK(c, 9);
    // 0df16c  add esp, 0x10
    X86_AT(c, 0xdf16cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0df16f  cmp eax, 0x50
    X86_AT(c, 0xdf16fu);
    (void)x86_sub(c, c.r[0], 0x50u, 0, 4);
    // 0df172  jl 0xdf18b
    X86_AT(c, 0xdf172u);
    if (x86_cc(c, 12)) { goto L_df18b; }
    X86_TICK(c, 17);
    // 0df174  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xdf174u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0df177  sub eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdf177u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0df17a  and eax, eax
    X86_AT(c, 0xdf17au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0df17c  jge 0xdf186
    X86_AT(c, 0xdf17cu);
    if (x86_cc(c, 13)) { goto L_df186; }
    X86_TICK(c, 12);
    // 0df17e  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xdf17eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0df181  sub eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdf181u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0df184  neg eax
    X86_AT(c, 0xdf184u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_df186:
    X86_TICK(c, 7);
    // 0df186  cmp eax, 0x50
    X86_AT(c, 0xdf186u);
    (void)x86_sub(c, c.r[0], 0x50u, 0, 4);
    // 0df189  jge 0xdf193
    X86_AT(c, 0xdf189u);
    if (x86_cc(c, 13)) { goto L_df193; }
L_df18b:
    X86_TICK(c, 6);
    // 0df18b  sub eax, eax
    X86_AT(c, 0xdf18bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0df18d  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xdf18du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0df190  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdf190u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
L_df193:
    X86_TICK(c, 56);
    // 0df193  mov eax, edi
    X86_AT(c, 0xdf193u);
    c.r[0] = c.r[7];
    // 0df195  lea edx, [eax + eax*2]
    X86_AT(c, 0xdf195u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0df198  lea edx, [eax + edx*8]
    X86_AT(c, 0xdf198u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0df19b  lea edx, [eax + edx*4]
    X86_AT(c, 0xdf19bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0df19e  lea edx, [eax + edx*2]
    X86_AT(c, 0xdf19eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0df1a1  shl edx, 2
    X86_AT(c, 0xdf1a1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0df1a4  imul eax, esi, 0x74
    X86_AT(c, 0xdf1a4u);
    c.r[0] = x86_imul2(c, c.r[6], 0x74u, 4);
    // 0df1a7  add eax, edx
    X86_AT(c, 0xdf1a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0df1a9  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdf1a9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0df1ac  mov dword ptr [eax + 0xc0aec], edx
    X86_AT(c, 0xdf1acu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AECu)), c.r[2]);
    // 0df1b2  mov ecx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xdf1b2u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0df1b5  mov dword ptr [eax + 0xc0af0], ecx
    X86_AT(c, 0xdf1b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AF0u)), c.r[1]);
    // 0df1bb  and edx, edx
    X86_AT(c, 0xdf1bbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0df1bd  je 0xdf347
    X86_AT(c, 0xdf1bdu);
    if (x86_cc(c, 4)) { goto L_df347; }
    X86_TICK(c, 13);
    // 0df1c3  push 0x62
    X86_AT(c, 0xdf1c3u);
    { uint32_t v = 0x62u; push32(c, v); }
    // 0df1c5  push 0
    X86_AT(c, 0xdf1c5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df1c7  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xdf1c7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0df1ca  call 0xc5df0
    X86_AT(c, 0xdf1cau);
    push32(c, 0xdf1cfu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdf1cfu);
    X86_TICK(c, 55);
    // 0df1cf  cdq 
    X86_AT(c, 0xdf1cfu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0df1d0  mov ecx, 3
    X86_AT(c, 0xdf1d0u);
    c.r[1] = 0x3u;
    // 0df1d5  idiv ecx
    X86_AT(c, 0xdf1d5u);
    x86_idiv(c, c.r[1], 4, 0xdf1d5u);
    // 0df1d7  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xdf1d7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0df1da  add esp, 8
    X86_AT(c, 0xdf1dau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0df1dd  and edx, edx
    X86_AT(c, 0xdf1ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0df1df  je 0xdf347
    X86_AT(c, 0xdf1dfu);
    if (x86_cc(c, 4)) { goto L_df347; }
    X86_TICK(c, 11);
    // 0df1e5  push 0xc7
    X86_AT(c, 0xdf1e5u);
    { uint32_t v = 0xC7u; push32(c, v); }
    // 0df1ea  push 0
    X86_AT(c, 0xdf1eau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df1ec  call 0xc5df0
    X86_AT(c, 0xdf1ecu);
    push32(c, 0xdf1f1u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdf1f1u);
    X86_TICK(c, 11);
    // 0df1f1  mov edx, eax
    X86_AT(c, 0xdf1f1u);
    c.r[2] = c.r[0];
    // 0df1f3  and eax, 3
    X86_AT(c, 0xdf1f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x3u, 4); }
    // 0df1f8  and edx, edx
    X86_AT(c, 0xdf1f8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0df1fa  jge 0xdf1ff
    X86_AT(c, 0xdf1fau);
    if (x86_cc(c, 13)) { goto L_df1ff; }
    X86_TICK(c, 2);
    // 0df1fc  sub eax, 4
    X86_AT(c, 0xdf1fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x4u, 0, 4); }
L_df1ff:
    X86_TICK(c, 13);
    // 0df1ff  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xdf1ffu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0df202  push 0x62
    X86_AT(c, 0xdf202u);
    { uint32_t v = 0x62u; push32(c, v); }
    // 0df204  push 0
    X86_AT(c, 0xdf204u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df206  call 0xc5df0
    X86_AT(c, 0xdf206u);
    push32(c, 0xdf20bu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdf20bu);
    X86_TICK(c, 61);
    // 0df20b  cdq 
    X86_AT(c, 0xdf20bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0df20c  mov ecx, 3
    X86_AT(c, 0xdf20cu);
    c.r[1] = 0x3u;
    // 0df211  idiv ecx
    X86_AT(c, 0xdf211u);
    x86_idiv(c, c.r[1], 4, 0xdf211u);
    // 0df213  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xdf213u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0df216  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdf216u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0df219  mov dword ptr [eax + 0xc0afc], edx
    X86_AT(c, 0xdf219u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AFCu)), c.r[2]);
    // 0df21f  push edx
    X86_AT(c, 0xdf21fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0df220  call 0xdf668
    X86_AT(c, 0xdf220u);
    push32(c, 0xdf225u); x86_call_known(c, 0xdf668u, f_000df668); X86_RET(c, 0xdf225u);
    X86_TICK(c, 18);
    // 0df225  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdf225u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0df228  mov dword ptr [edx + 0xc0b00], eax
    X86_AT(c, 0xdf228u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B00u)), c.r[0]);
    // 0df22e  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xdf22eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0df231  call 0xdf694
    X86_AT(c, 0xdf231u);
    push32(c, 0xdf236u); x86_call_known(c, 0xdf694u, f_000df694); X86_RET(c, 0xdf236u);
    X86_TICK(c, 24);
    // 0df236  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdf236u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0df239  mov dword ptr [edx + 0xc0b04], eax
    X86_AT(c, 0xdf239u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B04u)), c.r[0]);
    // 0df23f  push 0
    X86_AT(c, 0xdf23fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df241  push esi
    X86_AT(c, 0xdf241u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df242  push edi
    X86_AT(c, 0xdf242u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df243  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xdf243u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0df246  call 0xdf6b8
    X86_AT(c, 0xdf246u);
    push32(c, 0xdf24bu); x86_call_known(c, 0xdf6b8u, f_000df6b8); X86_RET(c, 0xdf24bu);
    X86_TICK(c, 24);
    // 0df24b  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdf24bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0df24e  mov dword ptr [edx + 0xc0af4], eax
    X86_AT(c, 0xdf24eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AF4u)), c.r[0]);
    // 0df254  push 0
    X86_AT(c, 0xdf254u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df256  push esi
    X86_AT(c, 0xdf256u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df257  push edi
    X86_AT(c, 0xdf257u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df258  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xdf258u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0df25b  call 0xdf718
    X86_AT(c, 0xdf25bu);
    push32(c, 0xdf260u); x86_call_known(c, 0xdf718u, f_000df718); X86_RET(c, 0xdf260u);
    X86_TICK(c, 18);
    // 0df260  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdf260u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0df263  mov dword ptr [edx + 0xc0af8], eax
    X86_AT(c, 0xdf263u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AF8u)), c.r[0]);
    // 0df269  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xdf269u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0df26c  call 0xdf61c
    X86_AT(c, 0xdf26cu);
    push32(c, 0xdf271u); x86_call_known(c, 0xdf61cu, f_000df61c); X86_RET(c, 0xdf271u);
    X86_TICK(c, 20);
    // 0df271  add esp, 0x3c
    X86_AT(c, 0xdf271u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0df274  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdf274u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0df277  mov dword ptr [edx + 0xc0b08], eax
    X86_AT(c, 0xdf277u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B08u)), c.r[0]);
    // 0df27d  cmp dword ptr [ebp - 4], 2
    X86_AT(c, 0xdf27du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x2u, 0, 4);
    // 0df281  jne 0xdf347
    X86_AT(c, 0xdf281u);
    if (x86_cc(c, 5)) { goto L_df347; }
L_df287:
    X86_TICK(c, 11);
    // 0df287  push 0xc7
    X86_AT(c, 0xdf287u);
    { uint32_t v = 0xC7u; push32(c, v); }
    // 0df28c  push 0
    X86_AT(c, 0xdf28cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df28e  call 0xc5df0
    X86_AT(c, 0xdf28eu);
    push32(c, 0xdf293u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdf293u);
    X86_TICK(c, 59);
    // 0df293  cdq 
    X86_AT(c, 0xdf293u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0df294  mov ecx, 3
    X86_AT(c, 0xdf294u);
    c.r[1] = 0x3u;
    // 0df299  idiv ecx
    X86_AT(c, 0xdf299u);
    x86_idiv(c, c.r[1], 4, 0xdf299u);
    // 0df29b  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xdf29bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0df29e  add esp, 8
    X86_AT(c, 0xdf29eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0df2a1  cmp edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdf2a1u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4);
    // 0df2a4  je 0xdf287
    X86_AT(c, 0xdf2a4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xdf287u); goto L_df287; }
L_df2a6:
    X86_TICK(c, 11);
    // 0df2a6  push 0x62
    X86_AT(c, 0xdf2a6u);
    { uint32_t v = 0x62u; push32(c, v); }
    // 0df2a8  push 0
    X86_AT(c, 0xdf2a8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df2aa  call 0xc5df0
    X86_AT(c, 0xdf2aau);
    push32(c, 0xdf2afu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdf2afu);
    X86_TICK(c, 59);
    // 0df2af  cdq 
    X86_AT(c, 0xdf2afu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0df2b0  mov ecx, 3
    X86_AT(c, 0xdf2b0u);
    c.r[1] = 0x3u;
    // 0df2b5  idiv ecx
    X86_AT(c, 0xdf2b5u);
    x86_idiv(c, c.r[1], 4, 0xdf2b5u);
    // 0df2b7  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0xdf2b7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 0df2ba  add esp, 8
    X86_AT(c, 0xdf2bau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0df2bd  cmp edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xdf2bdu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4);
    // 0df2c0  je 0xdf2a6
    X86_AT(c, 0xdf2c0u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xdf2a6u); goto L_df2a6; }
    X86_TICK(c, 56);
    // 0df2c2  mov eax, 0xb52f4
    X86_AT(c, 0xdf2c2u);
    c.r[0] = 0xB52F4u;
    // 0df2c7  mov ecx, edi
    X86_AT(c, 0xdf2c7u);
    c.r[1] = c.r[7];
    // 0df2c9  lea eax, [ecx + ecx*2]
    X86_AT(c, 0xdf2c9u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0df2cc  lea eax, [ecx + eax*8]
    X86_AT(c, 0xdf2ccu);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 8);
    // 0df2cf  lea eax, [ecx + eax*4]
    X86_AT(c, 0xdf2cfu);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 4);
    // 0df2d2  lea eax, [ecx + eax*2]
    X86_AT(c, 0xdf2d2u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 2);
    // 0df2d5  shl eax, 2
    X86_AT(c, 0xdf2d5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 0df2d8  imul ecx, esi, 0x74
    X86_AT(c, 0xdf2d8u);
    c.r[1] = x86_imul2(c, c.r[6], 0x74u, 4);
    // 0df2db  add ecx, eax
    X86_AT(c, 0xdf2dbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0df2dd  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xdf2ddu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0df2e0  mov dword ptr [ecx + 0xc0b14], eax
    X86_AT(c, 0xdf2e0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xC0B14u)), c.r[0]);
    // 0df2e6  push eax
    X86_AT(c, 0xdf2e6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0df2e7  mov dword ptr [ebp - 0x1c], ecx
    X86_AT(c, 0xdf2e7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[1]);
    // 0df2ea  call 0xdf668
    X86_AT(c, 0xdf2eau);
    push32(c, 0xdf2efu); x86_call_known(c, 0xdf668u, f_000df668); X86_RET(c, 0xdf2efu);
    X86_TICK(c, 18);
    // 0df2ef  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdf2efu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0df2f2  mov dword ptr [edx + 0xc0b18], eax
    X86_AT(c, 0xdf2f2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B18u)), c.r[0]);
    // 0df2f8  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xdf2f8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0df2fb  call 0xdf694
    X86_AT(c, 0xdf2fbu);
    push32(c, 0xdf300u); x86_call_known(c, 0xdf694u, f_000df694); X86_RET(c, 0xdf300u);
    X86_TICK(c, 24);
    // 0df300  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdf300u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0df303  mov dword ptr [edx + 0xc0b1c], eax
    X86_AT(c, 0xdf303u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B1Cu)), c.r[0]);
    // 0df309  push 1
    X86_AT(c, 0xdf309u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0df30b  push esi
    X86_AT(c, 0xdf30bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df30c  push edi
    X86_AT(c, 0xdf30cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df30d  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xdf30du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0df310  call 0xdf6b8
    X86_AT(c, 0xdf310u);
    push32(c, 0xdf315u); x86_call_known(c, 0xdf6b8u, f_000df6b8); X86_RET(c, 0xdf315u);
    X86_TICK(c, 24);
    // 0df315  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdf315u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0df318  mov dword ptr [edx + 0xc0b0c], eax
    X86_AT(c, 0xdf318u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B0Cu)), c.r[0]);
    // 0df31e  push 1
    X86_AT(c, 0xdf31eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0df320  push esi
    X86_AT(c, 0xdf320u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df321  push edi
    X86_AT(c, 0xdf321u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df322  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xdf322u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0df325  call 0xdf718
    X86_AT(c, 0xdf325u);
    push32(c, 0xdf32au); x86_call_known(c, 0xdf718u, f_000df718); X86_RET(c, 0xdf32au);
    X86_TICK(c, 18);
    // 0df32a  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdf32au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0df32d  mov dword ptr [edx + 0xc0b10], eax
    X86_AT(c, 0xdf32du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B10u)), c.r[0]);
    // 0df333  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xdf333u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0df336  call 0xdf61c
    X86_AT(c, 0xdf336u);
    push32(c, 0xdf33bu); x86_call_known(c, 0xdf61cu, f_000df61c); X86_RET(c, 0xdf33bu);
    X86_TICK(c, 8);
    // 0df33b  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdf33bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0df33e  mov dword ptr [edx + 0xc0b20], eax
    X86_AT(c, 0xdf33eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B20u)), c.r[0]);
    // 0df344  add esp, 0x2c
    X86_AT(c, 0xdf344u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_df347:
    X86_TICK(c, 28);
    // 0df347  pop edi
    X86_AT(c, 0xdf347u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0df348  pop esi
    X86_AT(c, 0xdf348u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0df349  pop ebx
    X86_AT(c, 0xdf349u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0df34a  leave 
    X86_AT(c, 0xdf34au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0df34b  ret 
    X86_AT(c, 0xdf34bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf030u, "ran off the end of a function");
}
void f_000df34c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0df34c  push esi
    X86_AT(c, 0xdf34cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df34d  push edi
    X86_AT(c, 0xdf34du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df34e  mov eax, dword ptr [0xb0336]
    X86_AT(c, 0xdf34eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0336u)));
    // 0df353  lea eax, [eax + eax*2]
    X86_AT(c, 0xdf353u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0df356  cdq 
    X86_AT(c, 0xdf356u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0df357  sub eax, edx
    X86_AT(c, 0xdf357u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0df359  sar eax, 1
    X86_AT(c, 0xdf359u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0df35b  push eax
    X86_AT(c, 0xdf35bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0df35c  call 0xe78dc
    X86_AT(c, 0xdf35cu);
    push32(c, 0xdf361u); x86_call_known(c, 0xe78dcu, f_000e78dc); X86_RET(c, 0xdf361u);
    X86_TICK(c, 26);
    // 0df361  sub eax, eax
    X86_AT(c, 0xdf361u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0df363  mov edx, 0xc0ae0
    X86_AT(c, 0xdf363u);
    c.r[2] = 0xC0AE0u;
    // 0df368  push edi
    X86_AT(c, 0xdf368u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df369  mov edi, edx
    X86_AT(c, 0xdf369u);
    c.r[7] = c.r[2];
    // 0df36b  mov ecx, 0x58d
    X86_AT(c, 0xdf36bu);
    c.r[1] = 0x58Du;
    // 0df370  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xdf370u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0df372  pop edi
    X86_AT(c, 0xdf372u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0df373  xchg edi, eax
    X86_AT(c, 0xdf373u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0df374  add esp, 4
    X86_AT(c, 0xdf374u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_df377:
    X86_TICK(c, 7);
    // 0df377  cmp edi, 7
    X86_AT(c, 0xdf377u);
    (void)x86_sub(c, c.r[7], 0x7u, 0, 4);
    // 0df37a  jge 0xdf393
    X86_AT(c, 0xdf37au);
    if (x86_cc(c, 13)) { goto L_df393; }
    X86_TICK(c, 2);
    // 0df37c  sub esi, esi
    X86_AT(c, 0xdf37cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_df37e:
    X86_TICK(c, 7);
    // 0df37e  cmp esi, 7
    X86_AT(c, 0xdf37eu);
    (void)x86_sub(c, c.r[6], 0x7u, 0, 4);
    // 0df381  jge 0xdf390
    X86_AT(c, 0xdf381u);
    if (x86_cc(c, 13)) { goto L_df390; }
    X86_TICK(c, 11);
    // 0df383  push esi
    X86_AT(c, 0xdf383u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df384  push edi
    X86_AT(c, 0xdf384u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df385  call 0xdf030
    X86_AT(c, 0xdf385u);
    push32(c, 0xdf38au); x86_call_known(c, 0xdf030u, f_000df030); X86_RET(c, 0xdf38au);
    X86_TICK(c, 11);
    // 0df38a  inc esi
    X86_AT(c, 0xdf38au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0df38b  add esp, 8
    X86_AT(c, 0xdf38bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0df38e  jmp 0xdf37e
    X86_AT(c, 0xdf38eu);
    X86_POLL(c, 0xdf37eu); goto L_df37e;
L_df390:
    X86_TICK(c, 9);
    // 0df390  inc edi
    X86_AT(c, 0xdf390u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0df391  jmp 0xdf377
    X86_AT(c, 0xdf391u);
    X86_POLL(c, 0xdf377u); goto L_df377;
L_df393:
    X86_TICK(c, 23);
    // 0df393  mov dword ptr [0xc03d4], 2
    X86_AT(c, 0xdf393u);
    wr32((c.sbase[3] + (uint32_t)(0xC03D4u)), 0x2u);
    // 0df39d  mov dword ptr [0xc15c0], 0
    X86_AT(c, 0xdf39du);
    wr32((c.sbase[3] + (uint32_t)(0xC15C0u)), 0x0u);
    // 0df3a7  mov dword ptr [0xc15c4], 0x118
    X86_AT(c, 0xdf3a7u);
    wr32((c.sbase[3] + (uint32_t)(0xC15C4u)), 0x118u);
    // 0df3b1  mov dword ptr [0xc15c8], 0x8c
    X86_AT(c, 0xdf3b1u);
    wr32((c.sbase[3] + (uint32_t)(0xC15C8u)), 0x8Cu);
    // 0df3bb  mov dword ptr [0xc15cc], 0x190
    X86_AT(c, 0xdf3bbu);
    wr32((c.sbase[3] + (uint32_t)(0xC15CCu)), 0x190u);
    // 0df3c5  mov dword ptr [0xc15d0], 0xc8
    X86_AT(c, 0xdf3c5u);
    wr32((c.sbase[3] + (uint32_t)(0xC15D0u)), 0xC8u);
    // 0df3cf  mov dword ptr [0xc15dc], 2
    X86_AT(c, 0xdf3cfu);
    wr32((c.sbase[3] + (uint32_t)(0xC15DCu)), 0x2u);
    // 0df3d9  push 2
    X86_AT(c, 0xdf3d9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0df3db  call 0xdf668
    X86_AT(c, 0xdf3dbu);
    push32(c, 0xdf3e0u); x86_call_known(c, 0xdf668u, f_000df668); X86_RET(c, 0xdf3e0u);
    X86_TICK(c, 11);
    // 0df3e0  mov dword ptr [0xc15e0], eax
    X86_AT(c, 0xdf3e0u);
    wr32((c.sbase[3] + (uint32_t)(0xC15E0u)), c.r[0]);
    // 0df3e5  push 2
    X86_AT(c, 0xdf3e5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0df3e7  call 0xdf694
    X86_AT(c, 0xdf3e7u);
    push32(c, 0xdf3ecu); x86_call_known(c, 0xdf694u, f_000df694); X86_RET(c, 0xdf3ecu);
    X86_TICK(c, 17);
    // 0df3ec  mov dword ptr [0xc15e4], eax
    X86_AT(c, 0xdf3ecu);
    wr32((c.sbase[3] + (uint32_t)(0xC15E4u)), c.r[0]);
    // 0df3f1  push 0
    X86_AT(c, 0xdf3f1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df3f3  push 3
    X86_AT(c, 0xdf3f3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0df3f5  push 3
    X86_AT(c, 0xdf3f5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0df3f7  push 3
    X86_AT(c, 0xdf3f7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0df3f9  call 0xdf6b8
    X86_AT(c, 0xdf3f9u);
    push32(c, 0xdf3feu); x86_call_known(c, 0xdf6b8u, f_000df6b8); X86_RET(c, 0xdf3feu);
    X86_TICK(c, 17);
    // 0df3fe  mov dword ptr [0xc15d4], eax
    X86_AT(c, 0xdf3feu);
    wr32((c.sbase[3] + (uint32_t)(0xC15D4u)), c.r[0]);
    // 0df403  push 0
    X86_AT(c, 0xdf403u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df405  push 3
    X86_AT(c, 0xdf405u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0df407  push 3
    X86_AT(c, 0xdf407u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0df409  push 3
    X86_AT(c, 0xdf409u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0df40b  call 0xdf718
    X86_AT(c, 0xdf40bu);
    push32(c, 0xdf410u); x86_call_known(c, 0xdf718u, f_000df718); X86_RET(c, 0xdf410u);
    X86_TICK(c, 11);
    // 0df410  mov dword ptr [0xc15d8], eax
    X86_AT(c, 0xdf410u);
    wr32((c.sbase[3] + (uint32_t)(0xC15D8u)), c.r[0]);
    // 0df415  push 3
    X86_AT(c, 0xdf415u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0df417  call 0xdf61c
    X86_AT(c, 0xdf417u);
    push32(c, 0xdf41cu); x86_call_known(c, 0xdf61cu, f_000df61c); X86_RET(c, 0xdf41cu);
    X86_TICK(c, 13);
    // 0df41c  mov dword ptr [0xc15e8], eax
    X86_AT(c, 0xdf41cu);
    wr32((c.sbase[3] + (uint32_t)(0xC15E8u)), c.r[0]);
    // 0df421  mov dword ptr [0xc15f4], 1
    X86_AT(c, 0xdf421u);
    wr32((c.sbase[3] + (uint32_t)(0xC15F4u)), 0x1u);
    // 0df42b  push 1
    X86_AT(c, 0xdf42bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0df42d  call 0xdf668
    X86_AT(c, 0xdf42du);
    push32(c, 0xdf432u); x86_call_known(c, 0xdf668u, f_000df668); X86_RET(c, 0xdf432u);
    X86_TICK(c, 11);
    // 0df432  mov dword ptr [0xc15f8], eax
    X86_AT(c, 0xdf432u);
    wr32((c.sbase[3] + (uint32_t)(0xC15F8u)), c.r[0]);
    // 0df437  push 1
    X86_AT(c, 0xdf437u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0df439  call 0xdf694
    X86_AT(c, 0xdf439u);
    push32(c, 0xdf43eu); x86_call_known(c, 0xdf694u, f_000df694); X86_RET(c, 0xdf43eu);
    X86_TICK(c, 17);
    // 0df43e  mov dword ptr [0xc15fc], eax
    X86_AT(c, 0xdf43eu);
    wr32((c.sbase[3] + (uint32_t)(0xC15FCu)), c.r[0]);
    // 0df443  push 1
    X86_AT(c, 0xdf443u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0df445  push 3
    X86_AT(c, 0xdf445u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0df447  push 3
    X86_AT(c, 0xdf447u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0df449  push 0
    X86_AT(c, 0xdf449u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df44b  call 0xdf6b8
    X86_AT(c, 0xdf44bu);
    push32(c, 0xdf450u); x86_call_known(c, 0xdf6b8u, f_000df6b8); X86_RET(c, 0xdf450u);
    X86_TICK(c, 19);
    // 0df450  add esp, 0x44
    X86_AT(c, 0xdf450u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0df453  mov dword ptr [0xc15ec], eax
    X86_AT(c, 0xdf453u);
    wr32((c.sbase[3] + (uint32_t)(0xC15ECu)), c.r[0]);
    // 0df458  push 1
    X86_AT(c, 0xdf458u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0df45a  push 3
    X86_AT(c, 0xdf45au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0df45c  push 3
    X86_AT(c, 0xdf45cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0df45e  push 0
    X86_AT(c, 0xdf45eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df460  call 0xdf718
    X86_AT(c, 0xdf460u);
    push32(c, 0xdf465u); x86_call_known(c, 0xdf718u, f_000df718); X86_RET(c, 0xdf465u);
    X86_TICK(c, 11);
    // 0df465  mov dword ptr [0xc15f0], eax
    X86_AT(c, 0xdf465u);
    wr32((c.sbase[3] + (uint32_t)(0xC15F0u)), c.r[0]);
    // 0df46a  push 0
    X86_AT(c, 0xdf46au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df46c  call 0xdf61c
    X86_AT(c, 0xdf46cu);
    push32(c, 0xdf471u); x86_call_known(c, 0xdf61cu, f_000df61c); X86_RET(c, 0xdf471u);
    X86_TICK(c, 42);
    // 0df471  mov dword ptr [0xc1600], eax
    X86_AT(c, 0xdf471u);
    wr32((c.sbase[3] + (uint32_t)(0xC1600u)), c.r[0]);
    // 0df476  mov dword ptr [0xc160c], 0
    X86_AT(c, 0xdf476u);
    wr32((c.sbase[3] + (uint32_t)(0xC160Cu)), 0x0u);
    // 0df480  mov eax, dword ptr [0xb042e]
    X86_AT(c, 0xdf480u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB042Eu)));
    // 0df485  mov dword ptr [0xc1610], eax
    X86_AT(c, 0xdf485u);
    wr32((c.sbase[3] + (uint32_t)(0xC1610u)), c.r[0]);
    // 0df48a  add esp, 0x14
    X86_AT(c, 0xdf48au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0df48d  mov eax, dword ptr [0xb0432]
    X86_AT(c, 0xdf48du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0432u)));
    // 0df492  mov dword ptr [0xc1614], eax
    X86_AT(c, 0xdf492u);
    wr32((c.sbase[3] + (uint32_t)(0xC1614u)), c.r[0]);
    // 0df497  mov dword ptr [0xc1604], 0x208
    X86_AT(c, 0xdf497u);
    wr32((c.sbase[3] + (uint32_t)(0xC1604u)), 0x208u);
    // 0df4a1  mov dword ptr [0xc1608], 0xb4
    X86_AT(c, 0xdf4a1u);
    wr32((c.sbase[3] + (uint32_t)(0xC1608u)), 0xB4u);
    // 0df4ab  mov dword ptr [0xc1618], 0
    X86_AT(c, 0xdf4abu);
    wr32((c.sbase[3] + (uint32_t)(0xC1618u)), 0x0u);
    // 0df4b5  pop edi
    X86_AT(c, 0xdf4b5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0df4b6  pop esi
    X86_AT(c, 0xdf4b6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0df4b7  ret 
    X86_AT(c, 0xdf4b7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf34cu, "ran off the end of a function");
}
void f_000df4b8(X86Cpu& c) {
    X86_TICK(c, 80);
    // 0df4b8  push ebp
    X86_AT(c, 0xdf4b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0df4b9  mov ebp, esp
    X86_AT(c, 0xdf4b9u);
    c.r[5] = c.r[4];
    // 0df4bb  push eax
    X86_AT(c, 0xdf4bbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0df4bc  push ebx
    X86_AT(c, 0xdf4bcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0df4bd  push esi
    X86_AT(c, 0xdf4bdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df4be  push edi
    X86_AT(c, 0xdf4beu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df4bf  mov esi, 0xc
    X86_AT(c, 0xdf4bfu);
    c.r[6] = 0xCu;
    // 0df4c4  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdf4c4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0df4c9  lea edx, [eax + eax*2]
    X86_AT(c, 0xdf4c9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0df4cc  lea edx, [eax + edx*8]
    X86_AT(c, 0xdf4ccu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0df4cf  lea edx, [eax + edx*4]
    X86_AT(c, 0xdf4cfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0df4d2  lea edx, [eax + edx*2]
    X86_AT(c, 0xdf4d2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0df4d5  shl edx, 2
    X86_AT(c, 0xdf4d5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0df4d8  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdf4d8u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0df4df  add eax, edx
    X86_AT(c, 0xdf4dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0df4e1  mov edx, dword ptr [0xc03d4]
    X86_AT(c, 0xdf4e1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0df4e7  lea edx, [edx*8]
    X86_AT(c, 0xdf4e7u);
    c.r[2] = (uint32_t)(c.r[2] * 8);
    // 0df4ee  lea edx, [edx + edx*2]
    X86_AT(c, 0xdf4eeu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0df4f1  add edx, eax
    X86_AT(c, 0xdf4f1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0df4f3  mov eax, dword ptr [edx + 0xc0b00]
    X86_AT(c, 0xdf4f3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B00u)));
    // 0df4f9  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdf4f9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0df4fc  mov ebx, dword ptr [edx + 0xc0b04]
    X86_AT(c, 0xdf4fcu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B04u)));
    // 0df502  cmp eax, 0x64
    X86_AT(c, 0xdf502u);
    (void)x86_sub(c, c.r[0], 0x64u, 0, 4);
    // 0df505  jl 0xdf50c
    X86_AT(c, 0xdf505u);
    if (x86_cc(c, 12)) { goto L_df50c; }
    X86_TICK(c, 7);
    // 0df507  cmp ebx, 0x64
    X86_AT(c, 0xdf507u);
    (void)x86_sub(c, c.r[3], 0x64u, 0, 4);
    // 0df50a  jge 0xdf513
    X86_AT(c, 0xdf50au);
    if (x86_cc(c, 13)) { goto L_df513; }
L_df50c:
    X86_TICK(c, 9);
    // 0df50c  mov edi, 0xb
    X86_AT(c, 0xdf50cu);
    c.r[7] = 0xBu;
    // 0df511  jmp 0xdf518
    X86_AT(c, 0xdf511u);
    goto L_df518;
L_df513:
    X86_TICK(c, 2);
    // 0df513  mov edi, 0xf
    X86_AT(c, 0xdf513u);
    c.r[7] = 0xFu;
L_df518:
    X86_TICK(c, 11);
    // 0df518  push edi
    X86_AT(c, 0xdf518u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df519  push esi
    X86_AT(c, 0xdf519u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df51a  call 0xcac40
    X86_AT(c, 0xdf51au);
    push32(c, 0xdf51fu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xdf51fu);
    X86_TICK(c, 9);
    // 0df51f  push esi
    X86_AT(c, 0xdf51fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df520  call 0xca0a0
    X86_AT(c, 0xdf520u);
    push32(c, 0xdf525u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdf525u);
    X86_TICK(c, 13);
    // 0df525  push 1
    X86_AT(c, 0xdf525u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0df527  push 0xe
    X86_AT(c, 0xdf527u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0df529  push esi
    X86_AT(c, 0xdf529u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df52a  call 0xca9c8
    X86_AT(c, 0xdf52au);
    push32(c, 0xdf52fu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xdf52fu);
    X86_TICK(c, 13);
    // 0df52f  push 4
    X86_AT(c, 0xdf52fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0df531  push ebx
    X86_AT(c, 0xdf531u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0df532  push esi
    X86_AT(c, 0xdf532u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df533  call 0xc8cb8
    X86_AT(c, 0xdf533u);
    push32(c, 0xdf538u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xdf538u);
    X86_TICK(c, 13);
    // 0df538  push 2
    X86_AT(c, 0xdf538u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0df53a  push 0xe
    X86_AT(c, 0xdf53au);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0df53c  push esi
    X86_AT(c, 0xdf53cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df53d  call 0xca9c8
    X86_AT(c, 0xdf53du);
    push32(c, 0xdf542u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xdf542u);
    X86_TICK(c, 16);
    // 0df542  push 4
    X86_AT(c, 0xdf542u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0df544  push dword ptr [ebp - 4]
    X86_AT(c, 0xdf544u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0df547  push esi
    X86_AT(c, 0xdf547u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df548  call 0xc8cb8
    X86_AT(c, 0xdf548u);
    push32(c, 0xdf54du); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xdf54du);
    X86_TICK(c, 15);
    // 0df54d  add esp, 0x3c
    X86_AT(c, 0xdf54du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0df550  push 3
    X86_AT(c, 0xdf550u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0df552  push 0xe
    X86_AT(c, 0xdf552u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0df554  push esi
    X86_AT(c, 0xdf554u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df555  call 0xca9c8
    X86_AT(c, 0xdf555u);
    push32(c, 0xdf55au); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xdf55au);
    X86_TICK(c, 16);
    // 0df55a  push 4
    X86_AT(c, 0xdf55au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0df55c  push dword ptr [0xb031e]
    X86_AT(c, 0xdf55cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB031Eu))); push32(c, v); }
    // 0df562  push esi
    X86_AT(c, 0xdf562u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df563  call 0xc8cb8
    X86_AT(c, 0xdf563u);
    push32(c, 0xdf568u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xdf568u);
    X86_TICK(c, 13);
    // 0df568  push 4
    X86_AT(c, 0xdf568u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0df56a  push 0xe
    X86_AT(c, 0xdf56au);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0df56c  push esi
    X86_AT(c, 0xdf56cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df56d  call 0xca9c8
    X86_AT(c, 0xdf56du);
    push32(c, 0xdf572u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xdf572u);
    X86_TICK(c, 16);
    // 0df572  push 4
    X86_AT(c, 0xdf572u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0df574  push dword ptr [0xb031a]
    X86_AT(c, 0xdf574u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB031Au))); push32(c, v); }
    // 0df57a  push esi
    X86_AT(c, 0xdf57au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df57b  call 0xc8cb8
    X86_AT(c, 0xdf57bu);
    push32(c, 0xdf580u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xdf580u);
    X86_TICK(c, 13);
    // 0df580  push 5
    X86_AT(c, 0xdf580u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0df582  push 0xe
    X86_AT(c, 0xdf582u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0df584  push esi
    X86_AT(c, 0xdf584u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df585  call 0xca9c8
    X86_AT(c, 0xdf585u);
    push32(c, 0xdf58au); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xdf58au);
    X86_TICK(c, 11);
    // 0df58a  add esp, 0x3c
    X86_AT(c, 0xdf58au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0df58d  push 0xc
    X86_AT(c, 0xdf58du);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0df58f  call 0xc8dd4
    X86_AT(c, 0xdf58fu);
    push32(c, 0xdf594u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xdf594u);
    X86_TICK(c, 16);
    // 0df594  push 4
    X86_AT(c, 0xdf594u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0df596  push dword ptr [0xb041e]
    X86_AT(c, 0xdf596u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB041Eu))); push32(c, v); }
    // 0df59c  push esi
    X86_AT(c, 0xdf59cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df59d  call 0xc8cb8
    X86_AT(c, 0xdf59du);
    push32(c, 0xdf5a2u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xdf5a2u);
    X86_TICK(c, 9);
    // 0df5a2  push 0xf
    X86_AT(c, 0xdf5a2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0df5a4  call 0xc8dd4
    X86_AT(c, 0xdf5a4u);
    push32(c, 0xdf5a9u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xdf5a9u);
    X86_TICK(c, 11);
    // 0df5a9  push 0xf
    X86_AT(c, 0xdf5a9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0df5ab  push esi
    X86_AT(c, 0xdf5abu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df5ac  call 0xcac40
    X86_AT(c, 0xdf5acu);
    push32(c, 0xdf5b1u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xdf5b1u);
    X86_TICK(c, 30);
    // 0df5b1  add esp, 0x1c
    X86_AT(c, 0xdf5b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0df5b4  pop edi
    X86_AT(c, 0xdf5b4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0df5b5  pop esi
    X86_AT(c, 0xdf5b5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0df5b6  pop ebx
    X86_AT(c, 0xdf5b6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0df5b7  leave 
    X86_AT(c, 0xdf5b7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0df5b8  ret 
    X86_AT(c, 0xdf5b8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf4b8u, "ran off the end of a function");
}
void f_000df5bc(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0df5bc  cmp dword ptr [0xb031e], 0x270f
    X86_AT(c, 0xdf5bcu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB031Eu))), 0x270Fu, 0, 4);
    // 0df5c6  jle 0xdf5d2
    X86_AT(c, 0xdf5c6u);
    if (x86_cc(c, 14)) { goto L_df5d2; }
    X86_TICK(c, 2);
    // 0df5c8  mov dword ptr [0xb031e], 0x270f
    X86_AT(c, 0xdf5c8u);
    wr32((c.sbase[3] + (uint32_t)(0xB031Eu)), 0x270Fu);
L_df5d2:
    X86_TICK(c, 12);
    // 0df5d2  cmp dword ptr [0xb031e], 0
    X86_AT(c, 0xdf5d2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB031Eu))), 0x0u, 0, 4);
    // 0df5d9  jge 0xdf5e5
    X86_AT(c, 0xdf5d9u);
    if (x86_cc(c, 13)) { goto L_df5e5; }
    X86_TICK(c, 2);
    // 0df5db  mov dword ptr [0xb031e], 0
    X86_AT(c, 0xdf5dbu);
    wr32((c.sbase[3] + (uint32_t)(0xB031Eu)), 0x0u);
L_df5e5:
    X86_TICK(c, 7);
    // 0df5e5  call 0xdf4b8
    X86_AT(c, 0xdf5e5u);
    push32(c, 0xdf5eau); x86_call_known(c, 0xdf4b8u, f_000df4b8); X86_RET(c, 0xdf5eau);
    X86_TICK(c, 10);
    // 0df5ea  ret 
    X86_AT(c, 0xdf5eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf5bcu, "ran off the end of a function");
}
void f_000df5ec(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0df5ec  cmp dword ptr [0xb031a], 0x270f
    X86_AT(c, 0xdf5ecu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0x270Fu, 0, 4);
    // 0df5f6  jle 0xdf602
    X86_AT(c, 0xdf5f6u);
    if (x86_cc(c, 14)) { goto L_df602; }
    X86_TICK(c, 2);
    // 0df5f8  mov dword ptr [0xb031a], 0x270f
    X86_AT(c, 0xdf5f8u);
    wr32((c.sbase[3] + (uint32_t)(0xB031Au)), 0x270Fu);
L_df602:
    X86_TICK(c, 12);
    // 0df602  cmp dword ptr [0xb031a], 0
    X86_AT(c, 0xdf602u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0x0u, 0, 4);
    // 0df609  jge 0xdf615
    X86_AT(c, 0xdf609u);
    if (x86_cc(c, 13)) { goto L_df615; }
    X86_TICK(c, 2);
    // 0df60b  mov dword ptr [0xb031a], 0
    X86_AT(c, 0xdf60bu);
    wr32((c.sbase[3] + (uint32_t)(0xB031Au)), 0x0u);
L_df615:
    X86_TICK(c, 7);
    // 0df615  call 0xdf4b8
    X86_AT(c, 0xdf615u);
    push32(c, 0xdf61au); x86_call_known(c, 0xdf4b8u, f_000df4b8); X86_RET(c, 0xdf61au);
    X86_TICK(c, 10);
    // 0df61a  ret 
    X86_AT(c, 0xdf61au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf5ecu, "ran off the end of a function");
}
void f_000df61c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0df61c  push ebp
    X86_AT(c, 0xdf61cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0df61d  mov ebp, esp
    X86_AT(c, 0xdf61du);
    c.r[5] = c.r[4];
    // 0df61f  push edi
    X86_AT(c, 0xdf61fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df620  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdf620u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0df623  and edi, edi
    X86_AT(c, 0xdf623u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0df625  jne 0xdf62e
    X86_AT(c, 0xdf625u);
    if (x86_cc(c, 5)) { goto L_df62e; }
    X86_TICK(c, 9);
    // 0df627  mov eax, 1
    X86_AT(c, 0xdf627u);
    c.r[0] = 0x1u;
    // 0df62c  jmp 0xdf654
    X86_AT(c, 0xdf62cu);
    goto L_df654;
L_df62e:
    X86_TICK(c, 7);
    // 0df62e  cmp edi, 1
    X86_AT(c, 0xdf62eu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0df631  jne 0xdf637
    X86_AT(c, 0xdf631u);
    if (x86_cc(c, 5)) { goto L_df637; }
    X86_TICK(c, 9);
    // 0df633  sub eax, eax
    X86_AT(c, 0xdf633u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0df635  jmp 0xdf654
    X86_AT(c, 0xdf635u);
    goto L_df654;
L_df637:
    X86_TICK(c, 7);
    // 0df637  cmp edi, 2
    X86_AT(c, 0xdf637u);
    (void)x86_sub(c, c.r[7], 0x2u, 0, 4);
    // 0df63a  jne 0xdf643
    X86_AT(c, 0xdf63au);
    if (x86_cc(c, 5)) { goto L_df643; }
    X86_TICK(c, 9);
    // 0df63c  mov eax, 3
    X86_AT(c, 0xdf63cu);
    c.r[0] = 0x3u;
    // 0df641  jmp 0xdf654
    X86_AT(c, 0xdf641u);
    goto L_df654;
L_df643:
    X86_TICK(c, 7);
    // 0df643  cmp edi, 3
    X86_AT(c, 0xdf643u);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0df646  jne 0xdf64f
    X86_AT(c, 0xdf646u);
    if (x86_cc(c, 5)) { goto L_df64f; }
    X86_TICK(c, 9);
    // 0df648  mov eax, 2
    X86_AT(c, 0xdf648u);
    c.r[0] = 0x2u;
    // 0df64d  jmp 0xdf654
    X86_AT(c, 0xdf64du);
    goto L_df654;
L_df64f:
    X86_TICK(c, 7);
    // 0df64f  call 0xe7a6c
    X86_AT(c, 0xdf64fu);
    push32(c, 0xdf654u); x86_call_known(c, 0xe7a6cu, f_000e7a6c); X86_RET(c, 0xdf654u);
L_df654:
    X86_TICK(c, 20);
    // 0df654  pop edi
    X86_AT(c, 0xdf654u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0df655  leave 
    X86_AT(c, 0xdf655u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0df656  ret 
    X86_AT(c, 0xdf656u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf61cu, "ran off the end of a function");
}
void f_000df658(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0df658  call 0xdf4b8
    X86_AT(c, 0xdf658u);
    push32(c, 0xdf65du); x86_call_known(c, 0xdf4b8u, f_000df4b8); X86_RET(c, 0xdf65du);
    X86_TICK(c, 10);
    // 0df65d  ret 
    X86_AT(c, 0xdf65du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf658u, "ran off the end of a function");
}
void f_000df660(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0df660  call 0xdf4b8
    X86_AT(c, 0xdf660u);
    push32(c, 0xdf665u); x86_call_known(c, 0xdf4b8u, f_000df4b8); X86_RET(c, 0xdf665u);
    X86_TICK(c, 10);
    // 0df665  ret 
    X86_AT(c, 0xdf665u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf660u, "ran off the end of a function");
}
void f_000df668(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0df668  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xdf668u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0df66c  and ecx, ecx
    X86_AT(c, 0xdf66cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0df66e  jne 0xdf677
    X86_AT(c, 0xdf66eu);
    if (x86_cc(c, 5)) { goto L_df677; }
    X86_TICK(c, 9);
    // 0df670  mov eax, 0x3e8
    X86_AT(c, 0xdf670u);
    c.r[0] = 0x3E8u;
    // 0df675  jmp 0xdf691
    X86_AT(c, 0xdf675u);
    goto L_df691;
L_df677:
    X86_TICK(c, 7);
    // 0df677  cmp ecx, 2
    X86_AT(c, 0xdf677u);
    (void)x86_sub(c, c.r[1], 0x2u, 0, 4);
    // 0df67a  jne 0xdf683
    X86_AT(c, 0xdf67au);
    if (x86_cc(c, 5)) { goto L_df683; }
    X86_TICK(c, 9);
    // 0df67c  mov eax, 0x9c4
    X86_AT(c, 0xdf67cu);
    c.r[0] = 0x9C4u;
    // 0df681  jmp 0xdf691
    X86_AT(c, 0xdf681u);
    goto L_df691;
L_df683:
    X86_TICK(c, 7);
    // 0df683  cmp ecx, 1
    X86_AT(c, 0xdf683u);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 0df686  jne 0xdf68f
    X86_AT(c, 0xdf686u);
    if (x86_cc(c, 5)) { goto L_df68f; }
    X86_TICK(c, 9);
    // 0df688  mov eax, 0x1388
    X86_AT(c, 0xdf688u);
    c.r[0] = 0x1388u;
    // 0df68d  jmp 0xdf691
    X86_AT(c, 0xdf68du);
    goto L_df691;
L_df68f:
    X86_TICK(c, 2);
    // 0df68f  sub eax, eax
    X86_AT(c, 0xdf68fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_df691:
    X86_TICK(c, 10);
    // 0df691  ret 
    X86_AT(c, 0xdf691u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf668u, "ran off the end of a function");
}
void f_000df694(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0df694  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xdf694u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0df698  and ecx, ecx
    X86_AT(c, 0xdf698u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0df69a  je 0xdf6ad
    X86_AT(c, 0xdf69au);
    if (x86_cc(c, 4)) { goto L_df6ad; }
    X86_TICK(c, 7);
    // 0df69c  cmp ecx, 2
    X86_AT(c, 0xdf69cu);
    (void)x86_sub(c, c.r[1], 0x2u, 0, 4);
    // 0df69f  jne 0xdf6a8
    X86_AT(c, 0xdf69fu);
    if (x86_cc(c, 5)) { goto L_df6a8; }
    X86_TICK(c, 9);
    // 0df6a1  mov eax, 0x1388
    X86_AT(c, 0xdf6a1u);
    c.r[0] = 0x1388u;
    // 0df6a6  jmp 0xdf6b6
    X86_AT(c, 0xdf6a6u);
    goto L_df6b6;
L_df6a8:
    X86_TICK(c, 7);
    // 0df6a8  cmp ecx, 1
    X86_AT(c, 0xdf6a8u);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 0df6ab  jne 0xdf6b4
    X86_AT(c, 0xdf6abu);
    if (x86_cc(c, 5)) { goto L_df6b4; }
L_df6ad:
    X86_TICK(c, 9);
    // 0df6ad  mov eax, 0x3e8
    X86_AT(c, 0xdf6adu);
    c.r[0] = 0x3E8u;
    // 0df6b2  jmp 0xdf6b6
    X86_AT(c, 0xdf6b2u);
    goto L_df6b6;
L_df6b4:
    X86_TICK(c, 2);
    // 0df6b4  sub eax, eax
    X86_AT(c, 0xdf6b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_df6b6:
    X86_TICK(c, 10);
    // 0df6b6  ret 
    X86_AT(c, 0xdf6b6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf694u, "ran off the end of a function");
}
void f_000df6b8(X86Cpu& c) {
    X86_TICK(c, 119);
    // 0df6b8  push ebp
    X86_AT(c, 0xdf6b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0df6b9  mov ebp, esp
    X86_AT(c, 0xdf6b9u);
    c.r[5] = c.r[4];
    // 0df6bb  push ebx
    X86_AT(c, 0xdf6bbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0df6bc  push esi
    X86_AT(c, 0xdf6bcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df6bd  push edi
    X86_AT(c, 0xdf6bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df6be  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdf6beu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0df6c1  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdf6c1u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0df6c4  mov eax, 0xb52f4
    X86_AT(c, 0xdf6c4u);
    c.r[0] = 0xB52F4u;
    // 0df6c9  mov edx, edi
    X86_AT(c, 0xdf6c9u);
    c.r[2] = c.r[7];
    // 0df6cb  lea ecx, [edx + edx*2]
    X86_AT(c, 0xdf6cbu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0df6ce  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xdf6ceu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0df6d1  lea ecx, [edx + ecx*4]
    X86_AT(c, 0xdf6d1u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 4);
    // 0df6d4  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xdf6d4u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0df6d7  shl ecx, 2
    X86_AT(c, 0xdf6d7u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0df6da  imul edx, esi, 0x74
    X86_AT(c, 0xdf6dau);
    c.r[2] = x86_imul2(c, c.r[6], 0x74u, 4);
    // 0df6dd  add edx, ecx
    X86_AT(c, 0xdf6ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0df6df  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdf6dfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0df6e2  lea ecx, [ecx*8]
    X86_AT(c, 0xdf6e2u);
    c.r[1] = (uint32_t)(c.r[1] * 8);
    // 0df6e9  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xdf6e9u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0df6ec  add ecx, edx
    X86_AT(c, 0xdf6ecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0df6ee  mov ebx, dword ptr [eax + ecx*1 + 0xb808]
    X86_AT(c, 0xdf6eeu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0xB808u)));
    // 0df6f5  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xdf6f5u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0df6f8  lea ecx, [ecx*4]
    X86_AT(c, 0xdf6f8u);
    c.r[1] = (uint32_t)(c.r[1] * 4);
    // 0df6ff  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xdf6ffu);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0df702  lea ecx, [eax + ecx*1 + 0xda4c]
    X86_AT(c, 0xdf702u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[1] + 0xDA4Cu);
    // 0df709  mov eax, dword ptr [ecx + ebx*4]
    X86_AT(c, 0xdf709u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + c.r[3] * 4)));
    // 0df70c  add eax, dword ptr [edx + 0xc0aec]
    X86_AT(c, 0xdf70cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AECu))), 0, 4); }
    // 0df712  pop edi
    X86_AT(c, 0xdf712u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0df713  pop esi
    X86_AT(c, 0xdf713u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0df714  pop ebx
    X86_AT(c, 0xdf714u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0df715  leave 
    X86_AT(c, 0xdf715u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0df716  ret 
    X86_AT(c, 0xdf716u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf6b8u, "ran off the end of a function");
}
void f_000df718(X86Cpu& c) {
    X86_TICK(c, 119);
    // 0df718  push ebp
    X86_AT(c, 0xdf718u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0df719  mov ebp, esp
    X86_AT(c, 0xdf719u);
    c.r[5] = c.r[4];
    // 0df71b  push ebx
    X86_AT(c, 0xdf71bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0df71c  push esi
    X86_AT(c, 0xdf71cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df71d  push edi
    X86_AT(c, 0xdf71du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df71e  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdf71eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0df721  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdf721u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0df724  mov eax, 0xb52f4
    X86_AT(c, 0xdf724u);
    c.r[0] = 0xB52F4u;
    // 0df729  mov edx, edi
    X86_AT(c, 0xdf729u);
    c.r[2] = c.r[7];
    // 0df72b  lea ecx, [edx + edx*2]
    X86_AT(c, 0xdf72bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0df72e  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xdf72eu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0df731  lea ecx, [edx + ecx*4]
    X86_AT(c, 0xdf731u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 4);
    // 0df734  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xdf734u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0df737  shl ecx, 2
    X86_AT(c, 0xdf737u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0df73a  imul edx, esi, 0x74
    X86_AT(c, 0xdf73au);
    c.r[2] = x86_imul2(c, c.r[6], 0x74u, 4);
    // 0df73d  add edx, ecx
    X86_AT(c, 0xdf73du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0df73f  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdf73fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0df742  lea ecx, [ecx*8]
    X86_AT(c, 0xdf742u);
    c.r[1] = (uint32_t)(c.r[1] * 8);
    // 0df749  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xdf749u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0df74c  add ecx, edx
    X86_AT(c, 0xdf74cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0df74e  mov ebx, dword ptr [eax + ecx*1 + 0xb808]
    X86_AT(c, 0xdf74eu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0xB808u)));
    // 0df755  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xdf755u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0df758  lea ecx, [ecx*4]
    X86_AT(c, 0xdf758u);
    c.r[1] = (uint32_t)(c.r[1] * 4);
    // 0df75f  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xdf75fu);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0df762  lea ecx, [eax + ecx*1 + 0xda7c]
    X86_AT(c, 0xdf762u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[1] + 0xDA7Cu);
    // 0df769  mov eax, dword ptr [ecx + ebx*4]
    X86_AT(c, 0xdf769u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + c.r[3] * 4)));
    // 0df76c  add eax, dword ptr [edx + 0xc0af0]
    X86_AT(c, 0xdf76cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AF0u))), 0, 4); }
    // 0df772  pop edi
    X86_AT(c, 0xdf772u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0df773  pop esi
    X86_AT(c, 0xdf773u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0df774  pop ebx
    X86_AT(c, 0xdf774u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0df775  leave 
    X86_AT(c, 0xdf775u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0df776  ret 
    X86_AT(c, 0xdf776u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf718u, "ran off the end of a function");
}
void f_000df778(X86Cpu& c) {
    X86_TICK(c, 63);
    // 0df778  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdf778u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0df77d  lea edx, [eax + eax*2]
    X86_AT(c, 0xdf77du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0df780  lea edx, [eax + edx*8]
    X86_AT(c, 0xdf780u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0df783  lea edx, [eax + edx*4]
    X86_AT(c, 0xdf783u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0df786  lea edx, [eax + edx*2]
    X86_AT(c, 0xdf786u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0df789  shl edx, 2
    X86_AT(c, 0xdf789u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0df78c  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdf78cu);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0df793  add eax, edx
    X86_AT(c, 0xdf793u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0df795  mov edx, dword ptr [0xc03d4]
    X86_AT(c, 0xdf795u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0df79b  lea edx, [edx*8]
    X86_AT(c, 0xdf79bu);
    c.r[2] = (uint32_t)(c.r[2] * 8);
    // 0df7a2  lea edx, [edx + edx*2]
    X86_AT(c, 0xdf7a2u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0df7a5  add edx, eax
    X86_AT(c, 0xdf7a5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0df7a7  mov eax, dword ptr [edx + 0xc0b04]
    X86_AT(c, 0xdf7a7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B04u)));
    // 0df7ad  ret 
    X86_AT(c, 0xdf7adu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf778u, "ran off the end of a function");
}
void f_000df7b0(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0df7b0  push ebp
    X86_AT(c, 0xdf7b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0df7b1  mov ebp, esp
    X86_AT(c, 0xdf7b1u);
    c.r[5] = c.r[4];
    // 0df7b3  push esi
    X86_AT(c, 0xdf7b3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df7b4  push edi
    X86_AT(c, 0xdf7b4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df7b5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdf7b5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0df7b8  call 0xdf778
    X86_AT(c, 0xdf7b8u);
    push32(c, 0xdf7bdu); x86_call_known(c, 0xdf778u, f_000df778); X86_RET(c, 0xdf7bdu);
    X86_TICK(c, 10);
    // 0df7bd  xchg esi, eax
    X86_AT(c, 0xdf7bdu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0df7be  cmp edi, esi
    X86_AT(c, 0xdf7beu);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0df7c0  jle 0xdf7c6
    X86_AT(c, 0xdf7c0u);
    if (x86_cc(c, 14)) { goto L_df7c6; }
    X86_TICK(c, 9);
    // 0df7c2  sub esi, esi
    X86_AT(c, 0xdf7c2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0df7c4  jmp 0xdf7c8
    X86_AT(c, 0xdf7c4u);
    goto L_df7c8;
L_df7c6:
    X86_TICK(c, 2);
    // 0df7c6  sub esi, edi
    X86_AT(c, 0xdf7c6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
L_df7c8:
    X86_TICK(c, 58);
    // 0df7c8  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdf7c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0df7cd  lea edx, [eax + eax*2]
    X86_AT(c, 0xdf7cdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0df7d0  lea edx, [eax + edx*8]
    X86_AT(c, 0xdf7d0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0df7d3  lea edx, [eax + edx*4]
    X86_AT(c, 0xdf7d3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0df7d6  lea edx, [eax + edx*2]
    X86_AT(c, 0xdf7d6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0df7d9  shl edx, 2
    X86_AT(c, 0xdf7d9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0df7dc  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdf7dcu);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0df7e3  add eax, edx
    X86_AT(c, 0xdf7e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0df7e5  mov edx, dword ptr [0xc03d4]
    X86_AT(c, 0xdf7e5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0df7eb  lea edx, [edx*8]
    X86_AT(c, 0xdf7ebu);
    c.r[2] = (uint32_t)(c.r[2] * 8);
    // 0df7f2  lea edx, [edx + edx*2]
    X86_AT(c, 0xdf7f2u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0df7f5  add edx, eax
    X86_AT(c, 0xdf7f5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0df7f7  mov dword ptr [edx + 0xc0b04], esi
    X86_AT(c, 0xdf7f7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B04u)), c.r[6]);
    // 0df7fd  call 0xdf660
    X86_AT(c, 0xdf7fdu);
    push32(c, 0xdf802u); x86_call_known(c, 0xdf660u, f_000df660); X86_RET(c, 0xdf802u);
    X86_TICK(c, 24);
    // 0df802  pop edi
    X86_AT(c, 0xdf802u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0df803  pop esi
    X86_AT(c, 0xdf803u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0df804  leave 
    X86_AT(c, 0xdf804u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0df805  ret 
    X86_AT(c, 0xdf805u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf7b0u, "ran off the end of a function");
}
void f_000df808(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0df808  call 0xdf778
    X86_AT(c, 0xdf808u);
    push32(c, 0xdf80du); x86_call_known(c, 0xdf778u, f_000df778); X86_RET(c, 0xdf80du);
    X86_TICK(c, 25);
    // 0df80d  cdq 
    X86_AT(c, 0xdf80du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0df80e  sub eax, edx
    X86_AT(c, 0xdf80eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0df810  sar eax, 1
    X86_AT(c, 0xdf810u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0df812  cdq 
    X86_AT(c, 0xdf812u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0df813  sub eax, edx
    X86_AT(c, 0xdf813u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0df815  sar eax, 1
    X86_AT(c, 0xdf815u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0df817  add eax, 5
    X86_AT(c, 0xdf817u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5u, 0, 4); }
    // 0df81a  push eax
    X86_AT(c, 0xdf81au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0df81b  call 0xdf7b0
    X86_AT(c, 0xdf81bu);
    push32(c, 0xdf820u); x86_call_known(c, 0xdf7b0u, f_000df7b0); X86_RET(c, 0xdf820u);
    X86_TICK(c, 12);
    // 0df820  add esp, 4
    X86_AT(c, 0xdf820u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0df823  ret 
    X86_AT(c, 0xdf823u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf808u, "ran off the end of a function");
}
void f_000df824(X86Cpu& c) {
    X86_TICK(c, 63);
    // 0df824  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdf824u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0df829  lea edx, [eax + eax*2]
    X86_AT(c, 0xdf829u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0df82c  lea edx, [eax + edx*8]
    X86_AT(c, 0xdf82cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0df82f  lea edx, [eax + edx*4]
    X86_AT(c, 0xdf82fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0df832  lea edx, [eax + edx*2]
    X86_AT(c, 0xdf832u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0df835  shl edx, 2
    X86_AT(c, 0xdf835u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0df838  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdf838u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0df83f  add eax, edx
    X86_AT(c, 0xdf83fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0df841  mov edx, dword ptr [0xc03d4]
    X86_AT(c, 0xdf841u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0df847  lea edx, [edx*8]
    X86_AT(c, 0xdf847u);
    c.r[2] = (uint32_t)(c.r[2] * 8);
    // 0df84e  lea edx, [edx + edx*2]
    X86_AT(c, 0xdf84eu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0df851  add edx, eax
    X86_AT(c, 0xdf851u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0df853  mov eax, dword ptr [edx + 0xc0b00]
    X86_AT(c, 0xdf853u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B00u)));
    // 0df859  ret 
    X86_AT(c, 0xdf859u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf824u, "ran off the end of a function");
}
void f_000df85c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0df85c  push ebp
    X86_AT(c, 0xdf85cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0df85d  mov ebp, esp
    X86_AT(c, 0xdf85du);
    c.r[5] = c.r[4];
    // 0df85f  push esi
    X86_AT(c, 0xdf85fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df860  push edi
    X86_AT(c, 0xdf860u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df861  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdf861u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0df864  call 0xdf824
    X86_AT(c, 0xdf864u);
    push32(c, 0xdf869u); x86_call_known(c, 0xdf824u, f_000df824); X86_RET(c, 0xdf869u);
    X86_TICK(c, 10);
    // 0df869  xchg esi, eax
    X86_AT(c, 0xdf869u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0df86a  cmp edi, esi
    X86_AT(c, 0xdf86au);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0df86c  jle 0xdf872
    X86_AT(c, 0xdf86cu);
    if (x86_cc(c, 14)) { goto L_df872; }
    X86_TICK(c, 9);
    // 0df86e  sub esi, esi
    X86_AT(c, 0xdf86eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0df870  jmp 0xdf874
    X86_AT(c, 0xdf870u);
    goto L_df874;
L_df872:
    X86_TICK(c, 2);
    // 0df872  sub esi, edi
    X86_AT(c, 0xdf872u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
L_df874:
    X86_TICK(c, 58);
    // 0df874  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdf874u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0df879  lea edx, [eax + eax*2]
    X86_AT(c, 0xdf879u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0df87c  lea edx, [eax + edx*8]
    X86_AT(c, 0xdf87cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0df87f  lea edx, [eax + edx*4]
    X86_AT(c, 0xdf87fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0df882  lea edx, [eax + edx*2]
    X86_AT(c, 0xdf882u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0df885  shl edx, 2
    X86_AT(c, 0xdf885u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0df888  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdf888u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0df88f  add eax, edx
    X86_AT(c, 0xdf88fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0df891  mov edx, dword ptr [0xc03d4]
    X86_AT(c, 0xdf891u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0df897  lea edx, [edx*8]
    X86_AT(c, 0xdf897u);
    c.r[2] = (uint32_t)(c.r[2] * 8);
    // 0df89e  lea edx, [edx + edx*2]
    X86_AT(c, 0xdf89eu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0df8a1  add edx, eax
    X86_AT(c, 0xdf8a1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0df8a3  mov dword ptr [edx + 0xc0b00], esi
    X86_AT(c, 0xdf8a3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B00u)), c.r[6]);
    // 0df8a9  call 0xdf658
    X86_AT(c, 0xdf8a9u);
    push32(c, 0xdf8aeu); x86_call_known(c, 0xdf658u, f_000df658); X86_RET(c, 0xdf8aeu);
    X86_TICK(c, 24);
    // 0df8ae  pop edi
    X86_AT(c, 0xdf8aeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0df8af  pop esi
    X86_AT(c, 0xdf8afu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0df8b0  leave 
    X86_AT(c, 0xdf8b0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0df8b1  ret 
    X86_AT(c, 0xdf8b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf85cu, "ran off the end of a function");
}
void f_000df8b4(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0df8b4  push ebp
    X86_AT(c, 0xdf8b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0df8b5  mov ebp, esp
    X86_AT(c, 0xdf8b5u);
    c.r[5] = c.r[4];
    // 0df8b7  push ebx
    X86_AT(c, 0xdf8b7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0df8b8  push esi
    X86_AT(c, 0xdf8b8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df8b9  push edi
    X86_AT(c, 0xdf8b9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df8ba  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdf8bau);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0df8bd  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdf8bdu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0df8c0  sub ebx, ebx
    X86_AT(c, 0xdf8c0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0df8c2  cmp ebx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xdf8c2u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 4);
    // 0df8c5  je 0xdf8e0
    X86_AT(c, 0xdf8c5u);
    if (x86_cc(c, 4)) { goto L_df8e0; }
    X86_TICK(c, 33);
    // 0df8c7  push ebx
    X86_AT(c, 0xdf8c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0df8c8  push esi
    X86_AT(c, 0xdf8c8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df8c9  push edi
    X86_AT(c, 0xdf8c9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df8ca  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xdf8cau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0df8cd  shl eax, 3
    X86_AT(c, 0xdf8cdu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0df8d0  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdf8d0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0df8d3  shl eax, 9
    X86_AT(c, 0xdf8d3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0df8d6  lea edx, [eax*1 + 0x43fd8]
    X86_AT(c, 0xdf8d6u);
    c.r[2] = (uint32_t)(c.r[0] + 0x43FD8u);
    // 0df8dd  push edx
    X86_AT(c, 0xdf8ddu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0df8de  jmp 0xdf8e9
    X86_AT(c, 0xdf8deu);
    goto L_df8e9;
L_df8e0:
    X86_TICK(c, 8);
    // 0df8e0  push 0
    X86_AT(c, 0xdf8e0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0df8e2  push esi
    X86_AT(c, 0xdf8e2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df8e3  push edi
    X86_AT(c, 0xdf8e3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df8e4  push 0x4bdd8
    X86_AT(c, 0xdf8e4u);
    { uint32_t v = 0x4BDD8u; push32(c, v); }
L_df8e9:
    X86_TICK(c, 7);
    // 0df8e9  call 0xc9a4c
    X86_AT(c, 0xdf8e9u);
    push32(c, 0xdf8eeu); x86_call_known(c, 0xc9a4cu, f_000c9a4c); X86_RET(c, 0xdf8eeu);
    X86_TICK(c, 23);
    // 0df8ee  add esp, 0x10
    X86_AT(c, 0xdf8eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0df8f1  push esi
    X86_AT(c, 0xdf8f1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df8f2  push edi
    X86_AT(c, 0xdf8f2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df8f3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xdf8f3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0df8f6  push dword ptr [ebp + 8]
    X86_AT(c, 0xdf8f6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0df8f9  call 0xdf908
    X86_AT(c, 0xdf8f9u);
    push32(c, 0xdf8feu); x86_call_known(c, 0xdf908u, f_000df908); X86_RET(c, 0xdf8feu);
    X86_TICK(c, 32);
    // 0df8fe  mov ebx, eax
    X86_AT(c, 0xdf8feu);
    c.r[3] = c.r[0];
    // 0df900  add esp, 0x10
    X86_AT(c, 0xdf900u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0df903  pop edi
    X86_AT(c, 0xdf903u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0df904  pop esi
    X86_AT(c, 0xdf904u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0df905  pop ebx
    X86_AT(c, 0xdf905u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0df906  leave 
    X86_AT(c, 0xdf906u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0df907  ret 
    X86_AT(c, 0xdf907u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf8b4u, "ran off the end of a function");
}
void f_000df908(X86Cpu& c) {
    X86_TICK(c, 90);
    // 0df908  push ebp
    X86_AT(c, 0xdf908u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0df909  mov ebp, esp
    X86_AT(c, 0xdf909u);
    c.r[5] = c.r[4];
    // 0df90b  sub esp, 0x10
    X86_AT(c, 0xdf90bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0df90e  push ebx
    X86_AT(c, 0xdf90eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0df90f  push esi
    X86_AT(c, 0xdf90fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0df910  push edi
    X86_AT(c, 0xdf910u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0df911  sub ebx, ebx
    X86_AT(c, 0xdf911u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0df913  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdf913u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0df918  lea edx, [eax + eax*2]
    X86_AT(c, 0xdf918u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0df91b  lea edx, [eax + edx*8]
    X86_AT(c, 0xdf91bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0df91e  lea edx, [eax + edx*4]
    X86_AT(c, 0xdf91eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0df921  lea edx, [eax + edx*2]
    X86_AT(c, 0xdf921u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0df924  shl edx, 2
    X86_AT(c, 0xdf924u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0df927  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdf927u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0df92e  add eax, edx
    X86_AT(c, 0xdf92eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0df930  mov edx, dword ptr [0xc03d4]
    X86_AT(c, 0xdf930u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0df936  lea edx, [edx*8]
    X86_AT(c, 0xdf936u);
    c.r[2] = (uint32_t)(c.r[2] * 8);
    // 0df93d  lea edx, [edx + edx*2]
    X86_AT(c, 0xdf93du);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0df940  add edx, eax
    X86_AT(c, 0xdf940u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0df942  add edx, 0xc0af4
    X86_AT(c, 0xdf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xC0AF4u, 0, 4); }
    // 0df948  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xdf948u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0df94b  add eax, 0xc0ae0
    X86_AT(c, 0xdf94bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xC0AE0u, 0, 4); }
    // 0df950  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xdf950u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0df953  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0xdf953u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0df956  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xdf956u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0df959  mov eax, dword ptr [eax + 8]
    X86_AT(c, 0xdf959u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0df95c  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdf95cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0df95f  cmp ebx, edx
    X86_AT(c, 0xdf95fu);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 0df961  je 0xdf995
    X86_AT(c, 0xdf961u);
    if (x86_cc(c, 4)) { goto L_df995; }
    X86_TICK(c, 17);
    // 0df963  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdf963u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0df966  sub eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdf966u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0df969  and eax, eax
    X86_AT(c, 0xdf969u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0df96b  jge 0xdf975
    X86_AT(c, 0xdf96bu);
    if (x86_cc(c, 13)) { goto L_df975; }
    X86_TICK(c, 12);
    // 0df96d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdf96du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0df970  sub eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdf970u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0df973  neg eax
    X86_AT(c, 0xdf973u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_df975:
    X86_TICK(c, 7);
    // 0df975  cmp eax, 0x20
    X86_AT(c, 0xdf975u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0df978  jge 0xdf995
    X86_AT(c, 0xdf978u);
    if (x86_cc(c, 13)) { goto L_df995; }
    X86_TICK(c, 17);
    // 0df97a  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdf97au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0df97d  sub eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdf97du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4); }
    // 0df980  and eax, eax
    X86_AT(c, 0xdf980u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0df982  jge 0xdf98c
    X86_AT(c, 0xdf982u);
    if (x86_cc(c, 13)) { goto L_df98c; }
    X86_TICK(c, 12);
    // 0df984  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdf984u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0df987  sub eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdf987u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4); }
    // 0df98a  neg eax
    X86_AT(c, 0xdf98au);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_df98c:
    X86_TICK(c, 7);
    // 0df98c  cmp eax, 0x20
    X86_AT(c, 0xdf98cu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0df98f  jl 0xdfbaa
    X86_AT(c, 0xdf98fu);
    if (x86_cc(c, 12)) { goto L_dfbaa; }
L_df995:
    X86_TICK(c, 23);
    // 0df995  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xdf995u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0df998  mov edx, dword ptr [eax + 0xc]
    X86_AT(c, 0xdf998u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)));
    // 0df99b  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xdf99bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0df99e  mov eax, dword ptr [eax + 0x10]
    X86_AT(c, 0xdf99eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x10u)));
    // 0df9a1  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdf9a1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0df9a4  and edx, edx
    X86_AT(c, 0xdf9a4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0df9a6  je 0xdf9da
    X86_AT(c, 0xdf9a6u);
    if (x86_cc(c, 4)) { goto L_df9da; }
    X86_TICK(c, 17);
    // 0df9a8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdf9a8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0df9ab  sub eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdf9abu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0df9ae  and eax, eax
    X86_AT(c, 0xdf9aeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0df9b0  jge 0xdf9ba
    X86_AT(c, 0xdf9b0u);
    if (x86_cc(c, 13)) { goto L_df9ba; }
    X86_TICK(c, 12);
    // 0df9b2  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdf9b2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0df9b5  sub eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdf9b5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0df9b8  neg eax
    X86_AT(c, 0xdf9b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_df9ba:
    X86_TICK(c, 7);
    // 0df9ba  cmp eax, 0x20
    X86_AT(c, 0xdf9bau);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0df9bd  jge 0xdf9da
    X86_AT(c, 0xdf9bdu);
    if (x86_cc(c, 13)) { goto L_df9da; }
    X86_TICK(c, 17);
    // 0df9bf  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdf9bfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0df9c2  sub eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdf9c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4); }
    // 0df9c5  and eax, eax
    X86_AT(c, 0xdf9c5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0df9c7  jge 0xdf9d1
    X86_AT(c, 0xdf9c7u);
    if (x86_cc(c, 13)) { goto L_df9d1; }
    X86_TICK(c, 12);
    // 0df9c9  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdf9c9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0df9cc  sub eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdf9ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4); }
    // 0df9cf  neg eax
    X86_AT(c, 0xdf9cfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_df9d1:
    X86_TICK(c, 7);
    // 0df9d1  cmp eax, 0x20
    X86_AT(c, 0xdf9d1u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0df9d4  jl 0xdfbaa
    X86_AT(c, 0xdf9d4u);
    if (x86_cc(c, 12)) { goto L_dfbaa; }
L_df9da:
    X86_TICK(c, 12);
    // 0df9da  cmp dword ptr [0xc03cc], 3
    X86_AT(c, 0xdf9dau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03CCu))), 0x3u, 0, 4);
    // 0df9e1  jne 0xdfa22
    X86_AT(c, 0xdf9e1u);
    if (x86_cc(c, 5)) { goto L_dfa22; }
    X86_TICK(c, 12);
    // 0df9e3  cmp dword ptr [0xc03d0], 3
    X86_AT(c, 0xdf9e3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x3u, 0, 4);
    // 0df9ea  jne 0xdfa22
    X86_AT(c, 0xdf9eau);
    if (x86_cc(c, 5)) { goto L_dfa22; }
    X86_TICK(c, 13);
    // 0df9ec  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdf9ecu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0df9ef  sub eax, 0x70
    X86_AT(c, 0xdf9efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x70u, 0, 4); }
    // 0df9f2  and eax, eax
    X86_AT(c, 0xdf9f2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0df9f4  jge 0xdf9fe
    X86_AT(c, 0xdf9f4u);
    if (x86_cc(c, 13)) { goto L_df9fe; }
    X86_TICK(c, 8);
    // 0df9f6  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdf9f6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0df9f9  sub eax, 0x70
    X86_AT(c, 0xdf9f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x70u, 0, 4); }
    // 0df9fc  neg eax
    X86_AT(c, 0xdf9fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_df9fe:
    X86_TICK(c, 7);
    // 0df9fe  cmp eax, 0x20
    X86_AT(c, 0xdf9feu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0dfa01  jge 0xdfa22
    X86_AT(c, 0xdfa01u);
    if (x86_cc(c, 13)) { goto L_dfa22; }
    X86_TICK(c, 13);
    // 0dfa03  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdfa03u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0dfa06  sub eax, 0x8e
    X86_AT(c, 0xdfa06u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x8Eu, 0, 4); }
    // 0dfa0b  and eax, eax
    X86_AT(c, 0xdfa0bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dfa0d  jge 0xdfa19
    X86_AT(c, 0xdfa0du);
    if (x86_cc(c, 13)) { goto L_dfa19; }
    X86_TICK(c, 8);
    // 0dfa0f  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdfa0fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0dfa12  sub eax, 0x8e
    X86_AT(c, 0xdfa12u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x8Eu, 0, 4); }
    // 0dfa17  neg eax
    X86_AT(c, 0xdfa17u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_dfa19:
    X86_TICK(c, 7);
    // 0dfa19  cmp eax, 0x20
    X86_AT(c, 0xdfa19u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0dfa1c  jl 0xdfbaa
    X86_AT(c, 0xdfa1cu);
    if (x86_cc(c, 12)) { goto L_dfbaa; }
L_dfa22:
    X86_TICK(c, 2);
    // 0dfa22  sub edi, edi
    X86_AT(c, 0xdfa22u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_dfa24:
    X86_TICK(c, 7);
    // 0dfa24  cmp edi, 2
    X86_AT(c, 0xdfa24u);
    (void)x86_sub(c, c.r[7], 0x2u, 0, 4);
    // 0dfa27  jg 0xdfbb7
    X86_AT(c, 0xdfa27u);
    if (x86_cc(c, 15)) { goto L_dfbb7; }
    X86_TICK(c, 9);
    // 0dfa2d  lea esi, [edi + 1]
    X86_AT(c, 0xdfa2du);
    c.r[6] = (uint32_t)(c.r[7] + 0x1u);
    // 0dfa30  cmp esi, 3
    X86_AT(c, 0xdfa30u);
    (void)x86_sub(c, c.r[6], 0x3u, 0, 4);
    // 0dfa33  jl 0xdfa37
    X86_AT(c, 0xdfa33u);
    if (x86_cc(c, 12)) { goto L_dfa37; }
    X86_TICK(c, 2);
    // 0dfa35  sub esi, esi
    X86_AT(c, 0xdfa35u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_dfa37:
    X86_TICK(c, 66);
    // 0dfa37  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdfa37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0dfa3c  lea edx, [eax + eax*2]
    X86_AT(c, 0xdfa3cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dfa3f  lea edx, [eax + edx*8]
    X86_AT(c, 0xdfa3fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0dfa42  lea edx, [eax + edx*4]
    X86_AT(c, 0xdfa42u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0dfa45  lea edx, [eax + edx*2]
    X86_AT(c, 0xdfa45u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0dfa48  shl edx, 2
    X86_AT(c, 0xdfa48u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0dfa4b  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdfa4bu);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0dfa52  add eax, edx
    X86_AT(c, 0xdfa52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dfa54  lea edx, [edi*8]
    X86_AT(c, 0xdfa54u);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0dfa5b  lea edx, [edx + edx*2]
    X86_AT(c, 0xdfa5bu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0dfa5e  add edx, eax
    X86_AT(c, 0xdfa5eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dfa60  lea ecx, [esi*8]
    X86_AT(c, 0xdfa60u);
    c.r[1] = (uint32_t)(c.r[6] * 8);
    // 0dfa67  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xdfa67u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0dfa6a  add ecx, eax
    X86_AT(c, 0xdfa6au);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dfa6c  mov eax, dword ptr [edx + 0xc0af4]
    X86_AT(c, 0xdfa6cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AF4u)));
    // 0dfa72  cmp eax, dword ptr [ecx + 0xc0af4]
    X86_AT(c, 0xdfa72u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xC0AF4u))), 0, 4);
    // 0dfa78  jne 0xdfa8c
    X86_AT(c, 0xdfa78u);
    if (x86_cc(c, 5)) { goto L_dfa8c; }
    X86_TICK(c, 15);
    // 0dfa7a  mov eax, dword ptr [edx + 0xc0af8]
    X86_AT(c, 0xdfa7au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AF8u)));
    // 0dfa80  cmp eax, dword ptr [ecx + 0xc0af8]
    X86_AT(c, 0xdfa80u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xC0AF8u))), 0, 4);
    // 0dfa86  je 0xdfbb1
    X86_AT(c, 0xdfa86u);
    if (x86_cc(c, 4)) { goto L_dfbb1; }
L_dfa8c:
    X86_TICK(c, 68);
    // 0dfa8c  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdfa8cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0dfa91  lea edx, [eax + eax*2]
    X86_AT(c, 0xdfa91u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dfa94  lea edx, [eax + edx*8]
    X86_AT(c, 0xdfa94u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0dfa97  lea edx, [eax + edx*4]
    X86_AT(c, 0xdfa97u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0dfa9a  lea edx, [eax + edx*2]
    X86_AT(c, 0xdfa9au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0dfa9d  shl edx, 2
    X86_AT(c, 0xdfa9du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0dfaa0  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdfaa0u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0dfaa7  add eax, edx
    X86_AT(c, 0xdfaa7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dfaa9  lea edx, [edi*8]
    X86_AT(c, 0xdfaa9u);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0dfab0  lea edx, [edx + edx*2]
    X86_AT(c, 0xdfab0u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0dfab3  add edx, eax
    X86_AT(c, 0xdfab3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dfab5  lea ecx, [esi*8]
    X86_AT(c, 0xdfab5u);
    c.r[1] = (uint32_t)(c.r[6] * 8);
    // 0dfabc  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xdfabcu);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0dfabf  add ecx, eax
    X86_AT(c, 0xdfabfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dfac1  mov eax, dword ptr [edx + 0xc0af4]
    X86_AT(c, 0xdfac1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AF4u)));
    // 0dfac7  sub eax, dword ptr [ecx + 0xc0af4]
    X86_AT(c, 0xdfac7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xC0AF4u))), 0, 4); }
    // 0dfacd  and eax, eax
    X86_AT(c, 0xdfacdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dfacf  jge 0xdfb14
    X86_AT(c, 0xdfacfu);
    if (x86_cc(c, 13)) { goto L_dfb14; }
    X86_TICK(c, 63);
    // 0dfad1  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdfad1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0dfad6  lea edx, [eax + eax*2]
    X86_AT(c, 0xdfad6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dfad9  lea edx, [eax + edx*8]
    X86_AT(c, 0xdfad9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0dfadc  lea edx, [eax + edx*4]
    X86_AT(c, 0xdfadcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0dfadf  lea edx, [eax + edx*2]
    X86_AT(c, 0xdfadfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0dfae2  shl edx, 2
    X86_AT(c, 0xdfae2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0dfae5  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdfae5u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0dfaec  add eax, edx
    X86_AT(c, 0xdfaecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dfaee  lea edx, [edi*8]
    X86_AT(c, 0xdfaeeu);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0dfaf5  lea edx, [edx + edx*2]
    X86_AT(c, 0xdfaf5u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0dfaf8  add edx, eax
    X86_AT(c, 0xdfaf8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dfafa  lea ecx, [esi*8]
    X86_AT(c, 0xdfafau);
    c.r[1] = (uint32_t)(c.r[6] * 8);
    // 0dfb01  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xdfb01u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0dfb04  add ecx, eax
    X86_AT(c, 0xdfb04u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dfb06  mov eax, dword ptr [edx + 0xc0af4]
    X86_AT(c, 0xdfb06u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AF4u)));
    // 0dfb0c  sub eax, dword ptr [ecx + 0xc0af4]
    X86_AT(c, 0xdfb0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xC0AF4u))), 0, 4); }
    // 0dfb12  neg eax
    X86_AT(c, 0xdfb12u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_dfb14:
    X86_TICK(c, 7);
    // 0dfb14  cmp eax, 0x20
    X86_AT(c, 0xdfb14u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0dfb17  jge 0xdfbb1
    X86_AT(c, 0xdfb17u);
    if (x86_cc(c, 13)) { goto L_dfbb1; }
    X86_TICK(c, 68);
    // 0dfb1d  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdfb1du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0dfb22  lea edx, [eax + eax*2]
    X86_AT(c, 0xdfb22u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dfb25  lea edx, [eax + edx*8]
    X86_AT(c, 0xdfb25u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0dfb28  lea edx, [eax + edx*4]
    X86_AT(c, 0xdfb28u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0dfb2b  lea edx, [eax + edx*2]
    X86_AT(c, 0xdfb2bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0dfb2e  shl edx, 2
    X86_AT(c, 0xdfb2eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0dfb31  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdfb31u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0dfb38  add eax, edx
    X86_AT(c, 0xdfb38u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dfb3a  lea edx, [edi*8]
    X86_AT(c, 0xdfb3au);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0dfb41  lea edx, [edx + edx*2]
    X86_AT(c, 0xdfb41u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0dfb44  add edx, eax
    X86_AT(c, 0xdfb44u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dfb46  lea ecx, [esi*8]
    X86_AT(c, 0xdfb46u);
    c.r[1] = (uint32_t)(c.r[6] * 8);
    // 0dfb4d  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xdfb4du);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0dfb50  add ecx, eax
    X86_AT(c, 0xdfb50u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dfb52  mov eax, dword ptr [edx + 0xc0af8]
    X86_AT(c, 0xdfb52u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AF8u)));
    // 0dfb58  sub eax, dword ptr [ecx + 0xc0af8]
    X86_AT(c, 0xdfb58u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xC0AF8u))), 0, 4); }
    // 0dfb5e  and eax, eax
    X86_AT(c, 0xdfb5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dfb60  jge 0xdfba5
    X86_AT(c, 0xdfb60u);
    if (x86_cc(c, 13)) { goto L_dfba5; }
    X86_TICK(c, 63);
    // 0dfb62  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdfb62u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0dfb67  lea edx, [eax + eax*2]
    X86_AT(c, 0xdfb67u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dfb6a  lea edx, [eax + edx*8]
    X86_AT(c, 0xdfb6au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0dfb6d  lea edx, [eax + edx*4]
    X86_AT(c, 0xdfb6du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0dfb70  lea edx, [eax + edx*2]
    X86_AT(c, 0xdfb70u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0dfb73  shl edx, 2
    X86_AT(c, 0xdfb73u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0dfb76  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdfb76u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0dfb7d  add eax, edx
    X86_AT(c, 0xdfb7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dfb7f  lea edx, [edi*8]
    X86_AT(c, 0xdfb7fu);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0dfb86  lea edx, [edx + edx*2]
    X86_AT(c, 0xdfb86u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0dfb89  add edx, eax
    X86_AT(c, 0xdfb89u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dfb8b  lea ecx, [esi*8]
    X86_AT(c, 0xdfb8bu);
    c.r[1] = (uint32_t)(c.r[6] * 8);
    // 0dfb92  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xdfb92u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0dfb95  add ecx, eax
    X86_AT(c, 0xdfb95u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dfb97  mov eax, dword ptr [edx + 0xc0af8]
    X86_AT(c, 0xdfb97u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0AF8u)));
    // 0dfb9d  sub eax, dword ptr [ecx + 0xc0af8]
    X86_AT(c, 0xdfb9du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xC0AF8u))), 0, 4); }
    // 0dfba3  neg eax
    X86_AT(c, 0xdfba3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_dfba5:
    X86_TICK(c, 7);
    // 0dfba5  cmp eax, 0x20
    X86_AT(c, 0xdfba5u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0dfba8  jge 0xdfbb1
    X86_AT(c, 0xdfba8u);
    if (x86_cc(c, 13)) { goto L_dfbb1; }
L_dfbaa:
    X86_TICK(c, 9);
    // 0dfbaa  mov ebx, 1
    X86_AT(c, 0xdfbaau);
    c.r[3] = 0x1u;
    // 0dfbaf  jmp 0xdfbb9
    X86_AT(c, 0xdfbafu);
    goto L_dfbb9;
L_dfbb1:
    X86_TICK(c, 9);
    // 0dfbb1  inc edi
    X86_AT(c, 0xdfbb1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dfbb2  jmp 0xdfa24
    X86_AT(c, 0xdfbb2u);
    X86_POLL(c, 0xdfa24u); goto L_dfa24;
L_dfbb7:
    X86_TICK(c, 2);
    // 0dfbb7  sub ebx, ebx
    X86_AT(c, 0xdfbb7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_dfbb9:
    X86_TICK(c, 30);
    // 0dfbb9  mov eax, ebx
    X86_AT(c, 0xdfbb9u);
    c.r[0] = c.r[3];
    // 0dfbbb  pop edi
    X86_AT(c, 0xdfbbbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dfbbc  pop esi
    X86_AT(c, 0xdfbbcu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dfbbd  pop ebx
    X86_AT(c, 0xdfbbdu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dfbbe  leave 
    X86_AT(c, 0xdfbbeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dfbbf  ret 
    X86_AT(c, 0xdfbbfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf908u, "ran off the end of a function");
}
void f_000dfbc0(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0dfbc0  push ebp
    X86_AT(c, 0xdfbc0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dfbc1  mov ebp, esp
    X86_AT(c, 0xdfbc1u);
    c.r[5] = c.r[4];
    // 0dfbc3  push esi
    X86_AT(c, 0xdfbc3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dfbc4  push edi
    X86_AT(c, 0xdfbc4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dfbc5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdfbc5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dfbc8  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdfbc8u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dfbcb  cmp dword ptr [ebp + 0x14], 0
    X86_AT(c, 0xdfbcbu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 4);
    // 0dfbcf  je 0xdfbe3
    X86_AT(c, 0xdfbcfu);
    if (x86_cc(c, 4)) { goto L_dfbe3; }
    X86_TICK(c, 24);
    // 0dfbd1  push 0
    X86_AT(c, 0xdfbd1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dfbd3  push esi
    X86_AT(c, 0xdfbd3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dfbd4  push edi
    X86_AT(c, 0xdfbd4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dfbd5  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdfbd5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0dfbd8  shl eax, 9
    X86_AT(c, 0xdfbd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0dfbdb  add eax, 0x48fd8
    X86_AT(c, 0xdfbdbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x48FD8u, 0, 4); }
    // 0dfbe0  push eax
    X86_AT(c, 0xdfbe0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dfbe1  jmp 0xdfbec
    X86_AT(c, 0xdfbe1u);
    goto L_dfbec;
L_dfbe3:
    X86_TICK(c, 8);
    // 0dfbe3  push 0
    X86_AT(c, 0xdfbe3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dfbe5  push esi
    X86_AT(c, 0xdfbe5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dfbe6  push edi
    X86_AT(c, 0xdfbe6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dfbe7  push 0x4bdd8
    X86_AT(c, 0xdfbe7u);
    { uint32_t v = 0x4BDD8u; push32(c, v); }
L_dfbec:
    X86_TICK(c, 7);
    // 0dfbec  call 0xc9a4c
    X86_AT(c, 0xdfbecu);
    push32(c, 0xdfbf1u); x86_call_known(c, 0xc9a4cu, f_000c9a4c); X86_RET(c, 0xdfbf1u);
    X86_TICK(c, 26);
    // 0dfbf1  add esp, 0x10
    X86_AT(c, 0xdfbf1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0dfbf4  pop edi
    X86_AT(c, 0xdfbf4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dfbf5  pop esi
    X86_AT(c, 0xdfbf5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dfbf6  leave 
    X86_AT(c, 0xdfbf6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dfbf7  ret 
    X86_AT(c, 0xdfbf7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdfbc0u, "ran off the end of a function");
}
void f_000dfbf8(X86Cpu& c) {
    X86_TICK(c, 55);
    // 0dfbf8  push edi
    X86_AT(c, 0xdfbf8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dfbf9  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdfbf9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0dfbfe  lea edx, [eax + eax*2]
    X86_AT(c, 0xdfbfeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dfc01  lea edx, [eax + edx*8]
    X86_AT(c, 0xdfc01u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0dfc04  lea edx, [eax + edx*4]
    X86_AT(c, 0xdfc04u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0dfc07  lea edx, [eax + edx*2]
    X86_AT(c, 0xdfc07u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0dfc0a  shl edx, 2
    X86_AT(c, 0xdfc0au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0dfc0d  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdfc0du);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0dfc14  add eax, edx
    X86_AT(c, 0xdfc14u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dfc16  lea edi, [eax + 0xc0ae0]
    X86_AT(c, 0xdfc16u);
    c.r[7] = (uint32_t)(c.r[0] + 0xC0AE0u);
    // 0dfc1c  cmp dword ptr [edi + 4], 0
    X86_AT(c, 0xdfc1cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0x0u, 0, 4);
    // 0dfc20  je 0xdfcc5
    X86_AT(c, 0xdfc20u);
    if (x86_cc(c, 4)) { goto L_dfcc5; }
    X86_TICK(c, 25);
    // 0dfc26  mov eax, dword ptr [0xc03d4]
    X86_AT(c, 0xdfc26u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0dfc2b  lea eax, [eax*8]
    X86_AT(c, 0xdfc2bu);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0dfc32  lea eax, [eax + eax*2]
    X86_AT(c, 0xdfc32u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dfc35  mov edx, dword ptr [edi + 4]
    X86_AT(c, 0xdfc35u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0dfc38  sub edx, dword ptr [edi + eax*1 + 0x14]
    X86_AT(c, 0xdfc38u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x14u))), 0, 4); }
    // 0dfc3c  and edx, edx
    X86_AT(c, 0xdfc3cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0dfc3e  jge 0xdfc58
    X86_AT(c, 0xdfc3eu);
    if (x86_cc(c, 13)) { goto L_dfc58; }
    X86_TICK(c, 20);
    // 0dfc40  mov eax, dword ptr [0xc03d4]
    X86_AT(c, 0xdfc40u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0dfc45  lea eax, [eax*8]
    X86_AT(c, 0xdfc45u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0dfc4c  lea eax, [eax + eax*2]
    X86_AT(c, 0xdfc4cu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dfc4f  mov edx, dword ptr [edi + 4]
    X86_AT(c, 0xdfc4fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0dfc52  sub edx, dword ptr [edi + eax*1 + 0x14]
    X86_AT(c, 0xdfc52u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x14u))), 0, 4); }
    // 0dfc56  neg edx
    X86_AT(c, 0xdfc56u);
    { uint32_t v = c.r[2]; c.r[2] = x86_neg(c, v, 4); }
L_dfc58:
    X86_TICK(c, 7);
    // 0dfc58  cmp edx, 0x21
    X86_AT(c, 0xdfc58u);
    (void)x86_sub(c, c.r[2], 0x21u, 0, 4);
    // 0dfc5b  jge 0xdfcc5
    X86_AT(c, 0xdfc5bu);
    if (x86_cc(c, 13)) { goto L_dfcc5; }
    X86_TICK(c, 25);
    // 0dfc5d  mov eax, dword ptr [0xc03d4]
    X86_AT(c, 0xdfc5du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0dfc62  lea eax, [eax*8]
    X86_AT(c, 0xdfc62u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0dfc69  lea eax, [eax + eax*2]
    X86_AT(c, 0xdfc69u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dfc6c  mov edx, dword ptr [edi + 8]
    X86_AT(c, 0xdfc6cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 0dfc6f  sub edx, dword ptr [edi + eax*1 + 0x18]
    X86_AT(c, 0xdfc6fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x18u))), 0, 4); }
    // 0dfc73  and edx, edx
    X86_AT(c, 0xdfc73u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0dfc75  jge 0xdfc8f
    X86_AT(c, 0xdfc75u);
    if (x86_cc(c, 13)) { goto L_dfc8f; }
    X86_TICK(c, 20);
    // 0dfc77  mov eax, dword ptr [0xc03d4]
    X86_AT(c, 0xdfc77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0dfc7c  lea eax, [eax*8]
    X86_AT(c, 0xdfc7cu);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0dfc83  lea eax, [eax + eax*2]
    X86_AT(c, 0xdfc83u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dfc86  mov edx, dword ptr [edi + 8]
    X86_AT(c, 0xdfc86u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 0dfc89  sub edx, dword ptr [edi + eax*1 + 0x18]
    X86_AT(c, 0xdfc89u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x18u))), 0, 4); }
    // 0dfc8d  neg edx
    X86_AT(c, 0xdfc8du);
    { uint32_t v = c.r[2]; c.r[2] = x86_neg(c, v, 4); }
L_dfc8f:
    X86_TICK(c, 7);
    // 0dfc8f  cmp edx, 0x21
    X86_AT(c, 0xdfc8fu);
    (void)x86_sub(c, c.r[2], 0x21u, 0, 4);
    // 0dfc92  jge 0xdfcc5
    X86_AT(c, 0xdfc92u);
    if (x86_cc(c, 13)) { goto L_dfcc5; }
    X86_TICK(c, 11);
    // 0dfc94  push 0xd9dc
    X86_AT(c, 0xdfc94u);
    { uint32_t v = 0xD9DCu; push32(c, v); }
    // 0dfc99  push 7
    X86_AT(c, 0xdfc99u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfc9b  call 0xc8cdc
    X86_AT(c, 0xdfc9bu);
    push32(c, 0xdfca0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdfca0u);
    X86_TICK(c, 9);
    // 0dfca0  push 7
    X86_AT(c, 0xdfca0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfca2  call 0xca3cc
    X86_AT(c, 0xdfca2u);
    push32(c, 0xdfca7u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdfca7u);
    X86_TICK(c, 13);
    // 0dfca7  add esp, 0xc
    X86_AT(c, 0xdfca7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0dfcaa  push 0xda0c
    X86_AT(c, 0xdfcaau);
    { uint32_t v = 0xDA0Cu; push32(c, v); }
    // 0dfcaf  push 7
    X86_AT(c, 0xdfcafu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfcb1  call 0xc8cdc
    X86_AT(c, 0xdfcb1u);
    push32(c, 0xdfcb6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdfcb6u);
    X86_TICK(c, 9);
    // 0dfcb6  push 7
    X86_AT(c, 0xdfcb6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfcb8  call 0xca3cc
    X86_AT(c, 0xdfcb8u);
    push32(c, 0xdfcbdu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdfcbdu);
    X86_TICK(c, 7);
    // 0dfcbd  call 0xe0b30
    X86_AT(c, 0xdfcbdu);
    push32(c, 0xdfcc2u); x86_call_known(c, 0xe0b30u, f_000e0b30); X86_RET(c, 0xdfcc2u);
    X86_TICK(c, 2);
    // 0dfcc2  add esp, 0xc
    X86_AT(c, 0xdfcc2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_dfcc5:
    X86_TICK(c, 14);
    // 0dfcc5  pop edi
    X86_AT(c, 0xdfcc5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dfcc6  ret 
    X86_AT(c, 0xdfcc6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdfbf8u, "ran off the end of a function");
}
void f_000dfcc8(X86Cpu& c) {
    X86_TICK(c, 65);
    // 0dfcc8  push edi
    X86_AT(c, 0xdfcc8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dfcc9  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdfcc9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0dfcce  lea edx, [eax + eax*2]
    X86_AT(c, 0xdfcceu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dfcd1  lea edx, [eax + edx*8]
    X86_AT(c, 0xdfcd1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0dfcd4  lea edx, [eax + edx*4]
    X86_AT(c, 0xdfcd4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0dfcd7  lea edx, [eax + edx*2]
    X86_AT(c, 0xdfcd7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0dfcda  shl edx, 2
    X86_AT(c, 0xdfcdau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0dfcdd  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdfcddu);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0dfce4  add eax, edx
    X86_AT(c, 0xdfce4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dfce6  mov edx, dword ptr [0xc03d4]
    X86_AT(c, 0xdfce6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0dfcec  lea edx, [edx*8]
    X86_AT(c, 0xdfcecu);
    c.r[2] = (uint32_t)(c.r[2] * 8);
    // 0dfcf3  lea edx, [edx + edx*2]
    X86_AT(c, 0xdfcf3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0dfcf6  add edx, eax
    X86_AT(c, 0xdfcf6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dfcf8  lea edi, [edx + 0xc0af4]
    X86_AT(c, 0xdfcf8u);
    c.r[7] = (uint32_t)(c.r[2] + 0xC0AF4u);
    // 0dfcfe  cmp dword ptr [0xc03cc], 3
    X86_AT(c, 0xdfcfeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03CCu))), 0x3u, 0, 4);
    // 0dfd05  jne 0xdfdfb
    X86_AT(c, 0xdfd05u);
    if (x86_cc(c, 5)) { goto L_dfdfb; }
    X86_TICK(c, 12);
    // 0dfd0b  cmp dword ptr [0xc03d0], 3
    X86_AT(c, 0xdfd0bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x3u, 0, 4);
    // 0dfd12  jne 0xdfdfb
    X86_AT(c, 0xdfd12u);
    if (x86_cc(c, 5)) { goto L_dfdfb; }
    X86_TICK(c, 13);
    // 0dfd18  mov eax, dword ptr [edi]
    X86_AT(c, 0xdfd18u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0dfd1a  sub eax, 0x70
    X86_AT(c, 0xdfd1au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x70u, 0, 4); }
    // 0dfd1d  and eax, eax
    X86_AT(c, 0xdfd1du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dfd1f  jge 0xdfd28
    X86_AT(c, 0xdfd1fu);
    if (x86_cc(c, 13)) { goto L_dfd28; }
    X86_TICK(c, 8);
    // 0dfd21  mov eax, dword ptr [edi]
    X86_AT(c, 0xdfd21u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0dfd23  sub eax, 0x70
    X86_AT(c, 0xdfd23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x70u, 0, 4); }
    // 0dfd26  neg eax
    X86_AT(c, 0xdfd26u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_dfd28:
    X86_TICK(c, 7);
    // 0dfd28  cmp eax, 0x21
    X86_AT(c, 0xdfd28u);
    (void)x86_sub(c, c.r[0], 0x21u, 0, 4);
    // 0dfd2b  jge 0xdfdfb
    X86_AT(c, 0xdfd2bu);
    if (x86_cc(c, 13)) { goto L_dfdfb; }
    X86_TICK(c, 13);
    // 0dfd31  mov eax, dword ptr [edi + 4]
    X86_AT(c, 0xdfd31u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0dfd34  sub eax, 0x8e
    X86_AT(c, 0xdfd34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x8Eu, 0, 4); }
    // 0dfd39  and eax, eax
    X86_AT(c, 0xdfd39u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dfd3b  jge 0xdfd47
    X86_AT(c, 0xdfd3bu);
    if (x86_cc(c, 13)) { goto L_dfd47; }
    X86_TICK(c, 8);
    // 0dfd3d  mov eax, dword ptr [edi + 4]
    X86_AT(c, 0xdfd3du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0dfd40  sub eax, 0x8e
    X86_AT(c, 0xdfd40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x8Eu, 0, 4); }
    // 0dfd45  neg eax
    X86_AT(c, 0xdfd45u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_dfd47:
    X86_TICK(c, 7);
    // 0dfd47  cmp eax, 0x21
    X86_AT(c, 0xdfd47u);
    (void)x86_sub(c, c.r[0], 0x21u, 0, 4);
    // 0dfd4a  jge 0xdfdfb
    X86_AT(c, 0xdfd4au);
    if (x86_cc(c, 13)) { goto L_dfdfb; }
    X86_TICK(c, 12);
    // 0dfd50  cmp dword ptr [edi + 8], 0
    X86_AT(c, 0xdfd50u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x0u, 0, 4);
    // 0dfd54  jne 0xdfd9b
    X86_AT(c, 0xdfd54u);
    if (x86_cc(c, 5)) { goto L_dfd9b; }
    X86_TICK(c, 11);
    // 0dfd56  push 0xda40
    X86_AT(c, 0xdfd56u);
    { uint32_t v = 0xDA40u; push32(c, v); }
    // 0dfd5b  push 7
    X86_AT(c, 0xdfd5bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfd5d  call 0xc8cdc
    X86_AT(c, 0xdfd5du);
    push32(c, 0xdfd62u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdfd62u);
    X86_TICK(c, 9);
    // 0dfd62  push 7
    X86_AT(c, 0xdfd62u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfd64  call 0xca3cc
    X86_AT(c, 0xdfd64u);
    push32(c, 0xdfd69u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdfd69u);
    X86_TICK(c, 11);
    // 0dfd69  push 0xda60
    X86_AT(c, 0xdfd69u);
    { uint32_t v = 0xDA60u; push32(c, v); }
    // 0dfd6e  push 7
    X86_AT(c, 0xdfd6eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfd70  call 0xc8cdc
    X86_AT(c, 0xdfd70u);
    push32(c, 0xdfd75u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdfd75u);
    X86_TICK(c, 9);
    // 0dfd75  push 7
    X86_AT(c, 0xdfd75u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfd77  call 0xca3cc
    X86_AT(c, 0xdfd77u);
    push32(c, 0xdfd7cu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdfd7cu);
    X86_TICK(c, 23);
    // 0dfd7c  mov eax, dword ptr [edi + 0xc]
    X86_AT(c, 0xdfd7cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0dfd7f  mov dword ptr [0xb042e], eax
    X86_AT(c, 0xdfd7fu);
    wr32((c.sbase[3] + (uint32_t)(0xB042Eu)), c.r[0]);
    // 0dfd84  mov eax, dword ptr [edi + 0x10]
    X86_AT(c, 0xdfd84u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)));
    // 0dfd87  mov dword ptr [0xb0432], eax
    X86_AT(c, 0xdfd87u);
    wr32((c.sbase[3] + (uint32_t)(0xB0432u)), c.r[0]);
    // 0dfd8c  mov dword ptr [0xb52f8], 0
    X86_AT(c, 0xdfd8cu);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x0u);
    // 0dfd96  add esp, 0x18
    X86_AT(c, 0xdfd96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0dfd99  jmp 0xdfdfb
    X86_AT(c, 0xdfd99u);
    goto L_dfdfb;
L_dfd9b:
    X86_TICK(c, 11);
    // 0dfd9b  push 0xda7c
    X86_AT(c, 0xdfd9bu);
    { uint32_t v = 0xDA7Cu; push32(c, v); }
    // 0dfda0  push 7
    X86_AT(c, 0xdfda0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfda2  call 0xc8cdc
    X86_AT(c, 0xdfda2u);
    push32(c, 0xdfda7u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdfda7u);
    X86_TICK(c, 9);
    // 0dfda7  push 7
    X86_AT(c, 0xdfda7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfda9  call 0xca3cc
    X86_AT(c, 0xdfda9u);
    push32(c, 0xdfdaeu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdfdaeu);
    X86_TICK(c, 11);
    // 0dfdae  push 0xda94
    X86_AT(c, 0xdfdaeu);
    { uint32_t v = 0xDA94u; push32(c, v); }
    // 0dfdb3  push 7
    X86_AT(c, 0xdfdb3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfdb5  call 0xc8cdc
    X86_AT(c, 0xdfdb5u);
    push32(c, 0xdfdbau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdfdbau);
    X86_TICK(c, 9);
    // 0dfdba  push 7
    X86_AT(c, 0xdfdbau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfdbc  call 0xca3cc
    X86_AT(c, 0xdfdbcu);
    push32(c, 0xdfdc1u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdfdc1u);
    X86_TICK(c, 11);
    // 0dfdc1  push 0xdab8
    X86_AT(c, 0xdfdc1u);
    { uint32_t v = 0xDAB8u; push32(c, v); }
    // 0dfdc6  push 7
    X86_AT(c, 0xdfdc6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfdc8  call 0xc8cdc
    X86_AT(c, 0xdfdc8u);
    push32(c, 0xdfdcdu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdfdcdu);
    X86_TICK(c, 9);
    // 0dfdcd  push 7
    X86_AT(c, 0xdfdcdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfdcf  call 0xca3cc
    X86_AT(c, 0xdfdcfu);
    push32(c, 0xdfdd4u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdfdd4u);
    X86_TICK(c, 11);
    // 0dfdd4  push 0xdae8
    X86_AT(c, 0xdfdd4u);
    { uint32_t v = 0xDAE8u; push32(c, v); }
    // 0dfdd9  push 7
    X86_AT(c, 0xdfdd9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfddb  call 0xc8cdc
    X86_AT(c, 0xdfddbu);
    push32(c, 0xdfde0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdfde0u);
    X86_TICK(c, 9);
    // 0dfde0  push 7
    X86_AT(c, 0xdfde0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dfde2  call 0xca3cc
    X86_AT(c, 0xdfde2u);
    push32(c, 0xdfde7u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdfde7u);
    X86_TICK(c, 13);
    // 0dfde7  sub eax, eax
    X86_AT(c, 0xdfde7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dfde9  mov dword ptr [0xb0432], eax
    X86_AT(c, 0xdfde9u);
    wr32((c.sbase[3] + (uint32_t)(0xB0432u)), c.r[0]);
    // 0dfdee  mov dword ptr [0xb042e], eax
    X86_AT(c, 0xdfdeeu);
    wr32((c.sbase[3] + (uint32_t)(0xB042Eu)), c.r[0]);
    // 0dfdf3  call 0xe0b30
    X86_AT(c, 0xdfdf3u);
    push32(c, 0xdfdf8u); x86_call_known(c, 0xe0b30u, f_000e0b30); X86_RET(c, 0xdfdf8u);
    X86_TICK(c, 2);
    // 0dfdf8  add esp, 0x30
    X86_AT(c, 0xdfdf8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_dfdfb:
    X86_TICK(c, 14);
    // 0dfdfb  pop edi
    X86_AT(c, 0xdfdfbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dfdfc  ret 
    X86_AT(c, 0xdfdfcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdfcc8u, "ran off the end of a function");
}
void f_000dfe00(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0dfe00  push ebp
    X86_AT(c, 0xdfe00u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dfe01  mov ebp, esp
    X86_AT(c, 0xdfe01u);
    c.r[5] = c.r[4];
    // 0dfe03  push eax
    X86_AT(c, 0xdfe03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dfe04  push ebx
    X86_AT(c, 0xdfe04u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dfe05  push esi
    X86_AT(c, 0xdfe05u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dfe06  push edi
    X86_AT(c, 0xdfe06u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dfe07  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdfe07u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dfe0a  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdfe0au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0dfe0d  mov ebx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdfe0du);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0dfe10  sub eax, eax
    X86_AT(c, 0xdfe10u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dfe12  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdfe12u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dfe15  cmp eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xdfe15u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0, 4);
    // 0dfe18  je 0xdfe8c
    X86_AT(c, 0xdfe18u);
    if (x86_cc(c, 4)) { goto L_dfe8c; }
    X86_TICK(c, 11);
    // 0dfe1e  cmp eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xdfe1eu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 4);
    // 0dfe21  jne 0xdfe29
    X86_AT(c, 0xdfe21u);
    if (x86_cc(c, 5)) { goto L_dfe29; }
    X86_TICK(c, 6);
    // 0dfe23  dec dword ptr [0xbef88]
    X86_AT(c, 0xdfe23u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xBEF88u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_dfe29:
    X86_TICK(c, 12);
    // 0dfe29  cmp dword ptr [0xc2da0], 0
    X86_AT(c, 0xdfe29u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DA0u))), 0x0u, 0, 4);
    // 0dfe30  je 0xdfe38
    X86_AT(c, 0xdfe30u);
    if (x86_cc(c, 4)) { goto L_dfe38; }
    X86_TICK(c, 12);
    // 0dfe32  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0xdfe32u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 0dfe36  je 0xdfe47
    X86_AT(c, 0xdfe36u);
    if (x86_cc(c, 4)) { goto L_dfe47; }
L_dfe38:
    X86_TICK(c, 12);
    // 0dfe38  cmp dword ptr [0xc2da0], 0
    X86_AT(c, 0xdfe38u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DA0u))), 0x0u, 0, 4);
    // 0dfe3f  jne 0xdfe72
    X86_AT(c, 0xdfe3fu);
    if (x86_cc(c, 5)) { goto L_dfe72; }
    X86_TICK(c, 12);
    // 0dfe41  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0xdfe41u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 0dfe45  je 0xdfe72
    X86_AT(c, 0xdfe45u);
    if (x86_cc(c, 4)) { goto L_dfe72; }
L_dfe47:
    X86_TICK(c, 45);
    // 0dfe47  cmp dword ptr [0xc2da0], 0
    X86_AT(c, 0xdfe47u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DA0u))), 0x0u, 0, 4);
    // 0dfe4e  sete al
    X86_AT(c, 0xdfe4eu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 0dfe51  movzx eax, al
    X86_AT(c, 0xdfe51u);
    c.r[0] = g8(c, 0);
    // 0dfe54  mov dword ptr [0xc2da0], eax
    X86_AT(c, 0xdfe54u);
    wr32((c.sbase[3] + (uint32_t)(0xC2DA0u)), c.r[0]);
    // 0dfe59  push 0
    X86_AT(c, 0xdfe59u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dfe5b  push ebx
    X86_AT(c, 0xdfe5bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dfe5c  push esi
    X86_AT(c, 0xdfe5cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dfe5d  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xdfe5du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dfe60  shl eax, 3
    X86_AT(c, 0xdfe60u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0dfe63  lea edx, [edi + eax*1]
    X86_AT(c, 0xdfe63u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0dfe66  shl edx, 9
    X86_AT(c, 0xdfe66u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[2] = r; }
    // 0dfe69  add edx, 0x447d8
    X86_AT(c, 0xdfe69u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x447D8u, 0, 4); }
    // 0dfe6f  push edx
    X86_AT(c, 0xdfe6fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0dfe70  jmp 0xdfe95
    X86_AT(c, 0xdfe70u);
    goto L_dfe95;
L_dfe72:
    X86_TICK(c, 29);
    // 0dfe72  push 0
    X86_AT(c, 0xdfe72u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dfe74  push ebx
    X86_AT(c, 0xdfe74u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dfe75  push esi
    X86_AT(c, 0xdfe75u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dfe76  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xdfe76u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dfe79  shl eax, 3
    X86_AT(c, 0xdfe79u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0dfe7c  lea edx, [edi + eax*1]
    X86_AT(c, 0xdfe7cu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0dfe7f  shl edx, 9
    X86_AT(c, 0xdfe7fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[2] = r; }
    // 0dfe82  lea eax, [edx*1 + 0x43fd8]
    X86_AT(c, 0xdfe82u);
    c.r[0] = (uint32_t)(c.r[2] + 0x43FD8u);
    // 0dfe89  push eax
    X86_AT(c, 0xdfe89u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dfe8a  jmp 0xdfe95
    X86_AT(c, 0xdfe8au);
    goto L_dfe95;
L_dfe8c:
    X86_TICK(c, 8);
    // 0dfe8c  push 0
    X86_AT(c, 0xdfe8cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dfe8e  push ebx
    X86_AT(c, 0xdfe8eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dfe8f  push esi
    X86_AT(c, 0xdfe8fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dfe90  push 0x4bdd8
    X86_AT(c, 0xdfe90u);
    { uint32_t v = 0x4BDD8u; push32(c, v); }
L_dfe95:
    X86_TICK(c, 7);
    // 0dfe95  call 0xc9a4c
    X86_AT(c, 0xdfe95u);
    push32(c, 0xdfe9au); x86_call_known(c, 0xc9a4cu, f_000c9a4c); X86_RET(c, 0xdfe9au);
    X86_TICK(c, 20);
    // 0dfe9a  add esp, 0x10
    X86_AT(c, 0xdfe9au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0dfe9d  push ebx
    X86_AT(c, 0xdfe9du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dfe9e  push esi
    X86_AT(c, 0xdfe9eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dfe9f  push edi
    X86_AT(c, 0xdfe9fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dfea0  push dword ptr [ebp + 8]
    X86_AT(c, 0xdfea0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0dfea3  call 0xdf908
    X86_AT(c, 0xdfea3u);
    push32(c, 0xdfea8u); x86_call_known(c, 0xdf908u, f_000df908); X86_RET(c, 0xdfea8u);
    X86_TICK(c, 32);
    // 0dfea8  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdfea8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dfeab  add esp, 0x10
    X86_AT(c, 0xdfeabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0dfeae  pop edi
    X86_AT(c, 0xdfeaeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dfeaf  pop esi
    X86_AT(c, 0xdfeafu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dfeb0  pop ebx
    X86_AT(c, 0xdfeb0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dfeb1  leave 
    X86_AT(c, 0xdfeb1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dfeb2  ret 
    X86_AT(c, 0xdfeb2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdfe00u, "ran off the end of a function");
}
void f_000dfee4(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0dfee4  push ebp
    X86_AT(c, 0xdfee4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dfee5  mov ebp, esp
    X86_AT(c, 0xdfee5u);
    c.r[5] = c.r[4];
    // 0dfee7  push eax
    X86_AT(c, 0xdfee7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dfee8  push ebx
    X86_AT(c, 0xdfee8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dfee9  push esi
    X86_AT(c, 0xdfee9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dfeea  push edi
    X86_AT(c, 0xdfeeau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dfeeb  mov dword ptr [ebp - 4], 0x141
    X86_AT(c, 0xdfeebu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x141u);
    // 0dfef2  push 0xc8
    X86_AT(c, 0xdfef2u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0dfef7  push 1
    X86_AT(c, 0xdfef7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dfef9  call 0xc5df0
    X86_AT(c, 0xdfef9u);
    push32(c, 0xdfefeu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdfefeu);
    X86_TICK(c, 9);
    // 0dfefe  add esp, 8
    X86_AT(c, 0xdfefeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dff01  cmp eax, 4
    X86_AT(c, 0xdff01u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0dff04  jge 0xe002d
    X86_AT(c, 0xdff04u);
    if (x86_cc(c, 13)) { goto L_e002d; }
    X86_TICK(c, 12);
    // 0dff0a  cmp dword ptr [0xc2d10], 0
    X86_AT(c, 0xdff0au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2D10u))), 0x0u, 0, 4);
    // 0dff11  je 0xe002d
    X86_AT(c, 0xdff11u);
    if (x86_cc(c, 4)) { goto L_e002d; }
    X86_TICK(c, 12);
    // 0dff17  cmp dword ptr [0xc2d14], 0
    X86_AT(c, 0xdff17u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2D14u))), 0x0u, 0, 4);
    // 0dff1e  jne 0xe002d
    X86_AT(c, 0xdff1eu);
    if (x86_cc(c, 5)) { goto L_e002d; }
    X86_TICK(c, 12);
    // 0dff24  cmp dword ptr [0xc2d00], 0
    X86_AT(c, 0xdff24u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2D00u))), 0x0u, 0, 4);
    // 0dff2b  je 0xe002d
    X86_AT(c, 0xdff2bu);
    if (x86_cc(c, 4)) { goto L_e002d; }
    X86_TICK(c, 9);
    // 0dff31  push 0xdb18
    X86_AT(c, 0xdff31u);
    { uint32_t v = 0xDB18u; push32(c, v); }
    // 0dff36  call 0xcc7bc
    X86_AT(c, 0xdff36u);
    push32(c, 0xdff3bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdff3bu);
    X86_TICK(c, 11);
    // 0dff3b  push 0xff
    X86_AT(c, 0xdff3bu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0dff40  push 1
    X86_AT(c, 0xdff40u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dff42  call 0xc5df0
    X86_AT(c, 0xdff42u);
    push32(c, 0xdff47u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdff47u);
    X86_TICK(c, 12);
    // 0dff47  xchg edi, eax
    X86_AT(c, 0xdff47u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0dff48  add esp, 0xc
    X86_AT(c, 0xdff48u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0dff4b  cmp edi, 0x40
    X86_AT(c, 0xdff4bu);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0dff4e  jge 0xdff5c
    X86_AT(c, 0xdff4eu);
    if (x86_cc(c, 13)) { goto L_dff5c; }
    X86_TICK(c, 11);
    // 0dff50  mov esi, 0x146
    X86_AT(c, 0xdff50u);
    c.r[6] = 0x146u;
    // 0dff55  mov ebx, 0x120
    X86_AT(c, 0xdff55u);
    c.r[3] = 0x120u;
    // 0dff5a  jmp 0xdff89
    X86_AT(c, 0xdff5au);
    goto L_dff89;
L_dff5c:
    X86_TICK(c, 7);
    // 0dff5c  cmp edi, 0x80
    X86_AT(c, 0xdff5cu);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0dff62  jge 0xdff70
    X86_AT(c, 0xdff62u);
    if (x86_cc(c, 13)) { goto L_dff70; }
    X86_TICK(c, 11);
    // 0dff64  mov esi, 0x146
    X86_AT(c, 0xdff64u);
    c.r[6] = 0x146u;
    // 0dff69  mov ebx, 0x35
    X86_AT(c, 0xdff69u);
    c.r[3] = 0x35u;
    // 0dff6e  jmp 0xdff89
    X86_AT(c, 0xdff6eu);
    goto L_dff89;
L_dff70:
    X86_TICK(c, 7);
    // 0dff70  cmp edi, 0xc0
    X86_AT(c, 0xdff70u);
    (void)x86_sub(c, c.r[7], 0xC0u, 0, 4);
    // 0dff76  jle 0xdff7f
    X86_AT(c, 0xdff76u);
    if (x86_cc(c, 14)) { goto L_dff7f; }
    X86_TICK(c, 9);
    // 0dff78  mov esi, 0xc
    X86_AT(c, 0xdff78u);
    c.r[6] = 0xCu;
    // 0dff7d  jmp 0xdff84
    X86_AT(c, 0xdff7du);
    goto L_dff84;
L_dff7f:
    X86_TICK(c, 2);
    // 0dff7f  mov esi, 0x274
    X86_AT(c, 0xdff7fu);
    c.r[6] = 0x274u;
L_dff84:
    X86_TICK(c, 2);
    // 0dff84  mov ebx, 0xc0
    X86_AT(c, 0xdff84u);
    c.r[3] = 0xC0u;
L_dff89:
    X86_TICK(c, 29);
    // 0dff89  push 0xb
    X86_AT(c, 0xdff89u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0dff8b  push ebx
    X86_AT(c, 0xdff8bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dff8c  push esi
    X86_AT(c, 0xdff8cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dff8d  mov eax, dword ptr [0xc2d04]
    X86_AT(c, 0xdff8du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2D04u)));
    // 0dff92  add eax, 0x12
    X86_AT(c, 0xdff92u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x12u, 0, 4); }
    // 0dff95  push eax
    X86_AT(c, 0xdff95u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dff96  mov eax, dword ptr [0xc2d00]
    X86_AT(c, 0xdff96u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2D00u)));
    // 0dff9b  add eax, 0x10
    X86_AT(c, 0xdff9bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0dff9e  push eax
    X86_AT(c, 0xdff9eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dff9f  call 0xc9378
    X86_AT(c, 0xdff9fu);
    push32(c, 0xdffa4u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xdffa4u);
    X86_TICK(c, 9);
    // 0dffa4  push 4
    X86_AT(c, 0xdffa4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dffa6  call 0xc5ca4
    X86_AT(c, 0xdffa6u);
    push32(c, 0xdffabu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdffabu);
    X86_TICK(c, 9);
    // 0dffab  push 2
    X86_AT(c, 0xdffabu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dffad  call 0xd6660
    X86_AT(c, 0xdffadu);
    push32(c, 0xdffb2u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xdffb2u);
    X86_TICK(c, 29);
    // 0dffb2  push 0
    X86_AT(c, 0xdffb2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dffb4  push ebx
    X86_AT(c, 0xdffb4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dffb5  push esi
    X86_AT(c, 0xdffb5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dffb6  mov eax, dword ptr [0xc2d04]
    X86_AT(c, 0xdffb6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2D04u)));
    // 0dffbb  add eax, 0x12
    X86_AT(c, 0xdffbbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x12u, 0, 4); }
    // 0dffbe  push eax
    X86_AT(c, 0xdffbeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dffbf  mov eax, dword ptr [0xc2d00]
    X86_AT(c, 0xdffbfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2D00u)));
    // 0dffc4  add eax, 0x10
    X86_AT(c, 0xdffc4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0dffc7  push eax
    X86_AT(c, 0xdffc7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dffc8  call 0xc9378
    X86_AT(c, 0xdffc8u);
    push32(c, 0xdffcdu); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xdffcdu);
    X86_TICK(c, 9);
    // 0dffcd  add esp, 0x30
    X86_AT(c, 0xdffcdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0dffd0  cmp edi, 0x40
    X86_AT(c, 0xdffd0u);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0dffd3  jge 0xe002d
    X86_AT(c, 0xdffd3u);
    if (x86_cc(c, 13)) { goto L_e002d; }
    X86_TICK(c, 9);
    // 0dffd5  push 0xdb3c
    X86_AT(c, 0xdffd5u);
    { uint32_t v = 0xDB3Cu; push32(c, v); }
    // 0dffda  call 0xcc7bc
    X86_AT(c, 0xdffdau);
    push32(c, 0xdffdfu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdffdfu);
    X86_TICK(c, 9);
    // 0dffdf  push 8
    X86_AT(c, 0xdffdfu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0dffe1  call 0xc5ca4
    X86_AT(c, 0xdffe1u);
    push32(c, 0xdffe6u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdffe6u);
    X86_TICK(c, 7);
    // 0dffe6  call 0xdf778
    X86_AT(c, 0xdffe6u);
    push32(c, 0xdffebu); x86_call_known(c, 0xdf778u, f_000df778); X86_RET(c, 0xdffebu);
    X86_TICK(c, 9);
    // 0dffeb  add esp, 8
    X86_AT(c, 0xdffebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dffee  cmp eax, 0x141
    X86_AT(c, 0xdffeeu);
    (void)x86_sub(c, c.r[0], 0x141u, 0, 4);
    // 0dfff3  jge 0xdfffd
    X86_AT(c, 0xdfff3u);
    if (x86_cc(c, 13)) { goto L_dfffd; }
    X86_TICK(c, 7);
    // 0dfff5  call 0xdf778
    X86_AT(c, 0xdfff5u);
    push32(c, 0xdfffau); x86_call_known(c, 0xdf778u, f_000df778); X86_RET(c, 0xdfffau);
    X86_TICK(c, 2);
    // 0dfffa  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdfffau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_dfffd:
    X86_TICK(c, 12);
    // 0dfffd  push dword ptr [ebp - 4]
    X86_AT(c, 0xdfffdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0e0000  call 0xdf7b0
    X86_AT(c, 0xe0000u);
    push32(c, 0xe0005u); x86_call_known(c, 0xdf7b0u, f_000df7b0); X86_RET(c, 0xe0005u);
    X86_TICK(c, 7);
    // 0e0005  call 0xdf778
    X86_AT(c, 0xe0005u);
    push32(c, 0xe000au); x86_call_known(c, 0xdf778u, f_000df778); X86_RET(c, 0xe000au);
    X86_TICK(c, 9);
    // 0e000a  add esp, 4
    X86_AT(c, 0xe000au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e000d  and eax, eax
    X86_AT(c, 0xe000du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e000f  jne 0xe002d
    X86_AT(c, 0xe000fu);
    if (x86_cc(c, 5)) { goto L_e002d; }
    X86_TICK(c, 9);
    // 0e0011  push 0xdb68
    X86_AT(c, 0xe0011u);
    { uint32_t v = 0xDB68u; push32(c, v); }
    // 0e0016  call 0xcc7bc
    X86_AT(c, 0xe0016u);
    push32(c, 0xe001bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe001bu);
    X86_TICK(c, 9);
    // 0e001b  push 0xdb8c
    X86_AT(c, 0xe001bu);
    { uint32_t v = 0xDB8Cu; push32(c, v); }
    // 0e0020  call 0xcc7bc
    X86_AT(c, 0xe0020u);
    push32(c, 0xe0025u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe0025u);
    X86_TICK(c, 7);
    // 0e0025  call 0xe0b30
    X86_AT(c, 0xe0025u);
    push32(c, 0xe002au); x86_call_known(c, 0xe0b30u, f_000e0b30); X86_RET(c, 0xe002au);
    X86_TICK(c, 2);
    // 0e002a  add esp, 8
    X86_AT(c, 0xe002au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e002d:
    X86_TICK(c, 28);
    // 0e002d  pop edi
    X86_AT(c, 0xe002du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e002e  pop esi
    X86_AT(c, 0xe002eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e002f  pop ebx
    X86_AT(c, 0xe002fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e0030  leave 
    X86_AT(c, 0xe0030u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e0031  ret 
    X86_AT(c, 0xe0031u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdfee4u, "ran off the end of a function");
}
void f_000e0034(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e0034  push ebx
    X86_AT(c, 0xe0034u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0035  push esi
    X86_AT(c, 0xe0035u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0036  push edi
    X86_AT(c, 0xe0036u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0037  mov eax, dword ptr [0xbef88]
    X86_AT(c, 0xe0037u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF88u)));
    // 0e003c  and eax, eax
    X86_AT(c, 0xe003cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e003e  je 0xe0046
    X86_AT(c, 0xe003eu);
    if (x86_cc(c, 4)) { goto L_e0046; }
    X86_TICK(c, 6);
    // 0e0040  dec dword ptr [0xbef88]
    X86_AT(c, 0xe0040u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xBEF88u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_e0046:
    X86_TICK(c, 9);
    // 0e0046  mov dword ptr [0xc2da0], 0
    X86_AT(c, 0xe0046u);
    wr32((c.sbase[3] + (uint32_t)(0xC2DA0u)), 0x0u);
    // 0e0050  call 0xde5b4
    X86_AT(c, 0xe0050u);
    push32(c, 0xe0055u); x86_call_known(c, 0xde5b4u, f_000de5b4); X86_RET(c, 0xe0055u);
    X86_TICK(c, 16);
    // 0e0055  mov eax, dword ptr [0xbef7c]
    X86_AT(c, 0xe0055u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF7Cu)));
    // 0e005a  push dword ptr [eax*4 + 0xc2d18]
    X86_AT(c, 0xe005au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xC2D18u))); push32(c, v); }
    // 0e0061  call 0xdd728
    X86_AT(c, 0xe0061u);
    push32(c, 0xe0066u); x86_call_known(c, 0xdd728u, f_000dd728); X86_RET(c, 0xe0066u);
    X86_TICK(c, 53);
    // 0e0066  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xe0066u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0e006b  lea edx, [eax + eax*2]
    X86_AT(c, 0xe006bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e006e  lea edx, [eax + edx*8]
    X86_AT(c, 0xe006eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0e0071  lea edx, [eax + edx*4]
    X86_AT(c, 0xe0071u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e0074  lea edx, [eax + edx*2]
    X86_AT(c, 0xe0074u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e0077  shl edx, 2
    X86_AT(c, 0xe0077u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0e007a  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xe007au);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0e0081  add eax, edx
    X86_AT(c, 0xe0081u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e0083  add esp, 4
    X86_AT(c, 0xe0083u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e0086  cmp dword ptr [eax + 0xc0ae0], 0
    X86_AT(c, 0xe0086u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AE0u))), 0x0u, 0, 4);
    // 0e008d  je 0xe0204
    X86_AT(c, 0xe008du);
    if (x86_cc(c, 4)) { goto L_e0204; }
    X86_TICK(c, 35);
    // 0e0093  mov eax, dword ptr [0xc2d00]
    X86_AT(c, 0xe0093u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2D00u)));
    // 0e0098  mov dword ptr [0xc2d08], eax
    X86_AT(c, 0xe0098u);
    wr32((c.sbase[3] + (uint32_t)(0xC2D08u)), c.r[0]);
    // 0e009d  mov edx, dword ptr [0xc2d04]
    X86_AT(c, 0xe009du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC2D04u)));
    // 0e00a3  mov dword ptr [0xc2d0c], edx
    X86_AT(c, 0xe00a3u);
    wr32((c.sbase[3] + (uint32_t)(0xC2D0Cu)), c.r[2]);
    // 0e00a9  mov esi, dword ptr [0xbef9c]
    X86_AT(c, 0xe00a9u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu)));
    // 0e00af  sub esi, eax
    X86_AT(c, 0xe00afu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e00b1  mov ebx, dword ptr [0xbefa0]
    X86_AT(c, 0xe00b1u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xBEFA0u)));
    // 0e00b7  sub ebx, edx
    X86_AT(c, 0xe00b7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e00b9  push esi
    X86_AT(c, 0xe00b9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e00ba  mov edx, eax
    X86_AT(c, 0xe00bau);
    c.r[2] = c.r[0];
    // 0e00bc  call 0xde3e8
    X86_AT(c, 0xe00bcu);
    push32(c, 0xe00c1u); x86_call_known(c, 0xde3e8u, f_000de3e8); X86_RET(c, 0xe00c1u);
    X86_TICK(c, 16);
    // 0e00c1  sub dword ptr [0xc2d00], eax
    X86_AT(c, 0xe00c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2D00u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0e00c7  push ebx
    X86_AT(c, 0xe00c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e00c8  call 0xde3e8
    X86_AT(c, 0xe00c8u);
    push32(c, 0xe00cdu); x86_call_known(c, 0xde3e8u, f_000de3e8); X86_RET(c, 0xe00cdu);
    X86_TICK(c, 20);
    // 0e00cd  sub dword ptr [0xc2d04], eax
    X86_AT(c, 0xe00cdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2D04u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0e00d3  add esp, 8
    X86_AT(c, 0xe00d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e00d6  mov eax, dword ptr [0xc2d00]
    X86_AT(c, 0xe00d6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2D00u)));
    // 0e00db  cmp eax, 0x254
    X86_AT(c, 0xe00dbu);
    (void)x86_sub(c, c.r[0], 0x254u, 0, 4);
    // 0e00e0  jg 0xe00f8
    X86_AT(c, 0xe00e0u);
    if (x86_cc(c, 15)) { goto L_e00f8; }
    X86_TICK(c, 7);
    // 0e00e2  cmp eax, 0x16
    X86_AT(c, 0xe00e2u);
    (void)x86_sub(c, c.r[0], 0x16u, 0, 4);
    // 0e00e5  jl 0xe00f8
    X86_AT(c, 0xe00e5u);
    if (x86_cc(c, 12)) { goto L_e00f8; }
    X86_TICK(c, 11);
    // 0e00e7  mov eax, dword ptr [0xc2d04]
    X86_AT(c, 0xe00e7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2D04u)));
    // 0e00ec  cmp eax, 0x102
    X86_AT(c, 0xe00ecu);
    (void)x86_sub(c, c.r[0], 0x102u, 0, 4);
    // 0e00f1  jg 0xe00f8
    X86_AT(c, 0xe00f1u);
    if (x86_cc(c, 15)) { goto L_e00f8; }
    X86_TICK(c, 7);
    // 0e00f3  cmp eax, 0x39
    X86_AT(c, 0xe00f3u);
    (void)x86_sub(c, c.r[0], 0x39u, 0, 4);
    // 0e00f6  jge 0xe0122
    X86_AT(c, 0xe00f6u);
    if (x86_cc(c, 13)) { goto L_e0122; }
L_e00f8:
    X86_TICK(c, 11);
    // 0e00f8  mov eax, dword ptr [0xc2d08]
    X86_AT(c, 0xe00f8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2D08u)));
    // 0e00fd  and eax, eax
    X86_AT(c, 0xe00fdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e00ff  je 0xe0118
    X86_AT(c, 0xe00ffu);
    if (x86_cc(c, 4)) { goto L_e0118; }
    X86_TICK(c, 21);
    // 0e0101  push 0
    X86_AT(c, 0xe0101u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e0103  push dword ptr [0xc2d10]
    X86_AT(c, 0xe0103u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2D10u))); push32(c, v); }
    // 0e0109  push dword ptr [0xc2d0c]
    X86_AT(c, 0xe0109u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2D0Cu))); push32(c, v); }
    // 0e010f  push eax
    X86_AT(c, 0xe010fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0110  call 0xdfbc0
    X86_AT(c, 0xe0110u);
    push32(c, 0xe0115u); x86_call_known(c, 0xdfbc0u, f_000dfbc0); X86_RET(c, 0xe0115u);
    X86_TICK(c, 2);
    // 0e0115  add esp, 0x10
    X86_AT(c, 0xe0115u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e0118:
    X86_TICK(c, 7);
    // 0e0118  call 0xdefe8
    X86_AT(c, 0xe0118u);
    push32(c, 0xe011du); x86_call_known(c, 0xdefe8u, f_000defe8); X86_RET(c, 0xe011du);
    X86_TICK(c, 7);
    // 0e011d  jmp 0xe01b3
    X86_AT(c, 0xe011du);
    goto L_e01b3;
L_e0122:
    X86_TICK(c, 11);
    // 0e0122  mov eax, dword ptr [0xc2d08]
    X86_AT(c, 0xe0122u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2D08u)));
    // 0e0127  and eax, eax
    X86_AT(c, 0xe0127u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e0129  je 0xe0142
    X86_AT(c, 0xe0129u);
    if (x86_cc(c, 4)) { goto L_e0142; }
    X86_TICK(c, 21);
    // 0e012b  push 0
    X86_AT(c, 0xe012bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e012d  push dword ptr [0xc2d10]
    X86_AT(c, 0xe012du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2D10u))); push32(c, v); }
    // 0e0133  push dword ptr [0xc2d0c]
    X86_AT(c, 0xe0133u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2D0Cu))); push32(c, v); }
    // 0e0139  push eax
    X86_AT(c, 0xe0139u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e013a  call 0xdfbc0
    X86_AT(c, 0xe013au);
    push32(c, 0xe013fu); x86_call_known(c, 0xdfbc0u, f_000dfbc0); X86_RET(c, 0xe013fu);
    X86_TICK(c, 2);
    // 0e013f  add esp, 0x10
    X86_AT(c, 0xe013fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e0142:
    X86_TICK(c, 12);
    // 0e0142  cmp dword ptr [0xc2d14], 0
    X86_AT(c, 0xe0142u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2D14u))), 0x0u, 0, 4);
    // 0e0149  je 0xe015e
    X86_AT(c, 0xe0149u);
    if (x86_cc(c, 4)) { goto L_e015e; }
    X86_TICK(c, 19);
    // 0e014b  mov eax, 8
    X86_AT(c, 0xe014bu);
    c.r[0] = 0x8u;
    // 0e0150  sub eax, dword ptr [0xbef7c]
    X86_AT(c, 0xe0150u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xBEF7Cu))), 0, 4); }
    // 0e0156  cmp eax, dword ptr [0xc2d3c]
    X86_AT(c, 0xe0156u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xC2D3Cu))), 0, 4);
    // 0e015c  jle 0xe0167
    X86_AT(c, 0xe015cu);
    if (x86_cc(c, 14)) { goto L_e0167; }
L_e015e:
    X86_TICK(c, 12);
    // 0e015e  cmp dword ptr [0xc2d3c], 0xf
    X86_AT(c, 0xe015eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2D3Cu))), 0xFu, 0, 4);
    // 0e0165  jle 0xe01ad
    X86_AT(c, 0xe0165u);
    if (x86_cc(c, 14)) { goto L_e01ad; }
L_e0167:
    X86_TICK(c, 19);
    // 0e0167  mov eax, dword ptr [0xbef7c]
    X86_AT(c, 0xe0167u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF7Cu)));
    // 0e016c  lea eax, [eax + eax*4]
    X86_AT(c, 0xe016cu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e016f  lea eax, [eax + eax*1 + 0x1e]
    X86_AT(c, 0xe016fu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] + 0x1Eu);
    // 0e0173  push eax
    X86_AT(c, 0xe0173u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0174  push 1
    X86_AT(c, 0xe0174u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e0176  call 0xc5df0
    X86_AT(c, 0xe0176u);
    push32(c, 0xe017bu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe017bu);
    X86_TICK(c, 12);
    // 0e017b  xchg edi, eax
    X86_AT(c, 0xe017bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e017c  add esp, 8
    X86_AT(c, 0xe017cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e017f  cmp edi, 0x14
    X86_AT(c, 0xe017fu);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0e0182  jg 0xe018d
    X86_AT(c, 0xe0182u);
    if (x86_cc(c, 15)) { goto L_e018d; }
    X86_TICK(c, 12);
    // 0e0184  cmp dword ptr [0xc2d14], 0
    X86_AT(c, 0xe0184u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2D14u))), 0x0u, 0, 4);
    // 0e018b  je 0xe0193
    X86_AT(c, 0xe018bu);
    if (x86_cc(c, 4)) { goto L_e0193; }
L_e018d:
    X86_TICK(c, 6);
    // 0e018d  inc dword ptr [0xc2d10]
    X86_AT(c, 0xe018du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2D10u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_e0193:
    X86_TICK(c, 12);
    // 0e0193  cmp dword ptr [0xc2d10], 6
    X86_AT(c, 0xe0193u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2D10u))), 0x6u, 0, 4);
    // 0e019a  jle 0xe01a1
    X86_AT(c, 0xe019au);
    if (x86_cc(c, 14)) { goto L_e01a1; }
    X86_TICK(c, 7);
    // 0e019c  call 0xdefe8
    X86_AT(c, 0xe019cu);
    push32(c, 0xe01a1u); x86_call_known(c, 0xdefe8u, f_000defe8); X86_RET(c, 0xe01a1u);
L_e01a1:
    X86_TICK(c, 9);
    // 0e01a1  mov dword ptr [0xc2d3c], 0
    X86_AT(c, 0xe01a1u);
    wr32((c.sbase[3] + (uint32_t)(0xC2D3Cu)), 0x0u);
    // 0e01ab  jmp 0xe01b3
    X86_AT(c, 0xe01abu);
    goto L_e01b3;
L_e01ad:
    X86_TICK(c, 6);
    // 0e01ad  inc dword ptr [0xc2d3c]
    X86_AT(c, 0xe01adu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2D3Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_e01b3:
    X86_TICK(c, 11);
    // 0e01b3  mov eax, dword ptr [0xc2d00]
    X86_AT(c, 0xe01b3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2D00u)));
    // 0e01b8  and eax, eax
    X86_AT(c, 0xe01b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e01ba  je 0xe0204
    X86_AT(c, 0xe01bau);
    if (x86_cc(c, 4)) { goto L_e0204; }
    X86_TICK(c, 21);
    // 0e01bc  push 1
    X86_AT(c, 0xe01bcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e01be  push dword ptr [0xc2d10]
    X86_AT(c, 0xe01beu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2D10u))); push32(c, v); }
    // 0e01c4  push dword ptr [0xc2d04]
    X86_AT(c, 0xe01c4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2D04u))); push32(c, v); }
    // 0e01ca  push eax
    X86_AT(c, 0xe01cau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e01cb  call 0xdfbc0
    X86_AT(c, 0xe01cbu);
    push32(c, 0xe01d0u); x86_call_known(c, 0xdfbc0u, f_000dfbc0); X86_RET(c, 0xe01d0u);
    X86_TICK(c, 7);
    // 0e01d0  call 0xdfee4
    X86_AT(c, 0xe01d0u);
    push32(c, 0xe01d5u); x86_call_known(c, 0xdfee4u, f_000dfee4); X86_RET(c, 0xe01d5u);
    X86_TICK(c, 7);
    // 0e01d5  and esi, esi
    X86_AT(c, 0xe01d5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e01d7  jl 0xe01dd
    X86_AT(c, 0xe01d7u);
    if (x86_cc(c, 12)) { goto L_e01dd; }
    X86_TICK(c, 9);
    // 0e01d9  mov eax, esi
    X86_AT(c, 0xe01d9u);
    c.r[0] = c.r[6];
    // 0e01db  jmp 0xe01e1
    X86_AT(c, 0xe01dbu);
    goto L_e01e1;
L_e01dd:
    X86_TICK(c, 4);
    // 0e01dd  mov eax, esi
    X86_AT(c, 0xe01ddu);
    c.r[0] = c.r[6];
    // 0e01df  neg eax
    X86_AT(c, 0xe01dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_e01e1:
    X86_TICK(c, 9);
    // 0e01e1  add esp, 0x10
    X86_AT(c, 0xe01e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e01e4  cmp eax, 4
    X86_AT(c, 0xe01e4u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0e01e7  jl 0xe01fa
    X86_AT(c, 0xe01e7u);
    if (x86_cc(c, 12)) { goto L_e01fa; }
    X86_TICK(c, 7);
    // 0e01e9  and ebx, ebx
    X86_AT(c, 0xe01e9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e01eb  jl 0xe01f1
    X86_AT(c, 0xe01ebu);
    if (x86_cc(c, 12)) { goto L_e01f1; }
    X86_TICK(c, 9);
    // 0e01ed  mov eax, ebx
    X86_AT(c, 0xe01edu);
    c.r[0] = c.r[3];
    // 0e01ef  jmp 0xe01f5
    X86_AT(c, 0xe01efu);
    goto L_e01f5;
L_e01f1:
    X86_TICK(c, 4);
    // 0e01f1  mov eax, ebx
    X86_AT(c, 0xe01f1u);
    c.r[0] = c.r[3];
    // 0e01f3  neg eax
    X86_AT(c, 0xe01f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_e01f5:
    X86_TICK(c, 7);
    // 0e01f5  cmp eax, 4
    X86_AT(c, 0xe01f5u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0e01f8  jge 0xe0204
    X86_AT(c, 0xe01f8u);
    if (x86_cc(c, 13)) { goto L_e0204; }
L_e01fa:
    X86_TICK(c, 9);
    // 0e01fa  push 0xf
    X86_AT(c, 0xe01fau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e01fc  call 0xde55c
    X86_AT(c, 0xe01fcu);
    push32(c, 0xe0201u); x86_call_known(c, 0xde55cu, f_000de55c); X86_RET(c, 0xe0201u);
    X86_TICK(c, 2);
    // 0e0201  add esp, 4
    X86_AT(c, 0xe0201u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e0204:
    X86_TICK(c, 22);
    // 0e0204  pop edi
    X86_AT(c, 0xe0204u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e0205  pop esi
    X86_AT(c, 0xe0205u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e0206  pop ebx
    X86_AT(c, 0xe0206u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e0207  ret 
    X86_AT(c, 0xe0207u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0034u, "ran off the end of a function");
}
}

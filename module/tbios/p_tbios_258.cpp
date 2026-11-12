#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000d7a6(X86Cpu& c) {
    X86_TICK(c, 32);
    // 00d7a6  inc di
    X86_AT(c, 0xd7a6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d7a8  mov eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd7a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u)));
    // 00d7af  add dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd7afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d7b6  adc dword ptr gs:[ebp + 0x448], 0
    X86_AT(c, 0xd7b6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d7be  cmp byte ptr gs:[ebp + 0x441], 0
    X86_AT(c, 0xd7beu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x441u))), 0x0u, 0, 1);
    // 00d7c6  jl 0xd822
    X86_AT(c, 0xd7c6u);
    if (x86_cc(c, 12)) { goto L_d822; }
    X86_TICK(c, 68);
    // 00d7c8  dec si
    X86_AT(c, 0xd7c8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d7ca  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd7cau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 00d7d1  mov edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd7d1u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
L_d822:
    X86_TICK(c, 61);
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7a6u, "ran off the end of a function");
}
void f_0000d7a8(X86Cpu& c) {
    X86_TICK(c, 30);
    // 00d7a8  mov eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd7a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u)));
    // 00d7af  add dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd7afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d7b6  adc dword ptr gs:[ebp + 0x448], 0
    X86_AT(c, 0xd7b6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d7be  cmp byte ptr gs:[ebp + 0x441], 0
    X86_AT(c, 0xd7beu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x441u))), 0x0u, 0, 1);
    // 00d7c6  jl 0xd822
    X86_AT(c, 0xd7c6u);
    if (x86_cc(c, 12)) { goto L_d822; }
    X86_TICK(c, 68);
    // 00d7c8  dec si
    X86_AT(c, 0xd7c8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d7ca  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd7cau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 00d7d1  mov edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd7d1u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
L_d822:
    X86_TICK(c, 61);
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7a8u, "ran off the end of a function");
}
void f_0000d7af(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00d7af  add dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd7afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d7b6  adc dword ptr gs:[ebp + 0x448], 0
    X86_AT(c, 0xd7b6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d7be  cmp byte ptr gs:[ebp + 0x441], 0
    X86_AT(c, 0xd7beu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x441u))), 0x0u, 0, 1);
    // 00d7c6  jl 0xd822
    X86_AT(c, 0xd7c6u);
    if (x86_cc(c, 12)) { goto L_d822; }
    X86_TICK(c, 68);
    // 00d7c8  dec si
    X86_AT(c, 0xd7c8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d7ca  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd7cau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 00d7d1  mov edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd7d1u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
L_d822:
    X86_TICK(c, 61);
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7afu, "ran off the end of a function");
}
void f_0000d7b6(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00d7b6  adc dword ptr gs:[ebp + 0x448], 0
    X86_AT(c, 0xd7b6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d7be  cmp byte ptr gs:[ebp + 0x441], 0
    X86_AT(c, 0xd7beu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x441u))), 0x0u, 0, 1);
    // 00d7c6  jl 0xd822
    X86_AT(c, 0xd7c6u);
    if (x86_cc(c, 12)) { goto L_d822; }
    X86_TICK(c, 68);
    // 00d7c8  dec si
    X86_AT(c, 0xd7c8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d7ca  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd7cau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 00d7d1  mov edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd7d1u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
L_d822:
    X86_TICK(c, 61);
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7b6u, "ran off the end of a function");
}
void f_0000d7be(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d7be  cmp byte ptr gs:[ebp + 0x441], 0
    X86_AT(c, 0xd7beu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x441u))), 0x0u, 0, 1);
    // 00d7c6  jl 0xd822
    X86_AT(c, 0xd7c6u);
    if (x86_cc(c, 12)) { goto L_d822; }
    X86_TICK(c, 68);
    // 00d7c8  dec si
    X86_AT(c, 0xd7c8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d7ca  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd7cau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 00d7d1  mov edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd7d1u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
L_d822:
    X86_TICK(c, 61);
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7beu, "ran off the end of a function");
}
void f_0000d7c6(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d7c6  jl 0xd822
    X86_AT(c, 0xd7c6u);
    if (x86_cc(c, 12)) { goto L_d822; }
    X86_TICK(c, 68);
    // 00d7c8  dec si
    X86_AT(c, 0xd7c8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d7ca  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd7cau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 00d7d1  mov edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd7d1u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
L_d822:
    X86_TICK(c, 61);
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7c6u, "ran off the end of a function");
}
void f_0000d7c8(X86Cpu& c) {
    X86_TICK(c, 129);
    // 00d7c8  dec si
    X86_AT(c, 0xd7c8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d7ca  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd7cau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 00d7d1  mov edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd7d1u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7c8u, "ran off the end of a function");
}
void f_0000d7ca(X86Cpu& c) {
    X86_TICK(c, 127);
    // 00d7ca  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd7cau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 00d7d1  mov edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd7d1u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7cau, "ran off the end of a function");
}
void f_0000d7d1(X86Cpu& c) {
    X86_TICK(c, 123);
    // 00d7d1  mov edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd7d1u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7d1u, "ran off the end of a function");
}
void f_0000d7d8(X86Cpu& c) {
    X86_TICK(c, 119);
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7d8u, "ran off the end of a function");
}
void f_0000d7df(X86Cpu& c) {
    X86_TICK(c, 113);
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7dfu, "ran off the end of a function");
}
void f_0000d7e2(X86Cpu& c) {
    X86_TICK(c, 111);
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7e2u, "ran off the end of a function");
}
void f_0000d7e9(X86Cpu& c) {
    X86_TICK(c, 109);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7e9u, "ran off the end of a function");
}
void f_0000d7f0(X86Cpu& c) {
    X86_TICK(c, 107);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7f0u, "ran off the end of a function");
}
void f_0000d7f7(X86Cpu& c) {
    X86_TICK(c, 100);
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7f7u, "ran off the end of a function");
}
void f_0000d7fe(X86Cpu& c) {
    X86_TICK(c, 93);
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7feu, "ran off the end of a function");
}
void f_0000d805(X86Cpu& c) {
    X86_TICK(c, 86);
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd805u, "ran off the end of a function");
}
void f_0000d80c(X86Cpu& c) {
    X86_TICK(c, 79);
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd80cu, "ran off the end of a function");
}
void f_0000d813(X86Cpu& c) {
    X86_TICK(c, 75);
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd813u, "ran off the end of a function");
}
void f_0000d81a(X86Cpu& c) {
    X86_TICK(c, 68);
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd81au, "ran off the end of a function");
}
void f_0000d822(X86Cpu& c) {
    X86_TICK(c, 61);
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd822u, "ran off the end of a function");
}
void f_0000d829(X86Cpu& c) {
    X86_TICK(c, 57);
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd829u, "ran off the end of a function");
}
void f_0000d830(X86Cpu& c) {
    X86_TICK(c, 53);
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd830u, "ran off the end of a function");
}
void f_0000d837(X86Cpu& c) {
    X86_TICK(c, 46);
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd837u, "ran off the end of a function");
}
void f_0000d83e(X86Cpu& c) {
    X86_TICK(c, 39);
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd83eu, "ran off the end of a function");
}
void f_0000d845(X86Cpu& c) {
    X86_TICK(c, 32);
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd845u, "ran off the end of a function");
}
void f_0000d84c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd84cu, "ran off the end of a function");
}
void f_0000d853(X86Cpu& c) {
    X86_TICK(c, 21);
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd853u, "ran off the end of a function");
}
void f_0000d85a(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd85au, "ran off the end of a function");
}
void f_0000d862(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd862u, "ran off the end of a function");
}
void f_0000d865(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd865u, "ran off the end of a function");
}
void f_0000d878(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd878u, "ran off the end of a function");
}
void f_0000d87b(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd87bu, "ran off the end of a function");
}
void f_0000d896(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d896  dec si
    X86_AT(c, 0xd896u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d898  jns 0xd8ad
    X86_AT(c, 0xd898u);
    if (x86_cc(c, 9)) { goto L_d8ad; }
    X86_TICK(c, 12);
    // 00d89a  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd89au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d8a2  jbe 0xd8a8
    X86_AT(c, 0xd8a2u);
    if (x86_cc(c, 6)) { goto L_d8a8; }
    X86_TICK(c, 4);
    // 00d8a4  inc si
    X86_AT(c, 0xd8a4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d8a6  inc di
    X86_AT(c, 0xd8a6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
L_d8a8:
    X86_TICK(c, 7);
    // 00d8a8  jmp 0xd937
    X86_AT(c, 0xd8a8u);
    goto L_d937;
L_d8ad:
    X86_TICK(c, 30);
    // 00d8ad  mov eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd8adu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu)));
    // 00d8b4  sub dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd8b4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d8bb  sbb dword ptr gs:[ebp + 0x450], 0
    X86_AT(c, 0xd8bbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d8c3  cmp byte ptr gs:[ebp + 0x466], 0
    X86_AT(c, 0xd8c3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0x0u, 0, 1);
    // 00d8cb  jge 0xd903
    X86_AT(c, 0xd8cbu);
    if (x86_cc(c, 13)) { goto L_d903; }
    X86_TICK(c, 36);
    // 00d8cd  inc di
    X86_AT(c, 0xd8cdu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d8cf  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd8cfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d8d6  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd8d6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d8dd  add eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd8ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))), 0, 4); }
    // 00d8e4  adc edx, 0
    X86_AT(c, 0xd8e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d8e7  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd8e7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00d8ee  mov dword ptr gs:[ebp + 0x448], edx
    X86_AT(c, 0xd8eeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[2]);
    // 00d8f5  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd8f5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d8fc  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd8fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
L_d903:
    X86_TICK(c, 32);
    // 00d903  mov eax, dword ptr gs:[ebp + 0x460]
    X86_AT(c, 0xd903u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)));
    // 00d90a  mov edx, dword ptr gs:[ebp + 0x464]
    X86_AT(c, 0xd90au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)));
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd896u, "ran off the end of a function");
}
void f_0000d898(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d898  jns 0xd8ad
    X86_AT(c, 0xd898u);
    if (x86_cc(c, 9)) { goto L_d8ad; }
    X86_TICK(c, 12);
    // 00d89a  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd89au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d8a2  jbe 0xd8a8
    X86_AT(c, 0xd8a2u);
    if (x86_cc(c, 6)) { goto L_d8a8; }
    X86_TICK(c, 4);
    // 00d8a4  inc si
    X86_AT(c, 0xd8a4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d8a6  inc di
    X86_AT(c, 0xd8a6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
L_d8a8:
    X86_TICK(c, 7);
    // 00d8a8  jmp 0xd937
    X86_AT(c, 0xd8a8u);
    goto L_d937;
L_d8ad:
    X86_TICK(c, 30);
    // 00d8ad  mov eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd8adu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu)));
    // 00d8b4  sub dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd8b4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d8bb  sbb dword ptr gs:[ebp + 0x450], 0
    X86_AT(c, 0xd8bbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d8c3  cmp byte ptr gs:[ebp + 0x466], 0
    X86_AT(c, 0xd8c3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0x0u, 0, 1);
    // 00d8cb  jge 0xd903
    X86_AT(c, 0xd8cbu);
    if (x86_cc(c, 13)) { goto L_d903; }
    X86_TICK(c, 36);
    // 00d8cd  inc di
    X86_AT(c, 0xd8cdu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d8cf  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd8cfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d8d6  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd8d6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d8dd  add eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd8ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))), 0, 4); }
    // 00d8e4  adc edx, 0
    X86_AT(c, 0xd8e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d8e7  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd8e7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00d8ee  mov dword ptr gs:[ebp + 0x448], edx
    X86_AT(c, 0xd8eeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[2]);
    // 00d8f5  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd8f5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d8fc  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd8fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
L_d903:
    X86_TICK(c, 32);
    // 00d903  mov eax, dword ptr gs:[ebp + 0x460]
    X86_AT(c, 0xd903u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)));
    // 00d90a  mov edx, dword ptr gs:[ebp + 0x464]
    X86_AT(c, 0xd90au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)));
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd898u, "ran off the end of a function");
}
void f_0000d89a(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d89a  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd89au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d8a2  jbe 0xd8a8
    X86_AT(c, 0xd8a2u);
    if (x86_cc(c, 6)) { goto L_d8a8; }
    X86_TICK(c, 4);
    // 00d8a4  inc si
    X86_AT(c, 0xd8a4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d8a6  inc di
    X86_AT(c, 0xd8a6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
L_d8a8:
    X86_TICK(c, 7);
    // 00d8a8  jmp 0xd937
    X86_AT(c, 0xd8a8u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd89au, "ran off the end of a function");
}
void f_0000d8a2(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d8a2  jbe 0xd8a8
    X86_AT(c, 0xd8a2u);
    if (x86_cc(c, 6)) { goto L_d8a8; }
    X86_TICK(c, 4);
    // 00d8a4  inc si
    X86_AT(c, 0xd8a4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d8a6  inc di
    X86_AT(c, 0xd8a6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
L_d8a8:
    X86_TICK(c, 7);
    // 00d8a8  jmp 0xd937
    X86_AT(c, 0xd8a8u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8a2u, "ran off the end of a function");
}
void f_0000d8a8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d8a8  jmp 0xd937
    X86_AT(c, 0xd8a8u);
    goto L_d937;
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8a8u, "ran off the end of a function");
}
void f_0000d8ad(X86Cpu& c) {
    X86_TICK(c, 30);
    // 00d8ad  mov eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd8adu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu)));
    // 00d8b4  sub dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd8b4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d8bb  sbb dword ptr gs:[ebp + 0x450], 0
    X86_AT(c, 0xd8bbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d8c3  cmp byte ptr gs:[ebp + 0x466], 0
    X86_AT(c, 0xd8c3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0x0u, 0, 1);
    // 00d8cb  jge 0xd903
    X86_AT(c, 0xd8cbu);
    if (x86_cc(c, 13)) { goto L_d903; }
    X86_TICK(c, 36);
    // 00d8cd  inc di
    X86_AT(c, 0xd8cdu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d8cf  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd8cfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d8d6  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd8d6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d8dd  add eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd8ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))), 0, 4); }
    // 00d8e4  adc edx, 0
    X86_AT(c, 0xd8e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d8e7  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd8e7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00d8ee  mov dword ptr gs:[ebp + 0x448], edx
    X86_AT(c, 0xd8eeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[2]);
    // 00d8f5  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd8f5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d8fc  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd8fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
L_d903:
    X86_TICK(c, 46);
    // 00d903  mov eax, dword ptr gs:[ebp + 0x460]
    X86_AT(c, 0xd903u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)));
    // 00d90a  mov edx, dword ptr gs:[ebp + 0x464]
    X86_AT(c, 0xd90au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)));
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8adu, "ran off the end of a function");
}
void f_0000d8b4(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00d8b4  sub dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd8b4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d8bb  sbb dword ptr gs:[ebp + 0x450], 0
    X86_AT(c, 0xd8bbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d8c3  cmp byte ptr gs:[ebp + 0x466], 0
    X86_AT(c, 0xd8c3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0x0u, 0, 1);
    // 00d8cb  jge 0xd903
    X86_AT(c, 0xd8cbu);
    if (x86_cc(c, 13)) { goto L_d903; }
    X86_TICK(c, 36);
    // 00d8cd  inc di
    X86_AT(c, 0xd8cdu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d8cf  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd8cfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d8d6  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd8d6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d8dd  add eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd8ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))), 0, 4); }
    // 00d8e4  adc edx, 0
    X86_AT(c, 0xd8e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d8e7  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd8e7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00d8ee  mov dword ptr gs:[ebp + 0x448], edx
    X86_AT(c, 0xd8eeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[2]);
    // 00d8f5  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd8f5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d8fc  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd8fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
L_d903:
    X86_TICK(c, 46);
    // 00d903  mov eax, dword ptr gs:[ebp + 0x460]
    X86_AT(c, 0xd903u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)));
    // 00d90a  mov edx, dword ptr gs:[ebp + 0x464]
    X86_AT(c, 0xd90au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)));
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8b4u, "ran off the end of a function");
}
void f_0000d8bb(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00d8bb  sbb dword ptr gs:[ebp + 0x450], 0
    X86_AT(c, 0xd8bbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d8c3  cmp byte ptr gs:[ebp + 0x466], 0
    X86_AT(c, 0xd8c3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0x0u, 0, 1);
    // 00d8cb  jge 0xd903
    X86_AT(c, 0xd8cbu);
    if (x86_cc(c, 13)) { goto L_d903; }
    X86_TICK(c, 36);
    // 00d8cd  inc di
    X86_AT(c, 0xd8cdu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d8cf  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd8cfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d8d6  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd8d6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d8dd  add eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd8ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))), 0, 4); }
    // 00d8e4  adc edx, 0
    X86_AT(c, 0xd8e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d8e7  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd8e7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00d8ee  mov dword ptr gs:[ebp + 0x448], edx
    X86_AT(c, 0xd8eeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[2]);
    // 00d8f5  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd8f5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d8fc  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd8fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
L_d903:
    X86_TICK(c, 46);
    // 00d903  mov eax, dword ptr gs:[ebp + 0x460]
    X86_AT(c, 0xd903u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)));
    // 00d90a  mov edx, dword ptr gs:[ebp + 0x464]
    X86_AT(c, 0xd90au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)));
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8bbu, "ran off the end of a function");
}
void f_0000d8c3(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d8c3  cmp byte ptr gs:[ebp + 0x466], 0
    X86_AT(c, 0xd8c3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0x0u, 0, 1);
    // 00d8cb  jge 0xd903
    X86_AT(c, 0xd8cbu);
    if (x86_cc(c, 13)) { goto L_d903; }
    X86_TICK(c, 36);
    // 00d8cd  inc di
    X86_AT(c, 0xd8cdu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d8cf  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd8cfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d8d6  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd8d6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d8dd  add eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd8ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))), 0, 4); }
    // 00d8e4  adc edx, 0
    X86_AT(c, 0xd8e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d8e7  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd8e7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00d8ee  mov dword ptr gs:[ebp + 0x448], edx
    X86_AT(c, 0xd8eeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[2]);
    // 00d8f5  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd8f5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d8fc  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd8fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
L_d903:
    X86_TICK(c, 46);
    // 00d903  mov eax, dword ptr gs:[ebp + 0x460]
    X86_AT(c, 0xd903u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)));
    // 00d90a  mov edx, dword ptr gs:[ebp + 0x464]
    X86_AT(c, 0xd90au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)));
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8c3u, "ran off the end of a function");
}
void f_0000d8cb(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d8cb  jge 0xd903
    X86_AT(c, 0xd8cbu);
    if (x86_cc(c, 13)) { goto L_d903; }
    X86_TICK(c, 36);
    // 00d8cd  inc di
    X86_AT(c, 0xd8cdu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d8cf  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd8cfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d8d6  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd8d6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d8dd  add eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd8ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))), 0, 4); }
    // 00d8e4  adc edx, 0
    X86_AT(c, 0xd8e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d8e7  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd8e7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00d8ee  mov dword ptr gs:[ebp + 0x448], edx
    X86_AT(c, 0xd8eeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[2]);
    // 00d8f5  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd8f5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d8fc  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd8fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
L_d903:
    X86_TICK(c, 46);
    // 00d903  mov eax, dword ptr gs:[ebp + 0x460]
    X86_AT(c, 0xd903u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)));
    // 00d90a  mov edx, dword ptr gs:[ebp + 0x464]
    X86_AT(c, 0xd90au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)));
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8cbu, "ran off the end of a function");
}
void f_0000d903(X86Cpu& c) {
    X86_TICK(c, 46);
    // 00d903  mov eax, dword ptr gs:[ebp + 0x460]
    X86_AT(c, 0xd903u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)));
    // 00d90a  mov edx, dword ptr gs:[ebp + 0x464]
    X86_AT(c, 0xd90au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)));
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd903u, "ran off the end of a function");
}
void f_0000d90a(X86Cpu& c) {
    X86_TICK(c, 42);
    // 00d90a  mov edx, dword ptr gs:[ebp + 0x464]
    X86_AT(c, 0xd90au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)));
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd90au, "ran off the end of a function");
}
void f_0000d911(X86Cpu& c) {
    X86_TICK(c, 38);
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd911u, "ran off the end of a function");
}
void f_0000d918(X86Cpu& c) {
    X86_TICK(c, 32);
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd918u, "ran off the end of a function");
}
void f_0000d91f(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd91fu, "ran off the end of a function");
}
void f_0000d926(X86Cpu& c) {
    X86_TICK(c, 20);
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd926u, "ran off the end of a function");
}
void f_0000d929(X86Cpu& c) {
    X86_TICK(c, 18);
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd929u, "ran off the end of a function");
}
void f_0000d930(X86Cpu& c) {
    X86_TICK(c, 16);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd930u, "ran off the end of a function");
}
void f_0000d937(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd937u, "ran off the end of a function");
}
void f_0000d939(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd939u, "ran off the end of a function");
}
void f_0000d93b(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd93bu, "ran off the end of a function");
}
void f_0000d994(X86Cpu& c) {
    X86_TICK(c, 20);
    // 00d994  push esi
    X86_AT(c, 0xd994u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00d995  push edi
    X86_AT(c, 0xd995u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d996  push ecx
    X86_AT(c, 0xd996u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00d997  sub ebx, ebx
    X86_AT(c, 0xd997u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00d999  cmp dword ptr cs:[0xe138], eax
    X86_AT(c, 0xd999u);
    (void)x86_sub(c, rd32((c.sbase[1] + (uint32_t)(0xE138u))), c.r[0], 0, 4);
    // 00d9a0  jge 0xd9d0
    X86_AT(c, 0xd9a0u);
    if (x86_cc(c, 13)) { goto L_d9d0; }
    X86_TICK(c, 11);
    // 00d9a2  mov edi, dword ptr cs:[0xe13c]
    X86_AT(c, 0xd9a2u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(0xE13Cu)));
    // 00d9a9  cmp eax, edi
    X86_AT(c, 0xd9a9u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 00d9ab  jle 0xd9ca
    X86_AT(c, 0xd9abu);
    if (x86_cc(c, 14)) { goto L_d9ca; }
    X86_TICK(c, 12);
    // 00d9ad  cmp dword ptr cs:[0xe140], eax
    X86_AT(c, 0xd9adu);
    (void)x86_sub(c, rd32((c.sbase[1] + (uint32_t)(0xE140u))), c.r[0], 0, 4);
    // 00d9b4  jge 0xd9c4
    X86_AT(c, 0xd9b4u);
    if (x86_cc(c, 13)) { goto L_d9c4; }
    X86_TICK(c, 17);
    // 00d9b6  mov edi, eax
    X86_AT(c, 0xd9b6u);
    c.r[7] = c.r[0];
    // 00d9b8  mov eax, dword ptr cs:[0xe144]
    X86_AT(c, 0xd9b8u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(0xE144u)));
    // 00d9be  sub eax, edi
    X86_AT(c, 0xd9beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 00d9c0  mov bl, 3
    X86_AT(c, 0xd9c0u);
    s8(c, 3, 0x3u);
    // 00d9c2  jmp 0xd9d0
    X86_AT(c, 0xd9c2u);
    goto L_d9d0;
L_d9c4:
    X86_TICK(c, 11);
    // 00d9c4  sub eax, edi
    X86_AT(c, 0xd9c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 00d9c6  mov bl, 2
    X86_AT(c, 0xd9c6u);
    s8(c, 3, 0x2u);
    // 00d9c8  jmp 0xd9d0
    X86_AT(c, 0xd9c8u);
    goto L_d9d0;
L_d9ca:
    X86_TICK(c, 6);
    // 00d9ca  sub edi, eax
    X86_AT(c, 0xd9cau);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00d9cc  mov eax, edi
    X86_AT(c, 0xd9ccu);
    c.r[0] = c.r[7];
    // 00d9ce  mov bl, 1
    X86_AT(c, 0xd9ceu);
    s8(c, 3, 0x1u);
L_d9d0:
    X86_TICK(c, 9);
    // 00d9d0  mov edi, eax
    X86_AT(c, 0xd9d0u);
    c.r[7] = c.r[0];
    // 00d9d2  call 0xdf08
    X86_AT(c, 0xd9d2u);
    push32(c, 0xd9d7u); f_0000df08(c); X86_RET(c, 0xd9d7u);
    X86_TICK(c, 7);
    // 00d9d7  or ax, ax
    X86_AT(c, 0xd9d7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 00d9da  jne 0xd9e8
    X86_AT(c, 0xd9dau);
    if (x86_cc(c, 5)) { goto L_d9e8; }
    X86_TICK(c, 13);
    // 00d9dc  mov ax, word ptr gs:[ebp + 0x412]
    X86_AT(c, 0xd9dcu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x412u))));
    // 00d9e4  sub edx, edx
    X86_AT(c, 0xd9e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00d9e6  jmp 0xda2b
    X86_AT(c, 0xd9e6u);
    goto L_da2b;
L_d9e8:
    X86_TICK(c, 41);
    // 00d9e8  mul word ptr gs:[ebp + 0x410]
    X86_AT(c, 0xd9e8u);
    x86_mul(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x410u))), 2);
    // 00d9f0  add ax, ax
    X86_AT(c, 0xd9f0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00d9f3  adc dx, 0
    X86_AT(c, 0xd9f3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 00d9f7  mov cx, dx
    X86_AT(c, 0xd9f7u);
    s16(c, 1, (c.r[2] & 0xFFFFu));
    // 00d9fa  mov eax, dword ptr cs:[0xe138]
    X86_AT(c, 0xd9fau);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(0xE138u)));
    // 00da00  sub eax, edi
    X86_AT(c, 0xda00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 00da02  call 0xdf08
    X86_AT(c, 0xda02u);
    push32(c, 0xda07u); f_0000df08(c); X86_RET(c, 0xda07u);
    X86_TICK(c, 7);
    // 00da07  or ax, ax
    X86_AT(c, 0xda07u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 00da0a  jne 0xda16
    X86_AT(c, 0xda0au);
    if (x86_cc(c, 5)) { goto L_da16; }
    X86_TICK(c, 11);
    // 00da0c  mov dx, word ptr gs:[ebp + 0x410]
    X86_AT(c, 0xda0cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x410u))));
    // 00da14  jmp 0xda2b
    X86_AT(c, 0xda14u);
    goto L_da2b;
L_da16:
    X86_TICK(c, 30);
    // 00da16  mul word ptr gs:[ebp + 0x412]
    X86_AT(c, 0xda16u);
    x86_mul(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x412u))), 2);
    // 00da1e  add ax, ax
    X86_AT(c, 0xda1eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00da21  adc dx, 0
    X86_AT(c, 0xda21u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 00da25  mov ax, dx
    X86_AT(c, 0xda25u);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 00da28  mov dx, cx
    X86_AT(c, 0xda28u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
L_da2b:
    X86_TICK(c, 7);
    // 00da2b  cmp bl, 1
    X86_AT(c, 0xda2bu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 00da2e  je 0xda35
    X86_AT(c, 0xda2eu);
    if (x86_cc(c, 4)) { goto L_da35; }
    X86_TICK(c, 7);
    // 00da30  cmp bl, 2
    X86_AT(c, 0xda30u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 00da33  jne 0xda38
    X86_AT(c, 0xda33u);
    if (x86_cc(c, 5)) { goto L_da38; }
L_da35:
    X86_TICK(c, 2);
    // 00da35  neg dx
    X86_AT(c, 0xda35u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_da38:
    X86_TICK(c, 7);
    // 00da38  test bl, 2
    X86_AT(c, 0xda38u);
    (void)x86_logic(c, g8(c, 3) & 0x2u, 1);
    // 00da3b  je 0xda40
    X86_AT(c, 0xda3bu);
    if (x86_cc(c, 4)) { goto L_da40; }
    X86_TICK(c, 2);
    // 00da3d  neg ax
    X86_AT(c, 0xda3du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_da40:
    X86_TICK(c, 22);
    // 00da40  pop ecx
    X86_AT(c, 0xda40u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00da41  pop edi
    X86_AT(c, 0xda41u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00da42  pop esi
    X86_AT(c, 0xda42u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00da43  ret 
    X86_AT(c, 0xda43u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd994u, "ran off the end of a function");
}
void f_0000deac(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00deac  push ebx
    X86_AT(c, 0xdeacu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00dead  sub ebx, ebx
    X86_AT(c, 0xdeadu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00deaf  cmp dx, bx
    X86_AT(c, 0xdeafu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00deb2  jge 0xdeb9
    X86_AT(c, 0xdeb2u);
    if (x86_cc(c, 13)) { goto L_deb9; }
    X86_TICK(c, 4);
    // 00deb4  not bh
    X86_AT(c, 0xdeb4u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
    // 00deb6  neg dx
    X86_AT(c, 0xdeb6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_deb9:
    X86_TICK(c, 7);
    // 00deb9  test ax, ax
    X86_AT(c, 0xdeb9u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00debc  jge 0xdec3
    X86_AT(c, 0xdebcu);
    if (x86_cc(c, 13)) { goto L_dec3; }
    X86_TICK(c, 4);
    // 00debe  not bl
    X86_AT(c, 0xdebeu);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 00dec0  neg ax
    X86_AT(c, 0xdec0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_dec3:
    X86_TICK(c, 11);
    // 00dec3  push ebx
    X86_AT(c, 0xdec3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00dec4  push ecx
    X86_AT(c, 0xdec4u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00dec5  call 0xe0a4
    X86_AT(c, 0xdec5u);
    push32(c, 0xdecau); f_0000e0a4(c); X86_RET(c, 0xdecau);
    X86_TICK(c, 164);
    // 00deca  xchg dx, ax
    X86_AT(c, 0xdecau);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00decc  shl edx, 0x10
    X86_AT(c, 0xdeccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00decf  pop ebx
    X86_AT(c, 0xdecfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ded0  mul bx
    X86_AT(c, 0xded0u);
    x86_mul(c, (c.r[3] & 0xFFFFu), 2);
    // 00ded3  div cx
    X86_AT(c, 0xded3u);
    x86_div(c, (c.r[1] & 0xFFFFu), 2, 0xded3u);
    // 00ded6  add dx, dx
    X86_AT(c, 0xded6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00ded9  adc ax, 0
    X86_AT(c, 0xded9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 00dedd  shl eax, 0x10
    X86_AT(c, 0xdeddu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00dee0  shr edx, 0x10
    X86_AT(c, 0xdee0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00dee3  mov ax, dx
    X86_AT(c, 0xdee3u);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 00dee6  mul bx
    X86_AT(c, 0xdee6u);
    x86_mul(c, (c.r[3] & 0xFFFFu), 2);
    // 00dee9  div cx
    X86_AT(c, 0xdee9u);
    x86_div(c, (c.r[1] & 0xFFFFu), 2, 0xdee9u);
    // 00deec  add dx, dx
    X86_AT(c, 0xdeecu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00deef  adc ax, 0
    X86_AT(c, 0xdeefu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 00def3  shld edx, eax, 0x10
    X86_AT(c, 0xdef3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00def7  pop ebx
    X86_AT(c, 0xdef7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00def8  test bh, bh
    X86_AT(c, 0xdef8u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 00defa  jge 0xdeff
    X86_AT(c, 0xdefau);
    if (x86_cc(c, 13)) { goto L_deff; }
    X86_TICK(c, 2);
    // 00defc  neg dx
    X86_AT(c, 0xdefcu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_deff:
    X86_TICK(c, 7);
    // 00deff  test bl, bl
    X86_AT(c, 0xdeffu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 00df01  jge 0xdf06
    X86_AT(c, 0xdf01u);
    if (x86_cc(c, 13)) { goto L_df06; }
    X86_TICK(c, 2);
    // 00df03  neg ax
    X86_AT(c, 0xdf03u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_df06:
    X86_TICK(c, 14);
    // 00df06  pop ebx
    X86_AT(c, 0xdf06u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00df07  ret 
    X86_AT(c, 0xdf07u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdeacu, "ran off the end of a function");
}
void f_0000df08(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00df08  push ebx
    X86_AT(c, 0xdf08u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00df09  movzx ebx, ax
    X86_AT(c, 0xdf09u);
    c.r[3] = (c.r[0] & 0xFFFFu);
    // 00df0c  lea ebx, [ebx + ebx*4]
    X86_AT(c, 0xdf0cu);
    c.r[3] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 00df0f  lea ebx, [ebx + ebx*4]
    X86_AT(c, 0xdf0fu);
    c.r[3] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 00df12  lea ebx, [ebx*4]
    X86_AT(c, 0xdf12u);
    c.r[3] = (uint32_t)(c.r[3] * 4);
    // 00df19  mov edx, ebx
    X86_AT(c, 0xdf19u);
    c.r[2] = c.r[3];
    // 00df1b  shr ebx, 0x10
    X86_AT(c, 0xdf1bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00df1e  shld edx, eax, 0x10
    X86_AT(c, 0xdf1eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00df22  or dx, dx
    X86_AT(c, 0xdf22u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 00df25  je 0xdf2b
    X86_AT(c, 0xdf25u);
    if (x86_cc(c, 4)) { goto L_df2b; }
    X86_TICK(c, 2);
    // 00df27  add bx, 0x64
    X86_AT(c, 0xdf27u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x64u, 0, 2)); }
L_df2b:
    X86_TICK(c, 7);
    // 00df2b  cmp bx, 0x9d
    X86_AT(c, 0xdf2bu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x9Du, 0, 2);
    // 00df30  jb 0xdf46
    X86_AT(c, 0xdf30u);
    if (x86_cc(c, 2)) { goto L_df46; }
    X86_TICK(c, 7);
    // 00df32  cmp ax, 0x9220
    X86_AT(c, 0xdf32u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x9220u, 0, 2);
    // 00df36  jbe 0xdf3d
    X86_AT(c, 0xdf36u);
    if (x86_cc(c, 6)) { goto L_df3d; }
    X86_TICK(c, 9);
    // 00df38  xor ax, ax
    X86_AT(c, 0xdf38u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 00df3b  jmp 0xdf44
    X86_AT(c, 0xdf3bu);
    goto L_df44;
L_df3d:
    X86_TICK(c, 4);
    // 00df3d  sub ax, 0x9220
    X86_AT(c, 0xdf3du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x9220u, 0, 2)); }
    // 00df41  neg ax
    X86_AT(c, 0xdf41u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_df44:
    X86_TICK(c, 14);
    // 00df44  pop ebx
    X86_AT(c, 0xdf44u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00df45  ret 
    X86_AT(c, 0xdf45u);
    c.eip = pop32(c); return;
L_df46:
    X86_TICK(c, 57);
    // 00df46  mov ax, word ptr cs:[ebx*2 + 0xdf66]
    X86_AT(c, 0xdf46u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xDF66u))));
    // 00df4f  push eax
    X86_AT(c, 0xdf4fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00df50  sub ax, word ptr cs:[ebx*2 + 0xdf68]
    X86_AT(c, 0xdf50u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xDF68u))), 0, 2)); }
    // 00df59  shr edx, 0x10
    X86_AT(c, 0xdf59u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00df5c  mul dx
    X86_AT(c, 0xdf5cu);
    x86_mul(c, (c.r[2] & 0xFFFFu), 2);
    // 00df5f  pop eax
    X86_AT(c, 0xdf5fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00df60  sub ax, dx
    X86_AT(c, 0xdf60u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00df63  pop ebx
    X86_AT(c, 0xdf63u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00df64  ret 
    X86_AT(c, 0xdf64u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf08u, "ran off the end of a function");
}
void f_0000e0a4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00e0a4  test dx, dx
    X86_AT(c, 0xe0a4u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00e0a7  jge 0xe0ac
    X86_AT(c, 0xe0a7u);
    if (x86_cc(c, 13)) { goto L_e0ac; }
    X86_TICK(c, 2);
    // 00e0a9  neg dx
    X86_AT(c, 0xe0a9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_e0ac:
    X86_TICK(c, 5);
    // 00e0ac  jne 0xe0b2
    X86_AT(c, 0xe0acu);
    if (x86_cc(c, 5)) { goto L_e0b2; }
    X86_TICK(c, 12);
    // 00e0ae  mov cx, ax
    X86_AT(c, 0xe0aeu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 00e0b1  ret 
    X86_AT(c, 0xe0b1u);
    c.eip = pop32(c); return;
L_e0b2:
    X86_TICK(c, 7);
    // 00e0b2  test ax, ax
    X86_AT(c, 0xe0b2u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00e0b5  jge 0xe0ba
    X86_AT(c, 0xe0b5u);
    if (x86_cc(c, 13)) { goto L_e0ba; }
    X86_TICK(c, 2);
    // 00e0b7  neg ax
    X86_AT(c, 0xe0b7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_e0ba:
    X86_TICK(c, 5);
    // 00e0ba  jne 0xe0c0
    X86_AT(c, 0xe0bau);
    if (x86_cc(c, 5)) { goto L_e0c0; }
    X86_TICK(c, 12);
    // 00e0bc  mov cx, dx
    X86_AT(c, 0xe0bcu);
    s16(c, 1, (c.r[2] & 0xFFFFu));
    // 00e0bf  ret 
    X86_AT(c, 0xe0bfu);
    c.eip = pop32(c); return;
L_e0c0:
    X86_TICK(c, 17);
    // 00e0c0  push edi
    X86_AT(c, 0xe0c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00e0c1  movzx edx, dx
    X86_AT(c, 0xe0c1u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 00e0c4  movzx eax, ax
    X86_AT(c, 0xe0c4u);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 00e0c7  lea edi, [eax + edx*1]
    X86_AT(c, 0xe0c7u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[2]);
    // 00e0ca  cmp edi, 0x10
    X86_AT(c, 0xe0cau);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 00e0cd  jae 0xe0da
    X86_AT(c, 0xe0cdu);
    if (x86_cc(c, 3)) { goto L_e0da; }
    X86_TICK(c, 16);
    // 00e0cf  shl edx, 9
    X86_AT(c, 0xe0cfu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[2] = r; }
    // 00e0d2  shl eax, 9
    X86_AT(c, 0xe0d2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 00e0d5  shl edi, 9
    X86_AT(c, 0xe0d5u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[7] = r; }
    // 00e0d8  jmp 0xe0fe
    X86_AT(c, 0xe0d8u);
    goto L_e0fe;
L_e0da:
    X86_TICK(c, 7);
    // 00e0da  cmp edi, 0x100
    X86_AT(c, 0xe0dau);
    (void)x86_sub(c, c.r[7], 0x100u, 0, 4);
    // 00e0e0  jae 0xe0ed
    X86_AT(c, 0xe0e0u);
    if (x86_cc(c, 3)) { goto L_e0ed; }
    X86_TICK(c, 16);
    // 00e0e2  shl edx, 5
    X86_AT(c, 0xe0e2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 00e0e5  shl eax, 5
    X86_AT(c, 0xe0e5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 00e0e8  shl edi, 5
    X86_AT(c, 0xe0e8u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[7] = r; }
    // 00e0eb  jmp 0xe0fe
    X86_AT(c, 0xe0ebu);
    goto L_e0fe;
L_e0ed:
    X86_TICK(c, 7);
    // 00e0ed  cmp edi, 0x2000
    X86_AT(c, 0xe0edu);
    (void)x86_sub(c, c.r[7], 0x2000u, 0, 4);
    // 00e0f3  jbe 0xe0fe
    X86_AT(c, 0xe0f3u);
    if (x86_cc(c, 6)) { goto L_e0fe; }
    X86_TICK(c, 9);
    // 00e0f5  shr edx, 4
    X86_AT(c, 0xe0f5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 00e0f8  shr eax, 4
    X86_AT(c, 0xe0f8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00e0fb  shr edi, 4
    X86_AT(c, 0xe0fbu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[7] = r; }
L_e0fe:
    X86_TICK(c, 54);
    // 00e0fe  push eax
    X86_AT(c, 0xe0feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00e0ff  push edx
    X86_AT(c, 0xe0ffu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00e100  imul eax, eax
    X86_AT(c, 0xe100u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[0], 4);
    // 00e103  imul edx, edx
    X86_AT(c, 0xe103u);
    c.r[2] = x86_imul2(c, c.r[2], c.r[2], 4);
    // 00e106  add eax, edx
    X86_AT(c, 0xe106u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 00e108  mov dword ptr gs:[ebp + 0x4e8], eax
    X86_AT(c, 0xe108u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4E8u)), c.r[0]);
    // 00e10f  mov cl, 0x10
    X86_AT(c, 0xe10fu);
    s8(c, 1, 0x10u);
L_e111:
    X86_TICK(c, 59);
    // 00e111  mov eax, dword ptr gs:[ebp + 0x4e8]
    X86_AT(c, 0xe111u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4E8u)));
    // 00e118  shld edx, eax, 0x10
    X86_AT(c, 0xe118u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00e11c  div di
    X86_AT(c, 0xe11cu);
    x86_div(c, (c.r[7] & 0xFFFFu), 2, 0xe11cu);
    // 00e11f  add ax, di
    X86_AT(c, 0xe11fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 00e122  shr ax, 1
    X86_AT(c, 0xe122u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00e125  cmp ax, di
    X86_AT(c, 0xe125u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00e128  je 0xe130
    X86_AT(c, 0xe128u);
    if (x86_cc(c, 4)) { goto L_e130; }
    X86_TICK(c, 9);
    // 00e12a  mov edi, eax
    X86_AT(c, 0xe12au);
    c.r[7] = c.r[0];
    // 00e12c  dec cl
    X86_AT(c, 0xe12cu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00e12e  jne 0xe111
    X86_AT(c, 0xe12eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe111u); goto L_e111; }
L_e130:
    X86_TICK(c, 24);
    // 00e130  mov ecx, eax
    X86_AT(c, 0xe130u);
    c.r[1] = c.r[0];
    // 00e132  pop edx
    X86_AT(c, 0xe132u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00e133  pop eax
    X86_AT(c, 0xe133u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00e134  pop edi
    X86_AT(c, 0xe134u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00e135  ret 
    X86_AT(c, 0xe135u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0a4u, "ran off the end of a function");
}
void f_0000f190(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00f190  lds esi, fword ptr gs:[ebp + 0x33c]
    X86_AT(c, 0xf190u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x33Cu)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f197  movzx ecx, word ptr gs:[ebp + 0x348]
    X86_AT(c, 0xf197u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x348u)));
    // 00f19f  test ecx, ecx
    X86_AT(c, 0xf19fu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00f1a1  je 0xf1e2
    X86_AT(c, 0xf1a1u);
    if (x86_cc(c, 4)) { goto L_f1e2; }
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
L_f1e2:
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf190u, "ran off the end of a function");
}
void f_0000f197(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00f197  movzx ecx, word ptr gs:[ebp + 0x348]
    X86_AT(c, 0xf197u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x348u)));
    // 00f19f  test ecx, ecx
    X86_AT(c, 0xf19fu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00f1a1  je 0xf1e2
    X86_AT(c, 0xf1a1u);
    if (x86_cc(c, 4)) { goto L_f1e2; }
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
L_f1e2:
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf197u, "ran off the end of a function");
}
void f_0000f19f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f19f  test ecx, ecx
    X86_AT(c, 0xf19fu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00f1a1  je 0xf1e2
    X86_AT(c, 0xf1a1u);
    if (x86_cc(c, 4)) { goto L_f1e2; }
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
L_f1e2:
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf19fu, "ran off the end of a function");
}
void f_0000f1a1(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f1a1  je 0xf1e2
    X86_AT(c, 0xf1a1u);
    if (x86_cc(c, 4)) { goto L_f1e2; }
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
L_f1e2:
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1a1u, "ran off the end of a function");
}
void f_0000f1a3(X86Cpu& c) {
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1a3u, "ran off the end of a function");
}
void f_0000f1a4(X86Cpu& c) {
    goto L_f1a4;
L_f1a3:
    X86_TICK(c, 7);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
L_f1a4:
    X86_TICK(c, 7);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1a4u, "ran off the end of a function");
}
void f_0000f1a6(X86Cpu& c) {
    goto L_f1a6;
L_f1a3:
    X86_TICK(c, 9);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
L_f1a6:
    X86_TICK(c, 5);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1a6u, "ran off the end of a function");
}
void f_0000f1a8(X86Cpu& c) {
    goto L_f1a8;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
L_f1a8:
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1a8u, "ran off the end of a function");
}
void f_0000f1aa(X86Cpu& c) {
    goto L_f1aa;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 2);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
L_f1aa:
    X86_TICK(c, 5);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1aau, "ran off the end of a function");
}
void f_0000f1ac(X86Cpu& c) {
    goto L_f1ac;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
L_f1ac:
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1acu, "ran off the end of a function");
}
void f_0000f1ae(X86Cpu& c) {
    goto L_f1ae;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 2);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
L_f1ae:
    X86_TICK(c, 5);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1aeu, "ran off the end of a function");
}
void f_0000f1b0(X86Cpu& c) {
    goto L_f1b0;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
L_f1b0:
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1b0u, "ran off the end of a function");
}
}

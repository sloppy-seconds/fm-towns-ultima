#include "p_game_funcs.h"
namespace p_game {
void f_000c95ec(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0c95ec  push ebp
    X86_AT(c, 0xc95ecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c95ed  mov ebp, esp
    X86_AT(c, 0xc95edu);
    c.r[5] = c.r[4];
    // 0c95ef  push edi
    X86_AT(c, 0xc95efu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c95f0  mov edi, dword ptr [ebp + 0x18]
    X86_AT(c, 0xc95f0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0c95f3  push 0
    X86_AT(c, 0xc95f3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c95f5  call 0xc8f2c
    X86_AT(c, 0xc95f5u);
    push32(c, 0xc95fau); x86_call_known(c, 0xc8f2cu, f_000c8f2c); X86_RET(c, 0xc95fau);
    X86_TICK(c, 9);
    // 0c95fa  push edi
    X86_AT(c, 0xc95fau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c95fb  call 0xc8dd4
    X86_AT(c, 0xc95fbu);
    push32(c, 0xc9600u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc9600u);
    X86_TICK(c, 9);
    // 0c9600  push edi
    X86_AT(c, 0xc9600u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9601  call 0xc8e04
    X86_AT(c, 0xc9601u);
    push32(c, 0xc9606u); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xc9606u);
    X86_TICK(c, 35);
    // 0c9606  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xc9606u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0c960a  mov word ptr [0x4c5d8], ax
    X86_AT(c, 0xc960au);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), (c.r[0] & 0xFFFFu));
    // 0c9610  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xc9610u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0c9614  mov word ptr [0x4c5da], ax
    X86_AT(c, 0xc9614u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[0] & 0xFFFFu));
    // 0c961a  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xc961au);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0c961e  mov word ptr [0x4c5dc], ax
    X86_AT(c, 0xc961eu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), (c.r[0] & 0xFFFFu));
    // 0c9624  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xc9624u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0c9628  mov word ptr [0x4c5de], ax
    X86_AT(c, 0xc9628u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[0] & 0xFFFFu));
    // 0c962e  push 0x4c5d8
    X86_AT(c, 0xc962eu);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c9633  push 0x4bfd8
    X86_AT(c, 0xc9633u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9638  call 0x8bd
    X86_AT(c, 0xc9638u);
    push32(c, 0xc963du); x86_call_known(c, 0x8bdu, f_000008bd); X86_RET(c, 0xc963du);
    X86_TICK(c, 15);
    // 0c963d  movsx eax, word ptr [0x4c6dc]
    X86_AT(c, 0xc963du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4C6DCu)));
    // 0c9644  push eax
    X86_AT(c, 0xc9644u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9645  call 0xc8f2c
    X86_AT(c, 0xc9645u);
    push32(c, 0xc964au); x86_call_known(c, 0xc8f2cu, f_000c8f2c); X86_RET(c, 0xc964au);
    X86_TICK(c, 17);
    // 0c964a  movsx eax, word ptr [0x4c6de]
    X86_AT(c, 0xc964au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4C6DEu)));
    // 0c9651  push eax
    X86_AT(c, 0xc9651u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9652  push 0x4bfd8
    X86_AT(c, 0xc9652u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9657  call 0x2c5
    X86_AT(c, 0xc9657u);
    push32(c, 0xc965cu); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xc965cu);
    X86_TICK(c, 22);
    // 0c965c  add esp, 0x20
    X86_AT(c, 0xc965cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c965f  pop edi
    X86_AT(c, 0xc965fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9660  leave 
    X86_AT(c, 0xc9660u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9661  ret 
    X86_AT(c, 0xc9661u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc95ecu, "ran off the end of a function");
}
void f_000c9664(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0c9664  push ebp
    X86_AT(c, 0xc9664u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9665  mov ebp, esp
    X86_AT(c, 0xc9665u);
    c.r[5] = c.r[4];
    // 0c9667  sub esp, 0x24
    X86_AT(c, 0xc9667u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 0c966a  push ebx
    X86_AT(c, 0xc966au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c966b  push esi
    X86_AT(c, 0xc966bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c966c  push edi
    X86_AT(c, 0xc966cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c966d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc966du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c9670  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc9670u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c9673  mov ebx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc9673u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c9676  push 9
    X86_AT(c, 0xc9676u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c9678  call 0xc8dd4
    X86_AT(c, 0xc9678u);
    push32(c, 0xc967du); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc967du);
    X86_TICK(c, 9);
    // 0c967d  push 9
    X86_AT(c, 0xc967du);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c967f  call 0xc8e04
    X86_AT(c, 0xc967fu);
    push32(c, 0xc9684u); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xc9684u);
    X86_TICK(c, 29);
    // 0c9684  lea eax, [ebx + esi*1]
    X86_AT(c, 0xc9684u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 0c9687  dec eax
    X86_AT(c, 0xc9687u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c9688  push eax
    X86_AT(c, 0xc9688u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9689  mov eax, edi
    X86_AT(c, 0xc9689u);
    c.r[0] = c.r[7];
    // 0c968b  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc968bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0c968e  dec eax
    X86_AT(c, 0xc968eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c968f  push eax
    X86_AT(c, 0xc968fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9690  push esi
    X86_AT(c, 0xc9690u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c9691  push edi
    X86_AT(c, 0xc9691u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9692  call 0xc9588
    X86_AT(c, 0xc9692u);
    push32(c, 0xc9697u); x86_call_known(c, 0xc9588u, f_000c9588); X86_RET(c, 0xc9697u);
    X86_TICK(c, 12);
    // 0c9697  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xc9697u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0c969a  call 0xc8dd4
    X86_AT(c, 0xc969au);
    push32(c, 0xc969fu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc969fu);
    X86_TICK(c, 12);
    // 0c969f  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xc969fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0c96a2  call 0xc8e04
    X86_AT(c, 0xc96a2u);
    push32(c, 0xc96a7u); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xc96a7u);
    X86_TICK(c, 20);
    // 0c96a7  mov ax, word ptr [0x4c6de]
    X86_AT(c, 0xc96a7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4C6DEu))));
    // 0c96ad  or al, 0x20
    X86_AT(c, 0xc96adu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 0c96af  movsx eax, ax
    X86_AT(c, 0xc96afu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0c96b2  push eax
    X86_AT(c, 0xc96b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c96b3  push 0x4bfd8
    X86_AT(c, 0xc96b3u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c96b8  call 0x2c5
    X86_AT(c, 0xc96b8u);
    push32(c, 0xc96bdu); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xc96bdu);
    X86_TICK(c, 31);
    // 0c96bd  lea eax, [edi + 0xf]
    X86_AT(c, 0xc96bdu);
    c.r[0] = (uint32_t)(c.r[7] + 0xFu);
    // 0c96c0  mov word ptr [0x4c5d8], ax
    X86_AT(c, 0xc96c0u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), (c.r[0] & 0xFFFFu));
    // 0c96c6  lea eax, [esi + 0x10]
    X86_AT(c, 0xc96c6u);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 0c96c9  mov word ptr [0x4c5da], ax
    X86_AT(c, 0xc96c9u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[0] & 0xFFFFu));
    // 0c96cf  mov ax, 0xfff0
    X86_AT(c, 0xc96cfu);
    s16(c, 0, 0xFFF0u);
    // 0c96d3  mov word ptr [0x4c5dc], ax
    X86_AT(c, 0xc96d3u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), (c.r[0] & 0xFFFFu));
    // 0c96d9  mov word ptr [0x4c5de], ax
    X86_AT(c, 0xc96d9u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[0] & 0xFFFFu));
    // 0c96df  mov word ptr [0x4c5e0], ax
    X86_AT(c, 0xc96dfu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), (c.r[0] & 0xFFFFu));
    // 0c96e5  mov word ptr [0x4c5e2], ax
    X86_AT(c, 0xc96e5u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E2u)), (c.r[0] & 0xFFFFu));
    // 0c96eb  mov word ptr [0x4c5e4], 0x10
    X86_AT(c, 0xc96ebu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E4u)), 0x10u);
    // 0c96f4  push 0x4c5d8
    X86_AT(c, 0xc96f4u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c96f9  push 0x4bfd8
    X86_AT(c, 0xc96f9u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c96fe  call 0x929
    X86_AT(c, 0xc96feu);
    push32(c, 0xc9703u); x86_call_known(c, 0x929u, f_00000929); X86_RET(c, 0xc9703u);
    X86_TICK(c, 9);
    // 0c9703  push 0xf
    X86_AT(c, 0xc9703u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c9705  call 0xc8dd4
    X86_AT(c, 0xc9705u);
    push32(c, 0xc970au); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc970au);
    X86_TICK(c, 11);
    // 0c970a  push 0x4c5d8
    X86_AT(c, 0xc970au);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c970f  push 0x4bfd8
    X86_AT(c, 0xc970fu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9714  call 0x905
    X86_AT(c, 0xc9714u);
    push32(c, 0xc9719u); x86_call_known(c, 0x905u, f_00000905); X86_RET(c, 0xc9719u);
    X86_TICK(c, 14);
    // 0c9719  add esp, 0x3c
    X86_AT(c, 0xc9719u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c971c  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xc971cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0c971f  call 0xc8dd4
    X86_AT(c, 0xc971fu);
    push32(c, 0xc9724u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc9724u);
    X86_TICK(c, 43);
    // 0c9724  mov eax, edi
    X86_AT(c, 0xc9724u);
    c.r[0] = c.r[7];
    // 0c9726  mov word ptr [ebp - 4], ax
    X86_AT(c, 0xc9726u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 0c972a  add ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xc972au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 2)); }
    // 0c972e  sub ax, 0x10
    X86_AT(c, 0xc972eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x10u, 0, 2)); }
    // 0c9732  mov word ptr [0x4c5d8], ax
    X86_AT(c, 0xc9732u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), (c.r[0] & 0xFFFFu));
    // 0c9738  mov edx, esi
    X86_AT(c, 0xc9738u);
    c.r[2] = c.r[6];
    // 0c973a  mov word ptr [ebp - 8], dx
    X86_AT(c, 0xc973au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 0c973e  add dx, 0x10
    X86_AT(c, 0xc973eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x10u, 0, 2)); }
    // 0c9742  mov word ptr [0x4c5da], dx
    X86_AT(c, 0xc9742u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[2] & 0xFFFFu));
    // 0c9749  mov word ptr [0x4c5dc], 0
    X86_AT(c, 0xc9749u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x0u);
    // 0c9752  mov word ptr [0x4c5de], 0xfff0
    X86_AT(c, 0xc9752u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), 0xFFF0u);
    // 0c975b  mov word ptr [0x4c5e0], 0x10
    X86_AT(c, 0xc975bu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), 0x10u);
    // 0c9764  mov word ptr [0x4c5e2], 0
    X86_AT(c, 0xc9764u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E2u)), 0x0u);
    // 0c976d  push 0x4c5d8
    X86_AT(c, 0xc976du);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c9772  push 0x4bfd8
    X86_AT(c, 0xc9772u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9777  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0xc9777u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 0c977b  call 0x929
    X86_AT(c, 0xc977bu);
    push32(c, 0xc9780u); x86_call_known(c, 0x929u, f_00000929); X86_RET(c, 0xc9780u);
    X86_TICK(c, 9);
    // 0c9780  push 0xf
    X86_AT(c, 0xc9780u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c9782  call 0xc8dd4
    X86_AT(c, 0xc9782u);
    push32(c, 0xc9787u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc9787u);
    X86_TICK(c, 11);
    // 0c9787  push 0x4c5d8
    X86_AT(c, 0xc9787u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c978c  push 0x4bfd8
    X86_AT(c, 0xc978cu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9791  call 0x905
    X86_AT(c, 0xc9791u);
    push32(c, 0xc9796u); x86_call_known(c, 0x905u, f_00000905); X86_RET(c, 0xc9796u);
    X86_TICK(c, 12);
    // 0c9796  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xc9796u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0c9799  call 0xc8dd4
    X86_AT(c, 0xc9799u);
    push32(c, 0xc979eu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc979eu);
    X86_TICK(c, 41);
    // 0c979e  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0xc979eu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0c97a2  mov word ptr [0x4c5d8], ax
    X86_AT(c, 0xc97a2u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), (c.r[0] & 0xFFFFu));
    // 0c97a8  mov eax, ebx
    X86_AT(c, 0xc97a8u);
    c.r[0] = c.r[3];
    // 0c97aa  add ax, word ptr [ebp - 8]
    X86_AT(c, 0xc97aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 0c97ae  sub ax, 0x11
    X86_AT(c, 0xc97aeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x11u, 0, 2)); }
    // 0c97b2  mov word ptr [0x4c5da], ax
    X86_AT(c, 0xc97b2u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[0] & 0xFFFFu));
    // 0c97b8  mov word ptr [0x4c5da], ax
    X86_AT(c, 0xc97b8u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[0] & 0xFFFFu));
    // 0c97be  mov word ptr [0x4c5dc], 0x10
    X86_AT(c, 0xc97beu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x10u);
    // 0c97c7  mov word ptr [0x4c5de], 0
    X86_AT(c, 0xc97c7u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), 0x0u);
    // 0c97d0  mov word ptr [0x4c5e0], 0
    X86_AT(c, 0xc97d0u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), 0x0u);
    // 0c97d9  mov word ptr [0x4c5e2], 0x10
    X86_AT(c, 0xc97d9u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E2u)), 0x10u);
    // 0c97e2  push 0x4c5d8
    X86_AT(c, 0xc97e2u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c97e7  push 0x4bfd8
    X86_AT(c, 0xc97e7u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c97ec  mov word ptr [ebp - 0x10], ax
    X86_AT(c, 0xc97ecu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[0] & 0xFFFFu));
    // 0c97f0  call 0x929
    X86_AT(c, 0xc97f0u);
    push32(c, 0xc97f5u); x86_call_known(c, 0x929u, f_00000929); X86_RET(c, 0xc97f5u);
    X86_TICK(c, 9);
    // 0c97f5  push 0xf
    X86_AT(c, 0xc97f5u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c97f7  call 0xc8dd4
    X86_AT(c, 0xc97f7u);
    push32(c, 0xc97fcu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc97fcu);
    X86_TICK(c, 11);
    // 0c97fc  push 0x4c5d8
    X86_AT(c, 0xc97fcu);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c9801  push 0x4bfd8
    X86_AT(c, 0xc9801u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9806  call 0x905
    X86_AT(c, 0xc9806u);
    push32(c, 0xc980bu); x86_call_known(c, 0x905u, f_00000905); X86_RET(c, 0xc980bu);
    X86_TICK(c, 12);
    // 0c980b  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xc980bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0c980e  call 0xc8dd4
    X86_AT(c, 0xc980eu);
    push32(c, 0xc9813u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc9813u);
    X86_TICK(c, 35);
    // 0c9813  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0xc9813u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 0c9817  add ax, 0xf
    X86_AT(c, 0xc9817u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xFu, 0, 2)); }
    // 0c981b  mov word ptr [0x4c5d8], ax
    X86_AT(c, 0xc981bu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), (c.r[0] & 0xFFFFu));
    // 0c9821  mov ax, word ptr [ebp - 0x10]
    X86_AT(c, 0xc9821u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))));
    // 0c9825  mov word ptr [0x4c5da], ax
    X86_AT(c, 0xc9825u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[0] & 0xFFFFu));
    // 0c982b  mov word ptr [0x4c5dc], 0
    X86_AT(c, 0xc982bu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x0u);
    // 0c9834  mov word ptr [0x4c5de], 0x10
    X86_AT(c, 0xc9834u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), 0x10u);
    // 0c983d  add esp, 0x34
    X86_AT(c, 0xc983du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0c9840  mov word ptr [0x4c5e0], 0xfff0
    X86_AT(c, 0xc9840u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), 0xFFF0u);
    // 0c9849  mov word ptr [0x4c5e2], 0
    X86_AT(c, 0xc9849u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E2u)), 0x0u);
    // 0c9852  push 0x4c5d8
    X86_AT(c, 0xc9852u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c9857  push 0x4bfd8
    X86_AT(c, 0xc9857u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c985c  call 0x929
    X86_AT(c, 0xc985cu);
    push32(c, 0xc9861u); x86_call_known(c, 0x929u, f_00000929); X86_RET(c, 0xc9861u);
    X86_TICK(c, 9);
    // 0c9861  push 0xf
    X86_AT(c, 0xc9861u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c9863  call 0xc8dd4
    X86_AT(c, 0xc9863u);
    push32(c, 0xc9868u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc9868u);
    X86_TICK(c, 11);
    // 0c9868  push 0x4c5d8
    X86_AT(c, 0xc9868u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c986d  push 0x4bfd8
    X86_AT(c, 0xc986du);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9872  call 0x905
    X86_AT(c, 0xc9872u);
    push32(c, 0xc9877u); x86_call_known(c, 0x905u, f_00000905); X86_RET(c, 0xc9877u);
    X86_TICK(c, 12);
    // 0c9877  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xc9877u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0c987a  call 0xc8dd4
    X86_AT(c, 0xc987au);
    push32(c, 0xc987fu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc987fu);
    X86_TICK(c, 35);
    // 0c987f  lea eax, [esi + 0xf]
    X86_AT(c, 0xc987fu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFu);
    // 0c9882  push eax
    X86_AT(c, 0xc9882u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9883  mov eax, edi
    X86_AT(c, 0xc9883u);
    c.r[0] = c.r[7];
    // 0c9885  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc9885u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0c9888  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc9888u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c988b  sub eax, 0x11
    X86_AT(c, 0xc988bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 0c988e  push eax
    X86_AT(c, 0xc988eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c988f  push esi
    X86_AT(c, 0xc988fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c9890  lea edx, [edi + 0x10]
    X86_AT(c, 0xc9890u);
    c.r[2] = (uint32_t)(c.r[7] + 0x10u);
    // 0c9893  push edx
    X86_AT(c, 0xc9893u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c9894  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc9894u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c9897  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xc9897u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0c989a  call 0xc9588
    X86_AT(c, 0xc989au);
    push32(c, 0xc989fu); x86_call_known(c, 0xc9588u, f_000c9588); X86_RET(c, 0xc989fu);
    X86_TICK(c, 33);
    // 0c989f  lea eax, [ebx + esi*1]
    X86_AT(c, 0xc989fu);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 0c98a2  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xc98a2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0c98a5  sub eax, 0x11
    X86_AT(c, 0xc98a5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 0c98a8  push eax
    X86_AT(c, 0xc98a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c98a9  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xc98a9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c98ac  dec edx
    X86_AT(c, 0xc98acu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c98ad  push edx
    X86_AT(c, 0xc98adu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c98ae  lea ecx, [esi + 0x10]
    X86_AT(c, 0xc98aeu);
    c.r[1] = (uint32_t)(c.r[6] + 0x10u);
    // 0c98b1  push ecx
    X86_AT(c, 0xc98b1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c98b2  push edi
    X86_AT(c, 0xc98b2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c98b3  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xc98b3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0c98b6  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0xc98b6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 0c98b9  call 0xc9588
    X86_AT(c, 0xc98b9u);
    push32(c, 0xc98beu); x86_call_known(c, 0xc9588u, f_000c9588); X86_RET(c, 0xc98beu);
    X86_TICK(c, 32);
    // 0c98be  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc98beu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0c98c1  dec eax
    X86_AT(c, 0xc98c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c98c2  push eax
    X86_AT(c, 0xc98c2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c98c3  push dword ptr [ebp - 8]
    X86_AT(c, 0xc98c3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c98c6  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xc98c6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0c98c9  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc98c9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c98cc  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc98ccu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c98cf  call 0xc9588
    X86_AT(c, 0xc98cfu);
    push32(c, 0xc98d4u); x86_call_known(c, 0xc9588u, f_000c9588); X86_RET(c, 0xc98d4u);
    X86_TICK(c, 11);
    // 0c98d4  add esp, 0x48
    X86_AT(c, 0xc98d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0c98d7  push 0xf
    X86_AT(c, 0xc98d7u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c98d9  call 0xc8dd4
    X86_AT(c, 0xc98d9u);
    push32(c, 0xc98deu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc98deu);
    X86_TICK(c, 21);
    // 0c98de  push esi
    X86_AT(c, 0xc98deu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c98df  push dword ptr [ebp - 8]
    X86_AT(c, 0xc98dfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c98e2  push esi
    X86_AT(c, 0xc98e2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c98e3  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc98e3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c98e6  call 0xc9468
    X86_AT(c, 0xc98e6u);
    push32(c, 0xc98ebu); x86_call_known(c, 0xc9468u, f_000c9468); X86_RET(c, 0xc98ebu);
    X86_TICK(c, 33);
    // 0c98eb  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc98ebu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0c98ee  sub eax, 0xe
    X86_AT(c, 0xc98eeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xEu, 0, 4); }
    // 0c98f1  push eax
    X86_AT(c, 0xc98f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c98f2  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xc98f2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0c98f5  lea edx, [esi + 0xd]
    X86_AT(c, 0xc98f5u);
    c.r[2] = (uint32_t)(c.r[6] + 0xDu);
    // 0c98f8  push edx
    X86_AT(c, 0xc98f8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c98f9  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xc98f9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0c98fc  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xc98fcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 0c98ff  mov dword ptr [ebp - 0x24], edx
    X86_AT(c, 0xc98ffu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[2]);
    // 0c9902  call 0xc9468
    X86_AT(c, 0xc9902u);
    push32(c, 0xc9907u); x86_call_known(c, 0xc9468u, f_000c9468); X86_RET(c, 0xc9907u);
    X86_TICK(c, 27);
    // 0c9907  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc9907u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c990a  push dword ptr [ebp - 8]
    X86_AT(c, 0xc990au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c990d  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc990du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c9910  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc9910u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c9913  call 0xc9468
    X86_AT(c, 0xc9913u);
    push32(c, 0xc9918u); x86_call_known(c, 0xc9468u, f_000c9468); X86_RET(c, 0xc9918u);
    X86_TICK(c, 21);
    // 0c9918  push dword ptr [ebp - 0x20]
    X86_AT(c, 0xc9918u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 0c991b  push edi
    X86_AT(c, 0xc991bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c991c  push dword ptr [ebp - 0x24]
    X86_AT(c, 0xc991cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))); push32(c, v); }
    // 0c991f  push edi
    X86_AT(c, 0xc991fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9920  call 0xc9468
    X86_AT(c, 0xc9920u);
    push32(c, 0xc9925u); x86_call_known(c, 0xc9468u, f_000c9468); X86_RET(c, 0xc9925u);
    X86_TICK(c, 14);
    // 0c9925  add esp, 0x44
    X86_AT(c, 0xc9925u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0c9928  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0xc9928u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 0c992c  je 0xc9932
    X86_AT(c, 0xc992cu);
    if (x86_cc(c, 4)) { goto L_c9932; }
    X86_TICK(c, 9);
    // 0c992e  push 0xf
    X86_AT(c, 0xc992eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c9930  jmp 0xc9934
    X86_AT(c, 0xc9930u);
    goto L_c9934;
L_c9932:
    X86_TICK(c, 2);
    // 0c9932  push 0
    X86_AT(c, 0xc9932u);
    { uint32_t v = 0x0u; push32(c, v); }
L_c9934:
    X86_TICK(c, 7);
    // 0c9934  call 0xc8dd4
    X86_AT(c, 0xc9934u);
    push32(c, 0xc9939u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc9939u);
    X86_TICK(c, 11);
    // 0c9939  add esp, 4
    X86_AT(c, 0xc9939u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c993c  push 0
    X86_AT(c, 0xc993cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c993e  call 0xc8e04
    X86_AT(c, 0xc993eu);
    push32(c, 0xc9943u); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xc9943u);
    X86_TICK(c, 15);
    // 0c9943  push 0x18e
    X86_AT(c, 0xc9943u);
    { uint32_t v = 0x18Eu; push32(c, v); }
    // 0c9948  push 0x169
    X86_AT(c, 0xc9948u);
    { uint32_t v = 0x169u; push32(c, v); }
    // 0c994d  push 0x2f
    X86_AT(c, 0xc994du);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0c994f  push 0xa
    X86_AT(c, 0xc994fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c9951  call 0xc9588
    X86_AT(c, 0xc9951u);
    push32(c, 0xc9956u); x86_call_known(c, 0xc9588u, f_000c9588); X86_RET(c, 0xc9956u);
    X86_TICK(c, 9);
    // 0c9956  push 0xf
    X86_AT(c, 0xc9956u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c9958  call 0xc8dd4
    X86_AT(c, 0xc9958u);
    push32(c, 0xc995du); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc995du);
    X86_TICK(c, 17);
    // 0c995d  movsx eax, word ptr [0x4c6de]
    X86_AT(c, 0xc995du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4C6DEu)));
    // 0c9964  push eax
    X86_AT(c, 0xc9964u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9965  push 0x4bfd8
    X86_AT(c, 0xc9965u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c996a  call 0x2c5
    X86_AT(c, 0xc996au);
    push32(c, 0xc996fu); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xc996fu);
    X86_TICK(c, 30);
    // 0c996f  add esp, 0x20
    X86_AT(c, 0xc996fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c9972  pop edi
    X86_AT(c, 0xc9972u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9973  pop esi
    X86_AT(c, 0xc9973u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c9974  pop ebx
    X86_AT(c, 0xc9974u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c9975  leave 
    X86_AT(c, 0xc9975u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9976  ret 
    X86_AT(c, 0xc9976u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9664u, "ran off the end of a function");
}
void f_000c99ec(X86Cpu& c) {
    X86_TICK(c, 69);
    // 0c99ec  push ebp
    X86_AT(c, 0xc99ecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c99ed  mov ebp, esp
    X86_AT(c, 0xc99edu);
    c.r[5] = c.r[4];
    // 0c99ef  push esi
    X86_AT(c, 0xc99efu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c99f0  push edi
    X86_AT(c, 0xc99f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c99f1  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc99f1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c99f4  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc99f4u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c99f7  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc99f7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c99fa  mov dword ptr [0x4c5d8], eax
    X86_AT(c, 0xc99fau);
    wr32((c.sbase[3] + (uint32_t)(0x4C5D8u)), c.r[0]);
    // 0c99ff  mov word ptr [0x4c5dc], 0x14
    X86_AT(c, 0xc99ffu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x14u);
    // 0c9a08  mov eax, edi
    X86_AT(c, 0xc9a08u);
    c.r[0] = c.r[7];
    // 0c9a0a  mov word ptr [0x4c5de], ax
    X86_AT(c, 0xc9a0au);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[0] & 0xFFFFu));
    // 0c9a10  mov eax, esi
    X86_AT(c, 0xc9a10u);
    c.r[0] = c.r[6];
    // 0c9a12  mov word ptr [0x4c5e0], ax
    X86_AT(c, 0xc9a12u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), (c.r[0] & 0xFFFFu));
    // 0c9a18  mov eax, edi
    X86_AT(c, 0xc9a18u);
    c.r[0] = c.r[7];
    // 0c9a1a  add ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xc9a1au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 2)); }
    // 0c9a1e  dec eax
    X86_AT(c, 0xc9a1eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c9a1f  mov word ptr [0x4c5e2], ax
    X86_AT(c, 0xc9a1fu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E2u)), (c.r[0] & 0xFFFFu));
    // 0c9a25  mov eax, esi
    X86_AT(c, 0xc9a25u);
    c.r[0] = c.r[6];
    // 0c9a27  add ax, word ptr [ebp + 0x18]
    X86_AT(c, 0xc9a27u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 2)); }
    // 0c9a2b  dec eax
    X86_AT(c, 0xc9a2bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c9a2c  mov word ptr [0x4c5e4], ax
    X86_AT(c, 0xc9a2cu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E4u)), (c.r[0] & 0xFFFFu));
    // 0c9a32  push 0x4c5d8
    X86_AT(c, 0xc9a32u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c9a37  push 0
    X86_AT(c, 0xc9a37u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c9a39  push 0x4bfd8
    X86_AT(c, 0xc9a39u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9a3e  call 0x5c4
    X86_AT(c, 0xc9a3eu);
    push32(c, 0xc9a43u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xc9a43u);
    X86_TICK(c, 26);
    // 0c9a43  add esp, 0xc
    X86_AT(c, 0xc9a43u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c9a46  pop edi
    X86_AT(c, 0xc9a46u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9a47  pop esi
    X86_AT(c, 0xc9a47u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c9a48  leave 
    X86_AT(c, 0xc9a48u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9a49  ret 
    X86_AT(c, 0xc9a49u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc99ecu, "ran off the end of a function");
}
void f_000c9a4c(X86Cpu& c) {
    X86_TICK(c, 62);
    // 0c9a4c  push ebp
    X86_AT(c, 0xc9a4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9a4d  mov ebp, esp
    X86_AT(c, 0xc9a4du);
    c.r[5] = c.r[4];
    // 0c9a4f  push esi
    X86_AT(c, 0xc9a4fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c9a50  push edi
    X86_AT(c, 0xc9a50u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9a51  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc9a51u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c9a54  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc9a54u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c9a57  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc9a57u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c9a5a  shl eax, 9
    X86_AT(c, 0xc9a5au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0c9a5d  add eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc9a5du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0c9a60  mov dword ptr [0x4c5d8], eax
    X86_AT(c, 0xc9a60u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5D8u)), c.r[0]);
    // 0c9a65  mov word ptr [0x4c5dc], 0x14
    X86_AT(c, 0xc9a65u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x14u);
    // 0c9a6e  mov eax, edi
    X86_AT(c, 0xc9a6eu);
    c.r[0] = c.r[7];
    // 0c9a70  mov word ptr [0x4c5de], ax
    X86_AT(c, 0xc9a70u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[0] & 0xFFFFu));
    // 0c9a76  mov eax, esi
    X86_AT(c, 0xc9a76u);
    c.r[0] = c.r[6];
    // 0c9a78  mov word ptr [0x4c5e0], ax
    X86_AT(c, 0xc9a78u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), (c.r[0] & 0xFFFFu));
    // 0c9a7e  lea eax, [edi + 0x1f]
    X86_AT(c, 0xc9a7eu);
    c.r[0] = (uint32_t)(c.r[7] + 0x1Fu);
    // 0c9a81  mov word ptr [0x4c5e2], ax
    X86_AT(c, 0xc9a81u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E2u)), (c.r[0] & 0xFFFFu));
    // 0c9a87  lea eax, [esi + 0x1f]
    X86_AT(c, 0xc9a87u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1Fu);
    // 0c9a8a  mov word ptr [0x4c5e4], ax
    X86_AT(c, 0xc9a8au);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E4u)), (c.r[0] & 0xFFFFu));
    // 0c9a90  push 0x4c5d8
    X86_AT(c, 0xc9a90u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c9a95  push 0
    X86_AT(c, 0xc9a95u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c9a97  push 0x4bfd8
    X86_AT(c, 0xc9a97u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9a9c  call 0x5c4
    X86_AT(c, 0xc9a9cu);
    push32(c, 0xc9aa1u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xc9aa1u);
    X86_TICK(c, 26);
    // 0c9aa1  add esp, 0xc
    X86_AT(c, 0xc9aa1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c9aa4  pop edi
    X86_AT(c, 0xc9aa4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9aa5  pop esi
    X86_AT(c, 0xc9aa5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c9aa6  leave 
    X86_AT(c, 0xc9aa6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9aa7  ret 
    X86_AT(c, 0xc9aa7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9a4cu, "ran off the end of a function");
}
void f_000c9b60(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0c9b60  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xc9b60u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0c9b64  mov eax, dword ptr [ecx + 0x1e]
    X86_AT(c, 0xc9b64u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Eu)));
    // 0c9b67  mov edx, dword ptr [esp + 8]
    X86_AT(c, 0xc9b67u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0c9b6b  mov dword ptr [edx], eax
    X86_AT(c, 0xc9b6bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0c9b6d  mov eax, dword ptr [ecx + 0x2a]
    X86_AT(c, 0xc9b6du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x2Au)));
    // 0c9b70  mov edx, dword ptr [esp + 0xc]
    X86_AT(c, 0xc9b70u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0c9b74  mov dword ptr [edx], eax
    X86_AT(c, 0xc9b74u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0c9b76  ret 
    X86_AT(c, 0xc9b76u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9b60u, "ran off the end of a function");
}
void f_000c9b90(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0c9b90  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xc9b90u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0c9b94  movsx eax, word ptr [eax + 0x36]
    X86_AT(c, 0xc9b94u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x36u)));
    // 0c9b98  ret 
    X86_AT(c, 0xc9b98u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9b90u, "ran off the end of a function");
}
void f_000c9b9c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0c9b9c  push ebp
    X86_AT(c, 0xc9b9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9b9d  mov ebp, esp
    X86_AT(c, 0xc9b9du);
    c.r[5] = c.r[4];
    // 0c9b9f  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xc9b9fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0c9ba2  push 2
    X86_AT(c, 0xc9ba2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c9ba4  push 0x100
    X86_AT(c, 0xc9ba4u);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0c9ba9  push dword ptr [ebp + 8]
    X86_AT(c, 0xc9ba9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c9bac  call 0xe6b28
    X86_AT(c, 0xc9bacu);
    push32(c, 0xc9bb1u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc9bb1u);
    X86_TICK(c, 9);
    // 0c9bb1  add esp, 0x10
    X86_AT(c, 0xc9bb1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c9bb4  cmp eax, 2
    X86_AT(c, 0xc9bb4u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0c9bb7  jge 0xc9bc0
    X86_AT(c, 0xc9bb7u);
    if (x86_cc(c, 13)) { goto L_c9bc0; }
    X86_TICK(c, 9);
    // 0c9bb9  mov eax, 0xffffffff
    X86_AT(c, 0xc9bb9u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c9bbe  jmp 0xc9bc2
    X86_AT(c, 0xc9bbeu);
    goto L_c9bc2;
L_c9bc0:
    X86_TICK(c, 2);
    // 0c9bc0  sub eax, eax
    X86_AT(c, 0xc9bc0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c9bc2:
    X86_TICK(c, 16);
    // 0c9bc2  leave 
    X86_AT(c, 0xc9bc2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9bc3  ret 
    X86_AT(c, 0xc9bc3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9b9cu, "ran off the end of a function");
}
void f_000c9bc4(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0c9bc4  push ebp
    X86_AT(c, 0xc9bc4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9bc5  mov ebp, esp
    X86_AT(c, 0xc9bc5u);
    c.r[5] = c.r[4];
    // 0c9bc7  sub esp, 0x200
    X86_AT(c, 0xc9bc7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x200u, 0, 4); }
    // 0c9bcd  push ebx
    X86_AT(c, 0xc9bcdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9bce  push esi
    X86_AT(c, 0xc9bceu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c9bcf  push edi
    X86_AT(c, 0xc9bcfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9bd0  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc9bd0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c9bd3  push 0x2048
    X86_AT(c, 0xc9bd3u);
    { uint32_t v = 0x2048u; push32(c, v); }
    // 0c9bd8  push dword ptr [ebp + 8]
    X86_AT(c, 0xc9bd8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c9bdb  call 0xe6e04
    X86_AT(c, 0xc9bdbu);
    push32(c, 0xc9be0u); x86_call_known(c, 0xe6e04u, f_000e6e04); X86_RET(c, 0xc9be0u);
    X86_TICK(c, 12);
    // 0c9be0  add esp, 8
    X86_AT(c, 0xc9be0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c9be3  xchg ebx, eax
    X86_AT(c, 0xc9be3u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c9be4  and ebx, ebx
    X86_AT(c, 0xc9be4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0c9be6  jne 0xc9c06
    X86_AT(c, 0xc9be6u);
    if (x86_cc(c, 5)) { goto L_c9c06; }
    X86_TICK(c, 9);
    // 0c9be8  push 0x204c
    X86_AT(c, 0xc9be8u);
    { uint32_t v = 0x204Cu; push32(c, v); }
    // 0c9bed  call 0xcad60
    X86_AT(c, 0xc9bedu);
    push32(c, 0xc9bf2u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xc9bf2u);
    X86_TICK(c, 9);
    // 0c9bf2  push 0xa
    X86_AT(c, 0xc9bf2u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c9bf4  call 0xd6660
    X86_AT(c, 0xc9bf4u);
    push32(c, 0xc9bf9u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xc9bf9u);
    X86_TICK(c, 11);
    // 0c9bf9  mov eax, 0xffffffff
    X86_AT(c, 0xc9bf9u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c9bfe  add esp, 8
    X86_AT(c, 0xc9bfeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c9c01  jmp 0xc9cae
    X86_AT(c, 0xc9c01u);
    goto L_c9cae;
L_c9c06:
    X86_TICK(c, 13);
    // 0c9c06  push ebx
    X86_AT(c, 0xc9c06u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9c07  lea eax, [ebp - 0x200]
    X86_AT(c, 0xc9c07u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 0c9c0d  push eax
    X86_AT(c, 0xc9c0du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9c0e  call 0xc9b9c
    X86_AT(c, 0xc9c0eu);
    push32(c, 0xc9c13u); x86_call_known(c, 0xc9b9cu, f_000c9b9c); X86_RET(c, 0xc9c13u);
    X86_TICK(c, 9);
    // 0c9c13  add esp, 8
    X86_AT(c, 0xc9c13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c9c16  inc eax
    X86_AT(c, 0xc9c16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c9c17  jne 0xc9c20
    X86_AT(c, 0xc9c17u);
    if (x86_cc(c, 5)) { goto L_c9c20; }
    X86_TICK(c, 9);
    // 0c9c19  push 0x2078
    X86_AT(c, 0xc9c19u);
    { uint32_t v = 0x2078u; push32(c, v); }
    // 0c9c1e  jmp 0xc9c87
    X86_AT(c, 0xc9c1eu);
    goto L_c9c87;
L_c9c20:
    X86_TICK(c, 21);
    // 0c9c20  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xc9c20u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0c9c23  push dword ptr [ebp + 0x14]
    X86_AT(c, 0xc9c23u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))); push32(c, v); }
    // 0c9c26  lea eax, [ebp - 0x200]
    X86_AT(c, 0xc9c26u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 0c9c2c  push eax
    X86_AT(c, 0xc9c2cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9c2d  call 0xc9b60
    X86_AT(c, 0xc9c2du);
    push32(c, 0xc9c32u); x86_call_known(c, 0xc9b60u, f_000c9b60); X86_RET(c, 0xc9c32u);
    X86_TICK(c, 11);
    // 0c9c32  lea eax, [ebp - 0x200]
    X86_AT(c, 0xc9c32u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 0c9c38  push eax
    X86_AT(c, 0xc9c38u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9c39  call 0xc9b90
    X86_AT(c, 0xc9c39u);
    push32(c, 0xc9c3eu); x86_call_known(c, 0xc9b90u, f_000c9b90); X86_RET(c, 0xc9c3eu);
    X86_TICK(c, 21);
    // 0c9c3e  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xc9c3eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0c9c41  mov dword ptr [edx], eax
    X86_AT(c, 0xc9c41u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0c9c43  movzx eax, byte ptr [ebx + 0xe]
    X86_AT(c, 0xc9c43u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)));
    // 0c9c47  push eax
    X86_AT(c, 0xc9c47u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9c48  call 0xe83bb
    X86_AT(c, 0xc9c48u);
    push32(c, 0xc9c4du); x86_call_known(c, 0xe83bbu, f_000e83bb); X86_RET(c, 0xc9c4du);
    X86_TICK(c, 14);
    // 0c9c4d  xchg esi, eax
    X86_AT(c, 0xc9c4du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c9c4e  sub esi, 0x200
    X86_AT(c, 0xc9c4eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x200u, 0, 4); }
    // 0c9c54  add esp, 0x14
    X86_AT(c, 0xc9c54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c9c57  cmp esi, 1
    X86_AT(c, 0xc9c57u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0c9c5a  jge 0xc9c69
    X86_AT(c, 0xc9c5au);
    if (x86_cc(c, 13)) { goto L_c9c69; }
    X86_TICK(c, 9);
    // 0c9c5c  push ebx
    X86_AT(c, 0xc9c5cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9c5d  call 0xe7300
    X86_AT(c, 0xc9c5du);
    push32(c, 0xc9c62u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xc9c62u);
    X86_TICK(c, 9);
    // 0c9c62  mov eax, 0xffffffff
    X86_AT(c, 0xc9c62u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c9c67  jmp 0xc9cab
    X86_AT(c, 0xc9c67u);
    goto L_c9cab;
L_c9c69:
    X86_TICK(c, 7);
    // 0c9c69  cmp edi, esi
    X86_AT(c, 0xc9c69u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0c9c6b  jge 0xc9c6f
    X86_AT(c, 0xc9c6bu);
    if (x86_cc(c, 13)) { goto L_c9c6f; }
    X86_TICK(c, 2);
    // 0c9c6d  mov esi, edi
    X86_AT(c, 0xc9c6du);
    c.r[6] = c.r[7];
L_c9c6f:
    X86_TICK(c, 18);
    // 0c9c6f  push ebx
    X86_AT(c, 0xc9c6fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9c70  push esi
    X86_AT(c, 0xc9c70u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c9c71  push 1
    X86_AT(c, 0xc9c71u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c9c73  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xc9c73u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0c9c76  call 0xe6b28
    X86_AT(c, 0xc9c76u);
    push32(c, 0xc9c7bu); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc9c7bu);
    X86_TICK(c, 9);
    // 0c9c7b  add esp, 0x10
    X86_AT(c, 0xc9c7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c9c7e  cmp esi, eax
    X86_AT(c, 0xc9c7eu);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0c9c80  jle 0xc9ca3
    X86_AT(c, 0xc9c80u);
    if (x86_cc(c, 14)) { goto L_c9ca3; }
    X86_TICK(c, 2);
    // 0c9c82  push 0x20a0
    X86_AT(c, 0xc9c82u);
    { uint32_t v = 0x20A0u; push32(c, v); }
L_c9c87:
    X86_TICK(c, 7);
    // 0c9c87  call 0xcad60
    X86_AT(c, 0xc9c87u);
    push32(c, 0xc9c8cu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xc9c8cu);
    X86_TICK(c, 9);
    // 0c9c8c  push 0xa
    X86_AT(c, 0xc9c8cu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c9c8e  call 0xd6660
    X86_AT(c, 0xc9c8eu);
    push32(c, 0xc9c93u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xc9c93u);
    X86_TICK(c, 9);
    // 0c9c93  push ebx
    X86_AT(c, 0xc9c93u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9c94  call 0xe7300
    X86_AT(c, 0xc9c94u);
    push32(c, 0xc9c99u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xc9c99u);
    X86_TICK(c, 11);
    // 0c9c99  mov eax, 0xffffffff
    X86_AT(c, 0xc9c99u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c9c9e  add esp, 0xc
    X86_AT(c, 0xc9c9eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c9ca1  jmp 0xc9cae
    X86_AT(c, 0xc9ca1u);
    goto L_c9cae;
L_c9ca3:
    X86_TICK(c, 9);
    // 0c9ca3  push ebx
    X86_AT(c, 0xc9ca3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9ca4  call 0xe7300
    X86_AT(c, 0xc9ca4u);
    push32(c, 0xc9ca9u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xc9ca9u);
    X86_TICK(c, 2);
    // 0c9ca9  mov eax, esi
    X86_AT(c, 0xc9ca9u);
    c.r[0] = c.r[6];
L_c9cab:
    X86_TICK(c, 2);
    // 0c9cab  add esp, 4
    X86_AT(c, 0xc9cabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c9cae:
    X86_TICK(c, 28);
    // 0c9cae  pop edi
    X86_AT(c, 0xc9caeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9caf  pop esi
    X86_AT(c, 0xc9cafu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c9cb0  pop ebx
    X86_AT(c, 0xc9cb0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c9cb1  leave 
    X86_AT(c, 0xc9cb1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9cb2  ret 
    X86_AT(c, 0xc9cb2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9bc4u, "ran off the end of a function");
}
void f_000c9cb4(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0c9cb4  push ebp
    X86_AT(c, 0xc9cb4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9cb5  mov ebp, esp
    X86_AT(c, 0xc9cb5u);
    c.r[5] = c.r[4];
    // 0c9cb7  sub esp, 0x281c
    X86_AT(c, 0xc9cb7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x281Cu, 0, 4); }
    // 0c9cbd  push ebx
    X86_AT(c, 0xc9cbdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9cbe  push esi
    X86_AT(c, 0xc9cbeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c9cbf  push edi
    X86_AT(c, 0xc9cbfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9cc0  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc9cc0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c9cc3  mov dword ptr [ebp - 0x18], 0
    X86_AT(c, 0xc9cc3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x0u);
    // 0c9cca  push 0x20c0
    X86_AT(c, 0xc9ccau);
    { uint32_t v = 0x20C0u; push32(c, v); }
    // 0c9ccf  push dword ptr [ebp + 8]
    X86_AT(c, 0xc9ccfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c9cd2  call 0xe6e04
    X86_AT(c, 0xc9cd2u);
    push32(c, 0xc9cd7u); x86_call_known(c, 0xe6e04u, f_000e6e04); X86_RET(c, 0xc9cd7u);
    X86_TICK(c, 11);
    // 0c9cd7  add esp, 8
    X86_AT(c, 0xc9cd7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c9cda  mov dword ptr [ebp - 0x281c], eax
    X86_AT(c, 0xc9cdau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)), c.r[0]);
    // 0c9ce0  and eax, eax
    X86_AT(c, 0xc9ce0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c9ce2  je 0xc9fad
    X86_AT(c, 0xc9ce2u);
    if (x86_cc(c, 4)) { goto L_c9fad; }
    X86_TICK(c, 16);
    // 0c9ce8  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xc9ce8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0c9cee  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xc9ceeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0c9cf4  push eax
    X86_AT(c, 0xc9cf4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9cf5  call 0xc9b9c
    X86_AT(c, 0xc9cf5u);
    push32(c, 0xc9cfau); x86_call_known(c, 0xc9b9cu, f_000c9b9c); X86_RET(c, 0xc9cfau);
    X86_TICK(c, 9);
    // 0c9cfa  add esp, 8
    X86_AT(c, 0xc9cfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c9cfd  inc eax
    X86_AT(c, 0xc9cfdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c9cfe  je 0xc9f1d
    X86_AT(c, 0xc9cfeu);
    if (x86_cc(c, 4)) { goto L_c9f1d; }
    X86_TICK(c, 19);
    // 0c9d04  lea eax, [ebp - 0xc]
    X86_AT(c, 0xc9d04u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0c9d07  push eax
    X86_AT(c, 0xc9d07u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9d08  lea ecx, [ebp - 8]
    X86_AT(c, 0xc9d08u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c9d0b  push ecx
    X86_AT(c, 0xc9d0bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c9d0c  lea edx, [ebp - 0x2818]
    X86_AT(c, 0xc9d0cu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0c9d12  push edx
    X86_AT(c, 0xc9d12u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c9d13  call 0xc9b60
    X86_AT(c, 0xc9d13u);
    push32(c, 0xc9d18u); x86_call_known(c, 0xc9b60u, f_000c9b60); X86_RET(c, 0xc9d18u);
    X86_TICK(c, 11);
    // 0c9d18  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xc9d18u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0c9d1e  push eax
    X86_AT(c, 0xc9d1eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9d1f  call 0xc9b90
    X86_AT(c, 0xc9d1fu);
    push32(c, 0xc9d24u); x86_call_known(c, 0xc9b90u, f_000c9b90); X86_RET(c, 0xc9d24u);
    X86_TICK(c, 21);
    // 0c9d24  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc9d24u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c9d27  mov eax, dword ptr [ebp - 0x281c]
    X86_AT(c, 0xc9d27u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)));
    // 0c9d2d  movzx eax, byte ptr [eax + 0xe]
    X86_AT(c, 0xc9d2du);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xEu)));
    // 0c9d31  push eax
    X86_AT(c, 0xc9d31u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9d32  call 0xe83bb
    X86_AT(c, 0xc9d32u);
    push32(c, 0xc9d37u); x86_call_known(c, 0xe83bbu, f_000e83bb); X86_RET(c, 0xc9d37u);
    X86_TICK(c, 14);
    // 0c9d37  xchg esi, eax
    X86_AT(c, 0xc9d37u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c9d38  sub esi, 0x200
    X86_AT(c, 0xc9d38u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x200u, 0, 4); }
    // 0c9d3e  add esp, 0x14
    X86_AT(c, 0xc9d3eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c9d41  cmp esi, 1
    X86_AT(c, 0xc9d41u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0c9d44  jl 0xc9f1d
    X86_AT(c, 0xc9d44u);
    if (x86_cc(c, 12)) { goto L_c9f1d; }
    X86_TICK(c, 12);
    // 0c9d4a  cmp dword ptr [ebp - 8], 1
    X86_AT(c, 0xc9d4au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x1u, 0, 4);
    // 0c9d4e  jl 0xc9f1d
    X86_AT(c, 0xc9d4eu);
    if (x86_cc(c, 12)) { goto L_c9f1d; }
    X86_TICK(c, 12);
    // 0c9d54  cmp dword ptr [ebp - 0xc], 1
    X86_AT(c, 0xc9d54u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x1u, 0, 4);
    // 0c9d58  jl 0xc9f1d
    X86_AT(c, 0xc9d58u);
    if (x86_cc(c, 12)) { goto L_c9f1d; }
    X86_TICK(c, 13);
    // 0c9d5e  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xc9d5eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c9d61  dec edx
    X86_AT(c, 0xc9d61u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c9d62  cmp edx, 0xf
    X86_AT(c, 0xc9d62u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0c9d65  ja 0xc9dc7
    X86_AT(c, 0xc9d65u);
    if (x86_cc(c, 7)) { goto L_c9dc7; }
    X86_TICK(c, 7);
    // 0c9d67  jmp dword ptr cs:[edx*4 + 0xc9d6f]
    X86_AT(c, 0xc9d67u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC9D6Fu)));
      switch (t) {
      case 0xc9dafu: goto L_c9daf;
      case 0xc9dbau: goto L_c9dba;
      case 0xc9dbfu: goto L_c9dbf;
      case 0xc9dc7u: goto L_c9dc7;
      default: x86_jump(c, t); return; } }
L_c9daf:
    X86_TICK(c, 20);
    // 0c9daf  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc9dafu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c9db2  inc eax
    X86_AT(c, 0xc9db2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c9db3  cdq 
    X86_AT(c, 0xc9db3u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c9db4  sub eax, edx
    X86_AT(c, 0xc9db4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0c9db6  sar eax, 1
    X86_AT(c, 0xc9db6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0c9db8  jmp 0xc9dc4
    X86_AT(c, 0xc9db8u);
    goto L_c9dc4;
L_c9dba:
    X86_TICK(c, 11);
    // 0c9dba  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc9dbau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c9dbd  jmp 0xc9dc4
    X86_AT(c, 0xc9dbdu);
    goto L_c9dc4;
L_c9dbf:
    X86_TICK(c, 6);
    // 0c9dbf  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc9dbfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c9dc2  add eax, eax
    X86_AT(c, 0xc9dc2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
L_c9dc4:
    X86_TICK(c, 2);
    // 0c9dc4  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xc9dc4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
L_c9dc7:
    X86_TICK(c, 33);
    // 0c9dc7  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc9dc7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0c9dca  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc9dcau);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 0c9dce  cmp eax, esi
    X86_AT(c, 0xc9dceu);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0c9dd0  jge 0xc9dd3
    X86_AT(c, 0xc9dd0u);
    if (x86_cc(c, 13)) { goto L_c9dd3; }
    X86_TICK(c, 3);
    // 0c9dd2  xchg esi, eax
    X86_AT(c, 0xc9dd2u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_c9dd3:
    X86_TICK(c, 33);
    // 0c9dd3  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc9dd3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0c9dd6  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc9dd6u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 0c9dda  cmp eax, esi
    X86_AT(c, 0xc9ddau);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0c9ddc  jle 0xc9dec
    X86_AT(c, 0xc9ddcu);
    if (x86_cc(c, 14)) { goto L_c9dec; }
    X86_TICK(c, 71);
    // 0c9dde  mov eax, esi
    X86_AT(c, 0xc9ddeu);
    c.r[0] = c.r[6];
    // 0c9de0  cdq 
    X86_AT(c, 0xc9de0u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c9de1  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0xc9de1u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0xc9de1u);
    // 0c9de4  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc9de4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0c9de7  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc9de7u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 0c9deb  xchg esi, eax
    X86_AT(c, 0xc9debu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_c9dec:
    X86_TICK(c, 7);
    // 0c9dec  cmp esi, 0x2800
    X86_AT(c, 0xc9decu);
    (void)x86_sub(c, c.r[6], 0x2800u, 0, 4);
    // 0c9df2  jg 0xc9e82
    X86_AT(c, 0xc9df2u);
    if (x86_cc(c, 15)) { goto L_c9e82; }
    X86_TICK(c, 22);
    // 0c9df8  mov ebx, esi
    X86_AT(c, 0xc9df8u);
    c.r[3] = c.r[6];
    // 0c9dfa  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xc9dfau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0c9e00  push 1
    X86_AT(c, 0xc9e00u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c9e02  push ebx
    X86_AT(c, 0xc9e02u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9e03  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xc9e03u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0c9e09  push eax
    X86_AT(c, 0xc9e09u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9e0a  call 0xe6b28
    X86_AT(c, 0xc9e0au);
    push32(c, 0xc9e0fu); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc9e0fu);
    X86_TICK(c, 9);
    // 0c9e0f  add esp, 0x10
    X86_AT(c, 0xc9e0fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c9e12  dec eax
    X86_AT(c, 0xc9e12u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c9e13  jge 0xc9e1c
    X86_AT(c, 0xc9e13u);
    if (x86_cc(c, 13)) { goto L_c9e1c; }
    X86_TICK(c, 2);
    // 0c9e15  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0xc9e15u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_c9e1c:
    X86_TICK(c, 51);
    // 0c9e1c  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xc9e1cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0c9e22  mov dword ptr [0x4c5d8], eax
    X86_AT(c, 0xc9e22u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5D8u)), c.r[0]);
    // 0c9e27  mov word ptr [0x4c5dc], 0x14
    X86_AT(c, 0xc9e27u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x14u);
    // 0c9e30  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xc9e30u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0c9e34  mov word ptr [0x4c5de], ax
    X86_AT(c, 0xc9e34u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[0] & 0xFFFFu));
    // 0c9e3a  mov edx, edi
    X86_AT(c, 0xc9e3au);
    c.r[2] = c.r[7];
    // 0c9e3c  mov word ptr [0x4c5e0], dx
    X86_AT(c, 0xc9e3cu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), (c.r[2] & 0xFFFFu));
    // 0c9e43  add ax, word ptr [ebp - 8]
    X86_AT(c, 0xc9e43u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 0c9e47  dec eax
    X86_AT(c, 0xc9e47u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c9e48  mov word ptr [0x4c5e2], ax
    X86_AT(c, 0xc9e48u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E2u)), (c.r[0] & 0xFFFFu));
    // 0c9e4e  mov eax, edi
    X86_AT(c, 0xc9e4eu);
    c.r[0] = c.r[7];
    // 0c9e50  add ax, word ptr [ebp - 0xc]
    X86_AT(c, 0xc9e50u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 2)); }
    // 0c9e54  dec eax
    X86_AT(c, 0xc9e54u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c9e55  mov word ptr [0x4c5e4], ax
    X86_AT(c, 0xc9e55u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E4u)), (c.r[0] & 0xFFFFu));
    // 0c9e5b  push 0x4c5d8
    X86_AT(c, 0xc9e5bu);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c9e60  push 0
    X86_AT(c, 0xc9e60u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c9e62  push 0x4bfd8
    X86_AT(c, 0xc9e62u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9e67  call 0x5c4
    X86_AT(c, 0xc9e67u);
    push32(c, 0xc9e6cu); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xc9e6cu);
    X86_TICK(c, 12);
    // 0c9e6c  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xc9e6cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0c9e72  call 0xe7300
    X86_AT(c, 0xc9e72u);
    push32(c, 0xc9e77u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xc9e77u);
    X86_TICK(c, 13);
    // 0c9e77  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xc9e77u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0c9e7a  add esp, 0x10
    X86_AT(c, 0xc9e7au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c9e7d  jmp 0xc9fb6
    X86_AT(c, 0xc9e7du);
    goto L_c9fb6;
L_c9e82:
    X86_TICK(c, 93);
    // 0c9e82  mov eax, 0x2800
    X86_AT(c, 0xc9e82u);
    c.r[0] = 0x2800u;
    // 0c9e87  cdq 
    X86_AT(c, 0xc9e87u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c9e88  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0xc9e88u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0xc9e88u);
    // 0c9e8b  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xc9e8bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0c9e8e  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc9e8eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 0c9e92  xchg ebx, eax
    X86_AT(c, 0xc9e92u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c9e93  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xc9e93u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0c9e99  mov dword ptr [0x4c5d8], eax
    X86_AT(c, 0xc9e99u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5D8u)), c.r[0]);
    // 0c9e9e  mov word ptr [0x4c5dc], 0x14
    X86_AT(c, 0xc9e9eu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x14u);
    // 0c9ea7  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xc9ea7u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0c9eab  mov word ptr [0x4c5de], ax
    X86_AT(c, 0xc9eabu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[0] & 0xFFFFu));
    // 0c9eb1  add ax, word ptr [ebp - 8]
    X86_AT(c, 0xc9eb1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 0c9eb5  dec eax
    X86_AT(c, 0xc9eb5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c9eb6  mov word ptr [0x4c5e2], ax
    X86_AT(c, 0xc9eb6u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E2u)), (c.r[0] & 0xFFFFu));
L_c9ebc:
    X86_TICK(c, 7);
    // 0c9ebc  cmp ebx, esi
    X86_AT(c, 0xc9ebcu);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 0c9ebe  jge 0xc9f18
    X86_AT(c, 0xc9ebeu);
    if (x86_cc(c, 13)) { goto L_c9f18; }
    X86_TICK(c, 20);
    // 0c9ec0  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xc9ec0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0c9ec6  push 1
    X86_AT(c, 0xc9ec6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c9ec8  push ebx
    X86_AT(c, 0xc9ec8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9ec9  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xc9ec9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0c9ecf  push eax
    X86_AT(c, 0xc9ecfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9ed0  call 0xe6b28
    X86_AT(c, 0xc9ed0u);
    push32(c, 0xc9ed5u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc9ed5u);
    X86_TICK(c, 9);
    // 0c9ed5  add esp, 0x10
    X86_AT(c, 0xc9ed5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c9ed8  dec eax
    X86_AT(c, 0xc9ed8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c9ed9  jge 0xc9ee2
    X86_AT(c, 0xc9ed9u);
    if (x86_cc(c, 13)) { goto L_c9ee2; }
    X86_TICK(c, 2);
    // 0c9edb  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0xc9edbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_c9ee2:
    X86_TICK(c, 29);
    // 0c9ee2  mov eax, edi
    X86_AT(c, 0xc9ee2u);
    c.r[0] = c.r[7];
    // 0c9ee4  mov word ptr [0x4c5e0], ax
    X86_AT(c, 0xc9ee4u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), (c.r[0] & 0xFFFFu));
    // 0c9eea  mov eax, edi
    X86_AT(c, 0xc9eeau);
    c.r[0] = c.r[7];
    // 0c9eec  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0xc9eecu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 0c9ef0  dec eax
    X86_AT(c, 0xc9ef0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c9ef1  mov word ptr [0x4c5e4], ax
    X86_AT(c, 0xc9ef1u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E4u)), (c.r[0] & 0xFFFFu));
    // 0c9ef7  push 0x4c5d8
    X86_AT(c, 0xc9ef7u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c9efc  push 0
    X86_AT(c, 0xc9efcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c9efe  push 0x4bfd8
    X86_AT(c, 0xc9efeu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9f03  call 0x5c4
    X86_AT(c, 0xc9f03u);
    push32(c, 0xc9f08u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xc9f08u);
    X86_TICK(c, 22);
    // 0c9f08  add edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc9f08u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 0c9f0b  sub esi, ebx
    X86_AT(c, 0xc9f0bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c9f0d  add esp, 0xc
    X86_AT(c, 0xc9f0du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c9f10  cmp dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0xc9f10u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0xFFFFFFFFu, 0, 4);
    // 0c9f14  jne 0xc9ebc
    X86_AT(c, 0xc9f14u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc9ebcu); goto L_c9ebc; }
    X86_TICK(c, 7);
    // 0c9f16  jmp 0xc9f1d
    X86_AT(c, 0xc9f16u);
    goto L_c9f1d;
L_c9f18:
    X86_TICK(c, 11);
    // 0c9f18  cmp esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc9f18u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4);
    // 0c9f1b  jge 0xc9f35
    X86_AT(c, 0xc9f1bu);
    if (x86_cc(c, 13)) { goto L_c9f35; }
L_c9f1d:
    X86_TICK(c, 12);
    // 0c9f1d  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xc9f1du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0c9f23  call 0xe7300
    X86_AT(c, 0xc9f23u);
    push32(c, 0xc9f28u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xc9f28u);
    X86_TICK(c, 11);
    // 0c9f28  mov eax, 0xffffffff
    X86_AT(c, 0xc9f28u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c9f2d  add esp, 4
    X86_AT(c, 0xc9f2du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c9f30  jmp 0xc9fb6
    X86_AT(c, 0xc9f30u);
    goto L_c9fb6;
L_c9f35:
    X86_TICK(c, 88);
    // 0c9f35  mov eax, esi
    X86_AT(c, 0xc9f35u);
    c.r[0] = c.r[6];
    // 0c9f37  cdq 
    X86_AT(c, 0xc9f37u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c9f38  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0xc9f38u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0xc9f38u);
    // 0c9f3b  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xc9f3bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0c9f3e  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xc9f3eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0c9f44  push 1
    X86_AT(c, 0xc9f44u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c9f46  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc9f46u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 0c9f4a  push eax
    X86_AT(c, 0xc9f4au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9f4b  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xc9f4bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0c9f51  push eax
    X86_AT(c, 0xc9f51u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9f52  call 0xe6b28
    X86_AT(c, 0xc9f52u);
    push32(c, 0xc9f57u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc9f57u);
    X86_TICK(c, 9);
    // 0c9f57  add esp, 0x10
    X86_AT(c, 0xc9f57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c9f5a  dec eax
    X86_AT(c, 0xc9f5au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c9f5b  jge 0xc9f64
    X86_AT(c, 0xc9f5bu);
    if (x86_cc(c, 13)) { goto L_c9f64; }
    X86_TICK(c, 2);
    // 0c9f5d  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0xc9f5du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_c9f64:
    X86_TICK(c, 35);
    // 0c9f64  mov eax, edi
    X86_AT(c, 0xc9f64u);
    c.r[0] = c.r[7];
    // 0c9f66  mov word ptr [0x4c5e0], ax
    X86_AT(c, 0xc9f66u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), (c.r[0] & 0xFFFFu));
    // 0c9f6c  mov eax, edi
    X86_AT(c, 0xc9f6cu);
    c.r[0] = c.r[7];
    // 0c9f6e  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0xc9f6eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 0c9f72  dec eax
    X86_AT(c, 0xc9f72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c9f73  mov word ptr [0x4c5e4], ax
    X86_AT(c, 0xc9f73u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E4u)), (c.r[0] & 0xFFFFu));
    // 0c9f79  mov ax, word ptr [ebp - 0x14]
    X86_AT(c, 0xc9f79u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))));
    // 0c9f7d  mov word ptr [0x4c5e8], ax
    X86_AT(c, 0xc9f7du);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E8u)), (c.r[0] & 0xFFFFu));
    // 0c9f83  push 0x4c5d8
    X86_AT(c, 0xc9f83u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c9f88  push 0
    X86_AT(c, 0xc9f88u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c9f8a  push 0x4bfd8
    X86_AT(c, 0xc9f8au);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9f8f  call 0x5c4
    X86_AT(c, 0xc9f8fu);
    push32(c, 0xc9f94u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xc9f94u);
    X86_TICK(c, 12);
    // 0c9f94  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xc9f94u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0c9f9a  call 0xe7300
    X86_AT(c, 0xc9f9au);
    push32(c, 0xc9f9fu); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xc9f9fu);
    X86_TICK(c, 35);
    // 0c9f9f  add esp, 0x10
    X86_AT(c, 0xc9f9fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c9fa2  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xc9fa2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0c9fa5  imul eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc9fa5u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 4);
    // 0c9fa9  cmp eax, esi
    X86_AT(c, 0xc9fa9u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0c9fab  jge 0xc9fb4
    X86_AT(c, 0xc9fabu);
    if (x86_cc(c, 13)) { goto L_c9fb4; }
L_c9fad:
    X86_TICK(c, 9);
    // 0c9fad  mov eax, 0xffffffff
    X86_AT(c, 0xc9fadu);
    c.r[0] = 0xFFFFFFFFu;
    // 0c9fb2  jmp 0xc9fb6
    X86_AT(c, 0xc9fb2u);
    goto L_c9fb6;
L_c9fb4:
    X86_TICK(c, 2);
    // 0c9fb4  sub eax, eax
    X86_AT(c, 0xc9fb4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c9fb6:
    X86_TICK(c, 28);
    // 0c9fb6  pop edi
    X86_AT(c, 0xc9fb6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9fb7  pop esi
    X86_AT(c, 0xc9fb7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c9fb8  pop ebx
    X86_AT(c, 0xc9fb8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c9fb9  leave 
    X86_AT(c, 0xc9fb9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9fba  ret 
    X86_AT(c, 0xc9fbau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9cb4u, "ran off the end of a function");
}
void f_000c9fb6(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0c9fb6  pop edi
    X86_AT(c, 0xc9fb6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9fb7  pop esi
    X86_AT(c, 0xc9fb7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c9fb8  pop ebx
    X86_AT(c, 0xc9fb8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c9fb9  leave 
    X86_AT(c, 0xc9fb9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9fba  ret 
    X86_AT(c, 0xc9fbau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9fb6u, "ran off the end of a function");
}
void f_000c9fbc(X86Cpu& c) {
    X86_TICK(c, 56);
    // 0c9fbc  push ebp
    X86_AT(c, 0xc9fbcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9fbd  mov ebp, esp
    X86_AT(c, 0xc9fbdu);
    c.r[5] = c.r[4];
    // 0c9fbf  push ebx
    X86_AT(c, 0xc9fbfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9fc0  push esi
    X86_AT(c, 0xc9fc0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c9fc1  push edi
    X86_AT(c, 0xc9fc1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9fc2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc9fc2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c9fc5  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc9fc5u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c9fc8  mov ebx, dword ptr [ebp + 0x20]
    X86_AT(c, 0xc9fc8u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 0c9fcb  lea eax, [esi - 6]
    X86_AT(c, 0xc9fcbu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFAu);
    // 0c9fce  cdq 
    X86_AT(c, 0xc9fceu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c9fcf  sub eax, edx
    X86_AT(c, 0xc9fcfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0c9fd1  sar eax, 1
    X86_AT(c, 0xc9fd1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0c9fd3  cdq 
    X86_AT(c, 0xc9fd3u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c9fd4  sub eax, edx
    X86_AT(c, 0xc9fd4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0c9fd6  sar eax, 1
    X86_AT(c, 0xc9fd6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0c9fd8  cdq 
    X86_AT(c, 0xc9fd8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c9fd9  sub eax, edx
    X86_AT(c, 0xc9fd9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0c9fdb  sar eax, 1
    X86_AT(c, 0xc9fdbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0c9fdd  cmp eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xc9fddu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0, 4);
    // 0c9fe0  jge 0xc9fe5
    X86_AT(c, 0xc9fe0u);
    if (x86_cc(c, 13)) { goto L_c9fe5; }
    X86_TICK(c, 2);
    // 0c9fe2  mov dword ptr [ebp + 0x1c], eax
    X86_AT(c, 0xc9fe2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
L_c9fe5:
    X86_TICK(c, 57);
    // 0c9fe5  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xc9fe5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0c9fe8  sub eax, 4
    X86_AT(c, 0xc9fe8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x4u, 0, 4); }
    // 0c9feb  cdq 
    X86_AT(c, 0xc9febu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c9fec  mov ecx, 0x10
    X86_AT(c, 0xc9fecu);
    c.r[1] = 0x10u;
    // 0c9ff1  idiv ecx
    X86_AT(c, 0xc9ff1u);
    x86_idiv(c, c.r[1], 4, 0xc9ff1u);
    // 0c9ff3  cmp eax, ebx
    X86_AT(c, 0xc9ff3u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0c9ff5  jge 0xc9ff8
    X86_AT(c, 0xc9ff5u);
    if (x86_cc(c, 13)) { goto L_c9ff8; }
    X86_TICK(c, 3);
    // 0c9ff7  xchg ebx, eax
    X86_AT(c, 0xc9ff7u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_c9ff8:
    X86_TICK(c, 100);
    // 0c9ff8  mov eax, 0x43fd4
    X86_AT(c, 0xc9ff8u);
    c.r[0] = 0x43FD4u;
    // 0c9ffd  lea edx, [edi + edi*2]
    X86_AT(c, 0xc9ffdu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0ca000  lea ecx, [edx + edx*8]
    X86_AT(c, 0xca000u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0ca003  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xca003u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0ca006  mov byte ptr [eax + ecx*1 + 0x8710], 0xff
    X86_AT(c, 0xca006u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8710u)), 0xFFu);
    // 0ca00e  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xca00eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ca011  mov dword ptr [eax + ecx*1 + 0x8711], edx
    X86_AT(c, 0xca011u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8711u)), c.r[2]);
    // 0ca018  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xca018u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ca01b  mov dword ptr [eax + ecx*1 + 0x8715], edx
    X86_AT(c, 0xca01bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8715u)), c.r[2]);
    // 0ca022  mov dword ptr [eax + ecx*1 + 0x8719], esi
    X86_AT(c, 0xca022u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8719u)), c.r[6]);
    // 0ca029  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xca029u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0ca02c  mov dword ptr [eax + ecx*1 + 0x871d], edx
    X86_AT(c, 0xca02cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x871Du)), c.r[2]);
    // 0ca033  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xca033u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0ca036  mov dword ptr [eax + ecx*1 + 0x8721], edx
    X86_AT(c, 0xca036u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8721u)), c.r[2]);
    // 0ca03d  mov dword ptr [eax + ecx*1 + 0x8725], ebx
    X86_AT(c, 0xca03du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8725u)), c.r[3]);
    // 0ca044  sub edx, edx
    X86_AT(c, 0xca044u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ca046  mov dword ptr [eax + ecx*1 + 0x8729], edx
    X86_AT(c, 0xca046u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8729u)), c.r[2]);
    // 0ca04d  mov dword ptr [eax + ecx*1 + 0x872d], edx
    X86_AT(c, 0xca04du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x872Du)), c.r[2]);
    // 0ca054  mov edx, 0xffffffff
    X86_AT(c, 0xca054u);
    c.r[2] = 0xFFFFFFFFu;
    // 0ca059  mov dword ptr [eax + ecx*1 + 0x8731], edx
    X86_AT(c, 0xca059u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8731u)), c.r[2]);
    // 0ca060  mov edx, dword ptr [ebp + 0x24]
    X86_AT(c, 0xca060u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 0ca063  mov dword ptr [eax + ecx*1 + 0x8735], edx
    X86_AT(c, 0xca063u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8735u)), c.r[2]);
    // 0ca06a  mov dword ptr [eax + ecx*1 + 0x8739], 0
    X86_AT(c, 0xca06au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8739u)), 0x0u);
    // 0ca075  mov edx, dword ptr [ebp + 0x28]
    X86_AT(c, 0xca075u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)));
    // 0ca078  mov dword ptr [eax + ecx*1 + 0x873d], edx
    X86_AT(c, 0xca078u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x873Du)), c.r[2]);
    // 0ca07f  mov edx, dword ptr [ebp + 0x2c]
    X86_AT(c, 0xca07fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x2Cu)));
    // 0ca082  mov dword ptr [eax + ecx*1 + 0x8741], edx
    X86_AT(c, 0xca082u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8741u)), c.r[2]);
    // 0ca089  mov dword ptr [eax + ecx*1 + 0x8745], 0xffffffff
    X86_AT(c, 0xca089u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8745u)), 0xFFFFFFFFu);
    // 0ca094  lea eax, [eax + ecx*1 + 0x8710]
    X86_AT(c, 0xca094u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] + 0x8710u);
    // 0ca09b  pop edi
    X86_AT(c, 0xca09bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca09c  pop esi
    X86_AT(c, 0xca09cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ca09d  pop ebx
    X86_AT(c, 0xca09du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ca09e  leave 
    X86_AT(c, 0xca09eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca09f  ret 
    X86_AT(c, 0xca09fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9fbcu, "ran off the end of a function");
}
void f_000ca0a0(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0ca0a0  push ebp
    X86_AT(c, 0xca0a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca0a1  mov ebp, esp
    X86_AT(c, 0xca0a1u);
    c.r[5] = c.r[4];
    // 0ca0a3  push ebx
    X86_AT(c, 0xca0a3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ca0a4  push esi
    X86_AT(c, 0xca0a4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ca0a5  push edi
    X86_AT(c, 0xca0a5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca0a6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xca0a6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca0a9  mov eax, 0x43fd4
    X86_AT(c, 0xca0a9u);
    c.r[0] = 0x43FD4u;
    // 0ca0ae  lea edx, [edi + edi*2]
    X86_AT(c, 0xca0aeu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0ca0b1  lea ecx, [edx + edx*8]
    X86_AT(c, 0xca0b1u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0ca0b4  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xca0b4u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0ca0b7  push dword ptr [eax + ecx*1 + 0x8735]
    X86_AT(c, 0xca0b7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8735u))); push32(c, v); }
    // 0ca0be  mov ebx, eax
    X86_AT(c, 0xca0beu);
    c.r[3] = c.r[0];
    // 0ca0c0  mov esi, ecx
    X86_AT(c, 0xca0c0u);
    c.r[6] = c.r[1];
    // 0ca0c2  call 0xc8dd4
    X86_AT(c, 0xca0c2u);
    push32(c, 0xca0c7u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xca0c7u);
    X86_TICK(c, 14);
    // 0ca0c7  add esp, 4
    X86_AT(c, 0xca0c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ca0ca  cmp dword ptr [ebx + esi*1 + 0x8745], 0xffffffff
    X86_AT(c, 0xca0cau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x8745u))), 0xFFFFFFFFu, 0, 4);
    // 0ca0d2  jne 0xca0e3
    X86_AT(c, 0xca0d2u);
    if (x86_cc(c, 5)) { goto L_ca0e3; }
    X86_TICK(c, 12);
    // 0ca0d4  push dword ptr [ebx + esi*1 + 0x8741]
    X86_AT(c, 0xca0d4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x8741u))); push32(c, v); }
    // 0ca0db  call 0xc8dec
    X86_AT(c, 0xca0dbu);
    push32(c, 0xca0e0u); x86_call_known(c, 0xc8decu, f_000c8dec); X86_RET(c, 0xca0e0u);
    X86_TICK(c, 2);
    // 0ca0e0  add esp, 4
    X86_AT(c, 0xca0e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ca0e3:
    X86_TICK(c, 18);
    // 0ca0e3  lea eax, [edi + edi*2]
    X86_AT(c, 0xca0e3u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0ca0e6  lea edx, [eax + eax*8]
    X86_AT(c, 0xca0e6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0ca0e9  lea edx, [eax + edx*2]
    X86_AT(c, 0xca0e9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ca0ec  push dword ptr [edx + 0x4c70d]
    X86_AT(c, 0xca0ecu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C70Du))); push32(c, v); }
    // 0ca0f2  call 0xc8e9c
    X86_AT(c, 0xca0f2u);
    push32(c, 0xca0f7u); x86_call_known(c, 0xc8e9cu, f_000c8e9c); X86_RET(c, 0xca0f7u);
    X86_TICK(c, 30);
    // 0ca0f7  add esp, 4
    X86_AT(c, 0xca0f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ca0fa  pop edi
    X86_AT(c, 0xca0fau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca0fb  pop esi
    X86_AT(c, 0xca0fbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ca0fc  pop ebx
    X86_AT(c, 0xca0fcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ca0fd  leave 
    X86_AT(c, 0xca0fdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca0fe  ret 
    X86_AT(c, 0xca0feu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca0a0u, "ran off the end of a function");
}
void f_000ca100(X86Cpu& c) {
    X86_TICK(c, 74);
    // 0ca100  push ebp
    X86_AT(c, 0xca100u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca101  mov ebp, esp
    X86_AT(c, 0xca101u);
    c.r[5] = c.r[4];
    // 0ca103  push edi
    X86_AT(c, 0xca103u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca104  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xca104u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca107  lea eax, [eax + eax*2]
    X86_AT(c, 0xca107u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ca10a  lea edx, [eax + eax*8]
    X86_AT(c, 0xca10au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0ca10d  lea edx, [eax + edx*2]
    X86_AT(c, 0xca10du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ca110  lea edi, [edx + 0x4c6e4]
    X86_AT(c, 0xca110u);
    c.r[7] = (uint32_t)(c.r[2] + 0x4C6E4u);
    // 0ca116  push dword ptr [edi + 0x31]
    X86_AT(c, 0xca116u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 0ca119  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xca119u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0ca11c  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xca11cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0ca11f  sub eax, 2
    X86_AT(c, 0xca11fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0ca122  push eax
    X86_AT(c, 0xca122u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca123  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xca123u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0ca126  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xca126u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0ca129  sub eax, 2
    X86_AT(c, 0xca129u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0ca12c  push eax
    X86_AT(c, 0xca12cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca12d  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xca12du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0ca130  inc eax
    X86_AT(c, 0xca130u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ca131  push eax
    X86_AT(c, 0xca131u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca132  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xca132u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0ca135  inc eax
    X86_AT(c, 0xca135u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ca136  push eax
    X86_AT(c, 0xca136u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca137  call 0xc95ec
    X86_AT(c, 0xca137u);
    push32(c, 0xca13cu); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xca13cu);
    X86_TICK(c, 12);
    // 0ca13c  push dword ptr [edi + 0x2d]
    X86_AT(c, 0xca13cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Du))); push32(c, v); }
    // 0ca13f  call 0xc8dd4
    X86_AT(c, 0xca13fu);
    push32(c, 0xca144u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xca144u);
    X86_TICK(c, 51);
    // 0ca144  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xca144u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0ca147  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xca147u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0ca14a  sub eax, 2
    X86_AT(c, 0xca14au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0ca14d  push eax
    X86_AT(c, 0xca14du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca14e  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xca14eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0ca151  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xca151u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0ca154  sub eax, 2
    X86_AT(c, 0xca154u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0ca157  push eax
    X86_AT(c, 0xca157u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca158  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xca158u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0ca15b  inc eax
    X86_AT(c, 0xca15bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ca15c  push eax
    X86_AT(c, 0xca15cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca15d  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xca15du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0ca160  inc eax
    X86_AT(c, 0xca160u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ca161  push eax
    X86_AT(c, 0xca161u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca162  call 0xc9588
    X86_AT(c, 0xca162u);
    push32(c, 0xca167u); x86_call_known(c, 0xc9588u, f_000c9588); X86_RET(c, 0xca167u);
    X86_TICK(c, 39);
    // 0ca167  push dword ptr [edi + 5]
    X86_AT(c, 0xca167u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 0ca16a  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xca16au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0ca16d  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xca16du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0ca170  sub eax, 3
    X86_AT(c, 0xca170u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0ca173  push eax
    X86_AT(c, 0xca173u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca174  push dword ptr [edi + 5]
    X86_AT(c, 0xca174u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 0ca177  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xca177u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0ca17a  add eax, 2
    X86_AT(c, 0xca17au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0ca17d  push eax
    X86_AT(c, 0xca17du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca17e  call 0xc9468
    X86_AT(c, 0xca17eu);
    push32(c, 0xca183u); x86_call_known(c, 0xc9468u, f_000c9468); X86_RET(c, 0xca183u);
    X86_TICK(c, 45);
    // 0ca183  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xca183u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0ca186  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xca186u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0ca189  sub eax, 3
    X86_AT(c, 0xca189u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0ca18c  push eax
    X86_AT(c, 0xca18cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca18d  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xca18du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0ca190  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xca190u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0ca193  dec eax
    X86_AT(c, 0xca193u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0ca194  push eax
    X86_AT(c, 0xca194u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca195  mov edx, dword ptr [edi + 5]
    X86_AT(c, 0xca195u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0ca198  add edx, 2
    X86_AT(c, 0xca198u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x2u, 0, 4); }
    // 0ca19b  push edx
    X86_AT(c, 0xca19bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ca19c  push eax
    X86_AT(c, 0xca19cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca19d  call 0xc9468
    X86_AT(c, 0xca19du);
    push32(c, 0xca1a2u); x86_call_known(c, 0xc9468u, f_000c9468); X86_RET(c, 0xca1a2u);
    X86_TICK(c, 47);
    // 0ca1a2  add esp, 0x48
    X86_AT(c, 0xca1a2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0ca1a5  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xca1a5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0ca1a8  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xca1a8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0ca1ab  dec eax
    X86_AT(c, 0xca1abu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0ca1ac  push eax
    X86_AT(c, 0xca1acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca1ad  mov edx, dword ptr [edi + 1]
    X86_AT(c, 0xca1adu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0ca1b0  add edx, dword ptr [edi + 9]
    X86_AT(c, 0xca1b0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0ca1b3  sub edx, 3
    X86_AT(c, 0xca1b3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0ca1b6  push edx
    X86_AT(c, 0xca1b6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ca1b7  push eax
    X86_AT(c, 0xca1b7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca1b8  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xca1b8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0ca1bb  add eax, 2
    X86_AT(c, 0xca1bbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0ca1be  push eax
    X86_AT(c, 0xca1beu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca1bf  call 0xc9468
    X86_AT(c, 0xca1bfu);
    push32(c, 0xca1c4u); x86_call_known(c, 0xc9468u, f_000c9468); X86_RET(c, 0xca1c4u);
    X86_TICK(c, 41);
    // 0ca1c4  add esp, 0x10
    X86_AT(c, 0xca1c4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ca1c7  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xca1c7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0ca1ca  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xca1cau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0ca1cd  sub eax, 3
    X86_AT(c, 0xca1cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0ca1d0  push eax
    X86_AT(c, 0xca1d0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca1d1  push dword ptr [edi + 1]
    X86_AT(c, 0xca1d1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 0ca1d4  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xca1d4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0ca1d7  add eax, 2
    X86_AT(c, 0xca1d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0ca1da  push eax
    X86_AT(c, 0xca1dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca1db  push dword ptr [edi + 1]
    X86_AT(c, 0xca1dbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 0ca1de  call 0xc9468
    X86_AT(c, 0xca1deu);
    push32(c, 0xca1e3u); x86_call_known(c, 0xc9468u, f_000c9468); X86_RET(c, 0xca1e3u);
    X86_TICK(c, 24);
    // 0ca1e3  mov byte ptr [edi], 0
    X86_AT(c, 0xca1e3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0ca1e6  add esp, 0x10
    X86_AT(c, 0xca1e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ca1e9  pop edi
    X86_AT(c, 0xca1e9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca1ea  leave 
    X86_AT(c, 0xca1eau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca1eb  ret 
    X86_AT(c, 0xca1ebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca100u, "ran off the end of a function");
}
void f_000ca1ec(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0ca1ec  push ebp
    X86_AT(c, 0xca1ecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca1ed  mov ebp, esp
    X86_AT(c, 0xca1edu);
    c.r[5] = c.r[4];
    // 0ca1ef  sub esp, 0x40
    X86_AT(c, 0xca1efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x40u, 0, 4); }
    // 0ca1f2  push ebx
    X86_AT(c, 0xca1f2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ca1f3  push edi
    X86_AT(c, 0xca1f3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca1f4  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xca1f4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ca1f7  push 9
    X86_AT(c, 0xca1f7u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ca1f9  call 0xc8f2c
    X86_AT(c, 0xca1f9u);
    push32(c, 0xca1feu); x86_call_known(c, 0xc8f2cu, f_000c8f2c); X86_RET(c, 0xca1feu);
    X86_TICK(c, 32);
    // 0ca1fe  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xca1feu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0ca202  mov word ptr [ebp - 0x40], ax
    X86_AT(c, 0xca202u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)), (c.r[0] & 0xFFFFu));
    // 0ca206  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xca206u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0ca20a  mov word ptr [ebp - 0x3e], ax
    X86_AT(c, 0xca20au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC2u)), (c.r[0] & 0xFFFFu));
    // 0ca20e  mov edx, 0xffff
    X86_AT(c, 0xca20eu);
    c.r[2] = 0xFFFFu;
    // 0ca213  sub eax, eax
    X86_AT(c, 0xca213u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ca215  push edi
    X86_AT(c, 0xca215u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca216  mov ecx, edx
    X86_AT(c, 0xca216u);
    c.r[1] = c.r[2];
    // 0ca218  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xca218u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0ca21a  jne 0xca21f
    X86_AT(c, 0xca21au);
    if (x86_cc(c, 5)) { goto L_ca21f; }
    X86_TICK(c, 4);
    // 0ca21c  inc ecx
    X86_AT(c, 0xca21cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0ca21d  sub edx, ecx
    X86_AT(c, 0xca21du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_ca21f:
    X86_TICK(c, 19);
    // 0ca21f  pop edi
    X86_AT(c, 0xca21fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca220  mov word ptr [ebp - 0x3c], dx
    X86_AT(c, 0xca220u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC4u)), (c.r[2] & 0xFFFFu));
    // 0ca224  push edi
    X86_AT(c, 0xca224u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca225  lea eax, [ebp - 0x3a]
    X86_AT(c, 0xca225u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC6u);
    // 0ca228  push eax
    X86_AT(c, 0xca228u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca229  call 0xe79f4
    X86_AT(c, 0xca229u);
    push32(c, 0xca22eu); x86_call_known(c, 0xe79f4u, f_000e79f4); X86_RET(c, 0xca22eu);
    X86_TICK(c, 15);
    // 0ca22e  lea ebx, [ebp - 0x40]
    X86_AT(c, 0xca22eu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFC0u);
    // 0ca231  push ebx
    X86_AT(c, 0xca231u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ca232  push 1
    X86_AT(c, 0xca232u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ca234  push 0x4bfd8
    X86_AT(c, 0xca234u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0ca239  call 0xac5
    X86_AT(c, 0xca239u);
    push32(c, 0xca23eu); x86_call_known(c, 0xac5u, f_00000ac5); X86_RET(c, 0xca23eu);
    X86_TICK(c, 15);
    // 0ca23e  movsx eax, word ptr [0x4c6dc]
    X86_AT(c, 0xca23eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4C6DCu)));
    // 0ca245  push eax
    X86_AT(c, 0xca245u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca246  call 0xc8f2c
    X86_AT(c, 0xca246u);
    push32(c, 0xca24bu); x86_call_known(c, 0xc8f2cu, f_000c8f2c); X86_RET(c, 0xca24bu);
    X86_TICK(c, 26);
    // 0ca24b  add esp, 0x1c
    X86_AT(c, 0xca24bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ca24e  pop edi
    X86_AT(c, 0xca24eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca24f  pop ebx
    X86_AT(c, 0xca24fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ca250  leave 
    X86_AT(c, 0xca250u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca251  ret 
    X86_AT(c, 0xca251u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca1ecu, "ran off the end of a function");
}
void f_000ca254(X86Cpu& c) {
    X86_TICK(c, 74);
    // 0ca254  push ebp
    X86_AT(c, 0xca254u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca255  mov ebp, esp
    X86_AT(c, 0xca255u);
    c.r[5] = c.r[4];
    // 0ca257  push edi
    X86_AT(c, 0xca257u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca258  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xca258u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca25b  lea eax, [eax + eax*2]
    X86_AT(c, 0xca25bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ca25e  lea edx, [eax + eax*8]
    X86_AT(c, 0xca25eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0ca261  lea edx, [eax + edx*2]
    X86_AT(c, 0xca261u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ca264  lea edi, [edx + 0x4c6e4]
    X86_AT(c, 0xca264u);
    c.r[7] = (uint32_t)(c.r[2] + 0x4C6E4u);
    // 0ca26a  push dword ptr [edi + 0x31]
    X86_AT(c, 0xca26au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 0ca26d  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xca26du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0ca270  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xca270u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0ca273  sub eax, 3
    X86_AT(c, 0xca273u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0ca276  push eax
    X86_AT(c, 0xca276u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca277  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xca277u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0ca27a  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xca27au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0ca27d  sub eax, 3
    X86_AT(c, 0xca27du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0ca280  push eax
    X86_AT(c, 0xca280u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca281  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xca281u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0ca284  add eax, 2
    X86_AT(c, 0xca284u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0ca287  push eax
    X86_AT(c, 0xca287u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca288  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xca288u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0ca28b  add eax, 2
    X86_AT(c, 0xca28bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0ca28e  push eax
    X86_AT(c, 0xca28eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca28f  call 0xc95ec
    X86_AT(c, 0xca28fu);
    push32(c, 0xca294u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xca294u);
    X86_TICK(c, 12);
    // 0ca294  push dword ptr [edi + 0x25]
    X86_AT(c, 0xca294u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x25u))); push32(c, v); }
    // 0ca297  call 0xc8dd4
    X86_AT(c, 0xca297u);
    push32(c, 0xca29cu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xca29cu);
    X86_TICK(c, 12);
    // 0ca29c  push dword ptr [edi + 0x31]
    X86_AT(c, 0xca29cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 0ca29f  call 0xc8e04
    X86_AT(c, 0xca29fu);
    push32(c, 0xca2a4u); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xca2a4u);
    X86_TICK(c, 14);
    // 0ca2a4  add esp, 0x1c
    X86_AT(c, 0xca2a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ca2a7  cmp dword ptr [edi + 0x35], 0
    X86_AT(c, 0xca2a7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x35u))), 0x0u, 0, 4);
    // 0ca2ab  jne 0xca2b1
    X86_AT(c, 0xca2abu);
    if (x86_cc(c, 5)) { goto L_ca2b1; }
    X86_TICK(c, 9);
    // 0ca2ad  push 0xb
    X86_AT(c, 0xca2adu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ca2af  jmp 0xca2b4
    X86_AT(c, 0xca2afu);
    goto L_ca2b4;
L_ca2b1:
    X86_TICK(c, 5);
    // 0ca2b1  push dword ptr [edi + 0x31]
    X86_AT(c, 0xca2b1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
L_ca2b4:
    X86_TICK(c, 7);
    // 0ca2b4  call 0xc8dec
    X86_AT(c, 0xca2b4u);
    push32(c, 0xca2b9u); x86_call_known(c, 0xc8decu, f_000c8dec); X86_RET(c, 0xca2b9u);
    X86_TICK(c, 19);
    // 0ca2b9  add esp, 4
    X86_AT(c, 0xca2b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ca2bc  movsx eax, word ptr [0x4c6de]
    X86_AT(c, 0xca2bcu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4C6DEu)));
    // 0ca2c3  push eax
    X86_AT(c, 0xca2c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca2c4  push 0x4bfd8
    X86_AT(c, 0xca2c4u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0ca2c9  call 0x2c5
    X86_AT(c, 0xca2c9u);
    push32(c, 0xca2ceu); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xca2ceu);
    X86_TICK(c, 22);
    // 0ca2ce  add esp, 8
    X86_AT(c, 0xca2ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ca2d1  pop edi
    X86_AT(c, 0xca2d1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca2d2  leave 
    X86_AT(c, 0xca2d2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca2d3  ret 
    X86_AT(c, 0xca2d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca254u, "ran off the end of a function");
}
void f_000ca2d4(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0ca2d4  push ebp
    X86_AT(c, 0xca2d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca2d5  mov ebp, esp
    X86_AT(c, 0xca2d5u);
    c.r[5] = c.r[4];
    // 0ca2d7  push edi
    X86_AT(c, 0xca2d7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca2d8  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xca2d8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca2db  lea eax, [eax + eax*2]
    X86_AT(c, 0xca2dbu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ca2de  lea edx, [eax + eax*8]
    X86_AT(c, 0xca2deu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0ca2e1  lea edx, [eax + edx*2]
    X86_AT(c, 0xca2e1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ca2e4  lea edi, [edx + 0x4c6e4]
    X86_AT(c, 0xca2e4u);
    c.r[7] = (uint32_t)(c.r[2] + 0x4C6E4u);
    // 0ca2ea  cmp byte ptr [edi], 0
    X86_AT(c, 0xca2eau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0ca2ed  jne 0xca328
    X86_AT(c, 0xca2edu);
    if (x86_cc(c, 5)) { goto L_ca328; }
    X86_TICK(c, 50);
    // 0ca2ef  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xca2efu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0ca2f2  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xca2f2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0ca2f5  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xca2f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0ca2f8  dec eax
    X86_AT(c, 0xca2f8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0ca2f9  push eax
    X86_AT(c, 0xca2f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca2fa  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xca2fau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0ca2fd  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xca2fdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0ca300  dec eax
    X86_AT(c, 0xca300u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0ca301  push eax
    X86_AT(c, 0xca301u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca302  push dword ptr [edi + 5]
    X86_AT(c, 0xca302u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 0ca305  push dword ptr [edi + 1]
    X86_AT(c, 0xca305u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 0ca308  call 0xc95ec
    X86_AT(c, 0xca308u);
    push32(c, 0xca30du); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xca30du);
    X86_TICK(c, 9);
    // 0ca30d  push 0xf
    X86_AT(c, 0xca30du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ca30f  call 0xc8dd4
    X86_AT(c, 0xca30fu);
    push32(c, 0xca314u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xca314u);
    X86_TICK(c, 9);
    // 0ca314  push 0xf
    X86_AT(c, 0xca314u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ca316  call 0xc8e04
    X86_AT(c, 0xca316u);
    push32(c, 0xca31bu); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xca31bu);
    X86_TICK(c, 6);
    // 0ca31b  mov dword ptr [edi + 0x35], 0xffffffff
    X86_AT(c, 0xca31bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x35u)), 0xFFFFFFFFu);
    // 0ca322  mov byte ptr [edi], 0xff
    X86_AT(c, 0xca322u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFu);
    // 0ca325  add esp, 0x1c
    X86_AT(c, 0xca325u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_ca328:
    X86_TICK(c, 20);
    // 0ca328  pop edi
    X86_AT(c, 0xca328u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca329  leave 
    X86_AT(c, 0xca329u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca32a  ret 
    X86_AT(c, 0xca32au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca2d4u, "ran off the end of a function");
}
void f_000ca32c(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0ca32c  push ebp
    X86_AT(c, 0xca32cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca32d  mov ebp, esp
    X86_AT(c, 0xca32du);
    c.r[5] = c.r[4];
    // 0ca32f  push ebx
    X86_AT(c, 0xca32fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ca330  push edi
    X86_AT(c, 0xca330u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca331  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xca331u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca334  lea eax, [edi + edi*2]
    X86_AT(c, 0xca334u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0ca337  lea edx, [eax + eax*8]
    X86_AT(c, 0xca337u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0ca33a  lea edx, [eax + edx*2]
    X86_AT(c, 0xca33au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ca33d  push dword ptr [edx + 0x4c715]
    X86_AT(c, 0xca33du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C715u))); push32(c, v); }
    // 0ca343  mov ebx, edx
    X86_AT(c, 0xca343u);
    c.r[3] = c.r[2];
    // 0ca345  call 0xc8dec
    X86_AT(c, 0xca345u);
    push32(c, 0xca34au); x86_call_known(c, 0xc8decu, f_000c8dec); X86_RET(c, 0xca34au);
    X86_TICK(c, 61);
    // 0ca34a  mov ax, word ptr [ebx + 0x4c6e5]
    X86_AT(c, 0xca34au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C6E5u))));
    // 0ca351  add ax, 2
    X86_AT(c, 0xca351u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0ca355  mov word ptr [0x4c5d8], ax
    X86_AT(c, 0xca355u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), (c.r[0] & 0xFFFFu));
    // 0ca35b  mov ax, word ptr [ebx + 0x4c6e9]
    X86_AT(c, 0xca35bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C6E9u))));
    // 0ca362  add ax, 2
    X86_AT(c, 0xca362u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0ca366  mov word ptr [0x4c5da], ax
    X86_AT(c, 0xca366u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[0] & 0xFFFFu));
    // 0ca36c  mov ax, word ptr [ebx + 0x4c6e5]
    X86_AT(c, 0xca36cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C6E5u))));
    // 0ca373  add ax, word ptr [ebx + 0x4c6ed]
    X86_AT(c, 0xca373u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C6EDu))), 0, 2)); }
    // 0ca37a  sub ax, 3
    X86_AT(c, 0xca37au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 0ca37e  mov word ptr [0x4c5dc], ax
    X86_AT(c, 0xca37eu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), (c.r[0] & 0xFFFFu));
    // 0ca384  mov ax, word ptr [ebx + 0x4c6e9]
    X86_AT(c, 0xca384u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C6E9u))));
    // 0ca38b  add ax, word ptr [ebx + 0x4c6f1]
    X86_AT(c, 0xca38bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C6F1u))), 0, 2)); }
    // 0ca392  sub ax, 3
    X86_AT(c, 0xca392u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 0ca396  mov word ptr [0x4c5de], ax
    X86_AT(c, 0xca396u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[0] & 0xFFFFu));
    // 0ca39c  push 0x4c5d8
    X86_AT(c, 0xca39cu);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0ca3a1  push 0xfffffff0
    X86_AT(c, 0xca3a1u);
    { uint32_t v = 0xFFFFFFF0u; push32(c, v); }
    // 0ca3a3  push 0
    X86_AT(c, 0xca3a3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca3a5  push 1
    X86_AT(c, 0xca3a5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ca3a7  push 0x4bfd8
    X86_AT(c, 0xca3a7u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0ca3ac  call 0x6b6
    X86_AT(c, 0xca3acu);
    push32(c, 0xca3b1u); x86_call_known(c, 0x6b6u, f_000006b6); X86_RET(c, 0xca3b1u);
    X86_TICK(c, 14);
    // 0ca3b1  add esp, 0x18
    X86_AT(c, 0xca3b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0ca3b4  cmp dword ptr [ebx + 0x4c719], 0
    X86_AT(c, 0xca3b4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C719u))), 0x0u, 0, 4);
    // 0ca3bb  jne 0xca3c7
    X86_AT(c, 0xca3bbu);
    if (x86_cc(c, 5)) { goto L_ca3c7; }
    X86_TICK(c, 9);
    // 0ca3bd  push 0xb
    X86_AT(c, 0xca3bdu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ca3bf  call 0xc8dec
    X86_AT(c, 0xca3bfu);
    push32(c, 0xca3c4u); x86_call_known(c, 0xc8decu, f_000c8dec); X86_RET(c, 0xca3c4u);
    X86_TICK(c, 2);
    // 0ca3c4  add esp, 4
    X86_AT(c, 0xca3c4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ca3c7:
    X86_TICK(c, 24);
    // 0ca3c7  pop edi
    X86_AT(c, 0xca3c7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca3c8  pop ebx
    X86_AT(c, 0xca3c8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ca3c9  leave 
    X86_AT(c, 0xca3c9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca3ca  ret 
    X86_AT(c, 0xca3cau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca32cu, "ran off the end of a function");
}
void f_000ca3cc(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0ca3cc  push ebp
    X86_AT(c, 0xca3ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca3cd  mov ebp, esp
    X86_AT(c, 0xca3cdu);
    c.r[5] = c.r[4];
    // 0ca3cf  push edi
    X86_AT(c, 0xca3cfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca3d0  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xca3d0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca3d3  lea eax, [edi + edi*2]
    X86_AT(c, 0xca3d3u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0ca3d6  lea edx, [eax + eax*8]
    X86_AT(c, 0xca3d6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0ca3d9  lea edx, [eax + edx*2]
    X86_AT(c, 0xca3d9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ca3dc  mov dword ptr [edx + 0x4c6fd], 0
    X86_AT(c, 0xca3dcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C6FDu)), 0x0u);
    // 0ca3e6  mov eax, dword ptr [edx + 0x4c701]
    X86_AT(c, 0xca3e6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C701u)));
    // 0ca3ec  cmp eax, dword ptr [edx + 0x4c6f9]
    X86_AT(c, 0xca3ecu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C6F9u))), 0, 4);
    // 0ca3f2  jne 0xca3ff
    X86_AT(c, 0xca3f2u);
    if (x86_cc(c, 5)) { goto L_ca3ff; }
    X86_TICK(c, 9);
    // 0ca3f4  push edi
    X86_AT(c, 0xca3f4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca3f5  call 0xca32c
    X86_AT(c, 0xca3f5u);
    push32(c, 0xca3fau); x86_call_known(c, 0xca32cu, f_000ca32c); X86_RET(c, 0xca3fau);
    X86_TICK(c, 9);
    // 0ca3fa  add esp, 4
    X86_AT(c, 0xca3fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ca3fd  jmp 0xca40e
    X86_AT(c, 0xca3fdu);
    goto L_ca40e;
L_ca3ff:
    X86_TICK(c, 12);
    // 0ca3ff  lea eax, [edi + edi*2]
    X86_AT(c, 0xca3ffu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0ca402  lea edx, [eax + eax*8]
    X86_AT(c, 0xca402u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0ca405  lea edx, [eax + edx*2]
    X86_AT(c, 0xca405u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ca408  inc dword ptr [edx + 0x4c701]
    X86_AT(c, 0xca408u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4C701u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_ca40e:
    X86_TICK(c, 20);
    // 0ca40e  pop edi
    X86_AT(c, 0xca40eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca40f  leave 
    X86_AT(c, 0xca40fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca410  ret 
    X86_AT(c, 0xca410u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca3ccu, "ran off the end of a function");
}
void f_000ca414(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0ca414  push ebp
    X86_AT(c, 0xca414u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca415  mov ebp, esp
    X86_AT(c, 0xca415u);
    c.r[5] = c.r[4];
    // 0ca417  sub esp, 0xc
    X86_AT(c, 0xca417u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0ca41a  push ebx
    X86_AT(c, 0xca41au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ca41b  push esi
    X86_AT(c, 0xca41bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ca41c  push edi
    X86_AT(c, 0xca41cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca41d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xca41du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ca420  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xca420u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca423  lea eax, [eax + eax*2]
    X86_AT(c, 0xca423u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ca426  lea edx, [eax + eax*8]
    X86_AT(c, 0xca426u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0ca429  lea edx, [eax + edx*2]
    X86_AT(c, 0xca429u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ca42c  lea ebx, [edx + 0x4c6e4]
    X86_AT(c, 0xca42cu);
    c.r[3] = (uint32_t)(c.r[2] + 0x4C6E4u);
L_ca432:
    X86_TICK(c, 12);
    // 0ca432  cmp byte ptr [edi], 0
    X86_AT(c, 0xca432u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0ca435  je 0xca584
    X86_AT(c, 0xca435u);
    if (x86_cc(c, 4)) { goto L_ca584; }
    X86_TICK(c, 52);
    // 0ca43b  mov dword ptr [ebp - 0xc], 0xa1b7e
    X86_AT(c, 0xca43bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0xA1B7Eu);
    // 0ca442  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0xca442u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 0ca446  add ax, 4
    X86_AT(c, 0xca446u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0ca44a  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0xca44au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0ca44d  shl edx, 3
    X86_AT(c, 0xca44du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0ca450  add edx, eax
    X86_AT(c, 0xca450u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ca452  mov word ptr [0xa1b78], dx
    X86_AT(c, 0xca452u);
    wr16((c.sbase[3] + (uint32_t)(0xA1B78u)), (c.r[2] & 0xFFFFu));
    // 0ca459  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0xca459u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 0ca45d  add ax, 0x11
    X86_AT(c, 0xca45du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0ca461  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xca461u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0ca464  shl edx, 4
    X86_AT(c, 0xca464u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0ca467  add edx, eax
    X86_AT(c, 0xca467u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ca469  mov word ptr [0xa1b7a], dx
    X86_AT(c, 0xca469u);
    wr16((c.sbase[3] + (uint32_t)(0xA1B7Au)), (c.r[2] & 0xFFFFu));
    // 0ca470  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xca470u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0ca477  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0xca477u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 0ca47a  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0xca47au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 0ca47d  inc esi
    X86_AT(c, 0xca47du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ca47e  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0xca47eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_ca481:
    X86_TICK(c, 7);
    // 0ca481  and esi, esi
    X86_AT(c, 0xca481u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ca483  jle 0xca517
    X86_AT(c, 0xca483u);
    if (x86_cc(c, 14)) { goto L_ca517; }
    X86_TICK(c, 17);
    // 0ca489  mov al, byte ptr [edi]
    X86_AT(c, 0xca489u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0ca48b  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xca48bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0ca48e  mov byte ptr [edx], al
    X86_AT(c, 0xca48eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0ca490  cmp esi, 1
    X86_AT(c, 0xca490u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0ca493  jne 0xca4f4
    X86_AT(c, 0xca493u);
    if (x86_cc(c, 5)) { goto L_ca4f4; }
    X86_TICK(c, 11);
    // 0ca499  mov al, byte ptr [edi]
    X86_AT(c, 0xca499u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0ca49b  cmp al, 0x81
    X86_AT(c, 0xca49bu);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0ca49d  jb 0xca4a3
    X86_AT(c, 0xca49du);
    if (x86_cc(c, 2)) { goto L_ca4a3; }
    X86_TICK(c, 7);
    // 0ca49f  cmp al, 0x9f
    X86_AT(c, 0xca49fu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 0ca4a1  jbe 0xca4b1
    X86_AT(c, 0xca4a1u);
    if (x86_cc(c, 6)) { goto L_ca4b1; }
L_ca4a3:
    X86_TICK(c, 11);
    // 0ca4a3  mov al, byte ptr [edi]
    X86_AT(c, 0xca4a3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0ca4a5  cmp al, 0xe0
    X86_AT(c, 0xca4a5u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 0ca4a7  jb 0xca4f4
    X86_AT(c, 0xca4a7u);
    if (x86_cc(c, 2)) { goto L_ca4f4; }
    X86_TICK(c, 7);
    // 0ca4ad  cmp al, 0xfc
    X86_AT(c, 0xca4adu);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0ca4af  ja 0xca4f4
    X86_AT(c, 0xca4afu);
    if (x86_cc(c, 7)) { goto L_ca4f4; }
L_ca4b1:
    X86_TICK(c, 11);
    // 0ca4b1  mov al, byte ptr [edi + 1]
    X86_AT(c, 0xca4b1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0ca4b4  cmp al, 0x40
    X86_AT(c, 0xca4b4u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0ca4b6  jb 0xca4bc
    X86_AT(c, 0xca4b6u);
    if (x86_cc(c, 2)) { goto L_ca4bc; }
    X86_TICK(c, 7);
    // 0ca4b8  cmp al, 0x7e
    X86_AT(c, 0xca4b8u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 0ca4ba  jbe 0xca4c7
    X86_AT(c, 0xca4bau);
    if (x86_cc(c, 6)) { goto L_ca4c7; }
L_ca4bc:
    X86_TICK(c, 11);
    // 0ca4bc  mov al, byte ptr [edi + 1]
    X86_AT(c, 0xca4bcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0ca4bf  cmp al, 0x80
    X86_AT(c, 0xca4bfu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0ca4c1  jb 0xca4f4
    X86_AT(c, 0xca4c1u);
    if (x86_cc(c, 2)) { goto L_ca4f4; }
    X86_TICK(c, 7);
    // 0ca4c3  cmp al, 0xfc
    X86_AT(c, 0xca4c3u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0ca4c5  ja 0xca4f4
    X86_AT(c, 0xca4c5u);
    if (x86_cc(c, 7)) { goto L_ca4f4; }
L_ca4c7:
    X86_TICK(c, 11);
    // 0ca4c7  mov al, byte ptr [edi - 1]
    X86_AT(c, 0xca4c7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 0ca4ca  cmp al, 0x81
    X86_AT(c, 0xca4cau);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0ca4cc  jb 0xca4d2
    X86_AT(c, 0xca4ccu);
    if (x86_cc(c, 2)) { goto L_ca4d2; }
    X86_TICK(c, 7);
    // 0ca4ce  cmp al, 0x9f
    X86_AT(c, 0xca4ceu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 0ca4d0  jbe 0xca4dd
    X86_AT(c, 0xca4d0u);
    if (x86_cc(c, 6)) { goto L_ca4dd; }
L_ca4d2:
    X86_TICK(c, 11);
    // 0ca4d2  mov al, byte ptr [edi - 1]
    X86_AT(c, 0xca4d2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 0ca4d5  cmp al, 0xe0
    X86_AT(c, 0xca4d5u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 0ca4d7  jb 0xca517
    X86_AT(c, 0xca4d7u);
    if (x86_cc(c, 2)) { goto L_ca517; }
    X86_TICK(c, 7);
    // 0ca4d9  cmp al, 0xfc
    X86_AT(c, 0xca4d9u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0ca4db  ja 0xca517
    X86_AT(c, 0xca4dbu);
    if (x86_cc(c, 7)) { goto L_ca517; }
L_ca4dd:
    X86_TICK(c, 11);
    // 0ca4dd  mov al, byte ptr [edi]
    X86_AT(c, 0xca4ddu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0ca4df  cmp al, 0x40
    X86_AT(c, 0xca4dfu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0ca4e1  jb 0xca4e7
    X86_AT(c, 0xca4e1u);
    if (x86_cc(c, 2)) { goto L_ca4e7; }
    X86_TICK(c, 7);
    // 0ca4e3  cmp al, 0x7e
    X86_AT(c, 0xca4e3u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 0ca4e5  jbe 0xca4f1
    X86_AT(c, 0xca4e5u);
    if (x86_cc(c, 6)) { goto L_ca4f1; }
L_ca4e7:
    X86_TICK(c, 11);
    // 0ca4e7  mov al, byte ptr [edi]
    X86_AT(c, 0xca4e7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0ca4e9  cmp al, 0x80
    X86_AT(c, 0xca4e9u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0ca4eb  jb 0xca517
    X86_AT(c, 0xca4ebu);
    if (x86_cc(c, 2)) { goto L_ca517; }
    X86_TICK(c, 7);
    // 0ca4ed  cmp al, 0xfc
    X86_AT(c, 0xca4edu);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0ca4ef  ja 0xca517
    X86_AT(c, 0xca4efu);
    if (x86_cc(c, 7)) { goto L_ca517; }
L_ca4f1:
    X86_TICK(c, 9);
    // 0ca4f1  inc edi
    X86_AT(c, 0xca4f1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca4f2  jmp 0xca517
    X86_AT(c, 0xca4f2u);
    goto L_ca517;
L_ca4f4:
    X86_TICK(c, 12);
    // 0ca4f4  cmp byte ptr [edi], 0xa
    X86_AT(c, 0xca4f4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 0ca4f7  jne 0xca4ff
    X86_AT(c, 0xca4f7u);
    if (x86_cc(c, 5)) { goto L_ca4ff; }
    X86_TICK(c, 15);
    // 0ca4f9  inc edi
    X86_AT(c, 0xca4f9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca4fa  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0xca4fau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ca4fd  jmp 0xca517
    X86_AT(c, 0xca4fdu);
    goto L_ca517;
L_ca4ff:
    X86_TICK(c, 12);
    // 0ca4ff  cmp byte ptr [edi], 0
    X86_AT(c, 0xca4ffu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0ca502  jne 0xca50d
    X86_AT(c, 0xca502u);
    if (x86_cc(c, 5)) { goto L_ca50d; }
    X86_TICK(c, 9);
    // 0ca504  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xca504u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0ca50b  jmp 0xca517
    X86_AT(c, 0xca50bu);
    goto L_ca517;
L_ca50d:
    X86_TICK(c, 17);
    // 0ca50d  dec esi
    X86_AT(c, 0xca50du);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0ca50e  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xca50eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ca511  inc edi
    X86_AT(c, 0xca511u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca512  jmp 0xca481
    X86_AT(c, 0xca512u);
    X86_POLL(c, 0xca481u); goto L_ca481;
L_ca517:
    X86_TICK(c, 33);
    // 0ca517  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xca517u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ca51a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xca51au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0ca51d  mov byte ptr [eax], 0
    X86_AT(c, 0xca51du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 0ca520  mov eax, esi
    X86_AT(c, 0xca520u);
    c.r[0] = c.r[6];
    // 0ca522  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0xca522u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 0ca526  sub edx, eax
    X86_AT(c, 0xca526u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ca528  mov word ptr [0xa1b7c], dx
    X86_AT(c, 0xca528u);
    wr16((c.sbase[3] + (uint32_t)(0xA1B7Cu)), (c.r[2] & 0xFFFFu));
    // 0ca52f  push 0xa1b78
    X86_AT(c, 0xca52fu);
    { uint32_t v = 0xA1B78u; push32(c, v); }
    // 0ca534  push 0x4bfd8
    X86_AT(c, 0xca534u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0ca539  call 0xa7d
    X86_AT(c, 0xca539u);
    push32(c, 0xca53eu); x86_call_known(c, 0xa7du, f_00000a7d); X86_RET(c, 0xca53eu);
    X86_TICK(c, 28);
    // 0ca53e  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0xca53eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0ca541  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0xca541u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0ca544  sub eax, esi
    X86_AT(c, 0xca544u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0ca546  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0xca546u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 0ca549  add esp, 8
    X86_AT(c, 0xca549u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ca54c  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xca54cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0ca550  jne 0xca432
    X86_AT(c, 0xca550u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xca432u); goto L_ca432; }
    X86_TICK(c, 15);
    // 0ca556  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xca556u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0ca559  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0xca559u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 0ca55c  jne 0xca575
    X86_AT(c, 0xca55cu);
    if (x86_cc(c, 5)) { goto L_ca575; }
    X86_TICK(c, 12);
    // 0ca55e  push dword ptr [ebp + 8]
    X86_AT(c, 0xca55eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0ca561  call 0xca32c
    X86_AT(c, 0xca561u);
    push32(c, 0xca566u); x86_call_known(c, 0xca32cu, f_000ca32c); X86_RET(c, 0xca566u);
    X86_TICK(c, 11);
    // 0ca566  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xca566u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0ca56d  add esp, 4
    X86_AT(c, 0xca56du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ca570  jmp 0xca432
    X86_AT(c, 0xca570u);
    X86_POLL(c, 0xca432u); goto L_ca432;
L_ca575:
    X86_TICK(c, 15);
    // 0ca575  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xca575u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0ca57c  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0xca57cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ca57f  jmp 0xca432
    X86_AT(c, 0xca57fu);
    X86_POLL(c, 0xca432u); goto L_ca432;
L_ca584:
    X86_TICK(c, 28);
    // 0ca584  pop edi
    X86_AT(c, 0xca584u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca585  pop esi
    X86_AT(c, 0xca585u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ca586  pop ebx
    X86_AT(c, 0xca586u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ca587  leave 
    X86_AT(c, 0xca587u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca588  ret 
    X86_AT(c, 0xca588u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca414u, "ran off the end of a function");
}
void f_000ca432(X86Cpu& c) {
L_ca432:
    X86_TICK(c, 12);
    // 0ca432  cmp byte ptr [edi], 0
    X86_AT(c, 0xca432u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0ca435  je 0xca584
    X86_AT(c, 0xca435u);
    if (x86_cc(c, 4)) { goto L_ca584; }
    X86_TICK(c, 52);
    // 0ca43b  mov dword ptr [ebp - 0xc], 0xa1b7e
    X86_AT(c, 0xca43bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0xA1B7Eu);
    // 0ca442  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0xca442u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 0ca446  add ax, 4
    X86_AT(c, 0xca446u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0ca44a  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0xca44au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0ca44d  shl edx, 3
    X86_AT(c, 0xca44du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0ca450  add edx, eax
    X86_AT(c, 0xca450u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ca452  mov word ptr [0xa1b78], dx
    X86_AT(c, 0xca452u);
    wr16((c.sbase[3] + (uint32_t)(0xA1B78u)), (c.r[2] & 0xFFFFu));
    // 0ca459  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0xca459u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 0ca45d  add ax, 0x11
    X86_AT(c, 0xca45du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0ca461  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xca461u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0ca464  shl edx, 4
    X86_AT(c, 0xca464u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0ca467  add edx, eax
    X86_AT(c, 0xca467u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ca469  mov word ptr [0xa1b7a], dx
    X86_AT(c, 0xca469u);
    wr16((c.sbase[3] + (uint32_t)(0xA1B7Au)), (c.r[2] & 0xFFFFu));
    // 0ca470  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xca470u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0ca477  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0xca477u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 0ca47a  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0xca47au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 0ca47d  inc esi
    X86_AT(c, 0xca47du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ca47e  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0xca47eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_ca481:
    X86_TICK(c, 7);
    // 0ca481  and esi, esi
    X86_AT(c, 0xca481u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ca483  jle 0xca517
    X86_AT(c, 0xca483u);
    if (x86_cc(c, 14)) { goto L_ca517; }
    X86_TICK(c, 17);
    // 0ca489  mov al, byte ptr [edi]
    X86_AT(c, 0xca489u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0ca48b  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xca48bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0ca48e  mov byte ptr [edx], al
    X86_AT(c, 0xca48eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0ca490  cmp esi, 1
    X86_AT(c, 0xca490u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0ca493  jne 0xca4f4
    X86_AT(c, 0xca493u);
    if (x86_cc(c, 5)) { goto L_ca4f4; }
    X86_TICK(c, 11);
    // 0ca499  mov al, byte ptr [edi]
    X86_AT(c, 0xca499u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0ca49b  cmp al, 0x81
    X86_AT(c, 0xca49bu);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0ca49d  jb 0xca4a3
    X86_AT(c, 0xca49du);
    if (x86_cc(c, 2)) { goto L_ca4a3; }
    X86_TICK(c, 7);
    // 0ca49f  cmp al, 0x9f
    X86_AT(c, 0xca49fu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 0ca4a1  jbe 0xca4b1
    X86_AT(c, 0xca4a1u);
    if (x86_cc(c, 6)) { goto L_ca4b1; }
L_ca4a3:
    X86_TICK(c, 11);
    // 0ca4a3  mov al, byte ptr [edi]
    X86_AT(c, 0xca4a3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0ca4a5  cmp al, 0xe0
    X86_AT(c, 0xca4a5u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 0ca4a7  jb 0xca4f4
    X86_AT(c, 0xca4a7u);
    if (x86_cc(c, 2)) { goto L_ca4f4; }
    X86_TICK(c, 7);
    // 0ca4ad  cmp al, 0xfc
    X86_AT(c, 0xca4adu);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0ca4af  ja 0xca4f4
    X86_AT(c, 0xca4afu);
    if (x86_cc(c, 7)) { goto L_ca4f4; }
L_ca4b1:
    X86_TICK(c, 11);
    // 0ca4b1  mov al, byte ptr [edi + 1]
    X86_AT(c, 0xca4b1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0ca4b4  cmp al, 0x40
    X86_AT(c, 0xca4b4u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0ca4b6  jb 0xca4bc
    X86_AT(c, 0xca4b6u);
    if (x86_cc(c, 2)) { goto L_ca4bc; }
    X86_TICK(c, 7);
    // 0ca4b8  cmp al, 0x7e
    X86_AT(c, 0xca4b8u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 0ca4ba  jbe 0xca4c7
    X86_AT(c, 0xca4bau);
    if (x86_cc(c, 6)) { goto L_ca4c7; }
L_ca4bc:
    X86_TICK(c, 11);
    // 0ca4bc  mov al, byte ptr [edi + 1]
    X86_AT(c, 0xca4bcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0ca4bf  cmp al, 0x80
    X86_AT(c, 0xca4bfu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0ca4c1  jb 0xca4f4
    X86_AT(c, 0xca4c1u);
    if (x86_cc(c, 2)) { goto L_ca4f4; }
    X86_TICK(c, 7);
    // 0ca4c3  cmp al, 0xfc
    X86_AT(c, 0xca4c3u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0ca4c5  ja 0xca4f4
    X86_AT(c, 0xca4c5u);
    if (x86_cc(c, 7)) { goto L_ca4f4; }
L_ca4c7:
    X86_TICK(c, 11);
    // 0ca4c7  mov al, byte ptr [edi - 1]
    X86_AT(c, 0xca4c7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 0ca4ca  cmp al, 0x81
    X86_AT(c, 0xca4cau);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0ca4cc  jb 0xca4d2
    X86_AT(c, 0xca4ccu);
    if (x86_cc(c, 2)) { goto L_ca4d2; }
    X86_TICK(c, 7);
    // 0ca4ce  cmp al, 0x9f
    X86_AT(c, 0xca4ceu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 0ca4d0  jbe 0xca4dd
    X86_AT(c, 0xca4d0u);
    if (x86_cc(c, 6)) { goto L_ca4dd; }
L_ca4d2:
    X86_TICK(c, 11);
    // 0ca4d2  mov al, byte ptr [edi - 1]
    X86_AT(c, 0xca4d2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 0ca4d5  cmp al, 0xe0
    X86_AT(c, 0xca4d5u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 0ca4d7  jb 0xca517
    X86_AT(c, 0xca4d7u);
    if (x86_cc(c, 2)) { goto L_ca517; }
    X86_TICK(c, 7);
    // 0ca4d9  cmp al, 0xfc
    X86_AT(c, 0xca4d9u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0ca4db  ja 0xca517
    X86_AT(c, 0xca4dbu);
    if (x86_cc(c, 7)) { goto L_ca517; }
L_ca4dd:
    X86_TICK(c, 11);
    // 0ca4dd  mov al, byte ptr [edi]
    X86_AT(c, 0xca4ddu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0ca4df  cmp al, 0x40
    X86_AT(c, 0xca4dfu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0ca4e1  jb 0xca4e7
    X86_AT(c, 0xca4e1u);
    if (x86_cc(c, 2)) { goto L_ca4e7; }
    X86_TICK(c, 7);
    // 0ca4e3  cmp al, 0x7e
    X86_AT(c, 0xca4e3u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 0ca4e5  jbe 0xca4f1
    X86_AT(c, 0xca4e5u);
    if (x86_cc(c, 6)) { goto L_ca4f1; }
L_ca4e7:
    X86_TICK(c, 11);
    // 0ca4e7  mov al, byte ptr [edi]
    X86_AT(c, 0xca4e7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0ca4e9  cmp al, 0x80
    X86_AT(c, 0xca4e9u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0ca4eb  jb 0xca517
    X86_AT(c, 0xca4ebu);
    if (x86_cc(c, 2)) { goto L_ca517; }
    X86_TICK(c, 7);
    // 0ca4ed  cmp al, 0xfc
    X86_AT(c, 0xca4edu);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0ca4ef  ja 0xca517
    X86_AT(c, 0xca4efu);
    if (x86_cc(c, 7)) { goto L_ca517; }
L_ca4f1:
    X86_TICK(c, 9);
    // 0ca4f1  inc edi
    X86_AT(c, 0xca4f1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca4f2  jmp 0xca517
    X86_AT(c, 0xca4f2u);
    goto L_ca517;
L_ca4f4:
    X86_TICK(c, 12);
    // 0ca4f4  cmp byte ptr [edi], 0xa
    X86_AT(c, 0xca4f4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 0ca4f7  jne 0xca4ff
    X86_AT(c, 0xca4f7u);
    if (x86_cc(c, 5)) { goto L_ca4ff; }
    X86_TICK(c, 15);
    // 0ca4f9  inc edi
    X86_AT(c, 0xca4f9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca4fa  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0xca4fau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ca4fd  jmp 0xca517
    X86_AT(c, 0xca4fdu);
    goto L_ca517;
L_ca4ff:
    X86_TICK(c, 12);
    // 0ca4ff  cmp byte ptr [edi], 0
    X86_AT(c, 0xca4ffu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0ca502  jne 0xca50d
    X86_AT(c, 0xca502u);
    if (x86_cc(c, 5)) { goto L_ca50d; }
    X86_TICK(c, 9);
    // 0ca504  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xca504u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0ca50b  jmp 0xca517
    X86_AT(c, 0xca50bu);
    goto L_ca517;
L_ca50d:
    X86_TICK(c, 17);
    // 0ca50d  dec esi
    X86_AT(c, 0xca50du);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0ca50e  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xca50eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ca511  inc edi
    X86_AT(c, 0xca511u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca512  jmp 0xca481
    X86_AT(c, 0xca512u);
    X86_POLL(c, 0xca481u); goto L_ca481;
L_ca517:
    X86_TICK(c, 33);
    // 0ca517  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xca517u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ca51a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xca51au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0ca51d  mov byte ptr [eax], 0
    X86_AT(c, 0xca51du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 0ca520  mov eax, esi
    X86_AT(c, 0xca520u);
    c.r[0] = c.r[6];
    // 0ca522  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0xca522u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 0ca526  sub edx, eax
    X86_AT(c, 0xca526u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ca528  mov word ptr [0xa1b7c], dx
    X86_AT(c, 0xca528u);
    wr16((c.sbase[3] + (uint32_t)(0xA1B7Cu)), (c.r[2] & 0xFFFFu));
    // 0ca52f  push 0xa1b78
    X86_AT(c, 0xca52fu);
    { uint32_t v = 0xA1B78u; push32(c, v); }
    // 0ca534  push 0x4bfd8
    X86_AT(c, 0xca534u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0ca539  call 0xa7d
    X86_AT(c, 0xca539u);
    push32(c, 0xca53eu); x86_call_known(c, 0xa7du, f_00000a7d); X86_RET(c, 0xca53eu);
    X86_TICK(c, 28);
    // 0ca53e  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0xca53eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0ca541  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0xca541u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0ca544  sub eax, esi
    X86_AT(c, 0xca544u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0ca546  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0xca546u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 0ca549  add esp, 8
    X86_AT(c, 0xca549u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ca54c  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xca54cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0ca550  jne 0xca432
    X86_AT(c, 0xca550u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xca432u); goto L_ca432; }
    X86_TICK(c, 15);
    // 0ca556  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xca556u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0ca559  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0xca559u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 0ca55c  jne 0xca575
    X86_AT(c, 0xca55cu);
    if (x86_cc(c, 5)) { goto L_ca575; }
    X86_TICK(c, 12);
    // 0ca55e  push dword ptr [ebp + 8]
    X86_AT(c, 0xca55eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0ca561  call 0xca32c
    X86_AT(c, 0xca561u);
    push32(c, 0xca566u); x86_call_known(c, 0xca32cu, f_000ca32c); X86_RET(c, 0xca566u);
    X86_TICK(c, 11);
    // 0ca566  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xca566u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0ca56d  add esp, 4
    X86_AT(c, 0xca56du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ca570  jmp 0xca432
    X86_AT(c, 0xca570u);
    X86_POLL(c, 0xca432u); goto L_ca432;
L_ca575:
    X86_TICK(c, 15);
    // 0ca575  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xca575u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0ca57c  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0xca57cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ca57f  jmp 0xca432
    X86_AT(c, 0xca57fu);
    X86_POLL(c, 0xca432u); goto L_ca432;
L_ca584:
    X86_TICK(c, 28);
    // 0ca584  pop edi
    X86_AT(c, 0xca584u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca585  pop esi
    X86_AT(c, 0xca585u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ca586  pop ebx
    X86_AT(c, 0xca586u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ca587  leave 
    X86_AT(c, 0xca587u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca588  ret 
    X86_AT(c, 0xca588u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca432u, "ran off the end of a function");
}
void f_000ca58c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0ca58c  push ebp
    X86_AT(c, 0xca58cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca58d  mov ebp, esp
    X86_AT(c, 0xca58du);
    c.r[5] = c.r[4];
    // 0ca58f  push ebx
    X86_AT(c, 0xca58fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ca590  push esi
    X86_AT(c, 0xca590u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ca591  push edi
    X86_AT(c, 0xca591u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca592  sub esi, esi
    X86_AT(c, 0xca592u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0ca594  movzx edx, byte ptr [ebp + 0xc]
    X86_AT(c, 0xca594u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ca598  sub edx, 0x20
    X86_AT(c, 0xca598u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0ca59b  cmp edx, 0x3a
    X86_AT(c, 0xca59bu);
    (void)x86_sub(c, c.r[2], 0x3Au, 0, 4);
    // 0ca59e  ja 0xca7da
    X86_AT(c, 0xca59eu);
    if (x86_cc(c, 7)) { goto L_ca7da; }
    X86_TICK(c, 7);
    // 0ca5a4  jmp dword ptr cs:[edx*4 + 0xca5ac]
    X86_AT(c, 0xca5a4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCA5ACu)));
      switch (t) {
      case 0xca698u: goto L_ca698;
      case 0xca6a1u: goto L_ca6a1;
      case 0xca6aau: goto L_ca6aa;
      case 0xca6b3u: goto L_ca6b3;
      case 0xca6bcu: goto L_ca6bc;
      case 0xca6c5u: goto L_ca6c5;
      case 0xca6ceu: goto L_ca6ce;
      case 0xca6d7u: goto L_ca6d7;
      case 0xca6e0u: goto L_ca6e0;
      case 0xca6e9u: goto L_ca6e9;
      case 0xca6f2u: goto L_ca6f2;
      case 0xca6fbu: goto L_ca6fb;
      case 0xca704u: goto L_ca704;
      case 0xca70du: goto L_ca70d;
      case 0xca716u: goto L_ca716;
      case 0xca71fu: goto L_ca71f;
      case 0xca728u: goto L_ca728;
      case 0xca731u: goto L_ca731;
      case 0xca73au: goto L_ca73a;
      case 0xca743u: goto L_ca743;
      case 0xca74cu: goto L_ca74c;
      case 0xca755u: goto L_ca755;
      case 0xca75eu: goto L_ca75e;
      case 0xca767u: goto L_ca767;
      case 0xca770u: goto L_ca770;
      case 0xca779u: goto L_ca779;
      case 0xca782u: goto L_ca782;
      case 0xca788u: goto L_ca788;
      case 0xca78eu: goto L_ca78e;
      case 0xca794u: goto L_ca794;
      case 0xca79au: goto L_ca79a;
      case 0xca7a0u: goto L_ca7a0;
      case 0xca7a6u: goto L_ca7a6;
      case 0xca7acu: goto L_ca7ac;
      case 0xca7b2u: goto L_ca7b2;
      case 0xca7b8u: goto L_ca7b8;
      case 0xca7beu: goto L_ca7be;
      case 0xca7c4u: goto L_ca7c4;
      case 0xca7cau: goto L_ca7ca;
      case 0xca7d0u: goto L_ca7d0;
      case 0xca7d6u: goto L_ca7d6;
      case 0xca7dau: goto L_ca7da;
      default: x86_jump(c, t); return; } }
L_ca698:
    X86_TICK(c, 9);
    // 0ca698  mov si, 0x4081
    X86_AT(c, 0xca698u);
    s16(c, 6, 0x4081u);
    // 0ca69c  jmp 0xca7da
    X86_AT(c, 0xca69cu);
    goto L_ca7da;
L_ca6a1:
    X86_TICK(c, 9);
    // 0ca6a1  mov si, 0x4681
    X86_AT(c, 0xca6a1u);
    s16(c, 6, 0x4681u);
    // 0ca6a5  jmp 0xca7da
    X86_AT(c, 0xca6a5u);
    goto L_ca7da;
L_ca6aa:
    X86_TICK(c, 9);
    // 0ca6aa  mov si, 0x75eb
    X86_AT(c, 0xca6aau);
    s16(c, 6, 0x75EBu);
    // 0ca6ae  jmp 0xca7da
    X86_AT(c, 0xca6aeu);
    goto L_ca7da;
L_ca6b3:
    X86_TICK(c, 9);
    // 0ca6b3  mov si, 0x74eb
    X86_AT(c, 0xca6b3u);
    s16(c, 6, 0x74EBu);
    // 0ca6b7  jmp 0xca7da
    X86_AT(c, 0xca6b7u);
    goto L_ca7da;
L_ca6bc:
    X86_TICK(c, 9);
    // 0ca6bc  mov si, 0x5e81
    X86_AT(c, 0xca6bcu);
    s16(c, 6, 0x5E81u);
    // 0ca6c0  jmp 0xca7da
    X86_AT(c, 0xca6c0u);
    goto L_ca7da;
L_ca6c5:
    X86_TICK(c, 9);
    // 0ca6c5  mov si, 0x80eb
    X86_AT(c, 0xca6c5u);
    s16(c, 6, 0x80EBu);
    // 0ca6c9  jmp 0xca7da
    X86_AT(c, 0xca6c9u);
    goto L_ca7da;
L_ca6ce:
    X86_TICK(c, 9);
    // 0ca6ce  mov si, 0x76eb
    X86_AT(c, 0xca6ceu);
    s16(c, 6, 0x76EBu);
    // 0ca6d2  jmp 0xca7da
    X86_AT(c, 0xca6d2u);
    goto L_ca7da;
L_ca6d7:
    X86_TICK(c, 9);
    // 0ca6d7  mov si, 0x77eb
    X86_AT(c, 0xca6d7u);
    s16(c, 6, 0x77EBu);
    // 0ca6db  jmp 0xca7da
    X86_AT(c, 0xca6dbu);
    goto L_ca7da;
L_ca6e0:
    X86_TICK(c, 9);
    // 0ca6e0  mov si, 0x78eb
    X86_AT(c, 0xca6e0u);
    s16(c, 6, 0x78EBu);
    // 0ca6e4  jmp 0xca7da
    X86_AT(c, 0xca6e4u);
    goto L_ca7da;
L_ca6e9:
    X86_TICK(c, 9);
    // 0ca6e9  mov si, 0x79eb
    X86_AT(c, 0xca6e9u);
    s16(c, 6, 0x79EBu);
    // 0ca6ed  jmp 0xca7da
    X86_AT(c, 0xca6edu);
    goto L_ca7da;
L_ca6f2:
    X86_TICK(c, 9);
    // 0ca6f2  mov si, 0x7aeb
    X86_AT(c, 0xca6f2u);
    s16(c, 6, 0x7AEBu);
    // 0ca6f6  jmp 0xca7da
    X86_AT(c, 0xca6f6u);
    goto L_ca7da;
L_ca6fb:
    X86_TICK(c, 9);
    // 0ca6fb  mov si, 0x7beb
    X86_AT(c, 0xca6fbu);
    s16(c, 6, 0x7BEBu);
    // 0ca6ff  jmp 0xca7da
    X86_AT(c, 0xca6ffu);
    goto L_ca7da;
L_ca704:
    X86_TICK(c, 9);
    // 0ca704  mov si, 0x7ceb
    X86_AT(c, 0xca704u);
    s16(c, 6, 0x7CEBu);
    // 0ca708  jmp 0xca7da
    X86_AT(c, 0xca708u);
    goto L_ca7da;
L_ca70d:
    X86_TICK(c, 9);
    // 0ca70d  mov si, 0x7deb
    X86_AT(c, 0xca70du);
    s16(c, 6, 0x7DEBu);
    // 0ca711  jmp 0xca7da
    X86_AT(c, 0xca711u);
    goto L_ca7da;
L_ca716:
    X86_TICK(c, 9);
    // 0ca716  mov si, 0x7eeb
    X86_AT(c, 0xca716u);
    s16(c, 6, 0x7EEBu);
    // 0ca71a  jmp 0xca7da
    X86_AT(c, 0xca71au);
    goto L_ca7da;
L_ca71f:
    X86_TICK(c, 9);
    // 0ca71f  mov si, 0x40eb
    X86_AT(c, 0xca71fu);
    s16(c, 6, 0x40EBu);
    // 0ca723  jmp 0xca7da
    X86_AT(c, 0xca723u);
    goto L_ca7da;
L_ca728:
    X86_TICK(c, 9);
    // 0ca728  mov si, 0x41eb
    X86_AT(c, 0xca728u);
    s16(c, 6, 0x41EBu);
    // 0ca72c  jmp 0xca7da
    X86_AT(c, 0xca72cu);
    goto L_ca7da;
L_ca731:
    X86_TICK(c, 9);
    // 0ca731  mov si, 0x42eb
    X86_AT(c, 0xca731u);
    s16(c, 6, 0x42EBu);
    // 0ca735  jmp 0xca7da
    X86_AT(c, 0xca735u);
    goto L_ca7da;
L_ca73a:
    X86_TICK(c, 9);
    // 0ca73a  mov si, 0x43eb
    X86_AT(c, 0xca73au);
    s16(c, 6, 0x43EBu);
    // 0ca73e  jmp 0xca7da
    X86_AT(c, 0xca73eu);
    goto L_ca7da;
L_ca743:
    X86_TICK(c, 9);
    // 0ca743  mov si, 0x44eb
    X86_AT(c, 0xca743u);
    s16(c, 6, 0x44EBu);
    // 0ca747  jmp 0xca7da
    X86_AT(c, 0xca747u);
    goto L_ca7da;
L_ca74c:
    X86_TICK(c, 9);
    // 0ca74c  mov si, 0x45eb
    X86_AT(c, 0xca74cu);
    s16(c, 6, 0x45EBu);
    // 0ca750  jmp 0xca7da
    X86_AT(c, 0xca750u);
    goto L_ca7da;
L_ca755:
    X86_TICK(c, 9);
    // 0ca755  mov si, 0x46eb
    X86_AT(c, 0xca755u);
    s16(c, 6, 0x46EBu);
    // 0ca759  jmp 0xca7da
    X86_AT(c, 0xca759u);
    goto L_ca7da;
L_ca75e:
    X86_TICK(c, 9);
    // 0ca75e  mov si, 0x47eb
    X86_AT(c, 0xca75eu);
    s16(c, 6, 0x47EBu);
    // 0ca762  jmp 0xca7da
    X86_AT(c, 0xca762u);
    goto L_ca7da;
L_ca767:
    X86_TICK(c, 9);
    // 0ca767  mov si, 0x48eb
    X86_AT(c, 0xca767u);
    s16(c, 6, 0x48EBu);
    // 0ca76b  jmp 0xca7da
    X86_AT(c, 0xca76bu);
    goto L_ca7da;
L_ca770:
    X86_TICK(c, 9);
    // 0ca770  mov si, 0x49eb
    X86_AT(c, 0xca770u);
    s16(c, 6, 0x49EBu);
    // 0ca774  jmp 0xca7da
    X86_AT(c, 0xca774u);
    goto L_ca7da;
L_ca779:
    X86_TICK(c, 9);
    // 0ca779  mov si, 0x4aeb
    X86_AT(c, 0xca779u);
    s16(c, 6, 0x4AEBu);
    // 0ca77d  jmp 0xca7da
    X86_AT(c, 0xca77du);
    goto L_ca7da;
L_ca782:
    X86_TICK(c, 9);
    // 0ca782  mov si, 0x4beb
    X86_AT(c, 0xca782u);
    s16(c, 6, 0x4BEBu);
    // 0ca786  jmp 0xca7da
    X86_AT(c, 0xca786u);
    goto L_ca7da;
L_ca788:
    X86_TICK(c, 9);
    // 0ca788  mov si, 0x4ceb
    X86_AT(c, 0xca788u);
    s16(c, 6, 0x4CEBu);
    // 0ca78c  jmp 0xca7da
    X86_AT(c, 0xca78cu);
    goto L_ca7da;
L_ca78e:
    X86_TICK(c, 9);
    // 0ca78e  mov si, 0x4deb
    X86_AT(c, 0xca78eu);
    s16(c, 6, 0x4DEBu);
    // 0ca792  jmp 0xca7da
    X86_AT(c, 0xca792u);
    goto L_ca7da;
L_ca794:
    X86_TICK(c, 9);
    // 0ca794  mov si, 0x4eeb
    X86_AT(c, 0xca794u);
    s16(c, 6, 0x4EEBu);
    // 0ca798  jmp 0xca7da
    X86_AT(c, 0xca798u);
    goto L_ca7da;
L_ca79a:
    X86_TICK(c, 9);
    // 0ca79a  mov si, 0x4feb
    X86_AT(c, 0xca79au);
    s16(c, 6, 0x4FEBu);
    // 0ca79e  jmp 0xca7da
    X86_AT(c, 0xca79eu);
    goto L_ca7da;
L_ca7a0:
    X86_TICK(c, 9);
    // 0ca7a0  mov si, 0x50eb
    X86_AT(c, 0xca7a0u);
    s16(c, 6, 0x50EBu);
    // 0ca7a4  jmp 0xca7da
    X86_AT(c, 0xca7a4u);
    goto L_ca7da;
L_ca7a6:
    X86_TICK(c, 9);
    // 0ca7a6  mov si, 0x51eb
    X86_AT(c, 0xca7a6u);
    s16(c, 6, 0x51EBu);
    // 0ca7aa  jmp 0xca7da
    X86_AT(c, 0xca7aau);
    goto L_ca7da;
L_ca7ac:
    X86_TICK(c, 9);
    // 0ca7ac  mov si, 0x52eb
    X86_AT(c, 0xca7acu);
    s16(c, 6, 0x52EBu);
    // 0ca7b0  jmp 0xca7da
    X86_AT(c, 0xca7b0u);
    goto L_ca7da;
L_ca7b2:
    X86_TICK(c, 9);
    // 0ca7b2  mov si, 0x53eb
    X86_AT(c, 0xca7b2u);
    s16(c, 6, 0x53EBu);
    // 0ca7b6  jmp 0xca7da
    X86_AT(c, 0xca7b6u);
    goto L_ca7da;
L_ca7b8:
    X86_TICK(c, 9);
    // 0ca7b8  mov si, 0x54eb
    X86_AT(c, 0xca7b8u);
    s16(c, 6, 0x54EBu);
    // 0ca7bc  jmp 0xca7da
    X86_AT(c, 0xca7bcu);
    goto L_ca7da;
L_ca7be:
    X86_TICK(c, 9);
    // 0ca7be  mov si, 0x55eb
    X86_AT(c, 0xca7beu);
    s16(c, 6, 0x55EBu);
    // 0ca7c2  jmp 0xca7da
    X86_AT(c, 0xca7c2u);
    goto L_ca7da;
L_ca7c4:
    X86_TICK(c, 9);
    // 0ca7c4  mov si, 0x56eb
    X86_AT(c, 0xca7c4u);
    s16(c, 6, 0x56EBu);
    // 0ca7c8  jmp 0xca7da
    X86_AT(c, 0xca7c8u);
    goto L_ca7da;
L_ca7ca:
    X86_TICK(c, 9);
    // 0ca7ca  mov si, 0x57eb
    X86_AT(c, 0xca7cau);
    s16(c, 6, 0x57EBu);
    // 0ca7ce  jmp 0xca7da
    X86_AT(c, 0xca7ceu);
    goto L_ca7da;
L_ca7d0:
    X86_TICK(c, 9);
    // 0ca7d0  mov si, 0x58eb
    X86_AT(c, 0xca7d0u);
    s16(c, 6, 0x58EBu);
    // 0ca7d4  jmp 0xca7da
    X86_AT(c, 0xca7d4u);
    goto L_ca7da;
L_ca7d6:
    X86_TICK(c, 2);
    // 0ca7d6  mov si, 0x59eb
    X86_AT(c, 0xca7d6u);
    s16(c, 6, 0x59EBu);
L_ca7da:
    X86_TICK(c, 7);
    // 0ca7da  and si, si
    X86_AT(c, 0xca7dau);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0ca7dd  je 0xca84a
    X86_AT(c, 0xca7ddu);
    if (x86_cc(c, 4)) { goto L_ca84a; }
    X86_TICK(c, 67);
    // 0ca7df  mov eax, 0x43fd4
    X86_AT(c, 0xca7dfu);
    c.r[0] = 0x43FD4u;
    // 0ca7e4  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xca7e4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca7e7  lea edx, [edx + edx*2]
    X86_AT(c, 0xca7e7u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0ca7ea  lea ecx, [edx + edx*8]
    X86_AT(c, 0xca7eau);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0ca7ed  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xca7edu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0ca7f0  lea edi, [eax + ecx*1 + 0x8710]
    X86_AT(c, 0xca7f0u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x8710u);
    // 0ca7f7  mov dx, word ptr [edi + 1]
    X86_AT(c, 0xca7f7u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0ca7fb  add dx, 4
    X86_AT(c, 0xca7fbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 0ca7ff  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0xca7ffu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 0ca802  shl ebx, 3
    X86_AT(c, 0xca802u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 0ca805  add ebx, edx
    X86_AT(c, 0xca805u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 0ca807  mov word ptr [eax + 0x5dcac], bx
    X86_AT(c, 0xca807u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5DCACu)), (c.r[3] & 0xFFFFu));
    // 0ca80e  mov dx, word ptr [edi + 5]
    X86_AT(c, 0xca80eu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0ca812  add dx, 0x11
    X86_AT(c, 0xca812u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 0ca816  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xca816u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0ca819  shl ebx, 4
    X86_AT(c, 0xca819u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0ca81c  add ebx, edx
    X86_AT(c, 0xca81cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 0ca81e  mov word ptr [eax + 0x5dcae], bx
    X86_AT(c, 0xca81eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5DCAEu)), (c.r[3] & 0xFFFFu));
    // 0ca825  mov word ptr [eax + 0x5dcb0], 2
    X86_AT(c, 0xca825u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5DCB0u)), 0x2u);
    // 0ca82e  mov word ptr [eax + 0x5dcb2], si
    X86_AT(c, 0xca82eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5DCB2u)), (c.r[6] & 0xFFFFu));
    // 0ca835  lea edx, [eax + 0x5dcac]
    X86_AT(c, 0xca835u);
    c.r[2] = (uint32_t)(c.r[0] + 0x5DCACu);
    // 0ca83b  push edx
    X86_AT(c, 0xca83bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ca83c  add eax, 0x8004
    X86_AT(c, 0xca83cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8004u, 0, 4); }
    // 0ca841  push eax
    X86_AT(c, 0xca841u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca842  call 0xa7d
    X86_AT(c, 0xca842u);
    push32(c, 0xca847u); x86_call_known(c, 0xa7du, f_00000a7d); X86_RET(c, 0xca847u);
    X86_TICK(c, 2);
    // 0ca847  add esp, 8
    X86_AT(c, 0xca847u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ca84a:
    X86_TICK(c, 28);
    // 0ca84a  pop edi
    X86_AT(c, 0xca84au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca84b  pop esi
    X86_AT(c, 0xca84bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ca84c  pop ebx
    X86_AT(c, 0xca84cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ca84d  leave 
    X86_AT(c, 0xca84du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca84e  ret 
    X86_AT(c, 0xca84eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca58cu, "ran off the end of a function");
}
void f_000ca7da(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0ca7da  and si, si
    X86_AT(c, 0xca7dau);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0ca7dd  je 0xca84a
    X86_AT(c, 0xca7ddu);
    if (x86_cc(c, 4)) { goto L_ca84a; }
    X86_TICK(c, 67);
    // 0ca7df  mov eax, 0x43fd4
    X86_AT(c, 0xca7dfu);
    c.r[0] = 0x43FD4u;
    // 0ca7e4  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xca7e4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca7e7  lea edx, [edx + edx*2]
    X86_AT(c, 0xca7e7u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0ca7ea  lea ecx, [edx + edx*8]
    X86_AT(c, 0xca7eau);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0ca7ed  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xca7edu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0ca7f0  lea edi, [eax + ecx*1 + 0x8710]
    X86_AT(c, 0xca7f0u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x8710u);
    // 0ca7f7  mov dx, word ptr [edi + 1]
    X86_AT(c, 0xca7f7u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0ca7fb  add dx, 4
    X86_AT(c, 0xca7fbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 0ca7ff  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0xca7ffu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 0ca802  shl ebx, 3
    X86_AT(c, 0xca802u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 0ca805  add ebx, edx
    X86_AT(c, 0xca805u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 0ca807  mov word ptr [eax + 0x5dcac], bx
    X86_AT(c, 0xca807u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5DCACu)), (c.r[3] & 0xFFFFu));
    // 0ca80e  mov dx, word ptr [edi + 5]
    X86_AT(c, 0xca80eu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0ca812  add dx, 0x11
    X86_AT(c, 0xca812u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 0ca816  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xca816u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0ca819  shl ebx, 4
    X86_AT(c, 0xca819u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0ca81c  add ebx, edx
    X86_AT(c, 0xca81cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 0ca81e  mov word ptr [eax + 0x5dcae], bx
    X86_AT(c, 0xca81eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5DCAEu)), (c.r[3] & 0xFFFFu));
    // 0ca825  mov word ptr [eax + 0x5dcb0], 2
    X86_AT(c, 0xca825u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5DCB0u)), 0x2u);
    // 0ca82e  mov word ptr [eax + 0x5dcb2], si
    X86_AT(c, 0xca82eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5DCB2u)), (c.r[6] & 0xFFFFu));
    // 0ca835  lea edx, [eax + 0x5dcac]
    X86_AT(c, 0xca835u);
    c.r[2] = (uint32_t)(c.r[0] + 0x5DCACu);
    // 0ca83b  push edx
    X86_AT(c, 0xca83bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ca83c  add eax, 0x8004
    X86_AT(c, 0xca83cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8004u, 0, 4); }
    // 0ca841  push eax
    X86_AT(c, 0xca841u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca842  call 0xa7d
    X86_AT(c, 0xca842u);
    push32(c, 0xca847u); x86_call_known(c, 0xa7du, f_00000a7d); X86_RET(c, 0xca847u);
    X86_TICK(c, 2);
    // 0ca847  add esp, 8
    X86_AT(c, 0xca847u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ca84a:
    X86_TICK(c, 28);
    // 0ca84a  pop edi
    X86_AT(c, 0xca84au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca84b  pop esi
    X86_AT(c, 0xca84bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ca84c  pop ebx
    X86_AT(c, 0xca84cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ca84d  leave 
    X86_AT(c, 0xca84du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca84e  ret 
    X86_AT(c, 0xca84eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca7dau, "ran off the end of a function");
}
void f_000ca850(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0ca850  push ebp
    X86_AT(c, 0xca850u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca851  mov ebp, esp
    X86_AT(c, 0xca851u);
    c.r[5] = c.r[4];
    // 0ca853  push ebx
    X86_AT(c, 0xca853u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ca854  push esi
    X86_AT(c, 0xca854u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ca855  push edi
    X86_AT(c, 0xca855u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca856  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xca856u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca859  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xca859u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ca85c  lea eax, [edi + edi*2]
    X86_AT(c, 0xca85cu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0ca85f  lea edx, [eax + eax*8]
    X86_AT(c, 0xca85fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0ca862  lea edx, [eax + edx*2]
    X86_AT(c, 0xca862u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ca865  lea ebx, [edx + 0x4c6e4]
    X86_AT(c, 0xca865u);
    c.r[3] = (uint32_t)(c.r[2] + 0x4C6E4u);
L_ca86b:
    X86_TICK(c, 12);
    // 0ca86b  cmp byte ptr [esi], 0
    X86_AT(c, 0xca86bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6]))), 0x0u, 0, 1);
    // 0ca86e  je 0xca8a9
    X86_AT(c, 0xca86eu);
    if (x86_cc(c, 4)) { goto L_ca8a9; }
    X86_TICK(c, 17);
    // 0ca870  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0xca870u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0ca873  inc eax
    X86_AT(c, 0xca873u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ca874  cmp eax, dword ptr [ebx + 0x11]
    X86_AT(c, 0xca874u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u))), 0, 4);
    // 0ca877  jle 0xca896
    X86_AT(c, 0xca877u);
    if (x86_cc(c, 14)) { goto L_ca896; }
    X86_TICK(c, 17);
    // 0ca879  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xca879u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0ca880  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xca880u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0ca883  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0xca883u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 0ca886  jne 0xca893
    X86_AT(c, 0xca886u);
    if (x86_cc(c, 5)) { goto L_ca893; }
    X86_TICK(c, 9);
    // 0ca888  push edi
    X86_AT(c, 0xca888u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca889  call 0xca32c
    X86_AT(c, 0xca889u);
    push32(c, 0xca88eu); x86_call_known(c, 0xca32cu, f_000ca32c); X86_RET(c, 0xca88eu);
    X86_TICK(c, 9);
    // 0ca88e  add esp, 4
    X86_AT(c, 0xca88eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ca891  jmp 0xca896
    X86_AT(c, 0xca891u);
    goto L_ca896;
L_ca893:
    X86_TICK(c, 6);
    // 0ca893  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0xca893u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_ca896:
    X86_TICK(c, 15);
    // 0ca896  mov al, byte ptr [esi]
    X86_AT(c, 0xca896u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0ca898  push eax
    X86_AT(c, 0xca898u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca899  push edi
    X86_AT(c, 0xca899u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca89a  call 0xca58c
    X86_AT(c, 0xca89au);
    push32(c, 0xca89fu); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xca89fu);
    X86_TICK(c, 18);
    // 0ca89f  add dword ptr [ebx + 0x19], 2
    X86_AT(c, 0xca89fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x2u, 0, 4)); }
    // 0ca8a3  inc esi
    X86_AT(c, 0xca8a3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ca8a4  add esp, 8
    X86_AT(c, 0xca8a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ca8a7  jmp 0xca86b
    X86_AT(c, 0xca8a7u);
    X86_POLL(c, 0xca86bu); goto L_ca86b;
L_ca8a9:
    X86_TICK(c, 28);
    // 0ca8a9  pop edi
    X86_AT(c, 0xca8a9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca8aa  pop esi
    X86_AT(c, 0xca8aau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ca8ab  pop ebx
    X86_AT(c, 0xca8abu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ca8ac  leave 
    X86_AT(c, 0xca8acu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca8ad  ret 
    X86_AT(c, 0xca8adu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca850u, "ran off the end of a function");
}
void f_000ca920(X86Cpu& c) {
    X86_TICK(c, 83);
    // 0ca920  push ebp
    X86_AT(c, 0xca920u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca921  mov ebp, esp
    X86_AT(c, 0xca921u);
    c.r[5] = c.r[4];
    // 0ca923  push esi
    X86_AT(c, 0xca923u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ca924  push edi
    X86_AT(c, 0xca924u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca925  mov eax, 0x43fd4
    X86_AT(c, 0xca925u);
    c.r[0] = 0x43FD4u;
    // 0ca92a  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xca92au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca92d  lea edx, [edx + edx*2]
    X86_AT(c, 0xca92du);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0ca930  lea ecx, [edx + edx*8]
    X86_AT(c, 0xca930u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0ca933  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xca933u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0ca936  lea edi, [eax + ecx*1 + 0x8710]
    X86_AT(c, 0xca936u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x8710u);
    // 0ca93d  mov dx, word ptr [edi + 1]
    X86_AT(c, 0xca93du);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0ca941  add dx, 4
    X86_AT(c, 0xca941u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 0ca945  mov esi, dword ptr [edi + 0x19]
    X86_AT(c, 0xca945u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 0ca948  shl esi, 3
    X86_AT(c, 0xca948u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0ca94b  add esi, edx
    X86_AT(c, 0xca94bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[2], 0, 4); }
    // 0ca94d  mov word ptr [eax + 0x5dcb8], si
    X86_AT(c, 0xca94du);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5DCB8u)), (c.r[6] & 0xFFFFu));
    // 0ca954  mov dx, word ptr [edi + 5]
    X86_AT(c, 0xca954u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0ca958  add dx, 0x11
    X86_AT(c, 0xca958u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 0ca95c  mov esi, dword ptr [edi + 0x1d]
    X86_AT(c, 0xca95cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0ca95f  shl esi, 4
    X86_AT(c, 0xca95fu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 0ca962  add esi, edx
    X86_AT(c, 0xca962u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[2], 0, 4); }
    // 0ca964  mov word ptr [eax + 0x5dcba], si
    X86_AT(c, 0xca964u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5DCBAu)), (c.r[6] & 0xFFFFu));
    // 0ca96b  mov word ptr [eax + 0x5dcbc], 2
    X86_AT(c, 0xca96bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5DCBCu)), 0x2u);
    // 0ca974  mov edx, dword ptr [eax]
    X86_AT(c, 0xca974u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0ca976  mov dx, word ptr [eax + edx*2 + 0x5dcc4]
    X86_AT(c, 0xca976u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 2 + 0x5DCC4u))));
    // 0ca97e  mov word ptr [eax + 0x5dcbe], dx
    X86_AT(c, 0xca97eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x5DCBEu)), (c.r[2] & 0xFFFFu));
    // 0ca985  lea edx, [eax + 0x5dcb8]
    X86_AT(c, 0xca985u);
    c.r[2] = (uint32_t)(c.r[0] + 0x5DCB8u);
    // 0ca98b  push edx
    X86_AT(c, 0xca98bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ca98c  add eax, 0x8004
    X86_AT(c, 0xca98cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8004u, 0, 4); }
    // 0ca991  push eax
    X86_AT(c, 0xca991u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca992  call 0xa7d
    X86_AT(c, 0xca992u);
    push32(c, 0xca997u); x86_call_known(c, 0xa7du, f_00000a7d); X86_RET(c, 0xca997u);
    X86_TICK(c, 26);
    // 0ca997  add esp, 8
    X86_AT(c, 0xca997u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ca99a  pop edi
    X86_AT(c, 0xca99au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca99b  pop esi
    X86_AT(c, 0xca99bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ca99c  leave 
    X86_AT(c, 0xca99cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca99d  ret 
    X86_AT(c, 0xca99du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca920u, "ran off the end of a function");
}
void f_000ca9a0(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0ca9a0  inc dword ptr [0x4c6e0]
    X86_AT(c, 0xca9a0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4C6E0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ca9a6  cmp dword ptr [0x4c6e0], 0x1e
    X86_AT(c, 0xca9a6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4C6E0u))), 0x1Eu, 0, 4);
    // 0ca9ad  jl 0xca9c4
    X86_AT(c, 0xca9adu);
    if (x86_cc(c, 12)) { goto L_ca9c4; }
    X86_TICK(c, 24);
    // 0ca9af  sub eax, eax
    X86_AT(c, 0xca9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ca9b1  mov dword ptr [0x4c6e0], eax
    X86_AT(c, 0xca9b1u);
    wr32((c.sbase[3] + (uint32_t)(0x4C6E0u)), c.r[0]);
    // 0ca9b6  mov edx, 0x43fd4
    X86_AT(c, 0xca9b6u);
    c.r[2] = 0x43FD4u;
    // 0ca9bb  inc dword ptr [edx]
    X86_AT(c, 0xca9bbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ca9bd  cmp dword ptr [edx], 4
    X86_AT(c, 0xca9bdu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2]))), 0x4u, 0, 4);
    // 0ca9c0  jne 0xca9c4
    X86_AT(c, 0xca9c0u);
    if (x86_cc(c, 5)) { goto L_ca9c4; }
    X86_TICK(c, 2);
    // 0ca9c2  mov dword ptr [edx], eax
    X86_AT(c, 0xca9c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_ca9c4:
    X86_TICK(c, 10);
    // 0ca9c4  ret 
    X86_AT(c, 0xca9c4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca9a0u, "ran off the end of a function");
}
void f_000ca9c8(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0ca9c8  push ebp
    X86_AT(c, 0xca9c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca9c9  mov ebp, esp
    X86_AT(c, 0xca9c9u);
    c.r[5] = c.r[4];
    // 0ca9cb  push ebx
    X86_AT(c, 0xca9cbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ca9cc  push esi
    X86_AT(c, 0xca9ccu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ca9cd  push edi
    X86_AT(c, 0xca9cdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca9ce  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xca9ceu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca9d1  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xca9d1u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ca9d4  mov ebx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xca9d4u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ca9d7  and esi, esi
    X86_AT(c, 0xca9d7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ca9d9  jl 0xcaa0d
    X86_AT(c, 0xca9d9u);
    if (x86_cc(c, 12)) { goto L_caa0d; }
    X86_TICK(c, 19);
    // 0ca9db  mov eax, 0x43fd4
    X86_AT(c, 0xca9dbu);
    c.r[0] = 0x43FD4u;
    // 0ca9e0  lea edx, [edi + edi*2]
    X86_AT(c, 0xca9e0u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0ca9e3  lea ecx, [edx + edx*8]
    X86_AT(c, 0xca9e3u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0ca9e6  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xca9e6u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0ca9e9  cmp esi, dword ptr [eax + ecx*1 + 0x8721]
    X86_AT(c, 0xca9e9u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8721u))), 0, 4);
    // 0ca9f0  jg 0xcaa0d
    X86_AT(c, 0xca9f0u);
    if (x86_cc(c, 15)) { goto L_caa0d; }
    X86_TICK(c, 7);
    // 0ca9f2  and ebx, ebx
    X86_AT(c, 0xca9f2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0ca9f4  jl 0xcaa0d
    X86_AT(c, 0xca9f4u);
    if (x86_cc(c, 12)) { goto L_caa0d; }
    X86_TICK(c, 11);
    // 0ca9f6  cmp ebx, dword ptr [eax + ecx*1 + 0x8725]
    X86_AT(c, 0xca9f6u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8725u))), 0, 4);
    // 0ca9fd  jg 0xcaa0d
    X86_AT(c, 0xca9fdu);
    if (x86_cc(c, 15)) { goto L_caa0d; }
    X86_TICK(c, 4);
    // 0ca9ff  mov dword ptr [eax + ecx*1 + 0x8729], esi
    X86_AT(c, 0xca9ffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x8729u)), c.r[6]);
    // 0caa06  mov dword ptr [eax + ecx*1 + 0x872d], ebx
    X86_AT(c, 0xcaa06u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x872Du)), c.r[3]);
L_caa0d:
    X86_TICK(c, 28);
    // 0caa0d  pop edi
    X86_AT(c, 0xcaa0du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0caa0e  pop esi
    X86_AT(c, 0xcaa0eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0caa0f  pop ebx
    X86_AT(c, 0xcaa0fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0caa10  leave 
    X86_AT(c, 0xcaa10u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0caa11  ret 
    X86_AT(c, 0xcaa11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca9c8u, "ran off the end of a function");
}
void f_000caa14(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0caa14  push ebp
    X86_AT(c, 0xcaa14u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0caa15  mov ebp, esp
    X86_AT(c, 0xcaa15u);
    c.r[5] = c.r[4];
    // 0caa17  push ebx
    X86_AT(c, 0xcaa17u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0caa18  push esi
    X86_AT(c, 0xcaa18u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0caa19  push edi
    X86_AT(c, 0xcaa19u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0caa1a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcaa1au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0caa1d  push 4
    X86_AT(c, 0xcaa1du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0caa1f  call 0xc8f2c
    X86_AT(c, 0xcaa1fu);
    push32(c, 0xcaa24u); x86_call_known(c, 0xc8f2cu, f_000c8f2c); X86_RET(c, 0xcaa24u);
    X86_TICK(c, 11);
    // 0caa24  push 0x422
    X86_AT(c, 0xcaa24u);
    { uint32_t v = 0x422u; push32(c, v); }
    // 0caa29  push 0x4bfd8
    X86_AT(c, 0xcaa29u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0caa2e  call 0x2c5
    X86_AT(c, 0xcaa2eu);
    push32(c, 0xcaa33u); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xcaa33u);
    X86_TICK(c, 9);
    // 0caa33  push 0xf
    X86_AT(c, 0xcaa33u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0caa35  call 0xc8dd4
    X86_AT(c, 0xcaa35u);
    push32(c, 0xcaa3au); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xcaa3au);
    X86_TICK(c, 9);
    // 0caa3a  push 0xf
    X86_AT(c, 0xcaa3au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0caa3c  call 0xc8e04
    X86_AT(c, 0xcaa3cu);
    push32(c, 0xcaa41u); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xcaa41u);
    X86_TICK(c, 87);
    // 0caa41  lea eax, [edi + edi*2]
    X86_AT(c, 0xcaa41u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0caa44  lea edx, [eax + eax*8]
    X86_AT(c, 0xcaa44u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0caa47  lea edx, [eax + edx*2]
    X86_AT(c, 0xcaa47u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0caa4a  mov ax, word ptr [edx + 0x4c6e5]
    X86_AT(c, 0xcaa4au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C6E5u))));
    // 0caa51  add ax, 4
    X86_AT(c, 0xcaa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0caa55  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcaa55u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0caa58  shl esi, 3
    X86_AT(c, 0xcaa58u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0caa5b  add esi, eax
    X86_AT(c, 0xcaa5bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0caa5d  mov word ptr [0x4c5d8], si
    X86_AT(c, 0xcaa5du);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), (c.r[6] & 0xFFFFu));
    // 0caa64  mov ax, word ptr [edx + 0x4c6e9]
    X86_AT(c, 0xcaa64u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C6E9u))));
    // 0caa6b  add ax, 2
    X86_AT(c, 0xcaa6bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0caa6f  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcaa6fu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0caa72  shl esi, 4
    X86_AT(c, 0xcaa72u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 0caa75  add esi, eax
    X86_AT(c, 0xcaa75u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0caa77  mov word ptr [0x4c5da], si
    X86_AT(c, 0xcaa77u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[6] & 0xFFFFu));
    // 0caa7e  mov ax, word ptr [edx + 0x4c6e5]
    X86_AT(c, 0xcaa7eu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C6E5u))));
    // 0caa85  add ax, 0xb
    X86_AT(c, 0xcaa85u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xBu, 0, 2)); }
    // 0caa89  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xcaa89u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0caa8c  shl esi, 3
    X86_AT(c, 0xcaa8cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0caa8f  add esi, eax
    X86_AT(c, 0xcaa8fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0caa91  mov word ptr [0x4c5dc], si
    X86_AT(c, 0xcaa91u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), (c.r[6] & 0xFFFFu));
    // 0caa98  mov ax, word ptr [edx + 0x4c6e9]
    X86_AT(c, 0xcaa98u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C6E9u))));
    // 0caa9f  add ax, 0x11
    X86_AT(c, 0xcaa9fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0caaa3  mov esi, dword ptr [ebp + 0x18]
    X86_AT(c, 0xcaaa3u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0caaa6  shl esi, 4
    X86_AT(c, 0xcaaa6u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 0caaa9  add esi, eax
    X86_AT(c, 0xcaaa9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0caaab  mov word ptr [0x4c5de], si
    X86_AT(c, 0xcaaabu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[6] & 0xFFFFu));
    // 0caab2  push 0x4c5d8
    X86_AT(c, 0xcaab2u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0caab7  push 0x4bfd8
    X86_AT(c, 0xcaab7u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0caabc  mov ebx, edx
    X86_AT(c, 0xcaabcu);
    c.r[3] = c.r[2];
    // 0caabe  call 0x8bd
    X86_AT(c, 0xcaabeu);
    push32(c, 0xcaac3u); x86_call_known(c, 0x8bdu, f_000008bd); X86_RET(c, 0xcaac3u);
    X86_TICK(c, 12);
    // 0caac3  push dword ptr [ebx + 0x4c709]
    X86_AT(c, 0xcaac3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C709u))); push32(c, v); }
    // 0caac9  call 0xc8dd4
    X86_AT(c, 0xcaac9u);
    push32(c, 0xcaaceu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xcaaceu);
    X86_TICK(c, 12);
    // 0caace  push dword ptr [ebx + 0x4c715]
    X86_AT(c, 0xcaaceu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C715u))); push32(c, v); }
    // 0caad4  call 0xc8e04
    X86_AT(c, 0xcaad4u);
    push32(c, 0xcaad9u); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xcaad9u);
    X86_TICK(c, 15);
    // 0caad9  movsx eax, word ptr [0x4c6dc]
    X86_AT(c, 0xcaad9u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4C6DCu)));
    // 0caae0  push eax
    X86_AT(c, 0xcaae0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0caae1  call 0xc8f2c
    X86_AT(c, 0xcaae1u);
    push32(c, 0xcaae6u); x86_call_known(c, 0xc8f2cu, f_000c8f2c); X86_RET(c, 0xcaae6u);
    X86_TICK(c, 19);
    // 0caae6  add esp, 0x28
    X86_AT(c, 0xcaae6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0caae9  movsx eax, word ptr [0x4c6de]
    X86_AT(c, 0xcaae9u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4C6DEu)));
    // 0caaf0  push eax
    X86_AT(c, 0xcaaf0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0caaf1  push 0x4bfd8
    X86_AT(c, 0xcaaf1u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0caaf6  call 0x2c5
    X86_AT(c, 0xcaaf6u);
    push32(c, 0xcaafbu); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xcaafbu);
    X86_TICK(c, 30);
    // 0caafb  add esp, 8
    X86_AT(c, 0xcaafbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0caafe  pop edi
    X86_AT(c, 0xcaafeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0caaff  pop esi
    X86_AT(c, 0xcaaffu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cab00  pop ebx
    X86_AT(c, 0xcab00u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cab01  leave 
    X86_AT(c, 0xcab01u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cab02  ret 
    X86_AT(c, 0xcab02u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcaa14u, "ran off the end of a function");
}
void f_000cab04(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0cab04  push ebp
    X86_AT(c, 0xcab04u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cab05  mov ebp, esp
    X86_AT(c, 0xcab05u);
    c.r[5] = c.r[4];
    // 0cab07  push ebx
    X86_AT(c, 0xcab07u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cab08  push edi
    X86_AT(c, 0xcab08u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cab09  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcab09u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cab0c  lea eax, [edi + edi*2]
    X86_AT(c, 0xcab0cu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cab0f  lea edx, [eax + eax*8]
    X86_AT(c, 0xcab0fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cab12  lea edx, [eax + edx*2]
    X86_AT(c, 0xcab12u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cab15  push dword ptr [edx + 0x4c715]
    X86_AT(c, 0xcab15u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C715u))); push32(c, v); }
    // 0cab1b  mov ebx, edx
    X86_AT(c, 0xcab1bu);
    c.r[3] = c.r[2];
    // 0cab1d  call 0xc8dd4
    X86_AT(c, 0xcab1du);
    push32(c, 0xcab22u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xcab22u);
    X86_TICK(c, 12);
    // 0cab22  push dword ptr [ebx + 0x4c715]
    X86_AT(c, 0xcab22u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C715u))); push32(c, v); }
    // 0cab28  call 0xc8e04
    X86_AT(c, 0xcab28u);
    push32(c, 0xcab2du); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xcab2du);
    X86_TICK(c, 79);
    // 0cab2d  mov ax, word ptr [ebx + 0x4c6e5]
    X86_AT(c, 0xcab2du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C6E5u))));
    // 0cab34  add ax, 4
    X86_AT(c, 0xcab34u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0cab38  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcab38u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cab3b  shl edx, 3
    X86_AT(c, 0xcab3bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0cab3e  add edx, eax
    X86_AT(c, 0xcab3eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cab40  mov word ptr [0x4c5d8], dx
    X86_AT(c, 0xcab40u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), (c.r[2] & 0xFFFFu));
    // 0cab47  mov ax, word ptr [ebx + 0x4c6e9]
    X86_AT(c, 0xcab47u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C6E9u))));
    // 0cab4e  add ax, 2
    X86_AT(c, 0xcab4eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0cab52  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcab52u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0cab55  shl edx, 4
    X86_AT(c, 0xcab55u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cab58  add edx, eax
    X86_AT(c, 0xcab58u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cab5a  mov word ptr [0x4c5da], dx
    X86_AT(c, 0xcab5au);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[2] & 0xFFFFu));
    // 0cab61  mov ax, word ptr [ebx + 0x4c6e5]
    X86_AT(c, 0xcab61u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C6E5u))));
    // 0cab68  add ax, 0xb
    X86_AT(c, 0xcab68u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xBu, 0, 2)); }
    // 0cab6c  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xcab6cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0cab6f  shl edx, 3
    X86_AT(c, 0xcab6fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0cab72  add edx, eax
    X86_AT(c, 0xcab72u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cab74  mov word ptr [0x4c5dc], dx
    X86_AT(c, 0xcab74u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), (c.r[2] & 0xFFFFu));
    // 0cab7b  mov ax, word ptr [ebx + 0x4c6e9]
    X86_AT(c, 0xcab7bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C6E9u))));
    // 0cab82  add ax, 0x11
    X86_AT(c, 0xcab82u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0cab86  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xcab86u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0cab89  shl edx, 4
    X86_AT(c, 0xcab89u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cab8c  add edx, eax
    X86_AT(c, 0xcab8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cab8e  mov word ptr [0x4c5de], dx
    X86_AT(c, 0xcab8eu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[2] & 0xFFFFu));
    // 0cab95  push 0x4c5d8
    X86_AT(c, 0xcab95u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0cab9a  push 0x4bfd8
    X86_AT(c, 0xcab9au);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0cab9f  call 0x8bd
    X86_AT(c, 0xcab9fu);
    push32(c, 0xcaba4u); x86_call_known(c, 0x8bdu, f_000008bd); X86_RET(c, 0xcaba4u);
    X86_TICK(c, 15);
    // 0caba4  movsx eax, word ptr [0x4c6dc]
    X86_AT(c, 0xcaba4u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4C6DCu)));
    // 0cabab  push eax
    X86_AT(c, 0xcababu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cabac  call 0xc8f2c
    X86_AT(c, 0xcabacu);
    push32(c, 0xcabb1u); x86_call_known(c, 0xc8f2cu, f_000c8f2c); X86_RET(c, 0xcabb1u);
    X86_TICK(c, 12);
    // 0cabb1  push dword ptr [ebx + 0x4c709]
    X86_AT(c, 0xcabb1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4C709u))); push32(c, v); }
    // 0cabb7  call 0xc8dd4
    X86_AT(c, 0xcabb7u);
    push32(c, 0xcabbcu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xcabbcu);
    X86_TICK(c, 26);
    // 0cabbc  add esp, 0x18
    X86_AT(c, 0xcabbcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cabbf  pop edi
    X86_AT(c, 0xcabbfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cabc0  pop ebx
    X86_AT(c, 0xcabc0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cabc1  leave 
    X86_AT(c, 0xcabc1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cabc2  ret 
    X86_AT(c, 0xcabc2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcab04u, "ran off the end of a function");
}
void f_000cac40(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0cac40  push ebp
    X86_AT(c, 0xcac40u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cac41  mov ebp, esp
    X86_AT(c, 0xcac41u);
    c.r[5] = c.r[4];
    // 0cac43  push edi
    X86_AT(c, 0xcac43u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cac44  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcac44u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cac47  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcac47u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cac4a  lea eax, [eax + eax*2]
    X86_AT(c, 0xcac4au);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cac4d  lea edx, [eax + eax*8]
    X86_AT(c, 0xcac4du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cac50  lea edx, [eax + edx*2]
    X86_AT(c, 0xcac50u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cac53  mov dword ptr [edx + 0x4c709], edi
    X86_AT(c, 0xcac53u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C709u)), c.r[7]);
    // 0cac59  push edi
    X86_AT(c, 0xcac59u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cac5a  call 0xc8dd4
    X86_AT(c, 0xcac5au);
    push32(c, 0xcac5fu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xcac5fu);
    X86_TICK(c, 22);
    // 0cac5f  add esp, 4
    X86_AT(c, 0xcac5fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cac62  pop edi
    X86_AT(c, 0xcac62u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cac63  leave 
    X86_AT(c, 0xcac63u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cac64  ret 
    X86_AT(c, 0xcac64u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcac40u, "ran off the end of a function");
}
void f_000cac7c(X86Cpu& c) {
    X86_TICK(c, 56);
    // 0cac7c  push ebp
    X86_AT(c, 0xcac7cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cac7d  mov ebp, esp
    X86_AT(c, 0xcac7du);
    c.r[5] = c.r[4];
    // 0cac7f  push edi
    X86_AT(c, 0xcac7fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cac80  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcac80u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cac83  lea eax, [edi + edi*2]
    X86_AT(c, 0xcac83u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cac86  lea edx, [eax + eax*8]
    X86_AT(c, 0xcac86u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cac89  lea edx, [eax + edx*2]
    X86_AT(c, 0xcac89u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cac8c  mov eax, dword ptr [edx + 0x4c6fd]
    X86_AT(c, 0xcac8cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C6FDu)));
    // 0cac92  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcac92u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cac95  mov dword ptr [ecx], eax
    X86_AT(c, 0xcac95u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0cac97  mov eax, dword ptr [edx + 0x4c701]
    X86_AT(c, 0xcac97u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C701u)));
    // 0cac9d  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcac9du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0caca0  mov dword ptr [edx], eax
    X86_AT(c, 0xcaca0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0caca2  pop edi
    X86_AT(c, 0xcaca2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0caca3  leave 
    X86_AT(c, 0xcaca3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0caca4  ret 
    X86_AT(c, 0xcaca4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcac7cu, "ran off the end of a function");
}
void f_000caca8(X86Cpu& c) {
    X86_TICK(c, 56);
    // 0caca8  push ebp
    X86_AT(c, 0xcaca8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0caca9  mov ebp, esp
    X86_AT(c, 0xcaca9u);
    c.r[5] = c.r[4];
    // 0cacab  push edi
    X86_AT(c, 0xcacabu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cacac  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcacacu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cacaf  lea eax, [edi + edi*2]
    X86_AT(c, 0xcacafu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cacb2  lea edx, [eax + eax*8]
    X86_AT(c, 0xcacb2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cacb5  lea edx, [eax + edx*2]
    X86_AT(c, 0xcacb5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cacb8  mov eax, dword ptr [edx + 0x4c6f5]
    X86_AT(c, 0xcacb8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C6F5u)));
    // 0cacbe  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcacbeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cacc1  mov dword ptr [ecx], eax
    X86_AT(c, 0xcacc1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0cacc3  mov eax, dword ptr [edx + 0x4c6f9]
    X86_AT(c, 0xcacc3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C6F9u)));
    // 0cacc9  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcacc9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0caccc  mov dword ptr [edx], eax
    X86_AT(c, 0xcacccu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0cacce  pop edi
    X86_AT(c, 0xcacceu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0caccf  leave 
    X86_AT(c, 0xcaccfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cacd0  ret 
    X86_AT(c, 0xcacd0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcaca8u, "ran off the end of a function");
}
void f_000cacd4(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0cacd4  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xcacd4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0cacd8  lea eax, [eax + eax*2]
    X86_AT(c, 0xcacd8u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cacdb  lea edx, [eax + eax*8]
    X86_AT(c, 0xcacdbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cacde  lea edx, [eax + edx*2]
    X86_AT(c, 0xcacdeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cace1  mov dword ptr [edx + 0x4c705], 0
    X86_AT(c, 0xcace1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C705u)), 0x0u);
    // 0caceb  ret 
    X86_AT(c, 0xcacebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcacd4u, "ran off the end of a function");
}
void f_000cacec(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0cacec  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xcacecu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0cacf0  lea eax, [eax + eax*2]
    X86_AT(c, 0xcacf0u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cacf3  lea edx, [eax + eax*8]
    X86_AT(c, 0xcacf3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cacf6  lea edx, [eax + edx*2]
    X86_AT(c, 0xcacf6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cacf9  mov dword ptr [edx + 0x4c705], 0xffffffff
    X86_AT(c, 0xcacf9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C705u)), 0xFFFFFFFFu);
    // 0cad03  ret 
    X86_AT(c, 0xcad03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcacecu, "ran off the end of a function");
}
void f_000cad04(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0cad04  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xcad04u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0cad08  lea eax, [eax + eax*2]
    X86_AT(c, 0xcad08u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cad0b  lea edx, [eax + eax*8]
    X86_AT(c, 0xcad0bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cad0e  lea edx, [eax + edx*2]
    X86_AT(c, 0xcad0eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cad11  mov eax, dword ptr [edx + 0x4c705]
    X86_AT(c, 0xcad11u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4C705u)));
    // 0cad17  ret 
    X86_AT(c, 0xcad17u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcad04u, "ran off the end of a function");
}
void f_000cad2c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0cad2c  push 0xe
    X86_AT(c, 0xcad2cu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0cad2e  push 0xf
    X86_AT(c, 0xcad2eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cad30  push 0xf
    X86_AT(c, 0xcad30u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cad32  push 0
    X86_AT(c, 0xcad32u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cad34  push 0x4d
    X86_AT(c, 0xcad34u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0cad36  push 0x14
    X86_AT(c, 0xcad36u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0cad38  push 0x260
    X86_AT(c, 0xcad38u);
    { uint32_t v = 0x260u; push32(c, v); }
    // 0cad3d  push 0x1b0
    X86_AT(c, 0xcad3du);
    { uint32_t v = 0x1B0u; push32(c, v); }
    // 0cad42  push 0x10
    X86_AT(c, 0xcad42u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0cad44  push 2
    X86_AT(c, 0xcad44u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cad46  call 0xc9fbc
    X86_AT(c, 0xcad46u);
    push32(c, 0xcad4bu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xcad4bu);
    X86_TICK(c, 9);
    // 0cad4b  push 2
    X86_AT(c, 0xcad4bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cad4d  call 0xca0a0
    X86_AT(c, 0xcad4du);
    push32(c, 0xcad52u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xcad52u);
    X86_TICK(c, 9);
    // 0cad52  push 2
    X86_AT(c, 0xcad52u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cad54  call 0xca100
    X86_AT(c, 0xcad54u);
    push32(c, 0xcad59u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xcad59u);
    X86_TICK(c, 12);
    // 0cad59  add esp, 0x30
    X86_AT(c, 0xcad59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0cad5c  ret 
    X86_AT(c, 0xcad5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcad2cu, "ran off the end of a function");
}
void f_000cad60(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0cad60  push ebp
    X86_AT(c, 0xcad60u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cad61  mov ebp, esp
    X86_AT(c, 0xcad61u);
    c.r[5] = c.r[4];
    // 0cad63  push 2
    X86_AT(c, 0xcad63u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cad65  call 0xca0a0
    X86_AT(c, 0xcad65u);
    push32(c, 0xcad6au); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xcad6au);
    X86_TICK(c, 9);
    // 0cad6a  push 2
    X86_AT(c, 0xcad6au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cad6c  call 0xca3cc
    X86_AT(c, 0xcad6cu);
    push32(c, 0xcad71u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xcad71u);
    X86_TICK(c, 14);
    // 0cad71  push dword ptr [ebp + 8]
    X86_AT(c, 0xcad71u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cad74  push 2
    X86_AT(c, 0xcad74u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cad76  call 0xc8cdc
    X86_AT(c, 0xcad76u);
    push32(c, 0xcad7bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcad7bu);
    X86_TICK(c, 16);
    // 0cad7b  leave 
    X86_AT(c, 0xcad7bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cad7c  ret 
    X86_AT(c, 0xcad7cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcad60u, "ran off the end of a function");
}
void f_000cad80(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0cad80  push ebp
    X86_AT(c, 0xcad80u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cad81  mov ebp, esp
    X86_AT(c, 0xcad81u);
    c.r[5] = c.r[4];
    // 0cad83  push edi
    X86_AT(c, 0xcad83u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cad84  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcad84u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cad87  lea eax, [eax + eax*2]
    X86_AT(c, 0xcad87u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cad8a  lea edx, [eax + eax*8]
    X86_AT(c, 0xcad8au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cad8d  lea edx, [eax + edx*2]
    X86_AT(c, 0xcad8du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cad90  lea edi, [edx + 0x4c6e4]
    X86_AT(c, 0xcad90u);
    c.r[7] = (uint32_t)(c.r[2] + 0x4C6E4u);
    // 0cad96  push 6
    X86_AT(c, 0xcad96u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0cad98  push 0x4bfd8
    X86_AT(c, 0xcad98u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0cad9d  call 0x27d
    X86_AT(c, 0xcad9du);
    push32(c, 0xcada2u); x86_call_known(c, 0x27du, f_0000027d); X86_RET(c, 0xcada2u);
    X86_TICK(c, 73);
    // 0cada2  mov eax, dword ptr [0x4cb74]
    X86_AT(c, 0xcada2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4CB74u)));
    // 0cada7  mov dword ptr [0x4c5d8], eax
    X86_AT(c, 0xcada7u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5D8u)), c.r[0]);
    // 0cadac  mov word ptr [0x4c5dc], 0x14
    X86_AT(c, 0xcadacu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x14u);
    // 0cadb5  mov ax, word ptr [edi + 1]
    X86_AT(c, 0xcadb5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0cadb9  add ax, 2
    X86_AT(c, 0xcadb9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0cadbd  mov word ptr [0x4c5de], ax
    X86_AT(c, 0xcadbdu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[0] & 0xFFFFu));
    // 0cadc3  mov ax, word ptr [edi + 5]
    X86_AT(c, 0xcadc3u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0cadc7  add ax, 2
    X86_AT(c, 0xcadc7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0cadcb  mov edx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xcadcbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0cadce  shl edx, 4
    X86_AT(c, 0xcadceu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cadd1  add edx, eax
    X86_AT(c, 0xcadd1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cadd3  mov word ptr [0x4c5e0], dx
    X86_AT(c, 0xcadd3u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), (c.r[2] & 0xFFFFu));
    // 0cadda  mov ax, word ptr [edi + 1]
    X86_AT(c, 0xcaddau);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0cadde  add ax, 0x11
    X86_AT(c, 0xcaddeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0cade2  mov word ptr [0x4c5e2], ax
    X86_AT(c, 0xcade2u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E2u)), (c.r[0] & 0xFFFFu));
    // 0cade8  mov ax, word ptr [edi + 5]
    X86_AT(c, 0xcade8u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0cadec  add ax, 2
    X86_AT(c, 0xcadecu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0cadf0  mov edx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xcadf0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0cadf3  shl edx, 4
    X86_AT(c, 0xcadf3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cadf6  add edx, eax
    X86_AT(c, 0xcadf6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cadf8  add dx, 0xf
    X86_AT(c, 0xcadf8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xFu, 0, 2)); }
    // 0cadfc  mov word ptr [0x4c5e4], dx
    X86_AT(c, 0xcadfcu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E4u)), (c.r[2] & 0xFFFFu));
    // 0cae03  push 0x4c5d8
    X86_AT(c, 0xcae03u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0cae08  push 0
    X86_AT(c, 0xcae08u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cae0a  push 0x4bfd8
    X86_AT(c, 0xcae0au);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0cae0f  call 0x5c4
    X86_AT(c, 0xcae0fu);
    push32(c, 0xcae14u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xcae14u);
    X86_TICK(c, 19);
    // 0cae14  mov dword ptr [edi + 0x19], 2
    X86_AT(c, 0xcae14u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)), 0x2u);
    // 0cae1b  movsx eax, word ptr [0x4c6dc]
    X86_AT(c, 0xcae1bu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4C6DCu)));
    // 0cae22  push eax
    X86_AT(c, 0xcae22u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cae23  push 0x4bfd8
    X86_AT(c, 0xcae23u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0cae28  call 0x27d
    X86_AT(c, 0xcae28u);
    push32(c, 0xcae2du); x86_call_known(c, 0x27du, f_0000027d); X86_RET(c, 0xcae2du);
    X86_TICK(c, 22);
    // 0cae2d  add esp, 0x1c
    X86_AT(c, 0xcae2du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0cae30  pop edi
    X86_AT(c, 0xcae30u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cae31  leave 
    X86_AT(c, 0xcae31u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cae32  ret 
    X86_AT(c, 0xcae32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcad80u, "ran off the end of a function");
}
void f_000cb22c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0cb22c  push ebp
    X86_AT(c, 0xcb22cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cb22d  mov ebp, esp
    X86_AT(c, 0xcb22du);
    c.r[5] = c.r[4];
    // 0cb22f  push ebx
    X86_AT(c, 0xcb22fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cb230  push esi
    X86_AT(c, 0xcb230u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cb231  push edi
    X86_AT(c, 0xcb231u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb232  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcb232u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cb235  mov dword ptr [0x4c5d8], 7
    X86_AT(c, 0xcb235u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5D8u)), 0x7u);
    // 0cb23f  mov esi, 1
    X86_AT(c, 0xcb23fu);
    c.r[6] = 0x1u;
L_cb244:
    X86_TICK(c, 7);
    // 0cb244  cmp esi, 0xf
    X86_AT(c, 0xcb244u);
    (void)x86_sub(c, c.r[6], 0xFu, 0, 4);
    // 0cb247  jge 0xcb364
    X86_AT(c, 0xcb247u);
    if (x86_cc(c, 13)) { goto L_cb364; }
    X86_TICK(c, 99);
    // 0cb24d  mov dword ptr [0x4c5dc], 1
    X86_AT(c, 0xcb24du);
    wr32((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x1u);
    // 0cb257  mov eax, esi
    X86_AT(c, 0xcb257u);
    c.r[0] = c.r[6];
    // 0cb259  shl eax, 4
    X86_AT(c, 0xcb259u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0cb25c  dec eax
    X86_AT(c, 0xcb25cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0cb25d  mov byte ptr [0x4c5e0], al
    X86_AT(c, 0xcb25du);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E0u)), g8(c, 0));
    // 0cb262  sub edx, edx
    X86_AT(c, 0xcb262u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cb264  mov byte ptr [0x4c5e1], dl
    X86_AT(c, 0xcb264u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E1u)), g8(c, 2));
    // 0cb26a  mov byte ptr [0x4c5e2], dl
    X86_AT(c, 0xcb26au);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E2u)), g8(c, 2));
    // 0cb270  mov byte ptr [0x4c5e3], dl
    X86_AT(c, 0xcb270u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E3u)), g8(c, 2));
    // 0cb276  mov dword ptr [0x4c5e4], 2
    X86_AT(c, 0xcb276u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5E4u)), 0x2u);
    // 0cb280  mov byte ptr [0x4c5e8], dl
    X86_AT(c, 0xcb280u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E8u)), g8(c, 2));
    // 0cb286  mov byte ptr [0x4c5e9], al
    X86_AT(c, 0xcb286u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E9u)), g8(c, 0));
    // 0cb28b  mov byte ptr [0x4c5ea], dl
    X86_AT(c, 0xcb28bu);
    wr8((c.sbase[3] + (uint32_t)(0x4C5EAu)), g8(c, 2));
    // 0cb291  mov byte ptr [0x4c5eb], dl
    X86_AT(c, 0xcb291u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5EBu)), g8(c, 2));
    // 0cb297  mov dword ptr [0x4c5ec], 3
    X86_AT(c, 0xcb297u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5ECu)), 0x3u);
    // 0cb2a1  mov byte ptr [0x4c5f0], dl
    X86_AT(c, 0xcb2a1u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5F0u)), g8(c, 2));
    // 0cb2a7  mov byte ptr [0x4c5f1], dl
    X86_AT(c, 0xcb2a7u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5F1u)), g8(c, 2));
    // 0cb2ad  mov byte ptr [0x4c5f2], dl
    X86_AT(c, 0xcb2adu);
    wr8((c.sbase[3] + (uint32_t)(0x4C5F2u)), g8(c, 2));
    // 0cb2b3  mov byte ptr [0x4c5f3], dl
    X86_AT(c, 0xcb2b3u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5F3u)), g8(c, 2));
    // 0cb2b9  mov dword ptr [0x4c5f4], 4
    X86_AT(c, 0xcb2b9u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5F4u)), 0x4u);
    // 0cb2c3  mov byte ptr [0x4c5f8], dl
    X86_AT(c, 0xcb2c3u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5F8u)), g8(c, 2));
    // 0cb2c9  mov byte ptr [0x4c5f9], dl
    X86_AT(c, 0xcb2c9u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5F9u)), g8(c, 2));
    // 0cb2cf  mov byte ptr [0x4c5fa], al
    X86_AT(c, 0xcb2cfu);
    wr8((c.sbase[3] + (uint32_t)(0x4C5FAu)), g8(c, 0));
    // 0cb2d4  mov byte ptr [0x4c5fb], dl
    X86_AT(c, 0xcb2d4u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5FBu)), g8(c, 2));
    // 0cb2da  mov dword ptr [0x4c5fc], 5
    X86_AT(c, 0xcb2dau);
    wr32((c.sbase[3] + (uint32_t)(0x4C5FCu)), 0x5u);
    // 0cb2e4  mov byte ptr [0x4c600], al
    X86_AT(c, 0xcb2e4u);
    wr8((c.sbase[3] + (uint32_t)(0x4C600u)), g8(c, 0));
    // 0cb2e9  mov byte ptr [0x4c601], dl
    X86_AT(c, 0xcb2e9u);
    wr8((c.sbase[3] + (uint32_t)(0x4C601u)), g8(c, 2));
    // 0cb2ef  mov byte ptr [0x4c602], al
    X86_AT(c, 0xcb2efu);
    wr8((c.sbase[3] + (uint32_t)(0x4C602u)), g8(c, 0));
    // 0cb2f4  mov byte ptr [0x4c603], dl
    X86_AT(c, 0xcb2f4u);
    wr8((c.sbase[3] + (uint32_t)(0x4C603u)), g8(c, 2));
    // 0cb2fa  mov dword ptr [0x4c604], 6
    X86_AT(c, 0xcb2fau);
    wr32((c.sbase[3] + (uint32_t)(0x4C604u)), 0x6u);
    // 0cb304  mov byte ptr [0x4c608], dl
    X86_AT(c, 0xcb304u);
    wr8((c.sbase[3] + (uint32_t)(0x4C608u)), g8(c, 2));
    // 0cb30a  mov byte ptr [0x4c609], al
    X86_AT(c, 0xcb30au);
    wr8((c.sbase[3] + (uint32_t)(0x4C609u)), g8(c, 0));
    // 0cb30f  mov eax, esi
    X86_AT(c, 0xcb30fu);
    c.r[0] = c.r[6];
    // 0cb311  shl eax, 4
    X86_AT(c, 0xcb311u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0cb314  dec eax
    X86_AT(c, 0xcb314u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0cb315  mov byte ptr [0x4c60a], al
    X86_AT(c, 0xcb315u);
    wr8((c.sbase[3] + (uint32_t)(0x4C60Au)), g8(c, 0));
    // 0cb31a  mov byte ptr [0x4c60b], 0
    X86_AT(c, 0xcb31au);
    wr8((c.sbase[3] + (uint32_t)(0x4C60Bu)), 0x0u);
    // 0cb321  mov dword ptr [0x4c60c], 7
    X86_AT(c, 0xcb321u);
    wr32((c.sbase[3] + (uint32_t)(0x4C60Cu)), 0x7u);
    // 0cb32b  mov byte ptr [0x4c610], al
    X86_AT(c, 0xcb32bu);
    wr8((c.sbase[3] + (uint32_t)(0x4C610u)), g8(c, 0));
    // 0cb330  mov byte ptr [0x4c611], al
    X86_AT(c, 0xcb330u);
    wr8((c.sbase[3] + (uint32_t)(0x4C611u)), g8(c, 0));
    // 0cb335  mov byte ptr [0x4c612], al
    X86_AT(c, 0xcb335u);
    wr8((c.sbase[3] + (uint32_t)(0x4C612u)), g8(c, 0));
    // 0cb33a  mov byte ptr [0x4c613], 0
    X86_AT(c, 0xcb33au);
    wr8((c.sbase[3] + (uint32_t)(0x4C613u)), 0x0u);
    // 0cb341  push 0x4c5d8
    X86_AT(c, 0xcb341u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0cb346  push 1
    X86_AT(c, 0xcb346u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cb348  push 0x4bfd8
    X86_AT(c, 0xcb348u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0cb34d  call 0x19c
    X86_AT(c, 0xcb34du);
    push32(c, 0xcb352u); x86_call_known(c, 0x19cu, f_0000019c); X86_RET(c, 0xcb352u);
    X86_TICK(c, 4);
    // 0cb352  sub ebx, ebx
    X86_AT(c, 0xcb352u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0cb354  add esp, 0xc
    X86_AT(c, 0xcb354u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_cb357:
    X86_TICK(c, 7);
    // 0cb357  cmp edi, ebx
    X86_AT(c, 0xcb357u);
    (void)x86_sub(c, c.r[7], c.r[3], 0, 4);
    // 0cb359  jle 0xcb35e
    X86_AT(c, 0xcb359u);
    if (x86_cc(c, 14)) { goto L_cb35e; }
    X86_TICK(c, 9);
    // 0cb35b  inc ebx
    X86_AT(c, 0xcb35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0cb35c  jmp 0xcb357
    X86_AT(c, 0xcb35cu);
    X86_POLL(c, 0xcb357u); goto L_cb357;
L_cb35e:
    X86_TICK(c, 9);
    // 0cb35e  inc esi
    X86_AT(c, 0xcb35eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0cb35f  jmp 0xcb244
    X86_AT(c, 0xcb35fu);
    X86_POLL(c, 0xcb244u); goto L_cb244;
L_cb364:
    X86_TICK(c, 7);
    // 0cb364  call 0xc8d18
    X86_AT(c, 0xcb364u);
    push32(c, 0xcb369u); x86_call_known(c, 0xc8d18u, f_000c8d18); X86_RET(c, 0xcb369u);
    X86_TICK(c, 28);
    // 0cb369  pop edi
    X86_AT(c, 0xcb369u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb36a  pop esi
    X86_AT(c, 0xcb36au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cb36b  pop ebx
    X86_AT(c, 0xcb36bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cb36c  leave 
    X86_AT(c, 0xcb36cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb36d  ret 
    X86_AT(c, 0xcb36du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb22cu, "ran off the end of a function");
}
}

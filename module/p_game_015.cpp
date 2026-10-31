#include "p_game_funcs.h"
namespace p_game {
void f_000f4e98(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0f4e98  push ebp
    X86_AT(c, 0xf4e98u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f4e99  mov ebp, esp
    X86_AT(c, 0xf4e99u);
    c.r[5] = c.r[4];
    // 0f4e9b  sub esp, 0xc
    X86_AT(c, 0xf4e9bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0f4e9e  push edi
    X86_AT(c, 0xf4e9eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f4e9f  cmp dword ptr [0xd7750], 0
    X86_AT(c, 0xf4e9fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD7750u))), 0x0u, 0, 4);
    // 0f4ea6  jne 0xf4ec6
    X86_AT(c, 0xf4ea6u);
    if (x86_cc(c, 5)) { goto L_f4ec6; }
    X86_TICK(c, 13);
    // 0f4ea8  mov dword ptr [0xd4584], 0xffffffff
    X86_AT(c, 0xf4ea8u);
    wr32((c.sbase[3] + (uint32_t)(0xD4584u)), 0xFFFFFFFFu);
    // 0f4eb2  mov dword ptr [0xd4580], 0
    X86_AT(c, 0xf4eb2u);
    wr32((c.sbase[3] + (uint32_t)(0xD4580u)), 0x0u);
    // 0f4ebc  push 0x7b78
    X86_AT(c, 0xf4ebcu);
    { uint32_t v = 0x7B78u; push32(c, v); }
    // 0f4ec1  jmp 0xf5008
    X86_AT(c, 0xf4ec1u);
    goto L_f5008;
L_f4ec6:
    X86_TICK(c, 14);
    // 0f4ec6  mov edi, dword ptr [0xd7750]
    X86_AT(c, 0xf4ec6u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xD7750u)));
    // 0f4ecc  mov dword ptr [0xd4580], edi
    X86_AT(c, 0xf4eccu);
    wr32((c.sbase[3] + (uint32_t)(0xD4580u)), c.r[7]);
    // 0f4ed2  sub eax, eax
    X86_AT(c, 0xf4ed2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f4ed4  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xf4ed4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0f4ed7  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xf4ed7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0f4eda  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf4edau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_f4edd:
    X86_TICK(c, 11);
    // 0f4edd  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xf4eddu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0f4ee0  cmp eax, 0x8ac0
    X86_AT(c, 0xf4ee0u);
    (void)x86_sub(c, c.r[0], 0x8AC0u, 0, 4);
    // 0f4ee5  jge 0xf4ef0
    X86_AT(c, 0xf4ee5u);
    if (x86_cc(c, 13)) { goto L_f4ef0; }
    X86_TICK(c, 17);
    // 0f4ee7  mov byte ptr [edi], 0xdd
    X86_AT(c, 0xf4ee7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xDDu);
    // 0f4eea  inc edi
    X86_AT(c, 0xf4eeau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f4eeb  inc dword ptr [ebp - 4]
    X86_AT(c, 0xf4eebu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f4eee  jmp 0xf4edd
    X86_AT(c, 0xf4eeeu);
    X86_POLL(c, 0xf4eddu); goto L_f4edd;
L_f4ef0:
    X86_TICK(c, 33);
    // 0f4ef0  mov dword ptr [0xd4584], 0
    X86_AT(c, 0xf4ef0u);
    wr32((c.sbase[3] + (uint32_t)(0xD4584u)), 0x0u);
    // 0f4efa  mov edi, dword ptr [0xd4580]
    X86_AT(c, 0xf4efau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xD4580u)));
    // 0f4f00  add edi, 0x8ac0
    X86_AT(c, 0xf4f00u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x8AC0u, 0, 4); }
    // 0f4f06  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf4f06u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f4f09  push eax
    X86_AT(c, 0xf4f09u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4f0a  lea eax, [ebp - 8]
    X86_AT(c, 0xf4f0au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f4f0d  push eax
    X86_AT(c, 0xf4f0du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4f0e  lea eax, [ebp - 4]
    X86_AT(c, 0xf4f0eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f4f11  push eax
    X86_AT(c, 0xf4f11u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4f12  push 0x8ac0
    X86_AT(c, 0xf4f12u);
    { uint32_t v = 0x8AC0u; push32(c, v); }
    // 0f4f17  push edi
    X86_AT(c, 0xf4f17u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f4f18  push 0x7bac
    X86_AT(c, 0xf4f18u);
    { uint32_t v = 0x7BACu; push32(c, v); }
    // 0f4f1d  call 0xe6460
    X86_AT(c, 0xf4f1du);
    push32(c, 0xf4f22u); f_000e6460(c); X86_RET(c, 0xf4f22u);
    X86_TICK(c, 9);
    // 0f4f22  add esp, 0x18
    X86_AT(c, 0xf4f22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f4f25  inc eax
    X86_AT(c, 0xf4f25u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f4f26  jne 0xf4f32
    X86_AT(c, 0xf4f26u);
    if (x86_cc(c, 5)) { goto L_f4f32; }
    X86_TICK(c, 2);
    // 0f4f28  mov dword ptr [0xd4584], 0xffffffff
    X86_AT(c, 0xf4f28u);
    wr32((c.sbase[3] + (uint32_t)(0xD4584u)), 0xFFFFFFFFu);
L_f4f32:
    X86_TICK(c, 27);
    // 0f4f32  add edi, 0x8ac0
    X86_AT(c, 0xf4f32u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x8AC0u, 0, 4); }
    // 0f4f38  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf4f38u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f4f3b  push eax
    X86_AT(c, 0xf4f3bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4f3c  lea eax, [ebp - 8]
    X86_AT(c, 0xf4f3cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f4f3f  push eax
    X86_AT(c, 0xf4f3fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4f40  lea eax, [ebp - 4]
    X86_AT(c, 0xf4f40u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f4f43  push eax
    X86_AT(c, 0xf4f43u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4f44  push 0x8ac0
    X86_AT(c, 0xf4f44u);
    { uint32_t v = 0x8AC0u; push32(c, v); }
    // 0f4f49  push edi
    X86_AT(c, 0xf4f49u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f4f4a  push 0x7bc0
    X86_AT(c, 0xf4f4au);
    { uint32_t v = 0x7BC0u; push32(c, v); }
    // 0f4f4f  call 0xe6460
    X86_AT(c, 0xf4f4fu);
    push32(c, 0xf4f54u); f_000e6460(c); X86_RET(c, 0xf4f54u);
    X86_TICK(c, 9);
    // 0f4f54  add esp, 0x18
    X86_AT(c, 0xf4f54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f4f57  inc eax
    X86_AT(c, 0xf4f57u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f4f58  jne 0xf4f64
    X86_AT(c, 0xf4f58u);
    if (x86_cc(c, 5)) { goto L_f4f64; }
    X86_TICK(c, 2);
    // 0f4f5a  mov dword ptr [0xd4584], 0xffffffff
    X86_AT(c, 0xf4f5au);
    wr32((c.sbase[3] + (uint32_t)(0xD4584u)), 0xFFFFFFFFu);
L_f4f64:
    X86_TICK(c, 27);
    // 0f4f64  add edi, 0x8ac0
    X86_AT(c, 0xf4f64u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x8AC0u, 0, 4); }
    // 0f4f6a  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf4f6au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f4f6d  push eax
    X86_AT(c, 0xf4f6du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4f6e  lea eax, [ebp - 8]
    X86_AT(c, 0xf4f6eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f4f71  push eax
    X86_AT(c, 0xf4f71u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4f72  lea eax, [ebp - 4]
    X86_AT(c, 0xf4f72u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f4f75  push eax
    X86_AT(c, 0xf4f75u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4f76  push 0x8ac0
    X86_AT(c, 0xf4f76u);
    { uint32_t v = 0x8AC0u; push32(c, v); }
    // 0f4f7b  push edi
    X86_AT(c, 0xf4f7bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f4f7c  push 0x7bd4
    X86_AT(c, 0xf4f7cu);
    { uint32_t v = 0x7BD4u; push32(c, v); }
    // 0f4f81  call 0xe6460
    X86_AT(c, 0xf4f81u);
    push32(c, 0xf4f86u); f_000e6460(c); X86_RET(c, 0xf4f86u);
    X86_TICK(c, 9);
    // 0f4f86  add esp, 0x18
    X86_AT(c, 0xf4f86u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f4f89  inc eax
    X86_AT(c, 0xf4f89u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f4f8a  jne 0xf4f96
    X86_AT(c, 0xf4f8au);
    if (x86_cc(c, 5)) { goto L_f4f96; }
    X86_TICK(c, 2);
    // 0f4f8c  mov dword ptr [0xd4584], 0xffffffff
    X86_AT(c, 0xf4f8cu);
    wr32((c.sbase[3] + (uint32_t)(0xD4584u)), 0xFFFFFFFFu);
L_f4f96:
    X86_TICK(c, 27);
    // 0f4f96  add edi, 0x8ac0
    X86_AT(c, 0xf4f96u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x8AC0u, 0, 4); }
    // 0f4f9c  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf4f9cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f4f9f  push eax
    X86_AT(c, 0xf4f9fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4fa0  lea eax, [ebp - 8]
    X86_AT(c, 0xf4fa0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f4fa3  push eax
    X86_AT(c, 0xf4fa3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4fa4  lea eax, [ebp - 4]
    X86_AT(c, 0xf4fa4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f4fa7  push eax
    X86_AT(c, 0xf4fa7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4fa8  push 0x8ac0
    X86_AT(c, 0xf4fa8u);
    { uint32_t v = 0x8AC0u; push32(c, v); }
    // 0f4fad  push edi
    X86_AT(c, 0xf4fadu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f4fae  push 0x7be8
    X86_AT(c, 0xf4faeu);
    { uint32_t v = 0x7BE8u; push32(c, v); }
    // 0f4fb3  call 0xe6460
    X86_AT(c, 0xf4fb3u);
    push32(c, 0xf4fb8u); f_000e6460(c); X86_RET(c, 0xf4fb8u);
    X86_TICK(c, 9);
    // 0f4fb8  add esp, 0x18
    X86_AT(c, 0xf4fb8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f4fbb  inc eax
    X86_AT(c, 0xf4fbbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f4fbc  jne 0xf4fc8
    X86_AT(c, 0xf4fbcu);
    if (x86_cc(c, 5)) { goto L_f4fc8; }
    X86_TICK(c, 2);
    // 0f4fbe  mov dword ptr [0xd4584], 0xffffffff
    X86_AT(c, 0xf4fbeu);
    wr32((c.sbase[3] + (uint32_t)(0xD4584u)), 0xFFFFFFFFu);
L_f4fc8:
    X86_TICK(c, 27);
    // 0f4fc8  add edi, 0x8ac0
    X86_AT(c, 0xf4fc8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x8AC0u, 0, 4); }
    // 0f4fce  lea eax, [ebp - 0xc]
    X86_AT(c, 0xf4fceu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0f4fd1  push eax
    X86_AT(c, 0xf4fd1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4fd2  lea eax, [ebp - 8]
    X86_AT(c, 0xf4fd2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f4fd5  push eax
    X86_AT(c, 0xf4fd5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4fd6  lea eax, [ebp - 4]
    X86_AT(c, 0xf4fd6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f4fd9  push eax
    X86_AT(c, 0xf4fd9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f4fda  push 0x8ac0
    X86_AT(c, 0xf4fdau);
    { uint32_t v = 0x8AC0u; push32(c, v); }
    // 0f4fdf  push edi
    X86_AT(c, 0xf4fdfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f4fe0  push 0x7bfc
    X86_AT(c, 0xf4fe0u);
    { uint32_t v = 0x7BFCu; push32(c, v); }
    // 0f4fe5  call 0xe6460
    X86_AT(c, 0xf4fe5u);
    push32(c, 0xf4feau); f_000e6460(c); X86_RET(c, 0xf4feau);
    X86_TICK(c, 9);
    // 0f4fea  add esp, 0x18
    X86_AT(c, 0xf4feau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f4fed  inc eax
    X86_AT(c, 0xf4fedu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f4fee  jne 0xf4ffa
    X86_AT(c, 0xf4feeu);
    if (x86_cc(c, 5)) { goto L_f4ffa; }
    X86_TICK(c, 2);
    // 0f4ff0  mov dword ptr [0xd4584], 0xffffffff
    X86_AT(c, 0xf4ff0u);
    wr32((c.sbase[3] + (uint32_t)(0xD4584u)), 0xFFFFFFFFu);
L_f4ffa:
    X86_TICK(c, 12);
    // 0f4ffa  cmp dword ptr [0xd4584], 0xffffffff
    X86_AT(c, 0xf4ffau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4584u))), 0xFFFFFFFFu, 0, 4);
    // 0f5001  jne 0xf5010
    X86_AT(c, 0xf5001u);
    if (x86_cc(c, 5)) { goto L_f5010; }
    X86_TICK(c, 2);
    // 0f5003  push 0x7c10
    X86_AT(c, 0xf5003u);
    { uint32_t v = 0x7C10u; push32(c, v); }
L_f5008:
    X86_TICK(c, 7);
    // 0f5008  call 0xe75f8
    X86_AT(c, 0xf5008u);
    push32(c, 0xf500du); f_000e75f8(c); X86_RET(c, 0xf500du);
    X86_TICK(c, 2);
    // 0f500d  add esp, 4
    X86_AT(c, 0xf500du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f5010:
    X86_TICK(c, 20);
    // 0f5010  pop edi
    X86_AT(c, 0xf5010u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f5011  leave 
    X86_AT(c, 0xf5011u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f5012  ret 
    X86_AT(c, 0xf5012u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf4e98u, "ran off the end of a function");
}
void f_000f5014(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0f5014  push ebp
    X86_AT(c, 0xf5014u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f5015  mov ebp, esp
    X86_AT(c, 0xf5015u);
    c.r[5] = c.r[4];
    // 0f5017  push ebx
    X86_AT(c, 0xf5017u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f5018  push esi
    X86_AT(c, 0xf5018u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f5019  push edi
    X86_AT(c, 0xf5019u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f501a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf501au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f501d  mov eax, dword ptr [0xd4580]
    X86_AT(c, 0xf501du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4580u)));
    // 0f5022  and eax, eax
    X86_AT(c, 0xf5022u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f5024  je 0xf509e
    X86_AT(c, 0xf5024u);
    if (x86_cc(c, 4)) { goto L_f509e; }
    X86_TICK(c, 26);
    // 0f5026  inc edi
    X86_AT(c, 0xf5026u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f5027  mov edx, edi
    X86_AT(c, 0xf5027u);
    c.r[2] = c.r[7];
    // 0f5029  mov ecx, edx
    X86_AT(c, 0xf5029u);
    c.r[1] = c.r[2];
    // 0f502b  shl ecx, 4
    X86_AT(c, 0xf502bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 0f502e  add ecx, edx
    X86_AT(c, 0xf502eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0f5030  lea ecx, [edx + ecx*4]
    X86_AT(c, 0xf5030u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 4);
    // 0f5033  lea ecx, [edx + ecx*4]
    X86_AT(c, 0xf5033u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 4);
    // 0f5036  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xf5036u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0f5039  shl ecx, 6
    X86_AT(c, 0xf5039u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[1] = r; }
    // 0f503c  lea ebx, [ecx + eax*1]
    X86_AT(c, 0xf503cu);
    c.r[3] = (uint32_t)(c.r[1] + c.r[0]);
    // 0f503f  dec ebx
    X86_AT(c, 0xf503fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0f5040  sub esi, esi
    X86_AT(c, 0xf5040u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_f5042:
    X86_TICK(c, 7);
    // 0f5042  cmp esi, 0x3c
    X86_AT(c, 0xf5042u);
    (void)x86_sub(c, c.r[6], 0x3Cu, 0, 4);
    // 0f5045  jge 0xf509e
    X86_AT(c, 0xf5045u);
    if (x86_cc(c, 13)) { goto L_f509e; }
    X86_TICK(c, 83);
    // 0f5047  mov eax, dword ptr [0xd4580]
    X86_AT(c, 0xf5047u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4580u)));
    // 0f504c  lea edx, [eax + 0x250]
    X86_AT(c, 0xf504cu);
    c.r[2] = (uint32_t)(c.r[0] + 0x250u);
    // 0f5052  push esi
    X86_AT(c, 0xf5052u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f5053  push edi
    X86_AT(c, 0xf5053u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f5054  mov esi, eax
    X86_AT(c, 0xf5054u);
    c.r[6] = c.r[0];
    // 0f5056  mov edi, edx
    X86_AT(c, 0xf5056u);
    c.r[7] = c.r[2];
    // 0f5058  std 
    X86_AT(c, 0xf5058u);
    c.fl |= X86_DF;
    // 0f5059  mov ecx, 0x221c
    X86_AT(c, 0xf5059u);
    c.r[1] = 0x221Cu;
    // 0f505e  add esi, 0x886c
    X86_AT(c, 0xf505eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x886Cu, 0, 4); }
    // 0f5064  add edi, 0x886c
    X86_AT(c, 0xf5064u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x886Cu, 0, 4); }
    // 0f506a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf506au);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0f506c  cld 
    X86_AT(c, 0xf506cu);
    c.fl &= ~X86_DF;
    // 0f506d  pop edi
    X86_AT(c, 0xf506du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f506e  pop esi
    X86_AT(c, 0xf506eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f506f  sub ebx, 0x250
    X86_AT(c, 0xf506fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x250u, 0, 4); }
    // 0f5075  push esi
    X86_AT(c, 0xf5075u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f5076  push edi
    X86_AT(c, 0xf5076u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f5077  mov esi, ebx
    X86_AT(c, 0xf5077u);
    c.r[6] = c.r[3];
    // 0f5079  mov edi, eax
    X86_AT(c, 0xf5079u);
    c.r[7] = c.r[0];
    // 0f507b  mov ecx, 0x94
    X86_AT(c, 0xf507bu);
    c.r[1] = 0x94u;
    // 0f5080  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf5080u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0f5082  pop edi
    X86_AT(c, 0xf5082u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f5083  pop esi
    X86_AT(c, 0xf5083u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f5084  push 0xf0
    X86_AT(c, 0xf5084u);
    { uint32_t v = 0xF0u; push32(c, v); }
    // 0f5089  push 0x128
    X86_AT(c, 0xf5089u);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0f508e  push 0x6c
    X86_AT(c, 0xf508eu);
    { uint32_t v = 0x6Cu; push32(c, v); }
    // 0f5090  push 0xa
    X86_AT(c, 0xf5090u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f5092  push eax
    X86_AT(c, 0xf5092u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5093  call 0xe6288
    X86_AT(c, 0xf5093u);
    push32(c, 0xf5098u); f_000e6288(c); X86_RET(c, 0xf5098u);
    X86_TICK(c, 11);
    // 0f5098  inc esi
    X86_AT(c, 0xf5098u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f5099  add esp, 0x14
    X86_AT(c, 0xf5099u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f509c  jmp 0xf5042
    X86_AT(c, 0xf509cu);
    X86_POLL(c, 0xf5042u); goto L_f5042;
L_f509e:
    X86_TICK(c, 28);
    // 0f509e  pop edi
    X86_AT(c, 0xf509eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f509f  pop esi
    X86_AT(c, 0xf509fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f50a0  pop ebx
    X86_AT(c, 0xf50a0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f50a1  leave 
    X86_AT(c, 0xf50a1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f50a2  ret 
    X86_AT(c, 0xf50a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5014u, "ran off the end of a function");
}
void f_000f50a4(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0f50a4  push ebp
    X86_AT(c, 0xf50a4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f50a5  mov ebp, esp
    X86_AT(c, 0xf50a5u);
    c.r[5] = c.r[4];
    // 0f50a7  push edi
    X86_AT(c, 0xf50a7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f50a8  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf50a8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f50ab  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf50abu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f50b0  lea edx, [eax + eax*4]
    X86_AT(c, 0xf50b0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f50b3  lea edx, [eax + edx*2]
    X86_AT(c, 0xf50b3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f50b6  shl edx, 5
    X86_AT(c, 0xf50b6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f50b9  sub edx, eax
    X86_AT(c, 0xf50b9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f50bb  mov eax, dword ptr [edx + 0xcde91]
    X86_AT(c, 0xf50bbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)));
    // 0f50c1  sub eax, edi
    X86_AT(c, 0xf50c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0f50c3  inc eax
    X86_AT(c, 0xf50c3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f50c4  jg 0xf50cd
    X86_AT(c, 0xf50c4u);
    if (x86_cc(c, 15)) { goto L_f50cd; }
    X86_TICK(c, 9);
    // 0f50c6  mov eax, 0xffffffff
    X86_AT(c, 0xf50c6u);
    c.r[0] = 0xFFFFFFFFu;
    // 0f50cb  jmp 0xf50f4
    X86_AT(c, 0xf50cbu);
    goto L_f50f4;
L_f50cd:
    X86_TICK(c, 27);
    // 0f50cd  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf50cdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f50d2  lea edx, [eax + eax*4]
    X86_AT(c, 0xf50d2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f50d5  lea edx, [eax + edx*2]
    X86_AT(c, 0xf50d5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f50d8  shl edx, 5
    X86_AT(c, 0xf50d8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f50db  sub edx, eax
    X86_AT(c, 0xf50dbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f50dd  sub dword ptr [edx + 0xcde91], edi
    X86_AT(c, 0xf50ddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0f50e3  call 0xe9010
    X86_AT(c, 0xf50e3u);
    push32(c, 0xf50e8u); f_000e9010(c); X86_RET(c, 0xf50e8u);
    X86_TICK(c, 9);
    // 0f50e8  push 7
    X86_AT(c, 0xf50e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f50ea  call 0xe693c
    X86_AT(c, 0xf50eau);
    push32(c, 0xf50efu); f_000e693c(c); X86_RET(c, 0xf50efu);
    X86_TICK(c, 4);
    // 0f50ef  sub eax, eax
    X86_AT(c, 0xf50efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f50f1  add esp, 4
    X86_AT(c, 0xf50f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f50f4:
    X86_TICK(c, 20);
    // 0f50f4  pop edi
    X86_AT(c, 0xf50f4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f50f5  leave 
    X86_AT(c, 0xf50f5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f50f6  ret 
    X86_AT(c, 0xf50f6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf50a4u, "ran off the end of a function");
}
void f_000f50f8(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0f50f8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf50f8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f50fd  lea edx, [eax + eax*4]
    X86_AT(c, 0xf50fdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5100  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5100u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5103  shl edx, 5
    X86_AT(c, 0xf5103u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f5106  sub edx, eax
    X86_AT(c, 0xf5106u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f5108  cmp dword ptr [edx + 0xcdf6b], 0x20
    X86_AT(c, 0xf5108u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0x20u, 0, 4);
    // 0f510f  jge 0xf515e
    X86_AT(c, 0xf510fu);
    if (x86_cc(c, 13)) { goto L_f515e; }
    X86_TICK(c, 12);
    // 0f5111  cmp dword ptr [edx + 0xcdf6f], 0x20
    X86_AT(c, 0xf5111u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))), 0x20u, 0, 4);
    // 0f5118  jge 0xf5137
    X86_AT(c, 0xf5118u);
    if (x86_cc(c, 13)) { goto L_f5137; }
    X86_TICK(c, 12);
    // 0f511a  cmp dword ptr [edx + 0xcdf57], 2
    X86_AT(c, 0xf511au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x2u, 0, 4);
    // 0f5121  je 0xf512d
    X86_AT(c, 0xf5121u);
    if (x86_cc(c, 4)) { goto L_f512d; }
    X86_TICK(c, 7);
    // 0f5123  call 0xf53cc
    X86_AT(c, 0xf5123u);
    push32(c, 0xf5128u); f_000f53cc(c); X86_RET(c, 0xf5128u);
    X86_TICK(c, 7);
    // 0f5128  jmp 0xf51b3
    X86_AT(c, 0xf5128u);
    goto L_f51b3;
L_f512d:
    X86_TICK(c, 7);
    // 0f512d  call 0xf5d20
    X86_AT(c, 0xf512du);
    push32(c, 0xf5132u); f_000f5d20(c); X86_RET(c, 0xf5132u);
    X86_TICK(c, 7);
    // 0f5132  jmp 0xf51b3
    X86_AT(c, 0xf5132u);
    goto L_f51b3;
L_f5137:
    X86_TICK(c, 25);
    // 0f5137  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf5137u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f513c  lea edx, [eax + eax*4]
    X86_AT(c, 0xf513cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f513f  lea edx, [eax + edx*2]
    X86_AT(c, 0xf513fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5142  shl edx, 5
    X86_AT(c, 0xf5142u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f5145  sub edx, eax
    X86_AT(c, 0xf5145u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f5147  cmp dword ptr [edx + 0xcdf57], 2
    X86_AT(c, 0xf5147u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x2u, 0, 4);
    // 0f514e  je 0xf5157
    X86_AT(c, 0xf514eu);
    if (x86_cc(c, 4)) { goto L_f5157; }
    X86_TICK(c, 7);
    // 0f5150  call 0xf5ac4
    X86_AT(c, 0xf5150u);
    push32(c, 0xf5155u); f_000f5ac4(c); X86_RET(c, 0xf5155u);
    X86_TICK(c, 7);
    // 0f5155  jmp 0xf51b3
    X86_AT(c, 0xf5155u);
    goto L_f51b3;
L_f5157:
    X86_TICK(c, 7);
    // 0f5157  call 0xf51b4
    X86_AT(c, 0xf5157u);
    push32(c, 0xf515cu); f_000f51b4(c); X86_RET(c, 0xf515cu);
    X86_TICK(c, 7);
    // 0f515c  jmp 0xf51b3
    X86_AT(c, 0xf515cu);
    goto L_f51b3;
L_f515e:
    X86_TICK(c, 25);
    // 0f515e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf515eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f5163  lea edx, [eax + eax*4]
    X86_AT(c, 0xf5163u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5166  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5166u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5169  shl edx, 5
    X86_AT(c, 0xf5169u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f516c  sub edx, eax
    X86_AT(c, 0xf516cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f516e  cmp dword ptr [edx + 0xcdf6f], 0x20
    X86_AT(c, 0xf516eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))), 0x20u, 0, 4);
    // 0f5175  jge 0xf518e
    X86_AT(c, 0xf5175u);
    if (x86_cc(c, 13)) { goto L_f518e; }
    X86_TICK(c, 12);
    // 0f5177  cmp dword ptr [edx + 0xcdf57], 2
    X86_AT(c, 0xf5177u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x2u, 0, 4);
    // 0f517e  je 0xf5187
    X86_AT(c, 0xf517eu);
    if (x86_cc(c, 4)) { goto L_f5187; }
    X86_TICK(c, 7);
    // 0f5180  call 0xf56f8
    X86_AT(c, 0xf5180u);
    push32(c, 0xf5185u); f_000f56f8(c); X86_RET(c, 0xf5185u);
    X86_TICK(c, 7);
    // 0f5185  jmp 0xf51b3
    X86_AT(c, 0xf5185u);
    goto L_f51b3;
L_f5187:
    X86_TICK(c, 7);
    // 0f5187  call 0xf5f68
    X86_AT(c, 0xf5187u);
    push32(c, 0xf518cu); f_000f5f68(c); X86_RET(c, 0xf518cu);
    X86_TICK(c, 7);
    // 0f518c  jmp 0xf51b3
    X86_AT(c, 0xf518cu);
    goto L_f51b3;
L_f518e:
    X86_TICK(c, 25);
    // 0f518e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf518eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f5193  lea edx, [eax + eax*4]
    X86_AT(c, 0xf5193u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5196  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5196u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5199  shl edx, 5
    X86_AT(c, 0xf5199u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f519c  sub edx, eax
    X86_AT(c, 0xf519cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f519e  cmp dword ptr [edx + 0xcdf57], 2
    X86_AT(c, 0xf519eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x2u, 0, 4);
    // 0f51a5  je 0xf51ae
    X86_AT(c, 0xf51a5u);
    if (x86_cc(c, 4)) { goto L_f51ae; }
    X86_TICK(c, 7);
    // 0f51a7  call 0xf583c
    X86_AT(c, 0xf51a7u);
    push32(c, 0xf51acu); f_000f583c(c); X86_RET(c, 0xf51acu);
    X86_TICK(c, 7);
    // 0f51ac  jmp 0xf51b3
    X86_AT(c, 0xf51acu);
    goto L_f51b3;
L_f51ae:
    X86_TICK(c, 7);
    // 0f51ae  call 0xf5568
    X86_AT(c, 0xf51aeu);
    push32(c, 0xf51b3u); f_000f5568(c); X86_RET(c, 0xf51b3u);
L_f51b3:
    X86_TICK(c, 10);
    // 0f51b3  ret 
    X86_AT(c, 0xf51b3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf50f8u, "ran off the end of a function");
}
void f_000f51b3(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0f51b3  ret 
    X86_AT(c, 0xf51b3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf51b3u, "ran off the end of a function");
}
void f_000f51b4(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0f51b4  push ebx
    X86_AT(c, 0xf51b4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f51b5  push edi
    X86_AT(c, 0xf51b5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f51b6  push 7
    X86_AT(c, 0xf51b6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f51b8  call 0xe693c
    X86_AT(c, 0xf51b8u);
    push32(c, 0xf51bdu); f_000e693c(c); X86_RET(c, 0xf51bdu);
    X86_TICK(c, 11);
    // 0f51bd  push 0x7c5c
    X86_AT(c, 0xf51bdu);
    { uint32_t v = 0x7C5Cu; push32(c, v); }
    // 0f51c2  push 7
    X86_AT(c, 0xf51c2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f51c4  call 0xe5654
    X86_AT(c, 0xf51c4u);
    push32(c, 0xf51c9u); f_000e5654(c); X86_RET(c, 0xf51c9u);
    X86_TICK(c, 9);
    // 0f51c9  push 7
    X86_AT(c, 0xf51c9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f51cb  call 0xe6c68
    X86_AT(c, 0xf51cbu);
    push32(c, 0xf51d0u); f_000e6c68(c); X86_RET(c, 0xf51d0u);
    X86_TICK(c, 11);
    // 0f51d0  push 0x7c8c
    X86_AT(c, 0xf51d0u);
    { uint32_t v = 0x7C8Cu; push32(c, v); }
    // 0f51d5  push 7
    X86_AT(c, 0xf51d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f51d7  call 0xe5654
    X86_AT(c, 0xf51d7u);
    push32(c, 0xf51dcu); f_000e5654(c); X86_RET(c, 0xf51dcu);
    X86_TICK(c, 9);
    // 0f51dc  push 7
    X86_AT(c, 0xf51dcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f51de  call 0xe6c68
    X86_AT(c, 0xf51deu);
    push32(c, 0xf51e3u); f_000e6c68(c); X86_RET(c, 0xf51e3u);
    X86_TICK(c, 11);
    // 0f51e3  push 0x7cd0
    X86_AT(c, 0xf51e3u);
    { uint32_t v = 0x7CD0u; push32(c, v); }
    // 0f51e8  push 7
    X86_AT(c, 0xf51e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f51ea  call 0xe5654
    X86_AT(c, 0xf51eau);
    push32(c, 0xf51efu); f_000e5654(c); X86_RET(c, 0xf51efu);
    X86_TICK(c, 2);
    // 0f51ef  add esp, 0x24
    X86_AT(c, 0xf51efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_f51f2:
    X86_TICK(c, 9);
    // 0f51f2  push 7
    X86_AT(c, 0xf51f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f51f4  call 0xe4748
    X86_AT(c, 0xf51f4u);
    push32(c, 0xf51f9u); f_000e4748(c); X86_RET(c, 0xf51f9u);
    X86_TICK(c, 12);
    // 0f51f9  xchg ebx, eax
    X86_AT(c, 0xf51f9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f51fa  add esp, 4
    X86_AT(c, 0xf51fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f51fd  cmp bl, 1
    X86_AT(c, 0xf51fdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f5200  je 0xf521c
    X86_AT(c, 0xf5200u);
    if (x86_cc(c, 4)) { goto L_f521c; }
    X86_TICK(c, 7);
    // 0f5202  cmp bl, 0x41
    X86_AT(c, 0xf5202u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0f5205  je 0xf521c
    X86_AT(c, 0xf5205u);
    if (x86_cc(c, 4)) { goto L_f521c; }
    X86_TICK(c, 7);
    // 0f5207  cmp bl, 0x42
    X86_AT(c, 0xf5207u);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0f520a  je 0xf521c
    X86_AT(c, 0xf520au);
    if (x86_cc(c, 4)) { goto L_f521c; }
    X86_TICK(c, 7);
    // 0f520c  and bl, bl
    X86_AT(c, 0xf520cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0f520e  je 0xf51f2
    X86_AT(c, 0xf520eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf51f2u); goto L_f51f2; }
    X86_TICK(c, 9);
    // 0f5210  push 1
    X86_AT(c, 0xf5210u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f5212  call 0xe1944
    X86_AT(c, 0xf5212u);
    push32(c, 0xf5217u); f_000e1944(c); X86_RET(c, 0xf5217u);
    X86_TICK(c, 9);
    // 0f5217  add esp, 4
    X86_AT(c, 0xf5217u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f521a  jmp 0xf51f2
    X86_AT(c, 0xf521au);
    X86_POLL(c, 0xf51f2u); goto L_f51f2;
L_f521c:
    X86_TICK(c, 7);
    // 0f521c  cmp bl, 1
    X86_AT(c, 0xf521cu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f521f  jne 0xf524f
    X86_AT(c, 0xf521fu);
    if (x86_cc(c, 5)) { goto L_f524f; }
    X86_TICK(c, 11);
    // 0f5221  push 0x7d18
    X86_AT(c, 0xf5221u);
    { uint32_t v = 0x7D18u; push32(c, v); }
    // 0f5226  push 7
    X86_AT(c, 0xf5226u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5228  call 0xe5654
    X86_AT(c, 0xf5228u);
    push32(c, 0xf522du); f_000e5654(c); X86_RET(c, 0xf522du);
    X86_TICK(c, 9);
    // 0f522d  push 7
    X86_AT(c, 0xf522du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f522f  call 0xe6c68
    X86_AT(c, 0xf522fu);
    push32(c, 0xf5234u); f_000e6c68(c); X86_RET(c, 0xf5234u);
    X86_TICK(c, 11);
    // 0f5234  push 0x7d30
    X86_AT(c, 0xf5234u);
    { uint32_t v = 0x7D30u; push32(c, v); }
    // 0f5239  push 7
    X86_AT(c, 0xf5239u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f523b  call 0xe5654
    X86_AT(c, 0xf523bu);
    push32(c, 0xf5240u); f_000e5654(c); X86_RET(c, 0xf5240u);
    X86_TICK(c, 9);
    // 0f5240  push 7
    X86_AT(c, 0xf5240u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5242  call 0xe6c68
    X86_AT(c, 0xf5242u);
    push32(c, 0xf5247u); f_000e6c68(c); X86_RET(c, 0xf5247u);
    X86_TICK(c, 9);
    // 0f5247  add esp, 0x18
    X86_AT(c, 0xf5247u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f524a  jmp 0xf53c8
    X86_AT(c, 0xf524au);
    goto L_f53c8;
L_f524f:
    X86_TICK(c, 7);
    // 0f524f  cmp bl, 0x41
    X86_AT(c, 0xf524fu);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0f5252  jne 0xf52a8
    X86_AT(c, 0xf5252u);
    if (x86_cc(c, 5)) { goto L_f52a8; }
    X86_TICK(c, 11);
    // 0f5254  push 0x7d68
    X86_AT(c, 0xf5254u);
    { uint32_t v = 0x7D68u; push32(c, v); }
    // 0f5259  push 7
    X86_AT(c, 0xf5259u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f525b  call 0xe5654
    X86_AT(c, 0xf525bu);
    push32(c, 0xf5260u); f_000e5654(c); X86_RET(c, 0xf5260u);
    X86_TICK(c, 9);
    // 0f5260  push 7
    X86_AT(c, 0xf5260u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5262  call 0xe6c68
    X86_AT(c, 0xf5262u);
    push32(c, 0xf5267u); f_000e6c68(c); X86_RET(c, 0xf5267u);
    X86_TICK(c, 9);
    // 0f5267  push 5
    X86_AT(c, 0xf5267u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f5269  call 0xf50a4
    X86_AT(c, 0xf5269u);
    push32(c, 0xf526eu); f_000f50a4(c); X86_RET(c, 0xf526eu);
    X86_TICK(c, 9);
    // 0f526e  add esp, 0x10
    X86_AT(c, 0xf526eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f5271  inc eax
    X86_AT(c, 0xf5271u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f5272  jne 0xf5285
    X86_AT(c, 0xf5272u);
    if (x86_cc(c, 5)) { goto L_f5285; }
    X86_TICK(c, 9);
    // 0f5274  push 3
    X86_AT(c, 0xf5274u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f5276  call 0xe1944
    X86_AT(c, 0xf5276u);
    push32(c, 0xf527bu); f_000e1944(c); X86_RET(c, 0xf527bu);
    X86_TICK(c, 9);
    // 0f527b  push 0x7d88
    X86_AT(c, 0xf527bu);
    { uint32_t v = 0x7D88u; push32(c, v); }
    // 0f5280  jmp 0xf53b7
    X86_AT(c, 0xf5280u);
    goto L_f53b7;
L_f5285:
    X86_TICK(c, 11);
    // 0f5285  push 0x7dc8
    X86_AT(c, 0xf5285u);
    { uint32_t v = 0x7DC8u; push32(c, v); }
    // 0f528a  push 7
    X86_AT(c, 0xf528au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f528c  call 0xe5654
    X86_AT(c, 0xf528cu);
    push32(c, 0xf5291u); f_000e5654(c); X86_RET(c, 0xf5291u);
    X86_TICK(c, 9);
    // 0f5291  push 7
    X86_AT(c, 0xf5291u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5293  call 0xe6c68
    X86_AT(c, 0xf5293u);
    push32(c, 0xf5298u); f_000e6c68(c); X86_RET(c, 0xf5298u);
    X86_TICK(c, 9);
    // 0f5298  push 5
    X86_AT(c, 0xf5298u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f529a  call 0xe1a7c
    X86_AT(c, 0xf529au);
    push32(c, 0xf529fu); f_000e1a7c(c); X86_RET(c, 0xf529fu);
    X86_TICK(c, 12);
    // 0f529f  xchg edi, eax
    X86_AT(c, 0xf529fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f52a0  add esp, 0x10
    X86_AT(c, 0xf52a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f52a3  jmp 0xf5345
    X86_AT(c, 0xf52a3u);
    goto L_f5345;
L_f52a8:
    X86_TICK(c, 11);
    // 0f52a8  push 0x7e10
    X86_AT(c, 0xf52a8u);
    { uint32_t v = 0x7E10u; push32(c, v); }
    // 0f52ad  push 7
    X86_AT(c, 0xf52adu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f52af  call 0xe5654
    X86_AT(c, 0xf52afu);
    push32(c, 0xf52b4u); f_000e5654(c); X86_RET(c, 0xf52b4u);
    X86_TICK(c, 9);
    // 0f52b4  push 7
    X86_AT(c, 0xf52b4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f52b6  call 0xe6c68
    X86_AT(c, 0xf52b6u);
    push32(c, 0xf52bbu); f_000e6c68(c); X86_RET(c, 0xf52bbu);
    X86_TICK(c, 11);
    // 0f52bb  push 0x7e24
    X86_AT(c, 0xf52bbu);
    { uint32_t v = 0x7E24u; push32(c, v); }
    // 0f52c0  push 7
    X86_AT(c, 0xf52c0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f52c2  call 0xe5654
    X86_AT(c, 0xf52c2u);
    push32(c, 0xf52c7u); f_000e5654(c); X86_RET(c, 0xf52c7u);
    X86_TICK(c, 9);
    // 0f52c7  push 7
    X86_AT(c, 0xf52c7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f52c9  call 0xe1b10
    X86_AT(c, 0xf52c9u);
    push32(c, 0xf52ceu); f_000e1b10(c); X86_RET(c, 0xf52ceu);
    X86_TICK(c, 12);
    // 0f52ce  xchg edi, eax
    X86_AT(c, 0xf52ceu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f52cf  add esp, 0x18
    X86_AT(c, 0xf52cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f52d2  cmp edi, 0xffffffff
    X86_AT(c, 0xf52d2u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0f52d5  je 0xf52db
    X86_AT(c, 0xf52d5u);
    if (x86_cc(c, 4)) { goto L_f52db; }
    X86_TICK(c, 7);
    // 0f52d7  and edi, edi
    X86_AT(c, 0xf52d7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f52d9  jne 0xf52e5
    X86_AT(c, 0xf52d9u);
    if (x86_cc(c, 5)) { goto L_f52e5; }
L_f52db:
    X86_TICK(c, 9);
    // 0f52db  push 0x7e4c
    X86_AT(c, 0xf52dbu);
    { uint32_t v = 0x7E4Cu; push32(c, v); }
    // 0f52e0  jmp 0xf5367
    X86_AT(c, 0xf52e0u);
    goto L_f5367;
L_f52e5:
    X86_TICK(c, 9);
    // 0f52e5  push 7
    X86_AT(c, 0xf52e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f52e7  call 0xe6c68
    X86_AT(c, 0xf52e7u);
    push32(c, 0xf52ecu); f_000e6c68(c); X86_RET(c, 0xf52ecu);
    X86_TICK(c, 9);
    // 0f52ec  push edi
    X86_AT(c, 0xf52ecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f52ed  call 0xf50a4
    X86_AT(c, 0xf52edu);
    push32(c, 0xf52f2u); f_000f50a4(c); X86_RET(c, 0xf52f2u);
    X86_TICK(c, 9);
    // 0f52f2  add esp, 8
    X86_AT(c, 0xf52f2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f52f5  inc eax
    X86_AT(c, 0xf52f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f52f6  jne 0xf5302
    X86_AT(c, 0xf52f6u);
    if (x86_cc(c, 5)) { goto L_f5302; }
    X86_TICK(c, 9);
    // 0f52f8  push 0x7e8c
    X86_AT(c, 0xf52f8u);
    { uint32_t v = 0x7E8Cu; push32(c, v); }
    // 0f52fd  jmp 0xf5367
    X86_AT(c, 0xf52fdu);
    goto L_f5367;
L_f5302:
    X86_TICK(c, 59);
    // 0f5302  xchg edi, eax
    X86_AT(c, 0xf5302u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f5303  cdq 
    X86_AT(c, 0xf5303u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f5304  mov ecx, 3
    X86_AT(c, 0xf5304u);
    c.r[1] = 0x3u;
    // 0f5309  idiv ecx
    X86_AT(c, 0xf5309u);
    x86_idiv(c, c.r[1], 4, 0xf5309u);
    // 0f530b  xchg edi, eax
    X86_AT(c, 0xf530bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f530c  push 9
    X86_AT(c, 0xf530cu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f530e  call 0xe1a7c
    X86_AT(c, 0xf530eu);
    push32(c, 0xf5313u); f_000e1a7c(c); X86_RET(c, 0xf5313u);
    X86_TICK(c, 9);
    // 0f5313  add esp, 4
    X86_AT(c, 0xf5313u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f5316  cmp eax, 7
    X86_AT(c, 0xf5316u);
    (void)x86_sub(c, c.r[0], 0x7u, 0, 4);
    // 0f5319  jge 0xf532e
    X86_AT(c, 0xf5319u);
    if (x86_cc(c, 13)) { goto L_f532e; }
    X86_TICK(c, 9);
    // 0f531b  push 9
    X86_AT(c, 0xf531bu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f531d  call 0xe1a7c
    X86_AT(c, 0xf531du);
    push32(c, 0xf5322u); f_000e1a7c(c); X86_RET(c, 0xf5322u);
    X86_TICK(c, 9);
    // 0f5322  add esp, 4
    X86_AT(c, 0xf5322u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f5325  cmp eax, 5
    X86_AT(c, 0xf5325u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0f5328  jge 0xf532d
    X86_AT(c, 0xf5328u);
    if (x86_cc(c, 13)) { goto L_f532d; }
    X86_TICK(c, 9);
    // 0f532a  dec edi
    X86_AT(c, 0xf532au);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0f532b  jmp 0xf532e
    X86_AT(c, 0xf532bu);
    goto L_f532e;
L_f532d:
    X86_TICK(c, 2);
    // 0f532d  inc edi
    X86_AT(c, 0xf532du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_f532e:
    X86_TICK(c, 7);
    // 0f532e  cmp edi, 0xa
    X86_AT(c, 0xf532eu);
    (void)x86_sub(c, c.r[7], 0xAu, 0, 4);
    // 0f5331  jg 0xf5337
    X86_AT(c, 0xf5331u);
    if (x86_cc(c, 15)) { goto L_f5337; }
    X86_TICK(c, 7);
    // 0f5333  and edi, edi
    X86_AT(c, 0xf5333u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f5335  jge 0xf533b
    X86_AT(c, 0xf5335u);
    if (x86_cc(c, 13)) { goto L_f533b; }
L_f5337:
    X86_TICK(c, 9);
    // 0f5337  sub edi, edi
    X86_AT(c, 0xf5337u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0f5339  jmp 0xf5345
    X86_AT(c, 0xf5339u);
    goto L_f5345;
L_f533b:
    X86_TICK(c, 7);
    // 0f533b  cmp edi, 3
    X86_AT(c, 0xf533bu);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0f533e  jge 0xf5345
    X86_AT(c, 0xf533eu);
    if (x86_cc(c, 13)) { goto L_f5345; }
    X86_TICK(c, 2);
    // 0f5340  mov edi, 3
    X86_AT(c, 0xf5340u);
    c.r[7] = 0x3u;
L_f5345:
    X86_TICK(c, 11);
    // 0f5345  push 0x7ec0
    X86_AT(c, 0xf5345u);
    { uint32_t v = 0x7EC0u; push32(c, v); }
    // 0f534a  push 7
    X86_AT(c, 0xf534au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f534c  call 0xe5654
    X86_AT(c, 0xf534cu);
    push32(c, 0xf5351u); f_000e5654(c); X86_RET(c, 0xf5351u);
    X86_TICK(c, 9);
    // 0f5351  push 7
    X86_AT(c, 0xf5351u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5353  call 0xe6c68
    X86_AT(c, 0xf5353u);
    push32(c, 0xf5358u); f_000e6c68(c); X86_RET(c, 0xf5358u);
    X86_TICK(c, 9);
    // 0f5358  add esp, 0xc
    X86_AT(c, 0xf5358u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f535b  cmp edi, 3
    X86_AT(c, 0xf535bu);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0f535e  jge 0xf537a
    X86_AT(c, 0xf535eu);
    if (x86_cc(c, 13)) { goto L_f537a; }
    X86_TICK(c, 5);
    // 0f5360  push dword ptr [edi*4 + 0xd4588]
    X86_AT(c, 0xf5360u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xD4588u))); push32(c, v); }
L_f5367:
    X86_TICK(c, 9);
    // 0f5367  push 7
    X86_AT(c, 0xf5367u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5369  call 0xe5654
    X86_AT(c, 0xf5369u);
    push32(c, 0xf536eu); f_000e5654(c); X86_RET(c, 0xf536eu);
    X86_TICK(c, 9);
    // 0f536e  push 7
    X86_AT(c, 0xf536eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5370  call 0xe6c68
    X86_AT(c, 0xf5370u);
    push32(c, 0xf5375u); f_000e6c68(c); X86_RET(c, 0xf5375u);
    X86_TICK(c, 9);
    // 0f5375  add esp, 0xc
    X86_AT(c, 0xf5375u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f5378  jmp 0xf53c8
    X86_AT(c, 0xf5378u);
    goto L_f53c8;
L_f537a:
    X86_TICK(c, 25);
    // 0f537a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf537au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f537f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf537fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5382  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5382u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5385  shl edx, 5
    X86_AT(c, 0xf5385u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f5388  sub edx, eax
    X86_AT(c, 0xf5388u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f538a  cmp byte ptr [edx + 0xcde7c], 0x46
    X86_AT(c, 0xf538au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu))), 0x46u, 0, 1);
    // 0f5391  jne 0xf539a
    X86_AT(c, 0xf5391u);
    if (x86_cc(c, 5)) { goto L_f539a; }
    X86_TICK(c, 9);
    // 0f5393  push 0x7ef8
    X86_AT(c, 0xf5393u);
    { uint32_t v = 0x7EF8u; push32(c, v); }
    // 0f5398  jmp 0xf539f
    X86_AT(c, 0xf5398u);
    goto L_f539f;
L_f539a:
    X86_TICK(c, 2);
    // 0f539a  push 0x7f18
    X86_AT(c, 0xf539au);
    { uint32_t v = 0x7F18u; push32(c, v); }
L_f539f:
    X86_TICK(c, 9);
    // 0f539f  push 7
    X86_AT(c, 0xf539fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f53a1  call 0xe5654
    X86_AT(c, 0xf53a1u);
    push32(c, 0xf53a6u); f_000e5654(c); X86_RET(c, 0xf53a6u);
    X86_TICK(c, 11);
    // 0f53a6  add esp, 8
    X86_AT(c, 0xf53a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f53a9  push 7
    X86_AT(c, 0xf53a9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f53ab  call 0xe6c68
    X86_AT(c, 0xf53abu);
    push32(c, 0xf53b0u); f_000e6c68(c); X86_RET(c, 0xf53b0u);
    X86_TICK(c, 5);
    // 0f53b0  push dword ptr [edi*4 + 0xd4588]
    X86_AT(c, 0xf53b0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xD4588u))); push32(c, v); }
L_f53b7:
    X86_TICK(c, 9);
    // 0f53b7  push 7
    X86_AT(c, 0xf53b7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f53b9  call 0xe5654
    X86_AT(c, 0xf53b9u);
    push32(c, 0xf53beu); f_000e5654(c); X86_RET(c, 0xf53beu);
    X86_TICK(c, 9);
    // 0f53be  push 7
    X86_AT(c, 0xf53beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f53c0  call 0xe6c68
    X86_AT(c, 0xf53c0u);
    push32(c, 0xf53c5u); f_000e6c68(c); X86_RET(c, 0xf53c5u);
    X86_TICK(c, 2);
    // 0f53c5  add esp, 0x10
    X86_AT(c, 0xf53c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f53c8:
    X86_TICK(c, 18);
    // 0f53c8  pop edi
    X86_AT(c, 0xf53c8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f53c9  pop ebx
    X86_AT(c, 0xf53c9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f53ca  ret 
    X86_AT(c, 0xf53cau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf51b4u, "ran off the end of a function");
}
void f_000f5367(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f5367  push 7
    X86_AT(c, 0xf5367u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5369  call 0xe5654
    X86_AT(c, 0xf5369u);
    push32(c, 0xf536eu); f_000e5654(c); X86_RET(c, 0xf536eu);
    X86_TICK(c, 9);
    // 0f536e  push 7
    X86_AT(c, 0xf536eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5370  call 0xe6c68
    X86_AT(c, 0xf5370u);
    push32(c, 0xf5375u); f_000e6c68(c); X86_RET(c, 0xf5375u);
    X86_TICK(c, 9);
    // 0f5375  add esp, 0xc
    X86_AT(c, 0xf5375u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f5378  jmp 0xf53c8
    X86_AT(c, 0xf5378u);
    goto L_f53c8;
L_f53c8:
    X86_TICK(c, 18);
    // 0f53c8  pop edi
    X86_AT(c, 0xf53c8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f53c9  pop ebx
    X86_AT(c, 0xf53c9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f53ca  ret 
    X86_AT(c, 0xf53cau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5367u, "ran off the end of a function");
}
void f_000f53cc(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0f53cc  push edi
    X86_AT(c, 0xf53ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f53cd  push 7
    X86_AT(c, 0xf53cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f53cf  call 0xe693c
    X86_AT(c, 0xf53cfu);
    push32(c, 0xf53d4u); f_000e693c(c); X86_RET(c, 0xf53d4u);
    X86_TICK(c, 11);
    // 0f53d4  push 0x7f40
    X86_AT(c, 0xf53d4u);
    { uint32_t v = 0x7F40u; push32(c, v); }
    // 0f53d9  push 7
    X86_AT(c, 0xf53d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f53db  call 0xe5654
    X86_AT(c, 0xf53dbu);
    push32(c, 0xf53e0u); f_000e5654(c); X86_RET(c, 0xf53e0u);
    X86_TICK(c, 9);
    // 0f53e0  push 7
    X86_AT(c, 0xf53e0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f53e2  call 0xe6c68
    X86_AT(c, 0xf53e2u);
    push32(c, 0xf53e7u); f_000e6c68(c); X86_RET(c, 0xf53e7u);
    X86_TICK(c, 11);
    // 0f53e7  push 0x7f6c
    X86_AT(c, 0xf53e7u);
    { uint32_t v = 0x7F6Cu; push32(c, v); }
    // 0f53ec  push 7
    X86_AT(c, 0xf53ecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f53ee  call 0xe5654
    X86_AT(c, 0xf53eeu);
    push32(c, 0xf53f3u); f_000e5654(c); X86_RET(c, 0xf53f3u);
    X86_TICK(c, 9);
    // 0f53f3  push 7
    X86_AT(c, 0xf53f3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f53f5  call 0xe6c68
    X86_AT(c, 0xf53f5u);
    push32(c, 0xf53fau); f_000e6c68(c); X86_RET(c, 0xf53fau);
    X86_TICK(c, 11);
    // 0f53fa  push 0x7fd8
    X86_AT(c, 0xf53fau);
    { uint32_t v = 0x7FD8u; push32(c, v); }
    // 0f53ff  push 7
    X86_AT(c, 0xf53ffu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5401  call 0xe5654
    X86_AT(c, 0xf5401u);
    push32(c, 0xf5406u); f_000e5654(c); X86_RET(c, 0xf5406u);
    X86_TICK(c, 9);
    // 0f5406  push 7
    X86_AT(c, 0xf5406u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5408  call 0xe6c68
    X86_AT(c, 0xf5408u);
    push32(c, 0xf540du); f_000e6c68(c); X86_RET(c, 0xf540du);
    X86_TICK(c, 11);
    // 0f540d  push 0x803c
    X86_AT(c, 0xf540du);
    { uint32_t v = 0x803Cu; push32(c, v); }
    // 0f5412  push 7
    X86_AT(c, 0xf5412u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5414  call 0xe5654
    X86_AT(c, 0xf5414u);
    push32(c, 0xf5419u); f_000e5654(c); X86_RET(c, 0xf5419u);
    X86_TICK(c, 9);
    // 0f5419  push 7
    X86_AT(c, 0xf5419u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f541b  call 0xe1c0c
    X86_AT(c, 0xf541bu);
    push32(c, 0xf5420u); f_000e1c0c(c); X86_RET(c, 0xf5420u);
    X86_TICK(c, 12);
    // 0f5420  xchg edi, eax
    X86_AT(c, 0xf5420u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f5421  push 7
    X86_AT(c, 0xf5421u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5423  call 0xe6c68
    X86_AT(c, 0xf5423u);
    push32(c, 0xf5428u); f_000e6c68(c); X86_RET(c, 0xf5428u);
    X86_TICK(c, 9);
    // 0f5428  add esp, 0x38
    X86_AT(c, 0xf5428u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0f542b  cmp edi, 0xffffffff
    X86_AT(c, 0xf542bu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0f542e  je 0xf5434
    X86_AT(c, 0xf542eu);
    if (x86_cc(c, 4)) { goto L_f5434; }
    X86_TICK(c, 7);
    // 0f5430  and edi, edi
    X86_AT(c, 0xf5430u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f5432  jne 0xf544c
    X86_AT(c, 0xf5432u);
    if (x86_cc(c, 5)) { goto L_f544c; }
L_f5434:
    X86_TICK(c, 11);
    // 0f5434  push 0x8078
    X86_AT(c, 0xf5434u);
    { uint32_t v = 0x8078u; push32(c, v); }
    // 0f5439  push 7
    X86_AT(c, 0xf5439u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f543b  call 0xe5654
    X86_AT(c, 0xf543bu);
    push32(c, 0xf5440u); f_000e5654(c); X86_RET(c, 0xf5440u);
    X86_TICK(c, 9);
    // 0f5440  push 7
    X86_AT(c, 0xf5440u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5442  call 0xe6c68
    X86_AT(c, 0xf5442u);
    push32(c, 0xf5447u); f_000e6c68(c); X86_RET(c, 0xf5447u);
    X86_TICK(c, 7);
    // 0f5447  jmp 0xf5561
    X86_AT(c, 0xf5447u);
    goto L_f5561;
L_f544c:
    X86_TICK(c, 9);
    // 0f544c  push edi
    X86_AT(c, 0xf544cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f544d  call 0xf50a4
    X86_AT(c, 0xf544du);
    push32(c, 0xf5452u); f_000f50a4(c); X86_RET(c, 0xf5452u);
    X86_TICK(c, 9);
    // 0f5452  add esp, 4
    X86_AT(c, 0xf5452u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f5455  inc eax
    X86_AT(c, 0xf5455u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f5456  jne 0xf548d
    X86_AT(c, 0xf5456u);
    if (x86_cc(c, 5)) { goto L_f548d; }
    X86_TICK(c, 9);
    // 0f5458  push 3
    X86_AT(c, 0xf5458u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f545a  call 0xe1944
    X86_AT(c, 0xf545au);
    push32(c, 0xf545fu); f_000e1944(c); X86_RET(c, 0xf545fu);
    X86_TICK(c, 11);
    // 0f545f  push 0x80cc
    X86_AT(c, 0xf545fu);
    { uint32_t v = 0x80CCu; push32(c, v); }
    // 0f5464  push 7
    X86_AT(c, 0xf5464u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5466  call 0xe5654
    X86_AT(c, 0xf5466u);
    push32(c, 0xf546bu); f_000e5654(c); X86_RET(c, 0xf546bu);
    X86_TICK(c, 9);
    // 0f546b  push 7
    X86_AT(c, 0xf546bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f546d  call 0xe6c68
    X86_AT(c, 0xf546du);
    push32(c, 0xf5472u); f_000e6c68(c); X86_RET(c, 0xf5472u);
    X86_TICK(c, 11);
    // 0f5472  push 0x8100
    X86_AT(c, 0xf5472u);
    { uint32_t v = 0x8100u; push32(c, v); }
    // 0f5477  push 7
    X86_AT(c, 0xf5477u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5479  call 0xe5654
    X86_AT(c, 0xf5479u);
    push32(c, 0xf547eu); f_000e5654(c); X86_RET(c, 0xf547eu);
    X86_TICK(c, 9);
    // 0f547e  push 7
    X86_AT(c, 0xf547eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5480  call 0xe6c68
    X86_AT(c, 0xf5480u);
    push32(c, 0xf5485u); f_000e6c68(c); X86_RET(c, 0xf5485u);
    X86_TICK(c, 9);
    // 0f5485  add esp, 0x1c
    X86_AT(c, 0xf5485u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f5488  jmp 0xf5564
    X86_AT(c, 0xf5488u);
    goto L_f5564;
L_f548d:
    X86_TICK(c, 7);
    // 0f548d  call 0xe9010
    X86_AT(c, 0xf548du);
    push32(c, 0xf5492u); f_000e9010(c); X86_RET(c, 0xf5492u);
    X86_TICK(c, 9);
    // 0f5492  push 7
    X86_AT(c, 0xf5492u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5494  call 0xe693c
    X86_AT(c, 0xf5494u);
    push32(c, 0xf5499u); f_000e693c(c); X86_RET(c, 0xf5499u);
    X86_TICK(c, 59);
    // 0f5499  xchg edi, eax
    X86_AT(c, 0xf5499u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f549a  cdq 
    X86_AT(c, 0xf549au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f549b  mov ecx, 0x64
    X86_AT(c, 0xf549bu);
    c.r[1] = 0x64u;
    // 0f54a0  idiv ecx
    X86_AT(c, 0xf54a0u);
    x86_idiv(c, c.r[1], 4, 0xf54a0u);
    // 0f54a2  xchg edi, eax
    X86_AT(c, 0xf54a2u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f54a3  add esp, 4
    X86_AT(c, 0xf54a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f54a6  and edi, edi
    X86_AT(c, 0xf54a6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f54a8  jne 0xf54df
    X86_AT(c, 0xf54a8u);
    if (x86_cc(c, 5)) { goto L_f54df; }
    X86_TICK(c, 11);
    // 0f54aa  push 0x813c
    X86_AT(c, 0xf54aau);
    { uint32_t v = 0x813Cu; push32(c, v); }
    // 0f54af  push 7
    X86_AT(c, 0xf54afu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f54b1  call 0xe5654
    X86_AT(c, 0xf54b1u);
    push32(c, 0xf54b6u); f_000e5654(c); X86_RET(c, 0xf54b6u);
    X86_TICK(c, 9);
    // 0f54b6  push 7
    X86_AT(c, 0xf54b6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f54b8  call 0xe6c68
    X86_AT(c, 0xf54b8u);
    push32(c, 0xf54bdu); f_000e6c68(c); X86_RET(c, 0xf54bdu);
    X86_TICK(c, 11);
    // 0f54bd  push 0x816c
    X86_AT(c, 0xf54bdu);
    { uint32_t v = 0x816Cu; push32(c, v); }
    // 0f54c2  push 7
    X86_AT(c, 0xf54c2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f54c4  call 0xe5654
    X86_AT(c, 0xf54c4u);
    push32(c, 0xf54c9u); f_000e5654(c); X86_RET(c, 0xf54c9u);
    X86_TICK(c, 9);
    // 0f54c9  push 7
    X86_AT(c, 0xf54c9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f54cb  call 0xe6c68
    X86_AT(c, 0xf54cbu);
    push32(c, 0xf54d0u); f_000e6c68(c); X86_RET(c, 0xf54d0u);
    X86_TICK(c, 9);
    // 0f54d0  push 7
    X86_AT(c, 0xf54d0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f54d2  call 0xefeb0
    X86_AT(c, 0xf54d2u);
    push32(c, 0xf54d7u); f_000efeb0(c); X86_RET(c, 0xf54d7u);
    X86_TICK(c, 4);
    // 0f54d7  mov edi, 1
    X86_AT(c, 0xf54d7u);
    c.r[7] = 0x1u;
    // 0f54dc  add esp, 0x1c
    X86_AT(c, 0xf54dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_f54df:
    X86_TICK(c, 7);
    // 0f54df  cmp edi, 9
    X86_AT(c, 0xf54dfu);
    (void)x86_sub(c, c.r[7], 0x9u, 0, 4);
    // 0f54e2  jle 0xf54e9
    X86_AT(c, 0xf54e2u);
    if (x86_cc(c, 14)) { goto L_f54e9; }
    X86_TICK(c, 2);
    // 0f54e4  mov edi, 9
    X86_AT(c, 0xf54e4u);
    c.r[7] = 0x9u;
L_f54e9:
    X86_TICK(c, 9);
    // 0f54e9  push 0xb
    X86_AT(c, 0xf54e9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f54eb  call 0xe5748
    X86_AT(c, 0xf54ebu);
    push32(c, 0xf54f0u); f_000e5748(c); X86_RET(c, 0xf54f0u);
    X86_TICK(c, 14);
    // 0f54f0  add esp, 4
    X86_AT(c, 0xf54f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f54f3  cmp dword ptr [0x7a6b4], 0
    X86_AT(c, 0xf54f3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A6B4u))), 0x0u, 0, 4);
    // 0f54fa  jne 0xf5520
    X86_AT(c, 0xf54fau);
    if (x86_cc(c, 5)) { goto L_f5520; }
    X86_TICK(c, 14);
    // 0f54fc  push dword ptr [0xd45b0]
    X86_AT(c, 0xf54fcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD45B0u))); push32(c, v); }
    // 0f5502  push 7
    X86_AT(c, 0xf5502u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5504  call 0xe6cb0
    X86_AT(c, 0xf5504u);
    push32(c, 0xf5509u); f_000e6cb0(c); X86_RET(c, 0xf5509u);
    X86_TICK(c, 9);
    // 0f5509  push 7
    X86_AT(c, 0xf5509u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f550b  call 0xe6c68
    X86_AT(c, 0xf550bu);
    push32(c, 0xf5510u); f_000e6c68(c); X86_RET(c, 0xf5510u);
    X86_TICK(c, 9);
    // 0f5510  push 7
    X86_AT(c, 0xf5510u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5512  call 0xefeb0
    X86_AT(c, 0xf5512u);
    push32(c, 0xf5517u); f_000efeb0(c); X86_RET(c, 0xf5517u);
    X86_TICK(c, 12);
    // 0f5517  push dword ptr [edi*4 + 0xd45b0]
    X86_AT(c, 0xf5517u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xD45B0u))); push32(c, v); }
    // 0f551e  jmp 0xf5542
    X86_AT(c, 0xf551eu);
    goto L_f5542;
L_f5520:
    X86_TICK(c, 14);
    // 0f5520  push dword ptr [0xd45d8]
    X86_AT(c, 0xf5520u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD45D8u))); push32(c, v); }
    // 0f5526  push 7
    X86_AT(c, 0xf5526u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5528  call 0xe6cb0
    X86_AT(c, 0xf5528u);
    push32(c, 0xf552du); f_000e6cb0(c); X86_RET(c, 0xf552du);
    X86_TICK(c, 9);
    // 0f552d  push 7
    X86_AT(c, 0xf552du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f552f  call 0xe6c68
    X86_AT(c, 0xf552fu);
    push32(c, 0xf5534u); f_000e6c68(c); X86_RET(c, 0xf5534u);
    X86_TICK(c, 9);
    // 0f5534  push 7
    X86_AT(c, 0xf5534u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5536  call 0xefeb0
    X86_AT(c, 0xf5536u);
    push32(c, 0xf553bu); f_000efeb0(c); X86_RET(c, 0xf553bu);
    X86_TICK(c, 5);
    // 0f553b  push dword ptr [edi*4 + 0xd45d8]
    X86_AT(c, 0xf553bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xD45D8u))); push32(c, v); }
L_f5542:
    X86_TICK(c, 9);
    // 0f5542  push 7
    X86_AT(c, 0xf5542u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5544  call 0xe6cb0
    X86_AT(c, 0xf5544u);
    push32(c, 0xf5549u); f_000e6cb0(c); X86_RET(c, 0xf5549u);
    X86_TICK(c, 11);
    // 0f5549  add esp, 0x18
    X86_AT(c, 0xf5549u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f554c  push 7
    X86_AT(c, 0xf554cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f554e  call 0xe6c68
    X86_AT(c, 0xf554eu);
    push32(c, 0xf5553u); f_000e6c68(c); X86_RET(c, 0xf5553u);
    X86_TICK(c, 9);
    // 0f5553  push 7
    X86_AT(c, 0xf5553u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5555  call 0xe693c
    X86_AT(c, 0xf5555u);
    push32(c, 0xf555au); f_000e693c(c); X86_RET(c, 0xf555au);
    X86_TICK(c, 9);
    // 0f555a  push 7
    X86_AT(c, 0xf555au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f555c  call 0xefeb0
    X86_AT(c, 0xf555cu);
    push32(c, 0xf5561u); f_000efeb0(c); X86_RET(c, 0xf5561u);
L_f5561:
    X86_TICK(c, 2);
    // 0f5561  add esp, 0xc
    X86_AT(c, 0xf5561u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f5564:
    X86_TICK(c, 14);
    // 0f5564  pop edi
    X86_AT(c, 0xf5564u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f5565  ret 
    X86_AT(c, 0xf5565u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf53ccu, "ran off the end of a function");
}
void f_000f5568(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0f5568  push ebx
    X86_AT(c, 0xf5568u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f5569  push edi
    X86_AT(c, 0xf5569u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f556a  push 7
    X86_AT(c, 0xf556au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f556c  call 0xe693c
    X86_AT(c, 0xf556cu);
    push32(c, 0xf5571u); f_000e693c(c); X86_RET(c, 0xf5571u);
    X86_TICK(c, 11);
    // 0f5571  push 0x81b0
    X86_AT(c, 0xf5571u);
    { uint32_t v = 0x81B0u; push32(c, v); }
    // 0f5576  push 7
    X86_AT(c, 0xf5576u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5578  call 0xe5654
    X86_AT(c, 0xf5578u);
    push32(c, 0xf557du); f_000e5654(c); X86_RET(c, 0xf557du);
    X86_TICK(c, 9);
    // 0f557d  push 7
    X86_AT(c, 0xf557du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f557f  call 0xe6c68
    X86_AT(c, 0xf557fu);
    push32(c, 0xf5584u); f_000e6c68(c); X86_RET(c, 0xf5584u);
    X86_TICK(c, 11);
    // 0f5584  push 0x81ec
    X86_AT(c, 0xf5584u);
    { uint32_t v = 0x81ECu; push32(c, v); }
    // 0f5589  push 7
    X86_AT(c, 0xf5589u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f558b  call 0xe5654
    X86_AT(c, 0xf558bu);
    push32(c, 0xf5590u); f_000e5654(c); X86_RET(c, 0xf5590u);
    X86_TICK(c, 9);
    // 0f5590  push 7
    X86_AT(c, 0xf5590u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5592  call 0xe6c68
    X86_AT(c, 0xf5592u);
    push32(c, 0xf5597u); f_000e6c68(c); X86_RET(c, 0xf5597u);
    X86_TICK(c, 9);
    // 0f5597  push 4
    X86_AT(c, 0xf5597u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f5599  call 0xf5644
    X86_AT(c, 0xf5599u);
    push32(c, 0xf559eu); f_000f5644(c); X86_RET(c, 0xf559eu);
    X86_TICK(c, 16);
    // 0f559e  xchg edi, eax
    X86_AT(c, 0xf559eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f559f  push 4
    X86_AT(c, 0xf559fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f55a1  push edi
    X86_AT(c, 0xf55a1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f55a2  push 7
    X86_AT(c, 0xf55a2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f55a4  call 0xe5630
    X86_AT(c, 0xf55a4u);
    push32(c, 0xf55a9u); f_000e5630(c); X86_RET(c, 0xf55a9u);
    X86_TICK(c, 11);
    // 0f55a9  push 0x8280
    X86_AT(c, 0xf55a9u);
    { uint32_t v = 0x8280u; push32(c, v); }
    // 0f55ae  push 7
    X86_AT(c, 0xf55aeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f55b0  call 0xe5654
    X86_AT(c, 0xf55b0u);
    push32(c, 0xf55b5u); f_000e5654(c); X86_RET(c, 0xf55b5u);
    X86_TICK(c, 9);
    // 0f55b5  push 7
    X86_AT(c, 0xf55b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f55b7  call 0xe2628
    X86_AT(c, 0xf55b7u);
    push32(c, 0xf55bcu); f_000e2628(c); X86_RET(c, 0xf55bcu);
    X86_TICK(c, 12);
    // 0f55bc  xchg ebx, eax
    X86_AT(c, 0xf55bcu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f55bd  add esp, 0x38
    X86_AT(c, 0xf55bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0f55c0  cmp bl, 0x59
    X86_AT(c, 0xf55c0u);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0f55c3  je 0xf55da
    X86_AT(c, 0xf55c3u);
    if (x86_cc(c, 4)) { goto L_f55da; }
    X86_TICK(c, 11);
    // 0f55c5  push 0x82bc
    X86_AT(c, 0xf55c5u);
    { uint32_t v = 0x82BCu; push32(c, v); }
    // 0f55ca  push 7
    X86_AT(c, 0xf55cau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f55cc  call 0xe5654
    X86_AT(c, 0xf55ccu);
    push32(c, 0xf55d1u); f_000e5654(c); X86_RET(c, 0xf55d1u);
    X86_TICK(c, 9);
    // 0f55d1  push 7
    X86_AT(c, 0xf55d1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f55d3  call 0xe6c68
    X86_AT(c, 0xf55d3u);
    push32(c, 0xf55d8u); f_000e6c68(c); X86_RET(c, 0xf55d8u);
    X86_TICK(c, 7);
    // 0f55d8  jmp 0xf563c
    X86_AT(c, 0xf55d8u);
    goto L_f563c;
L_f55da:
    X86_TICK(c, 9);
    // 0f55da  push edi
    X86_AT(c, 0xf55dau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f55db  call 0xf50a4
    X86_AT(c, 0xf55dbu);
    push32(c, 0xf55e0u); f_000f50a4(c); X86_RET(c, 0xf55e0u);
    X86_TICK(c, 9);
    // 0f55e0  add esp, 4
    X86_AT(c, 0xf55e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f55e3  inc eax
    X86_AT(c, 0xf55e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f55e4  jne 0xf5605
    X86_AT(c, 0xf55e4u);
    if (x86_cc(c, 5)) { goto L_f5605; }
    X86_TICK(c, 9);
    // 0f55e6  push 3
    X86_AT(c, 0xf55e6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f55e8  call 0xe1944
    X86_AT(c, 0xf55e8u);
    push32(c, 0xf55edu); f_000e1944(c); X86_RET(c, 0xf55edu);
    X86_TICK(c, 11);
    // 0f55ed  push 0x82f8
    X86_AT(c, 0xf55edu);
    { uint32_t v = 0x82F8u; push32(c, v); }
    // 0f55f2  push 7
    X86_AT(c, 0xf55f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f55f4  call 0xe5654
    X86_AT(c, 0xf55f4u);
    push32(c, 0xf55f9u); f_000e5654(c); X86_RET(c, 0xf55f9u);
    X86_TICK(c, 9);
    // 0f55f9  push 7
    X86_AT(c, 0xf55f9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f55fb  call 0xe6c68
    X86_AT(c, 0xf55fbu);
    push32(c, 0xf5600u); f_000e6c68(c); X86_RET(c, 0xf5600u);
    X86_TICK(c, 9);
    // 0f5600  add esp, 0x10
    X86_AT(c, 0xf5600u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f5603  jmp 0xf563f
    X86_AT(c, 0xf5603u);
    goto L_f563f;
L_f5605:
    X86_TICK(c, 11);
    // 0f5605  push 0x8374
    X86_AT(c, 0xf5605u);
    { uint32_t v = 0x8374u; push32(c, v); }
    // 0f560a  push 7
    X86_AT(c, 0xf560au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f560c  call 0xe5654
    X86_AT(c, 0xf560cu);
    push32(c, 0xf5611u); f_000e5654(c); X86_RET(c, 0xf5611u);
    X86_TICK(c, 9);
    // 0f5611  push 7
    X86_AT(c, 0xf5611u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5613  call 0xe6c68
    X86_AT(c, 0xf5613u);
    push32(c, 0xf5618u); f_000e6c68(c); X86_RET(c, 0xf5618u);
    X86_TICK(c, 7);
    // 0f5618  call 0xe9010
    X86_AT(c, 0xf5618u);
    push32(c, 0xf561du); f_000e9010(c); X86_RET(c, 0xf561du);
    X86_TICK(c, 22);
    // 0f561d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf561du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f5622  lea edx, [eax + eax*4]
    X86_AT(c, 0xf5622u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5625  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5625u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5628  shl edx, 5
    X86_AT(c, 0xf5628u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f562b  sub edx, eax
    X86_AT(c, 0xf562bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f562d  mov dword ptr [edx + 0xcde56], 2
    X86_AT(c, 0xf562du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u)), 0x2u);
    // 0f5637  call 0xe2c18
    X86_AT(c, 0xf5637u);
    push32(c, 0xf563cu); f_000e2c18(c); X86_RET(c, 0xf563cu);
L_f563c:
    X86_TICK(c, 2);
    // 0f563c  add esp, 0xc
    X86_AT(c, 0xf563cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f563f:
    X86_TICK(c, 18);
    // 0f563f  pop edi
    X86_AT(c, 0xf563fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f5640  pop ebx
    X86_AT(c, 0xf5640u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f5641  ret 
    X86_AT(c, 0xf5641u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5568u, "ran off the end of a function");
}
void f_000f5644(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0f5644  push ebp
    X86_AT(c, 0xf5644u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f5645  mov ebp, esp
    X86_AT(c, 0xf5645u);
    c.r[5] = c.r[4];
    // 0f5647  push eax
    X86_AT(c, 0xf5647u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5648  push esi
    X86_AT(c, 0xf5648u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f5649  push edi
    X86_AT(c, 0xf5649u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f564a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf564au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f564f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf564fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5652  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5652u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5655  shl edx, 5
    X86_AT(c, 0xf5655u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f5658  sub edx, eax
    X86_AT(c, 0xf5658u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f565a  mov edi, dword ptr [edx + 0xcde76]
    X86_AT(c, 0xf565au);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)));
    // 0f5660  add edi, dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xf5660u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu))), 0, 4); }
    // 0f5666  cmp edi, 0x80
    X86_AT(c, 0xf5666u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0f566c  jl 0xf5678
    X86_AT(c, 0xf566cu);
    if (x86_cc(c, 12)) { goto L_f5678; }
    X86_TICK(c, 9);
    // 0f566e  mov esi, 8
    X86_AT(c, 0xf566eu);
    c.r[6] = 0x8u;
    // 0f5673  jmp 0xf56ce
    X86_AT(c, 0xf5673u);
    goto L_f56ce;
L_f5678:
    X86_TICK(c, 7);
    // 0f5678  cmp edi, 0x40
    X86_AT(c, 0xf5678u);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0f567b  jl 0xf5684
    X86_AT(c, 0xf567bu);
    if (x86_cc(c, 12)) { goto L_f5684; }
    X86_TICK(c, 9);
    // 0f567d  mov esi, 7
    X86_AT(c, 0xf567du);
    c.r[6] = 0x7u;
    // 0f5682  jmp 0xf56ce
    X86_AT(c, 0xf5682u);
    goto L_f56ce;
L_f5684:
    X86_TICK(c, 7);
    // 0f5684  cmp edi, 0x20
    X86_AT(c, 0xf5684u);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0f5687  jl 0xf5690
    X86_AT(c, 0xf5687u);
    if (x86_cc(c, 12)) { goto L_f5690; }
    X86_TICK(c, 9);
    // 0f5689  mov esi, 6
    X86_AT(c, 0xf5689u);
    c.r[6] = 0x6u;
    // 0f568e  jmp 0xf56ce
    X86_AT(c, 0xf568eu);
    goto L_f56ce;
L_f5690:
    X86_TICK(c, 7);
    // 0f5690  cmp edi, 0x10
    X86_AT(c, 0xf5690u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0f5693  jl 0xf569c
    X86_AT(c, 0xf5693u);
    if (x86_cc(c, 12)) { goto L_f569c; }
    X86_TICK(c, 9);
    // 0f5695  mov esi, 5
    X86_AT(c, 0xf5695u);
    c.r[6] = 0x5u;
    // 0f569a  jmp 0xf56ce
    X86_AT(c, 0xf569au);
    goto L_f56ce;
L_f569c:
    X86_TICK(c, 7);
    // 0f569c  cmp edi, 8
    X86_AT(c, 0xf569cu);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0f569f  jl 0xf56a8
    X86_AT(c, 0xf569fu);
    if (x86_cc(c, 12)) { goto L_f56a8; }
    X86_TICK(c, 9);
    // 0f56a1  mov esi, 4
    X86_AT(c, 0xf56a1u);
    c.r[6] = 0x4u;
    // 0f56a6  jmp 0xf56ce
    X86_AT(c, 0xf56a6u);
    goto L_f56ce;
L_f56a8:
    X86_TICK(c, 7);
    // 0f56a8  cmp edi, 4
    X86_AT(c, 0xf56a8u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0f56ab  jl 0xf56b4
    X86_AT(c, 0xf56abu);
    if (x86_cc(c, 12)) { goto L_f56b4; }
    X86_TICK(c, 9);
    // 0f56ad  mov esi, 3
    X86_AT(c, 0xf56adu);
    c.r[6] = 0x3u;
    // 0f56b2  jmp 0xf56ce
    X86_AT(c, 0xf56b2u);
    goto L_f56ce;
L_f56b4:
    X86_TICK(c, 7);
    // 0f56b4  cmp edi, 2
    X86_AT(c, 0xf56b4u);
    (void)x86_sub(c, c.r[7], 0x2u, 0, 4);
    // 0f56b7  jl 0xf56c0
    X86_AT(c, 0xf56b7u);
    if (x86_cc(c, 12)) { goto L_f56c0; }
    X86_TICK(c, 9);
    // 0f56b9  mov esi, 2
    X86_AT(c, 0xf56b9u);
    c.r[6] = 0x2u;
    // 0f56be  jmp 0xf56ce
    X86_AT(c, 0xf56beu);
    goto L_f56ce;
L_f56c0:
    X86_TICK(c, 7);
    // 0f56c0  cmp edi, 1
    X86_AT(c, 0xf56c0u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0f56c3  jne 0xf56cc
    X86_AT(c, 0xf56c3u);
    if (x86_cc(c, 5)) { goto L_f56cc; }
    X86_TICK(c, 9);
    // 0f56c5  mov esi, 1
    X86_AT(c, 0xf56c5u);
    c.r[6] = 0x1u;
    // 0f56ca  jmp 0xf56ce
    X86_AT(c, 0xf56cau);
    goto L_f56ce;
L_f56cc:
    X86_TICK(c, 2);
    // 0f56cc  sub esi, esi
    X86_AT(c, 0xf56ccu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_f56ce:
    X86_TICK(c, 15);
    // 0f56ce  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf56ceu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f56d1  add edi, 7
    X86_AT(c, 0xf56d1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x7u, 0, 4); }
    // 0f56d4  sub edi, esi
    X86_AT(c, 0xf56d4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f56d6  mov eax, 4
    X86_AT(c, 0xf56d6u);
    c.r[0] = 0x4u;
    // 0f56db  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf56dbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f56de  xchg ecx, eax
    X86_AT(c, 0xf56deu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_f56df:
    X86_TICK(c, 7);
    // 0f56df  and edi, edi
    X86_AT(c, 0xf56dfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f56e1  jl 0xf56f0
    X86_AT(c, 0xf56e1u);
    if (x86_cc(c, 12)) { goto L_f56f0; }
    X86_TICK(c, 21);
    // 0f56e3  mov esi, ecx
    X86_AT(c, 0xf56e3u);
    c.r[6] = c.r[1];
    // 0f56e5  add esi, dword ptr [ebp - 4]
    X86_AT(c, 0xf56e5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0f56e8  mov dword ptr [ebp - 4], ecx
    X86_AT(c, 0xf56e8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[1]);
    // 0f56eb  mov ecx, esi
    X86_AT(c, 0xf56ebu);
    c.r[1] = c.r[6];
    // 0f56ed  dec edi
    X86_AT(c, 0xf56edu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0f56ee  jmp 0xf56df
    X86_AT(c, 0xf56eeu);
    X86_POLL(c, 0xf56dfu); goto L_f56df;
L_f56f0:
    X86_TICK(c, 26);
    // 0f56f0  mov eax, ecx
    X86_AT(c, 0xf56f0u);
    c.r[0] = c.r[1];
    // 0f56f2  pop edi
    X86_AT(c, 0xf56f2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f56f3  pop esi
    X86_AT(c, 0xf56f3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f56f4  leave 
    X86_AT(c, 0xf56f4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f56f5  ret 
    X86_AT(c, 0xf56f5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5644u, "ran off the end of a function");
}
void f_000f56f8(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0f56f8  push ebx
    X86_AT(c, 0xf56f8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f56f9  push edi
    X86_AT(c, 0xf56f9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f56fa  push 7
    X86_AT(c, 0xf56fau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f56fc  call 0xe693c
    X86_AT(c, 0xf56fcu);
    push32(c, 0xf5701u); f_000e693c(c); X86_RET(c, 0xf5701u);
    X86_TICK(c, 11);
    // 0f5701  push 0x83d0
    X86_AT(c, 0xf5701u);
    { uint32_t v = 0x83D0u; push32(c, v); }
    // 0f5706  push 7
    X86_AT(c, 0xf5706u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5708  call 0xe5654
    X86_AT(c, 0xf5708u);
    push32(c, 0xf570du); f_000e5654(c); X86_RET(c, 0xf570du);
    X86_TICK(c, 9);
    // 0f570d  push 7
    X86_AT(c, 0xf570du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f570f  call 0xe6c68
    X86_AT(c, 0xf570fu);
    push32(c, 0xf5714u); f_000e6c68(c); X86_RET(c, 0xf5714u);
    X86_TICK(c, 11);
    // 0f5714  push 0x8400
    X86_AT(c, 0xf5714u);
    { uint32_t v = 0x8400u; push32(c, v); }
    // 0f5719  push 7
    X86_AT(c, 0xf5719u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f571b  call 0xe5654
    X86_AT(c, 0xf571bu);
    push32(c, 0xf5720u); f_000e5654(c); X86_RET(c, 0xf5720u);
    X86_TICK(c, 9);
    // 0f5720  push 7
    X86_AT(c, 0xf5720u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5722  call 0xe6c68
    X86_AT(c, 0xf5722u);
    push32(c, 0xf5727u); f_000e6c68(c); X86_RET(c, 0xf5727u);
    X86_TICK(c, 9);
    // 0f5727  push 3
    X86_AT(c, 0xf5727u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f5729  call 0xf5644
    X86_AT(c, 0xf5729u);
    push32(c, 0xf572eu); f_000f5644(c); X86_RET(c, 0xf572eu);
    X86_TICK(c, 16);
    // 0f572e  xchg edi, eax
    X86_AT(c, 0xf572eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f572f  push 4
    X86_AT(c, 0xf572fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f5731  push edi
    X86_AT(c, 0xf5731u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f5732  push 7
    X86_AT(c, 0xf5732u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5734  call 0xe5630
    X86_AT(c, 0xf5734u);
    push32(c, 0xf5739u); f_000e5630(c); X86_RET(c, 0xf5739u);
    X86_TICK(c, 11);
    // 0f5739  push 0x843c
    X86_AT(c, 0xf5739u);
    { uint32_t v = 0x843Cu; push32(c, v); }
    // 0f573e  push 7
    X86_AT(c, 0xf573eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5740  call 0xe5654
    X86_AT(c, 0xf5740u);
    push32(c, 0xf5745u); f_000e5654(c); X86_RET(c, 0xf5745u);
    X86_TICK(c, 9);
    // 0f5745  push 7
    X86_AT(c, 0xf5745u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5747  call 0xe2628
    X86_AT(c, 0xf5747u);
    push32(c, 0xf574cu); f_000e2628(c); X86_RET(c, 0xf574cu);
    X86_TICK(c, 12);
    // 0f574c  xchg ebx, eax
    X86_AT(c, 0xf574cu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f574d  add esp, 0x38
    X86_AT(c, 0xf574du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0f5750  cmp bl, 0x59
    X86_AT(c, 0xf5750u);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0f5753  je 0xf5770
    X86_AT(c, 0xf5753u);
    if (x86_cc(c, 4)) { goto L_f5770; }
    X86_TICK(c, 11);
    // 0f5755  push 0x848c
    X86_AT(c, 0xf5755u);
    { uint32_t v = 0x848Cu; push32(c, v); }
    // 0f575a  push 7
    X86_AT(c, 0xf575au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f575c  call 0xe5654
    X86_AT(c, 0xf575cu);
    push32(c, 0xf5761u); f_000e5654(c); X86_RET(c, 0xf5761u);
    X86_TICK(c, 9);
    // 0f5761  push 7
    X86_AT(c, 0xf5761u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5763  call 0xe6c68
    X86_AT(c, 0xf5763u);
    push32(c, 0xf5768u); f_000e6c68(c); X86_RET(c, 0xf5768u);
    X86_TICK(c, 9);
    // 0f5768  add esp, 0xc
    X86_AT(c, 0xf5768u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f576b  jmp 0xf5837
    X86_AT(c, 0xf576bu);
    goto L_f5837;
L_f5770:
    X86_TICK(c, 9);
    // 0f5770  push 7
    X86_AT(c, 0xf5770u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5772  call 0xe6c68
    X86_AT(c, 0xf5772u);
    push32(c, 0xf5777u); f_000e6c68(c); X86_RET(c, 0xf5777u);
    X86_TICK(c, 9);
    // 0f5777  push edi
    X86_AT(c, 0xf5777u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f5778  call 0xf50a4
    X86_AT(c, 0xf5778u);
    push32(c, 0xf577du); f_000f50a4(c); X86_RET(c, 0xf577du);
    X86_TICK(c, 9);
    // 0f577d  add esp, 8
    X86_AT(c, 0xf577du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f5780  inc eax
    X86_AT(c, 0xf5780u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f5781  jne 0xf57a5
    X86_AT(c, 0xf5781u);
    if (x86_cc(c, 5)) { goto L_f57a5; }
    X86_TICK(c, 9);
    // 0f5783  push 3
    X86_AT(c, 0xf5783u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f5785  call 0xe1944
    X86_AT(c, 0xf5785u);
    push32(c, 0xf578au); f_000e1944(c); X86_RET(c, 0xf578au);
    X86_TICK(c, 11);
    // 0f578a  push 0x84c8
    X86_AT(c, 0xf578au);
    { uint32_t v = 0x84C8u; push32(c, v); }
    // 0f578f  push 7
    X86_AT(c, 0xf578fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5791  call 0xe5654
    X86_AT(c, 0xf5791u);
    push32(c, 0xf5796u); f_000e5654(c); X86_RET(c, 0xf5796u);
    X86_TICK(c, 9);
    // 0f5796  push 7
    X86_AT(c, 0xf5796u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5798  call 0xe6c68
    X86_AT(c, 0xf5798u);
    push32(c, 0xf579du); f_000e6c68(c); X86_RET(c, 0xf579du);
    X86_TICK(c, 9);
    // 0f579d  add esp, 0x10
    X86_AT(c, 0xf579du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f57a0  jmp 0xf5837
    X86_AT(c, 0xf57a0u);
    goto L_f5837;
L_f57a5:
    X86_TICK(c, 32);
    // 0f57a5  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf57a5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f57aa  lea edx, [eax + eax*4]
    X86_AT(c, 0xf57aau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f57ad  lea edx, [eax + edx*2]
    X86_AT(c, 0xf57adu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f57b0  shl edx, 5
    X86_AT(c, 0xf57b0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f57b3  sub edx, eax
    X86_AT(c, 0xf57b3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f57b5  add dword ptr [edx + 0xcde8d], 0x2710
    X86_AT(c, 0xf57b5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x2710u, 0, 4)); }
    // 0f57bf  cmp dword ptr [edx + 0xcde8d], 0xf41dc
    X86_AT(c, 0xf57bfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du))), 0xF41DCu, 0, 4);
    // 0f57c9  jle 0xf5802
    X86_AT(c, 0xf57c9u);
    if (x86_cc(c, 14)) { goto L_f5802; }
    X86_TICK(c, 9);
    // 0f57cb  push 0
    X86_AT(c, 0xf57cbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f57cd  call 0xe1944
    X86_AT(c, 0xf57cdu);
    push32(c, 0xf57d2u); f_000e1944(c); X86_RET(c, 0xf57d2u);
    X86_TICK(c, 11);
    // 0f57d2  push 0x8544
    X86_AT(c, 0xf57d2u);
    { uint32_t v = 0x8544u; push32(c, v); }
    // 0f57d7  push 7
    X86_AT(c, 0xf57d7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f57d9  call 0xe5654
    X86_AT(c, 0xf57d9u);
    push32(c, 0xf57deu); f_000e5654(c); X86_RET(c, 0xf57deu);
    X86_TICK(c, 9);
    // 0f57de  push 7
    X86_AT(c, 0xf57deu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f57e0  call 0xe6c68
    X86_AT(c, 0xf57e0u);
    push32(c, 0xf57e5u); f_000e6c68(c); X86_RET(c, 0xf57e5u);
    X86_TICK(c, 17);
    // 0f57e5  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf57e5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f57ea  lea edx, [eax + eax*4]
    X86_AT(c, 0xf57eau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f57ed  lea edx, [eax + edx*2]
    X86_AT(c, 0xf57edu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f57f0  shl edx, 5
    X86_AT(c, 0xf57f0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f57f3  sub edx, eax
    X86_AT(c, 0xf57f3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f57f5  mov dword ptr [edx + 0xcde8d], 0xf41dc
    X86_AT(c, 0xf57f5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)), 0xF41DCu);
    // 0f57ff  add esp, 0x10
    X86_AT(c, 0xf57ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f5802:
    X86_TICK(c, 7);
    // 0f5802  call 0xe9010
    X86_AT(c, 0xf5802u);
    push32(c, 0xf5807u); f_000e9010(c); X86_RET(c, 0xf5807u);
    X86_TICK(c, 9);
    // 0f5807  push 7
    X86_AT(c, 0xf5807u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5809  call 0xe693c
    X86_AT(c, 0xf5809u);
    push32(c, 0xf580eu); f_000e693c(c); X86_RET(c, 0xf580eu);
    X86_TICK(c, 11);
    // 0f580e  push 0x8570
    X86_AT(c, 0xf580eu);
    { uint32_t v = 0x8570u; push32(c, v); }
    // 0f5813  push 7
    X86_AT(c, 0xf5813u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5815  call 0xe5654
    X86_AT(c, 0xf5815u);
    push32(c, 0xf581au); f_000e5654(c); X86_RET(c, 0xf581au);
    X86_TICK(c, 9);
    // 0f581a  push 7
    X86_AT(c, 0xf581au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f581c  call 0xe6c68
    X86_AT(c, 0xf581cu);
    push32(c, 0xf5821u); f_000e6c68(c); X86_RET(c, 0xf5821u);
    X86_TICK(c, 11);
    // 0f5821  push 0x858c
    X86_AT(c, 0xf5821u);
    { uint32_t v = 0x858Cu; push32(c, v); }
    // 0f5826  push 7
    X86_AT(c, 0xf5826u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5828  call 0xe5654
    X86_AT(c, 0xf5828u);
    push32(c, 0xf582du); f_000e5654(c); X86_RET(c, 0xf582du);
    X86_TICK(c, 9);
    // 0f582d  push 7
    X86_AT(c, 0xf582du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f582f  call 0xe6c68
    X86_AT(c, 0xf582fu);
    push32(c, 0xf5834u); f_000e6c68(c); X86_RET(c, 0xf5834u);
    X86_TICK(c, 2);
    // 0f5834  add esp, 0x1c
    X86_AT(c, 0xf5834u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_f5837:
    X86_TICK(c, 18);
    // 0f5837  pop edi
    X86_AT(c, 0xf5837u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f5838  pop ebx
    X86_AT(c, 0xf5838u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f5839  ret 
    X86_AT(c, 0xf5839u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf56f8u, "ran off the end of a function");
}
void f_000f5837(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0f5837  pop edi
    X86_AT(c, 0xf5837u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f5838  pop ebx
    X86_AT(c, 0xf5838u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f5839  ret 
    X86_AT(c, 0xf5839u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5837u, "ran off the end of a function");
}
void f_000f583c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0f583c  push ebp
    X86_AT(c, 0xf583cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f583d  mov ebp, esp
    X86_AT(c, 0xf583du);
    c.r[5] = c.r[4];
    // 0f583f  push eax
    X86_AT(c, 0xf583fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5840  push ebx
    X86_AT(c, 0xf5840u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f5841  push esi
    X86_AT(c, 0xf5841u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f5842  push edi
    X86_AT(c, 0xf5842u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f5843  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf5843u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f5847  push 7
    X86_AT(c, 0xf5847u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5849  call 0xe693c
    X86_AT(c, 0xf5849u);
    push32(c, 0xf584eu); f_000e693c(c); X86_RET(c, 0xf584eu);
    X86_TICK(c, 11);
    // 0f584e  push 0x85cc
    X86_AT(c, 0xf584eu);
    { uint32_t v = 0x85CCu; push32(c, v); }
    // 0f5853  push 7
    X86_AT(c, 0xf5853u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5855  call 0xe5654
    X86_AT(c, 0xf5855u);
    push32(c, 0xf585au); f_000e5654(c); X86_RET(c, 0xf585au);
    X86_TICK(c, 9);
    // 0f585a  push 7
    X86_AT(c, 0xf585au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f585c  call 0xe6c68
    X86_AT(c, 0xf585cu);
    push32(c, 0xf5861u); f_000e6c68(c); X86_RET(c, 0xf5861u);
    X86_TICK(c, 27);
    // 0f5861  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf5861u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f5866  lea edx, [eax + eax*4]
    X86_AT(c, 0xf5866u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5869  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5869u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f586c  shl edx, 5
    X86_AT(c, 0xf586cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f586f  sub edx, eax
    X86_AT(c, 0xf586fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f5871  add esp, 0x10
    X86_AT(c, 0xf5871u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f5874  cmp byte ptr [edx + 0xcde7b], 0x43
    X86_AT(c, 0xf5874u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu))), 0x43u, 0, 1);
    // 0f587b  je 0xf588e
    X86_AT(c, 0xf587bu);
    if (x86_cc(c, 4)) { goto L_f588e; }
    X86_TICK(c, 9);
    // 0f587d  push 1
    X86_AT(c, 0xf587du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f587f  call 0xe1944
    X86_AT(c, 0xf587fu);
    push32(c, 0xf5884u); f_000e1944(c); X86_RET(c, 0xf5884u);
    X86_TICK(c, 9);
    // 0f5884  push 0x8604
    X86_AT(c, 0xf5884u);
    { uint32_t v = 0x8604u; push32(c, v); }
    // 0f5889  jmp 0xf5a95
    X86_AT(c, 0xf5889u);
    goto L_f5a95;
L_f588e:
    X86_TICK(c, 25);
    // 0f588e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf588eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f5893  lea edx, [eax + eax*4]
    X86_AT(c, 0xf5893u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5896  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5896u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5899  shl edx, 5
    X86_AT(c, 0xf5899u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f589c  sub edx, eax
    X86_AT(c, 0xf589cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f589e  cmp byte ptr [edx + 0xcde7c], 0x4d
    X86_AT(c, 0xf589eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu))), 0x4Du, 0, 1);
    // 0f58a5  jne 0xf58ae
    X86_AT(c, 0xf58a5u);
    if (x86_cc(c, 5)) { goto L_f58ae; }
    X86_TICK(c, 9);
    // 0f58a7  push 0x8640
    X86_AT(c, 0xf58a7u);
    { uint32_t v = 0x8640u; push32(c, v); }
    // 0f58ac  jmp 0xf58b3
    X86_AT(c, 0xf58acu);
    goto L_f58b3;
L_f58ae:
    X86_TICK(c, 2);
    // 0f58ae  push 0x8664
    X86_AT(c, 0xf58aeu);
    { uint32_t v = 0x8664u; push32(c, v); }
L_f58b3:
    X86_TICK(c, 9);
    // 0f58b3  push 7
    X86_AT(c, 0xf58b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f58b5  call 0xe5654
    X86_AT(c, 0xf58b5u);
    push32(c, 0xf58bau); f_000e5654(c); X86_RET(c, 0xf58bau);
    X86_TICK(c, 28);
    // 0f58ba  add esp, 8
    X86_AT(c, 0xf58bau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f58bd  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf58bdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f58c2  lea edx, [eax + eax*4]
    X86_AT(c, 0xf58c2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f58c5  lea edx, [eax + edx*2]
    X86_AT(c, 0xf58c5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f58c8  shl edx, 5
    X86_AT(c, 0xf58c8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f58cb  sub edx, eax
    X86_AT(c, 0xf58cbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f58cd  add edx, 0xcde4d
    X86_AT(c, 0xf58cdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0f58d3  push edx
    X86_AT(c, 0xf58d3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f58d4  push 7
    X86_AT(c, 0xf58d4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f58d6  call 0xe70ec
    X86_AT(c, 0xf58d6u);
    push32(c, 0xf58dbu); f_000e70ec(c); X86_RET(c, 0xf58dbu);
    X86_TICK(c, 9);
    // 0f58db  push 7
    X86_AT(c, 0xf58dbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f58dd  call 0xe6c68
    X86_AT(c, 0xf58ddu);
    push32(c, 0xf58e2u); f_000e6c68(c); X86_RET(c, 0xf58e2u);
    X86_TICK(c, 9);
    // 0f58e2  push 7
    X86_AT(c, 0xf58e2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f58e4  call 0xefeb0
    X86_AT(c, 0xf58e4u);
    push32(c, 0xf58e9u); f_000efeb0(c); X86_RET(c, 0xf58e9u);
    X86_TICK(c, 11);
    // 0f58e9  push 0x8684
    X86_AT(c, 0xf58e9u);
    { uint32_t v = 0x8684u; push32(c, v); }
    // 0f58ee  push 7
    X86_AT(c, 0xf58eeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f58f0  call 0xe5654
    X86_AT(c, 0xf58f0u);
    push32(c, 0xf58f5u); f_000e5654(c); X86_RET(c, 0xf58f5u);
    X86_TICK(c, 9);
    // 0f58f5  push 7
    X86_AT(c, 0xf58f5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f58f7  call 0xe6c68
    X86_AT(c, 0xf58f7u);
    push32(c, 0xf58fcu); f_000e6c68(c); X86_RET(c, 0xf58fcu);
    X86_TICK(c, 11);
    // 0f58fc  push 0x86bc
    X86_AT(c, 0xf58fcu);
    { uint32_t v = 0x86BCu; push32(c, v); }
    // 0f5901  push 7
    X86_AT(c, 0xf5901u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5903  call 0xe5654
    X86_AT(c, 0xf5903u);
    push32(c, 0xf5908u); f_000e5654(c); X86_RET(c, 0xf5908u);
    X86_TICK(c, 9);
    // 0f5908  push 7
    X86_AT(c, 0xf5908u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f590a  call 0xe6c68
    X86_AT(c, 0xf590au);
    push32(c, 0xf590fu); f_000e6c68(c); X86_RET(c, 0xf590fu);
    X86_TICK(c, 11);
    // 0f590f  push 0x86f4
    X86_AT(c, 0xf590fu);
    { uint32_t v = 0x86F4u; push32(c, v); }
    // 0f5914  push 7
    X86_AT(c, 0xf5914u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5916  call 0xe5654
    X86_AT(c, 0xf5916u);
    push32(c, 0xf591bu); f_000e5654(c); X86_RET(c, 0xf591bu);
    X86_TICK(c, 9);
    // 0f591b  push 7
    X86_AT(c, 0xf591bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f591d  call 0xe6c68
    X86_AT(c, 0xf591du);
    push32(c, 0xf5922u); f_000e6c68(c); X86_RET(c, 0xf5922u);
    X86_TICK(c, 11);
    // 0f5922  push 0x872c
    X86_AT(c, 0xf5922u);
    { uint32_t v = 0x872Cu; push32(c, v); }
    // 0f5927  push 7
    X86_AT(c, 0xf5927u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5929  call 0xe5654
    X86_AT(c, 0xf5929u);
    push32(c, 0xf592eu); f_000e5654(c); X86_RET(c, 0xf592eu);
    X86_TICK(c, 11);
    // 0f592e  add esp, 0x3c
    X86_AT(c, 0xf592eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f5931  push 7
    X86_AT(c, 0xf5931u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5933  call 0xe6c68
    X86_AT(c, 0xf5933u);
    push32(c, 0xf5938u); f_000e6c68(c); X86_RET(c, 0xf5938u);
    X86_TICK(c, 11);
    // 0f5938  push 0x8744
    X86_AT(c, 0xf5938u);
    { uint32_t v = 0x8744u; push32(c, v); }
    // 0f593d  push 7
    X86_AT(c, 0xf593du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f593f  call 0xe5654
    X86_AT(c, 0xf593fu);
    push32(c, 0xf5944u); f_000e5654(c); X86_RET(c, 0xf5944u);
    X86_TICK(c, 2);
    // 0f5944  add esp, 0xc
    X86_AT(c, 0xf5944u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f5947:
    X86_TICK(c, 9);
    // 0f5947  push 7
    X86_AT(c, 0xf5947u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5949  call 0xe4748
    X86_AT(c, 0xf5949u);
    push32(c, 0xf594eu); f_000e4748(c); X86_RET(c, 0xf594eu);
    X86_TICK(c, 12);
    // 0f594e  xchg ebx, eax
    X86_AT(c, 0xf594eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f594f  add esp, 4
    X86_AT(c, 0xf594fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f5952  cmp bl, 1
    X86_AT(c, 0xf5952u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f5955  je 0xf5976
    X86_AT(c, 0xf5955u);
    if (x86_cc(c, 4)) { goto L_f5976; }
    X86_TICK(c, 7);
    // 0f5957  cmp bl, 0x51
    X86_AT(c, 0xf5957u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0f595a  je 0xf5976
    X86_AT(c, 0xf595au);
    if (x86_cc(c, 4)) { goto L_f5976; }
    X86_TICK(c, 7);
    // 0f595c  cmp bl, 0x41
    X86_AT(c, 0xf595cu);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0f595f  jb 0xf5966
    X86_AT(c, 0xf595fu);
    if (x86_cc(c, 2)) { goto L_f5966; }
    X86_TICK(c, 7);
    // 0f5961  cmp bl, 0x46
    X86_AT(c, 0xf5961u);
    (void)x86_sub(c, g8(c, 3), 0x46u, 0, 1);
    // 0f5964  jbe 0xf5976
    X86_AT(c, 0xf5964u);
    if (x86_cc(c, 6)) { goto L_f5976; }
L_f5966:
    X86_TICK(c, 7);
    // 0f5966  and bl, bl
    X86_AT(c, 0xf5966u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0f5968  je 0xf5947
    X86_AT(c, 0xf5968u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf5947u); goto L_f5947; }
    X86_TICK(c, 9);
    // 0f596a  push 1
    X86_AT(c, 0xf596au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f596c  call 0xe1944
    X86_AT(c, 0xf596cu);
    push32(c, 0xf5971u); f_000e1944(c); X86_RET(c, 0xf5971u);
    X86_TICK(c, 9);
    // 0f5971  add esp, 4
    X86_AT(c, 0xf5971u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f5974  jmp 0xf5947
    X86_AT(c, 0xf5974u);
    X86_POLL(c, 0xf5947u); goto L_f5947;
L_f5976:
    X86_TICK(c, 7);
    // 0f5976  cmp bl, 1
    X86_AT(c, 0xf5976u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f5979  je 0xf5980
    X86_AT(c, 0xf5979u);
    if (x86_cc(c, 4)) { goto L_f5980; }
    X86_TICK(c, 7);
    // 0f597b  cmp bl, 0x51
    X86_AT(c, 0xf597bu);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0f597e  jne 0xf59ae
    X86_AT(c, 0xf597eu);
    if (x86_cc(c, 5)) { goto L_f59ae; }
L_f5980:
    X86_TICK(c, 11);
    // 0f5980  push 0x876c
    X86_AT(c, 0xf5980u);
    { uint32_t v = 0x876Cu; push32(c, v); }
    // 0f5985  push 7
    X86_AT(c, 0xf5985u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5987  call 0xe5654
    X86_AT(c, 0xf5987u);
    push32(c, 0xf598cu); f_000e5654(c); X86_RET(c, 0xf598cu);
    X86_TICK(c, 9);
    // 0f598c  push 7
    X86_AT(c, 0xf598cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f598e  call 0xe6c68
    X86_AT(c, 0xf598eu);
    push32(c, 0xf5993u); f_000e6c68(c); X86_RET(c, 0xf5993u);
    X86_TICK(c, 11);
    // 0f5993  push 0x8788
    X86_AT(c, 0xf5993u);
    { uint32_t v = 0x8788u; push32(c, v); }
    // 0f5998  push 7
    X86_AT(c, 0xf5998u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f599a  call 0xe5654
    X86_AT(c, 0xf599au);
    push32(c, 0xf599fu); f_000e5654(c); X86_RET(c, 0xf599fu);
    X86_TICK(c, 9);
    // 0f599f  push 7
    X86_AT(c, 0xf599fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f59a1  call 0xe6c68
    X86_AT(c, 0xf59a1u);
    push32(c, 0xf59a6u); f_000e6c68(c); X86_RET(c, 0xf59a6u);
    X86_TICK(c, 9);
    // 0f59a6  add esp, 0x18
    X86_AT(c, 0xf59a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f59a9  jmp 0xf5abe
    X86_AT(c, 0xf59a9u);
    goto L_f5abe;
L_f59ae:
    X86_TICK(c, 19);
    // 0f59ae  lea eax, [ebp - 1]
    X86_AT(c, 0xf59aeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f59b1  push eax
    X86_AT(c, 0xf59b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f59b2  lea eax, [ebx + 1]
    X86_AT(c, 0xf59b2u);
    c.r[0] = (uint32_t)(c.r[3] + 0x1u);
    // 0f59b5  push eax
    X86_AT(c, 0xf59b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f59b6  push 0xa
    X86_AT(c, 0xf59b6u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f59b8  push 0xd0e78
    X86_AT(c, 0xf59b8u);
    { uint32_t v = 0xD0E78u; push32(c, v); }
    // 0f59bd  call 0xe53e0
    X86_AT(c, 0xf59bdu);
    push32(c, 0xf59c2u); f_000e53e0(c); X86_RET(c, 0xf59c2u);
    X86_TICK(c, 11);
    // 0f59c2  push eax
    X86_AT(c, 0xf59c2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f59c3  push 7
    X86_AT(c, 0xf59c3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f59c5  call 0xe6cb0
    X86_AT(c, 0xf59c5u);
    push32(c, 0xf59cau); f_000e6cb0(c); X86_RET(c, 0xf59cau);
    X86_TICK(c, 9);
    // 0f59ca  push 7
    X86_AT(c, 0xf59cau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f59cc  call 0xe6c68
    X86_AT(c, 0xf59ccu);
    push32(c, 0xf59d1u); f_000e6c68(c); X86_RET(c, 0xf59d1u);
    X86_TICK(c, 11);
    // 0f59d1  push 0x87d4
    X86_AT(c, 0xf59d1u);
    { uint32_t v = 0x87D4u; push32(c, v); }
    // 0f59d6  push 7
    X86_AT(c, 0xf59d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f59d8  call 0xe5654
    X86_AT(c, 0xf59d8u);
    push32(c, 0xf59ddu); f_000e5654(c); X86_RET(c, 0xf59ddu);
    X86_TICK(c, 14);
    // 0f59dd  movzx ebx, bl
    X86_AT(c, 0xf59ddu);
    c.r[3] = g8(c, 3);
    // 0f59e0  lea eax, [ebx - 0x40]
    X86_AT(c, 0xf59e0u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFC0u);
    // 0f59e3  push eax
    X86_AT(c, 0xf59e3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f59e4  call 0xf5644
    X86_AT(c, 0xf59e4u);
    push32(c, 0xf59e9u); f_000f5644(c); X86_RET(c, 0xf59e9u);
    X86_TICK(c, 16);
    // 0f59e9  xchg edi, eax
    X86_AT(c, 0xf59e9u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f59ea  push 4
    X86_AT(c, 0xf59eau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f59ec  push edi
    X86_AT(c, 0xf59ecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f59ed  push 7
    X86_AT(c, 0xf59edu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f59ef  call 0xe5630
    X86_AT(c, 0xf59efu);
    push32(c, 0xf59f4u); f_000e5630(c); X86_RET(c, 0xf59f4u);
    X86_TICK(c, 11);
    // 0f59f4  push 0x87ec
    X86_AT(c, 0xf59f4u);
    { uint32_t v = 0x87ECu; push32(c, v); }
    // 0f59f9  push 7
    X86_AT(c, 0xf59f9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f59fb  call 0xe5654
    X86_AT(c, 0xf59fbu);
    push32(c, 0xf5a00u); f_000e5654(c); X86_RET(c, 0xf5a00u);
    X86_TICK(c, 11);
    // 0f5a00  add esp, 0x3c
    X86_AT(c, 0xf5a00u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f5a03  push 7
    X86_AT(c, 0xf5a03u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5a05  call 0xe2628
    X86_AT(c, 0xf5a05u);
    push32(c, 0xf5a0au); f_000e2628(c); X86_RET(c, 0xf5a0au);
    X86_TICK(c, 11);
    // 0f5a0a  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xf5a0au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0f5a0d  add esp, 4
    X86_AT(c, 0xf5a0du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f5a10  cmp al, 0x59
    X86_AT(c, 0xf5a10u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0f5a12  je 0xf5a1e
    X86_AT(c, 0xf5a12u);
    if (x86_cc(c, 4)) { goto L_f5a1e; }
    X86_TICK(c, 9);
    // 0f5a14  push 0x8828
    X86_AT(c, 0xf5a14u);
    { uint32_t v = 0x8828u; push32(c, v); }
    // 0f5a19  jmp 0xf5aad
    X86_AT(c, 0xf5a19u);
    goto L_f5aad;
L_f5a1e:
    X86_TICK(c, 9);
    // 0f5a1e  push 7
    X86_AT(c, 0xf5a1eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5a20  call 0xe6c68
    X86_AT(c, 0xf5a20u);
    push32(c, 0xf5a25u); f_000e6c68(c); X86_RET(c, 0xf5a25u);
    X86_TICK(c, 9);
    // 0f5a25  push edi
    X86_AT(c, 0xf5a25u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f5a26  call 0xf50a4
    X86_AT(c, 0xf5a26u);
    push32(c, 0xf5a2bu); f_000f50a4(c); X86_RET(c, 0xf5a2bu);
    X86_TICK(c, 9);
    // 0f5a2b  add esp, 8
    X86_AT(c, 0xf5a2bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f5a2e  inc eax
    X86_AT(c, 0xf5a2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f5a2f  jne 0xf5a3f
    X86_AT(c, 0xf5a2fu);
    if (x86_cc(c, 5)) { goto L_f5a3f; }
    X86_TICK(c, 9);
    // 0f5a31  push 3
    X86_AT(c, 0xf5a31u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f5a33  call 0xe1944
    X86_AT(c, 0xf5a33u);
    push32(c, 0xf5a38u); f_000e1944(c); X86_RET(c, 0xf5a38u);
    X86_TICK(c, 9);
    // 0f5a38  push 0x8870
    X86_AT(c, 0xf5a38u);
    { uint32_t v = 0x8870u; push32(c, v); }
    // 0f5a3d  jmp 0xf5a95
    X86_AT(c, 0xf5a3du);
    goto L_f5a95;
L_f5a3f:
    X86_TICK(c, 34);
    // 0f5a3f  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf5a3fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f5a44  lea edx, [eax + eax*4]
    X86_AT(c, 0xf5a44u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5a47  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5a47u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5a4a  shl edx, 5
    X86_AT(c, 0xf5a4au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f5a4d  sub edx, eax
    X86_AT(c, 0xf5a4du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f5a4f  movzx ebx, bl
    X86_AT(c, 0xf5a4fu);
    c.r[3] = g8(c, 3);
    // 0f5a52  lea eax, [ebx - 0x40]
    X86_AT(c, 0xf5a52u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFC0u);
    // 0f5a55  add dword ptr [edx + eax*4 + 0xcdf27], 5
    X86_AT(c, 0xf5a55u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xCDF27u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x5u, 0, 4)); }
    // 0f5a5d  mov esi, eax
    X86_AT(c, 0xf5a5du);
    c.r[6] = c.r[0];
    // 0f5a5f  call 0xe9010
    X86_AT(c, 0xf5a5fu);
    push32(c, 0xf5a64u); f_000e9010(c); X86_RET(c, 0xf5a64u);
    X86_TICK(c, 25);
    // 0f5a64  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf5a64u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f5a69  lea edx, [eax + eax*4]
    X86_AT(c, 0xf5a69u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5a6c  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5a6cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5a6f  shl edx, 5
    X86_AT(c, 0xf5a6fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f5a72  sub edx, eax
    X86_AT(c, 0xf5a72u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f5a74  cmp dword ptr [edx + esi*4 + 0xcdf27], 0x63
    X86_AT(c, 0xf5a74u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xCDF27u))), 0x63u, 0, 4);
    // 0f5a7c  jle 0xf5aa8
    X86_AT(c, 0xf5a7cu);
    if (x86_cc(c, 14)) { goto L_f5aa8; }
    X86_TICK(c, 11);
    // 0f5a7e  mov dword ptr [edx + esi*4 + 0xcdf27], 0x63
    X86_AT(c, 0xf5a7eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xCDF27u)), 0x63u);
    // 0f5a89  push 0
    X86_AT(c, 0xf5a89u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f5a8b  call 0xe1944
    X86_AT(c, 0xf5a8bu);
    push32(c, 0xf5a90u); f_000e1944(c); X86_RET(c, 0xf5a90u);
    X86_TICK(c, 2);
    // 0f5a90  push 0x88ec
    X86_AT(c, 0xf5a90u);
    { uint32_t v = 0x88ECu; push32(c, v); }
L_f5a95:
    X86_TICK(c, 9);
    // 0f5a95  push 7
    X86_AT(c, 0xf5a95u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5a97  call 0xe5654
    X86_AT(c, 0xf5a97u);
    push32(c, 0xf5a9cu); f_000e5654(c); X86_RET(c, 0xf5a9cu);
    X86_TICK(c, 9);
    // 0f5a9c  push 7
    X86_AT(c, 0xf5a9cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5a9e  call 0xe6c68
    X86_AT(c, 0xf5a9eu);
    push32(c, 0xf5aa3u); f_000e6c68(c); X86_RET(c, 0xf5aa3u);
    X86_TICK(c, 9);
    // 0f5aa3  add esp, 0x10
    X86_AT(c, 0xf5aa3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f5aa6  jmp 0xf5abe
    X86_AT(c, 0xf5aa6u);
    goto L_f5abe;
L_f5aa8:
    X86_TICK(c, 2);
    // 0f5aa8  push 0x8918
    X86_AT(c, 0xf5aa8u);
    { uint32_t v = 0x8918u; push32(c, v); }
L_f5aad:
    X86_TICK(c, 9);
    // 0f5aad  push 7
    X86_AT(c, 0xf5aadu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5aaf  call 0xe5654
    X86_AT(c, 0xf5aafu);
    push32(c, 0xf5ab4u); f_000e5654(c); X86_RET(c, 0xf5ab4u);
    X86_TICK(c, 9);
    // 0f5ab4  push 7
    X86_AT(c, 0xf5ab4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5ab6  call 0xe6c68
    X86_AT(c, 0xf5ab6u);
    push32(c, 0xf5abbu); f_000e6c68(c); X86_RET(c, 0xf5abbu);
    X86_TICK(c, 2);
    // 0f5abb  add esp, 0xc
    X86_AT(c, 0xf5abbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f5abe:
    X86_TICK(c, 28);
    // 0f5abe  pop edi
    X86_AT(c, 0xf5abeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f5abf  pop esi
    X86_AT(c, 0xf5abfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f5ac0  pop ebx
    X86_AT(c, 0xf5ac0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f5ac1  leave 
    X86_AT(c, 0xf5ac1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f5ac2  ret 
    X86_AT(c, 0xf5ac2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf583cu, "ran off the end of a function");
}
void f_000f5ac4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0f5ac4  push ebp
    X86_AT(c, 0xf5ac4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f5ac5  mov ebp, esp
    X86_AT(c, 0xf5ac5u);
    c.r[5] = c.r[4];
    // 0f5ac7  push eax
    X86_AT(c, 0xf5ac7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5ac8  push ebx
    X86_AT(c, 0xf5ac8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f5ac9  push esi
    X86_AT(c, 0xf5ac9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f5aca  push edi
    X86_AT(c, 0xf5acau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f5acb  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf5acbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f5acf  push 7
    X86_AT(c, 0xf5acfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5ad1  call 0xe693c
    X86_AT(c, 0xf5ad1u);
    push32(c, 0xf5ad6u); f_000e693c(c); X86_RET(c, 0xf5ad6u);
    X86_TICK(c, 11);
    // 0f5ad6  push 0x8970
    X86_AT(c, 0xf5ad6u);
    { uint32_t v = 0x8970u; push32(c, v); }
    // 0f5adb  push 7
    X86_AT(c, 0xf5adbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5add  call 0xe5654
    X86_AT(c, 0xf5addu);
    push32(c, 0xf5ae2u); f_000e5654(c); X86_RET(c, 0xf5ae2u);
    X86_TICK(c, 9);
    // 0f5ae2  push 7
    X86_AT(c, 0xf5ae2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5ae4  call 0xe6c68
    X86_AT(c, 0xf5ae4u);
    push32(c, 0xf5ae9u); f_000e6c68(c); X86_RET(c, 0xf5ae9u);
    X86_TICK(c, 27);
    // 0f5ae9  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf5ae9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f5aee  lea edx, [eax + eax*4]
    X86_AT(c, 0xf5aeeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5af1  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5af1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5af4  shl edx, 5
    X86_AT(c, 0xf5af4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f5af7  sub edx, eax
    X86_AT(c, 0xf5af7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f5af9  add esp, 0x10
    X86_AT(c, 0xf5af9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f5afc  cmp byte ptr [edx + 0xcde7b], 0x57
    X86_AT(c, 0xf5afcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu))), 0x57u, 0, 1);
    // 0f5b03  je 0xf5b16
    X86_AT(c, 0xf5b03u);
    if (x86_cc(c, 4)) { goto L_f5b16; }
    X86_TICK(c, 9);
    // 0f5b05  push 1
    X86_AT(c, 0xf5b05u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f5b07  call 0xe1944
    X86_AT(c, 0xf5b07u);
    push32(c, 0xf5b0cu); f_000e1944(c); X86_RET(c, 0xf5b0cu);
    X86_TICK(c, 9);
    // 0f5b0c  push 0x89a8
    X86_AT(c, 0xf5b0cu);
    { uint32_t v = 0x89A8u; push32(c, v); }
    // 0f5b11  jmp 0xf5cf1
    X86_AT(c, 0xf5b11u);
    goto L_f5cf1;
L_f5b16:
    X86_TICK(c, 11);
    // 0f5b16  push 0x89e4
    X86_AT(c, 0xf5b16u);
    { uint32_t v = 0x89E4u; push32(c, v); }
    // 0f5b1b  push 7
    X86_AT(c, 0xf5b1bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5b1d  call 0xe5654
    X86_AT(c, 0xf5b1du);
    push32(c, 0xf5b22u); f_000e5654(c); X86_RET(c, 0xf5b22u);
    X86_TICK(c, 9);
    // 0f5b22  push 7
    X86_AT(c, 0xf5b22u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5b24  call 0xe6c68
    X86_AT(c, 0xf5b24u);
    push32(c, 0xf5b29u); f_000e6c68(c); X86_RET(c, 0xf5b29u);
    X86_TICK(c, 9);
    // 0f5b29  push 7
    X86_AT(c, 0xf5b29u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5b2b  call 0xefeb0
    X86_AT(c, 0xf5b2bu);
    push32(c, 0xf5b30u); f_000efeb0(c); X86_RET(c, 0xf5b30u);
    X86_TICK(c, 11);
    // 0f5b30  push 0x8a18
    X86_AT(c, 0xf5b30u);
    { uint32_t v = 0x8A18u; push32(c, v); }
    // 0f5b35  push 7
    X86_AT(c, 0xf5b35u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5b37  call 0xe5654
    X86_AT(c, 0xf5b37u);
    push32(c, 0xf5b3cu); f_000e5654(c); X86_RET(c, 0xf5b3cu);
    X86_TICK(c, 9);
    // 0f5b3c  push 7
    X86_AT(c, 0xf5b3cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5b3e  call 0xe6c68
    X86_AT(c, 0xf5b3eu);
    push32(c, 0xf5b43u); f_000e6c68(c); X86_RET(c, 0xf5b43u);
    X86_TICK(c, 11);
    // 0f5b43  push 0x8a50
    X86_AT(c, 0xf5b43u);
    { uint32_t v = 0x8A50u; push32(c, v); }
    // 0f5b48  push 7
    X86_AT(c, 0xf5b48u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5b4a  call 0xe5654
    X86_AT(c, 0xf5b4au);
    push32(c, 0xf5b4fu); f_000e5654(c); X86_RET(c, 0xf5b4fu);
    X86_TICK(c, 9);
    // 0f5b4f  push 7
    X86_AT(c, 0xf5b4fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5b51  call 0xe6c68
    X86_AT(c, 0xf5b51u);
    push32(c, 0xf5b56u); f_000e6c68(c); X86_RET(c, 0xf5b56u);
    X86_TICK(c, 11);
    // 0f5b56  push 0x8a8c
    X86_AT(c, 0xf5b56u);
    { uint32_t v = 0x8A8Cu; push32(c, v); }
    // 0f5b5b  push 7
    X86_AT(c, 0xf5b5bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5b5d  call 0xe5654
    X86_AT(c, 0xf5b5du);
    push32(c, 0xf5b62u); f_000e5654(c); X86_RET(c, 0xf5b62u);
    X86_TICK(c, 9);
    // 0f5b62  push 7
    X86_AT(c, 0xf5b62u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5b64  call 0xe6c68
    X86_AT(c, 0xf5b64u);
    push32(c, 0xf5b69u); f_000e6c68(c); X86_RET(c, 0xf5b69u);
    X86_TICK(c, 11);
    // 0f5b69  push 0x8ac4
    X86_AT(c, 0xf5b69u);
    { uint32_t v = 0x8AC4u; push32(c, v); }
    // 0f5b6e  push 7
    X86_AT(c, 0xf5b6eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5b70  call 0xe5654
    X86_AT(c, 0xf5b70u);
    push32(c, 0xf5b75u); f_000e5654(c); X86_RET(c, 0xf5b75u);
    X86_TICK(c, 11);
    // 0f5b75  add esp, 0x3c
    X86_AT(c, 0xf5b75u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f5b78  push 7
    X86_AT(c, 0xf5b78u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5b7a  call 0xe6c68
    X86_AT(c, 0xf5b7au);
    push32(c, 0xf5b7fu); f_000e6c68(c); X86_RET(c, 0xf5b7fu);
    X86_TICK(c, 11);
    // 0f5b7f  push 0x8adc
    X86_AT(c, 0xf5b7fu);
    { uint32_t v = 0x8ADCu; push32(c, v); }
    // 0f5b84  push 7
    X86_AT(c, 0xf5b84u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5b86  call 0xe5654
    X86_AT(c, 0xf5b86u);
    push32(c, 0xf5b8bu); f_000e5654(c); X86_RET(c, 0xf5b8bu);
    X86_TICK(c, 2);
    // 0f5b8b  add esp, 0xc
    X86_AT(c, 0xf5b8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f5b8e:
    X86_TICK(c, 9);
    // 0f5b8e  push 7
    X86_AT(c, 0xf5b8eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5b90  call 0xe4748
    X86_AT(c, 0xf5b90u);
    push32(c, 0xf5b95u); f_000e4748(c); X86_RET(c, 0xf5b95u);
    X86_TICK(c, 12);
    // 0f5b95  xchg ebx, eax
    X86_AT(c, 0xf5b95u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f5b96  add esp, 4
    X86_AT(c, 0xf5b96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f5b99  cmp bl, 1
    X86_AT(c, 0xf5b99u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f5b9c  je 0xf5bbd
    X86_AT(c, 0xf5b9cu);
    if (x86_cc(c, 4)) { goto L_f5bbd; }
    X86_TICK(c, 7);
    // 0f5b9e  cmp bl, 0x51
    X86_AT(c, 0xf5b9eu);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0f5ba1  je 0xf5bbd
    X86_AT(c, 0xf5ba1u);
    if (x86_cc(c, 4)) { goto L_f5bbd; }
    X86_TICK(c, 7);
    // 0f5ba3  cmp bl, 0x41
    X86_AT(c, 0xf5ba3u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0f5ba6  jb 0xf5bad
    X86_AT(c, 0xf5ba6u);
    if (x86_cc(c, 2)) { goto L_f5bad; }
    X86_TICK(c, 7);
    // 0f5ba8  cmp bl, 0x46
    X86_AT(c, 0xf5ba8u);
    (void)x86_sub(c, g8(c, 3), 0x46u, 0, 1);
    // 0f5bab  jbe 0xf5bbd
    X86_AT(c, 0xf5babu);
    if (x86_cc(c, 6)) { goto L_f5bbd; }
L_f5bad:
    X86_TICK(c, 7);
    // 0f5bad  and bl, bl
    X86_AT(c, 0xf5badu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0f5baf  je 0xf5b8e
    X86_AT(c, 0xf5bafu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf5b8eu); goto L_f5b8e; }
    X86_TICK(c, 9);
    // 0f5bb1  push 1
    X86_AT(c, 0xf5bb1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f5bb3  call 0xe1944
    X86_AT(c, 0xf5bb3u);
    push32(c, 0xf5bb8u); f_000e1944(c); X86_RET(c, 0xf5bb8u);
    X86_TICK(c, 9);
    // 0f5bb8  add esp, 4
    X86_AT(c, 0xf5bb8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f5bbb  jmp 0xf5b8e
    X86_AT(c, 0xf5bbbu);
    X86_POLL(c, 0xf5b8eu); goto L_f5b8e;
L_f5bbd:
    X86_TICK(c, 7);
    // 0f5bbd  cmp bl, 1
    X86_AT(c, 0xf5bbdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f5bc0  je 0xf5bc7
    X86_AT(c, 0xf5bc0u);
    if (x86_cc(c, 4)) { goto L_f5bc7; }
    X86_TICK(c, 7);
    // 0f5bc2  cmp bl, 0x51
    X86_AT(c, 0xf5bc2u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0f5bc5  jne 0xf5bf5
    X86_AT(c, 0xf5bc5u);
    if (x86_cc(c, 5)) { goto L_f5bf5; }
L_f5bc7:
    X86_TICK(c, 11);
    // 0f5bc7  push 0x8b0c
    X86_AT(c, 0xf5bc7u);
    { uint32_t v = 0x8B0Cu; push32(c, v); }
    // 0f5bcc  push 7
    X86_AT(c, 0xf5bccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5bce  call 0xe5654
    X86_AT(c, 0xf5bceu);
    push32(c, 0xf5bd3u); f_000e5654(c); X86_RET(c, 0xf5bd3u);
    X86_TICK(c, 9);
    // 0f5bd3  push 7
    X86_AT(c, 0xf5bd3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5bd5  call 0xe6c68
    X86_AT(c, 0xf5bd5u);
    push32(c, 0xf5bdau); f_000e6c68(c); X86_RET(c, 0xf5bdau);
    X86_TICK(c, 11);
    // 0f5bda  push 0x8b28
    X86_AT(c, 0xf5bdau);
    { uint32_t v = 0x8B28u; push32(c, v); }
    // 0f5bdf  push 7
    X86_AT(c, 0xf5bdfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5be1  call 0xe5654
    X86_AT(c, 0xf5be1u);
    push32(c, 0xf5be6u); f_000e5654(c); X86_RET(c, 0xf5be6u);
    X86_TICK(c, 9);
    // 0f5be6  push 7
    X86_AT(c, 0xf5be6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5be8  call 0xe6c68
    X86_AT(c, 0xf5be8u);
    push32(c, 0xf5bedu); f_000e6c68(c); X86_RET(c, 0xf5bedu);
    X86_TICK(c, 9);
    // 0f5bed  add esp, 0x18
    X86_AT(c, 0xf5bedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f5bf0  jmp 0xf5d1a
    X86_AT(c, 0xf5bf0u);
    goto L_f5d1a;
L_f5bf5:
    X86_TICK(c, 14);
    // 0f5bf5  movzx ebx, bl
    X86_AT(c, 0xf5bf5u);
    c.r[3] = g8(c, 3);
    // 0f5bf8  lea eax, [ebx - 0x40]
    X86_AT(c, 0xf5bf8u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFC0u);
    // 0f5bfb  push eax
    X86_AT(c, 0xf5bfbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5bfc  call 0xf5644
    X86_AT(c, 0xf5bfcu);
    push32(c, 0xf5c01u); f_000f5644(c); X86_RET(c, 0xf5c01u);
    X86_TICK(c, 12);
    // 0f5c01  xchg edi, eax
    X86_AT(c, 0xf5c01u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f5c02  add esp, 4
    X86_AT(c, 0xf5c02u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f5c05  cmp bl, 0x44
    X86_AT(c, 0xf5c05u);
    (void)x86_sub(c, g8(c, 3), 0x44u, 0, 1);
    // 0f5c08  jne 0xf5c0c
    X86_AT(c, 0xf5c08u);
    if (x86_cc(c, 5)) { goto L_f5c0c; }
    X86_TICK(c, 2);
    // 0f5c0a  mov bl, 0x47
    X86_AT(c, 0xf5c0au);
    s8(c, 3, 0x47u);
L_f5c0c:
    X86_TICK(c, 7);
    // 0f5c0c  cmp bl, 0x45
    X86_AT(c, 0xf5c0cu);
    (void)x86_sub(c, g8(c, 3), 0x45u, 0, 1);
    // 0f5c0f  jne 0xf5c13
    X86_AT(c, 0xf5c0fu);
    if (x86_cc(c, 5)) { goto L_f5c13; }
    X86_TICK(c, 2);
    // 0f5c11  mov bl, 0x48
    X86_AT(c, 0xf5c11u);
    s8(c, 3, 0x48u);
L_f5c13:
    X86_TICK(c, 7);
    // 0f5c13  cmp bl, 0x46
    X86_AT(c, 0xf5c13u);
    (void)x86_sub(c, g8(c, 3), 0x46u, 0, 1);
    // 0f5c16  jne 0xf5c1a
    X86_AT(c, 0xf5c16u);
    if (x86_cc(c, 5)) { goto L_f5c1a; }
    X86_TICK(c, 2);
    // 0f5c18  mov bl, 0x49
    X86_AT(c, 0xf5c18u);
    s8(c, 3, 0x49u);
L_f5c1a:
    X86_TICK(c, 19);
    // 0f5c1a  lea eax, [ebp - 1]
    X86_AT(c, 0xf5c1au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f5c1d  push eax
    X86_AT(c, 0xf5c1du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5c1e  lea eax, [ebx + 1]
    X86_AT(c, 0xf5c1eu);
    c.r[0] = (uint32_t)(c.r[3] + 0x1u);
    // 0f5c21  push eax
    X86_AT(c, 0xf5c21u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5c22  push 0xa
    X86_AT(c, 0xf5c22u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f5c24  push 0xd0e78
    X86_AT(c, 0xf5c24u);
    { uint32_t v = 0xD0E78u; push32(c, v); }
    // 0f5c29  call 0xe53e0
    X86_AT(c, 0xf5c29u);
    push32(c, 0xf5c2eu); f_000e53e0(c); X86_RET(c, 0xf5c2eu);
    X86_TICK(c, 11);
    // 0f5c2e  push eax
    X86_AT(c, 0xf5c2eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5c2f  push 7
    X86_AT(c, 0xf5c2fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5c31  call 0xe6cb0
    X86_AT(c, 0xf5c31u);
    push32(c, 0xf5c36u); f_000e6cb0(c); X86_RET(c, 0xf5c36u);
    X86_TICK(c, 9);
    // 0f5c36  push 7
    X86_AT(c, 0xf5c36u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5c38  call 0xe6c68
    X86_AT(c, 0xf5c38u);
    push32(c, 0xf5c3du); f_000e6c68(c); X86_RET(c, 0xf5c3du);
    X86_TICK(c, 11);
    // 0f5c3d  push 0x8b54
    X86_AT(c, 0xf5c3du);
    { uint32_t v = 0x8B54u; push32(c, v); }
    // 0f5c42  push 7
    X86_AT(c, 0xf5c42u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5c44  call 0xe5654
    X86_AT(c, 0xf5c44u);
    push32(c, 0xf5c49u); f_000e5654(c); X86_RET(c, 0xf5c49u);
    X86_TICK(c, 13);
    // 0f5c49  push 4
    X86_AT(c, 0xf5c49u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f5c4b  push edi
    X86_AT(c, 0xf5c4bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f5c4c  push 7
    X86_AT(c, 0xf5c4cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5c4e  call 0xe5630
    X86_AT(c, 0xf5c4eu);
    push32(c, 0xf5c53u); f_000e5630(c); X86_RET(c, 0xf5c53u);
    X86_TICK(c, 11);
    // 0f5c53  push 0x8b6c
    X86_AT(c, 0xf5c53u);
    { uint32_t v = 0x8B6Cu; push32(c, v); }
    // 0f5c58  push 7
    X86_AT(c, 0xf5c58u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5c5a  call 0xe5654
    X86_AT(c, 0xf5c5au);
    push32(c, 0xf5c5fu); f_000e5654(c); X86_RET(c, 0xf5c5fu);
    X86_TICK(c, 9);
    // 0f5c5f  push 7
    X86_AT(c, 0xf5c5fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5c61  call 0xe2628
    X86_AT(c, 0xf5c61u);
    push32(c, 0xf5c66u); f_000e2628(c); X86_RET(c, 0xf5c66u);
    X86_TICK(c, 11);
    // 0f5c66  add esp, 0x3c
    X86_AT(c, 0xf5c66u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f5c69  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xf5c69u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0f5c6c  cmp al, 0x59
    X86_AT(c, 0xf5c6cu);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0f5c6e  je 0xf5c7a
    X86_AT(c, 0xf5c6eu);
    if (x86_cc(c, 4)) { goto L_f5c7a; }
    X86_TICK(c, 9);
    // 0f5c70  push 0x8bac
    X86_AT(c, 0xf5c70u);
    { uint32_t v = 0x8BACu; push32(c, v); }
    // 0f5c75  jmp 0xf5d09
    X86_AT(c, 0xf5c75u);
    goto L_f5d09;
L_f5c7a:
    X86_TICK(c, 9);
    // 0f5c7a  push 7
    X86_AT(c, 0xf5c7au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5c7c  call 0xe6c68
    X86_AT(c, 0xf5c7cu);
    push32(c, 0xf5c81u); f_000e6c68(c); X86_RET(c, 0xf5c81u);
    X86_TICK(c, 9);
    // 0f5c81  push edi
    X86_AT(c, 0xf5c81u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f5c82  call 0xf50a4
    X86_AT(c, 0xf5c82u);
    push32(c, 0xf5c87u); f_000f50a4(c); X86_RET(c, 0xf5c87u);
    X86_TICK(c, 9);
    // 0f5c87  add esp, 8
    X86_AT(c, 0xf5c87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f5c8a  inc eax
    X86_AT(c, 0xf5c8au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f5c8b  jne 0xf5c9b
    X86_AT(c, 0xf5c8bu);
    if (x86_cc(c, 5)) { goto L_f5c9b; }
    X86_TICK(c, 9);
    // 0f5c8d  push 3
    X86_AT(c, 0xf5c8du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f5c8f  call 0xe1944
    X86_AT(c, 0xf5c8fu);
    push32(c, 0xf5c94u); f_000e1944(c); X86_RET(c, 0xf5c94u);
    X86_TICK(c, 9);
    // 0f5c94  push 0x8bd4
    X86_AT(c, 0xf5c94u);
    { uint32_t v = 0x8BD4u; push32(c, v); }
    // 0f5c99  jmp 0xf5cf1
    X86_AT(c, 0xf5c99u);
    goto L_f5cf1;
L_f5c9b:
    X86_TICK(c, 34);
    // 0f5c9b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf5c9bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f5ca0  lea edx, [eax + eax*4]
    X86_AT(c, 0xf5ca0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5ca3  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5ca3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5ca6  shl edx, 5
    X86_AT(c, 0xf5ca6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f5ca9  sub edx, eax
    X86_AT(c, 0xf5ca9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f5cab  movzx ebx, bl
    X86_AT(c, 0xf5cabu);
    c.r[3] = g8(c, 3);
    // 0f5cae  lea eax, [ebx - 0x40]
    X86_AT(c, 0xf5caeu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFC0u);
    // 0f5cb1  add dword ptr [edx + eax*4 + 0xcdf27], 5
    X86_AT(c, 0xf5cb1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xCDF27u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x5u, 0, 4)); }
    // 0f5cb9  mov esi, eax
    X86_AT(c, 0xf5cb9u);
    c.r[6] = c.r[0];
    // 0f5cbb  call 0xe9010
    X86_AT(c, 0xf5cbbu);
    push32(c, 0xf5cc0u); f_000e9010(c); X86_RET(c, 0xf5cc0u);
    X86_TICK(c, 25);
    // 0f5cc0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf5cc0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f5cc5  lea edx, [eax + eax*4]
    X86_AT(c, 0xf5cc5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5cc8  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5cc8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5ccb  shl edx, 5
    X86_AT(c, 0xf5ccbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f5cce  sub edx, eax
    X86_AT(c, 0xf5cceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f5cd0  cmp dword ptr [edx + esi*4 + 0xcdf27], 0x63
    X86_AT(c, 0xf5cd0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xCDF27u))), 0x63u, 0, 4);
    // 0f5cd8  jle 0xf5d04
    X86_AT(c, 0xf5cd8u);
    if (x86_cc(c, 14)) { goto L_f5d04; }
    X86_TICK(c, 11);
    // 0f5cda  mov dword ptr [edx + esi*4 + 0xcdf27], 0x63
    X86_AT(c, 0xf5cdau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xCDF27u)), 0x63u);
    // 0f5ce5  push 0
    X86_AT(c, 0xf5ce5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f5ce7  call 0xe1944
    X86_AT(c, 0xf5ce7u);
    push32(c, 0xf5cecu); f_000e1944(c); X86_RET(c, 0xf5cecu);
    X86_TICK(c, 2);
    // 0f5cec  push 0x8bf8
    X86_AT(c, 0xf5cecu);
    { uint32_t v = 0x8BF8u; push32(c, v); }
L_f5cf1:
    X86_TICK(c, 9);
    // 0f5cf1  push 7
    X86_AT(c, 0xf5cf1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5cf3  call 0xe5654
    X86_AT(c, 0xf5cf3u);
    push32(c, 0xf5cf8u); f_000e5654(c); X86_RET(c, 0xf5cf8u);
    X86_TICK(c, 9);
    // 0f5cf8  push 7
    X86_AT(c, 0xf5cf8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5cfa  call 0xe6c68
    X86_AT(c, 0xf5cfau);
    push32(c, 0xf5cffu); f_000e6c68(c); X86_RET(c, 0xf5cffu);
    X86_TICK(c, 9);
    // 0f5cff  add esp, 0x10
    X86_AT(c, 0xf5cffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f5d02  jmp 0xf5d1a
    X86_AT(c, 0xf5d02u);
    goto L_f5d1a;
L_f5d04:
    X86_TICK(c, 2);
    // 0f5d04  push 0x8c24
    X86_AT(c, 0xf5d04u);
    { uint32_t v = 0x8C24u; push32(c, v); }
L_f5d09:
    X86_TICK(c, 9);
    // 0f5d09  push 7
    X86_AT(c, 0xf5d09u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d0b  call 0xe5654
    X86_AT(c, 0xf5d0bu);
    push32(c, 0xf5d10u); f_000e5654(c); X86_RET(c, 0xf5d10u);
    X86_TICK(c, 9);
    // 0f5d10  push 7
    X86_AT(c, 0xf5d10u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d12  call 0xe6c68
    X86_AT(c, 0xf5d12u);
    push32(c, 0xf5d17u); f_000e6c68(c); X86_RET(c, 0xf5d17u);
    X86_TICK(c, 2);
    // 0f5d17  add esp, 0xc
    X86_AT(c, 0xf5d17u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f5d1a:
    X86_TICK(c, 28);
    // 0f5d1a  pop edi
    X86_AT(c, 0xf5d1au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f5d1b  pop esi
    X86_AT(c, 0xf5d1bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f5d1c  pop ebx
    X86_AT(c, 0xf5d1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f5d1d  leave 
    X86_AT(c, 0xf5d1du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f5d1e  ret 
    X86_AT(c, 0xf5d1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5ac4u, "ran off the end of a function");
}
void f_000f5d20(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0f5d20  push ebp
    X86_AT(c, 0xf5d20u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f5d21  mov ebp, esp
    X86_AT(c, 0xf5d21u);
    c.r[5] = c.r[4];
    // 0f5d23  push eax
    X86_AT(c, 0xf5d23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5d24  push ebx
    X86_AT(c, 0xf5d24u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f5d25  push esi
    X86_AT(c, 0xf5d25u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f5d26  push edi
    X86_AT(c, 0xf5d26u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f5d27  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf5d27u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f5d2b  push 7
    X86_AT(c, 0xf5d2bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d2d  call 0xe693c
    X86_AT(c, 0xf5d2du);
    push32(c, 0xf5d32u); f_000e693c(c); X86_RET(c, 0xf5d32u);
    X86_TICK(c, 11);
    // 0f5d32  push 0x8c48
    X86_AT(c, 0xf5d32u);
    { uint32_t v = 0x8C48u; push32(c, v); }
    // 0f5d37  push 7
    X86_AT(c, 0xf5d37u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d39  call 0xe5654
    X86_AT(c, 0xf5d39u);
    push32(c, 0xf5d3eu); f_000e5654(c); X86_RET(c, 0xf5d3eu);
    X86_TICK(c, 9);
    // 0f5d3e  push 7
    X86_AT(c, 0xf5d3eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d40  call 0xe6c68
    X86_AT(c, 0xf5d40u);
    push32(c, 0xf5d45u); f_000e6c68(c); X86_RET(c, 0xf5d45u);
    X86_TICK(c, 11);
    // 0f5d45  push 0x8c78
    X86_AT(c, 0xf5d45u);
    { uint32_t v = 0x8C78u; push32(c, v); }
    // 0f5d4a  push 7
    X86_AT(c, 0xf5d4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d4c  call 0xe5654
    X86_AT(c, 0xf5d4cu);
    push32(c, 0xf5d51u); f_000e5654(c); X86_RET(c, 0xf5d51u);
    X86_TICK(c, 9);
    // 0f5d51  push 7
    X86_AT(c, 0xf5d51u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d53  call 0xe6c68
    X86_AT(c, 0xf5d53u);
    push32(c, 0xf5d58u); f_000e6c68(c); X86_RET(c, 0xf5d58u);
    X86_TICK(c, 9);
    // 0f5d58  push 7
    X86_AT(c, 0xf5d58u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d5a  call 0xefeb0
    X86_AT(c, 0xf5d5au);
    push32(c, 0xf5d5fu); f_000efeb0(c); X86_RET(c, 0xf5d5fu);
    X86_TICK(c, 11);
    // 0f5d5f  push 0x8c98
    X86_AT(c, 0xf5d5fu);
    { uint32_t v = 0x8C98u; push32(c, v); }
    // 0f5d64  push 7
    X86_AT(c, 0xf5d64u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d66  call 0xe5654
    X86_AT(c, 0xf5d66u);
    push32(c, 0xf5d6bu); f_000e5654(c); X86_RET(c, 0xf5d6bu);
    X86_TICK(c, 9);
    // 0f5d6b  push 7
    X86_AT(c, 0xf5d6bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d6d  call 0xe6c68
    X86_AT(c, 0xf5d6du);
    push32(c, 0xf5d72u); f_000e6c68(c); X86_RET(c, 0xf5d72u);
    X86_TICK(c, 11);
    // 0f5d72  push 0x8cd0
    X86_AT(c, 0xf5d72u);
    { uint32_t v = 0x8CD0u; push32(c, v); }
    // 0f5d77  push 7
    X86_AT(c, 0xf5d77u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d79  call 0xe5654
    X86_AT(c, 0xf5d79u);
    push32(c, 0xf5d7eu); f_000e5654(c); X86_RET(c, 0xf5d7eu);
    X86_TICK(c, 9);
    // 0f5d7e  push 7
    X86_AT(c, 0xf5d7eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d80  call 0xe6c68
    X86_AT(c, 0xf5d80u);
    push32(c, 0xf5d85u); f_000e6c68(c); X86_RET(c, 0xf5d85u);
    X86_TICK(c, 11);
    // 0f5d85  push 0x8d0c
    X86_AT(c, 0xf5d85u);
    { uint32_t v = 0x8D0Cu; push32(c, v); }
    // 0f5d8a  push 7
    X86_AT(c, 0xf5d8au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d8c  call 0xe5654
    X86_AT(c, 0xf5d8cu);
    push32(c, 0xf5d91u); f_000e5654(c); X86_RET(c, 0xf5d91u);
    X86_TICK(c, 11);
    // 0f5d91  add esp, 0x40
    X86_AT(c, 0xf5d91u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f5d94  push 7
    X86_AT(c, 0xf5d94u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5d96  call 0xe6c68
    X86_AT(c, 0xf5d96u);
    push32(c, 0xf5d9bu); f_000e6c68(c); X86_RET(c, 0xf5d9bu);
    X86_TICK(c, 11);
    // 0f5d9b  push 0x8d3c
    X86_AT(c, 0xf5d9bu);
    { uint32_t v = 0x8D3Cu; push32(c, v); }
    // 0f5da0  push 7
    X86_AT(c, 0xf5da0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5da2  call 0xe5654
    X86_AT(c, 0xf5da2u);
    push32(c, 0xf5da7u); f_000e5654(c); X86_RET(c, 0xf5da7u);
    X86_TICK(c, 9);
    // 0f5da7  push 7
    X86_AT(c, 0xf5da7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5da9  call 0xe6c68
    X86_AT(c, 0xf5da9u);
    push32(c, 0xf5daeu); f_000e6c68(c); X86_RET(c, 0xf5daeu);
    X86_TICK(c, 11);
    // 0f5dae  push 0x8d54
    X86_AT(c, 0xf5daeu);
    { uint32_t v = 0x8D54u; push32(c, v); }
    // 0f5db3  push 7
    X86_AT(c, 0xf5db3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5db5  call 0xe5654
    X86_AT(c, 0xf5db5u);
    push32(c, 0xf5dbau); f_000e5654(c); X86_RET(c, 0xf5dbau);
    X86_TICK(c, 2);
    // 0f5dba  add esp, 0x18
    X86_AT(c, 0xf5dbau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_f5dbd:
    X86_TICK(c, 9);
    // 0f5dbd  push 7
    X86_AT(c, 0xf5dbdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5dbf  call 0xe4748
    X86_AT(c, 0xf5dbfu);
    push32(c, 0xf5dc4u); f_000e4748(c); X86_RET(c, 0xf5dc4u);
    X86_TICK(c, 12);
    // 0f5dc4  xchg ebx, eax
    X86_AT(c, 0xf5dc4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f5dc5  add esp, 4
    X86_AT(c, 0xf5dc5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f5dc8  cmp bl, 1
    X86_AT(c, 0xf5dc8u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f5dcb  je 0xf5dec
    X86_AT(c, 0xf5dcbu);
    if (x86_cc(c, 4)) { goto L_f5dec; }
    X86_TICK(c, 7);
    // 0f5dcd  cmp bl, 0x51
    X86_AT(c, 0xf5dcdu);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0f5dd0  je 0xf5dec
    X86_AT(c, 0xf5dd0u);
    if (x86_cc(c, 4)) { goto L_f5dec; }
    X86_TICK(c, 7);
    // 0f5dd2  cmp bl, 0x41
    X86_AT(c, 0xf5dd2u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0f5dd5  jb 0xf5ddc
    X86_AT(c, 0xf5dd5u);
    if (x86_cc(c, 2)) { goto L_f5ddc; }
    X86_TICK(c, 7);
    // 0f5dd7  cmp bl, 0x48
    X86_AT(c, 0xf5dd7u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 0f5dda  jbe 0xf5dec
    X86_AT(c, 0xf5ddau);
    if (x86_cc(c, 6)) { goto L_f5dec; }
L_f5ddc:
    X86_TICK(c, 7);
    // 0f5ddc  and bl, bl
    X86_AT(c, 0xf5ddcu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0f5dde  je 0xf5dbd
    X86_AT(c, 0xf5ddeu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf5dbdu); goto L_f5dbd; }
    X86_TICK(c, 9);
    // 0f5de0  push 1
    X86_AT(c, 0xf5de0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f5de2  call 0xe1944
    X86_AT(c, 0xf5de2u);
    push32(c, 0xf5de7u); f_000e1944(c); X86_RET(c, 0xf5de7u);
    X86_TICK(c, 9);
    // 0f5de7  add esp, 4
    X86_AT(c, 0xf5de7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f5dea  jmp 0xf5dbd
    X86_AT(c, 0xf5deau);
    X86_POLL(c, 0xf5dbdu); goto L_f5dbd;
L_f5dec:
    X86_TICK(c, 7);
    // 0f5dec  cmp bl, 1
    X86_AT(c, 0xf5decu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f5def  je 0xf5df6
    X86_AT(c, 0xf5defu);
    if (x86_cc(c, 4)) { goto L_f5df6; }
    X86_TICK(c, 7);
    // 0f5df1  cmp bl, 0x51
    X86_AT(c, 0xf5df1u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0f5df4  jne 0xf5e24
    X86_AT(c, 0xf5df4u);
    if (x86_cc(c, 5)) { goto L_f5e24; }
L_f5df6:
    X86_TICK(c, 11);
    // 0f5df6  push 0x8d8c
    X86_AT(c, 0xf5df6u);
    { uint32_t v = 0x8D8Cu; push32(c, v); }
    // 0f5dfb  push 7
    X86_AT(c, 0xf5dfbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5dfd  call 0xe5654
    X86_AT(c, 0xf5dfdu);
    push32(c, 0xf5e02u); f_000e5654(c); X86_RET(c, 0xf5e02u);
    X86_TICK(c, 9);
    // 0f5e02  push 7
    X86_AT(c, 0xf5e02u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5e04  call 0xe6c68
    X86_AT(c, 0xf5e04u);
    push32(c, 0xf5e09u); f_000e6c68(c); X86_RET(c, 0xf5e09u);
    X86_TICK(c, 11);
    // 0f5e09  push 0x8da8
    X86_AT(c, 0xf5e09u);
    { uint32_t v = 0x8DA8u; push32(c, v); }
    // 0f5e0e  push 7
    X86_AT(c, 0xf5e0eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5e10  call 0xe5654
    X86_AT(c, 0xf5e10u);
    push32(c, 0xf5e15u); f_000e5654(c); X86_RET(c, 0xf5e15u);
    X86_TICK(c, 9);
    // 0f5e15  push 7
    X86_AT(c, 0xf5e15u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5e17  call 0xe6c68
    X86_AT(c, 0xf5e17u);
    push32(c, 0xf5e1cu); f_000e6c68(c); X86_RET(c, 0xf5e1cu);
    X86_TICK(c, 9);
    // 0f5e1c  add esp, 0x18
    X86_AT(c, 0xf5e1cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f5e1f  jmp 0xf5f63
    X86_AT(c, 0xf5e1fu);
    goto L_f5f63;
L_f5e24:
    X86_TICK(c, 19);
    // 0f5e24  lea eax, [ebp - 1]
    X86_AT(c, 0xf5e24u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f5e27  push eax
    X86_AT(c, 0xf5e27u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5e28  lea eax, [ebx + 1]
    X86_AT(c, 0xf5e28u);
    c.r[0] = (uint32_t)(c.r[3] + 0x1u);
    // 0f5e2b  push eax
    X86_AT(c, 0xf5e2bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5e2c  push 0xa
    X86_AT(c, 0xf5e2cu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f5e2e  push 0xcfbe8
    X86_AT(c, 0xf5e2eu);
    { uint32_t v = 0xCFBE8u; push32(c, v); }
    // 0f5e33  call 0xe53e0
    X86_AT(c, 0xf5e33u);
    push32(c, 0xf5e38u); f_000e53e0(c); X86_RET(c, 0xf5e38u);
    X86_TICK(c, 11);
    // 0f5e38  push eax
    X86_AT(c, 0xf5e38u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5e39  push 7
    X86_AT(c, 0xf5e39u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5e3b  call 0xe6cb0
    X86_AT(c, 0xf5e3bu);
    push32(c, 0xf5e40u); f_000e6cb0(c); X86_RET(c, 0xf5e40u);
    X86_TICK(c, 9);
    // 0f5e40  push 7
    X86_AT(c, 0xf5e40u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5e42  call 0xe6c68
    X86_AT(c, 0xf5e42u);
    push32(c, 0xf5e47u); f_000e6c68(c); X86_RET(c, 0xf5e47u);
    X86_TICK(c, 11);
    // 0f5e47  push 0x8df4
    X86_AT(c, 0xf5e47u);
    { uint32_t v = 0x8DF4u; push32(c, v); }
    // 0f5e4c  push 7
    X86_AT(c, 0xf5e4cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5e4e  call 0xe5654
    X86_AT(c, 0xf5e4eu);
    push32(c, 0xf5e53u); f_000e5654(c); X86_RET(c, 0xf5e53u);
    X86_TICK(c, 9);
    // 0f5e53  push 7
    X86_AT(c, 0xf5e53u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5e55  call 0xe6c68
    X86_AT(c, 0xf5e55u);
    push32(c, 0xf5e5au); f_000e6c68(c); X86_RET(c, 0xf5e5au);
    X86_TICK(c, 14);
    // 0f5e5a  movzx ebx, bl
    X86_AT(c, 0xf5e5au);
    c.r[3] = g8(c, 3);
    // 0f5e5d  lea eax, [ebx - 0x40]
    X86_AT(c, 0xf5e5du);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFC0u);
    // 0f5e60  push eax
    X86_AT(c, 0xf5e60u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5e61  call 0xf5644
    X86_AT(c, 0xf5e61u);
    push32(c, 0xf5e66u); f_000f5644(c); X86_RET(c, 0xf5e66u);
    X86_TICK(c, 16);
    // 0f5e66  xchg edi, eax
    X86_AT(c, 0xf5e66u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f5e67  push 4
    X86_AT(c, 0xf5e67u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f5e69  push edi
    X86_AT(c, 0xf5e69u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f5e6a  push 7
    X86_AT(c, 0xf5e6au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5e6c  call 0xe5630
    X86_AT(c, 0xf5e6cu);
    push32(c, 0xf5e71u); f_000e5630(c); X86_RET(c, 0xf5e71u);
    X86_TICK(c, 11);
    // 0f5e71  push 0x8e20
    X86_AT(c, 0xf5e71u);
    { uint32_t v = 0x8E20u; push32(c, v); }
    // 0f5e76  push 7
    X86_AT(c, 0xf5e76u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5e78  call 0xe5654
    X86_AT(c, 0xf5e78u);
    push32(c, 0xf5e7du); f_000e5654(c); X86_RET(c, 0xf5e7du);
    X86_TICK(c, 11);
    // 0f5e7d  add esp, 0x40
    X86_AT(c, 0xf5e7du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f5e80  push 7
    X86_AT(c, 0xf5e80u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5e82  call 0xe6c68
    X86_AT(c, 0xf5e82u);
    push32(c, 0xf5e87u); f_000e6c68(c); X86_RET(c, 0xf5e87u);
    X86_TICK(c, 11);
    // 0f5e87  push 0x8e64
    X86_AT(c, 0xf5e87u);
    { uint32_t v = 0x8E64u; push32(c, v); }
    // 0f5e8c  push 7
    X86_AT(c, 0xf5e8cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5e8e  call 0xe5654
    X86_AT(c, 0xf5e8eu);
    push32(c, 0xf5e93u); f_000e5654(c); X86_RET(c, 0xf5e93u);
    X86_TICK(c, 9);
    // 0f5e93  push 7
    X86_AT(c, 0xf5e93u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5e95  call 0xe2628
    X86_AT(c, 0xf5e95u);
    push32(c, 0xf5e9au); f_000e2628(c); X86_RET(c, 0xf5e9au);
    X86_TICK(c, 11);
    // 0f5e9a  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xf5e9au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0f5e9d  add esp, 0x10
    X86_AT(c, 0xf5e9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f5ea0  cmp al, 0x59
    X86_AT(c, 0xf5ea0u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0f5ea2  je 0xf5eae
    X86_AT(c, 0xf5ea2u);
    if (x86_cc(c, 4)) { goto L_f5eae; }
    X86_TICK(c, 9);
    // 0f5ea4  push 0x8e98
    X86_AT(c, 0xf5ea4u);
    { uint32_t v = 0x8E98u; push32(c, v); }
    // 0f5ea9  jmp 0xf5f52
    X86_AT(c, 0xf5ea9u);
    goto L_f5f52;
L_f5eae:
    X86_TICK(c, 9);
    // 0f5eae  push 7
    X86_AT(c, 0xf5eaeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5eb0  call 0xe6c68
    X86_AT(c, 0xf5eb0u);
    push32(c, 0xf5eb5u); f_000e6c68(c); X86_RET(c, 0xf5eb5u);
    X86_TICK(c, 9);
    // 0f5eb5  push edi
    X86_AT(c, 0xf5eb5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f5eb6  call 0xf50a4
    X86_AT(c, 0xf5eb6u);
    push32(c, 0xf5ebbu); f_000f50a4(c); X86_RET(c, 0xf5ebbu);
    X86_TICK(c, 9);
    // 0f5ebb  add esp, 8
    X86_AT(c, 0xf5ebbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f5ebe  inc eax
    X86_AT(c, 0xf5ebeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f5ebf  jne 0xf5ecf
    X86_AT(c, 0xf5ebfu);
    if (x86_cc(c, 5)) { goto L_f5ecf; }
    X86_TICK(c, 9);
    // 0f5ec1  push 3
    X86_AT(c, 0xf5ec1u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f5ec3  call 0xe1944
    X86_AT(c, 0xf5ec3u);
    push32(c, 0xf5ec8u); f_000e1944(c); X86_RET(c, 0xf5ec8u);
    X86_TICK(c, 9);
    // 0f5ec8  push 0x8ec0
    X86_AT(c, 0xf5ec8u);
    { uint32_t v = 0x8EC0u; push32(c, v); }
    // 0f5ecd  jmp 0xf5f3a
    X86_AT(c, 0xf5ecdu);
    goto L_f5f3a;
L_f5ecf:
    X86_TICK(c, 11);
    // 0f5ecf  push 0x8ee4
    X86_AT(c, 0xf5ecfu);
    { uint32_t v = 0x8EE4u; push32(c, v); }
    // 0f5ed4  push 7
    X86_AT(c, 0xf5ed4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5ed6  call 0xe5654
    X86_AT(c, 0xf5ed6u);
    push32(c, 0xf5edbu); f_000e5654(c); X86_RET(c, 0xf5edbu);
    X86_TICK(c, 9);
    // 0f5edb  push 7
    X86_AT(c, 0xf5edbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5edd  call 0xe6c68
    X86_AT(c, 0xf5eddu);
    push32(c, 0xf5ee2u); f_000e6c68(c); X86_RET(c, 0xf5ee2u);
    X86_TICK(c, 33);
    // 0f5ee2  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf5ee2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f5ee7  lea edx, [eax + eax*4]
    X86_AT(c, 0xf5ee7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5eea  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5eeau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5eed  shl edx, 5
    X86_AT(c, 0xf5eedu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f5ef0  sub edx, eax
    X86_AT(c, 0xf5ef0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f5ef2  movzx ebx, bl
    X86_AT(c, 0xf5ef2u);
    c.r[3] = g8(c, 3);
    // 0f5ef5  lea eax, [ebx - 0x40]
    X86_AT(c, 0xf5ef5u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFC0u);
    // 0f5ef8  inc dword ptr [edx + eax*4 + 0xcdebf]
    X86_AT(c, 0xf5ef8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xCDEBFu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f5eff  mov esi, eax
    X86_AT(c, 0xf5effu);
    c.r[6] = c.r[0];
    // 0f5f01  call 0xe9010
    X86_AT(c, 0xf5f01u);
    push32(c, 0xf5f06u); f_000e9010(c); X86_RET(c, 0xf5f06u);
    X86_TICK(c, 27);
    // 0f5f06  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf5f06u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f5f0b  lea edx, [eax + eax*4]
    X86_AT(c, 0xf5f0bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f5f0e  lea edx, [eax + edx*2]
    X86_AT(c, 0xf5f0eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f5f11  shl edx, 5
    X86_AT(c, 0xf5f11u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f5f14  sub edx, eax
    X86_AT(c, 0xf5f14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f5f16  add esp, 0xc
    X86_AT(c, 0xf5f16u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f5f19  cmp dword ptr [edx + esi*4 + 0xcdebf], 0x63
    X86_AT(c, 0xf5f19u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xCDEBFu))), 0x63u, 0, 4);
    // 0f5f21  jle 0xf5f4d
    X86_AT(c, 0xf5f21u);
    if (x86_cc(c, 14)) { goto L_f5f4d; }
    X86_TICK(c, 11);
    // 0f5f23  mov dword ptr [edx + esi*4 + 0xcdebf], 0x63
    X86_AT(c, 0xf5f23u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xCDEBFu)), 0x63u);
    // 0f5f2e  push 0
    X86_AT(c, 0xf5f2eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f5f30  call 0xe1944
    X86_AT(c, 0xf5f30u);
    push32(c, 0xf5f35u); f_000e1944(c); X86_RET(c, 0xf5f35u);
    X86_TICK(c, 2);
    // 0f5f35  push 0x8ef8
    X86_AT(c, 0xf5f35u);
    { uint32_t v = 0x8EF8u; push32(c, v); }
L_f5f3a:
    X86_TICK(c, 9);
    // 0f5f3a  push 7
    X86_AT(c, 0xf5f3au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5f3c  call 0xe5654
    X86_AT(c, 0xf5f3cu);
    push32(c, 0xf5f41u); f_000e5654(c); X86_RET(c, 0xf5f41u);
    X86_TICK(c, 9);
    // 0f5f41  push 7
    X86_AT(c, 0xf5f41u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5f43  call 0xe6c68
    X86_AT(c, 0xf5f43u);
    push32(c, 0xf5f48u); f_000e6c68(c); X86_RET(c, 0xf5f48u);
    X86_TICK(c, 9);
    // 0f5f48  add esp, 0x10
    X86_AT(c, 0xf5f48u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f5f4b  jmp 0xf5f63
    X86_AT(c, 0xf5f4bu);
    goto L_f5f63;
L_f5f4d:
    X86_TICK(c, 2);
    // 0f5f4d  push 0x8f24
    X86_AT(c, 0xf5f4du);
    { uint32_t v = 0x8F24u; push32(c, v); }
L_f5f52:
    X86_TICK(c, 9);
    // 0f5f52  push 7
    X86_AT(c, 0xf5f52u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5f54  call 0xe5654
    X86_AT(c, 0xf5f54u);
    push32(c, 0xf5f59u); f_000e5654(c); X86_RET(c, 0xf5f59u);
    X86_TICK(c, 9);
    // 0f5f59  push 7
    X86_AT(c, 0xf5f59u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5f5b  call 0xe6c68
    X86_AT(c, 0xf5f5bu);
    push32(c, 0xf5f60u); f_000e6c68(c); X86_RET(c, 0xf5f60u);
    X86_TICK(c, 2);
    // 0f5f60  add esp, 0xc
    X86_AT(c, 0xf5f60u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f5f63:
    X86_TICK(c, 28);
    // 0f5f63  pop edi
    X86_AT(c, 0xf5f63u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f5f64  pop esi
    X86_AT(c, 0xf5f64u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f5f65  pop ebx
    X86_AT(c, 0xf5f65u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f5f66  leave 
    X86_AT(c, 0xf5f66u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f5f67  ret 
    X86_AT(c, 0xf5f67u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5d20u, "ran off the end of a function");
}
void f_000f5f68(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0f5f68  push ebp
    X86_AT(c, 0xf5f68u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f5f69  mov ebp, esp
    X86_AT(c, 0xf5f69u);
    c.r[5] = c.r[4];
    // 0f5f6b  push eax
    X86_AT(c, 0xf5f6bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f5f6c  push ebx
    X86_AT(c, 0xf5f6cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f5f6d  push esi
    X86_AT(c, 0xf5f6du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f5f6e  push edi
    X86_AT(c, 0xf5f6eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f5f6f  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf5f6fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f5f73  push 7
    X86_AT(c, 0xf5f73u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5f75  call 0xe693c
    X86_AT(c, 0xf5f75u);
    push32(c, 0xf5f7au); f_000e693c(c); X86_RET(c, 0xf5f7au);
    X86_TICK(c, 11);
    // 0f5f7a  push 0x8f54
    X86_AT(c, 0xf5f7au);
    { uint32_t v = 0x8F54u; push32(c, v); }
    // 0f5f7f  push 7
    X86_AT(c, 0xf5f7fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5f81  call 0xe5654
    X86_AT(c, 0xf5f81u);
    push32(c, 0xf5f86u); f_000e5654(c); X86_RET(c, 0xf5f86u);
    X86_TICK(c, 9);
    // 0f5f86  push 7
    X86_AT(c, 0xf5f86u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5f88  call 0xe6c68
    X86_AT(c, 0xf5f88u);
    push32(c, 0xf5f8du); f_000e6c68(c); X86_RET(c, 0xf5f8du);
    X86_TICK(c, 11);
    // 0f5f8d  push 0x8f84
    X86_AT(c, 0xf5f8du);
    { uint32_t v = 0x8F84u; push32(c, v); }
    // 0f5f92  push 7
    X86_AT(c, 0xf5f92u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5f94  call 0xe5654
    X86_AT(c, 0xf5f94u);
    push32(c, 0xf5f99u); f_000e5654(c); X86_RET(c, 0xf5f99u);
    X86_TICK(c, 9);
    // 0f5f99  push 7
    X86_AT(c, 0xf5f99u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5f9b  call 0xe6c68
    X86_AT(c, 0xf5f9bu);
    push32(c, 0xf5fa0u); f_000e6c68(c); X86_RET(c, 0xf5fa0u);
    X86_TICK(c, 9);
    // 0f5fa0  push 7
    X86_AT(c, 0xf5fa0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5fa2  call 0xefeb0
    X86_AT(c, 0xf5fa2u);
    push32(c, 0xf5fa7u); f_000efeb0(c); X86_RET(c, 0xf5fa7u);
    X86_TICK(c, 11);
    // 0f5fa7  push 0x8fa4
    X86_AT(c, 0xf5fa7u);
    { uint32_t v = 0x8FA4u; push32(c, v); }
    // 0f5fac  push 7
    X86_AT(c, 0xf5facu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5fae  call 0xe5654
    X86_AT(c, 0xf5faeu);
    push32(c, 0xf5fb3u); f_000e5654(c); X86_RET(c, 0xf5fb3u);
    X86_TICK(c, 9);
    // 0f5fb3  push 7
    X86_AT(c, 0xf5fb3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5fb5  call 0xe6c68
    X86_AT(c, 0xf5fb5u);
    push32(c, 0xf5fbau); f_000e6c68(c); X86_RET(c, 0xf5fbau);
    X86_TICK(c, 11);
    // 0f5fba  push 0x8fe0
    X86_AT(c, 0xf5fbau);
    { uint32_t v = 0x8FE0u; push32(c, v); }
    // 0f5fbf  push 7
    X86_AT(c, 0xf5fbfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5fc1  call 0xe5654
    X86_AT(c, 0xf5fc1u);
    push32(c, 0xf5fc6u); f_000e5654(c); X86_RET(c, 0xf5fc6u);
    X86_TICK(c, 9);
    // 0f5fc6  push 7
    X86_AT(c, 0xf5fc6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5fc8  call 0xe6c68
    X86_AT(c, 0xf5fc8u);
    push32(c, 0xf5fcdu); f_000e6c68(c); X86_RET(c, 0xf5fcdu);
    X86_TICK(c, 11);
    // 0f5fcd  push 0x9018
    X86_AT(c, 0xf5fcdu);
    { uint32_t v = 0x9018u; push32(c, v); }
    // 0f5fd2  push 7
    X86_AT(c, 0xf5fd2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5fd4  call 0xe5654
    X86_AT(c, 0xf5fd4u);
    push32(c, 0xf5fd9u); f_000e5654(c); X86_RET(c, 0xf5fd9u);
    X86_TICK(c, 11);
    // 0f5fd9  add esp, 0x40
    X86_AT(c, 0xf5fd9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f5fdc  push 7
    X86_AT(c, 0xf5fdcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5fde  call 0xe6c68
    X86_AT(c, 0xf5fdeu);
    push32(c, 0xf5fe3u); f_000e6c68(c); X86_RET(c, 0xf5fe3u);
    X86_TICK(c, 11);
    // 0f5fe3  push 0x9054
    X86_AT(c, 0xf5fe3u);
    { uint32_t v = 0x9054u; push32(c, v); }
    // 0f5fe8  push 7
    X86_AT(c, 0xf5fe8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5fea  call 0xe5654
    X86_AT(c, 0xf5feau);
    push32(c, 0xf5fefu); f_000e5654(c); X86_RET(c, 0xf5fefu);
    X86_TICK(c, 9);
    // 0f5fef  push 7
    X86_AT(c, 0xf5fefu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5ff1  call 0xe6c68
    X86_AT(c, 0xf5ff1u);
    push32(c, 0xf5ff6u); f_000e6c68(c); X86_RET(c, 0xf5ff6u);
    X86_TICK(c, 11);
    // 0f5ff6  push 0x906c
    X86_AT(c, 0xf5ff6u);
    { uint32_t v = 0x906Cu; push32(c, v); }
    // 0f5ffb  push 7
    X86_AT(c, 0xf5ffbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f5ffd  call 0xe5654
    X86_AT(c, 0xf5ffdu);
    push32(c, 0xf6002u); f_000e5654(c); X86_RET(c, 0xf6002u);
    X86_TICK(c, 2);
    // 0f6002  add esp, 0x18
    X86_AT(c, 0xf6002u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_f6005:
    X86_TICK(c, 9);
    // 0f6005  push 7
    X86_AT(c, 0xf6005u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6007  call 0xe4748
    X86_AT(c, 0xf6007u);
    push32(c, 0xf600cu); f_000e4748(c); X86_RET(c, 0xf600cu);
    X86_TICK(c, 12);
    // 0f600c  xchg ebx, eax
    X86_AT(c, 0xf600cu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f600d  add esp, 4
    X86_AT(c, 0xf600du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f6010  cmp bl, 1
    X86_AT(c, 0xf6010u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f6013  je 0xf6034
    X86_AT(c, 0xf6013u);
    if (x86_cc(c, 4)) { goto L_f6034; }
    X86_TICK(c, 7);
    // 0f6015  cmp bl, 0x51
    X86_AT(c, 0xf6015u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0f6018  je 0xf6034
    X86_AT(c, 0xf6018u);
    if (x86_cc(c, 4)) { goto L_f6034; }
    X86_TICK(c, 7);
    // 0f601a  cmp bl, 0x41
    X86_AT(c, 0xf601au);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0f601d  jb 0xf6024
    X86_AT(c, 0xf601du);
    if (x86_cc(c, 2)) { goto L_f6024; }
    X86_TICK(c, 7);
    // 0f601f  cmp bl, 0x46
    X86_AT(c, 0xf601fu);
    (void)x86_sub(c, g8(c, 3), 0x46u, 0, 1);
    // 0f6022  jbe 0xf6034
    X86_AT(c, 0xf6022u);
    if (x86_cc(c, 6)) { goto L_f6034; }
L_f6024:
    X86_TICK(c, 7);
    // 0f6024  and bl, bl
    X86_AT(c, 0xf6024u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0f6026  je 0xf6005
    X86_AT(c, 0xf6026u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf6005u); goto L_f6005; }
    X86_TICK(c, 9);
    // 0f6028  push 1
    X86_AT(c, 0xf6028u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f602a  call 0xe1944
    X86_AT(c, 0xf602au);
    push32(c, 0xf602fu); f_000e1944(c); X86_RET(c, 0xf602fu);
    X86_TICK(c, 9);
    // 0f602f  add esp, 4
    X86_AT(c, 0xf602fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f6032  jmp 0xf6005
    X86_AT(c, 0xf6032u);
    X86_POLL(c, 0xf6005u); goto L_f6005;
L_f6034:
    X86_TICK(c, 7);
    // 0f6034  cmp bl, 1
    X86_AT(c, 0xf6034u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f6037  je 0xf603e
    X86_AT(c, 0xf6037u);
    if (x86_cc(c, 4)) { goto L_f603e; }
    X86_TICK(c, 7);
    // 0f6039  cmp bl, 0x51
    X86_AT(c, 0xf6039u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0f603c  jne 0xf606c
    X86_AT(c, 0xf603cu);
    if (x86_cc(c, 5)) { goto L_f606c; }
L_f603e:
    X86_TICK(c, 11);
    // 0f603e  push 0x90a4
    X86_AT(c, 0xf603eu);
    { uint32_t v = 0x90A4u; push32(c, v); }
    // 0f6043  push 7
    X86_AT(c, 0xf6043u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6045  call 0xe5654
    X86_AT(c, 0xf6045u);
    push32(c, 0xf604au); f_000e5654(c); X86_RET(c, 0xf604au);
    X86_TICK(c, 9);
    // 0f604a  push 7
    X86_AT(c, 0xf604au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f604c  call 0xe6c68
    X86_AT(c, 0xf604cu);
    push32(c, 0xf6051u); f_000e6c68(c); X86_RET(c, 0xf6051u);
    X86_TICK(c, 11);
    // 0f6051  push 0x90c0
    X86_AT(c, 0xf6051u);
    { uint32_t v = 0x90C0u; push32(c, v); }
    // 0f6056  push 7
    X86_AT(c, 0xf6056u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6058  call 0xe5654
    X86_AT(c, 0xf6058u);
    push32(c, 0xf605du); f_000e5654(c); X86_RET(c, 0xf605du);
    X86_TICK(c, 9);
    // 0f605d  push 7
    X86_AT(c, 0xf605du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f605f  call 0xe6c68
    X86_AT(c, 0xf605fu);
    push32(c, 0xf6064u); f_000e6c68(c); X86_RET(c, 0xf6064u);
    X86_TICK(c, 9);
    // 0f6064  add esp, 0x18
    X86_AT(c, 0xf6064u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f6067  jmp 0xf61ab
    X86_AT(c, 0xf6067u);
    goto L_f61ab;
L_f606c:
    X86_TICK(c, 19);
    // 0f606c  lea eax, [ebp - 1]
    X86_AT(c, 0xf606cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f606f  push eax
    X86_AT(c, 0xf606fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f6070  lea eax, [ebx + 1]
    X86_AT(c, 0xf6070u);
    c.r[0] = (uint32_t)(c.r[3] + 0x1u);
    // 0f6073  push eax
    X86_AT(c, 0xf6073u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f6074  push 7
    X86_AT(c, 0xf6074u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6076  push 0xcf84c
    X86_AT(c, 0xf6076u);
    { uint32_t v = 0xCF84Cu; push32(c, v); }
    // 0f607b  call 0xe53e0
    X86_AT(c, 0xf607bu);
    push32(c, 0xf6080u); f_000e53e0(c); X86_RET(c, 0xf6080u);
    X86_TICK(c, 11);
    // 0f6080  push eax
    X86_AT(c, 0xf6080u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f6081  push 7
    X86_AT(c, 0xf6081u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6083  call 0xe6cb0
    X86_AT(c, 0xf6083u);
    push32(c, 0xf6088u); f_000e6cb0(c); X86_RET(c, 0xf6088u);
    X86_TICK(c, 9);
    // 0f6088  push 7
    X86_AT(c, 0xf6088u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f608a  call 0xe6c68
    X86_AT(c, 0xf608au);
    push32(c, 0xf608fu); f_000e6c68(c); X86_RET(c, 0xf608fu);
    X86_TICK(c, 11);
    // 0f608f  push 0x910c
    X86_AT(c, 0xf608fu);
    { uint32_t v = 0x910Cu; push32(c, v); }
    // 0f6094  push 7
    X86_AT(c, 0xf6094u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6096  call 0xe5654
    X86_AT(c, 0xf6096u);
    push32(c, 0xf609bu); f_000e5654(c); X86_RET(c, 0xf609bu);
    X86_TICK(c, 9);
    // 0f609b  push 7
    X86_AT(c, 0xf609bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f609d  call 0xe6c68
    X86_AT(c, 0xf609du);
    push32(c, 0xf60a2u); f_000e6c68(c); X86_RET(c, 0xf60a2u);
    X86_TICK(c, 14);
    // 0f60a2  movzx ebx, bl
    X86_AT(c, 0xf60a2u);
    c.r[3] = g8(c, 3);
    // 0f60a5  lea eax, [ebx - 0x40]
    X86_AT(c, 0xf60a5u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFC0u);
    // 0f60a8  push eax
    X86_AT(c, 0xf60a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f60a9  call 0xf5644
    X86_AT(c, 0xf60a9u);
    push32(c, 0xf60aeu); f_000f5644(c); X86_RET(c, 0xf60aeu);
    X86_TICK(c, 16);
    // 0f60ae  xchg edi, eax
    X86_AT(c, 0xf60aeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f60af  push 4
    X86_AT(c, 0xf60afu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f60b1  push edi
    X86_AT(c, 0xf60b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f60b2  push 7
    X86_AT(c, 0xf60b2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f60b4  call 0xe5630
    X86_AT(c, 0xf60b4u);
    push32(c, 0xf60b9u); f_000e5630(c); X86_RET(c, 0xf60b9u);
    X86_TICK(c, 11);
    // 0f60b9  push 0x9138
    X86_AT(c, 0xf60b9u);
    { uint32_t v = 0x9138u; push32(c, v); }
    // 0f60be  push 7
    X86_AT(c, 0xf60beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f60c0  call 0xe5654
    X86_AT(c, 0xf60c0u);
    push32(c, 0xf60c5u); f_000e5654(c); X86_RET(c, 0xf60c5u);
    X86_TICK(c, 11);
    // 0f60c5  add esp, 0x40
    X86_AT(c, 0xf60c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f60c8  push 7
    X86_AT(c, 0xf60c8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f60ca  call 0xe6c68
    X86_AT(c, 0xf60cau);
    push32(c, 0xf60cfu); f_000e6c68(c); X86_RET(c, 0xf60cfu);
    X86_TICK(c, 11);
    // 0f60cf  push 0x917c
    X86_AT(c, 0xf60cfu);
    { uint32_t v = 0x917Cu; push32(c, v); }
    // 0f60d4  push 7
    X86_AT(c, 0xf60d4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f60d6  call 0xe5654
    X86_AT(c, 0xf60d6u);
    push32(c, 0xf60dbu); f_000e5654(c); X86_RET(c, 0xf60dbu);
    X86_TICK(c, 9);
    // 0f60db  push 7
    X86_AT(c, 0xf60dbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f60dd  call 0xe2628
    X86_AT(c, 0xf60ddu);
    push32(c, 0xf60e2u); f_000e2628(c); X86_RET(c, 0xf60e2u);
    X86_TICK(c, 11);
    // 0f60e2  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xf60e2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0f60e5  add esp, 0x10
    X86_AT(c, 0xf60e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f60e8  cmp al, 0x59
    X86_AT(c, 0xf60e8u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0f60ea  je 0xf60f6
    X86_AT(c, 0xf60eau);
    if (x86_cc(c, 4)) { goto L_f60f6; }
    X86_TICK(c, 9);
    // 0f60ec  push 0x91b0
    X86_AT(c, 0xf60ecu);
    { uint32_t v = 0x91B0u; push32(c, v); }
    // 0f60f1  jmp 0xf619a
    X86_AT(c, 0xf60f1u);
    goto L_f619a;
L_f60f6:
    X86_TICK(c, 9);
    // 0f60f6  push 7
    X86_AT(c, 0xf60f6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f60f8  call 0xe6c68
    X86_AT(c, 0xf60f8u);
    push32(c, 0xf60fdu); f_000e6c68(c); X86_RET(c, 0xf60fdu);
    X86_TICK(c, 9);
    // 0f60fd  push edi
    X86_AT(c, 0xf60fdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f60fe  call 0xf50a4
    X86_AT(c, 0xf60feu);
    push32(c, 0xf6103u); f_000f50a4(c); X86_RET(c, 0xf6103u);
    X86_TICK(c, 9);
    // 0f6103  add esp, 8
    X86_AT(c, 0xf6103u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f6106  inc eax
    X86_AT(c, 0xf6106u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f6107  jne 0xf6117
    X86_AT(c, 0xf6107u);
    if (x86_cc(c, 5)) { goto L_f6117; }
    X86_TICK(c, 9);
    // 0f6109  push 3
    X86_AT(c, 0xf6109u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f610b  call 0xe1944
    X86_AT(c, 0xf610bu);
    push32(c, 0xf6110u); f_000e1944(c); X86_RET(c, 0xf6110u);
    X86_TICK(c, 9);
    // 0f6110  push 0x91d8
    X86_AT(c, 0xf6110u);
    { uint32_t v = 0x91D8u; push32(c, v); }
    // 0f6115  jmp 0xf6182
    X86_AT(c, 0xf6115u);
    goto L_f6182;
L_f6117:
    X86_TICK(c, 11);
    // 0f6117  push 0x91fc
    X86_AT(c, 0xf6117u);
    { uint32_t v = 0x91FCu; push32(c, v); }
    // 0f611c  push 7
    X86_AT(c, 0xf611cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f611e  call 0xe5654
    X86_AT(c, 0xf611eu);
    push32(c, 0xf6123u); f_000e5654(c); X86_RET(c, 0xf6123u);
    X86_TICK(c, 9);
    // 0f6123  push 7
    X86_AT(c, 0xf6123u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6125  call 0xe6c68
    X86_AT(c, 0xf6125u);
    push32(c, 0xf612au); f_000e6c68(c); X86_RET(c, 0xf612au);
    X86_TICK(c, 33);
    // 0f612a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf612au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f612f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf612fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6132  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6132u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6135  shl edx, 5
    X86_AT(c, 0xf6135u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6138  sub edx, eax
    X86_AT(c, 0xf6138u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f613a  movzx ebx, bl
    X86_AT(c, 0xf613au);
    c.r[3] = g8(c, 3);
    // 0f613d  lea eax, [ebx - 0x40]
    X86_AT(c, 0xf613du);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFC0u);
    // 0f6140  inc dword ptr [edx + eax*4 + 0xcdea2]
    X86_AT(c, 0xf6140u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xCDEA2u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f6147  mov esi, eax
    X86_AT(c, 0xf6147u);
    c.r[6] = c.r[0];
    // 0f6149  call 0xe9010
    X86_AT(c, 0xf6149u);
    push32(c, 0xf614eu); f_000e9010(c); X86_RET(c, 0xf614eu);
    X86_TICK(c, 27);
    // 0f614e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf614eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6153  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6153u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6156  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6156u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6159  shl edx, 5
    X86_AT(c, 0xf6159u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f615c  sub edx, eax
    X86_AT(c, 0xf615cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f615e  add esp, 0xc
    X86_AT(c, 0xf615eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f6161  cmp dword ptr [edx + esi*4 + 0xcdea2], 0x63
    X86_AT(c, 0xf6161u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xCDEA2u))), 0x63u, 0, 4);
    // 0f6169  jle 0xf6195
    X86_AT(c, 0xf6169u);
    if (x86_cc(c, 14)) { goto L_f6195; }
    X86_TICK(c, 11);
    // 0f616b  mov dword ptr [edx + esi*4 + 0xcdea2], 0x63
    X86_AT(c, 0xf616bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xCDEA2u)), 0x63u);
    // 0f6176  push 0
    X86_AT(c, 0xf6176u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f6178  call 0xe1944
    X86_AT(c, 0xf6178u);
    push32(c, 0xf617du); f_000e1944(c); X86_RET(c, 0xf617du);
    X86_TICK(c, 2);
    // 0f617d  push 0x9210
    X86_AT(c, 0xf617du);
    { uint32_t v = 0x9210u; push32(c, v); }
L_f6182:
    X86_TICK(c, 9);
    // 0f6182  push 7
    X86_AT(c, 0xf6182u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6184  call 0xe5654
    X86_AT(c, 0xf6184u);
    push32(c, 0xf6189u); f_000e5654(c); X86_RET(c, 0xf6189u);
    X86_TICK(c, 9);
    // 0f6189  push 7
    X86_AT(c, 0xf6189u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f618b  call 0xe6c68
    X86_AT(c, 0xf618bu);
    push32(c, 0xf6190u); f_000e6c68(c); X86_RET(c, 0xf6190u);
    X86_TICK(c, 9);
    // 0f6190  add esp, 0x10
    X86_AT(c, 0xf6190u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f6193  jmp 0xf61ab
    X86_AT(c, 0xf6193u);
    goto L_f61ab;
L_f6195:
    X86_TICK(c, 2);
    // 0f6195  push 0x923c
    X86_AT(c, 0xf6195u);
    { uint32_t v = 0x923Cu; push32(c, v); }
L_f619a:
    X86_TICK(c, 9);
    // 0f619a  push 7
    X86_AT(c, 0xf619au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f619c  call 0xe5654
    X86_AT(c, 0xf619cu);
    push32(c, 0xf61a1u); f_000e5654(c); X86_RET(c, 0xf61a1u);
    X86_TICK(c, 9);
    // 0f61a1  push 7
    X86_AT(c, 0xf61a1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f61a3  call 0xe6c68
    X86_AT(c, 0xf61a3u);
    push32(c, 0xf61a8u); f_000e6c68(c); X86_RET(c, 0xf61a8u);
    X86_TICK(c, 2);
    // 0f61a8  add esp, 0xc
    X86_AT(c, 0xf61a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f61ab:
    X86_TICK(c, 28);
    // 0f61ab  pop edi
    X86_AT(c, 0xf61abu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f61ac  pop esi
    X86_AT(c, 0xf61acu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f61ad  pop ebx
    X86_AT(c, 0xf61adu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f61ae  leave 
    X86_AT(c, 0xf61aeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f61af  ret 
    X86_AT(c, 0xf61afu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5f68u, "ran off the end of a function");
}
void f_000f61c4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0f61c4  push edi
    X86_AT(c, 0xf61c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f61c5  push 7
    X86_AT(c, 0xf61c5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f61c7  call 0xe693c
    X86_AT(c, 0xf61c7u);
    push32(c, 0xf61ccu); f_000e693c(c); X86_RET(c, 0xf61ccu);
    X86_TICK(c, 27);
    // 0f61cc  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf61ccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f61d1  lea edx, [eax + eax*4]
    X86_AT(c, 0xf61d1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f61d4  lea edx, [eax + edx*2]
    X86_AT(c, 0xf61d4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f61d7  shl edx, 5
    X86_AT(c, 0xf61d7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f61da  sub edx, eax
    X86_AT(c, 0xf61dau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f61dc  add esp, 4
    X86_AT(c, 0xf61dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f61df  cmp dword ptr [edx + 0xcde56], 4
    X86_AT(c, 0xf61dfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x4u, 0, 4);
    // 0f61e6  jne 0xf6393
    X86_AT(c, 0xf61e6u);
    if (x86_cc(c, 5)) { goto L_f6393; }
    X86_TICK(c, 11);
    // 0f61ec  push 0x926c
    X86_AT(c, 0xf61ecu);
    { uint32_t v = 0x926Cu; push32(c, v); }
    // 0f61f1  push 7
    X86_AT(c, 0xf61f1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f61f3  call 0xe5654
    X86_AT(c, 0xf61f3u);
    push32(c, 0xf61f8u); f_000e5654(c); X86_RET(c, 0xf61f8u);
    X86_TICK(c, 9);
    // 0f61f8  push 7
    X86_AT(c, 0xf61f8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f61fa  call 0xe6c68
    X86_AT(c, 0xf61fau);
    push32(c, 0xf61ffu); f_000e6c68(c); X86_RET(c, 0xf61ffu);
    X86_TICK(c, 27);
    // 0f61ff  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf61ffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6204  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6204u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6207  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6207u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f620a  shl edx, 5
    X86_AT(c, 0xf620au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f620d  sub edx, eax
    X86_AT(c, 0xf620du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f620f  add esp, 0xc
    X86_AT(c, 0xf620fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f6212  cmp dword ptr [edx + 0xcdf23], 0
    X86_AT(c, 0xf6212u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF23u))), 0x0u, 0, 4);
    // 0f6219  jne 0xf622c
    X86_AT(c, 0xf6219u);
    if (x86_cc(c, 5)) { goto L_f622c; }
    X86_TICK(c, 9);
    // 0f621b  push 3
    X86_AT(c, 0xf621bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f621d  call 0xe1944
    X86_AT(c, 0xf621du);
    push32(c, 0xf6222u); f_000e1944(c); X86_RET(c, 0xf6222u);
    X86_TICK(c, 9);
    // 0f6222  push 0x92a4
    X86_AT(c, 0xf6222u);
    { uint32_t v = 0x92A4u; push32(c, v); }
    // 0f6227  jmp 0xf646d
    X86_AT(c, 0xf6227u);
    goto L_f646d;
L_f622c:
    X86_TICK(c, 11);
    // 0f622c  push 0x9330
    X86_AT(c, 0xf622cu);
    { uint32_t v = 0x9330u; push32(c, v); }
    // 0f6231  push 7
    X86_AT(c, 0xf6231u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6233  call 0xe5654
    X86_AT(c, 0xf6233u);
    push32(c, 0xf6238u); f_000e5654(c); X86_RET(c, 0xf6238u);
    X86_TICK(c, 9);
    // 0f6238  push 7
    X86_AT(c, 0xf6238u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f623a  call 0xe6c68
    X86_AT(c, 0xf623au);
    push32(c, 0xf623fu); f_000e6c68(c); X86_RET(c, 0xf623fu);
    X86_TICK(c, 9);
    // 0f623f  push 0xa
    X86_AT(c, 0xf623fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f6241  call 0xe9740
    X86_AT(c, 0xf6241u);
    push32(c, 0xf6246u); f_000e9740(c); X86_RET(c, 0xf6246u);
    X86_TICK(c, 9);
    // 0f6246  push 0xe
    X86_AT(c, 0xf6246u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0f6248  call 0xe5748
    X86_AT(c, 0xf6248u);
    push32(c, 0xf624du); f_000e5748(c); X86_RET(c, 0xf624du);
    X86_TICK(c, 4);
    // 0f624d  mov edi, 0xa
    X86_AT(c, 0xf624du);
    c.r[7] = 0xAu;
    // 0f6252  add esp, 0x14
    X86_AT(c, 0xf6252u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_f6255:
    X86_TICK(c, 7);
    // 0f6255  and edi, edi
    X86_AT(c, 0xf6255u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0f6257  jl 0xf62b2
    X86_AT(c, 0xf6257u);
    if (x86_cc(c, 12)) { goto L_f62b2; }
    X86_TICK(c, 9);
    // 0f6259  push 0x12
    X86_AT(c, 0xf6259u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0f625b  call 0xe9740
    X86_AT(c, 0xf625bu);
    push32(c, 0xf6260u); f_000e9740(c); X86_RET(c, 0xf6260u);
    X86_TICK(c, 9);
    // 0f6260  push 7
    X86_AT(c, 0xf6260u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6262  call 0xe6c68
    X86_AT(c, 0xf6262u);
    push32(c, 0xf6267u); f_000e6c68(c); X86_RET(c, 0xf6267u);
    X86_TICK(c, 9);
    // 0f6267  push 7
    X86_AT(c, 0xf6267u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6269  call 0xe6c68
    X86_AT(c, 0xf6269u);
    push32(c, 0xf626eu); f_000e6c68(c); X86_RET(c, 0xf626eu);
    X86_TICK(c, 9);
    // 0f626e  push 7
    X86_AT(c, 0xf626eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6270  call 0xe6c68
    X86_AT(c, 0xf6270u);
    push32(c, 0xf6275u); f_000e6c68(c); X86_RET(c, 0xf6275u);
    X86_TICK(c, 11);
    // 0f6275  push 0x9374
    X86_AT(c, 0xf6275u);
    { uint32_t v = 0x9374u; push32(c, v); }
    // 0f627a  push 7
    X86_AT(c, 0xf627au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f627c  call 0xe6cb0
    X86_AT(c, 0xf627cu);
    push32(c, 0xf6281u); f_000e6cb0(c); X86_RET(c, 0xf6281u);
    X86_TICK(c, 13);
    // 0f6281  push 2
    X86_AT(c, 0xf6281u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f6283  push edi
    X86_AT(c, 0xf6283u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f6284  push 7
    X86_AT(c, 0xf6284u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6286  call 0xe5630
    X86_AT(c, 0xf6286u);
    push32(c, 0xf628bu); f_000e5630(c); X86_RET(c, 0xf628bu);
    X86_TICK(c, 11);
    // 0f628b  push 0x9380
    X86_AT(c, 0xf628bu);
    { uint32_t v = 0x9380u; push32(c, v); }
    // 0f6290  push 7
    X86_AT(c, 0xf6290u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6292  call 0xe6cb0
    X86_AT(c, 0xf6292u);
    push32(c, 0xf6297u); f_000e6cb0(c); X86_RET(c, 0xf6297u);
    X86_TICK(c, 9);
    // 0f6297  push 7
    X86_AT(c, 0xf6297u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6299  call 0xe6c68
    X86_AT(c, 0xf6299u);
    push32(c, 0xf629eu); f_000e6c68(c); X86_RET(c, 0xf629eu);
    X86_TICK(c, 9);
    // 0f629e  push 7
    X86_AT(c, 0xf629eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f62a0  call 0xe6c68
    X86_AT(c, 0xf62a0u);
    push32(c, 0xf62a5u); f_000e6c68(c); X86_RET(c, 0xf62a5u);
    X86_TICK(c, 9);
    // 0f62a5  push 7
    X86_AT(c, 0xf62a5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f62a7  call 0xe6c68
    X86_AT(c, 0xf62a7u);
    push32(c, 0xf62acu); f_000e6c68(c); X86_RET(c, 0xf62acu);
    X86_TICK(c, 11);
    // 0f62ac  dec edi
    X86_AT(c, 0xf62acu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0f62ad  add esp, 0x38
    X86_AT(c, 0xf62adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0f62b0  jmp 0xf6255
    X86_AT(c, 0xf62b0u);
    X86_POLL(c, 0xf6255u); goto L_f6255;
L_f62b2:
    X86_TICK(c, 9);
    // 0f62b2  push 0x12
    X86_AT(c, 0xf62b2u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0f62b4  call 0xe9740
    X86_AT(c, 0xf62b4u);
    push32(c, 0xf62b9u); f_000e9740(c); X86_RET(c, 0xf62b9u);
    X86_TICK(c, 32);
    // 0f62b9  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf62b9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f62be  lea edx, [eax + eax*4]
    X86_AT(c, 0xf62beu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f62c1  lea edx, [eax + edx*2]
    X86_AT(c, 0xf62c1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f62c4  shl edx, 5
    X86_AT(c, 0xf62c4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f62c7  sub edx, eax
    X86_AT(c, 0xf62c7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f62c9  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf62c9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f62cf  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf62cfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f62d5  push 0
    X86_AT(c, 0xf62d5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f62d7  call 0xf3c24
    X86_AT(c, 0xf62d7u);
    push32(c, 0xf62dcu); f_000f3c24(c); X86_RET(c, 0xf62dcu);
    X86_TICK(c, 27);
    // 0f62dc  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf62dcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f62e1  lea edx, [eax + eax*4]
    X86_AT(c, 0xf62e1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f62e4  lea edx, [eax + edx*2]
    X86_AT(c, 0xf62e4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f62e7  shl edx, 5
    X86_AT(c, 0xf62e7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f62ea  sub edx, eax
    X86_AT(c, 0xf62eau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f62ec  add esp, 0x10
    X86_AT(c, 0xf62ecu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f62ef  cmp dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf62efu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x0u, 0, 4);
    // 0f62f6  jne 0xf6321
    X86_AT(c, 0xf62f6u);
    if (x86_cc(c, 5)) { goto L_f6321; }
    X86_TICK(c, 12);
    // 0f62f8  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf62f8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f62fe  call 0xe3b24
    X86_AT(c, 0xf62feu);
    push32(c, 0xf6303u); f_000e3b24(c); X86_RET(c, 0xf6303u);
    X86_TICK(c, 25);
    // 0f6303  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6303u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6308  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6308u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f630b  lea edx, [eax + edx*2]
    X86_AT(c, 0xf630bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f630e  shl edx, 5
    X86_AT(c, 0xf630eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6311  sub edx, eax
    X86_AT(c, 0xf6311u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6313  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf6313u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f6319  call 0xfd76c
    X86_AT(c, 0xf6319u);
    push32(c, 0xf631eu); f_000fd76c(c); X86_RET(c, 0xf631eu);
    X86_TICK(c, 2);
    // 0f631e  add esp, 8
    X86_AT(c, 0xf631eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_f6321:
    X86_TICK(c, 9);
    // 0f6321  push 7
    X86_AT(c, 0xf6321u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6323  call 0xe693c
    X86_AT(c, 0xf6323u);
    push32(c, 0xf6328u); f_000e693c(c); X86_RET(c, 0xf6328u);
    X86_TICK(c, 11);
    // 0f6328  push 0x9384
    X86_AT(c, 0xf6328u);
    { uint32_t v = 0x9384u; push32(c, v); }
    // 0f632d  push 7
    X86_AT(c, 0xf632du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f632f  call 0xe5654
    X86_AT(c, 0xf632fu);
    push32(c, 0xf6334u); f_000e5654(c); X86_RET(c, 0xf6334u);
    X86_TICK(c, 9);
    // 0f6334  push 7
    X86_AT(c, 0xf6334u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6336  call 0xe6c68
    X86_AT(c, 0xf6336u);
    push32(c, 0xf633bu); f_000e6c68(c); X86_RET(c, 0xf633bu);
    X86_TICK(c, 7);
    // 0f633b  call 0xf0c70
    X86_AT(c, 0xf633bu);
    push32(c, 0xf6340u); f_000f0c70(c); X86_RET(c, 0xf6340u);
    X86_TICK(c, 9);
    // 0f6340  push 4
    X86_AT(c, 0xf6340u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f6342  call 0xe3188
    X86_AT(c, 0xf6342u);
    push32(c, 0xf6347u); f_000e3188(c); X86_RET(c, 0xf6347u);
    X86_TICK(c, 7);
    // 0f6347  call 0xf328c
    X86_AT(c, 0xf6347u);
    push32(c, 0xf634cu); f_000f328c(c); X86_RET(c, 0xf634cu);
    X86_TICK(c, 14);
    // 0f634c  add esp, 0x14
    X86_AT(c, 0xf634cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f634f  cmp word ptr [0xcde48], 0
    X86_AT(c, 0xf634fu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDE48u))), 0x0u, 0, 2);
    // 0f6357  je 0xf647e
    X86_AT(c, 0xf6357u);
    if (x86_cc(c, 4)) { goto L_f647e; }
    X86_TICK(c, 7);
    // 0f635d  call 0xf6480
    X86_AT(c, 0xf635du);
    push32(c, 0xf6362u); f_000f6480(c); X86_RET(c, 0xf6362u);
    X86_TICK(c, 7);
    // 0f6362  call 0xf66e8
    X86_AT(c, 0xf6362u);
    push32(c, 0xf6367u); f_000f66e8(c); X86_RET(c, 0xf6367u);
    X86_TICK(c, 25);
    // 0f6367  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6367u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f636c  lea edx, [eax + eax*4]
    X86_AT(c, 0xf636cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f636f  lea edx, [eax + edx*2]
    X86_AT(c, 0xf636fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6372  shl edx, 5
    X86_AT(c, 0xf6372u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6375  sub edx, eax
    X86_AT(c, 0xf6375u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6377  cmp dword ptr [edx + 0xcde99], 4
    X86_AT(c, 0xf6377u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))), 0x4u, 0, 4);
    // 0f637e  jle 0xf6384
    X86_AT(c, 0xf637eu);
    if (x86_cc(c, 14)) { goto L_f6384; }
    X86_TICK(c, 9);
    // 0f6380  push 7
    X86_AT(c, 0xf6380u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6382  jmp 0xf6386
    X86_AT(c, 0xf6382u);
    goto L_f6386;
L_f6384:
    X86_TICK(c, 2);
    // 0f6384  push 0
    X86_AT(c, 0xf6384u);
    { uint32_t v = 0x0u; push32(c, v); }
L_f6386:
    X86_TICK(c, 7);
    // 0f6386  call 0xe3188
    X86_AT(c, 0xf6386u);
    push32(c, 0xf638bu); f_000e3188(c); X86_RET(c, 0xf638bu);
    X86_TICK(c, 9);
    // 0f638b  add esp, 4
    X86_AT(c, 0xf638bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f638e  jmp 0xf647e
    X86_AT(c, 0xf638eu);
    goto L_f647e;
L_f6393:
    X86_TICK(c, 25);
    // 0f6393  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6393u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6398  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6398u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f639b  lea edx, [eax + edx*2]
    X86_AT(c, 0xf639bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f639e  shl edx, 5
    X86_AT(c, 0xf639eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f63a1  sub edx, eax
    X86_AT(c, 0xf63a1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f63a3  cmp dword ptr [edx + 0xcde56], 3
    X86_AT(c, 0xf63a3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x3u, 0, 4);
    // 0f63aa  jne 0xf6437
    X86_AT(c, 0xf63aau);
    if (x86_cc(c, 5)) { goto L_f6437; }
    X86_TICK(c, 11);
    // 0f63b0  push 0x93e4
    X86_AT(c, 0xf63b0u);
    { uint32_t v = 0x93E4u; push32(c, v); }
    // 0f63b5  push 7
    X86_AT(c, 0xf63b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f63b7  call 0xe5654
    X86_AT(c, 0xf63b7u);
    push32(c, 0xf63bcu); f_000e5654(c); X86_RET(c, 0xf63bcu);
    X86_TICK(c, 9);
    // 0f63bc  push 7
    X86_AT(c, 0xf63bcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f63be  call 0xe6c68
    X86_AT(c, 0xf63beu);
    push32(c, 0xf63c3u); f_000e6c68(c); X86_RET(c, 0xf63c3u);
    X86_TICK(c, 27);
    // 0f63c3  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf63c3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f63c8  lea edx, [eax + eax*4]
    X86_AT(c, 0xf63c8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f63cb  lea edx, [eax + edx*2]
    X86_AT(c, 0xf63cbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f63ce  shl edx, 5
    X86_AT(c, 0xf63ceu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f63d1  sub edx, eax
    X86_AT(c, 0xf63d1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f63d3  add esp, 0xc
    X86_AT(c, 0xf63d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f63d6  cmp dword ptr [edx + 0xcdf13], 0
    X86_AT(c, 0xf63d6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF13u))), 0x0u, 0, 4);
    // 0f63dd  jne 0xf63f0
    X86_AT(c, 0xf63ddu);
    if (x86_cc(c, 5)) { goto L_f63f0; }
    X86_TICK(c, 9);
    // 0f63df  push 3
    X86_AT(c, 0xf63dfu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f63e1  call 0xe1944
    X86_AT(c, 0xf63e1u);
    push32(c, 0xf63e6u); f_000e1944(c); X86_RET(c, 0xf63e6u);
    X86_TICK(c, 9);
    // 0f63e6  push 0x9414
    X86_AT(c, 0xf63e6u);
    { uint32_t v = 0x9414u; push32(c, v); }
    // 0f63eb  jmp 0xf646d
    X86_AT(c, 0xf63ebu);
    goto L_f646d;
L_f63f0:
    X86_TICK(c, 9);
    // 0f63f0  push 9
    X86_AT(c, 0xf63f0u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f63f2  call 0xe1a7c
    X86_AT(c, 0xf63f2u);
    push32(c, 0xf63f7u); f_000e1a7c(c); X86_RET(c, 0xf63f7u);
    X86_TICK(c, 9);
    // 0f63f7  add esp, 4
    X86_AT(c, 0xf63f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f63fa  cmp eax, 3
    X86_AT(c, 0xf63fau);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0f63fd  jge 0xf642b
    X86_AT(c, 0xf63fdu);
    if (x86_cc(c, 13)) { goto L_f642b; }
    X86_TICK(c, 11);
    // 0f63ff  push 0x9494
    X86_AT(c, 0xf63ffu);
    { uint32_t v = 0x9494u; push32(c, v); }
    // 0f6404  push 7
    X86_AT(c, 0xf6404u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6406  call 0xe5654
    X86_AT(c, 0xf6406u);
    push32(c, 0xf640bu); f_000e5654(c); X86_RET(c, 0xf640bu);
    X86_TICK(c, 9);
    // 0f640b  push 7
    X86_AT(c, 0xf640bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f640d  call 0xe6c68
    X86_AT(c, 0xf640du);
    push32(c, 0xf6412u); f_000e6c68(c); X86_RET(c, 0xf6412u);
    X86_TICK(c, 21);
    // 0f6412  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6412u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6417  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6417u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f641a  lea edx, [eax + edx*2]
    X86_AT(c, 0xf641au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f641d  shl edx, 5
    X86_AT(c, 0xf641du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6420  sub edx, eax
    X86_AT(c, 0xf6420u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6422  dec dword ptr [edx + 0xcdf13]
    X86_AT(c, 0xf6422u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF13u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0f6428  add esp, 0xc
    X86_AT(c, 0xf6428u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f642b:
    X86_TICK(c, 7);
    // 0f642b  call 0xf6708
    X86_AT(c, 0xf642bu);
    push32(c, 0xf6430u); f_000f6708(c); X86_RET(c, 0xf6430u);
    X86_TICK(c, 7);
    // 0f6430  call 0xf66e8
    X86_AT(c, 0xf6430u);
    push32(c, 0xf6435u); f_000f66e8(c); X86_RET(c, 0xf6435u);
    X86_TICK(c, 7);
    // 0f6435  jmp 0xf647e
    X86_AT(c, 0xf6435u);
    goto L_f647e;
L_f6437:
    X86_TICK(c, 25);
    // 0f6437  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6437u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f643c  lea edx, [eax + eax*4]
    X86_AT(c, 0xf643cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f643f  lea edx, [eax + edx*2]
    X86_AT(c, 0xf643fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6442  shl edx, 5
    X86_AT(c, 0xf6442u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6445  sub edx, eax
    X86_AT(c, 0xf6445u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6447  cmp dword ptr [edx + 0xcde56], 0xec
    X86_AT(c, 0xf6447u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0xECu, 0, 4);
    // 0f6451  jne 0xf6461
    X86_AT(c, 0xf6451u);
    if (x86_cc(c, 5)) { goto L_f6461; }
    X86_TICK(c, 9);
    // 0f6453  push 1
    X86_AT(c, 0xf6453u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f6455  call 0xe1944
    X86_AT(c, 0xf6455u);
    push32(c, 0xf645au); f_000e1944(c); X86_RET(c, 0xf645au);
    X86_TICK(c, 9);
    // 0f645a  push 0x94dc
    X86_AT(c, 0xf645au);
    { uint32_t v = 0x94DCu; push32(c, v); }
    // 0f645f  jmp 0xf646d
    X86_AT(c, 0xf645fu);
    goto L_f646d;
L_f6461:
    X86_TICK(c, 9);
    // 0f6461  push 1
    X86_AT(c, 0xf6461u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f6463  call 0xe1944
    X86_AT(c, 0xf6463u);
    push32(c, 0xf6468u); f_000e1944(c); X86_RET(c, 0xf6468u);
    X86_TICK(c, 2);
    // 0f6468  push 0x9530
    X86_AT(c, 0xf6468u);
    { uint32_t v = 0x9530u; push32(c, v); }
L_f646d:
    X86_TICK(c, 9);
    // 0f646d  push 7
    X86_AT(c, 0xf646du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f646f  call 0xe5654
    X86_AT(c, 0xf646fu);
    push32(c, 0xf6474u); f_000e5654(c); X86_RET(c, 0xf6474u);
    X86_TICK(c, 9);
    // 0f6474  push 7
    X86_AT(c, 0xf6474u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6476  call 0xe6c68
    X86_AT(c, 0xf6476u);
    push32(c, 0xf647bu); f_000e6c68(c); X86_RET(c, 0xf647bu);
    X86_TICK(c, 2);
    // 0f647b  add esp, 0x10
    X86_AT(c, 0xf647bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f647e:
    X86_TICK(c, 14);
    // 0f647e  pop edi
    X86_AT(c, 0xf647eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f647f  ret 
    X86_AT(c, 0xf647fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf61c4u, "ran off the end of a function");
}
void f_000f646d(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f646d  push 7
    X86_AT(c, 0xf646du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f646f  call 0xe5654
    X86_AT(c, 0xf646fu);
    push32(c, 0xf6474u); f_000e5654(c); X86_RET(c, 0xf6474u);
    X86_TICK(c, 9);
    // 0f6474  push 7
    X86_AT(c, 0xf6474u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6476  call 0xe6c68
    X86_AT(c, 0xf6476u);
    push32(c, 0xf647bu); f_000e6c68(c); X86_RET(c, 0xf647bu);
    X86_TICK(c, 16);
    // 0f647b  add esp, 0x10
    X86_AT(c, 0xf647bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f647e  pop edi
    X86_AT(c, 0xf647eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f647f  ret 
    X86_AT(c, 0xf647fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf646du, "ran off the end of a function");
}
void f_000f6480(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0f6480  push esi
    X86_AT(c, 0xf6480u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f6481  push edi
    X86_AT(c, 0xf6481u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f6482  push 7
    X86_AT(c, 0xf6482u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6484  call 0xe693c
    X86_AT(c, 0xf6484u);
    push32(c, 0xf6489u); f_000e693c(c); X86_RET(c, 0xf6489u);
    X86_TICK(c, 11);
    // 0f6489  push 0x9564
    X86_AT(c, 0xf6489u);
    { uint32_t v = 0x9564u; push32(c, v); }
    // 0f648e  push 7
    X86_AT(c, 0xf648eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6490  call 0xe5654
    X86_AT(c, 0xf6490u);
    push32(c, 0xf6495u); f_000e5654(c); X86_RET(c, 0xf6495u);
    X86_TICK(c, 9);
    // 0f6495  push 7
    X86_AT(c, 0xf6495u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6497  call 0xe6c68
    X86_AT(c, 0xf6497u);
    push32(c, 0xf649cu); f_000e6c68(c); X86_RET(c, 0xf649cu);
    X86_TICK(c, 7);
    // 0f649c  call 0xf0c70
    X86_AT(c, 0xf649cu);
    push32(c, 0xf64a1u); f_000f0c70(c); X86_RET(c, 0xf64a1u);
    X86_TICK(c, 30);
    // 0f64a1  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf64a1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f64a6  lea edx, [eax + eax*4]
    X86_AT(c, 0xf64a6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f64a9  lea edx, [eax + edx*2]
    X86_AT(c, 0xf64a9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f64ac  shl edx, 5
    X86_AT(c, 0xf64acu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f64af  sub edx, eax
    X86_AT(c, 0xf64afu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f64b1  push dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xf64b1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))); push32(c, v); }
    // 0f64b7  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf64b7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f64bd  call 0xf3c40
    X86_AT(c, 0xf64bdu);
    push32(c, 0xf64c2u); f_000f3c40(c); X86_RET(c, 0xf64c2u);
    X86_TICK(c, 11);
    // 0f64c2  mov dword ptr [0xcda6c], 0
    X86_AT(c, 0xf64c2u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA6Cu)), 0x0u);
    // 0f64cc  push 1
    X86_AT(c, 0xf64ccu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f64ce  call 0xe1a9c
    X86_AT(c, 0xf64ceu);
    push32(c, 0xf64d3u); f_000e1a9c(c); X86_RET(c, 0xf64d3u);
    X86_TICK(c, 9);
    // 0f64d3  push 7
    X86_AT(c, 0xf64d3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f64d5  call 0xe693c
    X86_AT(c, 0xf64d5u);
    push32(c, 0xf64dau); f_000e693c(c); X86_RET(c, 0xf64dau);
    X86_TICK(c, 11);
    // 0f64da  push 0x95a0
    X86_AT(c, 0xf64dau);
    { uint32_t v = 0x95A0u; push32(c, v); }
    // 0f64df  push 7
    X86_AT(c, 0xf64dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f64e1  call 0xe5654
    X86_AT(c, 0xf64e1u);
    push32(c, 0xf64e6u); f_000e5654(c); X86_RET(c, 0xf64e6u);
    X86_TICK(c, 9);
    // 0f64e6  push 7
    X86_AT(c, 0xf64e6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f64e8  call 0xe6c68
    X86_AT(c, 0xf64e8u);
    push32(c, 0xf64edu); f_000e6c68(c); X86_RET(c, 0xf64edu);
    X86_TICK(c, 7);
    // 0f64ed  call 0xf69f0
    X86_AT(c, 0xf64edu);
    push32(c, 0xf64f2u); f_000f69f0(c); X86_RET(c, 0xf64f2u);
    X86_TICK(c, 11);
    // 0f64f2  push 0x95ec
    X86_AT(c, 0xf64f2u);
    { uint32_t v = 0x95ECu; push32(c, v); }
    // 0f64f7  push 7
    X86_AT(c, 0xf64f7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f64f9  call 0xe5654
    X86_AT(c, 0xf64f9u);
    push32(c, 0xf64feu); f_000e5654(c); X86_RET(c, 0xf64feu);
    X86_TICK(c, 11);
    // 0f64fe  sub edi, edi
    X86_AT(c, 0xf64feu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0f6500  push 7
    X86_AT(c, 0xf6500u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6502  call 0xe6c68
    X86_AT(c, 0xf6502u);
    push32(c, 0xf6507u); f_000e6c68(c); X86_RET(c, 0xf6507u);
    X86_TICK(c, 9);
    // 0f6507  push 7
    X86_AT(c, 0xf6507u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6509  call 0xe7618
    X86_AT(c, 0xf6509u);
    push32(c, 0xf650eu); f_000e7618(c); X86_RET(c, 0xf650eu);
    X86_TICK(c, 2);
    // 0f650e  add esp, 0x3c
    X86_AT(c, 0xf650eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
L_f6511:
    X86_TICK(c, 9);
    // 0f6511  push 7
    X86_AT(c, 0xf6511u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6513  call 0xe693c
    X86_AT(c, 0xf6513u);
    push32(c, 0xf6518u); f_000e693c(c); X86_RET(c, 0xf6518u);
    X86_TICK(c, 9);
    // 0f6518  push 7
    X86_AT(c, 0xf6518u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f651a  call 0xe4748
    X86_AT(c, 0xf651au);
    push32(c, 0xf651fu); f_000e4748(c); X86_RET(c, 0xf651fu);
    X86_TICK(c, 14);
    // 0f651f  movzx esi, al
    X86_AT(c, 0xf651fu);
    c.r[6] = g8(c, 0);
    // 0f6522  add esp, 8
    X86_AT(c, 0xf6522u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f6525  mov edx, esi
    X86_AT(c, 0xf6525u);
    c.r[2] = c.r[6];
    // 0f6527  and edx, edx
    X86_AT(c, 0xf6527u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0f6529  je 0xf664b
    X86_AT(c, 0xf6529u);
    if (x86_cc(c, 4)) { goto L_f664b; }
    X86_TICK(c, 7);
    // 0f652f  cmp edx, 1
    X86_AT(c, 0xf652fu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0f6532  je 0xf6591
    X86_AT(c, 0xf6532u);
    if (x86_cc(c, 4)) { goto L_f6591; }
    X86_TICK(c, 7);
    // 0f6534  cmp edx, 4
    X86_AT(c, 0xf6534u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0f6537  je 0xf6591
    X86_AT(c, 0xf6537u);
    if (x86_cc(c, 4)) { goto L_f6591; }
    X86_TICK(c, 9);
    // 0f6539  sub edx, 0x4a
    X86_AT(c, 0xf6539u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x4Au, 0, 4); }
    // 0f653c  cmp edx, 0x10
    X86_AT(c, 0xf653cu);
    (void)x86_sub(c, c.r[2], 0x10u, 0, 4);
    // 0f653f  ja 0xf662e
    X86_AT(c, 0xf653fu);
    if (x86_cc(c, 7)) { goto L_f662e; }
    X86_TICK(c, 7);
    // 0f6545  jmp dword ptr cs:[edx*4 + 0xf654d]
    X86_AT(c, 0xf6545u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF654Du)));
      switch (t) {
      case 0xf6591u: goto L_f6591;
      case 0xf65acu: goto L_f65ac;
      case 0xf65b3u: goto L_f65b3;
      case 0xf65bau: goto L_f65ba;
      case 0xf65c1u: goto L_f65c1;
      case 0xf65c8u: goto L_f65c8;
      case 0xf65cfu: goto L_f65cf;
      case 0xf65d6u: goto L_f65d6;
      case 0xf65e7u: goto L_f65e7;
      case 0xf662eu: goto L_f662e;
      default: x86_jump(c, t); return; } }
L_f6591:
    X86_TICK(c, 7);
    // 0f6591  call 0xf326c
    X86_AT(c, 0xf6591u);
    push32(c, 0xf6596u); f_000f326c(c); X86_RET(c, 0xf6596u);
    X86_TICK(c, 9);
    // 0f6596  push 7
    X86_AT(c, 0xf6596u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6598  call 0xe6c68
    X86_AT(c, 0xf6598u);
    push32(c, 0xf659du); f_000e6c68(c); X86_RET(c, 0xf659du);
    X86_TICK(c, 9);
    // 0f659d  push 7
    X86_AT(c, 0xf659du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f659f  call 0xe7618
    X86_AT(c, 0xf659fu);
    push32(c, 0xf65a4u); f_000e7618(c); X86_RET(c, 0xf65a4u);
    X86_TICK(c, 9);
    // 0f65a4  add esp, 8
    X86_AT(c, 0xf65a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f65a7  jmp 0xf664b
    X86_AT(c, 0xf65a7u);
    goto L_f664b;
L_f65ac:
    X86_TICK(c, 7);
    // 0f65ac  call 0xf738c
    X86_AT(c, 0xf65acu);
    push32(c, 0xf65b1u); f_000f738c(c); X86_RET(c, 0xf65b1u);
    X86_TICK(c, 7);
    // 0f65b1  jmp 0xf65db
    X86_AT(c, 0xf65b1u);
    goto L_f65db;
L_f65b3:
    X86_TICK(c, 7);
    // 0f65b3  call 0xf73ec
    X86_AT(c, 0xf65b3u);
    push32(c, 0xf65b8u); f_000f73ec(c); X86_RET(c, 0xf65b8u);
    X86_TICK(c, 7);
    // 0f65b8  jmp 0xf65db
    X86_AT(c, 0xf65b8u);
    goto L_f65db;
L_f65ba:
    X86_TICK(c, 7);
    // 0f65ba  call 0xf0dec
    X86_AT(c, 0xf65bau);
    push32(c, 0xf65bfu); f_000f0dec(c); X86_RET(c, 0xf65bfu);
    X86_TICK(c, 7);
    // 0f65bf  jmp 0xf65db
    X86_AT(c, 0xf65bfu);
    goto L_f65db;
L_f65c1:
    X86_TICK(c, 7);
    // 0f65c1  call 0xf8c78
    X86_AT(c, 0xf65c1u);
    push32(c, 0xf65c6u); f_000f8c78(c); X86_RET(c, 0xf65c6u);
    X86_TICK(c, 7);
    // 0f65c6  jmp 0xf65db
    X86_AT(c, 0xf65c6u);
    goto L_f65db;
L_f65c8:
    X86_TICK(c, 7);
    // 0f65c8  call 0xf1b08
    X86_AT(c, 0xf65c8u);
    push32(c, 0xf65cdu); f_000f1b08(c); X86_RET(c, 0xf65cdu);
    X86_TICK(c, 7);
    // 0f65cd  jmp 0xf65db
    X86_AT(c, 0xf65cdu);
    goto L_f65db;
L_f65cf:
    X86_TICK(c, 7);
    // 0f65cf  call 0xf82c4
    X86_AT(c, 0xf65cfu);
    push32(c, 0xf65d4u); f_000f82c4(c); X86_RET(c, 0xf65d4u);
    X86_TICK(c, 7);
    // 0f65d4  jmp 0xf65db
    X86_AT(c, 0xf65d4u);
    goto L_f65db;
L_f65d6:
    X86_TICK(c, 7);
    // 0f65d6  call 0xf1964
    X86_AT(c, 0xf65d6u);
    push32(c, 0xf65dbu); f_000f1964(c); X86_RET(c, 0xf65dbu);
L_f65db:
    X86_TICK(c, 9);
    // 0f65db  push 7
    X86_AT(c, 0xf65dbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f65dd  call 0xe7618
    X86_AT(c, 0xf65ddu);
    push32(c, 0xf65e2u); f_000e7618(c); X86_RET(c, 0xf65e2u);
    X86_TICK(c, 9);
    // 0f65e2  add esp, 4
    X86_AT(c, 0xf65e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f65e5  jmp 0xf664b
    X86_AT(c, 0xf65e5u);
    goto L_f664b;
L_f65e7:
    X86_TICK(c, 11);
    // 0f65e7  push 0x9600
    X86_AT(c, 0xf65e7u);
    { uint32_t v = 0x9600u; push32(c, v); }
    // 0f65ec  push 7
    X86_AT(c, 0xf65ecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f65ee  call 0xe5654
    X86_AT(c, 0xf65eeu);
    push32(c, 0xf65f3u); f_000e5654(c); X86_RET(c, 0xf65f3u);
    X86_TICK(c, 9);
    // 0f65f3  push 7
    X86_AT(c, 0xf65f3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f65f5  call 0xe6c68
    X86_AT(c, 0xf65f5u);
    push32(c, 0xf65fau); f_000e6c68(c); X86_RET(c, 0xf65fau);
    X86_TICK(c, 30);
    // 0f65fa  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf65fau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f65ff  lea edx, [eax + eax*4]
    X86_AT(c, 0xf65ffu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6602  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6602u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6605  shl edx, 5
    X86_AT(c, 0xf6605u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6608  sub edx, eax
    X86_AT(c, 0xf6608u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f660a  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf660au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f6610  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf6610u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f6616  call 0xef8ac
    X86_AT(c, 0xf6616u);
    push32(c, 0xf661bu); f_000ef8ac(c); X86_RET(c, 0xf661bu);
    X86_TICK(c, 9);
    // 0f661b  add esp, 0x14
    X86_AT(c, 0xf661bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f661e  cmp eax, 2
    X86_AT(c, 0xf661eu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0f6621  je 0xf66e4
    X86_AT(c, 0xf6621u);
    if (x86_cc(c, 4)) { goto L_f66e4; }
    X86_TICK(c, 9);
    // 0f6627  push 0x9618
    X86_AT(c, 0xf6627u);
    { uint32_t v = 0x9618u; push32(c, v); }
    // 0f662c  jmp 0xf6633
    X86_AT(c, 0xf662cu);
    goto L_f6633;
L_f662e:
    X86_TICK(c, 2);
    // 0f662e  push 0x9680
    X86_AT(c, 0xf662eu);
    { uint32_t v = 0x9680u; push32(c, v); }
L_f6633:
    X86_TICK(c, 9);
    // 0f6633  push 7
    X86_AT(c, 0xf6633u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6635  call 0xe5654
    X86_AT(c, 0xf6635u);
    push32(c, 0xf663au); f_000e5654(c); X86_RET(c, 0xf663au);
    X86_TICK(c, 9);
    // 0f663a  push 7
    X86_AT(c, 0xf663au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f663c  call 0xe6c68
    X86_AT(c, 0xf663cu);
    push32(c, 0xf6641u); f_000e6c68(c); X86_RET(c, 0xf6641u);
    X86_TICK(c, 9);
    // 0f6641  push 7
    X86_AT(c, 0xf6641u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6643  call 0xe7618
    X86_AT(c, 0xf6643u);
    push32(c, 0xf6648u); f_000e7618(c); X86_RET(c, 0xf6648u);
    X86_TICK(c, 2);
    // 0f6648  add esp, 0x10
    X86_AT(c, 0xf6648u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f664b:
    X86_TICK(c, 9);
    // 0f664b  inc edi
    X86_AT(c, 0xf664bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f664c  cmp edi, 3
    X86_AT(c, 0xf664cu);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0f664f  jle 0xf6669
    X86_AT(c, 0xf664fu);
    if (x86_cc(c, 14)) { goto L_f6669; }
    X86_TICK(c, 21);
    // 0f6651  sub edi, edi
    X86_AT(c, 0xf6651u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0f6653  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6653u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6658  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6658u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f665b  lea edx, [eax + edx*2]
    X86_AT(c, 0xf665bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f665e  shl edx, 5
    X86_AT(c, 0xf665eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6661  sub edx, eax
    X86_AT(c, 0xf6661u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6663  inc dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf6663u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_f6669:
    X86_TICK(c, 31);
    // 0f6669  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6669u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f666e  lea edx, [eax + eax*4]
    X86_AT(c, 0xf666eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6671  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6671u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6674  shl edx, 5
    X86_AT(c, 0xf6674u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6677  sub edx, eax
    X86_AT(c, 0xf6677u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6679  add dword ptr [edx + 0xcdf6b], 2
    X86_AT(c, 0xf6679u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x2u, 0, 4)); }
    // 0f6680  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf6680u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f6686  cmp eax, 0x40
    X86_AT(c, 0xf6686u);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 0f6689  jl 0xf669f
    X86_AT(c, 0xf6689u);
    if (x86_cc(c, 12)) { goto L_f669f; }
    X86_TICK(c, 11);
    // 0f668b  mov ecx, eax
    X86_AT(c, 0xf668bu);
    c.r[1] = c.r[0];
    // 0f668d  and eax, 1
    X86_AT(c, 0xf668du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1u, 4); }
    // 0f6692  and ecx, ecx
    X86_AT(c, 0xf6692u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0f6694  jge 0xf6699
    X86_AT(c, 0xf6694u);
    if (x86_cc(c, 13)) { goto L_f6699; }
    X86_TICK(c, 2);
    // 0f6696  sub eax, 2
    X86_AT(c, 0xf6696u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
L_f6699:
    X86_TICK(c, 2);
    // 0f6699  mov dword ptr [edx + 0xcdf6b], eax
    X86_AT(c, 0xf6699u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), c.r[0]);
L_f669f:
    X86_TICK(c, 31);
    // 0f669f  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf669fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f66a4  lea edx, [eax + eax*4]
    X86_AT(c, 0xf66a4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f66a7  lea edx, [eax + edx*2]
    X86_AT(c, 0xf66a7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f66aa  shl edx, 5
    X86_AT(c, 0xf66aau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f66ad  sub edx, eax
    X86_AT(c, 0xf66adu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f66af  add dword ptr [edx + 0xcdf6f], 2
    X86_AT(c, 0xf66afu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x2u, 0, 4)); }
    // 0f66b6  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf66b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f66bc  cmp eax, 0x40
    X86_AT(c, 0xf66bcu);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 0f66bf  jl 0xf66d5
    X86_AT(c, 0xf66bfu);
    if (x86_cc(c, 12)) { goto L_f66d5; }
    X86_TICK(c, 11);
    // 0f66c1  mov ecx, eax
    X86_AT(c, 0xf66c1u);
    c.r[1] = c.r[0];
    // 0f66c3  and eax, 1
    X86_AT(c, 0xf66c3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1u, 4); }
    // 0f66c8  and ecx, ecx
    X86_AT(c, 0xf66c8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0f66ca  jge 0xf66cf
    X86_AT(c, 0xf66cau);
    if (x86_cc(c, 13)) { goto L_f66cf; }
    X86_TICK(c, 2);
    // 0f66cc  sub eax, 2
    X86_AT(c, 0xf66ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
L_f66cf:
    X86_TICK(c, 2);
    // 0f66cf  mov dword ptr [edx + 0xcdf6f], eax
    X86_AT(c, 0xf66cfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), c.r[0]);
L_f66d5:
    X86_TICK(c, 9);
    // 0f66d5  push 4
    X86_AT(c, 0xf66d5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f66d7  call 0xe1a9c
    X86_AT(c, 0xf66d7u);
    push32(c, 0xf66dcu); f_000e1a9c(c); X86_RET(c, 0xf66dcu);
    X86_TICK(c, 9);
    // 0f66dc  add esp, 4
    X86_AT(c, 0xf66dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f66df  jmp 0xf6511
    X86_AT(c, 0xf66dfu);
    X86_POLL(c, 0xf6511u); goto L_f6511;
L_f66e4:
    X86_TICK(c, 18);
    // 0f66e4  pop edi
    X86_AT(c, 0xf66e4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f66e5  pop esi
    X86_AT(c, 0xf66e5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f66e6  ret 
    X86_AT(c, 0xf66e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6480u, "ran off the end of a function");
}
}

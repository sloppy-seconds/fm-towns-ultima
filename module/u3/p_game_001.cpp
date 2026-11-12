#include "p_game_funcs.h"
namespace p_game {
void f_000b60cc(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0b60cc  mov eax, 0x12bc4
    X86_AT(c, 0xb60ccu);
    c.r[0] = 0x12BC4u;
    // 0b60d1  inc word ptr [eax]
    X86_AT(c, 0xb60d1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0])); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0b60d4  cmp word ptr [eax], 4
    X86_AT(c, 0xb60d4u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0]))), 0x4u, 0, 2);
    // 0b60d8  jne 0xb60df
    X86_AT(c, 0xb60d8u);
    if (x86_cc(c, 5)) { goto L_b60df; }
    X86_TICK(c, 2);
    // 0b60da  mov word ptr [eax], 0
    X86_AT(c, 0xb60dau);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_b60df:
    X86_TICK(c, 9);
    // 0b60df  push 0xffffffff
    X86_AT(c, 0xb60dfu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0b60e1  call 0xd50d8
    X86_AT(c, 0xb60e1u);
    push32(c, 0xb60e6u); x86_call_known(c, 0xd50d8u, f_000d50d8); X86_RET(c, 0xb60e6u);
    X86_TICK(c, 15);
    // 0b60e6  add esp, 4
    X86_AT(c, 0xb60e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b60e9  movsx edx, word ptr [0x12bc4]
    X86_AT(c, 0xb60e9u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x12BC4u)));
    // 0b60f0  cmp edx, 3
    X86_AT(c, 0xb60f0u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0b60f3  ja 0xb6123
    X86_AT(c, 0xb60f3u);
    if (x86_cc(c, 7)) { goto L_b6123; }
    X86_TICK(c, 7);
    // 0b60f5  jmp dword ptr cs:[edx*4 + 0xb60fd]
    X86_AT(c, 0xb60f5u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB60FDu)));
      switch (t) {
      case 0xb610du: goto L_b610d;
      case 0xb6111u: goto L_b6111;
      case 0xb6115u: goto L_b6115;
      case 0xb6119u: goto L_b6119;
      default: x86_jump(c, t); return; } }
L_b610d:
    X86_TICK(c, 9);
    // 0b610d  push 0x33
    X86_AT(c, 0xb610du);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0b610f  jmp 0xb611b
    X86_AT(c, 0xb610fu);
    goto L_b611b;
L_b6111:
    X86_TICK(c, 9);
    // 0b6111  push 0x31
    X86_AT(c, 0xb6111u);
    { uint32_t v = 0x31u; push32(c, v); }
    // 0b6113  jmp 0xb611b
    X86_AT(c, 0xb6113u);
    goto L_b611b;
L_b6115:
    X86_TICK(c, 9);
    // 0b6115  push 0x32
    X86_AT(c, 0xb6115u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0b6117  jmp 0xb611b
    X86_AT(c, 0xb6117u);
    goto L_b611b;
L_b6119:
    X86_TICK(c, 2);
    // 0b6119  push 0x30
    X86_AT(c, 0xb6119u);
    { uint32_t v = 0x30u; push32(c, v); }
L_b611b:
    X86_TICK(c, 7);
    // 0b611b  call 0xd50a1
    X86_AT(c, 0xb611bu);
    push32(c, 0xb6120u); x86_call_known(c, 0xd50a1u, f_000d50a1); X86_RET(c, 0xb6120u);
    X86_TICK(c, 2);
    // 0b6120  add esp, 4
    X86_AT(c, 0xb6120u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b6123:
    X86_TICK(c, 16);
    // 0b6123  movsx eax, word ptr [0x12bc4]
    X86_AT(c, 0xb6123u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x12BC4u)));
    // 0b612a  ret 
    X86_AT(c, 0xb612au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb60ccu, "ran off the end of a function");
}
void f_000b612c(X86Cpu& c) {
    X86_TICK(c, 58);
    // 0b612c  push ebp
    X86_AT(c, 0xb612cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b612d  mov ebp, esp
    X86_AT(c, 0xb612du);
    c.r[5] = c.r[4];
    // 0b612f  mov eax, 0x12bc4
    X86_AT(c, 0xb612fu);
    c.r[0] = 0x12BC4u;
    // 0b6134  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xb6134u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b6137  mov dword ptr [eax + 0x24], edx
    X86_AT(c, 0xb6137u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x24u)), c.r[2]);
    // 0b613a  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb613au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b613d  mov dword ptr [eax + 0x28], edx
    X86_AT(c, 0xb613du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x28u)), c.r[2]);
    // 0b6140  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xb6140u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0b6143  mov dword ptr [eax + 0x2c], edx
    X86_AT(c, 0xb6143u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x2Cu)), c.r[2]);
    // 0b6146  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xb6146u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0b6149  mov dword ptr [eax + 0x30], edx
    X86_AT(c, 0xb6149u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x30u)), c.r[2]);
    // 0b614c  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xb614cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0b614f  mov dword ptr [eax + 0x34], edx
    X86_AT(c, 0xb614fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x34u)), c.r[2]);
    // 0b6152  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xb6152u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0b6155  mov dword ptr [eax + 0x38], edx
    X86_AT(c, 0xb6155u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x38u)), c.r[2]);
    // 0b6158  leave 
    X86_AT(c, 0xb6158u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b6159  ret 
    X86_AT(c, 0xb6159u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb612cu, "ran off the end of a function");
}
void f_000b615c(X86Cpu& c) {
    X86_TICK(c, 58);
    // 0b615c  push ebp
    X86_AT(c, 0xb615cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b615d  mov ebp, esp
    X86_AT(c, 0xb615du);
    c.r[5] = c.r[4];
    // 0b615f  mov eax, 0x12bc4
    X86_AT(c, 0xb615fu);
    c.r[0] = 0x12BC4u;
    // 0b6164  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xb6164u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b6167  mov dword ptr [eax + 0x3c], edx
    X86_AT(c, 0xb6167u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x3Cu)), c.r[2]);
    // 0b616a  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb616au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b616d  mov dword ptr [eax + 0x40], edx
    X86_AT(c, 0xb616du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x40u)), c.r[2]);
    // 0b6170  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xb6170u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0b6173  mov dword ptr [eax + 0x44], edx
    X86_AT(c, 0xb6173u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x44u)), c.r[2]);
    // 0b6176  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xb6176u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0b6179  mov dword ptr [eax + 0x48], edx
    X86_AT(c, 0xb6179u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x48u)), c.r[2]);
    // 0b617c  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xb617cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0b617f  mov dword ptr [eax + 0x4c], edx
    X86_AT(c, 0xb617fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4Cu)), c.r[2]);
    // 0b6182  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xb6182u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0b6185  mov dword ptr [eax + 0x50], edx
    X86_AT(c, 0xb6185u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x50u)), c.r[2]);
    // 0b6188  leave 
    X86_AT(c, 0xb6188u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b6189  ret 
    X86_AT(c, 0xb6189u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb615cu, "ran off the end of a function");
}
void f_000b618c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0b618c  push ebp
    X86_AT(c, 0xb618cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b618d  mov ebp, esp
    X86_AT(c, 0xb618du);
    c.r[5] = c.r[4];
    // 0b618f  call 0xd4d46
    X86_AT(c, 0xb618fu);
    push32(c, 0xb6194u); x86_call_known(c, 0xd4d46u, f_000d4d46); X86_RET(c, 0xb6194u);
    X86_TICK(c, 14);
    // 0b6194  mov dword ptr [0x455d4], eax
    X86_AT(c, 0xb6194u);
    wr32((c.sbase[3] + (uint32_t)(0x455D4u)), c.r[0]);
    // 0b6199  push dword ptr [ebp + 8]
    X86_AT(c, 0xb6199u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0b619c  call 0xd4d30
    X86_AT(c, 0xb619cu);
    push32(c, 0xb61a1u); x86_call_known(c, 0xd4d30u, f_000d4d30); X86_RET(c, 0xb61a1u);
    X86_TICK(c, 16);
    // 0b61a1  leave 
    X86_AT(c, 0xb61a1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b61a2  ret 
    X86_AT(c, 0xb61a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb618cu, "ran off the end of a function");
}
void f_000b61a4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0b61a4  push dword ptr [0x455d4]
    X86_AT(c, 0xb61a4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x455D4u))); push32(c, v); }
    // 0b61aa  call 0xd4d30
    X86_AT(c, 0xb61aau);
    push32(c, 0xb61afu); x86_call_known(c, 0xd4d30u, f_000d4d30); X86_RET(c, 0xb61afu);
    X86_TICK(c, 12);
    // 0b61af  add esp, 4
    X86_AT(c, 0xb61afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b61b2  ret 
    X86_AT(c, 0xb61b2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb61a4u, "ran off the end of a function");
}
void f_000b61b4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0b61b4  push ebp
    X86_AT(c, 0xb61b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b61b5  mov ebp, esp
    X86_AT(c, 0xb61b5u);
    c.r[5] = c.r[4];
    // 0b61b7  push edi
    X86_AT(c, 0xb61b7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b61b8  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb61b8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b61bb  and edi, edi
    X86_AT(c, 0xb61bbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0b61bd  jne 0xb61c3
    X86_AT(c, 0xb61bdu);
    if (x86_cc(c, 5)) { goto L_b61c3; }
    X86_TICK(c, 9);
    // 0b61bf  sub eax, eax
    X86_AT(c, 0xb61bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b61c1  jmp 0xb61cf
    X86_AT(c, 0xb61c1u);
    goto L_b61cf;
L_b61c3:
    X86_TICK(c, 7);
    // 0b61c3  call 0xd88f0
    X86_AT(c, 0xb61c3u);
    push32(c, 0xb61c8u); x86_call_known(c, 0xd88f0u, f_000d88f0); X86_RET(c, 0xb61c8u);
    X86_TICK(c, 47);
    // 0b61c8  lea ecx, [edi + 1]
    X86_AT(c, 0xb61c8u);
    c.r[1] = (uint32_t)(c.r[7] + 0x1u);
    // 0b61cb  cdq 
    X86_AT(c, 0xb61cbu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0b61cc  idiv ecx
    X86_AT(c, 0xb61ccu);
    x86_idiv(c, c.r[1], 4, 0xb61ccu);
    // 0b61ce  xchg edx, eax
    X86_AT(c, 0xb61ceu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_b61cf:
    X86_TICK(c, 20);
    // 0b61cf  pop edi
    X86_AT(c, 0xb61cfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b61d0  leave 
    X86_AT(c, 0xb61d0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b61d1  ret 
    X86_AT(c, 0xb61d1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb61b4u, "ran off the end of a function");
}
void f_000b61d4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0b61d4  push ebp
    X86_AT(c, 0xb61d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b61d5  mov ebp, esp
    X86_AT(c, 0xb61d5u);
    c.r[5] = c.r[4];
    // 0b61d7  push edi
    X86_AT(c, 0xb61d7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b61d8  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb61d8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b61db  call 0xb79f4
    X86_AT(c, 0xb61dbu);
    push32(c, 0xb61e0u); x86_call_known(c, 0xb79f4u, f_000b79f4); X86_RET(c, 0xb61e0u);
    X86_TICK(c, 17);
    // 0b61e0  push dword ptr [0xa4a7a]
    X86_AT(c, 0xb61e0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0b61e6  push dword ptr [0xa4a76]
    X86_AT(c, 0xb61e6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0b61ec  call 0xb7aa0
    X86_AT(c, 0xb61ecu);
    push32(c, 0xb61f1u); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xb61f1u);
    X86_TICK(c, 19);
    // 0b61f1  push edi
    X86_AT(c, 0xb61f1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b61f2  push dword ptr [0xa4a7a]
    X86_AT(c, 0xb61f2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0b61f8  push dword ptr [0xa4a76]
    X86_AT(c, 0xb61f8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0b61fe  call 0xbd068
    X86_AT(c, 0xb61feu);
    push32(c, 0xb6203u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xb6203u);
    X86_TICK(c, 9);
    // 0b6203  push 7
    X86_AT(c, 0xb6203u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b6205  call 0xb621c
    X86_AT(c, 0xb6205u);
    push32(c, 0xb620au); x86_call_known(c, 0xb621cu, f_000b621c); X86_RET(c, 0xb620au);
    X86_TICK(c, 9);
    // 0b620a  add esp, 0x18
    X86_AT(c, 0xb620au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0b620d  cmp edi, 1
    X86_AT(c, 0xb620du);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0b6210  jne 0xb6217
    X86_AT(c, 0xb6210u);
    if (x86_cc(c, 5)) { goto L_b6217; }
    X86_TICK(c, 7);
    // 0b6212  call 0xb8d78
    X86_AT(c, 0xb6212u);
    push32(c, 0xb6217u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xb6217u);
L_b6217:
    X86_TICK(c, 20);
    // 0b6217  pop edi
    X86_AT(c, 0xb6217u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b6218  leave 
    X86_AT(c, 0xb6218u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b6219  ret 
    X86_AT(c, 0xb6219u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb61d4u, "ran off the end of a function");
}
void f_000b621c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0b621c  push ebp
    X86_AT(c, 0xb621cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b621d  mov ebp, esp
    X86_AT(c, 0xb621du);
    c.r[5] = c.r[4];
    // 0b621f  push edi
    X86_AT(c, 0xb621fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6220  cmp word ptr [0x9c544], 0
    X86_AT(c, 0xb6220u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x9C544u))), 0x0u, 0, 2);
    // 0b6228  jne 0xb62ca
    X86_AT(c, 0xb6228u);
    if (x86_cc(c, 5)) { goto L_b62ca; }
    X86_TICK(c, 20);
    // 0b622e  mov eax, 0x45658
    X86_AT(c, 0xb622eu);
    c.r[0] = 0x45658u;
    // 0b6233  dec word ptr [eax]
    X86_AT(c, 0xb6233u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0b6236  cmp word ptr [eax], 0
    X86_AT(c, 0xb6236u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 2);
    // 0b623a  jge 0xb62bf
    X86_AT(c, 0xb623au);
    if (x86_cc(c, 13)) { goto L_b62bf; }
    X86_TICK(c, 2);
    // 0b6240  mov word ptr [eax], 0x19
    X86_AT(c, 0xb6240u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), 0x19u);
L_b6245:
    X86_TICK(c, 9);
    // 0b6245  push 9
    X86_AT(c, 0xb6245u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0b6247  call 0xb61b4
    X86_AT(c, 0xb6247u);
    push32(c, 0xb624cu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xb624cu);
    X86_TICK(c, 12);
    // 0b624c  xchg edi, eax
    X86_AT(c, 0xb624cu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0b624d  add esp, 4
    X86_AT(c, 0xb624du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6250  cmp edi, 5
    X86_AT(c, 0xb6250u);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0b6253  jl 0xb626b
    X86_AT(c, 0xb6253u);
    if (x86_cc(c, 12)) { goto L_b626b; }
    X86_TICK(c, 62);
    // 0b6255  xchg edi, eax
    X86_AT(c, 0xb6255u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0b6256  cdq 
    X86_AT(c, 0xb6256u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0b6257  mov ecx, 5
    X86_AT(c, 0xb6257u);
    c.r[1] = 0x5u;
    // 0b625c  idiv ecx
    X86_AT(c, 0xb625cu);
    x86_idiv(c, c.r[1], 4, 0xb625cu);
    // 0b625e  mov edi, edx
    X86_AT(c, 0xb625eu);
    c.r[7] = c.r[2];
    // 0b6260  movsx eax, word ptr [0x45f20]
    X86_AT(c, 0xb6260u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x45F20u)));
    // 0b6267  cmp eax, edi
    X86_AT(c, 0xb6267u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0b6269  je 0xb6245
    X86_AT(c, 0xb6269u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xb6245u); goto L_b6245; }
L_b626b:
    X86_TICK(c, 13);
    // 0b626b  mov eax, edi
    X86_AT(c, 0xb626bu);
    c.r[0] = c.r[7];
    // 0b626d  mov word ptr [0x45f20], ax
    X86_AT(c, 0xb626du);
    wr16((c.sbase[3] + (uint32_t)(0x45F20u)), (c.r[0] & 0xFFFFu));
    // 0b6273  mov edx, edi
    X86_AT(c, 0xb6273u);
    c.r[2] = c.r[7];
    // 0b6275  cmp edx, 4
    X86_AT(c, 0xb6275u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0b6278  ja 0xb62bf
    X86_AT(c, 0xb6278u);
    if (x86_cc(c, 7)) { goto L_b62bf; }
    X86_TICK(c, 7);
    // 0b627a  jmp dword ptr cs:[edx*4 + 0xb6282]
    X86_AT(c, 0xb627au);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB6282u)));
      switch (t) {
      case 0xb6296u: goto L_b6296;
      case 0xb629du: goto L_b629d;
      case 0xb62a4u: goto L_b62a4;
      case 0xb62abu: goto L_b62ab;
      case 0xb62b2u: goto L_b62b2;
      default: x86_jump(c, t); return; } }
L_b6296:
    X86_TICK(c, 9);
    // 0b6296  push 0x12a4
    X86_AT(c, 0xb6296u);
    { uint32_t v = 0x12A4u; push32(c, v); }
    // 0b629b  jmp 0xb62b7
    X86_AT(c, 0xb629bu);
    goto L_b62b7;
L_b629d:
    X86_TICK(c, 9);
    // 0b629d  push 0x12d0
    X86_AT(c, 0xb629du);
    { uint32_t v = 0x12D0u; push32(c, v); }
    // 0b62a2  jmp 0xb62b7
    X86_AT(c, 0xb62a2u);
    goto L_b62b7;
L_b62a4:
    X86_TICK(c, 9);
    // 0b62a4  push 0x12fc
    X86_AT(c, 0xb62a4u);
    { uint32_t v = 0x12FCu; push32(c, v); }
    // 0b62a9  jmp 0xb62b7
    X86_AT(c, 0xb62a9u);
    goto L_b62b7;
L_b62ab:
    X86_TICK(c, 9);
    // 0b62ab  push 0x1328
    X86_AT(c, 0xb62abu);
    { uint32_t v = 0x1328u; push32(c, v); }
    // 0b62b0  jmp 0xb62b7
    X86_AT(c, 0xb62b0u);
    goto L_b62b7;
L_b62b2:
    X86_TICK(c, 2);
    // 0b62b2  push 0x1354
    X86_AT(c, 0xb62b2u);
    { uint32_t v = 0x1354u; push32(c, v); }
L_b62b7:
    X86_TICK(c, 7);
    // 0b62b7  call 0xbe9c8
    X86_AT(c, 0xb62b7u);
    push32(c, 0xb62bcu); x86_call_known(c, 0xbe9c8u, f_000be9c8); X86_RET(c, 0xb62bcu);
    X86_TICK(c, 2);
    // 0b62bc  add esp, 4
    X86_AT(c, 0xb62bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b62bf:
    X86_TICK(c, 12);
    // 0b62bf  push dword ptr [ebp + 8]
    X86_AT(c, 0xb62bfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0b62c2  call 0xbb6b0
    X86_AT(c, 0xb62c2u);
    push32(c, 0xb62c7u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb62c7u);
    X86_TICK(c, 2);
    // 0b62c7  add esp, 4
    X86_AT(c, 0xb62c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b62ca:
    X86_TICK(c, 20);
    // 0b62ca  pop edi
    X86_AT(c, 0xb62cau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b62cb  leave 
    X86_AT(c, 0xb62cbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b62cc  ret 
    X86_AT(c, 0xb62ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb621cu, "ran off the end of a function");
}
void f_000b62d0(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0b62d0  mov word ptr [0x45658], 0
    X86_AT(c, 0xb62d0u);
    wr16((c.sbase[3] + (uint32_t)(0x45658u)), 0x0u);
    // 0b62d9  push 7
    X86_AT(c, 0xb62d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b62db  call 0xb621c
    X86_AT(c, 0xb62dbu);
    push32(c, 0xb62e0u); x86_call_known(c, 0xb621cu, f_000b621c); X86_RET(c, 0xb62e0u);
    X86_TICK(c, 12);
    // 0b62e0  add esp, 4
    X86_AT(c, 0xb62e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b62e3  ret 
    X86_AT(c, 0xb62e3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb62d0u, "ran off the end of a function");
}
void f_000b6308(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0b6308  push ebp
    X86_AT(c, 0xb6308u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b6309  mov ebp, esp
    X86_AT(c, 0xb6309u);
    c.r[5] = c.r[4];
    // 0b630b  sub esp, 0xc
    X86_AT(c, 0xb630bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0b630e  push ebx
    X86_AT(c, 0xb630eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b630f  push esi
    X86_AT(c, 0xb630fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b6310  push edi
    X86_AT(c, 0xb6310u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6311  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb6311u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b6314  sub eax, eax
    X86_AT(c, 0xb6314u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b6316  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xb6316u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0b6319  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xb6319u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_b631c:
    X86_TICK(c, 9);
    // 0b631c  push edi
    X86_AT(c, 0xb631cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b631d  call 0xb9514
    X86_AT(c, 0xb631du);
    push32(c, 0xb6322u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xb6322u);
    X86_TICK(c, 11);
    // 0b6322  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xb6322u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0b6325  add esp, 4
    X86_AT(c, 0xb6325u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6328  cmp al, 1
    X86_AT(c, 0xb6328u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 0b632a  je 0xb637c
    X86_AT(c, 0xb632au);
    if (x86_cc(c, 4)) { goto L_b637c; }
    X86_TICK(c, 7);
    // 0b632c  cmp al, 4
    X86_AT(c, 0xb632cu);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 0b632e  je 0xb637c
    X86_AT(c, 0xb632eu);
    if (x86_cc(c, 4)) { goto L_b637c; }
    X86_TICK(c, 11);
    // 0b6330  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xb6330u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0b6333  cmp al, 0x30
    X86_AT(c, 0xb6333u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0b6335  jb 0xb633b
    X86_AT(c, 0xb6335u);
    if (x86_cc(c, 2)) { goto L_b633b; }
    X86_TICK(c, 7);
    // 0b6337  cmp al, 0x39
    X86_AT(c, 0xb6337u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0b6339  jbe 0xb634d
    X86_AT(c, 0xb6339u);
    if (x86_cc(c, 6)) { goto L_b634d; }
L_b633b:
    X86_TICK(c, 12);
    // 0b633b  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0xb633bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0b633f  je 0xb631c
    X86_AT(c, 0xb633fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xb631cu); goto L_b631c; }
    X86_TICK(c, 9);
    // 0b6341  push 1
    X86_AT(c, 0xb6341u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b6343  call 0xb607c
    X86_AT(c, 0xb6343u);
    push32(c, 0xb6348u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb6348u);
    X86_TICK(c, 9);
    // 0b6348  add esp, 4
    X86_AT(c, 0xb6348u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b634b  jmp 0xb631c
    X86_AT(c, 0xb634bu);
    X86_POLL(c, 0xb631cu); goto L_b631c;
L_b634d:
    X86_TICK(c, 17);
    // 0b634d  lea esi, [ebp - 0xc]
    X86_AT(c, 0xb634du);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0b6350  push esi
    X86_AT(c, 0xb6350u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b6351  lea eax, [ebp - 8]
    X86_AT(c, 0xb6351u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b6354  push eax
    X86_AT(c, 0xb6354u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6355  push edi
    X86_AT(c, 0xb6355u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6356  call 0xbc428
    X86_AT(c, 0xb6356u);
    push32(c, 0xb635bu); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb635bu);
    X86_TICK(c, 22);
    // 0b635b  push dword ptr [esi]
    X86_AT(c, 0xb635bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0b635d  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xb635du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b6360  add eax, 2
    X86_AT(c, 0xb6360u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0b6363  push eax
    X86_AT(c, 0xb6363u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6364  push edi
    X86_AT(c, 0xb6364u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6365  call 0xbc174
    X86_AT(c, 0xb6365u);
    push32(c, 0xb636au); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb636au);
    X86_TICK(c, 2);
    // 0b636a  add esp, 0x18
    X86_AT(c, 0xb636au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_b636d:
    X86_TICK(c, 9);
    // 0b636d  push edi
    X86_AT(c, 0xb636du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b636e  call 0xb9514
    X86_AT(c, 0xb636eu);
    push32(c, 0xb6373u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xb6373u);
    X86_TICK(c, 12);
    // 0b6373  xchg ebx, eax
    X86_AT(c, 0xb6373u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b6374  add esp, 4
    X86_AT(c, 0xb6374u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6377  cmp bl, 1
    X86_AT(c, 0xb6377u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b637a  jne 0xb6386
    X86_AT(c, 0xb637au);
    if (x86_cc(c, 5)) { goto L_b6386; }
L_b637c:
    X86_TICK(c, 9);
    // 0b637c  mov eax, 0xffffffff
    X86_AT(c, 0xb637cu);
    c.r[0] = 0xFFFFFFFFu;
    // 0b6381  jmp 0xb63fd
    X86_AT(c, 0xb6381u);
    goto L_b63fd;
L_b6386:
    X86_TICK(c, 7);
    // 0b6386  cmp bl, 4
    X86_AT(c, 0xb6386u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0b6389  jne 0xb6391
    X86_AT(c, 0xb6389u);
    if (x86_cc(c, 5)) { goto L_b6391; }
    X86_TICK(c, 13);
    // 0b638b  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0xb638bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0b638f  jmp 0xb63fa
    X86_AT(c, 0xb638fu);
    goto L_b63fa;
L_b6391:
    X86_TICK(c, 7);
    // 0b6391  cmp bl, 0x30
    X86_AT(c, 0xb6391u);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0b6394  jb 0xb639b
    X86_AT(c, 0xb6394u);
    if (x86_cc(c, 2)) { goto L_b639b; }
    X86_TICK(c, 7);
    // 0b6396  cmp bl, 0x39
    X86_AT(c, 0xb6396u);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 0b6399  jbe 0xb63b0
    X86_AT(c, 0xb6399u);
    if (x86_cc(c, 6)) { goto L_b63b0; }
L_b639b:
    X86_TICK(c, 7);
    // 0b639b  cmp bl, 3
    X86_AT(c, 0xb639bu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0b639e  je 0xb63b0
    X86_AT(c, 0xb639eu);
    if (x86_cc(c, 4)) { goto L_b63b0; }
    X86_TICK(c, 7);
    // 0b63a0  and bl, bl
    X86_AT(c, 0xb63a0u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0b63a2  je 0xb636d
    X86_AT(c, 0xb63a2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xb636du); goto L_b636d; }
    X86_TICK(c, 9);
    // 0b63a4  push 1
    X86_AT(c, 0xb63a4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b63a6  call 0xb607c
    X86_AT(c, 0xb63a6u);
    push32(c, 0xb63abu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb63abu);
    X86_TICK(c, 9);
    // 0b63ab  add esp, 4
    X86_AT(c, 0xb63abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b63ae  jmp 0xb636d
    X86_AT(c, 0xb63aeu);
    X86_POLL(c, 0xb636du); goto L_b636d;
L_b63b0:
    X86_TICK(c, 7);
    // 0b63b0  cmp bl, 3
    X86_AT(c, 0xb63b0u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0b63b3  jne 0xb63e2
    X86_AT(c, 0xb63b3u);
    if (x86_cc(c, 5)) { goto L_b63e2; }
    X86_TICK(c, 11);
    // 0b63b5  push 0x20
    X86_AT(c, 0xb63b5u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b63b7  push edi
    X86_AT(c, 0xb63b7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b63b8  call 0xbbd1c
    X86_AT(c, 0xb63b8u);
    push32(c, 0xb63bdu); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xb63bdu);
    X86_TICK(c, 17);
    // 0b63bd  lea esi, [ebp - 0xc]
    X86_AT(c, 0xb63bdu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0b63c0  push esi
    X86_AT(c, 0xb63c0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b63c1  lea eax, [ebp - 8]
    X86_AT(c, 0xb63c1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b63c4  push eax
    X86_AT(c, 0xb63c4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b63c5  push edi
    X86_AT(c, 0xb63c5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b63c6  call 0xbc428
    X86_AT(c, 0xb63c6u);
    push32(c, 0xb63cbu); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb63cbu);
    X86_TICK(c, 22);
    // 0b63cb  push dword ptr [esi]
    X86_AT(c, 0xb63cbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0b63cd  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xb63cdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b63d0  sub eax, 2
    X86_AT(c, 0xb63d0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0b63d3  push eax
    X86_AT(c, 0xb63d3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b63d4  push edi
    X86_AT(c, 0xb63d4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b63d5  call 0xbc174
    X86_AT(c, 0xb63d5u);
    push32(c, 0xb63dau); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb63dau);
    X86_TICK(c, 9);
    // 0b63da  add esp, 0x20
    X86_AT(c, 0xb63dau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0b63dd  jmp 0xb631c
    X86_AT(c, 0xb63ddu);
    X86_POLL(c, 0xb631cu); goto L_b631c;
L_b63e2:
    X86_TICK(c, 23);
    // 0b63e2  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0xb63e2u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0b63e6  lea eax, [eax + eax*4]
    X86_AT(c, 0xb63e6u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0b63e9  add eax, eax
    X86_AT(c, 0xb63e9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0b63eb  movzx eax, ax
    X86_AT(c, 0xb63ebu);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0b63ee  sub eax, 0x1e0
    X86_AT(c, 0xb63eeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x1E0u, 0, 4); }
    // 0b63f3  movzx ebx, bl
    X86_AT(c, 0xb63f3u);
    c.r[3] = g8(c, 3);
    // 0b63f6  lea edx, [ebx + eax*1]
    X86_AT(c, 0xb63f6u);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 0b63f9  xchg edx, eax
    X86_AT(c, 0xb63f9u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_b63fa:
    X86_TICK(c, 2);
    // 0b63fa  sub eax, 0x30
    X86_AT(c, 0xb63fau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x30u, 0, 4); }
L_b63fd:
    X86_TICK(c, 28);
    // 0b63fd  pop edi
    X86_AT(c, 0xb63fdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b63fe  pop esi
    X86_AT(c, 0xb63feu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b63ff  pop ebx
    X86_AT(c, 0xb63ffu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b6400  leave 
    X86_AT(c, 0xb6400u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b6401  ret 
    X86_AT(c, 0xb6401u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb6308u, "ran off the end of a function");
}
void f_000b6404(X86Cpu& c) {
    X86_TICK(c, 54);
    // 0b6404  push ebp
    X86_AT(c, 0xb6404u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b6405  mov ebp, esp
    X86_AT(c, 0xb6405u);
    c.r[5] = c.r[4];
    // 0b6407  sub esp, 0x14
    X86_AT(c, 0xb6407u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0b640a  push ebx
    X86_AT(c, 0xb640au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b640b  push esi
    X86_AT(c, 0xb640bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b640c  push edi
    X86_AT(c, 0xb640cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b640d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb640du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b6410  sub eax, eax
    X86_AT(c, 0xb6410u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b6412  mov byte ptr [ebp - 8], al
    X86_AT(c, 0xb6412u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 0));
    // 0b6415  mov byte ptr [ebp - 7], al
    X86_AT(c, 0xb6415u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 0));
    // 0b6418  mov byte ptr [ebp - 6], al
    X86_AT(c, 0xb6418u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 0));
    // 0b641b  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xb641bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0b641e  mov byte ptr [ebp - 4], al
    X86_AT(c, 0xb641eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), g8(c, 0));
    // 0b6421  xchg esi, eax
    X86_AT(c, 0xb6421u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0b6422  mov dword ptr [ebp - 0x14], esi
    X86_AT(c, 0xb6422u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[6]);
    // 0b6425  mov dword ptr [ebp - 0x10], esi
    X86_AT(c, 0xb6425u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[6]);
    // 0b6428  mov dword ptr [ebp - 0xc], esi
    X86_AT(c, 0xb6428u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[6]);
    // 0b642b  lea eax, [ebp - 0x10]
    X86_AT(c, 0xb642bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0b642e  push eax
    X86_AT(c, 0xb642eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b642f  lea eax, [ebp - 0xc]
    X86_AT(c, 0xb642fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0b6432  push eax
    X86_AT(c, 0xb6432u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6433  push edi
    X86_AT(c, 0xb6433u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6434  call 0xbc428
    X86_AT(c, 0xb6434u);
    push32(c, 0xb6439u); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb6439u);
L_b6439:
    X86_TICK(c, 2);
    // 0b6439  add esp, 0xc
    X86_AT(c, 0xb6439u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_b643c:
    X86_TICK(c, 11);
    // 0b643c  cmp esi, 4
    X86_AT(c, 0xb643cu);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0b643f  push edi
    X86_AT(c, 0xb643fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6440  call 0xb9514
    X86_AT(c, 0xb6440u);
    push32(c, 0xb6445u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xb6445u);
    X86_TICK(c, 12);
    // 0b6445  xchg ebx, eax
    X86_AT(c, 0xb6445u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b6446  add esp, 4
    X86_AT(c, 0xb6446u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6449  cmp bl, 1
    X86_AT(c, 0xb6449u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b644c  je 0xb6468
    X86_AT(c, 0xb644cu);
    if (x86_cc(c, 4)) { goto L_b6468; }
    X86_TICK(c, 7);
    // 0b644e  cmp bl, 4
    X86_AT(c, 0xb644eu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0b6451  je 0xb6468
    X86_AT(c, 0xb6451u);
    if (x86_cc(c, 4)) { goto L_b6468; }
    X86_TICK(c, 7);
    // 0b6453  cmp bl, 3
    X86_AT(c, 0xb6453u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0b6456  je 0xb6468
    X86_AT(c, 0xb6456u);
    if (x86_cc(c, 4)) { goto L_b6468; }
    X86_TICK(c, 7);
    // 0b6458  cmp bl, 0x30
    X86_AT(c, 0xb6458u);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0b645b  jb 0xb6462
    X86_AT(c, 0xb645bu);
    if (x86_cc(c, 2)) { goto L_b6462; }
    X86_TICK(c, 7);
    // 0b645d  cmp bl, 0x39
    X86_AT(c, 0xb645du);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 0b6460  jbe 0xb6468
    X86_AT(c, 0xb6460u);
    if (x86_cc(c, 6)) { goto L_b6468; }
L_b6462:
    X86_TICK(c, 7);
    // 0b6462  and bl, bl
    X86_AT(c, 0xb6462u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0b6464  je 0xb643c
    X86_AT(c, 0xb6464u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xb643cu); goto L_b643c; }
    X86_TICK(c, 7);
    // 0b6466  jmp 0xb64aa
    X86_AT(c, 0xb6466u);
    goto L_b64aa;
L_b6468:
    X86_TICK(c, 9);
    // 0b6468  push 7
    X86_AT(c, 0xb6468u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b646a  call 0xbb6b0
    X86_AT(c, 0xb646au);
    push32(c, 0xb646fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb646fu);
    X86_TICK(c, 9);
    // 0b646f  add esp, 4
    X86_AT(c, 0xb646fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6472  cmp bl, 1
    X86_AT(c, 0xb6472u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b6475  jne 0xb64a1
    X86_AT(c, 0xb6475u);
    if (x86_cc(c, 5)) { goto L_b64a1; }
    X86_TICK(c, 19);
    // 0b6477  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb6477u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b647a  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb647au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b647d  push edi
    X86_AT(c, 0xb647du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b647e  call 0xbc174
    X86_AT(c, 0xb647eu);
    push32(c, 0xb6483u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6483u);
    X86_TICK(c, 11);
    // 0b6483  push 0x1380
    X86_AT(c, 0xb6483u);
    { uint32_t v = 0x1380u; push32(c, v); }
    // 0b6488  push edi
    X86_AT(c, 0xb6488u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6489  call 0xba428
    X86_AT(c, 0xb6489u);
    push32(c, 0xb648eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xb648eu);
    X86_TICK(c, 9);
    // 0b648e  push edi
    X86_AT(c, 0xb648eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b648f  call 0xbbb5c
    X86_AT(c, 0xb648fu);
    push32(c, 0xb6494u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6494u);
    X86_TICK(c, 11);
    // 0b6494  mov eax, 0xffffffff
    X86_AT(c, 0xb6494u);
    c.r[0] = 0xFFFFFFFFu;
    // 0b6499  add esp, 0x18
    X86_AT(c, 0xb6499u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0b649c  jmp 0xb65f0
    X86_AT(c, 0xb649cu);
    goto L_b65f0;
L_b64a1:
    X86_TICK(c, 7);
    // 0b64a1  cmp bl, 3
    X86_AT(c, 0xb64a1u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0b64a4  jne 0xb64d5
    X86_AT(c, 0xb64a4u);
    if (x86_cc(c, 5)) { goto L_b64d5; }
    X86_TICK(c, 7);
    // 0b64a6  and esi, esi
    X86_AT(c, 0xb64a6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0b64a8  jne 0xb64b6
    X86_AT(c, 0xb64a8u);
    if (x86_cc(c, 5)) { goto L_b64b6; }
L_b64aa:
    X86_TICK(c, 9);
    // 0b64aa  push 1
    X86_AT(c, 0xb64aau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b64ac  call 0xb607c
    X86_AT(c, 0xb64acu);
    push32(c, 0xb64b1u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb64b1u);
    X86_TICK(c, 9);
    // 0b64b1  add esp, 4
    X86_AT(c, 0xb64b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b64b4  jmp 0xb643c
    X86_AT(c, 0xb64b4u);
    X86_POLL(c, 0xb643cu); goto L_b643c;
L_b64b6:
    X86_TICK(c, 11);
    // 0b64b6  push 0x1396
    X86_AT(c, 0xb64b6u);
    { uint32_t v = 0x1396u; push32(c, v); }
    // 0b64bb  push edi
    X86_AT(c, 0xb64bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b64bc  call 0xbbba4
    X86_AT(c, 0xb64bcu);
    push32(c, 0xb64c1u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb64c1u);
    X86_TICK(c, 24);
    // 0b64c1  dec esi
    X86_AT(c, 0xb64c1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0b64c2  mov byte ptr [ebp + esi*1 - 8], 0
    X86_AT(c, 0xb64c2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFF8u)), 0x0u);
    // 0b64c7  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb64c7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b64ca  lea eax, [esi + esi*1]
    X86_AT(c, 0xb64cau);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6]);
    // 0b64cd  add eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb64cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0b64d0  jmp 0xb65ad
    X86_AT(c, 0xb64d0u);
    goto L_b65ad;
L_b64d5:
    X86_TICK(c, 7);
    // 0b64d5  cmp bl, 4
    X86_AT(c, 0xb64d5u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0b64d8  je 0xb65bc
    X86_AT(c, 0xb64d8u);
    if (x86_cc(c, 4)) { goto L_b65bc; }
    X86_TICK(c, 9);
    // 0b64de  mov edx, esi
    X86_AT(c, 0xb64deu);
    c.r[2] = c.r[6];
    // 0b64e0  cmp edx, 4
    X86_AT(c, 0xb64e0u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0b64e3  ja 0xb643c
    X86_AT(c, 0xb64e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xb643cu); goto L_b643c; }
    X86_TICK(c, 7);
    // 0b64e9  jmp dword ptr cs:[edx*4 + 0xb64f1]
    X86_AT(c, 0xb64e9u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB64F1u)));
      switch (t) {
      case 0xb6505u: goto L_b6505;
      case 0xb6542u: goto L_b6542;
      case 0xb655fu: goto L_b655f;
      case 0xb657cu: goto L_b657c;
      case 0xb6599u: goto L_b6599;
      default: x86_jump(c, t); return; } }
L_b6505:
    X86_TICK(c, 7);
    // 0b6505  cmp bl, 0x30
    X86_AT(c, 0xb6505u);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0b6508  jne 0xb6525
    X86_AT(c, 0xb6508u);
    if (x86_cc(c, 5)) { goto L_b6525; }
    X86_TICK(c, 19);
    // 0b650a  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb650au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b650d  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb650du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b6510  push edi
    X86_AT(c, 0xb6510u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6511  call 0xbc174
    X86_AT(c, 0xb6511u);
    push32(c, 0xb6516u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6516u);
    X86_TICK(c, 9);
    // 0b6516  push 1
    X86_AT(c, 0xb6516u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b6518  call 0xb607c
    X86_AT(c, 0xb6518u);
    push32(c, 0xb651du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb651du);
    X86_TICK(c, 9);
    // 0b651d  add esp, 0x10
    X86_AT(c, 0xb651du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b6520  jmp 0xb643c
    X86_AT(c, 0xb6520u);
    X86_POLL(c, 0xb643cu); goto L_b643c;
L_b6525:
    X86_TICK(c, 22);
    // 0b6525  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb6525u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b6528  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb6528u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b652b  add eax, 2
    X86_AT(c, 0xb652bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0b652e  push eax
    X86_AT(c, 0xb652eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b652f  push edi
    X86_AT(c, 0xb652fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6530  call 0xbc174
    X86_AT(c, 0xb6530u);
    push32(c, 0xb6535u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6535u);
    X86_TICK(c, 11);
    // 0b6535  mov byte ptr [ebp - 8], bl
    X86_AT(c, 0xb6535u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 3));
    // 0b6538  mov esi, 1
    X86_AT(c, 0xb6538u);
    c.r[6] = 0x1u;
    // 0b653d  jmp 0xb6439
    X86_AT(c, 0xb653du);
    X86_POLL(c, 0xb6439u); goto L_b6439;
L_b6542:
    X86_TICK(c, 22);
    // 0b6542  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb6542u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b6545  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb6545u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b6548  add eax, 4
    X86_AT(c, 0xb6548u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b654b  push eax
    X86_AT(c, 0xb654bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b654c  push edi
    X86_AT(c, 0xb654cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b654d  call 0xbc174
    X86_AT(c, 0xb654du);
    push32(c, 0xb6552u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6552u);
    X86_TICK(c, 11);
    // 0b6552  mov byte ptr [ebp - 7], bl
    X86_AT(c, 0xb6552u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 3));
    // 0b6555  mov esi, 2
    X86_AT(c, 0xb6555u);
    c.r[6] = 0x2u;
    // 0b655a  jmp 0xb6439
    X86_AT(c, 0xb655au);
    X86_POLL(c, 0xb6439u); goto L_b6439;
L_b655f:
    X86_TICK(c, 22);
    // 0b655f  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb655fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b6562  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb6562u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b6565  add eax, 6
    X86_AT(c, 0xb6565u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x6u, 0, 4); }
    // 0b6568  push eax
    X86_AT(c, 0xb6568u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6569  push edi
    X86_AT(c, 0xb6569u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b656a  call 0xbc174
    X86_AT(c, 0xb656au);
    push32(c, 0xb656fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb656fu);
    X86_TICK(c, 11);
    // 0b656f  mov byte ptr [ebp - 6], bl
    X86_AT(c, 0xb656fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 3));
    // 0b6572  mov esi, 3
    X86_AT(c, 0xb6572u);
    c.r[6] = 0x3u;
    // 0b6577  jmp 0xb6439
    X86_AT(c, 0xb6577u);
    X86_POLL(c, 0xb6439u); goto L_b6439;
L_b657c:
    X86_TICK(c, 22);
    // 0b657c  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb657cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b657f  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb657fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b6582  add eax, 8
    X86_AT(c, 0xb6582u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b6585  push eax
    X86_AT(c, 0xb6585u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6586  push edi
    X86_AT(c, 0xb6586u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6587  call 0xbc174
    X86_AT(c, 0xb6587u);
    push32(c, 0xb658cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb658cu);
    X86_TICK(c, 11);
    // 0b658c  mov byte ptr [ebp - 5], bl
    X86_AT(c, 0xb658cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 3));
    // 0b658f  mov esi, 4
    X86_AT(c, 0xb658fu);
    c.r[6] = 0x4u;
    // 0b6594  jmp 0xb6439
    X86_AT(c, 0xb6594u);
    X86_POLL(c, 0xb6439u); goto L_b6439;
L_b6599:
    X86_TICK(c, 11);
    // 0b6599  push 0x139a
    X86_AT(c, 0xb6599u);
    { uint32_t v = 0x139Au; push32(c, v); }
    // 0b659e  push edi
    X86_AT(c, 0xb659eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b659f  call 0xbbba4
    X86_AT(c, 0xb659fu);
    push32(c, 0xb65a4u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb65a4u);
    X86_TICK(c, 11);
    // 0b65a4  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb65a4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b65a7  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb65a7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b65aa  add eax, 8
    X86_AT(c, 0xb65aau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
L_b65ad:
    X86_TICK(c, 11);
    // 0b65ad  push eax
    X86_AT(c, 0xb65adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b65ae  push edi
    X86_AT(c, 0xb65aeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b65af  call 0xbc174
    X86_AT(c, 0xb65afu);
    push32(c, 0xb65b4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb65b4u);
    X86_TICK(c, 9);
    // 0b65b4  add esp, 0x14
    X86_AT(c, 0xb65b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0b65b7  jmp 0xb643c
    X86_AT(c, 0xb65b7u);
    X86_POLL(c, 0xb643cu); goto L_b643c;
L_b65bc:
    X86_TICK(c, 11);
    // 0b65bc  lea eax, [ebp - 8]
    X86_AT(c, 0xb65bcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b65bf  push eax
    X86_AT(c, 0xb65bfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b65c0  call 0xb9080
    X86_AT(c, 0xb65c0u);
    push32(c, 0xb65c5u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xb65c5u);
    X86_TICK(c, 21);
    // 0b65c5  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xb65c5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0b65c8  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb65c8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b65cb  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb65cbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b65ce  push edi
    X86_AT(c, 0xb65ceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b65cf  call 0xbc174
    X86_AT(c, 0xb65cfu);
    push32(c, 0xb65d4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb65d4u);
    X86_TICK(c, 16);
    // 0b65d4  push 4
    X86_AT(c, 0xb65d4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b65d6  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xb65d6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0b65d9  push edi
    X86_AT(c, 0xb65d9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b65da  call 0xba404
    X86_AT(c, 0xb65dau);
    push32(c, 0xb65dfu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xb65dfu);
    X86_TICK(c, 11);
    // 0b65df  push 0x139e
    X86_AT(c, 0xb65dfu);
    { uint32_t v = 0x139Eu; push32(c, v); }
    // 0b65e4  push edi
    X86_AT(c, 0xb65e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b65e5  call 0xbbba4
    X86_AT(c, 0xb65e5u);
    push32(c, 0xb65eau); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb65eau);
    X86_TICK(c, 6);
    // 0b65ea  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xb65eau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0b65ed  add esp, 0x24
    X86_AT(c, 0xb65edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_b65f0:
    X86_TICK(c, 28);
    // 0b65f0  pop edi
    X86_AT(c, 0xb65f0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b65f1  pop esi
    X86_AT(c, 0xb65f1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b65f2  pop ebx
    X86_AT(c, 0xb65f2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b65f3  leave 
    X86_AT(c, 0xb65f3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b65f4  ret 
    X86_AT(c, 0xb65f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb6404u, "ran off the end of a function");
}
void f_000b6439(X86Cpu& c) {
L_b6439:
    X86_TICK(c, 2);
    // 0b6439  add esp, 0xc
    X86_AT(c, 0xb6439u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_b643c:
    X86_TICK(c, 11);
    // 0b643c  cmp esi, 4
    X86_AT(c, 0xb643cu);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0b643f  push edi
    X86_AT(c, 0xb643fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6440  call 0xb9514
    X86_AT(c, 0xb6440u);
    push32(c, 0xb6445u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xb6445u);
    X86_TICK(c, 12);
    // 0b6445  xchg ebx, eax
    X86_AT(c, 0xb6445u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b6446  add esp, 4
    X86_AT(c, 0xb6446u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6449  cmp bl, 1
    X86_AT(c, 0xb6449u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b644c  je 0xb6468
    X86_AT(c, 0xb644cu);
    if (x86_cc(c, 4)) { goto L_b6468; }
    X86_TICK(c, 7);
    // 0b644e  cmp bl, 4
    X86_AT(c, 0xb644eu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0b6451  je 0xb6468
    X86_AT(c, 0xb6451u);
    if (x86_cc(c, 4)) { goto L_b6468; }
    X86_TICK(c, 7);
    // 0b6453  cmp bl, 3
    X86_AT(c, 0xb6453u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0b6456  je 0xb6468
    X86_AT(c, 0xb6456u);
    if (x86_cc(c, 4)) { goto L_b6468; }
    X86_TICK(c, 7);
    // 0b6458  cmp bl, 0x30
    X86_AT(c, 0xb6458u);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0b645b  jb 0xb6462
    X86_AT(c, 0xb645bu);
    if (x86_cc(c, 2)) { goto L_b6462; }
    X86_TICK(c, 7);
    // 0b645d  cmp bl, 0x39
    X86_AT(c, 0xb645du);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 0b6460  jbe 0xb6468
    X86_AT(c, 0xb6460u);
    if (x86_cc(c, 6)) { goto L_b6468; }
L_b6462:
    X86_TICK(c, 7);
    // 0b6462  and bl, bl
    X86_AT(c, 0xb6462u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0b6464  je 0xb643c
    X86_AT(c, 0xb6464u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xb643cu); goto L_b643c; }
    X86_TICK(c, 7);
    // 0b6466  jmp 0xb64aa
    X86_AT(c, 0xb6466u);
    goto L_b64aa;
L_b6468:
    X86_TICK(c, 9);
    // 0b6468  push 7
    X86_AT(c, 0xb6468u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b646a  call 0xbb6b0
    X86_AT(c, 0xb646au);
    push32(c, 0xb646fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb646fu);
    X86_TICK(c, 9);
    // 0b646f  add esp, 4
    X86_AT(c, 0xb646fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6472  cmp bl, 1
    X86_AT(c, 0xb6472u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b6475  jne 0xb64a1
    X86_AT(c, 0xb6475u);
    if (x86_cc(c, 5)) { goto L_b64a1; }
    X86_TICK(c, 19);
    // 0b6477  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb6477u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b647a  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb647au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b647d  push edi
    X86_AT(c, 0xb647du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b647e  call 0xbc174
    X86_AT(c, 0xb647eu);
    push32(c, 0xb6483u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6483u);
    X86_TICK(c, 11);
    // 0b6483  push 0x1380
    X86_AT(c, 0xb6483u);
    { uint32_t v = 0x1380u; push32(c, v); }
    // 0b6488  push edi
    X86_AT(c, 0xb6488u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6489  call 0xba428
    X86_AT(c, 0xb6489u);
    push32(c, 0xb648eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xb648eu);
    X86_TICK(c, 9);
    // 0b648e  push edi
    X86_AT(c, 0xb648eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b648f  call 0xbbb5c
    X86_AT(c, 0xb648fu);
    push32(c, 0xb6494u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6494u);
    X86_TICK(c, 11);
    // 0b6494  mov eax, 0xffffffff
    X86_AT(c, 0xb6494u);
    c.r[0] = 0xFFFFFFFFu;
    // 0b6499  add esp, 0x18
    X86_AT(c, 0xb6499u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0b649c  jmp 0xb65f0
    X86_AT(c, 0xb649cu);
    goto L_b65f0;
L_b64a1:
    X86_TICK(c, 7);
    // 0b64a1  cmp bl, 3
    X86_AT(c, 0xb64a1u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0b64a4  jne 0xb64d5
    X86_AT(c, 0xb64a4u);
    if (x86_cc(c, 5)) { goto L_b64d5; }
    X86_TICK(c, 7);
    // 0b64a6  and esi, esi
    X86_AT(c, 0xb64a6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0b64a8  jne 0xb64b6
    X86_AT(c, 0xb64a8u);
    if (x86_cc(c, 5)) { goto L_b64b6; }
L_b64aa:
    X86_TICK(c, 9);
    // 0b64aa  push 1
    X86_AT(c, 0xb64aau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b64ac  call 0xb607c
    X86_AT(c, 0xb64acu);
    push32(c, 0xb64b1u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb64b1u);
    X86_TICK(c, 9);
    // 0b64b1  add esp, 4
    X86_AT(c, 0xb64b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b64b4  jmp 0xb643c
    X86_AT(c, 0xb64b4u);
    X86_POLL(c, 0xb643cu); goto L_b643c;
L_b64b6:
    X86_TICK(c, 11);
    // 0b64b6  push 0x1396
    X86_AT(c, 0xb64b6u);
    { uint32_t v = 0x1396u; push32(c, v); }
    // 0b64bb  push edi
    X86_AT(c, 0xb64bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b64bc  call 0xbbba4
    X86_AT(c, 0xb64bcu);
    push32(c, 0xb64c1u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb64c1u);
    X86_TICK(c, 24);
    // 0b64c1  dec esi
    X86_AT(c, 0xb64c1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0b64c2  mov byte ptr [ebp + esi*1 - 8], 0
    X86_AT(c, 0xb64c2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFF8u)), 0x0u);
    // 0b64c7  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb64c7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b64ca  lea eax, [esi + esi*1]
    X86_AT(c, 0xb64cau);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6]);
    // 0b64cd  add eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb64cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0b64d0  jmp 0xb65ad
    X86_AT(c, 0xb64d0u);
    goto L_b65ad;
L_b64d5:
    X86_TICK(c, 7);
    // 0b64d5  cmp bl, 4
    X86_AT(c, 0xb64d5u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0b64d8  je 0xb65bc
    X86_AT(c, 0xb64d8u);
    if (x86_cc(c, 4)) { goto L_b65bc; }
    X86_TICK(c, 9);
    // 0b64de  mov edx, esi
    X86_AT(c, 0xb64deu);
    c.r[2] = c.r[6];
    // 0b64e0  cmp edx, 4
    X86_AT(c, 0xb64e0u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0b64e3  ja 0xb643c
    X86_AT(c, 0xb64e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xb643cu); goto L_b643c; }
    X86_TICK(c, 7);
    // 0b64e9  jmp dword ptr cs:[edx*4 + 0xb64f1]
    X86_AT(c, 0xb64e9u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB64F1u)));
      switch (t) {
      case 0xb6505u: goto L_b6505;
      case 0xb6542u: goto L_b6542;
      case 0xb655fu: goto L_b655f;
      case 0xb657cu: goto L_b657c;
      case 0xb6599u: goto L_b6599;
      default: x86_jump(c, t); return; } }
L_b6505:
    X86_TICK(c, 7);
    // 0b6505  cmp bl, 0x30
    X86_AT(c, 0xb6505u);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0b6508  jne 0xb6525
    X86_AT(c, 0xb6508u);
    if (x86_cc(c, 5)) { goto L_b6525; }
    X86_TICK(c, 19);
    // 0b650a  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb650au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b650d  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb650du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b6510  push edi
    X86_AT(c, 0xb6510u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6511  call 0xbc174
    X86_AT(c, 0xb6511u);
    push32(c, 0xb6516u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6516u);
    X86_TICK(c, 9);
    // 0b6516  push 1
    X86_AT(c, 0xb6516u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b6518  call 0xb607c
    X86_AT(c, 0xb6518u);
    push32(c, 0xb651du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb651du);
    X86_TICK(c, 9);
    // 0b651d  add esp, 0x10
    X86_AT(c, 0xb651du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b6520  jmp 0xb643c
    X86_AT(c, 0xb6520u);
    X86_POLL(c, 0xb643cu); goto L_b643c;
L_b6525:
    X86_TICK(c, 22);
    // 0b6525  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb6525u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b6528  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb6528u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b652b  add eax, 2
    X86_AT(c, 0xb652bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0b652e  push eax
    X86_AT(c, 0xb652eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b652f  push edi
    X86_AT(c, 0xb652fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6530  call 0xbc174
    X86_AT(c, 0xb6530u);
    push32(c, 0xb6535u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6535u);
    X86_TICK(c, 11);
    // 0b6535  mov byte ptr [ebp - 8], bl
    X86_AT(c, 0xb6535u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 3));
    // 0b6538  mov esi, 1
    X86_AT(c, 0xb6538u);
    c.r[6] = 0x1u;
    // 0b653d  jmp 0xb6439
    X86_AT(c, 0xb653du);
    X86_POLL(c, 0xb6439u); goto L_b6439;
L_b6542:
    X86_TICK(c, 22);
    // 0b6542  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb6542u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b6545  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb6545u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b6548  add eax, 4
    X86_AT(c, 0xb6548u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b654b  push eax
    X86_AT(c, 0xb654bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b654c  push edi
    X86_AT(c, 0xb654cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b654d  call 0xbc174
    X86_AT(c, 0xb654du);
    push32(c, 0xb6552u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6552u);
    X86_TICK(c, 11);
    // 0b6552  mov byte ptr [ebp - 7], bl
    X86_AT(c, 0xb6552u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 3));
    // 0b6555  mov esi, 2
    X86_AT(c, 0xb6555u);
    c.r[6] = 0x2u;
    // 0b655a  jmp 0xb6439
    X86_AT(c, 0xb655au);
    X86_POLL(c, 0xb6439u); goto L_b6439;
L_b655f:
    X86_TICK(c, 22);
    // 0b655f  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb655fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b6562  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb6562u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b6565  add eax, 6
    X86_AT(c, 0xb6565u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x6u, 0, 4); }
    // 0b6568  push eax
    X86_AT(c, 0xb6568u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6569  push edi
    X86_AT(c, 0xb6569u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b656a  call 0xbc174
    X86_AT(c, 0xb656au);
    push32(c, 0xb656fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb656fu);
    X86_TICK(c, 11);
    // 0b656f  mov byte ptr [ebp - 6], bl
    X86_AT(c, 0xb656fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 3));
    // 0b6572  mov esi, 3
    X86_AT(c, 0xb6572u);
    c.r[6] = 0x3u;
    // 0b6577  jmp 0xb6439
    X86_AT(c, 0xb6577u);
    X86_POLL(c, 0xb6439u); goto L_b6439;
L_b657c:
    X86_TICK(c, 22);
    // 0b657c  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb657cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b657f  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb657fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b6582  add eax, 8
    X86_AT(c, 0xb6582u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b6585  push eax
    X86_AT(c, 0xb6585u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6586  push edi
    X86_AT(c, 0xb6586u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6587  call 0xbc174
    X86_AT(c, 0xb6587u);
    push32(c, 0xb658cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb658cu);
    X86_TICK(c, 11);
    // 0b658c  mov byte ptr [ebp - 5], bl
    X86_AT(c, 0xb658cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 3));
    // 0b658f  mov esi, 4
    X86_AT(c, 0xb658fu);
    c.r[6] = 0x4u;
    // 0b6594  jmp 0xb6439
    X86_AT(c, 0xb6594u);
    X86_POLL(c, 0xb6439u); goto L_b6439;
L_b6599:
    X86_TICK(c, 11);
    // 0b6599  push 0x139a
    X86_AT(c, 0xb6599u);
    { uint32_t v = 0x139Au; push32(c, v); }
    // 0b659e  push edi
    X86_AT(c, 0xb659eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b659f  call 0xbbba4
    X86_AT(c, 0xb659fu);
    push32(c, 0xb65a4u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb65a4u);
    X86_TICK(c, 11);
    // 0b65a4  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb65a4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b65a7  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb65a7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b65aa  add eax, 8
    X86_AT(c, 0xb65aau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
L_b65ad:
    X86_TICK(c, 11);
    // 0b65ad  push eax
    X86_AT(c, 0xb65adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b65ae  push edi
    X86_AT(c, 0xb65aeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b65af  call 0xbc174
    X86_AT(c, 0xb65afu);
    push32(c, 0xb65b4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb65b4u);
    X86_TICK(c, 9);
    // 0b65b4  add esp, 0x14
    X86_AT(c, 0xb65b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0b65b7  jmp 0xb643c
    X86_AT(c, 0xb65b7u);
    X86_POLL(c, 0xb643cu); goto L_b643c;
L_b65bc:
    X86_TICK(c, 11);
    // 0b65bc  lea eax, [ebp - 8]
    X86_AT(c, 0xb65bcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b65bf  push eax
    X86_AT(c, 0xb65bfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b65c0  call 0xb9080
    X86_AT(c, 0xb65c0u);
    push32(c, 0xb65c5u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xb65c5u);
    X86_TICK(c, 21);
    // 0b65c5  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xb65c5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0b65c8  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb65c8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b65cb  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb65cbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b65ce  push edi
    X86_AT(c, 0xb65ceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b65cf  call 0xbc174
    X86_AT(c, 0xb65cfu);
    push32(c, 0xb65d4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb65d4u);
    X86_TICK(c, 16);
    // 0b65d4  push 4
    X86_AT(c, 0xb65d4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b65d6  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xb65d6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0b65d9  push edi
    X86_AT(c, 0xb65d9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b65da  call 0xba404
    X86_AT(c, 0xb65dau);
    push32(c, 0xb65dfu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xb65dfu);
    X86_TICK(c, 11);
    // 0b65df  push 0x139e
    X86_AT(c, 0xb65dfu);
    { uint32_t v = 0x139Eu; push32(c, v); }
    // 0b65e4  push edi
    X86_AT(c, 0xb65e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b65e5  call 0xbbba4
    X86_AT(c, 0xb65e5u);
    push32(c, 0xb65eau); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb65eau);
    X86_TICK(c, 6);
    // 0b65ea  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xb65eau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0b65ed  add esp, 0x24
    X86_AT(c, 0xb65edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_b65f0:
    X86_TICK(c, 28);
    // 0b65f0  pop edi
    X86_AT(c, 0xb65f0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b65f1  pop esi
    X86_AT(c, 0xb65f1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b65f2  pop ebx
    X86_AT(c, 0xb65f2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b65f3  leave 
    X86_AT(c, 0xb65f3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b65f4  ret 
    X86_AT(c, 0xb65f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb6439u, "ran off the end of a function");
}
void f_000b643c(X86Cpu& c) {
    goto L_b643c;
L_b6439:
    X86_TICK(c, 2);
    // 0b6439  add esp, 0xc
    X86_AT(c, 0xb6439u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_b643c:
    X86_TICK(c, 11);
    // 0b643c  cmp esi, 4
    X86_AT(c, 0xb643cu);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0b643f  push edi
    X86_AT(c, 0xb643fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6440  call 0xb9514
    X86_AT(c, 0xb6440u);
    push32(c, 0xb6445u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xb6445u);
    X86_TICK(c, 12);
    // 0b6445  xchg ebx, eax
    X86_AT(c, 0xb6445u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b6446  add esp, 4
    X86_AT(c, 0xb6446u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6449  cmp bl, 1
    X86_AT(c, 0xb6449u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b644c  je 0xb6468
    X86_AT(c, 0xb644cu);
    if (x86_cc(c, 4)) { goto L_b6468; }
    X86_TICK(c, 7);
    // 0b644e  cmp bl, 4
    X86_AT(c, 0xb644eu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0b6451  je 0xb6468
    X86_AT(c, 0xb6451u);
    if (x86_cc(c, 4)) { goto L_b6468; }
    X86_TICK(c, 7);
    // 0b6453  cmp bl, 3
    X86_AT(c, 0xb6453u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0b6456  je 0xb6468
    X86_AT(c, 0xb6456u);
    if (x86_cc(c, 4)) { goto L_b6468; }
    X86_TICK(c, 7);
    // 0b6458  cmp bl, 0x30
    X86_AT(c, 0xb6458u);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0b645b  jb 0xb6462
    X86_AT(c, 0xb645bu);
    if (x86_cc(c, 2)) { goto L_b6462; }
    X86_TICK(c, 7);
    // 0b645d  cmp bl, 0x39
    X86_AT(c, 0xb645du);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 0b6460  jbe 0xb6468
    X86_AT(c, 0xb6460u);
    if (x86_cc(c, 6)) { goto L_b6468; }
L_b6462:
    X86_TICK(c, 7);
    // 0b6462  and bl, bl
    X86_AT(c, 0xb6462u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0b6464  je 0xb643c
    X86_AT(c, 0xb6464u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xb643cu); goto L_b643c; }
    X86_TICK(c, 7);
    // 0b6466  jmp 0xb64aa
    X86_AT(c, 0xb6466u);
    goto L_b64aa;
L_b6468:
    X86_TICK(c, 9);
    // 0b6468  push 7
    X86_AT(c, 0xb6468u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b646a  call 0xbb6b0
    X86_AT(c, 0xb646au);
    push32(c, 0xb646fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb646fu);
    X86_TICK(c, 9);
    // 0b646f  add esp, 4
    X86_AT(c, 0xb646fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6472  cmp bl, 1
    X86_AT(c, 0xb6472u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b6475  jne 0xb64a1
    X86_AT(c, 0xb6475u);
    if (x86_cc(c, 5)) { goto L_b64a1; }
    X86_TICK(c, 19);
    // 0b6477  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb6477u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b647a  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb647au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b647d  push edi
    X86_AT(c, 0xb647du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b647e  call 0xbc174
    X86_AT(c, 0xb647eu);
    push32(c, 0xb6483u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6483u);
    X86_TICK(c, 11);
    // 0b6483  push 0x1380
    X86_AT(c, 0xb6483u);
    { uint32_t v = 0x1380u; push32(c, v); }
    // 0b6488  push edi
    X86_AT(c, 0xb6488u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6489  call 0xba428
    X86_AT(c, 0xb6489u);
    push32(c, 0xb648eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xb648eu);
    X86_TICK(c, 9);
    // 0b648e  push edi
    X86_AT(c, 0xb648eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b648f  call 0xbbb5c
    X86_AT(c, 0xb648fu);
    push32(c, 0xb6494u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6494u);
    X86_TICK(c, 11);
    // 0b6494  mov eax, 0xffffffff
    X86_AT(c, 0xb6494u);
    c.r[0] = 0xFFFFFFFFu;
    // 0b6499  add esp, 0x18
    X86_AT(c, 0xb6499u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0b649c  jmp 0xb65f0
    X86_AT(c, 0xb649cu);
    goto L_b65f0;
L_b64a1:
    X86_TICK(c, 7);
    // 0b64a1  cmp bl, 3
    X86_AT(c, 0xb64a1u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0b64a4  jne 0xb64d5
    X86_AT(c, 0xb64a4u);
    if (x86_cc(c, 5)) { goto L_b64d5; }
    X86_TICK(c, 7);
    // 0b64a6  and esi, esi
    X86_AT(c, 0xb64a6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0b64a8  jne 0xb64b6
    X86_AT(c, 0xb64a8u);
    if (x86_cc(c, 5)) { goto L_b64b6; }
L_b64aa:
    X86_TICK(c, 9);
    // 0b64aa  push 1
    X86_AT(c, 0xb64aau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b64ac  call 0xb607c
    X86_AT(c, 0xb64acu);
    push32(c, 0xb64b1u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb64b1u);
    X86_TICK(c, 9);
    // 0b64b1  add esp, 4
    X86_AT(c, 0xb64b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b64b4  jmp 0xb643c
    X86_AT(c, 0xb64b4u);
    X86_POLL(c, 0xb643cu); goto L_b643c;
L_b64b6:
    X86_TICK(c, 11);
    // 0b64b6  push 0x1396
    X86_AT(c, 0xb64b6u);
    { uint32_t v = 0x1396u; push32(c, v); }
    // 0b64bb  push edi
    X86_AT(c, 0xb64bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b64bc  call 0xbbba4
    X86_AT(c, 0xb64bcu);
    push32(c, 0xb64c1u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb64c1u);
    X86_TICK(c, 24);
    // 0b64c1  dec esi
    X86_AT(c, 0xb64c1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0b64c2  mov byte ptr [ebp + esi*1 - 8], 0
    X86_AT(c, 0xb64c2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFF8u)), 0x0u);
    // 0b64c7  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb64c7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b64ca  lea eax, [esi + esi*1]
    X86_AT(c, 0xb64cau);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6]);
    // 0b64cd  add eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb64cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0b64d0  jmp 0xb65ad
    X86_AT(c, 0xb64d0u);
    goto L_b65ad;
L_b64d5:
    X86_TICK(c, 7);
    // 0b64d5  cmp bl, 4
    X86_AT(c, 0xb64d5u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0b64d8  je 0xb65bc
    X86_AT(c, 0xb64d8u);
    if (x86_cc(c, 4)) { goto L_b65bc; }
    X86_TICK(c, 9);
    // 0b64de  mov edx, esi
    X86_AT(c, 0xb64deu);
    c.r[2] = c.r[6];
    // 0b64e0  cmp edx, 4
    X86_AT(c, 0xb64e0u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0b64e3  ja 0xb643c
    X86_AT(c, 0xb64e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xb643cu); goto L_b643c; }
    X86_TICK(c, 7);
    // 0b64e9  jmp dword ptr cs:[edx*4 + 0xb64f1]
    X86_AT(c, 0xb64e9u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB64F1u)));
      switch (t) {
      case 0xb6505u: goto L_b6505;
      case 0xb6542u: goto L_b6542;
      case 0xb655fu: goto L_b655f;
      case 0xb657cu: goto L_b657c;
      case 0xb6599u: goto L_b6599;
      default: x86_jump(c, t); return; } }
L_b6505:
    X86_TICK(c, 7);
    // 0b6505  cmp bl, 0x30
    X86_AT(c, 0xb6505u);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0b6508  jne 0xb6525
    X86_AT(c, 0xb6508u);
    if (x86_cc(c, 5)) { goto L_b6525; }
    X86_TICK(c, 19);
    // 0b650a  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb650au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b650d  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb650du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b6510  push edi
    X86_AT(c, 0xb6510u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6511  call 0xbc174
    X86_AT(c, 0xb6511u);
    push32(c, 0xb6516u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6516u);
    X86_TICK(c, 9);
    // 0b6516  push 1
    X86_AT(c, 0xb6516u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b6518  call 0xb607c
    X86_AT(c, 0xb6518u);
    push32(c, 0xb651du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb651du);
    X86_TICK(c, 9);
    // 0b651d  add esp, 0x10
    X86_AT(c, 0xb651du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b6520  jmp 0xb643c
    X86_AT(c, 0xb6520u);
    X86_POLL(c, 0xb643cu); goto L_b643c;
L_b6525:
    X86_TICK(c, 22);
    // 0b6525  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb6525u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b6528  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb6528u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b652b  add eax, 2
    X86_AT(c, 0xb652bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0b652e  push eax
    X86_AT(c, 0xb652eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b652f  push edi
    X86_AT(c, 0xb652fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6530  call 0xbc174
    X86_AT(c, 0xb6530u);
    push32(c, 0xb6535u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6535u);
    X86_TICK(c, 11);
    // 0b6535  mov byte ptr [ebp - 8], bl
    X86_AT(c, 0xb6535u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 3));
    // 0b6538  mov esi, 1
    X86_AT(c, 0xb6538u);
    c.r[6] = 0x1u;
    // 0b653d  jmp 0xb6439
    X86_AT(c, 0xb653du);
    X86_POLL(c, 0xb6439u); goto L_b6439;
L_b6542:
    X86_TICK(c, 22);
    // 0b6542  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb6542u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b6545  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb6545u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b6548  add eax, 4
    X86_AT(c, 0xb6548u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b654b  push eax
    X86_AT(c, 0xb654bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b654c  push edi
    X86_AT(c, 0xb654cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b654d  call 0xbc174
    X86_AT(c, 0xb654du);
    push32(c, 0xb6552u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6552u);
    X86_TICK(c, 11);
    // 0b6552  mov byte ptr [ebp - 7], bl
    X86_AT(c, 0xb6552u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 3));
    // 0b6555  mov esi, 2
    X86_AT(c, 0xb6555u);
    c.r[6] = 0x2u;
    // 0b655a  jmp 0xb6439
    X86_AT(c, 0xb655au);
    X86_POLL(c, 0xb6439u); goto L_b6439;
L_b655f:
    X86_TICK(c, 22);
    // 0b655f  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb655fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b6562  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb6562u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b6565  add eax, 6
    X86_AT(c, 0xb6565u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x6u, 0, 4); }
    // 0b6568  push eax
    X86_AT(c, 0xb6568u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6569  push edi
    X86_AT(c, 0xb6569u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b656a  call 0xbc174
    X86_AT(c, 0xb656au);
    push32(c, 0xb656fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb656fu);
    X86_TICK(c, 11);
    // 0b656f  mov byte ptr [ebp - 6], bl
    X86_AT(c, 0xb656fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 3));
    // 0b6572  mov esi, 3
    X86_AT(c, 0xb6572u);
    c.r[6] = 0x3u;
    // 0b6577  jmp 0xb6439
    X86_AT(c, 0xb6577u);
    X86_POLL(c, 0xb6439u); goto L_b6439;
L_b657c:
    X86_TICK(c, 22);
    // 0b657c  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb657cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b657f  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb657fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b6582  add eax, 8
    X86_AT(c, 0xb6582u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b6585  push eax
    X86_AT(c, 0xb6585u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6586  push edi
    X86_AT(c, 0xb6586u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6587  call 0xbc174
    X86_AT(c, 0xb6587u);
    push32(c, 0xb658cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb658cu);
    X86_TICK(c, 11);
    // 0b658c  mov byte ptr [ebp - 5], bl
    X86_AT(c, 0xb658cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 3));
    // 0b658f  mov esi, 4
    X86_AT(c, 0xb658fu);
    c.r[6] = 0x4u;
    // 0b6594  jmp 0xb6439
    X86_AT(c, 0xb6594u);
    X86_POLL(c, 0xb6439u); goto L_b6439;
L_b6599:
    X86_TICK(c, 11);
    // 0b6599  push 0x139a
    X86_AT(c, 0xb6599u);
    { uint32_t v = 0x139Au; push32(c, v); }
    // 0b659e  push edi
    X86_AT(c, 0xb659eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b659f  call 0xbbba4
    X86_AT(c, 0xb659fu);
    push32(c, 0xb65a4u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb65a4u);
    X86_TICK(c, 11);
    // 0b65a4  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb65a4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b65a7  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb65a7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b65aa  add eax, 8
    X86_AT(c, 0xb65aau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
L_b65ad:
    X86_TICK(c, 11);
    // 0b65ad  push eax
    X86_AT(c, 0xb65adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b65ae  push edi
    X86_AT(c, 0xb65aeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b65af  call 0xbc174
    X86_AT(c, 0xb65afu);
    push32(c, 0xb65b4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb65b4u);
    X86_TICK(c, 9);
    // 0b65b4  add esp, 0x14
    X86_AT(c, 0xb65b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0b65b7  jmp 0xb643c
    X86_AT(c, 0xb65b7u);
    X86_POLL(c, 0xb643cu); goto L_b643c;
L_b65bc:
    X86_TICK(c, 11);
    // 0b65bc  lea eax, [ebp - 8]
    X86_AT(c, 0xb65bcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b65bf  push eax
    X86_AT(c, 0xb65bfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b65c0  call 0xb9080
    X86_AT(c, 0xb65c0u);
    push32(c, 0xb65c5u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xb65c5u);
    X86_TICK(c, 21);
    // 0b65c5  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xb65c5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0b65c8  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xb65c8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0b65cb  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb65cbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b65ce  push edi
    X86_AT(c, 0xb65ceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b65cf  call 0xbc174
    X86_AT(c, 0xb65cfu);
    push32(c, 0xb65d4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb65d4u);
    X86_TICK(c, 16);
    // 0b65d4  push 4
    X86_AT(c, 0xb65d4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b65d6  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xb65d6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0b65d9  push edi
    X86_AT(c, 0xb65d9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b65da  call 0xba404
    X86_AT(c, 0xb65dau);
    push32(c, 0xb65dfu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xb65dfu);
    X86_TICK(c, 11);
    // 0b65df  push 0x139e
    X86_AT(c, 0xb65dfu);
    { uint32_t v = 0x139Eu; push32(c, v); }
    // 0b65e4  push edi
    X86_AT(c, 0xb65e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b65e5  call 0xbbba4
    X86_AT(c, 0xb65e5u);
    push32(c, 0xb65eau); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb65eau);
    X86_TICK(c, 6);
    // 0b65ea  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xb65eau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0b65ed  add esp, 0x24
    X86_AT(c, 0xb65edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_b65f0:
    X86_TICK(c, 28);
    // 0b65f0  pop edi
    X86_AT(c, 0xb65f0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b65f1  pop esi
    X86_AT(c, 0xb65f1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b65f2  pop ebx
    X86_AT(c, 0xb65f2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b65f3  leave 
    X86_AT(c, 0xb65f3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b65f4  ret 
    X86_AT(c, 0xb65f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb643cu, "ran off the end of a function");
}
void f_000b6644(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0b6644  push 0
    X86_AT(c, 0xb6644u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b6646  push 0xb
    X86_AT(c, 0xb6646u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0b6648  push 0xe
    X86_AT(c, 0xb6648u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b664a  push 0x13
    X86_AT(c, 0xb664au);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0b664c  push 0x1a
    X86_AT(c, 0xb664cu);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0b664e  push 0x146
    X86_AT(c, 0xb664eu);
    { uint32_t v = 0x146u; push32(c, v); }
    // 0b6653  push 0xd8
    X86_AT(c, 0xb6653u);
    { uint32_t v = 0xD8u; push32(c, v); }
    // 0b6658  push 0x40
    X86_AT(c, 0xb6658u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0b665a  push 0x18
    X86_AT(c, 0xb665au);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0b665c  push 0xe
    X86_AT(c, 0xb665cu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b665e  call 0xbb5cc
    X86_AT(c, 0xb665eu);
    push32(c, 0xb6663u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xb6663u);
    X86_TICK(c, 14);
    // 0b6663  mov dword ptr [0x46c5b], 1
    X86_AT(c, 0xb6663u);
    wr32((c.sbase[3] + (uint32_t)(0x46C5Bu)), 0x1u);
    // 0b666d  add esp, 0x28
    X86_AT(c, 0xb666du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0b6670  ret 
    X86_AT(c, 0xb6670u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb6644u, "ran off the end of a function");
}
void f_000b6674(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0b6674  push 0xe
    X86_AT(c, 0xb6674u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6676  call 0xbb710
    X86_AT(c, 0xb6676u);
    push32(c, 0xb667bu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xb667bu);
    X86_TICK(c, 12);
    // 0b667b  add esp, 4
    X86_AT(c, 0xb667bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b667e  ret 
    X86_AT(c, 0xb667eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb6674u, "ran off the end of a function");
}
void f_000b6680(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0b6680  push 0
    X86_AT(c, 0xb6680u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b6682  push 0xe
    X86_AT(c, 0xb6682u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6684  call 0xbba64
    X86_AT(c, 0xb6684u);
    push32(c, 0xb6689u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xb6689u);
    X86_TICK(c, 14);
    // 0b6689  mov word ptr [0x45edc], 0
    X86_AT(c, 0xb6689u);
    wr16((c.sbase[3] + (uint32_t)(0x45EDCu)), 0x0u);
    // 0b6692  add esp, 8
    X86_AT(c, 0xb6692u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b6695  ret 
    X86_AT(c, 0xb6695u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb6680u, "ran off the end of a function");
}
void f_000b6698(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0b6698  push ebp
    X86_AT(c, 0xb6698u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b6699  mov ebp, esp
    X86_AT(c, 0xb6699u);
    c.r[5] = c.r[4];
    // 0b669b  push esi
    X86_AT(c, 0xb669bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b669c  push edi
    X86_AT(c, 0xb669cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b669d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb669du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b66a0  cmp byte ptr [0x46c32], 0
    X86_AT(c, 0xb66a0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x46C32u))), 0x0u, 0, 1);
    // 0b66a7  jne 0xb67cb
    X86_AT(c, 0xb66a7u);
    if (x86_cc(c, 5)) { goto L_b67cb; }
    X86_TICK(c, 12);
    // 0b66ad  cmp dword ptr [0xa6134], 0
    X86_AT(c, 0xb66adu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x0u, 0, 4);
    // 0b66b4  je 0xb67cb
    X86_AT(c, 0xb66b4u);
    if (x86_cc(c, 4)) { goto L_b67cb; }
    X86_TICK(c, 9);
    // 0b66ba  push 0xe
    X86_AT(c, 0xb66bau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b66bc  call 0xbb6b0
    X86_AT(c, 0xb66bcu);
    push32(c, 0xb66c1u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb66c1u);
    X86_TICK(c, 13);
    // 0b66c1  push 1
    X86_AT(c, 0xb66c1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b66c3  push 2
    X86_AT(c, 0xb66c3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b66c5  push 0xe
    X86_AT(c, 0xb66c5u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b66c7  call 0xbc174
    X86_AT(c, 0xb66c7u);
    push32(c, 0xb66ccu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb66ccu);
    X86_TICK(c, 9);
    // 0b66cc  add esp, 0x10
    X86_AT(c, 0xb66ccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b66cf  cmp edi, 1
    X86_AT(c, 0xb66cfu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0b66d2  jne 0xb66e3
    X86_AT(c, 0xb66d2u);
    if (x86_cc(c, 5)) { goto L_b66e3; }
    X86_TICK(c, 11);
    // 0b66d4  push 0x13a4
    X86_AT(c, 0xb66d4u);
    { uint32_t v = 0x13A4u; push32(c, v); }
    // 0b66d9  push 0xe
    X86_AT(c, 0xb66d9u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b66db  call 0xbbba4
    X86_AT(c, 0xb66dbu);
    push32(c, 0xb66e0u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb66e0u);
    X86_TICK(c, 2);
    // 0b66e0  add esp, 8
    X86_AT(c, 0xb66e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_b66e3:
    X86_TICK(c, 13);
    // 0b66e3  push 1
    X86_AT(c, 0xb66e3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b66e5  push 6
    X86_AT(c, 0xb66e5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0b66e7  push 0xe
    X86_AT(c, 0xb66e7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b66e9  call 0xbc174
    X86_AT(c, 0xb66e9u);
    push32(c, 0xb66eeu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb66eeu);
    X86_TICK(c, 16);
    // 0b66ee  push 2
    X86_AT(c, 0xb66eeu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b66f0  push dword ptr [0xa4a76]
    X86_AT(c, 0xb66f0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0b66f6  push 0xe
    X86_AT(c, 0xb66f6u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b66f8  call 0xba404
    X86_AT(c, 0xb66f8u);
    push32(c, 0xb66fdu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xb66fdu);
    X86_TICK(c, 13);
    // 0b66fd  push 1
    X86_AT(c, 0xb66fdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b66ff  push 0xf
    X86_AT(c, 0xb66ffu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0b6701  push 0xe
    X86_AT(c, 0xb6701u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6703  call 0xbc174
    X86_AT(c, 0xb6703u);
    push32(c, 0xb6708u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6708u);
    X86_TICK(c, 16);
    // 0b6708  push 2
    X86_AT(c, 0xb6708u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b670a  push dword ptr [0xa4a7a]
    X86_AT(c, 0xb670au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0b6710  push 0xe
    X86_AT(c, 0xb6710u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6712  call 0xba404
    X86_AT(c, 0xb6712u);
    push32(c, 0xb6717u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xb6717u);
    X86_TICK(c, 13);
    // 0b6717  push 1
    X86_AT(c, 0xb6717u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b6719  push 0x14
    X86_AT(c, 0xb6719u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0b671b  push 0xe
    X86_AT(c, 0xb671bu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b671d  call 0xbc174
    X86_AT(c, 0xb671du);
    push32(c, 0xb6722u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6722u);
    X86_TICK(c, 21);
    // 0b6722  add esp, 0x3c
    X86_AT(c, 0xb6722u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b6725  push 2
    X86_AT(c, 0xb6725u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b6727  movzx eax, byte ptr [0x8cfe4]
    X86_AT(c, 0xb6727u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0x8CFE4u)));
    // 0b672e  push eax
    X86_AT(c, 0xb672eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b672f  push 0xe
    X86_AT(c, 0xb672fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6731  call 0xba404
    X86_AT(c, 0xb6731u);
    push32(c, 0xb6736u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xb6736u);
    X86_TICK(c, 9);
    // 0b6736  add esp, 0xc
    X86_AT(c, 0xb6736u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b6739  cmp edi, 1
    X86_AT(c, 0xb6739u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0b673c  jne 0xb67cb
    X86_AT(c, 0xb673cu);
    if (x86_cc(c, 5)) { goto L_b67cb; }
    X86_TICK(c, 11);
    // 0b6742  mov edx, dword ptr [0xa4a56]
    X86_AT(c, 0xb6742u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0b6748  cmp edx, 0xff
    X86_AT(c, 0xb6748u);
    (void)x86_sub(c, c.r[2], 0xFFu, 0, 4);
    // 0b674e  je 0xb6795
    X86_AT(c, 0xb674eu);
    if (x86_cc(c, 4)) { goto L_b6795; }
    X86_TICK(c, 7);
    // 0b6750  cmp edx, 0x80
    X86_AT(c, 0xb6750u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0b6756  je 0xb67a3
    X86_AT(c, 0xb6756u);
    if (x86_cc(c, 4)) { goto L_b67a3; }
    X86_TICK(c, 7);
    // 0b6758  cmp edx, 4
    X86_AT(c, 0xb6758u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0b675b  ja 0xb67a8
    X86_AT(c, 0xb675bu);
    if (x86_cc(c, 7)) { goto L_b67a8; }
    X86_TICK(c, 7);
    // 0b675d  jmp dword ptr cs:[edx*4 + 0xb6765]
    X86_AT(c, 0xb675du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB6765u)));
      switch (t) {
      case 0xb6779u: goto L_b6779;
      case 0xb6780u: goto L_b6780;
      case 0xb6787u: goto L_b6787;
      case 0xb678eu: goto L_b678e;
      case 0xb679cu: goto L_b679c;
      default: x86_jump(c, t); return; } }
L_b6779:
    X86_TICK(c, 9);
    // 0b6779  mov esi, 0x13bc
    X86_AT(c, 0xb6779u);
    c.r[6] = 0x13BCu;
    // 0b677e  jmp 0xb67a8
    X86_AT(c, 0xb677eu);
    goto L_b67a8;
L_b6780:
    X86_TICK(c, 9);
    // 0b6780  mov esi, 0x13d0
    X86_AT(c, 0xb6780u);
    c.r[6] = 0x13D0u;
    // 0b6785  jmp 0xb67a8
    X86_AT(c, 0xb6785u);
    goto L_b67a8;
L_b6787:
    X86_TICK(c, 9);
    // 0b6787  mov esi, 0x13dc
    X86_AT(c, 0xb6787u);
    c.r[6] = 0x13DCu;
    // 0b678c  jmp 0xb67a8
    X86_AT(c, 0xb678cu);
    goto L_b67a8;
L_b678e:
    X86_TICK(c, 9);
    // 0b678e  mov esi, 0x13f0
    X86_AT(c, 0xb678eu);
    c.r[6] = 0x13F0u;
    // 0b6793  jmp 0xb67a8
    X86_AT(c, 0xb6793u);
    goto L_b67a8;
L_b6795:
    X86_TICK(c, 9);
    // 0b6795  mov esi, 0x1400
    X86_AT(c, 0xb6795u);
    c.r[6] = 0x1400u;
    // 0b679a  jmp 0xb67a8
    X86_AT(c, 0xb679au);
    goto L_b67a8;
L_b679c:
    X86_TICK(c, 9);
    // 0b679c  mov esi, 0x1414
    X86_AT(c, 0xb679cu);
    c.r[6] = 0x1414u;
    // 0b67a1  jmp 0xb67a8
    X86_AT(c, 0xb67a1u);
    goto L_b67a8;
L_b67a3:
    X86_TICK(c, 2);
    // 0b67a3  mov esi, 0x1428
    X86_AT(c, 0xb67a3u);
    c.r[6] = 0x1428u;
L_b67a8:
    X86_TICK(c, 13);
    // 0b67a8  push 0
    X86_AT(c, 0xb67a8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b67aa  push 2
    X86_AT(c, 0xb67aau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b67ac  push 0xe
    X86_AT(c, 0xb67acu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b67ae  call 0xbc174
    X86_AT(c, 0xb67aeu);
    push32(c, 0xb67b3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb67b3u);
    X86_TICK(c, 11);
    // 0b67b3  push esi
    X86_AT(c, 0xb67b3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b67b4  push 0xe
    X86_AT(c, 0xb67b4u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b67b6  call 0xbbba4
    X86_AT(c, 0xb67b6u);
    push32(c, 0xb67bbu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb67bbu);
    X86_TICK(c, 15);
    // 0b67bb  movsx eax, word ptr [0x46204]
    X86_AT(c, 0xb67bbu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x46204u)));
    // 0b67c2  push eax
    X86_AT(c, 0xb67c2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b67c3  call 0xba68c
    X86_AT(c, 0xb67c3u);
    push32(c, 0xb67c8u); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xb67c8u);
    X86_TICK(c, 2);
    // 0b67c8  add esp, 0x18
    X86_AT(c, 0xb67c8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_b67cb:
    X86_TICK(c, 24);
    // 0b67cb  pop edi
    X86_AT(c, 0xb67cbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b67cc  pop esi
    X86_AT(c, 0xb67ccu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b67cd  leave 
    X86_AT(c, 0xb67cdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b67ce  ret 
    X86_AT(c, 0xb67ceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb6698u, "ran off the end of a function");
}
void f_000b67d0(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0b67d0  cmp word ptr [0x45660], 0
    X86_AT(c, 0xb67d0u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x45660u))), 0x0u, 0, 2);
    // 0b67d8  jne 0xb6c2a
    X86_AT(c, 0xb67d8u);
    if (x86_cc(c, 5)) { goto L_b6c2a; }
    X86_TICK(c, 13);
    // 0b67de  movsx edx, word ptr [0x45edc]
    X86_AT(c, 0xb67deu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x45EDCu)));
    // 0b67e5  cmp edx, 3
    X86_AT(c, 0xb67e5u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0b67e8  ja 0xb6c13
    X86_AT(c, 0xb67e8u);
    if (x86_cc(c, 7)) { goto L_b6c13; }
    X86_TICK(c, 7);
    // 0b67ee  jmp dword ptr cs:[edx*4 + 0xb67f6]
    X86_AT(c, 0xb67eeu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB67F6u)));
      switch (t) {
      case 0xb6806u: goto L_b6806;
      case 0xb693fu: goto L_b693f;
      case 0xb6aa2u: goto L_b6aa2;
      case 0xb6c0cu: goto L_b6c0c;
      default: x86_jump(c, t); return; } }
L_b6806:
    X86_TICK(c, 7);
    // 0b6806  call 0xb6674
    X86_AT(c, 0xb6806u);
    push32(c, 0xb680bu); x86_call_known(c, 0xb6674u, f_000b6674); X86_RET(c, 0xb680bu);
    X86_TICK(c, 9);
    // 0b680b  push 0xe
    X86_AT(c, 0xb680bu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b680d  call 0xbb9e4
    X86_AT(c, 0xb680du);
    push32(c, 0xb6812u); x86_call_known(c, 0xbb9e4u, f_000bb9e4); X86_RET(c, 0xb6812u);
    X86_TICK(c, 9);
    // 0b6812  push 1
    X86_AT(c, 0xb6812u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b6814  call 0xb6698
    X86_AT(c, 0xb6814u);
    push32(c, 0xb6819u); x86_call_known(c, 0xb6698u, f_000b6698); X86_RET(c, 0xb6819u);
    X86_TICK(c, 9);
    // 0b6819  push 0
    X86_AT(c, 0xb6819u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b681b  call 0xba68c
    X86_AT(c, 0xb681bu);
    push32(c, 0xb6820u); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xb6820u);
    X86_TICK(c, 13);
    // 0b6820  push 2
    X86_AT(c, 0xb6820u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b6822  push 0
    X86_AT(c, 0xb6822u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b6824  push 0xe
    X86_AT(c, 0xb6824u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6826  call 0xbc174
    X86_AT(c, 0xb6826u);
    push32(c, 0xb682bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb682bu);
    X86_TICK(c, 11);
    // 0b682b  push 0x1438
    X86_AT(c, 0xb682bu);
    { uint32_t v = 0x1438u; push32(c, v); }
    // 0b6830  push 0xe
    X86_AT(c, 0xb6830u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6832  call 0xbbba4
    X86_AT(c, 0xb6832u);
    push32(c, 0xb6837u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6837u);
    X86_TICK(c, 9);
    // 0b6837  push 0xe
    X86_AT(c, 0xb6837u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6839  call 0xbbb5c
    X86_AT(c, 0xb6839u);
    push32(c, 0xb683eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb683eu);
    X86_TICK(c, 11);
    // 0b683e  push 0x1454
    X86_AT(c, 0xb683eu);
    { uint32_t v = 0x1454u; push32(c, v); }
    // 0b6843  push 0xe
    X86_AT(c, 0xb6843u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6845  call 0xbbba4
    X86_AT(c, 0xb6845u);
    push32(c, 0xb684au); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb684au);
    X86_TICK(c, 9);
    // 0b684a  push 0xe
    X86_AT(c, 0xb684au);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b684c  call 0xbbb5c
    X86_AT(c, 0xb684cu);
    push32(c, 0xb6851u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6851u);
    X86_TICK(c, 11);
    // 0b6851  push 0x1470
    X86_AT(c, 0xb6851u);
    { uint32_t v = 0x1470u; push32(c, v); }
    // 0b6856  push 0xe
    X86_AT(c, 0xb6856u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6858  call 0xbbba4
    X86_AT(c, 0xb6858u);
    push32(c, 0xb685du); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb685du);
    X86_TICK(c, 9);
    // 0b685d  push 0xe
    X86_AT(c, 0xb685du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b685f  call 0xbbb5c
    X86_AT(c, 0xb685fu);
    push32(c, 0xb6864u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6864u);
    X86_TICK(c, 13);
    // 0b6864  add esp, 0x3c
    X86_AT(c, 0xb6864u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b6867  push 0x148c
    X86_AT(c, 0xb6867u);
    { uint32_t v = 0x148Cu; push32(c, v); }
    // 0b686c  push 0xe
    X86_AT(c, 0xb686cu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b686e  call 0xbbba4
    X86_AT(c, 0xb686eu);
    push32(c, 0xb6873u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6873u);
    X86_TICK(c, 9);
    // 0b6873  push 0xe
    X86_AT(c, 0xb6873u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6875  call 0xbbb5c
    X86_AT(c, 0xb6875u);
    push32(c, 0xb687au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb687au);
    X86_TICK(c, 11);
    // 0b687a  push 0x14a8
    X86_AT(c, 0xb687au);
    { uint32_t v = 0x14A8u; push32(c, v); }
    // 0b687f  push 0xe
    X86_AT(c, 0xb687fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6881  call 0xbbba4
    X86_AT(c, 0xb6881u);
    push32(c, 0xb6886u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6886u);
    X86_TICK(c, 9);
    // 0b6886  push 0xe
    X86_AT(c, 0xb6886u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6888  call 0xbbb5c
    X86_AT(c, 0xb6888u);
    push32(c, 0xb688du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb688du);
    X86_TICK(c, 11);
    // 0b688d  push 0x14c4
    X86_AT(c, 0xb688du);
    { uint32_t v = 0x14C4u; push32(c, v); }
    // 0b6892  push 0xe
    X86_AT(c, 0xb6892u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6894  call 0xbbba4
    X86_AT(c, 0xb6894u);
    push32(c, 0xb6899u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6899u);
    X86_TICK(c, 9);
    // 0b6899  push 0xe
    X86_AT(c, 0xb6899u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b689b  call 0xbbb5c
    X86_AT(c, 0xb689bu);
    push32(c, 0xb68a0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb68a0u);
    X86_TICK(c, 11);
    // 0b68a0  push 0x14e0
    X86_AT(c, 0xb68a0u);
    { uint32_t v = 0x14E0u; push32(c, v); }
    // 0b68a5  push 0xe
    X86_AT(c, 0xb68a5u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b68a7  call 0xbbba4
    X86_AT(c, 0xb68a7u);
    push32(c, 0xb68acu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb68acu);
    X86_TICK(c, 9);
    // 0b68ac  push 0xe
    X86_AT(c, 0xb68acu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b68ae  call 0xbbb5c
    X86_AT(c, 0xb68aeu);
    push32(c, 0xb68b3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb68b3u);
    X86_TICK(c, 11);
    // 0b68b3  push 0x14fc
    X86_AT(c, 0xb68b3u);
    { uint32_t v = 0x14FCu; push32(c, v); }
    // 0b68b8  push 0xe
    X86_AT(c, 0xb68b8u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b68ba  call 0xbbba4
    X86_AT(c, 0xb68bau);
    push32(c, 0xb68bfu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb68bfu);
    X86_TICK(c, 11);
    // 0b68bf  add esp, 0x38
    X86_AT(c, 0xb68bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0b68c2  push 0xe
    X86_AT(c, 0xb68c2u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b68c4  call 0xbbb5c
    X86_AT(c, 0xb68c4u);
    push32(c, 0xb68c9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb68c9u);
    X86_TICK(c, 11);
    // 0b68c9  push 0x1518
    X86_AT(c, 0xb68c9u);
    { uint32_t v = 0x1518u; push32(c, v); }
    // 0b68ce  push 0xe
    X86_AT(c, 0xb68ceu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b68d0  call 0xbbba4
    X86_AT(c, 0xb68d0u);
    push32(c, 0xb68d5u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb68d5u);
    X86_TICK(c, 9);
    // 0b68d5  push 0xe
    X86_AT(c, 0xb68d5u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b68d7  call 0xbbb5c
    X86_AT(c, 0xb68d7u);
    push32(c, 0xb68dcu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb68dcu);
    X86_TICK(c, 11);
    // 0b68dc  push 0x1534
    X86_AT(c, 0xb68dcu);
    { uint32_t v = 0x1534u; push32(c, v); }
    // 0b68e1  push 0xe
    X86_AT(c, 0xb68e1u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b68e3  call 0xbbba4
    X86_AT(c, 0xb68e3u);
    push32(c, 0xb68e8u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb68e8u);
    X86_TICK(c, 9);
    // 0b68e8  push 0xe
    X86_AT(c, 0xb68e8u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b68ea  call 0xbbb5c
    X86_AT(c, 0xb68eau);
    push32(c, 0xb68efu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb68efu);
    X86_TICK(c, 11);
    // 0b68ef  push 0x1550
    X86_AT(c, 0xb68efu);
    { uint32_t v = 0x1550u; push32(c, v); }
    // 0b68f4  push 0xe
    X86_AT(c, 0xb68f4u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b68f6  call 0xbbba4
    X86_AT(c, 0xb68f6u);
    push32(c, 0xb68fbu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb68fbu);
    X86_TICK(c, 9);
    // 0b68fb  push 0xe
    X86_AT(c, 0xb68fbu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b68fd  call 0xbbb5c
    X86_AT(c, 0xb68fdu);
    push32(c, 0xb6902u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6902u);
    X86_TICK(c, 11);
    // 0b6902  push 0x156c
    X86_AT(c, 0xb6902u);
    { uint32_t v = 0x156Cu; push32(c, v); }
    // 0b6907  push 0xe
    X86_AT(c, 0xb6907u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6909  call 0xbbba4
    X86_AT(c, 0xb6909u);
    push32(c, 0xb690eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb690eu);
    X86_TICK(c, 9);
    // 0b690e  push 0xe
    X86_AT(c, 0xb690eu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6910  call 0xbbb5c
    X86_AT(c, 0xb6910u);
    push32(c, 0xb6915u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6915u);
    X86_TICK(c, 11);
    // 0b6915  push 0x1588
    X86_AT(c, 0xb6915u);
    { uint32_t v = 0x1588u; push32(c, v); }
    // 0b691a  push 0xe
    X86_AT(c, 0xb691au);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b691c  call 0xbbba4
    X86_AT(c, 0xb691cu);
    push32(c, 0xb6921u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6921u);
    X86_TICK(c, 11);
    // 0b6921  add esp, 0x3c
    X86_AT(c, 0xb6921u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b6924  push 0xe
    X86_AT(c, 0xb6924u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6926  call 0xbbb5c
    X86_AT(c, 0xb6926u);
    push32(c, 0xb692bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb692bu);
    X86_TICK(c, 11);
    // 0b692b  push 0x15a4
    X86_AT(c, 0xb692bu);
    { uint32_t v = 0x15A4u; push32(c, v); }
    // 0b6930  push 0xe
    X86_AT(c, 0xb6930u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6932  call 0xbbba4
    X86_AT(c, 0xb6932u);
    push32(c, 0xb6937u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6937u);
    X86_TICK(c, 9);
    // 0b6937  add esp, 0xc
    X86_AT(c, 0xb6937u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b693a  jmp 0xb6c13
    X86_AT(c, 0xb693au);
    goto L_b6c13;
L_b693f:
    X86_TICK(c, 9);
    // 0b693f  push 0xe
    X86_AT(c, 0xb693fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6941  call 0xbb9e4
    X86_AT(c, 0xb6941u);
    push32(c, 0xb6946u); x86_call_known(c, 0xbb9e4u, f_000bb9e4); X86_RET(c, 0xb6946u);
    X86_TICK(c, 9);
    // 0b6946  push 1
    X86_AT(c, 0xb6946u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b6948  call 0xb6698
    X86_AT(c, 0xb6948u);
    push32(c, 0xb694du); x86_call_known(c, 0xb6698u, f_000b6698); X86_RET(c, 0xb694du);
    X86_TICK(c, 9);
    // 0b694d  push 0
    X86_AT(c, 0xb694du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b694f  call 0xba68c
    X86_AT(c, 0xb694fu);
    push32(c, 0xb6954u); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xb6954u);
    X86_TICK(c, 13);
    // 0b6954  push 2
    X86_AT(c, 0xb6954u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b6956  push 0
    X86_AT(c, 0xb6956u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b6958  push 0xe
    X86_AT(c, 0xb6958u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b695a  call 0xbc174
    X86_AT(c, 0xb695au);
    push32(c, 0xb695fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb695fu);
    X86_TICK(c, 11);
    // 0b695f  push 0x15c0
    X86_AT(c, 0xb695fu);
    { uint32_t v = 0x15C0u; push32(c, v); }
    // 0b6964  push 0xe
    X86_AT(c, 0xb6964u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6966  call 0xbbba4
    X86_AT(c, 0xb6966u);
    push32(c, 0xb696bu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb696bu);
    X86_TICK(c, 9);
    // 0b696b  push 0xe
    X86_AT(c, 0xb696bu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b696d  call 0xbbb5c
    X86_AT(c, 0xb696du);
    push32(c, 0xb6972u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6972u);
    X86_TICK(c, 11);
    // 0b6972  push 0x15dc
    X86_AT(c, 0xb6972u);
    { uint32_t v = 0x15DCu; push32(c, v); }
    // 0b6977  push 0xe
    X86_AT(c, 0xb6977u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6979  call 0xbbba4
    X86_AT(c, 0xb6979u);
    push32(c, 0xb697eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb697eu);
    X86_TICK(c, 9);
    // 0b697e  push 0xe
    X86_AT(c, 0xb697eu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6980  call 0xbbb5c
    X86_AT(c, 0xb6980u);
    push32(c, 0xb6985u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6985u);
    X86_TICK(c, 11);
    // 0b6985  push 0x15f8
    X86_AT(c, 0xb6985u);
    { uint32_t v = 0x15F8u; push32(c, v); }
    // 0b698a  push 0xe
    X86_AT(c, 0xb698au);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b698c  call 0xbbba4
    X86_AT(c, 0xb698cu);
    push32(c, 0xb6991u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6991u);
    X86_TICK(c, 9);
    // 0b6991  push 0xe
    X86_AT(c, 0xb6991u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6993  call 0xbbb5c
    X86_AT(c, 0xb6993u);
    push32(c, 0xb6998u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6998u);
    X86_TICK(c, 13);
    // 0b6998  add esp, 0x3c
    X86_AT(c, 0xb6998u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b699b  push 0x1614
    X86_AT(c, 0xb699bu);
    { uint32_t v = 0x1614u; push32(c, v); }
    // 0b69a0  push 0xe
    X86_AT(c, 0xb69a0u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b69a2  call 0xbbba4
    X86_AT(c, 0xb69a2u);
    push32(c, 0xb69a7u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb69a7u);
    X86_TICK(c, 9);
    // 0b69a7  push 0xe
    X86_AT(c, 0xb69a7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b69a9  call 0xbbb5c
    X86_AT(c, 0xb69a9u);
    push32(c, 0xb69aeu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb69aeu);
    X86_TICK(c, 11);
    // 0b69ae  push 0x1630
    X86_AT(c, 0xb69aeu);
    { uint32_t v = 0x1630u; push32(c, v); }
    // 0b69b3  push 0xe
    X86_AT(c, 0xb69b3u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b69b5  call 0xbbba4
    X86_AT(c, 0xb69b5u);
    push32(c, 0xb69bau); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb69bau);
    X86_TICK(c, 9);
    // 0b69ba  push 0xe
    X86_AT(c, 0xb69bau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b69bc  call 0xbbb5c
    X86_AT(c, 0xb69bcu);
    push32(c, 0xb69c1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb69c1u);
    X86_TICK(c, 11);
    // 0b69c1  push 0x164c
    X86_AT(c, 0xb69c1u);
    { uint32_t v = 0x164Cu; push32(c, v); }
    // 0b69c6  push 0xe
    X86_AT(c, 0xb69c6u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b69c8  call 0xbbba4
    X86_AT(c, 0xb69c8u);
    push32(c, 0xb69cdu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb69cdu);
    X86_TICK(c, 9);
    // 0b69cd  push 0xe
    X86_AT(c, 0xb69cdu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b69cf  call 0xbbb5c
    X86_AT(c, 0xb69cfu);
    push32(c, 0xb69d4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb69d4u);
    X86_TICK(c, 11);
    // 0b69d4  push 0x1668
    X86_AT(c, 0xb69d4u);
    { uint32_t v = 0x1668u; push32(c, v); }
    // 0b69d9  push 0xe
    X86_AT(c, 0xb69d9u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b69db  call 0xbbba4
    X86_AT(c, 0xb69dbu);
    push32(c, 0xb69e0u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb69e0u);
    X86_TICK(c, 9);
    // 0b69e0  push 0xe
    X86_AT(c, 0xb69e0u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b69e2  call 0xbbb5c
    X86_AT(c, 0xb69e2u);
    push32(c, 0xb69e7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb69e7u);
    X86_TICK(c, 11);
    // 0b69e7  push 0x1684
    X86_AT(c, 0xb69e7u);
    { uint32_t v = 0x1684u; push32(c, v); }
    // 0b69ec  push 0xe
    X86_AT(c, 0xb69ecu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b69ee  call 0xbbba4
    X86_AT(c, 0xb69eeu);
    push32(c, 0xb69f3u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb69f3u);
    X86_TICK(c, 9);
    // 0b69f3  push 0xe
    X86_AT(c, 0xb69f3u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b69f5  call 0xbbb5c
    X86_AT(c, 0xb69f5u);
    push32(c, 0xb69fau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb69fau);
    X86_TICK(c, 13);
    // 0b69fa  add esp, 0x3c
    X86_AT(c, 0xb69fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b69fd  push 0x16a0
    X86_AT(c, 0xb69fdu);
    { uint32_t v = 0x16A0u; push32(c, v); }
    // 0b6a02  push 0xe
    X86_AT(c, 0xb6a02u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a04  call 0xbbba4
    X86_AT(c, 0xb6a04u);
    push32(c, 0xb6a09u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6a09u);
    X86_TICK(c, 9);
    // 0b6a09  push 0xe
    X86_AT(c, 0xb6a09u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a0b  call 0xbbb5c
    X86_AT(c, 0xb6a0bu);
    push32(c, 0xb6a10u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6a10u);
    X86_TICK(c, 11);
    // 0b6a10  push 0x16bc
    X86_AT(c, 0xb6a10u);
    { uint32_t v = 0x16BCu; push32(c, v); }
    // 0b6a15  push 0xe
    X86_AT(c, 0xb6a15u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a17  call 0xbbba4
    X86_AT(c, 0xb6a17u);
    push32(c, 0xb6a1cu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6a1cu);
    X86_TICK(c, 9);
    // 0b6a1c  push 0xe
    X86_AT(c, 0xb6a1cu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a1e  call 0xbbb5c
    X86_AT(c, 0xb6a1eu);
    push32(c, 0xb6a23u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6a23u);
    X86_TICK(c, 11);
    // 0b6a23  push 0x16d8
    X86_AT(c, 0xb6a23u);
    { uint32_t v = 0x16D8u; push32(c, v); }
    // 0b6a28  push 0xe
    X86_AT(c, 0xb6a28u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a2a  call 0xbbba4
    X86_AT(c, 0xb6a2au);
    push32(c, 0xb6a2fu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6a2fu);
    X86_TICK(c, 9);
    // 0b6a2f  push 0xe
    X86_AT(c, 0xb6a2fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a31  call 0xbbb5c
    X86_AT(c, 0xb6a31u);
    push32(c, 0xb6a36u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6a36u);
    X86_TICK(c, 11);
    // 0b6a36  push 0x16f4
    X86_AT(c, 0xb6a36u);
    { uint32_t v = 0x16F4u; push32(c, v); }
    // 0b6a3b  push 0xe
    X86_AT(c, 0xb6a3bu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a3d  call 0xbbba4
    X86_AT(c, 0xb6a3du);
    push32(c, 0xb6a42u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6a42u);
    X86_TICK(c, 9);
    // 0b6a42  push 0xe
    X86_AT(c, 0xb6a42u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a44  call 0xbbb5c
    X86_AT(c, 0xb6a44u);
    push32(c, 0xb6a49u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6a49u);
    X86_TICK(c, 11);
    // 0b6a49  push 0x1710
    X86_AT(c, 0xb6a49u);
    { uint32_t v = 0x1710u; push32(c, v); }
    // 0b6a4e  push 0xe
    X86_AT(c, 0xb6a4eu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a50  call 0xbbba4
    X86_AT(c, 0xb6a50u);
    push32(c, 0xb6a55u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6a55u);
    X86_TICK(c, 9);
    // 0b6a55  push 0xe
    X86_AT(c, 0xb6a55u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a57  call 0xbbb5c
    X86_AT(c, 0xb6a57u);
    push32(c, 0xb6a5cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6a5cu);
    X86_TICK(c, 13);
    // 0b6a5c  add esp, 0x3c
    X86_AT(c, 0xb6a5cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b6a5f  push 0x172c
    X86_AT(c, 0xb6a5fu);
    { uint32_t v = 0x172Cu; push32(c, v); }
    // 0b6a64  push 0xe
    X86_AT(c, 0xb6a64u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a66  call 0xbbba4
    X86_AT(c, 0xb6a66u);
    push32(c, 0xb6a6bu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6a6bu);
    X86_TICK(c, 9);
    // 0b6a6b  push 0xe
    X86_AT(c, 0xb6a6bu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a6d  call 0xbbb5c
    X86_AT(c, 0xb6a6du);
    push32(c, 0xb6a72u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6a72u);
    X86_TICK(c, 11);
    // 0b6a72  push 0x1748
    X86_AT(c, 0xb6a72u);
    { uint32_t v = 0x1748u; push32(c, v); }
    // 0b6a77  push 0xe
    X86_AT(c, 0xb6a77u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a79  call 0xbbba4
    X86_AT(c, 0xb6a79u);
    push32(c, 0xb6a7eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6a7eu);
    X86_TICK(c, 9);
    // 0b6a7e  push 0xe
    X86_AT(c, 0xb6a7eu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a80  call 0xbbb5c
    X86_AT(c, 0xb6a80u);
    push32(c, 0xb6a85u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6a85u);
    X86_TICK(c, 11);
    // 0b6a85  push 0x1764
    X86_AT(c, 0xb6a85u);
    { uint32_t v = 0x1764u; push32(c, v); }
    // 0b6a8a  push 0xe
    X86_AT(c, 0xb6a8au);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a8c  call 0xbbba4
    X86_AT(c, 0xb6a8cu);
    push32(c, 0xb6a91u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6a91u);
    X86_TICK(c, 9);
    // 0b6a91  push 0xe
    X86_AT(c, 0xb6a91u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6a93  call 0xbbb5c
    X86_AT(c, 0xb6a93u);
    push32(c, 0xb6a98u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6a98u);
    X86_TICK(c, 9);
    // 0b6a98  push 0x1780
    X86_AT(c, 0xb6a98u);
    { uint32_t v = 0x1780u; push32(c, v); }
    // 0b6a9d  jmp 0xb6c00
    X86_AT(c, 0xb6a9du);
    goto L_b6c00;
L_b6aa2:
    X86_TICK(c, 9);
    // 0b6aa2  push 0xe
    X86_AT(c, 0xb6aa2u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6aa4  call 0xbb9e4
    X86_AT(c, 0xb6aa4u);
    push32(c, 0xb6aa9u); x86_call_known(c, 0xbb9e4u, f_000bb9e4); X86_RET(c, 0xb6aa9u);
    X86_TICK(c, 9);
    // 0b6aa9  push 1
    X86_AT(c, 0xb6aa9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b6aab  call 0xb6698
    X86_AT(c, 0xb6aabu);
    push32(c, 0xb6ab0u); x86_call_known(c, 0xb6698u, f_000b6698); X86_RET(c, 0xb6ab0u);
    X86_TICK(c, 9);
    // 0b6ab0  push 0
    X86_AT(c, 0xb6ab0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b6ab2  call 0xba68c
    X86_AT(c, 0xb6ab2u);
    push32(c, 0xb6ab7u); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xb6ab7u);
    X86_TICK(c, 13);
    // 0b6ab7  push 2
    X86_AT(c, 0xb6ab7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b6ab9  push 0
    X86_AT(c, 0xb6ab9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b6abb  push 0xe
    X86_AT(c, 0xb6abbu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6abd  call 0xbc174
    X86_AT(c, 0xb6abdu);
    push32(c, 0xb6ac2u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6ac2u);
    X86_TICK(c, 11);
    // 0b6ac2  push 0x179c
    X86_AT(c, 0xb6ac2u);
    { uint32_t v = 0x179Cu; push32(c, v); }
    // 0b6ac7  push 0xe
    X86_AT(c, 0xb6ac7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6ac9  call 0xbbba4
    X86_AT(c, 0xb6ac9u);
    push32(c, 0xb6aceu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6aceu);
    X86_TICK(c, 9);
    // 0b6ace  push 0xe
    X86_AT(c, 0xb6aceu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6ad0  call 0xbbb5c
    X86_AT(c, 0xb6ad0u);
    push32(c, 0xb6ad5u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6ad5u);
    X86_TICK(c, 11);
    // 0b6ad5  push 0x17b8
    X86_AT(c, 0xb6ad5u);
    { uint32_t v = 0x17B8u; push32(c, v); }
    // 0b6ada  push 0xe
    X86_AT(c, 0xb6adau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6adc  call 0xbbba4
    X86_AT(c, 0xb6adcu);
    push32(c, 0xb6ae1u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6ae1u);
    X86_TICK(c, 9);
    // 0b6ae1  push 0xe
    X86_AT(c, 0xb6ae1u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6ae3  call 0xbbb5c
    X86_AT(c, 0xb6ae3u);
    push32(c, 0xb6ae8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6ae8u);
    X86_TICK(c, 11);
    // 0b6ae8  push 0x17d4
    X86_AT(c, 0xb6ae8u);
    { uint32_t v = 0x17D4u; push32(c, v); }
    // 0b6aed  push 0xe
    X86_AT(c, 0xb6aedu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6aef  call 0xbbba4
    X86_AT(c, 0xb6aefu);
    push32(c, 0xb6af4u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6af4u);
    X86_TICK(c, 9);
    // 0b6af4  push 0xe
    X86_AT(c, 0xb6af4u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6af6  call 0xbbb5c
    X86_AT(c, 0xb6af6u);
    push32(c, 0xb6afbu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6afbu);
    X86_TICK(c, 13);
    // 0b6afb  add esp, 0x3c
    X86_AT(c, 0xb6afbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b6afe  push 0x17f0
    X86_AT(c, 0xb6afeu);
    { uint32_t v = 0x17F0u; push32(c, v); }
    // 0b6b03  push 0xe
    X86_AT(c, 0xb6b03u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b05  call 0xbbba4
    X86_AT(c, 0xb6b05u);
    push32(c, 0xb6b0au); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6b0au);
    X86_TICK(c, 9);
    // 0b6b0a  push 0xe
    X86_AT(c, 0xb6b0au);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b0c  call 0xbbb5c
    X86_AT(c, 0xb6b0cu);
    push32(c, 0xb6b11u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6b11u);
    X86_TICK(c, 11);
    // 0b6b11  push 0x180c
    X86_AT(c, 0xb6b11u);
    { uint32_t v = 0x180Cu; push32(c, v); }
    // 0b6b16  push 0xe
    X86_AT(c, 0xb6b16u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b18  call 0xbbba4
    X86_AT(c, 0xb6b18u);
    push32(c, 0xb6b1du); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6b1du);
    X86_TICK(c, 9);
    // 0b6b1d  push 0xe
    X86_AT(c, 0xb6b1du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b1f  call 0xbbb5c
    X86_AT(c, 0xb6b1fu);
    push32(c, 0xb6b24u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6b24u);
    X86_TICK(c, 11);
    // 0b6b24  push 0x1828
    X86_AT(c, 0xb6b24u);
    { uint32_t v = 0x1828u; push32(c, v); }
    // 0b6b29  push 0xe
    X86_AT(c, 0xb6b29u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b2b  call 0xbbba4
    X86_AT(c, 0xb6b2bu);
    push32(c, 0xb6b30u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6b30u);
    X86_TICK(c, 9);
    // 0b6b30  push 0xe
    X86_AT(c, 0xb6b30u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b32  call 0xbbb5c
    X86_AT(c, 0xb6b32u);
    push32(c, 0xb6b37u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6b37u);
    X86_TICK(c, 11);
    // 0b6b37  push 0x1844
    X86_AT(c, 0xb6b37u);
    { uint32_t v = 0x1844u; push32(c, v); }
    // 0b6b3c  push 0xe
    X86_AT(c, 0xb6b3cu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b3e  call 0xbbba4
    X86_AT(c, 0xb6b3eu);
    push32(c, 0xb6b43u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6b43u);
    X86_TICK(c, 9);
    // 0b6b43  push 0xe
    X86_AT(c, 0xb6b43u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b45  call 0xbbb5c
    X86_AT(c, 0xb6b45u);
    push32(c, 0xb6b4au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6b4au);
    X86_TICK(c, 11);
    // 0b6b4a  push 0x1860
    X86_AT(c, 0xb6b4au);
    { uint32_t v = 0x1860u; push32(c, v); }
    // 0b6b4f  push 0xe
    X86_AT(c, 0xb6b4fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b51  call 0xbbba4
    X86_AT(c, 0xb6b51u);
    push32(c, 0xb6b56u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6b56u);
    X86_TICK(c, 9);
    // 0b6b56  push 0xe
    X86_AT(c, 0xb6b56u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b58  call 0xbbb5c
    X86_AT(c, 0xb6b58u);
    push32(c, 0xb6b5du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6b5du);
    X86_TICK(c, 13);
    // 0b6b5d  add esp, 0x3c
    X86_AT(c, 0xb6b5du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b6b60  push 0x187c
    X86_AT(c, 0xb6b60u);
    { uint32_t v = 0x187Cu; push32(c, v); }
    // 0b6b65  push 0xe
    X86_AT(c, 0xb6b65u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b67  call 0xbbba4
    X86_AT(c, 0xb6b67u);
    push32(c, 0xb6b6cu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6b6cu);
    X86_TICK(c, 9);
    // 0b6b6c  push 0xe
    X86_AT(c, 0xb6b6cu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b6e  call 0xbbb5c
    X86_AT(c, 0xb6b6eu);
    push32(c, 0xb6b73u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6b73u);
    X86_TICK(c, 11);
    // 0b6b73  push 0x1898
    X86_AT(c, 0xb6b73u);
    { uint32_t v = 0x1898u; push32(c, v); }
    // 0b6b78  push 0xe
    X86_AT(c, 0xb6b78u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b7a  call 0xbbba4
    X86_AT(c, 0xb6b7au);
    push32(c, 0xb6b7fu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6b7fu);
    X86_TICK(c, 9);
    // 0b6b7f  push 0xe
    X86_AT(c, 0xb6b7fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b81  call 0xbbb5c
    X86_AT(c, 0xb6b81u);
    push32(c, 0xb6b86u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6b86u);
    X86_TICK(c, 11);
    // 0b6b86  push 0x18b4
    X86_AT(c, 0xb6b86u);
    { uint32_t v = 0x18B4u; push32(c, v); }
    // 0b6b8b  push 0xe
    X86_AT(c, 0xb6b8bu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b8d  call 0xbbba4
    X86_AT(c, 0xb6b8du);
    push32(c, 0xb6b92u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6b92u);
    X86_TICK(c, 9);
    // 0b6b92  push 0xe
    X86_AT(c, 0xb6b92u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6b94  call 0xbbb5c
    X86_AT(c, 0xb6b94u);
    push32(c, 0xb6b99u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6b99u);
    X86_TICK(c, 11);
    // 0b6b99  push 0x18d0
    X86_AT(c, 0xb6b99u);
    { uint32_t v = 0x18D0u; push32(c, v); }
    // 0b6b9e  push 0xe
    X86_AT(c, 0xb6b9eu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6ba0  call 0xbbba4
    X86_AT(c, 0xb6ba0u);
    push32(c, 0xb6ba5u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6ba5u);
    X86_TICK(c, 9);
    // 0b6ba5  push 0xe
    X86_AT(c, 0xb6ba5u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6ba7  call 0xbbb5c
    X86_AT(c, 0xb6ba7u);
    push32(c, 0xb6bacu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6bacu);
    X86_TICK(c, 11);
    // 0b6bac  push 0x18ec
    X86_AT(c, 0xb6bacu);
    { uint32_t v = 0x18ECu; push32(c, v); }
    // 0b6bb1  push 0xe
    X86_AT(c, 0xb6bb1u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6bb3  call 0xbbba4
    X86_AT(c, 0xb6bb3u);
    push32(c, 0xb6bb8u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6bb8u);
    X86_TICK(c, 9);
    // 0b6bb8  push 0xe
    X86_AT(c, 0xb6bb8u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6bba  call 0xbbb5c
    X86_AT(c, 0xb6bbau);
    push32(c, 0xb6bbfu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6bbfu);
    X86_TICK(c, 13);
    // 0b6bbf  add esp, 0x3c
    X86_AT(c, 0xb6bbfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b6bc2  push 0x1908
    X86_AT(c, 0xb6bc2u);
    { uint32_t v = 0x1908u; push32(c, v); }
    // 0b6bc7  push 0xe
    X86_AT(c, 0xb6bc7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6bc9  call 0xbbba4
    X86_AT(c, 0xb6bc9u);
    push32(c, 0xb6bceu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6bceu);
    X86_TICK(c, 9);
    // 0b6bce  push 0xe
    X86_AT(c, 0xb6bceu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6bd0  call 0xbbb5c
    X86_AT(c, 0xb6bd0u);
    push32(c, 0xb6bd5u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6bd5u);
    X86_TICK(c, 11);
    // 0b6bd5  push 0x1924
    X86_AT(c, 0xb6bd5u);
    { uint32_t v = 0x1924u; push32(c, v); }
    // 0b6bda  push 0xe
    X86_AT(c, 0xb6bdau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6bdc  call 0xbbba4
    X86_AT(c, 0xb6bdcu);
    push32(c, 0xb6be1u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6be1u);
    X86_TICK(c, 9);
    // 0b6be1  push 0xe
    X86_AT(c, 0xb6be1u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6be3  call 0xbbb5c
    X86_AT(c, 0xb6be3u);
    push32(c, 0xb6be8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6be8u);
    X86_TICK(c, 11);
    // 0b6be8  push 0x1940
    X86_AT(c, 0xb6be8u);
    { uint32_t v = 0x1940u; push32(c, v); }
    // 0b6bed  push 0xe
    X86_AT(c, 0xb6bedu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6bef  call 0xbbba4
    X86_AT(c, 0xb6befu);
    push32(c, 0xb6bf4u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6bf4u);
    X86_TICK(c, 9);
    // 0b6bf4  push 0xe
    X86_AT(c, 0xb6bf4u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6bf6  call 0xbbb5c
    X86_AT(c, 0xb6bf6u);
    push32(c, 0xb6bfbu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6bfbu);
    X86_TICK(c, 2);
    // 0b6bfb  push 0x195c
    X86_AT(c, 0xb6bfbu);
    { uint32_t v = 0x195Cu; push32(c, v); }
L_b6c00:
    X86_TICK(c, 9);
    // 0b6c00  push 0xe
    X86_AT(c, 0xb6c00u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0b6c02  call 0xbbba4
    X86_AT(c, 0xb6c02u);
    push32(c, 0xb6c07u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6c07u);
    X86_TICK(c, 9);
    // 0b6c07  add esp, 0x2c
    X86_AT(c, 0xb6c07u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0b6c0a  jmp 0xb6c13
    X86_AT(c, 0xb6c0au);
    goto L_b6c13;
L_b6c0c:
    X86_TICK(c, 7);
    // 0b6c0c  call 0xb6680
    X86_AT(c, 0xb6c0cu);
    push32(c, 0xb6c11u); x86_call_known(c, 0xb6680u, f_000b6680); X86_RET(c, 0xb6c11u);
    X86_TICK(c, 7);
    // 0b6c11  jmp 0xb6c2a
    X86_AT(c, 0xb6c11u);
    goto L_b6c2a;
L_b6c13:
    X86_TICK(c, 15);
    // 0b6c13  movsx eax, word ptr [0x46204]
    X86_AT(c, 0xb6c13u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x46204u)));
    // 0b6c1a  push eax
    X86_AT(c, 0xb6c1au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6c1b  call 0xba68c
    X86_AT(c, 0xb6c1bu);
    push32(c, 0xb6c20u); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xb6c20u);
    X86_TICK(c, 8);
    // 0b6c20  inc word ptr [0x45edc]
    X86_AT(c, 0xb6c20u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x45EDCu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0b6c27  add esp, 4
    X86_AT(c, 0xb6c27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b6c2a:
    X86_TICK(c, 10);
    // 0b6c2a  ret 
    X86_AT(c, 0xb6c2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb67d0u, "ran off the end of a function");
}
void f_000b6c2c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0b6c2c  push ebp
    X86_AT(c, 0xb6c2cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b6c2d  mov ebp, esp
    X86_AT(c, 0xb6c2du);
    c.r[5] = c.r[4];
    // 0b6c2f  push 0
    X86_AT(c, 0xb6c2fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b6c31  push dword ptr [ebp + 8]
    X86_AT(c, 0xb6c31u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0b6c34  call 0xd9167
    X86_AT(c, 0xb6c34u);
    push32(c, 0xb6c39u); x86_call_known(c, 0xd9167u, f_000d9167); X86_RET(c, 0xb6c39u);
    X86_TICK(c, 7);
    // 0b6c39  and eax, eax
    X86_AT(c, 0xb6c39u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b6c3b  je 0xb6c44
    X86_AT(c, 0xb6c3bu);
    if (x86_cc(c, 4)) { goto L_b6c44; }
    X86_TICK(c, 9);
    // 0b6c3d  mov eax, 0xffffffff
    X86_AT(c, 0xb6c3du);
    c.r[0] = 0xFFFFFFFFu;
    // 0b6c42  jmp 0xb6c46
    X86_AT(c, 0xb6c42u);
    goto L_b6c46;
L_b6c44:
    X86_TICK(c, 2);
    // 0b6c44  sub eax, eax
    X86_AT(c, 0xb6c44u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_b6c46:
    X86_TICK(c, 18);
    // 0b6c46  add esp, 8
    X86_AT(c, 0xb6c46u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b6c49  leave 
    X86_AT(c, 0xb6c49u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b6c4a  ret 
    X86_AT(c, 0xb6c4au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb6c2cu, "ran off the end of a function");
}
void f_000b6c4c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0b6c4c  push ebp
    X86_AT(c, 0xb6c4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b6c4d  mov ebp, esp
    X86_AT(c, 0xb6c4du);
    c.r[5] = c.r[4];
    // 0b6c4f  push eax
    X86_AT(c, 0xb6c4fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6c50  push edi
    X86_AT(c, 0xb6c50u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6c51  mov word ptr [ebp - 2], 0
    X86_AT(c, 0xb6c51u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), 0x0u);
    // 0b6c57  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xb6c57u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b6c5a  cmp edx, 3
    X86_AT(c, 0xb6c5au);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0b6c5d  ja 0xb6cb6
    X86_AT(c, 0xb6c5du);
    if (x86_cc(c, 7)) { goto L_b6cb6; }
    X86_TICK(c, 7);
    // 0b6c5f  jmp dword ptr cs:[edx*4 + 0xb6c67]
    X86_AT(c, 0xb6c5fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB6C67u)));
      switch (t) {
      case 0xb6c77u: goto L_b6c77;
      case 0xb6c7du: goto L_b6c7d;
      case 0xb6cb6u: goto L_b6cb6;
      default: x86_jump(c, t); return; } }
L_b6c77:
    X86_TICK(c, 9);
    // 0b6c77  mov di, 0x20
    X86_AT(c, 0xb6c77u);
    s16(c, 7, 0x20u);
    // 0b6c7b  jmp 0xb6c81
    X86_AT(c, 0xb6c7bu);
    goto L_b6c81;
L_b6c7d:
    X86_TICK(c, 2);
    // 0b6c7d  mov di, 0x21
    X86_AT(c, 0xb6c7du);
    s16(c, 7, 0x21u);
L_b6c81:
    X86_TICK(c, 21);
    // 0b6c81  mov byte ptr [0x45f25], 2
    X86_AT(c, 0xb6c81u);
    wr8((c.sbase[3] + (uint32_t)(0x45F25u)), 0x2u);
    // 0b6c88  mov eax, edi
    X86_AT(c, 0xb6c88u);
    c.r[0] = c.r[7];
    // 0b6c8a  mov byte ptr [0x45f24], al
    X86_AT(c, 0xb6c8au);
    wr8((c.sbase[3] + (uint32_t)(0x45F24u)), g8(c, 0));
    // 0b6c8f  mov byte ptr [0x45f2d], 0
    X86_AT(c, 0xb6c8fu);
    wr8((c.sbase[3] + (uint32_t)(0x45F2Du)), 0x0u);
    // 0b6c96  push 0x45f40
    X86_AT(c, 0xb6c96u);
    { uint32_t v = 0x45F40u; push32(c, v); }
    // 0b6c9b  push 0x45f24
    X86_AT(c, 0xb6c9bu);
    { uint32_t v = 0x45F24u; push32(c, v); }
    // 0b6ca0  push 0x93
    X86_AT(c, 0xb6ca0u);
    { uint32_t v = 0x93u; push32(c, v); }
    // 0b6ca5  call 0xd9246
    X86_AT(c, 0xb6ca5u);
    push32(c, 0xb6caau); x86_call_known(c, 0xd9246u, f_000d9246); X86_RET(c, 0xb6caau);
    X86_TICK(c, 14);
    // 0b6caa  add esp, 0xc
    X86_AT(c, 0xb6caau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b6cad  cmp byte ptr [0x45f41], 2
    X86_AT(c, 0xb6cadu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x45F41u))), 0x2u, 0, 1);
    // 0b6cb4  jne 0xb6cc0
    X86_AT(c, 0xb6cb4u);
    if (x86_cc(c, 5)) { goto L_b6cc0; }
L_b6cb6:
    X86_TICK(c, 9);
    // 0b6cb6  mov eax, 0xffffffff
    X86_AT(c, 0xb6cb6u);
    c.r[0] = 0xFFFFFFFFu;
    // 0b6cbb  jmp 0xb6d35
    X86_AT(c, 0xb6cbbu);
    goto L_b6d35;
L_b6cc0:
    X86_TICK(c, 12);
    // 0b6cc0  test byte ptr [0x45f4c], 1
    X86_AT(c, 0xb6cc0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x45F4Cu))) & 0x1u, 1);
    // 0b6cc7  je 0xb6cd0
    X86_AT(c, 0xb6cc7u);
    if (x86_cc(c, 4)) { goto L_b6cd0; }
    X86_TICK(c, 9);
    // 0b6cc9  mov eax, 3
    X86_AT(c, 0xb6cc9u);
    c.r[0] = 0x3u;
    // 0b6cce  jmp 0xb6d35
    X86_AT(c, 0xb6cceu);
    goto L_b6d35;
L_b6cd0:
    X86_TICK(c, 12);
    // 0b6cd0  test byte ptr [0x45f4c], 2
    X86_AT(c, 0xb6cd0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x45F4Cu))) & 0x2u, 1);
    // 0b6cd7  je 0xb6ce0
    X86_AT(c, 0xb6cd7u);
    if (x86_cc(c, 4)) { goto L_b6ce0; }
    X86_TICK(c, 9);
    // 0b6cd9  mov eax, 2
    X86_AT(c, 0xb6cd9u);
    c.r[0] = 0x2u;
    // 0b6cde  jmp 0xb6d35
    X86_AT(c, 0xb6cdeu);
    goto L_b6d35;
L_b6ce0:
    X86_TICK(c, 25);
    // 0b6ce0  mov byte ptr [0x45f25], 7
    X86_AT(c, 0xb6ce0u);
    wr8((c.sbase[3] + (uint32_t)(0x45F25u)), 0x7u);
    // 0b6ce7  mov eax, edi
    X86_AT(c, 0xb6ce7u);
    c.r[0] = c.r[7];
    // 0b6ce9  mov byte ptr [0x45f24], al
    X86_AT(c, 0xb6ce9u);
    wr8((c.sbase[3] + (uint32_t)(0x45F24u)), g8(c, 0));
    // 0b6cee  mov word ptr [0x45f2c], 1
    X86_AT(c, 0xb6ceeu);
    wr16((c.sbase[3] + (uint32_t)(0x45F2Cu)), 0x1u);
    // 0b6cf7  mov word ptr [0x45f30], 1
    X86_AT(c, 0xb6cf7u);
    wr16((c.sbase[3] + (uint32_t)(0x45F30u)), 0x1u);
    // 0b6d00  mov word ptr [0x45f28], 1
    X86_AT(c, 0xb6d00u);
    wr16((c.sbase[3] + (uint32_t)(0x45F28u)), 0x1u);
    // 0b6d09  push 0x45f40
    X86_AT(c, 0xb6d09u);
    { uint32_t v = 0x45F40u; push32(c, v); }
    // 0b6d0e  push 0x45f24
    X86_AT(c, 0xb6d0eu);
    { uint32_t v = 0x45F24u; push32(c, v); }
    // 0b6d13  push 0x93
    X86_AT(c, 0xb6d13u);
    { uint32_t v = 0x93u; push32(c, v); }
    // 0b6d18  call 0xd9246
    X86_AT(c, 0xb6d18u);
    push32(c, 0xb6d1du); x86_call_known(c, 0xd9246u, f_000d9246); X86_RET(c, 0xb6d1du);
    X86_TICK(c, 14);
    // 0b6d1d  add esp, 0xc
    X86_AT(c, 0xb6d1du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b6d20  cmp byte ptr [0x45f41], 0
    X86_AT(c, 0xb6d20u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x45F41u))), 0x0u, 0, 1);
    // 0b6d27  jne 0xb6d30
    X86_AT(c, 0xb6d27u);
    if (x86_cc(c, 5)) { goto L_b6d30; }
    X86_TICK(c, 9);
    // 0b6d29  mov eax, 1
    X86_AT(c, 0xb6d29u);
    c.r[0] = 0x1u;
    // 0b6d2e  jmp 0xb6d35
    X86_AT(c, 0xb6d2eu);
    goto L_b6d35;
L_b6d30:
    X86_TICK(c, 2);
    // 0b6d30  mov eax, 4
    X86_AT(c, 0xb6d30u);
    c.r[0] = 0x4u;
L_b6d35:
    X86_TICK(c, 20);
    // 0b6d35  pop edi
    X86_AT(c, 0xb6d35u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b6d36  leave 
    X86_AT(c, 0xb6d36u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b6d37  ret 
    X86_AT(c, 0xb6d37u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb6c4cu, "ran off the end of a function");
}
void f_000b6d38(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0b6d38  push ebp
    X86_AT(c, 0xb6d38u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b6d39  mov ebp, esp
    X86_AT(c, 0xb6d39u);
    c.r[5] = c.r[4];
    // 0b6d3b  push edi
    X86_AT(c, 0xb6d3bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6d3c  push dword ptr [ebp + 8]
    X86_AT(c, 0xb6d3cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0b6d3f  call 0xb6c4c
    X86_AT(c, 0xb6d3fu);
    push32(c, 0xb6d44u); x86_call_known(c, 0xb6c4cu, f_000b6c4c); X86_RET(c, 0xb6d44u);
    X86_TICK(c, 14);
    // 0b6d44  add esp, 4
    X86_AT(c, 0xb6d44u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6d47  xchg edx, eax
    X86_AT(c, 0xb6d47u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0b6d48  inc edx
    X86_AT(c, 0xb6d48u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0b6d49  cmp edx, 5
    X86_AT(c, 0xb6d49u);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0b6d4c  ja 0xb6d8d
    X86_AT(c, 0xb6d4cu);
    if (x86_cc(c, 7)) { goto L_b6d8d; }
    X86_TICK(c, 7);
    // 0b6d4e  jmp dword ptr cs:[edx*4 + 0xb6d56]
    X86_AT(c, 0xb6d4eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB6D56u)));
      switch (t) {
      case 0xb6d6eu: goto L_b6d6e;
      case 0xb6d72u: goto L_b6d72;
      case 0xb6d79u: goto L_b6d79;
      case 0xb6d80u: goto L_b6d80;
      case 0xb6d8du: goto L_b6d8d;
      case 0xb6d9fu: goto L_b6d9f;
      default: x86_jump(c, t); return; } }
L_b6d6e:
    X86_TICK(c, 9);
    // 0b6d6e  sub eax, eax
    X86_AT(c, 0xb6d6eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b6d70  jmp 0xb6daf
    X86_AT(c, 0xb6d70u);
    goto L_b6daf;
L_b6d72:
    X86_TICK(c, 9);
    // 0b6d72  push 0x1978
    X86_AT(c, 0xb6d72u);
    { uint32_t v = 0x1978u; push32(c, v); }
    // 0b6d77  jmp 0xb6d85
    X86_AT(c, 0xb6d77u);
    goto L_b6d85;
L_b6d79:
    X86_TICK(c, 9);
    // 0b6d79  push 0x19e8
    X86_AT(c, 0xb6d79u);
    { uint32_t v = 0x19E8u; push32(c, v); }
    // 0b6d7e  jmp 0xb6d85
    X86_AT(c, 0xb6d7eu);
    goto L_b6d85;
L_b6d80:
    X86_TICK(c, 2);
    // 0b6d80  push 0x1a5c
    X86_AT(c, 0xb6d80u);
    { uint32_t v = 0x1A5Cu; push32(c, v); }
L_b6d85:
    X86_TICK(c, 7);
    // 0b6d85  call 0xbc50c
    X86_AT(c, 0xb6d85u);
    push32(c, 0xb6d8au); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb6d8au);
    X86_TICK(c, 2);
    // 0b6d8a  add esp, 4
    X86_AT(c, 0xb6d8au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b6d8d:
    X86_TICK(c, 9);
    // 0b6d8d  push 2
    X86_AT(c, 0xb6d8du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b6d8f  call 0xb9930
    X86_AT(c, 0xb6d8fu);
    push32(c, 0xb6d94u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xb6d94u);
    X86_TICK(c, 12);
    // 0b6d94  movzx edi, al
    X86_AT(c, 0xb6d94u);
    c.r[7] = g8(c, 0);
    // 0b6d97  add esp, 4
    X86_AT(c, 0xb6d97u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6d9a  cmp edi, 1
    X86_AT(c, 0xb6d9au);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0b6d9d  jne 0xb6da6
    X86_AT(c, 0xb6d9du);
    if (x86_cc(c, 5)) { goto L_b6da6; }
L_b6d9f:
    X86_TICK(c, 9);
    // 0b6d9f  mov eax, 0xffffffff
    X86_AT(c, 0xb6d9fu);
    c.r[0] = 0xFFFFFFFFu;
    // 0b6da4  jmp 0xb6daf
    X86_AT(c, 0xb6da4u);
    goto L_b6daf;
L_b6da6:
    X86_TICK(c, 7);
    // 0b6da6  and edi, edi
    X86_AT(c, 0xb6da6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0b6da8  je 0xb6d8d
    X86_AT(c, 0xb6da8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xb6d8du); goto L_b6d8d; }
    X86_TICK(c, 2);
    // 0b6daa  mov eax, 5
    X86_AT(c, 0xb6daau);
    c.r[0] = 0x5u;
L_b6daf:
    X86_TICK(c, 20);
    // 0b6daf  pop edi
    X86_AT(c, 0xb6dafu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b6db0  leave 
    X86_AT(c, 0xb6db0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b6db1  ret 
    X86_AT(c, 0xb6db1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb6d38u, "ran off the end of a function");
}
void f_000b6db4(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0b6db4  push ebp
    X86_AT(c, 0xb6db4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b6db5  mov ebp, esp
    X86_AT(c, 0xb6db5u);
    c.r[5] = c.r[4];
    // 0b6db7  push edi
    X86_AT(c, 0xb6db7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6db8  push dword ptr [ebp + 8]
    X86_AT(c, 0xb6db8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0b6dbb  call 0xb6c4c
    X86_AT(c, 0xb6dbbu);
    push32(c, 0xb6dc0u); x86_call_known(c, 0xb6c4cu, f_000b6c4c); X86_RET(c, 0xb6dc0u);
    X86_TICK(c, 14);
    // 0b6dc0  add esp, 4
    X86_AT(c, 0xb6dc0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6dc3  xchg edx, eax
    X86_AT(c, 0xb6dc3u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0b6dc4  inc edx
    X86_AT(c, 0xb6dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0b6dc5  cmp edx, 5
    X86_AT(c, 0xb6dc5u);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0b6dc8  ja 0xb6e83
    X86_AT(c, 0xb6dc8u);
    if (x86_cc(c, 7)) { goto L_b6e83; }
    X86_TICK(c, 7);
    // 0b6dce  jmp dword ptr cs:[edx*4 + 0xb6dd6]
    X86_AT(c, 0xb6dceu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB6DD6u)));
      switch (t) {
      case 0xb6deeu: goto L_b6dee;
      case 0xb6e26u: goto L_b6e26;
      case 0xb6e50u: goto L_b6e50;
      case 0xb6e6bu: goto L_b6e6b;
      case 0xb6e72u: goto L_b6e72;
      case 0xb6e83u: goto L_b6e83;
      default: x86_jump(c, t); return; } }
L_b6dee:
    X86_TICK(c, 12);
    // 0b6dee  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xb6deeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0b6df1  call 0xb6c2c
    X86_AT(c, 0xb6df1u);
    push32(c, 0xb6df6u); x86_call_known(c, 0xb6c2cu, f_000b6c2c); X86_RET(c, 0xb6df6u);
    X86_TICK(c, 9);
    // 0b6df6  add esp, 4
    X86_AT(c, 0xb6df6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6df9  and eax, eax
    X86_AT(c, 0xb6df9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b6dfb  je 0xb6e83
    X86_AT(c, 0xb6dfbu);
    if (x86_cc(c, 4)) { goto L_b6e83; }
    X86_TICK(c, 9);
    // 0b6e01  push 0x1ad0
    X86_AT(c, 0xb6e01u);
    { uint32_t v = 0x1AD0u; push32(c, v); }
    // 0b6e06  call 0xbc50c
    X86_AT(c, 0xb6e06u);
    push32(c, 0xb6e0bu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb6e0bu);
    X86_TICK(c, 2);
    // 0b6e0b  add esp, 4
    X86_AT(c, 0xb6e0bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b6e0e:
    X86_TICK(c, 9);
    // 0b6e0e  push 2
    X86_AT(c, 0xb6e0eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b6e10  call 0xb9930
    X86_AT(c, 0xb6e10u);
    push32(c, 0xb6e15u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xb6e15u);
    X86_TICK(c, 12);
    // 0b6e15  movzx edi, al
    X86_AT(c, 0xb6e15u);
    c.r[7] = g8(c, 0);
    // 0b6e18  add esp, 4
    X86_AT(c, 0xb6e18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6e1b  cmp edi, 1
    X86_AT(c, 0xb6e1bu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0b6e1e  je 0xb6e6b
    X86_AT(c, 0xb6e1eu);
    if (x86_cc(c, 4)) { goto L_b6e6b; }
    X86_TICK(c, 7);
    // 0b6e20  and edi, edi
    X86_AT(c, 0xb6e20u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0b6e22  je 0xb6e0e
    X86_AT(c, 0xb6e22u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xb6e0eu); goto L_b6e0e; }
    X86_TICK(c, 7);
    // 0b6e24  jmp 0xb6e83
    X86_AT(c, 0xb6e24u);
    goto L_b6e83;
L_b6e26:
    X86_TICK(c, 9);
    // 0b6e26  push 0x1b44
    X86_AT(c, 0xb6e26u);
    { uint32_t v = 0x1B44u; push32(c, v); }
    // 0b6e2b  call 0xbc50c
    X86_AT(c, 0xb6e2bu);
    push32(c, 0xb6e30u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb6e30u);
    X86_TICK(c, 2);
    // 0b6e30  add esp, 4
    X86_AT(c, 0xb6e30u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b6e33:
    X86_TICK(c, 9);
    // 0b6e33  push 2
    X86_AT(c, 0xb6e33u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b6e35  call 0xb9930
    X86_AT(c, 0xb6e35u);
    push32(c, 0xb6e3au); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xb6e3au);
    X86_TICK(c, 12);
    // 0b6e3a  movzx edi, al
    X86_AT(c, 0xb6e3au);
    c.r[7] = g8(c, 0);
    // 0b6e3d  add esp, 4
    X86_AT(c, 0xb6e3du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6e40  cmp edi, 1
    X86_AT(c, 0xb6e40u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0b6e43  je 0xb6e6b
    X86_AT(c, 0xb6e43u);
    if (x86_cc(c, 4)) { goto L_b6e6b; }
    X86_TICK(c, 7);
    // 0b6e45  and edi, edi
    X86_AT(c, 0xb6e45u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0b6e47  je 0xb6e33
    X86_AT(c, 0xb6e47u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xb6e33u); goto L_b6e33; }
    X86_TICK(c, 9);
    // 0b6e49  mov eax, 5
    X86_AT(c, 0xb6e49u);
    c.r[0] = 0x5u;
    // 0b6e4e  jmp 0xb6e85
    X86_AT(c, 0xb6e4eu);
    goto L_b6e85;
L_b6e50:
    X86_TICK(c, 9);
    // 0b6e50  push 0x1bc4
    X86_AT(c, 0xb6e50u);
    { uint32_t v = 0x1BC4u; push32(c, v); }
    // 0b6e55  call 0xbc50c
    X86_AT(c, 0xb6e55u);
    push32(c, 0xb6e5au); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb6e5au);
    X86_TICK(c, 2);
    // 0b6e5a  add esp, 4
    X86_AT(c, 0xb6e5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b6e5d:
    X86_TICK(c, 9);
    // 0b6e5d  push 2
    X86_AT(c, 0xb6e5du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b6e5f  call 0xb9930
    X86_AT(c, 0xb6e5fu);
    push32(c, 0xb6e64u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xb6e64u);
    X86_TICK(c, 9);
    // 0b6e64  add esp, 4
    X86_AT(c, 0xb6e64u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6e67  and al, al
    X86_AT(c, 0xb6e67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0b6e69  je 0xb6e5d
    X86_AT(c, 0xb6e69u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xb6e5du); goto L_b6e5d; }
L_b6e6b:
    X86_TICK(c, 9);
    // 0b6e6b  mov eax, 0xffffffff
    X86_AT(c, 0xb6e6bu);
    c.r[0] = 0xFFFFFFFFu;
    // 0b6e70  jmp 0xb6e85
    X86_AT(c, 0xb6e70u);
    goto L_b6e85;
L_b6e72:
    X86_TICK(c, 9);
    // 0b6e72  push 0x1c3c
    X86_AT(c, 0xb6e72u);
    { uint32_t v = 0x1C3Cu; push32(c, v); }
    // 0b6e77  call 0xbc50c
    X86_AT(c, 0xb6e77u);
    push32(c, 0xb6e7cu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb6e7cu);
    X86_TICK(c, 11);
    // 0b6e7c  sub eax, eax
    X86_AT(c, 0xb6e7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b6e7e  add esp, 4
    X86_AT(c, 0xb6e7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6e81  jmp 0xb6e85
    X86_AT(c, 0xb6e81u);
    goto L_b6e85;
L_b6e83:
    X86_TICK(c, 2);
    // 0b6e83  sub eax, eax
    X86_AT(c, 0xb6e83u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_b6e85:
    X86_TICK(c, 20);
    // 0b6e85  pop edi
    X86_AT(c, 0xb6e85u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b6e86  leave 
    X86_AT(c, 0xb6e86u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b6e87  ret 
    X86_AT(c, 0xb6e87u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb6db4u, "ran off the end of a function");
}
void f_000b6e88(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0b6e88  push ebp
    X86_AT(c, 0xb6e88u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b6e89  mov ebp, esp
    X86_AT(c, 0xb6e89u);
    c.r[5] = c.r[4];
    // 0b6e8b  sub esp, 8
    X86_AT(c, 0xb6e8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0b6e8e  push ebx
    X86_AT(c, 0xb6e8eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b6e8f  push edi
    X86_AT(c, 0xb6e8fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6e90  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb6e90u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b6e93  lea eax, [ebp - 8]
    X86_AT(c, 0xb6e93u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b6e96  push eax
    X86_AT(c, 0xb6e96u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6e97  lea eax, [ebp - 4]
    X86_AT(c, 0xb6e97u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0b6e9a  push eax
    X86_AT(c, 0xb6e9au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6e9b  push edi
    X86_AT(c, 0xb6e9bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6e9c  call 0xbc428
    X86_AT(c, 0xb6e9cu);
    push32(c, 0xb6ea1u); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb6ea1u);
    X86_TICK(c, 9);
    // 0b6ea1  push 0x1c90
    X86_AT(c, 0xb6ea1u);
    { uint32_t v = 0x1C90u; push32(c, v); }
    // 0b6ea6  call 0xbc50c
    X86_AT(c, 0xb6ea6u);
    push32(c, 0xb6eabu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb6eabu);
    X86_TICK(c, 9);
    // 0b6eab  push edi
    X86_AT(c, 0xb6eabu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6eac  call 0xbb6b0
    X86_AT(c, 0xb6eacu);
    push32(c, 0xb6eb1u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb6eb1u);
    X86_TICK(c, 2);
    // 0b6eb1  add esp, 0x14
    X86_AT(c, 0xb6eb1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_b6eb4:
    X86_TICK(c, 9);
    // 0b6eb4  push edi
    X86_AT(c, 0xb6eb4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6eb5  call 0xb9514
    X86_AT(c, 0xb6eb5u);
    push32(c, 0xb6ebau); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xb6ebau);
    X86_TICK(c, 12);
    // 0b6eba  xchg ebx, eax
    X86_AT(c, 0xb6ebau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b6ebb  add esp, 4
    X86_AT(c, 0xb6ebbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6ebe  cmp bl, 0x59
    X86_AT(c, 0xb6ebeu);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0b6ec1  je 0xb6ecd
    X86_AT(c, 0xb6ec1u);
    if (x86_cc(c, 4)) { goto L_b6ecd; }
    X86_TICK(c, 7);
    // 0b6ec3  cmp bl, 0x4e
    X86_AT(c, 0xb6ec3u);
    (void)x86_sub(c, g8(c, 3), 0x4Eu, 0, 1);
    // 0b6ec6  je 0xb6ecd
    X86_AT(c, 0xb6ec6u);
    if (x86_cc(c, 4)) { goto L_b6ecd; }
    X86_TICK(c, 7);
    // 0b6ec8  cmp bl, 1
    X86_AT(c, 0xb6ec8u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b6ecb  jne 0xb6eb4
    X86_AT(c, 0xb6ecbu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xb6eb4u); goto L_b6eb4; }
L_b6ecd:
    X86_TICK(c, 19);
    // 0b6ecd  push dword ptr [ebp - 8]
    X86_AT(c, 0xb6ecdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0b6ed0  push dword ptr [ebp - 4]
    X86_AT(c, 0xb6ed0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0b6ed3  push edi
    X86_AT(c, 0xb6ed3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6ed4  call 0xbc174
    X86_AT(c, 0xb6ed4u);
    push32(c, 0xb6ed9u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb6ed9u);
    X86_TICK(c, 12);
    // 0b6ed9  add esp, 0xc
    X86_AT(c, 0xb6ed9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b6edc  movzx edx, bl
    X86_AT(c, 0xb6edcu);
    c.r[2] = g8(c, 3);
    // 0b6edf  cmp edx, 1
    X86_AT(c, 0xb6edfu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0b6ee2  je 0xb6f02
    X86_AT(c, 0xb6ee2u);
    if (x86_cc(c, 4)) { goto L_b6f02; }
    X86_TICK(c, 7);
    // 0b6ee4  cmp edx, 0x4e
    X86_AT(c, 0xb6ee4u);
    (void)x86_sub(c, c.r[2], 0x4Eu, 0, 4);
    // 0b6ee7  je 0xb6ef5
    X86_AT(c, 0xb6ee7u);
    if (x86_cc(c, 4)) { goto L_b6ef5; }
    X86_TICK(c, 7);
    // 0b6ee9  cmp edx, 0x59
    X86_AT(c, 0xb6ee9u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0b6eec  jne 0xb6f10
    X86_AT(c, 0xb6eecu);
    if (x86_cc(c, 5)) { goto L_b6f10; }
    X86_TICK(c, 9);
    // 0b6eee  push 0x1d00
    X86_AT(c, 0xb6eeeu);
    { uint32_t v = 0x1D00u; push32(c, v); }
    // 0b6ef3  jmp 0xb6efa
    X86_AT(c, 0xb6ef3u);
    goto L_b6efa;
L_b6ef5:
    X86_TICK(c, 2);
    // 0b6ef5  push 0x1d0c
    X86_AT(c, 0xb6ef5u);
    { uint32_t v = 0x1D0Cu; push32(c, v); }
L_b6efa:
    X86_TICK(c, 9);
    // 0b6efa  push edi
    X86_AT(c, 0xb6efau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6efb  call 0xbbba4
    X86_AT(c, 0xb6efbu);
    push32(c, 0xb6f00u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb6f00u);
    X86_TICK(c, 7);
    // 0b6f00  jmp 0xb6f0d
    X86_AT(c, 0xb6f00u);
    goto L_b6f0d;
L_b6f02:
    X86_TICK(c, 11);
    // 0b6f02  push 0x1d18
    X86_AT(c, 0xb6f02u);
    { uint32_t v = 0x1D18u; push32(c, v); }
    // 0b6f07  push edi
    X86_AT(c, 0xb6f07u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6f08  call 0xba428
    X86_AT(c, 0xb6f08u);
    push32(c, 0xb6f0du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xb6f0du);
L_b6f0d:
    X86_TICK(c, 2);
    // 0b6f0d  add esp, 8
    X86_AT(c, 0xb6f0du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_b6f10:
    X86_TICK(c, 9);
    // 0b6f10  push 2
    X86_AT(c, 0xb6f10u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b6f12  call 0xbbb5c
    X86_AT(c, 0xb6f12u);
    push32(c, 0xb6f17u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6f17u);
    X86_TICK(c, 9);
    // 0b6f17  push edi
    X86_AT(c, 0xb6f17u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6f18  call 0xbbb5c
    X86_AT(c, 0xb6f18u);
    push32(c, 0xb6f1du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6f1du);
    X86_TICK(c, 28);
    // 0b6f1d  mov eax, ebx
    X86_AT(c, 0xb6f1du);
    c.r[0] = c.r[3];
    // 0b6f1f  add esp, 8
    X86_AT(c, 0xb6f1fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b6f22  pop edi
    X86_AT(c, 0xb6f22u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b6f23  pop ebx
    X86_AT(c, 0xb6f23u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b6f24  leave 
    X86_AT(c, 0xb6f24u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b6f25  ret 
    X86_AT(c, 0xb6f25u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb6e88u, "ran off the end of a function");
}
void f_000b6f28(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0b6f28  push ebp
    X86_AT(c, 0xb6f28u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b6f29  mov ebp, esp
    X86_AT(c, 0xb6f29u);
    c.r[5] = c.r[4];
    // 0b6f2b  sub esp, 8
    X86_AT(c, 0xb6f2bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0b6f2e  push ebx
    X86_AT(c, 0xb6f2eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b6f2f  push esi
    X86_AT(c, 0xb6f2fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b6f30  push edi
    X86_AT(c, 0xb6f30u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6f31  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb6f31u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b6f34  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb6f34u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b6f37  lea eax, [ebp - 8]
    X86_AT(c, 0xb6f37u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b6f3a  push eax
    X86_AT(c, 0xb6f3au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6f3b  lea eax, [ebp - 4]
    X86_AT(c, 0xb6f3bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0b6f3e  push eax
    X86_AT(c, 0xb6f3eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b6f3f  push edi
    X86_AT(c, 0xb6f3fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6f40  call 0xbc428
    X86_AT(c, 0xb6f40u);
    push32(c, 0xb6f45u); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb6f45u);
    X86_TICK(c, 9);
    // 0b6f45  push 0x1d2c
    X86_AT(c, 0xb6f45u);
    { uint32_t v = 0x1D2Cu; push32(c, v); }
    // 0b6f4a  call 0xbc50c
    X86_AT(c, 0xb6f4au);
    push32(c, 0xb6f4fu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb6f4fu);
    X86_TICK(c, 2);
    // 0b6f4f  add esp, 0x10
    X86_AT(c, 0xb6f4fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_b6f52:
    X86_TICK(c, 9);
    // 0b6f52  push edi
    X86_AT(c, 0xb6f52u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6f53  call 0xbb6b0
    X86_AT(c, 0xb6f53u);
    push32(c, 0xb6f58u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb6f58u);
    X86_TICK(c, 2);
    // 0b6f58  add esp, 4
    X86_AT(c, 0xb6f58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b6f5b:
    X86_TICK(c, 9);
    // 0b6f5b  push edi
    X86_AT(c, 0xb6f5bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6f5c  call 0xb9514
    X86_AT(c, 0xb6f5cu);
    push32(c, 0xb6f61u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xb6f61u);
    X86_TICK(c, 12);
    // 0b6f61  xchg ebx, eax
    X86_AT(c, 0xb6f61u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b6f62  add esp, 4
    X86_AT(c, 0xb6f62u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b6f65  cmp bl, 0x31
    X86_AT(c, 0xb6f65u);
    (void)x86_sub(c, g8(c, 3), 0x31u, 0, 1);
    // 0b6f68  je 0xb6f7e
    X86_AT(c, 0xb6f68u);
    if (x86_cc(c, 4)) { goto L_b6f7e; }
    X86_TICK(c, 7);
    // 0b6f6a  cmp bl, 0x32
    X86_AT(c, 0xb6f6au);
    (void)x86_sub(c, g8(c, 3), 0x32u, 0, 1);
    // 0b6f6d  je 0xb6f7e
    X86_AT(c, 0xb6f6du);
    if (x86_cc(c, 4)) { goto L_b6f7e; }
    X86_TICK(c, 7);
    // 0b6f6f  cmp bl, 0x33
    X86_AT(c, 0xb6f6fu);
    (void)x86_sub(c, g8(c, 3), 0x33u, 0, 1);
    // 0b6f72  je 0xb6f7e
    X86_AT(c, 0xb6f72u);
    if (x86_cc(c, 4)) { goto L_b6f7e; }
    X86_TICK(c, 7);
    // 0b6f74  cmp bl, 0x34
    X86_AT(c, 0xb6f74u);
    (void)x86_sub(c, g8(c, 3), 0x34u, 0, 1);
    // 0b6f77  je 0xb6f7e
    X86_AT(c, 0xb6f77u);
    if (x86_cc(c, 4)) { goto L_b6f7e; }
    X86_TICK(c, 7);
    // 0b6f79  cmp bl, 1
    X86_AT(c, 0xb6f79u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b6f7c  jne 0xb6f5b
    X86_AT(c, 0xb6f7cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xb6f5bu); goto L_b6f5b; }
L_b6f7e:
    X86_TICK(c, 7);
    // 0b6f7e  cmp bl, 1
    X86_AT(c, 0xb6f7eu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b6f81  jne 0xb6f9d
    X86_AT(c, 0xb6f81u);
    if (x86_cc(c, 5)) { goto L_b6f9d; }
    X86_TICK(c, 9);
    // 0b6f83  push 2
    X86_AT(c, 0xb6f83u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b6f85  call 0xbbb5c
    X86_AT(c, 0xb6f85u);
    push32(c, 0xb6f8au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6f8au);
    X86_TICK(c, 9);
    // 0b6f8a  push edi
    X86_AT(c, 0xb6f8au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6f8b  call 0xbb6b0
    X86_AT(c, 0xb6f8bu);
    push32(c, 0xb6f90u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb6f90u);
    X86_TICK(c, 11);
    // 0b6f90  mov eax, 0xffffffff
    X86_AT(c, 0xb6f90u);
    c.r[0] = 0xFFFFFFFFu;
    // 0b6f95  add esp, 8
    X86_AT(c, 0xb6f95u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b6f98  jmp 0xb7062
    X86_AT(c, 0xb6f98u);
    goto L_b7062;
L_b6f9d:
    X86_TICK(c, 9);
    // 0b6f9d  sub bl, 0x31
    X86_AT(c, 0xb6f9du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x31u, 0, 1)); }
    // 0b6fa0  and esi, esi
    X86_AT(c, 0xb6fa0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0b6fa2  je 0xb6fb6
    X86_AT(c, 0xb6fa2u);
    if (x86_cc(c, 4)) { goto L_b6fb6; }
    X86_TICK(c, 9);
    // 0b6fa4  push 2
    X86_AT(c, 0xb6fa4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b6fa6  call 0xbbb5c
    X86_AT(c, 0xb6fa6u);
    push32(c, 0xb6fabu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb6fabu);
    X86_TICK(c, 9);
    // 0b6fab  push edi
    X86_AT(c, 0xb6fabu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6fac  call 0xbb6b0
    X86_AT(c, 0xb6facu);
    push32(c, 0xb6fb1u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb6fb1u);
    X86_TICK(c, 9);
    // 0b6fb1  add esp, 8
    X86_AT(c, 0xb6fb1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b6fb4  jmp 0xb7015
    X86_AT(c, 0xb6fb4u);
    goto L_b7015;
L_b6fb6:
    X86_TICK(c, 20);
    // 0b6fb6  movzx ebx, bl
    X86_AT(c, 0xb6fb6u);
    c.r[3] = g8(c, 3);
    // 0b6fb9  lea eax, [ebx + ebx*2]
    X86_AT(c, 0xb6fb9u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 2);
    // 0b6fbc  lea edx, [eax*8]
    X86_AT(c, 0xb6fbcu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0b6fc3  lea edx, [eax + edx*8]
    X86_AT(c, 0xb6fc3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0b6fc6  mov al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xb6fc6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))));
    // 0b6fcc  cmp al, 0x44
    X86_AT(c, 0xb6fccu);
    (void)x86_sub(c, g8(c, 0), 0x44u, 0, 1);
    // 0b6fce  je 0xb6fd4
    X86_AT(c, 0xb6fceu);
    if (x86_cc(c, 4)) { goto L_b6fd4; }
    X86_TICK(c, 7);
    // 0b6fd0  cmp al, 0x41
    X86_AT(c, 0xb6fd0u);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0b6fd2  jne 0xb7015
    X86_AT(c, 0xb6fd2u);
    if (x86_cc(c, 5)) { goto L_b7015; }
L_b6fd4:
    X86_TICK(c, 21);
    // 0b6fd4  movzx ebx, bl
    X86_AT(c, 0xb6fd4u);
    c.r[3] = g8(c, 3);
    // 0b6fd7  lea eax, [ebx + ebx*2]
    X86_AT(c, 0xb6fd7u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 2);
    // 0b6fda  lea edx, [eax*8]
    X86_AT(c, 0xb6fdau);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0b6fe1  lea edx, [eax + edx*8]
    X86_AT(c, 0xb6fe1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0b6fe4  cmp byte ptr [edx + 0xa4ad0], 0x46
    X86_AT(c, 0xb6fe4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD0u))), 0x46u, 0, 1);
    // 0b6feb  je 0xb6ff4
    X86_AT(c, 0xb6febu);
    if (x86_cc(c, 4)) { goto L_b6ff4; }
    X86_TICK(c, 9);
    // 0b6fed  push 0x1d84
    X86_AT(c, 0xb6fedu);
    { uint32_t v = 0x1D84u; push32(c, v); }
    // 0b6ff2  jmp 0xb6ff9
    X86_AT(c, 0xb6ff2u);
    goto L_b6ff9;
L_b6ff4:
    X86_TICK(c, 2);
    // 0b6ff4  push 0x1dd0
    X86_AT(c, 0xb6ff4u);
    { uint32_t v = 0x1DD0u; push32(c, v); }
L_b6ff9:
    X86_TICK(c, 7);
    // 0b6ff9  call 0xbc50c
    X86_AT(c, 0xb6ff9u);
    push32(c, 0xb6ffeu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb6ffeu);
    X86_TICK(c, 21);
    // 0b6ffe  add esp, 4
    X86_AT(c, 0xb6ffeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b7001  push dword ptr [ebp - 8]
    X86_AT(c, 0xb7001u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0b7004  push dword ptr [ebp - 4]
    X86_AT(c, 0xb7004u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0b7007  push edi
    X86_AT(c, 0xb7007u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7008  call 0xbc174
    X86_AT(c, 0xb7008u);
    push32(c, 0xb700du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb700du);
    X86_TICK(c, 9);
    // 0b700d  add esp, 0xc
    X86_AT(c, 0xb700du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b7010  jmp 0xb6f52
    X86_AT(c, 0xb7010u);
    X86_POLL(c, 0xb6f52u); goto L_b6f52;
L_b7015:
    X86_TICK(c, 9);
    // 0b7015  push 2
    X86_AT(c, 0xb7015u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b7017  call 0xbbb5c
    X86_AT(c, 0xb7017u);
    push32(c, 0xb701cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb701cu);
    X86_TICK(c, 9);
    // 0b701c  push edi
    X86_AT(c, 0xb701cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b701d  call 0xbb6b0
    X86_AT(c, 0xb701du);
    push32(c, 0xb7022u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb7022u);
    X86_TICK(c, 19);
    // 0b7022  push dword ptr [ebp - 8]
    X86_AT(c, 0xb7022u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0b7025  push dword ptr [ebp - 4]
    X86_AT(c, 0xb7025u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0b7028  push edi
    X86_AT(c, 0xb7028u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7029  call 0xbc174
    X86_AT(c, 0xb7029u);
    push32(c, 0xb702eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb702eu);
    X86_TICK(c, 22);
    // 0b702e  movzx ebx, bl
    X86_AT(c, 0xb702eu);
    c.r[3] = g8(c, 3);
    // 0b7031  lea eax, [ebx + ebx*2]
    X86_AT(c, 0xb7031u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 2);
    // 0b7034  lea edx, [eax*8]
    X86_AT(c, 0xb7034u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0b703b  lea edx, [eax + edx*8]
    X86_AT(c, 0xb703bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0b703e  lea eax, [edx*1 + 0xa4aa0]
    X86_AT(c, 0xb703eu);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4AA0u);
    // 0b7045  push eax
    X86_AT(c, 0xb7045u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7046  push edi
    X86_AT(c, 0xb7046u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7047  call 0xbbfe0
    X86_AT(c, 0xb7047u);
    push32(c, 0xb704cu); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xb704cu);
    X86_TICK(c, 11);
    // 0b704c  push 0x1e1e
    X86_AT(c, 0xb704cu);
    { uint32_t v = 0x1E1Eu; push32(c, v); }
    // 0b7051  push edi
    X86_AT(c, 0xb7051u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7052  call 0xbbba4
    X86_AT(c, 0xb7052u);
    push32(c, 0xb7057u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb7057u);
    X86_TICK(c, 9);
    // 0b7057  push edi
    X86_AT(c, 0xb7057u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7058  call 0xbbb5c
    X86_AT(c, 0xb7058u);
    push32(c, 0xb705du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb705du);
    X86_TICK(c, 4);
    // 0b705d  mov eax, ebx
    X86_AT(c, 0xb705du);
    c.r[0] = c.r[3];
    // 0b705f  add esp, 0x28
    X86_AT(c, 0xb705fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_b7062:
    X86_TICK(c, 28);
    // 0b7062  pop edi
    X86_AT(c, 0xb7062u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b7063  pop esi
    X86_AT(c, 0xb7063u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b7064  pop ebx
    X86_AT(c, 0xb7064u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b7065  leave 
    X86_AT(c, 0xb7065u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b7066  ret 
    X86_AT(c, 0xb7066u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb6f28u, "ran off the end of a function");
}
void f_000b7068(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0b7068  push ebp
    X86_AT(c, 0xb7068u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b7069  mov ebp, esp
    X86_AT(c, 0xb7069u);
    c.r[5] = c.r[4];
    // 0b706b  sub esp, 8
    X86_AT(c, 0xb706bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0b706e  push ebx
    X86_AT(c, 0xb706eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b706f  push edi
    X86_AT(c, 0xb706fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7070  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb7070u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b7073  push edi
    X86_AT(c, 0xb7073u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7074  call 0xbbb5c
    X86_AT(c, 0xb7074u);
    push32(c, 0xb7079u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb7079u);
    X86_TICK(c, 9);
    // 0b7079  push edi
    X86_AT(c, 0xb7079u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b707a  call 0xbb6b0
    X86_AT(c, 0xb707au);
    push32(c, 0xb707fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb707fu);
    X86_TICK(c, 11);
    // 0b707f  push 0x1e24
    X86_AT(c, 0xb707fu);
    { uint32_t v = 0x1E24u; push32(c, v); }
    // 0b7084  push edi
    X86_AT(c, 0xb7084u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7085  call 0xba428
    X86_AT(c, 0xb7085u);
    push32(c, 0xb708au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xb708au);
    X86_TICK(c, 17);
    // 0b708a  lea eax, [ebp - 8]
    X86_AT(c, 0xb708au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b708d  push eax
    X86_AT(c, 0xb708du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b708e  lea eax, [ebp - 4]
    X86_AT(c, 0xb708eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0b7091  push eax
    X86_AT(c, 0xb7091u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7092  push edi
    X86_AT(c, 0xb7092u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7093  call 0xbc428
    X86_AT(c, 0xb7093u);
    push32(c, 0xb7098u); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb7098u);
    X86_TICK(c, 9);
    // 0b7098  push 0x1e44
    X86_AT(c, 0xb7098u);
    { uint32_t v = 0x1E44u; push32(c, v); }
    // 0b709d  call 0xbc50c
    X86_AT(c, 0xb709du);
    push32(c, 0xb70a2u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb70a2u);
    X86_TICK(c, 9);
    // 0b70a2  push edi
    X86_AT(c, 0xb70a2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b70a3  call 0xbb6b0
    X86_AT(c, 0xb70a3u);
    push32(c, 0xb70a8u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb70a8u);
    X86_TICK(c, 2);
    // 0b70a8  add esp, 0x24
    X86_AT(c, 0xb70a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_b70ab:
    X86_TICK(c, 9);
    // 0b70ab  push edi
    X86_AT(c, 0xb70abu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b70ac  call 0xb9514
    X86_AT(c, 0xb70acu);
    push32(c, 0xb70b1u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xb70b1u);
    X86_TICK(c, 12);
    // 0b70b1  xchg ebx, eax
    X86_AT(c, 0xb70b1u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b70b2  add esp, 4
    X86_AT(c, 0xb70b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b70b5  cmp bl, 5
    X86_AT(c, 0xb70b5u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0b70b8  je 0xb70f2
    X86_AT(c, 0xb70b8u);
    if (x86_cc(c, 4)) { goto L_b70f2; }
    X86_TICK(c, 7);
    // 0b70ba  cmp bl, 6
    X86_AT(c, 0xb70bau);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0b70bd  je 0xb70f2
    X86_AT(c, 0xb70bdu);
    if (x86_cc(c, 4)) { goto L_b70f2; }
    X86_TICK(c, 7);
    // 0b70bf  cmp bl, 3
    X86_AT(c, 0xb70bfu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0b70c2  je 0xb70f2
    X86_AT(c, 0xb70c2u);
    if (x86_cc(c, 4)) { goto L_b70f2; }
    X86_TICK(c, 7);
    // 0b70c4  cmp bl, 7
    X86_AT(c, 0xb70c4u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0b70c7  je 0xb70f2
    X86_AT(c, 0xb70c7u);
    if (x86_cc(c, 4)) { goto L_b70f2; }
    X86_TICK(c, 7);
    // 0b70c9  cmp bl, 1
    X86_AT(c, 0xb70c9u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b70cc  je 0xb70f2
    X86_AT(c, 0xb70ccu);
    if (x86_cc(c, 4)) { goto L_b70f2; }
    X86_TICK(c, 7);
    // 0b70ce  cmp bl, 0x4e
    X86_AT(c, 0xb70ceu);
    (void)x86_sub(c, g8(c, 3), 0x4Eu, 0, 1);
    // 0b70d1  je 0xb70f2
    X86_AT(c, 0xb70d1u);
    if (x86_cc(c, 4)) { goto L_b70f2; }
    X86_TICK(c, 7);
    // 0b70d3  cmp bl, 0x53
    X86_AT(c, 0xb70d3u);
    (void)x86_sub(c, g8(c, 3), 0x53u, 0, 1);
    // 0b70d6  je 0xb70f2
    X86_AT(c, 0xb70d6u);
    if (x86_cc(c, 4)) { goto L_b70f2; }
    X86_TICK(c, 7);
    // 0b70d8  cmp bl, 0x45
    X86_AT(c, 0xb70d8u);
    (void)x86_sub(c, g8(c, 3), 0x45u, 0, 1);
    // 0b70db  je 0xb70f2
    X86_AT(c, 0xb70dbu);
    if (x86_cc(c, 4)) { goto L_b70f2; }
    X86_TICK(c, 7);
    // 0b70dd  cmp bl, 0x57
    X86_AT(c, 0xb70ddu);
    (void)x86_sub(c, g8(c, 3), 0x57u, 0, 1);
    // 0b70e0  je 0xb70f2
    X86_AT(c, 0xb70e0u);
    if (x86_cc(c, 4)) { goto L_b70f2; }
    X86_TICK(c, 7);
    // 0b70e2  and bl, bl
    X86_AT(c, 0xb70e2u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0b70e4  je 0xb70ab
    X86_AT(c, 0xb70e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xb70abu); goto L_b70ab; }
    X86_TICK(c, 9);
    // 0b70e6  push 1
    X86_AT(c, 0xb70e6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b70e8  call 0xb607c
    X86_AT(c, 0xb70e8u);
    push32(c, 0xb70edu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb70edu);
    X86_TICK(c, 9);
    // 0b70ed  add esp, 4
    X86_AT(c, 0xb70edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b70f0  jmp 0xb70ab
    X86_AT(c, 0xb70f0u);
    X86_POLL(c, 0xb70abu); goto L_b70ab;
L_b70f2:
    X86_TICK(c, 9);
    // 0b70f2  push 2
    X86_AT(c, 0xb70f2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b70f4  call 0xbbb5c
    X86_AT(c, 0xb70f4u);
    push32(c, 0xb70f9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb70f9u);
    X86_TICK(c, 9);
    // 0b70f9  push edi
    X86_AT(c, 0xb70f9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b70fa  call 0xbb6b0
    X86_AT(c, 0xb70fau);
    push32(c, 0xb70ffu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb70ffu);
    X86_TICK(c, 9);
    // 0b70ff  add esp, 8
    X86_AT(c, 0xb70ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b7102  cmp bl, 1
    X86_AT(c, 0xb7102u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b7105  jne 0xb7111
    X86_AT(c, 0xb7105u);
    if (x86_cc(c, 5)) { goto L_b7111; }
    X86_TICK(c, 9);
    // 0b7107  mov eax, 0xffffffff
    X86_AT(c, 0xb7107u);
    c.r[0] = 0xFFFFFFFFu;
    // 0b710c  jmp 0xb71c0
    X86_AT(c, 0xb710cu);
    goto L_b71c0;
L_b7111:
    X86_TICK(c, 19);
    // 0b7111  push dword ptr [ebp - 8]
    X86_AT(c, 0xb7111u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0b7114  push dword ptr [ebp - 4]
    X86_AT(c, 0xb7114u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0b7117  push edi
    X86_AT(c, 0xb7117u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7118  call 0xbc174
    X86_AT(c, 0xb7118u);
    push32(c, 0xb711du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb711du);
    X86_TICK(c, 12);
    // 0b711d  add esp, 0xc
    X86_AT(c, 0xb711du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b7120  movzx edx, bl
    X86_AT(c, 0xb7120u);
    c.r[2] = g8(c, 3);
    // 0b7123  cmp edx, 7
    X86_AT(c, 0xb7123u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0b7126  ja 0xb7149
    X86_AT(c, 0xb7126u);
    if (x86_cc(c, 7)) { goto L_b7149; }
    X86_TICK(c, 7);
    // 0b7128  cmp edx, 7
    X86_AT(c, 0xb7128u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0b712b  je 0xb718f
    X86_AT(c, 0xb712bu);
    if (x86_cc(c, 4)) { goto L_b718f; }
    X86_TICK(c, 7);
    // 0b7131  cmp edx, 3
    X86_AT(c, 0xb7131u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0b7134  je 0xb71a7
    X86_AT(c, 0xb7134u);
    if (x86_cc(c, 4)) { goto L_b71a7; }
    X86_TICK(c, 7);
    // 0b713a  cmp edx, 5
    X86_AT(c, 0xb713au);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0b713d  je 0xb715f
    X86_AT(c, 0xb713du);
    if (x86_cc(c, 4)) { goto L_b715f; }
    X86_TICK(c, 7);
    // 0b713f  cmp edx, 6
    X86_AT(c, 0xb713fu);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0b7142  je 0xb7177
    X86_AT(c, 0xb7142u);
    if (x86_cc(c, 4)) { goto L_b7177; }
    X86_TICK(c, 7);
    // 0b7144  jmp 0xb71c0
    X86_AT(c, 0xb7144u);
    goto L_b71c0;
L_b7149:
    X86_TICK(c, 7);
    // 0b7149  cmp edx, 0x45
    X86_AT(c, 0xb7149u);
    (void)x86_sub(c, c.r[2], 0x45u, 0, 4);
    // 0b714c  je 0xb718f
    X86_AT(c, 0xb714cu);
    if (x86_cc(c, 4)) { goto L_b718f; }
    X86_TICK(c, 7);
    // 0b714e  cmp edx, 0x4e
    X86_AT(c, 0xb714eu);
    (void)x86_sub(c, c.r[2], 0x4Eu, 0, 4);
    // 0b7151  je 0xb715f
    X86_AT(c, 0xb7151u);
    if (x86_cc(c, 4)) { goto L_b715f; }
    X86_TICK(c, 7);
    // 0b7153  cmp edx, 0x53
    X86_AT(c, 0xb7153u);
    (void)x86_sub(c, c.r[2], 0x53u, 0, 4);
    // 0b7156  je 0xb7177
    X86_AT(c, 0xb7156u);
    if (x86_cc(c, 4)) { goto L_b7177; }
    X86_TICK(c, 7);
    // 0b7158  cmp edx, 0x57
    X86_AT(c, 0xb7158u);
    (void)x86_sub(c, c.r[2], 0x57u, 0, 4);
    // 0b715b  je 0xb71a7
    X86_AT(c, 0xb715bu);
    if (x86_cc(c, 4)) { goto L_b71a7; }
    X86_TICK(c, 7);
    // 0b715d  jmp 0xb71c0
    X86_AT(c, 0xb715du);
    goto L_b71c0;
L_b715f:
    X86_TICK(c, 11);
    // 0b715f  push 0x1e98
    X86_AT(c, 0xb715fu);
    { uint32_t v = 0x1E98u; push32(c, v); }
    // 0b7164  push edi
    X86_AT(c, 0xb7164u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7165  call 0xba428
    X86_AT(c, 0xb7165u);
    push32(c, 0xb716au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xb716au);
    X86_TICK(c, 9);
    // 0b716a  push edi
    X86_AT(c, 0xb716au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b716b  call 0xbbb5c
    X86_AT(c, 0xb716bu);
    push32(c, 0xb7170u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb7170u);
    X86_TICK(c, 9);
    // 0b7170  mov eax, 1
    X86_AT(c, 0xb7170u);
    c.r[0] = 0x1u;
    // 0b7175  jmp 0xb71bd
    X86_AT(c, 0xb7175u);
    goto L_b71bd;
L_b7177:
    X86_TICK(c, 11);
    // 0b7177  push 0x1ea8
    X86_AT(c, 0xb7177u);
    { uint32_t v = 0x1EA8u; push32(c, v); }
    // 0b717c  push edi
    X86_AT(c, 0xb717cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b717d  call 0xba428
    X86_AT(c, 0xb717du);
    push32(c, 0xb7182u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xb7182u);
    X86_TICK(c, 9);
    // 0b7182  push edi
    X86_AT(c, 0xb7182u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7183  call 0xbbb5c
    X86_AT(c, 0xb7183u);
    push32(c, 0xb7188u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb7188u);
    X86_TICK(c, 9);
    // 0b7188  mov eax, 3
    X86_AT(c, 0xb7188u);
    c.r[0] = 0x3u;
    // 0b718d  jmp 0xb71bd
    X86_AT(c, 0xb718du);
    goto L_b71bd;
L_b718f:
    X86_TICK(c, 11);
    // 0b718f  push 0x1eb8
    X86_AT(c, 0xb718fu);
    { uint32_t v = 0x1EB8u; push32(c, v); }
    // 0b7194  push edi
    X86_AT(c, 0xb7194u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7195  call 0xba428
    X86_AT(c, 0xb7195u);
    push32(c, 0xb719au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xb719au);
    X86_TICK(c, 9);
    // 0b719a  push edi
    X86_AT(c, 0xb719au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b719b  call 0xbbb5c
    X86_AT(c, 0xb719bu);
    push32(c, 0xb71a0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb71a0u);
    X86_TICK(c, 9);
    // 0b71a0  mov eax, 2
    X86_AT(c, 0xb71a0u);
    c.r[0] = 0x2u;
    // 0b71a5  jmp 0xb71bd
    X86_AT(c, 0xb71a5u);
    goto L_b71bd;
L_b71a7:
    X86_TICK(c, 11);
    // 0b71a7  push 0x1ec8
    X86_AT(c, 0xb71a7u);
    { uint32_t v = 0x1EC8u; push32(c, v); }
    // 0b71ac  push edi
    X86_AT(c, 0xb71acu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b71ad  call 0xba428
    X86_AT(c, 0xb71adu);
    push32(c, 0xb71b2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xb71b2u);
    X86_TICK(c, 9);
    // 0b71b2  push edi
    X86_AT(c, 0xb71b2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b71b3  call 0xbbb5c
    X86_AT(c, 0xb71b3u);
    push32(c, 0xb71b8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb71b8u);
    X86_TICK(c, 2);
    // 0b71b8  mov eax, 4
    X86_AT(c, 0xb71b8u);
    c.r[0] = 0x4u;
L_b71bd:
    X86_TICK(c, 2);
    // 0b71bd  add esp, 0xc
    X86_AT(c, 0xb71bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_b71c0:
    X86_TICK(c, 24);
    // 0b71c0  pop edi
    X86_AT(c, 0xb71c0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b71c1  pop ebx
    X86_AT(c, 0xb71c1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b71c2  leave 
    X86_AT(c, 0xb71c2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b71c3  ret 
    X86_AT(c, 0xb71c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb7068u, "ran off the end of a function");
}
void f_000b71c0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0b71c0  pop edi
    X86_AT(c, 0xb71c0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b71c1  pop ebx
    X86_AT(c, 0xb71c1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b71c2  leave 
    X86_AT(c, 0xb71c2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b71c3  ret 
    X86_AT(c, 0xb71c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb71c0u, "ran off the end of a function");
}
void f_000b71c4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0b71c4  push edi
    X86_AT(c, 0xb71c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b71c5  push 1
    X86_AT(c, 0xb71c5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b71c7  call 0xba6a0
    X86_AT(c, 0xb71c7u);
    push32(c, 0xb71ccu); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xb71ccu);
    X86_TICK(c, 15);
    // 0b71cc  push 0xff
    X86_AT(c, 0xb71ccu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b71d1  push 0xff
    X86_AT(c, 0xb71d1u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b71d6  push 0xff
    X86_AT(c, 0xb71d6u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b71db  push 1
    X86_AT(c, 0xb71dbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b71dd  call 0xba4d4
    X86_AT(c, 0xb71ddu);
    push32(c, 0xb71e2u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb71e2u);
    X86_TICK(c, 9);
    // 0b71e2  push 5
    X86_AT(c, 0xb71e2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b71e4  call 0xbebbc
    X86_AT(c, 0xb71e4u);
    push32(c, 0xb71e9u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xb71e9u);
    X86_TICK(c, 15);
    // 0b71e9  push 0xff
    X86_AT(c, 0xb71e9u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b71ee  push 0xff
    X86_AT(c, 0xb71eeu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b71f3  push 0xff
    X86_AT(c, 0xb71f3u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b71f8  push 2
    X86_AT(c, 0xb71f8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b71fa  call 0xba4d4
    X86_AT(c, 0xb71fau);
    push32(c, 0xb71ffu); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb71ffu);
    X86_TICK(c, 9);
    // 0b71ff  push 5
    X86_AT(c, 0xb71ffu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b7201  call 0xbebbc
    X86_AT(c, 0xb7201u);
    push32(c, 0xb7206u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xb7206u);
    X86_TICK(c, 15);
    // 0b7206  push 0xff
    X86_AT(c, 0xb7206u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b720b  push 0xff
    X86_AT(c, 0xb720bu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7210  push 0xff
    X86_AT(c, 0xb7210u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7215  push 3
    X86_AT(c, 0xb7215u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b7217  call 0xba4d4
    X86_AT(c, 0xb7217u);
    push32(c, 0xb721cu); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb721cu);
    X86_TICK(c, 11);
    // 0b721c  add esp, 0x3c
    X86_AT(c, 0xb721cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b721f  push 5
    X86_AT(c, 0xb721fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b7221  call 0xbebbc
    X86_AT(c, 0xb7221u);
    push32(c, 0xb7226u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xb7226u);
    X86_TICK(c, 15);
    // 0b7226  push 0xff
    X86_AT(c, 0xb7226u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b722b  push 0xff
    X86_AT(c, 0xb722bu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7230  push 0xff
    X86_AT(c, 0xb7230u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7235  push 4
    X86_AT(c, 0xb7235u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b7237  call 0xba4d4
    X86_AT(c, 0xb7237u);
    push32(c, 0xb723cu); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb723cu);
    X86_TICK(c, 9);
    // 0b723c  push 5
    X86_AT(c, 0xb723cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b723e  call 0xbebbc
    X86_AT(c, 0xb723eu);
    push32(c, 0xb7243u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xb7243u);
    X86_TICK(c, 15);
    // 0b7243  push 0xff
    X86_AT(c, 0xb7243u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7248  push 0xff
    X86_AT(c, 0xb7248u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b724d  push 0xff
    X86_AT(c, 0xb724du);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7252  push 5
    X86_AT(c, 0xb7252u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b7254  call 0xba4d4
    X86_AT(c, 0xb7254u);
    push32(c, 0xb7259u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb7259u);
    X86_TICK(c, 9);
    // 0b7259  push 5
    X86_AT(c, 0xb7259u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b725b  call 0xbebbc
    X86_AT(c, 0xb725bu);
    push32(c, 0xb7260u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xb7260u);
    X86_TICK(c, 15);
    // 0b7260  push 0xff
    X86_AT(c, 0xb7260u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7265  push 0xff
    X86_AT(c, 0xb7265u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b726a  push 0xff
    X86_AT(c, 0xb726au);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b726f  push 6
    X86_AT(c, 0xb726fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0b7271  call 0xba4d4
    X86_AT(c, 0xb7271u);
    push32(c, 0xb7276u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb7276u);
    X86_TICK(c, 11);
    // 0b7276  add esp, 0x3c
    X86_AT(c, 0xb7276u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b7279  push 5
    X86_AT(c, 0xb7279u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b727b  call 0xbebbc
    X86_AT(c, 0xb727bu);
    push32(c, 0xb7280u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xb7280u);
    X86_TICK(c, 4);
    // 0b7280  sub edi, edi
    X86_AT(c, 0xb7280u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0b7282  add esp, 4
    X86_AT(c, 0xb7282u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b7285:
    X86_TICK(c, 7);
    // 0b7285  cmp edi, 6
    X86_AT(c, 0xb7285u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0b7288  jge 0xb73a5
    X86_AT(c, 0xb7288u);
    if (x86_cc(c, 13)) { goto L_b73a5; }
    X86_TICK(c, 15);
    // 0b728e  push 0xe6
    X86_AT(c, 0xb728eu);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0b7293  push 0xe6
    X86_AT(c, 0xb7293u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0b7298  push 0xe6
    X86_AT(c, 0xb7298u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0b729d  push 1
    X86_AT(c, 0xb729du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b729f  call 0xba4d4
    X86_AT(c, 0xb729fu);
    push32(c, 0xb72a4u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb72a4u);
    X86_TICK(c, 15);
    // 0b72a4  push 0xe6
    X86_AT(c, 0xb72a4u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0b72a9  push 0xe6
    X86_AT(c, 0xb72a9u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0b72ae  push 0xe6
    X86_AT(c, 0xb72aeu);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0b72b3  push 2
    X86_AT(c, 0xb72b3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b72b5  call 0xba4d4
    X86_AT(c, 0xb72b5u);
    push32(c, 0xb72bau); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb72bau);
    X86_TICK(c, 15);
    // 0b72ba  push 0xc8
    X86_AT(c, 0xb72bau);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0b72bf  push 0xc8
    X86_AT(c, 0xb72bfu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0b72c4  push 0xc8
    X86_AT(c, 0xb72c4u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0b72c9  push 3
    X86_AT(c, 0xb72c9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b72cb  call 0xba4d4
    X86_AT(c, 0xb72cbu);
    push32(c, 0xb72d0u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb72d0u);
    X86_TICK(c, 15);
    // 0b72d0  push 0xe6
    X86_AT(c, 0xb72d0u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0b72d5  push 0xe6
    X86_AT(c, 0xb72d5u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0b72da  push 0xc8
    X86_AT(c, 0xb72dau);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0b72df  push 4
    X86_AT(c, 0xb72dfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b72e1  call 0xba4d4
    X86_AT(c, 0xb72e1u);
    push32(c, 0xb72e6u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb72e6u);
    X86_TICK(c, 17);
    // 0b72e6  add esp, 0x40
    X86_AT(c, 0xb72e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0b72e9  push 0xc8
    X86_AT(c, 0xb72e9u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0b72ee  push 0xc8
    X86_AT(c, 0xb72eeu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0b72f3  push 0xc8
    X86_AT(c, 0xb72f3u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0b72f8  push 5
    X86_AT(c, 0xb72f8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b72fa  call 0xba4d4
    X86_AT(c, 0xb72fau);
    push32(c, 0xb72ffu); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb72ffu);
    X86_TICK(c, 15);
    // 0b72ff  push 0xc8
    X86_AT(c, 0xb72ffu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0b7304  push 0xc8
    X86_AT(c, 0xb7304u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0b7309  push 0xc8
    X86_AT(c, 0xb7309u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0b730e  push 6
    X86_AT(c, 0xb730eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0b7310  call 0xba4d4
    X86_AT(c, 0xb7310u);
    push32(c, 0xb7315u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb7315u);
    X86_TICK(c, 15);
    // 0b7315  push 0xff
    X86_AT(c, 0xb7315u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b731a  push 0xff
    X86_AT(c, 0xb731au);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b731f  push 0xff
    X86_AT(c, 0xb731fu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7324  push 1
    X86_AT(c, 0xb7324u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b7326  call 0xba4d4
    X86_AT(c, 0xb7326u);
    push32(c, 0xb732bu); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb732bu);
    X86_TICK(c, 15);
    // 0b732b  push 0xff
    X86_AT(c, 0xb732bu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7330  push 0xff
    X86_AT(c, 0xb7330u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7335  push 0xff
    X86_AT(c, 0xb7335u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b733a  push 2
    X86_AT(c, 0xb733au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b733c  call 0xba4d4
    X86_AT(c, 0xb733cu);
    push32(c, 0xb7341u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb7341u);
    X86_TICK(c, 17);
    // 0b7341  add esp, 0x40
    X86_AT(c, 0xb7341u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0b7344  push 0xff
    X86_AT(c, 0xb7344u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7349  push 0xff
    X86_AT(c, 0xb7349u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b734e  push 0xff
    X86_AT(c, 0xb734eu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7353  push 3
    X86_AT(c, 0xb7353u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b7355  call 0xba4d4
    X86_AT(c, 0xb7355u);
    push32(c, 0xb735au); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb735au);
    X86_TICK(c, 15);
    // 0b735a  push 0xff
    X86_AT(c, 0xb735au);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b735f  push 0xff
    X86_AT(c, 0xb735fu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7364  push 0xff
    X86_AT(c, 0xb7364u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7369  push 4
    X86_AT(c, 0xb7369u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b736b  call 0xba4d4
    X86_AT(c, 0xb736bu);
    push32(c, 0xb7370u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb7370u);
    X86_TICK(c, 15);
    // 0b7370  push 0xff
    X86_AT(c, 0xb7370u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7375  push 0xff
    X86_AT(c, 0xb7375u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b737a  push 0xff
    X86_AT(c, 0xb737au);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b737f  push 5
    X86_AT(c, 0xb737fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b7381  call 0xba4d4
    X86_AT(c, 0xb7381u);
    push32(c, 0xb7386u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb7386u);
    X86_TICK(c, 15);
    // 0b7386  push 0xff
    X86_AT(c, 0xb7386u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b738b  push 0xff
    X86_AT(c, 0xb738bu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7390  push 0xff
    X86_AT(c, 0xb7390u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b7395  push 6
    X86_AT(c, 0xb7395u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0b7397  call 0xba4d4
    X86_AT(c, 0xb7397u);
    push32(c, 0xb739cu); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb739cu);
    X86_TICK(c, 11);
    // 0b739c  add esp, 0x40
    X86_AT(c, 0xb739cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0b739f  inc edi
    X86_AT(c, 0xb739fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b73a0  jmp 0xb7285
    X86_AT(c, 0xb73a0u);
    X86_POLL(c, 0xb7285u); goto L_b7285;
L_b73a5:
    X86_TICK(c, 9);
    // 0b73a5  push 5
    X86_AT(c, 0xb73a5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b73a7  call 0xbebbc
    X86_AT(c, 0xb73a7u);
    push32(c, 0xb73acu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xb73acu);
    X86_TICK(c, 9);
    // 0b73ac  push 5
    X86_AT(c, 0xb73acu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b73ae  call 0xbc724
    X86_AT(c, 0xb73aeu);
    push32(c, 0xb73b3u); x86_call_known(c, 0xbc724u, f_000bc724); X86_RET(c, 0xb73b3u);
    X86_TICK(c, 9);
    // 0b73b3  push 0
    X86_AT(c, 0xb73b3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b73b5  call 0xba6a0
    X86_AT(c, 0xb73b5u);
    push32(c, 0xb73bau); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xb73bau);
    X86_TICK(c, 16);
    // 0b73ba  add esp, 0xc
    X86_AT(c, 0xb73bau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b73bd  pop edi
    X86_AT(c, 0xb73bdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b73be  ret 
    X86_AT(c, 0xb73beu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb71c4u, "ran off the end of a function");
}
void f_000b73c0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0b73c0  push ebx
    X86_AT(c, 0xb73c0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b73c1  push esi
    X86_AT(c, 0xb73c1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b73c2  push edi
    X86_AT(c, 0xb73c2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b73c3  mov word ptr [0x9c544], 0xffff
    X86_AT(c, 0xb73c3u);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), 0xFFFFu);
    // 0b73cc  push 0
    X86_AT(c, 0xb73ccu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b73ce  push 0x18d
    X86_AT(c, 0xb73ceu);
    { uint32_t v = 0x18Du; push32(c, v); }
    // 0b73d3  push 0x168
    X86_AT(c, 0xb73d3u);
    { uint32_t v = 0x168u; push32(c, v); }
    // 0b73d8  push 0x30
    X86_AT(c, 0xb73d8u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0b73da  push 0xb
    X86_AT(c, 0xb73dau);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0b73dc  call 0xbac18
    X86_AT(c, 0xb73dcu);
    push32(c, 0xb73e1u); x86_call_known(c, 0xbac18u, f_000bac18); X86_RET(c, 0xb73e1u);
    X86_TICK(c, 9);
    // 0b73e1  push 1
    X86_AT(c, 0xb73e1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b73e3  call 0xba6a0
    X86_AT(c, 0xb73e3u);
    push32(c, 0xb73e8u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xb73e8u);
    X86_TICK(c, 9);
    // 0b73e8  push 0
    X86_AT(c, 0xb73e8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b73ea  call 0xba51c
    X86_AT(c, 0xb73eau);
    push32(c, 0xb73efu); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xb73efu);
    X86_TICK(c, 4);
    // 0b73ef  sub edi, edi
    X86_AT(c, 0xb73efu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0b73f1  add esp, 0x1c
    X86_AT(c, 0xb73f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_b73f4:
    X86_TICK(c, 7);
    // 0b73f4  cmp edi, 0x20
    X86_AT(c, 0xb73f4u);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0b73f7  jge 0xb75a3
    X86_AT(c, 0xb73f7u);
    if (x86_cc(c, 13)) { goto L_b75a3; }
    X86_TICK(c, 19);
    // 0b73fd  lea eax, [edi + 0x60]
    X86_AT(c, 0xb73fdu);
    c.r[0] = (uint32_t)(c.r[7] + 0x60u);
    // 0b7400  push eax
    X86_AT(c, 0xb7400u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7401  push 0x1a0
    X86_AT(c, 0xb7401u);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0b7406  push eax
    X86_AT(c, 0xb7406u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7407  push 0x40
    X86_AT(c, 0xb7407u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0b7409  mov ebx, eax
    X86_AT(c, 0xb7409u);
    c.r[3] = c.r[0];
    // 0b740b  call 0xbaa94
    X86_AT(c, 0xb740bu);
    push32(c, 0xb7410u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb7410u);
    X86_TICK(c, 17);
    // 0b7410  push 0x1c0
    X86_AT(c, 0xb7410u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0b7415  lea eax, [edi + 0x40]
    X86_AT(c, 0xb7415u);
    c.r[0] = (uint32_t)(c.r[7] + 0x40u);
    // 0b7418  push eax
    X86_AT(c, 0xb7418u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7419  push 0x60
    X86_AT(c, 0xb7419u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0b741b  push eax
    X86_AT(c, 0xb741bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b741c  call 0xbaa94
    X86_AT(c, 0xb741cu);
    push32(c, 0xb7421u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb7421u);
    X86_TICK(c, 19);
    // 0b7421  lea eax, [edi + 0x80]
    X86_AT(c, 0xb7421u);
    c.r[0] = (uint32_t)(c.r[7] + 0x80u);
    // 0b7427  push eax
    X86_AT(c, 0xb7427u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7428  push 0x1a0
    X86_AT(c, 0xb7428u);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0b742d  push eax
    X86_AT(c, 0xb742du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b742e  push 0x40
    X86_AT(c, 0xb742eu);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0b7430  mov esi, eax
    X86_AT(c, 0xb7430u);
    c.r[6] = c.r[0];
    // 0b7432  call 0xbaa94
    X86_AT(c, 0xb7432u);
    push32(c, 0xb7437u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb7437u);
    X86_TICK(c, 15);
    // 0b7437  push 0x1c0
    X86_AT(c, 0xb7437u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0b743c  push ebx
    X86_AT(c, 0xb743cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b743d  push 0x60
    X86_AT(c, 0xb743du);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0b743f  push ebx
    X86_AT(c, 0xb743fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b7440  call 0xbaa94
    X86_AT(c, 0xb7440u);
    push32(c, 0xb7445u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb7445u);
    X86_TICK(c, 21);
    // 0b7445  add esp, 0x40
    X86_AT(c, 0xb7445u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0b7448  lea eax, [edi + 0xa0]
    X86_AT(c, 0xb7448u);
    c.r[0] = (uint32_t)(c.r[7] + 0xA0u);
    // 0b744e  push eax
    X86_AT(c, 0xb744eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b744f  push 0x1a0
    X86_AT(c, 0xb744fu);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0b7454  push eax
    X86_AT(c, 0xb7454u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7455  push 0x40
    X86_AT(c, 0xb7455u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0b7457  mov ebx, eax
    X86_AT(c, 0xb7457u);
    c.r[3] = c.r[0];
    // 0b7459  call 0xbaa94
    X86_AT(c, 0xb7459u);
    push32(c, 0xb745eu); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb745eu);
    X86_TICK(c, 15);
    // 0b745e  push 0x1c0
    X86_AT(c, 0xb745eu);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0b7463  push esi
    X86_AT(c, 0xb7463u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b7464  push 0x60
    X86_AT(c, 0xb7464u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0b7466  push esi
    X86_AT(c, 0xb7466u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b7467  call 0xbaa94
    X86_AT(c, 0xb7467u);
    push32(c, 0xb746cu); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb746cu);
    X86_TICK(c, 19);
    // 0b746c  lea eax, [edi + 0xc0]
    X86_AT(c, 0xb746cu);
    c.r[0] = (uint32_t)(c.r[7] + 0xC0u);
    // 0b7472  push eax
    X86_AT(c, 0xb7472u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7473  push 0x1a0
    X86_AT(c, 0xb7473u);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0b7478  push eax
    X86_AT(c, 0xb7478u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7479  push 0x40
    X86_AT(c, 0xb7479u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0b747b  mov esi, eax
    X86_AT(c, 0xb747bu);
    c.r[6] = c.r[0];
    // 0b747d  call 0xbaa94
    X86_AT(c, 0xb747du);
    push32(c, 0xb7482u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb7482u);
    X86_TICK(c, 15);
    // 0b7482  push 0x1c0
    X86_AT(c, 0xb7482u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0b7487  push ebx
    X86_AT(c, 0xb7487u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b7488  push 0x60
    X86_AT(c, 0xb7488u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0b748a  push ebx
    X86_AT(c, 0xb748au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b748b  call 0xbaa94
    X86_AT(c, 0xb748bu);
    push32(c, 0xb7490u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb7490u);
    X86_TICK(c, 21);
    // 0b7490  add esp, 0x40
    X86_AT(c, 0xb7490u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0b7493  lea eax, [edi + 0xe0]
    X86_AT(c, 0xb7493u);
    c.r[0] = (uint32_t)(c.r[7] + 0xE0u);
    // 0b7499  push eax
    X86_AT(c, 0xb7499u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b749a  push 0x1a0
    X86_AT(c, 0xb749au);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0b749f  push eax
    X86_AT(c, 0xb749fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b74a0  push 0x40
    X86_AT(c, 0xb74a0u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0b74a2  mov ebx, eax
    X86_AT(c, 0xb74a2u);
    c.r[3] = c.r[0];
    // 0b74a4  call 0xbaa94
    X86_AT(c, 0xb74a4u);
    push32(c, 0xb74a9u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb74a9u);
    X86_TICK(c, 15);
    // 0b74a9  push 0x1c0
    X86_AT(c, 0xb74a9u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0b74ae  push esi
    X86_AT(c, 0xb74aeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b74af  push 0x60
    X86_AT(c, 0xb74afu);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0b74b1  push esi
    X86_AT(c, 0xb74b1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b74b2  call 0xbaa94
    X86_AT(c, 0xb74b2u);
    push32(c, 0xb74b7u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb74b7u);
    X86_TICK(c, 17);
    // 0b74b7  lea eax, [edi + 0x100]
    X86_AT(c, 0xb74b7u);
    c.r[0] = (uint32_t)(c.r[7] + 0x100u);
    // 0b74bd  push eax
    X86_AT(c, 0xb74bdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b74be  push 0x1a0
    X86_AT(c, 0xb74beu);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0b74c3  push eax
    X86_AT(c, 0xb74c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b74c4  push 0x40
    X86_AT(c, 0xb74c4u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0b74c6  call 0xbaa94
    X86_AT(c, 0xb74c6u);
    push32(c, 0xb74cbu); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb74cbu);
    X86_TICK(c, 15);
    // 0b74cb  push 0x1c0
    X86_AT(c, 0xb74cbu);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0b74d0  push ebx
    X86_AT(c, 0xb74d0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b74d1  push 0x60
    X86_AT(c, 0xb74d1u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0b74d3  push ebx
    X86_AT(c, 0xb74d3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b74d4  call 0xbaa94
    X86_AT(c, 0xb74d4u);
    push32(c, 0xb74d9u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb74d9u);
    X86_TICK(c, 21);
    // 0b74d9  add esp, 0x40
    X86_AT(c, 0xb74d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0b74dc  lea eax, [edi + 0x120]
    X86_AT(c, 0xb74dcu);
    c.r[0] = (uint32_t)(c.r[7] + 0x120u);
    // 0b74e2  push eax
    X86_AT(c, 0xb74e2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b74e3  push 0x1a0
    X86_AT(c, 0xb74e3u);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0b74e8  push eax
    X86_AT(c, 0xb74e8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b74e9  push 0x40
    X86_AT(c, 0xb74e9u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0b74eb  mov ebx, eax
    X86_AT(c, 0xb74ebu);
    c.r[3] = c.r[0];
    // 0b74ed  call 0xbaa94
    X86_AT(c, 0xb74edu);
    push32(c, 0xb74f2u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb74f2u);
    X86_TICK(c, 17);
    // 0b74f2  push 0x1c0
    X86_AT(c, 0xb74f2u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0b74f7  lea eax, [edi + 0x100]
    X86_AT(c, 0xb74f7u);
    c.r[0] = (uint32_t)(c.r[7] + 0x100u);
    // 0b74fd  push eax
    X86_AT(c, 0xb74fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b74fe  push 0x60
    X86_AT(c, 0xb74feu);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0b7500  push eax
    X86_AT(c, 0xb7500u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7501  call 0xbaa94
    X86_AT(c, 0xb7501u);
    push32(c, 0xb7506u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb7506u);
    X86_TICK(c, 19);
    // 0b7506  lea eax, [edi + 0x140]
    X86_AT(c, 0xb7506u);
    c.r[0] = (uint32_t)(c.r[7] + 0x140u);
    // 0b750c  push eax
    X86_AT(c, 0xb750cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b750d  push 0x1a0
    X86_AT(c, 0xb750du);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0b7512  push eax
    X86_AT(c, 0xb7512u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7513  push 0x40
    X86_AT(c, 0xb7513u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0b7515  mov esi, eax
    X86_AT(c, 0xb7515u);
    c.r[6] = c.r[0];
    // 0b7517  call 0xbaa94
    X86_AT(c, 0xb7517u);
    push32(c, 0xb751cu); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb751cu);
    X86_TICK(c, 15);
    // 0b751c  push 0x1c0
    X86_AT(c, 0xb751cu);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0b7521  push ebx
    X86_AT(c, 0xb7521u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b7522  push 0x60
    X86_AT(c, 0xb7522u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0b7524  push ebx
    X86_AT(c, 0xb7524u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b7525  call 0xbaa94
    X86_AT(c, 0xb7525u);
    push32(c, 0xb752au); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb752au);
    X86_TICK(c, 21);
    // 0b752a  add esp, 0x40
    X86_AT(c, 0xb752au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0b752d  lea eax, [edi + 0x160]
    X86_AT(c, 0xb752du);
    c.r[0] = (uint32_t)(c.r[7] + 0x160u);
    // 0b7533  push eax
    X86_AT(c, 0xb7533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7534  push 0x1a0
    X86_AT(c, 0xb7534u);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0b7539  push eax
    X86_AT(c, 0xb7539u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b753a  push 0x40
    X86_AT(c, 0xb753au);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0b753c  mov ebx, eax
    X86_AT(c, 0xb753cu);
    c.r[3] = c.r[0];
    // 0b753e  call 0xbaa94
    X86_AT(c, 0xb753eu);
    push32(c, 0xb7543u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb7543u);
    X86_TICK(c, 15);
    // 0b7543  push 0x1c0
    X86_AT(c, 0xb7543u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0b7548  push esi
    X86_AT(c, 0xb7548u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b7549  push 0x60
    X86_AT(c, 0xb7549u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0b754b  push esi
    X86_AT(c, 0xb754bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b754c  call 0xbaa94
    X86_AT(c, 0xb754cu);
    push32(c, 0xb7551u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb7551u);
    X86_TICK(c, 19);
    // 0b7551  lea eax, [edi + 0x180]
    X86_AT(c, 0xb7551u);
    c.r[0] = (uint32_t)(c.r[7] + 0x180u);
    // 0b7557  push eax
    X86_AT(c, 0xb7557u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7558  push 0x1a0
    X86_AT(c, 0xb7558u);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0b755d  push eax
    X86_AT(c, 0xb755du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b755e  push 0x40
    X86_AT(c, 0xb755eu);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0b7560  mov esi, eax
    X86_AT(c, 0xb7560u);
    c.r[6] = c.r[0];
    // 0b7562  call 0xbaa94
    X86_AT(c, 0xb7562u);
    push32(c, 0xb7567u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb7567u);
    X86_TICK(c, 15);
    // 0b7567  push 0x1c0
    X86_AT(c, 0xb7567u);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0b756c  push ebx
    X86_AT(c, 0xb756cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b756d  push 0x60
    X86_AT(c, 0xb756du);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0b756f  push ebx
    X86_AT(c, 0xb756fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b7570  call 0xbaa94
    X86_AT(c, 0xb7570u);
    push32(c, 0xb7575u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb7575u);
    X86_TICK(c, 19);
    // 0b7575  add esp, 0x40
    X86_AT(c, 0xb7575u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0b7578  lea eax, [edi + 0x1a0]
    X86_AT(c, 0xb7578u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1A0u);
    // 0b757e  push eax
    X86_AT(c, 0xb757eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b757f  push 0x1a0
    X86_AT(c, 0xb757fu);
    { uint32_t v = 0x1A0u; push32(c, v); }
    // 0b7584  push eax
    X86_AT(c, 0xb7584u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7585  push 0x40
    X86_AT(c, 0xb7585u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0b7587  call 0xbaa94
    X86_AT(c, 0xb7587u);
    push32(c, 0xb758cu); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb758cu);
    X86_TICK(c, 15);
    // 0b758c  push 0x1c0
    X86_AT(c, 0xb758cu);
    { uint32_t v = 0x1C0u; push32(c, v); }
    // 0b7591  push esi
    X86_AT(c, 0xb7591u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b7592  push 0x60
    X86_AT(c, 0xb7592u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0b7594  push esi
    X86_AT(c, 0xb7594u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b7595  call 0xbaa94
    X86_AT(c, 0xb7595u);
    push32(c, 0xb759au); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xb759au);
    X86_TICK(c, 11);
    // 0b759a  inc edi
    X86_AT(c, 0xb759au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b759b  add esp, 0x20
    X86_AT(c, 0xb759bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0b759e  jmp 0xb73f4
    X86_AT(c, 0xb759eu);
    X86_POLL(c, 0xb73f4u); goto L_b73f4;
L_b75a3:
    X86_TICK(c, 9);
    // 0b75a3  push 0
    X86_AT(c, 0xb75a3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b75a5  call 0xba6a0
    X86_AT(c, 0xb75a5u);
    push32(c, 0xb75aau); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xb75aau);
    X86_TICK(c, 7);
    // 0b75aa  call 0xb6680
    X86_AT(c, 0xb75aau);
    push32(c, 0xb75afu); x86_call_known(c, 0xb6680u, f_000b6680); X86_RET(c, 0xb75afu);
    X86_TICK(c, 9);
    // 0b75af  push 2
    X86_AT(c, 0xb75afu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b75b1  call 0xba6b4
    X86_AT(c, 0xb75b1u);
    push32(c, 0xb75b6u); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xb75b6u);
    X86_TICK(c, 24);
    // 0b75b6  add esp, 8
    X86_AT(c, 0xb75b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b75b9  pop edi
    X86_AT(c, 0xb75b9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b75ba  pop esi
    X86_AT(c, 0xb75bau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b75bb  pop ebx
    X86_AT(c, 0xb75bbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b75bc  ret 
    X86_AT(c, 0xb75bcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb73c0u, "ran off the end of a function");
}
}

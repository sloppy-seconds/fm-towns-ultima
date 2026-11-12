#include "p_game_funcs.h"
namespace p_game {
void f_0000000b(X86Cpu& c) {
    X86_TICK(c, 45);
    // 00000b  enter 0, 0
    X86_AT(c, 0xbu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 00000f  mov ax, 0x600
    X86_AT(c, 0xfu);
    s16(c, 0, 0x600u);
    // 000013  int 0x90
    X86_AT(c, 0x13u);
    x86_int(c, 0x90, 0x15u);
    X86_TICK(c, 19);
    // 000015  movzx eax, ah
    X86_AT(c, 0x15u);
    c.r[0] = g8(c, 4);
    // 000018  leave 
    X86_AT(c, 0x18u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 000019  ret 
    X86_AT(c, 0x19u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbu, "ran off the end of a function");
}
void f_00000029(X86Cpu& c) {
    X86_TICK(c, 53);
    // 000029  enter 0, 0
    X86_AT(c, 0x29u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 00002d  push ebx
    X86_AT(c, 0x2du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00002e  push esi
    X86_AT(c, 0x2eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00002f  mov ah, 9
    X86_AT(c, 0x2fu);
    s8(c, 4, 0x9u);
    // 000031  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x31u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 000034  int 0x90
    X86_AT(c, 0x34u);
    x86_int(c, 0x90, 0x36u);
    X86_TICK(c, 36);
    // 000036  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x36u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 000039  movzx ebx, bx
    X86_AT(c, 0x39u);
    c.r[3] = (c.r[3] & 0xFFFFu);
    // 00003c  mov dword ptr [esi], ebx
    X86_AT(c, 0x3cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[3]);
    // 00003e  movzx eax, dx
    X86_AT(c, 0x3eu);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 000041  pop esi
    X86_AT(c, 0x41u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000042  pop ebx
    X86_AT(c, 0x42u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 000043  leave 
    X86_AT(c, 0x43u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 000044  ret 
    X86_AT(c, 0x44u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x29u, "ran off the end of a function");
}
void f_00000048(X86Cpu& c) {
    X86_TICK(c, 26);
    // 000048  push edi
    X86_AT(c, 0x48u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000049  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x49u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 00004d  mov ecx, dword ptr [esp + 0xc]
    X86_AT(c, 0x4du);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 000051  mov ah, 0
    X86_AT(c, 0x51u);
    s8(c, 4, 0x0u);
    // 000053  push fs
    X86_AT(c, 0x53u);
    push32(c, c.sreg[4]);
    // 000055  push 0x110
    X86_AT(c, 0x55u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 00005a  pop fs
    X86_AT(c, 0x5au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00005c  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x5cu);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x63u); }
    X86_RET(c, 0x63u);
    X86_TICK(c, 21);
    // 000063  pop fs
    X86_AT(c, 0x63u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000065  movsx eax, ah
    X86_AT(c, 0x65u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000068  pop edi
    X86_AT(c, 0x68u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000069  ret 
    X86_AT(c, 0x69u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x48u, "ran off the end of a function");
}
void f_0000006a(X86Cpu& c) {
    X86_TICK(c, 30);
    // 00006a  push edi
    X86_AT(c, 0x6au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00006b  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x6bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 00006f  mov al, byte ptr [esp + 0xc]
    X86_AT(c, 0x6fu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 000073  mov dx, word ptr [esp + 0x10]
    X86_AT(c, 0x73u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u))));
    // 000078  mov ah, 1
    X86_AT(c, 0x78u);
    s8(c, 4, 0x1u);
    // 00007a  push fs
    X86_AT(c, 0x7au);
    push32(c, c.sreg[4]);
    // 00007c  push 0x110
    X86_AT(c, 0x7cu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000081  pop fs
    X86_AT(c, 0x81u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000083  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x83u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x8au); }
    X86_RET(c, 0x8au);
    X86_TICK(c, 21);
    // 00008a  pop fs
    X86_AT(c, 0x8au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00008c  movsx eax, ah
    X86_AT(c, 0x8cu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 00008f  pop edi
    X86_AT(c, 0x8fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000090  ret 
    X86_AT(c, 0x90u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6au, "ran off the end of a function");
}
void f_000000ca(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0000ca  push ebx
    X86_AT(c, 0xcau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0000cb  push edi
    X86_AT(c, 0xcbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0000cc  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0xccu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0000d0  mov al, byte ptr [esp + 0x10]
    X86_AT(c, 0xd0u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u))));
    // 0000d4  mov dx, word ptr [esp + 0x14]
    X86_AT(c, 0xd4u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u))));
    // 0000d9  mov bx, word ptr [esp + 0x18]
    X86_AT(c, 0xd9u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x18u))));
    // 0000de  mov ah, 2
    X86_AT(c, 0xdeu);
    s8(c, 4, 0x2u);
    // 0000e0  push fs
    X86_AT(c, 0xe0u);
    push32(c, c.sreg[4]);
    // 0000e2  push 0x110
    X86_AT(c, 0xe2u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0000e7  pop fs
    X86_AT(c, 0xe7u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0000e9  lcall fword ptr fs:[0x20]
    X86_AT(c, 0xe9u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0xf0u); }
    X86_RET(c, 0xf0u);
    X86_TICK(c, 25);
    // 0000f0  pop fs
    X86_AT(c, 0xf0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0000f2  movsx eax, ah
    X86_AT(c, 0xf2u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0000f5  pop edi
    X86_AT(c, 0xf5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0000f6  pop ebx
    X86_AT(c, 0xf6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0000f7  ret 
    X86_AT(c, 0xf7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcau, "ran off the end of a function");
}
void f_000000f8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0000f8  push esi
    X86_AT(c, 0xf8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0000f9  push edi
    X86_AT(c, 0xf9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0000fa  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0xfau);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0000fe  mov esi, dword ptr [esp + 0x10]
    X86_AT(c, 0xfeu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 000102  mov ah, 3
    X86_AT(c, 0x102u);
    s8(c, 4, 0x3u);
    // 000104  push fs
    X86_AT(c, 0x104u);
    push32(c, c.sreg[4]);
    // 000106  push 0x110
    X86_AT(c, 0x106u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 00010b  pop fs
    X86_AT(c, 0x10bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00010d  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x10du);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x114u); }
    X86_RET(c, 0x114u);
    X86_TICK(c, 25);
    // 000114  pop fs
    X86_AT(c, 0x114u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000116  movsx eax, ah
    X86_AT(c, 0x116u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000119  pop edi
    X86_AT(c, 0x119u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00011a  pop esi
    X86_AT(c, 0x11au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00011b  ret 
    X86_AT(c, 0x11bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf8u, "ran off the end of a function");
}
void f_0000011c(X86Cpu& c) {
    X86_TICK(c, 32);
    // 00011c  push esi
    X86_AT(c, 0x11cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00011d  push edi
    X86_AT(c, 0x11du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00011e  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x11eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 000122  mov al, byte ptr [esp + 0x10]
    X86_AT(c, 0x122u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u))));
    // 000126  mov esi, dword ptr [esp + 0x14]
    X86_AT(c, 0x126u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u)));
    // 00012a  mov ah, 4
    X86_AT(c, 0x12au);
    s8(c, 4, 0x4u);
    // 00012c  push fs
    X86_AT(c, 0x12cu);
    push32(c, c.sreg[4]);
    // 00012e  push 0x110
    X86_AT(c, 0x12eu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000133  pop fs
    X86_AT(c, 0x133u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000135  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x135u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x13cu); }
    X86_RET(c, 0x13cu);
    X86_TICK(c, 25);
    // 00013c  pop fs
    X86_AT(c, 0x13cu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00013e  movsx eax, ah
    X86_AT(c, 0x13eu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000141  pop edi
    X86_AT(c, 0x141u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000142  pop esi
    X86_AT(c, 0x142u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000143  ret 
    X86_AT(c, 0x143u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11cu, "ran off the end of a function");
}
void f_00000144(X86Cpu& c) {
    X86_TICK(c, 26);
    // 000144  push edi
    X86_AT(c, 0x144u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000145  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x145u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 000149  mov al, byte ptr [esp + 0xc]
    X86_AT(c, 0x149u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 00014d  mov ah, 5
    X86_AT(c, 0x14du);
    s8(c, 4, 0x5u);
    // 00014f  push fs
    X86_AT(c, 0x14fu);
    push32(c, c.sreg[4]);
    // 000151  push 0x110
    X86_AT(c, 0x151u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000156  pop fs
    X86_AT(c, 0x156u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000158  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x158u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x15fu); }
    X86_RET(c, 0x15fu);
    X86_TICK(c, 21);
    // 00015f  pop fs
    X86_AT(c, 0x15fu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000161  movsx eax, ah
    X86_AT(c, 0x161u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000164  pop edi
    X86_AT(c, 0x164u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000165  ret 
    X86_AT(c, 0x165u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x144u, "ran off the end of a function");
}
void f_00000166(X86Cpu& c) {
    X86_TICK(c, 32);
    // 000166  push esi
    X86_AT(c, 0x166u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 000167  push edi
    X86_AT(c, 0x167u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000168  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x168u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 00016c  mov al, byte ptr [esp + 0x10]
    X86_AT(c, 0x16cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u))));
    // 000170  mov edx, dword ptr [esp + 0x14]
    X86_AT(c, 0x170u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u)));
    // 000174  mov ah, 6
    X86_AT(c, 0x174u);
    s8(c, 4, 0x6u);
    // 000176  push fs
    X86_AT(c, 0x176u);
    push32(c, c.sreg[4]);
    // 000178  push 0x110
    X86_AT(c, 0x178u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 00017d  pop fs
    X86_AT(c, 0x17du);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00017f  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x17fu);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x186u); }
    X86_RET(c, 0x186u);
    X86_TICK(c, 25);
    // 000186  pop fs
    X86_AT(c, 0x186u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000188  movsx eax, ah
    X86_AT(c, 0x188u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 00018b  pop edi
    X86_AT(c, 0x18bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00018c  pop esi
    X86_AT(c, 0x18cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00018d  ret 
    X86_AT(c, 0x18du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x166u, "ran off the end of a function");
}
void f_0000018e(X86Cpu& c) {
    X86_TICK(c, 30);
    // 00018e  push edi
    X86_AT(c, 0x18eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00018f  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x18fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 000193  mov al, byte ptr [esp + 0xc]
    X86_AT(c, 0x193u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 000197  mov edx, dword ptr [esp + 0x10]
    X86_AT(c, 0x197u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 00019b  mov ah, 7
    X86_AT(c, 0x19bu);
    s8(c, 4, 0x7u);
    // 00019d  push fs
    X86_AT(c, 0x19du);
    push32(c, c.sreg[4]);
    // 00019f  push 0x110
    X86_AT(c, 0x19fu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0001a4  pop fs
    X86_AT(c, 0x1a4u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0001a6  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x1a6u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x1adu); }
    X86_RET(c, 0x1adu);
    X86_TICK(c, 21);
    // 0001ad  pop fs
    X86_AT(c, 0x1adu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0001af  movsx eax, ah
    X86_AT(c, 0x1afu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0001b2  pop edi
    X86_AT(c, 0x1b2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0001b3  ret 
    X86_AT(c, 0x1b3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x18eu, "ran off the end of a function");
}
void f_000001fd(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0001fd  push edi
    X86_AT(c, 0x1fdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0001fe  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x1feu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 000202  mov al, byte ptr [esp + 0xc]
    X86_AT(c, 0x202u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 000206  mov ah, 0xa
    X86_AT(c, 0x206u);
    s8(c, 4, 0xAu);
    // 000208  push fs
    X86_AT(c, 0x208u);
    push32(c, c.sreg[4]);
    // 00020a  push 0x110
    X86_AT(c, 0x20au);
    { uint32_t v = 0x110u; push32(c, v); }
    // 00020f  pop fs
    X86_AT(c, 0x20fu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000211  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x211u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x218u); }
    X86_RET(c, 0x218u);
    X86_TICK(c, 21);
    // 000218  pop fs
    X86_AT(c, 0x218u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00021a  movsx eax, ah
    X86_AT(c, 0x21au);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 00021d  pop edi
    X86_AT(c, 0x21du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00021e  ret 
    X86_AT(c, 0x21eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fdu, "ran off the end of a function");
}
void f_00000245(X86Cpu& c) {
    X86_TICK(c, 26);
    // 000245  push edi
    X86_AT(c, 0x245u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000246  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x246u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 00024a  mov dx, word ptr [esp + 0xc]
    X86_AT(c, 0x24au);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 00024f  mov ah, 0xc
    X86_AT(c, 0x24fu);
    s8(c, 4, 0xCu);
    // 000251  push fs
    X86_AT(c, 0x251u);
    push32(c, c.sreg[4]);
    // 000253  push 0x110
    X86_AT(c, 0x253u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000258  pop fs
    X86_AT(c, 0x258u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00025a  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x25au);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x261u); }
    X86_RET(c, 0x261u);
    X86_TICK(c, 21);
    // 000261  pop fs
    X86_AT(c, 0x261u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000263  movsx eax, ah
    X86_AT(c, 0x263u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000266  pop edi
    X86_AT(c, 0x266u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000267  ret 
    X86_AT(c, 0x267u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x245u, "ran off the end of a function");
}
void f_00000334(X86Cpu& c) {
    X86_TICK(c, 26);
    // 000334  push edi
    X86_AT(c, 0x334u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000335  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x335u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 000339  mov al, byte ptr [esp + 0xc]
    X86_AT(c, 0x339u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 00033d  mov ah, 0x12
    X86_AT(c, 0x33du);
    s8(c, 4, 0x12u);
    // 00033f  push fs
    X86_AT(c, 0x33fu);
    push32(c, c.sreg[4]);
    // 000341  push 0x110
    X86_AT(c, 0x341u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000346  pop fs
    X86_AT(c, 0x346u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000348  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x348u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x34fu); }
    X86_RET(c, 0x34fu);
    X86_TICK(c, 21);
    // 00034f  pop fs
    X86_AT(c, 0x34fu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000351  movsx eax, ah
    X86_AT(c, 0x351u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000354  pop edi
    X86_AT(c, 0x354u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000355  ret 
    X86_AT(c, 0x355u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x334u, "ran off the end of a function");
}
void f_0000039c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00039c  push edi
    X86_AT(c, 0x39cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00039d  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x39du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0003a1  mov al, byte ptr [esp + 0xc]
    X86_AT(c, 0x3a1u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 0003a5  mov ah, 0x15
    X86_AT(c, 0x3a5u);
    s8(c, 4, 0x15u);
    // 0003a7  push fs
    X86_AT(c, 0x3a7u);
    push32(c, c.sreg[4]);
    // 0003a9  push 0x110
    X86_AT(c, 0x3a9u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0003ae  pop fs
    X86_AT(c, 0x3aeu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0003b0  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x3b0u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x3b7u); }
    X86_RET(c, 0x3b7u);
    X86_TICK(c, 21);
    // 0003b7  pop fs
    X86_AT(c, 0x3b7u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0003b9  movsx eax, ah
    X86_AT(c, 0x3b9u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0003bc  pop edi
    X86_AT(c, 0x3bcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0003bd  ret 
    X86_AT(c, 0x3bdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x39cu, "ran off the end of a function");
}
void f_000003be(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0003be  push edi
    X86_AT(c, 0x3beu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0003bf  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x3bfu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0003c3  mov al, byte ptr [esp + 0xc]
    X86_AT(c, 0x3c3u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 0003c7  mov ah, 0x16
    X86_AT(c, 0x3c7u);
    s8(c, 4, 0x16u);
    // 0003c9  push fs
    X86_AT(c, 0x3c9u);
    push32(c, c.sreg[4]);
    // 0003cb  push 0x110
    X86_AT(c, 0x3cbu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0003d0  pop fs
    X86_AT(c, 0x3d0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0003d2  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x3d2u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x3d9u); }
    X86_RET(c, 0x3d9u);
    X86_TICK(c, 21);
    // 0003d9  pop fs
    X86_AT(c, 0x3d9u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0003db  movsx eax, ah
    X86_AT(c, 0x3dbu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0003de  pop edi
    X86_AT(c, 0x3deu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0003df  ret 
    X86_AT(c, 0x3dfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3beu, "ran off the end of a function");
}
void f_000003e0(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0003e0  push edi
    X86_AT(c, 0x3e0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0003e1  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x3e1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0003e5  mov dx, word ptr [esp + 0xc]
    X86_AT(c, 0x3e5u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 0003ea  mov ah, 0x17
    X86_AT(c, 0x3eau);
    s8(c, 4, 0x17u);
    // 0003ec  push fs
    X86_AT(c, 0x3ecu);
    push32(c, c.sreg[4]);
    // 0003ee  push 0x110
    X86_AT(c, 0x3eeu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0003f3  pop fs
    X86_AT(c, 0x3f3u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0003f5  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x3f5u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x3fcu); }
    X86_RET(c, 0x3fcu);
    X86_TICK(c, 21);
    // 0003fc  pop fs
    X86_AT(c, 0x3fcu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0003fe  movsx eax, ah
    X86_AT(c, 0x3feu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000401  pop edi
    X86_AT(c, 0x401u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000402  ret 
    X86_AT(c, 0x402u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e0u, "ran off the end of a function");
}
void f_00000431(X86Cpu& c) {
    X86_TICK(c, 26);
    // 000431  push edi
    X86_AT(c, 0x431u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000432  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x432u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 000436  mov dx, word ptr [esp + 0xc]
    X86_AT(c, 0x436u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 00043b  mov ah, 0x19
    X86_AT(c, 0x43bu);
    s8(c, 4, 0x19u);
    // 00043d  push fs
    X86_AT(c, 0x43du);
    push32(c, c.sreg[4]);
    // 00043f  push 0x110
    X86_AT(c, 0x43fu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000444  pop fs
    X86_AT(c, 0x444u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000446  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x446u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x44du); }
    X86_RET(c, 0x44du);
    X86_TICK(c, 21);
    // 00044d  pop fs
    X86_AT(c, 0x44du);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00044f  movsx eax, ah
    X86_AT(c, 0x44fu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000452  pop edi
    X86_AT(c, 0x452u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000453  ret 
    X86_AT(c, 0x453u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x431u, "ran off the end of a function");
}
void f_00000498(X86Cpu& c) {
    X86_TICK(c, 22);
    // 000498  push edi
    X86_AT(c, 0x498u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000499  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x499u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 00049d  mov ah, 0x20
    X86_AT(c, 0x49du);
    s8(c, 4, 0x20u);
    // 00049f  push fs
    X86_AT(c, 0x49fu);
    push32(c, c.sreg[4]);
    // 0004a1  push 0x110
    X86_AT(c, 0x4a1u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0004a6  pop fs
    X86_AT(c, 0x4a6u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0004a8  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x4a8u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x4afu); }
    X86_RET(c, 0x4afu);
    X86_TICK(c, 21);
    // 0004af  pop fs
    X86_AT(c, 0x4afu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0004b1  movsx eax, ah
    X86_AT(c, 0x4b1u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0004b4  pop edi
    X86_AT(c, 0x4b4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0004b5  ret 
    X86_AT(c, 0x4b5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x498u, "ran off the end of a function");
}
void f_00000544(X86Cpu& c) {
    X86_TICK(c, 32);
    // 000544  push esi
    X86_AT(c, 0x544u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 000545  push edi
    X86_AT(c, 0x545u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000546  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x546u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 00054a  mov al, byte ptr [esp + 0x10]
    X86_AT(c, 0x54au);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u))));
    // 00054e  mov esi, dword ptr [esp + 0x14]
    X86_AT(c, 0x54eu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u)));
    // 000552  mov ah, 0x25
    X86_AT(c, 0x552u);
    s8(c, 4, 0x25u);
    // 000554  push fs
    X86_AT(c, 0x554u);
    push32(c, c.sreg[4]);
    // 000556  push 0x110
    X86_AT(c, 0x556u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 00055b  pop fs
    X86_AT(c, 0x55bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00055d  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x55du);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x564u); }
    X86_RET(c, 0x564u);
    X86_TICK(c, 25);
    // 000564  pop fs
    X86_AT(c, 0x564u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000566  movsx eax, ah
    X86_AT(c, 0x566u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000569  pop edi
    X86_AT(c, 0x569u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00056a  pop esi
    X86_AT(c, 0x56au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00056b  ret 
    X86_AT(c, 0x56bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x544u, "ran off the end of a function");
}
void f_00000636(X86Cpu& c) {
    X86_TICK(c, 42);
    // 000636  push ebx
    X86_AT(c, 0x636u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 000637  push esi
    X86_AT(c, 0x637u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 000638  push edi
    X86_AT(c, 0x638u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000639  mov edi, dword ptr [esp + 0x10]
    X86_AT(c, 0x639u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 00063d  mov al, byte ptr [esp + 0x14]
    X86_AT(c, 0x63du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u))));
    // 000641  mov dx, word ptr [esp + 0x18]
    X86_AT(c, 0x641u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x18u))));
    // 000646  mov bx, word ptr [esp + 0x1c]
    X86_AT(c, 0x646u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x1Cu))));
    // 00064b  mov esi, dword ptr [esp + 0x20]
    X86_AT(c, 0x64bu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x20u)));
    // 00064f  mov ah, 0x2b
    X86_AT(c, 0x64fu);
    s8(c, 4, 0x2Bu);
    // 000651  push fs
    X86_AT(c, 0x651u);
    push32(c, c.sreg[4]);
    // 000653  push 0x110
    X86_AT(c, 0x653u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000658  pop fs
    X86_AT(c, 0x658u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00065a  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x65au);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x661u); }
    X86_RET(c, 0x661u);
    X86_TICK(c, 29);
    // 000661  pop fs
    X86_AT(c, 0x661u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000663  movsx eax, ah
    X86_AT(c, 0x663u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000666  pop edi
    X86_AT(c, 0x666u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000667  pop esi
    X86_AT(c, 0x667u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000668  pop ebx
    X86_AT(c, 0x668u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 000669  ret 
    X86_AT(c, 0x669u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x636u, "ran off the end of a function");
}
void f_00000789(X86Cpu& c) {
    X86_TICK(c, 28);
    // 000789  push esi
    X86_AT(c, 0x789u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00078a  push edi
    X86_AT(c, 0x78au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00078b  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x78bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 00078f  mov esi, dword ptr [esp + 0x10]
    X86_AT(c, 0x78fu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 000793  mov ah, 0x41
    X86_AT(c, 0x793u);
    s8(c, 4, 0x41u);
    // 000795  push fs
    X86_AT(c, 0x795u);
    push32(c, c.sreg[4]);
    // 000797  push 0x110
    X86_AT(c, 0x797u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 00079c  pop fs
    X86_AT(c, 0x79cu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00079e  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x79eu);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x7a5u); }
    X86_RET(c, 0x7a5u);
    X86_TICK(c, 25);
    // 0007a5  pop fs
    X86_AT(c, 0x7a5u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0007a7  movsx eax, ah
    X86_AT(c, 0x7a7u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0007aa  pop edi
    X86_AT(c, 0x7aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0007ab  pop esi
    X86_AT(c, 0x7abu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0007ac  ret 
    X86_AT(c, 0x7acu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x789u, "ran off the end of a function");
}
void f_0000083d(X86Cpu& c) {
    X86_TICK(c, 28);
    // 00083d  push esi
    X86_AT(c, 0x83du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00083e  push edi
    X86_AT(c, 0x83eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00083f  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x83fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 000843  mov esi, dword ptr [esp + 0x10]
    X86_AT(c, 0x843u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 000847  mov ah, 0x46
    X86_AT(c, 0x847u);
    s8(c, 4, 0x46u);
    // 000849  push fs
    X86_AT(c, 0x849u);
    push32(c, c.sreg[4]);
    // 00084b  push 0x110
    X86_AT(c, 0x84bu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000850  pop fs
    X86_AT(c, 0x850u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000852  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x852u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x859u); }
    X86_RET(c, 0x859u);
    X86_TICK(c, 25);
    // 000859  pop fs
    X86_AT(c, 0x859u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00085b  movsx eax, ah
    X86_AT(c, 0x85bu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 00085e  pop edi
    X86_AT(c, 0x85eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00085f  pop esi
    X86_AT(c, 0x85fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000860  ret 
    X86_AT(c, 0x860u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x83du, "ran off the end of a function");
}
void f_00000885(X86Cpu& c) {
    X86_TICK(c, 28);
    // 000885  push esi
    X86_AT(c, 0x885u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 000886  push edi
    X86_AT(c, 0x886u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000887  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x887u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 00088b  mov esi, dword ptr [esp + 0x10]
    X86_AT(c, 0x88bu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 00088f  mov ah, 0x48
    X86_AT(c, 0x88fu);
    s8(c, 4, 0x48u);
    // 000891  push fs
    X86_AT(c, 0x891u);
    push32(c, c.sreg[4]);
    // 000893  push 0x110
    X86_AT(c, 0x893u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000898  pop fs
    X86_AT(c, 0x898u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00089a  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x89au);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x8a1u); }
    X86_RET(c, 0x8a1u);
    X86_TICK(c, 25);
    // 0008a1  pop fs
    X86_AT(c, 0x8a1u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0008a3  movsx eax, ah
    X86_AT(c, 0x8a3u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0008a6  pop edi
    X86_AT(c, 0x8a6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0008a7  pop esi
    X86_AT(c, 0x8a7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0008a8  ret 
    X86_AT(c, 0x8a8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x885u, "ran off the end of a function");
}
void f_000008a9(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0008a9  push esi
    X86_AT(c, 0x8a9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0008aa  push edi
    X86_AT(c, 0x8aau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0008ab  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x8abu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0008af  mov esi, dword ptr [esp + 0x10]
    X86_AT(c, 0x8afu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 0008b3  mov ah, 0x49
    X86_AT(c, 0x8b3u);
    s8(c, 4, 0x49u);
    // 0008b5  push fs
    X86_AT(c, 0x8b5u);
    push32(c, c.sreg[4]);
    // 0008b7  push 0x110
    X86_AT(c, 0x8b7u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0008bc  pop fs
    X86_AT(c, 0x8bcu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0008be  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x8beu);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x8c5u); }
    X86_RET(c, 0x8c5u);
    X86_TICK(c, 25);
    // 0008c5  pop fs
    X86_AT(c, 0x8c5u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0008c7  movsx eax, ah
    X86_AT(c, 0x8c7u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0008ca  pop edi
    X86_AT(c, 0x8cau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0008cb  pop esi
    X86_AT(c, 0x8cbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0008cc  ret 
    X86_AT(c, 0x8ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a9u, "ran off the end of a function");
}
void f_000009fd(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0009fd  push esi
    X86_AT(c, 0x9fdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0009fe  push edi
    X86_AT(c, 0x9feu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0009ff  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x9ffu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 000a03  mov esi, dword ptr [esp + 0x10]
    X86_AT(c, 0xa03u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 000a07  mov ah, 0x60
    X86_AT(c, 0xa07u);
    s8(c, 4, 0x60u);
    // 000a09  push fs
    X86_AT(c, 0xa09u);
    push32(c, c.sreg[4]);
    // 000a0b  push 0x110
    X86_AT(c, 0xa0bu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000a10  pop fs
    X86_AT(c, 0xa10u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000a12  lcall fword ptr fs:[0x20]
    X86_AT(c, 0xa12u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0xa19u); }
    X86_RET(c, 0xa19u);
    X86_TICK(c, 25);
    // 000a19  pop fs
    X86_AT(c, 0xa19u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000a1b  movsx eax, ah
    X86_AT(c, 0xa1bu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000a1e  pop edi
    X86_AT(c, 0xa1eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000a1f  pop esi
    X86_AT(c, 0xa1fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000a20  ret 
    X86_AT(c, 0xa20u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9fdu, "ran off the end of a function");
}
void f_00000a45(X86Cpu& c) {
    X86_TICK(c, 32);
    // 000a45  push esi
    X86_AT(c, 0xa45u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 000a46  push edi
    X86_AT(c, 0xa46u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000a47  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0xa47u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 000a4b  mov al, byte ptr [esp + 0x10]
    X86_AT(c, 0xa4bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u))));
    // 000a4f  mov esi, dword ptr [esp + 0x14]
    X86_AT(c, 0xa4fu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u)));
    // 000a53  mov ah, 0x62
    X86_AT(c, 0xa53u);
    s8(c, 4, 0x62u);
    // 000a55  push fs
    X86_AT(c, 0xa55u);
    push32(c, c.sreg[4]);
    // 000a57  push 0x110
    X86_AT(c, 0xa57u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000a5c  pop fs
    X86_AT(c, 0xa5cu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000a5e  lcall fword ptr fs:[0x20]
    X86_AT(c, 0xa5eu);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0xa65u); }
    X86_RET(c, 0xa65u);
    X86_TICK(c, 25);
    // 000a65  pop fs
    X86_AT(c, 0xa65u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000a67  movsx eax, ah
    X86_AT(c, 0xa67u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000a6a  pop edi
    X86_AT(c, 0xa6au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000a6b  pop esi
    X86_AT(c, 0xa6bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000a6c  ret 
    X86_AT(c, 0xa6cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa45u, "ran off the end of a function");
}
void f_0004baa4(X86Cpu& c) {
    X86_TICK(c, 26);
    // 04baa4  push ebp
    X86_AT(c, 0x4baa4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04baa5  mov ebp, esp
    X86_AT(c, 0x4baa5u);
    c.r[5] = c.r[4];
    // 04baa7  push ebx
    X86_AT(c, 0x4baa7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04baa8  push edi
    X86_AT(c, 0x4baa8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04baa9  mov bl, byte ptr [ebp + 0xc]
    X86_AT(c, 0x4baa9u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 04baac  mov edi, 0xffffffff
    X86_AT(c, 0x4baacu);
    c.r[7] = 0xFFFFFFFFu;
    // 04bab1  cmp byte ptr [ebp + 8], 0
    X86_AT(c, 0x4bab1u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 1);
    // 04bab5  jne 0x4babe
    X86_AT(c, 0x4bab5u);
    if (x86_cc(c, 5)) { goto L_4babe; }
    X86_TICK(c, 9);
    // 04bab7  sub eax, eax
    X86_AT(c, 0x4bab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04bab9  jmp 0x4bc1c
    X86_AT(c, 0x4bab9u);
    goto L_4bc1c;
L_4babe:
    X86_TICK(c, 12);
    // 04babe  cmp byte ptr [ebp + 8], 2
    X86_AT(c, 0x4babeu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x2u, 0, 1);
    // 04bac2  jne 0x4bac9
    X86_AT(c, 0x4bac2u);
    if (x86_cc(c, 5)) { goto L_4bac9; }
    X86_TICK(c, 2);
    // 04bac4  mov edi, 0x100
    X86_AT(c, 0x4bac4u);
    c.r[7] = 0x100u;
L_4bac9:
    X86_TICK(c, 12);
    // 04bac9  cmp byte ptr [ebp + 8], 0x10
    X86_AT(c, 0x4bac9u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x10u, 0, 1);
    // 04bacd  jne 0x4bad4
    X86_AT(c, 0x4bacdu);
    if (x86_cc(c, 5)) { goto L_4bad4; }
    X86_TICK(c, 2);
    // 04bacf  mov edi, 0x102
    X86_AT(c, 0x4bacfu);
    c.r[7] = 0x102u;
L_4bad4:
    X86_TICK(c, 12);
    // 04bad4  cmp byte ptr [ebp + 8], 0x22
    X86_AT(c, 0x4bad4u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x22u, 0, 1);
    // 04bad8  jne 0x4badf
    X86_AT(c, 0x4bad8u);
    if (x86_cc(c, 5)) { goto L_4badf; }
    X86_TICK(c, 2);
    // 04bada  mov edi, 0x104
    X86_AT(c, 0x4badau);
    c.r[7] = 0x104u;
L_4badf:
    X86_TICK(c, 12);
    // 04badf  cmp byte ptr [ebp + 8], 0x23
    X86_AT(c, 0x4badfu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x23u, 0, 1);
    // 04bae3  jne 0x4baea
    X86_AT(c, 0x4bae3u);
    if (x86_cc(c, 5)) { goto L_4baea; }
    X86_TICK(c, 2);
    // 04bae5  mov edi, 0x108
    X86_AT(c, 0x4bae5u);
    c.r[7] = 0x108u;
L_4baea:
    X86_TICK(c, 12);
    // 04baea  cmp byte ptr [ebp + 8], 0x80
    X86_AT(c, 0x4baeau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x80u, 0, 1);
    // 04baee  jne 0x4bb65
    X86_AT(c, 0x4baeeu);
    if (x86_cc(c, 5)) { goto L_4bb65; }
    X86_TICK(c, 14);
    // 04baf4  movzx ebx, bl
    X86_AT(c, 0x4baf4u);
    c.r[3] = g8(c, 3);
    // 04baf7  mov eax, ebx
    X86_AT(c, 0x4baf7u);
    c.r[0] = c.r[3];
    // 04baf9  and eax, 0x80
    X86_AT(c, 0x4baf9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x80u, 4); }
    // 04bafe  cmp eax, 0x80
    X86_AT(c, 0x4bafeu);
    (void)x86_sub(c, c.r[0], 0x80u, 0, 4);
    // 04bb03  jne 0x4bb0a
    X86_AT(c, 0x4bb03u);
    if (x86_cc(c, 5)) { goto L_4bb0a; }
    X86_TICK(c, 2);
    // 04bb05  mov edi, 0x80
    X86_AT(c, 0x4bb05u);
    c.r[7] = 0x80u;
L_4bb0a:
    X86_TICK(c, 11);
    // 04bb0a  mov eax, ebx
    X86_AT(c, 0x4bb0au);
    c.r[0] = c.r[3];
    // 04bb0c  and al, 0x40
    X86_AT(c, 0x4bb0cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x40u, 1)); }
    // 04bb0e  cmp al, 0x40
    X86_AT(c, 0x4bb0eu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 04bb10  jne 0x4bb17
    X86_AT(c, 0x4bb10u);
    if (x86_cc(c, 5)) { goto L_4bb17; }
    X86_TICK(c, 2);
    // 04bb12  mov edi, 0x40
    X86_AT(c, 0x4bb12u);
    c.r[7] = 0x40u;
L_4bb17:
    X86_TICK(c, 11);
    // 04bb17  mov eax, ebx
    X86_AT(c, 0x4bb17u);
    c.r[0] = c.r[3];
    // 04bb19  and al, 0x20
    X86_AT(c, 0x4bb19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x20u, 1)); }
    // 04bb1b  cmp al, 0x20
    X86_AT(c, 0x4bb1bu);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 04bb1d  jne 0x4bb24
    X86_AT(c, 0x4bb1du);
    if (x86_cc(c, 5)) { goto L_4bb24; }
    X86_TICK(c, 2);
    // 04bb1f  mov edi, 0x20
    X86_AT(c, 0x4bb1fu);
    c.r[7] = 0x20u;
L_4bb24:
    X86_TICK(c, 11);
    // 04bb24  mov eax, ebx
    X86_AT(c, 0x4bb24u);
    c.r[0] = c.r[3];
    // 04bb26  and al, 0x10
    X86_AT(c, 0x4bb26u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x10u, 1)); }
    // 04bb28  cmp al, 0x10
    X86_AT(c, 0x4bb28u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 04bb2a  jne 0x4bb31
    X86_AT(c, 0x4bb2au);
    if (x86_cc(c, 5)) { goto L_4bb31; }
    X86_TICK(c, 2);
    // 04bb2c  mov edi, 0x10
    X86_AT(c, 0x4bb2cu);
    c.r[7] = 0x10u;
L_4bb31:
    X86_TICK(c, 11);
    // 04bb31  mov eax, ebx
    X86_AT(c, 0x4bb31u);
    c.r[0] = c.r[3];
    // 04bb33  and al, 8
    X86_AT(c, 0x4bb33u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x8u, 1)); }
    // 04bb35  cmp al, 8
    X86_AT(c, 0x4bb35u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 04bb37  jne 0x4bb3e
    X86_AT(c, 0x4bb37u);
    if (x86_cc(c, 5)) { goto L_4bb3e; }
    X86_TICK(c, 2);
    // 04bb39  mov edi, 8
    X86_AT(c, 0x4bb39u);
    c.r[7] = 0x8u;
L_4bb3e:
    X86_TICK(c, 11);
    // 04bb3e  mov eax, ebx
    X86_AT(c, 0x4bb3eu);
    c.r[0] = c.r[3];
    // 04bb40  and al, 4
    X86_AT(c, 0x4bb40u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x4u, 1)); }
    // 04bb42  cmp al, 4
    X86_AT(c, 0x4bb42u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 04bb44  jne 0x4bb4b
    X86_AT(c, 0x4bb44u);
    if (x86_cc(c, 5)) { goto L_4bb4b; }
    X86_TICK(c, 2);
    // 04bb46  mov edi, 4
    X86_AT(c, 0x4bb46u);
    c.r[7] = 0x4u;
L_4bb4b:
    X86_TICK(c, 11);
    // 04bb4b  mov eax, ebx
    X86_AT(c, 0x4bb4bu);
    c.r[0] = c.r[3];
    // 04bb4d  and al, 2
    X86_AT(c, 0x4bb4du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x2u, 1)); }
    // 04bb4f  cmp al, 2
    X86_AT(c, 0x4bb4fu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 04bb51  jne 0x4bb58
    X86_AT(c, 0x4bb51u);
    if (x86_cc(c, 5)) { goto L_4bb58; }
    X86_TICK(c, 2);
    // 04bb53  mov edi, 2
    X86_AT(c, 0x4bb53u);
    c.r[7] = 0x2u;
L_4bb58:
    X86_TICK(c, 11);
    // 04bb58  mov eax, ebx
    X86_AT(c, 0x4bb58u);
    c.r[0] = c.r[3];
    // 04bb5a  and al, 1
    X86_AT(c, 0x4bb5au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 04bb5c  dec al
    X86_AT(c, 0x4bb5cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 04bb5e  jne 0x4bb65
    X86_AT(c, 0x4bb5eu);
    if (x86_cc(c, 5)) { goto L_4bb65; }
    X86_TICK(c, 2);
    // 04bb60  mov edi, 1
    X86_AT(c, 0x4bb60u);
    c.r[7] = 0x1u;
L_4bb65:
    X86_TICK(c, 9);
    // 04bb65  mov edx, edi
    X86_AT(c, 0x4bb65u);
    c.r[2] = c.r[7];
    // 04bb67  cmp edx, 0x20
    X86_AT(c, 0x4bb67u);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 04bb6a  ja 0x4bbc7
    X86_AT(c, 0x4bb6au);
    if (x86_cc(c, 7)) { goto L_4bbc7; }
    X86_TICK(c, 7);
    // 04bb6c  cmp edx, 0x20
    X86_AT(c, 0x4bb6cu);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 04bb6f  je 0x4bc06
    X86_AT(c, 0x4bb6fu);
    if (x86_cc(c, 4)) { goto L_4bc06; }
    X86_TICK(c, 9);
    // 04bb75  dec edx
    X86_AT(c, 0x4bb75u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 04bb76  cmp edx, 0xf
    X86_AT(c, 0x4bb76u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 04bb79  ja 0x4bc0d
    X86_AT(c, 0x4bb79u);
    if (x86_cc(c, 7)) { goto L_4bc0d; }
    X86_TICK(c, 7);
    // 04bb7f  jmp dword ptr cs:[edx*4 + 0x4bb87]
    X86_AT(c, 0x4bb7fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0x4BB87u)));
      switch (t) {
      case 0x4bbf1u: goto L_4bbf1;
      case 0x4bbf8u: goto L_4bbf8;
      case 0x4bbffu: goto L_4bbff;
      case 0x4bc0du: goto L_4bc0d;
      case 0x4bc1au: goto L_4bc1a;
      default: x86_jump(c, t); return; } }
L_4bbc7:
    X86_TICK(c, 7);
    // 04bbc7  cmp edx, 0x80
    X86_AT(c, 0x4bbc7u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 04bbcd  je 0x4bc1a
    X86_AT(c, 0x4bbcdu);
    if (x86_cc(c, 4)) { goto L_4bc1a; }
    X86_TICK(c, 7);
    // 04bbcf  cmp edx, 0x100
    X86_AT(c, 0x4bbcfu);
    (void)x86_sub(c, c.r[2], 0x100u, 0, 4);
    // 04bbd5  je 0x4bc1a
    X86_AT(c, 0x4bbd5u);
    if (x86_cc(c, 4)) { goto L_4bc1a; }
    X86_TICK(c, 7);
    // 04bbd7  cmp edx, 0x102
    X86_AT(c, 0x4bbd7u);
    (void)x86_sub(c, c.r[2], 0x102u, 0, 4);
    // 04bbdd  je 0x4bc1a
    X86_AT(c, 0x4bbddu);
    if (x86_cc(c, 4)) { goto L_4bc1a; }
    X86_TICK(c, 7);
    // 04bbdf  cmp edx, 0x104
    X86_AT(c, 0x4bbdfu);
    (void)x86_sub(c, c.r[2], 0x104u, 0, 4);
    // 04bbe5  je 0x4bc1a
    X86_AT(c, 0x4bbe5u);
    if (x86_cc(c, 4)) { goto L_4bc1a; }
    X86_TICK(c, 7);
    // 04bbe7  cmp edx, 0x108
    X86_AT(c, 0x4bbe7u);
    (void)x86_sub(c, c.r[2], 0x108u, 0, 4);
    // 04bbed  je 0x4bc1a
    X86_AT(c, 0x4bbedu);
    if (x86_cc(c, 4)) { goto L_4bc1a; }
    X86_TICK(c, 7);
    // 04bbef  jmp 0x4bc0d
    X86_AT(c, 0x4bbefu);
    goto L_4bc0d;
L_4bbf1:
    X86_TICK(c, 9);
    // 04bbf1  push 0xdf8
    X86_AT(c, 0x4bbf1u);
    { uint32_t v = 0xDF8u; push32(c, v); }
    // 04bbf6  jmp 0x4bc12
    X86_AT(c, 0x4bbf6u);
    goto L_4bc12;
L_4bbf8:
    X86_TICK(c, 9);
    // 04bbf8  push 0xe34
    X86_AT(c, 0x4bbf8u);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 04bbfd  jmp 0x4bc12
    X86_AT(c, 0x4bbfdu);
    goto L_4bc12;
L_4bbff:
    X86_TICK(c, 9);
    // 04bbff  push 0xe70
    X86_AT(c, 0x4bbffu);
    { uint32_t v = 0xE70u; push32(c, v); }
    // 04bc04  jmp 0x4bc12
    X86_AT(c, 0x4bc04u);
    goto L_4bc12;
L_4bc06:
    X86_TICK(c, 9);
    // 04bc06  push 0xea4
    X86_AT(c, 0x4bc06u);
    { uint32_t v = 0xEA4u; push32(c, v); }
    // 04bc0b  jmp 0x4bc12
    X86_AT(c, 0x4bc0bu);
    goto L_4bc12;
L_4bc0d:
    X86_TICK(c, 2);
    // 04bc0d  push 0xee8
    X86_AT(c, 0x4bc0du);
    { uint32_t v = 0xEE8u; push32(c, v); }
L_4bc12:
    X86_TICK(c, 7);
    // 04bc12  call 0x4f0dc
    X86_AT(c, 0x4bc12u);
    push32(c, 0x4bc17u); x86_call_known(c, 0x4f0dcu, f_0004f0dc); X86_RET(c, 0x4bc17u);
    X86_TICK(c, 2);
    // 04bc17  add esp, 4
    X86_AT(c, 0x4bc17u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_4bc1a:
    X86_TICK(c, 2);
    // 04bc1a  mov eax, edi
    X86_AT(c, 0x4bc1au);
    c.r[0] = c.r[7];
L_4bc1c:
    X86_TICK(c, 24);
    // 04bc1c  pop edi
    X86_AT(c, 0x4bc1cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04bc1d  pop ebx
    X86_AT(c, 0x4bc1du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04bc1e  leave 
    X86_AT(c, 0x4bc1eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04bc1f  ret 
    X86_AT(c, 0x4bc1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4baa4u, "ran off the end of a function");
}
void f_0004bc20(X86Cpu& c) {
    X86_TICK(c, 9);
    // 04bc20  push 0xf20
    X86_AT(c, 0x4bc20u);
    { uint32_t v = 0xF20u; push32(c, v); }
    // 04bc25  call 0x4f0dc
    X86_AT(c, 0x4bc25u);
    push32(c, 0x4bc2au); x86_call_known(c, 0x4f0dcu, f_0004f0dc); X86_RET(c, 0x4bc2au);
    X86_TICK(c, 14);
    // 04bc2a  mov eax, 0xffffffff
    X86_AT(c, 0x4bc2au);
    c.r[0] = 0xFFFFFFFFu;
    // 04bc2f  add esp, 4
    X86_AT(c, 0x4bc2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04bc32  ret 
    X86_AT(c, 0x4bc32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4bc20u, "ran off the end of a function");
}
void f_0004bc34(X86Cpu& c) {
    X86_TICK(c, 17);
    // 04bc34  mov dword ptr [0xdb4], 0x250f
    X86_AT(c, 0x4bc34u);
    wr32((c.sbase[3] + (uint32_t)(0xDB4u)), 0x250Fu);
    // 04bc3e  mov dword ptr [0xdb8], 0xb24
    X86_AT(c, 0x4bc3eu);
    wr32((c.sbase[3] + (uint32_t)(0xDB8u)), 0xB24u);
    // 04bc48  mov dword ptr [0xdbc], 0x12f
    X86_AT(c, 0x4bc48u);
    wr32((c.sbase[3] + (uint32_t)(0xDBCu)), 0x12Fu);
    // 04bc52  push 0xdd0
    X86_AT(c, 0x4bc52u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 04bc57  push 0xdb4
    X86_AT(c, 0x4bc57u);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 04bc5c  call 0x5471a
    X86_AT(c, 0x4bc5cu);
    push32(c, 0x4bc61u); x86_call_known(c, 0x5471au, f_0005471a); X86_RET(c, 0x4bc61u);
    X86_TICK(c, 14);
    // 04bc61  add esp, 8
    X86_AT(c, 0x4bc61u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04bc64  cmp dword ptr [0xde8], 0
    X86_AT(c, 0x4bc64u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDE8u))), 0x0u, 0, 4);
    // 04bc6b  jne 0x4bcd0
    X86_AT(c, 0x4bc6bu);
    if (x86_cc(c, 5)) { goto L_4bcd0; }
    X86_TICK(c, 38);
    // 04bc6d  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x4bc6du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 04bc72  and eax, 0xffff
    X86_AT(c, 0x4bc72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 04bc77  mov dword ptr [0xda8], eax
    X86_AT(c, 0x4bc77u);
    wr32((c.sbase[3] + (uint32_t)(0xDA8u)), c.r[0]);
    // 04bc7c  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x4bc7cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 04bc81  shr eax, 0x10
    X86_AT(c, 0x4bc81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 04bc84  and eax, 0xffff
    X86_AT(c, 0x4bc84u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 04bc89  mov dword ptr [0xda4], eax
    X86_AT(c, 0x4bc89u);
    wr32((c.sbase[3] + (uint32_t)(0xDA4u)), c.r[0]);
    // 04bc8e  mov dword ptr [0xdb4], 0x250f
    X86_AT(c, 0x4bc8eu);
    wr32((c.sbase[3] + (uint32_t)(0xDB4u)), 0x250Fu);
    // 04bc98  mov word ptr [0xdb8], 0x93
    X86_AT(c, 0x4bc98u);
    wr16((c.sbase[3] + (uint32_t)(0xDB8u)), 0x93u);
    // 04bca1  mov dword ptr [0xdb8], 0xc54
    X86_AT(c, 0x4bca1u);
    wr32((c.sbase[3] + (uint32_t)(0xDB8u)), 0xC54u);
    // 04bcab  mov dword ptr [0xdbc], 0xa
    X86_AT(c, 0x4bcabu);
    wr32((c.sbase[3] + (uint32_t)(0xDBCu)), 0xAu);
    // 04bcb5  push 0xdd0
    X86_AT(c, 0x4bcb5u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 04bcba  push 0xdb4
    X86_AT(c, 0x4bcbau);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 04bcbf  call 0x5471a
    X86_AT(c, 0x4bcbfu);
    push32(c, 0x4bcc4u); x86_call_known(c, 0x5471au, f_0005471a); X86_RET(c, 0x4bcc4u);
    X86_TICK(c, 14);
    // 04bcc4  add esp, 8
    X86_AT(c, 0x4bcc4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04bcc7  cmp dword ptr [0xde8], 0
    X86_AT(c, 0x4bcc7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDE8u))), 0x0u, 0, 4);
    // 04bcce  je 0x4bcd7
    X86_AT(c, 0x4bcceu);
    if (x86_cc(c, 4)) { goto L_4bcd7; }
L_4bcd0:
    X86_TICK(c, 7);
    // 04bcd0  call 0x4bc20
    X86_AT(c, 0x4bcd0u);
    push32(c, 0x4bcd5u); x86_call_known(c, 0x4bc20u, f_0004bc20); X86_RET(c, 0x4bcd5u);
    X86_TICK(c, 7);
    // 04bcd5  jmp 0x4bcfa
    X86_AT(c, 0x4bcd5u);
    goto L_4bcfa;
L_4bcd7:
    X86_TICK(c, 21);
    // 04bcd7  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x4bcd7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 04bcdc  and eax, 0xffff
    X86_AT(c, 0x4bcdcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 04bce1  mov dword ptr [0xdb0], eax
    X86_AT(c, 0x4bce1u);
    wr32((c.sbase[3] + (uint32_t)(0xDB0u)), c.r[0]);
    // 04bce6  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x4bce6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 04bceb  shr eax, 0x10
    X86_AT(c, 0x4bcebu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 04bcee  and eax, 0xffff
    X86_AT(c, 0x4bceeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 04bcf3  mov dword ptr [0xdac], eax
    X86_AT(c, 0x4bcf3u);
    wr32((c.sbase[3] + (uint32_t)(0xDACu)), c.r[0]);
    // 04bcf8  sub eax, eax
    X86_AT(c, 0x4bcf8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_4bcfa:
    X86_TICK(c, 10);
    // 04bcfa  ret 
    X86_AT(c, 0x4bcfau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4bc34u, "ran off the end of a function");
}
void f_0004bcfc(X86Cpu& c) {
    X86_TICK(c, 24);
    // 04bcfc  push ebp
    X86_AT(c, 0x4bcfcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04bcfd  mov ebp, esp
    X86_AT(c, 0x4bcfdu);
    c.r[5] = c.r[4];
    // 04bcff  push eax
    X86_AT(c, 0x4bcffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04bd00  push ebx
    X86_AT(c, 0x4bd00u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04bd01  push esi
    X86_AT(c, 0x4bd01u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04bd02  push edi
    X86_AT(c, 0x4bd02u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04bd03  cmp dword ptr [0xda0], 0
    X86_AT(c, 0x4bd03u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDA0u))), 0x0u, 0, 4);
    // 04bd0a  jne 0x4bd13
    X86_AT(c, 0x4bd0au);
    if (x86_cc(c, 5)) { goto L_4bd13; }
    X86_TICK(c, 9);
    // 04bd0c  sub eax, eax
    X86_AT(c, 0x4bd0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04bd0e  jmp 0x4be1e
    X86_AT(c, 0x4bd0eu);
    goto L_4be1e;
L_4bd13:
    X86_TICK(c, 35);
    // 04bd13  mov word ptr [0xb14], 0x93
    X86_AT(c, 0x4bd13u);
    wr16((c.sbase[3] + (uint32_t)(0xB14u)), 0x93u);
    // 04bd1c  mov ax, word ptr [0xda4]
    X86_AT(c, 0x4bd1cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDA4u))));
    // 04bd22  mov word ptr [0xb16], ax
    X86_AT(c, 0x4bd22u);
    wr16((c.sbase[3] + (uint32_t)(0xB16u)), (c.r[0] & 0xFFFFu));
    // 04bd28  mov dword ptr [0xb1e], 0x54c0
    X86_AT(c, 0x4bd28u);
    wr32((c.sbase[3] + (uint32_t)(0xB1Eu)), 0x54C0u);
    // 04bd32  mov word ptr [0xdb4], 0x2511
    X86_AT(c, 0x4bd32u);
    wr16((c.sbase[3] + (uint32_t)(0xDB4u)), 0x2511u);
    // 04bd3b  mov byte ptr [0xdbd], 0
    X86_AT(c, 0x4bd3bu);
    wr8((c.sbase[3] + (uint32_t)(0xDBDu)), 0x0u);
    // 04bd42  mov byte ptr [0xdbc], 0
    X86_AT(c, 0x4bd42u);
    wr8((c.sbase[3] + (uint32_t)(0xDBCu)), 0x0u);
    // 04bd49  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x4bd49u);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 04bd53  mov ax, word ptr [0xda8]
    X86_AT(c, 0x4bd53u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDA8u))));
    // 04bd59  mov word ptr [0xdc8], ax
    X86_AT(c, 0x4bd59u);
    wr16((c.sbase[3] + (uint32_t)(0xDC8u)), (c.r[0] & 0xFFFFu));
    // 04bd5f  push 0xdd0
    X86_AT(c, 0x4bd5fu);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 04bd64  push 0xdb4
    X86_AT(c, 0x4bd64u);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 04bd69  call 0x5471a
    X86_AT(c, 0x4bd69u);
    push32(c, 0x4bd6eu); x86_call_known(c, 0x5471au, f_0005471a); X86_RET(c, 0x4bd6eu);
    X86_TICK(c, 19);
    // 04bd6e  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x4bd6eu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 04bd74  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x4bd74u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 04bd79  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x4bd79u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 04bd7c  add esp, 8
    X86_AT(c, 0x4bd7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04bd7f  and bl, bl
    X86_AT(c, 0x4bd7fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 04bd81  je 0x4bd92
    X86_AT(c, 0x4bd81u);
    if (x86_cc(c, 4)) { goto L_4bd92; }
    X86_TICK(c, 11);
    // 04bd83  push eax
    X86_AT(c, 0x4bd83u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04bd84  push ebx
    X86_AT(c, 0x4bd84u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04bd85  call 0x4baa4
    X86_AT(c, 0x4bd85u);
    push32(c, 0x4bd8au); x86_call_known(c, 0x4baa4u, f_0004baa4); X86_RET(c, 0x4bd8au);
    X86_TICK(c, 9);
    // 04bd8a  add esp, 8
    X86_AT(c, 0x4bd8au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04bd8d  jmp 0x4be1e
    X86_AT(c, 0x4bd8du);
    goto L_4be1e;
L_4bd92:
    X86_TICK(c, 54);
    // 04bd92  mov eax, 0xb10
    X86_AT(c, 0x4bd92u);
    c.r[0] = 0xB10u;
    // 04bd97  movzx edx, byte ptr [eax + 0x14]
    X86_AT(c, 0x4bd97u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)));
    // 04bd9b  mov dword ptr [eax + 0x284], edx
    X86_AT(c, 0x4bd9bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x284u)), c.r[2]);
    // 04bda1  movzx edx, byte ptr [eax + 0x15]
    X86_AT(c, 0x4bda1u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x15u)));
    // 04bda5  mov dword ptr [eax + 0x288], edx
    X86_AT(c, 0x4bda5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x288u)), c.r[2]);
    // 04bdab  movzx edx, byte ptr [eax + 0x16]
    X86_AT(c, 0x4bdabu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x16u)));
    // 04bdaf  mov dword ptr [eax + 0x28c], edx
    X86_AT(c, 0x4bdafu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x28Cu)), c.r[2]);
    // 04bdb5  dec dword ptr [eax + 0x28c]
    X86_AT(c, 0x4bdb5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x28Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 04bdbb  mov dl, byte ptr [eax + 0x17]
    X86_AT(c, 0x4bdbbu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x17u))));
    // 04bdbe  mov byte ptr [eax + 0x279], dl
    X86_AT(c, 0x4bdbeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x279u)), g8(c, 2));
    // 04bdc4  mov dl, byte ptr [eax + 0x18]
    X86_AT(c, 0x4bdc4u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x18u))));
    // 04bdc7  mov byte ptr [eax + 0x27a], dl
    X86_AT(c, 0x4bdc7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x27Au)), g8(c, 2));
    // 04bdcd  mov dl, byte ptr [eax + 0x19]
    X86_AT(c, 0x4bdcdu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x19u))));
    // 04bdd0  mov byte ptr [eax + 0x27b], dl
    X86_AT(c, 0x4bdd0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x27Bu)), g8(c, 2));
    // 04bdd6  sub edi, edi
    X86_AT(c, 0x4bdd6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 04bdd8  mov esi, 6
    X86_AT(c, 0x4bdd8u);
    c.r[6] = 0x6u;
L_4bddd:
    X86_TICK(c, 7);
    // 04bddd  cmp edi, 0x63
    X86_AT(c, 0x4bdddu);
    (void)x86_sub(c, c.r[7], 0x63u, 0, 4);
    // 04bde0  jge 0x4be17
    X86_AT(c, 0x4bde0u);
    if (x86_cc(c, 13)) { goto L_4be17; }
    X86_TICK(c, 43);
    // 04bde2  mov eax, 0xb10
    X86_AT(c, 0x4bde2u);
    c.r[0] = 0xB10u;
    // 04bde7  lea edx, [edi + edi*2]
    X86_AT(c, 0x4bde7u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 04bdea  mov ecx, esi
    X86_AT(c, 0x4bdeau);
    c.r[1] = c.r[6];
    // 04bdec  inc esi
    X86_AT(c, 0x4bdecu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04bded  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0x4bdedu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 04bdf1  mov byte ptr [eax + edx*1 + 0x150], cl
    X86_AT(c, 0x4bdf1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u)), g8(c, 1));
    // 04bdf8  mov ecx, esi
    X86_AT(c, 0x4bdf8u);
    c.r[1] = c.r[6];
    // 04bdfa  inc esi
    X86_AT(c, 0x4bdfau);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04bdfb  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0x4bdfbu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 04bdff  mov byte ptr [eax + edx*1 + 0x151], cl
    X86_AT(c, 0x4bdffu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x151u)), g8(c, 1));
    // 04be06  mov ecx, esi
    X86_AT(c, 0x4be06u);
    c.r[1] = c.r[6];
    // 04be08  inc esi
    X86_AT(c, 0x4be08u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04be09  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0x4be09u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 04be0d  mov byte ptr [eax + edx*1 + 0x152], cl
    X86_AT(c, 0x4be0du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x152u)), g8(c, 1));
    // 04be14  inc edi
    X86_AT(c, 0x4be14u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 04be15  jmp 0x4bddd
    X86_AT(c, 0x4be15u);
    X86_POLL(c, 0x4bdddu); goto L_4bddd;
L_4be17:
    X86_TICK(c, 4);
    // 04be17  sub eax, eax
    X86_AT(c, 0x4be17u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04be19  mov dword ptr [0xda0], eax
    X86_AT(c, 0x4be19u);
    wr32((c.sbase[3] + (uint32_t)(0xDA0u)), c.r[0]);
L_4be1e:
    X86_TICK(c, 28);
    // 04be1e  pop edi
    X86_AT(c, 0x4be1eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04be1f  pop esi
    X86_AT(c, 0x4be1fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04be20  pop ebx
    X86_AT(c, 0x4be20u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04be21  leave 
    X86_AT(c, 0x4be21u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04be22  ret 
    X86_AT(c, 0x4be22u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4bcfcu, "ran off the end of a function");
}
void f_0004be1e(X86Cpu& c) {
    X86_TICK(c, 28);
    // 04be1e  pop edi
    X86_AT(c, 0x4be1eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04be1f  pop esi
    X86_AT(c, 0x4be1fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04be20  pop ebx
    X86_AT(c, 0x4be20u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04be21  leave 
    X86_AT(c, 0x4be21u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04be22  ret 
    X86_AT(c, 0x4be22u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4be1eu, "ran off the end of a function");
}
void f_0004be24(X86Cpu& c) {
    X86_TICK(c, 37);
    // 04be24  push ebp
    X86_AT(c, 0x4be24u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04be25  mov ebp, esp
    X86_AT(c, 0x4be25u);
    c.r[5] = c.r[4];
    // 04be27  push eax
    X86_AT(c, 0x4be27u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04be28  push edi
    X86_AT(c, 0x4be28u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04be29  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4be29u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04be2c  mov al, byte ptr [edi]
    X86_AT(c, 0x4be2cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 04be2e  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x4be2eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 04be31  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0x4be31u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 04be34  mov byte ptr [ebp - 2], dl
    X86_AT(c, 0x4be34u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 2));
    // 04be37  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0x4be37u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 04be3a  dec ecx
    X86_AT(c, 0x4be3au);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 04be3b  and cl, cl
    X86_AT(c, 0x4be3bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 04be3d  jge 0x4be4d
    X86_AT(c, 0x4be3du);
    if (x86_cc(c, 13)) { goto L_4be4d; }
    X86_TICK(c, 20);
    // 04be3f  mov cl, 0x4a
    X86_AT(c, 0x4be3fu);
    s8(c, 1, 0x4Au);
    // 04be41  dec byte ptr [ebp - 2]
    X86_AT(c, 0x4be41u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 04be44  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x4be44u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 04be48  jge 0x4be4d
    X86_AT(c, 0x4be48u);
    if (x86_cc(c, 13)) { goto L_4be4d; }
    X86_TICK(c, 6);
    // 04be4a  dec byte ptr [ebp - 1]
    X86_AT(c, 0x4be4au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
L_4be4d:
    X86_TICK(c, 34);
    // 04be4d  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0x4be4du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 04be50  mov byte ptr [edi], al
    X86_AT(c, 0x4be50u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 04be52  mov al, byte ptr [ebp - 2]
    X86_AT(c, 0x4be52u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 04be55  mov byte ptr [edi + 1], al
    X86_AT(c, 0x4be55u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 04be58  mov byte ptr [edi + 2], cl
    X86_AT(c, 0x4be58u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 04be5b  pop edi
    X86_AT(c, 0x4be5bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04be5c  leave 
    X86_AT(c, 0x4be5cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04be5d  ret 
    X86_AT(c, 0x4be5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4be24u, "ran off the end of a function");
}
void f_0004c004(X86Cpu& c) {
    X86_TICK(c, 19);
    // 04c004  push ebp
    X86_AT(c, 0x4c004u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04c005  mov ebp, esp
    X86_AT(c, 0x4c005u);
    c.r[5] = c.r[4];
    // 04c007  sub esp, 8
    X86_AT(c, 0x4c007u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 04c00a  push ebx
    X86_AT(c, 0x4c00au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04c00b  push esi
    X86_AT(c, 0x4c00bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04c00c  push edi
    X86_AT(c, 0x4c00cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04c00d  call 0x4c3c0
    X86_AT(c, 0x4c00du);
    push32(c, 0x4c012u); x86_call_known(c, 0x4c3c0u, f_0004c3c0); X86_RET(c, 0x4c012u);
    X86_TICK(c, 12);
    // 04c012  cmp dword ptr [0xda0], 0
    X86_AT(c, 0x4c012u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDA0u))), 0x0u, 0, 4);
    // 04c019  jne 0x4c05d
    X86_AT(c, 0x4c019u);
    if (x86_cc(c, 5)) { goto L_4c05d; }
    X86_TICK(c, 18);
    // 04c01b  dec dword ptr [ebp + 0xc]
    X86_AT(c, 0x4c01bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 04c01e  cmp dword ptr [ebp + 0xc], 0xffffffff
    X86_AT(c, 0x4c01eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0xFFFFFFFFu, 0, 4);
    // 04c022  je 0x4c1cb
    X86_AT(c, 0x4c022u);
    if (x86_cc(c, 4)) { goto L_4c1cb; }
    X86_TICK(c, 15);
    // 04c028  mov eax, dword ptr [0xd9c]
    X86_AT(c, 0x4c028u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD9Cu)));
    // 04c02d  cmp eax, dword ptr [ebp + 8]
    X86_AT(c, 0x4c02du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 04c030  jge 0x4c035
    X86_AT(c, 0x4c030u);
    if (x86_cc(c, 13)) { goto L_4c035; }
    X86_TICK(c, 2);
    // 04c032  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0x4c032u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
L_4c035:
    X86_TICK(c, 4);
    // 04c035  mov edi, 0xffffffff
    X86_AT(c, 0x4c035u);
    c.r[7] = 0xFFFFFFFFu;
    // 04c03a  mov esi, edi
    X86_AT(c, 0x4c03au);
    c.r[6] = c.r[7];
L_4c03c:
    X86_TICK(c, 9);
    // 04c03c  inc esi
    X86_AT(c, 0x4c03cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04c03d  cmp esi, 0x63
    X86_AT(c, 0x4c03du);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 04c040  jge 0x4c054
    X86_AT(c, 0x4c040u);
    if (x86_cc(c, 13)) { goto L_4c054; }
    X86_TICK(c, 13);
    // 04c042  movzx eax, byte ptr [esi + esi*2 + 0xc60]
    X86_AT(c, 0x4c042u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[6] * 2 + 0xC60u)));
    // 04c04a  test al, 0x80
    X86_AT(c, 0x4c04au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 04c04c  jne 0x4c04f
    X86_AT(c, 0x4c04cu);
    if (x86_cc(c, 5)) { goto L_4c04f; }
    X86_TICK(c, 2);
    // 04c04e  inc edi
    X86_AT(c, 0x4c04eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_4c04f:
    X86_TICK(c, 11);
    // 04c04f  cmp edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4c04fu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 04c052  jne 0x4c03c
    X86_AT(c, 0x4c052u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4c03cu); goto L_4c03c; }
L_4c054:
    X86_TICK(c, 7);
    // 04c054  cmp esi, 0x63
    X86_AT(c, 0x4c054u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 04c057  jl 0x4c067
    X86_AT(c, 0x4c057u);
    if (x86_cc(c, 12)) { goto L_4c067; }
    X86_TICK(c, 7);
    // 04c059  and edi, edi
    X86_AT(c, 0x4c059u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 04c05b  jge 0x4c067
    X86_AT(c, 0x4c05bu);
    if (x86_cc(c, 13)) { goto L_4c067; }
L_4c05d:
    X86_TICK(c, 9);
    // 04c05d  mov eax, 0xffffffff
    X86_AT(c, 0x4c05du);
    c.r[0] = 0xFFFFFFFFu;
    // 04c062  jmp 0x4c1cd
    X86_AT(c, 0x4c062u);
    goto L_4c1cd;
L_4c067:
    X86_TICK(c, 11);
    // 04c067  cmp edi, dword ptr [0xd9c]
    X86_AT(c, 0x4c067u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xD9Cu))), 0, 4);
    // 04c06d  jne 0x4c086
    X86_AT(c, 0x4c06du);
    if (x86_cc(c, 5)) { goto L_4c086; }
    X86_TICK(c, 23);
    // 04c06f  mov al, byte ptr [0xd89]
    X86_AT(c, 0x4c06fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD89u))));
    // 04c074  mov byte ptr [ebp - 3], al
    X86_AT(c, 0x4c074u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 0));
    // 04c077  mov al, byte ptr [0xd8a]
    X86_AT(c, 0x4c077u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD8Au))));
    // 04c07c  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x4c07cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 04c07f  mov al, byte ptr [0xd8b]
    X86_AT(c, 0x4c07fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD8Bu))));
    // 04c084  jmp 0x4c0a9
    X86_AT(c, 0x4c084u);
    goto L_4c0a9;
L_4c086:
    X86_TICK(c, 20);
    // 04c086  mov eax, 0xb10
    X86_AT(c, 0x4c086u);
    c.r[0] = 0xB10u;
    // 04c08b  lea edx, [edi + edi*2]
    X86_AT(c, 0x4c08bu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 04c08e  mov cl, byte ptr [eax + edx*1 + 0x153]
    X86_AT(c, 0x4c08eu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x153u))));
    // 04c095  mov byte ptr [ebp - 3], cl
    X86_AT(c, 0x4c095u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 1));
    // 04c098  mov cl, byte ptr [eax + edx*1 + 0x154]
    X86_AT(c, 0x4c098u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x154u))));
    // 04c09f  mov byte ptr [ebp - 2], cl
    X86_AT(c, 0x4c09fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 1));
    // 04c0a2  mov al, byte ptr [eax + edx*1 + 0x155]
    X86_AT(c, 0x4c0a2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x155u))));
L_4c0a9:
    X86_TICK(c, 13);
    // 04c0a9  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x4c0a9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 04c0ac  lea eax, [ebp - 3]
    X86_AT(c, 0x4c0acu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFDu);
    // 04c0af  push eax
    X86_AT(c, 0x4c0afu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c0b0  call 0x4be24
    X86_AT(c, 0x4c0b0u);
    push32(c, 0x4c0b5u); x86_call_known(c, 0x4be24u, f_0004be24); X86_RET(c, 0x4c0b5u);
    X86_TICK(c, 17);
    // 04c0b5  movsx eax, word ptr [0xb10]
    X86_AT(c, 0x4c0b5u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xB10u)));
    // 04c0bc  push eax
    X86_AT(c, 0x4c0bcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c0bd  push eax
    X86_AT(c, 0x4c0bdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c0be  call 0x4d0c4
    X86_AT(c, 0x4c0beu);
    push32(c, 0x4c0c3u); x86_call_known(c, 0x4d0c4u, f_0004d0c4); X86_RET(c, 0x4c0c3u);
    X86_TICK(c, 2);
    // 04c0c3  add esp, 0xc
    X86_AT(c, 0x4c0c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_4c0c6:
    X86_TICK(c, 64);
    // 04c0c6  mov eax, 0xb10
    X86_AT(c, 0x4c0c6u);
    c.r[0] = 0xB10u;
    // 04c0cb  lea edx, [edi + edi*2]
    X86_AT(c, 0x4c0cbu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 04c0ce  mov cl, byte ptr [eax + edx*1 + 0x150]
    X86_AT(c, 0x4c0ceu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u))));
    // 04c0d5  mov byte ptr [eax + 0x144], cl
    X86_AT(c, 0x4c0d5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x144u)), g8(c, 1));
    // 04c0db  mov cl, byte ptr [eax + edx*1 + 0x151]
    X86_AT(c, 0x4c0dbu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x151u))));
    // 04c0e2  mov byte ptr [eax + 0x145], cl
    X86_AT(c, 0x4c0e2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x145u)), g8(c, 1));
    // 04c0e8  mov dl, byte ptr [eax + edx*1 + 0x152]
    X86_AT(c, 0x4c0e8u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x152u))));
    // 04c0ef  mov byte ptr [eax + 0x146], dl
    X86_AT(c, 0x4c0efu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x146u)), g8(c, 2));
    // 04c0f5  mov dl, byte ptr [ebp - 3]
    X86_AT(c, 0x4c0f5u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu))));
    // 04c0f8  mov byte ptr [eax + 0x147], dl
    X86_AT(c, 0x4c0f8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x147u)), g8(c, 2));
    // 04c0fe  mov dl, byte ptr [ebp - 2]
    X86_AT(c, 0x4c0feu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 04c101  mov byte ptr [eax + 0x148], dl
    X86_AT(c, 0x4c101u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x148u)), g8(c, 2));
    // 04c107  mov dl, byte ptr [ebp - 1]
    X86_AT(c, 0x4c107u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 04c10a  mov byte ptr [eax + 0x149], dl
    X86_AT(c, 0x4c10au);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x149u)), g8(c, 2));
    // 04c110  mov word ptr [eax + 4], 0x93
    X86_AT(c, 0x4c110u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), 0x93u);
    // 04c116  mov dx, word ptr [eax + 0x29c]
    X86_AT(c, 0x4c116u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x29Cu))));
    // 04c11d  mov word ptr [eax + 6], dx
    X86_AT(c, 0x4c11du);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 04c121  mov dword ptr [eax + 0xe], 0x50c0
    X86_AT(c, 0x4c121u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xEu)), 0x50C0u);
    // 04c128  mov word ptr [eax + 0x2a4], 0x2511
    X86_AT(c, 0x4c128u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2A4u)), 0x2511u);
    // 04c131  cmp dword ptr [ebp + 0xc], 0
    X86_AT(c, 0x4c131u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 4);
    // 04c135  jge 0x4c140
    X86_AT(c, 0x4c135u);
    if (x86_cc(c, 13)) { goto L_4c140; }
    X86_TICK(c, 9);
    // 04c137  mov byte ptr [eax + 0x2ad], 0xff
    X86_AT(c, 0x4c137u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x2ADu)), 0xFFu);
    // 04c13e  jmp 0x4c14f
    X86_AT(c, 0x4c13eu);
    goto L_4c14f;
L_4c140:
    X86_TICK(c, 8);
    // 04c140  mov byte ptr [0xdbd], 0xfe
    X86_AT(c, 0x4c140u);
    wr8((c.sbase[3] + (uint32_t)(0xDBDu)), 0xFEu);
    // 04c147  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x4c147u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 04c14a  mov byte ptr [0xdb9], al
    X86_AT(c, 0x4c14au);
    wr8((c.sbase[3] + (uint32_t)(0xDB9u)), g8(c, 0));
L_4c14f:
    X86_TICK(c, 21);
    // 04c14f  mov byte ptr [0xdbc], 1
    X86_AT(c, 0x4c14fu);
    wr8((c.sbase[3] + (uint32_t)(0xDBCu)), 0x1u);
    // 04c156  mov ax, word ptr [0xdb0]
    X86_AT(c, 0x4c156u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDB0u))));
    // 04c15c  mov word ptr [0xdc8], ax
    X86_AT(c, 0x4c15cu);
    wr16((c.sbase[3] + (uint32_t)(0xDC8u)), (c.r[0] & 0xFFFFu));
    // 04c162  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x4c162u);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 04c16c  push 0xdd0
    X86_AT(c, 0x4c16cu);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 04c171  push 0xdb4
    X86_AT(c, 0x4c171u);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 04c176  call 0x5471a
    X86_AT(c, 0x4c176u);
    push32(c, 0x4c17bu); x86_call_known(c, 0x5471au, f_0005471a); X86_RET(c, 0x4c17bu);
    X86_TICK(c, 19);
    // 04c17b  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x4c17bu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 04c181  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x4c181u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 04c186  mov byte ptr [ebp - 4], al
    X86_AT(c, 0x4c186u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), g8(c, 0));
    // 04c189  add esp, 8
    X86_AT(c, 0x4c189u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04c18c  and bl, bl
    X86_AT(c, 0x4c18cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 04c18e  je 0x4c1b9
    X86_AT(c, 0x4c18eu);
    if (x86_cc(c, 4)) { goto L_4c1b9; }
    X86_TICK(c, 11);
    // 04c190  push eax
    X86_AT(c, 0x4c190u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c191  push ebx
    X86_AT(c, 0x4c191u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04c192  call 0x4baa4
    X86_AT(c, 0x4c192u);
    push32(c, 0x4c197u); x86_call_known(c, 0x4baa4u, f_0004baa4); X86_RET(c, 0x4c197u);
    X86_TICK(c, 16);
    // 04c197  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x4c197u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 04c19a  add esp, 8
    X86_AT(c, 0x4c19au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04c19d  cmp dword ptr [ebp - 8], 0x102
    X86_AT(c, 0x4c19du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x102u, 0, 4);
    // 04c1a4  jne 0x4c1b9
    X86_AT(c, 0x4c1a4u);
    if (x86_cc(c, 5)) { goto L_4c1b9; }
    X86_TICK(c, 7);
    // 04c1a6  call 0x4c2b4
    X86_AT(c, 0x4c1a6u);
    push32(c, 0x4c1abu); x86_call_known(c, 0x4c2b4u, f_0004c2b4); X86_RET(c, 0x4c1abu);
L_4c1ab:
    X86_TICK(c, 7);
    // 04c1ab  call 0x4c418
    X86_AT(c, 0x4c1abu);
    push32(c, 0x4c1b0u); x86_call_known(c, 0x4c418u, f_0004c418); X86_RET(c, 0x4c1b0u);
    X86_TICK(c, 7);
    // 04c1b0  and eax, eax
    X86_AT(c, 0x4c1b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 04c1b2  jne 0x4c1ab
    X86_AT(c, 0x4c1b2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4c1abu); goto L_4c1ab; }
    X86_TICK(c, 7);
    // 04c1b4  jmp 0x4c0c6
    X86_AT(c, 0x4c1b4u);
    X86_POLL(c, 0x4c0c6u); goto L_4c0c6;
L_4c1b9:
    X86_TICK(c, 7);
    // 04c1b9  and bl, bl
    X86_AT(c, 0x4c1b9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 04c1bb  je 0x4c1cb
    X86_AT(c, 0x4c1bbu);
    if (x86_cc(c, 4)) { goto L_4c1cb; }
    X86_TICK(c, 14);
    // 04c1bd  push dword ptr [ebp - 4]
    X86_AT(c, 0x4c1bdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 04c1c0  push ebx
    X86_AT(c, 0x4c1c0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04c1c1  call 0x4baa4
    X86_AT(c, 0x4c1c1u);
    push32(c, 0x4c1c6u); x86_call_known(c, 0x4baa4u, f_0004baa4); X86_RET(c, 0x4c1c6u);
    X86_TICK(c, 9);
    // 04c1c6  add esp, 8
    X86_AT(c, 0x4c1c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04c1c9  jmp 0x4c1cd
    X86_AT(c, 0x4c1c9u);
    goto L_4c1cd;
L_4c1cb:
    X86_TICK(c, 2);
    // 04c1cb  sub eax, eax
    X86_AT(c, 0x4c1cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_4c1cd:
    X86_TICK(c, 28);
    // 04c1cd  pop edi
    X86_AT(c, 0x4c1cdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04c1ce  pop esi
    X86_AT(c, 0x4c1ceu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04c1cf  pop ebx
    X86_AT(c, 0x4c1cfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04c1d0  leave 
    X86_AT(c, 0x4c1d0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04c1d1  ret 
    X86_AT(c, 0x4c1d1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c004u, "ran off the end of a function");
}
void f_0004c2b4(X86Cpu& c) {
    X86_TICK(c, 29);
    // 04c2b4  push ebp
    X86_AT(c, 0x4c2b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04c2b5  mov ebp, esp
    X86_AT(c, 0x4c2b5u);
    c.r[5] = c.r[4];
    // 04c2b7  push eax
    X86_AT(c, 0x4c2b7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c2b8  push ebx
    X86_AT(c, 0x4c2b8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04c2b9  mov word ptr [0xb14], 0x93
    X86_AT(c, 0x4c2b9u);
    wr16((c.sbase[3] + (uint32_t)(0xB14u)), 0x93u);
    // 04c2c2  mov dword ptr [0xb1e], 0x52c0
    X86_AT(c, 0x4c2c2u);
    wr32((c.sbase[3] + (uint32_t)(0xB1Eu)), 0x52C0u);
    // 04c2cc  mov dword ptr [0xdb4], 0x2511
    X86_AT(c, 0x4c2ccu);
    wr32((c.sbase[3] + (uint32_t)(0xDB4u)), 0x2511u);
    // 04c2d6  mov word ptr [0xdbc], 0
    X86_AT(c, 0x4c2d6u);
    wr16((c.sbase[3] + (uint32_t)(0xDBCu)), 0x0u);
    // 04c2df  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x4c2dfu);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 04c2e9  push 0xdd0
    X86_AT(c, 0x4c2e9u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 04c2ee  push 0xdb4
    X86_AT(c, 0x4c2eeu);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 04c2f3  call 0x5471a
    X86_AT(c, 0x4c2f3u);
    push32(c, 0x4c2f8u); x86_call_known(c, 0x5471au, f_0005471a); X86_RET(c, 0x4c2f8u);
    X86_TICK(c, 19);
    // 04c2f8  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x4c2f8u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 04c2fe  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x4c2feu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 04c303  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x4c303u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 04c306  add esp, 8
    X86_AT(c, 0x4c306u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04c309  and bl, bl
    X86_AT(c, 0x4c309u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 04c30b  je 0x4c31e
    X86_AT(c, 0x4c30bu);
    if (x86_cc(c, 4)) { goto L_4c31e; }
    X86_TICK(c, 11);
    // 04c30d  push eax
    X86_AT(c, 0x4c30du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c30e  push ebx
    X86_AT(c, 0x4c30eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04c30f  call 0x4baa4
    X86_AT(c, 0x4c30fu);
    push32(c, 0x4c314u); x86_call_known(c, 0x4baa4u, f_0004baa4); X86_RET(c, 0x4c314u);
    X86_TICK(c, 11);
    // 04c314  mov eax, 0xffffffff
    X86_AT(c, 0x4c314u);
    c.r[0] = 0xFFFFFFFFu;
    // 04c319  add esp, 8
    X86_AT(c, 0x4c319u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04c31c  jmp 0x4c320
    X86_AT(c, 0x4c31cu);
    goto L_4c320;
L_4c31e:
    X86_TICK(c, 2);
    // 04c31e  sub eax, eax
    X86_AT(c, 0x4c31eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_4c320:
    X86_TICK(c, 20);
    // 04c320  pop ebx
    X86_AT(c, 0x4c320u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04c321  leave 
    X86_AT(c, 0x4c321u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04c322  ret 
    X86_AT(c, 0x4c322u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c2b4u, "ran off the end of a function");
}
void f_0004c3c0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 04c3c0  push edi
    X86_AT(c, 0x4c3c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04c3c1  call 0x4c418
    X86_AT(c, 0x4c3c1u);
    push32(c, 0x4c3c6u); x86_call_known(c, 0x4c418u, f_0004c418); X86_RET(c, 0x4c3c6u);
    X86_TICK(c, 10);
    // 04c3c6  xchg edi, eax
    X86_AT(c, 0x4c3c6u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 04c3c7  and edi, edi
    X86_AT(c, 0x4c3c7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 04c3c9  je 0x4c3d0
    X86_AT(c, 0x4c3c9u);
    if (x86_cc(c, 4)) { goto L_4c3d0; }
    X86_TICK(c, 7);
    // 04c3cb  cmp edi, 0xffffffff
    X86_AT(c, 0x4c3cbu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 04c3ce  jne 0x4c3d9
    X86_AT(c, 0x4c3ceu);
    if (x86_cc(c, 5)) { goto L_4c3d9; }
L_4c3d0:
    X86_TICK(c, 12);
    // 04c3d0  cmp dword ptr [0xda0], 0
    X86_AT(c, 0x4c3d0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDA0u))), 0x0u, 0, 4);
    // 04c3d7  je 0x4c413
    X86_AT(c, 0x4c3d7u);
    if (x86_cc(c, 4)) { goto L_4c413; }
L_4c3d9:
    X86_TICK(c, 7);
    // 04c3d9  call 0x4c2b4
    X86_AT(c, 0x4c3d9u);
    push32(c, 0x4c3deu); x86_call_known(c, 0x4c2b4u, f_0004c2b4); X86_RET(c, 0x4c3deu);
L_4c3de:
    X86_TICK(c, 7);
    // 04c3de  call 0x4bcfc
    X86_AT(c, 0x4c3deu);
    push32(c, 0x4c3e3u); x86_call_known(c, 0x4bcfcu, f_0004bcfc); X86_RET(c, 0x4c3e3u);
    X86_TICK(c, 10);
    // 04c3e3  xchg edi, eax
    X86_AT(c, 0x4c3e3u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 04c3e4  cmp edi, 0x80
    X86_AT(c, 0x4c3e4u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 04c3ea  je 0x4c409
    X86_AT(c, 0x4c3eau);
    if (x86_cc(c, 4)) { goto L_4c409; }
    X86_TICK(c, 7);
    // 04c3ec  cmp edi, 0x10
    X86_AT(c, 0x4c3ecu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 04c3ef  je 0x4c409
    X86_AT(c, 0x4c3efu);
    if (x86_cc(c, 4)) { goto L_4c409; }
    X86_TICK(c, 7);
    // 04c3f1  cmp edi, 4
    X86_AT(c, 0x4c3f1u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 04c3f4  je 0x4c409
    X86_AT(c, 0x4c3f4u);
    if (x86_cc(c, 4)) { goto L_4c409; }
    X86_TICK(c, 7);
    // 04c3f6  cmp edi, 0x102
    X86_AT(c, 0x4c3f6u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 04c3fc  je 0x4c409
    X86_AT(c, 0x4c3fcu);
    if (x86_cc(c, 4)) { goto L_4c409; }
    X86_TICK(c, 7);
    // 04c3fe  and edi, edi
    X86_AT(c, 0x4c3feu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 04c400  je 0x4c413
    X86_AT(c, 0x4c400u);
    if (x86_cc(c, 4)) { goto L_4c413; }
    X86_TICK(c, 9);
    // 04c402  mov eax, 1
    X86_AT(c, 0x4c402u);
    c.r[0] = 0x1u;
    // 04c407  jmp 0x4c415
    X86_AT(c, 0x4c407u);
    goto L_4c415;
L_4c409:
    X86_TICK(c, 7);
    // 04c409  cmp edi, 0x102
    X86_AT(c, 0x4c409u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 04c40f  jne 0x4c3de
    X86_AT(c, 0x4c40fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4c3deu); goto L_4c3de; }
    X86_TICK(c, 7);
    // 04c411  jmp 0x4c3d9
    X86_AT(c, 0x4c411u);
    X86_POLL(c, 0x4c3d9u); goto L_4c3d9;
L_4c413:
    X86_TICK(c, 2);
    // 04c413  sub eax, eax
    X86_AT(c, 0x4c413u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_4c415:
    X86_TICK(c, 14);
    // 04c415  pop edi
    X86_AT(c, 0x4c415u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04c416  ret 
    X86_AT(c, 0x4c416u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c3c0u, "ran off the end of a function");
}
void f_0004c418(X86Cpu& c) {
    X86_TICK(c, 43);
    // 04c418  push ebp
    X86_AT(c, 0x4c418u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04c419  mov ebp, esp
    X86_AT(c, 0x4c419u);
    c.r[5] = c.r[4];
    // 04c41b  push eax
    X86_AT(c, 0x4c41bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c41c  push ebx
    X86_AT(c, 0x4c41cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04c41d  mov word ptr [0xb14], 0x93
    X86_AT(c, 0x4c41du);
    wr16((c.sbase[3] + (uint32_t)(0xB14u)), 0x93u);
    // 04c426  mov ax, word ptr [0xdac]
    X86_AT(c, 0x4c426u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDACu))));
    // 04c42c  mov word ptr [0xb16], ax
    X86_AT(c, 0x4c42cu);
    wr16((c.sbase[3] + (uint32_t)(0xB16u)), (c.r[0] & 0xFFFFu));
    // 04c432  mov dword ptr [0xb1e], 0x53c0
    X86_AT(c, 0x4c432u);
    wr32((c.sbase[3] + (uint32_t)(0xB1Eu)), 0x53C0u);
    // 04c43c  mov word ptr [0xdb4], 0x2511
    X86_AT(c, 0x4c43cu);
    wr16((c.sbase[3] + (uint32_t)(0xDB4u)), 0x2511u);
    // 04c445  mov byte ptr [0xdbd], 0
    X86_AT(c, 0x4c445u);
    wr8((c.sbase[3] + (uint32_t)(0xDBDu)), 0x0u);
    // 04c44c  mov byte ptr [0xdbc], 0
    X86_AT(c, 0x4c44cu);
    wr8((c.sbase[3] + (uint32_t)(0xDBCu)), 0x0u);
    // 04c453  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x4c453u);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 04c45d  mov ax, word ptr [0xdb0]
    X86_AT(c, 0x4c45du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDB0u))));
    // 04c463  mov word ptr [0xdc8], ax
    X86_AT(c, 0x4c463u);
    wr16((c.sbase[3] + (uint32_t)(0xDC8u)), (c.r[0] & 0xFFFFu));
    // 04c469  push 0xdd0
    X86_AT(c, 0x4c469u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 04c46e  push 0xdb4
    X86_AT(c, 0x4c46eu);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 04c473  call 0x5471a
    X86_AT(c, 0x4c473u);
    push32(c, 0x4c478u); x86_call_known(c, 0x5471au, f_0005471a); X86_RET(c, 0x4c478u);
    X86_TICK(c, 19);
    // 04c478  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x4c478u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 04c47e  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x4c47eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 04c483  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x4c483u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 04c486  add esp, 8
    X86_AT(c, 0x4c486u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04c489  and bl, bl
    X86_AT(c, 0x4c489u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 04c48b  je 0x4c499
    X86_AT(c, 0x4c48bu);
    if (x86_cc(c, 4)) { goto L_4c499; }
    X86_TICK(c, 11);
    // 04c48d  push eax
    X86_AT(c, 0x4c48du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c48e  push ebx
    X86_AT(c, 0x4c48eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04c48f  call 0x4baa4
    X86_AT(c, 0x4c48fu);
    push32(c, 0x4c494u); x86_call_known(c, 0x4baa4u, f_0004baa4); X86_RET(c, 0x4c494u);
    X86_TICK(c, 9);
    // 04c494  add esp, 8
    X86_AT(c, 0x4c494u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04c497  jmp 0x4c4ab
    X86_AT(c, 0x4c497u);
    goto L_4c4ab;
L_4c499:
    X86_TICK(c, 12);
    // 04c499  cmp byte ptr [0xdd0], 1
    X86_AT(c, 0x4c499u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDD0u))), 0x1u, 0, 1);
    // 04c4a0  jne 0x4c4a9
    X86_AT(c, 0x4c4a0u);
    if (x86_cc(c, 5)) { goto L_4c4a9; }
    X86_TICK(c, 9);
    // 04c4a2  mov eax, 0xffffffff
    X86_AT(c, 0x4c4a2u);
    c.r[0] = 0xFFFFFFFFu;
    // 04c4a7  jmp 0x4c4ab
    X86_AT(c, 0x4c4a7u);
    goto L_4c4ab;
L_4c4a9:
    X86_TICK(c, 2);
    // 04c4a9  sub eax, eax
    X86_AT(c, 0x4c4a9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_4c4ab:
    X86_TICK(c, 20);
    // 04c4ab  pop ebx
    X86_AT(c, 0x4c4abu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04c4ac  leave 
    X86_AT(c, 0x4c4acu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04c4ad  ret 
    X86_AT(c, 0x4c4adu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c418u, "ran off the end of a function");
}
void f_0004c524(X86Cpu& c) {
    X86_TICK(c, 73);
    // 04c524  push ebp
    X86_AT(c, 0x4c524u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04c525  mov ebp, esp
    X86_AT(c, 0x4c525u);
    c.r[5] = c.r[4];
    // 04c527  sub esp, 8
    X86_AT(c, 0x4c527u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 04c52a  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4c52au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 04c52d  mov dword ptr [0x1898], eax
    X86_AT(c, 0x4c52du);
    wr32((c.sbase[3] + (uint32_t)(0x1898u)), c.r[0]);
    // 04c532  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4c532u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04c535  cdq 
    X86_AT(c, 0x4c535u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 04c536  mov ecx, 0xc
    X86_AT(c, 0x4c536u);
    c.r[1] = 0xCu;
    // 04c53b  idiv ecx
    X86_AT(c, 0x4c53bu);
    x86_idiv(c, c.r[1], 4, 0x4c53bu);
    // 04c53d  lea eax, [eax + eax*2]
    X86_AT(c, 0x4c53du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 04c540  add eax, eax
    X86_AT(c, 0x4c540u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 04c542  mov dword ptr [0x1848], eax
    X86_AT(c, 0x4c542u);
    wr32((c.sbase[3] + (uint32_t)(0x1848u)), c.r[0]);
    // 04c547  cmp eax, 0x40
    X86_AT(c, 0x4c547u);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 04c54a  jge 0x4c553
    X86_AT(c, 0x4c54au);
    if (x86_cc(c, 13)) { goto L_4c553; }
    X86_TICK(c, 9);
    // 04c54c  mov eax, 2
    X86_AT(c, 0x4c54cu);
    c.r[0] = 0x2u;
    // 04c551  jmp 0x4c5a4
    X86_AT(c, 0x4c551u);
    goto L_4c5a4;
L_4c553:
    X86_TICK(c, 29);
    // 04c553  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x4c553u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04c556  mov dword ptr [0x1850], eax
    X86_AT(c, 0x4c556u);
    wr32((c.sbase[3] + (uint32_t)(0x1850u)), c.r[0]);
    // 04c55b  mov edx, dword ptr [0x1848]
    X86_AT(c, 0x4c55bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x1848u)));
    // 04c561  lea ecx, [eax + edx*1 - 6]
    X86_AT(c, 0x4c561u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 04c565  mov dword ptr [0x1858], ecx
    X86_AT(c, 0x4c565u);
    wr32((c.sbase[3] + (uint32_t)(0x1858u)), c.r[1]);
    // 04c56b  add eax, edx
    X86_AT(c, 0x4c56bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 04c56d  mov dword ptr [0x1854], eax
    X86_AT(c, 0x4c56du);
    wr32((c.sbase[3] + (uint32_t)(0x1854u)), c.r[0]);
    // 04c572  lea eax, [eax + edx*1 - 6]
    X86_AT(c, 0x4c572u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 04c576  mov dword ptr [0x185c], eax
    X86_AT(c, 0x4c576u);
    wr32((c.sbase[3] + (uint32_t)(0x185Cu)), c.r[0]);
    // 04c57b  call 0x50959
    X86_AT(c, 0x4c57bu);
    push32(c, 0x4c580u); x86_call_known(c, 0x50959u, f_00050959); X86_RET(c, 0x4c580u);
    X86_TICK(c, 7);
    // 04c580  call 0x50879
    X86_AT(c, 0x4c580u);
    push32(c, 0x4c585u); x86_call_known(c, 0x50879u, f_00050879); X86_RET(c, 0x4c585u);
    X86_TICK(c, 9);
    // 04c585  push 0x33
    X86_AT(c, 0x4c585u);
    { uint32_t v = 0x33u; push32(c, v); }
    // 04c587  call 0x508ad
    X86_AT(c, 0x4c587u);
    push32(c, 0x4c58cu); x86_call_known(c, 0x508adu, f_000508ad); X86_RET(c, 0x4c58cu);
    X86_TICK(c, 13);
    // 04c58c  lea eax, [ebp - 8]
    X86_AT(c, 0x4c58cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 04c58f  push eax
    X86_AT(c, 0x4c58fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c590  push 0xffc
    X86_AT(c, 0x4c590u);
    { uint32_t v = 0xFFCu; push32(c, v); }
    // 04c595  call 0x52a88
    X86_AT(c, 0x4c595u);
    push32(c, 0x4c59au); x86_call_known(c, 0x52a88u, f_00052a88); X86_RET(c, 0x4c59au);
    X86_TICK(c, 6);
    // 04c59a  sub eax, eax
    X86_AT(c, 0x4c59au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04c59c  mov dword ptr [0x1864], eax
    X86_AT(c, 0x4c59cu);
    wr32((c.sbase[3] + (uint32_t)(0x1864u)), c.r[0]);
    // 04c5a1  add esp, 0xc
    X86_AT(c, 0x4c5a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_4c5a4:
    X86_TICK(c, 16);
    // 04c5a4  leave 
    X86_AT(c, 0x4c5a4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04c5a5  ret 
    X86_AT(c, 0x4c5a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c524u, "ran off the end of a function");
}
void f_0004c5b0(X86Cpu& c) {
    X86_TICK(c, 20);
    // 04c5b0  push ebp
    X86_AT(c, 0x4c5b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04c5b1  mov ebp, esp
    X86_AT(c, 0x4c5b1u);
    c.r[5] = c.r[4];
    // 04c5b3  sub esp, 0x108
    X86_AT(c, 0x4c5b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x108u, 0, 4); }
    // 04c5b9  push ebx
    X86_AT(c, 0x4c5b9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04c5ba  push esi
    X86_AT(c, 0x4c5bau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04c5bb  push edi
    X86_AT(c, 0x4c5bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04c5bc  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4c5bcu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04c5bf  sub ebx, ebx
    X86_AT(c, 0x4c5bfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 04c5c1  mov esi, ebx
    X86_AT(c, 0x4c5c1u);
    c.r[6] = c.r[3];
L_4c5c3:
    X86_TICK(c, 11);
    // 04c5c3  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0x4c5c3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 04c5c6  and al, al
    X86_AT(c, 0x4c5c6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 04c5c8  je 0x4c5e0
    X86_AT(c, 0x4c5c8u);
    if (x86_cc(c, 4)) { goto L_4c5e0; }
    X86_TICK(c, 14);
    // 04c5ca  movzx eax, al
    X86_AT(c, 0x4c5cau);
    c.r[0] = g8(c, 0);
    // 04c5cd  cmp eax, dword ptr [esi*4 + 0x34258]
    X86_AT(c, 0x4c5cdu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x34258u))), 0, 4);
    // 04c5d4  je 0x4c5dd
    X86_AT(c, 0x4c5d4u);
    if (x86_cc(c, 4)) { goto L_4c5dd; }
    X86_TICK(c, 9);
    // 04c5d6  mov ebx, 1
    X86_AT(c, 0x4c5d6u);
    c.r[3] = 0x1u;
    // 04c5db  jmp 0x4c5e0
    X86_AT(c, 0x4c5dbu);
    goto L_4c5e0;
L_4c5dd:
    X86_TICK(c, 9);
    // 04c5dd  inc esi
    X86_AT(c, 0x4c5ddu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04c5de  jmp 0x4c5c3
    X86_AT(c, 0x4c5deu);
    X86_POLL(c, 0x4c5c3u); goto L_4c5c3;
L_4c5e0:
    X86_TICK(c, 2);
    // 04c5e0  sub esi, esi
    X86_AT(c, 0x4c5e0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_4c5e2:
    X86_TICK(c, 11);
    // 04c5e2  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0x4c5e2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 04c5e5  and al, al
    X86_AT(c, 0x4c5e5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 04c5e7  je 0x4c5f6
    X86_AT(c, 0x4c5e7u);
    if (x86_cc(c, 4)) { goto L_4c5f6; }
    X86_TICK(c, 14);
    // 04c5e9  movzx eax, al
    X86_AT(c, 0x4c5e9u);
    c.r[0] = g8(c, 0);
    // 04c5ec  mov dword ptr [esi*4 + 0x34258], eax
    X86_AT(c, 0x4c5ecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x34258u)), c.r[0]);
    // 04c5f3  inc esi
    X86_AT(c, 0x4c5f3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04c5f4  jmp 0x4c5e2
    X86_AT(c, 0x4c5f4u);
    X86_POLL(c, 0x4c5e2u); goto L_4c5e2;
L_4c5f6:
    X86_TICK(c, 9);
    // 04c5f6  mov dword ptr [esi*4 + 0x34258], 0
    X86_AT(c, 0x4c5f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x34258u)), 0x0u);
    // 04c601  call 0x4cabc
    X86_AT(c, 0x4c601u);
    push32(c, 0x4c606u); x86_call_known(c, 0x4cabcu, f_0004cabc); X86_RET(c, 0x4c606u);
    X86_TICK(c, 13);
    // 04c606  mov dword ptr [0x18a8], 0xffffffff
    X86_AT(c, 0x4c606u);
    wr32((c.sbase[3] + (uint32_t)(0x18A8u)), 0xFFFFFFFFu);
    // 04c610  push 0x100e
    X86_AT(c, 0x4c610u);
    { uint32_t v = 0x100Eu; push32(c, v); }
    // 04c615  push edi
    X86_AT(c, 0x4c615u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04c616  call 0x534dc
    X86_AT(c, 0x4c616u);
    push32(c, 0x4c61bu); x86_call_known(c, 0x534dcu, f_000534dc); X86_RET(c, 0x4c61bu);
    X86_TICK(c, 11);
    // 04c61b  add esp, 8
    X86_AT(c, 0x4c61bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04c61e  mov dword ptr [0x18ac], eax
    X86_AT(c, 0x4c61eu);
    wr32((c.sbase[3] + (uint32_t)(0x18ACu)), c.r[0]);
    // 04c623  and eax, eax
    X86_AT(c, 0x4c623u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 04c625  jne 0x4c631
    X86_AT(c, 0x4c625u);
    if (x86_cc(c, 5)) { goto L_4c631; }
    X86_TICK(c, 9);
    // 04c627  mov eax, 0xffffffff
    X86_AT(c, 0x4c627u);
    c.r[0] = 0xFFFFFFFFu;
    // 04c62c  jmp 0x4c945
    X86_AT(c, 0x4c62cu);
    goto L_4c945;
L_4c631:
    X86_TICK(c, 16);
    // 04c631  push 0
    X86_AT(c, 0x4c631u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04c633  push 0x354
    X86_AT(c, 0x4c633u);
    { uint32_t v = 0x354u; push32(c, v); }
    // 04c638  push dword ptr [0x18ac]
    X86_AT(c, 0x4c638u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04c63e  call 0x53c50
    X86_AT(c, 0x4c63eu);
    push32(c, 0x4c643u); x86_call_known(c, 0x53c50u, f_00053c50); X86_RET(c, 0x4c643u);
    X86_TICK(c, 22);
    // 04c643  mov dword ptr [0x1864], 0
    X86_AT(c, 0x4c643u);
    wr32((c.sbase[3] + (uint32_t)(0x1864u)), 0x0u);
    // 04c64d  push dword ptr [0x18ac]
    X86_AT(c, 0x4c64du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04c653  push 0x20
    X86_AT(c, 0x4c653u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 04c655  push 1
    X86_AT(c, 0x4c655u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c657  lea eax, [ebp - 0x88]
    X86_AT(c, 0x4c657u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 04c65d  push eax
    X86_AT(c, 0x4c65du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c65e  call 0x53200
    X86_AT(c, 0x4c65eu);
    push32(c, 0x4c663u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4c663u);
    X86_TICK(c, 9);
    // 04c663  add esp, 0x1c
    X86_AT(c, 0x4c663u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 04c666  cmp eax, 0x20
    X86_AT(c, 0x4c666u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 04c669  jl 0x4c8d1
    X86_AT(c, 0x4c669u);
    if (x86_cc(c, 12)) { goto L_4c8d1; }
    X86_TICK(c, 2);
    // 04c66f  sub esi, esi
    X86_AT(c, 0x4c66fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_4c671:
    X86_TICK(c, 7);
    // 04c671  cmp esi, 0x20
    X86_AT(c, 0x4c671u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 04c674  jge 0x4c685
    X86_AT(c, 0x4c674u);
    if (x86_cc(c, 13)) { goto L_4c685; }
    X86_TICK(c, 11);
    // 04c676  push 1
    X86_AT(c, 0x4c676u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c678  push esi
    X86_AT(c, 0x4c678u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04c679  call 0x50ab0
    X86_AT(c, 0x4c679u);
    push32(c, 0x4c67eu); x86_call_known(c, 0x50ab0u, f_00050ab0); X86_RET(c, 0x4c67eu);
    X86_TICK(c, 14);
    // 04c67e  xchg ebx, eax
    X86_AT(c, 0x4c67eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 04c67f  inc esi
    X86_AT(c, 0x4c67fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04c680  add esp, 8
    X86_AT(c, 0x4c680u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04c683  jmp 0x4c671
    X86_AT(c, 0x4c683u);
    X86_POLL(c, 0x4c671u); goto L_4c671;
L_4c685:
    X86_TICK(c, 20);
    // 04c685  push dword ptr [0x18ac]
    X86_AT(c, 0x4c685u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04c68b  push 0x20
    X86_AT(c, 0x4c68bu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 04c68d  push 1
    X86_AT(c, 0x4c68du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c68f  lea eax, [ebp - 0x88]
    X86_AT(c, 0x4c68fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 04c695  push eax
    X86_AT(c, 0x4c695u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c696  call 0x53200
    X86_AT(c, 0x4c696u);
    push32(c, 0x4c69bu); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4c69bu);
    X86_TICK(c, 9);
    // 04c69b  add esp, 0x10
    X86_AT(c, 0x4c69bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04c69e  cmp eax, 0x20
    X86_AT(c, 0x4c69eu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 04c6a1  jl 0x4c8d1
    X86_AT(c, 0x4c6a1u);
    if (x86_cc(c, 12)) { goto L_4c8d1; }
    X86_TICK(c, 2);
    // 04c6a7  sub esi, esi
    X86_AT(c, 0x4c6a7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_4c6a9:
    X86_TICK(c, 7);
    // 04c6a9  cmp esi, 0x20
    X86_AT(c, 0x4c6a9u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 04c6ac  jge 0x4c6c0
    X86_AT(c, 0x4c6acu);
    if (x86_cc(c, 13)) { goto L_4c6c0; }
    X86_TICK(c, 11);
    // 04c6ae  push 0xff
    X86_AT(c, 0x4c6aeu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 04c6b3  push esi
    X86_AT(c, 0x4c6b3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04c6b4  call 0x50a7c
    X86_AT(c, 0x4c6b4u);
    push32(c, 0x4c6b9u); x86_call_known(c, 0x50a7cu, f_00050a7c); X86_RET(c, 0x4c6b9u);
    X86_TICK(c, 14);
    // 04c6b9  xchg ebx, eax
    X86_AT(c, 0x4c6b9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 04c6ba  inc esi
    X86_AT(c, 0x4c6bau);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04c6bb  add esp, 8
    X86_AT(c, 0x4c6bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04c6be  jmp 0x4c6a9
    X86_AT(c, 0x4c6beu);
    X86_POLL(c, 0x4c6a9u); goto L_4c6a9;
L_4c6c0:
    X86_TICK(c, 20);
    // 04c6c0  push dword ptr [0x18ac]
    X86_AT(c, 0x4c6c0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04c6c6  push 0x20
    X86_AT(c, 0x4c6c6u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 04c6c8  push 1
    X86_AT(c, 0x4c6c8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c6ca  lea eax, [ebp - 0x88]
    X86_AT(c, 0x4c6cau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 04c6d0  push eax
    X86_AT(c, 0x4c6d0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c6d1  call 0x53200
    X86_AT(c, 0x4c6d1u);
    push32(c, 0x4c6d6u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4c6d6u);
    X86_TICK(c, 9);
    // 04c6d6  add esp, 0x10
    X86_AT(c, 0x4c6d6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04c6d9  cmp eax, 0x20
    X86_AT(c, 0x4c6d9u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 04c6dc  jl 0x4c8d1
    X86_AT(c, 0x4c6dcu);
    if (x86_cc(c, 12)) { goto L_4c8d1; }
    X86_TICK(c, 2);
    // 04c6e2  sub esi, esi
    X86_AT(c, 0x4c6e2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_4c6e4:
    X86_TICK(c, 7);
    // 04c6e4  cmp esi, 0x20
    X86_AT(c, 0x4c6e4u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 04c6e7  jge 0x4c6fb
    X86_AT(c, 0x4c6e7u);
    if (x86_cc(c, 13)) { goto L_4c6fb; }
    X86_TICK(c, 11);
    // 04c6e9  push 0xff
    X86_AT(c, 0x4c6e9u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 04c6ee  push esi
    X86_AT(c, 0x4c6eeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04c6ef  call 0x50a96
    X86_AT(c, 0x4c6efu);
    push32(c, 0x4c6f4u); x86_call_known(c, 0x50a96u, f_00050a96); X86_RET(c, 0x4c6f4u);
    X86_TICK(c, 14);
    // 04c6f4  xchg ebx, eax
    X86_AT(c, 0x4c6f4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 04c6f5  inc esi
    X86_AT(c, 0x4c6f5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04c6f6  add esp, 8
    X86_AT(c, 0x4c6f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04c6f9  jmp 0x4c6e4
    X86_AT(c, 0x4c6f9u);
    X86_POLL(c, 0x4c6e4u); goto L_4c6e4;
L_4c6fb:
    X86_TICK(c, 20);
    // 04c6fb  push dword ptr [0x18ac]
    X86_AT(c, 0x4c6fbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04c701  push 0x20
    X86_AT(c, 0x4c701u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 04c703  push 1
    X86_AT(c, 0x4c703u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c705  lea eax, [ebp - 0x88]
    X86_AT(c, 0x4c705u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 04c70b  push eax
    X86_AT(c, 0x4c70bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c70c  call 0x53200
    X86_AT(c, 0x4c70cu);
    push32(c, 0x4c711u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4c711u);
    X86_TICK(c, 9);
    // 04c711  add esp, 0x10
    X86_AT(c, 0x4c711u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04c714  cmp eax, 0x20
    X86_AT(c, 0x4c714u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 04c717  jl 0x4c8d1
    X86_AT(c, 0x4c717u);
    if (x86_cc(c, 12)) { goto L_4c8d1; }
    X86_TICK(c, 2);
    // 04c71d  sub esi, esi
    X86_AT(c, 0x4c71du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_4c71f:
    X86_TICK(c, 7);
    // 04c71f  cmp esi, 0x20
    X86_AT(c, 0x4c71fu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 04c722  jge 0x4c73a
    X86_AT(c, 0x4c722u);
    if (x86_cc(c, 13)) { goto L_4c73a; }
    X86_TICK(c, 17);
    // 04c724  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0x4c724u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 04c72c  push eax
    X86_AT(c, 0x4c72cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c72d  push esi
    X86_AT(c, 0x4c72du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04c72e  call 0x50ae4
    X86_AT(c, 0x4c72eu);
    push32(c, 0x4c733u); x86_call_known(c, 0x50ae4u, f_00050ae4); X86_RET(c, 0x4c733u);
    X86_TICK(c, 14);
    // 04c733  xchg ebx, eax
    X86_AT(c, 0x4c733u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 04c734  inc esi
    X86_AT(c, 0x4c734u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04c735  add esp, 8
    X86_AT(c, 0x4c735u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04c738  jmp 0x4c71f
    X86_AT(c, 0x4c738u);
    X86_POLL(c, 0x4c71fu); goto L_4c71f;
L_4c73a:
    X86_TICK(c, 20);
    // 04c73a  push dword ptr [0x18ac]
    X86_AT(c, 0x4c73au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04c740  push 0x20
    X86_AT(c, 0x4c740u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 04c742  push 1
    X86_AT(c, 0x4c742u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c744  lea eax, [ebp - 0x88]
    X86_AT(c, 0x4c744u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 04c74a  push eax
    X86_AT(c, 0x4c74au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c74b  call 0x53200
    X86_AT(c, 0x4c74bu);
    push32(c, 0x4c750u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4c750u);
    X86_TICK(c, 9);
    // 04c750  add esp, 0x10
    X86_AT(c, 0x4c750u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04c753  cmp eax, 0x20
    X86_AT(c, 0x4c753u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 04c756  jl 0x4c8d1
    X86_AT(c, 0x4c756u);
    if (x86_cc(c, 12)) { goto L_4c8d1; }
    X86_TICK(c, 2);
    // 04c75c  sub esi, esi
    X86_AT(c, 0x4c75cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_4c75e:
    X86_TICK(c, 7);
    // 04c75e  cmp esi, 0x20
    X86_AT(c, 0x4c75eu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 04c761  jge 0x4c779
    X86_AT(c, 0x4c761u);
    if (x86_cc(c, 13)) { goto L_4c779; }
    X86_TICK(c, 17);
    // 04c763  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0x4c763u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 04c76b  push eax
    X86_AT(c, 0x4c76bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c76c  push esi
    X86_AT(c, 0x4c76cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04c76d  call 0x50aca
    X86_AT(c, 0x4c76du);
    push32(c, 0x4c772u); x86_call_known(c, 0x50acau, f_00050aca); X86_RET(c, 0x4c772u);
    X86_TICK(c, 14);
    // 04c772  xchg ebx, eax
    X86_AT(c, 0x4c772u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 04c773  inc esi
    X86_AT(c, 0x4c773u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04c774  add esp, 8
    X86_AT(c, 0x4c774u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04c777  jmp 0x4c75e
    X86_AT(c, 0x4c777u);
    X86_POLL(c, 0x4c75eu); goto L_4c75e;
L_4c779:
    X86_TICK(c, 18);
    // 04c779  push 0
    X86_AT(c, 0x4c779u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04c77b  push 0x6d4
    X86_AT(c, 0x4c77bu);
    { uint32_t v = 0x6D4u; push32(c, v); }
    // 04c780  mov eax, 0x1844
    X86_AT(c, 0x4c780u);
    c.r[0] = 0x1844u;
    // 04c785  push dword ptr [eax + 0x68]
    X86_AT(c, 0x4c785u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 04c788  call 0x53c50
    X86_AT(c, 0x4c788u);
    push32(c, 0x4c78du); x86_call_known(c, 0x53c50u, f_00053c50); X86_RET(c, 0x4c78du);
    X86_TICK(c, 20);
    // 04c78d  push dword ptr [0x18ac]
    X86_AT(c, 0x4c78du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04c793  push 6
    X86_AT(c, 0x4c793u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 04c795  push 1
    X86_AT(c, 0x4c795u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c797  lea eax, [ebp - 0x88]
    X86_AT(c, 0x4c797u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 04c79d  push eax
    X86_AT(c, 0x4c79du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c79e  call 0x53200
    X86_AT(c, 0x4c79eu);
    push32(c, 0x4c7a3u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4c7a3u);
    X86_TICK(c, 9);
    // 04c7a3  add esp, 0x1c
    X86_AT(c, 0x4c7a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 04c7a6  cmp eax, 6
    X86_AT(c, 0x4c7a6u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 04c7a9  jl 0x4c8d1
    X86_AT(c, 0x4c7a9u);
    if (x86_cc(c, 12)) { goto L_4c8d1; }
    X86_TICK(c, 20);
    // 04c7af  push dword ptr [0x18ac]
    X86_AT(c, 0x4c7afu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04c7b5  push 8
    X86_AT(c, 0x4c7b5u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 04c7b7  push 1
    X86_AT(c, 0x4c7b7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c7b9  lea eax, [ebp - 0x88]
    X86_AT(c, 0x4c7b9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 04c7bf  push eax
    X86_AT(c, 0x4c7bfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c7c0  call 0x53200
    X86_AT(c, 0x4c7c0u);
    push32(c, 0x4c7c5u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4c7c5u);
    X86_TICK(c, 9);
    // 04c7c5  add esp, 0x10
    X86_AT(c, 0x4c7c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04c7c8  cmp eax, 8
    X86_AT(c, 0x4c7c8u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 04c7cb  jl 0x4c8d1
    X86_AT(c, 0x4c7cbu);
    if (x86_cc(c, 12)) { goto L_4c8d1; }
    X86_TICK(c, 2);
    // 04c7d1  sub esi, esi
    X86_AT(c, 0x4c7d1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_4c7d3:
    X86_TICK(c, 11);
    // 04c7d3  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0x4c7d3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 04c7d6  and al, al
    X86_AT(c, 0x4c7d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 04c7d8  je 0x4c7e4
    X86_AT(c, 0x4c7d8u);
    if (x86_cc(c, 4)) { goto L_4c7e4; }
    X86_TICK(c, 11);
    // 04c7da  mov byte ptr [ebp + esi*1 - 0x108], al
    X86_AT(c, 0x4c7dau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u)), g8(c, 0));
    // 04c7e1  inc esi
    X86_AT(c, 0x4c7e1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04c7e2  jmp 0x4c7d3
    X86_AT(c, 0x4c7e2u);
    X86_POLL(c, 0x4c7d3u); goto L_4c7d3;
L_4c7e4:
    X86_TICK(c, 12);
    // 04c7e4  cmp byte ptr [edi + esi*1], 0x5c
    X86_AT(c, 0x4c7e4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))), 0x5Cu, 0, 1);
    // 04c7e8  je 0x4c7f1
    X86_AT(c, 0x4c7e8u);
    if (x86_cc(c, 4)) { goto L_4c7f1; }
    X86_TICK(c, 7);
    // 04c7ea  and esi, esi
    X86_AT(c, 0x4c7eau);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 04c7ec  jl 0x4c7f1
    X86_AT(c, 0x4c7ecu);
    if (x86_cc(c, 12)) { goto L_4c7f1; }
    X86_TICK(c, 9);
    // 04c7ee  dec esi
    X86_AT(c, 0x4c7eeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 04c7ef  jmp 0x4c7e4
    X86_AT(c, 0x4c7efu);
    X86_POLL(c, 0x4c7e4u); goto L_4c7e4;
L_4c7f1:
    X86_TICK(c, 22);
    // 04c7f1  inc esi
    X86_AT(c, 0x4c7f1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04c7f2  push dword ptr [0x18ac]
    X86_AT(c, 0x4c7f2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04c7f8  push 8
    X86_AT(c, 0x4c7f8u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 04c7fa  push 1
    X86_AT(c, 0x4c7fau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c7fc  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0x4c7fcu);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 04c803  push eax
    X86_AT(c, 0x4c803u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c804  call 0x53200
    X86_AT(c, 0x4c804u);
    push32(c, 0x4c809u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4c809u);
    X86_TICK(c, 9);
    // 04c809  add esp, 0x10
    X86_AT(c, 0x4c809u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04c80c  cmp eax, 8
    X86_AT(c, 0x4c80cu);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 04c80f  jl 0x4c8d1
    X86_AT(c, 0x4c80fu);
    if (x86_cc(c, 12)) { goto L_4c8d1; }
    X86_TICK(c, 12);
    // 04c815  cmp byte ptr [ebp + esi*1 - 0x108], 0
    X86_AT(c, 0x4c815u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 04c81d  je 0x4c867
    X86_AT(c, 0x4c81du);
    if (x86_cc(c, 4)) { goto L_4c867; }
    X86_TICK(c, 2);
    // 04c81f  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x4c81fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_4c826:
    X86_TICK(c, 20);
    // 04c826  mov eax, esi
    X86_AT(c, 0x4c826u);
    c.r[0] = c.r[6];
    // 04c828  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x4c828u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 04c82b  cmp byte ptr [ebp + eax*1 - 0x108], 0
    X86_AT(c, 0x4c82bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 04c833  je 0x4c83a
    X86_AT(c, 0x4c833u);
    if (x86_cc(c, 4)) { goto L_4c83a; }
    X86_TICK(c, 13);
    // 04c835  inc dword ptr [ebp - 4]
    X86_AT(c, 0x4c835u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 04c838  jmp 0x4c826
    X86_AT(c, 0x4c838u);
    X86_POLL(c, 0x4c826u); goto L_4c826;
L_4c83a:
    X86_TICK(c, 18);
    // 04c83a  mov eax, esi
    X86_AT(c, 0x4c83au);
    c.r[0] = c.r[6];
    // 04c83c  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x4c83cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 04c83f  mov byte ptr [ebp + eax*1 - 0x108], 0x2e
    X86_AT(c, 0x4c83fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u)), 0x2Eu);
    // 04c847  mov byte ptr [ebp + eax*1 - 0x107], 0x66
    X86_AT(c, 0x4c847u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF9u)), 0x66u);
    // 04c84f  mov byte ptr [ebp + eax*1 - 0x106], 0x6d
    X86_AT(c, 0x4c84fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFAu)), 0x6Du);
    // 04c857  mov byte ptr [ebp + eax*1 - 0x105], 0x62
    X86_AT(c, 0x4c857u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFBu)), 0x62u);
    // 04c85f  mov byte ptr [ebp + eax*1 - 0x104], 0
    X86_AT(c, 0x4c85fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFCu)), 0x0u);
L_4c867:
    X86_TICK(c, 20);
    // 04c867  push dword ptr [0x18ac]
    X86_AT(c, 0x4c867u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04c86d  push 8
    X86_AT(c, 0x4c86du);
    { uint32_t v = 0x8u; push32(c, v); }
    // 04c86f  push 1
    X86_AT(c, 0x4c86fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c871  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0x4c871u);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 04c878  push eax
    X86_AT(c, 0x4c878u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c879  call 0x53200
    X86_AT(c, 0x4c879u);
    push32(c, 0x4c87eu); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4c87eu);
    X86_TICK(c, 9);
    // 04c87e  add esp, 0x10
    X86_AT(c, 0x4c87eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04c881  cmp eax, 8
    X86_AT(c, 0x4c881u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 04c884  jl 0x4c8d1
    X86_AT(c, 0x4c884u);
    if (x86_cc(c, 12)) { goto L_4c8d1; }
    X86_TICK(c, 18);
    // 04c886  push 0
    X86_AT(c, 0x4c886u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04c888  push 0x800
    X86_AT(c, 0x4c888u);
    { uint32_t v = 0x800u; push32(c, v); }
    // 04c88d  mov eax, 0x1844
    X86_AT(c, 0x4c88du);
    c.r[0] = 0x1844u;
    // 04c892  push dword ptr [eax + 0x68]
    X86_AT(c, 0x4c892u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 04c895  call 0x53c50
    X86_AT(c, 0x4c895u);
    push32(c, 0x4c89au); x86_call_known(c, 0x53c50u, f_00053c50); X86_RET(c, 0x4c89au);
    X86_TICK(c, 20);
    // 04c89a  push dword ptr [0x18ac]
    X86_AT(c, 0x4c89au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04c8a0  push 1
    X86_AT(c, 0x4c8a0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c8a2  push 4
    X86_AT(c, 0x4c8a2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 04c8a4  lea eax, [ebp - 8]
    X86_AT(c, 0x4c8a4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 04c8a7  push eax
    X86_AT(c, 0x4c8a7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c8a8  call 0x53200
    X86_AT(c, 0x4c8a8u);
    push32(c, 0x4c8adu); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4c8adu);
    X86_TICK(c, 9);
    // 04c8ad  add esp, 0x1c
    X86_AT(c, 0x4c8adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 04c8b0  dec eax
    X86_AT(c, 0x4c8b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04c8b1  jl 0x4c8d1
    X86_AT(c, 0x4c8b1u);
    if (x86_cc(c, 12)) { goto L_4c8d1; }
    X86_TICK(c, 20);
    // 04c8b3  push dword ptr [0x18ac]
    X86_AT(c, 0x4c8b3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04c8b9  push 2
    X86_AT(c, 0x4c8b9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04c8bb  push 1
    X86_AT(c, 0x4c8bbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c8bd  lea eax, [ebp - 0x88]
    X86_AT(c, 0x4c8bdu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 04c8c3  push eax
    X86_AT(c, 0x4c8c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c8c4  call 0x53200
    X86_AT(c, 0x4c8c4u);
    push32(c, 0x4c8c9u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4c8c9u);
    X86_TICK(c, 9);
    // 04c8c9  add esp, 0x10
    X86_AT(c, 0x4c8c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04c8cc  cmp eax, 2
    X86_AT(c, 0x4c8ccu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 04c8cf  jge 0x4c8e6
    X86_AT(c, 0x4c8cfu);
    if (x86_cc(c, 13)) { goto L_4c8e6; }
L_4c8d1:
    X86_TICK(c, 12);
    // 04c8d1  push dword ptr [0x18ac]
    X86_AT(c, 0x4c8d1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04c8d7  call 0x539d8
    X86_AT(c, 0x4c8d7u);
    push32(c, 0x4c8dcu); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x4c8dcu);
    X86_TICK(c, 11);
    // 04c8dc  mov eax, 2
    X86_AT(c, 0x4c8dcu);
    c.r[0] = 0x2u;
    // 04c8e1  add esp, 4
    X86_AT(c, 0x4c8e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04c8e4  jmp 0x4c945
    X86_AT(c, 0x4c8e4u);
    goto L_4c945;
L_4c8e6:
    X86_TICK(c, 29);
    // 04c8e6  movzx eax, byte ptr [ebp - 0x88]
    X86_AT(c, 0x4c8e6u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF78u)));
    // 04c8ed  mov dword ptr [0x18a4], eax
    X86_AT(c, 0x4c8edu);
    wr32((c.sbase[3] + (uint32_t)(0x18A4u)), c.r[0]);
    // 04c8f2  movzx eax, byte ptr [ebp - 0x87]
    X86_AT(c, 0x4c8f2u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF79u)));
    // 04c8f9  mov dword ptr [0x18a0], eax
    X86_AT(c, 0x4c8f9u);
    wr32((c.sbase[3] + (uint32_t)(0x18A0u)), c.r[0]);
    // 04c8fe  mov dword ptr [0x18a8], 0
    X86_AT(c, 0x4c8feu);
    wr32((c.sbase[3] + (uint32_t)(0x18A8u)), 0x0u);
    // 04c908  mov byte ptr [0x1860], 0xfe
    X86_AT(c, 0x4c908u);
    wr8((c.sbase[3] + (uint32_t)(0x1860u)), 0xFEu);
    // 04c90f  mov dword ptr [0x184c], 1
    X86_AT(c, 0x4c90fu);
    wr32((c.sbase[3] + (uint32_t)(0x184Cu)), 0x1u);
    // 04c919  call 0x4cd38
    X86_AT(c, 0x4c919u);
    push32(c, 0x4c91eu); x86_call_known(c, 0x4cd38u, f_0004cd38); X86_RET(c, 0x4c91eu);
    X86_TICK(c, 7);
    // 04c91e  call 0x4cd38
    X86_AT(c, 0x4c91eu);
    push32(c, 0x4c923u); x86_call_known(c, 0x4cd38u, f_0004cd38); X86_RET(c, 0x4c923u);
    X86_TICK(c, 12);
    // 04c923  push dword ptr [0x18a0]
    X86_AT(c, 0x4c923u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18A0u))); push32(c, v); }
    // 04c929  call 0x50a67
    X86_AT(c, 0x4c929u);
    push32(c, 0x4c92eu); x86_call_known(c, 0x50a67u, f_00050a67); X86_RET(c, 0x4c92eu);
    X86_TICK(c, 13);
    // 04c92e  add esp, 4
    X86_AT(c, 0x4c92eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04c931  mov eax, dword ptr [0x18ac]
    X86_AT(c, 0x4c931u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x18ACu)));
    // 04c936  and eax, eax
    X86_AT(c, 0x4c936u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 04c938  je 0x4c943
    X86_AT(c, 0x4c938u);
    if (x86_cc(c, 4)) { goto L_4c943; }
    X86_TICK(c, 9);
    // 04c93a  push eax
    X86_AT(c, 0x4c93au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c93b  call 0x539d8
    X86_AT(c, 0x4c93bu);
    push32(c, 0x4c940u); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x4c940u);
    X86_TICK(c, 2);
    // 04c940  add esp, 4
    X86_AT(c, 0x4c940u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_4c943:
    X86_TICK(c, 2);
    // 04c943  sub eax, eax
    X86_AT(c, 0x4c943u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_4c945:
    X86_TICK(c, 28);
    // 04c945  pop edi
    X86_AT(c, 0x4c945u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04c946  pop esi
    X86_AT(c, 0x4c946u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04c947  pop ebx
    X86_AT(c, 0x4c947u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04c948  leave 
    X86_AT(c, 0x4c948u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04c949  ret 
    X86_AT(c, 0x4c949u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c5b0u, "ran off the end of a function");
}
void f_0004c94c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 04c94c  push ebp
    X86_AT(c, 0x4c94cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04c94d  mov ebp, esp
    X86_AT(c, 0x4c94du);
    c.r[5] = c.r[4];
    // 04c94f  push edi
    X86_AT(c, 0x4c94fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04c950  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4c950u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04c953  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4c953u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04c956  sub ecx, ecx
    X86_AT(c, 0x4c956u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 04c958  cmp ecx, edx
    X86_AT(c, 0x4c958u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 04c95a  jne 0x4c960
    X86_AT(c, 0x4c95au);
    if (x86_cc(c, 5)) { goto L_4c960; }
    X86_TICK(c, 9);
    // 04c95c  mov eax, edi
    X86_AT(c, 0x4c95cu);
    c.r[0] = c.r[7];
    // 04c95e  jmp 0x4c974
    X86_AT(c, 0x4c95eu);
    goto L_4c974;
L_4c960:
    X86_TICK(c, 12);
    // 04c960  cmp byte ptr [edi], 0xf2
    X86_AT(c, 0x4c960u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xF2u, 0, 1);
    // 04c963  jne 0x4c96f
    X86_AT(c, 0x4c963u);
    if (x86_cc(c, 5)) { goto L_4c96f; }
    X86_TICK(c, 9);
    // 04c965  inc ecx
    X86_AT(c, 0x4c965u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 04c966  cmp edx, ecx
    X86_AT(c, 0x4c966u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 04c968  jne 0x4c96f
    X86_AT(c, 0x4c968u);
    if (x86_cc(c, 5)) { goto L_4c96f; }
    X86_TICK(c, 9);
    // 04c96a  lea eax, [edi + 6]
    X86_AT(c, 0x4c96au);
    c.r[0] = (uint32_t)(c.r[7] + 0x6u);
    // 04c96d  jmp 0x4c974
    X86_AT(c, 0x4c96du);
    goto L_4c974;
L_4c96f:
    X86_TICK(c, 9);
    // 04c96f  add edi, 6
    X86_AT(c, 0x4c96fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 04c972  jmp 0x4c960
    X86_AT(c, 0x4c972u);
    X86_POLL(c, 0x4c960u); goto L_4c960;
L_4c974:
    X86_TICK(c, 20);
    // 04c974  pop edi
    X86_AT(c, 0x4c974u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04c975  leave 
    X86_AT(c, 0x4c975u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04c976  ret 
    X86_AT(c, 0x4c976u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c94cu, "ran off the end of a function");
}
void f_0004c978(X86Cpu& c) {
    X86_TICK(c, 23);
    // 04c978  push ebp
    X86_AT(c, 0x4c978u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04c979  mov ebp, esp
    X86_AT(c, 0x4c979u);
    c.r[5] = c.r[4];
    // 04c97b  push edi
    X86_AT(c, 0x4c97bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04c97c  mov eax, dword ptr [0x1868]
    X86_AT(c, 0x4c97cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1868u)));
    // 04c981  dec eax
    X86_AT(c, 0x4c981u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04c982  push eax
    X86_AT(c, 0x4c982u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c983  push 0
    X86_AT(c, 0x4c983u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04c985  call 0x50afe
    X86_AT(c, 0x4c985u);
    push32(c, 0x4c98au); x86_call_known(c, 0x50afeu, f_00050afe); X86_RET(c, 0x4c98au);
    X86_TICK(c, 17);
    // 04c98a  mov eax, dword ptr [0x186c]
    X86_AT(c, 0x4c98au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x186Cu)));
    // 04c98f  dec eax
    X86_AT(c, 0x4c98fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04c990  push eax
    X86_AT(c, 0x4c990u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c991  push 1
    X86_AT(c, 0x4c991u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c993  call 0x50afe
    X86_AT(c, 0x4c993u);
    push32(c, 0x4c998u); x86_call_known(c, 0x50afeu, f_00050afe); X86_RET(c, 0x4c998u);
    X86_TICK(c, 17);
    // 04c998  mov eax, dword ptr [0x1870]
    X86_AT(c, 0x4c998u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1870u)));
    // 04c99d  dec eax
    X86_AT(c, 0x4c99du);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04c99e  push eax
    X86_AT(c, 0x4c99eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c99f  push 2
    X86_AT(c, 0x4c99fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04c9a1  call 0x50afe
    X86_AT(c, 0x4c9a1u);
    push32(c, 0x4c9a6u); x86_call_known(c, 0x50afeu, f_00050afe); X86_RET(c, 0x4c9a6u);
    X86_TICK(c, 17);
    // 04c9a6  mov eax, dword ptr [0x1874]
    X86_AT(c, 0x4c9a6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1874u)));
    // 04c9ab  dec eax
    X86_AT(c, 0x4c9abu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04c9ac  push eax
    X86_AT(c, 0x4c9acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c9ad  push 3
    X86_AT(c, 0x4c9adu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 04c9af  call 0x50afe
    X86_AT(c, 0x4c9afu);
    push32(c, 0x4c9b4u); x86_call_known(c, 0x50afeu, f_00050afe); X86_RET(c, 0x4c9b4u);
    X86_TICK(c, 17);
    // 04c9b4  mov eax, dword ptr [0x1878]
    X86_AT(c, 0x4c9b4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1878u)));
    // 04c9b9  dec eax
    X86_AT(c, 0x4c9b9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04c9ba  push eax
    X86_AT(c, 0x4c9bau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c9bb  push 4
    X86_AT(c, 0x4c9bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 04c9bd  call 0x50afe
    X86_AT(c, 0x4c9bdu);
    push32(c, 0x4c9c2u); x86_call_known(c, 0x50afeu, f_00050afe); X86_RET(c, 0x4c9c2u);
    X86_TICK(c, 17);
    // 04c9c2  mov eax, dword ptr [0x187c]
    X86_AT(c, 0x4c9c2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x187Cu)));
    // 04c9c7  dec eax
    X86_AT(c, 0x4c9c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04c9c8  push eax
    X86_AT(c, 0x4c9c8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c9c9  push 5
    X86_AT(c, 0x4c9c9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 04c9cb  call 0x50afe
    X86_AT(c, 0x4c9cbu);
    push32(c, 0x4c9d0u); x86_call_known(c, 0x50afeu, f_00050afe); X86_RET(c, 0x4c9d0u);
    X86_TICK(c, 17);
    // 04c9d0  mov eax, dword ptr [0x1880]
    X86_AT(c, 0x4c9d0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1880u)));
    // 04c9d5  dec eax
    X86_AT(c, 0x4c9d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04c9d6  push eax
    X86_AT(c, 0x4c9d6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c9d7  push 0
    X86_AT(c, 0x4c9d7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04c9d9  call 0x502a7
    X86_AT(c, 0x4c9d9u);
    push32(c, 0x4c9deu); x86_call_known(c, 0x502a7u, f_000502a7); X86_RET(c, 0x4c9deu);
    X86_TICK(c, 17);
    // 04c9de  mov eax, dword ptr [0x1884]
    X86_AT(c, 0x4c9deu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1884u)));
    // 04c9e3  dec eax
    X86_AT(c, 0x4c9e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04c9e4  push eax
    X86_AT(c, 0x4c9e4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c9e5  push 1
    X86_AT(c, 0x4c9e5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04c9e7  call 0x502a7
    X86_AT(c, 0x4c9e7u);
    push32(c, 0x4c9ecu); x86_call_known(c, 0x502a7u, f_000502a7); X86_RET(c, 0x4c9ecu);
    X86_TICK(c, 19);
    // 04c9ec  add esp, 0x40
    X86_AT(c, 0x4c9ecu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 04c9ef  mov eax, dword ptr [0x1888]
    X86_AT(c, 0x4c9efu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1888u)));
    // 04c9f4  dec eax
    X86_AT(c, 0x4c9f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04c9f5  push eax
    X86_AT(c, 0x4c9f5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04c9f6  push 2
    X86_AT(c, 0x4c9f6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04c9f8  call 0x502a7
    X86_AT(c, 0x4c9f8u);
    push32(c, 0x4c9fdu); x86_call_known(c, 0x502a7u, f_000502a7); X86_RET(c, 0x4c9fdu);
    X86_TICK(c, 17);
    // 04c9fd  mov eax, dword ptr [0x188c]
    X86_AT(c, 0x4c9fdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x188Cu)));
    // 04ca02  dec eax
    X86_AT(c, 0x4ca02u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04ca03  push eax
    X86_AT(c, 0x4ca03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04ca04  push 3
    X86_AT(c, 0x4ca04u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 04ca06  call 0x502a7
    X86_AT(c, 0x4ca06u);
    push32(c, 0x4ca0bu); x86_call_known(c, 0x502a7u, f_000502a7); X86_RET(c, 0x4ca0bu);
    X86_TICK(c, 17);
    // 04ca0b  mov eax, dword ptr [0x1890]
    X86_AT(c, 0x4ca0bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1890u)));
    // 04ca10  dec eax
    X86_AT(c, 0x4ca10u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04ca11  push eax
    X86_AT(c, 0x4ca11u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04ca12  push 4
    X86_AT(c, 0x4ca12u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 04ca14  call 0x502a7
    X86_AT(c, 0x4ca14u);
    push32(c, 0x4ca19u); x86_call_known(c, 0x502a7u, f_000502a7); X86_RET(c, 0x4ca19u);
    X86_TICK(c, 17);
    // 04ca19  mov eax, dword ptr [0x1894]
    X86_AT(c, 0x4ca19u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1894u)));
    // 04ca1e  dec eax
    X86_AT(c, 0x4ca1eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04ca1f  push eax
    X86_AT(c, 0x4ca1fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04ca20  push 5
    X86_AT(c, 0x4ca20u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 04ca22  call 0x502a7
    X86_AT(c, 0x4ca22u);
    push32(c, 0x4ca27u); x86_call_known(c, 0x502a7u, f_000502a7); X86_RET(c, 0x4ca27u);
    X86_TICK(c, 11);
    // 04ca27  add esp, 0x20
    X86_AT(c, 0x4ca27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 04ca2a  push 1
    X86_AT(c, 0x4ca2au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04ca2c  call 0x50a4b
    X86_AT(c, 0x4ca2cu);
    push32(c, 0x4ca31u); x86_call_known(c, 0x50a4bu, f_00050a4b); X86_RET(c, 0x4ca31u);
    X86_TICK(c, 17);
    // 04ca31  push dword ptr [ebp + 8]
    X86_AT(c, 0x4ca31u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04ca34  push dword ptr [0x1850]
    X86_AT(c, 0x4ca34u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1850u))); push32(c, v); }
    // 04ca3a  call 0x4c94c
    X86_AT(c, 0x4ca3au);
    push32(c, 0x4ca3fu); x86_call_known(c, 0x4c94cu, f_0004c94c); X86_RET(c, 0x4ca3fu);
    X86_TICK(c, 22);
    // 04ca3f  mov dword ptr [0x1864], eax
    X86_AT(c, 0x4ca3fu);
    wr32((c.sbase[3] + (uint32_t)(0x1864u)), c.r[0]);
    // 04ca44  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4ca44u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04ca47  inc eax
    X86_AT(c, 0x4ca47u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 04ca48  push eax
    X86_AT(c, 0x4ca48u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04ca49  push dword ptr [0x1850]
    X86_AT(c, 0x4ca49u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1850u))); push32(c, v); }
    // 04ca4f  call 0x4c94c
    X86_AT(c, 0x4ca4fu);
    push32(c, 0x4ca54u); x86_call_known(c, 0x4c94cu, f_0004c94c); X86_RET(c, 0x4ca54u);
    X86_TICK(c, 42);
    // 04ca54  xchg edi, eax
    X86_AT(c, 0x4ca54u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 04ca55  mov byte ptr [edi], 0xfe
    X86_AT(c, 0x4ca55u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFEu);
    // 04ca58  inc edi
    X86_AT(c, 0x4ca58u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 04ca59  inc edi
    X86_AT(c, 0x4ca59u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 04ca5a  mov byte ptr [edi], 0
    X86_AT(c, 0x4ca5au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 04ca5d  inc edi
    X86_AT(c, 0x4ca5du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 04ca5e  mov byte ptr [edi], 0
    X86_AT(c, 0x4ca5eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 04ca61  inc edi
    X86_AT(c, 0x4ca61u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 04ca62  push dword ptr [0x18a4]
    X86_AT(c, 0x4ca62u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18A4u))); push32(c, v); }
    // 04ca68  mov eax, dword ptr [0x1848]
    X86_AT(c, 0x4ca68u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1848u)));
    // 04ca6d  add eax, eax
    X86_AT(c, 0x4ca6du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 04ca6f  push eax
    X86_AT(c, 0x4ca6fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04ca70  push dword ptr [0x1850]
    X86_AT(c, 0x4ca70u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1850u))); push32(c, v); }
    // 04ca76  call 0x5096f
    X86_AT(c, 0x4ca76u);
    push32(c, 0x4ca7bu); x86_call_known(c, 0x5096fu, f_0005096f); X86_RET(c, 0x4ca7bu);
    X86_TICK(c, 24);
    // 04ca7b  sub eax, eax
    X86_AT(c, 0x4ca7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04ca7d  add esp, 0x20
    X86_AT(c, 0x4ca7du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 04ca80  pop edi
    X86_AT(c, 0x4ca80u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04ca81  leave 
    X86_AT(c, 0x4ca81u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04ca82  ret 
    X86_AT(c, 0x4ca82u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c978u, "ran off the end of a function");
}
void f_0004cabc(X86Cpu& c) {
    X86_TICK(c, 7);
    // 04cabc  call 0x5098e
    X86_AT(c, 0x4cabcu);
    push32(c, 0x4cac1u); x86_call_known(c, 0x5098eu, f_0005098e); X86_RET(c, 0x4cac1u);
    X86_TICK(c, 12);
    // 04cac1  sub eax, eax
    X86_AT(c, 0x4cac1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04cac3  ret 
    X86_AT(c, 0x4cac3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4cabcu, "ran off the end of a function");
}
void f_0004cb04(X86Cpu& c) {
    X86_TICK(c, 9);
    // 04cb04  push 0xffffffff
    X86_AT(c, 0x4cb04u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 04cb06  call 0x50459
    X86_AT(c, 0x4cb06u);
    push32(c, 0x4cb0bu); x86_call_known(c, 0x50459u, f_00050459); X86_RET(c, 0x4cb0bu);
    X86_TICK(c, 9);
    // 04cb0b  push 1
    X86_AT(c, 0x4cb0bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04cb0d  call 0x5042f
    X86_AT(c, 0x4cb0du);
    push32(c, 0x4cb12u); x86_call_known(c, 0x5042fu, f_0005042f); X86_RET(c, 0x4cb12u);
    X86_TICK(c, 14);
    // 04cb12  sub eax, eax
    X86_AT(c, 0x4cb12u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04cb14  add esp, 8
    X86_AT(c, 0x4cb14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04cb17  ret 
    X86_AT(c, 0x4cb17u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4cb04u, "ran off the end of a function");
}
void f_0004cb18(X86Cpu& c) {
    X86_TICK(c, 28);
    // 04cb18  push ebp
    X86_AT(c, 0x4cb18u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04cb19  mov ebp, esp
    X86_AT(c, 0x4cb19u);
    c.r[5] = c.r[4];
    // 04cb1b  push ebx
    X86_AT(c, 0x4cb1bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04cb1c  push esi
    X86_AT(c, 0x4cb1cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04cb1d  push edi
    X86_AT(c, 0x4cb1du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04cb1e  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4cb1eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04cb21  push 0x1012
    X86_AT(c, 0x4cb21u);
    { uint32_t v = 0x1012u; push32(c, v); }
    // 04cb26  push dword ptr [ebp + 8]
    X86_AT(c, 0x4cb26u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04cb29  call 0x534dc
    X86_AT(c, 0x4cb29u);
    push32(c, 0x4cb2eu); x86_call_known(c, 0x534dcu, f_000534dc); X86_RET(c, 0x4cb2eu);
    X86_TICK(c, 12);
    // 04cb2e  add esp, 8
    X86_AT(c, 0x4cb2eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04cb31  xchg esi, eax
    X86_AT(c, 0x4cb31u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 04cb32  and esi, esi
    X86_AT(c, 0x4cb32u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 04cb34  jne 0x4cb47
    X86_AT(c, 0x4cb34u);
    if (x86_cc(c, 5)) { goto L_4cb47; }
    X86_TICK(c, 9);
    // 04cb36  push 0x1018
    X86_AT(c, 0x4cb36u);
    { uint32_t v = 0x1018u; push32(c, v); }
    // 04cb3b  call 0x4f0dc
    X86_AT(c, 0x4cb3bu);
    push32(c, 0x4cb40u); x86_call_known(c, 0x4f0dcu, f_0004f0dc); X86_RET(c, 0x4cb40u);
    X86_TICK(c, 9);
    // 04cb40  mov eax, 1
    X86_AT(c, 0x4cb40u);
    c.r[0] = 0x1u;
    // 04cb45  jmp 0x4cb94
    X86_AT(c, 0x4cb45u);
    goto L_4cb94;
L_4cb47:
    X86_TICK(c, 12);
    // 04cb47  cmp dword ptr [ebp + 0x10], 0x20
    X86_AT(c, 0x4cb47u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x20u, 0, 4);
    // 04cb4b  jl 0x4cb7f
    X86_AT(c, 0x4cb4bu);
    if (x86_cc(c, 12)) { goto L_4cb7f; }
    X86_TICK(c, 15);
    // 04cb4d  push esi
    X86_AT(c, 0x4cb4du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04cb4e  push 0x20
    X86_AT(c, 0x4cb4eu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 04cb50  push 1
    X86_AT(c, 0x4cb50u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04cb52  push edi
    X86_AT(c, 0x4cb52u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04cb53  call 0x53200
    X86_AT(c, 0x4cb53u);
    push32(c, 0x4cb58u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4cb58u);
    X86_TICK(c, 9);
    // 04cb58  add esp, 0x10
    X86_AT(c, 0x4cb58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04cb5b  cmp eax, 0x20
    X86_AT(c, 0x4cb5bu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 04cb5e  jl 0x4cb7f
    X86_AT(c, 0x4cb5eu);
    if (x86_cc(c, 12)) { goto L_4cb7f; }
    X86_TICK(c, 17);
    // 04cb60  mov ebx, dword ptr [edi + 0xc]
    X86_AT(c, 0x4cb60u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 04cb63  lea eax, [ebx + 0x20]
    X86_AT(c, 0x4cb63u);
    c.r[0] = (uint32_t)(c.r[3] + 0x20u);
    // 04cb66  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4cb66u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 04cb69  jg 0x4cb7f
    X86_AT(c, 0x4cb69u);
    if (x86_cc(c, 15)) { goto L_4cb7f; }
    X86_TICK(c, 17);
    // 04cb6b  push esi
    X86_AT(c, 0x4cb6bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04cb6c  push ebx
    X86_AT(c, 0x4cb6cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04cb6d  push 1
    X86_AT(c, 0x4cb6du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04cb6f  lea eax, [edi + 0x20]
    X86_AT(c, 0x4cb6fu);
    c.r[0] = (uint32_t)(c.r[7] + 0x20u);
    // 04cb72  push eax
    X86_AT(c, 0x4cb72u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04cb73  call 0x53200
    X86_AT(c, 0x4cb73u);
    push32(c, 0x4cb78u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4cb78u);
    X86_TICK(c, 9);
    // 04cb78  add esp, 0x10
    X86_AT(c, 0x4cb78u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04cb7b  cmp ebx, eax
    X86_AT(c, 0x4cb7bu);
    (void)x86_sub(c, c.r[3], c.r[0], 0, 4);
    // 04cb7d  jle 0x4cb8c
    X86_AT(c, 0x4cb7du);
    if (x86_cc(c, 14)) { goto L_4cb8c; }
L_4cb7f:
    X86_TICK(c, 9);
    // 04cb7f  push esi
    X86_AT(c, 0x4cb7fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04cb80  call 0x539d8
    X86_AT(c, 0x4cb80u);
    push32(c, 0x4cb85u); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x4cb85u);
    X86_TICK(c, 9);
    // 04cb85  mov eax, 2
    X86_AT(c, 0x4cb85u);
    c.r[0] = 0x2u;
    // 04cb8a  jmp 0x4cb94
    X86_AT(c, 0x4cb8au);
    goto L_4cb94;
L_4cb8c:
    X86_TICK(c, 9);
    // 04cb8c  push esi
    X86_AT(c, 0x4cb8cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04cb8d  call 0x539d8
    X86_AT(c, 0x4cb8du);
    push32(c, 0x4cb92u); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x4cb92u);
    X86_TICK(c, 2);
    // 04cb92  sub eax, eax
    X86_AT(c, 0x4cb92u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_4cb94:
    X86_TICK(c, 30);
    // 04cb94  add esp, 4
    X86_AT(c, 0x4cb94u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04cb97  pop edi
    X86_AT(c, 0x4cb97u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04cb98  pop esi
    X86_AT(c, 0x4cb98u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04cb99  pop ebx
    X86_AT(c, 0x4cb99u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04cb9a  leave 
    X86_AT(c, 0x4cb9au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04cb9b  ret 
    X86_AT(c, 0x4cb9bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4cb18u, "ran off the end of a function");
}
void f_0004cd38(X86Cpu& c) {
    X86_TICK(c, 18);
    // 04cd38  push ebx
    X86_AT(c, 0x4cd38u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04cd39  push esi
    X86_AT(c, 0x4cd39u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04cd3a  push edi
    X86_AT(c, 0x4cd3au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04cd3b  cmp dword ptr [0x184c], 0
    X86_AT(c, 0x4cd3bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x184Cu))), 0x0u, 0, 4);
    // 04cd42  jne 0x4cd52
    X86_AT(c, 0x4cd42u);
    if (x86_cc(c, 5)) { goto L_4cd52; }
    X86_TICK(c, 11);
    // 04cd44  mov dword ptr [0x184c], 1
    X86_AT(c, 0x4cd44u);
    wr32((c.sbase[3] + (uint32_t)(0x184Cu)), 0x1u);
    // 04cd4e  sub esi, esi
    X86_AT(c, 0x4cd4eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 04cd50  jmp 0x4cd61
    X86_AT(c, 0x4cd50u);
    goto L_4cd61;
L_4cd52:
    X86_TICK(c, 4);
    // 04cd52  mov dword ptr [0x184c], 0
    X86_AT(c, 0x4cd52u);
    wr32((c.sbase[3] + (uint32_t)(0x184Cu)), 0x0u);
    // 04cd5c  mov esi, 1
    X86_AT(c, 0x4cd5cu);
    c.r[6] = 0x1u;
L_4cd61:
    X86_TICK(c, 8);
    // 04cd61  mov eax, dword ptr [0x184c]
    X86_AT(c, 0x4cd61u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x184Cu)));
    // 04cd66  mov edi, dword ptr [eax*4 + 0x1850]
    X86_AT(c, 0x4cd66u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x1850u)));
L_4cd6d:
    X86_TICK(c, 14);
    // 04cd6d  mov eax, 0x1844
    X86_AT(c, 0x4cd6du);
    c.r[0] = 0x1844u;
    // 04cd72  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0x4cd72u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 04cd76  jne 0x4cde1
    X86_AT(c, 0x4cd76u);
    if (x86_cc(c, 5)) { goto L_4cde1; }
    X86_TICK(c, 15);
    // 04cd78  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x4cd78u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 04cd7b  cmp edi, dword ptr [eax + edx*4 + 0x14]
    X86_AT(c, 0x4cd7bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x14u))), 0, 4);
    // 04cd7f  ja 0x4cde1
    X86_AT(c, 0x4cd7fu);
    if (x86_cc(c, 7)) { goto L_4cde1; }
    X86_TICK(c, 18);
    // 04cd81  push dword ptr [eax + 0x68]
    X86_AT(c, 0x4cd81u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 04cd84  push 6
    X86_AT(c, 0x4cd84u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 04cd86  push 1
    X86_AT(c, 0x4cd86u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04cd88  push edi
    X86_AT(c, 0x4cd88u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04cd89  call 0x53200
    X86_AT(c, 0x4cd89u);
    push32(c, 0x4cd8eu); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4cd8eu);
    X86_TICK(c, 9);
    // 04cd8e  add esp, 0x10
    X86_AT(c, 0x4cd8eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04cd91  cmp eax, 6
    X86_AT(c, 0x4cd91u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 04cd94  jge 0x4cdb5
    X86_AT(c, 0x4cd94u);
    if (x86_cc(c, 13)) { goto L_4cdb5; }
    X86_TICK(c, 12);
    // 04cd96  push dword ptr [0x18ac]
    X86_AT(c, 0x4cd96u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04cd9c  call 0x539d8
    X86_AT(c, 0x4cd9cu);
    push32(c, 0x4cda1u); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x4cda1u);
    X86_TICK(c, 13);
    // 04cda1  mov dword ptr [0x18ac], 0
    X86_AT(c, 0x4cda1u);
    wr32((c.sbase[3] + (uint32_t)(0x18ACu)), 0x0u);
    // 04cdab  mov eax, 2
    X86_AT(c, 0x4cdabu);
    c.r[0] = 0x2u;
    // 04cdb0  add esp, 4
    X86_AT(c, 0x4cdb0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04cdb3  jmp 0x4ce0e
    X86_AT(c, 0x4cdb3u);
    goto L_4ce0e;
L_4cdb5:
    X86_TICK(c, 12);
    // 04cdb5  cmp byte ptr [edi], 0xfe
    X86_AT(c, 0x4cdb5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xFEu, 0, 1);
    // 04cdb8  jne 0x4cddc
    X86_AT(c, 0x4cdb8u);
    if (x86_cc(c, 5)) { goto L_4cddc; }
    X86_TICK(c, 14);
    // 04cdba  mov dword ptr [0x18a8], 1
    X86_AT(c, 0x4cdbau);
    wr32((c.sbase[3] + (uint32_t)(0x18A8u)), 0x1u);
    // 04cdc4  push dword ptr [0x18ac]
    X86_AT(c, 0x4cdc4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18ACu))); push32(c, v); }
    // 04cdca  call 0x539d8
    X86_AT(c, 0x4cdcau);
    push32(c, 0x4cdcfu); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x4cdcfu);
    X86_TICK(c, 4);
    // 04cdcf  mov dword ptr [0x18ac], 0
    X86_AT(c, 0x4cdcfu);
    wr32((c.sbase[3] + (uint32_t)(0x18ACu)), 0x0u);
    // 04cdd9  add esp, 4
    X86_AT(c, 0x4cdd9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_4cddc:
    X86_TICK(c, 9);
    // 04cddc  add edi, 6
    X86_AT(c, 0x4cddcu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 04cddf  jmp 0x4cd6d
    X86_AT(c, 0x4cddfu);
    X86_POLL(c, 0x4cd6du); goto L_4cd6d;
L_4cde1:
    X86_TICK(c, 18);
    // 04cde1  mov eax, 0x1844
    X86_AT(c, 0x4cde1u);
    c.r[0] = 0x1844u;
    // 04cde6  mov bl, byte ptr [eax + 0x1c]
    X86_AT(c, 0x4cde6u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu))));
    // 04cde9  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0x4cde9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 04cded  jne 0x4cdfe
    X86_AT(c, 0x4cdedu);
    if (x86_cc(c, 5)) { goto L_4cdfe; }
    X86_TICK(c, 16);
    // 04cdef  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x4cdefu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 04cdf2  mov edx, dword ptr [eax + edx*4 + 0x14]
    X86_AT(c, 0x4cdf2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x14u)));
    // 04cdf6  mov cl, byte ptr [edx]
    X86_AT(c, 0x4cdf6u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 04cdf8  mov byte ptr [eax + 0x1c], cl
    X86_AT(c, 0x4cdf8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu)), g8(c, 1));
    // 04cdfb  mov byte ptr [edx], 0xfd
    X86_AT(c, 0x4cdfbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0xFDu);
L_4cdfe:
    X86_TICK(c, 13);
    // 04cdfe  mov eax, dword ptr [esi*4 + 0x1858]
    X86_AT(c, 0x4cdfeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x1858u)));
    // 04ce05  mov byte ptr [eax], bl
    X86_AT(c, 0x4ce05u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), g8(c, 3));
    // 04ce07  call 0x509a4
    X86_AT(c, 0x4ce07u);
    push32(c, 0x4ce0cu); x86_call_known(c, 0x509a4u, f_000509a4); X86_RET(c, 0x4ce0cu);
    X86_TICK(c, 2);
    // 04ce0c  sub eax, eax
    X86_AT(c, 0x4ce0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_4ce0e:
    X86_TICK(c, 22);
    // 04ce0e  pop edi
    X86_AT(c, 0x4ce0eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04ce0f  pop esi
    X86_AT(c, 0x4ce0fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04ce10  pop ebx
    X86_AT(c, 0x4ce10u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04ce11  ret 
    X86_AT(c, 0x4ce11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4cd38u, "ran off the end of a function");
}
void f_0004ce14(X86Cpu& c) {
    X86_TICK(c, 9);
    // 04ce14  push 0x141d0
    X86_AT(c, 0x4ce14u);
    { uint32_t v = 0x141D0u; push32(c, v); }
    // 04ce19  call 0x53eb0
    X86_AT(c, 0x4ce19u);
    push32(c, 0x4ce1eu); x86_call_known(c, 0x53eb0u, f_00053eb0); X86_RET(c, 0x4ce1eu);
    X86_TICK(c, 11);
    // 04ce1e  add esp, 4
    X86_AT(c, 0x4ce1eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04ce21  mov dword ptr [0x1898], eax
    X86_AT(c, 0x4ce21u);
    wr32((c.sbase[3] + (uint32_t)(0x1898u)), c.r[0]);
    // 04ce26  and eax, eax
    X86_AT(c, 0x4ce26u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 04ce28  jne 0x4ce3e
    X86_AT(c, 0x4ce28u);
    if (x86_cc(c, 5)) { goto L_4ce3e; }
    X86_TICK(c, 9);
    // 04ce2a  push 0x1068
    X86_AT(c, 0x4ce2au);
    { uint32_t v = 0x1068u; push32(c, v); }
    // 04ce2f  call 0x4f0dc
    X86_AT(c, 0x4ce2fu);
    push32(c, 0x4ce34u); x86_call_known(c, 0x4f0dcu, f_0004f0dc); X86_RET(c, 0x4ce34u);
    X86_TICK(c, 11);
    // 04ce34  mov eax, 0xffffffff
    X86_AT(c, 0x4ce34u);
    c.r[0] = 0xFFFFFFFFu;
    // 04ce39  add esp, 4
    X86_AT(c, 0x4ce39u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04ce3c  jmp 0x4ce9b
    X86_AT(c, 0x4ce3cu);
    goto L_4ce9b;
L_4ce3e:
    X86_TICK(c, 17);
    // 04ce3e  mov eax, dword ptr [0x1898]
    X86_AT(c, 0x4ce3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1898u)));
    // 04ce43  lea edx, [eax + 0x4000]
    X86_AT(c, 0x4ce43u);
    c.r[2] = (uint32_t)(c.r[0] + 0x4000u);
    // 04ce49  mov dword ptr [0x189c], edx
    X86_AT(c, 0x4ce49u);
    wr32((c.sbase[3] + (uint32_t)(0x189Cu)), c.r[2]);
    // 04ce4f  push eax
    X86_AT(c, 0x4ce4fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04ce50  call 0x501cf
    X86_AT(c, 0x4ce50u);
    push32(c, 0x4ce55u); x86_call_known(c, 0x501cfu, f_000501cf); X86_RET(c, 0x4ce55u);
    X86_TICK(c, 9);
    // 04ce55  add esp, 4
    X86_AT(c, 0x4ce55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04ce58  and eax, eax
    X86_AT(c, 0x4ce58u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 04ce5a  je 0x4ce7b
    X86_AT(c, 0x4ce5au);
    if (x86_cc(c, 4)) { goto L_4ce7b; }
    X86_TICK(c, 9);
    // 04ce5c  push 0x10ac
    X86_AT(c, 0x4ce5cu);
    { uint32_t v = 0x10ACu; push32(c, v); }
    // 04ce61  call 0x4f0dc
    X86_AT(c, 0x4ce61u);
    push32(c, 0x4ce66u); x86_call_known(c, 0x4f0dcu, f_0004f0dc); X86_RET(c, 0x4ce66u);
    X86_TICK(c, 12);
    // 04ce66  push dword ptr [0x1898]
    X86_AT(c, 0x4ce66u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1898u))); push32(c, v); }
    // 04ce6c  call 0x53e9c
    X86_AT(c, 0x4ce6cu);
    push32(c, 0x4ce71u); x86_call_known(c, 0x53e9cu, f_00053e9c); X86_RET(c, 0x4ce71u);
    X86_TICK(c, 11);
    // 04ce71  mov eax, 0xffffffff
    X86_AT(c, 0x4ce71u);
    c.r[0] = 0xFFFFFFFFu;
    // 04ce76  add esp, 8
    X86_AT(c, 0x4ce76u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04ce79  jmp 0x4ce9b
    X86_AT(c, 0x4ce79u);
    goto L_4ce9b;
L_4ce7b:
    X86_TICK(c, 7);
    // 04ce7b  call 0x4cb04
    X86_AT(c, 0x4ce7bu);
    push32(c, 0x4ce80u); x86_call_known(c, 0x4cb04u, f_0004cb04); X86_RET(c, 0x4ce80u);
    X86_TICK(c, 19);
    // 04ce80  push dword ptr [0x1898]
    X86_AT(c, 0x4ce80u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1898u))); push32(c, v); }
    // 04ce86  push 0x101d0
    X86_AT(c, 0x4ce86u);
    { uint32_t v = 0x101D0u; push32(c, v); }
    // 04ce8b  push dword ptr [0x189c]
    X86_AT(c, 0x4ce8bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x189Cu))); push32(c, v); }
    // 04ce91  call 0x4c524
    X86_AT(c, 0x4ce91u);
    push32(c, 0x4ce96u); x86_call_known(c, 0x4c524u, f_0004c524); X86_RET(c, 0x4ce96u);
    X86_TICK(c, 4);
    // 04ce96  sub eax, eax
    X86_AT(c, 0x4ce96u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04ce98  add esp, 0xc
    X86_AT(c, 0x4ce98u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_4ce9b:
    X86_TICK(c, 10);
    // 04ce9b  ret 
    X86_AT(c, 0x4ce9bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4ce14u, "ran off the end of a function");
}
void f_0004ce9c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 04ce9c  push dword ptr [0x1898]
    X86_AT(c, 0x4ce9cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1898u))); push32(c, v); }
    // 04cea2  call 0x53e9c
    X86_AT(c, 0x4cea2u);
    push32(c, 0x4cea7u); x86_call_known(c, 0x53e9cu, f_00053e9c); X86_RET(c, 0x4cea7u);
    X86_TICK(c, 7);
    // 04cea7  call 0x50236
    X86_AT(c, 0x4cea7u);
    push32(c, 0x4ceacu); x86_call_known(c, 0x50236u, f_00050236); X86_RET(c, 0x4ceacu);
    X86_TICK(c, 12);
    // 04ceac  add esp, 4
    X86_AT(c, 0x4ceacu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04ceaf  ret 
    X86_AT(c, 0x4ceafu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4ce9cu, "ran off the end of a function");
}
void f_0004d0c4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 04d0c4  push ebp
    X86_AT(c, 0x4d0c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d0c5  mov ebp, esp
    X86_AT(c, 0x4d0c5u);
    c.r[5] = c.r[4];
    // 04d0c7  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x4d0c7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 04d0ca  push dword ptr [ebp + 8]
    X86_AT(c, 0x4d0cau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04d0cd  push 1
    X86_AT(c, 0x4d0cdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04d0cf  call 0x5085c
    X86_AT(c, 0x4d0cfu);
    push32(c, 0x4d0d4u); x86_call_known(c, 0x5085cu, f_0005085c); X86_RET(c, 0x4d0d4u);
    X86_TICK(c, 16);
    // 04d0d4  leave 
    X86_AT(c, 0x4d0d4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d0d5  ret 
    X86_AT(c, 0x4d0d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d0c4u, "ran off the end of a function");
}
void f_0004d17c(X86Cpu& c) {
    X86_TICK(c, 8);
    // 04d17c  push edi
    X86_AT(c, 0x4d17cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d17d  mov dword ptr [0x348dc], 1
    X86_AT(c, 0x4d17du);
    wr32((c.sbase[3] + (uint32_t)(0x348DCu)), 0x1u);
    // 04d187  mov byte ptr [0x348e7], 0
    X86_AT(c, 0x4d187u);
    wr8((c.sbase[3] + (uint32_t)(0x348E7u)), 0x0u);
    // 04d18e  mov edi, 1
    X86_AT(c, 0x4d18eu);
    c.r[7] = 0x1u;
L_4d193:
    X86_TICK(c, 7);
    // 04d193  cmp edi, 0x10
    X86_AT(c, 0x4d193u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 04d196  jge 0x4d1ea
    X86_AT(c, 0x4d196u);
    if (x86_cc(c, 13)) { goto L_4d1ea; }
    X86_TICK(c, 41);
    // 04d198  mov dword ptr [0x348e0], edi
    X86_AT(c, 0x4d198u);
    wr32((c.sbase[3] + (uint32_t)(0x348E0u)), c.r[7]);
    // 04d19e  mov eax, 0x342d8
    X86_AT(c, 0x4d19eu);
    c.r[0] = 0x342D8u;
    // 04d1a3  lea edx, [edi*4]
    X86_AT(c, 0x4d1a3u);
    c.r[2] = (uint32_t)(c.r[7] * 4);
    // 04d1aa  lea edx, [edx + edx*2]
    X86_AT(c, 0x4d1aau);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 04d1ad  mov cl, byte ptr [eax + edx*1 + 0x644]
    X86_AT(c, 0x4d1adu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x644u))));
    // 04d1b4  mov byte ptr [0x348e4], cl
    X86_AT(c, 0x4d1b4u);
    wr8((c.sbase[3] + (uint32_t)(0x348E4u)), g8(c, 1));
    // 04d1ba  mov cl, byte ptr [eax + edx*1 + 0x648]
    X86_AT(c, 0x4d1bau);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x648u))));
    // 04d1c1  mov byte ptr [0x348e5], cl
    X86_AT(c, 0x4d1c1u);
    wr8((c.sbase[3] + (uint32_t)(0x348E5u)), g8(c, 1));
    // 04d1c7  mov dl, byte ptr [eax + edx*1 + 0x64c]
    X86_AT(c, 0x4d1c7u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x64Cu))));
    // 04d1ce  mov byte ptr [0x348e6], dl
    X86_AT(c, 0x4d1ceu);
    wr8((c.sbase[3] + (uint32_t)(0x348E6u)), g8(c, 2));
    // 04d1d4  push 0x348dc
    X86_AT(c, 0x4d1d4u);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04d1d9  push 1
    X86_AT(c, 0x4d1d9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04d1db  add eax, 4
    X86_AT(c, 0x4d1dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 04d1de  push eax
    X86_AT(c, 0x4d1deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d1df  call 0x11c
    X86_AT(c, 0x4d1dfu);
    push32(c, 0x4d1e4u); x86_call_known(c, 0x11cu, f_0000011c); X86_RET(c, 0x4d1e4u);
    X86_TICK(c, 11);
    // 04d1e4  inc edi
    X86_AT(c, 0x4d1e4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 04d1e5  add esp, 0xc
    X86_AT(c, 0x4d1e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 04d1e8  jmp 0x4d193
    X86_AT(c, 0x4d1e8u);
    X86_POLL(c, 0x4d193u); goto L_4d193;
L_4d1ea:
    X86_TICK(c, 14);
    // 04d1ea  pop edi
    X86_AT(c, 0x4d1eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04d1eb  ret 
    X86_AT(c, 0x4d1ebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d17cu, "ran off the end of a function");
}
void f_0004d234(X86Cpu& c) {
    X86_TICK(c, 23);
    // 04d234  push ebp
    X86_AT(c, 0x4d234u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d235  mov ebp, esp
    X86_AT(c, 0x4d235u);
    c.r[5] = c.r[4];
    // 04d237  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x4d237u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04d23b  push eax
    X86_AT(c, 0x4d23bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d23c  push 0
    X86_AT(c, 0x4d23cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d23e  push 0x342dc
    X86_AT(c, 0x4d23eu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d243  call 0x18e
    X86_AT(c, 0x4d243u);
    push32(c, 0x4d248u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x4d248u);
    X86_TICK(c, 16);
    // 04d248  leave 
    X86_AT(c, 0x4d248u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d249  ret 
    X86_AT(c, 0x4d249u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d234u, "ran off the end of a function");
}
void f_0004d24c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 04d24c  push ebp
    X86_AT(c, 0x4d24cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d24d  mov ebp, esp
    X86_AT(c, 0x4d24du);
    c.r[5] = c.r[4];
    // 04d24f  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x4d24fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04d253  push eax
    X86_AT(c, 0x4d253u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d254  push 1
    X86_AT(c, 0x4d254u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04d256  push 0x342dc
    X86_AT(c, 0x4d256u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d25b  call 0x18e
    X86_AT(c, 0x4d25bu);
    push32(c, 0x4d260u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x4d260u);
    X86_TICK(c, 16);
    // 04d260  leave 
    X86_AT(c, 0x4d260u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d261  ret 
    X86_AT(c, 0x4d261u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d24cu, "ran off the end of a function");
}
void f_0004d264(X86Cpu& c) {
    X86_TICK(c, 23);
    // 04d264  push ebp
    X86_AT(c, 0x4d264u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d265  mov ebp, esp
    X86_AT(c, 0x4d265u);
    c.r[5] = c.r[4];
    // 04d267  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x4d267u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04d26b  push eax
    X86_AT(c, 0x4d26bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d26c  push 2
    X86_AT(c, 0x4d26cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04d26e  push 0x342dc
    X86_AT(c, 0x4d26eu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d273  call 0x18e
    X86_AT(c, 0x4d273u);
    push32(c, 0x4d278u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x4d278u);
    X86_TICK(c, 16);
    // 04d278  leave 
    X86_AT(c, 0x4d278u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d279  ret 
    X86_AT(c, 0x4d279u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d264u, "ran off the end of a function");
}
void f_0004d27c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 04d27c  push ebp
    X86_AT(c, 0x4d27cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d27d  mov ebp, esp
    X86_AT(c, 0x4d27du);
    c.r[5] = c.r[4];
    // 04d27f  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x4d27fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04d283  push eax
    X86_AT(c, 0x4d283u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d284  push 3
    X86_AT(c, 0x4d284u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 04d286  push 0x342dc
    X86_AT(c, 0x4d286u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d28b  call 0x18e
    X86_AT(c, 0x4d28bu);
    push32(c, 0x4d290u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x4d290u);
    X86_TICK(c, 16);
    // 04d290  leave 
    X86_AT(c, 0x4d290u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d291  ret 
    X86_AT(c, 0x4d291u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d27cu, "ran off the end of a function");
}
void f_0004d294(X86Cpu& c) {
    X86_TICK(c, 50);
    // 04d294  push ebp
    X86_AT(c, 0x4d294u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d295  mov ebp, esp
    X86_AT(c, 0x4d295u);
    c.r[5] = c.r[4];
    // 04d297  push edi
    X86_AT(c, 0x4d297u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d298  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x4d298u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04d29b  sar eax, 3
    X86_AT(c, 0x4d29bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 04d29e  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4d29eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04d2a1  sar edx, 3
    X86_AT(c, 0x4d2a1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 04d2a4  shl edx, 5
    X86_AT(c, 0x4d2a4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 04d2a7  add edx, eax
    X86_AT(c, 0x4d2a7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 04d2a9  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4d2a9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 04d2ac  sar edi, 3
    X86_AT(c, 0x4d2acu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 04d2af  shl edi, 0xa
    X86_AT(c, 0x4d2afu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 04d2b2  add edi, edx
    X86_AT(c, 0x4d2b2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 04d2b4  push edi
    X86_AT(c, 0x4d2b4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d2b5  push 0
    X86_AT(c, 0x4d2b5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d2b7  push 0x342dc
    X86_AT(c, 0x4d2b7u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d2bc  call 0x18e
    X86_AT(c, 0x4d2bcu);
    push32(c, 0x4d2c1u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x4d2c1u);
    X86_TICK(c, 22);
    // 04d2c1  add esp, 0xc
    X86_AT(c, 0x4d2c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 04d2c4  pop edi
    X86_AT(c, 0x4d2c4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04d2c5  leave 
    X86_AT(c, 0x4d2c5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d2c6  ret 
    X86_AT(c, 0x4d2c6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d294u, "ran off the end of a function");
}
void f_0004d2c8(X86Cpu& c) {
    X86_TICK(c, 50);
    // 04d2c8  push ebp
    X86_AT(c, 0x4d2c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d2c9  mov ebp, esp
    X86_AT(c, 0x4d2c9u);
    c.r[5] = c.r[4];
    // 04d2cb  push edi
    X86_AT(c, 0x4d2cbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d2cc  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x4d2ccu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04d2cf  sar eax, 3
    X86_AT(c, 0x4d2cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 04d2d2  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4d2d2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04d2d5  sar edx, 3
    X86_AT(c, 0x4d2d5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 04d2d8  shl edx, 5
    X86_AT(c, 0x4d2d8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 04d2db  add edx, eax
    X86_AT(c, 0x4d2dbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 04d2dd  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4d2ddu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 04d2e0  sar edi, 3
    X86_AT(c, 0x4d2e0u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 04d2e3  shl edi, 0xa
    X86_AT(c, 0x4d2e3u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 04d2e6  add edi, edx
    X86_AT(c, 0x4d2e6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 04d2e8  push edi
    X86_AT(c, 0x4d2e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d2e9  push 1
    X86_AT(c, 0x4d2e9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04d2eb  push 0x342dc
    X86_AT(c, 0x4d2ebu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d2f0  call 0x18e
    X86_AT(c, 0x4d2f0u);
    push32(c, 0x4d2f5u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x4d2f5u);
    X86_TICK(c, 22);
    // 04d2f5  add esp, 0xc
    X86_AT(c, 0x4d2f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 04d2f8  pop edi
    X86_AT(c, 0x4d2f8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04d2f9  leave 
    X86_AT(c, 0x4d2f9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d2fa  ret 
    X86_AT(c, 0x4d2fau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d2c8u, "ran off the end of a function");
}
void f_0004d2fc(X86Cpu& c) {
    X86_TICK(c, 18);
    // 04d2fc  push ebp
    X86_AT(c, 0x4d2fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d2fd  mov ebp, esp
    X86_AT(c, 0x4d2fdu);
    c.r[5] = c.r[4];
    // 04d2ff  push dword ptr [ebp + 8]
    X86_AT(c, 0x4d2ffu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04d302  push 0x342dc
    X86_AT(c, 0x4d302u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d307  call 0x431
    X86_AT(c, 0x4d307u);
    push32(c, 0x4d30cu); x86_call_known(c, 0x431u, f_00000431); X86_RET(c, 0x4d30cu);
    X86_TICK(c, 16);
    // 04d30c  leave 
    X86_AT(c, 0x4d30cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d30d  ret 
    X86_AT(c, 0x4d30du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d2fcu, "ran off the end of a function");
}
void f_0004d328(X86Cpu& c) {
    X86_TICK(c, 50);
    // 04d328  push ebp
    X86_AT(c, 0x4d328u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d329  mov ebp, esp
    X86_AT(c, 0x4d329u);
    c.r[5] = c.r[4];
    // 04d32b  push edi
    X86_AT(c, 0x4d32bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d32c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x4d32cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04d32f  sar eax, 3
    X86_AT(c, 0x4d32fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 04d332  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4d332u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04d335  sar edx, 3
    X86_AT(c, 0x4d335u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 04d338  shl edx, 5
    X86_AT(c, 0x4d338u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 04d33b  add edx, eax
    X86_AT(c, 0x4d33bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 04d33d  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4d33du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 04d340  sar edi, 3
    X86_AT(c, 0x4d340u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 04d343  shl edi, 0xa
    X86_AT(c, 0x4d343u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 04d346  add edi, edx
    X86_AT(c, 0x4d346u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 04d348  push edi
    X86_AT(c, 0x4d348u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d349  push 2
    X86_AT(c, 0x4d349u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04d34b  push 0x342dc
    X86_AT(c, 0x4d34bu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d350  call 0x18e
    X86_AT(c, 0x4d350u);
    push32(c, 0x4d355u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x4d355u);
    X86_TICK(c, 22);
    // 04d355  add esp, 0xc
    X86_AT(c, 0x4d355u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 04d358  pop edi
    X86_AT(c, 0x4d358u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04d359  leave 
    X86_AT(c, 0x4d359u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d35a  ret 
    X86_AT(c, 0x4d35au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d328u, "ran off the end of a function");
}
void f_0004d35c(X86Cpu& c) {
    X86_TICK(c, 50);
    // 04d35c  push ebp
    X86_AT(c, 0x4d35cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d35d  mov ebp, esp
    X86_AT(c, 0x4d35du);
    c.r[5] = c.r[4];
    // 04d35f  push edi
    X86_AT(c, 0x4d35fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d360  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x4d360u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04d363  sar eax, 3
    X86_AT(c, 0x4d363u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 04d366  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4d366u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04d369  sar edx, 3
    X86_AT(c, 0x4d369u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 04d36c  shl edx, 5
    X86_AT(c, 0x4d36cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 04d36f  add edx, eax
    X86_AT(c, 0x4d36fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 04d371  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4d371u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 04d374  sar edi, 3
    X86_AT(c, 0x4d374u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 04d377  shl edi, 0xa
    X86_AT(c, 0x4d377u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 04d37a  add edi, edx
    X86_AT(c, 0x4d37au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 04d37c  push edi
    X86_AT(c, 0x4d37cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d37d  push 3
    X86_AT(c, 0x4d37du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 04d37f  push 0x342dc
    X86_AT(c, 0x4d37fu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d384  call 0x18e
    X86_AT(c, 0x4d384u);
    push32(c, 0x4d389u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x4d389u);
    X86_TICK(c, 22);
    // 04d389  add esp, 0xc
    X86_AT(c, 0x4d389u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 04d38c  pop edi
    X86_AT(c, 0x4d38cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04d38d  leave 
    X86_AT(c, 0x4d38du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d38e  ret 
    X86_AT(c, 0x4d38eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d35cu, "ran off the end of a function");
}
void f_0004d3a4(X86Cpu& c) {
    X86_TICK(c, 18);
    // 04d3a4  push ebp
    X86_AT(c, 0x4d3a4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d3a5  mov ebp, esp
    X86_AT(c, 0x4d3a5u);
    c.r[5] = c.r[4];
    // 04d3a7  push dword ptr [ebp + 8]
    X86_AT(c, 0x4d3a7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04d3aa  push 0x342dc
    X86_AT(c, 0x4d3aau);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d3af  call 0x1fd
    X86_AT(c, 0x4d3afu);
    push32(c, 0x4d3b4u); x86_call_known(c, 0x1fdu, f_000001fd); X86_RET(c, 0x4d3b4u);
    X86_TICK(c, 16);
    // 04d3b4  leave 
    X86_AT(c, 0x4d3b4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d3b5  ret 
    X86_AT(c, 0x4d3b5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d3a4u, "ran off the end of a function");
}
void f_0004d3b8(X86Cpu& c) {
    X86_TICK(c, 18);
    // 04d3b8  push ebp
    X86_AT(c, 0x4d3b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d3b9  mov ebp, esp
    X86_AT(c, 0x4d3b9u);
    c.r[5] = c.r[4];
    // 04d3bb  push dword ptr [ebp + 8]
    X86_AT(c, 0x4d3bbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04d3be  push 0x342dc
    X86_AT(c, 0x4d3beu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d3c3  call 0x144
    X86_AT(c, 0x4d3c3u);
    push32(c, 0x4d3c8u); x86_call_known(c, 0x144u, f_00000144); X86_RET(c, 0x4d3c8u);
    X86_TICK(c, 16);
    // 04d3c8  leave 
    X86_AT(c, 0x4d3c8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d3c9  ret 
    X86_AT(c, 0x4d3c9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d3b8u, "ran off the end of a function");
}
void f_0004d3cc(X86Cpu& c) {
    X86_TICK(c, 19);
    // 04d3cc  push ebp
    X86_AT(c, 0x4d3ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d3cd  mov ebp, esp
    X86_AT(c, 0x4d3cdu);
    c.r[5] = c.r[4];
    // 04d3cf  push edi
    X86_AT(c, 0x4d3cfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d3d0  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4d3d0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04d3d3  inc edi
    X86_AT(c, 0x4d3d3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 04d3d4  cmp edi, 4
    X86_AT(c, 0x4d3d4u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 04d3d7  jne 0x4d3db
    X86_AT(c, 0x4d3d7u);
    if (x86_cc(c, 5)) { goto L_4d3db; }
    X86_TICK(c, 2);
    // 04d3d9  sub edi, edi
    X86_AT(c, 0x4d3d9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_4d3db:
    X86_TICK(c, 13);
    // 04d3db  push edi
    X86_AT(c, 0x4d3dbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d3dc  push 0
    X86_AT(c, 0x4d3dcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d3de  push 0x342dc
    X86_AT(c, 0x4d3deu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d3e3  call 0x166
    X86_AT(c, 0x4d3e3u);
    push32(c, 0x4d3e8u); x86_call_known(c, 0x166u, f_00000166); X86_RET(c, 0x4d3e8u);
    X86_TICK(c, 22);
    // 04d3e8  add esp, 0xc
    X86_AT(c, 0x4d3e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 04d3eb  pop edi
    X86_AT(c, 0x4d3ebu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04d3ec  leave 
    X86_AT(c, 0x4d3ecu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d3ed  ret 
    X86_AT(c, 0x4d3edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d3ccu, "ran off the end of a function");
}
void f_0004d3f0(X86Cpu& c) {
    X86_TICK(c, 17);
    // 04d3f0  push ebp
    X86_AT(c, 0x4d3f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d3f1  mov ebp, esp
    X86_AT(c, 0x4d3f1u);
    c.r[5] = c.r[4];
    // 04d3f3  push edi
    X86_AT(c, 0x4d3f3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d3f4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4d3f4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04d3f7  and edi, edi
    X86_AT(c, 0x4d3f7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 04d3f9  jne 0x4d406
    X86_AT(c, 0x4d3f9u);
    if (x86_cc(c, 5)) { goto L_4d406; }
    X86_TICK(c, 9);
    // 04d3fb  mov word ptr [0x349dc], 0xa
    X86_AT(c, 0x4d3fbu);
    wr16((c.sbase[3] + (uint32_t)(0x349DCu)), 0xAu);
    // 04d404  jmp 0x4d418
    X86_AT(c, 0x4d404u);
    goto L_4d418;
L_4d406:
    X86_TICK(c, 7);
    // 04d406  cmp edi, 1
    X86_AT(c, 0x4d406u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 04d409  jne 0x4d525
    X86_AT(c, 0x4d409u);
    if (x86_cc(c, 5)) { goto L_4d525; }
    X86_TICK(c, 2);
    // 04d40f  mov word ptr [0x349de], 0xa
    X86_AT(c, 0x4d40fu);
    wr16((c.sbase[3] + (uint32_t)(0x349DEu)), 0xAu);
L_4d418:
    X86_TICK(c, 13);
    // 04d418  push 1
    X86_AT(c, 0x4d418u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04d41a  push edi
    X86_AT(c, 0x4d41au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d41b  push 0x342dc
    X86_AT(c, 0x4d41bu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d420  call 0x6a
    X86_AT(c, 0x4d420u);
    push32(c, 0x4d425u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x4d425u);
    X86_TICK(c, 13);
    // 04d425  push 0xa
    X86_AT(c, 0x4d425u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 04d427  push edi
    X86_AT(c, 0x4d427u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d428  push 0x342dc
    X86_AT(c, 0x4d428u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d42d  call 0x6a
    X86_AT(c, 0x4d42du);
    push32(c, 0x4d432u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x4d432u);
    X86_TICK(c, 9);
    // 04d432  push edi
    X86_AT(c, 0x4d432u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d433  call 0x4d3b8
    X86_AT(c, 0x4d433u);
    push32(c, 0x4d438u); x86_call_known(c, 0x4d3b8u, f_0004d3b8); X86_RET(c, 0x4d438u);
    X86_TICK(c, 22);
    // 04d438  push dword ptr [0x349d8]
    X86_AT(c, 0x4d438u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x349D8u))); push32(c, v); }
    // 04d43e  push dword ptr [0x349d4]
    X86_AT(c, 0x4d43eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x349D4u))); push32(c, v); }
    // 04d444  push dword ptr [0x349d0]
    X86_AT(c, 0x4d444u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x349D0u))); push32(c, v); }
    // 04d44a  call 0x4d294
    X86_AT(c, 0x4d44au);
    push32(c, 0x4d44fu); x86_call_known(c, 0x4d294u, f_0004d294); X86_RET(c, 0x4d44fu);
    X86_TICK(c, 22);
    // 04d44f  push dword ptr [0x34924]
    X86_AT(c, 0x4d44fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34924u))); push32(c, v); }
    // 04d455  push dword ptr [0x34920]
    X86_AT(c, 0x4d455u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34920u))); push32(c, v); }
    // 04d45b  push dword ptr [0x3491c]
    X86_AT(c, 0x4d45bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x3491Cu))); push32(c, v); }
    // 04d461  call 0x4d2c8
    X86_AT(c, 0x4d461u);
    push32(c, 0x4d466u); x86_call_known(c, 0x4d2c8u, f_0004d2c8); X86_RET(c, 0x4d466u);
    X86_TICK(c, 22);
    // 04d466  push dword ptr [0x349c0]
    X86_AT(c, 0x4d466u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x349C0u))); push32(c, v); }
    // 04d46c  push dword ptr [0x349bc]
    X86_AT(c, 0x4d46cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x349BCu))); push32(c, v); }
    // 04d472  push dword ptr [0x349b8]
    X86_AT(c, 0x4d472u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x349B8u))); push32(c, v); }
    // 04d478  call 0x4d328
    X86_AT(c, 0x4d478u);
    push32(c, 0x4d47du); x86_call_known(c, 0x4d328u, f_0004d328); X86_RET(c, 0x4d47du);
    X86_TICK(c, 24);
    // 04d47d  add esp, 0x40
    X86_AT(c, 0x4d47du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 04d480  push dword ptr [0x34924]
    X86_AT(c, 0x4d480u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34924u))); push32(c, v); }
    // 04d486  push dword ptr [0x34920]
    X86_AT(c, 0x4d486u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34920u))); push32(c, v); }
    // 04d48c  push dword ptr [0x3491c]
    X86_AT(c, 0x4d48cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x3491Cu))); push32(c, v); }
    // 04d492  call 0x4d35c
    X86_AT(c, 0x4d492u);
    push32(c, 0x4d497u); x86_call_known(c, 0x4d35cu, f_0004d35c); X86_RET(c, 0x4d497u);
    X86_TICK(c, 19);
    // 04d497  mov word ptr [0x348dc], 0
    X86_AT(c, 0x4d497u);
    wr16((c.sbase[3] + (uint32_t)(0x348DCu)), 0x0u);
    // 04d4a0  mov word ptr [0x348de], 0
    X86_AT(c, 0x4d4a0u);
    wr16((c.sbase[3] + (uint32_t)(0x348DEu)), 0x0u);
    // 04d4a9  mov word ptr [0x348e0], 0x13f
    X86_AT(c, 0x4d4a9u);
    wr16((c.sbase[3] + (uint32_t)(0x348E0u)), 0x13Fu);
    // 04d4b2  mov word ptr [0x348e2], 0xef
    X86_AT(c, 0x4d4b2u);
    wr16((c.sbase[3] + (uint32_t)(0x348E2u)), 0xEFu);
    // 04d4bb  push 0x348dc
    X86_AT(c, 0x4d4bbu);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04d4c0  push 0x342dc
    X86_AT(c, 0x4d4c0u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d4c5  call 0xf8
    X86_AT(c, 0x4d4c5u);
    push32(c, 0x4d4cau); x86_call_known(c, 0xf8u, f_000000f8); X86_RET(c, 0x4d4cau);
    X86_TICK(c, 15);
    // 04d4ca  movsx eax, word ptr [0x349e0]
    X86_AT(c, 0x4d4cau);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x349E0u)));
    // 04d4d1  push eax
    X86_AT(c, 0x4d4d1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d4d2  call 0x4d3a4
    X86_AT(c, 0x4d4d2u);
    push32(c, 0x4d4d7u); x86_call_known(c, 0x4d3a4u, f_0004d3a4); X86_RET(c, 0x4d4d7u);
    X86_TICK(c, 17);
    // 04d4d7  movsx eax, word ptr [0x349e2]
    X86_AT(c, 0x4d4d7u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x349E2u)));
    // 04d4de  push eax
    X86_AT(c, 0x4d4deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d4df  push 0x342dc
    X86_AT(c, 0x4d4dfu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d4e4  call 0x245
    X86_AT(c, 0x4d4e4u);
    push32(c, 0x4d4e9u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x4d4e9u);
    X86_TICK(c, 15);
    // 04d4e9  push 0
    X86_AT(c, 0x4d4e9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d4eb  push 0
    X86_AT(c, 0x4d4ebu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d4ed  push 0
    X86_AT(c, 0x4d4edu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d4ef  push 0x342dc
    X86_AT(c, 0x4d4efu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d4f4  call 0xca
    X86_AT(c, 0x4d4f4u);
    push32(c, 0x4d4f9u); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x4d4f9u);
    X86_TICK(c, 17);
    // 04d4f9  add esp, 0x30
    X86_AT(c, 0x4d4f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 04d4fc  push 2
    X86_AT(c, 0x4d4fcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04d4fe  push 2
    X86_AT(c, 0x4d4feu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04d500  push 2
    X86_AT(c, 0x4d500u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04d502  push 0x342dc
    X86_AT(c, 0x4d502u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d507  call 0xca
    X86_AT(c, 0x4d507u);
    push32(c, 0x4d50cu); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x4d50cu);
    X86_TICK(c, 15);
    // 04d50c  push 0xf0
    X86_AT(c, 0x4d50cu);
    { uint32_t v = 0xF0u; push32(c, v); }
    // 04d511  push 0x140
    X86_AT(c, 0x4d511u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 04d516  push 3
    X86_AT(c, 0x4d516u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 04d518  push 0x342dc
    X86_AT(c, 0x4d518u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d51d  call 0xca
    X86_AT(c, 0x4d51du);
    push32(c, 0x4d522u); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x4d522u);
    X86_TICK(c, 2);
    // 04d522  add esp, 0x20
    X86_AT(c, 0x4d522u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_4d525:
    X86_TICK(c, 20);
    // 04d525  pop edi
    X86_AT(c, 0x4d525u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04d526  leave 
    X86_AT(c, 0x4d526u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d527  ret 
    X86_AT(c, 0x4d527u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d3f0u, "ran off the end of a function");
}
void f_0004d580(X86Cpu& c) {
    X86_TICK(c, 17);
    // 04d580  push ebp
    X86_AT(c, 0x4d580u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d581  mov ebp, esp
    X86_AT(c, 0x4d581u);
    c.r[5] = c.r[4];
    // 04d583  push edi
    X86_AT(c, 0x4d583u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d584  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4d584u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04d587  and edi, edi
    X86_AT(c, 0x4d587u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 04d589  jne 0x4d596
    X86_AT(c, 0x4d589u);
    if (x86_cc(c, 5)) { goto L_4d596; }
    X86_TICK(c, 9);
    // 04d58b  mov word ptr [0x349dc], 3
    X86_AT(c, 0x4d58bu);
    wr16((c.sbase[3] + (uint32_t)(0x349DCu)), 0x3u);
    // 04d594  jmp 0x4d5a8
    X86_AT(c, 0x4d594u);
    goto L_4d5a8;
L_4d596:
    X86_TICK(c, 7);
    // 04d596  cmp edi, 1
    X86_AT(c, 0x4d596u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 04d599  jne 0x4d677
    X86_AT(c, 0x4d599u);
    if (x86_cc(c, 5)) { goto L_4d677; }
    X86_TICK(c, 2);
    // 04d59f  mov word ptr [0x349de], 3
    X86_AT(c, 0x4d59fu);
    wr16((c.sbase[3] + (uint32_t)(0x349DEu)), 0x3u);
L_4d5a8:
    X86_TICK(c, 13);
    // 04d5a8  push 1
    X86_AT(c, 0x4d5a8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04d5aa  push edi
    X86_AT(c, 0x4d5aau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d5ab  push 0x342dc
    X86_AT(c, 0x4d5abu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d5b0  call 0x6a
    X86_AT(c, 0x4d5b0u);
    push32(c, 0x4d5b5u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x4d5b5u);
    X86_TICK(c, 13);
    // 04d5b5  push 3
    X86_AT(c, 0x4d5b5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 04d5b7  push edi
    X86_AT(c, 0x4d5b7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d5b8  push 0x342dc
    X86_AT(c, 0x4d5b8u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d5bd  call 0x6a
    X86_AT(c, 0x4d5bdu);
    push32(c, 0x4d5c2u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x4d5c2u);
    X86_TICK(c, 9);
    // 04d5c2  push edi
    X86_AT(c, 0x4d5c2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d5c3  call 0x4d3b8
    X86_AT(c, 0x4d5c3u);
    push32(c, 0x4d5c8u); x86_call_known(c, 0x4d3b8u, f_0004d3b8); X86_RET(c, 0x4d5c8u);
    X86_TICK(c, 19);
    // 04d5c8  mov word ptr [0x348dc], 0
    X86_AT(c, 0x4d5c8u);
    wr16((c.sbase[3] + (uint32_t)(0x348DCu)), 0x0u);
    // 04d5d1  mov word ptr [0x348de], 0
    X86_AT(c, 0x4d5d1u);
    wr16((c.sbase[3] + (uint32_t)(0x348DEu)), 0x0u);
    // 04d5da  mov word ptr [0x348e0], 0x27f
    X86_AT(c, 0x4d5dau);
    wr16((c.sbase[3] + (uint32_t)(0x348E0u)), 0x27Fu);
    // 04d5e3  mov word ptr [0x348e2], 0x1df
    X86_AT(c, 0x4d5e3u);
    wr16((c.sbase[3] + (uint32_t)(0x348E2u)), 0x1DFu);
    // 04d5ec  push 0x348dc
    X86_AT(c, 0x4d5ecu);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04d5f1  push 0x342dc
    X86_AT(c, 0x4d5f1u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d5f6  call 0xf8
    X86_AT(c, 0x4d5f6u);
    push32(c, 0x4d5fbu); x86_call_known(c, 0xf8u, f_000000f8); X86_RET(c, 0x4d5fbu);
    X86_TICK(c, 7);
    // 04d5fb  call 0x4d17c
    X86_AT(c, 0x4d5fbu);
    push32(c, 0x4d600u); x86_call_known(c, 0x4d17cu, f_0004d17c); X86_RET(c, 0x4d600u);
    X86_TICK(c, 9);
    // 04d600  push 0xf
    X86_AT(c, 0x4d600u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 04d602  call 0x4d234
    X86_AT(c, 0x4d602u);
    push32(c, 0x4d607u); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4d607u);
    X86_TICK(c, 9);
    // 04d607  push 0
    X86_AT(c, 0x4d607u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d609  call 0x4d24c
    X86_AT(c, 0x4d609u);
    push32(c, 0x4d60eu); x86_call_known(c, 0x4d24cu, f_0004d24c); X86_RET(c, 0x4d60eu);
    X86_TICK(c, 9);
    // 04d60e  push 0xd
    X86_AT(c, 0x4d60eu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 04d610  call 0x4d264
    X86_AT(c, 0x4d610u);
    push32(c, 0x4d615u); x86_call_known(c, 0x4d264u, f_0004d264); X86_RET(c, 0x4d615u);
    X86_TICK(c, 9);
    // 04d615  push 0
    X86_AT(c, 0x4d615u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d617  call 0x4d27c
    X86_AT(c, 0x4d617u);
    push32(c, 0x4d61cu); x86_call_known(c, 0x4d27cu, f_0004d27c); X86_RET(c, 0x4d61cu);
    X86_TICK(c, 15);
    // 04d61c  movsx eax, word ptr [0x349e0]
    X86_AT(c, 0x4d61cu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x349E0u)));
    // 04d623  push eax
    X86_AT(c, 0x4d623u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d624  call 0x4d3a4
    X86_AT(c, 0x4d624u);
    push32(c, 0x4d629u); x86_call_known(c, 0x4d3a4u, f_0004d3a4); X86_RET(c, 0x4d629u);
    X86_TICK(c, 17);
    // 04d629  movsx eax, word ptr [0x349e2]
    X86_AT(c, 0x4d629u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x349E2u)));
    // 04d630  push eax
    X86_AT(c, 0x4d630u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d631  push 0x342dc
    X86_AT(c, 0x4d631u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d636  call 0x245
    X86_AT(c, 0x4d636u);
    push32(c, 0x4d63bu); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x4d63bu);
    X86_TICK(c, 17);
    // 04d63b  add esp, 0x40
    X86_AT(c, 0x4d63bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 04d63e  push 0
    X86_AT(c, 0x4d63eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d640  push 0
    X86_AT(c, 0x4d640u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d642  push 0
    X86_AT(c, 0x4d642u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d644  push 0x342dc
    X86_AT(c, 0x4d644u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d649  call 0xca
    X86_AT(c, 0x4d649u);
    push32(c, 0x4d64eu); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x4d64eu);
    X86_TICK(c, 15);
    // 04d64e  push 1
    X86_AT(c, 0x4d64eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04d650  push 1
    X86_AT(c, 0x4d650u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04d652  push 2
    X86_AT(c, 0x4d652u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04d654  push 0x342dc
    X86_AT(c, 0x4d654u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d659  call 0xca
    X86_AT(c, 0x4d659u);
    push32(c, 0x4d65eu); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x4d65eu);
    X86_TICK(c, 15);
    // 04d65e  push 0x1e0
    X86_AT(c, 0x4d65eu);
    { uint32_t v = 0x1E0u; push32(c, v); }
    // 04d663  push 0x280
    X86_AT(c, 0x4d663u);
    { uint32_t v = 0x280u; push32(c, v); }
    // 04d668  push 3
    X86_AT(c, 0x4d668u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 04d66a  push 0x342dc
    X86_AT(c, 0x4d66au);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d66f  call 0xca
    X86_AT(c, 0x4d66fu);
    push32(c, 0x4d674u); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x4d674u);
    X86_TICK(c, 2);
    // 04d674  add esp, 0x30
    X86_AT(c, 0x4d674u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_4d677:
    X86_TICK(c, 20);
    // 04d677  pop edi
    X86_AT(c, 0x4d677u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04d678  leave 
    X86_AT(c, 0x4d678u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d679  ret 
    X86_AT(c, 0x4d679u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d580u, "ran off the end of a function");
}
void f_0004d67c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 04d67c  push 0x600
    X86_AT(c, 0x4d67cu);
    { uint32_t v = 0x600u; push32(c, v); }
    // 04d681  push 0x342dc
    X86_AT(c, 0x4d681u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d686  call 0x48
    X86_AT(c, 0x4d686u);
    push32(c, 0x4d68bu); x86_call_known(c, 0x48u, f_00000048); X86_RET(c, 0x4d68bu);
    X86_TICK(c, 9);
    // 04d68b  add esp, 8
    X86_AT(c, 0x4d68bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04d68e  and eax, eax
    X86_AT(c, 0x4d68eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 04d690  je 0x4d69c
    X86_AT(c, 0x4d690u);
    if (x86_cc(c, 4)) { goto L_4d69c; }
    X86_TICK(c, 9);
    // 04d692  mov eax, 0xffffffff
    X86_AT(c, 0x4d692u);
    c.r[0] = 0xFFFFFFFFu;
    // 04d697  jmp 0x4d756
    X86_AT(c, 0x4d697u);
    goto L_4d756;
L_4d69c:
    X86_TICK(c, 17);
    // 04d69c  mov word ptr [0x349dc], 3
    X86_AT(c, 0x4d69cu);
    wr16((c.sbase[3] + (uint32_t)(0x349DCu)), 0x3u);
    // 04d6a5  mov eax, 3
    X86_AT(c, 0x4d6a5u);
    c.r[0] = 0x3u;
    // 04d6aa  push eax
    X86_AT(c, 0x4d6aau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d6ab  push 0
    X86_AT(c, 0x4d6abu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d6ad  push 0x342dc
    X86_AT(c, 0x4d6adu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d6b2  call 0x6a
    X86_AT(c, 0x4d6b2u);
    push32(c, 0x4d6b7u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x4d6b7u);
    X86_TICK(c, 19);
    // 04d6b7  mov ax, 3
    X86_AT(c, 0x4d6b7u);
    s16(c, 0, 0x3u);
    // 04d6bb  mov word ptr [0x349de], ax
    X86_AT(c, 0x4d6bbu);
    wr16((c.sbase[3] + (uint32_t)(0x349DEu)), (c.r[0] & 0xFFFFu));
    // 04d6c1  mov eax, 3
    X86_AT(c, 0x4d6c1u);
    c.r[0] = 0x3u;
    // 04d6c6  push eax
    X86_AT(c, 0x4d6c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d6c7  push 1
    X86_AT(c, 0x4d6c7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04d6c9  push 0x342dc
    X86_AT(c, 0x4d6c9u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d6ce  call 0x6a
    X86_AT(c, 0x4d6ceu);
    push32(c, 0x4d6d3u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x4d6d3u);
    X86_TICK(c, 15);
    // 04d6d3  mov ax, 9
    X86_AT(c, 0x4d6d3u);
    s16(c, 0, 0x9u);
    // 04d6d7  mov word ptr [0x349e0], ax
    X86_AT(c, 0x4d6d7u);
    wr16((c.sbase[3] + (uint32_t)(0x349E0u)), (c.r[0] & 0xFFFFu));
    // 04d6dd  mov eax, 9
    X86_AT(c, 0x4d6ddu);
    c.r[0] = 0x9u;
    // 04d6e2  push eax
    X86_AT(c, 0x4d6e2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d6e3  call 0x4d3a4
    X86_AT(c, 0x4d6e3u);
    push32(c, 0x4d6e8u); x86_call_known(c, 0x4d3a4u, f_0004d3a4); X86_RET(c, 0x4d6e8u);
    X86_TICK(c, 17);
    // 04d6e8  mov ax, 0x22
    X86_AT(c, 0x4d6e8u);
    s16(c, 0, 0x22u);
    // 04d6ec  mov word ptr [0x349e2], ax
    X86_AT(c, 0x4d6ecu);
    wr16((c.sbase[3] + (uint32_t)(0x349E2u)), (c.r[0] & 0xFFFFu));
    // 04d6f2  mov eax, 0x22
    X86_AT(c, 0x4d6f2u);
    c.r[0] = 0x22u;
    // 04d6f7  push eax
    X86_AT(c, 0x4d6f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d6f8  push 0x342dc
    X86_AT(c, 0x4d6f8u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d6fd  call 0x245
    X86_AT(c, 0x4d6fdu);
    push32(c, 0x4d702u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x4d702u);
    X86_TICK(c, 9);
    // 04d702  push 0
    X86_AT(c, 0x4d702u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d704  call 0x4d3b8
    X86_AT(c, 0x4d704u);
    push32(c, 0x4d709u); x86_call_known(c, 0x4d3b8u, f_0004d3b8); X86_RET(c, 0x4d709u);
    X86_TICK(c, 9);
    // 04d709  push 0
    X86_AT(c, 0x4d709u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d70b  call 0x4d3cc
    X86_AT(c, 0x4d70bu);
    push32(c, 0x4d710u); x86_call_known(c, 0x4d3ccu, f_0004d3cc); X86_RET(c, 0x4d710u);
    X86_TICK(c, 7);
    // 04d710  call 0x4d17c
    X86_AT(c, 0x4d710u);
    push32(c, 0x4d715u); x86_call_known(c, 0x4d17cu, f_0004d17c); X86_RET(c, 0x4d715u);
    X86_TICK(c, 9);
    // 04d715  push 0xf
    X86_AT(c, 0x4d715u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 04d717  call 0x4d234
    X86_AT(c, 0x4d717u);
    push32(c, 0x4d71cu); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4d71cu);
    X86_TICK(c, 9);
    // 04d71c  push 0
    X86_AT(c, 0x4d71cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d71e  call 0x4d24c
    X86_AT(c, 0x4d71eu);
    push32(c, 0x4d723u); x86_call_known(c, 0x4d24cu, f_0004d24c); X86_RET(c, 0x4d723u);
    X86_TICK(c, 9);
    // 04d723  push 0xd
    X86_AT(c, 0x4d723u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 04d725  call 0x4d264
    X86_AT(c, 0x4d725u);
    push32(c, 0x4d72au); x86_call_known(c, 0x4d264u, f_0004d264); X86_RET(c, 0x4d72au);
    X86_TICK(c, 11);
    // 04d72a  push 0
    X86_AT(c, 0x4d72au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d72c  push 0x342dc
    X86_AT(c, 0x4d72cu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d731  call 0x39c
    X86_AT(c, 0x4d731u);
    push32(c, 0x4d736u); x86_call_known(c, 0x39cu, f_0000039c); X86_RET(c, 0x4d736u);
    X86_TICK(c, 13);
    // 04d736  add esp, 0x40
    X86_AT(c, 0x4d736u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 04d739  push 0
    X86_AT(c, 0x4d739u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d73b  push 0x342dc
    X86_AT(c, 0x4d73bu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d740  call 0x3be
    X86_AT(c, 0x4d740u);
    push32(c, 0x4d745u); x86_call_known(c, 0x3beu, f_000003be); X86_RET(c, 0x4d745u);
    X86_TICK(c, 11);
    // 04d745  push 0
    X86_AT(c, 0x4d745u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d747  push 0x342dc
    X86_AT(c, 0x4d747u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d74c  call 0x3e0
    X86_AT(c, 0x4d74cu);
    push32(c, 0x4d751u); x86_call_known(c, 0x3e0u, f_000003e0); X86_RET(c, 0x4d751u);
    X86_TICK(c, 4);
    // 04d751  sub eax, eax
    X86_AT(c, 0x4d751u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04d753  add esp, 0x10
    X86_AT(c, 0x4d753u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_4d756:
    X86_TICK(c, 10);
    // 04d756  ret 
    X86_AT(c, 0x4d756u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d67cu, "ran off the end of a function");
}
}

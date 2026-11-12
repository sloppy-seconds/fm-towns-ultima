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
void f_0008aa64(X86Cpu& c) {
    X86_TICK(c, 26);
    // 08aa64  push ebp
    X86_AT(c, 0x8aa64u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08aa65  mov ebp, esp
    X86_AT(c, 0x8aa65u);
    c.r[5] = c.r[4];
    // 08aa67  push ebx
    X86_AT(c, 0x8aa67u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08aa68  push edi
    X86_AT(c, 0x8aa68u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08aa69  mov bl, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8aa69u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08aa6c  mov edi, 0xffffffff
    X86_AT(c, 0x8aa6cu);
    c.r[7] = 0xFFFFFFFFu;
    // 08aa71  cmp byte ptr [ebp + 8], 0
    X86_AT(c, 0x8aa71u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 1);
    // 08aa75  jne 0x8aa7e
    X86_AT(c, 0x8aa75u);
    if (x86_cc(c, 5)) { goto L_8aa7e; }
    X86_TICK(c, 9);
    // 08aa77  sub eax, eax
    X86_AT(c, 0x8aa77u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08aa79  jmp 0x8abdc
    X86_AT(c, 0x8aa79u);
    goto L_8abdc;
L_8aa7e:
    X86_TICK(c, 12);
    // 08aa7e  cmp byte ptr [ebp + 8], 2
    X86_AT(c, 0x8aa7eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x2u, 0, 1);
    // 08aa82  jne 0x8aa89
    X86_AT(c, 0x8aa82u);
    if (x86_cc(c, 5)) { goto L_8aa89; }
    X86_TICK(c, 2);
    // 08aa84  mov edi, 0x100
    X86_AT(c, 0x8aa84u);
    c.r[7] = 0x100u;
L_8aa89:
    X86_TICK(c, 12);
    // 08aa89  cmp byte ptr [ebp + 8], 0x10
    X86_AT(c, 0x8aa89u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x10u, 0, 1);
    // 08aa8d  jne 0x8aa94
    X86_AT(c, 0x8aa8du);
    if (x86_cc(c, 5)) { goto L_8aa94; }
    X86_TICK(c, 2);
    // 08aa8f  mov edi, 0x102
    X86_AT(c, 0x8aa8fu);
    c.r[7] = 0x102u;
L_8aa94:
    X86_TICK(c, 12);
    // 08aa94  cmp byte ptr [ebp + 8], 0x22
    X86_AT(c, 0x8aa94u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x22u, 0, 1);
    // 08aa98  jne 0x8aa9f
    X86_AT(c, 0x8aa98u);
    if (x86_cc(c, 5)) { goto L_8aa9f; }
    X86_TICK(c, 2);
    // 08aa9a  mov edi, 0x104
    X86_AT(c, 0x8aa9au);
    c.r[7] = 0x104u;
L_8aa9f:
    X86_TICK(c, 12);
    // 08aa9f  cmp byte ptr [ebp + 8], 0x23
    X86_AT(c, 0x8aa9fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x23u, 0, 1);
    // 08aaa3  jne 0x8aaaa
    X86_AT(c, 0x8aaa3u);
    if (x86_cc(c, 5)) { goto L_8aaaa; }
    X86_TICK(c, 2);
    // 08aaa5  mov edi, 0x108
    X86_AT(c, 0x8aaa5u);
    c.r[7] = 0x108u;
L_8aaaa:
    X86_TICK(c, 12);
    // 08aaaa  cmp byte ptr [ebp + 8], 0x80
    X86_AT(c, 0x8aaaau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x80u, 0, 1);
    // 08aaae  jne 0x8ab25
    X86_AT(c, 0x8aaaeu);
    if (x86_cc(c, 5)) { goto L_8ab25; }
    X86_TICK(c, 14);
    // 08aab4  movzx ebx, bl
    X86_AT(c, 0x8aab4u);
    c.r[3] = g8(c, 3);
    // 08aab7  mov eax, ebx
    X86_AT(c, 0x8aab7u);
    c.r[0] = c.r[3];
    // 08aab9  and eax, 0x80
    X86_AT(c, 0x8aab9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x80u, 4); }
    // 08aabe  cmp eax, 0x80
    X86_AT(c, 0x8aabeu);
    (void)x86_sub(c, c.r[0], 0x80u, 0, 4);
    // 08aac3  jne 0x8aaca
    X86_AT(c, 0x8aac3u);
    if (x86_cc(c, 5)) { goto L_8aaca; }
    X86_TICK(c, 2);
    // 08aac5  mov edi, 0x80
    X86_AT(c, 0x8aac5u);
    c.r[7] = 0x80u;
L_8aaca:
    X86_TICK(c, 11);
    // 08aaca  mov eax, ebx
    X86_AT(c, 0x8aacau);
    c.r[0] = c.r[3];
    // 08aacc  and al, 0x40
    X86_AT(c, 0x8aaccu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x40u, 1)); }
    // 08aace  cmp al, 0x40
    X86_AT(c, 0x8aaceu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08aad0  jne 0x8aad7
    X86_AT(c, 0x8aad0u);
    if (x86_cc(c, 5)) { goto L_8aad7; }
    X86_TICK(c, 2);
    // 08aad2  mov edi, 0x40
    X86_AT(c, 0x8aad2u);
    c.r[7] = 0x40u;
L_8aad7:
    X86_TICK(c, 11);
    // 08aad7  mov eax, ebx
    X86_AT(c, 0x8aad7u);
    c.r[0] = c.r[3];
    // 08aad9  and al, 0x20
    X86_AT(c, 0x8aad9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x20u, 1)); }
    // 08aadb  cmp al, 0x20
    X86_AT(c, 0x8aadbu);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 08aadd  jne 0x8aae4
    X86_AT(c, 0x8aaddu);
    if (x86_cc(c, 5)) { goto L_8aae4; }
    X86_TICK(c, 2);
    // 08aadf  mov edi, 0x20
    X86_AT(c, 0x8aadfu);
    c.r[7] = 0x20u;
L_8aae4:
    X86_TICK(c, 11);
    // 08aae4  mov eax, ebx
    X86_AT(c, 0x8aae4u);
    c.r[0] = c.r[3];
    // 08aae6  and al, 0x10
    X86_AT(c, 0x8aae6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x10u, 1)); }
    // 08aae8  cmp al, 0x10
    X86_AT(c, 0x8aae8u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 08aaea  jne 0x8aaf1
    X86_AT(c, 0x8aaeau);
    if (x86_cc(c, 5)) { goto L_8aaf1; }
    X86_TICK(c, 2);
    // 08aaec  mov edi, 0x10
    X86_AT(c, 0x8aaecu);
    c.r[7] = 0x10u;
L_8aaf1:
    X86_TICK(c, 11);
    // 08aaf1  mov eax, ebx
    X86_AT(c, 0x8aaf1u);
    c.r[0] = c.r[3];
    // 08aaf3  and al, 8
    X86_AT(c, 0x8aaf3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x8u, 1)); }
    // 08aaf5  cmp al, 8
    X86_AT(c, 0x8aaf5u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 08aaf7  jne 0x8aafe
    X86_AT(c, 0x8aaf7u);
    if (x86_cc(c, 5)) { goto L_8aafe; }
    X86_TICK(c, 2);
    // 08aaf9  mov edi, 8
    X86_AT(c, 0x8aaf9u);
    c.r[7] = 0x8u;
L_8aafe:
    X86_TICK(c, 11);
    // 08aafe  mov eax, ebx
    X86_AT(c, 0x8aafeu);
    c.r[0] = c.r[3];
    // 08ab00  and al, 4
    X86_AT(c, 0x8ab00u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x4u, 1)); }
    // 08ab02  cmp al, 4
    X86_AT(c, 0x8ab02u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 08ab04  jne 0x8ab0b
    X86_AT(c, 0x8ab04u);
    if (x86_cc(c, 5)) { goto L_8ab0b; }
    X86_TICK(c, 2);
    // 08ab06  mov edi, 4
    X86_AT(c, 0x8ab06u);
    c.r[7] = 0x4u;
L_8ab0b:
    X86_TICK(c, 11);
    // 08ab0b  mov eax, ebx
    X86_AT(c, 0x8ab0bu);
    c.r[0] = c.r[3];
    // 08ab0d  and al, 2
    X86_AT(c, 0x8ab0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x2u, 1)); }
    // 08ab0f  cmp al, 2
    X86_AT(c, 0x8ab0fu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 08ab11  jne 0x8ab18
    X86_AT(c, 0x8ab11u);
    if (x86_cc(c, 5)) { goto L_8ab18; }
    X86_TICK(c, 2);
    // 08ab13  mov edi, 2
    X86_AT(c, 0x8ab13u);
    c.r[7] = 0x2u;
L_8ab18:
    X86_TICK(c, 11);
    // 08ab18  mov eax, ebx
    X86_AT(c, 0x8ab18u);
    c.r[0] = c.r[3];
    // 08ab1a  and al, 1
    X86_AT(c, 0x8ab1au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 08ab1c  dec al
    X86_AT(c, 0x8ab1cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 08ab1e  jne 0x8ab25
    X86_AT(c, 0x8ab1eu);
    if (x86_cc(c, 5)) { goto L_8ab25; }
    X86_TICK(c, 2);
    // 08ab20  mov edi, 1
    X86_AT(c, 0x8ab20u);
    c.r[7] = 0x1u;
L_8ab25:
    X86_TICK(c, 9);
    // 08ab25  mov edx, edi
    X86_AT(c, 0x8ab25u);
    c.r[2] = c.r[7];
    // 08ab27  cmp edx, 0x20
    X86_AT(c, 0x8ab27u);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 08ab2a  ja 0x8ab87
    X86_AT(c, 0x8ab2au);
    if (x86_cc(c, 7)) { goto L_8ab87; }
    X86_TICK(c, 7);
    // 08ab2c  cmp edx, 0x20
    X86_AT(c, 0x8ab2cu);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 08ab2f  je 0x8abc6
    X86_AT(c, 0x8ab2fu);
    if (x86_cc(c, 4)) { goto L_8abc6; }
    X86_TICK(c, 9);
    // 08ab35  dec edx
    X86_AT(c, 0x8ab35u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 08ab36  cmp edx, 0xf
    X86_AT(c, 0x8ab36u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 08ab39  ja 0x8abcd
    X86_AT(c, 0x8ab39u);
    if (x86_cc(c, 7)) { goto L_8abcd; }
    X86_TICK(c, 7);
    // 08ab3f  jmp dword ptr cs:[edx*4 + 0x8ab47]
    X86_AT(c, 0x8ab3fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0x8AB47u)));
      switch (t) {
      case 0x8abb1u: goto L_8abb1;
      case 0x8abb8u: goto L_8abb8;
      case 0x8abbfu: goto L_8abbf;
      case 0x8abcdu: goto L_8abcd;
      case 0x8abdau: goto L_8abda;
      default: x86_jump(c, t); return; } }
L_8ab87:
    X86_TICK(c, 7);
    // 08ab87  cmp edx, 0x80
    X86_AT(c, 0x8ab87u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 08ab8d  je 0x8abda
    X86_AT(c, 0x8ab8du);
    if (x86_cc(c, 4)) { goto L_8abda; }
    X86_TICK(c, 7);
    // 08ab8f  cmp edx, 0x100
    X86_AT(c, 0x8ab8fu);
    (void)x86_sub(c, c.r[2], 0x100u, 0, 4);
    // 08ab95  je 0x8abda
    X86_AT(c, 0x8ab95u);
    if (x86_cc(c, 4)) { goto L_8abda; }
    X86_TICK(c, 7);
    // 08ab97  cmp edx, 0x102
    X86_AT(c, 0x8ab97u);
    (void)x86_sub(c, c.r[2], 0x102u, 0, 4);
    // 08ab9d  je 0x8abda
    X86_AT(c, 0x8ab9du);
    if (x86_cc(c, 4)) { goto L_8abda; }
    X86_TICK(c, 7);
    // 08ab9f  cmp edx, 0x104
    X86_AT(c, 0x8ab9fu);
    (void)x86_sub(c, c.r[2], 0x104u, 0, 4);
    // 08aba5  je 0x8abda
    X86_AT(c, 0x8aba5u);
    if (x86_cc(c, 4)) { goto L_8abda; }
    X86_TICK(c, 7);
    // 08aba7  cmp edx, 0x108
    X86_AT(c, 0x8aba7u);
    (void)x86_sub(c, c.r[2], 0x108u, 0, 4);
    // 08abad  je 0x8abda
    X86_AT(c, 0x8abadu);
    if (x86_cc(c, 4)) { goto L_8abda; }
    X86_TICK(c, 7);
    // 08abaf  jmp 0x8abcd
    X86_AT(c, 0x8abafu);
    goto L_8abcd;
L_8abb1:
    X86_TICK(c, 9);
    // 08abb1  push 0xdf8
    X86_AT(c, 0x8abb1u);
    { uint32_t v = 0xDF8u; push32(c, v); }
    // 08abb6  jmp 0x8abd2
    X86_AT(c, 0x8abb6u);
    goto L_8abd2;
L_8abb8:
    X86_TICK(c, 9);
    // 08abb8  push 0xe34
    X86_AT(c, 0x8abb8u);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 08abbd  jmp 0x8abd2
    X86_AT(c, 0x8abbdu);
    goto L_8abd2;
L_8abbf:
    X86_TICK(c, 9);
    // 08abbf  push 0xe70
    X86_AT(c, 0x8abbfu);
    { uint32_t v = 0xE70u; push32(c, v); }
    // 08abc4  jmp 0x8abd2
    X86_AT(c, 0x8abc4u);
    goto L_8abd2;
L_8abc6:
    X86_TICK(c, 9);
    // 08abc6  push 0xea4
    X86_AT(c, 0x8abc6u);
    { uint32_t v = 0xEA4u; push32(c, v); }
    // 08abcb  jmp 0x8abd2
    X86_AT(c, 0x8abcbu);
    goto L_8abd2;
L_8abcd:
    X86_TICK(c, 2);
    // 08abcd  push 0xee8
    X86_AT(c, 0x8abcdu);
    { uint32_t v = 0xEE8u; push32(c, v); }
L_8abd2:
    X86_TICK(c, 7);
    // 08abd2  call 0x8e09c
    X86_AT(c, 0x8abd2u);
    push32(c, 0x8abd7u); x86_call_known(c, 0x8e09cu, f_0008e09c); X86_RET(c, 0x8abd7u);
    X86_TICK(c, 2);
    // 08abd7  add esp, 4
    X86_AT(c, 0x8abd7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8abda:
    X86_TICK(c, 2);
    // 08abda  mov eax, edi
    X86_AT(c, 0x8abdau);
    c.r[0] = c.r[7];
L_8abdc:
    X86_TICK(c, 24);
    // 08abdc  pop edi
    X86_AT(c, 0x8abdcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08abdd  pop ebx
    X86_AT(c, 0x8abddu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08abde  leave 
    X86_AT(c, 0x8abdeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08abdf  ret 
    X86_AT(c, 0x8abdfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8aa64u, "ran off the end of a function");
}
void f_0008abe0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08abe0  push 0xf20
    X86_AT(c, 0x8abe0u);
    { uint32_t v = 0xF20u; push32(c, v); }
    // 08abe5  call 0x8e09c
    X86_AT(c, 0x8abe5u);
    push32(c, 0x8abeau); x86_call_known(c, 0x8e09cu, f_0008e09c); X86_RET(c, 0x8abeau);
    X86_TICK(c, 14);
    // 08abea  mov eax, 0xffffffff
    X86_AT(c, 0x8abeau);
    c.r[0] = 0xFFFFFFFFu;
    // 08abef  add esp, 4
    X86_AT(c, 0x8abefu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08abf2  ret 
    X86_AT(c, 0x8abf2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8abe0u, "ran off the end of a function");
}
void f_0008abf4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08abf4  mov dword ptr [0xdb4], 0x250f
    X86_AT(c, 0x8abf4u);
    wr32((c.sbase[3] + (uint32_t)(0xDB4u)), 0x250Fu);
    // 08abfe  mov dword ptr [0xdb8], 0xb24
    X86_AT(c, 0x8abfeu);
    wr32((c.sbase[3] + (uint32_t)(0xDB8u)), 0xB24u);
    // 08ac08  mov dword ptr [0xdbc], 0x12f
    X86_AT(c, 0x8ac08u);
    wr32((c.sbase[3] + (uint32_t)(0xDBCu)), 0x12Fu);
    // 08ac12  push 0xdd0
    X86_AT(c, 0x8ac12u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08ac17  push 0xdb4
    X86_AT(c, 0x8ac17u);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08ac1c  call 0x936ba
    X86_AT(c, 0x8ac1cu);
    push32(c, 0x8ac21u); x86_call_known(c, 0x936bau, f_000936ba); X86_RET(c, 0x8ac21u);
    X86_TICK(c, 14);
    // 08ac21  add esp, 8
    X86_AT(c, 0x8ac21u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08ac24  cmp dword ptr [0xde8], 0
    X86_AT(c, 0x8ac24u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDE8u))), 0x0u, 0, 4);
    // 08ac2b  jne 0x8ac90
    X86_AT(c, 0x8ac2bu);
    if (x86_cc(c, 5)) { goto L_8ac90; }
    X86_TICK(c, 38);
    // 08ac2d  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x8ac2du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 08ac32  and eax, 0xffff
    X86_AT(c, 0x8ac32u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 08ac37  mov dword ptr [0xda8], eax
    X86_AT(c, 0x8ac37u);
    wr32((c.sbase[3] + (uint32_t)(0xDA8u)), c.r[0]);
    // 08ac3c  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x8ac3cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 08ac41  shr eax, 0x10
    X86_AT(c, 0x8ac41u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 08ac44  and eax, 0xffff
    X86_AT(c, 0x8ac44u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 08ac49  mov dword ptr [0xda4], eax
    X86_AT(c, 0x8ac49u);
    wr32((c.sbase[3] + (uint32_t)(0xDA4u)), c.r[0]);
    // 08ac4e  mov dword ptr [0xdb4], 0x250f
    X86_AT(c, 0x8ac4eu);
    wr32((c.sbase[3] + (uint32_t)(0xDB4u)), 0x250Fu);
    // 08ac58  mov word ptr [0xdb8], 0x93
    X86_AT(c, 0x8ac58u);
    wr16((c.sbase[3] + (uint32_t)(0xDB8u)), 0x93u);
    // 08ac61  mov dword ptr [0xdb8], 0xc54
    X86_AT(c, 0x8ac61u);
    wr32((c.sbase[3] + (uint32_t)(0xDB8u)), 0xC54u);
    // 08ac6b  mov dword ptr [0xdbc], 0xa
    X86_AT(c, 0x8ac6bu);
    wr32((c.sbase[3] + (uint32_t)(0xDBCu)), 0xAu);
    // 08ac75  push 0xdd0
    X86_AT(c, 0x8ac75u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08ac7a  push 0xdb4
    X86_AT(c, 0x8ac7au);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08ac7f  call 0x936ba
    X86_AT(c, 0x8ac7fu);
    push32(c, 0x8ac84u); x86_call_known(c, 0x936bau, f_000936ba); X86_RET(c, 0x8ac84u);
    X86_TICK(c, 14);
    // 08ac84  add esp, 8
    X86_AT(c, 0x8ac84u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08ac87  cmp dword ptr [0xde8], 0
    X86_AT(c, 0x8ac87u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDE8u))), 0x0u, 0, 4);
    // 08ac8e  je 0x8ac97
    X86_AT(c, 0x8ac8eu);
    if (x86_cc(c, 4)) { goto L_8ac97; }
L_8ac90:
    X86_TICK(c, 7);
    // 08ac90  call 0x8abe0
    X86_AT(c, 0x8ac90u);
    push32(c, 0x8ac95u); x86_call_known(c, 0x8abe0u, f_0008abe0); X86_RET(c, 0x8ac95u);
    X86_TICK(c, 7);
    // 08ac95  jmp 0x8acba
    X86_AT(c, 0x8ac95u);
    goto L_8acba;
L_8ac97:
    X86_TICK(c, 21);
    // 08ac97  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x8ac97u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 08ac9c  and eax, 0xffff
    X86_AT(c, 0x8ac9cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 08aca1  mov dword ptr [0xdb0], eax
    X86_AT(c, 0x8aca1u);
    wr32((c.sbase[3] + (uint32_t)(0xDB0u)), c.r[0]);
    // 08aca6  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x8aca6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 08acab  shr eax, 0x10
    X86_AT(c, 0x8acabu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 08acae  and eax, 0xffff
    X86_AT(c, 0x8acaeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 08acb3  mov dword ptr [0xdac], eax
    X86_AT(c, 0x8acb3u);
    wr32((c.sbase[3] + (uint32_t)(0xDACu)), c.r[0]);
    // 08acb8  sub eax, eax
    X86_AT(c, 0x8acb8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8acba:
    X86_TICK(c, 10);
    // 08acba  ret 
    X86_AT(c, 0x8acbau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8abf4u, "ran off the end of a function");
}
void f_0008acbc(X86Cpu& c) {
    X86_TICK(c, 24);
    // 08acbc  push ebp
    X86_AT(c, 0x8acbcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08acbd  mov ebp, esp
    X86_AT(c, 0x8acbdu);
    c.r[5] = c.r[4];
    // 08acbf  push eax
    X86_AT(c, 0x8acbfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08acc0  push ebx
    X86_AT(c, 0x8acc0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08acc1  push esi
    X86_AT(c, 0x8acc1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08acc2  push edi
    X86_AT(c, 0x8acc2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08acc3  cmp dword ptr [0xda0], 0
    X86_AT(c, 0x8acc3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDA0u))), 0x0u, 0, 4);
    // 08acca  jne 0x8acd3
    X86_AT(c, 0x8accau);
    if (x86_cc(c, 5)) { goto L_8acd3; }
    X86_TICK(c, 9);
    // 08accc  sub eax, eax
    X86_AT(c, 0x8acccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08acce  jmp 0x8adde
    X86_AT(c, 0x8acceu);
    goto L_8adde;
L_8acd3:
    X86_TICK(c, 35);
    // 08acd3  mov word ptr [0xb14], 0x93
    X86_AT(c, 0x8acd3u);
    wr16((c.sbase[3] + (uint32_t)(0xB14u)), 0x93u);
    // 08acdc  mov ax, word ptr [0xda4]
    X86_AT(c, 0x8acdcu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDA4u))));
    // 08ace2  mov word ptr [0xb16], ax
    X86_AT(c, 0x8ace2u);
    wr16((c.sbase[3] + (uint32_t)(0xB16u)), (c.r[0] & 0xFFFFu));
    // 08ace8  mov dword ptr [0xb1e], 0x54c0
    X86_AT(c, 0x8ace8u);
    wr32((c.sbase[3] + (uint32_t)(0xB1Eu)), 0x54C0u);
    // 08acf2  mov word ptr [0xdb4], 0x2511
    X86_AT(c, 0x8acf2u);
    wr16((c.sbase[3] + (uint32_t)(0xDB4u)), 0x2511u);
    // 08acfb  mov byte ptr [0xdbd], 0
    X86_AT(c, 0x8acfbu);
    wr8((c.sbase[3] + (uint32_t)(0xDBDu)), 0x0u);
    // 08ad02  mov byte ptr [0xdbc], 0
    X86_AT(c, 0x8ad02u);
    wr8((c.sbase[3] + (uint32_t)(0xDBCu)), 0x0u);
    // 08ad09  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x8ad09u);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 08ad13  mov ax, word ptr [0xda8]
    X86_AT(c, 0x8ad13u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDA8u))));
    // 08ad19  mov word ptr [0xdc8], ax
    X86_AT(c, 0x8ad19u);
    wr16((c.sbase[3] + (uint32_t)(0xDC8u)), (c.r[0] & 0xFFFFu));
    // 08ad1f  push 0xdd0
    X86_AT(c, 0x8ad1fu);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08ad24  push 0xdb4
    X86_AT(c, 0x8ad24u);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08ad29  call 0x936ba
    X86_AT(c, 0x8ad29u);
    push32(c, 0x8ad2eu); x86_call_known(c, 0x936bau, f_000936ba); X86_RET(c, 0x8ad2eu);
    X86_TICK(c, 19);
    // 08ad2e  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x8ad2eu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 08ad34  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x8ad34u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 08ad39  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8ad39u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08ad3c  add esp, 8
    X86_AT(c, 0x8ad3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08ad3f  and bl, bl
    X86_AT(c, 0x8ad3fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08ad41  je 0x8ad52
    X86_AT(c, 0x8ad41u);
    if (x86_cc(c, 4)) { goto L_8ad52; }
    X86_TICK(c, 11);
    // 08ad43  push eax
    X86_AT(c, 0x8ad43u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ad44  push ebx
    X86_AT(c, 0x8ad44u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08ad45  call 0x8aa64
    X86_AT(c, 0x8ad45u);
    push32(c, 0x8ad4au); x86_call_known(c, 0x8aa64u, f_0008aa64); X86_RET(c, 0x8ad4au);
    X86_TICK(c, 9);
    // 08ad4a  add esp, 8
    X86_AT(c, 0x8ad4au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08ad4d  jmp 0x8adde
    X86_AT(c, 0x8ad4du);
    goto L_8adde;
L_8ad52:
    X86_TICK(c, 54);
    // 08ad52  mov eax, 0xb10
    X86_AT(c, 0x8ad52u);
    c.r[0] = 0xB10u;
    // 08ad57  movzx edx, byte ptr [eax + 0x14]
    X86_AT(c, 0x8ad57u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)));
    // 08ad5b  mov dword ptr [eax + 0x284], edx
    X86_AT(c, 0x8ad5bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x284u)), c.r[2]);
    // 08ad61  movzx edx, byte ptr [eax + 0x15]
    X86_AT(c, 0x8ad61u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x15u)));
    // 08ad65  mov dword ptr [eax + 0x288], edx
    X86_AT(c, 0x8ad65u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x288u)), c.r[2]);
    // 08ad6b  movzx edx, byte ptr [eax + 0x16]
    X86_AT(c, 0x8ad6bu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x16u)));
    // 08ad6f  mov dword ptr [eax + 0x28c], edx
    X86_AT(c, 0x8ad6fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x28Cu)), c.r[2]);
    // 08ad75  dec dword ptr [eax + 0x28c]
    X86_AT(c, 0x8ad75u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x28Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 08ad7b  mov dl, byte ptr [eax + 0x17]
    X86_AT(c, 0x8ad7bu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x17u))));
    // 08ad7e  mov byte ptr [eax + 0x279], dl
    X86_AT(c, 0x8ad7eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x279u)), g8(c, 2));
    // 08ad84  mov dl, byte ptr [eax + 0x18]
    X86_AT(c, 0x8ad84u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x18u))));
    // 08ad87  mov byte ptr [eax + 0x27a], dl
    X86_AT(c, 0x8ad87u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x27Au)), g8(c, 2));
    // 08ad8d  mov dl, byte ptr [eax + 0x19]
    X86_AT(c, 0x8ad8du);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x19u))));
    // 08ad90  mov byte ptr [eax + 0x27b], dl
    X86_AT(c, 0x8ad90u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x27Bu)), g8(c, 2));
    // 08ad96  sub edi, edi
    X86_AT(c, 0x8ad96u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 08ad98  mov esi, 6
    X86_AT(c, 0x8ad98u);
    c.r[6] = 0x6u;
L_8ad9d:
    X86_TICK(c, 7);
    // 08ad9d  cmp edi, 0x63
    X86_AT(c, 0x8ad9du);
    (void)x86_sub(c, c.r[7], 0x63u, 0, 4);
    // 08ada0  jge 0x8add7
    X86_AT(c, 0x8ada0u);
    if (x86_cc(c, 13)) { goto L_8add7; }
    X86_TICK(c, 43);
    // 08ada2  mov eax, 0xb10
    X86_AT(c, 0x8ada2u);
    c.r[0] = 0xB10u;
    // 08ada7  lea edx, [edi + edi*2]
    X86_AT(c, 0x8ada7u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08adaa  mov ecx, esi
    X86_AT(c, 0x8adaau);
    c.r[1] = c.r[6];
    // 08adac  inc esi
    X86_AT(c, 0x8adacu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08adad  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0x8adadu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 08adb1  mov byte ptr [eax + edx*1 + 0x150], cl
    X86_AT(c, 0x8adb1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u)), g8(c, 1));
    // 08adb8  mov ecx, esi
    X86_AT(c, 0x8adb8u);
    c.r[1] = c.r[6];
    // 08adba  inc esi
    X86_AT(c, 0x8adbau);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08adbb  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0x8adbbu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 08adbf  mov byte ptr [eax + edx*1 + 0x151], cl
    X86_AT(c, 0x8adbfu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x151u)), g8(c, 1));
    // 08adc6  mov ecx, esi
    X86_AT(c, 0x8adc6u);
    c.r[1] = c.r[6];
    // 08adc8  inc esi
    X86_AT(c, 0x8adc8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08adc9  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0x8adc9u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 08adcd  mov byte ptr [eax + edx*1 + 0x152], cl
    X86_AT(c, 0x8adcdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x152u)), g8(c, 1));
    // 08add4  inc edi
    X86_AT(c, 0x8add4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08add5  jmp 0x8ad9d
    X86_AT(c, 0x8add5u);
    X86_POLL(c, 0x8ad9du); goto L_8ad9d;
L_8add7:
    X86_TICK(c, 4);
    // 08add7  sub eax, eax
    X86_AT(c, 0x8add7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08add9  mov dword ptr [0xda0], eax
    X86_AT(c, 0x8add9u);
    wr32((c.sbase[3] + (uint32_t)(0xDA0u)), c.r[0]);
L_8adde:
    X86_TICK(c, 28);
    // 08adde  pop edi
    X86_AT(c, 0x8addeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08addf  pop esi
    X86_AT(c, 0x8addfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08ade0  pop ebx
    X86_AT(c, 0x8ade0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08ade1  leave 
    X86_AT(c, 0x8ade1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ade2  ret 
    X86_AT(c, 0x8ade2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8acbcu, "ran off the end of a function");
}
void f_0008adde(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08adde  pop edi
    X86_AT(c, 0x8addeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08addf  pop esi
    X86_AT(c, 0x8addfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08ade0  pop ebx
    X86_AT(c, 0x8ade0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08ade1  leave 
    X86_AT(c, 0x8ade1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ade2  ret 
    X86_AT(c, 0x8ade2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8addeu, "ran off the end of a function");
}
void f_0008ade4(X86Cpu& c) {
    X86_TICK(c, 37);
    // 08ade4  push ebp
    X86_AT(c, 0x8ade4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ade5  mov ebp, esp
    X86_AT(c, 0x8ade5u);
    c.r[5] = c.r[4];
    // 08ade7  push eax
    X86_AT(c, 0x8ade7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ade8  push edi
    X86_AT(c, 0x8ade8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ade9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8ade9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08adec  mov al, byte ptr [edi]
    X86_AT(c, 0x8adecu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08adee  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8adeeu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08adf1  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0x8adf1u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08adf4  mov byte ptr [ebp - 2], dl
    X86_AT(c, 0x8adf4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 2));
    // 08adf7  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0x8adf7u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 08adfa  dec ecx
    X86_AT(c, 0x8adfau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 08adfb  and cl, cl
    X86_AT(c, 0x8adfbu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 08adfd  jge 0x8ae0d
    X86_AT(c, 0x8adfdu);
    if (x86_cc(c, 13)) { goto L_8ae0d; }
    X86_TICK(c, 20);
    // 08adff  mov cl, 0x4a
    X86_AT(c, 0x8adffu);
    s8(c, 1, 0x4Au);
    // 08ae01  dec byte ptr [ebp - 2]
    X86_AT(c, 0x8ae01u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 08ae04  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x8ae04u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 08ae08  jge 0x8ae0d
    X86_AT(c, 0x8ae08u);
    if (x86_cc(c, 13)) { goto L_8ae0d; }
    X86_TICK(c, 6);
    // 08ae0a  dec byte ptr [ebp - 1]
    X86_AT(c, 0x8ae0au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
L_8ae0d:
    X86_TICK(c, 34);
    // 08ae0d  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0x8ae0du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 08ae10  mov byte ptr [edi], al
    X86_AT(c, 0x8ae10u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 08ae12  mov al, byte ptr [ebp - 2]
    X86_AT(c, 0x8ae12u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 08ae15  mov byte ptr [edi + 1], al
    X86_AT(c, 0x8ae15u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 08ae18  mov byte ptr [edi + 2], cl
    X86_AT(c, 0x8ae18u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 08ae1b  pop edi
    X86_AT(c, 0x8ae1bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08ae1c  leave 
    X86_AT(c, 0x8ae1cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ae1d  ret 
    X86_AT(c, 0x8ae1du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ade4u, "ran off the end of a function");
}
void f_0008afc4(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08afc4  push ebp
    X86_AT(c, 0x8afc4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08afc5  mov ebp, esp
    X86_AT(c, 0x8afc5u);
    c.r[5] = c.r[4];
    // 08afc7  sub esp, 8
    X86_AT(c, 0x8afc7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 08afca  push ebx
    X86_AT(c, 0x8afcau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08afcb  push esi
    X86_AT(c, 0x8afcbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08afcc  push edi
    X86_AT(c, 0x8afccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08afcd  call 0x8b380
    X86_AT(c, 0x8afcdu);
    push32(c, 0x8afd2u); x86_call_known(c, 0x8b380u, f_0008b380); X86_RET(c, 0x8afd2u);
    X86_TICK(c, 12);
    // 08afd2  cmp dword ptr [0xda0], 0
    X86_AT(c, 0x8afd2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDA0u))), 0x0u, 0, 4);
    // 08afd9  jne 0x8b01d
    X86_AT(c, 0x8afd9u);
    if (x86_cc(c, 5)) { goto L_8b01d; }
    X86_TICK(c, 18);
    // 08afdb  dec dword ptr [ebp + 0xc]
    X86_AT(c, 0x8afdbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 08afde  cmp dword ptr [ebp + 0xc], 0xffffffff
    X86_AT(c, 0x8afdeu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0xFFFFFFFFu, 0, 4);
    // 08afe2  je 0x8b18b
    X86_AT(c, 0x8afe2u);
    if (x86_cc(c, 4)) { goto L_8b18b; }
    X86_TICK(c, 15);
    // 08afe8  mov eax, dword ptr [0xd9c]
    X86_AT(c, 0x8afe8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD9Cu)));
    // 08afed  cmp eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8afedu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 08aff0  jge 0x8aff5
    X86_AT(c, 0x8aff0u);
    if (x86_cc(c, 13)) { goto L_8aff5; }
    X86_TICK(c, 2);
    // 08aff2  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0x8aff2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
L_8aff5:
    X86_TICK(c, 4);
    // 08aff5  mov edi, 0xffffffff
    X86_AT(c, 0x8aff5u);
    c.r[7] = 0xFFFFFFFFu;
    // 08affa  mov esi, edi
    X86_AT(c, 0x8affau);
    c.r[6] = c.r[7];
L_8affc:
    X86_TICK(c, 9);
    // 08affc  inc esi
    X86_AT(c, 0x8affcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08affd  cmp esi, 0x63
    X86_AT(c, 0x8affdu);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 08b000  jge 0x8b014
    X86_AT(c, 0x8b000u);
    if (x86_cc(c, 13)) { goto L_8b014; }
    X86_TICK(c, 13);
    // 08b002  movzx eax, byte ptr [esi + esi*2 + 0xc60]
    X86_AT(c, 0x8b002u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[6] * 2 + 0xC60u)));
    // 08b00a  test al, 0x80
    X86_AT(c, 0x8b00au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 08b00c  jne 0x8b00f
    X86_AT(c, 0x8b00cu);
    if (x86_cc(c, 5)) { goto L_8b00f; }
    X86_TICK(c, 2);
    // 08b00e  inc edi
    X86_AT(c, 0x8b00eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_8b00f:
    X86_TICK(c, 11);
    // 08b00f  cmp edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8b00fu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 08b012  jne 0x8affc
    X86_AT(c, 0x8b012u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8affcu); goto L_8affc; }
L_8b014:
    X86_TICK(c, 7);
    // 08b014  cmp esi, 0x63
    X86_AT(c, 0x8b014u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 08b017  jl 0x8b027
    X86_AT(c, 0x8b017u);
    if (x86_cc(c, 12)) { goto L_8b027; }
    X86_TICK(c, 7);
    // 08b019  and edi, edi
    X86_AT(c, 0x8b019u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08b01b  jge 0x8b027
    X86_AT(c, 0x8b01bu);
    if (x86_cc(c, 13)) { goto L_8b027; }
L_8b01d:
    X86_TICK(c, 9);
    // 08b01d  mov eax, 0xffffffff
    X86_AT(c, 0x8b01du);
    c.r[0] = 0xFFFFFFFFu;
    // 08b022  jmp 0x8b18d
    X86_AT(c, 0x8b022u);
    goto L_8b18d;
L_8b027:
    X86_TICK(c, 11);
    // 08b027  cmp edi, dword ptr [0xd9c]
    X86_AT(c, 0x8b027u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xD9Cu))), 0, 4);
    // 08b02d  jne 0x8b046
    X86_AT(c, 0x8b02du);
    if (x86_cc(c, 5)) { goto L_8b046; }
    X86_TICK(c, 23);
    // 08b02f  mov al, byte ptr [0xd89]
    X86_AT(c, 0x8b02fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD89u))));
    // 08b034  mov byte ptr [ebp - 3], al
    X86_AT(c, 0x8b034u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 0));
    // 08b037  mov al, byte ptr [0xd8a]
    X86_AT(c, 0x8b037u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD8Au))));
    // 08b03c  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x8b03cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 08b03f  mov al, byte ptr [0xd8b]
    X86_AT(c, 0x8b03fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD8Bu))));
    // 08b044  jmp 0x8b069
    X86_AT(c, 0x8b044u);
    goto L_8b069;
L_8b046:
    X86_TICK(c, 20);
    // 08b046  mov eax, 0xb10
    X86_AT(c, 0x8b046u);
    c.r[0] = 0xB10u;
    // 08b04b  lea edx, [edi + edi*2]
    X86_AT(c, 0x8b04bu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08b04e  mov cl, byte ptr [eax + edx*1 + 0x153]
    X86_AT(c, 0x8b04eu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x153u))));
    // 08b055  mov byte ptr [ebp - 3], cl
    X86_AT(c, 0x8b055u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 1));
    // 08b058  mov cl, byte ptr [eax + edx*1 + 0x154]
    X86_AT(c, 0x8b058u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x154u))));
    // 08b05f  mov byte ptr [ebp - 2], cl
    X86_AT(c, 0x8b05fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 1));
    // 08b062  mov al, byte ptr [eax + edx*1 + 0x155]
    X86_AT(c, 0x8b062u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x155u))));
L_8b069:
    X86_TICK(c, 13);
    // 08b069  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8b069u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08b06c  lea eax, [ebp - 3]
    X86_AT(c, 0x8b06cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFDu);
    // 08b06f  push eax
    X86_AT(c, 0x8b06fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b070  call 0x8ade4
    X86_AT(c, 0x8b070u);
    push32(c, 0x8b075u); x86_call_known(c, 0x8ade4u, f_0008ade4); X86_RET(c, 0x8b075u);
    X86_TICK(c, 17);
    // 08b075  movsx eax, word ptr [0xb10]
    X86_AT(c, 0x8b075u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xB10u)));
    // 08b07c  push eax
    X86_AT(c, 0x8b07cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b07d  push eax
    X86_AT(c, 0x8b07du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b07e  call 0x8c084
    X86_AT(c, 0x8b07eu);
    push32(c, 0x8b083u); x86_call_known(c, 0x8c084u, f_0008c084); X86_RET(c, 0x8b083u);
    X86_TICK(c, 2);
    // 08b083  add esp, 0xc
    X86_AT(c, 0x8b083u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_8b086:
    X86_TICK(c, 64);
    // 08b086  mov eax, 0xb10
    X86_AT(c, 0x8b086u);
    c.r[0] = 0xB10u;
    // 08b08b  lea edx, [edi + edi*2]
    X86_AT(c, 0x8b08bu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08b08e  mov cl, byte ptr [eax + edx*1 + 0x150]
    X86_AT(c, 0x8b08eu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u))));
    // 08b095  mov byte ptr [eax + 0x144], cl
    X86_AT(c, 0x8b095u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x144u)), g8(c, 1));
    // 08b09b  mov cl, byte ptr [eax + edx*1 + 0x151]
    X86_AT(c, 0x8b09bu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x151u))));
    // 08b0a2  mov byte ptr [eax + 0x145], cl
    X86_AT(c, 0x8b0a2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x145u)), g8(c, 1));
    // 08b0a8  mov dl, byte ptr [eax + edx*1 + 0x152]
    X86_AT(c, 0x8b0a8u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x152u))));
    // 08b0af  mov byte ptr [eax + 0x146], dl
    X86_AT(c, 0x8b0afu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x146u)), g8(c, 2));
    // 08b0b5  mov dl, byte ptr [ebp - 3]
    X86_AT(c, 0x8b0b5u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu))));
    // 08b0b8  mov byte ptr [eax + 0x147], dl
    X86_AT(c, 0x8b0b8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x147u)), g8(c, 2));
    // 08b0be  mov dl, byte ptr [ebp - 2]
    X86_AT(c, 0x8b0beu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 08b0c1  mov byte ptr [eax + 0x148], dl
    X86_AT(c, 0x8b0c1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x148u)), g8(c, 2));
    // 08b0c7  mov dl, byte ptr [ebp - 1]
    X86_AT(c, 0x8b0c7u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 08b0ca  mov byte ptr [eax + 0x149], dl
    X86_AT(c, 0x8b0cau);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x149u)), g8(c, 2));
    // 08b0d0  mov word ptr [eax + 4], 0x93
    X86_AT(c, 0x8b0d0u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), 0x93u);
    // 08b0d6  mov dx, word ptr [eax + 0x29c]
    X86_AT(c, 0x8b0d6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x29Cu))));
    // 08b0dd  mov word ptr [eax + 6], dx
    X86_AT(c, 0x8b0ddu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 08b0e1  mov dword ptr [eax + 0xe], 0x50c0
    X86_AT(c, 0x8b0e1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xEu)), 0x50C0u);
    // 08b0e8  mov word ptr [eax + 0x2a4], 0x2511
    X86_AT(c, 0x8b0e8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2A4u)), 0x2511u);
    // 08b0f1  cmp dword ptr [ebp + 0xc], 0
    X86_AT(c, 0x8b0f1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 4);
    // 08b0f5  jge 0x8b100
    X86_AT(c, 0x8b0f5u);
    if (x86_cc(c, 13)) { goto L_8b100; }
    X86_TICK(c, 9);
    // 08b0f7  mov byte ptr [eax + 0x2ad], 0xff
    X86_AT(c, 0x8b0f7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x2ADu)), 0xFFu);
    // 08b0fe  jmp 0x8b10f
    X86_AT(c, 0x8b0feu);
    goto L_8b10f;
L_8b100:
    X86_TICK(c, 8);
    // 08b100  mov byte ptr [0xdbd], 0xfe
    X86_AT(c, 0x8b100u);
    wr8((c.sbase[3] + (uint32_t)(0xDBDu)), 0xFEu);
    // 08b107  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8b107u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08b10a  mov byte ptr [0xdb9], al
    X86_AT(c, 0x8b10au);
    wr8((c.sbase[3] + (uint32_t)(0xDB9u)), g8(c, 0));
L_8b10f:
    X86_TICK(c, 21);
    // 08b10f  mov byte ptr [0xdbc], 1
    X86_AT(c, 0x8b10fu);
    wr8((c.sbase[3] + (uint32_t)(0xDBCu)), 0x1u);
    // 08b116  mov ax, word ptr [0xdb0]
    X86_AT(c, 0x8b116u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDB0u))));
    // 08b11c  mov word ptr [0xdc8], ax
    X86_AT(c, 0x8b11cu);
    wr16((c.sbase[3] + (uint32_t)(0xDC8u)), (c.r[0] & 0xFFFFu));
    // 08b122  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x8b122u);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 08b12c  push 0xdd0
    X86_AT(c, 0x8b12cu);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08b131  push 0xdb4
    X86_AT(c, 0x8b131u);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08b136  call 0x936ba
    X86_AT(c, 0x8b136u);
    push32(c, 0x8b13bu); x86_call_known(c, 0x936bau, f_000936ba); X86_RET(c, 0x8b13bu);
    X86_TICK(c, 19);
    // 08b13b  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x8b13bu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 08b141  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x8b141u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 08b146  mov byte ptr [ebp - 4], al
    X86_AT(c, 0x8b146u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), g8(c, 0));
    // 08b149  add esp, 8
    X86_AT(c, 0x8b149u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b14c  and bl, bl
    X86_AT(c, 0x8b14cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08b14e  je 0x8b179
    X86_AT(c, 0x8b14eu);
    if (x86_cc(c, 4)) { goto L_8b179; }
    X86_TICK(c, 11);
    // 08b150  push eax
    X86_AT(c, 0x8b150u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b151  push ebx
    X86_AT(c, 0x8b151u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b152  call 0x8aa64
    X86_AT(c, 0x8b152u);
    push32(c, 0x8b157u); x86_call_known(c, 0x8aa64u, f_0008aa64); X86_RET(c, 0x8b157u);
    X86_TICK(c, 16);
    // 08b157  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x8b157u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 08b15a  add esp, 8
    X86_AT(c, 0x8b15au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b15d  cmp dword ptr [ebp - 8], 0x102
    X86_AT(c, 0x8b15du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x102u, 0, 4);
    // 08b164  jne 0x8b179
    X86_AT(c, 0x8b164u);
    if (x86_cc(c, 5)) { goto L_8b179; }
    X86_TICK(c, 7);
    // 08b166  call 0x8b274
    X86_AT(c, 0x8b166u);
    push32(c, 0x8b16bu); x86_call_known(c, 0x8b274u, f_0008b274); X86_RET(c, 0x8b16bu);
L_8b16b:
    X86_TICK(c, 7);
    // 08b16b  call 0x8b3d8
    X86_AT(c, 0x8b16bu);
    push32(c, 0x8b170u); x86_call_known(c, 0x8b3d8u, f_0008b3d8); X86_RET(c, 0x8b170u);
    X86_TICK(c, 7);
    // 08b170  and eax, eax
    X86_AT(c, 0x8b170u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08b172  jne 0x8b16b
    X86_AT(c, 0x8b172u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8b16bu); goto L_8b16b; }
    X86_TICK(c, 7);
    // 08b174  jmp 0x8b086
    X86_AT(c, 0x8b174u);
    X86_POLL(c, 0x8b086u); goto L_8b086;
L_8b179:
    X86_TICK(c, 7);
    // 08b179  and bl, bl
    X86_AT(c, 0x8b179u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08b17b  je 0x8b18b
    X86_AT(c, 0x8b17bu);
    if (x86_cc(c, 4)) { goto L_8b18b; }
    X86_TICK(c, 14);
    // 08b17d  push dword ptr [ebp - 4]
    X86_AT(c, 0x8b17du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 08b180  push ebx
    X86_AT(c, 0x8b180u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b181  call 0x8aa64
    X86_AT(c, 0x8b181u);
    push32(c, 0x8b186u); x86_call_known(c, 0x8aa64u, f_0008aa64); X86_RET(c, 0x8b186u);
    X86_TICK(c, 9);
    // 08b186  add esp, 8
    X86_AT(c, 0x8b186u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b189  jmp 0x8b18d
    X86_AT(c, 0x8b189u);
    goto L_8b18d;
L_8b18b:
    X86_TICK(c, 2);
    // 08b18b  sub eax, eax
    X86_AT(c, 0x8b18bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8b18d:
    X86_TICK(c, 28);
    // 08b18d  pop edi
    X86_AT(c, 0x8b18du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08b18e  pop esi
    X86_AT(c, 0x8b18eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08b18f  pop ebx
    X86_AT(c, 0x8b18fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08b190  leave 
    X86_AT(c, 0x8b190u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b191  ret 
    X86_AT(c, 0x8b191u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8afc4u, "ran off the end of a function");
}
void f_0008b274(X86Cpu& c) {
    X86_TICK(c, 29);
    // 08b274  push ebp
    X86_AT(c, 0x8b274u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b275  mov ebp, esp
    X86_AT(c, 0x8b275u);
    c.r[5] = c.r[4];
    // 08b277  push eax
    X86_AT(c, 0x8b277u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b278  push ebx
    X86_AT(c, 0x8b278u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b279  mov word ptr [0xb14], 0x93
    X86_AT(c, 0x8b279u);
    wr16((c.sbase[3] + (uint32_t)(0xB14u)), 0x93u);
    // 08b282  mov dword ptr [0xb1e], 0x52c0
    X86_AT(c, 0x8b282u);
    wr32((c.sbase[3] + (uint32_t)(0xB1Eu)), 0x52C0u);
    // 08b28c  mov dword ptr [0xdb4], 0x2511
    X86_AT(c, 0x8b28cu);
    wr32((c.sbase[3] + (uint32_t)(0xDB4u)), 0x2511u);
    // 08b296  mov word ptr [0xdbc], 0
    X86_AT(c, 0x8b296u);
    wr16((c.sbase[3] + (uint32_t)(0xDBCu)), 0x0u);
    // 08b29f  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x8b29fu);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 08b2a9  push 0xdd0
    X86_AT(c, 0x8b2a9u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08b2ae  push 0xdb4
    X86_AT(c, 0x8b2aeu);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08b2b3  call 0x936ba
    X86_AT(c, 0x8b2b3u);
    push32(c, 0x8b2b8u); x86_call_known(c, 0x936bau, f_000936ba); X86_RET(c, 0x8b2b8u);
    X86_TICK(c, 19);
    // 08b2b8  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x8b2b8u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 08b2be  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x8b2beu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 08b2c3  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8b2c3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08b2c6  add esp, 8
    X86_AT(c, 0x8b2c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b2c9  and bl, bl
    X86_AT(c, 0x8b2c9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08b2cb  je 0x8b2de
    X86_AT(c, 0x8b2cbu);
    if (x86_cc(c, 4)) { goto L_8b2de; }
    X86_TICK(c, 11);
    // 08b2cd  push eax
    X86_AT(c, 0x8b2cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b2ce  push ebx
    X86_AT(c, 0x8b2ceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b2cf  call 0x8aa64
    X86_AT(c, 0x8b2cfu);
    push32(c, 0x8b2d4u); x86_call_known(c, 0x8aa64u, f_0008aa64); X86_RET(c, 0x8b2d4u);
    X86_TICK(c, 11);
    // 08b2d4  mov eax, 0xffffffff
    X86_AT(c, 0x8b2d4u);
    c.r[0] = 0xFFFFFFFFu;
    // 08b2d9  add esp, 8
    X86_AT(c, 0x8b2d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b2dc  jmp 0x8b2e0
    X86_AT(c, 0x8b2dcu);
    goto L_8b2e0;
L_8b2de:
    X86_TICK(c, 2);
    // 08b2de  sub eax, eax
    X86_AT(c, 0x8b2deu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8b2e0:
    X86_TICK(c, 20);
    // 08b2e0  pop ebx
    X86_AT(c, 0x8b2e0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08b2e1  leave 
    X86_AT(c, 0x8b2e1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b2e2  ret 
    X86_AT(c, 0x8b2e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b274u, "ran off the end of a function");
}
void f_0008b380(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08b380  push edi
    X86_AT(c, 0x8b380u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b381  call 0x8b3d8
    X86_AT(c, 0x8b381u);
    push32(c, 0x8b386u); x86_call_known(c, 0x8b3d8u, f_0008b3d8); X86_RET(c, 0x8b386u);
    X86_TICK(c, 10);
    // 08b386  xchg edi, eax
    X86_AT(c, 0x8b386u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 08b387  and edi, edi
    X86_AT(c, 0x8b387u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08b389  je 0x8b390
    X86_AT(c, 0x8b389u);
    if (x86_cc(c, 4)) { goto L_8b390; }
    X86_TICK(c, 7);
    // 08b38b  cmp edi, 0xffffffff
    X86_AT(c, 0x8b38bu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 08b38e  jne 0x8b399
    X86_AT(c, 0x8b38eu);
    if (x86_cc(c, 5)) { goto L_8b399; }
L_8b390:
    X86_TICK(c, 12);
    // 08b390  cmp dword ptr [0xda0], 0
    X86_AT(c, 0x8b390u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDA0u))), 0x0u, 0, 4);
    // 08b397  je 0x8b3d3
    X86_AT(c, 0x8b397u);
    if (x86_cc(c, 4)) { goto L_8b3d3; }
L_8b399:
    X86_TICK(c, 7);
    // 08b399  call 0x8b274
    X86_AT(c, 0x8b399u);
    push32(c, 0x8b39eu); x86_call_known(c, 0x8b274u, f_0008b274); X86_RET(c, 0x8b39eu);
L_8b39e:
    X86_TICK(c, 7);
    // 08b39e  call 0x8acbc
    X86_AT(c, 0x8b39eu);
    push32(c, 0x8b3a3u); x86_call_known(c, 0x8acbcu, f_0008acbc); X86_RET(c, 0x8b3a3u);
    X86_TICK(c, 10);
    // 08b3a3  xchg edi, eax
    X86_AT(c, 0x8b3a3u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 08b3a4  cmp edi, 0x80
    X86_AT(c, 0x8b3a4u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 08b3aa  je 0x8b3c9
    X86_AT(c, 0x8b3aau);
    if (x86_cc(c, 4)) { goto L_8b3c9; }
    X86_TICK(c, 7);
    // 08b3ac  cmp edi, 0x10
    X86_AT(c, 0x8b3acu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 08b3af  je 0x8b3c9
    X86_AT(c, 0x8b3afu);
    if (x86_cc(c, 4)) { goto L_8b3c9; }
    X86_TICK(c, 7);
    // 08b3b1  cmp edi, 4
    X86_AT(c, 0x8b3b1u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 08b3b4  je 0x8b3c9
    X86_AT(c, 0x8b3b4u);
    if (x86_cc(c, 4)) { goto L_8b3c9; }
    X86_TICK(c, 7);
    // 08b3b6  cmp edi, 0x102
    X86_AT(c, 0x8b3b6u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 08b3bc  je 0x8b3c9
    X86_AT(c, 0x8b3bcu);
    if (x86_cc(c, 4)) { goto L_8b3c9; }
    X86_TICK(c, 7);
    // 08b3be  and edi, edi
    X86_AT(c, 0x8b3beu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08b3c0  je 0x8b3d3
    X86_AT(c, 0x8b3c0u);
    if (x86_cc(c, 4)) { goto L_8b3d3; }
    X86_TICK(c, 9);
    // 08b3c2  mov eax, 1
    X86_AT(c, 0x8b3c2u);
    c.r[0] = 0x1u;
    // 08b3c7  jmp 0x8b3d5
    X86_AT(c, 0x8b3c7u);
    goto L_8b3d5;
L_8b3c9:
    X86_TICK(c, 7);
    // 08b3c9  cmp edi, 0x102
    X86_AT(c, 0x8b3c9u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 08b3cf  jne 0x8b39e
    X86_AT(c, 0x8b3cfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8b39eu); goto L_8b39e; }
    X86_TICK(c, 7);
    // 08b3d1  jmp 0x8b399
    X86_AT(c, 0x8b3d1u);
    X86_POLL(c, 0x8b399u); goto L_8b399;
L_8b3d3:
    X86_TICK(c, 2);
    // 08b3d3  sub eax, eax
    X86_AT(c, 0x8b3d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8b3d5:
    X86_TICK(c, 14);
    // 08b3d5  pop edi
    X86_AT(c, 0x8b3d5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08b3d6  ret 
    X86_AT(c, 0x8b3d6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b380u, "ran off the end of a function");
}
void f_0008b3d8(X86Cpu& c) {
    X86_TICK(c, 43);
    // 08b3d8  push ebp
    X86_AT(c, 0x8b3d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b3d9  mov ebp, esp
    X86_AT(c, 0x8b3d9u);
    c.r[5] = c.r[4];
    // 08b3db  push eax
    X86_AT(c, 0x8b3dbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b3dc  push ebx
    X86_AT(c, 0x8b3dcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b3dd  mov word ptr [0xb14], 0x93
    X86_AT(c, 0x8b3ddu);
    wr16((c.sbase[3] + (uint32_t)(0xB14u)), 0x93u);
    // 08b3e6  mov ax, word ptr [0xdac]
    X86_AT(c, 0x8b3e6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDACu))));
    // 08b3ec  mov word ptr [0xb16], ax
    X86_AT(c, 0x8b3ecu);
    wr16((c.sbase[3] + (uint32_t)(0xB16u)), (c.r[0] & 0xFFFFu));
    // 08b3f2  mov dword ptr [0xb1e], 0x53c0
    X86_AT(c, 0x8b3f2u);
    wr32((c.sbase[3] + (uint32_t)(0xB1Eu)), 0x53C0u);
    // 08b3fc  mov word ptr [0xdb4], 0x2511
    X86_AT(c, 0x8b3fcu);
    wr16((c.sbase[3] + (uint32_t)(0xDB4u)), 0x2511u);
    // 08b405  mov byte ptr [0xdbd], 0
    X86_AT(c, 0x8b405u);
    wr8((c.sbase[3] + (uint32_t)(0xDBDu)), 0x0u);
    // 08b40c  mov byte ptr [0xdbc], 0
    X86_AT(c, 0x8b40cu);
    wr8((c.sbase[3] + (uint32_t)(0xDBCu)), 0x0u);
    // 08b413  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x8b413u);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 08b41d  mov ax, word ptr [0xdb0]
    X86_AT(c, 0x8b41du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDB0u))));
    // 08b423  mov word ptr [0xdc8], ax
    X86_AT(c, 0x8b423u);
    wr16((c.sbase[3] + (uint32_t)(0xDC8u)), (c.r[0] & 0xFFFFu));
    // 08b429  push 0xdd0
    X86_AT(c, 0x8b429u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08b42e  push 0xdb4
    X86_AT(c, 0x8b42eu);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08b433  call 0x936ba
    X86_AT(c, 0x8b433u);
    push32(c, 0x8b438u); x86_call_known(c, 0x936bau, f_000936ba); X86_RET(c, 0x8b438u);
    X86_TICK(c, 19);
    // 08b438  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x8b438u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 08b43e  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x8b43eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 08b443  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8b443u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08b446  add esp, 8
    X86_AT(c, 0x8b446u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b449  and bl, bl
    X86_AT(c, 0x8b449u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08b44b  je 0x8b459
    X86_AT(c, 0x8b44bu);
    if (x86_cc(c, 4)) { goto L_8b459; }
    X86_TICK(c, 11);
    // 08b44d  push eax
    X86_AT(c, 0x8b44du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b44e  push ebx
    X86_AT(c, 0x8b44eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b44f  call 0x8aa64
    X86_AT(c, 0x8b44fu);
    push32(c, 0x8b454u); x86_call_known(c, 0x8aa64u, f_0008aa64); X86_RET(c, 0x8b454u);
    X86_TICK(c, 9);
    // 08b454  add esp, 8
    X86_AT(c, 0x8b454u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b457  jmp 0x8b46b
    X86_AT(c, 0x8b457u);
    goto L_8b46b;
L_8b459:
    X86_TICK(c, 12);
    // 08b459  cmp byte ptr [0xdd0], 1
    X86_AT(c, 0x8b459u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDD0u))), 0x1u, 0, 1);
    // 08b460  jne 0x8b469
    X86_AT(c, 0x8b460u);
    if (x86_cc(c, 5)) { goto L_8b469; }
    X86_TICK(c, 9);
    // 08b462  mov eax, 0xffffffff
    X86_AT(c, 0x8b462u);
    c.r[0] = 0xFFFFFFFFu;
    // 08b467  jmp 0x8b46b
    X86_AT(c, 0x8b467u);
    goto L_8b46b;
L_8b469:
    X86_TICK(c, 2);
    // 08b469  sub eax, eax
    X86_AT(c, 0x8b469u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8b46b:
    X86_TICK(c, 20);
    // 08b46b  pop ebx
    X86_AT(c, 0x8b46bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08b46c  leave 
    X86_AT(c, 0x8b46cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b46d  ret 
    X86_AT(c, 0x8b46du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b3d8u, "ran off the end of a function");
}
void f_0008b4e4(X86Cpu& c) {
    X86_TICK(c, 73);
    // 08b4e4  push ebp
    X86_AT(c, 0x8b4e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b4e5  mov ebp, esp
    X86_AT(c, 0x8b4e5u);
    c.r[5] = c.r[4];
    // 08b4e7  sub esp, 8
    X86_AT(c, 0x8b4e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 08b4ea  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8b4eau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08b4ed  mov dword ptr [0x1a50], eax
    X86_AT(c, 0x8b4edu);
    wr32((c.sbase[3] + (uint32_t)(0x1A50u)), c.r[0]);
    // 08b4f2  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8b4f2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08b4f5  cdq 
    X86_AT(c, 0x8b4f5u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08b4f6  mov ecx, 0xc
    X86_AT(c, 0x8b4f6u);
    c.r[1] = 0xCu;
    // 08b4fb  idiv ecx
    X86_AT(c, 0x8b4fbu);
    x86_idiv(c, c.r[1], 4, 0x8b4fbu);
    // 08b4fd  lea eax, [eax + eax*2]
    X86_AT(c, 0x8b4fdu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 08b500  add eax, eax
    X86_AT(c, 0x8b500u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 08b502  mov dword ptr [0x1a00], eax
    X86_AT(c, 0x8b502u);
    wr32((c.sbase[3] + (uint32_t)(0x1A00u)), c.r[0]);
    // 08b507  cmp eax, 0x40
    X86_AT(c, 0x8b507u);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 08b50a  jge 0x8b513
    X86_AT(c, 0x8b50au);
    if (x86_cc(c, 13)) { goto L_8b513; }
    X86_TICK(c, 9);
    // 08b50c  mov eax, 2
    X86_AT(c, 0x8b50cu);
    c.r[0] = 0x2u;
    // 08b511  jmp 0x8b564
    X86_AT(c, 0x8b511u);
    goto L_8b564;
L_8b513:
    X86_TICK(c, 29);
    // 08b513  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8b513u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08b516  mov dword ptr [0x1a08], eax
    X86_AT(c, 0x8b516u);
    wr32((c.sbase[3] + (uint32_t)(0x1A08u)), c.r[0]);
    // 08b51b  mov edx, dword ptr [0x1a00]
    X86_AT(c, 0x8b51bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x1A00u)));
    // 08b521  lea ecx, [eax + edx*1 - 6]
    X86_AT(c, 0x8b521u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 08b525  mov dword ptr [0x1a10], ecx
    X86_AT(c, 0x8b525u);
    wr32((c.sbase[3] + (uint32_t)(0x1A10u)), c.r[1]);
    // 08b52b  add eax, edx
    X86_AT(c, 0x8b52bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 08b52d  mov dword ptr [0x1a0c], eax
    X86_AT(c, 0x8b52du);
    wr32((c.sbase[3] + (uint32_t)(0x1A0Cu)), c.r[0]);
    // 08b532  lea eax, [eax + edx*1 - 6]
    X86_AT(c, 0x8b532u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 08b536  mov dword ptr [0x1a14], eax
    X86_AT(c, 0x8b536u);
    wr32((c.sbase[3] + (uint32_t)(0x1A14u)), c.r[0]);
    // 08b53b  call 0x8f8f9
    X86_AT(c, 0x8b53bu);
    push32(c, 0x8b540u); x86_call_known(c, 0x8f8f9u, f_0008f8f9); X86_RET(c, 0x8b540u);
    X86_TICK(c, 7);
    // 08b540  call 0x8f815
    X86_AT(c, 0x8b540u);
    push32(c, 0x8b545u); x86_call_known(c, 0x8f815u, f_0008f815); X86_RET(c, 0x8b545u);
    X86_TICK(c, 9);
    // 08b545  push 0x33
    X86_AT(c, 0x8b545u);
    { uint32_t v = 0x33u; push32(c, v); }
    // 08b547  call 0x8f849
    X86_AT(c, 0x8b547u);
    push32(c, 0x8b54cu); x86_call_known(c, 0x8f849u, f_0008f849); X86_RET(c, 0x8b54cu);
    X86_TICK(c, 13);
    // 08b54c  lea eax, [ebp - 8]
    X86_AT(c, 0x8b54cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 08b54f  push eax
    X86_AT(c, 0x8b54fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b550  push 0xffc
    X86_AT(c, 0x8b550u);
    { uint32_t v = 0xFFCu; push32(c, v); }
    // 08b555  call 0x91a28
    X86_AT(c, 0x8b555u);
    push32(c, 0x8b55au); x86_call_known(c, 0x91a28u, f_00091a28); X86_RET(c, 0x8b55au);
    X86_TICK(c, 6);
    // 08b55a  sub eax, eax
    X86_AT(c, 0x8b55au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08b55c  mov dword ptr [0x1a1c], eax
    X86_AT(c, 0x8b55cu);
    wr32((c.sbase[3] + (uint32_t)(0x1A1Cu)), c.r[0]);
    // 08b561  add esp, 0xc
    X86_AT(c, 0x8b561u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_8b564:
    X86_TICK(c, 16);
    // 08b564  leave 
    X86_AT(c, 0x8b564u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b565  ret 
    X86_AT(c, 0x8b565u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b4e4u, "ran off the end of a function");
}
void f_0008b570(X86Cpu& c) {
    X86_TICK(c, 20);
    // 08b570  push ebp
    X86_AT(c, 0x8b570u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b571  mov ebp, esp
    X86_AT(c, 0x8b571u);
    c.r[5] = c.r[4];
    // 08b573  sub esp, 0x108
    X86_AT(c, 0x8b573u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x108u, 0, 4); }
    // 08b579  push ebx
    X86_AT(c, 0x8b579u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b57a  push esi
    X86_AT(c, 0x8b57au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b57b  push edi
    X86_AT(c, 0x8b57bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b57c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8b57cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08b57f  sub ebx, ebx
    X86_AT(c, 0x8b57fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 08b581  mov esi, ebx
    X86_AT(c, 0x8b581u);
    c.r[6] = c.r[3];
L_8b583:
    X86_TICK(c, 11);
    // 08b583  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0x8b583u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 08b586  and al, al
    X86_AT(c, 0x8b586u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08b588  je 0x8b5a0
    X86_AT(c, 0x8b588u);
    if (x86_cc(c, 4)) { goto L_8b5a0; }
    X86_TICK(c, 14);
    // 08b58a  movzx eax, al
    X86_AT(c, 0x8b58au);
    c.r[0] = g8(c, 0);
    // 08b58d  cmp eax, dword ptr [esi*4 + 0x34410]
    X86_AT(c, 0x8b58du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x34410u))), 0, 4);
    // 08b594  je 0x8b59d
    X86_AT(c, 0x8b594u);
    if (x86_cc(c, 4)) { goto L_8b59d; }
    X86_TICK(c, 9);
    // 08b596  mov ebx, 1
    X86_AT(c, 0x8b596u);
    c.r[3] = 0x1u;
    // 08b59b  jmp 0x8b5a0
    X86_AT(c, 0x8b59bu);
    goto L_8b5a0;
L_8b59d:
    X86_TICK(c, 9);
    // 08b59d  inc esi
    X86_AT(c, 0x8b59du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b59e  jmp 0x8b583
    X86_AT(c, 0x8b59eu);
    X86_POLL(c, 0x8b583u); goto L_8b583;
L_8b5a0:
    X86_TICK(c, 2);
    // 08b5a0  sub esi, esi
    X86_AT(c, 0x8b5a0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b5a2:
    X86_TICK(c, 11);
    // 08b5a2  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0x8b5a2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 08b5a5  and al, al
    X86_AT(c, 0x8b5a5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08b5a7  je 0x8b5b6
    X86_AT(c, 0x8b5a7u);
    if (x86_cc(c, 4)) { goto L_8b5b6; }
    X86_TICK(c, 14);
    // 08b5a9  movzx eax, al
    X86_AT(c, 0x8b5a9u);
    c.r[0] = g8(c, 0);
    // 08b5ac  mov dword ptr [esi*4 + 0x34410], eax
    X86_AT(c, 0x8b5acu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x34410u)), c.r[0]);
    // 08b5b3  inc esi
    X86_AT(c, 0x8b5b3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b5b4  jmp 0x8b5a2
    X86_AT(c, 0x8b5b4u);
    X86_POLL(c, 0x8b5a2u); goto L_8b5a2;
L_8b5b6:
    X86_TICK(c, 9);
    // 08b5b6  mov dword ptr [esi*4 + 0x34410], 0
    X86_AT(c, 0x8b5b6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x34410u)), 0x0u);
    // 08b5c1  call 0x8ba7c
    X86_AT(c, 0x8b5c1u);
    push32(c, 0x8b5c6u); x86_call_known(c, 0x8ba7cu, f_0008ba7c); X86_RET(c, 0x8b5c6u);
    X86_TICK(c, 13);
    // 08b5c6  mov dword ptr [0x1a60], 0xffffffff
    X86_AT(c, 0x8b5c6u);
    wr32((c.sbase[3] + (uint32_t)(0x1A60u)), 0xFFFFFFFFu);
    // 08b5d0  push 0x100e
    X86_AT(c, 0x8b5d0u);
    { uint32_t v = 0x100Eu; push32(c, v); }
    // 08b5d5  push edi
    X86_AT(c, 0x8b5d5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b5d6  call 0x9247c
    X86_AT(c, 0x8b5d6u);
    push32(c, 0x8b5dbu); x86_call_known(c, 0x9247cu, f_0009247c); X86_RET(c, 0x8b5dbu);
    X86_TICK(c, 11);
    // 08b5db  add esp, 8
    X86_AT(c, 0x8b5dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b5de  mov dword ptr [0x1a64], eax
    X86_AT(c, 0x8b5deu);
    wr32((c.sbase[3] + (uint32_t)(0x1A64u)), c.r[0]);
    // 08b5e3  and eax, eax
    X86_AT(c, 0x8b5e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08b5e5  jne 0x8b5f1
    X86_AT(c, 0x8b5e5u);
    if (x86_cc(c, 5)) { goto L_8b5f1; }
    X86_TICK(c, 9);
    // 08b5e7  mov eax, 0xffffffff
    X86_AT(c, 0x8b5e7u);
    c.r[0] = 0xFFFFFFFFu;
    // 08b5ec  jmp 0x8b905
    X86_AT(c, 0x8b5ecu);
    goto L_8b905;
L_8b5f1:
    X86_TICK(c, 16);
    // 08b5f1  push 0
    X86_AT(c, 0x8b5f1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08b5f3  push 0x354
    X86_AT(c, 0x8b5f3u);
    { uint32_t v = 0x354u; push32(c, v); }
    // 08b5f8  push dword ptr [0x1a64]
    X86_AT(c, 0x8b5f8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08b5fe  call 0x92bf0
    X86_AT(c, 0x8b5feu);
    push32(c, 0x8b603u); x86_call_known(c, 0x92bf0u, f_00092bf0); X86_RET(c, 0x8b603u);
    X86_TICK(c, 22);
    // 08b603  mov dword ptr [0x1a1c], 0
    X86_AT(c, 0x8b603u);
    wr32((c.sbase[3] + (uint32_t)(0x1A1Cu)), 0x0u);
    // 08b60d  push dword ptr [0x1a64]
    X86_AT(c, 0x8b60du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08b613  push 0x20
    X86_AT(c, 0x8b613u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b615  push 1
    X86_AT(c, 0x8b615u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b617  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b617u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b61d  push eax
    X86_AT(c, 0x8b61du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b61e  call 0x921a0
    X86_AT(c, 0x8b61eu);
    push32(c, 0x8b623u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8b623u);
    X86_TICK(c, 9);
    // 08b623  add esp, 0x1c
    X86_AT(c, 0x8b623u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08b626  cmp eax, 0x20
    X86_AT(c, 0x8b626u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b629  jl 0x8b891
    X86_AT(c, 0x8b629u);
    if (x86_cc(c, 12)) { goto L_8b891; }
    X86_TICK(c, 2);
    // 08b62f  sub esi, esi
    X86_AT(c, 0x8b62fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b631:
    X86_TICK(c, 7);
    // 08b631  cmp esi, 0x20
    X86_AT(c, 0x8b631u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b634  jge 0x8b645
    X86_AT(c, 0x8b634u);
    if (x86_cc(c, 13)) { goto L_8b645; }
    X86_TICK(c, 11);
    // 08b636  push 1
    X86_AT(c, 0x8b636u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b638  push esi
    X86_AT(c, 0x8b638u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b639  call 0x8fa50
    X86_AT(c, 0x8b639u);
    push32(c, 0x8b63eu); x86_call_known(c, 0x8fa50u, f_0008fa50); X86_RET(c, 0x8b63eu);
    X86_TICK(c, 14);
    // 08b63e  xchg ebx, eax
    X86_AT(c, 0x8b63eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b63f  inc esi
    X86_AT(c, 0x8b63fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b640  add esp, 8
    X86_AT(c, 0x8b640u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b643  jmp 0x8b631
    X86_AT(c, 0x8b643u);
    X86_POLL(c, 0x8b631u); goto L_8b631;
L_8b645:
    X86_TICK(c, 20);
    // 08b645  push dword ptr [0x1a64]
    X86_AT(c, 0x8b645u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08b64b  push 0x20
    X86_AT(c, 0x8b64bu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b64d  push 1
    X86_AT(c, 0x8b64du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b64f  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b64fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b655  push eax
    X86_AT(c, 0x8b655u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b656  call 0x921a0
    X86_AT(c, 0x8b656u);
    push32(c, 0x8b65bu); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8b65bu);
    X86_TICK(c, 9);
    // 08b65b  add esp, 0x10
    X86_AT(c, 0x8b65bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b65e  cmp eax, 0x20
    X86_AT(c, 0x8b65eu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b661  jl 0x8b891
    X86_AT(c, 0x8b661u);
    if (x86_cc(c, 12)) { goto L_8b891; }
    X86_TICK(c, 2);
    // 08b667  sub esi, esi
    X86_AT(c, 0x8b667u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b669:
    X86_TICK(c, 7);
    // 08b669  cmp esi, 0x20
    X86_AT(c, 0x8b669u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b66c  jge 0x8b680
    X86_AT(c, 0x8b66cu);
    if (x86_cc(c, 13)) { goto L_8b680; }
    X86_TICK(c, 11);
    // 08b66e  push 0xff
    X86_AT(c, 0x8b66eu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 08b673  push esi
    X86_AT(c, 0x8b673u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b674  call 0x8fa1c
    X86_AT(c, 0x8b674u);
    push32(c, 0x8b679u); x86_call_known(c, 0x8fa1cu, f_0008fa1c); X86_RET(c, 0x8b679u);
    X86_TICK(c, 14);
    // 08b679  xchg ebx, eax
    X86_AT(c, 0x8b679u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b67a  inc esi
    X86_AT(c, 0x8b67au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b67b  add esp, 8
    X86_AT(c, 0x8b67bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b67e  jmp 0x8b669
    X86_AT(c, 0x8b67eu);
    X86_POLL(c, 0x8b669u); goto L_8b669;
L_8b680:
    X86_TICK(c, 20);
    // 08b680  push dword ptr [0x1a64]
    X86_AT(c, 0x8b680u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08b686  push 0x20
    X86_AT(c, 0x8b686u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b688  push 1
    X86_AT(c, 0x8b688u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b68a  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b68au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b690  push eax
    X86_AT(c, 0x8b690u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b691  call 0x921a0
    X86_AT(c, 0x8b691u);
    push32(c, 0x8b696u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8b696u);
    X86_TICK(c, 9);
    // 08b696  add esp, 0x10
    X86_AT(c, 0x8b696u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b699  cmp eax, 0x20
    X86_AT(c, 0x8b699u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b69c  jl 0x8b891
    X86_AT(c, 0x8b69cu);
    if (x86_cc(c, 12)) { goto L_8b891; }
    X86_TICK(c, 2);
    // 08b6a2  sub esi, esi
    X86_AT(c, 0x8b6a2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b6a4:
    X86_TICK(c, 7);
    // 08b6a4  cmp esi, 0x20
    X86_AT(c, 0x8b6a4u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b6a7  jge 0x8b6bb
    X86_AT(c, 0x8b6a7u);
    if (x86_cc(c, 13)) { goto L_8b6bb; }
    X86_TICK(c, 11);
    // 08b6a9  push 0xff
    X86_AT(c, 0x8b6a9u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 08b6ae  push esi
    X86_AT(c, 0x8b6aeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b6af  call 0x8fa36
    X86_AT(c, 0x8b6afu);
    push32(c, 0x8b6b4u); x86_call_known(c, 0x8fa36u, f_0008fa36); X86_RET(c, 0x8b6b4u);
    X86_TICK(c, 14);
    // 08b6b4  xchg ebx, eax
    X86_AT(c, 0x8b6b4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b6b5  inc esi
    X86_AT(c, 0x8b6b5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b6b6  add esp, 8
    X86_AT(c, 0x8b6b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b6b9  jmp 0x8b6a4
    X86_AT(c, 0x8b6b9u);
    X86_POLL(c, 0x8b6a4u); goto L_8b6a4;
L_8b6bb:
    X86_TICK(c, 20);
    // 08b6bb  push dword ptr [0x1a64]
    X86_AT(c, 0x8b6bbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08b6c1  push 0x20
    X86_AT(c, 0x8b6c1u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b6c3  push 1
    X86_AT(c, 0x8b6c3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b6c5  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b6c5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b6cb  push eax
    X86_AT(c, 0x8b6cbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b6cc  call 0x921a0
    X86_AT(c, 0x8b6ccu);
    push32(c, 0x8b6d1u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8b6d1u);
    X86_TICK(c, 9);
    // 08b6d1  add esp, 0x10
    X86_AT(c, 0x8b6d1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b6d4  cmp eax, 0x20
    X86_AT(c, 0x8b6d4u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b6d7  jl 0x8b891
    X86_AT(c, 0x8b6d7u);
    if (x86_cc(c, 12)) { goto L_8b891; }
    X86_TICK(c, 2);
    // 08b6dd  sub esi, esi
    X86_AT(c, 0x8b6ddu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b6df:
    X86_TICK(c, 7);
    // 08b6df  cmp esi, 0x20
    X86_AT(c, 0x8b6dfu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b6e2  jge 0x8b6fa
    X86_AT(c, 0x8b6e2u);
    if (x86_cc(c, 13)) { goto L_8b6fa; }
    X86_TICK(c, 17);
    // 08b6e4  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0x8b6e4u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 08b6ec  push eax
    X86_AT(c, 0x8b6ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b6ed  push esi
    X86_AT(c, 0x8b6edu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b6ee  call 0x8fa84
    X86_AT(c, 0x8b6eeu);
    push32(c, 0x8b6f3u); x86_call_known(c, 0x8fa84u, f_0008fa84); X86_RET(c, 0x8b6f3u);
    X86_TICK(c, 14);
    // 08b6f3  xchg ebx, eax
    X86_AT(c, 0x8b6f3u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b6f4  inc esi
    X86_AT(c, 0x8b6f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b6f5  add esp, 8
    X86_AT(c, 0x8b6f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b6f8  jmp 0x8b6df
    X86_AT(c, 0x8b6f8u);
    X86_POLL(c, 0x8b6dfu); goto L_8b6df;
L_8b6fa:
    X86_TICK(c, 20);
    // 08b6fa  push dword ptr [0x1a64]
    X86_AT(c, 0x8b6fau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08b700  push 0x20
    X86_AT(c, 0x8b700u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b702  push 1
    X86_AT(c, 0x8b702u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b704  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b704u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b70a  push eax
    X86_AT(c, 0x8b70au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b70b  call 0x921a0
    X86_AT(c, 0x8b70bu);
    push32(c, 0x8b710u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8b710u);
    X86_TICK(c, 9);
    // 08b710  add esp, 0x10
    X86_AT(c, 0x8b710u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b713  cmp eax, 0x20
    X86_AT(c, 0x8b713u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b716  jl 0x8b891
    X86_AT(c, 0x8b716u);
    if (x86_cc(c, 12)) { goto L_8b891; }
    X86_TICK(c, 2);
    // 08b71c  sub esi, esi
    X86_AT(c, 0x8b71cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b71e:
    X86_TICK(c, 7);
    // 08b71e  cmp esi, 0x20
    X86_AT(c, 0x8b71eu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b721  jge 0x8b739
    X86_AT(c, 0x8b721u);
    if (x86_cc(c, 13)) { goto L_8b739; }
    X86_TICK(c, 17);
    // 08b723  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0x8b723u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 08b72b  push eax
    X86_AT(c, 0x8b72bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b72c  push esi
    X86_AT(c, 0x8b72cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b72d  call 0x8fa6a
    X86_AT(c, 0x8b72du);
    push32(c, 0x8b732u); x86_call_known(c, 0x8fa6au, f_0008fa6a); X86_RET(c, 0x8b732u);
    X86_TICK(c, 14);
    // 08b732  xchg ebx, eax
    X86_AT(c, 0x8b732u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b733  inc esi
    X86_AT(c, 0x8b733u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b734  add esp, 8
    X86_AT(c, 0x8b734u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b737  jmp 0x8b71e
    X86_AT(c, 0x8b737u);
    X86_POLL(c, 0x8b71eu); goto L_8b71e;
L_8b739:
    X86_TICK(c, 18);
    // 08b739  push 0
    X86_AT(c, 0x8b739u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08b73b  push 0x6d4
    X86_AT(c, 0x8b73bu);
    { uint32_t v = 0x6D4u; push32(c, v); }
    // 08b740  mov eax, 0x19fc
    X86_AT(c, 0x8b740u);
    c.r[0] = 0x19FCu;
    // 08b745  push dword ptr [eax + 0x68]
    X86_AT(c, 0x8b745u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 08b748  call 0x92bf0
    X86_AT(c, 0x8b748u);
    push32(c, 0x8b74du); x86_call_known(c, 0x92bf0u, f_00092bf0); X86_RET(c, 0x8b74du);
    X86_TICK(c, 20);
    // 08b74d  push dword ptr [0x1a64]
    X86_AT(c, 0x8b74du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08b753  push 6
    X86_AT(c, 0x8b753u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 08b755  push 1
    X86_AT(c, 0x8b755u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b757  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b757u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b75d  push eax
    X86_AT(c, 0x8b75du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b75e  call 0x921a0
    X86_AT(c, 0x8b75eu);
    push32(c, 0x8b763u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8b763u);
    X86_TICK(c, 9);
    // 08b763  add esp, 0x1c
    X86_AT(c, 0x8b763u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08b766  cmp eax, 6
    X86_AT(c, 0x8b766u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 08b769  jl 0x8b891
    X86_AT(c, 0x8b769u);
    if (x86_cc(c, 12)) { goto L_8b891; }
    X86_TICK(c, 20);
    // 08b76f  push dword ptr [0x1a64]
    X86_AT(c, 0x8b76fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08b775  push 8
    X86_AT(c, 0x8b775u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 08b777  push 1
    X86_AT(c, 0x8b777u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b779  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b779u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b77f  push eax
    X86_AT(c, 0x8b77fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b780  call 0x921a0
    X86_AT(c, 0x8b780u);
    push32(c, 0x8b785u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8b785u);
    X86_TICK(c, 9);
    // 08b785  add esp, 0x10
    X86_AT(c, 0x8b785u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b788  cmp eax, 8
    X86_AT(c, 0x8b788u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 08b78b  jl 0x8b891
    X86_AT(c, 0x8b78bu);
    if (x86_cc(c, 12)) { goto L_8b891; }
    X86_TICK(c, 2);
    // 08b791  sub esi, esi
    X86_AT(c, 0x8b791u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b793:
    X86_TICK(c, 11);
    // 08b793  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0x8b793u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 08b796  and al, al
    X86_AT(c, 0x8b796u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08b798  je 0x8b7a4
    X86_AT(c, 0x8b798u);
    if (x86_cc(c, 4)) { goto L_8b7a4; }
    X86_TICK(c, 11);
    // 08b79a  mov byte ptr [ebp + esi*1 - 0x108], al
    X86_AT(c, 0x8b79au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u)), g8(c, 0));
    // 08b7a1  inc esi
    X86_AT(c, 0x8b7a1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b7a2  jmp 0x8b793
    X86_AT(c, 0x8b7a2u);
    X86_POLL(c, 0x8b793u); goto L_8b793;
L_8b7a4:
    X86_TICK(c, 12);
    // 08b7a4  cmp byte ptr [edi + esi*1], 0x5c
    X86_AT(c, 0x8b7a4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))), 0x5Cu, 0, 1);
    // 08b7a8  je 0x8b7b1
    X86_AT(c, 0x8b7a8u);
    if (x86_cc(c, 4)) { goto L_8b7b1; }
    X86_TICK(c, 7);
    // 08b7aa  and esi, esi
    X86_AT(c, 0x8b7aau);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08b7ac  jl 0x8b7b1
    X86_AT(c, 0x8b7acu);
    if (x86_cc(c, 12)) { goto L_8b7b1; }
    X86_TICK(c, 9);
    // 08b7ae  dec esi
    X86_AT(c, 0x8b7aeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 08b7af  jmp 0x8b7a4
    X86_AT(c, 0x8b7afu);
    X86_POLL(c, 0x8b7a4u); goto L_8b7a4;
L_8b7b1:
    X86_TICK(c, 22);
    // 08b7b1  inc esi
    X86_AT(c, 0x8b7b1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b7b2  push dword ptr [0x1a64]
    X86_AT(c, 0x8b7b2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08b7b8  push 8
    X86_AT(c, 0x8b7b8u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 08b7ba  push 1
    X86_AT(c, 0x8b7bau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b7bc  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0x8b7bcu);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 08b7c3  push eax
    X86_AT(c, 0x8b7c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b7c4  call 0x921a0
    X86_AT(c, 0x8b7c4u);
    push32(c, 0x8b7c9u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8b7c9u);
    X86_TICK(c, 9);
    // 08b7c9  add esp, 0x10
    X86_AT(c, 0x8b7c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b7cc  cmp eax, 8
    X86_AT(c, 0x8b7ccu);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 08b7cf  jl 0x8b891
    X86_AT(c, 0x8b7cfu);
    if (x86_cc(c, 12)) { goto L_8b891; }
    X86_TICK(c, 12);
    // 08b7d5  cmp byte ptr [ebp + esi*1 - 0x108], 0
    X86_AT(c, 0x8b7d5u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 08b7dd  je 0x8b827
    X86_AT(c, 0x8b7ddu);
    if (x86_cc(c, 4)) { goto L_8b827; }
    X86_TICK(c, 2);
    // 08b7df  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x8b7dfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_8b7e6:
    X86_TICK(c, 20);
    // 08b7e6  mov eax, esi
    X86_AT(c, 0x8b7e6u);
    c.r[0] = c.r[6];
    // 08b7e8  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x8b7e8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 08b7eb  cmp byte ptr [ebp + eax*1 - 0x108], 0
    X86_AT(c, 0x8b7ebu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 08b7f3  je 0x8b7fa
    X86_AT(c, 0x8b7f3u);
    if (x86_cc(c, 4)) { goto L_8b7fa; }
    X86_TICK(c, 13);
    // 08b7f5  inc dword ptr [ebp - 4]
    X86_AT(c, 0x8b7f5u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08b7f8  jmp 0x8b7e6
    X86_AT(c, 0x8b7f8u);
    X86_POLL(c, 0x8b7e6u); goto L_8b7e6;
L_8b7fa:
    X86_TICK(c, 18);
    // 08b7fa  mov eax, esi
    X86_AT(c, 0x8b7fau);
    c.r[0] = c.r[6];
    // 08b7fc  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x8b7fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 08b7ff  mov byte ptr [ebp + eax*1 - 0x108], 0x2e
    X86_AT(c, 0x8b7ffu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u)), 0x2Eu);
    // 08b807  mov byte ptr [ebp + eax*1 - 0x107], 0x66
    X86_AT(c, 0x8b807u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF9u)), 0x66u);
    // 08b80f  mov byte ptr [ebp + eax*1 - 0x106], 0x6d
    X86_AT(c, 0x8b80fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFAu)), 0x6Du);
    // 08b817  mov byte ptr [ebp + eax*1 - 0x105], 0x62
    X86_AT(c, 0x8b817u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFBu)), 0x62u);
    // 08b81f  mov byte ptr [ebp + eax*1 - 0x104], 0
    X86_AT(c, 0x8b81fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFCu)), 0x0u);
L_8b827:
    X86_TICK(c, 20);
    // 08b827  push dword ptr [0x1a64]
    X86_AT(c, 0x8b827u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08b82d  push 8
    X86_AT(c, 0x8b82du);
    { uint32_t v = 0x8u; push32(c, v); }
    // 08b82f  push 1
    X86_AT(c, 0x8b82fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b831  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0x8b831u);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 08b838  push eax
    X86_AT(c, 0x8b838u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b839  call 0x921a0
    X86_AT(c, 0x8b839u);
    push32(c, 0x8b83eu); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8b83eu);
    X86_TICK(c, 9);
    // 08b83e  add esp, 0x10
    X86_AT(c, 0x8b83eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b841  cmp eax, 8
    X86_AT(c, 0x8b841u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 08b844  jl 0x8b891
    X86_AT(c, 0x8b844u);
    if (x86_cc(c, 12)) { goto L_8b891; }
    X86_TICK(c, 18);
    // 08b846  push 0
    X86_AT(c, 0x8b846u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08b848  push 0x800
    X86_AT(c, 0x8b848u);
    { uint32_t v = 0x800u; push32(c, v); }
    // 08b84d  mov eax, 0x19fc
    X86_AT(c, 0x8b84du);
    c.r[0] = 0x19FCu;
    // 08b852  push dword ptr [eax + 0x68]
    X86_AT(c, 0x8b852u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 08b855  call 0x92bf0
    X86_AT(c, 0x8b855u);
    push32(c, 0x8b85au); x86_call_known(c, 0x92bf0u, f_00092bf0); X86_RET(c, 0x8b85au);
    X86_TICK(c, 20);
    // 08b85a  push dword ptr [0x1a64]
    X86_AT(c, 0x8b85au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08b860  push 1
    X86_AT(c, 0x8b860u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b862  push 4
    X86_AT(c, 0x8b862u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 08b864  lea eax, [ebp - 8]
    X86_AT(c, 0x8b864u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 08b867  push eax
    X86_AT(c, 0x8b867u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b868  call 0x921a0
    X86_AT(c, 0x8b868u);
    push32(c, 0x8b86du); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8b86du);
    X86_TICK(c, 9);
    // 08b86d  add esp, 0x1c
    X86_AT(c, 0x8b86du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08b870  dec eax
    X86_AT(c, 0x8b870u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08b871  jl 0x8b891
    X86_AT(c, 0x8b871u);
    if (x86_cc(c, 12)) { goto L_8b891; }
    X86_TICK(c, 20);
    // 08b873  push dword ptr [0x1a64]
    X86_AT(c, 0x8b873u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08b879  push 2
    X86_AT(c, 0x8b879u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08b87b  push 1
    X86_AT(c, 0x8b87bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b87d  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b87du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b883  push eax
    X86_AT(c, 0x8b883u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b884  call 0x921a0
    X86_AT(c, 0x8b884u);
    push32(c, 0x8b889u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8b889u);
    X86_TICK(c, 9);
    // 08b889  add esp, 0x10
    X86_AT(c, 0x8b889u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b88c  cmp eax, 2
    X86_AT(c, 0x8b88cu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 08b88f  jge 0x8b8a6
    X86_AT(c, 0x8b88fu);
    if (x86_cc(c, 13)) { goto L_8b8a6; }
L_8b891:
    X86_TICK(c, 12);
    // 08b891  push dword ptr [0x1a64]
    X86_AT(c, 0x8b891u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08b897  call 0x92978
    X86_AT(c, 0x8b897u);
    push32(c, 0x8b89cu); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x8b89cu);
    X86_TICK(c, 11);
    // 08b89c  mov eax, 2
    X86_AT(c, 0x8b89cu);
    c.r[0] = 0x2u;
    // 08b8a1  add esp, 4
    X86_AT(c, 0x8b8a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08b8a4  jmp 0x8b905
    X86_AT(c, 0x8b8a4u);
    goto L_8b905;
L_8b8a6:
    X86_TICK(c, 29);
    // 08b8a6  movzx eax, byte ptr [ebp - 0x88]
    X86_AT(c, 0x8b8a6u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF78u)));
    // 08b8ad  mov dword ptr [0x1a5c], eax
    X86_AT(c, 0x8b8adu);
    wr32((c.sbase[3] + (uint32_t)(0x1A5Cu)), c.r[0]);
    // 08b8b2  movzx eax, byte ptr [ebp - 0x87]
    X86_AT(c, 0x8b8b2u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF79u)));
    // 08b8b9  mov dword ptr [0x1a58], eax
    X86_AT(c, 0x8b8b9u);
    wr32((c.sbase[3] + (uint32_t)(0x1A58u)), c.r[0]);
    // 08b8be  mov dword ptr [0x1a60], 0
    X86_AT(c, 0x8b8beu);
    wr32((c.sbase[3] + (uint32_t)(0x1A60u)), 0x0u);
    // 08b8c8  mov byte ptr [0x1a18], 0xfe
    X86_AT(c, 0x8b8c8u);
    wr8((c.sbase[3] + (uint32_t)(0x1A18u)), 0xFEu);
    // 08b8cf  mov dword ptr [0x1a04], 1
    X86_AT(c, 0x8b8cfu);
    wr32((c.sbase[3] + (uint32_t)(0x1A04u)), 0x1u);
    // 08b8d9  call 0x8bcf8
    X86_AT(c, 0x8b8d9u);
    push32(c, 0x8b8deu); x86_call_known(c, 0x8bcf8u, f_0008bcf8); X86_RET(c, 0x8b8deu);
    X86_TICK(c, 7);
    // 08b8de  call 0x8bcf8
    X86_AT(c, 0x8b8deu);
    push32(c, 0x8b8e3u); x86_call_known(c, 0x8bcf8u, f_0008bcf8); X86_RET(c, 0x8b8e3u);
    X86_TICK(c, 12);
    // 08b8e3  push dword ptr [0x1a58]
    X86_AT(c, 0x8b8e3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A58u))); push32(c, v); }
    // 08b8e9  call 0x8fa07
    X86_AT(c, 0x8b8e9u);
    push32(c, 0x8b8eeu); x86_call_known(c, 0x8fa07u, f_0008fa07); X86_RET(c, 0x8b8eeu);
    X86_TICK(c, 13);
    // 08b8ee  add esp, 4
    X86_AT(c, 0x8b8eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08b8f1  mov eax, dword ptr [0x1a64]
    X86_AT(c, 0x8b8f1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A64u)));
    // 08b8f6  and eax, eax
    X86_AT(c, 0x8b8f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08b8f8  je 0x8b903
    X86_AT(c, 0x8b8f8u);
    if (x86_cc(c, 4)) { goto L_8b903; }
    X86_TICK(c, 9);
    // 08b8fa  push eax
    X86_AT(c, 0x8b8fau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b8fb  call 0x92978
    X86_AT(c, 0x8b8fbu);
    push32(c, 0x8b900u); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x8b900u);
    X86_TICK(c, 2);
    // 08b900  add esp, 4
    X86_AT(c, 0x8b900u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8b903:
    X86_TICK(c, 2);
    // 08b903  sub eax, eax
    X86_AT(c, 0x8b903u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8b905:
    X86_TICK(c, 28);
    // 08b905  pop edi
    X86_AT(c, 0x8b905u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08b906  pop esi
    X86_AT(c, 0x8b906u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08b907  pop ebx
    X86_AT(c, 0x8b907u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08b908  leave 
    X86_AT(c, 0x8b908u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b909  ret 
    X86_AT(c, 0x8b909u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b570u, "ran off the end of a function");
}
void f_0008b90c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08b90c  push ebp
    X86_AT(c, 0x8b90cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b90d  mov ebp, esp
    X86_AT(c, 0x8b90du);
    c.r[5] = c.r[4];
    // 08b90f  push edi
    X86_AT(c, 0x8b90fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b910  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8b910u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08b913  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8b913u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08b916  sub ecx, ecx
    X86_AT(c, 0x8b916u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 08b918  cmp ecx, edx
    X86_AT(c, 0x8b918u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 08b91a  jne 0x8b920
    X86_AT(c, 0x8b91au);
    if (x86_cc(c, 5)) { goto L_8b920; }
    X86_TICK(c, 9);
    // 08b91c  mov eax, edi
    X86_AT(c, 0x8b91cu);
    c.r[0] = c.r[7];
    // 08b91e  jmp 0x8b934
    X86_AT(c, 0x8b91eu);
    goto L_8b934;
L_8b920:
    X86_TICK(c, 12);
    // 08b920  cmp byte ptr [edi], 0xf2
    X86_AT(c, 0x8b920u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xF2u, 0, 1);
    // 08b923  jne 0x8b92f
    X86_AT(c, 0x8b923u);
    if (x86_cc(c, 5)) { goto L_8b92f; }
    X86_TICK(c, 9);
    // 08b925  inc ecx
    X86_AT(c, 0x8b925u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 08b926  cmp edx, ecx
    X86_AT(c, 0x8b926u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 08b928  jne 0x8b92f
    X86_AT(c, 0x8b928u);
    if (x86_cc(c, 5)) { goto L_8b92f; }
    X86_TICK(c, 9);
    // 08b92a  lea eax, [edi + 6]
    X86_AT(c, 0x8b92au);
    c.r[0] = (uint32_t)(c.r[7] + 0x6u);
    // 08b92d  jmp 0x8b934
    X86_AT(c, 0x8b92du);
    goto L_8b934;
L_8b92f:
    X86_TICK(c, 9);
    // 08b92f  add edi, 6
    X86_AT(c, 0x8b92fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 08b932  jmp 0x8b920
    X86_AT(c, 0x8b932u);
    X86_POLL(c, 0x8b920u); goto L_8b920;
L_8b934:
    X86_TICK(c, 20);
    // 08b934  pop edi
    X86_AT(c, 0x8b934u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08b935  leave 
    X86_AT(c, 0x8b935u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b936  ret 
    X86_AT(c, 0x8b936u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b90cu, "ran off the end of a function");
}
void f_0008b938(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08b938  push ebp
    X86_AT(c, 0x8b938u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b939  mov ebp, esp
    X86_AT(c, 0x8b939u);
    c.r[5] = c.r[4];
    // 08b93b  push edi
    X86_AT(c, 0x8b93bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b93c  mov eax, dword ptr [0x1a20]
    X86_AT(c, 0x8b93cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A20u)));
    // 08b941  dec eax
    X86_AT(c, 0x8b941u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08b942  push eax
    X86_AT(c, 0x8b942u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b943  push 0
    X86_AT(c, 0x8b943u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08b945  call 0x8fa9e
    X86_AT(c, 0x8b945u);
    push32(c, 0x8b94au); x86_call_known(c, 0x8fa9eu, f_0008fa9e); X86_RET(c, 0x8b94au);
    X86_TICK(c, 17);
    // 08b94a  mov eax, dword ptr [0x1a24]
    X86_AT(c, 0x8b94au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A24u)));
    // 08b94f  dec eax
    X86_AT(c, 0x8b94fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08b950  push eax
    X86_AT(c, 0x8b950u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b951  push 1
    X86_AT(c, 0x8b951u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b953  call 0x8fa9e
    X86_AT(c, 0x8b953u);
    push32(c, 0x8b958u); x86_call_known(c, 0x8fa9eu, f_0008fa9e); X86_RET(c, 0x8b958u);
    X86_TICK(c, 17);
    // 08b958  mov eax, dword ptr [0x1a28]
    X86_AT(c, 0x8b958u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A28u)));
    // 08b95d  dec eax
    X86_AT(c, 0x8b95du);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08b95e  push eax
    X86_AT(c, 0x8b95eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b95f  push 2
    X86_AT(c, 0x8b95fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08b961  call 0x8fa9e
    X86_AT(c, 0x8b961u);
    push32(c, 0x8b966u); x86_call_known(c, 0x8fa9eu, f_0008fa9e); X86_RET(c, 0x8b966u);
    X86_TICK(c, 17);
    // 08b966  mov eax, dword ptr [0x1a2c]
    X86_AT(c, 0x8b966u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A2Cu)));
    // 08b96b  dec eax
    X86_AT(c, 0x8b96bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08b96c  push eax
    X86_AT(c, 0x8b96cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b96d  push 3
    X86_AT(c, 0x8b96du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08b96f  call 0x8fa9e
    X86_AT(c, 0x8b96fu);
    push32(c, 0x8b974u); x86_call_known(c, 0x8fa9eu, f_0008fa9e); X86_RET(c, 0x8b974u);
    X86_TICK(c, 17);
    // 08b974  mov eax, dword ptr [0x1a30]
    X86_AT(c, 0x8b974u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A30u)));
    // 08b979  dec eax
    X86_AT(c, 0x8b979u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08b97a  push eax
    X86_AT(c, 0x8b97au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b97b  push 4
    X86_AT(c, 0x8b97bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 08b97d  call 0x8fa9e
    X86_AT(c, 0x8b97du);
    push32(c, 0x8b982u); x86_call_known(c, 0x8fa9eu, f_0008fa9e); X86_RET(c, 0x8b982u);
    X86_TICK(c, 17);
    // 08b982  mov eax, dword ptr [0x1a34]
    X86_AT(c, 0x8b982u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A34u)));
    // 08b987  dec eax
    X86_AT(c, 0x8b987u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08b988  push eax
    X86_AT(c, 0x8b988u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b989  push 5
    X86_AT(c, 0x8b989u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 08b98b  call 0x8fa9e
    X86_AT(c, 0x8b98bu);
    push32(c, 0x8b990u); x86_call_known(c, 0x8fa9eu, f_0008fa9e); X86_RET(c, 0x8b990u);
    X86_TICK(c, 17);
    // 08b990  mov eax, dword ptr [0x1a38]
    X86_AT(c, 0x8b990u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A38u)));
    // 08b995  dec eax
    X86_AT(c, 0x8b995u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08b996  push eax
    X86_AT(c, 0x8b996u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b997  push 0
    X86_AT(c, 0x8b997u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08b999  call 0x8f243
    X86_AT(c, 0x8b999u);
    push32(c, 0x8b99eu); x86_call_known(c, 0x8f243u, f_0008f243); X86_RET(c, 0x8b99eu);
    X86_TICK(c, 17);
    // 08b99e  mov eax, dword ptr [0x1a3c]
    X86_AT(c, 0x8b99eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A3Cu)));
    // 08b9a3  dec eax
    X86_AT(c, 0x8b9a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08b9a4  push eax
    X86_AT(c, 0x8b9a4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b9a5  push 1
    X86_AT(c, 0x8b9a5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b9a7  call 0x8f243
    X86_AT(c, 0x8b9a7u);
    push32(c, 0x8b9acu); x86_call_known(c, 0x8f243u, f_0008f243); X86_RET(c, 0x8b9acu);
    X86_TICK(c, 19);
    // 08b9ac  add esp, 0x40
    X86_AT(c, 0x8b9acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08b9af  mov eax, dword ptr [0x1a40]
    X86_AT(c, 0x8b9afu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A40u)));
    // 08b9b4  dec eax
    X86_AT(c, 0x8b9b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08b9b5  push eax
    X86_AT(c, 0x8b9b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b9b6  push 2
    X86_AT(c, 0x8b9b6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08b9b8  call 0x8f243
    X86_AT(c, 0x8b9b8u);
    push32(c, 0x8b9bdu); x86_call_known(c, 0x8f243u, f_0008f243); X86_RET(c, 0x8b9bdu);
    X86_TICK(c, 17);
    // 08b9bd  mov eax, dword ptr [0x1a44]
    X86_AT(c, 0x8b9bdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A44u)));
    // 08b9c2  dec eax
    X86_AT(c, 0x8b9c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08b9c3  push eax
    X86_AT(c, 0x8b9c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b9c4  push 3
    X86_AT(c, 0x8b9c4u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08b9c6  call 0x8f243
    X86_AT(c, 0x8b9c6u);
    push32(c, 0x8b9cbu); x86_call_known(c, 0x8f243u, f_0008f243); X86_RET(c, 0x8b9cbu);
    X86_TICK(c, 17);
    // 08b9cb  mov eax, dword ptr [0x1a48]
    X86_AT(c, 0x8b9cbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A48u)));
    // 08b9d0  dec eax
    X86_AT(c, 0x8b9d0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08b9d1  push eax
    X86_AT(c, 0x8b9d1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b9d2  push 4
    X86_AT(c, 0x8b9d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 08b9d4  call 0x8f243
    X86_AT(c, 0x8b9d4u);
    push32(c, 0x8b9d9u); x86_call_known(c, 0x8f243u, f_0008f243); X86_RET(c, 0x8b9d9u);
    X86_TICK(c, 17);
    // 08b9d9  mov eax, dword ptr [0x1a4c]
    X86_AT(c, 0x8b9d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A4Cu)));
    // 08b9de  dec eax
    X86_AT(c, 0x8b9deu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08b9df  push eax
    X86_AT(c, 0x8b9dfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b9e0  push 5
    X86_AT(c, 0x8b9e0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 08b9e2  call 0x8f243
    X86_AT(c, 0x8b9e2u);
    push32(c, 0x8b9e7u); x86_call_known(c, 0x8f243u, f_0008f243); X86_RET(c, 0x8b9e7u);
    X86_TICK(c, 11);
    // 08b9e7  add esp, 0x20
    X86_AT(c, 0x8b9e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08b9ea  push 1
    X86_AT(c, 0x8b9eau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b9ec  call 0x8f9eb
    X86_AT(c, 0x8b9ecu);
    push32(c, 0x8b9f1u); x86_call_known(c, 0x8f9ebu, f_0008f9eb); X86_RET(c, 0x8b9f1u);
    X86_TICK(c, 17);
    // 08b9f1  push dword ptr [ebp + 8]
    X86_AT(c, 0x8b9f1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08b9f4  push dword ptr [0x1a08]
    X86_AT(c, 0x8b9f4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A08u))); push32(c, v); }
    // 08b9fa  call 0x8b90c
    X86_AT(c, 0x8b9fau);
    push32(c, 0x8b9ffu); x86_call_known(c, 0x8b90cu, f_0008b90c); X86_RET(c, 0x8b9ffu);
    X86_TICK(c, 22);
    // 08b9ff  mov dword ptr [0x1a1c], eax
    X86_AT(c, 0x8b9ffu);
    wr32((c.sbase[3] + (uint32_t)(0x1A1Cu)), c.r[0]);
    // 08ba04  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8ba04u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08ba07  inc eax
    X86_AT(c, 0x8ba07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08ba08  push eax
    X86_AT(c, 0x8ba08u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ba09  push dword ptr [0x1a08]
    X86_AT(c, 0x8ba09u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A08u))); push32(c, v); }
    // 08ba0f  call 0x8b90c
    X86_AT(c, 0x8ba0fu);
    push32(c, 0x8ba14u); x86_call_known(c, 0x8b90cu, f_0008b90c); X86_RET(c, 0x8ba14u);
    X86_TICK(c, 42);
    // 08ba14  xchg edi, eax
    X86_AT(c, 0x8ba14u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 08ba15  mov byte ptr [edi], 0xfe
    X86_AT(c, 0x8ba15u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFEu);
    // 08ba18  inc edi
    X86_AT(c, 0x8ba18u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08ba19  inc edi
    X86_AT(c, 0x8ba19u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08ba1a  mov byte ptr [edi], 0
    X86_AT(c, 0x8ba1au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 08ba1d  inc edi
    X86_AT(c, 0x8ba1du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08ba1e  mov byte ptr [edi], 0
    X86_AT(c, 0x8ba1eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 08ba21  inc edi
    X86_AT(c, 0x8ba21u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08ba22  push dword ptr [0x1a5c]
    X86_AT(c, 0x8ba22u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A5Cu))); push32(c, v); }
    // 08ba28  mov eax, dword ptr [0x1a00]
    X86_AT(c, 0x8ba28u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A00u)));
    // 08ba2d  add eax, eax
    X86_AT(c, 0x8ba2du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 08ba2f  push eax
    X86_AT(c, 0x8ba2fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ba30  push dword ptr [0x1a08]
    X86_AT(c, 0x8ba30u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A08u))); push32(c, v); }
    // 08ba36  call 0x8f90f
    X86_AT(c, 0x8ba36u);
    push32(c, 0x8ba3bu); x86_call_known(c, 0x8f90fu, f_0008f90f); X86_RET(c, 0x8ba3bu);
    X86_TICK(c, 24);
    // 08ba3b  sub eax, eax
    X86_AT(c, 0x8ba3bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08ba3d  add esp, 0x20
    X86_AT(c, 0x8ba3du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08ba40  pop edi
    X86_AT(c, 0x8ba40u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08ba41  leave 
    X86_AT(c, 0x8ba41u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ba42  ret 
    X86_AT(c, 0x8ba42u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b938u, "ran off the end of a function");
}
void f_0008ba7c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08ba7c  call 0x8f92e
    X86_AT(c, 0x8ba7cu);
    push32(c, 0x8ba81u); x86_call_known(c, 0x8f92eu, f_0008f92e); X86_RET(c, 0x8ba81u);
    X86_TICK(c, 12);
    // 08ba81  sub eax, eax
    X86_AT(c, 0x8ba81u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08ba83  ret 
    X86_AT(c, 0x8ba83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ba7cu, "ran off the end of a function");
}
void f_0008bac4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08bac4  push 0xffffffff
    X86_AT(c, 0x8bac4u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 08bac6  call 0x8f3f5
    X86_AT(c, 0x8bac6u);
    push32(c, 0x8bacbu); x86_call_known(c, 0x8f3f5u, f_0008f3f5); X86_RET(c, 0x8bacbu);
    X86_TICK(c, 9);
    // 08bacb  push 1
    X86_AT(c, 0x8bacbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bacd  call 0x8f3cb
    X86_AT(c, 0x8bacdu);
    push32(c, 0x8bad2u); x86_call_known(c, 0x8f3cbu, f_0008f3cb); X86_RET(c, 0x8bad2u);
    X86_TICK(c, 14);
    // 08bad2  sub eax, eax
    X86_AT(c, 0x8bad2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08bad4  add esp, 8
    X86_AT(c, 0x8bad4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08bad7  ret 
    X86_AT(c, 0x8bad7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bac4u, "ran off the end of a function");
}
void f_0008bad8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08bad8  push ebp
    X86_AT(c, 0x8bad8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08bad9  mov ebp, esp
    X86_AT(c, 0x8bad9u);
    c.r[5] = c.r[4];
    // 08badb  push ebx
    X86_AT(c, 0x8badbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08badc  push esi
    X86_AT(c, 0x8badcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08badd  push edi
    X86_AT(c, 0x8baddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08bade  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8badeu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08bae1  push 0x1012
    X86_AT(c, 0x8bae1u);
    { uint32_t v = 0x1012u; push32(c, v); }
    // 08bae6  push dword ptr [ebp + 8]
    X86_AT(c, 0x8bae6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08bae9  call 0x9247c
    X86_AT(c, 0x8bae9u);
    push32(c, 0x8baeeu); x86_call_known(c, 0x9247cu, f_0009247c); X86_RET(c, 0x8baeeu);
    X86_TICK(c, 12);
    // 08baee  add esp, 8
    X86_AT(c, 0x8baeeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08baf1  xchg esi, eax
    X86_AT(c, 0x8baf1u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 08baf2  and esi, esi
    X86_AT(c, 0x8baf2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08baf4  jne 0x8bb07
    X86_AT(c, 0x8baf4u);
    if (x86_cc(c, 5)) { goto L_8bb07; }
    X86_TICK(c, 9);
    // 08baf6  push 0x1018
    X86_AT(c, 0x8baf6u);
    { uint32_t v = 0x1018u; push32(c, v); }
    // 08bafb  call 0x8e09c
    X86_AT(c, 0x8bafbu);
    push32(c, 0x8bb00u); x86_call_known(c, 0x8e09cu, f_0008e09c); X86_RET(c, 0x8bb00u);
    X86_TICK(c, 9);
    // 08bb00  mov eax, 1
    X86_AT(c, 0x8bb00u);
    c.r[0] = 0x1u;
    // 08bb05  jmp 0x8bb54
    X86_AT(c, 0x8bb05u);
    goto L_8bb54;
L_8bb07:
    X86_TICK(c, 12);
    // 08bb07  cmp dword ptr [ebp + 0x10], 0x20
    X86_AT(c, 0x8bb07u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x20u, 0, 4);
    // 08bb0b  jl 0x8bb3f
    X86_AT(c, 0x8bb0bu);
    if (x86_cc(c, 12)) { goto L_8bb3f; }
    X86_TICK(c, 15);
    // 08bb0d  push esi
    X86_AT(c, 0x8bb0du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08bb0e  push 0x20
    X86_AT(c, 0x8bb0eu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08bb10  push 1
    X86_AT(c, 0x8bb10u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bb12  push edi
    X86_AT(c, 0x8bb12u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08bb13  call 0x921a0
    X86_AT(c, 0x8bb13u);
    push32(c, 0x8bb18u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8bb18u);
    X86_TICK(c, 9);
    // 08bb18  add esp, 0x10
    X86_AT(c, 0x8bb18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08bb1b  cmp eax, 0x20
    X86_AT(c, 0x8bb1bu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08bb1e  jl 0x8bb3f
    X86_AT(c, 0x8bb1eu);
    if (x86_cc(c, 12)) { goto L_8bb3f; }
    X86_TICK(c, 17);
    // 08bb20  mov ebx, dword ptr [edi + 0xc]
    X86_AT(c, 0x8bb20u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 08bb23  lea eax, [ebx + 0x20]
    X86_AT(c, 0x8bb23u);
    c.r[0] = (uint32_t)(c.r[3] + 0x20u);
    // 08bb26  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8bb26u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 08bb29  jg 0x8bb3f
    X86_AT(c, 0x8bb29u);
    if (x86_cc(c, 15)) { goto L_8bb3f; }
    X86_TICK(c, 17);
    // 08bb2b  push esi
    X86_AT(c, 0x8bb2bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08bb2c  push ebx
    X86_AT(c, 0x8bb2cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08bb2d  push 1
    X86_AT(c, 0x8bb2du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bb2f  lea eax, [edi + 0x20]
    X86_AT(c, 0x8bb2fu);
    c.r[0] = (uint32_t)(c.r[7] + 0x20u);
    // 08bb32  push eax
    X86_AT(c, 0x8bb32u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bb33  call 0x921a0
    X86_AT(c, 0x8bb33u);
    push32(c, 0x8bb38u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8bb38u);
    X86_TICK(c, 9);
    // 08bb38  add esp, 0x10
    X86_AT(c, 0x8bb38u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08bb3b  cmp ebx, eax
    X86_AT(c, 0x8bb3bu);
    (void)x86_sub(c, c.r[3], c.r[0], 0, 4);
    // 08bb3d  jle 0x8bb4c
    X86_AT(c, 0x8bb3du);
    if (x86_cc(c, 14)) { goto L_8bb4c; }
L_8bb3f:
    X86_TICK(c, 9);
    // 08bb3f  push esi
    X86_AT(c, 0x8bb3fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08bb40  call 0x92978
    X86_AT(c, 0x8bb40u);
    push32(c, 0x8bb45u); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x8bb45u);
    X86_TICK(c, 9);
    // 08bb45  mov eax, 2
    X86_AT(c, 0x8bb45u);
    c.r[0] = 0x2u;
    // 08bb4a  jmp 0x8bb54
    X86_AT(c, 0x8bb4au);
    goto L_8bb54;
L_8bb4c:
    X86_TICK(c, 9);
    // 08bb4c  push esi
    X86_AT(c, 0x8bb4cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08bb4d  call 0x92978
    X86_AT(c, 0x8bb4du);
    push32(c, 0x8bb52u); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x8bb52u);
    X86_TICK(c, 2);
    // 08bb52  sub eax, eax
    X86_AT(c, 0x8bb52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8bb54:
    X86_TICK(c, 30);
    // 08bb54  add esp, 4
    X86_AT(c, 0x8bb54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08bb57  pop edi
    X86_AT(c, 0x8bb57u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08bb58  pop esi
    X86_AT(c, 0x8bb58u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08bb59  pop ebx
    X86_AT(c, 0x8bb59u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08bb5a  leave 
    X86_AT(c, 0x8bb5au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08bb5b  ret 
    X86_AT(c, 0x8bb5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bad8u, "ran off the end of a function");
}
void f_0008bcf8(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08bcf8  push ebx
    X86_AT(c, 0x8bcf8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08bcf9  push esi
    X86_AT(c, 0x8bcf9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08bcfa  push edi
    X86_AT(c, 0x8bcfau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08bcfb  cmp dword ptr [0x1a04], 0
    X86_AT(c, 0x8bcfbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x1A04u))), 0x0u, 0, 4);
    // 08bd02  jne 0x8bd12
    X86_AT(c, 0x8bd02u);
    if (x86_cc(c, 5)) { goto L_8bd12; }
    X86_TICK(c, 11);
    // 08bd04  mov dword ptr [0x1a04], 1
    X86_AT(c, 0x8bd04u);
    wr32((c.sbase[3] + (uint32_t)(0x1A04u)), 0x1u);
    // 08bd0e  sub esi, esi
    X86_AT(c, 0x8bd0eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08bd10  jmp 0x8bd21
    X86_AT(c, 0x8bd10u);
    goto L_8bd21;
L_8bd12:
    X86_TICK(c, 4);
    // 08bd12  mov dword ptr [0x1a04], 0
    X86_AT(c, 0x8bd12u);
    wr32((c.sbase[3] + (uint32_t)(0x1A04u)), 0x0u);
    // 08bd1c  mov esi, 1
    X86_AT(c, 0x8bd1cu);
    c.r[6] = 0x1u;
L_8bd21:
    X86_TICK(c, 8);
    // 08bd21  mov eax, dword ptr [0x1a04]
    X86_AT(c, 0x8bd21u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A04u)));
    // 08bd26  mov edi, dword ptr [eax*4 + 0x1a08]
    X86_AT(c, 0x8bd26u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x1A08u)));
L_8bd2d:
    X86_TICK(c, 14);
    // 08bd2d  mov eax, 0x19fc
    X86_AT(c, 0x8bd2du);
    c.r[0] = 0x19FCu;
    // 08bd32  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0x8bd32u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 08bd36  jne 0x8bda1
    X86_AT(c, 0x8bd36u);
    if (x86_cc(c, 5)) { goto L_8bda1; }
    X86_TICK(c, 15);
    // 08bd38  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x8bd38u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 08bd3b  cmp edi, dword ptr [eax + edx*4 + 0x14]
    X86_AT(c, 0x8bd3bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x14u))), 0, 4);
    // 08bd3f  ja 0x8bda1
    X86_AT(c, 0x8bd3fu);
    if (x86_cc(c, 7)) { goto L_8bda1; }
    X86_TICK(c, 18);
    // 08bd41  push dword ptr [eax + 0x68]
    X86_AT(c, 0x8bd41u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 08bd44  push 6
    X86_AT(c, 0x8bd44u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 08bd46  push 1
    X86_AT(c, 0x8bd46u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bd48  push edi
    X86_AT(c, 0x8bd48u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08bd49  call 0x921a0
    X86_AT(c, 0x8bd49u);
    push32(c, 0x8bd4eu); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8bd4eu);
    X86_TICK(c, 9);
    // 08bd4e  add esp, 0x10
    X86_AT(c, 0x8bd4eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08bd51  cmp eax, 6
    X86_AT(c, 0x8bd51u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 08bd54  jge 0x8bd75
    X86_AT(c, 0x8bd54u);
    if (x86_cc(c, 13)) { goto L_8bd75; }
    X86_TICK(c, 12);
    // 08bd56  push dword ptr [0x1a64]
    X86_AT(c, 0x8bd56u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08bd5c  call 0x92978
    X86_AT(c, 0x8bd5cu);
    push32(c, 0x8bd61u); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x8bd61u);
    X86_TICK(c, 13);
    // 08bd61  mov dword ptr [0x1a64], 0
    X86_AT(c, 0x8bd61u);
    wr32((c.sbase[3] + (uint32_t)(0x1A64u)), 0x0u);
    // 08bd6b  mov eax, 2
    X86_AT(c, 0x8bd6bu);
    c.r[0] = 0x2u;
    // 08bd70  add esp, 4
    X86_AT(c, 0x8bd70u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08bd73  jmp 0x8bdce
    X86_AT(c, 0x8bd73u);
    goto L_8bdce;
L_8bd75:
    X86_TICK(c, 12);
    // 08bd75  cmp byte ptr [edi], 0xfe
    X86_AT(c, 0x8bd75u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xFEu, 0, 1);
    // 08bd78  jne 0x8bd9c
    X86_AT(c, 0x8bd78u);
    if (x86_cc(c, 5)) { goto L_8bd9c; }
    X86_TICK(c, 14);
    // 08bd7a  mov dword ptr [0x1a60], 1
    X86_AT(c, 0x8bd7au);
    wr32((c.sbase[3] + (uint32_t)(0x1A60u)), 0x1u);
    // 08bd84  push dword ptr [0x1a64]
    X86_AT(c, 0x8bd84u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 08bd8a  call 0x92978
    X86_AT(c, 0x8bd8au);
    push32(c, 0x8bd8fu); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x8bd8fu);
    X86_TICK(c, 4);
    // 08bd8f  mov dword ptr [0x1a64], 0
    X86_AT(c, 0x8bd8fu);
    wr32((c.sbase[3] + (uint32_t)(0x1A64u)), 0x0u);
    // 08bd99  add esp, 4
    X86_AT(c, 0x8bd99u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8bd9c:
    X86_TICK(c, 9);
    // 08bd9c  add edi, 6
    X86_AT(c, 0x8bd9cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 08bd9f  jmp 0x8bd2d
    X86_AT(c, 0x8bd9fu);
    X86_POLL(c, 0x8bd2du); goto L_8bd2d;
L_8bda1:
    X86_TICK(c, 18);
    // 08bda1  mov eax, 0x19fc
    X86_AT(c, 0x8bda1u);
    c.r[0] = 0x19FCu;
    // 08bda6  mov bl, byte ptr [eax + 0x1c]
    X86_AT(c, 0x8bda6u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu))));
    // 08bda9  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0x8bda9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 08bdad  jne 0x8bdbe
    X86_AT(c, 0x8bdadu);
    if (x86_cc(c, 5)) { goto L_8bdbe; }
    X86_TICK(c, 16);
    // 08bdaf  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x8bdafu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 08bdb2  mov edx, dword ptr [eax + edx*4 + 0x14]
    X86_AT(c, 0x8bdb2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x14u)));
    // 08bdb6  mov cl, byte ptr [edx]
    X86_AT(c, 0x8bdb6u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 08bdb8  mov byte ptr [eax + 0x1c], cl
    X86_AT(c, 0x8bdb8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu)), g8(c, 1));
    // 08bdbb  mov byte ptr [edx], 0xfd
    X86_AT(c, 0x8bdbbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0xFDu);
L_8bdbe:
    X86_TICK(c, 13);
    // 08bdbe  mov eax, dword ptr [esi*4 + 0x1a10]
    X86_AT(c, 0x8bdbeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x1A10u)));
    // 08bdc5  mov byte ptr [eax], bl
    X86_AT(c, 0x8bdc5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), g8(c, 3));
    // 08bdc7  call 0x8f944
    X86_AT(c, 0x8bdc7u);
    push32(c, 0x8bdccu); x86_call_known(c, 0x8f944u, f_0008f944); X86_RET(c, 0x8bdccu);
    X86_TICK(c, 2);
    // 08bdcc  sub eax, eax
    X86_AT(c, 0x8bdccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8bdce:
    X86_TICK(c, 22);
    // 08bdce  pop edi
    X86_AT(c, 0x8bdceu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08bdcf  pop esi
    X86_AT(c, 0x8bdcfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08bdd0  pop ebx
    X86_AT(c, 0x8bdd0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08bdd1  ret 
    X86_AT(c, 0x8bdd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bcf8u, "ran off the end of a function");
}
void f_0008bdd4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08bdd4  push 0x141d0
    X86_AT(c, 0x8bdd4u);
    { uint32_t v = 0x141D0u; push32(c, v); }
    // 08bdd9  call 0x92e50
    X86_AT(c, 0x8bdd9u);
    push32(c, 0x8bddeu); x86_call_known(c, 0x92e50u, f_00092e50); X86_RET(c, 0x8bddeu);
    X86_TICK(c, 11);
    // 08bdde  add esp, 4
    X86_AT(c, 0x8bddeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08bde1  mov dword ptr [0x1a50], eax
    X86_AT(c, 0x8bde1u);
    wr32((c.sbase[3] + (uint32_t)(0x1A50u)), c.r[0]);
    // 08bde6  and eax, eax
    X86_AT(c, 0x8bde6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08bde8  jne 0x8bdfe
    X86_AT(c, 0x8bde8u);
    if (x86_cc(c, 5)) { goto L_8bdfe; }
    X86_TICK(c, 9);
    // 08bdea  push 0x1068
    X86_AT(c, 0x8bdeau);
    { uint32_t v = 0x1068u; push32(c, v); }
    // 08bdef  call 0x8e09c
    X86_AT(c, 0x8bdefu);
    push32(c, 0x8bdf4u); x86_call_known(c, 0x8e09cu, f_0008e09c); X86_RET(c, 0x8bdf4u);
    X86_TICK(c, 11);
    // 08bdf4  mov eax, 0xffffffff
    X86_AT(c, 0x8bdf4u);
    c.r[0] = 0xFFFFFFFFu;
    // 08bdf9  add esp, 4
    X86_AT(c, 0x8bdf9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08bdfc  jmp 0x8be5b
    X86_AT(c, 0x8bdfcu);
    goto L_8be5b;
L_8bdfe:
    X86_TICK(c, 17);
    // 08bdfe  mov eax, dword ptr [0x1a50]
    X86_AT(c, 0x8bdfeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1A50u)));
    // 08be03  lea edx, [eax + 0x4000]
    X86_AT(c, 0x8be03u);
    c.r[2] = (uint32_t)(c.r[0] + 0x4000u);
    // 08be09  mov dword ptr [0x1a54], edx
    X86_AT(c, 0x8be09u);
    wr32((c.sbase[3] + (uint32_t)(0x1A54u)), c.r[2]);
    // 08be0f  push eax
    X86_AT(c, 0x8be0fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08be10  call 0x8f16b
    X86_AT(c, 0x8be10u);
    push32(c, 0x8be15u); x86_call_known(c, 0x8f16bu, f_0008f16b); X86_RET(c, 0x8be15u);
    X86_TICK(c, 9);
    // 08be15  add esp, 4
    X86_AT(c, 0x8be15u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08be18  and eax, eax
    X86_AT(c, 0x8be18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08be1a  je 0x8be3b
    X86_AT(c, 0x8be1au);
    if (x86_cc(c, 4)) { goto L_8be3b; }
    X86_TICK(c, 9);
    // 08be1c  push 0x10ac
    X86_AT(c, 0x8be1cu);
    { uint32_t v = 0x10ACu; push32(c, v); }
    // 08be21  call 0x8e09c
    X86_AT(c, 0x8be21u);
    push32(c, 0x8be26u); x86_call_known(c, 0x8e09cu, f_0008e09c); X86_RET(c, 0x8be26u);
    X86_TICK(c, 12);
    // 08be26  push dword ptr [0x1a50]
    X86_AT(c, 0x8be26u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A50u))); push32(c, v); }
    // 08be2c  call 0x92e3c
    X86_AT(c, 0x8be2cu);
    push32(c, 0x8be31u); x86_call_known(c, 0x92e3cu, f_00092e3c); X86_RET(c, 0x8be31u);
    X86_TICK(c, 11);
    // 08be31  mov eax, 0xffffffff
    X86_AT(c, 0x8be31u);
    c.r[0] = 0xFFFFFFFFu;
    // 08be36  add esp, 8
    X86_AT(c, 0x8be36u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08be39  jmp 0x8be5b
    X86_AT(c, 0x8be39u);
    goto L_8be5b;
L_8be3b:
    X86_TICK(c, 7);
    // 08be3b  call 0x8bac4
    X86_AT(c, 0x8be3bu);
    push32(c, 0x8be40u); x86_call_known(c, 0x8bac4u, f_0008bac4); X86_RET(c, 0x8be40u);
    X86_TICK(c, 19);
    // 08be40  push dword ptr [0x1a50]
    X86_AT(c, 0x8be40u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A50u))); push32(c, v); }
    // 08be46  push 0x101d0
    X86_AT(c, 0x8be46u);
    { uint32_t v = 0x101D0u; push32(c, v); }
    // 08be4b  push dword ptr [0x1a54]
    X86_AT(c, 0x8be4bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A54u))); push32(c, v); }
    // 08be51  call 0x8b4e4
    X86_AT(c, 0x8be51u);
    push32(c, 0x8be56u); x86_call_known(c, 0x8b4e4u, f_0008b4e4); X86_RET(c, 0x8be56u);
    X86_TICK(c, 4);
    // 08be56  sub eax, eax
    X86_AT(c, 0x8be56u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08be58  add esp, 0xc
    X86_AT(c, 0x8be58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_8be5b:
    X86_TICK(c, 10);
    // 08be5b  ret 
    X86_AT(c, 0x8be5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bdd4u, "ran off the end of a function");
}
void f_0008be5c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 08be5c  push dword ptr [0x1a50]
    X86_AT(c, 0x8be5cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A50u))); push32(c, v); }
    // 08be62  call 0x92e3c
    X86_AT(c, 0x8be62u);
    push32(c, 0x8be67u); x86_call_known(c, 0x92e3cu, f_00092e3c); X86_RET(c, 0x8be67u);
    X86_TICK(c, 7);
    // 08be67  call 0x8f1d2
    X86_AT(c, 0x8be67u);
    push32(c, 0x8be6cu); x86_call_known(c, 0x8f1d2u, f_0008f1d2); X86_RET(c, 0x8be6cu);
    X86_TICK(c, 12);
    // 08be6c  add esp, 4
    X86_AT(c, 0x8be6cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08be6f  ret 
    X86_AT(c, 0x8be6fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8be5cu, "ran off the end of a function");
}
void f_0008c084(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c084  push ebp
    X86_AT(c, 0x8c084u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c085  mov ebp, esp
    X86_AT(c, 0x8c085u);
    c.r[5] = c.r[4];
    // 08c087  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c087u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 08c08a  push dword ptr [ebp + 8]
    X86_AT(c, 0x8c08au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08c08d  push 1
    X86_AT(c, 0x8c08du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c08f  call 0x8f7f8
    X86_AT(c, 0x8c08fu);
    push32(c, 0x8c094u); x86_call_known(c, 0x8f7f8u, f_0008f7f8); X86_RET(c, 0x8c094u);
    X86_TICK(c, 16);
    // 08c094  leave 
    X86_AT(c, 0x8c094u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c095  ret 
    X86_AT(c, 0x8c095u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c084u, "ran off the end of a function");
}
void f_0008c13c(X86Cpu& c) {
    X86_TICK(c, 8);
    // 08c13c  push edi
    X86_AT(c, 0x8c13cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c13d  mov dword ptr [0x34a94], 1
    X86_AT(c, 0x8c13du);
    wr32((c.sbase[3] + (uint32_t)(0x34A94u)), 0x1u);
    // 08c147  mov byte ptr [0x34a9f], 0
    X86_AT(c, 0x8c147u);
    wr8((c.sbase[3] + (uint32_t)(0x34A9Fu)), 0x0u);
    // 08c14e  mov edi, 1
    X86_AT(c, 0x8c14eu);
    c.r[7] = 0x1u;
L_8c153:
    X86_TICK(c, 7);
    // 08c153  cmp edi, 0x10
    X86_AT(c, 0x8c153u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 08c156  jge 0x8c1aa
    X86_AT(c, 0x8c156u);
    if (x86_cc(c, 13)) { goto L_8c1aa; }
    X86_TICK(c, 41);
    // 08c158  mov dword ptr [0x34a98], edi
    X86_AT(c, 0x8c158u);
    wr32((c.sbase[3] + (uint32_t)(0x34A98u)), c.r[7]);
    // 08c15e  mov eax, 0x34490
    X86_AT(c, 0x8c15eu);
    c.r[0] = 0x34490u;
    // 08c163  lea edx, [edi*4]
    X86_AT(c, 0x8c163u);
    c.r[2] = (uint32_t)(c.r[7] * 4);
    // 08c16a  lea edx, [edx + edx*2]
    X86_AT(c, 0x8c16au);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 08c16d  mov cl, byte ptr [eax + edx*1 + 0x644]
    X86_AT(c, 0x8c16du);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x644u))));
    // 08c174  mov byte ptr [0x34a9c], cl
    X86_AT(c, 0x8c174u);
    wr8((c.sbase[3] + (uint32_t)(0x34A9Cu)), g8(c, 1));
    // 08c17a  mov cl, byte ptr [eax + edx*1 + 0x648]
    X86_AT(c, 0x8c17au);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x648u))));
    // 08c181  mov byte ptr [0x34a9d], cl
    X86_AT(c, 0x8c181u);
    wr8((c.sbase[3] + (uint32_t)(0x34A9Du)), g8(c, 1));
    // 08c187  mov dl, byte ptr [eax + edx*1 + 0x64c]
    X86_AT(c, 0x8c187u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x64Cu))));
    // 08c18e  mov byte ptr [0x34a9e], dl
    X86_AT(c, 0x8c18eu);
    wr8((c.sbase[3] + (uint32_t)(0x34A9Eu)), g8(c, 2));
    // 08c194  push 0x34a94
    X86_AT(c, 0x8c194u);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08c199  push 1
    X86_AT(c, 0x8c199u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c19b  add eax, 4
    X86_AT(c, 0x8c19bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 08c19e  push eax
    X86_AT(c, 0x8c19eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c19f  call 0x11c
    X86_AT(c, 0x8c19fu);
    push32(c, 0x8c1a4u); x86_call_known(c, 0x11cu, f_0000011c); X86_RET(c, 0x8c1a4u);
    X86_TICK(c, 11);
    // 08c1a4  inc edi
    X86_AT(c, 0x8c1a4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08c1a5  add esp, 0xc
    X86_AT(c, 0x8c1a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c1a8  jmp 0x8c153
    X86_AT(c, 0x8c1a8u);
    X86_POLL(c, 0x8c153u); goto L_8c153;
L_8c1aa:
    X86_TICK(c, 14);
    // 08c1aa  pop edi
    X86_AT(c, 0x8c1aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c1ab  ret 
    X86_AT(c, 0x8c1abu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c13cu, "ran off the end of a function");
}
void f_0008c1f4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c1f4  push ebp
    X86_AT(c, 0x8c1f4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c1f5  mov ebp, esp
    X86_AT(c, 0x8c1f5u);
    c.r[5] = c.r[4];
    // 08c1f7  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c1f7u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c1fb  push eax
    X86_AT(c, 0x8c1fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c1fc  push 0
    X86_AT(c, 0x8c1fcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c1fe  push 0x34494
    X86_AT(c, 0x8c1feu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c203  call 0x18e
    X86_AT(c, 0x8c203u);
    push32(c, 0x8c208u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c208u);
    X86_TICK(c, 16);
    // 08c208  leave 
    X86_AT(c, 0x8c208u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c209  ret 
    X86_AT(c, 0x8c209u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c1f4u, "ran off the end of a function");
}
void f_0008c20c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c20c  push ebp
    X86_AT(c, 0x8c20cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c20d  mov ebp, esp
    X86_AT(c, 0x8c20du);
    c.r[5] = c.r[4];
    // 08c20f  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c20fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c213  push eax
    X86_AT(c, 0x8c213u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c214  push 1
    X86_AT(c, 0x8c214u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c216  push 0x34494
    X86_AT(c, 0x8c216u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c21b  call 0x18e
    X86_AT(c, 0x8c21bu);
    push32(c, 0x8c220u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c220u);
    X86_TICK(c, 16);
    // 08c220  leave 
    X86_AT(c, 0x8c220u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c221  ret 
    X86_AT(c, 0x8c221u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c20cu, "ran off the end of a function");
}
void f_0008c224(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c224  push ebp
    X86_AT(c, 0x8c224u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c225  mov ebp, esp
    X86_AT(c, 0x8c225u);
    c.r[5] = c.r[4];
    // 08c227  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c227u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c22b  push eax
    X86_AT(c, 0x8c22bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c22c  push 2
    X86_AT(c, 0x8c22cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c22e  push 0x34494
    X86_AT(c, 0x8c22eu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c233  call 0x18e
    X86_AT(c, 0x8c233u);
    push32(c, 0x8c238u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c238u);
    X86_TICK(c, 16);
    // 08c238  leave 
    X86_AT(c, 0x8c238u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c239  ret 
    X86_AT(c, 0x8c239u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c224u, "ran off the end of a function");
}
void f_0008c23c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c23c  push ebp
    X86_AT(c, 0x8c23cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c23d  mov ebp, esp
    X86_AT(c, 0x8c23du);
    c.r[5] = c.r[4];
    // 08c23f  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c23fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c243  push eax
    X86_AT(c, 0x8c243u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c244  push 3
    X86_AT(c, 0x8c244u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c246  push 0x34494
    X86_AT(c, 0x8c246u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c24b  call 0x18e
    X86_AT(c, 0x8c24bu);
    push32(c, 0x8c250u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c250u);
    X86_TICK(c, 16);
    // 08c250  leave 
    X86_AT(c, 0x8c250u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c251  ret 
    X86_AT(c, 0x8c251u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c23cu, "ran off the end of a function");
}
void f_0008c254(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08c254  push ebp
    X86_AT(c, 0x8c254u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c255  mov ebp, esp
    X86_AT(c, 0x8c255u);
    c.r[5] = c.r[4];
    // 08c257  push edi
    X86_AT(c, 0x8c257u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c258  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8c258u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c25b  sar eax, 3
    X86_AT(c, 0x8c25bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 08c25e  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c25eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08c261  sar edx, 3
    X86_AT(c, 0x8c261u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08c264  shl edx, 5
    X86_AT(c, 0x8c264u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08c267  add edx, eax
    X86_AT(c, 0x8c267u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08c269  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8c269u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08c26c  sar edi, 3
    X86_AT(c, 0x8c26cu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 08c26f  shl edi, 0xa
    X86_AT(c, 0x8c26fu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 08c272  add edi, edx
    X86_AT(c, 0x8c272u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 08c274  push edi
    X86_AT(c, 0x8c274u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c275  push 0
    X86_AT(c, 0x8c275u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c277  push 0x34494
    X86_AT(c, 0x8c277u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c27c  call 0x18e
    X86_AT(c, 0x8c27cu);
    push32(c, 0x8c281u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c281u);
    X86_TICK(c, 22);
    // 08c281  add esp, 0xc
    X86_AT(c, 0x8c281u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c284  pop edi
    X86_AT(c, 0x8c284u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c285  leave 
    X86_AT(c, 0x8c285u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c286  ret 
    X86_AT(c, 0x8c286u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c254u, "ran off the end of a function");
}
void f_0008c288(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08c288  push ebp
    X86_AT(c, 0x8c288u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c289  mov ebp, esp
    X86_AT(c, 0x8c289u);
    c.r[5] = c.r[4];
    // 08c28b  push edi
    X86_AT(c, 0x8c28bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c28c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8c28cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c28f  sar eax, 3
    X86_AT(c, 0x8c28fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 08c292  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c292u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08c295  sar edx, 3
    X86_AT(c, 0x8c295u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08c298  shl edx, 5
    X86_AT(c, 0x8c298u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08c29b  add edx, eax
    X86_AT(c, 0x8c29bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08c29d  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8c29du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08c2a0  sar edi, 3
    X86_AT(c, 0x8c2a0u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 08c2a3  shl edi, 0xa
    X86_AT(c, 0x8c2a3u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 08c2a6  add edi, edx
    X86_AT(c, 0x8c2a6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 08c2a8  push edi
    X86_AT(c, 0x8c2a8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c2a9  push 1
    X86_AT(c, 0x8c2a9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c2ab  push 0x34494
    X86_AT(c, 0x8c2abu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c2b0  call 0x18e
    X86_AT(c, 0x8c2b0u);
    push32(c, 0x8c2b5u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c2b5u);
    X86_TICK(c, 22);
    // 08c2b5  add esp, 0xc
    X86_AT(c, 0x8c2b5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c2b8  pop edi
    X86_AT(c, 0x8c2b8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c2b9  leave 
    X86_AT(c, 0x8c2b9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c2ba  ret 
    X86_AT(c, 0x8c2bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c288u, "ran off the end of a function");
}
void f_0008c2bc(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08c2bc  push ebp
    X86_AT(c, 0x8c2bcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c2bd  mov ebp, esp
    X86_AT(c, 0x8c2bdu);
    c.r[5] = c.r[4];
    // 08c2bf  push dword ptr [ebp + 8]
    X86_AT(c, 0x8c2bfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08c2c2  push 0x34494
    X86_AT(c, 0x8c2c2u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c2c7  call 0x431
    X86_AT(c, 0x8c2c7u);
    push32(c, 0x8c2ccu); x86_call_known(c, 0x431u, f_00000431); X86_RET(c, 0x8c2ccu);
    X86_TICK(c, 16);
    // 08c2cc  leave 
    X86_AT(c, 0x8c2ccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c2cd  ret 
    X86_AT(c, 0x8c2cdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c2bcu, "ran off the end of a function");
}
void f_0008c2e8(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08c2e8  push ebp
    X86_AT(c, 0x8c2e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c2e9  mov ebp, esp
    X86_AT(c, 0x8c2e9u);
    c.r[5] = c.r[4];
    // 08c2eb  push edi
    X86_AT(c, 0x8c2ebu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c2ec  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8c2ecu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c2ef  sar eax, 3
    X86_AT(c, 0x8c2efu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 08c2f2  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c2f2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08c2f5  sar edx, 3
    X86_AT(c, 0x8c2f5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08c2f8  shl edx, 5
    X86_AT(c, 0x8c2f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08c2fb  add edx, eax
    X86_AT(c, 0x8c2fbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08c2fd  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8c2fdu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08c300  sar edi, 3
    X86_AT(c, 0x8c300u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 08c303  shl edi, 0xa
    X86_AT(c, 0x8c303u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 08c306  add edi, edx
    X86_AT(c, 0x8c306u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 08c308  push edi
    X86_AT(c, 0x8c308u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c309  push 2
    X86_AT(c, 0x8c309u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c30b  push 0x34494
    X86_AT(c, 0x8c30bu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c310  call 0x18e
    X86_AT(c, 0x8c310u);
    push32(c, 0x8c315u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c315u);
    X86_TICK(c, 22);
    // 08c315  add esp, 0xc
    X86_AT(c, 0x8c315u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c318  pop edi
    X86_AT(c, 0x8c318u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c319  leave 
    X86_AT(c, 0x8c319u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c31a  ret 
    X86_AT(c, 0x8c31au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c2e8u, "ran off the end of a function");
}
void f_0008c31c(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08c31c  push ebp
    X86_AT(c, 0x8c31cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c31d  mov ebp, esp
    X86_AT(c, 0x8c31du);
    c.r[5] = c.r[4];
    // 08c31f  push edi
    X86_AT(c, 0x8c31fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c320  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8c320u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c323  sar eax, 3
    X86_AT(c, 0x8c323u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 08c326  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c326u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08c329  sar edx, 3
    X86_AT(c, 0x8c329u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08c32c  shl edx, 5
    X86_AT(c, 0x8c32cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08c32f  add edx, eax
    X86_AT(c, 0x8c32fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08c331  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8c331u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08c334  sar edi, 3
    X86_AT(c, 0x8c334u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 08c337  shl edi, 0xa
    X86_AT(c, 0x8c337u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 08c33a  add edi, edx
    X86_AT(c, 0x8c33au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 08c33c  push edi
    X86_AT(c, 0x8c33cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c33d  push 3
    X86_AT(c, 0x8c33du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c33f  push 0x34494
    X86_AT(c, 0x8c33fu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c344  call 0x18e
    X86_AT(c, 0x8c344u);
    push32(c, 0x8c349u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c349u);
    X86_TICK(c, 22);
    // 08c349  add esp, 0xc
    X86_AT(c, 0x8c349u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c34c  pop edi
    X86_AT(c, 0x8c34cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c34d  leave 
    X86_AT(c, 0x8c34du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c34e  ret 
    X86_AT(c, 0x8c34eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c31cu, "ran off the end of a function");
}
void f_0008c364(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08c364  push ebp
    X86_AT(c, 0x8c364u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c365  mov ebp, esp
    X86_AT(c, 0x8c365u);
    c.r[5] = c.r[4];
    // 08c367  push dword ptr [ebp + 8]
    X86_AT(c, 0x8c367u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08c36a  push 0x34494
    X86_AT(c, 0x8c36au);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c36f  call 0x1fd
    X86_AT(c, 0x8c36fu);
    push32(c, 0x8c374u); x86_call_known(c, 0x1fdu, f_000001fd); X86_RET(c, 0x8c374u);
    X86_TICK(c, 16);
    // 08c374  leave 
    X86_AT(c, 0x8c374u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c375  ret 
    X86_AT(c, 0x8c375u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c364u, "ran off the end of a function");
}
void f_0008c378(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08c378  push ebp
    X86_AT(c, 0x8c378u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c379  mov ebp, esp
    X86_AT(c, 0x8c379u);
    c.r[5] = c.r[4];
    // 08c37b  push dword ptr [ebp + 8]
    X86_AT(c, 0x8c37bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08c37e  push 0x34494
    X86_AT(c, 0x8c37eu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c383  call 0x144
    X86_AT(c, 0x8c383u);
    push32(c, 0x8c388u); x86_call_known(c, 0x144u, f_00000144); X86_RET(c, 0x8c388u);
    X86_TICK(c, 16);
    // 08c388  leave 
    X86_AT(c, 0x8c388u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c389  ret 
    X86_AT(c, 0x8c389u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c378u, "ran off the end of a function");
}
void f_0008c38c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08c38c  push ebp
    X86_AT(c, 0x8c38cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c38d  mov ebp, esp
    X86_AT(c, 0x8c38du);
    c.r[5] = c.r[4];
    // 08c38f  push edi
    X86_AT(c, 0x8c38fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c390  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8c390u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c393  inc edi
    X86_AT(c, 0x8c393u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08c394  cmp edi, 4
    X86_AT(c, 0x8c394u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 08c397  jne 0x8c39b
    X86_AT(c, 0x8c397u);
    if (x86_cc(c, 5)) { goto L_8c39b; }
    X86_TICK(c, 2);
    // 08c399  sub edi, edi
    X86_AT(c, 0x8c399u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_8c39b:
    X86_TICK(c, 13);
    // 08c39b  push edi
    X86_AT(c, 0x8c39bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c39c  push 0
    X86_AT(c, 0x8c39cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c39e  push 0x34494
    X86_AT(c, 0x8c39eu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c3a3  call 0x166
    X86_AT(c, 0x8c3a3u);
    push32(c, 0x8c3a8u); x86_call_known(c, 0x166u, f_00000166); X86_RET(c, 0x8c3a8u);
    X86_TICK(c, 22);
    // 08c3a8  add esp, 0xc
    X86_AT(c, 0x8c3a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c3ab  pop edi
    X86_AT(c, 0x8c3abu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c3ac  leave 
    X86_AT(c, 0x8c3acu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c3ad  ret 
    X86_AT(c, 0x8c3adu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c38cu, "ran off the end of a function");
}
void f_0008c3b0(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08c3b0  push ebp
    X86_AT(c, 0x8c3b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c3b1  mov ebp, esp
    X86_AT(c, 0x8c3b1u);
    c.r[5] = c.r[4];
    // 08c3b3  push edi
    X86_AT(c, 0x8c3b3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c3b4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8c3b4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c3b7  and edi, edi
    X86_AT(c, 0x8c3b7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08c3b9  jne 0x8c3c6
    X86_AT(c, 0x8c3b9u);
    if (x86_cc(c, 5)) { goto L_8c3c6; }
    X86_TICK(c, 9);
    // 08c3bb  mov word ptr [0x34b94], 0xa
    X86_AT(c, 0x8c3bbu);
    wr16((c.sbase[3] + (uint32_t)(0x34B94u)), 0xAu);
    // 08c3c4  jmp 0x8c3d8
    X86_AT(c, 0x8c3c4u);
    goto L_8c3d8;
L_8c3c6:
    X86_TICK(c, 7);
    // 08c3c6  cmp edi, 1
    X86_AT(c, 0x8c3c6u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 08c3c9  jne 0x8c4e5
    X86_AT(c, 0x8c3c9u);
    if (x86_cc(c, 5)) { goto L_8c4e5; }
    X86_TICK(c, 2);
    // 08c3cf  mov word ptr [0x34b96], 0xa
    X86_AT(c, 0x8c3cfu);
    wr16((c.sbase[3] + (uint32_t)(0x34B96u)), 0xAu);
L_8c3d8:
    X86_TICK(c, 13);
    // 08c3d8  push 1
    X86_AT(c, 0x8c3d8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c3da  push edi
    X86_AT(c, 0x8c3dau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c3db  push 0x34494
    X86_AT(c, 0x8c3dbu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c3e0  call 0x6a
    X86_AT(c, 0x8c3e0u);
    push32(c, 0x8c3e5u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c3e5u);
    X86_TICK(c, 13);
    // 08c3e5  push 0xa
    X86_AT(c, 0x8c3e5u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 08c3e7  push edi
    X86_AT(c, 0x8c3e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c3e8  push 0x34494
    X86_AT(c, 0x8c3e8u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c3ed  call 0x6a
    X86_AT(c, 0x8c3edu);
    push32(c, 0x8c3f2u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c3f2u);
    X86_TICK(c, 9);
    // 08c3f2  push edi
    X86_AT(c, 0x8c3f2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c3f3  call 0x8c378
    X86_AT(c, 0x8c3f3u);
    push32(c, 0x8c3f8u); x86_call_known(c, 0x8c378u, f_0008c378); X86_RET(c, 0x8c3f8u);
    X86_TICK(c, 22);
    // 08c3f8  push dword ptr [0x34b90]
    X86_AT(c, 0x8c3f8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34B90u))); push32(c, v); }
    // 08c3fe  push dword ptr [0x34b8c]
    X86_AT(c, 0x8c3feu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34B8Cu))); push32(c, v); }
    // 08c404  push dword ptr [0x34b88]
    X86_AT(c, 0x8c404u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34B88u))); push32(c, v); }
    // 08c40a  call 0x8c254
    X86_AT(c, 0x8c40au);
    push32(c, 0x8c40fu); x86_call_known(c, 0x8c254u, f_0008c254); X86_RET(c, 0x8c40fu);
    X86_TICK(c, 22);
    // 08c40f  push dword ptr [0x34adc]
    X86_AT(c, 0x8c40fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34ADCu))); push32(c, v); }
    // 08c415  push dword ptr [0x34ad8]
    X86_AT(c, 0x8c415u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34AD8u))); push32(c, v); }
    // 08c41b  push dword ptr [0x34ad4]
    X86_AT(c, 0x8c41bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34AD4u))); push32(c, v); }
    // 08c421  call 0x8c288
    X86_AT(c, 0x8c421u);
    push32(c, 0x8c426u); x86_call_known(c, 0x8c288u, f_0008c288); X86_RET(c, 0x8c426u);
    X86_TICK(c, 22);
    // 08c426  push dword ptr [0x34b78]
    X86_AT(c, 0x8c426u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34B78u))); push32(c, v); }
    // 08c42c  push dword ptr [0x34b74]
    X86_AT(c, 0x8c42cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34B74u))); push32(c, v); }
    // 08c432  push dword ptr [0x34b70]
    X86_AT(c, 0x8c432u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34B70u))); push32(c, v); }
    // 08c438  call 0x8c2e8
    X86_AT(c, 0x8c438u);
    push32(c, 0x8c43du); x86_call_known(c, 0x8c2e8u, f_0008c2e8); X86_RET(c, 0x8c43du);
    X86_TICK(c, 24);
    // 08c43d  add esp, 0x40
    X86_AT(c, 0x8c43du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08c440  push dword ptr [0x34adc]
    X86_AT(c, 0x8c440u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34ADCu))); push32(c, v); }
    // 08c446  push dword ptr [0x34ad8]
    X86_AT(c, 0x8c446u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34AD8u))); push32(c, v); }
    // 08c44c  push dword ptr [0x34ad4]
    X86_AT(c, 0x8c44cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34AD4u))); push32(c, v); }
    // 08c452  call 0x8c31c
    X86_AT(c, 0x8c452u);
    push32(c, 0x8c457u); x86_call_known(c, 0x8c31cu, f_0008c31c); X86_RET(c, 0x8c457u);
    X86_TICK(c, 19);
    // 08c457  mov word ptr [0x34a94], 0
    X86_AT(c, 0x8c457u);
    wr16((c.sbase[3] + (uint32_t)(0x34A94u)), 0x0u);
    // 08c460  mov word ptr [0x34a96], 0
    X86_AT(c, 0x8c460u);
    wr16((c.sbase[3] + (uint32_t)(0x34A96u)), 0x0u);
    // 08c469  mov word ptr [0x34a98], 0x13f
    X86_AT(c, 0x8c469u);
    wr16((c.sbase[3] + (uint32_t)(0x34A98u)), 0x13Fu);
    // 08c472  mov word ptr [0x34a9a], 0xef
    X86_AT(c, 0x8c472u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Au)), 0xEFu);
    // 08c47b  push 0x34a94
    X86_AT(c, 0x8c47bu);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08c480  push 0x34494
    X86_AT(c, 0x8c480u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c485  call 0xf8
    X86_AT(c, 0x8c485u);
    push32(c, 0x8c48au); x86_call_known(c, 0xf8u, f_000000f8); X86_RET(c, 0x8c48au);
    X86_TICK(c, 15);
    // 08c48a  movsx eax, word ptr [0x34b98]
    X86_AT(c, 0x8c48au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34B98u)));
    // 08c491  push eax
    X86_AT(c, 0x8c491u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c492  call 0x8c364
    X86_AT(c, 0x8c492u);
    push32(c, 0x8c497u); x86_call_known(c, 0x8c364u, f_0008c364); X86_RET(c, 0x8c497u);
    X86_TICK(c, 17);
    // 08c497  movsx eax, word ptr [0x34b9a]
    X86_AT(c, 0x8c497u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34B9Au)));
    // 08c49e  push eax
    X86_AT(c, 0x8c49eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c49f  push 0x34494
    X86_AT(c, 0x8c49fu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c4a4  call 0x245
    X86_AT(c, 0x8c4a4u);
    push32(c, 0x8c4a9u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8c4a9u);
    X86_TICK(c, 15);
    // 08c4a9  push 0
    X86_AT(c, 0x8c4a9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c4ab  push 0
    X86_AT(c, 0x8c4abu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c4ad  push 0
    X86_AT(c, 0x8c4adu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c4af  push 0x34494
    X86_AT(c, 0x8c4afu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c4b4  call 0xca
    X86_AT(c, 0x8c4b4u);
    push32(c, 0x8c4b9u); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c4b9u);
    X86_TICK(c, 17);
    // 08c4b9  add esp, 0x30
    X86_AT(c, 0x8c4b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 08c4bc  push 2
    X86_AT(c, 0x8c4bcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c4be  push 2
    X86_AT(c, 0x8c4beu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c4c0  push 2
    X86_AT(c, 0x8c4c0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c4c2  push 0x34494
    X86_AT(c, 0x8c4c2u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c4c7  call 0xca
    X86_AT(c, 0x8c4c7u);
    push32(c, 0x8c4ccu); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c4ccu);
    X86_TICK(c, 15);
    // 08c4cc  push 0xf0
    X86_AT(c, 0x8c4ccu);
    { uint32_t v = 0xF0u; push32(c, v); }
    // 08c4d1  push 0x140
    X86_AT(c, 0x8c4d1u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 08c4d6  push 3
    X86_AT(c, 0x8c4d6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c4d8  push 0x34494
    X86_AT(c, 0x8c4d8u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c4dd  call 0xca
    X86_AT(c, 0x8c4ddu);
    push32(c, 0x8c4e2u); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c4e2u);
    X86_TICK(c, 2);
    // 08c4e2  add esp, 0x20
    X86_AT(c, 0x8c4e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_8c4e5:
    X86_TICK(c, 20);
    // 08c4e5  pop edi
    X86_AT(c, 0x8c4e5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c4e6  leave 
    X86_AT(c, 0x8c4e6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c4e7  ret 
    X86_AT(c, 0x8c4e7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c3b0u, "ran off the end of a function");
}
void f_0008c540(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08c540  push ebp
    X86_AT(c, 0x8c540u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c541  mov ebp, esp
    X86_AT(c, 0x8c541u);
    c.r[5] = c.r[4];
    // 08c543  push edi
    X86_AT(c, 0x8c543u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c544  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8c544u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c547  and edi, edi
    X86_AT(c, 0x8c547u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08c549  jne 0x8c556
    X86_AT(c, 0x8c549u);
    if (x86_cc(c, 5)) { goto L_8c556; }
    X86_TICK(c, 9);
    // 08c54b  mov word ptr [0x34b94], 3
    X86_AT(c, 0x8c54bu);
    wr16((c.sbase[3] + (uint32_t)(0x34B94u)), 0x3u);
    // 08c554  jmp 0x8c568
    X86_AT(c, 0x8c554u);
    goto L_8c568;
L_8c556:
    X86_TICK(c, 7);
    // 08c556  cmp edi, 1
    X86_AT(c, 0x8c556u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 08c559  jne 0x8c637
    X86_AT(c, 0x8c559u);
    if (x86_cc(c, 5)) { goto L_8c637; }
    X86_TICK(c, 2);
    // 08c55f  mov word ptr [0x34b96], 3
    X86_AT(c, 0x8c55fu);
    wr16((c.sbase[3] + (uint32_t)(0x34B96u)), 0x3u);
L_8c568:
    X86_TICK(c, 13);
    // 08c568  push 1
    X86_AT(c, 0x8c568u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c56a  push edi
    X86_AT(c, 0x8c56au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c56b  push 0x34494
    X86_AT(c, 0x8c56bu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c570  call 0x6a
    X86_AT(c, 0x8c570u);
    push32(c, 0x8c575u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c575u);
    X86_TICK(c, 13);
    // 08c575  push 3
    X86_AT(c, 0x8c575u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c577  push edi
    X86_AT(c, 0x8c577u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c578  push 0x34494
    X86_AT(c, 0x8c578u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c57d  call 0x6a
    X86_AT(c, 0x8c57du);
    push32(c, 0x8c582u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c582u);
    X86_TICK(c, 9);
    // 08c582  push edi
    X86_AT(c, 0x8c582u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c583  call 0x8c378
    X86_AT(c, 0x8c583u);
    push32(c, 0x8c588u); x86_call_known(c, 0x8c378u, f_0008c378); X86_RET(c, 0x8c588u);
    X86_TICK(c, 19);
    // 08c588  mov word ptr [0x34a94], 0
    X86_AT(c, 0x8c588u);
    wr16((c.sbase[3] + (uint32_t)(0x34A94u)), 0x0u);
    // 08c591  mov word ptr [0x34a96], 0
    X86_AT(c, 0x8c591u);
    wr16((c.sbase[3] + (uint32_t)(0x34A96u)), 0x0u);
    // 08c59a  mov word ptr [0x34a98], 0x27f
    X86_AT(c, 0x8c59au);
    wr16((c.sbase[3] + (uint32_t)(0x34A98u)), 0x27Fu);
    // 08c5a3  mov word ptr [0x34a9a], 0x1df
    X86_AT(c, 0x8c5a3u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Au)), 0x1DFu);
    // 08c5ac  push 0x34a94
    X86_AT(c, 0x8c5acu);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08c5b1  push 0x34494
    X86_AT(c, 0x8c5b1u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c5b6  call 0xf8
    X86_AT(c, 0x8c5b6u);
    push32(c, 0x8c5bbu); x86_call_known(c, 0xf8u, f_000000f8); X86_RET(c, 0x8c5bbu);
    X86_TICK(c, 7);
    // 08c5bb  call 0x8c13c
    X86_AT(c, 0x8c5bbu);
    push32(c, 0x8c5c0u); x86_call_known(c, 0x8c13cu, f_0008c13c); X86_RET(c, 0x8c5c0u);
    X86_TICK(c, 9);
    // 08c5c0  push 0xf
    X86_AT(c, 0x8c5c0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08c5c2  call 0x8c1f4
    X86_AT(c, 0x8c5c2u);
    push32(c, 0x8c5c7u); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8c5c7u);
    X86_TICK(c, 9);
    // 08c5c7  push 0
    X86_AT(c, 0x8c5c7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c5c9  call 0x8c20c
    X86_AT(c, 0x8c5c9u);
    push32(c, 0x8c5ceu); x86_call_known(c, 0x8c20cu, f_0008c20c); X86_RET(c, 0x8c5ceu);
    X86_TICK(c, 9);
    // 08c5ce  push 0xd
    X86_AT(c, 0x8c5ceu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 08c5d0  call 0x8c224
    X86_AT(c, 0x8c5d0u);
    push32(c, 0x8c5d5u); x86_call_known(c, 0x8c224u, f_0008c224); X86_RET(c, 0x8c5d5u);
    X86_TICK(c, 9);
    // 08c5d5  push 0
    X86_AT(c, 0x8c5d5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c5d7  call 0x8c23c
    X86_AT(c, 0x8c5d7u);
    push32(c, 0x8c5dcu); x86_call_known(c, 0x8c23cu, f_0008c23c); X86_RET(c, 0x8c5dcu);
    X86_TICK(c, 15);
    // 08c5dc  movsx eax, word ptr [0x34b98]
    X86_AT(c, 0x8c5dcu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34B98u)));
    // 08c5e3  push eax
    X86_AT(c, 0x8c5e3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c5e4  call 0x8c364
    X86_AT(c, 0x8c5e4u);
    push32(c, 0x8c5e9u); x86_call_known(c, 0x8c364u, f_0008c364); X86_RET(c, 0x8c5e9u);
    X86_TICK(c, 17);
    // 08c5e9  movsx eax, word ptr [0x34b9a]
    X86_AT(c, 0x8c5e9u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34B9Au)));
    // 08c5f0  push eax
    X86_AT(c, 0x8c5f0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c5f1  push 0x34494
    X86_AT(c, 0x8c5f1u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c5f6  call 0x245
    X86_AT(c, 0x8c5f6u);
    push32(c, 0x8c5fbu); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8c5fbu);
    X86_TICK(c, 17);
    // 08c5fb  add esp, 0x40
    X86_AT(c, 0x8c5fbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08c5fe  push 0
    X86_AT(c, 0x8c5feu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c600  push 0
    X86_AT(c, 0x8c600u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c602  push 0
    X86_AT(c, 0x8c602u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c604  push 0x34494
    X86_AT(c, 0x8c604u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c609  call 0xca
    X86_AT(c, 0x8c609u);
    push32(c, 0x8c60eu); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c60eu);
    X86_TICK(c, 15);
    // 08c60e  push 1
    X86_AT(c, 0x8c60eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c610  push 1
    X86_AT(c, 0x8c610u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c612  push 2
    X86_AT(c, 0x8c612u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c614  push 0x34494
    X86_AT(c, 0x8c614u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c619  call 0xca
    X86_AT(c, 0x8c619u);
    push32(c, 0x8c61eu); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c61eu);
    X86_TICK(c, 15);
    // 08c61e  push 0x1e0
    X86_AT(c, 0x8c61eu);
    { uint32_t v = 0x1E0u; push32(c, v); }
    // 08c623  push 0x280
    X86_AT(c, 0x8c623u);
    { uint32_t v = 0x280u; push32(c, v); }
    // 08c628  push 3
    X86_AT(c, 0x8c628u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c62a  push 0x34494
    X86_AT(c, 0x8c62au);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c62f  call 0xca
    X86_AT(c, 0x8c62fu);
    push32(c, 0x8c634u); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c634u);
    X86_TICK(c, 2);
    // 08c634  add esp, 0x30
    X86_AT(c, 0x8c634u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_8c637:
    X86_TICK(c, 20);
    // 08c637  pop edi
    X86_AT(c, 0x8c637u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c638  leave 
    X86_AT(c, 0x8c638u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c639  ret 
    X86_AT(c, 0x8c639u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c540u, "ran off the end of a function");
}
void f_0008c63c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 08c63c  push 0x600
    X86_AT(c, 0x8c63cu);
    { uint32_t v = 0x600u; push32(c, v); }
    // 08c641  push 0x34494
    X86_AT(c, 0x8c641u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c646  call 0x48
    X86_AT(c, 0x8c646u);
    push32(c, 0x8c64bu); x86_call_known(c, 0x48u, f_00000048); X86_RET(c, 0x8c64bu);
    X86_TICK(c, 9);
    // 08c64b  add esp, 8
    X86_AT(c, 0x8c64bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08c64e  and eax, eax
    X86_AT(c, 0x8c64eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08c650  je 0x8c65c
    X86_AT(c, 0x8c650u);
    if (x86_cc(c, 4)) { goto L_8c65c; }
    X86_TICK(c, 9);
    // 08c652  mov eax, 0xffffffff
    X86_AT(c, 0x8c652u);
    c.r[0] = 0xFFFFFFFFu;
    // 08c657  jmp 0x8c716
    X86_AT(c, 0x8c657u);
    goto L_8c716;
L_8c65c:
    X86_TICK(c, 17);
    // 08c65c  mov word ptr [0x34b94], 3
    X86_AT(c, 0x8c65cu);
    wr16((c.sbase[3] + (uint32_t)(0x34B94u)), 0x3u);
    // 08c665  mov eax, 3
    X86_AT(c, 0x8c665u);
    c.r[0] = 0x3u;
    // 08c66a  push eax
    X86_AT(c, 0x8c66au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c66b  push 0
    X86_AT(c, 0x8c66bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c66d  push 0x34494
    X86_AT(c, 0x8c66du);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c672  call 0x6a
    X86_AT(c, 0x8c672u);
    push32(c, 0x8c677u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c677u);
    X86_TICK(c, 19);
    // 08c677  mov ax, 3
    X86_AT(c, 0x8c677u);
    s16(c, 0, 0x3u);
    // 08c67b  mov word ptr [0x34b96], ax
    X86_AT(c, 0x8c67bu);
    wr16((c.sbase[3] + (uint32_t)(0x34B96u)), (c.r[0] & 0xFFFFu));
    // 08c681  mov eax, 3
    X86_AT(c, 0x8c681u);
    c.r[0] = 0x3u;
    // 08c686  push eax
    X86_AT(c, 0x8c686u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c687  push 1
    X86_AT(c, 0x8c687u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c689  push 0x34494
    X86_AT(c, 0x8c689u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c68e  call 0x6a
    X86_AT(c, 0x8c68eu);
    push32(c, 0x8c693u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c693u);
    X86_TICK(c, 15);
    // 08c693  mov ax, 9
    X86_AT(c, 0x8c693u);
    s16(c, 0, 0x9u);
    // 08c697  mov word ptr [0x34b98], ax
    X86_AT(c, 0x8c697u);
    wr16((c.sbase[3] + (uint32_t)(0x34B98u)), (c.r[0] & 0xFFFFu));
    // 08c69d  mov eax, 9
    X86_AT(c, 0x8c69du);
    c.r[0] = 0x9u;
    // 08c6a2  push eax
    X86_AT(c, 0x8c6a2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c6a3  call 0x8c364
    X86_AT(c, 0x8c6a3u);
    push32(c, 0x8c6a8u); x86_call_known(c, 0x8c364u, f_0008c364); X86_RET(c, 0x8c6a8u);
    X86_TICK(c, 17);
    // 08c6a8  mov ax, 0x22
    X86_AT(c, 0x8c6a8u);
    s16(c, 0, 0x22u);
    // 08c6ac  mov word ptr [0x34b9a], ax
    X86_AT(c, 0x8c6acu);
    wr16((c.sbase[3] + (uint32_t)(0x34B9Au)), (c.r[0] & 0xFFFFu));
    // 08c6b2  mov eax, 0x22
    X86_AT(c, 0x8c6b2u);
    c.r[0] = 0x22u;
    // 08c6b7  push eax
    X86_AT(c, 0x8c6b7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c6b8  push 0x34494
    X86_AT(c, 0x8c6b8u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c6bd  call 0x245
    X86_AT(c, 0x8c6bdu);
    push32(c, 0x8c6c2u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8c6c2u);
    X86_TICK(c, 9);
    // 08c6c2  push 0
    X86_AT(c, 0x8c6c2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c6c4  call 0x8c378
    X86_AT(c, 0x8c6c4u);
    push32(c, 0x8c6c9u); x86_call_known(c, 0x8c378u, f_0008c378); X86_RET(c, 0x8c6c9u);
    X86_TICK(c, 9);
    // 08c6c9  push 0
    X86_AT(c, 0x8c6c9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c6cb  call 0x8c38c
    X86_AT(c, 0x8c6cbu);
    push32(c, 0x8c6d0u); x86_call_known(c, 0x8c38cu, f_0008c38c); X86_RET(c, 0x8c6d0u);
    X86_TICK(c, 7);
    // 08c6d0  call 0x8c13c
    X86_AT(c, 0x8c6d0u);
    push32(c, 0x8c6d5u); x86_call_known(c, 0x8c13cu, f_0008c13c); X86_RET(c, 0x8c6d5u);
    X86_TICK(c, 9);
    // 08c6d5  push 0xf
    X86_AT(c, 0x8c6d5u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08c6d7  call 0x8c1f4
    X86_AT(c, 0x8c6d7u);
    push32(c, 0x8c6dcu); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8c6dcu);
    X86_TICK(c, 9);
    // 08c6dc  push 0
    X86_AT(c, 0x8c6dcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c6de  call 0x8c20c
    X86_AT(c, 0x8c6deu);
    push32(c, 0x8c6e3u); x86_call_known(c, 0x8c20cu, f_0008c20c); X86_RET(c, 0x8c6e3u);
    X86_TICK(c, 9);
    // 08c6e3  push 0xd
    X86_AT(c, 0x8c6e3u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 08c6e5  call 0x8c224
    X86_AT(c, 0x8c6e5u);
    push32(c, 0x8c6eau); x86_call_known(c, 0x8c224u, f_0008c224); X86_RET(c, 0x8c6eau);
    X86_TICK(c, 11);
    // 08c6ea  push 0
    X86_AT(c, 0x8c6eau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c6ec  push 0x34494
    X86_AT(c, 0x8c6ecu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c6f1  call 0x39c
    X86_AT(c, 0x8c6f1u);
    push32(c, 0x8c6f6u); x86_call_known(c, 0x39cu, f_0000039c); X86_RET(c, 0x8c6f6u);
    X86_TICK(c, 13);
    // 08c6f6  add esp, 0x40
    X86_AT(c, 0x8c6f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08c6f9  push 0
    X86_AT(c, 0x8c6f9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c6fb  push 0x34494
    X86_AT(c, 0x8c6fbu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c700  call 0x3be
    X86_AT(c, 0x8c700u);
    push32(c, 0x8c705u); x86_call_known(c, 0x3beu, f_000003be); X86_RET(c, 0x8c705u);
    X86_TICK(c, 11);
    // 08c705  push 0
    X86_AT(c, 0x8c705u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c707  push 0x34494
    X86_AT(c, 0x8c707u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c70c  call 0x3e0
    X86_AT(c, 0x8c70cu);
    push32(c, 0x8c711u); x86_call_known(c, 0x3e0u, f_000003e0); X86_RET(c, 0x8c711u);
    X86_TICK(c, 4);
    // 08c711  sub eax, eax
    X86_AT(c, 0x8c711u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08c713  add esp, 0x10
    X86_AT(c, 0x8c713u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_8c716:
    X86_TICK(c, 10);
    // 08c716  ret 
    X86_AT(c, 0x8c716u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c63cu, "ran off the end of a function");
}
}

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
void f_0008abf4(X86Cpu& c) {
    X86_TICK(c, 26);
    // 08abf4  push ebp
    X86_AT(c, 0x8abf4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08abf5  mov ebp, esp
    X86_AT(c, 0x8abf5u);
    c.r[5] = c.r[4];
    // 08abf7  push ebx
    X86_AT(c, 0x8abf7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08abf8  push edi
    X86_AT(c, 0x8abf8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08abf9  mov bl, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8abf9u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08abfc  mov edi, 0xffffffff
    X86_AT(c, 0x8abfcu);
    c.r[7] = 0xFFFFFFFFu;
    // 08ac01  cmp byte ptr [ebp + 8], 0
    X86_AT(c, 0x8ac01u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 1);
    // 08ac05  jne 0x8ac0e
    X86_AT(c, 0x8ac05u);
    if (x86_cc(c, 5)) { goto L_8ac0e; }
    X86_TICK(c, 9);
    // 08ac07  sub eax, eax
    X86_AT(c, 0x8ac07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08ac09  jmp 0x8ad6c
    X86_AT(c, 0x8ac09u);
    goto L_8ad6c;
L_8ac0e:
    X86_TICK(c, 12);
    // 08ac0e  cmp byte ptr [ebp + 8], 2
    X86_AT(c, 0x8ac0eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x2u, 0, 1);
    // 08ac12  jne 0x8ac19
    X86_AT(c, 0x8ac12u);
    if (x86_cc(c, 5)) { goto L_8ac19; }
    X86_TICK(c, 2);
    // 08ac14  mov edi, 0x100
    X86_AT(c, 0x8ac14u);
    c.r[7] = 0x100u;
L_8ac19:
    X86_TICK(c, 12);
    // 08ac19  cmp byte ptr [ebp + 8], 0x10
    X86_AT(c, 0x8ac19u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x10u, 0, 1);
    // 08ac1d  jne 0x8ac24
    X86_AT(c, 0x8ac1du);
    if (x86_cc(c, 5)) { goto L_8ac24; }
    X86_TICK(c, 2);
    // 08ac1f  mov edi, 0x102
    X86_AT(c, 0x8ac1fu);
    c.r[7] = 0x102u;
L_8ac24:
    X86_TICK(c, 12);
    // 08ac24  cmp byte ptr [ebp + 8], 0x22
    X86_AT(c, 0x8ac24u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x22u, 0, 1);
    // 08ac28  jne 0x8ac2f
    X86_AT(c, 0x8ac28u);
    if (x86_cc(c, 5)) { goto L_8ac2f; }
    X86_TICK(c, 2);
    // 08ac2a  mov edi, 0x104
    X86_AT(c, 0x8ac2au);
    c.r[7] = 0x104u;
L_8ac2f:
    X86_TICK(c, 12);
    // 08ac2f  cmp byte ptr [ebp + 8], 0x23
    X86_AT(c, 0x8ac2fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x23u, 0, 1);
    // 08ac33  jne 0x8ac3a
    X86_AT(c, 0x8ac33u);
    if (x86_cc(c, 5)) { goto L_8ac3a; }
    X86_TICK(c, 2);
    // 08ac35  mov edi, 0x108
    X86_AT(c, 0x8ac35u);
    c.r[7] = 0x108u;
L_8ac3a:
    X86_TICK(c, 12);
    // 08ac3a  cmp byte ptr [ebp + 8], 0x80
    X86_AT(c, 0x8ac3au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x80u, 0, 1);
    // 08ac3e  jne 0x8acb5
    X86_AT(c, 0x8ac3eu);
    if (x86_cc(c, 5)) { goto L_8acb5; }
    X86_TICK(c, 14);
    // 08ac44  movzx ebx, bl
    X86_AT(c, 0x8ac44u);
    c.r[3] = g8(c, 3);
    // 08ac47  mov eax, ebx
    X86_AT(c, 0x8ac47u);
    c.r[0] = c.r[3];
    // 08ac49  and eax, 0x80
    X86_AT(c, 0x8ac49u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x80u, 4); }
    // 08ac4e  cmp eax, 0x80
    X86_AT(c, 0x8ac4eu);
    (void)x86_sub(c, c.r[0], 0x80u, 0, 4);
    // 08ac53  jne 0x8ac5a
    X86_AT(c, 0x8ac53u);
    if (x86_cc(c, 5)) { goto L_8ac5a; }
    X86_TICK(c, 2);
    // 08ac55  mov edi, 0x80
    X86_AT(c, 0x8ac55u);
    c.r[7] = 0x80u;
L_8ac5a:
    X86_TICK(c, 11);
    // 08ac5a  mov eax, ebx
    X86_AT(c, 0x8ac5au);
    c.r[0] = c.r[3];
    // 08ac5c  and al, 0x40
    X86_AT(c, 0x8ac5cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x40u, 1)); }
    // 08ac5e  cmp al, 0x40
    X86_AT(c, 0x8ac5eu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08ac60  jne 0x8ac67
    X86_AT(c, 0x8ac60u);
    if (x86_cc(c, 5)) { goto L_8ac67; }
    X86_TICK(c, 2);
    // 08ac62  mov edi, 0x40
    X86_AT(c, 0x8ac62u);
    c.r[7] = 0x40u;
L_8ac67:
    X86_TICK(c, 11);
    // 08ac67  mov eax, ebx
    X86_AT(c, 0x8ac67u);
    c.r[0] = c.r[3];
    // 08ac69  and al, 0x20
    X86_AT(c, 0x8ac69u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x20u, 1)); }
    // 08ac6b  cmp al, 0x20
    X86_AT(c, 0x8ac6bu);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 08ac6d  jne 0x8ac74
    X86_AT(c, 0x8ac6du);
    if (x86_cc(c, 5)) { goto L_8ac74; }
    X86_TICK(c, 2);
    // 08ac6f  mov edi, 0x20
    X86_AT(c, 0x8ac6fu);
    c.r[7] = 0x20u;
L_8ac74:
    X86_TICK(c, 11);
    // 08ac74  mov eax, ebx
    X86_AT(c, 0x8ac74u);
    c.r[0] = c.r[3];
    // 08ac76  and al, 0x10
    X86_AT(c, 0x8ac76u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x10u, 1)); }
    // 08ac78  cmp al, 0x10
    X86_AT(c, 0x8ac78u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 08ac7a  jne 0x8ac81
    X86_AT(c, 0x8ac7au);
    if (x86_cc(c, 5)) { goto L_8ac81; }
    X86_TICK(c, 2);
    // 08ac7c  mov edi, 0x10
    X86_AT(c, 0x8ac7cu);
    c.r[7] = 0x10u;
L_8ac81:
    X86_TICK(c, 11);
    // 08ac81  mov eax, ebx
    X86_AT(c, 0x8ac81u);
    c.r[0] = c.r[3];
    // 08ac83  and al, 8
    X86_AT(c, 0x8ac83u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x8u, 1)); }
    // 08ac85  cmp al, 8
    X86_AT(c, 0x8ac85u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 08ac87  jne 0x8ac8e
    X86_AT(c, 0x8ac87u);
    if (x86_cc(c, 5)) { goto L_8ac8e; }
    X86_TICK(c, 2);
    // 08ac89  mov edi, 8
    X86_AT(c, 0x8ac89u);
    c.r[7] = 0x8u;
L_8ac8e:
    X86_TICK(c, 11);
    // 08ac8e  mov eax, ebx
    X86_AT(c, 0x8ac8eu);
    c.r[0] = c.r[3];
    // 08ac90  and al, 4
    X86_AT(c, 0x8ac90u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x4u, 1)); }
    // 08ac92  cmp al, 4
    X86_AT(c, 0x8ac92u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 08ac94  jne 0x8ac9b
    X86_AT(c, 0x8ac94u);
    if (x86_cc(c, 5)) { goto L_8ac9b; }
    X86_TICK(c, 2);
    // 08ac96  mov edi, 4
    X86_AT(c, 0x8ac96u);
    c.r[7] = 0x4u;
L_8ac9b:
    X86_TICK(c, 11);
    // 08ac9b  mov eax, ebx
    X86_AT(c, 0x8ac9bu);
    c.r[0] = c.r[3];
    // 08ac9d  and al, 2
    X86_AT(c, 0x8ac9du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x2u, 1)); }
    // 08ac9f  cmp al, 2
    X86_AT(c, 0x8ac9fu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 08aca1  jne 0x8aca8
    X86_AT(c, 0x8aca1u);
    if (x86_cc(c, 5)) { goto L_8aca8; }
    X86_TICK(c, 2);
    // 08aca3  mov edi, 2
    X86_AT(c, 0x8aca3u);
    c.r[7] = 0x2u;
L_8aca8:
    X86_TICK(c, 11);
    // 08aca8  mov eax, ebx
    X86_AT(c, 0x8aca8u);
    c.r[0] = c.r[3];
    // 08acaa  and al, 1
    X86_AT(c, 0x8acaau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 08acac  dec al
    X86_AT(c, 0x8acacu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 08acae  jne 0x8acb5
    X86_AT(c, 0x8acaeu);
    if (x86_cc(c, 5)) { goto L_8acb5; }
    X86_TICK(c, 2);
    // 08acb0  mov edi, 1
    X86_AT(c, 0x8acb0u);
    c.r[7] = 0x1u;
L_8acb5:
    X86_TICK(c, 9);
    // 08acb5  mov edx, edi
    X86_AT(c, 0x8acb5u);
    c.r[2] = c.r[7];
    // 08acb7  cmp edx, 0x20
    X86_AT(c, 0x8acb7u);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 08acba  ja 0x8ad17
    X86_AT(c, 0x8acbau);
    if (x86_cc(c, 7)) { goto L_8ad17; }
    X86_TICK(c, 7);
    // 08acbc  cmp edx, 0x20
    X86_AT(c, 0x8acbcu);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 08acbf  je 0x8ad56
    X86_AT(c, 0x8acbfu);
    if (x86_cc(c, 4)) { goto L_8ad56; }
    X86_TICK(c, 9);
    // 08acc5  dec edx
    X86_AT(c, 0x8acc5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 08acc6  cmp edx, 0xf
    X86_AT(c, 0x8acc6u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 08acc9  ja 0x8ad5d
    X86_AT(c, 0x8acc9u);
    if (x86_cc(c, 7)) { goto L_8ad5d; }
    X86_TICK(c, 7);
    // 08accf  jmp dword ptr cs:[edx*4 + 0x8acd7]
    X86_AT(c, 0x8accfu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0x8ACD7u)));
      switch (t) {
      case 0x8ad41u: goto L_8ad41;
      case 0x8ad48u: goto L_8ad48;
      case 0x8ad4fu: goto L_8ad4f;
      case 0x8ad5du: goto L_8ad5d;
      case 0x8ad6au: goto L_8ad6a;
      default: x86_jump(c, t); return; } }
L_8ad17:
    X86_TICK(c, 7);
    // 08ad17  cmp edx, 0x80
    X86_AT(c, 0x8ad17u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 08ad1d  je 0x8ad6a
    X86_AT(c, 0x8ad1du);
    if (x86_cc(c, 4)) { goto L_8ad6a; }
    X86_TICK(c, 7);
    // 08ad1f  cmp edx, 0x100
    X86_AT(c, 0x8ad1fu);
    (void)x86_sub(c, c.r[2], 0x100u, 0, 4);
    // 08ad25  je 0x8ad6a
    X86_AT(c, 0x8ad25u);
    if (x86_cc(c, 4)) { goto L_8ad6a; }
    X86_TICK(c, 7);
    // 08ad27  cmp edx, 0x102
    X86_AT(c, 0x8ad27u);
    (void)x86_sub(c, c.r[2], 0x102u, 0, 4);
    // 08ad2d  je 0x8ad6a
    X86_AT(c, 0x8ad2du);
    if (x86_cc(c, 4)) { goto L_8ad6a; }
    X86_TICK(c, 7);
    // 08ad2f  cmp edx, 0x104
    X86_AT(c, 0x8ad2fu);
    (void)x86_sub(c, c.r[2], 0x104u, 0, 4);
    // 08ad35  je 0x8ad6a
    X86_AT(c, 0x8ad35u);
    if (x86_cc(c, 4)) { goto L_8ad6a; }
    X86_TICK(c, 7);
    // 08ad37  cmp edx, 0x108
    X86_AT(c, 0x8ad37u);
    (void)x86_sub(c, c.r[2], 0x108u, 0, 4);
    // 08ad3d  je 0x8ad6a
    X86_AT(c, 0x8ad3du);
    if (x86_cc(c, 4)) { goto L_8ad6a; }
    X86_TICK(c, 7);
    // 08ad3f  jmp 0x8ad5d
    X86_AT(c, 0x8ad3fu);
    goto L_8ad5d;
L_8ad41:
    X86_TICK(c, 9);
    // 08ad41  push 0xdf8
    X86_AT(c, 0x8ad41u);
    { uint32_t v = 0xDF8u; push32(c, v); }
    // 08ad46  jmp 0x8ad62
    X86_AT(c, 0x8ad46u);
    goto L_8ad62;
L_8ad48:
    X86_TICK(c, 9);
    // 08ad48  push 0xe34
    X86_AT(c, 0x8ad48u);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 08ad4d  jmp 0x8ad62
    X86_AT(c, 0x8ad4du);
    goto L_8ad62;
L_8ad4f:
    X86_TICK(c, 9);
    // 08ad4f  push 0xe70
    X86_AT(c, 0x8ad4fu);
    { uint32_t v = 0xE70u; push32(c, v); }
    // 08ad54  jmp 0x8ad62
    X86_AT(c, 0x8ad54u);
    goto L_8ad62;
L_8ad56:
    X86_TICK(c, 9);
    // 08ad56  push 0xea4
    X86_AT(c, 0x8ad56u);
    { uint32_t v = 0xEA4u; push32(c, v); }
    // 08ad5b  jmp 0x8ad62
    X86_AT(c, 0x8ad5bu);
    goto L_8ad62;
L_8ad5d:
    X86_TICK(c, 2);
    // 08ad5d  push 0xee8
    X86_AT(c, 0x8ad5du);
    { uint32_t v = 0xEE8u; push32(c, v); }
L_8ad62:
    X86_TICK(c, 7);
    // 08ad62  call 0x8e22c
    X86_AT(c, 0x8ad62u);
    push32(c, 0x8ad67u); x86_call_known(c, 0x8e22cu, f_0008e22c); X86_RET(c, 0x8ad67u);
    X86_TICK(c, 2);
    // 08ad67  add esp, 4
    X86_AT(c, 0x8ad67u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8ad6a:
    X86_TICK(c, 2);
    // 08ad6a  mov eax, edi
    X86_AT(c, 0x8ad6au);
    c.r[0] = c.r[7];
L_8ad6c:
    X86_TICK(c, 24);
    // 08ad6c  pop edi
    X86_AT(c, 0x8ad6cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08ad6d  pop ebx
    X86_AT(c, 0x8ad6du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08ad6e  leave 
    X86_AT(c, 0x8ad6eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ad6f  ret 
    X86_AT(c, 0x8ad6fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8abf4u, "ran off the end of a function");
}
void f_0008ad70(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08ad70  push 0xf20
    X86_AT(c, 0x8ad70u);
    { uint32_t v = 0xF20u; push32(c, v); }
    // 08ad75  call 0x8e22c
    X86_AT(c, 0x8ad75u);
    push32(c, 0x8ad7au); x86_call_known(c, 0x8e22cu, f_0008e22c); X86_RET(c, 0x8ad7au);
    X86_TICK(c, 14);
    // 08ad7a  mov eax, 0xffffffff
    X86_AT(c, 0x8ad7au);
    c.r[0] = 0xFFFFFFFFu;
    // 08ad7f  add esp, 4
    X86_AT(c, 0x8ad7fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08ad82  ret 
    X86_AT(c, 0x8ad82u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ad70u, "ran off the end of a function");
}
void f_0008ad84(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08ad84  mov dword ptr [0xdb4], 0x250f
    X86_AT(c, 0x8ad84u);
    wr32((c.sbase[3] + (uint32_t)(0xDB4u)), 0x250Fu);
    // 08ad8e  mov dword ptr [0xdb8], 0xb24
    X86_AT(c, 0x8ad8eu);
    wr32((c.sbase[3] + (uint32_t)(0xDB8u)), 0xB24u);
    // 08ad98  mov dword ptr [0xdbc], 0x12f
    X86_AT(c, 0x8ad98u);
    wr32((c.sbase[3] + (uint32_t)(0xDBCu)), 0x12Fu);
    // 08ada2  push 0xdd0
    X86_AT(c, 0x8ada2u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08ada7  push 0xdb4
    X86_AT(c, 0x8ada7u);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08adac  call 0x9385a
    X86_AT(c, 0x8adacu);
    push32(c, 0x8adb1u); x86_call_known(c, 0x9385au, f_0009385a); X86_RET(c, 0x8adb1u);
    X86_TICK(c, 14);
    // 08adb1  add esp, 8
    X86_AT(c, 0x8adb1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08adb4  cmp dword ptr [0xde8], 0
    X86_AT(c, 0x8adb4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDE8u))), 0x0u, 0, 4);
    // 08adbb  jne 0x8ae20
    X86_AT(c, 0x8adbbu);
    if (x86_cc(c, 5)) { goto L_8ae20; }
    X86_TICK(c, 38);
    // 08adbd  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x8adbdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 08adc2  and eax, 0xffff
    X86_AT(c, 0x8adc2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 08adc7  mov dword ptr [0xda8], eax
    X86_AT(c, 0x8adc7u);
    wr32((c.sbase[3] + (uint32_t)(0xDA8u)), c.r[0]);
    // 08adcc  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x8adccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 08add1  shr eax, 0x10
    X86_AT(c, 0x8add1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 08add4  and eax, 0xffff
    X86_AT(c, 0x8add4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 08add9  mov dword ptr [0xda4], eax
    X86_AT(c, 0x8add9u);
    wr32((c.sbase[3] + (uint32_t)(0xDA4u)), c.r[0]);
    // 08adde  mov dword ptr [0xdb4], 0x250f
    X86_AT(c, 0x8addeu);
    wr32((c.sbase[3] + (uint32_t)(0xDB4u)), 0x250Fu);
    // 08ade8  mov word ptr [0xdb8], 0x93
    X86_AT(c, 0x8ade8u);
    wr16((c.sbase[3] + (uint32_t)(0xDB8u)), 0x93u);
    // 08adf1  mov dword ptr [0xdb8], 0xc54
    X86_AT(c, 0x8adf1u);
    wr32((c.sbase[3] + (uint32_t)(0xDB8u)), 0xC54u);
    // 08adfb  mov dword ptr [0xdbc], 0xa
    X86_AT(c, 0x8adfbu);
    wr32((c.sbase[3] + (uint32_t)(0xDBCu)), 0xAu);
    // 08ae05  push 0xdd0
    X86_AT(c, 0x8ae05u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08ae0a  push 0xdb4
    X86_AT(c, 0x8ae0au);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08ae0f  call 0x9385a
    X86_AT(c, 0x8ae0fu);
    push32(c, 0x8ae14u); x86_call_known(c, 0x9385au, f_0009385a); X86_RET(c, 0x8ae14u);
    X86_TICK(c, 14);
    // 08ae14  add esp, 8
    X86_AT(c, 0x8ae14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08ae17  cmp dword ptr [0xde8], 0
    X86_AT(c, 0x8ae17u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDE8u))), 0x0u, 0, 4);
    // 08ae1e  je 0x8ae27
    X86_AT(c, 0x8ae1eu);
    if (x86_cc(c, 4)) { goto L_8ae27; }
L_8ae20:
    X86_TICK(c, 7);
    // 08ae20  call 0x8ad70
    X86_AT(c, 0x8ae20u);
    push32(c, 0x8ae25u); x86_call_known(c, 0x8ad70u, f_0008ad70); X86_RET(c, 0x8ae25u);
    X86_TICK(c, 7);
    // 08ae25  jmp 0x8ae4a
    X86_AT(c, 0x8ae25u);
    goto L_8ae4a;
L_8ae27:
    X86_TICK(c, 21);
    // 08ae27  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x8ae27u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 08ae2c  and eax, 0xffff
    X86_AT(c, 0x8ae2cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 08ae31  mov dword ptr [0xdb0], eax
    X86_AT(c, 0x8ae31u);
    wr32((c.sbase[3] + (uint32_t)(0xDB0u)), c.r[0]);
    // 08ae36  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x8ae36u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 08ae3b  shr eax, 0x10
    X86_AT(c, 0x8ae3bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 08ae3e  and eax, 0xffff
    X86_AT(c, 0x8ae3eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 08ae43  mov dword ptr [0xdac], eax
    X86_AT(c, 0x8ae43u);
    wr32((c.sbase[3] + (uint32_t)(0xDACu)), c.r[0]);
    // 08ae48  sub eax, eax
    X86_AT(c, 0x8ae48u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8ae4a:
    X86_TICK(c, 10);
    // 08ae4a  ret 
    X86_AT(c, 0x8ae4au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ad84u, "ran off the end of a function");
}
void f_0008ae4c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 08ae4c  push ebp
    X86_AT(c, 0x8ae4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ae4d  mov ebp, esp
    X86_AT(c, 0x8ae4du);
    c.r[5] = c.r[4];
    // 08ae4f  push eax
    X86_AT(c, 0x8ae4fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ae50  push ebx
    X86_AT(c, 0x8ae50u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08ae51  push esi
    X86_AT(c, 0x8ae51u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08ae52  push edi
    X86_AT(c, 0x8ae52u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ae53  cmp dword ptr [0xda0], 0
    X86_AT(c, 0x8ae53u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDA0u))), 0x0u, 0, 4);
    // 08ae5a  jne 0x8ae63
    X86_AT(c, 0x8ae5au);
    if (x86_cc(c, 5)) { goto L_8ae63; }
    X86_TICK(c, 9);
    // 08ae5c  sub eax, eax
    X86_AT(c, 0x8ae5cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08ae5e  jmp 0x8af6e
    X86_AT(c, 0x8ae5eu);
    goto L_8af6e;
L_8ae63:
    X86_TICK(c, 35);
    // 08ae63  mov word ptr [0xb14], 0x93
    X86_AT(c, 0x8ae63u);
    wr16((c.sbase[3] + (uint32_t)(0xB14u)), 0x93u);
    // 08ae6c  mov ax, word ptr [0xda4]
    X86_AT(c, 0x8ae6cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDA4u))));
    // 08ae72  mov word ptr [0xb16], ax
    X86_AT(c, 0x8ae72u);
    wr16((c.sbase[3] + (uint32_t)(0xB16u)), (c.r[0] & 0xFFFFu));
    // 08ae78  mov dword ptr [0xb1e], 0x54c0
    X86_AT(c, 0x8ae78u);
    wr32((c.sbase[3] + (uint32_t)(0xB1Eu)), 0x54C0u);
    // 08ae82  mov word ptr [0xdb4], 0x2511
    X86_AT(c, 0x8ae82u);
    wr16((c.sbase[3] + (uint32_t)(0xDB4u)), 0x2511u);
    // 08ae8b  mov byte ptr [0xdbd], 0
    X86_AT(c, 0x8ae8bu);
    wr8((c.sbase[3] + (uint32_t)(0xDBDu)), 0x0u);
    // 08ae92  mov byte ptr [0xdbc], 0
    X86_AT(c, 0x8ae92u);
    wr8((c.sbase[3] + (uint32_t)(0xDBCu)), 0x0u);
    // 08ae99  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x8ae99u);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 08aea3  mov ax, word ptr [0xda8]
    X86_AT(c, 0x8aea3u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDA8u))));
    // 08aea9  mov word ptr [0xdc8], ax
    X86_AT(c, 0x8aea9u);
    wr16((c.sbase[3] + (uint32_t)(0xDC8u)), (c.r[0] & 0xFFFFu));
    // 08aeaf  push 0xdd0
    X86_AT(c, 0x8aeafu);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08aeb4  push 0xdb4
    X86_AT(c, 0x8aeb4u);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08aeb9  call 0x9385a
    X86_AT(c, 0x8aeb9u);
    push32(c, 0x8aebeu); x86_call_known(c, 0x9385au, f_0009385a); X86_RET(c, 0x8aebeu);
    X86_TICK(c, 19);
    // 08aebe  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x8aebeu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 08aec4  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x8aec4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 08aec9  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8aec9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08aecc  add esp, 8
    X86_AT(c, 0x8aeccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08aecf  and bl, bl
    X86_AT(c, 0x8aecfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08aed1  je 0x8aee2
    X86_AT(c, 0x8aed1u);
    if (x86_cc(c, 4)) { goto L_8aee2; }
    X86_TICK(c, 11);
    // 08aed3  push eax
    X86_AT(c, 0x8aed3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08aed4  push ebx
    X86_AT(c, 0x8aed4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08aed5  call 0x8abf4
    X86_AT(c, 0x8aed5u);
    push32(c, 0x8aedau); x86_call_known(c, 0x8abf4u, f_0008abf4); X86_RET(c, 0x8aedau);
    X86_TICK(c, 9);
    // 08aeda  add esp, 8
    X86_AT(c, 0x8aedau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08aedd  jmp 0x8af6e
    X86_AT(c, 0x8aeddu);
    goto L_8af6e;
L_8aee2:
    X86_TICK(c, 54);
    // 08aee2  mov eax, 0xb10
    X86_AT(c, 0x8aee2u);
    c.r[0] = 0xB10u;
    // 08aee7  movzx edx, byte ptr [eax + 0x14]
    X86_AT(c, 0x8aee7u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)));
    // 08aeeb  mov dword ptr [eax + 0x284], edx
    X86_AT(c, 0x8aeebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x284u)), c.r[2]);
    // 08aef1  movzx edx, byte ptr [eax + 0x15]
    X86_AT(c, 0x8aef1u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x15u)));
    // 08aef5  mov dword ptr [eax + 0x288], edx
    X86_AT(c, 0x8aef5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x288u)), c.r[2]);
    // 08aefb  movzx edx, byte ptr [eax + 0x16]
    X86_AT(c, 0x8aefbu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x16u)));
    // 08aeff  mov dword ptr [eax + 0x28c], edx
    X86_AT(c, 0x8aeffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x28Cu)), c.r[2]);
    // 08af05  dec dword ptr [eax + 0x28c]
    X86_AT(c, 0x8af05u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x28Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 08af0b  mov dl, byte ptr [eax + 0x17]
    X86_AT(c, 0x8af0bu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x17u))));
    // 08af0e  mov byte ptr [eax + 0x279], dl
    X86_AT(c, 0x8af0eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x279u)), g8(c, 2));
    // 08af14  mov dl, byte ptr [eax + 0x18]
    X86_AT(c, 0x8af14u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x18u))));
    // 08af17  mov byte ptr [eax + 0x27a], dl
    X86_AT(c, 0x8af17u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x27Au)), g8(c, 2));
    // 08af1d  mov dl, byte ptr [eax + 0x19]
    X86_AT(c, 0x8af1du);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x19u))));
    // 08af20  mov byte ptr [eax + 0x27b], dl
    X86_AT(c, 0x8af20u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x27Bu)), g8(c, 2));
    // 08af26  sub edi, edi
    X86_AT(c, 0x8af26u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 08af28  mov esi, 6
    X86_AT(c, 0x8af28u);
    c.r[6] = 0x6u;
L_8af2d:
    X86_TICK(c, 7);
    // 08af2d  cmp edi, 0x63
    X86_AT(c, 0x8af2du);
    (void)x86_sub(c, c.r[7], 0x63u, 0, 4);
    // 08af30  jge 0x8af67
    X86_AT(c, 0x8af30u);
    if (x86_cc(c, 13)) { goto L_8af67; }
    X86_TICK(c, 43);
    // 08af32  mov eax, 0xb10
    X86_AT(c, 0x8af32u);
    c.r[0] = 0xB10u;
    // 08af37  lea edx, [edi + edi*2]
    X86_AT(c, 0x8af37u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08af3a  mov ecx, esi
    X86_AT(c, 0x8af3au);
    c.r[1] = c.r[6];
    // 08af3c  inc esi
    X86_AT(c, 0x8af3cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08af3d  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0x8af3du);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 08af41  mov byte ptr [eax + edx*1 + 0x150], cl
    X86_AT(c, 0x8af41u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u)), g8(c, 1));
    // 08af48  mov ecx, esi
    X86_AT(c, 0x8af48u);
    c.r[1] = c.r[6];
    // 08af4a  inc esi
    X86_AT(c, 0x8af4au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08af4b  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0x8af4bu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 08af4f  mov byte ptr [eax + edx*1 + 0x151], cl
    X86_AT(c, 0x8af4fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x151u)), g8(c, 1));
    // 08af56  mov ecx, esi
    X86_AT(c, 0x8af56u);
    c.r[1] = c.r[6];
    // 08af58  inc esi
    X86_AT(c, 0x8af58u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08af59  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0x8af59u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 08af5d  mov byte ptr [eax + edx*1 + 0x152], cl
    X86_AT(c, 0x8af5du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x152u)), g8(c, 1));
    // 08af64  inc edi
    X86_AT(c, 0x8af64u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08af65  jmp 0x8af2d
    X86_AT(c, 0x8af65u);
    X86_POLL(c, 0x8af2du); goto L_8af2d;
L_8af67:
    X86_TICK(c, 4);
    // 08af67  sub eax, eax
    X86_AT(c, 0x8af67u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08af69  mov dword ptr [0xda0], eax
    X86_AT(c, 0x8af69u);
    wr32((c.sbase[3] + (uint32_t)(0xDA0u)), c.r[0]);
L_8af6e:
    X86_TICK(c, 28);
    // 08af6e  pop edi
    X86_AT(c, 0x8af6eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08af6f  pop esi
    X86_AT(c, 0x8af6fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08af70  pop ebx
    X86_AT(c, 0x8af70u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08af71  leave 
    X86_AT(c, 0x8af71u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08af72  ret 
    X86_AT(c, 0x8af72u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ae4cu, "ran off the end of a function");
}
void f_0008af6e(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08af6e  pop edi
    X86_AT(c, 0x8af6eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08af6f  pop esi
    X86_AT(c, 0x8af6fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08af70  pop ebx
    X86_AT(c, 0x8af70u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08af71  leave 
    X86_AT(c, 0x8af71u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08af72  ret 
    X86_AT(c, 0x8af72u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8af6eu, "ran off the end of a function");
}
void f_0008af74(X86Cpu& c) {
    X86_TICK(c, 37);
    // 08af74  push ebp
    X86_AT(c, 0x8af74u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08af75  mov ebp, esp
    X86_AT(c, 0x8af75u);
    c.r[5] = c.r[4];
    // 08af77  push eax
    X86_AT(c, 0x8af77u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08af78  push edi
    X86_AT(c, 0x8af78u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08af79  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8af79u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08af7c  mov al, byte ptr [edi]
    X86_AT(c, 0x8af7cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08af7e  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8af7eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08af81  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0x8af81u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08af84  mov byte ptr [ebp - 2], dl
    X86_AT(c, 0x8af84u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 2));
    // 08af87  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0x8af87u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 08af8a  dec ecx
    X86_AT(c, 0x8af8au);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 08af8b  and cl, cl
    X86_AT(c, 0x8af8bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 08af8d  jge 0x8af9d
    X86_AT(c, 0x8af8du);
    if (x86_cc(c, 13)) { goto L_8af9d; }
    X86_TICK(c, 20);
    // 08af8f  mov cl, 0x4a
    X86_AT(c, 0x8af8fu);
    s8(c, 1, 0x4Au);
    // 08af91  dec byte ptr [ebp - 2]
    X86_AT(c, 0x8af91u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 08af94  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x8af94u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 08af98  jge 0x8af9d
    X86_AT(c, 0x8af98u);
    if (x86_cc(c, 13)) { goto L_8af9d; }
    X86_TICK(c, 6);
    // 08af9a  dec byte ptr [ebp - 1]
    X86_AT(c, 0x8af9au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
L_8af9d:
    X86_TICK(c, 34);
    // 08af9d  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0x8af9du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 08afa0  mov byte ptr [edi], al
    X86_AT(c, 0x8afa0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 08afa2  mov al, byte ptr [ebp - 2]
    X86_AT(c, 0x8afa2u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 08afa5  mov byte ptr [edi + 1], al
    X86_AT(c, 0x8afa5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 08afa8  mov byte ptr [edi + 2], cl
    X86_AT(c, 0x8afa8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 08afab  pop edi
    X86_AT(c, 0x8afabu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08afac  leave 
    X86_AT(c, 0x8afacu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08afad  ret 
    X86_AT(c, 0x8afadu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8af74u, "ran off the end of a function");
}
void f_0008b154(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08b154  push ebp
    X86_AT(c, 0x8b154u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b155  mov ebp, esp
    X86_AT(c, 0x8b155u);
    c.r[5] = c.r[4];
    // 08b157  sub esp, 8
    X86_AT(c, 0x8b157u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 08b15a  push ebx
    X86_AT(c, 0x8b15au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b15b  push esi
    X86_AT(c, 0x8b15bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b15c  push edi
    X86_AT(c, 0x8b15cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b15d  call 0x8b510
    X86_AT(c, 0x8b15du);
    push32(c, 0x8b162u); x86_call_known(c, 0x8b510u, f_0008b510); X86_RET(c, 0x8b162u);
    X86_TICK(c, 12);
    // 08b162  cmp dword ptr [0xda0], 0
    X86_AT(c, 0x8b162u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDA0u))), 0x0u, 0, 4);
    // 08b169  jne 0x8b1ad
    X86_AT(c, 0x8b169u);
    if (x86_cc(c, 5)) { goto L_8b1ad; }
    X86_TICK(c, 18);
    // 08b16b  dec dword ptr [ebp + 0xc]
    X86_AT(c, 0x8b16bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 08b16e  cmp dword ptr [ebp + 0xc], 0xffffffff
    X86_AT(c, 0x8b16eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0xFFFFFFFFu, 0, 4);
    // 08b172  je 0x8b31b
    X86_AT(c, 0x8b172u);
    if (x86_cc(c, 4)) { goto L_8b31b; }
    X86_TICK(c, 15);
    // 08b178  mov eax, dword ptr [0xd9c]
    X86_AT(c, 0x8b178u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD9Cu)));
    // 08b17d  cmp eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8b17du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 08b180  jge 0x8b185
    X86_AT(c, 0x8b180u);
    if (x86_cc(c, 13)) { goto L_8b185; }
    X86_TICK(c, 2);
    // 08b182  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0x8b182u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
L_8b185:
    X86_TICK(c, 4);
    // 08b185  mov edi, 0xffffffff
    X86_AT(c, 0x8b185u);
    c.r[7] = 0xFFFFFFFFu;
    // 08b18a  mov esi, edi
    X86_AT(c, 0x8b18au);
    c.r[6] = c.r[7];
L_8b18c:
    X86_TICK(c, 9);
    // 08b18c  inc esi
    X86_AT(c, 0x8b18cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b18d  cmp esi, 0x63
    X86_AT(c, 0x8b18du);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 08b190  jge 0x8b1a4
    X86_AT(c, 0x8b190u);
    if (x86_cc(c, 13)) { goto L_8b1a4; }
    X86_TICK(c, 13);
    // 08b192  movzx eax, byte ptr [esi + esi*2 + 0xc60]
    X86_AT(c, 0x8b192u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[6] * 2 + 0xC60u)));
    // 08b19a  test al, 0x80
    X86_AT(c, 0x8b19au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 08b19c  jne 0x8b19f
    X86_AT(c, 0x8b19cu);
    if (x86_cc(c, 5)) { goto L_8b19f; }
    X86_TICK(c, 2);
    // 08b19e  inc edi
    X86_AT(c, 0x8b19eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_8b19f:
    X86_TICK(c, 11);
    // 08b19f  cmp edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8b19fu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 08b1a2  jne 0x8b18c
    X86_AT(c, 0x8b1a2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8b18cu); goto L_8b18c; }
L_8b1a4:
    X86_TICK(c, 7);
    // 08b1a4  cmp esi, 0x63
    X86_AT(c, 0x8b1a4u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 08b1a7  jl 0x8b1b7
    X86_AT(c, 0x8b1a7u);
    if (x86_cc(c, 12)) { goto L_8b1b7; }
    X86_TICK(c, 7);
    // 08b1a9  and edi, edi
    X86_AT(c, 0x8b1a9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08b1ab  jge 0x8b1b7
    X86_AT(c, 0x8b1abu);
    if (x86_cc(c, 13)) { goto L_8b1b7; }
L_8b1ad:
    X86_TICK(c, 9);
    // 08b1ad  mov eax, 0xffffffff
    X86_AT(c, 0x8b1adu);
    c.r[0] = 0xFFFFFFFFu;
    // 08b1b2  jmp 0x8b31d
    X86_AT(c, 0x8b1b2u);
    goto L_8b31d;
L_8b1b7:
    X86_TICK(c, 11);
    // 08b1b7  cmp edi, dword ptr [0xd9c]
    X86_AT(c, 0x8b1b7u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xD9Cu))), 0, 4);
    // 08b1bd  jne 0x8b1d6
    X86_AT(c, 0x8b1bdu);
    if (x86_cc(c, 5)) { goto L_8b1d6; }
    X86_TICK(c, 23);
    // 08b1bf  mov al, byte ptr [0xd89]
    X86_AT(c, 0x8b1bfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD89u))));
    // 08b1c4  mov byte ptr [ebp - 3], al
    X86_AT(c, 0x8b1c4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 0));
    // 08b1c7  mov al, byte ptr [0xd8a]
    X86_AT(c, 0x8b1c7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD8Au))));
    // 08b1cc  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x8b1ccu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 08b1cf  mov al, byte ptr [0xd8b]
    X86_AT(c, 0x8b1cfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD8Bu))));
    // 08b1d4  jmp 0x8b1f9
    X86_AT(c, 0x8b1d4u);
    goto L_8b1f9;
L_8b1d6:
    X86_TICK(c, 20);
    // 08b1d6  mov eax, 0xb10
    X86_AT(c, 0x8b1d6u);
    c.r[0] = 0xB10u;
    // 08b1db  lea edx, [edi + edi*2]
    X86_AT(c, 0x8b1dbu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08b1de  mov cl, byte ptr [eax + edx*1 + 0x153]
    X86_AT(c, 0x8b1deu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x153u))));
    // 08b1e5  mov byte ptr [ebp - 3], cl
    X86_AT(c, 0x8b1e5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 1));
    // 08b1e8  mov cl, byte ptr [eax + edx*1 + 0x154]
    X86_AT(c, 0x8b1e8u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x154u))));
    // 08b1ef  mov byte ptr [ebp - 2], cl
    X86_AT(c, 0x8b1efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 1));
    // 08b1f2  mov al, byte ptr [eax + edx*1 + 0x155]
    X86_AT(c, 0x8b1f2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x155u))));
L_8b1f9:
    X86_TICK(c, 13);
    // 08b1f9  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8b1f9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08b1fc  lea eax, [ebp - 3]
    X86_AT(c, 0x8b1fcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFDu);
    // 08b1ff  push eax
    X86_AT(c, 0x8b1ffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b200  call 0x8af74
    X86_AT(c, 0x8b200u);
    push32(c, 0x8b205u); x86_call_known(c, 0x8af74u, f_0008af74); X86_RET(c, 0x8b205u);
    X86_TICK(c, 17);
    // 08b205  movsx eax, word ptr [0xb10]
    X86_AT(c, 0x8b205u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xB10u)));
    // 08b20c  push eax
    X86_AT(c, 0x8b20cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b20d  push eax
    X86_AT(c, 0x8b20du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b20e  call 0x8c214
    X86_AT(c, 0x8b20eu);
    push32(c, 0x8b213u); x86_call_known(c, 0x8c214u, f_0008c214); X86_RET(c, 0x8b213u);
    X86_TICK(c, 2);
    // 08b213  add esp, 0xc
    X86_AT(c, 0x8b213u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_8b216:
    X86_TICK(c, 64);
    // 08b216  mov eax, 0xb10
    X86_AT(c, 0x8b216u);
    c.r[0] = 0xB10u;
    // 08b21b  lea edx, [edi + edi*2]
    X86_AT(c, 0x8b21bu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08b21e  mov cl, byte ptr [eax + edx*1 + 0x150]
    X86_AT(c, 0x8b21eu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u))));
    // 08b225  mov byte ptr [eax + 0x144], cl
    X86_AT(c, 0x8b225u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x144u)), g8(c, 1));
    // 08b22b  mov cl, byte ptr [eax + edx*1 + 0x151]
    X86_AT(c, 0x8b22bu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x151u))));
    // 08b232  mov byte ptr [eax + 0x145], cl
    X86_AT(c, 0x8b232u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x145u)), g8(c, 1));
    // 08b238  mov dl, byte ptr [eax + edx*1 + 0x152]
    X86_AT(c, 0x8b238u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x152u))));
    // 08b23f  mov byte ptr [eax + 0x146], dl
    X86_AT(c, 0x8b23fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x146u)), g8(c, 2));
    // 08b245  mov dl, byte ptr [ebp - 3]
    X86_AT(c, 0x8b245u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu))));
    // 08b248  mov byte ptr [eax + 0x147], dl
    X86_AT(c, 0x8b248u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x147u)), g8(c, 2));
    // 08b24e  mov dl, byte ptr [ebp - 2]
    X86_AT(c, 0x8b24eu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 08b251  mov byte ptr [eax + 0x148], dl
    X86_AT(c, 0x8b251u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x148u)), g8(c, 2));
    // 08b257  mov dl, byte ptr [ebp - 1]
    X86_AT(c, 0x8b257u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 08b25a  mov byte ptr [eax + 0x149], dl
    X86_AT(c, 0x8b25au);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x149u)), g8(c, 2));
    // 08b260  mov word ptr [eax + 4], 0x93
    X86_AT(c, 0x8b260u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), 0x93u);
    // 08b266  mov dx, word ptr [eax + 0x29c]
    X86_AT(c, 0x8b266u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x29Cu))));
    // 08b26d  mov word ptr [eax + 6], dx
    X86_AT(c, 0x8b26du);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 08b271  mov dword ptr [eax + 0xe], 0x50c0
    X86_AT(c, 0x8b271u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xEu)), 0x50C0u);
    // 08b278  mov word ptr [eax + 0x2a4], 0x2511
    X86_AT(c, 0x8b278u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2A4u)), 0x2511u);
    // 08b281  cmp dword ptr [ebp + 0xc], 0
    X86_AT(c, 0x8b281u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 4);
    // 08b285  jge 0x8b290
    X86_AT(c, 0x8b285u);
    if (x86_cc(c, 13)) { goto L_8b290; }
    X86_TICK(c, 9);
    // 08b287  mov byte ptr [eax + 0x2ad], 0xff
    X86_AT(c, 0x8b287u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x2ADu)), 0xFFu);
    // 08b28e  jmp 0x8b29f
    X86_AT(c, 0x8b28eu);
    goto L_8b29f;
L_8b290:
    X86_TICK(c, 8);
    // 08b290  mov byte ptr [0xdbd], 0xfe
    X86_AT(c, 0x8b290u);
    wr8((c.sbase[3] + (uint32_t)(0xDBDu)), 0xFEu);
    // 08b297  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8b297u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08b29a  mov byte ptr [0xdb9], al
    X86_AT(c, 0x8b29au);
    wr8((c.sbase[3] + (uint32_t)(0xDB9u)), g8(c, 0));
L_8b29f:
    X86_TICK(c, 21);
    // 08b29f  mov byte ptr [0xdbc], 1
    X86_AT(c, 0x8b29fu);
    wr8((c.sbase[3] + (uint32_t)(0xDBCu)), 0x1u);
    // 08b2a6  mov ax, word ptr [0xdb0]
    X86_AT(c, 0x8b2a6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDB0u))));
    // 08b2ac  mov word ptr [0xdc8], ax
    X86_AT(c, 0x8b2acu);
    wr16((c.sbase[3] + (uint32_t)(0xDC8u)), (c.r[0] & 0xFFFFu));
    // 08b2b2  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x8b2b2u);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 08b2bc  push 0xdd0
    X86_AT(c, 0x8b2bcu);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08b2c1  push 0xdb4
    X86_AT(c, 0x8b2c1u);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08b2c6  call 0x9385a
    X86_AT(c, 0x8b2c6u);
    push32(c, 0x8b2cbu); x86_call_known(c, 0x9385au, f_0009385a); X86_RET(c, 0x8b2cbu);
    X86_TICK(c, 19);
    // 08b2cb  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x8b2cbu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 08b2d1  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x8b2d1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 08b2d6  mov byte ptr [ebp - 4], al
    X86_AT(c, 0x8b2d6u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), g8(c, 0));
    // 08b2d9  add esp, 8
    X86_AT(c, 0x8b2d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b2dc  and bl, bl
    X86_AT(c, 0x8b2dcu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08b2de  je 0x8b309
    X86_AT(c, 0x8b2deu);
    if (x86_cc(c, 4)) { goto L_8b309; }
    X86_TICK(c, 11);
    // 08b2e0  push eax
    X86_AT(c, 0x8b2e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b2e1  push ebx
    X86_AT(c, 0x8b2e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b2e2  call 0x8abf4
    X86_AT(c, 0x8b2e2u);
    push32(c, 0x8b2e7u); x86_call_known(c, 0x8abf4u, f_0008abf4); X86_RET(c, 0x8b2e7u);
    X86_TICK(c, 16);
    // 08b2e7  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x8b2e7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 08b2ea  add esp, 8
    X86_AT(c, 0x8b2eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b2ed  cmp dword ptr [ebp - 8], 0x102
    X86_AT(c, 0x8b2edu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x102u, 0, 4);
    // 08b2f4  jne 0x8b309
    X86_AT(c, 0x8b2f4u);
    if (x86_cc(c, 5)) { goto L_8b309; }
    X86_TICK(c, 7);
    // 08b2f6  call 0x8b404
    X86_AT(c, 0x8b2f6u);
    push32(c, 0x8b2fbu); x86_call_known(c, 0x8b404u, f_0008b404); X86_RET(c, 0x8b2fbu);
L_8b2fb:
    X86_TICK(c, 7);
    // 08b2fb  call 0x8b568
    X86_AT(c, 0x8b2fbu);
    push32(c, 0x8b300u); x86_call_known(c, 0x8b568u, f_0008b568); X86_RET(c, 0x8b300u);
    X86_TICK(c, 7);
    // 08b300  and eax, eax
    X86_AT(c, 0x8b300u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08b302  jne 0x8b2fb
    X86_AT(c, 0x8b302u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8b2fbu); goto L_8b2fb; }
    X86_TICK(c, 7);
    // 08b304  jmp 0x8b216
    X86_AT(c, 0x8b304u);
    X86_POLL(c, 0x8b216u); goto L_8b216;
L_8b309:
    X86_TICK(c, 7);
    // 08b309  and bl, bl
    X86_AT(c, 0x8b309u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08b30b  je 0x8b31b
    X86_AT(c, 0x8b30bu);
    if (x86_cc(c, 4)) { goto L_8b31b; }
    X86_TICK(c, 14);
    // 08b30d  push dword ptr [ebp - 4]
    X86_AT(c, 0x8b30du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 08b310  push ebx
    X86_AT(c, 0x8b310u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b311  call 0x8abf4
    X86_AT(c, 0x8b311u);
    push32(c, 0x8b316u); x86_call_known(c, 0x8abf4u, f_0008abf4); X86_RET(c, 0x8b316u);
    X86_TICK(c, 9);
    // 08b316  add esp, 8
    X86_AT(c, 0x8b316u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b319  jmp 0x8b31d
    X86_AT(c, 0x8b319u);
    goto L_8b31d;
L_8b31b:
    X86_TICK(c, 2);
    // 08b31b  sub eax, eax
    X86_AT(c, 0x8b31bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8b31d:
    X86_TICK(c, 28);
    // 08b31d  pop edi
    X86_AT(c, 0x8b31du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08b31e  pop esi
    X86_AT(c, 0x8b31eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08b31f  pop ebx
    X86_AT(c, 0x8b31fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08b320  leave 
    X86_AT(c, 0x8b320u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b321  ret 
    X86_AT(c, 0x8b321u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b154u, "ran off the end of a function");
}
void f_0008b404(X86Cpu& c) {
    X86_TICK(c, 29);
    // 08b404  push ebp
    X86_AT(c, 0x8b404u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b405  mov ebp, esp
    X86_AT(c, 0x8b405u);
    c.r[5] = c.r[4];
    // 08b407  push eax
    X86_AT(c, 0x8b407u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b408  push ebx
    X86_AT(c, 0x8b408u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b409  mov word ptr [0xb14], 0x93
    X86_AT(c, 0x8b409u);
    wr16((c.sbase[3] + (uint32_t)(0xB14u)), 0x93u);
    // 08b412  mov dword ptr [0xb1e], 0x52c0
    X86_AT(c, 0x8b412u);
    wr32((c.sbase[3] + (uint32_t)(0xB1Eu)), 0x52C0u);
    // 08b41c  mov dword ptr [0xdb4], 0x2511
    X86_AT(c, 0x8b41cu);
    wr32((c.sbase[3] + (uint32_t)(0xDB4u)), 0x2511u);
    // 08b426  mov word ptr [0xdbc], 0
    X86_AT(c, 0x8b426u);
    wr16((c.sbase[3] + (uint32_t)(0xDBCu)), 0x0u);
    // 08b42f  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x8b42fu);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 08b439  push 0xdd0
    X86_AT(c, 0x8b439u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08b43e  push 0xdb4
    X86_AT(c, 0x8b43eu);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08b443  call 0x9385a
    X86_AT(c, 0x8b443u);
    push32(c, 0x8b448u); x86_call_known(c, 0x9385au, f_0009385a); X86_RET(c, 0x8b448u);
    X86_TICK(c, 19);
    // 08b448  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x8b448u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 08b44e  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x8b44eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 08b453  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8b453u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08b456  add esp, 8
    X86_AT(c, 0x8b456u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b459  and bl, bl
    X86_AT(c, 0x8b459u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08b45b  je 0x8b46e
    X86_AT(c, 0x8b45bu);
    if (x86_cc(c, 4)) { goto L_8b46e; }
    X86_TICK(c, 11);
    // 08b45d  push eax
    X86_AT(c, 0x8b45du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b45e  push ebx
    X86_AT(c, 0x8b45eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b45f  call 0x8abf4
    X86_AT(c, 0x8b45fu);
    push32(c, 0x8b464u); x86_call_known(c, 0x8abf4u, f_0008abf4); X86_RET(c, 0x8b464u);
    X86_TICK(c, 11);
    // 08b464  mov eax, 0xffffffff
    X86_AT(c, 0x8b464u);
    c.r[0] = 0xFFFFFFFFu;
    // 08b469  add esp, 8
    X86_AT(c, 0x8b469u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b46c  jmp 0x8b470
    X86_AT(c, 0x8b46cu);
    goto L_8b470;
L_8b46e:
    X86_TICK(c, 2);
    // 08b46e  sub eax, eax
    X86_AT(c, 0x8b46eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8b470:
    X86_TICK(c, 20);
    // 08b470  pop ebx
    X86_AT(c, 0x8b470u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08b471  leave 
    X86_AT(c, 0x8b471u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b472  ret 
    X86_AT(c, 0x8b472u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b404u, "ran off the end of a function");
}
void f_0008b510(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08b510  push edi
    X86_AT(c, 0x8b510u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b511  call 0x8b568
    X86_AT(c, 0x8b511u);
    push32(c, 0x8b516u); x86_call_known(c, 0x8b568u, f_0008b568); X86_RET(c, 0x8b516u);
    X86_TICK(c, 10);
    // 08b516  xchg edi, eax
    X86_AT(c, 0x8b516u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 08b517  and edi, edi
    X86_AT(c, 0x8b517u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08b519  je 0x8b520
    X86_AT(c, 0x8b519u);
    if (x86_cc(c, 4)) { goto L_8b520; }
    X86_TICK(c, 7);
    // 08b51b  cmp edi, 0xffffffff
    X86_AT(c, 0x8b51bu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 08b51e  jne 0x8b529
    X86_AT(c, 0x8b51eu);
    if (x86_cc(c, 5)) { goto L_8b529; }
L_8b520:
    X86_TICK(c, 12);
    // 08b520  cmp dword ptr [0xda0], 0
    X86_AT(c, 0x8b520u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDA0u))), 0x0u, 0, 4);
    // 08b527  je 0x8b563
    X86_AT(c, 0x8b527u);
    if (x86_cc(c, 4)) { goto L_8b563; }
L_8b529:
    X86_TICK(c, 7);
    // 08b529  call 0x8b404
    X86_AT(c, 0x8b529u);
    push32(c, 0x8b52eu); x86_call_known(c, 0x8b404u, f_0008b404); X86_RET(c, 0x8b52eu);
L_8b52e:
    X86_TICK(c, 7);
    // 08b52e  call 0x8ae4c
    X86_AT(c, 0x8b52eu);
    push32(c, 0x8b533u); x86_call_known(c, 0x8ae4cu, f_0008ae4c); X86_RET(c, 0x8b533u);
    X86_TICK(c, 10);
    // 08b533  xchg edi, eax
    X86_AT(c, 0x8b533u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 08b534  cmp edi, 0x80
    X86_AT(c, 0x8b534u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 08b53a  je 0x8b559
    X86_AT(c, 0x8b53au);
    if (x86_cc(c, 4)) { goto L_8b559; }
    X86_TICK(c, 7);
    // 08b53c  cmp edi, 0x10
    X86_AT(c, 0x8b53cu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 08b53f  je 0x8b559
    X86_AT(c, 0x8b53fu);
    if (x86_cc(c, 4)) { goto L_8b559; }
    X86_TICK(c, 7);
    // 08b541  cmp edi, 4
    X86_AT(c, 0x8b541u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 08b544  je 0x8b559
    X86_AT(c, 0x8b544u);
    if (x86_cc(c, 4)) { goto L_8b559; }
    X86_TICK(c, 7);
    // 08b546  cmp edi, 0x102
    X86_AT(c, 0x8b546u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 08b54c  je 0x8b559
    X86_AT(c, 0x8b54cu);
    if (x86_cc(c, 4)) { goto L_8b559; }
    X86_TICK(c, 7);
    // 08b54e  and edi, edi
    X86_AT(c, 0x8b54eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08b550  je 0x8b563
    X86_AT(c, 0x8b550u);
    if (x86_cc(c, 4)) { goto L_8b563; }
    X86_TICK(c, 9);
    // 08b552  mov eax, 1
    X86_AT(c, 0x8b552u);
    c.r[0] = 0x1u;
    // 08b557  jmp 0x8b565
    X86_AT(c, 0x8b557u);
    goto L_8b565;
L_8b559:
    X86_TICK(c, 7);
    // 08b559  cmp edi, 0x102
    X86_AT(c, 0x8b559u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 08b55f  jne 0x8b52e
    X86_AT(c, 0x8b55fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8b52eu); goto L_8b52e; }
    X86_TICK(c, 7);
    // 08b561  jmp 0x8b529
    X86_AT(c, 0x8b561u);
    X86_POLL(c, 0x8b529u); goto L_8b529;
L_8b563:
    X86_TICK(c, 2);
    // 08b563  sub eax, eax
    X86_AT(c, 0x8b563u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8b565:
    X86_TICK(c, 14);
    // 08b565  pop edi
    X86_AT(c, 0x8b565u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08b566  ret 
    X86_AT(c, 0x8b566u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b510u, "ran off the end of a function");
}
void f_0008b568(X86Cpu& c) {
    X86_TICK(c, 43);
    // 08b568  push ebp
    X86_AT(c, 0x8b568u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b569  mov ebp, esp
    X86_AT(c, 0x8b569u);
    c.r[5] = c.r[4];
    // 08b56b  push eax
    X86_AT(c, 0x8b56bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b56c  push ebx
    X86_AT(c, 0x8b56cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b56d  mov word ptr [0xb14], 0x93
    X86_AT(c, 0x8b56du);
    wr16((c.sbase[3] + (uint32_t)(0xB14u)), 0x93u);
    // 08b576  mov ax, word ptr [0xdac]
    X86_AT(c, 0x8b576u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDACu))));
    // 08b57c  mov word ptr [0xb16], ax
    X86_AT(c, 0x8b57cu);
    wr16((c.sbase[3] + (uint32_t)(0xB16u)), (c.r[0] & 0xFFFFu));
    // 08b582  mov dword ptr [0xb1e], 0x53c0
    X86_AT(c, 0x8b582u);
    wr32((c.sbase[3] + (uint32_t)(0xB1Eu)), 0x53C0u);
    // 08b58c  mov word ptr [0xdb4], 0x2511
    X86_AT(c, 0x8b58cu);
    wr16((c.sbase[3] + (uint32_t)(0xDB4u)), 0x2511u);
    // 08b595  mov byte ptr [0xdbd], 0
    X86_AT(c, 0x8b595u);
    wr8((c.sbase[3] + (uint32_t)(0xDBDu)), 0x0u);
    // 08b59c  mov byte ptr [0xdbc], 0
    X86_AT(c, 0x8b59cu);
    wr8((c.sbase[3] + (uint32_t)(0xDBCu)), 0x0u);
    // 08b5a3  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x8b5a3u);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 08b5ad  mov ax, word ptr [0xdb0]
    X86_AT(c, 0x8b5adu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDB0u))));
    // 08b5b3  mov word ptr [0xdc8], ax
    X86_AT(c, 0x8b5b3u);
    wr16((c.sbase[3] + (uint32_t)(0xDC8u)), (c.r[0] & 0xFFFFu));
    // 08b5b9  push 0xdd0
    X86_AT(c, 0x8b5b9u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08b5be  push 0xdb4
    X86_AT(c, 0x8b5beu);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08b5c3  call 0x9385a
    X86_AT(c, 0x8b5c3u);
    push32(c, 0x8b5c8u); x86_call_known(c, 0x9385au, f_0009385a); X86_RET(c, 0x8b5c8u);
    X86_TICK(c, 19);
    // 08b5c8  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x8b5c8u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 08b5ce  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x8b5ceu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 08b5d3  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8b5d3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08b5d6  add esp, 8
    X86_AT(c, 0x8b5d6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b5d9  and bl, bl
    X86_AT(c, 0x8b5d9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08b5db  je 0x8b5e9
    X86_AT(c, 0x8b5dbu);
    if (x86_cc(c, 4)) { goto L_8b5e9; }
    X86_TICK(c, 11);
    // 08b5dd  push eax
    X86_AT(c, 0x8b5ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b5de  push ebx
    X86_AT(c, 0x8b5deu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b5df  call 0x8abf4
    X86_AT(c, 0x8b5dfu);
    push32(c, 0x8b5e4u); x86_call_known(c, 0x8abf4u, f_0008abf4); X86_RET(c, 0x8b5e4u);
    X86_TICK(c, 9);
    // 08b5e4  add esp, 8
    X86_AT(c, 0x8b5e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b5e7  jmp 0x8b5fb
    X86_AT(c, 0x8b5e7u);
    goto L_8b5fb;
L_8b5e9:
    X86_TICK(c, 12);
    // 08b5e9  cmp byte ptr [0xdd0], 1
    X86_AT(c, 0x8b5e9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDD0u))), 0x1u, 0, 1);
    // 08b5f0  jne 0x8b5f9
    X86_AT(c, 0x8b5f0u);
    if (x86_cc(c, 5)) { goto L_8b5f9; }
    X86_TICK(c, 9);
    // 08b5f2  mov eax, 0xffffffff
    X86_AT(c, 0x8b5f2u);
    c.r[0] = 0xFFFFFFFFu;
    // 08b5f7  jmp 0x8b5fb
    X86_AT(c, 0x8b5f7u);
    goto L_8b5fb;
L_8b5f9:
    X86_TICK(c, 2);
    // 08b5f9  sub eax, eax
    X86_AT(c, 0x8b5f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8b5fb:
    X86_TICK(c, 20);
    // 08b5fb  pop ebx
    X86_AT(c, 0x8b5fbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08b5fc  leave 
    X86_AT(c, 0x8b5fcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b5fd  ret 
    X86_AT(c, 0x8b5fdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b568u, "ran off the end of a function");
}
void f_0008b674(X86Cpu& c) {
    X86_TICK(c, 73);
    // 08b674  push ebp
    X86_AT(c, 0x8b674u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b675  mov ebp, esp
    X86_AT(c, 0x8b675u);
    c.r[5] = c.r[4];
    // 08b677  sub esp, 8
    X86_AT(c, 0x8b677u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 08b67a  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8b67au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08b67d  mov dword ptr [0x1be4], eax
    X86_AT(c, 0x8b67du);
    wr32((c.sbase[3] + (uint32_t)(0x1BE4u)), c.r[0]);
    // 08b682  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8b682u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08b685  cdq 
    X86_AT(c, 0x8b685u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08b686  mov ecx, 0xc
    X86_AT(c, 0x8b686u);
    c.r[1] = 0xCu;
    // 08b68b  idiv ecx
    X86_AT(c, 0x8b68bu);
    x86_idiv(c, c.r[1], 4, 0x8b68bu);
    // 08b68d  lea eax, [eax + eax*2]
    X86_AT(c, 0x8b68du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 08b690  add eax, eax
    X86_AT(c, 0x8b690u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 08b692  mov dword ptr [0x1b94], eax
    X86_AT(c, 0x8b692u);
    wr32((c.sbase[3] + (uint32_t)(0x1B94u)), c.r[0]);
    // 08b697  cmp eax, 0x40
    X86_AT(c, 0x8b697u);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 08b69a  jge 0x8b6a3
    X86_AT(c, 0x8b69au);
    if (x86_cc(c, 13)) { goto L_8b6a3; }
    X86_TICK(c, 9);
    // 08b69c  mov eax, 2
    X86_AT(c, 0x8b69cu);
    c.r[0] = 0x2u;
    // 08b6a1  jmp 0x8b6f4
    X86_AT(c, 0x8b6a1u);
    goto L_8b6f4;
L_8b6a3:
    X86_TICK(c, 29);
    // 08b6a3  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8b6a3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08b6a6  mov dword ptr [0x1b9c], eax
    X86_AT(c, 0x8b6a6u);
    wr32((c.sbase[3] + (uint32_t)(0x1B9Cu)), c.r[0]);
    // 08b6ab  mov edx, dword ptr [0x1b94]
    X86_AT(c, 0x8b6abu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x1B94u)));
    // 08b6b1  lea ecx, [eax + edx*1 - 6]
    X86_AT(c, 0x8b6b1u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 08b6b5  mov dword ptr [0x1ba4], ecx
    X86_AT(c, 0x8b6b5u);
    wr32((c.sbase[3] + (uint32_t)(0x1BA4u)), c.r[1]);
    // 08b6bb  add eax, edx
    X86_AT(c, 0x8b6bbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 08b6bd  mov dword ptr [0x1ba0], eax
    X86_AT(c, 0x8b6bdu);
    wr32((c.sbase[3] + (uint32_t)(0x1BA0u)), c.r[0]);
    // 08b6c2  lea eax, [eax + edx*1 - 6]
    X86_AT(c, 0x8b6c2u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 08b6c6  mov dword ptr [0x1ba8], eax
    X86_AT(c, 0x8b6c6u);
    wr32((c.sbase[3] + (uint32_t)(0x1BA8u)), c.r[0]);
    // 08b6cb  call 0x8fa99
    X86_AT(c, 0x8b6cbu);
    push32(c, 0x8b6d0u); x86_call_known(c, 0x8fa99u, f_0008fa99); X86_RET(c, 0x8b6d0u);
    X86_TICK(c, 7);
    // 08b6d0  call 0x8f9b1
    X86_AT(c, 0x8b6d0u);
    push32(c, 0x8b6d5u); x86_call_known(c, 0x8f9b1u, f_0008f9b1); X86_RET(c, 0x8b6d5u);
    X86_TICK(c, 9);
    // 08b6d5  push 0x33
    X86_AT(c, 0x8b6d5u);
    { uint32_t v = 0x33u; push32(c, v); }
    // 08b6d7  call 0x8f9e5
    X86_AT(c, 0x8b6d7u);
    push32(c, 0x8b6dcu); x86_call_known(c, 0x8f9e5u, f_0008f9e5); X86_RET(c, 0x8b6dcu);
    X86_TICK(c, 13);
    // 08b6dc  lea eax, [ebp - 8]
    X86_AT(c, 0x8b6dcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 08b6df  push eax
    X86_AT(c, 0x8b6dfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b6e0  push 0xffc
    X86_AT(c, 0x8b6e0u);
    { uint32_t v = 0xFFCu; push32(c, v); }
    // 08b6e5  call 0x91bc8
    X86_AT(c, 0x8b6e5u);
    push32(c, 0x8b6eau); x86_call_known(c, 0x91bc8u, f_00091bc8); X86_RET(c, 0x8b6eau);
    X86_TICK(c, 6);
    // 08b6ea  sub eax, eax
    X86_AT(c, 0x8b6eau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08b6ec  mov dword ptr [0x1bb0], eax
    X86_AT(c, 0x8b6ecu);
    wr32((c.sbase[3] + (uint32_t)(0x1BB0u)), c.r[0]);
    // 08b6f1  add esp, 0xc
    X86_AT(c, 0x8b6f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_8b6f4:
    X86_TICK(c, 16);
    // 08b6f4  leave 
    X86_AT(c, 0x8b6f4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b6f5  ret 
    X86_AT(c, 0x8b6f5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b674u, "ran off the end of a function");
}
void f_0008b700(X86Cpu& c) {
    X86_TICK(c, 20);
    // 08b700  push ebp
    X86_AT(c, 0x8b700u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b701  mov ebp, esp
    X86_AT(c, 0x8b701u);
    c.r[5] = c.r[4];
    // 08b703  sub esp, 0x108
    X86_AT(c, 0x8b703u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x108u, 0, 4); }
    // 08b709  push ebx
    X86_AT(c, 0x8b709u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b70a  push esi
    X86_AT(c, 0x8b70au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b70b  push edi
    X86_AT(c, 0x8b70bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b70c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8b70cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08b70f  sub ebx, ebx
    X86_AT(c, 0x8b70fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 08b711  mov esi, ebx
    X86_AT(c, 0x8b711u);
    c.r[6] = c.r[3];
L_8b713:
    X86_TICK(c, 11);
    // 08b713  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0x8b713u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 08b716  and al, al
    X86_AT(c, 0x8b716u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08b718  je 0x8b730
    X86_AT(c, 0x8b718u);
    if (x86_cc(c, 4)) { goto L_8b730; }
    X86_TICK(c, 14);
    // 08b71a  movzx eax, al
    X86_AT(c, 0x8b71au);
    c.r[0] = g8(c, 0);
    // 08b71d  cmp eax, dword ptr [esi*4 + 0x345a4]
    X86_AT(c, 0x8b71du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x345A4u))), 0, 4);
    // 08b724  je 0x8b72d
    X86_AT(c, 0x8b724u);
    if (x86_cc(c, 4)) { goto L_8b72d; }
    X86_TICK(c, 9);
    // 08b726  mov ebx, 1
    X86_AT(c, 0x8b726u);
    c.r[3] = 0x1u;
    // 08b72b  jmp 0x8b730
    X86_AT(c, 0x8b72bu);
    goto L_8b730;
L_8b72d:
    X86_TICK(c, 9);
    // 08b72d  inc esi
    X86_AT(c, 0x8b72du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b72e  jmp 0x8b713
    X86_AT(c, 0x8b72eu);
    X86_POLL(c, 0x8b713u); goto L_8b713;
L_8b730:
    X86_TICK(c, 2);
    // 08b730  sub esi, esi
    X86_AT(c, 0x8b730u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b732:
    X86_TICK(c, 11);
    // 08b732  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0x8b732u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 08b735  and al, al
    X86_AT(c, 0x8b735u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08b737  je 0x8b746
    X86_AT(c, 0x8b737u);
    if (x86_cc(c, 4)) { goto L_8b746; }
    X86_TICK(c, 14);
    // 08b739  movzx eax, al
    X86_AT(c, 0x8b739u);
    c.r[0] = g8(c, 0);
    // 08b73c  mov dword ptr [esi*4 + 0x345a4], eax
    X86_AT(c, 0x8b73cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x345A4u)), c.r[0]);
    // 08b743  inc esi
    X86_AT(c, 0x8b743u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b744  jmp 0x8b732
    X86_AT(c, 0x8b744u);
    X86_POLL(c, 0x8b732u); goto L_8b732;
L_8b746:
    X86_TICK(c, 9);
    // 08b746  mov dword ptr [esi*4 + 0x345a4], 0
    X86_AT(c, 0x8b746u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x345A4u)), 0x0u);
    // 08b751  call 0x8bc0c
    X86_AT(c, 0x8b751u);
    push32(c, 0x8b756u); x86_call_known(c, 0x8bc0cu, f_0008bc0c); X86_RET(c, 0x8b756u);
    X86_TICK(c, 13);
    // 08b756  mov dword ptr [0x1bf4], 0xffffffff
    X86_AT(c, 0x8b756u);
    wr32((c.sbase[3] + (uint32_t)(0x1BF4u)), 0xFFFFFFFFu);
    // 08b760  push 0x100e
    X86_AT(c, 0x8b760u);
    { uint32_t v = 0x100Eu; push32(c, v); }
    // 08b765  push edi
    X86_AT(c, 0x8b765u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b766  call 0x9261c
    X86_AT(c, 0x8b766u);
    push32(c, 0x8b76bu); x86_call_known(c, 0x9261cu, f_0009261c); X86_RET(c, 0x8b76bu);
    X86_TICK(c, 11);
    // 08b76b  add esp, 8
    X86_AT(c, 0x8b76bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b76e  mov dword ptr [0x1bf8], eax
    X86_AT(c, 0x8b76eu);
    wr32((c.sbase[3] + (uint32_t)(0x1BF8u)), c.r[0]);
    // 08b773  and eax, eax
    X86_AT(c, 0x8b773u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08b775  jne 0x8b781
    X86_AT(c, 0x8b775u);
    if (x86_cc(c, 5)) { goto L_8b781; }
    X86_TICK(c, 9);
    // 08b777  mov eax, 0xffffffff
    X86_AT(c, 0x8b777u);
    c.r[0] = 0xFFFFFFFFu;
    // 08b77c  jmp 0x8ba95
    X86_AT(c, 0x8b77cu);
    goto L_8ba95;
L_8b781:
    X86_TICK(c, 16);
    // 08b781  push 0
    X86_AT(c, 0x8b781u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08b783  push 0x354
    X86_AT(c, 0x8b783u);
    { uint32_t v = 0x354u; push32(c, v); }
    // 08b788  push dword ptr [0x1bf8]
    X86_AT(c, 0x8b788u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08b78e  call 0x92d90
    X86_AT(c, 0x8b78eu);
    push32(c, 0x8b793u); x86_call_known(c, 0x92d90u, f_00092d90); X86_RET(c, 0x8b793u);
    X86_TICK(c, 22);
    // 08b793  mov dword ptr [0x1bb0], 0
    X86_AT(c, 0x8b793u);
    wr32((c.sbase[3] + (uint32_t)(0x1BB0u)), 0x0u);
    // 08b79d  push dword ptr [0x1bf8]
    X86_AT(c, 0x8b79du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08b7a3  push 0x20
    X86_AT(c, 0x8b7a3u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b7a5  push 1
    X86_AT(c, 0x8b7a5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b7a7  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b7a7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b7ad  push eax
    X86_AT(c, 0x8b7adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b7ae  call 0x92340
    X86_AT(c, 0x8b7aeu);
    push32(c, 0x8b7b3u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8b7b3u);
    X86_TICK(c, 9);
    // 08b7b3  add esp, 0x1c
    X86_AT(c, 0x8b7b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08b7b6  cmp eax, 0x20
    X86_AT(c, 0x8b7b6u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b7b9  jl 0x8ba21
    X86_AT(c, 0x8b7b9u);
    if (x86_cc(c, 12)) { goto L_8ba21; }
    X86_TICK(c, 2);
    // 08b7bf  sub esi, esi
    X86_AT(c, 0x8b7bfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b7c1:
    X86_TICK(c, 7);
    // 08b7c1  cmp esi, 0x20
    X86_AT(c, 0x8b7c1u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b7c4  jge 0x8b7d5
    X86_AT(c, 0x8b7c4u);
    if (x86_cc(c, 13)) { goto L_8b7d5; }
    X86_TICK(c, 11);
    // 08b7c6  push 1
    X86_AT(c, 0x8b7c6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b7c8  push esi
    X86_AT(c, 0x8b7c8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b7c9  call 0x8fbf0
    X86_AT(c, 0x8b7c9u);
    push32(c, 0x8b7ceu); x86_call_known(c, 0x8fbf0u, f_0008fbf0); X86_RET(c, 0x8b7ceu);
    X86_TICK(c, 14);
    // 08b7ce  xchg ebx, eax
    X86_AT(c, 0x8b7ceu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b7cf  inc esi
    X86_AT(c, 0x8b7cfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b7d0  add esp, 8
    X86_AT(c, 0x8b7d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b7d3  jmp 0x8b7c1
    X86_AT(c, 0x8b7d3u);
    X86_POLL(c, 0x8b7c1u); goto L_8b7c1;
L_8b7d5:
    X86_TICK(c, 20);
    // 08b7d5  push dword ptr [0x1bf8]
    X86_AT(c, 0x8b7d5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08b7db  push 0x20
    X86_AT(c, 0x8b7dbu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b7dd  push 1
    X86_AT(c, 0x8b7ddu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b7df  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b7dfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b7e5  push eax
    X86_AT(c, 0x8b7e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b7e6  call 0x92340
    X86_AT(c, 0x8b7e6u);
    push32(c, 0x8b7ebu); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8b7ebu);
    X86_TICK(c, 9);
    // 08b7eb  add esp, 0x10
    X86_AT(c, 0x8b7ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b7ee  cmp eax, 0x20
    X86_AT(c, 0x8b7eeu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b7f1  jl 0x8ba21
    X86_AT(c, 0x8b7f1u);
    if (x86_cc(c, 12)) { goto L_8ba21; }
    X86_TICK(c, 2);
    // 08b7f7  sub esi, esi
    X86_AT(c, 0x8b7f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b7f9:
    X86_TICK(c, 7);
    // 08b7f9  cmp esi, 0x20
    X86_AT(c, 0x8b7f9u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b7fc  jge 0x8b810
    X86_AT(c, 0x8b7fcu);
    if (x86_cc(c, 13)) { goto L_8b810; }
    X86_TICK(c, 11);
    // 08b7fe  push 0xff
    X86_AT(c, 0x8b7feu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 08b803  push esi
    X86_AT(c, 0x8b803u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b804  call 0x8fbbc
    X86_AT(c, 0x8b804u);
    push32(c, 0x8b809u); x86_call_known(c, 0x8fbbcu, f_0008fbbc); X86_RET(c, 0x8b809u);
    X86_TICK(c, 14);
    // 08b809  xchg ebx, eax
    X86_AT(c, 0x8b809u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b80a  inc esi
    X86_AT(c, 0x8b80au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b80b  add esp, 8
    X86_AT(c, 0x8b80bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b80e  jmp 0x8b7f9
    X86_AT(c, 0x8b80eu);
    X86_POLL(c, 0x8b7f9u); goto L_8b7f9;
L_8b810:
    X86_TICK(c, 20);
    // 08b810  push dword ptr [0x1bf8]
    X86_AT(c, 0x8b810u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08b816  push 0x20
    X86_AT(c, 0x8b816u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b818  push 1
    X86_AT(c, 0x8b818u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b81a  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b81au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b820  push eax
    X86_AT(c, 0x8b820u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b821  call 0x92340
    X86_AT(c, 0x8b821u);
    push32(c, 0x8b826u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8b826u);
    X86_TICK(c, 9);
    // 08b826  add esp, 0x10
    X86_AT(c, 0x8b826u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b829  cmp eax, 0x20
    X86_AT(c, 0x8b829u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b82c  jl 0x8ba21
    X86_AT(c, 0x8b82cu);
    if (x86_cc(c, 12)) { goto L_8ba21; }
    X86_TICK(c, 2);
    // 08b832  sub esi, esi
    X86_AT(c, 0x8b832u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b834:
    X86_TICK(c, 7);
    // 08b834  cmp esi, 0x20
    X86_AT(c, 0x8b834u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b837  jge 0x8b84b
    X86_AT(c, 0x8b837u);
    if (x86_cc(c, 13)) { goto L_8b84b; }
    X86_TICK(c, 11);
    // 08b839  push 0xff
    X86_AT(c, 0x8b839u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 08b83e  push esi
    X86_AT(c, 0x8b83eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b83f  call 0x8fbd6
    X86_AT(c, 0x8b83fu);
    push32(c, 0x8b844u); x86_call_known(c, 0x8fbd6u, f_0008fbd6); X86_RET(c, 0x8b844u);
    X86_TICK(c, 14);
    // 08b844  xchg ebx, eax
    X86_AT(c, 0x8b844u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b845  inc esi
    X86_AT(c, 0x8b845u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b846  add esp, 8
    X86_AT(c, 0x8b846u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b849  jmp 0x8b834
    X86_AT(c, 0x8b849u);
    X86_POLL(c, 0x8b834u); goto L_8b834;
L_8b84b:
    X86_TICK(c, 20);
    // 08b84b  push dword ptr [0x1bf8]
    X86_AT(c, 0x8b84bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08b851  push 0x20
    X86_AT(c, 0x8b851u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b853  push 1
    X86_AT(c, 0x8b853u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b855  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b855u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b85b  push eax
    X86_AT(c, 0x8b85bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b85c  call 0x92340
    X86_AT(c, 0x8b85cu);
    push32(c, 0x8b861u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8b861u);
    X86_TICK(c, 9);
    // 08b861  add esp, 0x10
    X86_AT(c, 0x8b861u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b864  cmp eax, 0x20
    X86_AT(c, 0x8b864u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b867  jl 0x8ba21
    X86_AT(c, 0x8b867u);
    if (x86_cc(c, 12)) { goto L_8ba21; }
    X86_TICK(c, 2);
    // 08b86d  sub esi, esi
    X86_AT(c, 0x8b86du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b86f:
    X86_TICK(c, 7);
    // 08b86f  cmp esi, 0x20
    X86_AT(c, 0x8b86fu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b872  jge 0x8b88a
    X86_AT(c, 0x8b872u);
    if (x86_cc(c, 13)) { goto L_8b88a; }
    X86_TICK(c, 17);
    // 08b874  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0x8b874u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 08b87c  push eax
    X86_AT(c, 0x8b87cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b87d  push esi
    X86_AT(c, 0x8b87du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b87e  call 0x8fc24
    X86_AT(c, 0x8b87eu);
    push32(c, 0x8b883u); x86_call_known(c, 0x8fc24u, f_0008fc24); X86_RET(c, 0x8b883u);
    X86_TICK(c, 14);
    // 08b883  xchg ebx, eax
    X86_AT(c, 0x8b883u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b884  inc esi
    X86_AT(c, 0x8b884u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b885  add esp, 8
    X86_AT(c, 0x8b885u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b888  jmp 0x8b86f
    X86_AT(c, 0x8b888u);
    X86_POLL(c, 0x8b86fu); goto L_8b86f;
L_8b88a:
    X86_TICK(c, 20);
    // 08b88a  push dword ptr [0x1bf8]
    X86_AT(c, 0x8b88au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08b890  push 0x20
    X86_AT(c, 0x8b890u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b892  push 1
    X86_AT(c, 0x8b892u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b894  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b894u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b89a  push eax
    X86_AT(c, 0x8b89au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b89b  call 0x92340
    X86_AT(c, 0x8b89bu);
    push32(c, 0x8b8a0u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8b8a0u);
    X86_TICK(c, 9);
    // 08b8a0  add esp, 0x10
    X86_AT(c, 0x8b8a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b8a3  cmp eax, 0x20
    X86_AT(c, 0x8b8a3u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b8a6  jl 0x8ba21
    X86_AT(c, 0x8b8a6u);
    if (x86_cc(c, 12)) { goto L_8ba21; }
    X86_TICK(c, 2);
    // 08b8ac  sub esi, esi
    X86_AT(c, 0x8b8acu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b8ae:
    X86_TICK(c, 7);
    // 08b8ae  cmp esi, 0x20
    X86_AT(c, 0x8b8aeu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b8b1  jge 0x8b8c9
    X86_AT(c, 0x8b8b1u);
    if (x86_cc(c, 13)) { goto L_8b8c9; }
    X86_TICK(c, 17);
    // 08b8b3  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0x8b8b3u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 08b8bb  push eax
    X86_AT(c, 0x8b8bbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b8bc  push esi
    X86_AT(c, 0x8b8bcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b8bd  call 0x8fc0a
    X86_AT(c, 0x8b8bdu);
    push32(c, 0x8b8c2u); x86_call_known(c, 0x8fc0au, f_0008fc0a); X86_RET(c, 0x8b8c2u);
    X86_TICK(c, 14);
    // 08b8c2  xchg ebx, eax
    X86_AT(c, 0x8b8c2u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b8c3  inc esi
    X86_AT(c, 0x8b8c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b8c4  add esp, 8
    X86_AT(c, 0x8b8c4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b8c7  jmp 0x8b8ae
    X86_AT(c, 0x8b8c7u);
    X86_POLL(c, 0x8b8aeu); goto L_8b8ae;
L_8b8c9:
    X86_TICK(c, 18);
    // 08b8c9  push 0
    X86_AT(c, 0x8b8c9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08b8cb  push 0x6d4
    X86_AT(c, 0x8b8cbu);
    { uint32_t v = 0x6D4u; push32(c, v); }
    // 08b8d0  mov eax, 0x1b90
    X86_AT(c, 0x8b8d0u);
    c.r[0] = 0x1B90u;
    // 08b8d5  push dword ptr [eax + 0x68]
    X86_AT(c, 0x8b8d5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 08b8d8  call 0x92d90
    X86_AT(c, 0x8b8d8u);
    push32(c, 0x8b8ddu); x86_call_known(c, 0x92d90u, f_00092d90); X86_RET(c, 0x8b8ddu);
    X86_TICK(c, 20);
    // 08b8dd  push dword ptr [0x1bf8]
    X86_AT(c, 0x8b8ddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08b8e3  push 6
    X86_AT(c, 0x8b8e3u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 08b8e5  push 1
    X86_AT(c, 0x8b8e5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b8e7  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b8e7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b8ed  push eax
    X86_AT(c, 0x8b8edu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b8ee  call 0x92340
    X86_AT(c, 0x8b8eeu);
    push32(c, 0x8b8f3u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8b8f3u);
    X86_TICK(c, 9);
    // 08b8f3  add esp, 0x1c
    X86_AT(c, 0x8b8f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08b8f6  cmp eax, 6
    X86_AT(c, 0x8b8f6u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 08b8f9  jl 0x8ba21
    X86_AT(c, 0x8b8f9u);
    if (x86_cc(c, 12)) { goto L_8ba21; }
    X86_TICK(c, 20);
    // 08b8ff  push dword ptr [0x1bf8]
    X86_AT(c, 0x8b8ffu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08b905  push 8
    X86_AT(c, 0x8b905u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 08b907  push 1
    X86_AT(c, 0x8b907u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b909  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b909u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b90f  push eax
    X86_AT(c, 0x8b90fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b910  call 0x92340
    X86_AT(c, 0x8b910u);
    push32(c, 0x8b915u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8b915u);
    X86_TICK(c, 9);
    // 08b915  add esp, 0x10
    X86_AT(c, 0x8b915u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b918  cmp eax, 8
    X86_AT(c, 0x8b918u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 08b91b  jl 0x8ba21
    X86_AT(c, 0x8b91bu);
    if (x86_cc(c, 12)) { goto L_8ba21; }
    X86_TICK(c, 2);
    // 08b921  sub esi, esi
    X86_AT(c, 0x8b921u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b923:
    X86_TICK(c, 11);
    // 08b923  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0x8b923u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 08b926  and al, al
    X86_AT(c, 0x8b926u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08b928  je 0x8b934
    X86_AT(c, 0x8b928u);
    if (x86_cc(c, 4)) { goto L_8b934; }
    X86_TICK(c, 11);
    // 08b92a  mov byte ptr [ebp + esi*1 - 0x108], al
    X86_AT(c, 0x8b92au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u)), g8(c, 0));
    // 08b931  inc esi
    X86_AT(c, 0x8b931u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b932  jmp 0x8b923
    X86_AT(c, 0x8b932u);
    X86_POLL(c, 0x8b923u); goto L_8b923;
L_8b934:
    X86_TICK(c, 12);
    // 08b934  cmp byte ptr [edi + esi*1], 0x5c
    X86_AT(c, 0x8b934u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))), 0x5Cu, 0, 1);
    // 08b938  je 0x8b941
    X86_AT(c, 0x8b938u);
    if (x86_cc(c, 4)) { goto L_8b941; }
    X86_TICK(c, 7);
    // 08b93a  and esi, esi
    X86_AT(c, 0x8b93au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08b93c  jl 0x8b941
    X86_AT(c, 0x8b93cu);
    if (x86_cc(c, 12)) { goto L_8b941; }
    X86_TICK(c, 9);
    // 08b93e  dec esi
    X86_AT(c, 0x8b93eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 08b93f  jmp 0x8b934
    X86_AT(c, 0x8b93fu);
    X86_POLL(c, 0x8b934u); goto L_8b934;
L_8b941:
    X86_TICK(c, 22);
    // 08b941  inc esi
    X86_AT(c, 0x8b941u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b942  push dword ptr [0x1bf8]
    X86_AT(c, 0x8b942u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08b948  push 8
    X86_AT(c, 0x8b948u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 08b94a  push 1
    X86_AT(c, 0x8b94au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b94c  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0x8b94cu);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 08b953  push eax
    X86_AT(c, 0x8b953u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b954  call 0x92340
    X86_AT(c, 0x8b954u);
    push32(c, 0x8b959u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8b959u);
    X86_TICK(c, 9);
    // 08b959  add esp, 0x10
    X86_AT(c, 0x8b959u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b95c  cmp eax, 8
    X86_AT(c, 0x8b95cu);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 08b95f  jl 0x8ba21
    X86_AT(c, 0x8b95fu);
    if (x86_cc(c, 12)) { goto L_8ba21; }
    X86_TICK(c, 12);
    // 08b965  cmp byte ptr [ebp + esi*1 - 0x108], 0
    X86_AT(c, 0x8b965u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 08b96d  je 0x8b9b7
    X86_AT(c, 0x8b96du);
    if (x86_cc(c, 4)) { goto L_8b9b7; }
    X86_TICK(c, 2);
    // 08b96f  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x8b96fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_8b976:
    X86_TICK(c, 20);
    // 08b976  mov eax, esi
    X86_AT(c, 0x8b976u);
    c.r[0] = c.r[6];
    // 08b978  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x8b978u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 08b97b  cmp byte ptr [ebp + eax*1 - 0x108], 0
    X86_AT(c, 0x8b97bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 08b983  je 0x8b98a
    X86_AT(c, 0x8b983u);
    if (x86_cc(c, 4)) { goto L_8b98a; }
    X86_TICK(c, 13);
    // 08b985  inc dword ptr [ebp - 4]
    X86_AT(c, 0x8b985u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08b988  jmp 0x8b976
    X86_AT(c, 0x8b988u);
    X86_POLL(c, 0x8b976u); goto L_8b976;
L_8b98a:
    X86_TICK(c, 18);
    // 08b98a  mov eax, esi
    X86_AT(c, 0x8b98au);
    c.r[0] = c.r[6];
    // 08b98c  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x8b98cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 08b98f  mov byte ptr [ebp + eax*1 - 0x108], 0x2e
    X86_AT(c, 0x8b98fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u)), 0x2Eu);
    // 08b997  mov byte ptr [ebp + eax*1 - 0x107], 0x66
    X86_AT(c, 0x8b997u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF9u)), 0x66u);
    // 08b99f  mov byte ptr [ebp + eax*1 - 0x106], 0x6d
    X86_AT(c, 0x8b99fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFAu)), 0x6Du);
    // 08b9a7  mov byte ptr [ebp + eax*1 - 0x105], 0x62
    X86_AT(c, 0x8b9a7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFBu)), 0x62u);
    // 08b9af  mov byte ptr [ebp + eax*1 - 0x104], 0
    X86_AT(c, 0x8b9afu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFCu)), 0x0u);
L_8b9b7:
    X86_TICK(c, 20);
    // 08b9b7  push dword ptr [0x1bf8]
    X86_AT(c, 0x8b9b7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08b9bd  push 8
    X86_AT(c, 0x8b9bdu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 08b9bf  push 1
    X86_AT(c, 0x8b9bfu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b9c1  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0x8b9c1u);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 08b9c8  push eax
    X86_AT(c, 0x8b9c8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b9c9  call 0x92340
    X86_AT(c, 0x8b9c9u);
    push32(c, 0x8b9ceu); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8b9ceu);
    X86_TICK(c, 9);
    // 08b9ce  add esp, 0x10
    X86_AT(c, 0x8b9ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b9d1  cmp eax, 8
    X86_AT(c, 0x8b9d1u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 08b9d4  jl 0x8ba21
    X86_AT(c, 0x8b9d4u);
    if (x86_cc(c, 12)) { goto L_8ba21; }
    X86_TICK(c, 18);
    // 08b9d6  push 0
    X86_AT(c, 0x8b9d6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08b9d8  push 0x800
    X86_AT(c, 0x8b9d8u);
    { uint32_t v = 0x800u; push32(c, v); }
    // 08b9dd  mov eax, 0x1b90
    X86_AT(c, 0x8b9ddu);
    c.r[0] = 0x1B90u;
    // 08b9e2  push dword ptr [eax + 0x68]
    X86_AT(c, 0x8b9e2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 08b9e5  call 0x92d90
    X86_AT(c, 0x8b9e5u);
    push32(c, 0x8b9eau); x86_call_known(c, 0x92d90u, f_00092d90); X86_RET(c, 0x8b9eau);
    X86_TICK(c, 20);
    // 08b9ea  push dword ptr [0x1bf8]
    X86_AT(c, 0x8b9eau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08b9f0  push 1
    X86_AT(c, 0x8b9f0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b9f2  push 4
    X86_AT(c, 0x8b9f2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 08b9f4  lea eax, [ebp - 8]
    X86_AT(c, 0x8b9f4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 08b9f7  push eax
    X86_AT(c, 0x8b9f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b9f8  call 0x92340
    X86_AT(c, 0x8b9f8u);
    push32(c, 0x8b9fdu); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8b9fdu);
    X86_TICK(c, 9);
    // 08b9fd  add esp, 0x1c
    X86_AT(c, 0x8b9fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08ba00  dec eax
    X86_AT(c, 0x8ba00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08ba01  jl 0x8ba21
    X86_AT(c, 0x8ba01u);
    if (x86_cc(c, 12)) { goto L_8ba21; }
    X86_TICK(c, 20);
    // 08ba03  push dword ptr [0x1bf8]
    X86_AT(c, 0x8ba03u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08ba09  push 2
    X86_AT(c, 0x8ba09u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08ba0b  push 1
    X86_AT(c, 0x8ba0bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ba0d  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8ba0du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08ba13  push eax
    X86_AT(c, 0x8ba13u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ba14  call 0x92340
    X86_AT(c, 0x8ba14u);
    push32(c, 0x8ba19u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8ba19u);
    X86_TICK(c, 9);
    // 08ba19  add esp, 0x10
    X86_AT(c, 0x8ba19u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08ba1c  cmp eax, 2
    X86_AT(c, 0x8ba1cu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 08ba1f  jge 0x8ba36
    X86_AT(c, 0x8ba1fu);
    if (x86_cc(c, 13)) { goto L_8ba36; }
L_8ba21:
    X86_TICK(c, 12);
    // 08ba21  push dword ptr [0x1bf8]
    X86_AT(c, 0x8ba21u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08ba27  call 0x92b18
    X86_AT(c, 0x8ba27u);
    push32(c, 0x8ba2cu); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x8ba2cu);
    X86_TICK(c, 11);
    // 08ba2c  mov eax, 2
    X86_AT(c, 0x8ba2cu);
    c.r[0] = 0x2u;
    // 08ba31  add esp, 4
    X86_AT(c, 0x8ba31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08ba34  jmp 0x8ba95
    X86_AT(c, 0x8ba34u);
    goto L_8ba95;
L_8ba36:
    X86_TICK(c, 29);
    // 08ba36  movzx eax, byte ptr [ebp - 0x88]
    X86_AT(c, 0x8ba36u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF78u)));
    // 08ba3d  mov dword ptr [0x1bf0], eax
    X86_AT(c, 0x8ba3du);
    wr32((c.sbase[3] + (uint32_t)(0x1BF0u)), c.r[0]);
    // 08ba42  movzx eax, byte ptr [ebp - 0x87]
    X86_AT(c, 0x8ba42u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF79u)));
    // 08ba49  mov dword ptr [0x1bec], eax
    X86_AT(c, 0x8ba49u);
    wr32((c.sbase[3] + (uint32_t)(0x1BECu)), c.r[0]);
    // 08ba4e  mov dword ptr [0x1bf4], 0
    X86_AT(c, 0x8ba4eu);
    wr32((c.sbase[3] + (uint32_t)(0x1BF4u)), 0x0u);
    // 08ba58  mov byte ptr [0x1bac], 0xfe
    X86_AT(c, 0x8ba58u);
    wr8((c.sbase[3] + (uint32_t)(0x1BACu)), 0xFEu);
    // 08ba5f  mov dword ptr [0x1b98], 1
    X86_AT(c, 0x8ba5fu);
    wr32((c.sbase[3] + (uint32_t)(0x1B98u)), 0x1u);
    // 08ba69  call 0x8be88
    X86_AT(c, 0x8ba69u);
    push32(c, 0x8ba6eu); x86_call_known(c, 0x8be88u, f_0008be88); X86_RET(c, 0x8ba6eu);
    X86_TICK(c, 7);
    // 08ba6e  call 0x8be88
    X86_AT(c, 0x8ba6eu);
    push32(c, 0x8ba73u); x86_call_known(c, 0x8be88u, f_0008be88); X86_RET(c, 0x8ba73u);
    X86_TICK(c, 12);
    // 08ba73  push dword ptr [0x1bec]
    X86_AT(c, 0x8ba73u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BECu))); push32(c, v); }
    // 08ba79  call 0x8fba7
    X86_AT(c, 0x8ba79u);
    push32(c, 0x8ba7eu); x86_call_known(c, 0x8fba7u, f_0008fba7); X86_RET(c, 0x8ba7eu);
    X86_TICK(c, 13);
    // 08ba7e  add esp, 4
    X86_AT(c, 0x8ba7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08ba81  mov eax, dword ptr [0x1bf8]
    X86_AT(c, 0x8ba81u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BF8u)));
    // 08ba86  and eax, eax
    X86_AT(c, 0x8ba86u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08ba88  je 0x8ba93
    X86_AT(c, 0x8ba88u);
    if (x86_cc(c, 4)) { goto L_8ba93; }
    X86_TICK(c, 9);
    // 08ba8a  push eax
    X86_AT(c, 0x8ba8au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ba8b  call 0x92b18
    X86_AT(c, 0x8ba8bu);
    push32(c, 0x8ba90u); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x8ba90u);
    X86_TICK(c, 2);
    // 08ba90  add esp, 4
    X86_AT(c, 0x8ba90u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8ba93:
    X86_TICK(c, 2);
    // 08ba93  sub eax, eax
    X86_AT(c, 0x8ba93u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8ba95:
    X86_TICK(c, 28);
    // 08ba95  pop edi
    X86_AT(c, 0x8ba95u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08ba96  pop esi
    X86_AT(c, 0x8ba96u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08ba97  pop ebx
    X86_AT(c, 0x8ba97u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08ba98  leave 
    X86_AT(c, 0x8ba98u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ba99  ret 
    X86_AT(c, 0x8ba99u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b700u, "ran off the end of a function");
}
void f_0008ba9c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08ba9c  push ebp
    X86_AT(c, 0x8ba9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ba9d  mov ebp, esp
    X86_AT(c, 0x8ba9du);
    c.r[5] = c.r[4];
    // 08ba9f  push edi
    X86_AT(c, 0x8ba9fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08baa0  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8baa0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08baa3  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8baa3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08baa6  sub ecx, ecx
    X86_AT(c, 0x8baa6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 08baa8  cmp ecx, edx
    X86_AT(c, 0x8baa8u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 08baaa  jne 0x8bab0
    X86_AT(c, 0x8baaau);
    if (x86_cc(c, 5)) { goto L_8bab0; }
    X86_TICK(c, 9);
    // 08baac  mov eax, edi
    X86_AT(c, 0x8baacu);
    c.r[0] = c.r[7];
    // 08baae  jmp 0x8bac4
    X86_AT(c, 0x8baaeu);
    goto L_8bac4;
L_8bab0:
    X86_TICK(c, 12);
    // 08bab0  cmp byte ptr [edi], 0xf2
    X86_AT(c, 0x8bab0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xF2u, 0, 1);
    // 08bab3  jne 0x8babf
    X86_AT(c, 0x8bab3u);
    if (x86_cc(c, 5)) { goto L_8babf; }
    X86_TICK(c, 9);
    // 08bab5  inc ecx
    X86_AT(c, 0x8bab5u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 08bab6  cmp edx, ecx
    X86_AT(c, 0x8bab6u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 08bab8  jne 0x8babf
    X86_AT(c, 0x8bab8u);
    if (x86_cc(c, 5)) { goto L_8babf; }
    X86_TICK(c, 9);
    // 08baba  lea eax, [edi + 6]
    X86_AT(c, 0x8babau);
    c.r[0] = (uint32_t)(c.r[7] + 0x6u);
    // 08babd  jmp 0x8bac4
    X86_AT(c, 0x8babdu);
    goto L_8bac4;
L_8babf:
    X86_TICK(c, 9);
    // 08babf  add edi, 6
    X86_AT(c, 0x8babfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 08bac2  jmp 0x8bab0
    X86_AT(c, 0x8bac2u);
    X86_POLL(c, 0x8bab0u); goto L_8bab0;
L_8bac4:
    X86_TICK(c, 20);
    // 08bac4  pop edi
    X86_AT(c, 0x8bac4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08bac5  leave 
    X86_AT(c, 0x8bac5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08bac6  ret 
    X86_AT(c, 0x8bac6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ba9cu, "ran off the end of a function");
}
void f_0008bac8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08bac8  push ebp
    X86_AT(c, 0x8bac8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08bac9  mov ebp, esp
    X86_AT(c, 0x8bac9u);
    c.r[5] = c.r[4];
    // 08bacb  push edi
    X86_AT(c, 0x8bacbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08bacc  mov eax, dword ptr [0x1bb4]
    X86_AT(c, 0x8baccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BB4u)));
    // 08bad1  dec eax
    X86_AT(c, 0x8bad1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bad2  push eax
    X86_AT(c, 0x8bad2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bad3  push 0
    X86_AT(c, 0x8bad3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08bad5  call 0x8fc3e
    X86_AT(c, 0x8bad5u);
    push32(c, 0x8badau); x86_call_known(c, 0x8fc3eu, f_0008fc3e); X86_RET(c, 0x8badau);
    X86_TICK(c, 17);
    // 08bada  mov eax, dword ptr [0x1bb8]
    X86_AT(c, 0x8badau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BB8u)));
    // 08badf  dec eax
    X86_AT(c, 0x8badfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bae0  push eax
    X86_AT(c, 0x8bae0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bae1  push 1
    X86_AT(c, 0x8bae1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bae3  call 0x8fc3e
    X86_AT(c, 0x8bae3u);
    push32(c, 0x8bae8u); x86_call_known(c, 0x8fc3eu, f_0008fc3e); X86_RET(c, 0x8bae8u);
    X86_TICK(c, 17);
    // 08bae8  mov eax, dword ptr [0x1bbc]
    X86_AT(c, 0x8bae8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BBCu)));
    // 08baed  dec eax
    X86_AT(c, 0x8baedu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08baee  push eax
    X86_AT(c, 0x8baeeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08baef  push 2
    X86_AT(c, 0x8baefu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08baf1  call 0x8fc3e
    X86_AT(c, 0x8baf1u);
    push32(c, 0x8baf6u); x86_call_known(c, 0x8fc3eu, f_0008fc3e); X86_RET(c, 0x8baf6u);
    X86_TICK(c, 17);
    // 08baf6  mov eax, dword ptr [0x1bc0]
    X86_AT(c, 0x8baf6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BC0u)));
    // 08bafb  dec eax
    X86_AT(c, 0x8bafbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bafc  push eax
    X86_AT(c, 0x8bafcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bafd  push 3
    X86_AT(c, 0x8bafdu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08baff  call 0x8fc3e
    X86_AT(c, 0x8baffu);
    push32(c, 0x8bb04u); x86_call_known(c, 0x8fc3eu, f_0008fc3e); X86_RET(c, 0x8bb04u);
    X86_TICK(c, 17);
    // 08bb04  mov eax, dword ptr [0x1bc4]
    X86_AT(c, 0x8bb04u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BC4u)));
    // 08bb09  dec eax
    X86_AT(c, 0x8bb09u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bb0a  push eax
    X86_AT(c, 0x8bb0au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bb0b  push 4
    X86_AT(c, 0x8bb0bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 08bb0d  call 0x8fc3e
    X86_AT(c, 0x8bb0du);
    push32(c, 0x8bb12u); x86_call_known(c, 0x8fc3eu, f_0008fc3e); X86_RET(c, 0x8bb12u);
    X86_TICK(c, 17);
    // 08bb12  mov eax, dword ptr [0x1bc8]
    X86_AT(c, 0x8bb12u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BC8u)));
    // 08bb17  dec eax
    X86_AT(c, 0x8bb17u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bb18  push eax
    X86_AT(c, 0x8bb18u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bb19  push 5
    X86_AT(c, 0x8bb19u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 08bb1b  call 0x8fc3e
    X86_AT(c, 0x8bb1bu);
    push32(c, 0x8bb20u); x86_call_known(c, 0x8fc3eu, f_0008fc3e); X86_RET(c, 0x8bb20u);
    X86_TICK(c, 17);
    // 08bb20  mov eax, dword ptr [0x1bcc]
    X86_AT(c, 0x8bb20u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BCCu)));
    // 08bb25  dec eax
    X86_AT(c, 0x8bb25u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bb26  push eax
    X86_AT(c, 0x8bb26u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bb27  push 0
    X86_AT(c, 0x8bb27u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08bb29  call 0x8f3df
    X86_AT(c, 0x8bb29u);
    push32(c, 0x8bb2eu); x86_call_known(c, 0x8f3dfu, f_0008f3df); X86_RET(c, 0x8bb2eu);
    X86_TICK(c, 17);
    // 08bb2e  mov eax, dword ptr [0x1bd0]
    X86_AT(c, 0x8bb2eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BD0u)));
    // 08bb33  dec eax
    X86_AT(c, 0x8bb33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bb34  push eax
    X86_AT(c, 0x8bb34u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bb35  push 1
    X86_AT(c, 0x8bb35u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bb37  call 0x8f3df
    X86_AT(c, 0x8bb37u);
    push32(c, 0x8bb3cu); x86_call_known(c, 0x8f3dfu, f_0008f3df); X86_RET(c, 0x8bb3cu);
    X86_TICK(c, 19);
    // 08bb3c  add esp, 0x40
    X86_AT(c, 0x8bb3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08bb3f  mov eax, dword ptr [0x1bd4]
    X86_AT(c, 0x8bb3fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BD4u)));
    // 08bb44  dec eax
    X86_AT(c, 0x8bb44u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bb45  push eax
    X86_AT(c, 0x8bb45u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bb46  push 2
    X86_AT(c, 0x8bb46u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08bb48  call 0x8f3df
    X86_AT(c, 0x8bb48u);
    push32(c, 0x8bb4du); x86_call_known(c, 0x8f3dfu, f_0008f3df); X86_RET(c, 0x8bb4du);
    X86_TICK(c, 17);
    // 08bb4d  mov eax, dword ptr [0x1bd8]
    X86_AT(c, 0x8bb4du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BD8u)));
    // 08bb52  dec eax
    X86_AT(c, 0x8bb52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bb53  push eax
    X86_AT(c, 0x8bb53u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bb54  push 3
    X86_AT(c, 0x8bb54u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08bb56  call 0x8f3df
    X86_AT(c, 0x8bb56u);
    push32(c, 0x8bb5bu); x86_call_known(c, 0x8f3dfu, f_0008f3df); X86_RET(c, 0x8bb5bu);
    X86_TICK(c, 17);
    // 08bb5b  mov eax, dword ptr [0x1bdc]
    X86_AT(c, 0x8bb5bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BDCu)));
    // 08bb60  dec eax
    X86_AT(c, 0x8bb60u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bb61  push eax
    X86_AT(c, 0x8bb61u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bb62  push 4
    X86_AT(c, 0x8bb62u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 08bb64  call 0x8f3df
    X86_AT(c, 0x8bb64u);
    push32(c, 0x8bb69u); x86_call_known(c, 0x8f3dfu, f_0008f3df); X86_RET(c, 0x8bb69u);
    X86_TICK(c, 17);
    // 08bb69  mov eax, dword ptr [0x1be0]
    X86_AT(c, 0x8bb69u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BE0u)));
    // 08bb6e  dec eax
    X86_AT(c, 0x8bb6eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bb6f  push eax
    X86_AT(c, 0x8bb6fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bb70  push 5
    X86_AT(c, 0x8bb70u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 08bb72  call 0x8f3df
    X86_AT(c, 0x8bb72u);
    push32(c, 0x8bb77u); x86_call_known(c, 0x8f3dfu, f_0008f3df); X86_RET(c, 0x8bb77u);
    X86_TICK(c, 11);
    // 08bb77  add esp, 0x20
    X86_AT(c, 0x8bb77u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08bb7a  push 1
    X86_AT(c, 0x8bb7au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bb7c  call 0x8fb8b
    X86_AT(c, 0x8bb7cu);
    push32(c, 0x8bb81u); x86_call_known(c, 0x8fb8bu, f_0008fb8b); X86_RET(c, 0x8bb81u);
    X86_TICK(c, 17);
    // 08bb81  push dword ptr [ebp + 8]
    X86_AT(c, 0x8bb81u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08bb84  push dword ptr [0x1b9c]
    X86_AT(c, 0x8bb84u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1B9Cu))); push32(c, v); }
    // 08bb8a  call 0x8ba9c
    X86_AT(c, 0x8bb8au);
    push32(c, 0x8bb8fu); x86_call_known(c, 0x8ba9cu, f_0008ba9c); X86_RET(c, 0x8bb8fu);
    X86_TICK(c, 22);
    // 08bb8f  mov dword ptr [0x1bb0], eax
    X86_AT(c, 0x8bb8fu);
    wr32((c.sbase[3] + (uint32_t)(0x1BB0u)), c.r[0]);
    // 08bb94  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8bb94u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08bb97  inc eax
    X86_AT(c, 0x8bb97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08bb98  push eax
    X86_AT(c, 0x8bb98u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bb99  push dword ptr [0x1b9c]
    X86_AT(c, 0x8bb99u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1B9Cu))); push32(c, v); }
    // 08bb9f  call 0x8ba9c
    X86_AT(c, 0x8bb9fu);
    push32(c, 0x8bba4u); x86_call_known(c, 0x8ba9cu, f_0008ba9c); X86_RET(c, 0x8bba4u);
    X86_TICK(c, 42);
    // 08bba4  xchg edi, eax
    X86_AT(c, 0x8bba4u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 08bba5  mov byte ptr [edi], 0xfe
    X86_AT(c, 0x8bba5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFEu);
    // 08bba8  inc edi
    X86_AT(c, 0x8bba8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08bba9  inc edi
    X86_AT(c, 0x8bba9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08bbaa  mov byte ptr [edi], 0
    X86_AT(c, 0x8bbaau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 08bbad  inc edi
    X86_AT(c, 0x8bbadu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08bbae  mov byte ptr [edi], 0
    X86_AT(c, 0x8bbaeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 08bbb1  inc edi
    X86_AT(c, 0x8bbb1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08bbb2  push dword ptr [0x1bf0]
    X86_AT(c, 0x8bbb2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF0u))); push32(c, v); }
    // 08bbb8  mov eax, dword ptr [0x1b94]
    X86_AT(c, 0x8bbb8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1B94u)));
    // 08bbbd  add eax, eax
    X86_AT(c, 0x8bbbdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 08bbbf  push eax
    X86_AT(c, 0x8bbbfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bbc0  push dword ptr [0x1b9c]
    X86_AT(c, 0x8bbc0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1B9Cu))); push32(c, v); }
    // 08bbc6  call 0x8faaf
    X86_AT(c, 0x8bbc6u);
    push32(c, 0x8bbcbu); x86_call_known(c, 0x8faafu, f_0008faaf); X86_RET(c, 0x8bbcbu);
    X86_TICK(c, 24);
    // 08bbcb  sub eax, eax
    X86_AT(c, 0x8bbcbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08bbcd  add esp, 0x20
    X86_AT(c, 0x8bbcdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08bbd0  pop edi
    X86_AT(c, 0x8bbd0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08bbd1  leave 
    X86_AT(c, 0x8bbd1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08bbd2  ret 
    X86_AT(c, 0x8bbd2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bac8u, "ran off the end of a function");
}
void f_0008bc0c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08bc0c  call 0x8face
    X86_AT(c, 0x8bc0cu);
    push32(c, 0x8bc11u); x86_call_known(c, 0x8faceu, f_0008face); X86_RET(c, 0x8bc11u);
    X86_TICK(c, 12);
    // 08bc11  sub eax, eax
    X86_AT(c, 0x8bc11u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08bc13  ret 
    X86_AT(c, 0x8bc13u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bc0cu, "ran off the end of a function");
}
void f_0008bc54(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08bc54  push 0xffffffff
    X86_AT(c, 0x8bc54u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 08bc56  call 0x8f591
    X86_AT(c, 0x8bc56u);
    push32(c, 0x8bc5bu); x86_call_known(c, 0x8f591u, f_0008f591); X86_RET(c, 0x8bc5bu);
    X86_TICK(c, 9);
    // 08bc5b  push 1
    X86_AT(c, 0x8bc5bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bc5d  call 0x8f567
    X86_AT(c, 0x8bc5du);
    push32(c, 0x8bc62u); x86_call_known(c, 0x8f567u, f_0008f567); X86_RET(c, 0x8bc62u);
    X86_TICK(c, 14);
    // 08bc62  sub eax, eax
    X86_AT(c, 0x8bc62u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08bc64  add esp, 8
    X86_AT(c, 0x8bc64u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08bc67  ret 
    X86_AT(c, 0x8bc67u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bc54u, "ran off the end of a function");
}
void f_0008bc68(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08bc68  push ebp
    X86_AT(c, 0x8bc68u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08bc69  mov ebp, esp
    X86_AT(c, 0x8bc69u);
    c.r[5] = c.r[4];
    // 08bc6b  push ebx
    X86_AT(c, 0x8bc6bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08bc6c  push esi
    X86_AT(c, 0x8bc6cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08bc6d  push edi
    X86_AT(c, 0x8bc6du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08bc6e  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8bc6eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08bc71  push 0x1012
    X86_AT(c, 0x8bc71u);
    { uint32_t v = 0x1012u; push32(c, v); }
    // 08bc76  push dword ptr [ebp + 8]
    X86_AT(c, 0x8bc76u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08bc79  call 0x9261c
    X86_AT(c, 0x8bc79u);
    push32(c, 0x8bc7eu); x86_call_known(c, 0x9261cu, f_0009261c); X86_RET(c, 0x8bc7eu);
    X86_TICK(c, 12);
    // 08bc7e  add esp, 8
    X86_AT(c, 0x8bc7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08bc81  xchg esi, eax
    X86_AT(c, 0x8bc81u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 08bc82  and esi, esi
    X86_AT(c, 0x8bc82u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08bc84  jne 0x8bc97
    X86_AT(c, 0x8bc84u);
    if (x86_cc(c, 5)) { goto L_8bc97; }
    X86_TICK(c, 9);
    // 08bc86  push 0x1018
    X86_AT(c, 0x8bc86u);
    { uint32_t v = 0x1018u; push32(c, v); }
    // 08bc8b  call 0x8e22c
    X86_AT(c, 0x8bc8bu);
    push32(c, 0x8bc90u); x86_call_known(c, 0x8e22cu, f_0008e22c); X86_RET(c, 0x8bc90u);
    X86_TICK(c, 9);
    // 08bc90  mov eax, 1
    X86_AT(c, 0x8bc90u);
    c.r[0] = 0x1u;
    // 08bc95  jmp 0x8bce4
    X86_AT(c, 0x8bc95u);
    goto L_8bce4;
L_8bc97:
    X86_TICK(c, 12);
    // 08bc97  cmp dword ptr [ebp + 0x10], 0x20
    X86_AT(c, 0x8bc97u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x20u, 0, 4);
    // 08bc9b  jl 0x8bccf
    X86_AT(c, 0x8bc9bu);
    if (x86_cc(c, 12)) { goto L_8bccf; }
    X86_TICK(c, 15);
    // 08bc9d  push esi
    X86_AT(c, 0x8bc9du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08bc9e  push 0x20
    X86_AT(c, 0x8bc9eu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08bca0  push 1
    X86_AT(c, 0x8bca0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bca2  push edi
    X86_AT(c, 0x8bca2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08bca3  call 0x92340
    X86_AT(c, 0x8bca3u);
    push32(c, 0x8bca8u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8bca8u);
    X86_TICK(c, 9);
    // 08bca8  add esp, 0x10
    X86_AT(c, 0x8bca8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08bcab  cmp eax, 0x20
    X86_AT(c, 0x8bcabu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08bcae  jl 0x8bccf
    X86_AT(c, 0x8bcaeu);
    if (x86_cc(c, 12)) { goto L_8bccf; }
    X86_TICK(c, 17);
    // 08bcb0  mov ebx, dword ptr [edi + 0xc]
    X86_AT(c, 0x8bcb0u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 08bcb3  lea eax, [ebx + 0x20]
    X86_AT(c, 0x8bcb3u);
    c.r[0] = (uint32_t)(c.r[3] + 0x20u);
    // 08bcb6  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8bcb6u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 08bcb9  jg 0x8bccf
    X86_AT(c, 0x8bcb9u);
    if (x86_cc(c, 15)) { goto L_8bccf; }
    X86_TICK(c, 17);
    // 08bcbb  push esi
    X86_AT(c, 0x8bcbbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08bcbc  push ebx
    X86_AT(c, 0x8bcbcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08bcbd  push 1
    X86_AT(c, 0x8bcbdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bcbf  lea eax, [edi + 0x20]
    X86_AT(c, 0x8bcbfu);
    c.r[0] = (uint32_t)(c.r[7] + 0x20u);
    // 08bcc2  push eax
    X86_AT(c, 0x8bcc2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bcc3  call 0x92340
    X86_AT(c, 0x8bcc3u);
    push32(c, 0x8bcc8u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8bcc8u);
    X86_TICK(c, 9);
    // 08bcc8  add esp, 0x10
    X86_AT(c, 0x8bcc8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08bccb  cmp ebx, eax
    X86_AT(c, 0x8bccbu);
    (void)x86_sub(c, c.r[3], c.r[0], 0, 4);
    // 08bccd  jle 0x8bcdc
    X86_AT(c, 0x8bccdu);
    if (x86_cc(c, 14)) { goto L_8bcdc; }
L_8bccf:
    X86_TICK(c, 9);
    // 08bccf  push esi
    X86_AT(c, 0x8bccfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08bcd0  call 0x92b18
    X86_AT(c, 0x8bcd0u);
    push32(c, 0x8bcd5u); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x8bcd5u);
    X86_TICK(c, 9);
    // 08bcd5  mov eax, 2
    X86_AT(c, 0x8bcd5u);
    c.r[0] = 0x2u;
    // 08bcda  jmp 0x8bce4
    X86_AT(c, 0x8bcdau);
    goto L_8bce4;
L_8bcdc:
    X86_TICK(c, 9);
    // 08bcdc  push esi
    X86_AT(c, 0x8bcdcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08bcdd  call 0x92b18
    X86_AT(c, 0x8bcddu);
    push32(c, 0x8bce2u); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x8bce2u);
    X86_TICK(c, 2);
    // 08bce2  sub eax, eax
    X86_AT(c, 0x8bce2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8bce4:
    X86_TICK(c, 30);
    // 08bce4  add esp, 4
    X86_AT(c, 0x8bce4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08bce7  pop edi
    X86_AT(c, 0x8bce7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08bce8  pop esi
    X86_AT(c, 0x8bce8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08bce9  pop ebx
    X86_AT(c, 0x8bce9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08bcea  leave 
    X86_AT(c, 0x8bceau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08bceb  ret 
    X86_AT(c, 0x8bcebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bc68u, "ran off the end of a function");
}
void f_0008be88(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08be88  push ebx
    X86_AT(c, 0x8be88u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08be89  push esi
    X86_AT(c, 0x8be89u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08be8a  push edi
    X86_AT(c, 0x8be8au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08be8b  cmp dword ptr [0x1b98], 0
    X86_AT(c, 0x8be8bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x1B98u))), 0x0u, 0, 4);
    // 08be92  jne 0x8bea2
    X86_AT(c, 0x8be92u);
    if (x86_cc(c, 5)) { goto L_8bea2; }
    X86_TICK(c, 11);
    // 08be94  mov dword ptr [0x1b98], 1
    X86_AT(c, 0x8be94u);
    wr32((c.sbase[3] + (uint32_t)(0x1B98u)), 0x1u);
    // 08be9e  sub esi, esi
    X86_AT(c, 0x8be9eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08bea0  jmp 0x8beb1
    X86_AT(c, 0x8bea0u);
    goto L_8beb1;
L_8bea2:
    X86_TICK(c, 4);
    // 08bea2  mov dword ptr [0x1b98], 0
    X86_AT(c, 0x8bea2u);
    wr32((c.sbase[3] + (uint32_t)(0x1B98u)), 0x0u);
    // 08beac  mov esi, 1
    X86_AT(c, 0x8beacu);
    c.r[6] = 0x1u;
L_8beb1:
    X86_TICK(c, 8);
    // 08beb1  mov eax, dword ptr [0x1b98]
    X86_AT(c, 0x8beb1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1B98u)));
    // 08beb6  mov edi, dword ptr [eax*4 + 0x1b9c]
    X86_AT(c, 0x8beb6u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x1B9Cu)));
L_8bebd:
    X86_TICK(c, 14);
    // 08bebd  mov eax, 0x1b90
    X86_AT(c, 0x8bebdu);
    c.r[0] = 0x1B90u;
    // 08bec2  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0x8bec2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 08bec6  jne 0x8bf31
    X86_AT(c, 0x8bec6u);
    if (x86_cc(c, 5)) { goto L_8bf31; }
    X86_TICK(c, 15);
    // 08bec8  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x8bec8u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 08becb  cmp edi, dword ptr [eax + edx*4 + 0x14]
    X86_AT(c, 0x8becbu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x14u))), 0, 4);
    // 08becf  ja 0x8bf31
    X86_AT(c, 0x8becfu);
    if (x86_cc(c, 7)) { goto L_8bf31; }
    X86_TICK(c, 18);
    // 08bed1  push dword ptr [eax + 0x68]
    X86_AT(c, 0x8bed1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 08bed4  push 6
    X86_AT(c, 0x8bed4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 08bed6  push 1
    X86_AT(c, 0x8bed6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bed8  push edi
    X86_AT(c, 0x8bed8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08bed9  call 0x92340
    X86_AT(c, 0x8bed9u);
    push32(c, 0x8bedeu); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8bedeu);
    X86_TICK(c, 9);
    // 08bede  add esp, 0x10
    X86_AT(c, 0x8bedeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08bee1  cmp eax, 6
    X86_AT(c, 0x8bee1u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 08bee4  jge 0x8bf05
    X86_AT(c, 0x8bee4u);
    if (x86_cc(c, 13)) { goto L_8bf05; }
    X86_TICK(c, 12);
    // 08bee6  push dword ptr [0x1bf8]
    X86_AT(c, 0x8bee6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08beec  call 0x92b18
    X86_AT(c, 0x8beecu);
    push32(c, 0x8bef1u); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x8bef1u);
    X86_TICK(c, 13);
    // 08bef1  mov dword ptr [0x1bf8], 0
    X86_AT(c, 0x8bef1u);
    wr32((c.sbase[3] + (uint32_t)(0x1BF8u)), 0x0u);
    // 08befb  mov eax, 2
    X86_AT(c, 0x8befbu);
    c.r[0] = 0x2u;
    // 08bf00  add esp, 4
    X86_AT(c, 0x8bf00u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08bf03  jmp 0x8bf5e
    X86_AT(c, 0x8bf03u);
    goto L_8bf5e;
L_8bf05:
    X86_TICK(c, 12);
    // 08bf05  cmp byte ptr [edi], 0xfe
    X86_AT(c, 0x8bf05u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xFEu, 0, 1);
    // 08bf08  jne 0x8bf2c
    X86_AT(c, 0x8bf08u);
    if (x86_cc(c, 5)) { goto L_8bf2c; }
    X86_TICK(c, 14);
    // 08bf0a  mov dword ptr [0x1bf4], 1
    X86_AT(c, 0x8bf0au);
    wr32((c.sbase[3] + (uint32_t)(0x1BF4u)), 0x1u);
    // 08bf14  push dword ptr [0x1bf8]
    X86_AT(c, 0x8bf14u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BF8u))); push32(c, v); }
    // 08bf1a  call 0x92b18
    X86_AT(c, 0x8bf1au);
    push32(c, 0x8bf1fu); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x8bf1fu);
    X86_TICK(c, 4);
    // 08bf1f  mov dword ptr [0x1bf8], 0
    X86_AT(c, 0x8bf1fu);
    wr32((c.sbase[3] + (uint32_t)(0x1BF8u)), 0x0u);
    // 08bf29  add esp, 4
    X86_AT(c, 0x8bf29u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8bf2c:
    X86_TICK(c, 9);
    // 08bf2c  add edi, 6
    X86_AT(c, 0x8bf2cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 08bf2f  jmp 0x8bebd
    X86_AT(c, 0x8bf2fu);
    X86_POLL(c, 0x8bebdu); goto L_8bebd;
L_8bf31:
    X86_TICK(c, 18);
    // 08bf31  mov eax, 0x1b90
    X86_AT(c, 0x8bf31u);
    c.r[0] = 0x1B90u;
    // 08bf36  mov bl, byte ptr [eax + 0x1c]
    X86_AT(c, 0x8bf36u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu))));
    // 08bf39  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0x8bf39u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 08bf3d  jne 0x8bf4e
    X86_AT(c, 0x8bf3du);
    if (x86_cc(c, 5)) { goto L_8bf4e; }
    X86_TICK(c, 16);
    // 08bf3f  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x8bf3fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 08bf42  mov edx, dword ptr [eax + edx*4 + 0x14]
    X86_AT(c, 0x8bf42u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x14u)));
    // 08bf46  mov cl, byte ptr [edx]
    X86_AT(c, 0x8bf46u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 08bf48  mov byte ptr [eax + 0x1c], cl
    X86_AT(c, 0x8bf48u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu)), g8(c, 1));
    // 08bf4b  mov byte ptr [edx], 0xfd
    X86_AT(c, 0x8bf4bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0xFDu);
L_8bf4e:
    X86_TICK(c, 13);
    // 08bf4e  mov eax, dword ptr [esi*4 + 0x1ba4]
    X86_AT(c, 0x8bf4eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x1BA4u)));
    // 08bf55  mov byte ptr [eax], bl
    X86_AT(c, 0x8bf55u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), g8(c, 3));
    // 08bf57  call 0x8fae4
    X86_AT(c, 0x8bf57u);
    push32(c, 0x8bf5cu); x86_call_known(c, 0x8fae4u, f_0008fae4); X86_RET(c, 0x8bf5cu);
    X86_TICK(c, 2);
    // 08bf5c  sub eax, eax
    X86_AT(c, 0x8bf5cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8bf5e:
    X86_TICK(c, 22);
    // 08bf5e  pop edi
    X86_AT(c, 0x8bf5eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08bf5f  pop esi
    X86_AT(c, 0x8bf5fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08bf60  pop ebx
    X86_AT(c, 0x8bf60u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08bf61  ret 
    X86_AT(c, 0x8bf61u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8be88u, "ran off the end of a function");
}
void f_0008bf64(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08bf64  push 0x141d0
    X86_AT(c, 0x8bf64u);
    { uint32_t v = 0x141D0u; push32(c, v); }
    // 08bf69  call 0x92ff0
    X86_AT(c, 0x8bf69u);
    push32(c, 0x8bf6eu); x86_call_known(c, 0x92ff0u, f_00092ff0); X86_RET(c, 0x8bf6eu);
    X86_TICK(c, 11);
    // 08bf6e  add esp, 4
    X86_AT(c, 0x8bf6eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08bf71  mov dword ptr [0x1be4], eax
    X86_AT(c, 0x8bf71u);
    wr32((c.sbase[3] + (uint32_t)(0x1BE4u)), c.r[0]);
    // 08bf76  and eax, eax
    X86_AT(c, 0x8bf76u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08bf78  jne 0x8bf8e
    X86_AT(c, 0x8bf78u);
    if (x86_cc(c, 5)) { goto L_8bf8e; }
    X86_TICK(c, 9);
    // 08bf7a  push 0x1068
    X86_AT(c, 0x8bf7au);
    { uint32_t v = 0x1068u; push32(c, v); }
    // 08bf7f  call 0x8e22c
    X86_AT(c, 0x8bf7fu);
    push32(c, 0x8bf84u); x86_call_known(c, 0x8e22cu, f_0008e22c); X86_RET(c, 0x8bf84u);
    X86_TICK(c, 11);
    // 08bf84  mov eax, 0xffffffff
    X86_AT(c, 0x8bf84u);
    c.r[0] = 0xFFFFFFFFu;
    // 08bf89  add esp, 4
    X86_AT(c, 0x8bf89u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08bf8c  jmp 0x8bfeb
    X86_AT(c, 0x8bf8cu);
    goto L_8bfeb;
L_8bf8e:
    X86_TICK(c, 17);
    // 08bf8e  mov eax, dword ptr [0x1be4]
    X86_AT(c, 0x8bf8eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1BE4u)));
    // 08bf93  lea edx, [eax + 0x4000]
    X86_AT(c, 0x8bf93u);
    c.r[2] = (uint32_t)(c.r[0] + 0x4000u);
    // 08bf99  mov dword ptr [0x1be8], edx
    X86_AT(c, 0x8bf99u);
    wr32((c.sbase[3] + (uint32_t)(0x1BE8u)), c.r[2]);
    // 08bf9f  push eax
    X86_AT(c, 0x8bf9fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bfa0  call 0x8f307
    X86_AT(c, 0x8bfa0u);
    push32(c, 0x8bfa5u); x86_call_known(c, 0x8f307u, f_0008f307); X86_RET(c, 0x8bfa5u);
    X86_TICK(c, 9);
    // 08bfa5  add esp, 4
    X86_AT(c, 0x8bfa5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08bfa8  and eax, eax
    X86_AT(c, 0x8bfa8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08bfaa  je 0x8bfcb
    X86_AT(c, 0x8bfaau);
    if (x86_cc(c, 4)) { goto L_8bfcb; }
    X86_TICK(c, 9);
    // 08bfac  push 0x10ac
    X86_AT(c, 0x8bfacu);
    { uint32_t v = 0x10ACu; push32(c, v); }
    // 08bfb1  call 0x8e22c
    X86_AT(c, 0x8bfb1u);
    push32(c, 0x8bfb6u); x86_call_known(c, 0x8e22cu, f_0008e22c); X86_RET(c, 0x8bfb6u);
    X86_TICK(c, 12);
    // 08bfb6  push dword ptr [0x1be4]
    X86_AT(c, 0x8bfb6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BE4u))); push32(c, v); }
    // 08bfbc  call 0x92fdc
    X86_AT(c, 0x8bfbcu);
    push32(c, 0x8bfc1u); x86_call_known(c, 0x92fdcu, f_00092fdc); X86_RET(c, 0x8bfc1u);
    X86_TICK(c, 11);
    // 08bfc1  mov eax, 0xffffffff
    X86_AT(c, 0x8bfc1u);
    c.r[0] = 0xFFFFFFFFu;
    // 08bfc6  add esp, 8
    X86_AT(c, 0x8bfc6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08bfc9  jmp 0x8bfeb
    X86_AT(c, 0x8bfc9u);
    goto L_8bfeb;
L_8bfcb:
    X86_TICK(c, 7);
    // 08bfcb  call 0x8bc54
    X86_AT(c, 0x8bfcbu);
    push32(c, 0x8bfd0u); x86_call_known(c, 0x8bc54u, f_0008bc54); X86_RET(c, 0x8bfd0u);
    X86_TICK(c, 19);
    // 08bfd0  push dword ptr [0x1be4]
    X86_AT(c, 0x8bfd0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BE4u))); push32(c, v); }
    // 08bfd6  push 0x101d0
    X86_AT(c, 0x8bfd6u);
    { uint32_t v = 0x101D0u; push32(c, v); }
    // 08bfdb  push dword ptr [0x1be8]
    X86_AT(c, 0x8bfdbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BE8u))); push32(c, v); }
    // 08bfe1  call 0x8b674
    X86_AT(c, 0x8bfe1u);
    push32(c, 0x8bfe6u); x86_call_known(c, 0x8b674u, f_0008b674); X86_RET(c, 0x8bfe6u);
    X86_TICK(c, 4);
    // 08bfe6  sub eax, eax
    X86_AT(c, 0x8bfe6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08bfe8  add esp, 0xc
    X86_AT(c, 0x8bfe8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_8bfeb:
    X86_TICK(c, 10);
    // 08bfeb  ret 
    X86_AT(c, 0x8bfebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bf64u, "ran off the end of a function");
}
void f_0008bfec(X86Cpu& c) {
    X86_TICK(c, 12);
    // 08bfec  push dword ptr [0x1be4]
    X86_AT(c, 0x8bfecu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BE4u))); push32(c, v); }
    // 08bff2  call 0x92fdc
    X86_AT(c, 0x8bff2u);
    push32(c, 0x8bff7u); x86_call_known(c, 0x92fdcu, f_00092fdc); X86_RET(c, 0x8bff7u);
    X86_TICK(c, 7);
    // 08bff7  call 0x8f36e
    X86_AT(c, 0x8bff7u);
    push32(c, 0x8bffcu); x86_call_known(c, 0x8f36eu, f_0008f36e); X86_RET(c, 0x8bffcu);
    X86_TICK(c, 12);
    // 08bffc  add esp, 4
    X86_AT(c, 0x8bffcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08bfff  ret 
    X86_AT(c, 0x8bfffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bfecu, "ran off the end of a function");
}
void f_0008c214(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c214  push ebp
    X86_AT(c, 0x8c214u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c215  mov ebp, esp
    X86_AT(c, 0x8c215u);
    c.r[5] = c.r[4];
    // 08c217  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c217u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 08c21a  push dword ptr [ebp + 8]
    X86_AT(c, 0x8c21au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08c21d  push 1
    X86_AT(c, 0x8c21du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c21f  call 0x8f994
    X86_AT(c, 0x8c21fu);
    push32(c, 0x8c224u); x86_call_known(c, 0x8f994u, f_0008f994); X86_RET(c, 0x8c224u);
    X86_TICK(c, 16);
    // 08c224  leave 
    X86_AT(c, 0x8c224u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c225  ret 
    X86_AT(c, 0x8c225u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c214u, "ran off the end of a function");
}
void f_0008c2cc(X86Cpu& c) {
    X86_TICK(c, 8);
    // 08c2cc  push edi
    X86_AT(c, 0x8c2ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c2cd  mov dword ptr [0x34c28], 1
    X86_AT(c, 0x8c2cdu);
    wr32((c.sbase[3] + (uint32_t)(0x34C28u)), 0x1u);
    // 08c2d7  mov byte ptr [0x34c33], 0
    X86_AT(c, 0x8c2d7u);
    wr8((c.sbase[3] + (uint32_t)(0x34C33u)), 0x0u);
    // 08c2de  mov edi, 1
    X86_AT(c, 0x8c2deu);
    c.r[7] = 0x1u;
L_8c2e3:
    X86_TICK(c, 7);
    // 08c2e3  cmp edi, 0x10
    X86_AT(c, 0x8c2e3u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 08c2e6  jge 0x8c33a
    X86_AT(c, 0x8c2e6u);
    if (x86_cc(c, 13)) { goto L_8c33a; }
    X86_TICK(c, 41);
    // 08c2e8  mov dword ptr [0x34c2c], edi
    X86_AT(c, 0x8c2e8u);
    wr32((c.sbase[3] + (uint32_t)(0x34C2Cu)), c.r[7]);
    // 08c2ee  mov eax, 0x34624
    X86_AT(c, 0x8c2eeu);
    c.r[0] = 0x34624u;
    // 08c2f3  lea edx, [edi*4]
    X86_AT(c, 0x8c2f3u);
    c.r[2] = (uint32_t)(c.r[7] * 4);
    // 08c2fa  lea edx, [edx + edx*2]
    X86_AT(c, 0x8c2fau);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 08c2fd  mov cl, byte ptr [eax + edx*1 + 0x644]
    X86_AT(c, 0x8c2fdu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x644u))));
    // 08c304  mov byte ptr [0x34c30], cl
    X86_AT(c, 0x8c304u);
    wr8((c.sbase[3] + (uint32_t)(0x34C30u)), g8(c, 1));
    // 08c30a  mov cl, byte ptr [eax + edx*1 + 0x648]
    X86_AT(c, 0x8c30au);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x648u))));
    // 08c311  mov byte ptr [0x34c31], cl
    X86_AT(c, 0x8c311u);
    wr8((c.sbase[3] + (uint32_t)(0x34C31u)), g8(c, 1));
    // 08c317  mov dl, byte ptr [eax + edx*1 + 0x64c]
    X86_AT(c, 0x8c317u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x64Cu))));
    // 08c31e  mov byte ptr [0x34c32], dl
    X86_AT(c, 0x8c31eu);
    wr8((c.sbase[3] + (uint32_t)(0x34C32u)), g8(c, 2));
    // 08c324  push 0x34c28
    X86_AT(c, 0x8c324u);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08c329  push 1
    X86_AT(c, 0x8c329u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c32b  add eax, 4
    X86_AT(c, 0x8c32bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 08c32e  push eax
    X86_AT(c, 0x8c32eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c32f  call 0x11c
    X86_AT(c, 0x8c32fu);
    push32(c, 0x8c334u); x86_call_known(c, 0x11cu, f_0000011c); X86_RET(c, 0x8c334u);
    X86_TICK(c, 11);
    // 08c334  inc edi
    X86_AT(c, 0x8c334u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08c335  add esp, 0xc
    X86_AT(c, 0x8c335u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c338  jmp 0x8c2e3
    X86_AT(c, 0x8c338u);
    X86_POLL(c, 0x8c2e3u); goto L_8c2e3;
L_8c33a:
    X86_TICK(c, 14);
    // 08c33a  pop edi
    X86_AT(c, 0x8c33au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c33b  ret 
    X86_AT(c, 0x8c33bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c2ccu, "ran off the end of a function");
}
void f_0008c384(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c384  push ebp
    X86_AT(c, 0x8c384u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c385  mov ebp, esp
    X86_AT(c, 0x8c385u);
    c.r[5] = c.r[4];
    // 08c387  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c387u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c38b  push eax
    X86_AT(c, 0x8c38bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c38c  push 0
    X86_AT(c, 0x8c38cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c38e  push 0x34628
    X86_AT(c, 0x8c38eu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c393  call 0x18e
    X86_AT(c, 0x8c393u);
    push32(c, 0x8c398u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c398u);
    X86_TICK(c, 16);
    // 08c398  leave 
    X86_AT(c, 0x8c398u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c399  ret 
    X86_AT(c, 0x8c399u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c384u, "ran off the end of a function");
}
void f_0008c39c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c39c  push ebp
    X86_AT(c, 0x8c39cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c39d  mov ebp, esp
    X86_AT(c, 0x8c39du);
    c.r[5] = c.r[4];
    // 08c39f  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c39fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c3a3  push eax
    X86_AT(c, 0x8c3a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c3a4  push 1
    X86_AT(c, 0x8c3a4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c3a6  push 0x34628
    X86_AT(c, 0x8c3a6u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c3ab  call 0x18e
    X86_AT(c, 0x8c3abu);
    push32(c, 0x8c3b0u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c3b0u);
    X86_TICK(c, 16);
    // 08c3b0  leave 
    X86_AT(c, 0x8c3b0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c3b1  ret 
    X86_AT(c, 0x8c3b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c39cu, "ran off the end of a function");
}
void f_0008c3b4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c3b4  push ebp
    X86_AT(c, 0x8c3b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c3b5  mov ebp, esp
    X86_AT(c, 0x8c3b5u);
    c.r[5] = c.r[4];
    // 08c3b7  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c3b7u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c3bb  push eax
    X86_AT(c, 0x8c3bbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c3bc  push 2
    X86_AT(c, 0x8c3bcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c3be  push 0x34628
    X86_AT(c, 0x8c3beu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c3c3  call 0x18e
    X86_AT(c, 0x8c3c3u);
    push32(c, 0x8c3c8u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c3c8u);
    X86_TICK(c, 16);
    // 08c3c8  leave 
    X86_AT(c, 0x8c3c8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c3c9  ret 
    X86_AT(c, 0x8c3c9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c3b4u, "ran off the end of a function");
}
void f_0008c3cc(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c3cc  push ebp
    X86_AT(c, 0x8c3ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c3cd  mov ebp, esp
    X86_AT(c, 0x8c3cdu);
    c.r[5] = c.r[4];
    // 08c3cf  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c3cfu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c3d3  push eax
    X86_AT(c, 0x8c3d3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c3d4  push 3
    X86_AT(c, 0x8c3d4u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c3d6  push 0x34628
    X86_AT(c, 0x8c3d6u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c3db  call 0x18e
    X86_AT(c, 0x8c3dbu);
    push32(c, 0x8c3e0u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c3e0u);
    X86_TICK(c, 16);
    // 08c3e0  leave 
    X86_AT(c, 0x8c3e0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c3e1  ret 
    X86_AT(c, 0x8c3e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c3ccu, "ran off the end of a function");
}
void f_0008c3e4(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08c3e4  push ebp
    X86_AT(c, 0x8c3e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c3e5  mov ebp, esp
    X86_AT(c, 0x8c3e5u);
    c.r[5] = c.r[4];
    // 08c3e7  push edi
    X86_AT(c, 0x8c3e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c3e8  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8c3e8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c3eb  sar eax, 3
    X86_AT(c, 0x8c3ebu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 08c3ee  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c3eeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08c3f1  sar edx, 3
    X86_AT(c, 0x8c3f1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08c3f4  shl edx, 5
    X86_AT(c, 0x8c3f4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08c3f7  add edx, eax
    X86_AT(c, 0x8c3f7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08c3f9  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8c3f9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08c3fc  sar edi, 3
    X86_AT(c, 0x8c3fcu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 08c3ff  shl edi, 0xa
    X86_AT(c, 0x8c3ffu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 08c402  add edi, edx
    X86_AT(c, 0x8c402u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 08c404  push edi
    X86_AT(c, 0x8c404u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c405  push 0
    X86_AT(c, 0x8c405u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c407  push 0x34628
    X86_AT(c, 0x8c407u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c40c  call 0x18e
    X86_AT(c, 0x8c40cu);
    push32(c, 0x8c411u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c411u);
    X86_TICK(c, 22);
    // 08c411  add esp, 0xc
    X86_AT(c, 0x8c411u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c414  pop edi
    X86_AT(c, 0x8c414u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c415  leave 
    X86_AT(c, 0x8c415u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c416  ret 
    X86_AT(c, 0x8c416u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c3e4u, "ran off the end of a function");
}
void f_0008c418(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08c418  push ebp
    X86_AT(c, 0x8c418u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c419  mov ebp, esp
    X86_AT(c, 0x8c419u);
    c.r[5] = c.r[4];
    // 08c41b  push edi
    X86_AT(c, 0x8c41bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c41c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8c41cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c41f  sar eax, 3
    X86_AT(c, 0x8c41fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 08c422  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c422u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08c425  sar edx, 3
    X86_AT(c, 0x8c425u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08c428  shl edx, 5
    X86_AT(c, 0x8c428u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08c42b  add edx, eax
    X86_AT(c, 0x8c42bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08c42d  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8c42du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08c430  sar edi, 3
    X86_AT(c, 0x8c430u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 08c433  shl edi, 0xa
    X86_AT(c, 0x8c433u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 08c436  add edi, edx
    X86_AT(c, 0x8c436u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 08c438  push edi
    X86_AT(c, 0x8c438u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c439  push 1
    X86_AT(c, 0x8c439u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c43b  push 0x34628
    X86_AT(c, 0x8c43bu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c440  call 0x18e
    X86_AT(c, 0x8c440u);
    push32(c, 0x8c445u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c445u);
    X86_TICK(c, 22);
    // 08c445  add esp, 0xc
    X86_AT(c, 0x8c445u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c448  pop edi
    X86_AT(c, 0x8c448u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c449  leave 
    X86_AT(c, 0x8c449u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c44a  ret 
    X86_AT(c, 0x8c44au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c418u, "ran off the end of a function");
}
void f_0008c44c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08c44c  push ebp
    X86_AT(c, 0x8c44cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c44d  mov ebp, esp
    X86_AT(c, 0x8c44du);
    c.r[5] = c.r[4];
    // 08c44f  push dword ptr [ebp + 8]
    X86_AT(c, 0x8c44fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08c452  push 0x34628
    X86_AT(c, 0x8c452u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c457  call 0x431
    X86_AT(c, 0x8c457u);
    push32(c, 0x8c45cu); x86_call_known(c, 0x431u, f_00000431); X86_RET(c, 0x8c45cu);
    X86_TICK(c, 16);
    // 08c45c  leave 
    X86_AT(c, 0x8c45cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c45d  ret 
    X86_AT(c, 0x8c45du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c44cu, "ran off the end of a function");
}
void f_0008c478(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08c478  push ebp
    X86_AT(c, 0x8c478u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c479  mov ebp, esp
    X86_AT(c, 0x8c479u);
    c.r[5] = c.r[4];
    // 08c47b  push edi
    X86_AT(c, 0x8c47bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c47c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8c47cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c47f  sar eax, 3
    X86_AT(c, 0x8c47fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 08c482  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c482u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08c485  sar edx, 3
    X86_AT(c, 0x8c485u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08c488  shl edx, 5
    X86_AT(c, 0x8c488u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08c48b  add edx, eax
    X86_AT(c, 0x8c48bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08c48d  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8c48du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08c490  sar edi, 3
    X86_AT(c, 0x8c490u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 08c493  shl edi, 0xa
    X86_AT(c, 0x8c493u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 08c496  add edi, edx
    X86_AT(c, 0x8c496u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 08c498  push edi
    X86_AT(c, 0x8c498u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c499  push 2
    X86_AT(c, 0x8c499u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c49b  push 0x34628
    X86_AT(c, 0x8c49bu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c4a0  call 0x18e
    X86_AT(c, 0x8c4a0u);
    push32(c, 0x8c4a5u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c4a5u);
    X86_TICK(c, 22);
    // 08c4a5  add esp, 0xc
    X86_AT(c, 0x8c4a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c4a8  pop edi
    X86_AT(c, 0x8c4a8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c4a9  leave 
    X86_AT(c, 0x8c4a9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c4aa  ret 
    X86_AT(c, 0x8c4aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c478u, "ran off the end of a function");
}
void f_0008c4ac(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08c4ac  push ebp
    X86_AT(c, 0x8c4acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c4ad  mov ebp, esp
    X86_AT(c, 0x8c4adu);
    c.r[5] = c.r[4];
    // 08c4af  push edi
    X86_AT(c, 0x8c4afu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c4b0  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8c4b0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c4b3  sar eax, 3
    X86_AT(c, 0x8c4b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 08c4b6  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c4b6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08c4b9  sar edx, 3
    X86_AT(c, 0x8c4b9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08c4bc  shl edx, 5
    X86_AT(c, 0x8c4bcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08c4bf  add edx, eax
    X86_AT(c, 0x8c4bfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08c4c1  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8c4c1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08c4c4  sar edi, 3
    X86_AT(c, 0x8c4c4u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 08c4c7  shl edi, 0xa
    X86_AT(c, 0x8c4c7u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 08c4ca  add edi, edx
    X86_AT(c, 0x8c4cau);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 08c4cc  push edi
    X86_AT(c, 0x8c4ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c4cd  push 3
    X86_AT(c, 0x8c4cdu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c4cf  push 0x34628
    X86_AT(c, 0x8c4cfu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c4d4  call 0x18e
    X86_AT(c, 0x8c4d4u);
    push32(c, 0x8c4d9u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c4d9u);
    X86_TICK(c, 22);
    // 08c4d9  add esp, 0xc
    X86_AT(c, 0x8c4d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c4dc  pop edi
    X86_AT(c, 0x8c4dcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c4dd  leave 
    X86_AT(c, 0x8c4ddu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c4de  ret 
    X86_AT(c, 0x8c4deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c4acu, "ran off the end of a function");
}
void f_0008c4f4(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08c4f4  push ebp
    X86_AT(c, 0x8c4f4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c4f5  mov ebp, esp
    X86_AT(c, 0x8c4f5u);
    c.r[5] = c.r[4];
    // 08c4f7  push dword ptr [ebp + 8]
    X86_AT(c, 0x8c4f7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08c4fa  push 0x34628
    X86_AT(c, 0x8c4fau);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c4ff  call 0x1fd
    X86_AT(c, 0x8c4ffu);
    push32(c, 0x8c504u); x86_call_known(c, 0x1fdu, f_000001fd); X86_RET(c, 0x8c504u);
    X86_TICK(c, 16);
    // 08c504  leave 
    X86_AT(c, 0x8c504u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c505  ret 
    X86_AT(c, 0x8c505u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c4f4u, "ran off the end of a function");
}
void f_0008c508(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08c508  push ebp
    X86_AT(c, 0x8c508u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c509  mov ebp, esp
    X86_AT(c, 0x8c509u);
    c.r[5] = c.r[4];
    // 08c50b  push dword ptr [ebp + 8]
    X86_AT(c, 0x8c50bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08c50e  push 0x34628
    X86_AT(c, 0x8c50eu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c513  call 0x144
    X86_AT(c, 0x8c513u);
    push32(c, 0x8c518u); x86_call_known(c, 0x144u, f_00000144); X86_RET(c, 0x8c518u);
    X86_TICK(c, 16);
    // 08c518  leave 
    X86_AT(c, 0x8c518u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c519  ret 
    X86_AT(c, 0x8c519u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c508u, "ran off the end of a function");
}
void f_0008c51c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08c51c  push ebp
    X86_AT(c, 0x8c51cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c51d  mov ebp, esp
    X86_AT(c, 0x8c51du);
    c.r[5] = c.r[4];
    // 08c51f  push edi
    X86_AT(c, 0x8c51fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c520  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8c520u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c523  inc edi
    X86_AT(c, 0x8c523u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08c524  cmp edi, 4
    X86_AT(c, 0x8c524u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 08c527  jne 0x8c52b
    X86_AT(c, 0x8c527u);
    if (x86_cc(c, 5)) { goto L_8c52b; }
    X86_TICK(c, 2);
    // 08c529  sub edi, edi
    X86_AT(c, 0x8c529u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_8c52b:
    X86_TICK(c, 13);
    // 08c52b  push edi
    X86_AT(c, 0x8c52bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c52c  push 0
    X86_AT(c, 0x8c52cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c52e  push 0x34628
    X86_AT(c, 0x8c52eu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c533  call 0x166
    X86_AT(c, 0x8c533u);
    push32(c, 0x8c538u); x86_call_known(c, 0x166u, f_00000166); X86_RET(c, 0x8c538u);
    X86_TICK(c, 22);
    // 08c538  add esp, 0xc
    X86_AT(c, 0x8c538u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c53b  pop edi
    X86_AT(c, 0x8c53bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c53c  leave 
    X86_AT(c, 0x8c53cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c53d  ret 
    X86_AT(c, 0x8c53du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c51cu, "ran off the end of a function");
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
    // 08c54b  mov word ptr [0x34d28], 0xa
    X86_AT(c, 0x8c54bu);
    wr16((c.sbase[3] + (uint32_t)(0x34D28u)), 0xAu);
    // 08c554  jmp 0x8c568
    X86_AT(c, 0x8c554u);
    goto L_8c568;
L_8c556:
    X86_TICK(c, 7);
    // 08c556  cmp edi, 1
    X86_AT(c, 0x8c556u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 08c559  jne 0x8c675
    X86_AT(c, 0x8c559u);
    if (x86_cc(c, 5)) { goto L_8c675; }
    X86_TICK(c, 2);
    // 08c55f  mov word ptr [0x34d2a], 0xa
    X86_AT(c, 0x8c55fu);
    wr16((c.sbase[3] + (uint32_t)(0x34D2Au)), 0xAu);
L_8c568:
    X86_TICK(c, 13);
    // 08c568  push 1
    X86_AT(c, 0x8c568u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c56a  push edi
    X86_AT(c, 0x8c56au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c56b  push 0x34628
    X86_AT(c, 0x8c56bu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c570  call 0x6a
    X86_AT(c, 0x8c570u);
    push32(c, 0x8c575u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c575u);
    X86_TICK(c, 13);
    // 08c575  push 0xa
    X86_AT(c, 0x8c575u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 08c577  push edi
    X86_AT(c, 0x8c577u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c578  push 0x34628
    X86_AT(c, 0x8c578u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c57d  call 0x6a
    X86_AT(c, 0x8c57du);
    push32(c, 0x8c582u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c582u);
    X86_TICK(c, 9);
    // 08c582  push edi
    X86_AT(c, 0x8c582u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c583  call 0x8c508
    X86_AT(c, 0x8c583u);
    push32(c, 0x8c588u); x86_call_known(c, 0x8c508u, f_0008c508); X86_RET(c, 0x8c588u);
    X86_TICK(c, 22);
    // 08c588  push dword ptr [0x34d24]
    X86_AT(c, 0x8c588u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34D24u))); push32(c, v); }
    // 08c58e  push dword ptr [0x34d20]
    X86_AT(c, 0x8c58eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34D20u))); push32(c, v); }
    // 08c594  push dword ptr [0x34d1c]
    X86_AT(c, 0x8c594u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34D1Cu))); push32(c, v); }
    // 08c59a  call 0x8c3e4
    X86_AT(c, 0x8c59au);
    push32(c, 0x8c59fu); x86_call_known(c, 0x8c3e4u, f_0008c3e4); X86_RET(c, 0x8c59fu);
    X86_TICK(c, 22);
    // 08c59f  push dword ptr [0x34c70]
    X86_AT(c, 0x8c59fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34C70u))); push32(c, v); }
    // 08c5a5  push dword ptr [0x34c6c]
    X86_AT(c, 0x8c5a5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34C6Cu))); push32(c, v); }
    // 08c5ab  push dword ptr [0x34c68]
    X86_AT(c, 0x8c5abu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34C68u))); push32(c, v); }
    // 08c5b1  call 0x8c418
    X86_AT(c, 0x8c5b1u);
    push32(c, 0x8c5b6u); x86_call_known(c, 0x8c418u, f_0008c418); X86_RET(c, 0x8c5b6u);
    X86_TICK(c, 22);
    // 08c5b6  push dword ptr [0x34d0c]
    X86_AT(c, 0x8c5b6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34D0Cu))); push32(c, v); }
    // 08c5bc  push dword ptr [0x34d08]
    X86_AT(c, 0x8c5bcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34D08u))); push32(c, v); }
    // 08c5c2  push dword ptr [0x34d04]
    X86_AT(c, 0x8c5c2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34D04u))); push32(c, v); }
    // 08c5c8  call 0x8c478
    X86_AT(c, 0x8c5c8u);
    push32(c, 0x8c5cdu); x86_call_known(c, 0x8c478u, f_0008c478); X86_RET(c, 0x8c5cdu);
    X86_TICK(c, 24);
    // 08c5cd  add esp, 0x40
    X86_AT(c, 0x8c5cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08c5d0  push dword ptr [0x34c70]
    X86_AT(c, 0x8c5d0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34C70u))); push32(c, v); }
    // 08c5d6  push dword ptr [0x34c6c]
    X86_AT(c, 0x8c5d6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34C6Cu))); push32(c, v); }
    // 08c5dc  push dword ptr [0x34c68]
    X86_AT(c, 0x8c5dcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34C68u))); push32(c, v); }
    // 08c5e2  call 0x8c4ac
    X86_AT(c, 0x8c5e2u);
    push32(c, 0x8c5e7u); x86_call_known(c, 0x8c4acu, f_0008c4ac); X86_RET(c, 0x8c5e7u);
    X86_TICK(c, 19);
    // 08c5e7  mov word ptr [0x34c28], 0
    X86_AT(c, 0x8c5e7u);
    wr16((c.sbase[3] + (uint32_t)(0x34C28u)), 0x0u);
    // 08c5f0  mov word ptr [0x34c2a], 0
    X86_AT(c, 0x8c5f0u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Au)), 0x0u);
    // 08c5f9  mov word ptr [0x34c2c], 0x13f
    X86_AT(c, 0x8c5f9u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Cu)), 0x13Fu);
    // 08c602  mov word ptr [0x34c2e], 0xef
    X86_AT(c, 0x8c602u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Eu)), 0xEFu);
    // 08c60b  push 0x34c28
    X86_AT(c, 0x8c60bu);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08c610  push 0x34628
    X86_AT(c, 0x8c610u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c615  call 0xf8
    X86_AT(c, 0x8c615u);
    push32(c, 0x8c61au); x86_call_known(c, 0xf8u, f_000000f8); X86_RET(c, 0x8c61au);
    X86_TICK(c, 15);
    // 08c61a  movsx eax, word ptr [0x34d2c]
    X86_AT(c, 0x8c61au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34D2Cu)));
    // 08c621  push eax
    X86_AT(c, 0x8c621u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c622  call 0x8c4f4
    X86_AT(c, 0x8c622u);
    push32(c, 0x8c627u); x86_call_known(c, 0x8c4f4u, f_0008c4f4); X86_RET(c, 0x8c627u);
    X86_TICK(c, 17);
    // 08c627  movsx eax, word ptr [0x34d2e]
    X86_AT(c, 0x8c627u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34D2Eu)));
    // 08c62e  push eax
    X86_AT(c, 0x8c62eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c62f  push 0x34628
    X86_AT(c, 0x8c62fu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c634  call 0x245
    X86_AT(c, 0x8c634u);
    push32(c, 0x8c639u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8c639u);
    X86_TICK(c, 15);
    // 08c639  push 0
    X86_AT(c, 0x8c639u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c63b  push 0
    X86_AT(c, 0x8c63bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c63d  push 0
    X86_AT(c, 0x8c63du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c63f  push 0x34628
    X86_AT(c, 0x8c63fu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c644  call 0xca
    X86_AT(c, 0x8c644u);
    push32(c, 0x8c649u); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c649u);
    X86_TICK(c, 17);
    // 08c649  add esp, 0x30
    X86_AT(c, 0x8c649u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 08c64c  push 2
    X86_AT(c, 0x8c64cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c64e  push 2
    X86_AT(c, 0x8c64eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c650  push 2
    X86_AT(c, 0x8c650u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c652  push 0x34628
    X86_AT(c, 0x8c652u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c657  call 0xca
    X86_AT(c, 0x8c657u);
    push32(c, 0x8c65cu); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c65cu);
    X86_TICK(c, 15);
    // 08c65c  push 0xf0
    X86_AT(c, 0x8c65cu);
    { uint32_t v = 0xF0u; push32(c, v); }
    // 08c661  push 0x140
    X86_AT(c, 0x8c661u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 08c666  push 3
    X86_AT(c, 0x8c666u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c668  push 0x34628
    X86_AT(c, 0x8c668u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c66d  call 0xca
    X86_AT(c, 0x8c66du);
    push32(c, 0x8c672u); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c672u);
    X86_TICK(c, 2);
    // 08c672  add esp, 0x20
    X86_AT(c, 0x8c672u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_8c675:
    X86_TICK(c, 20);
    // 08c675  pop edi
    X86_AT(c, 0x8c675u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c676  leave 
    X86_AT(c, 0x8c676u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c677  ret 
    X86_AT(c, 0x8c677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c540u, "ran off the end of a function");
}
void f_0008c6d0(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08c6d0  push ebp
    X86_AT(c, 0x8c6d0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c6d1  mov ebp, esp
    X86_AT(c, 0x8c6d1u);
    c.r[5] = c.r[4];
    // 08c6d3  push edi
    X86_AT(c, 0x8c6d3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c6d4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8c6d4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c6d7  and edi, edi
    X86_AT(c, 0x8c6d7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08c6d9  jne 0x8c6e6
    X86_AT(c, 0x8c6d9u);
    if (x86_cc(c, 5)) { goto L_8c6e6; }
    X86_TICK(c, 9);
    // 08c6db  mov word ptr [0x34d28], 3
    X86_AT(c, 0x8c6dbu);
    wr16((c.sbase[3] + (uint32_t)(0x34D28u)), 0x3u);
    // 08c6e4  jmp 0x8c6f8
    X86_AT(c, 0x8c6e4u);
    goto L_8c6f8;
L_8c6e6:
    X86_TICK(c, 7);
    // 08c6e6  cmp edi, 1
    X86_AT(c, 0x8c6e6u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 08c6e9  jne 0x8c7c7
    X86_AT(c, 0x8c6e9u);
    if (x86_cc(c, 5)) { goto L_8c7c7; }
    X86_TICK(c, 2);
    // 08c6ef  mov word ptr [0x34d2a], 3
    X86_AT(c, 0x8c6efu);
    wr16((c.sbase[3] + (uint32_t)(0x34D2Au)), 0x3u);
L_8c6f8:
    X86_TICK(c, 13);
    // 08c6f8  push 1
    X86_AT(c, 0x8c6f8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c6fa  push edi
    X86_AT(c, 0x8c6fau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c6fb  push 0x34628
    X86_AT(c, 0x8c6fbu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c700  call 0x6a
    X86_AT(c, 0x8c700u);
    push32(c, 0x8c705u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c705u);
    X86_TICK(c, 13);
    // 08c705  push 3
    X86_AT(c, 0x8c705u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c707  push edi
    X86_AT(c, 0x8c707u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c708  push 0x34628
    X86_AT(c, 0x8c708u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c70d  call 0x6a
    X86_AT(c, 0x8c70du);
    push32(c, 0x8c712u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c712u);
    X86_TICK(c, 9);
    // 08c712  push edi
    X86_AT(c, 0x8c712u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c713  call 0x8c508
    X86_AT(c, 0x8c713u);
    push32(c, 0x8c718u); x86_call_known(c, 0x8c508u, f_0008c508); X86_RET(c, 0x8c718u);
    X86_TICK(c, 19);
    // 08c718  mov word ptr [0x34c28], 0
    X86_AT(c, 0x8c718u);
    wr16((c.sbase[3] + (uint32_t)(0x34C28u)), 0x0u);
    // 08c721  mov word ptr [0x34c2a], 0
    X86_AT(c, 0x8c721u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Au)), 0x0u);
    // 08c72a  mov word ptr [0x34c2c], 0x27f
    X86_AT(c, 0x8c72au);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Cu)), 0x27Fu);
    // 08c733  mov word ptr [0x34c2e], 0x1df
    X86_AT(c, 0x8c733u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Eu)), 0x1DFu);
    // 08c73c  push 0x34c28
    X86_AT(c, 0x8c73cu);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08c741  push 0x34628
    X86_AT(c, 0x8c741u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c746  call 0xf8
    X86_AT(c, 0x8c746u);
    push32(c, 0x8c74bu); x86_call_known(c, 0xf8u, f_000000f8); X86_RET(c, 0x8c74bu);
    X86_TICK(c, 7);
    // 08c74b  call 0x8c2cc
    X86_AT(c, 0x8c74bu);
    push32(c, 0x8c750u); x86_call_known(c, 0x8c2ccu, f_0008c2cc); X86_RET(c, 0x8c750u);
    X86_TICK(c, 9);
    // 08c750  push 0xf
    X86_AT(c, 0x8c750u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08c752  call 0x8c384
    X86_AT(c, 0x8c752u);
    push32(c, 0x8c757u); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8c757u);
    X86_TICK(c, 9);
    // 08c757  push 0
    X86_AT(c, 0x8c757u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c759  call 0x8c39c
    X86_AT(c, 0x8c759u);
    push32(c, 0x8c75eu); x86_call_known(c, 0x8c39cu, f_0008c39c); X86_RET(c, 0x8c75eu);
    X86_TICK(c, 9);
    // 08c75e  push 0xd
    X86_AT(c, 0x8c75eu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 08c760  call 0x8c3b4
    X86_AT(c, 0x8c760u);
    push32(c, 0x8c765u); x86_call_known(c, 0x8c3b4u, f_0008c3b4); X86_RET(c, 0x8c765u);
    X86_TICK(c, 9);
    // 08c765  push 0
    X86_AT(c, 0x8c765u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c767  call 0x8c3cc
    X86_AT(c, 0x8c767u);
    push32(c, 0x8c76cu); x86_call_known(c, 0x8c3ccu, f_0008c3cc); X86_RET(c, 0x8c76cu);
    X86_TICK(c, 15);
    // 08c76c  movsx eax, word ptr [0x34d2c]
    X86_AT(c, 0x8c76cu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34D2Cu)));
    // 08c773  push eax
    X86_AT(c, 0x8c773u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c774  call 0x8c4f4
    X86_AT(c, 0x8c774u);
    push32(c, 0x8c779u); x86_call_known(c, 0x8c4f4u, f_0008c4f4); X86_RET(c, 0x8c779u);
    X86_TICK(c, 17);
    // 08c779  movsx eax, word ptr [0x34d2e]
    X86_AT(c, 0x8c779u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34D2Eu)));
    // 08c780  push eax
    X86_AT(c, 0x8c780u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c781  push 0x34628
    X86_AT(c, 0x8c781u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c786  call 0x245
    X86_AT(c, 0x8c786u);
    push32(c, 0x8c78bu); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8c78bu);
    X86_TICK(c, 17);
    // 08c78b  add esp, 0x40
    X86_AT(c, 0x8c78bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08c78e  push 0
    X86_AT(c, 0x8c78eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c790  push 0
    X86_AT(c, 0x8c790u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c792  push 0
    X86_AT(c, 0x8c792u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c794  push 0x34628
    X86_AT(c, 0x8c794u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c799  call 0xca
    X86_AT(c, 0x8c799u);
    push32(c, 0x8c79eu); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c79eu);
    X86_TICK(c, 15);
    // 08c79e  push 1
    X86_AT(c, 0x8c79eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c7a0  push 1
    X86_AT(c, 0x8c7a0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c7a2  push 2
    X86_AT(c, 0x8c7a2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c7a4  push 0x34628
    X86_AT(c, 0x8c7a4u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c7a9  call 0xca
    X86_AT(c, 0x8c7a9u);
    push32(c, 0x8c7aeu); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c7aeu);
    X86_TICK(c, 15);
    // 08c7ae  push 0x1e0
    X86_AT(c, 0x8c7aeu);
    { uint32_t v = 0x1E0u; push32(c, v); }
    // 08c7b3  push 0x280
    X86_AT(c, 0x8c7b3u);
    { uint32_t v = 0x280u; push32(c, v); }
    // 08c7b8  push 3
    X86_AT(c, 0x8c7b8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c7ba  push 0x34628
    X86_AT(c, 0x8c7bau);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c7bf  call 0xca
    X86_AT(c, 0x8c7bfu);
    push32(c, 0x8c7c4u); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c7c4u);
    X86_TICK(c, 2);
    // 08c7c4  add esp, 0x30
    X86_AT(c, 0x8c7c4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_8c7c7:
    X86_TICK(c, 20);
    // 08c7c7  pop edi
    X86_AT(c, 0x8c7c7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c7c8  leave 
    X86_AT(c, 0x8c7c8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c7c9  ret 
    X86_AT(c, 0x8c7c9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c6d0u, "ran off the end of a function");
}
void f_0008c7cc(X86Cpu& c) {
    X86_TICK(c, 11);
    // 08c7cc  push 0x600
    X86_AT(c, 0x8c7ccu);
    { uint32_t v = 0x600u; push32(c, v); }
    // 08c7d1  push 0x34628
    X86_AT(c, 0x8c7d1u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c7d6  call 0x48
    X86_AT(c, 0x8c7d6u);
    push32(c, 0x8c7dbu); x86_call_known(c, 0x48u, f_00000048); X86_RET(c, 0x8c7dbu);
    X86_TICK(c, 9);
    // 08c7db  add esp, 8
    X86_AT(c, 0x8c7dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08c7de  and eax, eax
    X86_AT(c, 0x8c7deu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08c7e0  je 0x8c7ec
    X86_AT(c, 0x8c7e0u);
    if (x86_cc(c, 4)) { goto L_8c7ec; }
    X86_TICK(c, 9);
    // 08c7e2  mov eax, 0xffffffff
    X86_AT(c, 0x8c7e2u);
    c.r[0] = 0xFFFFFFFFu;
    // 08c7e7  jmp 0x8c8a6
    X86_AT(c, 0x8c7e7u);
    goto L_8c8a6;
L_8c7ec:
    X86_TICK(c, 17);
    // 08c7ec  mov word ptr [0x34d28], 3
    X86_AT(c, 0x8c7ecu);
    wr16((c.sbase[3] + (uint32_t)(0x34D28u)), 0x3u);
    // 08c7f5  mov eax, 3
    X86_AT(c, 0x8c7f5u);
    c.r[0] = 0x3u;
    // 08c7fa  push eax
    X86_AT(c, 0x8c7fau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c7fb  push 0
    X86_AT(c, 0x8c7fbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c7fd  push 0x34628
    X86_AT(c, 0x8c7fdu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c802  call 0x6a
    X86_AT(c, 0x8c802u);
    push32(c, 0x8c807u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c807u);
    X86_TICK(c, 19);
    // 08c807  mov ax, 3
    X86_AT(c, 0x8c807u);
    s16(c, 0, 0x3u);
    // 08c80b  mov word ptr [0x34d2a], ax
    X86_AT(c, 0x8c80bu);
    wr16((c.sbase[3] + (uint32_t)(0x34D2Au)), (c.r[0] & 0xFFFFu));
    // 08c811  mov eax, 3
    X86_AT(c, 0x8c811u);
    c.r[0] = 0x3u;
    // 08c816  push eax
    X86_AT(c, 0x8c816u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c817  push 1
    X86_AT(c, 0x8c817u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c819  push 0x34628
    X86_AT(c, 0x8c819u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c81e  call 0x6a
    X86_AT(c, 0x8c81eu);
    push32(c, 0x8c823u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c823u);
    X86_TICK(c, 15);
    // 08c823  mov ax, 9
    X86_AT(c, 0x8c823u);
    s16(c, 0, 0x9u);
    // 08c827  mov word ptr [0x34d2c], ax
    X86_AT(c, 0x8c827u);
    wr16((c.sbase[3] + (uint32_t)(0x34D2Cu)), (c.r[0] & 0xFFFFu));
    // 08c82d  mov eax, 9
    X86_AT(c, 0x8c82du);
    c.r[0] = 0x9u;
    // 08c832  push eax
    X86_AT(c, 0x8c832u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c833  call 0x8c4f4
    X86_AT(c, 0x8c833u);
    push32(c, 0x8c838u); x86_call_known(c, 0x8c4f4u, f_0008c4f4); X86_RET(c, 0x8c838u);
    X86_TICK(c, 17);
    // 08c838  mov ax, 0x22
    X86_AT(c, 0x8c838u);
    s16(c, 0, 0x22u);
    // 08c83c  mov word ptr [0x34d2e], ax
    X86_AT(c, 0x8c83cu);
    wr16((c.sbase[3] + (uint32_t)(0x34D2Eu)), (c.r[0] & 0xFFFFu));
    // 08c842  mov eax, 0x22
    X86_AT(c, 0x8c842u);
    c.r[0] = 0x22u;
    // 08c847  push eax
    X86_AT(c, 0x8c847u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c848  push 0x34628
    X86_AT(c, 0x8c848u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c84d  call 0x245
    X86_AT(c, 0x8c84du);
    push32(c, 0x8c852u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8c852u);
    X86_TICK(c, 9);
    // 08c852  push 0
    X86_AT(c, 0x8c852u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c854  call 0x8c508
    X86_AT(c, 0x8c854u);
    push32(c, 0x8c859u); x86_call_known(c, 0x8c508u, f_0008c508); X86_RET(c, 0x8c859u);
    X86_TICK(c, 9);
    // 08c859  push 0
    X86_AT(c, 0x8c859u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c85b  call 0x8c51c
    X86_AT(c, 0x8c85bu);
    push32(c, 0x8c860u); x86_call_known(c, 0x8c51cu, f_0008c51c); X86_RET(c, 0x8c860u);
    X86_TICK(c, 7);
    // 08c860  call 0x8c2cc
    X86_AT(c, 0x8c860u);
    push32(c, 0x8c865u); x86_call_known(c, 0x8c2ccu, f_0008c2cc); X86_RET(c, 0x8c865u);
    X86_TICK(c, 9);
    // 08c865  push 0xf
    X86_AT(c, 0x8c865u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08c867  call 0x8c384
    X86_AT(c, 0x8c867u);
    push32(c, 0x8c86cu); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8c86cu);
    X86_TICK(c, 9);
    // 08c86c  push 0
    X86_AT(c, 0x8c86cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c86e  call 0x8c39c
    X86_AT(c, 0x8c86eu);
    push32(c, 0x8c873u); x86_call_known(c, 0x8c39cu, f_0008c39c); X86_RET(c, 0x8c873u);
    X86_TICK(c, 9);
    // 08c873  push 0xd
    X86_AT(c, 0x8c873u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 08c875  call 0x8c3b4
    X86_AT(c, 0x8c875u);
    push32(c, 0x8c87au); x86_call_known(c, 0x8c3b4u, f_0008c3b4); X86_RET(c, 0x8c87au);
    X86_TICK(c, 11);
    // 08c87a  push 0
    X86_AT(c, 0x8c87au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c87c  push 0x34628
    X86_AT(c, 0x8c87cu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c881  call 0x39c
    X86_AT(c, 0x8c881u);
    push32(c, 0x8c886u); x86_call_known(c, 0x39cu, f_0000039c); X86_RET(c, 0x8c886u);
    X86_TICK(c, 13);
    // 08c886  add esp, 0x40
    X86_AT(c, 0x8c886u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08c889  push 0
    X86_AT(c, 0x8c889u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c88b  push 0x34628
    X86_AT(c, 0x8c88bu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c890  call 0x3be
    X86_AT(c, 0x8c890u);
    push32(c, 0x8c895u); x86_call_known(c, 0x3beu, f_000003be); X86_RET(c, 0x8c895u);
    X86_TICK(c, 11);
    // 08c895  push 0
    X86_AT(c, 0x8c895u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c897  push 0x34628
    X86_AT(c, 0x8c897u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c89c  call 0x3e0
    X86_AT(c, 0x8c89cu);
    push32(c, 0x8c8a1u); x86_call_known(c, 0x3e0u, f_000003e0); X86_RET(c, 0x8c8a1u);
    X86_TICK(c, 4);
    // 08c8a1  sub eax, eax
    X86_AT(c, 0x8c8a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08c8a3  add esp, 0x10
    X86_AT(c, 0x8c8a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_8c8a6:
    X86_TICK(c, 10);
    // 08c8a6  ret 
    X86_AT(c, 0x8c8a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c7ccu, "ran off the end of a function");
}
}

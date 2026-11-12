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
void f_0008ad44(X86Cpu& c) {
    X86_TICK(c, 26);
    // 08ad44  push ebp
    X86_AT(c, 0x8ad44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ad45  mov ebp, esp
    X86_AT(c, 0x8ad45u);
    c.r[5] = c.r[4];
    // 08ad47  push ebx
    X86_AT(c, 0x8ad47u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08ad48  push edi
    X86_AT(c, 0x8ad48u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ad49  mov bl, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8ad49u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08ad4c  mov edi, 0xffffffff
    X86_AT(c, 0x8ad4cu);
    c.r[7] = 0xFFFFFFFFu;
    // 08ad51  cmp byte ptr [ebp + 8], 0
    X86_AT(c, 0x8ad51u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 1);
    // 08ad55  jne 0x8ad5e
    X86_AT(c, 0x8ad55u);
    if (x86_cc(c, 5)) { goto L_8ad5e; }
    X86_TICK(c, 9);
    // 08ad57  sub eax, eax
    X86_AT(c, 0x8ad57u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08ad59  jmp 0x8aebc
    X86_AT(c, 0x8ad59u);
    goto L_8aebc;
L_8ad5e:
    X86_TICK(c, 12);
    // 08ad5e  cmp byte ptr [ebp + 8], 2
    X86_AT(c, 0x8ad5eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x2u, 0, 1);
    // 08ad62  jne 0x8ad69
    X86_AT(c, 0x8ad62u);
    if (x86_cc(c, 5)) { goto L_8ad69; }
    X86_TICK(c, 2);
    // 08ad64  mov edi, 0x100
    X86_AT(c, 0x8ad64u);
    c.r[7] = 0x100u;
L_8ad69:
    X86_TICK(c, 12);
    // 08ad69  cmp byte ptr [ebp + 8], 0x10
    X86_AT(c, 0x8ad69u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x10u, 0, 1);
    // 08ad6d  jne 0x8ad74
    X86_AT(c, 0x8ad6du);
    if (x86_cc(c, 5)) { goto L_8ad74; }
    X86_TICK(c, 2);
    // 08ad6f  mov edi, 0x102
    X86_AT(c, 0x8ad6fu);
    c.r[7] = 0x102u;
L_8ad74:
    X86_TICK(c, 12);
    // 08ad74  cmp byte ptr [ebp + 8], 0x22
    X86_AT(c, 0x8ad74u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x22u, 0, 1);
    // 08ad78  jne 0x8ad7f
    X86_AT(c, 0x8ad78u);
    if (x86_cc(c, 5)) { goto L_8ad7f; }
    X86_TICK(c, 2);
    // 08ad7a  mov edi, 0x104
    X86_AT(c, 0x8ad7au);
    c.r[7] = 0x104u;
L_8ad7f:
    X86_TICK(c, 12);
    // 08ad7f  cmp byte ptr [ebp + 8], 0x23
    X86_AT(c, 0x8ad7fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x23u, 0, 1);
    // 08ad83  jne 0x8ad8a
    X86_AT(c, 0x8ad83u);
    if (x86_cc(c, 5)) { goto L_8ad8a; }
    X86_TICK(c, 2);
    // 08ad85  mov edi, 0x108
    X86_AT(c, 0x8ad85u);
    c.r[7] = 0x108u;
L_8ad8a:
    X86_TICK(c, 12);
    // 08ad8a  cmp byte ptr [ebp + 8], 0x80
    X86_AT(c, 0x8ad8au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x80u, 0, 1);
    // 08ad8e  jne 0x8ae05
    X86_AT(c, 0x8ad8eu);
    if (x86_cc(c, 5)) { goto L_8ae05; }
    X86_TICK(c, 14);
    // 08ad94  movzx ebx, bl
    X86_AT(c, 0x8ad94u);
    c.r[3] = g8(c, 3);
    // 08ad97  mov eax, ebx
    X86_AT(c, 0x8ad97u);
    c.r[0] = c.r[3];
    // 08ad99  and eax, 0x80
    X86_AT(c, 0x8ad99u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x80u, 4); }
    // 08ad9e  cmp eax, 0x80
    X86_AT(c, 0x8ad9eu);
    (void)x86_sub(c, c.r[0], 0x80u, 0, 4);
    // 08ada3  jne 0x8adaa
    X86_AT(c, 0x8ada3u);
    if (x86_cc(c, 5)) { goto L_8adaa; }
    X86_TICK(c, 2);
    // 08ada5  mov edi, 0x80
    X86_AT(c, 0x8ada5u);
    c.r[7] = 0x80u;
L_8adaa:
    X86_TICK(c, 11);
    // 08adaa  mov eax, ebx
    X86_AT(c, 0x8adaau);
    c.r[0] = c.r[3];
    // 08adac  and al, 0x40
    X86_AT(c, 0x8adacu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x40u, 1)); }
    // 08adae  cmp al, 0x40
    X86_AT(c, 0x8adaeu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08adb0  jne 0x8adb7
    X86_AT(c, 0x8adb0u);
    if (x86_cc(c, 5)) { goto L_8adb7; }
    X86_TICK(c, 2);
    // 08adb2  mov edi, 0x40
    X86_AT(c, 0x8adb2u);
    c.r[7] = 0x40u;
L_8adb7:
    X86_TICK(c, 11);
    // 08adb7  mov eax, ebx
    X86_AT(c, 0x8adb7u);
    c.r[0] = c.r[3];
    // 08adb9  and al, 0x20
    X86_AT(c, 0x8adb9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x20u, 1)); }
    // 08adbb  cmp al, 0x20
    X86_AT(c, 0x8adbbu);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 08adbd  jne 0x8adc4
    X86_AT(c, 0x8adbdu);
    if (x86_cc(c, 5)) { goto L_8adc4; }
    X86_TICK(c, 2);
    // 08adbf  mov edi, 0x20
    X86_AT(c, 0x8adbfu);
    c.r[7] = 0x20u;
L_8adc4:
    X86_TICK(c, 11);
    // 08adc4  mov eax, ebx
    X86_AT(c, 0x8adc4u);
    c.r[0] = c.r[3];
    // 08adc6  and al, 0x10
    X86_AT(c, 0x8adc6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x10u, 1)); }
    // 08adc8  cmp al, 0x10
    X86_AT(c, 0x8adc8u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 08adca  jne 0x8add1
    X86_AT(c, 0x8adcau);
    if (x86_cc(c, 5)) { goto L_8add1; }
    X86_TICK(c, 2);
    // 08adcc  mov edi, 0x10
    X86_AT(c, 0x8adccu);
    c.r[7] = 0x10u;
L_8add1:
    X86_TICK(c, 11);
    // 08add1  mov eax, ebx
    X86_AT(c, 0x8add1u);
    c.r[0] = c.r[3];
    // 08add3  and al, 8
    X86_AT(c, 0x8add3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x8u, 1)); }
    // 08add5  cmp al, 8
    X86_AT(c, 0x8add5u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 08add7  jne 0x8adde
    X86_AT(c, 0x8add7u);
    if (x86_cc(c, 5)) { goto L_8adde; }
    X86_TICK(c, 2);
    // 08add9  mov edi, 8
    X86_AT(c, 0x8add9u);
    c.r[7] = 0x8u;
L_8adde:
    X86_TICK(c, 11);
    // 08adde  mov eax, ebx
    X86_AT(c, 0x8addeu);
    c.r[0] = c.r[3];
    // 08ade0  and al, 4
    X86_AT(c, 0x8ade0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x4u, 1)); }
    // 08ade2  cmp al, 4
    X86_AT(c, 0x8ade2u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 08ade4  jne 0x8adeb
    X86_AT(c, 0x8ade4u);
    if (x86_cc(c, 5)) { goto L_8adeb; }
    X86_TICK(c, 2);
    // 08ade6  mov edi, 4
    X86_AT(c, 0x8ade6u);
    c.r[7] = 0x4u;
L_8adeb:
    X86_TICK(c, 11);
    // 08adeb  mov eax, ebx
    X86_AT(c, 0x8adebu);
    c.r[0] = c.r[3];
    // 08aded  and al, 2
    X86_AT(c, 0x8adedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x2u, 1)); }
    // 08adef  cmp al, 2
    X86_AT(c, 0x8adefu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 08adf1  jne 0x8adf8
    X86_AT(c, 0x8adf1u);
    if (x86_cc(c, 5)) { goto L_8adf8; }
    X86_TICK(c, 2);
    // 08adf3  mov edi, 2
    X86_AT(c, 0x8adf3u);
    c.r[7] = 0x2u;
L_8adf8:
    X86_TICK(c, 11);
    // 08adf8  mov eax, ebx
    X86_AT(c, 0x8adf8u);
    c.r[0] = c.r[3];
    // 08adfa  and al, 1
    X86_AT(c, 0x8adfau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 08adfc  dec al
    X86_AT(c, 0x8adfcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 08adfe  jne 0x8ae05
    X86_AT(c, 0x8adfeu);
    if (x86_cc(c, 5)) { goto L_8ae05; }
    X86_TICK(c, 2);
    // 08ae00  mov edi, 1
    X86_AT(c, 0x8ae00u);
    c.r[7] = 0x1u;
L_8ae05:
    X86_TICK(c, 9);
    // 08ae05  mov edx, edi
    X86_AT(c, 0x8ae05u);
    c.r[2] = c.r[7];
    // 08ae07  cmp edx, 0x20
    X86_AT(c, 0x8ae07u);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 08ae0a  ja 0x8ae67
    X86_AT(c, 0x8ae0au);
    if (x86_cc(c, 7)) { goto L_8ae67; }
    X86_TICK(c, 7);
    // 08ae0c  cmp edx, 0x20
    X86_AT(c, 0x8ae0cu);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 08ae0f  je 0x8aea6
    X86_AT(c, 0x8ae0fu);
    if (x86_cc(c, 4)) { goto L_8aea6; }
    X86_TICK(c, 9);
    // 08ae15  dec edx
    X86_AT(c, 0x8ae15u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 08ae16  cmp edx, 0xf
    X86_AT(c, 0x8ae16u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 08ae19  ja 0x8aead
    X86_AT(c, 0x8ae19u);
    if (x86_cc(c, 7)) { goto L_8aead; }
    X86_TICK(c, 7);
    // 08ae1f  jmp dword ptr cs:[edx*4 + 0x8ae27]
    X86_AT(c, 0x8ae1fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0x8AE27u)));
      switch (t) {
      case 0x8ae91u: goto L_8ae91;
      case 0x8ae98u: goto L_8ae98;
      case 0x8ae9fu: goto L_8ae9f;
      case 0x8aeadu: goto L_8aead;
      case 0x8aebau: goto L_8aeba;
      default: x86_jump(c, t); return; } }
L_8ae67:
    X86_TICK(c, 7);
    // 08ae67  cmp edx, 0x80
    X86_AT(c, 0x8ae67u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 08ae6d  je 0x8aeba
    X86_AT(c, 0x8ae6du);
    if (x86_cc(c, 4)) { goto L_8aeba; }
    X86_TICK(c, 7);
    // 08ae6f  cmp edx, 0x100
    X86_AT(c, 0x8ae6fu);
    (void)x86_sub(c, c.r[2], 0x100u, 0, 4);
    // 08ae75  je 0x8aeba
    X86_AT(c, 0x8ae75u);
    if (x86_cc(c, 4)) { goto L_8aeba; }
    X86_TICK(c, 7);
    // 08ae77  cmp edx, 0x102
    X86_AT(c, 0x8ae77u);
    (void)x86_sub(c, c.r[2], 0x102u, 0, 4);
    // 08ae7d  je 0x8aeba
    X86_AT(c, 0x8ae7du);
    if (x86_cc(c, 4)) { goto L_8aeba; }
    X86_TICK(c, 7);
    // 08ae7f  cmp edx, 0x104
    X86_AT(c, 0x8ae7fu);
    (void)x86_sub(c, c.r[2], 0x104u, 0, 4);
    // 08ae85  je 0x8aeba
    X86_AT(c, 0x8ae85u);
    if (x86_cc(c, 4)) { goto L_8aeba; }
    X86_TICK(c, 7);
    // 08ae87  cmp edx, 0x108
    X86_AT(c, 0x8ae87u);
    (void)x86_sub(c, c.r[2], 0x108u, 0, 4);
    // 08ae8d  je 0x8aeba
    X86_AT(c, 0x8ae8du);
    if (x86_cc(c, 4)) { goto L_8aeba; }
    X86_TICK(c, 7);
    // 08ae8f  jmp 0x8aead
    X86_AT(c, 0x8ae8fu);
    goto L_8aead;
L_8ae91:
    X86_TICK(c, 9);
    // 08ae91  push 0xdf8
    X86_AT(c, 0x8ae91u);
    { uint32_t v = 0xDF8u; push32(c, v); }
    // 08ae96  jmp 0x8aeb2
    X86_AT(c, 0x8ae96u);
    goto L_8aeb2;
L_8ae98:
    X86_TICK(c, 9);
    // 08ae98  push 0xe34
    X86_AT(c, 0x8ae98u);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 08ae9d  jmp 0x8aeb2
    X86_AT(c, 0x8ae9du);
    goto L_8aeb2;
L_8ae9f:
    X86_TICK(c, 9);
    // 08ae9f  push 0xe70
    X86_AT(c, 0x8ae9fu);
    { uint32_t v = 0xE70u; push32(c, v); }
    // 08aea4  jmp 0x8aeb2
    X86_AT(c, 0x8aea4u);
    goto L_8aeb2;
L_8aea6:
    X86_TICK(c, 9);
    // 08aea6  push 0xea4
    X86_AT(c, 0x8aea6u);
    { uint32_t v = 0xEA4u; push32(c, v); }
    // 08aeab  jmp 0x8aeb2
    X86_AT(c, 0x8aeabu);
    goto L_8aeb2;
L_8aead:
    X86_TICK(c, 2);
    // 08aead  push 0xee8
    X86_AT(c, 0x8aeadu);
    { uint32_t v = 0xEE8u; push32(c, v); }
L_8aeb2:
    X86_TICK(c, 7);
    // 08aeb2  call 0x8e37c
    X86_AT(c, 0x8aeb2u);
    push32(c, 0x8aeb7u); x86_call_known(c, 0x8e37cu, f_0008e37c); X86_RET(c, 0x8aeb7u);
    X86_TICK(c, 2);
    // 08aeb7  add esp, 4
    X86_AT(c, 0x8aeb7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8aeba:
    X86_TICK(c, 2);
    // 08aeba  mov eax, edi
    X86_AT(c, 0x8aebau);
    c.r[0] = c.r[7];
L_8aebc:
    X86_TICK(c, 24);
    // 08aebc  pop edi
    X86_AT(c, 0x8aebcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08aebd  pop ebx
    X86_AT(c, 0x8aebdu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08aebe  leave 
    X86_AT(c, 0x8aebeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08aebf  ret 
    X86_AT(c, 0x8aebfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ad44u, "ran off the end of a function");
}
void f_0008aec0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08aec0  push 0xf20
    X86_AT(c, 0x8aec0u);
    { uint32_t v = 0xF20u; push32(c, v); }
    // 08aec5  call 0x8e37c
    X86_AT(c, 0x8aec5u);
    push32(c, 0x8aecau); x86_call_known(c, 0x8e37cu, f_0008e37c); X86_RET(c, 0x8aecau);
    X86_TICK(c, 14);
    // 08aeca  mov eax, 0xffffffff
    X86_AT(c, 0x8aecau);
    c.r[0] = 0xFFFFFFFFu;
    // 08aecf  add esp, 4
    X86_AT(c, 0x8aecfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08aed2  ret 
    X86_AT(c, 0x8aed2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8aec0u, "ran off the end of a function");
}
void f_0008aed4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08aed4  mov dword ptr [0xdb4], 0x250f
    X86_AT(c, 0x8aed4u);
    wr32((c.sbase[3] + (uint32_t)(0xDB4u)), 0x250Fu);
    // 08aede  mov dword ptr [0xdb8], 0xb24
    X86_AT(c, 0x8aedeu);
    wr32((c.sbase[3] + (uint32_t)(0xDB8u)), 0xB24u);
    // 08aee8  mov dword ptr [0xdbc], 0x12f
    X86_AT(c, 0x8aee8u);
    wr32((c.sbase[3] + (uint32_t)(0xDBCu)), 0x12Fu);
    // 08aef2  push 0xdd0
    X86_AT(c, 0x8aef2u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08aef7  push 0xdb4
    X86_AT(c, 0x8aef7u);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08aefc  call 0x93a1a
    X86_AT(c, 0x8aefcu);
    push32(c, 0x8af01u); x86_call_known(c, 0x93a1au, f_00093a1a); X86_RET(c, 0x8af01u);
    X86_TICK(c, 14);
    // 08af01  add esp, 8
    X86_AT(c, 0x8af01u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08af04  cmp dword ptr [0xde8], 0
    X86_AT(c, 0x8af04u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDE8u))), 0x0u, 0, 4);
    // 08af0b  jne 0x8af70
    X86_AT(c, 0x8af0bu);
    if (x86_cc(c, 5)) { goto L_8af70; }
    X86_TICK(c, 38);
    // 08af0d  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x8af0du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 08af12  and eax, 0xffff
    X86_AT(c, 0x8af12u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 08af17  mov dword ptr [0xda8], eax
    X86_AT(c, 0x8af17u);
    wr32((c.sbase[3] + (uint32_t)(0xDA8u)), c.r[0]);
    // 08af1c  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x8af1cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 08af21  shr eax, 0x10
    X86_AT(c, 0x8af21u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 08af24  and eax, 0xffff
    X86_AT(c, 0x8af24u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 08af29  mov dword ptr [0xda4], eax
    X86_AT(c, 0x8af29u);
    wr32((c.sbase[3] + (uint32_t)(0xDA4u)), c.r[0]);
    // 08af2e  mov dword ptr [0xdb4], 0x250f
    X86_AT(c, 0x8af2eu);
    wr32((c.sbase[3] + (uint32_t)(0xDB4u)), 0x250Fu);
    // 08af38  mov word ptr [0xdb8], 0x93
    X86_AT(c, 0x8af38u);
    wr16((c.sbase[3] + (uint32_t)(0xDB8u)), 0x93u);
    // 08af41  mov dword ptr [0xdb8], 0xc54
    X86_AT(c, 0x8af41u);
    wr32((c.sbase[3] + (uint32_t)(0xDB8u)), 0xC54u);
    // 08af4b  mov dword ptr [0xdbc], 0xa
    X86_AT(c, 0x8af4bu);
    wr32((c.sbase[3] + (uint32_t)(0xDBCu)), 0xAu);
    // 08af55  push 0xdd0
    X86_AT(c, 0x8af55u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08af5a  push 0xdb4
    X86_AT(c, 0x8af5au);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08af5f  call 0x93a1a
    X86_AT(c, 0x8af5fu);
    push32(c, 0x8af64u); x86_call_known(c, 0x93a1au, f_00093a1a); X86_RET(c, 0x8af64u);
    X86_TICK(c, 14);
    // 08af64  add esp, 8
    X86_AT(c, 0x8af64u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08af67  cmp dword ptr [0xde8], 0
    X86_AT(c, 0x8af67u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDE8u))), 0x0u, 0, 4);
    // 08af6e  je 0x8af77
    X86_AT(c, 0x8af6eu);
    if (x86_cc(c, 4)) { goto L_8af77; }
L_8af70:
    X86_TICK(c, 7);
    // 08af70  call 0x8aec0
    X86_AT(c, 0x8af70u);
    push32(c, 0x8af75u); x86_call_known(c, 0x8aec0u, f_0008aec0); X86_RET(c, 0x8af75u);
    X86_TICK(c, 7);
    // 08af75  jmp 0x8af9a
    X86_AT(c, 0x8af75u);
    goto L_8af9a;
L_8af77:
    X86_TICK(c, 21);
    // 08af77  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x8af77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 08af7c  and eax, 0xffff
    X86_AT(c, 0x8af7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 08af81  mov dword ptr [0xdb0], eax
    X86_AT(c, 0x8af81u);
    wr32((c.sbase[3] + (uint32_t)(0xDB0u)), c.r[0]);
    // 08af86  mov eax, dword ptr [0xdd8]
    X86_AT(c, 0x8af86u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDD8u)));
    // 08af8b  shr eax, 0x10
    X86_AT(c, 0x8af8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 08af8e  and eax, 0xffff
    X86_AT(c, 0x8af8eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 08af93  mov dword ptr [0xdac], eax
    X86_AT(c, 0x8af93u);
    wr32((c.sbase[3] + (uint32_t)(0xDACu)), c.r[0]);
    // 08af98  sub eax, eax
    X86_AT(c, 0x8af98u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8af9a:
    X86_TICK(c, 10);
    // 08af9a  ret 
    X86_AT(c, 0x8af9au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8aed4u, "ran off the end of a function");
}
void f_0008af9c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 08af9c  push ebp
    X86_AT(c, 0x8af9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08af9d  mov ebp, esp
    X86_AT(c, 0x8af9du);
    c.r[5] = c.r[4];
    // 08af9f  push eax
    X86_AT(c, 0x8af9fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08afa0  push ebx
    X86_AT(c, 0x8afa0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08afa1  push esi
    X86_AT(c, 0x8afa1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08afa2  push edi
    X86_AT(c, 0x8afa2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08afa3  cmp dword ptr [0xda0], 0
    X86_AT(c, 0x8afa3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDA0u))), 0x0u, 0, 4);
    // 08afaa  jne 0x8afb3
    X86_AT(c, 0x8afaau);
    if (x86_cc(c, 5)) { goto L_8afb3; }
    X86_TICK(c, 9);
    // 08afac  sub eax, eax
    X86_AT(c, 0x8afacu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08afae  jmp 0x8b0be
    X86_AT(c, 0x8afaeu);
    goto L_8b0be;
L_8afb3:
    X86_TICK(c, 35);
    // 08afb3  mov word ptr [0xb14], 0x93
    X86_AT(c, 0x8afb3u);
    wr16((c.sbase[3] + (uint32_t)(0xB14u)), 0x93u);
    // 08afbc  mov ax, word ptr [0xda4]
    X86_AT(c, 0x8afbcu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDA4u))));
    // 08afc2  mov word ptr [0xb16], ax
    X86_AT(c, 0x8afc2u);
    wr16((c.sbase[3] + (uint32_t)(0xB16u)), (c.r[0] & 0xFFFFu));
    // 08afc8  mov dword ptr [0xb1e], 0x54c0
    X86_AT(c, 0x8afc8u);
    wr32((c.sbase[3] + (uint32_t)(0xB1Eu)), 0x54C0u);
    // 08afd2  mov word ptr [0xdb4], 0x2511
    X86_AT(c, 0x8afd2u);
    wr16((c.sbase[3] + (uint32_t)(0xDB4u)), 0x2511u);
    // 08afdb  mov byte ptr [0xdbd], 0
    X86_AT(c, 0x8afdbu);
    wr8((c.sbase[3] + (uint32_t)(0xDBDu)), 0x0u);
    // 08afe2  mov byte ptr [0xdbc], 0
    X86_AT(c, 0x8afe2u);
    wr8((c.sbase[3] + (uint32_t)(0xDBCu)), 0x0u);
    // 08afe9  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x8afe9u);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 08aff3  mov ax, word ptr [0xda8]
    X86_AT(c, 0x8aff3u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDA8u))));
    // 08aff9  mov word ptr [0xdc8], ax
    X86_AT(c, 0x8aff9u);
    wr16((c.sbase[3] + (uint32_t)(0xDC8u)), (c.r[0] & 0xFFFFu));
    // 08afff  push 0xdd0
    X86_AT(c, 0x8afffu);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08b004  push 0xdb4
    X86_AT(c, 0x8b004u);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08b009  call 0x93a1a
    X86_AT(c, 0x8b009u);
    push32(c, 0x8b00eu); x86_call_known(c, 0x93a1au, f_00093a1a); X86_RET(c, 0x8b00eu);
    X86_TICK(c, 19);
    // 08b00e  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x8b00eu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 08b014  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x8b014u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 08b019  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8b019u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08b01c  add esp, 8
    X86_AT(c, 0x8b01cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b01f  and bl, bl
    X86_AT(c, 0x8b01fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08b021  je 0x8b032
    X86_AT(c, 0x8b021u);
    if (x86_cc(c, 4)) { goto L_8b032; }
    X86_TICK(c, 11);
    // 08b023  push eax
    X86_AT(c, 0x8b023u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b024  push ebx
    X86_AT(c, 0x8b024u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b025  call 0x8ad44
    X86_AT(c, 0x8b025u);
    push32(c, 0x8b02au); x86_call_known(c, 0x8ad44u, f_0008ad44); X86_RET(c, 0x8b02au);
    X86_TICK(c, 9);
    // 08b02a  add esp, 8
    X86_AT(c, 0x8b02au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b02d  jmp 0x8b0be
    X86_AT(c, 0x8b02du);
    goto L_8b0be;
L_8b032:
    X86_TICK(c, 54);
    // 08b032  mov eax, 0xb10
    X86_AT(c, 0x8b032u);
    c.r[0] = 0xB10u;
    // 08b037  movzx edx, byte ptr [eax + 0x14]
    X86_AT(c, 0x8b037u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)));
    // 08b03b  mov dword ptr [eax + 0x284], edx
    X86_AT(c, 0x8b03bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x284u)), c.r[2]);
    // 08b041  movzx edx, byte ptr [eax + 0x15]
    X86_AT(c, 0x8b041u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x15u)));
    // 08b045  mov dword ptr [eax + 0x288], edx
    X86_AT(c, 0x8b045u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x288u)), c.r[2]);
    // 08b04b  movzx edx, byte ptr [eax + 0x16]
    X86_AT(c, 0x8b04bu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x16u)));
    // 08b04f  mov dword ptr [eax + 0x28c], edx
    X86_AT(c, 0x8b04fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x28Cu)), c.r[2]);
    // 08b055  dec dword ptr [eax + 0x28c]
    X86_AT(c, 0x8b055u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x28Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 08b05b  mov dl, byte ptr [eax + 0x17]
    X86_AT(c, 0x8b05bu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x17u))));
    // 08b05e  mov byte ptr [eax + 0x279], dl
    X86_AT(c, 0x8b05eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x279u)), g8(c, 2));
    // 08b064  mov dl, byte ptr [eax + 0x18]
    X86_AT(c, 0x8b064u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x18u))));
    // 08b067  mov byte ptr [eax + 0x27a], dl
    X86_AT(c, 0x8b067u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x27Au)), g8(c, 2));
    // 08b06d  mov dl, byte ptr [eax + 0x19]
    X86_AT(c, 0x8b06du);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x19u))));
    // 08b070  mov byte ptr [eax + 0x27b], dl
    X86_AT(c, 0x8b070u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x27Bu)), g8(c, 2));
    // 08b076  sub edi, edi
    X86_AT(c, 0x8b076u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 08b078  mov esi, 6
    X86_AT(c, 0x8b078u);
    c.r[6] = 0x6u;
L_8b07d:
    X86_TICK(c, 7);
    // 08b07d  cmp edi, 0x63
    X86_AT(c, 0x8b07du);
    (void)x86_sub(c, c.r[7], 0x63u, 0, 4);
    // 08b080  jge 0x8b0b7
    X86_AT(c, 0x8b080u);
    if (x86_cc(c, 13)) { goto L_8b0b7; }
    X86_TICK(c, 43);
    // 08b082  mov eax, 0xb10
    X86_AT(c, 0x8b082u);
    c.r[0] = 0xB10u;
    // 08b087  lea edx, [edi + edi*2]
    X86_AT(c, 0x8b087u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08b08a  mov ecx, esi
    X86_AT(c, 0x8b08au);
    c.r[1] = c.r[6];
    // 08b08c  inc esi
    X86_AT(c, 0x8b08cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b08d  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0x8b08du);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 08b091  mov byte ptr [eax + edx*1 + 0x150], cl
    X86_AT(c, 0x8b091u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u)), g8(c, 1));
    // 08b098  mov ecx, esi
    X86_AT(c, 0x8b098u);
    c.r[1] = c.r[6];
    // 08b09a  inc esi
    X86_AT(c, 0x8b09au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b09b  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0x8b09bu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 08b09f  mov byte ptr [eax + edx*1 + 0x151], cl
    X86_AT(c, 0x8b09fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x151u)), g8(c, 1));
    // 08b0a6  mov ecx, esi
    X86_AT(c, 0x8b0a6u);
    c.r[1] = c.r[6];
    // 08b0a8  inc esi
    X86_AT(c, 0x8b0a8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b0a9  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0x8b0a9u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 08b0ad  mov byte ptr [eax + edx*1 + 0x152], cl
    X86_AT(c, 0x8b0adu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x152u)), g8(c, 1));
    // 08b0b4  inc edi
    X86_AT(c, 0x8b0b4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08b0b5  jmp 0x8b07d
    X86_AT(c, 0x8b0b5u);
    X86_POLL(c, 0x8b07du); goto L_8b07d;
L_8b0b7:
    X86_TICK(c, 4);
    // 08b0b7  sub eax, eax
    X86_AT(c, 0x8b0b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08b0b9  mov dword ptr [0xda0], eax
    X86_AT(c, 0x8b0b9u);
    wr32((c.sbase[3] + (uint32_t)(0xDA0u)), c.r[0]);
L_8b0be:
    X86_TICK(c, 28);
    // 08b0be  pop edi
    X86_AT(c, 0x8b0beu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08b0bf  pop esi
    X86_AT(c, 0x8b0bfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08b0c0  pop ebx
    X86_AT(c, 0x8b0c0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08b0c1  leave 
    X86_AT(c, 0x8b0c1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b0c2  ret 
    X86_AT(c, 0x8b0c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8af9cu, "ran off the end of a function");
}
void f_0008b0be(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08b0be  pop edi
    X86_AT(c, 0x8b0beu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08b0bf  pop esi
    X86_AT(c, 0x8b0bfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08b0c0  pop ebx
    X86_AT(c, 0x8b0c0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08b0c1  leave 
    X86_AT(c, 0x8b0c1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b0c2  ret 
    X86_AT(c, 0x8b0c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b0beu, "ran off the end of a function");
}
void f_0008b0c4(X86Cpu& c) {
    X86_TICK(c, 37);
    // 08b0c4  push ebp
    X86_AT(c, 0x8b0c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b0c5  mov ebp, esp
    X86_AT(c, 0x8b0c5u);
    c.r[5] = c.r[4];
    // 08b0c7  push eax
    X86_AT(c, 0x8b0c7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b0c8  push edi
    X86_AT(c, 0x8b0c8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b0c9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8b0c9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08b0cc  mov al, byte ptr [edi]
    X86_AT(c, 0x8b0ccu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08b0ce  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8b0ceu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08b0d1  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0x8b0d1u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08b0d4  mov byte ptr [ebp - 2], dl
    X86_AT(c, 0x8b0d4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 2));
    // 08b0d7  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0x8b0d7u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 08b0da  dec ecx
    X86_AT(c, 0x8b0dau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 08b0db  and cl, cl
    X86_AT(c, 0x8b0dbu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 08b0dd  jge 0x8b0ed
    X86_AT(c, 0x8b0ddu);
    if (x86_cc(c, 13)) { goto L_8b0ed; }
    X86_TICK(c, 20);
    // 08b0df  mov cl, 0x4a
    X86_AT(c, 0x8b0dfu);
    s8(c, 1, 0x4Au);
    // 08b0e1  dec byte ptr [ebp - 2]
    X86_AT(c, 0x8b0e1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 08b0e4  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x8b0e4u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 08b0e8  jge 0x8b0ed
    X86_AT(c, 0x8b0e8u);
    if (x86_cc(c, 13)) { goto L_8b0ed; }
    X86_TICK(c, 6);
    // 08b0ea  dec byte ptr [ebp - 1]
    X86_AT(c, 0x8b0eau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
L_8b0ed:
    X86_TICK(c, 34);
    // 08b0ed  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0x8b0edu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 08b0f0  mov byte ptr [edi], al
    X86_AT(c, 0x8b0f0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 08b0f2  mov al, byte ptr [ebp - 2]
    X86_AT(c, 0x8b0f2u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 08b0f5  mov byte ptr [edi + 1], al
    X86_AT(c, 0x8b0f5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 08b0f8  mov byte ptr [edi + 2], cl
    X86_AT(c, 0x8b0f8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 08b0fb  pop edi
    X86_AT(c, 0x8b0fbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08b0fc  leave 
    X86_AT(c, 0x8b0fcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b0fd  ret 
    X86_AT(c, 0x8b0fdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b0c4u, "ran off the end of a function");
}
void f_0008b2a4(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08b2a4  push ebp
    X86_AT(c, 0x8b2a4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b2a5  mov ebp, esp
    X86_AT(c, 0x8b2a5u);
    c.r[5] = c.r[4];
    // 08b2a7  sub esp, 8
    X86_AT(c, 0x8b2a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 08b2aa  push ebx
    X86_AT(c, 0x8b2aau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b2ab  push esi
    X86_AT(c, 0x8b2abu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b2ac  push edi
    X86_AT(c, 0x8b2acu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b2ad  call 0x8b660
    X86_AT(c, 0x8b2adu);
    push32(c, 0x8b2b2u); x86_call_known(c, 0x8b660u, f_0008b660); X86_RET(c, 0x8b2b2u);
    X86_TICK(c, 12);
    // 08b2b2  cmp dword ptr [0xda0], 0
    X86_AT(c, 0x8b2b2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDA0u))), 0x0u, 0, 4);
    // 08b2b9  jne 0x8b2fd
    X86_AT(c, 0x8b2b9u);
    if (x86_cc(c, 5)) { goto L_8b2fd; }
    X86_TICK(c, 18);
    // 08b2bb  dec dword ptr [ebp + 0xc]
    X86_AT(c, 0x8b2bbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 08b2be  cmp dword ptr [ebp + 0xc], 0xffffffff
    X86_AT(c, 0x8b2beu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0xFFFFFFFFu, 0, 4);
    // 08b2c2  je 0x8b46b
    X86_AT(c, 0x8b2c2u);
    if (x86_cc(c, 4)) { goto L_8b46b; }
    X86_TICK(c, 15);
    // 08b2c8  mov eax, dword ptr [0xd9c]
    X86_AT(c, 0x8b2c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD9Cu)));
    // 08b2cd  cmp eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8b2cdu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 08b2d0  jge 0x8b2d5
    X86_AT(c, 0x8b2d0u);
    if (x86_cc(c, 13)) { goto L_8b2d5; }
    X86_TICK(c, 2);
    // 08b2d2  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0x8b2d2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
L_8b2d5:
    X86_TICK(c, 4);
    // 08b2d5  mov edi, 0xffffffff
    X86_AT(c, 0x8b2d5u);
    c.r[7] = 0xFFFFFFFFu;
    // 08b2da  mov esi, edi
    X86_AT(c, 0x8b2dau);
    c.r[6] = c.r[7];
L_8b2dc:
    X86_TICK(c, 9);
    // 08b2dc  inc esi
    X86_AT(c, 0x8b2dcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b2dd  cmp esi, 0x63
    X86_AT(c, 0x8b2ddu);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 08b2e0  jge 0x8b2f4
    X86_AT(c, 0x8b2e0u);
    if (x86_cc(c, 13)) { goto L_8b2f4; }
    X86_TICK(c, 13);
    // 08b2e2  movzx eax, byte ptr [esi + esi*2 + 0xc60]
    X86_AT(c, 0x8b2e2u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[6] * 2 + 0xC60u)));
    // 08b2ea  test al, 0x80
    X86_AT(c, 0x8b2eau);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 08b2ec  jne 0x8b2ef
    X86_AT(c, 0x8b2ecu);
    if (x86_cc(c, 5)) { goto L_8b2ef; }
    X86_TICK(c, 2);
    // 08b2ee  inc edi
    X86_AT(c, 0x8b2eeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_8b2ef:
    X86_TICK(c, 11);
    // 08b2ef  cmp edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8b2efu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 08b2f2  jne 0x8b2dc
    X86_AT(c, 0x8b2f2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8b2dcu); goto L_8b2dc; }
L_8b2f4:
    X86_TICK(c, 7);
    // 08b2f4  cmp esi, 0x63
    X86_AT(c, 0x8b2f4u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 08b2f7  jl 0x8b307
    X86_AT(c, 0x8b2f7u);
    if (x86_cc(c, 12)) { goto L_8b307; }
    X86_TICK(c, 7);
    // 08b2f9  and edi, edi
    X86_AT(c, 0x8b2f9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08b2fb  jge 0x8b307
    X86_AT(c, 0x8b2fbu);
    if (x86_cc(c, 13)) { goto L_8b307; }
L_8b2fd:
    X86_TICK(c, 9);
    // 08b2fd  mov eax, 0xffffffff
    X86_AT(c, 0x8b2fdu);
    c.r[0] = 0xFFFFFFFFu;
    // 08b302  jmp 0x8b46d
    X86_AT(c, 0x8b302u);
    goto L_8b46d;
L_8b307:
    X86_TICK(c, 11);
    // 08b307  cmp edi, dword ptr [0xd9c]
    X86_AT(c, 0x8b307u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xD9Cu))), 0, 4);
    // 08b30d  jne 0x8b326
    X86_AT(c, 0x8b30du);
    if (x86_cc(c, 5)) { goto L_8b326; }
    X86_TICK(c, 23);
    // 08b30f  mov al, byte ptr [0xd89]
    X86_AT(c, 0x8b30fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD89u))));
    // 08b314  mov byte ptr [ebp - 3], al
    X86_AT(c, 0x8b314u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 0));
    // 08b317  mov al, byte ptr [0xd8a]
    X86_AT(c, 0x8b317u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD8Au))));
    // 08b31c  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x8b31cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 08b31f  mov al, byte ptr [0xd8b]
    X86_AT(c, 0x8b31fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD8Bu))));
    // 08b324  jmp 0x8b349
    X86_AT(c, 0x8b324u);
    goto L_8b349;
L_8b326:
    X86_TICK(c, 20);
    // 08b326  mov eax, 0xb10
    X86_AT(c, 0x8b326u);
    c.r[0] = 0xB10u;
    // 08b32b  lea edx, [edi + edi*2]
    X86_AT(c, 0x8b32bu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08b32e  mov cl, byte ptr [eax + edx*1 + 0x153]
    X86_AT(c, 0x8b32eu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x153u))));
    // 08b335  mov byte ptr [ebp - 3], cl
    X86_AT(c, 0x8b335u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 1));
    // 08b338  mov cl, byte ptr [eax + edx*1 + 0x154]
    X86_AT(c, 0x8b338u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x154u))));
    // 08b33f  mov byte ptr [ebp - 2], cl
    X86_AT(c, 0x8b33fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 1));
    // 08b342  mov al, byte ptr [eax + edx*1 + 0x155]
    X86_AT(c, 0x8b342u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x155u))));
L_8b349:
    X86_TICK(c, 13);
    // 08b349  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8b349u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08b34c  lea eax, [ebp - 3]
    X86_AT(c, 0x8b34cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFDu);
    // 08b34f  push eax
    X86_AT(c, 0x8b34fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b350  call 0x8b0c4
    X86_AT(c, 0x8b350u);
    push32(c, 0x8b355u); x86_call_known(c, 0x8b0c4u, f_0008b0c4); X86_RET(c, 0x8b355u);
    X86_TICK(c, 17);
    // 08b355  movsx eax, word ptr [0xb10]
    X86_AT(c, 0x8b355u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xB10u)));
    // 08b35c  push eax
    X86_AT(c, 0x8b35cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b35d  push eax
    X86_AT(c, 0x8b35du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b35e  call 0x8c364
    X86_AT(c, 0x8b35eu);
    push32(c, 0x8b363u); x86_call_known(c, 0x8c364u, f_0008c364); X86_RET(c, 0x8b363u);
    X86_TICK(c, 2);
    // 08b363  add esp, 0xc
    X86_AT(c, 0x8b363u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_8b366:
    X86_TICK(c, 64);
    // 08b366  mov eax, 0xb10
    X86_AT(c, 0x8b366u);
    c.r[0] = 0xB10u;
    // 08b36b  lea edx, [edi + edi*2]
    X86_AT(c, 0x8b36bu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08b36e  mov cl, byte ptr [eax + edx*1 + 0x150]
    X86_AT(c, 0x8b36eu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u))));
    // 08b375  mov byte ptr [eax + 0x144], cl
    X86_AT(c, 0x8b375u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x144u)), g8(c, 1));
    // 08b37b  mov cl, byte ptr [eax + edx*1 + 0x151]
    X86_AT(c, 0x8b37bu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x151u))));
    // 08b382  mov byte ptr [eax + 0x145], cl
    X86_AT(c, 0x8b382u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x145u)), g8(c, 1));
    // 08b388  mov dl, byte ptr [eax + edx*1 + 0x152]
    X86_AT(c, 0x8b388u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x152u))));
    // 08b38f  mov byte ptr [eax + 0x146], dl
    X86_AT(c, 0x8b38fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x146u)), g8(c, 2));
    // 08b395  mov dl, byte ptr [ebp - 3]
    X86_AT(c, 0x8b395u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu))));
    // 08b398  mov byte ptr [eax + 0x147], dl
    X86_AT(c, 0x8b398u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x147u)), g8(c, 2));
    // 08b39e  mov dl, byte ptr [ebp - 2]
    X86_AT(c, 0x8b39eu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 08b3a1  mov byte ptr [eax + 0x148], dl
    X86_AT(c, 0x8b3a1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x148u)), g8(c, 2));
    // 08b3a7  mov dl, byte ptr [ebp - 1]
    X86_AT(c, 0x8b3a7u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 08b3aa  mov byte ptr [eax + 0x149], dl
    X86_AT(c, 0x8b3aau);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x149u)), g8(c, 2));
    // 08b3b0  mov word ptr [eax + 4], 0x93
    X86_AT(c, 0x8b3b0u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), 0x93u);
    // 08b3b6  mov dx, word ptr [eax + 0x29c]
    X86_AT(c, 0x8b3b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x29Cu))));
    // 08b3bd  mov word ptr [eax + 6], dx
    X86_AT(c, 0x8b3bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 08b3c1  mov dword ptr [eax + 0xe], 0x50c0
    X86_AT(c, 0x8b3c1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xEu)), 0x50C0u);
    // 08b3c8  mov word ptr [eax + 0x2a4], 0x2511
    X86_AT(c, 0x8b3c8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2A4u)), 0x2511u);
    // 08b3d1  cmp dword ptr [ebp + 0xc], 0
    X86_AT(c, 0x8b3d1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 4);
    // 08b3d5  jge 0x8b3e0
    X86_AT(c, 0x8b3d5u);
    if (x86_cc(c, 13)) { goto L_8b3e0; }
    X86_TICK(c, 9);
    // 08b3d7  mov byte ptr [eax + 0x2ad], 0xff
    X86_AT(c, 0x8b3d7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x2ADu)), 0xFFu);
    // 08b3de  jmp 0x8b3ef
    X86_AT(c, 0x8b3deu);
    goto L_8b3ef;
L_8b3e0:
    X86_TICK(c, 8);
    // 08b3e0  mov byte ptr [0xdbd], 0xfe
    X86_AT(c, 0x8b3e0u);
    wr8((c.sbase[3] + (uint32_t)(0xDBDu)), 0xFEu);
    // 08b3e7  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8b3e7u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08b3ea  mov byte ptr [0xdb9], al
    X86_AT(c, 0x8b3eau);
    wr8((c.sbase[3] + (uint32_t)(0xDB9u)), g8(c, 0));
L_8b3ef:
    X86_TICK(c, 21);
    // 08b3ef  mov byte ptr [0xdbc], 1
    X86_AT(c, 0x8b3efu);
    wr8((c.sbase[3] + (uint32_t)(0xDBCu)), 0x1u);
    // 08b3f6  mov ax, word ptr [0xdb0]
    X86_AT(c, 0x8b3f6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDB0u))));
    // 08b3fc  mov word ptr [0xdc8], ax
    X86_AT(c, 0x8b3fcu);
    wr16((c.sbase[3] + (uint32_t)(0xDC8u)), (c.r[0] & 0xFFFFu));
    // 08b402  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x8b402u);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 08b40c  push 0xdd0
    X86_AT(c, 0x8b40cu);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08b411  push 0xdb4
    X86_AT(c, 0x8b411u);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08b416  call 0x93a1a
    X86_AT(c, 0x8b416u);
    push32(c, 0x8b41bu); x86_call_known(c, 0x93a1au, f_00093a1a); X86_RET(c, 0x8b41bu);
    X86_TICK(c, 19);
    // 08b41b  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x8b41bu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 08b421  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x8b421u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 08b426  mov byte ptr [ebp - 4], al
    X86_AT(c, 0x8b426u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), g8(c, 0));
    // 08b429  add esp, 8
    X86_AT(c, 0x8b429u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b42c  and bl, bl
    X86_AT(c, 0x8b42cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08b42e  je 0x8b459
    X86_AT(c, 0x8b42eu);
    if (x86_cc(c, 4)) { goto L_8b459; }
    X86_TICK(c, 11);
    // 08b430  push eax
    X86_AT(c, 0x8b430u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b431  push ebx
    X86_AT(c, 0x8b431u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b432  call 0x8ad44
    X86_AT(c, 0x8b432u);
    push32(c, 0x8b437u); x86_call_known(c, 0x8ad44u, f_0008ad44); X86_RET(c, 0x8b437u);
    X86_TICK(c, 16);
    // 08b437  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x8b437u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 08b43a  add esp, 8
    X86_AT(c, 0x8b43au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b43d  cmp dword ptr [ebp - 8], 0x102
    X86_AT(c, 0x8b43du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x102u, 0, 4);
    // 08b444  jne 0x8b459
    X86_AT(c, 0x8b444u);
    if (x86_cc(c, 5)) { goto L_8b459; }
    X86_TICK(c, 7);
    // 08b446  call 0x8b554
    X86_AT(c, 0x8b446u);
    push32(c, 0x8b44bu); x86_call_known(c, 0x8b554u, f_0008b554); X86_RET(c, 0x8b44bu);
L_8b44b:
    X86_TICK(c, 7);
    // 08b44b  call 0x8b6b8
    X86_AT(c, 0x8b44bu);
    push32(c, 0x8b450u); x86_call_known(c, 0x8b6b8u, f_0008b6b8); X86_RET(c, 0x8b450u);
    X86_TICK(c, 7);
    // 08b450  and eax, eax
    X86_AT(c, 0x8b450u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08b452  jne 0x8b44b
    X86_AT(c, 0x8b452u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8b44bu); goto L_8b44b; }
    X86_TICK(c, 7);
    // 08b454  jmp 0x8b366
    X86_AT(c, 0x8b454u);
    X86_POLL(c, 0x8b366u); goto L_8b366;
L_8b459:
    X86_TICK(c, 7);
    // 08b459  and bl, bl
    X86_AT(c, 0x8b459u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08b45b  je 0x8b46b
    X86_AT(c, 0x8b45bu);
    if (x86_cc(c, 4)) { goto L_8b46b; }
    X86_TICK(c, 14);
    // 08b45d  push dword ptr [ebp - 4]
    X86_AT(c, 0x8b45du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 08b460  push ebx
    X86_AT(c, 0x8b460u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b461  call 0x8ad44
    X86_AT(c, 0x8b461u);
    push32(c, 0x8b466u); x86_call_known(c, 0x8ad44u, f_0008ad44); X86_RET(c, 0x8b466u);
    X86_TICK(c, 9);
    // 08b466  add esp, 8
    X86_AT(c, 0x8b466u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b469  jmp 0x8b46d
    X86_AT(c, 0x8b469u);
    goto L_8b46d;
L_8b46b:
    X86_TICK(c, 2);
    // 08b46b  sub eax, eax
    X86_AT(c, 0x8b46bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8b46d:
    X86_TICK(c, 28);
    // 08b46d  pop edi
    X86_AT(c, 0x8b46du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08b46e  pop esi
    X86_AT(c, 0x8b46eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08b46f  pop ebx
    X86_AT(c, 0x8b46fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08b470  leave 
    X86_AT(c, 0x8b470u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b471  ret 
    X86_AT(c, 0x8b471u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b2a4u, "ran off the end of a function");
}
void f_0008b554(X86Cpu& c) {
    X86_TICK(c, 29);
    // 08b554  push ebp
    X86_AT(c, 0x8b554u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b555  mov ebp, esp
    X86_AT(c, 0x8b555u);
    c.r[5] = c.r[4];
    // 08b557  push eax
    X86_AT(c, 0x8b557u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b558  push ebx
    X86_AT(c, 0x8b558u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b559  mov word ptr [0xb14], 0x93
    X86_AT(c, 0x8b559u);
    wr16((c.sbase[3] + (uint32_t)(0xB14u)), 0x93u);
    // 08b562  mov dword ptr [0xb1e], 0x52c0
    X86_AT(c, 0x8b562u);
    wr32((c.sbase[3] + (uint32_t)(0xB1Eu)), 0x52C0u);
    // 08b56c  mov dword ptr [0xdb4], 0x2511
    X86_AT(c, 0x8b56cu);
    wr32((c.sbase[3] + (uint32_t)(0xDB4u)), 0x2511u);
    // 08b576  mov word ptr [0xdbc], 0
    X86_AT(c, 0x8b576u);
    wr16((c.sbase[3] + (uint32_t)(0xDBCu)), 0x0u);
    // 08b57f  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x8b57fu);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 08b589  push 0xdd0
    X86_AT(c, 0x8b589u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08b58e  push 0xdb4
    X86_AT(c, 0x8b58eu);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08b593  call 0x93a1a
    X86_AT(c, 0x8b593u);
    push32(c, 0x8b598u); x86_call_known(c, 0x93a1au, f_00093a1a); X86_RET(c, 0x8b598u);
    X86_TICK(c, 19);
    // 08b598  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x8b598u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 08b59e  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x8b59eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 08b5a3  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8b5a3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08b5a6  add esp, 8
    X86_AT(c, 0x8b5a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b5a9  and bl, bl
    X86_AT(c, 0x8b5a9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08b5ab  je 0x8b5be
    X86_AT(c, 0x8b5abu);
    if (x86_cc(c, 4)) { goto L_8b5be; }
    X86_TICK(c, 11);
    // 08b5ad  push eax
    X86_AT(c, 0x8b5adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b5ae  push ebx
    X86_AT(c, 0x8b5aeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b5af  call 0x8ad44
    X86_AT(c, 0x8b5afu);
    push32(c, 0x8b5b4u); x86_call_known(c, 0x8ad44u, f_0008ad44); X86_RET(c, 0x8b5b4u);
    X86_TICK(c, 11);
    // 08b5b4  mov eax, 0xffffffff
    X86_AT(c, 0x8b5b4u);
    c.r[0] = 0xFFFFFFFFu;
    // 08b5b9  add esp, 8
    X86_AT(c, 0x8b5b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b5bc  jmp 0x8b5c0
    X86_AT(c, 0x8b5bcu);
    goto L_8b5c0;
L_8b5be:
    X86_TICK(c, 2);
    // 08b5be  sub eax, eax
    X86_AT(c, 0x8b5beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8b5c0:
    X86_TICK(c, 20);
    // 08b5c0  pop ebx
    X86_AT(c, 0x8b5c0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08b5c1  leave 
    X86_AT(c, 0x8b5c1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b5c2  ret 
    X86_AT(c, 0x8b5c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b554u, "ran off the end of a function");
}
void f_0008b660(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08b660  push edi
    X86_AT(c, 0x8b660u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b661  call 0x8b6b8
    X86_AT(c, 0x8b661u);
    push32(c, 0x8b666u); x86_call_known(c, 0x8b6b8u, f_0008b6b8); X86_RET(c, 0x8b666u);
    X86_TICK(c, 10);
    // 08b666  xchg edi, eax
    X86_AT(c, 0x8b666u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 08b667  and edi, edi
    X86_AT(c, 0x8b667u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08b669  je 0x8b670
    X86_AT(c, 0x8b669u);
    if (x86_cc(c, 4)) { goto L_8b670; }
    X86_TICK(c, 7);
    // 08b66b  cmp edi, 0xffffffff
    X86_AT(c, 0x8b66bu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 08b66e  jne 0x8b679
    X86_AT(c, 0x8b66eu);
    if (x86_cc(c, 5)) { goto L_8b679; }
L_8b670:
    X86_TICK(c, 12);
    // 08b670  cmp dword ptr [0xda0], 0
    X86_AT(c, 0x8b670u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDA0u))), 0x0u, 0, 4);
    // 08b677  je 0x8b6b3
    X86_AT(c, 0x8b677u);
    if (x86_cc(c, 4)) { goto L_8b6b3; }
L_8b679:
    X86_TICK(c, 7);
    // 08b679  call 0x8b554
    X86_AT(c, 0x8b679u);
    push32(c, 0x8b67eu); x86_call_known(c, 0x8b554u, f_0008b554); X86_RET(c, 0x8b67eu);
L_8b67e:
    X86_TICK(c, 7);
    // 08b67e  call 0x8af9c
    X86_AT(c, 0x8b67eu);
    push32(c, 0x8b683u); x86_call_known(c, 0x8af9cu, f_0008af9c); X86_RET(c, 0x8b683u);
    X86_TICK(c, 10);
    // 08b683  xchg edi, eax
    X86_AT(c, 0x8b683u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 08b684  cmp edi, 0x80
    X86_AT(c, 0x8b684u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 08b68a  je 0x8b6a9
    X86_AT(c, 0x8b68au);
    if (x86_cc(c, 4)) { goto L_8b6a9; }
    X86_TICK(c, 7);
    // 08b68c  cmp edi, 0x10
    X86_AT(c, 0x8b68cu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 08b68f  je 0x8b6a9
    X86_AT(c, 0x8b68fu);
    if (x86_cc(c, 4)) { goto L_8b6a9; }
    X86_TICK(c, 7);
    // 08b691  cmp edi, 4
    X86_AT(c, 0x8b691u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 08b694  je 0x8b6a9
    X86_AT(c, 0x8b694u);
    if (x86_cc(c, 4)) { goto L_8b6a9; }
    X86_TICK(c, 7);
    // 08b696  cmp edi, 0x102
    X86_AT(c, 0x8b696u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 08b69c  je 0x8b6a9
    X86_AT(c, 0x8b69cu);
    if (x86_cc(c, 4)) { goto L_8b6a9; }
    X86_TICK(c, 7);
    // 08b69e  and edi, edi
    X86_AT(c, 0x8b69eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08b6a0  je 0x8b6b3
    X86_AT(c, 0x8b6a0u);
    if (x86_cc(c, 4)) { goto L_8b6b3; }
    X86_TICK(c, 9);
    // 08b6a2  mov eax, 1
    X86_AT(c, 0x8b6a2u);
    c.r[0] = 0x1u;
    // 08b6a7  jmp 0x8b6b5
    X86_AT(c, 0x8b6a7u);
    goto L_8b6b5;
L_8b6a9:
    X86_TICK(c, 7);
    // 08b6a9  cmp edi, 0x102
    X86_AT(c, 0x8b6a9u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 08b6af  jne 0x8b67e
    X86_AT(c, 0x8b6afu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8b67eu); goto L_8b67e; }
    X86_TICK(c, 7);
    // 08b6b1  jmp 0x8b679
    X86_AT(c, 0x8b6b1u);
    X86_POLL(c, 0x8b679u); goto L_8b679;
L_8b6b3:
    X86_TICK(c, 2);
    // 08b6b3  sub eax, eax
    X86_AT(c, 0x8b6b3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8b6b5:
    X86_TICK(c, 14);
    // 08b6b5  pop edi
    X86_AT(c, 0x8b6b5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08b6b6  ret 
    X86_AT(c, 0x8b6b6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b660u, "ran off the end of a function");
}
void f_0008b6b8(X86Cpu& c) {
    X86_TICK(c, 43);
    // 08b6b8  push ebp
    X86_AT(c, 0x8b6b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b6b9  mov ebp, esp
    X86_AT(c, 0x8b6b9u);
    c.r[5] = c.r[4];
    // 08b6bb  push eax
    X86_AT(c, 0x8b6bbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b6bc  push ebx
    X86_AT(c, 0x8b6bcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b6bd  mov word ptr [0xb14], 0x93
    X86_AT(c, 0x8b6bdu);
    wr16((c.sbase[3] + (uint32_t)(0xB14u)), 0x93u);
    // 08b6c6  mov ax, word ptr [0xdac]
    X86_AT(c, 0x8b6c6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDACu))));
    // 08b6cc  mov word ptr [0xb16], ax
    X86_AT(c, 0x8b6ccu);
    wr16((c.sbase[3] + (uint32_t)(0xB16u)), (c.r[0] & 0xFFFFu));
    // 08b6d2  mov dword ptr [0xb1e], 0x53c0
    X86_AT(c, 0x8b6d2u);
    wr32((c.sbase[3] + (uint32_t)(0xB1Eu)), 0x53C0u);
    // 08b6dc  mov word ptr [0xdb4], 0x2511
    X86_AT(c, 0x8b6dcu);
    wr16((c.sbase[3] + (uint32_t)(0xDB4u)), 0x2511u);
    // 08b6e5  mov byte ptr [0xdbd], 0
    X86_AT(c, 0x8b6e5u);
    wr8((c.sbase[3] + (uint32_t)(0xDBDu)), 0x0u);
    // 08b6ec  mov byte ptr [0xdbc], 0
    X86_AT(c, 0x8b6ecu);
    wr8((c.sbase[3] + (uint32_t)(0xDBCu)), 0x0u);
    // 08b6f3  mov dword ptr [0xdc0], 0xb14
    X86_AT(c, 0x8b6f3u);
    wr32((c.sbase[3] + (uint32_t)(0xDC0u)), 0xB14u);
    // 08b6fd  mov ax, word ptr [0xdb0]
    X86_AT(c, 0x8b6fdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDB0u))));
    // 08b703  mov word ptr [0xdc8], ax
    X86_AT(c, 0x8b703u);
    wr16((c.sbase[3] + (uint32_t)(0xDC8u)), (c.r[0] & 0xFFFFu));
    // 08b709  push 0xdd0
    X86_AT(c, 0x8b709u);
    { uint32_t v = 0xDD0u; push32(c, v); }
    // 08b70e  push 0xdb4
    X86_AT(c, 0x8b70eu);
    { uint32_t v = 0xDB4u; push32(c, v); }
    // 08b713  call 0x93a1a
    X86_AT(c, 0x8b713u);
    push32(c, 0x8b718u); x86_call_known(c, 0x93a1au, f_00093a1a); X86_RET(c, 0x8b718u);
    X86_TICK(c, 19);
    // 08b718  mov bl, byte ptr [0xdd1]
    X86_AT(c, 0x8b718u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDD1u))));
    // 08b71e  mov al, byte ptr [0xdd8]
    X86_AT(c, 0x8b71eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDD8u))));
    // 08b723  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x8b723u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 08b726  add esp, 8
    X86_AT(c, 0x8b726u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b729  and bl, bl
    X86_AT(c, 0x8b729u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 08b72b  je 0x8b739
    X86_AT(c, 0x8b72bu);
    if (x86_cc(c, 4)) { goto L_8b739; }
    X86_TICK(c, 11);
    // 08b72d  push eax
    X86_AT(c, 0x8b72du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b72e  push ebx
    X86_AT(c, 0x8b72eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b72f  call 0x8ad44
    X86_AT(c, 0x8b72fu);
    push32(c, 0x8b734u); x86_call_known(c, 0x8ad44u, f_0008ad44); X86_RET(c, 0x8b734u);
    X86_TICK(c, 9);
    // 08b734  add esp, 8
    X86_AT(c, 0x8b734u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b737  jmp 0x8b74b
    X86_AT(c, 0x8b737u);
    goto L_8b74b;
L_8b739:
    X86_TICK(c, 12);
    // 08b739  cmp byte ptr [0xdd0], 1
    X86_AT(c, 0x8b739u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDD0u))), 0x1u, 0, 1);
    // 08b740  jne 0x8b749
    X86_AT(c, 0x8b740u);
    if (x86_cc(c, 5)) { goto L_8b749; }
    X86_TICK(c, 9);
    // 08b742  mov eax, 0xffffffff
    X86_AT(c, 0x8b742u);
    c.r[0] = 0xFFFFFFFFu;
    // 08b747  jmp 0x8b74b
    X86_AT(c, 0x8b747u);
    goto L_8b74b;
L_8b749:
    X86_TICK(c, 2);
    // 08b749  sub eax, eax
    X86_AT(c, 0x8b749u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8b74b:
    X86_TICK(c, 20);
    // 08b74b  pop ebx
    X86_AT(c, 0x8b74bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08b74c  leave 
    X86_AT(c, 0x8b74cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b74d  ret 
    X86_AT(c, 0x8b74du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b6b8u, "ran off the end of a function");
}
void f_0008b7c4(X86Cpu& c) {
    X86_TICK(c, 73);
    // 08b7c4  push ebp
    X86_AT(c, 0x8b7c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b7c5  mov ebp, esp
    X86_AT(c, 0x8b7c5u);
    c.r[5] = c.r[4];
    // 08b7c7  sub esp, 8
    X86_AT(c, 0x8b7c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 08b7ca  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8b7cau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08b7cd  mov dword ptr [0x1d3c], eax
    X86_AT(c, 0x8b7cdu);
    wr32((c.sbase[3] + (uint32_t)(0x1D3Cu)), c.r[0]);
    // 08b7d2  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8b7d2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08b7d5  cdq 
    X86_AT(c, 0x8b7d5u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08b7d6  mov ecx, 0xc
    X86_AT(c, 0x8b7d6u);
    c.r[1] = 0xCu;
    // 08b7db  idiv ecx
    X86_AT(c, 0x8b7dbu);
    x86_idiv(c, c.r[1], 4, 0x8b7dbu);
    // 08b7dd  lea eax, [eax + eax*2]
    X86_AT(c, 0x8b7ddu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 08b7e0  add eax, eax
    X86_AT(c, 0x8b7e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 08b7e2  mov dword ptr [0x1cec], eax
    X86_AT(c, 0x8b7e2u);
    wr32((c.sbase[3] + (uint32_t)(0x1CECu)), c.r[0]);
    // 08b7e7  cmp eax, 0x40
    X86_AT(c, 0x8b7e7u);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 08b7ea  jge 0x8b7f3
    X86_AT(c, 0x8b7eau);
    if (x86_cc(c, 13)) { goto L_8b7f3; }
    X86_TICK(c, 9);
    // 08b7ec  mov eax, 2
    X86_AT(c, 0x8b7ecu);
    c.r[0] = 0x2u;
    // 08b7f1  jmp 0x8b844
    X86_AT(c, 0x8b7f1u);
    goto L_8b844;
L_8b7f3:
    X86_TICK(c, 29);
    // 08b7f3  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8b7f3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08b7f6  mov dword ptr [0x1cf4], eax
    X86_AT(c, 0x8b7f6u);
    wr32((c.sbase[3] + (uint32_t)(0x1CF4u)), c.r[0]);
    // 08b7fb  mov edx, dword ptr [0x1cec]
    X86_AT(c, 0x8b7fbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x1CECu)));
    // 08b801  lea ecx, [eax + edx*1 - 6]
    X86_AT(c, 0x8b801u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 08b805  mov dword ptr [0x1cfc], ecx
    X86_AT(c, 0x8b805u);
    wr32((c.sbase[3] + (uint32_t)(0x1CFCu)), c.r[1]);
    // 08b80b  add eax, edx
    X86_AT(c, 0x8b80bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 08b80d  mov dword ptr [0x1cf8], eax
    X86_AT(c, 0x8b80du);
    wr32((c.sbase[3] + (uint32_t)(0x1CF8u)), c.r[0]);
    // 08b812  lea eax, [eax + edx*1 - 6]
    X86_AT(c, 0x8b812u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 08b816  mov dword ptr [0x1d00], eax
    X86_AT(c, 0x8b816u);
    wr32((c.sbase[3] + (uint32_t)(0x1D00u)), c.r[0]);
    // 08b81b  call 0x8fc59
    X86_AT(c, 0x8b81bu);
    push32(c, 0x8b820u); x86_call_known(c, 0x8fc59u, f_0008fc59); X86_RET(c, 0x8b820u);
    X86_TICK(c, 7);
    // 08b820  call 0x8fb79
    X86_AT(c, 0x8b820u);
    push32(c, 0x8b825u); x86_call_known(c, 0x8fb79u, f_0008fb79); X86_RET(c, 0x8b825u);
    X86_TICK(c, 9);
    // 08b825  push 0x33
    X86_AT(c, 0x8b825u);
    { uint32_t v = 0x33u; push32(c, v); }
    // 08b827  call 0x8fbad
    X86_AT(c, 0x8b827u);
    push32(c, 0x8b82cu); x86_call_known(c, 0x8fbadu, f_0008fbad); X86_RET(c, 0x8b82cu);
    X86_TICK(c, 13);
    // 08b82c  lea eax, [ebp - 8]
    X86_AT(c, 0x8b82cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 08b82f  push eax
    X86_AT(c, 0x8b82fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b830  push 0xffc
    X86_AT(c, 0x8b830u);
    { uint32_t v = 0xFFCu; push32(c, v); }
    // 08b835  call 0x91d88
    X86_AT(c, 0x8b835u);
    push32(c, 0x8b83au); x86_call_known(c, 0x91d88u, f_00091d88); X86_RET(c, 0x8b83au);
    X86_TICK(c, 6);
    // 08b83a  sub eax, eax
    X86_AT(c, 0x8b83au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08b83c  mov dword ptr [0x1d08], eax
    X86_AT(c, 0x8b83cu);
    wr32((c.sbase[3] + (uint32_t)(0x1D08u)), c.r[0]);
    // 08b841  add esp, 0xc
    X86_AT(c, 0x8b841u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_8b844:
    X86_TICK(c, 16);
    // 08b844  leave 
    X86_AT(c, 0x8b844u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08b845  ret 
    X86_AT(c, 0x8b845u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b7c4u, "ran off the end of a function");
}
void f_0008b850(X86Cpu& c) {
    X86_TICK(c, 20);
    // 08b850  push ebp
    X86_AT(c, 0x8b850u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08b851  mov ebp, esp
    X86_AT(c, 0x8b851u);
    c.r[5] = c.r[4];
    // 08b853  sub esp, 0x108
    X86_AT(c, 0x8b853u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x108u, 0, 4); }
    // 08b859  push ebx
    X86_AT(c, 0x8b859u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08b85a  push esi
    X86_AT(c, 0x8b85au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b85b  push edi
    X86_AT(c, 0x8b85bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b85c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8b85cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08b85f  sub ebx, ebx
    X86_AT(c, 0x8b85fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 08b861  mov esi, ebx
    X86_AT(c, 0x8b861u);
    c.r[6] = c.r[3];
L_8b863:
    X86_TICK(c, 11);
    // 08b863  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0x8b863u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 08b866  and al, al
    X86_AT(c, 0x8b866u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08b868  je 0x8b880
    X86_AT(c, 0x8b868u);
    if (x86_cc(c, 4)) { goto L_8b880; }
    X86_TICK(c, 14);
    // 08b86a  movzx eax, al
    X86_AT(c, 0x8b86au);
    c.r[0] = g8(c, 0);
    // 08b86d  cmp eax, dword ptr [esi*4 + 0x346fc]
    X86_AT(c, 0x8b86du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x346FCu))), 0, 4);
    // 08b874  je 0x8b87d
    X86_AT(c, 0x8b874u);
    if (x86_cc(c, 4)) { goto L_8b87d; }
    X86_TICK(c, 9);
    // 08b876  mov ebx, 1
    X86_AT(c, 0x8b876u);
    c.r[3] = 0x1u;
    // 08b87b  jmp 0x8b880
    X86_AT(c, 0x8b87bu);
    goto L_8b880;
L_8b87d:
    X86_TICK(c, 9);
    // 08b87d  inc esi
    X86_AT(c, 0x8b87du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b87e  jmp 0x8b863
    X86_AT(c, 0x8b87eu);
    X86_POLL(c, 0x8b863u); goto L_8b863;
L_8b880:
    X86_TICK(c, 2);
    // 08b880  sub esi, esi
    X86_AT(c, 0x8b880u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b882:
    X86_TICK(c, 11);
    // 08b882  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0x8b882u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 08b885  and al, al
    X86_AT(c, 0x8b885u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08b887  je 0x8b896
    X86_AT(c, 0x8b887u);
    if (x86_cc(c, 4)) { goto L_8b896; }
    X86_TICK(c, 14);
    // 08b889  movzx eax, al
    X86_AT(c, 0x8b889u);
    c.r[0] = g8(c, 0);
    // 08b88c  mov dword ptr [esi*4 + 0x346fc], eax
    X86_AT(c, 0x8b88cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x346FCu)), c.r[0]);
    // 08b893  inc esi
    X86_AT(c, 0x8b893u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b894  jmp 0x8b882
    X86_AT(c, 0x8b894u);
    X86_POLL(c, 0x8b882u); goto L_8b882;
L_8b896:
    X86_TICK(c, 9);
    // 08b896  mov dword ptr [esi*4 + 0x346fc], 0
    X86_AT(c, 0x8b896u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x346FCu)), 0x0u);
    // 08b8a1  call 0x8bd5c
    X86_AT(c, 0x8b8a1u);
    push32(c, 0x8b8a6u); x86_call_known(c, 0x8bd5cu, f_0008bd5c); X86_RET(c, 0x8b8a6u);
    X86_TICK(c, 13);
    // 08b8a6  mov dword ptr [0x1d4c], 0xffffffff
    X86_AT(c, 0x8b8a6u);
    wr32((c.sbase[3] + (uint32_t)(0x1D4Cu)), 0xFFFFFFFFu);
    // 08b8b0  push 0x100e
    X86_AT(c, 0x8b8b0u);
    { uint32_t v = 0x100Eu; push32(c, v); }
    // 08b8b5  push edi
    X86_AT(c, 0x8b8b5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08b8b6  call 0x927dc
    X86_AT(c, 0x8b8b6u);
    push32(c, 0x8b8bbu); x86_call_known(c, 0x927dcu, f_000927dc); X86_RET(c, 0x8b8bbu);
    X86_TICK(c, 11);
    // 08b8bb  add esp, 8
    X86_AT(c, 0x8b8bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b8be  mov dword ptr [0x1d50], eax
    X86_AT(c, 0x8b8beu);
    wr32((c.sbase[3] + (uint32_t)(0x1D50u)), c.r[0]);
    // 08b8c3  and eax, eax
    X86_AT(c, 0x8b8c3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08b8c5  jne 0x8b8d1
    X86_AT(c, 0x8b8c5u);
    if (x86_cc(c, 5)) { goto L_8b8d1; }
    X86_TICK(c, 9);
    // 08b8c7  mov eax, 0xffffffff
    X86_AT(c, 0x8b8c7u);
    c.r[0] = 0xFFFFFFFFu;
    // 08b8cc  jmp 0x8bbe5
    X86_AT(c, 0x8b8ccu);
    goto L_8bbe5;
L_8b8d1:
    X86_TICK(c, 16);
    // 08b8d1  push 0
    X86_AT(c, 0x8b8d1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08b8d3  push 0x354
    X86_AT(c, 0x8b8d3u);
    { uint32_t v = 0x354u; push32(c, v); }
    // 08b8d8  push dword ptr [0x1d50]
    X86_AT(c, 0x8b8d8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08b8de  call 0x92f50
    X86_AT(c, 0x8b8deu);
    push32(c, 0x8b8e3u); x86_call_known(c, 0x92f50u, f_00092f50); X86_RET(c, 0x8b8e3u);
    X86_TICK(c, 22);
    // 08b8e3  mov dword ptr [0x1d08], 0
    X86_AT(c, 0x8b8e3u);
    wr32((c.sbase[3] + (uint32_t)(0x1D08u)), 0x0u);
    // 08b8ed  push dword ptr [0x1d50]
    X86_AT(c, 0x8b8edu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08b8f3  push 0x20
    X86_AT(c, 0x8b8f3u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b8f5  push 1
    X86_AT(c, 0x8b8f5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b8f7  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b8f7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b8fd  push eax
    X86_AT(c, 0x8b8fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b8fe  call 0x92500
    X86_AT(c, 0x8b8feu);
    push32(c, 0x8b903u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8b903u);
    X86_TICK(c, 9);
    // 08b903  add esp, 0x1c
    X86_AT(c, 0x8b903u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08b906  cmp eax, 0x20
    X86_AT(c, 0x8b906u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b909  jl 0x8bb71
    X86_AT(c, 0x8b909u);
    if (x86_cc(c, 12)) { goto L_8bb71; }
    X86_TICK(c, 2);
    // 08b90f  sub esi, esi
    X86_AT(c, 0x8b90fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b911:
    X86_TICK(c, 7);
    // 08b911  cmp esi, 0x20
    X86_AT(c, 0x8b911u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b914  jge 0x8b925
    X86_AT(c, 0x8b914u);
    if (x86_cc(c, 13)) { goto L_8b925; }
    X86_TICK(c, 11);
    // 08b916  push 1
    X86_AT(c, 0x8b916u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b918  push esi
    X86_AT(c, 0x8b918u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b919  call 0x8fdb0
    X86_AT(c, 0x8b919u);
    push32(c, 0x8b91eu); x86_call_known(c, 0x8fdb0u, f_0008fdb0); X86_RET(c, 0x8b91eu);
    X86_TICK(c, 14);
    // 08b91e  xchg ebx, eax
    X86_AT(c, 0x8b91eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b91f  inc esi
    X86_AT(c, 0x8b91fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b920  add esp, 8
    X86_AT(c, 0x8b920u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b923  jmp 0x8b911
    X86_AT(c, 0x8b923u);
    X86_POLL(c, 0x8b911u); goto L_8b911;
L_8b925:
    X86_TICK(c, 20);
    // 08b925  push dword ptr [0x1d50]
    X86_AT(c, 0x8b925u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08b92b  push 0x20
    X86_AT(c, 0x8b92bu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b92d  push 1
    X86_AT(c, 0x8b92du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b92f  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b92fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b935  push eax
    X86_AT(c, 0x8b935u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b936  call 0x92500
    X86_AT(c, 0x8b936u);
    push32(c, 0x8b93bu); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8b93bu);
    X86_TICK(c, 9);
    // 08b93b  add esp, 0x10
    X86_AT(c, 0x8b93bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b93e  cmp eax, 0x20
    X86_AT(c, 0x8b93eu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b941  jl 0x8bb71
    X86_AT(c, 0x8b941u);
    if (x86_cc(c, 12)) { goto L_8bb71; }
    X86_TICK(c, 2);
    // 08b947  sub esi, esi
    X86_AT(c, 0x8b947u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b949:
    X86_TICK(c, 7);
    // 08b949  cmp esi, 0x20
    X86_AT(c, 0x8b949u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b94c  jge 0x8b960
    X86_AT(c, 0x8b94cu);
    if (x86_cc(c, 13)) { goto L_8b960; }
    X86_TICK(c, 11);
    // 08b94e  push 0xff
    X86_AT(c, 0x8b94eu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 08b953  push esi
    X86_AT(c, 0x8b953u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b954  call 0x8fd7c
    X86_AT(c, 0x8b954u);
    push32(c, 0x8b959u); x86_call_known(c, 0x8fd7cu, f_0008fd7c); X86_RET(c, 0x8b959u);
    X86_TICK(c, 14);
    // 08b959  xchg ebx, eax
    X86_AT(c, 0x8b959u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b95a  inc esi
    X86_AT(c, 0x8b95au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b95b  add esp, 8
    X86_AT(c, 0x8b95bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b95e  jmp 0x8b949
    X86_AT(c, 0x8b95eu);
    X86_POLL(c, 0x8b949u); goto L_8b949;
L_8b960:
    X86_TICK(c, 20);
    // 08b960  push dword ptr [0x1d50]
    X86_AT(c, 0x8b960u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08b966  push 0x20
    X86_AT(c, 0x8b966u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b968  push 1
    X86_AT(c, 0x8b968u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b96a  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b96au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b970  push eax
    X86_AT(c, 0x8b970u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b971  call 0x92500
    X86_AT(c, 0x8b971u);
    push32(c, 0x8b976u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8b976u);
    X86_TICK(c, 9);
    // 08b976  add esp, 0x10
    X86_AT(c, 0x8b976u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b979  cmp eax, 0x20
    X86_AT(c, 0x8b979u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b97c  jl 0x8bb71
    X86_AT(c, 0x8b97cu);
    if (x86_cc(c, 12)) { goto L_8bb71; }
    X86_TICK(c, 2);
    // 08b982  sub esi, esi
    X86_AT(c, 0x8b982u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b984:
    X86_TICK(c, 7);
    // 08b984  cmp esi, 0x20
    X86_AT(c, 0x8b984u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b987  jge 0x8b99b
    X86_AT(c, 0x8b987u);
    if (x86_cc(c, 13)) { goto L_8b99b; }
    X86_TICK(c, 11);
    // 08b989  push 0xff
    X86_AT(c, 0x8b989u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 08b98e  push esi
    X86_AT(c, 0x8b98eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b98f  call 0x8fd96
    X86_AT(c, 0x8b98fu);
    push32(c, 0x8b994u); x86_call_known(c, 0x8fd96u, f_0008fd96); X86_RET(c, 0x8b994u);
    X86_TICK(c, 14);
    // 08b994  xchg ebx, eax
    X86_AT(c, 0x8b994u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b995  inc esi
    X86_AT(c, 0x8b995u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b996  add esp, 8
    X86_AT(c, 0x8b996u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b999  jmp 0x8b984
    X86_AT(c, 0x8b999u);
    X86_POLL(c, 0x8b984u); goto L_8b984;
L_8b99b:
    X86_TICK(c, 20);
    // 08b99b  push dword ptr [0x1d50]
    X86_AT(c, 0x8b99bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08b9a1  push 0x20
    X86_AT(c, 0x8b9a1u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b9a3  push 1
    X86_AT(c, 0x8b9a3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b9a5  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b9a5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b9ab  push eax
    X86_AT(c, 0x8b9abu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b9ac  call 0x92500
    X86_AT(c, 0x8b9acu);
    push32(c, 0x8b9b1u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8b9b1u);
    X86_TICK(c, 9);
    // 08b9b1  add esp, 0x10
    X86_AT(c, 0x8b9b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b9b4  cmp eax, 0x20
    X86_AT(c, 0x8b9b4u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b9b7  jl 0x8bb71
    X86_AT(c, 0x8b9b7u);
    if (x86_cc(c, 12)) { goto L_8bb71; }
    X86_TICK(c, 2);
    // 08b9bd  sub esi, esi
    X86_AT(c, 0x8b9bdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b9bf:
    X86_TICK(c, 7);
    // 08b9bf  cmp esi, 0x20
    X86_AT(c, 0x8b9bfu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08b9c2  jge 0x8b9da
    X86_AT(c, 0x8b9c2u);
    if (x86_cc(c, 13)) { goto L_8b9da; }
    X86_TICK(c, 17);
    // 08b9c4  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0x8b9c4u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 08b9cc  push eax
    X86_AT(c, 0x8b9ccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b9cd  push esi
    X86_AT(c, 0x8b9cdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08b9ce  call 0x8fde4
    X86_AT(c, 0x8b9ceu);
    push32(c, 0x8b9d3u); x86_call_known(c, 0x8fde4u, f_0008fde4); X86_RET(c, 0x8b9d3u);
    X86_TICK(c, 14);
    // 08b9d3  xchg ebx, eax
    X86_AT(c, 0x8b9d3u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08b9d4  inc esi
    X86_AT(c, 0x8b9d4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08b9d5  add esp, 8
    X86_AT(c, 0x8b9d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08b9d8  jmp 0x8b9bf
    X86_AT(c, 0x8b9d8u);
    X86_POLL(c, 0x8b9bfu); goto L_8b9bf;
L_8b9da:
    X86_TICK(c, 20);
    // 08b9da  push dword ptr [0x1d50]
    X86_AT(c, 0x8b9dau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08b9e0  push 0x20
    X86_AT(c, 0x8b9e0u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08b9e2  push 1
    X86_AT(c, 0x8b9e2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08b9e4  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8b9e4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08b9ea  push eax
    X86_AT(c, 0x8b9eau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08b9eb  call 0x92500
    X86_AT(c, 0x8b9ebu);
    push32(c, 0x8b9f0u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8b9f0u);
    X86_TICK(c, 9);
    // 08b9f0  add esp, 0x10
    X86_AT(c, 0x8b9f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08b9f3  cmp eax, 0x20
    X86_AT(c, 0x8b9f3u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08b9f6  jl 0x8bb71
    X86_AT(c, 0x8b9f6u);
    if (x86_cc(c, 12)) { goto L_8bb71; }
    X86_TICK(c, 2);
    // 08b9fc  sub esi, esi
    X86_AT(c, 0x8b9fcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8b9fe:
    X86_TICK(c, 7);
    // 08b9fe  cmp esi, 0x20
    X86_AT(c, 0x8b9feu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 08ba01  jge 0x8ba19
    X86_AT(c, 0x8ba01u);
    if (x86_cc(c, 13)) { goto L_8ba19; }
    X86_TICK(c, 17);
    // 08ba03  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0x8ba03u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 08ba0b  push eax
    X86_AT(c, 0x8ba0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ba0c  push esi
    X86_AT(c, 0x8ba0cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08ba0d  call 0x8fdca
    X86_AT(c, 0x8ba0du);
    push32(c, 0x8ba12u); x86_call_known(c, 0x8fdcau, f_0008fdca); X86_RET(c, 0x8ba12u);
    X86_TICK(c, 14);
    // 08ba12  xchg ebx, eax
    X86_AT(c, 0x8ba12u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08ba13  inc esi
    X86_AT(c, 0x8ba13u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08ba14  add esp, 8
    X86_AT(c, 0x8ba14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08ba17  jmp 0x8b9fe
    X86_AT(c, 0x8ba17u);
    X86_POLL(c, 0x8b9feu); goto L_8b9fe;
L_8ba19:
    X86_TICK(c, 18);
    // 08ba19  push 0
    X86_AT(c, 0x8ba19u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ba1b  push 0x6d4
    X86_AT(c, 0x8ba1bu);
    { uint32_t v = 0x6D4u; push32(c, v); }
    // 08ba20  mov eax, 0x1ce8
    X86_AT(c, 0x8ba20u);
    c.r[0] = 0x1CE8u;
    // 08ba25  push dword ptr [eax + 0x68]
    X86_AT(c, 0x8ba25u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 08ba28  call 0x92f50
    X86_AT(c, 0x8ba28u);
    push32(c, 0x8ba2du); x86_call_known(c, 0x92f50u, f_00092f50); X86_RET(c, 0x8ba2du);
    X86_TICK(c, 20);
    // 08ba2d  push dword ptr [0x1d50]
    X86_AT(c, 0x8ba2du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08ba33  push 6
    X86_AT(c, 0x8ba33u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 08ba35  push 1
    X86_AT(c, 0x8ba35u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ba37  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8ba37u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08ba3d  push eax
    X86_AT(c, 0x8ba3du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ba3e  call 0x92500
    X86_AT(c, 0x8ba3eu);
    push32(c, 0x8ba43u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8ba43u);
    X86_TICK(c, 9);
    // 08ba43  add esp, 0x1c
    X86_AT(c, 0x8ba43u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08ba46  cmp eax, 6
    X86_AT(c, 0x8ba46u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 08ba49  jl 0x8bb71
    X86_AT(c, 0x8ba49u);
    if (x86_cc(c, 12)) { goto L_8bb71; }
    X86_TICK(c, 20);
    // 08ba4f  push dword ptr [0x1d50]
    X86_AT(c, 0x8ba4fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08ba55  push 8
    X86_AT(c, 0x8ba55u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 08ba57  push 1
    X86_AT(c, 0x8ba57u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ba59  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8ba59u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08ba5f  push eax
    X86_AT(c, 0x8ba5fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ba60  call 0x92500
    X86_AT(c, 0x8ba60u);
    push32(c, 0x8ba65u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8ba65u);
    X86_TICK(c, 9);
    // 08ba65  add esp, 0x10
    X86_AT(c, 0x8ba65u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08ba68  cmp eax, 8
    X86_AT(c, 0x8ba68u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 08ba6b  jl 0x8bb71
    X86_AT(c, 0x8ba6bu);
    if (x86_cc(c, 12)) { goto L_8bb71; }
    X86_TICK(c, 2);
    // 08ba71  sub esi, esi
    X86_AT(c, 0x8ba71u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8ba73:
    X86_TICK(c, 11);
    // 08ba73  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0x8ba73u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 08ba76  and al, al
    X86_AT(c, 0x8ba76u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 08ba78  je 0x8ba84
    X86_AT(c, 0x8ba78u);
    if (x86_cc(c, 4)) { goto L_8ba84; }
    X86_TICK(c, 11);
    // 08ba7a  mov byte ptr [ebp + esi*1 - 0x108], al
    X86_AT(c, 0x8ba7au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u)), g8(c, 0));
    // 08ba81  inc esi
    X86_AT(c, 0x8ba81u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08ba82  jmp 0x8ba73
    X86_AT(c, 0x8ba82u);
    X86_POLL(c, 0x8ba73u); goto L_8ba73;
L_8ba84:
    X86_TICK(c, 12);
    // 08ba84  cmp byte ptr [edi + esi*1], 0x5c
    X86_AT(c, 0x8ba84u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))), 0x5Cu, 0, 1);
    // 08ba88  je 0x8ba91
    X86_AT(c, 0x8ba88u);
    if (x86_cc(c, 4)) { goto L_8ba91; }
    X86_TICK(c, 7);
    // 08ba8a  and esi, esi
    X86_AT(c, 0x8ba8au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08ba8c  jl 0x8ba91
    X86_AT(c, 0x8ba8cu);
    if (x86_cc(c, 12)) { goto L_8ba91; }
    X86_TICK(c, 9);
    // 08ba8e  dec esi
    X86_AT(c, 0x8ba8eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 08ba8f  jmp 0x8ba84
    X86_AT(c, 0x8ba8fu);
    X86_POLL(c, 0x8ba84u); goto L_8ba84;
L_8ba91:
    X86_TICK(c, 22);
    // 08ba91  inc esi
    X86_AT(c, 0x8ba91u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08ba92  push dword ptr [0x1d50]
    X86_AT(c, 0x8ba92u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08ba98  push 8
    X86_AT(c, 0x8ba98u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 08ba9a  push 1
    X86_AT(c, 0x8ba9au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ba9c  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0x8ba9cu);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 08baa3  push eax
    X86_AT(c, 0x8baa3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08baa4  call 0x92500
    X86_AT(c, 0x8baa4u);
    push32(c, 0x8baa9u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8baa9u);
    X86_TICK(c, 9);
    // 08baa9  add esp, 0x10
    X86_AT(c, 0x8baa9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08baac  cmp eax, 8
    X86_AT(c, 0x8baacu);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 08baaf  jl 0x8bb71
    X86_AT(c, 0x8baafu);
    if (x86_cc(c, 12)) { goto L_8bb71; }
    X86_TICK(c, 12);
    // 08bab5  cmp byte ptr [ebp + esi*1 - 0x108], 0
    X86_AT(c, 0x8bab5u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 08babd  je 0x8bb07
    X86_AT(c, 0x8babdu);
    if (x86_cc(c, 4)) { goto L_8bb07; }
    X86_TICK(c, 2);
    // 08babf  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x8babfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_8bac6:
    X86_TICK(c, 20);
    // 08bac6  mov eax, esi
    X86_AT(c, 0x8bac6u);
    c.r[0] = c.r[6];
    // 08bac8  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x8bac8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 08bacb  cmp byte ptr [ebp + eax*1 - 0x108], 0
    X86_AT(c, 0x8bacbu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 08bad3  je 0x8bada
    X86_AT(c, 0x8bad3u);
    if (x86_cc(c, 4)) { goto L_8bada; }
    X86_TICK(c, 13);
    // 08bad5  inc dword ptr [ebp - 4]
    X86_AT(c, 0x8bad5u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08bad8  jmp 0x8bac6
    X86_AT(c, 0x8bad8u);
    X86_POLL(c, 0x8bac6u); goto L_8bac6;
L_8bada:
    X86_TICK(c, 18);
    // 08bada  mov eax, esi
    X86_AT(c, 0x8badau);
    c.r[0] = c.r[6];
    // 08badc  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x8badcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 08badf  mov byte ptr [ebp + eax*1 - 0x108], 0x2e
    X86_AT(c, 0x8badfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u)), 0x2Eu);
    // 08bae7  mov byte ptr [ebp + eax*1 - 0x107], 0x66
    X86_AT(c, 0x8bae7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF9u)), 0x66u);
    // 08baef  mov byte ptr [ebp + eax*1 - 0x106], 0x6d
    X86_AT(c, 0x8baefu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFAu)), 0x6Du);
    // 08baf7  mov byte ptr [ebp + eax*1 - 0x105], 0x62
    X86_AT(c, 0x8baf7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFBu)), 0x62u);
    // 08baff  mov byte ptr [ebp + eax*1 - 0x104], 0
    X86_AT(c, 0x8baffu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFCu)), 0x0u);
L_8bb07:
    X86_TICK(c, 20);
    // 08bb07  push dword ptr [0x1d50]
    X86_AT(c, 0x8bb07u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08bb0d  push 8
    X86_AT(c, 0x8bb0du);
    { uint32_t v = 0x8u; push32(c, v); }
    // 08bb0f  push 1
    X86_AT(c, 0x8bb0fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bb11  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0x8bb11u);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 08bb18  push eax
    X86_AT(c, 0x8bb18u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bb19  call 0x92500
    X86_AT(c, 0x8bb19u);
    push32(c, 0x8bb1eu); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8bb1eu);
    X86_TICK(c, 9);
    // 08bb1e  add esp, 0x10
    X86_AT(c, 0x8bb1eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08bb21  cmp eax, 8
    X86_AT(c, 0x8bb21u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 08bb24  jl 0x8bb71
    X86_AT(c, 0x8bb24u);
    if (x86_cc(c, 12)) { goto L_8bb71; }
    X86_TICK(c, 18);
    // 08bb26  push 0
    X86_AT(c, 0x8bb26u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08bb28  push 0x800
    X86_AT(c, 0x8bb28u);
    { uint32_t v = 0x800u; push32(c, v); }
    // 08bb2d  mov eax, 0x1ce8
    X86_AT(c, 0x8bb2du);
    c.r[0] = 0x1CE8u;
    // 08bb32  push dword ptr [eax + 0x68]
    X86_AT(c, 0x8bb32u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 08bb35  call 0x92f50
    X86_AT(c, 0x8bb35u);
    push32(c, 0x8bb3au); x86_call_known(c, 0x92f50u, f_00092f50); X86_RET(c, 0x8bb3au);
    X86_TICK(c, 20);
    // 08bb3a  push dword ptr [0x1d50]
    X86_AT(c, 0x8bb3au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08bb40  push 1
    X86_AT(c, 0x8bb40u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bb42  push 4
    X86_AT(c, 0x8bb42u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 08bb44  lea eax, [ebp - 8]
    X86_AT(c, 0x8bb44u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 08bb47  push eax
    X86_AT(c, 0x8bb47u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bb48  call 0x92500
    X86_AT(c, 0x8bb48u);
    push32(c, 0x8bb4du); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8bb4du);
    X86_TICK(c, 9);
    // 08bb4d  add esp, 0x1c
    X86_AT(c, 0x8bb4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08bb50  dec eax
    X86_AT(c, 0x8bb50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bb51  jl 0x8bb71
    X86_AT(c, 0x8bb51u);
    if (x86_cc(c, 12)) { goto L_8bb71; }
    X86_TICK(c, 20);
    // 08bb53  push dword ptr [0x1d50]
    X86_AT(c, 0x8bb53u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08bb59  push 2
    X86_AT(c, 0x8bb59u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08bb5b  push 1
    X86_AT(c, 0x8bb5bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bb5d  lea eax, [ebp - 0x88]
    X86_AT(c, 0x8bb5du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 08bb63  push eax
    X86_AT(c, 0x8bb63u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bb64  call 0x92500
    X86_AT(c, 0x8bb64u);
    push32(c, 0x8bb69u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8bb69u);
    X86_TICK(c, 9);
    // 08bb69  add esp, 0x10
    X86_AT(c, 0x8bb69u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08bb6c  cmp eax, 2
    X86_AT(c, 0x8bb6cu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 08bb6f  jge 0x8bb86
    X86_AT(c, 0x8bb6fu);
    if (x86_cc(c, 13)) { goto L_8bb86; }
L_8bb71:
    X86_TICK(c, 12);
    // 08bb71  push dword ptr [0x1d50]
    X86_AT(c, 0x8bb71u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08bb77  call 0x92cd8
    X86_AT(c, 0x8bb77u);
    push32(c, 0x8bb7cu); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x8bb7cu);
    X86_TICK(c, 11);
    // 08bb7c  mov eax, 2
    X86_AT(c, 0x8bb7cu);
    c.r[0] = 0x2u;
    // 08bb81  add esp, 4
    X86_AT(c, 0x8bb81u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08bb84  jmp 0x8bbe5
    X86_AT(c, 0x8bb84u);
    goto L_8bbe5;
L_8bb86:
    X86_TICK(c, 29);
    // 08bb86  movzx eax, byte ptr [ebp - 0x88]
    X86_AT(c, 0x8bb86u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF78u)));
    // 08bb8d  mov dword ptr [0x1d48], eax
    X86_AT(c, 0x8bb8du);
    wr32((c.sbase[3] + (uint32_t)(0x1D48u)), c.r[0]);
    // 08bb92  movzx eax, byte ptr [ebp - 0x87]
    X86_AT(c, 0x8bb92u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF79u)));
    // 08bb99  mov dword ptr [0x1d44], eax
    X86_AT(c, 0x8bb99u);
    wr32((c.sbase[3] + (uint32_t)(0x1D44u)), c.r[0]);
    // 08bb9e  mov dword ptr [0x1d4c], 0
    X86_AT(c, 0x8bb9eu);
    wr32((c.sbase[3] + (uint32_t)(0x1D4Cu)), 0x0u);
    // 08bba8  mov byte ptr [0x1d04], 0xfe
    X86_AT(c, 0x8bba8u);
    wr8((c.sbase[3] + (uint32_t)(0x1D04u)), 0xFEu);
    // 08bbaf  mov dword ptr [0x1cf0], 1
    X86_AT(c, 0x8bbafu);
    wr32((c.sbase[3] + (uint32_t)(0x1CF0u)), 0x1u);
    // 08bbb9  call 0x8bfd8
    X86_AT(c, 0x8bbb9u);
    push32(c, 0x8bbbeu); x86_call_known(c, 0x8bfd8u, f_0008bfd8); X86_RET(c, 0x8bbbeu);
    X86_TICK(c, 7);
    // 08bbbe  call 0x8bfd8
    X86_AT(c, 0x8bbbeu);
    push32(c, 0x8bbc3u); x86_call_known(c, 0x8bfd8u, f_0008bfd8); X86_RET(c, 0x8bbc3u);
    X86_TICK(c, 12);
    // 08bbc3  push dword ptr [0x1d44]
    X86_AT(c, 0x8bbc3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D44u))); push32(c, v); }
    // 08bbc9  call 0x8fd67
    X86_AT(c, 0x8bbc9u);
    push32(c, 0x8bbceu); x86_call_known(c, 0x8fd67u, f_0008fd67); X86_RET(c, 0x8bbceu);
    X86_TICK(c, 13);
    // 08bbce  add esp, 4
    X86_AT(c, 0x8bbceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08bbd1  mov eax, dword ptr [0x1d50]
    X86_AT(c, 0x8bbd1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D50u)));
    // 08bbd6  and eax, eax
    X86_AT(c, 0x8bbd6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08bbd8  je 0x8bbe3
    X86_AT(c, 0x8bbd8u);
    if (x86_cc(c, 4)) { goto L_8bbe3; }
    X86_TICK(c, 9);
    // 08bbda  push eax
    X86_AT(c, 0x8bbdau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bbdb  call 0x92cd8
    X86_AT(c, 0x8bbdbu);
    push32(c, 0x8bbe0u); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x8bbe0u);
    X86_TICK(c, 2);
    // 08bbe0  add esp, 4
    X86_AT(c, 0x8bbe0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8bbe3:
    X86_TICK(c, 2);
    // 08bbe3  sub eax, eax
    X86_AT(c, 0x8bbe3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8bbe5:
    X86_TICK(c, 28);
    // 08bbe5  pop edi
    X86_AT(c, 0x8bbe5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08bbe6  pop esi
    X86_AT(c, 0x8bbe6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08bbe7  pop ebx
    X86_AT(c, 0x8bbe7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08bbe8  leave 
    X86_AT(c, 0x8bbe8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08bbe9  ret 
    X86_AT(c, 0x8bbe9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b850u, "ran off the end of a function");
}
void f_0008bbec(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08bbec  push ebp
    X86_AT(c, 0x8bbecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08bbed  mov ebp, esp
    X86_AT(c, 0x8bbedu);
    c.r[5] = c.r[4];
    // 08bbef  push edi
    X86_AT(c, 0x8bbefu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08bbf0  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8bbf0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08bbf3  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8bbf3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08bbf6  sub ecx, ecx
    X86_AT(c, 0x8bbf6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 08bbf8  cmp ecx, edx
    X86_AT(c, 0x8bbf8u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 08bbfa  jne 0x8bc00
    X86_AT(c, 0x8bbfau);
    if (x86_cc(c, 5)) { goto L_8bc00; }
    X86_TICK(c, 9);
    // 08bbfc  mov eax, edi
    X86_AT(c, 0x8bbfcu);
    c.r[0] = c.r[7];
    // 08bbfe  jmp 0x8bc14
    X86_AT(c, 0x8bbfeu);
    goto L_8bc14;
L_8bc00:
    X86_TICK(c, 12);
    // 08bc00  cmp byte ptr [edi], 0xf2
    X86_AT(c, 0x8bc00u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xF2u, 0, 1);
    // 08bc03  jne 0x8bc0f
    X86_AT(c, 0x8bc03u);
    if (x86_cc(c, 5)) { goto L_8bc0f; }
    X86_TICK(c, 9);
    // 08bc05  inc ecx
    X86_AT(c, 0x8bc05u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 08bc06  cmp edx, ecx
    X86_AT(c, 0x8bc06u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 08bc08  jne 0x8bc0f
    X86_AT(c, 0x8bc08u);
    if (x86_cc(c, 5)) { goto L_8bc0f; }
    X86_TICK(c, 9);
    // 08bc0a  lea eax, [edi + 6]
    X86_AT(c, 0x8bc0au);
    c.r[0] = (uint32_t)(c.r[7] + 0x6u);
    // 08bc0d  jmp 0x8bc14
    X86_AT(c, 0x8bc0du);
    goto L_8bc14;
L_8bc0f:
    X86_TICK(c, 9);
    // 08bc0f  add edi, 6
    X86_AT(c, 0x8bc0fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 08bc12  jmp 0x8bc00
    X86_AT(c, 0x8bc12u);
    X86_POLL(c, 0x8bc00u); goto L_8bc00;
L_8bc14:
    X86_TICK(c, 20);
    // 08bc14  pop edi
    X86_AT(c, 0x8bc14u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08bc15  leave 
    X86_AT(c, 0x8bc15u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08bc16  ret 
    X86_AT(c, 0x8bc16u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bbecu, "ran off the end of a function");
}
void f_0008bc18(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08bc18  push ebp
    X86_AT(c, 0x8bc18u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08bc19  mov ebp, esp
    X86_AT(c, 0x8bc19u);
    c.r[5] = c.r[4];
    // 08bc1b  push edi
    X86_AT(c, 0x8bc1bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08bc1c  mov eax, dword ptr [0x1d0c]
    X86_AT(c, 0x8bc1cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D0Cu)));
    // 08bc21  dec eax
    X86_AT(c, 0x8bc21u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bc22  push eax
    X86_AT(c, 0x8bc22u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bc23  push 0
    X86_AT(c, 0x8bc23u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08bc25  call 0x8fdfe
    X86_AT(c, 0x8bc25u);
    push32(c, 0x8bc2au); x86_call_known(c, 0x8fdfeu, f_0008fdfe); X86_RET(c, 0x8bc2au);
    X86_TICK(c, 17);
    // 08bc2a  mov eax, dword ptr [0x1d10]
    X86_AT(c, 0x8bc2au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D10u)));
    // 08bc2f  dec eax
    X86_AT(c, 0x8bc2fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bc30  push eax
    X86_AT(c, 0x8bc30u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bc31  push 1
    X86_AT(c, 0x8bc31u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bc33  call 0x8fdfe
    X86_AT(c, 0x8bc33u);
    push32(c, 0x8bc38u); x86_call_known(c, 0x8fdfeu, f_0008fdfe); X86_RET(c, 0x8bc38u);
    X86_TICK(c, 17);
    // 08bc38  mov eax, dword ptr [0x1d14]
    X86_AT(c, 0x8bc38u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D14u)));
    // 08bc3d  dec eax
    X86_AT(c, 0x8bc3du);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bc3e  push eax
    X86_AT(c, 0x8bc3eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bc3f  push 2
    X86_AT(c, 0x8bc3fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08bc41  call 0x8fdfe
    X86_AT(c, 0x8bc41u);
    push32(c, 0x8bc46u); x86_call_known(c, 0x8fdfeu, f_0008fdfe); X86_RET(c, 0x8bc46u);
    X86_TICK(c, 17);
    // 08bc46  mov eax, dword ptr [0x1d18]
    X86_AT(c, 0x8bc46u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D18u)));
    // 08bc4b  dec eax
    X86_AT(c, 0x8bc4bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bc4c  push eax
    X86_AT(c, 0x8bc4cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bc4d  push 3
    X86_AT(c, 0x8bc4du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08bc4f  call 0x8fdfe
    X86_AT(c, 0x8bc4fu);
    push32(c, 0x8bc54u); x86_call_known(c, 0x8fdfeu, f_0008fdfe); X86_RET(c, 0x8bc54u);
    X86_TICK(c, 17);
    // 08bc54  mov eax, dword ptr [0x1d1c]
    X86_AT(c, 0x8bc54u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D1Cu)));
    // 08bc59  dec eax
    X86_AT(c, 0x8bc59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bc5a  push eax
    X86_AT(c, 0x8bc5au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bc5b  push 4
    X86_AT(c, 0x8bc5bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 08bc5d  call 0x8fdfe
    X86_AT(c, 0x8bc5du);
    push32(c, 0x8bc62u); x86_call_known(c, 0x8fdfeu, f_0008fdfe); X86_RET(c, 0x8bc62u);
    X86_TICK(c, 17);
    // 08bc62  mov eax, dword ptr [0x1d20]
    X86_AT(c, 0x8bc62u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D20u)));
    // 08bc67  dec eax
    X86_AT(c, 0x8bc67u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bc68  push eax
    X86_AT(c, 0x8bc68u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bc69  push 5
    X86_AT(c, 0x8bc69u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 08bc6b  call 0x8fdfe
    X86_AT(c, 0x8bc6bu);
    push32(c, 0x8bc70u); x86_call_known(c, 0x8fdfeu, f_0008fdfe); X86_RET(c, 0x8bc70u);
    X86_TICK(c, 17);
    // 08bc70  mov eax, dword ptr [0x1d24]
    X86_AT(c, 0x8bc70u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D24u)));
    // 08bc75  dec eax
    X86_AT(c, 0x8bc75u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bc76  push eax
    X86_AT(c, 0x8bc76u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bc77  push 0
    X86_AT(c, 0x8bc77u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08bc79  call 0x8f5a7
    X86_AT(c, 0x8bc79u);
    push32(c, 0x8bc7eu); x86_call_known(c, 0x8f5a7u, f_0008f5a7); X86_RET(c, 0x8bc7eu);
    X86_TICK(c, 17);
    // 08bc7e  mov eax, dword ptr [0x1d28]
    X86_AT(c, 0x8bc7eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D28u)));
    // 08bc83  dec eax
    X86_AT(c, 0x8bc83u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bc84  push eax
    X86_AT(c, 0x8bc84u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bc85  push 1
    X86_AT(c, 0x8bc85u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bc87  call 0x8f5a7
    X86_AT(c, 0x8bc87u);
    push32(c, 0x8bc8cu); x86_call_known(c, 0x8f5a7u, f_0008f5a7); X86_RET(c, 0x8bc8cu);
    X86_TICK(c, 19);
    // 08bc8c  add esp, 0x40
    X86_AT(c, 0x8bc8cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08bc8f  mov eax, dword ptr [0x1d2c]
    X86_AT(c, 0x8bc8fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D2Cu)));
    // 08bc94  dec eax
    X86_AT(c, 0x8bc94u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bc95  push eax
    X86_AT(c, 0x8bc95u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bc96  push 2
    X86_AT(c, 0x8bc96u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08bc98  call 0x8f5a7
    X86_AT(c, 0x8bc98u);
    push32(c, 0x8bc9du); x86_call_known(c, 0x8f5a7u, f_0008f5a7); X86_RET(c, 0x8bc9du);
    X86_TICK(c, 17);
    // 08bc9d  mov eax, dword ptr [0x1d30]
    X86_AT(c, 0x8bc9du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D30u)));
    // 08bca2  dec eax
    X86_AT(c, 0x8bca2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bca3  push eax
    X86_AT(c, 0x8bca3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bca4  push 3
    X86_AT(c, 0x8bca4u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08bca6  call 0x8f5a7
    X86_AT(c, 0x8bca6u);
    push32(c, 0x8bcabu); x86_call_known(c, 0x8f5a7u, f_0008f5a7); X86_RET(c, 0x8bcabu);
    X86_TICK(c, 17);
    // 08bcab  mov eax, dword ptr [0x1d34]
    X86_AT(c, 0x8bcabu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D34u)));
    // 08bcb0  dec eax
    X86_AT(c, 0x8bcb0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bcb1  push eax
    X86_AT(c, 0x8bcb1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bcb2  push 4
    X86_AT(c, 0x8bcb2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 08bcb4  call 0x8f5a7
    X86_AT(c, 0x8bcb4u);
    push32(c, 0x8bcb9u); x86_call_known(c, 0x8f5a7u, f_0008f5a7); X86_RET(c, 0x8bcb9u);
    X86_TICK(c, 17);
    // 08bcb9  mov eax, dword ptr [0x1d38]
    X86_AT(c, 0x8bcb9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D38u)));
    // 08bcbe  dec eax
    X86_AT(c, 0x8bcbeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08bcbf  push eax
    X86_AT(c, 0x8bcbfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bcc0  push 5
    X86_AT(c, 0x8bcc0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 08bcc2  call 0x8f5a7
    X86_AT(c, 0x8bcc2u);
    push32(c, 0x8bcc7u); x86_call_known(c, 0x8f5a7u, f_0008f5a7); X86_RET(c, 0x8bcc7u);
    X86_TICK(c, 11);
    // 08bcc7  add esp, 0x20
    X86_AT(c, 0x8bcc7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08bcca  push 1
    X86_AT(c, 0x8bccau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bccc  call 0x8fd4b
    X86_AT(c, 0x8bcccu);
    push32(c, 0x8bcd1u); x86_call_known(c, 0x8fd4bu, f_0008fd4b); X86_RET(c, 0x8bcd1u);
    X86_TICK(c, 17);
    // 08bcd1  push dword ptr [ebp + 8]
    X86_AT(c, 0x8bcd1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08bcd4  push dword ptr [0x1cf4]
    X86_AT(c, 0x8bcd4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1CF4u))); push32(c, v); }
    // 08bcda  call 0x8bbec
    X86_AT(c, 0x8bcdau);
    push32(c, 0x8bcdfu); x86_call_known(c, 0x8bbecu, f_0008bbec); X86_RET(c, 0x8bcdfu);
    X86_TICK(c, 22);
    // 08bcdf  mov dword ptr [0x1d08], eax
    X86_AT(c, 0x8bcdfu);
    wr32((c.sbase[3] + (uint32_t)(0x1D08u)), c.r[0]);
    // 08bce4  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8bce4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08bce7  inc eax
    X86_AT(c, 0x8bce7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08bce8  push eax
    X86_AT(c, 0x8bce8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bce9  push dword ptr [0x1cf4]
    X86_AT(c, 0x8bce9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1CF4u))); push32(c, v); }
    // 08bcef  call 0x8bbec
    X86_AT(c, 0x8bcefu);
    push32(c, 0x8bcf4u); x86_call_known(c, 0x8bbecu, f_0008bbec); X86_RET(c, 0x8bcf4u);
    X86_TICK(c, 42);
    // 08bcf4  xchg edi, eax
    X86_AT(c, 0x8bcf4u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 08bcf5  mov byte ptr [edi], 0xfe
    X86_AT(c, 0x8bcf5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFEu);
    // 08bcf8  inc edi
    X86_AT(c, 0x8bcf8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08bcf9  inc edi
    X86_AT(c, 0x8bcf9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08bcfa  mov byte ptr [edi], 0
    X86_AT(c, 0x8bcfau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 08bcfd  inc edi
    X86_AT(c, 0x8bcfdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08bcfe  mov byte ptr [edi], 0
    X86_AT(c, 0x8bcfeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 08bd01  inc edi
    X86_AT(c, 0x8bd01u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08bd02  push dword ptr [0x1d48]
    X86_AT(c, 0x8bd02u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D48u))); push32(c, v); }
    // 08bd08  mov eax, dword ptr [0x1cec]
    X86_AT(c, 0x8bd08u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1CECu)));
    // 08bd0d  add eax, eax
    X86_AT(c, 0x8bd0du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 08bd0f  push eax
    X86_AT(c, 0x8bd0fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08bd10  push dword ptr [0x1cf4]
    X86_AT(c, 0x8bd10u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1CF4u))); push32(c, v); }
    // 08bd16  call 0x8fc6f
    X86_AT(c, 0x8bd16u);
    push32(c, 0x8bd1bu); x86_call_known(c, 0x8fc6fu, f_0008fc6f); X86_RET(c, 0x8bd1bu);
    X86_TICK(c, 24);
    // 08bd1b  sub eax, eax
    X86_AT(c, 0x8bd1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08bd1d  add esp, 0x20
    X86_AT(c, 0x8bd1du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08bd20  pop edi
    X86_AT(c, 0x8bd20u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08bd21  leave 
    X86_AT(c, 0x8bd21u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08bd22  ret 
    X86_AT(c, 0x8bd22u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bc18u, "ran off the end of a function");
}
void f_0008bd5c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08bd5c  call 0x8fc8e
    X86_AT(c, 0x8bd5cu);
    push32(c, 0x8bd61u); x86_call_known(c, 0x8fc8eu, f_0008fc8e); X86_RET(c, 0x8bd61u);
    X86_TICK(c, 12);
    // 08bd61  sub eax, eax
    X86_AT(c, 0x8bd61u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08bd63  ret 
    X86_AT(c, 0x8bd63u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bd5cu, "ran off the end of a function");
}
void f_0008bda4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08bda4  push 0xffffffff
    X86_AT(c, 0x8bda4u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 08bda6  call 0x8f759
    X86_AT(c, 0x8bda6u);
    push32(c, 0x8bdabu); x86_call_known(c, 0x8f759u, f_0008f759); X86_RET(c, 0x8bdabu);
    X86_TICK(c, 9);
    // 08bdab  push 1
    X86_AT(c, 0x8bdabu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bdad  call 0x8f72f
    X86_AT(c, 0x8bdadu);
    push32(c, 0x8bdb2u); x86_call_known(c, 0x8f72fu, f_0008f72f); X86_RET(c, 0x8bdb2u);
    X86_TICK(c, 14);
    // 08bdb2  sub eax, eax
    X86_AT(c, 0x8bdb2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08bdb4  add esp, 8
    X86_AT(c, 0x8bdb4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08bdb7  ret 
    X86_AT(c, 0x8bdb7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bda4u, "ran off the end of a function");
}
void f_0008bdb8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08bdb8  push ebp
    X86_AT(c, 0x8bdb8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08bdb9  mov ebp, esp
    X86_AT(c, 0x8bdb9u);
    c.r[5] = c.r[4];
    // 08bdbb  push ebx
    X86_AT(c, 0x8bdbbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08bdbc  push esi
    X86_AT(c, 0x8bdbcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08bdbd  push edi
    X86_AT(c, 0x8bdbdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08bdbe  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8bdbeu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08bdc1  push 0x1012
    X86_AT(c, 0x8bdc1u);
    { uint32_t v = 0x1012u; push32(c, v); }
    // 08bdc6  push dword ptr [ebp + 8]
    X86_AT(c, 0x8bdc6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08bdc9  call 0x927dc
    X86_AT(c, 0x8bdc9u);
    push32(c, 0x8bdceu); x86_call_known(c, 0x927dcu, f_000927dc); X86_RET(c, 0x8bdceu);
    X86_TICK(c, 12);
    // 08bdce  add esp, 8
    X86_AT(c, 0x8bdceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08bdd1  xchg esi, eax
    X86_AT(c, 0x8bdd1u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 08bdd2  and esi, esi
    X86_AT(c, 0x8bdd2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08bdd4  jne 0x8bde7
    X86_AT(c, 0x8bdd4u);
    if (x86_cc(c, 5)) { goto L_8bde7; }
    X86_TICK(c, 9);
    // 08bdd6  push 0x1018
    X86_AT(c, 0x8bdd6u);
    { uint32_t v = 0x1018u; push32(c, v); }
    // 08bddb  call 0x8e37c
    X86_AT(c, 0x8bddbu);
    push32(c, 0x8bde0u); x86_call_known(c, 0x8e37cu, f_0008e37c); X86_RET(c, 0x8bde0u);
    X86_TICK(c, 9);
    // 08bde0  mov eax, 1
    X86_AT(c, 0x8bde0u);
    c.r[0] = 0x1u;
    // 08bde5  jmp 0x8be34
    X86_AT(c, 0x8bde5u);
    goto L_8be34;
L_8bde7:
    X86_TICK(c, 12);
    // 08bde7  cmp dword ptr [ebp + 0x10], 0x20
    X86_AT(c, 0x8bde7u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x20u, 0, 4);
    // 08bdeb  jl 0x8be1f
    X86_AT(c, 0x8bdebu);
    if (x86_cc(c, 12)) { goto L_8be1f; }
    X86_TICK(c, 15);
    // 08bded  push esi
    X86_AT(c, 0x8bdedu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08bdee  push 0x20
    X86_AT(c, 0x8bdeeu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 08bdf0  push 1
    X86_AT(c, 0x8bdf0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08bdf2  push edi
    X86_AT(c, 0x8bdf2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08bdf3  call 0x92500
    X86_AT(c, 0x8bdf3u);
    push32(c, 0x8bdf8u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8bdf8u);
    X86_TICK(c, 9);
    // 08bdf8  add esp, 0x10
    X86_AT(c, 0x8bdf8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08bdfb  cmp eax, 0x20
    X86_AT(c, 0x8bdfbu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 08bdfe  jl 0x8be1f
    X86_AT(c, 0x8bdfeu);
    if (x86_cc(c, 12)) { goto L_8be1f; }
    X86_TICK(c, 17);
    // 08be00  mov ebx, dword ptr [edi + 0xc]
    X86_AT(c, 0x8be00u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 08be03  lea eax, [ebx + 0x20]
    X86_AT(c, 0x8be03u);
    c.r[0] = (uint32_t)(c.r[3] + 0x20u);
    // 08be06  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8be06u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 08be09  jg 0x8be1f
    X86_AT(c, 0x8be09u);
    if (x86_cc(c, 15)) { goto L_8be1f; }
    X86_TICK(c, 17);
    // 08be0b  push esi
    X86_AT(c, 0x8be0bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08be0c  push ebx
    X86_AT(c, 0x8be0cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08be0d  push 1
    X86_AT(c, 0x8be0du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08be0f  lea eax, [edi + 0x20]
    X86_AT(c, 0x8be0fu);
    c.r[0] = (uint32_t)(c.r[7] + 0x20u);
    // 08be12  push eax
    X86_AT(c, 0x8be12u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08be13  call 0x92500
    X86_AT(c, 0x8be13u);
    push32(c, 0x8be18u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8be18u);
    X86_TICK(c, 9);
    // 08be18  add esp, 0x10
    X86_AT(c, 0x8be18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08be1b  cmp ebx, eax
    X86_AT(c, 0x8be1bu);
    (void)x86_sub(c, c.r[3], c.r[0], 0, 4);
    // 08be1d  jle 0x8be2c
    X86_AT(c, 0x8be1du);
    if (x86_cc(c, 14)) { goto L_8be2c; }
L_8be1f:
    X86_TICK(c, 9);
    // 08be1f  push esi
    X86_AT(c, 0x8be1fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08be20  call 0x92cd8
    X86_AT(c, 0x8be20u);
    push32(c, 0x8be25u); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x8be25u);
    X86_TICK(c, 9);
    // 08be25  mov eax, 2
    X86_AT(c, 0x8be25u);
    c.r[0] = 0x2u;
    // 08be2a  jmp 0x8be34
    X86_AT(c, 0x8be2au);
    goto L_8be34;
L_8be2c:
    X86_TICK(c, 9);
    // 08be2c  push esi
    X86_AT(c, 0x8be2cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08be2d  call 0x92cd8
    X86_AT(c, 0x8be2du);
    push32(c, 0x8be32u); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x8be32u);
    X86_TICK(c, 2);
    // 08be32  sub eax, eax
    X86_AT(c, 0x8be32u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8be34:
    X86_TICK(c, 30);
    // 08be34  add esp, 4
    X86_AT(c, 0x8be34u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08be37  pop edi
    X86_AT(c, 0x8be37u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08be38  pop esi
    X86_AT(c, 0x8be38u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08be39  pop ebx
    X86_AT(c, 0x8be39u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08be3a  leave 
    X86_AT(c, 0x8be3au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08be3b  ret 
    X86_AT(c, 0x8be3bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bdb8u, "ran off the end of a function");
}
void f_0008bfd8(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08bfd8  push ebx
    X86_AT(c, 0x8bfd8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08bfd9  push esi
    X86_AT(c, 0x8bfd9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08bfda  push edi
    X86_AT(c, 0x8bfdau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08bfdb  cmp dword ptr [0x1cf0], 0
    X86_AT(c, 0x8bfdbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x1CF0u))), 0x0u, 0, 4);
    // 08bfe2  jne 0x8bff2
    X86_AT(c, 0x8bfe2u);
    if (x86_cc(c, 5)) { goto L_8bff2; }
    X86_TICK(c, 11);
    // 08bfe4  mov dword ptr [0x1cf0], 1
    X86_AT(c, 0x8bfe4u);
    wr32((c.sbase[3] + (uint32_t)(0x1CF0u)), 0x1u);
    // 08bfee  sub esi, esi
    X86_AT(c, 0x8bfeeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08bff0  jmp 0x8c001
    X86_AT(c, 0x8bff0u);
    goto L_8c001;
L_8bff2:
    X86_TICK(c, 4);
    // 08bff2  mov dword ptr [0x1cf0], 0
    X86_AT(c, 0x8bff2u);
    wr32((c.sbase[3] + (uint32_t)(0x1CF0u)), 0x0u);
    // 08bffc  mov esi, 1
    X86_AT(c, 0x8bffcu);
    c.r[6] = 0x1u;
L_8c001:
    X86_TICK(c, 8);
    // 08c001  mov eax, dword ptr [0x1cf0]
    X86_AT(c, 0x8c001u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1CF0u)));
    // 08c006  mov edi, dword ptr [eax*4 + 0x1cf4]
    X86_AT(c, 0x8c006u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x1CF4u)));
L_8c00d:
    X86_TICK(c, 14);
    // 08c00d  mov eax, 0x1ce8
    X86_AT(c, 0x8c00du);
    c.r[0] = 0x1CE8u;
    // 08c012  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0x8c012u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 08c016  jne 0x8c081
    X86_AT(c, 0x8c016u);
    if (x86_cc(c, 5)) { goto L_8c081; }
    X86_TICK(c, 15);
    // 08c018  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x8c018u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 08c01b  cmp edi, dword ptr [eax + edx*4 + 0x14]
    X86_AT(c, 0x8c01bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x14u))), 0, 4);
    // 08c01f  ja 0x8c081
    X86_AT(c, 0x8c01fu);
    if (x86_cc(c, 7)) { goto L_8c081; }
    X86_TICK(c, 18);
    // 08c021  push dword ptr [eax + 0x68]
    X86_AT(c, 0x8c021u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 08c024  push 6
    X86_AT(c, 0x8c024u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 08c026  push 1
    X86_AT(c, 0x8c026u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c028  push edi
    X86_AT(c, 0x8c028u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c029  call 0x92500
    X86_AT(c, 0x8c029u);
    push32(c, 0x8c02eu); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8c02eu);
    X86_TICK(c, 9);
    // 08c02e  add esp, 0x10
    X86_AT(c, 0x8c02eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08c031  cmp eax, 6
    X86_AT(c, 0x8c031u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 08c034  jge 0x8c055
    X86_AT(c, 0x8c034u);
    if (x86_cc(c, 13)) { goto L_8c055; }
    X86_TICK(c, 12);
    // 08c036  push dword ptr [0x1d50]
    X86_AT(c, 0x8c036u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08c03c  call 0x92cd8
    X86_AT(c, 0x8c03cu);
    push32(c, 0x8c041u); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x8c041u);
    X86_TICK(c, 13);
    // 08c041  mov dword ptr [0x1d50], 0
    X86_AT(c, 0x8c041u);
    wr32((c.sbase[3] + (uint32_t)(0x1D50u)), 0x0u);
    // 08c04b  mov eax, 2
    X86_AT(c, 0x8c04bu);
    c.r[0] = 0x2u;
    // 08c050  add esp, 4
    X86_AT(c, 0x8c050u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08c053  jmp 0x8c0ae
    X86_AT(c, 0x8c053u);
    goto L_8c0ae;
L_8c055:
    X86_TICK(c, 12);
    // 08c055  cmp byte ptr [edi], 0xfe
    X86_AT(c, 0x8c055u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xFEu, 0, 1);
    // 08c058  jne 0x8c07c
    X86_AT(c, 0x8c058u);
    if (x86_cc(c, 5)) { goto L_8c07c; }
    X86_TICK(c, 14);
    // 08c05a  mov dword ptr [0x1d4c], 1
    X86_AT(c, 0x8c05au);
    wr32((c.sbase[3] + (uint32_t)(0x1D4Cu)), 0x1u);
    // 08c064  push dword ptr [0x1d50]
    X86_AT(c, 0x8c064u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D50u))); push32(c, v); }
    // 08c06a  call 0x92cd8
    X86_AT(c, 0x8c06au);
    push32(c, 0x8c06fu); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x8c06fu);
    X86_TICK(c, 4);
    // 08c06f  mov dword ptr [0x1d50], 0
    X86_AT(c, 0x8c06fu);
    wr32((c.sbase[3] + (uint32_t)(0x1D50u)), 0x0u);
    // 08c079  add esp, 4
    X86_AT(c, 0x8c079u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8c07c:
    X86_TICK(c, 9);
    // 08c07c  add edi, 6
    X86_AT(c, 0x8c07cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 08c07f  jmp 0x8c00d
    X86_AT(c, 0x8c07fu);
    X86_POLL(c, 0x8c00du); goto L_8c00d;
L_8c081:
    X86_TICK(c, 18);
    // 08c081  mov eax, 0x1ce8
    X86_AT(c, 0x8c081u);
    c.r[0] = 0x1CE8u;
    // 08c086  mov bl, byte ptr [eax + 0x1c]
    X86_AT(c, 0x8c086u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu))));
    // 08c089  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0x8c089u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 08c08d  jne 0x8c09e
    X86_AT(c, 0x8c08du);
    if (x86_cc(c, 5)) { goto L_8c09e; }
    X86_TICK(c, 16);
    // 08c08f  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x8c08fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 08c092  mov edx, dword ptr [eax + edx*4 + 0x14]
    X86_AT(c, 0x8c092u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x14u)));
    // 08c096  mov cl, byte ptr [edx]
    X86_AT(c, 0x8c096u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 08c098  mov byte ptr [eax + 0x1c], cl
    X86_AT(c, 0x8c098u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu)), g8(c, 1));
    // 08c09b  mov byte ptr [edx], 0xfd
    X86_AT(c, 0x8c09bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0xFDu);
L_8c09e:
    X86_TICK(c, 13);
    // 08c09e  mov eax, dword ptr [esi*4 + 0x1cfc]
    X86_AT(c, 0x8c09eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x1CFCu)));
    // 08c0a5  mov byte ptr [eax], bl
    X86_AT(c, 0x8c0a5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), g8(c, 3));
    // 08c0a7  call 0x8fca4
    X86_AT(c, 0x8c0a7u);
    push32(c, 0x8c0acu); x86_call_known(c, 0x8fca4u, f_0008fca4); X86_RET(c, 0x8c0acu);
    X86_TICK(c, 2);
    // 08c0ac  sub eax, eax
    X86_AT(c, 0x8c0acu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8c0ae:
    X86_TICK(c, 22);
    // 08c0ae  pop edi
    X86_AT(c, 0x8c0aeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c0af  pop esi
    X86_AT(c, 0x8c0afu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08c0b0  pop ebx
    X86_AT(c, 0x8c0b0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08c0b1  ret 
    X86_AT(c, 0x8c0b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bfd8u, "ran off the end of a function");
}
void f_0008c0b4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08c0b4  push 0x141d0
    X86_AT(c, 0x8c0b4u);
    { uint32_t v = 0x141D0u; push32(c, v); }
    // 08c0b9  call 0x931b0
    X86_AT(c, 0x8c0b9u);
    push32(c, 0x8c0beu); x86_call_known(c, 0x931b0u, f_000931b0); X86_RET(c, 0x8c0beu);
    X86_TICK(c, 11);
    // 08c0be  add esp, 4
    X86_AT(c, 0x8c0beu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08c0c1  mov dword ptr [0x1d3c], eax
    X86_AT(c, 0x8c0c1u);
    wr32((c.sbase[3] + (uint32_t)(0x1D3Cu)), c.r[0]);
    // 08c0c6  and eax, eax
    X86_AT(c, 0x8c0c6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08c0c8  jne 0x8c0de
    X86_AT(c, 0x8c0c8u);
    if (x86_cc(c, 5)) { goto L_8c0de; }
    X86_TICK(c, 9);
    // 08c0ca  push 0x1068
    X86_AT(c, 0x8c0cau);
    { uint32_t v = 0x1068u; push32(c, v); }
    // 08c0cf  call 0x8e37c
    X86_AT(c, 0x8c0cfu);
    push32(c, 0x8c0d4u); x86_call_known(c, 0x8e37cu, f_0008e37c); X86_RET(c, 0x8c0d4u);
    X86_TICK(c, 11);
    // 08c0d4  mov eax, 0xffffffff
    X86_AT(c, 0x8c0d4u);
    c.r[0] = 0xFFFFFFFFu;
    // 08c0d9  add esp, 4
    X86_AT(c, 0x8c0d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08c0dc  jmp 0x8c13b
    X86_AT(c, 0x8c0dcu);
    goto L_8c13b;
L_8c0de:
    X86_TICK(c, 17);
    // 08c0de  mov eax, dword ptr [0x1d3c]
    X86_AT(c, 0x8c0deu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1D3Cu)));
    // 08c0e3  lea edx, [eax + 0x4000]
    X86_AT(c, 0x8c0e3u);
    c.r[2] = (uint32_t)(c.r[0] + 0x4000u);
    // 08c0e9  mov dword ptr [0x1d40], edx
    X86_AT(c, 0x8c0e9u);
    wr32((c.sbase[3] + (uint32_t)(0x1D40u)), c.r[2]);
    // 08c0ef  push eax
    X86_AT(c, 0x8c0efu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c0f0  call 0x8f4cf
    X86_AT(c, 0x8c0f0u);
    push32(c, 0x8c0f5u); x86_call_known(c, 0x8f4cfu, f_0008f4cf); X86_RET(c, 0x8c0f5u);
    X86_TICK(c, 9);
    // 08c0f5  add esp, 4
    X86_AT(c, 0x8c0f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08c0f8  and eax, eax
    X86_AT(c, 0x8c0f8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08c0fa  je 0x8c11b
    X86_AT(c, 0x8c0fau);
    if (x86_cc(c, 4)) { goto L_8c11b; }
    X86_TICK(c, 9);
    // 08c0fc  push 0x10ac
    X86_AT(c, 0x8c0fcu);
    { uint32_t v = 0x10ACu; push32(c, v); }
    // 08c101  call 0x8e37c
    X86_AT(c, 0x8c101u);
    push32(c, 0x8c106u); x86_call_known(c, 0x8e37cu, f_0008e37c); X86_RET(c, 0x8c106u);
    X86_TICK(c, 12);
    // 08c106  push dword ptr [0x1d3c]
    X86_AT(c, 0x8c106u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D3Cu))); push32(c, v); }
    // 08c10c  call 0x9319c
    X86_AT(c, 0x8c10cu);
    push32(c, 0x8c111u); x86_call_known(c, 0x9319cu, f_0009319c); X86_RET(c, 0x8c111u);
    X86_TICK(c, 11);
    // 08c111  mov eax, 0xffffffff
    X86_AT(c, 0x8c111u);
    c.r[0] = 0xFFFFFFFFu;
    // 08c116  add esp, 8
    X86_AT(c, 0x8c116u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08c119  jmp 0x8c13b
    X86_AT(c, 0x8c119u);
    goto L_8c13b;
L_8c11b:
    X86_TICK(c, 7);
    // 08c11b  call 0x8bda4
    X86_AT(c, 0x8c11bu);
    push32(c, 0x8c120u); x86_call_known(c, 0x8bda4u, f_0008bda4); X86_RET(c, 0x8c120u);
    X86_TICK(c, 19);
    // 08c120  push dword ptr [0x1d3c]
    X86_AT(c, 0x8c120u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D3Cu))); push32(c, v); }
    // 08c126  push 0x101d0
    X86_AT(c, 0x8c126u);
    { uint32_t v = 0x101D0u; push32(c, v); }
    // 08c12b  push dword ptr [0x1d40]
    X86_AT(c, 0x8c12bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D40u))); push32(c, v); }
    // 08c131  call 0x8b7c4
    X86_AT(c, 0x8c131u);
    push32(c, 0x8c136u); x86_call_known(c, 0x8b7c4u, f_0008b7c4); X86_RET(c, 0x8c136u);
    X86_TICK(c, 4);
    // 08c136  sub eax, eax
    X86_AT(c, 0x8c136u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08c138  add esp, 0xc
    X86_AT(c, 0x8c138u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_8c13b:
    X86_TICK(c, 10);
    // 08c13b  ret 
    X86_AT(c, 0x8c13bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c0b4u, "ran off the end of a function");
}
void f_0008c13c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 08c13c  push dword ptr [0x1d3c]
    X86_AT(c, 0x8c13cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1D3Cu))); push32(c, v); }
    // 08c142  call 0x9319c
    X86_AT(c, 0x8c142u);
    push32(c, 0x8c147u); x86_call_known(c, 0x9319cu, f_0009319c); X86_RET(c, 0x8c147u);
    X86_TICK(c, 7);
    // 08c147  call 0x8f536
    X86_AT(c, 0x8c147u);
    push32(c, 0x8c14cu); x86_call_known(c, 0x8f536u, f_0008f536); X86_RET(c, 0x8c14cu);
    X86_TICK(c, 12);
    // 08c14c  add esp, 4
    X86_AT(c, 0x8c14cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08c14f  ret 
    X86_AT(c, 0x8c14fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c13cu, "ran off the end of a function");
}
void f_0008c364(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c364  push ebp
    X86_AT(c, 0x8c364u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c365  mov ebp, esp
    X86_AT(c, 0x8c365u);
    c.r[5] = c.r[4];
    // 08c367  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c367u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 08c36a  push dword ptr [ebp + 8]
    X86_AT(c, 0x8c36au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08c36d  push 1
    X86_AT(c, 0x8c36du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c36f  call 0x8fb5c
    X86_AT(c, 0x8c36fu);
    push32(c, 0x8c374u); x86_call_known(c, 0x8fb5cu, f_0008fb5c); X86_RET(c, 0x8c374u);
    X86_TICK(c, 16);
    // 08c374  leave 
    X86_AT(c, 0x8c374u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c375  ret 
    X86_AT(c, 0x8c375u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c364u, "ran off the end of a function");
}
void f_0008c41c(X86Cpu& c) {
    X86_TICK(c, 8);
    // 08c41c  push edi
    X86_AT(c, 0x8c41cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c41d  mov dword ptr [0x34d80], 1
    X86_AT(c, 0x8c41du);
    wr32((c.sbase[3] + (uint32_t)(0x34D80u)), 0x1u);
    // 08c427  mov byte ptr [0x34d8b], 0
    X86_AT(c, 0x8c427u);
    wr8((c.sbase[3] + (uint32_t)(0x34D8Bu)), 0x0u);
    // 08c42e  mov edi, 1
    X86_AT(c, 0x8c42eu);
    c.r[7] = 0x1u;
L_8c433:
    X86_TICK(c, 7);
    // 08c433  cmp edi, 0x10
    X86_AT(c, 0x8c433u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 08c436  jge 0x8c48a
    X86_AT(c, 0x8c436u);
    if (x86_cc(c, 13)) { goto L_8c48a; }
    X86_TICK(c, 41);
    // 08c438  mov dword ptr [0x34d84], edi
    X86_AT(c, 0x8c438u);
    wr32((c.sbase[3] + (uint32_t)(0x34D84u)), c.r[7]);
    // 08c43e  mov eax, 0x3477c
    X86_AT(c, 0x8c43eu);
    c.r[0] = 0x3477Cu;
    // 08c443  lea edx, [edi*4]
    X86_AT(c, 0x8c443u);
    c.r[2] = (uint32_t)(c.r[7] * 4);
    // 08c44a  lea edx, [edx + edx*2]
    X86_AT(c, 0x8c44au);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 08c44d  mov cl, byte ptr [eax + edx*1 + 0x644]
    X86_AT(c, 0x8c44du);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x644u))));
    // 08c454  mov byte ptr [0x34d88], cl
    X86_AT(c, 0x8c454u);
    wr8((c.sbase[3] + (uint32_t)(0x34D88u)), g8(c, 1));
    // 08c45a  mov cl, byte ptr [eax + edx*1 + 0x648]
    X86_AT(c, 0x8c45au);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x648u))));
    // 08c461  mov byte ptr [0x34d89], cl
    X86_AT(c, 0x8c461u);
    wr8((c.sbase[3] + (uint32_t)(0x34D89u)), g8(c, 1));
    // 08c467  mov dl, byte ptr [eax + edx*1 + 0x64c]
    X86_AT(c, 0x8c467u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x64Cu))));
    // 08c46e  mov byte ptr [0x34d8a], dl
    X86_AT(c, 0x8c46eu);
    wr8((c.sbase[3] + (uint32_t)(0x34D8Au)), g8(c, 2));
    // 08c474  push 0x34d80
    X86_AT(c, 0x8c474u);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08c479  push 1
    X86_AT(c, 0x8c479u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c47b  add eax, 4
    X86_AT(c, 0x8c47bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 08c47e  push eax
    X86_AT(c, 0x8c47eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c47f  call 0x11c
    X86_AT(c, 0x8c47fu);
    push32(c, 0x8c484u); x86_call_known(c, 0x11cu, f_0000011c); X86_RET(c, 0x8c484u);
    X86_TICK(c, 11);
    // 08c484  inc edi
    X86_AT(c, 0x8c484u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08c485  add esp, 0xc
    X86_AT(c, 0x8c485u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c488  jmp 0x8c433
    X86_AT(c, 0x8c488u);
    X86_POLL(c, 0x8c433u); goto L_8c433;
L_8c48a:
    X86_TICK(c, 14);
    // 08c48a  pop edi
    X86_AT(c, 0x8c48au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c48b  ret 
    X86_AT(c, 0x8c48bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c41cu, "ran off the end of a function");
}
void f_0008c4d4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c4d4  push ebp
    X86_AT(c, 0x8c4d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c4d5  mov ebp, esp
    X86_AT(c, 0x8c4d5u);
    c.r[5] = c.r[4];
    // 08c4d7  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c4d7u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c4db  push eax
    X86_AT(c, 0x8c4dbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c4dc  push 0
    X86_AT(c, 0x8c4dcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c4de  push 0x34780
    X86_AT(c, 0x8c4deu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c4e3  call 0x18e
    X86_AT(c, 0x8c4e3u);
    push32(c, 0x8c4e8u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c4e8u);
    X86_TICK(c, 16);
    // 08c4e8  leave 
    X86_AT(c, 0x8c4e8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c4e9  ret 
    X86_AT(c, 0x8c4e9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c4d4u, "ran off the end of a function");
}
void f_0008c4ec(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c4ec  push ebp
    X86_AT(c, 0x8c4ecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c4ed  mov ebp, esp
    X86_AT(c, 0x8c4edu);
    c.r[5] = c.r[4];
    // 08c4ef  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c4efu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c4f3  push eax
    X86_AT(c, 0x8c4f3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c4f4  push 1
    X86_AT(c, 0x8c4f4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c4f6  push 0x34780
    X86_AT(c, 0x8c4f6u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c4fb  call 0x18e
    X86_AT(c, 0x8c4fbu);
    push32(c, 0x8c500u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c500u);
    X86_TICK(c, 16);
    // 08c500  leave 
    X86_AT(c, 0x8c500u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c501  ret 
    X86_AT(c, 0x8c501u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c4ecu, "ran off the end of a function");
}
void f_0008c504(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c504  push ebp
    X86_AT(c, 0x8c504u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c505  mov ebp, esp
    X86_AT(c, 0x8c505u);
    c.r[5] = c.r[4];
    // 08c507  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c507u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c50b  push eax
    X86_AT(c, 0x8c50bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c50c  push 2
    X86_AT(c, 0x8c50cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c50e  push 0x34780
    X86_AT(c, 0x8c50eu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c513  call 0x18e
    X86_AT(c, 0x8c513u);
    push32(c, 0x8c518u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c518u);
    X86_TICK(c, 16);
    // 08c518  leave 
    X86_AT(c, 0x8c518u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c519  ret 
    X86_AT(c, 0x8c519u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c504u, "ran off the end of a function");
}
void f_0008c51c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c51c  push ebp
    X86_AT(c, 0x8c51cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c51d  mov ebp, esp
    X86_AT(c, 0x8c51du);
    c.r[5] = c.r[4];
    // 08c51f  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c51fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c523  push eax
    X86_AT(c, 0x8c523u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c524  push 3
    X86_AT(c, 0x8c524u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c526  push 0x34780
    X86_AT(c, 0x8c526u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c52b  call 0x18e
    X86_AT(c, 0x8c52bu);
    push32(c, 0x8c530u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c530u);
    X86_TICK(c, 16);
    // 08c530  leave 
    X86_AT(c, 0x8c530u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c531  ret 
    X86_AT(c, 0x8c531u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c51cu, "ran off the end of a function");
}
void f_0008c534(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08c534  push ebp
    X86_AT(c, 0x8c534u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c535  mov ebp, esp
    X86_AT(c, 0x8c535u);
    c.r[5] = c.r[4];
    // 08c537  push edi
    X86_AT(c, 0x8c537u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c538  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8c538u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c53b  sar eax, 3
    X86_AT(c, 0x8c53bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 08c53e  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c53eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08c541  sar edx, 3
    X86_AT(c, 0x8c541u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08c544  shl edx, 5
    X86_AT(c, 0x8c544u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08c547  add edx, eax
    X86_AT(c, 0x8c547u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08c549  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8c549u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08c54c  sar edi, 3
    X86_AT(c, 0x8c54cu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 08c54f  shl edi, 0xa
    X86_AT(c, 0x8c54fu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 08c552  add edi, edx
    X86_AT(c, 0x8c552u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 08c554  push edi
    X86_AT(c, 0x8c554u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c555  push 0
    X86_AT(c, 0x8c555u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c557  push 0x34780
    X86_AT(c, 0x8c557u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c55c  call 0x18e
    X86_AT(c, 0x8c55cu);
    push32(c, 0x8c561u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c561u);
    X86_TICK(c, 22);
    // 08c561  add esp, 0xc
    X86_AT(c, 0x8c561u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c564  pop edi
    X86_AT(c, 0x8c564u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c565  leave 
    X86_AT(c, 0x8c565u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c566  ret 
    X86_AT(c, 0x8c566u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c534u, "ran off the end of a function");
}
void f_0008c568(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08c568  push ebp
    X86_AT(c, 0x8c568u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c569  mov ebp, esp
    X86_AT(c, 0x8c569u);
    c.r[5] = c.r[4];
    // 08c56b  push edi
    X86_AT(c, 0x8c56bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c56c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8c56cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c56f  sar eax, 3
    X86_AT(c, 0x8c56fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 08c572  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c572u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08c575  sar edx, 3
    X86_AT(c, 0x8c575u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08c578  shl edx, 5
    X86_AT(c, 0x8c578u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08c57b  add edx, eax
    X86_AT(c, 0x8c57bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08c57d  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8c57du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08c580  sar edi, 3
    X86_AT(c, 0x8c580u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 08c583  shl edi, 0xa
    X86_AT(c, 0x8c583u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 08c586  add edi, edx
    X86_AT(c, 0x8c586u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 08c588  push edi
    X86_AT(c, 0x8c588u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c589  push 1
    X86_AT(c, 0x8c589u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c58b  push 0x34780
    X86_AT(c, 0x8c58bu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c590  call 0x18e
    X86_AT(c, 0x8c590u);
    push32(c, 0x8c595u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c595u);
    X86_TICK(c, 22);
    // 08c595  add esp, 0xc
    X86_AT(c, 0x8c595u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c598  pop edi
    X86_AT(c, 0x8c598u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c599  leave 
    X86_AT(c, 0x8c599u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c59a  ret 
    X86_AT(c, 0x8c59au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c568u, "ran off the end of a function");
}
void f_0008c59c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08c59c  push ebp
    X86_AT(c, 0x8c59cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c59d  mov ebp, esp
    X86_AT(c, 0x8c59du);
    c.r[5] = c.r[4];
    // 08c59f  push dword ptr [ebp + 8]
    X86_AT(c, 0x8c59fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08c5a2  push 0x34780
    X86_AT(c, 0x8c5a2u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c5a7  call 0x431
    X86_AT(c, 0x8c5a7u);
    push32(c, 0x8c5acu); x86_call_known(c, 0x431u, f_00000431); X86_RET(c, 0x8c5acu);
    X86_TICK(c, 16);
    // 08c5ac  leave 
    X86_AT(c, 0x8c5acu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c5ad  ret 
    X86_AT(c, 0x8c5adu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c59cu, "ran off the end of a function");
}
void f_0008c5c8(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08c5c8  push ebp
    X86_AT(c, 0x8c5c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c5c9  mov ebp, esp
    X86_AT(c, 0x8c5c9u);
    c.r[5] = c.r[4];
    // 08c5cb  push edi
    X86_AT(c, 0x8c5cbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c5cc  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8c5ccu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c5cf  sar eax, 3
    X86_AT(c, 0x8c5cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 08c5d2  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c5d2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08c5d5  sar edx, 3
    X86_AT(c, 0x8c5d5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08c5d8  shl edx, 5
    X86_AT(c, 0x8c5d8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08c5db  add edx, eax
    X86_AT(c, 0x8c5dbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08c5dd  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8c5ddu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08c5e0  sar edi, 3
    X86_AT(c, 0x8c5e0u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 08c5e3  shl edi, 0xa
    X86_AT(c, 0x8c5e3u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 08c5e6  add edi, edx
    X86_AT(c, 0x8c5e6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 08c5e8  push edi
    X86_AT(c, 0x8c5e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c5e9  push 2
    X86_AT(c, 0x8c5e9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c5eb  push 0x34780
    X86_AT(c, 0x8c5ebu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c5f0  call 0x18e
    X86_AT(c, 0x8c5f0u);
    push32(c, 0x8c5f5u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c5f5u);
    X86_TICK(c, 22);
    // 08c5f5  add esp, 0xc
    X86_AT(c, 0x8c5f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c5f8  pop edi
    X86_AT(c, 0x8c5f8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c5f9  leave 
    X86_AT(c, 0x8c5f9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c5fa  ret 
    X86_AT(c, 0x8c5fau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c5c8u, "ran off the end of a function");
}
void f_0008c5fc(X86Cpu& c) {
    X86_TICK(c, 50);
    // 08c5fc  push ebp
    X86_AT(c, 0x8c5fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c5fd  mov ebp, esp
    X86_AT(c, 0x8c5fdu);
    c.r[5] = c.r[4];
    // 08c5ff  push edi
    X86_AT(c, 0x8c5ffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c600  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8c600u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c603  sar eax, 3
    X86_AT(c, 0x8c603u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 08c606  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c606u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08c609  sar edx, 3
    X86_AT(c, 0x8c609u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08c60c  shl edx, 5
    X86_AT(c, 0x8c60cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08c60f  add edx, eax
    X86_AT(c, 0x8c60fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08c611  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8c611u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08c614  sar edi, 3
    X86_AT(c, 0x8c614u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 08c617  shl edi, 0xa
    X86_AT(c, 0x8c617u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 08c61a  add edi, edx
    X86_AT(c, 0x8c61au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 08c61c  push edi
    X86_AT(c, 0x8c61cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c61d  push 3
    X86_AT(c, 0x8c61du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c61f  push 0x34780
    X86_AT(c, 0x8c61fu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c624  call 0x18e
    X86_AT(c, 0x8c624u);
    push32(c, 0x8c629u); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c629u);
    X86_TICK(c, 22);
    // 08c629  add esp, 0xc
    X86_AT(c, 0x8c629u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c62c  pop edi
    X86_AT(c, 0x8c62cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c62d  leave 
    X86_AT(c, 0x8c62du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c62e  ret 
    X86_AT(c, 0x8c62eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c5fcu, "ran off the end of a function");
}
void f_0008c644(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08c644  push ebp
    X86_AT(c, 0x8c644u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c645  mov ebp, esp
    X86_AT(c, 0x8c645u);
    c.r[5] = c.r[4];
    // 08c647  push dword ptr [ebp + 8]
    X86_AT(c, 0x8c647u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08c64a  push 0x34780
    X86_AT(c, 0x8c64au);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c64f  call 0x1fd
    X86_AT(c, 0x8c64fu);
    push32(c, 0x8c654u); x86_call_known(c, 0x1fdu, f_000001fd); X86_RET(c, 0x8c654u);
    X86_TICK(c, 16);
    // 08c654  leave 
    X86_AT(c, 0x8c654u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c655  ret 
    X86_AT(c, 0x8c655u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c644u, "ran off the end of a function");
}
void f_0008c658(X86Cpu& c) {
    X86_TICK(c, 18);
    // 08c658  push ebp
    X86_AT(c, 0x8c658u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c659  mov ebp, esp
    X86_AT(c, 0x8c659u);
    c.r[5] = c.r[4];
    // 08c65b  push dword ptr [ebp + 8]
    X86_AT(c, 0x8c65bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08c65e  push 0x34780
    X86_AT(c, 0x8c65eu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c663  call 0x144
    X86_AT(c, 0x8c663u);
    push32(c, 0x8c668u); x86_call_known(c, 0x144u, f_00000144); X86_RET(c, 0x8c668u);
    X86_TICK(c, 16);
    // 08c668  leave 
    X86_AT(c, 0x8c668u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c669  ret 
    X86_AT(c, 0x8c669u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c658u, "ran off the end of a function");
}
void f_0008c66c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08c66c  push ebp
    X86_AT(c, 0x8c66cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c66d  mov ebp, esp
    X86_AT(c, 0x8c66du);
    c.r[5] = c.r[4];
    // 08c66f  push edi
    X86_AT(c, 0x8c66fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c670  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8c670u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c673  inc edi
    X86_AT(c, 0x8c673u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08c674  cmp edi, 4
    X86_AT(c, 0x8c674u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 08c677  jne 0x8c67b
    X86_AT(c, 0x8c677u);
    if (x86_cc(c, 5)) { goto L_8c67b; }
    X86_TICK(c, 2);
    // 08c679  sub edi, edi
    X86_AT(c, 0x8c679u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_8c67b:
    X86_TICK(c, 13);
    // 08c67b  push edi
    X86_AT(c, 0x8c67bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c67c  push 0
    X86_AT(c, 0x8c67cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c67e  push 0x34780
    X86_AT(c, 0x8c67eu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c683  call 0x166
    X86_AT(c, 0x8c683u);
    push32(c, 0x8c688u); x86_call_known(c, 0x166u, f_00000166); X86_RET(c, 0x8c688u);
    X86_TICK(c, 22);
    // 08c688  add esp, 0xc
    X86_AT(c, 0x8c688u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08c68b  pop edi
    X86_AT(c, 0x8c68bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c68c  leave 
    X86_AT(c, 0x8c68cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c68d  ret 
    X86_AT(c, 0x8c68du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c66cu, "ran off the end of a function");
}
void f_0008c690(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08c690  push ebp
    X86_AT(c, 0x8c690u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c691  mov ebp, esp
    X86_AT(c, 0x8c691u);
    c.r[5] = c.r[4];
    // 08c693  push edi
    X86_AT(c, 0x8c693u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c694  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8c694u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c697  and edi, edi
    X86_AT(c, 0x8c697u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08c699  jne 0x8c6a6
    X86_AT(c, 0x8c699u);
    if (x86_cc(c, 5)) { goto L_8c6a6; }
    X86_TICK(c, 9);
    // 08c69b  mov word ptr [0x34e80], 0xa
    X86_AT(c, 0x8c69bu);
    wr16((c.sbase[3] + (uint32_t)(0x34E80u)), 0xAu);
    // 08c6a4  jmp 0x8c6b8
    X86_AT(c, 0x8c6a4u);
    goto L_8c6b8;
L_8c6a6:
    X86_TICK(c, 7);
    // 08c6a6  cmp edi, 1
    X86_AT(c, 0x8c6a6u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 08c6a9  jne 0x8c7c5
    X86_AT(c, 0x8c6a9u);
    if (x86_cc(c, 5)) { goto L_8c7c5; }
    X86_TICK(c, 2);
    // 08c6af  mov word ptr [0x34e82], 0xa
    X86_AT(c, 0x8c6afu);
    wr16((c.sbase[3] + (uint32_t)(0x34E82u)), 0xAu);
L_8c6b8:
    X86_TICK(c, 13);
    // 08c6b8  push 1
    X86_AT(c, 0x8c6b8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c6ba  push edi
    X86_AT(c, 0x8c6bau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c6bb  push 0x34780
    X86_AT(c, 0x8c6bbu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c6c0  call 0x6a
    X86_AT(c, 0x8c6c0u);
    push32(c, 0x8c6c5u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c6c5u);
    X86_TICK(c, 13);
    // 08c6c5  push 0xa
    X86_AT(c, 0x8c6c5u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 08c6c7  push edi
    X86_AT(c, 0x8c6c7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c6c8  push 0x34780
    X86_AT(c, 0x8c6c8u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c6cd  call 0x6a
    X86_AT(c, 0x8c6cdu);
    push32(c, 0x8c6d2u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c6d2u);
    X86_TICK(c, 9);
    // 08c6d2  push edi
    X86_AT(c, 0x8c6d2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c6d3  call 0x8c658
    X86_AT(c, 0x8c6d3u);
    push32(c, 0x8c6d8u); x86_call_known(c, 0x8c658u, f_0008c658); X86_RET(c, 0x8c6d8u);
    X86_TICK(c, 22);
    // 08c6d8  push dword ptr [0x34e7c]
    X86_AT(c, 0x8c6d8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34E7Cu))); push32(c, v); }
    // 08c6de  push dword ptr [0x34e78]
    X86_AT(c, 0x8c6deu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34E78u))); push32(c, v); }
    // 08c6e4  push dword ptr [0x34e74]
    X86_AT(c, 0x8c6e4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34E74u))); push32(c, v); }
    // 08c6ea  call 0x8c534
    X86_AT(c, 0x8c6eau);
    push32(c, 0x8c6efu); x86_call_known(c, 0x8c534u, f_0008c534); X86_RET(c, 0x8c6efu);
    X86_TICK(c, 22);
    // 08c6ef  push dword ptr [0x34dc8]
    X86_AT(c, 0x8c6efu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34DC8u))); push32(c, v); }
    // 08c6f5  push dword ptr [0x34dc4]
    X86_AT(c, 0x8c6f5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34DC4u))); push32(c, v); }
    // 08c6fb  push dword ptr [0x34dc0]
    X86_AT(c, 0x8c6fbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34DC0u))); push32(c, v); }
    // 08c701  call 0x8c568
    X86_AT(c, 0x8c701u);
    push32(c, 0x8c706u); x86_call_known(c, 0x8c568u, f_0008c568); X86_RET(c, 0x8c706u);
    X86_TICK(c, 22);
    // 08c706  push dword ptr [0x34e64]
    X86_AT(c, 0x8c706u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34E64u))); push32(c, v); }
    // 08c70c  push dword ptr [0x34e60]
    X86_AT(c, 0x8c70cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34E60u))); push32(c, v); }
    // 08c712  push dword ptr [0x34e5c]
    X86_AT(c, 0x8c712u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34E5Cu))); push32(c, v); }
    // 08c718  call 0x8c5c8
    X86_AT(c, 0x8c718u);
    push32(c, 0x8c71du); x86_call_known(c, 0x8c5c8u, f_0008c5c8); X86_RET(c, 0x8c71du);
    X86_TICK(c, 24);
    // 08c71d  add esp, 0x40
    X86_AT(c, 0x8c71du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08c720  push dword ptr [0x34dc8]
    X86_AT(c, 0x8c720u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34DC8u))); push32(c, v); }
    // 08c726  push dword ptr [0x34dc4]
    X86_AT(c, 0x8c726u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34DC4u))); push32(c, v); }
    // 08c72c  push dword ptr [0x34dc0]
    X86_AT(c, 0x8c72cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x34DC0u))); push32(c, v); }
    // 08c732  call 0x8c5fc
    X86_AT(c, 0x8c732u);
    push32(c, 0x8c737u); x86_call_known(c, 0x8c5fcu, f_0008c5fc); X86_RET(c, 0x8c737u);
    X86_TICK(c, 19);
    // 08c737  mov word ptr [0x34d80], 0
    X86_AT(c, 0x8c737u);
    wr16((c.sbase[3] + (uint32_t)(0x34D80u)), 0x0u);
    // 08c740  mov word ptr [0x34d82], 0
    X86_AT(c, 0x8c740u);
    wr16((c.sbase[3] + (uint32_t)(0x34D82u)), 0x0u);
    // 08c749  mov word ptr [0x34d84], 0x13f
    X86_AT(c, 0x8c749u);
    wr16((c.sbase[3] + (uint32_t)(0x34D84u)), 0x13Fu);
    // 08c752  mov word ptr [0x34d86], 0xef
    X86_AT(c, 0x8c752u);
    wr16((c.sbase[3] + (uint32_t)(0x34D86u)), 0xEFu);
    // 08c75b  push 0x34d80
    X86_AT(c, 0x8c75bu);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08c760  push 0x34780
    X86_AT(c, 0x8c760u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c765  call 0xf8
    X86_AT(c, 0x8c765u);
    push32(c, 0x8c76au); x86_call_known(c, 0xf8u, f_000000f8); X86_RET(c, 0x8c76au);
    X86_TICK(c, 15);
    // 08c76a  movsx eax, word ptr [0x34e84]
    X86_AT(c, 0x8c76au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34E84u)));
    // 08c771  push eax
    X86_AT(c, 0x8c771u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c772  call 0x8c644
    X86_AT(c, 0x8c772u);
    push32(c, 0x8c777u); x86_call_known(c, 0x8c644u, f_0008c644); X86_RET(c, 0x8c777u);
    X86_TICK(c, 17);
    // 08c777  movsx eax, word ptr [0x34e86]
    X86_AT(c, 0x8c777u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34E86u)));
    // 08c77e  push eax
    X86_AT(c, 0x8c77eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c77f  push 0x34780
    X86_AT(c, 0x8c77fu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c784  call 0x245
    X86_AT(c, 0x8c784u);
    push32(c, 0x8c789u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8c789u);
    X86_TICK(c, 15);
    // 08c789  push 0
    X86_AT(c, 0x8c789u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c78b  push 0
    X86_AT(c, 0x8c78bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c78d  push 0
    X86_AT(c, 0x8c78du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c78f  push 0x34780
    X86_AT(c, 0x8c78fu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c794  call 0xca
    X86_AT(c, 0x8c794u);
    push32(c, 0x8c799u); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c799u);
    X86_TICK(c, 17);
    // 08c799  add esp, 0x30
    X86_AT(c, 0x8c799u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 08c79c  push 2
    X86_AT(c, 0x8c79cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c79e  push 2
    X86_AT(c, 0x8c79eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c7a0  push 2
    X86_AT(c, 0x8c7a0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c7a2  push 0x34780
    X86_AT(c, 0x8c7a2u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c7a7  call 0xca
    X86_AT(c, 0x8c7a7u);
    push32(c, 0x8c7acu); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c7acu);
    X86_TICK(c, 15);
    // 08c7ac  push 0xf0
    X86_AT(c, 0x8c7acu);
    { uint32_t v = 0xF0u; push32(c, v); }
    // 08c7b1  push 0x140
    X86_AT(c, 0x8c7b1u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 08c7b6  push 3
    X86_AT(c, 0x8c7b6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c7b8  push 0x34780
    X86_AT(c, 0x8c7b8u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c7bd  call 0xca
    X86_AT(c, 0x8c7bdu);
    push32(c, 0x8c7c2u); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c7c2u);
    X86_TICK(c, 2);
    // 08c7c2  add esp, 0x20
    X86_AT(c, 0x8c7c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_8c7c5:
    X86_TICK(c, 20);
    // 08c7c5  pop edi
    X86_AT(c, 0x8c7c5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c7c6  leave 
    X86_AT(c, 0x8c7c6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c7c7  ret 
    X86_AT(c, 0x8c7c7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c690u, "ran off the end of a function");
}
void f_0008c820(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08c820  push ebp
    X86_AT(c, 0x8c820u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c821  mov ebp, esp
    X86_AT(c, 0x8c821u);
    c.r[5] = c.r[4];
    // 08c823  push edi
    X86_AT(c, 0x8c823u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c824  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8c824u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c827  and edi, edi
    X86_AT(c, 0x8c827u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 08c829  jne 0x8c836
    X86_AT(c, 0x8c829u);
    if (x86_cc(c, 5)) { goto L_8c836; }
    X86_TICK(c, 9);
    // 08c82b  mov word ptr [0x34e80], 3
    X86_AT(c, 0x8c82bu);
    wr16((c.sbase[3] + (uint32_t)(0x34E80u)), 0x3u);
    // 08c834  jmp 0x8c848
    X86_AT(c, 0x8c834u);
    goto L_8c848;
L_8c836:
    X86_TICK(c, 7);
    // 08c836  cmp edi, 1
    X86_AT(c, 0x8c836u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 08c839  jne 0x8c917
    X86_AT(c, 0x8c839u);
    if (x86_cc(c, 5)) { goto L_8c917; }
    X86_TICK(c, 2);
    // 08c83f  mov word ptr [0x34e82], 3
    X86_AT(c, 0x8c83fu);
    wr16((c.sbase[3] + (uint32_t)(0x34E82u)), 0x3u);
L_8c848:
    X86_TICK(c, 13);
    // 08c848  push 1
    X86_AT(c, 0x8c848u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c84a  push edi
    X86_AT(c, 0x8c84au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c84b  push 0x34780
    X86_AT(c, 0x8c84bu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c850  call 0x6a
    X86_AT(c, 0x8c850u);
    push32(c, 0x8c855u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c855u);
    X86_TICK(c, 13);
    // 08c855  push 3
    X86_AT(c, 0x8c855u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c857  push edi
    X86_AT(c, 0x8c857u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c858  push 0x34780
    X86_AT(c, 0x8c858u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c85d  call 0x6a
    X86_AT(c, 0x8c85du);
    push32(c, 0x8c862u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c862u);
    X86_TICK(c, 9);
    // 08c862  push edi
    X86_AT(c, 0x8c862u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c863  call 0x8c658
    X86_AT(c, 0x8c863u);
    push32(c, 0x8c868u); x86_call_known(c, 0x8c658u, f_0008c658); X86_RET(c, 0x8c868u);
    X86_TICK(c, 19);
    // 08c868  mov word ptr [0x34d80], 0
    X86_AT(c, 0x8c868u);
    wr16((c.sbase[3] + (uint32_t)(0x34D80u)), 0x0u);
    // 08c871  mov word ptr [0x34d82], 0
    X86_AT(c, 0x8c871u);
    wr16((c.sbase[3] + (uint32_t)(0x34D82u)), 0x0u);
    // 08c87a  mov word ptr [0x34d84], 0x27f
    X86_AT(c, 0x8c87au);
    wr16((c.sbase[3] + (uint32_t)(0x34D84u)), 0x27Fu);
    // 08c883  mov word ptr [0x34d86], 0x1df
    X86_AT(c, 0x8c883u);
    wr16((c.sbase[3] + (uint32_t)(0x34D86u)), 0x1DFu);
    // 08c88c  push 0x34d80
    X86_AT(c, 0x8c88cu);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08c891  push 0x34780
    X86_AT(c, 0x8c891u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c896  call 0xf8
    X86_AT(c, 0x8c896u);
    push32(c, 0x8c89bu); x86_call_known(c, 0xf8u, f_000000f8); X86_RET(c, 0x8c89bu);
    X86_TICK(c, 7);
    // 08c89b  call 0x8c41c
    X86_AT(c, 0x8c89bu);
    push32(c, 0x8c8a0u); x86_call_known(c, 0x8c41cu, f_0008c41c); X86_RET(c, 0x8c8a0u);
    X86_TICK(c, 9);
    // 08c8a0  push 0xf
    X86_AT(c, 0x8c8a0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08c8a2  call 0x8c4d4
    X86_AT(c, 0x8c8a2u);
    push32(c, 0x8c8a7u); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8c8a7u);
    X86_TICK(c, 9);
    // 08c8a7  push 0
    X86_AT(c, 0x8c8a7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c8a9  call 0x8c4ec
    X86_AT(c, 0x8c8a9u);
    push32(c, 0x8c8aeu); x86_call_known(c, 0x8c4ecu, f_0008c4ec); X86_RET(c, 0x8c8aeu);
    X86_TICK(c, 9);
    // 08c8ae  push 0xd
    X86_AT(c, 0x8c8aeu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 08c8b0  call 0x8c504
    X86_AT(c, 0x8c8b0u);
    push32(c, 0x8c8b5u); x86_call_known(c, 0x8c504u, f_0008c504); X86_RET(c, 0x8c8b5u);
    X86_TICK(c, 9);
    // 08c8b5  push 0
    X86_AT(c, 0x8c8b5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c8b7  call 0x8c51c
    X86_AT(c, 0x8c8b7u);
    push32(c, 0x8c8bcu); x86_call_known(c, 0x8c51cu, f_0008c51c); X86_RET(c, 0x8c8bcu);
    X86_TICK(c, 15);
    // 08c8bc  movsx eax, word ptr [0x34e84]
    X86_AT(c, 0x8c8bcu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34E84u)));
    // 08c8c3  push eax
    X86_AT(c, 0x8c8c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c8c4  call 0x8c644
    X86_AT(c, 0x8c8c4u);
    push32(c, 0x8c8c9u); x86_call_known(c, 0x8c644u, f_0008c644); X86_RET(c, 0x8c8c9u);
    X86_TICK(c, 17);
    // 08c8c9  movsx eax, word ptr [0x34e86]
    X86_AT(c, 0x8c8c9u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34E86u)));
    // 08c8d0  push eax
    X86_AT(c, 0x8c8d0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c8d1  push 0x34780
    X86_AT(c, 0x8c8d1u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c8d6  call 0x245
    X86_AT(c, 0x8c8d6u);
    push32(c, 0x8c8dbu); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8c8dbu);
    X86_TICK(c, 17);
    // 08c8db  add esp, 0x40
    X86_AT(c, 0x8c8dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08c8de  push 0
    X86_AT(c, 0x8c8deu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c8e0  push 0
    X86_AT(c, 0x8c8e0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c8e2  push 0
    X86_AT(c, 0x8c8e2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c8e4  push 0x34780
    X86_AT(c, 0x8c8e4u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c8e9  call 0xca
    X86_AT(c, 0x8c8e9u);
    push32(c, 0x8c8eeu); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c8eeu);
    X86_TICK(c, 15);
    // 08c8ee  push 1
    X86_AT(c, 0x8c8eeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c8f0  push 1
    X86_AT(c, 0x8c8f0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c8f2  push 2
    X86_AT(c, 0x8c8f2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08c8f4  push 0x34780
    X86_AT(c, 0x8c8f4u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c8f9  call 0xca
    X86_AT(c, 0x8c8f9u);
    push32(c, 0x8c8feu); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c8feu);
    X86_TICK(c, 15);
    // 08c8fe  push 0x1e0
    X86_AT(c, 0x8c8feu);
    { uint32_t v = 0x1E0u; push32(c, v); }
    // 08c903  push 0x280
    X86_AT(c, 0x8c903u);
    { uint32_t v = 0x280u; push32(c, v); }
    // 08c908  push 3
    X86_AT(c, 0x8c908u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08c90a  push 0x34780
    X86_AT(c, 0x8c90au);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c90f  call 0xca
    X86_AT(c, 0x8c90fu);
    push32(c, 0x8c914u); x86_call_known(c, 0xcau, f_000000ca); X86_RET(c, 0x8c914u);
    X86_TICK(c, 2);
    // 08c914  add esp, 0x30
    X86_AT(c, 0x8c914u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_8c917:
    X86_TICK(c, 20);
    // 08c917  pop edi
    X86_AT(c, 0x8c917u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c918  leave 
    X86_AT(c, 0x8c918u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c919  ret 
    X86_AT(c, 0x8c919u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c820u, "ran off the end of a function");
}
void f_0008c91c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 08c91c  push 0x600
    X86_AT(c, 0x8c91cu);
    { uint32_t v = 0x600u; push32(c, v); }
    // 08c921  push 0x34780
    X86_AT(c, 0x8c921u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c926  call 0x48
    X86_AT(c, 0x8c926u);
    push32(c, 0x8c92bu); x86_call_known(c, 0x48u, f_00000048); X86_RET(c, 0x8c92bu);
    X86_TICK(c, 9);
    // 08c92b  add esp, 8
    X86_AT(c, 0x8c92bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08c92e  and eax, eax
    X86_AT(c, 0x8c92eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08c930  je 0x8c93c
    X86_AT(c, 0x8c930u);
    if (x86_cc(c, 4)) { goto L_8c93c; }
    X86_TICK(c, 9);
    // 08c932  mov eax, 0xffffffff
    X86_AT(c, 0x8c932u);
    c.r[0] = 0xFFFFFFFFu;
    // 08c937  jmp 0x8c9f6
    X86_AT(c, 0x8c937u);
    goto L_8c9f6;
L_8c93c:
    X86_TICK(c, 17);
    // 08c93c  mov word ptr [0x34e80], 3
    X86_AT(c, 0x8c93cu);
    wr16((c.sbase[3] + (uint32_t)(0x34E80u)), 0x3u);
    // 08c945  mov eax, 3
    X86_AT(c, 0x8c945u);
    c.r[0] = 0x3u;
    // 08c94a  push eax
    X86_AT(c, 0x8c94au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c94b  push 0
    X86_AT(c, 0x8c94bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c94d  push 0x34780
    X86_AT(c, 0x8c94du);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c952  call 0x6a
    X86_AT(c, 0x8c952u);
    push32(c, 0x8c957u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c957u);
    X86_TICK(c, 19);
    // 08c957  mov ax, 3
    X86_AT(c, 0x8c957u);
    s16(c, 0, 0x3u);
    // 08c95b  mov word ptr [0x34e82], ax
    X86_AT(c, 0x8c95bu);
    wr16((c.sbase[3] + (uint32_t)(0x34E82u)), (c.r[0] & 0xFFFFu));
    // 08c961  mov eax, 3
    X86_AT(c, 0x8c961u);
    c.r[0] = 0x3u;
    // 08c966  push eax
    X86_AT(c, 0x8c966u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c967  push 1
    X86_AT(c, 0x8c967u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c969  push 0x34780
    X86_AT(c, 0x8c969u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c96e  call 0x6a
    X86_AT(c, 0x8c96eu);
    push32(c, 0x8c973u); x86_call_known(c, 0x6au, f_0000006a); X86_RET(c, 0x8c973u);
    X86_TICK(c, 15);
    // 08c973  mov ax, 9
    X86_AT(c, 0x8c973u);
    s16(c, 0, 0x9u);
    // 08c977  mov word ptr [0x34e84], ax
    X86_AT(c, 0x8c977u);
    wr16((c.sbase[3] + (uint32_t)(0x34E84u)), (c.r[0] & 0xFFFFu));
    // 08c97d  mov eax, 9
    X86_AT(c, 0x8c97du);
    c.r[0] = 0x9u;
    // 08c982  push eax
    X86_AT(c, 0x8c982u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c983  call 0x8c644
    X86_AT(c, 0x8c983u);
    push32(c, 0x8c988u); x86_call_known(c, 0x8c644u, f_0008c644); X86_RET(c, 0x8c988u);
    X86_TICK(c, 17);
    // 08c988  mov ax, 0x22
    X86_AT(c, 0x8c988u);
    s16(c, 0, 0x22u);
    // 08c98c  mov word ptr [0x34e86], ax
    X86_AT(c, 0x8c98cu);
    wr16((c.sbase[3] + (uint32_t)(0x34E86u)), (c.r[0] & 0xFFFFu));
    // 08c992  mov eax, 0x22
    X86_AT(c, 0x8c992u);
    c.r[0] = 0x22u;
    // 08c997  push eax
    X86_AT(c, 0x8c997u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c998  push 0x34780
    X86_AT(c, 0x8c998u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c99d  call 0x245
    X86_AT(c, 0x8c99du);
    push32(c, 0x8c9a2u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8c9a2u);
    X86_TICK(c, 9);
    // 08c9a2  push 0
    X86_AT(c, 0x8c9a2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c9a4  call 0x8c658
    X86_AT(c, 0x8c9a4u);
    push32(c, 0x8c9a9u); x86_call_known(c, 0x8c658u, f_0008c658); X86_RET(c, 0x8c9a9u);
    X86_TICK(c, 9);
    // 08c9a9  push 0
    X86_AT(c, 0x8c9a9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c9ab  call 0x8c66c
    X86_AT(c, 0x8c9abu);
    push32(c, 0x8c9b0u); x86_call_known(c, 0x8c66cu, f_0008c66c); X86_RET(c, 0x8c9b0u);
    X86_TICK(c, 7);
    // 08c9b0  call 0x8c41c
    X86_AT(c, 0x8c9b0u);
    push32(c, 0x8c9b5u); x86_call_known(c, 0x8c41cu, f_0008c41c); X86_RET(c, 0x8c9b5u);
    X86_TICK(c, 9);
    // 08c9b5  push 0xf
    X86_AT(c, 0x8c9b5u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08c9b7  call 0x8c4d4
    X86_AT(c, 0x8c9b7u);
    push32(c, 0x8c9bcu); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8c9bcu);
    X86_TICK(c, 9);
    // 08c9bc  push 0
    X86_AT(c, 0x8c9bcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c9be  call 0x8c4ec
    X86_AT(c, 0x8c9beu);
    push32(c, 0x8c9c3u); x86_call_known(c, 0x8c4ecu, f_0008c4ec); X86_RET(c, 0x8c9c3u);
    X86_TICK(c, 9);
    // 08c9c3  push 0xd
    X86_AT(c, 0x8c9c3u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 08c9c5  call 0x8c504
    X86_AT(c, 0x8c9c5u);
    push32(c, 0x8c9cau); x86_call_known(c, 0x8c504u, f_0008c504); X86_RET(c, 0x8c9cau);
    X86_TICK(c, 11);
    // 08c9ca  push 0
    X86_AT(c, 0x8c9cau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c9cc  push 0x34780
    X86_AT(c, 0x8c9ccu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c9d1  call 0x39c
    X86_AT(c, 0x8c9d1u);
    push32(c, 0x8c9d6u); x86_call_known(c, 0x39cu, f_0000039c); X86_RET(c, 0x8c9d6u);
    X86_TICK(c, 13);
    // 08c9d6  add esp, 0x40
    X86_AT(c, 0x8c9d6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08c9d9  push 0
    X86_AT(c, 0x8c9d9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c9db  push 0x34780
    X86_AT(c, 0x8c9dbu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c9e0  call 0x3be
    X86_AT(c, 0x8c9e0u);
    push32(c, 0x8c9e5u); x86_call_known(c, 0x3beu, f_000003be); X86_RET(c, 0x8c9e5u);
    X86_TICK(c, 11);
    // 08c9e5  push 0
    X86_AT(c, 0x8c9e5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c9e7  push 0x34780
    X86_AT(c, 0x8c9e7u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08c9ec  call 0x3e0
    X86_AT(c, 0x8c9ecu);
    push32(c, 0x8c9f1u); x86_call_known(c, 0x3e0u, f_000003e0); X86_RET(c, 0x8c9f1u);
    X86_TICK(c, 4);
    // 08c9f1  sub eax, eax
    X86_AT(c, 0x8c9f1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08c9f3  add esp, 0x10
    X86_AT(c, 0x8c9f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_8c9f6:
    X86_TICK(c, 10);
    // 08c9f6  ret 
    X86_AT(c, 0x8c9f6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c91cu, "ran off the end of a function");
}
}

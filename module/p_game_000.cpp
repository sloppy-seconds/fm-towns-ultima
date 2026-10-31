#include "p_game_funcs.h"
namespace p_game {
void f_00000009(X86Cpu& c) {
    X86_TICK(c, 43);
    // 000009  push ebp
    X86_AT(c, 0x9u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 00000a  mov ebp, esp
    X86_AT(c, 0xau);
    c.r[5] = c.r[4];
    // 00000c  xor ah, ah
    X86_AT(c, 0xcu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 00000e  int 0x90
    X86_AT(c, 0xeu);
    x86_int(c, 0x90, 0x10u);
    X86_TICK(c, 17);
    // 000010  movzx eax, ah
    X86_AT(c, 0x10u);
    c.r[0] = g8(c, 4);
    // 000013  pop ebp
    X86_AT(c, 0x13u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 000014  ret 
    X86_AT(c, 0x14u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9u, "ran off the end of a function");
}
void f_0000002b(X86Cpu& c) {
    X86_TICK(c, 47);
    // 00002b  push ebp
    X86_AT(c, 0x2bu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 00002c  mov ebp, esp
    X86_AT(c, 0x2cu);
    c.r[5] = c.r[4];
    // 00002e  mov ah, 1
    X86_AT(c, 0x2eu);
    s8(c, 4, 0x1u);
    // 000030  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x30u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 000033  int 0x90
    X86_AT(c, 0x33u);
    x86_int(c, 0x90, 0x35u);
    X86_TICK(c, 17);
    // 000035  movzx eax, ah
    X86_AT(c, 0x35u);
    c.r[0] = g8(c, 4);
    // 000038  pop ebp
    X86_AT(c, 0x38u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 000039  ret 
    X86_AT(c, 0x39u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2bu, "ran off the end of a function");
}
void f_00000049(X86Cpu& c) {
    X86_TICK(c, 49);
    // 000049  enter 0, 0
    X86_AT(c, 0x49u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 00004d  mov ah, 4
    X86_AT(c, 0x4du);
    s8(c, 4, 0x4u);
    // 00004f  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x4fu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 000052  int 0x90
    X86_AT(c, 0x52u);
    x86_int(c, 0x90, 0x54u);
    X86_TICK(c, 19);
    // 000054  movzx eax, ah
    X86_AT(c, 0x54u);
    c.r[0] = g8(c, 4);
    // 000057  leave 
    X86_AT(c, 0x57u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 000058  ret 
    X86_AT(c, 0x58u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49u, "ran off the end of a function");
}
void f_00000069(X86Cpu& c) {
    X86_TICK(c, 49);
    // 000069  enter 0, 0
    X86_AT(c, 0x69u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 00006d  mov ah, 5
    X86_AT(c, 0x6du);
    s8(c, 4, 0x5u);
    // 00006f  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x6fu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 000072  int 0x90
    X86_AT(c, 0x72u);
    x86_int(c, 0x90, 0x74u);
    X86_TICK(c, 19);
    // 000074  movzx eax, ah
    X86_AT(c, 0x74u);
    c.r[0] = g8(c, 4);
    // 000077  leave 
    X86_AT(c, 0x77u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 000078  ret 
    X86_AT(c, 0x78u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x69u, "ran off the end of a function");
}
void f_0000008b(X86Cpu& c) {
    X86_TICK(c, 45);
    // 00008b  enter 0, 0
    X86_AT(c, 0x8bu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 00008f  mov ax, 0x600
    X86_AT(c, 0x8fu);
    s16(c, 0, 0x600u);
    // 000093  int 0x90
    X86_AT(c, 0x93u);
    x86_int(c, 0x90, 0x95u);
    X86_TICK(c, 19);
    // 000095  movzx eax, ah
    X86_AT(c, 0x95u);
    c.r[0] = g8(c, 4);
    // 000098  leave 
    X86_AT(c, 0x98u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 000099  ret 
    X86_AT(c, 0x99u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bu, "ran off the end of a function");
}
void f_000000a9(X86Cpu& c) {
    X86_TICK(c, 53);
    // 0000a9  enter 0, 0
    X86_AT(c, 0xa9u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0000ad  push ebx
    X86_AT(c, 0xadu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0000ae  push esi
    X86_AT(c, 0xaeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0000af  mov ah, 9
    X86_AT(c, 0xafu);
    s8(c, 4, 0x9u);
    // 0000b1  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0xb1u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0000b4  int 0x90
    X86_AT(c, 0xb4u);
    x86_int(c, 0x90, 0xb6u);
    X86_TICK(c, 36);
    // 0000b6  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb6u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0000b9  movzx ebx, bx
    X86_AT(c, 0xb9u);
    c.r[3] = (c.r[3] & 0xFFFFu);
    // 0000bc  mov dword ptr [esi], ebx
    X86_AT(c, 0xbcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[3]);
    // 0000be  movzx eax, dx
    X86_AT(c, 0xbeu);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 0000c1  pop esi
    X86_AT(c, 0xc1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0000c2  pop ebx
    X86_AT(c, 0xc2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0000c3  leave 
    X86_AT(c, 0xc3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0000c4  ret 
    X86_AT(c, 0xc4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa9u, "ran off the end of a function");
}
void f_000000c8(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0000c8  push edi
    X86_AT(c, 0xc8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0000c9  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0xc9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0000cd  mov ecx, dword ptr [esp + 0xc]
    X86_AT(c, 0xcdu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0000d1  mov ah, 0
    X86_AT(c, 0xd1u);
    s8(c, 4, 0x0u);
    // 0000d3  push fs
    X86_AT(c, 0xd3u);
    push32(c, c.sreg[4]);
    // 0000d5  push 0x110
    X86_AT(c, 0xd5u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0000da  pop fs
    X86_AT(c, 0xdau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0000dc  lcall fword ptr fs:[0x20]
    X86_AT(c, 0xdcu);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0xe3u); }
    X86_RET(c, 0xe3u);
    X86_TICK(c, 21);
    // 0000e3  pop fs
    X86_AT(c, 0xe3u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0000e5  movsx eax, ah
    X86_AT(c, 0xe5u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0000e8  pop edi
    X86_AT(c, 0xe8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0000e9  ret 
    X86_AT(c, 0xe9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8u, "ran off the end of a function");
}
void f_000000ea(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0000ea  push edi
    X86_AT(c, 0xeau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0000eb  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0xebu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0000ef  mov al, byte ptr [esp + 0xc]
    X86_AT(c, 0xefu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 0000f3  mov dx, word ptr [esp + 0x10]
    X86_AT(c, 0xf3u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u))));
    // 0000f8  mov ah, 1
    X86_AT(c, 0xf8u);
    s8(c, 4, 0x1u);
    // 0000fa  push fs
    X86_AT(c, 0xfau);
    push32(c, c.sreg[4]);
    // 0000fc  push 0x110
    X86_AT(c, 0xfcu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000101  pop fs
    X86_AT(c, 0x101u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000103  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x103u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x10au); }
    X86_RET(c, 0x10au);
    X86_TICK(c, 21);
    // 00010a  pop fs
    X86_AT(c, 0x10au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00010c  movsx eax, ah
    X86_AT(c, 0x10cu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 00010f  pop edi
    X86_AT(c, 0x10fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000110  ret 
    X86_AT(c, 0x110u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeau, "ran off the end of a function");
}
void f_0000014a(X86Cpu& c) {
    X86_TICK(c, 36);
    // 00014a  push ebx
    X86_AT(c, 0x14au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00014b  push edi
    X86_AT(c, 0x14bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00014c  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x14cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 000150  mov al, byte ptr [esp + 0x10]
    X86_AT(c, 0x150u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u))));
    // 000154  mov dx, word ptr [esp + 0x14]
    X86_AT(c, 0x154u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u))));
    // 000159  mov bx, word ptr [esp + 0x18]
    X86_AT(c, 0x159u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x18u))));
    // 00015e  mov ah, 2
    X86_AT(c, 0x15eu);
    s8(c, 4, 0x2u);
    // 000160  push fs
    X86_AT(c, 0x160u);
    push32(c, c.sreg[4]);
    // 000162  push 0x110
    X86_AT(c, 0x162u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000167  pop fs
    X86_AT(c, 0x167u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000169  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x169u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x170u); }
    X86_RET(c, 0x170u);
    X86_TICK(c, 25);
    // 000170  pop fs
    X86_AT(c, 0x170u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000172  movsx eax, ah
    X86_AT(c, 0x172u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000175  pop edi
    X86_AT(c, 0x175u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000176  pop ebx
    X86_AT(c, 0x176u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 000177  ret 
    X86_AT(c, 0x177u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x14au, "ran off the end of a function");
}
void f_00000178(X86Cpu& c) {
    X86_TICK(c, 28);
    // 000178  push esi
    X86_AT(c, 0x178u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 000179  push edi
    X86_AT(c, 0x179u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00017a  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x17au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 00017e  mov esi, dword ptr [esp + 0x10]
    X86_AT(c, 0x17eu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 000182  mov ah, 3
    X86_AT(c, 0x182u);
    s8(c, 4, 0x3u);
    // 000184  push fs
    X86_AT(c, 0x184u);
    push32(c, c.sreg[4]);
    // 000186  push 0x110
    X86_AT(c, 0x186u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 00018b  pop fs
    X86_AT(c, 0x18bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00018d  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x18du);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x194u); }
    X86_RET(c, 0x194u);
    X86_TICK(c, 25);
    // 000194  pop fs
    X86_AT(c, 0x194u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000196  movsx eax, ah
    X86_AT(c, 0x196u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000199  pop edi
    X86_AT(c, 0x199u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00019a  pop esi
    X86_AT(c, 0x19au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00019b  ret 
    X86_AT(c, 0x19bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x178u, "ran off the end of a function");
}
void f_0000019c(X86Cpu& c) {
    X86_TICK(c, 32);
    // 00019c  push esi
    X86_AT(c, 0x19cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00019d  push edi
    X86_AT(c, 0x19du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00019e  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x19eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0001a2  mov al, byte ptr [esp + 0x10]
    X86_AT(c, 0x1a2u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u))));
    // 0001a6  mov esi, dword ptr [esp + 0x14]
    X86_AT(c, 0x1a6u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u)));
    // 0001aa  mov ah, 4
    X86_AT(c, 0x1aau);
    s8(c, 4, 0x4u);
    // 0001ac  push fs
    X86_AT(c, 0x1acu);
    push32(c, c.sreg[4]);
    // 0001ae  push 0x110
    X86_AT(c, 0x1aeu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0001b3  pop fs
    X86_AT(c, 0x1b3u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0001b5  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x1b5u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x1bcu); }
    X86_RET(c, 0x1bcu);
    X86_TICK(c, 25);
    // 0001bc  pop fs
    X86_AT(c, 0x1bcu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0001be  movsx eax, ah
    X86_AT(c, 0x1beu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0001c1  pop edi
    X86_AT(c, 0x1c1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0001c2  pop esi
    X86_AT(c, 0x1c2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0001c3  ret 
    X86_AT(c, 0x1c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x19cu, "ran off the end of a function");
}
void f_000001c4(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0001c4  push edi
    X86_AT(c, 0x1c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0001c5  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x1c5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0001c9  mov al, byte ptr [esp + 0xc]
    X86_AT(c, 0x1c9u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 0001cd  mov ah, 5
    X86_AT(c, 0x1cdu);
    s8(c, 4, 0x5u);
    // 0001cf  push fs
    X86_AT(c, 0x1cfu);
    push32(c, c.sreg[4]);
    // 0001d1  push 0x110
    X86_AT(c, 0x1d1u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0001d6  pop fs
    X86_AT(c, 0x1d6u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0001d8  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x1d8u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x1dfu); }
    X86_RET(c, 0x1dfu);
    X86_TICK(c, 21);
    // 0001df  pop fs
    X86_AT(c, 0x1dfu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0001e1  movsx eax, ah
    X86_AT(c, 0x1e1u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0001e4  pop edi
    X86_AT(c, 0x1e4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0001e5  ret 
    X86_AT(c, 0x1e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c4u, "ran off the end of a function");
}
void f_000001e6(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0001e6  push esi
    X86_AT(c, 0x1e6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0001e7  push edi
    X86_AT(c, 0x1e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0001e8  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x1e8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0001ec  mov al, byte ptr [esp + 0x10]
    X86_AT(c, 0x1ecu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u))));
    // 0001f0  mov edx, dword ptr [esp + 0x14]
    X86_AT(c, 0x1f0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u)));
    // 0001f4  mov ah, 6
    X86_AT(c, 0x1f4u);
    s8(c, 4, 0x6u);
    // 0001f6  push fs
    X86_AT(c, 0x1f6u);
    push32(c, c.sreg[4]);
    // 0001f8  push 0x110
    X86_AT(c, 0x1f8u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0001fd  pop fs
    X86_AT(c, 0x1fdu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0001ff  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x1ffu);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x206u); }
    X86_RET(c, 0x206u);
    X86_TICK(c, 25);
    // 000206  pop fs
    X86_AT(c, 0x206u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000208  movsx eax, ah
    X86_AT(c, 0x208u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 00020b  pop edi
    X86_AT(c, 0x20bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00020c  pop esi
    X86_AT(c, 0x20cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00020d  ret 
    X86_AT(c, 0x20du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1e6u, "ran off the end of a function");
}
void f_0000020e(X86Cpu& c) {
    X86_TICK(c, 30);
    // 00020e  push edi
    X86_AT(c, 0x20eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00020f  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x20fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 000213  mov al, byte ptr [esp + 0xc]
    X86_AT(c, 0x213u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 000217  mov edx, dword ptr [esp + 0x10]
    X86_AT(c, 0x217u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 00021b  mov ah, 7
    X86_AT(c, 0x21bu);
    s8(c, 4, 0x7u);
    // 00021d  push fs
    X86_AT(c, 0x21du);
    push32(c, c.sreg[4]);
    // 00021f  push 0x110
    X86_AT(c, 0x21fu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000224  pop fs
    X86_AT(c, 0x224u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000226  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x226u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x22du); }
    X86_RET(c, 0x22du);
    X86_TICK(c, 21);
    // 00022d  pop fs
    X86_AT(c, 0x22du);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00022f  movsx eax, ah
    X86_AT(c, 0x22fu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000232  pop edi
    X86_AT(c, 0x232u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000233  ret 
    X86_AT(c, 0x233u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20eu, "ran off the end of a function");
}
void f_0000027d(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00027d  push edi
    X86_AT(c, 0x27du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00027e  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x27eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 000282  mov al, byte ptr [esp + 0xc]
    X86_AT(c, 0x282u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 000286  mov ah, 0xa
    X86_AT(c, 0x286u);
    s8(c, 4, 0xAu);
    // 000288  push fs
    X86_AT(c, 0x288u);
    push32(c, c.sreg[4]);
    // 00028a  push 0x110
    X86_AT(c, 0x28au);
    { uint32_t v = 0x110u; push32(c, v); }
    // 00028f  pop fs
    X86_AT(c, 0x28fu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000291  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x291u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x298u); }
    X86_RET(c, 0x298u);
    X86_TICK(c, 21);
    // 000298  pop fs
    X86_AT(c, 0x298u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00029a  movsx eax, ah
    X86_AT(c, 0x29au);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 00029d  pop edi
    X86_AT(c, 0x29du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00029e  ret 
    X86_AT(c, 0x29eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x27du, "ran off the end of a function");
}
void f_000002c5(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0002c5  push edi
    X86_AT(c, 0x2c5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0002c6  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x2c6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0002ca  mov dx, word ptr [esp + 0xc]
    X86_AT(c, 0x2cau);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 0002cf  mov ah, 0xc
    X86_AT(c, 0x2cfu);
    s8(c, 4, 0xCu);
    // 0002d1  push fs
    X86_AT(c, 0x2d1u);
    push32(c, c.sreg[4]);
    // 0002d3  push 0x110
    X86_AT(c, 0x2d3u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0002d8  pop fs
    X86_AT(c, 0x2d8u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002da  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x2dau);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x2e1u); }
    X86_RET(c, 0x2e1u);
    X86_TICK(c, 21);
    // 0002e1  pop fs
    X86_AT(c, 0x2e1u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0002e3  movsx eax, ah
    X86_AT(c, 0x2e3u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0002e6  pop edi
    X86_AT(c, 0x2e6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0002e7  ret 
    X86_AT(c, 0x2e7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2c5u, "ran off the end of a function");
}
void f_0000041c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00041c  push edi
    X86_AT(c, 0x41cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00041d  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x41du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 000421  mov al, byte ptr [esp + 0xc]
    X86_AT(c, 0x421u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 000425  mov ah, 0x15
    X86_AT(c, 0x425u);
    s8(c, 4, 0x15u);
    // 000427  push fs
    X86_AT(c, 0x427u);
    push32(c, c.sreg[4]);
    // 000429  push 0x110
    X86_AT(c, 0x429u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 00042e  pop fs
    X86_AT(c, 0x42eu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000430  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x430u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x437u); }
    X86_RET(c, 0x437u);
    X86_TICK(c, 21);
    // 000437  pop fs
    X86_AT(c, 0x437u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000439  movsx eax, ah
    X86_AT(c, 0x439u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 00043c  pop edi
    X86_AT(c, 0x43cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00043d  ret 
    X86_AT(c, 0x43du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x41cu, "ran off the end of a function");
}
void f_0000043e(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00043e  push edi
    X86_AT(c, 0x43eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00043f  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x43fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 000443  mov al, byte ptr [esp + 0xc]
    X86_AT(c, 0x443u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 000447  mov ah, 0x16
    X86_AT(c, 0x447u);
    s8(c, 4, 0x16u);
    // 000449  push fs
    X86_AT(c, 0x449u);
    push32(c, c.sreg[4]);
    // 00044b  push 0x110
    X86_AT(c, 0x44bu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000450  pop fs
    X86_AT(c, 0x450u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000452  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x452u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x459u); }
    X86_RET(c, 0x459u);
    X86_TICK(c, 21);
    // 000459  pop fs
    X86_AT(c, 0x459u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00045b  movsx eax, ah
    X86_AT(c, 0x45bu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 00045e  pop edi
    X86_AT(c, 0x45eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00045f  ret 
    X86_AT(c, 0x45fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x43eu, "ran off the end of a function");
}
void f_00000460(X86Cpu& c) {
    X86_TICK(c, 26);
    // 000460  push edi
    X86_AT(c, 0x460u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000461  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x461u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 000465  mov dx, word ptr [esp + 0xc]
    X86_AT(c, 0x465u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 00046a  mov ah, 0x17
    X86_AT(c, 0x46au);
    s8(c, 4, 0x17u);
    // 00046c  push fs
    X86_AT(c, 0x46cu);
    push32(c, c.sreg[4]);
    // 00046e  push 0x110
    X86_AT(c, 0x46eu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000473  pop fs
    X86_AT(c, 0x473u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000475  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x475u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x47cu); }
    X86_RET(c, 0x47cu);
    X86_TICK(c, 21);
    // 00047c  pop fs
    X86_AT(c, 0x47cu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00047e  movsx eax, ah
    X86_AT(c, 0x47eu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000481  pop edi
    X86_AT(c, 0x481u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000482  ret 
    X86_AT(c, 0x482u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x460u, "ran off the end of a function");
}
void f_000004b1(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0004b1  push edi
    X86_AT(c, 0x4b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0004b2  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x4b2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0004b6  mov dx, word ptr [esp + 0xc]
    X86_AT(c, 0x4b6u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 0004bb  mov ah, 0x19
    X86_AT(c, 0x4bbu);
    s8(c, 4, 0x19u);
    // 0004bd  push fs
    X86_AT(c, 0x4bdu);
    push32(c, c.sreg[4]);
    // 0004bf  push 0x110
    X86_AT(c, 0x4bfu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0004c4  pop fs
    X86_AT(c, 0x4c4u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0004c6  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x4c6u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x4cdu); }
    X86_RET(c, 0x4cdu);
    X86_TICK(c, 21);
    // 0004cd  pop fs
    X86_AT(c, 0x4cdu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0004cf  movsx eax, ah
    X86_AT(c, 0x4cfu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0004d2  pop edi
    X86_AT(c, 0x4d2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0004d3  ret 
    X86_AT(c, 0x4d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b1u, "ran off the end of a function");
}
void f_00000518(X86Cpu& c) {
    X86_TICK(c, 22);
    // 000518  push edi
    X86_AT(c, 0x518u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000519  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x519u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 00051d  mov ah, 0x20
    X86_AT(c, 0x51du);
    s8(c, 4, 0x20u);
    // 00051f  push fs
    X86_AT(c, 0x51fu);
    push32(c, c.sreg[4]);
    // 000521  push 0x110
    X86_AT(c, 0x521u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000526  pop fs
    X86_AT(c, 0x526u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000528  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x528u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x52fu); }
    X86_RET(c, 0x52fu);
    X86_TICK(c, 21);
    // 00052f  pop fs
    X86_AT(c, 0x52fu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000531  movsx eax, ah
    X86_AT(c, 0x531u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000534  pop edi
    X86_AT(c, 0x534u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000535  ret 
    X86_AT(c, 0x535u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x518u, "ran off the end of a function");
}
void f_000005c4(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0005c4  push esi
    X86_AT(c, 0x5c4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0005c5  push edi
    X86_AT(c, 0x5c5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0005c6  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x5c6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0005ca  mov al, byte ptr [esp + 0x10]
    X86_AT(c, 0x5cau);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u))));
    // 0005ce  mov esi, dword ptr [esp + 0x14]
    X86_AT(c, 0x5ceu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u)));
    // 0005d2  mov ah, 0x25
    X86_AT(c, 0x5d2u);
    s8(c, 4, 0x25u);
    // 0005d4  push fs
    X86_AT(c, 0x5d4u);
    push32(c, c.sreg[4]);
    // 0005d6  push 0x110
    X86_AT(c, 0x5d6u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0005db  pop fs
    X86_AT(c, 0x5dbu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0005dd  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x5ddu);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x5e4u); }
    X86_RET(c, 0x5e4u);
    X86_TICK(c, 25);
    // 0005e4  pop fs
    X86_AT(c, 0x5e4u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0005e6  movsx eax, ah
    X86_AT(c, 0x5e6u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0005e9  pop edi
    X86_AT(c, 0x5e9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0005ea  pop esi
    X86_AT(c, 0x5eau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0005eb  ret 
    X86_AT(c, 0x5ebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5c4u, "ran off the end of a function");
}
void f_00000610(X86Cpu& c) {
    X86_TICK(c, 32);
    // 000610  push esi
    X86_AT(c, 0x610u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 000611  push edi
    X86_AT(c, 0x611u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000612  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x612u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 000616  mov al, byte ptr [esp + 0x10]
    X86_AT(c, 0x616u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u))));
    // 00061a  mov esi, dword ptr [esp + 0x14]
    X86_AT(c, 0x61au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u)));
    // 00061e  mov ah, 0x27
    X86_AT(c, 0x61eu);
    s8(c, 4, 0x27u);
    // 000620  push fs
    X86_AT(c, 0x620u);
    push32(c, c.sreg[4]);
    // 000622  push 0x110
    X86_AT(c, 0x622u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000627  pop fs
    X86_AT(c, 0x627u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000629  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x629u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x630u); }
    X86_RET(c, 0x630u);
    X86_TICK(c, 25);
    // 000630  pop fs
    X86_AT(c, 0x630u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000632  movsx eax, ah
    X86_AT(c, 0x632u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000635  pop edi
    X86_AT(c, 0x635u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000636  pop esi
    X86_AT(c, 0x636u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000637  ret 
    X86_AT(c, 0x637u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x610u, "ran off the end of a function");
}
void f_000006b6(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0006b6  push ebx
    X86_AT(c, 0x6b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0006b7  push esi
    X86_AT(c, 0x6b7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0006b8  push edi
    X86_AT(c, 0x6b8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0006b9  mov edi, dword ptr [esp + 0x10]
    X86_AT(c, 0x6b9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 0006bd  mov al, byte ptr [esp + 0x14]
    X86_AT(c, 0x6bdu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u))));
    // 0006c1  mov dx, word ptr [esp + 0x18]
    X86_AT(c, 0x6c1u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x18u))));
    // 0006c6  mov bx, word ptr [esp + 0x1c]
    X86_AT(c, 0x6c6u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x1Cu))));
    // 0006cb  mov esi, dword ptr [esp + 0x20]
    X86_AT(c, 0x6cbu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x20u)));
    // 0006cf  mov ah, 0x2b
    X86_AT(c, 0x6cfu);
    s8(c, 4, 0x2Bu);
    // 0006d1  push fs
    X86_AT(c, 0x6d1u);
    push32(c, c.sreg[4]);
    // 0006d3  push 0x110
    X86_AT(c, 0x6d3u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0006d8  pop fs
    X86_AT(c, 0x6d8u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0006da  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x6dau);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x6e1u); }
    X86_RET(c, 0x6e1u);
    X86_TICK(c, 29);
    // 0006e1  pop fs
    X86_AT(c, 0x6e1u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0006e3  movsx eax, ah
    X86_AT(c, 0x6e3u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0006e6  pop edi
    X86_AT(c, 0x6e6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0006e7  pop esi
    X86_AT(c, 0x6e7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0006e8  pop ebx
    X86_AT(c, 0x6e8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0006e9  ret 
    X86_AT(c, 0x6e9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6b6u, "ran off the end of a function");
}
void f_000007e5(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0007e5  push esi
    X86_AT(c, 0x7e5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0007e6  push edi
    X86_AT(c, 0x7e6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0007e7  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x7e7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0007eb  mov esi, dword ptr [esp + 0x10]
    X86_AT(c, 0x7ebu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 0007ef  mov ah, 0x40
    X86_AT(c, 0x7efu);
    s8(c, 4, 0x40u);
    // 0007f1  push fs
    X86_AT(c, 0x7f1u);
    push32(c, c.sreg[4]);
    // 0007f3  push 0x110
    X86_AT(c, 0x7f3u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0007f8  pop fs
    X86_AT(c, 0x7f8u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0007fa  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x7fau);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x801u); }
    X86_RET(c, 0x801u);
    X86_TICK(c, 25);
    // 000801  pop fs
    X86_AT(c, 0x801u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000803  movsx eax, ah
    X86_AT(c, 0x803u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000806  pop edi
    X86_AT(c, 0x806u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000807  pop esi
    X86_AT(c, 0x807u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000808  ret 
    X86_AT(c, 0x808u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x7e5u, "ran off the end of a function");
}
void f_00000809(X86Cpu& c) {
    X86_TICK(c, 28);
    // 000809  push esi
    X86_AT(c, 0x809u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00080a  push edi
    X86_AT(c, 0x80au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00080b  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x80bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 00080f  mov esi, dword ptr [esp + 0x10]
    X86_AT(c, 0x80fu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 000813  mov ah, 0x41
    X86_AT(c, 0x813u);
    s8(c, 4, 0x41u);
    // 000815  push fs
    X86_AT(c, 0x815u);
    push32(c, c.sreg[4]);
    // 000817  push 0x110
    X86_AT(c, 0x817u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 00081c  pop fs
    X86_AT(c, 0x81cu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00081e  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x81eu);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x825u); }
    X86_RET(c, 0x825u);
    X86_TICK(c, 25);
    // 000825  pop fs
    X86_AT(c, 0x825u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000827  movsx eax, ah
    X86_AT(c, 0x827u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 00082a  pop edi
    X86_AT(c, 0x82au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00082b  pop esi
    X86_AT(c, 0x82bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00082c  ret 
    X86_AT(c, 0x82cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x809u, "ran off the end of a function");
}
void f_000008bd(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0008bd  push esi
    X86_AT(c, 0x8bdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0008be  push edi
    X86_AT(c, 0x8beu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0008bf  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x8bfu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0008c3  mov esi, dword ptr [esp + 0x10]
    X86_AT(c, 0x8c3u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 0008c7  mov ah, 0x46
    X86_AT(c, 0x8c7u);
    s8(c, 4, 0x46u);
    // 0008c9  push fs
    X86_AT(c, 0x8c9u);
    push32(c, c.sreg[4]);
    // 0008cb  push 0x110
    X86_AT(c, 0x8cbu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 0008d0  pop fs
    X86_AT(c, 0x8d0u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0008d2  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x8d2u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x8d9u); }
    X86_RET(c, 0x8d9u);
    X86_TICK(c, 25);
    // 0008d9  pop fs
    X86_AT(c, 0x8d9u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0008db  movsx eax, ah
    X86_AT(c, 0x8dbu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 0008de  pop edi
    X86_AT(c, 0x8deu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0008df  pop esi
    X86_AT(c, 0x8dfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0008e0  ret 
    X86_AT(c, 0x8e0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bdu, "ran off the end of a function");
}
void f_00000905(X86Cpu& c) {
    X86_TICK(c, 28);
    // 000905  push esi
    X86_AT(c, 0x905u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 000906  push edi
    X86_AT(c, 0x906u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000907  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x907u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 00090b  mov esi, dword ptr [esp + 0x10]
    X86_AT(c, 0x90bu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 00090f  mov ah, 0x48
    X86_AT(c, 0x90fu);
    s8(c, 4, 0x48u);
    // 000911  push fs
    X86_AT(c, 0x911u);
    push32(c, c.sreg[4]);
    // 000913  push 0x110
    X86_AT(c, 0x913u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000918  pop fs
    X86_AT(c, 0x918u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00091a  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x91au);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x921u); }
    X86_RET(c, 0x921u);
    X86_TICK(c, 25);
    // 000921  pop fs
    X86_AT(c, 0x921u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000923  movsx eax, ah
    X86_AT(c, 0x923u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000926  pop edi
    X86_AT(c, 0x926u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000927  pop esi
    X86_AT(c, 0x927u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000928  ret 
    X86_AT(c, 0x928u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x905u, "ran off the end of a function");
}
void f_00000929(X86Cpu& c) {
    X86_TICK(c, 28);
    // 000929  push esi
    X86_AT(c, 0x929u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00092a  push edi
    X86_AT(c, 0x92au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00092b  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x92bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 00092f  mov esi, dword ptr [esp + 0x10]
    X86_AT(c, 0x92fu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 000933  mov ah, 0x49
    X86_AT(c, 0x933u);
    s8(c, 4, 0x49u);
    // 000935  push fs
    X86_AT(c, 0x935u);
    push32(c, c.sreg[4]);
    // 000937  push 0x110
    X86_AT(c, 0x937u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 00093c  pop fs
    X86_AT(c, 0x93cu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 00093e  lcall fword ptr fs:[0x20]
    X86_AT(c, 0x93eu);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x945u); }
    X86_RET(c, 0x945u);
    X86_TICK(c, 25);
    // 000945  pop fs
    X86_AT(c, 0x945u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000947  movsx eax, ah
    X86_AT(c, 0x947u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 00094a  pop edi
    X86_AT(c, 0x94au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00094b  pop esi
    X86_AT(c, 0x94bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00094c  ret 
    X86_AT(c, 0x94cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x929u, "ran off the end of a function");
}
void f_00000a7d(X86Cpu& c) {
    X86_TICK(c, 28);
    // 000a7d  push esi
    X86_AT(c, 0xa7du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 000a7e  push edi
    X86_AT(c, 0xa7eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000a7f  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0xa7fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 000a83  mov esi, dword ptr [esp + 0x10]
    X86_AT(c, 0xa83u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 000a87  mov ah, 0x60
    X86_AT(c, 0xa87u);
    s8(c, 4, 0x60u);
    // 000a89  push fs
    X86_AT(c, 0xa89u);
    push32(c, c.sreg[4]);
    // 000a8b  push 0x110
    X86_AT(c, 0xa8bu);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000a90  pop fs
    X86_AT(c, 0xa90u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000a92  lcall fword ptr fs:[0x20]
    X86_AT(c, 0xa92u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0xa99u); }
    X86_RET(c, 0xa99u);
    X86_TICK(c, 25);
    // 000a99  pop fs
    X86_AT(c, 0xa99u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000a9b  movsx eax, ah
    X86_AT(c, 0xa9bu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000a9e  pop edi
    X86_AT(c, 0xa9eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000a9f  pop esi
    X86_AT(c, 0xa9fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000aa0  ret 
    X86_AT(c, 0xaa0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa7du, "ran off the end of a function");
}
void f_00000ac5(X86Cpu& c) {
    X86_TICK(c, 32);
    // 000ac5  push esi
    X86_AT(c, 0xac5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 000ac6  push edi
    X86_AT(c, 0xac6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000ac7  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0xac7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 000acb  mov al, byte ptr [esp + 0x10]
    X86_AT(c, 0xacbu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u))));
    // 000acf  mov esi, dword ptr [esp + 0x14]
    X86_AT(c, 0xacfu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u)));
    // 000ad3  mov ah, 0x62
    X86_AT(c, 0xad3u);
    s8(c, 4, 0x62u);
    // 000ad5  push fs
    X86_AT(c, 0xad5u);
    push32(c, c.sreg[4]);
    // 000ad7  push 0x110
    X86_AT(c, 0xad7u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000adc  pop fs
    X86_AT(c, 0xadcu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000ade  lcall fword ptr fs:[0x20]
    X86_AT(c, 0xadeu);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0xae5u); }
    X86_RET(c, 0xae5u);
    X86_TICK(c, 25);
    // 000ae5  pop fs
    X86_AT(c, 0xae5u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000ae7  movsx eax, ah
    X86_AT(c, 0xae7u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000aea  pop edi
    X86_AT(c, 0xaeau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000aeb  pop esi
    X86_AT(c, 0xaebu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000aec  ret 
    X86_AT(c, 0xaecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xac5u, "ran off the end of a function");
}
void f_00000b5d(X86Cpu& c) {
    X86_TICK(c, 38);
    // 000b5d  push esi
    X86_AT(c, 0xb5du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 000b5e  push edi
    X86_AT(c, 0xb5eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000b5f  push ebx
    X86_AT(c, 0xb5fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 000b60  mov edi, dword ptr [esp + 0x10]
    X86_AT(c, 0xb60u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 000b64  mov dx, word ptr [esp + 0x14]
    X86_AT(c, 0xb64u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x14u))));
    // 000b69  mov bx, word ptr [esp + 0x18]
    X86_AT(c, 0xb69u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x18u))));
    // 000b6e  mov esi, dword ptr [esp + 0x1c]
    X86_AT(c, 0xb6eu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x1Cu)));
    // 000b72  mov ah, 0x66
    X86_AT(c, 0xb72u);
    s8(c, 4, 0x66u);
    // 000b74  push fs
    X86_AT(c, 0xb74u);
    push32(c, c.sreg[4]);
    // 000b76  push 0x110
    X86_AT(c, 0xb76u);
    { uint32_t v = 0x110u; push32(c, v); }
    // 000b7b  pop fs
    X86_AT(c, 0xb7bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000b7d  lcall fword ptr fs:[0x20]
    X86_AT(c, 0xb7du);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x20u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0xb84u); }
    X86_RET(c, 0xb84u);
    X86_TICK(c, 29);
    // 000b84  pop fs
    X86_AT(c, 0xb84u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 000b86  movsx eax, ah
    X86_AT(c, 0xb86u);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 4);
    // 000b89  pop ebx
    X86_AT(c, 0xb89u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 000b8a  pop edi
    X86_AT(c, 0xb8au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000b8b  pop esi
    X86_AT(c, 0xb8bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 000b8c  ret 
    X86_AT(c, 0xb8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5du, "ran off the end of a function");
}
void f_000e0240(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0e0240  push ebp
    X86_AT(c, 0xe0240u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0241  mov ebp, esp
    X86_AT(c, 0xe0241u);
    c.r[5] = c.r[4];
    // 0e0243  push ebx
    X86_AT(c, 0xe0243u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0244  push edi
    X86_AT(c, 0xe0244u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0245  mov bl, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe0245u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e0248  mov edi, 0xffffffff
    X86_AT(c, 0xe0248u);
    c.r[7] = 0xFFFFFFFFu;
    // 0e024d  cmp byte ptr [ebp + 8], 0
    X86_AT(c, 0xe024du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 1);
    // 0e0251  jne 0xe025a
    X86_AT(c, 0xe0251u);
    if (x86_cc(c, 5)) { goto L_e025a; }
    X86_TICK(c, 9);
    // 0e0253  sub eax, eax
    X86_AT(c, 0xe0253u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e0255  jmp 0xe03e0
    X86_AT(c, 0xe0255u);
    goto L_e03e0;
L_e025a:
    X86_TICK(c, 12);
    // 0e025a  cmp byte ptr [ebp + 8], 2
    X86_AT(c, 0xe025au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x2u, 0, 1);
    // 0e025e  jne 0xe0265
    X86_AT(c, 0xe025eu);
    if (x86_cc(c, 5)) { goto L_e0265; }
    X86_TICK(c, 2);
    // 0e0260  mov edi, 0x100
    X86_AT(c, 0xe0260u);
    c.r[7] = 0x100u;
L_e0265:
    X86_TICK(c, 12);
    // 0e0265  cmp byte ptr [ebp + 8], 0x10
    X86_AT(c, 0xe0265u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x10u, 0, 1);
    // 0e0269  jne 0xe0270
    X86_AT(c, 0xe0269u);
    if (x86_cc(c, 5)) { goto L_e0270; }
    X86_TICK(c, 2);
    // 0e026b  mov edi, 0x102
    X86_AT(c, 0xe026bu);
    c.r[7] = 0x102u;
L_e0270:
    X86_TICK(c, 12);
    // 0e0270  cmp byte ptr [ebp + 8], 0x22
    X86_AT(c, 0xe0270u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x22u, 0, 1);
    // 0e0274  jne 0xe027b
    X86_AT(c, 0xe0274u);
    if (x86_cc(c, 5)) { goto L_e027b; }
    X86_TICK(c, 2);
    // 0e0276  mov edi, 0x104
    X86_AT(c, 0xe0276u);
    c.r[7] = 0x104u;
L_e027b:
    X86_TICK(c, 12);
    // 0e027b  cmp byte ptr [ebp + 8], 0x23
    X86_AT(c, 0xe027bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x23u, 0, 1);
    // 0e027f  jne 0xe0286
    X86_AT(c, 0xe027fu);
    if (x86_cc(c, 5)) { goto L_e0286; }
    X86_TICK(c, 2);
    // 0e0281  mov edi, 0x108
    X86_AT(c, 0xe0281u);
    c.r[7] = 0x108u;
L_e0286:
    X86_TICK(c, 12);
    // 0e0286  cmp byte ptr [ebp + 8], 0x80
    X86_AT(c, 0xe0286u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x80u, 0, 1);
    // 0e028a  jne 0xe0329
    X86_AT(c, 0xe028au);
    if (x86_cc(c, 5)) { goto L_e0329; }
    X86_TICK(c, 14);
    // 0e0290  movzx ebx, bl
    X86_AT(c, 0xe0290u);
    c.r[3] = g8(c, 3);
    // 0e0293  mov eax, ebx
    X86_AT(c, 0xe0293u);
    c.r[0] = c.r[3];
    // 0e0295  and eax, 0x80
    X86_AT(c, 0xe0295u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x80u, 4); }
    // 0e029a  cmp eax, 0x80
    X86_AT(c, 0xe029au);
    (void)x86_sub(c, c.r[0], 0x80u, 0, 4);
    // 0e029f  jne 0xe02b0
    X86_AT(c, 0xe029fu);
    if (x86_cc(c, 5)) { goto L_e02b0; }
    X86_TICK(c, 4);
    // 0e02a1  mov dword ptr [0xe20], 0xffffffff
    X86_AT(c, 0xe02a1u);
    wr32((c.sbase[3] + (uint32_t)(0xE20u)), 0xFFFFFFFFu);
    // 0e02ab  mov edi, 0x80
    X86_AT(c, 0xe02abu);
    c.r[7] = 0x80u;
L_e02b0:
    X86_TICK(c, 11);
    // 0e02b0  mov eax, ebx
    X86_AT(c, 0xe02b0u);
    c.r[0] = c.r[3];
    // 0e02b2  and al, 0x40
    X86_AT(c, 0xe02b2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x40u, 1)); }
    // 0e02b4  cmp al, 0x40
    X86_AT(c, 0xe02b4u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0e02b6  jne 0xe02bd
    X86_AT(c, 0xe02b6u);
    if (x86_cc(c, 5)) { goto L_e02bd; }
    X86_TICK(c, 2);
    // 0e02b8  mov edi, 0x40
    X86_AT(c, 0xe02b8u);
    c.r[7] = 0x40u;
L_e02bd:
    X86_TICK(c, 11);
    // 0e02bd  mov eax, ebx
    X86_AT(c, 0xe02bdu);
    c.r[0] = c.r[3];
    // 0e02bf  and al, 0x20
    X86_AT(c, 0xe02bfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x20u, 1)); }
    // 0e02c1  cmp al, 0x20
    X86_AT(c, 0xe02c1u);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0e02c3  jne 0xe02ca
    X86_AT(c, 0xe02c3u);
    if (x86_cc(c, 5)) { goto L_e02ca; }
    X86_TICK(c, 2);
    // 0e02c5  mov edi, 0x20
    X86_AT(c, 0xe02c5u);
    c.r[7] = 0x20u;
L_e02ca:
    X86_TICK(c, 11);
    // 0e02ca  mov eax, ebx
    X86_AT(c, 0xe02cau);
    c.r[0] = c.r[3];
    // 0e02cc  and al, 0x10
    X86_AT(c, 0xe02ccu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x10u, 1)); }
    // 0e02ce  cmp al, 0x10
    X86_AT(c, 0xe02ceu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 0e02d0  jne 0xe02e1
    X86_AT(c, 0xe02d0u);
    if (x86_cc(c, 5)) { goto L_e02e1; }
    X86_TICK(c, 4);
    // 0e02d2  mov dword ptr [0xe20], 0xffffffff
    X86_AT(c, 0xe02d2u);
    wr32((c.sbase[3] + (uint32_t)(0xE20u)), 0xFFFFFFFFu);
    // 0e02dc  mov edi, 0x10
    X86_AT(c, 0xe02dcu);
    c.r[7] = 0x10u;
L_e02e1:
    X86_TICK(c, 11);
    // 0e02e1  mov eax, ebx
    X86_AT(c, 0xe02e1u);
    c.r[0] = c.r[3];
    // 0e02e3  and al, 8
    X86_AT(c, 0xe02e3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x8u, 1)); }
    // 0e02e5  cmp al, 8
    X86_AT(c, 0xe02e5u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 0e02e7  jne 0xe02ee
    X86_AT(c, 0xe02e7u);
    if (x86_cc(c, 5)) { goto L_e02ee; }
    X86_TICK(c, 2);
    // 0e02e9  mov edi, 8
    X86_AT(c, 0xe02e9u);
    c.r[7] = 0x8u;
L_e02ee:
    X86_TICK(c, 11);
    // 0e02ee  mov eax, ebx
    X86_AT(c, 0xe02eeu);
    c.r[0] = c.r[3];
    // 0e02f0  and al, 4
    X86_AT(c, 0xe02f0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x4u, 1)); }
    // 0e02f2  cmp al, 4
    X86_AT(c, 0xe02f2u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 0e02f4  jne 0xe0305
    X86_AT(c, 0xe02f4u);
    if (x86_cc(c, 5)) { goto L_e0305; }
    X86_TICK(c, 4);
    // 0e02f6  mov dword ptr [0xe20], 0xffffffff
    X86_AT(c, 0xe02f6u);
    wr32((c.sbase[3] + (uint32_t)(0xE20u)), 0xFFFFFFFFu);
    // 0e0300  mov edi, 4
    X86_AT(c, 0xe0300u);
    c.r[7] = 0x4u;
L_e0305:
    X86_TICK(c, 11);
    // 0e0305  mov eax, ebx
    X86_AT(c, 0xe0305u);
    c.r[0] = c.r[3];
    // 0e0307  and al, 2
    X86_AT(c, 0xe0307u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x2u, 1)); }
    // 0e0309  cmp al, 2
    X86_AT(c, 0xe0309u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0e030b  jne 0xe0312
    X86_AT(c, 0xe030bu);
    if (x86_cc(c, 5)) { goto L_e0312; }
    X86_TICK(c, 2);
    // 0e030d  mov edi, 2
    X86_AT(c, 0xe030du);
    c.r[7] = 0x2u;
L_e0312:
    X86_TICK(c, 11);
    // 0e0312  mov eax, ebx
    X86_AT(c, 0xe0312u);
    c.r[0] = c.r[3];
    // 0e0314  and al, 1
    X86_AT(c, 0xe0314u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 0e0316  dec al
    X86_AT(c, 0xe0316u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0e0318  jne 0xe0329
    X86_AT(c, 0xe0318u);
    if (x86_cc(c, 5)) { goto L_e0329; }
    X86_TICK(c, 4);
    // 0e031a  mov dword ptr [0xe20], 0xffffffff
    X86_AT(c, 0xe031au);
    wr32((c.sbase[3] + (uint32_t)(0xE20u)), 0xFFFFFFFFu);
    // 0e0324  mov edi, 1
    X86_AT(c, 0xe0324u);
    c.r[7] = 0x1u;
L_e0329:
    X86_TICK(c, 9);
    // 0e0329  mov edx, edi
    X86_AT(c, 0xe0329u);
    c.r[2] = c.r[7];
    // 0e032b  cmp edx, 0x20
    X86_AT(c, 0xe032bu);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 0e032e  ja 0xe038b
    X86_AT(c, 0xe032eu);
    if (x86_cc(c, 7)) { goto L_e038b; }
    X86_TICK(c, 7);
    // 0e0330  cmp edx, 0x20
    X86_AT(c, 0xe0330u);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 0e0333  je 0xe03ca
    X86_AT(c, 0xe0333u);
    if (x86_cc(c, 4)) { goto L_e03ca; }
    X86_TICK(c, 9);
    // 0e0339  dec edx
    X86_AT(c, 0xe0339u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e033a  cmp edx, 0xf
    X86_AT(c, 0xe033au);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0e033d  ja 0xe03d1
    X86_AT(c, 0xe033du);
    if (x86_cc(c, 7)) { goto L_e03d1; }
    X86_TICK(c, 7);
    // 0e0343  jmp dword ptr cs:[edx*4 + 0xe034b]
    X86_AT(c, 0xe0343u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE034Bu)));
      switch (t) {
      case 0xe03b5u: goto L_e03b5;
      case 0xe03bcu: goto L_e03bc;
      case 0xe03c3u: goto L_e03c3;
      case 0xe03d1u: goto L_e03d1;
      case 0xe03deu: goto L_e03de;
      default: x86_jump(c, t); return; } }
L_e038b:
    X86_TICK(c, 7);
    // 0e038b  cmp edx, 0x80
    X86_AT(c, 0xe038bu);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0e0391  je 0xe03de
    X86_AT(c, 0xe0391u);
    if (x86_cc(c, 4)) { goto L_e03de; }
    X86_TICK(c, 7);
    // 0e0393  cmp edx, 0x100
    X86_AT(c, 0xe0393u);
    (void)x86_sub(c, c.r[2], 0x100u, 0, 4);
    // 0e0399  je 0xe03de
    X86_AT(c, 0xe0399u);
    if (x86_cc(c, 4)) { goto L_e03de; }
    X86_TICK(c, 7);
    // 0e039b  cmp edx, 0x102
    X86_AT(c, 0xe039bu);
    (void)x86_sub(c, c.r[2], 0x102u, 0, 4);
    // 0e03a1  je 0xe03de
    X86_AT(c, 0xe03a1u);
    if (x86_cc(c, 4)) { goto L_e03de; }
    X86_TICK(c, 7);
    // 0e03a3  cmp edx, 0x104
    X86_AT(c, 0xe03a3u);
    (void)x86_sub(c, c.r[2], 0x104u, 0, 4);
    // 0e03a9  je 0xe03de
    X86_AT(c, 0xe03a9u);
    if (x86_cc(c, 4)) { goto L_e03de; }
    X86_TICK(c, 7);
    // 0e03ab  cmp edx, 0x108
    X86_AT(c, 0xe03abu);
    (void)x86_sub(c, c.r[2], 0x108u, 0, 4);
    // 0e03b1  je 0xe03de
    X86_AT(c, 0xe03b1u);
    if (x86_cc(c, 4)) { goto L_e03de; }
    X86_TICK(c, 7);
    // 0e03b3  jmp 0xe03d1
    X86_AT(c, 0xe03b3u);
    goto L_e03d1;
L_e03b5:
    X86_TICK(c, 9);
    // 0e03b5  push 0xe78
    X86_AT(c, 0xe03b5u);
    { uint32_t v = 0xE78u; push32(c, v); }
    // 0e03ba  jmp 0xe03d6
    X86_AT(c, 0xe03bau);
    goto L_e03d6;
L_e03bc:
    X86_TICK(c, 9);
    // 0e03bc  push 0xeb4
    X86_AT(c, 0xe03bcu);
    { uint32_t v = 0xEB4u; push32(c, v); }
    // 0e03c1  jmp 0xe03d6
    X86_AT(c, 0xe03c1u);
    goto L_e03d6;
L_e03c3:
    X86_TICK(c, 9);
    // 0e03c3  push 0xef0
    X86_AT(c, 0xe03c3u);
    { uint32_t v = 0xEF0u; push32(c, v); }
    // 0e03c8  jmp 0xe03d6
    X86_AT(c, 0xe03c8u);
    goto L_e03d6;
L_e03ca:
    X86_TICK(c, 9);
    // 0e03ca  push 0xf24
    X86_AT(c, 0xe03cau);
    { uint32_t v = 0xF24u; push32(c, v); }
    // 0e03cf  jmp 0xe03d6
    X86_AT(c, 0xe03cfu);
    goto L_e03d6;
L_e03d1:
    X86_TICK(c, 2);
    // 0e03d1  push 0xf68
    X86_AT(c, 0xe03d1u);
    { uint32_t v = 0xF68u; push32(c, v); }
L_e03d6:
    X86_TICK(c, 7);
    // 0e03d6  call 0xe75f8
    X86_AT(c, 0xe03d6u);
    push32(c, 0xe03dbu); f_000e75f8(c); X86_RET(c, 0xe03dbu);
    X86_TICK(c, 2);
    // 0e03db  add esp, 4
    X86_AT(c, 0xe03dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e03de:
    X86_TICK(c, 2);
    // 0e03de  mov eax, edi
    X86_AT(c, 0xe03deu);
    c.r[0] = c.r[7];
L_e03e0:
    X86_TICK(c, 24);
    // 0e03e0  pop edi
    X86_AT(c, 0xe03e0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e03e1  pop ebx
    X86_AT(c, 0xe03e1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e03e2  leave 
    X86_AT(c, 0xe03e2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e03e3  ret 
    X86_AT(c, 0xe03e3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0240u, "ran off the end of a function");
}
void f_000e03e4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e03e4  push 0xfa0
    X86_AT(c, 0xe03e4u);
    { uint32_t v = 0xFA0u; push32(c, v); }
    // 0e03e9  call 0xe75f8
    X86_AT(c, 0xe03e9u);
    push32(c, 0xe03eeu); f_000e75f8(c); X86_RET(c, 0xe03eeu);
    X86_TICK(c, 14);
    // 0e03ee  mov eax, 0xffffffff
    X86_AT(c, 0xe03eeu);
    c.r[0] = 0xFFFFFFFFu;
    // 0e03f3  add esp, 4
    X86_AT(c, 0xe03f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e03f6  ret 
    X86_AT(c, 0xe03f6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe03e4u, "ran off the end of a function");
}
void f_000e03f8(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e03f8  mov dword ptr [0xe34], 0x250f
    X86_AT(c, 0xe03f8u);
    wr32((c.sbase[3] + (uint32_t)(0xE34u)), 0x250Fu);
    // 0e0402  mov dword ptr [0xe38], 0xba4
    X86_AT(c, 0xe0402u);
    wr32((c.sbase[3] + (uint32_t)(0xE38u)), 0xBA4u);
    // 0e040c  mov dword ptr [0xe3c], 0x12f
    X86_AT(c, 0xe040cu);
    wr32((c.sbase[3] + (uint32_t)(0xE3Cu)), 0x12Fu);
    // 0e0416  push 0xe50
    X86_AT(c, 0xe0416u);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0e041b  push 0xe34
    X86_AT(c, 0xe041bu);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0e0420  call 0x102492
    X86_AT(c, 0xe0420u);
    push32(c, 0xe0425u); f_00102492(c); X86_RET(c, 0xe0425u);
    X86_TICK(c, 14);
    // 0e0425  add esp, 8
    X86_AT(c, 0xe0425u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0428  cmp dword ptr [0xe68], 0
    X86_AT(c, 0xe0428u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE68u))), 0x0u, 0, 4);
    // 0e042f  jne 0xe0494
    X86_AT(c, 0xe042fu);
    if (x86_cc(c, 5)) { goto L_e0494; }
    X86_TICK(c, 38);
    // 0e0431  mov eax, dword ptr [0xe58]
    X86_AT(c, 0xe0431u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE58u)));
    // 0e0436  and eax, 0xffff
    X86_AT(c, 0xe0436u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0e043b  mov dword ptr [0xe28], eax
    X86_AT(c, 0xe043bu);
    wr32((c.sbase[3] + (uint32_t)(0xE28u)), c.r[0]);
    // 0e0440  mov eax, dword ptr [0xe58]
    X86_AT(c, 0xe0440u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE58u)));
    // 0e0445  shr eax, 0x10
    X86_AT(c, 0xe0445u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0e0448  and eax, 0xffff
    X86_AT(c, 0xe0448u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0e044d  mov dword ptr [0xe24], eax
    X86_AT(c, 0xe044du);
    wr32((c.sbase[3] + (uint32_t)(0xE24u)), c.r[0]);
    // 0e0452  mov dword ptr [0xe34], 0x250f
    X86_AT(c, 0xe0452u);
    wr32((c.sbase[3] + (uint32_t)(0xE34u)), 0x250Fu);
    // 0e045c  mov word ptr [0xe38], 0x93
    X86_AT(c, 0xe045cu);
    wr16((c.sbase[3] + (uint32_t)(0xE38u)), 0x93u);
    // 0e0465  mov dword ptr [0xe38], 0xcd4
    X86_AT(c, 0xe0465u);
    wr32((c.sbase[3] + (uint32_t)(0xE38u)), 0xCD4u);
    // 0e046f  mov dword ptr [0xe3c], 0xa
    X86_AT(c, 0xe046fu);
    wr32((c.sbase[3] + (uint32_t)(0xE3Cu)), 0xAu);
    // 0e0479  push 0xe50
    X86_AT(c, 0xe0479u);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0e047e  push 0xe34
    X86_AT(c, 0xe047eu);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0e0483  call 0x102492
    X86_AT(c, 0xe0483u);
    push32(c, 0xe0488u); f_00102492(c); X86_RET(c, 0xe0488u);
    X86_TICK(c, 14);
    // 0e0488  add esp, 8
    X86_AT(c, 0xe0488u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e048b  cmp dword ptr [0xe68], 0
    X86_AT(c, 0xe048bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE68u))), 0x0u, 0, 4);
    // 0e0492  je 0xe049b
    X86_AT(c, 0xe0492u);
    if (x86_cc(c, 4)) { goto L_e049b; }
L_e0494:
    X86_TICK(c, 7);
    // 0e0494  call 0xe03e4
    X86_AT(c, 0xe0494u);
    push32(c, 0xe0499u); f_000e03e4(c); X86_RET(c, 0xe0499u);
    X86_TICK(c, 7);
    // 0e0499  jmp 0xe04be
    X86_AT(c, 0xe0499u);
    goto L_e04be;
L_e049b:
    X86_TICK(c, 21);
    // 0e049b  mov eax, dword ptr [0xe58]
    X86_AT(c, 0xe049bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE58u)));
    // 0e04a0  and eax, 0xffff
    X86_AT(c, 0xe04a0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0e04a5  mov dword ptr [0xe30], eax
    X86_AT(c, 0xe04a5u);
    wr32((c.sbase[3] + (uint32_t)(0xE30u)), c.r[0]);
    // 0e04aa  mov eax, dword ptr [0xe58]
    X86_AT(c, 0xe04aau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE58u)));
    // 0e04af  shr eax, 0x10
    X86_AT(c, 0xe04afu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0e04b2  and eax, 0xffff
    X86_AT(c, 0xe04b2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0e04b7  mov dword ptr [0xe2c], eax
    X86_AT(c, 0xe04b7u);
    wr32((c.sbase[3] + (uint32_t)(0xE2Cu)), c.r[0]);
    // 0e04bc  sub eax, eax
    X86_AT(c, 0xe04bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e04be:
    X86_TICK(c, 10);
    // 0e04be  ret 
    X86_AT(c, 0xe04beu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe03f8u, "ran off the end of a function");
}
void f_000e04c0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e04c0  push ebp
    X86_AT(c, 0xe04c0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e04c1  mov ebp, esp
    X86_AT(c, 0xe04c1u);
    c.r[5] = c.r[4];
    // 0e04c3  push eax
    X86_AT(c, 0xe04c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e04c4  push ebx
    X86_AT(c, 0xe04c4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e04c5  push esi
    X86_AT(c, 0xe04c5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e04c6  push edi
    X86_AT(c, 0xe04c6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e04c7  cmp dword ptr [0xe20], 0
    X86_AT(c, 0xe04c7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE20u))), 0x0u, 0, 4);
    // 0e04ce  jne 0xe04d7
    X86_AT(c, 0xe04ceu);
    if (x86_cc(c, 5)) { goto L_e04d7; }
    X86_TICK(c, 9);
    // 0e04d0  sub eax, eax
    X86_AT(c, 0xe04d0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e04d2  jmp 0xe05e2
    X86_AT(c, 0xe04d2u);
    goto L_e05e2;
L_e04d7:
    X86_TICK(c, 35);
    // 0e04d7  mov word ptr [0xb94], 0x93
    X86_AT(c, 0xe04d7u);
    wr16((c.sbase[3] + (uint32_t)(0xB94u)), 0x93u);
    // 0e04e0  mov ax, word ptr [0xe24]
    X86_AT(c, 0xe04e0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE24u))));
    // 0e04e6  mov word ptr [0xb96], ax
    X86_AT(c, 0xe04e6u);
    wr16((c.sbase[3] + (uint32_t)(0xB96u)), (c.r[0] & 0xFFFFu));
    // 0e04ec  mov dword ptr [0xb9e], 0x54c0
    X86_AT(c, 0xe04ecu);
    wr32((c.sbase[3] + (uint32_t)(0xB9Eu)), 0x54C0u);
    // 0e04f6  mov word ptr [0xe34], 0x2511
    X86_AT(c, 0xe04f6u);
    wr16((c.sbase[3] + (uint32_t)(0xE34u)), 0x2511u);
    // 0e04ff  mov byte ptr [0xe3d], 0
    X86_AT(c, 0xe04ffu);
    wr8((c.sbase[3] + (uint32_t)(0xE3Du)), 0x0u);
    // 0e0506  mov byte ptr [0xe3c], 0
    X86_AT(c, 0xe0506u);
    wr8((c.sbase[3] + (uint32_t)(0xE3Cu)), 0x0u);
    // 0e050d  mov dword ptr [0xe40], 0xb94
    X86_AT(c, 0xe050du);
    wr32((c.sbase[3] + (uint32_t)(0xE40u)), 0xB94u);
    // 0e0517  mov ax, word ptr [0xe28]
    X86_AT(c, 0xe0517u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE28u))));
    // 0e051d  mov word ptr [0xe48], ax
    X86_AT(c, 0xe051du);
    wr16((c.sbase[3] + (uint32_t)(0xE48u)), (c.r[0] & 0xFFFFu));
    // 0e0523  push 0xe50
    X86_AT(c, 0xe0523u);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0e0528  push 0xe34
    X86_AT(c, 0xe0528u);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0e052d  call 0x102492
    X86_AT(c, 0xe052du);
    push32(c, 0xe0532u); f_00102492(c); X86_RET(c, 0xe0532u);
    X86_TICK(c, 19);
    // 0e0532  mov bl, byte ptr [0xe51]
    X86_AT(c, 0xe0532u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE51u))));
    // 0e0538  mov al, byte ptr [0xe58]
    X86_AT(c, 0xe0538u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE58u))));
    // 0e053d  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe053du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0e0540  add esp, 8
    X86_AT(c, 0xe0540u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0543  and bl, bl
    X86_AT(c, 0xe0543u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e0545  je 0xe0556
    X86_AT(c, 0xe0545u);
    if (x86_cc(c, 4)) { goto L_e0556; }
    X86_TICK(c, 11);
    // 0e0547  push eax
    X86_AT(c, 0xe0547u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0548  push ebx
    X86_AT(c, 0xe0548u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0549  call 0xe0240
    X86_AT(c, 0xe0549u);
    push32(c, 0xe054eu); f_000e0240(c); X86_RET(c, 0xe054eu);
    X86_TICK(c, 9);
    // 0e054e  add esp, 8
    X86_AT(c, 0xe054eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0551  jmp 0xe05e2
    X86_AT(c, 0xe0551u);
    goto L_e05e2;
L_e0556:
    X86_TICK(c, 54);
    // 0e0556  mov eax, 0xb90
    X86_AT(c, 0xe0556u);
    c.r[0] = 0xB90u;
    // 0e055b  movzx edx, byte ptr [eax + 0x14]
    X86_AT(c, 0xe055bu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)));
    // 0e055f  mov dword ptr [eax + 0x284], edx
    X86_AT(c, 0xe055fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x284u)), c.r[2]);
    // 0e0565  movzx edx, byte ptr [eax + 0x15]
    X86_AT(c, 0xe0565u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x15u)));
    // 0e0569  mov dword ptr [eax + 0x288], edx
    X86_AT(c, 0xe0569u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x288u)), c.r[2]);
    // 0e056f  movzx edx, byte ptr [eax + 0x16]
    X86_AT(c, 0xe056fu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x16u)));
    // 0e0573  mov dword ptr [eax + 0x28c], edx
    X86_AT(c, 0xe0573u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x28Cu)), c.r[2]);
    // 0e0579  dec dword ptr [eax + 0x28c]
    X86_AT(c, 0xe0579u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x28Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0e057f  mov dl, byte ptr [eax + 0x17]
    X86_AT(c, 0xe057fu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x17u))));
    // 0e0582  mov byte ptr [eax + 0x279], dl
    X86_AT(c, 0xe0582u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x279u)), g8(c, 2));
    // 0e0588  mov dl, byte ptr [eax + 0x18]
    X86_AT(c, 0xe0588u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x18u))));
    // 0e058b  mov byte ptr [eax + 0x27a], dl
    X86_AT(c, 0xe058bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x27Au)), g8(c, 2));
    // 0e0591  mov dl, byte ptr [eax + 0x19]
    X86_AT(c, 0xe0591u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x19u))));
    // 0e0594  mov byte ptr [eax + 0x27b], dl
    X86_AT(c, 0xe0594u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x27Bu)), g8(c, 2));
    // 0e059a  sub edi, edi
    X86_AT(c, 0xe059au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e059c  mov esi, 6
    X86_AT(c, 0xe059cu);
    c.r[6] = 0x6u;
L_e05a1:
    X86_TICK(c, 7);
    // 0e05a1  cmp edi, 0x63
    X86_AT(c, 0xe05a1u);
    (void)x86_sub(c, c.r[7], 0x63u, 0, 4);
    // 0e05a4  jge 0xe05db
    X86_AT(c, 0xe05a4u);
    if (x86_cc(c, 13)) { goto L_e05db; }
    X86_TICK(c, 43);
    // 0e05a6  mov eax, 0xb90
    X86_AT(c, 0xe05a6u);
    c.r[0] = 0xB90u;
    // 0e05ab  lea edx, [edi + edi*2]
    X86_AT(c, 0xe05abu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e05ae  mov ecx, esi
    X86_AT(c, 0xe05aeu);
    c.r[1] = c.r[6];
    // 0e05b0  inc esi
    X86_AT(c, 0xe05b0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e05b1  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0xe05b1u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 0e05b5  mov byte ptr [eax + edx*1 + 0x150], cl
    X86_AT(c, 0xe05b5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u)), g8(c, 1));
    // 0e05bc  mov ecx, esi
    X86_AT(c, 0xe05bcu);
    c.r[1] = c.r[6];
    // 0e05be  inc esi
    X86_AT(c, 0xe05beu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e05bf  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0xe05bfu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 0e05c3  mov byte ptr [eax + edx*1 + 0x151], cl
    X86_AT(c, 0xe05c3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x151u)), g8(c, 1));
    // 0e05ca  mov ecx, esi
    X86_AT(c, 0xe05cau);
    c.r[1] = c.r[6];
    // 0e05cc  inc esi
    X86_AT(c, 0xe05ccu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e05cd  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0xe05cdu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 0e05d1  mov byte ptr [eax + edx*1 + 0x152], cl
    X86_AT(c, 0xe05d1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x152u)), g8(c, 1));
    // 0e05d8  inc edi
    X86_AT(c, 0xe05d8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e05d9  jmp 0xe05a1
    X86_AT(c, 0xe05d9u);
    X86_POLL(c, 0xe05a1u); goto L_e05a1;
L_e05db:
    X86_TICK(c, 4);
    // 0e05db  sub eax, eax
    X86_AT(c, 0xe05dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e05dd  mov dword ptr [0xe20], eax
    X86_AT(c, 0xe05ddu);
    wr32((c.sbase[3] + (uint32_t)(0xE20u)), c.r[0]);
L_e05e2:
    X86_TICK(c, 28);
    // 0e05e2  pop edi
    X86_AT(c, 0xe05e2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e05e3  pop esi
    X86_AT(c, 0xe05e3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e05e4  pop ebx
    X86_AT(c, 0xe05e4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e05e5  leave 
    X86_AT(c, 0xe05e5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e05e6  ret 
    X86_AT(c, 0xe05e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe04c0u, "ran off the end of a function");
}
void f_000e05e2(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e05e2  pop edi
    X86_AT(c, 0xe05e2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e05e3  pop esi
    X86_AT(c, 0xe05e3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e05e4  pop ebx
    X86_AT(c, 0xe05e4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e05e5  leave 
    X86_AT(c, 0xe05e5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e05e6  ret 
    X86_AT(c, 0xe05e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe05e2u, "ran off the end of a function");
}
void f_000e05e8(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0e05e8  push ebp
    X86_AT(c, 0xe05e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e05e9  mov ebp, esp
    X86_AT(c, 0xe05e9u);
    c.r[5] = c.r[4];
    // 0e05eb  push eax
    X86_AT(c, 0xe05ebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e05ec  push edi
    X86_AT(c, 0xe05ecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e05ed  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe05edu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e05f0  mov al, byte ptr [edi]
    X86_AT(c, 0xe05f0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e05f2  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe05f2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0e05f5  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0xe05f5u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e05f8  mov byte ptr [ebp - 2], dl
    X86_AT(c, 0xe05f8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 2));
    // 0e05fb  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0xe05fbu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0e05fe  dec ecx
    X86_AT(c, 0xe05feu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0e05ff  and cl, cl
    X86_AT(c, 0xe05ffu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0e0601  jge 0xe0611
    X86_AT(c, 0xe0601u);
    if (x86_cc(c, 13)) { goto L_e0611; }
    X86_TICK(c, 20);
    // 0e0603  mov cl, 0x4a
    X86_AT(c, 0xe0603u);
    s8(c, 1, 0x4Au);
    // 0e0605  dec byte ptr [ebp - 2]
    X86_AT(c, 0xe0605u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0e0608  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xe0608u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0e060c  jge 0xe0611
    X86_AT(c, 0xe060cu);
    if (x86_cc(c, 13)) { goto L_e0611; }
    X86_TICK(c, 6);
    // 0e060e  dec byte ptr [ebp - 1]
    X86_AT(c, 0xe060eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
L_e0611:
    X86_TICK(c, 34);
    // 0e0611  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xe0611u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0e0614  mov byte ptr [edi], al
    X86_AT(c, 0xe0614u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 0e0616  mov al, byte ptr [ebp - 2]
    X86_AT(c, 0xe0616u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 0e0619  mov byte ptr [edi + 1], al
    X86_AT(c, 0xe0619u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 0e061c  mov byte ptr [edi + 2], cl
    X86_AT(c, 0xe061cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 0e061f  pop edi
    X86_AT(c, 0xe061fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e0620  leave 
    X86_AT(c, 0xe0620u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e0621  ret 
    X86_AT(c, 0xe0621u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe05e8u, "ran off the end of a function");
}
void f_000e0624(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e0624  push ebp
    X86_AT(c, 0xe0624u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0625  mov ebp, esp
    X86_AT(c, 0xe0625u);
    c.r[5] = c.r[4];
    // 0e0627  sub esp, 8
    X86_AT(c, 0xe0627u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e062a  push ebx
    X86_AT(c, 0xe062au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e062b  push esi
    X86_AT(c, 0xe062bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e062c  push edi
    X86_AT(c, 0xe062cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e062d  call 0xe0c70
    X86_AT(c, 0xe062du);
    push32(c, 0xe0632u); f_000e0c70(c); X86_RET(c, 0xe0632u);
    X86_TICK(c, 12);
    // 0e0632  cmp dword ptr [0xe20], 0
    X86_AT(c, 0xe0632u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE20u))), 0x0u, 0, 4);
    // 0e0639  jne 0xe0670
    X86_AT(c, 0xe0639u);
    if (x86_cc(c, 5)) { goto L_e0670; }
    X86_TICK(c, 19);
    // 0e063b  mov edi, 0xffffffff
    X86_AT(c, 0xe063bu);
    c.r[7] = 0xFFFFFFFFu;
    // 0e0640  mov esi, edi
    X86_AT(c, 0xe0640u);
    c.r[6] = c.r[7];
    // 0e0642  mov eax, dword ptr [0xe1c]
    X86_AT(c, 0xe0642u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE1Cu)));
    // 0e0647  cmp eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe0647u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0e064a  jge 0xe064f
    X86_AT(c, 0xe064au);
    if (x86_cc(c, 13)) { goto L_e064f; }
    X86_TICK(c, 2);
    // 0e064c  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0xe064cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
L_e064f:
    X86_TICK(c, 9);
    // 0e064f  inc esi
    X86_AT(c, 0xe064fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e0650  cmp esi, 0x63
    X86_AT(c, 0xe0650u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 0e0653  jge 0xe0667
    X86_AT(c, 0xe0653u);
    if (x86_cc(c, 13)) { goto L_e0667; }
    X86_TICK(c, 13);
    // 0e0655  movzx eax, byte ptr [esi + esi*2 + 0xce0]
    X86_AT(c, 0xe0655u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[6] * 2 + 0xCE0u)));
    // 0e065d  test al, 0x80
    X86_AT(c, 0xe065du);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 0e065f  jne 0xe0662
    X86_AT(c, 0xe065fu);
    if (x86_cc(c, 5)) { goto L_e0662; }
    X86_TICK(c, 2);
    // 0e0661  inc edi
    X86_AT(c, 0xe0661u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_e0662:
    X86_TICK(c, 11);
    // 0e0662  cmp edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe0662u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0e0665  jne 0xe064f
    X86_AT(c, 0xe0665u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe064fu); goto L_e064f; }
L_e0667:
    X86_TICK(c, 7);
    // 0e0667  cmp esi, 0x63
    X86_AT(c, 0xe0667u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 0e066a  jl 0xe067a
    X86_AT(c, 0xe066au);
    if (x86_cc(c, 12)) { goto L_e067a; }
    X86_TICK(c, 7);
    // 0e066c  and edi, edi
    X86_AT(c, 0xe066cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e066e  jge 0xe067a
    X86_AT(c, 0xe066eu);
    if (x86_cc(c, 13)) { goto L_e067a; }
L_e0670:
    X86_TICK(c, 9);
    // 0e0670  mov eax, 0xffffffff
    X86_AT(c, 0xe0670u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e0675  jmp 0xe07c2
    X86_AT(c, 0xe0675u);
    goto L_e07c2;
L_e067a:
    X86_TICK(c, 11);
    // 0e067a  cmp edi, dword ptr [0xe1c]
    X86_AT(c, 0xe067au);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xE1Cu))), 0, 4);
    // 0e0680  jne 0xe0699
    X86_AT(c, 0xe0680u);
    if (x86_cc(c, 5)) { goto L_e0699; }
    X86_TICK(c, 23);
    // 0e0682  mov al, byte ptr [0xe09]
    X86_AT(c, 0xe0682u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE09u))));
    // 0e0687  mov byte ptr [ebp - 3], al
    X86_AT(c, 0xe0687u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 0));
    // 0e068a  mov al, byte ptr [0xe0a]
    X86_AT(c, 0xe068au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE0Au))));
    // 0e068f  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xe068fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0e0692  mov al, byte ptr [0xe0b]
    X86_AT(c, 0xe0692u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE0Bu))));
    // 0e0697  jmp 0xe06bc
    X86_AT(c, 0xe0697u);
    goto L_e06bc;
L_e0699:
    X86_TICK(c, 20);
    // 0e0699  mov eax, 0xb90
    X86_AT(c, 0xe0699u);
    c.r[0] = 0xB90u;
    // 0e069e  lea edx, [edi + edi*2]
    X86_AT(c, 0xe069eu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e06a1  mov cl, byte ptr [eax + edx*1 + 0x153]
    X86_AT(c, 0xe06a1u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x153u))));
    // 0e06a8  mov byte ptr [ebp - 3], cl
    X86_AT(c, 0xe06a8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 1));
    // 0e06ab  mov cl, byte ptr [eax + edx*1 + 0x154]
    X86_AT(c, 0xe06abu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x154u))));
    // 0e06b2  mov byte ptr [ebp - 2], cl
    X86_AT(c, 0xe06b2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 1));
    // 0e06b5  mov al, byte ptr [eax + edx*1 + 0x155]
    X86_AT(c, 0xe06b5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x155u))));
L_e06bc:
    X86_TICK(c, 13);
    // 0e06bc  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe06bcu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0e06bf  lea eax, [ebp - 3]
    X86_AT(c, 0xe06bfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFDu);
    // 0e06c2  push eax
    X86_AT(c, 0xe06c2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e06c3  call 0xe05e8
    X86_AT(c, 0xe06c3u);
    push32(c, 0xe06c8u); f_000e05e8(c); X86_RET(c, 0xe06c8u);
    X86_TICK(c, 17);
    // 0e06c8  movsx eax, word ptr [0xb90]
    X86_AT(c, 0xe06c8u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xB90u)));
    // 0e06cf  push eax
    X86_AT(c, 0xe06cfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e06d0  push eax
    X86_AT(c, 0xe06d0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e06d1  call 0xe1980
    X86_AT(c, 0xe06d1u);
    push32(c, 0xe06d6u); f_000e1980(c); X86_RET(c, 0xe06d6u);
    X86_TICK(c, 2);
    // 0e06d6  add esp, 0xc
    X86_AT(c, 0xe06d6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e06d9:
    X86_TICK(c, 71);
    // 0e06d9  mov al, byte ptr [edi + edi*2 + 0xce0]
    X86_AT(c, 0xe06d9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[7] * 2 + 0xCE0u))));
    // 0e06e0  mov byte ptr [0xcd4], al
    X86_AT(c, 0xe06e0u);
    wr8((c.sbase[3] + (uint32_t)(0xCD4u)), g8(c, 0));
    // 0e06e5  mov al, byte ptr [edi + edi*2 + 0xce1]
    X86_AT(c, 0xe06e5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[7] * 2 + 0xCE1u))));
    // 0e06ec  mov byte ptr [0xcd5], al
    X86_AT(c, 0xe06ecu);
    wr8((c.sbase[3] + (uint32_t)(0xCD5u)), g8(c, 0));
    // 0e06f1  mov al, byte ptr [edi + edi*2 + 0xce2]
    X86_AT(c, 0xe06f1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[7] * 2 + 0xCE2u))));
    // 0e06f8  mov byte ptr [0xcd6], al
    X86_AT(c, 0xe06f8u);
    wr8((c.sbase[3] + (uint32_t)(0xCD6u)), g8(c, 0));
    // 0e06fd  mov al, byte ptr [ebp - 3]
    X86_AT(c, 0xe06fdu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu))));
    // 0e0700  mov byte ptr [0xcd7], al
    X86_AT(c, 0xe0700u);
    wr8((c.sbase[3] + (uint32_t)(0xCD7u)), g8(c, 0));
    // 0e0705  mov al, byte ptr [ebp - 2]
    X86_AT(c, 0xe0705u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 0e0708  mov byte ptr [0xcd8], al
    X86_AT(c, 0xe0708u);
    wr8((c.sbase[3] + (uint32_t)(0xCD8u)), g8(c, 0));
    // 0e070d  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xe070du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0e0710  mov byte ptr [0xcd9], al
    X86_AT(c, 0xe0710u);
    wr8((c.sbase[3] + (uint32_t)(0xCD9u)), g8(c, 0));
    // 0e0715  mov word ptr [0xb94], 0x93
    X86_AT(c, 0xe0715u);
    wr16((c.sbase[3] + (uint32_t)(0xB94u)), 0x93u);
    // 0e071e  mov ax, word ptr [0xe2c]
    X86_AT(c, 0xe071eu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE2Cu))));
    // 0e0724  mov word ptr [0xb96], ax
    X86_AT(c, 0xe0724u);
    wr16((c.sbase[3] + (uint32_t)(0xB96u)), (c.r[0] & 0xFFFFu));
    // 0e072a  mov dword ptr [0xb9e], 0x50c0
    X86_AT(c, 0xe072au);
    wr32((c.sbase[3] + (uint32_t)(0xB9Eu)), 0x50C0u);
    // 0e0734  mov word ptr [0xe34], 0x2511
    X86_AT(c, 0xe0734u);
    wr16((c.sbase[3] + (uint32_t)(0xE34u)), 0x2511u);
    // 0e073d  mov byte ptr [0xe3d], 0
    X86_AT(c, 0xe073du);
    wr8((c.sbase[3] + (uint32_t)(0xE3Du)), 0x0u);
    // 0e0744  mov byte ptr [0xe3c], 1
    X86_AT(c, 0xe0744u);
    wr8((c.sbase[3] + (uint32_t)(0xE3Cu)), 0x1u);
    // 0e074b  mov ax, word ptr [0xe30]
    X86_AT(c, 0xe074bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE30u))));
    // 0e0751  mov word ptr [0xe48], ax
    X86_AT(c, 0xe0751u);
    wr16((c.sbase[3] + (uint32_t)(0xE48u)), (c.r[0] & 0xFFFFu));
    // 0e0757  mov dword ptr [0xe40], 0xb94
    X86_AT(c, 0xe0757u);
    wr32((c.sbase[3] + (uint32_t)(0xE40u)), 0xB94u);
    // 0e0761  push 0xe50
    X86_AT(c, 0xe0761u);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0e0766  push 0xe34
    X86_AT(c, 0xe0766u);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0e076b  call 0x102492
    X86_AT(c, 0xe076bu);
    push32(c, 0xe0770u); f_00102492(c); X86_RET(c, 0xe0770u);
    X86_TICK(c, 19);
    // 0e0770  mov bl, byte ptr [0xe51]
    X86_AT(c, 0xe0770u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE51u))));
    // 0e0776  mov al, byte ptr [0xe58]
    X86_AT(c, 0xe0776u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE58u))));
    // 0e077b  mov byte ptr [ebp - 4], al
    X86_AT(c, 0xe077bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), g8(c, 0));
    // 0e077e  add esp, 8
    X86_AT(c, 0xe077eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0781  and bl, bl
    X86_AT(c, 0xe0781u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e0783  je 0xe07ae
    X86_AT(c, 0xe0783u);
    if (x86_cc(c, 4)) { goto L_e07ae; }
    X86_TICK(c, 11);
    // 0e0785  push eax
    X86_AT(c, 0xe0785u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0786  push ebx
    X86_AT(c, 0xe0786u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0787  call 0xe0240
    X86_AT(c, 0xe0787u);
    push32(c, 0xe078cu); f_000e0240(c); X86_RET(c, 0xe078cu);
    X86_TICK(c, 16);
    // 0e078c  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe078cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e078f  add esp, 8
    X86_AT(c, 0xe078fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0792  cmp dword ptr [ebp - 8], 0x102
    X86_AT(c, 0xe0792u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x102u, 0, 4);
    // 0e0799  jne 0xe07ae
    X86_AT(c, 0xe0799u);
    if (x86_cc(c, 5)) { goto L_e07ae; }
    X86_TICK(c, 7);
    // 0e079b  call 0xe0a78
    X86_AT(c, 0xe079bu);
    push32(c, 0xe07a0u); f_000e0a78(c); X86_RET(c, 0xe07a0u);
L_e07a0:
    X86_TICK(c, 7);
    // 0e07a0  call 0xe0cc8
    X86_AT(c, 0xe07a0u);
    push32(c, 0xe07a5u); f_000e0cc8(c); X86_RET(c, 0xe07a5u);
    X86_TICK(c, 7);
    // 0e07a5  and eax, eax
    X86_AT(c, 0xe07a5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e07a7  jne 0xe07a0
    X86_AT(c, 0xe07a7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe07a0u); goto L_e07a0; }
    X86_TICK(c, 7);
    // 0e07a9  jmp 0xe06d9
    X86_AT(c, 0xe07a9u);
    X86_POLL(c, 0xe06d9u); goto L_e06d9;
L_e07ae:
    X86_TICK(c, 7);
    // 0e07ae  and bl, bl
    X86_AT(c, 0xe07aeu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e07b0  je 0xe07c0
    X86_AT(c, 0xe07b0u);
    if (x86_cc(c, 4)) { goto L_e07c0; }
    X86_TICK(c, 14);
    // 0e07b2  push dword ptr [ebp - 4]
    X86_AT(c, 0xe07b2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0e07b5  push ebx
    X86_AT(c, 0xe07b5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e07b6  call 0xe0240
    X86_AT(c, 0xe07b6u);
    push32(c, 0xe07bbu); f_000e0240(c); X86_RET(c, 0xe07bbu);
    X86_TICK(c, 9);
    // 0e07bb  add esp, 8
    X86_AT(c, 0xe07bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e07be  jmp 0xe07c2
    X86_AT(c, 0xe07beu);
    goto L_e07c2;
L_e07c0:
    X86_TICK(c, 2);
    // 0e07c0  sub eax, eax
    X86_AT(c, 0xe07c0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e07c2:
    X86_TICK(c, 28);
    // 0e07c2  pop edi
    X86_AT(c, 0xe07c2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e07c3  pop esi
    X86_AT(c, 0xe07c3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e07c4  pop ebx
    X86_AT(c, 0xe07c4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e07c5  leave 
    X86_AT(c, 0xe07c5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e07c6  ret 
    X86_AT(c, 0xe07c6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0624u, "ran off the end of a function");
}
void f_000e07c8(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e07c8  push ebp
    X86_AT(c, 0xe07c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e07c9  mov ebp, esp
    X86_AT(c, 0xe07c9u);
    c.r[5] = c.r[4];
    // 0e07cb  sub esp, 8
    X86_AT(c, 0xe07cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e07ce  push ebx
    X86_AT(c, 0xe07ceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e07cf  push esi
    X86_AT(c, 0xe07cfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e07d0  push edi
    X86_AT(c, 0xe07d0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e07d1  call 0xe0c70
    X86_AT(c, 0xe07d1u);
    push32(c, 0xe07d6u); f_000e0c70(c); X86_RET(c, 0xe07d6u);
    X86_TICK(c, 12);
    // 0e07d6  cmp dword ptr [0xe20], 0
    X86_AT(c, 0xe07d6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE20u))), 0x0u, 0, 4);
    // 0e07dd  jne 0xe0821
    X86_AT(c, 0xe07ddu);
    if (x86_cc(c, 5)) { goto L_e0821; }
    X86_TICK(c, 18);
    // 0e07df  dec dword ptr [ebp + 0xc]
    X86_AT(c, 0xe07dfu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0e07e2  cmp dword ptr [ebp + 0xc], 0xffffffff
    X86_AT(c, 0xe07e2u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0xFFFFFFFFu, 0, 4);
    // 0e07e6  je 0xe098f
    X86_AT(c, 0xe07e6u);
    if (x86_cc(c, 4)) { goto L_e098f; }
    X86_TICK(c, 15);
    // 0e07ec  mov eax, dword ptr [0xe1c]
    X86_AT(c, 0xe07ecu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE1Cu)));
    // 0e07f1  cmp eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe07f1u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0e07f4  jge 0xe07f9
    X86_AT(c, 0xe07f4u);
    if (x86_cc(c, 13)) { goto L_e07f9; }
    X86_TICK(c, 2);
    // 0e07f6  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0xe07f6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
L_e07f9:
    X86_TICK(c, 4);
    // 0e07f9  mov edi, 0xffffffff
    X86_AT(c, 0xe07f9u);
    c.r[7] = 0xFFFFFFFFu;
    // 0e07fe  mov esi, edi
    X86_AT(c, 0xe07feu);
    c.r[6] = c.r[7];
L_e0800:
    X86_TICK(c, 9);
    // 0e0800  inc esi
    X86_AT(c, 0xe0800u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e0801  cmp esi, 0x63
    X86_AT(c, 0xe0801u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 0e0804  jge 0xe0818
    X86_AT(c, 0xe0804u);
    if (x86_cc(c, 13)) { goto L_e0818; }
    X86_TICK(c, 13);
    // 0e0806  movzx eax, byte ptr [esi + esi*2 + 0xce0]
    X86_AT(c, 0xe0806u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[6] * 2 + 0xCE0u)));
    // 0e080e  test al, 0x80
    X86_AT(c, 0xe080eu);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 0e0810  jne 0xe0813
    X86_AT(c, 0xe0810u);
    if (x86_cc(c, 5)) { goto L_e0813; }
    X86_TICK(c, 2);
    // 0e0812  inc edi
    X86_AT(c, 0xe0812u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_e0813:
    X86_TICK(c, 11);
    // 0e0813  cmp edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe0813u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0e0816  jne 0xe0800
    X86_AT(c, 0xe0816u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe0800u); goto L_e0800; }
L_e0818:
    X86_TICK(c, 7);
    // 0e0818  cmp esi, 0x63
    X86_AT(c, 0xe0818u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 0e081b  jl 0xe082b
    X86_AT(c, 0xe081bu);
    if (x86_cc(c, 12)) { goto L_e082b; }
    X86_TICK(c, 7);
    // 0e081d  and edi, edi
    X86_AT(c, 0xe081du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e081f  jge 0xe082b
    X86_AT(c, 0xe081fu);
    if (x86_cc(c, 13)) { goto L_e082b; }
L_e0821:
    X86_TICK(c, 9);
    // 0e0821  mov eax, 0xffffffff
    X86_AT(c, 0xe0821u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e0826  jmp 0xe0991
    X86_AT(c, 0xe0826u);
    goto L_e0991;
L_e082b:
    X86_TICK(c, 11);
    // 0e082b  cmp edi, dword ptr [0xe1c]
    X86_AT(c, 0xe082bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xE1Cu))), 0, 4);
    // 0e0831  jne 0xe084a
    X86_AT(c, 0xe0831u);
    if (x86_cc(c, 5)) { goto L_e084a; }
    X86_TICK(c, 23);
    // 0e0833  mov al, byte ptr [0xe09]
    X86_AT(c, 0xe0833u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE09u))));
    // 0e0838  mov byte ptr [ebp - 3], al
    X86_AT(c, 0xe0838u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 0));
    // 0e083b  mov al, byte ptr [0xe0a]
    X86_AT(c, 0xe083bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE0Au))));
    // 0e0840  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xe0840u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0e0843  mov al, byte ptr [0xe0b]
    X86_AT(c, 0xe0843u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE0Bu))));
    // 0e0848  jmp 0xe086d
    X86_AT(c, 0xe0848u);
    goto L_e086d;
L_e084a:
    X86_TICK(c, 20);
    // 0e084a  mov eax, 0xb90
    X86_AT(c, 0xe084au);
    c.r[0] = 0xB90u;
    // 0e084f  lea edx, [edi + edi*2]
    X86_AT(c, 0xe084fu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e0852  mov cl, byte ptr [eax + edx*1 + 0x153]
    X86_AT(c, 0xe0852u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x153u))));
    // 0e0859  mov byte ptr [ebp - 3], cl
    X86_AT(c, 0xe0859u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 1));
    // 0e085c  mov cl, byte ptr [eax + edx*1 + 0x154]
    X86_AT(c, 0xe085cu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x154u))));
    // 0e0863  mov byte ptr [ebp - 2], cl
    X86_AT(c, 0xe0863u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 1));
    // 0e0866  mov al, byte ptr [eax + edx*1 + 0x155]
    X86_AT(c, 0xe0866u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x155u))));
L_e086d:
    X86_TICK(c, 13);
    // 0e086d  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe086du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0e0870  lea eax, [ebp - 3]
    X86_AT(c, 0xe0870u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFDu);
    // 0e0873  push eax
    X86_AT(c, 0xe0873u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0874  call 0xe05e8
    X86_AT(c, 0xe0874u);
    push32(c, 0xe0879u); f_000e05e8(c); X86_RET(c, 0xe0879u);
    X86_TICK(c, 17);
    // 0e0879  movsx eax, word ptr [0xb90]
    X86_AT(c, 0xe0879u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xB90u)));
    // 0e0880  push eax
    X86_AT(c, 0xe0880u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0881  push eax
    X86_AT(c, 0xe0881u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0882  call 0xe1980
    X86_AT(c, 0xe0882u);
    push32(c, 0xe0887u); f_000e1980(c); X86_RET(c, 0xe0887u);
    X86_TICK(c, 2);
    // 0e0887  add esp, 0xc
    X86_AT(c, 0xe0887u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e088a:
    X86_TICK(c, 64);
    // 0e088a  mov eax, 0xb90
    X86_AT(c, 0xe088au);
    c.r[0] = 0xB90u;
    // 0e088f  lea edx, [edi + edi*2]
    X86_AT(c, 0xe088fu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e0892  mov cl, byte ptr [eax + edx*1 + 0x150]
    X86_AT(c, 0xe0892u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u))));
    // 0e0899  mov byte ptr [eax + 0x144], cl
    X86_AT(c, 0xe0899u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x144u)), g8(c, 1));
    // 0e089f  mov cl, byte ptr [eax + edx*1 + 0x151]
    X86_AT(c, 0xe089fu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x151u))));
    // 0e08a6  mov byte ptr [eax + 0x145], cl
    X86_AT(c, 0xe08a6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x145u)), g8(c, 1));
    // 0e08ac  mov dl, byte ptr [eax + edx*1 + 0x152]
    X86_AT(c, 0xe08acu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x152u))));
    // 0e08b3  mov byte ptr [eax + 0x146], dl
    X86_AT(c, 0xe08b3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x146u)), g8(c, 2));
    // 0e08b9  mov dl, byte ptr [ebp - 3]
    X86_AT(c, 0xe08b9u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu))));
    // 0e08bc  mov byte ptr [eax + 0x147], dl
    X86_AT(c, 0xe08bcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x147u)), g8(c, 2));
    // 0e08c2  mov dl, byte ptr [ebp - 2]
    X86_AT(c, 0xe08c2u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 0e08c5  mov byte ptr [eax + 0x148], dl
    X86_AT(c, 0xe08c5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x148u)), g8(c, 2));
    // 0e08cb  mov dl, byte ptr [ebp - 1]
    X86_AT(c, 0xe08cbu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0e08ce  mov byte ptr [eax + 0x149], dl
    X86_AT(c, 0xe08ceu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x149u)), g8(c, 2));
    // 0e08d4  mov word ptr [eax + 4], 0x93
    X86_AT(c, 0xe08d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), 0x93u);
    // 0e08da  mov dx, word ptr [eax + 0x29c]
    X86_AT(c, 0xe08dau);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x29Cu))));
    // 0e08e1  mov word ptr [eax + 6], dx
    X86_AT(c, 0xe08e1u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 0e08e5  mov dword ptr [eax + 0xe], 0x50c0
    X86_AT(c, 0xe08e5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xEu)), 0x50C0u);
    // 0e08ec  mov word ptr [eax + 0x2a4], 0x2511
    X86_AT(c, 0xe08ecu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2A4u)), 0x2511u);
    // 0e08f5  cmp dword ptr [ebp + 0xc], 0
    X86_AT(c, 0xe08f5u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 4);
    // 0e08f9  jge 0xe0904
    X86_AT(c, 0xe08f9u);
    if (x86_cc(c, 13)) { goto L_e0904; }
    X86_TICK(c, 9);
    // 0e08fb  mov byte ptr [eax + 0x2ad], 0xff
    X86_AT(c, 0xe08fbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x2ADu)), 0xFFu);
    // 0e0902  jmp 0xe0913
    X86_AT(c, 0xe0902u);
    goto L_e0913;
L_e0904:
    X86_TICK(c, 8);
    // 0e0904  mov byte ptr [0xe3d], 0xfe
    X86_AT(c, 0xe0904u);
    wr8((c.sbase[3] + (uint32_t)(0xE3Du)), 0xFEu);
    // 0e090b  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe090bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e090e  mov byte ptr [0xe39], al
    X86_AT(c, 0xe090eu);
    wr8((c.sbase[3] + (uint32_t)(0xE39u)), g8(c, 0));
L_e0913:
    X86_TICK(c, 21);
    // 0e0913  mov byte ptr [0xe3c], 1
    X86_AT(c, 0xe0913u);
    wr8((c.sbase[3] + (uint32_t)(0xE3Cu)), 0x1u);
    // 0e091a  mov ax, word ptr [0xe30]
    X86_AT(c, 0xe091au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE30u))));
    // 0e0920  mov word ptr [0xe48], ax
    X86_AT(c, 0xe0920u);
    wr16((c.sbase[3] + (uint32_t)(0xE48u)), (c.r[0] & 0xFFFFu));
    // 0e0926  mov dword ptr [0xe40], 0xb94
    X86_AT(c, 0xe0926u);
    wr32((c.sbase[3] + (uint32_t)(0xE40u)), 0xB94u);
    // 0e0930  push 0xe50
    X86_AT(c, 0xe0930u);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0e0935  push 0xe34
    X86_AT(c, 0xe0935u);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0e093a  call 0x102492
    X86_AT(c, 0xe093au);
    push32(c, 0xe093fu); f_00102492(c); X86_RET(c, 0xe093fu);
    X86_TICK(c, 19);
    // 0e093f  mov bl, byte ptr [0xe51]
    X86_AT(c, 0xe093fu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE51u))));
    // 0e0945  mov al, byte ptr [0xe58]
    X86_AT(c, 0xe0945u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE58u))));
    // 0e094a  mov byte ptr [ebp - 4], al
    X86_AT(c, 0xe094au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), g8(c, 0));
    // 0e094d  add esp, 8
    X86_AT(c, 0xe094du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0950  and bl, bl
    X86_AT(c, 0xe0950u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e0952  je 0xe097d
    X86_AT(c, 0xe0952u);
    if (x86_cc(c, 4)) { goto L_e097d; }
    X86_TICK(c, 11);
    // 0e0954  push eax
    X86_AT(c, 0xe0954u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0955  push ebx
    X86_AT(c, 0xe0955u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0956  call 0xe0240
    X86_AT(c, 0xe0956u);
    push32(c, 0xe095bu); f_000e0240(c); X86_RET(c, 0xe095bu);
    X86_TICK(c, 16);
    // 0e095b  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe095bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e095e  add esp, 8
    X86_AT(c, 0xe095eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0961  cmp dword ptr [ebp - 8], 0x102
    X86_AT(c, 0xe0961u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x102u, 0, 4);
    // 0e0968  jne 0xe097d
    X86_AT(c, 0xe0968u);
    if (x86_cc(c, 5)) { goto L_e097d; }
    X86_TICK(c, 7);
    // 0e096a  call 0xe0a78
    X86_AT(c, 0xe096au);
    push32(c, 0xe096fu); f_000e0a78(c); X86_RET(c, 0xe096fu);
L_e096f:
    X86_TICK(c, 7);
    // 0e096f  call 0xe0cc8
    X86_AT(c, 0xe096fu);
    push32(c, 0xe0974u); f_000e0cc8(c); X86_RET(c, 0xe0974u);
    X86_TICK(c, 7);
    // 0e0974  and eax, eax
    X86_AT(c, 0xe0974u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e0976  jne 0xe096f
    X86_AT(c, 0xe0976u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe096fu); goto L_e096f; }
    X86_TICK(c, 7);
    // 0e0978  jmp 0xe088a
    X86_AT(c, 0xe0978u);
    X86_POLL(c, 0xe088au); goto L_e088a;
L_e097d:
    X86_TICK(c, 7);
    // 0e097d  and bl, bl
    X86_AT(c, 0xe097du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e097f  je 0xe098f
    X86_AT(c, 0xe097fu);
    if (x86_cc(c, 4)) { goto L_e098f; }
    X86_TICK(c, 14);
    // 0e0981  push dword ptr [ebp - 4]
    X86_AT(c, 0xe0981u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0e0984  push ebx
    X86_AT(c, 0xe0984u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0985  call 0xe0240
    X86_AT(c, 0xe0985u);
    push32(c, 0xe098au); f_000e0240(c); X86_RET(c, 0xe098au);
    X86_TICK(c, 9);
    // 0e098a  add esp, 8
    X86_AT(c, 0xe098au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e098d  jmp 0xe0991
    X86_AT(c, 0xe098du);
    goto L_e0991;
L_e098f:
    X86_TICK(c, 2);
    // 0e098f  sub eax, eax
    X86_AT(c, 0xe098fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e0991:
    X86_TICK(c, 28);
    // 0e0991  pop edi
    X86_AT(c, 0xe0991u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e0992  pop esi
    X86_AT(c, 0xe0992u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e0993  pop ebx
    X86_AT(c, 0xe0993u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e0994  leave 
    X86_AT(c, 0xe0994u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e0995  ret 
    X86_AT(c, 0xe0995u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe07c8u, "ran off the end of a function");
}
void f_000e0998(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0e0998  push ebp
    X86_AT(c, 0xe0998u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0999  mov ebp, esp
    X86_AT(c, 0xe0999u);
    c.r[5] = c.r[4];
    // 0e099b  push eax
    X86_AT(c, 0xe099bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e099c  push ebx
    X86_AT(c, 0xe099cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e099d  mov word ptr [0xb94], 0x93
    X86_AT(c, 0xe099du);
    wr16((c.sbase[3] + (uint32_t)(0xB94u)), 0x93u);
    // 0e09a6  mov dword ptr [0xb9e], 0x55c0
    X86_AT(c, 0xe09a6u);
    wr32((c.sbase[3] + (uint32_t)(0xB9Eu)), 0x55C0u);
    // 0e09b0  mov dword ptr [0xe34], 0x2511
    X86_AT(c, 0xe09b0u);
    wr32((c.sbase[3] + (uint32_t)(0xE34u)), 0x2511u);
    // 0e09ba  mov word ptr [0xe3c], 0
    X86_AT(c, 0xe09bau);
    wr16((c.sbase[3] + (uint32_t)(0xE3Cu)), 0x0u);
    // 0e09c3  mov dword ptr [0xe40], 0xb94
    X86_AT(c, 0xe09c3u);
    wr32((c.sbase[3] + (uint32_t)(0xE40u)), 0xB94u);
    // 0e09cd  push 0xe50
    X86_AT(c, 0xe09cdu);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0e09d2  push 0xe34
    X86_AT(c, 0xe09d2u);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0e09d7  call 0x102492
    X86_AT(c, 0xe09d7u);
    push32(c, 0xe09dcu); f_00102492(c); X86_RET(c, 0xe09dcu);
    X86_TICK(c, 19);
    // 0e09dc  mov bl, byte ptr [0xe51]
    X86_AT(c, 0xe09dcu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE51u))));
    // 0e09e2  mov al, byte ptr [0xe58]
    X86_AT(c, 0xe09e2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE58u))));
    // 0e09e7  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe09e7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0e09ea  add esp, 8
    X86_AT(c, 0xe09eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e09ed  and bl, bl
    X86_AT(c, 0xe09edu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e09ef  je 0xe0a02
    X86_AT(c, 0xe09efu);
    if (x86_cc(c, 4)) { goto L_e0a02; }
    X86_TICK(c, 11);
    // 0e09f1  push eax
    X86_AT(c, 0xe09f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e09f2  push ebx
    X86_AT(c, 0xe09f2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e09f3  call 0xe0240
    X86_AT(c, 0xe09f3u);
    push32(c, 0xe09f8u); f_000e0240(c); X86_RET(c, 0xe09f8u);
    X86_TICK(c, 11);
    // 0e09f8  mov eax, 0xffffffff
    X86_AT(c, 0xe09f8u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e09fd  add esp, 8
    X86_AT(c, 0xe09fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0a00  jmp 0xe0a04
    X86_AT(c, 0xe0a00u);
    goto L_e0a04;
L_e0a02:
    X86_TICK(c, 2);
    // 0e0a02  sub eax, eax
    X86_AT(c, 0xe0a02u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e0a04:
    X86_TICK(c, 20);
    // 0e0a04  pop ebx
    X86_AT(c, 0xe0a04u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e0a05  leave 
    X86_AT(c, 0xe0a05u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e0a06  ret 
    X86_AT(c, 0xe0a06u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0998u, "ran off the end of a function");
}
void f_000e0a08(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0e0a08  push ebp
    X86_AT(c, 0xe0a08u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0a09  mov ebp, esp
    X86_AT(c, 0xe0a09u);
    c.r[5] = c.r[4];
    // 0e0a0b  push eax
    X86_AT(c, 0xe0a0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0a0c  push ebx
    X86_AT(c, 0xe0a0cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0a0d  mov word ptr [0xb94], 0x93
    X86_AT(c, 0xe0a0du);
    wr16((c.sbase[3] + (uint32_t)(0xB94u)), 0x93u);
    // 0e0a16  mov dword ptr [0xb9e], 0x56c0
    X86_AT(c, 0xe0a16u);
    wr32((c.sbase[3] + (uint32_t)(0xB9Eu)), 0x56C0u);
    // 0e0a20  mov dword ptr [0xe34], 0x2511
    X86_AT(c, 0xe0a20u);
    wr32((c.sbase[3] + (uint32_t)(0xE34u)), 0x2511u);
    // 0e0a2a  mov word ptr [0xe3c], 0
    X86_AT(c, 0xe0a2au);
    wr16((c.sbase[3] + (uint32_t)(0xE3Cu)), 0x0u);
    // 0e0a33  mov dword ptr [0xe40], 0xb94
    X86_AT(c, 0xe0a33u);
    wr32((c.sbase[3] + (uint32_t)(0xE40u)), 0xB94u);
    // 0e0a3d  push 0xe50
    X86_AT(c, 0xe0a3du);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0e0a42  push 0xe34
    X86_AT(c, 0xe0a42u);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0e0a47  call 0x102492
    X86_AT(c, 0xe0a47u);
    push32(c, 0xe0a4cu); f_00102492(c); X86_RET(c, 0xe0a4cu);
    X86_TICK(c, 19);
    // 0e0a4c  mov bl, byte ptr [0xe51]
    X86_AT(c, 0xe0a4cu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE51u))));
    // 0e0a52  mov al, byte ptr [0xe58]
    X86_AT(c, 0xe0a52u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE58u))));
    // 0e0a57  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe0a57u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0e0a5a  add esp, 8
    X86_AT(c, 0xe0a5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0a5d  and bl, bl
    X86_AT(c, 0xe0a5du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e0a5f  je 0xe0a72
    X86_AT(c, 0xe0a5fu);
    if (x86_cc(c, 4)) { goto L_e0a72; }
    X86_TICK(c, 11);
    // 0e0a61  push eax
    X86_AT(c, 0xe0a61u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0a62  push ebx
    X86_AT(c, 0xe0a62u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0a63  call 0xe0240
    X86_AT(c, 0xe0a63u);
    push32(c, 0xe0a68u); f_000e0240(c); X86_RET(c, 0xe0a68u);
    X86_TICK(c, 11);
    // 0e0a68  mov eax, 0xffffffff
    X86_AT(c, 0xe0a68u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e0a6d  add esp, 8
    X86_AT(c, 0xe0a6du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0a70  jmp 0xe0a74
    X86_AT(c, 0xe0a70u);
    goto L_e0a74;
L_e0a72:
    X86_TICK(c, 2);
    // 0e0a72  sub eax, eax
    X86_AT(c, 0xe0a72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e0a74:
    X86_TICK(c, 20);
    // 0e0a74  pop ebx
    X86_AT(c, 0xe0a74u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e0a75  leave 
    X86_AT(c, 0xe0a75u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e0a76  ret 
    X86_AT(c, 0xe0a76u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0a08u, "ran off the end of a function");
}
void f_000e0a78(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0e0a78  push ebp
    X86_AT(c, 0xe0a78u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0a79  mov ebp, esp
    X86_AT(c, 0xe0a79u);
    c.r[5] = c.r[4];
    // 0e0a7b  push eax
    X86_AT(c, 0xe0a7bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0a7c  push ebx
    X86_AT(c, 0xe0a7cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0a7d  mov word ptr [0xb94], 0x93
    X86_AT(c, 0xe0a7du);
    wr16((c.sbase[3] + (uint32_t)(0xB94u)), 0x93u);
    // 0e0a86  mov dword ptr [0xb9e], 0x52c0
    X86_AT(c, 0xe0a86u);
    wr32((c.sbase[3] + (uint32_t)(0xB9Eu)), 0x52C0u);
    // 0e0a90  mov dword ptr [0xe34], 0x2511
    X86_AT(c, 0xe0a90u);
    wr32((c.sbase[3] + (uint32_t)(0xE34u)), 0x2511u);
    // 0e0a9a  mov word ptr [0xe3c], 0
    X86_AT(c, 0xe0a9au);
    wr16((c.sbase[3] + (uint32_t)(0xE3Cu)), 0x0u);
    // 0e0aa3  mov dword ptr [0xe40], 0xb94
    X86_AT(c, 0xe0aa3u);
    wr32((c.sbase[3] + (uint32_t)(0xE40u)), 0xB94u);
    // 0e0aad  push 0xe50
    X86_AT(c, 0xe0aadu);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0e0ab2  push 0xe34
    X86_AT(c, 0xe0ab2u);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0e0ab7  call 0x102492
    X86_AT(c, 0xe0ab7u);
    push32(c, 0xe0abcu); f_00102492(c); X86_RET(c, 0xe0abcu);
    X86_TICK(c, 19);
    // 0e0abc  mov bl, byte ptr [0xe51]
    X86_AT(c, 0xe0abcu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE51u))));
    // 0e0ac2  mov al, byte ptr [0xe58]
    X86_AT(c, 0xe0ac2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE58u))));
    // 0e0ac7  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe0ac7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0e0aca  add esp, 8
    X86_AT(c, 0xe0acau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0acd  and bl, bl
    X86_AT(c, 0xe0acdu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e0acf  je 0xe0ae2
    X86_AT(c, 0xe0acfu);
    if (x86_cc(c, 4)) { goto L_e0ae2; }
    X86_TICK(c, 11);
    // 0e0ad1  push eax
    X86_AT(c, 0xe0ad1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0ad2  push ebx
    X86_AT(c, 0xe0ad2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0ad3  call 0xe0240
    X86_AT(c, 0xe0ad3u);
    push32(c, 0xe0ad8u); f_000e0240(c); X86_RET(c, 0xe0ad8u);
    X86_TICK(c, 11);
    // 0e0ad8  mov eax, 0xffffffff
    X86_AT(c, 0xe0ad8u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e0add  add esp, 8
    X86_AT(c, 0xe0addu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0ae0  jmp 0xe0ae4
    X86_AT(c, 0xe0ae0u);
    goto L_e0ae4;
L_e0ae2:
    X86_TICK(c, 2);
    // 0e0ae2  sub eax, eax
    X86_AT(c, 0xe0ae2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e0ae4:
    X86_TICK(c, 20);
    // 0e0ae4  pop ebx
    X86_AT(c, 0xe0ae4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e0ae5  leave 
    X86_AT(c, 0xe0ae5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e0ae6  ret 
    X86_AT(c, 0xe0ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0a78u, "ran off the end of a function");
}
void f_000e0ae8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e0ae8  push ebp
    X86_AT(c, 0xe0ae8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0ae9  mov ebp, esp
    X86_AT(c, 0xe0ae9u);
    c.r[5] = c.r[4];
    // 0e0aeb  push eax
    X86_AT(c, 0xe0aebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0aec  push ebx
    X86_AT(c, 0xe0aecu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0aed  push esi
    X86_AT(c, 0xe0aedu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0aee  push edi
    X86_AT(c, 0xe0aeeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0aef  push 7
    X86_AT(c, 0xe0aefu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0af1  call 0xe693c
    X86_AT(c, 0xe0af1u);
    push32(c, 0xe0af6u); f_000e693c(c); X86_RET(c, 0xe0af6u);
    X86_TICK(c, 7);
    // 0e0af6  call 0xe0c70
    X86_AT(c, 0xe0af6u);
    push32(c, 0xe0afbu); f_000e0c70(c); X86_RET(c, 0xe0afbu);
    X86_TICK(c, 11);
    // 0e0afb  push 0xff4
    X86_AT(c, 0xe0afbu);
    { uint32_t v = 0xFF4u; push32(c, v); }
    // 0e0b00  push 7
    X86_AT(c, 0xe0b00u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b02  call 0xe6cb0
    X86_AT(c, 0xe0b02u);
    push32(c, 0xe0b07u); f_000e6cb0(c); X86_RET(c, 0xe0b07u);
    X86_TICK(c, 9);
    // 0e0b07  push 7
    X86_AT(c, 0xe0b07u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b09  call 0xe6c68
    X86_AT(c, 0xe0b09u);
    push32(c, 0xe0b0eu); f_000e6c68(c); X86_RET(c, 0xe0b0eu);
    X86_TICK(c, 11);
    // 0e0b0e  push 0x1008
    X86_AT(c, 0xe0b0eu);
    { uint32_t v = 0x1008u; push32(c, v); }
    // 0e0b13  push 7
    X86_AT(c, 0xe0b13u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b15  call 0xe6cb0
    X86_AT(c, 0xe0b15u);
    push32(c, 0xe0b1au); f_000e6cb0(c); X86_RET(c, 0xe0b1au);
    X86_TICK(c, 9);
    // 0e0b1a  push 7
    X86_AT(c, 0xe0b1au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b1c  call 0xe6c68
    X86_AT(c, 0xe0b1cu);
    push32(c, 0xe0b21u); f_000e6c68(c); X86_RET(c, 0xe0b21u);
    X86_TICK(c, 11);
    // 0e0b21  push 0x101e
    X86_AT(c, 0xe0b21u);
    { uint32_t v = 0x101Eu; push32(c, v); }
    // 0e0b26  push 7
    X86_AT(c, 0xe0b26u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b28  call 0xe6cb0
    X86_AT(c, 0xe0b28u);
    push32(c, 0xe0b2du); f_000e6cb0(c); X86_RET(c, 0xe0b2du);
    X86_TICK(c, 19);
    // 0e0b2d  push 2
    X86_AT(c, 0xe0b2du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0b2f  movzx eax, byte ptr [0xe09]
    X86_AT(c, 0xe0b2fu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE09u)));
    // 0e0b36  push eax
    X86_AT(c, 0xe0b36u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0b37  push 7
    X86_AT(c, 0xe0b37u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b39  call 0xe5630
    X86_AT(c, 0xe0b39u);
    push32(c, 0xe0b3eu); f_000e5630(c); X86_RET(c, 0xe0b3eu);
    X86_TICK(c, 11);
    // 0e0b3e  push 0x1022
    X86_AT(c, 0xe0b3eu);
    { uint32_t v = 0x1022u; push32(c, v); }
    // 0e0b43  push 7
    X86_AT(c, 0xe0b43u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b45  call 0xe6cb0
    X86_AT(c, 0xe0b45u);
    push32(c, 0xe0b4au); f_000e6cb0(c); X86_RET(c, 0xe0b4au);
    X86_TICK(c, 19);
    // 0e0b4a  push 2
    X86_AT(c, 0xe0b4au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0b4c  movzx eax, byte ptr [0xe0a]
    X86_AT(c, 0xe0b4cu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE0Au)));
    // 0e0b53  push eax
    X86_AT(c, 0xe0b53u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0b54  push 7
    X86_AT(c, 0xe0b54u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b56  call 0xe5630
    X86_AT(c, 0xe0b56u);
    push32(c, 0xe0b5bu); f_000e5630(c); X86_RET(c, 0xe0b5bu);
    X86_TICK(c, 13);
    // 0e0b5b  add esp, 0x44
    X86_AT(c, 0xe0b5bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0e0b5e  push 0x1024
    X86_AT(c, 0xe0b5eu);
    { uint32_t v = 0x1024u; push32(c, v); }
    // 0e0b63  push 7
    X86_AT(c, 0xe0b63u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b65  call 0xe6cb0
    X86_AT(c, 0xe0b65u);
    push32(c, 0xe0b6au); f_000e6cb0(c); X86_RET(c, 0xe0b6au);
    X86_TICK(c, 19);
    // 0e0b6a  push 2
    X86_AT(c, 0xe0b6au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0b6c  movzx eax, byte ptr [0xe0b]
    X86_AT(c, 0xe0b6cu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE0Bu)));
    // 0e0b73  push eax
    X86_AT(c, 0xe0b73u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0b74  push 7
    X86_AT(c, 0xe0b74u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b76  call 0xe5630
    X86_AT(c, 0xe0b76u);
    push32(c, 0xe0b7bu); f_000e5630(c); X86_RET(c, 0xe0b7bu);
    X86_TICK(c, 9);
    // 0e0b7b  push 7
    X86_AT(c, 0xe0b7bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b7d  call 0xe6c68
    X86_AT(c, 0xe0b7du);
    push32(c, 0xe0b82u); f_000e6c68(c); X86_RET(c, 0xe0b82u);
    X86_TICK(c, 11);
    // 0e0b82  push 0x1028
    X86_AT(c, 0xe0b82u);
    { uint32_t v = 0x1028u; push32(c, v); }
    // 0e0b87  push 7
    X86_AT(c, 0xe0b87u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b89  call 0xe6cb0
    X86_AT(c, 0xe0b89u);
    push32(c, 0xe0b8eu); f_000e6cb0(c); X86_RET(c, 0xe0b8eu);
    X86_TICK(c, 9);
    // 0e0b8e  push 7
    X86_AT(c, 0xe0b8eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0b90  call 0xe6c68
    X86_AT(c, 0xe0b90u);
    push32(c, 0xe0b95u); f_000e6c68(c); X86_RET(c, 0xe0b95u);
    X86_TICK(c, 8);
    // 0e0b95  mov esi, 4
    X86_AT(c, 0xe0b95u);
    c.r[6] = 0x4u;
    // 0e0b9a  mov edi, dword ptr [0xe18]
    X86_AT(c, 0xe0b9au);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xE18u)));
    // 0e0ba0  add esp, 0x24
    X86_AT(c, 0xe0ba0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_e0ba3:
    X86_TICK(c, 11);
    // 0e0ba3  cmp edi, dword ptr [0xe1c]
    X86_AT(c, 0xe0ba3u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xE1Cu))), 0, 4);
    // 0e0ba9  jg 0xe0c6b
    X86_AT(c, 0xe0ba9u);
    if (x86_cc(c, 15)) { goto L_e0c6b; }
    X86_TICK(c, 13);
    // 0e0baf  push 2
    X86_AT(c, 0xe0bafu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0bb1  push edi
    X86_AT(c, 0xe0bb1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0bb2  push 7
    X86_AT(c, 0xe0bb2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0bb4  call 0xe5630
    X86_AT(c, 0xe0bb4u);
    push32(c, 0xe0bb9u); f_000e5630(c); X86_RET(c, 0xe0bb9u);
    X86_TICK(c, 11);
    // 0e0bb9  push 0x1040
    X86_AT(c, 0xe0bb9u);
    { uint32_t v = 0x1040u; push32(c, v); }
    // 0e0bbe  push 7
    X86_AT(c, 0xe0bbeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0bc0  call 0xe6cb0
    X86_AT(c, 0xe0bc0u);
    push32(c, 0xe0bc5u); f_000e6cb0(c); X86_RET(c, 0xe0bc5u);
    X86_TICK(c, 13);
    // 0e0bc5  movzx eax, byte ptr [edi + edi*2 + 0xce0]
    X86_AT(c, 0xe0bc5u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[7] * 2 + 0xCE0u)));
    // 0e0bcd  test al, 0x80
    X86_AT(c, 0xe0bcdu);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 0e0bcf  je 0xe0bd8
    X86_AT(c, 0xe0bcfu);
    if (x86_cc(c, 4)) { goto L_e0bd8; }
    X86_TICK(c, 9);
    // 0e0bd1  mov eax, 0x1044
    X86_AT(c, 0xe0bd1u);
    c.r[0] = 0x1044u;
    // 0e0bd6  jmp 0xe0bdd
    X86_AT(c, 0xe0bd6u);
    goto L_e0bdd;
L_e0bd8:
    X86_TICK(c, 2);
    // 0e0bd8  mov eax, 0x104c
    X86_AT(c, 0xe0bd8u);
    c.r[0] = 0x104Cu;
L_e0bdd:
    X86_TICK(c, 11);
    // 0e0bdd  push eax
    X86_AT(c, 0xe0bddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0bde  push 7
    X86_AT(c, 0xe0bdeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0be0  call 0xe6cb0
    X86_AT(c, 0xe0be0u);
    push32(c, 0xe0be5u); f_000e6cb0(c); X86_RET(c, 0xe0be5u);
    X86_TICK(c, 27);
    // 0e0be5  push 2
    X86_AT(c, 0xe0be5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0be7  mov eax, 0xb90
    X86_AT(c, 0xe0be7u);
    c.r[0] = 0xB90u;
    // 0e0bec  lea edx, [edi + edi*2]
    X86_AT(c, 0xe0becu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e0bef  movzx ecx, byte ptr [eax + edx*1 + 0x150]
    X86_AT(c, 0xe0befu);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u)));
    // 0e0bf7  push ecx
    X86_AT(c, 0xe0bf7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e0bf8  push 7
    X86_AT(c, 0xe0bf8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0bfa  mov ebx, eax
    X86_AT(c, 0xe0bfau);
    c.r[3] = c.r[0];
    // 0e0bfc  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xe0bfcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0e0bff  call 0xe5630
    X86_AT(c, 0xe0bffu);
    push32(c, 0xe0c04u); f_000e5630(c); X86_RET(c, 0xe0c04u);
    X86_TICK(c, 11);
    // 0e0c04  push 0x1052
    X86_AT(c, 0xe0c04u);
    { uint32_t v = 0x1052u; push32(c, v); }
    // 0e0c09  push 7
    X86_AT(c, 0xe0c09u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0c0b  call 0xe6cb0
    X86_AT(c, 0xe0c0bu);
    push32(c, 0xe0c10u); f_000e6cb0(c); X86_RET(c, 0xe0c10u);
    X86_TICK(c, 23);
    // 0e0c10  push 2
    X86_AT(c, 0xe0c10u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0c12  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe0c12u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e0c15  movzx edx, byte ptr [ebx + eax*1 + 0x151]
    X86_AT(c, 0xe0c15u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x151u)));
    // 0e0c1d  push edx
    X86_AT(c, 0xe0c1du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e0c1e  push 7
    X86_AT(c, 0xe0c1eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0c20  call 0xe5630
    X86_AT(c, 0xe0c20u);
    push32(c, 0xe0c25u); f_000e5630(c); X86_RET(c, 0xe0c25u);
    X86_TICK(c, 13);
    // 0e0c25  add esp, 0x3c
    X86_AT(c, 0xe0c25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e0c28  push 0x1054
    X86_AT(c, 0xe0c28u);
    { uint32_t v = 0x1054u; push32(c, v); }
    // 0e0c2d  push 7
    X86_AT(c, 0xe0c2du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0c2f  call 0xe6cb0
    X86_AT(c, 0xe0c2fu);
    push32(c, 0xe0c34u); f_000e6cb0(c); X86_RET(c, 0xe0c34u);
    X86_TICK(c, 23);
    // 0e0c34  push 2
    X86_AT(c, 0xe0c34u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e0c36  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe0c36u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e0c39  movzx eax, byte ptr [ebx + eax*1 + 0x152]
    X86_AT(c, 0xe0c39u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x152u)));
    // 0e0c41  push eax
    X86_AT(c, 0xe0c41u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0c42  push 7
    X86_AT(c, 0xe0c42u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0c44  call 0xe5630
    X86_AT(c, 0xe0c44u);
    push32(c, 0xe0c49u); f_000e5630(c); X86_RET(c, 0xe0c49u);
    X86_TICK(c, 9);
    // 0e0c49  push 7
    X86_AT(c, 0xe0c49u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0c4b  call 0xe6c68
    X86_AT(c, 0xe0c4bu);
    push32(c, 0xe0c50u); f_000e6c68(c); X86_RET(c, 0xe0c50u);
    X86_TICK(c, 11);
    // 0e0c50  inc esi
    X86_AT(c, 0xe0c50u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e0c51  add esp, 0x18
    X86_AT(c, 0xe0c51u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e0c54  cmp esi, 5
    X86_AT(c, 0xe0c54u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0e0c57  jle 0xe0c65
    X86_AT(c, 0xe0c57u);
    if (x86_cc(c, 14)) { goto L_e0c65; }
    X86_TICK(c, 11);
    // 0e0c59  sub esi, esi
    X86_AT(c, 0xe0c59u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e0c5b  push 7
    X86_AT(c, 0xe0c5bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e0c5d  call 0xefeb0
    X86_AT(c, 0xe0c5du);
    push32(c, 0xe0c62u); f_000efeb0(c); X86_RET(c, 0xe0c62u);
    X86_TICK(c, 2);
    // 0e0c62  add esp, 4
    X86_AT(c, 0xe0c62u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e0c65:
    X86_TICK(c, 9);
    // 0e0c65  inc edi
    X86_AT(c, 0xe0c65u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e0c66  jmp 0xe0ba3
    X86_AT(c, 0xe0c66u);
    X86_POLL(c, 0xe0ba3u); goto L_e0ba3;
L_e0c6b:
    X86_TICK(c, 28);
    // 0e0c6b  pop edi
    X86_AT(c, 0xe0c6bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e0c6c  pop esi
    X86_AT(c, 0xe0c6cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e0c6d  pop ebx
    X86_AT(c, 0xe0c6du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e0c6e  leave 
    X86_AT(c, 0xe0c6eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e0c6f  ret 
    X86_AT(c, 0xe0c6fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0ae8u, "ran off the end of a function");
}
void f_000e0c70(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e0c70  push edi
    X86_AT(c, 0xe0c70u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0c71  call 0xe0cc8
    X86_AT(c, 0xe0c71u);
    push32(c, 0xe0c76u); f_000e0cc8(c); X86_RET(c, 0xe0c76u);
    X86_TICK(c, 10);
    // 0e0c76  xchg edi, eax
    X86_AT(c, 0xe0c76u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e0c77  and edi, edi
    X86_AT(c, 0xe0c77u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e0c79  je 0xe0c80
    X86_AT(c, 0xe0c79u);
    if (x86_cc(c, 4)) { goto L_e0c80; }
    X86_TICK(c, 7);
    // 0e0c7b  cmp edi, 0xffffffff
    X86_AT(c, 0xe0c7bu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0e0c7e  jne 0xe0c89
    X86_AT(c, 0xe0c7eu);
    if (x86_cc(c, 5)) { goto L_e0c89; }
L_e0c80:
    X86_TICK(c, 12);
    // 0e0c80  cmp dword ptr [0xe20], 0
    X86_AT(c, 0xe0c80u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE20u))), 0x0u, 0, 4);
    // 0e0c87  je 0xe0cc3
    X86_AT(c, 0xe0c87u);
    if (x86_cc(c, 4)) { goto L_e0cc3; }
L_e0c89:
    X86_TICK(c, 7);
    // 0e0c89  call 0xe0a78
    X86_AT(c, 0xe0c89u);
    push32(c, 0xe0c8eu); f_000e0a78(c); X86_RET(c, 0xe0c8eu);
L_e0c8e:
    X86_TICK(c, 7);
    // 0e0c8e  call 0xe04c0
    X86_AT(c, 0xe0c8eu);
    push32(c, 0xe0c93u); f_000e04c0(c); X86_RET(c, 0xe0c93u);
    X86_TICK(c, 10);
    // 0e0c93  xchg edi, eax
    X86_AT(c, 0xe0c93u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e0c94  cmp edi, 0x80
    X86_AT(c, 0xe0c94u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0e0c9a  je 0xe0cb9
    X86_AT(c, 0xe0c9au);
    if (x86_cc(c, 4)) { goto L_e0cb9; }
    X86_TICK(c, 7);
    // 0e0c9c  cmp edi, 0x10
    X86_AT(c, 0xe0c9cu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0e0c9f  je 0xe0cb9
    X86_AT(c, 0xe0c9fu);
    if (x86_cc(c, 4)) { goto L_e0cb9; }
    X86_TICK(c, 7);
    // 0e0ca1  cmp edi, 4
    X86_AT(c, 0xe0ca1u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0e0ca4  je 0xe0cb9
    X86_AT(c, 0xe0ca4u);
    if (x86_cc(c, 4)) { goto L_e0cb9; }
    X86_TICK(c, 7);
    // 0e0ca6  cmp edi, 0x102
    X86_AT(c, 0xe0ca6u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 0e0cac  je 0xe0cb9
    X86_AT(c, 0xe0cacu);
    if (x86_cc(c, 4)) { goto L_e0cb9; }
    X86_TICK(c, 7);
    // 0e0cae  and edi, edi
    X86_AT(c, 0xe0caeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e0cb0  je 0xe0cc3
    X86_AT(c, 0xe0cb0u);
    if (x86_cc(c, 4)) { goto L_e0cc3; }
    X86_TICK(c, 9);
    // 0e0cb2  mov eax, 1
    X86_AT(c, 0xe0cb2u);
    c.r[0] = 0x1u;
    // 0e0cb7  jmp 0xe0cc5
    X86_AT(c, 0xe0cb7u);
    goto L_e0cc5;
L_e0cb9:
    X86_TICK(c, 7);
    // 0e0cb9  cmp edi, 0x102
    X86_AT(c, 0xe0cb9u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 0e0cbf  jne 0xe0c8e
    X86_AT(c, 0xe0cbfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe0c8eu); goto L_e0c8e; }
    X86_TICK(c, 7);
    // 0e0cc1  jmp 0xe0c89
    X86_AT(c, 0xe0cc1u);
    X86_POLL(c, 0xe0c89u); goto L_e0c89;
L_e0cc3:
    X86_TICK(c, 2);
    // 0e0cc3  sub eax, eax
    X86_AT(c, 0xe0cc3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e0cc5:
    X86_TICK(c, 14);
    // 0e0cc5  pop edi
    X86_AT(c, 0xe0cc5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e0cc6  ret 
    X86_AT(c, 0xe0cc6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0c70u, "ran off the end of a function");
}
void f_000e0cc8(X86Cpu& c) {
    X86_TICK(c, 43);
    // 0e0cc8  push ebp
    X86_AT(c, 0xe0cc8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0cc9  mov ebp, esp
    X86_AT(c, 0xe0cc9u);
    c.r[5] = c.r[4];
    // 0e0ccb  push eax
    X86_AT(c, 0xe0ccbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0ccc  push ebx
    X86_AT(c, 0xe0cccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0ccd  mov word ptr [0xb94], 0x93
    X86_AT(c, 0xe0ccdu);
    wr16((c.sbase[3] + (uint32_t)(0xB94u)), 0x93u);
    // 0e0cd6  mov ax, word ptr [0xe2c]
    X86_AT(c, 0xe0cd6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE2Cu))));
    // 0e0cdc  mov word ptr [0xb96], ax
    X86_AT(c, 0xe0cdcu);
    wr16((c.sbase[3] + (uint32_t)(0xB96u)), (c.r[0] & 0xFFFFu));
    // 0e0ce2  mov dword ptr [0xb9e], 0x53c0
    X86_AT(c, 0xe0ce2u);
    wr32((c.sbase[3] + (uint32_t)(0xB9Eu)), 0x53C0u);
    // 0e0cec  mov word ptr [0xe34], 0x2511
    X86_AT(c, 0xe0cecu);
    wr16((c.sbase[3] + (uint32_t)(0xE34u)), 0x2511u);
    // 0e0cf5  mov byte ptr [0xe3d], 0
    X86_AT(c, 0xe0cf5u);
    wr8((c.sbase[3] + (uint32_t)(0xE3Du)), 0x0u);
    // 0e0cfc  mov byte ptr [0xe3c], 0
    X86_AT(c, 0xe0cfcu);
    wr8((c.sbase[3] + (uint32_t)(0xE3Cu)), 0x0u);
    // 0e0d03  mov dword ptr [0xe40], 0xb94
    X86_AT(c, 0xe0d03u);
    wr32((c.sbase[3] + (uint32_t)(0xE40u)), 0xB94u);
    // 0e0d0d  mov ax, word ptr [0xe30]
    X86_AT(c, 0xe0d0du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE30u))));
    // 0e0d13  mov word ptr [0xe48], ax
    X86_AT(c, 0xe0d13u);
    wr16((c.sbase[3] + (uint32_t)(0xE48u)), (c.r[0] & 0xFFFFu));
    // 0e0d19  push 0xe50
    X86_AT(c, 0xe0d19u);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0e0d1e  push 0xe34
    X86_AT(c, 0xe0d1eu);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0e0d23  call 0x102492
    X86_AT(c, 0xe0d23u);
    push32(c, 0xe0d28u); f_00102492(c); X86_RET(c, 0xe0d28u);
    X86_TICK(c, 19);
    // 0e0d28  mov bl, byte ptr [0xe51]
    X86_AT(c, 0xe0d28u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE51u))));
    // 0e0d2e  mov al, byte ptr [0xe58]
    X86_AT(c, 0xe0d2eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE58u))));
    // 0e0d33  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe0d33u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0e0d36  add esp, 8
    X86_AT(c, 0xe0d36u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0d39  and bl, bl
    X86_AT(c, 0xe0d39u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e0d3b  je 0xe0d49
    X86_AT(c, 0xe0d3bu);
    if (x86_cc(c, 4)) { goto L_e0d49; }
    X86_TICK(c, 11);
    // 0e0d3d  push eax
    X86_AT(c, 0xe0d3du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0d3e  push ebx
    X86_AT(c, 0xe0d3eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0d3f  call 0xe0240
    X86_AT(c, 0xe0d3fu);
    push32(c, 0xe0d44u); f_000e0240(c); X86_RET(c, 0xe0d44u);
    X86_TICK(c, 9);
    // 0e0d44  add esp, 8
    X86_AT(c, 0xe0d44u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0d47  jmp 0xe0d5b
    X86_AT(c, 0xe0d47u);
    goto L_e0d5b;
L_e0d49:
    X86_TICK(c, 12);
    // 0e0d49  cmp byte ptr [0xe50], 1
    X86_AT(c, 0xe0d49u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xE50u))), 0x1u, 0, 1);
    // 0e0d50  jne 0xe0d59
    X86_AT(c, 0xe0d50u);
    if (x86_cc(c, 5)) { goto L_e0d59; }
    X86_TICK(c, 9);
    // 0e0d52  mov eax, 0xffffffff
    X86_AT(c, 0xe0d52u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e0d57  jmp 0xe0d5b
    X86_AT(c, 0xe0d57u);
    goto L_e0d5b;
L_e0d59:
    X86_TICK(c, 2);
    // 0e0d59  sub eax, eax
    X86_AT(c, 0xe0d59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e0d5b:
    X86_TICK(c, 20);
    // 0e0d5b  pop ebx
    X86_AT(c, 0xe0d5bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e0d5c  leave 
    X86_AT(c, 0xe0d5cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e0d5d  ret 
    X86_AT(c, 0xe0d5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0cc8u, "ran off the end of a function");
}
void f_000e0d60(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0e0d60  push ebp
    X86_AT(c, 0xe0d60u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0d61  mov ebp, esp
    X86_AT(c, 0xe0d61u);
    c.r[5] = c.r[4];
    // 0e0d63  push eax
    X86_AT(c, 0xe0d63u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0d64  push ebx
    X86_AT(c, 0xe0d64u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0d65  mov word ptr [0xb94], 0x93
    X86_AT(c, 0xe0d65u);
    wr16((c.sbase[3] + (uint32_t)(0xB94u)), 0x93u);
    // 0e0d6e  mov dword ptr [0xb9e], 0x52c0
    X86_AT(c, 0xe0d6eu);
    wr32((c.sbase[3] + (uint32_t)(0xB9Eu)), 0x52C0u);
    // 0e0d78  mov dword ptr [0xe34], 0x2511
    X86_AT(c, 0xe0d78u);
    wr32((c.sbase[3] + (uint32_t)(0xE34u)), 0x2511u);
    // 0e0d82  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xe0d82u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e0d86  add ax, 0xff00
    X86_AT(c, 0xe0d86u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xFF00u, 0, 2)); }
    // 0e0d8a  mov word ptr [0xe3c], ax
    X86_AT(c, 0xe0d8au);
    wr16((c.sbase[3] + (uint32_t)(0xE3Cu)), (c.r[0] & 0xFFFFu));
    // 0e0d90  mov dword ptr [0xe40], 0xb94
    X86_AT(c, 0xe0d90u);
    wr32((c.sbase[3] + (uint32_t)(0xE40u)), 0xB94u);
    // 0e0d9a  push 0xe50
    X86_AT(c, 0xe0d9au);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0e0d9f  push 0xe34
    X86_AT(c, 0xe0d9fu);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0e0da4  call 0x102492
    X86_AT(c, 0xe0da4u);
    push32(c, 0xe0da9u); f_00102492(c); X86_RET(c, 0xe0da9u);
    X86_TICK(c, 19);
    // 0e0da9  mov bl, byte ptr [0xe51]
    X86_AT(c, 0xe0da9u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE51u))));
    // 0e0daf  mov al, byte ptr [0xe58]
    X86_AT(c, 0xe0dafu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE58u))));
    // 0e0db4  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe0db4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0e0db7  add esp, 8
    X86_AT(c, 0xe0db7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0dba  and bl, bl
    X86_AT(c, 0xe0dbau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e0dbc  je 0xe0dcf
    X86_AT(c, 0xe0dbcu);
    if (x86_cc(c, 4)) { goto L_e0dcf; }
    X86_TICK(c, 11);
    // 0e0dbe  push eax
    X86_AT(c, 0xe0dbeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0dbf  push ebx
    X86_AT(c, 0xe0dbfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0dc0  call 0xe0240
    X86_AT(c, 0xe0dc0u);
    push32(c, 0xe0dc5u); f_000e0240(c); X86_RET(c, 0xe0dc5u);
    X86_TICK(c, 11);
    // 0e0dc5  mov eax, 0xffffffff
    X86_AT(c, 0xe0dc5u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e0dca  add esp, 8
    X86_AT(c, 0xe0dcau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0dcd  jmp 0xe0dd1
    X86_AT(c, 0xe0dcdu);
    goto L_e0dd1;
L_e0dcf:
    X86_TICK(c, 2);
    // 0e0dcf  sub eax, eax
    X86_AT(c, 0xe0dcfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e0dd1:
    X86_TICK(c, 20);
    // 0e0dd1  pop ebx
    X86_AT(c, 0xe0dd1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e0dd2  leave 
    X86_AT(c, 0xe0dd2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e0dd3  ret 
    X86_AT(c, 0xe0dd3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0d60u, "ran off the end of a function");
}
void f_000e0de4(X86Cpu& c) {
    X86_TICK(c, 73);
    // 0e0de4  push ebp
    X86_AT(c, 0xe0de4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0de5  mov ebp, esp
    X86_AT(c, 0xe0de5u);
    c.r[5] = c.r[4];
    // 0e0de7  sub esp, 8
    X86_AT(c, 0xe0de7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e0dea  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe0deau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e0ded  mov dword ptr [0xe448], eax
    X86_AT(c, 0xe0dedu);
    wr32((c.sbase[3] + (uint32_t)(0xE448u)), c.r[0]);
    // 0e0df2  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe0df2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e0df5  cdq 
    X86_AT(c, 0xe0df5u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e0df6  mov ecx, 0xc
    X86_AT(c, 0xe0df6u);
    c.r[1] = 0xCu;
    // 0e0dfb  idiv ecx
    X86_AT(c, 0xe0dfbu);
    x86_idiv(c, c.r[1], 4, 0xe0dfbu);
    // 0e0dfd  lea eax, [eax + eax*2]
    X86_AT(c, 0xe0dfdu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e0e00  add eax, eax
    X86_AT(c, 0xe0e00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e0e02  mov dword ptr [0xe3f8], eax
    X86_AT(c, 0xe0e02u);
    wr32((c.sbase[3] + (uint32_t)(0xE3F8u)), c.r[0]);
    // 0e0e07  cmp eax, 0x40
    X86_AT(c, 0xe0e07u);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 0e0e0a  jge 0xe0e13
    X86_AT(c, 0xe0e0au);
    if (x86_cc(c, 13)) { goto L_e0e13; }
    X86_TICK(c, 9);
    // 0e0e0c  mov eax, 2
    X86_AT(c, 0xe0e0cu);
    c.r[0] = 0x2u;
    // 0e0e11  jmp 0xe0e64
    X86_AT(c, 0xe0e11u);
    goto L_e0e64;
L_e0e13:
    X86_TICK(c, 29);
    // 0e0e13  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe0e13u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e0e16  mov dword ptr [0xe400], eax
    X86_AT(c, 0xe0e16u);
    wr32((c.sbase[3] + (uint32_t)(0xE400u)), c.r[0]);
    // 0e0e1b  mov edx, dword ptr [0xe3f8]
    X86_AT(c, 0xe0e1bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE3F8u)));
    // 0e0e21  lea ecx, [eax + edx*1 - 6]
    X86_AT(c, 0xe0e21u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 0e0e25  mov dword ptr [0xe408], ecx
    X86_AT(c, 0xe0e25u);
    wr32((c.sbase[3] + (uint32_t)(0xE408u)), c.r[1]);
    // 0e0e2b  add eax, edx
    X86_AT(c, 0xe0e2bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e0e2d  mov dword ptr [0xe404], eax
    X86_AT(c, 0xe0e2du);
    wr32((c.sbase[3] + (uint32_t)(0xE404u)), c.r[0]);
    // 0e0e32  lea eax, [eax + edx*1 - 6]
    X86_AT(c, 0xe0e32u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 0e0e36  mov dword ptr [0xe40c], eax
    X86_AT(c, 0xe0e36u);
    wr32((c.sbase[3] + (uint32_t)(0xE40Cu)), c.r[0]);
    // 0e0e3b  call 0xfe0c9
    X86_AT(c, 0xe0e3bu);
    push32(c, 0xe0e40u); f_000fe0c9(c); X86_RET(c, 0xe0e40u);
    X86_TICK(c, 7);
    // 0e0e40  call 0xfdfdd
    X86_AT(c, 0xe0e40u);
    push32(c, 0xe0e45u); f_000fdfdd(c); X86_RET(c, 0xe0e45u);
    X86_TICK(c, 9);
    // 0e0e45  push 0x33
    X86_AT(c, 0xe0e45u);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0e0e47  call 0xfe011
    X86_AT(c, 0xe0e47u);
    push32(c, 0xe0e4cu); f_000fe011(c); X86_RET(c, 0xe0e4cu);
    X86_TICK(c, 13);
    // 0e0e4c  lea eax, [ebp - 8]
    X86_AT(c, 0xe0e4cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e0e4f  push eax
    X86_AT(c, 0xe0e4fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0e50  push 0x1058
    X86_AT(c, 0xe0e50u);
    { uint32_t v = 0x1058u; push32(c, v); }
    // 0e0e55  call 0x1001f8
    X86_AT(c, 0xe0e55u);
    push32(c, 0xe0e5au); f_001001f8(c); X86_RET(c, 0xe0e5au);
    X86_TICK(c, 6);
    // 0e0e5a  sub eax, eax
    X86_AT(c, 0xe0e5au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e0e5c  mov dword ptr [0xe414], eax
    X86_AT(c, 0xe0e5cu);
    wr32((c.sbase[3] + (uint32_t)(0xE414u)), c.r[0]);
    // 0e0e61  add esp, 0xc
    X86_AT(c, 0xe0e61u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e0e64:
    X86_TICK(c, 16);
    // 0e0e64  leave 
    X86_AT(c, 0xe0e64u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e0e65  ret 
    X86_AT(c, 0xe0e65u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0de4u, "ran off the end of a function");
}
void f_000e0e68(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e0e68  call 0xfe0d4
    X86_AT(c, 0xe0e68u);
    push32(c, 0xe0e6du); f_000fe0d4(c); X86_RET(c, 0xe0e6du);
    X86_TICK(c, 12);
    // 0e0e6d  sub eax, eax
    X86_AT(c, 0xe0e6du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e0e6f  ret 
    X86_AT(c, 0xe0e6fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0e68u, "ran off the end of a function");
}
void f_000e0e70(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0e0e70  push ebp
    X86_AT(c, 0xe0e70u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e0e71  mov ebp, esp
    X86_AT(c, 0xe0e71u);
    c.r[5] = c.r[4];
    // 0e0e73  sub esp, 0x108
    X86_AT(c, 0xe0e73u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x108u, 0, 4); }
    // 0e0e79  push ebx
    X86_AT(c, 0xe0e79u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e0e7a  push esi
    X86_AT(c, 0xe0e7au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0e7b  push edi
    X86_AT(c, 0xe0e7bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0e7c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe0e7cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e0e7f  sub ebx, ebx
    X86_AT(c, 0xe0e7fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e0e81  mov esi, ebx
    X86_AT(c, 0xe0e81u);
    c.r[6] = c.r[3];
L_e0e83:
    X86_TICK(c, 11);
    // 0e0e83  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0xe0e83u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 0e0e86  and al, al
    X86_AT(c, 0xe0e86u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e0e88  je 0xe0ea0
    X86_AT(c, 0xe0e88u);
    if (x86_cc(c, 4)) { goto L_e0ea0; }
    X86_TICK(c, 14);
    // 0e0e8a  movzx eax, al
    X86_AT(c, 0xe0e8au);
    c.r[0] = g8(c, 0);
    // 0e0e8d  cmp eax, dword ptr [esi*4 + 0x40e08]
    X86_AT(c, 0xe0e8du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x40E08u))), 0, 4);
    // 0e0e94  je 0xe0e9d
    X86_AT(c, 0xe0e94u);
    if (x86_cc(c, 4)) { goto L_e0e9d; }
    X86_TICK(c, 9);
    // 0e0e96  mov ebx, 1
    X86_AT(c, 0xe0e96u);
    c.r[3] = 0x1u;
    // 0e0e9b  jmp 0xe0ea0
    X86_AT(c, 0xe0e9bu);
    goto L_e0ea0;
L_e0e9d:
    X86_TICK(c, 9);
    // 0e0e9d  inc esi
    X86_AT(c, 0xe0e9du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e0e9e  jmp 0xe0e83
    X86_AT(c, 0xe0e9eu);
    X86_POLL(c, 0xe0e83u); goto L_e0e83;
L_e0ea0:
    X86_TICK(c, 2);
    // 0e0ea0  sub esi, esi
    X86_AT(c, 0xe0ea0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e0ea2:
    X86_TICK(c, 11);
    // 0e0ea2  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0xe0ea2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 0e0ea5  and al, al
    X86_AT(c, 0xe0ea5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e0ea7  je 0xe0eb6
    X86_AT(c, 0xe0ea7u);
    if (x86_cc(c, 4)) { goto L_e0eb6; }
    X86_TICK(c, 14);
    // 0e0ea9  movzx eax, al
    X86_AT(c, 0xe0ea9u);
    c.r[0] = g8(c, 0);
    // 0e0eac  mov dword ptr [esi*4 + 0x40e08], eax
    X86_AT(c, 0xe0eacu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x40E08u)), c.r[0]);
    // 0e0eb3  inc esi
    X86_AT(c, 0xe0eb3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e0eb4  jmp 0xe0ea2
    X86_AT(c, 0xe0eb4u);
    X86_POLL(c, 0xe0ea2u); goto L_e0ea2;
L_e0eb6:
    X86_TICK(c, 9);
    // 0e0eb6  mov dword ptr [esi*4 + 0x40e08], 0
    X86_AT(c, 0xe0eb6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x40E08u)), 0x0u);
    // 0e0ec1  call 0xe137c
    X86_AT(c, 0xe0ec1u);
    push32(c, 0xe0ec6u); f_000e137c(c); X86_RET(c, 0xe0ec6u);
    X86_TICK(c, 13);
    // 0e0ec6  mov dword ptr [0xe458], 0xffffffff
    X86_AT(c, 0xe0ec6u);
    wr32((c.sbase[3] + (uint32_t)(0xE458u)), 0xFFFFFFFFu);
    // 0e0ed0  push 0x106a
    X86_AT(c, 0xe0ed0u);
    { uint32_t v = 0x106Au; push32(c, v); }
    // 0e0ed5  push edi
    X86_AT(c, 0xe0ed5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e0ed6  call 0x100f34
    X86_AT(c, 0xe0ed6u);
    push32(c, 0xe0edbu); f_00100f34(c); X86_RET(c, 0xe0edbu);
    X86_TICK(c, 11);
    // 0e0edb  add esp, 8
    X86_AT(c, 0xe0edbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0ede  mov dword ptr [0xe45c], eax
    X86_AT(c, 0xe0edeu);
    wr32((c.sbase[3] + (uint32_t)(0xE45Cu)), c.r[0]);
    // 0e0ee3  and eax, eax
    X86_AT(c, 0xe0ee3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e0ee5  jne 0xe0ef1
    X86_AT(c, 0xe0ee5u);
    if (x86_cc(c, 5)) { goto L_e0ef1; }
    X86_TICK(c, 9);
    // 0e0ee7  mov eax, 0xffffffff
    X86_AT(c, 0xe0ee7u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e0eec  jmp 0xe1205
    X86_AT(c, 0xe0eecu);
    goto L_e1205;
L_e0ef1:
    X86_TICK(c, 16);
    // 0e0ef1  push 0
    X86_AT(c, 0xe0ef1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e0ef3  push 0x354
    X86_AT(c, 0xe0ef3u);
    { uint32_t v = 0x354u; push32(c, v); }
    // 0e0ef8  push dword ptr [0xe45c]
    X86_AT(c, 0xe0ef8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e0efe  call 0x101524
    X86_AT(c, 0xe0efeu);
    push32(c, 0xe0f03u); f_00101524(c); X86_RET(c, 0xe0f03u);
    X86_TICK(c, 22);
    // 0e0f03  mov dword ptr [0xe414], 0
    X86_AT(c, 0xe0f03u);
    wr32((c.sbase[3] + (uint32_t)(0xE414u)), 0x0u);
    // 0e0f0d  push dword ptr [0xe45c]
    X86_AT(c, 0xe0f0du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e0f13  push 0x20
    X86_AT(c, 0xe0f13u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e0f15  push 1
    X86_AT(c, 0xe0f15u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e0f17  lea eax, [ebp - 0x88]
    X86_AT(c, 0xe0f17u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0e0f1d  push eax
    X86_AT(c, 0xe0f1du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0f1e  call 0x100c58
    X86_AT(c, 0xe0f1eu);
    push32(c, 0xe0f23u); f_00100c58(c); X86_RET(c, 0xe0f23u);
    X86_TICK(c, 9);
    // 0e0f23  add esp, 0x1c
    X86_AT(c, 0xe0f23u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0e0f26  cmp eax, 0x20
    X86_AT(c, 0xe0f26u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0e0f29  jl 0xe1191
    X86_AT(c, 0xe0f29u);
    if (x86_cc(c, 12)) { goto L_e1191; }
    X86_TICK(c, 2);
    // 0e0f2f  sub esi, esi
    X86_AT(c, 0xe0f2fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e0f31:
    X86_TICK(c, 7);
    // 0e0f31  cmp esi, 0x20
    X86_AT(c, 0xe0f31u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0e0f34  jge 0xe0f45
    X86_AT(c, 0xe0f34u);
    if (x86_cc(c, 13)) { goto L_e0f45; }
    X86_TICK(c, 11);
    // 0e0f36  push 1
    X86_AT(c, 0xe0f36u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e0f38  push esi
    X86_AT(c, 0xe0f38u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0f39  call 0xfe220
    X86_AT(c, 0xe0f39u);
    push32(c, 0xe0f3eu); f_000fe220(c); X86_RET(c, 0xe0f3eu);
    X86_TICK(c, 14);
    // 0e0f3e  xchg ebx, eax
    X86_AT(c, 0xe0f3eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e0f3f  inc esi
    X86_AT(c, 0xe0f3fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e0f40  add esp, 8
    X86_AT(c, 0xe0f40u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0f43  jmp 0xe0f31
    X86_AT(c, 0xe0f43u);
    X86_POLL(c, 0xe0f31u); goto L_e0f31;
L_e0f45:
    X86_TICK(c, 20);
    // 0e0f45  push dword ptr [0xe45c]
    X86_AT(c, 0xe0f45u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e0f4b  push 0x20
    X86_AT(c, 0xe0f4bu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e0f4d  push 1
    X86_AT(c, 0xe0f4du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e0f4f  lea eax, [ebp - 0x88]
    X86_AT(c, 0xe0f4fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0e0f55  push eax
    X86_AT(c, 0xe0f55u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0f56  call 0x100c58
    X86_AT(c, 0xe0f56u);
    push32(c, 0xe0f5bu); f_00100c58(c); X86_RET(c, 0xe0f5bu);
    X86_TICK(c, 9);
    // 0e0f5b  add esp, 0x10
    X86_AT(c, 0xe0f5bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e0f5e  cmp eax, 0x20
    X86_AT(c, 0xe0f5eu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0e0f61  jl 0xe1191
    X86_AT(c, 0xe0f61u);
    if (x86_cc(c, 12)) { goto L_e1191; }
    X86_TICK(c, 2);
    // 0e0f67  sub esi, esi
    X86_AT(c, 0xe0f67u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e0f69:
    X86_TICK(c, 7);
    // 0e0f69  cmp esi, 0x20
    X86_AT(c, 0xe0f69u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0e0f6c  jge 0xe0f80
    X86_AT(c, 0xe0f6cu);
    if (x86_cc(c, 13)) { goto L_e0f80; }
    X86_TICK(c, 11);
    // 0e0f6e  push 0xff
    X86_AT(c, 0xe0f6eu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e0f73  push esi
    X86_AT(c, 0xe0f73u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0f74  call 0xfe1ec
    X86_AT(c, 0xe0f74u);
    push32(c, 0xe0f79u); f_000fe1ec(c); X86_RET(c, 0xe0f79u);
    X86_TICK(c, 14);
    // 0e0f79  xchg ebx, eax
    X86_AT(c, 0xe0f79u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e0f7a  inc esi
    X86_AT(c, 0xe0f7au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e0f7b  add esp, 8
    X86_AT(c, 0xe0f7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0f7e  jmp 0xe0f69
    X86_AT(c, 0xe0f7eu);
    X86_POLL(c, 0xe0f69u); goto L_e0f69;
L_e0f80:
    X86_TICK(c, 20);
    // 0e0f80  push dword ptr [0xe45c]
    X86_AT(c, 0xe0f80u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e0f86  push 0x20
    X86_AT(c, 0xe0f86u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e0f88  push 1
    X86_AT(c, 0xe0f88u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e0f8a  lea eax, [ebp - 0x88]
    X86_AT(c, 0xe0f8au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0e0f90  push eax
    X86_AT(c, 0xe0f90u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0f91  call 0x100c58
    X86_AT(c, 0xe0f91u);
    push32(c, 0xe0f96u); f_00100c58(c); X86_RET(c, 0xe0f96u);
    X86_TICK(c, 9);
    // 0e0f96  add esp, 0x10
    X86_AT(c, 0xe0f96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e0f99  cmp eax, 0x20
    X86_AT(c, 0xe0f99u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0e0f9c  jl 0xe1191
    X86_AT(c, 0xe0f9cu);
    if (x86_cc(c, 12)) { goto L_e1191; }
    X86_TICK(c, 2);
    // 0e0fa2  sub esi, esi
    X86_AT(c, 0xe0fa2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e0fa4:
    X86_TICK(c, 7);
    // 0e0fa4  cmp esi, 0x20
    X86_AT(c, 0xe0fa4u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0e0fa7  jge 0xe0fbb
    X86_AT(c, 0xe0fa7u);
    if (x86_cc(c, 13)) { goto L_e0fbb; }
    X86_TICK(c, 11);
    // 0e0fa9  push 0xff
    X86_AT(c, 0xe0fa9u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e0fae  push esi
    X86_AT(c, 0xe0faeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0faf  call 0xfe206
    X86_AT(c, 0xe0fafu);
    push32(c, 0xe0fb4u); f_000fe206(c); X86_RET(c, 0xe0fb4u);
    X86_TICK(c, 14);
    // 0e0fb4  xchg ebx, eax
    X86_AT(c, 0xe0fb4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e0fb5  inc esi
    X86_AT(c, 0xe0fb5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e0fb6  add esp, 8
    X86_AT(c, 0xe0fb6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0fb9  jmp 0xe0fa4
    X86_AT(c, 0xe0fb9u);
    X86_POLL(c, 0xe0fa4u); goto L_e0fa4;
L_e0fbb:
    X86_TICK(c, 20);
    // 0e0fbb  push dword ptr [0xe45c]
    X86_AT(c, 0xe0fbbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e0fc1  push 0x20
    X86_AT(c, 0xe0fc1u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e0fc3  push 1
    X86_AT(c, 0xe0fc3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e0fc5  lea eax, [ebp - 0x88]
    X86_AT(c, 0xe0fc5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0e0fcb  push eax
    X86_AT(c, 0xe0fcbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0fcc  call 0x100c58
    X86_AT(c, 0xe0fccu);
    push32(c, 0xe0fd1u); f_00100c58(c); X86_RET(c, 0xe0fd1u);
    X86_TICK(c, 9);
    // 0e0fd1  add esp, 0x10
    X86_AT(c, 0xe0fd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e0fd4  cmp eax, 0x20
    X86_AT(c, 0xe0fd4u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0e0fd7  jl 0xe1191
    X86_AT(c, 0xe0fd7u);
    if (x86_cc(c, 12)) { goto L_e1191; }
    X86_TICK(c, 2);
    // 0e0fdd  sub esi, esi
    X86_AT(c, 0xe0fddu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e0fdf:
    X86_TICK(c, 7);
    // 0e0fdf  cmp esi, 0x20
    X86_AT(c, 0xe0fdfu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0e0fe2  jge 0xe0ffa
    X86_AT(c, 0xe0fe2u);
    if (x86_cc(c, 13)) { goto L_e0ffa; }
    X86_TICK(c, 17);
    // 0e0fe4  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0xe0fe4u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 0e0fec  push eax
    X86_AT(c, 0xe0fecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e0fed  push esi
    X86_AT(c, 0xe0fedu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e0fee  call 0xfe254
    X86_AT(c, 0xe0feeu);
    push32(c, 0xe0ff3u); f_000fe254(c); X86_RET(c, 0xe0ff3u);
    X86_TICK(c, 14);
    // 0e0ff3  xchg ebx, eax
    X86_AT(c, 0xe0ff3u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e0ff4  inc esi
    X86_AT(c, 0xe0ff4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e0ff5  add esp, 8
    X86_AT(c, 0xe0ff5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e0ff8  jmp 0xe0fdf
    X86_AT(c, 0xe0ff8u);
    X86_POLL(c, 0xe0fdfu); goto L_e0fdf;
L_e0ffa:
    X86_TICK(c, 20);
    // 0e0ffa  push dword ptr [0xe45c]
    X86_AT(c, 0xe0ffau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e1000  push 0x20
    X86_AT(c, 0xe1000u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e1002  push 1
    X86_AT(c, 0xe1002u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1004  lea eax, [ebp - 0x88]
    X86_AT(c, 0xe1004u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0e100a  push eax
    X86_AT(c, 0xe100au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e100b  call 0x100c58
    X86_AT(c, 0xe100bu);
    push32(c, 0xe1010u); f_00100c58(c); X86_RET(c, 0xe1010u);
    X86_TICK(c, 9);
    // 0e1010  add esp, 0x10
    X86_AT(c, 0xe1010u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e1013  cmp eax, 0x20
    X86_AT(c, 0xe1013u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0e1016  jl 0xe1191
    X86_AT(c, 0xe1016u);
    if (x86_cc(c, 12)) { goto L_e1191; }
    X86_TICK(c, 2);
    // 0e101c  sub esi, esi
    X86_AT(c, 0xe101cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e101e:
    X86_TICK(c, 7);
    // 0e101e  cmp esi, 0x20
    X86_AT(c, 0xe101eu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0e1021  jge 0xe1039
    X86_AT(c, 0xe1021u);
    if (x86_cc(c, 13)) { goto L_e1039; }
    X86_TICK(c, 17);
    // 0e1023  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0xe1023u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 0e102b  push eax
    X86_AT(c, 0xe102bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e102c  push esi
    X86_AT(c, 0xe102cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e102d  call 0xfe23a
    X86_AT(c, 0xe102du);
    push32(c, 0xe1032u); f_000fe23a(c); X86_RET(c, 0xe1032u);
    X86_TICK(c, 14);
    // 0e1032  xchg ebx, eax
    X86_AT(c, 0xe1032u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e1033  inc esi
    X86_AT(c, 0xe1033u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e1034  add esp, 8
    X86_AT(c, 0xe1034u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1037  jmp 0xe101e
    X86_AT(c, 0xe1037u);
    X86_POLL(c, 0xe101eu); goto L_e101e;
L_e1039:
    X86_TICK(c, 18);
    // 0e1039  push 0
    X86_AT(c, 0xe1039u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e103b  push 0x6d4
    X86_AT(c, 0xe103bu);
    { uint32_t v = 0x6D4u; push32(c, v); }
    // 0e1040  mov eax, 0xe3f4
    X86_AT(c, 0xe1040u);
    c.r[0] = 0xE3F4u;
    // 0e1045  push dword ptr [eax + 0x68]
    X86_AT(c, 0xe1045u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 0e1048  call 0x101524
    X86_AT(c, 0xe1048u);
    push32(c, 0xe104du); f_00101524(c); X86_RET(c, 0xe104du);
    X86_TICK(c, 20);
    // 0e104d  push dword ptr [0xe45c]
    X86_AT(c, 0xe104du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e1053  push 6
    X86_AT(c, 0xe1053u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e1055  push 1
    X86_AT(c, 0xe1055u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1057  lea eax, [ebp - 0x88]
    X86_AT(c, 0xe1057u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0e105d  push eax
    X86_AT(c, 0xe105du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e105e  call 0x100c58
    X86_AT(c, 0xe105eu);
    push32(c, 0xe1063u); f_00100c58(c); X86_RET(c, 0xe1063u);
    X86_TICK(c, 9);
    // 0e1063  add esp, 0x1c
    X86_AT(c, 0xe1063u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0e1066  cmp eax, 6
    X86_AT(c, 0xe1066u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 0e1069  jl 0xe1191
    X86_AT(c, 0xe1069u);
    if (x86_cc(c, 12)) { goto L_e1191; }
    X86_TICK(c, 20);
    // 0e106f  push dword ptr [0xe45c]
    X86_AT(c, 0xe106fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e1075  push 8
    X86_AT(c, 0xe1075u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e1077  push 1
    X86_AT(c, 0xe1077u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1079  lea eax, [ebp - 0x88]
    X86_AT(c, 0xe1079u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0e107f  push eax
    X86_AT(c, 0xe107fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1080  call 0x100c58
    X86_AT(c, 0xe1080u);
    push32(c, 0xe1085u); f_00100c58(c); X86_RET(c, 0xe1085u);
    X86_TICK(c, 9);
    // 0e1085  add esp, 0x10
    X86_AT(c, 0xe1085u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e1088  cmp eax, 8
    X86_AT(c, 0xe1088u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0e108b  jl 0xe1191
    X86_AT(c, 0xe108bu);
    if (x86_cc(c, 12)) { goto L_e1191; }
    X86_TICK(c, 2);
    // 0e1091  sub esi, esi
    X86_AT(c, 0xe1091u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e1093:
    X86_TICK(c, 11);
    // 0e1093  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0xe1093u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 0e1096  and al, al
    X86_AT(c, 0xe1096u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e1098  je 0xe10a4
    X86_AT(c, 0xe1098u);
    if (x86_cc(c, 4)) { goto L_e10a4; }
    X86_TICK(c, 11);
    // 0e109a  mov byte ptr [ebp + esi*1 - 0x108], al
    X86_AT(c, 0xe109au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u)), g8(c, 0));
    // 0e10a1  inc esi
    X86_AT(c, 0xe10a1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e10a2  jmp 0xe1093
    X86_AT(c, 0xe10a2u);
    X86_POLL(c, 0xe1093u); goto L_e1093;
L_e10a4:
    X86_TICK(c, 12);
    // 0e10a4  cmp byte ptr [edi + esi*1], 0x5c
    X86_AT(c, 0xe10a4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))), 0x5Cu, 0, 1);
    // 0e10a8  je 0xe10b1
    X86_AT(c, 0xe10a8u);
    if (x86_cc(c, 4)) { goto L_e10b1; }
    X86_TICK(c, 7);
    // 0e10aa  and esi, esi
    X86_AT(c, 0xe10aau);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e10ac  jl 0xe10b1
    X86_AT(c, 0xe10acu);
    if (x86_cc(c, 12)) { goto L_e10b1; }
    X86_TICK(c, 9);
    // 0e10ae  dec esi
    X86_AT(c, 0xe10aeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e10af  jmp 0xe10a4
    X86_AT(c, 0xe10afu);
    X86_POLL(c, 0xe10a4u); goto L_e10a4;
L_e10b1:
    X86_TICK(c, 22);
    // 0e10b1  inc esi
    X86_AT(c, 0xe10b1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e10b2  push dword ptr [0xe45c]
    X86_AT(c, 0xe10b2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e10b8  push 8
    X86_AT(c, 0xe10b8u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e10ba  push 1
    X86_AT(c, 0xe10bau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e10bc  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0xe10bcu);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 0e10c3  push eax
    X86_AT(c, 0xe10c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e10c4  call 0x100c58
    X86_AT(c, 0xe10c4u);
    push32(c, 0xe10c9u); f_00100c58(c); X86_RET(c, 0xe10c9u);
    X86_TICK(c, 9);
    // 0e10c9  add esp, 0x10
    X86_AT(c, 0xe10c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e10cc  cmp eax, 8
    X86_AT(c, 0xe10ccu);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0e10cf  jl 0xe1191
    X86_AT(c, 0xe10cfu);
    if (x86_cc(c, 12)) { goto L_e1191; }
    X86_TICK(c, 12);
    // 0e10d5  cmp byte ptr [ebp + esi*1 - 0x108], 0
    X86_AT(c, 0xe10d5u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 0e10dd  je 0xe1127
    X86_AT(c, 0xe10ddu);
    if (x86_cc(c, 4)) { goto L_e1127; }
    X86_TICK(c, 2);
    // 0e10df  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe10dfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_e10e6:
    X86_TICK(c, 20);
    // 0e10e6  mov eax, esi
    X86_AT(c, 0xe10e6u);
    c.r[0] = c.r[6];
    // 0e10e8  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe10e8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0e10eb  cmp byte ptr [ebp + eax*1 - 0x108], 0
    X86_AT(c, 0xe10ebu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 0e10f3  je 0xe10fa
    X86_AT(c, 0xe10f3u);
    if (x86_cc(c, 4)) { goto L_e10fa; }
    X86_TICK(c, 13);
    // 0e10f5  inc dword ptr [ebp - 4]
    X86_AT(c, 0xe10f5u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e10f8  jmp 0xe10e6
    X86_AT(c, 0xe10f8u);
    X86_POLL(c, 0xe10e6u); goto L_e10e6;
L_e10fa:
    X86_TICK(c, 18);
    // 0e10fa  mov eax, esi
    X86_AT(c, 0xe10fau);
    c.r[0] = c.r[6];
    // 0e10fc  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe10fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0e10ff  mov byte ptr [ebp + eax*1 - 0x108], 0x2e
    X86_AT(c, 0xe10ffu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u)), 0x2Eu);
    // 0e1107  mov byte ptr [ebp + eax*1 - 0x107], 0x66
    X86_AT(c, 0xe1107u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF9u)), 0x66u);
    // 0e110f  mov byte ptr [ebp + eax*1 - 0x106], 0x6d
    X86_AT(c, 0xe110fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFAu)), 0x6Du);
    // 0e1117  mov byte ptr [ebp + eax*1 - 0x105], 0x62
    X86_AT(c, 0xe1117u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFBu)), 0x62u);
    // 0e111f  mov byte ptr [ebp + eax*1 - 0x104], 0
    X86_AT(c, 0xe111fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFCu)), 0x0u);
L_e1127:
    X86_TICK(c, 20);
    // 0e1127  push dword ptr [0xe45c]
    X86_AT(c, 0xe1127u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e112d  push 8
    X86_AT(c, 0xe112du);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e112f  push 1
    X86_AT(c, 0xe112fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1131  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0xe1131u);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 0e1138  push eax
    X86_AT(c, 0xe1138u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1139  call 0x100c58
    X86_AT(c, 0xe1139u);
    push32(c, 0xe113eu); f_00100c58(c); X86_RET(c, 0xe113eu);
    X86_TICK(c, 9);
    // 0e113e  add esp, 0x10
    X86_AT(c, 0xe113eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e1141  cmp eax, 8
    X86_AT(c, 0xe1141u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0e1144  jl 0xe1191
    X86_AT(c, 0xe1144u);
    if (x86_cc(c, 12)) { goto L_e1191; }
    X86_TICK(c, 18);
    // 0e1146  push 0
    X86_AT(c, 0xe1146u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1148  push 0x800
    X86_AT(c, 0xe1148u);
    { uint32_t v = 0x800u; push32(c, v); }
    // 0e114d  mov eax, 0xe3f4
    X86_AT(c, 0xe114du);
    c.r[0] = 0xE3F4u;
    // 0e1152  push dword ptr [eax + 0x68]
    X86_AT(c, 0xe1152u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 0e1155  call 0x101524
    X86_AT(c, 0xe1155u);
    push32(c, 0xe115au); f_00101524(c); X86_RET(c, 0xe115au);
    X86_TICK(c, 20);
    // 0e115a  push dword ptr [0xe45c]
    X86_AT(c, 0xe115au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e1160  push 1
    X86_AT(c, 0xe1160u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1162  push 4
    X86_AT(c, 0xe1162u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e1164  lea eax, [ebp - 8]
    X86_AT(c, 0xe1164u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e1167  push eax
    X86_AT(c, 0xe1167u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1168  call 0x100c58
    X86_AT(c, 0xe1168u);
    push32(c, 0xe116du); f_00100c58(c); X86_RET(c, 0xe116du);
    X86_TICK(c, 9);
    // 0e116d  add esp, 0x1c
    X86_AT(c, 0xe116du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0e1170  dec eax
    X86_AT(c, 0xe1170u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e1171  jl 0xe1191
    X86_AT(c, 0xe1171u);
    if (x86_cc(c, 12)) { goto L_e1191; }
    X86_TICK(c, 20);
    // 0e1173  push dword ptr [0xe45c]
    X86_AT(c, 0xe1173u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e1179  push 2
    X86_AT(c, 0xe1179u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e117b  push 1
    X86_AT(c, 0xe117bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e117d  lea eax, [ebp - 0x88]
    X86_AT(c, 0xe117du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0e1183  push eax
    X86_AT(c, 0xe1183u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1184  call 0x100c58
    X86_AT(c, 0xe1184u);
    push32(c, 0xe1189u); f_00100c58(c); X86_RET(c, 0xe1189u);
    X86_TICK(c, 9);
    // 0e1189  add esp, 0x10
    X86_AT(c, 0xe1189u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e118c  cmp eax, 2
    X86_AT(c, 0xe118cu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0e118f  jge 0xe11a6
    X86_AT(c, 0xe118fu);
    if (x86_cc(c, 13)) { goto L_e11a6; }
L_e1191:
    X86_TICK(c, 12);
    // 0e1191  push dword ptr [0xe45c]
    X86_AT(c, 0xe1191u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e1197  call 0x101430
    X86_AT(c, 0xe1197u);
    push32(c, 0xe119cu); f_00101430(c); X86_RET(c, 0xe119cu);
    X86_TICK(c, 11);
    // 0e119c  mov eax, 2
    X86_AT(c, 0xe119cu);
    c.r[0] = 0x2u;
    // 0e11a1  add esp, 4
    X86_AT(c, 0xe11a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e11a4  jmp 0xe1205
    X86_AT(c, 0xe11a4u);
    goto L_e1205;
L_e11a6:
    X86_TICK(c, 29);
    // 0e11a6  movzx eax, byte ptr [ebp - 0x88]
    X86_AT(c, 0xe11a6u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF78u)));
    // 0e11ad  mov dword ptr [0xe454], eax
    X86_AT(c, 0xe11adu);
    wr32((c.sbase[3] + (uint32_t)(0xE454u)), c.r[0]);
    // 0e11b2  movzx eax, byte ptr [ebp - 0x87]
    X86_AT(c, 0xe11b2u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF79u)));
    // 0e11b9  mov dword ptr [0xe450], eax
    X86_AT(c, 0xe11b9u);
    wr32((c.sbase[3] + (uint32_t)(0xE450u)), c.r[0]);
    // 0e11be  mov dword ptr [0xe458], 0
    X86_AT(c, 0xe11beu);
    wr32((c.sbase[3] + (uint32_t)(0xE458u)), 0x0u);
    // 0e11c8  mov byte ptr [0xe410], 0xfe
    X86_AT(c, 0xe11c8u);
    wr8((c.sbase[3] + (uint32_t)(0xE410u)), 0xFEu);
    // 0e11cf  mov dword ptr [0xe3fc], 1
    X86_AT(c, 0xe11cfu);
    wr32((c.sbase[3] + (uint32_t)(0xE3FCu)), 0x1u);
    // 0e11d9  call 0xe15f8
    X86_AT(c, 0xe11d9u);
    push32(c, 0xe11deu); f_000e15f8(c); X86_RET(c, 0xe11deu);
    X86_TICK(c, 7);
    // 0e11de  call 0xe15f8
    X86_AT(c, 0xe11deu);
    push32(c, 0xe11e3u); f_000e15f8(c); X86_RET(c, 0xe11e3u);
    X86_TICK(c, 12);
    // 0e11e3  push dword ptr [0xe450]
    X86_AT(c, 0xe11e3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE450u))); push32(c, v); }
    // 0e11e9  call 0xfe1d7
    X86_AT(c, 0xe11e9u);
    push32(c, 0xe11eeu); f_000fe1d7(c); X86_RET(c, 0xe11eeu);
    X86_TICK(c, 13);
    // 0e11ee  add esp, 4
    X86_AT(c, 0xe11eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e11f1  mov eax, dword ptr [0xe45c]
    X86_AT(c, 0xe11f1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE45Cu)));
    // 0e11f6  and eax, eax
    X86_AT(c, 0xe11f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e11f8  je 0xe1203
    X86_AT(c, 0xe11f8u);
    if (x86_cc(c, 4)) { goto L_e1203; }
    X86_TICK(c, 9);
    // 0e11fa  push eax
    X86_AT(c, 0xe11fau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e11fb  call 0x101430
    X86_AT(c, 0xe11fbu);
    push32(c, 0xe1200u); f_00101430(c); X86_RET(c, 0xe1200u);
    X86_TICK(c, 2);
    // 0e1200  add esp, 4
    X86_AT(c, 0xe1200u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e1203:
    X86_TICK(c, 2);
    // 0e1203  sub eax, eax
    X86_AT(c, 0xe1203u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e1205:
    X86_TICK(c, 28);
    // 0e1205  pop edi
    X86_AT(c, 0xe1205u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1206  pop esi
    X86_AT(c, 0xe1206u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e1207  pop ebx
    X86_AT(c, 0xe1207u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e1208  leave 
    X86_AT(c, 0xe1208u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1209  ret 
    X86_AT(c, 0xe1209u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0e70u, "ran off the end of a function");
}
void f_000e120c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e120c  push ebp
    X86_AT(c, 0xe120cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e120d  mov ebp, esp
    X86_AT(c, 0xe120du);
    c.r[5] = c.r[4];
    // 0e120f  push edi
    X86_AT(c, 0xe120fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1210  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe1210u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e1213  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe1213u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e1216  sub ecx, ecx
    X86_AT(c, 0xe1216u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0e1218  cmp ecx, edx
    X86_AT(c, 0xe1218u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 0e121a  jne 0xe1220
    X86_AT(c, 0xe121au);
    if (x86_cc(c, 5)) { goto L_e1220; }
    X86_TICK(c, 9);
    // 0e121c  mov eax, edi
    X86_AT(c, 0xe121cu);
    c.r[0] = c.r[7];
    // 0e121e  jmp 0xe1234
    X86_AT(c, 0xe121eu);
    goto L_e1234;
L_e1220:
    X86_TICK(c, 12);
    // 0e1220  cmp byte ptr [edi], 0xf2
    X86_AT(c, 0xe1220u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xF2u, 0, 1);
    // 0e1223  jne 0xe122f
    X86_AT(c, 0xe1223u);
    if (x86_cc(c, 5)) { goto L_e122f; }
    X86_TICK(c, 9);
    // 0e1225  inc ecx
    X86_AT(c, 0xe1225u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e1226  cmp edx, ecx
    X86_AT(c, 0xe1226u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0e1228  jne 0xe122f
    X86_AT(c, 0xe1228u);
    if (x86_cc(c, 5)) { goto L_e122f; }
    X86_TICK(c, 9);
    // 0e122a  lea eax, [edi + 6]
    X86_AT(c, 0xe122au);
    c.r[0] = (uint32_t)(c.r[7] + 0x6u);
    // 0e122d  jmp 0xe1234
    X86_AT(c, 0xe122du);
    goto L_e1234;
L_e122f:
    X86_TICK(c, 9);
    // 0e122f  add edi, 6
    X86_AT(c, 0xe122fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0e1232  jmp 0xe1220
    X86_AT(c, 0xe1232u);
    X86_POLL(c, 0xe1220u); goto L_e1220;
L_e1234:
    X86_TICK(c, 20);
    // 0e1234  pop edi
    X86_AT(c, 0xe1234u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1235  leave 
    X86_AT(c, 0xe1235u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1236  ret 
    X86_AT(c, 0xe1236u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe120cu, "ran off the end of a function");
}
void f_000e1238(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e1238  push ebp
    X86_AT(c, 0xe1238u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1239  mov ebp, esp
    X86_AT(c, 0xe1239u);
    c.r[5] = c.r[4];
    // 0e123b  push edi
    X86_AT(c, 0xe123bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e123c  mov eax, dword ptr [0xe418]
    X86_AT(c, 0xe123cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE418u)));
    // 0e1241  dec eax
    X86_AT(c, 0xe1241u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e1242  push eax
    X86_AT(c, 0xe1242u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1243  push 0
    X86_AT(c, 0xe1243u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1245  call 0xfe26e
    X86_AT(c, 0xe1245u);
    push32(c, 0xe124au); f_000fe26e(c); X86_RET(c, 0xe124au);
    X86_TICK(c, 17);
    // 0e124a  mov eax, dword ptr [0xe41c]
    X86_AT(c, 0xe124au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE41Cu)));
    // 0e124f  dec eax
    X86_AT(c, 0xe124fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e1250  push eax
    X86_AT(c, 0xe1250u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1251  push 1
    X86_AT(c, 0xe1251u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1253  call 0xfe26e
    X86_AT(c, 0xe1253u);
    push32(c, 0xe1258u); f_000fe26e(c); X86_RET(c, 0xe1258u);
    X86_TICK(c, 17);
    // 0e1258  mov eax, dword ptr [0xe420]
    X86_AT(c, 0xe1258u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE420u)));
    // 0e125d  dec eax
    X86_AT(c, 0xe125du);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e125e  push eax
    X86_AT(c, 0xe125eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e125f  push 2
    X86_AT(c, 0xe125fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1261  call 0xfe26e
    X86_AT(c, 0xe1261u);
    push32(c, 0xe1266u); f_000fe26e(c); X86_RET(c, 0xe1266u);
    X86_TICK(c, 17);
    // 0e1266  mov eax, dword ptr [0xe424]
    X86_AT(c, 0xe1266u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE424u)));
    // 0e126b  dec eax
    X86_AT(c, 0xe126bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e126c  push eax
    X86_AT(c, 0xe126cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e126d  push 3
    X86_AT(c, 0xe126du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e126f  call 0xfe26e
    X86_AT(c, 0xe126fu);
    push32(c, 0xe1274u); f_000fe26e(c); X86_RET(c, 0xe1274u);
    X86_TICK(c, 17);
    // 0e1274  mov eax, dword ptr [0xe428]
    X86_AT(c, 0xe1274u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE428u)));
    // 0e1279  dec eax
    X86_AT(c, 0xe1279u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e127a  push eax
    X86_AT(c, 0xe127au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e127b  push 4
    X86_AT(c, 0xe127bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e127d  call 0xfe26e
    X86_AT(c, 0xe127du);
    push32(c, 0xe1282u); f_000fe26e(c); X86_RET(c, 0xe1282u);
    X86_TICK(c, 17);
    // 0e1282  mov eax, dword ptr [0xe42c]
    X86_AT(c, 0xe1282u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE42Cu)));
    // 0e1287  dec eax
    X86_AT(c, 0xe1287u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e1288  push eax
    X86_AT(c, 0xe1288u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1289  push 5
    X86_AT(c, 0xe1289u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e128b  call 0xfe26e
    X86_AT(c, 0xe128bu);
    push32(c, 0xe1290u); f_000fe26e(c); X86_RET(c, 0xe1290u);
    X86_TICK(c, 17);
    // 0e1290  mov eax, dword ptr [0xe430]
    X86_AT(c, 0xe1290u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE430u)));
    // 0e1295  dec eax
    X86_AT(c, 0xe1295u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e1296  push eax
    X86_AT(c, 0xe1296u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1297  push 0
    X86_AT(c, 0xe1297u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1299  call 0xfda0b
    X86_AT(c, 0xe1299u);
    push32(c, 0xe129eu); f_000fda0b(c); X86_RET(c, 0xe129eu);
    X86_TICK(c, 17);
    // 0e129e  mov eax, dword ptr [0xe434]
    X86_AT(c, 0xe129eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE434u)));
    // 0e12a3  dec eax
    X86_AT(c, 0xe12a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e12a4  push eax
    X86_AT(c, 0xe12a4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e12a5  push 1
    X86_AT(c, 0xe12a5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e12a7  call 0xfda0b
    X86_AT(c, 0xe12a7u);
    push32(c, 0xe12acu); f_000fda0b(c); X86_RET(c, 0xe12acu);
    X86_TICK(c, 19);
    // 0e12ac  add esp, 0x40
    X86_AT(c, 0xe12acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e12af  mov eax, dword ptr [0xe438]
    X86_AT(c, 0xe12afu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE438u)));
    // 0e12b4  dec eax
    X86_AT(c, 0xe12b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e12b5  push eax
    X86_AT(c, 0xe12b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e12b6  push 2
    X86_AT(c, 0xe12b6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e12b8  call 0xfda0b
    X86_AT(c, 0xe12b8u);
    push32(c, 0xe12bdu); f_000fda0b(c); X86_RET(c, 0xe12bdu);
    X86_TICK(c, 17);
    // 0e12bd  mov eax, dword ptr [0xe43c]
    X86_AT(c, 0xe12bdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE43Cu)));
    // 0e12c2  dec eax
    X86_AT(c, 0xe12c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e12c3  push eax
    X86_AT(c, 0xe12c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e12c4  push 3
    X86_AT(c, 0xe12c4u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e12c6  call 0xfda0b
    X86_AT(c, 0xe12c6u);
    push32(c, 0xe12cbu); f_000fda0b(c); X86_RET(c, 0xe12cbu);
    X86_TICK(c, 17);
    // 0e12cb  mov eax, dword ptr [0xe440]
    X86_AT(c, 0xe12cbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE440u)));
    // 0e12d0  dec eax
    X86_AT(c, 0xe12d0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e12d1  push eax
    X86_AT(c, 0xe12d1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e12d2  push 4
    X86_AT(c, 0xe12d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e12d4  call 0xfda0b
    X86_AT(c, 0xe12d4u);
    push32(c, 0xe12d9u); f_000fda0b(c); X86_RET(c, 0xe12d9u);
    X86_TICK(c, 17);
    // 0e12d9  mov eax, dword ptr [0xe444]
    X86_AT(c, 0xe12d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE444u)));
    // 0e12de  dec eax
    X86_AT(c, 0xe12deu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e12df  push eax
    X86_AT(c, 0xe12dfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e12e0  push 5
    X86_AT(c, 0xe12e0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e12e2  call 0xfda0b
    X86_AT(c, 0xe12e2u);
    push32(c, 0xe12e7u); f_000fda0b(c); X86_RET(c, 0xe12e7u);
    X86_TICK(c, 11);
    // 0e12e7  add esp, 0x20
    X86_AT(c, 0xe12e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e12ea  push 1
    X86_AT(c, 0xe12eau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e12ec  call 0xfe1bb
    X86_AT(c, 0xe12ecu);
    push32(c, 0xe12f1u); f_000fe1bb(c); X86_RET(c, 0xe12f1u);
    X86_TICK(c, 17);
    // 0e12f1  push dword ptr [ebp + 8]
    X86_AT(c, 0xe12f1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e12f4  push dword ptr [0xe400]
    X86_AT(c, 0xe12f4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE400u))); push32(c, v); }
    // 0e12fa  call 0xe120c
    X86_AT(c, 0xe12fau);
    push32(c, 0xe12ffu); f_000e120c(c); X86_RET(c, 0xe12ffu);
    X86_TICK(c, 22);
    // 0e12ff  mov dword ptr [0xe414], eax
    X86_AT(c, 0xe12ffu);
    wr32((c.sbase[3] + (uint32_t)(0xE414u)), c.r[0]);
    // 0e1304  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe1304u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e1307  inc eax
    X86_AT(c, 0xe1307u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e1308  push eax
    X86_AT(c, 0xe1308u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1309  push dword ptr [0xe400]
    X86_AT(c, 0xe1309u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE400u))); push32(c, v); }
    // 0e130f  call 0xe120c
    X86_AT(c, 0xe130fu);
    push32(c, 0xe1314u); f_000e120c(c); X86_RET(c, 0xe1314u);
    X86_TICK(c, 42);
    // 0e1314  xchg edi, eax
    X86_AT(c, 0xe1314u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e1315  mov byte ptr [edi], 0xfe
    X86_AT(c, 0xe1315u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFEu);
    // 0e1318  inc edi
    X86_AT(c, 0xe1318u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e1319  inc edi
    X86_AT(c, 0xe1319u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e131a  mov byte ptr [edi], 0
    X86_AT(c, 0xe131au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0e131d  inc edi
    X86_AT(c, 0xe131du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e131e  mov byte ptr [edi], 0
    X86_AT(c, 0xe131eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0e1321  inc edi
    X86_AT(c, 0xe1321u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e1322  push dword ptr [0xe454]
    X86_AT(c, 0xe1322u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE454u))); push32(c, v); }
    // 0e1328  mov eax, dword ptr [0xe3f8]
    X86_AT(c, 0xe1328u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE3F8u)));
    // 0e132d  add eax, eax
    X86_AT(c, 0xe132du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e132f  push eax
    X86_AT(c, 0xe132fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1330  push dword ptr [0xe400]
    X86_AT(c, 0xe1330u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE400u))); push32(c, v); }
    // 0e1336  call 0xfe0df
    X86_AT(c, 0xe1336u);
    push32(c, 0xe133bu); f_000fe0df(c); X86_RET(c, 0xe133bu);
    X86_TICK(c, 24);
    // 0e133b  sub eax, eax
    X86_AT(c, 0xe133bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e133d  add esp, 0x20
    X86_AT(c, 0xe133du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e1340  pop edi
    X86_AT(c, 0xe1340u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1341  leave 
    X86_AT(c, 0xe1341u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1342  ret 
    X86_AT(c, 0xe1342u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1238u, "ran off the end of a function");
}
void f_000e1344(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0e1344  push edi
    X86_AT(c, 0xe1344u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1345  cmp dword ptr [0xe414], 0
    X86_AT(c, 0xe1345u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE414u))), 0x0u, 0, 4);
    // 0e134c  je 0xe1379
    X86_AT(c, 0xe134cu);
    if (x86_cc(c, 4)) { goto L_e1379; }
    X86_TICK(c, 7);
    // 0e134e  call 0xfe11f
    X86_AT(c, 0xe134eu);
    push32(c, 0xe1353u); f_000fe11f(c); X86_RET(c, 0xe1353u);
    X86_TICK(c, 11);
    // 0e1353  cmp eax, dword ptr [0xe414]
    X86_AT(c, 0xe1353u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xE414u))), 0, 4);
    // 0e1359  jbe 0xe1379
    X86_AT(c, 0xe1359u);
    if (x86_cc(c, 6)) { goto L_e1379; }
    X86_TICK(c, 4);
    // 0e135b  mov edi, dword ptr [0xe400]
    X86_AT(c, 0xe135bu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xE400u)));
L_e1361:
    X86_TICK(c, 11);
    // 0e1361  cmp edi, dword ptr [0xe414]
    X86_AT(c, 0xe1361u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xE414u))), 0, 4);
    // 0e1367  jae 0xe136f
    X86_AT(c, 0xe1367u);
    if (x86_cc(c, 3)) { goto L_e136f; }
    X86_TICK(c, 11);
    // 0e1369  mov byte ptr [edi], 0xff
    X86_AT(c, 0xe1369u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFu);
    // 0e136c  inc edi
    X86_AT(c, 0xe136cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e136d  jmp 0xe1361
    X86_AT(c, 0xe136du);
    X86_POLL(c, 0xe1361u); goto L_e1361;
L_e136f:
    X86_TICK(c, 2);
    // 0e136f  mov dword ptr [0xe414], 0
    X86_AT(c, 0xe136fu);
    wr32((c.sbase[3] + (uint32_t)(0xE414u)), 0x0u);
L_e1379:
    X86_TICK(c, 14);
    // 0e1379  pop edi
    X86_AT(c, 0xe1379u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e137a  ret 
    X86_AT(c, 0xe137au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1344u, "ran off the end of a function");
}
void f_000e137c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e137c  call 0xfe0fe
    X86_AT(c, 0xe137cu);
    push32(c, 0xe1381u); f_000fe0fe(c); X86_RET(c, 0xe1381u);
    X86_TICK(c, 12);
    // 0e1381  sub eax, eax
    X86_AT(c, 0xe1381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1383  ret 
    X86_AT(c, 0xe1383u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe137cu, "ran off the end of a function");
}
void f_000e13c4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e13c4  push 0xffffffff
    X86_AT(c, 0xe13c4u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e13c6  call 0xfdbbd
    X86_AT(c, 0xe13c6u);
    push32(c, 0xe13cbu); f_000fdbbd(c); X86_RET(c, 0xe13cbu);
    X86_TICK(c, 9);
    // 0e13cb  push 1
    X86_AT(c, 0xe13cbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e13cd  call 0xfdb93
    X86_AT(c, 0xe13cdu);
    push32(c, 0xe13d2u); f_000fdb93(c); X86_RET(c, 0xe13d2u);
    X86_TICK(c, 14);
    // 0e13d2  sub eax, eax
    X86_AT(c, 0xe13d2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e13d4  add esp, 8
    X86_AT(c, 0xe13d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e13d7  ret 
    X86_AT(c, 0xe13d7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe13c4u, "ran off the end of a function");
}
void f_000e13d8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e13d8  push ebp
    X86_AT(c, 0xe13d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e13d9  mov ebp, esp
    X86_AT(c, 0xe13d9u);
    c.r[5] = c.r[4];
    // 0e13db  push ebx
    X86_AT(c, 0xe13dbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e13dc  push esi
    X86_AT(c, 0xe13dcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e13dd  push edi
    X86_AT(c, 0xe13ddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e13de  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe13deu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e13e1  push 0x106e
    X86_AT(c, 0xe13e1u);
    { uint32_t v = 0x106Eu; push32(c, v); }
    // 0e13e6  push dword ptr [ebp + 8]
    X86_AT(c, 0xe13e6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e13e9  call 0x100f34
    X86_AT(c, 0xe13e9u);
    push32(c, 0xe13eeu); f_00100f34(c); X86_RET(c, 0xe13eeu);
    X86_TICK(c, 12);
    // 0e13ee  add esp, 8
    X86_AT(c, 0xe13eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e13f1  xchg esi, eax
    X86_AT(c, 0xe13f1u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e13f2  and esi, esi
    X86_AT(c, 0xe13f2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e13f4  jne 0xe1407
    X86_AT(c, 0xe13f4u);
    if (x86_cc(c, 5)) { goto L_e1407; }
    X86_TICK(c, 9);
    // 0e13f6  push 0x1074
    X86_AT(c, 0xe13f6u);
    { uint32_t v = 0x1074u; push32(c, v); }
    // 0e13fb  call 0xe75f8
    X86_AT(c, 0xe13fbu);
    push32(c, 0xe1400u); f_000e75f8(c); X86_RET(c, 0xe1400u);
    X86_TICK(c, 9);
    // 0e1400  mov eax, 1
    X86_AT(c, 0xe1400u);
    c.r[0] = 0x1u;
    // 0e1405  jmp 0xe1454
    X86_AT(c, 0xe1405u);
    goto L_e1454;
L_e1407:
    X86_TICK(c, 12);
    // 0e1407  cmp dword ptr [ebp + 0x10], 0x20
    X86_AT(c, 0xe1407u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x20u, 0, 4);
    // 0e140b  jl 0xe143f
    X86_AT(c, 0xe140bu);
    if (x86_cc(c, 12)) { goto L_e143f; }
    X86_TICK(c, 15);
    // 0e140d  push esi
    X86_AT(c, 0xe140du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e140e  push 0x20
    X86_AT(c, 0xe140eu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e1410  push 1
    X86_AT(c, 0xe1410u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1412  push edi
    X86_AT(c, 0xe1412u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1413  call 0x100c58
    X86_AT(c, 0xe1413u);
    push32(c, 0xe1418u); f_00100c58(c); X86_RET(c, 0xe1418u);
    X86_TICK(c, 9);
    // 0e1418  add esp, 0x10
    X86_AT(c, 0xe1418u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e141b  cmp eax, 0x20
    X86_AT(c, 0xe141bu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0e141e  jl 0xe143f
    X86_AT(c, 0xe141eu);
    if (x86_cc(c, 12)) { goto L_e143f; }
    X86_TICK(c, 17);
    // 0e1420  mov ebx, dword ptr [edi + 0xc]
    X86_AT(c, 0xe1420u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0e1423  lea eax, [ebx + 0x20]
    X86_AT(c, 0xe1423u);
    c.r[0] = (uint32_t)(c.r[3] + 0x20u);
    // 0e1426  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe1426u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0e1429  jg 0xe143f
    X86_AT(c, 0xe1429u);
    if (x86_cc(c, 15)) { goto L_e143f; }
    X86_TICK(c, 17);
    // 0e142b  push esi
    X86_AT(c, 0xe142bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e142c  push ebx
    X86_AT(c, 0xe142cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e142d  push 1
    X86_AT(c, 0xe142du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e142f  lea eax, [edi + 0x20]
    X86_AT(c, 0xe142fu);
    c.r[0] = (uint32_t)(c.r[7] + 0x20u);
    // 0e1432  push eax
    X86_AT(c, 0xe1432u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1433  call 0x100c58
    X86_AT(c, 0xe1433u);
    push32(c, 0xe1438u); f_00100c58(c); X86_RET(c, 0xe1438u);
    X86_TICK(c, 9);
    // 0e1438  add esp, 0x10
    X86_AT(c, 0xe1438u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e143b  cmp ebx, eax
    X86_AT(c, 0xe143bu);
    (void)x86_sub(c, c.r[3], c.r[0], 0, 4);
    // 0e143d  jle 0xe144c
    X86_AT(c, 0xe143du);
    if (x86_cc(c, 14)) { goto L_e144c; }
L_e143f:
    X86_TICK(c, 9);
    // 0e143f  push esi
    X86_AT(c, 0xe143fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e1440  call 0x101430
    X86_AT(c, 0xe1440u);
    push32(c, 0xe1445u); f_00101430(c); X86_RET(c, 0xe1445u);
    X86_TICK(c, 9);
    // 0e1445  mov eax, 2
    X86_AT(c, 0xe1445u);
    c.r[0] = 0x2u;
    // 0e144a  jmp 0xe1454
    X86_AT(c, 0xe144au);
    goto L_e1454;
L_e144c:
    X86_TICK(c, 9);
    // 0e144c  push esi
    X86_AT(c, 0xe144cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e144d  call 0x101430
    X86_AT(c, 0xe144du);
    push32(c, 0xe1452u); f_00101430(c); X86_RET(c, 0xe1452u);
    X86_TICK(c, 2);
    // 0e1452  sub eax, eax
    X86_AT(c, 0xe1452u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e1454:
    X86_TICK(c, 30);
    // 0e1454  add esp, 4
    X86_AT(c, 0xe1454u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1457  pop edi
    X86_AT(c, 0xe1457u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1458  pop esi
    X86_AT(c, 0xe1458u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e1459  pop ebx
    X86_AT(c, 0xe1459u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e145a  leave 
    X86_AT(c, 0xe145au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e145b  ret 
    X86_AT(c, 0xe145bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe13d8u, "ran off the end of a function");
}
void f_000e15e8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e15e8  push 0x47
    X86_AT(c, 0xe15e8u);
    { uint32_t v = 0x47u; push32(c, v); }
    // 0e15ea  call 0xfdc59
    X86_AT(c, 0xe15eau);
    push32(c, 0xe15efu); f_000fdc59(c); X86_RET(c, 0xe15efu);
    X86_TICK(c, 14);
    // 0e15ef  sub eax, eax
    X86_AT(c, 0xe15efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e15f1  add esp, 4
    X86_AT(c, 0xe15f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e15f4  ret 
    X86_AT(c, 0xe15f4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe15e8u, "ran off the end of a function");
}
void f_000e15f8(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e15f8  push ebx
    X86_AT(c, 0xe15f8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e15f9  push esi
    X86_AT(c, 0xe15f9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e15fa  push edi
    X86_AT(c, 0xe15fau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e15fb  cmp dword ptr [0xe3fc], 0
    X86_AT(c, 0xe15fbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE3FCu))), 0x0u, 0, 4);
    // 0e1602  jne 0xe1612
    X86_AT(c, 0xe1602u);
    if (x86_cc(c, 5)) { goto L_e1612; }
    X86_TICK(c, 11);
    // 0e1604  mov dword ptr [0xe3fc], 1
    X86_AT(c, 0xe1604u);
    wr32((c.sbase[3] + (uint32_t)(0xE3FCu)), 0x1u);
    // 0e160e  sub esi, esi
    X86_AT(c, 0xe160eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e1610  jmp 0xe1621
    X86_AT(c, 0xe1610u);
    goto L_e1621;
L_e1612:
    X86_TICK(c, 4);
    // 0e1612  mov dword ptr [0xe3fc], 0
    X86_AT(c, 0xe1612u);
    wr32((c.sbase[3] + (uint32_t)(0xE3FCu)), 0x0u);
    // 0e161c  mov esi, 1
    X86_AT(c, 0xe161cu);
    c.r[6] = 0x1u;
L_e1621:
    X86_TICK(c, 8);
    // 0e1621  mov eax, dword ptr [0xe3fc]
    X86_AT(c, 0xe1621u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE3FCu)));
    // 0e1626  mov edi, dword ptr [eax*4 + 0xe400]
    X86_AT(c, 0xe1626u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xE400u)));
L_e162d:
    X86_TICK(c, 14);
    // 0e162d  mov eax, 0xe3f4
    X86_AT(c, 0xe162du);
    c.r[0] = 0xE3F4u;
    // 0e1632  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0xe1632u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 0e1636  jne 0xe16a1
    X86_AT(c, 0xe1636u);
    if (x86_cc(c, 5)) { goto L_e16a1; }
    X86_TICK(c, 15);
    // 0e1638  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0xe1638u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0e163b  cmp edi, dword ptr [eax + edx*4 + 0x14]
    X86_AT(c, 0xe163bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x14u))), 0, 4);
    // 0e163f  ja 0xe16a1
    X86_AT(c, 0xe163fu);
    if (x86_cc(c, 7)) { goto L_e16a1; }
    X86_TICK(c, 18);
    // 0e1641  push dword ptr [eax + 0x68]
    X86_AT(c, 0xe1641u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 0e1644  push 6
    X86_AT(c, 0xe1644u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e1646  push 1
    X86_AT(c, 0xe1646u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1648  push edi
    X86_AT(c, 0xe1648u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1649  call 0x100c58
    X86_AT(c, 0xe1649u);
    push32(c, 0xe164eu); f_00100c58(c); X86_RET(c, 0xe164eu);
    X86_TICK(c, 9);
    // 0e164e  add esp, 0x10
    X86_AT(c, 0xe164eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e1651  cmp eax, 6
    X86_AT(c, 0xe1651u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 0e1654  jge 0xe1675
    X86_AT(c, 0xe1654u);
    if (x86_cc(c, 13)) { goto L_e1675; }
    X86_TICK(c, 12);
    // 0e1656  push dword ptr [0xe45c]
    X86_AT(c, 0xe1656u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e165c  call 0x101430
    X86_AT(c, 0xe165cu);
    push32(c, 0xe1661u); f_00101430(c); X86_RET(c, 0xe1661u);
    X86_TICK(c, 13);
    // 0e1661  mov dword ptr [0xe45c], 0
    X86_AT(c, 0xe1661u);
    wr32((c.sbase[3] + (uint32_t)(0xE45Cu)), 0x0u);
    // 0e166b  mov eax, 2
    X86_AT(c, 0xe166bu);
    c.r[0] = 0x2u;
    // 0e1670  add esp, 4
    X86_AT(c, 0xe1670u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1673  jmp 0xe16ce
    X86_AT(c, 0xe1673u);
    goto L_e16ce;
L_e1675:
    X86_TICK(c, 12);
    // 0e1675  cmp byte ptr [edi], 0xfe
    X86_AT(c, 0xe1675u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xFEu, 0, 1);
    // 0e1678  jne 0xe169c
    X86_AT(c, 0xe1678u);
    if (x86_cc(c, 5)) { goto L_e169c; }
    X86_TICK(c, 14);
    // 0e167a  mov dword ptr [0xe458], 1
    X86_AT(c, 0xe167au);
    wr32((c.sbase[3] + (uint32_t)(0xE458u)), 0x1u);
    // 0e1684  push dword ptr [0xe45c]
    X86_AT(c, 0xe1684u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE45Cu))); push32(c, v); }
    // 0e168a  call 0x101430
    X86_AT(c, 0xe168au);
    push32(c, 0xe168fu); f_00101430(c); X86_RET(c, 0xe168fu);
    X86_TICK(c, 4);
    // 0e168f  mov dword ptr [0xe45c], 0
    X86_AT(c, 0xe168fu);
    wr32((c.sbase[3] + (uint32_t)(0xE45Cu)), 0x0u);
    // 0e1699  add esp, 4
    X86_AT(c, 0xe1699u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e169c:
    X86_TICK(c, 9);
    // 0e169c  add edi, 6
    X86_AT(c, 0xe169cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0e169f  jmp 0xe162d
    X86_AT(c, 0xe169fu);
    X86_POLL(c, 0xe162du); goto L_e162d;
L_e16a1:
    X86_TICK(c, 18);
    // 0e16a1  mov eax, 0xe3f4
    X86_AT(c, 0xe16a1u);
    c.r[0] = 0xE3F4u;
    // 0e16a6  mov bl, byte ptr [eax + 0x1c]
    X86_AT(c, 0xe16a6u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu))));
    // 0e16a9  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0xe16a9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 0e16ad  jne 0xe16be
    X86_AT(c, 0xe16adu);
    if (x86_cc(c, 5)) { goto L_e16be; }
    X86_TICK(c, 16);
    // 0e16af  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0xe16afu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0e16b2  mov edx, dword ptr [eax + edx*4 + 0x14]
    X86_AT(c, 0xe16b2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x14u)));
    // 0e16b6  mov cl, byte ptr [edx]
    X86_AT(c, 0xe16b6u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0e16b8  mov byte ptr [eax + 0x1c], cl
    X86_AT(c, 0xe16b8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu)), g8(c, 1));
    // 0e16bb  mov byte ptr [edx], 0xfd
    X86_AT(c, 0xe16bbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0xFDu);
L_e16be:
    X86_TICK(c, 13);
    // 0e16be  mov eax, dword ptr [esi*4 + 0xe408]
    X86_AT(c, 0xe16beu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xE408u)));
    // 0e16c5  mov byte ptr [eax], bl
    X86_AT(c, 0xe16c5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), g8(c, 3));
    // 0e16c7  call 0xfe114
    X86_AT(c, 0xe16c7u);
    push32(c, 0xe16ccu); f_000fe114(c); X86_RET(c, 0xe16ccu);
    X86_TICK(c, 2);
    // 0e16cc  sub eax, eax
    X86_AT(c, 0xe16ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e16ce:
    X86_TICK(c, 22);
    // 0e16ce  pop edi
    X86_AT(c, 0xe16ceu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e16cf  pop esi
    X86_AT(c, 0xe16cfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e16d0  pop ebx
    X86_AT(c, 0xe16d0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e16d1  ret 
    X86_AT(c, 0xe16d1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe15f8u, "ran off the end of a function");
}
}

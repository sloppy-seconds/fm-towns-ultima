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
void f_000c46c4(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0c46c4  push ebp
    X86_AT(c, 0xc46c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c46c5  mov ebp, esp
    X86_AT(c, 0xc46c5u);
    c.r[5] = c.r[4];
    // 0c46c7  push ebx
    X86_AT(c, 0xc46c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c46c8  push edi
    X86_AT(c, 0xc46c8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c46c9  mov bl, byte ptr [ebp + 0xc]
    X86_AT(c, 0xc46c9u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0c46cc  mov edi, 0xffffffff
    X86_AT(c, 0xc46ccu);
    c.r[7] = 0xFFFFFFFFu;
    // 0c46d1  cmp byte ptr [ebp + 8], 0
    X86_AT(c, 0xc46d1u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 1);
    // 0c46d5  jne 0xc46de
    X86_AT(c, 0xc46d5u);
    if (x86_cc(c, 5)) { goto L_c46de; }
    X86_TICK(c, 9);
    // 0c46d7  sub eax, eax
    X86_AT(c, 0xc46d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c46d9  jmp 0xc483c
    X86_AT(c, 0xc46d9u);
    goto L_c483c;
L_c46de:
    X86_TICK(c, 12);
    // 0c46de  cmp byte ptr [ebp + 8], 2
    X86_AT(c, 0xc46deu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x2u, 0, 1);
    // 0c46e2  jne 0xc46e9
    X86_AT(c, 0xc46e2u);
    if (x86_cc(c, 5)) { goto L_c46e9; }
    X86_TICK(c, 2);
    // 0c46e4  mov edi, 0x100
    X86_AT(c, 0xc46e4u);
    c.r[7] = 0x100u;
L_c46e9:
    X86_TICK(c, 12);
    // 0c46e9  cmp byte ptr [ebp + 8], 0x10
    X86_AT(c, 0xc46e9u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x10u, 0, 1);
    // 0c46ed  jne 0xc46f4
    X86_AT(c, 0xc46edu);
    if (x86_cc(c, 5)) { goto L_c46f4; }
    X86_TICK(c, 2);
    // 0c46ef  mov edi, 0x102
    X86_AT(c, 0xc46efu);
    c.r[7] = 0x102u;
L_c46f4:
    X86_TICK(c, 12);
    // 0c46f4  cmp byte ptr [ebp + 8], 0x22
    X86_AT(c, 0xc46f4u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x22u, 0, 1);
    // 0c46f8  jne 0xc46ff
    X86_AT(c, 0xc46f8u);
    if (x86_cc(c, 5)) { goto L_c46ff; }
    X86_TICK(c, 2);
    // 0c46fa  mov edi, 0x104
    X86_AT(c, 0xc46fau);
    c.r[7] = 0x104u;
L_c46ff:
    X86_TICK(c, 12);
    // 0c46ff  cmp byte ptr [ebp + 8], 0x23
    X86_AT(c, 0xc46ffu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x23u, 0, 1);
    // 0c4703  jne 0xc470a
    X86_AT(c, 0xc4703u);
    if (x86_cc(c, 5)) { goto L_c470a; }
    X86_TICK(c, 2);
    // 0c4705  mov edi, 0x108
    X86_AT(c, 0xc4705u);
    c.r[7] = 0x108u;
L_c470a:
    X86_TICK(c, 12);
    // 0c470a  cmp byte ptr [ebp + 8], 0x80
    X86_AT(c, 0xc470au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x80u, 0, 1);
    // 0c470e  jne 0xc4785
    X86_AT(c, 0xc470eu);
    if (x86_cc(c, 5)) { goto L_c4785; }
    X86_TICK(c, 14);
    // 0c4714  movzx ebx, bl
    X86_AT(c, 0xc4714u);
    c.r[3] = g8(c, 3);
    // 0c4717  mov eax, ebx
    X86_AT(c, 0xc4717u);
    c.r[0] = c.r[3];
    // 0c4719  and eax, 0x80
    X86_AT(c, 0xc4719u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x80u, 4); }
    // 0c471e  cmp eax, 0x80
    X86_AT(c, 0xc471eu);
    (void)x86_sub(c, c.r[0], 0x80u, 0, 4);
    // 0c4723  jne 0xc472a
    X86_AT(c, 0xc4723u);
    if (x86_cc(c, 5)) { goto L_c472a; }
    X86_TICK(c, 2);
    // 0c4725  mov edi, 0x80
    X86_AT(c, 0xc4725u);
    c.r[7] = 0x80u;
L_c472a:
    X86_TICK(c, 11);
    // 0c472a  mov eax, ebx
    X86_AT(c, 0xc472au);
    c.r[0] = c.r[3];
    // 0c472c  and al, 0x40
    X86_AT(c, 0xc472cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x40u, 1)); }
    // 0c472e  cmp al, 0x40
    X86_AT(c, 0xc472eu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0c4730  jne 0xc4737
    X86_AT(c, 0xc4730u);
    if (x86_cc(c, 5)) { goto L_c4737; }
    X86_TICK(c, 2);
    // 0c4732  mov edi, 0x40
    X86_AT(c, 0xc4732u);
    c.r[7] = 0x40u;
L_c4737:
    X86_TICK(c, 11);
    // 0c4737  mov eax, ebx
    X86_AT(c, 0xc4737u);
    c.r[0] = c.r[3];
    // 0c4739  and al, 0x20
    X86_AT(c, 0xc4739u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x20u, 1)); }
    // 0c473b  cmp al, 0x20
    X86_AT(c, 0xc473bu);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0c473d  jne 0xc4744
    X86_AT(c, 0xc473du);
    if (x86_cc(c, 5)) { goto L_c4744; }
    X86_TICK(c, 2);
    // 0c473f  mov edi, 0x20
    X86_AT(c, 0xc473fu);
    c.r[7] = 0x20u;
L_c4744:
    X86_TICK(c, 11);
    // 0c4744  mov eax, ebx
    X86_AT(c, 0xc4744u);
    c.r[0] = c.r[3];
    // 0c4746  and al, 0x10
    X86_AT(c, 0xc4746u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x10u, 1)); }
    // 0c4748  cmp al, 0x10
    X86_AT(c, 0xc4748u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 0c474a  jne 0xc4751
    X86_AT(c, 0xc474au);
    if (x86_cc(c, 5)) { goto L_c4751; }
    X86_TICK(c, 2);
    // 0c474c  mov edi, 0x10
    X86_AT(c, 0xc474cu);
    c.r[7] = 0x10u;
L_c4751:
    X86_TICK(c, 11);
    // 0c4751  mov eax, ebx
    X86_AT(c, 0xc4751u);
    c.r[0] = c.r[3];
    // 0c4753  and al, 8
    X86_AT(c, 0xc4753u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x8u, 1)); }
    // 0c4755  cmp al, 8
    X86_AT(c, 0xc4755u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 0c4757  jne 0xc475e
    X86_AT(c, 0xc4757u);
    if (x86_cc(c, 5)) { goto L_c475e; }
    X86_TICK(c, 2);
    // 0c4759  mov edi, 8
    X86_AT(c, 0xc4759u);
    c.r[7] = 0x8u;
L_c475e:
    X86_TICK(c, 11);
    // 0c475e  mov eax, ebx
    X86_AT(c, 0xc475eu);
    c.r[0] = c.r[3];
    // 0c4760  and al, 4
    X86_AT(c, 0xc4760u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x4u, 1)); }
    // 0c4762  cmp al, 4
    X86_AT(c, 0xc4762u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 0c4764  jne 0xc476b
    X86_AT(c, 0xc4764u);
    if (x86_cc(c, 5)) { goto L_c476b; }
    X86_TICK(c, 2);
    // 0c4766  mov edi, 4
    X86_AT(c, 0xc4766u);
    c.r[7] = 0x4u;
L_c476b:
    X86_TICK(c, 11);
    // 0c476b  mov eax, ebx
    X86_AT(c, 0xc476bu);
    c.r[0] = c.r[3];
    // 0c476d  and al, 2
    X86_AT(c, 0xc476du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x2u, 1)); }
    // 0c476f  cmp al, 2
    X86_AT(c, 0xc476fu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0c4771  jne 0xc4778
    X86_AT(c, 0xc4771u);
    if (x86_cc(c, 5)) { goto L_c4778; }
    X86_TICK(c, 2);
    // 0c4773  mov edi, 2
    X86_AT(c, 0xc4773u);
    c.r[7] = 0x2u;
L_c4778:
    X86_TICK(c, 11);
    // 0c4778  mov eax, ebx
    X86_AT(c, 0xc4778u);
    c.r[0] = c.r[3];
    // 0c477a  and al, 1
    X86_AT(c, 0xc477au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 0c477c  dec al
    X86_AT(c, 0xc477cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0c477e  jne 0xc4785
    X86_AT(c, 0xc477eu);
    if (x86_cc(c, 5)) { goto L_c4785; }
    X86_TICK(c, 2);
    // 0c4780  mov edi, 1
    X86_AT(c, 0xc4780u);
    c.r[7] = 0x1u;
L_c4785:
    X86_TICK(c, 9);
    // 0c4785  mov edx, edi
    X86_AT(c, 0xc4785u);
    c.r[2] = c.r[7];
    // 0c4787  cmp edx, 0x20
    X86_AT(c, 0xc4787u);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 0c478a  ja 0xc47e7
    X86_AT(c, 0xc478au);
    if (x86_cc(c, 7)) { goto L_c47e7; }
    X86_TICK(c, 7);
    // 0c478c  cmp edx, 0x20
    X86_AT(c, 0xc478cu);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 0c478f  je 0xc4826
    X86_AT(c, 0xc478fu);
    if (x86_cc(c, 4)) { goto L_c4826; }
    X86_TICK(c, 9);
    // 0c4795  dec edx
    X86_AT(c, 0xc4795u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c4796  cmp edx, 0xf
    X86_AT(c, 0xc4796u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0c4799  ja 0xc482d
    X86_AT(c, 0xc4799u);
    if (x86_cc(c, 7)) { goto L_c482d; }
    X86_TICK(c, 7);
    // 0c479f  jmp dword ptr cs:[edx*4 + 0xc47a7]
    X86_AT(c, 0xc479fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC47A7u)));
      switch (t) {
      case 0xc4811u: goto L_c4811;
      case 0xc4818u: goto L_c4818;
      case 0xc481fu: goto L_c481f;
      case 0xc482du: goto L_c482d;
      case 0xc483au: goto L_c483a;
      default: x86_jump(c, t); return; } }
L_c47e7:
    X86_TICK(c, 7);
    // 0c47e7  cmp edx, 0x80
    X86_AT(c, 0xc47e7u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0c47ed  je 0xc483a
    X86_AT(c, 0xc47edu);
    if (x86_cc(c, 4)) { goto L_c483a; }
    X86_TICK(c, 7);
    // 0c47ef  cmp edx, 0x100
    X86_AT(c, 0xc47efu);
    (void)x86_sub(c, c.r[2], 0x100u, 0, 4);
    // 0c47f5  je 0xc483a
    X86_AT(c, 0xc47f5u);
    if (x86_cc(c, 4)) { goto L_c483a; }
    X86_TICK(c, 7);
    // 0c47f7  cmp edx, 0x102
    X86_AT(c, 0xc47f7u);
    (void)x86_sub(c, c.r[2], 0x102u, 0, 4);
    // 0c47fd  je 0xc483a
    X86_AT(c, 0xc47fdu);
    if (x86_cc(c, 4)) { goto L_c483a; }
    X86_TICK(c, 7);
    // 0c47ff  cmp edx, 0x104
    X86_AT(c, 0xc47ffu);
    (void)x86_sub(c, c.r[2], 0x104u, 0, 4);
    // 0c4805  je 0xc483a
    X86_AT(c, 0xc4805u);
    if (x86_cc(c, 4)) { goto L_c483a; }
    X86_TICK(c, 7);
    // 0c4807  cmp edx, 0x108
    X86_AT(c, 0xc4807u);
    (void)x86_sub(c, c.r[2], 0x108u, 0, 4);
    // 0c480d  je 0xc483a
    X86_AT(c, 0xc480du);
    if (x86_cc(c, 4)) { goto L_c483a; }
    X86_TICK(c, 7);
    // 0c480f  jmp 0xc482d
    X86_AT(c, 0xc480fu);
    goto L_c482d;
L_c4811:
    X86_TICK(c, 9);
    // 0c4811  push 0xe74
    X86_AT(c, 0xc4811u);
    { uint32_t v = 0xE74u; push32(c, v); }
    // 0c4816  jmp 0xc4832
    X86_AT(c, 0xc4816u);
    goto L_c4832;
L_c4818:
    X86_TICK(c, 9);
    // 0c4818  push 0xeb0
    X86_AT(c, 0xc4818u);
    { uint32_t v = 0xEB0u; push32(c, v); }
    // 0c481d  jmp 0xc4832
    X86_AT(c, 0xc481du);
    goto L_c4832;
L_c481f:
    X86_TICK(c, 9);
    // 0c481f  push 0xeec
    X86_AT(c, 0xc481fu);
    { uint32_t v = 0xEECu; push32(c, v); }
    // 0c4824  jmp 0xc4832
    X86_AT(c, 0xc4824u);
    goto L_c4832;
L_c4826:
    X86_TICK(c, 9);
    // 0c4826  push 0xf20
    X86_AT(c, 0xc4826u);
    { uint32_t v = 0xF20u; push32(c, v); }
    // 0c482b  jmp 0xc4832
    X86_AT(c, 0xc482bu);
    goto L_c4832;
L_c482d:
    X86_TICK(c, 2);
    // 0c482d  push 0xf64
    X86_AT(c, 0xc482du);
    { uint32_t v = 0xF64u; push32(c, v); }
L_c4832:
    X86_TICK(c, 7);
    // 0c4832  call 0xcad60
    X86_AT(c, 0xc4832u);
    push32(c, 0xc4837u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xc4837u);
    X86_TICK(c, 2);
    // 0c4837  add esp, 4
    X86_AT(c, 0xc4837u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c483a:
    X86_TICK(c, 2);
    // 0c483a  mov eax, edi
    X86_AT(c, 0xc483au);
    c.r[0] = c.r[7];
L_c483c:
    X86_TICK(c, 24);
    // 0c483c  pop edi
    X86_AT(c, 0xc483cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c483d  pop ebx
    X86_AT(c, 0xc483du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c483e  leave 
    X86_AT(c, 0xc483eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c483f  ret 
    X86_AT(c, 0xc483fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc46c4u, "ran off the end of a function");
}
void f_000c4840(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c4840  push 0xf9c
    X86_AT(c, 0xc4840u);
    { uint32_t v = 0xF9Cu; push32(c, v); }
    // 0c4845  call 0xcad60
    X86_AT(c, 0xc4845u);
    push32(c, 0xc484au); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xc484au);
    X86_TICK(c, 14);
    // 0c484a  mov eax, 0xffffffff
    X86_AT(c, 0xc484au);
    c.r[0] = 0xFFFFFFFFu;
    // 0c484f  add esp, 4
    X86_AT(c, 0xc484fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4852  ret 
    X86_AT(c, 0xc4852u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4840u, "ran off the end of a function");
}
void f_000c4854(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0c4854  mov dword ptr [0xe30], 0x250f
    X86_AT(c, 0xc4854u);
    wr32((c.sbase[3] + (uint32_t)(0xE30u)), 0x250Fu);
    // 0c485e  mov dword ptr [0xe34], 0xba0
    X86_AT(c, 0xc485eu);
    wr32((c.sbase[3] + (uint32_t)(0xE34u)), 0xBA0u);
    // 0c4868  mov dword ptr [0xe38], 0x12f
    X86_AT(c, 0xc4868u);
    wr32((c.sbase[3] + (uint32_t)(0xE38u)), 0x12Fu);
    // 0c4872  push 0xe4c
    X86_AT(c, 0xc4872u);
    { uint32_t v = 0xE4Cu; push32(c, v); }
    // 0c4877  push 0xe30
    X86_AT(c, 0xc4877u);
    { uint32_t v = 0xE30u; push32(c, v); }
    // 0c487c  call 0xe84e6
    X86_AT(c, 0xc487cu);
    push32(c, 0xc4881u); x86_call_known(c, 0xe84e6u, f_000e84e6); X86_RET(c, 0xc4881u);
    X86_TICK(c, 14);
    // 0c4881  add esp, 8
    X86_AT(c, 0xc4881u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c4884  cmp dword ptr [0xe64], 0
    X86_AT(c, 0xc4884u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE64u))), 0x0u, 0, 4);
    // 0c488b  jne 0xc48f0
    X86_AT(c, 0xc488bu);
    if (x86_cc(c, 5)) { goto L_c48f0; }
    X86_TICK(c, 38);
    // 0c488d  mov eax, dword ptr [0xe54]
    X86_AT(c, 0xc488du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE54u)));
    // 0c4892  and eax, 0xffff
    X86_AT(c, 0xc4892u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0c4897  mov dword ptr [0xe24], eax
    X86_AT(c, 0xc4897u);
    wr32((c.sbase[3] + (uint32_t)(0xE24u)), c.r[0]);
    // 0c489c  mov eax, dword ptr [0xe54]
    X86_AT(c, 0xc489cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE54u)));
    // 0c48a1  shr eax, 0x10
    X86_AT(c, 0xc48a1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0c48a4  and eax, 0xffff
    X86_AT(c, 0xc48a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0c48a9  mov dword ptr [0xe20], eax
    X86_AT(c, 0xc48a9u);
    wr32((c.sbase[3] + (uint32_t)(0xE20u)), c.r[0]);
    // 0c48ae  mov dword ptr [0xe30], 0x250f
    X86_AT(c, 0xc48aeu);
    wr32((c.sbase[3] + (uint32_t)(0xE30u)), 0x250Fu);
    // 0c48b8  mov word ptr [0xe34], 0x93
    X86_AT(c, 0xc48b8u);
    wr16((c.sbase[3] + (uint32_t)(0xE34u)), 0x93u);
    // 0c48c1  mov dword ptr [0xe34], 0xcd0
    X86_AT(c, 0xc48c1u);
    wr32((c.sbase[3] + (uint32_t)(0xE34u)), 0xCD0u);
    // 0c48cb  mov dword ptr [0xe38], 0xa
    X86_AT(c, 0xc48cbu);
    wr32((c.sbase[3] + (uint32_t)(0xE38u)), 0xAu);
    // 0c48d5  push 0xe4c
    X86_AT(c, 0xc48d5u);
    { uint32_t v = 0xE4Cu; push32(c, v); }
    // 0c48da  push 0xe30
    X86_AT(c, 0xc48dau);
    { uint32_t v = 0xE30u; push32(c, v); }
    // 0c48df  call 0xe84e6
    X86_AT(c, 0xc48dfu);
    push32(c, 0xc48e4u); x86_call_known(c, 0xe84e6u, f_000e84e6); X86_RET(c, 0xc48e4u);
    X86_TICK(c, 14);
    // 0c48e4  add esp, 8
    X86_AT(c, 0xc48e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c48e7  cmp dword ptr [0xe64], 0
    X86_AT(c, 0xc48e7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE64u))), 0x0u, 0, 4);
    // 0c48ee  je 0xc48f7
    X86_AT(c, 0xc48eeu);
    if (x86_cc(c, 4)) { goto L_c48f7; }
L_c48f0:
    X86_TICK(c, 7);
    // 0c48f0  call 0xc4840
    X86_AT(c, 0xc48f0u);
    push32(c, 0xc48f5u); x86_call_known(c, 0xc4840u, f_000c4840); X86_RET(c, 0xc48f5u);
    X86_TICK(c, 7);
    // 0c48f5  jmp 0xc491a
    X86_AT(c, 0xc48f5u);
    goto L_c491a;
L_c48f7:
    X86_TICK(c, 21);
    // 0c48f7  mov eax, dword ptr [0xe54]
    X86_AT(c, 0xc48f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE54u)));
    // 0c48fc  and eax, 0xffff
    X86_AT(c, 0xc48fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0c4901  mov dword ptr [0xe2c], eax
    X86_AT(c, 0xc4901u);
    wr32((c.sbase[3] + (uint32_t)(0xE2Cu)), c.r[0]);
    // 0c4906  mov eax, dword ptr [0xe54]
    X86_AT(c, 0xc4906u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE54u)));
    // 0c490b  shr eax, 0x10
    X86_AT(c, 0xc490bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0c490e  and eax, 0xffff
    X86_AT(c, 0xc490eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0c4913  mov dword ptr [0xe28], eax
    X86_AT(c, 0xc4913u);
    wr32((c.sbase[3] + (uint32_t)(0xE28u)), c.r[0]);
    // 0c4918  sub eax, eax
    X86_AT(c, 0xc4918u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c491a:
    X86_TICK(c, 10);
    // 0c491a  ret 
    X86_AT(c, 0xc491au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4854u, "ran off the end of a function");
}
void f_000c491c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0c491c  push ebp
    X86_AT(c, 0xc491cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c491d  mov ebp, esp
    X86_AT(c, 0xc491du);
    c.r[5] = c.r[4];
    // 0c491f  push eax
    X86_AT(c, 0xc491fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4920  push ebx
    X86_AT(c, 0xc4920u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c4921  push esi
    X86_AT(c, 0xc4921u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c4922  push edi
    X86_AT(c, 0xc4922u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c4923  cmp dword ptr [0xe1c], 0
    X86_AT(c, 0xc4923u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE1Cu))), 0x0u, 0, 4);
    // 0c492a  jne 0xc4933
    X86_AT(c, 0xc492au);
    if (x86_cc(c, 5)) { goto L_c4933; }
    X86_TICK(c, 9);
    // 0c492c  sub eax, eax
    X86_AT(c, 0xc492cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c492e  jmp 0xc4a3e
    X86_AT(c, 0xc492eu);
    goto L_c4a3e;
L_c4933:
    X86_TICK(c, 35);
    // 0c4933  mov word ptr [0xb90], 0x93
    X86_AT(c, 0xc4933u);
    wr16((c.sbase[3] + (uint32_t)(0xB90u)), 0x93u);
    // 0c493c  mov ax, word ptr [0xe20]
    X86_AT(c, 0xc493cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE20u))));
    // 0c4942  mov word ptr [0xb92], ax
    X86_AT(c, 0xc4942u);
    wr16((c.sbase[3] + (uint32_t)(0xB92u)), (c.r[0] & 0xFFFFu));
    // 0c4948  mov dword ptr [0xb9a], 0x54c0
    X86_AT(c, 0xc4948u);
    wr32((c.sbase[3] + (uint32_t)(0xB9Au)), 0x54C0u);
    // 0c4952  mov word ptr [0xe30], 0x2511
    X86_AT(c, 0xc4952u);
    wr16((c.sbase[3] + (uint32_t)(0xE30u)), 0x2511u);
    // 0c495b  mov byte ptr [0xe39], 0
    X86_AT(c, 0xc495bu);
    wr8((c.sbase[3] + (uint32_t)(0xE39u)), 0x0u);
    // 0c4962  mov byte ptr [0xe38], 0
    X86_AT(c, 0xc4962u);
    wr8((c.sbase[3] + (uint32_t)(0xE38u)), 0x0u);
    // 0c4969  mov dword ptr [0xe3c], 0xb90
    X86_AT(c, 0xc4969u);
    wr32((c.sbase[3] + (uint32_t)(0xE3Cu)), 0xB90u);
    // 0c4973  mov ax, word ptr [0xe24]
    X86_AT(c, 0xc4973u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE24u))));
    // 0c4979  mov word ptr [0xe44], ax
    X86_AT(c, 0xc4979u);
    wr16((c.sbase[3] + (uint32_t)(0xE44u)), (c.r[0] & 0xFFFFu));
    // 0c497f  push 0xe4c
    X86_AT(c, 0xc497fu);
    { uint32_t v = 0xE4Cu; push32(c, v); }
    // 0c4984  push 0xe30
    X86_AT(c, 0xc4984u);
    { uint32_t v = 0xE30u; push32(c, v); }
    // 0c4989  call 0xe84e6
    X86_AT(c, 0xc4989u);
    push32(c, 0xc498eu); x86_call_known(c, 0xe84e6u, f_000e84e6); X86_RET(c, 0xc498eu);
    X86_TICK(c, 19);
    // 0c498e  mov bl, byte ptr [0xe4d]
    X86_AT(c, 0xc498eu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE4Du))));
    // 0c4994  mov al, byte ptr [0xe54]
    X86_AT(c, 0xc4994u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE54u))));
    // 0c4999  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xc4999u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0c499c  add esp, 8
    X86_AT(c, 0xc499cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c499f  and bl, bl
    X86_AT(c, 0xc499fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c49a1  je 0xc49b2
    X86_AT(c, 0xc49a1u);
    if (x86_cc(c, 4)) { goto L_c49b2; }
    X86_TICK(c, 11);
    // 0c49a3  push eax
    X86_AT(c, 0xc49a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c49a4  push ebx
    X86_AT(c, 0xc49a4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c49a5  call 0xc46c4
    X86_AT(c, 0xc49a5u);
    push32(c, 0xc49aau); x86_call_known(c, 0xc46c4u, f_000c46c4); X86_RET(c, 0xc49aau);
    X86_TICK(c, 9);
    // 0c49aa  add esp, 8
    X86_AT(c, 0xc49aau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c49ad  jmp 0xc4a3e
    X86_AT(c, 0xc49adu);
    goto L_c4a3e;
L_c49b2:
    X86_TICK(c, 54);
    // 0c49b2  mov eax, 0xb90
    X86_AT(c, 0xc49b2u);
    c.r[0] = 0xB90u;
    // 0c49b7  movzx edx, byte ptr [eax + 0x10]
    X86_AT(c, 0xc49b7u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x10u)));
    // 0c49bb  mov dword ptr [eax + 0x280], edx
    X86_AT(c, 0xc49bbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x280u)), c.r[2]);
    // 0c49c1  movzx edx, byte ptr [eax + 0x11]
    X86_AT(c, 0xc49c1u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x11u)));
    // 0c49c5  mov dword ptr [eax + 0x284], edx
    X86_AT(c, 0xc49c5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x284u)), c.r[2]);
    // 0c49cb  movzx edx, byte ptr [eax + 0x12]
    X86_AT(c, 0xc49cbu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x12u)));
    // 0c49cf  mov dword ptr [eax + 0x288], edx
    X86_AT(c, 0xc49cfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x288u)), c.r[2]);
    // 0c49d5  dec dword ptr [eax + 0x288]
    X86_AT(c, 0xc49d5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x288u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c49db  mov dl, byte ptr [eax + 0x13]
    X86_AT(c, 0xc49dbu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x13u))));
    // 0c49de  mov byte ptr [eax + 0x275], dl
    X86_AT(c, 0xc49deu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x275u)), g8(c, 2));
    // 0c49e4  mov dl, byte ptr [eax + 0x14]
    X86_AT(c, 0xc49e4u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u))));
    // 0c49e7  mov byte ptr [eax + 0x276], dl
    X86_AT(c, 0xc49e7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x276u)), g8(c, 2));
    // 0c49ed  mov dl, byte ptr [eax + 0x15]
    X86_AT(c, 0xc49edu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x15u))));
    // 0c49f0  mov byte ptr [eax + 0x277], dl
    X86_AT(c, 0xc49f0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x277u)), g8(c, 2));
    // 0c49f6  sub edi, edi
    X86_AT(c, 0xc49f6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c49f8  mov esi, 6
    X86_AT(c, 0xc49f8u);
    c.r[6] = 0x6u;
L_c49fd:
    X86_TICK(c, 7);
    // 0c49fd  cmp edi, 0x63
    X86_AT(c, 0xc49fdu);
    (void)x86_sub(c, c.r[7], 0x63u, 0, 4);
    // 0c4a00  jge 0xc4a37
    X86_AT(c, 0xc4a00u);
    if (x86_cc(c, 13)) { goto L_c4a37; }
    X86_TICK(c, 43);
    // 0c4a02  mov eax, 0xb90
    X86_AT(c, 0xc4a02u);
    c.r[0] = 0xB90u;
    // 0c4a07  lea edx, [edi + edi*2]
    X86_AT(c, 0xc4a07u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c4a0a  mov ecx, esi
    X86_AT(c, 0xc4a0au);
    c.r[1] = c.r[6];
    // 0c4a0c  inc esi
    X86_AT(c, 0xc4a0cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c4a0d  mov cl, byte ptr [eax + ecx*1 + 0x10]
    X86_AT(c, 0xc4a0du);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x10u))));
    // 0c4a11  mov byte ptr [eax + edx*1 + 0x14c], cl
    X86_AT(c, 0xc4a11u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x14Cu)), g8(c, 1));
    // 0c4a18  mov ecx, esi
    X86_AT(c, 0xc4a18u);
    c.r[1] = c.r[6];
    // 0c4a1a  inc esi
    X86_AT(c, 0xc4a1au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c4a1b  mov cl, byte ptr [eax + ecx*1 + 0x10]
    X86_AT(c, 0xc4a1bu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x10u))));
    // 0c4a1f  mov byte ptr [eax + edx*1 + 0x14d], cl
    X86_AT(c, 0xc4a1fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x14Du)), g8(c, 1));
    // 0c4a26  mov ecx, esi
    X86_AT(c, 0xc4a26u);
    c.r[1] = c.r[6];
    // 0c4a28  inc esi
    X86_AT(c, 0xc4a28u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c4a29  mov cl, byte ptr [eax + ecx*1 + 0x10]
    X86_AT(c, 0xc4a29u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x10u))));
    // 0c4a2d  mov byte ptr [eax + edx*1 + 0x14e], cl
    X86_AT(c, 0xc4a2du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x14Eu)), g8(c, 1));
    // 0c4a34  inc edi
    X86_AT(c, 0xc4a34u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c4a35  jmp 0xc49fd
    X86_AT(c, 0xc4a35u);
    X86_POLL(c, 0xc49fdu); goto L_c49fd;
L_c4a37:
    X86_TICK(c, 4);
    // 0c4a37  sub eax, eax
    X86_AT(c, 0xc4a37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c4a39  mov dword ptr [0xe1c], eax
    X86_AT(c, 0xc4a39u);
    wr32((c.sbase[3] + (uint32_t)(0xE1Cu)), c.r[0]);
L_c4a3e:
    X86_TICK(c, 28);
    // 0c4a3e  pop edi
    X86_AT(c, 0xc4a3eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c4a3f  pop esi
    X86_AT(c, 0xc4a3fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c4a40  pop ebx
    X86_AT(c, 0xc4a40u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c4a41  leave 
    X86_AT(c, 0xc4a41u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c4a42  ret 
    X86_AT(c, 0xc4a42u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc491cu, "ran off the end of a function");
}
void f_000c4a3e(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0c4a3e  pop edi
    X86_AT(c, 0xc4a3eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c4a3f  pop esi
    X86_AT(c, 0xc4a3fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c4a40  pop ebx
    X86_AT(c, 0xc4a40u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c4a41  leave 
    X86_AT(c, 0xc4a41u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c4a42  ret 
    X86_AT(c, 0xc4a42u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4a3eu, "ran off the end of a function");
}
void f_000c4a44(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0c4a44  push ebp
    X86_AT(c, 0xc4a44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c4a45  mov ebp, esp
    X86_AT(c, 0xc4a45u);
    c.r[5] = c.r[4];
    // 0c4a47  push eax
    X86_AT(c, 0xc4a47u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4a48  push edi
    X86_AT(c, 0xc4a48u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c4a49  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc4a49u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c4a4c  mov al, byte ptr [edi]
    X86_AT(c, 0xc4a4cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0c4a4e  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xc4a4eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0c4a51  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0xc4a51u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0c4a54  mov byte ptr [ebp - 2], dl
    X86_AT(c, 0xc4a54u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 2));
    // 0c4a57  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0xc4a57u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0c4a5a  dec ecx
    X86_AT(c, 0xc4a5au);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0c4a5b  and cl, cl
    X86_AT(c, 0xc4a5bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0c4a5d  jge 0xc4a6d
    X86_AT(c, 0xc4a5du);
    if (x86_cc(c, 13)) { goto L_c4a6d; }
    X86_TICK(c, 20);
    // 0c4a5f  mov cl, 0x4a
    X86_AT(c, 0xc4a5fu);
    s8(c, 1, 0x4Au);
    // 0c4a61  dec byte ptr [ebp - 2]
    X86_AT(c, 0xc4a61u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0c4a64  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xc4a64u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0c4a68  jge 0xc4a6d
    X86_AT(c, 0xc4a68u);
    if (x86_cc(c, 13)) { goto L_c4a6d; }
    X86_TICK(c, 6);
    // 0c4a6a  dec byte ptr [ebp - 1]
    X86_AT(c, 0xc4a6au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
L_c4a6d:
    X86_TICK(c, 34);
    // 0c4a6d  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xc4a6du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0c4a70  mov byte ptr [edi], al
    X86_AT(c, 0xc4a70u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 0c4a72  mov al, byte ptr [ebp - 2]
    X86_AT(c, 0xc4a72u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 0c4a75  mov byte ptr [edi + 1], al
    X86_AT(c, 0xc4a75u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 0c4a78  mov byte ptr [edi + 2], cl
    X86_AT(c, 0xc4a78u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 0c4a7b  pop edi
    X86_AT(c, 0xc4a7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c4a7c  leave 
    X86_AT(c, 0xc4a7cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c4a7d  ret 
    X86_AT(c, 0xc4a7du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4a44u, "ran off the end of a function");
}
void f_000c4c24(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0c4c24  push ebp
    X86_AT(c, 0xc4c24u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c4c25  mov ebp, esp
    X86_AT(c, 0xc4c25u);
    c.r[5] = c.r[4];
    // 0c4c27  sub esp, 8
    X86_AT(c, 0xc4c27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c4c2a  push ebx
    X86_AT(c, 0xc4c2au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c4c2b  push esi
    X86_AT(c, 0xc4c2bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c4c2c  push edi
    X86_AT(c, 0xc4c2cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c4c2d  call 0xc4fe0
    X86_AT(c, 0xc4c2du);
    push32(c, 0xc4c32u); x86_call_known(c, 0xc4fe0u, f_000c4fe0); X86_RET(c, 0xc4c32u);
    X86_TICK(c, 12);
    // 0c4c32  cmp dword ptr [0xe1c], 0
    X86_AT(c, 0xc4c32u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE1Cu))), 0x0u, 0, 4);
    // 0c4c39  jne 0xc4c7d
    X86_AT(c, 0xc4c39u);
    if (x86_cc(c, 5)) { goto L_c4c7d; }
    X86_TICK(c, 18);
    // 0c4c3b  dec dword ptr [ebp + 0xc]
    X86_AT(c, 0xc4c3bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c4c3e  cmp dword ptr [ebp + 0xc], 0xffffffff
    X86_AT(c, 0xc4c3eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0xFFFFFFFFu, 0, 4);
    // 0c4c42  je 0xc4dea
    X86_AT(c, 0xc4c42u);
    if (x86_cc(c, 4)) { goto L_c4dea; }
    X86_TICK(c, 15);
    // 0c4c48  mov eax, dword ptr [0xe18]
    X86_AT(c, 0xc4c48u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE18u)));
    // 0c4c4d  cmp eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc4c4du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0c4c50  jge 0xc4c55
    X86_AT(c, 0xc4c50u);
    if (x86_cc(c, 13)) { goto L_c4c55; }
    X86_TICK(c, 2);
    // 0c4c52  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0xc4c52u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
L_c4c55:
    X86_TICK(c, 4);
    // 0c4c55  mov edi, 0xffffffff
    X86_AT(c, 0xc4c55u);
    c.r[7] = 0xFFFFFFFFu;
    // 0c4c5a  mov esi, edi
    X86_AT(c, 0xc4c5au);
    c.r[6] = c.r[7];
L_c4c5c:
    X86_TICK(c, 9);
    // 0c4c5c  inc esi
    X86_AT(c, 0xc4c5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c4c5d  cmp esi, 0x63
    X86_AT(c, 0xc4c5du);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 0c4c60  jge 0xc4c74
    X86_AT(c, 0xc4c60u);
    if (x86_cc(c, 13)) { goto L_c4c74; }
    X86_TICK(c, 13);
    // 0c4c62  movzx eax, byte ptr [esi + esi*2 + 0xcdc]
    X86_AT(c, 0xc4c62u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[6] * 2 + 0xCDCu)));
    // 0c4c6a  test al, 0x80
    X86_AT(c, 0xc4c6au);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 0c4c6c  jne 0xc4c6f
    X86_AT(c, 0xc4c6cu);
    if (x86_cc(c, 5)) { goto L_c4c6f; }
    X86_TICK(c, 2);
    // 0c4c6e  inc edi
    X86_AT(c, 0xc4c6eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_c4c6f:
    X86_TICK(c, 11);
    // 0c4c6f  cmp edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc4c6fu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0c4c72  jne 0xc4c5c
    X86_AT(c, 0xc4c72u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc4c5cu); goto L_c4c5c; }
L_c4c74:
    X86_TICK(c, 7);
    // 0c4c74  cmp esi, 0x63
    X86_AT(c, 0xc4c74u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 0c4c77  jl 0xc4c87
    X86_AT(c, 0xc4c77u);
    if (x86_cc(c, 12)) { goto L_c4c87; }
    X86_TICK(c, 7);
    // 0c4c79  and edi, edi
    X86_AT(c, 0xc4c79u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c4c7b  jge 0xc4c87
    X86_AT(c, 0xc4c7bu);
    if (x86_cc(c, 13)) { goto L_c4c87; }
L_c4c7d:
    X86_TICK(c, 9);
    // 0c4c7d  mov eax, 0xffffffff
    X86_AT(c, 0xc4c7du);
    c.r[0] = 0xFFFFFFFFu;
    // 0c4c82  jmp 0xc4dec
    X86_AT(c, 0xc4c82u);
    goto L_c4dec;
L_c4c87:
    X86_TICK(c, 11);
    // 0c4c87  cmp edi, dword ptr [0xe18]
    X86_AT(c, 0xc4c87u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xE18u))), 0, 4);
    // 0c4c8d  jne 0xc4ca6
    X86_AT(c, 0xc4c8du);
    if (x86_cc(c, 5)) { goto L_c4ca6; }
    X86_TICK(c, 23);
    // 0c4c8f  mov al, byte ptr [0xe05]
    X86_AT(c, 0xc4c8fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE05u))));
    // 0c4c94  mov byte ptr [ebp - 3], al
    X86_AT(c, 0xc4c94u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 0));
    // 0c4c97  mov al, byte ptr [0xe06]
    X86_AT(c, 0xc4c97u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE06u))));
    // 0c4c9c  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xc4c9cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0c4c9f  mov al, byte ptr [0xe07]
    X86_AT(c, 0xc4c9fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE07u))));
    // 0c4ca4  jmp 0xc4cc9
    X86_AT(c, 0xc4ca4u);
    goto L_c4cc9;
L_c4ca6:
    X86_TICK(c, 20);
    // 0c4ca6  mov eax, 0xb90
    X86_AT(c, 0xc4ca6u);
    c.r[0] = 0xB90u;
    // 0c4cab  lea edx, [edi + edi*2]
    X86_AT(c, 0xc4cabu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c4cae  mov cl, byte ptr [eax + edx*1 + 0x14f]
    X86_AT(c, 0xc4caeu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x14Fu))));
    // 0c4cb5  mov byte ptr [ebp - 3], cl
    X86_AT(c, 0xc4cb5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 1));
    // 0c4cb8  mov cl, byte ptr [eax + edx*1 + 0x150]
    X86_AT(c, 0xc4cb8u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u))));
    // 0c4cbf  mov byte ptr [ebp - 2], cl
    X86_AT(c, 0xc4cbfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 1));
    // 0c4cc2  mov al, byte ptr [eax + edx*1 + 0x151]
    X86_AT(c, 0xc4cc2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x151u))));
L_c4cc9:
    X86_TICK(c, 13);
    // 0c4cc9  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xc4cc9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0c4ccc  lea eax, [ebp - 3]
    X86_AT(c, 0xc4cccu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFDu);
    // 0c4ccf  push eax
    X86_AT(c, 0xc4ccfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4cd0  call 0xc4a44
    X86_AT(c, 0xc4cd0u);
    push32(c, 0xc4cd5u); x86_call_known(c, 0xc4a44u, f_000c4a44); X86_RET(c, 0xc4cd5u);
    X86_TICK(c, 17);
    // 0c4cd5  movsx eax, word ptr [0xcda]
    X86_AT(c, 0xc4cd5u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xCDAu)));
    // 0c4cdc  push eax
    X86_AT(c, 0xc4cdcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4cdd  push eax
    X86_AT(c, 0xc4cddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4cde  call 0xc5ce0
    X86_AT(c, 0xc4cdeu);
    push32(c, 0xc4ce3u); x86_call_known(c, 0xc5ce0u, f_000c5ce0); X86_RET(c, 0xc4ce3u);
    X86_TICK(c, 2);
    // 0c4ce3  add esp, 0xc
    X86_AT(c, 0xc4ce3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c4ce6:
    X86_TICK(c, 64);
    // 0c4ce6  mov eax, 0xb90
    X86_AT(c, 0xc4ce6u);
    c.r[0] = 0xB90u;
    // 0c4ceb  lea edx, [edi + edi*2]
    X86_AT(c, 0xc4cebu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c4cee  mov cl, byte ptr [eax + edx*1 + 0x14c]
    X86_AT(c, 0xc4ceeu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x14Cu))));
    // 0c4cf5  mov byte ptr [eax + 0x140], cl
    X86_AT(c, 0xc4cf5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x140u)), g8(c, 1));
    // 0c4cfb  mov cl, byte ptr [eax + edx*1 + 0x14d]
    X86_AT(c, 0xc4cfbu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x14Du))));
    // 0c4d02  mov byte ptr [eax + 0x141], cl
    X86_AT(c, 0xc4d02u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x141u)), g8(c, 1));
    // 0c4d08  mov dl, byte ptr [eax + edx*1 + 0x14e]
    X86_AT(c, 0xc4d08u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x14Eu))));
    // 0c4d0f  mov byte ptr [eax + 0x142], dl
    X86_AT(c, 0xc4d0fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x142u)), g8(c, 2));
    // 0c4d15  mov dl, byte ptr [ebp - 3]
    X86_AT(c, 0xc4d15u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu))));
    // 0c4d18  mov byte ptr [eax + 0x143], dl
    X86_AT(c, 0xc4d18u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x143u)), g8(c, 2));
    // 0c4d1e  mov dl, byte ptr [ebp - 2]
    X86_AT(c, 0xc4d1eu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 0c4d21  mov byte ptr [eax + 0x144], dl
    X86_AT(c, 0xc4d21u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x144u)), g8(c, 2));
    // 0c4d27  mov dl, byte ptr [ebp - 1]
    X86_AT(c, 0xc4d27u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0c4d2a  mov byte ptr [eax + 0x145], dl
    X86_AT(c, 0xc4d2au);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x145u)), g8(c, 2));
    // 0c4d30  mov word ptr [eax], 0x93
    X86_AT(c, 0xc4d30u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), 0x93u);
    // 0c4d35  mov dx, word ptr [eax + 0x298]
    X86_AT(c, 0xc4d35u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x298u))));
    // 0c4d3c  mov word ptr [eax + 2], dx
    X86_AT(c, 0xc4d3cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 0c4d40  mov dword ptr [eax + 0xa], 0x50c0
    X86_AT(c, 0xc4d40u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x50C0u);
    // 0c4d47  mov word ptr [eax + 0x2a0], 0x2511
    X86_AT(c, 0xc4d47u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2A0u)), 0x2511u);
    // 0c4d50  cmp dword ptr [ebp + 0xc], 0
    X86_AT(c, 0xc4d50u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 4);
    // 0c4d54  jge 0xc4d5f
    X86_AT(c, 0xc4d54u);
    if (x86_cc(c, 13)) { goto L_c4d5f; }
    X86_TICK(c, 9);
    // 0c4d56  mov byte ptr [eax + 0x2a9], 0xff
    X86_AT(c, 0xc4d56u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x2A9u)), 0xFFu);
    // 0c4d5d  jmp 0xc4d6e
    X86_AT(c, 0xc4d5du);
    goto L_c4d6e;
L_c4d5f:
    X86_TICK(c, 8);
    // 0c4d5f  mov byte ptr [0xe39], 0xfe
    X86_AT(c, 0xc4d5fu);
    wr8((c.sbase[3] + (uint32_t)(0xE39u)), 0xFEu);
    // 0c4d66  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0xc4d66u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0c4d69  mov byte ptr [0xe35], al
    X86_AT(c, 0xc4d69u);
    wr8((c.sbase[3] + (uint32_t)(0xE35u)), g8(c, 0));
L_c4d6e:
    X86_TICK(c, 21);
    // 0c4d6e  mov byte ptr [0xe38], 1
    X86_AT(c, 0xc4d6eu);
    wr8((c.sbase[3] + (uint32_t)(0xE38u)), 0x1u);
    // 0c4d75  mov ax, word ptr [0xe2c]
    X86_AT(c, 0xc4d75u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE2Cu))));
    // 0c4d7b  mov word ptr [0xe44], ax
    X86_AT(c, 0xc4d7bu);
    wr16((c.sbase[3] + (uint32_t)(0xE44u)), (c.r[0] & 0xFFFFu));
    // 0c4d81  mov dword ptr [0xe3c], 0xb90
    X86_AT(c, 0xc4d81u);
    wr32((c.sbase[3] + (uint32_t)(0xE3Cu)), 0xB90u);
    // 0c4d8b  push 0xe4c
    X86_AT(c, 0xc4d8bu);
    { uint32_t v = 0xE4Cu; push32(c, v); }
    // 0c4d90  push 0xe30
    X86_AT(c, 0xc4d90u);
    { uint32_t v = 0xE30u; push32(c, v); }
    // 0c4d95  call 0xe84e6
    X86_AT(c, 0xc4d95u);
    push32(c, 0xc4d9au); x86_call_known(c, 0xe84e6u, f_000e84e6); X86_RET(c, 0xc4d9au);
    X86_TICK(c, 19);
    // 0c4d9a  mov bl, byte ptr [0xe4d]
    X86_AT(c, 0xc4d9au);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE4Du))));
    // 0c4da0  mov al, byte ptr [0xe54]
    X86_AT(c, 0xc4da0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE54u))));
    // 0c4da5  mov byte ptr [ebp - 4], al
    X86_AT(c, 0xc4da5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), g8(c, 0));
    // 0c4da8  add esp, 8
    X86_AT(c, 0xc4da8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c4dab  and bl, bl
    X86_AT(c, 0xc4dabu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c4dad  je 0xc4dd8
    X86_AT(c, 0xc4dadu);
    if (x86_cc(c, 4)) { goto L_c4dd8; }
    X86_TICK(c, 11);
    // 0c4daf  push eax
    X86_AT(c, 0xc4dafu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4db0  push ebx
    X86_AT(c, 0xc4db0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c4db1  call 0xc46c4
    X86_AT(c, 0xc4db1u);
    push32(c, 0xc4db6u); x86_call_known(c, 0xc46c4u, f_000c46c4); X86_RET(c, 0xc4db6u);
    X86_TICK(c, 16);
    // 0c4db6  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc4db6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c4db9  add esp, 8
    X86_AT(c, 0xc4db9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c4dbc  cmp dword ptr [ebp - 8], 0x102
    X86_AT(c, 0xc4dbcu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x102u, 0, 4);
    // 0c4dc3  jne 0xc4dd8
    X86_AT(c, 0xc4dc3u);
    if (x86_cc(c, 5)) { goto L_c4dd8; }
    X86_TICK(c, 7);
    // 0c4dc5  call 0xc4ed4
    X86_AT(c, 0xc4dc5u);
    push32(c, 0xc4dcau); x86_call_known(c, 0xc4ed4u, f_000c4ed4); X86_RET(c, 0xc4dcau);
L_c4dca:
    X86_TICK(c, 7);
    // 0c4dca  call 0xc5038
    X86_AT(c, 0xc4dcau);
    push32(c, 0xc4dcfu); x86_call_known(c, 0xc5038u, f_000c5038); X86_RET(c, 0xc4dcfu);
    X86_TICK(c, 7);
    // 0c4dcf  and eax, eax
    X86_AT(c, 0xc4dcfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c4dd1  jne 0xc4dca
    X86_AT(c, 0xc4dd1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc4dcau); goto L_c4dca; }
    X86_TICK(c, 7);
    // 0c4dd3  jmp 0xc4ce6
    X86_AT(c, 0xc4dd3u);
    X86_POLL(c, 0xc4ce6u); goto L_c4ce6;
L_c4dd8:
    X86_TICK(c, 7);
    // 0c4dd8  and bl, bl
    X86_AT(c, 0xc4dd8u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c4dda  je 0xc4dea
    X86_AT(c, 0xc4ddau);
    if (x86_cc(c, 4)) { goto L_c4dea; }
    X86_TICK(c, 14);
    // 0c4ddc  push dword ptr [ebp - 4]
    X86_AT(c, 0xc4ddcu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c4ddf  push ebx
    X86_AT(c, 0xc4ddfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c4de0  call 0xc46c4
    X86_AT(c, 0xc4de0u);
    push32(c, 0xc4de5u); x86_call_known(c, 0xc46c4u, f_000c46c4); X86_RET(c, 0xc4de5u);
    X86_TICK(c, 9);
    // 0c4de5  add esp, 8
    X86_AT(c, 0xc4de5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c4de8  jmp 0xc4dec
    X86_AT(c, 0xc4de8u);
    goto L_c4dec;
L_c4dea:
    X86_TICK(c, 2);
    // 0c4dea  sub eax, eax
    X86_AT(c, 0xc4deau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c4dec:
    X86_TICK(c, 28);
    // 0c4dec  pop edi
    X86_AT(c, 0xc4decu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c4ded  pop esi
    X86_AT(c, 0xc4dedu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c4dee  pop ebx
    X86_AT(c, 0xc4deeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c4def  leave 
    X86_AT(c, 0xc4defu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c4df0  ret 
    X86_AT(c, 0xc4df0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4c24u, "ran off the end of a function");
}
void f_000c4ed4(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0c4ed4  push ebp
    X86_AT(c, 0xc4ed4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c4ed5  mov ebp, esp
    X86_AT(c, 0xc4ed5u);
    c.r[5] = c.r[4];
    // 0c4ed7  push eax
    X86_AT(c, 0xc4ed7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4ed8  push ebx
    X86_AT(c, 0xc4ed8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c4ed9  mov word ptr [0xb90], 0x93
    X86_AT(c, 0xc4ed9u);
    wr16((c.sbase[3] + (uint32_t)(0xB90u)), 0x93u);
    // 0c4ee2  mov dword ptr [0xb9a], 0x52c0
    X86_AT(c, 0xc4ee2u);
    wr32((c.sbase[3] + (uint32_t)(0xB9Au)), 0x52C0u);
    // 0c4eec  mov dword ptr [0xe30], 0x2511
    X86_AT(c, 0xc4eecu);
    wr32((c.sbase[3] + (uint32_t)(0xE30u)), 0x2511u);
    // 0c4ef6  mov word ptr [0xe38], 0
    X86_AT(c, 0xc4ef6u);
    wr16((c.sbase[3] + (uint32_t)(0xE38u)), 0x0u);
    // 0c4eff  mov dword ptr [0xe3c], 0xb90
    X86_AT(c, 0xc4effu);
    wr32((c.sbase[3] + (uint32_t)(0xE3Cu)), 0xB90u);
    // 0c4f09  push 0xe4c
    X86_AT(c, 0xc4f09u);
    { uint32_t v = 0xE4Cu; push32(c, v); }
    // 0c4f0e  push 0xe30
    X86_AT(c, 0xc4f0eu);
    { uint32_t v = 0xE30u; push32(c, v); }
    // 0c4f13  call 0xe84e6
    X86_AT(c, 0xc4f13u);
    push32(c, 0xc4f18u); x86_call_known(c, 0xe84e6u, f_000e84e6); X86_RET(c, 0xc4f18u);
    X86_TICK(c, 19);
    // 0c4f18  mov bl, byte ptr [0xe4d]
    X86_AT(c, 0xc4f18u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE4Du))));
    // 0c4f1e  mov al, byte ptr [0xe54]
    X86_AT(c, 0xc4f1eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE54u))));
    // 0c4f23  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xc4f23u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0c4f26  add esp, 8
    X86_AT(c, 0xc4f26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c4f29  and bl, bl
    X86_AT(c, 0xc4f29u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c4f2b  je 0xc4f3e
    X86_AT(c, 0xc4f2bu);
    if (x86_cc(c, 4)) { goto L_c4f3e; }
    X86_TICK(c, 11);
    // 0c4f2d  push eax
    X86_AT(c, 0xc4f2du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4f2e  push ebx
    X86_AT(c, 0xc4f2eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c4f2f  call 0xc46c4
    X86_AT(c, 0xc4f2fu);
    push32(c, 0xc4f34u); x86_call_known(c, 0xc46c4u, f_000c46c4); X86_RET(c, 0xc4f34u);
    X86_TICK(c, 11);
    // 0c4f34  mov eax, 0xffffffff
    X86_AT(c, 0xc4f34u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c4f39  add esp, 8
    X86_AT(c, 0xc4f39u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c4f3c  jmp 0xc4f40
    X86_AT(c, 0xc4f3cu);
    goto L_c4f40;
L_c4f3e:
    X86_TICK(c, 2);
    // 0c4f3e  sub eax, eax
    X86_AT(c, 0xc4f3eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c4f40:
    X86_TICK(c, 20);
    // 0c4f40  pop ebx
    X86_AT(c, 0xc4f40u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c4f41  leave 
    X86_AT(c, 0xc4f41u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c4f42  ret 
    X86_AT(c, 0xc4f42u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4ed4u, "ran off the end of a function");
}
void f_000c4fe0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c4fe0  push edi
    X86_AT(c, 0xc4fe0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c4fe1  call 0xc5038
    X86_AT(c, 0xc4fe1u);
    push32(c, 0xc4fe6u); x86_call_known(c, 0xc5038u, f_000c5038); X86_RET(c, 0xc4fe6u);
    X86_TICK(c, 10);
    // 0c4fe6  xchg edi, eax
    X86_AT(c, 0xc4fe6u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c4fe7  and edi, edi
    X86_AT(c, 0xc4fe7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c4fe9  je 0xc4ff0
    X86_AT(c, 0xc4fe9u);
    if (x86_cc(c, 4)) { goto L_c4ff0; }
    X86_TICK(c, 7);
    // 0c4feb  cmp edi, 0xffffffff
    X86_AT(c, 0xc4febu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c4fee  jne 0xc4ff9
    X86_AT(c, 0xc4feeu);
    if (x86_cc(c, 5)) { goto L_c4ff9; }
L_c4ff0:
    X86_TICK(c, 12);
    // 0c4ff0  cmp dword ptr [0xe1c], 0
    X86_AT(c, 0xc4ff0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE1Cu))), 0x0u, 0, 4);
    // 0c4ff7  je 0xc5033
    X86_AT(c, 0xc4ff7u);
    if (x86_cc(c, 4)) { goto L_c5033; }
L_c4ff9:
    X86_TICK(c, 7);
    // 0c4ff9  call 0xc4ed4
    X86_AT(c, 0xc4ff9u);
    push32(c, 0xc4ffeu); x86_call_known(c, 0xc4ed4u, f_000c4ed4); X86_RET(c, 0xc4ffeu);
L_c4ffe:
    X86_TICK(c, 7);
    // 0c4ffe  call 0xc491c
    X86_AT(c, 0xc4ffeu);
    push32(c, 0xc5003u); x86_call_known(c, 0xc491cu, f_000c491c); X86_RET(c, 0xc5003u);
    X86_TICK(c, 10);
    // 0c5003  xchg edi, eax
    X86_AT(c, 0xc5003u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c5004  cmp edi, 0x80
    X86_AT(c, 0xc5004u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0c500a  je 0xc5029
    X86_AT(c, 0xc500au);
    if (x86_cc(c, 4)) { goto L_c5029; }
    X86_TICK(c, 7);
    // 0c500c  cmp edi, 0x10
    X86_AT(c, 0xc500cu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0c500f  je 0xc5029
    X86_AT(c, 0xc500fu);
    if (x86_cc(c, 4)) { goto L_c5029; }
    X86_TICK(c, 7);
    // 0c5011  cmp edi, 4
    X86_AT(c, 0xc5011u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0c5014  je 0xc5029
    X86_AT(c, 0xc5014u);
    if (x86_cc(c, 4)) { goto L_c5029; }
    X86_TICK(c, 7);
    // 0c5016  cmp edi, 0x102
    X86_AT(c, 0xc5016u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 0c501c  je 0xc5029
    X86_AT(c, 0xc501cu);
    if (x86_cc(c, 4)) { goto L_c5029; }
    X86_TICK(c, 7);
    // 0c501e  and edi, edi
    X86_AT(c, 0xc501eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c5020  je 0xc5033
    X86_AT(c, 0xc5020u);
    if (x86_cc(c, 4)) { goto L_c5033; }
    X86_TICK(c, 9);
    // 0c5022  mov eax, 1
    X86_AT(c, 0xc5022u);
    c.r[0] = 0x1u;
    // 0c5027  jmp 0xc5035
    X86_AT(c, 0xc5027u);
    goto L_c5035;
L_c5029:
    X86_TICK(c, 7);
    // 0c5029  cmp edi, 0x102
    X86_AT(c, 0xc5029u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 0c502f  jne 0xc4ffe
    X86_AT(c, 0xc502fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc4ffeu); goto L_c4ffe; }
    X86_TICK(c, 7);
    // 0c5031  jmp 0xc4ff9
    X86_AT(c, 0xc5031u);
    X86_POLL(c, 0xc4ff9u); goto L_c4ff9;
L_c5033:
    X86_TICK(c, 2);
    // 0c5033  sub eax, eax
    X86_AT(c, 0xc5033u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5035:
    X86_TICK(c, 14);
    // 0c5035  pop edi
    X86_AT(c, 0xc5035u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5036  ret 
    X86_AT(c, 0xc5036u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4fe0u, "ran off the end of a function");
}
void f_000c5038(X86Cpu& c) {
    X86_TICK(c, 43);
    // 0c5038  push ebp
    X86_AT(c, 0xc5038u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5039  mov ebp, esp
    X86_AT(c, 0xc5039u);
    c.r[5] = c.r[4];
    // 0c503b  push eax
    X86_AT(c, 0xc503bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c503c  push ebx
    X86_AT(c, 0xc503cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c503d  mov word ptr [0xb90], 0x93
    X86_AT(c, 0xc503du);
    wr16((c.sbase[3] + (uint32_t)(0xB90u)), 0x93u);
    // 0c5046  mov ax, word ptr [0xe28]
    X86_AT(c, 0xc5046u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE28u))));
    // 0c504c  mov word ptr [0xb92], ax
    X86_AT(c, 0xc504cu);
    wr16((c.sbase[3] + (uint32_t)(0xB92u)), (c.r[0] & 0xFFFFu));
    // 0c5052  mov dword ptr [0xb9a], 0x53c0
    X86_AT(c, 0xc5052u);
    wr32((c.sbase[3] + (uint32_t)(0xB9Au)), 0x53C0u);
    // 0c505c  mov word ptr [0xe30], 0x2511
    X86_AT(c, 0xc505cu);
    wr16((c.sbase[3] + (uint32_t)(0xE30u)), 0x2511u);
    // 0c5065  mov byte ptr [0xe39], 0
    X86_AT(c, 0xc5065u);
    wr8((c.sbase[3] + (uint32_t)(0xE39u)), 0x0u);
    // 0c506c  mov byte ptr [0xe38], 0
    X86_AT(c, 0xc506cu);
    wr8((c.sbase[3] + (uint32_t)(0xE38u)), 0x0u);
    // 0c5073  mov dword ptr [0xe3c], 0xb90
    X86_AT(c, 0xc5073u);
    wr32((c.sbase[3] + (uint32_t)(0xE3Cu)), 0xB90u);
    // 0c507d  mov ax, word ptr [0xe2c]
    X86_AT(c, 0xc507du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE2Cu))));
    // 0c5083  mov word ptr [0xe44], ax
    X86_AT(c, 0xc5083u);
    wr16((c.sbase[3] + (uint32_t)(0xE44u)), (c.r[0] & 0xFFFFu));
    // 0c5089  push 0xe4c
    X86_AT(c, 0xc5089u);
    { uint32_t v = 0xE4Cu; push32(c, v); }
    // 0c508e  push 0xe30
    X86_AT(c, 0xc508eu);
    { uint32_t v = 0xE30u; push32(c, v); }
    // 0c5093  call 0xe84e6
    X86_AT(c, 0xc5093u);
    push32(c, 0xc5098u); x86_call_known(c, 0xe84e6u, f_000e84e6); X86_RET(c, 0xc5098u);
    X86_TICK(c, 19);
    // 0c5098  mov bl, byte ptr [0xe4d]
    X86_AT(c, 0xc5098u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE4Du))));
    // 0c509e  mov al, byte ptr [0xe54]
    X86_AT(c, 0xc509eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE54u))));
    // 0c50a3  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xc50a3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0c50a6  add esp, 8
    X86_AT(c, 0xc50a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c50a9  and bl, bl
    X86_AT(c, 0xc50a9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c50ab  je 0xc50b9
    X86_AT(c, 0xc50abu);
    if (x86_cc(c, 4)) { goto L_c50b9; }
    X86_TICK(c, 11);
    // 0c50ad  push eax
    X86_AT(c, 0xc50adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c50ae  push ebx
    X86_AT(c, 0xc50aeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c50af  call 0xc46c4
    X86_AT(c, 0xc50afu);
    push32(c, 0xc50b4u); x86_call_known(c, 0xc46c4u, f_000c46c4); X86_RET(c, 0xc50b4u);
    X86_TICK(c, 9);
    // 0c50b4  add esp, 8
    X86_AT(c, 0xc50b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c50b7  jmp 0xc50cb
    X86_AT(c, 0xc50b7u);
    goto L_c50cb;
L_c50b9:
    X86_TICK(c, 12);
    // 0c50b9  cmp byte ptr [0xe4c], 1
    X86_AT(c, 0xc50b9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xE4Cu))), 0x1u, 0, 1);
    // 0c50c0  jne 0xc50c9
    X86_AT(c, 0xc50c0u);
    if (x86_cc(c, 5)) { goto L_c50c9; }
    X86_TICK(c, 9);
    // 0c50c2  mov eax, 0xffffffff
    X86_AT(c, 0xc50c2u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c50c7  jmp 0xc50cb
    X86_AT(c, 0xc50c7u);
    goto L_c50cb;
L_c50c9:
    X86_TICK(c, 2);
    // 0c50c9  sub eax, eax
    X86_AT(c, 0xc50c9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c50cb:
    X86_TICK(c, 20);
    // 0c50cb  pop ebx
    X86_AT(c, 0xc50cbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c50cc  leave 
    X86_AT(c, 0xc50ccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c50cd  ret 
    X86_AT(c, 0xc50cdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5038u, "ran off the end of a function");
}
void f_000c5144(X86Cpu& c) {
    X86_TICK(c, 73);
    // 0c5144  push ebp
    X86_AT(c, 0xc5144u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5145  mov ebp, esp
    X86_AT(c, 0xc5145u);
    c.r[5] = c.r[4];
    // 0c5147  sub esp, 8
    X86_AT(c, 0xc5147u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c514a  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc514au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c514d  mov dword ptr [0x10140], eax
    X86_AT(c, 0xc514du);
    wr32((c.sbase[3] + (uint32_t)(0x10140u)), c.r[0]);
    // 0c5152  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc5152u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c5155  cdq 
    X86_AT(c, 0xc5155u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c5156  mov ecx, 0xc
    X86_AT(c, 0xc5156u);
    c.r[1] = 0xCu;
    // 0c515b  idiv ecx
    X86_AT(c, 0xc515bu);
    x86_idiv(c, c.r[1], 4, 0xc515bu);
    // 0c515d  lea eax, [eax + eax*2]
    X86_AT(c, 0xc515du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c5160  add eax, eax
    X86_AT(c, 0xc5160u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c5162  mov dword ptr [0x100ec], eax
    X86_AT(c, 0xc5162u);
    wr32((c.sbase[3] + (uint32_t)(0x100ECu)), c.r[0]);
    // 0c5167  cmp eax, 0x40
    X86_AT(c, 0xc5167u);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 0c516a  jge 0xc5173
    X86_AT(c, 0xc516au);
    if (x86_cc(c, 13)) { goto L_c5173; }
    X86_TICK(c, 9);
    // 0c516c  mov eax, 2
    X86_AT(c, 0xc516cu);
    c.r[0] = 0x2u;
    // 0c5171  jmp 0xc51c4
    X86_AT(c, 0xc5171u);
    goto L_c51c4;
L_c5173:
    X86_TICK(c, 29);
    // 0c5173  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc5173u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c5176  mov dword ptr [0x100f4], eax
    X86_AT(c, 0xc5176u);
    wr32((c.sbase[3] + (uint32_t)(0x100F4u)), c.r[0]);
    // 0c517b  mov edx, dword ptr [0x100ec]
    X86_AT(c, 0xc517bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x100ECu)));
    // 0c5181  lea ecx, [eax + edx*1 - 6]
    X86_AT(c, 0xc5181u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 0c5185  mov dword ptr [0x100fc], ecx
    X86_AT(c, 0xc5185u);
    wr32((c.sbase[3] + (uint32_t)(0x100FCu)), c.r[1]);
    // 0c518b  add eax, edx
    X86_AT(c, 0xc518bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c518d  mov dword ptr [0x100f8], eax
    X86_AT(c, 0xc518du);
    wr32((c.sbase[3] + (uint32_t)(0x100F8u)), c.r[0]);
    // 0c5192  lea eax, [eax + edx*1 - 6]
    X86_AT(c, 0xc5192u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 0c5196  mov dword ptr [0x10100], eax
    X86_AT(c, 0xc5196u);
    wr32((c.sbase[3] + (uint32_t)(0x10100u)), c.r[0]);
    // 0c519b  call 0xe3f99
    X86_AT(c, 0xc519bu);
    push32(c, 0xc51a0u); x86_call_known(c, 0xe3f99u, f_000e3f99); X86_RET(c, 0xc51a0u);
    X86_TICK(c, 7);
    // 0c51a0  call 0xe3eb1
    X86_AT(c, 0xc51a0u);
    push32(c, 0xc51a5u); x86_call_known(c, 0xe3eb1u, f_000e3eb1); X86_RET(c, 0xc51a5u);
    X86_TICK(c, 9);
    // 0c51a5  push 0x33
    X86_AT(c, 0xc51a5u);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0c51a7  call 0xe3ee5
    X86_AT(c, 0xc51a7u);
    push32(c, 0xc51acu); x86_call_known(c, 0xe3ee5u, f_000e3ee5); X86_RET(c, 0xc51acu);
    X86_TICK(c, 13);
    // 0c51ac  lea eax, [ebp - 8]
    X86_AT(c, 0xc51acu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c51af  push eax
    X86_AT(c, 0xc51afu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c51b0  push 0x1078
    X86_AT(c, 0xc51b0u);
    { uint32_t v = 0x1078u; push32(c, v); }
    // 0c51b5  call 0xe60c8
    X86_AT(c, 0xc51b5u);
    push32(c, 0xc51bau); x86_call_known(c, 0xe60c8u, f_000e60c8); X86_RET(c, 0xc51bau);
    X86_TICK(c, 6);
    // 0c51ba  sub eax, eax
    X86_AT(c, 0xc51bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c51bc  mov dword ptr [0x10108], eax
    X86_AT(c, 0xc51bcu);
    wr32((c.sbase[3] + (uint32_t)(0x10108u)), c.r[0]);
    // 0c51c1  add esp, 0xc
    X86_AT(c, 0xc51c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c51c4:
    X86_TICK(c, 16);
    // 0c51c4  leave 
    X86_AT(c, 0xc51c4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c51c5  ret 
    X86_AT(c, 0xc51c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5144u, "ran off the end of a function");
}
void f_000c51c8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0c51c8  call 0xe3fa4
    X86_AT(c, 0xc51c8u);
    push32(c, 0xc51cdu); x86_call_known(c, 0xe3fa4u, f_000e3fa4); X86_RET(c, 0xc51cdu);
    X86_TICK(c, 12);
    // 0c51cd  sub eax, eax
    X86_AT(c, 0xc51cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c51cf  ret 
    X86_AT(c, 0xc51cfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc51c8u, "ran off the end of a function");
}
void f_000c51d0(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0c51d0  push ebp
    X86_AT(c, 0xc51d0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c51d1  mov ebp, esp
    X86_AT(c, 0xc51d1u);
    c.r[5] = c.r[4];
    // 0c51d3  sub esp, 0x108
    X86_AT(c, 0xc51d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x108u, 0, 4); }
    // 0c51d9  push ebx
    X86_AT(c, 0xc51d9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c51da  push esi
    X86_AT(c, 0xc51dau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c51db  push edi
    X86_AT(c, 0xc51dbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c51dc  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc51dcu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c51df  sub ebx, ebx
    X86_AT(c, 0xc51dfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c51e1  mov esi, ebx
    X86_AT(c, 0xc51e1u);
    c.r[6] = c.r[3];
L_c51e3:
    X86_TICK(c, 11);
    // 0c51e3  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0xc51e3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 0c51e6  and al, al
    X86_AT(c, 0xc51e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c51e8  je 0xc5200
    X86_AT(c, 0xc51e8u);
    if (x86_cc(c, 4)) { goto L_c5200; }
    X86_TICK(c, 14);
    // 0c51ea  movzx eax, al
    X86_AT(c, 0xc51eau);
    c.r[0] = g8(c, 0);
    // 0c51ed  cmp eax, dword ptr [esi*4 + 0x42b00]
    X86_AT(c, 0xc51edu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x42B00u))), 0, 4);
    // 0c51f4  je 0xc51fd
    X86_AT(c, 0xc51f4u);
    if (x86_cc(c, 4)) { goto L_c51fd; }
    X86_TICK(c, 9);
    // 0c51f6  mov ebx, 1
    X86_AT(c, 0xc51f6u);
    c.r[3] = 0x1u;
    // 0c51fb  jmp 0xc5200
    X86_AT(c, 0xc51fbu);
    goto L_c5200;
L_c51fd:
    X86_TICK(c, 9);
    // 0c51fd  inc esi
    X86_AT(c, 0xc51fdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c51fe  jmp 0xc51e3
    X86_AT(c, 0xc51feu);
    X86_POLL(c, 0xc51e3u); goto L_c51e3;
L_c5200:
    X86_TICK(c, 2);
    // 0c5200  sub esi, esi
    X86_AT(c, 0xc5200u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c5202:
    X86_TICK(c, 11);
    // 0c5202  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0xc5202u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 0c5205  and al, al
    X86_AT(c, 0xc5205u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c5207  je 0xc5216
    X86_AT(c, 0xc5207u);
    if (x86_cc(c, 4)) { goto L_c5216; }
    X86_TICK(c, 14);
    // 0c5209  movzx eax, al
    X86_AT(c, 0xc5209u);
    c.r[0] = g8(c, 0);
    // 0c520c  mov dword ptr [esi*4 + 0x42b00], eax
    X86_AT(c, 0xc520cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x42B00u)), c.r[0]);
    // 0c5213  inc esi
    X86_AT(c, 0xc5213u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c5214  jmp 0xc5202
    X86_AT(c, 0xc5214u);
    X86_POLL(c, 0xc5202u); goto L_c5202;
L_c5216:
    X86_TICK(c, 9);
    // 0c5216  mov dword ptr [esi*4 + 0x42b00], 0
    X86_AT(c, 0xc5216u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x42B00u)), 0x0u);
    // 0c5221  call 0xc56dc
    X86_AT(c, 0xc5221u);
    push32(c, 0xc5226u); x86_call_known(c, 0xc56dcu, f_000c56dc); X86_RET(c, 0xc5226u);
    X86_TICK(c, 13);
    // 0c5226  mov dword ptr [0x10150], 0xffffffff
    X86_AT(c, 0xc5226u);
    wr32((c.sbase[3] + (uint32_t)(0x10150u)), 0xFFFFFFFFu);
    // 0c5230  push 0x108a
    X86_AT(c, 0xc5230u);
    { uint32_t v = 0x108Au; push32(c, v); }
    // 0c5235  push edi
    X86_AT(c, 0xc5235u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5236  call 0xe6e04
    X86_AT(c, 0xc5236u);
    push32(c, 0xc523bu); x86_call_known(c, 0xe6e04u, f_000e6e04); X86_RET(c, 0xc523bu);
    X86_TICK(c, 11);
    // 0c523b  add esp, 8
    X86_AT(c, 0xc523bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c523e  mov dword ptr [0x10154], eax
    X86_AT(c, 0xc523eu);
    wr32((c.sbase[3] + (uint32_t)(0x10154u)), c.r[0]);
    // 0c5243  and eax, eax
    X86_AT(c, 0xc5243u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5245  jne 0xc5251
    X86_AT(c, 0xc5245u);
    if (x86_cc(c, 5)) { goto L_c5251; }
    X86_TICK(c, 9);
    // 0c5247  mov eax, 0xffffffff
    X86_AT(c, 0xc5247u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c524c  jmp 0xc5565
    X86_AT(c, 0xc524cu);
    goto L_c5565;
L_c5251:
    X86_TICK(c, 16);
    // 0c5251  push 0
    X86_AT(c, 0xc5251u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c5253  push 0x354
    X86_AT(c, 0xc5253u);
    { uint32_t v = 0x354u; push32(c, v); }
    // 0c5258  push dword ptr [0x10154]
    X86_AT(c, 0xc5258u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c525e  call 0xe7578
    X86_AT(c, 0xc525eu);
    push32(c, 0xc5263u); x86_call_known(c, 0xe7578u, f_000e7578); X86_RET(c, 0xc5263u);
    X86_TICK(c, 22);
    // 0c5263  mov dword ptr [0x10108], 0
    X86_AT(c, 0xc5263u);
    wr32((c.sbase[3] + (uint32_t)(0x10108u)), 0x0u);
    // 0c526d  push dword ptr [0x10154]
    X86_AT(c, 0xc526du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c5273  push 0x20
    X86_AT(c, 0xc5273u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c5275  push 1
    X86_AT(c, 0xc5275u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c5277  lea eax, [ebp - 0x88]
    X86_AT(c, 0xc5277u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0c527d  push eax
    X86_AT(c, 0xc527du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c527e  call 0xe6b28
    X86_AT(c, 0xc527eu);
    push32(c, 0xc5283u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc5283u);
    X86_TICK(c, 9);
    // 0c5283  add esp, 0x1c
    X86_AT(c, 0xc5283u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c5286  cmp eax, 0x20
    X86_AT(c, 0xc5286u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0c5289  jl 0xc54f1
    X86_AT(c, 0xc5289u);
    if (x86_cc(c, 12)) { goto L_c54f1; }
    X86_TICK(c, 2);
    // 0c528f  sub esi, esi
    X86_AT(c, 0xc528fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c5291:
    X86_TICK(c, 7);
    // 0c5291  cmp esi, 0x20
    X86_AT(c, 0xc5291u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0c5294  jge 0xc52a5
    X86_AT(c, 0xc5294u);
    if (x86_cc(c, 13)) { goto L_c52a5; }
    X86_TICK(c, 11);
    // 0c5296  push 1
    X86_AT(c, 0xc5296u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c5298  push esi
    X86_AT(c, 0xc5298u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c5299  call 0xe40f0
    X86_AT(c, 0xc5299u);
    push32(c, 0xc529eu); x86_call_known(c, 0xe40f0u, f_000e40f0); X86_RET(c, 0xc529eu);
    X86_TICK(c, 14);
    // 0c529e  xchg ebx, eax
    X86_AT(c, 0xc529eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c529f  inc esi
    X86_AT(c, 0xc529fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c52a0  add esp, 8
    X86_AT(c, 0xc52a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c52a3  jmp 0xc5291
    X86_AT(c, 0xc52a3u);
    X86_POLL(c, 0xc5291u); goto L_c5291;
L_c52a5:
    X86_TICK(c, 20);
    // 0c52a5  push dword ptr [0x10154]
    X86_AT(c, 0xc52a5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c52ab  push 0x20
    X86_AT(c, 0xc52abu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c52ad  push 1
    X86_AT(c, 0xc52adu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c52af  lea eax, [ebp - 0x88]
    X86_AT(c, 0xc52afu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0c52b5  push eax
    X86_AT(c, 0xc52b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c52b6  call 0xe6b28
    X86_AT(c, 0xc52b6u);
    push32(c, 0xc52bbu); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc52bbu);
    X86_TICK(c, 9);
    // 0c52bb  add esp, 0x10
    X86_AT(c, 0xc52bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c52be  cmp eax, 0x20
    X86_AT(c, 0xc52beu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0c52c1  jl 0xc54f1
    X86_AT(c, 0xc52c1u);
    if (x86_cc(c, 12)) { goto L_c54f1; }
    X86_TICK(c, 2);
    // 0c52c7  sub esi, esi
    X86_AT(c, 0xc52c7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c52c9:
    X86_TICK(c, 7);
    // 0c52c9  cmp esi, 0x20
    X86_AT(c, 0xc52c9u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0c52cc  jge 0xc52e0
    X86_AT(c, 0xc52ccu);
    if (x86_cc(c, 13)) { goto L_c52e0; }
    X86_TICK(c, 11);
    // 0c52ce  push 0xff
    X86_AT(c, 0xc52ceu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0c52d3  push esi
    X86_AT(c, 0xc52d3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c52d4  call 0xe40bc
    X86_AT(c, 0xc52d4u);
    push32(c, 0xc52d9u); x86_call_known(c, 0xe40bcu, f_000e40bc); X86_RET(c, 0xc52d9u);
    X86_TICK(c, 14);
    // 0c52d9  xchg ebx, eax
    X86_AT(c, 0xc52d9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c52da  inc esi
    X86_AT(c, 0xc52dau);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c52db  add esp, 8
    X86_AT(c, 0xc52dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c52de  jmp 0xc52c9
    X86_AT(c, 0xc52deu);
    X86_POLL(c, 0xc52c9u); goto L_c52c9;
L_c52e0:
    X86_TICK(c, 20);
    // 0c52e0  push dword ptr [0x10154]
    X86_AT(c, 0xc52e0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c52e6  push 0x20
    X86_AT(c, 0xc52e6u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c52e8  push 1
    X86_AT(c, 0xc52e8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c52ea  lea eax, [ebp - 0x88]
    X86_AT(c, 0xc52eau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0c52f0  push eax
    X86_AT(c, 0xc52f0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c52f1  call 0xe6b28
    X86_AT(c, 0xc52f1u);
    push32(c, 0xc52f6u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc52f6u);
    X86_TICK(c, 9);
    // 0c52f6  add esp, 0x10
    X86_AT(c, 0xc52f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c52f9  cmp eax, 0x20
    X86_AT(c, 0xc52f9u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0c52fc  jl 0xc54f1
    X86_AT(c, 0xc52fcu);
    if (x86_cc(c, 12)) { goto L_c54f1; }
    X86_TICK(c, 2);
    // 0c5302  sub esi, esi
    X86_AT(c, 0xc5302u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c5304:
    X86_TICK(c, 7);
    // 0c5304  cmp esi, 0x20
    X86_AT(c, 0xc5304u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0c5307  jge 0xc531b
    X86_AT(c, 0xc5307u);
    if (x86_cc(c, 13)) { goto L_c531b; }
    X86_TICK(c, 11);
    // 0c5309  push 0xff
    X86_AT(c, 0xc5309u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0c530e  push esi
    X86_AT(c, 0xc530eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c530f  call 0xe40d6
    X86_AT(c, 0xc530fu);
    push32(c, 0xc5314u); x86_call_known(c, 0xe40d6u, f_000e40d6); X86_RET(c, 0xc5314u);
    X86_TICK(c, 14);
    // 0c5314  xchg ebx, eax
    X86_AT(c, 0xc5314u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c5315  inc esi
    X86_AT(c, 0xc5315u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c5316  add esp, 8
    X86_AT(c, 0xc5316u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c5319  jmp 0xc5304
    X86_AT(c, 0xc5319u);
    X86_POLL(c, 0xc5304u); goto L_c5304;
L_c531b:
    X86_TICK(c, 20);
    // 0c531b  push dword ptr [0x10154]
    X86_AT(c, 0xc531bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c5321  push 0x20
    X86_AT(c, 0xc5321u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c5323  push 1
    X86_AT(c, 0xc5323u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c5325  lea eax, [ebp - 0x88]
    X86_AT(c, 0xc5325u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0c532b  push eax
    X86_AT(c, 0xc532bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c532c  call 0xe6b28
    X86_AT(c, 0xc532cu);
    push32(c, 0xc5331u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc5331u);
    X86_TICK(c, 9);
    // 0c5331  add esp, 0x10
    X86_AT(c, 0xc5331u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c5334  cmp eax, 0x20
    X86_AT(c, 0xc5334u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0c5337  jl 0xc54f1
    X86_AT(c, 0xc5337u);
    if (x86_cc(c, 12)) { goto L_c54f1; }
    X86_TICK(c, 2);
    // 0c533d  sub esi, esi
    X86_AT(c, 0xc533du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c533f:
    X86_TICK(c, 7);
    // 0c533f  cmp esi, 0x20
    X86_AT(c, 0xc533fu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0c5342  jge 0xc535a
    X86_AT(c, 0xc5342u);
    if (x86_cc(c, 13)) { goto L_c535a; }
    X86_TICK(c, 17);
    // 0c5344  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0xc5344u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 0c534c  push eax
    X86_AT(c, 0xc534cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c534d  push esi
    X86_AT(c, 0xc534du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c534e  call 0xe4124
    X86_AT(c, 0xc534eu);
    push32(c, 0xc5353u); x86_call_known(c, 0xe4124u, f_000e4124); X86_RET(c, 0xc5353u);
    X86_TICK(c, 14);
    // 0c5353  xchg ebx, eax
    X86_AT(c, 0xc5353u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c5354  inc esi
    X86_AT(c, 0xc5354u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c5355  add esp, 8
    X86_AT(c, 0xc5355u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c5358  jmp 0xc533f
    X86_AT(c, 0xc5358u);
    X86_POLL(c, 0xc533fu); goto L_c533f;
L_c535a:
    X86_TICK(c, 20);
    // 0c535a  push dword ptr [0x10154]
    X86_AT(c, 0xc535au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c5360  push 0x20
    X86_AT(c, 0xc5360u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c5362  push 1
    X86_AT(c, 0xc5362u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c5364  lea eax, [ebp - 0x88]
    X86_AT(c, 0xc5364u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0c536a  push eax
    X86_AT(c, 0xc536au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c536b  call 0xe6b28
    X86_AT(c, 0xc536bu);
    push32(c, 0xc5370u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc5370u);
    X86_TICK(c, 9);
    // 0c5370  add esp, 0x10
    X86_AT(c, 0xc5370u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c5373  cmp eax, 0x20
    X86_AT(c, 0xc5373u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0c5376  jl 0xc54f1
    X86_AT(c, 0xc5376u);
    if (x86_cc(c, 12)) { goto L_c54f1; }
    X86_TICK(c, 2);
    // 0c537c  sub esi, esi
    X86_AT(c, 0xc537cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c537e:
    X86_TICK(c, 7);
    // 0c537e  cmp esi, 0x20
    X86_AT(c, 0xc537eu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0c5381  jge 0xc5399
    X86_AT(c, 0xc5381u);
    if (x86_cc(c, 13)) { goto L_c5399; }
    X86_TICK(c, 17);
    // 0c5383  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0xc5383u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 0c538b  push eax
    X86_AT(c, 0xc538bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c538c  push esi
    X86_AT(c, 0xc538cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c538d  call 0xe410a
    X86_AT(c, 0xc538du);
    push32(c, 0xc5392u); x86_call_known(c, 0xe410au, f_000e410a); X86_RET(c, 0xc5392u);
    X86_TICK(c, 14);
    // 0c5392  xchg ebx, eax
    X86_AT(c, 0xc5392u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c5393  inc esi
    X86_AT(c, 0xc5393u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c5394  add esp, 8
    X86_AT(c, 0xc5394u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c5397  jmp 0xc537e
    X86_AT(c, 0xc5397u);
    X86_POLL(c, 0xc537eu); goto L_c537e;
L_c5399:
    X86_TICK(c, 18);
    // 0c5399  push 0
    X86_AT(c, 0xc5399u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c539b  push 0x6d4
    X86_AT(c, 0xc539bu);
    { uint32_t v = 0x6D4u; push32(c, v); }
    // 0c53a0  mov eax, 0x100ec
    X86_AT(c, 0xc53a0u);
    c.r[0] = 0x100ECu;
    // 0c53a5  push dword ptr [eax + 0x68]
    X86_AT(c, 0xc53a5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 0c53a8  call 0xe7578
    X86_AT(c, 0xc53a8u);
    push32(c, 0xc53adu); x86_call_known(c, 0xe7578u, f_000e7578); X86_RET(c, 0xc53adu);
    X86_TICK(c, 20);
    // 0c53ad  push dword ptr [0x10154]
    X86_AT(c, 0xc53adu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c53b3  push 6
    X86_AT(c, 0xc53b3u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c53b5  push 1
    X86_AT(c, 0xc53b5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c53b7  lea eax, [ebp - 0x88]
    X86_AT(c, 0xc53b7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0c53bd  push eax
    X86_AT(c, 0xc53bdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c53be  call 0xe6b28
    X86_AT(c, 0xc53beu);
    push32(c, 0xc53c3u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc53c3u);
    X86_TICK(c, 9);
    // 0c53c3  add esp, 0x1c
    X86_AT(c, 0xc53c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c53c6  cmp eax, 6
    X86_AT(c, 0xc53c6u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 0c53c9  jl 0xc54f1
    X86_AT(c, 0xc53c9u);
    if (x86_cc(c, 12)) { goto L_c54f1; }
    X86_TICK(c, 20);
    // 0c53cf  push dword ptr [0x10154]
    X86_AT(c, 0xc53cfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c53d5  push 8
    X86_AT(c, 0xc53d5u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c53d7  push 1
    X86_AT(c, 0xc53d7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c53d9  lea eax, [ebp - 0x88]
    X86_AT(c, 0xc53d9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0c53df  push eax
    X86_AT(c, 0xc53dfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c53e0  call 0xe6b28
    X86_AT(c, 0xc53e0u);
    push32(c, 0xc53e5u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc53e5u);
    X86_TICK(c, 9);
    // 0c53e5  add esp, 0x10
    X86_AT(c, 0xc53e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c53e8  cmp eax, 8
    X86_AT(c, 0xc53e8u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0c53eb  jl 0xc54f1
    X86_AT(c, 0xc53ebu);
    if (x86_cc(c, 12)) { goto L_c54f1; }
    X86_TICK(c, 2);
    // 0c53f1  sub esi, esi
    X86_AT(c, 0xc53f1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c53f3:
    X86_TICK(c, 11);
    // 0c53f3  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0xc53f3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 0c53f6  and al, al
    X86_AT(c, 0xc53f6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c53f8  je 0xc5404
    X86_AT(c, 0xc53f8u);
    if (x86_cc(c, 4)) { goto L_c5404; }
    X86_TICK(c, 11);
    // 0c53fa  mov byte ptr [ebp + esi*1 - 0x108], al
    X86_AT(c, 0xc53fau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u)), g8(c, 0));
    // 0c5401  inc esi
    X86_AT(c, 0xc5401u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c5402  jmp 0xc53f3
    X86_AT(c, 0xc5402u);
    X86_POLL(c, 0xc53f3u); goto L_c53f3;
L_c5404:
    X86_TICK(c, 12);
    // 0c5404  cmp byte ptr [edi + esi*1], 0x5c
    X86_AT(c, 0xc5404u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))), 0x5Cu, 0, 1);
    // 0c5408  je 0xc5411
    X86_AT(c, 0xc5408u);
    if (x86_cc(c, 4)) { goto L_c5411; }
    X86_TICK(c, 7);
    // 0c540a  and esi, esi
    X86_AT(c, 0xc540au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c540c  jl 0xc5411
    X86_AT(c, 0xc540cu);
    if (x86_cc(c, 12)) { goto L_c5411; }
    X86_TICK(c, 9);
    // 0c540e  dec esi
    X86_AT(c, 0xc540eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0c540f  jmp 0xc5404
    X86_AT(c, 0xc540fu);
    X86_POLL(c, 0xc5404u); goto L_c5404;
L_c5411:
    X86_TICK(c, 22);
    // 0c5411  inc esi
    X86_AT(c, 0xc5411u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c5412  push dword ptr [0x10154]
    X86_AT(c, 0xc5412u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c5418  push 8
    X86_AT(c, 0xc5418u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c541a  push 1
    X86_AT(c, 0xc541au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c541c  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0xc541cu);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 0c5423  push eax
    X86_AT(c, 0xc5423u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5424  call 0xe6b28
    X86_AT(c, 0xc5424u);
    push32(c, 0xc5429u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc5429u);
    X86_TICK(c, 9);
    // 0c5429  add esp, 0x10
    X86_AT(c, 0xc5429u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c542c  cmp eax, 8
    X86_AT(c, 0xc542cu);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0c542f  jl 0xc54f1
    X86_AT(c, 0xc542fu);
    if (x86_cc(c, 12)) { goto L_c54f1; }
    X86_TICK(c, 12);
    // 0c5435  cmp byte ptr [ebp + esi*1 - 0x108], 0
    X86_AT(c, 0xc5435u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 0c543d  je 0xc5487
    X86_AT(c, 0xc543du);
    if (x86_cc(c, 4)) { goto L_c5487; }
    X86_TICK(c, 2);
    // 0c543f  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xc543fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_c5446:
    X86_TICK(c, 20);
    // 0c5446  mov eax, esi
    X86_AT(c, 0xc5446u);
    c.r[0] = c.r[6];
    // 0c5448  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc5448u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0c544b  cmp byte ptr [ebp + eax*1 - 0x108], 0
    X86_AT(c, 0xc544bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 0c5453  je 0xc545a
    X86_AT(c, 0xc5453u);
    if (x86_cc(c, 4)) { goto L_c545a; }
    X86_TICK(c, 13);
    // 0c5455  inc dword ptr [ebp - 4]
    X86_AT(c, 0xc5455u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c5458  jmp 0xc5446
    X86_AT(c, 0xc5458u);
    X86_POLL(c, 0xc5446u); goto L_c5446;
L_c545a:
    X86_TICK(c, 18);
    // 0c545a  mov eax, esi
    X86_AT(c, 0xc545au);
    c.r[0] = c.r[6];
    // 0c545c  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc545cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0c545f  mov byte ptr [ebp + eax*1 - 0x108], 0x2e
    X86_AT(c, 0xc545fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u)), 0x2Eu);
    // 0c5467  mov byte ptr [ebp + eax*1 - 0x107], 0x66
    X86_AT(c, 0xc5467u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF9u)), 0x66u);
    // 0c546f  mov byte ptr [ebp + eax*1 - 0x106], 0x6d
    X86_AT(c, 0xc546fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFAu)), 0x6Du);
    // 0c5477  mov byte ptr [ebp + eax*1 - 0x105], 0x62
    X86_AT(c, 0xc5477u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFBu)), 0x62u);
    // 0c547f  mov byte ptr [ebp + eax*1 - 0x104], 0
    X86_AT(c, 0xc547fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFCu)), 0x0u);
L_c5487:
    X86_TICK(c, 20);
    // 0c5487  push dword ptr [0x10154]
    X86_AT(c, 0xc5487u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c548d  push 8
    X86_AT(c, 0xc548du);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c548f  push 1
    X86_AT(c, 0xc548fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c5491  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0xc5491u);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 0c5498  push eax
    X86_AT(c, 0xc5498u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5499  call 0xe6b28
    X86_AT(c, 0xc5499u);
    push32(c, 0xc549eu); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc549eu);
    X86_TICK(c, 9);
    // 0c549e  add esp, 0x10
    X86_AT(c, 0xc549eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c54a1  cmp eax, 8
    X86_AT(c, 0xc54a1u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0c54a4  jl 0xc54f1
    X86_AT(c, 0xc54a4u);
    if (x86_cc(c, 12)) { goto L_c54f1; }
    X86_TICK(c, 18);
    // 0c54a6  push 0
    X86_AT(c, 0xc54a6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c54a8  push 0x800
    X86_AT(c, 0xc54a8u);
    { uint32_t v = 0x800u; push32(c, v); }
    // 0c54ad  mov eax, 0x100ec
    X86_AT(c, 0xc54adu);
    c.r[0] = 0x100ECu;
    // 0c54b2  push dword ptr [eax + 0x68]
    X86_AT(c, 0xc54b2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 0c54b5  call 0xe7578
    X86_AT(c, 0xc54b5u);
    push32(c, 0xc54bau); x86_call_known(c, 0xe7578u, f_000e7578); X86_RET(c, 0xc54bau);
    X86_TICK(c, 20);
    // 0c54ba  push dword ptr [0x10154]
    X86_AT(c, 0xc54bau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c54c0  push 1
    X86_AT(c, 0xc54c0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c54c2  push 4
    X86_AT(c, 0xc54c2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c54c4  lea eax, [ebp - 8]
    X86_AT(c, 0xc54c4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c54c7  push eax
    X86_AT(c, 0xc54c7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c54c8  call 0xe6b28
    X86_AT(c, 0xc54c8u);
    push32(c, 0xc54cdu); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc54cdu);
    X86_TICK(c, 9);
    // 0c54cd  add esp, 0x1c
    X86_AT(c, 0xc54cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c54d0  dec eax
    X86_AT(c, 0xc54d0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c54d1  jl 0xc54f1
    X86_AT(c, 0xc54d1u);
    if (x86_cc(c, 12)) { goto L_c54f1; }
    X86_TICK(c, 20);
    // 0c54d3  push dword ptr [0x10154]
    X86_AT(c, 0xc54d3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c54d9  push 2
    X86_AT(c, 0xc54d9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c54db  push 1
    X86_AT(c, 0xc54dbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c54dd  lea eax, [ebp - 0x88]
    X86_AT(c, 0xc54ddu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0c54e3  push eax
    X86_AT(c, 0xc54e3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c54e4  call 0xe6b28
    X86_AT(c, 0xc54e4u);
    push32(c, 0xc54e9u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc54e9u);
    X86_TICK(c, 9);
    // 0c54e9  add esp, 0x10
    X86_AT(c, 0xc54e9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c54ec  cmp eax, 2
    X86_AT(c, 0xc54ecu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0c54ef  jge 0xc5506
    X86_AT(c, 0xc54efu);
    if (x86_cc(c, 13)) { goto L_c5506; }
L_c54f1:
    X86_TICK(c, 12);
    // 0c54f1  push dword ptr [0x10154]
    X86_AT(c, 0xc54f1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c54f7  call 0xe7300
    X86_AT(c, 0xc54f7u);
    push32(c, 0xc54fcu); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xc54fcu);
    X86_TICK(c, 11);
    // 0c54fc  mov eax, 2
    X86_AT(c, 0xc54fcu);
    c.r[0] = 0x2u;
    // 0c5501  add esp, 4
    X86_AT(c, 0xc5501u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5504  jmp 0xc5565
    X86_AT(c, 0xc5504u);
    goto L_c5565;
L_c5506:
    X86_TICK(c, 29);
    // 0c5506  movzx eax, byte ptr [ebp - 0x88]
    X86_AT(c, 0xc5506u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF78u)));
    // 0c550d  mov dword ptr [0x1014c], eax
    X86_AT(c, 0xc550du);
    wr32((c.sbase[3] + (uint32_t)(0x1014Cu)), c.r[0]);
    // 0c5512  movzx eax, byte ptr [ebp - 0x87]
    X86_AT(c, 0xc5512u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF79u)));
    // 0c5519  mov dword ptr [0x10148], eax
    X86_AT(c, 0xc5519u);
    wr32((c.sbase[3] + (uint32_t)(0x10148u)), c.r[0]);
    // 0c551e  mov dword ptr [0x10150], 0
    X86_AT(c, 0xc551eu);
    wr32((c.sbase[3] + (uint32_t)(0x10150u)), 0x0u);
    // 0c5528  mov byte ptr [0x10104], 0xfe
    X86_AT(c, 0xc5528u);
    wr8((c.sbase[3] + (uint32_t)(0x10104u)), 0xFEu);
    // 0c552f  mov dword ptr [0x100f0], 1
    X86_AT(c, 0xc552fu);
    wr32((c.sbase[3] + (uint32_t)(0x100F0u)), 0x1u);
    // 0c5539  call 0xc5958
    X86_AT(c, 0xc5539u);
    push32(c, 0xc553eu); x86_call_known(c, 0xc5958u, f_000c5958); X86_RET(c, 0xc553eu);
    X86_TICK(c, 7);
    // 0c553e  call 0xc5958
    X86_AT(c, 0xc553eu);
    push32(c, 0xc5543u); x86_call_known(c, 0xc5958u, f_000c5958); X86_RET(c, 0xc5543u);
    X86_TICK(c, 12);
    // 0c5543  push dword ptr [0x10148]
    X86_AT(c, 0xc5543u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10148u))); push32(c, v); }
    // 0c5549  call 0xe40a7
    X86_AT(c, 0xc5549u);
    push32(c, 0xc554eu); x86_call_known(c, 0xe40a7u, f_000e40a7); X86_RET(c, 0xc554eu);
    X86_TICK(c, 13);
    // 0c554e  add esp, 4
    X86_AT(c, 0xc554eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5551  mov eax, dword ptr [0x10154]
    X86_AT(c, 0xc5551u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x10154u)));
    // 0c5556  and eax, eax
    X86_AT(c, 0xc5556u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5558  je 0xc5563
    X86_AT(c, 0xc5558u);
    if (x86_cc(c, 4)) { goto L_c5563; }
    X86_TICK(c, 9);
    // 0c555a  push eax
    X86_AT(c, 0xc555au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c555b  call 0xe7300
    X86_AT(c, 0xc555bu);
    push32(c, 0xc5560u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xc5560u);
    X86_TICK(c, 2);
    // 0c5560  add esp, 4
    X86_AT(c, 0xc5560u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c5563:
    X86_TICK(c, 2);
    // 0c5563  sub eax, eax
    X86_AT(c, 0xc5563u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5565:
    X86_TICK(c, 28);
    // 0c5565  pop edi
    X86_AT(c, 0xc5565u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5566  pop esi
    X86_AT(c, 0xc5566u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c5567  pop ebx
    X86_AT(c, 0xc5567u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c5568  leave 
    X86_AT(c, 0xc5568u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5569  ret 
    X86_AT(c, 0xc5569u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc51d0u, "ran off the end of a function");
}
void f_000c556c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0c556c  push ebp
    X86_AT(c, 0xc556cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c556d  mov ebp, esp
    X86_AT(c, 0xc556du);
    c.r[5] = c.r[4];
    // 0c556f  push edi
    X86_AT(c, 0xc556fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5570  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc5570u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c5573  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc5573u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c5576  sub ecx, ecx
    X86_AT(c, 0xc5576u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0c5578  cmp ecx, edx
    X86_AT(c, 0xc5578u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 0c557a  jne 0xc5580
    X86_AT(c, 0xc557au);
    if (x86_cc(c, 5)) { goto L_c5580; }
    X86_TICK(c, 9);
    // 0c557c  mov eax, edi
    X86_AT(c, 0xc557cu);
    c.r[0] = c.r[7];
    // 0c557e  jmp 0xc5594
    X86_AT(c, 0xc557eu);
    goto L_c5594;
L_c5580:
    X86_TICK(c, 12);
    // 0c5580  cmp byte ptr [edi], 0xf2
    X86_AT(c, 0xc5580u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xF2u, 0, 1);
    // 0c5583  jne 0xc558f
    X86_AT(c, 0xc5583u);
    if (x86_cc(c, 5)) { goto L_c558f; }
    X86_TICK(c, 9);
    // 0c5585  inc ecx
    X86_AT(c, 0xc5585u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5586  cmp edx, ecx
    X86_AT(c, 0xc5586u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0c5588  jne 0xc558f
    X86_AT(c, 0xc5588u);
    if (x86_cc(c, 5)) { goto L_c558f; }
    X86_TICK(c, 9);
    // 0c558a  lea eax, [edi + 6]
    X86_AT(c, 0xc558au);
    c.r[0] = (uint32_t)(c.r[7] + 0x6u);
    // 0c558d  jmp 0xc5594
    X86_AT(c, 0xc558du);
    goto L_c5594;
L_c558f:
    X86_TICK(c, 9);
    // 0c558f  add edi, 6
    X86_AT(c, 0xc558fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0c5592  jmp 0xc5580
    X86_AT(c, 0xc5592u);
    X86_POLL(c, 0xc5580u); goto L_c5580;
L_c5594:
    X86_TICK(c, 20);
    // 0c5594  pop edi
    X86_AT(c, 0xc5594u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5595  leave 
    X86_AT(c, 0xc5595u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5596  ret 
    X86_AT(c, 0xc5596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc556cu, "ran off the end of a function");
}
void f_000c5598(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0c5598  push ebp
    X86_AT(c, 0xc5598u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5599  mov ebp, esp
    X86_AT(c, 0xc5599u);
    c.r[5] = c.r[4];
    // 0c559b  push edi
    X86_AT(c, 0xc559bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c559c  mov eax, dword ptr [0x10110]
    X86_AT(c, 0xc559cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x10110u)));
    // 0c55a1  dec eax
    X86_AT(c, 0xc55a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c55a2  push eax
    X86_AT(c, 0xc55a2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c55a3  push 0
    X86_AT(c, 0xc55a3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c55a5  call 0xe413e
    X86_AT(c, 0xc55a5u);
    push32(c, 0xc55aau); x86_call_known(c, 0xe413eu, f_000e413e); X86_RET(c, 0xc55aau);
    X86_TICK(c, 17);
    // 0c55aa  mov eax, dword ptr [0x10114]
    X86_AT(c, 0xc55aau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x10114u)));
    // 0c55af  dec eax
    X86_AT(c, 0xc55afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c55b0  push eax
    X86_AT(c, 0xc55b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c55b1  push 1
    X86_AT(c, 0xc55b1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c55b3  call 0xe413e
    X86_AT(c, 0xc55b3u);
    push32(c, 0xc55b8u); x86_call_known(c, 0xe413eu, f_000e413e); X86_RET(c, 0xc55b8u);
    X86_TICK(c, 17);
    // 0c55b8  mov eax, dword ptr [0x10118]
    X86_AT(c, 0xc55b8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x10118u)));
    // 0c55bd  dec eax
    X86_AT(c, 0xc55bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c55be  push eax
    X86_AT(c, 0xc55beu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c55bf  push 2
    X86_AT(c, 0xc55bfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c55c1  call 0xe413e
    X86_AT(c, 0xc55c1u);
    push32(c, 0xc55c6u); x86_call_known(c, 0xe413eu, f_000e413e); X86_RET(c, 0xc55c6u);
    X86_TICK(c, 17);
    // 0c55c6  mov eax, dword ptr [0x1011c]
    X86_AT(c, 0xc55c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1011Cu)));
    // 0c55cb  dec eax
    X86_AT(c, 0xc55cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c55cc  push eax
    X86_AT(c, 0xc55ccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c55cd  push 3
    X86_AT(c, 0xc55cdu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c55cf  call 0xe413e
    X86_AT(c, 0xc55cfu);
    push32(c, 0xc55d4u); x86_call_known(c, 0xe413eu, f_000e413e); X86_RET(c, 0xc55d4u);
    X86_TICK(c, 17);
    // 0c55d4  mov eax, dword ptr [0x10120]
    X86_AT(c, 0xc55d4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x10120u)));
    // 0c55d9  dec eax
    X86_AT(c, 0xc55d9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c55da  push eax
    X86_AT(c, 0xc55dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c55db  push 4
    X86_AT(c, 0xc55dbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c55dd  call 0xe413e
    X86_AT(c, 0xc55ddu);
    push32(c, 0xc55e2u); x86_call_known(c, 0xe413eu, f_000e413e); X86_RET(c, 0xc55e2u);
    X86_TICK(c, 17);
    // 0c55e2  mov eax, dword ptr [0x10124]
    X86_AT(c, 0xc55e2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x10124u)));
    // 0c55e7  dec eax
    X86_AT(c, 0xc55e7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c55e8  push eax
    X86_AT(c, 0xc55e8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c55e9  push 5
    X86_AT(c, 0xc55e9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c55eb  call 0xe413e
    X86_AT(c, 0xc55ebu);
    push32(c, 0xc55f0u); x86_call_known(c, 0xe413eu, f_000e413e); X86_RET(c, 0xc55f0u);
    X86_TICK(c, 17);
    // 0c55f0  mov eax, dword ptr [0x10128]
    X86_AT(c, 0xc55f0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x10128u)));
    // 0c55f5  dec eax
    X86_AT(c, 0xc55f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c55f6  push eax
    X86_AT(c, 0xc55f6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c55f7  push 0
    X86_AT(c, 0xc55f7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c55f9  call 0xe38df
    X86_AT(c, 0xc55f9u);
    push32(c, 0xc55feu); x86_call_known(c, 0xe38dfu, f_000e38df); X86_RET(c, 0xc55feu);
    X86_TICK(c, 17);
    // 0c55fe  mov eax, dword ptr [0x1012c]
    X86_AT(c, 0xc55feu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1012Cu)));
    // 0c5603  dec eax
    X86_AT(c, 0xc5603u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c5604  push eax
    X86_AT(c, 0xc5604u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5605  push 1
    X86_AT(c, 0xc5605u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c5607  call 0xe38df
    X86_AT(c, 0xc5607u);
    push32(c, 0xc560cu); x86_call_known(c, 0xe38dfu, f_000e38df); X86_RET(c, 0xc560cu);
    X86_TICK(c, 19);
    // 0c560c  add esp, 0x40
    X86_AT(c, 0xc560cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c560f  mov eax, dword ptr [0x10130]
    X86_AT(c, 0xc560fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x10130u)));
    // 0c5614  dec eax
    X86_AT(c, 0xc5614u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c5615  push eax
    X86_AT(c, 0xc5615u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5616  push 2
    X86_AT(c, 0xc5616u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c5618  call 0xe38df
    X86_AT(c, 0xc5618u);
    push32(c, 0xc561du); x86_call_known(c, 0xe38dfu, f_000e38df); X86_RET(c, 0xc561du);
    X86_TICK(c, 17);
    // 0c561d  mov eax, dword ptr [0x10134]
    X86_AT(c, 0xc561du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x10134u)));
    // 0c5622  dec eax
    X86_AT(c, 0xc5622u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c5623  push eax
    X86_AT(c, 0xc5623u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5624  push 3
    X86_AT(c, 0xc5624u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c5626  call 0xe38df
    X86_AT(c, 0xc5626u);
    push32(c, 0xc562bu); x86_call_known(c, 0xe38dfu, f_000e38df); X86_RET(c, 0xc562bu);
    X86_TICK(c, 17);
    // 0c562b  mov eax, dword ptr [0x10138]
    X86_AT(c, 0xc562bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x10138u)));
    // 0c5630  dec eax
    X86_AT(c, 0xc5630u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c5631  push eax
    X86_AT(c, 0xc5631u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5632  push 4
    X86_AT(c, 0xc5632u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c5634  call 0xe38df
    X86_AT(c, 0xc5634u);
    push32(c, 0xc5639u); x86_call_known(c, 0xe38dfu, f_000e38df); X86_RET(c, 0xc5639u);
    X86_TICK(c, 17);
    // 0c5639  mov eax, dword ptr [0x1013c]
    X86_AT(c, 0xc5639u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1013Cu)));
    // 0c563e  dec eax
    X86_AT(c, 0xc563eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c563f  push eax
    X86_AT(c, 0xc563fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5640  push 5
    X86_AT(c, 0xc5640u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c5642  call 0xe38df
    X86_AT(c, 0xc5642u);
    push32(c, 0xc5647u); x86_call_known(c, 0xe38dfu, f_000e38df); X86_RET(c, 0xc5647u);
    X86_TICK(c, 11);
    // 0c5647  add esp, 0x20
    X86_AT(c, 0xc5647u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c564a  push 1
    X86_AT(c, 0xc564au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c564c  call 0xe408b
    X86_AT(c, 0xc564cu);
    push32(c, 0xc5651u); x86_call_known(c, 0xe408bu, f_000e408b); X86_RET(c, 0xc5651u);
    X86_TICK(c, 17);
    // 0c5651  push dword ptr [ebp + 8]
    X86_AT(c, 0xc5651u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c5654  push dword ptr [0x100f4]
    X86_AT(c, 0xc5654u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x100F4u))); push32(c, v); }
    // 0c565a  call 0xc556c
    X86_AT(c, 0xc565au);
    push32(c, 0xc565fu); x86_call_known(c, 0xc556cu, f_000c556c); X86_RET(c, 0xc565fu);
    X86_TICK(c, 22);
    // 0c565f  mov dword ptr [0x10108], eax
    X86_AT(c, 0xc565fu);
    wr32((c.sbase[3] + (uint32_t)(0x10108u)), c.r[0]);
    // 0c5664  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc5664u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c5667  inc eax
    X86_AT(c, 0xc5667u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5668  push eax
    X86_AT(c, 0xc5668u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5669  push dword ptr [0x100f4]
    X86_AT(c, 0xc5669u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x100F4u))); push32(c, v); }
    // 0c566f  call 0xc556c
    X86_AT(c, 0xc566fu);
    push32(c, 0xc5674u); x86_call_known(c, 0xc556cu, f_000c556c); X86_RET(c, 0xc5674u);
    X86_TICK(c, 42);
    // 0c5674  xchg edi, eax
    X86_AT(c, 0xc5674u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c5675  mov byte ptr [edi], 0xfe
    X86_AT(c, 0xc5675u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFEu);
    // 0c5678  inc edi
    X86_AT(c, 0xc5678u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c5679  inc edi
    X86_AT(c, 0xc5679u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c567a  mov byte ptr [edi], 0
    X86_AT(c, 0xc567au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0c567d  inc edi
    X86_AT(c, 0xc567du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c567e  mov byte ptr [edi], 0
    X86_AT(c, 0xc567eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0c5681  inc edi
    X86_AT(c, 0xc5681u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c5682  push dword ptr [0x1014c]
    X86_AT(c, 0xc5682u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1014Cu))); push32(c, v); }
    // 0c5688  mov eax, dword ptr [0x100ec]
    X86_AT(c, 0xc5688u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x100ECu)));
    // 0c568d  add eax, eax
    X86_AT(c, 0xc568du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c568f  push eax
    X86_AT(c, 0xc568fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5690  push dword ptr [0x100f4]
    X86_AT(c, 0xc5690u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x100F4u))); push32(c, v); }
    // 0c5696  call 0xe3faf
    X86_AT(c, 0xc5696u);
    push32(c, 0xc569bu); x86_call_known(c, 0xe3fafu, f_000e3faf); X86_RET(c, 0xc569bu);
    X86_TICK(c, 24);
    // 0c569b  sub eax, eax
    X86_AT(c, 0xc569bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c569d  add esp, 0x20
    X86_AT(c, 0xc569du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c56a0  pop edi
    X86_AT(c, 0xc56a0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c56a1  leave 
    X86_AT(c, 0xc56a1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c56a2  ret 
    X86_AT(c, 0xc56a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5598u, "ran off the end of a function");
}
void f_000c56a4(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0c56a4  push edi
    X86_AT(c, 0xc56a4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c56a5  cmp dword ptr [0x10108], 0
    X86_AT(c, 0xc56a5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x10108u))), 0x0u, 0, 4);
    // 0c56ac  je 0xc56d9
    X86_AT(c, 0xc56acu);
    if (x86_cc(c, 4)) { goto L_c56d9; }
    X86_TICK(c, 7);
    // 0c56ae  call 0xe3fef
    X86_AT(c, 0xc56aeu);
    push32(c, 0xc56b3u); x86_call_known(c, 0xe3fefu, f_000e3fef); X86_RET(c, 0xc56b3u);
    X86_TICK(c, 11);
    // 0c56b3  cmp eax, dword ptr [0x10108]
    X86_AT(c, 0xc56b3u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x10108u))), 0, 4);
    // 0c56b9  jbe 0xc56d9
    X86_AT(c, 0xc56b9u);
    if (x86_cc(c, 6)) { goto L_c56d9; }
    X86_TICK(c, 4);
    // 0c56bb  mov edi, dword ptr [0x100f4]
    X86_AT(c, 0xc56bbu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x100F4u)));
L_c56c1:
    X86_TICK(c, 11);
    // 0c56c1  cmp edi, dword ptr [0x10108]
    X86_AT(c, 0xc56c1u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x10108u))), 0, 4);
    // 0c56c7  jae 0xc56cf
    X86_AT(c, 0xc56c7u);
    if (x86_cc(c, 3)) { goto L_c56cf; }
    X86_TICK(c, 11);
    // 0c56c9  mov byte ptr [edi], 0xff
    X86_AT(c, 0xc56c9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFu);
    // 0c56cc  inc edi
    X86_AT(c, 0xc56ccu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c56cd  jmp 0xc56c1
    X86_AT(c, 0xc56cdu);
    X86_POLL(c, 0xc56c1u); goto L_c56c1;
L_c56cf:
    X86_TICK(c, 2);
    // 0c56cf  mov dword ptr [0x10108], 0
    X86_AT(c, 0xc56cfu);
    wr32((c.sbase[3] + (uint32_t)(0x10108u)), 0x0u);
L_c56d9:
    X86_TICK(c, 14);
    // 0c56d9  pop edi
    X86_AT(c, 0xc56d9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c56da  ret 
    X86_AT(c, 0xc56dau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc56a4u, "ran off the end of a function");
}
void f_000c56dc(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0c56dc  call 0xe3fce
    X86_AT(c, 0xc56dcu);
    push32(c, 0xc56e1u); x86_call_known(c, 0xe3fceu, f_000e3fce); X86_RET(c, 0xc56e1u);
    X86_TICK(c, 12);
    // 0c56e1  sub eax, eax
    X86_AT(c, 0xc56e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c56e3  ret 
    X86_AT(c, 0xc56e3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc56dcu, "ran off the end of a function");
}
void f_000c5724(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c5724  push 0xffffffff
    X86_AT(c, 0xc5724u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c5726  call 0xe3a91
    X86_AT(c, 0xc5726u);
    push32(c, 0xc572bu); x86_call_known(c, 0xe3a91u, f_000e3a91); X86_RET(c, 0xc572bu);
    X86_TICK(c, 9);
    // 0c572b  push 1
    X86_AT(c, 0xc572bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c572d  call 0xe3a67
    X86_AT(c, 0xc572du);
    push32(c, 0xc5732u); x86_call_known(c, 0xe3a67u, f_000e3a67); X86_RET(c, 0xc5732u);
    X86_TICK(c, 14);
    // 0c5732  sub eax, eax
    X86_AT(c, 0xc5732u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c5734  add esp, 8
    X86_AT(c, 0xc5734u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c5737  ret 
    X86_AT(c, 0xc5737u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5724u, "ran off the end of a function");
}
void f_000c5738(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0c5738  push ebp
    X86_AT(c, 0xc5738u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5739  mov ebp, esp
    X86_AT(c, 0xc5739u);
    c.r[5] = c.r[4];
    // 0c573b  push ebx
    X86_AT(c, 0xc573bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c573c  push esi
    X86_AT(c, 0xc573cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c573d  push edi
    X86_AT(c, 0xc573du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c573e  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc573eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c5741  push 0x108e
    X86_AT(c, 0xc5741u);
    { uint32_t v = 0x108Eu; push32(c, v); }
    // 0c5746  push dword ptr [ebp + 8]
    X86_AT(c, 0xc5746u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c5749  call 0xe6e04
    X86_AT(c, 0xc5749u);
    push32(c, 0xc574eu); x86_call_known(c, 0xe6e04u, f_000e6e04); X86_RET(c, 0xc574eu);
    X86_TICK(c, 12);
    // 0c574e  add esp, 8
    X86_AT(c, 0xc574eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c5751  xchg esi, eax
    X86_AT(c, 0xc5751u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c5752  and esi, esi
    X86_AT(c, 0xc5752u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c5754  jne 0xc5767
    X86_AT(c, 0xc5754u);
    if (x86_cc(c, 5)) { goto L_c5767; }
    X86_TICK(c, 9);
    // 0c5756  push 0x1094
    X86_AT(c, 0xc5756u);
    { uint32_t v = 0x1094u; push32(c, v); }
    // 0c575b  call 0xcad60
    X86_AT(c, 0xc575bu);
    push32(c, 0xc5760u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xc5760u);
    X86_TICK(c, 9);
    // 0c5760  mov eax, 1
    X86_AT(c, 0xc5760u);
    c.r[0] = 0x1u;
    // 0c5765  jmp 0xc57b4
    X86_AT(c, 0xc5765u);
    goto L_c57b4;
L_c5767:
    X86_TICK(c, 12);
    // 0c5767  cmp dword ptr [ebp + 0x10], 0x20
    X86_AT(c, 0xc5767u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x20u, 0, 4);
    // 0c576b  jl 0xc579f
    X86_AT(c, 0xc576bu);
    if (x86_cc(c, 12)) { goto L_c579f; }
    X86_TICK(c, 15);
    // 0c576d  push esi
    X86_AT(c, 0xc576du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c576e  push 0x20
    X86_AT(c, 0xc576eu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c5770  push 1
    X86_AT(c, 0xc5770u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c5772  push edi
    X86_AT(c, 0xc5772u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5773  call 0xe6b28
    X86_AT(c, 0xc5773u);
    push32(c, 0xc5778u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc5778u);
    X86_TICK(c, 9);
    // 0c5778  add esp, 0x10
    X86_AT(c, 0xc5778u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c577b  cmp eax, 0x20
    X86_AT(c, 0xc577bu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0c577e  jl 0xc579f
    X86_AT(c, 0xc577eu);
    if (x86_cc(c, 12)) { goto L_c579f; }
    X86_TICK(c, 17);
    // 0c5780  mov ebx, dword ptr [edi + 0xc]
    X86_AT(c, 0xc5780u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0c5783  lea eax, [ebx + 0x20]
    X86_AT(c, 0xc5783u);
    c.r[0] = (uint32_t)(c.r[3] + 0x20u);
    // 0c5786  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc5786u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0c5789  jg 0xc579f
    X86_AT(c, 0xc5789u);
    if (x86_cc(c, 15)) { goto L_c579f; }
    X86_TICK(c, 17);
    // 0c578b  push esi
    X86_AT(c, 0xc578bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c578c  push ebx
    X86_AT(c, 0xc578cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c578d  push 1
    X86_AT(c, 0xc578du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c578f  lea eax, [edi + 0x20]
    X86_AT(c, 0xc578fu);
    c.r[0] = (uint32_t)(c.r[7] + 0x20u);
    // 0c5792  push eax
    X86_AT(c, 0xc5792u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5793  call 0xe6b28
    X86_AT(c, 0xc5793u);
    push32(c, 0xc5798u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc5798u);
    X86_TICK(c, 9);
    // 0c5798  add esp, 0x10
    X86_AT(c, 0xc5798u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c579b  cmp ebx, eax
    X86_AT(c, 0xc579bu);
    (void)x86_sub(c, c.r[3], c.r[0], 0, 4);
    // 0c579d  jle 0xc57ac
    X86_AT(c, 0xc579du);
    if (x86_cc(c, 14)) { goto L_c57ac; }
L_c579f:
    X86_TICK(c, 9);
    // 0c579f  push esi
    X86_AT(c, 0xc579fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c57a0  call 0xe7300
    X86_AT(c, 0xc57a0u);
    push32(c, 0xc57a5u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xc57a5u);
    X86_TICK(c, 9);
    // 0c57a5  mov eax, 2
    X86_AT(c, 0xc57a5u);
    c.r[0] = 0x2u;
    // 0c57aa  jmp 0xc57b4
    X86_AT(c, 0xc57aau);
    goto L_c57b4;
L_c57ac:
    X86_TICK(c, 9);
    // 0c57ac  push esi
    X86_AT(c, 0xc57acu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c57ad  call 0xe7300
    X86_AT(c, 0xc57adu);
    push32(c, 0xc57b2u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xc57b2u);
    X86_TICK(c, 2);
    // 0c57b2  sub eax, eax
    X86_AT(c, 0xc57b2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c57b4:
    X86_TICK(c, 30);
    // 0c57b4  add esp, 4
    X86_AT(c, 0xc57b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c57b7  pop edi
    X86_AT(c, 0xc57b7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c57b8  pop esi
    X86_AT(c, 0xc57b8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c57b9  pop ebx
    X86_AT(c, 0xc57b9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c57ba  leave 
    X86_AT(c, 0xc57bau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c57bb  ret 
    X86_AT(c, 0xc57bbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5738u, "ran off the end of a function");
}
void f_000c5948(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c5948  push 0x47
    X86_AT(c, 0xc5948u);
    { uint32_t v = 0x47u; push32(c, v); }
    // 0c594a  call 0xe3b2d
    X86_AT(c, 0xc594au);
    push32(c, 0xc594fu); x86_call_known(c, 0xe3b2du, f_000e3b2d); X86_RET(c, 0xc594fu);
    X86_TICK(c, 14);
    // 0c594f  sub eax, eax
    X86_AT(c, 0xc594fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c5951  add esp, 4
    X86_AT(c, 0xc5951u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5954  ret 
    X86_AT(c, 0xc5954u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5948u, "ran off the end of a function");
}
void f_000c5958(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0c5958  push ebx
    X86_AT(c, 0xc5958u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c5959  push esi
    X86_AT(c, 0xc5959u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c595a  push edi
    X86_AT(c, 0xc595au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c595b  cmp dword ptr [0x100f0], 0
    X86_AT(c, 0xc595bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x100F0u))), 0x0u, 0, 4);
    // 0c5962  jne 0xc5972
    X86_AT(c, 0xc5962u);
    if (x86_cc(c, 5)) { goto L_c5972; }
    X86_TICK(c, 11);
    // 0c5964  mov dword ptr [0x100f0], 1
    X86_AT(c, 0xc5964u);
    wr32((c.sbase[3] + (uint32_t)(0x100F0u)), 0x1u);
    // 0c596e  sub esi, esi
    X86_AT(c, 0xc596eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c5970  jmp 0xc5981
    X86_AT(c, 0xc5970u);
    goto L_c5981;
L_c5972:
    X86_TICK(c, 4);
    // 0c5972  mov dword ptr [0x100f0], 0
    X86_AT(c, 0xc5972u);
    wr32((c.sbase[3] + (uint32_t)(0x100F0u)), 0x0u);
    // 0c597c  mov esi, 1
    X86_AT(c, 0xc597cu);
    c.r[6] = 0x1u;
L_c5981:
    X86_TICK(c, 8);
    // 0c5981  mov eax, dword ptr [0x100f0]
    X86_AT(c, 0xc5981u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x100F0u)));
    // 0c5986  mov edi, dword ptr [eax*4 + 0x100f4]
    X86_AT(c, 0xc5986u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x100F4u)));
L_c598d:
    X86_TICK(c, 14);
    // 0c598d  mov eax, 0x100ec
    X86_AT(c, 0xc598du);
    c.r[0] = 0x100ECu;
    // 0c5992  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0xc5992u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 0c5996  jne 0xc5a01
    X86_AT(c, 0xc5996u);
    if (x86_cc(c, 5)) { goto L_c5a01; }
    X86_TICK(c, 15);
    // 0c5998  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0xc5998u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0c599b  cmp edi, dword ptr [eax + edx*4 + 0x10]
    X86_AT(c, 0xc599bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x10u))), 0, 4);
    // 0c599f  ja 0xc5a01
    X86_AT(c, 0xc599fu);
    if (x86_cc(c, 7)) { goto L_c5a01; }
    X86_TICK(c, 18);
    // 0c59a1  push dword ptr [eax + 0x68]
    X86_AT(c, 0xc59a1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 0c59a4  push 6
    X86_AT(c, 0xc59a4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c59a6  push 1
    X86_AT(c, 0xc59a6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c59a8  push edi
    X86_AT(c, 0xc59a8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c59a9  call 0xe6b28
    X86_AT(c, 0xc59a9u);
    push32(c, 0xc59aeu); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xc59aeu);
    X86_TICK(c, 9);
    // 0c59ae  add esp, 0x10
    X86_AT(c, 0xc59aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c59b1  cmp eax, 6
    X86_AT(c, 0xc59b1u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 0c59b4  jge 0xc59d5
    X86_AT(c, 0xc59b4u);
    if (x86_cc(c, 13)) { goto L_c59d5; }
    X86_TICK(c, 12);
    // 0c59b6  push dword ptr [0x10154]
    X86_AT(c, 0xc59b6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c59bc  call 0xe7300
    X86_AT(c, 0xc59bcu);
    push32(c, 0xc59c1u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xc59c1u);
    X86_TICK(c, 13);
    // 0c59c1  mov dword ptr [0x10154], 0
    X86_AT(c, 0xc59c1u);
    wr32((c.sbase[3] + (uint32_t)(0x10154u)), 0x0u);
    // 0c59cb  mov eax, 2
    X86_AT(c, 0xc59cbu);
    c.r[0] = 0x2u;
    // 0c59d0  add esp, 4
    X86_AT(c, 0xc59d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c59d3  jmp 0xc5a2e
    X86_AT(c, 0xc59d3u);
    goto L_c5a2e;
L_c59d5:
    X86_TICK(c, 12);
    // 0c59d5  cmp byte ptr [edi], 0xfe
    X86_AT(c, 0xc59d5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xFEu, 0, 1);
    // 0c59d8  jne 0xc59fc
    X86_AT(c, 0xc59d8u);
    if (x86_cc(c, 5)) { goto L_c59fc; }
    X86_TICK(c, 14);
    // 0c59da  mov dword ptr [0x10150], 1
    X86_AT(c, 0xc59dau);
    wr32((c.sbase[3] + (uint32_t)(0x10150u)), 0x1u);
    // 0c59e4  push dword ptr [0x10154]
    X86_AT(c, 0xc59e4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10154u))); push32(c, v); }
    // 0c59ea  call 0xe7300
    X86_AT(c, 0xc59eau);
    push32(c, 0xc59efu); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xc59efu);
    X86_TICK(c, 4);
    // 0c59ef  mov dword ptr [0x10154], 0
    X86_AT(c, 0xc59efu);
    wr32((c.sbase[3] + (uint32_t)(0x10154u)), 0x0u);
    // 0c59f9  add esp, 4
    X86_AT(c, 0xc59f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c59fc:
    X86_TICK(c, 9);
    // 0c59fc  add edi, 6
    X86_AT(c, 0xc59fcu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0c59ff  jmp 0xc598d
    X86_AT(c, 0xc59ffu);
    X86_POLL(c, 0xc598du); goto L_c598d;
L_c5a01:
    X86_TICK(c, 18);
    // 0c5a01  mov eax, 0x100ec
    X86_AT(c, 0xc5a01u);
    c.r[0] = 0x100ECu;
    // 0c5a06  mov bl, byte ptr [eax + 0x18]
    X86_AT(c, 0xc5a06u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x18u))));
    // 0c5a09  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0xc5a09u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 0c5a0d  jne 0xc5a1e
    X86_AT(c, 0xc5a0du);
    if (x86_cc(c, 5)) { goto L_c5a1e; }
    X86_TICK(c, 16);
    // 0c5a0f  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0xc5a0fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0c5a12  mov edx, dword ptr [eax + edx*4 + 0x10]
    X86_AT(c, 0xc5a12u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x10u)));
    // 0c5a16  mov cl, byte ptr [edx]
    X86_AT(c, 0xc5a16u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0c5a18  mov byte ptr [eax + 0x18], cl
    X86_AT(c, 0xc5a18u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x18u)), g8(c, 1));
    // 0c5a1b  mov byte ptr [edx], 0xfd
    X86_AT(c, 0xc5a1bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0xFDu);
L_c5a1e:
    X86_TICK(c, 13);
    // 0c5a1e  mov eax, dword ptr [esi*4 + 0x100fc]
    X86_AT(c, 0xc5a1eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x100FCu)));
    // 0c5a25  mov byte ptr [eax], bl
    X86_AT(c, 0xc5a25u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), g8(c, 3));
    // 0c5a27  call 0xe3fe4
    X86_AT(c, 0xc5a27u);
    push32(c, 0xc5a2cu); x86_call_known(c, 0xe3fe4u, f_000e3fe4); X86_RET(c, 0xc5a2cu);
    X86_TICK(c, 2);
    // 0c5a2c  sub eax, eax
    X86_AT(c, 0xc5a2cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5a2e:
    X86_TICK(c, 22);
    // 0c5a2e  pop edi
    X86_AT(c, 0xc5a2eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5a2f  pop esi
    X86_AT(c, 0xc5a2fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c5a30  pop ebx
    X86_AT(c, 0xc5a30u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c5a31  ret 
    X86_AT(c, 0xc5a31u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5958u, "ran off the end of a function");
}
void f_000c5a34(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c5a34  push 0x95f0
    X86_AT(c, 0xc5a34u);
    { uint32_t v = 0x95F0u; push32(c, v); }
    // 0c5a39  call 0xe77d8
    X86_AT(c, 0xc5a39u);
    push32(c, 0xc5a3eu); x86_call_known(c, 0xe77d8u, f_000e77d8); X86_RET(c, 0xc5a3eu);
    X86_TICK(c, 11);
    // 0c5a3e  add esp, 4
    X86_AT(c, 0xc5a3eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5a41  mov dword ptr [0x10140], eax
    X86_AT(c, 0xc5a41u);
    wr32((c.sbase[3] + (uint32_t)(0x10140u)), c.r[0]);
    // 0c5a46  and eax, eax
    X86_AT(c, 0xc5a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5a48  jne 0xc5a5e
    X86_AT(c, 0xc5a48u);
    if (x86_cc(c, 5)) { goto L_c5a5e; }
    X86_TICK(c, 9);
    // 0c5a4a  push 0x10e4
    X86_AT(c, 0xc5a4au);
    { uint32_t v = 0x10E4u; push32(c, v); }
    // 0c5a4f  call 0xcad60
    X86_AT(c, 0xc5a4fu);
    push32(c, 0xc5a54u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xc5a54u);
    X86_TICK(c, 11);
    // 0c5a54  mov eax, 0xffffffff
    X86_AT(c, 0xc5a54u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c5a59  add esp, 4
    X86_AT(c, 0xc5a59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5a5c  jmp 0xc5abb
    X86_AT(c, 0xc5a5cu);
    goto L_c5abb;
L_c5a5e:
    X86_TICK(c, 17);
    // 0c5a5e  mov eax, dword ptr [0x10140]
    X86_AT(c, 0xc5a5eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x10140u)));
    // 0c5a63  lea edx, [eax + 0x4000]
    X86_AT(c, 0xc5a63u);
    c.r[2] = (uint32_t)(c.r[0] + 0x4000u);
    // 0c5a69  mov dword ptr [0x10144], edx
    X86_AT(c, 0xc5a69u);
    wr32((c.sbase[3] + (uint32_t)(0x10144u)), c.r[2]);
    // 0c5a6f  push eax
    X86_AT(c, 0xc5a6fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5a70  call 0xe3807
    X86_AT(c, 0xc5a70u);
    push32(c, 0xc5a75u); x86_call_known(c, 0xe3807u, f_000e3807); X86_RET(c, 0xc5a75u);
    X86_TICK(c, 9);
    // 0c5a75  add esp, 4
    X86_AT(c, 0xc5a75u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5a78  and eax, eax
    X86_AT(c, 0xc5a78u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5a7a  je 0xc5a9b
    X86_AT(c, 0xc5a7au);
    if (x86_cc(c, 4)) { goto L_c5a9b; }
    X86_TICK(c, 9);
    // 0c5a7c  push 0x1128
    X86_AT(c, 0xc5a7cu);
    { uint32_t v = 0x1128u; push32(c, v); }
    // 0c5a81  call 0xcad60
    X86_AT(c, 0xc5a81u);
    push32(c, 0xc5a86u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xc5a86u);
    X86_TICK(c, 12);
    // 0c5a86  push dword ptr [0x10140]
    X86_AT(c, 0xc5a86u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10140u))); push32(c, v); }
    // 0c5a8c  call 0xe77c4
    X86_AT(c, 0xc5a8cu);
    push32(c, 0xc5a91u); x86_call_known(c, 0xe77c4u, f_000e77c4); X86_RET(c, 0xc5a91u);
    X86_TICK(c, 11);
    // 0c5a91  mov eax, 0xffffffff
    X86_AT(c, 0xc5a91u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c5a96  add esp, 8
    X86_AT(c, 0xc5a96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c5a99  jmp 0xc5abb
    X86_AT(c, 0xc5a99u);
    goto L_c5abb;
L_c5a9b:
    X86_TICK(c, 7);
    // 0c5a9b  call 0xc5724
    X86_AT(c, 0xc5a9bu);
    push32(c, 0xc5aa0u); x86_call_known(c, 0xc5724u, f_000c5724); X86_RET(c, 0xc5aa0u);
    X86_TICK(c, 19);
    // 0c5aa0  push dword ptr [0x10140]
    X86_AT(c, 0xc5aa0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10140u))); push32(c, v); }
    // 0c5aa6  push 0x55f0
    X86_AT(c, 0xc5aa6u);
    { uint32_t v = 0x55F0u; push32(c, v); }
    // 0c5aab  push dword ptr [0x10144]
    X86_AT(c, 0xc5aabu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10144u))); push32(c, v); }
    // 0c5ab1  call 0xc5144
    X86_AT(c, 0xc5ab1u);
    push32(c, 0xc5ab6u); x86_call_known(c, 0xc5144u, f_000c5144); X86_RET(c, 0xc5ab6u);
    X86_TICK(c, 4);
    // 0c5ab6  sub eax, eax
    X86_AT(c, 0xc5ab6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c5ab8  add esp, 0xc
    X86_AT(c, 0xc5ab8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c5abb:
    X86_TICK(c, 10);
    // 0c5abb  ret 
    X86_AT(c, 0xc5abbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5a34u, "ran off the end of a function");
}
void f_000c5abc(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c5abc  push dword ptr [0x10140]
    X86_AT(c, 0xc5abcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10140u))); push32(c, v); }
    // 0c5ac2  call 0xe77c4
    X86_AT(c, 0xc5ac2u);
    push32(c, 0xc5ac7u); x86_call_known(c, 0xe77c4u, f_000e77c4); X86_RET(c, 0xc5ac7u);
    X86_TICK(c, 7);
    // 0c5ac7  call 0xe386e
    X86_AT(c, 0xc5ac7u);
    push32(c, 0xc5accu); x86_call_known(c, 0xe386eu, f_000e386e); X86_RET(c, 0xc5accu);
    X86_TICK(c, 12);
    // 0c5acc  add esp, 4
    X86_AT(c, 0xc5accu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5acf  ret 
    X86_AT(c, 0xc5acfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5abcu, "ran off the end of a function");
}
void f_000c5ad0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0c5ad0  push ebp
    X86_AT(c, 0xc5ad0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5ad1  mov ebp, esp
    X86_AT(c, 0xc5ad1u);
    c.r[5] = c.r[4];
    // 0c5ad3  push dword ptr [ebp + 8]
    X86_AT(c, 0xc5ad3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c5ad6  call 0xc51d0
    X86_AT(c, 0xc5ad6u);
    push32(c, 0xc5adbu); x86_call_known(c, 0xc51d0u, f_000c51d0); X86_RET(c, 0xc5adbu);
    X86_TICK(c, 9);
    // 0c5adb  add esp, 4
    X86_AT(c, 0xc5adbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5ade  inc eax
    X86_AT(c, 0xc5adeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5adf  je 0xc5aef
    X86_AT(c, 0xc5adfu);
    if (x86_cc(c, 4)) { goto L_c5aef; }
    X86_TICK(c, 17);
    // 0c5ae1  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xc5ae1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0c5ae4  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xc5ae4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0c5ae7  call 0xc5598
    X86_AT(c, 0xc5ae7u);
    push32(c, 0xc5aecu); x86_call_known(c, 0xc5598u, f_000c5598); X86_RET(c, 0xc5aecu);
    X86_TICK(c, 2);
    // 0c5aec  add esp, 8
    X86_AT(c, 0xc5aecu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c5aef:
    X86_TICK(c, 16);
    // 0c5aef  leave 
    X86_AT(c, 0xc5aefu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5af0  ret 
    X86_AT(c, 0xc5af0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5ad0u, "ran off the end of a function");
}
void f_000c5af4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0c5af4  push edi
    X86_AT(c, 0xc5af4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5af5  mov edi, 0xffffffff
    X86_AT(c, 0xc5af5u);
    c.r[7] = 0xFFFFFFFFu;
    // 0c5afa  push 0xb20
    X86_AT(c, 0xc5afau);
    { uint32_t v = 0xB20u; push32(c, v); }
    // 0c5aff  push 0x10158
    X86_AT(c, 0xc5affu);
    { uint32_t v = 0x10158u; push32(c, v); }
    // 0c5b04  push 0x1170
    X86_AT(c, 0xc5b04u);
    { uint32_t v = 0x1170u; push32(c, v); }
    // 0c5b09  call 0xc5738
    X86_AT(c, 0xc5b09u);
    push32(c, 0xc5b0eu); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5b0eu);
    X86_TICK(c, 9);
    // 0c5b0e  add esp, 0xc
    X86_AT(c, 0xc5b0eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5b11  and eax, eax
    X86_AT(c, 0xc5b11u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5b13  je 0xc5b17
    X86_AT(c, 0xc5b13u);
    if (x86_cc(c, 4)) { goto L_c5b17; }
    X86_TICK(c, 2);
    // 0c5b15  sub edi, edi
    X86_AT(c, 0xc5b15u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5b17:
    X86_TICK(c, 13);
    // 0c5b17  push 0x46f
    X86_AT(c, 0xc5b17u);
    { uint32_t v = 0x46Fu; push32(c, v); }
    // 0c5b1c  push 0x16360
    X86_AT(c, 0xc5b1cu);
    { uint32_t v = 0x16360u; push32(c, v); }
    // 0c5b21  push 0x1180
    X86_AT(c, 0xc5b21u);
    { uint32_t v = 0x1180u; push32(c, v); }
    // 0c5b26  call 0xc5738
    X86_AT(c, 0xc5b26u);
    push32(c, 0xc5b2bu); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5b2bu);
    X86_TICK(c, 9);
    // 0c5b2b  add esp, 0xc
    X86_AT(c, 0xc5b2bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5b2e  and eax, eax
    X86_AT(c, 0xc5b2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5b30  je 0xc5b34
    X86_AT(c, 0xc5b30u);
    if (x86_cc(c, 4)) { goto L_c5b34; }
    X86_TICK(c, 2);
    // 0c5b32  sub edi, edi
    X86_AT(c, 0xc5b32u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5b34:
    X86_TICK(c, 13);
    // 0c5b34  push 0x939
    X86_AT(c, 0xc5b34u);
    { uint32_t v = 0x939u; push32(c, v); }
    // 0c5b39  push 0x10c78
    X86_AT(c, 0xc5b39u);
    { uint32_t v = 0x10C78u; push32(c, v); }
    // 0c5b3e  push 0x1190
    X86_AT(c, 0xc5b3eu);
    { uint32_t v = 0x1190u; push32(c, v); }
    // 0c5b43  call 0xc5738
    X86_AT(c, 0xc5b43u);
    push32(c, 0xc5b48u); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5b48u);
    X86_TICK(c, 9);
    // 0c5b48  add esp, 0xc
    X86_AT(c, 0xc5b48u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5b4b  and eax, eax
    X86_AT(c, 0xc5b4bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5b4d  je 0xc5b51
    X86_AT(c, 0xc5b4du);
    if (x86_cc(c, 4)) { goto L_c5b51; }
    X86_TICK(c, 2);
    // 0c5b4f  sub edi, edi
    X86_AT(c, 0xc5b4fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5b51:
    X86_TICK(c, 13);
    // 0c5b51  push 0x4042
    X86_AT(c, 0xc5b51u);
    { uint32_t v = 0x4042u; push32(c, v); }
    // 0c5b56  push 0x115b4
    X86_AT(c, 0xc5b56u);
    { uint32_t v = 0x115B4u; push32(c, v); }
    // 0c5b5b  push 0x11a0
    X86_AT(c, 0xc5b5bu);
    { uint32_t v = 0x11A0u; push32(c, v); }
    // 0c5b60  call 0xc5738
    X86_AT(c, 0xc5b60u);
    push32(c, 0xc5b65u); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5b65u);
    X86_TICK(c, 9);
    // 0c5b65  add esp, 0xc
    X86_AT(c, 0xc5b65u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5b68  and eax, eax
    X86_AT(c, 0xc5b68u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5b6a  je 0xc5b6e
    X86_AT(c, 0xc5b6au);
    if (x86_cc(c, 4)) { goto L_c5b6e; }
    X86_TICK(c, 2);
    // 0c5b6c  sub edi, edi
    X86_AT(c, 0xc5b6cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5b6e:
    X86_TICK(c, 13);
    // 0c5b6e  push 0xd66
    X86_AT(c, 0xc5b6eu);
    { uint32_t v = 0xD66u; push32(c, v); }
    // 0c5b73  push 0x155f8
    X86_AT(c, 0xc5b73u);
    { uint32_t v = 0x155F8u; push32(c, v); }
    // 0c5b78  push 0x11b4
    X86_AT(c, 0xc5b78u);
    { uint32_t v = 0x11B4u; push32(c, v); }
    // 0c5b7d  call 0xc5738
    X86_AT(c, 0xc5b7du);
    push32(c, 0xc5b82u); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5b82u);
    X86_TICK(c, 9);
    // 0c5b82  add esp, 0xc
    X86_AT(c, 0xc5b82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5b85  and eax, eax
    X86_AT(c, 0xc5b85u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5b87  je 0xc5b8b
    X86_AT(c, 0xc5b87u);
    if (x86_cc(c, 4)) { goto L_c5b8b; }
    X86_TICK(c, 2);
    // 0c5b89  sub edi, edi
    X86_AT(c, 0xc5b89u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5b8b:
    X86_TICK(c, 13);
    // 0c5b8b  push 0x50cc
    X86_AT(c, 0xc5b8bu);
    { uint32_t v = 0x50CCu; push32(c, v); }
    // 0c5b90  push 0x167d0
    X86_AT(c, 0xc5b90u);
    { uint32_t v = 0x167D0u; push32(c, v); }
    // 0c5b95  push 0x11c4
    X86_AT(c, 0xc5b95u);
    { uint32_t v = 0x11C4u; push32(c, v); }
    // 0c5b9a  call 0xc5738
    X86_AT(c, 0xc5b9au);
    push32(c, 0xc5b9fu); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5b9fu);
    X86_TICK(c, 9);
    // 0c5b9f  add esp, 0xc
    X86_AT(c, 0xc5b9fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5ba2  and eax, eax
    X86_AT(c, 0xc5ba2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5ba4  je 0xc5ba8
    X86_AT(c, 0xc5ba4u);
    if (x86_cc(c, 4)) { goto L_c5ba8; }
    X86_TICK(c, 2);
    // 0c5ba6  sub edi, edi
    X86_AT(c, 0xc5ba6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5ba8:
    X86_TICK(c, 13);
    // 0c5ba8  push 0x190d
    X86_AT(c, 0xc5ba8u);
    { uint32_t v = 0x190Du; push32(c, v); }
    // 0c5bad  push 0x1b89c
    X86_AT(c, 0xc5badu);
    { uint32_t v = 0x1B89Cu; push32(c, v); }
    // 0c5bb2  push 0x11d8
    X86_AT(c, 0xc5bb2u);
    { uint32_t v = 0x11D8u; push32(c, v); }
    // 0c5bb7  call 0xc5738
    X86_AT(c, 0xc5bb7u);
    push32(c, 0xc5bbcu); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5bbcu);
    X86_TICK(c, 9);
    // 0c5bbc  add esp, 0xc
    X86_AT(c, 0xc5bbcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5bbf  and eax, eax
    X86_AT(c, 0xc5bbfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5bc1  je 0xc5bc5
    X86_AT(c, 0xc5bc1u);
    if (x86_cc(c, 4)) { goto L_c5bc5; }
    X86_TICK(c, 2);
    // 0c5bc3  sub edi, edi
    X86_AT(c, 0xc5bc3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5bc5:
    X86_TICK(c, 13);
    // 0c5bc5  push 0x407a
    X86_AT(c, 0xc5bc5u);
    { uint32_t v = 0x407Au; push32(c, v); }
    // 0c5bca  push 0x1d1ac
    X86_AT(c, 0xc5bcau);
    { uint32_t v = 0x1D1ACu; push32(c, v); }
    // 0c5bcf  push 0x11ec
    X86_AT(c, 0xc5bcfu);
    { uint32_t v = 0x11ECu; push32(c, v); }
    // 0c5bd4  call 0xc5738
    X86_AT(c, 0xc5bd4u);
    push32(c, 0xc5bd9u); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5bd9u);
    X86_TICK(c, 9);
    // 0c5bd9  add esp, 0xc
    X86_AT(c, 0xc5bd9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5bdc  and eax, eax
    X86_AT(c, 0xc5bdcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5bde  je 0xc5be2
    X86_AT(c, 0xc5bdeu);
    if (x86_cc(c, 4)) { goto L_c5be2; }
    X86_TICK(c, 2);
    // 0c5be0  sub edi, edi
    X86_AT(c, 0xc5be0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5be2:
    X86_TICK(c, 13);
    // 0c5be2  push 0x217a
    X86_AT(c, 0xc5be2u);
    { uint32_t v = 0x217Au; push32(c, v); }
    // 0c5be7  push 0x21228
    X86_AT(c, 0xc5be7u);
    { uint32_t v = 0x21228u; push32(c, v); }
    // 0c5bec  push 0x1200
    X86_AT(c, 0xc5becu);
    { uint32_t v = 0x1200u; push32(c, v); }
    // 0c5bf1  call 0xc5738
    X86_AT(c, 0xc5bf1u);
    push32(c, 0xc5bf6u); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5bf6u);
    X86_TICK(c, 9);
    // 0c5bf6  add esp, 0xc
    X86_AT(c, 0xc5bf6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5bf9  and eax, eax
    X86_AT(c, 0xc5bf9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5bfb  je 0xc5bff
    X86_AT(c, 0xc5bfbu);
    if (x86_cc(c, 4)) { goto L_c5bff; }
    X86_TICK(c, 2);
    // 0c5bfd  sub edi, edi
    X86_AT(c, 0xc5bfdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5bff:
    X86_TICK(c, 13);
    // 0c5bff  push 0x3f2d
    X86_AT(c, 0xc5bffu);
    { uint32_t v = 0x3F2Du; push32(c, v); }
    // 0c5c04  push 0x233a4
    X86_AT(c, 0xc5c04u);
    { uint32_t v = 0x233A4u; push32(c, v); }
    // 0c5c09  push 0x1214
    X86_AT(c, 0xc5c09u);
    { uint32_t v = 0x1214u; push32(c, v); }
    // 0c5c0e  call 0xc5738
    X86_AT(c, 0xc5c0eu);
    push32(c, 0xc5c13u); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5c13u);
    X86_TICK(c, 9);
    // 0c5c13  add esp, 0xc
    X86_AT(c, 0xc5c13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5c16  and eax, eax
    X86_AT(c, 0xc5c16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5c18  je 0xc5c1c
    X86_AT(c, 0xc5c18u);
    if (x86_cc(c, 4)) { goto L_c5c1c; }
    X86_TICK(c, 2);
    // 0c5c1a  sub edi, edi
    X86_AT(c, 0xc5c1au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5c1c:
    X86_TICK(c, 13);
    // 0c5c1c  push 0x30a2
    X86_AT(c, 0xc5c1cu);
    { uint32_t v = 0x30A2u; push32(c, v); }
    // 0c5c21  push 0x272d4
    X86_AT(c, 0xc5c21u);
    { uint32_t v = 0x272D4u; push32(c, v); }
    // 0c5c26  push 0x1228
    X86_AT(c, 0xc5c26u);
    { uint32_t v = 0x1228u; push32(c, v); }
    // 0c5c2b  call 0xc5738
    X86_AT(c, 0xc5c2bu);
    push32(c, 0xc5c30u); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5c30u);
    X86_TICK(c, 9);
    // 0c5c30  add esp, 0xc
    X86_AT(c, 0xc5c30u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5c33  and eax, eax
    X86_AT(c, 0xc5c33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5c35  je 0xc5c39
    X86_AT(c, 0xc5c35u);
    if (x86_cc(c, 4)) { goto L_c5c39; }
    X86_TICK(c, 2);
    // 0c5c37  sub edi, edi
    X86_AT(c, 0xc5c37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5c39:
    X86_TICK(c, 13);
    // 0c5c39  push 0x8ddd
    X86_AT(c, 0xc5c39u);
    { uint32_t v = 0x8DDDu; push32(c, v); }
    // 0c5c3e  push 0x38840
    X86_AT(c, 0xc5c3eu);
    { uint32_t v = 0x38840u; push32(c, v); }
    // 0c5c43  push 0x123c
    X86_AT(c, 0xc5c43u);
    { uint32_t v = 0x123Cu; push32(c, v); }
    // 0c5c48  call 0xc5738
    X86_AT(c, 0xc5c48u);
    push32(c, 0xc5c4du); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5c4du);
    X86_TICK(c, 9);
    // 0c5c4d  add esp, 0xc
    X86_AT(c, 0xc5c4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5c50  and eax, eax
    X86_AT(c, 0xc5c50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5c52  je 0xc5c56
    X86_AT(c, 0xc5c52u);
    if (x86_cc(c, 4)) { goto L_c5c56; }
    X86_TICK(c, 2);
    // 0c5c54  sub edi, edi
    X86_AT(c, 0xc5c54u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5c56:
    X86_TICK(c, 13);
    // 0c5c56  push 0xe4c7
    X86_AT(c, 0xc5c56u);
    { uint32_t v = 0xE4C7u; push32(c, v); }
    // 0c5c5b  push 0x2a378
    X86_AT(c, 0xc5c5bu);
    { uint32_t v = 0x2A378u; push32(c, v); }
    // 0c5c60  push 0x1250
    X86_AT(c, 0xc5c60u);
    { uint32_t v = 0x1250u; push32(c, v); }
    // 0c5c65  call 0xc5738
    X86_AT(c, 0xc5c65u);
    push32(c, 0xc5c6au); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5c6au);
    X86_TICK(c, 9);
    // 0c5c6a  add esp, 0xc
    X86_AT(c, 0xc5c6au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5c6d  and eax, eax
    X86_AT(c, 0xc5c6du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5c6f  je 0xc5c73
    X86_AT(c, 0xc5c6fu);
    if (x86_cc(c, 4)) { goto L_c5c73; }
    X86_TICK(c, 2);
    // 0c5c71  sub edi, edi
    X86_AT(c, 0xc5c71u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5c73:
    X86_TICK(c, 13);
    // 0c5c73  push 0x14a3
    X86_AT(c, 0xc5c73u);
    { uint32_t v = 0x14A3u; push32(c, v); }
    // 0c5c78  push 0x41620
    X86_AT(c, 0xc5c78u);
    { uint32_t v = 0x41620u; push32(c, v); }
    // 0c5c7d  push 0x1264
    X86_AT(c, 0xc5c7du);
    { uint32_t v = 0x1264u; push32(c, v); }
    // 0c5c82  call 0xc5738
    X86_AT(c, 0xc5c82u);
    push32(c, 0xc5c87u); x86_call_known(c, 0xc5738u, f_000c5738); X86_RET(c, 0xc5c87u);
    X86_TICK(c, 9);
    // 0c5c87  add esp, 0xc
    X86_AT(c, 0xc5c87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c5c8a  and eax, eax
    X86_AT(c, 0xc5c8au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5c8c  je 0xc5c90
    X86_AT(c, 0xc5c8cu);
    if (x86_cc(c, 4)) { goto L_c5c90; }
    X86_TICK(c, 2);
    // 0c5c8e  sub edi, edi
    X86_AT(c, 0xc5c8eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5c90:
    X86_TICK(c, 7);
    // 0c5c90  and edi, edi
    X86_AT(c, 0xc5c90u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c5c92  jne 0xc5ca1
    X86_AT(c, 0xc5c92u);
    if (x86_cc(c, 5)) { goto L_c5ca1; }
    X86_TICK(c, 9);
    // 0c5c94  push 0x1278
    X86_AT(c, 0xc5c94u);
    { uint32_t v = 0x1278u; push32(c, v); }
    // 0c5c99  call 0xcad60
    X86_AT(c, 0xc5c99u);
    push32(c, 0xc5c9eu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xc5c9eu);
    X86_TICK(c, 2);
    // 0c5c9e  add esp, 4
    X86_AT(c, 0xc5c9eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c5ca1:
    X86_TICK(c, 14);
    // 0c5ca1  pop edi
    X86_AT(c, 0xc5ca1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5ca2  ret 
    X86_AT(c, 0xc5ca2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5af4u, "ran off the end of a function");
}
void f_000c5ca4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0c5ca4  push ebp
    X86_AT(c, 0xc5ca4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5ca5  mov ebp, esp
    X86_AT(c, 0xc5ca5u);
    c.r[5] = c.r[4];
    // 0c5ca7  push edi
    X86_AT(c, 0xc5ca7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5ca8  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc5ca8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c5cab  call 0xc5948
    X86_AT(c, 0xc5cabu);
    push32(c, 0xc5cb0u); x86_call_known(c, 0xc5948u, f_000c5948); X86_RET(c, 0xc5cb0u);
    X86_TICK(c, 11);
    // 0c5cb0  push 0x40
    X86_AT(c, 0xc5cb0u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0c5cb2  push 0x47
    X86_AT(c, 0xc5cb2u);
    { uint32_t v = 0x47u; push32(c, v); }
    // 0c5cb4  call 0xe38c5
    X86_AT(c, 0xc5cb4u);
    push32(c, 0xc5cb9u); x86_call_known(c, 0xe38c5u, f_000e38c5); X86_RET(c, 0xc5cb9u);
    X86_TICK(c, 31);
    // 0c5cb9  sub eax, eax
    X86_AT(c, 0xc5cb9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c5cbb  mov edx, dword ptr [edi*4 + 0x42ac4]
    X86_AT(c, 0xc5cbbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0x42AC4u)));
    // 0c5cc2  mov dword ptr [edx + 0x10], eax
    X86_AT(c, 0xc5cc2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)), c.r[0]);
    // 0c5cc5  mov dword ptr [edx + 0x14], eax
    X86_AT(c, 0xc5cc5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x14u)), c.r[0]);
    // 0c5cc8  push edx
    X86_AT(c, 0xc5cc8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c5cc9  push 0x7f
    X86_AT(c, 0xc5cc9u);
    { uint32_t v = 0x7Fu; push32(c, v); }
    // 0c5ccb  movzx eax, byte ptr [edx + 0x1c]
    X86_AT(c, 0xc5ccbu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x1Cu)));
    // 0c5ccf  push eax
    X86_AT(c, 0xc5ccfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5cd0  push 0x47
    X86_AT(c, 0xc5cd0u);
    { uint32_t v = 0x47u; push32(c, v); }
    // 0c5cd2  call 0xe3b00
    X86_AT(c, 0xc5cd2u);
    push32(c, 0xc5cd7u); x86_call_known(c, 0xe3b00u, f_000e3b00); X86_RET(c, 0xc5cd7u);
    X86_TICK(c, 22);
    // 0c5cd7  add esp, 0x18
    X86_AT(c, 0xc5cd7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c5cda  pop edi
    X86_AT(c, 0xc5cdau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5cdb  leave 
    X86_AT(c, 0xc5cdbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5cdc  ret 
    X86_AT(c, 0xc5cdcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5ca4u, "ran off the end of a function");
}
void f_000c5ce0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0c5ce0  push ebp
    X86_AT(c, 0xc5ce0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5ce1  mov ebp, esp
    X86_AT(c, 0xc5ce1u);
    c.r[5] = c.r[4];
    // 0c5ce3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xc5ce3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0c5ce6  push dword ptr [ebp + 8]
    X86_AT(c, 0xc5ce6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c5ce9  push 1
    X86_AT(c, 0xc5ce9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c5ceb  call 0xe3e94
    X86_AT(c, 0xc5cebu);
    push32(c, 0xc5cf0u); x86_call_known(c, 0xe3e94u, f_000e3e94); X86_RET(c, 0xc5cf0u);
    X86_TICK(c, 16);
    // 0c5cf0  leave 
    X86_AT(c, 0xc5cf0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5cf1  ret 
    X86_AT(c, 0xc5cf1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5ce0u, "ran off the end of a function");
}
void f_000c5cf4(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0c5cf4  mov eax, 0x100ec
    X86_AT(c, 0xc5cf4u);
    c.r[0] = 0x100ECu;
    // 0c5cf9  inc word ptr [eax + 0x20]
    X86_AT(c, 0xc5cf9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0c5cfd  cmp word ptr [eax + 0x20], 4
    X86_AT(c, 0xc5cfdu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u))), 0x4u, 0, 2);
    // 0c5d02  jne 0xc5d0a
    X86_AT(c, 0xc5d02u);
    if (x86_cc(c, 5)) { goto L_c5d0a; }
    X86_TICK(c, 2);
    // 0c5d04  mov word ptr [eax + 0x20], 0
    X86_AT(c, 0xc5d04u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)), 0x0u);
L_c5d0a:
    X86_TICK(c, 9);
    // 0c5d0a  push 0xffffffff
    X86_AT(c, 0xc5d0au);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c5d0c  call 0xe3f1c
    X86_AT(c, 0xc5d0cu);
    push32(c, 0xc5d11u); x86_call_known(c, 0xe3f1cu, f_000e3f1c); X86_RET(c, 0xc5d11u);
    X86_TICK(c, 15);
    // 0c5d11  add esp, 4
    X86_AT(c, 0xc5d11u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5d14  movsx edx, word ptr [0x1010c]
    X86_AT(c, 0xc5d14u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x1010Cu)));
    // 0c5d1b  cmp edx, 3
    X86_AT(c, 0xc5d1bu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c5d1e  ja 0xc5d4e
    X86_AT(c, 0xc5d1eu);
    if (x86_cc(c, 7)) { goto L_c5d4e; }
    X86_TICK(c, 7);
    // 0c5d20  jmp dword ptr cs:[edx*4 + 0xc5d28]
    X86_AT(c, 0xc5d20u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC5D28u)));
      switch (t) {
      case 0xc5d38u: goto L_c5d38;
      case 0xc5d3cu: goto L_c5d3c;
      case 0xc5d40u: goto L_c5d40;
      case 0xc5d44u: goto L_c5d44;
      default: x86_jump(c, t); return; } }
L_c5d38:
    X86_TICK(c, 9);
    // 0c5d38  push 0x33
    X86_AT(c, 0xc5d38u);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0c5d3a  jmp 0xc5d46
    X86_AT(c, 0xc5d3au);
    goto L_c5d46;
L_c5d3c:
    X86_TICK(c, 9);
    // 0c5d3c  push 0x31
    X86_AT(c, 0xc5d3cu);
    { uint32_t v = 0x31u; push32(c, v); }
    // 0c5d3e  jmp 0xc5d46
    X86_AT(c, 0xc5d3eu);
    goto L_c5d46;
L_c5d40:
    X86_TICK(c, 9);
    // 0c5d40  push 0x32
    X86_AT(c, 0xc5d40u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0c5d42  jmp 0xc5d46
    X86_AT(c, 0xc5d42u);
    goto L_c5d46;
L_c5d44:
    X86_TICK(c, 2);
    // 0c5d44  push 0x30
    X86_AT(c, 0xc5d44u);
    { uint32_t v = 0x30u; push32(c, v); }
L_c5d46:
    X86_TICK(c, 7);
    // 0c5d46  call 0xe3ee5
    X86_AT(c, 0xc5d46u);
    push32(c, 0xc5d4bu); x86_call_known(c, 0xe3ee5u, f_000e3ee5); X86_RET(c, 0xc5d4bu);
    X86_TICK(c, 2);
    // 0c5d4b  add esp, 4
    X86_AT(c, 0xc5d4bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c5d4e:
    X86_TICK(c, 16);
    // 0c5d4e  movsx eax, word ptr [0x1010c]
    X86_AT(c, 0xc5d4eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x1010Cu)));
    // 0c5d55  ret 
    X86_AT(c, 0xc5d55u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5cf4u, "ran off the end of a function");
}
void f_000c5d58(X86Cpu& c) {
    X86_TICK(c, 58);
    // 0c5d58  push ebp
    X86_AT(c, 0xc5d58u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5d59  mov ebp, esp
    X86_AT(c, 0xc5d59u);
    c.r[5] = c.r[4];
    // 0c5d5b  mov eax, 0x100ec
    X86_AT(c, 0xc5d5bu);
    c.r[0] = 0x100ECu;
    // 0c5d60  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xc5d60u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c5d63  mov dword ptr [eax + 0x24], edx
    X86_AT(c, 0xc5d63u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x24u)), c.r[2]);
    // 0c5d66  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc5d66u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c5d69  mov dword ptr [eax + 0x28], edx
    X86_AT(c, 0xc5d69u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x28u)), c.r[2]);
    // 0c5d6c  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc5d6cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c5d6f  mov dword ptr [eax + 0x2c], edx
    X86_AT(c, 0xc5d6fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x2Cu)), c.r[2]);
    // 0c5d72  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc5d72u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c5d75  mov dword ptr [eax + 0x30], edx
    X86_AT(c, 0xc5d75u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x30u)), c.r[2]);
    // 0c5d78  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xc5d78u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0c5d7b  mov dword ptr [eax + 0x34], edx
    X86_AT(c, 0xc5d7bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x34u)), c.r[2]);
    // 0c5d7e  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xc5d7eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0c5d81  mov dword ptr [eax + 0x38], edx
    X86_AT(c, 0xc5d81u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x38u)), c.r[2]);
    // 0c5d84  leave 
    X86_AT(c, 0xc5d84u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5d85  ret 
    X86_AT(c, 0xc5d85u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5d58u, "ran off the end of a function");
}
void f_000c5d88(X86Cpu& c) {
    X86_TICK(c, 58);
    // 0c5d88  push ebp
    X86_AT(c, 0xc5d88u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5d89  mov ebp, esp
    X86_AT(c, 0xc5d89u);
    c.r[5] = c.r[4];
    // 0c5d8b  mov eax, 0x100ec
    X86_AT(c, 0xc5d8bu);
    c.r[0] = 0x100ECu;
    // 0c5d90  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xc5d90u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c5d93  mov dword ptr [eax + 0x3c], edx
    X86_AT(c, 0xc5d93u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x3Cu)), c.r[2]);
    // 0c5d96  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc5d96u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c5d99  mov dword ptr [eax + 0x40], edx
    X86_AT(c, 0xc5d99u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x40u)), c.r[2]);
    // 0c5d9c  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc5d9cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c5d9f  mov dword ptr [eax + 0x44], edx
    X86_AT(c, 0xc5d9fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x44u)), c.r[2]);
    // 0c5da2  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc5da2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c5da5  mov dword ptr [eax + 0x48], edx
    X86_AT(c, 0xc5da5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x48u)), c.r[2]);
    // 0c5da8  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xc5da8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0c5dab  mov dword ptr [eax + 0x4c], edx
    X86_AT(c, 0xc5dabu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4Cu)), c.r[2]);
    // 0c5dae  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xc5daeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0c5db1  mov dword ptr [eax + 0x50], edx
    X86_AT(c, 0xc5db1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x50u)), c.r[2]);
    // 0c5db4  leave 
    X86_AT(c, 0xc5db4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5db5  ret 
    X86_AT(c, 0xc5db5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5d88u, "ran off the end of a function");
}
void f_000c5db8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0c5db8  push ebp
    X86_AT(c, 0xc5db8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5db9  mov ebp, esp
    X86_AT(c, 0xc5db9u);
    c.r[5] = c.r[4];
    // 0c5dbb  call 0xe3b8a
    X86_AT(c, 0xc5dbbu);
    push32(c, 0xc5dc0u); x86_call_known(c, 0xe3b8au, f_000e3b8a); X86_RET(c, 0xc5dc0u);
    X86_TICK(c, 14);
    // 0c5dc0  mov dword ptr [0x42afc], eax
    X86_AT(c, 0xc5dc0u);
    wr32((c.sbase[3] + (uint32_t)(0x42AFCu)), c.r[0]);
    // 0c5dc5  push dword ptr [ebp + 8]
    X86_AT(c, 0xc5dc5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c5dc8  call 0xe3b74
    X86_AT(c, 0xc5dc8u);
    push32(c, 0xc5dcdu); x86_call_known(c, 0xe3b74u, f_000e3b74); X86_RET(c, 0xc5dcdu);
    X86_TICK(c, 16);
    // 0c5dcd  leave 
    X86_AT(c, 0xc5dcdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5dce  ret 
    X86_AT(c, 0xc5dceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5db8u, "ran off the end of a function");
}
void f_000c5de0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0c5de0  call 0xe78b4
    X86_AT(c, 0xc5de0u);
    push32(c, 0xc5de5u); x86_call_known(c, 0xe78b4u, f_000e78b4); X86_RET(c, 0xc5de5u);
    X86_TICK(c, 61);
    // 0c5de5  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xc5de5u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0c5de9  inc ecx
    X86_AT(c, 0xc5de9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5dea  cdq 
    X86_AT(c, 0xc5deau);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c5deb  idiv ecx
    X86_AT(c, 0xc5debu);
    x86_idiv(c, c.r[1], 4, 0xc5debu);
    // 0c5ded  xchg edx, eax
    X86_AT(c, 0xc5dedu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0c5dee  ret 
    X86_AT(c, 0xc5deeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5de0u, "ran off the end of a function");
}
void f_000c5df0(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0c5df0  push ebp
    X86_AT(c, 0xc5df0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5df1  mov ebp, esp
    X86_AT(c, 0xc5df1u);
    c.r[5] = c.r[4];
    // 0c5df3  push edi
    X86_AT(c, 0xc5df3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5df4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc5df4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c5df7  call 0xe78b4
    X86_AT(c, 0xc5df7u);
    push32(c, 0xc5dfcu); x86_call_known(c, 0xe78b4u, f_000e78b4); X86_RET(c, 0xc5dfcu);
    X86_TICK(c, 75);
    // 0c5dfc  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc5dfcu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c5dff  sub ecx, edi
    X86_AT(c, 0xc5dffu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c5e01  inc ecx
    X86_AT(c, 0xc5e01u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c5e02  cdq 
    X86_AT(c, 0xc5e02u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c5e03  idiv ecx
    X86_AT(c, 0xc5e03u);
    x86_idiv(c, c.r[1], 4, 0xc5e03u);
    // 0c5e05  add edx, edi
    X86_AT(c, 0xc5e05u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[7], 0, 4); }
    // 0c5e07  xchg edx, eax
    X86_AT(c, 0xc5e07u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0c5e08  pop edi
    X86_AT(c, 0xc5e08u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5e09  leave 
    X86_AT(c, 0xc5e09u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5e0a  ret 
    X86_AT(c, 0xc5e0au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5df0u, "ran off the end of a function");
}
void f_000c5e0c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0c5e0c  push ebp
    X86_AT(c, 0xc5e0cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5e0d  mov ebp, esp
    X86_AT(c, 0xc5e0du);
    c.r[5] = c.r[4];
    // 0c5e0f  sub esp, 8
    X86_AT(c, 0xc5e0fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c5e12  push 0
    X86_AT(c, 0xc5e12u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c5e14  call 0xe7804
    X86_AT(c, 0xc5e14u);
    push32(c, 0xc5e19u); x86_call_known(c, 0xe7804u, f_000e7804); X86_RET(c, 0xc5e19u);
    X86_TICK(c, 15);
    // 0c5e19  push edx
    X86_AT(c, 0xc5e19u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c5e1a  push eax
    X86_AT(c, 0xc5e1au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5e1b  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc5e1bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c5e1e  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc5e1eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c5e21  call 0xe82e0
    X86_AT(c, 0xc5e21u);
    push32(c, 0xc5e26u); x86_call_known(c, 0xe82e0u, f_000e82e0); X86_RET(c, 0xc5e26u);
    X86_TICK(c, 7);
    // 0c5e26  call 0xe80dc
    X86_AT(c, 0xc5e26u);
    push32(c, 0xc5e2bu); x86_call_known(c, 0xe80dcu, f_000e80dc); X86_RET(c, 0xc5e2bu);
    X86_TICK(c, 9);
    // 0c5e2b  push eax
    X86_AT(c, 0xc5e2bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5e2c  call 0xe78dc
    X86_AT(c, 0xc5e2cu);
    push32(c, 0xc5e31u); x86_call_known(c, 0xe78dcu, f_000e78dc); X86_RET(c, 0xc5e31u);
    X86_TICK(c, 7);
    // 0c5e31  call 0xe78b4
    X86_AT(c, 0xc5e31u);
    push32(c, 0xc5e36u); x86_call_known(c, 0xe78b4u, f_000e78b4); X86_RET(c, 0xc5e36u);
    X86_TICK(c, 18);
    // 0c5e36  add esp, 8
    X86_AT(c, 0xc5e36u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c5e39  leave 
    X86_AT(c, 0xc5e39u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5e3a  ret 
    X86_AT(c, 0xc5e3au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5e0cu, "ran off the end of a function");
}
void f_000c5e3c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0c5e3c  push ebx
    X86_AT(c, 0xc5e3cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c5e3d  push edi
    X86_AT(c, 0xc5e3du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5e3e  pop edi
    X86_AT(c, 0xc5e3eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5e3f  pop ebx
    X86_AT(c, 0xc5e3fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c5e40  ret 
    X86_AT(c, 0xc5e40u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5e3cu, "ran off the end of a function");
}
void f_000c5e44(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0c5e44  push ebp
    X86_AT(c, 0xc5e44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5e45  mov ebp, esp
    X86_AT(c, 0xc5e45u);
    c.r[5] = c.r[4];
    // 0c5e47  call 0xc6d64
    X86_AT(c, 0xc5e47u);
    push32(c, 0xc5e4cu); x86_call_known(c, 0xc6d64u, f_000c6d64); X86_RET(c, 0xc5e4cu);
    X86_TICK(c, 17);
    // 0c5e4c  push dword ptr [0xb033e]
    X86_AT(c, 0xc5e4cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0c5e52  push dword ptr [0xb033a]
    X86_AT(c, 0xc5e52u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0c5e58  call 0xc6fe0
    X86_AT(c, 0xc5e58u);
    push32(c, 0xc5e5du); x86_call_known(c, 0xc6fe0u, f_000c6fe0); X86_RET(c, 0xc5e5du);
    X86_TICK(c, 17);
    // 0c5e5d  push dword ptr [0xb033e]
    X86_AT(c, 0xc5e5du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0c5e63  push dword ptr [0xb033a]
    X86_AT(c, 0xc5e63u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0c5e69  call 0xc6e14
    X86_AT(c, 0xc5e69u);
    push32(c, 0xc5e6eu); x86_call_known(c, 0xc6e14u, f_000c6e14); X86_RET(c, 0xc5e6eu);
    X86_TICK(c, 22);
    // 0c5e6e  push dword ptr [ebp + 8]
    X86_AT(c, 0xc5e6eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c5e71  push dword ptr [0xb033e]
    X86_AT(c, 0xc5e71u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0c5e77  push dword ptr [0xb033a]
    X86_AT(c, 0xc5e77u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0c5e7d  call 0xcba8c
    X86_AT(c, 0xc5e7du);
    push32(c, 0xc5e82u); x86_call_known(c, 0xcba8cu, f_000cba8c); X86_RET(c, 0xc5e82u);
    X86_TICK(c, 16);
    // 0c5e82  leave 
    X86_AT(c, 0xc5e82u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5e83  ret 
    X86_AT(c, 0xc5e83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5e44u, "ran off the end of a function");
}
}

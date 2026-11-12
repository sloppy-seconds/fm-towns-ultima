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
void f_000b4970(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0b4970  push ebp
    X86_AT(c, 0xb4970u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b4971  mov ebp, esp
    X86_AT(c, 0xb4971u);
    c.r[5] = c.r[4];
    // 0b4973  push ebx
    X86_AT(c, 0xb4973u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b4974  push edi
    X86_AT(c, 0xb4974u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b4975  mov bl, byte ptr [ebp + 0xc]
    X86_AT(c, 0xb4975u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0b4978  mov edi, 0xffffffff
    X86_AT(c, 0xb4978u);
    c.r[7] = 0xFFFFFFFFu;
    // 0b497d  cmp byte ptr [ebp + 8], 0
    X86_AT(c, 0xb497du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 1);
    // 0b4981  jne 0xb498a
    X86_AT(c, 0xb4981u);
    if (x86_cc(c, 5)) { goto L_b498a; }
    X86_TICK(c, 9);
    // 0b4983  sub eax, eax
    X86_AT(c, 0xb4983u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b4985  jmp 0xb4b10
    X86_AT(c, 0xb4985u);
    goto L_b4b10;
L_b498a:
    X86_TICK(c, 12);
    // 0b498a  cmp byte ptr [ebp + 8], 2
    X86_AT(c, 0xb498au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x2u, 0, 1);
    // 0b498e  jne 0xb4995
    X86_AT(c, 0xb498eu);
    if (x86_cc(c, 5)) { goto L_b4995; }
    X86_TICK(c, 2);
    // 0b4990  mov edi, 0x100
    X86_AT(c, 0xb4990u);
    c.r[7] = 0x100u;
L_b4995:
    X86_TICK(c, 12);
    // 0b4995  cmp byte ptr [ebp + 8], 0x10
    X86_AT(c, 0xb4995u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x10u, 0, 1);
    // 0b4999  jne 0xb49a0
    X86_AT(c, 0xb4999u);
    if (x86_cc(c, 5)) { goto L_b49a0; }
    X86_TICK(c, 2);
    // 0b499b  mov edi, 0x102
    X86_AT(c, 0xb499bu);
    c.r[7] = 0x102u;
L_b49a0:
    X86_TICK(c, 12);
    // 0b49a0  cmp byte ptr [ebp + 8], 0x22
    X86_AT(c, 0xb49a0u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x22u, 0, 1);
    // 0b49a4  jne 0xb49ab
    X86_AT(c, 0xb49a4u);
    if (x86_cc(c, 5)) { goto L_b49ab; }
    X86_TICK(c, 2);
    // 0b49a6  mov edi, 0x104
    X86_AT(c, 0xb49a6u);
    c.r[7] = 0x104u;
L_b49ab:
    X86_TICK(c, 12);
    // 0b49ab  cmp byte ptr [ebp + 8], 0x23
    X86_AT(c, 0xb49abu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x23u, 0, 1);
    // 0b49af  jne 0xb49b6
    X86_AT(c, 0xb49afu);
    if (x86_cc(c, 5)) { goto L_b49b6; }
    X86_TICK(c, 2);
    // 0b49b1  mov edi, 0x108
    X86_AT(c, 0xb49b1u);
    c.r[7] = 0x108u;
L_b49b6:
    X86_TICK(c, 12);
    // 0b49b6  cmp byte ptr [ebp + 8], 0x80
    X86_AT(c, 0xb49b6u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x80u, 0, 1);
    // 0b49ba  jne 0xb4a59
    X86_AT(c, 0xb49bau);
    if (x86_cc(c, 5)) { goto L_b4a59; }
    X86_TICK(c, 14);
    // 0b49c0  movzx ebx, bl
    X86_AT(c, 0xb49c0u);
    c.r[3] = g8(c, 3);
    // 0b49c3  mov eax, ebx
    X86_AT(c, 0xb49c3u);
    c.r[0] = c.r[3];
    // 0b49c5  and eax, 0x80
    X86_AT(c, 0xb49c5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x80u, 4); }
    // 0b49ca  cmp eax, 0x80
    X86_AT(c, 0xb49cau);
    (void)x86_sub(c, c.r[0], 0x80u, 0, 4);
    // 0b49cf  jne 0xb49e0
    X86_AT(c, 0xb49cfu);
    if (x86_cc(c, 5)) { goto L_b49e0; }
    X86_TICK(c, 4);
    // 0b49d1  mov dword ptr [0xe20], 0xffffffff
    X86_AT(c, 0xb49d1u);
    wr32((c.sbase[3] + (uint32_t)(0xE20u)), 0xFFFFFFFFu);
    // 0b49db  mov edi, 0x80
    X86_AT(c, 0xb49dbu);
    c.r[7] = 0x80u;
L_b49e0:
    X86_TICK(c, 11);
    // 0b49e0  mov eax, ebx
    X86_AT(c, 0xb49e0u);
    c.r[0] = c.r[3];
    // 0b49e2  and al, 0x40
    X86_AT(c, 0xb49e2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x40u, 1)); }
    // 0b49e4  cmp al, 0x40
    X86_AT(c, 0xb49e4u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0b49e6  jne 0xb49ed
    X86_AT(c, 0xb49e6u);
    if (x86_cc(c, 5)) { goto L_b49ed; }
    X86_TICK(c, 2);
    // 0b49e8  mov edi, 0x40
    X86_AT(c, 0xb49e8u);
    c.r[7] = 0x40u;
L_b49ed:
    X86_TICK(c, 11);
    // 0b49ed  mov eax, ebx
    X86_AT(c, 0xb49edu);
    c.r[0] = c.r[3];
    // 0b49ef  and al, 0x20
    X86_AT(c, 0xb49efu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x20u, 1)); }
    // 0b49f1  cmp al, 0x20
    X86_AT(c, 0xb49f1u);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0b49f3  jne 0xb49fa
    X86_AT(c, 0xb49f3u);
    if (x86_cc(c, 5)) { goto L_b49fa; }
    X86_TICK(c, 2);
    // 0b49f5  mov edi, 0x20
    X86_AT(c, 0xb49f5u);
    c.r[7] = 0x20u;
L_b49fa:
    X86_TICK(c, 11);
    // 0b49fa  mov eax, ebx
    X86_AT(c, 0xb49fau);
    c.r[0] = c.r[3];
    // 0b49fc  and al, 0x10
    X86_AT(c, 0xb49fcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x10u, 1)); }
    // 0b49fe  cmp al, 0x10
    X86_AT(c, 0xb49feu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 0b4a00  jne 0xb4a11
    X86_AT(c, 0xb4a00u);
    if (x86_cc(c, 5)) { goto L_b4a11; }
    X86_TICK(c, 4);
    // 0b4a02  mov dword ptr [0xe20], 0xffffffff
    X86_AT(c, 0xb4a02u);
    wr32((c.sbase[3] + (uint32_t)(0xE20u)), 0xFFFFFFFFu);
    // 0b4a0c  mov edi, 0x10
    X86_AT(c, 0xb4a0cu);
    c.r[7] = 0x10u;
L_b4a11:
    X86_TICK(c, 11);
    // 0b4a11  mov eax, ebx
    X86_AT(c, 0xb4a11u);
    c.r[0] = c.r[3];
    // 0b4a13  and al, 8
    X86_AT(c, 0xb4a13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x8u, 1)); }
    // 0b4a15  cmp al, 8
    X86_AT(c, 0xb4a15u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 0b4a17  jne 0xb4a1e
    X86_AT(c, 0xb4a17u);
    if (x86_cc(c, 5)) { goto L_b4a1e; }
    X86_TICK(c, 2);
    // 0b4a19  mov edi, 8
    X86_AT(c, 0xb4a19u);
    c.r[7] = 0x8u;
L_b4a1e:
    X86_TICK(c, 11);
    // 0b4a1e  mov eax, ebx
    X86_AT(c, 0xb4a1eu);
    c.r[0] = c.r[3];
    // 0b4a20  and al, 4
    X86_AT(c, 0xb4a20u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x4u, 1)); }
    // 0b4a22  cmp al, 4
    X86_AT(c, 0xb4a22u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 0b4a24  jne 0xb4a35
    X86_AT(c, 0xb4a24u);
    if (x86_cc(c, 5)) { goto L_b4a35; }
    X86_TICK(c, 4);
    // 0b4a26  mov dword ptr [0xe20], 0xffffffff
    X86_AT(c, 0xb4a26u);
    wr32((c.sbase[3] + (uint32_t)(0xE20u)), 0xFFFFFFFFu);
    // 0b4a30  mov edi, 4
    X86_AT(c, 0xb4a30u);
    c.r[7] = 0x4u;
L_b4a35:
    X86_TICK(c, 11);
    // 0b4a35  mov eax, ebx
    X86_AT(c, 0xb4a35u);
    c.r[0] = c.r[3];
    // 0b4a37  and al, 2
    X86_AT(c, 0xb4a37u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x2u, 1)); }
    // 0b4a39  cmp al, 2
    X86_AT(c, 0xb4a39u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0b4a3b  jne 0xb4a42
    X86_AT(c, 0xb4a3bu);
    if (x86_cc(c, 5)) { goto L_b4a42; }
    X86_TICK(c, 2);
    // 0b4a3d  mov edi, 2
    X86_AT(c, 0xb4a3du);
    c.r[7] = 0x2u;
L_b4a42:
    X86_TICK(c, 11);
    // 0b4a42  mov eax, ebx
    X86_AT(c, 0xb4a42u);
    c.r[0] = c.r[3];
    // 0b4a44  and al, 1
    X86_AT(c, 0xb4a44u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 0b4a46  dec al
    X86_AT(c, 0xb4a46u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0b4a48  jne 0xb4a59
    X86_AT(c, 0xb4a48u);
    if (x86_cc(c, 5)) { goto L_b4a59; }
    X86_TICK(c, 4);
    // 0b4a4a  mov dword ptr [0xe20], 0xffffffff
    X86_AT(c, 0xb4a4au);
    wr32((c.sbase[3] + (uint32_t)(0xE20u)), 0xFFFFFFFFu);
    // 0b4a54  mov edi, 1
    X86_AT(c, 0xb4a54u);
    c.r[7] = 0x1u;
L_b4a59:
    X86_TICK(c, 9);
    // 0b4a59  mov edx, edi
    X86_AT(c, 0xb4a59u);
    c.r[2] = c.r[7];
    // 0b4a5b  cmp edx, 0x20
    X86_AT(c, 0xb4a5bu);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 0b4a5e  ja 0xb4abb
    X86_AT(c, 0xb4a5eu);
    if (x86_cc(c, 7)) { goto L_b4abb; }
    X86_TICK(c, 7);
    // 0b4a60  cmp edx, 0x20
    X86_AT(c, 0xb4a60u);
    (void)x86_sub(c, c.r[2], 0x20u, 0, 4);
    // 0b4a63  je 0xb4afa
    X86_AT(c, 0xb4a63u);
    if (x86_cc(c, 4)) { goto L_b4afa; }
    X86_TICK(c, 9);
    // 0b4a69  dec edx
    X86_AT(c, 0xb4a69u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0b4a6a  cmp edx, 0xf
    X86_AT(c, 0xb4a6au);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0b4a6d  ja 0xb4b01
    X86_AT(c, 0xb4a6du);
    if (x86_cc(c, 7)) { goto L_b4b01; }
    X86_TICK(c, 7);
    // 0b4a73  jmp dword ptr cs:[edx*4 + 0xb4a7b]
    X86_AT(c, 0xb4a73u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB4A7Bu)));
      switch (t) {
      case 0xb4ae5u: goto L_b4ae5;
      case 0xb4aecu: goto L_b4aec;
      case 0xb4af3u: goto L_b4af3;
      case 0xb4b01u: goto L_b4b01;
      case 0xb4b0eu: goto L_b4b0e;
      default: x86_jump(c, t); return; } }
L_b4abb:
    X86_TICK(c, 7);
    // 0b4abb  cmp edx, 0x80
    X86_AT(c, 0xb4abbu);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0b4ac1  je 0xb4b0e
    X86_AT(c, 0xb4ac1u);
    if (x86_cc(c, 4)) { goto L_b4b0e; }
    X86_TICK(c, 7);
    // 0b4ac3  cmp edx, 0x100
    X86_AT(c, 0xb4ac3u);
    (void)x86_sub(c, c.r[2], 0x100u, 0, 4);
    // 0b4ac9  je 0xb4b0e
    X86_AT(c, 0xb4ac9u);
    if (x86_cc(c, 4)) { goto L_b4b0e; }
    X86_TICK(c, 7);
    // 0b4acb  cmp edx, 0x102
    X86_AT(c, 0xb4acbu);
    (void)x86_sub(c, c.r[2], 0x102u, 0, 4);
    // 0b4ad1  je 0xb4b0e
    X86_AT(c, 0xb4ad1u);
    if (x86_cc(c, 4)) { goto L_b4b0e; }
    X86_TICK(c, 7);
    // 0b4ad3  cmp edx, 0x104
    X86_AT(c, 0xb4ad3u);
    (void)x86_sub(c, c.r[2], 0x104u, 0, 4);
    // 0b4ad9  je 0xb4b0e
    X86_AT(c, 0xb4ad9u);
    if (x86_cc(c, 4)) { goto L_b4b0e; }
    X86_TICK(c, 7);
    // 0b4adb  cmp edx, 0x108
    X86_AT(c, 0xb4adbu);
    (void)x86_sub(c, c.r[2], 0x108u, 0, 4);
    // 0b4ae1  je 0xb4b0e
    X86_AT(c, 0xb4ae1u);
    if (x86_cc(c, 4)) { goto L_b4b0e; }
    X86_TICK(c, 7);
    // 0b4ae3  jmp 0xb4b01
    X86_AT(c, 0xb4ae3u);
    goto L_b4b01;
L_b4ae5:
    X86_TICK(c, 9);
    // 0b4ae5  push 0xe78
    X86_AT(c, 0xb4ae5u);
    { uint32_t v = 0xE78u; push32(c, v); }
    // 0b4aea  jmp 0xb4b06
    X86_AT(c, 0xb4aeau);
    goto L_b4b06;
L_b4aec:
    X86_TICK(c, 9);
    // 0b4aec  push 0xeb4
    X86_AT(c, 0xb4aecu);
    { uint32_t v = 0xEB4u; push32(c, v); }
    // 0b4af1  jmp 0xb4b06
    X86_AT(c, 0xb4af1u);
    goto L_b4b06;
L_b4af3:
    X86_TICK(c, 9);
    // 0b4af3  push 0xef0
    X86_AT(c, 0xb4af3u);
    { uint32_t v = 0xEF0u; push32(c, v); }
    // 0b4af8  jmp 0xb4b06
    X86_AT(c, 0xb4af8u);
    goto L_b4b06;
L_b4afa:
    X86_TICK(c, 9);
    // 0b4afa  push 0xf24
    X86_AT(c, 0xb4afau);
    { uint32_t v = 0xF24u; push32(c, v); }
    // 0b4aff  jmp 0xb4b06
    X86_AT(c, 0xb4affu);
    goto L_b4b06;
L_b4b01:
    X86_TICK(c, 2);
    // 0b4b01  push 0xf68
    X86_AT(c, 0xb4b01u);
    { uint32_t v = 0xF68u; push32(c, v); }
L_b4b06:
    X86_TICK(c, 7);
    // 0b4b06  call 0xbc50c
    X86_AT(c, 0xb4b06u);
    push32(c, 0xb4b0bu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb4b0bu);
    X86_TICK(c, 2);
    // 0b4b0b  add esp, 4
    X86_AT(c, 0xb4b0bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b4b0e:
    X86_TICK(c, 2);
    // 0b4b0e  mov eax, edi
    X86_AT(c, 0xb4b0eu);
    c.r[0] = c.r[7];
L_b4b10:
    X86_TICK(c, 24);
    // 0b4b10  pop edi
    X86_AT(c, 0xb4b10u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b4b11  pop ebx
    X86_AT(c, 0xb4b11u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b4b12  leave 
    X86_AT(c, 0xb4b12u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b4b13  ret 
    X86_AT(c, 0xb4b13u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb4970u, "ran off the end of a function");
}
void f_000b4b14(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0b4b14  push 0xfa0
    X86_AT(c, 0xb4b14u);
    { uint32_t v = 0xFA0u; push32(c, v); }
    // 0b4b19  call 0xbc50c
    X86_AT(c, 0xb4b19u);
    push32(c, 0xb4b1eu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb4b1eu);
    X86_TICK(c, 14);
    // 0b4b1e  mov eax, 0xffffffff
    X86_AT(c, 0xb4b1eu);
    c.r[0] = 0xFFFFFFFFu;
    // 0b4b23  add esp, 4
    X86_AT(c, 0xb4b23u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b4b26  ret 
    X86_AT(c, 0xb4b26u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb4b14u, "ran off the end of a function");
}
void f_000b4b28(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0b4b28  mov dword ptr [0xe34], 0x250f
    X86_AT(c, 0xb4b28u);
    wr32((c.sbase[3] + (uint32_t)(0xE34u)), 0x250Fu);
    // 0b4b32  mov dword ptr [0xe38], 0xba4
    X86_AT(c, 0xb4b32u);
    wr32((c.sbase[3] + (uint32_t)(0xE38u)), 0xBA4u);
    // 0b4b3c  mov dword ptr [0xe3c], 0x12f
    X86_AT(c, 0xb4b3cu);
    wr32((c.sbase[3] + (uint32_t)(0xE3Cu)), 0x12Fu);
    // 0b4b46  push 0xe50
    X86_AT(c, 0xb4b46u);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0b4b4b  push 0xe34
    X86_AT(c, 0xb4b4bu);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0b4b50  call 0xd92e2
    X86_AT(c, 0xb4b50u);
    push32(c, 0xb4b55u); x86_call_known(c, 0xd92e2u, f_000d92e2); X86_RET(c, 0xb4b55u);
    X86_TICK(c, 14);
    // 0b4b55  add esp, 8
    X86_AT(c, 0xb4b55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b4b58  cmp dword ptr [0xe68], 0
    X86_AT(c, 0xb4b58u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE68u))), 0x0u, 0, 4);
    // 0b4b5f  jne 0xb4bc4
    X86_AT(c, 0xb4b5fu);
    if (x86_cc(c, 5)) { goto L_b4bc4; }
    X86_TICK(c, 38);
    // 0b4b61  mov eax, dword ptr [0xe58]
    X86_AT(c, 0xb4b61u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE58u)));
    // 0b4b66  and eax, 0xffff
    X86_AT(c, 0xb4b66u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0b4b6b  mov dword ptr [0xe28], eax
    X86_AT(c, 0xb4b6bu);
    wr32((c.sbase[3] + (uint32_t)(0xE28u)), c.r[0]);
    // 0b4b70  mov eax, dword ptr [0xe58]
    X86_AT(c, 0xb4b70u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE58u)));
    // 0b4b75  shr eax, 0x10
    X86_AT(c, 0xb4b75u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0b4b78  and eax, 0xffff
    X86_AT(c, 0xb4b78u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0b4b7d  mov dword ptr [0xe24], eax
    X86_AT(c, 0xb4b7du);
    wr32((c.sbase[3] + (uint32_t)(0xE24u)), c.r[0]);
    // 0b4b82  mov dword ptr [0xe34], 0x250f
    X86_AT(c, 0xb4b82u);
    wr32((c.sbase[3] + (uint32_t)(0xE34u)), 0x250Fu);
    // 0b4b8c  mov word ptr [0xe38], 0x93
    X86_AT(c, 0xb4b8cu);
    wr16((c.sbase[3] + (uint32_t)(0xE38u)), 0x93u);
    // 0b4b95  mov dword ptr [0xe38], 0xcd4
    X86_AT(c, 0xb4b95u);
    wr32((c.sbase[3] + (uint32_t)(0xE38u)), 0xCD4u);
    // 0b4b9f  mov dword ptr [0xe3c], 0xa
    X86_AT(c, 0xb4b9fu);
    wr32((c.sbase[3] + (uint32_t)(0xE3Cu)), 0xAu);
    // 0b4ba9  push 0xe50
    X86_AT(c, 0xb4ba9u);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0b4bae  push 0xe34
    X86_AT(c, 0xb4baeu);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0b4bb3  call 0xd92e2
    X86_AT(c, 0xb4bb3u);
    push32(c, 0xb4bb8u); x86_call_known(c, 0xd92e2u, f_000d92e2); X86_RET(c, 0xb4bb8u);
    X86_TICK(c, 14);
    // 0b4bb8  add esp, 8
    X86_AT(c, 0xb4bb8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b4bbb  cmp dword ptr [0xe68], 0
    X86_AT(c, 0xb4bbbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE68u))), 0x0u, 0, 4);
    // 0b4bc2  je 0xb4bcb
    X86_AT(c, 0xb4bc2u);
    if (x86_cc(c, 4)) { goto L_b4bcb; }
L_b4bc4:
    X86_TICK(c, 7);
    // 0b4bc4  call 0xb4b14
    X86_AT(c, 0xb4bc4u);
    push32(c, 0xb4bc9u); x86_call_known(c, 0xb4b14u, f_000b4b14); X86_RET(c, 0xb4bc9u);
    X86_TICK(c, 7);
    // 0b4bc9  jmp 0xb4bee
    X86_AT(c, 0xb4bc9u);
    goto L_b4bee;
L_b4bcb:
    X86_TICK(c, 21);
    // 0b4bcb  mov eax, dword ptr [0xe58]
    X86_AT(c, 0xb4bcbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE58u)));
    // 0b4bd0  and eax, 0xffff
    X86_AT(c, 0xb4bd0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0b4bd5  mov dword ptr [0xe30], eax
    X86_AT(c, 0xb4bd5u);
    wr32((c.sbase[3] + (uint32_t)(0xE30u)), c.r[0]);
    // 0b4bda  mov eax, dword ptr [0xe58]
    X86_AT(c, 0xb4bdau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE58u)));
    // 0b4bdf  shr eax, 0x10
    X86_AT(c, 0xb4bdfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0b4be2  and eax, 0xffff
    X86_AT(c, 0xb4be2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0b4be7  mov dword ptr [0xe2c], eax
    X86_AT(c, 0xb4be7u);
    wr32((c.sbase[3] + (uint32_t)(0xE2Cu)), c.r[0]);
    // 0b4bec  sub eax, eax
    X86_AT(c, 0xb4becu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_b4bee:
    X86_TICK(c, 10);
    // 0b4bee  ret 
    X86_AT(c, 0xb4beeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb4b28u, "ran off the end of a function");
}
void f_000b4bf0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0b4bf0  push ebp
    X86_AT(c, 0xb4bf0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b4bf1  mov ebp, esp
    X86_AT(c, 0xb4bf1u);
    c.r[5] = c.r[4];
    // 0b4bf3  push eax
    X86_AT(c, 0xb4bf3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b4bf4  push ebx
    X86_AT(c, 0xb4bf4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b4bf5  push esi
    X86_AT(c, 0xb4bf5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b4bf6  push edi
    X86_AT(c, 0xb4bf6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b4bf7  cmp dword ptr [0xe20], 0
    X86_AT(c, 0xb4bf7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE20u))), 0x0u, 0, 4);
    // 0b4bfe  jne 0xb4c07
    X86_AT(c, 0xb4bfeu);
    if (x86_cc(c, 5)) { goto L_b4c07; }
    X86_TICK(c, 9);
    // 0b4c00  sub eax, eax
    X86_AT(c, 0xb4c00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b4c02  jmp 0xb4d12
    X86_AT(c, 0xb4c02u);
    goto L_b4d12;
L_b4c07:
    X86_TICK(c, 35);
    // 0b4c07  mov word ptr [0xb94], 0x93
    X86_AT(c, 0xb4c07u);
    wr16((c.sbase[3] + (uint32_t)(0xB94u)), 0x93u);
    // 0b4c10  mov ax, word ptr [0xe24]
    X86_AT(c, 0xb4c10u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE24u))));
    // 0b4c16  mov word ptr [0xb96], ax
    X86_AT(c, 0xb4c16u);
    wr16((c.sbase[3] + (uint32_t)(0xB96u)), (c.r[0] & 0xFFFFu));
    // 0b4c1c  mov dword ptr [0xb9e], 0x54c0
    X86_AT(c, 0xb4c1cu);
    wr32((c.sbase[3] + (uint32_t)(0xB9Eu)), 0x54C0u);
    // 0b4c26  mov word ptr [0xe34], 0x2511
    X86_AT(c, 0xb4c26u);
    wr16((c.sbase[3] + (uint32_t)(0xE34u)), 0x2511u);
    // 0b4c2f  mov byte ptr [0xe3d], 0
    X86_AT(c, 0xb4c2fu);
    wr8((c.sbase[3] + (uint32_t)(0xE3Du)), 0x0u);
    // 0b4c36  mov byte ptr [0xe3c], 0
    X86_AT(c, 0xb4c36u);
    wr8((c.sbase[3] + (uint32_t)(0xE3Cu)), 0x0u);
    // 0b4c3d  mov dword ptr [0xe40], 0xb94
    X86_AT(c, 0xb4c3du);
    wr32((c.sbase[3] + (uint32_t)(0xE40u)), 0xB94u);
    // 0b4c47  mov ax, word ptr [0xe28]
    X86_AT(c, 0xb4c47u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE28u))));
    // 0b4c4d  mov word ptr [0xe48], ax
    X86_AT(c, 0xb4c4du);
    wr16((c.sbase[3] + (uint32_t)(0xE48u)), (c.r[0] & 0xFFFFu));
    // 0b4c53  push 0xe50
    X86_AT(c, 0xb4c53u);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0b4c58  push 0xe34
    X86_AT(c, 0xb4c58u);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0b4c5d  call 0xd92e2
    X86_AT(c, 0xb4c5du);
    push32(c, 0xb4c62u); x86_call_known(c, 0xd92e2u, f_000d92e2); X86_RET(c, 0xb4c62u);
    X86_TICK(c, 19);
    // 0b4c62  mov bl, byte ptr [0xe51]
    X86_AT(c, 0xb4c62u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE51u))));
    // 0b4c68  mov al, byte ptr [0xe58]
    X86_AT(c, 0xb4c68u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE58u))));
    // 0b4c6d  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xb4c6du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0b4c70  add esp, 8
    X86_AT(c, 0xb4c70u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b4c73  and bl, bl
    X86_AT(c, 0xb4c73u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0b4c75  je 0xb4c86
    X86_AT(c, 0xb4c75u);
    if (x86_cc(c, 4)) { goto L_b4c86; }
    X86_TICK(c, 11);
    // 0b4c77  push eax
    X86_AT(c, 0xb4c77u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b4c78  push ebx
    X86_AT(c, 0xb4c78u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b4c79  call 0xb4970
    X86_AT(c, 0xb4c79u);
    push32(c, 0xb4c7eu); x86_call_known(c, 0xb4970u, f_000b4970); X86_RET(c, 0xb4c7eu);
    X86_TICK(c, 9);
    // 0b4c7e  add esp, 8
    X86_AT(c, 0xb4c7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b4c81  jmp 0xb4d12
    X86_AT(c, 0xb4c81u);
    goto L_b4d12;
L_b4c86:
    X86_TICK(c, 54);
    // 0b4c86  mov eax, 0xb90
    X86_AT(c, 0xb4c86u);
    c.r[0] = 0xB90u;
    // 0b4c8b  movzx edx, byte ptr [eax + 0x14]
    X86_AT(c, 0xb4c8bu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)));
    // 0b4c8f  mov dword ptr [eax + 0x284], edx
    X86_AT(c, 0xb4c8fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x284u)), c.r[2]);
    // 0b4c95  movzx edx, byte ptr [eax + 0x15]
    X86_AT(c, 0xb4c95u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x15u)));
    // 0b4c99  mov dword ptr [eax + 0x288], edx
    X86_AT(c, 0xb4c99u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x288u)), c.r[2]);
    // 0b4c9f  movzx edx, byte ptr [eax + 0x16]
    X86_AT(c, 0xb4c9fu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x16u)));
    // 0b4ca3  mov dword ptr [eax + 0x28c], edx
    X86_AT(c, 0xb4ca3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x28Cu)), c.r[2]);
    // 0b4ca9  dec dword ptr [eax + 0x28c]
    X86_AT(c, 0xb4ca9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x28Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0b4caf  mov dl, byte ptr [eax + 0x17]
    X86_AT(c, 0xb4cafu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x17u))));
    // 0b4cb2  mov byte ptr [eax + 0x279], dl
    X86_AT(c, 0xb4cb2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x279u)), g8(c, 2));
    // 0b4cb8  mov dl, byte ptr [eax + 0x18]
    X86_AT(c, 0xb4cb8u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x18u))));
    // 0b4cbb  mov byte ptr [eax + 0x27a], dl
    X86_AT(c, 0xb4cbbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x27Au)), g8(c, 2));
    // 0b4cc1  mov dl, byte ptr [eax + 0x19]
    X86_AT(c, 0xb4cc1u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x19u))));
    // 0b4cc4  mov byte ptr [eax + 0x27b], dl
    X86_AT(c, 0xb4cc4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x27Bu)), g8(c, 2));
    // 0b4cca  sub edi, edi
    X86_AT(c, 0xb4ccau);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0b4ccc  mov esi, 6
    X86_AT(c, 0xb4cccu);
    c.r[6] = 0x6u;
L_b4cd1:
    X86_TICK(c, 7);
    // 0b4cd1  cmp edi, 0x63
    X86_AT(c, 0xb4cd1u);
    (void)x86_sub(c, c.r[7], 0x63u, 0, 4);
    // 0b4cd4  jge 0xb4d0b
    X86_AT(c, 0xb4cd4u);
    if (x86_cc(c, 13)) { goto L_b4d0b; }
    X86_TICK(c, 43);
    // 0b4cd6  mov eax, 0xb90
    X86_AT(c, 0xb4cd6u);
    c.r[0] = 0xB90u;
    // 0b4cdb  lea edx, [edi + edi*2]
    X86_AT(c, 0xb4cdbu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0b4cde  mov ecx, esi
    X86_AT(c, 0xb4cdeu);
    c.r[1] = c.r[6];
    // 0b4ce0  inc esi
    X86_AT(c, 0xb4ce0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b4ce1  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0xb4ce1u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 0b4ce5  mov byte ptr [eax + edx*1 + 0x150], cl
    X86_AT(c, 0xb4ce5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u)), g8(c, 1));
    // 0b4cec  mov ecx, esi
    X86_AT(c, 0xb4cecu);
    c.r[1] = c.r[6];
    // 0b4cee  inc esi
    X86_AT(c, 0xb4ceeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b4cef  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0xb4cefu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 0b4cf3  mov byte ptr [eax + edx*1 + 0x151], cl
    X86_AT(c, 0xb4cf3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x151u)), g8(c, 1));
    // 0b4cfa  mov ecx, esi
    X86_AT(c, 0xb4cfau);
    c.r[1] = c.r[6];
    // 0b4cfc  inc esi
    X86_AT(c, 0xb4cfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b4cfd  mov cl, byte ptr [eax + ecx*1 + 0x14]
    X86_AT(c, 0xb4cfdu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x14u))));
    // 0b4d01  mov byte ptr [eax + edx*1 + 0x152], cl
    X86_AT(c, 0xb4d01u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x152u)), g8(c, 1));
    // 0b4d08  inc edi
    X86_AT(c, 0xb4d08u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b4d09  jmp 0xb4cd1
    X86_AT(c, 0xb4d09u);
    X86_POLL(c, 0xb4cd1u); goto L_b4cd1;
L_b4d0b:
    X86_TICK(c, 4);
    // 0b4d0b  sub eax, eax
    X86_AT(c, 0xb4d0bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b4d0d  mov dword ptr [0xe20], eax
    X86_AT(c, 0xb4d0du);
    wr32((c.sbase[3] + (uint32_t)(0xE20u)), c.r[0]);
L_b4d12:
    X86_TICK(c, 28);
    // 0b4d12  pop edi
    X86_AT(c, 0xb4d12u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b4d13  pop esi
    X86_AT(c, 0xb4d13u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b4d14  pop ebx
    X86_AT(c, 0xb4d14u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b4d15  leave 
    X86_AT(c, 0xb4d15u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b4d16  ret 
    X86_AT(c, 0xb4d16u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb4bf0u, "ran off the end of a function");
}
void f_000b4d12(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0b4d12  pop edi
    X86_AT(c, 0xb4d12u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b4d13  pop esi
    X86_AT(c, 0xb4d13u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b4d14  pop ebx
    X86_AT(c, 0xb4d14u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b4d15  leave 
    X86_AT(c, 0xb4d15u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b4d16  ret 
    X86_AT(c, 0xb4d16u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb4d12u, "ran off the end of a function");
}
void f_000b4d18(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0b4d18  push ebp
    X86_AT(c, 0xb4d18u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b4d19  mov ebp, esp
    X86_AT(c, 0xb4d19u);
    c.r[5] = c.r[4];
    // 0b4d1b  push eax
    X86_AT(c, 0xb4d1bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b4d1c  push edi
    X86_AT(c, 0xb4d1cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b4d1d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb4d1du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b4d20  mov al, byte ptr [edi]
    X86_AT(c, 0xb4d20u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0b4d22  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xb4d22u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0b4d25  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0xb4d25u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0b4d28  mov byte ptr [ebp - 2], dl
    X86_AT(c, 0xb4d28u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 2));
    // 0b4d2b  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0xb4d2bu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0b4d2e  dec ecx
    X86_AT(c, 0xb4d2eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0b4d2f  and cl, cl
    X86_AT(c, 0xb4d2fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0b4d31  jge 0xb4d41
    X86_AT(c, 0xb4d31u);
    if (x86_cc(c, 13)) { goto L_b4d41; }
    X86_TICK(c, 20);
    // 0b4d33  mov cl, 0x4a
    X86_AT(c, 0xb4d33u);
    s8(c, 1, 0x4Au);
    // 0b4d35  dec byte ptr [ebp - 2]
    X86_AT(c, 0xb4d35u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0b4d38  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xb4d38u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0b4d3c  jge 0xb4d41
    X86_AT(c, 0xb4d3cu);
    if (x86_cc(c, 13)) { goto L_b4d41; }
    X86_TICK(c, 6);
    // 0b4d3e  dec byte ptr [ebp - 1]
    X86_AT(c, 0xb4d3eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
L_b4d41:
    X86_TICK(c, 34);
    // 0b4d41  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xb4d41u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0b4d44  mov byte ptr [edi], al
    X86_AT(c, 0xb4d44u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 0b4d46  mov al, byte ptr [ebp - 2]
    X86_AT(c, 0xb4d46u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 0b4d49  mov byte ptr [edi + 1], al
    X86_AT(c, 0xb4d49u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 0b4d4c  mov byte ptr [edi + 2], cl
    X86_AT(c, 0xb4d4cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 0b4d4f  pop edi
    X86_AT(c, 0xb4d4fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b4d50  leave 
    X86_AT(c, 0xb4d50u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b4d51  ret 
    X86_AT(c, 0xb4d51u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb4d18u, "ran off the end of a function");
}
void f_000b4ef8(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0b4ef8  push ebp
    X86_AT(c, 0xb4ef8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b4ef9  mov ebp, esp
    X86_AT(c, 0xb4ef9u);
    c.r[5] = c.r[4];
    // 0b4efb  sub esp, 8
    X86_AT(c, 0xb4efbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0b4efe  push ebx
    X86_AT(c, 0xb4efeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b4eff  push esi
    X86_AT(c, 0xb4effu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b4f00  push edi
    X86_AT(c, 0xb4f00u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b4f01  call 0xb53a0
    X86_AT(c, 0xb4f01u);
    push32(c, 0xb4f06u); x86_call_known(c, 0xb53a0u, f_000b53a0); X86_RET(c, 0xb4f06u);
    X86_TICK(c, 12);
    // 0b4f06  cmp dword ptr [0xe20], 0
    X86_AT(c, 0xb4f06u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE20u))), 0x0u, 0, 4);
    // 0b4f0d  jne 0xb4f51
    X86_AT(c, 0xb4f0du);
    if (x86_cc(c, 5)) { goto L_b4f51; }
    X86_TICK(c, 18);
    // 0b4f0f  dec dword ptr [ebp + 0xc]
    X86_AT(c, 0xb4f0fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0b4f12  cmp dword ptr [ebp + 0xc], 0xffffffff
    X86_AT(c, 0xb4f12u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0xFFFFFFFFu, 0, 4);
    // 0b4f16  je 0xb50bf
    X86_AT(c, 0xb4f16u);
    if (x86_cc(c, 4)) { goto L_b50bf; }
    X86_TICK(c, 15);
    // 0b4f1c  mov eax, dword ptr [0xe1c]
    X86_AT(c, 0xb4f1cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE1Cu)));
    // 0b4f21  cmp eax, dword ptr [ebp + 8]
    X86_AT(c, 0xb4f21u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0b4f24  jge 0xb4f29
    X86_AT(c, 0xb4f24u);
    if (x86_cc(c, 13)) { goto L_b4f29; }
    X86_TICK(c, 2);
    // 0b4f26  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0xb4f26u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
L_b4f29:
    X86_TICK(c, 4);
    // 0b4f29  mov edi, 0xffffffff
    X86_AT(c, 0xb4f29u);
    c.r[7] = 0xFFFFFFFFu;
    // 0b4f2e  mov esi, edi
    X86_AT(c, 0xb4f2eu);
    c.r[6] = c.r[7];
L_b4f30:
    X86_TICK(c, 9);
    // 0b4f30  inc esi
    X86_AT(c, 0xb4f30u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b4f31  cmp esi, 0x63
    X86_AT(c, 0xb4f31u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 0b4f34  jge 0xb4f48
    X86_AT(c, 0xb4f34u);
    if (x86_cc(c, 13)) { goto L_b4f48; }
    X86_TICK(c, 13);
    // 0b4f36  movzx eax, byte ptr [esi + esi*2 + 0xce0]
    X86_AT(c, 0xb4f36u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[6] * 2 + 0xCE0u)));
    // 0b4f3e  test al, 0x80
    X86_AT(c, 0xb4f3eu);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 0b4f40  jne 0xb4f43
    X86_AT(c, 0xb4f40u);
    if (x86_cc(c, 5)) { goto L_b4f43; }
    X86_TICK(c, 2);
    // 0b4f42  inc edi
    X86_AT(c, 0xb4f42u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_b4f43:
    X86_TICK(c, 11);
    // 0b4f43  cmp edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb4f43u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0b4f46  jne 0xb4f30
    X86_AT(c, 0xb4f46u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xb4f30u); goto L_b4f30; }
L_b4f48:
    X86_TICK(c, 7);
    // 0b4f48  cmp esi, 0x63
    X86_AT(c, 0xb4f48u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 0b4f4b  jl 0xb4f5b
    X86_AT(c, 0xb4f4bu);
    if (x86_cc(c, 12)) { goto L_b4f5b; }
    X86_TICK(c, 7);
    // 0b4f4d  and edi, edi
    X86_AT(c, 0xb4f4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0b4f4f  jge 0xb4f5b
    X86_AT(c, 0xb4f4fu);
    if (x86_cc(c, 13)) { goto L_b4f5b; }
L_b4f51:
    X86_TICK(c, 9);
    // 0b4f51  mov eax, 0xffffffff
    X86_AT(c, 0xb4f51u);
    c.r[0] = 0xFFFFFFFFu;
    // 0b4f56  jmp 0xb50c1
    X86_AT(c, 0xb4f56u);
    goto L_b50c1;
L_b4f5b:
    X86_TICK(c, 11);
    // 0b4f5b  cmp edi, dword ptr [0xe1c]
    X86_AT(c, 0xb4f5bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xE1Cu))), 0, 4);
    // 0b4f61  jne 0xb4f7a
    X86_AT(c, 0xb4f61u);
    if (x86_cc(c, 5)) { goto L_b4f7a; }
    X86_TICK(c, 23);
    // 0b4f63  mov al, byte ptr [0xe09]
    X86_AT(c, 0xb4f63u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE09u))));
    // 0b4f68  mov byte ptr [ebp - 3], al
    X86_AT(c, 0xb4f68u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 0));
    // 0b4f6b  mov al, byte ptr [0xe0a]
    X86_AT(c, 0xb4f6bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE0Au))));
    // 0b4f70  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xb4f70u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0b4f73  mov al, byte ptr [0xe0b]
    X86_AT(c, 0xb4f73u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE0Bu))));
    // 0b4f78  jmp 0xb4f9d
    X86_AT(c, 0xb4f78u);
    goto L_b4f9d;
L_b4f7a:
    X86_TICK(c, 20);
    // 0b4f7a  mov eax, 0xb90
    X86_AT(c, 0xb4f7au);
    c.r[0] = 0xB90u;
    // 0b4f7f  lea edx, [edi + edi*2]
    X86_AT(c, 0xb4f7fu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0b4f82  mov cl, byte ptr [eax + edx*1 + 0x153]
    X86_AT(c, 0xb4f82u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x153u))));
    // 0b4f89  mov byte ptr [ebp - 3], cl
    X86_AT(c, 0xb4f89u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu)), g8(c, 1));
    // 0b4f8c  mov cl, byte ptr [eax + edx*1 + 0x154]
    X86_AT(c, 0xb4f8cu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x154u))));
    // 0b4f93  mov byte ptr [ebp - 2], cl
    X86_AT(c, 0xb4f93u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 1));
    // 0b4f96  mov al, byte ptr [eax + edx*1 + 0x155]
    X86_AT(c, 0xb4f96u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x155u))));
L_b4f9d:
    X86_TICK(c, 13);
    // 0b4f9d  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xb4f9du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0b4fa0  lea eax, [ebp - 3]
    X86_AT(c, 0xb4fa0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFDu);
    // 0b4fa3  push eax
    X86_AT(c, 0xb4fa3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b4fa4  call 0xb4d18
    X86_AT(c, 0xb4fa4u);
    push32(c, 0xb4fa9u); x86_call_known(c, 0xb4d18u, f_000b4d18); X86_RET(c, 0xb4fa9u);
    X86_TICK(c, 17);
    // 0b4fa9  movsx eax, word ptr [0xb90]
    X86_AT(c, 0xb4fa9u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xB90u)));
    // 0b4fb0  push eax
    X86_AT(c, 0xb4fb0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b4fb1  push eax
    X86_AT(c, 0xb4fb1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b4fb2  call 0xb60b8
    X86_AT(c, 0xb4fb2u);
    push32(c, 0xb4fb7u); x86_call_known(c, 0xb60b8u, f_000b60b8); X86_RET(c, 0xb4fb7u);
    X86_TICK(c, 2);
    // 0b4fb7  add esp, 0xc
    X86_AT(c, 0xb4fb7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_b4fba:
    X86_TICK(c, 64);
    // 0b4fba  mov eax, 0xb90
    X86_AT(c, 0xb4fbau);
    c.r[0] = 0xB90u;
    // 0b4fbf  lea edx, [edi + edi*2]
    X86_AT(c, 0xb4fbfu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0b4fc2  mov cl, byte ptr [eax + edx*1 + 0x150]
    X86_AT(c, 0xb4fc2u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u))));
    // 0b4fc9  mov byte ptr [eax + 0x144], cl
    X86_AT(c, 0xb4fc9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x144u)), g8(c, 1));
    // 0b4fcf  mov cl, byte ptr [eax + edx*1 + 0x151]
    X86_AT(c, 0xb4fcfu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x151u))));
    // 0b4fd6  mov byte ptr [eax + 0x145], cl
    X86_AT(c, 0xb4fd6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x145u)), g8(c, 1));
    // 0b4fdc  mov dl, byte ptr [eax + edx*1 + 0x152]
    X86_AT(c, 0xb4fdcu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x152u))));
    // 0b4fe3  mov byte ptr [eax + 0x146], dl
    X86_AT(c, 0xb4fe3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x146u)), g8(c, 2));
    // 0b4fe9  mov dl, byte ptr [ebp - 3]
    X86_AT(c, 0xb4fe9u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFDu))));
    // 0b4fec  mov byte ptr [eax + 0x147], dl
    X86_AT(c, 0xb4fecu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x147u)), g8(c, 2));
    // 0b4ff2  mov dl, byte ptr [ebp - 2]
    X86_AT(c, 0xb4ff2u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 0b4ff5  mov byte ptr [eax + 0x148], dl
    X86_AT(c, 0xb4ff5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x148u)), g8(c, 2));
    // 0b4ffb  mov dl, byte ptr [ebp - 1]
    X86_AT(c, 0xb4ffbu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0b4ffe  mov byte ptr [eax + 0x149], dl
    X86_AT(c, 0xb4ffeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x149u)), g8(c, 2));
    // 0b5004  mov word ptr [eax + 4], 0x93
    X86_AT(c, 0xb5004u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), 0x93u);
    // 0b500a  mov dx, word ptr [eax + 0x29c]
    X86_AT(c, 0xb500au);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x29Cu))));
    // 0b5011  mov word ptr [eax + 6], dx
    X86_AT(c, 0xb5011u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 0b5015  mov dword ptr [eax + 0xe], 0x50c0
    X86_AT(c, 0xb5015u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xEu)), 0x50C0u);
    // 0b501c  mov word ptr [eax + 0x2a4], 0x2511
    X86_AT(c, 0xb501cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2A4u)), 0x2511u);
    // 0b5025  cmp dword ptr [ebp + 0xc], 0
    X86_AT(c, 0xb5025u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 4);
    // 0b5029  jge 0xb5034
    X86_AT(c, 0xb5029u);
    if (x86_cc(c, 13)) { goto L_b5034; }
    X86_TICK(c, 9);
    // 0b502b  mov byte ptr [eax + 0x2ad], 0xff
    X86_AT(c, 0xb502bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x2ADu)), 0xFFu);
    // 0b5032  jmp 0xb5043
    X86_AT(c, 0xb5032u);
    goto L_b5043;
L_b5034:
    X86_TICK(c, 8);
    // 0b5034  mov byte ptr [0xe3d], 0xfe
    X86_AT(c, 0xb5034u);
    wr8((c.sbase[3] + (uint32_t)(0xE3Du)), 0xFEu);
    // 0b503b  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0xb503bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0b503e  mov byte ptr [0xe39], al
    X86_AT(c, 0xb503eu);
    wr8((c.sbase[3] + (uint32_t)(0xE39u)), g8(c, 0));
L_b5043:
    X86_TICK(c, 21);
    // 0b5043  mov byte ptr [0xe3c], 1
    X86_AT(c, 0xb5043u);
    wr8((c.sbase[3] + (uint32_t)(0xE3Cu)), 0x1u);
    // 0b504a  mov ax, word ptr [0xe30]
    X86_AT(c, 0xb504au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE30u))));
    // 0b5050  mov word ptr [0xe48], ax
    X86_AT(c, 0xb5050u);
    wr16((c.sbase[3] + (uint32_t)(0xE48u)), (c.r[0] & 0xFFFFu));
    // 0b5056  mov dword ptr [0xe40], 0xb94
    X86_AT(c, 0xb5056u);
    wr32((c.sbase[3] + (uint32_t)(0xE40u)), 0xB94u);
    // 0b5060  push 0xe50
    X86_AT(c, 0xb5060u);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0b5065  push 0xe34
    X86_AT(c, 0xb5065u);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0b506a  call 0xd92e2
    X86_AT(c, 0xb506au);
    push32(c, 0xb506fu); x86_call_known(c, 0xd92e2u, f_000d92e2); X86_RET(c, 0xb506fu);
    X86_TICK(c, 19);
    // 0b506f  mov bl, byte ptr [0xe51]
    X86_AT(c, 0xb506fu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE51u))));
    // 0b5075  mov al, byte ptr [0xe58]
    X86_AT(c, 0xb5075u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE58u))));
    // 0b507a  mov byte ptr [ebp - 4], al
    X86_AT(c, 0xb507au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), g8(c, 0));
    // 0b507d  add esp, 8
    X86_AT(c, 0xb507du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b5080  and bl, bl
    X86_AT(c, 0xb5080u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0b5082  je 0xb50ad
    X86_AT(c, 0xb5082u);
    if (x86_cc(c, 4)) { goto L_b50ad; }
    X86_TICK(c, 11);
    // 0b5084  push eax
    X86_AT(c, 0xb5084u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5085  push ebx
    X86_AT(c, 0xb5085u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b5086  call 0xb4970
    X86_AT(c, 0xb5086u);
    push32(c, 0xb508bu); x86_call_known(c, 0xb4970u, f_000b4970); X86_RET(c, 0xb508bu);
    X86_TICK(c, 16);
    // 0b508b  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xb508bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0b508e  add esp, 8
    X86_AT(c, 0xb508eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b5091  cmp dword ptr [ebp - 8], 0x102
    X86_AT(c, 0xb5091u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x102u, 0, 4);
    // 0b5098  jne 0xb50ad
    X86_AT(c, 0xb5098u);
    if (x86_cc(c, 5)) { goto L_b50ad; }
    X86_TICK(c, 7);
    // 0b509a  call 0xb51a8
    X86_AT(c, 0xb509au);
    push32(c, 0xb509fu); x86_call_known(c, 0xb51a8u, f_000b51a8); X86_RET(c, 0xb509fu);
L_b509f:
    X86_TICK(c, 7);
    // 0b509f  call 0xb53f8
    X86_AT(c, 0xb509fu);
    push32(c, 0xb50a4u); x86_call_known(c, 0xb53f8u, f_000b53f8); X86_RET(c, 0xb50a4u);
    X86_TICK(c, 7);
    // 0b50a4  and eax, eax
    X86_AT(c, 0xb50a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b50a6  jne 0xb509f
    X86_AT(c, 0xb50a6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xb509fu); goto L_b509f; }
    X86_TICK(c, 7);
    // 0b50a8  jmp 0xb4fba
    X86_AT(c, 0xb50a8u);
    X86_POLL(c, 0xb4fbau); goto L_b4fba;
L_b50ad:
    X86_TICK(c, 7);
    // 0b50ad  and bl, bl
    X86_AT(c, 0xb50adu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0b50af  je 0xb50bf
    X86_AT(c, 0xb50afu);
    if (x86_cc(c, 4)) { goto L_b50bf; }
    X86_TICK(c, 14);
    // 0b50b1  push dword ptr [ebp - 4]
    X86_AT(c, 0xb50b1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0b50b4  push ebx
    X86_AT(c, 0xb50b4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b50b5  call 0xb4970
    X86_AT(c, 0xb50b5u);
    push32(c, 0xb50bau); x86_call_known(c, 0xb4970u, f_000b4970); X86_RET(c, 0xb50bau);
    X86_TICK(c, 9);
    // 0b50ba  add esp, 8
    X86_AT(c, 0xb50bau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b50bd  jmp 0xb50c1
    X86_AT(c, 0xb50bdu);
    goto L_b50c1;
L_b50bf:
    X86_TICK(c, 2);
    // 0b50bf  sub eax, eax
    X86_AT(c, 0xb50bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_b50c1:
    X86_TICK(c, 28);
    // 0b50c1  pop edi
    X86_AT(c, 0xb50c1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b50c2  pop esi
    X86_AT(c, 0xb50c2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b50c3  pop ebx
    X86_AT(c, 0xb50c3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b50c4  leave 
    X86_AT(c, 0xb50c4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b50c5  ret 
    X86_AT(c, 0xb50c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb4ef8u, "ran off the end of a function");
}
void f_000b51a8(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0b51a8  push ebp
    X86_AT(c, 0xb51a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b51a9  mov ebp, esp
    X86_AT(c, 0xb51a9u);
    c.r[5] = c.r[4];
    // 0b51ab  push eax
    X86_AT(c, 0xb51abu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b51ac  push ebx
    X86_AT(c, 0xb51acu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b51ad  mov word ptr [0xb94], 0x93
    X86_AT(c, 0xb51adu);
    wr16((c.sbase[3] + (uint32_t)(0xB94u)), 0x93u);
    // 0b51b6  mov dword ptr [0xb9e], 0x52c0
    X86_AT(c, 0xb51b6u);
    wr32((c.sbase[3] + (uint32_t)(0xB9Eu)), 0x52C0u);
    // 0b51c0  mov dword ptr [0xe34], 0x2511
    X86_AT(c, 0xb51c0u);
    wr32((c.sbase[3] + (uint32_t)(0xE34u)), 0x2511u);
    // 0b51ca  mov word ptr [0xe3c], 0
    X86_AT(c, 0xb51cau);
    wr16((c.sbase[3] + (uint32_t)(0xE3Cu)), 0x0u);
    // 0b51d3  mov dword ptr [0xe40], 0xb94
    X86_AT(c, 0xb51d3u);
    wr32((c.sbase[3] + (uint32_t)(0xE40u)), 0xB94u);
    // 0b51dd  push 0xe50
    X86_AT(c, 0xb51ddu);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0b51e2  push 0xe34
    X86_AT(c, 0xb51e2u);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0b51e7  call 0xd92e2
    X86_AT(c, 0xb51e7u);
    push32(c, 0xb51ecu); x86_call_known(c, 0xd92e2u, f_000d92e2); X86_RET(c, 0xb51ecu);
    X86_TICK(c, 19);
    // 0b51ec  mov bl, byte ptr [0xe51]
    X86_AT(c, 0xb51ecu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE51u))));
    // 0b51f2  mov al, byte ptr [0xe58]
    X86_AT(c, 0xb51f2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE58u))));
    // 0b51f7  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xb51f7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0b51fa  add esp, 8
    X86_AT(c, 0xb51fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b51fd  and bl, bl
    X86_AT(c, 0xb51fdu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0b51ff  je 0xb5212
    X86_AT(c, 0xb51ffu);
    if (x86_cc(c, 4)) { goto L_b5212; }
    X86_TICK(c, 11);
    // 0b5201  push eax
    X86_AT(c, 0xb5201u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5202  push ebx
    X86_AT(c, 0xb5202u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b5203  call 0xb4970
    X86_AT(c, 0xb5203u);
    push32(c, 0xb5208u); x86_call_known(c, 0xb4970u, f_000b4970); X86_RET(c, 0xb5208u);
    X86_TICK(c, 11);
    // 0b5208  mov eax, 0xffffffff
    X86_AT(c, 0xb5208u);
    c.r[0] = 0xFFFFFFFFu;
    // 0b520d  add esp, 8
    X86_AT(c, 0xb520du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b5210  jmp 0xb5214
    X86_AT(c, 0xb5210u);
    goto L_b5214;
L_b5212:
    X86_TICK(c, 2);
    // 0b5212  sub eax, eax
    X86_AT(c, 0xb5212u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_b5214:
    X86_TICK(c, 20);
    // 0b5214  pop ebx
    X86_AT(c, 0xb5214u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b5215  leave 
    X86_AT(c, 0xb5215u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b5216  ret 
    X86_AT(c, 0xb5216u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb51a8u, "ran off the end of a function");
}
void f_000b5218(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0b5218  push ebp
    X86_AT(c, 0xb5218u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b5219  mov ebp, esp
    X86_AT(c, 0xb5219u);
    c.r[5] = c.r[4];
    // 0b521b  push eax
    X86_AT(c, 0xb521bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b521c  push ebx
    X86_AT(c, 0xb521cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b521d  push esi
    X86_AT(c, 0xb521du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b521e  push edi
    X86_AT(c, 0xb521eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b521f  push 7
    X86_AT(c, 0xb521fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b5221  call 0xbb6b0
    X86_AT(c, 0xb5221u);
    push32(c, 0xb5226u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb5226u);
    X86_TICK(c, 7);
    // 0b5226  call 0xb53a0
    X86_AT(c, 0xb5226u);
    push32(c, 0xb522bu); x86_call_known(c, 0xb53a0u, f_000b53a0); X86_RET(c, 0xb522bu);
    X86_TICK(c, 11);
    // 0b522b  push 0xff4
    X86_AT(c, 0xb522bu);
    { uint32_t v = 0xFF4u; push32(c, v); }
    // 0b5230  push 7
    X86_AT(c, 0xb5230u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b5232  call 0xbbba4
    X86_AT(c, 0xb5232u);
    push32(c, 0xb5237u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb5237u);
    X86_TICK(c, 9);
    // 0b5237  push 7
    X86_AT(c, 0xb5237u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b5239  call 0xbbb5c
    X86_AT(c, 0xb5239u);
    push32(c, 0xb523eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb523eu);
    X86_TICK(c, 11);
    // 0b523e  push 0x1008
    X86_AT(c, 0xb523eu);
    { uint32_t v = 0x1008u; push32(c, v); }
    // 0b5243  push 7
    X86_AT(c, 0xb5243u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b5245  call 0xbbba4
    X86_AT(c, 0xb5245u);
    push32(c, 0xb524au); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb524au);
    X86_TICK(c, 9);
    // 0b524a  push 7
    X86_AT(c, 0xb524au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b524c  call 0xbbb5c
    X86_AT(c, 0xb524cu);
    push32(c, 0xb5251u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb5251u);
    X86_TICK(c, 11);
    // 0b5251  push 0x101e
    X86_AT(c, 0xb5251u);
    { uint32_t v = 0x101Eu; push32(c, v); }
    // 0b5256  push 7
    X86_AT(c, 0xb5256u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b5258  call 0xbbba4
    X86_AT(c, 0xb5258u);
    push32(c, 0xb525du); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb525du);
    X86_TICK(c, 19);
    // 0b525d  push 2
    X86_AT(c, 0xb525du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b525f  movzx eax, byte ptr [0xe09]
    X86_AT(c, 0xb525fu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE09u)));
    // 0b5266  push eax
    X86_AT(c, 0xb5266u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5267  push 7
    X86_AT(c, 0xb5267u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b5269  call 0xba404
    X86_AT(c, 0xb5269u);
    push32(c, 0xb526eu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xb526eu);
    X86_TICK(c, 11);
    // 0b526e  push 0x1022
    X86_AT(c, 0xb526eu);
    { uint32_t v = 0x1022u; push32(c, v); }
    // 0b5273  push 7
    X86_AT(c, 0xb5273u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b5275  call 0xbbba4
    X86_AT(c, 0xb5275u);
    push32(c, 0xb527au); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb527au);
    X86_TICK(c, 19);
    // 0b527a  push 2
    X86_AT(c, 0xb527au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b527c  movzx eax, byte ptr [0xe0a]
    X86_AT(c, 0xb527cu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE0Au)));
    // 0b5283  push eax
    X86_AT(c, 0xb5283u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5284  push 7
    X86_AT(c, 0xb5284u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b5286  call 0xba404
    X86_AT(c, 0xb5286u);
    push32(c, 0xb528bu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xb528bu);
    X86_TICK(c, 13);
    // 0b528b  add esp, 0x44
    X86_AT(c, 0xb528bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0b528e  push 0x1024
    X86_AT(c, 0xb528eu);
    { uint32_t v = 0x1024u; push32(c, v); }
    // 0b5293  push 7
    X86_AT(c, 0xb5293u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b5295  call 0xbbba4
    X86_AT(c, 0xb5295u);
    push32(c, 0xb529au); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb529au);
    X86_TICK(c, 19);
    // 0b529a  push 2
    X86_AT(c, 0xb529au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b529c  movzx eax, byte ptr [0xe0b]
    X86_AT(c, 0xb529cu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE0Bu)));
    // 0b52a3  push eax
    X86_AT(c, 0xb52a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b52a4  push 7
    X86_AT(c, 0xb52a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b52a6  call 0xba404
    X86_AT(c, 0xb52a6u);
    push32(c, 0xb52abu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xb52abu);
    X86_TICK(c, 9);
    // 0b52ab  push 7
    X86_AT(c, 0xb52abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b52ad  call 0xbbb5c
    X86_AT(c, 0xb52adu);
    push32(c, 0xb52b2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb52b2u);
    X86_TICK(c, 11);
    // 0b52b2  push 0x1028
    X86_AT(c, 0xb52b2u);
    { uint32_t v = 0x1028u; push32(c, v); }
    // 0b52b7  push 7
    X86_AT(c, 0xb52b7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b52b9  call 0xbbba4
    X86_AT(c, 0xb52b9u);
    push32(c, 0xb52beu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb52beu);
    X86_TICK(c, 9);
    // 0b52be  push 7
    X86_AT(c, 0xb52beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b52c0  call 0xbbb5c
    X86_AT(c, 0xb52c0u);
    push32(c, 0xb52c5u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb52c5u);
    X86_TICK(c, 8);
    // 0b52c5  mov esi, 4
    X86_AT(c, 0xb52c5u);
    c.r[6] = 0x4u;
    // 0b52ca  mov edi, dword ptr [0xe18]
    X86_AT(c, 0xb52cau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xE18u)));
    // 0b52d0  add esp, 0x24
    X86_AT(c, 0xb52d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_b52d3:
    X86_TICK(c, 11);
    // 0b52d3  cmp edi, dword ptr [0xe1c]
    X86_AT(c, 0xb52d3u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xE1Cu))), 0, 4);
    // 0b52d9  jg 0xb539b
    X86_AT(c, 0xb52d9u);
    if (x86_cc(c, 15)) { goto L_b539b; }
    X86_TICK(c, 13);
    // 0b52df  push 2
    X86_AT(c, 0xb52dfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b52e1  push edi
    X86_AT(c, 0xb52e1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b52e2  push 7
    X86_AT(c, 0xb52e2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b52e4  call 0xba404
    X86_AT(c, 0xb52e4u);
    push32(c, 0xb52e9u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xb52e9u);
    X86_TICK(c, 11);
    // 0b52e9  push 0x1040
    X86_AT(c, 0xb52e9u);
    { uint32_t v = 0x1040u; push32(c, v); }
    // 0b52ee  push 7
    X86_AT(c, 0xb52eeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b52f0  call 0xbbba4
    X86_AT(c, 0xb52f0u);
    push32(c, 0xb52f5u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb52f5u);
    X86_TICK(c, 13);
    // 0b52f5  movzx eax, byte ptr [edi + edi*2 + 0xce0]
    X86_AT(c, 0xb52f5u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[7] * 2 + 0xCE0u)));
    // 0b52fd  test al, 0x80
    X86_AT(c, 0xb52fdu);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 0b52ff  je 0xb5308
    X86_AT(c, 0xb52ffu);
    if (x86_cc(c, 4)) { goto L_b5308; }
    X86_TICK(c, 9);
    // 0b5301  mov eax, 0x1044
    X86_AT(c, 0xb5301u);
    c.r[0] = 0x1044u;
    // 0b5306  jmp 0xb530d
    X86_AT(c, 0xb5306u);
    goto L_b530d;
L_b5308:
    X86_TICK(c, 2);
    // 0b5308  mov eax, 0x104c
    X86_AT(c, 0xb5308u);
    c.r[0] = 0x104Cu;
L_b530d:
    X86_TICK(c, 11);
    // 0b530d  push eax
    X86_AT(c, 0xb530du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b530e  push 7
    X86_AT(c, 0xb530eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b5310  call 0xbbba4
    X86_AT(c, 0xb5310u);
    push32(c, 0xb5315u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb5315u);
    X86_TICK(c, 27);
    // 0b5315  push 2
    X86_AT(c, 0xb5315u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b5317  mov eax, 0xb90
    X86_AT(c, 0xb5317u);
    c.r[0] = 0xB90u;
    // 0b531c  lea edx, [edi + edi*2]
    X86_AT(c, 0xb531cu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0b531f  movzx ecx, byte ptr [eax + edx*1 + 0x150]
    X86_AT(c, 0xb531fu);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x150u)));
    // 0b5327  push ecx
    X86_AT(c, 0xb5327u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0b5328  push 7
    X86_AT(c, 0xb5328u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b532a  mov ebx, eax
    X86_AT(c, 0xb532au);
    c.r[3] = c.r[0];
    // 0b532c  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xb532cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0b532f  call 0xba404
    X86_AT(c, 0xb532fu);
    push32(c, 0xb5334u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xb5334u);
    X86_TICK(c, 11);
    // 0b5334  push 0x1052
    X86_AT(c, 0xb5334u);
    { uint32_t v = 0x1052u; push32(c, v); }
    // 0b5339  push 7
    X86_AT(c, 0xb5339u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b533b  call 0xbbba4
    X86_AT(c, 0xb533bu);
    push32(c, 0xb5340u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb5340u);
    X86_TICK(c, 23);
    // 0b5340  push 2
    X86_AT(c, 0xb5340u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b5342  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb5342u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b5345  movzx edx, byte ptr [ebx + eax*1 + 0x151]
    X86_AT(c, 0xb5345u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x151u)));
    // 0b534d  push edx
    X86_AT(c, 0xb534du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0b534e  push 7
    X86_AT(c, 0xb534eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b5350  call 0xba404
    X86_AT(c, 0xb5350u);
    push32(c, 0xb5355u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xb5355u);
    X86_TICK(c, 13);
    // 0b5355  add esp, 0x3c
    X86_AT(c, 0xb5355u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b5358  push 0x1054
    X86_AT(c, 0xb5358u);
    { uint32_t v = 0x1054u; push32(c, v); }
    // 0b535d  push 7
    X86_AT(c, 0xb535du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b535f  call 0xbbba4
    X86_AT(c, 0xb535fu);
    push32(c, 0xb5364u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb5364u);
    X86_TICK(c, 23);
    // 0b5364  push 2
    X86_AT(c, 0xb5364u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b5366  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb5366u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b5369  movzx eax, byte ptr [ebx + eax*1 + 0x152]
    X86_AT(c, 0xb5369u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x152u)));
    // 0b5371  push eax
    X86_AT(c, 0xb5371u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5372  push 7
    X86_AT(c, 0xb5372u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b5374  call 0xba404
    X86_AT(c, 0xb5374u);
    push32(c, 0xb5379u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xb5379u);
    X86_TICK(c, 9);
    // 0b5379  push 7
    X86_AT(c, 0xb5379u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b537b  call 0xbbb5c
    X86_AT(c, 0xb537bu);
    push32(c, 0xb5380u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb5380u);
    X86_TICK(c, 11);
    // 0b5380  inc esi
    X86_AT(c, 0xb5380u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b5381  add esp, 0x18
    X86_AT(c, 0xb5381u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0b5384  cmp esi, 5
    X86_AT(c, 0xb5384u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0b5387  jle 0xb5395
    X86_AT(c, 0xb5387u);
    if (x86_cc(c, 14)) { goto L_b5395; }
    X86_TICK(c, 11);
    // 0b5389  sub esi, esi
    X86_AT(c, 0xb5389u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b538b  push 7
    X86_AT(c, 0xb538bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b538d  call 0xc9890
    X86_AT(c, 0xb538du);
    push32(c, 0xb5392u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xb5392u);
    X86_TICK(c, 2);
    // 0b5392  add esp, 4
    X86_AT(c, 0xb5392u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b5395:
    X86_TICK(c, 9);
    // 0b5395  inc edi
    X86_AT(c, 0xb5395u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b5396  jmp 0xb52d3
    X86_AT(c, 0xb5396u);
    X86_POLL(c, 0xb52d3u); goto L_b52d3;
L_b539b:
    X86_TICK(c, 28);
    // 0b539b  pop edi
    X86_AT(c, 0xb539bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b539c  pop esi
    X86_AT(c, 0xb539cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b539d  pop ebx
    X86_AT(c, 0xb539du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b539e  leave 
    X86_AT(c, 0xb539eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b539f  ret 
    X86_AT(c, 0xb539fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5218u, "ran off the end of a function");
}
void f_000b53a0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0b53a0  push edi
    X86_AT(c, 0xb53a0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b53a1  call 0xb53f8
    X86_AT(c, 0xb53a1u);
    push32(c, 0xb53a6u); x86_call_known(c, 0xb53f8u, f_000b53f8); X86_RET(c, 0xb53a6u);
    X86_TICK(c, 10);
    // 0b53a6  xchg edi, eax
    X86_AT(c, 0xb53a6u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0b53a7  and edi, edi
    X86_AT(c, 0xb53a7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0b53a9  je 0xb53b0
    X86_AT(c, 0xb53a9u);
    if (x86_cc(c, 4)) { goto L_b53b0; }
    X86_TICK(c, 7);
    // 0b53ab  cmp edi, 0xffffffff
    X86_AT(c, 0xb53abu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0b53ae  jne 0xb53b9
    X86_AT(c, 0xb53aeu);
    if (x86_cc(c, 5)) { goto L_b53b9; }
L_b53b0:
    X86_TICK(c, 12);
    // 0b53b0  cmp dword ptr [0xe20], 0
    X86_AT(c, 0xb53b0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE20u))), 0x0u, 0, 4);
    // 0b53b7  je 0xb53f3
    X86_AT(c, 0xb53b7u);
    if (x86_cc(c, 4)) { goto L_b53f3; }
L_b53b9:
    X86_TICK(c, 7);
    // 0b53b9  call 0xb51a8
    X86_AT(c, 0xb53b9u);
    push32(c, 0xb53beu); x86_call_known(c, 0xb51a8u, f_000b51a8); X86_RET(c, 0xb53beu);
L_b53be:
    X86_TICK(c, 7);
    // 0b53be  call 0xb4bf0
    X86_AT(c, 0xb53beu);
    push32(c, 0xb53c3u); x86_call_known(c, 0xb4bf0u, f_000b4bf0); X86_RET(c, 0xb53c3u);
    X86_TICK(c, 10);
    // 0b53c3  xchg edi, eax
    X86_AT(c, 0xb53c3u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0b53c4  cmp edi, 0x80
    X86_AT(c, 0xb53c4u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0b53ca  je 0xb53e9
    X86_AT(c, 0xb53cau);
    if (x86_cc(c, 4)) { goto L_b53e9; }
    X86_TICK(c, 7);
    // 0b53cc  cmp edi, 0x10
    X86_AT(c, 0xb53ccu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0b53cf  je 0xb53e9
    X86_AT(c, 0xb53cfu);
    if (x86_cc(c, 4)) { goto L_b53e9; }
    X86_TICK(c, 7);
    // 0b53d1  cmp edi, 4
    X86_AT(c, 0xb53d1u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0b53d4  je 0xb53e9
    X86_AT(c, 0xb53d4u);
    if (x86_cc(c, 4)) { goto L_b53e9; }
    X86_TICK(c, 7);
    // 0b53d6  cmp edi, 0x102
    X86_AT(c, 0xb53d6u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 0b53dc  je 0xb53e9
    X86_AT(c, 0xb53dcu);
    if (x86_cc(c, 4)) { goto L_b53e9; }
    X86_TICK(c, 7);
    // 0b53de  and edi, edi
    X86_AT(c, 0xb53deu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0b53e0  je 0xb53f3
    X86_AT(c, 0xb53e0u);
    if (x86_cc(c, 4)) { goto L_b53f3; }
    X86_TICK(c, 9);
    // 0b53e2  mov eax, 1
    X86_AT(c, 0xb53e2u);
    c.r[0] = 0x1u;
    // 0b53e7  jmp 0xb53f5
    X86_AT(c, 0xb53e7u);
    goto L_b53f5;
L_b53e9:
    X86_TICK(c, 7);
    // 0b53e9  cmp edi, 0x102
    X86_AT(c, 0xb53e9u);
    (void)x86_sub(c, c.r[7], 0x102u, 0, 4);
    // 0b53ef  jne 0xb53be
    X86_AT(c, 0xb53efu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xb53beu); goto L_b53be; }
    X86_TICK(c, 7);
    // 0b53f1  jmp 0xb53b9
    X86_AT(c, 0xb53f1u);
    X86_POLL(c, 0xb53b9u); goto L_b53b9;
L_b53f3:
    X86_TICK(c, 2);
    // 0b53f3  sub eax, eax
    X86_AT(c, 0xb53f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_b53f5:
    X86_TICK(c, 14);
    // 0b53f5  pop edi
    X86_AT(c, 0xb53f5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b53f6  ret 
    X86_AT(c, 0xb53f6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb53a0u, "ran off the end of a function");
}
void f_000b53f8(X86Cpu& c) {
    X86_TICK(c, 43);
    // 0b53f8  push ebp
    X86_AT(c, 0xb53f8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b53f9  mov ebp, esp
    X86_AT(c, 0xb53f9u);
    c.r[5] = c.r[4];
    // 0b53fb  push eax
    X86_AT(c, 0xb53fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b53fc  push ebx
    X86_AT(c, 0xb53fcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b53fd  mov word ptr [0xb94], 0x93
    X86_AT(c, 0xb53fdu);
    wr16((c.sbase[3] + (uint32_t)(0xB94u)), 0x93u);
    // 0b5406  mov ax, word ptr [0xe2c]
    X86_AT(c, 0xb5406u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE2Cu))));
    // 0b540c  mov word ptr [0xb96], ax
    X86_AT(c, 0xb540cu);
    wr16((c.sbase[3] + (uint32_t)(0xB96u)), (c.r[0] & 0xFFFFu));
    // 0b5412  mov dword ptr [0xb9e], 0x53c0
    X86_AT(c, 0xb5412u);
    wr32((c.sbase[3] + (uint32_t)(0xB9Eu)), 0x53C0u);
    // 0b541c  mov word ptr [0xe34], 0x2511
    X86_AT(c, 0xb541cu);
    wr16((c.sbase[3] + (uint32_t)(0xE34u)), 0x2511u);
    // 0b5425  mov byte ptr [0xe3d], 0
    X86_AT(c, 0xb5425u);
    wr8((c.sbase[3] + (uint32_t)(0xE3Du)), 0x0u);
    // 0b542c  mov byte ptr [0xe3c], 0
    X86_AT(c, 0xb542cu);
    wr8((c.sbase[3] + (uint32_t)(0xE3Cu)), 0x0u);
    // 0b5433  mov dword ptr [0xe40], 0xb94
    X86_AT(c, 0xb5433u);
    wr32((c.sbase[3] + (uint32_t)(0xE40u)), 0xB94u);
    // 0b543d  mov ax, word ptr [0xe30]
    X86_AT(c, 0xb543du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE30u))));
    // 0b5443  mov word ptr [0xe48], ax
    X86_AT(c, 0xb5443u);
    wr16((c.sbase[3] + (uint32_t)(0xE48u)), (c.r[0] & 0xFFFFu));
    // 0b5449  push 0xe50
    X86_AT(c, 0xb5449u);
    { uint32_t v = 0xE50u; push32(c, v); }
    // 0b544e  push 0xe34
    X86_AT(c, 0xb544eu);
    { uint32_t v = 0xE34u; push32(c, v); }
    // 0b5453  call 0xd92e2
    X86_AT(c, 0xb5453u);
    push32(c, 0xb5458u); x86_call_known(c, 0xd92e2u, f_000d92e2); X86_RET(c, 0xb5458u);
    X86_TICK(c, 19);
    // 0b5458  mov bl, byte ptr [0xe51]
    X86_AT(c, 0xb5458u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xE51u))));
    // 0b545e  mov al, byte ptr [0xe58]
    X86_AT(c, 0xb545eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE58u))));
    // 0b5463  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xb5463u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0b5466  add esp, 8
    X86_AT(c, 0xb5466u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b5469  and bl, bl
    X86_AT(c, 0xb5469u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0b546b  je 0xb5479
    X86_AT(c, 0xb546bu);
    if (x86_cc(c, 4)) { goto L_b5479; }
    X86_TICK(c, 11);
    // 0b546d  push eax
    X86_AT(c, 0xb546du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b546e  push ebx
    X86_AT(c, 0xb546eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b546f  call 0xb4970
    X86_AT(c, 0xb546fu);
    push32(c, 0xb5474u); x86_call_known(c, 0xb4970u, f_000b4970); X86_RET(c, 0xb5474u);
    X86_TICK(c, 9);
    // 0b5474  add esp, 8
    X86_AT(c, 0xb5474u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b5477  jmp 0xb548b
    X86_AT(c, 0xb5477u);
    goto L_b548b;
L_b5479:
    X86_TICK(c, 12);
    // 0b5479  cmp byte ptr [0xe50], 1
    X86_AT(c, 0xb5479u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xE50u))), 0x1u, 0, 1);
    // 0b5480  jne 0xb5489
    X86_AT(c, 0xb5480u);
    if (x86_cc(c, 5)) { goto L_b5489; }
    X86_TICK(c, 9);
    // 0b5482  mov eax, 0xffffffff
    X86_AT(c, 0xb5482u);
    c.r[0] = 0xFFFFFFFFu;
    // 0b5487  jmp 0xb548b
    X86_AT(c, 0xb5487u);
    goto L_b548b;
L_b5489:
    X86_TICK(c, 2);
    // 0b5489  sub eax, eax
    X86_AT(c, 0xb5489u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_b548b:
    X86_TICK(c, 20);
    // 0b548b  pop ebx
    X86_AT(c, 0xb548bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b548c  leave 
    X86_AT(c, 0xb548cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b548d  ret 
    X86_AT(c, 0xb548du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb53f8u, "ran off the end of a function");
}
void f_000b5504(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0b5504  mov dword ptr [0xe20], 0xffffffff
    X86_AT(c, 0xb5504u);
    wr32((c.sbase[3] + (uint32_t)(0xE20u)), 0xFFFFFFFFu);
    // 0b550e  call 0xb53a0
    X86_AT(c, 0xb550eu);
    push32(c, 0xb5513u); x86_call_known(c, 0xb53a0u, f_000b53a0); X86_RET(c, 0xb5513u);
    X86_TICK(c, 10);
    // 0b5513  ret 
    X86_AT(c, 0xb5513u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5504u, "ran off the end of a function");
}
void f_000b5514(X86Cpu& c) {
    X86_TICK(c, 73);
    // 0b5514  push ebp
    X86_AT(c, 0xb5514u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b5515  mov ebp, esp
    X86_AT(c, 0xb5515u);
    c.r[5] = c.r[4];
    // 0b5517  sub esp, 8
    X86_AT(c, 0xb5517u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0b551a  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xb551au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0b551d  mov dword ptr [0x12c18], eax
    X86_AT(c, 0xb551du);
    wr32((c.sbase[3] + (uint32_t)(0x12C18u)), c.r[0]);
    // 0b5522  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb5522u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b5525  cdq 
    X86_AT(c, 0xb5525u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0b5526  mov ecx, 0xc
    X86_AT(c, 0xb5526u);
    c.r[1] = 0xCu;
    // 0b552b  idiv ecx
    X86_AT(c, 0xb552bu);
    x86_idiv(c, c.r[1], 4, 0xb552bu);
    // 0b552d  lea eax, [eax + eax*2]
    X86_AT(c, 0xb552du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0b5530  add eax, eax
    X86_AT(c, 0xb5530u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0b5532  mov dword ptr [0x12bc8], eax
    X86_AT(c, 0xb5532u);
    wr32((c.sbase[3] + (uint32_t)(0x12BC8u)), c.r[0]);
    // 0b5537  cmp eax, 0x40
    X86_AT(c, 0xb5537u);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 0b553a  jge 0xb5543
    X86_AT(c, 0xb553au);
    if (x86_cc(c, 13)) { goto L_b5543; }
    X86_TICK(c, 9);
    // 0b553c  mov eax, 2
    X86_AT(c, 0xb553cu);
    c.r[0] = 0x2u;
    // 0b5541  jmp 0xb5594
    X86_AT(c, 0xb5541u);
    goto L_b5594;
L_b5543:
    X86_TICK(c, 29);
    // 0b5543  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xb5543u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b5546  mov dword ptr [0x12bd0], eax
    X86_AT(c, 0xb5546u);
    wr32((c.sbase[3] + (uint32_t)(0x12BD0u)), c.r[0]);
    // 0b554b  mov edx, dword ptr [0x12bc8]
    X86_AT(c, 0xb554bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x12BC8u)));
    // 0b5551  lea ecx, [eax + edx*1 - 6]
    X86_AT(c, 0xb5551u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 0b5555  mov dword ptr [0x12bd8], ecx
    X86_AT(c, 0xb5555u);
    wr32((c.sbase[3] + (uint32_t)(0x12BD8u)), c.r[1]);
    // 0b555b  add eax, edx
    X86_AT(c, 0xb555bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0b555d  mov dword ptr [0x12bd4], eax
    X86_AT(c, 0xb555du);
    wr32((c.sbase[3] + (uint32_t)(0x12BD4u)), c.r[0]);
    // 0b5562  lea eax, [eax + edx*1 - 6]
    X86_AT(c, 0xb5562u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFAu);
    // 0b5566  mov dword ptr [0x12bdc], eax
    X86_AT(c, 0xb5566u);
    wr32((c.sbase[3] + (uint32_t)(0x12BDCu)), c.r[0]);
    // 0b556b  call 0xd5159
    X86_AT(c, 0xb556bu);
    push32(c, 0xb5570u); x86_call_known(c, 0xd5159u, f_000d5159); X86_RET(c, 0xb5570u);
    X86_TICK(c, 7);
    // 0b5570  call 0xd506d
    X86_AT(c, 0xb5570u);
    push32(c, 0xb5575u); x86_call_known(c, 0xd506du, f_000d506d); X86_RET(c, 0xb5575u);
    X86_TICK(c, 9);
    // 0b5575  push 0x33
    X86_AT(c, 0xb5575u);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0b5577  call 0xd50a1
    X86_AT(c, 0xb5577u);
    push32(c, 0xb557cu); x86_call_known(c, 0xd50a1u, f_000d50a1); X86_RET(c, 0xb557cu);
    X86_TICK(c, 13);
    // 0b557c  lea eax, [ebp - 8]
    X86_AT(c, 0xb557cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b557f  push eax
    X86_AT(c, 0xb557fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5580  push 0x1058
    X86_AT(c, 0xb5580u);
    { uint32_t v = 0x1058u; push32(c, v); }
    // 0b5585  call 0xd7288
    X86_AT(c, 0xb5585u);
    push32(c, 0xb558au); x86_call_known(c, 0xd7288u, f_000d7288); X86_RET(c, 0xb558au);
    X86_TICK(c, 6);
    // 0b558a  sub eax, eax
    X86_AT(c, 0xb558au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b558c  mov dword ptr [0x12be4], eax
    X86_AT(c, 0xb558cu);
    wr32((c.sbase[3] + (uint32_t)(0x12BE4u)), c.r[0]);
    // 0b5591  add esp, 0xc
    X86_AT(c, 0xb5591u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_b5594:
    X86_TICK(c, 16);
    // 0b5594  leave 
    X86_AT(c, 0xb5594u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b5595  ret 
    X86_AT(c, 0xb5595u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5514u, "ran off the end of a function");
}
void f_000b5598(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0b5598  call 0xd5164
    X86_AT(c, 0xb5598u);
    push32(c, 0xb559du); x86_call_known(c, 0xd5164u, f_000d5164); X86_RET(c, 0xb559du);
    X86_TICK(c, 12);
    // 0b559d  sub eax, eax
    X86_AT(c, 0xb559du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b559f  ret 
    X86_AT(c, 0xb559fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5598u, "ran off the end of a function");
}
void f_000b55a0(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0b55a0  push ebp
    X86_AT(c, 0xb55a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b55a1  mov ebp, esp
    X86_AT(c, 0xb55a1u);
    c.r[5] = c.r[4];
    // 0b55a3  sub esp, 0x108
    X86_AT(c, 0xb55a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x108u, 0, 4); }
    // 0b55a9  push ebx
    X86_AT(c, 0xb55a9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b55aa  push esi
    X86_AT(c, 0xb55aau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b55ab  push edi
    X86_AT(c, 0xb55abu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b55ac  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb55acu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b55af  sub ebx, ebx
    X86_AT(c, 0xb55afu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0b55b1  mov esi, ebx
    X86_AT(c, 0xb55b1u);
    c.r[6] = c.r[3];
L_b55b3:
    X86_TICK(c, 11);
    // 0b55b3  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0xb55b3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 0b55b6  and al, al
    X86_AT(c, 0xb55b6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0b55b8  je 0xb55d0
    X86_AT(c, 0xb55b8u);
    if (x86_cc(c, 4)) { goto L_b55d0; }
    X86_TICK(c, 14);
    // 0b55ba  movzx eax, al
    X86_AT(c, 0xb55bau);
    c.r[0] = g8(c, 0);
    // 0b55bd  cmp eax, dword ptr [esi*4 + 0x455d8]
    X86_AT(c, 0xb55bdu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x455D8u))), 0, 4);
    // 0b55c4  je 0xb55cd
    X86_AT(c, 0xb55c4u);
    if (x86_cc(c, 4)) { goto L_b55cd; }
    X86_TICK(c, 9);
    // 0b55c6  mov ebx, 1
    X86_AT(c, 0xb55c6u);
    c.r[3] = 0x1u;
    // 0b55cb  jmp 0xb55d0
    X86_AT(c, 0xb55cbu);
    goto L_b55d0;
L_b55cd:
    X86_TICK(c, 9);
    // 0b55cd  inc esi
    X86_AT(c, 0xb55cdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b55ce  jmp 0xb55b3
    X86_AT(c, 0xb55ceu);
    X86_POLL(c, 0xb55b3u); goto L_b55b3;
L_b55d0:
    X86_TICK(c, 2);
    // 0b55d0  sub esi, esi
    X86_AT(c, 0xb55d0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_b55d2:
    X86_TICK(c, 11);
    // 0b55d2  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0xb55d2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 0b55d5  and al, al
    X86_AT(c, 0xb55d5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0b55d7  je 0xb55e6
    X86_AT(c, 0xb55d7u);
    if (x86_cc(c, 4)) { goto L_b55e6; }
    X86_TICK(c, 14);
    // 0b55d9  movzx eax, al
    X86_AT(c, 0xb55d9u);
    c.r[0] = g8(c, 0);
    // 0b55dc  mov dword ptr [esi*4 + 0x455d8], eax
    X86_AT(c, 0xb55dcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x455D8u)), c.r[0]);
    // 0b55e3  inc esi
    X86_AT(c, 0xb55e3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b55e4  jmp 0xb55d2
    X86_AT(c, 0xb55e4u);
    X86_POLL(c, 0xb55d2u); goto L_b55d2;
L_b55e6:
    X86_TICK(c, 9);
    // 0b55e6  mov dword ptr [esi*4 + 0x455d8], 0
    X86_AT(c, 0xb55e6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x455D8u)), 0x0u);
    // 0b55f1  call 0xb5aac
    X86_AT(c, 0xb55f1u);
    push32(c, 0xb55f6u); x86_call_known(c, 0xb5aacu, f_000b5aac); X86_RET(c, 0xb55f6u);
    X86_TICK(c, 13);
    // 0b55f6  mov dword ptr [0x12c28], 0xffffffff
    X86_AT(c, 0xb55f6u);
    wr32((c.sbase[3] + (uint32_t)(0x12C28u)), 0xFFFFFFFFu);
    // 0b5600  push 0x106a
    X86_AT(c, 0xb5600u);
    { uint32_t v = 0x106Au; push32(c, v); }
    // 0b5605  push edi
    X86_AT(c, 0xb5605u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b5606  call 0xd7fc4
    X86_AT(c, 0xb5606u);
    push32(c, 0xb560bu); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xb560bu);
    X86_TICK(c, 11);
    // 0b560b  add esp, 8
    X86_AT(c, 0xb560bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b560e  mov dword ptr [0x12c2c], eax
    X86_AT(c, 0xb560eu);
    wr32((c.sbase[3] + (uint32_t)(0x12C2Cu)), c.r[0]);
    // 0b5613  and eax, eax
    X86_AT(c, 0xb5613u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5615  jne 0xb5621
    X86_AT(c, 0xb5615u);
    if (x86_cc(c, 5)) { goto L_b5621; }
    X86_TICK(c, 9);
    // 0b5617  mov eax, 0xffffffff
    X86_AT(c, 0xb5617u);
    c.r[0] = 0xFFFFFFFFu;
    // 0b561c  jmp 0xb5935
    X86_AT(c, 0xb561cu);
    goto L_b5935;
L_b5621:
    X86_TICK(c, 16);
    // 0b5621  push 0
    X86_AT(c, 0xb5621u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b5623  push 0x354
    X86_AT(c, 0xb5623u);
    { uint32_t v = 0x354u; push32(c, v); }
    // 0b5628  push dword ptr [0x12c2c]
    X86_AT(c, 0xb5628u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b562e  call 0xd85b4
    X86_AT(c, 0xb562eu);
    push32(c, 0xb5633u); x86_call_known(c, 0xd85b4u, f_000d85b4); X86_RET(c, 0xb5633u);
    X86_TICK(c, 22);
    // 0b5633  mov dword ptr [0x12be4], 0
    X86_AT(c, 0xb5633u);
    wr32((c.sbase[3] + (uint32_t)(0x12BE4u)), 0x0u);
    // 0b563d  push dword ptr [0x12c2c]
    X86_AT(c, 0xb563du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b5643  push 0x20
    X86_AT(c, 0xb5643u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b5645  push 1
    X86_AT(c, 0xb5645u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b5647  lea eax, [ebp - 0x88]
    X86_AT(c, 0xb5647u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0b564d  push eax
    X86_AT(c, 0xb564du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b564e  call 0xd7ce8
    X86_AT(c, 0xb564eu);
    push32(c, 0xb5653u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb5653u);
    X86_TICK(c, 9);
    // 0b5653  add esp, 0x1c
    X86_AT(c, 0xb5653u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0b5656  cmp eax, 0x20
    X86_AT(c, 0xb5656u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0b5659  jl 0xb58c1
    X86_AT(c, 0xb5659u);
    if (x86_cc(c, 12)) { goto L_b58c1; }
    X86_TICK(c, 2);
    // 0b565f  sub esi, esi
    X86_AT(c, 0xb565fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_b5661:
    X86_TICK(c, 7);
    // 0b5661  cmp esi, 0x20
    X86_AT(c, 0xb5661u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0b5664  jge 0xb5675
    X86_AT(c, 0xb5664u);
    if (x86_cc(c, 13)) { goto L_b5675; }
    X86_TICK(c, 11);
    // 0b5666  push 1
    X86_AT(c, 0xb5666u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b5668  push esi
    X86_AT(c, 0xb5668u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b5669  call 0xd52b0
    X86_AT(c, 0xb5669u);
    push32(c, 0xb566eu); x86_call_known(c, 0xd52b0u, f_000d52b0); X86_RET(c, 0xb566eu);
    X86_TICK(c, 14);
    // 0b566e  xchg ebx, eax
    X86_AT(c, 0xb566eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b566f  inc esi
    X86_AT(c, 0xb566fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b5670  add esp, 8
    X86_AT(c, 0xb5670u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b5673  jmp 0xb5661
    X86_AT(c, 0xb5673u);
    X86_POLL(c, 0xb5661u); goto L_b5661;
L_b5675:
    X86_TICK(c, 20);
    // 0b5675  push dword ptr [0x12c2c]
    X86_AT(c, 0xb5675u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b567b  push 0x20
    X86_AT(c, 0xb567bu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b567d  push 1
    X86_AT(c, 0xb567du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b567f  lea eax, [ebp - 0x88]
    X86_AT(c, 0xb567fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0b5685  push eax
    X86_AT(c, 0xb5685u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5686  call 0xd7ce8
    X86_AT(c, 0xb5686u);
    push32(c, 0xb568bu); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb568bu);
    X86_TICK(c, 9);
    // 0b568b  add esp, 0x10
    X86_AT(c, 0xb568bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b568e  cmp eax, 0x20
    X86_AT(c, 0xb568eu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0b5691  jl 0xb58c1
    X86_AT(c, 0xb5691u);
    if (x86_cc(c, 12)) { goto L_b58c1; }
    X86_TICK(c, 2);
    // 0b5697  sub esi, esi
    X86_AT(c, 0xb5697u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_b5699:
    X86_TICK(c, 7);
    // 0b5699  cmp esi, 0x20
    X86_AT(c, 0xb5699u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0b569c  jge 0xb56b0
    X86_AT(c, 0xb569cu);
    if (x86_cc(c, 13)) { goto L_b56b0; }
    X86_TICK(c, 11);
    // 0b569e  push 0xff
    X86_AT(c, 0xb569eu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b56a3  push esi
    X86_AT(c, 0xb56a3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b56a4  call 0xd527c
    X86_AT(c, 0xb56a4u);
    push32(c, 0xb56a9u); x86_call_known(c, 0xd527cu, f_000d527c); X86_RET(c, 0xb56a9u);
    X86_TICK(c, 14);
    // 0b56a9  xchg ebx, eax
    X86_AT(c, 0xb56a9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b56aa  inc esi
    X86_AT(c, 0xb56aau);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b56ab  add esp, 8
    X86_AT(c, 0xb56abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b56ae  jmp 0xb5699
    X86_AT(c, 0xb56aeu);
    X86_POLL(c, 0xb5699u); goto L_b5699;
L_b56b0:
    X86_TICK(c, 20);
    // 0b56b0  push dword ptr [0x12c2c]
    X86_AT(c, 0xb56b0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b56b6  push 0x20
    X86_AT(c, 0xb56b6u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b56b8  push 1
    X86_AT(c, 0xb56b8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b56ba  lea eax, [ebp - 0x88]
    X86_AT(c, 0xb56bau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0b56c0  push eax
    X86_AT(c, 0xb56c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b56c1  call 0xd7ce8
    X86_AT(c, 0xb56c1u);
    push32(c, 0xb56c6u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb56c6u);
    X86_TICK(c, 9);
    // 0b56c6  add esp, 0x10
    X86_AT(c, 0xb56c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b56c9  cmp eax, 0x20
    X86_AT(c, 0xb56c9u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0b56cc  jl 0xb58c1
    X86_AT(c, 0xb56ccu);
    if (x86_cc(c, 12)) { goto L_b58c1; }
    X86_TICK(c, 2);
    // 0b56d2  sub esi, esi
    X86_AT(c, 0xb56d2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_b56d4:
    X86_TICK(c, 7);
    // 0b56d4  cmp esi, 0x20
    X86_AT(c, 0xb56d4u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0b56d7  jge 0xb56eb
    X86_AT(c, 0xb56d7u);
    if (x86_cc(c, 13)) { goto L_b56eb; }
    X86_TICK(c, 11);
    // 0b56d9  push 0xff
    X86_AT(c, 0xb56d9u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b56de  push esi
    X86_AT(c, 0xb56deu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b56df  call 0xd5296
    X86_AT(c, 0xb56dfu);
    push32(c, 0xb56e4u); x86_call_known(c, 0xd5296u, f_000d5296); X86_RET(c, 0xb56e4u);
    X86_TICK(c, 14);
    // 0b56e4  xchg ebx, eax
    X86_AT(c, 0xb56e4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b56e5  inc esi
    X86_AT(c, 0xb56e5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b56e6  add esp, 8
    X86_AT(c, 0xb56e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b56e9  jmp 0xb56d4
    X86_AT(c, 0xb56e9u);
    X86_POLL(c, 0xb56d4u); goto L_b56d4;
L_b56eb:
    X86_TICK(c, 20);
    // 0b56eb  push dword ptr [0x12c2c]
    X86_AT(c, 0xb56ebu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b56f1  push 0x20
    X86_AT(c, 0xb56f1u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b56f3  push 1
    X86_AT(c, 0xb56f3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b56f5  lea eax, [ebp - 0x88]
    X86_AT(c, 0xb56f5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0b56fb  push eax
    X86_AT(c, 0xb56fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b56fc  call 0xd7ce8
    X86_AT(c, 0xb56fcu);
    push32(c, 0xb5701u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb5701u);
    X86_TICK(c, 9);
    // 0b5701  add esp, 0x10
    X86_AT(c, 0xb5701u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b5704  cmp eax, 0x20
    X86_AT(c, 0xb5704u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0b5707  jl 0xb58c1
    X86_AT(c, 0xb5707u);
    if (x86_cc(c, 12)) { goto L_b58c1; }
    X86_TICK(c, 2);
    // 0b570d  sub esi, esi
    X86_AT(c, 0xb570du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_b570f:
    X86_TICK(c, 7);
    // 0b570f  cmp esi, 0x20
    X86_AT(c, 0xb570fu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0b5712  jge 0xb572a
    X86_AT(c, 0xb5712u);
    if (x86_cc(c, 13)) { goto L_b572a; }
    X86_TICK(c, 17);
    // 0b5714  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0xb5714u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 0b571c  push eax
    X86_AT(c, 0xb571cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b571d  push esi
    X86_AT(c, 0xb571du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b571e  call 0xd52e4
    X86_AT(c, 0xb571eu);
    push32(c, 0xb5723u); x86_call_known(c, 0xd52e4u, f_000d52e4); X86_RET(c, 0xb5723u);
    X86_TICK(c, 14);
    // 0b5723  xchg ebx, eax
    X86_AT(c, 0xb5723u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b5724  inc esi
    X86_AT(c, 0xb5724u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b5725  add esp, 8
    X86_AT(c, 0xb5725u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b5728  jmp 0xb570f
    X86_AT(c, 0xb5728u);
    X86_POLL(c, 0xb570fu); goto L_b570f;
L_b572a:
    X86_TICK(c, 20);
    // 0b572a  push dword ptr [0x12c2c]
    X86_AT(c, 0xb572au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b5730  push 0x20
    X86_AT(c, 0xb5730u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b5732  push 1
    X86_AT(c, 0xb5732u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b5734  lea eax, [ebp - 0x88]
    X86_AT(c, 0xb5734u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0b573a  push eax
    X86_AT(c, 0xb573au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b573b  call 0xd7ce8
    X86_AT(c, 0xb573bu);
    push32(c, 0xb5740u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb5740u);
    X86_TICK(c, 9);
    // 0b5740  add esp, 0x10
    X86_AT(c, 0xb5740u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b5743  cmp eax, 0x20
    X86_AT(c, 0xb5743u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0b5746  jl 0xb58c1
    X86_AT(c, 0xb5746u);
    if (x86_cc(c, 12)) { goto L_b58c1; }
    X86_TICK(c, 2);
    // 0b574c  sub esi, esi
    X86_AT(c, 0xb574cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_b574e:
    X86_TICK(c, 7);
    // 0b574e  cmp esi, 0x20
    X86_AT(c, 0xb574eu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0b5751  jge 0xb5769
    X86_AT(c, 0xb5751u);
    if (x86_cc(c, 13)) { goto L_b5769; }
    X86_TICK(c, 17);
    // 0b5753  movzx eax, byte ptr [ebp + esi*1 - 0x88]
    X86_AT(c, 0xb5753u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF78u)));
    // 0b575b  push eax
    X86_AT(c, 0xb575bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b575c  push esi
    X86_AT(c, 0xb575cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b575d  call 0xd52ca
    X86_AT(c, 0xb575du);
    push32(c, 0xb5762u); x86_call_known(c, 0xd52cau, f_000d52ca); X86_RET(c, 0xb5762u);
    X86_TICK(c, 14);
    // 0b5762  xchg ebx, eax
    X86_AT(c, 0xb5762u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b5763  inc esi
    X86_AT(c, 0xb5763u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b5764  add esp, 8
    X86_AT(c, 0xb5764u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b5767  jmp 0xb574e
    X86_AT(c, 0xb5767u);
    X86_POLL(c, 0xb574eu); goto L_b574e;
L_b5769:
    X86_TICK(c, 18);
    // 0b5769  push 0
    X86_AT(c, 0xb5769u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b576b  push 0x6d4
    X86_AT(c, 0xb576bu);
    { uint32_t v = 0x6D4u; push32(c, v); }
    // 0b5770  mov eax, 0x12bc4
    X86_AT(c, 0xb5770u);
    c.r[0] = 0x12BC4u;
    // 0b5775  push dword ptr [eax + 0x68]
    X86_AT(c, 0xb5775u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 0b5778  call 0xd85b4
    X86_AT(c, 0xb5778u);
    push32(c, 0xb577du); x86_call_known(c, 0xd85b4u, f_000d85b4); X86_RET(c, 0xb577du);
    X86_TICK(c, 20);
    // 0b577d  push dword ptr [0x12c2c]
    X86_AT(c, 0xb577du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b5783  push 6
    X86_AT(c, 0xb5783u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0b5785  push 1
    X86_AT(c, 0xb5785u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b5787  lea eax, [ebp - 0x88]
    X86_AT(c, 0xb5787u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0b578d  push eax
    X86_AT(c, 0xb578du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b578e  call 0xd7ce8
    X86_AT(c, 0xb578eu);
    push32(c, 0xb5793u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb5793u);
    X86_TICK(c, 9);
    // 0b5793  add esp, 0x1c
    X86_AT(c, 0xb5793u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0b5796  cmp eax, 6
    X86_AT(c, 0xb5796u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 0b5799  jl 0xb58c1
    X86_AT(c, 0xb5799u);
    if (x86_cc(c, 12)) { goto L_b58c1; }
    X86_TICK(c, 20);
    // 0b579f  push dword ptr [0x12c2c]
    X86_AT(c, 0xb579fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b57a5  push 8
    X86_AT(c, 0xb57a5u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0b57a7  push 1
    X86_AT(c, 0xb57a7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b57a9  lea eax, [ebp - 0x88]
    X86_AT(c, 0xb57a9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0b57af  push eax
    X86_AT(c, 0xb57afu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b57b0  call 0xd7ce8
    X86_AT(c, 0xb57b0u);
    push32(c, 0xb57b5u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb57b5u);
    X86_TICK(c, 9);
    // 0b57b5  add esp, 0x10
    X86_AT(c, 0xb57b5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b57b8  cmp eax, 8
    X86_AT(c, 0xb57b8u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0b57bb  jl 0xb58c1
    X86_AT(c, 0xb57bbu);
    if (x86_cc(c, 12)) { goto L_b58c1; }
    X86_TICK(c, 2);
    // 0b57c1  sub esi, esi
    X86_AT(c, 0xb57c1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_b57c3:
    X86_TICK(c, 11);
    // 0b57c3  mov al, byte ptr [edi + esi*1]
    X86_AT(c, 0xb57c3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 0b57c6  and al, al
    X86_AT(c, 0xb57c6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0b57c8  je 0xb57d4
    X86_AT(c, 0xb57c8u);
    if (x86_cc(c, 4)) { goto L_b57d4; }
    X86_TICK(c, 11);
    // 0b57ca  mov byte ptr [ebp + esi*1 - 0x108], al
    X86_AT(c, 0xb57cau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u)), g8(c, 0));
    // 0b57d1  inc esi
    X86_AT(c, 0xb57d1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b57d2  jmp 0xb57c3
    X86_AT(c, 0xb57d2u);
    X86_POLL(c, 0xb57c3u); goto L_b57c3;
L_b57d4:
    X86_TICK(c, 12);
    // 0b57d4  cmp byte ptr [edi + esi*1], 0x5c
    X86_AT(c, 0xb57d4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))), 0x5Cu, 0, 1);
    // 0b57d8  je 0xb57e1
    X86_AT(c, 0xb57d8u);
    if (x86_cc(c, 4)) { goto L_b57e1; }
    X86_TICK(c, 7);
    // 0b57da  and esi, esi
    X86_AT(c, 0xb57dau);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0b57dc  jl 0xb57e1
    X86_AT(c, 0xb57dcu);
    if (x86_cc(c, 12)) { goto L_b57e1; }
    X86_TICK(c, 9);
    // 0b57de  dec esi
    X86_AT(c, 0xb57deu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0b57df  jmp 0xb57d4
    X86_AT(c, 0xb57dfu);
    X86_POLL(c, 0xb57d4u); goto L_b57d4;
L_b57e1:
    X86_TICK(c, 22);
    // 0b57e1  inc esi
    X86_AT(c, 0xb57e1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b57e2  push dword ptr [0x12c2c]
    X86_AT(c, 0xb57e2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b57e8  push 8
    X86_AT(c, 0xb57e8u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0b57ea  push 1
    X86_AT(c, 0xb57eau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b57ec  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0xb57ecu);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 0b57f3  push eax
    X86_AT(c, 0xb57f3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b57f4  call 0xd7ce8
    X86_AT(c, 0xb57f4u);
    push32(c, 0xb57f9u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb57f9u);
    X86_TICK(c, 9);
    // 0b57f9  add esp, 0x10
    X86_AT(c, 0xb57f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b57fc  cmp eax, 8
    X86_AT(c, 0xb57fcu);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0b57ff  jl 0xb58c1
    X86_AT(c, 0xb57ffu);
    if (x86_cc(c, 12)) { goto L_b58c1; }
    X86_TICK(c, 12);
    // 0b5805  cmp byte ptr [ebp + esi*1 - 0x108], 0
    X86_AT(c, 0xb5805u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 0b580d  je 0xb5857
    X86_AT(c, 0xb580du);
    if (x86_cc(c, 4)) { goto L_b5857; }
    X86_TICK(c, 2);
    // 0b580f  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xb580fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_b5816:
    X86_TICK(c, 20);
    // 0b5816  mov eax, esi
    X86_AT(c, 0xb5816u);
    c.r[0] = c.r[6];
    // 0b5818  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb5818u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0b581b  cmp byte ptr [ebp + eax*1 - 0x108], 0
    X86_AT(c, 0xb581bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u))), 0x0u, 0, 1);
    // 0b5823  je 0xb582a
    X86_AT(c, 0xb5823u);
    if (x86_cc(c, 4)) { goto L_b582a; }
    X86_TICK(c, 13);
    // 0b5825  inc dword ptr [ebp - 4]
    X86_AT(c, 0xb5825u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0b5828  jmp 0xb5816
    X86_AT(c, 0xb5828u);
    X86_POLL(c, 0xb5816u); goto L_b5816;
L_b582a:
    X86_TICK(c, 18);
    // 0b582a  mov eax, esi
    X86_AT(c, 0xb582au);
    c.r[0] = c.r[6];
    // 0b582c  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb582cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0b582f  mov byte ptr [ebp + eax*1 - 0x108], 0x2e
    X86_AT(c, 0xb582fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF8u)), 0x2Eu);
    // 0b5837  mov byte ptr [ebp + eax*1 - 0x107], 0x66
    X86_AT(c, 0xb5837u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEF9u)), 0x66u);
    // 0b583f  mov byte ptr [ebp + eax*1 - 0x106], 0x6d
    X86_AT(c, 0xb583fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFAu)), 0x6Du);
    // 0b5847  mov byte ptr [ebp + eax*1 - 0x105], 0x62
    X86_AT(c, 0xb5847u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFBu)), 0x62u);
    // 0b584f  mov byte ptr [ebp + eax*1 - 0x104], 0
    X86_AT(c, 0xb584fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFEFCu)), 0x0u);
L_b5857:
    X86_TICK(c, 20);
    // 0b5857  push dword ptr [0x12c2c]
    X86_AT(c, 0xb5857u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b585d  push 8
    X86_AT(c, 0xb585du);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0b585f  push 1
    X86_AT(c, 0xb585fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b5861  lea eax, [ebp + esi*1 - 0x108]
    X86_AT(c, 0xb5861u);
    c.r[0] = (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFEF8u);
    // 0b5868  push eax
    X86_AT(c, 0xb5868u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5869  call 0xd7ce8
    X86_AT(c, 0xb5869u);
    push32(c, 0xb586eu); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb586eu);
    X86_TICK(c, 9);
    // 0b586e  add esp, 0x10
    X86_AT(c, 0xb586eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b5871  cmp eax, 8
    X86_AT(c, 0xb5871u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0b5874  jl 0xb58c1
    X86_AT(c, 0xb5874u);
    if (x86_cc(c, 12)) { goto L_b58c1; }
    X86_TICK(c, 18);
    // 0b5876  push 0
    X86_AT(c, 0xb5876u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b5878  push 0x800
    X86_AT(c, 0xb5878u);
    { uint32_t v = 0x800u; push32(c, v); }
    // 0b587d  mov eax, 0x12bc4
    X86_AT(c, 0xb587du);
    c.r[0] = 0x12BC4u;
    // 0b5882  push dword ptr [eax + 0x68]
    X86_AT(c, 0xb5882u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 0b5885  call 0xd85b4
    X86_AT(c, 0xb5885u);
    push32(c, 0xb588au); x86_call_known(c, 0xd85b4u, f_000d85b4); X86_RET(c, 0xb588au);
    X86_TICK(c, 20);
    // 0b588a  push dword ptr [0x12c2c]
    X86_AT(c, 0xb588au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b5890  push 1
    X86_AT(c, 0xb5890u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b5892  push 4
    X86_AT(c, 0xb5892u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b5894  lea eax, [ebp - 8]
    X86_AT(c, 0xb5894u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b5897  push eax
    X86_AT(c, 0xb5897u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5898  call 0xd7ce8
    X86_AT(c, 0xb5898u);
    push32(c, 0xb589du); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb589du);
    X86_TICK(c, 9);
    // 0b589d  add esp, 0x1c
    X86_AT(c, 0xb589du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0b58a0  dec eax
    X86_AT(c, 0xb58a0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0b58a1  jl 0xb58c1
    X86_AT(c, 0xb58a1u);
    if (x86_cc(c, 12)) { goto L_b58c1; }
    X86_TICK(c, 20);
    // 0b58a3  push dword ptr [0x12c2c]
    X86_AT(c, 0xb58a3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b58a9  push 2
    X86_AT(c, 0xb58a9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b58ab  push 1
    X86_AT(c, 0xb58abu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b58ad  lea eax, [ebp - 0x88]
    X86_AT(c, 0xb58adu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF78u);
    // 0b58b3  push eax
    X86_AT(c, 0xb58b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b58b4  call 0xd7ce8
    X86_AT(c, 0xb58b4u);
    push32(c, 0xb58b9u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb58b9u);
    X86_TICK(c, 9);
    // 0b58b9  add esp, 0x10
    X86_AT(c, 0xb58b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b58bc  cmp eax, 2
    X86_AT(c, 0xb58bcu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0b58bf  jge 0xb58d6
    X86_AT(c, 0xb58bfu);
    if (x86_cc(c, 13)) { goto L_b58d6; }
L_b58c1:
    X86_TICK(c, 12);
    // 0b58c1  push dword ptr [0x12c2c]
    X86_AT(c, 0xb58c1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b58c7  call 0xd84c0
    X86_AT(c, 0xb58c7u);
    push32(c, 0xb58ccu); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xb58ccu);
    X86_TICK(c, 11);
    // 0b58cc  mov eax, 2
    X86_AT(c, 0xb58ccu);
    c.r[0] = 0x2u;
    // 0b58d1  add esp, 4
    X86_AT(c, 0xb58d1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b58d4  jmp 0xb5935
    X86_AT(c, 0xb58d4u);
    goto L_b5935;
L_b58d6:
    X86_TICK(c, 29);
    // 0b58d6  movzx eax, byte ptr [ebp - 0x88]
    X86_AT(c, 0xb58d6u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF78u)));
    // 0b58dd  mov dword ptr [0x12c24], eax
    X86_AT(c, 0xb58ddu);
    wr32((c.sbase[3] + (uint32_t)(0x12C24u)), c.r[0]);
    // 0b58e2  movzx eax, byte ptr [ebp - 0x87]
    X86_AT(c, 0xb58e2u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF79u)));
    // 0b58e9  mov dword ptr [0x12c20], eax
    X86_AT(c, 0xb58e9u);
    wr32((c.sbase[3] + (uint32_t)(0x12C20u)), c.r[0]);
    // 0b58ee  mov dword ptr [0x12c28], 0
    X86_AT(c, 0xb58eeu);
    wr32((c.sbase[3] + (uint32_t)(0x12C28u)), 0x0u);
    // 0b58f8  mov byte ptr [0x12be0], 0xfe
    X86_AT(c, 0xb58f8u);
    wr8((c.sbase[3] + (uint32_t)(0x12BE0u)), 0xFEu);
    // 0b58ff  mov dword ptr [0x12bcc], 1
    X86_AT(c, 0xb58ffu);
    wr32((c.sbase[3] + (uint32_t)(0x12BCCu)), 0x1u);
    // 0b5909  call 0xb5d30
    X86_AT(c, 0xb5909u);
    push32(c, 0xb590eu); x86_call_known(c, 0xb5d30u, f_000b5d30); X86_RET(c, 0xb590eu);
    X86_TICK(c, 7);
    // 0b590e  call 0xb5d30
    X86_AT(c, 0xb590eu);
    push32(c, 0xb5913u); x86_call_known(c, 0xb5d30u, f_000b5d30); X86_RET(c, 0xb5913u);
    X86_TICK(c, 12);
    // 0b5913  push dword ptr [0x12c20]
    X86_AT(c, 0xb5913u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C20u))); push32(c, v); }
    // 0b5919  call 0xd5267
    X86_AT(c, 0xb5919u);
    push32(c, 0xb591eu); x86_call_known(c, 0xd5267u, f_000d5267); X86_RET(c, 0xb591eu);
    X86_TICK(c, 13);
    // 0b591e  add esp, 4
    X86_AT(c, 0xb591eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b5921  mov eax, dword ptr [0x12c2c]
    X86_AT(c, 0xb5921u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu)));
    // 0b5926  and eax, eax
    X86_AT(c, 0xb5926u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5928  je 0xb5933
    X86_AT(c, 0xb5928u);
    if (x86_cc(c, 4)) { goto L_b5933; }
    X86_TICK(c, 9);
    // 0b592a  push eax
    X86_AT(c, 0xb592au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b592b  call 0xd84c0
    X86_AT(c, 0xb592bu);
    push32(c, 0xb5930u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xb5930u);
    X86_TICK(c, 2);
    // 0b5930  add esp, 4
    X86_AT(c, 0xb5930u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b5933:
    X86_TICK(c, 2);
    // 0b5933  sub eax, eax
    X86_AT(c, 0xb5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_b5935:
    X86_TICK(c, 28);
    // 0b5935  pop edi
    X86_AT(c, 0xb5935u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b5936  pop esi
    X86_AT(c, 0xb5936u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b5937  pop ebx
    X86_AT(c, 0xb5937u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b5938  leave 
    X86_AT(c, 0xb5938u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b5939  ret 
    X86_AT(c, 0xb5939u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb55a0u, "ran off the end of a function");
}
void f_000b593c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0b593c  push ebp
    X86_AT(c, 0xb593cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b593d  mov ebp, esp
    X86_AT(c, 0xb593du);
    c.r[5] = c.r[4];
    // 0b593f  push edi
    X86_AT(c, 0xb593fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b5940  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb5940u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b5943  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb5943u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b5946  sub ecx, ecx
    X86_AT(c, 0xb5946u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0b5948  cmp ecx, edx
    X86_AT(c, 0xb5948u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 0b594a  jne 0xb5950
    X86_AT(c, 0xb594au);
    if (x86_cc(c, 5)) { goto L_b5950; }
    X86_TICK(c, 9);
    // 0b594c  mov eax, edi
    X86_AT(c, 0xb594cu);
    c.r[0] = c.r[7];
    // 0b594e  jmp 0xb5964
    X86_AT(c, 0xb594eu);
    goto L_b5964;
L_b5950:
    X86_TICK(c, 12);
    // 0b5950  cmp byte ptr [edi], 0xf2
    X86_AT(c, 0xb5950u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xF2u, 0, 1);
    // 0b5953  jne 0xb595f
    X86_AT(c, 0xb5953u);
    if (x86_cc(c, 5)) { goto L_b595f; }
    X86_TICK(c, 9);
    // 0b5955  inc ecx
    X86_AT(c, 0xb5955u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0b5956  cmp edx, ecx
    X86_AT(c, 0xb5956u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0b5958  jne 0xb595f
    X86_AT(c, 0xb5958u);
    if (x86_cc(c, 5)) { goto L_b595f; }
    X86_TICK(c, 9);
    // 0b595a  lea eax, [edi + 6]
    X86_AT(c, 0xb595au);
    c.r[0] = (uint32_t)(c.r[7] + 0x6u);
    // 0b595d  jmp 0xb5964
    X86_AT(c, 0xb595du);
    goto L_b5964;
L_b595f:
    X86_TICK(c, 9);
    // 0b595f  add edi, 6
    X86_AT(c, 0xb595fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0b5962  jmp 0xb5950
    X86_AT(c, 0xb5962u);
    X86_POLL(c, 0xb5950u); goto L_b5950;
L_b5964:
    X86_TICK(c, 20);
    // 0b5964  pop edi
    X86_AT(c, 0xb5964u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b5965  leave 
    X86_AT(c, 0xb5965u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b5966  ret 
    X86_AT(c, 0xb5966u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb593cu, "ran off the end of a function");
}
void f_000b5968(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0b5968  push ebp
    X86_AT(c, 0xb5968u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b5969  mov ebp, esp
    X86_AT(c, 0xb5969u);
    c.r[5] = c.r[4];
    // 0b596b  push edi
    X86_AT(c, 0xb596bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b596c  mov eax, dword ptr [0x12be8]
    X86_AT(c, 0xb596cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12BE8u)));
    // 0b5971  dec eax
    X86_AT(c, 0xb5971u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0b5972  push eax
    X86_AT(c, 0xb5972u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5973  push 0
    X86_AT(c, 0xb5973u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b5975  call 0xd52fe
    X86_AT(c, 0xb5975u);
    push32(c, 0xb597au); x86_call_known(c, 0xd52feu, f_000d52fe); X86_RET(c, 0xb597au);
    X86_TICK(c, 17);
    // 0b597a  mov eax, dword ptr [0x12bec]
    X86_AT(c, 0xb597au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12BECu)));
    // 0b597f  dec eax
    X86_AT(c, 0xb597fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0b5980  push eax
    X86_AT(c, 0xb5980u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5981  push 1
    X86_AT(c, 0xb5981u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b5983  call 0xd52fe
    X86_AT(c, 0xb5983u);
    push32(c, 0xb5988u); x86_call_known(c, 0xd52feu, f_000d52fe); X86_RET(c, 0xb5988u);
    X86_TICK(c, 17);
    // 0b5988  mov eax, dword ptr [0x12bf0]
    X86_AT(c, 0xb5988u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12BF0u)));
    // 0b598d  dec eax
    X86_AT(c, 0xb598du);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0b598e  push eax
    X86_AT(c, 0xb598eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b598f  push 2
    X86_AT(c, 0xb598fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b5991  call 0xd52fe
    X86_AT(c, 0xb5991u);
    push32(c, 0xb5996u); x86_call_known(c, 0xd52feu, f_000d52fe); X86_RET(c, 0xb5996u);
    X86_TICK(c, 17);
    // 0b5996  mov eax, dword ptr [0x12bf4]
    X86_AT(c, 0xb5996u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12BF4u)));
    // 0b599b  dec eax
    X86_AT(c, 0xb599bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0b599c  push eax
    X86_AT(c, 0xb599cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b599d  push 3
    X86_AT(c, 0xb599du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b599f  call 0xd52fe
    X86_AT(c, 0xb599fu);
    push32(c, 0xb59a4u); x86_call_known(c, 0xd52feu, f_000d52fe); X86_RET(c, 0xb59a4u);
    X86_TICK(c, 17);
    // 0b59a4  mov eax, dword ptr [0x12bf8]
    X86_AT(c, 0xb59a4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12BF8u)));
    // 0b59a9  dec eax
    X86_AT(c, 0xb59a9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0b59aa  push eax
    X86_AT(c, 0xb59aau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b59ab  push 4
    X86_AT(c, 0xb59abu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b59ad  call 0xd52fe
    X86_AT(c, 0xb59adu);
    push32(c, 0xb59b2u); x86_call_known(c, 0xd52feu, f_000d52fe); X86_RET(c, 0xb59b2u);
    X86_TICK(c, 17);
    // 0b59b2  mov eax, dword ptr [0x12bfc]
    X86_AT(c, 0xb59b2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12BFCu)));
    // 0b59b7  dec eax
    X86_AT(c, 0xb59b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0b59b8  push eax
    X86_AT(c, 0xb59b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b59b9  push 5
    X86_AT(c, 0xb59b9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b59bb  call 0xd52fe
    X86_AT(c, 0xb59bbu);
    push32(c, 0xb59c0u); x86_call_known(c, 0xd52feu, f_000d52fe); X86_RET(c, 0xb59c0u);
    X86_TICK(c, 17);
    // 0b59c0  mov eax, dword ptr [0x12c00]
    X86_AT(c, 0xb59c0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12C00u)));
    // 0b59c5  dec eax
    X86_AT(c, 0xb59c5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0b59c6  push eax
    X86_AT(c, 0xb59c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b59c7  push 0
    X86_AT(c, 0xb59c7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b59c9  call 0xd4a9b
    X86_AT(c, 0xb59c9u);
    push32(c, 0xb59ceu); x86_call_known(c, 0xd4a9bu, f_000d4a9b); X86_RET(c, 0xb59ceu);
    X86_TICK(c, 17);
    // 0b59ce  mov eax, dword ptr [0x12c04]
    X86_AT(c, 0xb59ceu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12C04u)));
    // 0b59d3  dec eax
    X86_AT(c, 0xb59d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0b59d4  push eax
    X86_AT(c, 0xb59d4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b59d5  push 1
    X86_AT(c, 0xb59d5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b59d7  call 0xd4a9b
    X86_AT(c, 0xb59d7u);
    push32(c, 0xb59dcu); x86_call_known(c, 0xd4a9bu, f_000d4a9b); X86_RET(c, 0xb59dcu);
    X86_TICK(c, 19);
    // 0b59dc  add esp, 0x40
    X86_AT(c, 0xb59dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0b59df  mov eax, dword ptr [0x12c08]
    X86_AT(c, 0xb59dfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12C08u)));
    // 0b59e4  dec eax
    X86_AT(c, 0xb59e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0b59e5  push eax
    X86_AT(c, 0xb59e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b59e6  push 2
    X86_AT(c, 0xb59e6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b59e8  call 0xd4a9b
    X86_AT(c, 0xb59e8u);
    push32(c, 0xb59edu); x86_call_known(c, 0xd4a9bu, f_000d4a9b); X86_RET(c, 0xb59edu);
    X86_TICK(c, 17);
    // 0b59ed  mov eax, dword ptr [0x12c0c]
    X86_AT(c, 0xb59edu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12C0Cu)));
    // 0b59f2  dec eax
    X86_AT(c, 0xb59f2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0b59f3  push eax
    X86_AT(c, 0xb59f3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b59f4  push 3
    X86_AT(c, 0xb59f4u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b59f6  call 0xd4a9b
    X86_AT(c, 0xb59f6u);
    push32(c, 0xb59fbu); x86_call_known(c, 0xd4a9bu, f_000d4a9b); X86_RET(c, 0xb59fbu);
    X86_TICK(c, 17);
    // 0b59fb  mov eax, dword ptr [0x12c10]
    X86_AT(c, 0xb59fbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12C10u)));
    // 0b5a00  dec eax
    X86_AT(c, 0xb5a00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0b5a01  push eax
    X86_AT(c, 0xb5a01u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5a02  push 4
    X86_AT(c, 0xb5a02u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b5a04  call 0xd4a9b
    X86_AT(c, 0xb5a04u);
    push32(c, 0xb5a09u); x86_call_known(c, 0xd4a9bu, f_000d4a9b); X86_RET(c, 0xb5a09u);
    X86_TICK(c, 17);
    // 0b5a09  mov eax, dword ptr [0x12c14]
    X86_AT(c, 0xb5a09u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12C14u)));
    // 0b5a0e  dec eax
    X86_AT(c, 0xb5a0eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0b5a0f  push eax
    X86_AT(c, 0xb5a0fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5a10  push 5
    X86_AT(c, 0xb5a10u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b5a12  call 0xd4a9b
    X86_AT(c, 0xb5a12u);
    push32(c, 0xb5a17u); x86_call_known(c, 0xd4a9bu, f_000d4a9b); X86_RET(c, 0xb5a17u);
    X86_TICK(c, 11);
    // 0b5a17  add esp, 0x20
    X86_AT(c, 0xb5a17u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0b5a1a  push 1
    X86_AT(c, 0xb5a1au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b5a1c  call 0xd524b
    X86_AT(c, 0xb5a1cu);
    push32(c, 0xb5a21u); x86_call_known(c, 0xd524bu, f_000d524b); X86_RET(c, 0xb5a21u);
    X86_TICK(c, 17);
    // 0b5a21  push dword ptr [ebp + 8]
    X86_AT(c, 0xb5a21u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0b5a24  push dword ptr [0x12bd0]
    X86_AT(c, 0xb5a24u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12BD0u))); push32(c, v); }
    // 0b5a2a  call 0xb593c
    X86_AT(c, 0xb5a2au);
    push32(c, 0xb5a2fu); x86_call_known(c, 0xb593cu, f_000b593c); X86_RET(c, 0xb5a2fu);
    X86_TICK(c, 22);
    // 0b5a2f  mov dword ptr [0x12be4], eax
    X86_AT(c, 0xb5a2fu);
    wr32((c.sbase[3] + (uint32_t)(0x12BE4u)), c.r[0]);
    // 0b5a34  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb5a34u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b5a37  inc eax
    X86_AT(c, 0xb5a37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0b5a38  push eax
    X86_AT(c, 0xb5a38u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5a39  push dword ptr [0x12bd0]
    X86_AT(c, 0xb5a39u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12BD0u))); push32(c, v); }
    // 0b5a3f  call 0xb593c
    X86_AT(c, 0xb5a3fu);
    push32(c, 0xb5a44u); x86_call_known(c, 0xb593cu, f_000b593c); X86_RET(c, 0xb5a44u);
    X86_TICK(c, 42);
    // 0b5a44  xchg edi, eax
    X86_AT(c, 0xb5a44u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0b5a45  mov byte ptr [edi], 0xfe
    X86_AT(c, 0xb5a45u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFEu);
    // 0b5a48  inc edi
    X86_AT(c, 0xb5a48u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b5a49  inc edi
    X86_AT(c, 0xb5a49u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b5a4a  mov byte ptr [edi], 0
    X86_AT(c, 0xb5a4au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0b5a4d  inc edi
    X86_AT(c, 0xb5a4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b5a4e  mov byte ptr [edi], 0
    X86_AT(c, 0xb5a4eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0b5a51  inc edi
    X86_AT(c, 0xb5a51u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b5a52  push dword ptr [0x12c24]
    X86_AT(c, 0xb5a52u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C24u))); push32(c, v); }
    // 0b5a58  mov eax, dword ptr [0x12bc8]
    X86_AT(c, 0xb5a58u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12BC8u)));
    // 0b5a5d  add eax, eax
    X86_AT(c, 0xb5a5du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0b5a5f  push eax
    X86_AT(c, 0xb5a5fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5a60  push dword ptr [0x12bd0]
    X86_AT(c, 0xb5a60u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12BD0u))); push32(c, v); }
    // 0b5a66  call 0xd516f
    X86_AT(c, 0xb5a66u);
    push32(c, 0xb5a6bu); x86_call_known(c, 0xd516fu, f_000d516f); X86_RET(c, 0xb5a6bu);
    X86_TICK(c, 24);
    // 0b5a6b  sub eax, eax
    X86_AT(c, 0xb5a6bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b5a6d  add esp, 0x20
    X86_AT(c, 0xb5a6du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0b5a70  pop edi
    X86_AT(c, 0xb5a70u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b5a71  leave 
    X86_AT(c, 0xb5a71u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b5a72  ret 
    X86_AT(c, 0xb5a72u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5968u, "ran off the end of a function");
}
void f_000b5a74(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0b5a74  push edi
    X86_AT(c, 0xb5a74u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b5a75  cmp dword ptr [0x12be4], 0
    X86_AT(c, 0xb5a75u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x12BE4u))), 0x0u, 0, 4);
    // 0b5a7c  je 0xb5aa9
    X86_AT(c, 0xb5a7cu);
    if (x86_cc(c, 4)) { goto L_b5aa9; }
    X86_TICK(c, 7);
    // 0b5a7e  call 0xd51af
    X86_AT(c, 0xb5a7eu);
    push32(c, 0xb5a83u); x86_call_known(c, 0xd51afu, f_000d51af); X86_RET(c, 0xb5a83u);
    X86_TICK(c, 11);
    // 0b5a83  cmp eax, dword ptr [0x12be4]
    X86_AT(c, 0xb5a83u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x12BE4u))), 0, 4);
    // 0b5a89  jbe 0xb5aa9
    X86_AT(c, 0xb5a89u);
    if (x86_cc(c, 6)) { goto L_b5aa9; }
    X86_TICK(c, 4);
    // 0b5a8b  mov edi, dword ptr [0x12bd0]
    X86_AT(c, 0xb5a8bu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x12BD0u)));
L_b5a91:
    X86_TICK(c, 11);
    // 0b5a91  cmp edi, dword ptr [0x12be4]
    X86_AT(c, 0xb5a91u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x12BE4u))), 0, 4);
    // 0b5a97  jae 0xb5a9f
    X86_AT(c, 0xb5a97u);
    if (x86_cc(c, 3)) { goto L_b5a9f; }
    X86_TICK(c, 11);
    // 0b5a99  mov byte ptr [edi], 0xff
    X86_AT(c, 0xb5a99u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFu);
    // 0b5a9c  inc edi
    X86_AT(c, 0xb5a9cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b5a9d  jmp 0xb5a91
    X86_AT(c, 0xb5a9du);
    X86_POLL(c, 0xb5a91u); goto L_b5a91;
L_b5a9f:
    X86_TICK(c, 2);
    // 0b5a9f  mov dword ptr [0x12be4], 0
    X86_AT(c, 0xb5a9fu);
    wr32((c.sbase[3] + (uint32_t)(0x12BE4u)), 0x0u);
L_b5aa9:
    X86_TICK(c, 14);
    // 0b5aa9  pop edi
    X86_AT(c, 0xb5aa9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b5aaa  ret 
    X86_AT(c, 0xb5aaau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5a74u, "ran off the end of a function");
}
void f_000b5aac(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0b5aac  call 0xd518e
    X86_AT(c, 0xb5aacu);
    push32(c, 0xb5ab1u); x86_call_known(c, 0xd518eu, f_000d518e); X86_RET(c, 0xb5ab1u);
    X86_TICK(c, 14);
    // 0b5ab1  sub eax, eax
    X86_AT(c, 0xb5ab1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b5ab3  mov dword ptr [0x12be4], eax
    X86_AT(c, 0xb5ab3u);
    wr32((c.sbase[3] + (uint32_t)(0x12BE4u)), c.r[0]);
    // 0b5ab8  ret 
    X86_AT(c, 0xb5ab8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5aacu, "ran off the end of a function");
}
void f_000b5afc(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0b5afc  push 0xffffffff
    X86_AT(c, 0xb5afcu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0b5afe  call 0xd4c4d
    X86_AT(c, 0xb5afeu);
    push32(c, 0xb5b03u); x86_call_known(c, 0xd4c4du, f_000d4c4d); X86_RET(c, 0xb5b03u);
    X86_TICK(c, 9);
    // 0b5b03  push 1
    X86_AT(c, 0xb5b03u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b5b05  call 0xd4c23
    X86_AT(c, 0xb5b05u);
    push32(c, 0xb5b0au); x86_call_known(c, 0xd4c23u, f_000d4c23); X86_RET(c, 0xb5b0au);
    X86_TICK(c, 14);
    // 0b5b0a  sub eax, eax
    X86_AT(c, 0xb5b0au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b5b0c  add esp, 8
    X86_AT(c, 0xb5b0cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b5b0f  ret 
    X86_AT(c, 0xb5b0fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5afcu, "ran off the end of a function");
}
void f_000b5b10(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0b5b10  push ebp
    X86_AT(c, 0xb5b10u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b5b11  mov ebp, esp
    X86_AT(c, 0xb5b11u);
    c.r[5] = c.r[4];
    // 0b5b13  push ebx
    X86_AT(c, 0xb5b13u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b5b14  push esi
    X86_AT(c, 0xb5b14u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b5b15  push edi
    X86_AT(c, 0xb5b15u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b5b16  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb5b16u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b5b19  push 0x106e
    X86_AT(c, 0xb5b19u);
    { uint32_t v = 0x106Eu; push32(c, v); }
    // 0b5b1e  push dword ptr [ebp + 8]
    X86_AT(c, 0xb5b1eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0b5b21  call 0xd7fc4
    X86_AT(c, 0xb5b21u);
    push32(c, 0xb5b26u); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xb5b26u);
    X86_TICK(c, 12);
    // 0b5b26  add esp, 8
    X86_AT(c, 0xb5b26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b5b29  xchg esi, eax
    X86_AT(c, 0xb5b29u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0b5b2a  and esi, esi
    X86_AT(c, 0xb5b2au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0b5b2c  jne 0xb5b3f
    X86_AT(c, 0xb5b2cu);
    if (x86_cc(c, 5)) { goto L_b5b3f; }
    X86_TICK(c, 9);
    // 0b5b2e  push 0x1074
    X86_AT(c, 0xb5b2eu);
    { uint32_t v = 0x1074u; push32(c, v); }
    // 0b5b33  call 0xbc50c
    X86_AT(c, 0xb5b33u);
    push32(c, 0xb5b38u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb5b38u);
    X86_TICK(c, 9);
    // 0b5b38  mov eax, 1
    X86_AT(c, 0xb5b38u);
    c.r[0] = 0x1u;
    // 0b5b3d  jmp 0xb5b8c
    X86_AT(c, 0xb5b3du);
    goto L_b5b8c;
L_b5b3f:
    X86_TICK(c, 12);
    // 0b5b3f  cmp dword ptr [ebp + 0x10], 0x20
    X86_AT(c, 0xb5b3fu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x20u, 0, 4);
    // 0b5b43  jl 0xb5b77
    X86_AT(c, 0xb5b43u);
    if (x86_cc(c, 12)) { goto L_b5b77; }
    X86_TICK(c, 15);
    // 0b5b45  push esi
    X86_AT(c, 0xb5b45u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b5b46  push 0x20
    X86_AT(c, 0xb5b46u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b5b48  push 1
    X86_AT(c, 0xb5b48u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b5b4a  push edi
    X86_AT(c, 0xb5b4au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b5b4b  call 0xd7ce8
    X86_AT(c, 0xb5b4bu);
    push32(c, 0xb5b50u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb5b50u);
    X86_TICK(c, 9);
    // 0b5b50  add esp, 0x10
    X86_AT(c, 0xb5b50u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b5b53  cmp eax, 0x20
    X86_AT(c, 0xb5b53u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0b5b56  jl 0xb5b77
    X86_AT(c, 0xb5b56u);
    if (x86_cc(c, 12)) { goto L_b5b77; }
    X86_TICK(c, 17);
    // 0b5b58  mov ebx, dword ptr [edi + 0xc]
    X86_AT(c, 0xb5b58u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0b5b5b  lea eax, [ebx + 0x20]
    X86_AT(c, 0xb5b5bu);
    c.r[0] = (uint32_t)(c.r[3] + 0x20u);
    // 0b5b5e  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xb5b5eu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0b5b61  jg 0xb5b77
    X86_AT(c, 0xb5b61u);
    if (x86_cc(c, 15)) { goto L_b5b77; }
    X86_TICK(c, 17);
    // 0b5b63  push esi
    X86_AT(c, 0xb5b63u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b5b64  push ebx
    X86_AT(c, 0xb5b64u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b5b65  push 1
    X86_AT(c, 0xb5b65u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b5b67  lea eax, [edi + 0x20]
    X86_AT(c, 0xb5b67u);
    c.r[0] = (uint32_t)(c.r[7] + 0x20u);
    // 0b5b6a  push eax
    X86_AT(c, 0xb5b6au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5b6b  call 0xd7ce8
    X86_AT(c, 0xb5b6bu);
    push32(c, 0xb5b70u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb5b70u);
    X86_TICK(c, 9);
    // 0b5b70  add esp, 0x10
    X86_AT(c, 0xb5b70u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b5b73  cmp ebx, eax
    X86_AT(c, 0xb5b73u);
    (void)x86_sub(c, c.r[3], c.r[0], 0, 4);
    // 0b5b75  jle 0xb5b84
    X86_AT(c, 0xb5b75u);
    if (x86_cc(c, 14)) { goto L_b5b84; }
L_b5b77:
    X86_TICK(c, 9);
    // 0b5b77  push esi
    X86_AT(c, 0xb5b77u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b5b78  call 0xd84c0
    X86_AT(c, 0xb5b78u);
    push32(c, 0xb5b7du); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xb5b7du);
    X86_TICK(c, 9);
    // 0b5b7d  mov eax, 2
    X86_AT(c, 0xb5b7du);
    c.r[0] = 0x2u;
    // 0b5b82  jmp 0xb5b8c
    X86_AT(c, 0xb5b82u);
    goto L_b5b8c;
L_b5b84:
    X86_TICK(c, 9);
    // 0b5b84  push esi
    X86_AT(c, 0xb5b84u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b5b85  call 0xd84c0
    X86_AT(c, 0xb5b85u);
    push32(c, 0xb5b8au); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xb5b8au);
    X86_TICK(c, 2);
    // 0b5b8a  sub eax, eax
    X86_AT(c, 0xb5b8au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_b5b8c:
    X86_TICK(c, 30);
    // 0b5b8c  add esp, 4
    X86_AT(c, 0xb5b8cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b5b8f  pop edi
    X86_AT(c, 0xb5b8fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b5b90  pop esi
    X86_AT(c, 0xb5b90u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b5b91  pop ebx
    X86_AT(c, 0xb5b91u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b5b92  leave 
    X86_AT(c, 0xb5b92u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b5b93  ret 
    X86_AT(c, 0xb5b93u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5b10u, "ran off the end of a function");
}
void f_000b5d20(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0b5d20  push 0x47
    X86_AT(c, 0xb5d20u);
    { uint32_t v = 0x47u; push32(c, v); }
    // 0b5d22  call 0xd4ce9
    X86_AT(c, 0xb5d22u);
    push32(c, 0xb5d27u); x86_call_known(c, 0xd4ce9u, f_000d4ce9); X86_RET(c, 0xb5d27u);
    X86_TICK(c, 14);
    // 0b5d27  sub eax, eax
    X86_AT(c, 0xb5d27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b5d29  add esp, 4
    X86_AT(c, 0xb5d29u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b5d2c  ret 
    X86_AT(c, 0xb5d2cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5d20u, "ran off the end of a function");
}
void f_000b5d30(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0b5d30  push ebx
    X86_AT(c, 0xb5d30u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b5d31  push esi
    X86_AT(c, 0xb5d31u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b5d32  push edi
    X86_AT(c, 0xb5d32u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b5d33  cmp dword ptr [0x12bcc], 0
    X86_AT(c, 0xb5d33u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x12BCCu))), 0x0u, 0, 4);
    // 0b5d3a  jne 0xb5d4a
    X86_AT(c, 0xb5d3au);
    if (x86_cc(c, 5)) { goto L_b5d4a; }
    X86_TICK(c, 11);
    // 0b5d3c  mov dword ptr [0x12bcc], 1
    X86_AT(c, 0xb5d3cu);
    wr32((c.sbase[3] + (uint32_t)(0x12BCCu)), 0x1u);
    // 0b5d46  sub esi, esi
    X86_AT(c, 0xb5d46u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b5d48  jmp 0xb5d59
    X86_AT(c, 0xb5d48u);
    goto L_b5d59;
L_b5d4a:
    X86_TICK(c, 4);
    // 0b5d4a  mov dword ptr [0x12bcc], 0
    X86_AT(c, 0xb5d4au);
    wr32((c.sbase[3] + (uint32_t)(0x12BCCu)), 0x0u);
    // 0b5d54  mov esi, 1
    X86_AT(c, 0xb5d54u);
    c.r[6] = 0x1u;
L_b5d59:
    X86_TICK(c, 8);
    // 0b5d59  mov eax, dword ptr [0x12bcc]
    X86_AT(c, 0xb5d59u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12BCCu)));
    // 0b5d5e  mov edi, dword ptr [eax*4 + 0x12bd0]
    X86_AT(c, 0xb5d5eu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x12BD0u)));
L_b5d65:
    X86_TICK(c, 14);
    // 0b5d65  mov eax, 0x12bc4
    X86_AT(c, 0xb5d65u);
    c.r[0] = 0x12BC4u;
    // 0b5d6a  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0xb5d6au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 0b5d6e  jne 0xb5dd9
    X86_AT(c, 0xb5d6eu);
    if (x86_cc(c, 5)) { goto L_b5dd9; }
    X86_TICK(c, 15);
    // 0b5d70  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0xb5d70u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0b5d73  cmp edi, dword ptr [eax + edx*4 + 0x14]
    X86_AT(c, 0xb5d73u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x14u))), 0, 4);
    // 0b5d77  ja 0xb5dd9
    X86_AT(c, 0xb5d77u);
    if (x86_cc(c, 7)) { goto L_b5dd9; }
    X86_TICK(c, 18);
    // 0b5d79  push dword ptr [eax + 0x68]
    X86_AT(c, 0xb5d79u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x68u))); push32(c, v); }
    // 0b5d7c  push 6
    X86_AT(c, 0xb5d7cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0b5d7e  push 1
    X86_AT(c, 0xb5d7eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b5d80  push edi
    X86_AT(c, 0xb5d80u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b5d81  call 0xd7ce8
    X86_AT(c, 0xb5d81u);
    push32(c, 0xb5d86u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xb5d86u);
    X86_TICK(c, 9);
    // 0b5d86  add esp, 0x10
    X86_AT(c, 0xb5d86u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b5d89  cmp eax, 6
    X86_AT(c, 0xb5d89u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 0b5d8c  jge 0xb5dad
    X86_AT(c, 0xb5d8cu);
    if (x86_cc(c, 13)) { goto L_b5dad; }
    X86_TICK(c, 12);
    // 0b5d8e  push dword ptr [0x12c2c]
    X86_AT(c, 0xb5d8eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b5d94  call 0xd84c0
    X86_AT(c, 0xb5d94u);
    push32(c, 0xb5d99u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xb5d99u);
    X86_TICK(c, 13);
    // 0b5d99  mov dword ptr [0x12c2c], 0
    X86_AT(c, 0xb5d99u);
    wr32((c.sbase[3] + (uint32_t)(0x12C2Cu)), 0x0u);
    // 0b5da3  mov eax, 2
    X86_AT(c, 0xb5da3u);
    c.r[0] = 0x2u;
    // 0b5da8  add esp, 4
    X86_AT(c, 0xb5da8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b5dab  jmp 0xb5e06
    X86_AT(c, 0xb5dabu);
    goto L_b5e06;
L_b5dad:
    X86_TICK(c, 12);
    // 0b5dad  cmp byte ptr [edi], 0xfe
    X86_AT(c, 0xb5dadu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xFEu, 0, 1);
    // 0b5db0  jne 0xb5dd4
    X86_AT(c, 0xb5db0u);
    if (x86_cc(c, 5)) { goto L_b5dd4; }
    X86_TICK(c, 14);
    // 0b5db2  mov dword ptr [0x12c28], 1
    X86_AT(c, 0xb5db2u);
    wr32((c.sbase[3] + (uint32_t)(0x12C28u)), 0x1u);
    // 0b5dbc  push dword ptr [0x12c2c]
    X86_AT(c, 0xb5dbcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C2Cu))); push32(c, v); }
    // 0b5dc2  call 0xd84c0
    X86_AT(c, 0xb5dc2u);
    push32(c, 0xb5dc7u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xb5dc7u);
    X86_TICK(c, 4);
    // 0b5dc7  mov dword ptr [0x12c2c], 0
    X86_AT(c, 0xb5dc7u);
    wr32((c.sbase[3] + (uint32_t)(0x12C2Cu)), 0x0u);
    // 0b5dd1  add esp, 4
    X86_AT(c, 0xb5dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b5dd4:
    X86_TICK(c, 9);
    // 0b5dd4  add edi, 6
    X86_AT(c, 0xb5dd4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0b5dd7  jmp 0xb5d65
    X86_AT(c, 0xb5dd7u);
    X86_POLL(c, 0xb5d65u); goto L_b5d65;
L_b5dd9:
    X86_TICK(c, 18);
    // 0b5dd9  mov eax, 0x12bc4
    X86_AT(c, 0xb5dd9u);
    c.r[0] = 0x12BC4u;
    // 0b5dde  mov bl, byte ptr [eax + 0x1c]
    X86_AT(c, 0xb5ddeu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu))));
    // 0b5de1  cmp dword ptr [eax + 0x64], 0
    X86_AT(c, 0xb5de1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x64u))), 0x0u, 0, 4);
    // 0b5de5  jne 0xb5df6
    X86_AT(c, 0xb5de5u);
    if (x86_cc(c, 5)) { goto L_b5df6; }
    X86_TICK(c, 16);
    // 0b5de7  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0xb5de7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0b5dea  mov edx, dword ptr [eax + edx*4 + 0x14]
    X86_AT(c, 0xb5deau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x14u)));
    // 0b5dee  mov cl, byte ptr [edx]
    X86_AT(c, 0xb5deeu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0b5df0  mov byte ptr [eax + 0x1c], cl
    X86_AT(c, 0xb5df0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu)), g8(c, 1));
    // 0b5df3  mov byte ptr [edx], 0xfd
    X86_AT(c, 0xb5df3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0xFDu);
L_b5df6:
    X86_TICK(c, 13);
    // 0b5df6  mov eax, dword ptr [esi*4 + 0x12bd8]
    X86_AT(c, 0xb5df6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x12BD8u)));
    // 0b5dfd  mov byte ptr [eax], bl
    X86_AT(c, 0xb5dfdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), g8(c, 3));
    // 0b5dff  call 0xd51a4
    X86_AT(c, 0xb5dffu);
    push32(c, 0xb5e04u); x86_call_known(c, 0xd51a4u, f_000d51a4); X86_RET(c, 0xb5e04u);
    X86_TICK(c, 2);
    // 0b5e04  sub eax, eax
    X86_AT(c, 0xb5e04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_b5e06:
    X86_TICK(c, 22);
    // 0b5e06  pop edi
    X86_AT(c, 0xb5e06u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b5e07  pop esi
    X86_AT(c, 0xb5e07u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b5e08  pop ebx
    X86_AT(c, 0xb5e08u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b5e09  ret 
    X86_AT(c, 0xb5e09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5d30u, "ran off the end of a function");
}
void f_000b5e0c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0b5e0c  push 0x95f0
    X86_AT(c, 0xb5e0cu);
    { uint32_t v = 0x95F0u; push32(c, v); }
    // 0b5e11  call 0xd8814
    X86_AT(c, 0xb5e11u);
    push32(c, 0xb5e16u); x86_call_known(c, 0xd8814u, f_000d8814); X86_RET(c, 0xb5e16u);
    X86_TICK(c, 11);
    // 0b5e16  add esp, 4
    X86_AT(c, 0xb5e16u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b5e19  mov dword ptr [0x12c18], eax
    X86_AT(c, 0xb5e19u);
    wr32((c.sbase[3] + (uint32_t)(0x12C18u)), c.r[0]);
    // 0b5e1e  and eax, eax
    X86_AT(c, 0xb5e1eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5e20  jne 0xb5e36
    X86_AT(c, 0xb5e20u);
    if (x86_cc(c, 5)) { goto L_b5e36; }
    X86_TICK(c, 9);
    // 0b5e22  push 0x10c4
    X86_AT(c, 0xb5e22u);
    { uint32_t v = 0x10C4u; push32(c, v); }
    // 0b5e27  call 0xbc50c
    X86_AT(c, 0xb5e27u);
    push32(c, 0xb5e2cu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb5e2cu);
    X86_TICK(c, 11);
    // 0b5e2c  mov eax, 0xffffffff
    X86_AT(c, 0xb5e2cu);
    c.r[0] = 0xFFFFFFFFu;
    // 0b5e31  add esp, 4
    X86_AT(c, 0xb5e31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b5e34  jmp 0xb5e93
    X86_AT(c, 0xb5e34u);
    goto L_b5e93;
L_b5e36:
    X86_TICK(c, 17);
    // 0b5e36  mov eax, dword ptr [0x12c18]
    X86_AT(c, 0xb5e36u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x12C18u)));
    // 0b5e3b  lea edx, [eax + 0x4000]
    X86_AT(c, 0xb5e3bu);
    c.r[2] = (uint32_t)(c.r[0] + 0x4000u);
    // 0b5e41  mov dword ptr [0x12c1c], edx
    X86_AT(c, 0xb5e41u);
    wr32((c.sbase[3] + (uint32_t)(0x12C1Cu)), c.r[2]);
    // 0b5e47  push eax
    X86_AT(c, 0xb5e47u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b5e48  call 0xd49c3
    X86_AT(c, 0xb5e48u);
    push32(c, 0xb5e4du); x86_call_known(c, 0xd49c3u, f_000d49c3); X86_RET(c, 0xb5e4du);
    X86_TICK(c, 9);
    // 0b5e4d  add esp, 4
    X86_AT(c, 0xb5e4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b5e50  and eax, eax
    X86_AT(c, 0xb5e50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5e52  je 0xb5e73
    X86_AT(c, 0xb5e52u);
    if (x86_cc(c, 4)) { goto L_b5e73; }
    X86_TICK(c, 9);
    // 0b5e54  push 0x1108
    X86_AT(c, 0xb5e54u);
    { uint32_t v = 0x1108u; push32(c, v); }
    // 0b5e59  call 0xbc50c
    X86_AT(c, 0xb5e59u);
    push32(c, 0xb5e5eu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb5e5eu);
    X86_TICK(c, 12);
    // 0b5e5e  push dword ptr [0x12c18]
    X86_AT(c, 0xb5e5eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C18u))); push32(c, v); }
    // 0b5e64  call 0xd8800
    X86_AT(c, 0xb5e64u);
    push32(c, 0xb5e69u); x86_call_known(c, 0xd8800u, f_000d8800); X86_RET(c, 0xb5e69u);
    X86_TICK(c, 11);
    // 0b5e69  mov eax, 0xffffffff
    X86_AT(c, 0xb5e69u);
    c.r[0] = 0xFFFFFFFFu;
    // 0b5e6e  add esp, 8
    X86_AT(c, 0xb5e6eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b5e71  jmp 0xb5e93
    X86_AT(c, 0xb5e71u);
    goto L_b5e93;
L_b5e73:
    X86_TICK(c, 7);
    // 0b5e73  call 0xb5afc
    X86_AT(c, 0xb5e73u);
    push32(c, 0xb5e78u); x86_call_known(c, 0xb5afcu, f_000b5afc); X86_RET(c, 0xb5e78u);
    X86_TICK(c, 19);
    // 0b5e78  push dword ptr [0x12c18]
    X86_AT(c, 0xb5e78u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C18u))); push32(c, v); }
    // 0b5e7e  push 0x55f0
    X86_AT(c, 0xb5e7eu);
    { uint32_t v = 0x55F0u; push32(c, v); }
    // 0b5e83  push dword ptr [0x12c1c]
    X86_AT(c, 0xb5e83u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C1Cu))); push32(c, v); }
    // 0b5e89  call 0xb5514
    X86_AT(c, 0xb5e89u);
    push32(c, 0xb5e8eu); x86_call_known(c, 0xb5514u, f_000b5514); X86_RET(c, 0xb5e8eu);
    X86_TICK(c, 4);
    // 0b5e8e  sub eax, eax
    X86_AT(c, 0xb5e8eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b5e90  add esp, 0xc
    X86_AT(c, 0xb5e90u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_b5e93:
    X86_TICK(c, 10);
    // 0b5e93  ret 
    X86_AT(c, 0xb5e93u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5e0cu, "ran off the end of a function");
}
void f_000b5e94(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0b5e94  push dword ptr [0x12c18]
    X86_AT(c, 0xb5e94u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12C18u))); push32(c, v); }
    // 0b5e9a  call 0xd8800
    X86_AT(c, 0xb5e9au);
    push32(c, 0xb5e9fu); x86_call_known(c, 0xd8800u, f_000d8800); X86_RET(c, 0xb5e9fu);
    X86_TICK(c, 7);
    // 0b5e9f  call 0xd4a2a
    X86_AT(c, 0xb5e9fu);
    push32(c, 0xb5ea4u); x86_call_known(c, 0xd4a2au, f_000d4a2a); X86_RET(c, 0xb5ea4u);
    X86_TICK(c, 12);
    // 0b5ea4  add esp, 4
    X86_AT(c, 0xb5ea4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b5ea7  ret 
    X86_AT(c, 0xb5ea7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5e94u, "ran off the end of a function");
}
void f_000b5ea8(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0b5ea8  push ebp
    X86_AT(c, 0xb5ea8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b5ea9  mov ebp, esp
    X86_AT(c, 0xb5ea9u);
    c.r[5] = c.r[4];
    // 0b5eab  push dword ptr [ebp + 8]
    X86_AT(c, 0xb5eabu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0b5eae  call 0xb55a0
    X86_AT(c, 0xb5eaeu);
    push32(c, 0xb5eb3u); x86_call_known(c, 0xb55a0u, f_000b55a0); X86_RET(c, 0xb5eb3u);
    X86_TICK(c, 9);
    // 0b5eb3  add esp, 4
    X86_AT(c, 0xb5eb3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b5eb6  inc eax
    X86_AT(c, 0xb5eb6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0b5eb7  je 0xb5ec7
    X86_AT(c, 0xb5eb7u);
    if (x86_cc(c, 4)) { goto L_b5ec7; }
    X86_TICK(c, 17);
    // 0b5eb9  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xb5eb9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0b5ebc  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xb5ebcu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0b5ebf  call 0xb5968
    X86_AT(c, 0xb5ebfu);
    push32(c, 0xb5ec4u); x86_call_known(c, 0xb5968u, f_000b5968); X86_RET(c, 0xb5ec4u);
    X86_TICK(c, 2);
    // 0b5ec4  add esp, 8
    X86_AT(c, 0xb5ec4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_b5ec7:
    X86_TICK(c, 16);
    // 0b5ec7  leave 
    X86_AT(c, 0xb5ec7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b5ec8  ret 
    X86_AT(c, 0xb5ec8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5ea8u, "ran off the end of a function");
}
void f_000b5ecc(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0b5ecc  push edi
    X86_AT(c, 0xb5eccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b5ecd  mov edi, 0xffffffff
    X86_AT(c, 0xb5ecdu);
    c.r[7] = 0xFFFFFFFFu;
    // 0b5ed2  push 0xb20
    X86_AT(c, 0xb5ed2u);
    { uint32_t v = 0xB20u; push32(c, v); }
    // 0b5ed7  push 0x12c30
    X86_AT(c, 0xb5ed7u);
    { uint32_t v = 0x12C30u; push32(c, v); }
    // 0b5edc  push 0x1150
    X86_AT(c, 0xb5edcu);
    { uint32_t v = 0x1150u; push32(c, v); }
    // 0b5ee1  call 0xb5b10
    X86_AT(c, 0xb5ee1u);
    push32(c, 0xb5ee6u); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb5ee6u);
    X86_TICK(c, 9);
    // 0b5ee6  add esp, 0xc
    X86_AT(c, 0xb5ee6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b5ee9  and eax, eax
    X86_AT(c, 0xb5ee9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5eeb  je 0xb5eef
    X86_AT(c, 0xb5eebu);
    if (x86_cc(c, 4)) { goto L_b5eef; }
    X86_TICK(c, 2);
    // 0b5eed  sub edi, edi
    X86_AT(c, 0xb5eedu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b5eef:
    X86_TICK(c, 13);
    // 0b5eef  push 0x46f
    X86_AT(c, 0xb5eefu);
    { uint32_t v = 0x46Fu; push32(c, v); }
    // 0b5ef4  push 0x18e38
    X86_AT(c, 0xb5ef4u);
    { uint32_t v = 0x18E38u; push32(c, v); }
    // 0b5ef9  push 0x1160
    X86_AT(c, 0xb5ef9u);
    { uint32_t v = 0x1160u; push32(c, v); }
    // 0b5efe  call 0xb5b10
    X86_AT(c, 0xb5efeu);
    push32(c, 0xb5f03u); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb5f03u);
    X86_TICK(c, 9);
    // 0b5f03  add esp, 0xc
    X86_AT(c, 0xb5f03u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b5f06  and eax, eax
    X86_AT(c, 0xb5f06u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5f08  je 0xb5f0c
    X86_AT(c, 0xb5f08u);
    if (x86_cc(c, 4)) { goto L_b5f0c; }
    X86_TICK(c, 2);
    // 0b5f0a  sub edi, edi
    X86_AT(c, 0xb5f0au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b5f0c:
    X86_TICK(c, 13);
    // 0b5f0c  push 0x939
    X86_AT(c, 0xb5f0cu);
    { uint32_t v = 0x939u; push32(c, v); }
    // 0b5f11  push 0x13750
    X86_AT(c, 0xb5f11u);
    { uint32_t v = 0x13750u; push32(c, v); }
    // 0b5f16  push 0x1170
    X86_AT(c, 0xb5f16u);
    { uint32_t v = 0x1170u; push32(c, v); }
    // 0b5f1b  call 0xb5b10
    X86_AT(c, 0xb5f1bu);
    push32(c, 0xb5f20u); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb5f20u);
    X86_TICK(c, 9);
    // 0b5f20  add esp, 0xc
    X86_AT(c, 0xb5f20u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b5f23  and eax, eax
    X86_AT(c, 0xb5f23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5f25  je 0xb5f29
    X86_AT(c, 0xb5f25u);
    if (x86_cc(c, 4)) { goto L_b5f29; }
    X86_TICK(c, 2);
    // 0b5f27  sub edi, edi
    X86_AT(c, 0xb5f27u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b5f29:
    X86_TICK(c, 13);
    // 0b5f29  push 0x4042
    X86_AT(c, 0xb5f29u);
    { uint32_t v = 0x4042u; push32(c, v); }
    // 0b5f2e  push 0x1408c
    X86_AT(c, 0xb5f2eu);
    { uint32_t v = 0x1408Cu; push32(c, v); }
    // 0b5f33  push 0x1180
    X86_AT(c, 0xb5f33u);
    { uint32_t v = 0x1180u; push32(c, v); }
    // 0b5f38  call 0xb5b10
    X86_AT(c, 0xb5f38u);
    push32(c, 0xb5f3du); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb5f3du);
    X86_TICK(c, 9);
    // 0b5f3d  add esp, 0xc
    X86_AT(c, 0xb5f3du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b5f40  and eax, eax
    X86_AT(c, 0xb5f40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5f42  je 0xb5f46
    X86_AT(c, 0xb5f42u);
    if (x86_cc(c, 4)) { goto L_b5f46; }
    X86_TICK(c, 2);
    // 0b5f44  sub edi, edi
    X86_AT(c, 0xb5f44u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b5f46:
    X86_TICK(c, 13);
    // 0b5f46  push 0xd66
    X86_AT(c, 0xb5f46u);
    { uint32_t v = 0xD66u; push32(c, v); }
    // 0b5f4b  push 0x180d0
    X86_AT(c, 0xb5f4bu);
    { uint32_t v = 0x180D0u; push32(c, v); }
    // 0b5f50  push 0x1194
    X86_AT(c, 0xb5f50u);
    { uint32_t v = 0x1194u; push32(c, v); }
    // 0b5f55  call 0xb5b10
    X86_AT(c, 0xb5f55u);
    push32(c, 0xb5f5au); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb5f5au);
    X86_TICK(c, 9);
    // 0b5f5a  add esp, 0xc
    X86_AT(c, 0xb5f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b5f5d  and eax, eax
    X86_AT(c, 0xb5f5du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5f5f  je 0xb5f63
    X86_AT(c, 0xb5f5fu);
    if (x86_cc(c, 4)) { goto L_b5f63; }
    X86_TICK(c, 2);
    // 0b5f61  sub edi, edi
    X86_AT(c, 0xb5f61u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b5f63:
    X86_TICK(c, 13);
    // 0b5f63  push 0x50cc
    X86_AT(c, 0xb5f63u);
    { uint32_t v = 0x50CCu; push32(c, v); }
    // 0b5f68  push 0x192a8
    X86_AT(c, 0xb5f68u);
    { uint32_t v = 0x192A8u; push32(c, v); }
    // 0b5f6d  push 0x11a4
    X86_AT(c, 0xb5f6du);
    { uint32_t v = 0x11A4u; push32(c, v); }
    // 0b5f72  call 0xb5b10
    X86_AT(c, 0xb5f72u);
    push32(c, 0xb5f77u); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb5f77u);
    X86_TICK(c, 9);
    // 0b5f77  add esp, 0xc
    X86_AT(c, 0xb5f77u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b5f7a  and eax, eax
    X86_AT(c, 0xb5f7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5f7c  je 0xb5f80
    X86_AT(c, 0xb5f7cu);
    if (x86_cc(c, 4)) { goto L_b5f80; }
    X86_TICK(c, 2);
    // 0b5f7e  sub edi, edi
    X86_AT(c, 0xb5f7eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b5f80:
    X86_TICK(c, 13);
    // 0b5f80  push 0x190d
    X86_AT(c, 0xb5f80u);
    { uint32_t v = 0x190Du; push32(c, v); }
    // 0b5f85  push 0x1e374
    X86_AT(c, 0xb5f85u);
    { uint32_t v = 0x1E374u; push32(c, v); }
    // 0b5f8a  push 0x11b8
    X86_AT(c, 0xb5f8au);
    { uint32_t v = 0x11B8u; push32(c, v); }
    // 0b5f8f  call 0xb5b10
    X86_AT(c, 0xb5f8fu);
    push32(c, 0xb5f94u); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb5f94u);
    X86_TICK(c, 9);
    // 0b5f94  add esp, 0xc
    X86_AT(c, 0xb5f94u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b5f97  and eax, eax
    X86_AT(c, 0xb5f97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5f99  je 0xb5f9d
    X86_AT(c, 0xb5f99u);
    if (x86_cc(c, 4)) { goto L_b5f9d; }
    X86_TICK(c, 2);
    // 0b5f9b  sub edi, edi
    X86_AT(c, 0xb5f9bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b5f9d:
    X86_TICK(c, 13);
    // 0b5f9d  push 0x407a
    X86_AT(c, 0xb5f9du);
    { uint32_t v = 0x407Au; push32(c, v); }
    // 0b5fa2  push 0x1fc84
    X86_AT(c, 0xb5fa2u);
    { uint32_t v = 0x1FC84u; push32(c, v); }
    // 0b5fa7  push 0x11cc
    X86_AT(c, 0xb5fa7u);
    { uint32_t v = 0x11CCu; push32(c, v); }
    // 0b5fac  call 0xb5b10
    X86_AT(c, 0xb5facu);
    push32(c, 0xb5fb1u); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb5fb1u);
    X86_TICK(c, 9);
    // 0b5fb1  add esp, 0xc
    X86_AT(c, 0xb5fb1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b5fb4  and eax, eax
    X86_AT(c, 0xb5fb4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5fb6  je 0xb5fba
    X86_AT(c, 0xb5fb6u);
    if (x86_cc(c, 4)) { goto L_b5fba; }
    X86_TICK(c, 2);
    // 0b5fb8  sub edi, edi
    X86_AT(c, 0xb5fb8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b5fba:
    X86_TICK(c, 13);
    // 0b5fba  push 0x217a
    X86_AT(c, 0xb5fbau);
    { uint32_t v = 0x217Au; push32(c, v); }
    // 0b5fbf  push 0x23d00
    X86_AT(c, 0xb5fbfu);
    { uint32_t v = 0x23D00u; push32(c, v); }
    // 0b5fc4  push 0x11e0
    X86_AT(c, 0xb5fc4u);
    { uint32_t v = 0x11E0u; push32(c, v); }
    // 0b5fc9  call 0xb5b10
    X86_AT(c, 0xb5fc9u);
    push32(c, 0xb5fceu); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb5fceu);
    X86_TICK(c, 9);
    // 0b5fce  add esp, 0xc
    X86_AT(c, 0xb5fceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b5fd1  and eax, eax
    X86_AT(c, 0xb5fd1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5fd3  je 0xb5fd7
    X86_AT(c, 0xb5fd3u);
    if (x86_cc(c, 4)) { goto L_b5fd7; }
    X86_TICK(c, 2);
    // 0b5fd5  sub edi, edi
    X86_AT(c, 0xb5fd5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b5fd7:
    X86_TICK(c, 13);
    // 0b5fd7  push 0x3f2d
    X86_AT(c, 0xb5fd7u);
    { uint32_t v = 0x3F2Du; push32(c, v); }
    // 0b5fdc  push 0x25e7c
    X86_AT(c, 0xb5fdcu);
    { uint32_t v = 0x25E7Cu; push32(c, v); }
    // 0b5fe1  push 0x11f4
    X86_AT(c, 0xb5fe1u);
    { uint32_t v = 0x11F4u; push32(c, v); }
    // 0b5fe6  call 0xb5b10
    X86_AT(c, 0xb5fe6u);
    push32(c, 0xb5febu); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb5febu);
    X86_TICK(c, 9);
    // 0b5feb  add esp, 0xc
    X86_AT(c, 0xb5febu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b5fee  and eax, eax
    X86_AT(c, 0xb5feeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b5ff0  je 0xb5ff4
    X86_AT(c, 0xb5ff0u);
    if (x86_cc(c, 4)) { goto L_b5ff4; }
    X86_TICK(c, 2);
    // 0b5ff2  sub edi, edi
    X86_AT(c, 0xb5ff2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b5ff4:
    X86_TICK(c, 13);
    // 0b5ff4  push 0x30a2
    X86_AT(c, 0xb5ff4u);
    { uint32_t v = 0x30A2u; push32(c, v); }
    // 0b5ff9  push 0x29dac
    X86_AT(c, 0xb5ff9u);
    { uint32_t v = 0x29DACu; push32(c, v); }
    // 0b5ffe  push 0x1208
    X86_AT(c, 0xb5ffeu);
    { uint32_t v = 0x1208u; push32(c, v); }
    // 0b6003  call 0xb5b10
    X86_AT(c, 0xb6003u);
    push32(c, 0xb6008u); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb6008u);
    X86_TICK(c, 9);
    // 0b6008  add esp, 0xc
    X86_AT(c, 0xb6008u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b600b  and eax, eax
    X86_AT(c, 0xb600bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b600d  je 0xb6011
    X86_AT(c, 0xb600du);
    if (x86_cc(c, 4)) { goto L_b6011; }
    X86_TICK(c, 2);
    // 0b600f  sub edi, edi
    X86_AT(c, 0xb600fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b6011:
    X86_TICK(c, 13);
    // 0b6011  push 0x8ddd
    X86_AT(c, 0xb6011u);
    { uint32_t v = 0x8DDDu; push32(c, v); }
    // 0b6016  push 0x3b318
    X86_AT(c, 0xb6016u);
    { uint32_t v = 0x3B318u; push32(c, v); }
    // 0b601b  push 0x121c
    X86_AT(c, 0xb601bu);
    { uint32_t v = 0x121Cu; push32(c, v); }
    // 0b6020  call 0xb5b10
    X86_AT(c, 0xb6020u);
    push32(c, 0xb6025u); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb6025u);
    X86_TICK(c, 9);
    // 0b6025  add esp, 0xc
    X86_AT(c, 0xb6025u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b6028  and eax, eax
    X86_AT(c, 0xb6028u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b602a  je 0xb602e
    X86_AT(c, 0xb602au);
    if (x86_cc(c, 4)) { goto L_b602e; }
    X86_TICK(c, 2);
    // 0b602c  sub edi, edi
    X86_AT(c, 0xb602cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b602e:
    X86_TICK(c, 13);
    // 0b602e  push 0xe4c7
    X86_AT(c, 0xb602eu);
    { uint32_t v = 0xE4C7u; push32(c, v); }
    // 0b6033  push 0x2ce50
    X86_AT(c, 0xb6033u);
    { uint32_t v = 0x2CE50u; push32(c, v); }
    // 0b6038  push 0x1230
    X86_AT(c, 0xb6038u);
    { uint32_t v = 0x1230u; push32(c, v); }
    // 0b603d  call 0xb5b10
    X86_AT(c, 0xb603du);
    push32(c, 0xb6042u); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb6042u);
    X86_TICK(c, 9);
    // 0b6042  add esp, 0xc
    X86_AT(c, 0xb6042u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b6045  and eax, eax
    X86_AT(c, 0xb6045u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b6047  je 0xb604b
    X86_AT(c, 0xb6047u);
    if (x86_cc(c, 4)) { goto L_b604b; }
    X86_TICK(c, 2);
    // 0b6049  sub edi, edi
    X86_AT(c, 0xb6049u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b604b:
    X86_TICK(c, 13);
    // 0b604b  push 0x14a3
    X86_AT(c, 0xb604bu);
    { uint32_t v = 0x14A3u; push32(c, v); }
    // 0b6050  push 0x440f8
    X86_AT(c, 0xb6050u);
    { uint32_t v = 0x440F8u; push32(c, v); }
    // 0b6055  push 0x1244
    X86_AT(c, 0xb6055u);
    { uint32_t v = 0x1244u; push32(c, v); }
    // 0b605a  call 0xb5b10
    X86_AT(c, 0xb605au);
    push32(c, 0xb605fu); x86_call_known(c, 0xb5b10u, f_000b5b10); X86_RET(c, 0xb605fu);
    X86_TICK(c, 9);
    // 0b605f  add esp, 0xc
    X86_AT(c, 0xb605fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b6062  and eax, eax
    X86_AT(c, 0xb6062u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b6064  je 0xb6068
    X86_AT(c, 0xb6064u);
    if (x86_cc(c, 4)) { goto L_b6068; }
    X86_TICK(c, 2);
    // 0b6066  sub edi, edi
    X86_AT(c, 0xb6066u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b6068:
    X86_TICK(c, 7);
    // 0b6068  and edi, edi
    X86_AT(c, 0xb6068u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0b606a  jne 0xb6079
    X86_AT(c, 0xb606au);
    if (x86_cc(c, 5)) { goto L_b6079; }
    X86_TICK(c, 9);
    // 0b606c  push 0x1258
    X86_AT(c, 0xb606cu);
    { uint32_t v = 0x1258u; push32(c, v); }
    // 0b6071  call 0xbc50c
    X86_AT(c, 0xb6071u);
    push32(c, 0xb6076u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb6076u);
    X86_TICK(c, 2);
    // 0b6076  add esp, 4
    X86_AT(c, 0xb6076u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b6079:
    X86_TICK(c, 14);
    // 0b6079  pop edi
    X86_AT(c, 0xb6079u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b607a  ret 
    X86_AT(c, 0xb607au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb5eccu, "ran off the end of a function");
}
void f_000b607c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0b607c  push ebp
    X86_AT(c, 0xb607cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b607d  mov ebp, esp
    X86_AT(c, 0xb607du);
    c.r[5] = c.r[4];
    // 0b607f  push edi
    X86_AT(c, 0xb607fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b6080  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb6080u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b6083  call 0xb5d20
    X86_AT(c, 0xb6083u);
    push32(c, 0xb6088u); x86_call_known(c, 0xb5d20u, f_000b5d20); X86_RET(c, 0xb6088u);
    X86_TICK(c, 11);
    // 0b6088  push 0x40
    X86_AT(c, 0xb6088u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0b608a  push 0x47
    X86_AT(c, 0xb608au);
    { uint32_t v = 0x47u; push32(c, v); }
    // 0b608c  call 0xd4a81
    X86_AT(c, 0xb608cu);
    push32(c, 0xb6091u); x86_call_known(c, 0xd4a81u, f_000d4a81); X86_RET(c, 0xb6091u);
    X86_TICK(c, 31);
    // 0b6091  sub eax, eax
    X86_AT(c, 0xb6091u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b6093  mov edx, dword ptr [edi*4 + 0x4559c]
    X86_AT(c, 0xb6093u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0x4559Cu)));
    // 0b609a  mov dword ptr [edx + 0x10], eax
    X86_AT(c, 0xb609au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)), c.r[0]);
    // 0b609d  mov dword ptr [edx + 0x14], eax
    X86_AT(c, 0xb609du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x14u)), c.r[0]);
    // 0b60a0  push edx
    X86_AT(c, 0xb60a0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0b60a1  push 0x7f
    X86_AT(c, 0xb60a1u);
    { uint32_t v = 0x7Fu; push32(c, v); }
    // 0b60a3  movzx eax, byte ptr [edx + 0x1c]
    X86_AT(c, 0xb60a3u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x1Cu)));
    // 0b60a7  push eax
    X86_AT(c, 0xb60a7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b60a8  push 0x47
    X86_AT(c, 0xb60a8u);
    { uint32_t v = 0x47u; push32(c, v); }
    // 0b60aa  call 0xd4cbc
    X86_AT(c, 0xb60aau);
    push32(c, 0xb60afu); x86_call_known(c, 0xd4cbcu, f_000d4cbc); X86_RET(c, 0xb60afu);
    X86_TICK(c, 22);
    // 0b60af  add esp, 0x18
    X86_AT(c, 0xb60afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0b60b2  pop edi
    X86_AT(c, 0xb60b2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b60b3  leave 
    X86_AT(c, 0xb60b3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b60b4  ret 
    X86_AT(c, 0xb60b4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb607cu, "ran off the end of a function");
}
void f_000b60b8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0b60b8  push ebp
    X86_AT(c, 0xb60b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b60b9  mov ebp, esp
    X86_AT(c, 0xb60b9u);
    c.r[5] = c.r[4];
    // 0b60bb  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xb60bbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0b60be  push dword ptr [ebp + 8]
    X86_AT(c, 0xb60beu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0b60c1  push 1
    X86_AT(c, 0xb60c1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b60c3  call 0xd5050
    X86_AT(c, 0xb60c3u);
    push32(c, 0xb60c8u); x86_call_known(c, 0xd5050u, f_000d5050); X86_RET(c, 0xb60c8u);
    X86_TICK(c, 16);
    // 0b60c8  leave 
    X86_AT(c, 0xb60c8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b60c9  ret 
    X86_AT(c, 0xb60c9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb60b8u, "ran off the end of a function");
}
}
